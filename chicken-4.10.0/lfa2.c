/* Generated from lfa2.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:03
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: lfa2.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -extend private-namespace.scm -no-trace -output-file lfa2.c
   unit: lfa2
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[72];
static double C_possibly_force_alignment;


C_noret_decl(f_890)
static void C_fcall f_890(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_990)
static void C_ccall f_990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_993)
static void C_ccall f_993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1244)
static void C_ccall f_1244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2066)
static void C_ccall f_2066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_998)
static void C_fcall f_998(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1256)
static void C_ccall f_1256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2056)
static void C_fcall f_2056(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1138)
static void C_fcall f_1138(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1224)
static void C_ccall f_1224(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1384)
static void C_ccall f_1384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1148)
static void C_fcall f_1148(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1367)
static void C_ccall f_1367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1233)
static void C_ccall f_1233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1230)
static void C_fcall f_1230(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1463)
static void C_ccall f_1463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1477)
static void C_ccall f_1477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1474)
static void C_ccall f_1474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_966)
static void C_ccall f_966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1470)
static void C_fcall f_1470(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1706)
static void C_ccall f_1706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1703)
static void C_ccall f_1703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_986)
static void C_fcall f_986(C_word t0,C_word t1) C_noret;
C_noret_decl(f_773)
static void C_ccall f_773(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1018)
static void C_ccall f_1018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1011)
static void C_fcall f_1011(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_925)
static void C_fcall f_925(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1783)
static void C_fcall f_1783(C_word t0,C_word t1) C_noret;
C_noret_decl(f_919)
static void C_fcall f_919(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1396)
static void C_ccall f_1396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1028)
static void C_ccall f_1028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1492)
static void C_fcall f_1492(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1933)
static void C_fcall f_1933(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2007)
static void C_ccall f_2007(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1411)
static void C_ccall f_1411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1943)
static void C_ccall f_1943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1945)
static void C_fcall f_1945(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1608)
static void C_fcall f_1608(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1002)
static void C_ccall f_1002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1332)
static void C_fcall f_1332(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1174)
static void C_fcall f_1174(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1052)
static void C_ccall f_1052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1087)
static void C_fcall f_1087(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(C_lfa2_toplevel)
C_externexport void C_ccall C_lfa2_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_726)
static void C_ccall f_726(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1314)
static void C_ccall f_1314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_723)
static void C_ccall f_723(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1560)
static void C_fcall f_1560(C_word t0,C_word t1) C_noret;
C_noret_decl(f_720)
static void C_ccall f_720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1838)
static void C_fcall f_1838(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1453)
static void C_fcall f_1453(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1715)
static void C_fcall f_1715(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1848)
static void C_fcall f_1848(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1045)
static void C_ccall f_1045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1097)
static void C_ccall f_1097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1427)
static void C_ccall f_1427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2022)
static void C_ccall f_2022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1911)
static void C_fcall f_1911(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1955)
static void C_ccall f_1955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2018)
static void C_ccall f_2018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1263)
static void C_ccall f_1263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1921)
static void C_ccall f_1921(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2030)
static void C_ccall f_2030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2033)
static void C_ccall f_2033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2039)
static void C_ccall f_2039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2036)
static void C_ccall f_2036(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_890)
static void C_fcall trf_890(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_890(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_890(t0,t1,t2);}

C_noret_decl(trf_998)
static void C_fcall trf_998(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_998(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_998(t0,t1,t2,t3);}

C_noret_decl(trf_2056)
static void C_fcall trf_2056(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2056(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2056(t0,t1,t2);}

C_noret_decl(trf_1138)
static void C_fcall trf_1138(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1138(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1138(t0,t1,t2);}

C_noret_decl(trf_1148)
static void C_fcall trf_1148(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1148(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1148(t0,t1);}

C_noret_decl(trf_1230)
static void C_fcall trf_1230(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1230(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1230(t0,t1);}

C_noret_decl(trf_1470)
static void C_fcall trf_1470(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1470(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1470(t0,t1,t2);}

C_noret_decl(trf_986)
static void C_fcall trf_986(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_986(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_986(t0,t1);}

C_noret_decl(trf_1011)
static void C_fcall trf_1011(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1011(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1011(t0,t1,t2);}

C_noret_decl(trf_925)
static void C_fcall trf_925(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_925(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_925(t0,t1,t2);}

C_noret_decl(trf_1783)
static void C_fcall trf_1783(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1783(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1783(t0,t1);}

C_noret_decl(trf_919)
static void C_fcall trf_919(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_919(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_919(t0,t1,t2);}

C_noret_decl(trf_1492)
static void C_fcall trf_1492(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1492(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1492(t0,t1);}

C_noret_decl(trf_1933)
static void C_fcall trf_1933(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1933(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1933(t0,t1,t2);}

C_noret_decl(trf_1945)
static void C_fcall trf_1945(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1945(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1945(t0,t1,t2);}

C_noret_decl(trf_1608)
static void C_fcall trf_1608(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1608(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1608(t0,t1,t2);}

C_noret_decl(trf_1332)
static void C_fcall trf_1332(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1332(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1332(t0,t1);}

C_noret_decl(trf_1174)
static void C_fcall trf_1174(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1174(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1174(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1087)
static void C_fcall trf_1087(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1087(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1087(t0,t1,t2);}

C_noret_decl(trf_1560)
static void C_fcall trf_1560(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1560(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1560(t0,t1);}

C_noret_decl(trf_1838)
static void C_fcall trf_1838(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1838(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1838(t0,t1,t2);}

C_noret_decl(trf_1453)
static void C_fcall trf_1453(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1453(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1453(t0,t1,t2);}

C_noret_decl(trf_1715)
static void C_fcall trf_1715(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1715(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1715(t0,t1);}

C_noret_decl(trf_1848)
static void C_fcall trf_1848(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1848(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1848(t0,t1);}

C_noret_decl(trf_1911)
static void C_fcall trf_1911(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1911(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1911(t0,t1,t2);}

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

/* report in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_fcall f_890(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_890,NULL,3,t0,t1,t2);}
t3=C_i_assoc(t2,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(t3)){
t4=t1;
t5=C_i_cdr(t3);
t6=C_a_i_plus(&a,2,t5,C_fix(1));
t7=t4;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_set_cdr(t3,t6));}
else{
t4=C_a_i_cons(&a,2,C_a_i_cons(&a,2,t2,C_fix(1)),((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k988 in drop! in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_990(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_990,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_993,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:198: node-parameters-set! */
t3=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);}

/* k991 in k988 in drop! in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lfa2.scm:199: node-subexpressions-set! */
t2=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_END_OF_LIST);}

/* k1242 in k1231 in k1228 in k1222 in walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_1244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lfa2.scm:247: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1174(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5]);}

/* k2064 in for-each-loop415 in k2020 in a2017 in k2005 in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_2066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2056(t3,((C_word*)t0)[4],t2);}

/* extinguish! in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_fcall f_998(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_998,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1002,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t5=t2;
t6=C_slot(t5,C_fix(2));
t7=C_i_car(t6);
/* lfa2.scm:202: report */
t8=((C_word*)((C_word*)t0)[4])[1];
f_890(t8,t4,t7);}

/* k1254 in k1228 in k1222 in walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_1256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lfa2.scm:244: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1174(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5]);}

/* for-each-loop415 in k2020 in a2017 in k2005 in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_fcall f_2056(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2056,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2066,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=*((C_word*)lf[62]+1);
t8=*((C_word*)lf[62]+1);
t9=C_i_check_port_2(*((C_word*)lf[62]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[63]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2030,a[2]=t5,a[3]=t7,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* lfa2.scm:360: ##sys#print */
t11=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t10,lf[67],C_SCHEME_FALSE,*((C_word*)lf[62]+1));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* loop in walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_fcall f_1138(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1138,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[21]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1148,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_cdar(t2);
t5=C_eqp(((C_word*)t0)[3],t4);
if(C_truep(t5)){
t6=t2;
t7=C_u_i_car(t6);
t8=C_u_i_car(t7);
t9=t3;
f_1148(t9,C_i_assq(t8,((C_word*)t0)[4]));}
else{
t6=t3;
f_1148(t6,C_SCHEME_FALSE);}}}

/* k1222 in walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_1224(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1224,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1230,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(t2))){
t4=C_u_i_car(t2);
t5=t3;
f_1230(t5,C_eqp(lf[25],t4));}
else{
t4=t3;
f_1230(t4,C_SCHEME_FALSE);}}

/* k1382 in k1394 in k1312 in walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_1384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1384,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_1332(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1367,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_slot(((C_word*)t0)[3],C_fix(2));
t4=C_i_car(t3);
/* lfa2.scm:264: assigned? */
t5=((C_word*)((C_word*)t0)[4])[1];
f_919(t5,t2,t4);}}

/* k1146 in loop in walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_fcall f_1148(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_cdr(t1));}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_cdr(t2);
/* lfa2.scm:232: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1138(t4,((C_word*)t0)[2],t3);}}

/* k1365 in k1382 in k1394 in k1312 in walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_1367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_1332(t2,C_i_not(t1));}

/* k1231 in k1228 in k1222 in walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_1233(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1233,2,t0,t1);}
t2=C_i_caddr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1244,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t5=C_i_caddr(((C_word*)t0)[6]);
/* lfa2.scm:248: append */
t6=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,((C_word*)t0)[7]);}

/* k1228 in k1222 in walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_fcall f_1230(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1230,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1233,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1256,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t4,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t6=C_i_cadr(((C_word*)t0)[6]);
/* lfa2.scm:245: append */
t7=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,((C_word*)t0)[7]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1263,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* lfa2.scm:251: walk */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1174(t4,t2,t3,((C_word*)t0)[7],((C_word*)t0)[5]);}}

/* k1461 in walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_1463(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1463,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_assoc(t2,lf[51]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1470,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* lfa2.scm:281: g307 */
t5=t4;
f_1470(t5,((C_word*)t0)[9],t3);}
else{
t4=C_u_i_car(((C_word*)t0)[2]);
t5=C_i_assoc(t4,lf[58]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1608,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* lfa2.scm:281: g328 */
t7=t6;
f_1608(t7,((C_word*)t0)[9],t5);}
else{
t6=C_u_i_car(((C_word*)t0)[2]);
t7=C_i_assoc(t6,*((C_word*)lf[0]+1));
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1838,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* lfa2.scm:281: g369 */
t9=t8;
f_1838(t9,((C_word*)t0)[9],t7);}
else{
t8=((C_word*)t0)[9];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_UNDEFINED);}}}}

/* k1475 in k1472 in g307 in k1461 in walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_1477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[21]);}

/* k1472 in g307 in k1461 in walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_1474(C_word c,C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1474,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1477,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[52]+1))){
/* lfa2.scm:285: extinguish! */
t4=((C_word*)((C_word*)t0)[3])[1];
f_998(t4,t3,((C_word*)t0)[4],lf[53]);}
else{
t4=C_i_cadr(((C_word*)t0)[5]);
t5=C_eqp(lf[54],t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1492,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(t2))){
t7=C_u_i_car(t2);
t8=C_eqp(lf[39],t7);
if(C_truep(t8)){
t9=C_i_cadr(((C_word*)t0)[6]);
t10=C_slot(t9,C_fix(1));
t11=t6;
f_1492(t11,C_eqp(lf[26],t10));}
else{
t9=t6;
f_1492(t9,C_SCHEME_FALSE);}}
else{
t7=t6;
f_1492(t7,C_SCHEME_FALSE);}}
else{
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1560,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(t2))){
t7=C_u_i_car(t2);
t8=t6;
f_1560(t8,C_eqp(lf[25],t7));}
else{
t7=t6;
f_1560(t7,C_SCHEME_FALSE);}}}}

/* k964 in droppable? in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_not(t1);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=((C_word*)t0)[2];
/* tweaks.scm:57: ##sys#get */
t4=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],lf[8]);}}

/* g307 in k1461 in walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_fcall f_1470(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1470,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1474,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_i_car(((C_word*)t0)[4]);
/* lfa2.scm:283: walk */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1174(t5,t3,t4,((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k1704 in k1701 in g328 in k1461 in walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_1706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[25]);}

/* k1701 in g328 in k1461 in walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_1703(C_word c,C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1703,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1706,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_i_cadr(((C_word*)t0)[3]);
t5=C_eqp(lf[54],t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1715,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(t2))){
t7=C_u_i_car(t2);
t8=C_eqp(lf[39],t7);
if(C_truep(t8)){
t9=C_i_cadr(((C_word*)t0)[4]);
t10=C_slot(t9,C_fix(1));
t11=t6;
f_1715(t11,C_eqp(lf[26],t10));}
else{
t9=t6;
f_1715(t9,C_SCHEME_FALSE);}}
else{
t7=t6;
f_1715(t7,C_SCHEME_FALSE);}}
else{
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1783,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(t2))){
t7=C_u_i_car(t2);
t8=t6;
f_1783(t8,C_eqp(lf[25],t7));}
else{
t7=t6;
f_1783(t7,C_SCHEME_FALSE);}}}

/* drop! in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_fcall f_986(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_986,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_990,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:197: node-class-set! */
t4=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[13]);}

/* ##compiler#perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_773(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word t24;
C_word t25;
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_773,4,t0,t1,t2,t3);}
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_890,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t19=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_919,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t20=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_925,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t21=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_986,tmp=(C_word)a,a+=2,tmp));
t22=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_998,a[2]=t13,a[3]=t11,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t23=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1174,a[2]=t17,a[3]=t9,a[4]=t15,tmp=(C_word)a,a+=5,tmp));
t24=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2007,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:353: walk */
t25=((C_word*)t17)[1];
f_1174(t25,t24,t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* k1016 in g173 in k1000 in extinguish! in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_1018(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* lfa2.scm:208: drop! */
f_986(((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=C_set_block_item(((C_word*)t0)[5],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* g173 in k1000 in extinguish! in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_fcall f_1011(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1011,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1018,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* lfa2.scm:207: droppable? */
t4=((C_word*)((C_word*)t0)[4])[1];
f_925(t4,t3,t2);}

/* droppable? in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_fcall f_925(C_word t0,C_word t1,C_word t2){
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
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_925,NULL,3,t0,t1,t2);}
t3=t2;
t4=C_slot(t3,C_fix(1));
t5=C_u_i_memq(t4,lf[5]);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=t2;
t7=C_slot(t6,C_fix(1));
t8=C_eqp(lf[6],t7);
if(C_truep(t8)){
t9=t2;
t10=C_slot(t9,C_fix(2));
t11=C_i_car(t10);
t12=t11;
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_966,a[2]=t1,a[3]=t12,tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:193: get */
t14=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t14+1)))(5,t14,t13,((C_word*)t0)[2],t12,lf[9]);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}}}

/* k1781 in k1701 in g328 in k1461 in walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_fcall f_1783(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
if(C_truep(C_i_memq(lf[25],t3))){
/* lfa2.scm:333: extinguish! */
t4=((C_word*)((C_word*)t0)[3])[1];
f_998(t4,((C_word*)t0)[4],((C_word*)t0)[5],lf[60]);}
else{
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[25]);}}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
if(C_truep(C_i_member(((C_word*)t0)[7],t3))){
/* lfa2.scm:336: extinguish! */
t4=((C_word*)((C_word*)t0)[3])[1];
f_998(t4,((C_word*)t0)[4],((C_word*)t0)[5],lf[61]);}
else{
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[25]);}}}

/* assigned? in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_fcall f_919(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_919,NULL,3,t0,t1,t2);}
/* lfa2.scm:186: get */
t3=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,((C_word*)t0)[2],t2,lf[4]);}

/* k1394 in k1312 in walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_1396(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1396,2,t0,t1);}
t2=(C_truep(t1)?((C_word*)t0)[2]:C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]),((C_word*)t0)[2]));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1332,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=t3,tmp=(C_word)a,a+=9,tmp);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=C_eqp(lf[6],t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1384,a[2]=t4,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
/* lfa2.scm:263: assigned? */
t8=((C_word*)((C_word*)t0)[10])[1];
f_919(t8,t7,((C_word*)t0)[3]);}
else{
t7=t4;
f_1332(t7,C_SCHEME_FALSE);}}

/* k1026 in k1000 in extinguish! in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_1028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1028,2,t0,t1);}
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
/* lfa2.scm:212: drop! */
f_986(((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1045,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[5];
t4=C_slot(t3,C_fix(3));
t5=C_i_length(t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1052,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
switch(t5){
case C_fix(1):
/* lfa2.scm:216: string-append */
t7=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t2,((C_word*)t0)[6],lf[16]);
case C_fix(2):
/* lfa2.scm:216: string-append */
t7=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t2,((C_word*)t0)[6],lf[17]);
case C_fix(3):
/* lfa2.scm:216: string-append */
t7=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t2,((C_word*)t0)[6],lf[18]);
default:
/* lfa2.scm:222: bomb */
t7=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,lf[20]);}}}

/* k1490 in k1472 in g307 in k1461 in walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_fcall f_1492(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_slot(t2,C_fix(2));
t4=C_i_car(t3);
if(C_truep(C_i_symbolp(t4))){
t5=C_i_cadr(((C_word*)t0)[3]);
t6=C_eqp(t4,t5);
if(C_truep(t6)){
/* lfa2.scm:294: extinguish! */
t7=((C_word*)((C_word*)t0)[4])[1];
f_998(t7,((C_word*)t0)[5],((C_word*)t0)[6],lf[55]);}
else{
t7=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,lf[21]);}}
else{
t5=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[21]);}}
else{
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[21]);}}

/* g390 in walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_fcall f_1933(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1933,NULL,3,t0,t1,t2);}
/* lfa2.scm:350: g405 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1174(t3,t1,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k2005 in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_2007(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2007,2,t0,t1);}
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2018,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* lfa2.scm:355: with-debugging-output */
t3=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],lf[71],t2);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1409 in walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_1411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[44]);}

/* k1941 in walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_1943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[21]);}

/* for-each-loop389 in walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_fcall f_1945(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1945,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1955,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* lfa2.scm:350: g390 */
t5=((C_word*)t0)[3];
f_1933(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* g328 in k1461 in walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_fcall f_1608(C_word t0,C_word t1,C_word t2){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1608,NULL,3,t0,t1,t2);}
t3=C_i_car(((C_word*)t0)[2]);
t4=C_slot(t3,C_fix(1));
t5=C_eqp(lf[6],t4);
if(C_truep(t5)){
t6=C_slot(t3,C_fix(2));
t7=C_i_car(t6);
t8=C_i_cadr(t2);
t9=C_eqp(lf[54],t8);
if(C_truep(t9)){
t10=C_i_cadr(((C_word*)t0)[2]);
t11=C_slot(t10,C_fix(1));
t12=C_eqp(lf[26],t11);
if(C_truep(t12)){
t13=C_i_cadr(((C_word*)t0)[2]);
t14=C_slot(t13,C_fix(2));
t15=C_i_car(t14);
if(C_truep(C_i_symbolp(t15))){
t16=C_a_i_list(&a,2,lf[39],t15);
t17=C_a_i_cons(&a,2,t7,t16);
t18=C_a_i_list(&a,1,t17);
t19=t1;
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,C_a_i_list(&a,3,lf[25],t18,C_SCHEME_END_OF_LIST));}
else{
t16=C_a_i_cons(&a,2,t7,lf[39]);
t17=C_a_i_list(&a,1,t16);
t18=t1;
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,C_a_i_list(&a,3,lf[25],t17,C_SCHEME_END_OF_LIST));}}
else{
t13=C_a_i_cons(&a,2,t7,lf[39]);
t14=C_a_i_list(&a,1,t13);
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_a_i_list(&a,3,lf[25],t14,C_SCHEME_END_OF_LIST));}}
else{
t10=C_i_cadr(t2);
t11=C_a_i_cons(&a,2,t7,t10);
t12=C_a_i_list(&a,1,t11);
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_a_i_list(&a,3,lf[25],t12,C_SCHEME_END_OF_LIST));}}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1703,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t7=C_u_i_car(((C_word*)t0)[2]);
/* lfa2.scm:320: walk */
t8=((C_word*)((C_word*)t0)[5])[1];
f_1174(t8,t6,t7,((C_word*)t0)[6],((C_word*)t0)[7]);}}

/* k1000 in extinguish! in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_1002(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1002,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_slot(t2,C_fix(3));
t4=C_SCHEME_TRUE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1011,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t7=C_i_check_list_2(t3,lf[14]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1028,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1087,a[2]=t10,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_1087(t12,t8,t3);}

/* k1330 in k1394 in k1312 in walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_fcall f_1332(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1332,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_i_car(t2);
t4=C_a_i_cons(&a,2,C_a_i_cons(&a,2,t3,((C_word*)t0)[3]),((C_word*)t0)[4]);
t5=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[3],t3),t4);
/* lfa2.scm:258: walk */
t6=((C_word*)((C_word*)t0)[5])[1];
f_1174(t6,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],t5);}
else{
t2=((C_word*)t0)[4];
/* lfa2.scm:258: walk */
t3=((C_word*)((C_word*)t0)[5])[1];
f_1174(t3,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],t2);}}

/* walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_fcall f_1174(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
a=C_alloc(21);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1174,NULL,5,t0,t1,t2,t3,t4);}
t5=t2;
t6=C_slot(t5,C_fix(1));
t7=t2;
t8=C_slot(t7,C_fix(2));
t9=t8;
t10=t2;
t11=C_slot(t10,C_fix(3));
t12=t11;
t13=C_eqp(t6,lf[6]);
if(C_truep(t13)){
t14=C_i_car(t9);
t15=t1;
t16=t14;
t17=t3;
t18=t4;
t19=C_i_assq(t16,t17);
if(C_truep(t19)){
t20=t15;
((C_proc2)(void*)(*((C_word*)t20+1)))(2,t20,C_i_cdr(t19));}
else{
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1138,a[2]=t21,a[3]=t16,a[4]=t17,tmp=(C_word)a,a+=5,tmp));
t23=((C_word*)t21)[1];
f_1138(t23,t15,t18);}}
else{
t14=C_eqp(t6,lf[22]);
t15=(C_truep(t14)?t14:C_eqp(t6,lf[23]));
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1224,a[2]=t12,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t4,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t17=C_i_car(t12);
/* lfa2.scm:242: walk */
t69=t16;
t70=t17;
t71=t3;
t72=t4;
t1=t69;
t2=t70;
t3=t71;
t4=t72;
goto loop;}
else{
t16=C_eqp(t6,lf[26]);
if(C_truep(t16)){
t17=C_i_car(t9);
t18=t1;
if(C_truep(C_i_stringp(t17))){
t19=t18;
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,lf[27]);}
else{
if(C_truep(C_i_symbolp(t17))){
t19=t18;
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,lf[28]);}
else{
if(C_truep(C_fixnump(t17))){
t19=t18;
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,lf[29]);}
else{
if(C_truep(C_i_flonump(t17))){
t19=t18;
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,lf[30]);}
else{
if(C_truep(C_i_numberp(t17))){
t19=*((C_word*)lf[31]+1);
t20=*((C_word*)lf[31]+1);
t21=C_eqp(*((C_word*)lf[31]+1),lf[29]);
if(C_truep(t21)){
t22=t18;
((C_proc2)(void*)(*((C_word*)t22+1)))(2,t22,lf[29]);}
else{
t22=C_eqp(t19,lf[32]);
t23=t18;
((C_proc2)(void*)(*((C_word*)t23+1)))(2,t23,(C_truep(t22)?lf[32]:lf[33]));}}
else{
if(C_truep(C_booleanp(t17))){
t19=t18;
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,lf[25]);}
else{
if(C_truep(C_i_nullp(t17))){
t19=t18;
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,lf[34]);}
else{
if(C_truep(C_i_listp(t17))){
t19=t18;
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,lf[35]);}
else{
if(C_truep(C_i_pairp(t17))){
t19=t18;
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,lf[36]);}
else{
if(C_truep(C_eofp(t17))){
t19=t18;
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,lf[37]);}
else{
if(C_truep(C_i_vectorp(t17))){
t19=t18;
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,lf[38]);}
else{
t19=C_immp(t17);
t20=(C_truep(t19)?C_SCHEME_FALSE:C_structurep(t17));
if(C_truep(t20)){
t21=C_slot(t17,C_fix(0));
t22=t18;
((C_proc2)(void*)(*((C_word*)t22+1)))(2,t22,C_a_i_list(&a,2,lf[39],t21));}
else{
t21=C_charp(t17);
t22=t18;
((C_proc2)(void*)(*((C_word*)t22+1)))(2,t22,(C_truep(t21)?lf[40]:lf[21]));}}}}}}}}}}}}}
else{
t17=C_eqp(t6,lf[41]);
if(C_truep(t17)){
t18=C_i_car(t12);
t19=t18;
t20=C_i_car(t9);
t21=t20;
t22=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1314,a[2]=t12,a[3]=t3,a[4]=t21,a[5]=t19,a[6]=t4,a[7]=((C_word*)t0)[2],a[8]=t1,a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
/* lfa2.scm:257: walk */
t69=t22;
t70=t19;
t71=t3;
t72=t4;
t1=t69;
t2=t70;
t3=t71;
t4=t72;
goto loop;}
else{
t18=C_eqp(t6,lf[42]);
t19=(C_truep(t18)?t18:C_eqp(t6,lf[43]));
if(C_truep(t19)){
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1411,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t21=C_i_car(t12);
/* lfa2.scm:272: walk */
t69=t20;
t70=t21;
t71=C_SCHEME_END_OF_LIST;
t72=C_SCHEME_END_OF_LIST;
t1=t69;
t2=t70;
t3=t71;
t4=t72;
goto loop;}
else{
t20=C_eqp(t6,lf[45]);
t21=(C_truep(t20)?t20:C_eqp(t6,lf[46]));
if(C_truep(t21)){
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1427,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t23=C_i_car(t12);
/* lfa2.scm:275: walk */
t69=t22;
t70=t23;
t71=t3;
t72=t4;
t1=t69;
t2=t70;
t3=t71;
t4=t72;
goto loop;}
else{
t22=C_eqp(t6,lf[13]);
if(C_truep(t22)){
t23=t1;
((C_proc2)(void*)(*((C_word*)t23+1)))(2,t23,lf[47]);}
else{
t23=C_eqp(t6,lf[48]);
if(C_truep(t23)){
t24=t1;
((C_proc2)(void*)(*((C_word*)t24+1)))(2,t24,lf[44]);}
else{
t24=C_eqp(t6,lf[49]);
t25=(C_truep(t24)?t24:C_eqp(t6,lf[50]));
if(C_truep(t25)){
t26=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1453,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t27=C_i_check_list_2(t12,lf[14]);
t28=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1463,a[2]=t9,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t12,a[6]=((C_word*)t0)[2],a[7]=t3,a[8]=t4,a[9]=t1,tmp=(C_word)a,a+=10,tmp);
t29=C_SCHEME_UNDEFINED;
t30=(*a=C_VECTOR_TYPE|1,a[1]=t29,tmp=(C_word)a,a+=2,tmp);
t31=C_set_block_item(t30,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1911,a[2]=t30,a[3]=t26,tmp=(C_word)a,a+=4,tmp));
t32=((C_word*)t30)[1];
f_1911(t32,t28,t12);}
else{
t26=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1933,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t27=C_i_check_list_2(t12,lf[14]);
t28=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1943,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t29=C_SCHEME_UNDEFINED;
t30=(*a=C_VECTOR_TYPE|1,a[1]=t29,tmp=(C_word)a,a+=2,tmp);
t31=C_set_block_item(t30,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1945,a[2]=t30,a[3]=t26,tmp=(C_word)a,a+=4,tmp));
t32=((C_word*)t30)[1];
f_1945(t32,t28,t12);}}}}}}}}}}

/* k1050 in k1026 in k1000 in extinguish! in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_1052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lfa2.scm:216: string-append */
t2=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* for-each-loop172 in k1000 in extinguish! in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_fcall f_1087(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1087,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1097,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* lfa2.scm:203: g173 */
t5=((C_word*)t0)[3];
f_1011(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_lfa2_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_lfa2_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("lfa2_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(2213)){
C_save(t1);
C_rereclaim2(2213*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,72);
lf[0]=C_h_intern(&lf[0],17,"+constructor-map+");
lf[1]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_record1\376\003\000\000\002\376\001\000\000\010\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_record2\376\003\000"
"\000\002\376\001\000\000\010\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_record3\376\003\000\000\002\376\001\000\000\010\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000"
"\000\015C_a_i_record4\376\003\000\000\002\376\001\000\000\010\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_record5\376\003\000\000\002\376\001\000\000\010\052struc"
"t\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_record6\376\003\000\000\002\376\001\000\000\010\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_recor"
"d7\376\003\000\000\002\376\001\000\000\010\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_record8\376\003\000\000\002\376\001\000\000\010\052struct\052\376\377\016\376\003\000\000\002\376\003\000"
"\000\002\376B\000\000\014C_a_i_record\376\003\000\000\002\376\001\000\000\010\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\014C_a_i_string\376\003\000\000\002\376\001\000\000\006str"
"ing\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\012C_a_i_port\376\003\000\000\002\376\001\000\000\004port\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_vector1\376\003\000\000"
"\002\376\001\000\000\006vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_vector2\376\003\000\000\002\376\001\000\000\006vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a"
"_i_vector3\376\003\000\000\002\376\001\000\000\006vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_vector4\376\003\000\000\002\376\001\000\000\006vector\376\377\016\376\003\000\000"
"\002\376\003\000\000\002\376B\000\000\015C_a_i_vector5\376\003\000\000\002\376\001\000\000\006vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_vector6\376\003\000\000\002\376\001\000\000"
"\006vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_vector7\376\003\000\000\002\376\001\000\000\006vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_ve"
"ctor8\376\003\000\000\002\376\001\000\000\006vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\010C_a_pair\376\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C"
"_a_i_bytevector\376\003\000\000\002\376\001\000\000\004blob\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\023C_a_i_make_locative\376\003\000\000\002\376\001\000\000\010loca"
"tive\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\014C_a_i_vector\376\003\000\000\002\376\001\000\000\006vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_a_i_list1\376"
"\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_a_i_list2\376\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_a_i_"
"list3\376\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_a_i_list4\376\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013"
"C_a_i_list5\376\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_a_i_list6\376\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000\000\002\376\003\000\000"
"\002\376B\000\000\013C_a_i_list7\376\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_a_i_list8\376\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000"
"\000\002\376\003\000\000\002\376B\000\000\012C_a_i_cons\376\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\014C_a_i_flonum\376\003\000\000\002\376\001\000\000\006flon"
"um\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_a_i_fix_to_flo\376\003\000\000\002\376\001\000\000\006flonum\376\377\016\376\377\016");
lf[2]=C_h_intern(&lf[2],40,"\010compilerperform-secondary-flow-analysis");
lf[3]=C_h_intern(&lf[3],12,"\010compilerget");
lf[4]=C_h_intern(&lf[4],8,"assigned");
lf[5]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\005quote\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\003\000\000\002\376\001\000\000\016\004coreprimitive\376\003\000\000\002\376\001\000\000\013\004corela"
"mbda\376\377\016");
lf[6]=C_h_intern(&lf[6],13,"\004corevariable");
lf[7]=C_h_intern(&lf[7],7,"\003sysget");
lf[8]=C_h_intern(&lf[8],21,"\010compileralways-bound");
lf[9]=C_h_intern(&lf[9],6,"global");
lf[10]=C_h_intern(&lf[10],24,"node-subexpressions-set!");
lf[11]=C_h_intern(&lf[11],20,"node-parameters-set!");
lf[12]=C_h_intern(&lf[12],15,"node-class-set!");
lf[13]=C_h_intern(&lf[13],14,"\004coreundefined");
lf[14]=C_h_intern(&lf[14],8,"for-each");
lf[15]=C_h_intern(&lf[15],13,"string-append");
lf[16]=C_decode_literal(C_heaptop,"\376B\000\000\0011");
lf[17]=C_decode_literal(C_heaptop,"\376B\000\000\0012");
lf[18]=C_decode_literal(C_heaptop,"\376B\000\000\0013");
lf[19]=C_h_intern(&lf[19],13,"\010compilerbomb");
lf[20]=C_decode_literal(C_heaptop,"\376B\000\0005bad number of arguments to extinguished ##core#inline");
lf[21]=C_h_intern(&lf[21],1,"\052");
lf[22]=C_h_intern(&lf[22],2,"if");
lf[23]=C_h_intern(&lf[23],9,"\004corecond");
lf[24]=C_h_intern(&lf[24],6,"append");
lf[25]=C_h_intern(&lf[25],7,"boolean");
lf[26]=C_h_intern(&lf[26],5,"quote");
lf[27]=C_h_intern(&lf[27],6,"string");
lf[28]=C_h_intern(&lf[28],6,"symbol");
lf[29]=C_h_intern(&lf[29],6,"fixnum");
lf[30]=C_h_intern(&lf[30],5,"float");
lf[31]=C_h_intern(&lf[31],11,"number-type");
lf[32]=C_h_intern(&lf[32],6,"flonum");
lf[33]=C_h_intern(&lf[33],6,"number");
lf[34]=C_h_intern(&lf[34],4,"null");
lf[35]=C_h_intern(&lf[35],4,"list");
lf[36]=C_h_intern(&lf[36],4,"pair");
lf[37]=C_h_intern(&lf[37],3,"eof");
lf[38]=C_h_intern(&lf[38],6,"vector");
lf[39]=C_h_intern(&lf[39],6,"struct");
lf[40]=C_h_intern(&lf[40],4,"char");
lf[41]=C_h_intern(&lf[41],3,"let");
lf[42]=C_h_intern(&lf[42],11,"\004corelambda");
lf[43]=C_h_intern(&lf[43],18,"\004coredirect_lambda");
lf[44]=C_h_intern(&lf[44],9,"procedure");
lf[45]=C_h_intern(&lf[45],4,"set!");
lf[46]=C_h_intern(&lf[46],9,"\004coreset!");
lf[47]=C_h_intern(&lf[47],9,"undefined");
lf[48]=C_h_intern(&lf[48],14,"\004coreprimitive");
lf[49]=C_h_intern(&lf[49],11,"\004coreinline");
lf[50]=C_h_intern(&lf[50],20,"\004coreinline_allocate");
lf[51]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376B\000\000\021C_i_check_closure\376\003\000\000\002\376\001\000\000\011procedure\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\017C_i_check_e"
"xact\376\003\000\000\002\376\001\000\000\006fixnum\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\021C_i_check_inexact\376\003\000\000\002\376\001\000\000\006flonum\376\377\016\376\003\000\000\002\376"
"\003\000\000\002\376B\000\000\020C_i_check_number\376\003\000\000\002\376\001\000\000\006fixnum\376\003\000\000\002\376\001\000\000\006flonum\376\003\000\000\002\376\001\000\000\006number\376\377\016\376\003\000\000"
"\002\376\003\000\000\002\376B\000\000\020C_i_check_string\376\003\000\000\002\376\001\000\000\006string\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\024C_i_check_bytevecto"
"r\376\003\000\000\002\376\001\000\000\004blob\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_i_check_symbol\376\003\000\000\002\376\001\000\000\006symbol\376\377\016\376\003\000\000\002\376\003\000\000\002\376B"
"\000\000\016C_i_check_list\376\003\000\000\002\376\001\000\000\004null\376\003\000\000\002\376\001\000\000\004pair\376\003\000\000\002\376\001\000\000\004list\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\016C_i"
"_check_pair\376\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\022C_i_check_locative\376\003\000\000\002\376\001\000\000\010locative\376"
"\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\021C_i_check_boolean\376\003\000\000\002\376\001\000\000\007boolean\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_i_check_v"
"ector\376\003\000\000\002\376\001\000\000\006vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\023C_i_check_structure\376\003\000\000\002\376\001\000\000\010\052struct\052\376\377\016\376"
"\003\000\000\002\376\003\000\000\002\376B\000\000\016C_i_check_char\376\003\000\000\002\376\001\000\000\004char\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\023C_i_check_closure_2\376"
"\003\000\000\002\376\001\000\000\011procedure\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\021C_i_check_exact_2\376\003\000\000\002\376\001\000\000\006fixnum\376\377\016\376\003\000\000\002\376\003\000"
"\000\002\376B\000\000\023C_i_check_inexact_2\376\003\000\000\002\376\001\000\000\006flonum\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\022C_i_check_number_2\376\003"
"\000\000\002\376\001\000\000\006fixnum\376\003\000\000\002\376\001\000\000\006flonum\376\003\000\000\002\376\001\000\000\006number\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\022C_i_check_string"
"_2\376\003\000\000\002\376\001\000\000\006string\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\026C_i_check_bytevector_2\376\003\000\000\002\376\001\000\000\004blob\376\377\016\376\003\000\000\002"
"\376\003\000\000\002\376B\000\000\022C_i_check_symbol_2\376\003\000\000\002\376\001\000\000\006symbol\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_i_check_list_2\376\003"
"\000\000\002\376\001\000\000\004null\376\003\000\000\002\376\001\000\000\004pair\376\003\000\000\002\376\001\000\000\004list\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_i_check_pair_2\376\003\000\000\002\376"
"\001\000\000\004pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\024C_i_check_locative_2\376\003\000\000\002\376\001\000\000\010locative\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000"
"\000\023C_i_check_boolean_2\376\003\000\000\002\376\001\000\000\007boolean\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\022C_i_check_vector_2\376\003\000\000\002\376"
"\001\000\000\006vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\025C_i_check_structure_2\376\003\000\000\002\376\001\000\000\010\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002"
"\376B\000\000\020C_i_check_char_2\376\003\000\000\002\376\001\000\000\004char\376\377\016\376\377\016");
lf[52]=C_h_intern(&lf[52],6,"unsafe");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_noop");
lf[54]=C_h_intern(&lf[54],8,"\052struct\052");
lf[55]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_noop");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_noop");
lf[57]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_noop");
lf[58]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376B\000\000\014C_i_closurep\376\003\000\000\002\376\001\000\000\011procedure\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\011C_fixnump\376\003\000\000\002\376\001"
"\000\000\006fixnum\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_i_flonump\376\003\000\000\002\376\001\000\000\006flonum\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_i_numb"
"erp\376\003\000\000\002\376\001\000\000\006number\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\011C_stringp\376\003\000\000\002\376\001\000\000\006string\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015"
"C_bytevectorp\376\003\000\000\002\376\001\000\000\004blob\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_i_symbolp\376\003\000\000\002\376\001\000\000\006symbol\376\377\016\376\003\000\000\002"
"\376\003\000\000\002\376B\000\000\011C_i_listp\376\003\000\000\002\376\001\000\000\004list\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\011C_i_pairp\376\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000"
"\000\002\376\003\000\000\002\376B\000\000\013C_locativep\376\003\000\000\002\376\001\000\000\010locative\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\012C_booleanp\376\003\000\000\002\376\001\000\000\007b"
"oolean\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_i_vectorp\376\003\000\000\002\376\001\000\000\006vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\014C_structure"
"p\376\003\000\000\002\376\001\000\000\006struct\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\016C_i_structurep\376\003\000\000\002\376\001\000\000\010\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002"
"\376B\000\000\007C_charp\376\003\000\000\002\376\001\000\000\004char\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\011C_i_portp\376\003\000\000\002\376\001\000\000\004port\376\377\016\376\003\000\000\002\376\003\000\000\002"
"\376B\000\000\011C_i_nullp\376\003\000\000\002\376\001\000\000\004null\376\377\016\376\377\016");
lf[59]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_true");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_true");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_true");
lf[62]=C_h_intern(&lf[62],19,"\003sysstandard-output");
lf[63]=C_h_intern(&lf[63],6,"printf");
lf[64]=C_h_intern(&lf[64],16,"\003syswrite-char-0");
lf[65]=C_h_intern(&lf[65],9,"\003sysprint");
lf[66]=C_decode_literal(C_heaptop,"\376B\000\000\002:\011");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[68]=C_h_intern(&lf[68],5,"print");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\027eliminated type checks:");
lf[70]=C_h_intern(&lf[70],30,"\010compilerwith-debugging-output");
lf[71]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001x\376\003\000\000\002\376\001\000\000\001o\376\377\016");
C_register_lf2(lf,72,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_720,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k724 in k721 in k718 */
static void C_ccall f_726(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_726,2,t0,t1);}
t2=C_mutate2((C_word*)lf[0]+1 /* (set! +constructor-map+ ...) */,lf[1]);
t3=C_mutate2((C_word*)lf[2]+1 /* (set! ##compiler#perform-secondary-flow-analysis ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_773,tmp=(C_word)a,a+=2,tmp));
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k1312 in walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_1314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1314,2,t0,t1);}
t2=t1;
t3=C_i_cadr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1396,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t4,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* lfa2.scm:259: assigned? */
t6=((C_word*)((C_word*)t0)[9])[1];
f_919(t6,t5,((C_word*)t0)[4]);}

/* k721 in k718 */
static void C_ccall f_723(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_723,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_726,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_chicken_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1558 in k1472 in g307 in k1461 in walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_fcall f_1560(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
if(C_truep(C_i_memq(lf[25],t3))){
/* lfa2.scm:297: extinguish! */
t4=((C_word*)((C_word*)t0)[3])[1];
f_998(t4,((C_word*)t0)[4],((C_word*)t0)[5],lf[56]);}
else{
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[21]);}}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
if(C_truep(C_i_member(((C_word*)t0)[7],t3))){
/* lfa2.scm:300: extinguish! */
t4=((C_word*)((C_word*)t0)[3])[1];
f_998(t4,((C_word*)t0)[4],((C_word*)t0)[5],lf[57]);}
else{
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[21]);}}}

/* k718 */
static void C_ccall f_720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_720,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_723,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* g369 in k1461 in walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_fcall f_1838(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1838,NULL,3,t0,t1,t2);}
t3=C_i_pairp(((C_word*)t0)[2]);
t4=(C_truep(t3)?C_u_i_car(((C_word*)t0)[2]):C_SCHEME_FALSE);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1848,a[2]=t5,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
t7=C_i_cadr(t2);
t8=C_eqp(lf[54],t7);
if(C_truep(t8)){
t9=C_slot(t5,C_fix(1));
t10=t6;
f_1848(t10,C_eqp(lf[26],t9));}
else{
t9=t6;
f_1848(t9,C_SCHEME_FALSE);}}
else{
t7=t6;
f_1848(t7,C_SCHEME_FALSE);}}

/* g279 in walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_fcall f_1453(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1453,NULL,3,t0,t1,t2);}
/* lfa2.scm:280: g294 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1174(t3,t1,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k1713 in k1701 in g328 in k1461 in walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_fcall f_1715(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_slot(t2,C_fix(2));
t4=C_i_car(t3);
if(C_truep(C_i_symbolp(t4))){
t5=C_i_cadr(((C_word*)t0)[3]);
t6=C_eqp(t4,t5);
if(C_truep(t6)){
/* lfa2.scm:330: extinguish! */
t7=((C_word*)((C_word*)t0)[4])[1];
f_998(t7,((C_word*)t0)[5],((C_word*)t0)[6],lf[59]);}
else{
t7=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,lf[25]);}}
else{
t5=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[25]);}}
else{
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[25]);}}

/* k1846 in g369 in k1461 in walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_fcall f_1848(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1848,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_i_car(t2);
t4=C_i_symbolp(t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?C_a_i_list(&a,2,lf[39],t3):lf[39]));}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_cadr(((C_word*)t0)[4]));}}

/* k1043 in k1026 in k1000 in extinguish! in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_1045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1045,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* lfa2.scm:213: node-parameters-set! */
t3=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],((C_word*)t0)[3],t2);}

/* k1095 in for-each-loop172 in k1000 in extinguish! in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_1097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1087(t3,((C_word*)t0)[4],t2);}

/* k1425 in walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_1427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[47]);}

/* k2020 in a2017 in k2005 in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_2022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2022,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_i_check_list_2(t2,lf[14]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2056,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_2056(t7,((C_word*)t0)[3],t2);}

/* for-each-loop278 in walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_fcall f_1911(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1911,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1921,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* lfa2.scm:280: g279 */
t5=((C_word*)t0)[3];
f_1453(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1953 in for-each-loop389 in walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_1955(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1945(t3,((C_word*)t0)[4],t2);}

/* a2017 in k2005 in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_2018(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2018,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2022,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:358: print */
t3=*((C_word*)lf[68]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[69]);}

/* k1261 in k1228 in k1222 in walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_1263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_caddr(((C_word*)t0)[2]);
/* lfa2.scm:252: walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1174(t3,((C_word*)t0)[4],t2,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k1919 in for-each-loop278 in walk in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_1921(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1911(t3,((C_word*)t0)[4],t2);}

/* k2028 in for-each-loop415 in k2020 in a2017 in k2005 in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_2030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2030,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2033,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)t0)[4]);
/* lfa2.scm:360: ##sys#print */
t4=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k2031 in k2028 in for-each-loop415 in k2020 in a2017 in k2005 in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_2033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2033,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2036,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lfa2.scm:360: ##sys#print */
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[66],C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k2037 in k2034 in k2031 in k2028 in for-each-loop415 in k2020 in a2017 in k2005 in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_2039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lfa2.scm:360: ##sys#write-char-0 */
t2=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(10),((C_word*)t0)[3]);}

/* k2034 in k2031 in k2028 in for-each-loop415 in k2020 in a2017 in k2005 in perform-secondary-flow-analysis in k724 in k721 in k718 */
static void C_ccall f_2036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2036,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2039,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_u_i_cdr(((C_word*)t0)[4]);
/* lfa2.scm:360: ##sys#print */
t4=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,C_SCHEME_FALSE,((C_word*)t0)[3]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[67] = {
{"f_890:lfa2_2escm",(void*)f_890},
{"f_990:lfa2_2escm",(void*)f_990},
{"f_993:lfa2_2escm",(void*)f_993},
{"f_1244:lfa2_2escm",(void*)f_1244},
{"f_2066:lfa2_2escm",(void*)f_2066},
{"f_998:lfa2_2escm",(void*)f_998},
{"f_1256:lfa2_2escm",(void*)f_1256},
{"f_2056:lfa2_2escm",(void*)f_2056},
{"f_1138:lfa2_2escm",(void*)f_1138},
{"f_1224:lfa2_2escm",(void*)f_1224},
{"f_1384:lfa2_2escm",(void*)f_1384},
{"f_1148:lfa2_2escm",(void*)f_1148},
{"f_1367:lfa2_2escm",(void*)f_1367},
{"f_1233:lfa2_2escm",(void*)f_1233},
{"f_1230:lfa2_2escm",(void*)f_1230},
{"f_1463:lfa2_2escm",(void*)f_1463},
{"f_1477:lfa2_2escm",(void*)f_1477},
{"f_1474:lfa2_2escm",(void*)f_1474},
{"f_966:lfa2_2escm",(void*)f_966},
{"f_1470:lfa2_2escm",(void*)f_1470},
{"f_1706:lfa2_2escm",(void*)f_1706},
{"f_1703:lfa2_2escm",(void*)f_1703},
{"f_986:lfa2_2escm",(void*)f_986},
{"f_773:lfa2_2escm",(void*)f_773},
{"f_1018:lfa2_2escm",(void*)f_1018},
{"f_1011:lfa2_2escm",(void*)f_1011},
{"f_925:lfa2_2escm",(void*)f_925},
{"f_1783:lfa2_2escm",(void*)f_1783},
{"f_919:lfa2_2escm",(void*)f_919},
{"f_1396:lfa2_2escm",(void*)f_1396},
{"f_1028:lfa2_2escm",(void*)f_1028},
{"f_1492:lfa2_2escm",(void*)f_1492},
{"f_1933:lfa2_2escm",(void*)f_1933},
{"f_2007:lfa2_2escm",(void*)f_2007},
{"f_1411:lfa2_2escm",(void*)f_1411},
{"f_1943:lfa2_2escm",(void*)f_1943},
{"f_1945:lfa2_2escm",(void*)f_1945},
{"f_1608:lfa2_2escm",(void*)f_1608},
{"f_1002:lfa2_2escm",(void*)f_1002},
{"f_1332:lfa2_2escm",(void*)f_1332},
{"f_1174:lfa2_2escm",(void*)f_1174},
{"f_1052:lfa2_2escm",(void*)f_1052},
{"f_1087:lfa2_2escm",(void*)f_1087},
{"toplevel:lfa2_2escm",(void*)C_lfa2_toplevel},
{"f_726:lfa2_2escm",(void*)f_726},
{"f_1314:lfa2_2escm",(void*)f_1314},
{"f_723:lfa2_2escm",(void*)f_723},
{"f_1560:lfa2_2escm",(void*)f_1560},
{"f_720:lfa2_2escm",(void*)f_720},
{"f_1838:lfa2_2escm",(void*)f_1838},
{"f_1453:lfa2_2escm",(void*)f_1453},
{"f_1715:lfa2_2escm",(void*)f_1715},
{"f_1848:lfa2_2escm",(void*)f_1848},
{"f_1045:lfa2_2escm",(void*)f_1045},
{"f_1097:lfa2_2escm",(void*)f_1097},
{"f_1427:lfa2_2escm",(void*)f_1427},
{"f_2022:lfa2_2escm",(void*)f_2022},
{"f_1911:lfa2_2escm",(void*)f_1911},
{"f_1955:lfa2_2escm",(void*)f_1955},
{"f_2018:lfa2_2escm",(void*)f_2018},
{"f_1263:lfa2_2escm",(void*)f_1263},
{"f_1921:lfa2_2escm",(void*)f_1921},
{"f_2030:lfa2_2escm",(void*)f_2030},
{"f_2033:lfa2_2escm",(void*)f_2033},
{"f_2039:lfa2_2escm",(void*)f_2039},
{"f_2036:lfa2_2escm",(void*)f_2036},
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
S|  for-each		4
S|  printf		2
o|eliminated procedure checks: 45 
o|specializations:
o|  6 (first pair)
o|  3 (car pair)
o|  6 (cdr pair)
o|  1 (caar (pair pair *))
o|  3 (eqv? (not float) *)
o|  1 (memq * list)
o|  15 (eqv? * (not float))
o|  1 (make-string fixnum char)
o|  2 (##sys#check-output-port * * *)
o|safe globals: (##compiler#perform-secondary-flow-analysis +constructor-map+ +predicate-map+ +type-check-map+ dd d lfa2-debug d-depth) 
o|Removed `not' forms: 2 
o|removed side-effect free assignment to unused variable: lfa2-debug 
o|propagated global variable: out2832 ##sys#standard-output 
o|substituted constant variable: a739 
o|substituted constant variable: a740 
o|inlining procedure: k732 
o|substituted constant variable: d-depth 
o|substituted constant variable: d-depth 
o|substituted constant variable: a764 
o|substituted constant variable: d-depth 
o|propagated global variable: out2832 ##sys#standard-output 
o|inlining procedure: k732 
o|removed side-effect free assignment to unused variable: dd 
o|inlining procedure: k895 
o|contracted procedure: "(lfa2.scm:155) g131132" 
o|inlining procedure: k895 
o|substituted constant variable: a936 
o|inlining procedure: k937 
o|inlining procedure: k937 
o|inlining procedure: k952 
o|inlining procedure: k952 
o|contracted procedure: "(lfa2.scm:194) g153154" 
o|contracted procedure: "(lfa2.scm:192) g147148" 
o|contracted procedure: "(lfa2.scm:191) g143144" 
o|contracted procedure: "(lfa2.scm:189) g139140" 
o|inlining procedure: k1013 
o|inlining procedure: k1013 
o|inlining procedure: k1029 
o|inlining procedure: k1029 
o|inlining procedure: k1050 
o|inlining procedure: k1050 
o|inlining procedure: k1062 
o|inlining procedure: k1062 
o|substituted constant variable: a1072 
o|substituted constant variable: a1074 
o|substituted constant variable: a1076 
o|contracted procedure: "(lfa2.scm:218) g194195" 
o|inlining procedure: k1089 
o|inlining procedure: k1089 
o|contracted procedure: "(lfa2.scm:203) g167168" 
o|contracted procedure: "(lfa2.scm:202) g162163" 
o|inlining procedure: k1200 
o|contracted procedure: "(lfa2.scm:240) vartype107" 
o|inlining procedure: k1128 
o|inlining procedure: k1128 
o|inlining procedure: k1140 
o|inlining procedure: k1140 
o|inlining procedure: k1200 
o|inlining procedure: k1225 
o|inlining procedure: k1225 
o|inlining procedure: k1287 
o|contracted procedure: "(lfa2.scm:253) constant-result101" 
o|inlining procedure: k778 
o|inlining procedure: k778 
o|inlining procedure: k790 
o|inlining procedure: k790 
o|inlining procedure: k802 
o|inlining procedure: k814 
o|inlining procedure: k814 
o|substituted constant variable: a821 
o|propagated global variable: tmp114119 number-type 
o|substituted constant variable: a823 
o|inlining procedure: k802 
o|inlining procedure: k830 
o|inlining procedure: k830 
o|inlining procedure: k842 
o|inlining procedure: k842 
o|inlining procedure: k854 
o|inlining procedure: k854 
o|inlining procedure: k873 
o|inlining procedure: k873 
o|contracted procedure: k879 
o|inlining procedure: k1287 
o|inlining procedure: k1327 
o|contracted procedure: "(lfa2.scm:265) g262263" 
o|inlining procedure: k1327 
o|contracted procedure: k1358 
o|inlining procedure: k1355 
o|inlining procedure: k1355 
o|contracted procedure: "(lfa2.scm:264) g258259" 
o|contracted procedure: "(lfa2.scm:262) g254255" 
o|inlining procedure: k1400 
o|inlining procedure: k1400 
o|inlining procedure: k1432 
o|inlining procedure: k1432 
o|inlining procedure: k1444 
o|inlining procedure: k1475 
o|inlining procedure: k1475 
o|inlining procedure: k1487 
o|contracted procedure: "(lfa2.scm:291) g321322" 
o|inlining procedure: k1487 
o|inlining procedure: k1531 
o|contracted procedure: "(lfa2.scm:290) g317318" 
o|inlining procedure: k1531 
o|inlining procedure: k1555 
o|inlining procedure: k1555 
o|inlining procedure: k1613 
o|inlining procedure: k1635 
o|inlining procedure: k1650 
o|inlining procedure: k1650 
o|contracted procedure: "(lfa2.scm:312) g345346" 
o|contracted procedure: "(lfa2.scm:310) g341342" 
o|inlining procedure: k1635 
o|contracted procedure: "(lfa2.scm:307) g338339" 
o|inlining procedure: k1613 
o|inlining procedure: k1710 
o|contracted procedure: "(lfa2.scm:327) g362363" 
o|inlining procedure: k1710 
o|inlining procedure: k1754 
o|contracted procedure: "(lfa2.scm:325) g358359" 
o|inlining procedure: k1754 
o|inlining procedure: k1778 
o|inlining procedure: k1778 
o|contracted procedure: "(lfa2.scm:305) g332333" 
o|inlining procedure: k1605 
o|inlining procedure: k1605 
o|inlining procedure: k1843 
o|contracted procedure: "(lfa2.scm:344) g380381" 
o|inlining procedure: k1843 
o|inlining procedure: k1873 
o|contracted procedure: "(lfa2.scm:343) g376377" 
o|inlining procedure: k1873 
o|substituted constant variable: +predicate-map+ 
o|substituted constant variable: +type-check-map+ 
o|inlining procedure: k1913 
o|inlining procedure: k1913 
o|inlining procedure: k1444 
o|inlining procedure: k1947 
o|inlining procedure: k1947 
o|substituted constant variable: a1971 
o|substituted constant variable: a1973 
o|substituted constant variable: a1975 
o|substituted constant variable: a1977 
o|substituted constant variable: a1982 
o|substituted constant variable: a1984 
o|substituted constant variable: a1989 
o|substituted constant variable: a1991 
o|substituted constant variable: a1993 
o|substituted constant variable: a1995 
o|substituted constant variable: a2000 
o|substituted constant variable: a2002 
o|substituted constant variable: a2004 
o|contracted procedure: "(lfa2.scm:237) g230231" 
o|contracted procedure: "(lfa2.scm:236) g227228" 
o|contracted procedure: "(lfa2.scm:235) g224225" 
o|inlining procedure: k2008 
o|inlining procedure: k2058 
o|contracted procedure: "(lfa2.scm:359) g416423" 
o|propagated global variable: out426430 ##sys#standard-output 
o|substituted constant variable: a2026 
o|substituted constant variable: a2027 
o|propagated global variable: out426430 ##sys#standard-output 
o|inlining procedure: k2058 
o|inlining procedure: k2008 
o|replaced variables: 298 
o|removed binding forms: 84 
o|removed side-effect free assignment to unused variable: d-depth 
o|removed side-effect free assignment to unused variable: d 
o|removed side-effect free assignment to unused variable: +type-check-map+ 
o|removed side-effect free assignment to unused variable: +predicate-map+ 
o|substituted constant variable: mark156 
o|substituted constant variable: r10512090 
o|substituted constant variable: r10512090 
o|inlining procedure: k1050 
o|inlining procedure: k1050 
o|substituted constant variable: r10632094 
o|substituted constant variable: r11412101 
o|substituted constant variable: r7792107 
o|substituted constant variable: r7912109 
o|substituted constant variable: r8152112 
o|substituted constant variable: r8152113 
o|propagated global variable: tmp114119 number-type 
o|substituted constant variable: r8312115 
o|substituted constant variable: r8432117 
o|substituted constant variable: r8552119 
o|substituted constant variable: r8742121 
o|substituted constant variable: r8742122 
o|substituted constant variable: r13562128 
o|substituted constant variable: r14012130 
o|substituted constant variable: r14332132 
o|inlining procedure: k1475 
o|inlining procedure: k1475 
o|substituted constant variable: r15322142 
o|inlining procedure: k1475 
o|inlining procedure: k1475 
o|inlining procedure: k1635 
o|substituted constant variable: r16512149 
o|inlining procedure: k1635 
o|substituted constant variable: r16142152 
o|inlining procedure: k1704 
o|inlining procedure: k1704 
o|substituted constant variable: r17552156 
o|inlining procedure: k1704 
o|inlining procedure: k1704 
o|substituted constant variable: r18742164 
o|substituted constant variable: r14452167 
o|propagated global variable: out426430 ##sys#standard-output 
o|replaced variables: 13 
o|removed binding forms: 282 
o|inlining procedure: k1499 
o|substituted constant variable: r16362188 
o|substituted constant variable: r16362190 
o|substituted constant variable: r161421522193 
o|substituted constant variable: r161421522195 
o|substituted constant variable: r161421522197 
o|substituted constant variable: r161421522199 
o|replaced variables: 30 
o|removed binding forms: 52 
o|substituted constant variable: r10512174 
o|substituted constant variable: r10512176 
o|substituted constant variable: r15002212 
o|inlining procedure: k1722 
o|removed binding forms: 39 
o|removed conditional forms: 1 
o|substituted constant variable: r17232224 
o|removed binding forms: 4 
o|removed conditional forms: 1 
o|removed binding forms: 1 
o|simplifications: ((if . 10) (##core#call . 175)) 
o|  call simplifications:
o|    car
o|    ##sys#cons	3
o|    cadr	6
o|    member	2
o|    memq	2
o|    string?
o|    symbol?	5
o|    fixnum?
o|    flonum?
o|    number?
o|    boolean?
o|    list?
o|    eof-object?
o|    vector?
o|    ##sys#immediate?
o|    ##sys#generic-structure?
o|    char?
o|    ##sys#list	5
o|    second	12
o|    third	3
o|    null?	2
o|    cdar
o|    assq	2
o|    ##sys#check-list	4
o|    pair?	12
o|    length
o|    list
o|    eq?	37
o|    ##sys#slot	31
o|    first	19
o|    not	2
o|    assoc	4
o|    alist-cons	4
o|    cdr	3
o|    add1
o|    set-cdr!
o|contracted procedure: k892 
o|contracted procedure: k908 
o|contracted procedure: k904 
o|contracted procedure: k915 
o|contracted procedure: k933 
o|contracted procedure: k982 
o|contracted procedure: k943 
o|contracted procedure: k973 
o|contracted procedure: k946 
o|contracted procedure: k949 
o|contracted procedure: k1008 
o|contracted procedure: k1023 
o|contracted procedure: k1039 
o|contracted procedure: k1083 
o|contracted procedure: k1047 
o|contracted procedure: k1053 
o|contracted procedure: k1059 
o|contracted procedure: k1065 
o|contracted procedure: k1092 
o|contracted procedure: k1102 
o|contracted procedure: k1106 
o|contracted procedure: k1119 
o|contracted procedure: k1110 
o|contracted procedure: k1181 
o|contracted procedure: k1189 
o|contracted procedure: k1197 
o|contracted procedure: k1203 
o|contracted procedure: k1210 
o|contracted procedure: k1125 
o|contracted procedure: k1143 
o|contracted procedure: k1170 
o|contracted procedure: k1160 
o|contracted procedure: k1216 
o|contracted procedure: k1219 
o|contracted procedure: k1238 
o|contracted procedure: k1246 
o|contracted procedure: k1250 
o|contracted procedure: k1258 
o|contracted procedure: k1268 
o|contracted procedure: k1272 
o|contracted procedure: k1275 
o|contracted procedure: k1284 
o|contracted procedure: k1290 
o|contracted procedure: k1297 
o|contracted procedure: k781 
o|contracted procedure: k787 
o|contracted procedure: k793 
o|contracted procedure: k799 
o|contracted procedure: k805 
o|contracted procedure: k811 
o|contracted procedure: k817 
o|contracted procedure: k827 
o|contracted procedure: k833 
o|contracted procedure: k839 
o|contracted procedure: k845 
o|contracted procedure: k851 
o|contracted procedure: k857 
o|contracted procedure: k886 
o|contracted procedure: k863 
o|contracted procedure: k870 
o|contracted procedure: k876 
o|contracted procedure: k1303 
o|contracted procedure: k1306 
o|contracted procedure: k1309 
o|contracted procedure: k1319 
o|contracted procedure: k1323 
o|contracted procedure: k1349 
o|contracted procedure: k1333 
o|contracted procedure: k1340 
o|contracted procedure: k1327 
o|contracted procedure: k1391 
o|contracted procedure: k1352 
o|contracted procedure: k1378 
o|contracted procedure: k1369 
o|contracted procedure: k1403 
o|contracted procedure: k1406 
o|contracted procedure: k1413 
o|contracted procedure: k1419 
o|contracted procedure: k1422 
o|contracted procedure: k1429 
o|contracted procedure: k1435 
o|contracted procedure: k1441 
o|contracted procedure: k1447 
o|contracted procedure: k1450 
o|contracted procedure: k1458 
o|contracted procedure: k1907 
o|contracted procedure: k1464 
o|contracted procedure: k1592 
o|contracted procedure: k1484 
o|contracted procedure: k1525 
o|contracted procedure: k1521 
o|contracted procedure: k1493 
o|contracted procedure: k1505 
o|contracted procedure: k1512 
o|contracted procedure: k1499 
o|contracted procedure: k1528 
o|contracted procedure: k1534 
o|contracted procedure: k1550 
o|contracted procedure: k1546 
o|contracted procedure: k1564 
o|contracted procedure: k1575 
o|contracted procedure: k1583 
o|contracted procedure: k1596 
o|contracted procedure: k1602 
o|contracted procedure: k1610 
o|contracted procedure: k1826 
o|contracted procedure: k1616 
o|contracted procedure: k1623 
o|contracted procedure: k1698 
o|contracted procedure: k1631 
o|contracted procedure: k1689 
o|contracted procedure: k1638 
o|contracted procedure: k1682 
o|contracted procedure: k1678 
o|contracted procedure: k1644 
o|contracted procedure: k1669 
o|contracted procedure: k1665 
o|contracted procedure: k1647 
o|contracted procedure: k1653 
o|inlining procedure: k1635 
o|inlining procedure: k1635 
o|contracted procedure: k1815 
o|contracted procedure: k1707 
o|contracted procedure: k1748 
o|contracted procedure: k1744 
o|contracted procedure: k1716 
o|contracted procedure: k1728 
o|contracted procedure: k1735 
o|contracted procedure: k1722 
o|contracted procedure: k1751 
o|contracted procedure: k1757 
o|contracted procedure: k1773 
o|contracted procedure: k1769 
o|contracted procedure: k1787 
o|contracted procedure: k1798 
o|contracted procedure: k1806 
o|contracted procedure: k1832 
o|contracted procedure: k1895 
o|contracted procedure: k1840 
o|contracted procedure: k1867 
o|contracted procedure: k1849 
o|contracted procedure: k1855 
o|contracted procedure: k1892 
o|contracted procedure: k1876 
o|contracted procedure: k1888 
o|contracted procedure: k1916 
o|contracted procedure: k1926 
o|contracted procedure: k1930 
o|contracted procedure: k1938 
o|contracted procedure: k1950 
o|contracted procedure: k1960 
o|contracted procedure: k1964 
o|contracted procedure: k2011 
o|contracted procedure: k2049 
o|contracted procedure: k2061 
o|contracted procedure: k2071 
o|contracted procedure: k2075 
o|contracted procedure: k2046 
o|simplifications: ((let . 31)) 
o|removed binding forms: 156 
o|inlining procedure: k1627 
o|inlining procedure: k1627 
o|inlining procedure: k1627 
o|inlining procedure: k1627 
o|replaced variables: 51 
o|removed binding forms: 1 
o|replaced variables: 4 
o|removed binding forms: 16 
o|removed binding forms: 1 
o|customizable procedures: (for-each-loop415436 g390397 for-each-loop389407 g279286 for-each-loop278296 g369370 k1846 g328329 k1781 k1713 g307308 k1558 k1490 extinguish!106 assigned?103 k1330 k1228 walk108 k1146 loop208 report102 g173180 for-each-loop172183 droppable?104 drop!105) 
o|calls to known targets: 65 
o|identified direct recursive calls: f_1174 4 
o|fast box initializations: 11 
o|dropping unused closure argument: f_986 
*/
/* end of file */
