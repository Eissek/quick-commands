/* Generated from setup-download.import.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:04
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: setup-download.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -feature chicken-compile-shared -dynamic -no-trace -output-file setup-download.import.c
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

static C_TLS C_word lf[5];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_192)
static void C_ccall f_192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_186)
static void C_ccall f_186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_183)
static void C_ccall f_183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_180)
static void C_ccall f_180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_189)
static void C_ccall f_189(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

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
if(!C_demand_2(433)){
C_save(t1);
C_rereclaim2(433*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,5);
lf[0]=C_h_intern(&lf[0],28,"\003sysregister-compiled-module");
lf[1]=C_h_intern(&lf[1],14,"setup-download");
lf[2]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022retrieve-extension\376\001\000\000!setup-download#retrieve-extension\376\003\000\000\002\376\003\000\000"
"\002\376\001\000\000\020locate-egg/local\376\001\000\000\037setup-download#locate-egg/local\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016locate-"
"egg/svn\376\001\000\000\035setup-download#locate-egg/svn\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017locate-egg/http\376\001\000\000\036setu"
"p-download#locate-egg/http\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026gather-egg-information\376\001\000\000%setup-downlo"
"ad#gather-egg-information\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017list-extensions\376\001\000\000\036setup-download#list-"
"extensions\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027list-extension-versions\376\001\000\000&setup-download#list-extensi"
"on-versions\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023temporary-directory\376\001\000\000\042setup-download#temporary-direc"
"tory\376\377\016");
lf[3]=C_h_intern(&lf[3],4,"eval");
lf[4]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006import\376\003\000\000\002\376\001\000\000\006scheme\376\003\000\000\002\376\001\000\000\007chicken\376\003\000\000\002\376\001\000\000\007foreign\376\003\000\000\002\376\001\000\000\006extr"
"as\376\003\000\000\002\376\001\000\000\007irregex\376\003\000\000\002\376\001\000\000\005posix\376\003\000\000\002\376\001\000\000\005utils\376\003\000\000\002\376\001\000\000\006srfi-1\376\003\000\000\002\376\001\000\000\017data-"
"structures\376\003\000\000\002\376\001\000\000\003tcp\376\003\000\000\002\376\001\000\000\007srfi-13\376\003\000\000\002\376\001\000\000\007srfi-14\376\003\000\000\002\376\001\000\000\005files\376\003\000\000\002\376\001\000"
"\000\011setup-api\376\377\016");
C_register_lf2(lf,5,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_180,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k190 in k187 in k184 in k181 in k178 */
static void C_ccall f_192(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* k184 in k181 in k178 */
static void C_ccall f_186(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_186,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_189,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* setup-download.import.scm:3: eval */
t3=C_fast_retrieve(lf[3]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[4]);}

/* k181 in k178 */
static void C_ccall f_183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_183,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_186,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_chicken_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k178 */
static void C_ccall f_180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_180,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_183,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k187 in k184 in k181 in k178 */
static void C_ccall f_189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_189,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_192,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* setup-download.import.scm:18: ##sys#register-compiled-module */
((C_proc7)C_fast_retrieve_symbol_proc(lf[0]))(7,*((C_word*)lf[0]+1),t2,lf[1],C_SCHEME_END_OF_LIST,lf[2],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[7] = {
{"toplevel:setup_2ddownload_2eimport_2escm",(void*)C_toplevel},
{"f_192:setup_2ddownload_2eimport_2escm",(void*)f_192},
{"f_186:setup_2ddownload_2eimport_2escm",(void*)f_186},
{"f_183:setup_2ddownload_2eimport_2escm",(void*)f_183},
{"f_180:setup_2ddownload_2eimport_2escm",(void*)f_180},
{"f_189:setup_2ddownload_2eimport_2escm",(void*)f_189},
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
o|removed binding forms: 5 
o|removed binding forms: 1 
o|simplifications: ((##core#call . 3)) 
o|  call simplifications:
o|    list	3
o|contracted procedure: k194 
o|contracted procedure: k198 
o|contracted procedure: k202 
o|removed binding forms: 3 
o|substituted constant variable: r195 
o|substituted constant variable: r199 
o|substituted constant variable: r195 
o|substituted constant variable: r199 
o|substituted constant variable: r203 
o|removed binding forms: 5 
*/
/* end of file */
