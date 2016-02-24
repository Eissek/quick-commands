/* Generated from csi.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:03
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: csi.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -local -no-trace -output-file csi.c
   used units: library eval chicken_2dsyntax ports extras
*/

#include "chicken.h"

#include <signal.h>

#if defined(HAVE_DIRECT_H)
# include <direct.h>
#else
# define _getcwd(buf, len)       NULL
#endif

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[405];
static double C_possibly_force_alignment;


/* from k2017 */
static C_word C_fcall stub63(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub63(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_mpointer(&C_a,(void*)_getcwd(t0,t1));
return C_r;}

C_noret_decl(f_2814)
static void C_ccall f_2814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2817)
static void C_ccall f_2817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2130)
static void C_ccall f_2130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5846)
static void C_ccall f_5846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5843)
static void C_ccall f_5843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5840)
static void C_ccall f_5840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5849)
static void C_ccall f_5849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4605)
static void C_fcall f_4605(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4608)
static void C_fcall f_4608(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5812)
static void C_ccall f_5812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5818)
static void C_ccall f_5818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4612)
static void C_ccall f_4612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5821)
static void C_ccall f_5821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5827)
static void C_ccall f_5827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4628)
static void C_ccall f_4628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4638)
static void C_fcall f_4638(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3663)
static void C_ccall f_3663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4648)
static void C_ccall f_4648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3657)
static void C_ccall f_3657(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3823)
static void C_ccall f_3823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3820)
static void C_ccall f_3820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5855)
static void C_ccall f_5855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5852)
static void C_ccall f_5852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5858)
static void C_fcall f_5858(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4834)
static void C_fcall f_4834(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4654)
static void C_ccall f_4654(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4657)
static void C_ccall f_4657(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4651)
static void C_ccall f_4651(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3847)
static void C_fcall f_3847(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4843)
static void C_fcall f_4843(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4663)
static void C_ccall f_4663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4660)
static void C_ccall f_4660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4301)
static void C_ccall f_4301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3418)
static C_word C_fcall f_3418(C_word t0);
C_noret_decl(f_4409)
static void C_ccall f_4409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5629)
static void C_ccall f_5629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5626)
static void C_ccall f_5626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3255)
static void C_ccall f_3255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5623)
static void C_ccall f_5623(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5620)
static void C_ccall f_5620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4328)
static void C_ccall f_4328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3838)
static void C_ccall f_3838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4332)
static void C_fcall f_4332(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3283)
static void C_ccall f_3283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3448)
static void C_ccall f_3448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3835)
static void C_fcall f_3835(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4246)
static void C_ccall f_4246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4346)
static void C_fcall f_4346(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3456)
static void C_ccall f_3456(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2091)
static void C_ccall f_2091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6653)
static void C_ccall f_6653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6655)
static void C_ccall f_6655(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3450)
static void C_fcall f_3450(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4354)
static void C_ccall f_4354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6650)
static void C_ccall f_6650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1937)
static void C_ccall f_1937(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4448)
static void C_ccall f_4448(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3468)
static void C_fcall f_3468(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4440)
static void C_ccall f_4440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5666)
static void C_fcall f_5666(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4264)
static void C_ccall f_4264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6647)
static void C_ccall f_6647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3463)
static void C_ccall f_3463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5052)
static void C_fcall f_5052(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6641)
static void C_ccall f_6641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4457)
static void C_fcall f_4457(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4459)
static void C_fcall f_4459(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5638)
static void C_fcall f_5638(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5635)
static void C_ccall f_5635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5632)
static void C_fcall f_5632(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1911)
static void C_ccall f_1911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1918)
static void C_ccall f_1918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4462)
static void C_fcall f_4462(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5647)
static void C_ccall f_5647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5641)
static void C_ccall f_5641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5644)
static void C_fcall f_5644(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6663)
static void C_ccall f_6663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6667)
static void C_ccall f_6667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6669)
static void C_ccall f_6669(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4399)
static void C_ccall f_4399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1949)
static void C_ccall f_1949(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6091)
static void C_fcall f_6091(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3052)
static void C_ccall f_3052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2271)
static void C_ccall f_2271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6080)
static void C_ccall f_6080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6083)
static void C_ccall f_6083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6086)
static void C_ccall f_6086(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5093)
static void C_fcall f_5093(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6401)
static void C_ccall f_6401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3079)
static void C_ccall f_3079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1920)
static void C_ccall f_1920(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2281)
static void C_fcall f_2281(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6633)
static void C_ccall f_6633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6637)
static void C_ccall f_6637(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3046)
static void C_ccall f_3046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3201)
static void C_ccall f_3201(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3204)
static void C_ccall f_3204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3040)
static void C_ccall f_3040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3811)
static void C_ccall f_3811(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6421)
static void C_ccall f_6421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1904)
static void C_fcall f_1904(C_word t0) C_noret;
C_noret_decl(f_6620)
static void C_ccall f_6620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3099)
static void C_ccall f_3099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1908)
static void C_ccall f_1908(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6186)
static void C_ccall f_6186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6189)
static void C_ccall f_6189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3091)
static void C_ccall f_3091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5658)
static void C_fcall f_5658(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3207)
static void C_ccall f_3207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5650)
static void C_ccall f_5650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5652)
static void C_fcall f_5652(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6418)
static void C_ccall f_6418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6415)
static void C_ccall f_6415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5001)
static void C_ccall f_5001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6430)
static void C_ccall f_6430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3223)
static void C_ccall f_3223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6449)
static void C_ccall f_6449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3231)
static void C_ccall f_3231(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3235)
static void C_ccall f_3235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4236)
static void C_fcall f_4236(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6436)
static void C_ccall f_6436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6439)
static void C_ccall f_6439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3085)
static void C_ccall f_3085(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3085)
static void C_ccall f_3085r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3243)
static void C_ccall f_3243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4187)
static void C_ccall f_4187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3239)
static void C_ccall f_3239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5038)
static void C_ccall f_5038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6466)
static void C_ccall f_6466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5035)
static void C_ccall f_5035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3251)
static void C_ccall f_3251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4259)
static void C_ccall f_4259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3247)
static void C_ccall f_3247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2384)
static void C_ccall f_2384(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6456)
static void C_ccall f_6456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3028)
static void C_ccall f_3028(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4780)
static void C_ccall f_4780(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4223)
static void C_fcall f_4223(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4222)
static void C_ccall f_4222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3022)
static void C_ccall f_3022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4227)
static void C_ccall f_4227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4777)
static void C_ccall f_4777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2461)
static void C_ccall f_2461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2476)
static void C_ccall f_2476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2473)
static void C_ccall f_2473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3987)
static void C_ccall f_3987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3980)
static void C_ccall f_3980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4795)
static void C_ccall f_4795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4799)
static void C_ccall f_4799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2446)
static void C_ccall f_2446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2442)
static void C_ccall f_2442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3062)
static void C_fcall f_3062(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5803)
static void C_fcall f_5803(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5800)
static void C_ccall f_5800(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2455)
static void C_ccall f_2455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2458)
static void C_ccall f_2458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5806)
static void C_ccall f_5806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3060)
static void C_ccall f_3060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5809)
static void C_ccall f_5809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1890)
static void C_ccall f_1890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3034)
static void C_ccall f_3034(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2585)
static void C_fcall f_2585(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2584)
static void C_ccall f_2584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2435)
static void C_ccall f_2435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2432)
static void C_ccall f_2432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2591)
static void C_ccall f_2591(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2595)
static void C_ccall f_2595(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5403)
static void C_fcall f_5403(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4570)
static void C_fcall f_4570(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3491)
static void C_ccall f_3491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2400)
static void C_fcall f_2400(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2860)
static void C_fcall f_2860(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2417)
static void C_ccall f_2417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2667)
static void C_ccall f_2667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2663)
static void C_ccall f_2663(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2663)
static void C_ccall f_2663r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1853)
static void C_ccall f_1853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2870)
static void C_ccall f_2870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1850)
static void C_ccall f_1850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5468)
static void C_fcall f_5468(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2676)
static void C_ccall f_2676(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2676)
static void C_ccall f_2676r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2674)
static void C_ccall f_2674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1883)
static void C_ccall f_1883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1880)
static void C_ccall f_1880(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5687)
static void C_ccall f_5687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4806)
static void C_ccall f_4806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4808)
static void C_fcall f_4808(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2648)
static void C_ccall f_2648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2643)
static void C_ccall f_2643(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2855)
static void C_ccall f_2855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2024)
static void C_fcall f_2024(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5446)
static void C_fcall f_5446(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4811)
static void C_fcall f_4811(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5440)
static void C_fcall f_5440(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4817)
static void C_ccall f_4817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2657)
static void C_ccall f_2657(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2652)
static void C_ccall f_2652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1866)
static void C_ccall f_1866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6257)
static void C_ccall f_6257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6253)
static void C_ccall f_6253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2005)
static void C_ccall f_2005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2634)
static void C_ccall f_2634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3971)
static void C_ccall f_3971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2884)
static void C_ccall f_2884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6275)
static void C_fcall f_6275(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6273)
static void C_ccall f_6273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2604)
static void C_ccall f_2604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2609)
static void C_fcall f_2609(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1874)
static void C_fcall f_1874(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1871)
static void C_ccall f_1871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6267)
static void C_ccall f_6267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6263)
static void C_ccall f_6263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2619)
static void C_ccall f_2619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3588)
static void C_ccall f_3588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3585)
static void C_ccall f_3585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6791)
static void C_ccall f_6791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5781)
static void C_ccall f_5781(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3591)
static void C_ccall f_3591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6782)
static void C_fcall f_6782(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5791)
static void C_ccall f_5791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6806)
static void C_ccall f_6806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5797)
static void C_fcall f_5797(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5794)
static void C_ccall f_5794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6775)
static void C_ccall f_6775(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6779)
static void C_ccall f_6779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6838)
static void C_ccall f_6838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6851)
static void C_ccall f_6851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3570)
static void C_ccall f_3570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2034)
static void C_ccall f_2034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6827)
static void C_ccall f_6827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2031)
static void C_ccall f_2031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2206)
static void C_ccall f_2206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6840)
static void C_ccall f_6840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6858)
static void C_ccall f_6858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6848)
static void C_ccall f_6848(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3946)
static void C_ccall f_3946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3942)
static void C_ccall f_3942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2066)
static void C_ccall f_2066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3952)
static void C_ccall f_3952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5771)
static void C_ccall f_5771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5773)
static void C_ccall f_5773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6692)
static void C_ccall f_6692(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2040)
static void C_ccall f_2040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2053)
static void C_fcall f_2053(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5975)
static void C_ccall f_5975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2250)
static void C_ccall f_2250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2253)
static void C_ccall f_2253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5998)
static void C_ccall f_5998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2256)
static void C_ccall f_2256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2259)
static void C_ccall f_2259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4892)
static void C_ccall f_4892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4895)
static void C_ccall f_4895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2262)
static void C_ccall f_2262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3195)
static void C_ccall f_3195(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3198)
static void C_ccall f_3198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6679)
static void C_fcall f_6679(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4880)
static void C_ccall f_4880(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4883)
static void C_ccall f_4883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5482)
static void C_ccall f_5482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4898)
static void C_ccall f_4898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2237)
static void C_fcall f_2237(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3161)
static void C_fcall f_3161(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4874)
static void C_ccall f_4874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4886)
static void C_ccall f_4886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4889)
static void C_ccall f_4889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5983)
static void C_ccall f_5983(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5983)
static void C_ccall f_5983r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3170)
static void C_ccall f_3170(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3178)
static void C_ccall f_3178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3144)
static void C_fcall f_3144(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3143)
static void C_ccall f_3143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3140)
static void C_ccall f_3140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3148)
static void C_ccall f_3148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3120)
static void C_ccall f_3120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3123)
static void C_ccall f_3123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3125)
static void C_fcall f_3125(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3542)
static void C_ccall f_3542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5748)
static void C_ccall f_5748(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3133)
static void C_ccall f_3133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2749)
static void C_ccall f_2749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5741)
static void C_ccall f_5741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2740)
static void C_ccall f_2740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4951)
static void C_ccall f_4951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3103)
static void C_fcall f_3103(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3102)
static void C_ccall f_3102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4957)
static void C_ccall f_4957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5750)
static void C_fcall f_5750(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4954)
static void C_ccall f_4954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2711)
static void C_ccall f_2711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5767)
static void C_ccall f_5767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3111)
static void C_fcall f_3111(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2729)
static void C_ccall f_2729(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3113)
static void C_ccall f_3113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5760)
static void C_ccall f_5760(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4927)
static void C_ccall f_4927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3723)
static void C_ccall f_3723(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3117)
static void C_ccall f_3117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5900)
static void C_ccall f_5900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3500)
static void C_fcall f_3500(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2805)
static void C_ccall f_2805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4508)
static void C_ccall f_4508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5703)
static void C_ccall f_5703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4948)
static void C_ccall f_4948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4945)
static void C_ccall f_4945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3513)
static void C_ccall f_3513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3510)
static void C_ccall f_3510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4877)
static void C_ccall f_4877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5958)
static void C_ccall f_5958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2182)
static void C_fcall f_2182(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5715)
static void C_ccall f_5715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5929)
static void C_ccall f_5929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4527)
static void C_fcall f_4527(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3757)
static void C_ccall f_3757(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2192)
static void C_fcall f_2192(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5728)
static void C_ccall f_5728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5721)
static void C_ccall f_5721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3762)
static void C_fcall f_3762(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4537)
static void C_ccall f_4537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4491)
static void C_ccall f_4491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4932)
static void C_fcall f_4932(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5734)
static void C_fcall f_5734(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5943)
static void C_ccall f_5943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3730)
static void C_ccall f_3730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2733)
static void C_ccall f_2733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3739)
static void C_ccall f_3739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2940)
static void C_ccall f_2940(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4484)
static void C_ccall f_4484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3742)
static void C_ccall f_3742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3745)
static void C_ccall f_3745(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5245)
static void C_fcall f_5245(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6177)
static void C_ccall f_6177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6174)
static void C_ccall f_6174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1841)
static void C_ccall f_1841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5255)
static void C_ccall f_5255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1847)
static void C_ccall f_1847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1844)
static void C_ccall f_1844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4565)
static void C_fcall f_4565(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f7530)
static void C_ccall f7530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6165)
static void C_ccall f_6165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6162)
static void C_ccall f_6162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2936)
static void C_ccall f_2936(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2936)
static void C_ccall f_2936r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2930)
static void C_ccall f_2930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6810)
static void C_fcall f_6810(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6159)
static void C_ccall f_6159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6156)
static void C_ccall f_6156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6153)
static void C_ccall f_6153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6480)
static void C_fcall f_6480(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6814)
static void C_ccall f_6814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3366)
static void C_ccall f_3366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4291)
static void C_fcall f_4291(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4177)
static void C_fcall f_4177(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4147)
static void C_fcall f_4147(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6345)
static void C_fcall f_6345(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5190)
static void C_ccall f_5190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5193)
static void C_ccall f_5193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6104)
static void C_ccall f_6104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6107)
static void C_ccall f_6107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6378)
static void C_ccall f_6378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5163)
static void C_ccall f_5163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6077)
static void C_ccall f_6077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6071)
static void C_ccall f_6071(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3383)
static C_word C_fcall f_3383(C_word t0,C_word t1);
C_noret_decl(f_6355)
static void C_ccall f_6355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6067)
static void C_ccall f_6067(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2792)
static void C_ccall f_2792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5183)
static void C_ccall f_5183(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3310)
static void C_fcall f_3310(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5186)
static void C_fcall f_5186(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5239)
static void C_fcall f_5239(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5230)
static void C_ccall f_5230(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6141)
static void C_ccall f_6141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5205)
static void C_fcall f_5205(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4094)
static void C_ccall f_4094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5380)
static void C_ccall f_5380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4125)
static void C_ccall f_4125(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5385)
static void C_fcall f_5385(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4128)
static void C_ccall f_4128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2785)
static void C_ccall f_2785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6122)
static void C_ccall f_6122(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5391)
static void C_fcall f_5391(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5267)
static void C_ccall f_5267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4088)
static void C_ccall f_4088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6391)
static void C_fcall f_6391(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5279)
static void C_ccall f_5279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5276)
static void C_ccall f_5276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5273)
static void C_ccall f_5273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5270)
static void C_ccall f_5270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2761)
static void C_ccall f_2761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3320)
static void C_ccall f_3320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4113)
static void C_ccall f_4113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3335)
static void C_ccall f_3335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4168)
static void C_ccall f_4168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3337)
static void C_fcall f_3337(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4723)
static void C_fcall f_4723(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6526)
static void C_ccall f_6526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3305)
static void C_ccall f_3305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4139)
static void C_fcall f_4139(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6871)
static void C_ccall f_6871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6517)
static void C_ccall f_6517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3778)
static void C_ccall f_3778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3775)
static void C_ccall f_3775(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4100)
static void C_ccall f_4100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6304)
static void C_ccall f_6304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6016)
static void C_ccall f_6016(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3772)
static void C_ccall f_3772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6862)
static void C_ccall f_6862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5152)
static void C_fcall f_5152(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6509)
static void C_ccall f_6509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5150)
static void C_fcall f_5150(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5377)
static void C_ccall f_5377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2985)
static void C_ccall f_2985(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2982)
static void C_ccall f_2982(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3787)
static void C_ccall f_3787(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6339)
static void C_ccall f_6339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6006)
static void C_ccall f_6006(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_6006)
static void C_ccall f_6006r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4688)
static void C_ccall f_4688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4757)
static void C_fcall f_4757(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2773)
static void C_ccall f_2773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4917)
static void C_fcall f_4917(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2993)
static void C_fcall f_2993(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4685)
static void C_ccall f_4685(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6368)
static void C_fcall f_6368(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6035)
static void C_ccall f_6035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4767)
static void C_ccall f_4767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6037)
static void C_ccall f_6037(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_6037)
static void C_ccall f_6037r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5315)
static void C_ccall f_5315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2962)
static void C_ccall f_2962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4672)
static void C_fcall f_4672(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6027)
static void C_ccall f_6027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6310)
static void C_fcall f_6310(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6553)
static void C_ccall f_6553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2976)
static void C_ccall f_2976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5322)
static void C_ccall f_5322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2973)
static void C_ccall f_2973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5324)
static void C_fcall f_5324(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2354)
static C_word C_fcall f_2354(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_6544)
static void C_ccall f_6544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4901)
static void C_ccall f_4901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4904)
static void C_ccall f_4904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6541)
static void C_ccall f_6541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5334)
static void C_ccall f_5334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5507)
static void C_ccall f_5507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2328)
static void C_ccall f_2328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5503)
static void C_ccall f_5503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2321)
static void C_ccall f_2321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6532)
static void C_ccall f_6532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6535)
static void C_ccall f_6535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6538)
static void C_ccall f_6538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2956)
static void C_ccall f_2956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2334)
static void C_ccall f_2334(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2334)
static void C_ccall f_2334r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_6720)
static void C_ccall f_6720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2488)
static void C_ccall f_2488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5511)
static void C_fcall f_5511(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2491)
static void C_ccall f_2491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6712)
static void C_ccall f_6712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2306)
static void C_ccall f_2306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2560)
static void C_ccall f_2560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1974)
static void C_ccall f_1974(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2575)
static void C_ccall f_2575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6475)
static void C_ccall f_6475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6472)
static void C_ccall f_6472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5559)
static void C_ccall f_5559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5551)
static void C_ccall f_5551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2545)
static void C_ccall f_2545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2542)
static void C_ccall f_2542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1959)
static void C_ccall f_1959(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1957)
static void C_ccall f_1957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2550)
static void C_fcall f_2550(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1987)
static void C_ccall f_1987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2680)
static void C_ccall f_2680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6732)
static void C_ccall f_6732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2695)
static void C_ccall f_2695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2503)
static void C_ccall f_2503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2509)
static void C_ccall f_2509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2506)
static void C_ccall f_2506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2512)
static void C_ccall f_2512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2103)
static void C_ccall f_2103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2100)
static void C_ccall f_2100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2117)
static void C_ccall f_2117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2114)
static void C_ccall f_2114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2110)
static void C_ccall f_2110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5876)
static void C_ccall f_5876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5884)
static void C_ccall f_5884(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5881)
static void C_ccall f_5881(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2075)
static void C_fcall f_2075(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2079)
static void C_ccall f_2079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5863)
static void C_fcall f_5863(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4991)
static void C_fcall f_4991(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4364)
static void C_ccall f_4364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2145)
static void C_ccall f_2145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2142)
static void C_ccall f_2142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5590)
static C_word C_fcall f_5590(C_word t0);
C_noret_decl(f_2820)
static void C_ccall f_2820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3878)
static void C_ccall f_3878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4370)
static void C_fcall f_4370(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2159)
static void C_ccall f_2159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2833)
static void C_ccall f_2833(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2123)
static void C_ccall f_2123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5836)
static void C_ccall f_5836(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5830)
static void C_ccall f_5830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2132)
static void C_fcall f_2132(C_word t0,C_word t1,C_word t2) C_noret;

C_noret_decl(trf_4605)
static void C_fcall trf_4605(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4605(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4605(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4608)
static void C_fcall trf_4608(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4608(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4608(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4638)
static void C_fcall trf_4638(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4638(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4638(t0,t1,t2);}

C_noret_decl(trf_5858)
static void C_fcall trf_5858(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5858(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5858(t0,t1);}

C_noret_decl(trf_4834)
static void C_fcall trf_4834(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4834(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4834(t0,t1);}

C_noret_decl(trf_3847)
static void C_fcall trf_3847(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3847(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3847(t0,t1,t2,t3);}

C_noret_decl(trf_4843)
static void C_fcall trf_4843(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4843(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4843(t0,t1,t2,t3);}

C_noret_decl(trf_4332)
static void C_fcall trf_4332(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4332(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4332(t0,t1,t2);}

C_noret_decl(trf_3835)
static void C_fcall trf_3835(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3835(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3835(t0,t1);}

C_noret_decl(trf_4346)
static void C_fcall trf_4346(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4346(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4346(t0,t1,t2);}

C_noret_decl(trf_3450)
static void C_fcall trf_3450(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3450(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3450(t0,t1,t2,t3);}

C_noret_decl(trf_3468)
static void C_fcall trf_3468(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3468(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3468(t0,t1,t2);}

C_noret_decl(trf_5666)
static void C_fcall trf_5666(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5666(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5666(t0,t1,t2);}

C_noret_decl(trf_5052)
static void C_fcall trf_5052(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5052(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5052(t0,t1);}

C_noret_decl(trf_4457)
static void C_fcall trf_4457(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4457(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4457(t0,t1,t2);}

C_noret_decl(trf_4459)
static void C_fcall trf_4459(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4459(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4459(t0,t1,t2,t3);}

C_noret_decl(trf_5638)
static void C_fcall trf_5638(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5638(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5638(t0,t1);}

C_noret_decl(trf_5632)
static void C_fcall trf_5632(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5632(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5632(t0,t1);}

C_noret_decl(trf_4462)
static void C_fcall trf_4462(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4462(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4462(t0,t1,t2);}

C_noret_decl(trf_5644)
static void C_fcall trf_5644(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5644(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5644(t0,t1);}

C_noret_decl(trf_6091)
static void C_fcall trf_6091(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6091(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6091(t0,t1,t2);}

C_noret_decl(trf_5093)
static void C_fcall trf_5093(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5093(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5093(t0,t1);}

C_noret_decl(trf_2281)
static void C_fcall trf_2281(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2281(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2281(t0,t1);}

C_noret_decl(trf_1904)
static void C_fcall trf_1904(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1904(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_1904(t0);}

C_noret_decl(trf_5658)
static void C_fcall trf_5658(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5658(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5658(t0,t1,t2);}

C_noret_decl(trf_5652)
static void C_fcall trf_5652(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5652(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5652(t0,t1,t2);}

C_noret_decl(trf_4236)
static void C_fcall trf_4236(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4236(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4236(t0,t1,t2);}

C_noret_decl(trf_4223)
static void C_fcall trf_4223(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4223(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4223(t0,t1,t2);}

C_noret_decl(trf_3062)
static void C_fcall trf_3062(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3062(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3062(t0,t1,t2,t3);}

C_noret_decl(trf_5803)
static void C_fcall trf_5803(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5803(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5803(t0,t1);}

C_noret_decl(trf_2585)
static void C_fcall trf_2585(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2585(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2585(t0,t1,t2);}

C_noret_decl(trf_5403)
static void C_fcall trf_5403(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5403(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5403(t0,t1,t2);}

C_noret_decl(trf_4570)
static void C_fcall trf_4570(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4570(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4570(t0,t1);}

C_noret_decl(trf_2400)
static void C_fcall trf_2400(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2400(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2400(t0,t1);}

C_noret_decl(trf_2860)
static void C_fcall trf_2860(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2860(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2860(t0,t1,t2);}

C_noret_decl(trf_5468)
static void C_fcall trf_5468(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5468(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5468(t0,t1);}

C_noret_decl(trf_4808)
static void C_fcall trf_4808(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4808(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4808(t0,t1);}

C_noret_decl(trf_2024)
static void C_fcall trf_2024(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2024(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2024(t0,t1);}

C_noret_decl(trf_5446)
static void C_fcall trf_5446(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5446(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5446(t0,t1,t2);}

C_noret_decl(trf_4811)
static void C_fcall trf_4811(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4811(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4811(t0,t1);}

C_noret_decl(trf_5440)
static void C_fcall trf_5440(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5440(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5440(t0,t1);}

C_noret_decl(trf_6275)
static void C_fcall trf_6275(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6275(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6275(t0,t1,t2);}

C_noret_decl(trf_2609)
static void C_fcall trf_2609(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2609(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2609(t0,t1,t2);}

C_noret_decl(trf_1874)
static void C_fcall trf_1874(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1874(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1874(t0,t1);}

C_noret_decl(trf_6782)
static void C_fcall trf_6782(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6782(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6782(t0,t1);}

C_noret_decl(trf_5797)
static void C_fcall trf_5797(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5797(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5797(t0,t1);}

C_noret_decl(trf_2053)
static void C_fcall trf_2053(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2053(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2053(t0,t1,t2);}

C_noret_decl(trf_6679)
static void C_fcall trf_6679(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6679(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6679(t0,t1);}

C_noret_decl(trf_2237)
static void C_fcall trf_2237(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2237(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2237(t0,t1,t2);}

C_noret_decl(trf_3161)
static void C_fcall trf_3161(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3161(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3161(t0,t1);}

C_noret_decl(trf_3144)
static void C_fcall trf_3144(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3144(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3144(t0,t1,t2);}

C_noret_decl(trf_3125)
static void C_fcall trf_3125(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3125(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3125(t0,t1);}

C_noret_decl(trf_3103)
static void C_fcall trf_3103(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3103(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3103(t0,t1,t2);}

C_noret_decl(trf_5750)
static void C_fcall trf_5750(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5750(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5750(t0,t1,t2);}

C_noret_decl(trf_3111)
static void C_fcall trf_3111(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3111(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3111(t0,t1);}

C_noret_decl(trf_3500)
static void C_fcall trf_3500(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3500(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3500(t0,t1,t2,t3);}

C_noret_decl(trf_2182)
static void C_fcall trf_2182(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2182(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2182(t0,t1,t2);}

C_noret_decl(trf_4527)
static void C_fcall trf_4527(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4527(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4527(t0,t1);}

C_noret_decl(trf_2192)
static void C_fcall trf_2192(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2192(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2192(t0,t1);}

C_noret_decl(trf_3762)
static void C_fcall trf_3762(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3762(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3762(t0,t1,t2);}

C_noret_decl(trf_4932)
static void C_fcall trf_4932(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4932(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4932(t0,t1,t2,t3);}

C_noret_decl(trf_5734)
static void C_fcall trf_5734(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5734(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5734(t0,t1,t2);}

C_noret_decl(trf_5245)
static void C_fcall trf_5245(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5245(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5245(t0,t1,t2,t3);}

C_noret_decl(trf_4565)
static void C_fcall trf_4565(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4565(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4565(t0,t1,t2);}

C_noret_decl(trf_6810)
static void C_fcall trf_6810(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6810(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6810(t0,t1,t2);}

C_noret_decl(trf_6480)
static void C_fcall trf_6480(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6480(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6480(t0,t1,t2);}

C_noret_decl(trf_4291)
static void C_fcall trf_4291(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4291(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4291(t0,t1,t2);}

C_noret_decl(trf_4177)
static void C_fcall trf_4177(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4177(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4177(t0,t1,t2);}

C_noret_decl(trf_4147)
static void C_fcall trf_4147(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4147(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4147(t0,t1,t2);}

C_noret_decl(trf_6345)
static void C_fcall trf_6345(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6345(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6345(t0,t1,t2);}

C_noret_decl(trf_3310)
static void C_fcall trf_3310(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3310(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3310(t0,t1,t2);}

C_noret_decl(trf_5186)
static void C_fcall trf_5186(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5186(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5186(t0,t1,t2);}

C_noret_decl(trf_5239)
static void C_fcall trf_5239(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5239(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5239(t0,t1,t2,t3);}

C_noret_decl(trf_5205)
static void C_fcall trf_5205(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5205(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5205(t0,t1,t2);}

C_noret_decl(trf_5385)
static void C_fcall trf_5385(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5385(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5385(t0,t1,t2);}

C_noret_decl(trf_5391)
static void C_fcall trf_5391(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5391(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5391(t0,t1,t2);}

C_noret_decl(trf_6391)
static void C_fcall trf_6391(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6391(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6391(t0,t1,t2);}

C_noret_decl(trf_3337)
static void C_fcall trf_3337(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3337(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3337(t0,t1,t2);}

C_noret_decl(trf_4723)
static void C_fcall trf_4723(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4723(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4723(t0,t1,t2,t3);}

C_noret_decl(trf_4139)
static void C_fcall trf_4139(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4139(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4139(t0,t1,t2);}

C_noret_decl(trf_5152)
static void C_fcall trf_5152(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5152(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5152(t0,t1,t2);}

C_noret_decl(trf_5150)
static void C_fcall trf_5150(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5150(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5150(t0,t1);}

C_noret_decl(trf_4757)
static void C_fcall trf_4757(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4757(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4757(t0,t1,t2);}

C_noret_decl(trf_4917)
static void C_fcall trf_4917(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4917(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4917(t0,t1,t2,t3);}

C_noret_decl(trf_2993)
static void C_fcall trf_2993(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2993(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2993(t0,t1,t2);}

C_noret_decl(trf_6368)
static void C_fcall trf_6368(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6368(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6368(t0,t1,t2);}

C_noret_decl(trf_4672)
static void C_fcall trf_4672(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4672(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4672(t0,t1,t2,t3);}

C_noret_decl(trf_6310)
static void C_fcall trf_6310(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6310(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6310(t0,t1,t2);}

C_noret_decl(trf_5324)
static void C_fcall trf_5324(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5324(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5324(t0,t1,t2,t3);}

C_noret_decl(trf_5511)
static void C_fcall trf_5511(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5511(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5511(t0,t1,t2);}

C_noret_decl(trf_2550)
static void C_fcall trf_2550(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2550(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2550(t0,t1,t2);}

C_noret_decl(trf_2075)
static void C_fcall trf_2075(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2075(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2075(t0,t1,t2);}

C_noret_decl(trf_5863)
static void C_fcall trf_5863(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5863(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5863(t0,t1,t2);}

C_noret_decl(trf_4991)
static void C_fcall trf_4991(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4991(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4991(t0,t1,t2,t3);}

C_noret_decl(trf_4370)
static void C_fcall trf_4370(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4370(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4370(t0,t1,t2);}

C_noret_decl(trf_2132)
static void C_fcall trf_2132(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2132(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2132(t0,t1,t2);}

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

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

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

/* k2812 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2814,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2817,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:378: system */
t3=C_fast_retrieve(lf[87]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k2815 in k2812 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2817,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2820,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_list1(&a,1,t2);
/* csi.scm:379: history-add */
t5=C_retrieve2(lf[40],"history-add");
f_2182(t5,t3,t4);}

/* k2128 in k2121 in k2115 in k2098 in k2089 in k2077 in lookup-script-file in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2130(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2130,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2132,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_2132(t5,((C_word*)t0)[4],t1);}

/* k5844 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_ccall f_5846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5846,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5849,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6174,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1070: member* */
f_5385(t3,lf[316],((C_word*)((C_word*)t0)[6])[1]);}

/* k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in ... */
static void C_ccall f_5843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5843,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5846,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6186,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1067: member* */
f_5385(t3,lf[318],((C_word*)((C_word*)t0)[6])[1]);}

/* k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in ... */
static void C_ccall f_5840(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5840,2,t0,t1);}
t2=C_mutate2((C_word*)lf[133]+1 /* (set! ##sys#include-pathnames ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5843,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[9])){
t4=C_i_cdr(((C_word*)t0)[9]);
if(C_truep(C_i_pairp(t4))){
t5=C_i_cadr(((C_word*)t0)[9]);
if(C_truep(C_i_string_equal_p(lf[319],t5))){
/* csi.scm:1062: keyword-style */
t6=C_fast_retrieve(lf[135]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t3,lf[320]);}
else{
t6=C_u_i_cdr(((C_word*)t0)[9]);
t7=C_u_i_car(t6);
if(C_truep(C_i_string_equal_p(lf[321],t7))){
/* csi.scm:1064: keyword-style */
t8=C_fast_retrieve(lf[135]);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t3,lf[311]);}
else{
t8=C_u_i_cdr(((C_word*)t0)[9]);
t9=C_u_i_car(t8);
if(C_truep(C_i_string_equal_p(lf[322],t9))){
/* csi.scm:1066: keyword-style */
t10=C_fast_retrieve(lf[135]);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t3,lf[323]);}
else{
t10=t3;
f_5843(2,t10,C_SCHEME_UNDEFINED);}}}}
else{
/* csi.scm:1060: ##sys#error */
t5=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,lf[324]);}}
else{
t4=t3;
f_5843(2,t4,C_SCHEME_UNDEFINED);}}

/* k5847 in k5844 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in ... */
static void C_ccall f_5849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5849,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5852,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6153,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1073: member* */
f_5385(t3,lf[314],((C_word*)((C_word*)t0)[6])[1]);}

/* hexdump in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_4605(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4605,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4608,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4638,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=t4,a[6]=t2,a[7]=t6,tmp=(C_word)a,a+=8,tmp));
t10=((C_word*)t8)[1];
f_4638(t10,t1,C_fix(0));}

/* justify in hexdump in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_4608(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4608,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4612,a[2]=t3,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:763: number->string */
t7=*((C_word*)lf[248]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t2,t4);}

/* k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in ... */
static void C_ccall f_5812(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5812,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[77]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5818,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6391,a[2]=t5,a[3]=((C_word*)t0)[12],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_6391(t7,t3,t1);}

/* k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in ... */
static void C_ccall f_5818(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5818,2,t0,t1);}
t2=C_fast_retrieve(lf[274]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5821,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
/* csi.scm:1049: collect-options */
t4=((C_word*)((C_word*)t0)[11])[1];
f_5652(t4,t3,lf[330]);}

/* k4610 in justify in hexdump in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_4612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4612,2,t0,t1);}
t2=t1;
t3=C_block_size(t2);
if(C_truep(C_fixnum_lessp(t3,((C_word*)t0)[2]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4628,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_fixnum_difference(((C_word*)t0)[2],t3);
/* csi.scm:766: make-string */
t6=*((C_word*)lf[122]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,((C_word*)t0)[4]);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}

/* k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in ... */
static void C_ccall f_5821(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5821,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[77]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5827,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6368,a[2]=t5,a[3]=((C_word*)t0)[12],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_6368(t7,t3,t1);}

/* k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in ... */
static void C_ccall f_5827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5827,2,t0,t1);}
t2=C_fast_retrieve(lf[275]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5830,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
/* csi.scm:1050: collect-options */
t4=((C_word*)((C_word*)t0)[11])[1];
f_5652(t4,t3,lf[329]);}

/* k4626 in k4610 in justify in hexdump in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_4628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[27]))(4,*((C_word*)lf[27]+1),((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* doloop723 in hexdump in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_4638(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4638,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4648,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4806,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:771: justify */
f_4608(t4,t2,C_fix(4),C_fix(10),C_make_character(32));}}

/* k3661 in k3655 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3663(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:612: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[96]))(4,*((C_word*)lf[96]+1),((C_word*)t0)[2],C_make_character(10),*((C_word*)lf[92]+1));}

/* k4646 in doloop723 in hexdump in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_4648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4648,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4651,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[249]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(58),((C_word*)t0)[5]);}

/* k3655 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3657(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3657,2,t0,t1);}
t2=C_make_character(C_unfix(((C_word*)t0)[2]));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3663,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[2],C_fix(65536)))){
/* csi.scm:611: fprintf */
t4=*((C_word*)lf[153]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[4],lf[166],t2);}
else{
/* csi.scm:612: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[96]))(4,*((C_word*)lf[96]+1),((C_word*)t0)[3],C_make_character(10),*((C_word*)lf[92]+1));}}

/* k3821 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_3739(2,t2,C_SCHEME_UNDEFINED);}
else{
/* csi.scm:624: display */
t2=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[189],((C_word*)t0)[3]);}}

/* k3818 in k3740 in k3737 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3820,2,t0,t1);}
t2=(C_truep(t1)?lf[181]:lf[182]);
t3=t2;
t4=(C_truep(((C_word*)t0)[2])?lf[183]:lf[184]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3811,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
/* csi.scm:630: ##sys#symbol->qualified-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[186]))(3,*((C_word*)lf[186]+1),t6,((C_word*)t0)[5]);}
else{
/* csi.scm:631: ##sys#symbol->string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[177]))(3,*((C_word*)lf[177]+1),t6,((C_word*)t0)[5]);}}

/* k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in ... */
static void C_ccall f_5855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5855,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5858,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=C_set_block_item(lf[5] /* ##sys#notices-enabled */,0,C_SCHEME_FALSE);
t4=t2;
f_5858(t4,t3);}
else{
t3=t2;
f_5858(t3,C_SCHEME_UNDEFINED);}}

/* k5850 in k5847 in k5844 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in ... */
static void C_ccall f_5852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5852,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5855,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6141,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[7],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:1079: member* */
f_5385(t3,lf[308],((C_word*)((C_word*)t0)[6])[1]);}

/* k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in ... */
static void C_fcall f_5858(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5858,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5863,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_5863(t5,((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}

/* k4832 in show-frameinfo in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_4834(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4834,NULL,2,t0,t1);}
t2=C_mutate2(&lf[7] /* (set! selected-frame ...) */,t1);
t3=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4843,a[2]=t5,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_4843(t7,((C_word*)t0)[4],((C_word*)t0)[5],t3);}

/* k4652 in k4649 in k4646 in doloop723 in hexdump in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_4654(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4654,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4657,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[249]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[5]);}

/* k4655 in k4652 in k4649 in k4646 in doloop723 in hexdump in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_4657(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4657,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4660,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4672,a[2]=((C_word*)t0)[6],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_4672(t6,t2,C_fix(0),((C_word*)t0)[2]);}

/* k4649 in k4646 in doloop723 in hexdump in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_4651(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4651,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4654,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4723,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=t4,a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_4723(t6,t2,C_fix(0),((C_word*)t0)[2]);}

/* loop-print in k3836 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_3847(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3847,NULL,4,t0,t1,t2,t3);}
t4=C_i_not_pair_p(t2);
t5=(C_truep(t4)?t4:C_i_nullp(t2));
if(C_truep(t5)){
/* csi.scm:648: printf */
t6=*((C_word*)lf[85]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t1,lf[191]);}
else{
t6=C_i_car(t2);
if(C_truep(C_i_memq(t6,t3))){
/* csi.scm:650: fprintf */
t7=*((C_word*)lf[153]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t1,((C_word*)t0)[2],lf[192]);}
else{
t7=t2;
t8=C_u_i_car(t7);
if(C_truep(C_i_memq(t8,t3))){
t9=C_SCHEME_UNDEFINED;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3878,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t10=t2;
t11=C_u_i_car(t10);
/* csi.scm:652: fprintf */
t12=*((C_word*)lf[153]+1);
((C_proc5)(void*)(*((C_word*)t12+1)))(5,t12,t9,((C_word*)t0)[2],lf[193],t11);}}}}

/* doloop785 in k4832 in show-frameinfo in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_4843(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4843,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_i_car(t2);
t5=t4;
t6=C_eqp(C_retrieve2(lf[7],"selected-frame"),t5);
t7=t6;
t8=C_slot(t5,C_fix(1));
t9=t8;
t10=C_slot(t5,C_fix(2));
t11=t10;
t12=C_i_structurep(t11,lf[105]);
t13=t12;
t14=(C_truep(t13)?C_slot(t11,C_fix(1)):t11);
t15=t14;
t16=*((C_word*)lf[92]+1);
t17=*((C_word*)lf[92]+1);
t18=C_i_check_port_2(*((C_word*)lf[92]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[85]);
t19=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4874,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t7,a[7]=t13,a[8]=((C_word*)t0)[3],a[9]=t11,a[10]=t9,a[11]=t15,a[12]=t16,a[13]=t5,tmp=(C_word)a,a+=14,tmp);
if(C_truep(t7)){
/* csi.scm:813: ##sys#print */
t20=*((C_word*)lf[93]+1);
((C_proc5)(void*)(*((C_word*)t20+1)))(5,t20,t19,C_make_character(42),C_SCHEME_FALSE,*((C_word*)lf[92]+1));}
else{
/* csi.scm:813: ##sys#print */
t20=*((C_word*)lf[93]+1);
((C_proc5)(void*)(*((C_word*)t20+1)))(5,t20,t19,C_make_character(32),C_SCHEME_FALSE,t16);}}}

/* k4661 in k4658 in k4655 in k4652 in k4649 in k4646 in doloop723 in hexdump in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 in ... */
static void C_ccall f_4663(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(16));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4638(t3,((C_word*)t0)[4],t2);}

/* k4658 in k4655 in k4652 in k4649 in k4646 in doloop723 in hexdump in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_4660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4660,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4663,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[249]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[5]);}

/* k4299 in for-each-loop603 in k4220 in k4092 in k3978 in k3950 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in ... */
static void C_ccall f_4301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4291(t3,((C_word*)t0)[4],t2);}

/* lp in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static C_word C_fcall f_3418(C_word t1){
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
t2=C_i_car(t1);
t3=C_eqp(t1,t2);
if(C_truep(t3)){
return(t3);}
else{
t4=t1;
t5=C_u_i_cdr(t4);
t7=t5;
t1=t7;
goto loop;}}
else{
return(C_SCHEME_FALSE);}}

/* k4407 in k4326 in k4092 in k3978 in k3950 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in ... */
static void C_ccall f_4409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:728: descseq */
t2=((C_word*)t0)[2];
f_3456(6,t2,((C_word*)t0)[3],C_SCHEME_FALSE,*((C_word*)lf[173]+1),*((C_word*)lf[175]+1),C_fix(1));}

/* k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_5629(C_word c,C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5629,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5632,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6532,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_cdr(t2);
t6=C_i_pairp(t5);
t7=C_i_not(t6);
if(C_truep(t7)){
if(C_truep(t7)){
/* csi.scm:986: ##sys#error */
t8=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t4,lf[358]);}
else{
t8=t4;
f_6532(2,t8,C_SCHEME_UNDEFINED);}}
else{
t8=C_i_cadr(t2);
t9=C_i_string_length(t8);
t10=C_eqp(t9,C_fix(0));
if(C_truep(t10)){
if(C_truep(t10)){
/* csi.scm:986: ##sys#error */
t11=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t4,lf[358]);}
else{
t11=t4;
f_6532(2,t11,C_SCHEME_UNDEFINED);}}
else{
t11=C_u_i_cdr(t2);
t12=C_u_i_car(t11);
t13=C_i_string_ref(t12,C_fix(0));
if(C_truep(C_i_char_equalp(C_make_character(45),t13))){
/* csi.scm:986: ##sys#error */
t14=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t14+1)))(3,t14,t4,lf[358]);}
else{
t14=t4;
f_6532(2,t14,C_SCHEME_UNDEFINED);}}}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6620,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6633,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:997: canonicalize-args */
f_5440(t5,((C_word*)t0)[5]);}}

/* k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_5626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5626,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5629,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:981: member* */
f_5385(t3,lf[360],((C_word*)((C_word*)t0)[2])[1]);}

/* k3253 in k3249 in k3245 in k3241 in k3237 in k3233 in k3229 in k3221 in k3193 in k3141 in k3138 in k3121 in k3118 in k3115 in a3112 in k3109 in report in k3100 in k3097 in k2954 in k2304 in k2003 in ... */
static void C_ccall f_3255(C_word c,C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3255,2,t0,t1);}
t2=t1;
t3=C_i_vector_ref(((C_word*)t0)[2],C_fix(2));
t4=t3;
t5=C_i_vector_ref(((C_word*)t0)[3],C_fix(0));
t6=t5;
t7=C_fudge(C_fix(17));
t8=(C_truep(t7)?lf[128]:lf[129]);
t9=t8;
t10=C_i_vector_ref(((C_word*)t0)[3],C_fix(1));
t11=t10;
t12=C_i_vector_ref(((C_word*)t0)[3],C_fix(2));
t13=t12;
t14=C_fudge(C_fix(18));
t15=C_i_nequalp(C_fix(1),t14);
t16=(C_truep(t15)?lf[130]:lf[131]);
t17=t16;
t18=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_3283,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=t2,a[13]=t4,a[14]=t6,a[15]=t9,a[16]=t11,a[17]=t13,a[18]=t17,tmp=(C_word)a,a+=19,tmp);
/* csi.scm:529: argv */
t19=((C_word*)t0)[14];
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,t18);}

/* k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_5623(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5623,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5626,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:980: member* */
f_5385(t4,lf[361],((C_word*)t3)[1]);}

/* k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_5620(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5620,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5623,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6637,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:978: command-line-arguments */
t5=C_fast_retrieve(lf[297]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k4326 in k4092 in k3978 in k3950 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 in ... */
static void C_ccall f_4328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4328,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4332,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:721: g633 */
t3=t2;
f_4332(t3,((C_word*)t0)[4],t1);}
else{
t2=C_i_assq(((C_word*)t0)[5],C_retrieve2(lf[147],"bytevector-data"));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4346,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:721: g644 */
t4=t3;
f_4346(t4,((C_word*)t0)[4],t2);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4409,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_slot(((C_word*)t0)[2],C_fix(0));
/* csi.scm:727: fprintf */
t5=*((C_word*)lf[153]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,((C_word*)t0)[3],lf[232],t4);}}}

/* k3836 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3838,2,t0,t1);}
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3847,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_3847(t6,((C_word*)t0)[4],((C_word*)t0)[2],t2);}

/* g633 in k4326 in k4092 in k3978 in k3950 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in ... */
static void C_fcall f_4332(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4332,NULL,3,t0,t1,t2);}
/* csi.scm:722: g641 */
t3=t2;
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t1,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3281 in k3253 in k3249 in k3245 in k3241 in k3237 in k3233 in k3229 in k3221 in k3193 in k3141 in k3138 in k3121 in k3118 in k3115 in a3112 in k3109 in report in k3100 in k3097 in k2954 in k2304 in ... */
static void C_ccall f_3283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:497: printf */
t2=*((C_word*)lf[85]+1);
((C_proc21)(void*)(*((C_word*)t2+1)))(21,t2,((C_word*)t0)[2],lf[132],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],C_fast_retrieve(lf[133]),((C_word*)t0)[10],((C_word*)t0)[11],((C_word*)t0)[12],((C_word*)t0)[13],((C_word*)t0)[14],((C_word*)t0)[15],((C_word*)t0)[16],((C_word*)t0)[17],((C_word*)t0)[18],t1);}

/* k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3448(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3448,2,t0,t1);}
t2=C_mutate2(&lf[149] /* (set! describer-table ...) */,t1);
t3=*((C_word*)lf[150]+1);
t4=*((C_word*)lf[151]+1);
t5=*((C_word*)lf[152]+1);
t6=C_mutate2(&lf[63] /* (set! describe ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3450,a[2]=t5,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t7=C_mutate2((C_word*)lf[241]+1 /* (set! set-describer! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4448,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate2(&lf[65] /* (set! dump ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4457,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate2(&lf[215] /* (set! hexdump ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4605,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate2(&lf[98] /* (set! show-frameinfo ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4808,tmp=(C_word)a,a+=2,tmp));
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5380,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6663,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:913: ##sys#current-environment */
((C_proc2)C_fast_retrieve_symbol_proc(lf[378]))(2,*((C_word*)lf[378]+1),t12);}

/* k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_3835(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_3835,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3838,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:644: fprintf */
t3=*((C_word*)lf[153]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],lf[194]);}
else{
if(C_truep(C_i_listp(((C_word*)t0)[2]))){
/* csi.scm:654: descseq */
t2=((C_word*)t0)[5];
f_3456(6,t2,((C_word*)t0)[4],lf[195],((C_word*)t0)[6],((C_word*)t0)[7],C_fix(0));}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
/* csi.scm:655: fprintf */
t6=*((C_word*)lf[153]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,((C_word*)t0)[4],((C_word*)t0)[3],lf[196],t3,t5);}
else{
if(C_truep(C_i_closurep(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3942,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3946,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:659: ##sys#peek-unsigned-integer */
((C_proc4)C_fast_retrieve_symbol_proc(lf[199]))(4,*((C_word*)lf[199]+1),t3,((C_word*)t0)[2],C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3952,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:661: port? */
t3=C_fast_retrieve(lf[237]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}}}}}

/* k4244 in loop in k4225 in g604 in k4220 in k4092 in k3978 in k3950 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in ... */
static void C_ccall f_4246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cddr(((C_word*)t0)[2]);
/* csi.scm:718: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4236(t3,((C_word*)t0)[4],t2);}

/* g644 in k4326 in k4092 in k3978 in k3950 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in ... */
static void C_fcall f_4346(C_word t0,C_word t1,C_word t2){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4346,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4354,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_fast_retrieve(lf[50]);
t9=C_i_cdr(t2);
t10=C_i_check_list_2(t9,lf[230]);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4364,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4370,a[2]=t7,a[3]=t13,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_4370(t15,t11,t9);}

/* descseq in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3456(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_3456,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3585,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* csi.scm:576: plen */
t7=t3;
((C_proc3)C_fast_retrieve_proc(t7))(3,t7,t6,((C_word*)t0)[3]);}

/* k2089 in k2077 in lookup-script-file in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2091(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2091,2,t0,t1);}
if(C_truep(t1)){
/* csi.scm:204: addext */
f_2024(((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2100,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_retrieve2(lf[21],"dirseparator\077");
t4=((C_word*)t0)[4];
t5=C_block_size(t4);
t6=t5;
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2053,a[2]=t6,a[3]=t8,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_2053(t10,t2,C_fix(0));}}

/* k6651 in k6645 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_6653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* a6654 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_6655(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6655,3,t0,t1,t2);}
/* csi.scm:920: ##sys#user-interrupt-hook */
((C_proc2)C_fast_retrieve_symbol_proc(lf[258]))(2,*((C_word*)lf[258]+1),t1);}

/* describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_3450(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3450,NULL,4,t0,t1,t2,t3);}
t4=C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[92]+1):C_i_car(t3));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3456,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3588,a[2]=t1,a[3]=t2,a[4]=t6,a[5]=t7,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_permanentp(t2))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4440,a[2]=t8,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:599: ##sys#block-address */
((C_proc3)C_fast_retrieve_symbol_proc(lf[240]))(3,*((C_word*)lf[240]+1),t9,t2);}
else{
t9=t8;
f_3588(2,t9,C_SCHEME_UNDEFINED);}}

/* k4352 in g644 in k4326 in k4092 in k3978 in k3950 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in ... */
static void C_ccall f_4354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k6648 in k6645 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_6650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* k1935 in user-read-hook in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_1937(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1937,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,lf[17],t1));}

/* set-describer! in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_4448(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4448,4,t0,t1,t2,t3);}
t4=C_i_check_symbol_2(t2,lf[241]);
/* csi.scm:734: ##sys#hash-table-set! */
((C_proc5)C_fast_retrieve_symbol_proc(lf[242]))(5,*((C_word*)lf[242]+1),t1,C_retrieve2(lf[149],"describer-table"),t2,t3);}

/* loop1 in k3461 in k3583 in descseq in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_3468(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3468,NULL,3,t0,t1,t2);}
t3=C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep(C_fixnum_greater_or_equal_p(t2,C_fix(40)))){
t4=C_fixnum_difference(((C_word*)t0)[2],t2);
/* csi.scm:581: fprintf */
t5=*((C_word*)lf[153]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,((C_word*)t0)[3],lf[154],t4);}
else{
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3491,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
t5=C_fixnum_plus(((C_word*)t0)[4],t2);
/* csi.scm:583: pref */
t6=((C_word*)t0)[6];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t4,((C_word*)t0)[7],t5);}}}

/* k4438 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_4440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:599: fprintf */
t2=*((C_word*)lf[153]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[239],t1);}

/* g1205 in loop in collect-options in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in ... */
static void C_fcall f_5666(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5666,NULL,3,t0,t1,t2);}
t3=C_i_cdr(t2);
if(C_truep(C_i_nullp(t3))){
/* csi.scm:1013: ##sys#error */
t4=*((C_word*)lf[42]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,lf[271],((C_word*)t0)[2]);}
else{
t4=C_i_cadr(t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5687,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=t2;
t8=C_u_i_cdr(t7);
t9=C_u_i_cdr(t8);
/* csi.scm:1014: loop */
t10=((C_word*)((C_word*)t0)[3])[1];
f_5658(t10,t6,t9);}}

/* a4263 in loop in k4225 in g604 in k4220 in k4092 in k3978 in k3950 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in ... */
static void C_ccall f_4264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4264,2,t0,t1);}
t2=C_i_cdar(((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[2]);
/* csi.scm:716: fprintf */
t4=*((C_word*)lf[153]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t1,((C_word*)t0)[3],lf[227],t2,t3);}

/* k6645 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_6647(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6647,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6650,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6653,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
((C_proc2)C_fast_retrieve_symbol_proc(lf[270]))(2,*((C_word*)lf[270]+1),t3);}

/* k3461 in k3583 in descseq in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3463,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3468,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_3468(t5,((C_word*)t0)[7],C_fix(0));}

/* k5050 in k4878 in k4875 in k4872 in doloop785 in k4832 in show-frameinfo in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_5052(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* csi.scm:813: ##sys#print */
t2=*((C_word*)lf[93]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[256],C_SCHEME_FALSE,((C_word*)t0)[3]);}
else{
/* csi.scm:813: ##sys#print */
t2=*((C_word*)lf[93]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[257],C_SCHEME_FALSE,((C_word*)t0)[3]);}}

/* k6639 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_6641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6641,2,t0,t1);}
t2=(C_truep(t1)?t1:lf[362]);
t3=((C_word*)t0)[2];
t4=t2;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2962,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:447: open-input-string */
t6=C_fast_retrieve(lf[273]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}

/* dump in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_4457(C_word t1,C_word t2,C_word t3){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4457,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4459,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4565,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4570,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t3))){
/* csi.scm:740: def-len688 */
t7=t6;
f_4570(t7,t1);}
else{
t7=C_i_car(t3);
t8=C_u_i_cdr(t3);
if(C_truep(C_i_nullp(t8))){
/* csi.scm:740: def-out689 */
t9=t5;
f_4565(t9,t1,t7);}
else{
t9=C_i_car(t8);
t10=C_u_i_cdr(t8);
/* csi.scm:740: body686 */
t11=t4;
f_4459(t11,t1,t7,t9);}}}

/* body686 in dump in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_4459(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4459,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4462,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_immp(((C_word*)t0)[2]))){
/* csi.scm:745: ##sys#error */
t5=*((C_word*)lf[42]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,lf[244],lf[245],((C_word*)t0)[2]);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4484,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:746: ##sys#bytevector? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[235]+1)))(3,*((C_word*)lf[235]+1),t5,((C_word*)t0)[2]);}}

/* k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 in ... */
static void C_fcall f_5638(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5638,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5641,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:1002: member* */
f_5385(t3,lf[352],((C_word*)((C_word*)t0)[2])[1]);}

/* k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_5635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5635,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5638,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=t3;
f_5638(t4,((C_word*)t0)[3]);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6526,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1001: member* */
f_5385(t4,lf[353],((C_word*)((C_word*)t0)[2])[1]);}}

/* k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_5632(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5632,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5635,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:1000: member* */
f_5385(t2,lf[354],((C_word*)((C_word*)t0)[2])[1]);}

/* k1909 in k1906 in print-banner in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_1911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1911,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1918,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:148: chicken-version */
t3=C_fast_retrieve(lf[13]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_SCHEME_TRUE);}

/* k1916 in k1909 in k1906 in print-banner in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_1918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:148: print */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[11],t1,lf[12]);}

/* bestlen in body686 in dump in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_4462(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4462,NULL,3,t0,t1,t2);}
if(C_truep(((C_word*)t0)[2])){
/* csi.scm:744: min */
t3=*((C_word*)lf[243]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,((C_word*)t0)[2],t2);}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in ... */
static void C_ccall f_5647(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5647,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5650,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6480,a[2]=((C_word*)t0)[9],a[3]=t4,a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_6480(t6,t2,t1);}

/* k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in ... */
static void C_ccall f_5641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5641,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5644,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=t2;
f_5644(t3,((C_word*)t0)[4]);}
else{
if(C_truep(t1)){
t3=t1;
t4=t2;
f_5644(t4,t3);}
else{
t3=t2;
f_5644(t3,((C_word*)t0)[6]);}}}

/* k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in ... */
static void C_fcall f_5644(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_5644,NULL,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_retrieve2(lf[23],"chop-separator");
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5647,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=t6,a[10]=t4,a[11]=t7,tmp=(C_word)a,a+=12,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6517,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1006: get-environment-variable */
t10=C_fast_retrieve(lf[36]);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,lf[351]);}

/* k6661 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_6663(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6663,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6667,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6669,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:914: ##sys#er-transformer */
((C_proc3)C_fast_retrieve_symbol_proc(lf[377]))(3,*((C_word*)lf[377]+1),t3,t4);}

/* k6665 in k6661 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_6667(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:913: ##sys#extend-macro-environment */
((C_proc5)C_fast_retrieve_symbol_proc(lf[370]))(5,*((C_word*)lf[370]+1),((C_word*)t0)[2],lf[371],((C_word*)t0)[3],t1);}

/* a6668 in k6661 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_6669(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6669,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6679,a[2]=t6,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t6))){
t8=C_i_cdr(t6);
if(C_truep(C_i_pairp(t8))){
t9=C_i_cdr(t8);
t10=t7;
f_6679(t10,C_eqp(t9,C_SCHEME_END_OF_LIST));}
else{
t9=t7;
f_6679(t9,C_SCHEME_FALSE);}}
else{
t8=t7;
f_6679(t8,C_SCHEME_FALSE);}}

/* k4397 in map-loop649 in g644 in k4326 in k4092 in k3978 in k3950 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in ... */
static void C_ccall f_4399(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4399,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4370(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4370(t6,((C_word*)t0)[5],t5);}}

/* ##sys#sharp-number-hook in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_1949(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1949,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1957,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:164: history-ref */
f_2281(t4,t3);}

/* doloop1413 in k6078 in k6075 in k6069 */
static void C_fcall f_6091(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6091,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_i_string_ref(((C_word*)t0)[3],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6104,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t6=C_fast_retrieve(lf[249]);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t4,*((C_word*)lf[299]+1));}}

/* a3051 in a3045 in a3027 in k2960 in k6639 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3052,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3060,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:455: read */
t3=*((C_word*)lf[60]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* a2270 in k2254 in k2251 in k2248 in doloop120 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2271,2,t0,t1);}
t2=C_i_vector_ref(C_retrieve2(lf[38],"history-list"),((C_word*)t0)[2]);
/* csi.scm:246: ##sys#print */
t3=*((C_word*)lf[93]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,t2,C_SCHEME_TRUE,*((C_word*)lf[92]+1));}

/* k6078 in k6075 in k6069 */
static void C_ccall f_6080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6080,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6083,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6091,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_6091(t6,t2,C_fix(0));}

/* k6081 in k6078 in k6075 in k6069 */
static void C_ccall f_6083(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6083,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6086,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1122: newline */
t3=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,*((C_word*)lf[299]+1));}

/* k6084 in k6081 in k6078 in k6075 in k6069 */
static void C_ccall f_6086(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1123: eval */
t2=C_fast_retrieve(lf[50]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k5091 in k2790 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_5093(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_truep(t1)){
/* csi.scm:851: display */
t2=*((C_word*)lf[100]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[101]);}
else{
t2=C_i_length(C_fast_retrieve(lf[102]));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=C_fixnum_difference(t2,t3);
t5=C_i_list_ref(C_fast_retrieve(lf[102]),t4);
t6=C_mutate2(&lf[7] /* (set! selected-frame ...) */,t5);
/* csi.scm:857: show-frameinfo */
f_4808(((C_word*)t0)[2],C_retrieve2(lf[7],"selected-frame"));}}

/* k6399 in for-each-loop1239 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in ... */
static void C_ccall f_6401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6391(t3,((C_word*)t0)[4],t2);}

/* k3077 in doloop362 in k3058 in a3051 in a3045 in a3027 in k2960 in k6639 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in ... */
static void C_ccall f_3079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3079,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)((C_word*)t0)[4])[1];
f_3062(t3,((C_word*)t0)[5],t1,t2);}

/* ##sys#user-read-hook in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_1920(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1920,4,t0,t1,t2,t3);}
t4=C_i_char_equalp(C_make_character(41),t2);
t5=(C_truep(t4)?t4:C_u_i_char_whitespacep(t2));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1937,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t7=C_fixnum_difference(C_retrieve2(lf[18],"history-count"),C_fix(1));
/* csi.scm:159: history-ref */
f_2281(t6,t7);}
else{
/* csi.scm:160: old-hook */
t6=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t1,t2,t3);}}

/* history-ref in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_2281(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2281,NULL,2,t1,t2);}
t3=C_i_inexact_to_exact(t2);
t4=C_fixnum_greaterp(t3,C_fix(0));
t5=(C_truep(t4)?C_fixnum_less_or_equal_p(t3,C_retrieve2(lf[18],"history-count")):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_vector_ref(C_retrieve2(lf[38],"history-list"),t3));}
else{
/* csi.scm:253: ##sys#error */
t6=*((C_word*)lf[42]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,lf[43],t2);}}

/* k6631 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_6633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:997: append */
t2=*((C_word*)lf[231]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)((C_word*)t0)[3])[1]);}

/* k6635 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_6637(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:978: canonicalize-args */
f_5440(((C_word*)t0)[2],t1);}

/* a3045 in a3027 in k2960 in k6639 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3046(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3046,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3052,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3085,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:454: ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* k3199 in k3196 in k3193 in k3141 in k3138 in k3121 in k3118 in k3115 in a3112 in k3109 in report in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in ... */
static void C_ccall f_3201(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3201,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3204,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fudge(C_fix(14)))){
/* csi.scm:531: display */
t3=*((C_word*)lf[100]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[125]);}
else{
t3=t2;
f_3204(2,t3,C_SCHEME_UNDEFINED);}}

/* k3202 in k3199 in k3196 in k3193 in k3141 in k3138 in k3121 in k3118 in k3115 in a3112 in k3109 in report in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in ... */
static void C_ccall f_3204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3204,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3207,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fudge(C_fix(15)))){
/* csi.scm:532: display */
t3=*((C_word*)lf[100]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[124]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* a3039 in a3033 in a3027 in k2960 in k6639 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3040(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3040,2,t0,t1);}
/* csi.scm:454: ##sys#error */
t2=*((C_word*)lf[42]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[365],((C_word*)t0)[2]);}

/* k3809 in k3818 in k3740 in k3737 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3811(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:626: fprintf */
t2=*((C_word*)lf[153]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[185],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k6419 in k6416 in k6413 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in ... */
static void C_ccall f_6421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1047: case-sensitive */
t2=C_fast_retrieve(lf[312]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* print-banner in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_1904(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1904,NULL,1,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1908,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:129: newline */
t3=*((C_word*)lf[15]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k6618 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_6620(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_i_member(lf[359],((C_word*)((C_word*)t0)[2])[1]);
t4=((C_word*)t0)[3];
f_5632(t4,(C_truep(t3)?C_i_set_cdr(t3,C_SCHEME_END_OF_LIST):C_SCHEME_FALSE));}

/* k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3099,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3102,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=t2;
f_3102(2,t3,t1);}
else{
/* ##sys#peek-c-string */
t3=*((C_word*)lf[380]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_INSTALL_PREFIX),C_fix(0));}}

/* k1906 in print-banner in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_1908(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1908,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1911,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:147: print */
t3=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[14]);}

/* k6184 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_ccall f_6186(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6186,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6189,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
/* csi.scm:1069: parentheses-synonyms */
t3=C_fast_retrieve(lf[310]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],C_SCHEME_FALSE);}
else{
/* csi.scm:1068: display */
t3=*((C_word*)lf[100]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[317]);}}
else{
t2=((C_word*)t0)[2];
f_5846(2,t2,C_SCHEME_UNDEFINED);}}

/* k6187 in k6184 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in ... */
static void C_ccall f_6189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1069: parentheses-synonyms */
t2=C_fast_retrieve(lf[310]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* a3090 in a3084 in a3045 in a3027 in k2960 in k6639 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3091,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* loop in collect-options in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in ... */
static void C_fcall f_5658(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5658,NULL,3,t0,t1,t2);}
t3=C_i_member(((C_word*)t0)[2],t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5666,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1000: g1205 */
t5=t4;
f_5666(t5,t1,t3);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}}

/* k3205 in k3202 in k3199 in k3196 in k3193 in k3141 in k3138 in k3121 in k3118 in k3115 in a3112 in k3109 in report in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in ... */
static void C_ccall f_3207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in ... */
static void C_ccall f_5650(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5650,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5652,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp));
t8=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5734,tmp=(C_word)a,a+=2,tmp));
t9=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5791,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t2,a[11]=t4,tmp=(C_word)a,a+=12,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6472,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1027: member* */
f_5385(t10,lf[348],((C_word*)((C_word*)t0)[2])[1]);}

/* collect-options in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in ... */
static void C_fcall f_5652(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5652,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5658,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_5658(t6,t1,((C_word*)((C_word*)t0)[2])[1]);}

/* k6416 in k6413 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in ... */
static void C_ccall f_6418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6418,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6421,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1046: register-feature! */
t3=C_fast_retrieve(lf[274]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[332]);}

/* k6413 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in ... */
static void C_ccall f_6415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6415,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6418,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f7530,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1046: register-feature! */
t4=C_fast_retrieve(lf[274]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[332]);}
else{
/* csi.scm:1045: display */
t3=*((C_word*)lf[100]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[333]);}}
else{
t2=((C_word*)t0)[2];
f_5809(2,t2,C_SCHEME_UNDEFINED);}}

/* k4999 in for-each-loop819 in k4899 in k4896 in k4893 in k4890 in k4887 in k4884 in k4881 in k4878 in k4875 in k4872 in doloop785 in k4832 in show-frameinfo in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in ... */
static void C_ccall f_5001(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_4991(t4,((C_word*)t0)[5],t2,t3);}

/* k6428 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in ... */
static void C_ccall f_6430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1043: print-banner */
f_1904(((C_word*)t0)[2]);}

/* k3221 in k3193 in k3141 in k3138 in k3121 in k3118 in k3115 in a3112 in k3109 in report in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in ... */
static void C_ccall f_3223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3223,2,t0,t1);}
t2=t1;
t3=C_fudge(C_fix(3));
t4=(C_truep(t3)?lf[126]:lf[127]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3231,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t5,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* csi.scm:514: software-type */
t7=C_fast_retrieve(lf[139]);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* k6447 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in ... */
static void C_ccall f_6449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1037: exit */
t2=C_fast_retrieve(lf[57]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* k3229 in k3221 in k3193 in k3141 in k3138 in k3121 in k3118 in k3115 in a3112 in k3109 in report in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in ... */
static void C_ccall f_3231(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3231,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3235,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* csi.scm:515: software-version */
t4=C_fast_retrieve(lf[138]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k3233 in k3229 in k3221 in k3193 in k3141 in k3138 in k3121 in k3118 in k3115 in a3112 in k3109 in report in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in ... */
static void C_ccall f_3235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3235,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3239,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* csi.scm:516: build-platform */
t4=C_fast_retrieve(lf[137]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* loop in k4225 in g604 in k4220 in k4092 in k3978 in k3950 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in ... */
static void C_fcall f_4236(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(13);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4236,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4246,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_i_caar(t2);
t5=C_eqp(((C_word*)t0)[3],t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4259,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4264,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:713: ##sys#with-print-length-limit */
((C_proc4)C_fast_retrieve_symbol_proc(lf[94]))(4,*((C_word*)lf[94]+1),t6,C_fix(100),t7);}
else{
t6=C_i_cddr(t2);
/* csi.scm:718: loop */
t11=t1;
t12=t6;
t1=t11;
t2=t12;
goto loop;}}}

/* k6434 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in ... */
static void C_ccall f_6436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6436,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6439,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=C_set_block_item(lf[336] /* ##sys#warnings-enabled */,0,C_SCHEME_FALSE);
t4=((C_word*)t0)[2];
f_5803(t4,t3);}
else{
/* csi.scm:1039: display */
t3=*((C_word*)lf[100]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[337]);}}
else{
t2=((C_word*)t0)[2];
f_5803(t2,C_SCHEME_UNDEFINED);}}

/* k6437 in k6434 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in ... */
static void C_ccall f_6439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(lf[336] /* ##sys#warnings-enabled */,0,C_SCHEME_FALSE);
t3=((C_word*)t0)[2];
f_5803(t3,t2);}

/* a3084 in a3045 in a3027 in k2960 in k6639 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3085(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_3085r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3085r(t0,t1,t2);}}

static void C_ccall f_3085r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3091,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:454: k354 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* k3241 in k3237 in k3233 in k3229 in k3221 in k3193 in k3141 in k3138 in k3121 in k3118 in k3115 in a3112 in k3109 in report in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in ... */
static void C_ccall f_3243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3243,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_3247,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t2,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3305,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:520: keyword-style */
t5=C_fast_retrieve(lf[135]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k4185 in for-each-loop581 in doloop576 in k4126 in k4123 in k4092 in k3978 in k3950 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in ... */
static void C_ccall f_4187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4177(t3,((C_word*)t0)[4],t2);}

/* k3237 in k3233 in k3229 in k3221 in k3193 in k3141 in k3138 in k3121 in k3118 in k3115 in a3112 in k3109 in report in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in ... */
static void C_ccall f_3239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3239,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3243,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* csi.scm:518: repository-path */
t4=C_fast_retrieve(lf[136]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k5036 in k5033 in k4890 in k4887 in k4884 in k4881 in k4878 in k4875 in k4872 in doloop785 in k4832 in show-frameinfo in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in ... */
static void C_ccall f_5038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:827: ##sys#print */
t2=*((C_word*)lf[93]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[254],C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k6464 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in ... */
static void C_ccall f_6466(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1032: exit */
t2=C_fast_retrieve(lf[57]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* k5033 in k4890 in k4887 in k4884 in k4881 in k4878 in k4875 in k4872 in doloop785 in k4832 in show-frameinfo in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in ... */
static void C_ccall f_5035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5035,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5038,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:827: ##sys#print */
t3=*((C_word*)lf[93]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k3249 in k3245 in k3241 in k3237 in k3233 in k3229 in k3221 in k3193 in k3141 in k3138 in k3121 in k3118 in k3115 in a3112 in k3109 in report in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in ... */
static void C_ccall f_3251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3251,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3255,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=t2,a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
t4=C_i_vector_ref(((C_word*)t0)[2],C_fix(1));
/* csi.scm:522: shorten */
f_3125(t3,t4);}

/* k4257 in loop in k4225 in g604 in k4220 in k4092 in k3978 in k3950 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in ... */
static void C_ccall f_4259(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:717: newline */
t2=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3245 in k3241 in k3237 in k3233 in k3229 in k3221 in k3193 in k3141 in k3138 in k3121 in k3118 in k3115 in a3112 in k3109 in report in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in ... */
static void C_ccall f_3247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3247,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3251,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
t4=C_i_vector_ref(((C_word*)t0)[2],C_fix(0));
/* csi.scm:521: shorten */
f_3125(t3,t4);}

/* csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2384(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2384,3,t0,t1,t2);}
if(C_truep(C_eofp(t2))){
/* csi.scm:302: exit */
t3=C_fast_retrieve(lf[57]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2400,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(0));
t5=t3;
f_2400(t5,C_eqp(lf[115],t4));}
else{
t4=t3;
f_2400(t4,C_SCHEME_FALSE);}}}

/* k6454 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in ... */
static void C_ccall f_6456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1036: print */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* a3027 in k2960 in k6639 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3028(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3028,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3034,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3046,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:454: with-exception-handler */
t5=C_fast_retrieve(lf[367]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* k4778 in k4775 in doloop733 in k4649 in k4646 in doloop723 in hexdump in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_4780(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_4723(t4,((C_word*)t0)[5],t2,t3);}

/* g604 in k4220 in k4092 in k3978 in k3950 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in ... */
static void C_fcall f_4223(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4223,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4227,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:709: fprintf */
t4=*((C_word*)lf[153]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[3],lf[228],t2);}

/* k4220 in k4092 in k3978 in k3950 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 in ... */
static void C_ccall f_4222(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4222,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4223,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(1));
t4=C_i_check_list_2(t3,lf[77]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4291,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_4291(t8,((C_word*)t0)[4],t3);}

/* k3020 in map-loop334 in k2983 in k2980 in k2960 in k6639 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3022(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3022,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2993(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2993(t6,((C_word*)t0)[5],t5);}}

/* k4225 in g604 in k4220 in k4092 in k3978 in k3950 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in ... */
static void C_ccall f_4227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4227,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4236,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_4236(t6,((C_word*)t0)[5],t2);}

/* k4775 in doloop733 in k4649 in k4646 in doloop723 in hexdump in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_4777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4777,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4780,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4795,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4799,a[2]=((C_word*)t0)[7],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:783: ref */
t5=((C_word*)t0)[8];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t4,((C_word*)t0)[9],((C_word*)t0)[3]);}

/* k2459 in k2456 in k2453 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[41]+1));}

/* k2474 in k2471 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2476(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:325: describe */
t2=C_retrieve2(lf[63],"describe");
f_3450(t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k2471 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2473,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2476,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:324: eval */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k3985 in k3978 in k3950 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[2],C_fix(2));
switch(t3){
case C_fix(0):
/* csi.scm:669: fprintf */
t4=*((C_word*)lf[153]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,((C_word*)t0)[3],((C_word*)t0)[4],lf[203],t1,t2,lf[204]);
case C_fix(1):
/* csi.scm:669: fprintf */
t4=*((C_word*)lf[153]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,((C_word*)t0)[3],((C_word*)t0)[4],lf[203],t1,t2,lf[205]);
case C_fix(2):
/* csi.scm:669: fprintf */
t4=*((C_word*)lf[153]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,((C_word*)t0)[3],((C_word*)t0)[4],lf[203],t1,t2,lf[206]);
case C_fix(3):
/* csi.scm:669: fprintf */
t4=*((C_word*)lf[153]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,((C_word*)t0)[3],((C_word*)t0)[4],lf[203],t1,t2,lf[207]);
case C_fix(4):
/* csi.scm:669: fprintf */
t4=*((C_word*)lf[153]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,((C_word*)t0)[3],((C_word*)t0)[4],lf[203],t1,t2,lf[208]);
case C_fix(5):
/* csi.scm:669: fprintf */
t4=*((C_word*)lf[153]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,((C_word*)t0)[3],((C_word*)t0)[4],lf[203],t1,t2,lf[209]);
case C_fix(6):
/* csi.scm:669: fprintf */
t4=*((C_word*)lf[153]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,((C_word*)t0)[3],((C_word*)t0)[4],lf[203],t1,t2,lf[210]);
case C_fix(7):
/* csi.scm:669: fprintf */
t4=*((C_word*)lf[153]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,((C_word*)t0)[3],((C_word*)t0)[4],lf[203],t1,t2,lf[211]);
case C_fix(8):
/* csi.scm:669: fprintf */
t4=*((C_word*)lf[153]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,((C_word*)t0)[3],((C_word*)t0)[4],lf[203],t1,t2,lf[212]);
case C_fix(9):
/* csi.scm:669: fprintf */
t4=*((C_word*)lf[153]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,((C_word*)t0)[3],((C_word*)t0)[4],lf[203],t1,t2,lf[213]);
default:
t4=C_SCHEME_UNDEFINED;
/* csi.scm:669: fprintf */
t5=*((C_word*)lf[153]+1);
((C_proc7)(void*)(*((C_word*)t5+1)))(7,t5,((C_word*)t0)[3],((C_word*)t0)[4],lf[203],t1,t2,t4);}}

/* k3978 in k3950 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3980,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3987,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:670: ##sys#peek-unsigned-integer */
((C_proc4)C_fast_retrieve_symbol_proc(lf[199]))(4,*((C_word*)lf[199]+1),t2,((C_word*)t0)[2],C_fix(0));}
else{
if(C_truep(C_anypointerp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4088,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:683: ##sys#peek-unsigned-integer */
((C_proc4)C_fast_retrieve_symbol_proc(lf[199]))(4,*((C_word*)lf[199]+1),t2,((C_word*)t0)[2],C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4094,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:684: ##sys#bytevector? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[235]+1)))(3,*((C_word*)lf[235]+1),t2,((C_word*)t0)[2]);}}}

/* k4793 in k4775 in doloop733 in k4649 in k4646 in doloop723 in hexdump in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_4795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:783: display */
t2=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k4797 in k4775 in doloop733 in k4649 in k4646 in doloop723 in hexdump in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_4799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:783: justify */
f_4608(((C_word*)t0)[3],t1,C_fix(2),C_fix(16),C_make_character(48));}

/* k2444 in k2430 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:315: ##sys#strip-syntax */
((C_proc3)C_fast_retrieve_symbol_proc(lf[59]))(3,*((C_word*)lf[59]+1),((C_word*)t0)[2],t1);}

/* k2440 in k2430 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:315: pretty-print */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* doloop362 in k3058 in a3051 in a3045 in a3027 in k2960 in k6639 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 in ... */
static void C_fcall f_3062(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3062,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_eofp(t2))){
/* csi.scm:457: reverse */
t4=*((C_word*)lf[366]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3079,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:455: read */
t5=*((C_word*)lf[60]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}}

/* k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in ... */
static void C_fcall f_5803(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5803,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5806,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)t0)[8])){
t3=t2;
f_5806(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6430,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1042: load-verbose */
t4=C_fast_retrieve(lf[335]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_TRUE);}}

/* k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in ... */
static void C_ccall f_5800(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5800,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5803,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6436,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1038: member* */
f_5385(t3,lf[338],((C_word*)((C_word*)t0)[6])[1]);}

/* k2453 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2455,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2458,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:319: eval */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k2456 in k2453 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2458,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2461,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:320: pretty-print */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in ... */
static void C_ccall f_5806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5806,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5809,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6415,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1044: member* */
f_5385(t3,lf[334],((C_word*)((C_word*)t0)[6])[1]);}

/* k3058 in a3051 in a3045 in a3027 in k2960 in k6639 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3060,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3062,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_3062(t5,((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}

/* k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in ... */
static void C_ccall f_5809(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5809,2,t0,t1);}
t2=C_fast_retrieve(lf[274]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5812,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
/* csi.scm:1048: collect-options */
t4=((C_word*)((C_word*)t0)[11])[1];
f_5652(t4,t3,lf[331]);}

/* k1888 in k1878 in k6470 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in ... */
static void C_ccall f_1890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:101: display */
t2=*((C_word*)lf[100]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* a3033 in a3027 in k2960 in k6639 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3034(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3034,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3040,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:454: k354 */
t4=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* g247 in k2582 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_2585(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2585,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2591,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:344: g262 */
t4=((C_word*)t0)[3];
((C_proc5)C_fast_retrieve_proc(t4))(5,t4,t1,t2,lf[76],t3);}

/* k2582 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2584(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2584,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2585,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(t1,lf[77]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2604,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2609,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_2609(t8,t4,t1);}

/* k2433 in k2430 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[41]+1));}

/* k2430 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2432(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2432,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2435,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2442,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2446,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:315: expand */
t5=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t1);}

/* a2590 in g247 in k2582 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2591(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2591,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2595,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:344: pretty-print */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k2593 in a2590 in g247 in k2582 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2595(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:344: print* */
t2=*((C_word*)lf[74]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[75]);}

/* find in loop in member* in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_5403(C_word t0,C_word t1,C_word t2){
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
loop:
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5403,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_i_cdr(((C_word*)t0)[2]);
/* csi.scm:929: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_5391(t4,t1,t3);}
else{
t3=C_i_car(t2);
t4=C_i_car(((C_word*)t0)[2]);
if(C_truep(C_i_equalp(t3,t4))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,((C_word*)t0)[2]);}
else{
t5=t2;
t6=C_u_i_cdr(t5);
/* csi.scm:931: find */
t9=t1;
t10=t6;
t1=t9;
t2=t10;
goto loop;}}}

/* def-len688 in dump in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_4570(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4570,NULL,2,t0,t1);}
/* csi.scm:740: def-out689 */
t2=((C_word*)t0)[2];
f_4565(t2,t1,C_SCHEME_FALSE);}

/* k3489 in loop1 in k3461 in k3583 in descseq in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3491(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3491,2,t0,t1);}
t2=t1;
t3=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[3],t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3500,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=t6,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp));
t8=((C_word*)t6)[1];
f_3500(t8,((C_word*)t0)[9],C_fix(1),t4);}

/* k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_2400(C_word t0,C_word t1){
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
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2400,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_assq(t2,C_retrieve2(lf[48],"command-table"));
if(C_truep(t3)){
t4=((C_word*)t0)[3];
t5=C_i_cadr(t3);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2417,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:307: g202 */
t7=t5;
((C_proc2)C_fast_retrieve_proc(t7))(2,t7,t6);}
else{
t4=C_eqp(t2,lf[58]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2432,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:314: read */
t6=*((C_word*)lf[60]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_eqp(t2,lf[61]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2455,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:318: read */
t7=*((C_word*)lf[60]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=C_eqp(t2,lf[62]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2473,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:323: read */
t8=*((C_word*)lf[60]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t7=C_eqp(t2,lf[64]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2488,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:327: read */
t9=*((C_word*)lf[60]+1);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t8=C_eqp(t2,lf[66]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2503,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:331: read */
t10=*((C_word*)lf[60]+1);
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t9=C_eqp(t2,lf[67]);
if(C_truep(t9)){
/* csi.scm:336: report */
t10=C_retrieve2(lf[68],"report");
f_3103(t10,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);}
else{
t10=C_eqp(t2,lf[69]);
if(C_truep(t10)){
/* csi.scm:337: ##sys#quit-hook */
t11=C_fast_retrieve(lf[70]);
f_5884(2,t11,((C_word*)t0)[3]);}
else{
t11=C_eqp(t2,lf[71]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2542,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2575,a[2]=((C_word*)t0)[7],a[3]=t12,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:339: read-line */
t14=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,t13);}
else{
t12=C_eqp(t2,lf[73]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2584,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2634,a[2]=((C_word*)t0)[7],a[3]=t13,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:343: read-line */
t15=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,t14);}
else{
t13=C_eqp(t2,lf[78]);
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2643,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:347: read */
t15=*((C_word*)lf[60]+1);
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,t14);}
else{
t14=C_eqp(t2,lf[82]);
if(C_truep(t14)){
if(C_truep(C_fast_retrieve(lf[83]))){
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2695,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t16=C_a_i_list1(&a,1,C_fast_retrieve(lf[83]));
/* csi.scm:353: history-add */
t17=C_retrieve2(lf[40],"history-add");
f_2182(t17,t15,t16);}
else{
t15=C_SCHEME_UNDEFINED;
t16=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,t15);}}
else{
t15=C_eqp(t2,lf[84]);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2711,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2729,a[2]=t16,tmp=(C_word)a,a+=3,tmp);
t18=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2733,a[2]=t17,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:358: editor-command */
t19=C_fast_retrieve(lf[6]);
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,t18);}
else{
t16=C_eqp(t2,lf[89]);
if(C_truep(t16)){
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2749,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t18=*((C_word*)lf[41]+1);
/* csi.scm:235: vector-fill! */
t19=*((C_word*)lf[90]+1);
((C_proc4)(void*)(*((C_word*)t19+1)))(4,t19,t17,C_retrieve2(lf[38],"history-list"),*((C_word*)lf[41]+1));}
else{
t17=C_eqp(t2,lf[91]);
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2761,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2237,a[2]=t20,tmp=(C_word)a,a+=3,tmp));
t22=((C_word*)t20)[1];
f_2237(t22,t18,C_fix(1));}
else{
t18=C_eqp(t2,lf[97]);
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2773,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:369: show-frameinfo */
f_4808(t19,C_retrieve2(lf[7],"selected-frame"));}
else{
t19=C_eqp(t2,lf[99]);
if(C_truep(t19)){
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2785,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2792,a[2]=t20,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:372: read */
t22=*((C_word*)lf[60]+1);
((C_proc2)(void*)(*((C_word*)t22+1)))(2,t22,t21);}
else{
t20=C_eqp(t2,lf[103]);
if(C_truep(t20)){
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2805,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:375: read */
t22=*((C_word*)lf[60]+1);
((C_proc2)(void*)(*((C_word*)t22+1)))(2,t22,t21);}
else{
t21=C_eqp(t2,lf[110]);
if(C_truep(t21)){
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2814,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:377: read-line */
t23=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t23+1)))(2,t23,t22);}
else{
t22=C_eqp(t2,lf[111]);
if(C_truep(t22)){
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2833,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:382: display */
t24=*((C_word*)lf[100]+1);
((C_proc3)(void*)(*((C_word*)t24+1)))(3,t24,t23,lf[113]);}
else{
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2884,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:413: printf */
t24=*((C_word*)lf[85]+1);
((C_proc4)(void*)(*((C_word*)t24+1)))(4,t24,t23,lf[114],((C_word*)t0)[2]);}}}}}}}}}}}}}}}}}}}}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2930,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2936,a[2]=((C_word*)t0)[10],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:416: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],t2,t3);}}

/* for-each-loop293 in k2831 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_2860(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2860,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2870,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_caddr(t4);
if(C_truep(t5)){
/* csi.scm:408: print */
t6=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,C_make_character(32),t5);}
else{
t6=C_u_i_car(t4);
/* csi.scm:409: print */
t7=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,lf[112],t6);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2415 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[41]+1));}

/* k2665 in a2662 in k2650 in a2647 in k2641 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2667(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* a2662 in k2650 in a2647 in k2641 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2663(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_2663r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2663r(t0,t1,t2);}}

static void C_ccall f_2663r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2667,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2674,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:347: ##sys#stop-timer */
t5=*((C_word*)lf[80]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_1853(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1853,2,t0,t1);}
t2=C_mutate2(&lf[0] /* (set! constant8 ...) */,lf[1]);
t3=C_set_block_item(lf[2] /* ##sys#repl-print-length-limit */,0,C_fix(2048));
t4=C_a_i_cons(&a,2,lf[3],C_fast_retrieve(lf[4]));
t5=C_mutate2((C_word*)lf[4]+1 /* (set! ##sys#features ...) */,t4);
t6=C_set_block_item(lf[5] /* ##sys#notices-enabled */,0,C_SCHEME_TRUE);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1866,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:66: make-parameter */
t8=C_fast_retrieve(lf[404]);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,C_SCHEME_FALSE);}

/* k2868 in for-each-loop293 in k2831 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2860(t3,((C_word*)t0)[4],t2);}

/* k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_1850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1850,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1853,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k5466 in loop in canonicalize-args in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_5468(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_5468,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_subchar(((C_word*)t0)[2],C_fix(1));
if(C_truep(C_i_char_equalp(C_make_character(58),t2))){
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* csi.scm:953: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_5446(t5,((C_word*)t0)[5],t4);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5482,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5551,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:954: substring */
t5=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],C_fix(1));}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5559,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* csi.scm:958: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_5446(t5,t2,t4);}}

/* a2675 in k2641 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2676(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_2676r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2676r(t0,t1,t2);}}

static void C_ccall f_2676r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2680,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:349: history-add */
t4=C_retrieve2(lf[40],"history-add");
f_2182(t4,t3,t2);}

/* k2672 in a2662 in k2650 in a2647 in k2641 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:347: ##sys#display-times */
((C_proc3)C_fast_retrieve_symbol_proc(lf[79]))(3,*((C_word*)lf[79]+1),((C_word*)t0)[2],t1);}

/* k1881 in k1878 in k6470 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in ... */
static void C_ccall f_1883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:106: display */
t2=*((C_word*)lf[100]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[343]);}

/* k1878 in k6470 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in ... */
static void C_ccall f_1880(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1880,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1883,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1890,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,lf[344],C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,lf[0],t4);
t6=C_a_i_cons(&a,2,lf[345],t5);
/* csi.scm:79: ##sys#print-to-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[346]))(3,*((C_word*)lf[346]+1),t3,t6);}

/* k5685 in g1205 in loop in collect-options in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in ... */
static void C_ccall f_5687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5687,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k4804 in doloop723 in hexdump in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_4806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:771: display */
t2=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* show-frameinfo in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_4808(C_word t1,C_word t2){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4808,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4811,tmp=(C_word)a,a+=2,tmp);
t4=C_fast_retrieve(lf[102]);
t5=(C_truep(C_fast_retrieve(lf[102]))?C_fast_retrieve(lf[102]):C_SCHEME_END_OF_LIST);
t6=t5;
t7=C_i_length(t6);
t8=t7;
t9=t2;
t10=(C_truep(C_u_i_memq(t9,t6))?t2:C_SCHEME_FALSE);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4834,a[2]=t8,a[3]=t3,a[4]=t1,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t10)){
t12=t11;
f_4834(t12,t10);}
else{
if(C_truep(C_fixnum_greaterp(t8,C_fix(0)))){
t12=C_fixnum_difference(t8,C_fix(1));
t13=t11;
f_4834(t13,C_i_list_ref(t6,t12));}
else{
t12=t11;
f_4834(t12,C_SCHEME_FALSE);}}}

/* a2647 in k2641 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2648,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2652,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:347: ##sys#start-timer */
t3=*((C_word*)lf[81]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2641 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2643(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2643,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2648,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2676,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:347: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[4],t3,t4);}

/* k2853 in k2831 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[41]+1));}

/* addext in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_2024(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2024,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2031,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:191: file-exists? */
t4=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* loop in canonicalize-args in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_5446(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5446,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_i_car(t2);
t4=t3;
if(C_truep((C_truep(C_i_equalp(t4,lf[262]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[263]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[264]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[265]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[266]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5468,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=C_block_size(t4);
if(C_truep(C_fixnum_greaterp(t6,C_fix(2)))){
t7=C_subchar(t4,C_fix(0));
if(C_truep(C_i_char_equalp(C_make_character(45),t7))){
t8=C_i_member(t4,lf[269]);
t9=t5;
f_5468(t9,C_i_not(t8));}
else{
t8=t5;
f_5468(t8,C_SCHEME_FALSE);}}
else{
t7=t5;
f_5468(t7,C_SCHEME_FALSE);}}}}

/* prin1 in show-frameinfo in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_4811(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4811,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4817,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:803: ##sys#with-print-length-limit */
((C_proc4)C_fast_retrieve_symbol_proc(lf[94]))(4,*((C_word*)lf[94]+1),t1,C_fix(100),t3);}

/* canonicalize-args in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_5440(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5440,NULL,2,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5446,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_5446(t6,t1,t2);}

/* a4816 in prin1 in show-frameinfo in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_4817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4817,2,t0,t1);}
/* csi.scm:806: ##sys#print */
t2=*((C_word*)lf[93]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[2],C_SCHEME_TRUE,*((C_word*)lf[92]+1));}

/* a2656 in k2650 in a2647 in k2641 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2657(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2657,2,t0,t1);}
/* csi.scm:348: eval */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[3]);}

/* k2650 in a2647 in k2641 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2652,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2657,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2663,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:347: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[4],t2,t3);}

/* k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_1866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1866,2,t0,t1);}
t2=C_mutate2((C_word*)lf[6]+1 /* (set! editor-command ...) */,t1);
t3=lf[7] /* selected-frame */ =C_SCHEME_FALSE;;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1871,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:70: get-environment-variable */
t5=C_fast_retrieve(lf[36]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[403]);}

/* k6255 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in ... */
static void C_ccall f_6257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6257,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[230]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6263,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6310,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_6310(t7,t3,t1);}

/* k6251 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in ... */
static void C_ccall f_6253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1052: ##sys#nodups */
((C_proc4)C_fast_retrieve_symbol_proc(lf[325]))(4,*((C_word*)lf[325]+1),((C_word*)t0)[2],t1,*((C_word*)lf[326]+1));}

/* k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2005(C_word c,C_word t0,C_word t1){
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
C_word ab[49],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2005,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2024,tmp=(C_word)a,a+=2,tmp);
t4=C_mutate2(&lf[29] /* (set! lookup-script-file ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2075,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t5=C_SCHEME_UNDEFINED;
t6=C_a_i_vector(&a,32,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5);
t7=C_mutate2(&lf[38] /* (set! history-list ...) */,t6);
t8=lf[18] /* history-count */ =C_fix(1);;
t9=C_fast_retrieve(lf[39]);
t10=C_mutate2(&lf[40] /* (set! history-add ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2182,a[2]=t9,tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2(&lf[19] /* (set! history-ref ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2281,tmp=(C_word)a,a+=2,tmp));
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2306,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t13=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6840,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:255: repl-prompt */
t14=C_fast_retrieve(lf[397]);
((C_proc3)(void*)(*((C_word*)t14+1)))(3,t14,t12,t13);}

/* k2632 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:343: string-split */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k3969 in k3950 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:662: fprintf */
t2=*((C_word*)lf[153]+1);
((C_proc8)(void*)(*((C_word*)t2+1)))(8,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[202],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t1);}

/* k2882 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[41]+1));}

/* map-loop1316 in k6265 in k6261 in k6255 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in ... */
static void C_fcall f_6275(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6275,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6304,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:1054: g1322 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6271 in k6265 in k6261 in k6255 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in ... */
static void C_ccall f_6273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1053: append */
t2=*((C_word*)lf[231]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1,C_fast_retrieve(lf[133]),((C_word*)t0)[4]);}

/* k2602 in k2582 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[41]+1));}

/* for-each-loop246 in k2582 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_2609(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2609,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2619,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:343: g247 */
t5=((C_word*)t0)[3];
f_2585(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_1874(C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1874,NULL,2,t0,t1);}
t2=C_mutate2(&lf[8] /* (set! default-editor ...) */,t1);
t3=C_mutate2(&lf[9] /* (set! print-banner ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1904,tmp=(C_word)a,a+=2,tmp));
t4=C_fast_retrieve(lf[16]);
t5=C_mutate2((C_word*)lf[16]+1 /* (set! ##sys#user-read-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1920,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[20]+1 /* (set! ##sys#sharp-number-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1949,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate2(&lf[21] /* (set! dirseparator? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1959,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate2(&lf[23] /* (set! chop-separator ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1974,tmp=(C_word)a,a+=2,tmp));
t9=C_set_block_item(lf[25] /* @ */,0,C_SCHEME_FALSE);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2005,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_symbol_proc(lf[398]))(4,*((C_word*)lf[398]+1),t10,C_fix(256),C_make_character(32));}

/* k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_1871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1871,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1874,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;
f_1874(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6862,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:71: get-environment-variable */
t4=C_fast_retrieve(lf[36]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[402]);}}

/* k6265 in k6261 in k6255 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_ccall f_6267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6267,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[230]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6273,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6275,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_6275(t7,t3,t1);}

/* k6261 in k6255 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in ... */
static void C_ccall f_6263(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6263,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_retrieve2(lf[23],"chop-separator");
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6267,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t6,a[6]=t4,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
/* csi.scm:1054: collect-options */
t9=((C_word*)((C_word*)t0)[4])[1];
f_5652(t9,t8,lf[327]);}

/* k2617 in for-each-loop246 in k2582 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2609(t3,((C_word*)t0)[4],t2);}

/* k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3588(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3588,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3591,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_charp(((C_word*)t0)[3]))){
t3=C_fix(C_character_code(((C_word*)t0)[3]));
/* csi.scm:602: fprintf */
t4=*((C_word*)lf[153]+1);
((C_proc8)(void*)(*((C_word*)t4+1)))(8,t4,t2,((C_word*)t0)[4],lf[160],((C_word*)t0)[3],t3,t3,t3);}
else{
switch(((C_word*)t0)[3]){
case C_SCHEME_TRUE:
/* csi.scm:603: fprintf */
t3=*((C_word*)lf[153]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[161]);
case C_SCHEME_FALSE:
/* csi.scm:604: fprintf */
t3=*((C_word*)lf[153]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[162]);
default:
if(C_truep(C_i_nullp(((C_word*)t0)[3]))){
/* csi.scm:605: fprintf */
t3=*((C_word*)lf[153]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[163]);}
else{
if(C_truep(C_eofp(((C_word*)t0)[3]))){
/* csi.scm:606: fprintf */
t3=*((C_word*)lf[153]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[164]);}
else{
t3=*((C_word*)lf[41]+1);
t4=C_eqp(*((C_word*)lf[41]+1),((C_word*)t0)[3]);
if(C_truep(t4)){
/* csi.scm:607: fprintf */
t5=*((C_word*)lf[153]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,((C_word*)t0)[4],lf[165]);}
else{
if(C_truep(C_fixnump(((C_word*)t0)[3]))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3657,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:609: fprintf */
t6=*((C_word*)lf[153]+1);
((C_proc8)(void*)(*((C_word*)t6+1)))(8,t6,t5,((C_word*)t0)[4],lf[167],((C_word*)t0)[3],((C_word*)t0)[3],((C_word*)t0)[3],((C_word*)t0)[3]);}
else{
t5=C_slot(lf[168],C_fix(0));
t6=C_eqp(((C_word*)t0)[3],t5);
if(C_truep(t6)){
/* csi.scm:614: fprintf */
t7=*((C_word*)lf[153]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t2,((C_word*)t0)[4],lf[169]);}
else{
if(C_truep(C_i_flonump(((C_word*)t0)[3]))){
/* csi.scm:615: fprintf */
t7=*((C_word*)lf[153]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t2,((C_word*)t0)[4],lf[170],((C_word*)t0)[3]);}
else{
if(C_truep(C_i_numberp(((C_word*)t0)[3]))){
/* csi.scm:616: fprintf */
t7=*((C_word*)lf[153]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t2,((C_word*)t0)[4],lf[171],((C_word*)t0)[3]);}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
/* csi.scm:617: descseq */
t7=((C_word*)t0)[5];
f_3456(6,t7,t2,lf[172],*((C_word*)lf[173]+1),((C_word*)t0)[6],C_fix(0));}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[3]))){
/* csi.scm:618: descseq */
t7=((C_word*)t0)[5];
f_3456(6,t7,t2,lf[174],*((C_word*)lf[173]+1),*((C_word*)lf[175]+1),C_fix(0));}
else{
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3723,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* csi.scm:619: keyword? */
t8=C_fast_retrieve(lf[238]);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,((C_word*)t0)[3]);}}}}}}}}}}}}

/* k3583 in descseq in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3585,2,t0,t1);}
t2=C_fixnum_difference(t1,((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3463,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
/* csi.scm:577: fprintf */
t5=*((C_word*)lf[153]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,((C_word*)t0)[3],lf[159],((C_word*)t0)[7],t3);}
else{
t5=t4;
f_3463(2,t5,C_SCHEME_UNDEFINED);}}

/* k6789 in k6780 in k6777 in a6774 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_6791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:432: printf */
t2=*((C_word*)lf[85]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[388]);}

/* f_5781 in evalstring in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in ... */
static void C_ccall f_5781(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5781,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[41]+1));}

/* k3589 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3591(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[41]+1));}

/* k6780 in k6777 in a6774 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_6782(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6782,NULL,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(t2)){
if(C_truep(C_i_symbolp(((C_word*)((C_word*)t0)[2])[1]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6806,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6827,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:435: ##sys#resolve-module-name */
((C_proc4)C_fast_retrieve_symbol_proc(lf[386]))(4,*((C_word*)lf[386]+1),t4,((C_word*)((C_word*)t0)[2])[1],C_SCHEME_FALSE);}
else{
/* csi.scm:434: printf */
t3=*((C_word*)lf[85]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],lf[387],((C_word*)((C_word*)t0)[2])[1]);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6791,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:431: ##sys#switch-module */
((C_proc3)C_fast_retrieve_symbol_proc(lf[383]))(3,*((C_word*)lf[383]+1),t3,C_SCHEME_FALSE);}}

/* k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in ... */
static void C_ccall f_5791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5791,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5794,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_i_member(lf[342],((C_word*)((C_word*)t0)[6])[1]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6466,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1031: print-banner */
f_1904(t3);}
else{
t3=t2;
f_5794(2,t3,C_SCHEME_UNDEFINED);}}

/* k6804 in k6780 in k6777 in a6774 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_6806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6806,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6810,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:430: g324 */
t3=t2;
f_6810(t3,((C_word*)t0)[3],t1);}
else{
/* csi.scm:440: printf */
t2=*((C_word*)lf[85]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],lf[384],((C_word*)((C_word*)t0)[2])[1]);}}

/* k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in ... */
static void C_fcall f_5797(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5797,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5800,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_i_member(lf[339],((C_word*)((C_word*)t0)[6])[1]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6449,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6456,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1036: chicken-version */
t5=C_fast_retrieve(lf[13]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t3=t2;
f_5800(2,t3,C_SCHEME_UNDEFINED);}}

/* k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in ... */
static void C_ccall f_5794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5794,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5797,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_i_member(lf[340],((C_word*)((C_word*)t0)[6])[1]))){
t3=C_set_block_item(lf[341] /* ##sys#setup-mode */,0,C_SCHEME_TRUE);
t4=t2;
f_5797(t4,t3);}
else{
t3=t2;
f_5797(t3,C_SCHEME_UNDEFINED);}}

/* a6774 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_6775(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6775,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6779,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:427: read */
t3=*((C_word*)lf[60]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k6777 in a6774 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_6779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6779,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6782,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_stringp(((C_word*)t3)[1]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6838,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:429: ##sys#string->symbol */
((C_proc3)C_fast_retrieve_symbol_proc(lf[389]))(3,*((C_word*)lf[389]+1),t5,((C_word*)t3)[1]);}
else{
t5=t4;
f_6782(t5,C_SCHEME_UNDEFINED);}}

/* k6836 in k6777 in a6774 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_6838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_6782(t3,t2);}

/* k6849 in k6846 in a6839 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_6851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:258: sprintf */
t2=*((C_word*)lf[197]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[392],t1,C_retrieve2(lf[18],"history-count"));}

/* k3568 in loop2 in k3489 in loop1 in k3461 in k3583 in descseq in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 in ... */
static void C_ccall f_3570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_eqp(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* csi.scm:596: loop2 */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3500(t5,((C_word*)t0)[6],t3,t4);}
else{
/* csi.scm:597: loop2 */
t3=((C_word*)((C_word*)t0)[5])[1];
f_3500(t3,((C_word*)t0)[6],((C_word*)t0)[3],((C_word*)t0)[7]);}}

/* k2032 in k2029 in addext in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2034(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2034,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2040,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:194: file-exists? */
t4=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k6825 in k6780 in k6777 in a6774 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_6827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:435: ##sys#find-module */
((C_proc4)C_fast_retrieve_symbol_proc(lf[385]))(4,*((C_word*)lf[385]+1),((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* k2029 in addext in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2031,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2034,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[2];
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[27]))(4,*((C_word*)lf[27]+1),t2,t3,lf[28]);}}

/* k2204 in history-add in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2206(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(&lf[38] /* (set! history-list ...) */,t1);
t3=((C_word*)t0)[2];
f_2192(t3,t2);}

/* a6839 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_6840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6840,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6848,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:259: ##sys#current-module */
((C_proc2)C_fast_retrieve_symbol_proc(lf[396]))(2,*((C_word*)lf[396]+1),t2);}

/* k6856 in k6846 in a6839 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_6858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:261: sprintf */
t2=*((C_word*)lf[197]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[393],t1);}

/* k6846 in a6839 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_6848(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6848,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6851,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6858,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:261: ##sys#module-name */
((C_proc3)C_fast_retrieve_symbol_proc(lf[394]))(3,*((C_word*)lf[394]+1),t3,t1);}
else{
/* csi.scm:258: sprintf */
t3=*((C_word*)lf[197]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],lf[392],lf[395],C_retrieve2(lf[18],"history-count"));}}

/* k3944 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:659: sprintf */
t2=*((C_word*)lf[197]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[198],t1);}

/* k3940 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:658: descseq */
t2=((C_word*)t0)[2];
f_3456(6,t2,((C_word*)t0)[3],t1,*((C_word*)lf[173]+1),*((C_word*)lf[175]+1),C_fix(1));}

/* k2064 in loop in k2089 in k2077 in lookup-script-file in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* csi.scm:200: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2053(t3,((C_word*)t0)[2],t2);}}

/* k3950 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3952(C_word c,C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3952,2,t0,t1);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=(C_truep(t2)?lf[200]:lf[201]);
t4=t3;
t5=C_slot(((C_word*)t0)[2],C_fix(7));
t6=t5;
t7=C_slot(((C_word*)t0)[2],C_fix(3));
t8=t7;
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3971,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t6,a[6]=t8,tmp=(C_word)a,a+=7,tmp);
/* csi.scm:667: ##sys#peek-unsigned-integer */
((C_proc4)C_fast_retrieve_symbol_proc(lf[199]))(4,*((C_word*)lf[199]+1),t9,((C_word*)t0)[2],C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3980,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:668: ##sys#locative? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[236]))(3,*((C_word*)lf[236]+1),t2,((C_word*)t0)[2]);}}

/* k5769 in doloop1225 in k5746 in k5739 in evalstring in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in ... */
static void C_ccall f_5771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1026: rec */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],t1);}

/* a5772 in doloop1225 in k5746 in k5739 in evalstring in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in ... */
static void C_ccall f_5773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5773,2,t0,t1);}
/* csi.scm:1026: eval */
t2=C_fast_retrieve(lf[50]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* k6690 in k6677 in a6668 in k6661 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_6692(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6692,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6732,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:914: rename999 */
t4=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[374]);}

/* k2038 in k2032 in k2029 in addext in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2040(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?((C_word*)t0)[3]:C_SCHEME_FALSE));}

/* loop in k2089 in k2077 in lookup-script-file in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_2053(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2053,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2066,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_subchar(((C_word*)t0)[4],t2);
/* csi.scm:199: proc */
t5=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}}

/* k5973 in doloop1356 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in ... */
static void C_ccall f_5975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_u_i_cdr(t2));
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5863(t5,((C_word*)t0)[4],t4);}

/* k2248 in doloop120 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2250,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2253,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:238: ##sys#print */
t3=*((C_word*)lf[93]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[2],C_SCHEME_FALSE,((C_word*)t0)[5]);}

/* k2251 in k2248 in doloop120 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2253,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2256,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:238: ##sys#print */
t3=*((C_word*)lf[93]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[95],C_SCHEME_FALSE,((C_word*)t0)[5]);}

/* k5996 in doloop1356 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in ... */
static void C_ccall f_5998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_u_i_cdr(t2));
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5863(t5,((C_word*)t0)[4],t4);}

/* k2254 in k2251 in k2248 in doloop120 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2256,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2259,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2271,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:243: ##sys#with-print-length-limit */
((C_proc4)C_fast_retrieve_symbol_proc(lf[94]))(4,*((C_word*)lf[94]+1),t2,C_fix(80),t3);}

/* k2257 in k2254 in k2251 in k2248 in doloop120 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2259(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2259,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2262,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:247: newline */
t3=*((C_word*)lf[15]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k4890 in k4887 in k4884 in k4881 in k4878 in k4875 in k4872 in doloop785 in k4832 in show-frameinfo in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in ... */
static void C_ccall f_4892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4892,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4895,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)t0)[11])){
t3=*((C_word*)lf[92]+1);
t4=*((C_word*)lf[92]+1);
t5=C_i_check_port_2(*((C_word*)lf[92]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[85]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5035,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[11],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:827: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[96]))(4,*((C_word*)lf[96]+1),t6,C_make_character(91),*((C_word*)lf[92]+1));}
else{
t3=t2;
f_4895(2,t3,C_SCHEME_UNDEFINED);}}

/* k4893 in k4890 in k4887 in k4884 in k4881 in k4878 in k4875 in k4872 in doloop785 in k4832 in show-frameinfo in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in ... */
static void C_ccall f_4895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4895,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4898,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[10])){
/* csi.scm:828: prin1 */
f_4811(t2,((C_word*)t0)[10]);}
else{
t3=t2;
f_4898(2,t3,C_SCHEME_UNDEFINED);}}

/* k2260 in k2257 in k2254 in k2251 in k2248 in doloop120 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2237(t3,((C_word*)t0)[4],t2);}

/* k3193 in k3141 in k3138 in k3121 in k3118 in k3115 in a3112 in k3109 in report in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 in ... */
static void C_ccall f_3195(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3195,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3198,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3223,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:512: machine-type */
t4=C_fast_retrieve(lf[140]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k3196 in k3193 in k3141 in k3138 in k3121 in k3118 in k3115 in a3112 in k3109 in report in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in ... */
static void C_ccall f_3198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3198,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3201,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:530: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[96]))(4,*((C_word*)lf[96]+1),t2,C_make_character(10),*((C_word*)lf[92]+1));}

/* k6677 in a6668 in k6661 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_6679(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_6679,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=C_i_cdr(((C_word*)t0)[2]);
t5=C_i_car(t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6692,a[2]=t3,a[3]=t6,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:914: rename999 */
t8=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t8))(3,t8,t7,lf[375]);}
else{
/* csi.scm:914: ##sys#syntax-rules-mismatch */
((C_proc3)C_fast_retrieve_symbol_proc(lf[376]))(3,*((C_word*)lf[376]+1),((C_word*)t0)[3],((C_word*)t0)[5]);}}

/* k4878 in k4875 in k4872 in doloop785 in k4832 in show-frameinfo in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_4880(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4880,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4883,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5052,a[2]=t2,a[3]=((C_word*)t0)[12],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[7])){
t4=C_slot(((C_word*)t0)[9],C_fix(2));
t5=t3;
f_5052(t5,C_i_pairp(t4));}
else{
t4=t3;
f_5052(t4,C_SCHEME_FALSE);}}

/* k4881 in k4878 in k4875 in k4872 in doloop785 in k4832 in show-frameinfo in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_4883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4883,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4886,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* csi.scm:813: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[96]))(4,*((C_word*)lf[96]+1),t2,C_make_character(9),((C_word*)t0)[12]);}

/* k5480 in k5466 in loop in canonicalize-args in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
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
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5482,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5590,tmp=(C_word)a,a+=2,tmp);
t3=f_5590(t1);
if(C_truep(t3)){
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_i_check_list_2(t1,lf[230]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5503,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5511,a[2]=t7,a[3]=t11,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_5511(t13,t9,t1);}
else{
/* csi.scm:957: ##sys#error */
t4=*((C_word*)lf[42]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],lf[267],((C_word*)t0)[5]);}}

/* k4896 in k4893 in k4890 in k4887 in k4884 in k4881 in k4878 in k4875 in k4872 in doloop785 in k4832 in show-frameinfo in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in ... */
static void C_ccall f_4898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4898,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4901,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* csi.scm:829: newline */
t3=*((C_word*)lf[15]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* doloop120 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_2237(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2237,NULL,3,t0,t1,t2);}
if(C_truep(C_i_greater_or_equalp(t2,C_retrieve2(lf[18],"history-count")))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=*((C_word*)lf[92]+1);
t4=*((C_word*)lf[92]+1);
t5=C_i_check_port_2(*((C_word*)lf[92]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[85]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2250,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:238: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[96]))(4,*((C_word*)lf[96]+1),t6,C_make_character(35),*((C_word*)lf[92]+1));}}

/* k3159 in k3146 in g423 in k3141 in k3138 in k3121 in k3118 in k3115 in a3112 in k3109 in report in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in ... */
static void C_fcall f_3161(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3161,NULL,2,t0,t1);}
if(C_truep(C_i_greater_or_equalp(((C_word*)((C_word*)t0)[2])[1],C_fix(3)))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3170,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:492: display */
t3=*((C_word*)lf[100]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[121]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3178,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:495: make-string */
t3=*((C_word*)lf[122]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)((C_word*)t0)[4])[1],C_make_character(32));}}

/* k4872 in doloop785 in k4832 in show-frameinfo in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_4874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4874,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4877,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* csi.scm:813: ##sys#print */
t3=*((C_word*)lf[93]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[3],C_SCHEME_FALSE,((C_word*)t0)[12]);}

/* k4884 in k4881 in k4878 in k4875 in k4872 in doloop785 in k4832 in show-frameinfo in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 in ... */
static void C_ccall f_4886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4886,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4889,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
t3=C_slot(((C_word*)t0)[13],C_fix(0));
/* csi.scm:813: ##sys#print */
t4=*((C_word*)lf[93]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,C_SCHEME_FALSE,((C_word*)t0)[12]);}

/* k4887 in k4884 in k4881 in k4878 in k4875 in k4872 in doloop785 in k4832 in show-frameinfo in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in ... */
static void C_ccall f_4889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4889,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4892,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* csi.scm:813: ##sys#print */
t3=*((C_word*)lf[93]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[255],C_SCHEME_FALSE,((C_word*)t0)[12]);}

/* a5982 in doloop1356 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in ... */
static void C_ccall f_5983(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_5983r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5983r(t0,t1,t2);}}

static void C_ccall f_5983r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_apply(5,0,t1,*((C_word*)lf[77]+1),*((C_word*)lf[10]+1),t2);}

/* k3168 in k3159 in k3146 in g423 in k3141 in k3138 in k3121 in k3118 in k3115 in a3112 in k3109 in report in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in ... */
static void C_ccall f_3170(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3176 in k3159 in k3146 in g423 in k3141 in k3138 in k3121 in k3118 in k3115 in a3112 in k3109 in report in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in ... */
static void C_ccall f_3178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:495: display */
t2=*((C_word*)lf[100]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* g423 in k3141 in k3138 in k3121 in k3118 in k3115 in a3112 in k3109 in report in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 in ... */
static void C_fcall f_3144(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3144,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3148,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:484: printf */
t4=*((C_word*)lf[85]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[123],t2);}

/* k3141 in k3138 in k3121 in k3118 in k3115 in a3112 in k3109 in report in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3143(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3143,2,t0,t1);}
t2=C_fix(0);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3144,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_check_list_2(t1,lf[77]);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3195,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3310,a[2]=t8,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_3310(t10,t6,t1);}

/* k3138 in k3121 in k3118 in k3115 in a3112 in k3109 in report in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3140(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3140,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3143,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_fast_retrieve(lf[141]);
t8=C_fast_retrieve(lf[4]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3335,a[2]=((C_word*)t0)[8],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3337,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_3337(t13,t9,C_fast_retrieve(lf[4]));}

/* k3146 in g423 in k3141 in k3138 in k3121 in k3118 in k3115 in a3112 in k3109 in report in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in ... */
static void C_ccall f_3148(C_word c,C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3148,2,t0,t1);}
t2=C_i_string_length(((C_word*)t0)[2]);
t3=C_a_i_minus(&a,2,C_fix(16),t2);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t7=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t6);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3161,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_less_or_equalp(((C_word*)t5)[1],C_fix(0)))){
t9=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t10=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t9);
t11=C_a_i_plus(&a,2,((C_word*)t5)[1],C_fix(18));
t12=C_set_block_item(t5,0,t11);
t13=t8;
f_3161(t13,t12);}
else{
t9=t8;
f_3161(t9,C_SCHEME_UNDEFINED);}}

/* k3118 in k3115 in a3112 in k3109 in report in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3120,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3123,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:477: memory-statistics */
t4=C_fast_retrieve(lf[144]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k3121 in k3118 in k3115 in a3112 in k3109 in report in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3123,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3125,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3140,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t3,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* csi.scm:479: printf */
t5=*((C_word*)lf[85]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[143]);}

/* shorten in k3121 in k3118 in k3115 in a3112 in k3109 in report in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_3125(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3125,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3133,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_times(&a,2,t2,C_fix(100));
/* csi.scm:478: truncate */
t5=*((C_word*)lf[120]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a3541 in loop2 in k3489 in loop1 in k3461 in k3583 in descseq in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 in ... */
static void C_ccall f_3542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3542,2,t0,t1);}
/* csi.scm:589: fprintf */
t2=*((C_word*)lf[153]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,t1,((C_word*)t0)[2],lf[158],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k5746 in k5739 in evalstring in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in ... */
static void C_ccall f_5748(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5748,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5750,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_5750(t5,((C_word*)t0)[4],t1);}

/* k3131 in shorten in k3121 in k3118 in k3115 in a3112 in k3109 in report in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3133,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_divide(&a,2,t1,C_fix(100)));}

/* k2747 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2749(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[41]+1));}

/* k5739 in evalstring in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in ... */
static void C_ccall f_5741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5741,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5748,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:1024: read */
t4=*((C_word*)lf[60]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k2738 in k2731 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:357: string-append */
t2=*((C_word*)lf[30]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[88],t1);}

/* k4949 in k4946 in k4943 in doloop833 in k4925 in g820 in k4899 in k4896 in k4893 in k4890 in k4887 in k4884 in k4881 in k4878 in k4875 in k4872 in doloop785 in k4832 in show-frameinfo in k3446 in k3100 in k3097 in ... */
static void C_ccall f_4951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4951,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4954,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_slot(((C_word*)t0)[6],((C_word*)t0)[2]);
/* csi.scm:839: prin1 */
f_4811(t2,t3);}

/* report in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_3103(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3103,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3111,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=t3;
f_3111(t5,C_u_i_car(t4));}
else{
t4=t3;
f_3111(t4,*((C_word*)lf[92]+1));}}

/* k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3102,2,t0,t1);}
t2=t1;
t3=C_mutate2(&lf[68] /* (set! report ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3103,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t4=C_mutate2(&lf[147] /* (set! bytevector-data ...) */,lf[148]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3448,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:565: make-vector */
t6=*((C_word*)lf[379]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_fix(37),C_SCHEME_END_OF_LIST);}

/* k4955 in k4952 in k4949 in k4946 in k4943 in doloop833 in k4925 in g820 in k4899 in k4896 in k4893 in k4890 in k4887 in k4884 in k4881 in k4878 in k4875 in k4872 in doloop785 in k4832 in show-frameinfo in k3446 in ... */
static void C_ccall f_4957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=((C_word*)((C_word*)t0)[4])[1];
f_4932(t5,((C_word*)t0)[5],t2,t4);}

/* doloop1225 in k5746 in k5739 in evalstring in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in ... */
static void C_fcall f_5750(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5750,NULL,3,t0,t1,t2);}
if(C_truep(C_eofp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5760,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5771,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5773,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1026: ##sys#call-with-values */
C_call_with_values(4,0,t4,t5,*((C_word*)lf[272]+1));}}

/* k4952 in k4949 in k4946 in k4943 in doloop833 in k4925 in g820 in k4899 in k4896 in k4893 in k4890 in k4887 in k4884 in k4881 in k4878 in k4875 in k4872 in doloop785 in k4832 in show-frameinfo in k3446 in k3100 in ... */
static void C_ccall f_4954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4954,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4957,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:840: newline */
t3=*((C_word*)lf[15]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2709 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
/* csi.scm:361: printf */
t3=*((C_word*)lf[85]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],lf[86],t1);}}

/* k5765 in k5758 in doloop1225 in k5746 in k5739 in evalstring in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in ... */
static void C_ccall f_5767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[2])[1];
f_5750(t2,((C_word*)t0)[3],t1);}

/* k3109 in report in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_3111(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3111,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3113,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:473: with-output-to-port */
t3=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[6],t1,t2);}

/* k2727 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2729(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:356: system */
t2=C_fast_retrieve(lf[87]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* a3112 in k3109 in report in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3113,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3117,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:475: gc */
t3=C_fast_retrieve(lf[146]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k5758 in doloop1225 in k5746 in k5739 in evalstring in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in ... */
static void C_ccall f_5760(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5760,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5767,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1024: read */
t3=*((C_word*)lf[60]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k4925 in g820 in k4899 in k4896 in k4893 in k4890 in k4887 in k4884 in k4881 in k4878 in k4875 in k4872 in doloop785 in k4832 in show-frameinfo in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in ... */
static void C_ccall f_4927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4927,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4932,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4932(t5,((C_word*)t0)[4],C_fix(0),((C_word*)t0)[5]);}

/* k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3723(C_word c,C_word t0,C_word t1){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3723,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3730,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:621: ##sys#symbol->string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[177]))(3,*((C_word*)lf[177]+1),t2,((C_word*)t0)[4]);}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3739,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3823,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:623: ##sys#symbol-has-toplevel-binding? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[190]))(3,*((C_word*)lf[190]+1),t3,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[4];
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3383,tmp=(C_word)a,a+=2,tmp);
t4=f_3383(t2,t2);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3835,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t6=t5;
f_3835(t6,t4);}
else{
t6=((C_word*)t0)[4];
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3418,tmp=(C_word)a,a+=2,tmp);
t8=t5;
f_3835(t8,f_3418(t6));}}}}

/* k3115 in a3112 in k3109 in report in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3117,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3120,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:476: ##sys#symbol-table-info */
((C_proc2)C_fast_retrieve_symbol_proc(lf[145]))(2,*((C_word*)lf[145]+1),t2);}

/* k5898 in doloop1356 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in ... */
static void C_ccall f_5900(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_5863(t3,((C_word*)t0)[4],t2);}

/* loop2 in k3489 in loop1 in k3461 in k3583 in descseq in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_3500(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3500,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[2]))){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3510,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3542,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:586: ##sys#with-print-length-limit */
((C_proc4)C_fast_retrieve_symbol_proc(lf[94]))(4,*((C_word*)lf[94]+1),t4,C_fix(1000),t5);}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3570,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[7],a[6]=t1,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:596: pref */
t5=((C_word*)t0)[8];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t4,((C_word*)t0)[9],t3);}}

/* k2803 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2805(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2805,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_fast_retrieve(lf[102]);
t4=(C_truep(C_fast_retrieve(lf[102]))?C_fast_retrieve(lf[102]):C_SCHEME_END_OF_LIST);
t5=t4;
t6=C_i_length(t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5150,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_symbolp(t1))){
t8=t7;
f_5150(t8,C_slot(t1,C_fix(1)));}
else{
if(C_truep(C_i_stringp(t1))){
t8=t7;
f_5150(t8,t1);}
else{
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5377,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:870: display */
t9=*((C_word*)lf[100]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,lf[109]);}}}

/* k4506 in k4482 in body686 in dump in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_4508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:747: hexdump */
f_4605(((C_word*)t0)[2],((C_word*)t0)[3],t1,*((C_word*)lf[216]+1),((C_word*)t0)[4]);}

/* k5701 in k6139 in k5850 in k5847 in k5844 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in ... */
static void C_ccall f_5703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5703,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(C_i_string_equal_p(t1,lf[305]))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5715,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5728,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1019: chop-separator */
t4=C_retrieve2(lf[23],"chop-separator");
f_1974(3,t4,t3,t1);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4946 in k4943 in doloop833 in k4925 in g820 in k4899 in k4896 in k4893 in k4890 in k4887 in k4884 in k4881 in k4878 in k4875 in k4872 in doloop785 in k4832 in show-frameinfo in k3446 in k3100 in k3097 in k2954 in ... */
static void C_ccall f_4948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4948,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4951,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:835: ##sys#print */
t3=*((C_word*)lf[93]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[251],C_SCHEME_FALSE,((C_word*)t0)[8]);}

/* k4943 in doloop833 in k4925 in g820 in k4899 in k4896 in k4893 in k4890 in k4887 in k4884 in k4881 in k4878 in k4875 in k4872 in doloop785 in k4832 in show-frameinfo in k3446 in k3100 in k3097 in k2954 in k2304 in ... */
static void C_ccall f_4945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4945,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4948,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* csi.scm:835: ##sys#print */
t4=*((C_word*)lf[93]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,C_SCHEME_TRUE,((C_word*)t0)[8]);}

/* k3511 in k3508 in loop2 in k3489 in loop1 in k3461 in k3583 in descseq in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in ... */
static void C_ccall f_3513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],((C_word*)t0)[3]);
/* csi.scm:595: loop1 */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3468(t3,((C_word*)t0)[5],t2);}

/* k3508 in loop2 in k3489 in loop1 in k3461 in k3583 in descseq in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 in ... */
static void C_ccall f_3510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3510,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3513,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[3],C_fix(1)))){
t3=C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
t4=C_eqp(((C_word*)t0)[3],C_fix(2));
if(C_truep(t4)){
/* csi.scm:591: fprintf */
t5=*((C_word*)lf[153]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t2,((C_word*)t0)[6],lf[155],t3,lf[156]);}
else{
/* csi.scm:591: fprintf */
t5=*((C_word*)lf[153]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t2,((C_word*)t0)[6],lf[155],t3,lf[157]);}}
else{
/* csi.scm:594: newline */
t3=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}}

/* k4875 in k4872 in doloop785 in k4832 in show-frameinfo in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_4877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4877,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4880,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* csi.scm:813: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[96]))(4,*((C_word*)lf[96]+1),t2,C_make_character(58),((C_word*)t0)[12]);}

/* k5956 in doloop1356 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in ... */
static void C_ccall f_5958(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_u_i_cdr(t2));
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5863(t5,((C_word*)t0)[4],t4);}

/* history-add in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_2182(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_save_and_reclaim((void*)trf_2182,NULL,3,t0,t1,t2);}
t3=C_i_nullp(t2);
t4=(C_truep(t3)?*((C_word*)lf[41]+1):C_slot(t2,C_fix(0)));
t5=t4;
t6=C_block_size(C_retrieve2(lf[38],"history-list"));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2192,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(C_retrieve2(lf[18],"history-count"),t6))){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2206,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=C_fixnum_times(C_fix(2),t6);
/* csi.scm:229: vector-resize */
t10=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t8,C_retrieve2(lf[38],"history-list"),t9);}
else{
t8=t7;
f_2192(t8,C_SCHEME_UNDEFINED);}}

/* k5713 in k5701 in k6139 in k5850 in k5847 in k5844 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in ... */
static void C_ccall f_5715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5715,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5721,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1020: file-exists? */
t4=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k5927 in doloop1356 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in ... */
static void C_ccall f_5929(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_u_i_cdr(t2));
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5863(t5,((C_word*)t0)[4],t4);}

/* k4525 in k4482 in body686 in dump in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_4527(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4527,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4537,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_block_size(t3);
/* csi.scm:752: bestlen */
t6=((C_word*)t0)[5];
f_4462(t6,t4,t5);}
else{
/* csi.scm:753: ##sys#error */
t2=*((C_word*)lf[42]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[244],lf[247],((C_word*)t0)[2]);}}

/* k3755 in k3743 in k3740 in k3737 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3757(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3757,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3762,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_3762(t5,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k2190 in history-add in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_2192(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_i_vector_set(C_retrieve2(lf[38],"history-list"),C_retrieve2(lf[18],"history-count"),((C_word*)t0)[2]);
t3=C_fixnum_plus(C_retrieve2(lf[18],"history-count"),C_fix(1));
t4=C_mutate2(&lf[18] /* (set! history-count ...) */,t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,((C_word*)t0)[2]);}

/* k5726 in k5701 in k6139 in k5850 in k5847 in k5844 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in ... */
static void C_ccall f_5728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1019: string-append */
t2=*((C_word*)lf[30]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,lf[306],lf[0]);}

/* k5719 in k5713 in k5701 in k6139 in k5850 in k5847 in k5844 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in ... */
static void C_ccall f_5721(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* csi.scm:1021: load */
t2=C_fast_retrieve(lf[72]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* doloop538 in k3755 in k3743 in k3740 in k3737 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 in ... */
static void C_fcall f_3762(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3762,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3772,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=C_i_car(t2);
/* csi.scm:637: fprintf */
t5=*((C_word*)lf[153]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,((C_word*)t0)[3],lf[179],t4);}}

/* k4535 in k4525 in k4482 in body686 in dump in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_4537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:752: hexdump */
f_4605(((C_word*)t0)[2],((C_word*)t0)[3],t1,*((C_word*)lf[216]+1),((C_word*)t0)[4]);}

/* k4489 in k4482 in body686 in dump in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_4491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:746: hexdump */
f_4605(((C_word*)t0)[2],((C_word*)t0)[3],t1,*((C_word*)lf[216]+1),((C_word*)t0)[4]);}

/* doloop833 in k4925 in g820 in k4899 in k4896 in k4893 in k4890 in k4887 in k4884 in k4881 in k4878 in k4875 in k4872 in doloop785 in k4832 in show-frameinfo in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in ... */
static void C_fcall f_4932(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4932,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=*((C_word*)lf[92]+1);
t5=*((C_word*)lf[92]+1);
t6=C_i_check_port_2(*((C_word*)lf[92]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[85]);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4945,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=t4,tmp=(C_word)a,a+=9,tmp);
/* csi.scm:835: ##sys#print */
t8=*((C_word*)lf[93]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t7,lf[252],C_SCHEME_FALSE,*((C_word*)lf[92]+1));}}

/* evalstring in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in ... */
static void C_fcall f_5734(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5734,NULL,3,t1,t2,t3);}
t4=C_i_nullp(t3);
t5=(C_truep(t4)?(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5781,tmp=(C_word)a,a+=2,tmp):C_i_car(t3));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5741,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1023: open-input-string */
t8=C_fast_retrieve(lf[273]);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}

/* k5941 in doloop1356 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in ... */
static void C_ccall f_5943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5943,2,t0,t1);}
t2=C_a_i_list(&a,1,t1);
t3=C_a_i_list(&a,3,lf[287],t2,C_SCHEME_TRUE);
/* csi.scm:1095: eval */
t4=C_fast_retrieve(lf[50]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],t3);}

/* k3728 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3730(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:620: fprintf */
t2=*((C_word*)lf[153]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[176],t1);}

/* k2731 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2733(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2733,2,t0,t1);}
t2=(C_truep(t1)?t1:C_retrieve2(lf[8],"default-editor"));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2740,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:359: read-line */
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k3737 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3739,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3742,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:625: ##sys#qualified-symbol? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[188]))(3,*((C_word*)lf[188]+1),t2,((C_word*)t0)[2]);}

/* k2938 in a2935 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2940(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k4482 in body686 in dump in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_4484(C_word c,C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4484,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4491,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_block_size(((C_word*)t0)[3]);
/* csi.scm:746: bestlen */
t4=((C_word*)t0)[5];
f_4462(t4,t2,t3);}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4508,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_block_size(((C_word*)t0)[3]);
/* csi.scm:747: bestlen */
t4=((C_word*)t0)[5];
f_4462(t4,t2,t3);}
else{
t2=C_immp(((C_word*)t0)[3]);
t3=(C_truep(t2)?C_SCHEME_FALSE:C_anypointerp(((C_word*)t0)[3]));
if(C_truep(t3)){
/* csi.scm:749: hexdump */
f_4605(((C_word*)t0)[2],((C_word*)t0)[3],C_fix(32),*((C_word*)lf[246]+1),((C_word*)t0)[4]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4527,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_structurep(((C_word*)t0)[3]))){
t5=C_slot(((C_word*)t0)[3],C_fix(0));
t6=t4;
f_4527(t6,C_i_assq(t5,C_retrieve2(lf[147],"bytevector-data")));}
else{
t5=t4;
f_4527(t5,C_SCHEME_FALSE);}}}}}

/* k3740 in k3737 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3742,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3745,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3820,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:627: ##sys#interned-symbol? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[187]))(3,*((C_word*)lf[187]+1),t4,((C_word*)t0)[2]);}

/* k3743 in k3740 in k3737 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3745(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3745,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=t2;
if(C_truep(C_i_nullp(t3))){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[41]+1));}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3757,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:634: display */
t5=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,lf[180],((C_word*)t0)[4]);}}

/* doloop931 in g918 in doloop903 in a5182 in k5148 in k2803 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_5245(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5245,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5255,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5267,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=t3,a[7]=((C_word*)t0)[2],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t6=C_i_car(t3);
/* csi.scm:897: compare */
t7=((C_word*)t0)[5];
f_5152(t7,t5,t6);}}

/* k6175 in k6172 in k5844 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in ... */
static void C_ccall f_6177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1072: symbol-escape */
t2=C_fast_retrieve(lf[309]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k6172 in k5844 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in ... */
static void C_ccall f_6174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6174,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6177,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
/* csi.scm:1072: symbol-escape */
t3=C_fast_retrieve(lf[309]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],C_SCHEME_FALSE);}
else{
/* csi.scm:1071: display */
t3=*((C_word*)lf[100]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[315]);}}
else{
t2=((C_word*)t0)[2];
f_5849(2,t2,C_SCHEME_UNDEFINED);}}

/* k1839 */
static void C_ccall f_1841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1841,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1844,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k5253 in doloop931 in g918 in doloop903 in a5182 in k5148 in k2803 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_5255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=((C_word*)((C_word*)t0)[4])[1];
f_5245(t5,((C_word*)t0)[5],t2,t4);}

/* k1845 in k1842 in k1839 */
static void C_ccall f_1847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1847,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1850,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1842 in k1839 */
static void C_ccall f_1844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1844,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1847,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_chicken_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* def-out689 in dump in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_4565(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4565,NULL,3,t0,t1,t2);}
/* csi.scm:740: body686 */
t3=((C_word*)t0)[2];
f_4459(t3,t1,t2,*((C_word*)lf[92]+1));}

/* f7530 in k6413 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in ... */
static void C_ccall f7530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1047: case-sensitive */
t2=C_fast_retrieve(lf[312]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k6163 in k6160 in k6157 in k6154 in k6151 in k5847 in k5844 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in ... */
static void C_ccall f_6165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1078: symbol-escape */
t2=C_fast_retrieve(lf[309]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k6160 in k6157 in k6154 in k6151 in k5847 in k5844 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in ... */
static void C_ccall f_6162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6162,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6165,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1077: parentheses-synonyms */
t3=C_fast_retrieve(lf[310]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_SCHEME_FALSE);}

/* a2935 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2936(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_2936r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2936r(t0,t1,t2);}}

static void C_ccall f_2936r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2940,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:417: history-add */
t4=C_retrieve2(lf[40],"history-add");
f_2182(t4,t3,t2);}

/* a2929 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2930(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2930,2,t0,t1);}
/* csi.scm:416: eval */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[3]);}

/* g324 in k6804 in k6780 in k6777 in a6774 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_6810(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6810,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6814,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:437: ##sys#switch-module */
((C_proc3)C_fast_retrieve_symbol_proc(lf[383]))(3,*((C_word*)lf[383]+1),t3,t2);}

/* k6157 in k6154 in k6151 in k5847 in k5844 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in ... */
static void C_ccall f_6159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6159,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6162,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1076: keyword-style */
t3=C_fast_retrieve(lf[135]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[311]);}

/* k6154 in k6151 in k5847 in k5844 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in ... */
static void C_ccall f_6156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6156,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6159,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1075: case-sensitive */
t3=C_fast_retrieve(lf[312]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_SCHEME_FALSE);}

/* k6151 in k5847 in k5844 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in ... */
static void C_ccall f_6153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6153,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6156,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=t2;
f_6156(2,t3,C_SCHEME_UNDEFINED);}
else{
/* csi.scm:1074: display */
t3=*((C_word*)lf[100]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[313]);}}
else{
t2=((C_word*)t0)[2];
f_5852(2,t2,C_SCHEME_UNDEFINED);}}

/* map-loop1166 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in ... */
static void C_fcall f_6480(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6480,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6509,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:1004: g1172 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6812 in g324 in k6804 in k6780 in k6777 in a6774 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_6814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:438: printf */
t2=*((C_word*)lf[85]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[382],((C_word*)((C_word*)t0)[3])[1]);}

/* k3364 in map-loop396 in k3138 in k3121 in k3118 in k3115 in a3112 in k3109 in report in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 in ... */
static void C_ccall f_3366(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3366,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3337(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3337(t6,((C_word*)t0)[5],t5);}}

/* for-each-loop603 in k4220 in k4092 in k3978 in k3950 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in ... */
static void C_fcall f_4291(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4291,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4301,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:707: g604 */
t5=((C_word*)t0)[3];
f_4223(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* for-each-loop581 in doloop576 in k4126 in k4123 in k4092 in k3978 in k3950 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in ... */
static void C_fcall f_4177(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4177,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4187,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:696: g582 */
t5=((C_word*)t0)[3];
f_4147(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* g582 in doloop576 in k4126 in k4123 in k4092 in k3978 in k3950 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in ... */
static void C_fcall f_4147(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4147,NULL,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(0));
t4=C_slot(t2,C_fix(1));
/* csi.scm:702: fprintf */
t5=*((C_word*)lf[153]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t1,((C_word*)t0)[2],lf[221],t3,t4);}

/* for-each-loop1273 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in ... */
static void C_fcall f_6345(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6345,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6355,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:1050: g1274 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5188 in fail in a5182 in k5148 in k2803 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_5190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5190,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5193,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:882: newline */
t3=*((C_word*)lf[15]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k5191 in k5188 in fail in a5182 in k5148 in k2803 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_5193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=*((C_word*)lf[41]+1);
/* csi.scm:883: return */
t3=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,((C_word*)t0)[3],*((C_word*)lf[41]+1));}

/* k6102 in doloop1413 in k6078 in k6075 in k6069 */
static void C_ccall f_6104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6104,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6107,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_char_equalp(C_make_character(10),((C_word*)t0)[5]))){
/* csi.scm:1121: display */
t3=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[300],*((C_word*)lf[299]+1));}
else{
t3=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_6091(t4,((C_word*)t0)[4],t3);}}

/* k6105 in k6102 in doloop1413 in k6078 in k6075 in k6069 */
static void C_ccall f_6107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6091(t3,((C_word*)t0)[4],t2);}

/* k6376 in for-each-loop1256 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in ... */
static void C_ccall f_6378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6368(t3,((C_word*)t0)[4],t2);}

/* k5161 in compare in k5148 in k2803 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_5163(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_string_equal_p(((C_word*)t0)[3],t1));}

/* k6075 in k6069 */
static void C_ccall f_6077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6077,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6080,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:1115: display */
t3=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[301],*((C_word*)lf[299]+1));}

/* k6069 */
static void C_ccall f_6071(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6071,2,t0,t1);}
t2=t1;
t3=C_i_string_length(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6077,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:1114: flush-output */
t6=*((C_word*)lf[302]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,*((C_word*)lf[92]+1));}

/* lp in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static C_word C_fcall f_3383(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_stack_overflow_check;
loop:
if(C_truep(C_i_pairp(t1))){
t3=t1;
t4=C_u_i_cdr(t3);
if(C_truep(C_i_pairp(t4))){
t5=C_u_i_cdr(t4);
t6=C_i_cdr(t2);
t7=C_eqp(t5,t6);
if(C_truep(t7)){
return(t7);}
else{
t9=t5;
t10=t6;
t1=t9;
t2=t10;
goto loop;}}
else{
return(C_SCHEME_FALSE);}}
else{
return(C_SCHEME_FALSE);}}

/* k6353 in for-each-loop1273 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in ... */
static void C_ccall f_6355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6345(t3,((C_word*)t0)[4],t2);}

/* f_6067 in doloop1356 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in ... */
static void C_ccall f_6067(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6067,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6071,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6122,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1112: with-output-to-string */
t5=C_fast_retrieve(lf[303]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k2790 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2792(C_word c,C_word t0,C_word t1){
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
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2792,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t1;
t4=C_i_numberp(t3);
t5=C_i_not(t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5093,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t5)){
t7=t6;
f_5093(t7,t5);}
else{
t7=C_i_not(C_fast_retrieve(lf[102]));
if(C_truep(t7)){
t8=t6;
f_5093(t8,t7);}
else{
t8=C_fixnum_lessp(t3,C_fix(0));
if(C_truep(t8)){
t9=t6;
f_5093(t9,t8);}
else{
t9=C_i_length(C_fast_retrieve(lf[102]));
t10=t6;
f_5093(t10,C_fixnum_greater_or_equal_p(t3,t9));}}}}

/* a5182 in k5148 in k2803 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_5183(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5183,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5186,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5205,a[2]=t3,a[3]=t5,a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_5205(t7,t1,((C_word*)t0)[4]);}

/* for-each-loop422 in k3141 in k3138 in k3121 in k3118 in k3115 in a3112 in k3109 in report in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 in ... */
static void C_fcall f_3310(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3310,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3320,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:480: g423 */
t5=((C_word*)t0)[3];
f_3144(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* fail in a5182 in k5148 in k2803 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_5186(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5186,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5190,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:881: display */
t4=*((C_word*)lf[100]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* g918 in doloop903 in a5182 in k5148 in k2803 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_5239(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5239,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5245,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_5245(t7,t1,C_fix(0),t2);}

/* k5228 in doloop903 in a5182 in k5148 in k2803 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_5230(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)((C_word*)t0)[3])[1];
f_5205(t4,((C_word*)t0)[4],t3);}

/* k6139 in k5850 in k5847 in k5844 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in ... */
static void C_ccall f_6141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6141,2,t0,t1);}
t2=(C_truep(t1)?t1:(C_truep(((C_word*)t0)[2])?((C_word*)t0)[2]:((C_word*)t0)[3]));
if(C_truep(t2)){
t3=((C_word*)t0)[4];
f_5855(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=((C_word*)t0)[4];
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5703,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1017: get-environment-variable */
t5=C_fast_retrieve(lf[36]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[307]);}}

/* doloop903 in a5182 in k5148 in k2803 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_5205(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(20);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5205,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
/* csi.scm:885: fail */
t3=((C_word*)t0)[2];
f_5186(t3,t1,lf[104]);}
else{
t3=C_i_car(t2);
t4=C_eqp(C_retrieve2(lf[7],"selected-frame"),t3);
t5=C_slot(t3,C_fix(2));
t6=C_i_structurep(t5,lf[105]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5230,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t8=(C_truep(t4)?t6:C_SCHEME_FALSE);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5239,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t10=C_slot(t5,C_fix(2));
t11=C_slot(t5,C_fix(3));
t12=C_i_check_list_2(t10,lf[77]);
t13=C_i_check_list_2(t11,lf[77]);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5315,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5324,a[2]=t16,a[3]=t9,tmp=(C_word)a,a+=4,tmp));
t18=((C_word*)t16)[1];
f_5324(t18,t14,t10,t11);}
else{
t9=t2;
t10=C_u_i_cdr(t9);
t21=t1;
t22=t10;
t1=t21;
t2=t22;
goto loop;}}}

/* k4092 in k3978 in k3950 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_4094(C_word c,C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4094,2,t0,t1);}
if(C_truep(t1)){
t2=C_block_size(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4100,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:686: fprintf */
t5=*((C_word*)lf[153]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[4],lf[217],t3);}
else{
if(C_truep(C_lambdainfop(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4113,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:689: ##sys#lambda-info->string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[219]))(3,*((C_word*)lf[219]+1),t2,((C_word*)t0)[2]);}
else{
if(C_truep(C_i_structurep(((C_word*)t0)[2],lf[220]))){
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4125,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(t2,C_fix(1));
t5=(C_truep(t4)?lf[223]:lf[224]);
t6=C_slot(((C_word*)t0)[2],C_fix(3));
/* csi.scm:692: fprintf */
t7=*((C_word*)lf[153]+1);
((C_proc7)(void*)(*((C_word*)t7+1)))(7,t7,t3,((C_word*)t0)[4],lf[225],t2,t5,t6);}
else{
if(C_truep(C_i_structurep(((C_word*)t0)[2],lf[226]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4222,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(1));
/* csi.scm:706: fprintf */
t4=*((C_word*)lf[153]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[4],lf[229],t3);}
else{
if(C_truep(C_structurep(((C_word*)t0)[2]))){
t2=C_slot(((C_word*)t0)[2],C_fix(0));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4328,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:722: ##sys#hash-table-ref */
((C_proc4)C_fast_retrieve_symbol_proc(lf[233]))(4,*((C_word*)lf[233]+1),t4,C_retrieve2(lf[149],"describer-table"),t3);}
else{
/* csi.scm:729: fprintf */
t2=*((C_word*)lf[153]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[4],lf[234]);}}}}}}

/* k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_5380(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5380,2,t0,t1);}
t2=C_establish_signal_handler(C_fix((C_word)SIGINT),C_fix((C_word)SIGINT));
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6655,tmp=(C_word)a,a+=2,tmp);
t4=C_i_setslot(C_fast_retrieve(lf[259]),C_fix((C_word)SIGINT),t3);
t5=C_mutate2(&lf[260] /* (set! member* ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5385,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate2(&lf[261] /* (set! canonicalize-args ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5440,tmp=(C_word)a,a+=2,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6647,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5620,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6641,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:977: get-environment-variable */
t11=C_fast_retrieve(lf[36]);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,lf[369]);}

/* k4123 in k4092 in k3978 in k3950 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 in ... */
static void C_ccall f_4125(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4125,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4128,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(4));
/* csi.scm:694: fprintf */
t4=*((C_word*)lf[153]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[3],lf[222],t3);}

/* member* in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_5385(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5385,NULL,3,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5391,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_5391(t7,t1,t3);}

/* k4126 in k4123 in k4092 in k3978 in k3950 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in ... */
static void C_ccall f_4128(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4128,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=t2;
t4=C_block_size(t3);
t5=t4;
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4139,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_4139(t9,((C_word*)t0)[4],C_fix(0));}

/* k2783 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[41]+1));}

/* a6121 */
static void C_ccall f_6122(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6122,2,t0,t1);}
t2=C_fast_retrieve(lf[54]);
/* csi.scm:1112: g1410 */
t3=C_fast_retrieve(lf[54]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,((C_word*)t0)[2]);}

/* loop in member* in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_5391(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5391,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5403,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_5403(t6,t1,((C_word*)t0)[3]);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k5265 in doloop931 in g918 in doloop903 in a5182 in k5148 in k2803 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_5267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5267,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5270,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:898: display */
t3=*((C_word*)lf[100]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[106]);}
else{
t2=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t3=((C_word*)t0)[6];
t4=C_u_i_cdr(t3);
t5=((C_word*)((C_word*)t0)[7])[1];
f_5245(t5,((C_word*)t0)[8],t2,t4);}}

/* k4086 in k3978 in k3950 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_4088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:683: fprintf */
t2=*((C_word*)lf[153]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[214],t1);}

/* for-each-loop1239 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in ... */
static void C_fcall f_6391(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6391,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6401,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:1048: g1240 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5277 in k5274 in k5271 in k5268 in k5265 in doloop931 in g918 in doloop903 in a5182 in k5148 in k2803 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in ... */
static void C_ccall f_5279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],((C_word*)t0)[3]);
/* csi.scm:902: return */
t3=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,((C_word*)t0)[5],t2);}

/* k5274 in k5271 in k5268 in k5265 in doloop931 in g918 in doloop903 in a5182 in k5148 in k2803 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 in ... */
static void C_ccall f_5276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5276,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5279,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_slot(((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_a_i_list1(&a,1,t3);
/* csi.scm:901: history-add */
t5=C_retrieve2(lf[40],"history-add");
f_2182(t5,t2,t4);}

/* k5271 in k5268 in k5265 in doloop931 in g918 in doloop903 in a5182 in k5148 in k2803 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_5273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5273,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5276,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:900: newline */
t3=*((C_word*)lf[15]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k5268 in k5265 in doloop931 in g918 in doloop903 in a5182 in k5148 in k2803 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_5270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5270,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5273,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[6];
t4=C_u_i_car(t3);
/* csi.scm:899: display */
t5=*((C_word*)lf[100]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t2,t4);}

/* k2759 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[41]+1));}

/* k3318 in for-each-loop422 in k3141 in k3138 in k3121 in k3118 in k3115 in a3112 in k3109 in report in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in ... */
static void C_ccall f_3320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3310(t3,((C_word*)t0)[4],t2);}

/* k4111 in k4092 in k3978 in k3950 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 in ... */
static void C_ccall f_4113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:689: fprintf */
t2=*((C_word*)lf[153]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[218],t1);}

/* k3333 in k3138 in k3121 in k3118 in k3115 in a3112 in k3109 in report in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:480: sort */
t2=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,*((C_word*)lf[142]+1));}

/* k4166 in doloop576 in k4126 in k4123 in k4092 in k3978 in k3950 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in ... */
static void C_ccall f_4168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4139(t3,((C_word*)t0)[4],t2);}

/* map-loop396 in k3138 in k3121 in k3118 in k3115 in a3112 in k3109 in report in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_3337(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3337,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3366,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:480: g402 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* doloop733 in k4649 in k4646 in doloop723 in hexdump in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_4723(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4723,NULL,4,t0,t1,t2,t3);}
t4=C_fixnum_greater_or_equal_p(t2,C_fix(16));
t5=(C_truep(t4)?t4:C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[2]));
if(C_truep(t5)){
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[2]))){
t6=C_fixnum_modulo(((C_word*)t0)[2],C_fix(16));
t7=C_eqp(t6,C_fix(0));
if(C_truep(t7)){
t8=C_SCHEME_UNDEFINED;
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t8=C_fixnum_difference(C_fix(16),t6);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4757,a[2]=t10,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_4757(t12,t1,t8);}}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}}
else{
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4777,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* write-char/port */
t7=C_fast_retrieve(lf[249]);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,C_make_character(32),((C_word*)t0)[3]);}}

/* k6524 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 in ... */
static void C_ccall f_6526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
f_5638(t3,t2);}
else{
t2=((C_word*)t0)[2];
f_5638(t2,((C_word*)t0)[3]);}}

/* k3303 in k3241 in k3237 in k3233 in k3229 in k3221 in k3193 in k3141 in k3138 in k3121 in k3118 in k3115 in a3112 in k3109 in report in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in ... */
static void C_ccall f_3305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:520: symbol->string */
t2=*((C_word*)lf[134]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* doloop576 in k4126 in k4123 in k4092 in k3978 in k3950 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in ... */
static void C_fcall f_4139(C_word t0,C_word t1,C_word t2){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4139,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4147,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=C_slot(((C_word*)t0)[4],t2);
t5=C_i_check_list_2(t4,lf[77]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4168,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4177,a[2]=t8,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_4177(t10,t6,t4);}}

/* k6869 in k6860 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_6871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_1874(t2,(C_truep(t1)?lf[399]:lf[400]));}

/* k6515 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in ... */
static void C_ccall f_6517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
/* csi.scm:1005: string-split */
t3=C_fast_retrieve(lf[33]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t2,lf[349]);}
else{
/* csi.scm:1005: string-split */
t2=C_fast_retrieve(lf[33]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[350],lf[349]);}}

/* k3776 in k3773 in k3770 in doloop538 in k3755 in k3743 in k3740 in k3737 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in ... */
static void C_ccall f_3778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cddr(((C_word*)t0)[2]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_3762(t3,((C_word*)t0)[4],t2);}

/* k3773 in k3770 in doloop538 in k3755 in k3743 in k3740 in k3737 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in ... */
static void C_ccall f_3775(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3775,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3778,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:642: newline */
t3=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k4098 in k4092 in k3978 in k3950 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 in ... */
static void C_ccall f_4100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:687: hexdump */
f_4605(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],*((C_word*)lf[216]+1),((C_word*)t0)[5]);}

/* k6302 in map-loop1316 in k6265 in k6261 in k6255 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in ... */
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
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6304,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6275(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6275(t6,((C_word*)t0)[5],t5);}}

/* k6014 in doloop1356 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in ... */
static void C_ccall f_6016(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6016,2,t0,t1);}
if(C_truep(C_i_equalp(lf[295],((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6027,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6037,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:1126: call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],t2,t3);}
else{
t2=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t3=((C_word*)((C_word*)t0)[5])[1];
f_5863(t3,((C_word*)t0)[6],t2);}}

/* k3770 in doloop538 in k3755 in k3743 in k3740 in k3737 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in ... */
static void C_ccall f_3772(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3772,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3775,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3787,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:638: ##sys#with-print-length-limit */
((C_proc4)C_fast_retrieve_symbol_proc(lf[94]))(4,*((C_word*)lf[94]+1),t2,C_fix(1000),t3);}

/* k6860 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_6862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6862,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
f_1874(t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6871,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:72: get-environment-variable */
t3=C_fast_retrieve(lf[36]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[401]);}}

/* compare in k5148 in k2803 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_5152(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5152,NULL,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(1));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5163,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=C_i_string_length(((C_word*)t0)[2]);
t6=C_i_string_length(t3);
t7=C_i_fixnum_min(t5,t6);
/* csi.scm:876: substring */
t8=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t4,t3,C_fix(0),t7);}

/* k6507 in map-loop1166 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in ... */
static void C_ccall f_6509(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6509,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6480(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6480(t6,((C_word*)t0)[5],t5);}}

/* k5148 in k2803 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_5150(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5150,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5152,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5183,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:878: call/cc */
t5=*((C_word*)lf[108]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,((C_word*)t0)[3],t4);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[41]+1));}}

/* k5375 in k2803 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_5377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5150(t2,C_SCHEME_FALSE);}

/* k2983 in k2980 in k2960 in k6639 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2985(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2985,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[230]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2993,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_2993(t6,((C_word*)t0)[4],t1);}

/* k2980 in k2960 in k6639 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2982(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2982,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2985,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:454: g358 */
t3=t1;
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* a3786 in k3770 in doloop538 in k3755 in k3743 in k3740 in k3737 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in ... */
static void C_ccall f_3787(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3787,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
/* csi.scm:641: write */
t3=*((C_word*)lf[178]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,((C_word*)t0)[3]);}

/* k6337 in map-loop1290 in k6255 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_ccall f_6339(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6339,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6310(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6310(t6,((C_word*)t0)[5],t5);}}

/* a6005 in doloop1356 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in ... */
static void C_ccall f_6006(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_6006r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_6006r(t0,t1,t2);}}

static void C_ccall f_6006r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_apply(5,0,t1,*((C_word*)lf[77]+1),C_fast_retrieve(lf[54]),t2);}

/* k4686 in k4683 in doloop749 in k4655 in k4652 in k4649 in k4646 in doloop723 in hexdump in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in ... */
static void C_ccall f_4688(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_4672(t4,((C_word*)t0)[5],t2,t3);}

/* doloop741 in doloop733 in k4649 in k4646 in doloop723 in hexdump in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_4757(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4757,NULL,3,t0,t1,t2);}
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4767,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:781: display */
t5=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,lf[250],((C_word*)t0)[3]);}}

/* k2771 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[41]+1));}

/* g820 in k4899 in k4896 in k4893 in k4890 in k4887 in k4884 in k4881 in k4878 in k4875 in k4872 in doloop785 in k4832 in show-frameinfo in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in ... */
static void C_fcall f_4917(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4917,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4927,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:834: display */
t5=*((C_word*)lf[100]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[253]);}}

/* map-loop334 in k2983 in k2980 in k2960 in k6639 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_2993(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_2993,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3022,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
if(C_truep(C_i_stringp(t6))){
t7=t5;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2973,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:451: open-output-string */
t8=C_fast_retrieve(lf[364]);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4683 in doloop749 in k4655 in k4652 in k4649 in k4646 in doloop723 in hexdump in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 in ... */
static void C_ccall f_4685(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4685,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4688,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_fixnum_greater_or_equal_p(t1,C_fix(32));
t4=(C_truep(t3)?C_fixnum_lessp(t1,C_fix(128)):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_make_character(C_unfix(t1));
/* write-char/port */
t6=C_fast_retrieve(lf[249]);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t2,t5,((C_word*)t0)[6]);}
else{
/* write-char/port */
t5=C_fast_retrieve(lf[249]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,C_make_character(46),((C_word*)t0)[6]);}}

/* for-each-loop1256 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in ... */
static void C_fcall f_6368(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6368,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6378,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:1049: g1257 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6033 in a6026 in k6014 in doloop1356 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in ... */
static void C_ccall f_6035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1126: g1427 */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],t1);}

/* k4765 in doloop741 in doloop733 in k4649 in k4646 in doloop723 in hexdump in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_4767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4757(t3,((C_word*)t0)[4],t2);}

/* a6036 in k6014 in doloop1356 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in ... */
static void C_ccall f_6037(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_6037r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_6037r(t0,t1,t2);}}

static void C_ccall f_6037r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=C_u_i_car(t3);
if(C_truep(C_fixnump(t4))){
t5=C_i_car(t2);
/* csi.scm:1128: exit */
t6=C_fast_retrieve(lf[57]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t1,t5);}
else{
/* csi.scm:1128: exit */
t5=C_fast_retrieve(lf[57]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,C_fix(0));}}
else{
/* csi.scm:1128: exit */
t3=C_fast_retrieve(lf[57]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,C_fix(0));}}

/* k5313 in doloop903 in a5182 in k5148 in k2803 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_5315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5315,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5322,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:905: ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[27]))(4,*((C_word*)lf[27]+1),t2,lf[107],((C_word*)t0)[4]);}

/* k2960 in k6639 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2962(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2962,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2982,a[2]=t6,a[3]=t4,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3028,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:454: call-with-current-continuation */
t9=*((C_word*)lf[368]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t7,t8);}

/* doloop749 in k4655 in k4652 in k4649 in k4646 in doloop723 in hexdump in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_4672(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4672,NULL,4,t0,t1,t2,t3);}
t4=C_fixnum_greater_or_equal_p(t2,C_fix(16));
t5=(C_truep(t4)?t4:C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[2]));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4685,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:788: ref */
t7=((C_word*)t0)[5];
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[6],t3);}}

/* a6026 in k6014 in doloop1356 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in ... */
static void C_ccall f_6027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6027,2,t0,t1);}
t2=C_fast_retrieve(lf[296]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6035,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1126: command-line-arguments */
t4=C_fast_retrieve(lf[297]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* map-loop1290 in k6255 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in ... */
static void C_fcall f_6310(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6310,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6339,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:1053: g1296 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6551 in k6542 in k6539 in k6536 in k6533 in k6530 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in ... */
static void C_ccall f_6553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_5632(t3,C_i_set_car(t2,t1));}
else{
t2=((C_word*)t0)[3];
f_5632(t2,C_SCHEME_FALSE);}}

/* k2974 in k2971 in map-loop334 in k2983 in k2980 in k2960 in k6639 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 in ... */
static void C_ccall f_2976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:453: get-output-string */
t2=C_fast_retrieve(lf[363]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k5320 in k5313 in doloop903 in a5182 in k5148 in k2803 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_5322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:905: fail */
t2=((C_word*)t0)[2];
f_5186(t2,((C_word*)t0)[3],t1);}

/* k2971 in map-loop334 in k2983 in k2980 in k2960 in k6639 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2973,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2976,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:452: write */
t4=*((C_word*)lf[178]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],t2);}

/* for-each-loop917 in doloop903 in a5182 in k5148 in k2803 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_5324(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_5324,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5334,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* csi.scm:892: g918 */
t9=((C_word*)t0)[3];
f_5239(t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* g167 in toplevel-command in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static C_word C_fcall f_2354(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
return(C_i_set_cdr(t1,t2));}

/* k6542 in k6539 in k6536 in k6533 in k6530 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in ... */
static void C_ccall f_6544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6544,2,t0,t1);}
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_i_set_i_slot(t2,C_fix(1),C_SCHEME_END_OF_LIST);
if(C_truep(*((C_word*)lf[22]+1))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6553,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=C_i_cadr(((C_word*)t0)[2]);
/* csi.scm:994: lookup-script-file */
t6=C_retrieve2(lf[29],"lookup-script-file");
f_2075(t6,t4,t5);}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];
f_5632(t5,t4);}}

/* k4899 in k4896 in k4893 in k4890 in k4887 in k4884 in k4881 in k4878 in k4875 in k4872 in doloop785 in k4832 in show-frameinfo in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in ... */
static void C_ccall f_4901(C_word c,C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4901,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4904,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_truep(((C_word*)t0)[6])?((C_word*)t0)[7]:C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4917,a[2]=((C_word*)t0)[8],tmp=(C_word)a,a+=3,tmp);
t5=C_slot(((C_word*)t0)[9],C_fix(2));
t6=C_slot(((C_word*)t0)[9],C_fix(3));
t7=C_i_check_list_2(t5,lf[77]);
t8=C_i_check_list_2(t6,lf[77]);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4991,a[2]=t10,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_4991(t12,t2,t5,t6);}
else{
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
t7=((C_word*)((C_word*)t0)[4])[1];
f_4843(t7,((C_word*)t0)[5],t5,t6);}}

/* k4902 in k4899 in k4896 in k4893 in k4890 in k4887 in k4884 in k4881 in k4878 in k4875 in k4872 in doloop785 in k4832 in show-frameinfo in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in ... */
static void C_ccall f_4904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
t5=((C_word*)((C_word*)t0)[4])[1];
f_4843(t5,((C_word*)t0)[5],t3,t4);}

/* k6539 in k6536 in k6533 in k6530 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in ... */
static void C_ccall f_6541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6541,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6544,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:991: register-feature! */
t3=C_fast_retrieve(lf[274]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[355]);}

/* k5332 in for-each-loop917 in doloop903 in a5182 in k5148 in k2803 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_5334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_5324(t4,((C_word*)t0)[5],t2,t3);}

/* k5505 in k5501 in k5480 in k5466 in loop in canonicalize-args in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_5507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:956: append */
t2=*((C_word*)lf[231]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k2326 in read-prompt-hook in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* csi.scm:273: old */
t2=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[3]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k5501 in k5480 in k5466 in loop in canonicalize-args in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_5503(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5503,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5507,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* csi.scm:956: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_5446(t6,t3,t5);}

/* ##sys#read-prompt-hook in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2321,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2328,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_fudge(C_fix(12));
if(C_truep(t3)){
if(C_truep(t3)){
/* csi.scm:273: old */
t4=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t1);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}
else{
/* csi.scm:266: ##sys#tty-port? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[46]))(3,*((C_word*)lf[46]+1),t2,*((C_word*)lf[47]+1));}}

/* k6530 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_6532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6532,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6535,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* csi.scm:987: program-name */
t4=C_fast_retrieve(lf[357]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* k6533 in k6530 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_6535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6535,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6538,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
/* csi.scm:988: command-line-arguments */
t5=C_fast_retrieve(lf[297]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t2,t4);}

/* k6536 in k6533 in k6530 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 in ... */
static void C_ccall f_6538(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6538,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6541,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:990: register-feature! */
t3=C_fast_retrieve(lf[274]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[356]);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_main_entry_point
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(2456)){
C_save(t1);
C_rereclaim2(2456*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,405);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\006.csirc");
lf[2]=C_h_intern(&lf[2],27,"\003sysrepl-print-length-limit");
lf[3]=C_h_intern(&lf[3],4,"\000csi");
lf[4]=C_h_intern(&lf[4],12,"\003sysfeatures");
lf[5]=C_h_intern(&lf[5],19,"\003sysnotices-enabled");
lf[6]=C_h_intern(&lf[6],14,"editor-command");
lf[10]=C_h_intern(&lf[10],5,"print");
lf[11]=C_decode_literal(C_heaptop,"\376B\000\000C(c) 2008-2015, The CHICKEN Team\012(c) 2000-2007, Felix L. Winkelmann\012");
lf[12]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[13]=C_h_intern(&lf[13],15,"chicken-version");
lf[14]=C_decode_literal(C_heaptop,"\376B\000\000\007CHICKEN");
lf[15]=C_h_intern(&lf[15],7,"newline");
lf[16]=C_h_intern(&lf[16],18,"\003sysuser-read-hook");
lf[17]=C_h_intern(&lf[17],5,"quote");
lf[20]=C_h_intern(&lf[20],21,"\003syssharp-number-hook");
lf[22]=C_h_intern(&lf[22],20,"\003syswindows-platform");
lf[24]=C_h_intern(&lf[24],9,"substring");
lf[25]=C_h_intern(&lf[25],1,"@");
lf[26]=C_h_intern(&lf[26],12,"file-exists\077");
lf[27]=C_h_intern(&lf[27],17,"\003sysstring-append");
lf[28]=C_decode_literal(C_heaptop,"\376B\000\000\004.bat");
lf[30]=C_h_intern(&lf[30],13,"string-append");
lf[31]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[32]=C_h_intern(&lf[32],25,"\003syspeek-nonnull-c-string");
lf[33]=C_h_intern(&lf[33],12,"string-split");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000\001;");
lf[35]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[36]=C_h_intern(&lf[36],24,"get-environment-variable");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\004PATH");
lf[39]=C_h_intern(&lf[39],13,"vector-resize");
lf[41]=C_h_intern(&lf[41],19,"\003sysundefined-value");
lf[42]=C_h_intern(&lf[42],9,"\003syserror");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000 history entry index out of range");
lf[44]=C_h_intern(&lf[44],18,"\003sysbreak-on-error");
lf[45]=C_h_intern(&lf[45],20,"\003sysread-prompt-hook");
lf[46]=C_h_intern(&lf[46],13,"\003systty-port\077");
lf[47]=C_h_intern(&lf[47],18,"\003sysstandard-input");
lf[49]=C_h_intern(&lf[49],16,"toplevel-command");
lf[50]=C_h_intern(&lf[50],4,"eval");
lf[51]=C_h_intern(&lf[51],12,"load-noisily");
lf[52]=C_h_intern(&lf[52],9,"read-line");
lf[53]=C_h_intern(&lf[53],6,"expand");
lf[54]=C_h_intern(&lf[54],12,"pretty-print");
lf[55]=C_h_intern(&lf[55],6,"values");
lf[57]=C_h_intern(&lf[57],4,"exit");
lf[58]=C_h_intern(&lf[58],1,"x");
lf[59]=C_h_intern(&lf[59],16,"\003sysstrip-syntax");
lf[60]=C_h_intern(&lf[60],4,"read");
lf[61]=C_h_intern(&lf[61],1,"p");
lf[62]=C_h_intern(&lf[62],1,"d");
lf[64]=C_h_intern(&lf[64],2,"du");
lf[66]=C_h_intern(&lf[66],3,"dur");
lf[67]=C_h_intern(&lf[67],1,"r");
lf[69]=C_h_intern(&lf[69],1,"q");
lf[70]=C_h_intern(&lf[70],13,"\003sysquit-hook");
lf[71]=C_h_intern(&lf[71],1,"l");
lf[72]=C_h_intern(&lf[72],4,"load");
lf[73]=C_h_intern(&lf[73],2,"ln");
lf[74]=C_h_intern(&lf[74],6,"print\052");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000\004==> ");
lf[76]=C_h_intern(&lf[76],8,"\000printer");
lf[77]=C_h_intern(&lf[77],8,"for-each");
lf[78]=C_h_intern(&lf[78],1,"t");
lf[79]=C_h_intern(&lf[79],17,"\003sysdisplay-times");
lf[80]=C_h_intern(&lf[80],14,"\003sysstop-timer");
lf[81]=C_h_intern(&lf[81],15,"\003sysstart-timer");
lf[82]=C_h_intern(&lf[82],3,"exn");
lf[83]=C_h_intern(&lf[83],18,"\003syslast-exception");
lf[84]=C_h_intern(&lf[84],1,"e");
lf[85]=C_h_intern(&lf[85],6,"printf");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000,editor returned with non-zero exit status ~a");
lf[87]=C_h_intern(&lf[87],6,"system");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[89]=C_h_intern(&lf[89],2,"ch");
lf[90]=C_h_intern(&lf[90],12,"vector-fill!");
lf[91]=C_h_intern(&lf[91],1,"h");
lf[92]=C_h_intern(&lf[92],19,"\003sysstandard-output");
lf[93]=C_h_intern(&lf[93],9,"\003sysprint");
lf[94]=C_h_intern(&lf[94],27,"\003syswith-print-length-limit");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[96]=C_h_intern(&lf[96],16,"\003syswrite-char-0");
lf[97]=C_h_intern(&lf[97],1,"c");
lf[99]=C_h_intern(&lf[99],1,"f");
lf[100]=C_h_intern(&lf[100],7,"display");
lf[101]=C_decode_literal(C_heaptop,"\376B\000\000\016no such frame\012");
lf[102]=C_h_intern(&lf[102],26,"\003sysrepl-recent-call-chain");
lf[103]=C_h_intern(&lf[103],1,"g");
lf[104]=C_decode_literal(C_heaptop,"\376B\000\000\027no environment in frame");
lf[105]=C_h_intern(&lf[105],9,"frameinfo");
lf[106]=C_decode_literal(C_heaptop,"\376B\000\000\012; getting ");
lf[107]=C_decode_literal(C_heaptop,"\376B\000\000\022no such variable: ");
lf[108]=C_h_intern(&lf[108],7,"call/cc");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000#string or symbol required for `,g\047\012");
lf[110]=C_h_intern(&lf[110],1,"s");
lf[111]=C_h_intern(&lf[111],1,"\077");
lf[112]=C_decode_literal(C_heaptop,"\376B\000\000\002 ,");
lf[113]=C_decode_literal(C_heaptop,"\376B\000\003\266Toplevel commands:\012\012 ,\077                Show this text\012 ,p EXP            Pr"
"etty print evaluated expression EXP\012 ,d EXP            Describe result of evalua"
"ted expression EXP\012 ,du EXP           Dump data of expression EXP\012 ,dur EXP N   "
"     Dump range\012 ,q                Quit interpreter\012 ,l FILENAME ...   Load one "
"or more files\012 ,ln FILENAME ...  Load one or more files and print result of each"
" top-level expression\012 ,r                Show system information\012 ,h            "
"    Show history of expression results\012 ,ch               Clear history of expre"
"ssion results\012 ,e FILENAME       Run external editor\012 ,s TEXT ...       Execute "
"shell-command\012 ,exn              Describe last exception\012 ,c                Show"
" call-chain of most recent error\012 ,f N              Select frame N\012 ,g NAME     "
"      Get variable NAME from current frame\012 ,t EXP            Evaluate form and "
"print elapsed time\012 ,x EXP            Pretty print expanded expression EXP\012");
lf[114]=C_decode_literal(C_heaptop,"\376B\000\0005undefined toplevel command ~s - enter `,\077\047 for help~%");
lf[115]=C_h_intern(&lf[115],7,"unquote");
lf[116]=C_h_intern(&lf[116],4,"chop");
lf[117]=C_h_intern(&lf[117],4,"sort");
lf[118]=C_h_intern(&lf[118],19,"with-output-to-port");
lf[119]=C_h_intern(&lf[119],4,"argv");
lf[120]=C_h_intern(&lf[120],8,"truncate");
lf[121]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[122]=C_h_intern(&lf[122],11,"make-string");
lf[123]=C_decode_literal(C_heaptop,"\376B\000\000\004  ~a");
lf[124]=C_decode_literal(C_heaptop,"\376B\000\000\025symbol gc is enabled\012");
lf[125]=C_decode_literal(C_heaptop,"\376B\000\000\027interrupts are enabled\012");
lf[126]=C_decode_literal(C_heaptop,"\376B\000\000\010(64-bit)");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[128]=C_decode_literal(C_heaptop,"\376B\000\000\010 (fixed)");
lf[129]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000\010downward");
lf[131]=C_decode_literal(C_heaptop,"\376B\000\000\006upward");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\002\262~%~%~\012                   Machine type:    \011~A ~A~%~\012                   Soft"
"ware type:   \011~A~%~\012                   Software version:\011~A~%~\012                 "
"  Build platform:  \011~A~%~\012                   Installation prefix:\011~A~%~\012        "
"           Extension path:  \011~A~%~\012                   Include path:    \011~A~%~\012  "
"                 Keyword style:   \011~A~%~\012                   Symbol-table load:\011~"
"S~%  ~\012                     Avg bucket length:\011~S~%  ~\012                     Tota"
"l symbol count:\011~S~%~\012                   Memory:\011heap size is ~S bytes~A with ~S"
" bytes currently in use~%~  \012                     nursery size is ~S bytes, stac"
"k grows ~A~%~\012                   Command line:    \011~S~%");
lf[133]=C_h_intern(&lf[133],21,"\003sysinclude-pathnames");
lf[134]=C_h_intern(&lf[134],14,"symbol->string");
lf[135]=C_h_intern(&lf[135],13,"keyword-style");
lf[136]=C_h_intern(&lf[136],15,"repository-path");
lf[137]=C_h_intern(&lf[137],14,"build-platform");
lf[138]=C_h_intern(&lf[138],16,"software-version");
lf[139]=C_h_intern(&lf[139],13,"software-type");
lf[140]=C_h_intern(&lf[140],12,"machine-type");
lf[141]=C_h_intern(&lf[141],15,"keyword->string");
lf[142]=C_h_intern(&lf[142],8,"string<\077");
lf[143]=C_decode_literal(C_heaptop,"\376B\000\000\015Features:~%~%");
lf[144]=C_h_intern(&lf[144],17,"memory-statistics");
lf[145]=C_h_intern(&lf[145],21,"\003syssymbol-table-info");
lf[146]=C_h_intern(&lf[146],2,"gc");
lf[148]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010u8vector\376\003\000\000\002\376B\000\000\030vector of unsigned bytes\376\003\000\000\002\376\001\000\000\017u8vector-leng"
"th\376\003\000\000\002\376\001\000\000\014u8vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010s8vector\376\003\000\000\002\376B\000\000\026vector of signed byt"
"es\376\003\000\000\002\376\001\000\000\017s8vector-length\376\003\000\000\002\376\001\000\000\014s8vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011u16vector\376\003\000\000"
"\002\376B\000\000\037vector of unsigned 16-bit words\376\003\000\000\002\376\001\000\000\020u16vector-length\376\003\000\000\002\376\001\000\000\015u16vect"
"or-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011s16vector\376\003\000\000\002\376B\000\000\035vector of signed 16-bit words\376\003\000\000\002\376\001\000"
"\000\020s16vector-length\376\003\000\000\002\376\001\000\000\015s16vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011u32vector\376\003\000\000\002\376B\000\000\037ve"
"ctor of unsigned 32-bit words\376\003\000\000\002\376\001\000\000\020u32vector-length\376\003\000\000\002\376\001\000\000\015u32vector-ref\376\377"
"\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011s32vector\376\003\000\000\002\376B\000\000\035vector of signed 32-bit words\376\003\000\000\002\376\001\000\000\020s32vec"
"tor-length\376\003\000\000\002\376\001\000\000\015s32vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011f32vector\376\003\000\000\002\376B\000\000\027vector of "
"32-bit floats\376\003\000\000\002\376\001\000\000\020f32vector-length\376\003\000\000\002\376\001\000\000\015f32vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011"
"f64vector\376\003\000\000\002\376B\000\000\027vector of 64-bit floats\376\003\000\000\002\376\001\000\000\020f64vector-length\376\003\000\000\002\376\001\000\000\015f6"
"4vector-ref\376\377\016\376\377\016");
lf[150]=C_h_intern(&lf[150],6,"length");
lf[151]=C_h_intern(&lf[151],8,"list-ref");
lf[152]=C_h_intern(&lf[152],10,"string-ref");
lf[153]=C_h_intern(&lf[153],7,"fprintf");
lf[154]=C_decode_literal(C_heaptop,"\376B\000\000 ~% (~A elements not displayed)~%");
lf[155]=C_decode_literal(C_heaptop,"\376B\000\000.\011(followed by ~A identical instance~a)~% ...~%");
lf[156]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[157]=C_decode_literal(C_heaptop,"\376B\000\000\001s");
lf[158]=C_decode_literal(C_heaptop,"\376B\000\000\007 ~S: ~S");
lf[159]=C_decode_literal(C_heaptop,"\376B\000\000\021~A of length ~S~%");
lf[160]=C_decode_literal(C_heaptop,"\376B\000\000$character ~S, code: ~S, #x~X, #o~O~%");
lf[161]=C_decode_literal(C_heaptop,"\376B\000\000\016boolean true~%");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\000\017boolean false~%");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000\014empty list~%");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\024end-of-file object~%");
lf[165]=C_decode_literal(C_heaptop,"\376B\000\000\024unspecified object~%");
lf[166]=C_decode_literal(C_heaptop,"\376B\000\000\016, character ~S");
lf[167]=C_decode_literal(C_heaptop,"\376B\000\000(exact integer ~S~%  #x~X~%  #o~O~%  #b~B");
lf[168]=C_h_intern(&lf[168],28,"\003sysarbitrary-unbound-symbol");
lf[169]=C_decode_literal(C_heaptop,"\376B\000\000\017unbound value~%");
lf[170]=C_decode_literal(C_heaptop,"\376B\000\000\023inexact number ~S~%");
lf[171]=C_decode_literal(C_heaptop,"\376B\000\000\013number ~S~%");
lf[172]=C_decode_literal(C_heaptop,"\376B\000\000\006string");
lf[173]=C_h_intern(&lf[173],8,"\003syssize");
lf[174]=C_decode_literal(C_heaptop,"\376B\000\000\006vector");
lf[175]=C_h_intern(&lf[175],8,"\003sysslot");
lf[176]=C_decode_literal(C_heaptop,"\376B\000\000\035keyword symbol with name ~s~%");
lf[177]=C_h_intern(&lf[177],18,"\003syssymbol->string");
lf[178]=C_h_intern(&lf[178],5,"write");
lf[179]=C_decode_literal(C_heaptop,"\376B\000\000\005  ~s\011");
lf[180]=C_decode_literal(C_heaptop,"\376B\000\000\020  \012properties:\012\012");
lf[181]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[182]=C_decode_literal(C_heaptop,"\376B\000\000\013uninterned ");
lf[183]=C_decode_literal(C_heaptop,"\376B\000\000\012qualified ");
lf[184]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[185]=C_decode_literal(C_heaptop,"\376B\000\000\031~a~asymbol with name ~S~%");
lf[186]=C_h_intern(&lf[186],28,"\003syssymbol->qualified-string");
lf[187]=C_h_intern(&lf[187],20,"\003sysinterned-symbol\077");
lf[188]=C_h_intern(&lf[188],21,"\003sysqualified-symbol\077");
lf[189]=C_decode_literal(C_heaptop,"\376B\000\000\010unbound ");
lf[190]=C_h_intern(&lf[190],32,"\003syssymbol-has-toplevel-binding\077");
lf[191]=C_decode_literal(C_heaptop,"\376B\000\000\005eol~%");
lf[192]=C_decode_literal(C_heaptop,"\376B\000\000\012(circle)~%");
lf[193]=C_decode_literal(C_heaptop,"\376B\000\000\006~S -> ");
lf[194]=C_decode_literal(C_heaptop,"\376B\000\000\024circular structure: ");
lf[195]=C_decode_literal(C_heaptop,"\376B\000\000\004list");
lf[196]=C_decode_literal(C_heaptop,"\376B\000\000\036pair with car ~S~%and cdr ~S~%");
lf[197]=C_h_intern(&lf[197],7,"sprintf");
lf[198]=C_decode_literal(C_heaptop,"\376B\000\000 procedure with code pointer 0x~X");
lf[199]=C_h_intern(&lf[199],25,"\003syspeek-unsigned-integer");
lf[200]=C_decode_literal(C_heaptop,"\376B\000\000\005input");
lf[201]=C_decode_literal(C_heaptop,"\376B\000\000\006output");
lf[202]=C_decode_literal(C_heaptop,"\376B\000\0005~A port of type ~A with name ~S and file pointer ~X~%");
lf[203]=C_decode_literal(C_heaptop,"\376B\000\000/locative~%  pointer ~X~%  index ~A~%  type ~A~%");
lf[204]=C_decode_literal(C_heaptop,"\376B\000\000\004slot");
lf[205]=C_decode_literal(C_heaptop,"\376B\000\000\004char");
lf[206]=C_decode_literal(C_heaptop,"\376B\000\000\010u8vector");
lf[207]=C_decode_literal(C_heaptop,"\376B\000\000\010s8vector");
lf[208]=C_decode_literal(C_heaptop,"\376B\000\000\011u16vector");
lf[209]=C_decode_literal(C_heaptop,"\376B\000\000\011s16vector");
lf[210]=C_decode_literal(C_heaptop,"\376B\000\000\011u32vector");
lf[211]=C_decode_literal(C_heaptop,"\376B\000\000\011s32vector");
lf[212]=C_decode_literal(C_heaptop,"\376B\000\000\011f32vector");
lf[213]=C_decode_literal(C_heaptop,"\376B\000\000\011f64vector");
lf[214]=C_decode_literal(C_heaptop,"\376B\000\000\024machine pointer ~X~%");
lf[216]=C_h_intern(&lf[216],8,"\003sysbyte");
lf[217]=C_decode_literal(C_heaptop,"\376B\000\000\022blob of size ~S:~%");
lf[218]=C_decode_literal(C_heaptop,"\376B\000\000\030lambda information: ~s~%");
lf[219]=C_h_intern(&lf[219],23,"\003syslambda-info->string");
lf[220]=C_h_intern(&lf[220],10,"hash-table");
lf[221]=C_decode_literal(C_heaptop,"\376B\000\000\013 ~S\011-> ~S~%");
lf[222]=C_decode_literal(C_heaptop,"\376B\000\000\025  hash function: ~a~%");
lf[223]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000\001s");
lf[225]=C_decode_literal(C_heaptop,"\376B\000\000:hash-table with ~S element~a~%  comparison procedure: ~A~%");
lf[226]=C_h_intern(&lf[226],9,"condition");
lf[227]=C_decode_literal(C_heaptop,"\376B\000\000\007\011~s: ~s");
lf[228]=C_decode_literal(C_heaptop,"\376B\000\000\005 ~s~%");
lf[229]=C_decode_literal(C_heaptop,"\376B\000\000\017condition: ~s~%");
lf[230]=C_h_intern(&lf[230],3,"map");
lf[231]=C_h_intern(&lf[231],6,"append");
lf[232]=C_decode_literal(C_heaptop,"\376B\000\000\031structure of type `~S\047:~%");
lf[233]=C_h_intern(&lf[233],18,"\003syshash-table-ref");
lf[234]=C_decode_literal(C_heaptop,"\376B\000\000\020unknown object~%");
lf[235]=C_h_intern(&lf[235],15,"\003sysbytevector\077");
lf[236]=C_h_intern(&lf[236],13,"\003syslocative\077");
lf[237]=C_h_intern(&lf[237],5,"port\077");
lf[238]=C_h_intern(&lf[238],8,"keyword\077");
lf[239]=C_decode_literal(C_heaptop,"\376B\000\000\034statically allocated (0x~X) ");
lf[240]=C_h_intern(&lf[240],17,"\003sysblock-address");
lf[241]=C_h_intern(&lf[241],14,"set-describer!");
lf[242]=C_h_intern(&lf[242],19,"\003syshash-table-set!");
lf[243]=C_h_intern(&lf[243],3,"min");
lf[244]=C_h_intern(&lf[244],4,"dump");
lf[245]=C_decode_literal(C_heaptop,"\376B\000\000\034cannot dump immediate object");
lf[246]=C_h_intern(&lf[246],13,"\003syspeek-byte");
lf[247]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot dump object");
lf[248]=C_h_intern(&lf[248],14,"number->string");
lf[249]=C_h_intern(&lf[249],19,"\003syswrite-char/port");
lf[250]=C_decode_literal(C_heaptop,"\376B\000\000\003   ");
lf[251]=C_decode_literal(C_heaptop,"\376B\000\000\004:\011  ");
lf[252]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[253]=C_decode_literal(C_heaptop,"\376B\000\000\006  ---\012");
lf[254]=C_decode_literal(C_heaptop,"\376B\000\000\002] ");
lf[255]=C_decode_literal(C_heaptop,"\376B\000\000\003\011  ");
lf[256]=C_decode_literal(C_heaptop,"\376B\000\000\002[]");
lf[257]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[258]=C_h_intern(&lf[258],23,"\003sysuser-interrupt-hook");
lf[259]=C_h_intern(&lf[259],17,"\003syssignal-vector");
lf[262]=C_decode_literal(C_heaptop,"\376B\000\000\002-s");
lf[263]=C_decode_literal(C_heaptop,"\376B\000\000\003-ss");
lf[264]=C_decode_literal(C_heaptop,"\376B\000\000\007-script");
lf[265]=C_decode_literal(C_heaptop,"\376B\000\000\003-sx");
lf[266]=C_decode_literal(C_heaptop,"\376B\000\000\002--");
lf[267]=C_decode_literal(C_heaptop,"\376B\000\000\016invalid option");
lf[268]=C_h_intern(&lf[268],16,"\003sysstring->list");
lf[269]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\003-ss\376\003\000\000\002\376B\000\000\003-sx\376\003\000\000\002\376B\000\000\007-script\376\003\000\000\002\376B\000\000\010-version\376\003\000\000\002\376B\000\000\005-help\376\003\000\000"
"\002\376B\000\000\006--help\376\003\000\000\002\376B\000\000\010-feature\376\003\000\000\002\376B\000\000\013-no-feature\376\003\000\000\002\376B\000\000\005-eval\376\003\000\000\002\376B\000\000\021-cas"
"e-insensitive\376\003\000\000\002\376B\000\000\016-keyword-style\376\003\000\000\002\376B\000\000\030-no-parentheses-synonyms\376\003\000\000\002\376B\000\000"
"\021-no-symbol-escape\376\003\000\000\002\376B\000\000\014-r5rs-syntax\376\003\000\000\002\376B\000\000\013-setup-mode\376\003\000\000\002\376B\000\000\022-require-"
"extension\376\003\000\000\002\376B\000\000\006-batch\376\003\000\000\002\376B\000\000\006-quiet\376\003\000\000\002\376B\000\000\014-no-warnings\376\003\000\000\002\376B\000\000\010-no-ini"
"t\376\003\000\000\002\376B\000\000\015-include-path\376\003\000\000\002\376B\000\000\010-release\376\003\000\000\002\376B\000\000\006-print\376\003\000\000\002\376B\000\000\015-pretty-prin"
"t\376\003\000\000\002\376B\000\000\002--\376\377\016");
lf[270]=C_h_intern(&lf[270],25,"\003sysimplicit-exit-handler");
lf[271]=C_decode_literal(C_heaptop,"\376B\000\000\047missing argument to command-line option");
lf[272]=C_h_intern(&lf[272],8,"\003syslist");
lf[273]=C_h_intern(&lf[273],17,"open-input-string");
lf[274]=C_h_intern(&lf[274],17,"register-feature!");
lf[275]=C_h_intern(&lf[275],19,"unregister-feature!");
lf[276]=C_h_intern(&lf[276],4,"repl");
lf[277]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002--\376\003\000\000\002\376B\000\000\002-b\376\003\000\000\002\376B\000\000\006-batch\376\003\000\000\002\376B\000\000\002-q\376\003\000\000\002\376B\000\000\006-quiet\376\003\000\000\002\376B\000\000\002-n"
"\376\003\000\000\002\376B\000\000\010-no-init\376\003\000\000\002\376B\000\000\002-w\376\003\000\000\002\376B\000\000\014-no-warnings\376\003\000\000\002\376B\000\000\002-i\376\003\000\000\002\376B\000\000\021-case-"
"insensitive\376\003\000\000\002\376B\000\000\030-no-parentheses-synonyms\376\003\000\000\002\376B\000\000\021-no-symbol-escape\376\003\000\000\002\376B\000"
"\000\014-r5rs-syntax\376\003\000\000\002\376B\000\000\013-setup-mode\376\003\000\000\002\376B\000\000\003-ss\376\003\000\000\002\376B\000\000\003-sx\376\003\000\000\002\376B\000\000\002-s\376\003\000\000\002\376B"
"\000\000\007-script\376\377\016");
lf[278]=C_decode_literal(C_heaptop,"\376B\000\000\002-D");
lf[279]=C_decode_literal(C_heaptop,"\376B\000\000\010-feature");
lf[280]=C_decode_literal(C_heaptop,"\376B\000\000\002-I");
lf[281]=C_decode_literal(C_heaptop,"\376B\000\000\015-include-path");
lf[282]=C_decode_literal(C_heaptop,"\376B\000\000\002-K");
lf[283]=C_decode_literal(C_heaptop,"\376B\000\000\016-keyword-style");
lf[284]=C_decode_literal(C_heaptop,"\376B\000\000\013-no-feature");
lf[285]=C_decode_literal(C_heaptop,"\376B\000\000\002-R");
lf[286]=C_decode_literal(C_heaptop,"\376B\000\000\022-require-extension");
lf[287]=C_h_intern(&lf[287],22,"\004corerequire-extension");
lf[288]=C_h_intern(&lf[288],14,"string->symbol");
lf[289]=C_decode_literal(C_heaptop,"\376B\000\000\002-e");
lf[290]=C_decode_literal(C_heaptop,"\376B\000\000\005-eval");
lf[291]=C_decode_literal(C_heaptop,"\376B\000\000\002-p");
lf[292]=C_decode_literal(C_heaptop,"\376B\000\000\006-print");
lf[293]=C_decode_literal(C_heaptop,"\376B\000\000\002-P");
lf[294]=C_decode_literal(C_heaptop,"\376B\000\000\015-pretty-print");
lf[295]=C_decode_literal(C_heaptop,"\376B\000\000\003-ss");
lf[296]=C_h_intern(&lf[296],4,"main");
lf[297]=C_h_intern(&lf[297],22,"command-line-arguments");
lf[298]=C_decode_literal(C_heaptop,"\376B\000\000\003-sx");
lf[299]=C_h_intern(&lf[299],18,"\003sysstandard-error");
lf[300]=C_decode_literal(C_heaptop,"\376B\000\000\002; ");
lf[301]=C_decode_literal(C_heaptop,"\376B\000\000\003\012; ");
lf[302]=C_h_intern(&lf[302],12,"flush-output");
lf[303]=C_h_intern(&lf[303],21,"with-output-to-string");
lf[304]=C_h_intern(&lf[304],8,"\003sysload");
lf[305]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[306]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[307]=C_decode_literal(C_heaptop,"\376B\000\000\004HOME");
lf[308]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-n\376\003\000\000\002\376B\000\000\010-no-init\376\377\016");
lf[309]=C_h_intern(&lf[309],13,"symbol-escape");
lf[310]=C_h_intern(&lf[310],20,"parentheses-synonyms");
lf[311]=C_h_intern(&lf[311],5,"\000none");
lf[312]=C_h_intern(&lf[312],14,"case-sensitive");
lf[313]=C_decode_literal(C_heaptop,"\376B\000\000/Disabled the CHICKEN extensions to R5RS syntax\012");
lf[314]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\014-r5rs-syntax\376\377\016");
lf[315]=C_decode_literal(C_heaptop,"\376B\000\000%Disabled support for escaped symbols\012");
lf[316]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\021-no-symbol-escape\376\377\016");
lf[317]=C_decode_literal(C_heaptop,"\376B\000\000\052Disabled support for parentheses synonyms\012");
lf[318]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\030-no-parentheses-synonyms\376\377\016");
lf[319]=C_decode_literal(C_heaptop,"\376B\000\000\006prefix");
lf[320]=C_h_intern(&lf[320],7,"\000prefix");
lf[321]=C_decode_literal(C_heaptop,"\376B\000\000\004none");
lf[322]=C_decode_literal(C_heaptop,"\376B\000\000\006suffix");
lf[323]=C_h_intern(&lf[323],7,"\000suffix");
lf[324]=C_decode_literal(C_heaptop,"\376B\000\000+missing argument to `-keyword-style\047 option");
lf[325]=C_h_intern(&lf[325],10,"\003sysnodups");
lf[326]=C_h_intern(&lf[326],8,"string=\077");
lf[327]=C_decode_literal(C_heaptop,"\376B\000\000\002-I");
lf[328]=C_decode_literal(C_heaptop,"\376B\000\000\015-include-path");
lf[329]=C_decode_literal(C_heaptop,"\376B\000\000\013-no-feature");
lf[330]=C_decode_literal(C_heaptop,"\376B\000\000\002-D");
lf[331]=C_decode_literal(C_heaptop,"\376B\000\000\010-feature");
lf[332]=C_h_intern(&lf[332],16,"case-insensitive");
lf[333]=C_decode_literal(C_heaptop,"\376B\000\000-Identifiers and symbols are case insensitive\012");
lf[334]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-i\376\003\000\000\002\376B\000\000\021-case-insensitive\376\377\016");
lf[335]=C_h_intern(&lf[335],12,"load-verbose");
lf[336]=C_h_intern(&lf[336],20,"\003syswarnings-enabled");
lf[337]=C_decode_literal(C_heaptop,"\376B\000\000\026Warnings are disabled\012");
lf[338]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-w\376\003\000\000\002\376B\000\000\014-no-warnings\376\377\016");
lf[339]=C_decode_literal(C_heaptop,"\376B\000\000\010-release");
lf[340]=C_decode_literal(C_heaptop,"\376B\000\000\013-setup-mode");
lf[341]=C_h_intern(&lf[341],14,"\003syssetup-mode");
lf[342]=C_decode_literal(C_heaptop,"\376B\000\000\010-version");
lf[343]=C_decode_literal(C_heaptop,"\376B\000\004V    -b  -batch                    terminate after command-line processing\012 "
"   -w  -no-warnings              disable all warnings\012    -K  -keyword-style STY"
"LE      enable alternative keyword-syntax\012                                   (pr"
"efix, suffix or none)\012        -no-parentheses-synonyms  disables list delimiter "
"synonyms\012        -no-symbol-escape         disables support for escaped symbols\012"
"        -r5rs-syntax              disables the CHICKEN extensions to\012           "
"                        R5RS syntax\012    -s  -script PATHNAME          use interp"
"reter for shell scripts\012        -ss PATHNAME              shell script with `mai"
"n\047 procedure\012        -sx PATHNAME              same as `-s\047, but print each expr"
"ession\012                                   as it is evaluated\012        -setup-mode"
"               prefer the current directory when locating extensions\012    -R  -re"
"quire-extension NAME   require extension and import before\012                     "
"              executing code\012    -I  -include-path PATHNAME    add PATHNAME to i"
"nclude path\012    --                            ignore all following options\012");
lf[344]=C_decode_literal(C_heaptop,"\376B\000\000\003 \047\012");
lf[345]=C_decode_literal(C_heaptop,"\376B\000\000D    -n  -no-init                  do not load initialization file ` ");
lf[346]=C_h_intern(&lf[346],19,"\003sysprint-to-string");
lf[347]=C_decode_literal(C_heaptop,"\376B\000\003\052usage: csi [FILENAME | OPTION ...]\012\012  `csi\047 is the CHICKEN interpreter.\012  \012"
"  FILENAME is a Scheme source file name with optional extension. OPTION may be\012 "
" one of the following:\012\012    -h  -help  --help             display this text and "
"exit\012        -version                  display version and exit\012        -release"
"                  print release number and exit\012    -i  -case-insensitive       "
"  enable case-insensitive reading\012    -e  -eval EXPRESSION          evaluate giv"
"en expression\012    -p  -print EXPRESSION         evaluate and print result(s)\012   "
" -P  -pretty-print EXPRESSION  evaluate and print result(s) prettily\012    -D  -fe"
"ature SYMBOL           register feature identifier\012        -no-feature SYMBOL   "
"     disable built-in feature identifier\012    -q  -quiet                    do no"
"t print banner\012");
lf[348]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-h\376\003\000\000\002\376B\000\000\005-help\376\003\000\000\002\376B\000\000\006--help\376\377\016");
lf[349]=C_decode_literal(C_heaptop,"\376B\000\000\001;");
lf[350]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[351]=C_decode_literal(C_heaptop,"\376B\000\000\024CHICKEN_INCLUDE_PATH");
lf[352]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-q\376\003\000\000\002\376B\000\000\006-quiet\376\377\016");
lf[353]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-b\376\003\000\000\002\376B\000\000\006-batch\376\377\016");
lf[354]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-e\376\003\000\000\002\376B\000\000\002-p\376\003\000\000\002\376B\000\000\002-P\376\003\000\000\002\376B\000\000\005-eval\376\003\000\000\002\376B\000\000\006-print\376\003\000\000\002\376B\000\000\015-pr"
"etty-print\376\377\016");
lf[355]=C_h_intern(&lf[355],14,"chicken-script");
lf[356]=C_h_intern(&lf[356],6,"script");
lf[357]=C_h_intern(&lf[357],12,"program-name");
lf[358]=C_decode_literal(C_heaptop,"\376B\000\000\042missing or invalid script argument");
lf[359]=C_decode_literal(C_heaptop,"\376B\000\000\002--");
lf[360]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\003-ss\376\003\000\000\002\376B\000\000\003-sx\376\003\000\000\002\376B\000\000\002-s\376\003\000\000\002\376B\000\000\007-script\376\377\016");
lf[361]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-K\376\003\000\000\002\376B\000\000\016-keyword-style\376\377\016");
lf[362]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[363]=C_h_intern(&lf[363],17,"get-output-string");
lf[364]=C_h_intern(&lf[364],18,"open-output-string");
lf[365]=C_decode_literal(C_heaptop,"\376B\000\000\025invalid option syntax");
lf[366]=C_h_intern(&lf[366],7,"reverse");
lf[367]=C_h_intern(&lf[367],22,"with-exception-handler");
lf[368]=C_h_intern(&lf[368],30,"call-with-current-continuation");
lf[369]=C_decode_literal(C_heaptop,"\376B\000\000\013CSI_OPTIONS");
lf[370]=C_h_intern(&lf[370],28,"\003sysextend-macro-environment");
lf[371]=C_h_intern(&lf[371],10,"defhandler");
lf[372]=C_decode_literal(C_heaptop,"\376B\000\000\032C_establish_signal_handler");
lf[373]=C_h_intern(&lf[373],11,"\003syssetslot");
lf[374]=C_h_intern(&lf[374],11,"\004coreinline");
lf[375]=C_h_intern(&lf[375],5,"begin");
lf[376]=C_h_intern(&lf[376],25,"\003syssyntax-rules-mismatch");
lf[377]=C_h_intern(&lf[377],18,"\003syser-transformer");
lf[378]=C_h_intern(&lf[378],23,"\003syscurrent-environment");
lf[379]=C_h_intern(&lf[379],11,"make-vector");
lf[380]=C_h_intern(&lf[380],17,"\003syspeek-c-string");
lf[381]=C_decode_literal(C_heaptop,"\376B\000\000\016CHICKEN_PREFIX");
lf[382]=C_decode_literal(C_heaptop,"\376B\000\000$; switching current module to `~a\047~%");
lf[383]=C_h_intern(&lf[383],17,"\003sysswitch-module");
lf[384]=C_decode_literal(C_heaptop,"\376B\000\000\027undefined module `~a\047~%");
lf[385]=C_h_intern(&lf[385],15,"\003sysfind-module");
lf[386]=C_h_intern(&lf[386],23,"\003sysresolve-module-name");
lf[387]=C_decode_literal(C_heaptop,"\376B\000\000\032invalid module name `~a\047~%");
lf[388]=C_decode_literal(C_heaptop,"\376B\000\000(; resetting current module to toplevel~%");
lf[389]=C_h_intern(&lf[389],18,"\003sysstring->symbol");
lf[390]=C_h_intern(&lf[390],1,"m");
lf[391]=C_decode_literal(C_heaptop,"\376B\000\0005,m MODULE         switch to module with name `MODULE\047");
lf[392]=C_decode_literal(C_heaptop,"\376B\000\000\010#;~A~A> ");
lf[393]=C_decode_literal(C_heaptop,"\376B\000\000\003~a:");
lf[394]=C_h_intern(&lf[394],15,"\003sysmodule-name");
lf[395]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[396]=C_h_intern(&lf[396],18,"\003syscurrent-module");
lf[397]=C_h_intern(&lf[397],11,"repl-prompt");
lf[398]=C_h_intern(&lf[398],15,"\003sysmake-string");
lf[399]=C_decode_literal(C_heaptop,"\376B\000\000\013emacsclient");
lf[400]=C_decode_literal(C_heaptop,"\376B\000\000\002vi");
lf[401]=C_decode_literal(C_heaptop,"\376B\000\000\005EMACS");
lf[402]=C_decode_literal(C_heaptop,"\376B\000\000\006VISUAL");
lf[403]=C_decode_literal(C_heaptop,"\376B\000\000\006EDITOR");
lf[404]=C_h_intern(&lf[404],14,"make-parameter");
C_register_lf2(lf,405,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1841,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2956,2,t0,t1);}
t2=C_fast_retrieve(lf[116]);
t3=C_fast_retrieve(lf[117]);
t4=C_fast_retrieve(lf[118]);
t5=C_fast_retrieve(lf[119]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3099,a[2]=t5,a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:470: get-environment-variable */
t7=C_fast_retrieve(lf[36]);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,lf[381]);}

/* toplevel-command in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2334(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr4r,(void*)f_2334r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2334r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2334r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(13);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=C_i_check_symbol_2(t2,lf[49]);
t9=(C_truep(t7)?C_i_check_string_2(t7,lf[49]):C_SCHEME_UNDEFINED);
t10=C_i_assq(t2,C_retrieve2(lf[48],"command-table"));
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2354,a[2]=t3,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t12=f_2354(C_a_i(&a,7),t11,t10);
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,*((C_word*)lf[41]+1));}
else{
t11=C_a_i_list3(&a,3,t2,t3,t7);
t12=C_a_i_cons(&a,2,t11,C_retrieve2(lf[48],"command-table"));
t13=C_mutate2(&lf[48] /* (set! command-table ...) */,t12);
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,*((C_word*)lf[41]+1));}}

/* k6718 in k6710 in k6730 in k6690 in k6677 in a6668 in k6661 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_6720(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6720,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,t1,t3);
t5=C_a_i_cons(&a,2,((C_word*)t0)[4],t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=C_a_i_cons(&a,2,((C_word*)t0)[5],t6);
t8=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_cons(&a,2,((C_word*)t0)[7],t7));}

/* k2486 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2488,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2491,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:328: eval */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* map-loop1061 in k5480 in k5466 in loop in canonicalize-args in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_5511(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(6);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5511,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_string(&a,2,C_make_character(45),t3);
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

/* k2489 in k2486 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:329: dump */
f_4457(((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k6710 in k6730 in k6690 in k6677 in a6668 in k6661 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_6712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6712,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6720,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:914: rename999 */
t4=((C_word*)t0)[7];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[259]);}

/* k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2306(C_word c,C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2306,2,t0,t1);}
t2=C_set_block_item(lf[44] /* ##sys#break-on-error */,0,C_SCHEME_FALSE);
t3=C_fast_retrieve(lf[45]);
t4=C_mutate2((C_word*)lf[45]+1 /* (set! ##sys#read-prompt-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2321,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=lf[48] /* command-table */ =C_SCHEME_END_OF_LIST;;
t6=C_mutate2((C_word*)lf[49]+1 /* (set! toplevel-command ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2334,tmp=(C_word)a,a+=2,tmp));
t7=C_fast_retrieve(lf[50]);
t8=C_fast_retrieve(lf[51]);
t9=C_fast_retrieve(lf[52]);
t10=C_fast_retrieve(lf[33]);
t11=C_fast_retrieve(lf[53]);
t12=C_fast_retrieve(lf[54]);
t13=*((C_word*)lf[55]+1);
t14=C_mutate2(&lf[56] /* (set! csi-eval ...) */,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2384,a[2]=t12,a[3]=t11,a[4]=t7,a[5]=t10,a[6]=t9,a[7]=t8,a[8]=t13,tmp=(C_word)a,a+=9,tmp));
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2956,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t16=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6775,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:423: toplevel-command */
t17=C_fast_retrieve(lf[49]);
f_2334(5,t17,t15,lf[390],t16,lf[391]);}

/* k2558 in for-each-loop227 in k2540 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2550(t3,((C_word*)t0)[4],t2);}

/* chop-separator in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_1974(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1974,3,t0,t1,t2);}
t3=C_block_size(t2);
t4=C_a_i_minus(&a,2,t3,C_fix(1));
t5=t4;
t6=C_i_string_ref(t2,t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1987,a[2]=t1,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnum_greaterp(t5,C_fix(0)))){
/* csi.scm:178: dirseparator? */
t8=C_retrieve2(lf[21],"dirseparator\077");
f_1959(3,t8,t7,t6);}
else{
t8=t7;
f_1987(2,t8,C_SCHEME_FALSE);}}

/* k2573 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:339: string-split */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k6473 in k6470 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in ... */
static void C_ccall f_6475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1029: exit */
t2=C_fast_retrieve(lf[57]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* k6470 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in ... */
static void C_ccall f_6472(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6472,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6475,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1880,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:80: display */
t5=*((C_word*)lf[100]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[347]);}
else{
t2=((C_word*)t0)[2];
f_5791(2,t2,C_SCHEME_UNDEFINED);}}

/* k5557 in k5466 in loop in canonicalize-args in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_5559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5559,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k5549 in k5466 in loop in canonicalize-args in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_5551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* string->list */
t2=C_fast_retrieve(lf[268]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2543 in k2540 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[41]+1));}

/* k2540 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2542,2,t0,t1);}
t2=C_fast_retrieve(lf[72]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2545,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2550,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_2550(t7,t3,t1);}

/* dirseparator? in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_1959(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1959,3,t0,t1,t2);}
if(C_truep(*((C_word*)lf[22]+1))){
t3=C_i_char_equalp(t2,C_make_character(92));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?t3:C_i_char_equalp(t2,C_make_character(47))));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_char_equalp(t2,C_make_character(47)));}}

/* k1955 in sharp-number-hook in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_1957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1957,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,lf[17],t1));}

/* for-each-loop227 in k2540 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_2550(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2550,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2560,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:339: g228 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1985 in chop-separator in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_1987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* csi.scm:179: substring */
t2=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0),((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2678 in a2675 in k2641 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k6730 in k6690 in k6677 in a6668 in k6661 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_6732(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6732,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_cons(&a,2,lf[372],t3);
t5=C_a_i_cons(&a,2,t1,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6712,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:914: rename999 */
t8=((C_word*)t0)[6];
((C_proc3)C_fast_retrieve_proc(t8))(3,t8,t7,lf[373]);}

/* k2693 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:354: describe */
t2=C_retrieve2(lf[63],"describe");
f_3450(t2,((C_word*)t0)[2],C_fast_retrieve(lf[83]),C_SCHEME_END_OF_LIST);}

/* k2501 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2503(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2503,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2506,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:332: read */
t4=*((C_word*)lf[60]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k2507 in k2504 in k2501 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2509,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2512,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:334: eval */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* k2504 in k2501 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2506,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2509,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:333: eval */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* k2510 in k2507 in k2504 in k2501 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2512,2,t0,t1);}
/* csi.scm:335: dump */
f_4457(((C_word*)t0)[2],((C_word*)t0)[3],C_a_i_list(&a,1,t1));}

/* k2101 in k2098 in k2089 in k2077 in lookup-script-file in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2103,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2110,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2114,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:207: chop-separator */
t4=C_retrieve2(lf[23],"chop-separator");
f_1974(3,t4,t3,t1);}

/* k2098 in k2089 in k2077 in lookup-script-file in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2100(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2100,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2103,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=(C_truep(((C_word*)t0)[5])?C_i_foreign_block_argumentp(((C_word*)t0)[5]):C_SCHEME_FALSE);
t5=C_i_foreign_fixnum_argumentp(C_fix(256));
t6=stub63(t3,t4,t5);
/* csi.scm:189: ##sys#peek-nonnull-c-string */
t7=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t2,t6,C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2117,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:208: addext */
f_2024(t2,((C_word*)t0)[4]);}}

/* k2115 in k2098 in k2089 in k2077 in lookup-script-file in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2117,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2123,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[5];
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[27]))(4,*((C_word*)lf[27]+1),t2,lf[35],t3);}}

/* k2112 in k2101 in k2098 in k2089 in k2077 in lookup-script-file in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:207: string-append */
t2=*((C_word*)lf[30]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,lf[31],((C_word*)t0)[3]);}

/* k2108 in k2101 in k2098 in k2089 in k2077 in lookup-script-file in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:207: addext */
f_2024(((C_word*)t0)[3],t1);}

/* k5874 in doloop1356 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in ... */
static void C_ccall f_5876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1089: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[96]))(4,*((C_word*)lf[96]+1),((C_word*)t0)[2],C_make_character(10),*((C_word*)lf[92]+1));}

/* ##sys#quit-hook in a5880 in doloop1356 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in ... */
static void C_ccall f_5884(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5884,2,t0,t1);}
/* csi.scm:1087: k */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,C_SCHEME_FALSE);}

/* a5880 in doloop1356 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in ... */
static void C_ccall f_5881(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5881,3,t0,t1,t2);}
t3=C_mutate2((C_word*)lf[70]+1 /* (set! ##sys#quit-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5884,a[2]=t2,tmp=(C_word)a,a+=3,tmp));
/* csi.scm:1088: repl */
t4=C_fast_retrieve(lf[276]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,C_retrieve2(lf[56],"csi-eval"));}

/* lookup-script-file in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_2075(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2075,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2079,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:202: get-environment-variable */
t4=C_fast_retrieve(lf[36]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[37]);}

/* k2077 in lookup-script-file in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2079,2,t0,t1);}
t2=t1;
t3=C_block_size(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greaterp(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2091,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t5=C_i_string_ref(((C_word*)t0)[2],C_fix(0));
/* csi.scm:204: dirseparator? */
t6=C_retrieve2(lf[21],"dirseparator\077");
f_1959(3,t6,t4,t5);}
else{
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* doloop1356 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in ... */
static void C_fcall f_5863(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(17);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5863,NULL,3,t0,t1,t2);}
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_i_nullp(((C_word*)t3)[1]))){
if(C_truep(((C_word*)t0)[2])){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5876,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5881,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:1085: call/cc */
t6=*((C_word*)lf[108]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}}
else{
t4=C_i_car(((C_word*)t3)[1]);
t5=C_i_member(t4,lf[277]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5900,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
t7=C_i_cdr(((C_word*)t3)[1]);
t37=t1;
t38=t7;
t1=t37;
t2=t38;
goto loop;}
else{
if(C_truep((C_truep(C_i_equalp(t4,lf[278]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[279]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[280]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[281]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[282]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[283]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[284]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))))))){
t7=C_i_cdr(((C_word*)t3)[1]);
t8=C_set_block_item(t3,0,t7);
t9=C_i_cdr(((C_word*)t3)[1]);
t37=t1;
t38=t9;
t1=t37;
t2=t38;
goto loop;}
else{
t7=C_i_string_equal_p(lf[285],t4);
t8=(C_truep(t7)?t7:C_u_i_string_equal_p(lf[286],t4));
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5929,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5943,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
t11=C_i_cadr(((C_word*)t3)[1]);
/* csi.scm:1095: string->symbol */
t12=*((C_word*)lf[288]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t10,t11);}
else{
t9=C_u_i_string_equal_p(lf[289],t4);
t10=(C_truep(t9)?t9:C_u_i_string_equal_p(lf[290],t4));
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5958,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t12=C_i_cadr(((C_word*)t3)[1]);
/* csi.scm:1098: evalstring */
f_5734(t11,t12,C_SCHEME_END_OF_LIST);}
else{
t11=C_u_i_string_equal_p(lf[291],t4);
t12=(C_truep(t11)?t11:C_u_i_string_equal_p(lf[292],t4));
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5975,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t14=C_i_cadr(((C_word*)t3)[1]);
t15=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5983,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:1101: evalstring */
f_5734(t13,t14,C_a_i_list(&a,1,t15));}
else{
t13=C_u_i_string_equal_p(lf[293],t4);
t14=(C_truep(t13)?t13:C_u_i_string_equal_p(lf[294],t4));
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5998,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t16=C_i_cadr(((C_word*)t3)[1]);
t17=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6006,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:1104: evalstring */
f_5734(t15,t16,C_a_i_list(&a,1,t17));}
else{
t15=(C_truep(((C_word*)t0)[5])?C_i_car(((C_word*)t0)[5]):C_SCHEME_FALSE);
t16=t15;
t17=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6016,a[2]=t16,a[3]=t6,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_equalp(lf[298],t16))){
t18=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6067,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:1108: ##sys#load */
((C_proc5)C_fast_retrieve_symbol_proc(lf[304]))(5,*((C_word*)lf[304]+1),t17,t4,t18,C_SCHEME_FALSE);}
else{
/* csi.scm:1108: ##sys#load */
((C_proc5)C_fast_retrieve_symbol_proc(lf[304]))(5,*((C_word*)lf[304]+1),t17,t4,C_SCHEME_FALSE,C_SCHEME_FALSE);}}}}}}}}}

/* for-each-loop819 in k4899 in k4896 in k4893 in k4890 in k4887 in k4884 in k4881 in k4878 in k4875 in k4872 in doloop785 in k4832 in show-frameinfo in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in ... */
static void C_fcall f_4991(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_4991,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5001,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* csi.scm:831: g820 */
t9=((C_word*)t0)[3];
f_4917(t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k4362 in g644 in k4326 in k4092 in k3978 in k3950 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in ... */
static void C_ccall f_4364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4364,2,t0,t1);}
t2=C_a_i_list1(&a,1,C_fix(0));
/* csi.scm:725: append */
t3=*((C_word*)lf[231]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t1,t2);}

/* k2143 in k2140 in loop in k2128 in k2121 in k2115 in k2098 in k2089 in k2077 in lookup-script-file in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2145(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=C_slot(((C_word*)t0)[3],C_fix(1));
/* csi.scm:215: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2132(t3,((C_word*)t0)[2],t2);}}

/* k2140 in loop in k2128 in k2121 in k2115 in k2098 in k2089 in k2077 in lookup-script-file in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2142,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2145,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:214: addext */
f_2024(t2,t1);}

/* loop in k5480 in k5466 in loop in canonicalize-args in k5378 in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static C_word C_fcall f_5590(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:
t2=C_i_nullp(t1);
if(C_truep(t2)){
return(t2);}
else{
t3=C_i_car(t1);
if(C_truep((C_truep(C_eqp(t3,C_make_character(107)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(115)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(118)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(104)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(68)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(101)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(105)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(82)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(98)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(110)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(113)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(119)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(45)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(73)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(112)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(80)))?C_SCHEME_TRUE:C_SCHEME_FALSE)))))))))))))))))){
t4=t1;
t5=C_u_i_cdr(t4);
t7=t5;
t1=t7;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* k2818 in k2815 in k2812 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k3876 in loop-print in k3836 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_3878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3878,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[2];
t5=C_u_i_car(t4);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[3]);
/* csi.scm:653: loop-print */
t7=((C_word*)((C_word*)t0)[4])[1];
f_3847(t7,((C_word*)t0)[5],t3,t6);}

/* map-loop649 in g644 in k4326 in k4092 in k3978 in k3950 in k3833 in k3721 in k3586 in describe in k3446 in k3100 in k3097 in k2954 in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in ... */
static void C_fcall f_4370(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4370,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4399,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:725: g655 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2157 in loop in k2128 in k2121 in k2115 in k2098 in k2089 in k2077 in lookup-script-file in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[27]))(4,*((C_word*)lf[27]+1),((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k2831 in k2398 in csi-eval in k2304 in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2833(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2833,2,t0,t1);}
t2=C_retrieve2(lf[48],"command-table");
t3=C_i_check_list_2(C_retrieve2(lf[48],"command-table"),lf[77]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2855,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2860,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_2860(t8,t4,C_retrieve2(lf[48],"command-table"));}

/* k2121 in k2115 in k2098 in k2089 in k2077 in lookup-script-file in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_ccall f_2123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2123,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2130,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:211: string-split */
t4=C_fast_retrieve(lf[33]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],lf[34]);}

/* k5834 in k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in ... */
static void C_ccall f_5836(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5836,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5840,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6253,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_retrieve2(lf[23],"chop-separator");
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6257,a[2]=t3,a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],a[5]=t7,a[6]=t5,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
/* csi.scm:1053: collect-options */
t10=((C_word*)((C_word*)t0)[11])[1];
f_5652(t10,t9,lf[328]);}

/* k5828 in k5825 in k5819 in k5816 in k5810 in k5807 in k5804 in k5801 in k5798 in k5795 in k5792 in k5789 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in ... */
static void C_ccall f_5830(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5830,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[77]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5836,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6345,a[2]=t5,a[3]=((C_word*)t0)[12],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_6345(t7,t3,t1);}

/* loop in k2128 in k2121 in k2115 in k2098 in k2089 in k2077 in lookup-script-file in k2003 in k1872 in k1869 in k1864 in k1851 in k1848 in k1845 in k1842 in k1839 */
static void C_fcall f_2132(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2132,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2142,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2159,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=C_slot(t2,C_fix(0));
/* csi.scm:213: chop-separator */
t6=C_retrieve2(lf[23],"chop-separator");
f_1974(3,t6,t4,t5);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[500] = {
{"f_2814:csi_2escm",(void*)f_2814},
{"f_2817:csi_2escm",(void*)f_2817},
{"f_2130:csi_2escm",(void*)f_2130},
{"f_5846:csi_2escm",(void*)f_5846},
{"f_5843:csi_2escm",(void*)f_5843},
{"f_5840:csi_2escm",(void*)f_5840},
{"f_5849:csi_2escm",(void*)f_5849},
{"f_4605:csi_2escm",(void*)f_4605},
{"f_4608:csi_2escm",(void*)f_4608},
{"f_5812:csi_2escm",(void*)f_5812},
{"f_5818:csi_2escm",(void*)f_5818},
{"f_4612:csi_2escm",(void*)f_4612},
{"f_5821:csi_2escm",(void*)f_5821},
{"f_5827:csi_2escm",(void*)f_5827},
{"f_4628:csi_2escm",(void*)f_4628},
{"f_4638:csi_2escm",(void*)f_4638},
{"f_3663:csi_2escm",(void*)f_3663},
{"f_4648:csi_2escm",(void*)f_4648},
{"f_3657:csi_2escm",(void*)f_3657},
{"f_3823:csi_2escm",(void*)f_3823},
{"f_3820:csi_2escm",(void*)f_3820},
{"f_5855:csi_2escm",(void*)f_5855},
{"f_5852:csi_2escm",(void*)f_5852},
{"f_5858:csi_2escm",(void*)f_5858},
{"f_4834:csi_2escm",(void*)f_4834},
{"f_4654:csi_2escm",(void*)f_4654},
{"f_4657:csi_2escm",(void*)f_4657},
{"f_4651:csi_2escm",(void*)f_4651},
{"f_3847:csi_2escm",(void*)f_3847},
{"f_4843:csi_2escm",(void*)f_4843},
{"f_4663:csi_2escm",(void*)f_4663},
{"f_4660:csi_2escm",(void*)f_4660},
{"f_4301:csi_2escm",(void*)f_4301},
{"f_3418:csi_2escm",(void*)f_3418},
{"f_4409:csi_2escm",(void*)f_4409},
{"f_5629:csi_2escm",(void*)f_5629},
{"f_5626:csi_2escm",(void*)f_5626},
{"f_3255:csi_2escm",(void*)f_3255},
{"f_5623:csi_2escm",(void*)f_5623},
{"f_5620:csi_2escm",(void*)f_5620},
{"f_4328:csi_2escm",(void*)f_4328},
{"f_3838:csi_2escm",(void*)f_3838},
{"f_4332:csi_2escm",(void*)f_4332},
{"f_3283:csi_2escm",(void*)f_3283},
{"f_3448:csi_2escm",(void*)f_3448},
{"f_3835:csi_2escm",(void*)f_3835},
{"f_4246:csi_2escm",(void*)f_4246},
{"f_4346:csi_2escm",(void*)f_4346},
{"f_3456:csi_2escm",(void*)f_3456},
{"f_2091:csi_2escm",(void*)f_2091},
{"f_6653:csi_2escm",(void*)f_6653},
{"f_6655:csi_2escm",(void*)f_6655},
{"f_3450:csi_2escm",(void*)f_3450},
{"f_4354:csi_2escm",(void*)f_4354},
{"f_6650:csi_2escm",(void*)f_6650},
{"f_1937:csi_2escm",(void*)f_1937},
{"f_4448:csi_2escm",(void*)f_4448},
{"f_3468:csi_2escm",(void*)f_3468},
{"f_4440:csi_2escm",(void*)f_4440},
{"f_5666:csi_2escm",(void*)f_5666},
{"f_4264:csi_2escm",(void*)f_4264},
{"f_6647:csi_2escm",(void*)f_6647},
{"f_3463:csi_2escm",(void*)f_3463},
{"f_5052:csi_2escm",(void*)f_5052},
{"f_6641:csi_2escm",(void*)f_6641},
{"f_4457:csi_2escm",(void*)f_4457},
{"f_4459:csi_2escm",(void*)f_4459},
{"f_5638:csi_2escm",(void*)f_5638},
{"f_5635:csi_2escm",(void*)f_5635},
{"f_5632:csi_2escm",(void*)f_5632},
{"f_1911:csi_2escm",(void*)f_1911},
{"f_1918:csi_2escm",(void*)f_1918},
{"f_4462:csi_2escm",(void*)f_4462},
{"f_5647:csi_2escm",(void*)f_5647},
{"f_5641:csi_2escm",(void*)f_5641},
{"f_5644:csi_2escm",(void*)f_5644},
{"f_6663:csi_2escm",(void*)f_6663},
{"f_6667:csi_2escm",(void*)f_6667},
{"f_6669:csi_2escm",(void*)f_6669},
{"f_4399:csi_2escm",(void*)f_4399},
{"f_1949:csi_2escm",(void*)f_1949},
{"f_6091:csi_2escm",(void*)f_6091},
{"f_3052:csi_2escm",(void*)f_3052},
{"f_2271:csi_2escm",(void*)f_2271},
{"f_6080:csi_2escm",(void*)f_6080},
{"f_6083:csi_2escm",(void*)f_6083},
{"f_6086:csi_2escm",(void*)f_6086},
{"f_5093:csi_2escm",(void*)f_5093},
{"f_6401:csi_2escm",(void*)f_6401},
{"f_3079:csi_2escm",(void*)f_3079},
{"f_1920:csi_2escm",(void*)f_1920},
{"f_2281:csi_2escm",(void*)f_2281},
{"f_6633:csi_2escm",(void*)f_6633},
{"f_6637:csi_2escm",(void*)f_6637},
{"f_3046:csi_2escm",(void*)f_3046},
{"f_3201:csi_2escm",(void*)f_3201},
{"f_3204:csi_2escm",(void*)f_3204},
{"f_3040:csi_2escm",(void*)f_3040},
{"f_3811:csi_2escm",(void*)f_3811},
{"f_6421:csi_2escm",(void*)f_6421},
{"f_1904:csi_2escm",(void*)f_1904},
{"f_6620:csi_2escm",(void*)f_6620},
{"f_3099:csi_2escm",(void*)f_3099},
{"f_1908:csi_2escm",(void*)f_1908},
{"f_6186:csi_2escm",(void*)f_6186},
{"f_6189:csi_2escm",(void*)f_6189},
{"f_3091:csi_2escm",(void*)f_3091},
{"f_5658:csi_2escm",(void*)f_5658},
{"f_3207:csi_2escm",(void*)f_3207},
{"f_5650:csi_2escm",(void*)f_5650},
{"f_5652:csi_2escm",(void*)f_5652},
{"f_6418:csi_2escm",(void*)f_6418},
{"f_6415:csi_2escm",(void*)f_6415},
{"f_5001:csi_2escm",(void*)f_5001},
{"f_6430:csi_2escm",(void*)f_6430},
{"f_3223:csi_2escm",(void*)f_3223},
{"f_6449:csi_2escm",(void*)f_6449},
{"f_3231:csi_2escm",(void*)f_3231},
{"f_3235:csi_2escm",(void*)f_3235},
{"f_4236:csi_2escm",(void*)f_4236},
{"f_6436:csi_2escm",(void*)f_6436},
{"f_6439:csi_2escm",(void*)f_6439},
{"f_3085:csi_2escm",(void*)f_3085},
{"f_3243:csi_2escm",(void*)f_3243},
{"f_4187:csi_2escm",(void*)f_4187},
{"f_3239:csi_2escm",(void*)f_3239},
{"f_5038:csi_2escm",(void*)f_5038},
{"f_6466:csi_2escm",(void*)f_6466},
{"f_5035:csi_2escm",(void*)f_5035},
{"f_3251:csi_2escm",(void*)f_3251},
{"f_4259:csi_2escm",(void*)f_4259},
{"f_3247:csi_2escm",(void*)f_3247},
{"f_2384:csi_2escm",(void*)f_2384},
{"f_6456:csi_2escm",(void*)f_6456},
{"f_3028:csi_2escm",(void*)f_3028},
{"f_4780:csi_2escm",(void*)f_4780},
{"f_4223:csi_2escm",(void*)f_4223},
{"f_4222:csi_2escm",(void*)f_4222},
{"f_3022:csi_2escm",(void*)f_3022},
{"f_4227:csi_2escm",(void*)f_4227},
{"f_4777:csi_2escm",(void*)f_4777},
{"f_2461:csi_2escm",(void*)f_2461},
{"f_2476:csi_2escm",(void*)f_2476},
{"f_2473:csi_2escm",(void*)f_2473},
{"f_3987:csi_2escm",(void*)f_3987},
{"f_3980:csi_2escm",(void*)f_3980},
{"f_4795:csi_2escm",(void*)f_4795},
{"f_4799:csi_2escm",(void*)f_4799},
{"f_2446:csi_2escm",(void*)f_2446},
{"f_2442:csi_2escm",(void*)f_2442},
{"f_3062:csi_2escm",(void*)f_3062},
{"f_5803:csi_2escm",(void*)f_5803},
{"f_5800:csi_2escm",(void*)f_5800},
{"f_2455:csi_2escm",(void*)f_2455},
{"f_2458:csi_2escm",(void*)f_2458},
{"f_5806:csi_2escm",(void*)f_5806},
{"f_3060:csi_2escm",(void*)f_3060},
{"f_5809:csi_2escm",(void*)f_5809},
{"f_1890:csi_2escm",(void*)f_1890},
{"f_3034:csi_2escm",(void*)f_3034},
{"f_2585:csi_2escm",(void*)f_2585},
{"f_2584:csi_2escm",(void*)f_2584},
{"f_2435:csi_2escm",(void*)f_2435},
{"f_2432:csi_2escm",(void*)f_2432},
{"f_2591:csi_2escm",(void*)f_2591},
{"f_2595:csi_2escm",(void*)f_2595},
{"f_5403:csi_2escm",(void*)f_5403},
{"f_4570:csi_2escm",(void*)f_4570},
{"f_3491:csi_2escm",(void*)f_3491},
{"f_2400:csi_2escm",(void*)f_2400},
{"f_2860:csi_2escm",(void*)f_2860},
{"f_2417:csi_2escm",(void*)f_2417},
{"f_2667:csi_2escm",(void*)f_2667},
{"f_2663:csi_2escm",(void*)f_2663},
{"f_1853:csi_2escm",(void*)f_1853},
{"f_2870:csi_2escm",(void*)f_2870},
{"f_1850:csi_2escm",(void*)f_1850},
{"f_5468:csi_2escm",(void*)f_5468},
{"f_2676:csi_2escm",(void*)f_2676},
{"f_2674:csi_2escm",(void*)f_2674},
{"f_1883:csi_2escm",(void*)f_1883},
{"f_1880:csi_2escm",(void*)f_1880},
{"f_5687:csi_2escm",(void*)f_5687},
{"f_4806:csi_2escm",(void*)f_4806},
{"f_4808:csi_2escm",(void*)f_4808},
{"f_2648:csi_2escm",(void*)f_2648},
{"f_2643:csi_2escm",(void*)f_2643},
{"f_2855:csi_2escm",(void*)f_2855},
{"f_2024:csi_2escm",(void*)f_2024},
{"f_5446:csi_2escm",(void*)f_5446},
{"f_4811:csi_2escm",(void*)f_4811},
{"f_5440:csi_2escm",(void*)f_5440},
{"f_4817:csi_2escm",(void*)f_4817},
{"f_2657:csi_2escm",(void*)f_2657},
{"f_2652:csi_2escm",(void*)f_2652},
{"f_1866:csi_2escm",(void*)f_1866},
{"f_6257:csi_2escm",(void*)f_6257},
{"f_6253:csi_2escm",(void*)f_6253},
{"f_2005:csi_2escm",(void*)f_2005},
{"f_2634:csi_2escm",(void*)f_2634},
{"f_3971:csi_2escm",(void*)f_3971},
{"f_2884:csi_2escm",(void*)f_2884},
{"f_6275:csi_2escm",(void*)f_6275},
{"f_6273:csi_2escm",(void*)f_6273},
{"f_2604:csi_2escm",(void*)f_2604},
{"f_2609:csi_2escm",(void*)f_2609},
{"f_1874:csi_2escm",(void*)f_1874},
{"f_1871:csi_2escm",(void*)f_1871},
{"f_6267:csi_2escm",(void*)f_6267},
{"f_6263:csi_2escm",(void*)f_6263},
{"f_2619:csi_2escm",(void*)f_2619},
{"f_3588:csi_2escm",(void*)f_3588},
{"f_3585:csi_2escm",(void*)f_3585},
{"f_6791:csi_2escm",(void*)f_6791},
{"f_5781:csi_2escm",(void*)f_5781},
{"f_3591:csi_2escm",(void*)f_3591},
{"f_6782:csi_2escm",(void*)f_6782},
{"f_5791:csi_2escm",(void*)f_5791},
{"f_6806:csi_2escm",(void*)f_6806},
{"f_5797:csi_2escm",(void*)f_5797},
{"f_5794:csi_2escm",(void*)f_5794},
{"f_6775:csi_2escm",(void*)f_6775},
{"f_6779:csi_2escm",(void*)f_6779},
{"f_6838:csi_2escm",(void*)f_6838},
{"f_6851:csi_2escm",(void*)f_6851},
{"f_3570:csi_2escm",(void*)f_3570},
{"f_2034:csi_2escm",(void*)f_2034},
{"f_6827:csi_2escm",(void*)f_6827},
{"f_2031:csi_2escm",(void*)f_2031},
{"f_2206:csi_2escm",(void*)f_2206},
{"f_6840:csi_2escm",(void*)f_6840},
{"f_6858:csi_2escm",(void*)f_6858},
{"f_6848:csi_2escm",(void*)f_6848},
{"f_3946:csi_2escm",(void*)f_3946},
{"f_3942:csi_2escm",(void*)f_3942},
{"f_2066:csi_2escm",(void*)f_2066},
{"f_3952:csi_2escm",(void*)f_3952},
{"f_5771:csi_2escm",(void*)f_5771},
{"f_5773:csi_2escm",(void*)f_5773},
{"f_6692:csi_2escm",(void*)f_6692},
{"f_2040:csi_2escm",(void*)f_2040},
{"f_2053:csi_2escm",(void*)f_2053},
{"f_5975:csi_2escm",(void*)f_5975},
{"f_2250:csi_2escm",(void*)f_2250},
{"f_2253:csi_2escm",(void*)f_2253},
{"f_5998:csi_2escm",(void*)f_5998},
{"f_2256:csi_2escm",(void*)f_2256},
{"f_2259:csi_2escm",(void*)f_2259},
{"f_4892:csi_2escm",(void*)f_4892},
{"f_4895:csi_2escm",(void*)f_4895},
{"f_2262:csi_2escm",(void*)f_2262},
{"f_3195:csi_2escm",(void*)f_3195},
{"f_3198:csi_2escm",(void*)f_3198},
{"f_6679:csi_2escm",(void*)f_6679},
{"f_4880:csi_2escm",(void*)f_4880},
{"f_4883:csi_2escm",(void*)f_4883},
{"f_5482:csi_2escm",(void*)f_5482},
{"f_4898:csi_2escm",(void*)f_4898},
{"f_2237:csi_2escm",(void*)f_2237},
{"f_3161:csi_2escm",(void*)f_3161},
{"f_4874:csi_2escm",(void*)f_4874},
{"f_4886:csi_2escm",(void*)f_4886},
{"f_4889:csi_2escm",(void*)f_4889},
{"f_5983:csi_2escm",(void*)f_5983},
{"f_3170:csi_2escm",(void*)f_3170},
{"f_3178:csi_2escm",(void*)f_3178},
{"f_3144:csi_2escm",(void*)f_3144},
{"f_3143:csi_2escm",(void*)f_3143},
{"f_3140:csi_2escm",(void*)f_3140},
{"f_3148:csi_2escm",(void*)f_3148},
{"f_3120:csi_2escm",(void*)f_3120},
{"f_3123:csi_2escm",(void*)f_3123},
{"f_3125:csi_2escm",(void*)f_3125},
{"f_3542:csi_2escm",(void*)f_3542},
{"f_5748:csi_2escm",(void*)f_5748},
{"f_3133:csi_2escm",(void*)f_3133},
{"f_2749:csi_2escm",(void*)f_2749},
{"f_5741:csi_2escm",(void*)f_5741},
{"f_2740:csi_2escm",(void*)f_2740},
{"f_4951:csi_2escm",(void*)f_4951},
{"f_3103:csi_2escm",(void*)f_3103},
{"f_3102:csi_2escm",(void*)f_3102},
{"f_4957:csi_2escm",(void*)f_4957},
{"f_5750:csi_2escm",(void*)f_5750},
{"f_4954:csi_2escm",(void*)f_4954},
{"f_2711:csi_2escm",(void*)f_2711},
{"f_5767:csi_2escm",(void*)f_5767},
{"f_3111:csi_2escm",(void*)f_3111},
{"f_2729:csi_2escm",(void*)f_2729},
{"f_3113:csi_2escm",(void*)f_3113},
{"f_5760:csi_2escm",(void*)f_5760},
{"f_4927:csi_2escm",(void*)f_4927},
{"f_3723:csi_2escm",(void*)f_3723},
{"f_3117:csi_2escm",(void*)f_3117},
{"f_5900:csi_2escm",(void*)f_5900},
{"f_3500:csi_2escm",(void*)f_3500},
{"f_2805:csi_2escm",(void*)f_2805},
{"f_4508:csi_2escm",(void*)f_4508},
{"f_5703:csi_2escm",(void*)f_5703},
{"f_4948:csi_2escm",(void*)f_4948},
{"f_4945:csi_2escm",(void*)f_4945},
{"f_3513:csi_2escm",(void*)f_3513},
{"f_3510:csi_2escm",(void*)f_3510},
{"f_4877:csi_2escm",(void*)f_4877},
{"f_5958:csi_2escm",(void*)f_5958},
{"f_2182:csi_2escm",(void*)f_2182},
{"f_5715:csi_2escm",(void*)f_5715},
{"f_5929:csi_2escm",(void*)f_5929},
{"f_4527:csi_2escm",(void*)f_4527},
{"f_3757:csi_2escm",(void*)f_3757},
{"f_2192:csi_2escm",(void*)f_2192},
{"f_5728:csi_2escm",(void*)f_5728},
{"f_5721:csi_2escm",(void*)f_5721},
{"f_3762:csi_2escm",(void*)f_3762},
{"f_4537:csi_2escm",(void*)f_4537},
{"f_4491:csi_2escm",(void*)f_4491},
{"f_4932:csi_2escm",(void*)f_4932},
{"f_5734:csi_2escm",(void*)f_5734},
{"f_5943:csi_2escm",(void*)f_5943},
{"f_3730:csi_2escm",(void*)f_3730},
{"f_2733:csi_2escm",(void*)f_2733},
{"f_3739:csi_2escm",(void*)f_3739},
{"f_2940:csi_2escm",(void*)f_2940},
{"f_4484:csi_2escm",(void*)f_4484},
{"f_3742:csi_2escm",(void*)f_3742},
{"f_3745:csi_2escm",(void*)f_3745},
{"f_5245:csi_2escm",(void*)f_5245},
{"f_6177:csi_2escm",(void*)f_6177},
{"f_6174:csi_2escm",(void*)f_6174},
{"f_1841:csi_2escm",(void*)f_1841},
{"f_5255:csi_2escm",(void*)f_5255},
{"f_1847:csi_2escm",(void*)f_1847},
{"f_1844:csi_2escm",(void*)f_1844},
{"f_4565:csi_2escm",(void*)f_4565},
{"f7530:csi_2escm",(void*)f7530},
{"f_6165:csi_2escm",(void*)f_6165},
{"f_6162:csi_2escm",(void*)f_6162},
{"f_2936:csi_2escm",(void*)f_2936},
{"f_2930:csi_2escm",(void*)f_2930},
{"f_6810:csi_2escm",(void*)f_6810},
{"f_6159:csi_2escm",(void*)f_6159},
{"f_6156:csi_2escm",(void*)f_6156},
{"f_6153:csi_2escm",(void*)f_6153},
{"f_6480:csi_2escm",(void*)f_6480},
{"f_6814:csi_2escm",(void*)f_6814},
{"f_3366:csi_2escm",(void*)f_3366},
{"f_4291:csi_2escm",(void*)f_4291},
{"f_4177:csi_2escm",(void*)f_4177},
{"f_4147:csi_2escm",(void*)f_4147},
{"f_6345:csi_2escm",(void*)f_6345},
{"f_5190:csi_2escm",(void*)f_5190},
{"f_5193:csi_2escm",(void*)f_5193},
{"f_6104:csi_2escm",(void*)f_6104},
{"f_6107:csi_2escm",(void*)f_6107},
{"f_6378:csi_2escm",(void*)f_6378},
{"f_5163:csi_2escm",(void*)f_5163},
{"f_6077:csi_2escm",(void*)f_6077},
{"f_6071:csi_2escm",(void*)f_6071},
{"f_3383:csi_2escm",(void*)f_3383},
{"f_6355:csi_2escm",(void*)f_6355},
{"f_6067:csi_2escm",(void*)f_6067},
{"f_2792:csi_2escm",(void*)f_2792},
{"f_5183:csi_2escm",(void*)f_5183},
{"f_3310:csi_2escm",(void*)f_3310},
{"f_5186:csi_2escm",(void*)f_5186},
{"f_5239:csi_2escm",(void*)f_5239},
{"f_5230:csi_2escm",(void*)f_5230},
{"f_6141:csi_2escm",(void*)f_6141},
{"f_5205:csi_2escm",(void*)f_5205},
{"f_4094:csi_2escm",(void*)f_4094},
{"f_5380:csi_2escm",(void*)f_5380},
{"f_4125:csi_2escm",(void*)f_4125},
{"f_5385:csi_2escm",(void*)f_5385},
{"f_4128:csi_2escm",(void*)f_4128},
{"f_2785:csi_2escm",(void*)f_2785},
{"f_6122:csi_2escm",(void*)f_6122},
{"f_5391:csi_2escm",(void*)f_5391},
{"f_5267:csi_2escm",(void*)f_5267},
{"f_4088:csi_2escm",(void*)f_4088},
{"f_6391:csi_2escm",(void*)f_6391},
{"f_5279:csi_2escm",(void*)f_5279},
{"f_5276:csi_2escm",(void*)f_5276},
{"f_5273:csi_2escm",(void*)f_5273},
{"f_5270:csi_2escm",(void*)f_5270},
{"f_2761:csi_2escm",(void*)f_2761},
{"f_3320:csi_2escm",(void*)f_3320},
{"f_4113:csi_2escm",(void*)f_4113},
{"f_3335:csi_2escm",(void*)f_3335},
{"f_4168:csi_2escm",(void*)f_4168},
{"f_3337:csi_2escm",(void*)f_3337},
{"f_4723:csi_2escm",(void*)f_4723},
{"f_6526:csi_2escm",(void*)f_6526},
{"f_3305:csi_2escm",(void*)f_3305},
{"f_4139:csi_2escm",(void*)f_4139},
{"f_6871:csi_2escm",(void*)f_6871},
{"f_6517:csi_2escm",(void*)f_6517},
{"f_3778:csi_2escm",(void*)f_3778},
{"f_3775:csi_2escm",(void*)f_3775},
{"f_4100:csi_2escm",(void*)f_4100},
{"f_6304:csi_2escm",(void*)f_6304},
{"f_6016:csi_2escm",(void*)f_6016},
{"f_3772:csi_2escm",(void*)f_3772},
{"f_6862:csi_2escm",(void*)f_6862},
{"f_5152:csi_2escm",(void*)f_5152},
{"f_6509:csi_2escm",(void*)f_6509},
{"f_5150:csi_2escm",(void*)f_5150},
{"f_5377:csi_2escm",(void*)f_5377},
{"f_2985:csi_2escm",(void*)f_2985},
{"f_2982:csi_2escm",(void*)f_2982},
{"f_3787:csi_2escm",(void*)f_3787},
{"f_6339:csi_2escm",(void*)f_6339},
{"f_6006:csi_2escm",(void*)f_6006},
{"f_4688:csi_2escm",(void*)f_4688},
{"f_4757:csi_2escm",(void*)f_4757},
{"f_2773:csi_2escm",(void*)f_2773},
{"f_4917:csi_2escm",(void*)f_4917},
{"f_2993:csi_2escm",(void*)f_2993},
{"f_4685:csi_2escm",(void*)f_4685},
{"f_6368:csi_2escm",(void*)f_6368},
{"f_6035:csi_2escm",(void*)f_6035},
{"f_4767:csi_2escm",(void*)f_4767},
{"f_6037:csi_2escm",(void*)f_6037},
{"f_5315:csi_2escm",(void*)f_5315},
{"f_2962:csi_2escm",(void*)f_2962},
{"f_4672:csi_2escm",(void*)f_4672},
{"f_6027:csi_2escm",(void*)f_6027},
{"f_6310:csi_2escm",(void*)f_6310},
{"f_6553:csi_2escm",(void*)f_6553},
{"f_2976:csi_2escm",(void*)f_2976},
{"f_5322:csi_2escm",(void*)f_5322},
{"f_2973:csi_2escm",(void*)f_2973},
{"f_5324:csi_2escm",(void*)f_5324},
{"f_2354:csi_2escm",(void*)f_2354},
{"f_6544:csi_2escm",(void*)f_6544},
{"f_4901:csi_2escm",(void*)f_4901},
{"f_4904:csi_2escm",(void*)f_4904},
{"f_6541:csi_2escm",(void*)f_6541},
{"f_5334:csi_2escm",(void*)f_5334},
{"f_5507:csi_2escm",(void*)f_5507},
{"f_2328:csi_2escm",(void*)f_2328},
{"f_5503:csi_2escm",(void*)f_5503},
{"f_2321:csi_2escm",(void*)f_2321},
{"f_6532:csi_2escm",(void*)f_6532},
{"f_6535:csi_2escm",(void*)f_6535},
{"f_6538:csi_2escm",(void*)f_6538},
{"toplevel:csi_2escm",(void*)C_toplevel},
{"f_2956:csi_2escm",(void*)f_2956},
{"f_2334:csi_2escm",(void*)f_2334},
{"f_6720:csi_2escm",(void*)f_6720},
{"f_2488:csi_2escm",(void*)f_2488},
{"f_5511:csi_2escm",(void*)f_5511},
{"f_2491:csi_2escm",(void*)f_2491},
{"f_6712:csi_2escm",(void*)f_6712},
{"f_2306:csi_2escm",(void*)f_2306},
{"f_2560:csi_2escm",(void*)f_2560},
{"f_1974:csi_2escm",(void*)f_1974},
{"f_2575:csi_2escm",(void*)f_2575},
{"f_6475:csi_2escm",(void*)f_6475},
{"f_6472:csi_2escm",(void*)f_6472},
{"f_5559:csi_2escm",(void*)f_5559},
{"f_5551:csi_2escm",(void*)f_5551},
{"f_2545:csi_2escm",(void*)f_2545},
{"f_2542:csi_2escm",(void*)f_2542},
{"f_1959:csi_2escm",(void*)f_1959},
{"f_1957:csi_2escm",(void*)f_1957},
{"f_2550:csi_2escm",(void*)f_2550},
{"f_1987:csi_2escm",(void*)f_1987},
{"f_2680:csi_2escm",(void*)f_2680},
{"f_6732:csi_2escm",(void*)f_6732},
{"f_2695:csi_2escm",(void*)f_2695},
{"f_2503:csi_2escm",(void*)f_2503},
{"f_2509:csi_2escm",(void*)f_2509},
{"f_2506:csi_2escm",(void*)f_2506},
{"f_2512:csi_2escm",(void*)f_2512},
{"f_2103:csi_2escm",(void*)f_2103},
{"f_2100:csi_2escm",(void*)f_2100},
{"f_2117:csi_2escm",(void*)f_2117},
{"f_2114:csi_2escm",(void*)f_2114},
{"f_2110:csi_2escm",(void*)f_2110},
{"f_5876:csi_2escm",(void*)f_5876},
{"f_5884:csi_2escm",(void*)f_5884},
{"f_5881:csi_2escm",(void*)f_5881},
{"f_2075:csi_2escm",(void*)f_2075},
{"f_2079:csi_2escm",(void*)f_2079},
{"f_5863:csi_2escm",(void*)f_5863},
{"f_4991:csi_2escm",(void*)f_4991},
{"f_4364:csi_2escm",(void*)f_4364},
{"f_2145:csi_2escm",(void*)f_2145},
{"f_2142:csi_2escm",(void*)f_2142},
{"f_5590:csi_2escm",(void*)f_5590},
{"f_2820:csi_2escm",(void*)f_2820},
{"f_3878:csi_2escm",(void*)f_3878},
{"f_4370:csi_2escm",(void*)f_4370},
{"f_2159:csi_2escm",(void*)f_2159},
{"f_2833:csi_2escm",(void*)f_2833},
{"f_2123:csi_2escm",(void*)f_2123},
{"f_5836:csi_2escm",(void*)f_5836},
{"f_5830:csi_2escm",(void*)f_5830},
{"f_2132:csi_2escm",(void*)f_2132},
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
S|  map		7
S|  for-each		11
S|  printf		4
o|eliminated procedure checks: 140 
o|eliminated procedure checks: 1 
o|specializations:
o|  7 (string=? string string)
o|  1 (set-cdr! pair *)
o|  2 (cddr (pair * pair))
o|  3 (cadr (pair * pair))
o|  1 (min fixnum fixnum)
o|  1 (memq * list)
o|  22 (cdr pair)
o|  1 (current-output-port)
o|  8 (car pair)
o|  2 (zero? fixnum)
o|  3 (##sys#check-list (or pair list) *)
o|  29 (eqv? * (not float))
o|  4 (##sys#check-output-port * * *)
o|  1 (> fixnum fixnum)
o|  4 (string-append string string)
o|  1 (make-string fixnum)
o|safe globals: (##sys#repl-print-length-limit constant8 constant3 constant0) 
o|Removed `not' forms: 8 
o|substituted constant variable: constant3 
o|substituted constant variable: constant0 
o|inlining procedure: k1922 
o|inlining procedure: k1922 
o|inlining procedure: k1964 
o|inlining procedure: k1964 
o|inlining procedure: k1982 
o|inlining procedure: k1982 
o|inlining procedure: k2026 
o|inlining procedure: k2026 
o|substituted constant variable: a2042 
o|inlining procedure: k2080 
o|inlining procedure: k2095 
o|contracted procedure: "(csi.scm:206) _getcwd60" 
o|inlining procedure: k2095 
o|inlining procedure: k2134 
o|inlining procedure: k2134 
o|substituted constant variable: a2165 
o|contracted procedure: "(csi.scm:205) string-index71" 
o|inlining procedure: k2055 
o|inlining procedure: k2055 
o|inlining procedure: k2080 
o|substituted constant variable: a2175 
o|inlining procedure: k2239 
o|propagated global variable: out123127 ##sys#standard-output 
o|substituted constant variable: a2246 
o|substituted constant variable: a2247 
o|inlining procedure: k2239 
o|propagated global variable: out123127 ##sys#standard-output 
o|inlining procedure: k2286 
o|inlining procedure: k2286 
o|inlining procedure: k2323 
o|inlining procedure: k2323 
o|contracted procedure: "(csi.scm:273) tty-input?" 
o|inlining procedure: k2313 
o|inlining procedure: k2313 
o|inlining procedure: k2348 
o|inlining procedure: k2348 
o|inlining procedure: k2386 
o|inlining procedure: k2386 
o|inlining procedure: k2407 
o|contracted procedure: "(csi.scm:305) g199200" 
o|inlining procedure: k2407 
o|inlining procedure: k2447 
o|inlining procedure: k2447 
o|consed rest parameter at call site: "(csi.scm:325) describe" 2 
o|inlining procedure: k2480 
o|consed rest parameter at call site: "(csi.scm:329) dump" 2 
o|inlining procedure: k2480 
o|consed rest parameter at call site: "(csi.scm:335) dump" 2 
o|inlining procedure: k2516 
o|consed rest parameter at call site: "(csi.scm:336) report" 1 
o|inlining procedure: k2516 
o|inlining procedure: k2534 
o|inlining procedure: k2552 
o|inlining procedure: k2552 
o|inlining procedure: k2534 
o|inlining procedure: k2611 
o|inlining procedure: k2611 
o|inlining procedure: k2635 
o|inlining procedure: k2635 
o|inlining procedure: k2690 
o|consed rest parameter at call site: "(csi.scm:354) describe" 2 
o|inlining procedure: k2690 
o|inlining procedure: k2703 
o|contracted procedure: k2715 
o|inlining procedure: k2703 
o|contracted procedure: "(csi.scm:363) history-clear" 
o|inlining procedure: k2753 
o|inlining procedure: k2753 
o|inlining procedure: k2777 
o|inlining procedure: k2777 
o|inlining procedure: k2806 
o|inlining procedure: k2806 
o|inlining procedure: k2862 
o|contracted procedure: "(csi.scm:404) g294301" 
o|inlining procedure: k2839 
o|inlining procedure: k2839 
o|inlining procedure: k2862 
o|propagated global variable: g300302 command-table 
o|substituted constant variable: a2889 
o|substituted constant variable: a2891 
o|substituted constant variable: a2893 
o|substituted constant variable: a2895 
o|substituted constant variable: a2897 
o|substituted constant variable: a2899 
o|substituted constant variable: a2901 
o|substituted constant variable: a2903 
o|substituted constant variable: a2905 
o|substituted constant variable: a2907 
o|substituted constant variable: a2909 
o|substituted constant variable: a2911 
o|substituted constant variable: a2913 
o|substituted constant variable: a2915 
o|substituted constant variable: a2917 
o|substituted constant variable: a2919 
o|substituted constant variable: a2921 
o|substituted constant variable: a2923 
o|substituted constant variable: a2925 
o|merged explicitly consed rest parameter: port387 
o|inlining procedure: k3162 
o|inlining procedure: k3162 
o|inlining procedure: k3205 
o|inlining procedure: k3205 
o|inlining procedure: k3312 
o|inlining procedure: k3312 
o|inlining procedure: k3339 
o|inlining procedure: k3339 
o|propagated global variable: g408412 ##sys#features 
o|merged explicitly consed rest parameter: tmp492494 
o|inlining procedure: k3473 
o|inlining procedure: k3473 
o|inlining procedure: k3502 
o|inlining procedure: k3532 
o|inlining procedure: k3532 
o|inlining procedure: k3502 
o|inlining procedure: k3589 
o|inlining procedure: k3589 
o|inlining procedure: k3613 
o|inlining procedure: k3613 
o|inlining procedure: k3631 
o|inlining procedure: k3631 
o|inlining procedure: k3649 
o|inlining procedure: k3649 
o|inlining procedure: k3682 
o|inlining procedure: k3682 
o|inlining procedure: k3700 
o|inlining procedure: k3700 
o|inlining procedure: k3718 
o|inlining procedure: k3718 
o|inlining procedure: k3749 
o|inlining procedure: k3749 
o|inlining procedure: k3764 
o|inlining procedure: k3764 
o|inlining procedure: k3809 
o|inlining procedure: k3809 
o|inlining procedure: k3827 
o|inlining procedure: k3849 
o|inlining procedure: k3849 
o|contracted procedure: k3873 
o|inlining procedure: k3870 
o|inlining procedure: k3870 
o|inlining procedure: k3827 
o|inlining procedure: k3914 
o|inlining procedure: k3914 
o|inlining procedure: k3947 
o|inlining procedure: k3947 
o|inlining procedure: k3996 
o|inlining procedure: k3996 
o|inlining procedure: k4008 
o|inlining procedure: k4008 
o|inlining procedure: k4020 
o|inlining procedure: k4020 
o|inlining procedure: k4032 
o|inlining procedure: k4032 
o|inlining procedure: k4044 
o|inlining procedure: k4044 
o|substituted constant variable: a4057 
o|substituted constant variable: a4059 
o|substituted constant variable: a4061 
o|substituted constant variable: a4063 
o|substituted constant variable: a4065 
o|substituted constant variable: a4067 
o|substituted constant variable: a4069 
o|substituted constant variable: a4071 
o|substituted constant variable: a4073 
o|substituted constant variable: a4075 
o|inlining procedure: k4076 
o|inlining procedure: k4076 
o|inlining procedure: k4104 
o|inlining procedure: k4104 
o|inlining procedure: k4141 
o|inlining procedure: k4141 
o|inlining procedure: k4179 
o|inlining procedure: k4179 
o|inlining procedure: k4238 
o|inlining procedure: k4238 
o|inlining procedure: k4214 
o|inlining procedure: k4293 
o|inlining procedure: k4293 
o|inlining procedure: k4214 
o|inlining procedure: k4329 
o|inlining procedure: k4329 
o|inlining procedure: k4372 
o|inlining procedure: k4372 
o|contracted procedure: "(csi.scm:643) improper-pairs?" 
o|contracted procedure: k3423 
o|inlining procedure: k3420 
o|inlining procedure: k3420 
o|contracted procedure: "(csi.scm:643) circular-list?" 
o|inlining procedure: k3385 
o|inlining procedure: k3405 
o|inlining procedure: k3405 
o|inlining procedure: k3385 
o|merged explicitly consed rest parameter: len-out683 
o|inlining procedure: k4464 
o|inlining procedure: k4464 
o|inlining procedure: k4470 
o|inlining procedure: k4470 
o|inlining procedure: k4496 
o|inlining procedure: k4496 
o|inlining procedure: k4522 
o|inlining procedure: k4522 
o|contracted procedure: k4555 
o|inlining procedure: k4575 
o|inlining procedure: k4575 
o|inlining procedure: k4616 
o|inlining procedure: k4616 
o|inlining procedure: k4640 
o|inlining procedure: k4640 
o|inlining procedure: k4674 
o|inlining procedure: k4674 
o|inlining procedure: k4725 
o|inlining procedure: k4743 
o|inlining procedure: k4743 
o|inlining procedure: k4759 
o|inlining procedure: k4759 
o|inlining procedure: k4725 
o|inlining procedure: k4845 
o|propagated global variable: out795799 ##sys#standard-output 
o|substituted constant variable: a4870 
o|substituted constant variable: a4871 
o|inlining procedure: k4845 
o|inlining procedure: k4919 
o|inlining procedure: k4919 
o|inlining procedure: k4934 
o|propagated global variable: out837841 ##sys#standard-output 
o|substituted constant variable: a4941 
o|substituted constant variable: a4942 
o|inlining procedure: k4934 
o|propagated global variable: out837841 ##sys#standard-output 
o|inlining procedure: k4993 
o|inlining procedure: k4993 
o|propagated global variable: out808812 ##sys#standard-output 
o|substituted constant variable: a5031 
o|substituted constant variable: a5032 
o|propagated global variable: out808812 ##sys#standard-output 
o|inlining procedure: k5047 
o|inlining procedure: k5047 
o|inlining procedure: k5061 
o|propagated global variable: out795799 ##sys#standard-output 
o|inlining procedure: k5061 
o|inlining procedure: k5067 
o|inlining procedure: k5067 
o|propagated global variable: tmp776778 ##sys#repl-recent-call-chain 
o|propagated global variable: tmp776778 ##sys#repl-recent-call-chain 
o|inlining procedure: k5085 
o|inlining procedure: k5085 
o|inlining procedure: k5119 
o|inlining procedure: k5119 
o|inlining procedure: k5176 
o|inlining procedure: k5207 
o|inlining procedure: k5207 
o|inlining procedure: k5247 
o|inlining procedure: k5247 
o|inlining procedure: k5326 
o|inlining procedure: k5326 
o|inlining procedure: k5176 
o|inlining procedure: k5369 
o|inlining procedure: k5369 
o|propagated global variable: tmp889891 ##sys#repl-recent-call-chain 
o|propagated global variable: tmp889891 ##sys#repl-recent-call-chain 
o|inlining procedure: k5393 
o|inlining procedure: k5405 
o|inlining procedure: k5405 
o|inlining procedure: k5393 
o|inlining procedure: k5448 
o|inlining procedure: k5448 
o|inlining procedure: k5463 
o|inlining procedure: k5483 
o|inlining procedure: k5513 
o|contracted procedure: "(csi.scm:956) g10671076" 
o|inlining procedure: k5513 
o|inlining procedure: k5483 
o|contracted procedure: "(csi.scm:955) findall" 
o|substituted constant variable: constant1038 
o|inlining procedure: k5595 
o|inlining procedure: k5595 
o|inlining procedure: k5463 
o|inlining procedure: k5565 
o|substituted constant variable: constant1045 
o|inlining procedure: k5565 
o|contracted procedure: "(csi.scm:1133) run" 
o|inlining procedure: k5668 
o|inlining procedure: k5668 
o|inlining procedure: k5663 
o|inlining procedure: k5663 
o|merged explicitly consed rest parameter: tmp12151217 
o|inlining procedure: k5752 
o|inlining procedure: k5752 
o|inlining procedure: k5865 
o|inlining procedure: k5865 
o|inlining procedure: k5908 
o|inlining procedure: k5908 
o|substituted constant variable: a5951 
o|inlining procedure: k5948 
o|consed rest parameter at call site: "(csi.scm:1098) evalstring1195" 2 
o|inlining procedure: k5948 
o|substituted constant variable: a5968 
o|consed rest parameter at call site: "(csi.scm:1101) evalstring1195" 2 
o|substituted constant variable: a5991 
o|inlining procedure: k5988 
o|consed rest parameter at call site: "(csi.scm:1104) evalstring1195" 2 
o|inlining procedure: k5988 
o|inlining procedure: k6043 
o|inlining procedure: k6043 
o|inlining procedure: k6061 
o|inlining procedure: k6093 
o|inlining procedure: k6093 
o|propagated global variable: g14101411 pretty-print 
o|inlining procedure: k6061 
o|substituted constant variable: a6130 
o|substituted constant variable: a6132 
o|substituted constant variable: a6134 
o|substituted constant variable: a6136 
o|substituted constant variable: constant1119 
o|substituted constant variable: constant1110 
o|contracted procedure: "(csi.scm:1079) loadinit1194" 
o|inlining procedure: k5704 
o|contracted procedure: k5710 
o|inlining procedure: k5716 
o|inlining procedure: k5716 
o|inlining procedure: k5704 
o|inlining procedure: k6148 
o|inlining procedure: k6148 
o|inlining procedure: k6175 
o|inlining procedure: k6175 
o|inlining procedure: k6187 
o|inlining procedure: k6187 
o|contracted procedure: k6199 
o|inlining procedure: k6196 
o|inlining procedure: k6214 
o|inlining procedure: k6214 
o|inlining procedure: k6196 
o|inlining procedure: k6277 
o|inlining procedure: k6277 
o|inlining procedure: k6312 
o|inlining procedure: k6312 
o|inlining procedure: k6347 
o|inlining procedure: k6347 
o|inlining procedure: k6370 
o|inlining procedure: k6370 
o|inlining procedure: k6393 
o|inlining procedure: k6393 
o|inlining procedure: k6437 
o|inlining procedure: k6437 
o|contracted procedure: "(csi.scm:1028) print-usage" 
o|inlining procedure: k6482 
o|inlining procedure: k6482 
o|inlining procedure: k6518 
o|inlining procedure: k6518 
o|inlining procedure: k6521 
o|inlining procedure: k6521 
o|inlining procedure: k6527 
o|inlining procedure: k6527 
o|inlining procedure: k6548 
o|inlining procedure: k6548 
o|substituted constant variable: a6568 
o|inlining procedure: k6588 
o|inlining procedure: k6588 
o|inlining procedure: k6624 
o|inlining procedure: k6624 
o|contracted procedure: "(csi.scm:977) parse-option-string" 
o|inlining procedure: k2995 
o|contracted procedure: "(csi.scm:446) g340349" 
o|inlining procedure: k2965 
o|inlining procedure: k2965 
o|inlining procedure: k2995 
o|inlining procedure: k3064 
o|inlining procedure: k3064 
o|inlining procedure: k6674 
o|inlining procedure: k6674 
o|inlining procedure: k6758 
o|inlining procedure: k6758 
o|contracted procedure: k6786 
o|inlining procedure: k6783 
o|contracted procedure: k6798 
o|inlining procedure: k6807 
o|inlining procedure: k6807 
o|inlining procedure: k6783 
o|inlining procedure: k6849 
o|inlining procedure: k6849 
o|substituted constant variable: a6859 
o|inlining procedure: k6863 
o|inlining procedure: k6863 
o|replaced variables: 921 
o|removed binding forms: 361 
o|removed side-effect free assignment to unused variable: constant0 
o|removed side-effect free assignment to unused variable: constant3 
o|substituted constant variable: int6267 
o|substituted constant variable: r21356884 
o|substituted constant variable: r20566885 
o|substituted constant variable: r20816887 
o|contracted procedure: "(csi.scm:366) history-show" 
o|propagated global variable: out123127 ##sys#standard-output 
o|contracted procedure: "(csi.scm:372) select-frame" 
o|contracted procedure: "(csi.scm:375) copy-from-frame" 
o|converted assignments to bindings: (fail904) 
o|converted assignments to bindings: (compare899) 
o|substituted constant variable: r53707085 
o|converted assignments to bindings: (shorten390) 
o|substituted constant variable: r35336951 
o|substituted constant variable: r35336951 
o|substituted constant variable: r35336953 
o|substituted constant variable: r35336953 
o|inlining procedure: k3661 
o|inlining procedure: k3589 
o|inlining procedure: k3589 
o|removed call to pure procedure with unused result: "(csi.scm:657) size" 
o|substituted constant variable: r39976996 
o|substituted constant variable: r39976996 
o|inlining procedure: k3996 
o|inlining procedure: k3996 
o|substituted constant variable: r40097000 
o|inlining procedure: k3996 
o|inlining procedure: k3996 
o|substituted constant variable: r40217002 
o|inlining procedure: k3996 
o|inlining procedure: k3996 
o|substituted constant variable: r40337004 
o|inlining procedure: k3996 
o|inlining procedure: k3996 
o|substituted constant variable: r40457006 
o|inlining procedure: k3996 
o|inlining procedure: k3996 
o|substituted constant variable: r34217027 
o|substituted constant variable: r33867031 
o|converted assignments to bindings: (descseq500) 
o|converted assignments to bindings: (bestlen701) 
o|converted assignments to bindings: (justify724) 
o|propagated global variable: out795799 ##sys#standard-output 
o|propagated global variable: out837841 ##sys#standard-output 
o|propagated global variable: out808812 ##sys#standard-output 
o|substituted constant variable: r50487062 
o|substituted constant variable: r50487062 
o|substituted constant variable: r50487064 
o|substituted constant variable: r50487064 
o|substituted constant variable: r50627066 
o|substituted constant variable: r50627066 
o|substituted constant variable: r50627068 
o|substituted constant variable: r50627068 
o|substituted constant variable: r50687071 
o|converted assignments to bindings: (prin1773) 
o|substituted constant variable: r53947089 
o|removed side-effect free assignment to unused variable: constant1038 
o|removed side-effect free assignment to unused variable: constant1045 
o|substituted constant variable: r54497090 
o|substituted constant variable: clist1096 
o|substituted constant variable: r55667101 
o|removed side-effect free assignment to unused variable: constant1110 
o|removed side-effect free assignment to unused variable: constant1119 
o|substituted constant variable: r56647105 
o|substituted constant variable: r60447118 
o|substituted constant variable: r60447118 
o|substituted constant variable: r60627124 
o|substituted constant variable: r60627124 
o|substituted constant variable: r57057129 
o|substituted constant variable: r65197176 
o|substituted constant variable: r65197176 
o|substituted constant variable: r66257187 
o|substituted constant variable: r67597197 
o|substituted constant variable: r68507204 
o|substituted constant variable: r68507204 
o|converted assignments to bindings: (addext70) 
o|simplifications: ((let . 8)) 
o|replaced variables: 20 
o|removed binding forms: 929 
o|inlining procedure: k1961 
o|inlining procedure: k5228 
o|contracted procedure: k3933 
o|inlining procedure: k4244 
o|inlining procedure: k5898 
o|inlining procedure: k5898 
o|inlining procedure: k5898 
o|inlining procedure: k5898 
o|inlining procedure: k5898 
o|inlining procedure: k5898 
o|inlining procedure: k5898 
o|inlining procedure: k6105 
o|inlining procedure: k6416 
o|inlining procedure: k6579 
o|inlining procedure: k6579 
o|replaced variables: 14 
o|removed binding forms: 91 
o|substituted constant variable: r19627397 
o|substituted constant variable: r19627397 
o|substituted constant variable: r19627397 
o|substituted constant variable: r39977272 
o|substituted constant variable: r39977274 
o|substituted constant variable: r39977276 
o|substituted constant variable: r39977278 
o|substituted constant variable: r39977280 
o|substituted constant variable: r39977282 
o|substituted constant variable: r39977284 
o|substituted constant variable: r39977286 
o|substituted constant variable: r39977288 
o|inlining procedure: k6046 
o|replaced variables: 1 
o|removed binding forms: 27 
o|removed conditional forms: 1 
o|substituted constant variable: r60477616 
o|removed binding forms: 11 
o|removed conditional forms: 1 
o|removed binding forms: 1 
o|simplifications: ((if . 40) (##core#call . 544)) 
o|  call simplifications:
o|    make-vector
o|    ##sys#pair?	2
o|    ##sys#eq?
o|    ##sys#cdr	4
o|    ##sys#car	2
o|    ##sys#cons	11
o|    set-car!
o|    call-with-values
o|    void
o|    member	9
o|    string->list
o|    string
o|    equal?	3
o|    fxmod
o|    write-char	7
o|    ##sys#immediate?	2
o|    ##sys#permanent?
o|    char?
o|    fixnum?	2
o|    flonum?
o|    vector?
o|    list?
o|    procedure?
o|    ##sys#pointer?	2
o|    ##sys#generic-structure?	2
o|    cdr	15
o|    caar
o|    cdar
o|    fx=	3
o|    atom?
o|    memq	3
o|    cddr	3
o|    integer->char	2
o|    char->integer
o|    ##sys#setslot	9
o|    =
o|    -
o|    <=
o|    add1	2
o|    +
o|    *
o|    /
o|    eof-object?	4
o|    caddr
o|    symbol?	3
o|    string?	5
o|    ##sys#structure?	4
o|    string-length	5
o|    fxmin
o|    string=?	6
o|    number?	2
o|    not	4
o|    fx<	4
o|    length	4
o|    list-ref	2
o|    >=	2
o|    eq?	43
o|    apply	5
o|    ##sys#call-with-values	5
o|    ##sys#apply	2
o|    ##sys#check-list	17
o|    cadr	13
o|    car	19
o|    ##sys#check-symbol	2
o|    ##sys#check-string
o|    assq	4
o|    cons	16
o|    list	7
o|    set-cdr!	2
o|    ##sys#fudge	6
o|    inexact->exact
o|    fx<=
o|    vector-ref	8
o|    null?	21
o|    ##sys#void	20
o|    fx*
o|    vector-set!
o|    fx>=	15
o|    fx+	20
o|    pair?	32
o|    ##sys#slot	80
o|    ##sys#foreign-block-argument
o|    ##sys#foreign-fixnum-argument
o|    ##sys#size	11
o|    sub1
o|    string-ref	4
o|    fx>	6
o|    char=?	8
o|    char-whitespace?
o|    fx-	11
o|    ##sys#list	4
o|contracted procedure: k1859 
o|contracted procedure: k1925 
o|contracted procedure: k1928 
o|contracted procedure: k1939 
o|contracted procedure: k1961 
o|contracted procedure: k1998 
o|contracted procedure: k1976 
o|contracted procedure: k1979 
o|contracted procedure: k1991 
o|contracted procedure: k2172 
o|contracted procedure: k2083 
o|contracted procedure: k2013 
o|contracted procedure: k2017 
o|contracted procedure: k2137 
o|contracted procedure: k2153 
o|contracted procedure: k2162 
o|contracted procedure: k2046 
o|contracted procedure: k2058 
o|contracted procedure: k2071 
o|contracted procedure: k2168 
o|contracted procedure: k2177 
o|contracted procedure: k2211 
o|contracted procedure: k2184 
o|contracted procedure: k2187 
o|contracted procedure: k2193 
o|contracted procedure: k2197 
o|contracted procedure: k2200 
o|contracted procedure: k2208 
o|contracted procedure: k2283 
o|contracted procedure: k2298 
o|contracted procedure: k2289 
o|contracted procedure: k2310 
o|contracted procedure: k2377 
o|contracted procedure: k2336 
o|contracted procedure: k2339 
o|contracted procedure: k2342 
o|contracted procedure: k2345 
o|contracted procedure: k2360 
o|contracted procedure: k2371 
o|contracted procedure: k2367 
o|contracted procedure: k2389 
o|contracted procedure: k2401 
o|contracted procedure: k2404 
o|contracted procedure: k2412 
o|contracted procedure: k2427 
o|contracted procedure: k2450 
o|contracted procedure: k2468 
o|contracted procedure: k2483 
o|contracted procedure: k2498 
o|contracted procedure: k2519 
o|contracted procedure: k2528 
o|contracted procedure: k2537 
o|contracted procedure: k2555 
o|contracted procedure: k2565 
o|contracted procedure: k2569 
o|contracted procedure: k2579 
o|contracted procedure: k2599 
o|contracted procedure: k2614 
o|contracted procedure: k2624 
o|contracted procedure: k2628 
o|contracted procedure: k2638 
o|contracted procedure: k2687 
o|contracted procedure: k2700 
o|contracted procedure: k2706 
o|contracted procedure: k2722 
o|contracted procedure: k2734 
o|contracted procedure: k2744 
o|contracted procedure: k2227 
o|propagated global variable: r2228 ##sys#undefined-value 
o|contracted procedure: k2756 
o|contracted procedure: k2242 
o|contracted procedure: k2267 
o|contracted procedure: k2277 
o|contracted procedure: k2768 
o|contracted procedure: k2780 
o|contracted procedure: k5136 
o|contracted procedure: k5088 
o|contracted procedure: k5109 
o|contracted procedure: k5113 
o|contracted procedure: k5105 
o|contracted procedure: k5098 
o|contracted procedure: k5116 
o|contracted procedure: k5122 
o|contracted procedure: k5132 
o|contracted procedure: k2796 
o|contracted procedure: k5142 
o|contracted procedure: k5145 
o|contracted procedure: k5154 
o|contracted procedure: k5169 
o|contracted procedure: k5173 
o|contracted procedure: k5165 
o|contracted procedure: k5198 
o|propagated global variable: r5199 ##sys#undefined-value 
o|contracted procedure: k5210 
o|contracted procedure: k5216 
o|contracted procedure: k5219 
o|contracted procedure: k5222 
o|contracted procedure: k5225 
o|contracted procedure: k5236 
o|contracted procedure: k5250 
o|contracted procedure: k5260 
o|contracted procedure: k5284 
o|contracted procedure: k5292 
o|contracted procedure: k5288 
o|contracted procedure: k5298 
o|contracted procedure: k5301 
o|contracted procedure: k5304 
o|contracted procedure: k5307 
o|contracted procedure: k5310 
o|contracted procedure: k5354 
o|contracted procedure: k5329 
o|contracted procedure: k5339 
o|contracted procedure: k5343 
o|contracted procedure: k5347 
o|contracted procedure: k5351 
o|contracted procedure: k5363 
o|contracted procedure: k5372 
o|contracted procedure: k2809 
o|contracted procedure: k2822 
o|contracted procedure: k2828 
o|contracted procedure: k2850 
o|contracted procedure: k2865 
o|contracted procedure: k2875 
o|contracted procedure: k2879 
o|contracted procedure: k2836 
o|propagated global variable: g300302 command-table 
o|contracted procedure: k2944 
o|contracted procedure: k2951 
o|contracted procedure: k3135 
o|contracted procedure: k3149 
o|contracted procedure: k3152 
o|contracted procedure: k3156 
o|contracted procedure: k3165 
o|contracted procedure: k3179 
o|contracted procedure: k3183 
o|contracted procedure: k3187 
o|contracted procedure: k3190 
o|contracted procedure: k3208 
o|contracted procedure: k3214 
o|contracted procedure: k3306 
o|contracted procedure: k3225 
o|contracted procedure: k3257 
o|contracted procedure: k3261 
o|contracted procedure: k3291 
o|contracted procedure: k3265 
o|contracted procedure: k3269 
o|contracted procedure: k3273 
o|contracted procedure: k3288 
o|contracted procedure: k3284 
o|contracted procedure: k3277 
o|contracted procedure: k3295 
o|contracted procedure: k3299 
o|contracted procedure: k3315 
o|contracted procedure: k3325 
o|contracted procedure: k3329 
o|contracted procedure: k3342 
o|contracted procedure: k3345 
o|contracted procedure: k3356 
o|contracted procedure: k3368 
o|contracted procedure: k3371 
o|contracted procedure: k4441 
o|contracted procedure: k3452 
o|contracted procedure: k3458 
o|contracted procedure: k3470 
o|contracted procedure: k3479 
o|contracted procedure: k3486 
o|contracted procedure: k3572 
o|contracted procedure: k3496 
o|contracted procedure: k3505 
o|contracted procedure: k3518 
o|contracted procedure: k3521 
o|contracted procedure: k3528 
o|contracted procedure: k3535 
o|contracted procedure: k3550 
o|contracted procedure: k3557 
o|contracted procedure: k3561 
o|contracted procedure: k3576 
o|contracted procedure: k3595 
o|contracted procedure: k3598 
o|contracted procedure: k3607 
o|contracted procedure: k3616 
o|contracted procedure: k3625 
o|contracted procedure: k3634 
o|contracted procedure: k4428 
o|contracted procedure: k3643 
o|propagated global variable: r4429 ##sys#undefined-value 
o|contracted procedure: k3652 
o|contracted procedure: k3658 
o|contracted procedure: k3667 
o|contracted procedure: k4424 
o|contracted procedure: k3676 
o|contracted procedure: k3685 
o|contracted procedure: k3694 
o|contracted procedure: k3703 
o|contracted procedure: k3712 
o|contracted procedure: k3734 
o|contracted procedure: k3746 
o|contracted procedure: k3752 
o|contracted procedure: k3767 
o|contracted procedure: k3783 
o|contracted procedure: k3793 
o|contracted procedure: k3797 
o|contracted procedure: k3801 
o|contracted procedure: k3805 
o|contracted procedure: k3843 
o|contracted procedure: k3852 
o|contracted procedure: k3855 
o|contracted procedure: k3899 
o|contracted procedure: k3864 
o|contracted procedure: k3893 
o|contracted procedure: k3885 
o|contracted procedure: k3908 
o|contracted procedure: k3917 
o|contracted procedure: k3930 
o|contracted procedure: k3972 
o|contracted procedure: k3957 
o|contracted procedure: k3961 
o|contracted procedure: k3965 
o|contracted procedure: k3989 
o|contracted procedure: k3993 
o|contracted procedure: k3999 
o|contracted procedure: k4005 
o|contracted procedure: k4011 
o|contracted procedure: k4017 
o|contracted procedure: k4023 
o|contracted procedure: k4029 
o|contracted procedure: k4035 
o|contracted procedure: k4041 
o|contracted procedure: k4047 
o|contracted procedure: k4053 
o|contracted procedure: k4079 
o|contracted procedure: k4095 
o|contracted procedure: k4117 
o|contracted procedure: k4120 
o|contracted procedure: k4129 
o|contracted procedure: k4132 
o|contracted procedure: k4144 
o|contracted procedure: k4153 
o|contracted procedure: k4157 
o|contracted procedure: k4160 
o|contracted procedure: k4163 
o|contracted procedure: k4173 
o|contracted procedure: k4182 
o|contracted procedure: k4192 
o|contracted procedure: k4196 
o|contracted procedure: k4200 
o|contracted procedure: k4211 
o|contracted procedure: k4204 
o|contracted procedure: k4208 
o|contracted procedure: k4217 
o|contracted procedure: k4232 
o|contracted procedure: k4241 
o|contracted procedure: k4251 
o|contracted procedure: k4278 
o|contracted procedure: k4254 
o|contracted procedure: k4270 
o|contracted procedure: k4274 
o|contracted procedure: k42517439 
o|contracted procedure: k4281 
o|contracted procedure: k4284 
o|contracted procedure: k4296 
o|contracted procedure: k4306 
o|contracted procedure: k4310 
o|contracted procedure: k4314 
o|contracted procedure: k4320 
o|contracted procedure: k4323 
o|contracted procedure: k4340 
o|contracted procedure: k4356 
o|contracted procedure: k4359 
o|contracted procedure: k4366 
o|contracted procedure: k4375 
o|contracted procedure: k4378 
o|contracted procedure: k4389 
o|contracted procedure: k4401 
o|contracted procedure: k4414 
o|contracted procedure: k3442 
o|contracted procedure: k3438 
o|contracted procedure: k3426 
o|contracted procedure: k3388 
o|contracted procedure: k3395 
o|contracted procedure: k3399 
o|contracted procedure: k3402 
o|contracted procedure: k4431 
o|contracted procedure: k4450 
o|contracted procedure: k4473 
o|contracted procedure: k4493 
o|contracted procedure: k4499 
o|contracted procedure: k4510 
o|contracted procedure: k4562 
o|contracted procedure: k4516 
o|contracted procedure: k4528 
o|contracted procedure: k4539 
o|contracted procedure: k4545 
o|contracted procedure: k4552 
o|contracted procedure: k4578 
o|contracted procedure: k4584 
o|contracted procedure: k4591 
o|contracted procedure: k4597 
o|contracted procedure: k4613 
o|contracted procedure: k4619 
o|contracted procedure: k4631 
o|contracted procedure: k4643 
o|contracted procedure: k4668 
o|contracted procedure: k4677 
o|contracted procedure: k4680 
o|contracted procedure: k4693 
o|contracted procedure: k4697 
o|contracted procedure: k4713 
o|contracted procedure: k4700 
o|contracted procedure: k4707 
o|contracted procedure: k4728 
o|contracted procedure: k4731 
o|contracted procedure: k4737 
o|contracted procedure: k4740 
o|contracted procedure: k4746 
o|contracted procedure: k4753 
o|contracted procedure: k4762 
o|contracted procedure: k4772 
o|contracted procedure: k4785 
o|contracted procedure: k4789 
o|contracted procedure: k4822 
o|contracted procedure: k4825 
o|contracted procedure: k4829 
o|contracted procedure: k4839 
o|contracted procedure: k4848 
o|contracted procedure: k4851 
o|contracted procedure: k4854 
o|contracted procedure: k4857 
o|contracted procedure: k4860 
o|contracted procedure: k4863 
o|contracted procedure: k4866 
o|contracted procedure: k4911 
o|contracted procedure: k4914 
o|contracted procedure: k4922 
o|contracted procedure: k4937 
o|contracted procedure: k4962 
o|contracted procedure: k4968 
o|contracted procedure: k4972 
o|contracted procedure: k4975 
o|contracted procedure: k4978 
o|contracted procedure: k4981 
o|contracted procedure: k4984 
o|contracted procedure: k5021 
o|contracted procedure: k4996 
o|contracted procedure: k5006 
o|contracted procedure: k5010 
o|contracted procedure: k5014 
o|contracted procedure: k5018 
o|contracted procedure: k5043 
o|contracted procedure: k5057 
o|contracted procedure: k5070 
o|contracted procedure: k5077 
o|contracted procedure: k5381 
o|contracted procedure: k5396 
o|contracted procedure: k5408 
o|contracted procedure: k5415 
o|contracted procedure: k5430 
o|contracted procedure: k5434 
o|contracted procedure: k5421 
o|contracted procedure: k5451 
o|contracted procedure: k5454 
o|contracted procedure: k5460 
o|contracted procedure: k5472 
o|contracted procedure: k5498 
o|contracted procedure: k5516 
o|contracted procedure: k5542 
o|contracted procedure: k5538 
o|contracted procedure: k5519 
o|contracted procedure: k5530 
o|contracted procedure: k5592 
o|contracted procedure: k5610 
o|contracted procedure: k5601 
o|contracted procedure: k5580 
o|contracted procedure: k5562 
o|contracted procedure: k5568 
o|contracted procedure: k5575 
o|contracted procedure: k5660 
o|contracted procedure: k5692 
o|contracted procedure: k5671 
o|contracted procedure: k5681 
o|contracted procedure: k5778 
o|contracted procedure: k5736 
o|contracted procedure: k5755 
o|contracted procedure: k5813 
o|contracted procedure: k5822 
o|contracted procedure: k5831 
o|contracted procedure: k5868 
o|contracted procedure: k5892 
o|contracted procedure: k5895 
o|contracted procedure: k5905 
o|contracted procedure: k59057485 
o|contracted procedure: k5911 
o|contracted procedure: k5915 
o|contracted procedure: k59057489 
o|contracted procedure: k5921 
o|contracted procedure: k5924 
o|contracted procedure: k59057493 
o|contracted procedure: k5937 
o|contracted procedure: k5933 
o|contracted procedure: k5945 
o|contracted procedure: k5953 
o|contracted procedure: k59057497 
o|contracted procedure: k5962 
o|contracted procedure: k5970 
o|contracted procedure: k59057501 
o|contracted procedure: k5979 
o|contracted procedure: k5993 
o|contracted procedure: k59057505 
o|contracted procedure: k6002 
o|contracted procedure: k6011 
o|contracted procedure: k6020 
o|contracted procedure: k6052 
o|contracted procedure: k6046 
o|contracted procedure: k6043 
o|contracted procedure: k59057509 
o|contracted procedure: k6064 
o|contracted procedure: k6072 
o|contracted procedure: k6096 
o|contracted procedure: k6099 
o|contracted procedure: k6112 
o|contracted procedure: k6115 
o|contracted procedure: k61127513 
o|contracted procedure: k6142 
o|contracted procedure: k5730 
o|contracted procedure: k6247 
o|contracted procedure: k6243 
o|contracted procedure: k6239 
o|contracted procedure: k6208 
o|contracted procedure: k6217 
o|contracted procedure: k6226 
o|contracted procedure: k6258 
o|contracted procedure: k6268 
o|contracted procedure: k6280 
o|contracted procedure: k6283 
o|contracted procedure: k6294 
o|contracted procedure: k6306 
o|contracted procedure: k6315 
o|contracted procedure: k6318 
o|contracted procedure: k6329 
o|contracted procedure: k6341 
o|contracted procedure: k6350 
o|contracted procedure: k6360 
o|contracted procedure: k6364 
o|contracted procedure: k6373 
o|contracted procedure: k6383 
o|contracted procedure: k6387 
o|contracted procedure: k6396 
o|contracted procedure: k6406 
o|contracted procedure: k6410 
o|contracted procedure: k6444 
o|contracted procedure: k6457 
o|contracted procedure: k6461 
o|contracted procedure: k1900 
o|contracted procedure: k1896 
o|contracted procedure: k1892 
o|contracted procedure: k6485 
o|contracted procedure: k6488 
o|contracted procedure: k6499 
o|contracted procedure: k6511 
o|contracted procedure: k6545 
o|contracted procedure: k6563 
o|contracted procedure: k6573 
o|contracted procedure: k6614 
o|contracted procedure: k6610 
o|contracted procedure: k6576 
o|contracted procedure: k6606 
o|contracted procedure: k6602 
o|contracted procedure: k6585 
o|contracted procedure: k6595 
o|contracted procedure: k6579 
o|contracted procedure: k6621 
o|contracted procedure: k6642 
o|contracted procedure: k2986 
o|contracted procedure: k2998 
o|contracted procedure: k3001 
o|contracted procedure: k3012 
o|contracted procedure: k3024 
o|contracted procedure: k2968 
o|contracted procedure: k3067 
o|contracted procedure: k3081 
o|contracted procedure: k6671 
o|contracted procedure: k6680 
o|contracted procedure: k6746 
o|contracted procedure: k6683 
o|contracted procedure: k6742 
o|contracted procedure: k6738 
o|contracted procedure: k6734 
o|contracted procedure: k6698 
o|contracted procedure: k6726 
o|contracted procedure: k6722 
o|contracted procedure: k6714 
o|contracted procedure: k6706 
o|contracted procedure: k6702 
o|contracted procedure: k6694 
o|contracted procedure: k6752 
o|contracted procedure: k6755 
o|contracted procedure: k6761 
o|contracted procedure: k6768 
o|contracted procedure: k6829 
o|contracted procedure: k6832 
o|simplifications: ((if . 3) (let . 119)) 
o|removed binding forms: 496 
o|inlining procedure: k5253 
o|inlining procedure: k3348 
o|inlining procedure: k3348 
o|inlining procedure: k4381 
o|inlining procedure: k4381 
o|inlining procedure: k4902 
o|inlining procedure: k5522 
o|inlining procedure: k5522 
o|inlining procedure: k6286 
o|inlining procedure: k6286 
o|inlining procedure: k6321 
o|inlining procedure: k6321 
o|inlining procedure: k6491 
o|inlining procedure: k6491 
o|inlining procedure: k3004 
o|inlining procedure: k3004 
o|replaced variables: 204 
o|inlining procedure: k2326 
o|simplifications: ((if . 1)) 
o|removed binding forms: 98 
o|replaced variables: 29 
o|removed binding forms: 8 
o|direct leaf routine/allocation: g167168 7 
o|direct leaf routine/allocation: lp474 0 
o|direct leaf routine/allocation: lp460 0 
o|direct leaf routine/allocation: loop1097 0 
o|contracted procedure: "(csi.scm:280) k2348" 
o|contracted procedure: k3830 
o|converted assignments to bindings: (lp474) 
o|converted assignments to bindings: (lp460) 
o|contracted procedure: k5486 
o|converted assignments to bindings: (loop1097) 
o|simplifications: ((let . 3)) 
o|removed binding forms: 3 
o|replaced variables: 3 
o|removed binding forms: 1 
o|customizable procedures: (k1872 k6780 g324325 k6677 doloop362363 map-loop334368 canonicalize-args lookup-script-file k5630 k5636 k5642 map-loop11661186 k5795 k5801 print-banner for-each-loop12391249 for-each-loop12561266 for-each-loop12731283 map-loop12901307 collect-options1193 map-loop13161333 member* k5856 doloop14131414 evalstring1195 doloop13561357 doloop12251226 g12051206 loop1197 k5466 map-loop10611086 loop1049 find1026 loop1023 k4832 k5050 g820828 for-each-loop819850 prin1773 doloop833834 doloop785786 justify724 doloop733734 doloop741742 doloop749750 doloop723731 def-len688709 def-out689707 body686694 k4525 bestlen701 k3833 g644645 map-loop649666 g633634 g604611 for-each-loop603620 loop614 g582589 for-each-loop581592 doloop576577 hexdump loop-print551 doloop538539 loop2516 loop1506 k3109 map-loop396413 g423430 for-each-loop422444 shorten390 k3159 k2398 for-each-loop293305 k5148 g918926 for-each-loop917941 compare899 doloop931932 doloop903908 fail904 k5091 show-frameinfo doloop120121 history-add g247254 for-each-loop246266 for-each-loop227237 report dump describe k2190 loop78 loop97 addext70 history-ref) 
o|calls to known targets: 270 
o|identified direct recursive calls: f_5205 1 
o|identified direct recursive calls: f_3383 1 
o|identified direct recursive calls: f_4236 1 
o|identified direct recursive calls: f_3418 1 
o|identified direct recursive calls: f_5403 1 
o|identified direct recursive calls: f_5590 1 
o|identified direct recursive calls: f_5511 2 
o|unused rest argument: _1223 f_5781 
o|unused rest argument: _1360 f_5884 
o|identified direct recursive calls: f_5863 2 
o|fast box initializations: 47 
o|fast global references: 77 
o|fast global assignments: 27 
o|dropping unused closure argument: f_4605 
o|dropping unused closure argument: f_4608 
o|dropping unused closure argument: f_3418 
o|dropping unused closure argument: f_4457 
o|dropping unused closure argument: f_2281 
o|dropping unused closure argument: f_1904 
o|dropping unused closure argument: f_4808 
o|dropping unused closure argument: f_2024 
o|dropping unused closure argument: f_4811 
o|dropping unused closure argument: f_5440 
o|dropping unused closure argument: f_3125 
o|dropping unused closure argument: f_5734 
o|dropping unused closure argument: f_3383 
o|dropping unused closure argument: f_5385 
o|dropping unused closure argument: f_5590 
*/
/* end of file */
