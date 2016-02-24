/* Generated from chicken-status.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:02
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: chicken-status.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -local -no-trace -output-file chicken-status.c
   used units: library eval chicken_2dsyntax srfi_2d1 posix data_2dstructures utils ports irregex files
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
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[93];
static double C_possibly_force_alignment;


C_noret_decl(f_1693)
static void C_ccall f_1693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1403)
static void C_ccall f_1403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1406)
static void C_ccall f_1406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1891)
static void C_ccall f_1891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1474)
static void C_ccall f_1474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1479)
static void C_fcall f_1479(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1174)
static void C_ccall f_1174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1883)
static void C_ccall f_1883(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1466)
static void C_fcall f_1466(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1469)
static void C_ccall f_1469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1163)
static void C_ccall f_1163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1160)
static void C_ccall f_1160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1453)
static void C_fcall f_1453(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_849)
static void C_ccall f_849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_843)
static void C_ccall f_843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_846)
static void C_ccall f_846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_840)
static void C_ccall f_840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1106)
static void C_ccall f_1106(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_857)
static void C_fcall f_857(C_word t0) C_noret;
C_noret_decl(f_853)
static void C_ccall f_853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_828)
static void C_ccall f_828(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_825)
static void C_ccall f_825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_822)
static void C_ccall f_822(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1495)
static void C_ccall f_1495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1019)
static void C_fcall f_1019(C_word t0,C_word t1) C_noret;
C_noret_decl(f_837)
static void C_ccall f_837(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_834)
static void C_ccall f_834(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_831)
static void C_ccall f_831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1489)
static void C_ccall f_1489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1483)
static void C_ccall f_1483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1937)
static void C_ccall f_1937(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1934)
static void C_ccall f_1934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_819)
static void C_ccall f_819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1330)
static void C_ccall f_1330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1544)
static void C_ccall f_1544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1209)
static void C_ccall f_1209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1205)
static void C_ccall f_1205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1320)
static void C_fcall f_1320(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_887)
static void C_ccall f_887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_881)
static void C_ccall f_881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1237)
static void C_ccall f_1237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_884)
static void C_ccall f_884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1600)
static void C_ccall f_1600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1081)
static void C_ccall f_1081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1087)
static void C_fcall f_1087(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1233)
static void C_ccall f_1233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1085)
static void C_ccall f_1085(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1007)
static void C_ccall f_1007(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_895)
static void C_ccall f_895(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1218)
static void C_ccall f_1218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1213)
static void C_ccall f_1213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_984)
static void C_ccall f_984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_988)
static void C_ccall f_988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_871)
static void C_ccall f_871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_875)
static void C_ccall f_875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1347)
static void C_ccall f_1347(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1345)
static void C_ccall f_1345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1240)
static void C_ccall f_1240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1248)
static void C_fcall f_1248(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_995)
static void C_ccall f_995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_997)
static void C_fcall f_997(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1944)
static void C_ccall f_1944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1940)
static void C_ccall f_1940(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1641)
static void C_ccall f_1641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1311)
static void C_ccall f_1311(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1277)
static void C_ccall f_1277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1711)
static void C_fcall f_1711(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1279)
static void C_ccall f_1279(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1039)
static void C_ccall f_1039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1035)
static void C_fcall f_1035(C_word t0) C_noret;
C_noret_decl(f_1361)
static void C_ccall f_1361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1315)
static void C_ccall f_1315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1226)
static void C_ccall f_1226(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1365)
static void C_ccall f_1365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_932)
static void C_fcall f_932(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_930)
static void C_ccall f_930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_907)
static void C_ccall f_907(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1388)
static void C_ccall f_1388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_901)
static void C_ccall f_901(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1384)
static void C_ccall f_1384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1258)
static void C_ccall f_1258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1288)
static void C_fcall f_1288(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1612)
static void C_fcall f_1612(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_918)
static void C_ccall f_918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_911)
static void C_ccall f_911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f2109)
static void C_ccall f2109(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1571)
static void C_fcall f_1571(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f2102)
static void C_ccall f2102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1822)
static void C_ccall f_1822(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1829)
static void C_ccall f_1829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1686)
static void C_ccall f_1686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1684)
static void C_ccall f_1684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_967)
static void C_ccall f_967(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_961)
static void C_ccall f_961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1073)
static void C_ccall f_1073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f2114)
static void C_ccall f2114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1563)
static void C_ccall f_1563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1816)
static void C_ccall f_1816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1677)
static void C_ccall f_1677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1673)
static void C_ccall f_1673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1515)
static void C_fcall f_1515(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1298)
static void C_ccall f_1298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1660)
static void C_ccall f_1660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1807)
static void C_fcall f_1807(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1801)
static void C_ccall f_1801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1668)
static void C_ccall f_1668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1663)
static void C_ccall f_1663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1190)
static void C_ccall f_1190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1191)
static void C_fcall f_1191(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1044)
static void C_fcall f_1044(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_920)
static void C_fcall f_920(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1794)
static void C_ccall f_1794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1180)
static void C_ccall f_1180(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1180)
static void C_ccall f_1180r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1186)
static void C_ccall f_1186(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1399)
static void C_ccall f_1399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1424)
static void C_ccall f_1424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1845)
static void C_fcall f_1845(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1841)
static void C_ccall f_1841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1414)
static void C_fcall f_1414(C_word t0,C_word t1,C_word t2) C_noret;

C_noret_decl(trf_1479)
static void C_fcall trf_1479(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1479(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1479(t0,t1);}

C_noret_decl(trf_1466)
static void C_fcall trf_1466(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1466(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1466(t0,t1);}

C_noret_decl(trf_1453)
static void C_fcall trf_1453(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1453(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1453(t0,t1,t2,t3);}

C_noret_decl(trf_857)
static void C_fcall trf_857(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_857(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_857(t0);}

C_noret_decl(trf_1019)
static void C_fcall trf_1019(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1019(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1019(t0,t1);}

C_noret_decl(trf_1320)
static void C_fcall trf_1320(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1320(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1320(t0,t1,t2);}

C_noret_decl(trf_1087)
static void C_fcall trf_1087(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1087(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1087(t0,t1,t2,t3);}

C_noret_decl(trf_1248)
static void C_fcall trf_1248(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1248(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1248(t0,t1,t2);}

C_noret_decl(trf_997)
static void C_fcall trf_997(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_997(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_997(t0,t1,t2,t3);}

C_noret_decl(trf_1711)
static void C_fcall trf_1711(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1711(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1711(t0,t1);}

C_noret_decl(trf_1035)
static void C_fcall trf_1035(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1035(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_1035(t0);}

C_noret_decl(trf_932)
static void C_fcall trf_932(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_932(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_932(t0,t1,t2);}

C_noret_decl(trf_1288)
static void C_fcall trf_1288(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1288(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1288(t0,t1,t2);}

C_noret_decl(trf_1612)
static void C_fcall trf_1612(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1612(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1612(t0,t1,t2);}

C_noret_decl(trf_1571)
static void C_fcall trf_1571(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1571(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1571(t0,t1,t2);}

C_noret_decl(trf_1515)
static void C_fcall trf_1515(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1515(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1515(t0,t1,t2);}

C_noret_decl(trf_1807)
static void C_fcall trf_1807(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1807(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1807(t0,t1);}

C_noret_decl(trf_1191)
static void C_fcall trf_1191(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1191(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1191(t0,t1,t2);}

C_noret_decl(trf_1044)
static void C_fcall trf_1044(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1044(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1044(t0,t1,t2);}

C_noret_decl(trf_920)
static void C_fcall trf_920(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_920(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_920(t0,t1,t2);}

C_noret_decl(trf_1845)
static void C_fcall trf_1845(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1845(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1845(t0,t1,t2);}

C_noret_decl(trf_1414)
static void C_fcall trf_1414(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1414(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1414(t0,t1,t2);}

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

/* k1691 in k1464 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:178: print */
t2=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[67],t1,lf[68]);}

/* k1401 in for-each-loop343 in k1404 in k1464 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:125: setup-api#read-info */
((C_proc4)C_fast_retrieve_symbol_proc(lf[23]))(4,*((C_word*)lf[23]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k1404 in k1464 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1406,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[38]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1414,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_1414(t6,((C_word*)t0)[2],t1);}

/* k1889 in k1805 in k1709 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* string->list */
t2=C_fast_retrieve(lf[84]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* a1473 in k1464 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1474,2,t0,t1);}
/* chicken-status.scm:157: g381 */
t2=*((C_word*)lf[33]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,lf[51]);}

/* status in k1464 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_fcall f_1479(C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1479,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_fast_retrieve(lf[54]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1483,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=t3,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[4]))){
t8=t7;
f_1483(2,t8,lf[57]);}
else{
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=((C_word*)t0)[4];
t13=C_i_check_list_2(t12,lf[18]);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1571,a[2]=t11,a[3]=t15,a[4]=t9,tmp=(C_word)a,a+=5,tmp));
t17=((C_word*)t15)[1];
f_1571(t17,t7,t12);}
else{
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_fast_retrieve(lf[61]);
t13=((C_word*)t0)[4];
t14=C_i_check_list_2(t13,lf[18]);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1612,a[2]=t11,a[3]=t16,a[4]=t9,a[5]=t12,tmp=(C_word)a,a+=6,tmp));
t18=((C_word*)t16)[1];
f_1612(t18,t7,t13);}}}

/* a1173 in k1158 in main#list-installed-extensions in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1174,2,t0,t1);}
/* chicken-status.scm:86: terminal-size */
t2=C_fast_retrieve(lf[43]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* a1882 in k1814 in k1805 in k1709 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1883(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1883,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_memq(t2,lf[82]));}

/* k1464 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_fcall f_1466(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1466,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1469,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1474,tmp=(C_word)a,a+=2,tmp);
/* chicken-status.scm:156: with-output-to-port */
t4=C_fast_retrieve(lf[52]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,*((C_word*)lf[53]+1),t3);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1479,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t3=((C_word*)t0)[2];
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1406,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:127: gather-all-extensions */
f_1035(t4);}
else{
t3=(C_truep(C_retrieve2(lf[1],"main#\052host-extensions\052"))?C_retrieve2(lf[2],"main#\052target-extensions\052"):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1660,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1693,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:178: repo-path */
f_857(t5);}
else{
/* chicken-status.scm:183: status */
t4=t2;
f_1479(t4,((C_word*)t0)[2]);}}}}

/* k1467 in k1464 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:158: exit */
t2=C_fast_retrieve(lf[50]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* k1161 in k1158 in main#list-installed-extensions in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1163(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_i_zerop(t1))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(80));}
else{
/* chicken-status.scm:89: min */
t2=*((C_word*)lf[42]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_fix(80),t1);}}

/* k1158 in main#list-installed-extensions in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1160,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1163,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1174,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1180,tmp=(C_word)a,a+=2,tmp);
/* chicken-status.scm:86: ##sys#call-with-values */
C_call_with_values(4,0,t2,t3,t4);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(80));}}

/* loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_fcall f_1453(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1453,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1466,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t5=((C_word*)((C_word*)t0)[5])[1];
if(C_truep(t5)){
t6=t4;
f_1466(t6,t5);}
else{
t6=((C_word*)((C_word*)t0)[3])[1];
t7=t4;
f_1466(t7,t6);}}
else{
t5=t4;
f_1466(t5,C_SCHEME_FALSE);}}
else{
t4=C_i_car(t2);
t5=t4;
t6=C_i_string_equal_p(t5,lf[69]);
t7=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1711,a[2]=t1,a[3]=t5,a[4]=t2,a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[2],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t6)){
t8=t7;
f_1711(t8,t6);}
else{
t8=C_u_i_string_equal_p(t5,lf[86]);
if(C_truep(t8)){
t9=t7;
f_1711(t9,t8);}
else{
t9=C_u_i_string_equal_p(t5,lf[87]);
t10=t7;
f_1711(t10,t9);}}}}

/* k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_849,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_853,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:39: feature? */
t3=C_fast_retrieve(lf[89]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[90]);}

/* k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_843,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_846,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_846,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_849,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:27: ##sys#require */
((C_proc3)C_fast_retrieve_symbol_proc(lf[91]))(3,*((C_word*)lf[91]+1),t2,lf[92]);}

/* k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_840,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_843,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_irregex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1104 in main#format-string in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1106(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(((C_word*)t0)[2])){
t2=((C_word*)t0)[3];
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[29]))(4,*((C_word*)lf[29]+1),((C_word*)t0)[4],t1,t2);}
else{
t2=((C_word*)t0)[3];
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[29]))(4,*((C_word*)lf[29]+1),((C_word*)t0)[4],t2,t1);}}

/* main#repo-path in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_fcall f_857(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_857,NULL,1,t1);}
t2=(C_truep(C_retrieve2(lf[0],"main#\052cross-chicken\052"))?C_i_not(C_retrieve2(lf[1],"main#\052host-extensions\052")):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_871,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_TARGET_LIB_HOME),C_fix(0));}
else{
/* chicken-status.scm:46: repository-path */
t3=C_fast_retrieve(lf[11]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_853(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_853,2,t0,t1);}
t2=C_mutate2(&lf[0] /* (set! main#*cross-chicken* ...) */,t1);
t3=C_mutate2(&lf[1] /* (set! main#*host-extensions* ...) */,C_retrieve2(lf[0],"main#\052cross-chicken\052"));
t4=C_mutate2(&lf[2] /* (set! main#*target-extensions* ...) */,C_retrieve2(lf[0],"main#\052cross-chicken\052"));
t5=C_mutate2(&lf[3] /* (set! main#repo-path ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_857,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate2(&lf[12] /* (set! main#grep ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_895,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate2(&lf[15] /* (set! main#gather-extensions ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_907,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate2(&lf[21] /* (set! main#gather-eggs ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_967,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate2(&lf[20] /* (set! main#gather-all-extensions ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1035,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate2(&lf[28] /* (set! main#format-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1087,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate2(&lf[31] /* (set! main#list-installed-extensions ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1186,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate2(&lf[45] /* (set! main#list-installed-eggs ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1279,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate2(&lf[46] /* (set! main#list-installed-files ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1311,tmp=(C_word)a,a+=2,tmp));
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1934,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1944,a[2]=t14,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:220: command-line-arguments */
t16=C_fast_retrieve(lf[88]);
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,t15);}

/* k826 in k823 in k820 in k817 */
static void C_ccall f_828(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_828,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_831,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_posix_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k823 in k820 in k817 */
static void C_ccall f_825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_825,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_828,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d1_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k820 in k817 */
static void C_ccall f_822(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_822,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_825,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_chicken_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1493 in k1487 in k1481 in status in k1464 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
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
C_word *a;
if(C_truep(C_i_nullp(t1))){
/* chicken-status.scm:171: display */
t2=*((C_word*)lf[55]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[56],*((C_word*)lf[53]+1));}
else{
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t2=C_retrieve2(lf[45],"main#list-installed-eggs");
t3=C_retrieve2(lf[45],"main#list-installed-eggs");
/* chicken-status.scm:160: g472 */
t4=C_retrieve2(lf[45],"main#list-installed-eggs");
f_1279(3,t4,((C_word*)t0)[2],t1);}
else{
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t2=C_retrieve2(lf[46],"main#list-installed-files");
t3=C_retrieve2(lf[46],"main#list-installed-files");
t4=C_retrieve2(lf[46],"main#list-installed-files");
/* chicken-status.scm:160: g472 */
t5=C_retrieve2(lf[46],"main#list-installed-files");
f_1311(3,t5,((C_word*)t0)[2],t1);}
else{
t2=C_retrieve2(lf[31],"main#list-installed-extensions");
t3=C_retrieve2(lf[31],"main#list-installed-extensions");
t4=C_retrieve2(lf[31],"main#list-installed-extensions");
/* chicken-status.scm:160: g472 */
t5=C_retrieve2(lf[31],"main#list-installed-extensions");
f_1186(3,t5,((C_word*)t0)[2],t1);}}}}

/* k1017 in k1005 in loop in k993 in main#gather-eggs in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_fcall f_1019(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1019,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* chicken-status.scm:66: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_997(t5,((C_word*)t0)[6],t2,t4);}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* chicken-status.scm:66: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_997(t5,((C_word*)t0)[6],t2,t4);}}

/* k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_837(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_837,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_840,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_834(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_834,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_837,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_831(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_831,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_834,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1487 in k1481 in status in k1464 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1489,2,t0,t1);}
t2=(C_truep(((C_word*)((C_word*)t0)[2])[1])?C_retrieve2(lf[21],"main#gather-eggs"):C_retrieve2(lf[15],"main#gather-extensions"));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1495,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-status.scm:160: g470 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}

/* k1481 in status in k1464 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1483(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1483,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[18]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1489,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1515,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_1515(t7,t3,t1);}

/* k1935 in k1932 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1937(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* k1932 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1934,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1937,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1940,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
((C_proc2)C_fast_retrieve_symbol_proc(lf[49]))(2,*((C_word*)lf[49]+1),t3);}

/* k817 */
static void C_ccall f_819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_819,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_822,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1328 in for-each-loop323 in k1313 in main#list-installed-files in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1320(t3,((C_word*)t0)[4],t2);}

/* k1542 in map-loop388 in k1481 in status in k1464 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1544(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1544,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1515(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1515(t6,((C_word*)t0)[5],t5);}}

/* k1207 in k1203 in k1231 in g284 in k1188 in main#list-installed-extensions in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:98: print */
t2=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k1203 in k1231 in g284 in k1188 in main#list-installed-extensions in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1205(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1205,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1209,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1213,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1218,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=C_i_cadr(((C_word*)t0)[4]);
/* chicken-status.scm:101: ->string */
t7=C_fast_retrieve(lf[35]);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}

/* for-each-loop323 in k1313 in main#list-installed-files in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_fcall f_1320(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1320,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1330,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-status.scm:109: g324 */
t5=*((C_word*)lf[33]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k885 in k882 in k879 in k873 in k869 in main#repo-path in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:45: make-pathname */
t2=C_fast_retrieve(lf[5]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k879 in k873 in k869 in main#repo-path in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_881,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_884,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-status.scm:45: ##sys#print */
t3=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,C_fix((C_word)C_BINARY_VERSION),C_SCHEME_FALSE,((C_word*)t0)[5]);}

/* k1235 in g284 in k1188 in main#list-installed-extensions in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:96: setup-api#read-info */
((C_proc4)C_fast_retrieve_symbol_proc(lf[23]))(4,*((C_word*)lf[23]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k882 in k879 in k873 in k869 in main#repo-path in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_884,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_887,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:45: get-output-string */
t3=C_fast_retrieve(lf[6]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k1598 in map-loop411 in status in k1464 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
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
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1600,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1571(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1571(t6,((C_word*)t0)[5],t5);}}

/* k1079 in main#gather-all-extensions in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:72: glob */
t2=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* main#format-string in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_fcall f_1087(C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1087,NULL,4,t1,t2,t3,t4);}
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_make_character(32):C_i_car(t9));
t12=C_i_nullp(t9);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t14=C_i_string_length(t2);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1106,a[2]=t7,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t16=C_fixnum_difference(t3,t14);
t17=C_i_fixnum_max(C_fix(0),t16);
/* chicken-status.scm:76: make-string */
t18=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t18+1)))(4,t18,t15,t17,t11);}

/* k1231 in g284 in k1188 in main#list-installed-extensions in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1233(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1233,2,t0,t1);}
t2=C_i_assq(lf[32],t1);
t3=t2;
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1205,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1226,a[2]=t4,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:99: string-append */
t6=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,((C_word*)t0)[4],lf[37]);}
else{
/* chicken-status.scm:103: print */
t4=*((C_word*)lf[33]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],((C_word*)t0)[4]);}}

/* k1083 in main#gather-all-extensions in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1085(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:72: make-pathname */
t2=C_fast_retrieve(lf[5]);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,lf[26],lf[27]);}

/* k1005 in loop in k993 in main#gather-eggs in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1007(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1007,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1019,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=C_i_member(t2,((C_word*)t0)[2]);
t5=t3;
f_1019(t5,C_i_not(t4));}
else{
t4=t3;
f_1019(t4,C_SCHEME_FALSE);}}

/* main#grep in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_895(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_895,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_901,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:49: filter */
t5=C_fast_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t4,t3);}

/* k1216 in k1203 in k1231 in g284 in k1188 in main#list-installed-extensions in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[29]))(4,*((C_word*)lf[29]+1),((C_word*)t0)[2],lf[34],t1);}

/* k1211 in k1203 in k1231 in g284 in k1188 in main#list-installed-extensions in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1213,2,t0,t1);}
/* chicken-status.scm:100: format-string */
f_1087(((C_word*)t0)[2],t1,((C_word*)t0)[3],C_a_i_list(&a,2,C_SCHEME_TRUE,C_make_character(46)));}

/* k982 in loop in k993 in main#gather-eggs in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_assq(lf[22],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?C_i_cadr(t2):C_SCHEME_FALSE));}

/* k986 in loop in k993 in main#gather-eggs in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:59: setup-api#read-info */
((C_proc4)C_fast_retrieve_symbol_proc(lf[23]))(4,*((C_word*)lf[23]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k869 in main#repo-path in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_871,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_875,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:45: open-output-string */
t4=C_fast_retrieve(lf[9]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k873 in k869 in main#repo-path in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_875,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[4]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_881,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-status.scm:45: ##sys#print */
t6=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[8],C_SCHEME_FALSE,t3);}

/* a1346 in main#list-installed-files in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1347(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1347,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1361,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1365,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:115: repo-path */
f_857(t4);}

/* k1343 in main#list-installed-files in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:112: sort */
t2=C_fast_retrieve(lf[39]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[40]+1));}

/* k1238 in k1188 in main#list-installed-extensions in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1240(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1240,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[38]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1248,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1248(t6,((C_word*)t0)[3],t1);}

/* for-each-loop283 in k1238 in k1188 in main#list-installed-extensions in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_fcall f_1248(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1248,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1258,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-status.scm:92: g284 */
t5=((C_word*)t0)[3];
f_1191(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k993 in main#gather-eggs in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_995,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_997,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_997(t5,((C_word*)t0)[2],C_SCHEME_END_OF_LIST,t1);}

/* loop in k993 in main#gather-eggs in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_fcall f_997(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_save_and_reclaim((void*)trf_997,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1007,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(t3);
t6=t4;
t7=t5;
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_984,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_988,a[2]=t8,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:59: repo-path */
f_857(t9);}}

/* k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1944(C_word c,C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1944,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1453,a[2]=t5,a[3]=t3,a[4]=t9,a[5]=t7,a[6]=t11,tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_1453(t13,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k1938 in k1932 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1940(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k1639 in map-loop438 in status in k1464 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1641(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1641,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1612(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1612(t6,((C_word*)t0)[5],t5);}}

/* main#list-installed-files in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1311(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1311,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1315,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1345,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1347,tmp=(C_word)a,a+=2,tmp);
/* chicken-status.scm:113: append-map */
t6=C_fast_retrieve(lf[48]);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,t2);}

/* k1275 in main#list-installed-extensions in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1277,2,t0,t1);}
t2=C_a_i_minus(&a,2,t1,C_fix(2));
C_quotient(4,0,((C_word*)t0)[2],t2,C_fix(2));}

/* k1709 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_fcall f_1711(C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1711,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f2102,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:130: print */
t4=*((C_word*)lf[33]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[70]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[71]))){
t2=lf[2] /* main#*target-extensions* */ =C_SCHEME_FALSE;;
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* chicken-status.scm:191: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1453(t5,((C_word*)t0)[2],t4,((C_word*)t0)[6]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[72]))){
t2=lf[1] /* main#*host-extensions* */ =C_SCHEME_FALSE;;
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* chicken-status.scm:194: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1453(t5,((C_word*)t0)[2],t4,((C_word*)t0)[6]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[73]))){
t2=C_set_block_item(((C_word*)t0)[7],0,C_SCHEME_TRUE);
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* chicken-status.scm:197: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1453(t5,((C_word*)t0)[2],t4,((C_word*)t0)[6]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[74]))){
t2=C_set_block_item(((C_word*)t0)[8],0,C_SCHEME_TRUE);
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* chicken-status.scm:200: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1453(t5,((C_word*)t0)[2],t4,((C_word*)t0)[6]);}
else{
t2=C_u_i_string_equal_p(((C_word*)t0)[3],lf[75]);
t3=(C_truep(t2)?t2:C_u_i_string_equal_p(((C_word*)t0)[3],lf[76]));
if(C_truep(t3)){
t4=C_set_block_item(((C_word*)t0)[9],0,C_SCHEME_TRUE);
t5=((C_word*)t0)[4];
t6=C_u_i_cdr(t5);
/* chicken-status.scm:203: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_1453(t7,((C_word*)t0)[2],t6,((C_word*)t0)[6]);}
else{
t4=C_u_i_string_equal_p(((C_word*)t0)[3],lf[77]);
t5=(C_truep(t4)?t4:C_u_i_string_equal_p(((C_word*)t0)[3],lf[78]));
if(C_truep(t5)){
t6=C_set_block_item(((C_word*)t0)[10],0,C_SCHEME_TRUE);
t7=((C_word*)t0)[4];
t8=C_u_i_cdr(t7);
/* chicken-status.scm:206: loop */
t9=((C_word*)((C_word*)t0)[5])[1];
f_1453(t9,((C_word*)t0)[2],t8,((C_word*)t0)[6]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[79]))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1794,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1801,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:208: chicken-version */
t8=C_fast_retrieve(lf[80]);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1807,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t7=C_block_size(((C_word*)t0)[3]);
if(C_truep(C_fixnum_greaterp(t7,C_fix(0)))){
t8=C_subchar(((C_word*)t0)[3],C_fix(0));
t9=t6;
f_1807(t9,C_i_char_equalp(C_make_character(45),t8));}
else{
t8=t6;
f_1807(t8,C_SCHEME_FALSE);}}}}}}}}}}

/* main#list-installed-eggs in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1279(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1279,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,lf[38]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1288,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_1288(t7,t1,t2);}

/* k1037 in main#gather-all-extensions in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1039,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1044,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1044(t5,((C_word*)t0)[5],t1);}

/* main#gather-all-extensions in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_fcall f_1035(C_word t1){
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
C_save_and_reclaim((void*)trf_1035,NULL,1,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_fast_retrieve(lf[24]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1039,a[2]=t5,a[3]=t3,a[4]=t6,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1081,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1085,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:72: repo-path */
f_857(t9);}

/* k1359 in a1346 in main#list-installed-files in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_assq(lf[47],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?C_i_cdr(t2):C_SCHEME_END_OF_LIST));}

/* k1313 in main#list-installed-files in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1315,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1320,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_1320(t5,((C_word*)t0)[2],t1);}

/* k1224 in k1231 in g284 in k1188 in main#list-installed-extensions in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1226(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1226,2,t0,t1);}
/* chicken-status.scm:99: format-string */
f_1087(((C_word*)t0)[2],t1,((C_word*)t0)[3],C_a_i_list(&a,2,C_SCHEME_FALSE,C_make_character(46)));}

/* k1363 in a1346 in main#list-installed-files in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:115: setup-api#read-info */
((C_proc4)C_fast_retrieve_symbol_proc(lf[23]))(4,*((C_word*)lf[23]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* map-loop179 in k909 in main#gather-extensions in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_fcall f_932(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_932,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_961,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-status.scm:54: g185 */
t5=((C_word*)t0)[5];
f_920(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k928 in k909 in main#gather-extensions in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_930(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:54: concatenate */
t2=C_fast_retrieve(lf[19]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* main#gather-extensions in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_907(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_907,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_911,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:52: gather-all-extensions */
f_1035(t3);}

/* k1386 in k1382 in k1397 in for-each-loop343 in k1404 in k1464 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1388,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* chicken-status.scm:126: pp */
t3=C_fast_retrieve(lf[62]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t2);}

/* a900 in main#grep in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_901(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_901,3,t0,t1,t2);}
t3=C_fast_retrieve(lf[13]);
/* chicken-status.scm:49: g172 */
t4=C_fast_retrieve(lf[13]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,((C_word*)t0)[2],t2);}

/* k1382 in k1397 in for-each-loop343 in k1404 in k1464 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1384,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1388,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=C_i_cadr(((C_word*)t0)[3]);
/* chicken-status.scm:126: ->string */
t5=C_fast_retrieve(lf[35]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
/* chicken-status.scm:126: ->string */
t4=C_fast_retrieve(lf[35]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_FALSE);}}

/* k1256 in for-each-loop283 in k1238 in k1188 in main#list-installed-extensions in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1248(t3,((C_word*)t0)[4],t2);}

/* for-each-loop304 in main#list-installed-eggs in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_fcall f_1288(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1288,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1298,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-status.scm:106: g305 */
t5=*((C_word*)lf[33]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* map-loop438 in status in k1464 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_fcall f_1612(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1612,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1641,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-status.scm:168: g444 */
t5=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k916 in k909 in main#gather-extensions in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:53: delete-duplicates */
t2=C_fast_retrieve(lf[16]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[17]+1));}

/* k909 in main#gather-extensions in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_911(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_911,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_918,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_920,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t9=((C_word*)t0)[3];
t10=C_i_check_list_2(t9,lf[18]);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_930,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_932,a[2]=t7,a[3]=t13,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_932(t15,t11,t9);}

/* f2109 in k1820 in k1814 in k1805 in k1709 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f2109(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:143: exit */
t2=C_fast_retrieve(lf[50]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* map-loop411 in status in k1464 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_fcall f_1571(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_1571,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1600,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1563,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:166: irregex-quote */
t7=C_fast_retrieve(lf[60]);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f2102 in k1709 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f2102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:143: exit */
t2=C_fast_retrieve(lf[50]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* k1820 in k1814 in k1805 in k1709 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1822(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1822,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1829,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(((C_word*)t0)[5],lf[18]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1841,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1845,a[2]=t6,a[3]=t10,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_1845(t12,t8,((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[3];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f2109,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:130: print */
t4=*((C_word*)lf[33]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[70]);}}

/* k1827 in k1820 in k1814 in k1805 in k1709 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:215: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1453(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* a1685 in k1661 in k1658 in k1464 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1686(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1686,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[1],"main#\052host-extensions\052"));
t3=C_mutate2(&lf[1] /* (set! main#*host-extensions* ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k1682 in a1672 in k1661 in k1658 in k1464 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:181: print */
t2=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[64],t1,lf[65]);}

/* main#gather-eggs in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_967(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_967,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_995,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:62: gather-extensions */
t4=C_retrieve2(lf[15],"main#gather-extensions");
f_907(3,t4,t3,t2);}

/* k959 in map-loop179 in k909 in main#gather-extensions in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_961(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_961,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_932(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_932(t6,((C_word*)t0)[5],t5);}}

/* k1071 in map-loop226 in k1037 in main#gather-all-extensions in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1073(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1073,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1044(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1044(t6,((C_word*)t0)[5],t5);}}

/* f2114 in k1805 in k1709 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f2114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:143: exit */
t2=C_fast_retrieve(lf[50]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* k1561 in map-loop411 in status in k1464 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:166: string-append */
t2=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[58],t1,lf[59]);}

/* k1814 in k1805 in k1709 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1816(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1816,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1822,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1883,tmp=(C_word)a,a+=2,tmp);
/* chicken-status.scm:214: every */
t5=C_fast_retrieve(lf[83]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,t2);}

/* k1675 in a1672 in k1661 in k1658 in k1464 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:182: status */
t2=((C_word*)t0)[2];
f_1479(t2,((C_word*)t0)[3]);}

/* a1672 in k1661 in k1658 in k1464 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1673,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1677,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1684,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:181: repo-path */
f_857(t3);}

/* map-loop388 in k1481 in status in k1464 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_fcall f_1515(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1515,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1544,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-status.scm:162: g394 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1296 in for-each-loop304 in main#list-installed-eggs in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1288(t3,((C_word*)t0)[4],t2);}

/* k1658 in k1464 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1660,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1663,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:179: status */
t3=((C_word*)t0)[2];
f_1479(t3,t2);}

/* k1805 in k1709 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_fcall f_1807(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1807,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_block_size(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(2)))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1816,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1891,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:213: substring */
t5=*((C_word*)lf[85]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],C_fix(1));}
else{
t3=((C_word*)t0)[4];
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f2114,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:130: print */
t5=*((C_word*)lf[33]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[70]);}}
else{
t2=((C_word*)t0)[6];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[5]);
/* chicken-status.scm:218: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1453(t5,((C_word*)t0)[4],t3,t4);}}

/* k1799 in k1709 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:208: print */
t2=*((C_word*)lf[33]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* a1667 in k1661 in k1658 in k1464 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1668(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1668,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[1],"main#\052host-extensions\052"));
t3=C_mutate2(&lf[1] /* (set! main#*host-extensions* ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k1661 in k1658 in k1464 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1663(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1663,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1668,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1673,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1686,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:180: ##sys#dynamic-wind */
t9=*((C_word*)lf[66]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[3],t6,t7,t8);}

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
if(!C_demand_2(539)){
C_save(t1);
C_rereclaim2(539*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,93);
lf[4]=C_h_intern(&lf[4],7,"sprintf");
lf[5]=C_h_intern(&lf[5],13,"make-pathname");
lf[6]=C_h_intern(&lf[6],17,"get-output-string");
lf[7]=C_h_intern(&lf[7],9,"\003sysprint");
lf[8]=C_decode_literal(C_heaptop,"\376B\000\000\010chicken/");
lf[9]=C_h_intern(&lf[9],18,"open-output-string");
lf[10]=C_h_intern(&lf[10],17,"\003syspeek-c-string");
lf[11]=C_h_intern(&lf[11],15,"repository-path");
lf[13]=C_h_intern(&lf[13],14,"irregex-search");
lf[14]=C_h_intern(&lf[14],6,"filter");
lf[16]=C_h_intern(&lf[16],17,"delete-duplicates");
lf[17]=C_h_intern(&lf[17],8,"string=\077");
lf[18]=C_h_intern(&lf[18],3,"map");
lf[19]=C_h_intern(&lf[19],11,"concatenate");
lf[22]=C_h_intern(&lf[22],8,"egg-name");
lf[23]=C_h_intern(&lf[23],19,"setup-api#read-info");
lf[24]=C_h_intern(&lf[24],13,"pathname-file");
lf[25]=C_h_intern(&lf[25],4,"glob");
lf[26]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[27]=C_decode_literal(C_heaptop,"\376B\000\000\012setup-info");
lf[29]=C_h_intern(&lf[29],17,"\003sysstring-append");
lf[30]=C_h_intern(&lf[30],11,"make-string");
lf[32]=C_h_intern(&lf[32],7,"version");
lf[33]=C_h_intern(&lf[33],5,"print");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000\012 version: ");
lf[35]=C_h_intern(&lf[35],8,"->string");
lf[36]=C_h_intern(&lf[36],13,"string-append");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[38]=C_h_intern(&lf[38],8,"for-each");
lf[39]=C_h_intern(&lf[39],4,"sort");
lf[40]=C_h_intern(&lf[40],8,"string<\077");
lf[41]=C_h_intern(&lf[41],19,"\003sysstandard-output");
lf[42]=C_h_intern(&lf[42],3,"min");
lf[43]=C_h_intern(&lf[43],13,"terminal-size");
lf[44]=C_h_intern(&lf[44],14,"terminal-port\077");
lf[47]=C_h_intern(&lf[47],5,"files");
lf[48]=C_h_intern(&lf[48],10,"append-map");
lf[49]=C_h_intern(&lf[49],25,"\003sysimplicit-exit-handler");
lf[50]=C_h_intern(&lf[50],4,"exit");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000 -eggs cannot be used with -list.");
lf[52]=C_h_intern(&lf[52],19,"with-output-to-port");
lf[53]=C_h_intern(&lf[53],18,"\003sysstandard-error");
lf[54]=C_h_intern(&lf[54],7,"irregex");
lf[55]=C_h_intern(&lf[55],7,"display");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\000\007(none)\012");
lf[57]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002.\052\376\377\016");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\001^");
lf[59]=C_decode_literal(C_heaptop,"\376B\000\000\001$");
lf[60]=C_h_intern(&lf[60],13,"irregex-quote");
lf[61]=C_h_intern(&lf[61],16,"\003sysglob->regexp");
lf[62]=C_h_intern(&lf[62],2,"pp");
lf[63]=C_h_intern(&lf[63],14,"string->symbol");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\000\013\012target at ");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\002:\012");
lf[66]=C_h_intern(&lf[66],16,"\003sysdynamic-wind");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\010host at ");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\002:\012");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\005-help");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\002cusage: chicken-status [OPTION | PATTERN] ...\012\012  -h   -help                 "
"   show this message\012       -version                 show version and exit\012  -f "
"  -files                   list installed files\012       -exact                   "
"treat PATTERN as exact match (not a pattern)\012       -host                    whe"
"n cross-compiling, show status of host extensions only\012       -target           "
"       when cross-compiling, show status of target extensions only\012       -list "
"                   dump installed extensions and their versions in \042override\042 fo"
"rmat\012  -e   -eggs                    list installed eggs");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\005-host");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000\007-target");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000\006-exact");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\005-list");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000\002-f");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000\006-files");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\002-e");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\005-eggs");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\010-version");
lf[80]=C_h_intern(&lf[80],15,"chicken-version");
lf[81]=C_h_intern(&lf[81],6,"append");
lf[82]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000h\376\003\000\000\002\376\377\012\000\000f\376\377\016");
lf[83]=C_h_intern(&lf[83],5,"every");
lf[84]=C_h_intern(&lf[84],16,"\003sysstring->list");
lf[85]=C_h_intern(&lf[85],9,"substring");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\002-h");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\006--help");
lf[88]=C_h_intern(&lf[88],22,"command-line-arguments");
lf[89]=C_h_intern(&lf[89],8,"feature\077");
lf[90]=C_h_intern(&lf[90],14,"\000cross-chicken");
lf[91]=C_h_intern(&lf[91],11,"\003sysrequire");
lf[92]=C_h_intern(&lf[92],9,"setup-api");
C_register_lf2(lf,93,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_819,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1188 in main#list-installed-extensions in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1190,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1191,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1240,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:104: sort */
t5=C_fast_retrieve(lf[39]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[3],*((C_word*)lf[40]+1));}

/* g284 in k1188 in main#list-installed-extensions in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_fcall f_1191(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1191,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1233,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1237,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:96: repo-path */
f_857(t4);}

/* map-loop226 in k1037 in main#gather-all-extensions in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_fcall f_1044(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1044,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1073,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-status.scm:71: g232 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* g185 in k909 in main#gather-extensions in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_fcall f_920(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_920,NULL,3,t0,t1,t2);}
t3=C_retrieve2(lf[12],"main#grep");
/* chicken-status.scm:54: g202 */
t4=C_retrieve2(lf[12],"main#grep");
f_895(4,t4,t1,t2,((C_word*)t0)[2]);}

/* k1792 in k1709 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:209: exit */
t2=C_fast_retrieve(lf[50]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* a1179 in k1158 in main#list-installed-extensions in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1180(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_1180r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1180r(t0,t1,t2);}}

static void C_ccall f_1180r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_list_ref(t2,C_fix(1)));}

/* main#list-installed-extensions in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1186(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1186,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1190,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1277,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=t4;
t6=*((C_word*)lf[41]+1);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1160,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:85: terminal-port? */
t8=C_fast_retrieve(lf[44]);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,*((C_word*)lf[41]+1));}

/* k1397 in for-each-loop343 in k1404 in k1464 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1399,2,t0,t1);}
t2=C_i_assq(lf[32],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1384,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:126: string->symbol */
t5=*((C_word*)lf[63]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}

/* k1422 in for-each-loop343 in k1404 in k1464 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1414(t3,((C_word*)t0)[4],t2);}

/* map-loop531 in k1820 in k1814 in k1805 in k1709 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_fcall f_1845(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_1845,NULL,3,t0,t1,t2);}
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

/* k1839 in k1820 in k1814 in k1805 in k1709 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_ccall f_1841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* chicken-status.scm:215: append */
t4=*((C_word*)lf[81]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[3],t1,t3);}

/* for-each-loop343 in k1404 in k1464 in loop in k1942 in k851 in k847 in k844 in k841 in k838 in k835 in k832 in k829 in k826 in k823 in k820 in k817 */
static void C_fcall f_1414(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_save_and_reclaim((void*)trf_1414,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1424,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1399,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1403,a[2]=t7,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:125: repo-path */
f_857(t8);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[121] = {
{"f_1693:chicken_2dstatus_2escm",(void*)f_1693},
{"f_1403:chicken_2dstatus_2escm",(void*)f_1403},
{"f_1406:chicken_2dstatus_2escm",(void*)f_1406},
{"f_1891:chicken_2dstatus_2escm",(void*)f_1891},
{"f_1474:chicken_2dstatus_2escm",(void*)f_1474},
{"f_1479:chicken_2dstatus_2escm",(void*)f_1479},
{"f_1174:chicken_2dstatus_2escm",(void*)f_1174},
{"f_1883:chicken_2dstatus_2escm",(void*)f_1883},
{"f_1466:chicken_2dstatus_2escm",(void*)f_1466},
{"f_1469:chicken_2dstatus_2escm",(void*)f_1469},
{"f_1163:chicken_2dstatus_2escm",(void*)f_1163},
{"f_1160:chicken_2dstatus_2escm",(void*)f_1160},
{"f_1453:chicken_2dstatus_2escm",(void*)f_1453},
{"f_849:chicken_2dstatus_2escm",(void*)f_849},
{"f_843:chicken_2dstatus_2escm",(void*)f_843},
{"f_846:chicken_2dstatus_2escm",(void*)f_846},
{"f_840:chicken_2dstatus_2escm",(void*)f_840},
{"f_1106:chicken_2dstatus_2escm",(void*)f_1106},
{"f_857:chicken_2dstatus_2escm",(void*)f_857},
{"f_853:chicken_2dstatus_2escm",(void*)f_853},
{"f_828:chicken_2dstatus_2escm",(void*)f_828},
{"f_825:chicken_2dstatus_2escm",(void*)f_825},
{"f_822:chicken_2dstatus_2escm",(void*)f_822},
{"f_1495:chicken_2dstatus_2escm",(void*)f_1495},
{"f_1019:chicken_2dstatus_2escm",(void*)f_1019},
{"f_837:chicken_2dstatus_2escm",(void*)f_837},
{"f_834:chicken_2dstatus_2escm",(void*)f_834},
{"f_831:chicken_2dstatus_2escm",(void*)f_831},
{"f_1489:chicken_2dstatus_2escm",(void*)f_1489},
{"f_1483:chicken_2dstatus_2escm",(void*)f_1483},
{"f_1937:chicken_2dstatus_2escm",(void*)f_1937},
{"f_1934:chicken_2dstatus_2escm",(void*)f_1934},
{"f_819:chicken_2dstatus_2escm",(void*)f_819},
{"f_1330:chicken_2dstatus_2escm",(void*)f_1330},
{"f_1544:chicken_2dstatus_2escm",(void*)f_1544},
{"f_1209:chicken_2dstatus_2escm",(void*)f_1209},
{"f_1205:chicken_2dstatus_2escm",(void*)f_1205},
{"f_1320:chicken_2dstatus_2escm",(void*)f_1320},
{"f_887:chicken_2dstatus_2escm",(void*)f_887},
{"f_881:chicken_2dstatus_2escm",(void*)f_881},
{"f_1237:chicken_2dstatus_2escm",(void*)f_1237},
{"f_884:chicken_2dstatus_2escm",(void*)f_884},
{"f_1600:chicken_2dstatus_2escm",(void*)f_1600},
{"f_1081:chicken_2dstatus_2escm",(void*)f_1081},
{"f_1087:chicken_2dstatus_2escm",(void*)f_1087},
{"f_1233:chicken_2dstatus_2escm",(void*)f_1233},
{"f_1085:chicken_2dstatus_2escm",(void*)f_1085},
{"f_1007:chicken_2dstatus_2escm",(void*)f_1007},
{"f_895:chicken_2dstatus_2escm",(void*)f_895},
{"f_1218:chicken_2dstatus_2escm",(void*)f_1218},
{"f_1213:chicken_2dstatus_2escm",(void*)f_1213},
{"f_984:chicken_2dstatus_2escm",(void*)f_984},
{"f_988:chicken_2dstatus_2escm",(void*)f_988},
{"f_871:chicken_2dstatus_2escm",(void*)f_871},
{"f_875:chicken_2dstatus_2escm",(void*)f_875},
{"f_1347:chicken_2dstatus_2escm",(void*)f_1347},
{"f_1345:chicken_2dstatus_2escm",(void*)f_1345},
{"f_1240:chicken_2dstatus_2escm",(void*)f_1240},
{"f_1248:chicken_2dstatus_2escm",(void*)f_1248},
{"f_995:chicken_2dstatus_2escm",(void*)f_995},
{"f_997:chicken_2dstatus_2escm",(void*)f_997},
{"f_1944:chicken_2dstatus_2escm",(void*)f_1944},
{"f_1940:chicken_2dstatus_2escm",(void*)f_1940},
{"f_1641:chicken_2dstatus_2escm",(void*)f_1641},
{"f_1311:chicken_2dstatus_2escm",(void*)f_1311},
{"f_1277:chicken_2dstatus_2escm",(void*)f_1277},
{"f_1711:chicken_2dstatus_2escm",(void*)f_1711},
{"f_1279:chicken_2dstatus_2escm",(void*)f_1279},
{"f_1039:chicken_2dstatus_2escm",(void*)f_1039},
{"f_1035:chicken_2dstatus_2escm",(void*)f_1035},
{"f_1361:chicken_2dstatus_2escm",(void*)f_1361},
{"f_1315:chicken_2dstatus_2escm",(void*)f_1315},
{"f_1226:chicken_2dstatus_2escm",(void*)f_1226},
{"f_1365:chicken_2dstatus_2escm",(void*)f_1365},
{"f_932:chicken_2dstatus_2escm",(void*)f_932},
{"f_930:chicken_2dstatus_2escm",(void*)f_930},
{"f_907:chicken_2dstatus_2escm",(void*)f_907},
{"f_1388:chicken_2dstatus_2escm",(void*)f_1388},
{"f_901:chicken_2dstatus_2escm",(void*)f_901},
{"f_1384:chicken_2dstatus_2escm",(void*)f_1384},
{"f_1258:chicken_2dstatus_2escm",(void*)f_1258},
{"f_1288:chicken_2dstatus_2escm",(void*)f_1288},
{"f_1612:chicken_2dstatus_2escm",(void*)f_1612},
{"f_918:chicken_2dstatus_2escm",(void*)f_918},
{"f_911:chicken_2dstatus_2escm",(void*)f_911},
{"f2109:chicken_2dstatus_2escm",(void*)f2109},
{"f_1571:chicken_2dstatus_2escm",(void*)f_1571},
{"f2102:chicken_2dstatus_2escm",(void*)f2102},
{"f_1822:chicken_2dstatus_2escm",(void*)f_1822},
{"f_1829:chicken_2dstatus_2escm",(void*)f_1829},
{"f_1686:chicken_2dstatus_2escm",(void*)f_1686},
{"f_1684:chicken_2dstatus_2escm",(void*)f_1684},
{"f_967:chicken_2dstatus_2escm",(void*)f_967},
{"f_961:chicken_2dstatus_2escm",(void*)f_961},
{"f_1073:chicken_2dstatus_2escm",(void*)f_1073},
{"f2114:chicken_2dstatus_2escm",(void*)f2114},
{"f_1563:chicken_2dstatus_2escm",(void*)f_1563},
{"f_1816:chicken_2dstatus_2escm",(void*)f_1816},
{"f_1677:chicken_2dstatus_2escm",(void*)f_1677},
{"f_1673:chicken_2dstatus_2escm",(void*)f_1673},
{"f_1515:chicken_2dstatus_2escm",(void*)f_1515},
{"f_1298:chicken_2dstatus_2escm",(void*)f_1298},
{"f_1660:chicken_2dstatus_2escm",(void*)f_1660},
{"f_1807:chicken_2dstatus_2escm",(void*)f_1807},
{"f_1801:chicken_2dstatus_2escm",(void*)f_1801},
{"f_1668:chicken_2dstatus_2escm",(void*)f_1668},
{"f_1663:chicken_2dstatus_2escm",(void*)f_1663},
{"toplevel:chicken_2dstatus_2escm",(void*)C_toplevel},
{"f_1190:chicken_2dstatus_2escm",(void*)f_1190},
{"f_1191:chicken_2dstatus_2escm",(void*)f_1191},
{"f_1044:chicken_2dstatus_2escm",(void*)f_1044},
{"f_920:chicken_2dstatus_2escm",(void*)f_920},
{"f_1794:chicken_2dstatus_2escm",(void*)f_1794},
{"f_1180:chicken_2dstatus_2escm",(void*)f_1180},
{"f_1186:chicken_2dstatus_2escm",(void*)f_1186},
{"f_1399:chicken_2dstatus_2escm",(void*)f_1399},
{"f_1424:chicken_2dstatus_2escm",(void*)f_1424},
{"f_1845:chicken_2dstatus_2escm",(void*)f_1845},
{"f_1841:chicken_2dstatus_2escm",(void*)f_1841},
{"f_1414:chicken_2dstatus_2escm",(void*)f_1414},
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
o|hiding nonexported module bindings: main#grep 
o|hiding nonexported module bindings: main#gather-extensions 
o|hiding nonexported module bindings: main#gather-eggs 
o|hiding nonexported module bindings: main#gather-all-extensions 
o|hiding nonexported module bindings: main#format-string 
o|hiding nonexported module bindings: main#get-terminal-width 
o|hiding nonexported module bindings: main#list-installed-extensions 
o|hiding nonexported module bindings: main#list-installed-eggs 
o|hiding nonexported module bindings: main#list-installed-files 
o|hiding nonexported module bindings: main#dump-installed-versions 
o|hiding nonexported module bindings: main#usage 
o|hiding nonexported module bindings: main#*short-options* 
o|hiding nonexported module bindings: main#main 
S|applied compiler syntax:
S|  for-each		4
S|  map		6
S|  sprintf		1
o|eliminated procedure checks: 31 
o|specializations:
o|  1 (> fixnum fixnum)
o|  1 (string-ref string fixnum)
o|  1 (positive? fixnum)
o|  2 (string-length string)
o|  11 (string=? string string)
o|  2 (current-error-port)
o|  1 (current-output-port)
o|  3 (string-append string string)
o|  2 (##sys#check-list (or pair list) *)
o|  9 (cdr pair)
o|  1 (##sys#check-output-port * * *)
o|inlining procedure: k859 
o|substituted constant variable: a877 
o|substituted constant variable: a878 
o|inlining procedure: k859 
o|propagated global variable: g172173 irregex-search 
o|inlining procedure: k934 
o|inlining procedure: k934 
o|inlining procedure: k999 
o|inlining procedure: k999 
o|inlining procedure: k1012 
o|inlining procedure: k1012 
o|contracted procedure: "(chicken-status.scm:65) egg-name213" 
o|inlining procedure: k975 
o|inlining procedure: k975 
o|inlining procedure: k1046 
o|inlining procedure: k1046 
o|merged explicitly consed rest parameter: tmp255258 
o|inlining procedure: k1107 
o|inlining procedure: k1107 
o|inlining procedure: k1155 
o|substituted constant variable: default-width272 
o|substituted constant variable: default-width272 
o|inlining procedure: k1155 
o|substituted constant variable: default-width272 
o|propagated global variable: cop273 ##sys#standard-output 
o|inlining procedure: k1196 
o|consed rest parameter at call site: "(chicken-status.scm:100) main#format-string" 3 
o|substituted constant variable: a1214 
o|consed rest parameter at call site: "(chicken-status.scm:99) main#format-string" 3 
o|inlining procedure: k1196 
o|inlining procedure: k1250 
o|inlining procedure: k1250 
o|inlining procedure: k1290 
o|inlining procedure: k1290 
o|inlining procedure: k1322 
o|inlining procedure: k1322 
o|inlining procedure: k1352 
o|inlining procedure: k1352 
o|contracted procedure: "(chicken-status.scm:220) main#main" 
o|inlining procedure: k1455 
o|inlining procedure: k1496 
o|inlining procedure: k1496 
o|inlining procedure: k1511 
o|propagated global variable: r15121980 main#list-installed-files 
o|inlining procedure: k1511 
o|propagated global variable: r15121981 main#list-installed-extensions 
o|inlining procedure: k1517 
o|inlining procedure: k1517 
o|inlining procedure: k1552 
o|inlining procedure: k1573 
o|contracted procedure: "(chicken-status.scm:165) g417426" 
o|inlining procedure: k1573 
o|inlining procedure: k1552 
o|inlining procedure: k1614 
o|inlining procedure: k1614 
o|inlining procedure: k1646 
o|contracted procedure: "(chicken-status.scm:176) main#dump-installed-versions" 
o|inlining procedure: k1416 
o|contracted procedure: "(chicken-status.scm:122) g344351" 
o|inlining procedure: k1390 
o|inlining procedure: k1390 
o|inlining procedure: k1416 
o|inlining procedure: k1646 
o|inlining procedure: k1697 
o|inlining procedure: k1697 
o|inlining procedure: k1455 
o|substituted constant variable: a1719 
o|inlining procedure: k1715 
o|inlining procedure: k1715 
o|substituted constant variable: a1730 
o|substituted constant variable: a1741 
o|inlining procedure: k1737 
o|inlining procedure: k1737 
o|substituted constant variable: a1752 
o|substituted constant variable: a1763 
o|inlining procedure: k1759 
o|inlining procedure: k1759 
o|substituted constant variable: a1777 
o|substituted constant variable: a1791 
o|inlining procedure: k1787 
o|inlining procedure: k1787 
o|inlining procedure: k1808 
o|inlining procedure: k1847 
o|contracted procedure: "(chicken-status.scm:215) g537546" 
o|inlining procedure: k1847 
o|substituted constant variable: main#*short-options* 
o|inlining procedure: k1808 
o|substituted constant variable: a1899 
o|substituted constant variable: a1919 
o|substituted constant variable: a1922 
o|substituted constant variable: a1924 
o|substituted constant variable: a1926 
o|inlining procedure: k1927 
o|inlining procedure: k1927 
o|substituted constant variable: a1931 
o|replaced variables: 205 
o|removed binding forms: 95 
o|substituted constant variable: r9761960 
o|contracted procedure: "(chicken-status.scm:93) main#get-terminal-width" 
o|substituted constant variable: r11561966 
o|substituted constant variable: r13531976 
o|removed side-effect free assignment to unused variable: main#*short-options* 
o|inlining procedure: k1505 
o|propagated global variable: r15062041 main#list-installed-eggs 
o|propagated global variable: r15062041 main#list-installed-eggs 
o|inlining procedure: k1505 
o|propagated global variable: r15062047 main#list-installed-files 
o|propagated global variable: r15062047 main#list-installed-files 
o|inlining procedure: k1505 
o|propagated global variable: r15062053 main#list-installed-extensions 
o|propagated global variable: r15062053 main#list-installed-extensions 
o|substituted constant variable: r13911994 
o|substituted constant variable: r13911994 
o|replaced variables: 3 
o|removed binding forms: 231 
o|inlining procedure: "(chicken-status.scm:188) main#usage" 
o|inlining procedure: "(chicken-status.scm:216) main#usage" 
o|inlining procedure: "(chicken-status.scm:217) main#usage" 
o|replaced variables: 5 
o|removed binding forms: 14 
o|removed side-effect free assignment to unused variable: main#usage 
o|substituted constant variable: code3622100 
o|substituted constant variable: code3622107 
o|substituted constant variable: code3622112 
o|removed binding forms: 5 
o|removed binding forms: 4 
o|simplifications: ((if . 11) (##core#call . 94)) 
o|  call simplifications:
o|    string=?
o|    char=?
o|    ##sys#size	2
o|    fx>
o|    string->list
o|    memq
o|    string
o|    list
o|    ##sys#call-with-values
o|    list-ref
o|    zero?
o|    -
o|    quotient
o|    cdr	3
o|    string-length
o|    fx-
o|    fxmax
o|    null?	8
o|    car	4
o|    assq	4
o|    cadr	3
o|    member
o|    ##sys#check-list	8
o|    pair?	10
o|    cons	8
o|    ##sys#setslot	6
o|    ##sys#slot	20
o|    not	2
o|contracted procedure: k862 
o|contracted procedure: k925 
o|contracted procedure: k937 
o|contracted procedure: k940 
o|contracted procedure: k951 
o|contracted procedure: k963 
o|contracted procedure: k1002 
o|contracted procedure: k1012 
o|contracted procedure: k1027 
o|contracted procedure: k1031 
o|contracted procedure: k972 
o|contracted procedure: k1049 
o|contracted procedure: k1052 
o|contracted procedure: k1063 
o|contracted procedure: k1075 
o|contracted procedure: k1146 
o|contracted procedure: k1089 
o|contracted procedure: k1140 
o|contracted procedure: k1092 
o|contracted procedure: k1134 
o|contracted procedure: k1095 
o|contracted procedure: k1128 
o|contracted procedure: k1098 
o|contracted procedure: k1101 
o|contracted procedure: k1125 
o|contracted procedure: k1121 
o|contracted procedure: k1193 
o|contracted procedure: k1220 
o|contracted procedure: k1241 
o|contracted procedure: k1253 
o|contracted procedure: k1263 
o|contracted procedure: k1267 
o|contracted procedure: k1271 
o|contracted procedure: k1167 
o|contracted procedure: k1281 
o|contracted procedure: k1293 
o|contracted procedure: k1303 
o|contracted procedure: k1307 
o|contracted procedure: k1325 
o|contracted procedure: k1335 
o|contracted procedure: k1339 
o|contracted procedure: k1349 
o|contracted procedure: k1458 
o|contracted procedure: k1484 
o|contracted procedure: k1490 
o|contracted procedure: k1499 
o|contracted procedure: k1520 
o|contracted procedure: k1523 
o|contracted procedure: k1534 
o|contracted procedure: k1546 
o|contracted procedure: k1549 
o|contracted procedure: k1564 
o|contracted procedure: k1576 
o|contracted procedure: k1579 
o|contracted procedure: k1590 
o|contracted procedure: k1602 
o|contracted procedure: k1605 
o|contracted procedure: k1617 
o|contracted procedure: k1620 
o|contracted procedure: k1631 
o|contracted procedure: k1643 
o|contracted procedure: k1407 
o|contracted procedure: k1419 
o|contracted procedure: k1429 
o|contracted procedure: k1433 
o|contracted procedure: k1371 
o|contracted procedure: k1378 
o|contracted procedure: k1390 
o|contracted procedure: k1655 
o|contracted procedure: k1700 
o|contracted procedure: k1706 
o|contracted procedure: k1764 
o|contracted procedure: k1778 
o|contracted procedure: k1896 
o|contracted procedure: k1811 
o|contracted procedure: k1836 
o|contracted procedure: k1850 
o|contracted procedure: k1876 
o|contracted procedure: k1872 
o|contracted procedure: k1853 
o|contracted procedure: k1864 
o|contracted procedure: k1907 
o|contracted procedure: k1911 
o|simplifications: ((let . 16)) 
o|removed binding forms: 83 
o|inlining procedure: k943 
o|inlining procedure: k943 
o|inlining procedure: k1055 
o|inlining procedure: k1055 
o|inlining procedure: k1526 
o|inlining procedure: k1526 
o|inlining procedure: k1582 
o|inlining procedure: k1582 
o|inlining procedure: k1623 
o|inlining procedure: k1623 
o|inlining procedure: k1856 
o|inlining procedure: k1856 
o|replaced variables: 26 
o|removed binding forms: 23 
o|replaced variables: 24 
o|removed binding forms: 6 
o|customizable procedures: (k1709 k1805 map-loop531556 loop371 k1464 status384 for-each-loop343356 map-loop438455 map-loop411429 map-loop388462 for-each-loop323335 for-each-loop304314 g284291 for-each-loop283295 main#format-string map-loop226243 main#repo-path k1017 loop216 main#gather-all-extensions g185194 map-loop179204) 
o|calls to known targets: 70 
o|identified direct recursive calls: f_1845 2 
o|fast box initializations: 12 
o|fast global references: 35 
o|fast global assignments: 16 
o|dropping unused closure argument: f_857 
o|dropping unused closure argument: f_1087 
o|dropping unused closure argument: f_1035 
*/
/* end of file */
