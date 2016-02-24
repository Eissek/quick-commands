/* Generated from chicken.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:02
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: chicken.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -extend private-namespace.scm -no-trace -output-file chicken.c
   used units: library eval chicken_2dsyntax chicken_2dsyntax chicken_2dffi_2dsyntax srfi_2d1 srfi_2d4 utils files extras data_2dstructures support compiler optimizer lfa2 compiler_2dsyntax scrutinizer driver platform backend srfi_2d69
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_chicken_2dffi_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dffi_2dsyntax_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d1_toplevel)
C_externimport void C_ccall C_srfi_2d1_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d4_toplevel)
C_externimport void C_ccall C_srfi_2d4_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_support_toplevel)
C_externimport void C_ccall C_support_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_compiler_toplevel)
C_externimport void C_ccall C_compiler_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_optimizer_toplevel)
C_externimport void C_ccall C_optimizer_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_lfa2_toplevel)
C_externimport void C_ccall C_lfa2_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_compiler_2dsyntax_toplevel)
C_externimport void C_ccall C_compiler_2dsyntax_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_scrutinizer_toplevel)
C_externimport void C_ccall C_scrutinizer_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_driver_toplevel)
C_externimport void C_ccall C_driver_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_platform_toplevel)
C_externimport void C_ccall C_platform_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_backend_toplevel)
C_externimport void C_ccall C_backend_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d69_toplevel)
C_externimport void C_ccall C_srfi_2d69_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[43];
static double C_possibly_force_alignment;


C_noret_decl(f_703)
static void C_ccall f_703(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_701)
static void C_ccall f_701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_473)
static void C_ccall f_473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_475)
static void C_ccall f_475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_479)
static void C_ccall f_479(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_470)
static void C_ccall f_470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_467)
static void C_ccall f_467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_318)
static void C_ccall f_318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_315)
static void C_ccall f_315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_312)
static void C_ccall f_312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_544)
static void C_ccall f_544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_683)
static void C_ccall f_683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_554)
static void C_ccall f_554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_693)
static void C_ccall f_693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_364)
static void C_ccall f_364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_366)
static void C_ccall f_366(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_564)
static void C_ccall f_564(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_360)
static void C_ccall f_360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_428)
static void C_ccall f_428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_300)
static void C_ccall f_300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_424)
static void C_ccall f_424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_303)
static void C_ccall f_303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_372)
static void C_fcall f_372(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_306)
static void C_ccall f_306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_309)
static void C_ccall f_309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_574)
static void C_ccall f_574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_499)
static void C_fcall f_499(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_494)
static void C_ccall f_494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_491)
static void C_ccall f_491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_327)
static void C_ccall f_327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_324)
static void C_ccall f_324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_321)
static void C_ccall f_321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_386)
static void C_ccall f_386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_534)
static void C_ccall f_534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_339)
static void C_ccall f_339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_336)
static void C_ccall f_336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_333)
static void C_ccall f_333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_330)
static void C_ccall f_330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_345)
static void C_ccall f_345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_348)
static void C_ccall f_348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_342)
static void C_ccall f_342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_487)
static void C_ccall f_487(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_406)
static void C_fcall f_406(C_word t0,C_word t1) C_noret;
C_noret_decl(f_354)
static void C_ccall f_354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_357)
static void C_ccall f_357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_351)
static void C_ccall f_351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_676)
static void C_ccall f_676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_584)
static void C_ccall f_584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_715)
static void C_ccall f_715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_622)
static void C_ccall f_622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_711)
static void C_ccall f_711(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_372)
static void C_fcall trf_372(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_372(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_372(t0,t1,t2,t3,t4);}

C_noret_decl(trf_499)
static void C_fcall trf_499(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_499(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_499(t0,t1,t2);}

C_noret_decl(trf_406)
static void C_fcall trf_406(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_406(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_406(t0,t1);}

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

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

/* a702 in k358 in k355 in k352 in k349 in k346 in k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 in ... */
static void C_ccall f_703(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_703,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_string_equal_p(t2,lf[37]));}

/* k699 in k691 in k358 in k355 in k352 in k349 in k346 in k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in ... */
static void C_ccall f_701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cdr(t1);
/* chicken.scm:42: append */
t3=*((C_word*)lf[35]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],((C_word*)t0)[3],t2);}

/* k471 in k465 in k362 in k358 in k355 in k352 in k349 in k346 in k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in ... */
static void C_ccall f_473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a474 in k362 in k358 in k355 in k352 in k349 in k346 in k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in ... */
static void C_ccall f_475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_475,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_479,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken.scm:73: user-options-pass */
t3=*((C_word*)lf[6]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k477 in a474 in k362 in k358 in k355 in k352 in k349 in k346 in k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in ... */
static void C_ccall f_479(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=t1;
/* chicken.scm:73: g39 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],*((C_word*)lf[0]+1));}
else{
t2=*((C_word*)lf[1]+1);
t3=*((C_word*)lf[1]+1);
/* chicken.scm:73: g39 */
t4=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],*((C_word*)lf[0]+1));}}

/* k468 in k465 in k362 in k358 in k355 in k352 in k349 in k346 in k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in ... */
static void C_ccall f_470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* k465 in k362 in k358 in k355 in k352 in k349 in k346 in k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in ... */
static void C_ccall f_467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_467,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_470,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_473,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
t4=*((C_word*)lf[5]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k316 in k313 in k310 in k307 in k304 in k301 in k298 */
static void C_ccall f_318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_318,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_321,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k313 in k310 in k307 in k304 in k301 in k298 */
static void C_ccall f_315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_315,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_318,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d4_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k310 in k307 in k304 in k301 in k298 */
static void C_ccall f_312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_312,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_315,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d1_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k542 in loop in a486 in k362 in k358 in k355 in k352 in k349 in k346 in k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in ... */
static void C_ccall f_544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_u_i_cdr(((C_word*)t0)[3]);
/* chicken.scm:133: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_499(t4,((C_word*)t0)[5],t3);}

/* k681 in loop in a486 in k362 in k358 in k355 in k352 in k349 in k346 in k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in ... */
static void C_ccall f_683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm:147: warning */
t2=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[32],t1);}

/* k552 in loop in a486 in k362 in k358 in k355 in k352 in k349 in k346 in k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in ... */
static void C_ccall f_554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_u_i_cdr(((C_word*)t0)[3]);
/* chicken.scm:133: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_499(t4,((C_word*)t0)[5],t3);}

/* k691 in k358 in k355 in k352 in k349 in k346 in k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 in ... */
static void C_ccall f_693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_693,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_701,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm:46: argv */
t4=*((C_word*)lf[36]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

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
if(!C_demand_2(370)){
C_save(t1);
C_rereclaim2(370*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,43);
lf[0]=C_h_intern(&lf[0],27,"\010compilercompiler-arguments");
lf[1]=C_h_intern(&lf[1],29,"\010compilerprocess-command-line");
lf[2]=C_h_intern(&lf[2],7,"reverse");
lf[3]=C_h_intern(&lf[3],14,"string->symbol");
lf[4]=C_h_intern(&lf[4],9,"substring");
lf[5]=C_h_intern(&lf[5],25,"\003sysimplicit-exit-handler");
lf[6]=C_h_intern(&lf[6],17,"user-options-pass");
lf[7]=C_h_intern(&lf[7],4,"exit");
lf[8]=C_h_intern(&lf[8],19,"compile-source-file");
lf[9]=C_h_intern(&lf[9],14,"optimize-level");
lf[10]=C_h_intern(&lf[10],5,"cons\052");
lf[11]=C_h_intern(&lf[11],18,"no-compiler-syntax");
lf[12]=C_h_intern(&lf[12],21,"no-usual-integrations");
lf[13]=C_h_intern(&lf[13],22,"optimize-leaf-routines");
lf[14]=C_h_intern(&lf[14],6,"inline");
lf[15]=C_h_intern(&lf[15],13,"inline-global");
lf[16]=C_h_intern(&lf[16],5,"local");
lf[17]=C_h_intern(&lf[17],10,"specialize");
lf[18]=C_h_intern(&lf[18],6,"unsafe");
lf[19]=C_h_intern(&lf[19],18,"disable-interrupts");
lf[20]=C_h_intern(&lf[20],8,"no-trace");
lf[21]=C_h_intern(&lf[21],5,"block");
lf[22]=C_h_intern(&lf[22],14,"no-lambda-info");
lf[23]=C_h_intern(&lf[23],10,"clustering");
lf[24]=C_h_intern(&lf[24],4,"lfa2");
lf[25]=C_h_intern(&lf[25],11,"debug-level");
lf[26]=C_h_intern(&lf[26],10,"scrutinize");
lf[27]=C_h_intern(&lf[27],31,"\010compilervalid-compiler-options");
lf[28]=C_h_intern(&lf[28],45,"\010compilervalid-compiler-options-with-argument");
lf[29]=C_h_intern(&lf[29],13,"\010compilerquit");
lf[30]=C_decode_literal(C_heaptop,"\376B\000\000 missing argument to `-~s\047 option");
lf[31]=C_h_intern(&lf[31],7,"warning");
lf[32]=C_decode_literal(C_heaptop,"\376B\000\000!invalid compiler option (ignored)");
lf[33]=C_h_intern(&lf[33],4,"conc");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000\001-");
lf[35]=C_h_intern(&lf[35],6,"append");
lf[36]=C_h_intern(&lf[36],4,"argv");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[38]=C_h_intern(&lf[38],6,"remove");
lf[39]=C_h_intern(&lf[39],12,"string-split");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[41]=C_h_intern(&lf[41],24,"get-environment-variable");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\017CHICKEN_OPTIONS");
C_register_lf2(lf,43,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_300,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k362 in k358 in k355 in k352 in k349 in k346 in k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 in ... */
static void C_ccall f_364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_364,2,t0,t1);}
t2=C_mutate2((C_word*)lf[0]+1 /* (set! ##compiler#compiler-arguments ...) */,t1);
t3=C_mutate2((C_word*)lf[1]+1 /* (set! ##compiler#process-command-line ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_366,tmp=(C_word)a,a+=2,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_467,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_475,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_487,tmp=(C_word)a,a+=2,tmp);
/* chicken.scm:73: ##sys#call-with-values */
C_call_with_values(4,0,t4,t5,t6);}

/* ##compiler#process-command-line in k362 in k358 in k355 in k352 in k349 in k346 in k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in ... */
static void C_ccall f_366(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_366,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_372,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_372(t6,t1,t2,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* k562 in loop in a486 in k362 in k358 in k355 in k352 in k349 in k346 in k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in ... */
static void C_ccall f_564(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_u_i_cdr(((C_word*)t0)[3]);
/* chicken.scm:133: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_499(t4,((C_word*)t0)[5],t3);}

/* k358 in k355 in k352 in k349 in k346 in k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 */
static void C_ccall f_360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_360,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_364,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_693,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_703,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_711,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_715,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* chicken.scm:45: get-environment-variable */
t7=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,lf[42]);}

/* k426 in k404 in loop in process-command-line in k362 in k358 in k355 in k352 in k349 in k346 in k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in ... */
static void C_ccall f_428(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm:65: string->symbol */
t2=*((C_word*)lf[3]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k298 */
static void C_ccall f_300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_300,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_303,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k422 in k404 in loop in process-command-line in k362 in k358 in k355 in k352 in k349 in k346 in k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in ... */
static void C_ccall f_424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_424,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* chicken.scm:65: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_372(t3,((C_word*)t0)[4],((C_word*)t0)[5],t2,((C_word*)t0)[6]);}

/* k301 in k298 */
static void C_ccall f_303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_303,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_306,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_chicken_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* loop in process-command-line in k362 in k358 in k355 in k352 in k349 in k346 in k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in ... */
static void C_fcall f_372(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
a=C_alloc(9);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_372,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_386,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm:58: reverse */
t6=*((C_word*)lf[2]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}
else{
t5=C_i_car(t2);
t6=t5;
t7=C_i_string_length(t6);
t8=t7;
t9=C_subchar(t6,C_fix(0));
t10=C_i_char_equalp(C_make_character(45),t9);
t11=(C_truep(t10)?C_fixnum_greaterp(t8,C_fix(1)):C_SCHEME_FALSE);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_406,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,a[6]=t4,a[7]=t6,a[8]=t8,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnum_greaterp(t8,C_fix(1)))){
t13=C_subchar(t6,C_fix(1));
t14=t12;
f_406(t14,C_i_char_equalp(C_make_character(58),t13));}
else{
t13=t12;
f_406(t13,C_SCHEME_FALSE);}}
else{
if(C_truep(t4)){
t12=t2;
t13=C_u_i_cdr(t12);
t14=C_a_i_cons(&a,2,t6,t3);
/* chicken.scm:67: loop */
t21=t1;
t22=t13;
t23=t14;
t24=t4;
t1=t21;
t2=t22;
t3=t23;
t4=t24;
goto loop;}
else{
t12=t2;
t13=C_u_i_cdr(t12);
/* chicken.scm:68: loop */
t21=t1;
t22=t13;
t23=t3;
t24=t6;
t1=t21;
t2=t22;
t3=t23;
t4=t24;
goto loop;}}}}

/* k304 in k301 in k298 */
static void C_ccall f_306(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_306,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_309,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_chicken_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k307 in k304 in k301 in k298 */
static void C_ccall f_309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_309,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_312,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_chicken_2dffi_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k572 in loop in a486 in k362 in k358 in k355 in k352 in k349 in k346 in k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in ... */
static void C_ccall f_574(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_u_i_cdr(((C_word*)t0)[3]);
/* chicken.scm:133: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_499(t4,((C_word*)t0)[5],t3);}

/* loop in a486 in k362 in k358 in k355 in k352 in k349 in k346 in k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in ... */
static void C_fcall f_499(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(10);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_499,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_i_car(t2);
t4=t2;
t5=C_u_i_cdr(t4);
t6=C_eqp(lf[9],t3);
if(C_truep(t6)){
t7=C_i_car(t5);
t8=C_a_i_string_to_number(&a,2,t7,C_fix(10));
switch(t8){
case C_fix(0):
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_534,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:83: cons* */
t10=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t9,lf[11],lf[12],((C_word*)((C_word*)t0)[2])[1]);
case C_fix(1):
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_544,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:86: cons* */
t10=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,lf[13],((C_word*)((C_word*)t0)[2])[1]);
case C_fix(2):
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_554,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:91: cons* */
t10=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t9,lf[13],lf[14],((C_word*)((C_word*)t0)[2])[1]);
case C_fix(3):
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_564,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:98: cons* */
t10=*((C_word*)lf[10]+1);
((C_proc8)(void*)(*((C_word*)t10+1)))(8,t10,t9,lf[13],lf[14],lf[15],lf[16],lf[17],((C_word*)((C_word*)t0)[2])[1]);
case C_fix(4):
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_574,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:108: cons* */
t10=*((C_word*)lf[10]+1);
((C_proc9)(void*)(*((C_word*)t10+1)))(9,t10,t9,lf[13],lf[14],lf[15],lf[17],lf[16],lf[18],((C_word*)((C_word*)t0)[2])[1]);
default:
if(C_truep(C_i_greater_or_equalp(t8,C_fix(5)))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_584,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:119: cons* */
t10=*((C_word*)lf[10]+1);
((C_proc16)(void*)(*((C_word*)t10+1)))(16,t10,t9,lf[19],lf[20],lf[18],lf[21],lf[13],lf[22],lf[17],lf[13],lf[22],lf[14],lf[15],lf[23],lf[24],((C_word*)((C_word*)t0)[2])[1]);}
else{
t9=C_u_i_cdr(t5);
/* chicken.scm:133: loop */
t31=t1;
t32=t9;
t1=t31;
t2=t32;
goto loop;}}}
else{
t7=C_eqp(lf[25],t3);
if(C_truep(t7)){
t8=C_i_car(t5);
t9=C_a_i_string_to_number(&a,2,t8,C_fix(10));
switch(t9){
case C_fix(0):
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_622,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:137: cons* */
t11=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t10,lf[22],lf[20],((C_word*)((C_word*)t0)[2])[1]);
case C_fix(1):
t10=C_a_i_cons(&a,2,lf[20],((C_word*)((C_word*)t0)[2])[1]);
t11=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t10);
t12=C_u_i_cdr(t5);
/* chicken.scm:140: loop */
t31=t1;
t32=t12;
t1=t31;
t2=t32;
goto loop;
default:
t10=C_a_i_cons(&a,2,lf[26],((C_word*)((C_word*)t0)[2])[1]);
t11=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t10);
t12=C_u_i_cdr(t5);
/* chicken.scm:140: loop */
t31=t1;
t32=t12;
t1=t31;
t2=t32;
goto loop;}}
else{
if(C_truep(C_i_memq(t3,*((C_word*)lf[27]+1)))){
/* chicken.scm:141: loop */
t31=t1;
t32=t5;
t1=t31;
t2=t32;
goto loop;}
else{
if(C_truep(C_i_memq(t3,*((C_word*)lf[28]+1)))){
if(C_truep(C_i_pairp(t5))){
t8=C_u_i_cdr(t5);
/* chicken.scm:144: loop */
t31=t1;
t32=t8;
t1=t31;
t2=t32;
goto loop;}
else{
/* chicken.scm:145: quit */
t8=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t1,lf[30],t3);}}
else{
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_676,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_683,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_stringp(t3))){
/* chicken.scm:147: warning */
t10=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t8,lf[32],t3);}
else{
/* chicken.scm:149: conc */
t10=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,lf[34],t3);}}}}}}}

/* k492 in k489 in a486 in k362 in k358 in k355 in k352 in k349 in k346 in k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in ... */
static void C_ccall f_494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm:152: exit */
t2=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k489 in a486 in k362 in k358 in k355 in k352 in k349 in k346 in k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in ... */
static void C_ccall f_491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_491,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_494,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t2,*((C_word*)lf[8]+1),((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 */
static void C_ccall f_327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_327,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_330,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 */
static void C_ccall f_324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_324,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_327,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 */
static void C_ccall f_321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_321,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_324,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k384 in loop in process-command-line in k362 in k358 in k355 in k352 in k349 in k346 in k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in ... */
static void C_ccall f_386(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm:58: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k532 in loop in a486 in k362 in k358 in k355 in k352 in k349 in k346 in k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in ... */
static void C_ccall f_534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_u_i_cdr(((C_word*)t0)[3]);
/* chicken.scm:133: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_499(t4,((C_word*)t0)[5],t3);}

/* k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 */
static void C_ccall f_339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_339,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_342,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_lfa2_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 */
static void C_ccall f_336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_336,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_339,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_optimizer_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 */
static void C_ccall f_333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_333,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_336,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_compiler_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 */
static void C_ccall f_330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_330,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_333,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_support_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 */
static void C_ccall f_345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_345,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_348,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_scrutinizer_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k346 in k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 */
static void C_ccall f_348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_348,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_351,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_driver_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 */
static void C_ccall f_342(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_342,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_345,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_compiler_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* a486 in k362 in k358 in k355 in k352 in k349 in k346 in k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in ... */
static void C_ccall f_487(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_487,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_491,a[2]=t1,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_499,a[2]=t4,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_499(t9,t5,((C_word*)t4)[1]);}

/* k404 in loop in process-command-line in k362 in k358 in k355 in k352 in k349 in k346 in k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in ... */
static void C_fcall f_406(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_406,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* chicken.scm:64: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_372(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_424,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_428,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken.scm:65: substring */
t6=*((C_word*)lf[4]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,((C_word*)t0)[7],C_fix(1),((C_word*)t0)[8]);}}

/* k352 in k349 in k346 in k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 */
static void C_ccall f_354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_354,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_357,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_backend_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k355 in k352 in k349 in k346 in k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 */
static void C_ccall f_357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_357,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_360,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d69_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k349 in k346 in k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 */
static void C_ccall f_351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_351,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_354,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_platform_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k674 in loop in a486 in k362 in k358 in k355 in k352 in k349 in k346 in k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in ... */
static void C_ccall f_676(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm:150: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_499(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k582 in loop in a486 in k362 in k358 in k355 in k352 in k349 in k346 in k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in ... */
static void C_ccall f_584(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_u_i_cdr(((C_word*)t0)[3]);
/* chicken.scm:133: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_499(t4,((C_word*)t0)[5],t3);}

/* k713 in k358 in k355 in k352 in k349 in k346 in k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 in ... */
static void C_ccall f_715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
/* chicken.scm:45: string-split */
t3=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}
else{
/* chicken.scm:45: string-split */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[40]);}}

/* k620 in loop in a486 in k362 in k358 in k355 in k352 in k349 in k346 in k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in ... */
static void C_ccall f_622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_u_i_cdr(((C_word*)t0)[3]);
/* chicken.scm:140: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_499(t4,((C_word*)t0)[5],t3);}

/* k709 in k358 in k355 in k352 in k349 in k346 in k343 in k340 in k337 in k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 in ... */
static void C_ccall f_711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm:43: remove */
t2=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[53] = {
{"f_703:chicken_2escm",(void*)f_703},
{"f_701:chicken_2escm",(void*)f_701},
{"f_473:chicken_2escm",(void*)f_473},
{"f_475:chicken_2escm",(void*)f_475},
{"f_479:chicken_2escm",(void*)f_479},
{"f_470:chicken_2escm",(void*)f_470},
{"f_467:chicken_2escm",(void*)f_467},
{"f_318:chicken_2escm",(void*)f_318},
{"f_315:chicken_2escm",(void*)f_315},
{"f_312:chicken_2escm",(void*)f_312},
{"f_544:chicken_2escm",(void*)f_544},
{"f_683:chicken_2escm",(void*)f_683},
{"f_554:chicken_2escm",(void*)f_554},
{"f_693:chicken_2escm",(void*)f_693},
{"toplevel:chicken_2escm",(void*)C_toplevel},
{"f_364:chicken_2escm",(void*)f_364},
{"f_366:chicken_2escm",(void*)f_366},
{"f_564:chicken_2escm",(void*)f_564},
{"f_360:chicken_2escm",(void*)f_360},
{"f_428:chicken_2escm",(void*)f_428},
{"f_300:chicken_2escm",(void*)f_300},
{"f_424:chicken_2escm",(void*)f_424},
{"f_303:chicken_2escm",(void*)f_303},
{"f_372:chicken_2escm",(void*)f_372},
{"f_306:chicken_2escm",(void*)f_306},
{"f_309:chicken_2escm",(void*)f_309},
{"f_574:chicken_2escm",(void*)f_574},
{"f_499:chicken_2escm",(void*)f_499},
{"f_494:chicken_2escm",(void*)f_494},
{"f_491:chicken_2escm",(void*)f_491},
{"f_327:chicken_2escm",(void*)f_327},
{"f_324:chicken_2escm",(void*)f_324},
{"f_321:chicken_2escm",(void*)f_321},
{"f_386:chicken_2escm",(void*)f_386},
{"f_534:chicken_2escm",(void*)f_534},
{"f_339:chicken_2escm",(void*)f_339},
{"f_336:chicken_2escm",(void*)f_336},
{"f_333:chicken_2escm",(void*)f_333},
{"f_330:chicken_2escm",(void*)f_330},
{"f_345:chicken_2escm",(void*)f_345},
{"f_348:chicken_2escm",(void*)f_348},
{"f_342:chicken_2escm",(void*)f_342},
{"f_487:chicken_2escm",(void*)f_487},
{"f_406:chicken_2escm",(void*)f_406},
{"f_354:chicken_2escm",(void*)f_354},
{"f_357:chicken_2escm",(void*)f_357},
{"f_351:chicken_2escm",(void*)f_351},
{"f_676:chicken_2escm",(void*)f_676},
{"f_584:chicken_2escm",(void*)f_584},
{"f_715:chicken_2escm",(void*)f_715},
{"f_622:chicken_2escm",(void*)f_622},
{"f_711:chicken_2escm",(void*)f_711},
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
o|eliminated procedure checks: 1 
o|specializations:
o|  7 (eqv? * (not float))
o|  8 (cdr pair)
o|  2 (> fixnum fixnum)
o|  2 (string-ref string fixnum)
o|inlining procedure: k374 
o|substituted constant variable: a394 
o|inlining procedure: k374 
o|inlining procedure: k401 
o|inlining procedure: k401 
o|substituted constant variable: a437 
o|substituted constant variable: a439 
o|inlining procedure: k440 
o|inlining procedure: k440 
o|substituted constant variable: a464 
o|inlining procedure: k480 
o|inlining procedure: k480 
o|propagated global variable: r481730 ##compiler#process-command-line 
o|inlining procedure: k501 
o|inlining procedure: k501 
o|inlining procedure: k535 
o|inlining procedure: k535 
o|inlining procedure: k555 
o|inlining procedure: k555 
o|inlining procedure: k575 
o|inlining procedure: k575 
o|substituted constant variable: a586 
o|substituted constant variable: a588 
o|substituted constant variable: a590 
o|substituted constant variable: a592 
o|substituted constant variable: a594 
o|inlining procedure: k599 
o|inlining procedure: k623 
o|inlining procedure: k623 
o|substituted constant variable: a638 
o|substituted constant variable: a640 
o|inlining procedure: k599 
o|inlining procedure: k654 
o|inlining procedure: k654 
o|inlining procedure: k681 
o|inlining procedure: k681 
o|inlining procedure: k716 
o|inlining procedure: k716 
o|replaced variables: 74 
o|removed binding forms: 32 
o|propagated global variable: g3940731 ##compiler#process-command-line 
o|substituted constant variable: r717755 
o|substituted constant variable: r717755 
o|replaced variables: 11 
o|removed binding forms: 74 
o|inlining procedure: k520 
o|inlining procedure: k520 
o|inlining procedure: k520 
o|inlining procedure: k520 
o|inlining procedure: k520 
o|inlining procedure: k520 
o|inlining procedure: k520 
o|inlining procedure: k608 
o|inlining procedure: k608 
o|inlining procedure: k608 
o|removed binding forms: 13 
o|removed binding forms: 12 
o|removed binding forms: 1 
o|simplifications: ((if . 1) (##core#call . 36)) 
o|  call simplifications:
o|    string=?
o|    cdr
o|    ##sys#call-with-values
o|    memq	2
o|    string?
o|    pair?
o|    string->number	2
o|    eq?	9
o|    >=
o|    apply
o|    null?	2
o|    car	4
o|    string-length
o|    fx>	2
o|    char=?	2
o|    cons	4
o|    values
o|contracted procedure: k377 
o|contracted procedure: k387 
o|contracted procedure: k390 
o|contracted procedure: k457 
o|contracted procedure: k398 
o|contracted procedure: k418 
o|contracted procedure: k429 
o|contracted procedure: k449 
o|contracted procedure: k504 
o|contracted procedure: k507 
o|contracted procedure: k514 
o|contracted procedure: k596 
o|contracted procedure: k517 
o|contracted procedure: k528 
o|contracted procedure: k538 
o|contracted procedure: k548 
o|contracted procedure: k558 
o|contracted procedure: k568 
o|contracted procedure: k578 
o|contracted procedure: k602 
o|contracted procedure: k642 
o|contracted procedure: k605 
o|contracted procedure: k616 
o|contracted procedure: k626 
o|contracted procedure: k630 
o|contracted procedure: k634 
o|contracted procedure: k648 
o|contracted procedure: k657 
o|contracted procedure: k663 
o|contracted procedure: k684 
o|contracted procedure: k695 
o|simplifications: ((let . 13)) 
o|removed binding forms: 31 
o|replaced variables: 12 
o|removed binding forms: 4 
o|customizable procedures: (loop46 k404 loop29) 
o|calls to known targets: 21 
o|identified direct recursive calls: f_372 2 
o|identified direct recursive calls: f_499 5 
o|fast box initializations: 2 
*/
/* end of file */
