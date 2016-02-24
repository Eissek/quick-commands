/* Generated from srfi-18.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:04
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: srfi-18.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file srfi-18.c
   unit: srfi_2d18
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_scheduler_toplevel)
C_externimport void C_ccall C_scheduler_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[111];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,31),40,99,111,109,112,117,116,101,45,116,105,109,101,45,108,105,109,105,116,32,116,109,57,49,32,108,111,99,57,50,41,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,14),40,99,117,114,114,101,110,116,45,116,105,109,101,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,20),40,116,105,109,101,45,62,115,101,99,111,110,100,115,32,116,109,57,57,41,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,20),40,115,101,99,111,110,100,115,45,62,116,105,109,101,32,110,49,48,50,41,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,12),40,116,105,109,101,63,32,120,49,48,53,41,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,30),40,106,111,105,110,45,116,105,109,101,111,117,116,45,101,120,99,101,112,116,105,111,110,63,32,120,49,48,56,41,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,33),40,97,98,97,110,100,111,110,101,100,45,109,117,116,101,120,45,101,120,99,101,112,116,105,111,110,63,32,120,49,49,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,35),40,116,101,114,109,105,110,97,116,101,100,45,116,104,114,101,97,100,45,101,120,99,101,112,116,105,111,110,63,32,120,49,49,52,41,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,26),40,117,110,99,97,117,103,104,116,45,101,120,99,101,112,116,105,111,110,63,32,120,49,49,55,41,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,19),40,97,56,51,55,32,46,32,114,101,115,117,108,116,115,49,50,52,41,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,6),40,97,56,51,49,41,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,32),40,109,97,107,101,45,116,104,114,101,97,100,32,116,104,117,110,107,49,50,49,32,46,32,110,97,109,101,49,50,50,41};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,14),40,116,104,114,101,97,100,63,32,120,49,50,57,41,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,16),40,99,117,114,114,101,110,116,45,116,104,114,101,97,100,41};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,24),40,116,104,114,101,97,100,45,115,116,97,116,101,32,116,104,114,101,97,100,49,51,50,41};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,37),40,116,104,114,101,97,100,45,115,112,101,99,105,102,105,99,45,115,101,116,33,32,116,104,114,101,97,100,49,51,53,32,120,49,51,54,41,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,26),40,116,104,114,101,97,100,45,113,117,97,110,116,117,109,32,116,104,114,101,97,100,49,52,50,41,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,36),40,116,104,114,101,97,100,45,113,117,97,110,116,117,109,45,115,101,116,33,32,116,104,114,101,97,100,49,52,53,32,113,49,52,54,41,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,18),40,116,104,114,101,97,100,45,110,97,109,101,32,120,49,53,48,41,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,25),40,116,104,114,101,97,100,45,115,116,97,114,116,33,32,116,104,114,101,97,100,49,53,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,7),40,97,49,48,48,51,41,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,16),40,97,57,56,56,32,114,101,116,117,114,110,49,55,48,41};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,37),40,116,104,114,101,97,100,45,106,111,105,110,33,32,116,104,114,101,97,100,49,54,48,32,46,32,116,105,109,101,111,117,116,49,54,49,41,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,29),40,116,104,114,101,97,100,45,116,101,114,109,105,110,97,116,101,33,32,116,104,114,101,97,100,49,56,55,41,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,7),40,97,49,49,57,57,41,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,17),40,97,49,49,57,48,32,114,101,116,117,114,110,49,57,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,27),40,116,104,114,101,97,100,45,115,117,115,112,101,110,100,33,32,116,104,114,101,97,100,49,57,54,41,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,26),40,116,104,114,101,97,100,45,114,101,115,117,109,101,33,32,116,104,114,101,97,100,50,48,50,41,0,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,7),40,97,49,50,52,56,41,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,17),40,97,49,50,51,54,32,114,101,116,117,114,110,50,48,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,21),40,116,104,114,101,97,100,45,115,108,101,101,112,33,32,116,109,50,48,54,41,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,13),40,109,117,116,101,120,63,32,120,50,49,54,41,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,24),40,109,97,107,101,45,109,117,116,101,120,32,46,32,116,109,112,50,50,50,50,50,51,41};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,17),40,109,117,116,101,120,45,110,97,109,101,32,120,50,51,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,25),40,109,117,116,101,120,45,115,112,101,99,105,102,105,99,32,109,117,116,101,120,50,51,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,35),40,109,117,116,101,120,45,115,112,101,99,105,102,105,99,45,115,101,116,33,32,109,117,116,101,120,50,51,54,32,120,50,51,55,41,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,22),40,109,117,116,101,120,45,115,116,97,116,101,32,109,117,116,101,120,50,52,48,41,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,8),40,115,119,105,116,99,104,41};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,7),40,99,104,101,99,107,41,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,7),40,97,49,52,57,51,41,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,7),40,97,49,53,53,49,41,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,17),40,97,49,51,54,54,32,114,101,116,117,114,110,50,53,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,36),40,109,117,116,101,120,45,108,111,99,107,33,32,109,117,116,101,120,50,53,48,32,46,32,109,115,45,97,110,100,45,116,50,53,49,41,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,7),40,97,49,55,49,50,41,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,7),40,97,49,55,53,48,41,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,17),40,97,49,53,57,55,32,114,101,116,117,114,110,51,48,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,41),40,109,117,116,101,120,45,117,110,108,111,99,107,33,32,109,117,116,101,120,51,48,48,32,46,32,99,118,97,114,45,97,110,100,45,116,111,51,48,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,35),40,109,97,107,101,45,99,111,110,100,105,116,105,111,110,45,118,97,114,105,97,98,108,101,32,46,32,110,97,109,101,51,52,48,41,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,26),40,99,111,110,100,105,116,105,111,110,45,118,97,114,105,97,98,108,101,63,32,120,51,52,50,41,0,0,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,31),40,99,111,110,100,105,116,105,111,110,45,118,97,114,105,97,98,108,101,45,110,97,109,101,32,99,118,51,52,52,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,35),40,99,111,110,100,105,116,105,111,110,45,118,97,114,105,97,98,108,101,45,115,112,101,99,105,102,105,99,32,99,118,51,52,55,41,0,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,45),40,99,111,110,100,105,116,105,111,110,45,118,97,114,105,97,98,108,101,45,115,112,101,99,105,102,105,99,45,115,101,116,33,32,99,118,51,53,48,32,120,51,53,49,41,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,36),40,99,111,110,100,105,116,105,111,110,45,118,97,114,105,97,98,108,101,45,115,105,103,110,97,108,33,32,99,118,97,114,51,53,52,41,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,54,55,32,103,51,55,52,51,56,51,41,0,0,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,39),40,99,111,110,100,105,116,105,111,110,45,118,97,114,105,97,98,108,101,45,98,114,111,97,100,99,97,115,116,33,32,99,118,97,114,51,54,52,41,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,7),40,97,49,57,56,52,41,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,33),40,116,104,114,101,97,100,45,115,105,103,110,97,108,33,32,116,104,114,101,97,100,51,57,48,32,101,120,110,51,57,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,24),40,35,35,115,121,115,35,114,101,97,100,45,112,114,111,109,112,116,45,104,111,111,107,41};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,40),40,116,104,114,101,97,100,45,119,97,105,116,45,102,111,114,45,105,47,111,33,32,102,100,52,49,53,32,46,32,116,109,112,52,49,52,52,49,54,41};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,17),40,97,50,48,56,54,32,116,104,114,101,97,100,49,51,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1268)
static void C_ccall f_1268(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1263)
static void C_ccall f_1263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1806)
static void C_ccall f_1806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_755)
static void C_ccall f_755(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_898)
static void C_ccall f_898(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_896)
static void C_ccall f_896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1815)
static void C_ccall f_1815(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_665)
static void C_ccall f_665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_668)
static void C_ccall f_668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_989)
static void C_ccall f_989(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_885)
static void C_ccall f_885(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1074)
static void C_ccall f_1074(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1821)
static void C_ccall f_1821(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_873)
static void C_ccall f_873(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_876)
static void C_ccall f_876(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1292)
static void C_ccall f_1292(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1556)
static void C_ccall f_1556(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_867)
static void C_ccall f_867(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1552)
static void C_ccall f_1552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_932)
static void C_ccall f_932(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_939)
static void C_ccall f_939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_936)
static void C_fcall f_936(C_word t0,C_word t1) C_noret;
C_noret_decl(f_852)
static void C_ccall f_852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_962)
static void C_ccall f_962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_968)
static void C_ccall f_968(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_968)
static void C_ccall f_968r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1534)
static void C_ccall f_1534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1237)
static void C_ccall f_1237(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_699)
static void C_ccall f_699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1501)
static void C_ccall f_1501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1504)
static void C_ccall f_1504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_945)
static void C_ccall f_945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_845)
static void C_ccall f_845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1244)
static void C_ccall f_1244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1249)
static void C_ccall f_1249(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_832)
static void C_ccall f_832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_838)
static void C_ccall f_838(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_838)
static void C_ccall f_838r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1713)
static void C_ccall f_1713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1278)
static void C_ccall f_1278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1274)
static void C_ccall f_1274(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1274)
static void C_ccall f_1274r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_821)
static void C_ccall f_821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_923)
static void C_ccall f_923(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_827)
static void C_ccall f_827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_823)
static void C_ccall f_823(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_823)
static void C_ccall f_823r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_742)
static void C_ccall f_742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_748)
static void C_ccall f_748(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_746)
static void C_ccall f_746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_907)
static void C_ccall f_907(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_803)
static void C_ccall f_803(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1759)
static void C_ccall f_1759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_731)
static void C_ccall f_731(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1732)
static void C_ccall f_1732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1004)
static void C_ccall f_1004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2019)
static void C_ccall f_2019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1739)
static void C_ccall f_1739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1228)
static void C_ccall f_1228(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1017)
static void C_ccall f_1017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_718)
static void C_ccall f_718(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_716)
static void C_ccall f_716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2002)
static void C_ccall f_2002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1191)
static void C_ccall f_1191(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1587)
static void C_fcall f_1587(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1580)
static void C_ccall f_1580(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1580)
static void C_ccall f_1580r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1483)
static void C_ccall f_1483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1489)
static void C_ccall f_1489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_787)
static void C_ccall f_787(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1168)
static void C_ccall f_1168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1798)
static void C_ccall f_1798(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1798)
static void C_ccall f_1798r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1598)
static void C_ccall f_1598(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1494)
static void C_ccall f_1494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1381)
static void C_ccall f_1381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_771)
static void C_ccall f_771(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1173)
static void C_ccall f_1173(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1774)
static void C_ccall f_1774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1043)
static void C_ccall f_1043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1391)
static void C_fcall f_1391(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1939)
static void C_ccall f_1939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_670)
static void C_fcall f_670(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1751)
static void C_ccall f_1751(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1989)
static void C_ccall f_1989(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1370)
static void C_fcall f_1370(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1985)
static void C_ccall f_1985(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1206)
static void C_ccall f_1206(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1200)
static void C_ccall f_1200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1367)
static void C_ccall f_1367(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1617)
static void C_fcall f_1617(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1129)
static void C_ccall f_1129(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1924)
static void C_ccall f_1924(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1929)
static void C_fcall f_1929(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1136)
static void C_ccall f_1136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1605)
static void C_ccall f_1605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_708)
static void C_ccall f_708(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2087)
static void C_ccall f_2087(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1405)
static void C_ccall f_1405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2076)
static void C_ccall f_2076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_srfi_2d18_toplevel)
C_externexport void C_ccall C_srfi_2d18_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1952)
static void C_ccall f_1952(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1623)
static void C_ccall f_1623(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1620)
static void C_ccall f_1620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1830)
static void C_ccall f_1830(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1839)
static void C_ccall f_1839(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2066)
static void C_ccall f_2066(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2066)
static void C_ccall f_2066r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1301)
static void C_ccall f_1301(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2052)
static void C_ccall f_2052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1848)
static void C_ccall f_1848(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1310)
static void C_ccall f_1310(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2055)
static void C_ccall f_2055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2058)
static void C_ccall f_2058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1145)
static void C_ccall f_1145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2042)
static void C_ccall f_2042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1319)
static void C_ccall f_1319(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2036)
static void C_ccall f_2036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f2187)
static void C_ccall f2187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f2183)
static void C_ccall f2183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1343)
static void C_ccall f_1343(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1343)
static void C_ccall f_1343r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f2179)
static void C_ccall f2179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_999)
static void C_ccall f_999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_993)
static void C_ccall f_993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1353)
static void C_ccall f_1353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1974)
static void C_fcall f_1974(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1891)
static void C_ccall f_1891(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_975)
static void C_ccall f_975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1256)
static void C_ccall f_1256(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_936)
static void C_fcall trf_936(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_936(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_936(t0,t1);}

C_noret_decl(trf_1587)
static void C_fcall trf_1587(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1587(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1587(t0,t1);}

C_noret_decl(trf_1391)
static void C_fcall trf_1391(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1391(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1391(t0,t1);}

C_noret_decl(trf_670)
static void C_fcall trf_670(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_670(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_670(t0,t1,t2);}

C_noret_decl(trf_1370)
static void C_fcall trf_1370(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1370(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1370(t0,t1);}

C_noret_decl(trf_1617)
static void C_fcall trf_1617(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1617(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1617(t0,t1);}

C_noret_decl(trf_1929)
static void C_fcall trf_1929(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1929(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1929(t0,t1,t2);}

C_noret_decl(trf_1974)
static void C_fcall trf_1974(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1974(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1974(t0,t1);}

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

C_noret_decl(tr3r)
static void C_fcall tr3r(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3r(C_proc3 k){
int n;
C_word *a,t3;
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
n=C_rest_count(0);
a=C_alloc(n*3);
t3=C_restore_rest(a,n);
(k)(t0,t1,t2,t3);}

/* mutex? in k894 in k819 in k666 in k663 */
static void C_ccall f_1268(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1268,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[70]));}

/* k1261 in k1254 in thread-sleep! in k894 in k819 in k666 in k663 */
static void C_ccall f_1263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1263,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t1;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1237,a[2]=t3,a[3]=((C_word)li29),tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:227: ##sys#call-with-current-continuation */
C_call_cc(3,0,t2,t4);}

/* k1804 in make-condition-variable in k894 in k819 in k666 in k663 */
static void C_ccall f_1806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1806,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_record4(&a,4,lf[86],t1,C_SCHEME_END_OF_LIST,C_SCHEME_UNDEFINED));}

/* join-timeout-exception? in k666 in k663 */
static void C_ccall f_755(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_755,3,t0,t1,t2);}
if(C_truep(C_i_structurep(t2,lf[17]))){
t3=C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_memq(lf[18],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* thread-quantum in k894 in k819 in k666 in k663 */
static void C_ccall f_898(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_898,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[34],lf[40]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(9)));}

/* k894 in k819 in k666 in k663 */
static void C_ccall f_896(C_word c,C_word t0,C_word t1){
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
C_word t32;
C_word ab[82],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_896,2,t0,t1);}
t2=C_mutate2((C_word*)lf[39]+1 /* (set! thread-specific ...) */,t1);
t3=C_mutate2((C_word*)lf[40]+1 /* (set! thread-quantum ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_898,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[41]+1 /* (set! thread-quantum-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_907,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[42]+1 /* (set! thread-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_923,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[43]+1 /* (set! thread-start! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_932,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[48]+1 /* (set! thread-yield! ...) */,*((C_word*)lf[49]+1));
t8=C_mutate2((C_word*)lf[50]+1 /* (set! thread-join! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_968,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[60]+1 /* (set! thread-terminate! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1129,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[64]+1 /* (set! thread-suspend! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1173,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[66]+1 /* (set! thread-resume! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1206,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[67]+1 /* (set! thread-sleep! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1228,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2((C_word*)lf[69]+1 /* (set! mutex? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1268,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate2((C_word*)lf[71]+1 /* (set! make-mutex ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1274,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate2((C_word*)lf[73]+1 /* (set! mutex-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1292,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2((C_word*)lf[74]+1 /* (set! mutex-specific ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1301,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate2((C_word*)lf[75]+1 /* (set! mutex-specific-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1310,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate2((C_word*)lf[76]+1 /* (set! mutex-state ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1319,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate2((C_word*)lf[80]+1 /* (set! mutex-lock! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1343,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate2((C_word*)lf[85]+1 /* (set! mutex-unlock! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1580,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate2((C_word*)lf[88]+1 /* (set! make-condition-variable ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1798,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate2((C_word*)lf[89]+1 /* (set! condition-variable? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1815,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate2((C_word*)lf[90]+1 /* (set! condition-variable-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1821,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate2((C_word*)lf[91]+1 /* (set! condition-variable-specific ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1830,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate2((C_word*)lf[92]+1 /* (set! condition-variable-specific-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1839,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate2((C_word*)lf[93]+1 /* (set! condition-variable-signal! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1848,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate2((C_word*)lf[95]+1 /* (set! condition-variable-broadcast! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1891,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate2((C_word*)lf[97]+1 /* (set! thread-signal! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1952,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t29=*((C_word*)lf[99]+1);
t30=C_mutate2((C_word*)lf[99]+1 /* (set! ##sys#read-prompt-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2042,a[2]=t29,a[3]=((C_word)li57),tmp=(C_word)a,a+=4,tmp));
t31=C_mutate2((C_word*)lf[104]+1 /* (set! thread-wait-for-i/o! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2066,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t32=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t32+1)))(2,t32,C_SCHEME_UNDEFINED);}

/* condition-variable? in k894 in k819 in k666 in k663 */
static void C_ccall f_1815(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1815,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[86]));}

/* k663 */
static void C_ccall f_665(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_665,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_668,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:36: register-feature! */
t3=*((C_word*)lf[109]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[110]);}

/* k666 in k663 */
static void C_ccall f_668(C_word c,C_word t0,C_word t1){
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
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_668,2,t0,t1);}
t2=C_mutate2(&lf[0] /* (set! compute-time-limit ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_670,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate2((C_word*)lf[6]+1 /* (set! current-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_708,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[7]+1 /* (set! time->seconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_718,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[10]+1 /* (set! seconds->time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_731,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[13]+1 /* (set! time? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_748,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[14]+1 /* (set! raise ...) */,*((C_word*)lf[15]+1));
t8=C_mutate2((C_word*)lf[16]+1 /* (set! join-timeout-exception? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_755,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[19]+1 /* (set! abandoned-mutex-exception? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_771,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[21]+1 /* (set! terminated-thread-exception? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_787,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[23]+1 /* (set! uncaught-exception? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_803,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_821,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:92: condition-property-accessor */
t13=*((C_word*)lf[107]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t12,lf[24],lf[108]);}

/* a988 in k973 in thread-join! in k894 in k819 in k666 in k663 */
static void C_ccall f_989(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_989,3,t0,t1,t2);}
t3=*((C_word*)lf[30]+1);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_993,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[3])){
/* srfi-18.scm:171: ##sys#thread-block-for-timeout! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(4,*((C_word*)lf[59]+1),t4,*((C_word*)lf[30]+1),((C_word*)t0)[3]);}
else{
t5=t4;
f_993(2,t5,C_SCHEME_UNDEFINED);}}

/* thread-specific-set! in k819 in k666 in k663 */
static void C_ccall f_885(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_885,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[34],lf[38]);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_setslot(t2,C_fix(10),t3));}

/* k1072 in a1003 in k991 in a988 in k973 in thread-join! in k894 in k819 in k666 in k663 */
static void C_ccall f_1074(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:188: return */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],t1);}

/* condition-variable-name in k894 in k819 in k666 in k663 */
static void C_ccall f_1821(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1821,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[86],lf[90]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* current-thread in k819 in k666 in k663 */
static void C_ccall f_873(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_873,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[30]+1));}

/* thread-state in k819 in k666 in k663 */
static void C_ccall f_876(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_876,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[34],lf[37]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(3)));}

/* mutex-name in k894 in k819 in k666 in k663 */
static void C_ccall f_1292(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1292,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[70],lf[73]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* k1554 in a1551 in a1366 in k1351 in mutex-lock! in k894 in k819 in k666 in k663 */
static void C_ccall f_1556(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:317: return */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],C_SCHEME_TRUE);}

/* thread? in k819 in k666 in k663 */
static void C_ccall f_867(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_867,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[34]));}

/* a1551 in a1366 in k1351 in mutex-lock! in k894 in k819 in k666 in k663 */
static void C_ccall f_1552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1552,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1556,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:317: check */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1391(t3,t2);}

/* thread-start! in k894 in k819 in k666 in k663 */
static void C_ccall f_932(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_932,3,t0,t1,t2);}
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_936,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_closurep(((C_word*)t3)[1]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_962,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:150: make-thread */
t6=*((C_word*)lf[26]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t3)[1]);}
else{
t5=t4;
f_936(t5,C_i_check_structure_2(((C_word*)t3)[1],lf[34],lf[43]));}}

/* k937 in k934 in thread-start! in k894 in k819 in k666 in k663 */
static void C_ccall f_939(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_939,2,t0,t1);}
t2=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(3),lf[44]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_945,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:155: ##sys#add-to-ready-queue */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[45]+1)))(3,*((C_word*)lf[45]+1),t3,((C_word*)((C_word*)t0)[2])[1]);}

/* k934 in thread-start! in k894 in k819 in k666 in k663 */
static void C_fcall f_936(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_936,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_939,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_slot(((C_word*)((C_word*)t0)[2])[1],C_fix(3));
t4=C_eqp(lf[32],t3);
if(C_truep(t4)){
t5=t2;
f_939(2,t5,C_SCHEME_UNDEFINED);}
else{
/* srfi-18.scm:153: ##sys#error */
t5=*((C_word*)lf[46]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,lf[43],lf[47],((C_word*)((C_word*)t0)[2])[1]);}}

/* k850 in make-thread in k819 in k666 in k663 */
static void C_ccall f_852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(*((C_word*)lf[30]+1),C_fix(9));
/* srfi-18.scm:100: ##sys#make-thread */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[31]+1)))(6,*((C_word*)lf[31]+1),((C_word*)t0)[2],C_SCHEME_FALSE,lf[32],t1,t2);}

/* k960 in thread-start! in k894 in k819 in k666 in k663 */
static void C_ccall f_962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_936(t3,t2);}

/* thread-join! in k894 in k819 in k666 in k663 */
static void C_ccall f_968(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_968r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_968r(t0,t1,t2,t3);}}

static void C_ccall f_968r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t4=C_i_check_structure_2(t2,lf[34],lf[50]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_975,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t3))){
t6=C_slot(t3,C_fix(0));
/* srfi-18.scm:164: compute-time-limit */
f_670(t5,t6,lf[50]);}
else{
t6=t5;
f_975(2,t6,C_SCHEME_FALSE);}}

/* k1532 in a1493 in k1481 in a1366 in k1351 in mutex-lock! in k894 in k819 in k666 in k663 */
static void C_ccall f_1534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1534,2,t0,t1);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(3),t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1501,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_slot(((C_word*)t0)[3],C_fix(13)))){
t4=t3;
f_1501(2,t4,C_SCHEME_UNDEFINED);}
else{
/* srfi-18.scm:306: ##sys#remove-from-timeout-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[51]+1)))(3,*((C_word*)lf[51]+1),t3,((C_word*)t0)[3]);}}

/* a1236 in k1261 in k1254 in thread-sleep! in k894 in k819 in k666 in k663 */
static void C_ccall f_1237(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1237,3,t0,t1,t2);}
t3=*((C_word*)lf[30]+1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1249,a[2]=t2,a[3]=((C_word)li28),tmp=(C_word)a,a+=4,tmp);
t5=C_i_setslot(*((C_word*)lf[30]+1),C_fix(1),t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1244,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:231: ##sys#thread-block-for-timeout! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(4,*((C_word*)lf[59]+1),t6,*((C_word*)lf[30]+1),((C_word*)t0)[2]);}

/* k697 in compute-time-limit in k666 in k663 */
static void C_ccall f_699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_699,2,t0,t1);}
t2=C_a_i_times(&a,2,((C_word*)t0)[2],C_fix(1000));
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_plus(&a,2,t1,t2));}

/* k1499 in k1532 in a1493 in k1481 in a1366 in k1351 in mutex-lock! in k894 in k819 in k666 in k663 */
static void C_ccall f_1501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1501,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1504,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* srfi-18.scm:307: check */
t3=((C_word*)((C_word*)t0)[7])[1];
f_1391(t3,t2);}

/* k1502 in k1499 in k1532 in a1493 in k1481 in a1366 in k1351 in mutex-lock! in k894 in k819 in k666 in k663 */
static void C_ccall f_1504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1504,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(8));
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_i_setslot(((C_word*)t0)[2],C_fix(8),t3);
t5=C_i_set_i_slot(((C_word*)t0)[2],C_fix(11),C_SCHEME_FALSE);
t6=C_i_setslot(((C_word*)t0)[3],C_fix(2),((C_word*)t0)[4]);
/* srfi-18.scm:311: return */
t7=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t7))(3,t7,((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k943 in k937 in k934 in thread-start! in k894 in k819 in k666 in k663 */
static void C_ccall f_945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[3])[1]);}

/* k843 in a837 in a831 in k825 in make-thread in k819 in k666 in k663 */
static void C_ccall f_845(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:113: ##sys#schedule */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(2,*((C_word*)lf[27]+1),((C_word*)t0)[2]);}

/* k1242 in a1236 in k1261 in k1254 in thread-sleep! in k894 in k819 in k666 in k663 */
static void C_ccall f_1244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:232: ##sys#schedule */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(2,*((C_word*)lf[27]+1),((C_word*)t0)[2]);}

/* a1248 in a1236 in k1261 in k1254 in thread-sleep! in k894 in k819 in k666 in k663 */
static void C_ccall f_1249(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1249,2,t0,t1);}
/* srfi-18.scm:230: return */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,C_SCHEME_UNDEFINED);}

/* a831 in k825 in make-thread in k819 in k666 in k663 */
static void C_ccall f_832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_832,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_838,a[2]=((C_word*)t0)[2],a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:108: ##sys#call-with-values */
C_call_with_values(4,0,t1,((C_word*)t0)[3],t2);}

/* a837 in a831 in k825 in make-thread in k819 in k666 in k663 */
static void C_ccall f_838(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_838r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_838r(t0,t1,t2);}}

static void C_ccall f_838r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=C_i_setslot(((C_word*)t0)[2],C_fix(2),t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_845,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:112: ##sys#thread-kill! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[28]+1)))(4,*((C_word*)lf[28]+1),t4,((C_word*)t0)[2],lf[29]);}

/* a1712 in k1757 in k1615 in k1603 in a1597 in k1585 in mutex-unlock! in k894 in k819 in k666 in k663 */
static void C_ccall f_1713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1713,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1739,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(2));
/* srfi-18.scm:345: ##sys#delq */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[83]+1)))(4,*((C_word*)lf[83]+1),t2,((C_word*)t0)[3],t3);}

/* k1276 in make-mutex in k894 in k819 in k666 in k663 */
static void C_ccall f_1278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:242: ##sys#make-mutex */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[72]+1)))(4,*((C_word*)lf[72]+1),((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* make-mutex in k894 in k819 in k666 in k663 */
static void C_ccall f_1274(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_1274r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1274r(t0,t1,t2);}}

static void C_ccall f_1274r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1278,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* srfi-18.scm:241: gensym */
t4=*((C_word*)lf[33]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[70]);}
else{
t4=C_i_car(t2);
/* srfi-18.scm:242: ##sys#make-mutex */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[72]+1)))(4,*((C_word*)lf[72]+1),t1,t4,C_SCHEME_FALSE);}}

/* k819 in k666 in k663 */
static void C_ccall f_821(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_821,2,t0,t1);}
t2=C_mutate2((C_word*)lf[25]+1 /* (set! uncaught-exception-reason ...) */,t1);
t3=C_mutate2((C_word*)lf[26]+1 /* (set! make-thread ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_823,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[35]+1 /* (set! thread? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_867,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[36]+1 /* (set! current-thread ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_873,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[37]+1 /* (set! thread-state ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_876,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[38]+1 /* (set! thread-specific-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_885,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_896,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2087,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:128: getter-with-setter */
t10=*((C_word*)lf[106]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t8,t9,*((C_word*)lf[38]+1));}

/* thread-name in k894 in k819 in k666 in k663 */
static void C_ccall f_923(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_923,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[34],lf[42]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(6)));}

/* k825 in make-thread in k819 in k666 in k663 */
static void C_ccall f_827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_827,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_832,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li10),tmp=(C_word)a,a+=5,tmp);
t4=C_i_setslot(t2,C_fix(1),t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}

/* make-thread in k819 in k666 in k663 */
static void C_ccall f_823(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_823r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_823r(t0,t1,t2,t3);}}

static void C_ccall f_823r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_827,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_852,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(t3))){
t6=C_slot(t3,C_fix(0));
t7=C_slot(*((C_word*)lf[30]+1),C_fix(9));
/* srfi-18.scm:100: ##sys#make-thread */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[31]+1)))(6,*((C_word*)lf[31]+1),t4,C_SCHEME_FALSE,lf[32],t6,t7);}
else{
/* srfi-18.scm:103: gensym */
t6=*((C_word*)lf[33]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[34]);}}

/* k740 in seconds->time in k666 in k663 */
static void C_ccall f_742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_742,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_record2(&a,2,lf[1],t1));}

/* time? in k666 in k663 */
static void C_ccall f_748(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_748,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[1]));}

/* k744 in seconds->time in k666 in k663 */
static void C_ccall f_746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:66: fp* */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[9]);}

/* thread-quantum-set! in k894 in k819 in k666 in k663 */
static void C_ccall f_907(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_907,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[34],lf[41]);
t5=C_i_check_exact_2(t3,lf[41]);
t6=C_i_fixnum_max(t3,C_fix(10));
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_set_i_slot(t2,C_fix(9),t6));}

/* uncaught-exception? in k666 in k663 */
static void C_ccall f_803(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_803,3,t0,t1,t2);}
if(C_truep(C_i_structurep(t2,lf[17]))){
t3=C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_memq(lf[24],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k1757 in k1615 in k1603 in a1597 in k1585 in mutex-unlock! in k894 in k819 in k666 in k663 */
static void C_ccall f_1759(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1759,2,t0,t1);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(2),t1);
t3=C_i_setslot(((C_word*)t0)[3],C_fix(11),((C_word*)t0)[2]);
if(C_truep(((C_word*)t0)[4])){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1713,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word)li43),tmp=(C_word)a,a+=6,tmp);
t5=C_i_setslot(((C_word*)t0)[3],C_fix(1),t4);
/* srfi-18.scm:352: ##sys#thread-block-for-timeout! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(4,*((C_word*)lf[59]+1),((C_word*)t0)[6],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1751,a[2]=((C_word*)t0)[5],a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp);
t5=C_i_setslot(((C_word*)t0)[3],C_fix(1),t4);
t6=((C_word*)t0)[6];
f_1620(2,t6,C_i_setslot(((C_word*)t0)[3],C_fix(3),lf[84]));}}

/* seconds->time in k666 in k663 */
static void C_ccall f_731(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_731,3,t0,t1,t2);}
t3=C_i_check_number_2(t2,lf[10]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_742,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_746,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:66: ##sys#exact->inexact */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t5,t2);}

/* k1730 in k1737 in a1712 in k1757 in k1615 in k1603 in a1597 in k1585 in mutex-unlock! in k894 in k819 in k666 in k663 */
static void C_ccall f_1732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:351: return */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],C_SCHEME_TRUE);}

/* a1003 in k991 in a988 in k973 in thread-join! in k894 in k819 in k666 in k663 */
static void C_ccall f_1004(C_word c,C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1004,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(3));
t3=C_eqp(t2,lf[29]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1017,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_slot(((C_word*)t0)[4],C_fix(13)))){
t5=C_slot(((C_word*)t0)[2],C_fix(2));
C_apply(4,0,t1,((C_word*)t0)[3],t5);}
else{
/* srfi-18.scm:178: ##sys#remove-from-timeout-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[51]+1)))(3,*((C_word*)lf[51]+1),t4,((C_word*)t0)[4]);}}
else{
t4=C_eqp(t2,lf[52]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1043,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=C_slot(((C_word*)t0)[2],C_fix(7));
t7=C_a_i_list2(&a,2,lf[53],t6);
t8=C_a_i_record3(&a,3,lf[17],lf[54],t7);
/* srfi-18.scm:182: ##sys#signal */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t5,t8);}
else{
t5=C_eqp(t2,lf[55]);
t6=(C_truep(t5)?t5:C_eqp(t2,lf[44]));
if(C_truep(t6)){
if(C_truep(((C_word*)t0)[5])){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1074,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[6])){
/* srfi-18.scm:188: return */
t8=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t8))(3,t8,t1,((C_word*)t0)[7]);}
else{
t8=C_a_i_record3(&a,3,lf[17],lf[56],C_SCHEME_END_OF_LIST);
/* srfi-18.scm:191: ##sys#signal */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t7,t8);}}
else{
/* srfi-18.scm:193: ##sys#thread-block-for-termination! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(4,*((C_word*)lf[57]+1),t1,((C_word*)t0)[4],((C_word*)t0)[2]);}}
else{
t7=C_slot(((C_word*)t0)[2],C_fix(3));
/* srfi-18.scm:195: ##sys#error */
t8=*((C_word*)lf[46]+1);
((C_proc6)(void*)(*((C_word*)t8+1)))(6,t8,t1,lf[50],lf[58],((C_word*)t0)[4],t7);}}}}

/* k2017 in thread-signal! in k894 in k819 in k666 in k663 */
static void C_ccall f_2019(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_1974(t2,C_i_setslot(((C_word*)t0)[3],C_fix(3),t1));}

/* k1737 in a1712 in k1757 in k1615 in k1603 in a1597 in k1585 in mutex-unlock! in k894 in k819 in k666 in k663 */
static void C_ccall f_1739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1739,2,t0,t1);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(2),t1);
t3=C_i_set_i_slot(((C_word*)t0)[3],C_fix(11),C_SCHEME_FALSE);
if(C_truep(C_slot(((C_word*)t0)[3],C_fix(13)))){
/* srfi-18.scm:348: return */
t4=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,((C_word*)t0)[5],C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1732,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:350: ##sys#remove-from-timeout-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[51]+1)))(3,*((C_word*)lf[51]+1),t4,((C_word*)t0)[3]);}}

/* thread-sleep! in k894 in k819 in k666 in k663 */
static void C_ccall f_1228(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1228,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1256,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=t3;
f_1256(2,t4,C_SCHEME_UNDEFINED);}
else{
/* srfi-18.scm:233: ##sys#signal-hook */
t4=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,lf[4],lf[67],lf[68],t2);}}

/* k1015 in a1003 in k991 in a988 in k973 in thread-join! in k894 in k819 in k666 in k663 */
static void C_ccall f_1017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(2));
C_apply(4,0,((C_word*)t0)[3],((C_word*)t0)[4],t2);}

/* time->seconds in k666 in k663 */
static void C_ccall f_718(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_718,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[1],lf[7]);
t4=C_slot(t2,C_fix(1));
/* srfi-18.scm:62: fp/ */
t5=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t4,lf[9]);}

/* k714 in current-time in k666 in k663 */
static void C_ccall f_716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_716,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_record2(&a,2,lf[1],t1));}

/* k2000 in thread-signal! in k894 in k819 in k666 in k663 */
static void C_ccall f_2002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_1974(t2,C_i_setslot(((C_word*)t0)[3],C_fix(2),t1));}

/* a1190 in thread-suspend! in k894 in k819 in k666 in k663 */
static void C_ccall f_1191(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1191,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1200,a[2]=t2,a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp);
t4=C_i_setslot(((C_word*)t0)[2],C_fix(1),t3);
/* srfi-18.scm:217: ##sys#schedule */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(2,*((C_word*)lf[27]+1),t1);}

/* k1585 in mutex-unlock! in k894 in k819 in k666 in k663 */
static void C_fcall f_1587(C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1587,NULL,2,t0,t1);}
t2=t1;
t3=((C_word*)t0)[2];
t4=C_u_i_length(t3);
t5=C_fixnum_greaterp(t4,C_fix(1));
t6=(C_truep(t5)?C_i_cadr(((C_word*)t0)[2]):C_SCHEME_FALSE);
t7=t6;
t8=(C_truep(t2)?C_i_check_structure_2(t2,lf[86],lf[85]):C_SCHEME_UNDEFINED);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1598,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t7,a[6]=((C_word)li45),tmp=(C_word)a,a+=7,tmp);
/* srfi-18.scm:329: ##sys#call-with-current-continuation */
C_call_cc(3,0,((C_word*)t0)[5],t9);}

/* mutex-unlock! in k894 in k819 in k666 in k663 */
static void C_ccall f_1580(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_1580r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1580r(t0,t1,t2,t3);}}

static void C_ccall f_1580r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(6);
t4=C_i_check_structure_2(t2,lf[70],lf[85]);
t5=*((C_word*)lf[30]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1587,a[2]=t3,a[3]=t2,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t3))){
t7=t3;
t8=t6;
f_1587(t8,C_u_i_car(t7));}
else{
t7=t6;
f_1587(t7,C_SCHEME_FALSE);}}

/* k1481 in a1366 in k1351 in mutex-lock! in k894 in k819 in k666 in k663 */
static void C_ccall f_1483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1483,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1494,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li39),tmp=(C_word)a,a+=8,tmp);
t3=C_i_setslot(((C_word*)t0)[3],C_fix(1),t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1489,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:312: ##sys#thread-block-for-timeout! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(4,*((C_word*)lf[59]+1),t4,((C_word*)t0)[3],((C_word*)t0)[9]);}

/* k1487 in k1481 in a1366 in k1351 in mutex-lock! in k894 in k819 in k666 in k663 */
static void C_ccall f_1489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:313: switch */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1370(t2,((C_word*)t0)[3]);}

/* terminated-thread-exception? in k666 in k663 */
static void C_ccall f_787(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_787,3,t0,t1,t2);}
if(C_truep(C_i_structurep(t2,lf[17]))){
t3=C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_memq(lf[22],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k1166 in thread-terminate! in k894 in k819 in k666 in k663 */
static void C_ccall f_1168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:203: g188 */
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* make-condition-variable in k894 in k819 in k666 in k663 */
static void C_ccall f_1798(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr2r,(void*)f_1798r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1798r(t0,t1,t2);}}

static void C_ccall f_1798r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1806,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_car(t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_record4(&a,4,lf[86],t5,C_SCHEME_END_OF_LIST,C_SCHEME_UNDEFINED));}
else{
/* srfi-18.scm:378: gensym */
t4=*((C_word*)lf[33]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[86]);}}

/* a1597 in k1585 in mutex-unlock! in k894 in k819 in k666 in k663 */
static void C_ccall f_1598(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1598,3,t0,t1,t2);}
t3=C_slot(((C_word*)t0)[2],C_fix(3));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1605,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,a[6]=t4,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[5])){
/* srfi-18.scm:332: compute-time-limit */
f_670(t5,((C_word*)t0)[5],lf[85]);}
else{
t6=t5;
f_1605(2,t6,C_SCHEME_FALSE);}}

/* a1493 in k1481 in a1366 in k1351 in mutex-lock! in k894 in k819 in k666 in k663 */
static void C_ccall f_1494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1494,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1534,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(3));
/* srfi-18.scm:304: ##sys#delq */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[83]+1)))(4,*((C_word*)lf[83]+1),t2,((C_word*)t0)[3],t3);}

/* k1379 in switch in a1366 in k1351 in mutex-lock! in k894 in k819 in k666 in k663 */
static void C_ccall f_1381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[2],C_fix(3),t1);
/* srfi-18.scm:276: ##sys#schedule */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(2,*((C_word*)lf[27]+1),((C_word*)t0)[3]);}

/* abandoned-mutex-exception? in k666 in k663 */
static void C_ccall f_771(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_771,3,t0,t1,t2);}
if(C_truep(C_i_structurep(t2,lf[17]))){
t3=C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_memq(lf[20],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* thread-suspend! in k894 in k819 in k666 in k663 */
static void C_ccall f_1173(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1173,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[34],lf[64]);
t4=C_i_setslot(t2,C_fix(3),lf[65]);
t5=C_eqp(t2,*((C_word*)lf[30]+1));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1191,a[2]=t2,a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:214: ##sys#call-with-current-continuation */
C_call_cc(3,0,t1,t6);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k1772 in k1603 in a1597 in k1585 in mutex-unlock! in k894 in k819 in k666 in k663 */
static void C_ccall f_1774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_1617(t2,C_i_setslot(((C_word*)t0)[3],C_fix(8),t1));}

/* k1041 in a1003 in k991 in a988 in k973 in thread-join! in k894 in k819 in k666 in k663 */
static void C_ccall f_1043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:181: return */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],t1);}

/* check in a1366 in k1351 in mutex-lock! in k894 in k819 in k666 in k663 */
static void C_fcall f_1391(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1391,NULL,2,t0,t1);}
if(C_truep(C_slot(((C_word*)t0)[2],C_fix(4)))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1405,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_record3(&a,3,lf[17],lf[82],C_SCHEME_END_OF_LIST);
/* srfi-18.scm:280: ##sys#signal */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t2,t3);}
else{
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1937 in for-each-loop367 in condition-variable-broadcast! in k894 in k819 in k666 in k663 */
static void C_ccall f_1939(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1929(t3,((C_word*)t0)[4],t2);}

/* compute-time-limit in k666 in k663 */
static void C_fcall f_670(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_670,NULL,3,t1,t2,t3);}
t4=t2;
if(C_truep(t4)){
if(C_truep(C_i_structurep(t2,lf[1]))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_slot(t2,C_fix(1)));}
else{
if(C_truep(C_i_numberp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_699,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:51: current-milliseconds */
t6=*((C_word*)lf[2]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
/* srfi-18.scm:52: ##sys#signal-hook */
t5=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t1,lf[4],t3,lf[5],t2);}}}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}

/* a1750 in k1757 in k1615 in k1603 in a1597 in k1585 in mutex-unlock! in k894 in k819 in k666 in k663 */
static void C_ccall f_1751(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1751,2,t0,t1);}
/* srfi-18.scm:354: return */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,C_SCHEME_TRUE);}

/* k1987 in a1984 in k1972 in thread-signal! in k894 in k819 in k666 in k663 */
static void C_ccall f_1989(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:440: old */
t2=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[3]);}

/* switch in a1366 in k1351 in mutex-lock! in k894 in k819 in k666 in k663 */
static void C_fcall f_1370(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1370,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1381,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(3));
t4=C_a_i_list1(&a,1,((C_word*)t0)[3]);
/* srfi-18.scm:275: ##sys#append */
t5=*((C_word*)lf[81]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,t3,t4);}

/* a1984 in k1972 in thread-signal! in k894 in k819 in k666 in k663 */
static void C_ccall f_1985(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1985,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1989,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:439: ##sys#signal */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t2,((C_word*)t0)[3]);}

/* thread-resume! in k894 in k819 in k666 in k663 */
static void C_ccall f_1206(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1206,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[34],lf[66]);
t4=C_slot(t2,C_fix(3));
t5=C_eqp(t4,lf[65]);
if(C_truep(t5)){
t6=C_i_setslot(t2,C_fix(3),lf[44]);
/* srfi-18.scm:223: ##sys#add-to-ready-queue */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[45]+1)))(3,*((C_word*)lf[45]+1),t1,t2);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* a1199 in a1190 in thread-suspend! in k894 in k819 in k666 in k663 */
static void C_ccall f_1200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1200,2,t0,t1);}
/* srfi-18.scm:216: return */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,C_SCHEME_UNDEFINED);}

/* a1366 in k1351 in mutex-lock! in k894 in k819 in k666 in k663 */
static void C_ccall f_1367(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[24],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1367,3,t0,t1,t2);}
t3=*((C_word*)lf[30]+1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1370,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp));
t9=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1391,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li38),tmp=(C_word)a,a+=5,tmp));
if(C_truep(C_slot(((C_word*)t0)[2],C_fix(5)))){
if(C_truep(((C_word*)t0)[3])){
t10=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1483,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t7,a[7]=t5,a[8]=t1,a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
/* srfi-18.scm:300: check */
t11=((C_word*)t7)[1];
f_1391(t11,t10);}
else{
t10=C_i_setslot(t3,C_fix(3),lf[84]);
t11=C_i_setslot(t3,C_fix(11),((C_word*)t0)[2]);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1552,a[2]=t2,a[3]=t7,a[4]=((C_word)li40),tmp=(C_word)a,a+=5,tmp);
t13=C_i_setslot(t3,C_fix(1),t12);
/* srfi-18.scm:318: switch */
t14=((C_word*)t5)[1];
f_1370(t14,t1);}}
else{
t10=(C_truep(((C_word*)t0)[5])?C_i_not(((C_word*)t0)[4]):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=C_i_set_i_slot(((C_word*)t0)[2],C_fix(2),C_SCHEME_FALSE);
t12=C_i_set_i_slot(((C_word*)t0)[2],C_fix(5),C_SCHEME_TRUE);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f2179,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:297: check */
t14=((C_word*)t7)[1];
f_1391(t14,t13);}
else{
t11=(C_truep(((C_word*)t0)[4])?((C_word*)t0)[4]:t3);
t12=C_slot(t11,C_fix(3));
t13=C_eqp(lf[52],t12);
t14=(C_truep(t13)?t13:C_eqp(lf[29],t12));
if(C_truep(t14)){
t15=C_i_set_i_slot(((C_word*)t0)[2],C_fix(4),C_SCHEME_TRUE);
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f2183,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:297: check */
t17=((C_word*)t7)[1];
f_1391(t17,t16);}
else{
t15=C_i_set_i_slot(((C_word*)t0)[2],C_fix(5),C_SCHEME_TRUE);
t16=C_slot(t11,C_fix(8));
t17=C_a_i_cons(&a,2,((C_word*)t0)[2],t16);
t18=C_i_setslot(t11,C_fix(8),t17);
t19=C_i_setslot(t11,C_fix(11),((C_word*)t0)[2]);
t20=C_i_setslot(((C_word*)t0)[2],C_fix(2),t11);
t21=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f2187,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:297: check */
t22=((C_word*)t7)[1];
f_1391(t22,t21);}}}}

/* k1615 in k1603 in a1597 in k1585 in mutex-unlock! in k894 in k819 in k666 in k663 */
static void C_fcall f_1617(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1617,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1620,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[7])){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1759,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[3],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t4=C_slot(((C_word*)t0)[7],C_fix(2));
t5=C_a_i_list(&a,1,((C_word*)t0)[2]);
/* srfi-18.scm:339: ##sys#append */
t6=*((C_word*)lf[81]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,t5);}
else{
t3=t2;
f_1620(2,t3,C_SCHEME_UNDEFINED);}}

/* thread-terminate! in k894 in k819 in k666 in k663 */
static void C_ccall f_1129(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1129,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[34],lf[60]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1136,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=C_eqp(t2,*((C_word*)lf[62]+1));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1168,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:204: ##sys#exit-handler */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[63]+1)))(2,*((C_word*)lf[63]+1),t6);}
else{
t6=t4;
f_1136(2,t6,C_SCHEME_UNDEFINED);}}

/* k1922 in condition-variable-broadcast! in k894 in k819 in k666 in k663 */
static void C_ccall f_1924(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_set_i_slot(((C_word*)t0)[3],C_fix(2),C_SCHEME_END_OF_LIST));}

/* for-each-loop367 in condition-variable-broadcast! in k894 in k819 in k666 in k663 */
static void C_fcall f_1929(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1929,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1939,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_slot(t4,C_fix(3));
t6=C_eqp(t5,lf[55]);
if(C_truep(t6)){
if(C_truep(t6)){
/* srfi-18.scm:415: ##sys#thread-basic-unblock! */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[94]+1)))(3,*((C_word*)lf[94]+1),t3,t4);}
else{
t7=C_slot(t2,C_fix(1));
t12=t1;
t13=t7;
t1=t12;
t2=t13;
goto loop;}}
else{
t7=C_eqp(t5,lf[84]);
if(C_truep(t7)){
/* srfi-18.scm:415: ##sys#thread-basic-unblock! */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[94]+1)))(3,*((C_word*)lf[94]+1),t3,t4);}
else{
t8=C_slot(t2,C_fix(1));
t12=t1;
t13=t8;
t1=t12;
t2=t13;
goto loop;}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1134 in thread-terminate! in k894 in k819 in k666 in k663 */
static void C_ccall f_1136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1136,2,t0,t1);}
t2=C_a_i_list1(&a,1,C_SCHEME_UNDEFINED);
t3=C_i_setslot(((C_word*)t0)[2],C_fix(2),t2);
t4=C_a_i_record3(&a,3,lf[17],lf[61],C_SCHEME_END_OF_LIST);
t5=C_i_setslot(((C_word*)t0)[2],C_fix(7),t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1145,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:207: ##sys#thread-kill! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[28]+1)))(4,*((C_word*)lf[28]+1),t6,((C_word*)t0)[2],lf[52]);}

/* k1603 in a1597 in k1585 in mutex-unlock! in k894 in k819 in k666 in k663 */
static void C_ccall f_1605(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1605,2,t0,t1);}
t2=t1;
t3=C_i_set_i_slot(((C_word*)t0)[2],C_fix(4),C_SCHEME_FALSE);
t4=C_i_set_i_slot(((C_word*)t0)[2],C_fix(5),C_SCHEME_FALSE);
t5=C_slot(((C_word*)t0)[2],C_fix(2));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1617,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t6)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1774,a[2]=t7,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t9=C_slot(t6,C_fix(8));
/* srfi-18.scm:337: ##sys#delq */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[83]+1)))(4,*((C_word*)lf[83]+1),t8,((C_word*)t0)[2],t9);}
else{
t8=t7;
f_1617(t8,C_SCHEME_UNDEFINED);}}

/* current-time in k666 in k663 */
static void C_ccall f_708(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_708,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_716,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:58: current-milliseconds */
t3=*((C_word*)lf[2]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* a2086 in k819 in k666 in k663 */
static void C_ccall f_2087(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2087,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[34],lf[39]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(10)));}

/* k1403 in check in a1366 in k1351 in mutex-lock! in k894 in k819 in k666 in k663 */
static void C_ccall f_1405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:279: return */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],t1);}

/* k2074 in thread-wait-for-i/o! in k894 in k819 in k666 in k663 */
static void C_ccall f_2076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:461: thread-yield! */
t2=*((C_word*)lf[48]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_srfi_2d18_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_srfi_2d18_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("srfi_2d18_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1079)){
C_save(t1);
C_rereclaim2(1079*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,111);
lf[1]=C_h_intern(&lf[1],4,"time");
lf[2]=C_h_intern(&lf[2],20,"current-milliseconds");
lf[3]=C_h_intern(&lf[3],15,"\003syssignal-hook");
lf[4]=C_h_intern(&lf[4],11,"\000type-error");
lf[5]=C_decode_literal(C_heaptop,"\376B\000\000\030invalid timeout argument");
lf[6]=C_h_intern(&lf[6],12,"current-time");
lf[7]=C_h_intern(&lf[7],13,"time->seconds");
lf[8]=C_h_intern(&lf[8],3,"fp/");
lf[9]=C_decode_literal(C_heaptop,"\376U1000.0\000");
lf[10]=C_h_intern(&lf[10],13,"seconds->time");
lf[11]=C_h_intern(&lf[11],3,"fp\052");
lf[12]=C_h_intern(&lf[12],18,"\003sysexact->inexact");
lf[13]=C_h_intern(&lf[13],5,"time\077");
lf[14]=C_h_intern(&lf[14],5,"raise");
lf[15]=C_h_intern(&lf[15],10,"\003syssignal");
lf[16]=C_h_intern(&lf[16],23,"join-timeout-exception\077");
lf[17]=C_h_intern(&lf[17],9,"condition");
lf[18]=C_h_intern(&lf[18],22,"join-timeout-exception");
lf[19]=C_h_intern(&lf[19],26,"abandoned-mutex-exception\077");
lf[20]=C_h_intern(&lf[20],25,"abandoned-mutex-exception");
lf[21]=C_h_intern(&lf[21],28,"terminated-thread-exception\077");
lf[22]=C_h_intern(&lf[22],27,"terminated-thread-exception");
lf[23]=C_h_intern(&lf[23],19,"uncaught-exception\077");
lf[24]=C_h_intern(&lf[24],18,"uncaught-exception");
lf[25]=C_h_intern(&lf[25],25,"uncaught-exception-reason");
lf[26]=C_h_intern(&lf[26],11,"make-thread");
lf[27]=C_h_intern(&lf[27],12,"\003sysschedule");
lf[28]=C_h_intern(&lf[28],16,"\003systhread-kill!");
lf[29]=C_h_intern(&lf[29],4,"dead");
lf[30]=C_h_intern(&lf[30],18,"\003syscurrent-thread");
lf[31]=C_h_intern(&lf[31],15,"\003sysmake-thread");
lf[32]=C_h_intern(&lf[32],7,"created");
lf[33]=C_h_intern(&lf[33],6,"gensym");
lf[34]=C_h_intern(&lf[34],6,"thread");
lf[35]=C_h_intern(&lf[35],7,"thread\077");
lf[36]=C_h_intern(&lf[36],14,"current-thread");
lf[37]=C_h_intern(&lf[37],12,"thread-state");
lf[38]=C_h_intern(&lf[38],20,"thread-specific-set!");
lf[39]=C_h_intern(&lf[39],15,"thread-specific");
lf[40]=C_h_intern(&lf[40],14,"thread-quantum");
lf[41]=C_h_intern(&lf[41],19,"thread-quantum-set!");
lf[42]=C_h_intern(&lf[42],11,"thread-name");
lf[43]=C_h_intern(&lf[43],13,"thread-start!");
lf[44]=C_h_intern(&lf[44],5,"ready");
lf[45]=C_h_intern(&lf[45],22,"\003sysadd-to-ready-queue");
lf[46]=C_h_intern(&lf[46],9,"\003syserror");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000&thread cannot be started a second time");
lf[48]=C_h_intern(&lf[48],13,"thread-yield!");
lf[49]=C_h_intern(&lf[49],17,"\003systhread-yield!");
lf[50]=C_h_intern(&lf[50],12,"thread-join!");
lf[51]=C_h_intern(&lf[51],28,"\003sysremove-from-timeout-list");
lf[52]=C_h_intern(&lf[52],10,"terminated");
lf[53]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\022uncaught-exception\376\001\000\000\006reason");
lf[54]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\022uncaught-exception\376\377\016");
lf[55]=C_h_intern(&lf[55],7,"blocked");
lf[56]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\026join-timeout-exception\376\377\016");
lf[57]=C_h_intern(&lf[57],33,"\003systhread-block-for-termination!");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\0000Internal scheduler error: unknown thread state: ");
lf[59]=C_h_intern(&lf[59],29,"\003systhread-block-for-timeout!");
lf[60]=C_h_intern(&lf[60],17,"thread-terminate!");
lf[61]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\033terminated-thread-exception\376\377\016");
lf[62]=C_h_intern(&lf[62],21,"\003sysprimordial-thread");
lf[63]=C_h_intern(&lf[63],16,"\003sysexit-handler");
lf[64]=C_h_intern(&lf[64],15,"thread-suspend!");
lf[65]=C_h_intern(&lf[65],9,"suspended");
lf[66]=C_h_intern(&lf[66],14,"thread-resume!");
lf[67]=C_h_intern(&lf[67],13,"thread-sleep!");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\030invalid timeout argument");
lf[69]=C_h_intern(&lf[69],6,"mutex\077");
lf[70]=C_h_intern(&lf[70],5,"mutex");
lf[71]=C_h_intern(&lf[71],10,"make-mutex");
lf[72]=C_h_intern(&lf[72],14,"\003sysmake-mutex");
lf[73]=C_h_intern(&lf[73],10,"mutex-name");
lf[74]=C_h_intern(&lf[74],14,"mutex-specific");
lf[75]=C_h_intern(&lf[75],19,"mutex-specific-set!");
lf[76]=C_h_intern(&lf[76],11,"mutex-state");
lf[77]=C_h_intern(&lf[77],9,"not-owned");
lf[78]=C_h_intern(&lf[78],9,"abandoned");
lf[79]=C_h_intern(&lf[79],13,"not-abandoned");
lf[80]=C_h_intern(&lf[80],11,"mutex-lock!");
lf[81]=C_h_intern(&lf[81],10,"\003sysappend");
lf[82]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\031abandoned-mutex-exception\376\377\016");
lf[83]=C_h_intern(&lf[83],8,"\003sysdelq");
lf[84]=C_h_intern(&lf[84],8,"sleeping");
lf[85]=C_h_intern(&lf[85],13,"mutex-unlock!");
lf[86]=C_h_intern(&lf[86],18,"condition-variable");
lf[87]=C_h_intern(&lf[87],7,"running");
lf[88]=C_h_intern(&lf[88],23,"make-condition-variable");
lf[89]=C_h_intern(&lf[89],19,"condition-variable\077");
lf[90]=C_h_intern(&lf[90],23,"condition-variable-name");
lf[91]=C_h_intern(&lf[91],27,"condition-variable-specific");
lf[92]=C_h_intern(&lf[92],32,"condition-variable-specific-set!");
lf[93]=C_h_intern(&lf[93],26,"condition-variable-signal!");
lf[94]=C_h_intern(&lf[94],25,"\003systhread-basic-unblock!");
lf[95]=C_h_intern(&lf[95],29,"condition-variable-broadcast!");
lf[96]=C_h_intern(&lf[96],8,"for-each");
lf[97]=C_h_intern(&lf[97],14,"thread-signal!");
lf[98]=C_h_intern(&lf[98],19,"\003systhread-unblock!");
lf[99]=C_h_intern(&lf[99],20,"\003sysread-prompt-hook");
lf[100]=C_h_intern(&lf[100],25,"\003systhread-block-for-i/o!");
lf[101]=C_h_intern(&lf[101],6,"\000input");
lf[102]=C_h_intern(&lf[102],13,"\003systty-port\077");
lf[103]=C_h_intern(&lf[103],18,"\003sysstandard-input");
lf[104]=C_h_intern(&lf[104],20,"thread-wait-for-i/o!");
lf[105]=C_h_intern(&lf[105],4,"\000all");
lf[106]=C_h_intern(&lf[106],18,"getter-with-setter");
lf[107]=C_h_intern(&lf[107],27,"condition-property-accessor");
lf[108]=C_h_intern(&lf[108],6,"reason");
lf[109]=C_h_intern(&lf[109],17,"register-feature!");
lf[110]=C_h_intern(&lf[110],7,"srfi-18");
C_register_lf2(lf,111,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_665,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_scheduler_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* thread-signal! in k894 in k819 in k666 in k663 */
static void C_ccall f_1952(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[10],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1952,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[34],lf[97]);
t5=C_eqp(t2,*((C_word*)lf[30]+1));
if(C_truep(t5)){
/* srfi-18.scm:426: ##sys#signal */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t1,t3);}
else{
t6=C_slot(t2,C_fix(1));
t7=t6;
t8=C_slot(t2,C_fix(11));
t9=t8;
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1974,a[2]=t7,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_structurep(t9,lf[86]))){
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2002,a[2]=t10,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t12=C_slot(t9,C_fix(2));
/* srfi-18.scm:431: ##sys#delq */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[83]+1)))(4,*((C_word*)lf[83]+1),t11,t2,t12);}
else{
if(C_truep(C_i_structurep(t9,lf[70]))){
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2019,a[2]=t10,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t12=C_slot(t9,C_fix(3));
/* srfi-18.scm:433: ##sys#delq */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[83]+1)))(4,*((C_word*)lf[83]+1),t11,t2,t12);}
else{
if(C_truep(C_i_structurep(t9,lf[34]))){
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2036,a[2]=t10,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t12=C_slot(t9,C_fix(12));
/* srfi-18.scm:435: ##sys#delq */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[83]+1)))(4,*((C_word*)lf[83]+1),t11,t2,t12);}
else{
t11=t10;
f_1974(t11,C_SCHEME_UNDEFINED);}}}}}

/* k1621 in k1618 in k1615 in k1603 in a1597 in k1585 in mutex-unlock! in k894 in k819 in k666 in k663 */
static void C_ccall f_1623(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(3));
t3=C_eqp(t2,lf[87]);
if(C_truep(t3)){
/* srfi-18.scm:367: return */
t4=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,((C_word*)t0)[4],C_SCHEME_TRUE);}
else{
/* srfi-18.scm:368: ##sys#schedule */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(2,*((C_word*)lf[27]+1),((C_word*)t0)[4]);}}

/* k1618 in k1615 in k1603 in a1597 in k1585 in mutex-unlock! in k894 in k819 in k666 in k663 */
static void C_ccall f_1620(C_word c,C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1620,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1623,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[5]))){
t3=t2;
f_1623(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=C_slot(((C_word*)t0)[5],C_fix(0));
t4=C_slot(t3,C_fix(3));
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=C_i_setslot(((C_word*)t0)[6],C_fix(3),t5);
t7=C_i_set_i_slot(((C_word*)t0)[6],C_fix(5),C_SCHEME_TRUE);
t8=C_eqp(t4,lf[55]);
t9=(C_truep(t8)?t8:C_eqp(t4,lf[84]));
if(C_truep(t9)){
t10=C_i_setslot(((C_word*)t0)[6],C_fix(2),t3);
t11=C_slot(t3,C_fix(8));
t12=C_a_i_cons(&a,2,((C_word*)t0)[6],t11);
t13=C_i_setslot(t3,C_fix(8),t12);
t14=C_i_set_i_slot(t3,C_fix(11),C_SCHEME_FALSE);
t15=C_eqp(t4,lf[84]);
if(C_truep(t15)){
/* srfi-18.scm:365: ##sys#add-to-ready-queue */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[45]+1)))(3,*((C_word*)lf[45]+1),t2,t3);}
else{
t16=t2;
f_1623(2,t16,C_SCHEME_UNDEFINED);}}
else{
t10=C_SCHEME_UNDEFINED;
t11=t2;
f_1623(2,t11,t10);}}}

/* condition-variable-specific in k894 in k819 in k666 in k663 */
static void C_ccall f_1830(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1830,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[86],lf[91]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(3)));}

/* condition-variable-specific-set! in k894 in k819 in k666 in k663 */
static void C_ccall f_1839(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1839,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[86],lf[92]);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_setslot(t2,C_fix(3),t3));}

/* thread-wait-for-i/o! in k894 in k819 in k666 in k663 */
static void C_ccall f_2066(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_2066r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2066r(t0,t1,t2,t3);}}

static void C_ccall f_2066r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(3);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?lf[105]:C_i_car(t3));
t6=C_i_check_exact_2(t2,lf[104]);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2076,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:460: ##sys#thread-block-for-i/o! */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[100]+1)))(5,*((C_word*)lf[100]+1),t7,*((C_word*)lf[30]+1),t2,t5);}

/* mutex-specific in k894 in k819 in k666 in k663 */
static void C_ccall f_1301(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1301,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[70],lf[74]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(6)));}

/* k2050 in read-prompt-hook in k894 in k819 in k666 in k663 */
static void C_ccall f_2052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2052,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2055,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:451: old */
t3=((C_word*)t0)[3];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* condition-variable-signal! in k894 in k819 in k666 in k663 */
static void C_ccall f_1848(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1848,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[86],lf[93]);
t4=C_slot(t2,C_fix(2));
if(C_truep(C_i_nullp(t4))){
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_slot(t4,C_fix(0));
t6=C_slot(t5,C_fix(3));
t7=C_slot(t4,C_fix(1));
t8=C_i_setslot(t2,C_fix(2),t7);
t9=C_eqp(t6,lf[55]);
if(C_truep(t9)){
if(C_truep(t9)){
/* srfi-18.scm:406: ##sys#thread-basic-unblock! */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[94]+1)))(3,*((C_word*)lf[94]+1),t1,t5);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_UNDEFINED);}}
else{
t10=C_eqp(t6,lf[84]);
if(C_truep(t10)){
/* srfi-18.scm:406: ##sys#thread-basic-unblock! */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[94]+1)))(3,*((C_word*)lf[94]+1),t1,t5);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_UNDEFINED);}}}}

/* mutex-specific-set! in k894 in k819 in k666 in k663 */
static void C_ccall f_1310(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1310,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[70],lf[75]);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_setslot(t2,C_fix(6),t3));}

/* k2053 in k2050 in read-prompt-hook in k894 in k819 in k666 in k663 */
static void C_ccall f_2055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2055,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2058,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:452: ##sys#thread-block-for-i/o! */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[100]+1)))(5,*((C_word*)lf[100]+1),t2,*((C_word*)lf[30]+1),C_fix(0),lf[101]);}

/* k2056 in k2053 in k2050 in read-prompt-hook in k894 in k819 in k666 in k663 */
static void C_ccall f_2058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:453: thread-yield! */
t2=*((C_word*)lf[48]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k1143 in k1134 in thread-terminate! in k894 in k819 in k666 in k663 */
static void C_ccall f_1145(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_eqp(((C_word*)t0)[2],*((C_word*)lf[30]+1));
if(C_truep(t2)){
/* srfi-18.scm:208: ##sys#schedule */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(2,*((C_word*)lf[27]+1),((C_word*)t0)[3]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* ##sys#read-prompt-hook in k894 in k819 in k666 in k663 */
static void C_ccall f_2042(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2042,2,t0,t1);}
t2=C_fudge(C_fix(12));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2052,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=t3;
f_2052(2,t4,t2);}
else{
/* srfi-18.scm:450: ##sys#tty-port? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[102]+1)))(3,*((C_word*)lf[102]+1),t3,*((C_word*)lf[103]+1));}}

/* mutex-state in k894 in k819 in k666 in k663 */
static void C_ccall f_1319(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1319,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[70],lf[76]);
if(C_truep(C_slot(t2,C_fix(5)))){
t4=C_slot(t2,C_fix(2));
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?t4:lf[77]));}
else{
t4=C_slot(t2,C_fix(4));
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?lf[78]:lf[79]));}}

/* k2034 in thread-signal! in k894 in k819 in k666 in k663 */
static void C_ccall f_2036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_1974(t2,C_i_setslot(((C_word*)t0)[3],C_fix(12),t1));}

/* f2187 in a1366 in k1351 in mutex-lock! in k894 in k819 in k666 in k663 */
static void C_ccall f2187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:298: return */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],C_SCHEME_TRUE);}

/* f2183 in a1366 in k1351 in mutex-lock! in k894 in k819 in k666 in k663 */
static void C_ccall f2183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:298: return */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],C_SCHEME_TRUE);}

/* mutex-lock! in k894 in k819 in k666 in k663 */
static void C_ccall f_1343(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_1343r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1343r(t0,t1,t2,t3);}}

static void C_ccall f_1343r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t4=C_i_check_structure_2(t2,lf[70],lf[80]);
t5=C_i_pairp(t3);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1353,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
t7=C_i_car(t3);
/* srfi-18.scm:266: compute-time-limit */
f_670(t6,t7,lf[80]);}
else{
t7=t6;
f_1353(2,t7,C_SCHEME_FALSE);}}

/* f2179 in a1366 in k1351 in mutex-lock! in k894 in k819 in k666 in k663 */
static void C_ccall f2179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:298: return */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],C_SCHEME_TRUE);}

/* k997 in k991 in a988 in k973 in thread-join! in k894 in k819 in k666 in k663 */
static void C_ccall f_999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:199: ##sys#schedule */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(2,*((C_word*)lf[27]+1),((C_word*)t0)[2]);}

/* k991 in a988 in k973 in thread-join! in k894 in k819 in k666 in k663 */
static void C_ccall f_993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_993,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1004,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li20),tmp=(C_word)a,a+=9,tmp);
t3=C_i_setslot(((C_word*)t0)[4],C_fix(1),t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_999,a[2]=((C_word*)t0)[8],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:198: ##sys#thread-block-for-termination! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(4,*((C_word*)lf[57]+1),t4,((C_word*)t0)[4],((C_word*)t0)[2]);}

/* k1351 in mutex-lock! in k894 in k819 in k666 in k663 */
static void C_ccall f_1353(C_word c,C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1353,2,t0,t1);}
t2=t1;
t3=((C_word*)t0)[2];
t4=C_u_i_length(t3);
t5=C_fixnum_greaterp(t4,C_fix(1));
t6=t5;
t7=(C_truep(t6)?C_i_cadr(((C_word*)t0)[2]):C_SCHEME_FALSE);
t8=t7;
t9=(C_truep(t8)?C_i_check_structure_2(t8,lf[34],lf[80]):C_SCHEME_UNDEFINED);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1367,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t8,a[5]=t6,a[6]=((C_word)li41),tmp=(C_word)a,a+=7,tmp);
/* srfi-18.scm:270: ##sys#call-with-current-continuation */
C_call_cc(3,0,((C_word*)t0)[4],t10);}

/* k1972 in thread-signal! in k894 in k819 in k666 in k663 */
static void C_fcall f_1974(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1974,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1985,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li55),tmp=(C_word)a,a+=5,tmp);
t3=C_i_setslot(((C_word*)t0)[4],C_fix(1),t2);
t4=C_i_setslot(((C_word*)t0)[4],C_fix(3),lf[55]);
/* srfi-18.scm:442: ##sys#thread-unblock! */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[98]+1)))(3,*((C_word*)lf[98]+1),((C_word*)t0)[5],((C_word*)t0)[4]);}

/* condition-variable-broadcast! in k894 in k819 in k666 in k663 */
static void C_ccall f_1891(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1891,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[86],lf[95]);
t4=C_slot(t2,C_fix(2));
t5=C_i_check_list_2(t4,lf[96]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1924,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1929,a[2]=t8,a[3]=((C_word)li53),tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_1929(t10,t6,t4);}

/* k973 in thread-join! in k894 in k819 in k666 in k663 */
static void C_ccall f_975(C_word c,C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_975,2,t0,t1);}
t2=t1;
t3=C_i_pairp(((C_word*)t0)[2]);
t4=(C_truep(t3)?C_slot(((C_word*)t0)[2],C_fix(1)):C_SCHEME_FALSE);
t5=(C_truep(t4)?C_i_pairp(t4):C_SCHEME_FALSE);
t6=t5;
t7=(C_truep(t6)?C_slot(t4,C_fix(0)):C_SCHEME_FALSE);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_989,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t6,a[5]=t8,a[6]=((C_word)li21),tmp=(C_word)a,a+=7,tmp);
/* srfi-18.scm:168: ##sys#call-with-current-continuation */
C_call_cc(3,0,((C_word*)t0)[4],t9);}

/* k1254 in thread-sleep! in k894 in k819 in k666 in k663 */
static void C_ccall f_1256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1256,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1263,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:234: compute-time-limit */
f_670(t2,((C_word*)t0)[3],lf[67]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[123] = {
{"f_1268:srfi_2d18_2escm",(void*)f_1268},
{"f_1263:srfi_2d18_2escm",(void*)f_1263},
{"f_1806:srfi_2d18_2escm",(void*)f_1806},
{"f_755:srfi_2d18_2escm",(void*)f_755},
{"f_898:srfi_2d18_2escm",(void*)f_898},
{"f_896:srfi_2d18_2escm",(void*)f_896},
{"f_1815:srfi_2d18_2escm",(void*)f_1815},
{"f_665:srfi_2d18_2escm",(void*)f_665},
{"f_668:srfi_2d18_2escm",(void*)f_668},
{"f_989:srfi_2d18_2escm",(void*)f_989},
{"f_885:srfi_2d18_2escm",(void*)f_885},
{"f_1074:srfi_2d18_2escm",(void*)f_1074},
{"f_1821:srfi_2d18_2escm",(void*)f_1821},
{"f_873:srfi_2d18_2escm",(void*)f_873},
{"f_876:srfi_2d18_2escm",(void*)f_876},
{"f_1292:srfi_2d18_2escm",(void*)f_1292},
{"f_1556:srfi_2d18_2escm",(void*)f_1556},
{"f_867:srfi_2d18_2escm",(void*)f_867},
{"f_1552:srfi_2d18_2escm",(void*)f_1552},
{"f_932:srfi_2d18_2escm",(void*)f_932},
{"f_939:srfi_2d18_2escm",(void*)f_939},
{"f_936:srfi_2d18_2escm",(void*)f_936},
{"f_852:srfi_2d18_2escm",(void*)f_852},
{"f_962:srfi_2d18_2escm",(void*)f_962},
{"f_968:srfi_2d18_2escm",(void*)f_968},
{"f_1534:srfi_2d18_2escm",(void*)f_1534},
{"f_1237:srfi_2d18_2escm",(void*)f_1237},
{"f_699:srfi_2d18_2escm",(void*)f_699},
{"f_1501:srfi_2d18_2escm",(void*)f_1501},
{"f_1504:srfi_2d18_2escm",(void*)f_1504},
{"f_945:srfi_2d18_2escm",(void*)f_945},
{"f_845:srfi_2d18_2escm",(void*)f_845},
{"f_1244:srfi_2d18_2escm",(void*)f_1244},
{"f_1249:srfi_2d18_2escm",(void*)f_1249},
{"f_832:srfi_2d18_2escm",(void*)f_832},
{"f_838:srfi_2d18_2escm",(void*)f_838},
{"f_1713:srfi_2d18_2escm",(void*)f_1713},
{"f_1278:srfi_2d18_2escm",(void*)f_1278},
{"f_1274:srfi_2d18_2escm",(void*)f_1274},
{"f_821:srfi_2d18_2escm",(void*)f_821},
{"f_923:srfi_2d18_2escm",(void*)f_923},
{"f_827:srfi_2d18_2escm",(void*)f_827},
{"f_823:srfi_2d18_2escm",(void*)f_823},
{"f_742:srfi_2d18_2escm",(void*)f_742},
{"f_748:srfi_2d18_2escm",(void*)f_748},
{"f_746:srfi_2d18_2escm",(void*)f_746},
{"f_907:srfi_2d18_2escm",(void*)f_907},
{"f_803:srfi_2d18_2escm",(void*)f_803},
{"f_1759:srfi_2d18_2escm",(void*)f_1759},
{"f_731:srfi_2d18_2escm",(void*)f_731},
{"f_1732:srfi_2d18_2escm",(void*)f_1732},
{"f_1004:srfi_2d18_2escm",(void*)f_1004},
{"f_2019:srfi_2d18_2escm",(void*)f_2019},
{"f_1739:srfi_2d18_2escm",(void*)f_1739},
{"f_1228:srfi_2d18_2escm",(void*)f_1228},
{"f_1017:srfi_2d18_2escm",(void*)f_1017},
{"f_718:srfi_2d18_2escm",(void*)f_718},
{"f_716:srfi_2d18_2escm",(void*)f_716},
{"f_2002:srfi_2d18_2escm",(void*)f_2002},
{"f_1191:srfi_2d18_2escm",(void*)f_1191},
{"f_1587:srfi_2d18_2escm",(void*)f_1587},
{"f_1580:srfi_2d18_2escm",(void*)f_1580},
{"f_1483:srfi_2d18_2escm",(void*)f_1483},
{"f_1489:srfi_2d18_2escm",(void*)f_1489},
{"f_787:srfi_2d18_2escm",(void*)f_787},
{"f_1168:srfi_2d18_2escm",(void*)f_1168},
{"f_1798:srfi_2d18_2escm",(void*)f_1798},
{"f_1598:srfi_2d18_2escm",(void*)f_1598},
{"f_1494:srfi_2d18_2escm",(void*)f_1494},
{"f_1381:srfi_2d18_2escm",(void*)f_1381},
{"f_771:srfi_2d18_2escm",(void*)f_771},
{"f_1173:srfi_2d18_2escm",(void*)f_1173},
{"f_1774:srfi_2d18_2escm",(void*)f_1774},
{"f_1043:srfi_2d18_2escm",(void*)f_1043},
{"f_1391:srfi_2d18_2escm",(void*)f_1391},
{"f_1939:srfi_2d18_2escm",(void*)f_1939},
{"f_670:srfi_2d18_2escm",(void*)f_670},
{"f_1751:srfi_2d18_2escm",(void*)f_1751},
{"f_1989:srfi_2d18_2escm",(void*)f_1989},
{"f_1370:srfi_2d18_2escm",(void*)f_1370},
{"f_1985:srfi_2d18_2escm",(void*)f_1985},
{"f_1206:srfi_2d18_2escm",(void*)f_1206},
{"f_1200:srfi_2d18_2escm",(void*)f_1200},
{"f_1367:srfi_2d18_2escm",(void*)f_1367},
{"f_1617:srfi_2d18_2escm",(void*)f_1617},
{"f_1129:srfi_2d18_2escm",(void*)f_1129},
{"f_1924:srfi_2d18_2escm",(void*)f_1924},
{"f_1929:srfi_2d18_2escm",(void*)f_1929},
{"f_1136:srfi_2d18_2escm",(void*)f_1136},
{"f_1605:srfi_2d18_2escm",(void*)f_1605},
{"f_708:srfi_2d18_2escm",(void*)f_708},
{"f_2087:srfi_2d18_2escm",(void*)f_2087},
{"f_1405:srfi_2d18_2escm",(void*)f_1405},
{"f_2076:srfi_2d18_2escm",(void*)f_2076},
{"toplevel:srfi_2d18_2escm",(void*)C_srfi_2d18_toplevel},
{"f_1952:srfi_2d18_2escm",(void*)f_1952},
{"f_1623:srfi_2d18_2escm",(void*)f_1623},
{"f_1620:srfi_2d18_2escm",(void*)f_1620},
{"f_1830:srfi_2d18_2escm",(void*)f_1830},
{"f_1839:srfi_2d18_2escm",(void*)f_1839},
{"f_2066:srfi_2d18_2escm",(void*)f_2066},
{"f_1301:srfi_2d18_2escm",(void*)f_1301},
{"f_2052:srfi_2d18_2escm",(void*)f_2052},
{"f_1848:srfi_2d18_2escm",(void*)f_1848},
{"f_1310:srfi_2d18_2escm",(void*)f_1310},
{"f_2055:srfi_2d18_2escm",(void*)f_2055},
{"f_2058:srfi_2d18_2escm",(void*)f_2058},
{"f_1145:srfi_2d18_2escm",(void*)f_1145},
{"f_2042:srfi_2d18_2escm",(void*)f_2042},
{"f_1319:srfi_2d18_2escm",(void*)f_1319},
{"f_2036:srfi_2d18_2escm",(void*)f_2036},
{"f2187:srfi_2d18_2escm",(void*)f2187},
{"f2183:srfi_2d18_2escm",(void*)f2183},
{"f_1343:srfi_2d18_2escm",(void*)f_1343},
{"f2179:srfi_2d18_2escm",(void*)f2179},
{"f_999:srfi_2d18_2escm",(void*)f_999},
{"f_993:srfi_2d18_2escm",(void*)f_993},
{"f_1353:srfi_2d18_2escm",(void*)f_1353},
{"f_1974:srfi_2d18_2escm",(void*)f_1974},
{"f_1891:srfi_2d18_2escm",(void*)f_1891},
{"f_975:srfi_2d18_2escm",(void*)f_975},
{"f_1256:srfi_2d18_2escm",(void*)f_1256},
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
S|  ##sys#for-each		1
o|eliminated procedure checks: 134 
o|specializations:
o|  2 (car pair)
o|  2 (length list)
o|  4 (eqv? * (not float))
o|Removed `not' forms: 2 
o|contracted procedure: k675 
o|inlining procedure: k672 
o|inlining procedure: k687 
o|inlining procedure: k687 
o|inlining procedure: k672 
o|inlining procedure: k757 
o|inlining procedure: k757 
o|inlining procedure: k773 
o|inlining procedure: k773 
o|inlining procedure: k789 
o|inlining procedure: k789 
o|inlining procedure: k805 
o|inlining procedure: k805 
o|inlining procedure: k1009 
o|inlining procedure: k1009 
o|inlining procedure: k1056 
o|inlining procedure: k1072 
o|inlining procedure: k1072 
o|inlining procedure: k1056 
o|substituted constant variable: a1096 
o|substituted constant variable: a1098 
o|substituted constant variable: a1100 
o|substituted constant variable: a1102 
o|propagated global variable: ct171 ##sys#current-thread 
o|inlining procedure: k1146 
o|inlining procedure: k1146 
o|inlining procedure: k1181 
o|inlining procedure: k1181 
o|inlining procedure: k1211 
o|inlining procedure: k1211 
o|contracted procedure: "(srfi-18.scm:234) sleep207" 
o|propagated global variable: ct210 ##sys#current-thread 
o|inlining procedure: k1276 
o|inlining procedure: k1276 
o|inlining procedure: k1324 
o|inlining procedure: k1324 
o|inlining procedure: k1393 
o|inlining procedure: k1393 
o|contracted procedure: k1413 
o|inlining procedure: k1410 
o|inlining procedure: k1410 
o|inlining procedure: k1440 
o|inlining procedure: k1440 
o|inlining procedure: k1624 
o|inlining procedure: k1624 
o|inlining procedure: k1655 
o|inlining procedure: k1655 
o|inlining procedure: k1703 
o|inlining procedure: k1721 
o|inlining procedure: k1721 
o|inlining procedure: k1703 
o|inlining procedure: k1804 
o|inlining procedure: k1804 
o|inlining procedure: k1856 
o|inlining procedure: k1856 
o|inlining procedure: k1931 
o|contracted procedure: "(srfi-18.scm:411) g368375" 
o|inlining procedure: k1901 
o|inlining procedure: k1901 
o|inlining procedure: k1931 
o|inlining procedure: k1957 
o|inlining procedure: k1957 
o|inlining procedure: k2007 
o|inlining procedure: k2007 
o|inlining procedure: k2044 
o|inlining procedure: k2044 
o|replaced variables: 216 
o|removed binding forms: 152 
o|substituted constant variable: r6732098 
o|substituted constant variable: r7582100 
o|substituted constant variable: r7742102 
o|substituted constant variable: r7902104 
o|substituted constant variable: r8062106 
o|replaced variables: 3 
o|removed binding forms: 221 
o|inlining procedure: k1877 
o|inlining procedure: k1907 
o|replaced variables: 1 
o|removed binding forms: 8 
o|removed binding forms: 1 
o|simplifications: ((if . 15) (##core#call . 227)) 
o|  call simplifications:
o|    ##sys#fudge
o|    ##sys#check-list
o|    ##sys#list
o|    fx>	2
o|    cadr	2
o|    not
o|    cons	3
o|    null?	4
o|    car	3
o|    ##sys#call-with-current-continuation	5
o|    list	3
o|    apply
o|    procedure?
o|    eq?	20
o|    ##sys#check-exact	2
o|    fxmax
o|    ##sys#setislot	9
o|    pair?	8
o|    ##sys#call-with-values
o|    ##sys#setslot	43
o|    memq	4
o|    ##sys#check-number
o|    ##sys#check-structure	26
o|    ##sys#make-structure	8
o|    ##sys#structure?	12
o|    number?
o|    *
o|    +
o|    ##sys#slot	61
o|contracted procedure: k681 
o|contracted procedure: k690 
o|contracted procedure: k701 
o|contracted procedure: k720 
o|contracted procedure: k727 
o|contracted procedure: k733 
o|contracted procedure: k760 
o|contracted procedure: k767 
o|contracted procedure: k776 
o|contracted procedure: k783 
o|contracted procedure: k792 
o|contracted procedure: k799 
o|contracted procedure: k808 
o|contracted procedure: k815 
o|contracted procedure: k840 
o|contracted procedure: k828 
o|contracted procedure: k854 
o|contracted procedure: k857 
o|contracted procedure: k878 
o|contracted procedure: k887 
o|contracted procedure: k900 
o|contracted procedure: k909 
o|contracted procedure: k912 
o|contracted procedure: k919 
o|contracted procedure: k925 
o|contracted procedure: k940 
o|contracted procedure: k953 
o|contracted procedure: k946 
o|contracted procedure: k956 
o|contracted procedure: k970 
o|contracted procedure: k1112 
o|contracted procedure: k976 
o|contracted procedure: k979 
o|contracted procedure: k982 
o|contracted procedure: k1006 
o|contracted procedure: k1012 
o|contracted procedure: k1022 
o|contracted procedure: k1025 
o|contracted procedure: k1034 
o|contracted procedure: k1053 
o|contracted procedure: k1049 
o|contracted procedure: k1045 
o|contracted procedure: k1059 
o|contracted procedure: k1062 
o|contracted procedure: k1079 
o|contracted procedure: k1089 
o|contracted procedure: k994 
o|contracted procedure: k1118 
o|contracted procedure: k1125 
o|contracted procedure: k1131 
o|contracted procedure: k1160 
o|contracted procedure: k1137 
o|contracted procedure: k1156 
o|contracted procedure: k1140 
o|contracted procedure: k1149 
o|contracted procedure: k1163 
o|contracted procedure: k1175 
o|contracted procedure: k1178 
o|contracted procedure: k1184 
o|contracted procedure: k1193 
o|contracted procedure: k1208 
o|contracted procedure: k1224 
o|contracted procedure: k1214 
o|contracted procedure: k1217 
o|contracted procedure: k1239 
o|propagated global variable: ct210 ##sys#current-thread 
o|contracted procedure: k1282 
o|inlining procedure: k1276 
o|contracted procedure: k1294 
o|contracted procedure: k1303 
o|contracted procedure: k1312 
o|contracted procedure: k1321 
o|contracted procedure: k1327 
o|contracted procedure: k1330 
o|contracted procedure: k1339 
o|contracted procedure: k1345 
o|contracted procedure: k1348 
o|contracted procedure: k1354 
o|contracted procedure: k1357 
o|contracted procedure: k1360 
o|contracted procedure: k1372 
o|contracted procedure: k1383 
o|contracted procedure: k1387 
o|contracted procedure: k1396 
o|contracted procedure: k1407 
o|contracted procedure: k1561 
o|contracted procedure: k1496 
o|contracted procedure: k1522 
o|contracted procedure: k1518 
o|contracted procedure: k1505 
o|contracted procedure: k1508 
o|contracted procedure: k1511 
o|contracted procedure: k1525 
o|contracted procedure: k1536 
o|contracted procedure: k1484 
o|contracted procedure: k1539 
o|contracted procedure: k1542 
o|contracted procedure: k1545 
o|contracted procedure: k1425 
o|contracted procedure: k1428 
o|inlining procedure: k1416 
o|contracted procedure: k1434 
o|contracted procedure: k1437 
o|contracted procedure: k1443 
o|contracted procedure: k1446 
o|inlining procedure: k1416 
o|contracted procedure: k1452 
o|contracted procedure: k1469 
o|contracted procedure: k1465 
o|contracted procedure: k1455 
o|contracted procedure: k1458 
o|inlining procedure: k1416 
o|contracted procedure: k1576 
o|contracted procedure: k1582 
o|contracted procedure: k1785 
o|contracted procedure: k1588 
o|contracted procedure: k1591 
o|contracted procedure: k1600 
o|contracted procedure: k1606 
o|contracted procedure: k1609 
o|contracted procedure: k1612 
o|contracted procedure: k1637 
o|contracted procedure: k1627 
o|contracted procedure: k1640 
o|contracted procedure: k1643 
o|contracted procedure: k1646 
o|contracted procedure: k1694 
o|contracted procedure: k1649 
o|contracted procedure: k1652 
o|contracted procedure: k1658 
o|contracted procedure: k1661 
o|contracted procedure: k1664 
o|contracted procedure: k1687 
o|contracted procedure: k1683 
o|contracted procedure: k1667 
o|contracted procedure: k1670 
o|contracted procedure: k1676 
o|contracted procedure: k1697 
o|contracted procedure: k1700 
o|contracted procedure: k1715 
o|contracted procedure: k1718 
o|contracted procedure: k1724 
o|contracted procedure: k1741 
o|contracted procedure: k1706 
o|contracted procedure: k1744 
o|contracted procedure: k1761 
o|contracted procedure: k1765 
o|contracted procedure: k1776 
o|contracted procedure: k1793 
o|contracted procedure: k1807 
o|contracted procedure: k1823 
o|contracted procedure: k1832 
o|contracted procedure: k1841 
o|contracted procedure: k1850 
o|contracted procedure: k1853 
o|contracted procedure: k1859 
o|contracted procedure: k1862 
o|contracted procedure: k1865 
o|contracted procedure: k1887 
o|contracted procedure: k1868 
o|contracted procedure: k1874 
o|contracted procedure: k1877 
o|contracted procedure: k1893 
o|contracted procedure: k1916 
o|contracted procedure: k1919 
o|contracted procedure: k1934 
o|contracted procedure: k1944 
o|contracted procedure: k1948 
o|contracted procedure: k1898 
o|contracted procedure: k1904 
o|contracted procedure: k1907 
o|contracted procedure: k1954 
o|contracted procedure: k1960 
o|contracted procedure: k1966 
o|contracted procedure: k1969 
o|contracted procedure: k1975 
o|contracted procedure: k1978 
o|contracted procedure: k1993 
o|contracted procedure: k2004 
o|contracted procedure: k2010 
o|contracted procedure: k2021 
o|contracted procedure: k2027 
o|contracted procedure: k2038 
o|contracted procedure: k2047 
o|contracted procedure: k2080 
o|contracted procedure: k2068 
o|contracted procedure: k2071 
o|contracted procedure: k2089 
o|simplifications: ((let . 24)) 
o|removed binding forms: 183 
o|inlining procedure: k850 
o|inlining procedure: k1015 
o|replaced variables: 53 
o|removed binding forms: 1 
o|inlining procedure: k1937 
o|inlining procedure: k1937 
o|replaced variables: 1 
o|removed binding forms: 23 
o|removed binding forms: 3 
o|removed binding forms: 2 
o|customizable procedures: (k1972 for-each-loop367382 k1585 k1615 switch260 check261 compute-time-limit k934) 
o|calls to known targets: 40 
o|identified direct recursive calls: f_1929 2 
o|fast box initializations: 3 
o|fast global references: 4 
o|fast global assignments: 1 
o|dropping unused closure argument: f_670 
*/
/* end of file */
