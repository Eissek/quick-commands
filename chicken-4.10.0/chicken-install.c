/* Generated from chicken-install.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:02
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: chicken-install.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -local -no-trace -output-file chicken-install.c
   used units: library eval chicken_2dsyntax srfi_2d1 posix data_2dstructures utils irregex ports extras srfi_2d13 files
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d1_toplevel)
C_externimport void C_ccall C_srfi_2d1_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d13_toplevel)
C_externimport void C_ccall C_srfi_2d13_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[442];
static double C_possibly_force_alignment;


C_noret_decl(f_4379)
static void C_ccall f_4379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7221)
static void C_ccall f_7221(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7224)
static void C_ccall f_7224(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3858)
static void C_ccall f_3858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4614)
static void C_ccall f_4614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6485)
static void C_ccall f_6485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5950)
static void C_ccall f_5950(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6280)
static void C_ccall f_6280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5989)
static void C_fcall f_5989(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5981)
static void C_ccall f_5981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6732)
static void C_ccall f_6732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5247)
static void C_ccall f_5247(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5245)
static void C_ccall f_5245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5731)
static void C_ccall f_5731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5739)
static void C_ccall f_5739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5978)
static void C_ccall f_5978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5733)
static void C_ccall f_5733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6762)
static void C_ccall f_6762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5763)
static void C_ccall f_5763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4827)
static void C_ccall f_4827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2581)
static void C_ccall f_2581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2587)
static void C_ccall f_2587(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6442)
static void C_ccall f_6442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4162)
static void C_ccall f_4162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5999)
static void C_ccall f_5999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6449)
static void C_ccall f_6449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4168)
static void C_ccall f_4168(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3869)
static void C_ccall f_3869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3865)
static void C_fcall f_3865(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4172)
static void C_ccall f_4172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4175)
static void C_ccall f_4175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6478)
static void C_ccall f_6478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3875)
static void C_fcall f_3875(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2567)
static void C_ccall f_2567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2569)
static void C_fcall f_2569(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6467)
static void C_fcall f_6467(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5391)
static void C_ccall f_5391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5397)
static void C_ccall f_5397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5394)
static void C_ccall f_5394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2573)
static void C_ccall f_2573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2576)
static void C_ccall f_2576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5271)
static void C_fcall f_5271(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4199)
static void C_ccall f_4199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5266)
static void C_ccall f_5266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6911)
static void C_ccall f_6911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5795)
static void C_ccall f_5795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4673)
static void C_ccall f_4673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4670)
static void C_ccall f_4670(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4676)
static void C_ccall f_4676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4455)
static void C_fcall f_4455(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2551)
static void C_ccall f_2551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2325)
static void C_ccall f_2325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2322)
static void C_ccall f_2322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4682)
static void C_ccall f_4682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4679)
static void C_ccall f_4679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4465)
static void C_ccall f_4465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7026)
static void C_ccall f_7026(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2338)
static void C_ccall f_2338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2335)
static void C_ccall f_2335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2332)
static void C_ccall f_2332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4148)
static void C_ccall f_4148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4653)
static void C_fcall f_4653(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3176)
static void C_fcall f_3176(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4157)
static void C_ccall f_4157(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4661)
static void C_ccall f_4661(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6551)
static void C_ccall f_6551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3145)
static void C_ccall f_3145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4667)
static void C_ccall f_4667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6584)
static void C_ccall f_6584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6580)
static void C_ccall f_6580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3155)
static void C_ccall f_3155(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2286)
static void C_ccall f_2286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5569)
static void C_ccall f_5569(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7200)
static void C_ccall f_7200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2289)
static void C_ccall f_2289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5563)
static void C_ccall f_5563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2295)
static void C_ccall f_2295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2292)
static void C_ccall f_2292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5558)
static void C_ccall f_5558(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5555)
static void C_ccall f_5555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2298)
static void C_ccall f_2298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6703)
static void C_ccall f_6703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6706)
static void C_ccall f_6706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5330)
static void C_fcall f_5330(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4289)
static void C_ccall f_4289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6729)
static void C_ccall f_6729(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5321)
static void C_ccall f_5321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4298)
static void C_ccall f_4298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f7922)
static void C_ccall f7922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f7927)
static void C_ccall f7927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f7912)
static void C_ccall f7912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f7917)
static void C_ccall f7917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4416)
static void C_fcall f_4416(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3508)
static void C_ccall f_3508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3505)
static void C_fcall f_3505(C_word t0,C_word t1) C_noret;
C_noret_decl(f7939)
static void C_ccall f7939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f7934)
static void C_ccall f7934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f7964)
static void C_ccall f7964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f7969)
static void C_ccall f7969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f7954)
static void C_ccall f7954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f7959)
static void C_ccall f7959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3511)
static void C_ccall f_3511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f7974)
static void C_ccall f7974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5524)
static void C_ccall f_5524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2787)
static void C_ccall f_2787(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5526)
static void C_ccall f_5526(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6941)
static void C_ccall f_6941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6937)
static void C_ccall f_6937(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5312)
static void C_ccall f_5312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4905)
static void C_ccall f_4905(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4900)
static void C_ccall f_4900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5318)
static void C_ccall f_5318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5315)
static void C_ccall f_5315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4227)
static void C_ccall f_4227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4918)
static void C_ccall f_4918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4915)
static void C_ccall f_4915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4705)
static void C_ccall f_4705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4702)
static void C_ccall f_4702(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4911)
static void C_ccall f_4911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4709)
static void C_ccall f_4709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6012)
static void C_fcall f_6012(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6016)
static void C_ccall f_6016(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4239)
static void C_ccall f_4239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4236)
static void C_ccall f_4236(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4233)
static void C_ccall f_4233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4712)
static void C_ccall f_4712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4716)
static void C_ccall f_4716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5509)
static void C_ccall f_5509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5811)
static void C_fcall f_5811(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5808)
static void C_fcall f_5808(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5806)
static void C_ccall f_5806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5802)
static void C_ccall f_5802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4961)
static void C_ccall f_4961(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4967)
static void C_ccall f_4967(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4973)
static void C_ccall f_4973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4977)
static void C_ccall f_4977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4983)
static void C_ccall f_4983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4980)
static void C_ccall f_4980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4985)
static void C_ccall f_4985(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4991)
static void C_ccall f_4991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4997)
static void C_ccall f_4997(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4997)
static void C_ccall f_4997r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4526)
static void C_ccall f_4526(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4923)
static void C_fcall f_4923(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4922)
static void C_ccall f_4922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4209)
static void C_ccall f_4209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4930)
static void C_ccall f_4930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4936)
static void C_ccall f_4936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4728)
static void C_ccall f_4728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4720)
static void C_ccall f_4720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7350)
static void C_ccall f_7350(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4941)
static void C_fcall f_4941(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4940)
static void C_ccall f_4940(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4014)
static void C_fcall f_4014(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7366)
static void C_ccall f_7366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7342)
static void C_ccall f_7342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5887)
static void C_ccall f_5887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4024)
static void C_ccall f_4024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5883)
static void C_ccall f_5883(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5881)
static void C_ccall f_5881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4952)
static void C_ccall f_4952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7356)
static void C_ccall f_7356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4956)
static void C_ccall f_4956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5871)
static void C_ccall f_5871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5874)
static void C_ccall f_5874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7344)
static void C_ccall f_7344(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3903)
static void C_ccall f_3903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3906)
static void C_ccall f_3906(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3900)
static void C_ccall f_3900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3909)
static void C_ccall f_3909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5865)
static void C_ccall f_5865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4001)
static void C_ccall f_4001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5868)
static void C_ccall f_5868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5861)
static void C_ccall f_5861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7392)
static void C_ccall f_7392(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3249)
static void C_ccall f_3249(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5410)
static void C_ccall f_5410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7381)
static void C_ccall f_7381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5845)
static void C_ccall f_5845(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7394)
static void C_ccall f_7394(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_7394)
static void C_ccall f_7394r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_7385)
static void C_ccall f_7385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6413)
static void C_fcall f_6413(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5825)
static void C_ccall f_5825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6411)
static void C_ccall f_6411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5423)
static void C_fcall f_5423(C_word t0) C_noret;
C_noret_decl(f_6521)
static void C_ccall f_6521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3287)
static void C_ccall f_3287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3283)
static void C_ccall f_3283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6404)
static void C_ccall f_6404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5105)
static void C_ccall f_5105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6202)
static void C_ccall f_6202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6207)
static void C_fcall f_6207(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5121)
static void C_ccall f_5121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3264)
static void C_ccall f_3264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3268)
static void C_ccall f_3268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5126)
static void C_ccall f_5126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5112)
static void C_ccall f_5112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3719)
static void C_ccall f_3719(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3713)
static void C_ccall f_3713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4765)
static void C_ccall f_4765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4768)
static void C_ccall f_4768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4504)
static void C_fcall f_4504(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7174)
static void C_ccall f_7174(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2403)
static void C_ccall f_2403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2406)
static void C_ccall f_2406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2400)
static void C_ccall f_2400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3092)
static void C_ccall f_3092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4771)
static void C_ccall f_4771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4777)
static void C_ccall f_4777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5131)
static void C_ccall f_5131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2820)
static void C_ccall f_2820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2825)
static void C_fcall f_2825(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5137)
static void C_ccall f_5137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4783)
static void C_ccall f_4783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5605)
static void C_ccall f_5605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4786)
static void C_ccall f_4786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4789)
static void C_ccall f_4789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3075)
static void C_fcall f_3075(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2835)
static void C_ccall f_2835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4796)
static void C_ccall f_4796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4799)
static void C_ccall f_4799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5607)
static void C_fcall f_5607(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7360)
static void C_ccall f_7360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7363)
static void C_ccall f_7363(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3043)
static void C_ccall f_3043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7375)
static void C_ccall f_7375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7136)
static void C_fcall f_7136(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2856)
static void C_fcall f_2856(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7132)
static void C_ccall f_7132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2850)
static void C_ccall f_2850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2854)
static void C_ccall f_2854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4732)
static void C_ccall f_4732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5406)
static void C_ccall f_5406(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4738)
static void C_ccall f_4738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4433)
static void C_ccall f_4433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4744)
static void C_ccall f_4744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4747)
static void C_ccall f_4747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7408)
static void C_ccall f_7408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4750)
static void C_ccall f_4750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7400)
static void C_ccall f_7400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4759)
static void C_ccall f_4759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f7944)
static void C_ccall f7944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f7949)
static void C_ccall f7949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5371)
static void C_ccall f_5371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5373)
static void C_ccall f_5373(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3668)
static void C_ccall f_3668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7412)
static void C_ccall f_7412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5367)
static void C_ccall f_5367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3639)
static void C_fcall f_3639(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3636)
static void C_ccall f_3636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4478)
static void C_fcall f_4478(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3400)
static void C_ccall f_3400(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4385)
static void C_ccall f_4385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4387)
static void C_fcall f_4387(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3644)
static void C_ccall f_3644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6885)
static void C_ccall f_6885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4488)
static void C_ccall f_4488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6144)
static void C_fcall f_6144(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3207)
static void C_ccall f_3207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3204)
static void C_fcall f_3204(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3698)
static void C_ccall f_3698(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6130)
static void C_ccall f_6130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3236)
static void C_ccall f_3236(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4574)
static void C_ccall f_4574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f7986)
static void C_ccall f7986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f7981)
static void C_ccall f7981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7182)
static void C_ccall f_7182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6160)
static void C_ccall f_6160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6167)
static void C_ccall f_6167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6154)
static void C_ccall f_6154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4590)
static void C_ccall f_4590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2414)
static void C_fcall f_2414(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5591)
static C_word C_fcall f_5591(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_6180)
static void C_ccall f_6180(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3682)
static void C_ccall f_3682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4561)
static void C_fcall f_4561(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5548)
static void C_ccall f_5548(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6171)
static void C_ccall f_6171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4250)
static void C_ccall f_4250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4536)
static void C_ccall f_4536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7327)
static void C_ccall f_7327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5538)
static void C_ccall f_5538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5534)
static void C_ccall f_5534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5491)
static void C_ccall f_5491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7339)
static void C_ccall f_7339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3220)
static void C_ccall f_3220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7336)
static void C_ccall f_7336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5499)
static void C_fcall f_5499(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7333)
static void C_ccall f_7333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7330)
static void C_ccall f_7330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3484)
static void C_ccall f_3484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5442)
static void C_ccall f_5442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6199)
static void C_ccall f_6199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5448)
static void C_ccall f_5448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5445)
static void C_ccall f_5445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3481)
static void C_fcall f_3481(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3496)
static void C_ccall f_3496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4284)
static void C_ccall f_4284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4281)
static void C_ccall f_4281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5472)
static void C_ccall f_5472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5479)
static void C_ccall f_5479(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3493)
static void C_fcall f_3493(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5589)
static void C_ccall f_5589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3465)
static void C_ccall f_3465(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4328)
static void C_ccall f_4328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5575)
static C_word C_fcall f_5575(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_4260)
static void C_ccall f_4260(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5451)
static void C_ccall f_5451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4265)
static void C_ccall f_4265(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6394)
static void C_ccall f_6394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5457)
static void C_ccall f_5457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5454)
static void C_ccall f_5454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3471)
static void C_ccall f_3471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3448)
static void C_ccall f_3448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4272)
static void C_ccall f_4272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6384)
static void C_ccall f_6384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2394)
static void C_ccall f_2394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2390)
static void C_ccall f_2390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6640)
static void C_ccall f_6640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4242)
static void C_ccall f_4242(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3459)
static void C_ccall f_3459(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3454)
static void C_ccall f_3454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5430)
static void C_ccall f_5430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4245)
static void C_ccall f_4245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4278)
static void C_ccall f_4278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2365)
static void C_ccall f_2365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6671)
static void C_ccall f_6671(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6678)
static void C_ccall f_6678(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3420)
static void C_fcall f_3420(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2665)
static void C_ccall f_2665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5460)
static void C_ccall f_5460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5469)
static void C_ccall f_5469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5466)
static void C_ccall f_5466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5463)
static void C_ccall f_5463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6356)
static void C_ccall f_6356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3430)
static void C_ccall f_3430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6342)
static void C_ccall f_6342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4057)
static void C_ccall f_4057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3301)
static void C_ccall f_3301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2453)
static void C_fcall f_2453(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2451)
static void C_ccall f_2451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6371)
static void C_ccall f_6371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5682)
static void C_ccall f_5682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5684)
static void C_fcall f_5684(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5688)
static void C_ccall f_5688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6810)
static void C_ccall f_6810(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6362)
static void C_ccall f_6362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6365)
static void C_ccall f_6365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6368)
static void C_ccall f_6368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5677)
static void C_ccall f_5677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2471)
static void C_ccall f_2471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7120)
static void C_ccall f_7120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5483)
static void C_ccall f_5483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5485)
static void C_ccall f_5485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4090)
static void C_ccall f_4090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5642)
static void C_fcall f_5642(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2460)
static void C_ccall f_2460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2467)
static void C_fcall f_2467(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4072)
static void C_ccall f_4072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4075)
static void C_ccall f_4075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7113)
static void C_ccall f_7113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5148)
static void C_ccall f_5148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4080)
static void C_fcall f_4080(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3980)
static void C_ccall f_3980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3581)
static void C_ccall f_3581(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3581)
static void C_ccall f_3581r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4303)
static void C_fcall f_4303(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5161)
static void C_ccall f_5161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3552)
static void C_ccall f_3552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4313)
static void C_ccall f_4313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5281)
static void C_ccall f_5281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3587)
static void C_ccall f_3587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3989)
static void C_ccall f_3989(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5155)
static void C_ccall f_5155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3983)
static void C_ccall f_3983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3960)
static void C_ccall f_3960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3558)
static void C_ccall f_3558(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5183)
static void C_ccall f_5183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3566)
static void C_ccall f_3566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5172)
static void C_ccall f_5172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5003)
static void C_ccall f_5003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3956)
static void C_fcall f_3956(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2600)
static void C_ccall f_2600(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5691)
static void C_ccall f_5691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5696)
static void C_ccall f_5696(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4126)
static void C_fcall f_4126(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3623)
static void C_ccall f_3623(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2613)
static void C_fcall f_2613(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2611)
static void C_ccall f_2611(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7107)
static void C_ccall f_7107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3618)
static void C_ccall f_3618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3614)
static void C_ccall f_3614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4130)
static void C_ccall f_4130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3602)
static void C_fcall f_3602(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3963)
static void C_ccall f_3963(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3356)
static void C_ccall f_3356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3976)
static void C_fcall f_3976(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3975)
static void C_ccall f_3975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3972)
static void C_ccall f_3972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3593)
static void C_fcall f_3593(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3351)
static void C_fcall f_3351(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3350)
static void C_ccall f_3350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3367)
static void C_fcall f_3367(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3362)
static void C_ccall f_3362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5230)
static void C_ccall f_5230(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3597)
static void C_ccall f_3597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2703)
static void C_fcall f_2703(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5222)
static void C_ccall f_5222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2701)
static void C_ccall f_2701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5212)
static void C_ccall f_5212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5226)
static void C_ccall f_5226(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3394)
static void C_ccall f_3394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5039)
static void C_ccall f_5039(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5034)
static void C_ccall f_5034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5028)
static void C_ccall f_5028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5022)
static void C_ccall f_5022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3385)
static void C_ccall f_3385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3381)
static void C_ccall f_3381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2902)
static void C_ccall f_2902(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2905)
static void C_fcall f_2905(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7283)
static void C_ccall f_7283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2912)
static void C_ccall f_2912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7237)
static void C_ccall f_7237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7230)
static void C_ccall f_7230(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5702)
static void C_ccall f_5702(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5708)
static void C_ccall f_5708(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7247)
static void C_fcall f_7247(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7243)
static void C_ccall f_7243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6613)
static void C_ccall f_6613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5722)
static void C_ccall f_5722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5725)
static void C_ccall f_5725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5728)
static void C_ccall f_5728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5209)
static void C_ccall f_5209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5206)
static void C_fcall f_5206(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7267)
static void C_ccall f_7267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7263)
static void C_ccall f_7263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2746)
static void C_ccall f_2746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6636)
static void C_ccall f_6636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2749)
static void C_fcall f_2749(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6620)
static void C_ccall f_6620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3757)
static void C_fcall f_3757(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2984)
static void C_ccall f_2984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6629)
static void C_ccall f_6629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2997)
static void C_fcall f_2997(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7052)
static void C_ccall f_7052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3761)
static void C_ccall f_3761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2779)
static void C_ccall f_2779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2966)
static void C_ccall f_2966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3739)
static void C_ccall f_3739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2962)
static void C_ccall f_2962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6103)
static void C_ccall f_6103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3747)
static void C_ccall f_3747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2974)
static void C_fcall f_2974(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3749)
static void C_ccall f_3749(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6074)
static void C_ccall f_6074(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2502)
static void C_ccall f_2502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2508)
static void C_ccall f_2508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2949)
static void C_ccall f_2949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3795)
static void C_ccall f_3795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2943)
static void C_ccall f_2943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3798)
static void C_ccall f_3798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6062)
static void C_fcall f_6062(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3792)
static void C_ccall f_3792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2514)
static void C_ccall f_2514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2517)
static void C_ccall f_2517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6123)
static void C_fcall f_6123(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6127)
static void C_ccall f_6127(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2511)
static void C_ccall f_2511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2958)
static void C_ccall f_2958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2950)
static void C_fcall f_2950(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6091)
static void C_ccall f_6091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6095)
static void C_ccall f_6095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6099)
static void C_ccall f_6099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6111)
static void C_ccall f_6111(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2732)
static void C_ccall f_2732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3777)
static void C_ccall f_3777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2924)
static C_word C_fcall f_2924(C_word t0,C_word t1);
C_noret_decl(f_2922)
static void C_ccall f_2922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6080)
static void C_ccall f_6080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6084)
static void C_ccall f_6084(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3771)
static void C_ccall f_3771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3013)
static void C_ccall f_3013(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3786)
static void C_ccall f_3786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5716)
static void C_ccall f_5716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3789)
static void C_ccall f_3789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6030)
static void C_ccall f_6030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3780)
static void C_ccall f_3780(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3783)
static void C_ccall f_3783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3007)
static void C_fcall f_3007(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6313)
static void C_fcall f_6313(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6311)
static void C_ccall f_6311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6304)
static void C_ccall f_6304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4818)
static void C_ccall f_4818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6045)
static void C_ccall f_6045(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6043)
static void C_ccall f_6043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4811)
static void C_ccall f_4811(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7098)
static void C_fcall f_7098(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3108)
static void C_ccall f_3108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4808)
static void C_ccall f_4808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4805)
static void C_ccall f_4805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6238)
static void C_ccall f_6238(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4851)
static void C_ccall f_4851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4869)
static void C_ccall f_4869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3123)
static void C_fcall f_3123(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4866)
static void C_ccall f_4866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6796)
static void C_ccall f_6796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6254)
static void C_ccall f_6254(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4863)
static void C_ccall f_4863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4860)
static void C_ccall f_4860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2642)
static void C_ccall f_2642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5081)
static void C_ccall f_5081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2656)
static void C_ccall f_2656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2658)
static void C_fcall f_2658(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5903)
static void C_fcall f_5903(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3838)
static void C_ccall f_3838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5075)
static void C_ccall f_5075(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5075)
static void C_ccall f_5075r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_6273)
static void C_ccall f_6273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6277)
static void C_ccall f_6277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2523)
static void C_ccall f_2523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2520)
static void C_ccall f_2520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4845)
static void C_ccall f_4845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4842)
static void C_fcall f_4842(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4897)
static void C_ccall f_4897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5063)
static void C_ccall f_5063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3888)
static void C_ccall f_3888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5061)
static void C_ccall f_5061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3882)
static void C_ccall f_3882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5069)
static void C_ccall f_5069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2307)
static void C_ccall f_2307(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2301)
static void C_ccall f_2301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2304)
static void C_ccall f_2304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4893)
static void C_fcall f_4893(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4892)
static void C_ccall f_4892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5051)
static void C_ccall f_5051(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3897)
static void C_ccall f_3897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3891)
static void C_ccall f_3891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5055)
static void C_ccall f_5055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3894)
static void C_ccall f_3894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2319)
static void C_ccall f_2319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5058)
static void C_ccall f_5058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2316)
static void C_ccall f_2316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4341)
static void C_ccall f_4341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2313)
static void C_ccall f_2313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5751)
static void C_ccall f_5751(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4345)
static void C_ccall f_4345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2310)
static void C_ccall f_2310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6298)
static void C_ccall f_6298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5757)
static void C_ccall f_5757(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5757)
static void C_ccall f_5757r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5755)
static void C_ccall f_5755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3114)
static void C_fcall f_3114(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4877)
static void C_fcall f_4877(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5045)
static void C_ccall f_5045(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6244)
static void C_ccall f_6244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4351)
static void C_ccall f_4351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6241)
static void C_ccall f_6241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5782)
static void C_ccall f_5782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4358)
static void C_ccall f_4358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5944)
static void C_ccall f_5944(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4872)
static void C_ccall f_4872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4873)
static void C_fcall f_4873(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4886)
static void C_ccall f_4886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6776)
static void C_ccall f_6776(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5772)
static void C_fcall f_5772(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5932)
static void C_ccall f_5932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4883)
static void C_ccall f_4883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4880)
static void C_ccall f_4880(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7217)
static void C_fcall f_7217(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3844)
static void C_ccall f_3844(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_5989)
static void C_fcall trf_5989(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5989(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5989(t0,t1,t2);}

C_noret_decl(trf_3865)
static void C_fcall trf_3865(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3865(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3865(t0,t1,t2);}

C_noret_decl(trf_3875)
static void C_fcall trf_3875(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3875(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3875(t0,t1);}

C_noret_decl(trf_2569)
static void C_fcall trf_2569(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2569(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2569(t0,t1,t2);}

C_noret_decl(trf_6467)
static void C_fcall trf_6467(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6467(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6467(t0,t1);}

C_noret_decl(trf_5271)
static void C_fcall trf_5271(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5271(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5271(t0,t1,t2,t3);}

C_noret_decl(trf_4455)
static void C_fcall trf_4455(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4455(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4455(t0,t1,t2);}

C_noret_decl(trf_4653)
static void C_fcall trf_4653(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4653(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4653(t0,t1);}

C_noret_decl(trf_3176)
static void C_fcall trf_3176(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3176(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3176(t0,t1);}

C_noret_decl(trf_5330)
static void C_fcall trf_5330(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5330(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5330(t0,t1,t2);}

C_noret_decl(trf_4416)
static void C_fcall trf_4416(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4416(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4416(t0,t1);}

C_noret_decl(trf_3505)
static void C_fcall trf_3505(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3505(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3505(t0,t1);}

C_noret_decl(trf_6012)
static void C_fcall trf_6012(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6012(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6012(t0,t1);}

C_noret_decl(trf_5811)
static void C_fcall trf_5811(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5811(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5811(t0,t1);}

C_noret_decl(trf_5808)
static void C_fcall trf_5808(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5808(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5808(t0,t1);}

C_noret_decl(trf_4923)
static void C_fcall trf_4923(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4923(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4923(t0,t1);}

C_noret_decl(trf_4941)
static void C_fcall trf_4941(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4941(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4941(t0,t1);}

C_noret_decl(trf_4014)
static void C_fcall trf_4014(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4014(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4014(t0,t1,t2);}

C_noret_decl(trf_6413)
static void C_fcall trf_6413(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6413(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6413(t0,t1,t2);}

C_noret_decl(trf_5423)
static void C_fcall trf_5423(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5423(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_5423(t0);}

C_noret_decl(trf_6207)
static void C_fcall trf_6207(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6207(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6207(t0,t1,t2,t3);}

C_noret_decl(trf_4504)
static void C_fcall trf_4504(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4504(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4504(t0,t1);}

C_noret_decl(trf_2825)
static void C_fcall trf_2825(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2825(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2825(t0,t1,t2);}

C_noret_decl(trf_3075)
static void C_fcall trf_3075(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3075(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3075(t0,t1);}

C_noret_decl(trf_5607)
static void C_fcall trf_5607(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5607(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5607(t0,t1,t2);}

C_noret_decl(trf_7136)
static void C_fcall trf_7136(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7136(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7136(t0,t1,t2);}

C_noret_decl(trf_2856)
static void C_fcall trf_2856(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2856(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2856(t0,t1);}

C_noret_decl(trf_3639)
static void C_fcall trf_3639(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3639(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3639(t0,t1);}

C_noret_decl(trf_4478)
static void C_fcall trf_4478(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4478(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4478(t0,t1,t2);}

C_noret_decl(trf_4387)
static void C_fcall trf_4387(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4387(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4387(t0,t1,t2);}

C_noret_decl(trf_6144)
static void C_fcall trf_6144(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6144(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6144(t0,t1);}

C_noret_decl(trf_3204)
static void C_fcall trf_3204(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3204(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3204(t0,t1);}

C_noret_decl(trf_2414)
static void C_fcall trf_2414(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2414(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2414(t0,t1);}

C_noret_decl(trf_4561)
static void C_fcall trf_4561(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4561(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4561(t0,t1);}

C_noret_decl(trf_5499)
static void C_fcall trf_5499(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5499(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5499(t0,t1,t2);}

C_noret_decl(trf_3481)
static void C_fcall trf_3481(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3481(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3481(t0,t1);}

C_noret_decl(trf_3493)
static void C_fcall trf_3493(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3493(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3493(t0,t1);}

C_noret_decl(trf_3420)
static void C_fcall trf_3420(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3420(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3420(t0,t1,t2);}

C_noret_decl(trf_2453)
static void C_fcall trf_2453(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2453(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2453(t0,t1,t2);}

C_noret_decl(trf_5684)
static void C_fcall trf_5684(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5684(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5684(t0,t1,t2);}

C_noret_decl(trf_5642)
static void C_fcall trf_5642(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5642(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5642(t0,t1,t2);}

C_noret_decl(trf_2467)
static void C_fcall trf_2467(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2467(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2467(t0,t1,t2);}

C_noret_decl(trf_4080)
static void C_fcall trf_4080(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4080(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4080(t0,t1,t2);}

C_noret_decl(trf_4303)
static void C_fcall trf_4303(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4303(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4303(t0,t1,t2);}

C_noret_decl(trf_3956)
static void C_fcall trf_3956(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3956(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3956(t0,t1,t2);}

C_noret_decl(trf_4126)
static void C_fcall trf_4126(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4126(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4126(t0,t1);}

C_noret_decl(trf_2613)
static void C_fcall trf_2613(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2613(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2613(t0,t1,t2);}

C_noret_decl(trf_3602)
static void C_fcall trf_3602(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3602(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3602(t0,t1,t2);}

C_noret_decl(trf_3976)
static void C_fcall trf_3976(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3976(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3976(t0,t1,t2);}

C_noret_decl(trf_3593)
static void C_fcall trf_3593(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3593(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3593(t0,t1);}

C_noret_decl(trf_3351)
static void C_fcall trf_3351(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3351(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3351(t0,t1,t2);}

C_noret_decl(trf_3367)
static void C_fcall trf_3367(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3367(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3367(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2703)
static void C_fcall trf_2703(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2703(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2703(t0,t1,t2);}

C_noret_decl(trf_2905)
static void C_fcall trf_2905(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2905(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2905(t0,t1);}

C_noret_decl(trf_7247)
static void C_fcall trf_7247(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7247(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7247(t0,t1,t2);}

C_noret_decl(trf_5206)
static void C_fcall trf_5206(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5206(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5206(t0,t1);}

C_noret_decl(trf_2749)
static void C_fcall trf_2749(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2749(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2749(t0,t1);}

C_noret_decl(trf_3757)
static void C_fcall trf_3757(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3757(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3757(t0,t1,t2);}

C_noret_decl(trf_2997)
static void C_fcall trf_2997(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2997(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2997(t0,t1);}

C_noret_decl(trf_2974)
static void C_fcall trf_2974(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2974(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2974(t0,t1,t2);}

C_noret_decl(trf_6062)
static void C_fcall trf_6062(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6062(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6062(t0,t1,t2);}

C_noret_decl(trf_6123)
static void C_fcall trf_6123(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6123(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6123(t0,t1,t2);}

C_noret_decl(trf_2950)
static void C_fcall trf_2950(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2950(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2950(t0,t1,t2);}

C_noret_decl(trf_3007)
static void C_fcall trf_3007(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3007(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3007(t0,t1);}

C_noret_decl(trf_6313)
static void C_fcall trf_6313(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6313(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6313(t0,t1,t2);}

C_noret_decl(trf_7098)
static void C_fcall trf_7098(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7098(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7098(t0,t1);}

C_noret_decl(trf_3123)
static void C_fcall trf_3123(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3123(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3123(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2658)
static void C_fcall trf_2658(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2658(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2658(t0,t1,t2);}

C_noret_decl(trf_5903)
static void C_fcall trf_5903(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5903(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5903(t0,t1,t2);}

C_noret_decl(trf_4842)
static void C_fcall trf_4842(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4842(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4842(t0,t1);}

C_noret_decl(trf_4893)
static void C_fcall trf_4893(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4893(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4893(t0,t1,t2);}

C_noret_decl(trf_3114)
static void C_fcall trf_3114(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3114(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3114(t0,t1);}

C_noret_decl(trf_4877)
static void C_fcall trf_4877(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4877(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4877(t0,t1);}

C_noret_decl(trf_4873)
static void C_fcall trf_4873(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4873(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4873(t0,t1,t2,t3);}

C_noret_decl(trf_5772)
static void C_fcall trf_5772(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5772(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5772(t0,t1,t2);}

C_noret_decl(trf_7217)
static void C_fcall trf_7217(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7217(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7217(t0,t1);}

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

/* k4377 in k4263 in a4259 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_ccall f_4379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4379,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[105]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4385,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4387,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_4387(t7,t3,t1);}

/* k7219 in k7198 in k7281 in k7096 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_ccall f_7221(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7221,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7224,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7230,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:1038: absolute-pathname? */
t5=C_fast_retrieve(lf[81]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
/* chicken-install.scm:1041: current-directory */
t4=C_fast_retrieve(lf[80]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7222 in k7219 in k7198 in k7281 in k7096 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in ... */
static void C_ccall f_7224(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7224,2,t0,t1);}
t2=((C_word*)t0)[2];
f_7217(t2,C_a_i_list2(&a,2,t1,lf[426]));}

/* k3856 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in ... */
static void C_ccall f_3858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3858,2,t0,t1);}
t2=t1;
t3=C_i_assq(t2,C_retrieve2(lf[34],"main#\052override\052"));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3865,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:397: g643 */
t5=t4;
f_3865(t5,((C_word*)t0)[3],t3);}
else{
t4=C_i_pairp(((C_word*)t0)[2]);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?C_u_i_cdr(((C_word*)t0)[2]):C_SCHEME_FALSE));}}

/* k4612 in k4559 in loop in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_ccall f_4614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
/* chicken-install.scm:513: fail */
t2=((C_word*)t0)[3];
f_4504(t2,((C_word*)t0)[2]);}}

/* k6483 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_6485(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:904: print */
t2=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* a5949 in a5943 in a5882 in main#apply-mappings in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in ... */
static void C_ccall f_5950(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5950,3,t0,t1,t2);}
/* chicken-install.scm:722: g1413 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_5845(4,t3,t1,((C_word*)t0)[3],t2);}

/* k6278 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_ccall f_6280(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_retrieve2(lf[14],"main#\052default-location\052"))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_6244(2,t3,t2);}
else{
/* chicken-install.scm:884: error */
t2=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[343]);}}

/* for-each-loop1451 in k5979 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_fcall f_5989(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5989,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5999,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=C_i_car(t4);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5978,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:735: cadadr */
t9=*((C_word*)lf[251]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5979 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in ... */
static void C_ccall f_5981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5981,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[86]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5989,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_5989(t6,((C_word*)t0)[2],t1);}

/* k6730 in k6727 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_ccall f_6732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cddr(((C_word*)t0)[2]);
/* chicken-install.scm:952: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6207(t3,((C_word*)t0)[4],t2,((C_word*)((C_word*)t0)[5])[1]);}

/* a5246 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in ... */
static void C_ccall f_5247(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5247,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=C_u_i_car(t3);
t5=C_i_car(((C_word*)t0)[2]);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_equalp(t4,t5));}
else{
t3=t2;
t4=C_i_car(((C_word*)t0)[2]);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_equalp(t3,t4));}}

/* k5243 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in ... */
static void C_ccall f_5245(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4877(t2,C_i_not(t1));}

/* k5729 in k5726 in k5723 in k5720 in k5714 in a5707 in a5701 in a5695 in k5686 in g1246 in a5681 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in ... */
static void C_ccall f_5731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:683: print-error-message */
t2=C_fast_retrieve(lf[165]);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],*((C_word*)lf[73]+1),t1);}

/* a5738 in a5732 in a5695 in k5686 in g1246 in a5681 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in ... */
static void C_ccall f_5739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5739,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5751,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5755,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:686: irregex-match-substring */
t4=C_fast_retrieve(lf[213]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[2],C_fix(1));}

/* k5976 in for-each-loop1451 in k5979 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_ccall f_5978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5978,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* chicken-install.scm:735: pp */
t3=C_fast_retrieve(lf[250]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t2);}

/* a5732 in a5695 in k5686 in g1246 in a5681 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in ... */
static void C_ccall f_5733(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5733,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5739,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5757,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:680: ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* k6760 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_6762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6762,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6776,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* chicken-install.scm:956: string->symbol */
t4=*((C_word*)lf[135]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* a5762 in a5756 in a5732 in a5695 in k5686 in g1246 in a5681 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in ... */
static void C_ccall f_5763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5763,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* k4825 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4659 in k4651 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in ... */
static void C_ccall f_4827(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4827,2,t0,t1);}
t2=(C_truep(t1)?lf[271]:lf[272]);
t3=t2;
t4=(C_truep(C_retrieve2(lf[5],"main#\052keep\052"))?lf[273]:lf[274]);
t5=t4;
t6=(C_truep(C_retrieve2(lf[10],"main#\052no-install\052"))?(C_truep(((C_word*)t0)[2])?lf[275]:lf[276]):lf[275]);
t7=t6;
t8=(C_truep(C_retrieve2(lf[30],"main#\052host-extension\052"))?lf[277]:lf[278]);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4702,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=t5,a[8]=t7,a[9]=t9,a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
/* chicken-install.scm:535: get-prefix */
f_2414(t10,C_SCHEME_END_OF_LIST);}

/* a2580 in k2574 in k2571 in g293 in k2469 in g249 in k2848 in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in ... */
static void C_ccall f_2581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2581,2,t0,t1);}
/* chicken-install.scm:156: split-at */
t2=C_fast_retrieve(lf[364]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* a2586 in k2574 in k2571 in g293 in k2469 in g249 in k2848 in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in ... */
static void C_ccall f_2587(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2587,4,t0,t1,t2,t3);}
t4=C_i_cdr(t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_cons(&a,2,t2,t4));}

/* k6440 in map-loop1589 in k6382 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in ... */
static void C_ccall f_6442(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6442,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6413(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6413(t6,((C_word*)t0)[5],t5);}}

/* a4161 in k4155 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in ... */
static void C_ccall f_4162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4162,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3698,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:363: with-default-sources */
f_3593(t1,t4);}

/* k5997 in for-each-loop1451 in k5979 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_ccall f_5999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5989(t3,((C_word*)t0)[4],t2);}

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
if(!C_demand_2(1738)){
C_save(t1);
C_rereclaim2(1738*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,442);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\012modules.db");
lf[3]=C_decode_literal(C_heaptop,"\376B\000\000\016setup.defaults");
lf[16]=C_h_intern(&lf[16],4,"http");
lf[40]=C_h_intern(&lf[40],17,"\003syspeek-c-string");
lf[44]=C_h_intern(&lf[44],7,"chicken");
lf[45]=C_h_intern(&lf[45],15,"chicken-version");
lf[46]=C_h_intern(&lf[46],7,"version");
lf[47]=C_h_intern(&lf[47],8,"->string");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\0050.0.0");
lf[49]=C_h_intern(&lf[49],21,"extension-information");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\007chicken");
lf[51]=C_h_intern(&lf[51],24,"\003syscore-library-modules");
lf[52]=C_h_intern(&lf[52],23,"\003syscore-syntax-modules");
lf[54]=C_decode_literal(C_heaptop,"\376B\000\000\007chicken");
lf[55]=C_h_intern(&lf[55],5,"error");
lf[56]=C_h_intern(&lf[56],13,"string-append");
lf[57]=C_decode_literal(C_heaptop,"\376B\000\000JYour CHICKEN version is not recent enough to use this extension - version ");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\025 or newer is required");
lf[59]=C_h_intern(&lf[59],20,"setup-api#version>=\077");
lf[60]=C_h_intern(&lf[60],7,"warning");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\0007invalid dependency syntax in extension meta information");
lf[62]=C_h_intern(&lf[62],2,"or");
lf[68]=C_h_intern(&lf[68],4,"exit");
lf[69]=C_h_intern(&lf[69],5,"print");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000,Could not determine a source of extensions. ");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000.Please specify a valid location and transport.");
lf[72]=C_h_intern(&lf[72],19,"with-output-to-port");
lf[73]=C_h_intern(&lf[73],18,"\003sysstandard-error");
lf[74]=C_h_intern(&lf[74],5,"local");
lf[75]=C_h_intern(&lf[75],9,"transport");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000\027missing transport entry");
lf[77]=C_h_intern(&lf[77],8,"location");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\026missing location entry");
lf[79]=C_h_intern(&lf[79],13,"make-pathname");
lf[80]=C_h_intern(&lf[80],17,"current-directory");
lf[81]=C_h_intern(&lf[81],18,"absolute-pathname\077");
lf[83]=C_h_intern(&lf[83],7,"depends");
lf[84]=C_h_intern(&lf[84],19,"\003sysstandard-output");
lf[85]=C_h_intern(&lf[85],6,"printf");
lf[86]=C_h_intern(&lf[86],8,"for-each");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\001\011");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[89]=C_h_intern(&lf[89],5,"needs");
lf[90]=C_h_intern(&lf[90],6,"append");
lf[91]=C_h_intern(&lf[91],20,"with-input-from-file");
lf[92]=C_h_intern(&lf[92],4,"read");
lf[93]=C_h_intern(&lf[93],12,"file-exists\077");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000\004meta");
lf[96]=C_h_intern(&lf[96],9,"\003sysprint");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000$ dependencies as reported in .meta:\012");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000\003Egg");
lf[99]=C_h_intern(&lf[99],15,"foreign-depends");
lf[100]=C_decode_literal(C_heaptop,"\376B\000\000\007Foreign");
lf[102]=C_decode_literal(C_heaptop,"\376B\000\000\034fetching meta information...");
lf[103]=C_h_intern(&lf[103],7,"reverse");
lf[104]=C_h_intern(&lf[104],12,"test-depends");
lf[105]=C_h_intern(&lf[105],3,"map");
lf[106]=C_h_intern(&lf[106],26,"setup-api#remove-extension");
lf[107]=C_decode_literal(C_heaptop,"\376B\000\000)removing previously installed extension `");
lf[108]=C_decode_literal(C_heaptop,"\376B\000\000\005\047 ...");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000\012 upgrade: ");
lf[110]=C_h_intern(&lf[110],18,"string-intersperse");
lf[111]=C_decode_literal(C_heaptop,"\376B\000\000\002, ");
lf[112]=C_h_intern(&lf[112],6,"unzip1");
lf[113]=C_h_intern(&lf[113],10,"yes-or-no\077");
lf[114]=C_h_intern(&lf[114],8,"\000default");
lf[115]=C_decode_literal(C_heaptop,"\376B\000\000\002no");
lf[116]=C_h_intern(&lf[116],6,"\000abort");
lf[117]=C_h_intern(&lf[117],21,"setup-api#abort-setup");
lf[118]=C_h_intern(&lf[118],18,"string-concatenate");
lf[119]=C_decode_literal(C_heaptop,"\376B\000\000:The following installed extensions are outdated, because `");
lf[120]=C_decode_literal(C_heaptop,"\376B\000\000\033\047 requires later versions:\012");
lf[121]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\0000\012Do you want to replace the existing extensions\077\376\377\016");
lf[122]=C_h_intern(&lf[122],7,"sprintf");
lf[123]=C_h_intern(&lf[123],17,"get-output-string");
lf[124]=C_h_intern(&lf[124],16,"\003syswrite-char-0");
lf[125]=C_decode_literal(C_heaptop,"\376B\000\000\036\047 overrides required version `");
lf[126]=C_decode_literal(C_heaptop,"\376B\000\000\020\047 of extension `");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\011version `");
lf[128]=C_h_intern(&lf[128],18,"open-output-string");
lf[129]=C_decode_literal(C_heaptop,"\376B\000\000\003\077\077\077");
lf[130]=C_h_intern(&lf[130],4,"conc");
lf[131]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000\002 (");
lf[133]=C_decode_literal(C_heaptop,"\376B\000\000\004 -> ");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[135]=C_h_intern(&lf[135],14,"string->symbol");
lf[136]=C_h_intern(&lf[136],10,"filter-map");
lf[137]=C_decode_literal(C_heaptop,"\376B\000\000\012 missing: ");
lf[138]=C_decode_literal(C_heaptop,"\376B\000\000\002, ");
lf[140]=C_decode_literal(C_heaptop,"\376B\000\000\033checking dependencies for `");
lf[141]=C_decode_literal(C_heaptop,"\376B\000\000\005\047 ...");
lf[142]=C_decode_literal(C_heaptop,"\376B\000\000)extension is not targeted for this system");
lf[143]=C_h_intern(&lf[143],8,"platform");
lf[144]=C_h_intern(&lf[144],8,"feature\077");
lf[145]=C_h_intern(&lf[145],3,"and");
lf[146]=C_h_intern(&lf[146],5,"every");
lf[147]=C_h_intern(&lf[147],3,"any");
lf[148]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid `platform\047 property");
lf[149]=C_h_intern(&lf[149],3,"not");
lf[150]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid `platform\047 property");
lf[151]=C_decode_literal(C_heaptop,"\376B\000\000\027checking platform for `");
lf[152]=C_decode_literal(C_heaptop,"\376B\000\000\005\047 ...");
lf[153]=C_decode_literal(C_heaptop,"\376B\000\000\013extension `");
lf[154]=C_decode_literal(C_heaptop,"\376B\000\000\024\047 has no .meta file ");
lf[155]=C_decode_literal(C_heaptop,"\376B\000\000!- assuming it has no dependencies");
lf[156]=C_decode_literal(C_heaptop,"\376B\000\000\004meta");
lf[157]=C_h_intern(&lf[157],6,"delete");
lf[158]=C_h_intern(&lf[158],3,"eq\077");
lf[159]=C_h_intern(&lf[159],9,"condition");
lf[160]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[161]=C_decode_literal(C_heaptop,"\376B\000\000\023TCP connect timeout");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000\023HTTP protocol error");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[165]=C_h_intern(&lf[165],19,"print-error-message");
lf[166]=C_decode_literal(C_heaptop,"\376B\000\000\015Server error:");
lf[167]=C_h_intern(&lf[167],5,"abort");
lf[168]=C_h_intern(&lf[168],3,"exn");
lf[169]=C_h_intern(&lf[169],20,"setup-download-error");
lf[170]=C_h_intern(&lf[170],10,"http-fetch");
lf[171]=C_h_intern(&lf[171],3,"net");
lf[172]=C_h_intern(&lf[172],33,"setup-download#retrieve-extension");
lf[173]=C_h_intern(&lf[173],8,"\000version");
lf[174]=C_h_intern(&lf[174],12,"\000destination");
lf[175]=C_h_intern(&lf[175],6,"\000tests");
lf[176]=C_h_intern(&lf[176],9,"\000username");
lf[177]=C_h_intern(&lf[177],9,"\000password");
lf[178]=C_h_intern(&lf[178],6,"\000trunk");
lf[179]=C_h_intern(&lf[179],11,"\000proxy-host");
lf[180]=C_h_intern(&lf[180],11,"\000proxy-port");
lf[181]=C_h_intern(&lf[181],16,"\000proxy-user-pass");
lf[182]=C_h_intern(&lf[182],6,"\000clean");
lf[183]=C_h_intern(&lf[183],22,"with-exception-handler");
lf[184]=C_h_intern(&lf[184],30,"call-with-current-continuation");
lf[185]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[186]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[187]=C_decode_literal(C_heaptop,"\376B\000\000\014 located at ");
lf[188]=C_decode_literal(C_heaptop,"\376B\000\000\036extension or version not found");
lf[189]=C_h_intern(&lf[189],9,"directory");
lf[190]=C_decode_literal(C_heaptop,"\376B\000\000&\047 overrides explicitly given version `");
lf[191]=C_decode_literal(C_heaptop,"\376B\000\000\020\047 of extension `");
lf[192]=C_decode_literal(C_heaptop,"\376B\000\000\011version `");
lf[193]=C_decode_literal(C_heaptop,"\376B\000\000\014overriding: ");
lf[194]=C_decode_literal(C_heaptop,"\376B\000\000\016retrieving ...");
lf[195]=C_h_intern(&lf[195],26,"setup-api#remove-directory");
lf[196]=C_h_intern(&lf[196],34,"setup-download#temporary-directory");
lf[197]=C_h_intern(&lf[197],14,"symbol->string");
lf[198]=C_decode_literal(C_heaptop,"\376B\000\000\035internal error - bad egg spec");
lf[199]=C_decode_literal(C_heaptop,"\376B\000\000\007mapped ");
lf[200]=C_decode_literal(C_heaptop,"\376B\000\000\004 to ");
lf[201]=C_h_intern(&lf[201],5,"lset=");
lf[202]=C_h_intern(&lf[202],17,"delete-duplicates");
lf[203]=C_h_intern(&lf[203],4,"find");
lf[204]=C_h_intern(&lf[204],10,"append-map");
lf[206]=C_decode_literal(C_heaptop,"\376B\000\000/shell command terminated with nonzero exit code");
lf[207]=C_h_intern(&lf[207],6,"system");
lf[208]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[209]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[211]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[213]=C_h_intern(&lf[213],23,"irregex-match-substring");
lf[214]=C_h_intern(&lf[214],24,"get-environment-variable");
lf[215]=C_decode_literal(C_heaptop,"\376B\000\000\012proxy_auth");
lf[216]=C_h_intern(&lf[216],13,"irregex-match");
lf[217]=C_decode_literal(C_heaptop,"\376B\000\000\033(http://)\077([^:]+):\077([0-9]\052)");
lf[219]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[220]=C_decode_literal(C_heaptop,"\376B\000\000\007unknown");
lf[221]=C_decode_literal(C_heaptop,"\376B\000\000\005trunk");
lf[222]=C_h_intern(&lf[222],25,"\003sysimplicit-exit-handler");
lf[223]=C_h_intern(&lf[223],7,"newline");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000B`-deploy\047 only makes sense in combination with `-prefix DIRECTORY`");
lf[225]=C_h_intern(&lf[225],19,"setup-api#copy-file");
lf[226]=C_h_intern(&lf[226],15,"repository-path");
lf[227]=C_h_intern(&lf[227],5,"write");
lf[228]=C_h_intern(&lf[228],19,"with-output-to-file");
lf[229]=C_h_intern(&lf[229],8,"string<\077");
lf[230]=C_h_intern(&lf[230],4,"sort");
lf[231]=C_h_intern(&lf[231],18,"\003sysmodule-exports");
lf[232]=C_h_intern(&lf[232],6,"syntax");
lf[233]=C_h_intern(&lf[233],5,"value");
lf[234]=C_h_intern(&lf[234],6,"print\052");
lf[235]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[236]=C_h_intern(&lf[236],15,"\003sysmodule-name");
lf[237]=C_h_intern(&lf[237],16,"\003sysmodule-table");
lf[238]=C_decode_literal(C_heaptop,"\376B\000\000\023generating database");
lf[239]=C_h_intern(&lf[239],20,"\003syswarnings-enabled");
lf[240]=C_decode_literal(C_heaptop,"\376B\000\000\027Failed to import from `");
lf[241]=C_h_intern(&lf[241],6,"import");
lf[242]=C_h_intern(&lf[242],4,"eval");
lf[243]=C_h_intern(&lf[243],16,"\003sysdynamic-wind");
lf[244]=C_decode_literal(C_heaptop,"\376B\000\000\034loading import libraries ...");
lf[245]=C_h_intern(&lf[245],7,"irregex");
lf[246]=C_decode_literal(C_heaptop,"\376B\000\000\034.\052/([^/]+)\134.import\134.(scm|so)");
lf[247]=C_h_intern(&lf[247],26,"create-temporary-directory");
lf[248]=C_h_intern(&lf[248],4,"glob");
lf[249]=C_decode_literal(C_heaptop,"\376B\000\000\012\052.import.\052");
lf[250]=C_h_intern(&lf[250],2,"pp");
lf[251]=C_h_intern(&lf[251],6,"cadadr");
lf[252]=C_h_intern(&lf[252],37,"setup-download#gather-egg-information");
lf[253]=C_h_intern(&lf[253],7,"display");
lf[254]=C_h_intern(&lf[254],30,"setup-download#list-extensions");
lf[255]=C_h_intern(&lf[255],6,"\000quiet");
lf[256]=C_h_intern(&lf[256],16,"change-directory");
lf[257]=C_decode_literal(C_heaptop,"\376B\000\000\023~a -s run.scm ~a ~a");
lf[258]=C_decode_literal(C_heaptop,"\376B\000\000$\012nevertheless trying to continue ...");
lf[259]=C_decode_literal(C_heaptop,"\376B\000\000\007testing");
lf[260]=C_decode_literal(C_heaptop,"\376B\000\000\014 extension `");
lf[261]=C_decode_literal(C_heaptop,"\376B\000\000\011\047 failed:");
lf[262]=C_decode_literal(C_heaptop,"\376B\000\000\005tests");
lf[263]=C_decode_literal(C_heaptop,"\376B\000\000\015tests/run.scm");
lf[264]=C_h_intern(&lf[264],10,"directory\077");
lf[265]=C_decode_literal(C_heaptop,"\376B\000\000\005tests");
lf[266]=C_decode_literal(C_heaptop,"\376B\000\000\005tests");
lf[267]=C_decode_literal(C_heaptop,"\376B\000\000\012installing");
lf[268]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[269]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[270]=C_decode_literal(C_heaptop,"\376B\000\000\034-e \042(setup-error-handling)\042 ");
lf[271]=C_decode_literal(C_heaptop,"\376B\000\000\027 -e \042(sudo-install #t)\042");
lf[272]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[273]=C_decode_literal(C_heaptop,"\376B\000\000\035 -e \042(keep-intermediates #t)\042");
lf[274]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[275]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[276]=C_decode_literal(C_heaptop,"\376B\000\000\035 -e \042(setup-install-mode #f)\042");
lf[277]=C_decode_literal(C_heaptop,"\376B\000\000\031 -e \042(host-extension #t)\042");
lf[278]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[279]=C_decode_literal(C_heaptop,"\376B\000\000\032 -e \042(deployment-mode #t)\042");
lf[280]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[281]=C_decode_literal(C_heaptop,"\376B\000\000\006 -bnq ");
lf[282]=C_decode_literal(C_heaptop,"\376B\000\0009-e \042(require-library setup-api)\042 -e \042(import setup-api)\042 ");
lf[283]=C_h_intern(&lf[283],19,"setup-api#shellpath");
lf[284]=C_decode_literal(C_heaptop,"\376B\000\000\006.setup");
lf[285]=C_decode_literal(C_heaptop,"\376B\000\000\002)\042");
lf[286]=C_decode_literal(C_heaptop,"\376B\000\000\031 -e \042(extra-nonfeatures \047");
lf[287]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[288]=C_decode_literal(C_heaptop,"\376B\000\000\002)\042");
lf[289]=C_decode_literal(C_heaptop,"\376B\000\000\026 -e \042(extra-features \047");
lf[290]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[291]=C_decode_literal(C_heaptop,"\376B\000\000\004\134\042)\042");
lf[292]=C_h_intern(&lf[292],18,"normalize-pathname");
lf[293]=C_h_intern(&lf[293],4,"unix");
lf[294]=C_decode_literal(C_heaptop,"\376B\000\000\027 -e \042(runtime-prefix \134\042");
lf[295]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[296]=C_decode_literal(C_heaptop,"\376B\000\000\004\134\042)\042");
lf[297]=C_decode_literal(C_heaptop,"\376B\000\000\033 -e \042(destination-prefix \134\042");
lf[298]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[299]=C_h_intern(&lf[299],22,"setup-api#sudo-install");
lf[300]=C_decode_literal(C_heaptop,"\376B\000\000\005\134\042))\042");
lf[301]=C_decode_literal(C_heaptop,"\376B\000\000\005\134\042 \134\042");
lf[302]=C_decode_literal(C_heaptop,"\376B\000\000$-e \042(extension-name-and-version \047(\134\042");
lf[303]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[304]=C_decode_literal(C_heaptop,"\376B\000\000\014-setup-mode ");
lf[305]=C_h_intern(&lf[305],1,"\052");
lf[306]=C_decode_literal(C_heaptop,"\376B\000\000\001o");
lf[307]=C_decode_literal(C_heaptop,"\376B\000\000\002so");
lf[308]=C_decode_literal(C_heaptop,"\376B\000\000\003dll");
lf[309]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[310]=C_h_intern(&lf[310],3,"seq");
lf[311]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[312]=C_h_intern(&lf[312],12,"delete-file\052");
lf[313]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[314]=C_h_intern(&lf[314],10,"find-files");
lf[315]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[316]=C_h_intern(&lf[316],5,"\000test");
lf[317]=C_h_intern(&lf[317],7,"\000action");
lf[318]=C_decode_literal(C_heaptop,"\376B\000\000\033deleting stale binaries ...");
lf[319]=C_decode_literal(C_heaptop,"\376B\000\000\033deleting stale binaries ...");
lf[320]=C_h_intern(&lf[320],12,"dynamic-wind");
lf[321]=C_decode_literal(C_heaptop,"\376B\000\000\036changing current directory to ");
lf[322]=C_decode_literal(C_heaptop,"\376B\000\000\031installing for target ...");
lf[323]=C_decode_literal(C_heaptop,"\376B\000\000\005xcopy");
lf[324]=C_decode_literal(C_heaptop,"\376B\000\000\005cp -r");
lf[325]=C_decode_literal(C_heaptop,"\376B\000\000\010~a ~a ~a");
lf[326]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[327]=C_decode_literal(C_heaptop,"\376B\000\000\047copying sources for target installation");
lf[328]=C_decode_literal(C_heaptop,"\376B\000\000\013installing ");
lf[329]=C_decode_literal(C_heaptop,"\376B\000\000\004 ...");
lf[330]=C_decode_literal(C_heaptop,"\376B\000\000\026aborting installation.");
lf[331]=C_h_intern(&lf[331],17,"\003sysstring-append");
lf[332]=C_decode_literal(C_heaptop,"\376B\000\000@You specified `-no-install\047, but this extension has dependencies");
lf[333]=C_decode_literal(C_heaptop,"\376B\000\000C that are required for building.\012Do you still want to install them\077");
lf[334]=C_h_intern(&lf[334],4,"iota");
lf[335]=C_decode_literal(C_heaptop,"\376B\000\000\016install order:");
lf[336]=C_h_intern(&lf[336],7,"fprintf");
lf[337]=C_decode_literal(C_heaptop,"\376B\000\000\002\012\012");
lf[338]=C_decode_literal(C_heaptop,"\376B\000\000\030\012Unresolved dependency: ");
lf[339]=C_h_intern(&lf[339],10,"list-index");
lf[340]=C_h_intern(&lf[340],16,"topological-sort");
lf[341]=C_h_intern(&lf[341],8,"string=\077");
lf[342]=C_h_intern(&lf[342],6,"remove");
lf[343]=C_decode_literal(C_heaptop,"\376B\000\000;no default location defined - please use `-location\047 option");
lf[344]=C_decode_literal(C_heaptop,"\376B\000\000=no default transport defined - please use `-transport\047 option");
lf[345]=C_decode_literal(C_heaptop,"\376B\000\0009 currently installed extensions - do you want to proceed\077");
lf[346]=C_decode_literal(C_heaptop,"\376B\000\000\030About to re-install all ");
lf[347]=C_h_intern(&lf[347],6,"equal\077");
lf[348]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[349]=C_h_intern(&lf[349],8,"egg-name");
lf[350]=C_decode_literal(C_heaptop,"\376B\000\000Dinstalled extension has no information about which egg it belongs to");
lf[351]=C_h_intern(&lf[351],13,"pathname-file");
lf[352]=C_h_intern(&lf[352],9,"read-file");
lf[353]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[354]=C_decode_literal(C_heaptop,"\376B\000\000\012setup-info");
lf[355]=C_decode_literal(C_heaptop,"\376B\000\000\010chicken/");
lf[356]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[357]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[358]=C_decode_literal(C_heaptop,"\376B\000\000\033no setup-scripts to process");
lf[359]=C_decode_literal(C_heaptop,"\376B\000\000\007\052.setup");
lf[360]=C_decode_literal(C_heaptop,"\376B\000\000\036invalid entry in defaults file");
lf[361]=C_decode_literal(C_heaptop,"\376B\000\000$\047 does not match setup-API version (");
lf[362]=C_decode_literal(C_heaptop,"\376B\000\000\026version of installed `");
lf[363]=C_h_intern(&lf[363],6,"server");
lf[364]=C_h_intern(&lf[364],8,"split-at");
lf[365]=C_h_intern(&lf[365],2,"->");
lf[366]=C_h_intern(&lf[366],5,"alias");
lf[367]=C_h_intern(&lf[367],7,"string\077");
lf[368]=C_h_intern(&lf[368],8,"override");
lf[369]=C_h_intern(&lf[369],4,"hack");
lf[370]=C_h_intern(&lf[370],12,"chicken-home");
lf[371]=C_decode_literal(C_heaptop,"\376B\000\000\005-help");
lf[372]=C_decode_literal(C_heaptop,"\376B\000\012\007usage: chicken-install [OPTION | EXTENSION[:VERSION]] ...\012\012  -h   -help    "
"                show this message and exit\012       -version                 show "
"version and exit\012       -force                   don\047t ask, install even if vers"
"ions don\047t match\012  -k   -keep                    keep temporary files\012  -x   -ke"
"ep-installed          install only if not already installed\012       -reinstall   "
"            reinstall all currently installed extensions\012  -l   -location LOCATI"
"ON       install from given location instead of default\012  -t   -transport TRANSP"
"ORT     use given transport instead of default\012       -proxy HOST[:PORT]       d"
"ownload via HTTP proxy\012  -s   -sudo                    use sudo(1) for filesyste"
"m operations\012  -r   -retrieve                only retrieve egg into current dire"
"ctory, don\047t install\012  -n   -no-install              do not install, just build "
"(implies `-keep\047)\012  -p   -prefix PREFIX           change installation prefix to "
"PREFIX\012       -list                    list extensions available over selected t"
"ransport and location\012       -host                    when cross-compiling, comp"
"ile extension only for host\012       -target                  when cross-compiling"
", compile extension only for target\012       -test                    run included"
" test-cases, if available\012       -username USER           set username for trans"
"ports that require this\012       -password PASS           set password for transpo"
"rts that require this\012  -i   -init DIRECTORY          initialize empty alternati"
"ve repository\012  -u   -update-db               update export database\012       -rep"
"ository              print path used for egg installation\012       -deploy        "
"          build extensions for deployment\012       -trunk                   build "
"trunk instead of tagged version (only local)\012  -D   -feature FEATURE         fea"
"tures to pass to sub-invocations of `csc\047\012       -debug                   enable"
" full display of error message information\012       -keep-going              conti"
"nue installation even if dependency fails\012       -scan DIRECTORY          scan l"
"ocal directory for highest available egg versions\012       -override FILENAME     "
"  override versions for installed eggs with information from file\012       -csi FI"
"LENAME            use given pathname for invocations of \042csi\042\012       -show-depen"
"ds            display a list of egg dependencies for the given egg(s)\012       -sh"
"ow-foreign-depends    display a list of foreign dependencies for the given egg(s"
")\012\012chicken-install recognizes the http_proxy, and proxy_auth environment variabl"
"es, if set.\012");
lf[373]=C_decode_literal(C_heaptop,"\376B\000\000\013-repository");
lf[374]=C_decode_literal(C_heaptop,"\376B\000\000\006-force");
lf[375]=C_decode_literal(C_heaptop,"\376B\000\000\002-k");
lf[376]=C_decode_literal(C_heaptop,"\376B\000\000\005-keep");
lf[377]=C_decode_literal(C_heaptop,"\376B\000\000\002-s");
lf[378]=C_decode_literal(C_heaptop,"\376B\000\000\005-sudo");
lf[379]=C_decode_literal(C_heaptop,"\376B\000\000\002-r");
lf[380]=C_decode_literal(C_heaptop,"\376B\000\000\011-retrieve");
lf[381]=C_decode_literal(C_heaptop,"\376B\000\000\002-l");
lf[382]=C_decode_literal(C_heaptop,"\376B\000\000\011-location");
lf[383]=C_decode_literal(C_heaptop,"\376B\000\000\002-t");
lf[384]=C_decode_literal(C_heaptop,"\376B\000\000\012-transport");
lf[385]=C_decode_literal(C_heaptop,"\376B\000\000\002-p");
lf[386]=C_decode_literal(C_heaptop,"\376B\000\000\007-prefix");
lf[387]=C_decode_literal(C_heaptop,"\376B\000\000\002-n");
lf[388]=C_decode_literal(C_heaptop,"\376B\000\000\013-no-install");
lf[389]=C_decode_literal(C_heaptop,"\376B\000\000\010-version");
lf[390]=C_decode_literal(C_heaptop,"\376B\000\000\002-u");
lf[391]=C_decode_literal(C_heaptop,"\376B\000\000\012-update-db");
lf[392]=C_decode_literal(C_heaptop,"\376B\000\000\002-i");
lf[393]=C_decode_literal(C_heaptop,"\376B\000\000\005-init");
lf[394]=C_decode_literal(C_heaptop,"\376B\000\000\004copy");
lf[395]=C_decode_literal(C_heaptop,"\376B\000\000\005cp -r");
lf[396]=C_decode_literal(C_heaptop,"\376B\000\000\010~a ~a ~a");
lf[397]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\014setup-api.so\376\003\000\000\002\376B\000\000\023setup-api.import.so\376\003\000\000\002\376B\000\000\021setup-download.so\376\003"
"\000\000\002\376B\000\000\030setup-download.import.so\376\003\000\000\002\376B\000\000\021chicken.import.so\376\003\000\000\002\376B\000\000\021lolevel.imp"
"ort.so\376\003\000\000\002\376B\000\000\020srfi-1.import.so\376\003\000\000\002\376B\000\000\020srfi-4.import.so\376\003\000\000\002\376B\000\000\031data-structu"
"res.import.so\376\003\000\000\002\376B\000\000\017ports.import.so\376\003\000\000\002\376B\000\000\017files.import.so\376\003\000\000\002\376B\000\000\017posix.i"
"mport.so\376\003\000\000\002\376B\000\000\021srfi-13.import.so\376\003\000\000\002\376B\000\000\021srfi-69.import.so\376\003\000\000\002\376B\000\000\020extras.i"
"mport.so\376\003\000\000\002\376B\000\000\021srfi-14.import.so\376\003\000\000\002\376B\000\000\015tcp.import.so\376\003\000\000\002\376B\000\000\021foreign.impo"
"rt.so\376\003\000\000\002\376B\000\000\021srfi-18.import.so\376\003\000\000\002\376B\000\000\017utils.import.so\376\003\000\000\002\376B\000\000\015csi.import.so"
"\376\003\000\000\002\376B\000\000\021irregex.import.so\376\003\000\000\002\376B\000\000\010types.db\376\377\016");
lf[398]=C_decode_literal(C_heaptop,"\376B\000\000\032copying required files to ");
lf[399]=C_decode_literal(C_heaptop,"\376B\000\000\004 ...");
lf[400]=C_decode_literal(C_heaptop,"\376B\000\000\006-proxy");
lf[401]=C_decode_literal(C_heaptop,"\376B\000\000\002-D");
lf[402]=C_decode_literal(C_heaptop,"\376B\000\000\010-feature");
lf[403]=C_decode_literal(C_heaptop,"\376B\000\000\013-no-feature");
lf[404]=C_decode_literal(C_heaptop,"\376B\000\000\005-test");
lf[405]=C_decode_literal(C_heaptop,"\376B\000\000\005-host");
lf[406]=C_decode_literal(C_heaptop,"\376B\000\000\007-target");
lf[407]=C_decode_literal(C_heaptop,"\376B\000\000\006-debug");
lf[408]=C_decode_literal(C_heaptop,"\376B\000\000\007-deploy");
lf[409]=C_decode_literal(C_heaptop,"\376B\000\000\011-username");
lf[410]=C_decode_literal(C_heaptop,"\376B\000\000\005-scan");
lf[411]=C_decode_literal(C_heaptop,"\376B\000\000\011-override");
lf[412]=C_decode_literal(C_heaptop,"\376B\000\000\002-x");
lf[413]=C_decode_literal(C_heaptop,"\376B\000\000\017-keep-installed");
lf[414]=C_decode_literal(C_heaptop,"\376B\000\000\012-reinstall");
lf[415]=C_decode_literal(C_heaptop,"\376B\000\000\006-trunk");
lf[416]=C_decode_literal(C_heaptop,"\376B\000\000\013-keep-going");
lf[417]=C_decode_literal(C_heaptop,"\376B\000\000\005-list");
lf[418]=C_decode_literal(C_heaptop,"\376B\000\000\004-csi");
lf[419]=C_decode_literal(C_heaptop,"\376B\000\000\011-password");
lf[420]=C_decode_literal(C_heaptop,"\376B\000\000\015-show-depends");
lf[421]=C_decode_literal(C_heaptop,"\376B\000\000\025-show-foreign-depends");
lf[422]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000h\376\003\000\000\002\376\377\012\000\000k\376\003\000\000\002\376\377\012\000\000l\376\003\000\000\002\376\377\012\000\000t\376\003\000\000\002\376\377\012\000\000s\376\003\000\000\002\376\377\012\000\000p\376\003\000\000\002\376\377\012\000\000r\376\003\000"
"\000\002\376\377\012\000\000n\376\003\000\000\002\376\377\012\000\000v\376\003\000\000\002\376\377\012\000\000i\376\003\000\000\002\376\377\012\000\000u\376\003\000\000\002\376\377\012\000\000D\376\377\016");
lf[423]=C_h_intern(&lf[423],16,"\003sysstring->list");
lf[424]=C_h_intern(&lf[424],9,"substring");
lf[425]=C_decode_literal(C_heaptop,"\376B\000\000\005setup");
lf[426]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[427]=C_h_intern(&lf[427],18,"pathname-directory");
lf[428]=C_h_intern(&lf[428],18,"pathname-extension");
lf[429]=C_decode_literal(C_heaptop,"\376B\000\000\002-h");
lf[430]=C_decode_literal(C_heaptop,"\376B\000\000\006--help");
lf[431]=C_decode_literal(C_heaptop,"\376B\000\000\012http_proxy");
lf[432]=C_decode_literal(C_heaptop,"\376B\000\000\014([^:]+):(.+)");
lf[433]=C_h_intern(&lf[433],22,"command-line-arguments");
lf[434]=C_h_intern(&lf[434],17,"register-feature!");
lf[435]=C_h_intern(&lf[435],15,"chicken-install");
lf[436]=C_h_intern(&lf[436],14,"\000cross-chicken");
lf[437]=C_decode_literal(C_heaptop,"\376B\000\000\003bin");
lf[438]=C_decode_literal(C_heaptop,"\376B\000\000\016CHICKEN_PREFIX");
lf[439]=C_h_intern(&lf[439],11,"\003sysrequire");
lf[440]=C_h_intern(&lf[440],9,"setup-api");
lf[441]=C_h_intern(&lf[441],14,"setup-download");
C_register_lf2(lf,442,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2286,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k6447 in k6382 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_ccall f_6449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:878: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* a4167 in k4155 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in ... */
static void C_ccall f_4168(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4168,4,t0,t1,t2,t3);}
t4=t2;
t5=t3;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4172,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_i_not(t4);
if(C_truep(t7)){
if(C_truep(t7)){
/* chicken-install.scm:447: error */
t8=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t6,lf[188]);}
else{
t8=t6;
f_4172(2,t8,C_SCHEME_UNDEFINED);}}
else{
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4199,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:446: directory */
t9=C_fast_retrieve(lf[189]);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t4);}}

/* k3867 in g643 in k3856 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in ... */
static void C_ccall f_3869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_cadr(((C_word*)t0)[3]));}

/* g643 in k3856 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in ... */
static void C_fcall f_3865(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3865,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3869,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3875,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t5=C_i_cadr(t2);
t6=C_u_i_cdr(((C_word*)t0)[2]);
t7=C_i_equalp(t5,t6);
t8=t4;
f_3875(t8,C_i_not(t7));}
else{
t5=t4;
f_3875(t5,C_SCHEME_FALSE);}}

/* k4170 in a4167 in k4155 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in ... */
static void C_ccall f_4172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4172,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4175,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:448: print */
t3=*((C_word*)lf[69]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[186],((C_word*)t0)[2],lf[187],((C_word*)t0)[3]);}

/* k4173 in k4170 in a4167 in k4155 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in ... */
static void C_ccall f_4175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4175,2,t0,t1);}
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=C_a_i_cons(&a,2,t2,C_retrieve2(lf[63],"main#\052eggs+dirs+vers\052"));
t4=C_mutate2(&lf[63] /* (set! main#*eggs+dirs+vers* ...) */,t3);
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k6476 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_6478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:905: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* k3873 in g643 in k3856 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in ... */
static void C_fcall f_3875(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3875,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3882,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:403: open-output-string */
t3=C_fast_retrieve(lf[128]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* chicken-install.scm:407: print */
t2=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[193],((C_word*)t0)[5]);}}

/* k2565 in k2469 in g249 in k2848 in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_ccall f_2567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(&lf[22] /* (set! main#*mappings* ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* g293 in k2469 in g249 in k2848 in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_fcall f_2569(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2569,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2573,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2600,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:154: list-index */
t5=C_fast_retrieve(lf[339]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,t2);}

/* k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in ... */
static void C_fcall f_6467(C_word t0,C_word t1){
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
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6467,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f7912,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:783: print */
t4=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[372]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[373]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6478,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6485,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:904: repository-path */
t4=C_fast_retrieve(lf[226]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[374]))){
t2=lf[7] /* main#*force* */ =C_SCHEME_TRUE;;
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* chicken-install.scm:908: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_6207(t5,((C_word*)t0)[2],t4,((C_word*)((C_word*)t0)[6])[1]);}
else{
t2=C_u_i_string_equal_p(((C_word*)t0)[3],lf[375]);
t3=(C_truep(t2)?t2:C_u_i_string_equal_p(((C_word*)t0)[3],lf[376]));
if(C_truep(t3)){
t4=lf[5] /* main#*keep* */ =C_SCHEME_TRUE;;
t5=((C_word*)t0)[4];
t6=C_u_i_cdr(t5);
/* chicken-install.scm:911: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_6207(t7,((C_word*)t0)[2],t6,((C_word*)((C_word*)t0)[6])[1]);}
else{
t4=C_u_i_string_equal_p(((C_word*)t0)[3],lf[377]);
t5=(C_truep(t4)?t4:C_u_i_string_equal_p(((C_word*)t0)[3],lf[378]));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6521,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:913: setup-api#sudo-install */
((C_proc3)C_fast_retrieve_symbol_proc(lf[299]))(3,*((C_word*)lf[299]+1),t6,C_SCHEME_TRUE);}
else{
t6=C_u_i_string_equal_p(((C_word*)t0)[3],lf[379]);
t7=(C_truep(t6)?t6:C_u_i_string_equal_p(((C_word*)t0)[3],lf[380]));
if(C_truep(t7)){
t8=lf[9] /* main#*retrieve-only* */ =C_SCHEME_TRUE;;
t9=((C_word*)t0)[4];
t10=C_u_i_cdr(t9);
/* chicken-install.scm:917: loop */
t11=((C_word*)((C_word*)t0)[5])[1];
f_6207(t11,((C_word*)t0)[2],t10,((C_word*)((C_word*)t0)[6])[1]);}
else{
t8=C_u_i_string_equal_p(((C_word*)t0)[3],lf[381]);
t9=(C_truep(t8)?t8:C_u_i_string_equal_p(((C_word*)t0)[3],lf[382]));
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6551,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t11=((C_word*)t0)[4];
t12=C_u_i_cdr(t11);
if(C_truep(C_i_pairp(t12))){
t13=t10;
f_6551(2,t13,C_SCHEME_UNDEFINED);}
else{
t13=t10;
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f7917,a[2]=t13,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:783: print */
t15=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t15+1)))(3,t15,t14,lf[372]);}}
else{
t10=C_u_i_string_equal_p(((C_word*)t0)[3],lf[383]);
t11=(C_truep(t10)?t10:C_u_i_string_equal_p(((C_word*)t0)[3],lf[384]));
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6580,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t13=((C_word*)t0)[4];
t14=C_u_i_cdr(t13);
if(C_truep(C_i_pairp(t14))){
t15=t12;
f_6580(2,t15,C_SCHEME_UNDEFINED);}
else{
t15=t12;
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f7922,a[2]=t15,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:783: print */
t17=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t17+1)))(3,t17,t16,lf[372]);}}
else{
t12=C_u_i_string_equal_p(((C_word*)t0)[3],lf[385]);
t13=(C_truep(t12)?t12:C_u_i_string_equal_p(((C_word*)t0)[3],lf[386]));
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6613,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t15=((C_word*)t0)[4];
t16=C_u_i_cdr(t15);
if(C_truep(C_i_pairp(t16))){
t17=t14;
f_6613(2,t17,C_SCHEME_UNDEFINED);}
else{
t17=t14;
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f7927,a[2]=t17,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:783: print */
t19=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t19+1)))(3,t19,t18,lf[372]);}}
else{
t14=C_u_i_string_equal_p(((C_word*)t0)[3],lf[387]);
t15=(C_truep(t14)?t14:C_u_i_string_equal_p(((C_word*)t0)[3],lf[388]));
if(C_truep(t15)){
t16=lf[5] /* main#*keep* */ =C_SCHEME_TRUE;;
t17=lf[10] /* main#*no-install* */ =C_SCHEME_TRUE;;
t18=((C_word*)t0)[4];
t19=C_u_i_cdr(t18);
/* chicken-install.scm:938: loop */
t20=((C_word*)((C_word*)t0)[5])[1];
f_6207(t20,((C_word*)t0)[2],t19,((C_word*)((C_word*)t0)[6])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[389]))){
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6671,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6678,a[2]=t16,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:940: chicken-version */
t18=C_fast_retrieve(lf[45]);
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,t17);}
else{
t16=C_u_i_string_equal_p(((C_word*)t0)[3],lf[390]);
t17=(C_truep(t16)?t16:C_u_i_string_equal_p(((C_word*)t0)[3],lf[391]));
if(C_truep(t17)){
t18=C_set_block_item(((C_word*)t0)[7],0,C_SCHEME_TRUE);
t19=((C_word*)t0)[4];
t20=C_u_i_cdr(t19);
/* chicken-install.scm:944: loop */
t21=((C_word*)((C_word*)t0)[5])[1];
f_6207(t21,((C_word*)t0)[2],t20,((C_word*)((C_word*)t0)[6])[1]);}
else{
t18=C_u_i_string_equal_p(((C_word*)t0)[3],lf[392]);
t19=(C_truep(t18)?t18:C_u_i_string_equal_p(((C_word*)t0)[3],lf[393]));
if(C_truep(t19)){
t20=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6703,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t21=((C_word*)t0)[4];
t22=C_u_i_cdr(t21);
if(C_truep(C_i_pairp(t22))){
t23=t20;
f_6703(2,t23,C_SCHEME_UNDEFINED);}
else{
t23=t20;
t24=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f7934,a[2]=t23,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:783: print */
t25=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t25+1)))(3,t25,t24,lf[372]);}}
else{
if(C_truep(C_u_i_string_equal_p(lf[400],((C_word*)t0)[3]))){
t20=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6729,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t21=((C_word*)t0)[4];
t22=C_u_i_cdr(t21);
if(C_truep(C_i_pairp(t22))){
t23=t20;
f_6729(2,t23,C_SCHEME_UNDEFINED);}
else{
t23=t20;
t24=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f7939,a[2]=t23,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:783: print */
t25=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t25+1)))(3,t25,t24,lf[372]);}}
else{
t20=C_u_i_string_equal_p(lf[401],((C_word*)t0)[3]);
t21=(C_truep(t20)?t20:C_u_i_string_equal_p(lf[402],((C_word*)t0)[3]));
if(C_truep(t21)){
t22=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6762,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t23=((C_word*)t0)[4];
t24=C_u_i_cdr(t23);
if(C_truep(C_i_pairp(t24))){
t25=t22;
f_6762(2,t25,C_SCHEME_UNDEFINED);}
else{
t25=t22;
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f7944,a[2]=t25,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:783: print */
t27=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t27+1)))(3,t27,t26,lf[372]);}}
else{
if(C_truep(C_u_i_string_equal_p(lf[403],((C_word*)t0)[3]))){
t22=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6796,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t23=((C_word*)t0)[4];
t24=C_u_i_cdr(t23);
if(C_truep(C_i_pairp(t24))){
t25=t22;
f_6796(2,t25,C_SCHEME_UNDEFINED);}
else{
t25=t22;
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f7949,a[2]=t25,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:783: print */
t27=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t27+1)))(3,t27,t26,lf[372]);}}
else{
if(C_truep(C_u_i_string_equal_p(lf[404],((C_word*)t0)[3]))){
t22=lf[8] /* main#*run-tests* */ =C_SCHEME_TRUE;;
t23=((C_word*)t0)[4];
t24=C_u_i_cdr(t23);
/* chicken-install.scm:965: loop */
t25=((C_word*)((C_word*)t0)[5])[1];
f_6207(t25,((C_word*)t0)[2],t24,((C_word*)((C_word*)t0)[6])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[405],((C_word*)t0)[3]))){
t22=lf[31] /* main#*target-extension* */ =C_SCHEME_FALSE;;
t23=((C_word*)t0)[4];
t24=C_u_i_cdr(t23);
/* chicken-install.scm:968: loop */
t25=((C_word*)((C_word*)t0)[5])[1];
f_6207(t25,((C_word*)t0)[2],t24,((C_word*)((C_word*)t0)[6])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[406],((C_word*)t0)[3]))){
t22=lf[30] /* main#*host-extension* */ =C_SCHEME_FALSE;;
t23=((C_word*)t0)[4];
t24=C_u_i_cdr(t23);
/* chicken-install.scm:971: loop */
t25=((C_word*)((C_word*)t0)[5])[1];
f_6207(t25,((C_word*)t0)[2],t24,((C_word*)((C_word*)t0)[6])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[407],((C_word*)t0)[3]))){
t22=lf[32] /* main#*debug-setup* */ =C_SCHEME_TRUE;;
t23=((C_word*)t0)[4];
t24=C_u_i_cdr(t23);
/* chicken-install.scm:974: loop */
t25=((C_word*)((C_word*)t0)[5])[1];
f_6207(t25,((C_word*)t0)[2],t24,((C_word*)((C_word*)t0)[6])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[408],((C_word*)t0)[3]))){
t22=lf[23] /* main#*deploy* */ =C_SCHEME_TRUE;;
t23=((C_word*)t0)[4];
t24=C_u_i_cdr(t23);
/* chicken-install.scm:977: loop */
t25=((C_word*)((C_word*)t0)[5])[1];
f_6207(t25,((C_word*)t0)[2],t24,((C_word*)((C_word*)t0)[6])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[409],((C_word*)t0)[3]))){
t22=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6885,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t23=((C_word*)t0)[4];
t24=C_u_i_cdr(t23);
if(C_truep(C_i_pairp(t24))){
t25=t22;
f_6885(2,t25,C_SCHEME_UNDEFINED);}
else{
t25=t22;
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f7954,a[2]=t25,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:783: print */
t27=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t27+1)))(3,t27,t26,lf[372]);}}
else{
if(C_truep(C_u_i_string_equal_p(lf[410],((C_word*)t0)[3]))){
t22=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6911,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t23=((C_word*)t0)[4];
t24=C_u_i_cdr(t23);
if(C_truep(C_i_pairp(t24))){
t25=t22;
f_6911(2,t25,C_SCHEME_UNDEFINED);}
else{
t25=t22;
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f7959,a[2]=t25,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:783: print */
t27=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t27+1)))(3,t27,t26,lf[372]);}}
else{
if(C_truep(C_u_i_string_equal_p(lf[411],((C_word*)t0)[3]))){
t22=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6937,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t23=((C_word*)t0)[4];
t24=C_u_i_cdr(t23);
if(C_truep(C_i_pairp(t24))){
t25=t22;
f_6937(2,t25,C_SCHEME_UNDEFINED);}
else{
t25=t22;
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f7964,a[2]=t25,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:783: print */
t27=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t27+1)))(3,t27,t26,lf[372]);}}
else{
t22=C_u_i_string_equal_p(lf[412],((C_word*)t0)[3]);
t23=(C_truep(t22)?t22:C_u_i_string_equal_p(lf[413],((C_word*)t0)[3]));
if(C_truep(t23)){
t24=lf[6] /* main#*keep-existing* */ =C_SCHEME_TRUE;;
t25=((C_word*)t0)[4];
t26=C_u_i_cdr(t25);
/* chicken-install.scm:992: loop */
t27=((C_word*)((C_word*)t0)[5])[1];
f_6207(t27,((C_word*)t0)[2],t26,((C_word*)((C_word*)t0)[6])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[414],((C_word*)t0)[3]))){
t24=lf[35] /* main#*reinstall* */ =C_SCHEME_TRUE;;
t25=((C_word*)t0)[4];
t26=C_u_i_cdr(t25);
/* chicken-install.scm:995: loop */
t27=((C_word*)((C_word*)t0)[5])[1];
f_6207(t27,((C_word*)t0)[2],t26,((C_word*)((C_word*)t0)[6])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[415],((C_word*)t0)[3]))){
t24=lf[24] /* main#*trunk* */ =C_SCHEME_TRUE;;
t25=((C_word*)t0)[4];
t26=C_u_i_cdr(t25);
/* chicken-install.scm:998: loop */
t27=((C_word*)((C_word*)t0)[5])[1];
f_6207(t27,((C_word*)t0)[2],t26,((C_word*)((C_word*)t0)[6])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[416],((C_word*)t0)[3]))){
t24=lf[33] /* main#*keep-going* */ =C_SCHEME_TRUE;;
t25=((C_word*)t0)[4];
t26=C_u_i_cdr(t25);
/* chicken-install.scm:1001: loop */
t27=((C_word*)((C_word*)t0)[5])[1];
f_6207(t27,((C_word*)t0)[2],t26,((C_word*)((C_word*)t0)[6])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[417],((C_word*)t0)[3]))){
t24=C_set_block_item(((C_word*)t0)[9],0,C_SCHEME_TRUE);
t25=((C_word*)t0)[4];
t26=C_u_i_cdr(t25);
/* chicken-install.scm:1004: loop */
t27=((C_word*)((C_word*)t0)[5])[1];
f_6207(t27,((C_word*)t0)[2],t26,((C_word*)((C_word*)t0)[6])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[418],((C_word*)t0)[3]))){
t24=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7026,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t25=((C_word*)t0)[4];
t26=C_u_i_cdr(t25);
if(C_truep(C_i_pairp(t26))){
t27=t24;
f_7026(2,t27,C_SCHEME_UNDEFINED);}
else{
t27=t24;
t28=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f7969,a[2]=t27,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:783: print */
t29=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t29+1)))(3,t29,t28,lf[372]);}}
else{
if(C_truep(C_u_i_string_equal_p(lf[419],((C_word*)t0)[3]))){
t24=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7052,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t25=((C_word*)t0)[4];
t26=C_u_i_cdr(t25);
if(C_truep(C_i_pairp(t26))){
t27=t24;
f_7052(2,t27,C_SCHEME_UNDEFINED);}
else{
t27=t24;
t28=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f7974,a[2]=t27,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:783: print */
t29=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t29+1)))(3,t29,t28,lf[372]);}}
else{
if(C_truep(C_u_i_string_equal_p(lf[420],((C_word*)t0)[3]))){
t24=lf[36] /* main#*show-depends* */ =C_SCHEME_TRUE;;
t25=((C_word*)t0)[4];
t26=C_u_i_cdr(t25);
/* chicken-install.scm:1015: loop */
t27=((C_word*)((C_word*)t0)[5])[1];
f_6207(t27,((C_word*)t0)[2],t26,((C_word*)((C_word*)t0)[6])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[421],((C_word*)t0)[3]))){
t24=lf[37] /* main#*show-foreign-depends* */ =C_SCHEME_TRUE;;
t25=((C_word*)t0)[4];
t26=C_u_i_cdr(t25);
/* chicken-install.scm:1018: loop */
t27=((C_word*)((C_word*)t0)[5])[1];
f_6207(t27,((C_word*)t0)[2],t26,((C_word*)((C_word*)t0)[6])[1]);}
else{
t24=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7098,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
t25=C_block_size(((C_word*)t0)[3]);
if(C_truep(C_fixnum_greaterp(t25,C_fix(0)))){
t26=C_subchar(((C_word*)t0)[3],C_fix(0));
t27=t24;
f_7098(t27,C_i_char_equalp(C_make_character(45),t26));}
else{
t26=t24;
f_7098(t26,C_SCHEME_FALSE);}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k5389 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in ... */
static void C_ccall f_5391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5391,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5394,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:660: print* */
t3=*((C_word*)lf[234]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[318]);}

/* k5395 in k5392 in k5389 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in ... */
static void C_ccall f_5397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:665: newline */
t2=*((C_word*)lf[223]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k5392 in k5389 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in ... */
static void C_ccall f_5394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[41],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5394,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5397,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_list(&a,2,lf[305],lf[147]);
t4=C_a_i_list(&a,5,lf[62],lf[306],lf[307],lf[308],lf[309]);
t5=C_a_i_list(&a,4,lf[310],t3,lf[311],t4);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5406,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:661: find-files */
t7=C_fast_retrieve(lf[314]);
((C_proc7)(void*)(*((C_word*)t7+1)))(7,t7,t2,lf[315],lf[316],t5,lf[317],t6);}

/* k2571 in g293 in k2469 in g249 in k2848 in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in ... */
static void C_ccall f_2573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2573,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2576,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=t3;
f_2576(2,t4,C_SCHEME_UNDEFINED);}
else{
/* chicken-install.scm:155: broken */
t4=((C_word*)t0)[4];
f_2453(t4,t3,((C_word*)t0)[5]);}}

/* k2574 in k2571 in g293 in k2469 in g249 in k2848 in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in ... */
static void C_ccall f_2576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2576,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2581,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2587,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:156: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[4],t2,t3);}

/* for-each-loop1080 in k5264 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in ... */
static void C_fcall f_5271(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5271,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5281,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* chicken-install.scm:588: g1081 */
t9=((C_word*)t0)[3];
f_4873(t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k4197 in a4167 in k4155 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in ... */
static void C_ccall f_4199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_i_nullp(t1))){
/* chicken-install.scm:447: error */
t2=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[188]);}
else{
t2=((C_word*)t0)[2];
f_4172(2,t2,C_SCHEME_UNDEFINED);}}

/* k5264 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in ... */
static void C_ccall f_5266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5266,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5271,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_5271(t5,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k6909 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_6911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
/* chicken-install.scm:985: loop */
t7=((C_word*)((C_word*)t0)[4])[1];
f_6207(t7,((C_word*)t0)[5],t6,((C_word*)((C_word*)t0)[6])[1]);}

/* a5794 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in ... */
static void C_ccall f_5795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5795,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_fast_retrieve(lf[239]));
t3=C_mutate2((C_word*)lf[239]+1 /* (set! ##sys#warnings-enabled ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k4671 in k4668 in k4665 in k4659 in k4651 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in ... */
static void C_ccall f_4673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4673,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4676,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* chicken-install.scm:529: ##sys#print */
t3=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[9],C_SCHEME_FALSE,((C_word*)t0)[8]);}

/* k4668 in k4665 in k4659 in k4651 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in ... */
static void C_ccall f_4670(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4670,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4673,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* chicken-install.scm:529: ##sys#print */
t3=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[301],C_SCHEME_FALSE,((C_word*)t0)[8]);}

/* k4674 in k4671 in k4668 in k4665 in k4659 in k4651 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in ... */
static void C_ccall f_4676(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4676,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4679,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken-install.scm:529: ##sys#print */
t3=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[300],C_SCHEME_FALSE,((C_word*)t0)[8]);}

/* for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in ... */
static void C_fcall f_4455(C_word t0,C_word t1,C_word t2){
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
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4455,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4465,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=C_i_car(t6);
if(C_truep(C_i_member(t7,C_retrieve2(lf[65],"main#\052checked\052")))){
t8=C_SCHEME_UNDEFINED;
t9=t5;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t8=C_u_i_car(t6);
t9=C_a_i_cons(&a,2,t8,C_retrieve2(lf[65],"main#\052checked\052"));
t10=C_mutate2(&lf[65] /* (set! main#*checked* ...) */,t9);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4227,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t12=C_i_cadr(t6);
t13=C_u_i_car(t6);
/* chicken-install.scm:456: make-pathname */
t14=C_fast_retrieve(lf[79]);
((C_proc5)(void*)(*((C_word*)t14+1)))(5,t14,t11,t12,t13,lf[156]);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2549 in k2469 in g249 in k2848 in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_ccall f_2551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(&lf[13] /* (set! main#*default-sources* ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_2325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2325,2,t0,t1);}
t2=C_mutate2(&lf[0] /* (set! main#constant159 ...) */,lf[1]);
t3=C_mutate2(&lf[2] /* (set! main#constant163 ...) */,lf[3]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2332,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:74: get-environment-variable */
t5=C_fast_retrieve(lf[214]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[438]);}

/* k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_2322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2322,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2325,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:27: ##sys#require */
((C_proc3)C_fast_retrieve_symbol_proc(lf[439]))(3,*((C_word*)lf[439]+1),t2,lf[440]);}

/* k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4659 in k4651 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in ... */
static void C_ccall f_4682(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4682,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4827,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-install.scm:531: setup-api#sudo-install */
((C_proc2)C_fast_retrieve_symbol_proc(lf[299]))(2,*((C_word*)lf[299]+1),t3);}

/* k4677 in k4674 in k4671 in k4668 in k4665 in k4659 in k4651 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in ... */
static void C_ccall f_4679(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4679,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4682,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:529: get-output-string */
t3=C_fast_retrieve(lf[123]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[7]);}

/* k4463 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in ... */
static void C_ccall f_4465(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4455(t3,((C_word*)t0)[4],t2);}

/* k7024 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_7026(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_mutate2(&lf[66] /* (set! main#*csi* ...) */,t2);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
/* chicken-install.scm:1008: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_6207(t7,((C_word*)t0)[4],t6,((C_word*)((C_word*)t0)[5])[1]);}

/* k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_2338(C_word c,C_word t0,C_word t1){
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
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2338,2,t0,t1);}
t2=C_mutate2(&lf[4] /* (set! main#*program-path* ...) */,t1);
t3=lf[5] /* main#*keep* */ =C_SCHEME_FALSE;;
t4=lf[6] /* main#*keep-existing* */ =C_SCHEME_FALSE;;
t5=lf[7] /* main#*force* */ =C_SCHEME_FALSE;;
t6=lf[8] /* main#*run-tests* */ =C_SCHEME_FALSE;;
t7=lf[9] /* main#*retrieve-only* */ =C_SCHEME_FALSE;;
t8=lf[10] /* main#*no-install* */ =C_SCHEME_FALSE;;
t9=lf[11] /* main#*username* */ =C_SCHEME_FALSE;;
t10=lf[12] /* main#*password* */ =C_SCHEME_FALSE;;
t11=lf[13] /* main#*default-sources* */ =C_SCHEME_END_OF_LIST;;
t12=lf[14] /* main#*default-location* */ =C_SCHEME_FALSE;;
t13=C_mutate2(&lf[15] /* (set! main#*default-transport* ...) */,lf[16]);
t14=C_mutate2(&lf[17] /* (set! main#*windows-shell* ...) */,C_mk_bool(C_WINDOWS_SHELL));
t15=lf[18] /* main#*proxy-host* */ =C_SCHEME_FALSE;;
t16=lf[19] /* main#*proxy-port* */ =C_SCHEME_FALSE;;
t17=lf[20] /* main#*proxy-user-pass* */ =C_SCHEME_FALSE;;
t18=lf[21] /* main#*running-test* */ =C_SCHEME_FALSE;;
t19=lf[22] /* main#*mappings* */ =C_SCHEME_END_OF_LIST;;
t20=lf[23] /* main#*deploy* */ =C_SCHEME_FALSE;;
t21=lf[24] /* main#*trunk* */ =C_SCHEME_FALSE;;
t22=lf[25] /* main#*csc-features* */ =C_SCHEME_END_OF_LIST;;
t23=lf[26] /* main#*csc-nonfeatures* */ =C_SCHEME_END_OF_LIST;;
t24=lf[27] /* main#*prefix* */ =C_SCHEME_FALSE;;
t25=lf[28] /* main#*aliases* */ =C_SCHEME_END_OF_LIST;;
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2365,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:101: feature? */
t27=C_fast_retrieve(lf[144]);
((C_proc3)(void*)(*((C_word*)t27+1)))(3,t27,t26,lf[436]);}

/* k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_2335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2335,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2338,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;
f_2338(2,t3,t1);}
else{
/* ##sys#peek-c-string */
t3=*((C_word*)lf[40]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_INSTALL_BIN_HOME),C_fix(0));}}

/* k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_2332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2332,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2335,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
/* chicken-install.scm:75: make-pathname */
t3=C_fast_retrieve(lf[79]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,lf[437]);}
else{
t3=t2;
f_2335(2,t3,C_SCHEME_FALSE);}}

/* k4146 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in ... */
static void C_ccall f_4148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4148,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_mutate2(&lf[63] /* (set! main#*eggs+dirs+vers* ...) */,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k4651 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in ... */
static void C_fcall f_4653(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4653,NULL,2,t0,t1);}
t2=t1;
t3=(C_truep(C_retrieve2(lf[32],"main#\052debug-setup\052"))?lf[269]:lf[270]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4661,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t4,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* chicken-install.scm:529: open-output-string */
t6=C_fast_retrieve(lf[128]);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k3174 in a3154 in scan in k3112 in main#check-dependency in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in ... */
static void C_fcall f_3176(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_truep(((C_word*)t0)[2])?C_i_not(((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t2)){
/* chicken-install.scm:253: scan */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3123(t3,((C_word*)t0)[5],((C_word*)t0)[6],t1,((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[3];
/* chicken-install.scm:253: scan */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3123(t4,((C_word*)t0)[5],((C_word*)t0)[6],t1,t3);}}

/* k4155 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in ... */
static void C_ccall f_4157(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4157,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4162,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4168,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:442: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],t3,t4);}

/* k4659 in k4651 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in ... */
static void C_ccall f_4661(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4661,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[122]);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4667,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=t3,a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* chicken-install.scm:529: ##sys#print */
t6=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[302],C_SCHEME_FALSE,t3);}

/* k6549 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_6551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_mutate2(&lf[14] /* (set! main#*default-location* ...) */,t2);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
/* chicken-install.scm:921: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_6207(t7,((C_word*)t0)[4],t6,((C_word*)((C_word*)t0)[5])[1]);}

/* a3144 in scan in k3112 in main#check-dependency in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 in ... */
static void C_ccall f_3145(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3145,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
/* chicken-install.scm:250: check-dependency */
f_3075(t1,t2);}

/* k4665 in k4659 in k4651 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in ... */
static void C_ccall f_4667(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4667,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4670,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* chicken-install.scm:529: ##sys#print */
t3=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[6],C_SCHEME_FALSE,((C_word*)t0)[8]);}

/* k6582 in k6578 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_ccall f_6584(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_mutate2(&lf[15] /* (set! main#*default-transport* ...) */,t1);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
/* chicken-install.scm:925: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_6207(t6,((C_word*)t0)[4],t5,((C_word*)((C_word*)t0)[5])[1]);}

/* k6578 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_6580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6580,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6584,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* chicken-install.scm:924: string->symbol */
t4=*((C_word*)lf[135]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* a3154 in scan in k3112 in main#check-dependency in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 in ... */
static void C_ccall f_3155(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3155,4,t0,t1,t2,t3);}
t4=t3;
t5=(C_truep(t2)?C_SCHEME_FALSE:C_i_not(t4));
if(C_truep(t5)){
/* chicken-install.scm:252: values */
C_values(4,0,t1,C_SCHEME_FALSE,C_SCHEME_FALSE);}
else{
t6=C_i_cdr(((C_word*)t0)[2]);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3176,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t9=((C_word*)t0)[5];
t10=t8;
f_3176(t10,(C_truep(t9)?((C_word*)t0)[5]:t2));}
else{
t9=t8;
f_3176(t9,((C_word*)t0)[5]);}}}

/* k2284 */
static void C_ccall f_2286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2286,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2289,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* a5568 in k5556 in k5553 in a5547 in k5458 in k5455 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in ... */
static void C_ccall f_5569(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[20],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5569,5,t0,t1,t2,t3,t4);}
t5=t3;
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5575,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t11=C_i_check_list_2(t4,lf[105]);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5589,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5642,a[2]=t10,a[3]=t9,a[4]=t14,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_5642(t16,t12,t4);}

/* k7198 in k7281 in k7096 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in ... */
static void C_ccall f_7200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7200,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7217,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7221,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:1036: pathname-directory */
t5=C_fast_retrieve(lf[427]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[6]);}

/* k2287 in k2284 */
static void C_ccall f_2289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2289,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2292,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_chicken_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* a5562 in k5556 in k5553 in a5547 in k5458 in k5455 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in ... */
static void C_ccall f_5563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5563,2,t0,t1);}
/* chicken-install.scm:696: ##sys#module-exports */
((C_proc3)C_fast_retrieve_symbol_proc(lf[231]))(3,*((C_word*)lf[231]+1),t1,((C_word*)t0)[2]);}

/* k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_2295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2295,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2298,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_posix_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2290 in k2287 in k2284 */
static void C_ccall f_2292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2292,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2295,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d1_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k5556 in k5553 in a5547 in k5458 in k5455 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in ... */
static void C_ccall f_5558(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5558,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5563,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5569,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:696: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[4],t2,t3);}

/* k5553 in a5547 in k5458 in k5455 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in ... */
static void C_ccall f_5555(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5555,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5558,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:695: print* */
t4=*((C_word*)lf[234]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[235],t2);}

/* k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_2298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2298,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2301,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k6701 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_6703(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6703,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6706,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
t4=t2;
t5=t3;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2943,a[2]=t5,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:203: repository-path */
t7=C_fast_retrieve(lf[226]);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* k6704 in k6701 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_ccall f_6706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:948: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* map-loop1035 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in ... */
static void C_fcall f_5330(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5330,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_assoc(t3,C_retrieve2(lf[63],"main#\052eggs+dirs+vers\052"));
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

/* k4287 in for-each-loop849 in k4282 in k4279 in k4276 in k4270 in k4383 in k4377 in k4263 in a4259 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in ... */
static void C_ccall f_4289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:488: setup-api#remove-extension */
((C_proc3)C_fast_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k6727 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_6729(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6729,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6732,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* chicken-install.scm:951: setup-proxy */
f_6144(t2,t3);}

/* k5319 in k5316 in k5313 in k5310 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in ... */
static void C_ccall f_5321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:585: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* k4296 in k4282 in k4279 in k4276 in k4270 in k4383 in k4377 in k4263 in a4259 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in ... */
static void C_ccall f_4298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:490: retrieve */
f_4126(((C_word*)t0)[2],((C_word*)t0)[3]);}

/* f7922 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f7922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:823: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* f7927 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f7927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:823: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* f7912 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f7912(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:823: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* f7917 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f7917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:823: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* k4414 in map-loop816 in k4377 in k4263 in a4259 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in ... */
static void C_fcall f_4416(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_4416,NULL,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4387(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4387(t6,((C_word*)t0)[5],t5);}}

/* k3506 in k3503 in k3491 in k3479 in a3470 in a3464 in a3458 in a3712 in a3697 in a4161 in k4155 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in ... */
static void C_ccall f_3508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3508,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3511,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:331: print-error-message */
t3=C_fast_retrieve(lf[165]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k3503 in k3491 in k3479 in a3470 in a3464 in a3458 in a3712 in a3697 in a4161 in k4155 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_fcall f_3505(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3505,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3508,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:330: print */
t4=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[166]);}
else{
t2=((C_word*)t0)[2];
/* chicken-install.scm:334: abort */
t3=C_fast_retrieve(lf[167]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t2);}}

/* f7939 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f7939(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:823: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* f7934 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f7934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:823: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* f7964 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f7964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:823: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* f7969 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f7969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:823: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* f7954 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f7954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:823: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* f7959 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f7959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:823: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* k3509 in k3506 in k3503 in k3491 in k3479 in a3470 in a3464 in a3458 in a3712 in a3697 in a4161 in k4155 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in ... */
static void C_ccall f_3511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:332: values */
C_values(4,0,((C_word*)t0)[2],C_SCHEME_FALSE,lf[164]);}

/* f7974 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f7974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:823: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* k5522 in k5458 in k5455 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in ... */
static void C_ccall f_5524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5524,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5526,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:690: sort */
t3=C_fast_retrieve(lf[230]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t1,t2);}

/* k2785 in k2469 in g249 in k2848 in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_ccall f_2787(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2787,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* chicken-install.scm:174: append */
t3=*((C_word*)lf[90]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],C_retrieve2(lf[38],"main#\052hacks\052"),t2);}

/* a5525 in k5522 in k5458 in k5455 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in ... */
static void C_ccall f_5526(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5526,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5534,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_car(t2);
/* chicken-install.scm:702: symbol->string */
t6=*((C_word*)lf[197]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k6939 in k6935 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_ccall f_6941(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate2(&lf[34] /* (set! main#*override* ...) */,t1);
t3=C_i_cddr(((C_word*)t0)[2]);
/* chicken-install.scm:989: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6207(t4,((C_word*)t0)[4],t3,((C_word*)((C_word*)t0)[5])[1]);}

/* k6935 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_6937(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6937,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6941,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* chicken-install.scm:988: read-file */
t4=C_fast_retrieve(lf[352]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* k5310 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in ... */
static void C_ccall f_5312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5312,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5315,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_list_ref(((C_word*)t0)[4],((C_word*)t0)[5]);
/* chicken-install.scm:583: ##sys#print */
t4=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* a4904 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in ... */
static void C_ccall f_4905(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4905,2,t0,t1);}
/* chicken-install.scm:622: change-directory */
t2=C_fast_retrieve(lf[256]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in ... */
static void C_ccall f_4900(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4900,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4905,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4911,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5105,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:620: dynamic-wind */
t6=C_fast_retrieve(lf[320]);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,((C_word*)t0)[6],t3,t4,t5);}

/* k5316 in k5313 in k5310 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in ... */
static void C_ccall f_5318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5318,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5321,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:584: cleanup */
f_5423(t2);}

/* k5313 in k5310 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in ... */
static void C_ccall f_5315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5315,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5318,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:583: ##sys#print */
t3=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[337],C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in ... */
static void C_ccall f_4227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4227,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4233,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:457: file-exists? */
t4=C_fast_retrieve(lf[93]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4916 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in ... */
static void C_ccall f_4918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4918,2,t0,t1);}
t2=t1;
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4922,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:629: print */
t6=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,lf[268],t2);}

/* k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in ... */
static void C_ccall f_4915(C_word c,C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4915,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4918,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)t0)[2]);
t4=C_i_caddr(((C_word*)t0)[2]);
t5=C_i_greaterp(((C_word*)t0)[5],C_fix(1));
t6=t2;
t7=t3;
t8=t4;
t9=t5;
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4653,a[2]=t9,a[3]=t6,a[4]=t7,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t11=C_retrieve2(lf[23],"main#\052deploy\052");
if(C_truep(C_retrieve2(lf[23],"main#\052deploy\052"))){
t12=C_retrieve2(lf[23],"main#\052deploy\052");
t13=t10;
f_4653(t13,(C_truep(C_retrieve2(lf[23],"main#\052deploy\052"))?lf[303]:lf[304]));}
else{
if(C_truep(C_retrieve2(lf[29],"main#\052cross-chicken\052"))){
t12=C_retrieve2(lf[30],"main#\052host-extension\052");
t13=t10;
f_4653(t13,(C_truep(C_retrieve2(lf[30],"main#\052host-extension\052"))?lf[304]:lf[303]));}
else{
t12=t10;
f_4653(t12,lf[304]);}}}

/* k4703 in k4700 in k4825 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4659 in k4651 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in ... */
static void C_ccall f_4705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4705,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4709,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-install.scm:540: get-prefix */
f_2414(t3,C_a_i_list(&a,1,C_SCHEME_TRUE));}

/* k4700 in k4825 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4659 in k4651 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in ... */
static void C_ccall f_4702(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4702,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4705,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4799,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:537: open-output-string */
t5=C_fast_retrieve(lf[128]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t3;
f_4705(2,t4,lf[298]);}}

/* a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in ... */
static void C_ccall f_4911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4911,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4915,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[29],"main#\052cross-chicken\052"))){
t3=t2;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5391,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:659: print* */
t5=*((C_word*)lf[234]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[319]);}
else{
t3=t2;
f_4915(2,t3,C_SCHEME_UNDEFINED);}}

/* k4707 in k4703 in k4700 in k4825 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4659 in k4651 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in ... */
static void C_ccall f_4709(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4709,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4712,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4777,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:542: open-output-string */
t5=C_fast_retrieve(lf[128]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t3;
f_4712(2,t4,lf[295]);}}

/* main#$system in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_fcall f_6012(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6012,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6016,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6030,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[17],"main#\052windows-shell\052"))){
/* chicken-install.scm:741: string-append */
t5=*((C_word*)lf[56]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,lf[208],t2,lf[209]);}
else{
t5=t2;
/* chicken-install.scm:739: system */
t6=C_fast_retrieve(lf[207]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t3,t5);}}

/* k6014 in main#$system in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_6016(C_word c,C_word t0,C_word t1){
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
/* chicken-install.scm:744: error */
t3=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],lf[206],t1,((C_word*)t0)[3]);}}

/* k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in ... */
static void C_ccall f_4239(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4239,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4242,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_u_i_car(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4504,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[29],"main#\052cross-chicken\052"))){
t6=C_SCHEME_UNDEFINED;
t7=t2;
f_4242(2,t7,t6);}
else{
t6=C_i_assq(lf[143],((C_word*)t0)[3]);
t7=t6;
if(C_truep(t7)){
t8=C_i_cadr(t7);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4526,a[2]=t5,a[3]=t10,a[4]=t7,a[5]=t4,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_4526(3,t12,t2,t8);}
else{
t8=t2;
f_4242(2,t8,C_SCHEME_FALSE);}}}

/* k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in ... */
static void C_ccall f_4236(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4236,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4239,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_u_i_car(((C_word*)t0)[2]);
/* chicken-install.scm:459: print */
t5=*((C_word*)lf[69]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,lf[151],t4,lf[152]);}

/* k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in ... */
static void C_ccall f_4233(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4233,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4236,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:458: with-input-from-file */
t3=C_fast_retrieve(lf[91]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],*((C_word*)lf[92]+1));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4433,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=C_u_i_car(((C_word*)t0)[2]);
/* chicken-install.scm:493: string-append */
t4=*((C_word*)lf[56]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t2,lf[153],t3,lf[154],lf[155]);}}

/* k4710 in k4707 in k4703 in k4700 in k4825 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4659 in k4651 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in ... */
static void C_ccall f_4712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4712,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4716,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t2,a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_i_pairp(C_retrieve2(lf[25],"main#\052csc-features\052")))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4759,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:546: open-output-string */
t5=C_fast_retrieve(lf[128]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t3;
f_4716(2,t4,lf[290]);}}

/* k4714 in k4710 in k4707 in k4703 in k4700 in k4825 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4659 in k4651 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in ... */
static void C_ccall f_4716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4716,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4720,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
if(C_truep(C_i_pairp(C_retrieve2(lf[26],"main#\052csc-nonfeatures\052")))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4738,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:549: open-output-string */
t5=C_fast_retrieve(lf[128]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t3;
f_4720(2,t4,lf[287]);}}

/* k5507 in for-each-loop1364 in a5484 in k5464 in k5461 in k5458 in k5455 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in ... */
static void C_ccall f_5509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5499(t3,((C_word*)t0)[4],t2);}

/* canonical in main#apply-mappings in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_fcall f_5811(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5811,NULL,2,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5825,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:712: symbol->string */
t4=*((C_word*)lf[197]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}
else{
if(C_truep(C_i_stringp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,t2,C_SCHEME_FALSE));}
else{
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* chicken-install.scm:715: error */
t3=*((C_word*)lf[55]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,lf[198],t2);}}}}

/* main#apply-mappings in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_fcall f_5808(C_word t1,C_word t2){
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
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5808,NULL,2,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5811,tmp=(C_word)a,a+=2,tmp));
t8=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5845,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5868,a[2]=t1,a[3]=t2,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5881,a[2]=t9,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5883,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:720: append-map */
t12=C_fast_retrieve(lf[204]);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t10,t11,t2);}

/* k5804 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in ... */
static void C_ccall f_5806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:673: make-pathname */
t2=C_fast_retrieve(lf[79]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[249]);}

/* k5800 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in ... */
static void C_ccall f_5802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:673: glob */
t2=C_fast_retrieve(lf[248]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* a4960 in k4938 in k4934 in k4928 in k4920 in k4916 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in ... */
static void C_ccall f_4961(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4961,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4967,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4985,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:640: with-exception-handler */
t5=C_fast_retrieve(lf[183]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* a4966 in a4960 in k4938 in k4934 in k4928 in k4920 in k4916 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in ... */
static void C_ccall f_4967(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4967,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4973,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:640: k1149 */
t4=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* a4972 in a4966 in a4960 in k4938 in k4934 in k4928 in k4920 in k4916 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in ... */
static void C_ccall f_4973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4973,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4977,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:640: print */
t3=*((C_word*)lf[69]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[259],lf[260],((C_word*)t0)[3],lf[261]);}

/* k4975 in a4972 in a4966 in a4960 in k4938 in k4934 in k4928 in k4920 in k4916 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in ... */
static void C_ccall f_4977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4977,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4980,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:640: print-error-message */
t3=C_fast_retrieve(lf[165]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k4981 in k4978 in k4975 in a4972 in a4966 in a4960 in k4938 in k4934 in k4928 in k4920 in k4916 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in ... */
static void C_ccall f_4983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k4978 in k4975 in a4972 in a4966 in a4960 in k4938 in k4934 in k4928 in k4920 in k4916 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in ... */
static void C_ccall f_4980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4980,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4983,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:640: print */
t3=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[258]);}

/* a4984 in a4960 in k4938 in k4934 in k4928 in k4920 in k4916 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in ... */
static void C_ccall f_4985(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4985,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4991,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4997,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:640: ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a4990 in a4984 in a4960 in k4938 in k4934 in k4928 in k4920 in k4916 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in ... */
static void C_ccall f_4991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4991,2,t0,t1);}
/* chicken-install.scm:640: tmp1139 */
t2=((C_word*)t0)[2];
f_4941(t2,t1);}

/* a4996 in a4984 in a4960 in k4938 in k4934 in k4928 in k4920 in k4916 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in ... */
static void C_ccall f_4997(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_4997r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4997r(t0,t1,t2);}}

static void C_ccall f_4997r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5003,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:640: k1149 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* loop in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in ... */
static void C_ccall f_4526(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4526,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4536,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:505: feature? */
t4=C_fast_retrieve(lf[144]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}
else{
if(C_truep(C_i_listp(t2))){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4561,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t4=C_i_car(t2);
t5=C_eqp(lf[149],t4);
if(C_truep(t5)){
t6=t2;
t7=C_u_i_cdr(t6);
t8=t3;
f_4561(t8,C_i_pairp(t7));}
else{
t6=t3;
f_4561(t6,C_SCHEME_FALSE);}}
else{
t3=C_i_cadr(((C_word*)t0)[4]);
/* chicken-install.scm:507: error */
t4=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,lf[150],((C_word*)t0)[5],t3);}}}

/* tmp1112 in k4920 in k4916 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in ... */
static void C_fcall f_4923(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4923,NULL,2,t0,t1);}
/* chicken-install.scm:632: $system */
f_6012(t1,((C_word*)t0)[2]);}

/* k4920 in k4916 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in ... */
static void C_ccall f_4922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4922,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4923,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4930,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[33],"main#\052keep-going\052"))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5034,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5039,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:630: call-with-current-continuation */
t6=*((C_word*)lf[184]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
/* chicken-install.scm:630: tmp1112 */
t4=t2;
f_4923(t4,t3);}}

/* k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 in ... */
static void C_ccall f_4209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4209,2,t0,t1);}
if(C_truep(C_retrieve2(lf[9],"main#\052retrieve-only\052"))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_retrieve2(lf[63],"main#\052eggs+dirs+vers\052");
t3=C_i_check_list_2(C_retrieve2(lf[63],"main#\052eggs+dirs+vers\052"),lf[86]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4455,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_4455(t7,((C_word*)t0)[2],C_retrieve2(lf[63],"main#\052eggs+dirs+vers\052"));}}

/* k4928 in k4920 in k4916 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in ... */
static void C_ccall f_4930(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4930,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4936,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve2(lf[8],"main#\052run-tests\052"))){
if(C_truep(((C_word*)t0)[5])){
t3=t2;
f_4936(2,t3,C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5022,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:635: file-exists? */
t4=C_fast_retrieve(lf[93]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[266]);}}
else{
t3=t2;
f_4936(2,t3,C_SCHEME_FALSE);}}

/* k4934 in k4928 in k4920 in k4916 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in ... */
static void C_ccall f_4936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4936,2,t0,t1);}
if(C_truep(t1)){
t2=lf[21] /* main#*running-test* */ =C_SCHEME_TRUE;;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4940,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:639: current-directory */
t4=C_fast_retrieve(lf[80]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[262]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k4726 in k4718 in k4714 in k4710 in k4707 in k4703 in k4700 in k4825 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4659 in k4651 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in ... */
static void C_ccall f_4728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:517: conc */
t2=C_fast_retrieve(lf[130]);
((C_proc19)(void*)(*((C_word*)t2+1)))(19,t2,((C_word*)t0)[2],C_retrieve2(lf[66],"main#\052csi\052"),lf[281],((C_word*)t0)[3],lf[282],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],((C_word*)t0)[10],((C_word*)t0)[11],((C_word*)t0)[12],((C_word*)t0)[13],((C_word*)t0)[14],C_make_character(32),t1);}

/* k4718 in k4714 in k4710 in k4707 in k4703 in k4700 in k4825 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4659 in k4651 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in ... */
static void C_ccall f_4720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4720,2,t0,t1);}
t2=t1;
t3=(C_truep(C_retrieve2(lf[23],"main#\052deploy\052"))?lf[279]:lf[280]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_4728,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=t2,a[14]=t4,tmp=(C_word)a,a+=15,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4732,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:553: string-append */
t7=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[13],lf[284]);}

/* a7349 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 in ... */
static void C_ccall f_7350(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7350,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7356,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:1057: k1765 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* tmp1139 in k4938 in k4934 in k4928 in k4920 in k4916 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in ... */
static void C_fcall f_4941(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4941,NULL,2,t0,t1);}
t2=C_i_caddr(((C_word*)t0)[2]);
/* chicken-install.scm:642: command */
f_6123(t1,lf[257],C_a_i_list(&a,3,C_retrieve2(lf[66],"main#\052csi\052"),((C_word*)t0)[3],t2));}

/* k4938 in k4934 in k4928 in k4920 in k4916 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in ... */
static void C_ccall f_4940(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4940,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4941,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4952,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[33],"main#\052keep-going\052"))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4956,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4961,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:640: call-with-current-continuation */
t6=*((C_word*)lf[184]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
/* chicken-install.scm:640: tmp1139 */
t4=t2;
f_4941(t4,t3);}}

/* for-each-loop709 in k3999 in k3987 in k3981 in k3978 in g693 in k3973 in k3970 in k3961 in k3958 in main#show-depends in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_fcall f_4014(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4014,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4024,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:428: g725 */
t5=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[87],t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7364 in k7361 in k7358 in a7355 in a7349 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in ... */
static void C_ccall f_7366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_retrieve2(lf[21],"main#\052running-test\052"))){
/* chicken-install.scm:1062: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(2));}
else{
/* chicken-install.scm:1062: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}}

/* k7340 in k7334 in k7331 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in ... */
static void C_ccall f_7342(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k5885 in a5882 in main#apply-mappings in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 in ... */
static void C_ccall f_5887(C_word c,C_word t0,C_word t1){
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
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5887,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=t1;
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_fast_retrieve(lf[47]);
t9=C_i_cdr(t3);
t10=C_i_check_list_2(t9,lf[105]);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5903,a[2]=t7,a[3]=t12,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_5903(t14,t2,t9);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list1(&a,1,((C_word*)t0)[3]));}}

/* k4022 in for-each-loop709 in k3999 in k3987 in k3981 in k3978 in g693 in k3973 in k3970 in k3961 in k3958 in main#show-depends in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in ... */
static void C_ccall f_4024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4014(t3,((C_word*)t0)[4],t2);}

/* a5882 in main#apply-mappings in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_5883(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5883,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5887,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5944,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:722: find */
t5=C_fast_retrieve(lf[203]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,C_retrieve2(lf[22],"main#\052mappings\052"));}

/* k5879 in main#apply-mappings in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_5881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:719: delete-duplicates */
t2=C_fast_retrieve(lf[202]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)((C_word*)t0)[3])[1]);}

/* k4950 in k4938 in k4934 in k4928 in k4920 in k4916 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in ... */
static void C_ccall f_4952(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=lf[21] /* main#*running-test* */ =C_SCHEME_FALSE;;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* a7355 in a7349 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in ... */
static void C_ccall f_7356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7356,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7360,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:1059: newline */
t3=*((C_word*)lf[223]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,*((C_word*)lf[73]+1));}

/* k4954 in k4938 in k4934 in k4928 in k4920 in k4916 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in ... */
static void C_ccall f_4956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:640: g1153 */
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k5869 in k5866 in main#apply-mappings in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 in ... */
static void C_ccall f_5871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k5872 in k5866 in main#apply-mappings in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 in ... */
static void C_ccall f_5874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
/* chicken-install.scm:729: print */
t2=*((C_word*)lf[69]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[4],lf[199],((C_word*)t0)[5],lf[200],((C_word*)t0)[3]);}}

/* a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_7344(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7344,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7350,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7375,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:1057: with-exception-handler */
t5=C_fast_retrieve(lf[183]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* k3901 in k3898 in k3895 in k3892 in k3889 in k3886 in k3880 in k3873 in g643 in k3856 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_ccall f_3903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3903,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3906,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:403: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[124]))(4,*((C_word*)lf[124]+1),t2,C_make_character(39),((C_word*)t0)[4]);}

/* k3904 in k3901 in k3898 in k3895 in k3892 in k3889 in k3886 in k3880 in k3873 in g643 in k3856 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in ... */
static void C_ccall f_3906(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3906,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3909,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:403: get-output-string */
t3=C_fast_retrieve(lf[123]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k3898 in k3895 in k3892 in k3889 in k3886 in k3880 in k3873 in g643 in k3856 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in ... */
static void C_ccall f_3900(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3900,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3903,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_cdr(((C_word*)t0)[5]);
/* chicken-install.scm:403: ##sys#print */
t4=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k3907 in k3904 in k3901 in k3898 in k3895 in k3892 in k3889 in k3886 in k3880 in k3873 in g643 in k3856 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in ... */
static void C_ccall f_3909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:402: warning */
t2=C_fast_retrieve(lf[60]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5863 in same? in main#apply-mappings in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 in ... */
static void C_ccall f_5865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5865,2,t0,t1);}
t2=C_i_car(t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5861,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:717: canonical */
f_5811(t4,((C_word*)t0)[4]);}

/* k3999 in k3987 in k3981 in k3978 in g693 in k3973 in k3970 in k3961 in k3958 in main#show-depends in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_4001(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4001,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[2],lf[86]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4014,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_4014(t6,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5866 in main#apply-mappings in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_5868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5868,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5871,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5874,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:728: lset= */
t5=C_fast_retrieve(lf[201]);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[3],t2);}

/* k5859 in k5863 in same? in main#apply-mappings in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in ... */
static void C_ccall f_5861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_equalp(((C_word*)t0)[3],t2));}

/* k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in ... */
static void C_ccall f_7392(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7392,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t1;
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6199,a[2]=t5,a[3]=t7,a[4]=t9,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:844: irregex */
t11=C_fast_retrieve(lf[245]);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,lf[432]);}

/* k3247 in k3234 in k3281 in k3205 in k3202 in k3112 in main#check-dependency in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in ... */
static void C_ccall f_3249(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:271: error */
t2=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5408 in a5405 in k5392 in k5389 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in ... */
static void C_ccall f_5410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:664: delete-file* */
t2=C_fast_retrieve(lf[312]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in ... */
static void C_ccall f_7381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7381,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7385,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7392,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:1063: command-line-arguments */
t4=C_fast_retrieve(lf[433]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* same? in main#apply-mappings in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_5845(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5845,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5865,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:717: canonical */
f_5811(t4,t2);}

/* a7393 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in ... */
static void C_ccall f_7394(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_7394r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_7394r(t0,t1,t2);}}

static void C_ccall f_7394r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7400,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:1057: k1765 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* k7383 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in ... */
static void C_ccall f_7385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:1064: cleanup */
f_5423(((C_word*)t0)[2]);}

/* map-loop1589 in k6382 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_fcall f_6413(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6413,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6442,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6404,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:873: pathname-file */
t7=C_fast_retrieve(lf[351]);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5823 in canonical in main#apply-mappings in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 in ... */
static void C_ccall f_5825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5825,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,t1,C_SCHEME_FALSE));}

/* k6409 in k6382 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_ccall f_6411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:870: append */
t2=*((C_word*)lf[90]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_retrieve2(lf[63],"main#\052eggs+dirs+vers\052"));}

/* main#cleanup in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_fcall f_5423(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5423,NULL,1,t1);}
if(C_truep(C_retrieve2(lf[5],"main#\052keep\052"))){
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5430,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:669: setup-download#temporary-directory */
((C_proc2)C_fast_retrieve_symbol_proc(lf[196]))(2,*((C_word*)lf[196]+1),t2);}}

/* k6519 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_6521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* chicken-install.scm:914: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6207(t4,((C_word*)t0)[4],t3,((C_word*)((C_word*)t0)[5])[1]);}

/* k3285 in k3205 in k3202 in k3112 in main#check-dependency in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in ... */
static void C_ccall f_3287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:267: setup-api#version>=? */
((C_proc4)C_fast_retrieve_symbol_proc(lf[59]))(4,*((C_word*)lf[59]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k3281 in k3205 in k3202 in k3112 in main#check-dependency in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in ... */
static void C_ccall f_3283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3283,2,t0,t1);}
if(C_truep(t1)){
/* chicken-install.scm:280: values */
C_values(4,0,((C_word*)t0)[2],C_SCHEME_FALSE,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3236,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_car(t3);
/* chicken-install.scm:268: ->string */
t5=C_fast_retrieve(lf[47]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t2,t4);}}

/* k6402 in map-loop1589 in k6382 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in ... */
static void C_ccall f_6404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6404,2,t0,t1);}
t2=C_a_i_list2(&a,2,lf[356],lf[357]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,t1,t2));}

/* a5104 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in ... */
static void C_ccall f_5105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5105,2,t0,t1);}
/* chicken-install.scm:645: change-directory */
t2=C_fast_retrieve(lf[256]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in ... */
static void C_ccall f_6202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6202,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6207,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_6207(t5,((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_END_OF_LIST);}

/* loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in ... */
static void C_fcall f_6207(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6207,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_i_nullp(t2))){
t5=(C_truep(C_retrieve2(lf[23],"main#\052deploy\052"))?C_i_not(C_retrieve2(lf[27],"main#\052prefix\052")):C_SCHEME_FALSE);
if(C_truep(t5)){
/* chicken-install.scm:849: error */
t6=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t1,lf[224]);}
else{
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t6=t1;
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5442,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5802,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5806,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:673: repository-path */
t10=C_fast_retrieve(lf[226]);
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t6=t1;
t7=((C_word*)((C_word*)t0)[3])[1];
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5981,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:736: setup-download#gather-egg-information */
((C_proc3)C_fast_retrieve_symbol_proc(lf[252]))(3,*((C_word*)lf[252]+1),t8,t7);}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6238,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2451,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2854,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:125: chicken-home */
t10=C_fast_retrieve(lf[370]);
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}}}}
else{
t5=C_i_car(t2);
t6=t5;
t7=C_i_string_equal_p(t6,lf[371]);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6467,a[2]=t1,a[3]=t6,a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=t4,a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[6],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t7)){
t9=t8;
f_6467(t9,t7);}
else{
t9=C_u_i_string_equal_p(t6,lf[429]);
if(C_truep(t9)){
t10=t8;
f_6467(t10,t9);}
else{
t10=C_u_i_string_equal_p(t6,lf[430]);
t11=t8;
f_6467(t11,t10);}}}}

/* k5119 in k5110 in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in ... */
static void C_ccall f_5121(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5121,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5126,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5131,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5137,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:653: ##sys#dynamic-wind */
t9=*((C_word*)lf[243]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[4],t6,t7,t8);}

/* k3262 in k3234 in k3281 in k3205 in k3202 in k3112 in main#check-dependency in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in ... */
static void C_ccall f_3264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3264,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3268,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_i_cadr(((C_word*)t0)[3]);
/* chicken-install.scm:279: ->string */
t5=C_fast_retrieve(lf[47]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3266 in k3262 in k3234 in k3281 in k3205 in k3202 in k3112 in main#check-dependency in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in ... */
static void C_ccall f_3268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3268,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* chicken-install.scm:277: values */
C_values(4,0,((C_word*)t0)[3],C_SCHEME_FALSE,t2);}

/* a5125 in k5119 in k5110 in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in ... */
static void C_ccall f_5126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5126,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[30],"main#\052host-extension\052"));
t3=C_mutate2(&lf[30] /* (set! main#*host-extension* ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k5110 in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in ... */
static void C_ccall f_5112(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5112,2,t0,t1);}
t2=(C_truep(C_retrieve2(lf[31],"main#\052target-extension\052"))?C_retrieve2(lf[30],"main#\052host-extension\052"):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5121,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:652: print */
t4=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[322]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* a3718 in a3697 in a4161 in k4155 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in ... */
static void C_ccall f_3719(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3719,4,t0,t1,t2,t3);}
if(C_truep(t2)){
/* chicken-install.scm:369: values */
C_values(4,0,t1,t2,t3);}
else{
/* chicken-install.scm:370: next */
t4=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t1);}}

/* a3712 in a3697 in a4161 in k4155 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in ... */
static void C_ccall f_3713(C_word c,C_word t0,C_word t1){
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
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3713,2,t0,t1);}
t2=t1;
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[3];
t5=((C_word*)t0)[4];
t6=((C_word*)t0)[5];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3454,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3459,a[2]=t3,a[3]=t5,a[4]=t6,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:309: call-with-current-continuation */
t9=*((C_word*)lf[184]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t7,t8);}

/* k4763 in k4757 in k4710 in k4707 in k4703 in k4700 in k4825 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4659 in k4651 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in ... */
static void C_ccall f_4765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4765,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4768,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:546: ##sys#print */
t3=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,C_retrieve2(lf[25],"main#\052csc-features\052"),C_SCHEME_TRUE,((C_word*)t0)[4]);}

/* k4766 in k4763 in k4757 in k4710 in k4707 in k4703 in k4700 in k4825 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4659 in k4651 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in ... */
static void C_ccall f_4768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4768,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4771,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:546: ##sys#print */
t3=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[288],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* fail in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in ... */
static void C_fcall f_4504(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4504,NULL,2,t0,t1);}
/* chicken-install.scm:500: error */
t2=*((C_word*)lf[55]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[142],((C_word*)t0)[2]);}

/* a7173 in k7105 in k7096 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in ... */
static void C_ccall f_7174(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7174,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_memq(t2,lf[422]));}

/* k2401 in k2398 in k2392 in k2388 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_ccall f_2403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2403,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2406,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:114: get-output-string */
t3=C_fast_retrieve(lf[123]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k2404 in k2401 in k2398 in k2392 in k2388 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in ... */
static void C_ccall f_2406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:114: make-pathname */
t2=C_fast_retrieve(lf[79]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k2398 in k2392 in k2388 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in ... */
static void C_ccall f_2400(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2400,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2403,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:114: ##sys#print */
t3=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,C_fix((C_word)C_BINARY_VERSION),C_SCHEME_FALSE,((C_word*)t0)[5]);}

/* k3090 in main#check-dependency in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_3092(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:236: values */
C_values(4,0,((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* k4769 in k4766 in k4763 in k4757 in k4710 in k4707 in k4703 in k4700 in k4825 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4659 in k4651 in k4913 in a4910 in k4898 in k4895 in setup in ... */
static void C_ccall f_4771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:546: get-output-string */
t2=C_fast_retrieve(lf[123]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k4775 in k4707 in k4703 in k4700 in k4825 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4659 in k4651 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in ... */
static void C_ccall f_4777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4777,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[122]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4783,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:542: ##sys#print */
t6=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[294],C_SCHEME_FALSE,t3);}

/* a5130 in k5119 in k5110 in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in ... */
static void C_ccall f_5131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5131,2,t0,t1);}
/* chicken-install.scm:654: setup */
t2=((C_word*)t0)[2];
f_4893(t2,t1,((C_word*)t0)[3]);}

/* k2818 in k2848 in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_ccall f_2820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2820,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2825,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_2825(t5,((C_word*)t0)[3],t1);}

/* for-each-loop248 in k2818 in k2848 in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in ... */
static void C_fcall f_2825(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2825,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2835,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:130: g249 */
t5=((C_word*)t0)[3];
f_2467(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* a5136 in k5119 in k5110 in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in ... */
static void C_ccall f_5137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5137,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[30],"main#\052host-extension\052"));
t3=C_mutate2(&lf[30] /* (set! main#*host-extension* ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k4781 in k4775 in k4707 in k4703 in k4700 in k4825 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4659 in k4651 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in ... */
static void C_ccall f_4783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4783,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4786,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4796,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:543: normalize-pathname */
t4=C_fast_retrieve(lf[292]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[5],lf[293]);}

/* k5603 in k5587 in a5568 in k5556 in k5553 in a5547 in k5458 in k5455 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in ... */
static void C_ccall f_5605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:697: append */
t2=*((C_word*)lf[90]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k4784 in k4781 in k4775 in k4707 in k4703 in k4700 in k4825 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4659 in k4651 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in ... */
static void C_ccall f_4786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4786,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4789,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:542: ##sys#print */
t3=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[291],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k4787 in k4784 in k4781 in k4775 in k4707 in k4703 in k4700 in k4825 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4659 in k4651 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in ... */
static void C_ccall f_4789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:542: get-output-string */
t2=C_fast_retrieve(lf[123]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* main#check-dependency in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_fcall f_3075(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3075,NULL,2,t1,t2);}
t3=C_i_symbolp(t2);
t4=(C_truep(t3)?t3:C_i_stringp(t2));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3092,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[23],"main#\052deploy\052"))){
/* chicken-install.scm:238: ->string */
t6=C_fast_retrieve(lf[47]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3108,a[2]=t1,a[3]=t5,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:239: ext-version */
f_2997(t6,t2);}}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3114,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_listp(t2))){
t6=C_i_car(t2);
t7=t5;
f_3114(t7,C_eqp(lf[62],t6));}
else{
t6=t5;
f_3114(t6,C_SCHEME_FALSE);}}}

/* k2833 in for-each-loop248 in k2818 in k2848 in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_ccall f_2835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2825(t3,((C_word*)t0)[4],t2);}

/* k4794 in k4781 in k4775 in k4707 in k4703 in k4700 in k4825 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4659 in k4651 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in ... */
static void C_ccall f_4796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:542: ##sys#print */
t2=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k4797 in k4700 in k4825 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4659 in k4651 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in ... */
static void C_ccall f_4799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4799,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[122]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4805,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:537: ##sys#print */
t6=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[297],C_SCHEME_FALSE,t3);}

/* map-loop1334 in k5587 in a5568 in k5556 in k5553 in a5547 in k5458 in k5455 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in ... */
static void C_fcall f_5607(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(13);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5607,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=f_5591(C_a_i(&a,10),((C_word*)t0)[2],t3);
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

/* k7358 in a7355 in a7349 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in ... */
static void C_ccall f_7360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7360,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7363,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:1060: print-error-message */
t3=C_fast_retrieve(lf[165]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],*((C_word*)lf[73]+1));}

/* k7361 in k7358 in a7355 in a7349 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in ... */
static void C_ccall f_7363(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7363,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7366,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:1061: cleanup */
f_5423(t2);}

/* k3041 in main#ext-version in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_3043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_member(t1,C_fast_retrieve(lf[51]));
t3=((C_word*)t0)[2];
f_3007(t3,(C_truep(t2)?t2:C_i_member(t1,C_fast_retrieve(lf[52]))));}

/* a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 in ... */
static void C_ccall f_7375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7375,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7381,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7394,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:1057: ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* map-loop1724 in k7111 in k7105 in k7096 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_fcall f_7136(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_7136,NULL,3,t0,t1,t2);}
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

/* main#resolve-location in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_fcall f_2856(C_word t1,C_word t2){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2856,NULL,2,t1,t2);}
t3=C_i_assoc(t2,C_retrieve2(lf[28],"main#\052aliases\052"));
if(C_truep(t3)){
t4=t1;
t5=C_i_cdr(t3);
/* chicken-install.scm:184: resolve-location */
t8=t4;
t9=t5;
t1=t8;
t2=t9;
goto loop;}
else{
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k7130 in k7111 in k7105 in k7096 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_ccall f_7132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* chicken-install.scm:1024: append */
t4=*((C_word*)lf[90]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[3],t1,t3);}

/* k2848 in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_2850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2850,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2467,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2820,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:176: read-file */
t4=C_fast_retrieve(lf[352]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_pairp(C_retrieve2(lf[13],"main#\052default-sources\052")));}}

/* k2852 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in ... */
static void C_ccall f_2854(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:125: make-pathname */
t2=C_fast_retrieve(lf[79]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_retrieve2(lf[2],"main#constant163"));}

/* k4730 in k4718 in k4714 in k4710 in k4707 in k4703 in k4700 in k4825 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4659 in k4651 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in ... */
static void C_ccall f_4732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:553: setup-api#shellpath */
((C_proc3)C_fast_retrieve_symbol_proc(lf[283]))(3,*((C_word*)lf[283]+1),((C_word*)t0)[2],t1);}

/* a5405 in k5392 in k5389 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in ... */
static void C_ccall f_5406(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5406,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5410,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:663: print* */
t5=*((C_word*)lf[234]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,lf[313],t2);}

/* k4736 in k4714 in k4710 in k4707 in k4703 in k4700 in k4825 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4659 in k4651 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in ... */
static void C_ccall f_4738(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4738,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[122]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4744,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:549: ##sys#print */
t6=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[286],C_SCHEME_FALSE,t3);}

/* k4431 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in ... */
static void C_ccall f_4433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:492: warning */
t2=C_fast_retrieve(lf[60]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4742 in k4736 in k4714 in k4710 in k4707 in k4703 in k4700 in k4825 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4659 in k4651 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in ... */
static void C_ccall f_4744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4744,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4747,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:549: ##sys#print */
t3=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,C_retrieve2(lf[26],"main#\052csc-nonfeatures\052"),C_SCHEME_TRUE,((C_word*)t0)[4]);}

/* k4745 in k4742 in k4736 in k4714 in k4710 in k4707 in k4703 in k4700 in k4825 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4659 in k4651 in k4913 in a4910 in k4898 in k4895 in setup in ... */
static void C_ccall f_4747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4747,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4750,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:549: ##sys#print */
t3=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[285],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k7406 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_7408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:307: setup-api#shellpath */
((C_proc3)C_fast_retrieve_symbol_proc(lf[283]))(3,*((C_word*)lf[283]+1),((C_word*)t0)[2],t1);}

/* k4748 in k4745 in k4742 in k4736 in k4714 in k4710 in k4707 in k4703 in k4700 in k4825 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4659 in k4651 in k4913 in a4910 in k4898 in k4895 in ... */
static void C_ccall f_4750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:549: get-output-string */
t2=C_fast_retrieve(lf[123]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* a7399 in a7393 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in ... */
static void C_ccall f_7400(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7400,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* k4757 in k4710 in k4707 in k4703 in k4700 in k4825 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4659 in k4651 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in ... */
static void C_ccall f_4759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4759,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[122]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4765,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:546: ##sys#print */
t6=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[289],C_SCHEME_FALSE,t3);}

/* f7944 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f7944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:823: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* f7949 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f7949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:823: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* k5369 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_ccall f_5371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_4842(t3,t2);}

/* a5372 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_ccall f_5373(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5373,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=C_u_i_car(t3);
/* chicken-install.scm:573: extension-information */
t5=C_fast_retrieve(lf[49]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t4);}
else{
t3=t2;
/* chicken-install.scm:573: extension-information */
t4=C_fast_retrieve(lf[49]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}}

/* k3666 in k3634 in trying-sources in k3595 in main#with-default-sources in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in ... */
static void C_ccall f_3668(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_3639(t2,C_i_cadr(t1));}

/* k7410 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_7412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:307: make-pathname */
t2=C_fast_retrieve(lf[79]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_retrieve2(lf[4],"main#\052program-path\052"),t1);}

/* k5365 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in ... */
static void C_ccall f_5367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:577: reverse */
t2=*((C_word*)lf[103]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3637 in k3634 in trying-sources in k3595 in main#with-default-sources in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in ... */
static void C_fcall f_3639(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3639,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3644,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:354: proc */
t4=((C_word*)t0)[4];
((C_proc5)C_fast_retrieve_proc(t4))(5,t4,((C_word*)t0)[5],t2,((C_word*)t0)[6],t3);}

/* k3634 in trying-sources in k3595 in main#with-default-sources in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in ... */
static void C_ccall f_3636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3636,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3639,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t4=C_i_assq(lf[75],((C_word*)t0)[6]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3668,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t4)){
t6=t3;
f_3639(t6,C_i_cadr(t4));}
else{
/* chicken-install.scm:353: error */
t6=*((C_word*)lf[55]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,lf[76],((C_word*)t0)[6]);}}

/* for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 in ... */
static void C_fcall f_4478(C_word t0,C_word t1,C_word t2){
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
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4478,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4488,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=C_i_assoc(t4,C_retrieve2(lf[63],"main#\052eggs+dirs+vers\052"));
if(C_truep(t6)){
t7=t5;
t8=t6;
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4148,a[2]=t8,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:440: delete */
t10=C_fast_retrieve(lf[157]);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t9,t8,C_retrieve2(lf[63],"main#\052eggs+dirs+vers\052"),*((C_word*)lf[158]+1));}
else{
t7=C_i_pairp(t4);
t8=(C_truep(t7)?C_u_i_car(t4):t4);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4157,a[2]=t9,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t11=t10;
t12=t4;
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3858,a[2]=t12,a[3]=t11,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t12))){
t14=C_u_i_car(t12);
/* chicken-install.scm:398: string->symbol */
t15=*((C_word*)lf[135]+1);
((C_proc3)(void*)(*((C_word*)t15+1)))(3,t15,t13,t14);}
else{
/* chicken-install.scm:398: string->symbol */
t14=*((C_word*)lf[135]+1);
((C_proc3)(void*)(*((C_word*)t14+1)))(3,t14,t13,t12);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* a3399 in loop in k3360 in k3348 in a4249 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in ... */
static void C_ccall f_3400(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3400,4,t0,t1,t2,t3);}
t4=(C_truep(t2)?C_a_i_cons(&a,2,t2,((C_word*)t0)[2]):((C_word*)t0)[2]);
if(C_truep(t3)){
t5=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
/* chicken-install.scm:298: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_3367(t6,t1,((C_word*)t0)[5],t4,t5);}
else{
t5=((C_word*)t0)[3];
/* chicken-install.scm:298: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_3367(t6,t1,((C_word*)t0)[5],t4,t5);}}

/* k4383 in k4377 in k4263 in a4259 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in ... */
static void C_ccall f_4385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4385,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,C_retrieve2(lf[64],"main#\052dependencies\052"));
t4=C_mutate2(&lf[64] /* (set! main#*dependencies* ...) */,t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4272,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[6])[1]))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4351,a[2]=t5,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4358,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:475: string-intersperse */
t8=C_fast_retrieve(lf[110]);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,((C_word*)((C_word*)t0)[6])[1],lf[138]);}
else{
t6=t5;
f_4272(2,t6,C_SCHEME_UNDEFINED);}}

/* map-loop816 in k4377 in k4263 in a4259 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in ... */
static void C_fcall f_4387(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4387,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4416,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
if(C_truep(C_i_pairp(t4))){
t5=C_u_i_car(t4);
t6=t3;
f_4416(t6,t5);}
else{
t5=t3;
f_4416(t5,t4);}}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* a3643 in k3637 in k3634 in trying-sources in k3595 in main#with-default-sources in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in ... */
static void C_ccall f_3644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3644,2,t0,t1);}
t2=C_eqp(lf[74],((C_word*)t0)[2]);
if(C_truep(t2)){
t3=C_i_cdr(((C_word*)t0)[3]);
/* chicken-install.scm:359: trying-sources */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3602(t4,t1,t3);}
else{
t3=C_i_set_car(((C_word*)t0)[3],C_SCHEME_FALSE);
t4=C_i_cdr(((C_word*)t0)[3]);
/* chicken-install.scm:359: trying-sources */
t5=((C_word*)((C_word*)t0)[4])[1];
f_3602(t5,t1,t4);}}

/* k6883 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_6885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_mutate2(&lf[11] /* (set! main#*username* ...) */,t2);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
/* chicken-install.scm:981: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_6207(t7,((C_word*)t0)[4],t6,((C_word*)((C_word*)t0)[5])[1]);}

/* k4486 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in ... */
static void C_ccall f_4488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4478(t3,((C_word*)t0)[4],t2);}

/* main#setup-proxy in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_fcall f_6144(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6144,NULL,2,t1,t2);}
if(C_truep(C_i_stringp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6154,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:827: irregex-match */
t4=C_fast_retrieve(lf[216]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[217],t2);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k3205 in k3202 in k3112 in main#check-dependency in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 in ... */
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
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3207,2,t0,t1);}
t2=t1;
t3=C_retrieve2(lf[23],"main#\052deploy\052");
t4=(C_truep(C_retrieve2(lf[23],"main#\052deploy\052"))?C_retrieve2(lf[23],"main#\052deploy\052"):C_i_not(t2));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3220,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=((C_word*)t0)[3];
t7=C_u_i_car(t6);
/* chicken-install.scm:265: ->string */
t8=C_fast_retrieve(lf[47]);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t5,t7);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3283,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3287,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=C_i_cadr(((C_word*)t0)[3]);
/* chicken-install.scm:267: ->string */
t8=C_fast_retrieve(lf[47]);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t6,t7);}}

/* k3202 in k3112 in main#check-dependency in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_fcall f_3204(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3204,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3207,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* chicken-install.scm:262: ext-version */
f_2997(t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3301,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:282: warning */
t3=C_fast_retrieve(lf[60]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[61],((C_word*)t0)[3]);}}

/* a3697 in a4161 in k4155 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in ... */
static void C_ccall f_3698(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3698,5,t0,t1,t2,t3,t4);}
t5=t2;
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3713,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3719,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:367: ##sys#call-with-values */
C_call_with_values(4,0,t1,t6,t7);}
else{
/* chicken-install.scm:366: values */
C_values(4,0,t1,C_SCHEME_FALSE,lf[185]);}}

/* k6128 in k6125 in main#command in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 in ... */
static void C_ccall f_6130(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:780: $system */
f_6012(((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3234 in k3281 in k3205 in k3202 in k3112 in main#check-dependency in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in ... */
static void C_ccall f_3236(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3236,2,t0,t1);}
if(C_truep(C_u_i_string_equal_p(lf[54],t1))){
if(C_truep(C_retrieve2(lf[7],"main#\052force\052"))){
/* chicken-install.scm:270: values */
C_values(4,0,((C_word*)t0)[2],C_SCHEME_FALSE,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3249,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* chicken-install.scm:272: string-append */
t4=*((C_word*)lf[56]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[57],t3,lf[58]);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3264,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_car(t3);
/* chicken-install.scm:279: ->string */
t5=C_fast_retrieve(lf[47]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t2,t4);}}

/* k4572 in k4559 in loop in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_ccall f_4574(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
/* chicken-install.scm:509: fail */
t2=((C_word*)t0)[3];
f_4504(t2,((C_word*)t0)[2]);}}

/* f7986 in k7096 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_ccall f7986(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:823: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* f7981 in k7111 in k7105 in k7096 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_ccall f7981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:823: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* k7180 in k7096 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_ccall f_7182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* string->list */
t2=C_fast_retrieve(lf[423]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6158 in k6152 in main#setup-proxy in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 in ... */
static void C_ccall f_6160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6160,2,t0,t1);}
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6167,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:829: get-environment-variable */
t4=C_fast_retrieve(lf[214]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[215]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k6165 in k6158 in k6152 in main#setup-proxy in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in ... */
static void C_ccall f_6167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6167,2,t0,t1);}
t2=C_mutate2(&lf[20] /* (set! main#*proxy-user-pass* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6171,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:830: irregex-match-substring */
t4=C_fast_retrieve(lf[213]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],C_fix(2));}

/* k6152 in main#setup-proxy in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_6154(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6154,2,t0,t1);}
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6160,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:828: irregex-match-substring */
t4=C_fast_retrieve(lf[213]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,C_fix(3));}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k4588 in k4559 in loop in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_ccall f_4590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* chicken-install.scm:511: fail */
t2=((C_word*)t0)[2];
f_4504(t2,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* main#get-prefix in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_fcall f_2414(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2414,NULL,2,t1,t2);}
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=(C_truep(C_retrieve2(lf[29],"main#\052cross-chicken\052"))?C_i_not(C_retrieve2(lf[30],"main#\052host-extension\052")):C_SCHEME_FALSE);
if(C_truep(t5)){
if(C_truep(t4)){
/* ##sys#peek-c-string */
t6=*((C_word*)lf[40]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,C_mpointer(&a,(void*)C_TARGET_PREFIX),C_fix(0));}
else{
t6=C_retrieve2(lf[27],"main#\052prefix\052");
if(C_truep(C_retrieve2(lf[27],"main#\052prefix\052"))){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_retrieve2(lf[27],"main#\052prefix\052"));}
else{
/* ##sys#peek-c-string */
t7=*((C_word*)lf[40]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t1,C_mpointer(&a,(void*)C_TARGET_PREFIX),C_fix(0));}}}
else{
t6=C_retrieve2(lf[27],"main#\052prefix\052");
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_retrieve2(lf[27],"main#\052prefix\052"));}}

/* g1340 in k5587 in a5568 in k5556 in k5553 in a5547 in k5458 in k5455 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in ... */
static C_word C_fcall f_5591(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;
t2=C_i_car(t1);
return(C_a_i_list3(&a,3,t2,lf[233],((C_word*)t0)[2]));}

/* main#info->egg in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_6180(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6180,3,t0,t1,t2);}
t3=C_i_cdr(t2);
if(C_truep((C_truep(C_i_equalp(t3,lf[219]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[220]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[221]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))){
t4=t2;
t5=C_u_i_car(t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k3680 in trying-sources in k3595 in main#with-default-sources in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in ... */
static void C_ccall f_3682(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cadr(t1);
/* chicken-install.scm:349: resolve-location */
f_2856(((C_word*)t0)[2],t2);}

/* k4559 in loop in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_fcall f_4561(C_word t0,C_word t1){
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
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4561,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4574,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* chicken-install.scm:509: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_4526(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[4];
t3=C_u_i_car(t2);
t4=C_eqp(lf[145],t3);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4590,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=((C_word*)t0)[4];
t7=C_u_i_cdr(t6);
/* chicken-install.scm:511: every */
t8=C_fast_retrieve(lf[146]);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t5,((C_word*)((C_word*)t0)[5])[1],t7);}
else{
t5=((C_word*)t0)[4];
t6=C_u_i_car(t5);
t7=C_eqp(lf[62],t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4614,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t9=((C_word*)t0)[4];
t10=C_u_i_cdr(t9);
/* chicken-install.scm:513: any */
t11=C_fast_retrieve(lf[147]);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t8,((C_word*)((C_word*)t0)[5])[1],t10);}
else{
t8=C_i_cadr(((C_word*)t0)[6]);
/* chicken-install.scm:514: error */
t9=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[2],lf[148],((C_word*)t0)[7],t8);}}}}

/* a5547 in k5458 in k5455 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in ... */
static void C_ccall f_5548(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5548,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5555,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:694: ##sys#module-name */
((C_proc3)C_fast_retrieve_symbol_proc(lf[236]))(3,*((C_word*)lf[236]+1),t5,t4);}

/* k6169 in k6165 in k6158 in k6152 in main#setup-proxy in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in ... */
static void C_ccall f_6171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6171,2,t0,t1);}
t2=C_mutate2(&lf[18] /* (set! main#*proxy-host* ...) */,t1);
t3=C_a_i_string_to_number(&a,2,((C_word*)t0)[2],C_fix(10));
if(C_truep(t3)){
t4=C_mutate2(&lf[19] /* (set! main#*proxy-port* ...) */,t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=lf[19] /* main#*proxy-port* */ =C_fix(80);;
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* a4249 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_ccall f_4250(C_word c,C_word t0,C_word t1){
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
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4250,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=t1;
t4=t2;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3350,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=f_2924(lf[83],((C_word*)t0)[3]);
t7=f_2924(lf[89],((C_word*)t0)[3]);
if(C_truep(C_retrieve2(lf[8],"main#\052run-tests\052"))){
t8=f_2924(lf[104],((C_word*)t0)[3]);
/* chicken-install.scm:229: append */
t9=*((C_word*)lf[90]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t5,t6,t7,t8);}
else{
/* chicken-install.scm:229: append */
t8=*((C_word*)lf[90]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t5,t6,t7,C_SCHEME_END_OF_LIST);}}

/* k4534 in loop in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_4536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
/* chicken-install.scm:505: fail */
t2=((C_word*)t0)[3];
f_4504(t2,((C_word*)t0)[2]);}}

/* k7325 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in ... */
static void C_ccall f_7327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:845: setup-proxy */
f_6144(((C_word*)t0)[2],t1);}

/* k5536 in k5532 in a5525 in k5522 in k5458 in k5455 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in ... */
static void C_ccall f_5538(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:702: string<? */
t2=*((C_word*)lf[229]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k5532 in a5525 in k5522 in k5458 in k5455 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in ... */
static void C_ccall f_5534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5534,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5538,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(((C_word*)t0)[3]);
/* chicken-install.scm:702: symbol->string */
t5=*((C_word*)lf[197]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k5489 in for-each-loop1364 in a5484 in k5464 in k5461 in k5458 in k5455 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in ... */
static void C_ccall f_5491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:706: newline */
t2=*((C_word*)lf[223]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k7337 in k7334 in k7331 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in ... */
static void C_ccall f_7339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* k3218 in k3205 in k3202 in k3112 in main#check-dependency in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in ... */
static void C_ccall f_3220(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:264: values */
C_values(4,0,((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* k7334 in k7331 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 in ... */
static void C_ccall f_7336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7336,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7339,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7342,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
((C_proc2)C_fast_retrieve_symbol_proc(lf[222]))(2,*((C_word*)lf[222]+1),t3);}

/* for-each-loop1364 in a5484 in k5464 in k5461 in k5458 in k5455 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in ... */
static void C_fcall f_5499(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5499,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5509,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5491,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:706: write */
t7=*((C_word*)lf[227]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7331 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_7333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7333,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7336,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:1057: g1769 */
t3=t1;
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_7330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7330,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7333,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7344,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:1057: call-with-current-continuation */
t4=*((C_word*)lf[184]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* k3482 in k3479 in a3470 in a3464 in a3458 in a3712 in a3697 in a4161 in k4155 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in ... */
static void C_ccall f_3484(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:325: values */
C_values(4,0,((C_word*)t0)[2],C_SCHEME_FALSE,lf[160]);}

/* k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in ... */
static void C_ccall f_5442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5442,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5445,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:674: create-temporary-directory */
t4=C_fast_retrieve(lf[247]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in ... */
static void C_ccall f_6199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6199,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6202,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7327,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:845: get-environment-variable */
t5=C_fast_retrieve(lf[214]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[431]);}

/* k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_ccall f_5448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5448,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5451,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:676: irregex */
t4=C_fast_retrieve(lf[245]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[246]);}

/* k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_5445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5445,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5448,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:675: make-pathname */
t4=C_fast_retrieve(lf[79]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,C_retrieve2(lf[0],"main#constant159"));}

/* k3479 in a3470 in a3464 in a3458 in a3712 in a3697 in a4161 in k4155 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_fcall f_3481(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3481,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3484,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:324: print */
t3=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[161]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3493,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=C_i_memv(lf[168],((C_word*)t0)[4]);
t4=t2;
f_3493(t4,(C_truep(t3)?C_i_memv(lf[170],((C_word*)t0)[4]):C_SCHEME_FALSE));}
else{
t3=t2;
f_3493(t3,C_SCHEME_FALSE);}}}

/* k3494 in k3491 in k3479 in a3470 in a3464 in a3458 in a3712 in a3697 in a4161 in k4155 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_ccall f_3496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:328: values */
C_values(4,0,((C_word*)t0)[2],C_SCHEME_FALSE,lf[162]);}

/* k4282 in k4279 in k4276 in k4270 in k4383 in k4377 in k4263 in a4259 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in ... */
static void C_ccall f_4284(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4284,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[2],lf[86]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4298,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4303,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_4303(t7,t3,((C_word*)t0)[2]);}

/* k4279 in k4276 in k4270 in k4383 in k4377 in k4263 in a4259 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in ... */
static void C_ccall f_4281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4281,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4284,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4328,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:484: string-intersperse */
t5=C_fast_retrieve(lf[110]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[111]);}

/* k5470 in k5467 in k5464 in k5461 in k5458 in k5455 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in ... */
static void C_ccall f_5472(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:708: setup-api#remove-directory */
((C_proc3)C_fast_retrieve_symbol_proc(lf[195]))(3,*((C_word*)lf[195]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k5477 in k5467 in k5464 in k5461 in k5458 in k5455 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in ... */
static void C_ccall f_5479(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:707: setup-api#copy-file */
((C_proc4)C_fast_retrieve_symbol_proc(lf[225]))(4,*((C_word*)lf[225]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k3491 in k3479 in a3470 in a3464 in a3458 in a3712 in a3697 in a4161 in k4155 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in ... */
static void C_fcall f_3493(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3493,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3496,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:327: print */
t3=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[163]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3505,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=C_i_memv(lf[168],((C_word*)t0)[4]);
t4=t2;
f_3505(t4,(C_truep(t3)?C_i_memv(lf[169],((C_word*)t0)[4]):C_SCHEME_FALSE));}
else{
t3=t2;
f_3505(t3,C_SCHEME_FALSE);}}}

/* k5587 in a5568 in k5556 in k5553 in a5547 in k5458 in k5455 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in ... */
static void C_ccall f_5589(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5589,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5591,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=C_i_check_list_2(((C_word*)t0)[3],lf[105]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5605,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5607,a[2]=t7,a[3]=t6,a[4]=t11,a[5]=t4,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_5607(t13,t9,((C_word*)t0)[3]);}

/* a3464 in a3458 in a3712 in a3697 in a4161 in k4155 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in ... */
static void C_ccall f_3465(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3465,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3471,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:309: k542 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* k4326 in k4279 in k4276 in k4270 in k4383 in k4377 in k4263 in a4259 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in ... */
static void C_ccall f_4328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:484: print */
t2=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[109],t1);}

/* g1313 in a5568 in k5556 in k5553 in a5547 in k5458 in k5455 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in ... */
static C_word C_fcall f_5575(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;
t2=C_i_car(t1);
return(C_a_i_list3(&a,3,t2,lf[232],((C_word*)t0)[2]));}

/* a4259 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_ccall f_4260(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4260,4,t0,t1,t2,t3);}
t4=t2;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=t3;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4265,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:464: apply-mappings */
f_5808(t7,((C_word*)t5)[1]);}

/* k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in ... */
static void C_ccall f_5451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5451,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5454,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:677: print */
t4=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[244]);}

/* k4263 in a4259 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in ... */
static void C_ccall f_4265(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4265,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_i_car(((C_word*)t0)[3]);
t4=t3;
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4379,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[2],a[7]=t8,a[8]=t6,tmp=(C_word)a,a+=9,tmp);
/* chicken-install.scm:472: append */
t10=*((C_word*)lf[90]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[5]);}

/* k6392 in k6382 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_ccall f_6394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(&lf[63] /* (set! main#*eggs+dirs+vers* ...) */,t1);
t3=((C_word*)t0)[2];
f_6241(2,t3,t2);}

/* k5455 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in ... */
static void C_ccall f_5457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5457,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5460,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:688: print */
t3=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[238]);}

/* k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_ccall f_5454(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5454,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5457,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5677,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5682,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5795,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:678: ##sys#dynamic-wind */
t10=*((C_word*)lf[243]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t6,t7,t8,t9);}

/* a3470 in a3464 in a3458 in a3712 in a3697 in a4161 in k4155 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_3471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3471,2,t0,t1);}
t2=C_i_structurep(((C_word*)t0)[2],lf[159]);
t3=(C_truep(t2)?C_slot(((C_word*)t0)[2],C_fix(1)):C_SCHEME_FALSE);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3481,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t6=C_i_memv(lf[168],t4);
t7=t5;
f_3481(t7,(C_truep(t6)?C_i_memv(lf[171],t4):C_SCHEME_FALSE));}
else{
t6=t5;
f_3481(t6,C_SCHEME_FALSE);}}

/* k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
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
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3448,2,t0,t1);}
t2=C_mutate2(&lf[66] /* (set! main#*csi* ...) */,t1);
t3=C_mutate2(&lf[67] /* (set! main#with-default-sources ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3593,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate2(&lf[82] /* (set! main#show-depends ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3956,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate2(&lf[101] /* (set! main#retrieve ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4126,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate2(&lf[95] /* (set! main#cleanup ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5423,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate2(&lf[139] /* (set! main#apply-mappings ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5808,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate2(&lf[205] /* (set! main#$system ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6012,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate2(&lf[210] /* (set! main#command ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6123,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate2(&lf[212] /* (set! main#setup-proxy ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6144,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate2(&lf[218] /* (set! main#info->egg ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6180,tmp=(C_word)a,a+=2,tmp));
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7330,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:1055: register-feature! */
t13=C_fast_retrieve(lf[434]);
((C_proc3)(void*)(*((C_word*)t13+1)))(3,t13,t12,lf[435]);}

/* k4270 in k4383 in k4377 in k4263 in a4259 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in ... */
static void C_ccall f_4272(C_word c,C_word t0,C_word t1){
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
C_word ab[26],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4272,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4278,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t3=C_retrieve2(lf[7],"main#\052force\052");
if(C_truep(C_retrieve2(lf[7],"main#\052force\052"))){
t4=C_retrieve2(lf[7],"main#\052force\052");
t5=t2;
f_4278(2,t5,C_retrieve2(lf[7],"main#\052force\052"));}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4341,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3739,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=C_i_car(((C_word*)t0)[4]);
t8=C_a_i_list3(&a,3,lf[119],t7,lf[120]);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3747,a[2]=t6,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3749,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:378: filter-map */
t12=C_fast_retrieve(lf[136]);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t10,t11,((C_word*)t0)[3]);}}
else{
t3=t2;
f_4278(2,t3,C_SCHEME_FALSE);}}

/* k6382 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_6384(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6384,2,t0,t1);}
if(C_truep(C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6394,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6411,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6413,a[2]=t6,a[3]=t9,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_6413(t11,t7,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6449,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:877: print */
t3=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[358]);}}

/* k2392 in k2388 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_ccall f_2394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2394,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[122]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2400,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:114: ##sys#print */
t6=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[355],C_SCHEME_FALSE,t3);}

/* k2388 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_2390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2390,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2394,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:114: open-output-string */
t4=C_fast_retrieve(lf[128]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k6638 in k6627 in k6611 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in ... */
static void C_ccall f_6640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:933: make-pathname */
t2=C_fast_retrieve(lf[79]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in ... */
static void C_ccall f_4242(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4242,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4245,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_u_i_car(((C_word*)t0)[2]);
/* chicken-install.scm:461: print */
t4=*((C_word*)lf[69]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[140],t3,lf[141]);}

/* a3458 in a3712 in a3697 in a4161 in k4155 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in ... */
static void C_ccall f_3459(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3459,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3465,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3552,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:309: with-exception-handler */
t5=C_fast_retrieve(lf[183]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* k3452 in a3712 in a3697 in a4161 in k4155 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in ... */
static void C_ccall f_3454(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:309: g546 */
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k5428 in main#cleanup in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_5430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* chicken-install.scm:670: setup-api#remove-directory */
((C_proc3)C_fast_retrieve_symbol_proc(lf[195]))(3,*((C_word*)lf[195]+1),((C_word*)t0)[2],t1);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_4245(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4245,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4250,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4260,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:462: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[4],t2,t3);}

/* k4276 in k4270 in k4383 in k4377 in k4263 in a4259 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in ... */
static void C_ccall f_4278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4278,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4281,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:483: unzip1 */
t3=C_fast_retrieve(lf[112]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_2365(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2365,2,t0,t1);}
t2=C_mutate2(&lf[29] /* (set! main#*cross-chicken* ...) */,t1);
t3=C_mutate2(&lf[30] /* (set! main#*host-extension* ...) */,C_retrieve2(lf[29],"main#\052cross-chicken\052"));
t4=C_mutate2(&lf[31] /* (set! main#*target-extension* ...) */,C_retrieve2(lf[29],"main#\052cross-chicken\052"));
t5=lf[32] /* main#*debug-setup* */ =C_SCHEME_FALSE;;
t6=lf[33] /* main#*keep-going* */ =C_SCHEME_FALSE;;
t7=lf[34] /* main#*override* */ =C_SCHEME_END_OF_LIST;;
t8=lf[35] /* main#*reinstall* */ =C_SCHEME_FALSE;;
t9=lf[36] /* main#*show-depends* */ =C_SCHEME_FALSE;;
t10=lf[37] /* main#*show-foreign-depends* */ =C_SCHEME_FALSE;;
t11=lf[38] /* main#*hacks* */ =C_SCHEME_END_OF_LIST;;
t12=C_mutate2(&lf[39] /* (set! main#get-prefix ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2414,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate2(&lf[41] /* (set! main#resolve-location ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2856,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate2(&lf[42] /* (set! main#deps ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2924,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate2(&lf[43] /* (set! main#ext-version ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2997,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate2(&lf[53] /* (set! main#check-dependency ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3075,tmp=(C_word)a,a+=2,tmp));
t17=lf[63] /* main#*eggs+dirs+vers* */ =C_SCHEME_END_OF_LIST;;
t18=lf[64] /* main#*dependencies* */ =C_SCHEME_END_OF_LIST;;
t19=lf[65] /* main#*checked* */ =C_SCHEME_END_OF_LIST;;
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3448,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7408,a[2]=t20,tmp=(C_word)a,a+=3,tmp);
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7412,a[2]=t21,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t23=*((C_word*)lf[40]+1);
((C_proc4)(void*)(*((C_word*)t23+1)))(4,t23,t22,C_mpointer(&a,(void*)C_CSI_PROGRAM),C_fix(0));}

/* k6669 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_6671(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:941: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* k6676 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_6678(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:940: print */
t2=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* for-each-loop494 in k3348 in a4249 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_fcall f_3420(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3420,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3430,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:287: g495 */
t5=((C_word*)t0)[3];
f_3351(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2663 in g338 in k2469 in g249 in k2848 in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in ... */
static void C_ccall f_2665(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2665,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t2,t3));}
else{
/* chicken-install.scm:166: broken */
t2=((C_word*)t0)[4];
f_2453(t2,((C_word*)t0)[3],((C_word*)t0)[5]);}}

/* k5458 in k5455 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in ... */
static void C_ccall f_5460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5460,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5463,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5524,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5548,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:691: append-map */
t5=C_fast_retrieve(lf[204]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,C_fast_retrieve(lf[237]));}

/* k5467 in k5464 in k5461 in k5458 in k5455 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in ... */
static void C_ccall f_5469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5469,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5472,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5479,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5483,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:707: repository-path */
t5=C_fast_retrieve(lf[226]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k5464 in k5461 in k5458 in k5455 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in ... */
static void C_ccall f_5466(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5466,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5469,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5485,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:704: with-output-to-file */
t4=C_fast_retrieve(lf[228]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[4],t3);}

/* k5461 in k5458 in k5455 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in ... */
static void C_ccall f_5463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5463,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5466,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:703: newline */
t4=*((C_word*)lf[223]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k6354 in k6296 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_ccall f_6356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6356,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[122]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6362,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:860: ##sys#print */
t6=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[346],C_SCHEME_FALSE,t3);}

/* k3428 in for-each-loop494 in k3348 in a4249 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in ... */
static void C_ccall f_3430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3420(t3,((C_word*)t0)[4],t2);}

/* k6340 in map-loop1558 in k6302 in k6296 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_ccall f_6342(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6342,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6313(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6313(t6,((C_word*)t0)[5],t5);}}

/* k4055 in k3978 in g693 in k3973 in k3970 in k3961 in k3958 in main#show-depends in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in ... */
static void C_ccall f_4057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* chicken-install.scm:422: with-input-from-file */
t2=C_fast_retrieve(lf[91]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],*((C_word*)lf[92]+1));}
else{
t2=((C_word*)t0)[2];
f_3983(2,t2,C_SCHEME_FALSE);}}

/* k3299 in k3202 in k3112 in main#check-dependency in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 in ... */
static void C_ccall f_3301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:285: values */
C_values(4,0,((C_word*)t0)[2],C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* broken in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_fcall f_2453(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2453,NULL,3,t0,t1,t2);}
/* chicken-install.scm:127: error */
t3=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,lf[360],((C_word*)t0)[2],t2);}

/* k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in ... */
static void C_ccall f_2451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2451,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2453,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2460,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2850,a[2]=t3,a[3]=t4,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:128: file-exists? */
t6=C_fast_retrieve(lf[93]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k6369 in k6366 in k6363 in k6360 in k6354 in k6296 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in ... */
static void C_ccall f_6371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:859: yes-or-no? */
t2=C_fast_retrieve(lf[113]);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,lf[116],C_SCHEME_FALSE);}

/* a5681 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in ... */
static void C_ccall f_5682(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5682,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5684,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5772,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_5772(t6,t1,((C_word*)t0)[3]);}

/* g1246 in a5681 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in ... */
static void C_fcall f_5684(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5684,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5688,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:681: irregex-match */
t4=C_fast_retrieve(lf[216]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[2],t2);}

/* k5686 in g1246 in a5681 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in ... */
static void C_ccall f_5688(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5688,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5691,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5696,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:680: call-with-current-continuation */
t5=*((C_word*)lf[184]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k6808 in k6794 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_ccall f_6810(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6810,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_retrieve2(lf[26],"main#\052csc-nonfeatures\052"));
t3=C_mutate2(&lf[26] /* (set! main#*csc-nonfeatures* ...) */,t2);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
/* chicken-install.scm:962: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_6207(t7,((C_word*)t0)[4],t6,((C_word*)((C_word*)t0)[5])[1]);}

/* k6360 in k6354 in k6296 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in ... */
static void C_ccall f_6362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6362,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6365,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_length(((C_word*)t0)[5]);
/* chicken-install.scm:860: ##sys#print */
t4=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k6363 in k6360 in k6354 in k6296 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_ccall f_6365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6365,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6368,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:860: ##sys#print */
t3=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[345],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k6366 in k6363 in k6360 in k6354 in k6296 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in ... */
static void C_ccall f_6368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6368,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6371,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:860: get-output-string */
t3=C_fast_retrieve(lf[123]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* a5676 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in ... */
static void C_ccall f_5677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5677,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_fast_retrieve(lf[239]));
t3=C_mutate2((C_word*)lf[239]+1 /* (set! ##sys#warnings-enabled ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k2469 in g249 in k2848 in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in ... */
static void C_ccall f_2471(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2471,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=C_eqp(t2,lf[46]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
if(C_truep(C_i_pairp(t5))){
t6=C_i_cadr(((C_word*)t0)[2]);
if(C_truep(C_i_nequalp(t6,C_fix(1)))){
t7=C_SCHEME_UNDEFINED;
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2502,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:139: open-output-string */
t8=C_fast_retrieve(lf[128]);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}
else{
/* chicken-install.scm:136: broken */
t6=((C_word*)t0)[4];
f_2453(t6,((C_word*)t0)[3],((C_word*)t0)[2]);}}
else{
t4=C_eqp(t2,lf[363]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2551,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
t8=C_a_i_list1(&a,1,t7);
/* chicken-install.scm:148: append */
t9=*((C_word*)lf[90]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t5,C_retrieve2(lf[13],"main#\052default-sources\052"),t8);}
else{
t5=C_eqp(t2,lf[105]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2567,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2569,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t12=((C_word*)t0)[2];
t13=C_u_i_cdr(t12);
t14=C_i_check_list_2(t13,lf[105]);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2611,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2613,a[2]=t10,a[3]=t17,a[4]=t8,a[5]=t11,tmp=(C_word)a,a+=6,tmp));
t19=((C_word*)t17)[1];
f_2613(t19,t15,t13);}
else{
t6=C_eqp(t2,lf[366]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2656,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2658,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t13=((C_word*)t0)[2];
t14=C_u_i_cdr(t13);
t15=C_i_check_list_2(t14,lf[105]);
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2701,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2703,a[2]=t11,a[3]=t18,a[4]=t9,a[5]=t12,tmp=(C_word)a,a+=6,tmp));
t20=((C_word*)t18)[1];
f_2703(t20,t16,t14);}
else{
t7=C_eqp(t2,lf[368]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2746,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2749,a[2]=((C_word*)t0)[2],a[3]=t8,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t10=((C_word*)t0)[2];
t11=C_u_i_cdr(t10);
if(C_truep(C_i_pairp(t11))){
t12=C_i_cadr(((C_word*)t0)[2]);
t13=t9;
f_2749(t13,C_i_stringp(t12));}
else{
t12=t9;
f_2749(t12,C_SCHEME_FALSE);}}
else{
t8=C_eqp(t2,lf[369]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2779,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2787,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
t11=C_i_cadr(((C_word*)t0)[2]);
/* chicken-install.scm:174: eval */
t12=C_fast_retrieve(lf[242]);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t10,t11);}
else{
/* chicken-install.scm:175: broken */
t9=((C_word*)t0)[4];
f_2453(t9,((C_word*)t0)[3],((C_word*)t0)[2]);}}}}}}}

/* k7118 in k7111 in k7105 in k7096 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_ccall f_7120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:1024: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6207(t2,((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[4])[1]);}

/* k5481 in k5467 in k5464 in k5461 in k5458 in k5455 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in ... */
static void C_ccall f_5483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:707: make-pathname */
t2=C_fast_retrieve(lf[79]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_retrieve2(lf[0],"main#constant159"));}

/* a5484 in k5464 in k5461 in k5458 in k5455 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in ... */
static void C_ccall f_5485(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5485,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5499,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_5499(t5,t1,((C_word*)t0)[2]);}

/* k4088 in for-each-loop692 in k3973 in k3970 in k3961 in k3958 in main#show-depends in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in ... */
static void C_ccall f_4090(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4080(t3,((C_word*)t0)[4],t2);}

/* map-loop1307 in a5568 in k5556 in k5553 in a5547 in k5458 in k5455 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in ... */
static void C_fcall f_5642(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(13);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5642,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=f_5575(C_a_i(&a,10),((C_word*)t0)[2],t3);
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

/* k2458 in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_2460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_pairp(C_retrieve2(lf[13],"main#\052default-sources\052")));}

/* g249 in k2848 in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_fcall f_2467(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2467,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2471,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_listp(t2))){
t4=t2;
t5=C_u_i_length(t4);
if(C_truep(C_fixnum_greaterp(t5,C_fix(0)))){
t6=t3;
f_2471(2,t6,C_SCHEME_UNDEFINED);}
else{
/* chicken-install.scm:133: broken */
t6=((C_word*)t0)[2];
f_2453(t6,t3,t2);}}
else{
/* chicken-install.scm:133: broken */
t4=((C_word*)t0)[2];
f_2453(t4,t3,t2);}}

/* k4070 in k3973 in k3970 in k3961 in k3958 in main#show-depends in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in ... */
static void C_ccall f_4072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4072,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4075,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:430: cleanup */
f_5423(t2);}

/* k4073 in k4070 in k3973 in k3970 in k3961 in k3958 in main#show-depends in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in ... */
static void C_ccall f_4075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:431: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* k7111 in k7105 in k7096 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in ... */
static void C_ccall f_7113(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7113,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7120,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(((C_word*)t0)[5],lf[105]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7132,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7136,a[2]=t6,a[3]=t10,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_7136(t12,t8,((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[3];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f7981,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:783: print */
t4=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[372]);}}

/* a5147 in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in ... */
static void C_ccall f_5148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5148,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[23],"main#\052deploy\052"));
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,C_retrieve2(lf[27],"main#\052prefix\052"));
t4=C_mutate2(&lf[23] /* (set! main#*deploy* ...) */,((C_word*)((C_word*)t0)[4])[1]);
t5=C_mutate2(&lf[27] /* (set! main#*prefix* ...) */,((C_word*)((C_word*)t0)[5])[1]);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}

/* for-each-loop692 in k3973 in k3970 in k3961 in k3958 in main#show-depends in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in ... */
static void C_fcall f_4080(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4080,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4090,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:419: g693 */
t5=((C_word*)t0)[3];
f_3976(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3978 in g693 in k3973 in k3970 in k3961 in k3958 in main#show-depends in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in ... */
static void C_ccall f_3980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3980,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3983,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4057,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:422: file-exists? */
t5=C_fast_retrieve(lf[93]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* a3580 in a3551 in a3458 in a3712 in a3697 in a4161 in k4155 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_3581(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_3581r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3581r(t0,t1,t2);}}

static void C_ccall f_3581r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3587,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:309: k542 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* for-each-loop849 in k4282 in k4279 in k4276 in k4270 in k4383 in k4377 in k4263 in a4259 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in ... */
static void C_fcall f_4303(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_save_and_reclaim((void*)trf_4303,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4313,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4289,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:487: print */
t8=*((C_word*)lf[69]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t7,lf[107],t6,lf[108]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* a5160 in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in ... */
static void C_ccall f_5161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5161,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[23],"main#\052deploy\052"));
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,C_retrieve2(lf[27],"main#\052prefix\052"));
t4=C_mutate2(&lf[23] /* (set! main#*deploy* ...) */,((C_word*)((C_word*)t0)[4])[1]);
t5=C_mutate2(&lf[27] /* (set! main#*prefix* ...) */,((C_word*)((C_word*)t0)[5])[1]);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}

/* a3551 in a3458 in a3712 in a3697 in a4161 in k4155 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in ... */
static void C_ccall f_3552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3552,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3558,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3581,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:309: ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* k4311 in for-each-loop849 in k4282 in k4279 in k4276 in k4270 in k4383 in k4377 in k4263 in a4259 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in ... */
static void C_ccall f_4313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4303(t3,((C_word*)t0)[4],t2);}

/* k5279 in for-each-loop1080 in k5264 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in ... */
static void C_ccall f_5281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_5271(t4,((C_word*)t0)[5],t2,t3);}

/* a3586 in a3580 in a3551 in a3458 in a3712 in a3697 in a4161 in k4155 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_ccall f_3587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3587,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* k3987 in k3981 in k3978 in g693 in k3973 in k3970 in k3961 in k3958 in main#show-depends in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in ... */
static void C_ccall f_3989(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3989,2,t0,t1);}
t2=t1;
if(C_truep(t2)){
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4001,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_car(t4);
/* chicken-install.scm:427: print */
t6=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t5,lf[88]);}}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* a5154 in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in ... */
static void C_ccall f_5155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5155,2,t0,t1);}
/* chicken-install.scm:649: setup */
t2=((C_word*)t0)[2];
f_4893(t2,t1,((C_word*)t0)[3]);}

/* k3981 in k3978 in g693 in k3973 in k3970 in k3961 in k3958 in main#show-depends in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in ... */
static void C_ccall f_3983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3983,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3989,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_eqp(((C_word*)t0)[4],lf[83]);
if(C_truep(t3)){
t4=f_2924(lf[89],t1);
t5=f_2924(((C_word*)t0)[4],t1);
/* chicken-install.scm:424: append */
t6=*((C_word*)lf[90]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t2,t4,t5);}
else{
/* chicken-install.scm:425: deps */
t4=t2;
f_3989(2,t4,f_2924(((C_word*)t0)[4],t1));}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k3958 in main#show-depends in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_3960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3960,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3963,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:414: retrieve */
f_4126(t2,((C_word*)t0)[4]);}

/* a3557 in a3551 in a3458 in a3712 in a3697 in a4161 in k4155 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_3558(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3558,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3566,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_retrieve2(lf[9],"main#\052retrieve-only\052"))){
/* chicken-install.scm:314: current-directory */
t3=C_fast_retrieve(lf[80]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=t2;
f_3566(2,t3,C_SCHEME_FALSE);}}

/* k5181 in k5170 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in ... */
static void C_ccall f_5183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5183,2,t0,t1);}
/* chicken-install.scm:611: command */
f_6123(((C_word*)t0)[2],lf[325],C_a_i_list(&a,3,((C_word*)t0)[3],t1,((C_word*)t0)[4]));}

/* k3564 in a3557 in a3551 in a3458 in a3712 in a3697 in a4161 in k4155 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_ccall f_3566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_retrieve2(lf[9],"main#\052retrieve-only\052");
t3=(C_truep(C_retrieve2(lf[9],"main#\052retrieve-only\052"))?C_SCHEME_FALSE:C_i_not(C_retrieve2(lf[5],"main#\052keep\052")));
/* chicken-install.scm:311: setup-download#retrieve-extension */
((C_proc25)C_fast_retrieve_symbol_proc(lf[172]))(25,*((C_word*)lf[172]+1),((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],lf[173],((C_word*)t0)[6],lf[174],t1,lf[175],C_retrieve2(lf[8],"main#\052run-tests\052"),lf[176],C_retrieve2(lf[11],"main#\052username\052"),lf[177],C_retrieve2(lf[12],"main#\052password\052"),lf[178],C_retrieve2(lf[24],"main#\052trunk\052"),lf[179],C_retrieve2(lf[18],"main#\052proxy-host\052"),lf[180],C_retrieve2(lf[19],"main#\052proxy-port\052"),lf[181],C_retrieve2(lf[20],"main#\052proxy-user-pass\052"),lf[182],t3);}

/* k5170 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in ... */
static void C_ccall f_5172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5172,2,t0,t1);}
t2=(C_truep(C_retrieve2(lf[17],"main#\052windows-shell\052"))?lf[323]:lf[324]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5183,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:614: make-pathname */
t5=C_fast_retrieve(lf[79]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[4],lf[326]);}

/* a5002 in a4996 in a4984 in a4960 in k4938 in k4934 in k4928 in k4920 in k4916 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in ... */
static void C_ccall f_5003(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5003,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* main#show-depends in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_fcall f_3956(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3956,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3960,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:413: print */
t5=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[102]);}

/* a2599 in g293 in k2469 in g249 in k2848 in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in ... */
static void C_ccall f_2600(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2600,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_eqp(lf[365],t2));}

/* k5689 in k5686 in g1246 in a5681 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in ... */
static void C_ccall f_5691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:680: g1261 */
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* a5695 in k5686 in g1246 in a5681 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in ... */
static void C_ccall f_5696(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5696,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5702,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5733,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:680: with-exception-handler */
t5=C_fast_retrieve(lf[183]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_fcall f_4126(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4126,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4130,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:434: print */
t4=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[194]);}

/* a3622 in a3613 in trying-sources in k3595 in main#with-default-sources in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in ... */
static void C_ccall f_3623(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3623,2,t0,t1);}
/* chicken-install.scm:344: print */
t2=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[70],lf[71]);}

/* map-loop287 in k2469 in g249 in k2848 in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_fcall f_2613(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2613,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2642,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:153: g293 */
t5=((C_word*)t0)[5];
f_2569(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2609 in k2469 in g249 in k2848 in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_ccall f_2611(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:151: append */
t2=*((C_word*)lf[90]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_retrieve2(lf[22],"main#\052mappings\052"),t1);}

/* k7105 in k7096 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_ccall f_7107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7107,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7113,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7174,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:1023: every */
t5=C_fast_retrieve(lf[146]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,t2);}

/* k3616 in a3613 in trying-sources in k3595 in main#with-default-sources in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in ... */
static void C_ccall f_3618(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:346: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* a3613 in trying-sources in k3595 in main#with-default-sources in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in ... */
static void C_ccall f_3614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3614,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3618,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3623,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:342: with-output-to-port */
t4=C_fast_retrieve(lf[72]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,*((C_word*)lf[73]+1),t3);}

/* k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_4130(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4130,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_i_check_list_2(t2,lf[86]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4209,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4478,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_4478(t8,t4,t2);}

/* trying-sources in k3595 in main#with-default-sources in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 in ... */
static void C_fcall f_3602(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(10);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3602,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3614,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:340: proc */
t4=((C_word*)t0)[2];
((C_proc5)C_fast_retrieve_proc(t4))(5,t4,t1,C_SCHEME_FALSE,C_SCHEME_FALSE,t3);}
else{
t3=C_i_car(t2);
t4=t3;
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3636,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t6=C_i_assq(lf[77],t4);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3682,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t6)){
t8=C_i_cadr(t6);
/* chicken-install.scm:349: resolve-location */
f_2856(t5,t8);}
else{
/* chicken-install.scm:351: error */
t8=*((C_word*)lf[55]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,lf[78],t4);}}
else{
t5=t2;
t6=C_u_i_cdr(t5);
/* chicken-install.scm:360: trying-sources */
t13=t1;
t14=t6;
t1=t13;
t2=t14;
goto loop;}}}

/* k3961 in k3958 in main#show-depends in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 in ... */
static void C_ccall f_3963(C_word c,C_word t0,C_word t1){
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
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3963,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_i_nullp(t2);
t4=(C_truep(t3)?lf[83]:C_i_car(t2));
t5=t4;
t6=*((C_word*)lf[84]+1);
t7=*((C_word*)lf[84]+1);
t8=C_i_check_port_2(*((C_word*)lf[84]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[85]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3972,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t10=C_eqp(t5,lf[83]);
if(C_truep(t10)){
/* chicken-install.scm:415: ##sys#print */
t11=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t9,lf[98],C_SCHEME_FALSE,*((C_word*)lf[84]+1));}
else{
t11=C_eqp(t5,lf[99]);
if(C_truep(t11)){
/* chicken-install.scm:415: ##sys#print */
t12=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t12+1)))(5,t12,t9,lf[100],C_SCHEME_FALSE,t6);}
else{
t12=C_SCHEME_UNDEFINED;
/* chicken-install.scm:415: ##sys#print */
t13=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t13+1)))(5,t13,t9,t12,C_SCHEME_FALSE,t6);}}}

/* k3354 in g495 in k3348 in a4249 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in ... */
static void C_ccall f_3356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* g693 in k3973 in k3970 in k3961 in k3958 in main#show-depends in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in ... */
static void C_fcall f_3976(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3976,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3980,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_cadr(t2);
t5=t2;
t6=C_u_i_car(t5);
/* chicken-install.scm:421: make-pathname */
t7=C_fast_retrieve(lf[79]);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t3,t4,t6,lf[94]);}

/* k3973 in k3970 in k3961 in k3958 in main#show-depends in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in ... */
static void C_ccall f_3975(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3975,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3976,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_retrieve2(lf[63],"main#\052eggs+dirs+vers\052");
t4=C_i_check_list_2(C_retrieve2(lf[63],"main#\052eggs+dirs+vers\052"),lf[86]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4072,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4080,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_4080(t9,t5,C_retrieve2(lf[63],"main#\052eggs+dirs+vers\052"));}

/* k3970 in k3961 in k3958 in main#show-depends in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in ... */
static void C_ccall f_3972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3972,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3975,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:415: ##sys#print */
t3=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[97],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* main#with-default-sources in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_fcall f_3593(C_word t1,C_word t2){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3593,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3597,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=t3;
t5=(C_truep(C_retrieve2(lf[14],"main#\052default-location\052"))?C_retrieve2(lf[15],"main#\052default-transport\052"):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2902,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2905,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t8=C_eqp(C_retrieve2(lf[15],"main#\052default-transport\052"),lf[74]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2922,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:191: absolute-pathname? */
t10=C_fast_retrieve(lf[81]);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,C_retrieve2(lf[14],"main#\052default-location\052"));}
else{
t9=t7;
f_2905(t9,C_SCHEME_FALSE);}}
else{
t6=C_retrieve2(lf[13],"main#\052default-sources\052");
t7=t4;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_retrieve2(lf[13],"main#\052default-sources\052"));}}

/* g495 in k3348 in a4249 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_fcall f_3351(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3351,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3356,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:290: h */
t4=t2;
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* k3348 in a4249 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in ... */
static void C_ccall f_3350(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3350,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3351,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=C_retrieve2(lf[38],"main#\052hacks\052");
t6=C_i_check_list_2(C_retrieve2(lf[38],"main#\052hacks\052"),lf[86]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3362,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3420,a[2]=t9,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_3420(t11,t7,C_retrieve2(lf[38],"main#\052hacks\052"));}

/* loop in k3360 in k3348 in a4249 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in ... */
static void C_fcall f_3367(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
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
C_save_and_reclaim((void*)trf_3367,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3381,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:294: reverse */
t6=*((C_word*)lf[103]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}
else{
t5=C_i_car(t2);
t6=t5;
t7=t2;
t8=C_u_i_cdr(t7);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3394,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3400,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t8,tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:295: ##sys#call-with-values */
C_call_with_values(4,0,t1,t9,t10);}}

/* k3360 in k3348 in a4249 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_ccall f_3362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3362,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3367,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_3367(t5,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* k5228 in k5224 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in ... */
static void C_ccall f_5230(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:596: yes-or-no? */
t2=C_fast_retrieve(lf[113]);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[116],t1);}

/* k3595 in main#with-default-sources in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_3597(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3597,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3602,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_3602(t5,((C_word*)t0)[3],t1);}

/* map-loop332 in k2469 in g249 in k2848 in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_fcall f_2703(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2703,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2732,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:163: g338 */
t5=((C_word*)t0)[5];
f_2658(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5220 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in ... */
static void C_ccall f_5222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5206(t2,C_i_not(t1));}

/* k2699 in k2469 in g249 in k2848 in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_ccall f_2701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:161: append */
t2=*((C_word*)lf[90]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_retrieve2(lf[28],"main#\052aliases\052"),t1);}

/* k5210 in k5207 in k5204 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in ... */
static void C_ccall f_5212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:603: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* k5224 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in ... */
static void C_ccall f_5226(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5226,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5230,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:600: setup-api#abort-setup */
((C_proc2)C_fast_retrieve_symbol_proc(lf[117]))(2,*((C_word*)lf[117]+1),t3);}

/* a3393 in loop in k3360 in k3348 in a4249 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in ... */
static void C_ccall f_3394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3394,2,t0,t1);}
/* chicken-install.scm:297: check-dependency */
f_3075(t1,((C_word*)t0)[2]);}

/* a5038 in k4920 in k4916 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in ... */
static void C_ccall f_5039(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5039,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5045,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5063,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:630: with-exception-handler */
t5=C_fast_retrieve(lf[183]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* k5032 in k4920 in k4916 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in ... */
static void C_ccall f_5034(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:630: g1126 */
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k5026 in k5020 in k4928 in k4920 in k4916 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in ... */
static void C_ccall f_5028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* chicken-install.scm:637: file-exists? */
t2=C_fast_retrieve(lf[93]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[263]);}
else{
t2=((C_word*)t0)[2];
f_4936(2,t2,C_SCHEME_FALSE);}}

/* k5020 in k4928 in k4920 in k4916 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in ... */
static void C_ccall f_5022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5022,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5028,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:636: directory? */
t3=C_fast_retrieve(lf[264]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[265]);}
else{
t2=((C_word*)t0)[2];
f_4936(2,t2,C_SCHEME_FALSE);}}

/* k3383 in k3379 in loop in k3360 in k3348 in a4249 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in ... */
static void C_ccall f_3385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:294: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k3379 in loop in k3360 in k3348 in a4249 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in ... */
static void C_ccall f_3381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3381,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3385,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:294: reverse */
t4=*((C_word*)lf[103]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* k2900 in main#with-default-sources in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_2902(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[25],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2902,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[77],t1);
t3=C_a_i_list(&a,2,lf[75],C_retrieve2(lf[15],"main#\052default-transport\052"));
t4=C_a_i_list(&a,2,t2,t3);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,1,t4));}

/* k2903 in main#with-default-sources in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_fcall f_2905(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[25],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2905,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2912,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:192: current-directory */
t3=C_fast_retrieve(lf[80]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_retrieve2(lf[14],"main#\052default-location\052");
t3=C_retrieve2(lf[14],"main#\052default-location\052");
t4=C_a_i_list(&a,2,lf[77],C_retrieve2(lf[14],"main#\052default-location\052"));
t5=C_a_i_list(&a,2,lf[75],C_retrieve2(lf[15],"main#\052default-transport\052"));
t6=C_a_i_list(&a,2,t4,t5);
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,1,t6));}}

/* k7281 in k7096 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_ccall f_7283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7283,2,t0,t1);}
if(C_truep(C_i_equalp(lf[425],t1))){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7200,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:1031: pathname-file */
t3=C_fast_retrieve(lf[351]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7243,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:1045: irregex-match */
t3=C_fast_retrieve(lf[216]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[7],((C_word*)t0)[6]);}}

/* k2910 in k2903 in main#with-default-sources in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 in ... */
static void C_ccall f_2912(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:192: make-pathname */
t2=C_fast_retrieve(lf[79]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_retrieve2(lf[14],"main#\052default-location\052"));}

/* k7235 in k7228 in k7219 in k7198 in k7281 in k7096 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in ... */
static void C_ccall f_7237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:1040: make-pathname */
t2=C_fast_retrieve(lf[79]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k7228 in k7219 in k7198 in k7281 in k7096 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in ... */
static void C_ccall f_7230(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7230,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_7217(t2,C_a_i_list2(&a,2,((C_word*)t0)[3],lf[426]));}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7237,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:1040: current-directory */
t3=C_fast_retrieve(lf[80]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* a5701 in a5695 in k5686 in g1246 in a5681 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in ... */
static void C_ccall f_5702(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5702,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5708,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:680: k1257 */
t4=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* a5707 in a5701 in a5695 in k5686 in g1246 in a5681 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in ... */
static void C_ccall f_5708(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5708,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5716,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:685: open-output-string */
t3=C_fast_retrieve(lf[128]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* g1760 in k7241 in k7281 in k7096 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_fcall f_7247(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7247,NULL,3,t0,t1,t2);}
t3=C_i_cdr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7263,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t4,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:1050: irregex-match-substring */
t6=C_fast_retrieve(lf[213]);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,C_fix(1));}

/* k7241 in k7281 in k7096 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in ... */
static void C_ccall f_7243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7243,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7247,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:898: g1760 */
t3=t2;
f_7247(t3,((C_word*)t0)[5],t1);}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)((C_word*)t0)[3])[1]);
/* chicken-install.scm:1053: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_6207(t5,((C_word*)t0)[5],t3,t4);}}

/* k6611 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_6613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6613,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6620,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6629,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:930: absolute-pathname? */
t6=C_fast_retrieve(lf[81]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}

/* k5720 in k5714 in a5707 in a5701 in a5695 in k5686 in g1246 in a5681 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in ... */
static void C_ccall f_5722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5722,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5725,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:685: ##sys#print */
t3=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[6],C_SCHEME_FALSE,((C_word*)t0)[5]);}

/* k5723 in k5720 in k5714 in a5707 in a5701 in a5695 in k5686 in g1246 in a5681 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in ... */
static void C_ccall f_5725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5725,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5728,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:685: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[124]))(4,*((C_word*)lf[124]+1),t2,C_make_character(39),((C_word*)t0)[5]);}

/* k5726 in k5723 in k5720 in k5714 in a5707 in a5701 in a5695 in k5686 in g1246 in a5681 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in ... */
static void C_ccall f_5728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5728,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5731,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:685: get-output-string */
t3=C_fast_retrieve(lf[123]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k5207 in k5204 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in ... */
static void C_ccall f_5209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5209,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5212,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:602: cleanup */
f_5423(t2);}

/* k5204 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in ... */
static void C_fcall f_5206(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5206,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5209,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:601: print */
t3=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[330]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_4880(2,t3,t2);}}

/* k7265 in k7261 in g1760 in k7241 in k7281 in k7096 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in ... */
static void C_ccall f_7267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7267,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1),((C_word*)((C_word*)t0)[3])[1]);
/* chicken-install.scm:1047: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_6207(t3,((C_word*)t0)[5],((C_word*)t0)[6],t2);}

/* k7261 in g1760 in k7241 in k7281 in k7096 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in ... */
static void C_ccall f_7263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7263,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7267,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:1051: irregex-match-substring */
t4=C_fast_retrieve(lf[213]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[6],C_fix(2));}

/* k2744 in k2469 in g249 in k2848 in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_ccall f_2746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(&lf[34] /* (set! main#*override* ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k6634 in k6627 in k6611 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in ... */
static void C_ccall f_6636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:932: normalize-pathname */
t2=C_fast_retrieve(lf[292]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2747 in k2469 in g249 in k2848 in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_fcall f_2749(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
/* chicken-install.scm:171: read-file */
t3=C_fast_retrieve(lf[352]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t2);}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_mutate2(&lf[34] /* (set! main#*override* ...) */,t3);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k6618 in k6611 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_ccall f_6620(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_mutate2(&lf[27] /* (set! main#*prefix* ...) */,t1);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
/* chicken-install.scm:934: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_6207(t6,((C_word*)t0)[4],t5,((C_word*)((C_word*)t0)[5])[1]);}

/* g612 in k3842 in a3748 in k4270 in k4383 in k4377 in k4263 in a4259 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in ... */
static void C_fcall f_3757(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3757,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3761,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=C_i_cadr(t2);
t5=C_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_equalp(t4,t5))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3771,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:384: open-output-string */
t7=C_fast_retrieve(lf[128]);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k2982 in for-each-loop399 in k2947 in k2941 in k6701 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in ... */
static void C_ccall f_2984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2974(t3,((C_word*)t0)[4],t2);}

/* k6627 in k6611 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_ccall f_6629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6629,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_6620(2,t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6636,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6640,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:933: current-directory */
t4=C_fast_retrieve(lf[80]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* main#ext-version in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_fcall f_2997(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2997,NULL,2,t1,t2);}
t3=C_eqp(t2,lf[44]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3007,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=t4;
f_3007(t5,t3);}
else{
t5=C_i_equalp(t2,lf[50]);
if(C_truep(t5)){
t6=t4;
f_3007(t6,t5);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3043,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:216: ->string */
t7=C_fast_retrieve(lf[47]);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}}}

/* k7050 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_7052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_mutate2(&lf[12] /* (set! main#*password* ...) */,t2);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
/* chicken-install.scm:1012: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_6207(t7,((C_word*)t0)[4],t6,((C_word*)((C_word*)t0)[5])[1]);}

/* k3759 in g612 in k3842 in a3748 in k4270 in k4383 in k4377 in k4263 in a4259 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in ... */
static void C_ccall f_3761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k2777 in k2469 in g249 in k2848 in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_ccall f_2779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(&lf[38] /* (set! main#*hacks* ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2964 in g400 in k2947 in k2941 in k6701 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in ... */
static void C_ccall f_2966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:210: setup-api#shellpath */
((C_proc3)C_fast_retrieve_symbol_proc(lf[283]))(3,*((C_word*)lf[283]+1),((C_word*)t0)[2],t1);}

/* k3737 in k4270 in k4383 in k4377 in k4263 in a4259 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in ... */
static void C_ccall f_3739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:373: string-concatenate */
t2=C_fast_retrieve(lf[118]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2960 in k2956 in g400 in k2947 in k2941 in k6701 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in ... */
static void C_ccall f_2962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2962,2,t0,t1);}
/* chicken-install.scm:210: command */
f_6123(((C_word*)t0)[2],lf[396],C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* k6101 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_6103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:760: make-pathname */
t2=C_fast_retrieve(lf[79]);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,lf[353],lf[354]);}

/* k3745 in k4270 in k4383 in k4377 in k4263 in a4259 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in ... */
static void C_ccall f_3747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:374: append */
t2=*((C_word*)lf[90]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1,lf[121]);}

/* for-each-loop399 in k2947 in k2941 in k6701 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_fcall f_2974(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2974,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2984,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:208: g400 */
t5=((C_word*)t0)[3];
f_2950(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* a3748 in k4270 in k4383 in k4377 in k4263 in a4259 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in ... */
static void C_ccall f_3749(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3749,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3844,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(t2);
/* chicken-install.scm:380: string->symbol */
t5=*((C_word*)lf[135]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k6072 in g1486 in k6089 in a6044 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_ccall f_6074(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6074,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k2500 in k2469 in g249 in k2848 in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_ccall f_2502(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2502,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[122]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2508,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:139: ##sys#print */
t6=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[362],C_SCHEME_FALSE,t3);}

/* k2506 in k2500 in k2469 in g249 in k2848 in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in ... */
static void C_ccall f_2508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2508,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2511,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:139: ##sys#print */
t3=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,C_retrieve2(lf[2],"main#constant163"),C_SCHEME_FALSE,((C_word*)t0)[5]);}

/* k2947 in k2941 in k6701 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in ... */
static void C_ccall f_2949(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2949,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2950,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_check_list_2(lf[397],lf[86]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2974,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_2974(t7,((C_word*)t0)[5],lf[397]);}

/* k3793 in k3790 in k3787 in k3784 in k3781 in k3778 in k3775 in k3769 in g612 in k3842 in a3748 in k4270 in k4383 in k4377 in k4263 in a4259 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in ... */
static void C_ccall f_3795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3795,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3798,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:384: get-output-string */
t3=C_fast_retrieve(lf[123]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k2941 in k6701 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_ccall f_2943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2943,2,t0,t1);}
t2=t1;
t3=(C_truep(C_retrieve2(lf[17],"main#\052windows-shell\052"))?lf[394]:lf[395]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2949,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:207: print */
t6=*((C_word*)lf[69]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[398],((C_word*)t0)[2],lf[399]);}

/* k3796 in k3793 in k3790 in k3787 in k3784 in k3781 in k3778 in k3775 in k3769 in g612 in k3842 in a3748 in k4270 in k4383 in k4377 in k4263 in a4259 in k4243 in k4240 in k4237 in k4234 in k4231 in ... */
static void C_ccall f_3798(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:383: warning */
t2=C_fast_retrieve(lf[60]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* g1486 in k6089 in a6044 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in ... */
static void C_fcall f_6062(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6062,NULL,3,t0,t1,t2);}
t3=C_i_cadr(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6074,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:754: ->string */
t6=C_fast_retrieve(lf[47]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[2]);}

/* k3790 in k3787 in k3784 in k3781 in k3778 in k3775 in k3769 in g612 in k3842 in a3748 in k4270 in k4383 in k4377 in k4263 in a4259 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in ... */
static void C_ccall f_3792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3792,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3795,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:384: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[124]))(4,*((C_word*)lf[124]+1),t2,C_make_character(39),((C_word*)t0)[4]);}

/* k2512 in k2509 in k2506 in k2500 in k2469 in g249 in k2848 in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in ... */
static void C_ccall f_2514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2514,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2517,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:139: ##sys#print */
t3=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,C_fix(1),C_SCHEME_FALSE,((C_word*)t0)[5]);}

/* k2515 in k2512 in k2509 in k2506 in k2500 in k2469 in g249 in k2848 in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in ... */
static void C_ccall f_2517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2517,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2520,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:139: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[124]))(4,*((C_word*)lf[124]+1),t2,C_make_character(41),((C_word*)t0)[5]);}

/* main#command in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_fcall f_6123(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6123,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6127,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t4,*((C_word*)lf[122]+1),t2,t3);}

/* k6125 in main#command in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_6127(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6127,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6130,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:779: print */
t4=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[211],t2);}

/* k2509 in k2506 in k2500 in k2469 in g249 in k2848 in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in ... */
static void C_ccall f_2511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2511,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2514,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:139: ##sys#print */
t3=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[361],C_SCHEME_FALSE,((C_word*)t0)[5]);}

/* k2956 in g400 in k2947 in k2941 in k6701 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in ... */
static void C_ccall f_2958(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2958,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2962,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:210: setup-api#shellpath */
((C_proc3)C_fast_retrieve_symbol_proc(lf[283]))(3,*((C_word*)lf[283]+1),t3,((C_word*)t0)[4]);}

/* g400 in k2947 in k2941 in k6701 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_fcall f_2950(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2950,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2958,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2966,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:210: make-pathname */
t5=C_fast_retrieve(lf[79]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[4],t2);}

/* k6089 in a6044 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_ccall f_6091(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6091,2,t0,t1);}
t2=C_i_car(t1);
t3=C_i_assq(lf[46],t2);
t4=(C_truep(t3)?C_i_cadr(t3):lf[348]);
t5=t4;
t6=C_i_assq(lf[349],t2);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6062,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:749: g1486 */
t8=t7;
f_6062(t8,((C_word*)t0)[2],t6);}
else{
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6080,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6084,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:758: pathname-file */
t9=C_fast_retrieve(lf[351]);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,((C_word*)t0)[3]);}}

/* k6093 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_6095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:748: filter-map */
t2=C_fast_retrieve(lf[136]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k6097 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_6099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:760: glob */
t2=C_fast_retrieve(lf[248]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* a6110 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in ... */
static void C_ccall f_6111(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6111,5,t0,t1,t2,t3,t4);}
if(C_truep(t2)){
/* chicken-install.scm:767: setup-download#list-extensions */
((C_proc16)C_fast_retrieve_symbol_proc(lf[254]))(16,*((C_word*)lf[254]+1),t1,t2,t3,lf[255],C_SCHEME_TRUE,lf[176],C_retrieve2(lf[11],"main#\052username\052"),lf[177],C_retrieve2(lf[12],"main#\052password\052"),lf[179],C_retrieve2(lf[18],"main#\052proxy-host\052"),lf[180],C_retrieve2(lf[19],"main#\052proxy-port\052"),lf[181],C_retrieve2(lf[20],"main#\052proxy-user-pass\052"));}
else{
/* chicken-install.scm:775: next */
t5=t4;
((C_proc2)C_fast_retrieve_proc(t5))(2,t5,t1);}}

/* k2730 in map-loop332 in k2469 in g249 in k2848 in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in ... */
static void C_ccall f_2732(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2732,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2703(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2703(t6,((C_word*)t0)[5],t5);}}

/* k3775 in k3769 in g612 in k3842 in a3748 in k4270 in k4383 in k4377 in k4263 in a4259 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in ... */
static void C_ccall f_3777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3777,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3780,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_cadr(((C_word*)t0)[6]);
/* chicken-install.scm:384: ##sys#print */
t4=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* main#deps in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static C_word C_fcall f_2924(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
t3=C_i_assq(t1,t2);
if(C_truep(t3)){
t4=C_i_cdr(t3);
return((C_truep(t4)?t4:C_SCHEME_END_OF_LIST));}
else{
return(C_SCHEME_END_OF_LIST);}}

/* k2920 in main#with-default-sources in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_2922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2905(t2,C_i_not(t1));}

/* k6078 in k6089 in a6044 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in ... */
static void C_ccall f_6080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k6082 in k6089 in a6044 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in ... */
static void C_ccall f_6084(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:756: warning */
t2=C_fast_retrieve(lf[60]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[350],t1);}

/* k3769 in g612 in k3842 in a3748 in k4270 in k4383 in k4377 in k4263 in a4259 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in ... */
static void C_ccall f_3771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3771,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[122]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3777,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:384: ##sys#print */
t6=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[127],C_SCHEME_FALSE,t3);}

/* k3011 in k3005 in main#ext-version in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_3013(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=t1;
t4=C_i_assq(lf[46],t3);
if(C_truep(t4)){
t5=C_i_cadr(t4);
/* chicken-install.scm:224: ->string */
t6=C_fast_retrieve(lf[47]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t2,t5);}
else{
t5=t2;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[48]);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k3784 in k3781 in k3778 in k3775 in k3769 in g612 in k3842 in a3748 in k4270 in k4383 in k4377 in k4263 in a4259 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in ... */
static void C_ccall f_3786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3786,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3789,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:384: ##sys#print */
t3=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[125],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k5714 in a5707 in a5701 in a5695 in k5686 in g1246 in a5681 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in ... */
static void C_ccall f_5716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5716,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[122]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5722,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:685: ##sys#print */
t6=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[240],C_SCHEME_FALSE,t3);}

/* k3787 in k3784 in k3781 in k3778 in k3775 in k3769 in g612 in k3842 in a3748 in k4270 in k4383 in k4377 in k4263 in a4259 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in ... */
static void C_ccall f_3789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3789,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3792,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[5];
t4=C_u_i_cdr(t3);
/* chicken-install.scm:384: ##sys#print */
t5=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,t4,C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k6028 in main#$system in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_6030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:739: system */
t2=C_fast_retrieve(lf[207]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3778 in k3775 in k3769 in g612 in k3842 in a3748 in k4270 in k4383 in k4377 in k4263 in a4259 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in ... */
static void C_ccall f_3780(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3780,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3783,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:384: ##sys#print */
t3=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[126],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k3781 in k3778 in k3775 in k3769 in g612 in k3842 in a3748 in k4270 in k4383 in k4377 in k4263 in a4259 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in ... */
static void C_ccall f_3783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3783,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3786,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[6];
t4=C_u_i_car(t3);
/* chicken-install.scm:384: ##sys#print */
t5=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,t4,C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k3005 in main#ext-version in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_fcall f_3007(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3007,NULL,2,t0,t1);}
if(C_truep(t1)){
/* chicken-install.scm:219: chicken-version */
t2=C_fast_retrieve(lf[45]);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3013,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:220: extension-information */
t3=C_fast_retrieve(lf[49]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}}

/* map-loop1558 in k6302 in k6296 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in ... */
static void C_fcall f_6313(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6313,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6342,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:864: g1564 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6309 in k6302 in k6296 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in ... */
static void C_ccall f_6311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_6241(2,t3,t2);}

/* k6302 in k6296 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
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
C_word t11;
C_word t12;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6304,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_retrieve2(lf[218],"main#info->egg");
t7=C_i_check_list_2(((C_word*)t0)[2],lf[105]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6311,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6313,a[2]=t5,a[3]=t10,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_6313(t12,t8,((C_word*)t0)[2]);}
else{
/* chicken-install.scm:865: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[4],C_fix(1));}}

/* k4816 in k4803 in k4797 in k4700 in k4825 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4659 in k4651 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in ... */
static void C_ccall f_4818(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:537: ##sys#print */
t2=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* a6044 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_6045(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6045,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6091,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:750: read-file */
t4=C_fast_retrieve(lf[352]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k6041 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_6043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:747: delete-duplicates */
t2=C_fast_retrieve(lf[202]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[347]+1));}

/* k4809 in k4806 in k4803 in k4797 in k4700 in k4825 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4659 in k4651 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in ... */
static void C_ccall f_4811(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:537: get-output-string */
t2=C_fast_retrieve(lf[123]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k7096 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_fcall f_7098(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_7098,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_block_size(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(2)))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7107,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7182,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:1022: substring */
t5=*((C_word*)lf[424]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],C_fix(1));}
else{
t3=((C_word*)t0)[4];
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f7986,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:783: print */
t5=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[372]);}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7283,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken-install.scm:1030: pathname-extension */
t3=C_fast_retrieve(lf[428]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}}

/* k3106 in main#check-dependency in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_3108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* chicken-install.scm:236: values */
C_values(4,0,((C_word*)t0)[2],C_SCHEME_FALSE,C_SCHEME_FALSE);}
else{
/* chicken-install.scm:240: ->string */
t2=C_fast_retrieve(lf[47]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}}

/* k4806 in k4803 in k4797 in k4700 in k4825 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4659 in k4651 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in ... */
static void C_ccall f_4808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4808,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4811,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:537: ##sys#print */
t3=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[296],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k4803 in k4797 in k4700 in k4825 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4659 in k4651 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in ... */
static void C_ccall f_4805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4805,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4808,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4818,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:538: normalize-pathname */
t4=C_fast_retrieve(lf[292]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[5],lf[293]);}

/* k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in ... */
static void C_ccall f_6238(C_word c,C_word t0,C_word t1){
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
C_word ab[31],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6238,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6241,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[4])[1]))){
if(C_truep(C_retrieve2(lf[35],"main#\052reinstall\052"))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6298,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6043,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6045,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6095,a[2]=t6,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6099,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6103,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
t11=t10;
t12=(C_truep(C_retrieve2(lf[29],"main#\052cross-chicken\052"))?C_i_not(C_retrieve2(lf[30],"main#\052host-extension\052")):C_SCHEME_FALSE);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2390,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t14=*((C_word*)lf[40]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t13,C_mpointer(&a,(void*)C_TARGET_LIB_HOME),C_fix(0));}
else{
/* chicken-install.scm:115: repository-path */
t13=C_fast_retrieve(lf[226]);
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,t11);}}
else{
t4=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(t4)){
t5=t3;
f_6241(2,t5,C_SCHEME_UNDEFINED);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6384,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:867: glob */
t6=C_fast_retrieve(lf[248]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[359]);}}}
else{
t4=t3;
f_6241(2,t4,C_SCHEME_UNDEFINED);}}

/* k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in ... */
static void C_ccall f_4851(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4851,2,t0,t1);}
t2=t1;
t3=C_u_i_length(t2);
t4=C_retrieve2(lf[7],"main#\052force\052");
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4860,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5330,a[2]=t8,a[3]=t11,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_5330(t13,t9,t2);}

/* k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in ... */
static void C_ccall f_4869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4869,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4872,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:587: pp */
t3=C_fast_retrieve(lf[250]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[7]);}

/* scan in k3112 in main#check-dependency in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_fcall f_3123(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3123,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_nullp(t2))){
if(C_truep(t4)){
/* chicken-install.scm:245: values */
C_values(4,0,t1,C_SCHEME_FALSE,t4);}
else{
if(C_truep(t3)){
t5=t3;
/* chicken-install.scm:245: values */
C_values(4,0,t1,t5,t4);}
else{
/* chicken-install.scm:245: values */
C_values(4,0,t1,C_SCHEME_FALSE,t4);}}}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3145,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3155,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:250: ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}}

/* k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in ... */
static void C_ccall f_4866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4866,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4869,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken-install.scm:586: print */
t3=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[335]);}

/* k6794 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_6796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6796,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6810,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* chicken-install.scm:961: string->symbol */
t4=*((C_word*)lf[135]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* k6252 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in ... */
static void C_ccall f_6254(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:887: display */
t2=*((C_word*)lf[253]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in ... */
static void C_ccall f_4863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4863,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4866,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=*((C_word*)lf[73]+1);
t5=*((C_word*)lf[73]+1);
t6=C_i_check_port_2(*((C_word*)lf[73]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[336]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5312,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[7],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:583: ##sys#print */
t8=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t7,lf[338],C_SCHEME_FALSE,*((C_word*)lf[73]+1));}
else{
t4=t3;
f_4866(2,t4,C_SCHEME_FALSE);}}

/* k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in ... */
static void C_ccall f_4860(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4860,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4863,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-install.scm:581: list-index */
t4=C_fast_retrieve(lf[339]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[149]+1),t2);}

/* k2640 in map-loop287 in k2469 in g249 in k2848 in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in ... */
static void C_ccall f_2642(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2642,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2613(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2613(t6,((C_word*)t0)[5],t5);}}

/* a5080 in a5074 in a5062 in a5038 in k4920 in k4916 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in ... */
static void C_ccall f_5081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5081,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* k2654 in k2469 in g249 in k2848 in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_ccall f_2656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(&lf[28] /* (set! main#*aliases* ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* g338 in k2469 in g249 in k2848 in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_fcall f_2658(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2658,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2665,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_listp(t2))){
t4=t2;
t5=C_u_i_length(t4);
t6=C_eqp(C_fix(2),t5);
if(C_truep(t6)){
/* chicken-install.scm:164: every */
t7=C_fast_retrieve(lf[146]);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,*((C_word*)lf[367]+1),t2);}
else{
t7=t3;
f_2665(2,t7,C_SCHEME_FALSE);}}
else{
t4=t3;
f_2665(2,t4,C_SCHEME_FALSE);}}

/* map-loop1420 in k5885 in a5882 in main#apply-mappings in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in ... */
static void C_fcall f_5903(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5903,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5932,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:724: g1426 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3836 in k3842 in a3748 in k4270 in k4383 in k4377 in k4263 in a4259 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in ... */
static void C_ccall f_3838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_i_assq(lf[46],t1);
t3=(C_truep(t2)?C_i_cadr(t2):lf[129]);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
/* chicken-install.scm:388: conc */
t6=C_fast_retrieve(lf[130]);
((C_proc10)(void*)(*((C_word*)t6+1)))(10,t6,((C_word*)t0)[3],lf[131],((C_word*)t0)[4],lf[132],t3,lf[133],t5,lf[134],C_make_character(10));}

/* a5074 in a5062 in a5038 in k4920 in k4916 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in ... */
static void C_ccall f_5075(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_5075r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5075r(t0,t1,t2);}}

static void C_ccall f_5075r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5081,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:630: k1122 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in ... */
static void C_ccall f_6273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6273,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t1;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4842,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[6],"main#\052keep-existing\052"))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5371,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5373,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:572: remove */
t8=C_fast_retrieve(lf[342]);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,t7,((C_word*)t4)[1]);}
else{
t6=t5;
f_4842(t6,C_SCHEME_UNDEFINED);}}

/* k6275 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in ... */
static void C_ccall f_6277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:895: apply-mappings */
f_5808(((C_word*)t0)[2],t1);}

/* k2521 in k2518 in k2515 in k2512 in k2509 in k2506 in k2500 in k2469 in g249 in k2848 in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in ... */
static void C_ccall f_2523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cadr(((C_word*)t0)[2]);
/* chicken-install.scm:138: error */
t3=*((C_word*)lf[55]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t1,t2);}

/* k2518 in k2515 in k2512 in k2509 in k2506 in k2500 in k2469 in g249 in k2848 in k2449 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in ... */
static void C_ccall f_2520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2520,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2523,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:139: get-output-string */
t3=C_fast_retrieve(lf[123]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in ... */
static void C_ccall f_4845(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4845,2,t0,t1);}
if(C_truep(C_retrieve2(lf[9],"main#\052retrieve-only\052"))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4851,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5367,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:577: topological-sort */
t4=C_fast_retrieve(lf[340]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_retrieve2(lf[64],"main#\052dependencies\052"),*((C_word*)lf[341]+1));}}

/* k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_fcall f_4842(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4842,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4845,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:575: retrieve */
f_4126(t2,((C_word*)((C_word*)t0)[3])[1]);}

/* k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in ... */
static void C_ccall f_4897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4897,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4900,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:619: current-directory */
t3=C_fast_retrieve(lf[80]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* a5062 in a5038 in k4920 in k4916 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in ... */
static void C_ccall f_5063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5063,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5069,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5075,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:630: ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* k3886 in k3880 in k3873 in g643 in k3856 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in ... */
static void C_ccall f_3888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3888,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3891,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_cadr(((C_word*)t0)[7]);
/* chicken-install.scm:403: ##sys#print */
t4=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k5059 in k5056 in k5053 in a5050 in a5044 in a5038 in k4920 in k4916 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in ... */
static void C_ccall f_5061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k3880 in k3873 in g643 in k3856 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in ... */
static void C_ccall f_3882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3882,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[122]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3888,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* chicken-install.scm:403: ##sys#print */
t6=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[192],C_SCHEME_FALSE,t3);}

/* a5068 in a5062 in a5038 in k4920 in k4916 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in ... */
static void C_ccall f_5069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5069,2,t0,t1);}
/* chicken-install.scm:630: tmp1112 */
t2=((C_word*)t0)[2];
f_4923(t2,t1);}

/* k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_2307(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2307,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2310,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_2301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2301,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2304,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_2304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2304,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2307,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_irregex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in ... */
static void C_fcall f_4893(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4893,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4897,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:618: print */
t4=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[321],t2);}

/* k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in ... */
static void C_ccall f_4892(C_word c,C_word t0,C_word t1){
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
C_word ab[34],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4892,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4893,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5112,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t4=(C_truep(C_retrieve2(lf[31],"main#\052target-extension\052"))?C_retrieve2(lf[30],"main#\052host-extension\052"):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5148,a[2]=t10,a[3]=t12,a[4]=t6,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5155,a[2]=t2,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5161,a[2]=t6,a[3]=t8,a[4]=t10,a[5]=t12,tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:647: ##sys#dynamic-wind */
t16=*((C_word*)lf[243]+1);
((C_proc5)(void*)(*((C_word*)t16+1)))(5,t16,t3,t13,t14,t15);}
else{
/* chicken-install.scm:650: setup */
t5=t2;
f_4893(t5,t3,((C_word*)t0)[7]);}}

/* a5050 in a5044 in a5038 in k4920 in k4916 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in ... */
static void C_ccall f_5051(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5051,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5055,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:630: print */
t3=*((C_word*)lf[69]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[267],lf[260],((C_word*)t0)[3],lf[261]);}

/* k3895 in k3892 in k3889 in k3886 in k3880 in k3873 in g643 in k3856 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_ccall f_3897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3897,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3900,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:403: ##sys#print */
t3=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[190],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k3889 in k3886 in k3880 in k3873 in g643 in k3856 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in ... */
static void C_ccall f_3891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3891,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3894,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:403: ##sys#print */
t3=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[191],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k5053 in a5050 in a5044 in a5038 in k4920 in k4916 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in ... */
static void C_ccall f_5055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5055,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5058,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:630: print-error-message */
t3=C_fast_retrieve(lf[165]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k3892 in k3889 in k3886 in k3880 in k3873 in g643 in k3856 in for-each-loop747 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_3894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3894,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3897,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:403: ##sys#print */
t3=*((C_word*)lf[96]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[6],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_2319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2319,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2322,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:27: ##sys#require */
((C_proc3)C_fast_retrieve_symbol_proc(lf[439]))(3,*((C_word*)lf[439]+1),t2,lf[441]);}

/* k5056 in k5053 in a5050 in a5044 in a5038 in k4920 in k4916 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in ... */
static void C_ccall f_5058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5058,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5061,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:630: print */
t3=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[258]);}

/* k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_2316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2316,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2319,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k4339 in k4270 in k4383 in k4377 in k4263 in a4259 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in ... */
static void C_ccall f_4341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4341,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4345,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:482: setup-api#abort-setup */
((C_proc2)C_fast_retrieve_symbol_proc(lf[117]))(2,*((C_word*)lf[117]+1),t3);}

/* k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_2313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2313,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2316,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d13_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k5749 in a5738 in a5732 in a5695 in k5686 in g1246 in a5681 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in ... */
static void C_ccall f_5751(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5751,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[241],t1);
/* chicken-install.scm:686: eval */
t3=C_fast_retrieve(lf[242]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* k4343 in k4339 in k4270 in k4383 in k4377 in k4263 in a4259 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in ... */
static void C_ccall f_4345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:479: yes-or-no? */
t2=C_fast_retrieve(lf[113]);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[114],lf[115],lf[116],t1);}

/* k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_ccall f_2310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2310,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2313,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k6296 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_6298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6298,2,t0,t1);}
t2=t1;
t3=C_retrieve2(lf[7],"main#\052force\052");
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6304,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve2(lf[7],"main#\052force\052"))){
t5=t4;
f_6304(2,t5,C_retrieve2(lf[7],"main#\052force\052"));}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6356,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:860: open-output-string */
t6=C_fast_retrieve(lf[128]);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* a5756 in a5732 in a5695 in k5686 in g1246 in a5681 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in ... */
static void C_ccall f_5757(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_5757r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5757r(t0,t1,t2);}}

static void C_ccall f_5757r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5763,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:680: k1257 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* k5753 in a5738 in a5732 in a5695 in k5686 in g1246 in a5681 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in ... */
static void C_ccall f_5755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:686: string->symbol */
t2=*((C_word*)lf[135]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3112 in main#check-dependency in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 */
static void C_fcall f_3114(C_word t0,C_word t1){
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
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3114,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3123,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_3123(t6,((C_word*)t0)[3],t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3204,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[2]))){
t3=((C_word*)t0)[2];
t4=C_u_i_length(t3);
t5=C_eqp(C_fix(2),t4);
if(C_truep(t5)){
t6=C_i_car(((C_word*)t0)[2]);
t7=C_i_stringp(t6);
if(C_truep(t7)){
t8=t2;
f_3204(t8,t7);}
else{
t8=((C_word*)t0)[2];
t9=C_u_i_car(t8);
t10=t2;
f_3204(t10,C_i_symbolp(t9));}}
else{
t6=t2;
f_3204(t6,C_SCHEME_FALSE);}}
else{
t3=t2;
f_3204(t3,C_SCHEME_FALSE);}}}

/* k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in ... */
static void C_fcall f_4877(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_4877,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4880,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(C_truep(((C_word*)t0)[5])?C_SCHEME_FALSE:t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5206,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[10],"main#\052no-install\052"))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5222,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5226,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[331]))(4,*((C_word*)lf[331]+1),t7,lf[332],lf[333]);}
else{
t6=t5;
f_5206(t6,C_SCHEME_FALSE);}}
else{
t5=t3;
f_4880(2,t5,C_SCHEME_UNDEFINED);}}

/* a5044 in a5038 in k4920 in k4916 in k4913 in a4910 in k4898 in k4895 in setup in k4890 in k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in ... */
static void C_ccall f_5045(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5045,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5051,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:630: k1122 */
t4=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_ccall f_6244(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6244,2,t0,t1);}
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6254,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=C_retrieve2(lf[15],"main#\052default-transport\052");
t4=C_retrieve2(lf[14],"main#\052default-location\052");
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6111,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:764: with-default-sources */
f_3593(t2,t5);}
else{
if(C_truep(C_retrieve2(lf[36],"main#\052show-depends\052"))){
/* chicken-install.scm:891: show-depends */
f_3956(((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1],C_a_i_list(&a,1,lf[83]));}
else{
if(C_truep(C_retrieve2(lf[37],"main#\052show-foreign-depends\052"))){
/* chicken-install.scm:893: show-depends */
f_3956(((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1],C_a_i_list(&a,1,lf[99]));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6273,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6277,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:895: reverse */
t4=*((C_word*)lf[103]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)((C_word*)t0)[4])[1]);}}}}

/* k4349 in k4383 in k4377 in k4263 in a4259 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in ... */
static void C_ccall f_4351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:476: retrieve */
f_4126(((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);}

/* k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in ... */
static void C_ccall f_6241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6241,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6244,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=t2;
f_6244(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6280,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[15],"main#\052default-transport\052"))){
if(C_truep(C_retrieve2(lf[14],"main#\052default-location\052"))){
t4=C_SCHEME_UNDEFINED;
t5=t2;
f_6244(2,t5,t4);}
else{
/* chicken-install.scm:884: error */
t4=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,lf[343]);}}
else{
/* chicken-install.scm:881: error */
t4=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[344]);}}}

/* k5780 in for-each-loop1245 in a5681 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in ... */
static void C_ccall f_5782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5772(t3,((C_word*)t0)[4],t2);}

/* k4356 in k4383 in k4377 in k4263 in a4259 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in ... */
static void C_ccall f_4358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:475: print */
t2=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[137],t1);}

/* a5943 in a5882 in main#apply-mappings in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2284 in ... */
static void C_ccall f_5944(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5944,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5950,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(t2);
/* chicken-install.scm:722: find */
t5=C_fast_retrieve(lf[203]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in ... */
static void C_ccall f_4872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4872,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4873,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[4];
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5266,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:656: iota */
t5=C_fast_retrieve(lf[334]);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[6],((C_word*)t0)[6],C_fix(-1));}

/* g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in ... */
static void C_fcall f_4873(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4873,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4877,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[3])[1]))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5245,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5247,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:591: find */
t7=C_fast_retrieve(lf[203]);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,((C_word*)((C_word*)t0)[3])[1]);}
else{
t5=t4;
f_4877(t5,C_SCHEME_FALSE);}}

/* k4884 in k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in ... */
static void C_ccall f_4886(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4886,2,t0,t1);}
t2=t1;
t3=C_i_cadr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4892,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5172,a[2]=t5,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:610: print */
t7=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,lf[327]);}
else{
t6=t5;
f_4892(2,t6,C_SCHEME_UNDEFINED);}}

/* k6774 in k6760 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in ... */
static void C_ccall f_6776(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6776,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_retrieve2(lf[25],"main#\052csc-features\052"));
t3=C_mutate2(&lf[25] /* (set! main#*csc-features* ...) */,t2);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
/* chicken-install.scm:957: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_6207(t7,((C_word*)t0)[4],t6,((C_word*)((C_word*)t0)[5])[1]);}

/* for-each-loop1245 in a5681 in k5452 in k5449 in k5446 in k5443 in k5440 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in ... */
static void C_fcall f_5772(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5772,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5782,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:678: g1246 */
t5=((C_word*)t0)[3];
f_5684(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5930 in map-loop1420 in k5885 in a5882 in main#apply-mappings in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in ... */
static void C_ccall f_5932(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5932,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5903(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5903(t6,((C_word*)t0)[5],t5);}}

/* k4881 in k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in ... */
static void C_ccall f_4883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4883,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4886,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[31],"main#\052target-extension\052"))){
if(C_truep(C_retrieve2(lf[30],"main#\052host-extension\052"))){
/* chicken-install.scm:607: create-temporary-directory */
t3=C_fast_retrieve(lf[247]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=t2;
f_4886(2,t3,C_SCHEME_FALSE);}}
else{
t3=t2;
f_4886(2,t3,C_SCHEME_FALSE);}}

/* k4878 in k4875 in g1081 in k4870 in k4867 in k4864 in k4861 in k4858 in k4849 in k4843 in k4840 in k6271 in k6242 in k6239 in k6236 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in ... */
static void C_ccall f_4880(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4880,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4883,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[2]);
t4=C_i_caddr(((C_word*)t0)[2]);
/* chicken-install.scm:604: print */
t5=*((C_word*)lf[69]+1);
((C_proc7)(void*)(*((C_word*)t5+1)))(7,t5,t2,lf[328],t3,C_make_character(58),t4,lf[329]);}

/* k7215 in k7198 in k7281 in k7096 in k6465 in loop in k6200 in k6197 in k7390 in a7380 in a7374 in a7343 in k7328 in k3446 in k2363 in k2336 in k2333 in k2330 in k2323 in k2320 in k2317 in k2314 in ... */
static void C_fcall f_7217(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_7217,NULL,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1),C_retrieve2(lf[63],"main#\052eggs+dirs+vers\052"));
t3=C_mutate2(&lf[63] /* (set! main#*eggs+dirs+vers* ...) */,t2);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
t6=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);
/* chicken-install.scm:1044: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_6207(t7,((C_word*)t0)[6],t5,t6);}

/* k3842 in a3748 in k4270 in k4383 in k4377 in k4263 in a4259 in k4243 in k4240 in k4237 in k4234 in k4231 in k4225 in for-each-loop789 in k4207 in k4128 in main#retrieve in k3446 in k2363 in k2336 in k2333 in k2330 in ... */
static void C_ccall f_3844(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3844,2,t0,t1);}
t2=C_i_assq(t1,C_retrieve2(lf[34],"main#\052override\052"));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3757,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:379: g612 */
t4=t3;
f_3757(t4,((C_word*)t0)[3],t2);}
else{
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3838,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=((C_word*)t0)[2];
t7=C_u_i_car(t6);
/* chicken-install.scm:390: extension-information */
t8=C_fast_retrieve(lf[49]);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t5,t7);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[568] = {
{"f_4379:chicken_2dinstall_2escm",(void*)f_4379},
{"f_7221:chicken_2dinstall_2escm",(void*)f_7221},
{"f_7224:chicken_2dinstall_2escm",(void*)f_7224},
{"f_3858:chicken_2dinstall_2escm",(void*)f_3858},
{"f_4614:chicken_2dinstall_2escm",(void*)f_4614},
{"f_6485:chicken_2dinstall_2escm",(void*)f_6485},
{"f_5950:chicken_2dinstall_2escm",(void*)f_5950},
{"f_6280:chicken_2dinstall_2escm",(void*)f_6280},
{"f_5989:chicken_2dinstall_2escm",(void*)f_5989},
{"f_5981:chicken_2dinstall_2escm",(void*)f_5981},
{"f_6732:chicken_2dinstall_2escm",(void*)f_6732},
{"f_5247:chicken_2dinstall_2escm",(void*)f_5247},
{"f_5245:chicken_2dinstall_2escm",(void*)f_5245},
{"f_5731:chicken_2dinstall_2escm",(void*)f_5731},
{"f_5739:chicken_2dinstall_2escm",(void*)f_5739},
{"f_5978:chicken_2dinstall_2escm",(void*)f_5978},
{"f_5733:chicken_2dinstall_2escm",(void*)f_5733},
{"f_6762:chicken_2dinstall_2escm",(void*)f_6762},
{"f_5763:chicken_2dinstall_2escm",(void*)f_5763},
{"f_4827:chicken_2dinstall_2escm",(void*)f_4827},
{"f_2581:chicken_2dinstall_2escm",(void*)f_2581},
{"f_2587:chicken_2dinstall_2escm",(void*)f_2587},
{"f_6442:chicken_2dinstall_2escm",(void*)f_6442},
{"f_4162:chicken_2dinstall_2escm",(void*)f_4162},
{"f_5999:chicken_2dinstall_2escm",(void*)f_5999},
{"toplevel:chicken_2dinstall_2escm",(void*)C_toplevel},
{"f_6449:chicken_2dinstall_2escm",(void*)f_6449},
{"f_4168:chicken_2dinstall_2escm",(void*)f_4168},
{"f_3869:chicken_2dinstall_2escm",(void*)f_3869},
{"f_3865:chicken_2dinstall_2escm",(void*)f_3865},
{"f_4172:chicken_2dinstall_2escm",(void*)f_4172},
{"f_4175:chicken_2dinstall_2escm",(void*)f_4175},
{"f_6478:chicken_2dinstall_2escm",(void*)f_6478},
{"f_3875:chicken_2dinstall_2escm",(void*)f_3875},
{"f_2567:chicken_2dinstall_2escm",(void*)f_2567},
{"f_2569:chicken_2dinstall_2escm",(void*)f_2569},
{"f_6467:chicken_2dinstall_2escm",(void*)f_6467},
{"f_5391:chicken_2dinstall_2escm",(void*)f_5391},
{"f_5397:chicken_2dinstall_2escm",(void*)f_5397},
{"f_5394:chicken_2dinstall_2escm",(void*)f_5394},
{"f_2573:chicken_2dinstall_2escm",(void*)f_2573},
{"f_2576:chicken_2dinstall_2escm",(void*)f_2576},
{"f_5271:chicken_2dinstall_2escm",(void*)f_5271},
{"f_4199:chicken_2dinstall_2escm",(void*)f_4199},
{"f_5266:chicken_2dinstall_2escm",(void*)f_5266},
{"f_6911:chicken_2dinstall_2escm",(void*)f_6911},
{"f_5795:chicken_2dinstall_2escm",(void*)f_5795},
{"f_4673:chicken_2dinstall_2escm",(void*)f_4673},
{"f_4670:chicken_2dinstall_2escm",(void*)f_4670},
{"f_4676:chicken_2dinstall_2escm",(void*)f_4676},
{"f_4455:chicken_2dinstall_2escm",(void*)f_4455},
{"f_2551:chicken_2dinstall_2escm",(void*)f_2551},
{"f_2325:chicken_2dinstall_2escm",(void*)f_2325},
{"f_2322:chicken_2dinstall_2escm",(void*)f_2322},
{"f_4682:chicken_2dinstall_2escm",(void*)f_4682},
{"f_4679:chicken_2dinstall_2escm",(void*)f_4679},
{"f_4465:chicken_2dinstall_2escm",(void*)f_4465},
{"f_7026:chicken_2dinstall_2escm",(void*)f_7026},
{"f_2338:chicken_2dinstall_2escm",(void*)f_2338},
{"f_2335:chicken_2dinstall_2escm",(void*)f_2335},
{"f_2332:chicken_2dinstall_2escm",(void*)f_2332},
{"f_4148:chicken_2dinstall_2escm",(void*)f_4148},
{"f_4653:chicken_2dinstall_2escm",(void*)f_4653},
{"f_3176:chicken_2dinstall_2escm",(void*)f_3176},
{"f_4157:chicken_2dinstall_2escm",(void*)f_4157},
{"f_4661:chicken_2dinstall_2escm",(void*)f_4661},
{"f_6551:chicken_2dinstall_2escm",(void*)f_6551},
{"f_3145:chicken_2dinstall_2escm",(void*)f_3145},
{"f_4667:chicken_2dinstall_2escm",(void*)f_4667},
{"f_6584:chicken_2dinstall_2escm",(void*)f_6584},
{"f_6580:chicken_2dinstall_2escm",(void*)f_6580},
{"f_3155:chicken_2dinstall_2escm",(void*)f_3155},
{"f_2286:chicken_2dinstall_2escm",(void*)f_2286},
{"f_5569:chicken_2dinstall_2escm",(void*)f_5569},
{"f_7200:chicken_2dinstall_2escm",(void*)f_7200},
{"f_2289:chicken_2dinstall_2escm",(void*)f_2289},
{"f_5563:chicken_2dinstall_2escm",(void*)f_5563},
{"f_2295:chicken_2dinstall_2escm",(void*)f_2295},
{"f_2292:chicken_2dinstall_2escm",(void*)f_2292},
{"f_5558:chicken_2dinstall_2escm",(void*)f_5558},
{"f_5555:chicken_2dinstall_2escm",(void*)f_5555},
{"f_2298:chicken_2dinstall_2escm",(void*)f_2298},
{"f_6703:chicken_2dinstall_2escm",(void*)f_6703},
{"f_6706:chicken_2dinstall_2escm",(void*)f_6706},
{"f_5330:chicken_2dinstall_2escm",(void*)f_5330},
{"f_4289:chicken_2dinstall_2escm",(void*)f_4289},
{"f_6729:chicken_2dinstall_2escm",(void*)f_6729},
{"f_5321:chicken_2dinstall_2escm",(void*)f_5321},
{"f_4298:chicken_2dinstall_2escm",(void*)f_4298},
{"f7922:chicken_2dinstall_2escm",(void*)f7922},
{"f7927:chicken_2dinstall_2escm",(void*)f7927},
{"f7912:chicken_2dinstall_2escm",(void*)f7912},
{"f7917:chicken_2dinstall_2escm",(void*)f7917},
{"f_4416:chicken_2dinstall_2escm",(void*)f_4416},
{"f_3508:chicken_2dinstall_2escm",(void*)f_3508},
{"f_3505:chicken_2dinstall_2escm",(void*)f_3505},
{"f7939:chicken_2dinstall_2escm",(void*)f7939},
{"f7934:chicken_2dinstall_2escm",(void*)f7934},
{"f7964:chicken_2dinstall_2escm",(void*)f7964},
{"f7969:chicken_2dinstall_2escm",(void*)f7969},
{"f7954:chicken_2dinstall_2escm",(void*)f7954},
{"f7959:chicken_2dinstall_2escm",(void*)f7959},
{"f_3511:chicken_2dinstall_2escm",(void*)f_3511},
{"f7974:chicken_2dinstall_2escm",(void*)f7974},
{"f_5524:chicken_2dinstall_2escm",(void*)f_5524},
{"f_2787:chicken_2dinstall_2escm",(void*)f_2787},
{"f_5526:chicken_2dinstall_2escm",(void*)f_5526},
{"f_6941:chicken_2dinstall_2escm",(void*)f_6941},
{"f_6937:chicken_2dinstall_2escm",(void*)f_6937},
{"f_5312:chicken_2dinstall_2escm",(void*)f_5312},
{"f_4905:chicken_2dinstall_2escm",(void*)f_4905},
{"f_4900:chicken_2dinstall_2escm",(void*)f_4900},
{"f_5318:chicken_2dinstall_2escm",(void*)f_5318},
{"f_5315:chicken_2dinstall_2escm",(void*)f_5315},
{"f_4227:chicken_2dinstall_2escm",(void*)f_4227},
{"f_4918:chicken_2dinstall_2escm",(void*)f_4918},
{"f_4915:chicken_2dinstall_2escm",(void*)f_4915},
{"f_4705:chicken_2dinstall_2escm",(void*)f_4705},
{"f_4702:chicken_2dinstall_2escm",(void*)f_4702},
{"f_4911:chicken_2dinstall_2escm",(void*)f_4911},
{"f_4709:chicken_2dinstall_2escm",(void*)f_4709},
{"f_6012:chicken_2dinstall_2escm",(void*)f_6012},
{"f_6016:chicken_2dinstall_2escm",(void*)f_6016},
{"f_4239:chicken_2dinstall_2escm",(void*)f_4239},
{"f_4236:chicken_2dinstall_2escm",(void*)f_4236},
{"f_4233:chicken_2dinstall_2escm",(void*)f_4233},
{"f_4712:chicken_2dinstall_2escm",(void*)f_4712},
{"f_4716:chicken_2dinstall_2escm",(void*)f_4716},
{"f_5509:chicken_2dinstall_2escm",(void*)f_5509},
{"f_5811:chicken_2dinstall_2escm",(void*)f_5811},
{"f_5808:chicken_2dinstall_2escm",(void*)f_5808},
{"f_5806:chicken_2dinstall_2escm",(void*)f_5806},
{"f_5802:chicken_2dinstall_2escm",(void*)f_5802},
{"f_4961:chicken_2dinstall_2escm",(void*)f_4961},
{"f_4967:chicken_2dinstall_2escm",(void*)f_4967},
{"f_4973:chicken_2dinstall_2escm",(void*)f_4973},
{"f_4977:chicken_2dinstall_2escm",(void*)f_4977},
{"f_4983:chicken_2dinstall_2escm",(void*)f_4983},
{"f_4980:chicken_2dinstall_2escm",(void*)f_4980},
{"f_4985:chicken_2dinstall_2escm",(void*)f_4985},
{"f_4991:chicken_2dinstall_2escm",(void*)f_4991},
{"f_4997:chicken_2dinstall_2escm",(void*)f_4997},
{"f_4526:chicken_2dinstall_2escm",(void*)f_4526},
{"f_4923:chicken_2dinstall_2escm",(void*)f_4923},
{"f_4922:chicken_2dinstall_2escm",(void*)f_4922},
{"f_4209:chicken_2dinstall_2escm",(void*)f_4209},
{"f_4930:chicken_2dinstall_2escm",(void*)f_4930},
{"f_4936:chicken_2dinstall_2escm",(void*)f_4936},
{"f_4728:chicken_2dinstall_2escm",(void*)f_4728},
{"f_4720:chicken_2dinstall_2escm",(void*)f_4720},
{"f_7350:chicken_2dinstall_2escm",(void*)f_7350},
{"f_4941:chicken_2dinstall_2escm",(void*)f_4941},
{"f_4940:chicken_2dinstall_2escm",(void*)f_4940},
{"f_4014:chicken_2dinstall_2escm",(void*)f_4014},
{"f_7366:chicken_2dinstall_2escm",(void*)f_7366},
{"f_7342:chicken_2dinstall_2escm",(void*)f_7342},
{"f_5887:chicken_2dinstall_2escm",(void*)f_5887},
{"f_4024:chicken_2dinstall_2escm",(void*)f_4024},
{"f_5883:chicken_2dinstall_2escm",(void*)f_5883},
{"f_5881:chicken_2dinstall_2escm",(void*)f_5881},
{"f_4952:chicken_2dinstall_2escm",(void*)f_4952},
{"f_7356:chicken_2dinstall_2escm",(void*)f_7356},
{"f_4956:chicken_2dinstall_2escm",(void*)f_4956},
{"f_5871:chicken_2dinstall_2escm",(void*)f_5871},
{"f_5874:chicken_2dinstall_2escm",(void*)f_5874},
{"f_7344:chicken_2dinstall_2escm",(void*)f_7344},
{"f_3903:chicken_2dinstall_2escm",(void*)f_3903},
{"f_3906:chicken_2dinstall_2escm",(void*)f_3906},
{"f_3900:chicken_2dinstall_2escm",(void*)f_3900},
{"f_3909:chicken_2dinstall_2escm",(void*)f_3909},
{"f_5865:chicken_2dinstall_2escm",(void*)f_5865},
{"f_4001:chicken_2dinstall_2escm",(void*)f_4001},
{"f_5868:chicken_2dinstall_2escm",(void*)f_5868},
{"f_5861:chicken_2dinstall_2escm",(void*)f_5861},
{"f_7392:chicken_2dinstall_2escm",(void*)f_7392},
{"f_3249:chicken_2dinstall_2escm",(void*)f_3249},
{"f_5410:chicken_2dinstall_2escm",(void*)f_5410},
{"f_7381:chicken_2dinstall_2escm",(void*)f_7381},
{"f_5845:chicken_2dinstall_2escm",(void*)f_5845},
{"f_7394:chicken_2dinstall_2escm",(void*)f_7394},
{"f_7385:chicken_2dinstall_2escm",(void*)f_7385},
{"f_6413:chicken_2dinstall_2escm",(void*)f_6413},
{"f_5825:chicken_2dinstall_2escm",(void*)f_5825},
{"f_6411:chicken_2dinstall_2escm",(void*)f_6411},
{"f_5423:chicken_2dinstall_2escm",(void*)f_5423},
{"f_6521:chicken_2dinstall_2escm",(void*)f_6521},
{"f_3287:chicken_2dinstall_2escm",(void*)f_3287},
{"f_3283:chicken_2dinstall_2escm",(void*)f_3283},
{"f_6404:chicken_2dinstall_2escm",(void*)f_6404},
{"f_5105:chicken_2dinstall_2escm",(void*)f_5105},
{"f_6202:chicken_2dinstall_2escm",(void*)f_6202},
{"f_6207:chicken_2dinstall_2escm",(void*)f_6207},
{"f_5121:chicken_2dinstall_2escm",(void*)f_5121},
{"f_3264:chicken_2dinstall_2escm",(void*)f_3264},
{"f_3268:chicken_2dinstall_2escm",(void*)f_3268},
{"f_5126:chicken_2dinstall_2escm",(void*)f_5126},
{"f_5112:chicken_2dinstall_2escm",(void*)f_5112},
{"f_3719:chicken_2dinstall_2escm",(void*)f_3719},
{"f_3713:chicken_2dinstall_2escm",(void*)f_3713},
{"f_4765:chicken_2dinstall_2escm",(void*)f_4765},
{"f_4768:chicken_2dinstall_2escm",(void*)f_4768},
{"f_4504:chicken_2dinstall_2escm",(void*)f_4504},
{"f_7174:chicken_2dinstall_2escm",(void*)f_7174},
{"f_2403:chicken_2dinstall_2escm",(void*)f_2403},
{"f_2406:chicken_2dinstall_2escm",(void*)f_2406},
{"f_2400:chicken_2dinstall_2escm",(void*)f_2400},
{"f_3092:chicken_2dinstall_2escm",(void*)f_3092},
{"f_4771:chicken_2dinstall_2escm",(void*)f_4771},
{"f_4777:chicken_2dinstall_2escm",(void*)f_4777},
{"f_5131:chicken_2dinstall_2escm",(void*)f_5131},
{"f_2820:chicken_2dinstall_2escm",(void*)f_2820},
{"f_2825:chicken_2dinstall_2escm",(void*)f_2825},
{"f_5137:chicken_2dinstall_2escm",(void*)f_5137},
{"f_4783:chicken_2dinstall_2escm",(void*)f_4783},
{"f_5605:chicken_2dinstall_2escm",(void*)f_5605},
{"f_4786:chicken_2dinstall_2escm",(void*)f_4786},
{"f_4789:chicken_2dinstall_2escm",(void*)f_4789},
{"f_3075:chicken_2dinstall_2escm",(void*)f_3075},
{"f_2835:chicken_2dinstall_2escm",(void*)f_2835},
{"f_4796:chicken_2dinstall_2escm",(void*)f_4796},
{"f_4799:chicken_2dinstall_2escm",(void*)f_4799},
{"f_5607:chicken_2dinstall_2escm",(void*)f_5607},
{"f_7360:chicken_2dinstall_2escm",(void*)f_7360},
{"f_7363:chicken_2dinstall_2escm",(void*)f_7363},
{"f_3043:chicken_2dinstall_2escm",(void*)f_3043},
{"f_7375:chicken_2dinstall_2escm",(void*)f_7375},
{"f_7136:chicken_2dinstall_2escm",(void*)f_7136},
{"f_2856:chicken_2dinstall_2escm",(void*)f_2856},
{"f_7132:chicken_2dinstall_2escm",(void*)f_7132},
{"f_2850:chicken_2dinstall_2escm",(void*)f_2850},
{"f_2854:chicken_2dinstall_2escm",(void*)f_2854},
{"f_4732:chicken_2dinstall_2escm",(void*)f_4732},
{"f_5406:chicken_2dinstall_2escm",(void*)f_5406},
{"f_4738:chicken_2dinstall_2escm",(void*)f_4738},
{"f_4433:chicken_2dinstall_2escm",(void*)f_4433},
{"f_4744:chicken_2dinstall_2escm",(void*)f_4744},
{"f_4747:chicken_2dinstall_2escm",(void*)f_4747},
{"f_7408:chicken_2dinstall_2escm",(void*)f_7408},
{"f_4750:chicken_2dinstall_2escm",(void*)f_4750},
{"f_7400:chicken_2dinstall_2escm",(void*)f_7400},
{"f_4759:chicken_2dinstall_2escm",(void*)f_4759},
{"f7944:chicken_2dinstall_2escm",(void*)f7944},
{"f7949:chicken_2dinstall_2escm",(void*)f7949},
{"f_5371:chicken_2dinstall_2escm",(void*)f_5371},
{"f_5373:chicken_2dinstall_2escm",(void*)f_5373},
{"f_3668:chicken_2dinstall_2escm",(void*)f_3668},
{"f_7412:chicken_2dinstall_2escm",(void*)f_7412},
{"f_5367:chicken_2dinstall_2escm",(void*)f_5367},
{"f_3639:chicken_2dinstall_2escm",(void*)f_3639},
{"f_3636:chicken_2dinstall_2escm",(void*)f_3636},
{"f_4478:chicken_2dinstall_2escm",(void*)f_4478},
{"f_3400:chicken_2dinstall_2escm",(void*)f_3400},
{"f_4385:chicken_2dinstall_2escm",(void*)f_4385},
{"f_4387:chicken_2dinstall_2escm",(void*)f_4387},
{"f_3644:chicken_2dinstall_2escm",(void*)f_3644},
{"f_6885:chicken_2dinstall_2escm",(void*)f_6885},
{"f_4488:chicken_2dinstall_2escm",(void*)f_4488},
{"f_6144:chicken_2dinstall_2escm",(void*)f_6144},
{"f_3207:chicken_2dinstall_2escm",(void*)f_3207},
{"f_3204:chicken_2dinstall_2escm",(void*)f_3204},
{"f_3698:chicken_2dinstall_2escm",(void*)f_3698},
{"f_6130:chicken_2dinstall_2escm",(void*)f_6130},
{"f_3236:chicken_2dinstall_2escm",(void*)f_3236},
{"f_4574:chicken_2dinstall_2escm",(void*)f_4574},
{"f7986:chicken_2dinstall_2escm",(void*)f7986},
{"f7981:chicken_2dinstall_2escm",(void*)f7981},
{"f_7182:chicken_2dinstall_2escm",(void*)f_7182},
{"f_6160:chicken_2dinstall_2escm",(void*)f_6160},
{"f_6167:chicken_2dinstall_2escm",(void*)f_6167},
{"f_6154:chicken_2dinstall_2escm",(void*)f_6154},
{"f_4590:chicken_2dinstall_2escm",(void*)f_4590},
{"f_2414:chicken_2dinstall_2escm",(void*)f_2414},
{"f_5591:chicken_2dinstall_2escm",(void*)f_5591},
{"f_6180:chicken_2dinstall_2escm",(void*)f_6180},
{"f_3682:chicken_2dinstall_2escm",(void*)f_3682},
{"f_4561:chicken_2dinstall_2escm",(void*)f_4561},
{"f_5548:chicken_2dinstall_2escm",(void*)f_5548},
{"f_6171:chicken_2dinstall_2escm",(void*)f_6171},
{"f_4250:chicken_2dinstall_2escm",(void*)f_4250},
{"f_4536:chicken_2dinstall_2escm",(void*)f_4536},
{"f_7327:chicken_2dinstall_2escm",(void*)f_7327},
{"f_5538:chicken_2dinstall_2escm",(void*)f_5538},
{"f_5534:chicken_2dinstall_2escm",(void*)f_5534},
{"f_5491:chicken_2dinstall_2escm",(void*)f_5491},
{"f_7339:chicken_2dinstall_2escm",(void*)f_7339},
{"f_3220:chicken_2dinstall_2escm",(void*)f_3220},
{"f_7336:chicken_2dinstall_2escm",(void*)f_7336},
{"f_5499:chicken_2dinstall_2escm",(void*)f_5499},
{"f_7333:chicken_2dinstall_2escm",(void*)f_7333},
{"f_7330:chicken_2dinstall_2escm",(void*)f_7330},
{"f_3484:chicken_2dinstall_2escm",(void*)f_3484},
{"f_5442:chicken_2dinstall_2escm",(void*)f_5442},
{"f_6199:chicken_2dinstall_2escm",(void*)f_6199},
{"f_5448:chicken_2dinstall_2escm",(void*)f_5448},
{"f_5445:chicken_2dinstall_2escm",(void*)f_5445},
{"f_3481:chicken_2dinstall_2escm",(void*)f_3481},
{"f_3496:chicken_2dinstall_2escm",(void*)f_3496},
{"f_4284:chicken_2dinstall_2escm",(void*)f_4284},
{"f_4281:chicken_2dinstall_2escm",(void*)f_4281},
{"f_5472:chicken_2dinstall_2escm",(void*)f_5472},
{"f_5479:chicken_2dinstall_2escm",(void*)f_5479},
{"f_3493:chicken_2dinstall_2escm",(void*)f_3493},
{"f_5589:chicken_2dinstall_2escm",(void*)f_5589},
{"f_3465:chicken_2dinstall_2escm",(void*)f_3465},
{"f_4328:chicken_2dinstall_2escm",(void*)f_4328},
{"f_5575:chicken_2dinstall_2escm",(void*)f_5575},
{"f_4260:chicken_2dinstall_2escm",(void*)f_4260},
{"f_5451:chicken_2dinstall_2escm",(void*)f_5451},
{"f_4265:chicken_2dinstall_2escm",(void*)f_4265},
{"f_6394:chicken_2dinstall_2escm",(void*)f_6394},
{"f_5457:chicken_2dinstall_2escm",(void*)f_5457},
{"f_5454:chicken_2dinstall_2escm",(void*)f_5454},
{"f_3471:chicken_2dinstall_2escm",(void*)f_3471},
{"f_3448:chicken_2dinstall_2escm",(void*)f_3448},
{"f_4272:chicken_2dinstall_2escm",(void*)f_4272},
{"f_6384:chicken_2dinstall_2escm",(void*)f_6384},
{"f_2394:chicken_2dinstall_2escm",(void*)f_2394},
{"f_2390:chicken_2dinstall_2escm",(void*)f_2390},
{"f_6640:chicken_2dinstall_2escm",(void*)f_6640},
{"f_4242:chicken_2dinstall_2escm",(void*)f_4242},
{"f_3459:chicken_2dinstall_2escm",(void*)f_3459},
{"f_3454:chicken_2dinstall_2escm",(void*)f_3454},
{"f_5430:chicken_2dinstall_2escm",(void*)f_5430},
{"f_4245:chicken_2dinstall_2escm",(void*)f_4245},
{"f_4278:chicken_2dinstall_2escm",(void*)f_4278},
{"f_2365:chicken_2dinstall_2escm",(void*)f_2365},
{"f_6671:chicken_2dinstall_2escm",(void*)f_6671},
{"f_6678:chicken_2dinstall_2escm",(void*)f_6678},
{"f_3420:chicken_2dinstall_2escm",(void*)f_3420},
{"f_2665:chicken_2dinstall_2escm",(void*)f_2665},
{"f_5460:chicken_2dinstall_2escm",(void*)f_5460},
{"f_5469:chicken_2dinstall_2escm",(void*)f_5469},
{"f_5466:chicken_2dinstall_2escm",(void*)f_5466},
{"f_5463:chicken_2dinstall_2escm",(void*)f_5463},
{"f_6356:chicken_2dinstall_2escm",(void*)f_6356},
{"f_3430:chicken_2dinstall_2escm",(void*)f_3430},
{"f_6342:chicken_2dinstall_2escm",(void*)f_6342},
{"f_4057:chicken_2dinstall_2escm",(void*)f_4057},
{"f_3301:chicken_2dinstall_2escm",(void*)f_3301},
{"f_2453:chicken_2dinstall_2escm",(void*)f_2453},
{"f_2451:chicken_2dinstall_2escm",(void*)f_2451},
{"f_6371:chicken_2dinstall_2escm",(void*)f_6371},
{"f_5682:chicken_2dinstall_2escm",(void*)f_5682},
{"f_5684:chicken_2dinstall_2escm",(void*)f_5684},
{"f_5688:chicken_2dinstall_2escm",(void*)f_5688},
{"f_6810:chicken_2dinstall_2escm",(void*)f_6810},
{"f_6362:chicken_2dinstall_2escm",(void*)f_6362},
{"f_6365:chicken_2dinstall_2escm",(void*)f_6365},
{"f_6368:chicken_2dinstall_2escm",(void*)f_6368},
{"f_5677:chicken_2dinstall_2escm",(void*)f_5677},
{"f_2471:chicken_2dinstall_2escm",(void*)f_2471},
{"f_7120:chicken_2dinstall_2escm",(void*)f_7120},
{"f_5483:chicken_2dinstall_2escm",(void*)f_5483},
{"f_5485:chicken_2dinstall_2escm",(void*)f_5485},
{"f_4090:chicken_2dinstall_2escm",(void*)f_4090},
{"f_5642:chicken_2dinstall_2escm",(void*)f_5642},
{"f_2460:chicken_2dinstall_2escm",(void*)f_2460},
{"f_2467:chicken_2dinstall_2escm",(void*)f_2467},
{"f_4072:chicken_2dinstall_2escm",(void*)f_4072},
{"f_4075:chicken_2dinstall_2escm",(void*)f_4075},
{"f_7113:chicken_2dinstall_2escm",(void*)f_7113},
{"f_5148:chicken_2dinstall_2escm",(void*)f_5148},
{"f_4080:chicken_2dinstall_2escm",(void*)f_4080},
{"f_3980:chicken_2dinstall_2escm",(void*)f_3980},
{"f_3581:chicken_2dinstall_2escm",(void*)f_3581},
{"f_4303:chicken_2dinstall_2escm",(void*)f_4303},
{"f_5161:chicken_2dinstall_2escm",(void*)f_5161},
{"f_3552:chicken_2dinstall_2escm",(void*)f_3552},
{"f_4313:chicken_2dinstall_2escm",(void*)f_4313},
{"f_5281:chicken_2dinstall_2escm",(void*)f_5281},
{"f_3587:chicken_2dinstall_2escm",(void*)f_3587},
{"f_3989:chicken_2dinstall_2escm",(void*)f_3989},
{"f_5155:chicken_2dinstall_2escm",(void*)f_5155},
{"f_3983:chicken_2dinstall_2escm",(void*)f_3983},
{"f_3960:chicken_2dinstall_2escm",(void*)f_3960},
{"f_3558:chicken_2dinstall_2escm",(void*)f_3558},
{"f_5183:chicken_2dinstall_2escm",(void*)f_5183},
{"f_3566:chicken_2dinstall_2escm",(void*)f_3566},
{"f_5172:chicken_2dinstall_2escm",(void*)f_5172},
{"f_5003:chicken_2dinstall_2escm",(void*)f_5003},
{"f_3956:chicken_2dinstall_2escm",(void*)f_3956},
{"f_2600:chicken_2dinstall_2escm",(void*)f_2600},
{"f_5691:chicken_2dinstall_2escm",(void*)f_5691},
{"f_5696:chicken_2dinstall_2escm",(void*)f_5696},
{"f_4126:chicken_2dinstall_2escm",(void*)f_4126},
{"f_3623:chicken_2dinstall_2escm",(void*)f_3623},
{"f_2613:chicken_2dinstall_2escm",(void*)f_2613},
{"f_2611:chicken_2dinstall_2escm",(void*)f_2611},
{"f_7107:chicken_2dinstall_2escm",(void*)f_7107},
{"f_3618:chicken_2dinstall_2escm",(void*)f_3618},
{"f_3614:chicken_2dinstall_2escm",(void*)f_3614},
{"f_4130:chicken_2dinstall_2escm",(void*)f_4130},
{"f_3602:chicken_2dinstall_2escm",(void*)f_3602},
{"f_3963:chicken_2dinstall_2escm",(void*)f_3963},
{"f_3356:chicken_2dinstall_2escm",(void*)f_3356},
{"f_3976:chicken_2dinstall_2escm",(void*)f_3976},
{"f_3975:chicken_2dinstall_2escm",(void*)f_3975},
{"f_3972:chicken_2dinstall_2escm",(void*)f_3972},
{"f_3593:chicken_2dinstall_2escm",(void*)f_3593},
{"f_3351:chicken_2dinstall_2escm",(void*)f_3351},
{"f_3350:chicken_2dinstall_2escm",(void*)f_3350},
{"f_3367:chicken_2dinstall_2escm",(void*)f_3367},
{"f_3362:chicken_2dinstall_2escm",(void*)f_3362},
{"f_5230:chicken_2dinstall_2escm",(void*)f_5230},
{"f_3597:chicken_2dinstall_2escm",(void*)f_3597},
{"f_2703:chicken_2dinstall_2escm",(void*)f_2703},
{"f_5222:chicken_2dinstall_2escm",(void*)f_5222},
{"f_2701:chicken_2dinstall_2escm",(void*)f_2701},
{"f_5212:chicken_2dinstall_2escm",(void*)f_5212},
{"f_5226:chicken_2dinstall_2escm",(void*)f_5226},
{"f_3394:chicken_2dinstall_2escm",(void*)f_3394},
{"f_5039:chicken_2dinstall_2escm",(void*)f_5039},
{"f_5034:chicken_2dinstall_2escm",(void*)f_5034},
{"f_5028:chicken_2dinstall_2escm",(void*)f_5028},
{"f_5022:chicken_2dinstall_2escm",(void*)f_5022},
{"f_3385:chicken_2dinstall_2escm",(void*)f_3385},
{"f_3381:chicken_2dinstall_2escm",(void*)f_3381},
{"f_2902:chicken_2dinstall_2escm",(void*)f_2902},
{"f_2905:chicken_2dinstall_2escm",(void*)f_2905},
{"f_7283:chicken_2dinstall_2escm",(void*)f_7283},
{"f_2912:chicken_2dinstall_2escm",(void*)f_2912},
{"f_7237:chicken_2dinstall_2escm",(void*)f_7237},
{"f_7230:chicken_2dinstall_2escm",(void*)f_7230},
{"f_5702:chicken_2dinstall_2escm",(void*)f_5702},
{"f_5708:chicken_2dinstall_2escm",(void*)f_5708},
{"f_7247:chicken_2dinstall_2escm",(void*)f_7247},
{"f_7243:chicken_2dinstall_2escm",(void*)f_7243},
{"f_6613:chicken_2dinstall_2escm",(void*)f_6613},
{"f_5722:chicken_2dinstall_2escm",(void*)f_5722},
{"f_5725:chicken_2dinstall_2escm",(void*)f_5725},
{"f_5728:chicken_2dinstall_2escm",(void*)f_5728},
{"f_5209:chicken_2dinstall_2escm",(void*)f_5209},
{"f_5206:chicken_2dinstall_2escm",(void*)f_5206},
{"f_7267:chicken_2dinstall_2escm",(void*)f_7267},
{"f_7263:chicken_2dinstall_2escm",(void*)f_7263},
{"f_2746:chicken_2dinstall_2escm",(void*)f_2746},
{"f_6636:chicken_2dinstall_2escm",(void*)f_6636},
{"f_2749:chicken_2dinstall_2escm",(void*)f_2749},
{"f_6620:chicken_2dinstall_2escm",(void*)f_6620},
{"f_3757:chicken_2dinstall_2escm",(void*)f_3757},
{"f_2984:chicken_2dinstall_2escm",(void*)f_2984},
{"f_6629:chicken_2dinstall_2escm",(void*)f_6629},
{"f_2997:chicken_2dinstall_2escm",(void*)f_2997},
{"f_7052:chicken_2dinstall_2escm",(void*)f_7052},
{"f_3761:chicken_2dinstall_2escm",(void*)f_3761},
{"f_2779:chicken_2dinstall_2escm",(void*)f_2779},
{"f_2966:chicken_2dinstall_2escm",(void*)f_2966},
{"f_3739:chicken_2dinstall_2escm",(void*)f_3739},
{"f_2962:chicken_2dinstall_2escm",(void*)f_2962},
{"f_6103:chicken_2dinstall_2escm",(void*)f_6103},
{"f_3747:chicken_2dinstall_2escm",(void*)f_3747},
{"f_2974:chicken_2dinstall_2escm",(void*)f_2974},
{"f_3749:chicken_2dinstall_2escm",(void*)f_3749},
{"f_6074:chicken_2dinstall_2escm",(void*)f_6074},
{"f_2502:chicken_2dinstall_2escm",(void*)f_2502},
{"f_2508:chicken_2dinstall_2escm",(void*)f_2508},
{"f_2949:chicken_2dinstall_2escm",(void*)f_2949},
{"f_3795:chicken_2dinstall_2escm",(void*)f_3795},
{"f_2943:chicken_2dinstall_2escm",(void*)f_2943},
{"f_3798:chicken_2dinstall_2escm",(void*)f_3798},
{"f_6062:chicken_2dinstall_2escm",(void*)f_6062},
{"f_3792:chicken_2dinstall_2escm",(void*)f_3792},
{"f_2514:chicken_2dinstall_2escm",(void*)f_2514},
{"f_2517:chicken_2dinstall_2escm",(void*)f_2517},
{"f_6123:chicken_2dinstall_2escm",(void*)f_6123},
{"f_6127:chicken_2dinstall_2escm",(void*)f_6127},
{"f_2511:chicken_2dinstall_2escm",(void*)f_2511},
{"f_2958:chicken_2dinstall_2escm",(void*)f_2958},
{"f_2950:chicken_2dinstall_2escm",(void*)f_2950},
{"f_6091:chicken_2dinstall_2escm",(void*)f_6091},
{"f_6095:chicken_2dinstall_2escm",(void*)f_6095},
{"f_6099:chicken_2dinstall_2escm",(void*)f_6099},
{"f_6111:chicken_2dinstall_2escm",(void*)f_6111},
{"f_2732:chicken_2dinstall_2escm",(void*)f_2732},
{"f_3777:chicken_2dinstall_2escm",(void*)f_3777},
{"f_2924:chicken_2dinstall_2escm",(void*)f_2924},
{"f_2922:chicken_2dinstall_2escm",(void*)f_2922},
{"f_6080:chicken_2dinstall_2escm",(void*)f_6080},
{"f_6084:chicken_2dinstall_2escm",(void*)f_6084},
{"f_3771:chicken_2dinstall_2escm",(void*)f_3771},
{"f_3013:chicken_2dinstall_2escm",(void*)f_3013},
{"f_3786:chicken_2dinstall_2escm",(void*)f_3786},
{"f_5716:chicken_2dinstall_2escm",(void*)f_5716},
{"f_3789:chicken_2dinstall_2escm",(void*)f_3789},
{"f_6030:chicken_2dinstall_2escm",(void*)f_6030},
{"f_3780:chicken_2dinstall_2escm",(void*)f_3780},
{"f_3783:chicken_2dinstall_2escm",(void*)f_3783},
{"f_3007:chicken_2dinstall_2escm",(void*)f_3007},
{"f_6313:chicken_2dinstall_2escm",(void*)f_6313},
{"f_6311:chicken_2dinstall_2escm",(void*)f_6311},
{"f_6304:chicken_2dinstall_2escm",(void*)f_6304},
{"f_4818:chicken_2dinstall_2escm",(void*)f_4818},
{"f_6045:chicken_2dinstall_2escm",(void*)f_6045},
{"f_6043:chicken_2dinstall_2escm",(void*)f_6043},
{"f_4811:chicken_2dinstall_2escm",(void*)f_4811},
{"f_7098:chicken_2dinstall_2escm",(void*)f_7098},
{"f_3108:chicken_2dinstall_2escm",(void*)f_3108},
{"f_4808:chicken_2dinstall_2escm",(void*)f_4808},
{"f_4805:chicken_2dinstall_2escm",(void*)f_4805},
{"f_6238:chicken_2dinstall_2escm",(void*)f_6238},
{"f_4851:chicken_2dinstall_2escm",(void*)f_4851},
{"f_4869:chicken_2dinstall_2escm",(void*)f_4869},
{"f_3123:chicken_2dinstall_2escm",(void*)f_3123},
{"f_4866:chicken_2dinstall_2escm",(void*)f_4866},
{"f_6796:chicken_2dinstall_2escm",(void*)f_6796},
{"f_6254:chicken_2dinstall_2escm",(void*)f_6254},
{"f_4863:chicken_2dinstall_2escm",(void*)f_4863},
{"f_4860:chicken_2dinstall_2escm",(void*)f_4860},
{"f_2642:chicken_2dinstall_2escm",(void*)f_2642},
{"f_5081:chicken_2dinstall_2escm",(void*)f_5081},
{"f_2656:chicken_2dinstall_2escm",(void*)f_2656},
{"f_2658:chicken_2dinstall_2escm",(void*)f_2658},
{"f_5903:chicken_2dinstall_2escm",(void*)f_5903},
{"f_3838:chicken_2dinstall_2escm",(void*)f_3838},
{"f_5075:chicken_2dinstall_2escm",(void*)f_5075},
{"f_6273:chicken_2dinstall_2escm",(void*)f_6273},
{"f_6277:chicken_2dinstall_2escm",(void*)f_6277},
{"f_2523:chicken_2dinstall_2escm",(void*)f_2523},
{"f_2520:chicken_2dinstall_2escm",(void*)f_2520},
{"f_4845:chicken_2dinstall_2escm",(void*)f_4845},
{"f_4842:chicken_2dinstall_2escm",(void*)f_4842},
{"f_4897:chicken_2dinstall_2escm",(void*)f_4897},
{"f_5063:chicken_2dinstall_2escm",(void*)f_5063},
{"f_3888:chicken_2dinstall_2escm",(void*)f_3888},
{"f_5061:chicken_2dinstall_2escm",(void*)f_5061},
{"f_3882:chicken_2dinstall_2escm",(void*)f_3882},
{"f_5069:chicken_2dinstall_2escm",(void*)f_5069},
{"f_2307:chicken_2dinstall_2escm",(void*)f_2307},
{"f_2301:chicken_2dinstall_2escm",(void*)f_2301},
{"f_2304:chicken_2dinstall_2escm",(void*)f_2304},
{"f_4893:chicken_2dinstall_2escm",(void*)f_4893},
{"f_4892:chicken_2dinstall_2escm",(void*)f_4892},
{"f_5051:chicken_2dinstall_2escm",(void*)f_5051},
{"f_3897:chicken_2dinstall_2escm",(void*)f_3897},
{"f_3891:chicken_2dinstall_2escm",(void*)f_3891},
{"f_5055:chicken_2dinstall_2escm",(void*)f_5055},
{"f_3894:chicken_2dinstall_2escm",(void*)f_3894},
{"f_2319:chicken_2dinstall_2escm",(void*)f_2319},
{"f_5058:chicken_2dinstall_2escm",(void*)f_5058},
{"f_2316:chicken_2dinstall_2escm",(void*)f_2316},
{"f_4341:chicken_2dinstall_2escm",(void*)f_4341},
{"f_2313:chicken_2dinstall_2escm",(void*)f_2313},
{"f_5751:chicken_2dinstall_2escm",(void*)f_5751},
{"f_4345:chicken_2dinstall_2escm",(void*)f_4345},
{"f_2310:chicken_2dinstall_2escm",(void*)f_2310},
{"f_6298:chicken_2dinstall_2escm",(void*)f_6298},
{"f_5757:chicken_2dinstall_2escm",(void*)f_5757},
{"f_5755:chicken_2dinstall_2escm",(void*)f_5755},
{"f_3114:chicken_2dinstall_2escm",(void*)f_3114},
{"f_4877:chicken_2dinstall_2escm",(void*)f_4877},
{"f_5045:chicken_2dinstall_2escm",(void*)f_5045},
{"f_6244:chicken_2dinstall_2escm",(void*)f_6244},
{"f_4351:chicken_2dinstall_2escm",(void*)f_4351},
{"f_6241:chicken_2dinstall_2escm",(void*)f_6241},
{"f_5782:chicken_2dinstall_2escm",(void*)f_5782},
{"f_4358:chicken_2dinstall_2escm",(void*)f_4358},
{"f_5944:chicken_2dinstall_2escm",(void*)f_5944},
{"f_4872:chicken_2dinstall_2escm",(void*)f_4872},
{"f_4873:chicken_2dinstall_2escm",(void*)f_4873},
{"f_4886:chicken_2dinstall_2escm",(void*)f_4886},
{"f_6776:chicken_2dinstall_2escm",(void*)f_6776},
{"f_5772:chicken_2dinstall_2escm",(void*)f_5772},
{"f_5932:chicken_2dinstall_2escm",(void*)f_5932},
{"f_4883:chicken_2dinstall_2escm",(void*)f_4883},
{"f_4880:chicken_2dinstall_2escm",(void*)f_4880},
{"f_7217:chicken_2dinstall_2escm",(void*)f_7217},
{"f_3844:chicken_2dinstall_2escm",(void*)f_3844},
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
o|hiding nonexported module bindings: main#+default-repository-files+ 
o|hiding nonexported module bindings: main#constant159 
o|hiding nonexported module bindings: main#constant163 
o|hiding nonexported module bindings: main#*program-path* 
o|hiding nonexported module bindings: main#*keep* 
o|hiding nonexported module bindings: main#*keep-existing* 
o|hiding nonexported module bindings: main#*force* 
o|hiding nonexported module bindings: main#*run-tests* 
o|hiding nonexported module bindings: main#*retrieve-only* 
o|hiding nonexported module bindings: main#*no-install* 
o|hiding nonexported module bindings: main#*username* 
o|hiding nonexported module bindings: main#*password* 
o|hiding nonexported module bindings: main#*default-sources* 
o|hiding nonexported module bindings: main#*default-location* 
o|hiding nonexported module bindings: main#*default-transport* 
o|hiding nonexported module bindings: main#*windows-shell* 
o|hiding nonexported module bindings: main#*proxy-host* 
o|hiding nonexported module bindings: main#*proxy-port* 
o|hiding nonexported module bindings: main#*proxy-user-pass* 
o|hiding nonexported module bindings: main#*running-test* 
o|hiding nonexported module bindings: main#*mappings* 
o|hiding nonexported module bindings: main#*deploy* 
o|hiding nonexported module bindings: main#*trunk* 
o|hiding nonexported module bindings: main#*csc-features* 
o|hiding nonexported module bindings: main#*csc-nonfeatures* 
o|hiding nonexported module bindings: main#*prefix* 
o|hiding nonexported module bindings: main#*aliases* 
o|hiding nonexported module bindings: main#*cross-chicken* 
o|hiding nonexported module bindings: main#*host-extension* 
o|hiding nonexported module bindings: main#*target-extension* 
o|hiding nonexported module bindings: main#*debug-setup* 
o|hiding nonexported module bindings: main#*keep-going* 
o|hiding nonexported module bindings: main#*override* 
o|hiding nonexported module bindings: main#*reinstall* 
o|hiding nonexported module bindings: main#*show-depends* 
o|hiding nonexported module bindings: main#*show-foreign-depends* 
o|hiding nonexported module bindings: main#*hacks* 
o|hiding nonexported module bindings: main#repo-path 
o|hiding nonexported module bindings: main#get-prefix 
o|hiding nonexported module bindings: main#load-defaults 
o|hiding nonexported module bindings: main#resolve-location 
o|hiding nonexported module bindings: main#known-default-sources 
o|hiding nonexported module bindings: main#deps 
o|hiding nonexported module bindings: main#init-repository 
o|hiding nonexported module bindings: main#ext-version 
o|hiding nonexported module bindings: main#meta-dependencies 
o|hiding nonexported module bindings: main#check-dependency 
o|hiding nonexported module bindings: main#outdated-dependencies 
o|hiding nonexported module bindings: main#*eggs+dirs+vers* 
o|hiding nonexported module bindings: main#*dependencies* 
o|hiding nonexported module bindings: main#*checked* 
o|hiding nonexported module bindings: main#*csi* 
o|hiding nonexported module bindings: main#try-extension 
o|hiding nonexported module bindings: main#with-default-sources 
o|hiding nonexported module bindings: main#try-default-sources 
o|hiding nonexported module bindings: main#make-replace-extension-question 
o|hiding nonexported module bindings: main#override-version 
o|hiding nonexported module bindings: main#show-depends 
o|hiding nonexported module bindings: main#retrieve 
o|hiding nonexported module bindings: main#check-platform 
o|hiding nonexported module bindings: main#make-install-command 
o|hiding nonexported module bindings: main#keep-going 
o|hiding nonexported module bindings: main#install 
o|hiding nonexported module bindings: main#delete-stale-binaries 
o|hiding nonexported module bindings: main#cleanup 
o|hiding nonexported module bindings: main#update-db 
o|hiding nonexported module bindings: main#apply-mappings 
o|hiding nonexported module bindings: main#scan-directory 
o|hiding nonexported module bindings: main#$system 
o|hiding nonexported module bindings: main#installed-extensions 
o|hiding nonexported module bindings: main#list-available-extensions 
o|hiding nonexported module bindings: main#command 
o|hiding nonexported module bindings: main#usage 
o|hiding nonexported module bindings: main#setup-proxy 
o|hiding nonexported module bindings: main#info->egg 
o|hiding nonexported module bindings: main#*short-options* 
o|hiding nonexported module bindings: main#main 
S|applied compiler syntax:
S|  fprintf		1
S|  printf		1
S|  map		10
S|  for-each		12
S|  sprintf		11
o|eliminated procedure checks: 130 
o|specializations:
o|  1 (> fixnum fixnum)
o|  1 (string-ref string fixnum)
o|  2 (string-length string)
o|  9 (cddr (pair * pair))
o|  1 (zero? fixnum)
o|  1 (string-append string string)
o|  5 (current-error-port)
o|  46 (string=? string string)
o|  24 (car pair)
o|  7 (##sys#check-list (or pair list) *)
o|  2 (= fixnum fixnum)
o|  48 (cdr pair)
o|  8 (eqv? * (not float))
o|  2 (positive? fixnum)
o|  4 (length list)
o|  13 (##sys#check-output-port * * *)
o|Removed `not' forms: 15 
o|merged explicitly consed rest parameter: tmp222223 
o|inlining procedure: k2419 
o|contracted procedure: k2434 
o|inlining procedure: k2419 
o|propagated global variable: r24207420 main#*prefix* 
o|inlining procedure: k2861 
o|contracted procedure: "(chicken-install.scm:179) g376377" 
o|inlining procedure: k2861 
o|inlining procedure: k2932 
o|inlining procedure: k2932 
o|inlining procedure: k2999 
o|inlining procedure: k2999 
o|contracted procedure: "(chicken-install.scm:213) g434435" 
o|inlining procedure: k3022 
o|inlining procedure: k3022 
o|inlining procedure: k3038 
o|inlining procedure: k3038 
o|inlining procedure: k3077 
o|inlining procedure: k3090 
o|inlining procedure: k3090 
o|contracted procedure: k3099 
o|inlining procedure: k3077 
o|inlining procedure: k3125 
o|inlining procedure: k3135 
o|inlining procedure: k3135 
o|inlining procedure: k3125 
o|inlining procedure: k3157 
o|inlining procedure: k3157 
o|inlining procedure: k3178 
o|inlining procedure: k3178 
o|inlining procedure: k3187 
o|inlining procedure: k3187 
o|contracted procedure: k3193 
o|inlining procedure: k3199 
o|contracted procedure: k3226 
o|inlining procedure: k3223 
o|inlining procedure: k3223 
o|substituted constant variable: a3232 
o|inlining procedure: k3237 
o|inlining procedure: k3237 
o|propagated global variable: tmp480482 main#*deploy* 
o|propagated global variable: tmp480482 main#*deploy* 
o|inlining procedure: k3199 
o|inlining procedure: k3308 
o|inlining procedure: k3308 
o|substituted constant variable: a3329 
o|inlining procedure: k3604 
o|inlining procedure: k3604 
o|inlining procedure: k3666 
o|inlining procedure: k3666 
o|inlining procedure: k3680 
o|inlining procedure: k3680 
o|contracted procedure: "(chicken-install.scm:337) main#known-default-sources" 
o|inlining procedure: k2878 
o|inlining procedure: k2900 
o|inlining procedure: k2900 
o|propagated global variable: r29017472 main#*default-location* 
o|inlining procedure: k2878 
o|propagated global variable: r28797474 main#*default-sources* 
o|merged explicitly consed rest parameter: type671 
o|propagated global variable: out677681 ##sys#standard-output 
o|substituted constant variable: a3968 
o|substituted constant variable: a3969 
o|inlining procedure: k3984 
o|inlining procedure: k3993 
o|inlining procedure: k3993 
o|inlining procedure: k4016 
o|contracted procedure: "(chicken-install.scm:428) g710717" 
o|inlining procedure: k4016 
o|inlining procedure: k3984 
o|inlining procedure: k4082 
o|inlining procedure: k4082 
o|propagated global variable: g699701 main#*eggs+dirs+vers* 
o|inlining procedure: k4103 
o|inlining procedure: k4103 
o|substituted constant variable: a4116 
o|substituted constant variable: a4118 
o|inlining procedure: k4210 
o|inlining procedure: k4210 
o|inlining procedure: k4457 
o|contracted procedure: "(chicken-install.scm:452) g790797" 
o|inlining procedure: k4215 
o|inlining procedure: k4215 
o|contracted procedure: "(chicken-install.scm:463) main#outdated-dependencies" 
o|inlining procedure: k3369 
o|inlining procedure: k3369 
o|inlining procedure: k3410 
o|inlining procedure: k3410 
o|inlining procedure: k3422 
o|inlining procedure: k3422 
o|propagated global variable: g501503 main#*hacks* 
o|contracted procedure: "(chicken-install.scm:288) main#meta-dependencies" 
o|inlining procedure: k3068 
o|inlining procedure: k3068 
o|inlining procedure: k4273 
o|inlining procedure: k4305 
o|contracted procedure: "(chicken-install.scm:485) g850857" 
o|inlining procedure: k4305 
o|inlining procedure: k4273 
o|propagated global variable: tmp843845 main#*force* 
o|inlining procedure: k4332 
o|propagated global variable: tmp843845 main#*force* 
o|inlining procedure: k4332 
o|contracted procedure: "(chicken-install.scm:480) main#make-replace-extension-question" 
o|inlining procedure: k3759 
o|inlining procedure: k3759 
o|substituted constant variable: a3773 
o|substituted constant variable: a3774 
o|inlining procedure: k3754 
o|inlining procedure: k3754 
o|inlining procedure: k4389 
o|contracted procedure: "(chicken-install.scm:468) g822831" 
o|inlining procedure: k4370 
o|inlining procedure: k4370 
o|inlining procedure: k4389 
o|contracted procedure: "(chicken-install.scm:460) main#check-platform" 
o|inlining procedure: k4509 
o|inlining procedure: k4509 
o|inlining procedure: k4528 
o|inlining procedure: k4528 
o|contracted procedure: k4546 
o|inlining procedure: k4556 
o|contracted procedure: k4565 
o|inlining procedure: k4556 
o|inlining procedure: k4585 
o|inlining procedure: k4585 
o|inlining procedure: k4596 
o|contracted procedure: k4605 
o|inlining procedure: k4596 
o|inlining procedure: k4457 
o|propagated global variable: g796798 main#*eggs+dirs+vers* 
o|inlining procedure: k4480 
o|contracted procedure: "(chicken-install.scm:435) g748755" 
o|inlining procedure: k4136 
o|contracted procedure: "(chicken-install.scm:436) g764765" 
o|inlining procedure: k4136 
o|contracted procedure: "(chicken-install.scm:444) main#try-default-sources" 
o|contracted procedure: k3703 
o|inlining procedure: k3700 
o|contracted procedure: "(chicken-install.scm:367) main#try-extension" 
o|inlining procedure: k3476 
o|inlining procedure: k3476 
o|inlining procedure: k3500 
o|inlining procedure: k3500 
o|inlining procedure: k3518 
o|inlining procedure: k3518 
o|inlining procedure: k3527 
o|inlining procedure: k3527 
o|inlining procedure: k3536 
o|inlining procedure: k3536 
o|contracted procedure: k3571 
o|propagated global variable: r3572 main#*retrieve-only* 
o|inlining procedure: k3721 
o|inlining procedure: k3721 
o|inlining procedure: k3700 
o|contracted procedure: "(chicken-install.scm:443) main#override-version" 
o|inlining procedure: k3867 
o|substituted constant variable: a3884 
o|substituted constant variable: a3885 
o|inlining procedure: k3867 
o|inlining procedure: k3862 
o|inlining procedure: k3862 
o|inlining procedure: k3948 
o|inlining procedure: k3948 
o|inlining procedure: k4480 
o|inlining procedure: k5425 
o|inlining procedure: k5425 
o|inlining procedure: k5813 
o|inlining procedure: k5813 
o|inlining procedure: k5835 
o|inlining procedure: k5835 
o|inlining procedure: k5869 
o|inlining procedure: k5869 
o|inlining procedure: k5888 
o|contracted procedure: "(chicken-install.scm:721) g14151416" 
o|inlining procedure: k5905 
o|inlining procedure: k5905 
o|inlining procedure: k5888 
o|inlining procedure: k6017 
o|inlining procedure: k6017 
o|inlining procedure: k6028 
o|inlining procedure: k6028 
o|merged explicitly consed rest parameter: args1498 
o|inlining procedure: k6146 
o|inlining procedure: k6161 
o|inlining procedure: k6161 
o|inlining procedure: k6146 
o|inlining procedure: k6182 
o|inlining procedure: k6182 
o|inlining procedure: k7371 
o|inlining procedure: k7371 
o|contracted procedure: "(chicken-install.scm:1063) main#main" 
o|inlining procedure: k6209 
o|inlining procedure: k6224 
o|contracted procedure: "(chicken-install.scm:851) main#update-db" 
o|inlining procedure: k5501 
o|contracted procedure: "(chicken-install.scm:705) g13651372" 
o|inlining procedure: k5501 
o|inlining procedure: k5609 
o|inlining procedure: k5609 
o|inlining procedure: k5644 
o|inlining procedure: k5644 
o|substituted constant variable: a5718 
o|substituted constant variable: a5719 
o|inlining procedure: k5774 
o|inlining procedure: k5774 
o|inlining procedure: k6224 
o|contracted procedure: "(chicken-install.scm:852) main#scan-directory" 
o|inlining procedure: k5991 
o|contracted procedure: "(chicken-install.scm:732) g14521459" 
o|inlining procedure: k5991 
o|inlining procedure: k6245 
o|contracted procedure: "(chicken-install.scm:888) main#list-available-extensions" 
o|inlining procedure: k6113 
o|inlining procedure: k6113 
o|inlining procedure: k6245 
o|consed rest parameter at call site: "(chicken-install.scm:891) main#show-depends" 2 
o|inlining procedure: k6261 
o|consed rest parameter at call site: "(chicken-install.scm:893) main#show-depends" 2 
o|inlining procedure: k6261 
o|contracted procedure: "(chicken-install.scm:895) main#install" 
o|inlining procedure: k4846 
o|consed rest parameter at call site: "(chicken-install.scm:642) main#command" 2 
o|inlining procedure: k4931 
o|inlining procedure: k4931 
o|contracted procedure: k5014 
o|inlining procedure: k5011 
o|inlining procedure: k5011 
o|inlining procedure: k5023 
o|inlining procedure: k5023 
o|contracted procedure: "(chicken-install.scm:626) main#make-install-command" 
o|substituted constant variable: a4663 
o|substituted constant variable: a4664 
o|substituted constant variable: a4740 
o|substituted constant variable: a4741 
o|substituted constant variable: a4761 
o|substituted constant variable: a4762 
o|substituted constant variable: a4779 
o|substituted constant variable: a4780 
o|consed rest parameter at call site: "(chicken-install.scm:540) main#get-prefix" 1 
o|substituted constant variable: a4801 
o|substituted constant variable: a4802 
o|consed rest parameter at call site: "(chicken-install.scm:535) main#get-prefix" 1 
o|inlining procedure: k4819 
o|inlining procedure: k4819 
o|propagated global variable: tmp906908 main#*deploy* 
o|inlining procedure: k4828 
o|propagated global variable: tmp906908 main#*deploy* 
o|inlining procedure: k4828 
o|contracted procedure: "(chicken-install.scm:625) main#delete-stale-binaries" 
o|inlining procedure: k5113 
o|inlining procedure: k5113 
o|consed rest parameter at call site: "(chicken-install.scm:611) main#command" 2 
o|inlining procedure: k5184 
o|inlining procedure: k5184 
o|inlining procedure: k5201 
o|inlining procedure: k5201 
o|substituted constant variable: a5231 
o|substituted constant variable: a5232 
o|contracted procedure: k5233 
o|inlining procedure: k4846 
o|inlining procedure: k5273 
o|inlining procedure: k5273 
o|propagated global variable: out10681072 ##sys#standard-error 
o|substituted constant variable: a5308 
o|substituted constant variable: a5309 
o|propagated global variable: out10681072 ##sys#standard-error 
o|inlining procedure: k5332 
o|contracted procedure: "(chicken-install.scm:580) g10411050" 
o|inlining procedure: k5332 
o|inlining procedure: k5379 
o|inlining procedure: k5379 
o|inlining procedure: k6281 
o|inlining procedure: k6281 
o|inlining procedure: k6293 
o|inlining procedure: k6315 
o|inlining procedure: k6315 
o|propagated global variable: tmp15401542 main#*force* 
o|propagated global variable: tmp15401542 main#*force* 
o|substituted constant variable: a6358 
o|substituted constant variable: a6359 
o|contracted procedure: "(chicken-install.scm:857) main#installed-extensions" 
o|inlining procedure: k6059 
o|inlining procedure: k6059 
o|contracted procedure: "(chicken-install.scm:760) main#repo-path" 
o|inlining procedure: k2378 
o|substituted constant variable: a2396 
o|substituted constant variable: a2397 
o|inlining procedure: k2378 
o|inlining procedure: k6293 
o|contracted procedure: k6379 
o|inlining procedure: k6385 
o|inlining procedure: k6415 
o|contracted procedure: "(chicken-install.scm:871) g15951604" 
o|inlining procedure: k6415 
o|inlining procedure: k6385 
o|contracted procedure: "(chicken-install.scm:854) main#load-defaults" 
o|contracted procedure: k2464 
o|inlining procedure: k2475 
o|contracted procedure: k2484 
o|contracted procedure: k2493 
o|inlining procedure: k2490 
o|inlining procedure: k2490 
o|substituted constant variable: a2504 
o|substituted constant variable: a2505 
o|inlining procedure: k2475 
o|inlining procedure: k2558 
o|inlining procedure: k2615 
o|inlining procedure: k2615 
o|inlining procedure: k2558 
o|inlining procedure: k2660 
o|inlining procedure: k2660 
o|inlining procedure: k2683 
o|inlining procedure: k2683 
o|substituted constant variable: a2692 
o|inlining procedure: k2705 
o|inlining procedure: k2705 
o|inlining procedure: k2737 
o|inlining procedure: k2737 
o|substituted constant variable: a2796 
o|substituted constant variable: a2798 
o|substituted constant variable: a2800 
o|substituted constant variable: a2802 
o|substituted constant variable: a2804 
o|substituted constant variable: a2806 
o|inlining procedure: k2458 
o|inlining procedure: k2827 
o|inlining procedure: k2827 
o|inlining procedure: k2458 
o|inlining procedure: k6209 
o|substituted constant variable: a6475 
o|inlining procedure: k6471 
o|inlining procedure: k6471 
o|substituted constant variable: a6490 
o|substituted constant variable: a6501 
o|inlining procedure: k6497 
o|inlining procedure: k6497 
o|substituted constant variable: a6515 
o|substituted constant variable: a6531 
o|inlining procedure: k6527 
o|inlining procedure: k6527 
o|substituted constant variable: a6545 
o|substituted constant variable: a6574 
o|inlining procedure: k6570 
o|inlining procedure: k6570 
o|substituted constant variable: a6607 
o|substituted constant variable: a6653 
o|inlining procedure: k6649 
o|inlining procedure: k6649 
o|substituted constant variable: a6668 
o|substituted constant variable: a6683 
o|inlining procedure: k6679 
o|inlining procedure: k6679 
o|substituted constant variable: a6697 
o|contracted procedure: "(chicken-install.scm:947) main#init-repository" 
o|consed rest parameter at call site: "(chicken-install.scm:210) main#command" 2 
o|substituted constant variable: main#+default-repository-files+ 
o|inlining procedure: k2976 
o|inlining procedure: k2976 
o|propagated global variable: g406408 main#+default-repository-files+ 
o|substituted constant variable: a6725 
o|inlining procedure: k6722 
o|inlining procedure: k6722 
o|substituted constant variable: a6755 
o|substituted constant variable: a6792 
o|inlining procedure: k6789 
o|inlining procedure: k6789 
o|substituted constant variable: a6826 
o|substituted constant variable: a6837 
o|inlining procedure: k6834 
o|inlining procedure: k6834 
o|substituted constant variable: a6848 
o|substituted constant variable: a6859 
o|inlining procedure: k6856 
o|inlining procedure: k6856 
o|substituted constant variable: a6870 
o|substituted constant variable: a6881 
o|inlining procedure: k6878 
o|inlining procedure: k6878 
o|substituted constant variable: a6907 
o|substituted constant variable: a6933 
o|inlining procedure: k6930 
o|inlining procedure: k6930 
o|substituted constant variable: a6964 
o|substituted constant variable: a6978 
o|inlining procedure: k6975 
o|inlining procedure: k6975 
o|substituted constant variable: a6989 
o|substituted constant variable: a7000 
o|inlining procedure: k6997 
o|inlining procedure: k6997 
o|substituted constant variable: a7011 
o|substituted constant variable: a7022 
o|inlining procedure: k7019 
o|inlining procedure: k7019 
o|substituted constant variable: a7048 
o|substituted constant variable: a7074 
o|inlining procedure: k7071 
o|inlining procedure: k7071 
o|substituted constant variable: a7085 
o|inlining procedure: k7093 
o|inlining procedure: k7108 
o|inlining procedure: k7138 
o|contracted procedure: "(chicken-install.scm:1025) g17301739" 
o|inlining procedure: k7138 
o|inlining procedure: k7108 
o|substituted constant variable: main#*short-options* 
o|substituted constant variable: a7190 
o|inlining procedure: k7093 
o|inlining procedure: k7222 
o|inlining procedure: k7222 
o|inlining procedure: k7244 
o|inlining procedure: k7244 
o|substituted constant variable: a7293 
o|substituted constant variable: a7295 
o|substituted constant variable: a7297 
o|substituted constant variable: a7300 
o|substituted constant variable: a7302 
o|substituted constant variable: a7304 
o|substituted constant variable: a7306 
o|substituted constant variable: a7308 
o|substituted constant variable: a7310 
o|substituted constant variable: a7312 
o|substituted constant variable: a7314 
o|substituted constant variable: a7316 
o|substituted constant variable: a7318 
o|inlining procedure: k7319 
o|inlining procedure: k7319 
o|substituted constant variable: a7323 
o|replaced variables: 921 
o|removed binding forms: 417 
o|Removed `not' forms: 2 
o|substituted constant variable: r29337424 
o|substituted constant variable: r30237428 
o|inlining procedure: k3090 
o|substituted constant variable: r31367438 
o|substituted constant variable: r31367438 
o|inlining procedure: k3135 
o|inlining procedure: k3135 
o|contracted procedure: k3187 
o|substituted constant variable: r31887450 
o|substituted constant variable: r33097458 
o|propagated global variable: a28997473 main#*default-location* 
o|propagated global variable: out677681 ##sys#standard-output 
o|substituted constant variable: r39857480 
o|substituted constant variable: r41047483 
o|substituted constant variable: r41047483 
o|inlining procedure: k4103 
o|inlining procedure: k4103 
o|substituted constant variable: r30697502 
o|substituted constant variable: r30697502 
o|propagated global variable: r43337508 main#*force* 
o|substituted constant variable: r45867527 
o|converted assignments to bindings: (fail885) 
o|substituted constant variable: r35197540 
o|substituted constant variable: r35287542 
o|substituted constant variable: r35377544 
o|inlining procedure: k6176 
o|inlining procedure: k6176 
o|substituted constant variable: r61627587 
o|substituted constant variable: r61477588 
o|removed side-effect free assignment to unused variable: main#*short-options* 
o|substituted constant variable: r73727591 
o|substituted constant variable: r73727591 
o|substituted constant variable: r73727593 
o|substituted constant variable: r73727593 
o|substituted constant variable: r50127617 
o|substituted constant variable: r50247620 
o|contracted procedure: k4819 
o|substituted constant variable: r48207622 
o|propagated global variable: r48297623 main#*deploy* 
o|inlining procedure: k4828 
o|substituted constant variable: r51857628 
o|propagated global variable: out10681072 ##sys#standard-error 
o|substituted constant variable: r60607646 
o|substituted constant variable: r26847665 
o|inlining procedure: k2744 
o|converted assignments to bindings: (broken244) 
o|substituted constant variable: g406408 
o|substituted constant variable: main#+default-repository-files+ 
o|inlining procedure: k7222 
o|simplifications: ((let . 2)) 
o|replaced variables: 38 
o|removed binding forms: 972 
o|removed conditional forms: 2 
o|Removed `not' forms: 1 
o|removed side-effect free assignment to unused variable: main#+default-repository-files+ 
o|inlining procedure: k2425 
o|inlining procedure: k2425 
o|propagated global variable: r24267848 main#*prefix* 
o|propagated global variable: r24267848 main#*prefix* 
o|inlining procedure: k2929 
o|substituted constant variable: r30917731 
o|substituted constant variable: r31367735 
o|inlining procedure: k3646 
o|inlining procedure: k4187 
o|substituted constant variable: r61777785 
o|contracted procedure: k4828 
o|propagated global variable: r4829 main#*host-extension* 
o|substituted constant variable: r48297808 
o|inlining procedure: k6278 
o|inlining procedure: k2807 
o|inlining procedure: k2807 
o|inlining procedure: "(chicken-install.scm:902) main#usage" 
o|inlining procedure: "(chicken-install.scm:919) main#usage" 
o|inlining procedure: "(chicken-install.scm:923) main#usage" 
o|inlining procedure: "(chicken-install.scm:927) main#usage" 
o|inlining procedure: "(chicken-install.scm:946) main#usage" 
o|inlining procedure: "(chicken-install.scm:950) main#usage" 
o|inlining procedure: "(chicken-install.scm:954) main#usage" 
o|inlining procedure: "(chicken-install.scm:959) main#usage" 
o|inlining procedure: "(chicken-install.scm:979) main#usage" 
o|inlining procedure: "(chicken-install.scm:983) main#usage" 
o|inlining procedure: "(chicken-install.scm:987) main#usage" 
o|inlining procedure: "(chicken-install.scm:1006) main#usage" 
o|inlining procedure: "(chicken-install.scm:1010) main#usage" 
o|inlining procedure: "(chicken-install.scm:1028) main#usage" 
o|inlining procedure: "(chicken-install.scm:1029) main#usage" 
o|replaced variables: 23 
o|removed binding forms: 79 
o|removed conditional forms: 1 
o|substituted constant variable: r24267847 
o|substituted constant variable: r24267847 
o|substituted constant variable: r29307849 
o|substituted constant variable: r29307849 
o|substituted constant variable: r29307849 
o|substituted constant variable: r41047753 
o|removed side-effect free assignment to unused variable: main#usage 
o|substituted constant variable: r28087906 
o|substituted constant variable: code15027910 
o|substituted constant variable: code15027915 
o|substituted constant variable: code15027920 
o|substituted constant variable: code15027925 
o|substituted constant variable: code15027932 
o|substituted constant variable: code15027937 
o|substituted constant variable: code15027942 
o|substituted constant variable: code15027947 
o|substituted constant variable: code15027952 
o|substituted constant variable: code15027957 
o|substituted constant variable: code15027962 
o|substituted constant variable: code15027967 
o|substituted constant variable: code15027972 
o|substituted constant variable: code15027979 
o|substituted constant variable: code15027984 
o|simplifications: ((let . 1)) 
o|removed binding forms: 33 
o|removed conditional forms: 3 
o|removed binding forms: 20 
o|simplifications: ((if . 48) (##core#call . 399)) 
o|  call simplifications:
o|    string=?
o|    char=?
o|    alist-cons	2
o|    ##sys#size	2
o|    fx>
o|    string->list
o|    memq
o|    string
o|    cddr	2
o|    =
o|    first
o|    length
o|    list-ref
o|    >
o|    caddr	3
o|    string->number
o|    apply
o|    ##sys#apply	5
o|    ##sys#structure?
o|    memv	6
o|    ##sys#setslot	10
o|    list	10
o|    ##sys#check-list	16
o|    pair?	54
o|    ##sys#slot	47
o|    ##sys#list	9
o|    set-car!
o|    list?	5
o|    string?	5
o|    symbol?	4
o|    cons	29
o|    ##sys#call-with-values	12
o|    values	17
o|    eq?	20
o|    equal?	6
o|    member	4
o|    cadr	41
o|    assq	10
o|    assoc	3
o|    cdr	13
o|    null?	9
o|    car	28
o|    not	12
o|contracted procedure: k2440 
o|contracted procedure: k2416 
o|contracted procedure: k2422 
o|contracted procedure: k2858 
o|contracted procedure: k2866 
o|contracted procedure: k2926 
o|contracted procedure: k2929 
o|contracted procedure: k3002 
o|contracted procedure: k3019 
o|contracted procedure: k3029 
o|contracted procedure: k3035 
o|contracted procedure: k3044 
o|contracted procedure: k3080 
o|contracted procedure: k3083 
o|contracted procedure: k3119 
o|contracted procedure: k3128 
o|contracted procedure: k3151 
o|contracted procedure: k3160 
o|contracted procedure: k3170 
o|contracted procedure: k3181 
o|contracted procedure: k3211 
o|contracted procedure: k3251 
o|contracted procedure: k3258 
o|contracted procedure: k3270 
o|contracted procedure: k3289 
o|contracted procedure: k3296 
o|contracted procedure: k3305 
o|contracted procedure: k3311 
o|contracted procedure: k3326 
o|contracted procedure: k3314 
o|contracted procedure: k3332 
o|contracted procedure: k3339 
o|contracted procedure: k3607 
o|contracted procedure: k3628 
o|contracted procedure: k3656 
o|contracted procedure: k36537857 
o|contracted procedure: k3646 
o|contracted procedure: k3653 
o|contracted procedure: k3663 
o|contracted procedure: k3677 
o|inlining procedure: k3673 
o|inlining procedure: k3673 
o|contracted procedure: k2881 
o|contracted procedure: k2896 
o|contracted procedure: k2888 
o|contracted procedure: k2913 
o|contracted procedure: k4119 
o|contracted procedure: k3964 
o|contracted procedure: k3996 
o|contracted procedure: k4007 
o|contracted procedure: k4019 
o|contracted procedure: k4029 
o|contracted procedure: k4033 
o|contracted procedure: k4038 
o|contracted procedure: k4062 
o|contracted procedure: k4067 
o|contracted procedure: k4085 
o|contracted procedure: k4095 
o|contracted procedure: k4099 
o|propagated global variable: g699701 main#*eggs+dirs+vers* 
o|contracted procedure: k4106 
o|propagated global variable: out677681 ##sys#standard-output 
o|contracted procedure: k4112 
o|contracted procedure: k4204 
o|contracted procedure: k4448 
o|contracted procedure: k4460 
o|contracted procedure: k4470 
o|contracted procedure: k4474 
o|contracted procedure: k4445 
o|contracted procedure: k4218 
o|contracted procedure: k4222 
o|contracted procedure: k4256 
o|contracted procedure: k3357 
o|contracted procedure: k3372 
o|contracted procedure: k3386 
o|contracted procedure: k3406 
o|contracted procedure: k3410 
o|contracted procedure: k3425 
o|contracted procedure: k3435 
o|contracted procedure: k3439 
o|propagated global variable: g501503 main#*hacks* 
o|contracted procedure: k4364 
o|contracted procedure: k4380 
o|contracted procedure: k4360 
o|contracted procedure: k4267 
o|contracted procedure: k4293 
o|contracted procedure: k4308 
o|contracted procedure: k4318 
o|contracted procedure: k4322 
o|contracted procedure: k4329 
o|contracted procedure: k3850 
o|contracted procedure: k3741 
o|contracted procedure: k3751 
o|contracted procedure: k3808 
o|contracted procedure: k3812 
o|contracted procedure: k3762 
o|contracted procedure: k3804 
o|contracted procedure: k3824 
o|contracted procedure: k3827 
o|contracted procedure: k3846 
o|contracted procedure: k4346 
o|contracted procedure: k4392 
o|contracted procedure: k4395 
o|contracted procedure: k4406 
o|contracted procedure: k4418 
o|contracted procedure: k4373 
o|contracted procedure: k4512 
o|contracted procedure: k4522 
o|contracted procedure: k4531 
o|contracted procedure: k4641 
o|contracted procedure: k4576 
o|contracted procedure: k4582 
o|contracted procedure: k4599 
o|contracted procedure: k4621 
o|contracted procedure: k4637 
o|contracted procedure: k4628 
o|contracted procedure: k4553 
o|contracted procedure: k4437 
o|propagated global variable: g796798 main#*eggs+dirs+vers* 
o|contracted procedure: k4483 
o|contracted procedure: k4493 
o|contracted procedure: k4497 
o|contracted procedure: k4133 
o|contracted procedure: k4142 
o|contracted procedure: k4200 
o|contracted procedure: k4152 
o|contracted procedure: k3545 
o|contracted procedure: k3473 
o|contracted procedure: k3521 
o|contracted procedure: k3530 
o|contracted procedure: k3539 
o|contracted procedure: k3568 
o|contracted procedure: k4181 
o|contracted procedure: k4177 
o|contracted procedure: k4184 
o|contracted procedure: k4187 
o|contracted procedure: k3859 
o|contracted procedure: k3911 
o|contracted procedure: k3915 
o|contracted procedure: k3921 
o|contracted procedure: k3932 
o|contracted procedure: k3928 
o|contracted procedure: k3943 
o|contracted procedure: k3951 
o|contracted procedure: k5816 
o|contracted procedure: k5829 
o|contracted procedure: k5838 
o|contracted procedure: k5851 
o|contracted procedure: k5855 
o|contracted procedure: k5893 
o|contracted procedure: k5896 
o|contracted procedure: k5908 
o|contracted procedure: k5911 
o|contracted procedure: k5922 
o|contracted procedure: k5934 
o|contracted procedure: k5956 
o|contracted procedure: k6020 
o|contracted procedure: k6149 
o|contracted procedure: k6173 
o|contracted procedure: k6190 
o|contracted procedure: k6185 
o|contracted procedure: k6212 
o|contracted procedure: k6218 
o|contracted procedure: k5504 
o|contracted procedure: k5514 
o|contracted procedure: k5518 
o|contracted procedure: k5540 
o|contracted procedure: k5544 
o|contracted procedure: k5550 
o|contracted procedure: k5581 
o|contracted procedure: k5584 
o|contracted procedure: k5597 
o|contracted procedure: k5600 
o|contracted procedure: k5612 
o|contracted procedure: k5615 
o|contracted procedure: k5626 
o|contracted procedure: k5638 
o|contracted procedure: k5647 
o|contracted procedure: k5650 
o|contracted procedure: k5661 
o|contracted procedure: k5673 
o|contracted procedure: k5745 
o|contracted procedure: k5777 
o|contracted procedure: k5787 
o|contracted procedure: k5791 
o|contracted procedure: k5982 
o|contracted procedure: k5994 
o|contracted procedure: k6004 
o|contracted procedure: k6008 
o|contracted procedure: k5972 
o|contracted procedure: k5968 
o|contracted procedure: k4887 
o|contracted procedure: k4947 
o|contracted procedure: k5090 
o|contracted procedure: k5094 
o|contracted procedure: k5098 
o|contracted procedure: k4655 
o|contracted procedure: k4684 
o|contracted procedure: k4688 
o|contracted procedure: k4692 
o|contracted procedure: k4696 
o|contracted procedure: k4722 
o|contracted procedure: k4733 
o|contracted procedure: k4754 
o|contracted procedure: k5415 
o|contracted procedure: k5419 
o|contracted procedure: k5402 
o|contracted procedure: k5116 
o|contracted procedure: k5141 
o|contracted procedure: k5177 
o|contracted procedure: k5191 
o|contracted procedure: k5195 
o|contracted procedure: k5198 
o|contracted procedure: k5236 
o|contracted procedure: k5257 
o|contracted procedure: k5260 
o|contracted procedure: k5301 
o|contracted procedure: k5276 
o|contracted procedure: k5286 
o|contracted procedure: k5290 
o|contracted procedure: k5294 
o|contracted procedure: k5298 
o|contracted procedure: k5326 
o|contracted procedure: k5335 
o|contracted procedure: k5361 
o|contracted procedure: k5357 
o|contracted procedure: k5338 
o|contracted procedure: k5349 
o|contracted procedure: k5382 
o|contracted procedure: k6290 
o|contracted procedure: k6306 
o|contracted procedure: k6318 
o|contracted procedure: k6321 
o|contracted procedure: k6332 
o|contracted procedure: k6344 
o|contracted procedure: k6373 
o|contracted procedure: k6047 
o|contracted procedure: k6050 
o|contracted procedure: k6053 
o|contracted procedure: k6056 
o|contracted procedure: k6068 
o|contracted procedure: k2381 
o|contracted procedure: k6388 
o|contracted procedure: k6418 
o|contracted procedure: k6421 
o|contracted procedure: k6432 
o|contracted procedure: k6444 
o|contracted procedure: k6406 
o|contracted procedure: k2472 
o|contracted procedure: k2478 
o|contracted procedure: k2537 
o|contracted procedure: k2533 
o|contracted procedure: k2529 
o|contracted procedure: k2525 
o|contracted procedure: k2545 
o|contracted procedure: k2553 
o|contracted procedure: k2561 
o|contracted procedure: k2593 
o|contracted procedure: k2606 
o|contracted procedure: k2618 
o|contracted procedure: k2621 
o|contracted procedure: k2632 
o|contracted procedure: k2644 
o|contracted procedure: k2650 
o|contracted procedure: k2670 
o|contracted procedure: k2674 
o|contracted procedure: k2680 
o|contracted procedure: k2686 
o|contracted procedure: k2696 
o|contracted procedure: k2708 
o|contracted procedure: k2711 
o|contracted procedure: k2722 
o|contracted procedure: k2734 
o|contracted procedure: k2740 
o|contracted procedure: k2754 
o|contracted procedure: k2758 
o|contracted procedure: k2765 
o|contracted procedure: k2773 
o|contracted procedure: k2781 
o|contracted procedure: k2789 
o|contracted procedure: k2813 
o|contracted procedure: k2830 
o|contracted procedure: k2840 
o|contracted procedure: k2844 
o|contracted procedure: k6456 
o|contracted procedure: k6462 
o|contracted procedure: k6502 
o|contracted procedure: k6516 
o|contracted procedure: k6532 
o|contracted procedure: k6546 
o|contracted procedure: k6553 
o|contracted procedure: k6562 
o|contracted procedure: k6575 
o|contracted procedure: k6592 
o|contracted procedure: k6595 
o|contracted procedure: k6608 
o|contracted procedure: k6615 
o|contracted procedure: k6641 
o|contracted procedure: k6654 
o|contracted procedure: k6684 
o|contracted procedure: k6698 
o|contracted procedure: k6711 
o|contracted procedure: k2944 
o|contracted procedure: k2967 
o|contracted procedure: k2979 
o|contracted procedure: k2989 
o|contracted procedure: k2993 
o|contracted procedure: k6714 
o|contracted procedure: k6737 
o|contracted procedure: k6741 
o|contracted procedure: k6744 
o|contracted procedure: k6757 
o|contracted procedure: k6764 
o|contracted procedure: k6778 
o|contracted procedure: k6781 
o|contracted procedure: k6798 
o|contracted procedure: k6812 
o|contracted procedure: k6815 
o|contracted procedure: k6887 
o|contracted procedure: k6896 
o|contracted procedure: k6913 
o|contracted procedure: k6922 
o|contracted procedure: k6946 
o|contracted procedure: k6950 
o|contracted procedure: k6953 
o|contracted procedure: k6966 
o|contracted procedure: k7028 
o|contracted procedure: k7037 
o|contracted procedure: k7054 
o|contracted procedure: k7063 
o|contracted procedure: k7187 
o|contracted procedure: k7102 
o|contracted procedure: k7127 
o|contracted procedure: k7141 
o|contracted procedure: k7167 
o|contracted procedure: k7163 
o|contracted procedure: k7144 
o|contracted procedure: k7155 
o|contracted procedure: k7195 
o|contracted procedure: k7202 
o|contracted procedure: k7211 
o|contracted procedure: k7253 
o|contracted procedure: k7257 
o|contracted procedure: k7277 
o|contracted procedure: k7285 
o|simplifications: ((if . 1) (let . 69)) 
o|removed binding forms: 339 
o|inlining procedure: k2892 
o|inlining procedure: k2892 
o|inlining procedure: k4398 
o|inlining procedure: k4398 
o|inlining procedure: k5914 
o|inlining procedure: k5914 
o|inlining procedure: k5618 
o|inlining procedure: k5618 
o|inlining procedure: k5653 
o|inlining procedure: k5653 
o|inlining procedure: k5253 
o|inlining procedure: k5253 
o|inlining procedure: k5341 
o|inlining procedure: k5341 
o|inlining procedure: k6324 
o|inlining procedure: k6324 
o|inlining procedure: k6424 
o|inlining procedure: k6424 
o|inlining procedure: k2624 
o|inlining procedure: k2624 
o|inlining procedure: k2714 
o|inlining procedure: k2714 
o|inlining procedure: k7147 
o|inlining procedure: k7147 
o|replaced variables: 86 
o|removed binding forms: 1 
o|simplifications: ((if . 1)) 
o|replaced variables: 4 
o|removed binding forms: 69 
o|replaced variables: 40 
o|removed binding forms: 4 
o|removed binding forms: 10 
o|direct leaf routine/allocation: main#deps 0 
o|direct leaf routine/allocation: g13131322 10 
o|direct leaf routine/allocation: g13401349 10 
o|contracted procedure: "(chicken-install.scm:424) k4045" 
o|contracted procedure: "(chicken-install.scm:424) k4049" 
o|contracted procedure: "(chicken-install.scm:230) k3060" 
o|contracted procedure: "(chicken-install.scm:231) k3064" 
o|contracted procedure: "(chicken-install.scm:232) k3068" 
o|contracted procedure: "(chicken-install.scm:699) k5634" 
o|contracted procedure: "(chicken-install.scm:698) k5669" 
o|removed binding forms: 7 
o|replaced variables: 14 
o|removed binding forms: 6 
o|customizable procedures: (k6465 k7096 g17601761 k7215 map-loop17241749 main#setup-proxy g400407 for-each-loop399410 loop1522 g249256 for-each-loop248361 k2747 g338347 map-loop332352 g293302 map-loop287323 broken244 map-loop15891607 g14861487 map-loop15581575 k4840 map-loop10351060 g10811089 for-each-loop10801205 k4875 k5204 setup1106 k4651 main#get-prefix tmp11121121 tmp11391148 main#command main#show-depends for-each-loop14511462 g12461253 for-each-loop12451282 map-loop13071325 map-loop13341352 for-each-loop13641376 main#$system map-loop14201437 canonical1389 g643644 k3873 main#with-default-sources k3479 k3491 k3503 for-each-loop747782 k4559 fail885 main#apply-mappings k4414 map-loop816834 g612613 for-each-loop849861 g495502 for-each-loop494505 loop510 for-each-loop789875 main#retrieve g693700 for-each-loop692733 main#cleanup for-each-loop709727 k2903 k3637 trying-sources574 k3112 k3202 k3174 scan451 main#check-dependency main#ext-version k3005 main#resolve-location) 
o|calls to known targets: 260 
o|identified direct recursive calls: f_2856 1 
o|identified direct recursive calls: f_3602 1 
o|identified direct recursive calls: f_5607 2 
o|identified direct recursive calls: f_5642 2 
o|identified direct recursive calls: f_5330 2 
o|identified direct recursive calls: f_7136 2 
o|fast box initializations: 29 
o|fast global references: 181 
o|fast global assignments: 103 
o|dropping unused closure argument: f_6012 
o|dropping unused closure argument: f_5811 
o|dropping unused closure argument: f_5808 
o|dropping unused closure argument: f_5423 
o|dropping unused closure argument: f_3075 
o|dropping unused closure argument: f_2856 
o|dropping unused closure argument: f_6144 
o|dropping unused closure argument: f_2414 
o|dropping unused closure argument: f_3956 
o|dropping unused closure argument: f_4126 
o|dropping unused closure argument: f_3593 
o|dropping unused closure argument: f_2997 
o|dropping unused closure argument: f_6123 
o|dropping unused closure argument: f_2924 
*/
/* end of file */
