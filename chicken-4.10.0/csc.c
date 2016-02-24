/* Generated from csc.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:03
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: csc.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -local -no-trace -output-file csc.c
   used units: library eval chicken_2dsyntax data_2dstructures ports srfi_2d1 srfi_2d13 utils files extras
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d1_toplevel)
C_externimport void C_ccall C_srfi_2d1_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d13_toplevel)
C_externimport void C_ccall C_srfi_2d13_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[432];
static double C_possibly_force_alignment;


C_noret_decl(f_2217)
static void C_ccall f_2217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3194)
static void C_ccall f_3194(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3093)
static void C_ccall f_3093(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3095)
static void C_fcall f_3095(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2279)
static void C_ccall f_2279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2276)
static void C_fcall f_2276(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2229)
static void C_ccall f_2229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4152)
static void C_ccall f_4152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4168)
static void C_ccall f_4168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4164)
static void C_ccall f_4164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2291)
static void C_ccall f_2291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4208)
static void C_ccall f_4208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4204)
static void C_ccall f_4204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3944)
static void C_ccall f_3944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2241)
static void C_ccall f_2241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4201)
static void C_ccall f_4201(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3957)
static void C_fcall f_3957(C_word t0) C_noret;
C_noret_decl(f_3965)
static void C_ccall f_3965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4531)
static void C_ccall f_4531(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2772)
static void C_ccall f_2772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2776)
static void C_ccall f_2776(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3188)
static void C_ccall f_3188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3183)
static void C_ccall f_3183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5099)
static void C_ccall f_5099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2716)
static void C_ccall f_2716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2712)
static void C_ccall f_2712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3246)
static void C_fcall f_3246(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4423)
static void C_fcall f_4423(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5089)
static void C_ccall f_5089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4421)
static void C_ccall f_4421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4579)
static void C_fcall f_4579(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5072)
static void C_ccall f_5072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4574)
static void C_ccall f_4574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5079)
static void C_ccall f_5079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5068)
static void C_ccall f_5068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4504)
static void C_ccall f_4504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4431)
static void C_ccall f_4431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4437)
static void C_ccall f_4437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3076)
static void C_ccall f_3076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4508)
static void C_fcall f_4508(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2745)
static void C_ccall f_2745(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2102)
static void C_ccall f_2102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4403)
static void C_ccall f_4403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4407)
static void C_ccall f_4407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4551)
static void C_fcall f_4551(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3233)
static void C_ccall f_3233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4350)
static void C_ccall f_4350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2759)
static void C_ccall f_2759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3205)
static void C_ccall f_3205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2943)
static void C_ccall f_2943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4368)
static void C_ccall f_4368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4362)
static void C_ccall f_4362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4466)
static void C_fcall f_4466(C_word t0) C_noret;
C_noret_decl(f_4460)
static void C_ccall f_4460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5844)
static void C_ccall f5844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5849)
static void C_ccall f5849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2952)
static void C_ccall f_2952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3219)
static void C_ccall f_3219(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2253)
static void C_ccall f_2253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4549)
static void C_ccall f_4549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4541)
static void C_ccall f_4541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4474)
static void C_ccall f_4474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4545)
static void C_ccall f_4545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5839)
static void C_ccall f5839(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2962)
static void C_fcall f_2962(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4449)
static void C_ccall f_4449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4446)
static void C_ccall f_4446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4440)
static void C_ccall f_4440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4594)
static void C_ccall f_4594(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4443)
static void C_ccall f_4443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4396)
static void C_ccall f_4396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5822)
static void C_ccall f5822(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4075)
static void C_ccall f_4075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4072)
static void C_fcall f_4072(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3893)
static void C_ccall f_3893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4456)
static void C_ccall f_4456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5817)
static void C_ccall f5817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4452)
static void C_ccall f_4452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1706)
static void C_ccall f_1706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4088)
static void C_ccall f_4088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2733)
static void C_ccall f_2733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2737)
static void C_ccall f_2737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4058)
static void C_ccall f_4058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4586)
static void C_ccall f_4586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3883)
static void C_fcall f_3883(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5055)
static void C_ccall f_5055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4481)
static void C_fcall f_4481(C_word t0,C_word t1) C_noret;
C_noret_decl(f5864)
static void C_ccall f5864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3881)
static void C_ccall f_3881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5869)
static void C_ccall f5869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4496)
static void C_fcall f_4496(C_word t0) C_noret;
C_noret_decl(f_3794)
static void C_ccall f_3794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4494)
static void C_ccall f_4494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5854)
static void C_ccall f5854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5859)
static void C_ccall f5859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3270)
static void C_ccall f_3270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4959)
static void C_ccall f_4959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3932)
static void C_ccall f_3932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4092)
static void C_ccall f_4092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3934)
static void C_fcall f_3934(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3251)
static void C_ccall f_3251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5928)
static void C_ccall f5928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5923)
static void C_ccall f5923(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3782)
static void C_ccall f_3782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2061)
static void C_ccall f_2061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2064)
static void C_ccall f_2064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3812)
static void C_ccall f_3812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3816)
static void C_ccall f_3816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1785)
static void C_fcall f_1785(C_word t0,C_word t1) C_noret;
C_noret_decl(f5896)
static void C_ccall f5896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5891)
static void C_ccall f5891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5949)
static void C_ccall f5949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4945)
static void C_ccall f_4945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3825)
static void C_ccall f_3825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2055)
static void C_ccall f_2055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2058)
static void C_ccall f_2058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1792)
static void C_fcall f_1792(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f5934)
static void C_ccall f5934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2018)
static void C_fcall f_2018(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1790)
static void C_ccall f_1790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4998)
static void C_ccall f_4998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3973)
static void C_fcall f_3973(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3971)
static void C_ccall f_3971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2021)
static void C_fcall f_2021(C_word t0,C_word t1) C_noret;
C_noret_decl(f5964)
static void C_ccall f5964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2028)
static void C_ccall f_2028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5969)
static void C_ccall f5969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3907)
static void C_fcall f_3907(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3802)
static void C_ccall f_3802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3806)
static void C_ccall f_3806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5954)
static void C_ccall f5954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5959)
static void C_ccall f5959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4970)
static void C_ccall f_4970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4974)
static void C_ccall f_4974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4736)
static void C_ccall f_4736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4733)
static void C_ccall f_4733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3913)
static void C_ccall f_3913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3910)
static void C_ccall f_3910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4730)
static void C_ccall f_4730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4739)
static void C_ccall f_4739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2533)
static void C_ccall f_2533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4988)
static void C_ccall f_4988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4984)
static void C_ccall f_4984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2092)
static void C_ccall f_2092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4705)
static void C_ccall f_4705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4701)
static void C_ccall f_4701(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3925)
static void C_ccall f_3925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2099)
static void C_ccall f_2099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2502)
static void C_ccall f_2502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2553)
static void C_ccall f_2553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2784)
static void C_ccall f_2784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4231)
static void C_ccall f_4231(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2523)
static void C_ccall f_2523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2391)
static void C_ccall f_2391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1366)
static void C_ccall f_1366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1369)
static void C_ccall f_1369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2797)
static void C_ccall f_2797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4778)
static void C_ccall f_4778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1360)
static void C_ccall f_1360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1363)
static void C_ccall f_1363(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4775)
static void C_ccall f_4775(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4772)
static void C_ccall f_4772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4241)
static void C_ccall f_4241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2573)
static void C_ccall f_2573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2384)
static void C_ccall f_2384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4218)
static void C_ccall f_4218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4746)
static void C_ccall f_4746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3286)
static void C_ccall f_3286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4742)
static void C_ccall f_4742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4212)
static void C_ccall f_4212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3282)
static void C_fcall f_3282(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2543)
static void C_ccall f_2543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5886)
static void C_ccall f5886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5881)
static void C_ccall f5881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3139)
static void C_ccall f_3139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2081)
static void C_ccall f_2081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2388)
static void C_ccall f_2388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1381)
static void C_ccall f_1381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4750)
static void C_ccall f_4750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3294)
static void C_ccall f_3294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4221)
static void C_ccall f_4221(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4754)
static void C_ccall f_4754(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2593)
static void C_ccall f_2593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2088)
static void C_ccall f_2088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5874)
static void C_ccall f5874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1354)
static void C_ccall f_1354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1357)
static void C_ccall f_1357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2074)
static void C_ccall f_2074(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4724)
static void C_ccall f_4724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2563)
static void C_ccall f_2563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1405)
static void C_fcall f_1405(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1402)
static void C_ccall f_1402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1841)
static C_word C_fcall f_1841(C_word *a);
C_noret_decl(f5906)
static void C_ccall f5906(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1858)
static void C_fcall f_1858(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1375)
static void C_ccall f_1375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1378)
static void C_ccall f_1378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4898)
static void C_ccall f_4898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5901)
static void C_ccall f5901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4789)
static void C_ccall f_4789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4894)
static void C_fcall f_4894(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1372)
static void C_ccall f_1372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4781)
static void C_ccall f_4781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4784)
static void C_ccall f_4784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1827)
static void C_ccall f_1827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4822)
static void C_ccall f_4822(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4828)
static void C_ccall f_4828(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1823)
static void C_ccall f_1823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4797)
static void C_ccall f_4797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4769)
static void C_ccall f_4769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3677)
static void C_fcall f_3677(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4766)
static void C_ccall f_4766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4760)
static void C_ccall f_4760(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4763)
static void C_ccall f_4763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2133)
static void C_ccall f_2133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3124)
static void C_ccall f_3124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3648)
static void C_ccall f_3648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2142)
static void C_ccall f_2142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3135)
static void C_ccall f_3135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2149)
static void C_ccall f_2149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3712)
static void C_ccall f_3712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3627)
static void C_ccall f_3627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3736)
static void C_ccall f_3736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3702)
static void C_fcall f_3702(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3709)
static void C_ccall f_3709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3706)
static void C_ccall f_3706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3856)
static void C_fcall f_3856(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f5984)
static void C_ccall f5984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4815)
static void C_ccall f_4815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3759)
static void C_ccall f_3759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3866)
static void C_ccall f_3866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2114)
static void C_ccall f_2114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5979)
static void C_ccall f5979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5974)
static void C_ccall f5974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3833)
static void C_fcall f_3833(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2191)
static void C_ccall f_2191(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2126)
static void C_ccall f_2126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3775)
static void C_fcall f_3775(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3774)
static void C_fcall f_3774(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3779)
static void C_ccall f_3779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4612)
static void C_ccall f_4612(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3771)
static void C_ccall f_3771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3843)
static void C_ccall f_3843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5010)
static void C_ccall f_5010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5014)
static void C_ccall f_5014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3744)
static void C_fcall f_3744(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3748)
static void C_ccall f_3748(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4624)
static void C_ccall f_4624(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3740)
static void C_ccall f_3740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2893)
static void C_ccall f_2893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5006)
static void C_ccall f_5006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5002)
static void C_ccall f_5002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4601)
static void C_ccall f_4601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4607)
static void C_ccall f_4607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5171)
static void C_ccall f_5171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4667)
static void C_ccall f_4667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4661)
static void C_ccall f_4661(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4664)
static void C_ccall f_4664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5041)
static void C_ccall f_5041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5045)
static void C_ccall f_5045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4251)
static void C_ccall f_4251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4254)
static void C_ccall f_4254(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4635)
static void C_ccall f_4635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4638)
static void C_ccall f_4638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2583)
static void C_ccall f_2583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1535)
static void C_ccall f_1535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4267)
static void C_ccall f_4267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4261)
static void C_ccall f_4261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1530)
static void C_ccall f_1530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3724)
static void C_ccall f_3724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4641)
static void C_ccall f_4641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4644)
static void C_ccall f_4644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2872)
static void C_ccall f_2872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2875)
static void C_ccall f_2875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4699)
static void C_ccall f_4699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2180)
static void C_ccall f_2180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2811)
static void C_fcall f_2811(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2815)
static void C_ccall f_2815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3309)
static void C_ccall f_3309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1818)
static void C_fcall f_1818(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4297)
static void C_ccall f_4297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4291)
static void C_ccall f_4291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4294)
static void C_ccall f_4294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4670)
static void C_ccall f_4670(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3303)
static void C_ccall f_3303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2823)
static void C_ccall f_2823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2827)
static void C_ccall f_2827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4685)
static void C_fcall f_4685(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1584)
static void C_ccall f_1584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1622)
static void C_ccall f_1622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1632)
static void C_ccall f_1632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1592)
static void C_ccall f_1592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5167)
static void C_ccall f_5167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1525)
static void C_ccall f_1525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5163)
static void C_ccall f_5163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1521)
static void C_ccall f_1521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3341)
static void C_ccall f_3341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1637)
static void C_fcall f_1637(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5159)
static void C_ccall f_5159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1906)
static void C_ccall f_1906(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1909)
static void C_ccall f_1909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1915)
static void C_ccall f_1915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1918)
static void C_ccall f_1918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1912)
static void C_ccall f_1912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1888)
static void C_ccall f_1888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1928)
static void C_ccall f_1928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1882)
static void C_fcall f_1882(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1921)
static void C_ccall f_1921(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1569)
static void C_ccall f_1569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1565)
static void C_ccall f_1565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1894)
static void C_ccall f_1894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1869)
static void C_ccall f_1869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3543)
static void C_ccall f_3543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3546)
static void C_ccall f_3546(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4307)
static void C_fcall f_4307(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3540)
static void C_ccall f_3540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4305)
static void C_ccall f_4305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4301)
static void C_ccall f_4301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1879)
static void C_ccall f_1879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1873)
static void C_ccall f_1873(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1876)
static void C_ccall f_1876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3554)
static void C_ccall f_3554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4277)
static void C_ccall f_4277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4273)
static void C_ccall f_4273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4270)
static void C_ccall f_4270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3550)
static void C_ccall f_3550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3566)
static void C_ccall f_3566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4285)
static void C_ccall f_4285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4281)
static void C_ccall f_4281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3687)
static void C_ccall f_3687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3574)
static void C_ccall f_3574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3578)
static void C_ccall f_3578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3570)
static void C_ccall f_3570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3582)
static void C_fcall f_3582(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3596)
static void C_ccall f_3596(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3598)
static void C_fcall f_3598(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3590)
static void C_ccall f_3590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4111)
static void C_ccall f_4111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2661)
static void C_ccall f_2661(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4127)
static void C_ccall f_4127(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2603)
static void C_ccall f_2603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4108)
static void C_fcall f_4108(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4911)
static void C_ccall f_4911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4916)
static void C_fcall f_4916(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2678)
static void C_ccall f_2678(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2852)
static void C_ccall f_2852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4135)
static void C_ccall f_4135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4139)
static void C_ccall f_4139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4131)
static void C_ccall f_4131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2644)
static void C_ccall f_2644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2855)
static void C_ccall f_2855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4142)
static void C_ccall f_4142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4901)
static void C_ccall f_4901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1619)
static void C_ccall f_1619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1615)
static void C_fcall f_1615(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1611)
static void C_fcall f_1611(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1937)
static void C_ccall f_1937(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1934)
static void C_ccall f_1934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1949)
static void C_ccall f_1949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1946)
static void C_ccall f_1946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1943)
static void C_ccall f_1943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1940)
static void C_ccall f_1940(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1957)
static void C_ccall f_1957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1953)
static void C_ccall f_1953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2620)
static void C_fcall f_2620(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1961)
static void C_ccall f_1961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1600)
static void C_ccall f_1600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1691)
static void C_ccall f_1691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1983)
static void C_ccall f_1983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1980)
static void C_ccall f_1980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1683)
static void C_ccall f_1683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1990)
static void C_ccall f_1990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1699)
static void C_ccall f_1699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1695)
static void C_ccall f_1695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5129)
static void C_ccall f_5129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1666)
static void C_ccall f_1666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2971)
static void C_fcall f_2971(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5119)
static void C_ccall f_5119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4869)
static void C_ccall f_4869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4865)
static void C_ccall f_4865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4862)
static void C_ccall f_4862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2981)
static void C_ccall f_2981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5109)
static void C_ccall f_5109(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4833)
static void C_ccall f_4833(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2995)
static void C_ccall f_2995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f6340)
static void C_ccall f6340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4841)
static void C_ccall f_4841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f6345)
static void C_ccall f6345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3009)
static void C_ccall f_3009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f6335)
static void C_ccall f6335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2695)
static void C_ccall f_2695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2443)
static void C_ccall f_2443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4197)
static void C_ccall f_4197(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5141)
static void C_ccall f_5141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5145)
static void C_ccall f_5145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1495)
static void C_ccall f_1495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5149)
static void C_ccall f_5149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4192)
static void C_ccall f_4192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4336)
static void C_ccall f_4336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1491)
static void C_ccall f_1491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4877)
static void C_ccall f_4877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2451)
static void C_ccall f_2451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4873)
static void C_ccall f_4873(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5133)
static void C_ccall f_5133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5137)
static void C_ccall f_5137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2447)
static void C_ccall f_2447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1467)
static void C_ccall f_1467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4022)
static void C_ccall f_4022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4342)
static void C_fcall f_4342(C_word t0) C_noret;
C_noret_decl(f_4884)
static void C_ccall f_4884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4176)
static void C_ccall f_4176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1475)
static void C_ccall f_1475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1479)
static void C_ccall f_1479(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4859)
static void C_ccall f_4859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1471)
static void C_ccall f_1471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2475)
static void C_ccall f_2475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4188)
static void C_ccall f_4188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4184)
static void C_ccall f_4184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4025)
static void C_ccall f_4025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4028)
static void C_ccall f_4028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4002)
static void C_ccall f_4002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2900)
static void C_ccall f_2900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2903)
static void C_fcall f_2903(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2906)
static void C_fcall f_2906(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1459)
static void C_ccall f_1459(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1507)
static void C_fcall f_1507(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2913)
static C_word C_fcall f_2913(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_3039)
static void C_ccall f_3039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1428)
static void C_ccall f_1428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2486)
static void C_ccall f_2486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1517)
static void C_ccall f_1517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1513)
static void C_ccall f_1513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1421)
static void C_ccall f_1421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1729)
static void C_ccall f_1729(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1722)
static void C_ccall f_1722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3049)
static void C_fcall f_3049(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1436)
static void C_ccall f_1436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1432)
static void C_ccall f_1432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4031)
static void C_ccall f_4031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1487)
static void C_ccall f_1487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3156)
static void C_ccall f_3156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1745)
static void C_ccall f_1745(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1483)
static void C_ccall f_1483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3053)
static void C_ccall f_3053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3026)
static void C_ccall f_3026(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1418)
static void C_ccall f_1418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4034)
static void C_ccall f_4034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1415)
static void C_ccall f_1415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4037)
static void C_ccall f_4037(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1412)
static void C_ccall f_1412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1752)
static void C_ccall f_1752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4048)
static void C_fcall f_4048(C_word t0,C_word t1,C_word t2) C_noret;

C_noret_decl(trf_3095)
static void C_fcall trf_3095(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3095(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3095(t0,t1,t2);}

C_noret_decl(trf_2276)
static void C_fcall trf_2276(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2276(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2276(t0,t1);}

C_noret_decl(trf_3957)
static void C_fcall trf_3957(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3957(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_3957(t0);}

C_noret_decl(trf_3246)
static void C_fcall trf_3246(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3246(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3246(t0,t1);}

C_noret_decl(trf_4423)
static void C_fcall trf_4423(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4423(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4423(t0,t1,t2);}

C_noret_decl(trf_4579)
static void C_fcall trf_4579(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4579(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4579(t0,t1);}

C_noret_decl(trf_4508)
static void C_fcall trf_4508(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4508(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4508(t0,t1);}

C_noret_decl(trf_4551)
static void C_fcall trf_4551(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4551(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4551(t0,t1,t2);}

C_noret_decl(trf_4466)
static void C_fcall trf_4466(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4466(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_4466(t0);}

C_noret_decl(trf_2962)
static void C_fcall trf_2962(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2962(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2962(t0,t1);}

C_noret_decl(trf_4072)
static void C_fcall trf_4072(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4072(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4072(t0,t1);}

C_noret_decl(trf_3883)
static void C_fcall trf_3883(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3883(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3883(t0,t1,t2);}

C_noret_decl(trf_4481)
static void C_fcall trf_4481(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4481(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4481(t0,t1);}

C_noret_decl(trf_4496)
static void C_fcall trf_4496(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4496(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_4496(t0);}

C_noret_decl(trf_3934)
static void C_fcall trf_3934(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3934(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3934(t0,t1,t2);}

C_noret_decl(trf_1785)
static void C_fcall trf_1785(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1785(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1785(t0,t1);}

C_noret_decl(trf_1792)
static void C_fcall trf_1792(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1792(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1792(t0,t1,t2,t3);}

C_noret_decl(trf_2018)
static void C_fcall trf_2018(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2018(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2018(t0,t1);}

C_noret_decl(trf_3973)
static void C_fcall trf_3973(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3973(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3973(t0,t1,t2);}

C_noret_decl(trf_2021)
static void C_fcall trf_2021(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2021(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2021(t0,t1);}

C_noret_decl(trf_3907)
static void C_fcall trf_3907(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3907(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3907(t0,t1);}

C_noret_decl(trf_3282)
static void C_fcall trf_3282(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3282(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3282(t0,t1);}

C_noret_decl(trf_1405)
static void C_fcall trf_1405(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1405(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1405(t0,t1,t2);}

C_noret_decl(trf_1858)
static void C_fcall trf_1858(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1858(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1858(t0,t1,t2);}

C_noret_decl(trf_4894)
static void C_fcall trf_4894(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4894(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4894(t0,t1);}

C_noret_decl(trf_3677)
static void C_fcall trf_3677(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3677(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3677(t0,t1,t2);}

C_noret_decl(trf_3702)
static void C_fcall trf_3702(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3702(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3702(t0,t1,t2);}

C_noret_decl(trf_3856)
static void C_fcall trf_3856(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3856(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3856(t0,t1,t2);}

C_noret_decl(trf_3833)
static void C_fcall trf_3833(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3833(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3833(t0,t1,t2);}

C_noret_decl(trf_3775)
static void C_fcall trf_3775(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3775(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3775(t0,t1,t2);}

C_noret_decl(trf_3774)
static void C_fcall trf_3774(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3774(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3774(t0,t1);}

C_noret_decl(trf_3744)
static void C_fcall trf_3744(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3744(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3744(t0,t1);}

C_noret_decl(trf_2811)
static void C_fcall trf_2811(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2811(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2811(t0,t1);}

C_noret_decl(trf_1818)
static void C_fcall trf_1818(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1818(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1818(t0,t1);}

C_noret_decl(trf_4685)
static void C_fcall trf_4685(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4685(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4685(t0,t1);}

C_noret_decl(trf_1637)
static void C_fcall trf_1637(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1637(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1637(t0,t1,t2);}

C_noret_decl(trf_1882)
static void C_fcall trf_1882(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1882(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1882(t0,t1);}

C_noret_decl(trf_4307)
static void C_fcall trf_4307(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4307(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4307(t0,t1,t2);}

C_noret_decl(trf_3582)
static void C_fcall trf_3582(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3582(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3582(t0,t1);}

C_noret_decl(trf_3598)
static void C_fcall trf_3598(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3598(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3598(t0,t1,t2);}

C_noret_decl(trf_4108)
static void C_fcall trf_4108(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4108(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4108(t0,t1);}

C_noret_decl(trf_4916)
static void C_fcall trf_4916(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4916(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4916(t0,t1,t2);}

C_noret_decl(trf_1615)
static void C_fcall trf_1615(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1615(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1615(t0,t1);}

C_noret_decl(trf_1611)
static void C_fcall trf_1611(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1611(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1611(t0,t1);}

C_noret_decl(trf_2620)
static void C_fcall trf_2620(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2620(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2620(t0,t1);}

C_noret_decl(trf_2971)
static void C_fcall trf_2971(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2971(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2971(t0,t1);}

C_noret_decl(trf_4342)
static void C_fcall trf_4342(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4342(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_4342(t0);}

C_noret_decl(trf_2903)
static void C_fcall trf_2903(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2903(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2903(t0,t1);}

C_noret_decl(trf_2906)
static void C_fcall trf_2906(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2906(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2906(t0,t1);}

C_noret_decl(trf_1507)
static void C_fcall trf_1507(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1507(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1507(t0,t1);}

C_noret_decl(trf_3049)
static void C_fcall trf_3049(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3049(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3049(t0,t1);}

C_noret_decl(trf_4048)
static void C_fcall trf_4048(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4048(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4048(t0,t1,t2);}

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

/* k2215 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_2217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:614: exit */
t2=C_fast_retrieve(lf[13]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* a3193 in k3181 in k2969 in k2960 in k2904 in k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in ... */
static void C_ccall f_3194(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3194,5,t0,t1,t2,t3,t4);}
if(C_truep(t4)){
if(C_truep((C_truep(C_i_equalp(t4,lf[383]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[384]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3219,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:790: append */
t7=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,C_retrieve2(lf[53],"c-files"),t6);}
else{
if(C_truep(C_i_string_ci_equal_p(t4,lf[385]))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3233,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:792: append */
t7=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,C_retrieve2(lf[54],"rc-files"),t6);}
else{
if(C_truep((C_truep(C_i_equalp(t4,lf[386]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[387]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[388]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[389]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[390]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3246,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[3],"osx"))){
t6=C_a_i_cons(&a,2,lf[391],C_retrieve2(lf[80],"compile-options"));
t7=C_mutate2(&lf[80] /* (set! compile-options ...) */,t6);
t8=t5;
f_3246(t8,t7);}
else{
t6=t5;
f_3246(t6,C_SCHEME_UNDEFINED);}}
else{
if(C_truep((C_truep(C_i_equalp(t4,lf[392]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[393]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[394]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))){
t5=lf[60] /* objc-mode */ =C_SCHEME_TRUE;;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3270,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t7=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:799: append */
t8=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,C_retrieve2(lf[53],"c-files"),t7);}
else{
t5=C_retrieve2(lf[33],"object-extension");
t6=C_u_i_string_equal_p(t4,C_retrieve2(lf[33],"object-extension"));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3282,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t6)){
t8=t7;
f_3282(t8,t6);}
else{
t8=C_retrieve2(lf[35],"library-extension");
t9=t7;
f_3282(t9,C_u_i_string_equal_p(t4,C_retrieve2(lf[35],"library-extension")));}}}}}}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3205,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:788: append */
t7=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,C_retrieve2(lf[52],"scheme-files"),t6);}}

/* k3091 in k3133 in k3137 in k3047 in k2969 in k2960 in k2904 in k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in ... */
static void C_ccall f_3093(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:782: append */
t2=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)((C_word*)t0)[3])[1]);}

/* map-loop411 in k3133 in k3137 in k3047 in k2969 in k2960 in k2904 in k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in ... */
static void C_fcall f_3095(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3095,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3124,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_a_i_string(&a,1,t4);
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[114]))(4,*((C_word*)lf[114]+1),t3,lf[375],t5);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2277 in k2274 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in ... */
static void C_ccall f_2279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(C_retrieve2(lf[88],"verbose"))){
t2=lf[88] /* verbose */ =C_fix(2);;
/* csc.scm:809: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1858(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t2=lf[88] /* verbose */ =C_SCHEME_TRUE;;
/* csc.scm:809: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1858(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}}

/* k2274 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_fcall f_2276(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2276,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2279,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:625: t-options */
f_1785(t2,C_a_i_list(&a,1,lf[277]));}

/* k2227 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_2229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:615: exit */
t2=C_fast_retrieve(lf[13]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* k4150 in k4137 in k4129 in k4106 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in ... */
static void C_ccall f_4152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:944: make-pathname */
t2=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k4166 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in ... */
static void C_ccall f_4168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:928: string-intersperse */
t2=C_fast_retrieve(lf[100]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4162 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in ... */
static void C_ccall f_4164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:927: command */
f_4685(((C_word*)t0)[2],t1);}

/* k2289 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_2291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2291,2,t0,t1);}
t2=C_mutate2(&lf[80] /* (set! compile-options ...) */,t1);
t3=C_a_i_cons(&a,2,lf[278],C_retrieve2(lf[86],"link-options"));
t4=C_mutate2(&lf[86] /* (set! link-options ...) */,t3);
t5=((C_word*)t0)[2];
f_2276(t5,t4);}

/* k4206 in k4202 in k4199 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in ... */
static void C_ccall f_4208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4208,2,t0,t1);}
t2=C_mutate2(&lf[87] /* (set! target-filename ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4212,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=t3;
t5=C_retrieve2(lf[87],"target-filename");
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5859,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t7=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,C_retrieve2(lf[87],"target-filename"));}

/* k4202 in k4199 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in ... */
static void C_ccall f_4204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4204,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4208,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4231,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(C_truep(C_retrieve2(lf[3],"osx"))?C_retrieve2(lf[67],"gui"):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4241,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:920: pathname-file */
t6=C_fast_retrieve(lf[164]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,C_retrieve2(lf[87],"target-filename"));}
else{
/* csc.scm:921: pathname-file */
t5=C_fast_retrieve(lf[164]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,C_retrieve2(lf[87],"target-filename"));}}

/* k3942 in for-each-loop530 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in ... */
static void C_ccall f_3944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3934(t3,((C_word*)t0)[4],t2);}

/* k2239 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_2241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:616: exit */
t2=C_fast_retrieve(lf[13]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* k4199 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in ... */
static void C_ccall f_4201(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4201,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4204,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=(C_truep(C_retrieve2(lf[3],"osx"))?C_retrieve2(lf[67],"gui"):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4251,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:913: make-pathname */
t6=C_fast_retrieve(lf[104]);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[2])[1],lf[189]);}
else{
t5=t3;
f_4204(2,t5,C_SCHEME_UNDEFINED);}}

/* compiler-options in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in ... */
static void C_fcall f_3957(C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3957,NULL,1,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_retrieve2(lf[98],"quote-option");
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3965,a[2]=t1,a[3]=t5,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t8=C_retrieve2(lf[94],"static");
t9=(C_truep(C_retrieve2(lf[94],"static"))?C_retrieve2(lf[94],"static"):C_retrieve2(lf[95],"static-libs"));
if(C_truep(t9)){
/* csc.scm:898: append */
t10=*((C_word*)lf[101]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t7,C_SCHEME_END_OF_LIST,C_retrieve2(lf[83],"compilation-optimization-options"),C_retrieve2(lf[80],"compile-options"));}
else{
/* csc.scm:898: append */
t10=*((C_word*)lf[101]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t7,C_SCHEME_END_OF_LIST,C_retrieve2(lf[83],"compilation-optimization-options"),C_retrieve2(lf[80],"compile-options"));}}

/* k3963 in compiler-options in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in ... */
static void C_ccall f_3965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3965,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[99]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3971,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3973,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_3973(t7,t3,t1);}

/* k4529 in k4605 in k4599 in quote-option in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_4531(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4531,2,t0,t1);}
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4541,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1031: string-translate* */
t3=C_fast_retrieve(lf[123]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,lf[124]);}
else{
t2=t1;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2770 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in ... */
static void C_ccall f_2772(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2772,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2776,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2784,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:724: string-split */
t5=C_fast_retrieve(lf[229]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k2774 in k2770 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in ... */
static void C_ccall f_2776(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate2(&lf[86] /* (set! link-options ...) */,t1);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t3);
/* csc.scm:809: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1858(t5,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* a3187 in k3181 in k2969 in k2960 in k2904 in k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in ... */
static void C_ccall f_3188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3188,2,t0,t1);}
/* csc.scm:786: decompose-pathname */
t2=C_fast_retrieve(lf[382]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* k3181 in k2969 in k2960 in k2904 in k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in ... */
static void C_ccall f_3183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3183,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3188,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3194,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:786: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3303,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[114]))(4,*((C_word*)lf[114]+1),t2,((C_word*)t0)[2],lf[396]);}}

/* k5097 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 in ... */
static void C_ccall f_5099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5099,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5964,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t4=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}

/* k2714 in k2710 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in ... */
static void C_ccall f_2716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:809: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1858(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k2710 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in ... */
static void C_ccall f_2712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2712,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2716,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:715: cons* */
t5=C_fast_retrieve(lf[126]);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,lf[352],t3,t4);}

/* k3244 in a3193 in k3181 in k2969 in k2960 in k2904 in k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in ... */
static void C_fcall f_3246(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3246,NULL,2,t0,t1);}
t2=lf[59] /* cpp-mode */ =C_SCHEME_TRUE;;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3251,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_list1(&a,1,((C_word*)t0)[3]);
/* csc.scm:796: append */
t5=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,C_retrieve2(lf[53],"c-files"),t4);}

/* copy-files in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in ... */
static void C_fcall f_4423(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4423,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4431,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:991: open-output-string */
t5=C_fast_retrieve(lf[112]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k5087 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in ... */
static void C_ccall f_5089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5089,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5959,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t4=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}

/* k4419 in k4401 in k4090 in k4070 in k4032 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in ... */
static void C_ccall f_4421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[114]))(4,*((C_word*)lf[114]+1),((C_word*)t0)[2],lf[167],t1);}

/* k4577 in fold in k4547 in k4605 in k4599 in quote-option in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in ... */
static void C_fcall f_4579(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4579,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4586,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* csc.scm:1029: fold */
t5=((C_word*)((C_word*)t0)[5])[1];
f_4551(t5,t2,t4);}

/* k5070 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in ... */
static void C_ccall f_5072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:122: string-append */
t2=*((C_word*)lf[120]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[423],t1);}

/* k4572 in fold in k4547 in k4605 in k4599 in quote-option in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in ... */
static void C_ccall f_4574(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:1026: cons* */
t2=C_fast_retrieve(lf[126]);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],C_make_character(92),((C_word*)t0)[3],t1);}

/* k5077 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in ... */
static void C_ccall f_5079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5079,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5954,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t4=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}

/* k5066 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in ... */
static void C_ccall f_5068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:125: string-append */
t2=*((C_word*)lf[120]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[421],t1,lf[422]);}

/* k4502 in linker-libraries in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in ... */
static void C_ccall f_4504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:1005: string-intersperse */
t2=C_fast_retrieve(lf[100]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4429 in copy-files in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in ... */
static void C_ccall f_4431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4431,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[107]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4437,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_retrieve2(lf[42],"windows-shell"))){
/* csc.scm:991: ##sys#print */
t6=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[110],C_SCHEME_FALSE,t3);}
else{
/* csc.scm:991: ##sys#print */
t6=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[111],C_SCHEME_FALSE,t3);}}

/* k4435 in k4429 in copy-files in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in ... */
static void C_ccall f_4437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4437,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4440,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* csc.scm:991: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[14]))(4,*((C_word*)lf[14]+1),t2,C_make_character(32),((C_word*)t0)[4]);}

/* k3074 in k3133 in k3137 in k3047 in k2969 in k2960 in k2904 in k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in ... */
static void C_ccall f_3076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:809: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1858(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k4506 in linker-libraries in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in ... */
static void C_fcall f_4508(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4508,NULL,2,t0,t1);}
t2=C_retrieve2(lf[94],"static");
if(C_truep(C_retrieve2(lf[94],"static"))){
t3=C_retrieve2(lf[94],"static");
t4=(C_truep(C_retrieve2(lf[94],"static"))?C_a_i_list1(&a,1,C_retrieve2(lf[71],"extra-libraries")):C_a_i_list1(&a,1,C_retrieve2(lf[72],"extra-shared-libraries")));
/* csc.scm:1006: append */
t5=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[2],t1,t4);}
else{
t3=C_retrieve2(lf[95],"static-libs");
t4=(C_truep(C_retrieve2(lf[95],"static-libs"))?C_a_i_list1(&a,1,C_retrieve2(lf[71],"extra-libraries")):C_a_i_list1(&a,1,C_retrieve2(lf[72],"extra-shared-libraries")));
/* csc.scm:1006: append */
t5=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[2],t1,t4);}}

/* k2743 in k2731 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in ... */
static void C_ccall f_2745(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:718: append */
t2=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_retrieve2(lf[80],"compile-options"),t1);}

/* k2100 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_2102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:809: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1858(t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k4401 in k4090 in k4070 in k4032 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in ... */
static void C_ccall f_4403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4403,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4407,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[3],"osx"))){
/* csc.scm:979: make-pathname */
t4=C_fast_retrieve(lf[104]);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[2],t2,C_retrieve2(lf[45],"dynamic-libchicken"),lf[165]);}
else{
t4=C_retrieve2(lf[1],"mingw");
t5=(C_truep(C_retrieve2(lf[1],"mingw"))?C_retrieve2(lf[1],"mingw"):C_retrieve2(lf[5],"cygwin"));
if(C_truep(t5)){
/* csc.scm:979: make-pathname */
t6=C_fast_retrieve(lf[104]);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,((C_word*)t0)[2],t2,C_retrieve2(lf[45],"dynamic-libchicken"),lf[166]);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4421,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:986: number->string */
t7=*((C_word*)lf[168]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,C_fix((C_word)C_BINARY_VERSION));}}}

/* k4405 in k4401 in k4090 in k4070 in k4032 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in ... */
static void C_ccall f_4407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:979: make-pathname */
t2=C_fast_retrieve(lf[104]);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],C_retrieve2(lf[45],"dynamic-libchicken"),t1);}

/* fold in k4547 in k4605 in k4599 in quote-option in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in ... */
static void C_fcall f_4551(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(6);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4551,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_i_car(t2);
t4=t3;
if(C_truep(C_i_memq(t4,lf[118]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4574,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=t2;
t7=C_u_i_cdr(t6);
/* csc.scm:1026: fold */
t11=t5;
t12=t7;
t1=t11;
t2=t12;
goto loop;}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4579,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_u_i_char_whitespacep(t4))){
t6=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
t7=t5;
f_4579(t7,t6);}
else{
t6=t5;
f_4579(t6,C_SCHEME_UNDEFINED);}}}}

/* k3231 in a3193 in k3181 in k2969 in k2960 in k2904 in k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in ... */
static void C_ccall f_3233(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(&lf[54] /* (set! rc-files ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k4348 in lib-path in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in ... */
static void C_ccall f_4350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4350,2,t0,t1);}
t2=((C_word*)t0)[2];
if(C_truep(C_retrieve2(lf[18],"chicken-prefix"))){
t3=C_a_i_list2(&a,2,C_retrieve2(lf[18],"chicken-prefix"),lf[103]);
/* csc.scm:88: make-pathname */
t4=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,lf[105]);}
else{
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* k2757 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in ... */
static void C_ccall f_2759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(&lf[86] /* (set! link-options ...) */,t1);
/* csc.scm:809: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1858(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k3203 in a3193 in k3181 in k2969 in k2960 in k2904 in k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in ... */
static void C_ccall f_3205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(&lf[52] /* (set! scheme-files ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2941 in k2904 in k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in ... */
static void C_ccall f_2943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2943,2,t0,t1);}
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_a_i_string_to_number(&a,2,t2,C_fix(10));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2952,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:759: t-options */
f_1785(t4,C_a_i_list(&a,2,((C_word*)t0)[6],t2));}

/* k4366 in k4360 in k4090 in k4070 in k4032 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in ... */
static void C_ccall f_4368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_i_string_equal_p(t1,lf[169]))){
/* csc.scm:976: lib-path */
f_4342(((C_word*)t0)[2]);}
else{
if(C_truep(C_retrieve2(lf[22],"cross-chicken"))){
t2=C_retrieve2(lf[21],"host-mode");
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* csc.scm:976: lib-path */
f_4342(((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}
else{
/* csc.scm:976: lib-path */
f_4342(((C_word*)t0)[2]);}}}

/* k4360 in k4090 in k4070 in k4032 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in ... */
static void C_ccall f_4362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4362,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4368,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_TARGET_LIB_HOME),C_fix(0));}}

/* linker-options in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in ... */
static void C_fcall f_4466(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4466,NULL,1,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4474,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4494,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1001: append */
t4=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_retrieve2(lf[84],"linking-optimization-options"),C_retrieve2(lf[86],"link-options"));}

/* k4458 in k4438 in k4435 in k4429 in copy-files in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in ... */
static void C_ccall f_4460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:991: ##sys#print */
t2=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* f5844 in k4728 in k4722 in k4109 in k4106 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in ... */
static void C_ccall f5844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f5849 in k4140 in k4137 in k4129 in k4106 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in ... */
static void C_ccall f5849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2950 in k2941 in k2904 in k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in ... */
static void C_ccall f_2952(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
/* csc.scm:809: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1858(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k3217 in a3193 in k3181 in k2969 in k2960 in k2904 in k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in ... */
static void C_ccall f_3219(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(&lf[53] /* (set! c-files ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2251 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_2253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:617: exit */
t2=C_fast_retrieve(lf[13]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* k4547 in k4605 in k4599 in quote-option in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_4549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4549,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4551,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_4551(t5,((C_word*)t0)[3],t1);}

/* k4539 in k4529 in k4605 in k4599 in quote-option in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in ... */
static void C_ccall f_4541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:1031: string-append */
t2=*((C_word*)lf[120]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[121],t1,lf[122]);}

/* k4472 in linker-options in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in ... */
static void C_ccall f_4474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4474,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4481,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[94],"static"))){
t4=C_retrieve2(lf[1],"mingw");
t5=t3;
f_4481(t5,(C_truep(C_retrieve2(lf[1],"mingw"))?C_SCHEME_FALSE:C_i_not(C_retrieve2(lf[3],"osx"))));}
else{
t4=t3;
f_4481(t4,C_SCHEME_FALSE);}}

/* k4543 in k4605 in k4599 in quote-option in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_4545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* list->string */
t2=C_fast_retrieve(lf[125]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f5839 in k4748 in k4734 in k4731 in k4728 in k4722 in k4109 in k4106 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in ... */
static void C_ccall f5839(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2960 in k2904 in k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in ... */
static void C_fcall f_2962(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2962,NULL,2,t0,t1);}
if(C_truep(t1)){
/* csc.scm:762: t-options */
f_1785(((C_word*)t0)[3],C_a_i_list(&a,1,((C_word*)t0)[4]));}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2971,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_block_size(((C_word*)t0)[4]);
if(C_truep(C_fixnum_greaterp(t3,C_fix(1)))){
t4=C_subchar(((C_word*)t0)[4],C_fix(0));
t5=t2;
f_2971(t5,C_i_char_equalp(C_make_character(45),t4));}
else{
t4=t2;
f_2971(t4,C_SCHEME_FALSE);}}}

/* k4447 in k4444 in k4441 in k4438 in k4435 in k4429 in copy-files in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in ... */
static void C_ccall f_4449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4449,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4452,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:991: get-output-string */
t3=C_fast_retrieve(lf[109]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k4444 in k4441 in k4438 in k4435 in k4429 in copy-files in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in ... */
static void C_ccall f_4446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4446,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4449,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4456,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=t3;
t5=((C_word*)t0)[5];
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5817,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t7=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t5);}

/* k4438 in k4435 in k4429 in copy-files in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_4440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4440,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4443,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4460,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=t3;
t5=((C_word*)t0)[6];
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5822,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t7=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t5);}

/* quote-option in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in ... */
static void C_ccall f_4594(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4594,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4601,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4624,tmp=(C_word)a,a+=2,tmp);
/* csc.scm:1035: string-any */
t5=C_fast_retrieve(lf[128]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,t2);}

/* k4441 in k4438 in k4435 in k4429 in copy-files in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in ... */
static void C_ccall f_4443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4443,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4446,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:991: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[14]))(4,*((C_word*)lf[14]+1),t2,C_make_character(32),((C_word*)t0)[4]);}

/* k4394 in k4090 in k4070 in k4032 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in ... */
static void C_ccall f_4396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:987: copy-files */
f_4423(((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* f5822 in k4438 in k4435 in k4429 in copy-files in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in ... */
static void C_ccall f5822(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4073 in k4070 in k4032 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in ... */
static void C_ccall f_4075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4075,2,t0,t1);}
t2=(C_truep(C_retrieve2(lf[3],"osx"))?C_retrieve2(lf[67],"gui"):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4088,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:958: pathname-file */
t4=C_fast_retrieve(lf[164]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_retrieve2(lf[87],"target-filename"));}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];
f_4037(2,t4,t3);}}

/* k4070 in k4032 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in ... */
static void C_fcall f_4072(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4072,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4075,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4092,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[3],"osx"))){
t4=C_retrieve2(lf[67],"gui");
if(C_truep(C_retrieve2(lf[67],"gui"))){
/* csc.scm:954: make-pathname */
t5=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,((C_word*)((C_word*)t0)[3])[1],lf[172]);}
else{
t5=t3;
f_4092(2,t5,((C_word*)((C_word*)t0)[3])[1]);}}
else{
t4=t3;
f_4092(2,t4,((C_word*)((C_word*)t0)[3])[1]);}}
else{
t2=((C_word*)t0)[2];
f_4037(2,t2,C_SCHEME_UNDEFINED);}}

/* k3891 in for-each-loop560 in k3772 in k3769 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in ... */
static void C_ccall f_3893(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3883(t3,((C_word*)t0)[4],t2);}

/* k4454 in k4444 in k4441 in k4438 in k4435 in k4429 in copy-files in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in ... */
static void C_ccall f_4456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:991: ##sys#print */
t2=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* f5817 in k4444 in k4441 in k4438 in k4435 in k4429 in copy-files in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in ... */
static void C_ccall f5817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4450 in k4447 in k4444 in k4441 in k4438 in k4435 in k4429 in copy-files in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in ... */
static void C_ccall f_4452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:990: command */
f_4685(((C_word*)t0)[2],t1);}

/* k1704 in k1689 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in ... */
static void C_ccall f_1706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1706,2,t0,t1);}
if(C_truep(C_retrieve2(lf[18],"chicken-prefix"))){
t2=C_a_i_list2(&a,2,C_retrieve2(lf[18],"chicken-prefix"),lf[241]);
/* csc.scm:88: make-pathname */
t3=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t2,lf[242]);}
else{
/* csc.scm:267: conc */
t2=C_fast_retrieve(lf[237]);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[238],t1,lf[239]);}}

/* k4086 in k4073 in k4070 in k4032 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in ... */
static void C_ccall f_4088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4088,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t1;
t4=((C_word*)((C_word*)t0)[3])[1];
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4760,a[2]=t2,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:1073: make-pathname */
t6=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t4,lf[163]);}

/* k2731 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in ... */
static void C_ccall f_2733(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2733,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2737,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2745,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:718: string-split */
t5=C_fast_retrieve(lf[229]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k2735 in k2731 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in ... */
static void C_ccall f_2737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate2(&lf[80] /* (set! compile-options ...) */,t1);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t3);
/* csc.scm:809: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1858(t5,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k4056 in for-each-loop730 in k4035 in k4032 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in ... */
static void C_ccall f_4058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4048(t3,((C_word*)t0)[4],t2);}

/* k4584 in k4577 in fold in k4547 in k4605 in k4599 in quote-option in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in ... */
static void C_ccall f_4586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4586,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* for-each-loop560 in k3772 in k3769 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in ... */
static void C_fcall f_3883(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3883,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3893,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:881: g561 */
t5=((C_word*)t0)[3];
f_3775(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5053 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in ... */
static void C_ccall f_5055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:131: string-split */
t2=C_fast_retrieve(lf[229]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4479 in k4472 in linker-options in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in ... */
static void C_fcall f_4481(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[114]))(4,*((C_word*)lf[114]+1),((C_word*)t0)[2],((C_word*)t0)[3],lf[115]);}
else{
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[114]))(4,*((C_word*)lf[114]+1),((C_word*)t0)[2],((C_word*)t0)[3],lf[116]);}}

/* f5864 in k4279 in k4265 in k4259 in k4252 in k4249 in k4199 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in ... */
static void C_ccall f5864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3879 in k3810 in k3772 in k3769 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in ... */
static void C_ccall f_3881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:890: append */
t2=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_retrieve2(lf[57],"object-files"));}

/* f5869 in k4303 in k4289 in k4283 in k4249 in k4199 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in ... */
static void C_ccall f5869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* linker-libraries in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in ... */
static void C_fcall f_4496(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4496,NULL,1,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4504,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4508,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_retrieve2(lf[94],"static");
if(C_truep(C_retrieve2(lf[94],"static"))){
t5=C_retrieve2(lf[94],"static");
t6=t3;
f_4508(t6,(C_truep(C_retrieve2(lf[94],"static"))?C_retrieve2(lf[75],"library-files"):C_retrieve2(lf[76],"shared-library-files")));}
else{
t5=C_retrieve2(lf[95],"static-libs");
t6=t3;
f_4508(t6,(C_truep(C_retrieve2(lf[95],"static-libs"))?C_retrieve2(lf[75],"library-files"):C_retrieve2(lf[76],"shared-library-files")));}}

/* k3792 in k3777 in g561 in k3772 in k3769 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in ... */
static void C_ccall f_3794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:884: command */
f_4685(((C_word*)t0)[2],t1);}

/* k4492 in linker-options in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in ... */
static void C_ccall f_4494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:1000: string-intersperse */
t2=C_fast_retrieve(lf[100]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f5854 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in ... */
static void C_ccall f5854(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f5859 in k4206 in k4202 in k4199 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in ... */
static void C_ccall f5859(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3268 in a3193 in k3181 in k2969 in k2960 in k2904 in k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in ... */
static void C_ccall f_3270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(&lf[53] /* (set! c-files ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k4957 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in ... */
static void C_ccall f_4959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4959,2,t0,t1);}
t2=((C_word*)t0)[2];
f_4894(t2,C_a_i_list1(&a,1,t1));}

/* k3930 in k3769 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in ... */
static void C_ccall f_3932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_3907(t2,C_eqp(lf[210],t1));}

/* k4090 in k4070 in k4032 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in ... */
static void C_ccall f_4092(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4092,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t1;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4396,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4403,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4362,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:970: get-environment-variable */
t8=C_fast_retrieve(lf[170]);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,lf[171]);}

/* for-each-loop530 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in ... */
static void C_fcall f_3934(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3934,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3944,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:854: g531 */
t5=((C_word*)t0)[3];
f_3702(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3249 in k3244 in a3193 in k3181 in k2969 in k2960 in k2904 in k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in ... */
static void C_ccall f_3251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(&lf[53] /* (set! c-files ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f5928 in k3541 in k3538 in for-each-loop470 in k2019 in k2016 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in ... */
static void C_ccall f5928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f5923 in k3572 in k3541 in k3538 in for-each-loop470 in k2019 in k2016 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in ... */
static void C_ccall f5923(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3780 in k3777 in g561 in k3772 in k3769 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in ... */
static void C_ccall f_3782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3782,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_retrieve2(lf[58],"generated-object-files"));
t3=C_mutate2(&lf[58] /* (set! generated-object-files ...) */,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t4);
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k2059 in k2056 in k2053 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in ... */
static void C_ccall f_2061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2061,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2064,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:545: newline */
t3=*((C_word*)lf[225]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2062 in k2059 in k2056 in k2053 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in ... */
static void C_ccall f_2064(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:546: exit */
t2=C_fast_retrieve(lf[13]);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k3810 in k3772 in k3769 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in ... */
static void C_ccall f_3812(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3812,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3816,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3881,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:890: reverse */
t4=*((C_word*)lf[205]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)((C_word*)t0)[3])[1]);}

/* k3814 in k3810 in k3772 in k3769 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in ... */
static void C_ccall f_3816(C_word c,C_word t0,C_word t1){
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
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3816,2,t0,t1);}
t2=C_mutate2(&lf[57] /* (set! object-files ...) */,t1);
if(C_truep(C_retrieve2(lf[89],"keep-files"))){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_retrieve2(lf[138],"$delete-file");
t4=C_retrieve2(lf[55],"generated-c-files");
t5=C_i_check_list_2(C_retrieve2(lf[55],"generated-c-files"),lf[151]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3825,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3856,a[2]=t8,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_3856(t10,t6,C_retrieve2(lf[55],"generated-c-files"));}}

/* t-options in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in ... */
static void C_fcall f_1785(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1785,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1790,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:514: append */
t4=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_retrieve2(lf[77],"translate-options"),t2);}

/* f5896 in k3707 in k3704 in g531 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in ... */
static void C_ccall f5896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f5891 in k3734 in k3707 in k3704 in g531 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in ... */
static void C_ccall f5891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f5949 in k5000 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in ... */
static void C_ccall f5949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4943 in map-loop109 in k4909 in k4896 in k4892 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in ... */
static void C_ccall f_4945(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4945,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4916(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4916(t6,((C_word*)t0)[5],t5);}}

/* k3823 in k3814 in k3810 in k3772 in k3769 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in ... */
static void C_ccall f_3825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3825,2,t0,t1);}
t2=C_retrieve2(lf[138],"$delete-file");
t3=C_retrieve2(lf[56],"generated-rc-files");
t4=C_i_check_list_2(C_retrieve2(lf[56],"generated-rc-files"),lf[151]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3833,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_3833(t8,((C_word*)t0)[2],C_retrieve2(lf[56],"generated-rc-files"));}

/* k2053 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in ... */
static void C_ccall f_2055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2055,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2058,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[64],"show-ldflags"))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2081,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:543: linker-options */
f_4466(t3);}
else{
t3=t2;
f_2058(2,t3,C_SCHEME_UNDEFINED);}}

/* k2056 in k2053 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in ... */
static void C_ccall f_2058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2058,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2061,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[65],"show-libs"))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2074,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:544: linker-libraries */
f_4496(t3);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5934,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:545: newline */
t4=*((C_word*)lf[225]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* check in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in ... */
static void C_fcall f_1792(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1792,NULL,4,t1,t2,t3,t4);}
t5=C_i_length(t3);
if(C_truep(C_i_nullp(t4))){
if(C_truep(C_i_greater_or_equalp(t5,C_fix(1)))){
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
/* csc.scm:518: stop */
f_1405(t1,lf[142],C_a_i_list(&a,1,t2));}}
else{
t6=C_i_car(t4);
if(C_truep(C_i_greater_or_equalp(t5,t6))){
t7=C_SCHEME_UNDEFINED;
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
/* csc.scm:518: stop */
f_1405(t1,lf[142],C_a_i_list(&a,1,t2));}}}

/* f5934 in k2056 in k2053 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in ... */
static void C_ccall f5934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:546: exit */
t2=C_fast_retrieve(lf[13]);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k2016 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in ... */
static void C_fcall f_2018(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2018,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2021,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[87],"target-filename"))){
t3=t2;
f_2021(t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2028,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[93],"shared"))){
t4=C_i_car(C_retrieve2(lf[52],"scheme-files"));
/* csc.scm:563: pathname-replace-extension */
t5=C_fast_retrieve(lf[203]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,C_retrieve2(lf[39],"shared-library-extension"));}
else{
t4=C_i_car(C_retrieve2(lf[52],"scheme-files"));
/* csc.scm:564: pathname-replace-extension */
t5=C_fast_retrieve(lf[203]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,C_retrieve2(lf[37],"executable-extension"));}}}

/* k1788 in t-options in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in ... */
static void C_ccall f_1790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(&lf[77] /* (set! translate-options ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in ... */
static void C_ccall f_4998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4998,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=C_mutate2(&lf[73] /* (set! default-library-files ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4984,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4988,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t6=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_mpointer(&a,(void*)C_INSTALL_LIB_NAME),C_fix(0));}
else{
/* ##sys#peek-c-string */
t6=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_mpointer(&a,(void*)C_TARGET_LIB_NAME),C_fix(0));}}

/* map-loop621 in k3963 in compiler-options in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in ... */
static void C_fcall f_3973(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3973,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4002,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:897: g627 */
t5=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3969 in k3963 in compiler-options in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in ... */
static void C_ccall f_3971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:896: string-intersperse */
t2=C_fast_retrieve(lf[100]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2019 in k2016 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in ... */
static void C_fcall f_2021(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2021,NULL,2,t0,t1);}
t2=C_retrieve2(lf[52],"scheme-files");
t3=C_i_check_list_2(C_retrieve2(lf[52],"scheme-files"),lf[151]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3677,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_3677(t7,((C_word*)t0)[2],C_retrieve2(lf[52],"scheme-files"));}

/* f5964 in k5097 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in ... */
static void C_ccall f5964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2026 in k2016 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in ... */
static void C_ccall f_2028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(&lf[87] /* (set! target-filename ...) */,t1);
t3=((C_word*)t0)[2];
f_2021(t3,t2);}

/* f5969 in k5107 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 in ... */
static void C_ccall f5969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3905 in k3769 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in ... */
static void C_fcall f_3907(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3907,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3910,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:877: pathname-replace-extension */
t3=C_fast_retrieve(lf[203]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_retrieve2(lf[87],"target-filename"),lf[209]);}
else{
t2=((C_word*)t0)[2];
f_3774(t2,C_SCHEME_UNDEFINED);}}

/* k3800 in k3777 in g561 in k3772 in k3769 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in ... */
static void C_ccall f_3802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3802,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3806,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5901,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t6=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[3]);}

/* k3804 in k3800 in k3777 in g561 in k3772 in k3769 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in ... */
static void C_ccall f_3806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3806,2,t0,t1);}
t2=C_a_i_list3(&a,3,C_retrieve2(lf[30],"rc-compiler"),((C_word*)t0)[2],t1);
/* csc.scm:885: string-intersperse */
t3=C_fast_retrieve(lf[100]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t2);}

/* f5954 in k5077 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in ... */
static void C_ccall f5954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f5959 in k5087 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in ... */
static void C_ccall f5959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4968 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in ... */
static void C_ccall f_4970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4970,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4974,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t4=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_INSTALL_INCLUDE_HOME),C_fix(0));}
else{
/* ##sys#peek-c-string */
t4=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_TARGET_INCLUDE_HOME),C_fix(0));}}

/* k4972 in k4968 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in ... */
static void C_ccall f_4974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4974,2,t0,t1);}
if(C_truep(C_retrieve2(lf[18],"chicken-prefix"))){
t2=C_a_i_list2(&a,2,C_retrieve2(lf[18],"chicken-prefix"),((C_word*)t0)[2]);
/* csc.scm:88: make-pathname */
t3=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,lf[414]);}
else{
t2=((C_word*)t0)[3];
f_1584(2,t2,t1);}}

/* k4734 in k4731 in k4728 in k4722 in k4109 in k4106 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in ... */
static void C_ccall f_4736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4736,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4739,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4746,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4750,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1070: make-pathname */
t5=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_retrieve2(lf[26],"home"),lf[173]);}

/* k4731 in k4728 in k4722 in k4109 in k4106 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in ... */
static void C_ccall f_4733(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4733,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4736,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:1068: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[14]))(4,*((C_word*)lf[14]+1),t2,C_make_character(32),((C_word*)t0)[4]);}

/* k3911 in k3908 in k3905 in k3769 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in ... */
static void C_ccall f_3913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3913,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_retrieve2(lf[54],"rc-files"));
t3=C_mutate2(&lf[54] /* (set! rc-files ...) */,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],C_retrieve2(lf[56],"generated-rc-files"));
t5=C_mutate2(&lf[56] /* (set! generated-rc-files ...) */,t4);
t6=((C_word*)t0)[3];
f_3774(t6,t5);}

/* k3908 in k3905 in k3769 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in ... */
static void C_ccall f_3910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3910,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3913,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3925,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:878: pathname-file */
t5=C_fast_retrieve(lf[164]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,C_retrieve2(lf[87],"target-filename"));}

/* k4728 in k4722 in k4109 in k4106 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in ... */
static void C_ccall f_4730(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4730,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4733,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4754,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5844,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t6=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[5]);}

/* k4737 in k4734 in k4731 in k4728 in k4722 in k4109 in k4106 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in ... */
static void C_ccall f_4739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4739,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4742,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1068: get-output-string */
t3=C_fast_retrieve(lf[109]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k2531 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_2533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:809: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1858(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k4986 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in ... */
static void C_ccall f_4988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:225: string-append */
t2=*((C_word*)lf[120]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[417],t1);}

/* k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in ... */
static void C_ccall f_4984(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4984,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=C_mutate2(&lf[74] /* (set! default-shared-library-files ...) */,t2);
t4=C_mutate2(&lf[75] /* (set! library-files ...) */,C_retrieve2(lf[73],"default-library-files"));
t5=C_mutate2(&lf[76] /* (set! shared-library-files ...) */,C_retrieve2(lf[74],"default-shared-library-files"));
t6=lf[77] /* translate-options */ =C_SCHEME_END_OF_LIST;;
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1584,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4970,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:234: make-pathname */
t9=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,lf[415],lf[416]);}

/* k2090 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_2092(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:539: append */
t2=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_retrieve2(lf[86],"link-options"),t1);}

/* k4703 in $delete-file in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in ... */
static void C_ccall f_4705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_retrieve2(lf[66],"dry-run"))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* csc.scm:1063: delete-file */
t2=C_fast_retrieve(lf[139]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* $delete-file in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in ... */
static void C_ccall f_4701(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4701,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4705,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[88],"verbose"))){
/* csc.scm:1062: print */
t4=*((C_word*)lf[137]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[140],t2);}
else{
if(C_truep(C_retrieve2(lf[66],"dry-run"))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
/* csc.scm:1063: delete-file */
t4=C_fast_retrieve(lf[139]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t2);}}}

/* k3923 in k3908 in k3905 in k3769 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in ... */
static void C_ccall f_3925(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3925,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t1;
t4=((C_word*)t0)[3];
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4828,a[2]=t3,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve2(lf[88],"verbose"))){
/* csc.scm:1107: print */
t6=*((C_word*)lf[137]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,lf[208],t4);}
else{
t6=t5;
f_4828(2,t6,C_SCHEME_UNDEFINED);}}

/* k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in ... */
static void C_ccall f_2099(C_word c,C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2099,2,t0,t1);}
t2=t1;
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2102,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_eqp(t3,lf[249]);
t6=(C_truep(t5)?t5:C_eqp(t3,lf[250]));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2114,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1745,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t10=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,C_mpointer(&a,(void*)C_CSC_PROGRAM),C_fix(0));}
else{
t7=C_eqp(t3,lf[255]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2126,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2133,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:590: chicken-version */
t10=C_fast_retrieve(lf[256]);
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t8=C_eqp(t3,lf[257]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2142,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2149,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:593: sprintf */
t11=*((C_word*)lf[107]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t10,C_retrieve2(lf[27],"translator"),lf[258]);}
else{
t9=C_eqp(t3,lf[259]);
if(C_truep(t9)){
t10=lf[59] /* cpp-mode */ =C_SCHEME_TRUE;;
if(C_truep(C_retrieve2(lf[3],"osx"))){
t11=C_a_i_cons(&a,2,lf[260],C_retrieve2(lf[80],"compile-options"));
t12=C_mutate2(&lf[80] /* (set! compile-options ...) */,t11);
/* csc.scm:809: loop */
t13=((C_word*)((C_word*)t0)[2])[1];
f_1858(t13,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
/* csc.scm:809: loop */
t11=((C_word*)((C_word*)t0)[2])[1];
f_1858(t11,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}}
else{
t10=C_eqp(t3,lf[261]);
if(C_truep(t10)){
t11=lf[60] /* objc-mode */ =C_SCHEME_TRUE;;
/* csc.scm:809: loop */
t12=((C_word*)((C_word*)t0)[2])[1];
f_1858(t12,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t11=C_eqp(t3,lf[262]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2180,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:602: cons* */
t13=C_fast_retrieve(lf[126]);
((C_proc5)(void*)(*((C_word*)t13+1)))(5,t13,t12,lf[263],lf[264],C_retrieve2(lf[77],"translate-options"));}
else{
t12=C_eqp(t3,lf[265]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2191,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:606: cons* */
t14=C_fast_retrieve(lf[126]);
((C_proc5)(void*)(*((C_word*)t14+1)))(5,t14,t13,lf[266],lf[267],C_retrieve2(lf[77],"translate-options"));}
else{
t13=C_eqp(t3,lf[268]);
if(C_truep(t13)){
t14=lf[62] /* inquiry-only */ =C_SCHEME_TRUE;;
t15=lf[63] /* show-cflags */ =C_SCHEME_TRUE;;
/* csc.scm:809: loop */
t16=((C_word*)((C_word*)t0)[2])[1];
f_1858(t16,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t14=C_eqp(t3,lf[269]);
if(C_truep(t14)){
t15=lf[62] /* inquiry-only */ =C_SCHEME_TRUE;;
t16=lf[64] /* show-ldflags */ =C_SCHEME_TRUE;;
/* csc.scm:809: loop */
t17=((C_word*)((C_word*)t0)[2])[1];
f_1858(t17,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t15=C_eqp(t3,lf[270]);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2217,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:614: print */
t17=*((C_word*)lf[137]+1);
((C_proc3)(void*)(*((C_word*)t17+1)))(3,t17,t16,C_retrieve2(lf[28],"compiler"));}
else{
t16=C_eqp(t3,lf[271]);
if(C_truep(t16)){
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2229,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:615: print */
t18=*((C_word*)lf[137]+1);
((C_proc3)(void*)(*((C_word*)t18+1)))(3,t18,t17,C_retrieve2(lf[29],"c++-compiler"));}
else{
t17=C_eqp(t3,lf[272]);
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2241,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:616: print */
t19=*((C_word*)lf[137]+1);
((C_proc3)(void*)(*((C_word*)t19+1)))(3,t19,t18,C_retrieve2(lf[31],"linker"));}
else{
t18=C_eqp(t3,lf[273]);
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2253,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:617: print */
t20=*((C_word*)lf[137]+1);
((C_proc3)(void*)(*((C_word*)t20+1)))(3,t20,t19,C_retrieve2(lf[26],"home"));}
else{
t19=C_eqp(t3,lf[274]);
if(C_truep(t19)){
t20=lf[62] /* inquiry-only */ =C_SCHEME_TRUE;;
t21=lf[65] /* show-libs */ =C_SCHEME_TRUE;;
/* csc.scm:809: loop */
t22=((C_word*)((C_word*)t0)[2])[1];
f_1858(t22,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t20=C_eqp(t3,lf[275]);
t21=(C_truep(t20)?t20:C_eqp(t3,lf[276]));
if(C_truep(t21)){
t22=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2276,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_numberp(C_retrieve2(lf[88],"verbose")))){
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2291,a[2]=t22,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:623: cons* */
t24=C_fast_retrieve(lf[126]);
((C_proc5)(void*)(*((C_word*)t24+1)))(5,t24,t23,lf[279],lf[280],C_retrieve2(lf[80],"compile-options"));}
else{
t23=t22;
f_2276(t23,C_SCHEME_UNDEFINED);}}
else{
t22=C_eqp(t3,lf[281]);
t23=(C_truep(t22)?t22:C_eqp(t3,lf[282]));
if(C_truep(t23)){
t24=C_a_i_cons(&a,2,lf[283],C_retrieve2(lf[80],"compile-options"));
t25=C_mutate2(&lf[80] /* (set! compile-options ...) */,t24);
/* csc.scm:631: t-options */
f_1785(t4,C_a_i_list(&a,1,lf[284]));}
else{
t24=C_eqp(t3,lf[285]);
t25=(C_truep(t24)?t24:C_eqp(t3,lf[286]));
if(C_truep(t25)){
t26=lf[90] /* translate-only */ =C_SCHEME_TRUE;;
/* csc.scm:634: t-options */
f_1785(t4,C_a_i_list(&a,1,lf[287]));}
else{
t26=C_eqp(t3,lf[288]);
t27=(C_truep(t26)?t26:C_eqp(t3,lf[289]));
if(C_truep(t27)){
t28=lf[90] /* translate-only */ =C_SCHEME_TRUE;;
/* csc.scm:637: t-options */
f_1785(t4,C_a_i_list(&a,1,lf[290]));}
else{
t28=C_eqp(t3,lf[291]);
if(C_truep(t28)){
t29=lf[89] /* keep-files */ =C_SCHEME_TRUE;;
/* csc.scm:809: loop */
t30=((C_word*)((C_word*)t0)[2])[1];
f_1858(t30,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t29=C_eqp(t3,lf[292]);
if(C_truep(t29)){
t30=lf[91] /* compile-only */ =C_SCHEME_TRUE;;
/* csc.scm:809: loop */
t31=((C_word*)((C_word*)t0)[2])[1];
f_1858(t31,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t30=C_eqp(t3,lf[293]);
if(C_truep(t30)){
t31=lf[90] /* translate-only */ =C_SCHEME_TRUE;;
/* csc.scm:809: loop */
t32=((C_word*)((C_word*)t0)[2])[1];
f_1858(t32,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t31=C_eqp(t3,lf[294]);
t32=(C_truep(t31)?t31:C_eqp(t3,lf[295]));
if(C_truep(t32)){
t33=lf[61] /* embedded */ =C_SCHEME_TRUE;;
t34=C_a_i_cons(&a,2,lf[296],C_retrieve2(lf[80],"compile-options"));
t35=C_mutate2(&lf[80] /* (set! compile-options ...) */,t34);
/* csc.scm:809: loop */
t36=((C_word*)((C_word*)t0)[2])[1];
f_1858(t36,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t33=C_eqp(t3,lf[297]);
t34=(C_truep(t33)?t33:C_eqp(t3,lf[298]));
if(C_truep(t34)){
t35=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2384,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:645: check */
f_1792(t35,t2,((C_word*)((C_word*)t0)[4])[1],C_SCHEME_END_OF_LIST);}
else{
t35=C_eqp(t3,lf[300]);
if(C_truep(t35)){
t36=f_1841(C_a_i(&a,6));
/* csc.scm:809: loop */
t37=((C_word*)((C_word*)t0)[2])[1];
f_1858(t37,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t36=C_eqp(t3,lf[301]);
if(C_truep(t36)){
t37=lf[43] /* generate-manifest */ =C_SCHEME_TRUE;;
/* csc.scm:809: loop */
t38=((C_word*)((C_word*)t0)[2])[1];
f_1858(t38,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t37=C_eqp(t3,lf[302]);
if(C_truep(t37)){
t38=lf[67] /* gui */ =C_SCHEME_TRUE;;
t39=C_a_i_cons(&a,2,lf[303],C_retrieve2(lf[80],"compile-options"));
t40=C_mutate2(&lf[80] /* (set! compile-options ...) */,t39);
if(C_truep(C_retrieve2(lf[1],"mingw"))){
t41=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2447,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t42=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2451,a[2]=t41,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t43=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t43+1)))(4,t43,t42,C_mpointer(&a,(void*)C_INSTALL_SHARE_HOME),C_fix(0));}
else{
/* csc.scm:809: loop */
t41=((C_word*)((C_word*)t0)[2])[1];
f_1858(t41,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}}
else{
t38=C_eqp(t3,lf[309]);
if(C_truep(t38)){
t39=lf[68] /* deploy */ =C_SCHEME_TRUE;;
t40=lf[69] /* deployed */ =C_SCHEME_TRUE;;
/* csc.scm:809: loop */
t41=((C_word*)((C_word*)t0)[2])[1];
f_1858(t41,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t39=C_eqp(t3,lf[310]);
if(C_truep(t39)){
t40=lf[69] /* deployed */ =C_SCHEME_TRUE;;
/* csc.scm:809: loop */
t41=((C_word*)((C_word*)t0)[2])[1];
f_1858(t41,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t40=C_eqp(t3,lf[311]);
if(C_truep(t40)){
t41=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2475,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:671: check */
f_1792(t41,t2,((C_word*)((C_word*)t0)[4])[1],C_SCHEME_END_OF_LIST);}
else{
t41=C_eqp(t3,lf[313]);
t42=(C_truep(t41)?t41:C_eqp(t3,lf[314]));
if(C_truep(t42)){
t43=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2502,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:676: check */
f_1792(t43,t2,((C_word*)((C_word*)t0)[4])[1],C_SCHEME_END_OF_LIST);}
else{
t43=C_eqp(t3,lf[315]);
t44=(C_truep(t43)?t43:C_eqp(t3,lf[316]));
if(C_truep(t44)){
t45=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2523,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:680: cons* */
t46=C_fast_retrieve(lf[126]);
((C_proc5)(void*)(*((C_word*)t46+1)))(5,t46,t45,lf[317],lf[318],((C_word*)((C_word*)t0)[4])[1]);}
else{
t45=C_eqp(t3,lf[319]);
if(C_truep(t45)){
t46=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2533,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:681: cons* */
t47=C_fast_retrieve(lf[126]);
((C_proc5)(void*)(*((C_word*)t47+1)))(5,t47,t46,lf[320],lf[321],((C_word*)((C_word*)t0)[4])[1]);}
else{
t46=C_eqp(t3,lf[322]);
if(C_truep(t46)){
t47=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2543,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:682: cons* */
t48=C_fast_retrieve(lf[126]);
((C_proc5)(void*)(*((C_word*)t48+1)))(5,t48,t47,lf[323],lf[324],((C_word*)((C_word*)t0)[4])[1]);}
else{
t47=C_eqp(t3,lf[325]);
if(C_truep(t47)){
t48=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2553,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:683: cons* */
t49=C_fast_retrieve(lf[126]);
((C_proc5)(void*)(*((C_word*)t49+1)))(5,t49,t48,lf[326],lf[327],((C_word*)((C_word*)t0)[4])[1]);}
else{
t48=C_eqp(t3,lf[328]);
if(C_truep(t48)){
t49=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2563,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:684: cons* */
t50=C_fast_retrieve(lf[126]);
((C_proc5)(void*)(*((C_word*)t50+1)))(5,t50,t49,lf[329],lf[330],((C_word*)((C_word*)t0)[4])[1]);}
else{
t49=C_eqp(t3,lf[331]);
if(C_truep(t49)){
t50=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2573,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:686: cons* */
t51=C_fast_retrieve(lf[126]);
((C_proc5)(void*)(*((C_word*)t51+1)))(5,t51,t50,lf[332],lf[333],((C_word*)((C_word*)t0)[4])[1]);}
else{
t50=C_eqp(t3,lf[334]);
if(C_truep(t50)){
t51=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2583,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:687: cons* */
t52=C_fast_retrieve(lf[126]);
((C_proc5)(void*)(*((C_word*)t52+1)))(5,t52,t51,lf[335],lf[336],((C_word*)((C_word*)t0)[4])[1]);}
else{
t51=C_eqp(t3,lf[337]);
if(C_truep(t51)){
t52=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2593,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:688: cons* */
t53=C_fast_retrieve(lf[126]);
((C_proc5)(void*)(*((C_word*)t53+1)))(5,t53,t52,lf[338],lf[339],((C_word*)((C_word*)t0)[4])[1]);}
else{
t52=C_eqp(t3,lf[340]);
if(C_truep(t52)){
t53=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2603,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:689: cons* */
t54=C_fast_retrieve(lf[126]);
((C_proc5)(void*)(*((C_word*)t54+1)))(5,t54,t53,lf[341],lf[342],((C_word*)((C_word*)t0)[4])[1]);}
else{
t53=C_eqp(t3,lf[343]);
if(C_truep(t53)){
t54=lf[88] /* verbose */ =C_SCHEME_TRUE;;
t55=lf[66] /* dry-run */ =C_SCHEME_TRUE;;
/* csc.scm:809: loop */
t56=((C_word*)((C_word*)t0)[2])[1];
f_1858(t56,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t54=C_eqp(t3,lf[344]);
t55=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2620,a[2]=((C_word*)t0)[8],a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[6],a[9]=t2,a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t54)){
t56=t55;
f_2620(t56,t54);}
else{
t56=C_eqp(t3,lf[401]);
t57=t55;
f_2620(t57,(C_truep(t56)?t56:C_eqp(t3,lf[402])));}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k2500 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_2502(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t3);
t5=C_mutate2(&lf[87] /* (set! target-filename ...) */,t2);
/* csc.scm:809: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_1858(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k2551 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_2553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:809: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1858(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k2782 in k2770 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in ... */
static void C_ccall f_2784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:724: append */
t2=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_retrieve2(lf[86],"link-options"),t1);}

/* k4229 in k4202 in k4199 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in ... */
static void C_ccall f_4231(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:917: make-pathname */
t2=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],t1);}

/* k2521 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_2523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:809: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1858(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k2389 in k2386 in k2382 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in ... */
static void C_ccall f_2391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_u_i_cdr(t2));
/* csc.scm:809: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1858(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f_1366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1366,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1369,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d1_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f_1369(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1369,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1372,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d13_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2795 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in ... */
static void C_ccall f_2797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2797,2,t0,t1);}
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate2(&lf[70] /* (set! rpath ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2811,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2827,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:729: build-platform */
t6=C_fast_retrieve(lf[361]);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k4776 in k4773 in k4770 in k4767 in k4764 in k4761 in k4758 in k4086 in k4073 in k4070 in k4032 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in ... */
static void C_ccall f_4778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k1358 in k1355 in k1352 */
static void C_ccall f_1360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1360,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1363,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1361 in k1358 in k1355 in k1352 */
static void C_ccall f_1363(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1363,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1366,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k4773 in k4770 in k4767 in k4764 in k4761 in k4758 in k4086 in k4073 in k4070 in k4032 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in ... */
static void C_ccall f_4775(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4775,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4778,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4781,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* csc.scm:1082: file-exists? */
t5=C_fast_retrieve(lf[157]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k4770 in k4767 in k4764 in k4761 in k4758 in k4086 in k4073 in k4070 in k4032 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in ... */
static void C_ccall f_4772(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4772,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4775,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:1081: make-pathname */
t3=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],lf[158]);}

/* k4239 in k4202 in k4199 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in ... */
static void C_ccall f_4241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:920: string-append */
t2=*((C_word*)lf[120]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[184],t1);}

/* k2571 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_2573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:809: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1858(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k2382 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_2384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2384,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2388,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t4=C_a_i_list1(&a,1,t3);
/* csc.scm:646: append */
t5=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,C_retrieve2(lf[96],"required-extensions"),t4);}

/* k4216 in k4210 in k4206 in k4202 in k4199 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in ... */
static void C_ccall f_4218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4218,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_4028(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4221,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[88],"verbose"))){
/* csc.scm:925: print */
t3=*((C_word*)lf[137]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[182],((C_word*)((C_word*)t0)[3])[1]);}
else{
/* csc.scm:926: create-directory */
t3=C_fast_retrieve(lf[181]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);}}}

/* k4744 in k4734 in k4731 in k4728 in k4722 in k4109 in k4106 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in ... */
static void C_ccall f_4746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:1068: ##sys#print */
t2=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k3284 in k3280 in a3193 in k3181 in k2969 in k2960 in k2904 in k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in ... */
static void C_ccall f_3286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(&lf[57] /* (set! object-files ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k4740 in k4737 in k4734 in k4731 in k4728 in k4722 in k4109 in k4106 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in ... */
static void C_ccall f_4742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:1067: command */
f_4685(((C_word*)t0)[2],t1);}

/* k4210 in k4206 in k4202 in k4199 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in ... */
static void C_ccall f_4212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4212,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4218,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:923: directory-exists? */
t4=C_fast_retrieve(lf[183]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)((C_word*)t0)[4])[1]);}

/* k3280 in a3193 in k3181 in k2969 in k2960 in k2904 in k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in ... */
static void C_fcall f_3282(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3282,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3286,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[3]);
/* csc.scm:802: append */
t4=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,C_retrieve2(lf[57],"object-files"),t3);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3294,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[3]);
/* csc.scm:803: append */
t4=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,C_retrieve2(lf[52],"scheme-files"),t3);}}

/* k2541 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_2543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:809: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1858(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* f5886 in k1935 in k1932 in k1926 in k1919 in k1916 in k1913 in k1910 in k1907 in k1904 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in ... */
static void C_ccall f5886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f5881 in k1955 in k1941 in k1938 in k1935 in k1932 in k1926 in k1919 in k1916 in k1913 in k1910 in k1907 in k1904 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in ... */
static void C_ccall f5881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3137 in k3047 in k2969 in k2960 in k2904 in k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in ... */
static void C_ccall f_3139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3139,2,t0,t1);}
t2=C_i_cdr(t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3135,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* csc.scm:780: lset-difference */
t5=C_fast_retrieve(lf[377]);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,*((C_word*)lf[378]+1),t3,lf[379]);}

/* k2079 in k2053 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in ... */
static void C_ccall f_2081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:543: print* */
t2=*((C_word*)lf[226]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_make_character(32));}

/* k2386 in k2382 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in ... */
static void C_ccall f_2388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2388,2,t0,t1);}
t2=C_mutate2(&lf[96] /* (set! required-extensions ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2391,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:647: t-options */
f_1785(t3,C_a_i_list(&a,2,lf[299],t4));}

/* k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f_1381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1381,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5171,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:69: build-platform */
t3=C_fast_retrieve(lf[361]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k4748 in k4734 in k4731 in k4728 in k4722 in k4109 in k4106 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in ... */
static void C_ccall f_4750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4750,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5839,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t4=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}

/* k3292 in k3280 in a3193 in k3181 in k2969 in k2960 in k2904 in k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in ... */
static void C_ccall f_3294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(&lf[52] /* (set! scheme-files ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k4219 in k4216 in k4210 in k4206 in k4202 in k4199 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in ... */
static void C_ccall f_4221(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:926: create-directory */
t2=C_fast_retrieve(lf[181]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);}

/* k4752 in k4728 in k4722 in k4109 in k4106 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in ... */
static void C_ccall f_4754(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:1068: ##sys#print */
t2=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k2591 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_2593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:809: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1858(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k2086 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in ... */
static void C_ccall f_2088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:542: print* */
t2=*((C_word*)lf[226]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_make_character(32));}

/* f5874 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in ... */
static void C_ccall f5874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1352 */
static void C_ccall f_1354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1354,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1357,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1355 in k1352 */
static void C_ccall f_1357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1357,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1360,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_chicken_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2072 in k2056 in k2053 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in ... */
static void C_ccall f_2074(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:544: print* */
t2=*((C_word*)lf[226]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_make_character(32));}

/* k4722 in k4109 in k4106 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in ... */
static void C_ccall f_4724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4724,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[107]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4730,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:1068: ##sys#print */
t6=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[174],C_SCHEME_FALSE,t3);}

/* k2561 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_2563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:809: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1858(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* stop in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_fcall f_1405(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1405,NULL,3,t1,t2,t3);}
t4=*((C_word*)lf[11]+1);
t5=*((C_word*)lf[11]+1);
t6=C_i_check_port_2(*((C_word*)lf[11]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[12]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1412,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1428,a[2]=t7,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-c-string */
t9=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,C_mpointer(&a,(void*)C_CSC_PROGRAM),C_fix(0));}

/* k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f_1402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1402,2,t0,t1);}
t2=C_mutate2(&lf[8] /* (set! elf ...) */,C_u_i_memq(t1,lf[9]));
t3=C_mutate2(&lf[10] /* (set! stop ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1405,tmp=(C_word)a,a+=2,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1432,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:81: get-environment-variable */
t5=C_fast_retrieve(lf[170]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[431]);}

/* use-private-repository in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in ... */
static C_word C_fcall f_1841(C_word *a){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
t1=C_a_i_cons(&a,2,lf[149],C_retrieve2(lf[80],"compile-options"));
t2=C_mutate2(&lf[80] /* (set! compile-options ...) */,t1);
if(C_truep(C_retrieve2(lf[3],"osx"))){
t3=C_a_i_cons(&a,2,lf[150],C_retrieve2(lf[86],"link-options"));
t4=C_mutate2(&lf[86] /* (set! link-options ...) */,t3);
return(t4);}
else{
t3=C_SCHEME_UNDEFINED;
return(t3);}}

/* f5906 in k3777 in g561 in k3772 in k3769 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in ... */
static void C_ccall f5906(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in ... */
static void C_fcall f_1858(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1858,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1869,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:538: append */
t4=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_retrieve2(lf[80],"compile-options"),C_retrieve2(lf[81],"builtin-compile-options"));}
else{
t3=C_i_car(t2);
t4=t3;
t5=t2;
t6=C_u_i_cdr(t5);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2099,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t7,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[6],a[9]=t4,tmp=(C_word)a,a+=10,tmp);
/* csc.scm:584: string->symbol */
t9=*((C_word*)lf[403]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t4);}}

/* k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f_1375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1375,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1378,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f_1378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1378,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1381,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k4896 in k4892 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in ... */
static void C_ccall f_4898(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4898,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4901,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t2;
t4=t1;
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4911,a[2]=t8,a[3]=t6,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:246: string-split */
t10=C_fast_retrieve(lf[229]);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,t4,lf[410]);}
else{
/* csc.scm:242: append */
t3=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_END_OF_LIST);}}

/* f5901 in k3800 in k3777 in g561 in k3772 in k3769 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in ... */
static void C_ccall f5901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* a4788 in k4782 in k4779 in k4773 in k4770 in k4767 in k4764 in k4761 in k4758 in k4086 in k4073 in k4070 in k4032 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in ... */
static void C_ccall f_4789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4789,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4797,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_cons(&a,2,lf[152],C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
t5=C_a_i_cons(&a,2,lf[153],t4);
/* csc.scm:1072: ##sys#print-to-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[154]))(3,*((C_word*)lf[154]+1),t2,t5);}

/* k4892 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in ... */
static void C_fcall f_4894(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4894,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4898,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:244: get-environment-variable */
t4=C_fast_retrieve(lf[170]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[411]);}

/* k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f_1372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1372,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1375,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k4779 in k4773 in k4770 in k4767 in k4764 in k4761 in k4758 in k4086 in k4073 in k4070 in k4032 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in ... */
static void C_ccall f_4781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4781,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4784,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve2(lf[88],"verbose"))){
/* csc.scm:1083: print */
t3=*((C_word*)lf[137]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[156],((C_word*)t0)[6]);}
else{
t3=t2;
f_4784(2,t3,C_SCHEME_UNDEFINED);}}}

/* k4782 in k4779 in k4773 in k4770 in k4767 in k4764 in k4761 in k4758 in k4086 in k4073 in k4070 in k4032 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in ... */
static void C_ccall f_4784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4784,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4789,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1084: with-output-to-file */
t3=C_fast_retrieve(lf[155]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[4],t2);}

/* k1825 in k1821 in shared-build in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_1827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1827,2,t0,t1);}
t2=C_mutate2(&lf[80] /* (set! compile-options ...) */,t1);
t3=(C_truep(C_retrieve2(lf[3],"osx"))?(C_truep(((C_word*)t0)[2])?C_a_i_cons(&a,2,lf[143],C_retrieve2(lf[86],"link-options")):C_a_i_cons(&a,2,lf[144],C_retrieve2(lf[86],"link-options"))):C_a_i_cons(&a,2,lf[145],C_retrieve2(lf[86],"link-options")));
t4=C_mutate2(&lf[86] /* (set! link-options ...) */,t3);
t5=lf[93] /* shared */ =C_SCHEME_TRUE;;
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k4820 in k4813 in k4767 in k4764 in k4761 in k4758 in k4086 in k4073 in k4070 in k4032 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in ... */
static void C_ccall f_4822(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:1078: copy-files */
f_4423(((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k4826 in k3923 in k3908 in k3905 in k3769 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in ... */
static void C_ccall f_4828(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4828,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4833,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1108: with-output-to-file */
t3=C_fast_retrieve(lf[155]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[4],t2);}

/* k1821 in shared-build in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in ... */
static void C_ccall f_1823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1823,2,t0,t1);}
t2=C_mutate2(&lf[77] /* (set! translate-options ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1827,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:522: append */
t4=*((C_word*)lf[101]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,C_retrieve2(lf[41],"pic-options"),lf[146],C_retrieve2(lf[80],"compile-options"));}

/* k4795 in a4788 in k4782 in k4779 in k4773 in k4770 in k4767 in k4764 in k4761 in k4758 in k4086 in k4073 in k4070 in k4032 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in ... */
static void C_ccall f_4797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:1085: g881 */
t2=*((C_word*)lf[137]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4767 in k4764 in k4761 in k4758 in k4086 in k4073 in k4070 in k4032 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in ... */
static void C_ccall f_4769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4769,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4772,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4815,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:1077: file-exists? */
t4=C_fast_retrieve(lf[157]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}

/* for-each-loop470 in k2019 in k2016 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in ... */
static void C_fcall f_3677(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3677,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3687,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=C_i_length(C_retrieve2(lf[52],"scheme-files"));
t8=C_eqp(C_fix(1),t7);
t9=(C_truep(t8)?C_retrieve2(lf[87],"target-filename"):t6);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3540,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[59],"cpp-mode"))){
/* csc.scm:820: pathname-replace-extension */
t11=C_fast_retrieve(lf[203]);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t10,t9,lf[221]);}
else{
if(C_truep(C_retrieve2(lf[60],"objc-mode"))){
/* csc.scm:820: pathname-replace-extension */
t11=C_fast_retrieve(lf[203]);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t10,t9,lf[222]);}
else{
/* csc.scm:820: pathname-replace-extension */
t11=C_fast_retrieve(lf[203]);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t10,t9,lf[223]);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4764 in k4761 in k4758 in k4086 in k4073 in k4070 in k4032 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in ... */
static void C_ccall f_4766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4766,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4769,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* csc.scm:1076: make-pathname */
t4=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[160]);}

/* k4758 in k4086 in k4073 in k4070 in k4032 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in ... */
static void C_ccall f_4760(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4760,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4763,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:1074: make-pathname */
t4=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],lf[162]);}

/* k4761 in k4758 in k4086 in k4073 in k4070 in k4032 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in ... */
static void C_ccall f_4763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4763,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4766,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:1075: make-pathname */
t4=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[5],lf[161]);}

/* k2131 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_2133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:590: print */
t2=*((C_word*)lf[137]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3122 in map-loop411 in k3133 in k3137 in k3047 in k2969 in k2960 in k2904 in k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in ... */
static void C_ccall f_3124(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3124,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3095(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3095(t6,((C_word*)t0)[5],t5);}}

/* k3646 in k3572 in k3541 in k3538 in for-each-loop470 in k2019 in k2016 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in ... */
static void C_ccall f_3648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3648,2,t0,t1);}
t2=((C_word*)t0)[2];
f_3582(t2,C_a_i_list(&a,2,lf[219],t1));}

/* k2140 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_2142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:594: exit */
t2=C_fast_retrieve(lf[13]);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k3133 in k3137 in k3047 in k2969 in k2960 in k2904 in k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in ... */
static void C_ccall f_3135(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3135,2,t0,t1);}
if(C_truep(C_i_nullp(t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3076,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(((C_word*)t0)[5],lf[99]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3093,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3095,a[2]=t6,a[3]=t10,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_3095(t12,t8,((C_word*)t0)[5]);}
else{
/* csc.scm:783: stop */
f_1405(((C_word*)t0)[6],lf[376],C_a_i_list(&a,1,((C_word*)t0)[7]));}}

/* k2147 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_2149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:593: system */
t2=C_fast_retrieve(lf[134]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3710 in k3707 in k3704 in g531 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in ... */
static void C_ccall f_3712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3712,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_retrieve2(lf[58],"generated-object-files"));
t3=C_mutate2(&lf[58] /* (set! generated-object-files ...) */,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t4);
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k3625 in map-loop491 in k3588 in k3580 in k3572 in k3541 in k3538 in for-each-loop470 in k2019 in k2016 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in ... */
static void C_ccall f_3627(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3627,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3598(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3598(t6,((C_word*)t0)[5],t5);}}

/* k3734 in k3707 in k3704 in g531 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in ... */
static void C_ccall f_3736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3736,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3740,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3759,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5891,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t7=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[4]);}

/* g531 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in ... */
static void C_fcall f_3702(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3702,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3706,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:858: pathname-replace-extension */
t4=C_fast_retrieve(lf[203]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,C_retrieve2(lf[33],"object-extension"));}

/* k3707 in k3704 in g531 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in ... */
static void C_ccall f_3709(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3709,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3712,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3724,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(C_truep(C_retrieve2(lf[59],"cpp-mode"))?C_retrieve2(lf[29],"c++-compiler"):C_retrieve2(lf[28],"compiler"));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3736,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t7=t6;
t8=((C_word*)t0)[5];
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5896,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t10=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t8);}

/* k3704 in g531 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in ... */
static void C_ccall f_3706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3706,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3709,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_member(t2,C_retrieve2(lf[57],"object-files")))){
/* csc.scm:860: stop */
f_1405(t3,lf[202],C_a_i_list(&a,2,((C_word*)t0)[4],t2));}
else{
t4=t3;
f_3709(2,t4,C_SCHEME_UNDEFINED);}}

/* for-each-loop581 in k3814 in k3810 in k3772 in k3769 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in ... */
static void C_fcall f_3856(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3856,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3866,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:892: g582 */
t5=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f5984 in k5143 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f5984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4813 in k4767 in k4764 in k4761 in k4758 in k4086 in k4073 in k4070 in k4032 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in ... */
static void C_ccall f_4815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4815,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_4772(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4822,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:1079: make-pathname */
t3=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_retrieve2(lf[26],"home"),lf[159]);}}

/* k3757 in k3734 in k3707 in k3704 in g531 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in ... */
static void C_ccall f_3759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[114]))(4,*((C_word*)lf[114]+1),((C_word*)t0)[2],lf[201],t1);}

/* k3864 in for-each-loop581 in k3814 in k3810 in k3772 in k3769 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in ... */
static void C_ccall f_3866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3856(t3,((C_word*)t0)[4],t2);}

/* k2112 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_2114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:588: exit */
t2=C_fast_retrieve(lf[13]);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f5979 in k5127 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f5979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f5974 in k5117 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f5974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* for-each-loop598 in k3823 in k3814 in k3810 in k3772 in k3769 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in ... */
static void C_fcall f_3833(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3833,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3843,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:893: g599 */
t5=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2189 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_2191(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate2(&lf[77] /* (set! translate-options ...) */,t1);
t3=lf[95] /* static-libs */ =C_SCHEME_TRUE;;
/* csc.scm:809: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1858(t4,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k2124 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_2126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:591: exit */
t2=C_fast_retrieve(lf[13]);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* g561 in k3772 in k3769 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in ... */
static void C_fcall f_3775(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3775,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3779,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:883: string-append */
t4=*((C_word*)lf[120]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,lf[204],C_retrieve2(lf[33],"object-extension"));}

/* k3772 in k3769 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in ... */
static void C_fcall f_3774(C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3774,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3775,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_retrieve2(lf[54],"rc-files");
t4=C_i_check_list_2(C_retrieve2(lf[54],"rc-files"),lf[151]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3812,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3883,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_3883(t9,t5,C_retrieve2(lf[54],"rc-files"));}

/* k3777 in g561 in k3772 in k3769 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in ... */
static void C_ccall f_3779(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3779,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3782,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3794,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3802,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t6=t5;
t7=((C_word*)t0)[4];
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5906,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t9=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t7);}

/* a4611 in k4599 in quote-option in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in ... */
static void C_ccall f_4612(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4612,3,t0,t1,t2);}
t3=C_u_i_char_whitespacep(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?t3:C_i_memq(t2,lf[118])));}

/* k3769 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in ... */
static void C_ccall f_3771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3771,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3774,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3907,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[43],"generate-manifest"))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3932,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:876: software-type */
t5=C_fast_retrieve(lf[211]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t3;
f_3907(t4,C_SCHEME_FALSE);}}

/* k3841 in for-each-loop598 in k3823 in k3814 in k3810 in k3772 in k3769 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in ... */
static void C_ccall f_3843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3833(t3,((C_word*)t0)[4],t2);}

/* k5008 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in ... */
static void C_ccall f_5010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5010,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5014,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_retrieve2(lf[46],"default-library");
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[114]))(4,*((C_word*)lf[114]+1),t3,lf[419],C_retrieve2(lf[46],"default-library"));}

/* k5012 in k5008 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in ... */
static void C_ccall f_5014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:220: string-append */
t2=*((C_word*)lf[120]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k3742 in k3738 in k3734 in k3707 in k3704 in g531 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in ... */
static void C_fcall f_3744(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3744,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3748,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* csc.scm:872: compiler-options */
f_3957(t3);}

/* k3746 in k3742 in k3738 in k3734 in k3707 in k3704 in g531 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in ... */
static void C_ccall f_3748(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3748,2,t0,t1);}
t2=C_a_i_list6(&a,6,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],lf[197],((C_word*)t0)[5],t1);
/* csc.scm:863: string-intersperse */
t3=C_fast_retrieve(lf[100]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[6],t2);}

/* a4623 in quote-option in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in ... */
static void C_ccall f_4624(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4624,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_char_equalp(C_make_character(34),t2));}

/* k3738 in k3734 in k3707 in k3704 in g531 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in ... */
static void C_ccall f_3740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3740,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3744,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[59],"cpp-mode"))){
t4=C_i_string_equal_p(lf[198],C_retrieve2(lf[29],"c++-compiler"));
t5=t3;
f_3744(t5,(C_truep(t4)?lf[199]:lf[200]));}
else{
t4=t3;
f_3744(t4,lf[200]);}}

/* k2891 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in ... */
static void C_ccall f_2893(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2893,2,t0,t1);}
t2=C_mutate2(&lf[52] /* (set! scheme-files ...) */,t1);
if(C_truep(C_retrieve2(lf[87],"target-filename"))){
/* csc.scm:809: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1858(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2900,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:745: make-pathname */
t4=C_fast_retrieve(lf[104]);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,C_SCHEME_FALSE,lf[368],C_retrieve2(lf[37],"executable-extension"));}}

/* k5004 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in ... */
static void C_ccall f_5006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5006,2,t0,t1);}
t2=C_retrieve2(lf[46],"default-library");
if(C_truep(C_retrieve2(lf[18],"chicken-prefix"))){
t3=C_a_i_list2(&a,2,C_retrieve2(lf[18],"chicken-prefix"),lf[418]);
/* csc.scm:88: make-pathname */
t4=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],t3,C_retrieve2(lf[46],"default-library"));}
else{
t3=((C_word*)t0)[3];
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6335,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t5=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t1);}}

/* k5000 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in ... */
static void C_ccall f_5002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5002,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5949,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t4=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}

/* k4599 in quote-option in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in ... */
static void C_ccall f_4601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4601,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4607,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4612,tmp=(C_word)a,a+=2,tmp);
/* csc.scm:1036: string-any */
t4=C_fast_retrieve(lf[128]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}}

/* k4605 in k4599 in quote-option in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in ... */
static void C_ccall f_4607(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4607,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4531,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4545,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4549,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* string->list */
t9=C_fast_retrieve(lf[127]);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}}

/* k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f_5171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5171,2,t0,t1);}
t2=C_eqp(t1,lf[0]);
t3=C_mutate2(&lf[1] /* (set! mingw ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5167,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:70: software-version */
t5=C_fast_retrieve(lf[236]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k4665 in k4662 in k4659 in k4639 in k4636 in k4633 in command in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in ... */
static void C_ccall f_4667(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4667,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4670,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:1051: ##sys#print */
t3=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k4659 in k4639 in k4636 in k4633 in command in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in ... */
static void C_ccall f_4661(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4661,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4664,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:1051: ##sys#print */
t3=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[3]);}

/* k4662 in k4659 in k4639 in k4636 in k4633 in command in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in ... */
static void C_ccall f_4664(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4664,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4667,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:1051: ##sys#print */
t3=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[132],C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k5039 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in ... */
static void C_ccall f_5041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:135: string-split */
t2=C_fast_retrieve(lf[229]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5043 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in ... */
static void C_ccall f_5045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:133: string-split */
t2=C_fast_retrieve(lf[229]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4249 in k4199 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in ... */
static void C_ccall f_4251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4251,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4254,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4285,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:914: open-output-string */
t5=C_fast_retrieve(lf[112]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k4252 in k4249 in k4199 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in ... */
static void C_ccall f_4254(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4254,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4261,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:915: open-output-string */
t3=C_fast_retrieve(lf[112]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k4633 in command in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in ... */
static void C_ccall f_4635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4635,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4638,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[42],"windows-shell"))){
/* csc.scm:1047: string-append */
t3=*((C_word*)lf[120]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[135],((C_word*)t0)[3],lf[136]);}
else{
t3=t2;
f_4638(2,t3,((C_word*)t0)[3]);}}

/* k4636 in k4633 in command in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in ... */
static void C_ccall f_4638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4638,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4641,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[66],"dry-run"))){
t4=t3;
f_4641(2,t4,C_fix(0));}
else{
/* csc.scm:1049: system */
t4=C_fast_retrieve(lf[134]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}}

/* k2581 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_2583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:809: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1858(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

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
if(!C_demand_2(2827)){
C_save(t1);
C_rereclaim2(2827*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,432);
lf[0]=C_h_intern(&lf[0],7,"mingw32");
lf[2]=C_h_intern(&lf[2],6,"macosx");
lf[4]=C_h_intern(&lf[4],6,"cygwin");
lf[6]=C_h_intern(&lf[6],3,"aix");
lf[9]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\005linux\376\003\000\000\002\376\001\000\000\006netbsd\376\003\000\000\002\376\001\000\000\007freebsd\376\003\000\000\002\376\001\000\000\007solaris\376\003\000\000\002\376\001\000\000\007openb"
"sd\376\003\000\000\002\376\001\000\000\004hurd\376\003\000\000\002\376\001\000\000\005haiku\376\377\016");
lf[11]=C_h_intern(&lf[11],18,"\003sysstandard-error");
lf[12]=C_h_intern(&lf[12],7,"fprintf");
lf[13]=C_h_intern(&lf[13],4,"exit");
lf[14]=C_h_intern(&lf[14],16,"\003syswrite-char-0");
lf[15]=C_h_intern(&lf[15],9,"\003sysprint");
lf[16]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[17]=C_h_intern(&lf[17],17,"\003syspeek-c-string");
lf[20]=C_decode_literal(C_heaptop,"\376B\000\000\005-host");
lf[24]=C_h_intern(&lf[24],2,"qs");
lf[25]=C_h_intern(&lf[25],18,"normalize-pathname");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000\001o");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[40]=C_h_intern(&lf[40],26,"\003sysload-dynamic-extension");
lf[78]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\014/usr/include\376\003\000\000\002\376B\000\000\000\376\377\016");
lf[99]=C_h_intern(&lf[99],3,"map");
lf[100]=C_h_intern(&lf[100],18,"string-intersperse");
lf[101]=C_h_intern(&lf[101],6,"append");
lf[103]=C_decode_literal(C_heaptop,"\376B\000\000\003lib");
lf[104]=C_h_intern(&lf[104],13,"make-pathname");
lf[105]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[107]=C_h_intern(&lf[107],7,"sprintf");
lf[109]=C_h_intern(&lf[109],17,"get-output-string");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000\007copy /Y");
lf[111]=C_decode_literal(C_heaptop,"\376B\000\000\002cp");
lf[112]=C_h_intern(&lf[112],18,"open-output-string");
lf[114]=C_h_intern(&lf[114],17,"\003sysstring-append");
lf[115]=C_decode_literal(C_heaptop,"\376B\000\000\010 -static");
lf[116]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[119]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000#\376\377\016");
lf[120]=C_h_intern(&lf[120],13,"string-append");
lf[121]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[122]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[123]=C_h_intern(&lf[123],17,"string-translate\052");
lf[124]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376B\000\000\001\042\376B\000\000\002\134\042\376\377\016");
lf[125]=C_h_intern(&lf[125],16,"\003syslist->string");
lf[126]=C_h_intern(&lf[126],5,"cons\052");
lf[127]=C_h_intern(&lf[127],16,"\003sysstring->list");
lf[128]=C_h_intern(&lf[128],10,"string-any");
lf[130]=C_h_intern(&lf[130],19,"\003sysstandard-output");
lf[131]=C_h_intern(&lf[131],6,"printf");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[133]=C_decode_literal(C_heaptop,"\376B\000\000;\012Error: shell command terminated with non-zero exit status ");
lf[134]=C_h_intern(&lf[134],6,"system");
lf[135]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[136]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[137]=C_h_intern(&lf[137],5,"print");
lf[139]=C_h_intern(&lf[139],11,"delete-file");
lf[140]=C_decode_literal(C_heaptop,"\376B\000\000\003rm ");
lf[141]=C_h_intern(&lf[141],25,"\003sysimplicit-exit-handler");
lf[142]=C_decode_literal(C_heaptop,"\376B\000\000#not enough arguments to option `~A\047");
lf[143]=C_decode_literal(C_heaptop,"\376B\000\000\013-dynamiclib");
lf[144]=C_decode_literal(C_heaptop,"\376B\000\000$-bundle -headerpad_max_install_names");
lf[145]=C_decode_literal(C_heaptop,"\376B\000\000\007-shared");
lf[146]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\012-DC_SHARED\376\377\016");
lf[147]=C_decode_literal(C_heaptop,"\376B\000\000\010-feature");
lf[148]=C_decode_literal(C_heaptop,"\376B\000\000\026chicken-compile-shared");
lf[149]=C_decode_literal(C_heaptop,"\376B\000\000\026-DC_PRIVATE_REPOSITORY");
lf[150]=C_decode_literal(C_heaptop,"\376B\000\000\031-framework CoreFoundation");
lf[151]=C_h_intern(&lf[151],8,"for-each");
lf[152]=C_decode_literal(C_heaptop,"\376B\000\000\032</string>\012</dict>\012</plist>");
lf[153]=C_decode_literal(C_heaptop,"\376B\000\001\262<\077xml version=\0421.0\042 encoding=\042UTF-8\042\077>\012<!DOCTYPE plist SYSTEM \042file://local"
"host/System/Library/DTDs/PropertyList.dtd\042>\012<plist version=\0420.9\042>\012<dict>\012\011<key>C"
"FBundlePackageType</key>\012\011<string>APPL</string>\012\011<key>CFBundleIconFile</key>\012\011<s"
"tring>CHICKEN.icns</string>\012        <key>CFBundleGetInfoString</key>\012\011<string>Cr"
"eated by CHICKEN</string>\012\011<key>CFBundleSignature</key>\012\011<string>\077\077\077\077</string>\012\011"
"<key>CFBundleExecutable</key>\012\011<string>");
lf[154]=C_h_intern(&lf[154],19,"\003sysprint-to-string");
lf[155]=C_h_intern(&lf[155],19,"with-output-to-file");
lf[156]=C_decode_literal(C_heaptop,"\376B\000\000\013generating ");
lf[157]=C_h_intern(&lf[157],12,"file-exists\077");
lf[158]=C_decode_literal(C_heaptop,"\376B\000\000\012Info.plist");
lf[159]=C_decode_literal(C_heaptop,"\376B\000\000\024chicken/CHICKEN.icns");
lf[160]=C_decode_literal(C_heaptop,"\376B\000\000\014CHICKEN.icns");
lf[161]=C_decode_literal(C_heaptop,"\376B\000\000\022Contents/Resources");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\000\016Contents/MacOS");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000\010Contents");
lf[164]=C_h_intern(&lf[164],13,"pathname-file");
lf[165]=C_decode_literal(C_heaptop,"\376B\000\000\005dylib");
lf[166]=C_decode_literal(C_heaptop,"\376B\000\000\003dll");
lf[167]=C_decode_literal(C_heaptop,"\376B\000\000\003so.");
lf[168]=C_h_intern(&lf[168],14,"number->string");
lf[169]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[170]=C_h_intern(&lf[170],24,"get-environment-variable");
lf[171]=C_decode_literal(C_heaptop,"\376B\000\000\017TARGET_LIB_PATH");
lf[172]=C_decode_literal(C_heaptop,"\376B\000\000\016Contents/MacOS");
lf[173]=C_decode_literal(C_heaptop,"\376B\000\000\005mac.r");
lf[174]=C_decode_literal(C_heaptop,"\376B\000\000 /Developer/Tools/Rez -t APPL -o ");
lf[175]=C_decode_literal(C_heaptop,"\376B\000\000\011 -change ");
lf[176]=C_decode_literal(C_heaptop,"\376B\000\000\007.dylib ");
lf[177]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[178]=C_decode_literal(C_heaptop,"\376B\000\000\020@executable_path");
lf[179]=C_decode_literal(C_heaptop,"\376B\000\000\006.dylib");
lf[180]=C_decode_literal(C_heaptop,"\376B\000\000\003-o ");
lf[181]=C_h_intern(&lf[181],16,"create-directory");
lf[182]=C_decode_literal(C_heaptop,"\376B\000\000\006mkdir ");
lf[183]=C_h_intern(&lf[183],17,"directory-exists\077");
lf[184]=C_decode_literal(C_heaptop,"\376B\000\000\017Contents/MacOS/");
lf[185]=C_decode_literal(C_heaptop,"\376B\000\000\022Contents/Resources");
lf[186]=C_decode_literal(C_heaptop,"\376B\000\000\011mkdir -p ");
lf[187]=C_decode_literal(C_heaptop,"\376B\000\000\016Contents/MacOS");
lf[188]=C_decode_literal(C_heaptop,"\376B\000\000\011mkdir -p ");
lf[189]=C_decode_literal(C_heaptop,"\376B\000\000\003app");
lf[190]=C_h_intern(&lf[190],24,"pathname-strip-extension");
lf[191]=C_decode_literal(C_heaptop,"\376B\000\000\004.old");
lf[192]=C_decode_literal(C_heaptop,"\376B\000\000\004move");
lf[193]=C_decode_literal(C_heaptop,"\376B\000\000\002mv");
lf[194]=C_decode_literal(C_heaptop,"\376B\000\000\005.old\047");
lf[195]=C_decode_literal(C_heaptop,"\376B\000\000\030\047 - renaming source to `");
lf[196]=C_decode_literal(C_heaptop,"\376B\000\0001Warning: output file will overwrite source file `");
lf[197]=C_decode_literal(C_heaptop,"\376B\000\000\002-c");
lf[198]=C_decode_literal(C_heaptop,"\376B\000\000\003g++");
lf[199]=C_decode_literal(C_heaptop,"\376B\000\000\022-Wno-write-strings");
lf[200]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[201]=C_decode_literal(C_heaptop,"\376B\000\000\003-o ");
lf[202]=C_decode_literal(C_heaptop,"\376B\000\000Pobject file generated from `~a\047 will overwrite explicitly given object file"
" `~a\047");
lf[203]=C_h_intern(&lf[203],26,"pathname-replace-extension");
lf[204]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[205]=C_h_intern(&lf[205],7,"reverse");
lf[206]=C_decode_literal(C_heaptop,"\376B\000\001\232\042\042 type=\042\042win32\042\042/>\134r\134n\042\012  \042  <ms_asmv2:trustInfo xmlns:ms_asmv2=\042\042urn:sche"
"mas-microsoft-com:asm.v2\042\042>\134r\134n\042\012  \042    <ms_asmv2:security>\134r\134n\042\012  \042      <ms_as"
"mv2:requestedPrivileges>\134r\134n\042\012  \042        <ms_asmv2:requestedExecutionLevel level"
"=\042\042asInvoker\042\042 uiAccess=\042\042false\042\042/>\134r\134n\042\012  \042      </ms_asmv2:requestedPrivileges"
">\134r\134n\042\012  \042    </ms_asmv2:security>\134r\134n\042\012  \042  </ms_asmv2:trustInfo>\134r\134n\042\012  \042</ass"
"embly>\134r\134n\042\012END");
lf[207]=C_decode_literal(C_heaptop,"\376B\000\001\0031 24 MOVEABLE PURE\012BEGIN\012  \042<\077xml version=\042\0421.0\042\042 encoding=\042\042UTF-8\042\042 standa"
"lone=\042\042yes\042\042\077>\134r\134n\042\012  \042<assembly xmlns=\042\042urn:schemas-microsoft-com:asm.v1\042\042 mani"
"festVersion=\042\0421.0\042\042>\134r\134n\042\012  \042  <assemblyIdentity version=\042\0421.0.0.0\042\042 processorAr"
"chitecture=\042\042\052\042\042 name=\042\042");
lf[208]=C_decode_literal(C_heaptop,"\376B\000\000\013generating ");
lf[209]=C_decode_literal(C_heaptop,"\376B\000\000\002rc");
lf[210]=C_h_intern(&lf[210],7,"windows");
lf[211]=C_h_intern(&lf[211],13,"software-type");
lf[212]=C_h_intern(&lf[212],4,"last");
lf[213]=C_decode_literal(C_heaptop,"\376B\000\000\031no source files specified");
lf[214]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[215]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\003-:d\376\377\016");
lf[216]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\010-feature\376\003\000\000\002\376B\000\000\025chicken-scheme-to-c++\376\377\016");
lf[217]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\010-feature\376\003\000\000\002\376B\000\000\026chicken-scheme-to-objc\376\377\016");
lf[218]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\012-to-stdout\376\377\016");
lf[219]=C_decode_literal(C_heaptop,"\376B\000\000\014-output-file");
lf[220]=C_decode_literal(C_heaptop,"\376B\000\000KC file generated from `~a\047 will overwrite explicitly given source file `~a\047"
);
lf[221]=C_decode_literal(C_heaptop,"\376B\000\000\003cpp");
lf[222]=C_decode_literal(C_heaptop,"\376B\000\000\001m");
lf[223]=C_decode_literal(C_heaptop,"\376B\000\000\001c");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000\010-dynamic");
lf[225]=C_h_intern(&lf[225],7,"newline");
lf[226]=C_h_intern(&lf[226],6,"print\052");
lf[227]=C_decode_literal(C_heaptop,"\376B\000\000\003-L\042");
lf[228]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[229]=C_h_intern(&lf[229],12,"string-split");
lf[230]=C_decode_literal(C_heaptop,"\376B\000\000\002:;");
lf[231]=C_decode_literal(C_heaptop,"\376B\000\000\026CHICKEN_C_LIBRARY_PATH");
lf[232]=C_h_intern(&lf[232],7,"freebsd");
lf[233]=C_h_intern(&lf[233],7,"openbsd");
lf[234]=C_h_intern(&lf[234],6,"netbsd");
lf[235]=C_decode_literal(C_heaptop,"\376B\000\000\015-Wl,-z,origin");
lf[236]=C_h_intern(&lf[236],16,"software-version");
lf[237]=C_h_intern(&lf[237],4,"conc");
lf[238]=C_decode_literal(C_heaptop,"\376B\000\000\010 -Wl,-R\042");
lf[239]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[240]=C_decode_literal(C_heaptop,"\376B\000\000\010\134$ORIGIN");
lf[241]=C_decode_literal(C_heaptop,"\376B\000\000\003lib");
lf[242]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[243]=C_decode_literal(C_heaptop,"\376B\000\000\003-L\042");
lf[244]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[245]=C_decode_literal(C_heaptop,"\376B\000\000\007-Wl,-R\042");
lf[246]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[247]=C_decode_literal(C_heaptop,"\376B\000\000\003-L\042");
lf[248]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[249]=C_h_intern(&lf[249],5,"-help");
lf[250]=C_h_intern(&lf[250],6,"--help");
lf[251]=C_decode_literal(C_heaptop,"\376B\000\000\003\047.\012");
lf[252]=C_decode_literal(C_heaptop,"\376B\000(\355\047 is a driver program for the CHICKEN compiler. Files given on the\012  comman"
"d line are translated, compiled or linked as needed.\012\012  FILENAME is a Scheme sou"
"rce file name with optional extension or a\012  C/C++/Objective-C source, object or"
" library file name with extension. OPTION\012  may be one of the following:\012\012  Gene"
"ral options:\012\012    -h  -help                      display this text and exit\012    "
"-v  -verbose                   show compiler notes and tool-invocations\012    -vv "
"                           display information about translation\012               "
"                     progress\012    -vvv                           display informa"
"tion about all compilation\012                                    stages\012    -versi"
"on                       display Scheme compiler version and exit\012    -release  "
"                     display release number and exit\012\012  File and pathname option"
"s:\012\012    -o -output-file FILENAME       specifies target executable name\012    -I -"
"include-path PATHNAME      specifies alternative path for included\012             "
"                       files\012    -to-stdout                     write compiler t"
"o stdout (implies -t)\012    -s -shared -dynamic            generate dynamically lo"
"adable shared object\012                                    file\012\012  Language option"
"s:\012\012    -D  -DSYMBOL  -feature SYMBOL  register feature identifier\012    -no-featu"
"re SYMBOL             disable builtin feature identifier\012    -c++               "
"            compile via a C++ source file (.cpp) \012    -objc                     "
"     compile via Objective-C source file (.m)\012\012  Syntax related options:\012\012    -i"
" -case-insensitive           don\047t preserve case of read symbols    \012    -K -key"
"word-style STYLE        enable alternative keyword-syntax\012                      "
"              (prefix, suffix or none)\012       -no-parentheses-synonyms    disabl"
"es list delimiter synonyms\012       -no-symbol-escape           disables support f"
"or escaped symbols\012       -r5rs-syntax                disables the CHICKEN exten"
"sions to\012                                    R5RS syntax\012    -compile-syntax    "
"            macros are made available at run-time\012    -j -emit-import-library MO"
"DULE write compile-time module information into\012                                "
"    separate file\012    -J -emit-all-import-libraries  emit import-libraries for a"
"ll defined modules\012    -no-module-registration        do not generate module reg"
"istration code\012    -no-compiler-syntax            disable expansion of compiler-"
"macros\012    -M -module                     wrap compiled code into implicit modul"
"e\012\012  Translation options:\012\012    -x  -explicit-use              do not use units `"
"library\047 and `eval\047 by\012                                    default\012    -P  -chec"
"k-syntax              stop compilation after macro-expansion\012    -A  -analyze-on"
"ly              stop compilation after first analysis pass\012\012  Debugging options:"
"\012\012    -w  -no-warnings               disable warnings\012    -d0 -d1 -d2 -debug-lev"
"el NUMBER\012                                   set level of available debugging in"
"formation\012    -no-trace                      disable rudimentary debugging infor"
"mation\012    -profile                       executable emits profiling information"
" \012    -accumulate-profile            executable emits profiling information in\012 "
"                                   append mode\012    -profile-name FILENAME       "
"  name of the generated profile information\012                                    "
"file\012    -types FILENAME                load additional type database\012\012  Optimiz"
"ation options:\012\012    -O -O0 -O1 -O2 -O3 -O4 -O5 -optimize-level NUMBER\012          "
"                         enable certain sets of optimization options\012    -optimi"
"ze-leaf-routines        enable leaf routine optimization\012    -no-usual-integrati"
"ons         standard procedures may be redefined\012    -u  -unsafe                "
"    disable safety checks\012    -local                         assume globals are "
"only modified in current\012                                    file\012    -b  -block"
"                     enable block-compilation\012    -disable-interrupts           "
" disable interrupts in compiled code\012    -f  -fixnum-arithmetic         assume a"
"ll numbers are fixnums\012    -disable-stack-overflow-checks disables detection of "
"stack-overflows\012    -inline                        enable inlining\012    -inline-l"
"imit LIMIT            set inlining threshold\012    -inline-global                 "
"enable cross-module inlining\012    -specialize                    perform type-bas"
"ed specialization of primitive calls\012    -oi -emit-inline-file FILENAME  generat"
"e file with globally inlinable\012                                    procedures (i"
"mplies -inline -local)\012    -consult-inline-file FILENAME  explicitly load inline"
" file\012    -ot  -emit-type-file FILENAME  write type-declaration information into"
" file\012    -no-argc-checks                disable argument count checks\012    -no-b"
"ound-checks               disable bound variable checks\012    -no-procedure-checks"
"           disable procedure call checks\012    -no-procedure-checks-for-usual-bind"
"ings\012                                   disable procedure call checks only for u"
"sual\012                                    bindings\012    -no-procedure-checks-for-t"
"oplevel-bindings\012                                   disable procedure call check"
"s for toplevel\012                                    bindings\012    -strict-types   "
"               assume variable do not change their type\012    -clustering         "
"           combine groups of local procedures into dispatch\012                    "
"                 loop\012    -lfa2                          perform additional ligh"
"tweight flow-analysis pass\012\012  Configuration options:\012\012    -unit NAME            "
"         compile file as a library unit\012    -uses NAME                     decla"
"re library unit as used.\012    -heap-size NUMBER              specifies heap-size "
"of compiled executable\012    -nursery NUMBER  -stack-size NUMBER\012                 "
"                  specifies nursery size of compiled\012                           "
"        executable\012    -X -extend FILENAME            load file before compilati"
"on commences\012    -prelude EXPRESSION            add expression to beginning of s"
"ource file\012    -postlude EXPRESSION           add expression to end of source fi"
"le\012    -prologue FILENAME             include file before main source file\012    -"
"epilogue FILENAME             include file after main source file\012\012    -e  -embe"
"dded                  compile as embedded\012                                    (d"
"on\047t generate `main()\047)\012    -gui                           compile as GUI applic"
"ation\012    -R  -require-extension NAME    require extension and import in compile"
"d\012                                    code\012    -dll -library                  co"
"mpile multiple units into a dynamic\012                                    library\012"
"    -deploy                        deploy self-contained application bundle\012\012  O"
"ptions to other passes:\012\012    -C OPTION                      pass option to C com"
"piler\012    -L OPTION                      pass option to linker\012    -I<DIR>      "
"                  pass \134\042-I<DIR>\134\042 to C compiler\012                               "
"     (add include path)\012    -L<DIR>                        pass \134\042-L<DIR>\134\042 to l"
"inker\012                                    (add library path)\012    -k             "
"                keep intermediate files\012    -c                             stop "
"after compilation to object files\012    -t                             stop after "
"translation to C\012    -cc COMPILER                   select other C compiler than"
" the default\012    -cxx COMPILER                  select other C++ compiler than t"
"he default\012    -ld COMPILER                   select other linker than the defau"
"lt \012    -lLIBNAME                      link with given library\012                 "
"                   (`libLIBNAME\047 on UNIX,\012                                     `"
"LIBNAME.lib\047 on Windows)\012    -static-libs                   link with static CHI"
"CKEN libraries\012    -static                        generate completely statically"
" linked\012                                    executable\012    -F<DIR>              "
"          pass \134\042-F<DIR>\134\042 to C compiler\012                                    (ad"
"d framework header path on Mac OS X)\012    -framework NAME                passed t"
"o linker on Mac OS X\012    -rpath PATHNAME                add directory to runtime"
" library search path\012    -Wl,...                        pass linker options\012    "
"-strip                         strip resulting binary\012\012  Inquiry options:\012\012    -"
"home                          show home-directory (where support files go)\012    -"
"cflags                        show required C-compiler flags and exit\012    -ldfla"
"gs                       show required linker flags and exit\012    -libs          "
"                show required libraries and exit\012    -cc-name                   "
"    show name of default C compiler used\012    -cxx-name                      show"
" name of default C++ compiler used\012    -ld-name                       show name "
"of default linker used\012    -dry-run                       just show commands exe"
"cuted, don\047t run them\012                                    (implies `-v\047)\012\012  Obsc"
"ure options:\012\012    -debug MODES                   display debugging output for th"
"e given modes\012    -compiler PATHNAME             use other compiler than default"
" `chicken\047\012    -raw                           do not generate implicit init- and"
" exit code\012    -emit-external-prototypes-first\012                                 "
"  emit prototypes for callbacks before foreign\012                                 "
"   declarations\012    -ignore-repository             do not refer to repository fo"
"r extensions\012    -keep-shadowed-macros          do not remove shadowed macro\012   "
" -host                          compile for host when configured for\012           "
"                         cross-compiling\012    -private-repository            load"
" extensions from executable path\012    -deployed                      link support"
" file to be used from a deployed \012                                    executable"
" (sets `rpath\047 accordingly, if supported\012                                    on "
"this platform)\012    -no-elevation                  embed manifest on Windows to s"
"upress elevation\012                                    warnings for programs named"
" `install\047 or `setup\047\012\012  Options can be collapsed if unambiguous, so\012\012    -vkfO\012"
"\012  is the same as\012\012    -v -k -fixnum-arithmetic -optimize\012\012  The contents of the"
" environment variable CSC_OPTIONS are implicitly passed to\012  every invocation of"
" `");
lf[253]=C_decode_literal(C_heaptop,"\376B\000\000\033 FILENAME | OPTION ...\012\012  `");
lf[254]=C_decode_literal(C_heaptop,"\376B\000\000\007Usage: ");
lf[255]=C_h_intern(&lf[255],8,"-release");
lf[256]=C_h_intern(&lf[256],15,"chicken-version");
lf[257]=C_h_intern(&lf[257],8,"-version");
lf[258]=C_decode_literal(C_heaptop,"\376B\000\000\011 -version");
lf[259]=C_h_intern(&lf[259],4,"-c++");
lf[260]=C_decode_literal(C_heaptop,"\376B\000\000\017-no-cpp-precomp");
lf[261]=C_h_intern(&lf[261],5,"-objc");
lf[262]=C_h_intern(&lf[262],7,"-static");
lf[263]=C_decode_literal(C_heaptop,"\376B\000\000\010-feature");
lf[264]=C_decode_literal(C_heaptop,"\376B\000\000\026chicken-compile-static");
lf[265]=C_h_intern(&lf[265],12,"-static-libs");
lf[266]=C_decode_literal(C_heaptop,"\376B\000\000\010-feature");
lf[267]=C_decode_literal(C_heaptop,"\376B\000\000\026chicken-compile-static");
lf[268]=C_h_intern(&lf[268],7,"-cflags");
lf[269]=C_h_intern(&lf[269],8,"-ldflags");
lf[270]=C_h_intern(&lf[270],8,"-cc-name");
lf[271]=C_h_intern(&lf[271],9,"-cxx-name");
lf[272]=C_h_intern(&lf[272],8,"-ld-name");
lf[273]=C_h_intern(&lf[273],5,"-home");
lf[274]=C_h_intern(&lf[274],5,"-libs");
lf[275]=C_h_intern(&lf[275],2,"-v");
lf[276]=C_h_intern(&lf[276],8,"-verbose");
lf[277]=C_decode_literal(C_heaptop,"\376B\000\000\010-verbose");
lf[278]=C_decode_literal(C_heaptop,"\376B\000\000\002-v");
lf[279]=C_decode_literal(C_heaptop,"\376B\000\000\002-v");
lf[280]=C_decode_literal(C_heaptop,"\376B\000\000\002-Q");
lf[281]=C_h_intern(&lf[281],2,"-w");
lf[282]=C_h_intern(&lf[282],12,"-no-warnings");
lf[283]=C_decode_literal(C_heaptop,"\376B\000\000\002-w");
lf[284]=C_decode_literal(C_heaptop,"\376B\000\000\014-no-warnings");
lf[285]=C_h_intern(&lf[285],2,"-A");
lf[286]=C_h_intern(&lf[286],13,"-analyze-only");
lf[287]=C_decode_literal(C_heaptop,"\376B\000\000\015-analyze-only");
lf[288]=C_h_intern(&lf[288],2,"-P");
lf[289]=C_h_intern(&lf[289],13,"-check-syntax");
lf[290]=C_decode_literal(C_heaptop,"\376B\000\000\015-check-syntax");
lf[291]=C_h_intern(&lf[291],2,"-k");
lf[292]=C_h_intern(&lf[292],2,"-c");
lf[293]=C_h_intern(&lf[293],2,"-t");
lf[294]=C_h_intern(&lf[294],2,"-e");
lf[295]=C_h_intern(&lf[295],9,"-embedded");
lf[296]=C_decode_literal(C_heaptop,"\376B\000\000\014-DC_EMBEDDED");
lf[297]=C_h_intern(&lf[297],18,"-require-extension");
lf[298]=C_h_intern(&lf[298],2,"-R");
lf[299]=C_decode_literal(C_heaptop,"\376B\000\000\022-require-extension");
lf[300]=C_h_intern(&lf[300],19,"-private-repository");
lf[301]=C_h_intern(&lf[301],13,"-no-elevation");
lf[302]=C_h_intern(&lf[302],4,"-gui");
lf[303]=C_decode_literal(C_heaptop,"\376B\000\000\007-DC_GUI");
lf[304]=C_decode_literal(C_heaptop,"\376B\000\000\012-lkernel32");
lf[305]=C_decode_literal(C_heaptop,"\376B\000\000\010-luser32");
lf[306]=C_decode_literal(C_heaptop,"\376B\000\000\007-lgdi32");
lf[307]=C_decode_literal(C_heaptop,"\376B\000\000\011-mwindows");
lf[308]=C_decode_literal(C_heaptop,"\376B\000\000\012chicken.rc");
lf[309]=C_h_intern(&lf[309],7,"-deploy");
lf[310]=C_h_intern(&lf[310],9,"-deployed");
lf[311]=C_h_intern(&lf[311],10,"-framework");
lf[312]=C_decode_literal(C_heaptop,"\376B\000\000\012-framework");
lf[313]=C_h_intern(&lf[313],2,"-o");
lf[314]=C_h_intern(&lf[314],12,"-output-file");
lf[315]=C_h_intern(&lf[315],2,"-O");
lf[316]=C_h_intern(&lf[316],3,"-O1");
lf[317]=C_decode_literal(C_heaptop,"\376B\000\000\017-optimize-level");
lf[318]=C_decode_literal(C_heaptop,"\376B\000\000\0011");
lf[319]=C_h_intern(&lf[319],3,"-O0");
lf[320]=C_decode_literal(C_heaptop,"\376B\000\000\017-optimize-level");
lf[321]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[322]=C_h_intern(&lf[322],3,"-O2");
lf[323]=C_decode_literal(C_heaptop,"\376B\000\000\017-optimize-level");
lf[324]=C_decode_literal(C_heaptop,"\376B\000\000\0012");
lf[325]=C_h_intern(&lf[325],3,"-O3");
lf[326]=C_decode_literal(C_heaptop,"\376B\000\000\017-optimize-level");
lf[327]=C_decode_literal(C_heaptop,"\376B\000\000\0013");
lf[328]=C_h_intern(&lf[328],3,"-O4");
lf[329]=C_decode_literal(C_heaptop,"\376B\000\000\017-optimize-level");
lf[330]=C_decode_literal(C_heaptop,"\376B\000\000\0014");
lf[331]=C_h_intern(&lf[331],3,"-O5");
lf[332]=C_decode_literal(C_heaptop,"\376B\000\000\017-optimize-level");
lf[333]=C_decode_literal(C_heaptop,"\376B\000\000\0015");
lf[334]=C_h_intern(&lf[334],3,"-d0");
lf[335]=C_decode_literal(C_heaptop,"\376B\000\000\014-debug-level");
lf[336]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[337]=C_h_intern(&lf[337],3,"-d1");
lf[338]=C_decode_literal(C_heaptop,"\376B\000\000\014-debug-level");
lf[339]=C_decode_literal(C_heaptop,"\376B\000\000\0011");
lf[340]=C_h_intern(&lf[340],3,"-d2");
lf[341]=C_decode_literal(C_heaptop,"\376B\000\000\014-debug-level");
lf[342]=C_decode_literal(C_heaptop,"\376B\000\000\0012");
lf[343]=C_h_intern(&lf[343],8,"-dry-run");
lf[344]=C_h_intern(&lf[344],2,"-s");
lf[345]=C_h_intern(&lf[345],4,"-dll");
lf[346]=C_h_intern(&lf[346],8,"-library");
lf[347]=C_h_intern(&lf[347],9,"-compiler");
lf[348]=C_h_intern(&lf[348],3,"-cc");
lf[349]=C_h_intern(&lf[349],4,"-cxx");
lf[350]=C_h_intern(&lf[350],3,"-ld");
lf[351]=C_h_intern(&lf[351],2,"-I");
lf[352]=C_decode_literal(C_heaptop,"\376B\000\000\015-include-path");
lf[353]=C_h_intern(&lf[353],2,"-C");
lf[354]=C_h_intern(&lf[354],6,"-strip");
lf[355]=C_decode_literal(C_heaptop,"\376B\000\000\002-s");
lf[356]=C_h_intern(&lf[356],2,"-L");
lf[357]=C_h_intern(&lf[357],6,"-rpath");
lf[358]=C_decode_literal(C_heaptop,"\376B\000\000\006-Wl,-R");
lf[359]=C_h_intern(&lf[359],3,"gnu");
lf[360]=C_h_intern(&lf[360],5,"clang");
lf[361]=C_h_intern(&lf[361],14,"build-platform");
lf[362]=C_h_intern(&lf[362],5,"-host");
lf[363]=C_h_intern(&lf[363],3,"-oi");
lf[364]=C_decode_literal(C_heaptop,"\376B\000\000\021-emit-inline-file");
lf[365]=C_h_intern(&lf[365],3,"-ot");
lf[366]=C_decode_literal(C_heaptop,"\376B\000\000\017-emit-type-file");
lf[367]=C_h_intern(&lf[367],1,"-");
lf[368]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[369]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\001-\376\377\016");
lf[370]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-h\376\003\000\000\002\376B\000\000\005-help\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-s\376\003\000\000\002\376B\000\000\007-shared\376\377\016\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\002-S\376\003\000\000\002\376B\000\000\013-scrutinize\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-M\376\003\000\000\002\376B\000\000\007-module\376\377\016\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\002-P\376\003\000\000\002\376B\000\000\015-check-syntax\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-f\376\003\000\000\002\376B\000\000\022-fixnum-arithmetic\376\377"
"\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-D\376\003\000\000\002\376B\000\000\010-feature\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-i\376\003\000\000\002\376B\000\000\021-case-insensit"
"ive\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-K\376\003\000\000\002\376B\000\000\016-keyword-style\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-X\376\003\000\000\002\376B\000\000\007-ex"
"tend\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-J\376\003\000\000\002\376B\000\000\032-emit-all-import-libraries\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-x"
"\376\003\000\000\002\376B\000\000\015-explicit-use\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-u\376\003\000\000\002\376B\000\000\007-unsafe\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-j"
"\376\003\000\000\002\376B\000\000\024-emit-import-library\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-n\376\003\000\000\002\376B\000\000\021-emit-inline-file\376\377\016"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-b\376\003\000\000\002\376B\000\000\006-block\376\377\016\376\377\016");
lf[371]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\015-explicit-use\376\003\000\000\002\376\001\000\000\011-no-trace\376\003\000\000\002\376\001\000\000\014-no-warnings\376\003\000\000\002\376\001\000\000\026-no-us"
"ual-integrations\376\003\000\000\002\376\001\000\000\027-optimize-leaf-routines\376\003\000\000\002\376\001\000\000\007-unsafe\376\003\000\000\002\376\001\000\000\006-blo"
"ck\376\003\000\000\002\376\001\000\000\023-disable-interrupts\376\003\000\000\002\376\001\000\000\022-fixnum-arithmetic\376\003\000\000\002\376\001\000\000\012-to-stdout\376"
"\003\000\000\002\376\001\000\000\010-profile\376\003\000\000\002\376\001\000\000\004-raw\376\003\000\000\002\376\001\000\000\023-accumulate-profile\376\003\000\000\002\376\001\000\000\015-check-syn"
"tax\376\003\000\000\002\376\001\000\000\021-case-insensitive\376\003\000\000\002\376\001\000\000\007-shared\376\003\000\000\002\376\001\000\000\017-compile-syntax\376\003\000\000\002\376\001\000"
"\000\017-no-lambda-info\376\003\000\000\002\376\001\000\000\010-dynamic\376\003\000\000\002\376\001\000\000\036-disable-stack-overflow-checks\376\003\000\000\002"
"\376\001\000\000\006-local\376\003\000\000\002\376\001\000\000\037-emit-external-prototypes-first\376\003\000\000\002\376\001\000\000\007-inline\376\003\000\000\002\376\001\000\000\010-"
"release\376\003\000\000\002\376\001\000\000\013-scrutinize\376\003\000\000\002\376\001\000\000\015-analyze-only\376\003\000\000\002\376\001\000\000\025-keep-shadowed-macr"
"os\376\003\000\000\002\376\001\000\000\016-inline-global\376\003\000\000\002\376\001\000\000\022-ignore-repository\376\003\000\000\002\376\001\000\000\021-no-symbol-escap"
"e\376\003\000\000\002\376\001\000\000\030-no-parentheses-synonyms\376\003\000\000\002\376\001\000\000\014-r5rs-syntax\376\003\000\000\002\376\001\000\000\017-no-argc-chec"
"ks\376\003\000\000\002\376\001\000\000\020-no-bound-checks\376\003\000\000\002\376\001\000\000\024-no-procedure-checks\376\003\000\000\002\376\001\000\000\023-no-compiler"
"-syntax\376\003\000\000\002\376\001\000\000\032-emit-all-import-libraries\376\003\000\000\002\376\001\000\000\013-setup-mode\376\003\000\000\002\376\001\000\000\015-no-el"
"evation\376\003\000\000\002\376\001\000\000\027-no-module-registration\376\003\000\000\002\376\001\000\000\047-no-procedure-checks-for-usual"
"-bindings\376\003\000\000\002\376\001\000\000\007-module\376\003\000\000\002\376\001\000\000\013-specialize\376\003\000\000\002\376\001\000\000\015-strict-types\376\003\000\000\002\376\001\000\000\013"
"-clustering\376\003\000\000\002\376\001\000\000\005-lfa2\376\003\000\000\002\376\001\000\000\052-no-procedure-checks-for-toplevel-bindings\376\377"
"\016");
lf[372]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006-debug\376\003\000\000\002\376\001\000\000\012-heap-size\376\003\000\000\002\376\001\000\000\010-nursery\376\003\000\000\002\376\001\000\000\013-stack-size\376\003\000\000\002"
"\376\001\000\000\011-compiler\376\003\000\000\002\376\001\000\000\005-unit\376\003\000\000\002\376\001\000\000\005-uses\376\003\000\000\002\376\001\000\000\016-keyword-style\376\003\000\000\002\376\001\000\000\017-o"
"ptimize-level\376\003\000\000\002\376\001\000\000\015-include-path\376\003\000\000\002\376\001\000\000\016-database-size\376\003\000\000\002\376\001\000\000\007-extend\376\003\000"
"\000\002\376\001\000\000\010-prelude\376\003\000\000\002\376\001\000\000\011-postlude\376\003\000\000\002\376\001\000\000\011-prologue\376\003\000\000\002\376\001\000\000\011-epilogue\376\003\000\000\002\376\001\000"
"\000\015-inline-limit\376\003\000\000\002\376\001\000\000\015-profile-name\376\003\000\000\002\376\001\000\000\021-emit-inline-file\376\003\000\000\002\376\001\000\000\006-type"
"s\376\003\000\000\002\376\001\000\000\017-emit-type-file\376\003\000\000\002\376\001\000\000\010-feature\376\003\000\000\002\376\001\000\000\014-debug-level\376\003\000\000\002\376\001\000\000\024-con"
"sult-inline-file\376\003\000\000\002\376\001\000\000\024-emit-import-library\376\003\000\000\002\376\001\000\000\013-no-feature\376\377\016");
lf[373]=C_decode_literal(C_heaptop,"\376B\000\000\010-feature");
lf[374]=C_h_intern(&lf[374],9,"substring");
lf[375]=C_decode_literal(C_heaptop,"\376B\000\000\001-");
lf[376]=C_decode_literal(C_heaptop,"\376B\000\000\023invalid option `~A\047");
lf[377]=C_h_intern(&lf[377],15,"lset-difference");
lf[378]=C_h_intern(&lf[378],6,"char=\077");
lf[379]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000P\376\003\000\000\002\376\377\012\000\000H\376\003\000\000\002\376\377\012\000\000h\376\003\000\000\002\376\377\012\000\000s\376\003\000\000\002\376\377\012\000\000f\376\003\000\000\002\376\377\012\000\000i\376\003\000\000\002\376\377\012\000\000E\376\003\000"
"\000\002\376\377\012\000\000N\376\003\000\000\002\376\377\012\000\000x\376\003\000\000\002\376\377\012\000\000u\376\003\000\000\002\376\377\012\000\000b\376\003\000\000\002\376\377\012\000\000v\376\003\000\000\002\376\377\012\000\000w\376\003\000\000\002\376\377\012\000\000A\376\003\000\000\002\376"
"\377\012\000\000O\376\003\000\000\002\376\377\012\000\000e\376\003\000\000\002\376\377\012\000\000W\376\003\000\000\002\376\377\012\000\000k\376\003\000\000\002\376\377\012\000\000c\376\003\000\000\002\376\377\012\000\000t\376\003\000\000\002\376\377\012\000\000g\376\003\000\000\002\376\377\012\000"
"\000S\376\003\000\000\002\376\377\012\000\000J\376\003\000\000\002\376\377\012\000\000M\376\377\016");
lf[380]=C_decode_literal(C_heaptop,"\376B\000\000\023invalid option `~A\047");
lf[381]=C_decode_literal(C_heaptop,"\376B\000\000\004-Wl,");
lf[382]=C_h_intern(&lf[382],18,"decompose-pathname");
lf[383]=C_decode_literal(C_heaptop,"\376B\000\000\001h");
lf[384]=C_decode_literal(C_heaptop,"\376B\000\000\001c");
lf[385]=C_decode_literal(C_heaptop,"\376B\000\000\002rc");
lf[386]=C_decode_literal(C_heaptop,"\376B\000\000\003cpp");
lf[387]=C_decode_literal(C_heaptop,"\376B\000\000\001C");
lf[388]=C_decode_literal(C_heaptop,"\376B\000\000\002cc");
lf[389]=C_decode_literal(C_heaptop,"\376B\000\000\003cxx");
lf[390]=C_decode_literal(C_heaptop,"\376B\000\000\003hpp");
lf[391]=C_decode_literal(C_heaptop,"\376B\000\000\017-no-cpp-precomp");
lf[392]=C_decode_literal(C_heaptop,"\376B\000\000\001m");
lf[393]=C_decode_literal(C_heaptop,"\376B\000\000\001M");
lf[394]=C_decode_literal(C_heaptop,"\376B\000\000\002mm");
lf[395]=C_decode_literal(C_heaptop,"\376B\000\000\030file `~A\047 does not exist");
lf[396]=C_decode_literal(C_heaptop,"\376B\000\000\004.scm");
lf[397]=C_decode_literal(C_heaptop,"\376B\000\000\002-:");
lf[398]=C_h_intern(&lf[398],15,"-optimize-level");
lf[399]=C_h_intern(&lf[399],15,"-benchmark-mode");
lf[400]=C_h_intern(&lf[400],10,"-to-stdout");
lf[401]=C_h_intern(&lf[401],7,"-shared");
lf[402]=C_h_intern(&lf[402],8,"-dynamic");
lf[403]=C_h_intern(&lf[403],14,"string->symbol");
lf[404]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[405]=C_decode_literal(C_heaptop,"\376B\000\000\013CSC_OPTIONS");
lf[406]=C_decode_literal(C_heaptop,"\376B\000\000\003lib");
lf[407]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[408]=C_decode_literal(C_heaptop,"\376B\000\000\003-I\042");
lf[409]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[410]=C_decode_literal(C_heaptop,"\376B\000\000\002:;");
lf[411]=C_decode_literal(C_heaptop,"\376B\000\000\026CHICKEN_C_INCLUDE_PATH");
lf[412]=C_decode_literal(C_heaptop,"\376B\000\000\003-I\042");
lf[413]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[414]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[415]=C_decode_literal(C_heaptop,"\376B\000\000\007include");
lf[416]=C_decode_literal(C_heaptop,"\376B\000\000\007chicken");
lf[417]=C_decode_literal(C_heaptop,"\376B\000\000\002-l");
lf[418]=C_decode_literal(C_heaptop,"\376B\000\000\003lib");
lf[419]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[420]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[421]=C_decode_literal(C_heaptop,"\376B\000\000\003cyg");
lf[422]=C_decode_literal(C_heaptop,"\376B\000\000\002-0");
lf[423]=C_decode_literal(C_heaptop,"\376B\000\000\003lib");
lf[424]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\005-DPIC\376\377\016");
lf[425]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\005-fPIC\376\003\000\000\002\376B\000\000\005-DPIC\376\377\016");
lf[426]=C_decode_literal(C_heaptop,"\376B\000\000\003bin");
lf[427]=C_decode_literal(C_heaptop,"\376B\000\000\007chicken");
lf[428]=C_decode_literal(C_heaptop,"\376B\000\000\005share");
lf[429]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[430]=C_h_intern(&lf[430],22,"command-line-arguments");
lf[431]=C_decode_literal(C_heaptop,"\376B\000\000\016CHICKEN_PREFIX");
C_register_lf2(lf,432,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1354,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in ... */
static void C_ccall f_1535(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1535,2,t0,t1);}
t2=C_mutate2(&lf[51] /* (set! extra-features ...) */,t1);
t3=lf[52] /* scheme-files */ =C_SCHEME_END_OF_LIST;;
t4=lf[53] /* c-files */ =C_SCHEME_END_OF_LIST;;
t5=lf[54] /* rc-files */ =C_SCHEME_END_OF_LIST;;
t6=lf[55] /* generated-c-files */ =C_SCHEME_END_OF_LIST;;
t7=lf[56] /* generated-rc-files */ =C_SCHEME_END_OF_LIST;;
t8=lf[57] /* object-files */ =C_SCHEME_END_OF_LIST;;
t9=lf[58] /* generated-object-files */ =C_SCHEME_END_OF_LIST;;
t10=lf[59] /* cpp-mode */ =C_SCHEME_FALSE;;
t11=lf[60] /* objc-mode */ =C_SCHEME_FALSE;;
t12=lf[61] /* embedded */ =C_SCHEME_FALSE;;
t13=lf[62] /* inquiry-only */ =C_SCHEME_FALSE;;
t14=lf[63] /* show-cflags */ =C_SCHEME_FALSE;;
t15=lf[64] /* show-ldflags */ =C_SCHEME_FALSE;;
t16=lf[65] /* show-libs */ =C_SCHEME_FALSE;;
t17=lf[66] /* dry-run */ =C_SCHEME_FALSE;;
t18=lf[67] /* gui */ =C_SCHEME_FALSE;;
t19=lf[68] /* deploy */ =C_SCHEME_FALSE;;
t20=lf[69] /* deployed */ =C_SCHEME_FALSE;;
t21=lf[70] /* rpath */ =C_SCHEME_FALSE;;
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1565,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t23=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t23+1)))(4,t23,t22,C_mpointer(&a,(void*)C_INSTALL_MORE_STATIC_LIBS),C_fix(0));}
else{
/* ##sys#peek-c-string */
t23=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t23+1)))(4,t23,t22,C_mpointer(&a,(void*)C_TARGET_MORE_STATIC_LIBS),C_fix(0));}}

/* k4265 in k4259 in k4252 in k4249 in k4199 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in ... */
static void C_ccall f_4267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4267,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4270,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4277,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4281,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:915: make-pathname */
t5=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)((C_word*)t0)[5])[1],lf[185]);}

/* k4259 in k4252 in k4249 in k4199 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in ... */
static void C_ccall f_4261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4261,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[107]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4267,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:915: ##sys#print */
t6=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[186],C_SCHEME_FALSE,t3);}

/* k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in ... */
static void C_ccall f_1530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1530,2,t0,t1);}
t2=C_mutate2(&lf[49] /* (set! default-linking-optimization-options ...) */,t1);
t3=C_mutate2(&lf[50] /* (set! best-linking-optimization-options ...) */,C_retrieve2(lf[49],"default-linking-optimization-options"));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1535,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
t5=t4;
f_1535(2,t5,C_SCHEME_END_OF_LIST);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5041,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_mpointer(&a,(void*)C_TARGET_FEATURES),C_fix(0));}}

/* k3722 in k3707 in k3704 in g531 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in ... */
static void C_ccall f_3724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:862: command */
f_4685(((C_word*)t0)[2],t1);}

/* k4639 in k4636 in k4633 in command in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_4641(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4641,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4644,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(t2,C_fix(0));
if(C_truep(t4)){
t5=t3;
f_4644(2,t5,C_SCHEME_UNDEFINED);}
else{
t5=*((C_word*)lf[130]+1);
t6=*((C_word*)lf[130]+1);
t7=C_i_check_port_2(*((C_word*)lf[130]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[131]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4661,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csc.scm:1051: ##sys#print */
t9=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,lf[133],C_SCHEME_FALSE,*((C_word*)lf[130]+1));}}

/* k4642 in k4639 in k4636 in k4633 in command in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in ... */
static void C_ccall f_4644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t2)){
t3=lf[129] /* last-exit-code */ =C_fix(0);;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_retrieve2(lf[129],"last-exit-code"));}
else{
t3=lf[129] /* last-exit-code */ =C_fix(1);;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_retrieve2(lf[129],"last-exit-code"));}}

/* k2870 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in ... */
static void C_ccall f_2872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2872,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2875,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:740: t-options */
f_1785(t2,C_a_i_list(&a,2,lf[366],t3));}

/* k2873 in k2870 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in ... */
static void C_ccall f_2875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
/* csc.scm:809: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1858(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k4697 in command in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in ... */
static void C_ccall f_4699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_i_zerop(t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* csc.scm:1058: exit */
t2=C_fast_retrieve(lf[13]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_retrieve2(lf[129],"last-exit-code"));}}

/* k2178 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_2180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate2(&lf[77] /* (set! translate-options ...) */,t1);
t3=lf[94] /* static */ =C_SCHEME_TRUE;;
/* csc.scm:809: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1858(t4,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k2809 in k2795 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in ... */
static void C_fcall f_2811(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2811,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2815,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2823,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:731: string-append */
t4=*((C_word*)lf[120]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[358],C_retrieve2(lf[70],"rpath"));}
else{
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
/* csc.scm:809: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1858(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}}

/* k2813 in k2809 in k2795 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in ... */
static void C_ccall f_2815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate2(&lf[86] /* (set! link-options ...) */,t1);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t3);
/* csc.scm:809: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1858(t5,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k3307 in k3301 in k3181 in k2969 in k2960 in k2904 in k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in ... */
static void C_ccall f_3309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3309,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
/* csc.scm:809: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1858(t4,((C_word*)t0)[5],((C_word*)((C_word*)t0)[3])[1]);}
else{
/* csc.scm:808: stop */
f_1405(((C_word*)t0)[6],lf[395],C_a_i_list(&a,1,((C_word*)t0)[7]));}}

/* shared-build in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in ... */
static void C_fcall f_1818(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1818,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1823,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:521: cons* */
t4=C_fast_retrieve(lf[126]);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[147],lf[148],C_retrieve2(lf[77],"translate-options"));}

/* k4295 in k4292 in k4289 in k4283 in k4249 in k4199 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in ... */
static void C_ccall f_4297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:914: command */
f_4685(((C_word*)t0)[2],t1);}

/* k4289 in k4283 in k4249 in k4199 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in ... */
static void C_ccall f_4291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4291,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4294,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4301,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4305,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:914: make-pathname */
t5=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)((C_word*)t0)[5])[1],lf[187]);}

/* k4292 in k4289 in k4283 in k4249 in k4199 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in ... */
static void C_ccall f_4294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4294,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4297,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:914: get-output-string */
t3=C_fast_retrieve(lf[109]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k4668 in k4665 in k4662 in k4659 in k4639 in k4636 in k4633 in command in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in ... */
static void C_ccall f_4670(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:1051: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[14]))(4,*((C_word*)lf[14]+1),((C_word*)t0)[2],C_make_character(10),((C_word*)t0)[3]);}

/* k3301 in k3181 in k2969 in k2960 in k2904 in k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in ... */
static void C_ccall f_3303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3303,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3309,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* csc.scm:806: file-exists? */
t4=C_fast_retrieve(lf[157]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k2821 in k2809 in k2795 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in ... */
static void C_ccall f_2823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2823,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* csc.scm:731: append */
t3=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],C_retrieve2(lf[86],"link-options"),t2);}

/* k2825 in k2795 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in ... */
static void C_ccall f_2827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep((C_truep(C_eqp(t1,lf[359]))?C_SCHEME_TRUE:(C_truep(C_eqp(t1,lf[360]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t2=C_retrieve2(lf[1],"mingw");
t3=((C_word*)t0)[2];
f_2811(t3,(C_truep(C_retrieve2(lf[1],"mingw"))?C_SCHEME_FALSE:C_i_not(C_retrieve2(lf[3],"osx"))));}
else{
t2=((C_word*)t0)[2];
f_2811(t2,C_SCHEME_FALSE);}}

/* command in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in ... */
static void C_fcall f_4685(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4685,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4699,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=t3;
t5=t2;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4635,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[88],"verbose"))){
/* csc.scm:1045: print */
t7=*((C_word*)lf[137]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t5);}
else{
t7=t6;
f_4635(2,t7,C_SCHEME_UNDEFINED);}}

/* k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in ... */
static void C_ccall f_1584(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1584,2,t0,t1);}
t2=C_i_member(t1,lf[78]);
t3=(C_truep(t2)?C_SCHEME_FALSE:t1);
t4=C_mutate2(&lf[79] /* (set! include-dir ...) */,t3);
t5=lf[80] /* compile-options */ =C_SCHEME_END_OF_LIST;;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1592,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4894,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[79],"include-dir"))){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4959,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:243: conc */
t9=C_fast_retrieve(lf[237]);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,lf[412],C_retrieve2(lf[79],"include-dir"),lf[413]);}
else{
t8=t7;
f_4894(t8,C_SCHEME_END_OF_LIST);}}

/* k1620 in k1617 in k1613 in k1609 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in ... */
static void C_ccall f_1622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:263: append */
t2=*((C_word*)lf[101]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1630 in k1617 in k1613 in k1609 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in ... */
static void C_ccall f_1632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1632,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1637,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_1637(t5,((C_word*)t0)[4],t1);}

/* k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in ... */
static void C_ccall f_1592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1592,2,t0,t1);}
t2=C_mutate2(&lf[81] /* (set! builtin-compile-options ...) */,t1);
t3=lf[82] /* translation-optimization-options */ =C_SCHEME_END_OF_LIST;;
t4=C_mutate2(&lf[83] /* (set! compilation-optimization-options ...) */,C_retrieve2(lf[47],"default-compilation-optimization-options"));
t5=C_mutate2(&lf[84] /* (set! linking-optimization-options ...) */,C_retrieve2(lf[49],"default-linking-optimization-options"));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1600,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4884,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t8=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,C_mpointer(&a,(void*)C_INSTALL_LIB_HOME),C_fix(0));}
else{
/* ##sys#peek-c-string */
t8=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,C_mpointer(&a,(void*)C_TARGET_LIB_HOME),C_fix(0));}}

/* k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f_5167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5167,2,t0,t1);}
t2=C_eqp(t1,lf[2]);
t3=C_mutate2(&lf[3] /* (set! osx ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5163,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:71: build-platform */
t5=C_fast_retrieve(lf[361]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in ... */
static void C_ccall f_1525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1525,2,t0,t1);}
t2=C_mutate2(&lf[47] /* (set! default-compilation-optimization-options ...) */,t1);
t3=C_mutate2(&lf[48] /* (set! best-compilation-optimization-options ...) */,C_retrieve2(lf[47],"default-compilation-optimization-options"));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1530,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5045,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t6=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_mpointer(&a,(void*)C_INSTALL_LDFLAGS),C_fix(0));}
else{
/* ##sys#peek-c-string */
t6=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_mpointer(&a,(void*)C_TARGET_LDFLAGS),C_fix(0));}}

/* k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f_5163(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5163,2,t0,t1);}
t2=C_eqp(t1,lf[4]);
t3=C_mutate2(&lf[5] /* (set! cygwin ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5159,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:72: build-platform */
t5=C_fast_retrieve(lf[361]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in ... */
static void C_ccall f_1521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1521,2,t0,t1);}
t2=C_mutate2(&lf[46] /* (set! default-library ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1525,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5055,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t5=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_INSTALL_CFLAGS),C_fix(0));}
else{
/* ##sys#peek-c-string */
t5=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_TARGET_CFLAGS),C_fix(0));}}

/* k3339 in k2904 in k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in ... */
static void C_ccall f_3341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2962(t2,C_u_i_string_equal_p(lf[397],t1));}

/* map-loop163 in k1630 in k1617 in k1613 in k1609 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in ... */
static void C_fcall f_1637(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1637,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1666,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:284: g186 */
t5=*((C_word*)lf[120]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,lf[227],t4,lf[228]);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f_5159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5159,2,t0,t1);}
t2=C_eqp(t1,lf[6]);
t3=C_mutate2(&lf[7] /* (set! aix ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1402,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:75: software-version */
t5=C_fast_retrieve(lf[236]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k1904 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in ... */
static void C_ccall f_1906(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1906,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1909,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:572: ##sys#print */
t3=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,C_retrieve2(lf[87],"target-filename"),C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k1907 in k1904 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in ... */
static void C_ccall f_1909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1909,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1912,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:572: ##sys#print */
t3=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[195],C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k1913 in k1910 in k1907 in k1904 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in ... */
static void C_ccall f_1915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1915,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1918,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:572: ##sys#print */
t3=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[194],C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k1916 in k1913 in k1910 in k1907 in k1904 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in ... */
static void C_ccall f_1918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1918,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1921,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:572: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[14]))(4,*((C_word*)lf[14]+1),t2,C_make_character(10),((C_word*)t0)[3]);}

/* k1910 in k1907 in k1904 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in ... */
static void C_ccall f_1912(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1912,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1915,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:572: ##sys#print */
t3=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,C_retrieve2(lf[87],"target-filename"),C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in ... */
static void C_ccall f_1888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1888,2,t0,t1);}
if(C_truep(C_retrieve2(lf[91],"compile-only"))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1894,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_member(C_retrieve2(lf[87],"target-filename"),C_retrieve2(lf[52],"scheme-files")))){
t3=*((C_word*)lf[130]+1);
t4=*((C_word*)lf[130]+1);
t5=C_i_check_port_2(*((C_word*)lf[130]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[131]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1906,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:572: ##sys#print */
t7=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,lf[196],C_SCHEME_FALSE,*((C_word*)lf[130]+1));}
else{
t3=t2;
f_1894(2,t3,C_SCHEME_UNDEFINED);}}}

/* k1926 in k1919 in k1916 in k1913 in k1910 in k1907 in k1904 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in ... */
static void C_ccall f_1928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1928,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[107]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1934,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve2(lf[42],"windows-shell"))){
/* csc.scm:575: ##sys#print */
t6=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[192],C_SCHEME_FALSE,t3);}
else{
/* csc.scm:575: ##sys#print */
t6=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[193],C_SCHEME_FALSE,t3);}}

/* k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in ... */
static void C_fcall f_1882(C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1882,NULL,2,t0,t1);}
if(C_truep(C_retrieve2(lf[90],"translate-only"))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1888,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=t2;
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3702,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=C_retrieve2(lf[53],"c-files");
t8=C_i_check_list_2(C_retrieve2(lf[53],"c-files"),lf[151]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3771,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3934,a[2]=t11,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t13=((C_word*)t11)[1];
f_3934(t13,t9,C_retrieve2(lf[53],"c-files"));}}

/* k1919 in k1916 in k1913 in k1910 in k1907 in k1904 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in ... */
static void C_ccall f_1921(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1921,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1928,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:575: open-output-string */
t3=C_fast_retrieve(lf[112]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in ... */
static void C_ccall f_1569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1569,2,t0,t1);}
t2=C_mutate2(&lf[72] /* (set! extra-shared-libraries ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4998,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5002,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5006,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5010,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t7=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,C_mpointer(&a,(void*)C_INSTALL_LIB_HOME),C_fix(0));}
else{
/* ##sys#peek-c-string */
t7=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,C_mpointer(&a,(void*)C_TARGET_LIB_HOME),C_fix(0));}}

/* k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in ... */
static void C_ccall f_1565(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1565,2,t0,t1);}
t2=C_mutate2(&lf[71] /* (set! extra-libraries ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1569,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t4=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_INSTALL_MORE_LIBS),C_fix(0));}
else{
/* ##sys#peek-c-string */
t4=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_TARGET_MORE_LIBS),C_fix(0));}}

/* k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in ... */
static void C_ccall f_1894(C_word c,C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1894,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_retrieve2(lf[23],"quotewrap");
t8=C_retrieve2(lf[57],"object-files");
t9=C_i_check_list_2(C_retrieve2(lf[57],"object-files"),lf[99]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4022,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4307,a[2]=t6,a[3]=t12,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_4307(t14,t10,C_retrieve2(lf[57],"object-files"));}

/* k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in ... */
static void C_ccall f_1869(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1869,2,t0,t1);}
t2=C_mutate2(&lf[80] /* (set! compile-options ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1873,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2092,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1611,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[8],"elf"))){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1691,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:266: conc */
t8=C_fast_retrieve(lf[237]);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t7,lf[243],C_retrieve2(lf[85],"library-dir"),lf[244]);}
else{
if(C_truep(C_retrieve2(lf[7],"aix"))){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1722,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:276: conc */
t8=C_fast_retrieve(lf[237]);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t7,lf[245],C_retrieve2(lf[85],"library-dir"),lf[246]);}
else{
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1729,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:278: conc */
t8=C_fast_retrieve(lf[237]);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t7,lf[247],C_retrieve2(lf[85],"library-dir"),lf[248]);}}}

/* k3541 in k3538 in for-each-loop470 in k2019 in k2016 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in ... */
static void C_ccall f_3543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3543,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3546,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3566,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3570,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3574,a[2]=t4,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5928,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t8=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,((C_word*)t0)[4]);}

/* k3544 in k3541 in k3538 in for-each-loop470 in k2019 in k2016 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in ... */
static void C_ccall f_3546(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3546,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3550,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[3]);
/* csc.scm:847: append */
t4=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_retrieve2(lf[53],"c-files"));}

/* map-loop652 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in ... */
static void C_fcall f_4307(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4307,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4336,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:907: g658 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3538 in for-each-loop470 in k2019 in k2016 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in ... */
static void C_ccall f_3540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3540,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3543,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_member(t2,C_retrieve2(lf[53],"c-files")))){
/* csc.scm:826: stop */
f_1405(t3,lf[220],C_a_i_list(&a,2,((C_word*)t0)[3],t2));}
else{
t4=t3;
f_3543(2,t4,C_SCHEME_UNDEFINED);}}

/* k4303 in k4289 in k4283 in k4249 in k4199 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in ... */
static void C_ccall f_4305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4305,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5869,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t4=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}

/* k4299 in k4289 in k4283 in k4249 in k4199 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in ... */
static void C_ccall f_4301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:914: ##sys#print */
t2=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in ... */
static void C_ccall f_1879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1879,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1882,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[68],"deploy"))){
t3=C_retrieve2(lf[93],"shared");
t4=t2;
f_1882(t4,(C_truep(C_retrieve2(lf[93],"shared"))?C_SCHEME_UNDEFINED:f_1841(C_a_i(&a,6))));}
else{
t3=t2;
f_1882(t3,C_SCHEME_UNDEFINED);}}

/* k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_1873(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1873,2,t0,t1);}
t2=C_mutate2(&lf[86] /* (set! link-options ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1876,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[62],"inquiry-only"))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2055,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[63],"show-cflags"))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2088,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:542: compiler-options */
f_3957(t5);}
else{
t5=t4;
f_2055(2,t5,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_1876(2,t4,C_SCHEME_UNDEFINED);}}

/* k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in ... */
static void C_ccall f_1876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1876,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1879,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(C_retrieve2(lf[52],"scheme-files")))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1980,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(C_retrieve2(lf[53],"c-files")))){
if(C_truep(C_i_nullp(C_retrieve2(lf[57],"object-files")))){
/* csc.scm:550: stop */
f_1405(t3,lf[213],C_SCHEME_END_OF_LIST);}
else{
t4=t3;
f_1980(2,t4,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_1980(2,t4,C_SCHEME_UNDEFINED);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2018,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(C_truep(C_retrieve2(lf[93],"shared"))?C_i_not(C_retrieve2(lf[61],"embedded")):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_a_i_cons(&a,2,lf[224],C_retrieve2(lf[77],"translate-options"));
t6=C_mutate2(&lf[77] /* (set! translate-options ...) */,t5);
t7=t3;
f_2018(t7,t6);}
else{
t5=t3;
f_2018(t5,C_SCHEME_UNDEFINED);}}}

/* k3552 in k3548 in k3544 in k3541 in k3538 in for-each-loop470 in k2019 in k2016 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in ... */
static void C_ccall f_3554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(&lf[55] /* (set! generated-c-files ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k4275 in k4265 in k4259 in k4252 in k4249 in k4199 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in ... */
static void C_ccall f_4277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:915: ##sys#print */
t2=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k4271 in k4268 in k4265 in k4259 in k4252 in k4249 in k4199 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in ... */
static void C_ccall f_4273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:915: command */
f_4685(((C_word*)t0)[2],t1);}

/* k4268 in k4265 in k4259 in k4252 in k4249 in k4199 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in ... */
static void C_ccall f_4270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4270,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4273,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:915: get-output-string */
t3=C_fast_retrieve(lf[109]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k3548 in k3544 in k3541 in k3538 in for-each-loop470 in k2019 in k2016 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in ... */
static void C_ccall f_3550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3550,2,t0,t1);}
t2=C_mutate2(&lf[53] /* (set! c-files ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3554,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_list1(&a,1,((C_word*)t0)[3]);
/* csc.scm:848: append */
t5=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,C_retrieve2(lf[55],"generated-c-files"));}

/* k3564 in k3541 in k3538 in for-each-loop470 in k2019 in k2016 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in ... */
static void C_ccall f_3566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:828: command */
f_4685(((C_word*)t0)[2],t1);}

/* k4283 in k4249 in k4199 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in ... */
static void C_ccall f_4285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4285,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[107]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4291,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:914: ##sys#print */
t6=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[188],C_SCHEME_FALSE,t3);}

/* k4279 in k4265 in k4259 in k4252 in k4249 in k4199 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in ... */
static void C_ccall f_4281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4281,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5864,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t4=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}

/* k3685 in for-each-loop470 in k2019 in k2016 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in ... */
static void C_ccall f_3687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3677(t3,((C_word*)t0)[4],t2);}

/* k3572 in k3541 in k3538 in for-each-loop470 in k2019 in k2016 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in ... */
static void C_ccall f_3574(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3574,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3578,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3582,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[92],"to-stdout"))){
t5=t4;
f_3582(t5,lf[218]);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3648,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5923,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t8=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,((C_word*)t0)[3]);}}

/* k3576 in k3572 in k3541 in k3538 in for-each-loop470 in k2019 in k2016 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in ... */
static void C_ccall f_3578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:830: cons* */
t2=C_fast_retrieve(lf[126]);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],C_retrieve2(lf[27],"translator"),((C_word*)t0)[3],t1);}

/* k3568 in k3541 in k3538 in for-each-loop470 in k2019 in k2016 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in ... */
static void C_ccall f_3570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:829: string-intersperse */
t2=C_fast_retrieve(lf[100]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[214]);}

/* k3580 in k3572 in k3541 in k3538 in for-each-loop470 in k2019 in k2016 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in ... */
static void C_fcall f_3582(C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3582,NULL,2,t0,t1);}
t2=t1;
t3=C_fudge(C_fix(13));
t4=(C_truep(t3)?lf[215]:C_SCHEME_END_OF_LIST);
t5=t4;
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_retrieve2(lf[98],"quote-option");
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3590,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t5,a[5]=t9,a[6]=t7,a[7]=t10,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_retrieve2(lf[59],"cpp-mode"))){
/* csc.scm:839: append */
t12=*((C_word*)lf[101]+1);
((C_proc6)(void*)(*((C_word*)t12+1)))(6,t12,t11,C_retrieve2(lf[51],"extra-features"),C_retrieve2(lf[77],"translate-options"),lf[216],C_retrieve2(lf[82],"translation-optimization-options"));}
else{
if(C_truep(C_retrieve2(lf[60],"objc-mode"))){
/* csc.scm:839: append */
t12=*((C_word*)lf[101]+1);
((C_proc6)(void*)(*((C_word*)t12+1)))(6,t12,t11,C_retrieve2(lf[51],"extra-features"),C_retrieve2(lf[77],"translate-options"),lf[217],C_retrieve2(lf[82],"translation-optimization-options"));}
else{
/* csc.scm:839: append */
t12=*((C_word*)lf[101]+1);
((C_proc6)(void*)(*((C_word*)t12+1)))(6,t12,t11,C_retrieve2(lf[51],"extra-features"),C_retrieve2(lf[77],"translate-options"),C_SCHEME_END_OF_LIST,C_retrieve2(lf[82],"translation-optimization-options"));}}}

/* k3594 in k3588 in k3580 in k3572 in k3541 in k3538 in for-each-loop470 in k2019 in k2016 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in ... */
static void C_ccall f_3596(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:831: append */
t2=*((C_word*)lf[101]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* map-loop491 in k3588 in k3580 in k3572 in k3541 in k3538 in for-each-loop470 in k2019 in k2016 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in ... */
static void C_fcall f_3598(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3598,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3627,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:838: g497 */
t5=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3588 in k3580 in k3572 in k3541 in k3538 in for-each-loop470 in k2019 in k2016 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in ... */
static void C_ccall f_3590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3590,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[99]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3596,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3598,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_3598(t7,t3,t1);}

/* k4109 in k4106 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in ... */
static void C_ccall f_4111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4111,2,t0,t1);}
t2=(C_truep(C_retrieve2(lf[67],"gui"))?C_i_not(C_retrieve2(lf[68],"deploy")):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
t4=((C_word*)((C_word*)t0)[3])[1];
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4724,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:1068: open-output-string */
t6=C_fast_retrieve(lf[112]);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];
f_4034(2,t4,t3);}}

/* k2659 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in ... */
static void C_ccall f_2661(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate2(&lf[28] /* (set! compiler ...) */,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t4);
/* csc.scm:809: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_1858(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k4125 in k4106 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in ... */
static void C_ccall f_4127(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:937: command */
f_4685(((C_word*)t0)[2],t1);}

/* k2601 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_2603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:809: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1858(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k4106 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in ... */
static void C_fcall f_4108(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4108,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4111,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4127,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4131,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_INSTALL_POSTINSTALL_PROGRAM),C_fix(0));}
else{
t2=((C_word*)t0)[2];
f_4034(2,t2,C_SCHEME_UNDEFINED);}}

/* k4909 in k4896 in k4892 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in ... */
static void C_ccall f_4911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4911,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4916,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4916(t5,((C_word*)t0)[4],t1);}

/* map-loop109 in k4909 in k4896 in k4892 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in ... */
static void C_fcall f_4916(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4916,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4945,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:246: g132 */
t5=*((C_word*)lf[120]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,lf[408],t4,lf[409]);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2676 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in ... */
static void C_ccall f_2678(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate2(&lf[29] /* (set! c++-compiler ...) */,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t4);
/* csc.scm:809: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_1858(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k2850 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in ... */
static void C_ccall f_2852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2852,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2855,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:736: t-options */
f_1785(t2,C_a_i_list(&a,2,lf[364],t3));}

/* k4133 in k4129 in k4106 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in ... */
static void C_ccall f_4135(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:938: string-append */
t2=*((C_word*)lf[120]+1);
((C_proc9)(void*)(*((C_word*)t2+1)))(9,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[175],C_retrieve2(lf[44],"libchicken"),lf[176],t1,lf[177],((C_word*)((C_word*)t0)[4])[1]);}

/* k4137 in k4129 in k4106 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in ... */
static void C_ccall f_4139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4139,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4142,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[69],"deployed"))){
/* csc.scm:943: make-pathname */
t4=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[178],t2);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4152,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:945: lib-path */
f_4342(t4);}}

/* k4129 in k4106 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in ... */
static void C_ccall f_4131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4131,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4135,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4139,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_retrieve2(lf[44],"libchicken");
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[114]))(4,*((C_word*)lf[114]+1),t4,C_retrieve2(lf[44],"libchicken"),lf[179]);}

/* k2642 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in ... */
static void C_ccall f_2644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate2(&lf[27] /* (set! translator ...) */,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t4);
/* csc.scm:809: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_1858(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k2853 in k2850 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in ... */
static void C_ccall f_2855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
/* csc.scm:809: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1858(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k4140 in k4137 in k4129 in k4106 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in ... */
static void C_ccall f_4142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4142,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5849,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t4=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}

/* k4899 in k4896 in k4892 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in ... */
static void C_ccall f_4901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:242: append */
t2=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k1617 in k1613 in k1609 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in ... */
static void C_ccall f_1619(C_word c,C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1619,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1622,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
t4=t1;
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1632,a[2]=t8,a[3]=t6,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:284: string-split */
t10=C_fast_retrieve(lf[229]);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,t4,lf[230]);}
else{
/* csc.scm:263: append */
t3=*((C_word*)lf[101]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_END_OF_LIST);}}

/* k1613 in k1609 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in ... */
static void C_fcall f_1615(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1615,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1619,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:282: get-environment-variable */
t4=C_fast_retrieve(lf[170]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[231]);}

/* k1609 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_fcall f_1611(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1611,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1615,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[69],"deployed"))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1683,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:279: software-version */
t5=C_fast_retrieve(lf[236]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t3;
f_1615(t4,C_SCHEME_END_OF_LIST);}}

/* k1935 in k1932 in k1926 in k1919 in k1916 in k1913 in k1910 in k1907 in k1904 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in ... */
static void C_ccall f_1937(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1937,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1940,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1961,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=t3;
t5=C_retrieve2(lf[87],"target-filename");
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5886,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t7=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,C_retrieve2(lf[87],"target-filename"));}

/* k1932 in k1926 in k1919 in k1916 in k1913 in k1910 in k1907 in k1904 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in ... */
static void C_ccall f_1934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1934,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1937,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:575: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[14]))(4,*((C_word*)lf[14]+1),t2,C_make_character(32),((C_word*)t0)[4]);}

/* k1947 in k1944 in k1941 in k1938 in k1935 in k1932 in k1926 in k1919 in k1916 in k1913 in k1910 in k1907 in k1904 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in ... */
static void C_ccall f_1949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:574: command */
f_4685(((C_word*)t0)[2],t1);}

/* k1944 in k1941 in k1938 in k1935 in k1932 in k1926 in k1919 in k1916 in k1913 in k1910 in k1907 in k1904 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in ... */
static void C_ccall f_1946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1946,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1949,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:575: get-output-string */
t3=C_fast_retrieve(lf[109]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k1941 in k1938 in k1935 in k1932 in k1926 in k1919 in k1916 in k1913 in k1910 in k1907 in k1904 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in ... */
static void C_ccall f_1943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1943,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1946,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1953,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1957,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:579: string-append */
t5=*((C_word*)lf[120]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_retrieve2(lf[87],"target-filename"),lf[191]);}

/* k1938 in k1935 in k1932 in k1926 in k1919 in k1916 in k1913 in k1910 in k1907 in k1904 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in ... */
static void C_ccall f_1940(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1940,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1943,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:575: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[14]))(4,*((C_word*)lf[14]+1),t2,C_make_character(32),((C_word*)t0)[4]);}

/* k1955 in k1941 in k1938 in k1935 in k1932 in k1926 in k1919 in k1916 in k1913 in k1910 in k1907 in k1904 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in ... */
static void C_ccall f_1957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1957,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5881,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t4=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}

/* k1951 in k1941 in k1938 in k1935 in k1932 in k1926 in k1919 in k1916 in k1913 in k1910 in k1907 in k1904 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in ... */
static void C_ccall f_1953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:575: ##sys#print */
t2=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_fcall f_2620(C_word t0,C_word t1){
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
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2620,NULL,2,t0,t1);}
if(C_truep(t1)){
/* csc.scm:694: shared-build */
f_1818(((C_word*)t0)[3],C_SCHEME_FALSE);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[345]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[4],lf[346]));
if(C_truep(t3)){
/* csc.scm:696: shared-build */
f_1818(((C_word*)t0)[3],C_SCHEME_TRUE);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[347]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2644,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:698: check */
f_1792(t5,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[348]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2661,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:702: check */
f_1792(t6,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[349]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2678,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:706: check */
f_1792(t7,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t7=C_eqp(((C_word*)t0)[4],lf[350]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2695,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:710: check */
f_1792(t8,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[351]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2712,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:714: check */
f_1792(t9,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t9=C_eqp(((C_word*)t0)[4],lf[353]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2733,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:717: check */
f_1792(t10,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[354]);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2759,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t12=C_a_i_list1(&a,1,lf[355]);
/* csc.scm:721: append */
t13=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t11,C_retrieve2(lf[86],"link-options"),t12);}
else{
t11=C_eqp(((C_word*)t0)[4],lf[356]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2772,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:723: check */
f_1792(t12,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t12=C_eqp(((C_word*)t0)[4],lf[357]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2797,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:727: check */
f_1792(t13,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t13=C_eqp(((C_word*)t0)[4],lf[362]);
if(C_truep(t13)){
/* csc.scm:809: loop */
t14=((C_word*)((C_word*)t0)[6])[1];
f_1858(t14,((C_word*)t0)[7],((C_word*)((C_word*)t0)[5])[1]);}
else{
t14=C_eqp(((C_word*)t0)[4],lf[363]);
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2852,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[10],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:735: check */
f_1792(t15,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t15=C_eqp(((C_word*)t0)[4],lf[365]);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2872,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[10],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:739: check */
f_1792(t16,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t16=C_eqp(((C_word*)t0)[4],lf[367]);
if(C_truep(t16)){
t17=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2893,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:743: append */
t18=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t18+1)))(4,t18,t17,C_retrieve2(lf[52],"scheme-files"),lf[369]);}
else{
t17=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2903,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t18=C_eqp(((C_word*)t0)[9],lf[400]);
if(C_truep(t18)){
t19=lf[92] /* to-stdout */ =C_SCHEME_TRUE;;
t20=lf[90] /* translate-only */ =C_SCHEME_TRUE;;
t21=t17;
f_2903(t21,t20);}
else{
t19=t17;
f_2903(t19,C_SCHEME_UNDEFINED);}}}}}}}}}}}}}}}}}

/* k1959 in k1935 in k1932 in k1926 in k1919 in k1916 in k1913 in k1910 in k1907 in k1904 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in ... */
static void C_ccall f_1961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:575: ##sys#print */
t2=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in ... */
static void C_ccall f_1600(C_word c,C_word t0,C_word t1){
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
C_word ab[28],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1600,2,t0,t1);}
t2=C_mutate2(&lf[85] /* (set! library-dir ...) */,t1);
t3=lf[86] /* link-options */ =C_SCHEME_END_OF_LIST;;
t4=lf[87] /* target-filename */ =C_SCHEME_FALSE;;
t5=lf[88] /* verbose */ =C_SCHEME_FALSE;;
t6=lf[89] /* keep-files */ =C_SCHEME_FALSE;;
t7=lf[90] /* translate-only */ =C_SCHEME_FALSE;;
t8=lf[91] /* compile-only */ =C_SCHEME_FALSE;;
t9=lf[92] /* to-stdout */ =C_SCHEME_FALSE;;
t10=lf[93] /* shared */ =C_SCHEME_FALSE;;
t11=lf[94] /* static */ =C_SCHEME_FALSE;;
t12=lf[95] /* static-libs */ =C_SCHEME_FALSE;;
t13=lf[96] /* required-extensions */ =C_SCHEME_END_OF_LIST;;
t14=C_mutate2(&lf[97] /* (set! compiler-options ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3957,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate2(&lf[102] /* (set! lib-path ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4342,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate2(&lf[106] /* (set! copy-files ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4423,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate2(&lf[113] /* (set! linker-options ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4466,tmp=(C_word)a,a+=2,tmp));
t18=C_mutate2(&lf[117] /* (set! linker-libraries ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4496,tmp=(C_word)a,a+=2,tmp));
t19=C_mutate2(&lf[118] /* (set! constant798 ...) */,lf[119]);
t20=C_mutate2(&lf[98] /* (set! quote-option ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4594,tmp=(C_word)a,a+=2,tmp));
t21=lf[129] /* last-exit-code */ =C_SCHEME_FALSE;;
t22=C_mutate2(&lf[108] /* (set! command ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4685,tmp=(C_word)a,a+=2,tmp));
t23=C_mutate2(&lf[138] /* (set! $delete-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4701,tmp=(C_word)a,a+=2,tmp));
t24=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4859,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t25=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4869,a[2]=t24,tmp=(C_word)a,a+=3,tmp);
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4873,a[2]=t25,tmp=(C_word)a,a+=3,tmp);
t27=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4877,a[2]=t26,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1133: get-environment-variable */
t28=C_fast_retrieve(lf[170]);
((C_proc3)(void*)(*((C_word*)t28+1)))(3,t28,t27,lf[405]);}

/* k1689 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_1691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1691,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1695,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1699,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[69],"deployed"))){
/* csc.scm:267: conc */
t5=C_fast_retrieve(lf[237]);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,lf[238],lf[240],lf[239]);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1706,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t6=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_mpointer(&a,(void*)C_INSTALL_LIB_HOME),C_fix(0));}
else{
/* ##sys#peek-c-string */
t6=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_mpointer(&a,(void*)C_TARGET_RUN_LIB_HOME),C_fix(0));}}}

/* k1981 in k1978 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in ... */
static void C_ccall f_1983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1983,2,t0,t1);}
if(C_truep(C_retrieve2(lf[87],"target-filename"))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_1879(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1990,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[93],"shared"))){
/* csc.scm:555: pathname-replace-extension */
t3=C_fast_retrieve(lf[203]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,C_retrieve2(lf[39],"shared-library-extension"));}
else{
/* csc.scm:556: pathname-replace-extension */
t3=C_fast_retrieve(lf[203]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,C_retrieve2(lf[37],"executable-extension"));}}}

/* k1978 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in ... */
static void C_ccall f_1980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1980,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1983,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(C_retrieve2(lf[53],"c-files")))){
t3=C_retrieve2(lf[57],"object-files");
t4=C_retrieve2(lf[57],"object-files");
/* csc.scm:551: last */
t5=C_fast_retrieve(lf[212]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t2,C_retrieve2(lf[57],"object-files"));}
else{
t3=C_retrieve2(lf[53],"c-files");
t4=C_retrieve2(lf[53],"c-files");
/* csc.scm:551: last */
t5=C_fast_retrieve(lf[212]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t2,C_retrieve2(lf[53],"c-files"));}}

/* k1681 in k1609 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in ... */
static void C_ccall f_1683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1683,2,t0,t1);}
t2=((C_word*)t0)[2];
f_1615(t2,(C_truep((C_truep(C_eqp(t1,lf[232]))?C_SCHEME_TRUE:(C_truep(C_eqp(t1,lf[233]))?C_SCHEME_TRUE:(C_truep(C_eqp(t1,lf[234]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))?C_a_i_list1(&a,1,lf[235]):C_SCHEME_END_OF_LIST));}

/* k1988 in k1981 in k1978 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in ... */
static void C_ccall f_1990(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(&lf[87] /* (set! target-filename ...) */,t1);
t3=((C_word*)t0)[2];
f_1879(2,t3,t2);}

/* k1697 in k1689 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in ... */
static void C_ccall f_1699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:267: conc */
t2=C_fast_retrieve(lf[237]);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[238],t1,lf[239]);}

/* k1693 in k1689 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in ... */
static void C_ccall f_1695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1695,2,t0,t1);}
t2=((C_word*)t0)[2];
f_1611(t2,C_a_i_list2(&a,2,((C_word*)t0)[3],t1));}

/* k5127 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f_5129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5129,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5979,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t4=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}

/* k1664 in map-loop163 in k1630 in k1617 in k1613 in k1609 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in ... */
static void C_ccall f_1666(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1666,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1637(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1637(t6,((C_word*)t0)[5],t5);}}

/* k2969 in k2960 in k2904 in k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in ... */
static void C_fcall f_2971(C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2971,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_subchar(((C_word*)t0)[2],C_fix(1));
if(C_truep(C_i_char_equalp(C_make_character(108),t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2981,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:766: append */
t5=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,C_retrieve2(lf[86],"link-options"),t4);}
else{
t3=C_subchar(((C_word*)t0)[2],C_fix(1));
if(C_truep(C_i_char_equalp(C_make_character(76),t3))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2995,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:768: append */
t6=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,C_retrieve2(lf[86],"link-options"),t5);}
else{
t4=C_subchar(((C_word*)t0)[2],C_fix(1));
if(C_truep(C_i_char_equalp(C_make_character(73),t4))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3009,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t6=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:770: append */
t7=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,C_retrieve2(lf[80],"compile-options"),t6);}
else{
t5=C_subchar(((C_word*)t0)[2],C_fix(1));
if(C_truep(C_i_char_equalp(C_make_character(68),t5))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3026,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:772: substring */
t7=*((C_word*)lf[374]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[2],C_fix(2));}
else{
t6=C_subchar(((C_word*)t0)[2],C_fix(1));
if(C_truep(C_i_char_equalp(C_make_character(70),t6))){
if(C_truep(C_retrieve2(lf[3],"osx"))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3039,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t8=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:775: append */
t9=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,C_retrieve2(lf[80],"compile-options"),t8);}
else{
/* csc.scm:809: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_1858(t7,((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1]);}}
else{
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3049,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t8=C_block_size(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greaterp(t8,C_fix(3)))){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3156,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:776: substring */
t10=*((C_word*)lf[374]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t9,((C_word*)t0)[2],C_fix(0),C_fix(4));}
else{
t9=t7;
f_3049(t9,C_SCHEME_FALSE);}}}}}}}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3183,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* csc.scm:785: file-exists? */
t3=C_fast_retrieve(lf[157]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}}

/* k5117 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f_5119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5119,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5974,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t4=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}

/* k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in ... */
static void C_ccall f_4869(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4869,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1785,tmp=(C_word)a,a+=2,tmp));
t11=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1792,tmp=(C_word)a,a+=2,tmp));
t12=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1818,tmp=(C_word)a,a+=2,tmp));
t13=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1841,tmp=(C_word)a,a+=2,tmp));
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1858,a[2]=t9,a[3]=t15,a[4]=t3,a[5]=t5,a[6]=t7,tmp=(C_word)a,a+=7,tmp));
t17=((C_word*)t15)[1];
f_1858(t17,((C_word*)t0)[2],t1);}

/* k4863 in k4857 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in ... */
static void C_ccall f_4865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k4860 in k4857 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in ... */
static void C_ccall f_4862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* k2979 in k2969 in k2960 in k2904 in k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in ... */
static void C_ccall f_2981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(&lf[86] /* (set! link-options ...) */,t1);
/* csc.scm:809: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1858(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k5107 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f_5109(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5109,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5969,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t4=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}

/* a4832 in k4826 in k3923 in k3908 in k3905 in k3769 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in ... */
static void C_ccall f_4833(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4833,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4841,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_cons(&a,2,lf[206],C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
t5=C_a_i_cons(&a,2,lf[207],t4);
/* csc.scm:1106: ##sys#print-to-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[154]))(3,*((C_word*)lf[154]+1),t2,t5);}

/* k2993 in k2969 in k2960 in k2904 in k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in ... */
static void C_ccall f_2995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(&lf[86] /* (set! link-options ...) */,t1);
/* csc.scm:809: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1858(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* f6340 in k5131 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f6340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4839 in a4832 in k4826 in k3923 in k3908 in k3905 in k3769 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in ... */
static void C_ccall f_4841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:1110: print */
t2=*((C_word*)lf[137]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f6345 in k5147 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f6345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3007 in k2969 in k2960 in k2904 in k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in ... */
static void C_ccall f_3009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(&lf[80] /* (set! compile-options ...) */,t1);
/* csc.scm:809: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1858(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* f6335 in k5004 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in ... */
static void C_ccall f6335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2693 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in ... */
static void C_ccall f_2695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate2(&lf[31] /* (set! linker ...) */,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t4);
/* csc.scm:809: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_1858(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k2441 in k2445 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in ... */
static void C_ccall f_2443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(&lf[86] /* (set! link-options ...) */,t1);
/* csc.scm:809: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1858(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k4195 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in ... */
static void C_ccall f_4197(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[114]))(4,*((C_word*)lf[114]+1),((C_word*)t0)[2],lf[180],t1);}

/* k5139 in k5135 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f_5141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:101: make-pathname */
t2=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k5143 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f_5145(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5145,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5984,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t4=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}

/* k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in ... */
static void C_ccall f_1495(C_word c,C_word t0,C_word t1){
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
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1495,2,t0,t1);}
t2=C_mutate2(&lf[32] /* (set! c++-linker ...) */,t1);
t3=C_mutate2(&lf[33] /* (set! object-extension ...) */,lf[34]);
t4=C_mutate2(&lf[35] /* (set! library-extension ...) */,lf[36]);
t5=C_mutate2(&lf[37] /* (set! executable-extension ...) */,lf[38]);
t6=C_mutate2(&lf[39] /* (set! shared-library-extension ...) */,C_fast_retrieve(lf[40]));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1507,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=C_retrieve2(lf[1],"mingw");
if(C_truep(C_retrieve2(lf[1],"mingw"))){
t9=C_retrieve2(lf[1],"mingw");
t10=t7;
f_1507(t10,(C_truep(C_retrieve2(lf[1],"mingw"))?lf[424]:lf[425]));}
else{
t9=C_retrieve2(lf[5],"cygwin");
t10=t7;
f_1507(t10,(C_truep(C_retrieve2(lf[5],"cygwin"))?lf[424]:lf[425]));}}

/* k5147 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f_5149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5149,2,t0,t1);}
if(C_truep(C_retrieve2(lf[18],"chicken-prefix"))){
t2=C_a_i_list2(&a,2,C_retrieve2(lf[18],"chicken-prefix"),lf[428]);
/* csc.scm:88: make-pathname */
t3=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t2,lf[429]);}
else{
t2=((C_word*)t0)[3];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6345,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t4=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}}

/* k4190 in k4186 in k4182 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in ... */
static void C_ccall f_4192(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4192,2,t0,t1);}
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t1);
/* csc.scm:931: append */
t3=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[4],((C_word*)t0)[5],t2);}

/* k4334 in map-loop652 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in ... */
static void C_ccall f_4336(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4336,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4307(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4307(t6,((C_word*)t0)[5],t5);}}

/* k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in ... */
static void C_ccall f_1491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1491,2,t0,t1);}
t2=C_mutate2(&lf[31] /* (set! linker ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1495,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5079,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t5=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_INSTALL_CXX),C_fix(0));}
else{
/* ##sys#peek-c-string */
t5=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_TARGET_CXX),C_fix(0));}}

/* k4875 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in ... */
static void C_ccall f_4877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
/* csc.scm:1133: string-split */
t3=C_fast_retrieve(lf[229]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}
else{
/* csc.scm:1133: string-split */
t2=C_fast_retrieve(lf[229]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[404]);}}

/* k2449 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_2451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:658: make-pathname */
t2=C_fast_retrieve(lf[104]);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,lf[308],C_retrieve2(lf[33],"object-extension"));}

/* k4871 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in ... */
static void C_ccall f_4873(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:1132: append */
t2=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_retrieve2(lf[19],"arguments"));}

/* k5131 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f_5133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5133,2,t0,t1);}
if(C_truep(C_retrieve2(lf[18],"chicken-prefix"))){
t2=C_a_i_list2(&a,2,C_retrieve2(lf[18],"chicken-prefix"),lf[426]);
/* csc.scm:88: make-pathname */
t3=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t2,lf[427]);}
else{
t2=((C_word*)t0)[3];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6340,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t4=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}}

/* k5135 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f_5137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5137,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5141,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_CHICKEN_PROGRAM),C_fix(0));}

/* k2445 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_2447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2447,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_retrieve2(lf[57],"object-files"));
t3=C_mutate2(&lf[57] /* (set! object-files ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2443,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:663: cons* */
t5=C_fast_retrieve(lf[126]);
((C_proc7)(void*)(*((C_word*)t5+1)))(7,t5,t4,lf[304],lf[305],lf[306],lf[307],C_retrieve2(lf[86],"link-options"));}

/* k1465 in quotewrap in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f_1467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in ... */
static void C_ccall f_4022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4022,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4025,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=t3;
t5=C_retrieve2(lf[87],"target-filename");
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5874,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t7=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,C_retrieve2(lf[87],"target-filename"));}

/* lib-path in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in ... */
static void C_fcall f_4342(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4342,NULL,1,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4350,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_INSTALL_LIB_HOME),C_fix(0));}
else{
/* ##sys#peek-c-string */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_TARGET_RUN_LIB_HOME),C_fix(0));}}

/* k4882 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in ... */
static void C_ccall f_4884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4884,2,t0,t1);}
if(C_truep(C_retrieve2(lf[18],"chicken-prefix"))){
t2=C_a_i_list2(&a,2,C_retrieve2(lf[18],"chicken-prefix"),lf[406]);
/* csc.scm:88: make-pathname */
t3=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t2,lf[407]);}
else{
t2=((C_word*)t0)[2];
f_1600(2,t2,t1);}}

/* k4174 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in ... */
static void C_ccall f_4176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:929: cons* */
t2=C_fast_retrieve(lf[126]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f_1475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1475,2,t0,t1);}
t2=C_mutate2(&lf[27] /* (set! translator ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1479,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5119,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t5=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_INSTALL_CC),C_fix(0));}
else{
/* ##sys#peek-c-string */
t5=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_TARGET_CC),C_fix(0));}}

/* k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f_1479(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1479,2,t0,t1);}
t2=C_mutate2(&lf[28] /* (set! compiler ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1483,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5109,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t5=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_INSTALL_CXX),C_fix(0));}
else{
/* ##sys#peek-c-string */
t5=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_TARGET_CXX),C_fix(0));}}

/* k4857 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in ... */
static void C_ccall f_4859(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4859,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4862,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4865,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
((C_proc2)C_fast_retrieve_symbol_proc(lf[141]))(2,*((C_word*)lf[141]+1),t3);}

/* k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f_1471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1471,2,t0,t1);}
t2=C_mutate2(&lf[26] /* (set! home ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1475,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5129,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5133,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5137,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t7=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,C_mpointer(&a,(void*)C_INSTALL_BIN_HOME),C_fix(0));}

/* k2473 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_2475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2475,2,t0,t1);}
if(C_truep(C_retrieve2(lf[3],"osx"))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2486,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:673: cons* */
t4=C_fast_retrieve(lf[126]);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[312],t3,C_retrieve2(lf[86],"link-options"));}
else{
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
/* csc.scm:809: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1858(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}}

/* k4186 in k4182 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in ... */
static void C_ccall f_4188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4188,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4192,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:935: linker-libraries */
f_4496(t3);}

/* k4182 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in ... */
static void C_ccall f_4184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4184,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4188,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:934: linker-options */
f_4466(t3);}

/* k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in ... */
static void C_ccall f_4025(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4025,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4028,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[68],"deploy"))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4201,a[2]=t5,a[3]=t3,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:911: pathname-strip-extension */
t8=C_fast_retrieve(lf[190]);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,C_retrieve2(lf[87],"target-filename"));}
else{
t7=t6;
f_4028(2,t7,C_SCHEME_UNDEFINED);}}

/* k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in ... */
static void C_ccall f_4028(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4028,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4031,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4164,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4168,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(C_truep(C_retrieve2(lf[59],"cpp-mode"))?C_retrieve2(lf[32],"c++-linker"):C_retrieve2(lf[31],"linker"));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4176,a[2]=t4,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4184,a[2]=t7,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4197,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
t10=t9;
t11=C_retrieve2(lf[87],"target-filename");
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5854,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t13=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t13+1)))(3,t13,t12,C_retrieve2(lf[87],"target-filename"));}

/* k4000 in map-loop621 in k3963 in compiler-options in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_4002(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4002,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3973(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3973(t6,((C_word*)t0)[5],t5);}}

/* k2898 in k2891 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in ... */
static void C_ccall f_2900(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(&lf[87] /* (set! target-filename ...) */,t1);
/* csc.scm:809: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1858(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in ... */
static void C_fcall f_2903(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2903,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2906,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep((C_truep(C_eqp(((C_word*)t0)[2],lf[398]))?C_SCHEME_TRUE:(C_truep(C_eqp(((C_word*)t0)[2],lf[399]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t3=C_mutate2(&lf[83] /* (set! compilation-optimization-options ...) */,C_retrieve2(lf[48],"best-compilation-optimization-options"));
t4=C_mutate2(&lf[84] /* (set! linking-optimization-options ...) */,C_retrieve2(lf[50],"best-linking-optimization-options"));
t5=t2;
f_2906(t5,t4);}
else{
t3=t2;
f_2906(t3,C_SCHEME_UNDEFINED);}}

/* k2904 in k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in ... */
static void C_fcall f_2906(C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2906,NULL,2,t0,t1);}
t2=C_i_assq(((C_word*)t0)[2],lf[370]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2913,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=f_2913(C_a_i(&a,3),t3,t2);
/* csc.scm:809: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_1858(t5,((C_word*)t0)[5],((C_word*)((C_word*)t0)[3])[1]);}
else{
if(C_truep(C_i_memq(((C_word*)t0)[2],lf[371]))){
/* csc.scm:754: t-options */
f_1785(((C_word*)t0)[7],C_a_i_list(&a,1,((C_word*)t0)[8]));}
else{
if(C_truep(C_i_memq(((C_word*)t0)[2],lf[372]))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2943,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* csc.scm:756: check */
f_1792(t3,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2962,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
t4=C_block_size(((C_word*)t0)[8]);
if(C_truep(C_fixnum_greaterp(t4,C_fix(2)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3341,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:761: substring */
t6=*((C_word*)lf[374]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,((C_word*)t0)[8],C_fix(0),C_fix(2));}
else{
t5=t3;
f_2962(t5,C_SCHEME_FALSE);}}}}}

/* quotewrap in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f_1459(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1459,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1467,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t4=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in ... */
static void C_fcall f_1507(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1507,NULL,2,t0,t1);}
t2=C_mutate2(&lf[41] /* (set! pic-options ...) */,t1);
t3=C_mutate2(&lf[42] /* (set! windows-shell ...) */,C_mk_bool(C_WINDOWS_SHELL));
t4=lf[43] /* generate-manifest */ =C_SCHEME_FALSE;;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1513,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5072,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t7=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,C_mpointer(&a,(void*)C_INSTALL_LIB_NAME),C_fix(0));}

/* g394 in k2904 in k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in ... */
static C_word C_fcall f_2913(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
t2=C_i_cadr(t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t3);
return(t4);}

/* k3037 in k2969 in k2960 in k2904 in k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in ... */
static void C_ccall f_3039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(&lf[80] /* (set! compile-options ...) */,t1);
/* csc.scm:809: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1858(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k1426 in stop in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f_1428(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:77: ##sys#print */
t2=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k2484 in k2473 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in ... */
static void C_ccall f_2486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate2(&lf[86] /* (set! link-options ...) */,t1);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t3);
/* csc.scm:809: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1858(t5,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in ... */
static void C_ccall f_1517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1517,2,t0,t1);}
t2=C_mutate2(&lf[45] /* (set! dynamic-libchicken ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1521,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:129: string-append */
t4=*((C_word*)lf[120]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,C_retrieve2(lf[44],"libchicken"),lf[420],C_retrieve2(lf[35],"library-extension"));}

/* k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in ... */
static void C_ccall f_1513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1513,2,t0,t1);}
t2=C_mutate2(&lf[44] /* (set! libchicken ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1517,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[5],"cygwin"))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5068,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_INSTALL_LIB_NAME),C_fix(0));}
else{
t4=t3;
f_1517(2,t4,C_retrieve2(lf[44],"libchicken"));}}

/* k1419 in k1416 in k1413 in k1410 in stop in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f_1421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:79: exit */
t2=C_fast_retrieve(lf[13]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(64));}

/* k1727 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_1729(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1729,2,t0,t1);}
t2=((C_word*)t0)[2];
f_1611(t2,C_a_i_list1(&a,1,t1));}

/* k1720 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_1722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1722,2,t0,t1);}
t2=((C_word*)t0)[2];
f_1611(t2,C_a_i_list1(&a,1,t1));}

/* k3047 in k2969 in k2960 in k2904 in k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in ... */
static void C_fcall f_3049(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3049,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3053,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[5]);
/* csc.scm:777: append */
t4=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,C_retrieve2(lf[86],"link-options"),t3);}
else{
t2=C_block_size(((C_word*)t0)[5]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(2)))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3139,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* string->list */
t4=C_fast_retrieve(lf[127]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}
else{
/* csc.scm:784: stop */
f_1405(((C_word*)t0)[6],lf[380],C_a_i_list(&a,1,((C_word*)t0)[7]));}}}

/* k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f_1436(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1436,2,t0,t1);}
t2=C_mutate2(&lf[19] /* (set! arguments ...) */,t1);
t3=C_i_member(lf[20],C_retrieve2(lf[19],"arguments"));
t4=C_mutate2(&lf[21] /* (set! host-mode ...) */,t3);
t5=C_fudge(C_fix(39));
t6=C_mutate2(&lf[22] /* (set! cross-chicken ...) */,t5);
t7=C_mutate2(&lf[23] /* (set! quotewrap ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1459,tmp=(C_word)a,a+=2,tmp));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1471,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5145,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5149,a[2]=t9,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t11=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t10,C_mpointer(&a,(void*)C_INSTALL_SHARE_HOME),C_fix(0));}
else{
/* ##sys#peek-c-string */
t11=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t10,C_mpointer(&a,(void*)C_TARGET_SHARE_HOME),C_fix(0));}}

/* k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f_1432(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1432,2,t0,t1);}
t2=C_mutate2(&lf[18] /* (set! chicken-prefix ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1436,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:82: command-line-arguments */
t4=C_fast_retrieve(lf[430]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in ... */
static void C_ccall f_4031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4031,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4034,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4108,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[3],"osx"))){
t4=C_i_not(C_retrieve2(lf[22],"cross-chicken"));
if(C_truep(t4)){
t5=t3;
f_4108(t5,t4);}
else{
t5=C_retrieve2(lf[21],"host-mode");
t6=t3;
f_4108(t6,C_retrieve2(lf[21],"host-mode"));}}
else{
t4=t3;
f_4108(t4,C_SCHEME_FALSE);}}

/* k1485 in k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 in ... */
static void C_ccall f_1487(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1487,2,t0,t1);}
t2=C_mutate2(&lf[30] /* (set! rc-compiler ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1491,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5089,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t5=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_INSTALL_CC),C_fix(0));}
else{
/* ##sys#peek-c-string */
t5=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_TARGET_CC),C_fix(0));}}

/* k3154 in k2969 in k2960 in k2904 in k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in ... */
static void C_ccall f_3156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_3049(t2,C_u_i_string_equal_p(lf[381],t1));}

/* k1743 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in k1481 in ... */
static void C_ccall f_1745(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1745,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1752,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_cons(&a,2,lf[251],C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,t1,t3);
t5=C_a_i_cons(&a,2,lf[252],t4);
t6=C_a_i_cons(&a,2,t1,t5);
t7=C_a_i_cons(&a,2,lf[253],t6);
t8=C_a_i_cons(&a,2,t1,t7);
t9=C_a_i_cons(&a,2,lf[254],t8);
/* csc.scm:301: ##sys#print-to-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[154]))(3,*((C_word*)lf[154]+1),t2,t9);}

/* k1481 in k1477 in k1473 in k1469 in k1434 in k1430 in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f_1483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1483,2,t0,t1);}
t2=C_mutate2(&lf[29] /* (set! c++-compiler ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1487,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5099,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t5=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_INSTALL_RC_COMPILER),C_fix(0));}
else{
/* ##sys#peek-c-string */
t5=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_TARGET_RC_COMPILER),C_fix(0));}}

/* k3051 in k3047 in k2969 in k2960 in k2904 in k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in ... */
static void C_ccall f_3053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(&lf[86] /* (set! link-options ...) */,t1);
/* csc.scm:809: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1858(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k3024 in k2969 in k2960 in k2904 in k2901 in k2618 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in ... */
static void C_ccall f_3026(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3026,2,t0,t1);}
/* csc.scm:772: t-options */
f_1785(((C_word*)t0)[3],C_a_i_list(&a,2,lf[373],t1));}

/* k1416 in k1413 in k1410 in stop in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f_1418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1418,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1421,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:77: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[14]))(4,*((C_word*)lf[14]+1),t2,C_make_character(10),((C_word*)t0)[3]);}

/* k4032 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in ... */
static void C_ccall f_4034(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4034,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4037,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4072,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[68],"deploy"))){
t4=C_retrieve2(lf[94],"static");
if(C_truep(C_retrieve2(lf[94],"static"))){
t5=C_retrieve2(lf[94],"static");
t6=C_retrieve2(lf[94],"static");
t7=t3;
f_4072(t7,C_i_not(C_retrieve2(lf[94],"static")));}
else{
t5=C_retrieve2(lf[95],"static-libs");
t6=C_retrieve2(lf[95],"static-libs");
t7=t3;
f_4072(t7,C_i_not(C_retrieve2(lf[95],"static-libs")));}}
else{
t4=t3;
f_4072(t4,C_SCHEME_FALSE);}}

/* k1413 in k1410 in stop in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f_1415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1415,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1418,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_apply(6,0,t2,*((C_word*)lf[12]+1),((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k4035 in k4032 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in ... */
static void C_ccall f_4037(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4037,2,t0,t1);}
if(C_truep(C_retrieve2(lf[89],"keep-files"))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_retrieve2(lf[138],"$delete-file");
t3=C_retrieve2(lf[58],"generated-object-files");
t4=C_i_check_list_2(C_retrieve2(lf[58],"generated-object-files"),lf[151]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4048,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_4048(t8,((C_word*)t0)[2],C_retrieve2(lf[58],"generated-object-files"));}}

/* k1410 in stop in k1400 in k5157 in k5161 in k5165 in k5169 in k1379 in k1376 in k1373 in k1370 in k1367 in k1364 in k1361 in k1358 in k1355 in k1352 */
static void C_ccall f_1412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1412,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1415,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:77: ##sys#print */
t3=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[16],C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k1750 in k1743 in k2097 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in k1563 in k1533 in k1528 in k1523 in k1519 in k1515 in k1511 in k1505 in k1493 in k1489 in k1485 in ... */
static void C_ccall f_1752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:303: print */
t2=*((C_word*)lf[137]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* for-each-loop730 in k4035 in k4032 in k4029 in k4026 in k4023 in k4020 in k1892 in k1886 in k1880 in k1877 in k1874 in k1871 in k1867 in loop in k4867 in k1598 in k1590 in k1582 in k4982 in k4996 in k1567 in ... */
static void C_fcall f_4048(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4048,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4058,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:960: g731 */
t5=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[454] = {
{"f_2217:csc_2escm",(void*)f_2217},
{"f_3194:csc_2escm",(void*)f_3194},
{"f_3093:csc_2escm",(void*)f_3093},
{"f_3095:csc_2escm",(void*)f_3095},
{"f_2279:csc_2escm",(void*)f_2279},
{"f_2276:csc_2escm",(void*)f_2276},
{"f_2229:csc_2escm",(void*)f_2229},
{"f_4152:csc_2escm",(void*)f_4152},
{"f_4168:csc_2escm",(void*)f_4168},
{"f_4164:csc_2escm",(void*)f_4164},
{"f_2291:csc_2escm",(void*)f_2291},
{"f_4208:csc_2escm",(void*)f_4208},
{"f_4204:csc_2escm",(void*)f_4204},
{"f_3944:csc_2escm",(void*)f_3944},
{"f_2241:csc_2escm",(void*)f_2241},
{"f_4201:csc_2escm",(void*)f_4201},
{"f_3957:csc_2escm",(void*)f_3957},
{"f_3965:csc_2escm",(void*)f_3965},
{"f_4531:csc_2escm",(void*)f_4531},
{"f_2772:csc_2escm",(void*)f_2772},
{"f_2776:csc_2escm",(void*)f_2776},
{"f_3188:csc_2escm",(void*)f_3188},
{"f_3183:csc_2escm",(void*)f_3183},
{"f_5099:csc_2escm",(void*)f_5099},
{"f_2716:csc_2escm",(void*)f_2716},
{"f_2712:csc_2escm",(void*)f_2712},
{"f_3246:csc_2escm",(void*)f_3246},
{"f_4423:csc_2escm",(void*)f_4423},
{"f_5089:csc_2escm",(void*)f_5089},
{"f_4421:csc_2escm",(void*)f_4421},
{"f_4579:csc_2escm",(void*)f_4579},
{"f_5072:csc_2escm",(void*)f_5072},
{"f_4574:csc_2escm",(void*)f_4574},
{"f_5079:csc_2escm",(void*)f_5079},
{"f_5068:csc_2escm",(void*)f_5068},
{"f_4504:csc_2escm",(void*)f_4504},
{"f_4431:csc_2escm",(void*)f_4431},
{"f_4437:csc_2escm",(void*)f_4437},
{"f_3076:csc_2escm",(void*)f_3076},
{"f_4508:csc_2escm",(void*)f_4508},
{"f_2745:csc_2escm",(void*)f_2745},
{"f_2102:csc_2escm",(void*)f_2102},
{"f_4403:csc_2escm",(void*)f_4403},
{"f_4407:csc_2escm",(void*)f_4407},
{"f_4551:csc_2escm",(void*)f_4551},
{"f_3233:csc_2escm",(void*)f_3233},
{"f_4350:csc_2escm",(void*)f_4350},
{"f_2759:csc_2escm",(void*)f_2759},
{"f_3205:csc_2escm",(void*)f_3205},
{"f_2943:csc_2escm",(void*)f_2943},
{"f_4368:csc_2escm",(void*)f_4368},
{"f_4362:csc_2escm",(void*)f_4362},
{"f_4466:csc_2escm",(void*)f_4466},
{"f_4460:csc_2escm",(void*)f_4460},
{"f5844:csc_2escm",(void*)f5844},
{"f5849:csc_2escm",(void*)f5849},
{"f_2952:csc_2escm",(void*)f_2952},
{"f_3219:csc_2escm",(void*)f_3219},
{"f_2253:csc_2escm",(void*)f_2253},
{"f_4549:csc_2escm",(void*)f_4549},
{"f_4541:csc_2escm",(void*)f_4541},
{"f_4474:csc_2escm",(void*)f_4474},
{"f_4545:csc_2escm",(void*)f_4545},
{"f5839:csc_2escm",(void*)f5839},
{"f_2962:csc_2escm",(void*)f_2962},
{"f_4449:csc_2escm",(void*)f_4449},
{"f_4446:csc_2escm",(void*)f_4446},
{"f_4440:csc_2escm",(void*)f_4440},
{"f_4594:csc_2escm",(void*)f_4594},
{"f_4443:csc_2escm",(void*)f_4443},
{"f_4396:csc_2escm",(void*)f_4396},
{"f5822:csc_2escm",(void*)f5822},
{"f_4075:csc_2escm",(void*)f_4075},
{"f_4072:csc_2escm",(void*)f_4072},
{"f_3893:csc_2escm",(void*)f_3893},
{"f_4456:csc_2escm",(void*)f_4456},
{"f5817:csc_2escm",(void*)f5817},
{"f_4452:csc_2escm",(void*)f_4452},
{"f_1706:csc_2escm",(void*)f_1706},
{"f_4088:csc_2escm",(void*)f_4088},
{"f_2733:csc_2escm",(void*)f_2733},
{"f_2737:csc_2escm",(void*)f_2737},
{"f_4058:csc_2escm",(void*)f_4058},
{"f_4586:csc_2escm",(void*)f_4586},
{"f_3883:csc_2escm",(void*)f_3883},
{"f_5055:csc_2escm",(void*)f_5055},
{"f_4481:csc_2escm",(void*)f_4481},
{"f5864:csc_2escm",(void*)f5864},
{"f_3881:csc_2escm",(void*)f_3881},
{"f5869:csc_2escm",(void*)f5869},
{"f_4496:csc_2escm",(void*)f_4496},
{"f_3794:csc_2escm",(void*)f_3794},
{"f_4494:csc_2escm",(void*)f_4494},
{"f5854:csc_2escm",(void*)f5854},
{"f5859:csc_2escm",(void*)f5859},
{"f_3270:csc_2escm",(void*)f_3270},
{"f_4959:csc_2escm",(void*)f_4959},
{"f_3932:csc_2escm",(void*)f_3932},
{"f_4092:csc_2escm",(void*)f_4092},
{"f_3934:csc_2escm",(void*)f_3934},
{"f_3251:csc_2escm",(void*)f_3251},
{"f5928:csc_2escm",(void*)f5928},
{"f5923:csc_2escm",(void*)f5923},
{"f_3782:csc_2escm",(void*)f_3782},
{"f_2061:csc_2escm",(void*)f_2061},
{"f_2064:csc_2escm",(void*)f_2064},
{"f_3812:csc_2escm",(void*)f_3812},
{"f_3816:csc_2escm",(void*)f_3816},
{"f_1785:csc_2escm",(void*)f_1785},
{"f5896:csc_2escm",(void*)f5896},
{"f5891:csc_2escm",(void*)f5891},
{"f5949:csc_2escm",(void*)f5949},
{"f_4945:csc_2escm",(void*)f_4945},
{"f_3825:csc_2escm",(void*)f_3825},
{"f_2055:csc_2escm",(void*)f_2055},
{"f_2058:csc_2escm",(void*)f_2058},
{"f_1792:csc_2escm",(void*)f_1792},
{"f5934:csc_2escm",(void*)f5934},
{"f_2018:csc_2escm",(void*)f_2018},
{"f_1790:csc_2escm",(void*)f_1790},
{"f_4998:csc_2escm",(void*)f_4998},
{"f_3973:csc_2escm",(void*)f_3973},
{"f_3971:csc_2escm",(void*)f_3971},
{"f_2021:csc_2escm",(void*)f_2021},
{"f5964:csc_2escm",(void*)f5964},
{"f_2028:csc_2escm",(void*)f_2028},
{"f5969:csc_2escm",(void*)f5969},
{"f_3907:csc_2escm",(void*)f_3907},
{"f_3802:csc_2escm",(void*)f_3802},
{"f_3806:csc_2escm",(void*)f_3806},
{"f5954:csc_2escm",(void*)f5954},
{"f5959:csc_2escm",(void*)f5959},
{"f_4970:csc_2escm",(void*)f_4970},
{"f_4974:csc_2escm",(void*)f_4974},
{"f_4736:csc_2escm",(void*)f_4736},
{"f_4733:csc_2escm",(void*)f_4733},
{"f_3913:csc_2escm",(void*)f_3913},
{"f_3910:csc_2escm",(void*)f_3910},
{"f_4730:csc_2escm",(void*)f_4730},
{"f_4739:csc_2escm",(void*)f_4739},
{"f_2533:csc_2escm",(void*)f_2533},
{"f_4988:csc_2escm",(void*)f_4988},
{"f_4984:csc_2escm",(void*)f_4984},
{"f_2092:csc_2escm",(void*)f_2092},
{"f_4705:csc_2escm",(void*)f_4705},
{"f_4701:csc_2escm",(void*)f_4701},
{"f_3925:csc_2escm",(void*)f_3925},
{"f_2099:csc_2escm",(void*)f_2099},
{"f_2502:csc_2escm",(void*)f_2502},
{"f_2553:csc_2escm",(void*)f_2553},
{"f_2784:csc_2escm",(void*)f_2784},
{"f_4231:csc_2escm",(void*)f_4231},
{"f_2523:csc_2escm",(void*)f_2523},
{"f_2391:csc_2escm",(void*)f_2391},
{"f_1366:csc_2escm",(void*)f_1366},
{"f_1369:csc_2escm",(void*)f_1369},
{"f_2797:csc_2escm",(void*)f_2797},
{"f_4778:csc_2escm",(void*)f_4778},
{"f_1360:csc_2escm",(void*)f_1360},
{"f_1363:csc_2escm",(void*)f_1363},
{"f_4775:csc_2escm",(void*)f_4775},
{"f_4772:csc_2escm",(void*)f_4772},
{"f_4241:csc_2escm",(void*)f_4241},
{"f_2573:csc_2escm",(void*)f_2573},
{"f_2384:csc_2escm",(void*)f_2384},
{"f_4218:csc_2escm",(void*)f_4218},
{"f_4746:csc_2escm",(void*)f_4746},
{"f_3286:csc_2escm",(void*)f_3286},
{"f_4742:csc_2escm",(void*)f_4742},
{"f_4212:csc_2escm",(void*)f_4212},
{"f_3282:csc_2escm",(void*)f_3282},
{"f_2543:csc_2escm",(void*)f_2543},
{"f5886:csc_2escm",(void*)f5886},
{"f5881:csc_2escm",(void*)f5881},
{"f_3139:csc_2escm",(void*)f_3139},
{"f_2081:csc_2escm",(void*)f_2081},
{"f_2388:csc_2escm",(void*)f_2388},
{"f_1381:csc_2escm",(void*)f_1381},
{"f_4750:csc_2escm",(void*)f_4750},
{"f_3294:csc_2escm",(void*)f_3294},
{"f_4221:csc_2escm",(void*)f_4221},
{"f_4754:csc_2escm",(void*)f_4754},
{"f_2593:csc_2escm",(void*)f_2593},
{"f_2088:csc_2escm",(void*)f_2088},
{"f5874:csc_2escm",(void*)f5874},
{"f_1354:csc_2escm",(void*)f_1354},
{"f_1357:csc_2escm",(void*)f_1357},
{"f_2074:csc_2escm",(void*)f_2074},
{"f_4724:csc_2escm",(void*)f_4724},
{"f_2563:csc_2escm",(void*)f_2563},
{"f_1405:csc_2escm",(void*)f_1405},
{"f_1402:csc_2escm",(void*)f_1402},
{"f_1841:csc_2escm",(void*)f_1841},
{"f5906:csc_2escm",(void*)f5906},
{"f_1858:csc_2escm",(void*)f_1858},
{"f_1375:csc_2escm",(void*)f_1375},
{"f_1378:csc_2escm",(void*)f_1378},
{"f_4898:csc_2escm",(void*)f_4898},
{"f5901:csc_2escm",(void*)f5901},
{"f_4789:csc_2escm",(void*)f_4789},
{"f_4894:csc_2escm",(void*)f_4894},
{"f_1372:csc_2escm",(void*)f_1372},
{"f_4781:csc_2escm",(void*)f_4781},
{"f_4784:csc_2escm",(void*)f_4784},
{"f_1827:csc_2escm",(void*)f_1827},
{"f_4822:csc_2escm",(void*)f_4822},
{"f_4828:csc_2escm",(void*)f_4828},
{"f_1823:csc_2escm",(void*)f_1823},
{"f_4797:csc_2escm",(void*)f_4797},
{"f_4769:csc_2escm",(void*)f_4769},
{"f_3677:csc_2escm",(void*)f_3677},
{"f_4766:csc_2escm",(void*)f_4766},
{"f_4760:csc_2escm",(void*)f_4760},
{"f_4763:csc_2escm",(void*)f_4763},
{"f_2133:csc_2escm",(void*)f_2133},
{"f_3124:csc_2escm",(void*)f_3124},
{"f_3648:csc_2escm",(void*)f_3648},
{"f_2142:csc_2escm",(void*)f_2142},
{"f_3135:csc_2escm",(void*)f_3135},
{"f_2149:csc_2escm",(void*)f_2149},
{"f_3712:csc_2escm",(void*)f_3712},
{"f_3627:csc_2escm",(void*)f_3627},
{"f_3736:csc_2escm",(void*)f_3736},
{"f_3702:csc_2escm",(void*)f_3702},
{"f_3709:csc_2escm",(void*)f_3709},
{"f_3706:csc_2escm",(void*)f_3706},
{"f_3856:csc_2escm",(void*)f_3856},
{"f5984:csc_2escm",(void*)f5984},
{"f_4815:csc_2escm",(void*)f_4815},
{"f_3759:csc_2escm",(void*)f_3759},
{"f_3866:csc_2escm",(void*)f_3866},
{"f_2114:csc_2escm",(void*)f_2114},
{"f5979:csc_2escm",(void*)f5979},
{"f5974:csc_2escm",(void*)f5974},
{"f_3833:csc_2escm",(void*)f_3833},
{"f_2191:csc_2escm",(void*)f_2191},
{"f_2126:csc_2escm",(void*)f_2126},
{"f_3775:csc_2escm",(void*)f_3775},
{"f_3774:csc_2escm",(void*)f_3774},
{"f_3779:csc_2escm",(void*)f_3779},
{"f_4612:csc_2escm",(void*)f_4612},
{"f_3771:csc_2escm",(void*)f_3771},
{"f_3843:csc_2escm",(void*)f_3843},
{"f_5010:csc_2escm",(void*)f_5010},
{"f_5014:csc_2escm",(void*)f_5014},
{"f_3744:csc_2escm",(void*)f_3744},
{"f_3748:csc_2escm",(void*)f_3748},
{"f_4624:csc_2escm",(void*)f_4624},
{"f_3740:csc_2escm",(void*)f_3740},
{"f_2893:csc_2escm",(void*)f_2893},
{"f_5006:csc_2escm",(void*)f_5006},
{"f_5002:csc_2escm",(void*)f_5002},
{"f_4601:csc_2escm",(void*)f_4601},
{"f_4607:csc_2escm",(void*)f_4607},
{"f_5171:csc_2escm",(void*)f_5171},
{"f_4667:csc_2escm",(void*)f_4667},
{"f_4661:csc_2escm",(void*)f_4661},
{"f_4664:csc_2escm",(void*)f_4664},
{"f_5041:csc_2escm",(void*)f_5041},
{"f_5045:csc_2escm",(void*)f_5045},
{"f_4251:csc_2escm",(void*)f_4251},
{"f_4254:csc_2escm",(void*)f_4254},
{"f_4635:csc_2escm",(void*)f_4635},
{"f_4638:csc_2escm",(void*)f_4638},
{"f_2583:csc_2escm",(void*)f_2583},
{"toplevel:csc_2escm",(void*)C_toplevel},
{"f_1535:csc_2escm",(void*)f_1535},
{"f_4267:csc_2escm",(void*)f_4267},
{"f_4261:csc_2escm",(void*)f_4261},
{"f_1530:csc_2escm",(void*)f_1530},
{"f_3724:csc_2escm",(void*)f_3724},
{"f_4641:csc_2escm",(void*)f_4641},
{"f_4644:csc_2escm",(void*)f_4644},
{"f_2872:csc_2escm",(void*)f_2872},
{"f_2875:csc_2escm",(void*)f_2875},
{"f_4699:csc_2escm",(void*)f_4699},
{"f_2180:csc_2escm",(void*)f_2180},
{"f_2811:csc_2escm",(void*)f_2811},
{"f_2815:csc_2escm",(void*)f_2815},
{"f_3309:csc_2escm",(void*)f_3309},
{"f_1818:csc_2escm",(void*)f_1818},
{"f_4297:csc_2escm",(void*)f_4297},
{"f_4291:csc_2escm",(void*)f_4291},
{"f_4294:csc_2escm",(void*)f_4294},
{"f_4670:csc_2escm",(void*)f_4670},
{"f_3303:csc_2escm",(void*)f_3303},
{"f_2823:csc_2escm",(void*)f_2823},
{"f_2827:csc_2escm",(void*)f_2827},
{"f_4685:csc_2escm",(void*)f_4685},
{"f_1584:csc_2escm",(void*)f_1584},
{"f_1622:csc_2escm",(void*)f_1622},
{"f_1632:csc_2escm",(void*)f_1632},
{"f_1592:csc_2escm",(void*)f_1592},
{"f_5167:csc_2escm",(void*)f_5167},
{"f_1525:csc_2escm",(void*)f_1525},
{"f_5163:csc_2escm",(void*)f_5163},
{"f_1521:csc_2escm",(void*)f_1521},
{"f_3341:csc_2escm",(void*)f_3341},
{"f_1637:csc_2escm",(void*)f_1637},
{"f_5159:csc_2escm",(void*)f_5159},
{"f_1906:csc_2escm",(void*)f_1906},
{"f_1909:csc_2escm",(void*)f_1909},
{"f_1915:csc_2escm",(void*)f_1915},
{"f_1918:csc_2escm",(void*)f_1918},
{"f_1912:csc_2escm",(void*)f_1912},
{"f_1888:csc_2escm",(void*)f_1888},
{"f_1928:csc_2escm",(void*)f_1928},
{"f_1882:csc_2escm",(void*)f_1882},
{"f_1921:csc_2escm",(void*)f_1921},
{"f_1569:csc_2escm",(void*)f_1569},
{"f_1565:csc_2escm",(void*)f_1565},
{"f_1894:csc_2escm",(void*)f_1894},
{"f_1869:csc_2escm",(void*)f_1869},
{"f_3543:csc_2escm",(void*)f_3543},
{"f_3546:csc_2escm",(void*)f_3546},
{"f_4307:csc_2escm",(void*)f_4307},
{"f_3540:csc_2escm",(void*)f_3540},
{"f_4305:csc_2escm",(void*)f_4305},
{"f_4301:csc_2escm",(void*)f_4301},
{"f_1879:csc_2escm",(void*)f_1879},
{"f_1873:csc_2escm",(void*)f_1873},
{"f_1876:csc_2escm",(void*)f_1876},
{"f_3554:csc_2escm",(void*)f_3554},
{"f_4277:csc_2escm",(void*)f_4277},
{"f_4273:csc_2escm",(void*)f_4273},
{"f_4270:csc_2escm",(void*)f_4270},
{"f_3550:csc_2escm",(void*)f_3550},
{"f_3566:csc_2escm",(void*)f_3566},
{"f_4285:csc_2escm",(void*)f_4285},
{"f_4281:csc_2escm",(void*)f_4281},
{"f_3687:csc_2escm",(void*)f_3687},
{"f_3574:csc_2escm",(void*)f_3574},
{"f_3578:csc_2escm",(void*)f_3578},
{"f_3570:csc_2escm",(void*)f_3570},
{"f_3582:csc_2escm",(void*)f_3582},
{"f_3596:csc_2escm",(void*)f_3596},
{"f_3598:csc_2escm",(void*)f_3598},
{"f_3590:csc_2escm",(void*)f_3590},
{"f_4111:csc_2escm",(void*)f_4111},
{"f_2661:csc_2escm",(void*)f_2661},
{"f_4127:csc_2escm",(void*)f_4127},
{"f_2603:csc_2escm",(void*)f_2603},
{"f_4108:csc_2escm",(void*)f_4108},
{"f_4911:csc_2escm",(void*)f_4911},
{"f_4916:csc_2escm",(void*)f_4916},
{"f_2678:csc_2escm",(void*)f_2678},
{"f_2852:csc_2escm",(void*)f_2852},
{"f_4135:csc_2escm",(void*)f_4135},
{"f_4139:csc_2escm",(void*)f_4139},
{"f_4131:csc_2escm",(void*)f_4131},
{"f_2644:csc_2escm",(void*)f_2644},
{"f_2855:csc_2escm",(void*)f_2855},
{"f_4142:csc_2escm",(void*)f_4142},
{"f_4901:csc_2escm",(void*)f_4901},
{"f_1619:csc_2escm",(void*)f_1619},
{"f_1615:csc_2escm",(void*)f_1615},
{"f_1611:csc_2escm",(void*)f_1611},
{"f_1937:csc_2escm",(void*)f_1937},
{"f_1934:csc_2escm",(void*)f_1934},
{"f_1949:csc_2escm",(void*)f_1949},
{"f_1946:csc_2escm",(void*)f_1946},
{"f_1943:csc_2escm",(void*)f_1943},
{"f_1940:csc_2escm",(void*)f_1940},
{"f_1957:csc_2escm",(void*)f_1957},
{"f_1953:csc_2escm",(void*)f_1953},
{"f_2620:csc_2escm",(void*)f_2620},
{"f_1961:csc_2escm",(void*)f_1961},
{"f_1600:csc_2escm",(void*)f_1600},
{"f_1691:csc_2escm",(void*)f_1691},
{"f_1983:csc_2escm",(void*)f_1983},
{"f_1980:csc_2escm",(void*)f_1980},
{"f_1683:csc_2escm",(void*)f_1683},
{"f_1990:csc_2escm",(void*)f_1990},
{"f_1699:csc_2escm",(void*)f_1699},
{"f_1695:csc_2escm",(void*)f_1695},
{"f_5129:csc_2escm",(void*)f_5129},
{"f_1666:csc_2escm",(void*)f_1666},
{"f_2971:csc_2escm",(void*)f_2971},
{"f_5119:csc_2escm",(void*)f_5119},
{"f_4869:csc_2escm",(void*)f_4869},
{"f_4865:csc_2escm",(void*)f_4865},
{"f_4862:csc_2escm",(void*)f_4862},
{"f_2981:csc_2escm",(void*)f_2981},
{"f_5109:csc_2escm",(void*)f_5109},
{"f_4833:csc_2escm",(void*)f_4833},
{"f_2995:csc_2escm",(void*)f_2995},
{"f6340:csc_2escm",(void*)f6340},
{"f_4841:csc_2escm",(void*)f_4841},
{"f6345:csc_2escm",(void*)f6345},
{"f_3009:csc_2escm",(void*)f_3009},
{"f6335:csc_2escm",(void*)f6335},
{"f_2695:csc_2escm",(void*)f_2695},
{"f_2443:csc_2escm",(void*)f_2443},
{"f_4197:csc_2escm",(void*)f_4197},
{"f_5141:csc_2escm",(void*)f_5141},
{"f_5145:csc_2escm",(void*)f_5145},
{"f_1495:csc_2escm",(void*)f_1495},
{"f_5149:csc_2escm",(void*)f_5149},
{"f_4192:csc_2escm",(void*)f_4192},
{"f_4336:csc_2escm",(void*)f_4336},
{"f_1491:csc_2escm",(void*)f_1491},
{"f_4877:csc_2escm",(void*)f_4877},
{"f_2451:csc_2escm",(void*)f_2451},
{"f_4873:csc_2escm",(void*)f_4873},
{"f_5133:csc_2escm",(void*)f_5133},
{"f_5137:csc_2escm",(void*)f_5137},
{"f_2447:csc_2escm",(void*)f_2447},
{"f_1467:csc_2escm",(void*)f_1467},
{"f_4022:csc_2escm",(void*)f_4022},
{"f_4342:csc_2escm",(void*)f_4342},
{"f_4884:csc_2escm",(void*)f_4884},
{"f_4176:csc_2escm",(void*)f_4176},
{"f_1475:csc_2escm",(void*)f_1475},
{"f_1479:csc_2escm",(void*)f_1479},
{"f_4859:csc_2escm",(void*)f_4859},
{"f_1471:csc_2escm",(void*)f_1471},
{"f_2475:csc_2escm",(void*)f_2475},
{"f_4188:csc_2escm",(void*)f_4188},
{"f_4184:csc_2escm",(void*)f_4184},
{"f_4025:csc_2escm",(void*)f_4025},
{"f_4028:csc_2escm",(void*)f_4028},
{"f_4002:csc_2escm",(void*)f_4002},
{"f_2900:csc_2escm",(void*)f_2900},
{"f_2903:csc_2escm",(void*)f_2903},
{"f_2906:csc_2escm",(void*)f_2906},
{"f_1459:csc_2escm",(void*)f_1459},
{"f_1507:csc_2escm",(void*)f_1507},
{"f_2913:csc_2escm",(void*)f_2913},
{"f_3039:csc_2escm",(void*)f_3039},
{"f_1428:csc_2escm",(void*)f_1428},
{"f_2486:csc_2escm",(void*)f_2486},
{"f_1517:csc_2escm",(void*)f_1517},
{"f_1513:csc_2escm",(void*)f_1513},
{"f_1421:csc_2escm",(void*)f_1421},
{"f_1729:csc_2escm",(void*)f_1729},
{"f_1722:csc_2escm",(void*)f_1722},
{"f_3049:csc_2escm",(void*)f_3049},
{"f_1436:csc_2escm",(void*)f_1436},
{"f_1432:csc_2escm",(void*)f_1432},
{"f_4031:csc_2escm",(void*)f_4031},
{"f_1487:csc_2escm",(void*)f_1487},
{"f_3156:csc_2escm",(void*)f_3156},
{"f_1745:csc_2escm",(void*)f_1745},
{"f_1483:csc_2escm",(void*)f_1483},
{"f_3053:csc_2escm",(void*)f_3053},
{"f_3026:csc_2escm",(void*)f_3026},
{"f_1418:csc_2escm",(void*)f_1418},
{"f_4034:csc_2escm",(void*)f_4034},
{"f_1415:csc_2escm",(void*)f_1415},
{"f_4037:csc_2escm",(void*)f_4037},
{"f_1412:csc_2escm",(void*)f_1412},
{"f_1752:csc_2escm",(void*)f_1752},
{"f_4048:csc_2escm",(void*)f_4048},
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
S|  for-each		6
S|  sprintf		5
S|  printf		2
S|  map		6
S|  fprintf		1
o|eliminated procedure checks: 98 
o|specializations:
o|  2 (zero? fixnum)
o|  1 (= fixnum fixnum)
o|  6 (string-ref string fixnum)
o|  4 (string=? string string)
o|  4 (> fixnum fixnum)
o|  4 (string-length string)
o|  67 (eqv? (not float) *)
o|  4 (cdr pair)
o|  2 (##sys#check-list (or pair list) *)
o|  8 (string-append string string)
o|  8 (##sys#check-output-port * * *)
o|  1 (current-error-port)
o|  4 (memq * list)
o|Removed `not' forms: 5 
o|substituted constant variable: a1403 
o|merged explicitly consed rest parameter: args7 
o|propagated global variable: out812 ##sys#standard-error 
o|substituted constant variable: a1408 
o|substituted constant variable: a1409 
o|inlining procedure: k1448 
o|inlining procedure: k1448 
o|substituted constant variable: default-translation-optimization-options 
o|inlining procedure: k3975 
o|inlining procedure: k3975 
o|inlining procedure: k4008 
o|inlining procedure: k4008 
o|substituted constant variable: nonstatic-compilation-options 
o|propagated global variable: r40095178 nonstatic-compilation-options 
o|propagated global variable: tmp638640 static 
o|propagated global variable: tmp638640 static 
o|inlining procedure: k4348 
o|inlining procedure: k4348 
o|substituted constant variable: a4433 
o|substituted constant variable: a4434 
o|inlining procedure: k4462 
o|inlining procedure: k4462 
o|inlining procedure: k4476 
o|inlining procedure: k4476 
o|contracted procedure: k4485 
o|propagated global variable: r4486 mingw 
o|inlining procedure: k4482 
o|inlining procedure: k4482 
o|inlining procedure: k4510 
o|inlining procedure: k4510 
o|propagated global variable: tmp792794 static 
o|propagated global variable: tmp792794 static 
o|propagated global variable: tmp789791 static 
o|inlining procedure: k4522 
o|propagated global variable: tmp789791 static 
o|inlining procedure: k4522 
o|propagated global variable: r45235199 static-libs 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|contracted procedure: "(csc.scm:1039) cleanup" 
o|inlining procedure: k4532 
o|inlining procedure: k4532 
o|inlining procedure: k4553 
o|inlining procedure: k4553 
o|inlining procedure: k4617 
o|inlining procedure: k4617 
o|inlining procedure: k4687 
o|inlining procedure: k4687 
o|contracted procedure: "(csc.scm:1057) $system" 
o|inlining procedure: k4646 
o|inlining procedure: k4646 
o|propagated global variable: out836840 ##sys#standard-output 
o|substituted constant variable: a4657 
o|substituted constant variable: a4658 
o|propagated global variable: out836840 ##sys#standard-output 
o|inlining procedure: k4706 
o|inlining procedure: k4706 
o|contracted procedure: "(csc.scm:1131) run" 
o|merged explicitly consed rest parameter: os213 
o|merged explicitly consed rest parameter: n216 
o|inlining procedure: k1794 
o|inlining procedure: k1794 
o|consed rest parameter at call site: "(csc.scm:518) stop" 2 
o|inlining procedure: k1808 
o|inlining procedure: k1808 
o|inlining procedure: k1834 
o|inlining procedure: k1834 
o|inlining procedure: k1847 
o|inlining procedure: k1847 
o|inlining procedure: k1860 
o|inlining procedure: k1889 
o|inlining procedure: k1889 
o|contracted procedure: "(csc.scm:580) run-linking" 
o|inlining procedure: k4038 
o|inlining procedure: k4038 
o|inlining procedure: k4050 
o|inlining procedure: k4050 
o|propagated global variable: g737739 generated-object-files 
o|inlining procedure: k4076 
o|contracted procedure: "(csc.scm:957) create-mac-bundle" 
o|inlining procedure: k4776 
o|inlining procedure: k4776 
o|inlining procedure: k4076 
o|contracted procedure: "(csc.scm:952) copy-libraries" 
o|inlining procedure: k4405 
o|inlining procedure: k4405 
o|substituted constant variable: a4417 
o|contracted procedure: "(csc.scm:980) target-lib-path" 
o|inlining procedure: k4363 
o|inlining procedure: k4363 
o|contracted procedure: k4378 
o|inlining procedure: k4381 
o|inlining procedure: k4381 
o|propagated global variable: tmp722724 static 
o|inlining procedure: k4103 
o|propagated global variable: tmp722724 static 
o|inlining procedure: k4103 
o|propagated global variable: r41045253 static-libs 
o|inlining procedure: k4112 
o|contracted procedure: "(csc.scm:950) rez" 
o|substituted constant variable: a4726 
o|substituted constant variable: a4727 
o|inlining procedure: k4112 
o|inlining procedure: k4140 
o|inlining procedure: k4140 
o|substituted constant variable: a4154 
o|inlining procedure: k4158 
o|inlining procedure: k4158 
o|propagated global variable: r41595262 host-mode 
o|substituted constant variable: link-output-flag 
o|inlining procedure: k4213 
o|inlining procedure: k4213 
o|inlining procedure: k4229 
o|inlining procedure: k4229 
o|substituted constant variable: a4263 
o|substituted constant variable: a4264 
o|substituted constant variable: a4287 
o|substituted constant variable: a4288 
o|inlining procedure: k4309 
o|inlining procedure: k4309 
o|propagated global variable: g664668 object-files 
o|propagated global variable: out250254 ##sys#standard-output 
o|substituted constant variable: a1902 
o|substituted constant variable: a1903 
o|substituted constant variable: a1930 
o|substituted constant variable: a1931 
o|inlining procedure: k1963 
o|inlining procedure: k1963 
o|propagated global variable: out250254 ##sys#standard-output 
o|contracted procedure: "(csc.scm:569) run-compilation" 
o|substituted constant variable: compile-only-flag 
o|inlining procedure: k3749 
o|inlining procedure: k3749 
o|substituted constant variable: compile-output-flag 
o|consed rest parameter at call site: "(csc.scm:860) stop" 2 
o|inlining procedure: k3817 
o|inlining procedure: k3817 
o|inlining procedure: k3835 
o|inlining procedure: k3835 
o|propagated global variable: g605607 generated-rc-files 
o|inlining procedure: k3858 
o|inlining procedure: k3858 
o|propagated global variable: g588590 generated-c-files 
o|inlining procedure: k3885 
o|inlining procedure: k3885 
o|propagated global variable: g567569 rc-files 
o|contracted procedure: "(csc.scm:878) create-win-manifest" 
o|inlining procedure: k3936 
o|inlining procedure: k3936 
o|propagated global variable: g537539 c-files 
o|inlining procedure: k1984 
o|inlining procedure: k1984 
o|inlining procedure: k1998 
o|propagated global variable: r19995289 object-files 
o|inlining procedure: k1998 
o|propagated global variable: r19995291 c-files 
o|consed rest parameter at call site: "(csc.scm:550) stop" 2 
o|contracted procedure: "(csc.scm:565) run-translation" 
o|inlining procedure: k3679 
o|contracted procedure: "(csc.scm:814) g471478" 
o|inlining procedure: k3600 
o|inlining procedure: k3600 
o|inlining procedure: k3633 
o|inlining procedure: k3633 
o|consed rest parameter at call site: "(csc.scm:826) stop" 2 
o|inlining procedure: k3656 
o|inlining procedure: k3656 
o|substituted constant variable: a3665 
o|inlining procedure: k3679 
o|propagated global variable: g477479 scheme-files 
o|inlining procedure: k2026 
o|inlining procedure: k2026 
o|contracted procedure: "(csc.scm:539) builtin-link-options" 
o|inlining procedure: k1620 
o|contracted procedure: "(csc.scm:282) g158159" 
o|inlining procedure: k1639 
o|contracted procedure: "(csc.scm:283) g169178" 
o|inlining procedure: k1639 
o|inlining procedure: k1620 
o|substituted constant variable: a1684 
o|inlining procedure: k1697 
o|inlining procedure: k1697 
o|inlining procedure: k1704 
o|inlining procedure: k1704 
o|inlining procedure: k1713 
o|inlining procedure: k1713 
o|inlining procedure: k1860 
o|contracted procedure: "(csc.scm:587) usage" 
o|inlining procedure: k2118 
o|inlining procedure: k2118 
o|inlining procedure: k2150 
o|inlining procedure: k2150 
o|inlining procedure: k2171 
o|inlining procedure: k2171 
o|inlining procedure: k2193 
o|inlining procedure: k2193 
o|inlining procedure: k2209 
o|inlining procedure: k2209 
o|inlining procedure: k2233 
o|inlining procedure: k2233 
o|inlining procedure: k2257 
o|inlining procedure: k2257 
o|inlining procedure: k2280 
o|inlining procedure: k2280 
o|consed rest parameter at call site: "(csc.scm:625) t-options209" 1 
o|inlining procedure: k2296 
o|consed rest parameter at call site: "(csc.scm:631) t-options209" 1 
o|inlining procedure: k2296 
o|consed rest parameter at call site: "(csc.scm:634) t-options209" 1 
o|inlining procedure: k2325 
o|consed rest parameter at call site: "(csc.scm:637) t-options209" 1 
o|inlining procedure: k2325 
o|inlining procedure: k2345 
o|inlining procedure: k2345 
o|inlining procedure: k2359 
o|inlining procedure: k2359 
o|consed rest parameter at call site: "(csc.scm:647) t-options209" 1 
o|consed rest parameter at call site: "(csc.scm:645) check210" 3 
o|inlining procedure: k2406 
o|inlining procedure: k2406 
o|inlining procedure: k2422 
o|inlining procedure: k2422 
o|inlining procedure: k2460 
o|inlining procedure: k2460 
o|consed rest parameter at call site: "(csc.scm:671) check210" 3 
o|inlining procedure: k2491 
o|consed rest parameter at call site: "(csc.scm:676) check210" 3 
o|inlining procedure: k2491 
o|inlining procedure: k2524 
o|inlining procedure: k2524 
o|inlining procedure: k2544 
o|inlining procedure: k2544 
o|inlining procedure: k2564 
o|inlining procedure: k2564 
o|inlining procedure: k2584 
o|inlining procedure: k2584 
o|inlining procedure: k2604 
o|inlining procedure: k2604 
o|inlining procedure: k2624 
o|inlining procedure: k2624 
o|consed rest parameter at call site: "(csc.scm:698) check210" 3 
o|inlining procedure: k2653 
o|consed rest parameter at call site: "(csc.scm:702) check210" 3 
o|inlining procedure: k2653 
o|consed rest parameter at call site: "(csc.scm:706) check210" 3 
o|inlining procedure: k2687 
o|consed rest parameter at call site: "(csc.scm:710) check210" 3 
o|inlining procedure: k2687 
o|consed rest parameter at call site: "(csc.scm:714) check210" 3 
o|inlining procedure: k2725 
o|consed rest parameter at call site: "(csc.scm:717) check210" 3 
o|inlining procedure: k2725 
o|inlining procedure: k2764 
o|consed rest parameter at call site: "(csc.scm:723) check210" 3 
o|inlining procedure: k2764 
o|substituted constant variable: a2828 
o|contracted procedure: k2832 
o|propagated global variable: r2833 mingw 
o|inlining procedure: k2829 
o|inlining procedure: k2829 
o|consed rest parameter at call site: "(csc.scm:727) check210" 3 
o|inlining procedure: k2838 
o|inlining procedure: k2838 
o|consed rest parameter at call site: "(csc.scm:736) t-options209" 1 
o|consed rest parameter at call site: "(csc.scm:735) check210" 3 
o|inlining procedure: k2864 
o|consed rest parameter at call site: "(csc.scm:740) t-options209" 1 
o|consed rest parameter at call site: "(csc.scm:739) check210" 3 
o|inlining procedure: k2864 
o|inlining procedure: k2894 
o|inlining procedure: k2894 
o|inlining procedure: k2910 
o|inlining procedure: k2910 
o|consed rest parameter at call site: "(csc.scm:754) t-options209" 1 
o|inlining procedure: k2935 
o|consed rest parameter at call site: "(csc.scm:759) t-options209" 1 
o|consed rest parameter at call site: "(csc.scm:756) check210" 3 
o|inlining procedure: k2935 
o|consed rest parameter at call site: "(csc.scm:762) t-options209" 1 
o|inlining procedure: k2966 
o|inlining procedure: k2986 
o|inlining procedure: k2986 
o|inlining procedure: k3014 
o|consed rest parameter at call site: "(csc.scm:772) t-options209" 1 
o|inlining procedure: k3014 
o|inlining procedure: k3033 
o|inlining procedure: k3033 
o|inlining procedure: k3044 
o|inlining procedure: k3044 
o|inlining procedure: k3067 
o|inlining procedure: k3097 
o|contracted procedure: "(csc.scm:782) g417426" 
o|substituted constant variable: a3083 
o|inlining procedure: k3097 
o|inlining procedure: k3067 
o|consed rest parameter at call site: "(csc.scm:783) stop" 2 
o|consed rest parameter at call site: "(csc.scm:784) stop" 2 
o|substituted constant variable: a3147 
o|substituted constant variable: a3152 
o|substituted constant variable: a3161 
o|substituted constant variable: a3165 
o|substituted constant variable: a3168 
o|substituted constant variable: a3171 
o|substituted constant variable: a3174 
o|substituted constant variable: a3177 
o|inlining procedure: k2966 
o|contracted procedure: k3199 
o|inlining procedure: k3196 
o|inlining procedure: k3224 
o|inlining procedure: k3224 
o|inlining procedure: k3260 
o|inlining procedure: k3260 
o|inlining procedure: k3196 
o|inlining procedure: k3304 
o|inlining procedure: k3304 
o|consed rest parameter at call site: "(csc.scm:808) stop" 2 
o|substituted constant variable: a3318 
o|substituted constant variable: a3327 
o|substituted constant variable: a3332 
o|substituted constant variable: a3337 
o|substituted constant variable: a3346 
o|substituted constant variable: constant60 
o|substituted constant variable: constant57 
o|substituted constant variable: constant64 
o|substituted constant variable: a3349 
o|substituted constant variable: a3358 
o|substituted constant variable: a3360 
o|substituted constant variable: a3362 
o|substituted constant variable: a3364 
o|substituted constant variable: a3366 
o|substituted constant variable: a3368 
o|substituted constant variable: a3370 
o|substituted constant variable: a3372 
o|substituted constant variable: a3374 
o|substituted constant variable: a3376 
o|substituted constant variable: a3378 
o|substituted constant variable: a3380 
o|substituted constant variable: a3382 
o|substituted constant variable: a3387 
o|substituted constant variable: a3389 
o|inlining procedure: k3393 
o|inlining procedure: k3393 
o|substituted constant variable: a3400 
o|substituted constant variable: a3402 
o|substituted constant variable: a3404 
o|substituted constant variable: a3406 
o|substituted constant variable: a3408 
o|substituted constant variable: a3410 
o|substituted constant variable: a3412 
o|substituted constant variable: a3414 
o|substituted constant variable: a3416 
o|substituted constant variable: a3418 
o|substituted constant variable: a3420 
o|substituted constant variable: a3422 
o|substituted constant variable: a3427 
o|substituted constant variable: a3429 
o|substituted constant variable: a3434 
o|substituted constant variable: a3436 
o|substituted constant variable: a3438 
o|substituted constant variable: a3440 
o|substituted constant variable: a3442 
o|substituted constant variable: a3444 
o|substituted constant variable: a3446 
o|substituted constant variable: a3448 
o|substituted constant variable: a3453 
o|substituted constant variable: a3455 
o|substituted constant variable: a3460 
o|substituted constant variable: a3462 
o|substituted constant variable: a3464 
o|substituted constant variable: a3466 
o|substituted constant variable: a3468 
o|substituted constant variable: a3473 
o|substituted constant variable: a3475 
o|substituted constant variable: a3480 
o|substituted constant variable: a3482 
o|substituted constant variable: a3487 
o|substituted constant variable: a3489 
o|substituted constant variable: a3494 
o|substituted constant variable: a3496 
o|substituted constant variable: a3498 
o|substituted constant variable: a3500 
o|substituted constant variable: a3502 
o|substituted constant variable: a3504 
o|substituted constant variable: a3506 
o|substituted constant variable: a3508 
o|substituted constant variable: a3510 
o|substituted constant variable: a3512 
o|substituted constant variable: a3514 
o|substituted constant variable: a3516 
o|substituted constant variable: a3518 
o|substituted constant variable: a3520 
o|substituted constant variable: a3522 
o|substituted constant variable: a3527 
o|substituted constant variable: a3529 
o|inlining procedure: k4878 
o|inlining procedure: k4878 
o|inlining procedure: k4882 
o|inlining procedure: k4882 
o|inlining procedure: k4899 
o|contracted procedure: "(csc.scm:244) g104105" 
o|inlining procedure: k4918 
o|contracted procedure: "(csc.scm:245) g115124" 
o|inlining procedure: k4918 
o|inlining procedure: k4899 
o|contracted procedure: k4960 
o|inlining procedure: k4972 
o|inlining procedure: k4972 
o|inlining procedure: k4986 
o|inlining procedure: k4986 
o|substituted constant variable: a5015 
o|folded constant expression: (string->list (quote "PHhsfiENxubvwAOeWkctgSJM")) 
o|inlining procedure: k5043 
o|inlining procedure: k5043 
o|inlining procedure: k5053 
o|inlining procedure: k5053 
o|inlining procedure: k5073 
o|inlining procedure: k5073 
o|propagated global variable: r50745447 cygwin 
o|inlining procedure: k5077 
o|inlining procedure: k5077 
o|inlining procedure: k5087 
o|inlining procedure: k5087 
o|inlining procedure: k5097 
o|inlining procedure: k5097 
o|inlining procedure: k5107 
o|inlining procedure: k5107 
o|inlining procedure: k5117 
o|inlining procedure: k5117 
o|inlining procedure: k5147 
o|inlining procedure: k5147 
o|simplifications: ((if . 2)) 
o|replaced variables: 720 
o|removed binding forms: 336 
o|propagated global variable: out812 ##sys#standard-error 
o|removed side-effect free assignment to unused variable: link-output-flag 
o|removed side-effect free assignment to unused variable: compile-output-flag 
o|removed side-effect free assignment to unused variable: default-translation-optimization-options 
o|removed side-effect free assignment to unused variable: constant57 
o|removed side-effect free assignment to unused variable: constant60 
o|removed side-effect free assignment to unused variable: constant64 
o|contracted procedure: k1540 
o|removed side-effect free assignment to unused variable: compile-only-flag 
o|substituted constant variable: r40095176 
o|substituted constant variable: r40095176 
o|substituted constant variable: nonstatic-compilation-options 
o|substituted constant variable: nonstatic-compilation-options 
o|substituted constant variable: r44635184 
o|substituted constant variable: r44635184 
o|substituted constant variable: r44635186 
o|substituted constant variable: r44635186 
o|substituted constant variable: r44775188 
o|substituted constant variable: r44775188 
o|substituted constant variable: r44775190 
o|substituted constant variable: r44775190 
o|substituted constant variable: r44835192 
o|propagated global variable: r45235198 static 
o|substituted constant variable: r45545204 
o|substituted constant variable: r46475210 
o|substituted constant variable: r46475213 
o|propagated global variable: out836840 ##sys#standard-output 
o|substituted constant variable: r18095220 
o|substituted constant variable: r18095220 
o|inlining procedure: k1834 
o|inlining procedure: k1834 
o|substituted constant variable: r18355226 
o|substituted constant variable: r18355226 
o|substituted constant variable: r44065243 
o|substituted constant variable: r44065243 
o|inlining procedure: k4405 
o|substituted constant variable: r43825250 
o|propagated global variable: r41045251 static 
o|propagated global variable: a41025254 static-libs 
o|substituted constant variable: a4193 
o|inlining procedure: k4219 
o|propagated global variable: out250254 ##sys#standard-output 
o|substituted constant variable: r19645271 
o|substituted constant variable: r19645271 
o|substituted constant variable: r19645273 
o|substituted constant variable: r19645273 
o|substituted constant variable: r37505276 
o|substituted constant variable: a3755 
o|propagated global variable: a19975290 object-files 
o|propagated global variable: a19975292 c-files 
o|substituted constant variable: r36345296 
o|substituted constant variable: r36345296 
o|inlining procedure: k3633 
o|inlining procedure: k3633 
o|substituted constant variable: r36575300 
o|substituted constant variable: r36575300 
o|inlining procedure: k3656 
o|inlining procedure: k3656 
o|substituted constant variable: r16215313 
o|substituted constant variable: r16215313 
o|substituted constant variable: r16985315 
o|substituted constant variable: r16985315 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|substituted constant variable: r28305378 
o|inlining procedure: k2100 
o|substituted constant variable: r28395381 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|substituted constant variable: r48795418 
o|substituted constant variable: r48795418 
o|substituted constant variable: r49005428 
o|substituted constant variable: r49005428 
o|replaced variables: 38 
o|removed binding forms: 758 
o|removed conditional forms: 1 
o|removed side-effect free assignment to unused variable: nonstatic-compilation-options 
o|substituted constant variable: r1541 
o|inlining procedure: "(csc.scm:996) quotewrap" 
o|inlining procedure: "(csc.scm:995) quotewrap" 
o|inlining procedure: k4513 
o|propagated global variable: r45145824 static 
o|inlining procedure: k4513 
o|propagated global variable: r45145825 static-libs 
o|inlining procedure: k4703 
o|inlining procedure: k4372 
o|inlining procedure: k4372 
o|inlining procedure: k4093 
o|propagated global variable: r40945834 gui 
o|inlining procedure: k4093 
o|propagated global variable: r41045251 static 
o|inlining procedure: "(csc.scm:1070) quotewrap" 
o|inlining procedure: "(csc.scm:1069) quotewrap" 
o|inlining procedure: "(csc.scm:940) quotewrap" 
o|inlining procedure: "(csc.scm:933) quotewrap" 
o|propagated global variable: str275852 target-filename 
o|inlining procedure: "(csc.scm:922) quotewrap" 
o|propagated global variable: str275857 target-filename 
o|inlining procedure: "(csc.scm:915) quotewrap" 
o|inlining procedure: "(csc.scm:914) quotewrap" 
o|inlining procedure: "(csc.scm:908) quotewrap" 
o|propagated global variable: str275872 target-filename 
o|inlining procedure: "(csc.scm:579) quotewrap" 
o|inlining procedure: "(csc.scm:578) quotewrap" 
o|propagated global variable: str275884 target-filename 
o|inlining procedure: "(csc.scm:867) quotewrap" 
o|inlining procedure: "(csc.scm:866) quotewrap" 
o|inlining procedure: "(csc.scm:886) quotewrap" 
o|inlining procedure: "(csc.scm:886) quotewrap" 
o|inlining procedure: k1966 
o|inlining procedure: k2004 
o|inlining procedure: "(csc.scm:834) quotewrap" 
o|inlining procedure: "(csc.scm:830) quotewrap" 
o|inlining procedure: k2059 
o|inlining procedure: k1674 
o|inlining procedure: k1674 
o|inlining procedure: "(csc.scm:218) quotewrap" 
o|inlining procedure: "(csc.scm:109) quotewrap" 
o|inlining procedure: "(csc.scm:108) quotewrap" 
o|inlining procedure: "(csc.scm:107) quotewrap" 
o|inlining procedure: "(csc.scm:106) quotewrap" 
o|inlining procedure: "(csc.scm:105) quotewrap" 
o|inlining procedure: "(csc.scm:99) quotewrap" 
o|inlining procedure: "(csc.scm:95) quotewrap" 
o|replaced variables: 11 
o|removed binding forms: 208 
o|Removed `not' forms: 2 
o|substituted constant variable: r18355478 
o|substituted constant variable: r18355480 
o|substituted constant variable: r44065486 
o|substituted constant variable: r43735832 
o|contracted procedure: k4372 
o|propagated global variable: r4373 host-mode 
o|substituted constant variable: r43735833 
o|substituted constant variable: r40945835 
o|contracted procedure: k1966 
o|propagated global variable: r1967 shared 
o|substituted constant variable: r19675916 
o|substituted constant variable: r20055917 
o|substituted constant variable: r36345507 
o|substituted constant variable: r36345509 
o|substituted constant variable: r36575511 
o|substituted constant variable: r36575513 
o|substituted constant variable: r16755939 
o|substituted constant variable: short-options 
o|simplifications: ((if . 1) (let . 1)) 
o|replaced variables: 21 
o|removed binding forms: 21 
o|removed conditional forms: 6 
o|removed side-effect free assignment to unused variable: short-options 
o|replaced variables: 3 
o|removed binding forms: 32 
o|removed binding forms: 2 
o|simplifications: ((if . 34) (##core#call . 300)) 
o|  call simplifications:
o|    assq
o|    ##sys#call-with-values
o|    string-ci=?
o|    ##sys#size	4
o|    fx>	4
o|    string
o|    string->number
o|    cadr
o|    cdr	14
o|    number?
o|    first	2
o|    ##sys#list
o|    ##sys#fudge	2
o|    member	8
o|    string=?	2
o|    length	2
o|    >=	2
o|    eq?	76
o|    zero?
o|    char=?	7
o|    string->list	2
o|    null?	8
o|    car	18
o|    memq	4
o|    char-whitespace?	2
o|    list->string
o|    not	7
o|    ##sys#check-list	10
o|    pair?	12
o|    cons	41
o|    ##sys#setslot	6
o|    ##sys#slot	24
o|    list	32
o|    ##sys#apply
o|contracted procedure: k1383 
o|contracted procedure: k1387 
o|contracted procedure: k1391 
o|contracted procedure: k1395 
o|contracted procedure: k1438 
o|contracted procedure: k1442 
o|contracted procedure: k1455 
o|contracted procedure: k1571 
o|contracted procedure: k1575 
o|contracted procedure: k4964 
o|contracted procedure: k1585 
o|contracted procedure: k3966 
o|contracted procedure: k3978 
o|contracted procedure: k3981 
o|contracted procedure: k3992 
o|contracted procedure: k4004 
o|contracted procedure: k4011 
o|inlining procedure: k4510 
o|inlining procedure: k4510 
o|contracted procedure: k4556 
o|contracted procedure: k4559 
o|contracted procedure: k4565 
o|contracted procedure: k4589 
o|contracted procedure: k4614 
o|contracted procedure: k4690 
o|contracted procedure: k4649 
o|contracted procedure: k4653 
o|contracted procedure: k1804 
o|contracted procedure: k1811 
o|inlining procedure: k1797 
o|contracted procedure: k1808 
o|inlining procedure: k1797 
o|contracted procedure: k1829 
o|contracted procedure: k1844 
o|contracted procedure: k1851 
o|contracted procedure: k1863 
o|contracted procedure: k4017 
o|contracted procedure: k4041 
o|contracted procedure: k4053 
o|contracted procedure: k4063 
o|contracted procedure: k4067 
o|propagated global variable: g737739 generated-object-files 
o|contracted procedure: k4079 
o|contracted procedure: k4807 
o|contracted procedure: k4803 
o|contracted procedure: k4799 
o|contracted procedure: k4411 
o|contracted procedure: k4388 
o|contracted procedure: k4115 
o|contracted procedure: k4155 
o|contracted procedure: k4170 
o|contracted procedure: k4178 
o|contracted procedure: k4232 
o|contracted procedure: k4245 
o|contracted procedure: k4312 
o|contracted procedure: k4315 
o|contracted procedure: k4326 
o|contracted procedure: k4338 
o|propagated global variable: g664668 object-files 
o|contracted procedure: k1898 
o|contracted procedure: k3714 
o|contracted procedure: k3718 
o|contracted procedure: k3730 
o|contracted procedure: k3726 
o|contracted procedure: k3749 
o|contracted procedure: k3760 
o|contracted procedure: k3766 
o|contracted procedure: k3784 
o|contracted procedure: k3788 
o|contracted procedure: k3796 
o|contracted procedure: k3807 
o|contracted procedure: k3820 
o|contracted procedure: k3826 
o|contracted procedure: k3838 
o|contracted procedure: k3848 
o|contracted procedure: k3852 
o|propagated global variable: g605607 generated-rc-files 
o|contracted procedure: k3861 
o|contracted procedure: k3871 
o|contracted procedure: k3875 
o|propagated global variable: g588590 generated-c-files 
o|contracted procedure: k3888 
o|contracted procedure: k3898 
o|contracted procedure: k3902 
o|propagated global variable: g567569 rc-files 
o|contracted procedure: k3915 
o|contracted procedure: k3919 
o|contracted procedure: k4851 
o|contracted procedure: k4847 
o|contracted procedure: k4843 
o|contracted procedure: k3939 
o|contracted procedure: k3949 
o|contracted procedure: k3953 
o|propagated global variable: g537539 c-files 
o|contracted procedure: k1975 
o|contracted procedure: k2001 
o|contracted procedure: k2010 
o|contracted procedure: k2004 
o|contracted procedure: k3670 
o|contracted procedure: k3682 
o|contracted procedure: k3692 
o|contracted procedure: k3696 
o|contracted procedure: k3667 
o|contracted procedure: k3662 
o|contracted procedure: k3535 
o|contracted procedure: k3556 
o|contracted procedure: k3560 
o|contracted procedure: k3639 
o|contracted procedure: k3584 
o|contracted procedure: k3591 
o|contracted procedure: k3603 
o|contracted procedure: k3606 
o|contracted procedure: k3617 
o|contracted procedure: k3629 
o|contracted procedure: k3649 
o|propagated global variable: g477479 scheme-files 
o|contracted procedure: k2033 
o|contracted procedure: k2040 
o|contracted procedure: k2043 
o|contracted procedure: k2047 
o|contracted procedure: k1642 
o|contracted procedure: k1645 
o|contracted procedure: k1656 
o|contracted procedure: k1668 
o|contracted procedure: k2093 
o|contracted procedure: k2106 
o|contracted procedure: k2109 
o|contracted procedure: k1778 
o|contracted procedure: k1774 
o|contracted procedure: k1770 
o|contracted procedure: k1766 
o|contracted procedure: k1762 
o|contracted procedure: k1758 
o|contracted procedure: k1754 
o|contracted procedure: k2121 
o|contracted procedure: k2137 
o|contracted procedure: k2153 
o|contracted procedure: k2161 
o|contracted procedure: k2167 
o|contracted procedure: k2174 
o|contracted procedure: k2185 
o|contracted procedure: k2196 
o|contracted procedure: k2204 
o|contracted procedure: k2212 
o|contracted procedure: k2224 
o|contracted procedure: k2236 
o|contracted procedure: k2248 
o|contracted procedure: k2260 
o|contracted procedure: k2268 
o|contracted procedure: k2271 
o|contracted procedure: k2285 
o|contracted procedure: k2293 
o|contracted procedure: k2299 
o|contracted procedure: k2302 
o|contracted procedure: k2306 
o|contracted procedure: k2315 
o|contracted procedure: k2318 
o|contracted procedure: k2328 
o|contracted procedure: k2331 
o|contracted procedure: k2341 
o|contracted procedure: k2348 
o|contracted procedure: k2355 
o|contracted procedure: k2362 
o|contracted procedure: k2365 
o|contracted procedure: k2370 
o|contracted procedure: k2376 
o|contracted procedure: k2379 
o|contracted procedure: k2395 
o|contracted procedure: k2403 
o|contracted procedure: k2399 
o|contracted procedure: k2409 
o|contracted procedure: k2418 
o|contracted procedure: k2425 
o|contracted procedure: k2430 
o|contracted procedure: k2437 
o|contracted procedure: k2455 
o|contracted procedure: k2463 
o|contracted procedure: k2470 
o|contracted procedure: k2480 
o|contracted procedure: k2488 
o|contracted procedure: k2494 
o|contracted procedure: k2497 
o|contracted procedure: k2503 
o|contracted procedure: k2507 
o|contracted procedure: k2514 
o|contracted procedure: k2517 
o|contracted procedure: k2527 
o|contracted procedure: k2537 
o|contracted procedure: k2547 
o|contracted procedure: k2557 
o|contracted procedure: k2567 
o|contracted procedure: k2577 
o|contracted procedure: k2587 
o|contracted procedure: k2597 
o|contracted procedure: k2607 
o|contracted procedure: k2615 
o|contracted procedure: k2627 
o|contracted procedure: k2630 
o|contracted procedure: k2639 
o|contracted procedure: k2646 
o|contracted procedure: k2650 
o|contracted procedure: k2656 
o|contracted procedure: k2663 
o|contracted procedure: k2667 
o|contracted procedure: k2673 
o|contracted procedure: k2680 
o|contracted procedure: k2684 
o|contracted procedure: k2690 
o|contracted procedure: k2697 
o|contracted procedure: k2701 
o|contracted procedure: k2707 
o|contracted procedure: k2718 
o|contracted procedure: k2722 
o|contracted procedure: k2728 
o|contracted procedure: k2739 
o|contracted procedure: k2747 
o|contracted procedure: k2753 
o|contracted procedure: k2761 
o|contracted procedure: k2767 
o|contracted procedure: k2778 
o|contracted procedure: k2786 
o|contracted procedure: k2792 
o|contracted procedure: k2799 
o|contracted procedure: k2806 
o|contracted procedure: k2817 
o|contracted procedure: k2841 
o|contracted procedure: k2847 
o|contracted procedure: k2857 
o|contracted procedure: k2861 
o|contracted procedure: k2867 
o|contracted procedure: k2877 
o|contracted procedure: k2881 
o|contracted procedure: k2887 
o|contracted procedure: k2907 
o|contracted procedure: k2920 
o|contracted procedure: k2916 
o|contracted procedure: k2929 
o|contracted procedure: k2938 
o|contracted procedure: k2944 
o|contracted procedure: k2947 
o|contracted procedure: k2954 
o|contracted procedure: k2975 
o|contracted procedure: k2983 
o|contracted procedure: k2989 
o|contracted procedure: k2997 
o|contracted procedure: k3003 
o|contracted procedure: k3011 
o|contracted procedure: k3017 
o|contracted procedure: k3030 
o|contracted procedure: k3041 
o|contracted procedure: k3055 
o|contracted procedure: k3144 
o|contracted procedure: k3061 
o|contracted procedure: k3064 
o|contracted procedure: k3070 
o|contracted procedure: k3088 
o|contracted procedure: k3100 
o|contracted procedure: k3103 
o|contracted procedure: k3114 
o|contracted procedure: k3126 
o|contracted procedure: k3085 
o|contracted procedure: k3158 
o|contracted procedure: k3149 
o|contracted procedure: k3213 
o|contracted procedure: k3221 
o|contracted procedure: k3227 
o|contracted procedure: k3235 
o|contracted procedure: k3241 
o|contracted procedure: k3253 
o|contracted procedure: k3257 
o|contracted procedure: k3263 
o|contracted procedure: k3272 
o|contracted procedure: k3288 
o|contracted procedure: k3296 
o|contracted procedure: k3207 
o|contracted procedure: k3311 
o|contracted procedure: k3329 
o|contracted procedure: k3319 
o|contracted procedure: k3343 
o|contracted procedure: k3334 
o|contracted procedure: k3352 
o|contracted procedure: k3390 
o|contracted procedure: k4921 
o|contracted procedure: k4924 
o|contracted procedure: k4935 
o|contracted procedure: k4947 
o|simplifications: ((if . 3) (let . 43)) 
o|removed binding forms: 275 
o|inlining procedure: k3984 
o|inlining procedure: k3984 
o|inlining procedure: "(csc.scm:963) prefix" 
o|inlining procedure: k4318 
o|inlining procedure: k4318 
o|inlining procedure: k3609 
o|inlining procedure: k3609 
o|inlining procedure: k1648 
o|inlining procedure: k1648 
o|inlining procedure: "(csc.scm:270) prefix" 
o|inlining procedure: k2476 
o|inlining procedure: k2476 
o|inlining procedure: k2802 
o|inlining procedure: k2802 
o|inlining procedure: k3106 
o|inlining procedure: k3106 
o|inlining procedure: "(csc.scm:255) prefix" 
o|inlining procedure: k4927 
o|inlining procedure: k4927 
o|inlining procedure: "(csc.scm:233) prefix" 
o|inlining procedure: "(csc.scm:219) prefix" 
o|propagated global variable: str236261 default-library 
o|inlining procedure: "(csc.scm:100) prefix" 
o|inlining procedure: "(csc.scm:96) prefix" 
o|simplifications: ((let . 2)) 
o|replaced variables: 43 
o|removed binding forms: 2 
o|removed side-effect free assignment to unused variable: prefix 
o|substituted constant variable: dir246174 
o|substituted constant variable: str236173 
o|substituted constant variable: dir246217 
o|substituted constant variable: str236216 
o|substituted constant variable: dir246244 
o|substituted constant variable: str236243 
o|substituted constant variable: str236256 
o|substituted constant variable: dir246262 
o|substituted constant variable: dir246267 
o|substituted constant variable: str236266 
o|substituted constant variable: dir246272 
o|substituted constant variable: str236271 
o|simplifications: ((if . 2)) 
o|replaced variables: 22 
o|removed binding forms: 38 
o|inlining procedure: k1697 
o|inlining procedure: k5000 
o|inlining procedure: k5127 
o|inlining procedure: k5143 
o|replaced variables: 24 
o|removed binding forms: 28 
o|replaced variables: 4 
o|removed binding forms: 6 
o|removed binding forms: 4 
o|direct leaf routine/allocation: use-private-repository212 6 
o|direct leaf routine/allocation: g394395 3 
o|inlining procedure: "(csc.scm:650) k2100" 
o|inlining procedure: "(csc.scm:753) k2100" 
o|simplifications: ((if . 1)) 
o|customizable procedures: (k1505 k4892 map-loop109134 k2618 k2901 k2904 k2960 k2969 k3280 k3244 k3047 map-loop411429 k2809 shared-build211 check210 k2274 t-options209 loop229 k1609 k1613 map-loop163188 k2016 k2019 k3580 map-loop491511 for-each-loop470521 k1880 g531538 for-each-loop530549 k3905 k3772 g561568 for-each-loop560574 for-each-loop581591 for-each-loop598608 k3742 compiler-options map-loop652669 linker-options linker-libraries k4106 k4070 lib-path copy-files for-each-loop730740 stop k4577 fold804 k4506 k4479 command map-loop621641) 
o|calls to known targets: 238 
o|identified direct recursive calls: f_4551 1 
o|fast box initializations: 18 
o|fast global references: 371 
o|fast global assignments: 177 
o|dropping unused closure argument: f_3957 
o|dropping unused closure argument: f_4423 
o|dropping unused closure argument: f_4466 
o|dropping unused closure argument: f_4496 
o|dropping unused closure argument: f_1785 
o|dropping unused closure argument: f_1792 
o|dropping unused closure argument: f_1405 
o|dropping unused closure argument: f_1841 
o|dropping unused closure argument: f_1818 
o|dropping unused closure argument: f_4685 
o|dropping unused closure argument: f_4342 
*/
/* end of file */
