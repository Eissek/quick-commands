/* Generated from stub.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:04
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: stub.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file stub.c
   unit: default_5fstub
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[1];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_196)
static void C_ccall f_196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_187)
static void C_ccall f_187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_193)
static void C_ccall f_193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_201)
static void C_fcall f_201(C_word t0,C_word t1) C_noret;
C_noret_decl(f_190)
static void C_ccall f_190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_205)
static void C_ccall f_205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_184)
static void C_ccall f_184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_default_5fstub_toplevel)
C_externexport void C_ccall C_default_5fstub_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_199)
static void C_ccall f_199(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_201)
static void C_fcall trf_201(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_201(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_201(t0,t1);}

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

/* k194 in k191 in k188 in k185 in k182 */
static void C_ccall f_196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_196,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_199,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_201,a[2]=t4,a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_201(t6,t2);}

/* k185 in k182 */
static void C_ccall f_187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_187,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_190,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k191 in k188 in k185 in k182 */
static void C_ccall f_193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_193,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_196,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* loop in k194 in k191 in k188 in k185 in k182 */
static void C_fcall f_201(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_201,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_205,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* stub.scm:33: return-to-host */
t3=*((C_word*)lf[0]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k188 in k185 in k182 */
static void C_ccall f_190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_190,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_193,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k203 in loop in k194 in k191 in k188 in k185 in k182 */
static void C_ccall f_205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* stub.scm:33: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_201(t2,((C_word*)t0)[3]);}

/* k182 */
static void C_ccall f_184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_184,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_187,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_default_5fstub_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_default_5fstub_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("default_5fstub_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(10)){
C_save(t1);
C_rereclaim2(10*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,1);
lf[0]=C_h_intern(&lf[0],14,"return-to-host");
C_register_lf2(lf,1,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_184,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k197 in k194 in k191 in k188 in k185 in k182 */
static void C_ccall f_199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[10] = {
{"f_196:stub_2escm",(void*)f_196},
{"f_187:stub_2escm",(void*)f_187},
{"f_193:stub_2escm",(void*)f_193},
{"f_201:stub_2escm",(void*)f_201},
{"f_190:stub_2escm",(void*)f_190},
{"f_205:stub_2escm",(void*)f_205},
{"f_184:stub_2escm",(void*)f_184},
{"toplevel:stub_2escm",(void*)C_default_5fstub_toplevel},
{"f_199:stub_2escm",(void*)f_199},
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
o|replaced variables: 1 
o|removed binding forms: 8 
o|removed binding forms: 1 
o|customizable procedures: (loop0) 
o|calls to known targets: 2 
o|fast box initializations: 1 
*/
/* end of file */
