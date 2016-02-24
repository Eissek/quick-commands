/* Generated from setup-api.import.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:04
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: setup-api.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -feature chicken-compile-shared -dynamic -no-trace -output-file setup-api.import.c
   used units: library eval chicken_2dsyntax
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[23];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,24),40,108,111,111,112,56,53,32,108,56,48,49,48,52,32,108,101,110,56,49,49,48,53,41};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,39),40,97,51,53,51,32,105,110,112,117,116,55,57,57,50,32,114,101,110,97,109,101,56,56,57,51,32,99,111,109,112,97,114,101,55,54,57,52,41,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,12),40,97,52,55,50,32,101,120,112,55,52,41,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,52,55,32,108,52,50,54,54,32,108,101,110,52,51,54,55,41,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,39),40,97,52,51,55,32,105,110,112,117,116,52,49,53,52,32,114,101,110,97,109,101,53,48,53,53,32,99,111,109,112,97,114,101,51,56,53,54,41,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,48,32,108,53,50,57,32,108,101,110,54,51,48,41,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,37),40,97,53,51,49,32,105,110,112,117,116,52,49,55,32,114,101,110,97,109,101,49,51,49,56,32,99,111,109,112,97,114,101,49,49,57,41,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_424)
static void C_ccall f_424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_581)
static void C_fcall f_581(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_505)
static void C_fcall f_505(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_588)
static void C_ccall f_588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_500)
static void C_ccall f_500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_410)
static void C_ccall f_410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_532)
static void C_ccall f_532(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_491)
static void C_ccall f_491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_494)
static void C_ccall f_494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_530)
static void C_ccall f_530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_379)
static void C_ccall f_379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_371)
static void C_ccall f_371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_403)
static void C_fcall f_403(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_473)
static void C_ccall f_473(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_471)
static void C_ccall f_471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_526)
static void C_ccall f_526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_481)
static void C_ccall f_481(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_364)
static void C_ccall f_364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_549)
static void C_ccall f_549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_542)
static void C_ccall f_542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_392)
static void C_ccall f_392(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_398)
static void C_ccall f_398(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_467)
static void C_ccall f_467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_602)
static void C_ccall f_602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_389)
static void C_ccall f_389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_455)
static void C_ccall f_455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_320)
static void C_ccall f_320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_448)
static void C_ccall f_448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_576)
static void C_ccall f_576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_570)
static void C_ccall f_570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_332)
static void C_ccall f_332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_438)
static void C_ccall f_438(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_436)
static void C_ccall f_436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_567)
static void C_ccall f_567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_561)
static void C_ccall f_561(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_323)
static void C_ccall f_323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_329)
static void C_ccall f_329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_326)
static void C_ccall f_326(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_512)
static void C_ccall f_512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_352)
static void C_ccall f_352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_354)
static void C_ccall f_354(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;

C_noret_decl(trf_581)
static void C_fcall trf_581(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_581(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_581(t0,t1,t2,t3);}

C_noret_decl(trf_505)
static void C_fcall trf_505(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_505(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_505(t0,t1,t2,t3);}

C_noret_decl(trf_403)
static void C_fcall trf_403(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_403(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_403(t0,t1,t2,t3);}

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

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

/* k422 in k408 in loop85 in k396 in k390 in k387 in a353 in k434 in k528 in k327 in k324 in k321 in k318 */
static void C_ccall f_424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* setup-api.import.scm:62: loop85 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_403(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* loop10 in k574 in k568 in k565 in a531 in k327 in k324 in k321 in k318 */
static void C_fcall f_581(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_581,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_588,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* setup-api.import.scm:59: ##sys#= */
((C_proc4)C_fast_retrieve_symbol_proc(lf[11]))(4,*((C_word*)lf[11]+1),t4,t3,C_fix(0));}

/* loop47 in k498 in k492 in k489 in a437 in k528 in k327 in k324 in k321 in k318 */
static void C_fcall f_505(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_505,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_512,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* setup-api.import.scm:60: ##sys#= */
((C_proc4)C_fast_retrieve_symbol_proc(lf[11]))(4,*((C_word*)lf[11]+1),t4,t3,C_fix(0));}

/* k586 in loop10 in k574 in k568 in k565 in a531 in k327 in k324 in k321 in k318 */
static void C_ccall f_588(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_588,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST));}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_602,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* setup-api.import.scm:59: ##sys#+ */
((C_proc4)C_fast_retrieve_symbol_proc(lf[10]))(4,*((C_word*)lf[10]+1),t4,((C_word*)t0)[5],C_fix(-1));}}

/* k498 in k492 in k489 in a437 in k528 in k327 in k324 in k321 in k318 */
static void C_ccall f_500(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_500,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_505,a[2]=t3,a[3]=((C_word)li3),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_505(t5,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[2];
f_448(2,t2,C_SCHEME_FALSE);}}

/* k408 in loop85 in k396 in k390 in k387 in a353 in k434 in k528 in k327 in k324 in k321 in k318 */
static void C_ccall f_410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_410,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST));}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_424,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* setup-api.import.scm:62: ##sys#+ */
((C_proc4)C_fast_retrieve_symbol_proc(lf[10]))(4,*((C_word*)lf[10]+1),t4,((C_word*)t0)[5],C_fix(-1));}}

/* a531 in k327 in k324 in k321 in k318 */
static void C_ccall f_532(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_532,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_542,a[2]=t6,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_567,a[2]=t7,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* setup-api.import.scm:59: ##sys#list? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t8,t6);}

/* k489 in a437 in k528 in k327 in k324 in k321 in k318 */
static void C_ccall f_491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_491,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_494,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* setup-api.import.scm:60: ##sys#length */
t3=C_fast_retrieve(lf[13]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
f_448(2,t2,C_SCHEME_FALSE);}}

/* k492 in k489 in a437 in k528 in k327 in k324 in k321 in k318 */
static void C_ccall f_494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_494,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_500,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* setup-api.import.scm:60: ##sys#>= */
((C_proc4)C_fast_retrieve_symbol_proc(lf[12]))(4,*((C_word*)lf[12]+1),t3,t2,C_fix(0));}

/* k528 in k327 in k324 in k321 in k318 */
static void C_ccall f_530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_530,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[1],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_436,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_438,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp);
/* setup-api.import.scm:60: ##sys#er-transformer */
((C_proc3)C_fast_retrieve_symbol_proc(lf[15]))(3,*((C_word*)lf[15]+1),t4,t5);}

/* k377 in k369 in k362 in a353 in k434 in k528 in k327 in k324 in k321 in k318 */
static void C_ccall f_379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_379,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_SCHEME_FALSE,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,((C_word*)t0)[4],t3));}

/* k369 in k362 in a353 in k434 in k528 in k327 in k324 in k321 in k318 */
static void C_ccall f_371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_371,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_379,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* setup-api.import.scm:62: rename88 */
t4=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[7]);}

/* loop85 in k396 in k390 in k387 in a353 in k434 in k528 in k327 in k324 in k321 in k318 */
static void C_fcall f_403(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_403,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_410,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* setup-api.import.scm:62: ##sys#= */
((C_proc4)C_fast_retrieve_symbol_proc(lf[11]))(4,*((C_word*)lf[11]+1),t4,t3,C_fix(0));}

/* a472 in k465 in k453 in k446 in a437 in k528 in k327 in k324 in k321 in k318 */
static void C_ccall f_473(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_473,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_481,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* setup-api.import.scm:60: rename50 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[16]);}

/* k469 in k465 in k453 in k446 in a437 in k528 in k327 in k324 in k321 in k318 */
static void C_ccall f_471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_471,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,((C_word*)t0)[4],t3));}

/* k524 in k510 in loop47 in k498 in k492 in k489 in a437 in k528 in k327 in k324 in k321 in k318 */
static void C_ccall f_526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* setup-api.import.scm:60: loop47 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_505(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k479 in a472 in k465 in k453 in k446 in a437 in k528 in k327 in k324 in k321 in k318 */
static void C_ccall f_481(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_481,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,t1,t2));}

/* k362 in a353 in k434 in k528 in k327 in k324 in k321 in k318 */
static void C_ccall f_364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_364,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_371,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* setup-api.import.scm:62: rename88 */
t4=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[8]);}
else{
/* setup-api.import.scm:62: ##sys#syntax-rules-mismatch */
((C_proc3)C_fast_retrieve_symbol_proc(lf[9]))(3,*((C_word*)lf[9]+1),((C_word*)t0)[3],((C_word*)t0)[5]);}}

/* k547 in k540 in a531 in k327 in k324 in k321 in k318 */
static void C_ccall f_549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_549,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_561,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* setup-api.import.scm:59: rename13 */
t4=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[20]);}

/* k540 in a531 in k327 in k324 in k321 in k318 */
static void C_ccall f_542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_542,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_549,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* setup-api.import.scm:59: rename13 */
t4=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[2]);}
else{
/* setup-api.import.scm:59: ##sys#syntax-rules-mismatch */
((C_proc3)C_fast_retrieve_symbol_proc(lf[9]))(3,*((C_word*)lf[9]+1),((C_word*)t0)[3],((C_word*)t0)[5]);}}

/* k390 in k387 in a353 in k434 in k528 in k327 in k324 in k321 in k318 */
static void C_ccall f_392(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_392,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_398,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* setup-api.import.scm:62: ##sys#>= */
((C_proc4)C_fast_retrieve_symbol_proc(lf[12]))(4,*((C_word*)lf[12]+1),t3,t2,C_fix(0));}

/* k396 in k390 in k387 in a353 in k434 in k528 in k327 in k324 in k321 in k318 */
static void C_ccall f_398(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_398,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_403,a[2]=t3,a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_403(t5,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[2];
f_364(2,t2,C_SCHEME_FALSE);}}

/* k465 in k453 in k446 in a437 in k528 in k327 in k324 in k321 in k318 */
static void C_ccall f_467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_467,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_471,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_473,a[2]=((C_word*)t0)[4],a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp);
/* setup-api.import.scm:60: ##sys#map-n */
((C_proc4)C_fast_retrieve_symbol_proc(lf[17]))(4,*((C_word*)lf[17]+1),t3,t4,((C_word*)t0)[5]);}

/* k600 in k586 in loop10 in k574 in k568 in k565 in a531 in k327 in k324 in k321 in k318 */
static void C_ccall f_602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* setup-api.import.scm:59: loop10 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_581(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k387 in a353 in k434 in k528 in k327 in k324 in k321 in k318 */
static void C_ccall f_389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_389,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_392,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* setup-api.import.scm:62: ##sys#length */
t3=C_fast_retrieve(lf[13]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
f_364(2,t2,C_SCHEME_FALSE);}}

/* k453 in k446 in a437 in k528 in k327 in k324 in k321 in k318 */
static void C_ccall f_455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_455,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_467,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* setup-api.import.scm:60: rename50 */
t4=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[18]);}

/* k318 */
static void C_ccall f_320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_320,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_323,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k446 in a437 in k528 in k327 in k324 in k321 in k318 */
static void C_ccall f_448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_448,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_455,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* setup-api.import.scm:60: rename50 */
t4=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[19]);}
else{
/* setup-api.import.scm:60: ##sys#syntax-rules-mismatch */
((C_proc3)C_fast_retrieve_symbol_proc(lf[9]))(3,*((C_word*)lf[9]+1),((C_word*)t0)[3],((C_word*)t0)[5]);}}

/* k574 in k568 in k565 in a531 in k327 in k324 in k321 in k318 */
static void C_ccall f_576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_576,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_581,a[2]=t3,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_581(t5,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[2];
f_542(2,t2,C_SCHEME_FALSE);}}

/* k568 in k565 in a531 in k327 in k324 in k321 in k318 */
static void C_ccall f_570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_570,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_576,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* setup-api.import.scm:59: ##sys#>= */
((C_proc4)C_fast_retrieve_symbol_proc(lf[12]))(4,*((C_word*)lf[12]+1),t3,t2,C_fix(0));}

/* k330 in k327 in k324 in k321 in k318 */
static void C_ccall f_332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* a437 in k528 in k327 in k324 in k321 in k318 */
static void C_ccall f_438(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_438,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_448,a[2]=t6,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_491,a[2]=t7,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* setup-api.import.scm:60: ##sys#list? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t8,t6);}

/* k434 in k528 in k327 in k324 in k321 in k318 */
static void C_ccall f_436(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_436,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[2],t1);
t3=C_a_i_list2(&a,2,((C_word*)t0)[2],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_352,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_354,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp);
/* setup-api.import.scm:62: ##sys#er-transformer */
((C_proc3)C_fast_retrieve_symbol_proc(lf[15]))(3,*((C_word*)lf[15]+1),t5,t6);}

/* k565 in a531 in k327 in k324 in k321 in k318 */
static void C_ccall f_567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_567,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_570,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* setup-api.import.scm:59: ##sys#length */
t3=C_fast_retrieve(lf[13]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
f_542(2,t2,C_SCHEME_FALSE);}}

/* k559 in k547 in k540 in a531 in k327 in k324 in k321 in k318 */
static void C_ccall f_561(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_561,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,((C_word*)t0)[4],t3));}

/* k321 in k318 */
static void C_ccall f_323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_323,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_326,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_chicken_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k327 in k324 in k321 in k318 */
static void C_ccall f_329(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_329,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_332,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_list1(&a,1,lf[0]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_530,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_532,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp);
/* setup-api.import.scm:59: ##sys#er-transformer */
((C_proc3)C_fast_retrieve_symbol_proc(lf[15]))(3,*((C_word*)lf[15]+1),t5,t6);}

/* k324 in k321 in k318 */
static void C_ccall f_326(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_326,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_329,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* setup-api.import.scm:3: eval */
t3=C_fast_retrieve(lf[21]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[22]);}

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
if(!C_demand_2(1432)){
C_save(t1);
C_rereclaim2(1432*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,23);
lf[0]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007execute\376\001\000\000\021setup-api#execute");
lf[1]=C_h_intern(&lf[1],7,"compile");
lf[2]=C_h_intern(&lf[2],3,"run");
lf[3]=C_h_intern(&lf[3],13,"ignore-errors");
lf[4]=C_h_intern(&lf[4],28,"\003sysregister-compiled-module");
lf[5]=C_h_intern(&lf[5],9,"setup-api");
lf[6]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022standard-extension\376\001\000\000\034setup-api#standard-extension\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\016host-extension\376\001\000\000\030setup-api#host-extension\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021install-extension\376\001\000\000"
"\033setup-api#install-extension\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017install-program\376\001\000\000\031setup-api#install"
"-program\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016install-script\376\001\000\000\030setup-api#install-script\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\022setup-verbose-mode\376\001\000\000\034setup-api#setup-verbose-mode\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022setup-install"
"-mode\376\001\000\000\034setup-api#setup-install-mode\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017deployment-mode\376\001\000\000\031setup-a"
"pi#deployment-mode\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023installation-prefix\376\001\000\000\035setup-api#installation-"
"prefix\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022destination-prefix\376\001\000\000\034setup-api#destination-prefix\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\016runtime-prefix\376\001\000\000\030setup-api#runtime-prefix\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016chicken-prefix\376"
"\001\000\000\030setup-api#chicken-prefix\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014find-library\376\001\000\000\026setup-api#find-libra"
"ry\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013find-header\376\001\000\000\025setup-api#find-header\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014program-pat"
"h\376\001\000\000\026setup-api#program-path\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014remove-file\052\376\001\000\000\026setup-api#remove-fil"
"e\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005patch\376\001\000\000\017setup-api#patch\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013abort-setup\376\001\000\000\025setup-a"
"pi#abort-setup\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024setup-root-directory\376\001\000\000\036setup-api#setup-root-direc"
"tory\376\003\000\000\002\376\003\000\000\002\376\001\000\000\030create-directory/parents\376\001\000\000\042setup-api#create-directory/paren"
"ts\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014test-compile\376\001\000\000\026setup-api#test-compile\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013try-compi"
"le\376\001\000\000\025setup-api#try-compile\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013run-verbose\376\001\000\000\025setup-api#run-verbose"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016extra-features\376\001\000\000\030setup-api#extra-features\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021extra-n"
"onfeatures\376\001\000\000\033setup-api#extra-nonfeatures\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011copy-file\376\001\000\000\023setup-api"
"#copy-file\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011move-file\376\001\000\000\023setup-api#move-file\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014sudo-in"
"stall\376\001\000\000\026setup-api#sudo-install\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022keep-intermediates\376\001\000\000\034setup-api#"
"keep-intermediates\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012version>=\077\376\001\000\000\024setup-api#version>=\077\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\032extension-name-and-version\376\001\000\000$setup-api#extension-name-and-version\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\016extension-name\376\001\000\000\030setup-api#extension-name\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021extension-version"
"\376\001\000\000\033setup-api#extension-version\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020remove-directory\376\001\000\000\032setup-api#re"
"move-directory\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020remove-extension\376\001\000\000\032setup-api#remove-extension\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\011read-info\376\001\000\000\023setup-api#read-info\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020register-program\376\001\000\000\032"
"setup-api#register-program\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014find-program\376\001\000\000\026setup-api#find-program"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011shellpath\376\001\000\000\023setup-api#shellpath\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024setup-error-handl"
"ing\376\001\000\000\036setup-api#setup-error-handling\376\377\016");
lf[7]=C_h_intern(&lf[7],2,"ex");
lf[8]=C_h_intern(&lf[8],17,"handle-exceptions");
lf[9]=C_h_intern(&lf[9],25,"\003syssyntax-rules-mismatch");
lf[10]=C_h_intern(&lf[10],5,"\003sys+");
lf[11]=C_h_intern(&lf[11],5,"\003sys=");
lf[12]=C_h_intern(&lf[12],6,"\003sys>=");
lf[13]=C_h_intern(&lf[13],10,"\003syslength");
lf[14]=C_h_intern(&lf[14],9,"\003syslist\077");
lf[15]=C_h_intern(&lf[15],18,"\003syser-transformer");
lf[16]=C_h_intern(&lf[16],10,"quasiquote");
lf[17]=C_h_intern(&lf[17],9,"\003sysmap-n");
lf[18]=C_h_intern(&lf[18],4,"list");
lf[19]=C_h_intern(&lf[19],7,"execute");
lf[20]=C_h_intern(&lf[20],3,"csc");
lf[21]=C_h_intern(&lf[21],4,"eval");
lf[22]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006import\376\003\000\000\002\376\001\000\000\006scheme\376\003\000\000\002\376\001\000\000\007chicken\376\003\000\000\002\376\001\000\000\007foreign\376\003\000\000\002\376\001\000\000\007irre"
"gex\376\003\000\000\002\376\001\000\000\005utils\376\003\000\000\002\376\001\000\000\005posix\376\003\000\000\002\376\001\000\000\005ports\376\003\000\000\002\376\001\000\000\006extras\376\003\000\000\002\376\001\000\000\017data-s"
"tructures\376\003\000\000\002\376\001\000\000\006srfi-1\376\003\000\000\002\376\001\000\000\007srfi-13\376\003\000\000\002\376\001\000\000\005files\376\377\016");
C_register_lf2(lf,23,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_320,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k510 in loop47 in k498 in k492 in k489 in a437 in k528 in k327 in k324 in k321 in k318 */
static void C_ccall f_512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_512,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST));}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_526,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* setup-api.import.scm:60: ##sys#+ */
((C_proc4)C_fast_retrieve_symbol_proc(lf[10]))(4,*((C_word*)lf[10]+1),t4,((C_word*)t0)[5],C_fix(-1));}}

/* k350 in k434 in k528 in k327 in k324 in k321 in k318 */
static void C_ccall f_352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_352,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[3],t1);
t3=C_a_i_list1(&a,1,t2);
/* setup-api.import.scm:16: ##sys#register-compiled-module */
((C_proc7)C_fast_retrieve_symbol_proc(lf[4]))(7,*((C_word*)lf[4]+1),((C_word*)t0)[2],lf[5],((C_word*)t0)[3],lf[6],((C_word*)t0)[4],t3);}

/* a353 in k434 in k528 in k327 in k324 in k321 in k318 */
static void C_ccall f_354(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_354,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_364,a[2]=t6,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_389,a[2]=t7,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* setup-api.import.scm:62: ##sys#list? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t8,t6);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[43] = {
{"f_424:setup_2dapi_2eimport_2escm",(void*)f_424},
{"f_581:setup_2dapi_2eimport_2escm",(void*)f_581},
{"f_505:setup_2dapi_2eimport_2escm",(void*)f_505},
{"f_588:setup_2dapi_2eimport_2escm",(void*)f_588},
{"f_500:setup_2dapi_2eimport_2escm",(void*)f_500},
{"f_410:setup_2dapi_2eimport_2escm",(void*)f_410},
{"f_532:setup_2dapi_2eimport_2escm",(void*)f_532},
{"f_491:setup_2dapi_2eimport_2escm",(void*)f_491},
{"f_494:setup_2dapi_2eimport_2escm",(void*)f_494},
{"f_530:setup_2dapi_2eimport_2escm",(void*)f_530},
{"f_379:setup_2dapi_2eimport_2escm",(void*)f_379},
{"f_371:setup_2dapi_2eimport_2escm",(void*)f_371},
{"f_403:setup_2dapi_2eimport_2escm",(void*)f_403},
{"f_473:setup_2dapi_2eimport_2escm",(void*)f_473},
{"f_471:setup_2dapi_2eimport_2escm",(void*)f_471},
{"f_526:setup_2dapi_2eimport_2escm",(void*)f_526},
{"f_481:setup_2dapi_2eimport_2escm",(void*)f_481},
{"f_364:setup_2dapi_2eimport_2escm",(void*)f_364},
{"f_549:setup_2dapi_2eimport_2escm",(void*)f_549},
{"f_542:setup_2dapi_2eimport_2escm",(void*)f_542},
{"f_392:setup_2dapi_2eimport_2escm",(void*)f_392},
{"f_398:setup_2dapi_2eimport_2escm",(void*)f_398},
{"f_467:setup_2dapi_2eimport_2escm",(void*)f_467},
{"f_602:setup_2dapi_2eimport_2escm",(void*)f_602},
{"f_389:setup_2dapi_2eimport_2escm",(void*)f_389},
{"f_455:setup_2dapi_2eimport_2escm",(void*)f_455},
{"f_320:setup_2dapi_2eimport_2escm",(void*)f_320},
{"f_448:setup_2dapi_2eimport_2escm",(void*)f_448},
{"f_576:setup_2dapi_2eimport_2escm",(void*)f_576},
{"f_570:setup_2dapi_2eimport_2escm",(void*)f_570},
{"f_332:setup_2dapi_2eimport_2escm",(void*)f_332},
{"f_438:setup_2dapi_2eimport_2escm",(void*)f_438},
{"f_436:setup_2dapi_2eimport_2escm",(void*)f_436},
{"f_567:setup_2dapi_2eimport_2escm",(void*)f_567},
{"f_561:setup_2dapi_2eimport_2escm",(void*)f_561},
{"f_323:setup_2dapi_2eimport_2escm",(void*)f_323},
{"f_329:setup_2dapi_2eimport_2escm",(void*)f_329},
{"f_326:setup_2dapi_2eimport_2escm",(void*)f_326},
{"toplevel:setup_2dapi_2eimport_2escm",(void*)C_toplevel},
{"f_512:setup_2dapi_2eimport_2escm",(void*)f_512},
{"f_352:setup_2dapi_2eimport_2escm",(void*)f_352},
{"f_354:setup_2dapi_2eimport_2escm",(void*)f_354},
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
o|eliminated procedure checks: 11 
o|inlining procedure: k359 
o|inlining procedure: k359 
o|inlining procedure: k393 
o|inlining procedure: k405 
o|inlining procedure: k405 
o|inlining procedure: k393 
o|inlining procedure: k443 
o|inlining procedure: k443 
o|inlining procedure: k495 
o|inlining procedure: k507 
o|inlining procedure: k507 
o|inlining procedure: k495 
o|inlining procedure: k537 
o|inlining procedure: k537 
o|inlining procedure: k571 
o|inlining procedure: k583 
o|inlining procedure: k583 
o|inlining procedure: k571 
o|replaced variables: 34 
o|removed binding forms: 8 
o|substituted constant variable: r394608 
o|substituted constant variable: r496614 
o|substituted constant variable: r572620 
o|removed binding forms: 43 
o|removed binding forms: 3 
o|simplifications: ((##core#call . 26)) 
o|  call simplifications:
o|    ##sys#cdr	6
o|    ##sys#eq?	3
o|    ##sys#cons	11
o|    cons	3
o|    list	3
o|contracted procedure: k334 
o|contracted procedure: k426 
o|contracted procedure: k430 
o|contracted procedure: k338 
o|contracted procedure: k346 
o|contracted procedure: k342 
o|contracted procedure: k356 
o|contracted procedure: k381 
o|contracted procedure: k373 
o|contracted procedure: k418 
o|contracted procedure: k440 
o|contracted procedure: k461 
o|contracted procedure: k457 
o|contracted procedure: k483 
o|contracted procedure: k520 
o|contracted procedure: k534 
o|contracted procedure: k555 
o|contracted procedure: k551 
o|contracted procedure: k596 
o|removed binding forms: 19 
o|replaced variables: 2 
o|removed binding forms: 2 
o|customizable procedures: (loop1028 loop4765 loop85103) 
o|calls to known targets: 12 
o|fast box initializations: 3 
*/
/* end of file */
