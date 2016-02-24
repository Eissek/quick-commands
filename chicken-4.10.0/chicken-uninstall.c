/* Generated from chicken-uninstall.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:02
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: chicken-uninstall.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -local -no-trace -output-file chicken-uninstall.c
   used units: library eval chicken_2dsyntax srfi_2d1 posix data_2dstructures utils ports irregex srfi_2d13 files
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
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d13_toplevel)
C_externimport void C_ccall C_srfi_2d13_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[76];
static double C_possibly_force_alignment;


C_noret_decl(f_774)
static void C_ccall f_774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_776)
static void C_fcall f_776(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_852)
static void C_ccall f_852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1213)
static void C_ccall f_1213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f1496)
static void C_ccall f1496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f1491)
static void C_ccall f1491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1116)
static void C_ccall f_1116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1220)
static void C_ccall f_1220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1106)
static void C_fcall f_1106(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1202)
static void C_fcall f_1202(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1020)
static void C_ccall f_1020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1029)
static void C_ccall f_1029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_705)
static void C_ccall f_705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_709)
static void C_fcall f_709(C_word t0) C_noret;
C_noret_decl(f_1015)
static void C_ccall f_1015(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_668)
static void C_ccall f_668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_701)
static void C_ccall f_701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1064)
static void C_fcall f_1064(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1059)
static void C_ccall f_1059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_994)
static void C_ccall f_994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1074)
static void C_ccall f_1074(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1301)
static void C_ccall f_1301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1308)
static void C_ccall f_1308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_680)
static void C_ccall f_680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_683)
static void C_ccall f_683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_727)
static void C_ccall f_727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_686)
static void C_ccall f_686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_689)
static void C_ccall f_689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_723)
static void C_ccall f_723(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_671)
static void C_ccall f_671(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1286)
static void C_fcall f_1286(C_word t0,C_word t1) C_noret;
C_noret_decl(f_674)
static void C_ccall f_674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_677)
static void C_ccall f_677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1180)
static void C_ccall f_1180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_896)
static void C_ccall f_896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_890)
static void C_ccall f_890(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1320)
static void C_ccall f_1320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1324)
static void C_fcall f_1324(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f1503)
static void C_ccall f1503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_698)
static void C_ccall f_698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_695)
static void C_ccall f_695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_692)
static void C_ccall f_692(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f1508)
static void C_ccall f1508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1275)
static void C_ccall f_1275(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1421)
static void C_ccall f_1421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_972)
static void C_ccall f_972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_977)
static void C_fcall f_977(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1411)
static void C_ccall f_1411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1417)
static void C_ccall f_1417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1414)
static void C_ccall f_1414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_921)
static void C_ccall f_921(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_929)
static void C_ccall f_929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_925)
static void C_ccall f_925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1151)
static void C_fcall f_1151(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_884)
static void C_ccall f_884(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_911)
static void C_ccall f_911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_913)
static void C_fcall f_913(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1000)
static void C_ccall f_1000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1362)
static void C_ccall f_1362(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_870)
static void C_ccall f_870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_879)
static void C_ccall f_879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_941)
static void C_ccall f_941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_943)
static void C_fcall f_943(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_748)
static void C_ccall f_748(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1370)
static void C_ccall f_1370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_823)
static void C_fcall f_823(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1295)
static void C_ccall f_1295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_739)
static void C_ccall f_739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_733)
static void C_ccall f_733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_736)
static void C_ccall f_736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_817)
static void C_ccall f_817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1136)
static void C_ccall f_1136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_767)
static void C_ccall f_767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_764)
static void C_ccall f_764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1123)
static void C_ccall f_1123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1125)
static void C_fcall f_1125(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_754)
static void C_ccall f_754(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1047)
static void C_ccall f_1047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1049)
static void C_ccall f_1049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_983)
static void C_ccall f_983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_786)
static void C_ccall f_786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_788)
static void C_fcall f_788(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1034)
static void C_ccall f_1034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1039)
static void C_ccall f_1039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_860)
static void C_ccall f_860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_864)
static void C_ccall f_864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1140)
static void C_ccall f_1140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1149)
static void C_ccall f_1149(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_776)
static void C_fcall trf_776(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_776(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_776(t0,t1,t2);}

C_noret_decl(trf_1106)
static void C_fcall trf_1106(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1106(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1106(t0,t1,t2,t3);}

C_noret_decl(trf_1202)
static void C_fcall trf_1202(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1202(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1202(t0,t1);}

C_noret_decl(trf_709)
static void C_fcall trf_709(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_709(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_709(t0);}

C_noret_decl(trf_1064)
static void C_fcall trf_1064(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1064(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1064(t0,t1,t2);}

C_noret_decl(trf_1286)
static void C_fcall trf_1286(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1286(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1286(t0,t1);}

C_noret_decl(trf_1324)
static void C_fcall trf_1324(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1324(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1324(t0,t1,t2);}

C_noret_decl(trf_977)
static void C_fcall trf_977(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_977(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_977(t0,t1,t2);}

C_noret_decl(trf_1151)
static void C_fcall trf_1151(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1151(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1151(t0,t1,t2);}

C_noret_decl(trf_913)
static void C_fcall trf_913(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_913(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_913(t0,t1);}

C_noret_decl(trf_943)
static void C_fcall trf_943(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_943(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_943(t0,t1,t2);}

C_noret_decl(trf_823)
static void C_fcall trf_823(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_823(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_823(t0,t1,t2);}

C_noret_decl(trf_1125)
static void C_fcall trf_1125(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1125(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1125(t0,t1,t2);}

C_noret_decl(trf_788)
static void C_fcall trf_788(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_788(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_788(t0,t1,t2);}

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

/* k772 in k765 in k762 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:58: delete-duplicates */
t2=C_fast_retrieve(lf[42]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[43]+1));}

/* g217 in k765 in k762 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_fcall f_776(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_776,NULL,3,t0,t1,t2);}
t3=C_retrieve2(lf[13],"main#grep");
/* chicken-uninstall.scm:60: g234 */
t4=C_retrieve2(lf[13],"main#grep");
f_748(4,t4,t1,t2,((C_word*)t0)[2]);}

/* k850 in map-loop185 in k762 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_852(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_852,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_823(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_823(t6,((C_word*)t0)[5],t5);}}

/* k1211 in k1200 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_1213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:134: exit */
t2=C_fast_retrieve(lf[23]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* f1496 in k1200 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f1496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:109: exit */
t2=C_fast_retrieve(lf[23]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* f1491 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f1491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:109: exit */
t2=C_fast_retrieve(lf[23]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_1116(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1116,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1123,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1125,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t8=((C_word*)t0)[4];
t9=C_i_check_list_2(t8,lf[32]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1149,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1151,a[2]=t6,a[3]=t12,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_1151(t14,t10,t8);}

/* k1218 in k1200 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_1220(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:133: print */
t2=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_fcall f_1106(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1106,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1116,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f1491,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:97: print */
t7=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,lf[54]);}
else{
t5=t4;
f_1116(2,t5,C_SCHEME_UNDEFINED);}}
else{
t4=C_i_car(t2);
t5=t4;
t6=C_i_string_equal_p(t5,lf[55]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1202,a[2]=t1,a[3]=t5,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=t3,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t6)){
t8=t7;
f_1202(t8,t6);}
else{
t8=C_u_i_string_equal_p(t5,lf[69]);
if(C_truep(t8)){
t9=t7;
f_1202(t9,t8);}
else{
t9=C_u_i_string_equal_p(t5,lf[70]);
t10=t7;
f_1202(t10,t9);}}}}

/* k1200 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_fcall f_1202(C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1202,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f1496,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:97: print */
t4=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[54]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[56]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1213,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1220,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:133: chicken-version */
t4=C_fast_retrieve(lf[57]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[58]))){
t2=lf[1] /* main#*host-extensions* */ =C_SCHEME_FALSE;;
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* chicken-uninstall.scm:137: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1106(t5,((C_word*)t0)[2],t4,((C_word*)t0)[6]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[59]))){
t2=lf[2] /* main#*target-extensions* */ =C_SCHEME_FALSE;;
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* chicken-uninstall.scm:140: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1106(t5,((C_word*)t0)[2],t4,((C_word*)t0)[6]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[60]))){
t2=lf[12] /* main#*force* */ =C_SCHEME_TRUE;;
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* chicken-uninstall.scm:143: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1106(t5,((C_word*)t0)[2],t4,((C_word*)t0)[6]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[61]))){
t2=C_set_block_item(((C_word*)t0)[7],0,C_SCHEME_TRUE);
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* chicken-uninstall.scm:146: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1106(t5,((C_word*)t0)[2],t4,((C_word*)t0)[6]);}
else{
t2=C_u_i_string_equal_p(((C_word*)t0)[3],lf[62]);
t3=(C_truep(t2)?t2:C_u_i_string_equal_p(((C_word*)t0)[3],lf[63]));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1275,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* chicken-uninstall.scm:148: setup-api#sudo-install */
((C_proc3)C_fast_retrieve_symbol_proc(lf[64]))(3,*((C_word*)lf[64]+1),t4,C_SCHEME_TRUE);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1286,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=C_block_size(((C_word*)t0)[3]);
if(C_truep(C_fixnum_greaterp(t5,C_fix(0)))){
t6=C_subchar(((C_word*)t0)[3],C_fix(0));
t7=t4;
f_1286(t7,C_i_char_equalp(C_make_character(45),t6));}
else{
t6=t4;
f_1286(t6,C_SCHEME_FALSE);}}}}}}}}}

/* k1018 in for-each-loop303 in k1013 in k998 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_1020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1020,2,t0,t1);}
t2=(C_truep(C_retrieve2(lf[1],"main#\052host-extensions\052"))?C_retrieve2(lf[2],"main#\052target-extensions\052"):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1029,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:90: setup-api#remove-extension */
((C_proc3)C_fast_retrieve_symbol_proc(lf[19]))(3,*((C_word*)lf[19]+1),t3,((C_word*)t0)[2]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1059,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:93: repo-path */
f_709(t3);}}

/* k1027 in k1018 in for-each-loop303 in k1013 in k998 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 in ... */
static void C_ccall f_1029(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1029,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1034,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1039,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1049,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:91: ##sys#dynamic-wind */
t9=*((C_word*)lf[20]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[3],t6,t7,t8);}

/* k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_705(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_705,2,t0,t1);}
t2=C_mutate2(&lf[0] /* (set! main#*cross-chicken* ...) */,t1);
t3=C_mutate2(&lf[1] /* (set! main#*host-extensions* ...) */,C_retrieve2(lf[0],"main#\052cross-chicken\052"));
t4=C_mutate2(&lf[2] /* (set! main#*target-extensions* ...) */,C_retrieve2(lf[0],"main#\052cross-chicken\052"));
t5=C_mutate2(&lf[3] /* (set! main#repo-path ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_709,tmp=(C_word)a,a+=2,tmp));
t6=lf[12] /* main#*force* */ =C_SCHEME_FALSE;;
t7=C_mutate2(&lf[13] /* (set! main#grep ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_748,tmp=(C_word)a,a+=2,tmp));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1411,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1421,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:161: command-line-arguments */
t10=C_fast_retrieve(lf[71]);
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}

/* main#repo-path in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_fcall f_709(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_709,NULL,1,t1);}
t2=(C_truep(C_retrieve2(lf[0],"main#\052cross-chicken\052"))?C_i_not(C_retrieve2(lf[1],"main#\052host-extensions\052")):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_723,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_TARGET_LIB_HOME),C_fix(0));}
else{
/* chicken-uninstall.scm:48: repository-path */
t3=C_fast_retrieve(lf[11]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* k1013 in k998 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_1015(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1015,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1064,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_1064(t5,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k666 */
static void C_ccall f_668(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_668,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_671,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_701,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_705,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:41: feature? */
t3=C_fast_retrieve(lf[72]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[73]);}

/* for-each-loop303 in k1013 in k998 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_fcall f_1064(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_1064,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1074,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1020,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:88: print */
t8=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,lf[21],t6);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1057 in k1018 in for-each-loop303 in k1013 in k998 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 in ... */
static void C_ccall f_1059(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:93: setup-api#remove-extension */
((C_proc4)C_fast_retrieve_symbol_proc(lf[19]))(4,*((C_word*)lf[19]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k992 in a910 in a883 in k998 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_994,2,t0,t1);}
/* tmp2651 */
t2=((C_word*)t0)[2];
f_977(t2,((C_word*)t0)[3],C_a_i_list(&a,1,t1));}

/* k1072 in for-each-loop303 in k1013 in k998 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_1074(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1064(t3,((C_word*)t0)[4],t2);}

/* k1299 in k1293 in k1284 in k1200 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_1301(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1301,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1308,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(((C_word*)t0)[5],lf[32]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1320,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1324,a[2]=t6,a[3]=t10,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_1324(t12,t8,((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[3];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f1503,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:97: print */
t4=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[54]);}}

/* k1306 in k1299 in k1293 in k1284 in k1200 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_1308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:155: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1106(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_680,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_683,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_683,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_686,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k725 in k721 in main#repo-path in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_727(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_727,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[4]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_733,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-uninstall.scm:47: ##sys#print */
t6=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[8],C_SCHEME_FALSE,t3);}

/* k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_686(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_686,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_689,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_689,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_692,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_irregex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k721 in main#repo-path in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_723(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_723,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_727,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:47: open-output-string */
t4=C_fast_retrieve(lf[9]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k669 in k666 */
static void C_ccall f_671(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_671,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_674,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_chicken_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1284 in k1200 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_fcall f_1286(C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1286,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_block_size(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(2)))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1295,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1370,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:153: substring */
t5=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],C_fix(1));}
else{
t3=((C_word*)t0)[4];
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f1508,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:97: print */
t5=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[54]);}}
else{
t2=((C_word*)t0)[6];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[5]);
/* chicken-uninstall.scm:159: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1106(t5,((C_word*)t0)[4],t3,t4);}}

/* k672 in k669 in k666 */
static void C_ccall f_674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_674,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_677,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d1_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k675 in k672 in k669 in k666 */
static void C_ccall f_677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_677,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_680,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_posix_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1178 in map-loop352 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_1180(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1180,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1151(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1151(t6,((C_word*)t0)[5],t5);}}

/* a895 in a889 in a883 in k998 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_896,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[2],lf[22]);
if(C_truep(t2)){
t3=t1;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_870,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:64: print */
t5=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[24]);}
else{
/* chicken-uninstall.scm:71: signal */
t3=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,((C_word*)t0)[2]);}}

/* a889 in a883 in k998 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_890(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_890,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_896,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:67: k248 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* k1318 in k1299 in k1293 in k1284 in k1200 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_1320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* chicken-uninstall.scm:156: append */
t4=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[3],t1,t3);}

/* map-loop410 in k1299 in k1293 in k1284 in k1200 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_fcall f_1324(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_1324,NULL,3,t0,t1,t2);}
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

/* f1503 in k1299 in k1293 in k1284 in k1200 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f1503(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:109: exit */
t2=C_fast_retrieve(lf[23]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_698,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_701,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:27: ##sys#require */
((C_proc3)C_fast_retrieve_symbol_proc(lf[74]))(3,*((C_word*)lf[74]+1),t2,lf[75]);}

/* k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_695,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_698,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_692(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_692,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_695,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d13_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* f1508 in k1284 in k1200 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f1508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:109: exit */
t2=C_fast_retrieve(lf[23]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* k1273 in k1200 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_1275(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* chicken-uninstall.scm:149: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1106(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5]);}

/* k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_1421(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1421,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1106,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_1106(t7,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k970 in map-loop258 in tmp1650 in a910 in a883 in k998 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in ... */
static void C_ccall f_972(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_972,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_943(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_943(t6,((C_word*)t0)[5],t5);}}

/* tmp2651 in a910 in a883 in k998 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_fcall f_977(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_977,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_983,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:67: k248 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* k1409 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_1411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1411,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1414,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1417,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
((C_proc2)C_fast_retrieve_symbol_proc(lf[16]))(2,*((C_word*)lf[16]+1),t3);}

/* k1415 in k1409 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_1417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k1412 in k1409 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_1414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* k919 in tmp1650 in a910 in a883 in k998 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 in ... */
static void C_ccall f_921(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_921,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_925,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:79: setup-api#abort-setup */
((C_proc2)C_fast_retrieve_symbol_proc(lf[30]))(2,*((C_word*)lf[30]+1),t3);}

/* k927 in tmp1650 in a910 in a883 in k998 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 in ... */
static void C_ccall f_929(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:73: string-concatenate */
t2=C_fast_retrieve(lf[31]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k923 in k919 in tmp1650 in a910 in a883 in k998 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in ... */
static void C_ccall f_925(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:72: yes-or-no? */
t2=C_fast_retrieve(lf[26]);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[27],lf[28],lf[29],t1);}

/* map-loop352 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_fcall f_1151(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1151,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1180,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-uninstall.scm:120: g358 */
t5=((C_word*)t0)[5];
f_1125(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* a883 in k998 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_884(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_884,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_890,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_911,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:67: with-exception-handler */
t5=C_fast_retrieve(lf[39]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* a910 in a883 in k998 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_911,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_913,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_977,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_994,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tmp1650 */
t5=t2;
f_913(t5,t4);}

/* tmp1650 in a910 in a883 in k998 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_fcall f_913(C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_913,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_921,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_929,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_i_check_list_2(((C_word*)t0)[2],lf[32]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_941,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_943,a[2]=t7,a[3]=t11,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_943(t13,t9,((C_word*)t0)[2]);}

/* k998 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_1000(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1000,2,t0,t1);}
t2=t1;
if(C_truep(C_i_nullp(t2))){
/* chicken-uninstall.scm:84: print */
t3=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],lf[18]);}
else{
t3=C_retrieve2(lf[12],"main#\052force\052");
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1015,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[12],"main#\052force\052"))){
t5=t4;
f_1015(2,t5,C_retrieve2(lf[12],"main#\052force\052"));}
else{
t5=t4;
t6=t2;
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_879,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_884,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:67: call-with-current-continuation */
t9=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t7,t8);}}}

/* a1361 in k1293 in k1284 in k1200 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_1362(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1362,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_memq(t2,lf[65]));}

/* k868 in a895 in a889 in a883 in k998 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 in ... */
static void C_ccall f_870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:65: exit */
t2=C_fast_retrieve(lf[23]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* k877 in k998 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:67: g252 */
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k939 in tmp1650 in a910 in a883 in k998 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 in ... */
static void C_ccall f_941(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:74: append */
t2=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[34],t1,lf[35]);}

/* map-loop258 in tmp1650 in a910 in a883 in k998 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 in ... */
static void C_fcall f_943(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_943,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_972,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-uninstall.scm:76: g281 */
t5=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,lf[37],t4,lf[38]);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* main#grep in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_748(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_748,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_754,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:53: filter */
t5=C_fast_retrieve(lf[15]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t4,t3);}

/* k1368 in k1284 in k1200 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_1370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* string->list */
t2=C_fast_retrieve(lf[67]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* map-loop185 in k762 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_fcall f_823(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_823,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_852,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-uninstall.scm:56: g191 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1293 in k1284 in k1200 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_1295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1295,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1301,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1362,tmp=(C_word)a,a+=2,tmp);
/* chicken-uninstall.scm:154: every */
t5=C_fast_retrieve(lf[66]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,t2);}

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
if(!C_demand_2(462)){
C_save(t1);
C_rereclaim2(462*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,76);
lf[4]=C_h_intern(&lf[4],7,"sprintf");
lf[5]=C_h_intern(&lf[5],13,"make-pathname");
lf[6]=C_h_intern(&lf[6],17,"get-output-string");
lf[7]=C_h_intern(&lf[7],9,"\003sysprint");
lf[8]=C_decode_literal(C_heaptop,"\376B\000\000\010chicken/");
lf[9]=C_h_intern(&lf[9],18,"open-output-string");
lf[10]=C_h_intern(&lf[10],17,"\003syspeek-c-string");
lf[11]=C_h_intern(&lf[11],15,"repository-path");
lf[14]=C_h_intern(&lf[14],14,"irregex-search");
lf[15]=C_h_intern(&lf[15],6,"filter");
lf[16]=C_h_intern(&lf[16],25,"\003sysimplicit-exit-handler");
lf[17]=C_h_intern(&lf[17],5,"print");
lf[18]=C_decode_literal(C_heaptop,"\376B\000\000\022nothing to remove.");
lf[19]=C_h_intern(&lf[19],26,"setup-api#remove-extension");
lf[20]=C_h_intern(&lf[20],16,"\003sysdynamic-wind");
lf[21]=C_decode_literal(C_heaptop,"\376B\000\000\011removing ");
lf[22]=C_h_intern(&lf[22],7,"aborted");
lf[23]=C_h_intern(&lf[23],4,"exit");
lf[24]=C_decode_literal(C_heaptop,"\376B\000\000\010aborted.");
lf[25]=C_h_intern(&lf[25],6,"signal");
lf[26]=C_h_intern(&lf[26],10,"yes-or-no\077");
lf[27]=C_h_intern(&lf[27],8,"\000default");
lf[28]=C_decode_literal(C_heaptop,"\376B\000\000\002no");
lf[29]=C_h_intern(&lf[29],6,"\000abort");
lf[30]=C_h_intern(&lf[30],21,"setup-api#abort-setup");
lf[31]=C_h_intern(&lf[31],18,"string-concatenate");
lf[32]=C_h_intern(&lf[32],3,"map");
lf[33]=C_h_intern(&lf[33],6,"append");
lf[34]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000+About to delete the following extensions:\012\012\376\377\016");
lf[35]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\030\012Do you want to proceed\077\376\377\016");
lf[36]=C_h_intern(&lf[36],13,"string-append");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[39]=C_h_intern(&lf[39],22,"with-exception-handler");
lf[40]=C_h_intern(&lf[40],30,"call-with-current-continuation");
lf[41]=C_h_intern(&lf[41],13,"pathname-file");
lf[42]=C_h_intern(&lf[42],17,"delete-duplicates");
lf[43]=C_h_intern(&lf[43],8,"string=\077");
lf[44]=C_h_intern(&lf[44],11,"concatenate");
lf[45]=C_h_intern(&lf[45],4,"glob");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\012setup-info");
lf[48]=C_h_intern(&lf[48],7,"irregex");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\001^");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\001$");
lf[51]=C_h_intern(&lf[51],13,"irregex-quote");
lf[52]=C_h_intern(&lf[52],16,"\003sysglob->regexp");
lf[53]=C_h_intern(&lf[53],7,"reverse");
lf[54]=C_decode_literal(C_heaptop,"\376B\000\002\034usage: chicken-uninstall [OPTION | PATTERN] ...\012\012  -h   -help              "
"      show this message and exit\012       -version                 show version an"
"d exit\012       -force                   don\047t ask, delete whatever matches\012      "
" -exact                   treat PATTERN as exact match (not a pattern)\012  -s   -s"
"udo                    use sudo(1) for deleting files\012       -host              "
"      when cross-compiling, uninstall host extensions only\012       -target       "
"           when cross-compiling, uninstall target extensions only");
lf[55]=C_decode_literal(C_heaptop,"\376B\000\000\005-help");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\000\010-version");
lf[57]=C_h_intern(&lf[57],15,"chicken-version");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\007-target");
lf[59]=C_decode_literal(C_heaptop,"\376B\000\000\005-host");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\000\006-force");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000\006-exact");
lf[62]=C_decode_literal(C_heaptop,"\376B\000\000\002-s");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\005-sudo");
lf[64]=C_h_intern(&lf[64],22,"setup-api#sudo-install");
lf[65]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000h\376\003\000\000\002\376\377\012\000\000s\376\377\016");
lf[66]=C_h_intern(&lf[66],5,"every");
lf[67]=C_h_intern(&lf[67],16,"\003sysstring->list");
lf[68]=C_h_intern(&lf[68],9,"substring");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\002-h");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000\006--help");
lf[71]=C_h_intern(&lf[71],22,"command-line-arguments");
lf[72]=C_h_intern(&lf[72],8,"feature\077");
lf[73]=C_h_intern(&lf[73],14,"\000cross-chicken");
lf[74]=C_h_intern(&lf[74],11,"\003sysrequire");
lf[75]=C_h_intern(&lf[75],9,"setup-api");
C_register_lf2(lf,76,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_668,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k737 in k734 in k731 in k725 in k721 in main#repo-path in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:47: make-pathname */
t2=C_fast_retrieve(lf[5]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k731 in k725 in k721 in main#repo-path in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_733(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_733,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_736,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-uninstall.scm:47: ##sys#print */
t3=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,C_fix((C_word)C_BINARY_VERSION),C_SCHEME_FALSE,((C_word*)t0)[5]);}

/* k734 in k731 in k725 in k721 in main#repo-path in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_736,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_739,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:47: get-output-string */
t3=C_fast_retrieve(lf[6]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k815 in map-loop211 in k765 in k762 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_817(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_817,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_788(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_788(t6,((C_word*)t0)[5],t5);}}

/* k1134 in g358 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_1136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:123: irregex */
t2=C_fast_retrieve(lf[48]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k765 in k762 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_767(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_767,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_774,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_776,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t9=C_i_check_list_2(((C_word*)t0)[3],lf[32]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_786,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_788,a[2]=t7,a[3]=t12,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_788(t14,t10,((C_word*)t0)[3]);}

/* k762 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_764(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_764,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_767,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_823,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_823(t6,t2,t1);}

/* k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_1123(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1123,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1000,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=t3;
t5=t1;
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_fast_retrieve(lf[41]);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_764,a[2]=t4,a[3]=t5,a[4]=t9,a[5]=t7,a[6]=t10,tmp=(C_word)a,a+=7,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_860,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_864,a[2]=t12,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:57: repo-path */
f_709(t13);}

/* g358 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_fcall f_1125(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1125,NULL,3,t0,t1,t2);}
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1136,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1140,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:123: irregex-quote */
t5=C_fast_retrieve(lf[51]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
/* chicken-uninstall.scm:124: ##sys#glob->regexp */
((C_proc3)C_fast_retrieve_symbol_proc(lf[52]))(3,*((C_word*)lf[52]+1),t1,t2);}}

/* a753 in main#grep in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_754(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_754,3,t0,t1,t2);}
t3=C_fast_retrieve(lf[14]);
/* chicken-uninstall.scm:53: g178 */
t4=C_fast_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,((C_word*)t0)[2],t2);}

/* k1045 in a1038 in k1027 in k1018 in for-each-loop303 in k1013 in k998 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in ... */
static void C_ccall f_1047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:92: setup-api#remove-extension */
((C_proc4)C_fast_retrieve_symbol_proc(lf[19]))(4,*((C_word*)lf[19]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* a1048 in k1027 in k1018 in for-each-loop303 in k1013 in k998 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in ... */
static void C_ccall f_1049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1049,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[1],"main#\052host-extensions\052"));
t3=C_mutate2(&lf[1] /* (set! main#*host-extensions* ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a982 in tmp2651 in a910 in a883 in k998 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 in ... */
static void C_ccall f_983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_983,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* k784 in k765 in k762 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:59: concatenate */
t2=C_fast_retrieve(lf[44]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* map-loop211 in k765 in k762 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_fcall f_788(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_788,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_817,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-uninstall.scm:60: g217 */
t5=((C_word*)t0)[5];
f_776(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* a1033 in k1027 in k1018 in for-each-loop303 in k1013 in k998 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in ... */
static void C_ccall f_1034(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1034,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[1],"main#\052host-extensions\052"));
t3=C_mutate2(&lf[1] /* (set! main#*host-extensions* ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a1038 in k1027 in k1018 in for-each-loop303 in k1013 in k998 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in ... */
static void C_ccall f_1039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1039,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1047,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:92: repo-path */
f_709(t2);}

/* k858 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_860(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:57: glob */
t2=C_fast_retrieve(lf[45]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k862 in k1121 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:57: make-pathname */
t2=C_fast_retrieve(lf[5]);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,lf[46],lf[47]);}

/* k1138 in g358 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_1140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:123: string-append */
t2=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[49],t1,lf[50]);}

/* k1147 in k1114 in loop in k1419 in k703 in k699 in k696 in k693 in k690 in k687 in k684 in k681 in k678 in k675 in k672 in k669 in k666 */
static void C_ccall f_1149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:119: reverse */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[90] = {
{"f_774:chicken_2duninstall_2escm",(void*)f_774},
{"f_776:chicken_2duninstall_2escm",(void*)f_776},
{"f_852:chicken_2duninstall_2escm",(void*)f_852},
{"f_1213:chicken_2duninstall_2escm",(void*)f_1213},
{"f1496:chicken_2duninstall_2escm",(void*)f1496},
{"f1491:chicken_2duninstall_2escm",(void*)f1491},
{"f_1116:chicken_2duninstall_2escm",(void*)f_1116},
{"f_1220:chicken_2duninstall_2escm",(void*)f_1220},
{"f_1106:chicken_2duninstall_2escm",(void*)f_1106},
{"f_1202:chicken_2duninstall_2escm",(void*)f_1202},
{"f_1020:chicken_2duninstall_2escm",(void*)f_1020},
{"f_1029:chicken_2duninstall_2escm",(void*)f_1029},
{"f_705:chicken_2duninstall_2escm",(void*)f_705},
{"f_709:chicken_2duninstall_2escm",(void*)f_709},
{"f_1015:chicken_2duninstall_2escm",(void*)f_1015},
{"f_668:chicken_2duninstall_2escm",(void*)f_668},
{"f_701:chicken_2duninstall_2escm",(void*)f_701},
{"f_1064:chicken_2duninstall_2escm",(void*)f_1064},
{"f_1059:chicken_2duninstall_2escm",(void*)f_1059},
{"f_994:chicken_2duninstall_2escm",(void*)f_994},
{"f_1074:chicken_2duninstall_2escm",(void*)f_1074},
{"f_1301:chicken_2duninstall_2escm",(void*)f_1301},
{"f_1308:chicken_2duninstall_2escm",(void*)f_1308},
{"f_680:chicken_2duninstall_2escm",(void*)f_680},
{"f_683:chicken_2duninstall_2escm",(void*)f_683},
{"f_727:chicken_2duninstall_2escm",(void*)f_727},
{"f_686:chicken_2duninstall_2escm",(void*)f_686},
{"f_689:chicken_2duninstall_2escm",(void*)f_689},
{"f_723:chicken_2duninstall_2escm",(void*)f_723},
{"f_671:chicken_2duninstall_2escm",(void*)f_671},
{"f_1286:chicken_2duninstall_2escm",(void*)f_1286},
{"f_674:chicken_2duninstall_2escm",(void*)f_674},
{"f_677:chicken_2duninstall_2escm",(void*)f_677},
{"f_1180:chicken_2duninstall_2escm",(void*)f_1180},
{"f_896:chicken_2duninstall_2escm",(void*)f_896},
{"f_890:chicken_2duninstall_2escm",(void*)f_890},
{"f_1320:chicken_2duninstall_2escm",(void*)f_1320},
{"f_1324:chicken_2duninstall_2escm",(void*)f_1324},
{"f1503:chicken_2duninstall_2escm",(void*)f1503},
{"f_698:chicken_2duninstall_2escm",(void*)f_698},
{"f_695:chicken_2duninstall_2escm",(void*)f_695},
{"f_692:chicken_2duninstall_2escm",(void*)f_692},
{"f1508:chicken_2duninstall_2escm",(void*)f1508},
{"f_1275:chicken_2duninstall_2escm",(void*)f_1275},
{"f_1421:chicken_2duninstall_2escm",(void*)f_1421},
{"f_972:chicken_2duninstall_2escm",(void*)f_972},
{"f_977:chicken_2duninstall_2escm",(void*)f_977},
{"f_1411:chicken_2duninstall_2escm",(void*)f_1411},
{"f_1417:chicken_2duninstall_2escm",(void*)f_1417},
{"f_1414:chicken_2duninstall_2escm",(void*)f_1414},
{"f_921:chicken_2duninstall_2escm",(void*)f_921},
{"f_929:chicken_2duninstall_2escm",(void*)f_929},
{"f_925:chicken_2duninstall_2escm",(void*)f_925},
{"f_1151:chicken_2duninstall_2escm",(void*)f_1151},
{"f_884:chicken_2duninstall_2escm",(void*)f_884},
{"f_911:chicken_2duninstall_2escm",(void*)f_911},
{"f_913:chicken_2duninstall_2escm",(void*)f_913},
{"f_1000:chicken_2duninstall_2escm",(void*)f_1000},
{"f_1362:chicken_2duninstall_2escm",(void*)f_1362},
{"f_870:chicken_2duninstall_2escm",(void*)f_870},
{"f_879:chicken_2duninstall_2escm",(void*)f_879},
{"f_941:chicken_2duninstall_2escm",(void*)f_941},
{"f_943:chicken_2duninstall_2escm",(void*)f_943},
{"f_748:chicken_2duninstall_2escm",(void*)f_748},
{"f_1370:chicken_2duninstall_2escm",(void*)f_1370},
{"f_823:chicken_2duninstall_2escm",(void*)f_823},
{"f_1295:chicken_2duninstall_2escm",(void*)f_1295},
{"toplevel:chicken_2duninstall_2escm",(void*)C_toplevel},
{"f_739:chicken_2duninstall_2escm",(void*)f_739},
{"f_733:chicken_2duninstall_2escm",(void*)f_733},
{"f_736:chicken_2duninstall_2escm",(void*)f_736},
{"f_817:chicken_2duninstall_2escm",(void*)f_817},
{"f_1136:chicken_2duninstall_2escm",(void*)f_1136},
{"f_767:chicken_2duninstall_2escm",(void*)f_767},
{"f_764:chicken_2duninstall_2escm",(void*)f_764},
{"f_1123:chicken_2duninstall_2escm",(void*)f_1123},
{"f_1125:chicken_2duninstall_2escm",(void*)f_1125},
{"f_754:chicken_2duninstall_2escm",(void*)f_754},
{"f_1047:chicken_2duninstall_2escm",(void*)f_1047},
{"f_1049:chicken_2duninstall_2escm",(void*)f_1049},
{"f_983:chicken_2duninstall_2escm",(void*)f_983},
{"f_786:chicken_2duninstall_2escm",(void*)f_786},
{"f_788:chicken_2duninstall_2escm",(void*)f_788},
{"f_1034:chicken_2duninstall_2escm",(void*)f_1034},
{"f_1039:chicken_2duninstall_2escm",(void*)f_1039},
{"f_860:chicken_2duninstall_2escm",(void*)f_860},
{"f_864:chicken_2duninstall_2escm",(void*)f_864},
{"f_1140:chicken_2duninstall_2escm",(void*)f_1140},
{"f_1149:chicken_2duninstall_2escm",(void*)f_1149},
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
o|hiding nonexported module bindings: main#*cross-chicken* 
o|hiding nonexported module bindings: main#*host-extensions* 
o|hiding nonexported module bindings: main#*target-extensions* 
o|hiding nonexported module bindings: main#repo-path 
o|hiding nonexported module bindings: main#*force* 
o|hiding nonexported module bindings: main#grep 
o|hiding nonexported module bindings: main#gather-eggs 
o|hiding nonexported module bindings: main#fini 
o|hiding nonexported module bindings: main#ask 
o|hiding nonexported module bindings: main#uninstall 
o|hiding nonexported module bindings: main#usage 
o|hiding nonexported module bindings: main#*short-options* 
o|hiding nonexported module bindings: main#main 
S|applied compiler syntax:
S|  for-each		1
S|  map		5
S|  sprintf		1
o|eliminated procedure checks: 22 
o|specializations:
o|  1 (> fixnum fixnum)
o|  1 (string-ref string fixnum)
o|  1 (positive? fixnum)
o|  2 (string-length string)
o|  7 (cdr pair)
o|  9 (string=? string string)
o|  1 (##sys#call-with-values (procedure () *) *)
o|  2 (##sys#check-list (or pair list) *)
o|  1 (##sys#check-output-port * * *)
o|inlining procedure: k711 
o|substituted constant variable: a729 
o|substituted constant variable: a730 
o|inlining procedure: k711 
o|propagated global variable: g178179 irregex-search 
o|contracted procedure: "(chicken-uninstall.scm:161) main#main" 
o|inlining procedure: k1108 
o|contracted procedure: "(chicken-uninstall.scm:118) main#uninstall" 
o|inlining procedure: k1001 
o|inlining procedure: k1001 
o|inlining procedure: k1066 
o|contracted procedure: "(chicken-uninstall.scm:86) g304311" 
o|inlining procedure: k1021 
o|inlining procedure: k1021 
o|inlining procedure: k1066 
o|propagated global variable: tmp298300 main#*force* 
o|propagated global variable: tmp298300 main#*force* 
o|contracted procedure: "(chicken-uninstall.scm:85) main#ask" 
o|inlining procedure: k898 
o|contracted procedure: "(chicken-uninstall.scm:70) main#fini" 
o|inlining procedure: k898 
o|inlining procedure: k945 
o|contracted procedure: "(chicken-uninstall.scm:76) g264273" 
o|inlining procedure: k945 
o|merged explicitly consed rest parameter: args249290 
o|consed rest parameter at call site: tmp2651 1 
o|contracted procedure: "(chicken-uninstall.scm:82) main#gather-eggs" 
o|inlining procedure: k790 
o|inlining procedure: k790 
o|inlining procedure: k825 
o|inlining procedure: k825 
o|inlining procedure: k1127 
o|inlining procedure: k1127 
o|inlining procedure: k1153 
o|inlining procedure: k1153 
o|inlining procedure: k1108 
o|substituted constant variable: a1210 
o|inlining procedure: k1206 
o|inlining procedure: k1206 
o|substituted constant variable: a1225 
o|substituted constant variable: a1236 
o|inlining procedure: k1232 
o|inlining procedure: k1232 
o|substituted constant variable: a1247 
o|substituted constant variable: a1258 
o|inlining procedure: k1254 
o|inlining procedure: k1254 
o|substituted constant variable: a1269 
o|inlining procedure: k1281 
o|inlining procedure: k1296 
o|inlining procedure: k1326 
o|contracted procedure: "(chicken-uninstall.scm:156) g416425" 
o|inlining procedure: k1326 
o|inlining procedure: k1296 
o|substituted constant variable: main#*short-options* 
o|substituted constant variable: a1378 
o|inlining procedure: k1281 
o|substituted constant variable: a1398 
o|substituted constant variable: a1401 
o|substituted constant variable: a1403 
o|inlining procedure: k1404 
o|inlining procedure: k1404 
o|substituted constant variable: a1408 
o|replaced variables: 136 
o|removed binding forms: 74 
o|removed side-effect free assignment to unused variable: main#*short-options* 
o|substituted constant variable: code244 
o|replaced variables: 1 
o|removed binding forms: 157 
o|inlining procedure: "(chicken-uninstall.scm:117) main#usage" 
o|inlining procedure: "(chicken-uninstall.scm:131) main#usage" 
o|inlining procedure: "(chicken-uninstall.scm:157) main#usage" 
o|inlining procedure: "(chicken-uninstall.scm:158) main#usage" 
o|replaced variables: 7 
o|removed binding forms: 3 
o|removed side-effect free assignment to unused variable: main#usage 
o|substituted constant variable: code3371489 
o|substituted constant variable: code3371494 
o|substituted constant variable: code3371501 
o|substituted constant variable: code3371506 
o|removed binding forms: 7 
o|removed binding forms: 5 
o|simplifications: ((if . 3) (##core#call . 48)) 
o|  call simplifications:
o|    car
o|    string=?
o|    char=?
o|    ##sys#size	2
o|    fx>
o|    string->list
o|    memq
o|    string
o|    null?	3
o|    ##sys#apply
o|    ##sys#check-list	4
o|    cons	6
o|    ##sys#setslot	5
o|    eq?
o|    pair?	6
o|    ##sys#slot	12
o|    not
o|contracted procedure: k714 
o|contracted procedure: k1111 
o|contracted procedure: k1004 
o|contracted procedure: k1069 
o|contracted procedure: k1079 
o|contracted procedure: k1083 
o|contracted procedure: k1024 
o|contracted procedure: k901 
o|contracted procedure: k936 
o|contracted procedure: k948 
o|contracted procedure: k951 
o|contracted procedure: k962 
o|contracted procedure: k974 
o|contracted procedure: k781 
o|contracted procedure: k793 
o|contracted procedure: k796 
o|contracted procedure: k807 
o|contracted procedure: k819 
o|contracted procedure: k828 
o|contracted procedure: k831 
o|contracted procedure: k842 
o|contracted procedure: k854 
o|contracted procedure: k1144 
o|contracted procedure: k1156 
o|contracted procedure: k1159 
o|contracted procedure: k1170 
o|contracted procedure: k1182 
o|contracted procedure: k1185 
o|contracted procedure: k1191 
o|contracted procedure: k1197 
o|contracted procedure: k1270 
o|contracted procedure: k1375 
o|contracted procedure: k1290 
o|contracted procedure: k1315 
o|contracted procedure: k1329 
o|contracted procedure: k1355 
o|contracted procedure: k1351 
o|contracted procedure: k1332 
o|contracted procedure: k1343 
o|contracted procedure: k1386 
o|contracted procedure: k1390 
o|simplifications: ((let . 10)) 
o|removed binding forms: 41 
o|inlining procedure: k954 
o|inlining procedure: k954 
o|inlining procedure: k799 
o|inlining procedure: k799 
o|inlining procedure: k834 
o|inlining procedure: k834 
o|inlining procedure: k1162 
o|inlining procedure: k1162 
o|inlining procedure: k1335 
o|inlining procedure: k1335 
o|replaced variables: 6 
o|removed binding forms: 13 
o|replaced variables: 20 
o|removed binding forms: 5 
o|customizable procedures: (k1200 k1284 map-loop410435 loop343 g358367 map-loop352370 map-loop185202 g217226 map-loop211236 tmp1650 tmp2651 map-loop258283 main#repo-path for-each-loop303331) 
o|calls to known targets: 40 
o|identified direct recursive calls: f_1324 2 
o|fast box initializations: 7 
o|fast global references: 16 
o|fast global assignments: 11 
o|dropping unused closure argument: f_709 
*/
/* end of file */
