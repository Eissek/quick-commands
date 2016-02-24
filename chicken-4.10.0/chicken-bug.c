/* Generated from chicken-bug.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:02
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: chicken-bug.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -local -no-trace -output-file chicken-bug.c
   used units: library eval chicken_2dsyntax srfi_2d13 posix tcp data_2dstructures utils extras
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d13_toplevel)
C_externimport void C_ccall C_srfi_2d13_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_tcp_toplevel)
C_externimport void C_ccall C_tcp_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[94];
static double C_possibly_force_alignment;


C_noret_decl(f_491)
static void C_ccall f_491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_494)
static void C_ccall f_494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_497)
static void C_ccall f_497(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_509)
static void C_ccall f_509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_506)
static void C_ccall f_506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_503)
static void C_ccall f_503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_500)
static void C_ccall f_500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f1069)
static void C_ccall f1069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_527)
static void C_ccall f_527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_524)
static void C_ccall f_524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_482)
static void C_ccall f_482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_488)
static void C_ccall f_488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_587)
static void C_ccall f_587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_438)
static void C_ccall f_438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_920)
static void C_ccall f_920(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_435)
static void C_ccall f_435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_453)
static void C_ccall f_453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_456)
static void C_ccall f_456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_450)
static void C_ccall f_450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_848)
static void C_ccall f_848(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_556)
static void C_ccall f_556(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_459)
static void C_ccall f_459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_936)
static void C_ccall f_936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_934)
static void C_ccall f_934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_930)
static void C_ccall f_930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_963)
static void C_ccall f_963(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_967)
static void C_ccall f_967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_969)
static void C_fcall f_969(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_739)
static void C_ccall f_739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_731)
static void C_ccall f_731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_462)
static void C_ccall f_462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_850)
static void C_fcall f_850(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_886)
static void C_ccall f_886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_940)
static void C_ccall f_940(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_979)
static void C_ccall f_979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_747)
static void C_ccall f_747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_743)
static void C_ccall f_743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_771)
static void C_ccall f_771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_773)
static void C_ccall f_773(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_777)
static void C_ccall f_777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_829)
static void C_ccall f_829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_825)
static void C_ccall f_825(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_890)
static void C_ccall f_890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_820)
static void C_ccall f_820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_896)
static void C_ccall f_896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_577)
static void C_fcall f_577(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_959)
static void C_ccall f_959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_899)
static void C_fcall f_899(C_word t0,C_word t1) C_noret;
C_noret_decl(f_955)
static void C_ccall f_955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_951)
static void C_ccall f_951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_759)
static void C_ccall f_759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_755)
static void C_ccall f_755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_751)
static void C_ccall f_751(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_782)
static void C_ccall f_782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_447)
static void C_ccall f_447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_786)
static void C_ccall f_786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_441)
static void C_ccall f_441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_444)
static void C_ccall f_444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_549)
static void C_ccall f_549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_541)
static void C_ccall f_541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_862)
static void C_ccall f_862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_866)
static void C_ccall f_866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_992)
static void C_ccall f_992(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_996)
static void C_ccall f_996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_791)
static void C_fcall f_791(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_795)
static void C_ccall f_795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_518)
static void C_ccall f_518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_515)
static void C_ccall f_515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_512)
static void C_ccall f_512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_654)
static void C_ccall f_654(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_652)
static void C_ccall f_652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1011)
static void C_ccall f_1011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_902)
static void C_ccall f_902(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1014)
static void C_ccall f_1014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_905)
static void C_ccall f_905(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1018)
static void C_ccall f_1018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_700)
static void C_ccall f_700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_476)
static void C_ccall f_476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_702)
static void C_fcall f_702(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_472)
static void C_ccall f_472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_666)
static void C_ccall f_666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_470)
static void C_ccall f_470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_662)
static void C_ccall f_662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_536)
static void C_ccall f_536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_479)
static void C_ccall f_479(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_668)
static void C_fcall f_668(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_530)
static void C_ccall f_530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_533)
static void C_ccall f_533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_616)
static void C_ccall f_616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_610)
static void C_ccall f_610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_613)
static void C_ccall f_613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_638)
static void C_ccall f_638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_630)
static void C_ccall f_630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_625)
static void C_ccall f_625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_622)
static void C_ccall f_622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_648)
static void C_ccall f_648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1001)
static void C_ccall f_1001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1008)
static void C_ccall f_1008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_763)
static void C_ccall f_763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_693)
static void C_ccall f_693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_767)
static void C_ccall f_767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_607)
static void C_ccall f_607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_601)
static void C_ccall f_601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_604)
static void C_ccall f_604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_678)
static void C_ccall f_678(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f1076)
static void C_ccall f1076(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_969)
static void C_fcall trf_969(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_969(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_969(t0,t1,t2);}

C_noret_decl(trf_850)
static void C_fcall trf_850(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_850(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_850(t0,t1,t2);}

C_noret_decl(trf_577)
static void C_fcall trf_577(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_577(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_577(t0,t1,t2);}

C_noret_decl(trf_899)
static void C_fcall trf_899(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_899(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_899(t0,t1);}

C_noret_decl(trf_791)
static void C_fcall trf_791(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_791(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_791(t0,t1,t2);}

C_noret_decl(trf_702)
static void C_fcall trf_702(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_702(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_702(t0,t1,t2);}

C_noret_decl(trf_668)
static void C_fcall trf_668(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_668(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_668(t0,t1,t2);}

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

/* k489 in k486 in k480 in k477 in k474 in collect-info in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_491,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_494,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-bug.scm:45: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[32]))(4,*((C_word*)lf[32]+1),t2,C_make_character(10),((C_word*)t0)[3]);}

/* k492 in k489 in k486 in k480 in k477 in k474 in collect-info in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_494,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_497,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:45: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[32]))(4,*((C_word*)lf[32]+1),t2,C_make_character(10),((C_word*)t0)[3]);}

/* k495 in k492 in k489 in k486 in k480 in k477 in k474 in collect-info in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_497(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_497,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_500,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:46: print */
t3=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[50]);}

/* k507 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in k480 in k477 in k474 in collect-info in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_509,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_512,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_747,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:50: build-platform */
t4=C_fast_retrieve(lf[43]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k504 in k501 in k498 in k495 in k492 in k489 in k486 in k480 in k477 in k474 in collect-info in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_506,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_509,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_751,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:49: software-version */
t4=C_fast_retrieve(lf[45]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k501 in k498 in k495 in k492 in k489 in k486 in k480 in k477 in k474 in collect-info in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_503(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_503,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_506,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_755,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:48: software-type */
t4=C_fast_retrieve(lf[47]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k498 in k495 in k492 in k489 in k486 in k480 in k477 in k474 in collect-info in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_500(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_500,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_503,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_759,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:47: machine-type */
t4=C_fast_retrieve(lf[49]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* f1069 in k486 in k480 in k477 in k474 in collect-info in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f1069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:39: user-information */
t2=C_fast_retrieve(lf[1]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k525 in k522 in k516 in k513 in k510 in k507 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in k480 in k477 in k474 in collect-info in k457 in k454 in k451 in k448 in k445 in ... */
static void C_ccall f_527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_527,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_530,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-bug.scm:53: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[32]))(4,*((C_word*)lf[32]+1),t2,C_make_character(10),((C_word*)t0)[3]);}

/* k522 in k516 in k513 in k510 in k507 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in k480 in k477 in k474 in collect-info in k457 in k454 in k451 in k448 in k445 in k442 in ... */
static void C_ccall f_524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_524,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_527,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-bug.scm:53: ##sys#print */
t3=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,C_fast_retrieve(lf[33]),C_SCHEME_TRUE,((C_word*)t0)[3]);}

/* k480 in k477 in k474 in collect-info in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_482,2,t0,t1);}
t2=*((C_word*)lf[4]+1);
t3=*((C_word*)lf[4]+1);
t4=C_i_check_port_2(*((C_word*)lf[4]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[5]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_488,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-bug.scm:45: ##sys#print */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[51],C_SCHEME_FALSE,*((C_word*)lf[4]+1));}

/* k486 in k480 in k477 in k474 in collect-info in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_488,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_491,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_763,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f1069,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:39: current-user-id */
t6=C_fast_retrieve(lf[2]);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k585 in for-each-loop91 in k539 in for-each-loop78 in k599 in k534 in k531 in k528 in k525 in k522 in k516 in k513 in k510 in k507 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in k480 in ... */
static void C_ccall f_587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_577(t3,((C_word*)t0)[4],t2);}

/* k436 in k433 */
static void C_ccall f_438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_438,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_441,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_chicken_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k918 in k903 in k900 in k897 in k894 in main in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_920(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:144: collect-info */
t2=*((C_word*)lf[3]+1);
f_472(2,t2,((C_word*)t0)[2]);}

/* k433 */
static void C_ccall f_435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_435,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_438,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_453,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_456,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_456,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_459,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_450,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_453,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* main in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_848(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[23],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_848,3,t0,t1,t2);}
t3=lf[73];
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_850,a[2]=t6,a[3]=t4,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t10=C_i_check_list_2(t2,lf[21]);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_896,a[2]=t8,a[3]=t1,a[4]=t4,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_969,a[2]=t13,a[3]=t9,tmp=(C_word)a,a+=4,tmp));
t15=((C_word*)t13)[1];
f_969(t15,t11,t2);}

/* k554 in k547 in for-each-loop91 in k539 in for-each-loop78 in k599 in k534 in k531 in k528 in k525 in k522 in k516 in k513 in k510 in k507 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in ... */
static void C_ccall f_556(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:59: ##sys#print */
t2=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_459(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_459,2,t0,t1);}
t2=C_mutate2((C_word*)lf[0]+1 /* (set! user-id ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_462,tmp=(C_word)a,a+=2,tmp));
t3=C_mutate2((C_word*)lf[3]+1 /* (set! collect-info ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_472,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate2((C_word*)lf[58]+1 /* (set! usage ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_773,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate2((C_word*)lf[61]+1 /* (set! user-input ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_782,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate2((C_word*)lf[68]+1 /* (set! justify ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_825,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate2((C_word*)lf[72]+1 /* (set! main ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_848,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate2((C_word*)lf[83]+1 /* (set! generate-report ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_992,tmp=(C_word)a,a+=2,tmp));
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1008,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1018,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:157: command-line-arguments */
t11=C_fast_retrieve(lf[93]);
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}

/* a935 in k928 in k903 in k900 in k897 in k894 in main in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_936,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_940,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:149: print */
t3=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* k932 in k928 in k903 in k900 in k897 in k894 in main in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:145: generate-report */
t2=*((C_word*)lf[83]+1);
f_992(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k928 in k903 in k900 in k897 in k894 in main in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_930(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_930,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_934,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_936,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:147: with-output-to-string */
t5=C_fast_retrieve(lf[84]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k961 in k894 in main in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_963(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_899(t3,t2);}

/* k965 in k894 in main in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_967(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:135: string-append */
t2=*((C_word*)lf[75]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],lf[88],t1);}

/* for-each-loop192 in main in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_fcall f_969(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_969,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_979,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-bug.scm:113: g193 */
t5=((C_word*)t0)[3];
f_850(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k737 in k513 in k510 in k507 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in k480 in k477 in k474 in collect-info in k457 in k454 in k451 in k448 in k445 in k442 in k439 in ... */
static void C_ccall f_739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:52: print */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[35],t1,lf[36]);}

/* k729 in map-loop117 in k534 in k531 in k528 in k525 in k522 in k516 in k513 in k510 in k507 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in k480 in k477 in k474 in collect-info in ... */
static void C_ccall f_731(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_731,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_702(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_702(t6,((C_word*)t0)[5],t5);}}

/* user-id in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_462(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_462,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_470,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:39: current-user-id */
t3=C_fast_retrieve(lf[2]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* g193 in main in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_fcall f_850(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_850,NULL,3,t0,t1,t2);}
if(C_truep(C_i_string_equal_p(lf[74],t2))){
t3=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_862,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_866,a[2]=t4,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-bug.scm:121: user-input */
t6=*((C_word*)lf[61]+1);
f_782(2,t6,t5);}
else{
t3=t2;
if(C_truep((C_truep(C_i_equalp(t3,lf[77]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[78]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[79]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))){
t4=t1;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f1076,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:76: print */
t6=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[60]);}
else{
t4=t2;
if(C_truep(C_u_i_string_equal_p(lf[80],t4))){
t5=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_TRUE);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_886,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_890,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-bug.scm:132: read-all */
t8=C_fast_retrieve(lf[8]);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}}}}

/* k884 in g193 in main in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k938 in a935 in k928 in k903 in k900 in k897 in k894 in main in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_940(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:150: collect-info */
t2=*((C_word*)lf[3]+1);
f_472(2,t2,((C_word*)t0)[2]);}

/* k977 in for-each-loop192 in main in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_969(t3,((C_word*)t0)[4],t2);}

/* k745 in k507 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in k480 in k477 in k474 in collect-info in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 in ... */
static void C_ccall f_747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:50: print */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[41],t1,lf[42]);}

/* k741 in k510 in k507 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in k480 in k477 in k474 in collect-info in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in ... */
static void C_ccall f_743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:51: print */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[38],t1,lf[39]);}

/* k769 in k477 in k474 in collect-info in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:44: seconds->string */
t2=C_fast_retrieve(lf[54]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* usage in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_773(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_773,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_777,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-bug.scm:76: print */
t4=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[60]);}

/* k775 in usage in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:88: exit */
t2=C_fast_retrieve(lf[59]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k827 in justify in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_block_size(t1);
if(C_truep(C_fixnum_greaterp(t2,C_fix(1)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}
else{
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[69]))(4,*((C_word*)lf[69]+1),((C_word*)t0)[2],lf[70],t1);}}

/* justify in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_825(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_825,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_829,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:108: number->string */
t4=*((C_word*)lf[71]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k888 in g193 in main in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:129: string-append */
t2=*((C_word*)lf[75]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],lf[81],((C_word*)t0)[4],lf[82],t1);}

/* k818 in user-input in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* chicken-bug.scm:92: print */
t2=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[65]);}
else{
t2=((C_word*)t0)[2];
f_786(2,t2,C_SCHEME_UNDEFINED);}}

/* k894 in main in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_896,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_899,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
t3=t2;
f_899(t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_963,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_967,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* chicken-bug.scm:135: user-input */
t5=*((C_word*)lf[61]+1);
f_782(2,t5,t4);}}

/* for-each-loop91 in k539 in for-each-loop78 in k599 in k534 in k531 in k528 in k525 in k522 in k516 in k513 in k510 in k507 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in k480 in k477 in ... */
static void C_fcall f_577(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_577,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_587,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=*((C_word*)lf[4]+1);
t8=*((C_word*)lf[4]+1);
t9=C_i_check_port_2(*((C_word*)lf[4]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[5]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_549,a[2]=t5,a[3]=t7,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* chicken-bug.scm:59: ##sys#print */
t11=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t10,t6,C_SCHEME_FALSE,*((C_word*)lf[4]+1));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k957 in k900 in k897 in k894 in main in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:137: seconds->local-time */
t2=C_fast_retrieve(lf[87]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k897 in k894 in main in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_fcall f_899(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_899,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_902,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-bug.scm:136: newline */
t3=*((C_word*)lf[6]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k953 in k949 in k903 in k900 in k897 in k894 in main in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_955(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:146: sprintf */
t2=*((C_word*)lf[85]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[86],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k949 in k903 in k900 in k897 in k894 in main in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_951,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_955,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-bug.scm:146: justify */
t4=*((C_word*)lf[68]+1);
f_825(3,t4,t3,((C_word*)t0)[4]);}

/* k757 in k498 in k495 in k492 in k489 in k486 in k480 in k477 in k474 in collect-info in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:47: print */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[48],t1);}

/* k753 in k501 in k498 in k495 in k492 in k489 in k486 in k480 in k477 in k474 in collect-info in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:48: print */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[46],t1);}

/* k749 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in k480 in k477 in k474 in collect-info in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_751(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:49: print */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[44],t1);}

/* user-input in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_782,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_786,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_820,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:91: ##sys#tty-port? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[66]))(3,*((C_word*)lf[66]+1),t3,*((C_word*)lf[67]+1));}

/* k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_447,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_450,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_tcp_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k784 in user-input in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_786,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_791,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_791(t5,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k439 in k436 in k433 */
static void C_ccall f_441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_441,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_444,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d13_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k442 in k439 in k436 in k433 */
static void C_ccall f_444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_444,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_447,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_posix_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k547 in for-each-loop91 in k539 in for-each-loop78 in k599 in k534 in k531 in k528 in k525 in k522 in k516 in k513 in k510 in k507 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in k480 in ... */
static void C_ccall f_549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_549,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_556,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_string_length(((C_word*)t0)[4]);
t4=C_fixnum_difference(C_fix(16),t3);
t5=C_i_fixnum_max(C_fix(1),t4);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_symbol_proc(lf[23]))(4,*((C_word*)lf[23]+1),t2,t5,C_make_character(32));}

/* k539 in for-each-loop78 in k599 in k534 in k531 in k528 in k525 in k522 in k516 in k513 in k510 in k507 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in k480 in k477 in k474 in ... */
static void C_ccall f_541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_541,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[2],lf[21]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_577,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_577(t6,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k860 in g193 in main in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k864 in g193 in main in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:121: string-append */
t2=*((C_word*)lf[75]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],lf[76],t1);}

/* generate-report in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_992(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_992,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_996,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1001,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:153: with-output-to-file */
t6=C_fast_retrieve(lf[91]);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t2,t5);}

/* k994 in generate-report in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:155: print */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[89],((C_word*)t0)[3],lf[90]);}

/* loop in k784 in user-input in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_fcall f_791(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_791,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_795,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* chicken-bug.scm:102: read-line */
t4=C_fast_retrieve(lf[64]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k793 in loop in k784 in user-input in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_795,2,t0,t1);}
t2=C_eofp(t1);
t3=(C_truep(t2)?t2:C_i_string_equal_p(lf[62],t1));
if(C_truep(t3)){
/* chicken-bug.scm:104: string-concatenate-reverse */
t4=C_fast_retrieve(lf[63]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t4=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
/* chicken-bug.scm:105: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_791(t5,((C_word*)t0)[2],t4);}}

/* k516 in k513 in k510 in k507 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in k480 in k477 in k474 in collect-info in k457 in k454 in k451 in k448 in k445 in k442 in k439 in ... */
static void C_ccall f_518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_518,2,t0,t1);}
t2=*((C_word*)lf[4]+1);
t3=*((C_word*)lf[4]+1);
t4=C_i_check_port_2(*((C_word*)lf[4]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[5]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_524,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-bug.scm:53: ##sys#print */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[34],C_SCHEME_FALSE,*((C_word*)lf[4]+1));}

/* k513 in k510 in k507 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in k480 in k477 in k474 in collect-info in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in ... */
static void C_ccall f_515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_515,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_518,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_739,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:52: chicken-home */
t4=C_fast_retrieve(lf[37]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k510 in k507 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in k480 in k477 in k474 in collect-info in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 in ... */
static void C_ccall f_512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_512,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_515,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_743,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:51: chicken-version */
t4=C_fast_retrieve(lf[40]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_TRUE);}

/* a653 in k650 in k605 in k602 in k599 in k534 in k531 in k528 in k525 in k522 in k516 in k513 in k510 in k507 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in k480 in ... */
static void C_ccall f_654(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_654,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_662,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:66: read-all */
t3=C_fast_retrieve(lf[8]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k650 in k605 in k602 in k599 in k534 in k531 in k528 in k525 in k522 in k516 in k513 in k510 in k507 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in k480 in k477 in ... */
static void C_ccall f_652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_652,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_654,tmp=(C_word)a,a+=2,tmp);
/* chicken-bug.scm:64: with-input-from-file */
t3=C_fast_retrieve(lf[17]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t1,t2);}

/* k1009 in k1006 in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_1011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* k900 in k897 in k894 in main in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_902(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_902,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_905,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_959,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:137: current-seconds */
t4=C_fast_retrieve(lf[55]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k1012 in k1006 in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_1014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k903 in k900 in k897 in k894 in main in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_905(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_905,2,t0,t1);}
t2=C_i_vector_ref(t1,C_fix(3));
t3=t2;
t4=C_i_vector_ref(t1,C_fix(4));
t5=C_i_vector_ref(t1,C_fix(5));
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_920,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:143: print */
t7=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)((C_word*)t0)[4])[1]);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_930,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t7=C_a_i_plus(&a,2,C_fix(1900),t5);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_951,a[2]=t6,a[3]=t8,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-bug.scm:146: justify */
t10=*((C_word*)lf[68]+1);
f_825(3,t10,t9,t4);}}

/* k1016 in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_1018(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:157: main */
t2=*((C_word*)lf[72]+1);
f_848(3,t2,((C_word*)t0)[2],t1);}

/* k698 in k534 in k531 in k528 in k525 in k522 in k516 in k513 in k510 in k507 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in k480 in k477 in k474 in collect-info in k457 in ... */
static void C_ccall f_700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:62: sort */
t2=C_fast_retrieve(lf[29]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[30]+1));}

/* k474 in collect-info in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_476(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_476,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_479,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:43: print */
t3=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[56]);}

/* map-loop117 in k534 in k531 in k528 in k525 in k522 in k516 in k513 in k510 in k507 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in k480 in k477 in k474 in collect-info in k457 in ... */
static void C_fcall f_702(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_702,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_731,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-bug.scm:62: g123 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* collect-info in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_472(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_472,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_476,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:42: print */
t3=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[57]);}

/* k664 in k605 in k602 in k599 in k534 in k531 in k528 in k525 in k522 in k516 in k513 in k510 in k507 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in k480 in k477 in ... */
static void C_ccall f_666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:64: make-pathname */
t2=C_fast_retrieve(lf[18]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[19]);}

/* k468 in user-id in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:39: user-information */
t2=C_fast_retrieve(lf[1]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k660 in a653 in k650 in k605 in k602 in k599 in k534 in k531 in k528 in k525 in k522 in k516 in k513 in k510 in k507 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in ... */
static void C_ccall f_662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:66: display */
t2=*((C_word*)lf[7]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k534 in k531 in k528 in k525 in k522 in k516 in k513 in k510 in k507 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in k480 in k477 in k474 in collect-info in k457 in k454 in ... */
static void C_ccall f_536(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_536,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_601,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_693,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_fast_retrieve(lf[26]);
t9=C_fast_retrieve(lf[27]);
t10=C_i_check_list_2(C_fast_retrieve(lf[27]),lf[28]);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_700,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_702,a[2]=t7,a[3]=t13,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_702(t15,t11,C_fast_retrieve(lf[27]));}

/* k477 in k474 in collect-info in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_479(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_479,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_482,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_767,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_771,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:44: current-seconds */
t5=C_fast_retrieve(lf[55]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* for-each-loop78 in k599 in k534 in k531 in k528 in k525 in k522 in k516 in k513 in k510 in k507 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in k480 in k477 in k474 in collect-info in ... */
static void C_fcall f_668(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_668,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_678,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_541,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* chicken-bug.scm:57: display */
t8=*((C_word*)lf[7]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,lf[24]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k528 in k525 in k522 in k516 in k513 in k510 in k507 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in k480 in k477 in k474 in collect-info in k457 in k454 in k451 in k448 in ... */
static void C_ccall f_530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_530,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_533,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:53: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[32]))(4,*((C_word*)lf[32]+1),t2,C_make_character(10),((C_word*)t0)[3]);}

/* k531 in k528 in k525 in k522 in k516 in k513 in k510 in k507 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in k480 in k477 in k474 in collect-info in k457 in k454 in k451 in ... */
static void C_ccall f_533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_533,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_536,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:54: print */
t3=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[31]);}

/* k614 in k611 in k608 in k605 in k602 in k599 in k534 in k531 in k528 in k525 in k522 in k516 in k513 in k510 in k507 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in ... */
static void C_ccall f_616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:73: newline */
t2=*((C_word*)lf[6]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k608 in k605 in k602 in k599 in k534 in k531 in k528 in k525 in k522 in k516 in k513 in k510 in k507 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in k480 in k477 in ... */
static void C_ccall f_610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_610,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_613,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:67: newline */
t3=*((C_word*)lf[6]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k611 in k608 in k605 in k602 in k599 in k534 in k531 in k528 in k525 in k522 in k516 in k513 in k510 in k507 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in k480 in ... */
static void C_ccall f_613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_613,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_616,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_622,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_648,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_TARGET_CC),C_fix(0));}

/* k636 in a629 in k623 in k620 in k611 in k608 in k605 in k602 in k599 in k534 in k531 in k528 in k525 in k522 in k516 in k513 in k510 in k507 in k504 in k501 in k498 in k495 in ... */
static void C_ccall f_638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:72: display */
t2=*((C_word*)lf[7]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* a629 in k623 in k620 in k611 in k608 in k605 in k602 in k599 in k534 in k531 in k528 in k525 in k522 in k516 in k513 in k510 in k507 in k504 in k501 in k498 in k495 in k492 in ... */
static void C_ccall f_630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_630,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_638,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:72: read-all */
t3=C_fast_retrieve(lf[8]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k623 in k620 in k611 in k608 in k605 in k602 in k599 in k534 in k531 in k528 in k525 in k522 in k516 in k513 in k510 in k507 in k504 in k501 in k498 in k495 in k492 in k489 in ... */
static void C_ccall f_625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_625,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_630,tmp=(C_word)a,a+=2,tmp);
/* chicken-bug.scm:70: with-input-from-pipe */
t3=C_fast_retrieve(lf[9]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],lf[10],t2);}

/* k620 in k611 in k608 in k605 in k602 in k599 in k534 in k531 in k528 in k525 in k522 in k516 in k513 in k510 in k507 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in ... */
static void C_ccall f_622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_622,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_625,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:69: print */
t3=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[12]);}
else{
/* chicken-bug.scm:73: newline */
t2=*((C_word*)lf[6]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}}

/* k646 in k611 in k608 in k605 in k602 in k599 in k534 in k531 in k528 in k525 in k522 in k516 in k513 in k510 in k507 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in ... */
static void C_ccall f_648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_i_string_equal_p(t1,lf[13]))){
/* chicken-bug.scm:68: feature? */
t2=C_fast_retrieve(lf[14]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[15]);}
else{
t2=((C_word*)t0)[2];
f_622(2,t2,C_SCHEME_FALSE);}}

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
if(!C_demand_2(540)){
C_save(t1);
C_rereclaim2(540*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,94);
lf[0]=C_h_intern(&lf[0],7,"user-id");
lf[1]=C_h_intern(&lf[1],16,"user-information");
lf[2]=C_h_intern(&lf[2],15,"current-user-id");
lf[3]=C_h_intern(&lf[3],12,"collect-info");
lf[4]=C_h_intern(&lf[4],19,"\003sysstandard-output");
lf[5]=C_h_intern(&lf[5],6,"printf");
lf[6]=C_h_intern(&lf[6],7,"newline");
lf[7]=C_h_intern(&lf[7],7,"display");
lf[8]=C_h_intern(&lf[8],8,"read-all");
lf[9]=C_h_intern(&lf[9],20,"with-input-from-pipe");
lf[10]=C_decode_literal(C_heaptop,"\376B\000\000\013gcc -v 2>&1");
lf[11]=C_h_intern(&lf[11],5,"print");
lf[12]=C_decode_literal(C_heaptop,"\376B\000\0000CC seems to be gcc, trying to obtain version...\012");
lf[13]=C_decode_literal(C_heaptop,"\376B\000\000\003gcc");
lf[14]=C_h_intern(&lf[14],8,"feature\077");
lf[15]=C_h_intern(&lf[15],4,"unix");
lf[16]=C_h_intern(&lf[16],17,"\003syspeek-c-string");
lf[17]=C_h_intern(&lf[17],20,"with-input-from-file");
lf[18]=C_h_intern(&lf[18],13,"make-pathname");
lf[19]=C_decode_literal(C_heaptop,"\376B\000\000\020chicken-config.h");
lf[20]=C_decode_literal(C_heaptop,"\376B\000\000\024\012\012chicken-config.h:\012");
lf[21]=C_h_intern(&lf[21],8,"for-each");
lf[22]=C_h_intern(&lf[22],9,"\003sysprint");
lf[23]=C_h_intern(&lf[23],15,"\003sysmake-string");
lf[24]=C_decode_literal(C_heaptop,"\376B\000\000\003\012  ");
lf[25]=C_h_intern(&lf[25],4,"chop");
lf[26]=C_h_intern(&lf[26],15,"keyword->string");
lf[27]=C_h_intern(&lf[27],12,"\003sysfeatures");
lf[28]=C_h_intern(&lf[28],3,"map");
lf[29]=C_h_intern(&lf[29],4,"sort");
lf[30]=C_h_intern(&lf[30],8,"string<\077");
lf[31]=C_decode_literal(C_heaptop,"\376B\000\000\011Features:");
lf[32]=C_h_intern(&lf[32],16,"\003syswrite-char-0");
lf[33]=C_h_intern(&lf[33],21,"\003sysinclude-pathnames");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000\016Include path:\011");
lf[35]=C_decode_literal(C_heaptop,"\376B\000\000\020Home directory:\011");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[37]=C_h_intern(&lf[37],12,"chicken-home");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\024CHICKEN version is:\012");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[40]=C_h_intern(&lf[40],15,"chicken-version");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\021\011build platform:\011");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[43]=C_h_intern(&lf[43],14,"build-platform");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000\023\011software version:\011");
lf[45]=C_h_intern(&lf[45],16,"software-version");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\020\011software type:\011");
lf[47]=C_h_intern(&lf[47],13,"software-type");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\017\011machine type:\011");
lf[49]=C_h_intern(&lf[49],12,"machine-type");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\022Host information:\012");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000\022User information:\011");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\006Date:\011");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\002\012\012");
lf[54]=C_h_intern(&lf[54],15,"seconds->string");
lf[55]=C_h_intern(&lf[55],15,"current-seconds");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\0002This is a bug report generated by chicken-bug(1).\012");
lf[57]=C_decode_literal(C_heaptop,"\376B\000\0004\012--------------------------------------------------\012");
lf[58]=C_h_intern(&lf[58],5,"usage");
lf[59]=C_h_intern(&lf[59],4,"exit");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\0017usage: chicken-bug [FILENAME ...]\012\012  -help  -h            show this message"
"\012  -to-stdout           write bug report to standard output\012  -                 "
"   read description from standard input\012\012Generates a bug report file from user i"
"nput or alternatively\012from the contents of files given on the command line.\012");
lf[61]=C_h_intern(&lf[61],10,"user-input");
lf[62]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[63]=C_h_intern(&lf[63],26,"string-concatenate-reverse");
lf[64]=C_h_intern(&lf[64],9,"read-line");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\001jThis is the CHICKEN bug report generator. Please enter a detailed\012descripti"
"on of the problem you have encountered and enter CTRL-D (EOF)\012or a line consisti"
"ng only of \042.\042 to finish. Press CTRL-C to abort the program. You can\012also pass t"
"he description from a file (just abort now and re-invoke\012\042chicken-bug\042 with one "
"or more input files given on the command-line)\012");
lf[66]=C_h_intern(&lf[66],13,"\003systty-port\077");
lf[67]=C_h_intern(&lf[67],18,"\003sysstandard-input");
lf[68]=C_h_intern(&lf[68],7,"justify");
lf[69]=C_h_intern(&lf[69],17,"\003sysstring-append");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[71]=C_h_intern(&lf[71],14,"number->string");
lf[72]=C_h_intern(&lf[72],4,"main");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\001-");
lf[75]=C_h_intern(&lf[75],13,"string-append");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000\017\012\012User input:\012\012");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\006--help");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\002-h");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\005-help");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\012-to-stdout");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000\016\012\012File added: ");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\000\002\012\012");
lf[83]=C_h_intern(&lf[83],15,"generate-report");
lf[84]=C_h_intern(&lf[84],21,"with-output-to-string");
lf[85]=C_h_intern(&lf[85],7,"sprintf");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\033chicken-bug-report.~a-~a-~a");
lf[87]=C_h_intern(&lf[87],19,"seconds->local-time");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\002\012\012");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000#\012A bug report has been written to `");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\002\047.");
lf[91]=C_h_intern(&lf[91],19,"with-output-to-file");
lf[92]=C_h_intern(&lf[92],25,"\003sysimplicit-exit-handler");
lf[93]=C_h_intern(&lf[93],22,"command-line-arguments");
C_register_lf2(lf,94,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_435,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* a1000 in generate-report in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_1001(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1001,2,t0,t1);}
/* chicken-bug.scm:154: print */
t2=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* k1006 in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_1008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1008,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1011,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1014,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
((C_proc2)C_fast_retrieve_symbol_proc(lf[92]))(2,*((C_word*)lf[92]+1),t3);}

/* k761 in k486 in k480 in k477 in k474 in collect-info in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:45: ##sys#print */
t2=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_TRUE,((C_word*)t0)[3]);}

/* k691 in k534 in k531 in k528 in k525 in k522 in k516 in k513 in k510 in k507 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in k480 in k477 in k474 in collect-info in k457 in ... */
static void C_ccall f_693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:62: chop */
t2=C_fast_retrieve(lf[25]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_fix(5));}

/* k765 in k477 in k474 in collect-info in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f_767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:44: print */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[52],t1,lf[53]);}

/* k605 in k602 in k599 in k534 in k531 in k528 in k525 in k522 in k516 in k513 in k510 in k507 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in k480 in k477 in k474 in ... */
static void C_ccall f_607(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_607,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_610,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_652,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_666,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_INSTALL_INCLUDE_HOME),C_fix(0));}

/* k599 in k534 in k531 in k528 in k525 in k522 in k516 in k513 in k510 in k507 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in k480 in k477 in k474 in collect-info in k457 in ... */
static void C_ccall f_601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_601,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_604,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_668,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_668(t6,t2,t1);}

/* k602 in k599 in k534 in k531 in k528 in k525 in k522 in k516 in k513 in k510 in k507 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in k480 in k477 in k474 in collect-info in ... */
static void C_ccall f_604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_604,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_607,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:63: print */
t3=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[20]);}

/* k676 in for-each-loop78 in k599 in k534 in k531 in k528 in k525 in k522 in k516 in k513 in k510 in k507 in k504 in k501 in k498 in k495 in k492 in k489 in k486 in k480 in k477 in k474 in ... */
static void C_ccall f_678(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_668(t3,((C_word*)t0)[4],t2);}

/* f1076 in g193 in main in k457 in k454 in k451 in k448 in k445 in k442 in k439 in k436 in k433 */
static void C_ccall f1076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:88: exit */
t2=C_fast_retrieve(lf[59]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[108] = {
{"f_491:chicken_2dbug_2escm",(void*)f_491},
{"f_494:chicken_2dbug_2escm",(void*)f_494},
{"f_497:chicken_2dbug_2escm",(void*)f_497},
{"f_509:chicken_2dbug_2escm",(void*)f_509},
{"f_506:chicken_2dbug_2escm",(void*)f_506},
{"f_503:chicken_2dbug_2escm",(void*)f_503},
{"f_500:chicken_2dbug_2escm",(void*)f_500},
{"f1069:chicken_2dbug_2escm",(void*)f1069},
{"f_527:chicken_2dbug_2escm",(void*)f_527},
{"f_524:chicken_2dbug_2escm",(void*)f_524},
{"f_482:chicken_2dbug_2escm",(void*)f_482},
{"f_488:chicken_2dbug_2escm",(void*)f_488},
{"f_587:chicken_2dbug_2escm",(void*)f_587},
{"f_438:chicken_2dbug_2escm",(void*)f_438},
{"f_920:chicken_2dbug_2escm",(void*)f_920},
{"f_435:chicken_2dbug_2escm",(void*)f_435},
{"f_453:chicken_2dbug_2escm",(void*)f_453},
{"f_456:chicken_2dbug_2escm",(void*)f_456},
{"f_450:chicken_2dbug_2escm",(void*)f_450},
{"f_848:chicken_2dbug_2escm",(void*)f_848},
{"f_556:chicken_2dbug_2escm",(void*)f_556},
{"f_459:chicken_2dbug_2escm",(void*)f_459},
{"f_936:chicken_2dbug_2escm",(void*)f_936},
{"f_934:chicken_2dbug_2escm",(void*)f_934},
{"f_930:chicken_2dbug_2escm",(void*)f_930},
{"f_963:chicken_2dbug_2escm",(void*)f_963},
{"f_967:chicken_2dbug_2escm",(void*)f_967},
{"f_969:chicken_2dbug_2escm",(void*)f_969},
{"f_739:chicken_2dbug_2escm",(void*)f_739},
{"f_731:chicken_2dbug_2escm",(void*)f_731},
{"f_462:chicken_2dbug_2escm",(void*)f_462},
{"f_850:chicken_2dbug_2escm",(void*)f_850},
{"f_886:chicken_2dbug_2escm",(void*)f_886},
{"f_940:chicken_2dbug_2escm",(void*)f_940},
{"f_979:chicken_2dbug_2escm",(void*)f_979},
{"f_747:chicken_2dbug_2escm",(void*)f_747},
{"f_743:chicken_2dbug_2escm",(void*)f_743},
{"f_771:chicken_2dbug_2escm",(void*)f_771},
{"f_773:chicken_2dbug_2escm",(void*)f_773},
{"f_777:chicken_2dbug_2escm",(void*)f_777},
{"f_829:chicken_2dbug_2escm",(void*)f_829},
{"f_825:chicken_2dbug_2escm",(void*)f_825},
{"f_890:chicken_2dbug_2escm",(void*)f_890},
{"f_820:chicken_2dbug_2escm",(void*)f_820},
{"f_896:chicken_2dbug_2escm",(void*)f_896},
{"f_577:chicken_2dbug_2escm",(void*)f_577},
{"f_959:chicken_2dbug_2escm",(void*)f_959},
{"f_899:chicken_2dbug_2escm",(void*)f_899},
{"f_955:chicken_2dbug_2escm",(void*)f_955},
{"f_951:chicken_2dbug_2escm",(void*)f_951},
{"f_759:chicken_2dbug_2escm",(void*)f_759},
{"f_755:chicken_2dbug_2escm",(void*)f_755},
{"f_751:chicken_2dbug_2escm",(void*)f_751},
{"f_782:chicken_2dbug_2escm",(void*)f_782},
{"f_447:chicken_2dbug_2escm",(void*)f_447},
{"f_786:chicken_2dbug_2escm",(void*)f_786},
{"f_441:chicken_2dbug_2escm",(void*)f_441},
{"f_444:chicken_2dbug_2escm",(void*)f_444},
{"f_549:chicken_2dbug_2escm",(void*)f_549},
{"f_541:chicken_2dbug_2escm",(void*)f_541},
{"f_862:chicken_2dbug_2escm",(void*)f_862},
{"f_866:chicken_2dbug_2escm",(void*)f_866},
{"f_992:chicken_2dbug_2escm",(void*)f_992},
{"f_996:chicken_2dbug_2escm",(void*)f_996},
{"f_791:chicken_2dbug_2escm",(void*)f_791},
{"f_795:chicken_2dbug_2escm",(void*)f_795},
{"f_518:chicken_2dbug_2escm",(void*)f_518},
{"f_515:chicken_2dbug_2escm",(void*)f_515},
{"f_512:chicken_2dbug_2escm",(void*)f_512},
{"f_654:chicken_2dbug_2escm",(void*)f_654},
{"f_652:chicken_2dbug_2escm",(void*)f_652},
{"f_1011:chicken_2dbug_2escm",(void*)f_1011},
{"f_902:chicken_2dbug_2escm",(void*)f_902},
{"f_1014:chicken_2dbug_2escm",(void*)f_1014},
{"f_905:chicken_2dbug_2escm",(void*)f_905},
{"f_1018:chicken_2dbug_2escm",(void*)f_1018},
{"f_700:chicken_2dbug_2escm",(void*)f_700},
{"f_476:chicken_2dbug_2escm",(void*)f_476},
{"f_702:chicken_2dbug_2escm",(void*)f_702},
{"f_472:chicken_2dbug_2escm",(void*)f_472},
{"f_666:chicken_2dbug_2escm",(void*)f_666},
{"f_470:chicken_2dbug_2escm",(void*)f_470},
{"f_662:chicken_2dbug_2escm",(void*)f_662},
{"f_536:chicken_2dbug_2escm",(void*)f_536},
{"f_479:chicken_2dbug_2escm",(void*)f_479},
{"f_668:chicken_2dbug_2escm",(void*)f_668},
{"f_530:chicken_2dbug_2escm",(void*)f_530},
{"f_533:chicken_2dbug_2escm",(void*)f_533},
{"f_616:chicken_2dbug_2escm",(void*)f_616},
{"f_610:chicken_2dbug_2escm",(void*)f_610},
{"f_613:chicken_2dbug_2escm",(void*)f_613},
{"f_638:chicken_2dbug_2escm",(void*)f_638},
{"f_630:chicken_2dbug_2escm",(void*)f_630},
{"f_625:chicken_2dbug_2escm",(void*)f_625},
{"f_622:chicken_2dbug_2escm",(void*)f_622},
{"f_648:chicken_2dbug_2escm",(void*)f_648},
{"toplevel:chicken_2dbug_2escm",(void*)C_toplevel},
{"f_1001:chicken_2dbug_2escm",(void*)f_1001},
{"f_1008:chicken_2dbug_2escm",(void*)f_1008},
{"f_763:chicken_2dbug_2escm",(void*)f_763},
{"f_693:chicken_2dbug_2escm",(void*)f_693},
{"f_767:chicken_2dbug_2escm",(void*)f_767},
{"f_607:chicken_2dbug_2escm",(void*)f_607},
{"f_601:chicken_2dbug_2escm",(void*)f_601},
{"f_604:chicken_2dbug_2escm",(void*)f_604},
{"f_678:chicken_2dbug_2escm",(void*)f_678},
{"f1076:chicken_2dbug_2escm",(void*)f1076},
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
S|  for-each		3
S|  printf		3
o|eliminated procedure checks: 17 
o|specializations:
o|  1 (string=? string string)
o|  1 (string-append string string)
o|  1 (> fixnum fixnum)
o|  1 (string-length string)
o|  1 (current-input-port)
o|  1 (##sys#check-list (or pair list) *)
o|  1 (make-string fixnum char)
o|  3 (##sys#check-output-port * * *)
o|safe globals: (generate-report main justify user-input usage collect-info user-id constant50) 
o|propagated global variable: out5862 ##sys#standard-output 
o|substituted constant variable: a484 
o|substituted constant variable: a485 
o|propagated global variable: out6771 ##sys#standard-output 
o|substituted constant variable: a520 
o|substituted constant variable: a521 
o|inlining procedure: k614 
o|inlining procedure: k614 
o|inlining procedure: k670 
o|contracted procedure: "(chicken-bug.scm:55) g7986" 
o|inlining procedure: k579 
o|contracted procedure: "(chicken-bug.scm:58) g9299" 
o|propagated global variable: out102106 ##sys#standard-output 
o|substituted constant variable: a545 
o|substituted constant variable: a546 
o|substituted constant variable: a561 
o|propagated global variable: out102106 ##sys#standard-output 
o|inlining procedure: k579 
o|inlining procedure: k670 
o|inlining procedure: k704 
o|inlining procedure: k704 
o|propagated global variable: g129133 ##sys#features 
o|propagated global variable: out6771 ##sys#standard-output 
o|propagated global variable: out5862 ##sys#standard-output 
o|inlining procedure: k796 
o|inlining procedure: k796 
o|inlining procedure: k830 
o|inlining procedure: k830 
o|substituted constant variable: a839 
o|substituted constant variable: a845 
o|inlining procedure: k852 
o|inlining procedure: k852 
o|substituted constant variable: a879 
o|inlining procedure: k876 
o|inlining procedure: k876 
o|inlining procedure: k915 
o|inlining procedure: k915 
o|substituted constant variable: constant50 
o|inlining procedure: k971 
o|inlining procedure: k971 
o|replaced variables: 78 
o|removed binding forms: 73 
o|removed side-effect free assignment to unused variable: constant50 
o|propagated global variable: out5862 ##sys#standard-output 
o|propagated global variable: out6771 ##sys#standard-output 
o|propagated global variable: out102106 ##sys#standard-output 
o|replaced variables: 5 
o|removed binding forms: 91 
o|inlining procedure: "(chicken-bug.scm:45) user-id" 
o|inlining procedure: "(chicken-bug.scm:123) usage" 
o|removed binding forms: 7 
o|substituted constant variable: code1671074 
o|removed binding forms: 1 
o|simplifications: ((if . 1) (##core#call . 32)) 
o|  call simplifications:
o|    vector-ref	3
o|    +
o|    member
o|    ##sys#size
o|    fx>
o|    eof-object?
o|    cons	2
o|    ##sys#setslot
o|    ##sys#check-list	3
o|    pair?	4
o|    string-length
o|    fx-
o|    fxmax
o|    ##sys#slot	8
o|    string=?	3
o|contracted procedure: k639 
o|contracted procedure: k673 
o|contracted procedure: k683 
o|contracted procedure: k687 
o|contracted procedure: k570 
o|contracted procedure: k582 
o|contracted procedure: k592 
o|contracted procedure: k596 
o|contracted procedure: k567 
o|contracted procedure: k563 
o|contracted procedure: k558 
o|contracted procedure: k695 
o|contracted procedure: k707 
o|contracted procedure: k710 
o|contracted procedure: k721 
o|contracted procedure: k733 
o|propagated global variable: g129133 ##sys#features 
o|contracted procedure: k799 
o|contracted procedure: k802 
o|contracted procedure: k812 
o|contracted procedure: k842 
o|contracted procedure: k833 
o|contracted procedure: k855 
o|contracted procedure: k870 
o|contracted procedure: k891 
o|contracted procedure: k906 
o|contracted procedure: k909 
o|contracted procedure: k912 
o|contracted procedure: k945 
o|contracted procedure: k974 
o|contracted procedure: k984 
o|contracted procedure: k988 
o|simplifications: ((if . 1) (let . 8)) 
o|removed binding forms: 31 
o|inlining procedure: k713 
o|inlining procedure: k713 
o|replaced variables: 14 
o|removed binding forms: 8 
o|replaced variables: 4 
o|removed binding forms: 1 
o|customizable procedures: (g193200 for-each-loop192209 k897 loop170 map-loop117134 for-each-loop91109 for-each-loop78141) 
o|calls to known targets: 24 
o|fast box initializations: 5 
*/
/* end of file */
