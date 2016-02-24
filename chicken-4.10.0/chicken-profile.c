/* Generated from chicken-profile.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:02
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: chicken-profile.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -local -no-trace -output-file chicken-profile.c
   used units: library eval chicken_2dsyntax srfi_2d1 srfi_2d13 srfi_2d69 posix utils
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
C_noret_decl(C_srfi_2d13_toplevel)
C_externimport void C_ccall C_srfi_2d13_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d69_toplevel)
C_externimport void C_ccall C_srfi_2d69_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[94];
static double C_possibly_force_alignment;


C_noret_decl(f_1401)
static void C_ccall f_1401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1404)
static void C_ccall f_1404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1287)
static void C_ccall f_1287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1418)
static void C_ccall f_1418(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1416)
static void C_ccall f_1416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1526)
static void C_ccall f_1526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1279)
static void C_ccall f_1279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1516)
static void C_fcall f_1516(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1268)
static void C_fcall f_1268(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1505)
static void C_ccall f_1505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1508)
static void C_ccall f_1508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1303)
static void C_ccall f_1303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1094)
static void C_ccall f_1094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1091)
static void C_ccall f_1091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1151)
static void C_fcall f_1151(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1139)
static void C_ccall f_1139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1344)
static void C_fcall f_1344(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1341)
static void C_ccall f_1341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1161)
static void C_fcall f_1161(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1164)
static void C_fcall f_1164(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1073)
static void C_ccall f_1073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1087)
static void C_ccall f_1087(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1630)
static void C_fcall f_1630(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1202)
static void C_ccall f_1202(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1202)
static void C_ccall f_1202r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1729)
static void C_ccall f_1729(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1332)
static void C_ccall f_1332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1113)
static void C_ccall f_1113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1338)
static void C_ccall f_1338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1077)
static void C_ccall f_1077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1710)
static void C_ccall f_1710(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1149)
static void C_ccall f_1149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1069)
static void C_ccall f_1069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1870)
static void C_ccall f_1870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1704)
static void C_ccall f_1704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1614)
static void C_ccall f_1614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1044)
static void C_ccall f_1044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_946)
static void C_ccall f_946(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1120)
static void C_ccall f_1120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1034)
static void C_fcall f_1034(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1675)
static void C_fcall f_1675(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1764)
static void C_fcall f_1764(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1757)
static void C_fcall f_1757(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1014)
static void C_ccall f_1014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1010)
static void C_ccall f_1010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1101)
static void C_ccall f_1101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1103)
static void C_fcall f_1103(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1002)
static void C_ccall f_1002(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1791)
static void C_fcall f_1791(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1733)
static void C_ccall f_1733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1789)
static void C_ccall f_1789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1739)
static void C_fcall f_1739(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_805)
static void C_ccall f_805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_709)
static void C_ccall f_709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_702)
static void C_fcall f_702(C_word t0,C_word t1) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_911)
static void C_ccall f_911(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_827)
static void C_ccall f_827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_820)
static void C_ccall f_820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_739)
static void C_ccall f_739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_735)
static void C_ccall f_735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_842)
static void C_ccall f_842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_619)
static void C_ccall f_619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_745)
static void C_fcall f_745(C_word t0,C_word t1) C_noret;
C_noret_decl(f_616)
static void C_ccall f_616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_628)
static void C_ccall f_628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_712)
static void C_ccall f_712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_625)
static void C_ccall f_625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_622)
static void C_ccall f_622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_727)
static void C_ccall f_727(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_637)
static void C_ccall f_637(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_725)
static void C_ccall f_725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_631)
static void C_ccall f_631(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_634)
static void C_ccall f_634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_878)
static void C_ccall f_878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1594)
static void C_fcall f_1594(C_word t0,C_word t1) C_noret;
C_noret_decl(f_649)
static void C_ccall f_649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_645)
static void C_fcall f_645(C_word t0) C_noret;
C_noret_decl(f_1291)
static void C_ccall f_1291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_884)
static void C_fcall f_884(C_word t0,C_word t1) C_noret;
C_noret_decl(f_784)
static void C_ccall f_784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_656)
static void C_ccall f_656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_787)
static void C_ccall f_787(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1581)
static void C_fcall f_1581(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_812)
static void C_ccall f_812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1570)
static void C_ccall f_1570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1860)
static void C_ccall f_1860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1863)
static void C_ccall f_1863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_764)
static void C_fcall f_764(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1563)
static void C_ccall f_1563(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1853)
static void C_ccall f_1853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1323)
static void C_ccall f_1323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1866)
static void C_ccall f_1866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1329)
static void C_ccall f_1329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_973)
static void C_ccall f_973(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1311)
static void C_ccall f_1311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1315)
static void C_ccall f_1315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1541)
static void C_ccall f_1541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1549)
static void C_ccall f_1549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1382)
static void C_ccall f_1382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_692)
static void C_fcall f_692(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1820)
static void C_ccall f_1820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1478)
static void C_ccall f_1478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1370)
static void C_ccall f_1370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1374)
static void C_ccall f_1374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1378)
static void C_ccall f_1378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1454)
static void C_fcall f_1454(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1826)
static void C_fcall f_1826(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1366)
static void C_ccall f_1366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1441)
static void C_fcall f_1441(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1439)
static void C_ccall f_1439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1221)
static void C_ccall f_1221(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1359)
static void C_ccall f_1359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1413)
static void C_ccall f_1413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1426)
static void C_ccall f_1426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1448)
static void C_fcall f_1448(C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1516)
static void C_fcall trf_1516(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1516(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1516(t0,t1,t2);}

C_noret_decl(trf_1268)
static void C_fcall trf_1268(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1268(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1268(t0,t1,t2);}

C_noret_decl(trf_1151)
static void C_fcall trf_1151(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1151(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1151(t0,t1,t2,t3);}

C_noret_decl(trf_1344)
static void C_fcall trf_1344(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1344(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1344(t0,t1);}

C_noret_decl(trf_1161)
static void C_fcall trf_1161(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1161(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1161(t0,t1);}

C_noret_decl(trf_1164)
static void C_fcall trf_1164(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1164(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1164(t0,t1);}

C_noret_decl(trf_1630)
static void C_fcall trf_1630(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1630(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1630(t0,t1,t2);}

C_noret_decl(trf_1034)
static void C_fcall trf_1034(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1034(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1034(t0,t1,t2);}

C_noret_decl(trf_1675)
static void C_fcall trf_1675(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1675(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1675(t0,t1,t2);}

C_noret_decl(trf_1764)
static void C_fcall trf_1764(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1764(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1764(t0,t1);}

C_noret_decl(trf_1757)
static void C_fcall trf_1757(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1757(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1757(t0,t1);}

C_noret_decl(trf_1103)
static void C_fcall trf_1103(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1103(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1103(t0,t1,t2);}

C_noret_decl(trf_1791)
static void C_fcall trf_1791(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1791(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1791(t0,t1,t2);}

C_noret_decl(trf_1739)
static void C_fcall trf_1739(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1739(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1739(t0,t1,t2);}

C_noret_decl(trf_702)
static void C_fcall trf_702(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_702(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_702(t0,t1);}

C_noret_decl(trf_745)
static void C_fcall trf_745(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_745(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_745(t0,t1);}

C_noret_decl(trf_1594)
static void C_fcall trf_1594(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1594(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1594(t0,t1);}

C_noret_decl(trf_645)
static void C_fcall trf_645(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_645(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_645(t0);}

C_noret_decl(trf_884)
static void C_fcall trf_884(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_884(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_884(t0,t1);}

C_noret_decl(trf_1581)
static void C_fcall trf_1581(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1581(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1581(t0,t1,t2,t3);}

C_noret_decl(trf_764)
static void C_fcall trf_764(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_764(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_764(t0,t1);}

C_noret_decl(trf_692)
static void C_fcall trf_692(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_692(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_692(t0,t1,t2);}

C_noret_decl(trf_1454)
static void C_fcall trf_1454(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1454(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1454(t0,t1);}

C_noret_decl(trf_1826)
static void C_fcall trf_1826(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1826(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1826(t0,t1,t2,t3);}

C_noret_decl(trf_1441)
static void C_fcall trf_1441(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1441(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1441(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1448)
static void C_fcall trf_1448(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1448(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1448(t0,t1);}

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

C_noret_decl(tr4r)
static void C_fcall tr4r(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4r(C_proc4 k){
int n;
C_word *a,t4;
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
n=C_rest_count(0);
a=C_alloc(n*3);
t4=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4);}

/* k1399 in k1342 in k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1401,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1404,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1675,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1675(t6,t2,t1);}

/* k1402 in k1399 in k1342 in k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[38],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1404,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_a_i_list5(&a,5,lf[44],lf[45],lf[46],lf[47],lf[48]);
t4=t3;
t5=C_a_i_list5(&a,5,C_SCHEME_FALSE,C_SCHEME_TRUE,C_SCHEME_TRUE,C_SCHEME_TRUE,C_SCHEME_TRUE);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1413,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_symbol_proc(lf[56]))(4,*((C_word*)lf[56]+1),t7,C_fix(2),C_make_character(32));}

/* k1285 in k1277 in k1321 in format-real in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:174: string-append */
t2=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* print-row in k1414 in k1411 in k1402 in k1399 in k1342 in k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1418(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[19],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1418,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1426,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=lf[30];
t9=C_i_check_list_2(t2,lf[24]);
t10=C_i_check_list_2(((C_word*)t0)[2],lf[24]);
t11=C_i_check_list_2(((C_word*)t0)[3],lf[24]);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1439,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1441,a[2]=t7,a[3]=t14,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_1441(t16,t12,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k1414 in k1411 in k1402 in k1399 in k1342 in k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1416,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1418,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1505,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* chicken-profile.scm:229: print-row */
t5=t3;
f_1418(3,t5,t4,((C_word*)t0)[6]);}

/* k1524 in for-each-loop327 in k1506 in k1503 in k1414 in k1411 in k1402 in k1399 in k1342 in k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in ... */
static void C_ccall f_1526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1516(t3,((C_word*)t0)[4],t2);}

/* k1277 in k1321 in format-real in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1279(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1279,2,t0,t1);}
t2=t1;
t3=C_i_greaterp(((C_word*)t0)[2],C_fix(0));
t4=(C_truep(t3)?lf[34]:lf[35]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1287,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1291,a[2]=((C_word*)t0)[2],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1303,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1311,a[2]=t8,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:181: - */
t10=*((C_word*)lf[41]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t9,((C_word*)t0)[4],((C_word*)t0)[5],C_fix(-1));}

/* for-each-loop327 in k1506 in k1503 in k1414 in k1411 in k1402 in k1399 in k1342 in k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in ... */
static void C_fcall f_1516(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1516,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1526,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-profile.scm:233: g328 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* format-real in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_fcall f_1268(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1268,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1323,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-profile.scm:173: truncate */
t5=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k1503 in k1414 in k1411 in k1402 in k1399 in k1342 in k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1505,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1508,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1541,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1549,a[2]=((C_word*)t0)[5],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:230: reduce */
t5=C_fast_retrieve(lf[52]);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,*((C_word*)lf[53]+1),C_fix(0),((C_word*)t0)[6]);}

/* k1506 in k1503 in k1414 in k1411 in k1402 in k1399 in k1342 in k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 in ... */
static void C_ccall f_1508(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1508,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=((C_word*)((C_word*)t0)[3])[1];
t4=C_i_check_list_2(t3,lf[51]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1516,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_1516(t8,((C_word*)t0)[4],t3);}

/* k1301 in k1277 in k1321 in format-real in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_inexact_to_exact(t1);
/* ##sys#fixnum->string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[38]))(3,*((C_word*)lf[38]+1),((C_word*)t0)[2],t2);}

/* k1092 in k1089 in read-profile in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:163: hash-table->alist */
t2=C_fast_retrieve(lf[22]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k1089 in read-profile in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1091,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1094,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1101,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:156: read */
t5=*((C_word*)lf[23]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* map-loop69 in k1137 in doloop64 in k1099 in k1089 in read-profile in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_fcall f_1151(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1151,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1161,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
if(C_truep(t7)){
if(C_truep(t8)){
t9=C_a_i_plus(&a,2,t7,t8);
t10=t6;
f_1161(t10,C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST));}
else{
t9=t6;
f_1161(t9,C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST));}}
else{
t9=t6;
f_1161(t9,C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST));}}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k1137 in doloop64 in k1099 in k1089 in read-profile in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1139(C_word c,C_word t0,C_word t1){
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
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1139,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_i_check_list_2(t1,lf[24]);
t5=C_i_check_list_2(t3,lf[24]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1149,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1151,a[2]=((C_word*)t0)[6],a[3]=t8,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_1151(t10,t6,t1,t3);}

/* k1342 in k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_fcall f_1344(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1344,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1401,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1710,tmp=(C_word)a,a+=2,tmp);
/* chicken-profile.scm:213: remove */
t8=C_fast_retrieve(lf[61]);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,t7,((C_word*)((C_word*)t0)[2])[1]);}

/* k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1341,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1344,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1729,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_i_length(((C_word*)t3)[1]);
/* chicken-profile.scm:201: < */
C_lessp(5,0,t5,C_fix(0),lf[5],t6);}

/* k1159 in map-loop69 in k1137 in doloop64 in k1099 in k1089 in read-profile in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_fcall f_1161(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1161,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1164,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t4=t3;
f_1164(t4,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2));}
else{
t4=C_mutate2(((C_word *)((C_word*)t0)[7])+1,t2);
t5=t3;
f_1164(t5,t4);}}

/* k1162 in k1159 in map-loop69 in k1137 in doloop64 in k1099 in k1089 in read-profile in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_fcall f_1164(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=C_slot(((C_word*)t0)[5],C_fix(1));
t5=((C_word*)((C_word*)t0)[6])[1];
f_1151(t5,((C_word*)t0)[7],t3,t4);}

/* k1071 in k1067 in k876 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1073,2,t0,t1);}
t2=C_mutate2(&lf[3] /* (set! average-digits ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1077,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:151: arg-digit */
t4=C_retrieve2(lf[89],"arg-digit");
f_1034(t4,t3,C_fix(2));}

/* read-profile in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1087(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1087,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1091,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:155: make-hash-table */
t3=C_fast_retrieve(lf[28]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,*((C_word*)lf[29]+1));}

/* map-loop253 in a1562 in k1411 in k1402 in k1399 in k1342 in k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_fcall f_1630(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_1630,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_string_length(t3);
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

/* format-string in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1202(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_1202r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1202r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1202r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(5);
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
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1221,a[2]=t7,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t16=C_fixnum_difference(t3,t14);
t17=C_i_fixnum_max(C_fix(0),t16);
/* chicken-profile.scm:167: make-string */
t18=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t18+1)))(4,t18,t15,t17,t11);}

/* k1727 in k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1729(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1729,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1733,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:202: take */
t3=C_fast_retrieve(lf[62]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)((C_word*)t0)[2])[1],lf[5]);}
else{
t2=((C_word*)t0)[3];
f_1344(t2,C_SCHEME_UNDEFINED);}}

/* k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1332(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1332,2,t0,t1);}
t2=t1;
t3=C_i_check_list_2(t2,lf[43]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1338,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1826,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_1826(t8,t4,t2,C_fix(0));}

/* k1111 in doloop64 in k1099 in k1089 in read-profile in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1113,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1120,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:156: read */
t3=*((C_word*)lf[23]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1338(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1338,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1341,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1739,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1789,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1791,a[2]=t7,a[3]=t11,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_1791(t13,t9,((C_word*)t0)[3]);}

/* k1075 in k1071 in k1067 in k876 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(&lf[4] /* (set! percent-digits ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* a1709 in k1342 in k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1710(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_1710,3,t0,t1,t2);}
if(C_truep(C_i_cadr(t2))){
t3=t2;
t4=C_u_i_cdr(t3);
t5=C_u_i_car(t4);
t6=C_i_zerop(t5);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_truep(t6)?lf[1]:C_SCHEME_FALSE));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k1147 in k1137 in doloop64 in k1099 in k1089 in read-profile in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:158: hash-table-set! */
t2=C_fast_retrieve(lf[25]);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1067 in k876 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1069,2,t0,t1);}
t2=C_mutate2(&lf[2] /* (set! seconds-digits ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1073,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:150: arg-digit */
t4=C_retrieve2(lf[89],"arg-digit");
f_1034(t4,t3,C_fix(1));}

/* k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1870,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_692,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_692(t5,((C_word*)t0)[2],t1);}

/* k1702 in map-loop192 in k1399 in k1342 in k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1704(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1704,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1675(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1675(t6,((C_word*)t0)[5],t5);}}

/* k1612 in map-loop232 in k1568 in a1562 in k1411 in k1402 in k1399 in k1342 in k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in ... */
static void C_ccall f_1614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1614,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1594,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t5=t4;
f_1594(t5,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t3));}
else{
t5=C_mutate2(((C_word *)((C_word*)t0)[7])+1,t3);
t6=t4;
f_1594(t6,t5);}}

/* k1042 in arg-digit in k876 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1044(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_i_nequalp(((C_word*)t0)[2],C_fix(9));
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?C_fix(8):((C_word*)t0)[2]));}
else{
/* chicken-profile.scm:148: error */
t2=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],lf[90],((C_word*)t0)[4]);}}

/* sort-by-time in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_946(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_946,4,t0,t1,t2,t3);}
t4=C_i_caddr(t2);
t5=C_i_caddr(t3);
if(C_truep(C_i_nequalp(t4,t5))){
t6=t2;
t7=C_u_i_cdr(t6);
t8=C_u_i_car(t7);
t9=t3;
t10=C_u_i_cdr(t9);
t11=C_u_i_car(t10);
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_i_greaterp(t8,t11));}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_greaterp(t4,t5));}}

/* k1118 in k1111 in doloop64 in k1099 in k1089 in read-profile in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[2])[1];
f_1103(t2,((C_word*)t0)[3],t1);}

/* arg-digit in k876 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_fcall f_1034(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1034,NULL,3,t0,t1,t2);}
t3=C_i_string_ref(((C_word*)t0)[2],t2);
t4=C_fix(C_character_code(t3));
t5=C_a_i_minus(&a,2,t4,C_fix(48));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1044,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* chicken-profile.scm:146: <= */
C_less_or_equal_p(5,0,t7,C_fix(0),t6,C_fix(9));}

/* map-loop192 in k1399 in k1342 in k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_fcall f_1675(C_word t0,C_word t1,C_word t2){
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
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1675,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1704,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=C_i_cadr(t6);
t8=t7;
t9=C_i_caddr(t6);
t10=t9;
t11=C_i_cadddr(t6);
t12=t11;
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1359,a[2]=t5,a[3]=t12,a[4]=t10,a[5]=t8,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
/* chicken-profile.scm:207: fifth */
t14=C_fast_retrieve(lf[60]);
((C_proc3)(void*)(*((C_word*)t14+1)))(3,t14,t13,t6);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1762 in k1755 in g160 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_fcall f_1764(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1764,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=C_a_i_list2(&a,2,((C_word*)t0)[2],t2);
/* chicken-profile.scm:190: append */
t4=*((C_word*)lf[63]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[3],((C_word*)t0)[4],t3);}
else{
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],C_fix(0));
/* chicken-profile.scm:190: append */
t3=*((C_word*)lf[63]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[4],t2);}}

/* k1755 in g160 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_fcall f_1757(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1757,NULL,2,t0,t1);}
t2=(C_truep(t1)?t1:C_fix(0));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1764,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_greaterp(((C_word*)t0)[4],C_fix(0)))){
t5=C_a_i_divide(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t6=t4;
f_1764(t6,C_a_i_times(&a,2,t5,C_fix(100)));}
else{
t5=t4;
f_1764(t5,C_SCHEME_FALSE);}}

/* k1012 in k1008 in sort-by-name in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:136: string<? */
t2=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k1008 in sort-by-name in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1010,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1014,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(((C_word*)t0)[3]);
/* chicken-profile.scm:136: symbol->string */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k1099 in k1089 in read-profile in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1101,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1103,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_1103(t5,((C_word*)t0)[3],t1);}

/* doloop64 in k1099 in k1089 in read-profile in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_fcall f_1103(C_word t0,C_word t1,C_word t2){
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
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1103,NULL,3,t0,t1,t2);}
if(C_truep(C_eofp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1113,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(t2);
t5=t4;
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1139,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=t9,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
t11=t2;
t12=C_u_i_car(t11);
/* chicken-profile.scm:161: hash-table-ref/default */
t13=C_fast_retrieve(lf[26]);
((C_proc5)(void*)(*((C_word*)t13+1)))(5,t13,t10,((C_word*)t0)[3],t12,lf[27]);}}

/* sort-by-name in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1002(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1002,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1010,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_car(t2);
/* chicken-profile.scm:136: symbol->string */
t6=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* map-loop154 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_fcall f_1791(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1791,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1820,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-profile.scm:188: g160 */
t5=((C_word*)t0)[5];
f_1739(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1731 in k1727 in k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1733(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_1344(t3,t2);}

/* k1787 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:188: sort */
t2=C_fast_retrieve(lf[64]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[20]);}

/* g160 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_fcall f_1739(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_1739,NULL,3,t0,t1,t2);}
t3=C_i_cadr(t2);
t4=C_i_caddr(t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1757,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t7=C_i_greaterp(t3,C_fix(0));
t8=t6;
f_1757(t8,(C_truep(t7)?C_a_i_divide(&a,2,t5,t3):C_SCHEME_FALSE));}
else{
t7=t6;
f_1757(t7,C_SCHEME_FALSE);}}

/* k803 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:97: exit */
t2=C_fast_retrieve(lf[7]);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k707 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_709(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_709,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_712,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t1))){
/* chicken-profile.scm:76: error */
t3=*((C_word*)lf[68]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[69]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_725,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_727,tmp=(C_word)a,a+=2,tmp);
/* chicken-profile.scm:77: sort */
t5=C_fast_retrieve(lf[64]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t1,t4);}}

/* k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_fcall f_702(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_702,NULL,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1329,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:185: print */
t4=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[66],lf[0],lf[67]);}

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
if(!C_demand_2(436)){
C_save(t1);
C_rereclaim2(436*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,94);
lf[7]=C_h_intern(&lf[7],4,"exit");
lf[8]=C_h_intern(&lf[8],7,"display");
lf[9]=C_decode_literal(C_heaptop,"\376B\000\001\242)\012 -no-unused                remove procedures that are never called\012 -top "
"N                    display only the top N entries\012 -help                     s"
"how this text and exit\012 -version                  show version and exit\012 -releas"
"e                  show release number and exit\012\012 FILENAME defaults to the `PROF"
"ILE.<number>\047, selecting the one with\012 the highest modification time, in case mu"
"ltiple profiles exist.\012");
lf[10]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[11]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[12]=C_decode_literal(C_heaptop,"\376B\000\001\315Usage: chicken-profile [FILENAME | OPTION] ...\012\012 -sort-by-calls            "
"sort output by call frequency\012 -sort-by-time             sort output by procedur"
"e execution time\012 -sort-by-avg              sort output by average procedure exe"
"cution time\012 -sort-by-name             sort output alphabetically by procedure n"
"ame\012 -decimals DDD             set number of decimals for seconds, average and\012 "
"                          percent columns (three digits, default: ");
lf[13]=C_h_intern(&lf[13],19,"\003sysprint-to-string");
lf[18]=C_h_intern(&lf[18],8,"string<\077");
lf[19]=C_h_intern(&lf[19],14,"symbol->string");
lf[22]=C_h_intern(&lf[22],17,"hash-table->alist");
lf[23]=C_h_intern(&lf[23],4,"read");
lf[24]=C_h_intern(&lf[24],3,"map");
lf[25]=C_h_intern(&lf[25],15,"hash-table-set!");
lf[26]=C_h_intern(&lf[26],22,"hash-table-ref/default");
lf[27]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\000\376\003\000\000\002\376\377\001\000\000\000\000\376\377\016");
lf[28]=C_h_intern(&lf[28],15,"make-hash-table");
lf[29]=C_h_intern(&lf[29],3,"eq\077");
lf[31]=C_h_intern(&lf[31],17,"\003sysstring-append");
lf[32]=C_h_intern(&lf[32],11,"make-string");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[35]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[36]=C_h_intern(&lf[36],13,"string-append");
lf[37]=C_h_intern(&lf[37],9,"substring");
lf[38]=C_h_intern(&lf[38],18,"\003sysfixnum->string");
lf[39]=C_h_intern(&lf[39],8,"truncate");
lf[40]=C_h_intern(&lf[40],4,"expt");
lf[41]=C_h_intern(&lf[41],1,"-");
lf[42]=C_h_intern(&lf[42],25,"\003sysimplicit-exit-handler");
lf[43]=C_h_intern(&lf[43],5,"foldl");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000\011procedure");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\005calls");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\007seconds");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\007average");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\007percent");
lf[49]=C_h_intern(&lf[49],5,"print");
lf[50]=C_h_intern(&lf[50],11,"string-join");
lf[51]=C_h_intern(&lf[51],8,"for-each");
lf[52]=C_h_intern(&lf[52],6,"reduce");
lf[53]=C_h_intern(&lf[53],1,"+");
lf[54]=C_h_intern(&lf[54],3,"max");
lf[55]=C_h_intern(&lf[55],4,"fold");
lf[56]=C_h_intern(&lf[56],15,"\003sysmake-string");
lf[57]=C_h_intern(&lf[57],14,"number->string");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\010overflow");
lf[59]=C_h_intern(&lf[59],28,"\003syssymbol->qualified-string");
lf[60]=C_h_intern(&lf[60],5,"fifth");
lf[61]=C_h_intern(&lf[61],6,"remove");
lf[62]=C_h_intern(&lf[62],4,"take");
lf[63]=C_h_intern(&lf[63],6,"append");
lf[64]=C_h_intern(&lf[64],4,"sort");
lf[65]=C_h_intern(&lf[65],20,"with-input-from-file");
lf[66]=C_decode_literal(C_heaptop,"\376B\000\000\011reading `");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\006\047 ...\012");
lf[68]=C_h_intern(&lf[68],5,"error");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\021no PROFILEs found");
lf[70]=C_h_intern(&lf[70],22,"file-modification-time");
lf[71]=C_h_intern(&lf[71],4,"glob");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000\011PROFILE.\052");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000\032missing argument to option");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\032invalid argument to option");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000\002-h");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000\005-help");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\006--help");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\010-version");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\032chicken-profile - Version ");
lf[80]=C_h_intern(&lf[80],15,"chicken-version");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000\010-release");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\000\012-no-unused");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\000\004-top");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\016-sort-by-calls");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\015-sort-by-time");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\014-sort-by-avg");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\015-sort-by-name");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\011-decimals");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000$invalid argument to -decimals option");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000$invalid argument to -decimals option");
lf[92]=C_decode_literal(C_heaptop,"\376B\000\000\016invalid option");
lf[93]=C_h_intern(&lf[93],22,"command-line-arguments");
C_register_lf2(lf,94,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_616,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* sort-by-calls in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_911(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_911,4,t0,t1,t2,t3);}
t4=C_i_cadr(t2);
t5=C_i_cadr(t3);
if(C_truep(C_i_eqvp(t4,t5))){
t6=C_i_caddr(t2);
t7=C_i_caddr(t3);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_i_greaterp(t6,t7));}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(t4)?(C_truep(t5)?C_i_greaterp(t4,t5):C_SCHEME_TRUE):C_SCHEME_TRUE));}}

/* k825 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:99: print */
t2=*((C_word*)lf[49]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k818 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:100: exit */
t2=C_fast_retrieve(lf[7]);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k737 in k733 in a726 in k707 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_greaterp(((C_word*)t0)[3],t1));}

/* k733 in a726 in k707 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_735,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_739,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:80: file-modification-time */
t4=C_fast_retrieve(lf[70]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* k840 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(&lf[5] /* (set! top ...) */,t1);
/* chicken-profile.scm:112: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_692(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k617 in k614 */
static void C_ccall f_619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_619,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_622,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_chicken_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* next-arg in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_fcall f_745(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_745,NULL,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
/* chicken-profile.scm:86: error */
t2=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[73],((C_word*)t0)[3]);}
else{
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* k614 */
static void C_ccall f_616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_616,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_619,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_628,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_631,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d69_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k710 in k707 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(&lf[0] /* (set! file ...) */,t1);
t3=((C_word*)t0)[2];
f_702(t3,t2);}

/* k623 in k620 in k617 in k614 */
static void C_ccall f_625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_625,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_628,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d13_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k620 in k617 in k614 */
static void C_ccall f_622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_622,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_625,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d1_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* a726 in k707 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_727(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_727,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_735,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:79: file-modification-time */
t5=C_fast_retrieve(lf[70]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_637(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_637,2,t0,t1);}
t2=lf[0] /* file */ =C_SCHEME_FALSE;;
t3=lf[1] /* no-unused */ =C_SCHEME_FALSE;;
t4=lf[2] /* seconds-digits */ =C_fix(3);;
t5=lf[3] /* average-digits */ =C_fix(3);;
t6=lf[4] /* percent-digits */ =C_fix(3);;
t7=lf[5] /* top */ =C_fix(0);;
t8=C_mutate2(&lf[6] /* (set! print-usage ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_645,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate2(&lf[14] /* (set! sort-by-calls ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_911,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate2(&lf[15] /* (set! sort-by-time ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_946,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate2(&lf[16] /* (set! sort-by-avg ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_973,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate2(&lf[17] /* (set! sort-by-name ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1002,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate2(&lf[20] /* (set! sort-by ...) */,lf[15]);
t14=C_mutate2(&lf[21] /* (set! read-profile ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1087,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate2(&lf[30] /* (set! format-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1202,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate2(&lf[33] /* (set! format-real ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1268,tmp=(C_word)a,a+=2,tmp));
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1860,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1870,a[2]=t17,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:235: command-line-arguments */
t19=C_fast_retrieve(lf[93]);
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,t18);}

/* k723 in k707 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_car(t1);
t3=C_mutate2(&lf[0] /* (set! file ...) */,t2);
t4=((C_word*)t0)[2];
f_702(t4,t3);}

/* k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_631(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_631,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_634,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_posix_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_634,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_637,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k876 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_878(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_878,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t1;
t4=C_i_string_length(t3);
t5=C_eqp(t4,C_fix(3));
if(C_truep(t5)){
t6=C_mutate2(&lf[89] /* (set! arg-digit ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1034,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1069,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:149: arg-digit */
t8=C_retrieve2(lf[89],"arg-digit");
f_1034(t8,t7,C_fix(0));}
else{
/* chicken-profile.scm:152: error */
t6=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t2,lf[91],t3);}}

/* k1592 in k1612 in map-loop232 in k1568 in a1562 in k1411 in k1402 in k1399 in k1342 in k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in ... */
static void C_fcall f_1594(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=C_slot(((C_word*)t0)[5],C_fix(1));
t5=((C_word*)((C_word*)t0)[6])[1];
f_1581(t5,((C_word*)t0)[7],t3,t4);}

/* k647 in print-usage in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:66: exit */
t2=C_fast_retrieve(lf[7]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(64));}

/* print-usage in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_fcall f_645(C_word t1){
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
C_word ab[27],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_645,NULL,1,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_649,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_656,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,lf[9],C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,lf[4],t4);
t6=C_a_i_cons(&a,2,lf[10],t5);
t7=C_a_i_cons(&a,2,lf[3],t6);
t8=C_a_i_cons(&a,2,lf[11],t7);
t9=C_a_i_cons(&a,2,lf[2],t8);
t10=C_a_i_cons(&a,2,lf[12],t9);
/* chicken-profile.scm:44: ##sys#print-to-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[13]))(3,*((C_word*)lf[13]+1),t3,t10);}

/* k1289 in k1277 in k1321 in format-real in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1291,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
/* chicken-profile.scm:177: substring */
t3=*((C_word*)lf[37]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],t1,C_fix(1),t2);}

/* k882 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_fcall f_884(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* chicken-profile.scm:109: error */
t2=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[92],((C_word*)t0)[3]);}
else{
if(C_truep(lf[0])){
/* chicken-profile.scm:110: print-usage */
f_645(((C_word*)t0)[2]);}
else{
t2=C_mutate2(&lf[0] /* (set! file ...) */,((C_word*)t0)[3]);
/* chicken-profile.scm:112: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_692(t3,((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}}}

/* k782 in next-number in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_784,2,t0,t1);}
t2=C_a_i_string_to_number(&a,2,t1,C_fix(10));
if(C_truep(t2)){
if(C_truep(C_i_greaterp(t2,C_fix(0)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* chicken-profile.scm:92: error */
t3=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],lf[74],((C_word*)t0)[3]);}}
else{
/* chicken-profile.scm:92: error */
t3=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],lf[74],((C_word*)t0)[3]);}}

/* k654 in print-usage in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:45: display */
t2=*((C_word*)lf[8]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k785 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_787(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:112: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_692(t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* map-loop232 in k1568 in a1562 in k1411 in k1402 in k1399 in k1342 in k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 in ... */
static void C_fcall f_1581(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1581,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1614,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* chicken-profile.scm:223: g238 */
t9=*((C_word*)lf[54]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k810 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_812(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:96: print */
t2=*((C_word*)lf[49]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[79],t1);}

/* k1568 in a1562 in k1411 in k1402 in k1399 in k1342 in k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1570,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_i_check_list_2(t1,lf[24]);
t4=C_i_check_list_2(t2,lf[24]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1581,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_1581(t8,((C_word*)t0)[5],t1,t2);}

/* k1858 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1860(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1860,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1863,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1866,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
((C_proc2)C_fast_retrieve_symbol_proc(lf[42]))(2,*((C_word*)lf[42]+1),t3);}

/* k1861 in k1858 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* next-number in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_fcall f_764(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_764,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_784,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:91: next-arg */
t3=((C_word*)((C_word*)t0)[3])[1];
f_745(t3,t2);}

/* a1562 in k1411 in k1402 in k1399 in k1342 in k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1563(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[21],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1563,4,t0,t1,t2,t3);}
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_i_check_list_2(t2,lf[24]);
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1570,a[2]=t3,a[3]=t7,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1630,a[2]=t11,a[3]=t15,a[4]=t9,tmp=(C_word)a,a+=5,tmp));
t17=((C_word*)t15)[1];
f_1630(t17,t13,t2);}

/* k1851 in foldl138 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[2])[1];
f_1826(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1321 in format-real in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1323,2,t0,t1);}
t2=C_i_inexact_to_exact(t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1279,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* ##sys#fixnum->string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[38]))(3,*((C_word*)lf[38]+1),t4,t3);}

/* k1864 in k1858 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1329,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1332,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:186: with-input-from-file */
t3=C_fast_retrieve(lf[65]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[0],lf[21]);}

/* sort-by-avg in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_973(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_973,4,t0,t1,t2,t3);}
t4=C_i_cadddr(t2);
t5=C_i_cadddr(t3);
if(C_truep(C_i_eqvp(t4,t5))){
t6=t2;
t7=C_u_i_cdr(t6);
t8=C_u_i_cdr(t7);
t9=C_u_i_car(t8);
t10=t3;
t11=C_u_i_cdr(t10);
t12=C_u_i_cdr(t11);
t13=C_u_i_car(t12);
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_i_greaterp(t9,t13));}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_greaterp(t4,t5));}}

/* k1309 in k1277 in k1321 in format-real in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1311,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1315,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:181: expt */
t4=*((C_word*)lf[40]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_fix(10),((C_word*)t0)[3]);}

/* k1313 in k1309 in k1277 in k1321 in format-real in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1315,2,t0,t1);}
t2=C_a_i_times(&a,2,((C_word*)t0)[2],t1);
/* chicken-profile.scm:180: truncate */
t3=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t2);}

/* k1539 in k1503 in k1414 in k1411 in k1402 in k1399 in k1342 in k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 in ... */
static void C_ccall f_1541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:230: print */
t2=*((C_word*)lf[49]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1547 in k1503 in k1414 in k1411 in k1402 in k1399 in k1342 in k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 in ... */
static void C_ccall f_1549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1549,2,t0,t1);}
t2=C_i_length(((C_word*)t0)[2]);
t3=C_a_i_minus(&a,2,t2,C_fix(1));
t4=C_a_i_times(&a,2,C_fix(2),t3);
t5=C_a_i_plus(&a,2,t1,t4);
/* chicken-profile.scm:230: make-string */
t6=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,((C_word*)t0)[3],t5,C_make_character(45));}

/* k1380 in k1376 in k1372 in k1368 in k1364 in k1357 in map-loop192 in k1399 in k1342 in k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in ... */
static void C_ccall f_1382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1382,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list5(&a,5,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t1));}

/* loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_fcall f_692(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(24);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_692,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_702,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(lf[0])){
t4=t3;
f_702(t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_709,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:74: glob */
t5=C_fast_retrieve(lf[71]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[72]);}}
else{
t3=C_i_car(t2);
t4=t3;
t5=t2;
t6=C_u_i_cdr(t5);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_745,a[2]=t7,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t12=t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_764,a[2]=t4,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_787,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_truep(C_i_equalp(t4,lf[75]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[76]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[77]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))){
/* chicken-profile.scm:94: print-usage */
f_645(t13);}
else{
if(C_truep(C_i_string_equal_p(t4,lf[78]))){
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_805,a[2]=t13,tmp=(C_word)a,a+=3,tmp);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_812,a[2]=t14,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:96: chicken-version */
t16=C_fast_retrieve(lf[80]);
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,t15);}
else{
if(C_truep(C_u_i_string_equal_p(t4,lf[81]))){
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_820,a[2]=t13,tmp=(C_word)a,a+=3,tmp);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_827,a[2]=t14,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:99: chicken-version */
t16=C_fast_retrieve(lf[80]);
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,t15);}
else{
if(C_truep(C_u_i_string_equal_p(t4,lf[82]))){
t14=lf[1] /* no-unused */ =C_SCHEME_TRUE;;
/* chicken-profile.scm:112: loop */
t31=t1;
t32=((C_word*)t7)[1];
t1=t31;
t2=t32;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t4,lf[83]))){
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_842,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* chicken-profile.scm:102: next-number */
t15=t10;
f_764(t15,t14);}
else{
if(C_truep(C_u_i_string_equal_p(t4,lf[84]))){
t14=C_mutate2(&lf[20] /* (set! sort-by ...) */,lf[14]);
/* chicken-profile.scm:112: loop */
t31=t1;
t32=((C_word*)t7)[1];
t1=t31;
t2=t32;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t4,lf[85]))){
t14=C_mutate2(&lf[20] /* (set! sort-by ...) */,lf[15]);
/* chicken-profile.scm:112: loop */
t31=t1;
t32=((C_word*)t7)[1];
t1=t31;
t2=t32;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t4,lf[86]))){
t14=C_mutate2(&lf[20] /* (set! sort-by ...) */,lf[16]);
/* chicken-profile.scm:112: loop */
t31=t1;
t32=((C_word*)t7)[1];
t1=t31;
t2=t32;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t4,lf[87]))){
t14=C_mutate2(&lf[20] /* (set! sort-by ...) */,lf[17]);
/* chicken-profile.scm:112: loop */
t31=t1;
t32=((C_word*)t7)[1];
t1=t31;
t2=t32;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t4,lf[88]))){
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_878,a[2]=t13,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:107: next-arg */
t15=((C_word*)t9)[1];
f_745(t15,t14);}
else{
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_884,a[2]=t13,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
t15=C_block_size(t4);
if(C_truep(C_fixnum_greaterp(t15,C_fix(1)))){
t16=C_subchar(t4,C_fix(0));
t17=t14;
f_884(t17,C_i_char_equalp(C_make_character(45),t16));}
else{
t16=t14;
f_884(t16,C_SCHEME_FALSE);}}}}}}}}}}}}}

/* k1818 in map-loop154 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1820(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1820,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1791(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1791(t6,((C_word*)t0)[5],t5);}}

/* k1476 in k1446 in map-loop291 in print-row in k1414 in k1411 in k1402 in k1399 in k1342 in k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in ... */
static void C_ccall f_1478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1478,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1454,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t5=t4;
f_1454(t5,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t3));}
else{
t5=C_mutate2(((C_word *)((C_word*)t0)[8])+1,t3);
t6=t4;
f_1454(t6,t5);}}

/* k1368 in k1364 in k1357 in map-loop192 in k1399 in k1342 in k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1370,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1374,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_a_i_divide(&a,2,((C_word*)t0)[6],C_fix(1000));
/* chicken-profile.scm:210: format-real */
f_1268(t3,t4,lf[2]);}

/* k1372 in k1368 in k1364 in k1357 in map-loop192 in k1399 in k1342 in k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 in ... */
static void C_ccall f_1374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1374,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1378,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_a_i_divide(&a,2,((C_word*)t0)[6],C_fix(1000));
/* chicken-profile.scm:211: format-real */
f_1268(t3,t4,lf[3]);}

/* k1376 in k1372 in k1368 in k1364 in k1357 in map-loop192 in k1399 in k1342 in k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in ... */
static void C_ccall f_1378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1378,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1382,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* chicken-profile.scm:212: format-real */
f_1268(t3,((C_word*)t0)[6],lf[4]);}

/* k1452 in k1476 in k1446 in map-loop291 in print-row in k1414 in k1411 in k1402 in k1399 in k1342 in k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in ... */
static void C_fcall f_1454(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=C_slot(((C_word*)t0)[5],C_fix(1));
t5=C_slot(((C_word*)t0)[6],C_fix(1));
t6=((C_word*)((C_word*)t0)[7])[1];
f_1441(t6,((C_word*)t0)[8],t3,t4,t5);}

/* foldl138 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_fcall f_1826(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1826,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1853,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=C_slot(t2,C_fix(0));
t8=t3;
t9=C_i_caddr(t7);
/* chicken-profile.scm:187: max */
t10=*((C_word*)lf[54]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t6,t8,t9);}
else{
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k1364 in k1357 in map-loop192 in k1399 in k1342 in k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1366,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1370,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[6])){
/* chicken-profile.scm:209: number->string */
t4=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[6]);}
else{
t4=t3;
f_1370(2,t4,lf[58]);}}

/* map-loop291 in print-row in k1414 in k1411 in k1402 in k1399 in k1342 in k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 in ... */
static void C_fcall f_1441(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1441,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1448,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=t1,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_pairp(t3);
t7=t5;
f_1448(t7,(C_truep(t6)?C_i_pairp(t4):C_SCHEME_FALSE));}
else{
t6=t5;
f_1448(t6,C_SCHEME_FALSE);}}

/* k1437 in print-row in k1414 in k1411 in k1402 in k1399 in k1342 in k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 in ... */
static void C_ccall f_1439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:228: string-join */
t2=C_fast_retrieve(lf[50]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k1219 in format-string in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1221(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(((C_word*)t0)[2])){
t2=((C_word*)t0)[3];
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[31]))(4,*((C_word*)lf[31]+1),((C_word*)t0)[4],t1,t2);}
else{
t2=((C_word*)t0)[3];
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[31]))(4,*((C_word*)lf[31]+1),((C_word*)t0)[4],t2,t1);}}

/* k1357 in map-loop192 in k1399 in k1342 in k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1359,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1366,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_u_i_car(((C_word*)t0)[6]);
/* chicken-profile.scm:208: ##sys#symbol->qualified-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[59]))(3,*((C_word*)lf[59]+1),t3,t4);}

/* k1411 in k1402 in k1399 in k1342 in k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 */
static void C_ccall f_1413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[28],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1413,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1416,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1563,tmp=(C_word)a,a+=2,tmp);
t5=C_a_i_list5(&a,5,C_fix(0),C_fix(0),C_fix(0),C_fix(0),C_fix(0));
t6=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)((C_word*)t0)[3])[1]);
/* chicken-profile.scm:222: fold */
t7=C_fast_retrieve(lf[55]);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t3,t4,t5,t6);}

/* k1424 in print-row in k1414 in k1411 in k1402 in k1399 in k1342 in k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in k614 in ... */
static void C_ccall f_1426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:228: print */
t2=*((C_word*)lf[49]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1446 in map-loop291 in print-row in k1414 in k1411 in k1402 in k1399 in k1342 in k1339 in k1336 in k1330 in k1327 in k700 in loop in k1868 in k635 in k632 in k629 in k626 in k623 in k620 in k617 in ... */
static void C_fcall f_1448(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1448,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1478,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_slot(((C_word*)t0)[3],C_fix(0));
t4=C_slot(((C_word*)t0)[4],C_fix(0));
t5=C_slot(((C_word*)t0)[5],C_fix(0));
/* chicken-profile.scm:228: g297 */
t6=((C_word*)t0)[9];
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t2,t3,t4,t5);}
else{
t2=((C_word*)((C_word*)t0)[8])[1];
t3=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[116] = {
{"f_1401:chicken_2dprofile_2escm",(void*)f_1401},
{"f_1404:chicken_2dprofile_2escm",(void*)f_1404},
{"f_1287:chicken_2dprofile_2escm",(void*)f_1287},
{"f_1418:chicken_2dprofile_2escm",(void*)f_1418},
{"f_1416:chicken_2dprofile_2escm",(void*)f_1416},
{"f_1526:chicken_2dprofile_2escm",(void*)f_1526},
{"f_1279:chicken_2dprofile_2escm",(void*)f_1279},
{"f_1516:chicken_2dprofile_2escm",(void*)f_1516},
{"f_1268:chicken_2dprofile_2escm",(void*)f_1268},
{"f_1505:chicken_2dprofile_2escm",(void*)f_1505},
{"f_1508:chicken_2dprofile_2escm",(void*)f_1508},
{"f_1303:chicken_2dprofile_2escm",(void*)f_1303},
{"f_1094:chicken_2dprofile_2escm",(void*)f_1094},
{"f_1091:chicken_2dprofile_2escm",(void*)f_1091},
{"f_1151:chicken_2dprofile_2escm",(void*)f_1151},
{"f_1139:chicken_2dprofile_2escm",(void*)f_1139},
{"f_1344:chicken_2dprofile_2escm",(void*)f_1344},
{"f_1341:chicken_2dprofile_2escm",(void*)f_1341},
{"f_1161:chicken_2dprofile_2escm",(void*)f_1161},
{"f_1164:chicken_2dprofile_2escm",(void*)f_1164},
{"f_1073:chicken_2dprofile_2escm",(void*)f_1073},
{"f_1087:chicken_2dprofile_2escm",(void*)f_1087},
{"f_1630:chicken_2dprofile_2escm",(void*)f_1630},
{"f_1202:chicken_2dprofile_2escm",(void*)f_1202},
{"f_1729:chicken_2dprofile_2escm",(void*)f_1729},
{"f_1332:chicken_2dprofile_2escm",(void*)f_1332},
{"f_1113:chicken_2dprofile_2escm",(void*)f_1113},
{"f_1338:chicken_2dprofile_2escm",(void*)f_1338},
{"f_1077:chicken_2dprofile_2escm",(void*)f_1077},
{"f_1710:chicken_2dprofile_2escm",(void*)f_1710},
{"f_1149:chicken_2dprofile_2escm",(void*)f_1149},
{"f_1069:chicken_2dprofile_2escm",(void*)f_1069},
{"f_1870:chicken_2dprofile_2escm",(void*)f_1870},
{"f_1704:chicken_2dprofile_2escm",(void*)f_1704},
{"f_1614:chicken_2dprofile_2escm",(void*)f_1614},
{"f_1044:chicken_2dprofile_2escm",(void*)f_1044},
{"f_946:chicken_2dprofile_2escm",(void*)f_946},
{"f_1120:chicken_2dprofile_2escm",(void*)f_1120},
{"f_1034:chicken_2dprofile_2escm",(void*)f_1034},
{"f_1675:chicken_2dprofile_2escm",(void*)f_1675},
{"f_1764:chicken_2dprofile_2escm",(void*)f_1764},
{"f_1757:chicken_2dprofile_2escm",(void*)f_1757},
{"f_1014:chicken_2dprofile_2escm",(void*)f_1014},
{"f_1010:chicken_2dprofile_2escm",(void*)f_1010},
{"f_1101:chicken_2dprofile_2escm",(void*)f_1101},
{"f_1103:chicken_2dprofile_2escm",(void*)f_1103},
{"f_1002:chicken_2dprofile_2escm",(void*)f_1002},
{"f_1791:chicken_2dprofile_2escm",(void*)f_1791},
{"f_1733:chicken_2dprofile_2escm",(void*)f_1733},
{"f_1789:chicken_2dprofile_2escm",(void*)f_1789},
{"f_1739:chicken_2dprofile_2escm",(void*)f_1739},
{"f_805:chicken_2dprofile_2escm",(void*)f_805},
{"f_709:chicken_2dprofile_2escm",(void*)f_709},
{"f_702:chicken_2dprofile_2escm",(void*)f_702},
{"toplevel:chicken_2dprofile_2escm",(void*)C_toplevel},
{"f_911:chicken_2dprofile_2escm",(void*)f_911},
{"f_827:chicken_2dprofile_2escm",(void*)f_827},
{"f_820:chicken_2dprofile_2escm",(void*)f_820},
{"f_739:chicken_2dprofile_2escm",(void*)f_739},
{"f_735:chicken_2dprofile_2escm",(void*)f_735},
{"f_842:chicken_2dprofile_2escm",(void*)f_842},
{"f_619:chicken_2dprofile_2escm",(void*)f_619},
{"f_745:chicken_2dprofile_2escm",(void*)f_745},
{"f_616:chicken_2dprofile_2escm",(void*)f_616},
{"f_628:chicken_2dprofile_2escm",(void*)f_628},
{"f_712:chicken_2dprofile_2escm",(void*)f_712},
{"f_625:chicken_2dprofile_2escm",(void*)f_625},
{"f_622:chicken_2dprofile_2escm",(void*)f_622},
{"f_727:chicken_2dprofile_2escm",(void*)f_727},
{"f_637:chicken_2dprofile_2escm",(void*)f_637},
{"f_725:chicken_2dprofile_2escm",(void*)f_725},
{"f_631:chicken_2dprofile_2escm",(void*)f_631},
{"f_634:chicken_2dprofile_2escm",(void*)f_634},
{"f_878:chicken_2dprofile_2escm",(void*)f_878},
{"f_1594:chicken_2dprofile_2escm",(void*)f_1594},
{"f_649:chicken_2dprofile_2escm",(void*)f_649},
{"f_645:chicken_2dprofile_2escm",(void*)f_645},
{"f_1291:chicken_2dprofile_2escm",(void*)f_1291},
{"f_884:chicken_2dprofile_2escm",(void*)f_884},
{"f_784:chicken_2dprofile_2escm",(void*)f_784},
{"f_656:chicken_2dprofile_2escm",(void*)f_656},
{"f_787:chicken_2dprofile_2escm",(void*)f_787},
{"f_1581:chicken_2dprofile_2escm",(void*)f_1581},
{"f_812:chicken_2dprofile_2escm",(void*)f_812},
{"f_1570:chicken_2dprofile_2escm",(void*)f_1570},
{"f_1860:chicken_2dprofile_2escm",(void*)f_1860},
{"f_1863:chicken_2dprofile_2escm",(void*)f_1863},
{"f_764:chicken_2dprofile_2escm",(void*)f_764},
{"f_1563:chicken_2dprofile_2escm",(void*)f_1563},
{"f_1853:chicken_2dprofile_2escm",(void*)f_1853},
{"f_1323:chicken_2dprofile_2escm",(void*)f_1323},
{"f_1866:chicken_2dprofile_2escm",(void*)f_1866},
{"f_1329:chicken_2dprofile_2escm",(void*)f_1329},
{"f_973:chicken_2dprofile_2escm",(void*)f_973},
{"f_1311:chicken_2dprofile_2escm",(void*)f_1311},
{"f_1315:chicken_2dprofile_2escm",(void*)f_1315},
{"f_1541:chicken_2dprofile_2escm",(void*)f_1541},
{"f_1549:chicken_2dprofile_2escm",(void*)f_1549},
{"f_1382:chicken_2dprofile_2escm",(void*)f_1382},
{"f_692:chicken_2dprofile_2escm",(void*)f_692},
{"f_1820:chicken_2dprofile_2escm",(void*)f_1820},
{"f_1478:chicken_2dprofile_2escm",(void*)f_1478},
{"f_1370:chicken_2dprofile_2escm",(void*)f_1370},
{"f_1374:chicken_2dprofile_2escm",(void*)f_1374},
{"f_1378:chicken_2dprofile_2escm",(void*)f_1378},
{"f_1454:chicken_2dprofile_2escm",(void*)f_1454},
{"f_1826:chicken_2dprofile_2escm",(void*)f_1826},
{"f_1366:chicken_2dprofile_2escm",(void*)f_1366},
{"f_1441:chicken_2dprofile_2escm",(void*)f_1441},
{"f_1439:chicken_2dprofile_2escm",(void*)f_1439},
{"f_1221:chicken_2dprofile_2escm",(void*)f_1221},
{"f_1359:chicken_2dprofile_2escm",(void*)f_1359},
{"f_1413:chicken_2dprofile_2escm",(void*)f_1413},
{"f_1426:chicken_2dprofile_2escm",(void*)f_1426},
{"f_1448:chicken_2dprofile_2escm",(void*)f_1448},
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
S|  foldl		1
S|  map		6
o|eliminated procedure checks: 30 
o|specializations:
o|  1 (make-string fixnum char)
o|  2 (##sys#check-list (or pair list) *)
o|  2 (number->string fixnum)
o|  2 (string-append string string)
o|  2 (first pair)
o|  1 (= fixnum fixnum)
o|  2 (third (pair * (pair * pair)))
o|  3 (second (pair * pair))
o|  1 (string-ref string fixnum)
o|  1 (> fixnum fixnum)
o|  1 (string-length string)
o|  8 (string=? string string)
o|  2 (cdr pair)
o|dropping redundant toplevel assignment: sort-by 
o|safe globals: (write-profile format-real format-string read-profile set-decimals sort-by sort-by-name sort-by-avg sort-by-time sort-by-calls run print-usage top percent-digits average-digits seconds-digits no-unused file) 
o|Removed `not' forms: 1 
o|inlining procedure: k919 
o|inlining procedure: k919 
o|inlining procedure: k939 
o|inlining procedure: k939 
o|inlining procedure: k954 
o|inlining procedure: k954 
o|inlining procedure: k981 
o|inlining procedure: k981 
o|inlining procedure: k1105 
o|inlining procedure: k1105 
o|inlining procedure: k1153 
o|contracted procedure: "(chicken-profile.scm:160) g7585" 
o|inlining procedure: k1128 
o|inlining procedure: k1128 
o|inlining procedure: k1153 
o|inlining procedure: k1222 
o|inlining procedure: k1222 
o|contracted procedure: "(chicken-profile.scm:235) run" 
o|inlining procedure: k694 
o|contracted procedure: "(chicken-profile.scm:81) write-profile" 
o|inlining procedure: k1443 
o|inlining procedure: k1443 
o|inlining procedure: k1494 
o|inlining procedure: k1494 
o|inlining procedure: k1518 
o|inlining procedure: k1518 
o|substituted constant variable: spacing225 
o|inlining procedure: k1583 
o|inlining procedure: k1583 
o|inlining procedure: k1632 
o|inlining procedure: k1632 
o|substituted constant variable: spacing225 
o|substituted constant variable: spacing225 
o|substituted constant variable: a1673 
o|inlining procedure: k1677 
o|contracted procedure: "(chicken-profile.scm:203) g198207" 
o|contracted procedure: k1391 
o|inlining procedure: k1677 
o|inlining procedure: k1712 
o|inlining procedure: k1712 
o|inlining procedure: k1765 
o|inlining procedure: k1765 
o|inlining procedure: k1778 
o|inlining procedure: k1778 
o|inlining procedure: k1793 
o|inlining procedure: k1793 
o|inlining procedure: k1828 
o|contracted procedure: "(chicken-profile.scm:187) g145146" 
o|inlining procedure: k1828 
o|substituted constant variable: g137140 
o|inlining procedure: k710 
o|inlining procedure: k710 
o|inlining procedure: k747 
o|inlining procedure: k747 
o|inlining procedure: k769 
o|inlining procedure: k769 
o|inlining procedure: k694 
o|inlining procedure: k797 
o|inlining procedure: k797 
o|substituted constant variable: a817 
o|substituted constant variable: a832 
o|inlining procedure: k828 
o|inlining procedure: k828 
o|substituted constant variable: a838 
o|substituted constant variable: a847 
o|inlining procedure: k843 
o|inlining procedure: k843 
o|substituted constant variable: a853 
o|substituted constant variable: a859 
o|inlining procedure: k855 
o|inlining procedure: k855 
o|substituted constant variable: a865 
o|substituted constant variable: a871 
o|inlining procedure: k867 
o|contracted procedure: "(chicken-profile.scm:107) set-decimals" 
o|inlining procedure: k1039 
o|inlining procedure: k1039 
o|folded constant expression: (char->integer (quote #\0)) 
o|inlining procedure: k1027 
o|inlining procedure: k1027 
o|substituted constant variable: a1085 
o|inlining procedure: k867 
o|inlining procedure: k888 
o|inlining procedure: k888 
o|substituted constant variable: a903 
o|substituted constant variable: a908 
o|replaced variables: 188 
o|removed binding forms: 90 
o|substituted constant variable: r9401874 
o|substituted constant variable: r11291883 
o|substituted constant variable: r14951891 
o|converted assignments to bindings: (print-row287) 
o|substituted constant variable: r17131901 
o|substituted constant variable: r17661904 
o|substituted constant variable: r17661904 
o|substituted constant variable: r17791907 
o|inlining procedure: k785 
o|inlining procedure: k785 
o|inlining procedure: k785 
o|inlining procedure: k785 
o|inlining procedure: k785 
o|inlining procedure: k785 
o|contracted procedure: k1059 
o|inlining procedure: k785 
o|simplifications: ((let . 1)) 
o|replaced variables: 12 
o|removed binding forms: 214 
o|substituted constant variable: r1060 
o|replaced variables: 9 
o|removed binding forms: 32 
o|inlining procedure: k1182 
o|inlining procedure: k1182 
o|inlining procedure: k772 
o|removed binding forms: 7 
o|substituted constant variable: r11832021 
o|substituted constant variable: r11832022 
o|substituted constant variable: r7732041 
o|removed conditional forms: 1 
o|removed binding forms: 3 
o|simplifications: ((if . 14) (##core#call . 156)) 
o|  call simplifications:
o|    member
o|    string=?
o|    ##sys#size
o|    fx>
o|    char=?
o|    eq?
o|    string-ref
o|    char->integer
o|    <=
o|    string->number
o|    <
o|    zero?
o|    fourth
o|    /	4
o|    list	6
o|    length	2
o|    -	2
o|    *	3
o|    inexact->exact	2
o|    car	4
o|    null?	7
o|    cdr	3
o|    string-length	3
o|    fx-
o|    fxmax
o|    eof-object?
o|    ##sys#check-list	10
o|    pair?	12
o|    +	3
o|    ##sys#setslot	6
o|    ##sys#slot	24
o|    first	4
o|    cadddr	2
o|    =	2
o|    second	5
o|    eqv?	2
o|    third	7
o|    >	11
o|    cons	16
o|contracted procedure: k682 
o|contracted procedure: k678 
o|contracted procedure: k674 
o|contracted procedure: k670 
o|contracted procedure: k666 
o|contracted procedure: k662 
o|contracted procedure: k658 
o|contracted procedure: k913 
o|contracted procedure: k916 
o|contracted procedure: k922 
o|contracted procedure: k929 
o|contracted procedure: k933 
o|contracted procedure: k948 
o|contracted procedure: k951 
o|contracted procedure: k957 
o|contracted procedure: k975 
o|contracted procedure: k978 
o|contracted procedure: k984 
o|contracted procedure: k1016 
o|contracted procedure: k1020 
o|contracted procedure: k1108 
o|contracted procedure: k1122 
o|contracted procedure: k1141 
o|contracted procedure: k1144 
o|contracted procedure: k1193 
o|contracted procedure: k1156 
o|contracted procedure: k1170 
o|contracted procedure: k1174 
o|contracted procedure: k1186 
o|contracted procedure: k1190 
o|contracted procedure: k1182 
o|contracted procedure: k1261 
o|contracted procedure: k1204 
o|contracted procedure: k1255 
o|contracted procedure: k1207 
o|contracted procedure: k1249 
o|contracted procedure: k1210 
o|contracted procedure: k1243 
o|contracted procedure: k1213 
o|contracted procedure: k1216 
o|contracted procedure: k1240 
o|contracted procedure: k1236 
o|contracted procedure: k1270 
o|contracted procedure: k1316 
o|contracted procedure: k1281 
o|contracted procedure: k1293 
o|contracted procedure: k1297 
o|contracted procedure: k1305 
o|contracted procedure: k697 
o|contracted procedure: k1333 
o|contracted procedure: k1405 
o|contracted procedure: k1408 
o|contracted procedure: k1428 
o|contracted procedure: k1431 
o|contracted procedure: k1434 
o|contracted procedure: k1449 
o|contracted procedure: k1460 
o|contracted procedure: k1464 
o|contracted procedure: k1468 
o|contracted procedure: k1480 
o|contracted procedure: k1484 
o|contracted procedure: k1488 
o|contracted procedure: k1491 
o|contracted procedure: k1497 
o|contracted procedure: k1509 
o|contracted procedure: k1521 
o|contracted procedure: k1531 
o|contracted procedure: k1535 
o|contracted procedure: k1559 
o|contracted procedure: k1555 
o|contracted procedure: k1551 
o|contracted procedure: k1543 
o|contracted procedure: k1565 
o|contracted procedure: k1571 
o|contracted procedure: k1574 
o|contracted procedure: k1623 
o|contracted procedure: k1586 
o|contracted procedure: k1589 
o|contracted procedure: k1600 
o|contracted procedure: k1604 
o|contracted procedure: k1616 
o|contracted procedure: k1620 
o|contracted procedure: k1635 
o|contracted procedure: k1661 
o|contracted procedure: k1657 
o|contracted procedure: k1638 
o|contracted procedure: k1649 
o|contracted procedure: k1665 
o|contracted procedure: k1669 
o|contracted procedure: k1680 
o|contracted procedure: k1683 
o|contracted procedure: k1694 
o|contracted procedure: k1706 
o|contracted procedure: k1348 
o|contracted procedure: k1351 
o|contracted procedure: k1354 
o|contracted procedure: k1384 
o|contracted procedure: k1388 
o|contracted procedure: k1715 
o|contracted procedure: k1721 
o|contracted procedure: k1735 
o|contracted procedure: k1745 
o|contracted procedure: k1748 
o|contracted procedure: k1758 
o|inlining procedure: k1751 
o|inlining procedure: k1751 
o|contracted procedure: k1768 
o|contracted procedure: k1775 
o|contracted procedure: k1781 
o|contracted procedure: k1796 
o|contracted procedure: k1799 
o|contracted procedure: k1810 
o|contracted procedure: k1822 
o|contracted procedure: k1831 
o|contracted procedure: k1838 
o|contracted procedure: k1855 
o|contracted procedure: k1848 
o|contracted procedure: k713 
o|inlining procedure: k710 
o|contracted procedure: k740 
o|contracted procedure: k750 
o|contracted procedure: k756 
o|contracted procedure: k760 
o|contracted procedure: k766 
o|contracted procedure: k772 
o|contracted procedure: k791 
o|contracted procedure: k800 
o|contracted procedure: k1082 
o|contracted procedure: k1030 
o|contracted procedure: k1063 
o|contracted procedure: k1055 
o|contracted procedure: k1036 
o|contracted procedure: k1048 
o|contracted procedure: k905 
o|contracted procedure: k895 
o|simplifications: ((if . 1) (let . 19)) 
o|removed binding forms: 132 
o|inlining procedure: k1641 
o|inlining procedure: k1641 
o|inlining procedure: k1686 
o|inlining procedure: k1686 
o|inlining procedure: k1802 
o|inlining procedure: k1802 
o|replaced variables: 63 
o|removed binding forms: 1 
o|removed binding forms: 40 
o|replaced variables: 12 
o|removed binding forms: 3 
o|customizable procedures: (k882 arg-digit next-number24 print-usage loop11 next-arg23 k700 foldl138142 g160169 map-loop154183 k1755 k1762 k1342 format-real map-loop192216 map-loop253270 k1592 map-loop232277 for-each-loop327337 k1446 k1452 map-loop291312 k1159 k1162 map-loop6992 doloop6465) 
o|calls to known targets: 66 
o|identified direct recursive calls: f_1630 2 
o|identified direct recursive calls: f_692 5 
o|fast box initializations: 11 
o|fast global references: 29 
o|fast global assignments: 28 
o|dropping unused closure argument: f_1268 
o|dropping unused closure argument: f_645 
*/
/* end of file */
