/* Generated from profiler.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:04
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: profiler.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file profiler.c
   unit: profiler
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[24];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,6),40,97,51,54,57,41,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,15),40,97,51,55,56,32,46,32,97,114,103,115,55,49,41,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,47),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,112,114,111,102,105,108,101,45,105,110,102,111,32,115,105,122,101,54,55,32,102,105,108,101,110,97,109,101,54,56,41,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,46),40,35,35,115,121,115,35,115,101,116,45,112,114,111,102,105,108,101,45,105,110,102,111,45,118,101,99,116,111,114,33,32,118,101,99,56,48,32,105,56,49,32,120,56,50,41,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,35),40,35,35,115,121,115,35,112,114,111,102,105,108,101,45,101,110,116,114,121,32,105,110,100,101,120,56,57,32,118,101,99,57,48,41,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,36),40,35,35,115,121,115,35,112,114,111,102,105,108,101,45,101,120,105,116,32,105,110,100,101,120,49,48,52,32,118,101,99,49,48,53,41,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,49,51,49,32,105,49,51,51,41};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,49,57,32,103,49,50,54,49,52,52,41,0,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,6),40,97,53,52,48,41,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,22),40,35,35,115,121,115,35,102,105,110,105,115,104,45,112,114,111,102,105,108,101,41,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from cpu-ms */
static C_word C_fcall stub84(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub84(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_flonum(&C_a,C_cpu_milliseconds());
return C_r;}

C_noret_decl(f_583)
static void C_ccall f_583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_434)
static void C_fcall f_434(C_word t0,C_word t1) C_noret;
C_noret_decl(f_580)
static void C_ccall f_580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_337)
static void C_ccall f_337(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_383)
static void C_ccall f_383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_412)
static void C_ccall f_412(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_625)
static void C_ccall f_625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_397)
static void C_ccall f_397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_399)
static void C_ccall f_399(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_365)
static void C_ccall f_365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_362)
static void C_ccall f_362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_541)
static void C_ccall f_541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_379)
static void C_ccall f_379(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_379)
static void C_ccall f_379r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_374)
static void C_ccall f_374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_370)
static void C_ccall f_370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_552)
static void C_fcall f_552(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_615)
static void C_fcall f_615(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(C_profiler_toplevel)
C_externexport void C_ccall C_profiler_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_344)
static void C_ccall f_344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_341)
static void C_ccall f_341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_562)
static void C_ccall f_562(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_565)
static void C_ccall f_565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_568)
static void C_ccall f_568(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_472)
static void C_ccall f_472(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_359)
static void C_ccall f_359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_356)
static void C_ccall f_356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_571)
static void C_ccall f_571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_577)
static void C_ccall f_577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_574)
static void C_ccall f_574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_536)
static void C_ccall f_536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_532)
static void C_ccall f_532(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_434)
static void C_fcall trf_434(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_434(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_434(t0,t1);}

C_noret_decl(trf_552)
static void C_fcall trf_552(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_552(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_552(t0,t1,t2);}

C_noret_decl(trf_615)
static void C_fcall trf_615(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_615(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_615(t0,t1,t2);}

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

/* k581 in k578 in k575 in k572 in k569 in k566 in k563 in k560 in doloop131 in for-each-loop119 in a540 in k534 in finish-profile */
static void C_ccall f_583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_u_fixnum_plus(((C_word*)t0)[2],C_fix(5));
t3=((C_word*)((C_word*)t0)[3])[1];
f_552(t3,((C_word*)t0)[4],t2);}

/* k432 in profile-entry */
static void C_fcall f_434(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_434,NULL,2,t0,t1);}
t2=C_eqp(C_fix(0),((C_word*)t0)[2]);
if(C_truep(t2)){
t3=C_a_i_bytevector(&a,1,C_fix(4));
t4=stub84(t3);
t5=C_i_setslot(((C_word*)t0)[3],((C_word*)t0)[4],t4);
t6=C_u_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t7=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_set_i_slot(((C_word*)t0)[3],((C_word*)t0)[6],t6));}
else{
t3=C_u_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_set_i_slot(((C_word*)t0)[3],((C_word*)t0)[6],t3));}}

/* k578 in k575 in k572 in k569 in k566 in k563 in k560 in doloop131 in for-each-loop119 in a540 in k534 in finish-profile */
static void C_ccall f_580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_580,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_583,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),*((C_word*)lf[18]+1));}

/* ##sys#register-profile-info */
static void C_ccall f_337(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_337,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_341,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_356,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_stringp(t3))){
t6=t5;
f_356(2,t6,t3);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_397,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* profiler.scm:56: number->string */
t7=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,C_fix((C_word)C_getpid()));}}
else{
t5=t4;
f_341(2,t5,C_SCHEME_UNDEFINED);}}

/* k381 in a378 in k360 in k357 in k354 in register-profile-info */
static void C_ccall f_383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* ##sys#profile-entry */
static void C_ccall f_412(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_412,4,t0,t1,t2,t3);}
t4=C_fixnum_times(t2,C_fix(5));
t5=C_u_fixnum_plus(t4,C_fix(1));
t6=C_slot(t3,t5);
t7=C_u_fixnum_plus(t4,C_fix(2));
t8=t7;
t9=C_u_fixnum_plus(t4,C_fix(4));
t10=t9;
t11=C_slot(t3,t10);
t12=t11;
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_434,a[2]=t12,a[3]=t3,a[4]=t8,a[5]=t1,a[6]=t10,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t6)){
t14=C_eqp(((C_word*)t0)[2],t6);
if(C_truep(t14)){
t15=t13;
f_434(t15,C_i_set_i_slot(t3,t5,C_SCHEME_FALSE));}
else{
t15=C_u_fixnum_plus(t6,C_fix(1));
t16=t13;
f_434(t16,C_i_set_i_slot(t3,t5,t15));}}
else{
t14=t13;
f_434(t14,C_i_set_i_slot(t3,t5,C_SCHEME_FALSE));}}

/* k623 in for-each-loop119 in a540 in k534 in finish-profile */
static void C_ccall f_625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_615(t3,((C_word*)t0)[4],t2);}

/* k395 in register-profile-info */
static void C_ccall f_397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#string-append */
t2=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[9],t1);}

/* ##sys#set-profile-info-vector! */
static void C_ccall f_399(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_399,5,t0,t1,t2,t3,t4);}
t5=C_fixnum_times(t3,C_fix(5));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_setslot(t2,t5,t4));}

/* k363 in k360 in k357 in k354 in register-profile-info */
static void C_ccall f_365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_365,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_370,a[2]=((C_word*)t0)[2],a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp);
/* profiler.scm:63: ##sys#implicit-exit-handler */
t3=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t2);}

/* k360 in k357 in k354 in register-profile-info */
static void C_ccall f_362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_362,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_365,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_379,a[2]=((C_word*)t0)[3],a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp);
/* profiler.scm:59: ##sys#exit-handler */
t5=*((C_word*)lf[7]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a540 in k534 in finish-profile */
static void C_ccall f_541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_541,2,t0,t1);}
t2=lf[0];
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_615,a[2]=t4,a[3]=((C_word)li7),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_615(t6,t1,lf[0]);}

/* a378 in k360 in k357 in k354 in register-profile-info */
static void C_ccall f_379(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_379r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_379r(t0,t1,t2);}}

static void C_ccall f_379r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_383,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* profiler.scm:61: ##sys#finish-profile */
t4=*((C_word*)lf[5]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k372 in a369 in k363 in k360 in k357 in k354 in register-profile-info */
static void C_ccall f_374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* profiler.scm:66: oldieh */
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* a369 in k363 in k360 in k357 in k354 in register-profile-info */
static void C_ccall f_370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_370,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_374,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* profiler.scm:65: ##sys#finish-profile */
t3=*((C_word*)lf[5]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* doloop131 in for-each-loop119 in a540 in k534 in finish-profile */
static void C_fcall f_552(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_552,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_562,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t4=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_make_character(40),*((C_word*)lf[18]+1));}}

/* for-each-loop119 in a540 in k534 in finish-profile */
static void C_fcall f_615(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_615,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_625,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t4;
t6=C_block_size(t5);
t7=t6;
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_552,a[2]=t7,a[3]=t9,a[4]=t5,a[5]=((C_word)li6),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_552(t11,t3,C_fix(0));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_profiler_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_profiler_toplevel(C_word c,C_word t0,C_word t1){
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
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("profiler_toplevel"));
C_check_nursery_minimum(17);
if(!C_demand(17)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(194)){
C_save(t1);
C_rereclaim2(194*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(17);
C_initialize_lf(lf,24);
lf[2]=C_h_intern(&lf[2],23,"\003sysprofile-append-mode");
lf[3]=C_h_intern(&lf[3],25,"\003sysregister-profile-info");
lf[4]=C_h_intern(&lf[4],11,"make-vector");
lf[5]=C_h_intern(&lf[5],18,"\003sysfinish-profile");
lf[6]=C_h_intern(&lf[6],25,"\003sysimplicit-exit-handler");
lf[7]=C_h_intern(&lf[7],16,"\003sysexit-handler");
lf[8]=C_h_intern(&lf[8],17,"\003sysstring-append");
lf[9]=C_decode_literal(C_heaptop,"\376B\000\000\010PROFILE.");
lf[10]=C_h_intern(&lf[10],14,"number->string");
lf[11]=C_h_intern(&lf[11],28,"\003sysset-profile-info-vector!");
lf[12]=C_h_intern(&lf[12],20,"most-positive-fixnum");
lf[13]=C_h_intern(&lf[13],17,"\003sysprofile-entry");
lf[14]=C_h_intern(&lf[14],16,"\003sysprofile-exit");
lf[15]=C_decode_literal(C_heaptop,"\376U0.0\000");
lf[16]=C_h_intern(&lf[16],19,"with-output-to-file");
lf[17]=C_h_intern(&lf[17],19,"\003syswrite-char/port");
lf[18]=C_h_intern(&lf[18],19,"\003sysstandard-output");
lf[19]=C_h_intern(&lf[19],5,"write");
lf[20]=C_h_intern(&lf[20],7,"\000append");
lf[21]=C_h_intern(&lf[21],9,"\003sysprint");
lf[22]=C_decode_literal(C_heaptop,"\376B\000\000\033[debug] writing profile...\012");
lf[23]=C_h_intern(&lf[23],18,"\003sysstandard-error");
C_register_lf2(lf,24,create_ptable());
t2=lf[0] /* ##sys#profile-vector-list */ =C_SCHEME_END_OF_LIST;;
t3=lf[1] /* ##sys#profile-name */ =C_SCHEME_FALSE;;
t4=C_set_block_item(lf[2] /* ##sys#profile-append-mode */,0,C_SCHEME_FALSE);
t5=C_mutate2((C_word*)lf[3]+1 /* (set! ##sys#register-profile-info ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_337,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[11]+1 /* (set! ##sys#set-profile-info-vector! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_399,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t7=*((C_word*)lf[12]+1);
t8=C_mutate2((C_word*)lf[13]+1 /* (set! ##sys#profile-entry ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_412,a[2]=t7,a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp));
t9=C_mutate2((C_word*)lf[14]+1 /* (set! ##sys#profile-exit ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_472,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t10=*((C_word*)lf[16]+1);
t11=C_mutate2((C_word*)lf[5]+1 /* (set! ##sys#finish-profile ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_532,a[2]=t10,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp));
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_UNDEFINED);}

/* k342 in k339 in register-profile-info */
static void C_ccall f_344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_344,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,lf[0]);
t3=C_mutate2(&lf[0] /* (set! ##sys#profile-vector-list ...) */,t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t1);}

/* k339 in register-profile-info */
static void C_ccall f_341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_341,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_344,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_fixnum_times(((C_word*)t0)[3],C_fix(5));
/* profiler.scm:68: make-vector */
t4=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_fix(0));}

/* k560 in doloop131 in for-each-loop119 in a540 in k534 in finish-profile */
static void C_ccall f_562(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_562,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_565,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_slot(((C_word*)t0)[5],((C_word*)t0)[2]);
/* profiler.scm:131: write */
t4=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* k563 in k560 in doloop131 in for-each-loop119 in a540 in k534 in finish-profile */
static void C_ccall f_565(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_565,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_568,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),*((C_word*)lf[18]+1));}

/* k566 in k563 in k560 in doloop131 in for-each-loop119 in a540 in k534 in finish-profile */
static void C_ccall f_568(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_568,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_571,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_u_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t4=C_slot(((C_word*)t0)[5],t3);
/* profiler.scm:133: write */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t2,t4);}

/* ##sys#profile-exit */
static void C_ccall f_472(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_472,4,t0,t1,t2,t3);}
t4=C_fixnum_times(t2,C_fix(5));
t5=C_u_fixnum_plus(t4,C_fix(2));
t6=C_u_fixnum_plus(t4,C_fix(3));
t7=C_u_fixnum_plus(t4,C_fix(4));
t8=C_slot(t3,t7);
t9=C_u_fixnum_difference(t8,C_fix(1));
t10=C_i_set_i_slot(t3,t7,t9);
t11=C_eqp(C_fix(0),t9);
if(C_truep(t11)){
t12=C_slot(t3,t6);
t13=C_eqp(t12,C_fix(0));
t14=(C_truep(t13)?lf[15]:t12);
t15=C_a_i_bytevector(&a,1,C_fix(4));
t16=stub84(t15);
t17=C_slot(t3,t5);
t18=C_a_i_flonum_difference(&a,2,t16,t17);
t19=C_a_i_flonum_plus(&a,2,t14,t18);
t20=t1;
((C_proc2)(void*)(*((C_word*)t20+1)))(2,t20,C_i_setslot(t3,t6,t19));}
else{
t12=C_SCHEME_UNDEFINED;
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,t12);}}

/* k357 in k354 in register-profile-info */
static void C_ccall f_359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_359,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_362,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* profiler.scm:58: ##sys#implicit-exit-handler */
t4=*((C_word*)lf[6]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k354 in register-profile-info */
static void C_ccall f_356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_356,2,t0,t1);}
t2=C_mutate2(&lf[1] /* (set! ##sys#profile-name ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_359,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* profiler.scm:57: ##sys#exit-handler */
t4=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k569 in k566 in k563 in k560 in doloop131 in for-each-loop119 in a540 in k534 in finish-profile */
static void C_ccall f_571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_571,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_574,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),*((C_word*)lf[18]+1));}

/* k575 in k572 in k569 in k566 in k563 in k560 in doloop131 in for-each-loop119 in a540 in k534 in finish-profile */
static void C_ccall f_577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_577,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_580,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(41),*((C_word*)lf[18]+1));}

/* k572 in k569 in k566 in k563 in k560 in doloop131 in for-each-loop119 in a540 in k534 in finish-profile */
static void C_ccall f_574(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_574,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_577,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_u_fixnum_plus(((C_word*)t0)[2],C_fix(3));
t4=C_slot(((C_word*)t0)[5],t3);
/* profiler.scm:135: write */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t2,t4);}

/* k534 in finish-profile */
static void C_ccall f_536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_536,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_541,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[2]+1))){
t3=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],lf[1],t2,lf[20]);}
else{
t3=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],lf[1],t2);}}

/* ##sys#finish-profile */
static void C_ccall f_532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_532,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_536,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fudge(C_fix(13)))){
/* profiler.scm:121: ##sys#print */
t3=*((C_word*)lf[21]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[22],C_SCHEME_FALSE,*((C_word*)lf[23]+1));}
else{
t3=t2;
f_536(2,t3,C_SCHEME_UNDEFINED);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[32] = {
{"f_583:profiler_2escm",(void*)f_583},
{"f_434:profiler_2escm",(void*)f_434},
{"f_580:profiler_2escm",(void*)f_580},
{"f_337:profiler_2escm",(void*)f_337},
{"f_383:profiler_2escm",(void*)f_383},
{"f_412:profiler_2escm",(void*)f_412},
{"f_625:profiler_2escm",(void*)f_625},
{"f_397:profiler_2escm",(void*)f_397},
{"f_399:profiler_2escm",(void*)f_399},
{"f_365:profiler_2escm",(void*)f_365},
{"f_362:profiler_2escm",(void*)f_362},
{"f_541:profiler_2escm",(void*)f_541},
{"f_379:profiler_2escm",(void*)f_379},
{"f_374:profiler_2escm",(void*)f_374},
{"f_370:profiler_2escm",(void*)f_370},
{"f_552:profiler_2escm",(void*)f_552},
{"f_615:profiler_2escm",(void*)f_615},
{"toplevel:profiler_2escm",(void*)C_profiler_toplevel},
{"f_344:profiler_2escm",(void*)f_344},
{"f_341:profiler_2escm",(void*)f_341},
{"f_562:profiler_2escm",(void*)f_562},
{"f_565:profiler_2escm",(void*)f_565},
{"f_568:profiler_2escm",(void*)f_568},
{"f_472:profiler_2escm",(void*)f_472},
{"f_359:profiler_2escm",(void*)f_359},
{"f_356:profiler_2escm",(void*)f_356},
{"f_571:profiler_2escm",(void*)f_571},
{"f_577:profiler_2escm",(void*)f_577},
{"f_574:profiler_2escm",(void*)f_574},
{"f_536:profiler_2escm",(void*)f_536},
{"f_532:profiler_2escm",(void*)f_532},
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
S|  for-each		1
o|eliminated procedure checks: 18 
o|specializations:
o|  1 (string-append string string)
o|Removed `not' forms: 1 
o|substituted constant variable: a393 
o|inlining procedure: "(profiler.scm:95) cpu-ms" 
o|contracted procedure: k459 
o|inlining procedure: k456 
o|inlining procedure: k456 
o|inlining procedure: k492 
o|inlining procedure: "(profiler.scm:110) cpu-ms" 
o|inlining procedure: k492 
o|inlining procedure: k554 
o|inlining procedure: k554 
o|inlining procedure: k617 
o|inlining procedure: k617 
o|propagated global variable: g126128 ##sys#profile-vector-list 
o|inlining procedure: k638 
o|inlining procedure: k638 
o|replaced variables: 38 
o|removed binding forms: 31 
o|removed side-effect free assignment to unused variable: cpu-ms 
o|inlining procedure: k456 
o|substituted constant variable: r457651 
o|substituted constant variable: r457651 
o|contracted procedure: "(profiler.scm:124) g120127" 
o|substituted constant variable: r639661 
o|substituted constant variable: r639661 
o|substituted constant variable: r639663 
o|substituted constant variable: r639663 
o|replaced variables: 3 
o|removed binding forms: 42 
o|inlining procedure: k452 
o|substituted constant variable: r457665 
o|removed binding forms: 11 
o|contracted procedure: k517 
o|removed binding forms: 3 
o|simplifications: ((if . 1) (##core#call . 54)) 
o|  call simplifications:
o|    ##sys#fudge
o|    pair?
o|    ##sys#size
o|    fx>=
o|    write-char	5
o|    fx-
o|    fp-
o|    fp+
o|    ##sys#slot	10
o|    eq?	4
o|    fx+	11
o|    ##sys#setislot	5
o|    ##sys#setslot	3
o|    string?
o|    apply	3
o|    fx*	4
o|    cons
o|contracted procedure: k346 
o|contracted procedure: k350 
o|contracted procedure: k387 
o|contracted procedure: k405 
o|contracted procedure: k414 
o|contracted procedure: k417 
o|contracted procedure: k420 
o|contracted procedure: k423 
o|contracted procedure: k426 
o|contracted procedure: k429 
o|contracted procedure: k442 
o|contracted procedure: k445 
o|contracted procedure: k465 
o|contracted procedure: k456 
o|contracted procedure: k474 
o|contracted procedure: k477 
o|contracted procedure: k480 
o|contracted procedure: k483 
o|contracted procedure: k528 
o|contracted procedure: k486 
o|contracted procedure: k489 
o|contracted procedure: k495 
o|contracted procedure: k498 
o|contracted procedure: k524 
o|contracted procedure: k509 
o|contracted procedure: k521 
o|contracted procedure: k513 
o|contracted procedure: k505 
o|contracted procedure: k620 
o|contracted procedure: k630 
o|contracted procedure: k634 
o|contracted procedure: k545 
o|contracted procedure: k557 
o|contracted procedure: k588 
o|contracted procedure: k596 
o|contracted procedure: k592 
o|contracted procedure: k604 
o|contracted procedure: k600 
o|contracted procedure: k608 
o|contracted procedure: k641 
o|simplifications: ((let . 4)) 
o|removed binding forms: 40 
o|inlining procedure: k435 
o|inlining procedure: k435 
o|replaced variables: 27 
o|removed binding forms: 15 
o|customizable procedures: (doloop131132 for-each-loop119143 k432) 
o|calls to known targets: 10 
o|fast box initializations: 2 
o|fast global references: 5 
o|fast global assignments: 4 
*/
/* end of file */
