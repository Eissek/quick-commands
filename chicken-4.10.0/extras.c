/* Generated from extras.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:03
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: extras.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file extras.c
   unit: extras
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[136];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,23),40,100,111,108,111,111,112,56,54,32,120,56,56,32,105,56,57,32,120,115,57,48,41,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,14),40,115,108,117,114,112,32,112,111,114,116,56,53,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,21),40,114,101,97,100,45,102,105,108,101,32,46,32,116,109,112,55,48,55,49,41,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,17),40,114,97,110,100,111,109,105,122,101,32,46,32,110,57,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,13),40,114,97,110,100,111,109,32,110,49,48,50,41,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,12),40,103,49,49,55,32,114,108,49,49,57,41,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,49,50,51,41,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,21),40,114,101,97,100,45,108,105,110,101,32,46,32,97,114,103,115,49,48,53,41,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,108,110,115,49,52,56,32,110,49,52,57,41,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,16),40,100,111,114,101,97,100,32,112,111,114,116,49,52,54,41};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,30),40,114,101,97,100,45,108,105,110,101,115,32,46,32,112,111,114,116,45,97,110,100,45,109,97,120,49,52,48,41,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,29),40,119,114,105,116,101,45,108,105,110,101,32,115,116,114,49,53,56,32,46,32,112,111,114,116,49,53,57,41,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,115,116,97,114,116,49,55,55,32,110,49,55,56,32,109,49,55,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,115,116,97,114,116,49,57,50,32,110,49,57,51,32,109,49,57,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,50),40,35,35,115,121,115,35,114,101,97,100,45,115,116,114,105,110,103,33,32,110,49,54,55,32,100,101,115,116,49,54,56,32,112,111,114,116,49,54,57,32,115,116,97,114,116,49,55,48,41,0,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,39),40,114,101,97,100,45,115,116,114,105,110,103,33,32,110,50,49,51,32,100,101,115,116,50,49,52,32,46,32,116,109,112,50,49,50,50,49,53,41,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,34),40,35,35,115,121,115,35,114,101,97,100,45,115,116,114,105,110,103,47,112,111,114,116,32,110,50,51,52,32,112,50,51,53,41,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,25),40,114,101,97,100,45,115,116,114,105,110,103,32,46,32,116,109,112,50,53,56,50,53,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,27),40,114,101,97,100,45,98,117,102,102,101,114,101,100,32,46,32,116,109,112,50,55,53,50,55,54,41,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,30),40,114,101,97,100,45,116,111,107,101,110,32,112,114,101,100,50,56,53,32,46,32,112,111,114,116,50,56,54,41,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,22),40,98,111,100,121,51,48,52,32,110,51,49,51,32,112,111,114,116,51,49,52,41,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,22),40,100,101,102,45,112,111,114,116,51,48,55,32,37,110,51,48,50,51,50,49,41,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,10),40,100,101,102,45,110,51,48,54,41,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,29),40,119,114,105,116,101,45,115,116,114,105,110,103,32,115,51,48,48,32,46,32,109,111,114,101,51,48,49,41,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,23),40,114,101,97,100,45,98,121,116,101,32,46,32,116,109,112,51,51,51,51,51,52,41,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,32),40,119,114,105,116,101,45,98,121,116,101,32,98,121,116,101,51,52,56,32,46,32,116,109,112,51,52,55,51,52,57,41};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,18),40,114,101,97,100,45,109,97,99,114,111,63,32,108,51,54,56,41,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,19),40,114,101,97,100,45,109,97,99,114,111,45,112,114,101,102,105,120,41,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,19),40,111,117,116,32,115,116,114,52,48,48,32,99,111,108,52,48,49,41,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,24),40,119,114,45,101,120,112,114,32,101,120,112,114,52,49,50,32,99,111,108,52,49,51,41};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,108,52,49,55,32,99,111,108,52,49,56,41,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,20),40,119,114,45,108,115,116,32,108,52,49,52,32,99,111,108,52,49,53,41,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,11),40,103,52,53,48,32,97,52,53,50,41,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,23),40,108,111,111,112,32,105,52,50,56,32,106,52,50,57,32,99,111,108,52,51,48,41,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,12),40,103,52,54,49,32,99,110,52,54,51,41,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,52,55,48,32,105,52,55,50,41};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,18),40,119,114,32,111,98,106,52,48,52,32,99,111,108,52,48,53,41,0,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,20),40,115,112,97,99,101,115,32,110,53,48,54,32,99,111,108,53,48,55,41,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,21),40,105,110,100,101,110,116,32,116,111,53,48,56,32,99,111,108,53,48,57,41,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,14),40,97,50,56,48,48,32,115,116,114,53,50,49,41,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,38),40,112,114,32,111,98,106,53,49,50,32,99,111,108,53,49,51,32,101,120,116,114,97,53,49,52,32,112,112,45,112,97,105,114,53,49,53,41,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,33),40,112,112,45,101,120,112,114,32,101,120,112,114,53,50,53,32,99,111,108,53,50,54,32,101,120,116,114,97,53,50,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,44),40,112,112,45,99,97,108,108,32,101,120,112,114,53,51,48,32,99,111,108,53,51,49,32,101,120,116,114,97,53,51,50,32,112,112,45,105,116,101,109,53,51,51,41,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,41),40,112,112,45,108,105,115,116,32,108,53,51,54,32,99,111,108,53,51,55,32,101,120,116,114,97,53,51,56,32,112,112,45,105,116,101,109,53,51,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,108,53,52,55,32,99,111,108,53,52,56,41,0,0,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,50),40,112,112,45,100,111,119,110,32,108,53,52,49,32,99,111,108,49,53,52,50,32,99,111,108,50,53,52,51,32,101,120,116,114,97,53,52,52,32,112,112,45,105,116,101,109,53,52,53,41,0,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,39),40,116,97,105,108,49,32,114,101,115,116,53,54,55,32,99,111,108,49,53,54,56,32,99,111,108,50,53,54,57,32,99,111,108,51,53,55,48,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,39),40,116,97,105,108,50,32,114,101,115,116,53,55,53,32,99,111,108,49,53,55,54,32,99,111,108,50,53,55,55,32,99,111,108,51,53,55,56,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,31),40,116,97,105,108,51,32,114,101,115,116,53,56,51,32,99,111,108,49,53,56,52,32,99,111,108,50,53,56,53,41,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,70),40,112,112,45,103,101,110,101,114,97,108,32,101,120,112,114,53,53,55,32,99,111,108,53,53,56,32,101,120,116,114,97,53,53,57,32,110,97,109,101,100,63,53,54,48,32,112,112,45,49,53,54,49,32,112,112,45,50,53,54,50,32,112,112,45,51,53,54,51,41,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,35),40,112,112,45,101,120,112,114,45,108,105,115,116,32,108,53,57,54,32,99,111,108,53,57,55,32,101,120,116,114,97,53,57,56,41,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,35),40,112,112,45,108,97,109,98,100,97,32,101,120,112,114,53,57,57,32,99,111,108,54,48,48,32,101,120,116,114,97,54,48,49,41,0,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,31),40,112,112,45,105,102,32,101,120,112,114,54,48,50,32,99,111,108,54,48,51,32,101,120,116,114,97,54,48,52,41,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,33),40,112,112,45,99,111,110,100,32,101,120,112,114,54,48,53,32,99,111,108,54,48,54,32,101,120,116,114,97,54,48,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,33),40,112,112,45,99,97,115,101,32,101,120,112,114,54,48,56,32,99,111,108,54,48,57,32,101,120,116,114,97,54,49,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,32),40,112,112,45,97,110,100,32,101,120,112,114,54,49,49,32,99,111,108,54,49,50,32,101,120,116,114,97,54,49,51,41};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,32),40,112,112,45,108,101,116,32,101,120,112,114,54,49,52,32,99,111,108,54,49,53,32,101,120,116,114,97,54,49,54,41};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,34),40,112,112,45,98,101,103,105,110,32,101,120,112,114,54,50,48,32,99,111,108,54,50,49,32,101,120,116,114,97,54,50,50,41,0,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,31),40,112,112,45,100,111,32,101,120,112,114,54,50,51,32,99,111,108,54,50,52,32,101,120,116,114,97,54,50,53,41,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,15),40,115,116,121,108,101,32,104,101,97,100,54,50,54,41,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,18),40,112,112,32,111,98,106,52,56,51,32,99,111,108,52,56,52,41,0,0,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,53),40,103,101,110,101,114,105,99,45,119,114,105,116,101,32,111,98,106,51,53,56,32,100,105,115,112,108,97,121,63,51,53,57,32,119,105,100,116,104,51,54,48,32,111,117,116,112,117,116,51,54,49,41,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,12),40,97,51,51,55,52,32,115,54,56,51,41,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,30),40,112,114,101,116,116,121,45,112,114,105,110,116,32,111,98,106,54,56,48,32,46,32,111,112,116,54,56,49,41,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,6),40,110,101,120,116,41,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,6),40,115,107,105,112,41,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,20),40,114,101,99,32,109,115,103,54,57,53,32,97,114,103,115,54,57,54,41,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,40),40,102,112,114,105,110,116,102,48,32,108,111,99,54,56,56,32,112,111,114,116,54,56,57,32,109,115,103,54,57,48,32,97,114,103,115,54,57,49,41};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,35),40,102,112,114,105,110,116,102,32,112,111,114,116,55,51,56,32,102,115,116,114,55,51,57,32,46,32,97,114,103,115,55,52,48,41,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,26),40,112,114,105,110,116,102,32,102,115,116,114,55,52,50,32,46,32,97,114,103,115,55,52,51,41,0,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,27),40,115,112,114,105,110,116,102,32,102,115,116,114,55,52,53,32,46,32,97,114,103,115,55,52,54,41,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,32),40,102,111,114,109,97,116,32,102,109,116,45,111,114,45,100,115,116,55,52,56,32,46,32,97,114,103,115,55,52,57,41};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_2481)
static void C_ccall f_2481(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1918)
static void C_ccall f_1918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2485)
static void C_fcall f_2485(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2293)
static void C_ccall f_2293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2470)
static void C_ccall f_2470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2478)
static void C_ccall f_2478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2280)
static void C_ccall f_2280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1908)
static void C_ccall f_1908(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1908)
static void C_ccall f_1908r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1963)
static void C_fcall f_1963(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1960)
static void C_fcall f_1960(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1336)
static void C_fcall f_1336(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1991)
static void C_fcall f_1991(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3601)
static void C_ccall f_3601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1314)
static void C_ccall f_1314(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1314)
static void C_ccall f_1314r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1349)
static void C_ccall f_1349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1326)
static void C_ccall f_1326(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3523)
static void C_ccall f_3523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2542)
static void C_ccall f_2542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3510)
static void C_ccall f_3510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2129)
static void C_ccall f_2129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2521)
static void C_ccall f_2521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2528)
static void C_ccall f_2528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1081)
static void C_ccall f_1081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1641)
static void C_ccall f_1641(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3637)
static C_word C_fcall f_3637(C_word t0,C_word t1);
C_noret_decl(f_2131)
static void C_fcall f_2131(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2505)
static void C_ccall f_2505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2635)
static void C_ccall f_2635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2638)
static void C_ccall f_2638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2512)
static void C_ccall f_2512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2649)
static void C_ccall f_2649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3540)
static void C_ccall f_3540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3440)
static void C_fcall f_3440(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2235)
static void C_ccall f_2235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2611)
static void C_ccall f_2611(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2617)
static void C_ccall f_2617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1601)
static void C_fcall f_1601(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2231)
static void C_ccall f_2231(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3536)
static void C_ccall f_3536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3433)
static C_word C_fcall f_3433(C_word t0);
C_noret_decl(f_1564)
static void C_ccall f_1564(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1564)
static void C_ccall f_1564r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2622)
static void C_fcall f_2622(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1420)
static void C_ccall f_1420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3424)
static void C_fcall f_3424(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1432)
static void C_ccall f_1432(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2159)
static void C_ccall f_2159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2153)
static void C_ccall f_2153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3418)
static void C_ccall f_3418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2601)
static void C_ccall f_2601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3347)
static void C_ccall f_3347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2104)
static void C_ccall f_2104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2254)
static void C_ccall f_2254(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3231)
static void C_fcall f_3231(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2400)
static void C_ccall f_2400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1031)
static void C_ccall f_1031(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2404)
static void C_ccall f_2404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2113)
static void C_fcall f_2113(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1039)
static void C_ccall f_1039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3221)
static void C_fcall f_3221(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2344)
static void C_ccall f_2344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2348)
static void C_ccall f_2348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1404)
static void C_ccall f_1404(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1404)
static void C_ccall f_1404r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2312)
static void C_ccall f_2312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2314)
static void C_fcall f_2314(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3212)
static void C_ccall f_3212(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2179)
static void C_ccall f_2179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2175)
static void C_ccall f_2175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3206)
static void C_ccall f_3206(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2321)
static void C_fcall f_2321(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2943)
static void C_fcall f_2943(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2025)
static C_word C_fcall f_2025(C_word t0);
C_noret_decl(f_2443)
static void C_ccall f_2443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2447)
static void C_ccall f_2447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2261)
static void C_ccall f_2261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2412)
static void C_ccall f_2412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3102)
static void C_ccall f_3102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2928)
static void C_fcall f_2928(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2926)
static void C_ccall f_2926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2273)
static void C_ccall f_2273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2270)
static void C_ccall f_2270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2423)
static void C_ccall f_2423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3130)
static void C_ccall f_3130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2932)
static void C_ccall f_2932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2937)
static void C_fcall f_2937(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(C_extras_toplevel)
C_externexport void C_ccall C_extras_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3168)
static void C_ccall f_3168(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3162)
static void C_ccall f_3162(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2578)
static void C_ccall f_2578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3008)
static void C_ccall f_3008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2902)
static void C_fcall f_2902(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2906)
static void C_ccall f_2906(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3004)
static void C_ccall f_3004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3695)
static void C_ccall f_3695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2064)
static void C_fcall f_2064(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2093)
static void C_ccall f_2093(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3115)
static void C_ccall f_3115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3038)
static void C_ccall f_3038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3034)
static void C_ccall f_3034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2560)
static void C_ccall f_2560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1041)
static void C_fcall f_1041(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3148)
static void C_ccall f_3148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2083)
static void C_fcall f_2083(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2086)
static void C_fcall f_2086(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2750)
static void C_fcall f_2750(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2594)
static void C_ccall f_2594(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3174)
static void C_ccall f_3174(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2588)
static void C_ccall f_2588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3010)
static void C_fcall f_3010(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_3013)
static void C_fcall f_3013(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1212)
static void C_ccall f_1212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2581)
static void C_ccall f_2581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1061)
static void C_ccall f_1061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2855)
static void C_ccall f_2855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2970)
static void C_ccall f_2970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1509)
static void C_fcall f_1509(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3156)
static void C_ccall f_3156(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3150)
static void C_ccall f_3150(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3595)
static void C_ccall f_3595(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3592)
static void C_ccall f_3592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3077)
static void C_ccall f_3077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3073)
static void C_ccall f_3073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3757)
static void C_ccall f_3757(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2964)
static void C_ccall f_2964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1005)
static void C_ccall f_1005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2074)
static void C_ccall f_2074(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2996)
static void C_ccall f_2996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2837)
static void C_ccall f_2837(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3180)
static void C_ccall f_3180(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3186)
static void C_ccall f_3186(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1008)
static void C_ccall f_1008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2992)
static void C_ccall f_2992(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1010)
static void C_ccall f_1010(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1010)
static void C_ccall f_1010r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2844)
static void C_ccall f_2844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3574)
static void C_ccall f_3574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3052)
static void C_fcall f_3052(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3570)
static void C_ccall f_3570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3732)
static void C_ccall f_3732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1693)
static void C_ccall f_1693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1699)
static void C_ccall f_1699(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1699)
static void C_ccall f_1699r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1825)
static void C_ccall f_1825(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1825)
static void C_ccall f_1825r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2671)
static void C_ccall f_2671(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1263)
static void C_fcall f_1263(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1669)
static void C_ccall f_1669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1129)
static void C_ccall f_1129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1830)
static void C_fcall f_1830(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1125)
static void C_ccall f_1125(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1125)
static void C_ccall f_1125r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1277)
static void C_ccall f_1277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3459)
static void C_fcall f_3459(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1847)
static void C_ccall f_1847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1285)
static void C_ccall f_1285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1681)
static void C_ccall f_1681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1513)
static void C_ccall f_1513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1516)
static void C_fcall f_1516(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3091)
static void C_fcall f_3091(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1850)
static void C_fcall f_1850(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2683)
static void C_fcall f_2683(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2680)
static void C_fcall f_2680(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1657)
static void C_ccall f_1657(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1654)
static void C_ccall f_1654(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2763)
static void C_ccall f_2763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2779)
static void C_ccall f_2779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3369)
static void C_ccall f_3369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3366)
static void C_fcall f_3366(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2732)
static void C_ccall f_2732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3362)
static void C_ccall f_3362(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3362)
static void C_ccall f_3362r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3360)
static void C_ccall f_3360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2739)
static void C_ccall f_2739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3497)
static void C_ccall f_3497(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2352)
static void C_ccall f_2352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2795)
static void C_ccall f_2795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2664)
static void C_ccall f_2664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2661)
static void C_ccall f_2661(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2766)
static void C_ccall f_2766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1677)
static void C_fcall f_1677(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1672)
static void C_ccall f_1672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1161)
static void C_ccall f_1161(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1161)
static void C_ccall f_1161r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3351)
static void C_ccall f_3351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2707)
static void C_ccall f_2707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1804)
static void C_ccall f_1804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2381)
static void C_ccall f_2381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2382)
static void C_fcall f_2382(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2799)
static void C_ccall f_2799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2716)
static void C_fcall f_2716(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2714)
static void C_ccall f_2714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1245)
static void C_ccall f_1245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1149)
static void C_ccall f_1149(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1254)
static void C_ccall f_1254(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1143)
static void C_ccall f_1143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1194)
static void C_ccall f_1194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1199)
static void C_fcall f_1199(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3724)
static void C_ccall f_3724(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3724)
static void C_ccall f_3724r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2376)
static void C_ccall f_2376(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3557)
static void C_ccall f_3557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3553)
static void C_ccall f_3553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3712)
static void C_ccall f_3712(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3712)
static void C_ccall f_3712r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3718)
static void C_ccall f_3718(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3718)
static void C_ccall f_3718r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3393)
static void C_ccall f_3393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3396)
static void C_ccall f_3396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3390)
static void C_fcall f_3390(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3706)
static void C_ccall f_3706(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3706)
static void C_ccall f_3706r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1171)
static void C_fcall f_1171(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1935)
static void C_ccall f_1935(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1935)
static void C_ccall f_1935r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2801)
static void C_ccall f_2801(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1741)
static void C_ccall f_1741(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1741)
static void C_ccall f_1741r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1181)
static void C_fcall f_1181(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1868)
static void C_fcall f_1868(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3767)
static void C_ccall f_3767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1873)
static void C_fcall f_1873(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2897)
static void C_ccall f_2897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2871)
static void C_ccall f_2871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3472)
static void C_ccall f_3472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1454)
static void C_ccall f_1454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1450)
static void C_fcall f_1450(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1784)
static void C_fcall f_1784(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1788)
static void C_ccall f_1788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1794)
static void C_ccall f_1794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1797)
static void C_ccall f_1797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3386)
static void C_fcall f_3386(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1769)
static void C_ccall f_1769(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1769)
static void C_ccall f_1769r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2188)
static void C_ccall f_2188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3379)
static void C_ccall f_3379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3375)
static void C_ccall f_3375(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3373)
static void C_ccall f_3373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1779)
static void C_ccall f_1779(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_2485)
static void C_fcall trf_2485(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2485(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2485(t0,t1,t2);}

C_noret_decl(trf_1963)
static void C_fcall trf_1963(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1963(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1963(t0,t1);}

C_noret_decl(trf_1960)
static void C_fcall trf_1960(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1960(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1960(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1336)
static void C_fcall trf_1336(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1336(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1336(t0,t1,t2,t3);}

C_noret_decl(trf_1991)
static void C_fcall trf_1991(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1991(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1991(t0,t1);}

C_noret_decl(trf_2131)
static void C_fcall trf_2131(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2131(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2131(t0,t1,t2,t3);}

C_noret_decl(trf_3440)
static void C_fcall trf_3440(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3440(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3440(t0,t1);}

C_noret_decl(trf_1601)
static void C_fcall trf_1601(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1601(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1601(t0,t1);}

C_noret_decl(trf_2622)
static void C_fcall trf_2622(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2622(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2622(t0,t1,t2);}

C_noret_decl(trf_3424)
static void C_fcall trf_3424(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3424(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3424(t0,t1,t2,t3);}

C_noret_decl(trf_3231)
static void C_fcall trf_3231(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3231(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3231(t0,t1);}

C_noret_decl(trf_2113)
static void C_fcall trf_2113(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2113(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2113(t0,t1,t2,t3);}

C_noret_decl(trf_3221)
static void C_fcall trf_3221(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3221(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3221(t0,t1,t2);}

C_noret_decl(trf_2314)
static void C_fcall trf_2314(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2314(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2314(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2321)
static void C_fcall trf_2321(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2321(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2321(t0,t1);}

C_noret_decl(trf_2943)
static void C_fcall trf_2943(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2943(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2943(t0,t1,t2,t3);}

C_noret_decl(trf_2928)
static void C_fcall trf_2928(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2928(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2928(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2937)
static void C_fcall trf_2937(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2937(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_2937(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_2902)
static void C_fcall trf_2902(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2902(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2902(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2064)
static void C_fcall trf_2064(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2064(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2064(t0,t1,t2,t3);}

C_noret_decl(trf_1041)
static void C_fcall trf_1041(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1041(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1041(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2083)
static void C_fcall trf_2083(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2083(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2083(t0,t1,t2,t3);}

C_noret_decl(trf_2086)
static void C_fcall trf_2086(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2086(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2086(t0,t1,t2,t3);}

C_noret_decl(trf_2750)
static void C_fcall trf_2750(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2750(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2750(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3010)
static void C_fcall trf_3010(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3010(void *dummy){
C_word t8=C_pick(0);
C_word t7=C_pick(1);
C_word t6=C_pick(2);
C_word t5=C_pick(3);
C_word t4=C_pick(4);
C_word t3=C_pick(5);
C_word t2=C_pick(6);
C_word t1=C_pick(7);
C_word t0=C_pick(8);
C_adjust_stack(-9);
f_3010(t0,t1,t2,t3,t4,t5,t6,t7,t8);}

C_noret_decl(trf_3013)
static void C_fcall trf_3013(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3013(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_3013(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1509)
static void C_fcall trf_1509(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1509(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1509(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3052)
static void C_fcall trf_3052(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3052(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_3052(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1263)
static void C_fcall trf_1263(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1263(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1263(t0,t1);}

C_noret_decl(trf_1830)
static void C_fcall trf_1830(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1830(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1830(t0,t1,t2,t3);}

C_noret_decl(trf_3459)
static void C_fcall trf_3459(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3459(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3459(t0,t1);}

C_noret_decl(trf_1516)
static void C_fcall trf_1516(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1516(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1516(t0,t1);}

C_noret_decl(trf_3091)
static void C_fcall trf_3091(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3091(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3091(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1850)
static void C_fcall trf_1850(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1850(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1850(t0,t1);}

C_noret_decl(trf_2683)
static void C_fcall trf_2683(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2683(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2683(t0,t1,t2,t3);}

C_noret_decl(trf_2680)
static void C_fcall trf_2680(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2680(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2680(t0,t1,t2,t3);}

C_noret_decl(trf_3366)
static void C_fcall trf_3366(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3366(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3366(t0,t1);}

C_noret_decl(trf_1677)
static void C_fcall trf_1677(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1677(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1677(t0,t1);}

C_noret_decl(trf_2382)
static void C_fcall trf_2382(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2382(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2382(t0,t1,t2);}

C_noret_decl(trf_2716)
static void C_fcall trf_2716(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2716(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2716(t0,t1,t2,t3);}

C_noret_decl(trf_1199)
static void C_fcall trf_1199(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1199(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1199(t0,t1,t2);}

C_noret_decl(trf_3390)
static void C_fcall trf_3390(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3390(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3390(t0,t1);}

C_noret_decl(trf_1171)
static void C_fcall trf_1171(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1171(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1171(t0,t1);}

C_noret_decl(trf_1181)
static void C_fcall trf_1181(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1181(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1181(t0,t1,t2);}

C_noret_decl(trf_1868)
static void C_fcall trf_1868(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1868(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1868(t0,t1,t2);}

C_noret_decl(trf_1873)
static void C_fcall trf_1873(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1873(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1873(t0,t1);}

C_noret_decl(trf_1450)
static void C_fcall trf_1450(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1450(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1450(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1784)
static void C_fcall trf_1784(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1784(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1784(t0,t1);}

C_noret_decl(trf_3386)
static void C_fcall trf_3386(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3386(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3386(t0,t1,t2,t3,t4);}

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

C_noret_decl(tr6)
static void C_fcall tr6(C_proc6 k) C_regparm C_noret;
C_regparm static void C_fcall tr6(C_proc6 k){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
(k)(6,t0,t1,t2,t3,t4,t5);}

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

/* k2479 in k2476 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2481(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2481,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2485,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li36),tmp=(C_word)a,a+=5,tmp);
/* extras.scm:366: g461 */
t3=t2;
f_2485(t3,((C_word*)t0)[4],t1);}
else{
if(C_truep(C_fixnum_lessp(((C_word*)t0)[5],C_fix(32)))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2505,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:370: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2064(t3,t2,lf[66],((C_word*)t0)[3]);}
else{
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[5],C_fix(255)))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2521,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[5],C_fix(65535)))){
/* extras.scm:373: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2064(t3,t2,lf[67],((C_word*)t0)[3]);}
else{
/* extras.scm:373: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2064(t3,t2,lf[68],((C_word*)t0)[3]);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2542,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[6];
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t2,C_fix(1),t3);}}}}

/* k1916 in read-byte in k1006 in k1003 */
static void C_ccall f_1918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_eofp(t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?t1:C_fix(C_character_code(t1))));}

/* g461 in k2479 in k2476 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_fcall f_2485(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2485,NULL,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(1));
/* extras.scm:368: out */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2064(t4,t1,t3,((C_word*)t0)[3]);}

/* k2291 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:324: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2064(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2468 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:363: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2064(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2476 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2478,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2481,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:366: char-name */
t3=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* k2278 in k2271 in k2268 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2280(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:323: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2064(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* read-byte in k1006 in k1003 */
static void C_ccall f_1908(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_1908r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1908r(t0,t1,t2);}}

static void C_ccall f_1908r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(3);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?*((C_word*)lf[2]+1):C_i_car(t2));
t5=C_i_check_port_2(t4,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[33]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1918,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:250: ##sys#read-char-0 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t6,t4);}

/* read-macro? in generic-write in k1006 in k1003 */
static void C_fcall f_1963(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1963,NULL,2,t1,t2);}
t3=C_i_car(t2);
t4=t2;
t5=C_u_i_cdr(t4);
t6=C_eqp(t3,lf[36]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1991,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t6)){
t8=t7;
f_1991(t8,t6);}
else{
t8=C_eqp(t3,lf[37]);
if(C_truep(t8)){
t9=t7;
f_1991(t9,t8);}
else{
t9=C_eqp(t3,lf[38]);
t10=t7;
f_1991(t10,(C_truep(t9)?t9:C_eqp(t3,lf[39])));}}}

/* generic-write in k1006 in k1003 */
static void C_fcall f_1960(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
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
C_word ab[43],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1960,NULL,5,t1,t2,t3,t4,t5);}
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
t16=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1963,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t17=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2025,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t18=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2064,a[2]=t5,a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp));
t19=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2083,a[2]=t13,a[3]=t9,a[4]=t11,a[5]=t7,a[6]=t3,a[7]=((C_word)li38),tmp=(C_word)a,a+=8,tmp));
t20=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2680,a[2]=t11,a[3]=t3,a[4]=t4,a[5]=t13,a[6]=t9,a[7]=t7,a[8]=((C_word)li62),tmp=(C_word)a,a+=9,tmp));
if(C_truep(t4)){
t21=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3347,a[2]=t11,a[3]=t1,a[4]=t15,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t21,C_fix(1),C_make_character(10));}
else{
/* extras.scm:565: wr */
t21=((C_word*)t13)[1];
f_2083(t21,t1,t2,C_fix(0));}}

/* loop in doread in read-lines in k1006 in k1003 */
static void C_fcall f_1336(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1336,NULL,4,t0,t1,t2,t3);}
t4=C_eqp(t3,C_fix(0));
if(C_truep(t4)){
/* extras.scm:118: ##sys#fast-reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[3]+1)))(3,*((C_word*)lf[3]+1),t1,t2);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1349,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:119: read-line */
t6=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[3]);}}

/* k1989 in read-macro? in generic-write in k1006 in k1003 */
static void C_fcall f_1991(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t3=C_u_i_cdr(((C_word*)t0)[3]);
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_nullp(t3));}
else{
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k3599 in k3593 in k3590 in loop in rec in k3391 in k3388 in fprintf0 in k3358 in k1006 in k1003 */
static void C_ccall f_3601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:630: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3459(t2,((C_word*)t0)[3]);}

/* read-lines in k1006 in k1003 */
static void C_ccall f_1314(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1314r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1314r(t0,t1,t2);}}

static void C_ccall f_1314r(C_word t0,C_word t1,C_word t2){
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
C_word *a=C_alloc(4);
t3=C_i_pairp(t2);
t4=(C_truep(t3)?C_slot(t2,C_fix(0)):*((C_word*)lf[2]+1));
t5=C_i_pairp(t2);
t6=(C_truep(t5)?C_slot(t2,C_fix(1)):C_SCHEME_FALSE);
t7=C_i_pairp(t6);
t8=(C_truep(t7)?C_slot(t6,C_fix(0)):C_SCHEME_FALSE);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1326,a[2]=t9,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_stringp(t4))){
/* extras.scm:124: call-with-input-file */
t11=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,t4,t10);}
else{
t11=C_i_check_port_2(t4,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[18]);
/* extras.scm:127: doread */
t12=t10;
f_1326(3,t12,t1,t4);}}

/* k1347 in loop in doread in read-lines in k1006 in k1003 */
static void C_ccall f_1349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1349,2,t0,t1);}
if(C_truep(C_eofp(t1))){
/* extras.scm:121: ##sys#fast-reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[3]+1)))(3,*((C_word*)lf[3]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
t3=C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* extras.scm:122: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_1336(t4,((C_word*)t0)[2],t2,t3);}}

/* doread in read-lines in k1006 in k1003 */
static void C_ccall f_1326(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1326,3,t0,t1,t2);}
t3=(C_truep(((C_word*)t0)[2])?((C_word*)t0)[2]:C_fix(1000000000));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1336,a[2]=t5,a[3]=t2,a[4]=((C_word)li8),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1336(t7,t1,C_SCHEME_END_OF_LIST,t3);}

/* k3521 in loop in rec in k3391 in k3388 in fprintf0 in k3358 in k1006 in k1003 */
static void C_ccall f_3523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:610: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[21]+1)))(4,*((C_word*)lf[21]+1),((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k2540 in k2479 in k2476 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:375: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2064(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k3508 in loop in rec in k3391 in k3388 in fprintf0 in k3358 in k1006 in k1003 */
static void C_ccall f_3510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:609: display */
t2=*((C_word*)lf[116]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k2127 in wr-lst in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2129,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2131,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li32),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2131(t5,((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k2519 in k2479 in k2476 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2521,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2528,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:374: number->string */
t3=*((C_word*)lf[63]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],C_fix(16));}

/* k2526 in k2519 in k2479 in k2476 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2528(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:374: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2064(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1079 in read-file in k1006 in k1003 */
static void C_ccall f_1081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* extras.scm:52: slurp */
t2=((C_word*)t0)[2];
f_1031(3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
/* extras.scm:53: call-with-input-file */
t2=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* ##sys#read-string/port in k1006 in k1003 */
static void C_ccall f_1641(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1641,4,t0,t1,t2,t3);}
t4=t3;
t5=C_i_check_port_2(t4,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[25]);
if(C_truep(t2)){
t6=C_i_check_exact_2(t2,lf[25]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1654,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:183: ##sys#make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(3,*((C_word*)lf[17]+1),t7,t2);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1669,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* extras.scm:189: open-output-string */
t7=*((C_word*)lf[28]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* skip in loop in rec in k3391 in k3388 in fprintf0 in k3358 in k1006 in k1003 */
static C_word C_fcall f_3637(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:
if(C_truep(C_u_i_char_whitespacep(t1))){
t2=f_3433(((C_word*)((C_word*)t0)[2])[1]);
t6=t2;
t1=t6;
goto loop;}
else{
t2=C_fixnum_difference(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
return(t3);}}

/* loop in k2127 in wr-lst in wr in generic-write in k1006 in k1003 */
static void C_fcall f_2131(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2131,NULL,4,t0,t1,t2,t3);}
t4=t3;
if(C_truep(t4)){
if(C_truep(C_i_pairp(t2))){
t5=t2;
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2153,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=t2;
t9=C_u_i_car(t8);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2159,a[2]=((C_word*)t0)[3],a[3]=t7,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:309: out */
t11=((C_word*)((C_word*)t0)[4])[1];
f_2064(t11,t10,lf[44],t3);}
else{
if(C_truep(C_i_nullp(t2))){
/* extras.scm:310: out */
t5=((C_word*)((C_word*)t0)[4])[1];
f_2064(t5,t1,lf[45],t3);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2175,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2179,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:311: out */
t7=((C_word*)((C_word*)t0)[4])[1];
f_2064(t7,t6,lf[47],t3);}}}
else{
t5=t3;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k2503 in k2479 in k2476 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2505,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2512,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:371: number->string */
t3=*((C_word*)lf[63]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],C_fix(16));}

/* k2633 in doloop470 in k2609 in k2592 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2635,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2638,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2649,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:393: ##sys#number->string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[55]+1)))(4,*((C_word*)lf[55]+1),t3,((C_word*)t0)[7],C_fix(16));}

/* k2636 in k2633 in doloop470 in k2609 in k2592 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2622(t3,((C_word*)t0)[4],t2);}

/* k2510 in k2503 in k2479 in k2476 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:371: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2064(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2647 in k2633 in doloop470 in k2609 in k2592 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:393: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2064(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k3538 in loop in rec in k3391 in k3388 in fprintf0 in k3358 in k1006 in k1003 */
static void C_ccall f_3540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:611: ##sys#number->string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[55]+1)))(4,*((C_word*)lf[55]+1),((C_word*)t0)[2],t1,C_fix(2));}

/* next in rec in k3391 in k3388 in fprintf0 in k3358 in k1006 in k1003 */
static void C_fcall f_3440(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3440,NULL,2,t0,t1);}
if(C_truep(C_eqp(((C_word*)((C_word*)t0)[2])[1],C_SCHEME_END_OF_LIST))){
/* extras.scm:598: ##sys#error */
t2=*((C_word*)lf[119]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[3],lf[120]);}
else{
t2=C_slot(((C_word*)((C_word*)t0)[2])[1],C_fix(0));
t3=C_slot(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* k2233 in k2229 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:317: wr-lst */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2113(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2609 in k2592 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2611(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2611,2,t0,t1);}
t2=C_block_size(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2617,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2622,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[5],a[7]=((C_word)li37),tmp=(C_word)a,a+=8,tmp));
t8=((C_word*)t6)[1];
f_2622(t8,t4,C_fix(0));}

/* k2615 in k2609 in k2592 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2617(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:394: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2064(t2,((C_word*)t0)[3],lf[79],((C_word*)t0)[4]);}

/* k1599 in read-string! in k1006 in k1003 */
static void C_fcall f_1601(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=C_i_check_exact_2(((C_word*)t0)[2],lf[23]);
/* extras.scm:175: ##sys#read-string! */
t3=*((C_word*)lf[22]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[2]);}
else{
t2=C_fixnum_difference(((C_word*)t0)[7],((C_word*)t0)[2]);
t3=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t2);
t4=C_i_check_exact_2(((C_word*)t0)[2],lf[23]);
/* extras.scm:175: ##sys#read-string! */
t5=*((C_word*)lf[22]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[2]);}}

/* k2229 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2231(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2231,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2235,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:317: out */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2064(t4,t3,lf[51],((C_word*)t0)[5]);}

/* k3534 in loop in rec in k3391 in k3388 in fprintf0 in k3358 in k1006 in k1003 */
static void C_ccall f_3536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:611: display */
t2=*((C_word*)lf[116]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* fetch in rec in k3391 in k3388 in fprintf0 in k3358 in k1006 in k1003 */
static C_word C_fcall f_3433(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
t1=C_subchar(((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
return(t1);}

/* read-string! in k1006 in k1003 */
static void C_ccall f_1564(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_1564r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1564r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1564r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(10);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t6=C_i_nullp(t4);
t7=(C_truep(t6)?*((C_word*)lf[2]+1):C_i_car(t4));
t8=t7;
t9=C_i_nullp(t4);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t11=C_i_nullp(t10);
t12=(C_truep(t11)?C_fix(0):C_i_car(t10));
t13=t12;
t14=C_i_nullp(t10);
t15=(C_truep(t14)?C_SCHEME_END_OF_LIST:C_i_cdr(t10));
t16=C_i_check_port_2(t8,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[23]);
t17=C_i_check_string_2(t3,lf[23]);
t18=(C_truep(((C_word*)t5)[1])?C_i_check_exact_2(((C_word*)t5)[1],lf[23]):C_SCHEME_UNDEFINED);
t19=C_block_size(t3);
t20=t19;
t21=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1601,a[2]=t13,a[3]=t1,a[4]=t5,a[5]=t3,a[6]=t8,a[7]=t20,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t5)[1])){
t22=C_fixnum_plus(t13,((C_word*)t5)[1]);
t23=t21;
f_1601(t23,C_fixnum_less_or_equal_p(t22,t20));}
else{
t22=t21;
f_1601(t22,C_SCHEME_FALSE);}}

/* doloop470 in k2609 in k2592 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_fcall f_2622(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2622,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_subbyte(((C_word*)t0)[3],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2635,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_fixnum_lessp(t4,C_fix(16)))){
/* extras.scm:392: out */
t6=((C_word*)((C_word*)t0)[5])[1];
f_2064(t6,t5,lf[80],((C_word*)t0)[6]);}
else{
t6=t5;
f_2635(2,t6,C_SCHEME_UNDEFINED);}}}

/* k1418 in write-line in k1006 in k1003 */
static void C_ccall f_1420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:137: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[21]+1)))(4,*((C_word*)lf[21]+1),((C_word*)t0)[2],C_make_character(10),((C_word*)t0)[3]);}

/* rec in k3391 in k3388 in fprintf0 in k3358 in k1006 in k1003 */
static void C_fcall f_3424(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[30],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3424,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_i_check_string_2(t2,((C_word*)t0)[2]);
t6=C_fix(0);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_block_size(t2);
t9=t8;
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3433,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t15=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3440,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word)li66),tmp=(C_word)a,a+=5,tmp));
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3459,a[2]=t7,a[3]=t9,a[4]=t11,a[5]=t17,a[6]=((C_word*)t0)[3],a[7]=t13,a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[4],a[10]=((C_word)li68),tmp=(C_word)a,a+=11,tmp));
t19=((C_word*)t17)[1];
f_3459(t19,t1);}

/* ##sys#read-string! in k1006 in k1003 */
static void C_ccall f_1432(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
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
C_word ab[9],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_1432,6,t0,t1,t2,t3,t4,t5);}
t6=C_eqp(t2,C_fix(0));
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_fix(0));}
else{
t7=C_slot(t4,C_fix(2));
t8=C_slot(t7,C_fix(7));
t9=t8;
if(C_truep(t9)){
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1450,a[2]=t4,a[3]=t11,a[4]=t9,a[5]=t3,a[6]=((C_word)li12),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_1450(t13,t1,t5,t2,C_fix(0));}
else{
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1509,a[2]=t11,a[3]=t3,a[4]=t4,a[5]=((C_word)li13),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_1509(t13,t1,t5,t2,C_fix(0));}}}

/* k2157 in loop in k2127 in wr-lst in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:309: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2083(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2151 in loop in k2127 in wr-lst in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:309: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2131(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3416 in k3394 in k3391 in k3388 in fprintf0 in k3358 in k1006 in k1003 */
static void C_ccall f_3418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:633: ##sys#print */
t2=*((C_word*)lf[56]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k2599 in k2592 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:384: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2064(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k3345 in generic-write in k1006 in k1003 */
static void C_ccall f_3347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3347,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3351,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:564: pp */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2680(t4,t3,((C_word*)t0)[5],C_fix(0));}

/* k2102 in k2091 in wr-expr in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:300: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2083(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2254(C_word c,C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2254,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2261,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:319: ##sys#number->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[55]+1)))(3,*((C_word*)lf[55]+1),t2,((C_word*)t0)[5]);}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2270,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:321: open-output-string */
t3=*((C_word*)lf[28]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(C_i_closurep(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2293,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:324: ##sys#procedure->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(3,*((C_word*)lf[57]+1),t2,((C_word*)t0)[5]);}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[5]))){
if(C_truep(((C_word*)t0)[6])){
/* extras.scm:327: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2064(t2,((C_word*)t0)[3],((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2312,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:328: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2064(t3,t2,lf[65],((C_word*)t0)[4]);}}
else{
if(C_truep(C_charp(((C_word*)t0)[5]))){
if(C_truep(((C_word*)t0)[6])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2470,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[5];
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t2,C_fix(1),t3);}
else{
t2=C_fix(C_character_code(((C_word*)t0)[5]));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2478,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:365: out */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2064(t5,t4,lf[70],((C_word*)t0)[4]);}}
else{
if(C_truep(C_undefinedp(((C_word*)t0)[5]))){
/* extras.scm:376: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2064(t2,((C_word*)t0)[3],lf[71],((C_word*)t0)[4]);}
else{
if(C_truep(C_anypointerp(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2560,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:377: ##sys#pointer->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[72]+1)))(3,*((C_word*)lf[72]+1),t2,((C_word*)t0)[5]);}
else{
t2=C_slot(lf[73],C_fix(0));
t3=C_eqp(((C_word*)t0)[5],t2);
if(C_truep(t3)){
/* extras.scm:379: out */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2064(t4,((C_word*)t0)[3],lf[74],((C_word*)t0)[4]);}
else{
if(C_truep(C_structurep(((C_word*)t0)[5]))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2578,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:381: open-output-string */
t5=*((C_word*)lf[28]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2594,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:384: port? */
t5=*((C_word*)lf[5]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[5]);}}}}}}}}}}

/* k3229 in style in pp in generic-write in k1006 in k1003 */
static void C_fcall f_3231(C_word t0,C_word t1){
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
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[3])[1]);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[101]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[4],lf[102]));
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)((C_word*)t0)[5])[1]);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[103]);
if(C_truep(t4)){
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,((C_word*)((C_word*)t0)[6])[1]);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[104]);
if(C_truep(t5)){
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,((C_word*)((C_word*)t0)[7])[1]);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[105]);
t7=(C_truep(t6)?t6:C_eqp(((C_word*)t0)[4],lf[106]));
if(C_truep(t7)){
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,((C_word*)((C_word*)t0)[8])[1]);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[107]);
if(C_truep(t8)){
t9=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,((C_word*)((C_word*)t0)[9])[1]);}
else{
t9=C_eqp(((C_word*)t0)[4],lf[108]);
if(C_truep(t9)){
t10=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,((C_word*)((C_word*)t0)[10])[1]);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[109]);
t11=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_truep(t10)?((C_word*)((C_word*)t0)[11])[1]:C_SCHEME_FALSE));}}}}}}}}

/* k2398 in k2374 in k2319 in loop in k2310 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2400(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2400,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2404,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_i_char_lessp(((C_word*)t0)[4],C_make_character(16));
t5=(C_truep(t4)?lf[60]:lf[61]);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2412,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:358: out */
t8=((C_word*)((C_word*)t0)[2])[1];
f_2064(t8,t7,lf[62],((C_word*)t0)[5]);}

/* slurp in read-file in k1006 in k1003 */
static void C_ccall f_1031(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1031,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1039,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:47: reader */
t4=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,t2);}

/* k2402 in k2398 in k2374 in k2319 in loop in k2310 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:356: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2064(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* wr-lst in wr in generic-write in k1006 in k1003 */
static void C_fcall f_2113(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2113,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2129,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t7=t2;
t8=C_u_i_car(t7);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2188,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:306: out */
t10=((C_word*)((C_word*)t0)[3])[1];
f_2064(t10,t9,lf[48],t3);}
else{
t7=t6;
f_2129(2,t7,C_SCHEME_FALSE);}}
else{
/* extras.scm:312: out */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2064(t4,t1,lf[49],t3);}}

/* k1037 in slurp in read-file in k1006 in k1003 */
static void C_ccall f_1039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1039,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1041,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li0),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_1041(t5,((C_word*)t0)[5],t1,C_fix(0),C_SCHEME_END_OF_LIST);}

/* style in pp in generic-write in k1006 in k1003 */
static void C_fcall f_3221(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3221,NULL,3,t0,t1,t2);}
t3=t2;
t4=C_eqp(t3,lf[100]);
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3231,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t4)){
t6=t5;
f_3231(t6,t4);}
else{
t6=C_eqp(t3,lf[110]);
if(C_truep(t6)){
t7=t5;
f_3231(t7,t6);}
else{
t7=C_eqp(t3,lf[111]);
if(C_truep(t7)){
t8=t5;
f_3231(t8,t7);}
else{
t8=C_eqp(t3,lf[112]);
t9=t5;
f_3231(t9,(C_truep(t8)?t8:C_eqp(t3,lf[113])));}}}}

/* k2342 in k2319 in loop in k2310 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:334: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2314(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k2346 in k2319 in loop in k2310 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:336: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2064(t2,((C_word*)t0)[3],lf[58],t1);}

/* write-line in k1006 in k1003 */
static void C_ccall f_1404(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_1404r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1404r(t0,t1,t2,t3);}}

static void C_ccall f_1404r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(4);
t4=(C_truep(C_eqp(t3,C_SCHEME_END_OF_LIST))?*((C_word*)lf[20]+1):C_slot(t3,C_fix(0)));
t5=t4;
t6=C_i_check_port_2(t5,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[19]);
t7=C_i_check_string_2(t2,lf[19]);
t8=C_slot(t5,C_fix(2));
t9=C_slot(t8,C_fix(3));
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1420,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* extras.scm:130: g161 */
t11=t9;
((C_proc4)C_fast_retrieve_proc(t11))(4,t11,t10,t5,t2);}

/* k2310 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2312,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2314,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word)li35),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2314(t5,((C_word*)t0)[4],C_fix(0),C_fix(0),t1);}

/* loop in k2310 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_fcall f_2314(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2314,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2321,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=t4,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t4)){
t6=C_i_string_length(((C_word*)t0)[2]);
t7=t5;
f_2321(t7,C_fixnum_lessp(t3,t6));}
else{
t6=t5;
f_2321(t6,C_SCHEME_FALSE);}}

/* pp-do in pp in generic-write in k1006 in k1003 */
static void C_ccall f_3212(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3212,5,t0,t1,t2,t3,t4);}
/* extras.scm:539: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3010(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]);}

/* k2177 in loop in k2127 in wr-lst in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:311: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2083(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2173 in loop in k2127 in wr-lst in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:311: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2064(t2,((C_word*)t0)[3],lf[46],t1);}

/* pp-begin in pp in generic-write in k1006 in k1003 */
static void C_ccall f_3206(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3206,5,t0,t1,t2,t3,t4);}
/* extras.scm:536: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3010(t5,t1,t2,t3,t4,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1]);}

/* k2319 in loop in k2310 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_fcall f_2321(C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2321,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_string_ref(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=t2;
t4=C_i_char_equalp(t3,C_make_character(92));
t5=(C_truep(t4)?t4:C_i_char_equalp(t3,C_make_character(34)));
if(C_truep(t5)){
t6=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2344,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2348,a[2]=((C_word*)t0)[6],a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2352,a[2]=((C_word*)t0)[6],a[3]=t9,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:337: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),t10,((C_word*)t0)[2],((C_word*)t0)[8],((C_word*)t0)[3]);}
else{
t6=C_i_char_lessp(t3,C_make_character(32));
t7=(C_truep(t6)?t6:C_i_char_equalp(t3,C_make_character(127)));
if(C_truep(t7)){
t8=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t9=t8;
t10=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t11=t10;
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2376,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t9,a[6]=t11,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2423,a[2]=((C_word*)t0)[6],a[3]=t12,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:344: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),t13,((C_word*)t0)[2],((C_word*)t0)[8],((C_word*)t0)[3]);}
else{
t8=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* extras.scm:359: loop */
t9=((C_word*)((C_word*)t0)[4])[1];
f_2314(t9,((C_word*)t0)[5],((C_word*)t0)[8],t8,((C_word*)t0)[7]);}}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2443,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2447,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:361: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),t3,((C_word*)t0)[2],((C_word*)t0)[8],((C_word*)t0)[3]);}}

/* loop in pp-down in pp in generic-write in k1006 in k1003 */
static void C_fcall f_2943(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2943,NULL,4,t0,t1,t2,t3);}
if(C_truep(t3)){
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=C_i_nullp(t5);
t7=(C_truep(t6)?C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1)):C_fix(0));
t8=t7;
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2964,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t10=t2;
t11=C_u_i_car(t10);
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2970,a[2]=((C_word*)t0)[4],a[3]=t9,a[4]=t11,a[5]=t8,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:471: indent */
t13=((C_word*)((C_word*)t0)[6])[1];
f_2716(t13,t12,((C_word*)t0)[7],t3);}
else{
if(C_truep(C_i_nullp(t2))){
/* extras.scm:473: out */
t4=((C_word*)((C_word*)t0)[8])[1];
f_2064(t4,t1,lf[95],t3);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2992,a[2]=((C_word*)t0)[8],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2996,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3004,a[2]=((C_word*)t0)[6],a[3]=t5,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3008,a[2]=((C_word*)t0)[8],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* extras.scm:477: indent */
t8=((C_word*)((C_word*)t0)[6])[1];
f_2716(t8,t7,((C_word*)t0)[7],t3);}}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* read-macro-prefix in generic-write in k1006 in k1003 */
static C_word C_fcall f_2025(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_stack_overflow_check;
t2=C_i_car(t1);
t3=t1;
t4=C_u_i_cdr(t3);
t5=C_eqp(t2,lf[36]);
if(C_truep(t5)){
return(lf[40]);}
else{
t6=C_eqp(t2,lf[37]);
if(C_truep(t6)){
return(lf[41]);}
else{
t7=C_eqp(t2,lf[38]);
if(C_truep(t7)){
return(lf[42]);}
else{
t8=C_eqp(t2,lf[39]);
return((C_truep(t8)?lf[43]:C_SCHEME_UNDEFINED));}}}}

/* k2441 in k2319 in loop in k2310 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:360: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2064(t2,((C_word*)t0)[3],lf[64],t1);}

/* k2445 in k2319 in loop in k2310 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:361: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2064(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2259 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:319: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2064(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2410 in k2398 in k2374 in k2319 in loop in k2310 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:357: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2064(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3100 in pp-general in pp in generic-write in k1006 in k1003 */
static void C_ccall f_3102(C_word c,C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3102,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[2])?C_i_pairp(((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=C_i_car(((C_word*)t0)[3]);
t4=t3;
t5=C_u_i_cdr(((C_word*)t0)[3]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3115,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3130,a[2]=((C_word*)t0)[7],a[3]=t6,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:508: out */
t8=((C_word*)((C_word*)t0)[8])[1];
f_2064(t8,t7,lf[98],t1);}
else{
t3=C_a_i_plus(&a,2,((C_word*)t0)[4],C_fix(2));
t4=C_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm:510: tail1 */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3013(t5,((C_word*)t0)[6],((C_word*)t0)[3],t3,t1,t4);}}

/* pp-list in pp in generic-write in k1006 in k1003 */
static void C_fcall f_2928(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2928,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2932,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* extras.scm:461: out */
t7=((C_word*)((C_word*)t0)[3])[1];
f_2064(t7,t6,lf[94],t3);}

/* k2924 in pp-call in pp in generic-write in k1006 in k1003 */
static void C_ccall f_2926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:453: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2083(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2271 in k2268 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2273,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2280,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:323: get-output-string */
t3=*((C_word*)lf[26]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k2268 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2270,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2273,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:322: ##sys#print */
t4=*((C_word*)lf[56]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[5],C_SCHEME_TRUE,t2);}

/* k2421 in k2319 in loop in k2310 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:344: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2064(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k3128 in k3100 in pp-general in pp in generic-write in k1006 in k1003 */
static void C_ccall f_3130(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:508: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2083(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2930 in pp-list in pp in generic-write in k1006 in k1003 */
static void C_ccall f_2932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:462: pp-down */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2937(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* pp-down in pp in generic-write in k1006 in k1003 */
static void C_fcall f_2937(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2937,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2943,a[2]=t5,a[3]=t8,a[4]=((C_word*)t0)[2],a[5]=t6,a[6]=((C_word*)t0)[3],a[7]=t4,a[8]=((C_word*)t0)[4],a[9]=((C_word)li46),tmp=(C_word)a,a+=10,tmp));
t10=((C_word*)t8)[1];
f_2943(t10,t1,t2,t3);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_extras_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_extras_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("extras_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(886)){
C_save(t1);
C_rereclaim2(886*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,136);
lf[0]=C_h_intern(&lf[0],4,"read");
lf[1]=C_h_intern(&lf[1],9,"read-file");
lf[2]=C_h_intern(&lf[2],18,"\003sysstandard-input");
lf[3]=C_h_intern(&lf[3],16,"\003sysfast-reverse");
lf[4]=C_h_intern(&lf[4],20,"call-with-input-file");
lf[5]=C_h_intern(&lf[5],5,"port\077");
lf[6]=C_h_intern(&lf[6],9,"randomize");
lf[7]=C_decode_literal(C_heaptop,"\376U1000.0\000");
lf[8]=C_h_intern(&lf[8],11,"\003sysflo2fix");
lf[9]=C_h_intern(&lf[9],15,"current-seconds");
lf[10]=C_h_intern(&lf[10],6,"random");
lf[11]=C_h_intern(&lf[11],9,"read-line");
lf[12]=C_h_intern(&lf[12],13,"\003syssubstring");
lf[13]=C_h_intern(&lf[13],15,"\003sysread-char-0");
lf[14]=C_h_intern(&lf[14],9,"peek-char");
lf[15]=C_h_intern(&lf[15],17,"\003sysstring-append");
lf[16]=C_h_intern(&lf[16],11,"make-string");
lf[17]=C_h_intern(&lf[17],15,"\003sysmake-string");
lf[18]=C_h_intern(&lf[18],10,"read-lines");
lf[19]=C_h_intern(&lf[19],10,"write-line");
lf[20]=C_h_intern(&lf[20],19,"\003sysstandard-output");
lf[21]=C_h_intern(&lf[21],16,"\003syswrite-char-0");
lf[22]=C_h_intern(&lf[22],16,"\003sysread-string!");
lf[23]=C_h_intern(&lf[23],12,"read-string!");
lf[24]=C_h_intern(&lf[24],20,"\003sysread-string/port");
lf[25]=C_h_intern(&lf[25],11,"read-string");
lf[26]=C_h_intern(&lf[26],17,"get-output-string");
lf[27]=C_h_intern(&lf[27],12,"write-string");
lf[28]=C_h_intern(&lf[28],18,"open-output-string");
lf[29]=C_h_intern(&lf[29],13,"read-buffered");
lf[30]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[31]=C_h_intern(&lf[31],10,"read-token");
lf[32]=C_h_intern(&lf[32],15,"\003syspeek-char-0");
lf[33]=C_h_intern(&lf[33],9,"read-byte");
lf[34]=C_h_intern(&lf[34],10,"write-byte");
lf[36]=C_h_intern(&lf[36],5,"quote");
lf[37]=C_h_intern(&lf[37],10,"quasiquote");
lf[38]=C_h_intern(&lf[38],7,"unquote");
lf[39]=C_h_intern(&lf[39],16,"unquote-splicing");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\001\047");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\001`");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\002,@");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\003 . ");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\002()");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\005#!eof");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000\001#");
lf[52]=C_h_intern(&lf[52],12,"vector->list");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\002#t");
lf[54]=C_decode_literal(C_heaptop,"\376B\000\000\002#f");
lf[55]=C_h_intern(&lf[55],18,"\003sysnumber->string");
lf[56]=C_h_intern(&lf[56],9,"\003sysprint");
lf[57]=C_h_intern(&lf[57],21,"\003sysprocedure->string");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\001\134");
lf[59]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\011\376B\000\000\002\134t\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\012\376B\000\000\002\134n\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\015\376B\000\000\002\134r\376\003\000\000\002\376\003\000\000\002\376"
"\377\012\000\000\013\376B\000\000\002\134v\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\014\376B\000\000\002\134f\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\007\376B\000\000\002\134a\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\010\376B\000\000\002\134"
"b\376\377\016");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[62]=C_decode_literal(C_heaptop,"\376B\000\000\002\134x");
lf[63]=C_h_intern(&lf[63],14,"number->string");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[66]=C_decode_literal(C_heaptop,"\376B\000\000\001x");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\001U");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\001u");
lf[69]=C_h_intern(&lf[69],9,"char-name");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000\002#\134");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\016#<unspecified>");
lf[72]=C_h_intern(&lf[72],19,"\003syspointer->string");
lf[73]=C_h_intern(&lf[73],28,"\003sysarbitrary-unbound-symbol");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\020#<unbound value>");
lf[75]=C_h_intern(&lf[75],19,"\003sysuser-print-hook");
lf[76]=C_h_intern(&lf[76],13,"string-append");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\007#<port ");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\001>");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\001}");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000\003#${");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\000\001>");
lf[83]=C_h_intern(&lf[83],23,"\003syslambda-info->string");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\016#<lambda info ");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\025#<unprintable object>");
lf[86]=C_h_intern(&lf[86],11,"\003sysnumber\077");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\010        ");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\010        ");
lf[89]=C_h_intern(&lf[89],21,"reverse-string-append");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\001#");
lf[91]=C_h_intern(&lf[91],3,"max");
lf[92]=C_h_intern(&lf[92],28,"\003syssymbol->qualified-string");
lf[93]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[99]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[100]=C_h_intern(&lf[100],6,"lambda");
lf[101]=C_h_intern(&lf[101],2,"if");
lf[102]=C_h_intern(&lf[102],4,"set!");
lf[103]=C_h_intern(&lf[103],4,"cond");
lf[104]=C_h_intern(&lf[104],4,"case");
lf[105]=C_h_intern(&lf[105],3,"and");
lf[106]=C_h_intern(&lf[106],2,"or");
lf[107]=C_h_intern(&lf[107],3,"let");
lf[108]=C_h_intern(&lf[108],5,"begin");
lf[109]=C_h_intern(&lf[109],2,"do");
lf[110]=C_h_intern(&lf[110],4,"let\052");
lf[111]=C_h_intern(&lf[111],6,"letrec");
lf[112]=C_h_intern(&lf[112],7,"letrec\052");
lf[113]=C_h_intern(&lf[113],6,"define");
lf[114]=C_h_intern(&lf[114],18,"pretty-print-width");
lf[115]=C_h_intern(&lf[115],12,"pretty-print");
lf[116]=C_h_intern(&lf[116],7,"display");
lf[117]=C_h_intern(&lf[117],2,"pp");
lf[119]=C_h_intern(&lf[119],9,"\003syserror");
lf[120]=C_decode_literal(C_heaptop,"\376B\000\000/too few arguments to formatted output procedure");
lf[121]=C_h_intern(&lf[121],5,"write");
lf[122]=C_h_intern(&lf[122],16,"\003sysflush-output");
lf[123]=C_h_intern(&lf[123],7,"newline");
lf[124]=C_decode_literal(C_heaptop,"\376B\000\000\037illegal format-string character");
lf[125]=C_h_intern(&lf[125],13,"\003systty-port\077");
lf[126]=C_h_intern(&lf[126],7,"fprintf");
lf[127]=C_h_intern(&lf[127],6,"printf");
lf[128]=C_h_intern(&lf[128],7,"sprintf");
lf[129]=C_h_intern(&lf[129],6,"format");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000\023illegal destination");
lf[131]=C_h_intern(&lf[131],12,"output-port\077");
lf[132]=C_h_intern(&lf[132],17,"register-feature!");
lf[133]=C_h_intern(&lf[133],7,"srfi-28");
lf[134]=C_h_intern(&lf[134],14,"make-parameter");
lf[135]=C_h_intern(&lf[135],6,"extras");
C_register_lf2(lf,136,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1005,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* pp-cond in pp in generic-write in k1006 in k1003 */
static void C_ccall f_3168(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3168,5,t0,t1,t2,t3,t4);}
/* extras.scm:522: pp-call */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2902(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[3])[1]);}

/* pp-if in pp in generic-write in k1006 in k1003 */
static void C_ccall f_3162(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3162,5,t0,t1,t2,t3,t4);}
/* extras.scm:519: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3010(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1]);}

/* k2576 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2578,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2581,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:382: ##sys#user-print-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[75]+1)))(5,*((C_word*)lf[75]+1),t3,((C_word*)t0)[5],C_SCHEME_TRUE,t2);}

/* k3006 in loop in pp-down in pp in generic-write in k1006 in k1003 */
static void C_ccall f_3008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:477: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2064(t2,((C_word*)t0)[3],lf[97],t1);}

/* pp-call in pp in generic-write in k1006 in k1003 */
static void C_fcall f_2902(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2902,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2906,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t4,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
t7=C_i_car(t2);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2926,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:453: out */
t10=((C_word*)((C_word*)t0)[4])[1];
f_2064(t10,t9,lf[93],t3);}

/* k2904 in pp-call in pp in generic-write in k1006 in k1003 */
static void C_ccall f_2906(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2906,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=((C_word*)t0)[3];
t3=C_u_i_cdr(t2);
t4=C_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm:455: pp-down */
t5=((C_word*)((C_word*)t0)[4])[1];
f_2937(t5,((C_word*)t0)[5],t3,t1,t4,((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k3002 in loop in pp-down in pp in generic-write in k1006 in k1003 */
static void C_ccall f_3004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:477: indent */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2716(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3693 in k3388 in fprintf0 in k3358 in k1006 in k1003 */
static void C_ccall f_3695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_3393(2,t2,((C_word*)t0)[3]);}
else{
/* extras.scm:587: open-output-string */
t2=*((C_word*)lf[28]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}}

/* out in generic-write in k1006 in k1003 */
static void C_fcall f_2064(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2064,NULL,4,t0,t1,t2,t3);}
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2074,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:294: output */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,t2);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k2091 in wr-expr in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2093(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2093,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_i_cadr(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2104,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=f_2025(((C_word*)t0)[2]);
/* extras.scm:300: out */
t7=((C_word*)((C_word*)t0)[6])[1];
f_2064(t7,t5,t6,((C_word*)t0)[7]);}
else{
/* extras.scm:301: wr-lst */
t2=((C_word*)((C_word*)t0)[8])[1];
f_2113(t2,((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[7]);}}

/* k3113 in k3100 in pp-general in pp in generic-write in k1006 in k1003 */
static void C_ccall f_3115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3115,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(2));
t3=C_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm:509: tail1 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3013(t4,((C_word*)t0)[4],((C_word*)t0)[5],t2,t1,t3);}

/* k3036 in tail1 in pp-general in pp in generic-write in k1006 in k1003 */
static void C_ccall f_3038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:488: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2750(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k3032 in tail1 in pp-general in pp in generic-write in k1006 in k1003 */
static void C_ccall f_3034(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:488: tail2 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3052(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,((C_word*)t0)[6]);}

/* k2558 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:377: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2064(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* doloop86 in k1037 in slurp in read-file in k1006 in k1003 */
static void C_fcall f_1041(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1041,NULL,5,t0,t1,t2,t3,t4);}
t5=C_eofp(t2);
t6=(C_truep(t5)?t5:(C_truep(((C_word*)t0)[2])?C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[2]):C_SCHEME_FALSE));
if(C_truep(t6)){
/* extras.scm:50: ##sys#fast-reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[3]+1)))(3,*((C_word*)lf[3]+1),t1,t4);}
else{
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1061,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* extras.scm:47: reader */
t8=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t8))(3,t8,t7,((C_word*)t0)[5]);}}

/* k3146 in pp-general in pp in generic-write in k1006 in k1003 */
static void C_ccall f_3148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:504: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2083(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* wr in generic-write in k1006 in k1003 */
static void C_fcall f_2083(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[22],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2083,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2086,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t6,a[6]=((C_word*)t0)[5],a[7]=((C_word)li31),tmp=(C_word)a,a+=8,tmp);
t8=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2113,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word)li33),tmp=(C_word)a,a+=5,tmp));
if(C_truep(C_i_pairp(t2))){
/* extras.scm:314: wr-expr */
t9=t4;
f_2086(t9,t1,t2,t3);}
else{
if(C_truep(C_i_nullp(t2))){
/* extras.scm:315: wr-lst */
t9=((C_word*)t6)[1];
f_2113(t9,t1,t2,t3);}
else{
if(C_truep(C_eofp(t2))){
/* extras.scm:316: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_2064(t9,t1,lf[50],t3);}
else{
if(C_truep(C_i_vectorp(t2))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2231,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:317: vector->list */
t10=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t2);}
else{
if(C_truep(C_booleanp(t2))){
if(C_truep(t2)){
/* extras.scm:318: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_2064(t9,t1,lf[53],t3);}
else{
/* extras.scm:318: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_2064(t9,t1,lf[54],t3);}}
else{
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2254,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:319: ##sys#number? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[86]+1)))(3,*((C_word*)lf[86]+1),t9,t2);}}}}}}

/* wr-expr in wr in generic-write in k1006 in k1003 */
static void C_fcall f_2086(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2086,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2093,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* extras.scm:299: read-macro? */
f_1963(t4,t2);}

/* pr in pp in generic-write in k1006 in k1003 */
static void C_fcall f_2750(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[26],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2750,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_pairp(t2);
t7=(C_truep(t6)?t6:C_i_vectorp(t2));
if(C_truep(t7)){
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2763,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t9,a[6]=t2,a[7]=t5,a[8]=t4,a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[4],a[11]=((C_word*)t0)[5],tmp=(C_word)a,a+=12,tmp);
t11=C_a_i_minus(&a,2,((C_word*)t0)[6],t3);
t12=C_a_i_minus(&a,2,t11,t4);
t13=C_a_i_plus(&a,2,t12,C_fix(1));
/* extras.scm:419: max */
t14=*((C_word*)lf[91]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t10,t13,C_fix(50));}
else{
/* extras.scm:430: wr */
t8=((C_word*)((C_word*)t0)[7])[1];
f_2083(t8,t1,t2,t3);}}

/* k2592 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2594(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2594,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2601,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[5],C_fix(3));
/* extras.scm:384: string-append */
t4=*((C_word*)lf[76]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[77],t3,lf[78]);}
else{
if(C_truep(C_bytevectorp(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2611,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:386: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2064(t3,t2,lf[81],((C_word*)t0)[4]);}
else{
if(C_truep(C_lambdainfop(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2661,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:396: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2064(t3,t2,lf[84],((C_word*)t0)[4]);}
else{
/* extras.scm:399: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2064(t2,((C_word*)t0)[3],lf[85],((C_word*)t0)[4]);}}}}

/* pp-case in pp in generic-write in k1006 in k1003 */
static void C_ccall f_3174(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3174,5,t0,t1,t2,t3,t4);}
/* extras.scm:525: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3010(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}

/* k2586 in k2579 in k2576 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2588(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:383: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2064(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* pp-general in pp in generic-write in k1006 in k1003 */
static void C_fcall f_3010(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
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
C_word ab[42],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3010,NULL,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3013,a[2]=t6,a[3]=t4,a[4]=t12,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word)li48),tmp=(C_word)a,a+=8,tmp));
t16=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3052,a[2]=t7,a[3]=t4,a[4]=t14,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word)li49),tmp=(C_word)a,a+=8,tmp));
t17=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3091,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=t8,a[5]=((C_word)li50),tmp=(C_word)a,a+=6,tmp));
t18=C_i_car(t2);
t19=t18;
t20=t2;
t21=C_u_i_cdr(t20);
t22=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3102,a[2]=t5,a[3]=t21,a[4]=t3,a[5]=t10,a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t23=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3148,a[2]=((C_word*)t0)[5],a[3]=t22,a[4]=t19,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:504: out */
t24=((C_word*)((C_word*)t0)[6])[1];
f_2064(t24,t23,lf[99],t3);}

/* tail1 in pp-general in pp in generic-write in k1006 in k1003 */
static void C_fcall f_3013(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
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
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3013,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(C_truep(((C_word*)t0)[2])?C_i_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=C_i_car(t2);
t8=t7;
t9=t2;
t10=C_u_i_cdr(t9);
t11=C_i_nullp(t10);
t12=(C_truep(t11)?C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1)):C_fix(0));
t13=t12;
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3034,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t10,a[5]=t3,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3038,a[2]=((C_word*)t0)[5],a[3]=t14,a[4]=t8,a[5]=t13,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:488: indent */
t16=((C_word*)((C_word*)t0)[6])[1];
f_2716(t16,t15,t5,t4);}
else{
/* extras.scm:489: tail2 */
t7=((C_word*)((C_word*)t0)[4])[1];
f_3052(t7,t1,t2,t3,t4,t5);}}

/* k1210 in loop in k1192 in k1169 in read-line in k1006 in k1003 */
static void C_ccall f_1212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1212,2,t0,t1);}
t2=t1;
if(C_truep(C_eofp(t2))){
t3=C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
/* extras.scm:92: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1],C_fix(0),((C_word*)t0)[2]);}}
else{
switch(t2){
case C_make_character(10):
/* extras.scm:94: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1],C_fix(0),((C_word*)t0)[2]);
case C_make_character(13):
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1245,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:96: peek-char */
t4=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);
default:
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1263,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)t0)[2],((C_word*)((C_word*)t0)[7])[1]))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1277,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[7],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1285,a[2]=t4,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:104: make-string */
t6=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)((C_word*)t0)[7])[1]);}
else{
t4=t3;
f_1263(t4,C_SCHEME_UNDEFINED);}}}}

/* k2579 in k2576 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2581,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2588,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:383: get-output-string */
t3=*((C_word*)lf[26]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k1059 in doloop86 in k1037 in slurp in read-file in k1006 in k1003 */
static void C_ccall f_1061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1061,2,t0,t1);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t4=((C_word*)((C_word*)t0)[5])[1];
f_1041(t4,((C_word*)t0)[6],t1,t2,t3);}

/* k2853 in k2842 in pp-expr in pp in generic-write in k1006 in k1003 */
static void C_ccall f_2855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:434: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2750(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}

/* k2968 in loop in pp-down in pp in generic-write in k1006 in k1003 */
static void C_ccall f_2970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:471: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2750(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* loop in read-string! in k1006 in k1003 */
static void C_fcall f_1509(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1509,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1513,a[2]=t4,a[3]=t1,a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* extras.scm:156: ##sys#read-char-0 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t5,((C_word*)t0)[4]);}

/* pp-lambda in pp in generic-write in k1006 in k1003 */
static void C_ccall f_3156(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3156,5,t0,t1,t2,t3,t4);}
/* extras.scm:516: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3010(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}

/* pp-expr-list in pp in generic-write in k1006 in k1003 */
static void C_ccall f_3150(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3150,5,t0,t1,t2,t3,t4);}
/* extras.scm:513: pp-list */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2928(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[3])[1]);}

/* k3593 in k3590 in loop in rec in k3391 in k3388 in fprintf0 in k3358 in k1006 in k1003 */
static void C_ccall f_3595(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3595,2,t0,t1);}
t2=C_i_check_list_2(t1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3601,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:619: rec */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3424(t4,t3,((C_word*)t0)[6],t1);}

/* k3590 in loop in rec in k3391 in k3388 in fprintf0 in k3358 in k1006 in k1003 */
static void C_ccall f_3592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3592,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3595,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* extras.scm:617: next */
t4=((C_word*)((C_word*)t0)[6])[1];
f_3440(t4,t3);}

/* k3075 in tail2 in pp-general in pp in generic-write in k1006 in k1003 */
static void C_ccall f_3077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:496: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2750(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k3071 in tail2 in pp-general in pp in generic-write in k1006 in k1003 */
static void C_ccall f_3073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:496: tail3 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3091(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k3755 in format in k3358 in k1006 in k1003 */
static void C_ccall f_3757(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3757,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
C_apply(4,0,((C_word*)t0)[4],*((C_word*)lf[126]+1),((C_word*)((C_word*)t0)[3])[1]);}
else{
/* extras.scm:651: ##sys#error */
t2=*((C_word*)lf[119]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[5],lf[129],lf[130],((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);}}

/* k2962 in loop in pp-down in pp in generic-write in k1006 in k1003 */
static void C_ccall f_2964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:470: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2943(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1003 */
static void C_ccall f_1005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1005,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1008,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm:37: register-feature! */
t3=*((C_word*)lf[132]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[135]);}

/* k2072 in out in generic-write in k1006 in k1003 */
static void C_ccall f_2074(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2074,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_string_length(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_plus(&a,2,((C_word*)t0)[4],t2));}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k2994 in loop in pp-down in pp in generic-write in k1006 in k1003 */
static void C_ccall f_2996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2996,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
/* extras.scm:476: pr */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2750(t3,((C_word*)t0)[4],((C_word*)t0)[5],t1,t2,((C_word*)t0)[6]);}

/* pp-expr in pp in generic-write in k1006 in k1003 */
static void C_ccall f_2837(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2837,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2844,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=t3,a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],a[13]=((C_word*)t0)[9],tmp=(C_word)a,a+=14,tmp);
/* extras.scm:433: read-macro? */
f_1963(t5,t2);}

/* pp-and in pp in generic-write in k1006 in k1003 */
static void C_ccall f_3180(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3180,5,t0,t1,t2,t3,t4);}
/* extras.scm:528: pp-call */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2902(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[3])[1]);}

/* pp-let in pp in generic-write in k1006 in k1003 */
static void C_ccall f_3186(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3186,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
if(C_truep(C_i_pairp(t5))){
t6=C_u_i_car(t5);
t7=C_i_symbolp(t6);
/* extras.scm:533: pp-general */
t8=((C_word*)((C_word*)t0)[2])[1];
f_3010(t8,t1,t2,t3,t4,t7,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}
else{
/* extras.scm:533: pp-general */
t6=((C_word*)((C_word*)t0)[2])[1];
f_3010(t6,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}}

/* k1006 in k1003 */
static void C_ccall f_1008(C_word c,C_word t0,C_word t1){
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
C_word ab[52],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1008,2,t0,t1);}
t2=*((C_word*)lf[0]+1);
t3=C_mutate2((C_word*)lf[1]+1 /* (set! read-file ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1010,a[2]=t2,a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp));
t4=C_mutate2((C_word*)lf[6]+1 /* (set! randomize ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1125,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[10]+1 /* (set! random ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1149,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[11]+1 /* (set! read-line ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1161,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[18]+1 /* (set! read-lines ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1314,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[19]+1 /* (set! write-line ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1404,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[22]+1 /* (set! ##sys#read-string! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1432,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[23]+1 /* (set! read-string! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1564,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[24]+1 /* (set! ##sys#read-string/port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1641,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[25]+1 /* (set! read-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1699,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2((C_word*)lf[29]+1 /* (set! read-buffered ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1741,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate2((C_word*)lf[31]+1 /* (set! read-token ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1769,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate2((C_word*)lf[27]+1 /* (set! write-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1825,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2((C_word*)lf[33]+1 /* (set! read-byte ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1908,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate2((C_word*)lf[34]+1 /* (set! write-byte ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1935,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate2(&lf[35] /* (set! generic-write ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1960,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp));
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3360,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm:570: make-parameter */
t20=*((C_word*)lf[134]+1);
((C_proc3)(void*)(*((C_word*)t20+1)))(3,t20,t19,C_fix(79));}

/* k2990 in loop in pp-down in pp in generic-write in k1006 in k1003 */
static void C_ccall f_2992(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:475: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2064(t2,((C_word*)t0)[3],lf[96],t1);}

/* read-file in k1006 in k1003 */
static void C_ccall f_1010(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr2r,(void*)f_1010r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1010r(t0,t1,t2);}}

static void C_ccall f_1010r(C_word t0,C_word t1,C_word t2){
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
C_word *a=C_alloc(10);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?*((C_word*)lf[2]+1):C_i_car(t2));
t5=t4;
t6=C_i_nullp(t2);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t2));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?((C_word*)t0)[2]:C_i_car(t7));
t10=t9;
t11=C_i_nullp(t7);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t13=C_i_nullp(t12);
t14=(C_truep(t13)?C_SCHEME_FALSE:C_i_car(t12));
t15=t14;
t16=C_i_nullp(t12);
t17=(C_truep(t16)?C_SCHEME_END_OF_LIST:C_i_cdr(t12));
t18=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1031,a[2]=t15,a[3]=t10,a[4]=((C_word)li1),tmp=(C_word)a,a+=5,tmp);
t19=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1081,a[2]=t18,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:51: port? */
t20=*((C_word*)lf[5]+1);
((C_proc3)(void*)(*((C_word*)t20+1)))(3,t20,t19,t5);}

/* k2842 in pp-expr in pp in generic-write in k1006 in k1003 */
static void C_ccall f_2844(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2844,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_i_cadr(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2855,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t6=f_2025(((C_word*)t0)[2]);
/* extras.scm:435: out */
t7=((C_word*)((C_word*)t0)[8])[1];
f_2064(t7,t5,t6,((C_word*)t0)[9]);}
else{
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
if(C_truep(C_i_symbolp(t3))){
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2871,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[11],a[9]=t3,tmp=(C_word)a,a+=10,tmp);
/* extras.scm:440: style */
t5=((C_word*)((C_word*)t0)[12])[1];
f_3221(t5,t4,t3);}
else{
/* extras.scm:447: pp-list */
t4=((C_word*)((C_word*)t0)[13])[1];
f_2928(t4,((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[9],((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}}}

/* k3572 in loop in rec in k3391 in k3388 in fprintf0 in k3358 in k1006 in k1003 */
static void C_ccall f_3574(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:613: ##sys#number->string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[55]+1)))(4,*((C_word*)lf[55]+1),((C_word*)t0)[2],t1,C_fix(16));}

/* tail2 in pp-general in pp in generic-write in k1006 in k1003 */
static void C_fcall f_3052(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
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
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3052,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(C_truep(((C_word*)t0)[2])?C_i_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=C_i_car(t2);
t8=t7;
t9=t2;
t10=C_u_i_cdr(t9);
t11=C_i_nullp(t10);
t12=(C_truep(t11)?C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1)):C_fix(0));
t13=t12;
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3073,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t10,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3077,a[2]=((C_word*)t0)[5],a[3]=t14,a[4]=t8,a[5]=t13,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:496: indent */
t16=((C_word*)((C_word*)t0)[6])[1];
f_2716(t16,t15,t5,t4);}
else{
/* extras.scm:497: tail3 */
t7=((C_word*)((C_word*)t0)[4])[1];
f_3091(t7,t1,t2,t3,t4);}}

/* k3568 in loop in rec in k3391 in k3388 in fprintf0 in k3358 in k1006 in k1003 */
static void C_ccall f_3570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:613: display */
t2=*((C_word*)lf[116]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k3730 in format in k3358 in k1006 in k1003 */
static void C_ccall f_3732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],t1,((C_word*)((C_word*)t0)[3])[1]);}

/* k1691 in k1679 in loop in k1670 in k1667 in read-string/port in k1006 in k1003 */
static void C_ccall f_1693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:198: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1677(t2,((C_word*)t0)[3]);}

/* read-string in k1006 in k1003 */
static void C_ccall f_1699(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_1699r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1699r(t0,t1,t2);}}

static void C_ccall f_1699r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=C_i_nullp(t2);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_cdr(t2));
t7=C_i_nullp(t6);
t8=(C_truep(t7)?*((C_word*)lf[2]+1):C_i_car(t6));
if(C_truep(C_i_nullp(t6))){
/* extras.scm:201: ##sys#read-string/port */
t9=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t1,t4,t8);}
else{
t9=C_i_cdr(t6);
/* extras.scm:201: ##sys#read-string/port */
t10=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t1,t4,t8);}}

/* write-string in k1006 in k1003 */
static void C_ccall f_1825(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr3r,(void*)f_1825r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1825r(t0,t1,t2,t3);}}

static void C_ccall f_1825r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(12);
t4=C_i_check_string_2(t2,lf[27]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1830,a[2]=t2,a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1868,a[2]=t5,a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1873,a[2]=t6,a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* extras.scm:236: def-n306 */
t8=t7;
f_1873(t8,t1);}
else{
t8=C_i_car(t3);
t9=C_u_i_cdr(t3);
if(C_truep(C_i_nullp(t9))){
/* extras.scm:236: def-port307 */
t10=t6;
f_1868(t10,t1,t8);}
else{
t10=C_i_car(t9);
t11=C_u_i_cdr(t9);
/* extras.scm:236: body304 */
t12=t5;
f_1830(t12,t1,t8,t10);}}}

/* k2669 in k2659 in k2592 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2671(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:397: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2064(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1261 in k1210 in loop in k1192 in k1169 in read-line in k1006 in k1003 */
static void C_fcall f_1263(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_setsubchar(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* extras.scm:107: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_1199(t4,((C_word*)t0)[6],t3);}

/* k1667 in read-string/port in k1006 in k1003 */
static void C_ccall f_1669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1669,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1672,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t3,C_fix(2048),C_make_character(32));}

/* k1127 in randomize in k1006 in k1003 */
static void C_ccall f_1129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_check_exact_2(t1,lf[6]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_randomize(t1));}

/* body304 in write-string in k1006 in k1003 */
static void C_fcall f_1830(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1830,NULL,4,t0,t1,t2,t3);}
t4=t3;
t5=C_i_check_port_2(t4,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[27]);
t6=(C_truep(t2)?C_i_check_exact_2(t2,lf[27]):C_SCHEME_UNDEFINED);
t7=C_slot(t3,C_fix(2));
t8=C_slot(t7,C_fix(3));
t9=t8;
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1847,a[2]=t9,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1850,a[2]=t10,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t9,a[6]=t1,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t12=C_block_size(((C_word*)t0)[2]);
t13=t11;
f_1850(t13,C_fixnum_lessp(t2,t12));}
else{
t12=t11;
f_1850(t12,C_SCHEME_FALSE);}}

/* randomize in k1006 in k1003 */
static void C_ccall f_1125(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_1125r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1125r(t0,t1,t2);}}

static void C_ccall f_1125r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1129,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1143,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:60: current-seconds */
t5=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_i_car(t2);
t5=C_i_check_exact_2(t4,lf[6]);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_randomize(t4));}}

/* k1275 in k1210 in loop in k1192 in k1169 in read-line in k1006 in k1003 */
static void C_ccall f_1277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[4];
f_1263(t5,t4);}

/* loop in rec in k3391 in k3388 in fprintf0 in k3358 in k1006 in k1003 */
static void C_fcall f_3459(C_word t0,C_word t1){
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
C_word *a;
loop:
a=C_alloc(11);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3459,NULL,2,t0,t1);}
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]))){
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=f_3433(((C_word*)((C_word*)t0)[4])[1]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3472,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(t2,C_make_character(126));
t5=(C_truep(t4)?C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=f_3433(((C_word*)((C_word*)t0)[4])[1]);
t7=C_u_i_char_upcase(t6);
switch(t7){
case C_make_character(83):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3497,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:608: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_3440(t9,t8);
case C_make_character(65):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3510,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:609: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_3440(t9,t8);
case C_make_character(67):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3523,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:610: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_3440(t9,t8);
case C_make_character(66):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3536,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3540,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:611: next */
t10=((C_word*)((C_word*)t0)[7])[1];
f_3440(t10,t9);
case C_make_character(79):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3553,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3557,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:612: next */
t10=((C_word*)((C_word*)t0)[7])[1];
f_3440(t10,t9);
case C_make_character(88):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3570,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3574,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:613: next */
t10=((C_word*)((C_word*)t0)[7])[1];
f_3440(t10,t9);
case C_make_character(33):
/* extras.scm:614: ##sys#flush-output */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[122]+1)))(3,*((C_word*)lf[122]+1),t3,((C_word*)t0)[6]);
case C_make_character(63):
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3592,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:616: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_3440(t9,t8);
case C_make_character(126):
/* extras.scm:620: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[21]+1)))(4,*((C_word*)lf[21]+1),t3,C_make_character(126),((C_word*)t0)[6]);
default:
t8=C_eqp(t7,C_make_character(37));
t9=(C_truep(t8)?t8:C_eqp(t7,C_make_character(78)));
if(C_truep(t9)){
/* extras.scm:621: newline */
t10=*((C_word*)lf[123]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t3,((C_word*)t0)[6]);}
else{
if(C_truep(C_u_i_char_whitespacep(t6))){
t10=f_3433(((C_word*)((C_word*)t0)[4])[1]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3637,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word)li67),tmp=(C_word)a,a+=5,tmp);
t12=f_3637(t11,t10);
/* extras.scm:630: loop */
t25=t1;
t1=t25;
goto loop;}
else{
/* extras.scm:628: ##sys#error */
t10=*((C_word*)lf[119]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t3,((C_word*)t0)[8],lf[124],t6);}}}}
else{
/* extras.scm:629: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[21]+1)))(4,*((C_word*)lf[21]+1),t3,t2,((C_word*)t0)[6]);}}}

/* k1845 in body304 in write-string in k1006 in k1003 */
static void C_ccall f_1847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:236: g315 */
t2=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1283 in k1210 in loop in k1192 in k1169 in read-line in k1006 in k1003 */
static void C_ccall f_1285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:104: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],t1);}

/* k1679 in loop in k1670 in k1667 in read-string/port in k1006 in k1003 */
static void C_ccall f_1681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1681,2,t0,t1);}
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
/* extras.scm:195: get-output-string */
t3=*((C_word*)lf[26]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1693,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:197: write-string */
t4=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[5],t1,((C_word*)t0)[3]);}}

/* k1511 in loop in read-string! in k1006 in k1003 */
static void C_ccall f_1513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1513,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1516,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_eofp(t1))){
t3=t2;
f_1516(t3,C_fix(0));}
else{
t3=C_setsubchar(((C_word*)t0)[7],((C_word*)t0)[5],t1);
t4=t2;
f_1516(t4,C_fix(1));}}

/* k1514 in k1511 in loop in read-string! in k1006 in k1003 */
static void C_fcall f_1516(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_i_not(((C_word*)t0)[4]);
t4=(C_truep(t3)?t3:C_fixnum_lessp(t1,((C_word*)t0)[4]));
if(C_truep(t4)){
t5=C_fixnum_plus(((C_word*)t0)[5],t1);
t6=(C_truep(((C_word*)t0)[4])?C_fixnum_difference(((C_word*)t0)[4],t1):C_SCHEME_FALSE);
t7=C_fixnum_plus(((C_word*)t0)[2],t1);
/* extras.scm:164: loop */
t8=((C_word*)((C_word*)t0)[6])[1];
f_1509(t8,((C_word*)t0)[3],t5,t6,t7);}
else{
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_fixnum_plus(t1,((C_word*)t0)[2]));}}}

/* tail3 in pp-general in pp in generic-write in k1006 in k1003 */
static void C_fcall f_3091(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3091,NULL,5,t0,t1,t2,t3,t4);}
/* extras.scm:500: pp-down */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2937(t5,t1,t2,t4,t3,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k1848 in body304 in write-string in k1006 in k1003 */
static void C_fcall f_1850(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* extras.scm:242: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0),((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
/* extras.scm:236: g315 */
t3=((C_word*)t0)[5];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,((C_word*)t0)[6],((C_word*)t0)[7],t2);}}

/* spaces in pp in generic-write in k1006 in k1003 */
static void C_fcall f_2683(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2683,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_greaterp(t2,C_fix(0)))){
if(C_truep(C_i_greaterp(t2,C_fix(7)))){
t4=C_a_i_minus(&a,2,t2,C_fix(8));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2707,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:406: out */
t7=((C_word*)((C_word*)t0)[3])[1];
f_2064(t7,t6,lf[87],t3);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2714,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:407: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),t4,lf[88],C_fix(0),t2);}}
else{
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* pp in generic-write in k1006 in k1003 */
static void C_fcall f_2680(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[152],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2680,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
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
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_SCHEME_UNDEFINED;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=C_SCHEME_UNDEFINED;
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=C_SCHEME_UNDEFINED;
t27=(*a=C_VECTOR_TYPE|1,a[1]=t26,tmp=(C_word)a,a+=2,tmp);
t28=C_SCHEME_UNDEFINED;
t29=(*a=C_VECTOR_TYPE|1,a[1]=t28,tmp=(C_word)a,a+=2,tmp);
t30=C_SCHEME_UNDEFINED;
t31=(*a=C_VECTOR_TYPE|1,a[1]=t30,tmp=(C_word)a,a+=2,tmp);
t32=C_SCHEME_UNDEFINED;
t33=(*a=C_VECTOR_TYPE|1,a[1]=t32,tmp=(C_word)a,a+=2,tmp);
t34=C_SCHEME_UNDEFINED;
t35=(*a=C_VECTOR_TYPE|1,a[1]=t34,tmp=(C_word)a,a+=2,tmp);
t36=C_SCHEME_UNDEFINED;
t37=(*a=C_VECTOR_TYPE|1,a[1]=t36,tmp=(C_word)a,a+=2,tmp);
t38=C_SCHEME_UNDEFINED;
t39=(*a=C_VECTOR_TYPE|1,a[1]=t38,tmp=(C_word)a,a+=2,tmp);
t40=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2683,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word)li39),tmp=(C_word)a,a+=5,tmp));
t41=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2716,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word)li40),tmp=(C_word)a,a+=5,tmp));
t42=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2750,a[2]=((C_word*)t0)[2],a[3]=t15,a[4]=t11,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li42),tmp=(C_word)a,a+=9,tmp));
t43=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2837,a[2]=t9,a[3]=t11,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=t19,a[7]=t13,a[8]=t39,a[9]=t15,a[10]=((C_word*)t0)[7],a[11]=((C_word)li43),tmp=(C_word)a,a+=12,tmp));
t44=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2902,a[2]=t17,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word)li44),tmp=(C_word)a,a+=6,tmp));
t45=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2928,a[2]=t17,a[3]=((C_word*)t0)[2],a[4]=((C_word)li45),tmp=(C_word)a,a+=5,tmp));
t46=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2937,a[2]=t9,a[3]=t7,a[4]=((C_word*)t0)[2],a[5]=((C_word)li47),tmp=(C_word)a,a+=6,tmp));
t47=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3010,a[2]=t9,a[3]=t7,a[4]=t17,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],a[7]=((C_word)li51),tmp=(C_word)a,a+=8,tmp));
t48=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3150,a[2]=t15,a[3]=t11,a[4]=((C_word)li52),tmp=(C_word)a,a+=5,tmp));
t49=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3156,a[2]=t19,a[3]=t21,a[4]=t11,a[5]=((C_word)li53),tmp=(C_word)a,a+=6,tmp));
t50=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3162,a[2]=t19,a[3]=t11,a[4]=((C_word)li54),tmp=(C_word)a,a+=5,tmp));
t51=C_set_block_item(t27,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3168,a[2]=t13,a[3]=t21,a[4]=((C_word)li55),tmp=(C_word)a,a+=5,tmp));
t52=C_set_block_item(t29,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3174,a[2]=t19,a[3]=t11,a[4]=t21,a[5]=((C_word)li56),tmp=(C_word)a,a+=6,tmp));
t53=C_set_block_item(t31,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3180,a[2]=t13,a[3]=t11,a[4]=((C_word)li57),tmp=(C_word)a,a+=5,tmp));
t54=C_set_block_item(t33,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3186,a[2]=t19,a[3]=t21,a[4]=t11,a[5]=((C_word)li58),tmp=(C_word)a,a+=6,tmp));
t55=C_set_block_item(t35,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3206,a[2]=t19,a[3]=t11,a[4]=((C_word)li59),tmp=(C_word)a,a+=5,tmp));
t56=C_set_block_item(t37,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3212,a[2]=t19,a[3]=t21,a[4]=t11,a[5]=((C_word)li60),tmp=(C_word)a,a+=6,tmp));
t57=C_set_block_item(t39,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3221,a[2]=t23,a[3]=t25,a[4]=t27,a[5]=t29,a[6]=t31,a[7]=t33,a[8]=t35,a[9]=t37,a[10]=((C_word)li61),tmp=(C_word)a,a+=11,tmp));
/* extras.scm:561: pr */
t58=((C_word*)t9)[1];
f_2750(t58,t1,t2,t3,C_fix(0),((C_word*)t11)[1]);}

/* k1655 in k1652 in read-string/port in k1006 in k1003 */
static void C_ccall f_1657(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_eqp(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}
else{
/* extras.scm:187: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),((C_word*)t0)[3],((C_word*)t0)[4],C_fix(0),t1);}}

/* k1652 in read-string/port in k1006 in k1003 */
static void C_ccall f_1654(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1654,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1657,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:184: ##sys#read-string! */
t4=*((C_word*)lf[22]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,((C_word*)t0)[2],t2,((C_word*)t0)[4],C_fix(0));}

/* k2761 in pr in pp in generic-write in k1006 in k1003 */
static void C_ccall f_2763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2763,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2766,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2801,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word)li41),tmp=(C_word)a,a+=5,tmp);
/* extras.scm:420: generic-write */
f_1960(t4,((C_word*)t0)[6],((C_word*)t0)[11],C_SCHEME_FALSE,t5);}

/* k2777 in k2764 in k2761 in pr in pp in generic-write in k1006 in k1003 */
static void C_ccall f_2779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:426: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2064(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k3367 in k3364 in pretty-print in k3358 in k1006 in k1003 */
static void C_ccall f_3369(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* k3364 in pretty-print in k3358 in k1006 in k1003 */
static void C_fcall f_3366(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3366,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3369,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3373,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:574: pretty-print-width */
t5=*((C_word*)lf[114]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k2730 in indent in pp in generic-write in k1006 in k1003 */
static void C_ccall f_2732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* extras.scm:413: spaces */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2683(t2,((C_word*)t0)[3],((C_word*)t0)[4],C_fix(0));}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* pretty-print in k3358 in k1006 in k1003 */
static void C_ccall f_3362(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_3362r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3362r(t0,t1,t2,t3);}}

static void C_ccall f_3362r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3366,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t5=t3;
t6=t4;
f_3366(t6,C_u_i_car(t5));}
else{
t5=t4;
f_3366(t5,*((C_word*)lf[20]+1));}}

/* k3358 in k1006 in k1003 */
static void C_ccall f_3360(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3360,2,t0,t1);}
t2=C_mutate2((C_word*)lf[114]+1 /* (set! pretty-print-width ...) */,t1);
t3=C_mutate2((C_word*)lf[115]+1 /* (set! pretty-print ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3362,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[117]+1 /* (set! pp ...) */,*((C_word*)lf[115]+1));
t5=C_mutate2(&lf[118] /* (set! fprintf0 ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3386,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[126]+1 /* (set! fprintf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3706,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[127]+1 /* (set! printf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3712,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[128]+1 /* (set! sprintf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3718,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[129]+1 /* (set! format ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3724,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3767,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm:654: register-feature! */
t11=*((C_word*)lf[132]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,lf[133]);}

/* k2737 in indent in pp in generic-write in k1006 in k1003 */
static void C_ccall f_2739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:413: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2064(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k3495 in loop in rec in k3391 in k3388 in fprintf0 in k3358 in k1006 in k1003 */
static void C_ccall f_3497(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:608: write */
t2=*((C_word*)lf[121]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k2350 in k2319 in loop in k2310 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:337: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2064(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2793 in k2764 in k2761 in pr in pp in generic-write in k1006 in k1003 */
static void C_ccall f_2795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2795,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2799,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:429: out */
t4=((C_word*)((C_word*)t0)[6])[1];
f_2064(t4,t3,lf[90],((C_word*)t0)[7]);}

/* k2662 in k2659 in k2592 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2664(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:398: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2064(t2,((C_word*)t0)[3],lf[82],((C_word*)t0)[4]);}

/* k2659 in k2592 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2661(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2661,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2664,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2671,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:397: ##sys#lambda-info->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[83]+1)))(3,*((C_word*)lf[83]+1),t3,((C_word*)t0)[5]);}

/* k2764 in k2761 in pr in pp in generic-write in k1006 in k1003 */
static void C_ccall f_2766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2766,2,t0,t1);}
if(C_truep(C_i_greaterp(((C_word*)((C_word*)t0)[2])[1],C_fix(0)))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2779,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:426: reverse-string-append */
t3=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)((C_word*)t0)[6])[1]);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[7]))){
/* extras.scm:428: pp-pair */
t2=((C_word*)t0)[8];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[7],((C_word*)t0)[5],((C_word*)t0)[9]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2795,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* extras.scm:429: vector->list */
t3=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[7]);}}}

/* loop in k1670 in k1667 in read-string/port in k1006 in k1003 */
static void C_fcall f_1677(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1677,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1681,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:192: ##sys#read-string! */
t3=*((C_word*)lf[22]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,C_fix(2048),((C_word*)t0)[4],((C_word*)t0)[5],C_fix(0));}

/* k1670 in k1667 in read-string/port in k1006 in k1003 */
static void C_ccall f_1672(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1672,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1677,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word)li16),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_1677(t6,((C_word*)t0)[4]);}

/* read-line in k1006 in k1003 */
static void C_ccall f_1161(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1161r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1161r(t0,t1,t2);}}

static void C_ccall f_1161r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(4);
t3=C_i_pairp(t2);
t4=(C_truep(t3)?C_i_car(t2):*((C_word*)lf[2]+1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1171,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t7=C_i_cdr(t2);
t8=C_i_pairp(t7);
t9=t6;
f_1171(t9,(C_truep(t8)?C_i_cadr(t2):C_SCHEME_FALSE));}
else{
t7=t6;
f_1171(t7,C_SCHEME_FALSE);}}

/* k3349 in k3345 in generic-write in k1006 in k1003 */
static void C_ccall f_3351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:564: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2064(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2705 in spaces in pp in generic-write in k1006 in k1003 */
static void C_ccall f_2707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:406: spaces */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2683(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1802 in k1792 in k1786 in loop in k1777 in read-token in k1006 in k1003 */
static void C_ccall f_1804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:229: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[21]+1)))(4,*((C_word*)lf[21]+1),((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k2379 in k2374 in k2319 in loop in k2310 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:341: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2314(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* g450 in k2374 in k2319 in loop in k2310 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_fcall f_2382(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2382,NULL,3,t0,t1,t2);}
t3=C_i_cdr(t2);
/* extras.scm:354: out */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2064(t4,t1,t3,((C_word*)t0)[3]);}

/* k2797 in k2793 in k2764 in k2761 in pr in pp in generic-write in k1006 in k1003 */
static void C_ccall f_2799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:429: pp-list */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2928(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}

/* indent in pp in generic-write in k1006 in k1003 */
static void C_fcall f_2716(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2716,NULL,4,t0,t1,t2,t3);}
if(C_truep(t3)){
if(C_truep(C_i_lessp(t2,t3))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2732,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2739,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t5,C_fix(1),C_make_character(10));}
else{
t4=C_a_i_minus(&a,2,t2,t3);
/* extras.scm:414: spaces */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2683(t5,t1,t4,t3);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k2712 in spaces in pp in generic-write in k1006 in k1003 */
static void C_ccall f_2714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:407: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2064(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1243 in k1210 in loop in k1192 in k1169 in read-line in k1006 in k1003 */
static void C_ccall f_1245(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1245,2,t0,t1);}
if(C_truep(C_i_char_equalp(t1,C_make_character(10)))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1254,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:98: ##sys#read-char-0 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t2,((C_word*)t0)[5]);}
else{
/* extras.scm:100: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],C_fix(0),((C_word*)t0)[4]);}}

/* random in k1006 in k1003 */
static void C_ccall f_1149(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1149,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[10]);
t4=C_eqp(t2,C_fix(0));
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_fix(0));}
else{
t5=C_random_fixnum(t2);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k1252 in k1243 in k1210 in loop in k1192 in k1169 in read-line in k1006 in k1003 */
static void C_ccall f_1254(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:99: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],C_fix(0),((C_word*)t0)[4]);}

/* k1141 in randomize in k1006 in k1003 */
static void C_ccall f_1143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1143,2,t0,t1);}
t2=C_a_i_flonum_quotient(&a,2,t1,lf[7]);
/* extras.scm:60: ##sys#flo2fix */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(3,*((C_word*)lf[8]+1),((C_word*)t0)[2],t2);}

/* k1192 in k1169 in read-line in k1006 in k1003 */
static void C_ccall f_1194(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1194,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1199,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=((C_word*)t0)[4],a[7]=((C_word)li6),tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_1199(t7,((C_word*)t0)[5],C_fix(0));}

/* loop in k1192 in k1169 in read-line in k1006 in k1003 */
static void C_fcall f_1199(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1199,NULL,3,t0,t1,t2);}
t3=(C_truep(((C_word*)t0)[2])?C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t3)){
/* extras.scm:87: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),t1,((C_word*)((C_word*)t0)[3])[1],C_fix(0),t2);}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1212,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* extras.scm:88: ##sys#read-char-0 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t4,((C_word*)t0)[4]);}}

/* format in k3358 in k1006 in k1003 */
static void C_ccall f_3724(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr3r,(void*)f_3724r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3724r(t0,t1,t2,t3);}}

static void C_ccall f_3724r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(12);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3732,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=t2;
if(C_truep(t6)){
if(C_truep(C_booleanp(t2))){
C_apply(4,0,t1,*((C_word*)lf[127]+1),((C_word*)t4)[1]);}
else{
if(C_truep(C_i_stringp(t2))){
t7=C_a_i_cons(&a,2,t2,((C_word*)t4)[1]);
t8=C_set_block_item(t4,0,t7);
C_apply(4,0,t1,*((C_word*)lf[128]+1),((C_word*)t4)[1]);}
else{
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3757,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:649: output-port? */
t8=*((C_word*)lf[131]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}}}
else{
C_apply(4,0,t1,*((C_word*)lf[128]+1),((C_word*)t4)[1]);}}

/* k2374 in k2319 in loop in k2310 in k2252 in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2376(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2376,2,t0,t1);}
t2=t1;
t3=C_u_i_assq(((C_word*)t0)[2],lf[59]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2381,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2382,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word)li34),tmp=(C_word)a,a+=5,tmp);
/* extras.scm:343: g450 */
t6=t5;
f_2382(t6,t4,t3);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2400,a[2]=((C_word*)t0)[7],a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t6=C_fix(C_character_code(((C_word*)t0)[2]));
/* extras.scm:356: number->string */
t7=*((C_word*)lf[63]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,C_fix(16));}}

/* k3555 in loop in rec in k3391 in k3388 in fprintf0 in k3358 in k1006 in k1003 */
static void C_ccall f_3557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:612: ##sys#number->string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[55]+1)))(4,*((C_word*)lf[55]+1),((C_word*)t0)[2],t1,C_fix(8));}

/* k3551 in loop in rec in k3391 in k3388 in fprintf0 in k3358 in k1006 in k1003 */
static void C_ccall f_3553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:612: display */
t2=*((C_word*)lf[116]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* printf in k3358 in k1006 in k1003 */
static void C_ccall f_3712(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_3712r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3712r(t0,t1,t2,t3);}}

static void C_ccall f_3712r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
/* extras.scm:639: fprintf0 */
f_3386(t1,lf[127],*((C_word*)lf[20]+1),t2,t3);}

/* sprintf in k3358 in k1006 in k1003 */
static void C_ccall f_3718(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_3718r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3718r(t0,t1,t2,t3);}}

static void C_ccall f_3718r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
/* extras.scm:642: fprintf0 */
f_3386(t1,lf[128],C_SCHEME_FALSE,t2,t3);}

/* k3391 in k3388 in fprintf0 in k3358 in k1006 in k1003 */
static void C_ccall f_3393(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3393,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3396,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3424,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t5,a[5]=((C_word)li69),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_3424(t7,t3,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k3394 in k3391 in k3388 in fprintf0 in k3358 in k1006 in k1003 */
static void C_ccall f_3396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3396,2,t0,t1);}
t2=((C_word*)t0)[2];
if(C_truep(t2)){
t3=C_eqp(((C_word*)t0)[3],((C_word*)t0)[2]);
if(C_truep(t3)){
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3418,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:633: get-output-string */
t5=*((C_word*)lf[26]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}}
else{
/* extras.scm:631: get-output-string */
t3=*((C_word*)lf[26]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[4],((C_word*)t0)[3]);}}

/* k3388 in fprintf0 in k3358 in k1006 in k1003 */
static void C_fcall f_3390(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3390,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3393,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3695,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
/* extras.scm:585: ##sys#tty-port? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[125]+1)))(3,*((C_word*)lf[125]+1),t3,((C_word*)t0)[2]);}
else{
/* extras.scm:587: open-output-string */
t4=*((C_word*)lf[28]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}

/* fprintf in k3358 in k1006 in k1003 */
static void C_ccall f_3706(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_3706r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3706r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3706r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
/* extras.scm:636: fprintf0 */
f_3386(t1,lf[126],t2,t3,t4);}

/* k1169 in read-line in k1006 in k1003 */
static void C_fcall f_1171(C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1171,NULL,2,t0,t1);}
t2=t1;
t3=C_i_check_port_2(((C_word*)t0)[2],C_SCHEME_TRUE,C_SCHEME_TRUE,lf[11]);
t4=C_slot(((C_word*)t0)[2],C_fix(2));
t5=C_slot(t4,C_fix(8));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1181,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li5),tmp=(C_word)a,a+=5,tmp);
/* extras.scm:81: g117 */
t7=t6;
f_1181(t7,((C_word*)t0)[3],t5);}
else{
t6=(C_truep(t2)?t2:C_fix(256));
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1194,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t8,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:84: ##sys#make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(3,*((C_word*)lf[17]+1),t9,((C_word*)t8)[1]);}}

/* write-byte in k1006 in k1003 */
static void C_ccall f_1935(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_1935r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1935r(t0,t1,t2,t3);}}

static void C_ccall f_1935r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[20]+1):C_i_car(t3));
t6=C_i_check_exact_2(t2,lf[34]);
t7=C_i_check_port_2(t5,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[34]);
t8=C_make_character(C_unfix(t2));
/* extras.scm:258: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[21]+1)))(4,*((C_word*)lf[21]+1),t1,t8,t5);}

/* a2800 in k2761 in pr in pp in generic-write in k1006 in k1003 */
static void C_ccall f_2801(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2801,3,t0,t1,t2);}
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t3);
t5=C_i_string_length(t2);
t6=C_a_i_minus(&a,2,((C_word*)((C_word*)t0)[3])[1],t5);
t7=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_i_greaterp(((C_word*)((C_word*)t0)[3])[1],C_fix(0)));}

/* read-buffered in k1006 in k1003 */
static void C_ccall f_1741(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_1741r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1741r(t0,t1,t2);}}

static void C_ccall f_1741r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?*((C_word*)lf[2]+1):C_i_car(t2));
t5=C_i_check_port_2(t4,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[29]);
t6=C_slot(t4,C_fix(2));
t7=C_slot(t6,C_fix(9));
if(C_truep(t7)){
/* extras.scm:214: rb */
t8=t7;
((C_proc3)C_fast_retrieve_proc(t8))(3,t8,t1,t4);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,lf[30]);}}

/* g117 in k1169 in read-line in k1006 in k1003 */
static void C_fcall f_1181(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1181,NULL,3,t0,t1,t2);}
/* extras.scm:81: rl */
t3=t2;
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t1,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* def-port307 in write-string in k1006 in k1003 */
static void C_fcall f_1868(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1868,NULL,3,t0,t1,t2);}
/* extras.scm:236: body304 */
t3=((C_word*)t0)[2];
f_1830(t3,t1,t2,*((C_word*)lf[20]+1));}

/* k3765 in k3358 in k1006 in k1003 */
static void C_ccall f_3767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* def-n306 in write-string in k1006 in k1003 */
static void C_fcall f_1873(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1873,NULL,2,t0,t1);}
/* extras.scm:236: def-port307 */
t2=((C_word*)t0)[2];
f_1868(t2,t1,C_SCHEME_FALSE);}

/* k2895 in k2869 in k2842 in pp-expr in pp in generic-write in k1006 in k1003 */
static void C_ccall f_2897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_string_length(t1);
if(C_truep(C_i_greaterp(t2,C_fix(5)))){
/* extras.scm:445: pp-general */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3010(t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[7])[1]);}
else{
/* extras.scm:446: pp-call */
t3=((C_word*)((C_word*)t0)[8])[1];
f_2902(t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)((C_word*)t0)[7])[1]);}}

/* k2869 in k2842 in pp-expr in pp in generic-write in k1006 in k1003 */
static void C_ccall f_2871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2871,2,t0,t1);}
if(C_truep(t1)){
/* extras.scm:442: proc */
t2=t1;
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2897,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* extras.scm:443: ##sys#symbol->qualified-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[92]+1)))(3,*((C_word*)lf[92]+1),t2,((C_word*)t0)[9]);}}

/* k3470 in loop in rec in k3391 in k3388 in fprintf0 in k3358 in k1006 in k1003 */
static void C_ccall f_3472(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:630: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3459(t2,((C_word*)t0)[3]);}

/* k1452 in loop in read-string! in k1006 in k1003 */
static void C_ccall f_1454(C_word c,C_word t0,C_word t1){
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
t2=C_slot(((C_word*)t0)[2],C_fix(5));
t3=C_fixnum_plus(t2,t1);
t4=C_i_set_i_slot(((C_word*)t0)[2],C_fix(5),t3);
t5=C_eqp(t1,C_fix(0));
if(C_truep(t5)){
t6=((C_word*)t0)[3];
t7=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=C_i_not(((C_word*)t0)[5]);
t7=(C_truep(t6)?t6:C_fixnum_lessp(t1,((C_word*)t0)[5]));
if(C_truep(t7)){
t8=C_fixnum_plus(((C_word*)t0)[6],t1);
t9=(C_truep(((C_word*)t0)[5])?C_fixnum_difference(((C_word*)t0)[5],t1):C_SCHEME_FALSE);
t10=C_fixnum_plus(((C_word*)t0)[3],t1);
/* extras.scm:153: loop */
t11=((C_word*)((C_word*)t0)[7])[1];
f_1450(t11,((C_word*)t0)[4],t8,t9,t10);}
else{
t8=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_fixnum_plus(t1,((C_word*)t0)[3]));}}}

/* loop in read-string! in k1006 in k1003 */
static void C_fcall f_1450(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1450,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1454,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t1,a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* extras.scm:148: rdstring */
t6=((C_word*)t0)[4];
((C_proc6)C_fast_retrieve_proc(t6))(6,t6,t5,((C_word*)t0)[2],t3,((C_word*)t0)[5],t2);}

/* loop in k1777 in read-token in k1006 in k1003 */
static void C_fcall f_1784(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1784,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1788,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:226: ##sys#peek-char-0 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[32]+1)))(3,*((C_word*)lf[32]+1),t2,((C_word*)t0)[4]);}

/* k1786 in loop in k1777 in read-token in k1006 in k1003 */
static void C_ccall f_1788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1788,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1794,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_eofp(t1))){
t3=t2;
f_1794(2,t3,C_SCHEME_FALSE);}
else{
/* extras.scm:227: pred */
t3=((C_word*)t0)[6];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,t1);}}

/* k1792 in k1786 in loop in k1777 in read-token in k1006 in k1003 */
static void C_ccall f_1794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1794,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1797,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1804,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:229: ##sys#read-char-0 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t3,((C_word*)t0)[5]);}
else{
/* extras.scm:231: get-output-string */
t2=*((C_word*)lf[26]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}}

/* k1795 in k1792 in k1786 in loop in k1777 in read-token in k1006 in k1003 */
static void C_ccall f_1797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:230: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1784(t2,((C_word*)t0)[3]);}

/* fprintf0 in k3358 in k1006 in k1003 */
static void C_fcall f_3386(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3386,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3390,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t3)){
t7=t3;
t8=t2;
t9=t6;
f_3390(t9,C_i_check_port_2(t7,C_SCHEME_FALSE,C_SCHEME_TRUE,t8));}
else{
t7=t6;
f_3390(t7,C_SCHEME_UNDEFINED);}}

/* read-token in k1006 in k1003 */
static void C_ccall f_1769(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_1769r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1769r(t0,t1,t2,t3);}}

static void C_ccall f_1769r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(5);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[2]+1):C_i_car(t3));
t6=t5;
t7=C_i_check_port_2(t6,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[31]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1779,a[2]=t6,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:224: open-output-string */
t9=*((C_word*)lf[28]+1);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}

/* k2186 in wr-lst in wr in generic-write in k1006 in k1003 */
static void C_ccall f_2188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:306: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2083(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3377 in a3374 in k3371 in k3364 in pretty-print in k3358 in k1006 in k1003 */
static void C_ccall f_3379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* a3374 in k3371 in k3364 in pretty-print in k3358 in k1006 in k1003 */
static void C_ccall f_3375(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3375,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3379,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:574: display */
t4=*((C_word*)lf[116]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,((C_word*)t0)[2]);}

/* k3371 in k3364 in pretty-print in k3358 in k1006 in k1003 */
static void C_ccall f_3373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3373,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3375,a[2]=((C_word*)t0)[2],a[3]=((C_word)li64),tmp=(C_word)a,a+=4,tmp);
/* extras.scm:574: generic-write */
f_1960(((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_FALSE,t1,t2);}

/* k1777 in read-token in k1006 in k1003 */
static void C_ccall f_1779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1779,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1784,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word)li20),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_1784(t6,((C_word*)t0)[4]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[225] = {
{"f_2481:extras_2escm",(void*)f_2481},
{"f_1918:extras_2escm",(void*)f_1918},
{"f_2485:extras_2escm",(void*)f_2485},
{"f_2293:extras_2escm",(void*)f_2293},
{"f_2470:extras_2escm",(void*)f_2470},
{"f_2478:extras_2escm",(void*)f_2478},
{"f_2280:extras_2escm",(void*)f_2280},
{"f_1908:extras_2escm",(void*)f_1908},
{"f_1963:extras_2escm",(void*)f_1963},
{"f_1960:extras_2escm",(void*)f_1960},
{"f_1336:extras_2escm",(void*)f_1336},
{"f_1991:extras_2escm",(void*)f_1991},
{"f_3601:extras_2escm",(void*)f_3601},
{"f_1314:extras_2escm",(void*)f_1314},
{"f_1349:extras_2escm",(void*)f_1349},
{"f_1326:extras_2escm",(void*)f_1326},
{"f_3523:extras_2escm",(void*)f_3523},
{"f_2542:extras_2escm",(void*)f_2542},
{"f_3510:extras_2escm",(void*)f_3510},
{"f_2129:extras_2escm",(void*)f_2129},
{"f_2521:extras_2escm",(void*)f_2521},
{"f_2528:extras_2escm",(void*)f_2528},
{"f_1081:extras_2escm",(void*)f_1081},
{"f_1641:extras_2escm",(void*)f_1641},
{"f_3637:extras_2escm",(void*)f_3637},
{"f_2131:extras_2escm",(void*)f_2131},
{"f_2505:extras_2escm",(void*)f_2505},
{"f_2635:extras_2escm",(void*)f_2635},
{"f_2638:extras_2escm",(void*)f_2638},
{"f_2512:extras_2escm",(void*)f_2512},
{"f_2649:extras_2escm",(void*)f_2649},
{"f_3540:extras_2escm",(void*)f_3540},
{"f_3440:extras_2escm",(void*)f_3440},
{"f_2235:extras_2escm",(void*)f_2235},
{"f_2611:extras_2escm",(void*)f_2611},
{"f_2617:extras_2escm",(void*)f_2617},
{"f_1601:extras_2escm",(void*)f_1601},
{"f_2231:extras_2escm",(void*)f_2231},
{"f_3536:extras_2escm",(void*)f_3536},
{"f_3433:extras_2escm",(void*)f_3433},
{"f_1564:extras_2escm",(void*)f_1564},
{"f_2622:extras_2escm",(void*)f_2622},
{"f_1420:extras_2escm",(void*)f_1420},
{"f_3424:extras_2escm",(void*)f_3424},
{"f_1432:extras_2escm",(void*)f_1432},
{"f_2159:extras_2escm",(void*)f_2159},
{"f_2153:extras_2escm",(void*)f_2153},
{"f_3418:extras_2escm",(void*)f_3418},
{"f_2601:extras_2escm",(void*)f_2601},
{"f_3347:extras_2escm",(void*)f_3347},
{"f_2104:extras_2escm",(void*)f_2104},
{"f_2254:extras_2escm",(void*)f_2254},
{"f_3231:extras_2escm",(void*)f_3231},
{"f_2400:extras_2escm",(void*)f_2400},
{"f_1031:extras_2escm",(void*)f_1031},
{"f_2404:extras_2escm",(void*)f_2404},
{"f_2113:extras_2escm",(void*)f_2113},
{"f_1039:extras_2escm",(void*)f_1039},
{"f_3221:extras_2escm",(void*)f_3221},
{"f_2344:extras_2escm",(void*)f_2344},
{"f_2348:extras_2escm",(void*)f_2348},
{"f_1404:extras_2escm",(void*)f_1404},
{"f_2312:extras_2escm",(void*)f_2312},
{"f_2314:extras_2escm",(void*)f_2314},
{"f_3212:extras_2escm",(void*)f_3212},
{"f_2179:extras_2escm",(void*)f_2179},
{"f_2175:extras_2escm",(void*)f_2175},
{"f_3206:extras_2escm",(void*)f_3206},
{"f_2321:extras_2escm",(void*)f_2321},
{"f_2943:extras_2escm",(void*)f_2943},
{"f_2025:extras_2escm",(void*)f_2025},
{"f_2443:extras_2escm",(void*)f_2443},
{"f_2447:extras_2escm",(void*)f_2447},
{"f_2261:extras_2escm",(void*)f_2261},
{"f_2412:extras_2escm",(void*)f_2412},
{"f_3102:extras_2escm",(void*)f_3102},
{"f_2928:extras_2escm",(void*)f_2928},
{"f_2926:extras_2escm",(void*)f_2926},
{"f_2273:extras_2escm",(void*)f_2273},
{"f_2270:extras_2escm",(void*)f_2270},
{"f_2423:extras_2escm",(void*)f_2423},
{"f_3130:extras_2escm",(void*)f_3130},
{"f_2932:extras_2escm",(void*)f_2932},
{"f_2937:extras_2escm",(void*)f_2937},
{"toplevel:extras_2escm",(void*)C_extras_toplevel},
{"f_3168:extras_2escm",(void*)f_3168},
{"f_3162:extras_2escm",(void*)f_3162},
{"f_2578:extras_2escm",(void*)f_2578},
{"f_3008:extras_2escm",(void*)f_3008},
{"f_2902:extras_2escm",(void*)f_2902},
{"f_2906:extras_2escm",(void*)f_2906},
{"f_3004:extras_2escm",(void*)f_3004},
{"f_3695:extras_2escm",(void*)f_3695},
{"f_2064:extras_2escm",(void*)f_2064},
{"f_2093:extras_2escm",(void*)f_2093},
{"f_3115:extras_2escm",(void*)f_3115},
{"f_3038:extras_2escm",(void*)f_3038},
{"f_3034:extras_2escm",(void*)f_3034},
{"f_2560:extras_2escm",(void*)f_2560},
{"f_1041:extras_2escm",(void*)f_1041},
{"f_3148:extras_2escm",(void*)f_3148},
{"f_2083:extras_2escm",(void*)f_2083},
{"f_2086:extras_2escm",(void*)f_2086},
{"f_2750:extras_2escm",(void*)f_2750},
{"f_2594:extras_2escm",(void*)f_2594},
{"f_3174:extras_2escm",(void*)f_3174},
{"f_2588:extras_2escm",(void*)f_2588},
{"f_3010:extras_2escm",(void*)f_3010},
{"f_3013:extras_2escm",(void*)f_3013},
{"f_1212:extras_2escm",(void*)f_1212},
{"f_2581:extras_2escm",(void*)f_2581},
{"f_1061:extras_2escm",(void*)f_1061},
{"f_2855:extras_2escm",(void*)f_2855},
{"f_2970:extras_2escm",(void*)f_2970},
{"f_1509:extras_2escm",(void*)f_1509},
{"f_3156:extras_2escm",(void*)f_3156},
{"f_3150:extras_2escm",(void*)f_3150},
{"f_3595:extras_2escm",(void*)f_3595},
{"f_3592:extras_2escm",(void*)f_3592},
{"f_3077:extras_2escm",(void*)f_3077},
{"f_3073:extras_2escm",(void*)f_3073},
{"f_3757:extras_2escm",(void*)f_3757},
{"f_2964:extras_2escm",(void*)f_2964},
{"f_1005:extras_2escm",(void*)f_1005},
{"f_2074:extras_2escm",(void*)f_2074},
{"f_2996:extras_2escm",(void*)f_2996},
{"f_2837:extras_2escm",(void*)f_2837},
{"f_3180:extras_2escm",(void*)f_3180},
{"f_3186:extras_2escm",(void*)f_3186},
{"f_1008:extras_2escm",(void*)f_1008},
{"f_2992:extras_2escm",(void*)f_2992},
{"f_1010:extras_2escm",(void*)f_1010},
{"f_2844:extras_2escm",(void*)f_2844},
{"f_3574:extras_2escm",(void*)f_3574},
{"f_3052:extras_2escm",(void*)f_3052},
{"f_3570:extras_2escm",(void*)f_3570},
{"f_3732:extras_2escm",(void*)f_3732},
{"f_1693:extras_2escm",(void*)f_1693},
{"f_1699:extras_2escm",(void*)f_1699},
{"f_1825:extras_2escm",(void*)f_1825},
{"f_2671:extras_2escm",(void*)f_2671},
{"f_1263:extras_2escm",(void*)f_1263},
{"f_1669:extras_2escm",(void*)f_1669},
{"f_1129:extras_2escm",(void*)f_1129},
{"f_1830:extras_2escm",(void*)f_1830},
{"f_1125:extras_2escm",(void*)f_1125},
{"f_1277:extras_2escm",(void*)f_1277},
{"f_3459:extras_2escm",(void*)f_3459},
{"f_1847:extras_2escm",(void*)f_1847},
{"f_1285:extras_2escm",(void*)f_1285},
{"f_1681:extras_2escm",(void*)f_1681},
{"f_1513:extras_2escm",(void*)f_1513},
{"f_1516:extras_2escm",(void*)f_1516},
{"f_3091:extras_2escm",(void*)f_3091},
{"f_1850:extras_2escm",(void*)f_1850},
{"f_2683:extras_2escm",(void*)f_2683},
{"f_2680:extras_2escm",(void*)f_2680},
{"f_1657:extras_2escm",(void*)f_1657},
{"f_1654:extras_2escm",(void*)f_1654},
{"f_2763:extras_2escm",(void*)f_2763},
{"f_2779:extras_2escm",(void*)f_2779},
{"f_3369:extras_2escm",(void*)f_3369},
{"f_3366:extras_2escm",(void*)f_3366},
{"f_2732:extras_2escm",(void*)f_2732},
{"f_3362:extras_2escm",(void*)f_3362},
{"f_3360:extras_2escm",(void*)f_3360},
{"f_2739:extras_2escm",(void*)f_2739},
{"f_3497:extras_2escm",(void*)f_3497},
{"f_2352:extras_2escm",(void*)f_2352},
{"f_2795:extras_2escm",(void*)f_2795},
{"f_2664:extras_2escm",(void*)f_2664},
{"f_2661:extras_2escm",(void*)f_2661},
{"f_2766:extras_2escm",(void*)f_2766},
{"f_1677:extras_2escm",(void*)f_1677},
{"f_1672:extras_2escm",(void*)f_1672},
{"f_1161:extras_2escm",(void*)f_1161},
{"f_3351:extras_2escm",(void*)f_3351},
{"f_2707:extras_2escm",(void*)f_2707},
{"f_1804:extras_2escm",(void*)f_1804},
{"f_2381:extras_2escm",(void*)f_2381},
{"f_2382:extras_2escm",(void*)f_2382},
{"f_2799:extras_2escm",(void*)f_2799},
{"f_2716:extras_2escm",(void*)f_2716},
{"f_2714:extras_2escm",(void*)f_2714},
{"f_1245:extras_2escm",(void*)f_1245},
{"f_1149:extras_2escm",(void*)f_1149},
{"f_1254:extras_2escm",(void*)f_1254},
{"f_1143:extras_2escm",(void*)f_1143},
{"f_1194:extras_2escm",(void*)f_1194},
{"f_1199:extras_2escm",(void*)f_1199},
{"f_3724:extras_2escm",(void*)f_3724},
{"f_2376:extras_2escm",(void*)f_2376},
{"f_3557:extras_2escm",(void*)f_3557},
{"f_3553:extras_2escm",(void*)f_3553},
{"f_3712:extras_2escm",(void*)f_3712},
{"f_3718:extras_2escm",(void*)f_3718},
{"f_3393:extras_2escm",(void*)f_3393},
{"f_3396:extras_2escm",(void*)f_3396},
{"f_3390:extras_2escm",(void*)f_3390},
{"f_3706:extras_2escm",(void*)f_3706},
{"f_1171:extras_2escm",(void*)f_1171},
{"f_1935:extras_2escm",(void*)f_1935},
{"f_2801:extras_2escm",(void*)f_2801},
{"f_1741:extras_2escm",(void*)f_1741},
{"f_1181:extras_2escm",(void*)f_1181},
{"f_1868:extras_2escm",(void*)f_1868},
{"f_3767:extras_2escm",(void*)f_3767},
{"f_1873:extras_2escm",(void*)f_1873},
{"f_2897:extras_2escm",(void*)f_2897},
{"f_2871:extras_2escm",(void*)f_2871},
{"f_3472:extras_2escm",(void*)f_3472},
{"f_1454:extras_2escm",(void*)f_1454},
{"f_1450:extras_2escm",(void*)f_1450},
{"f_1784:extras_2escm",(void*)f_1784},
{"f_1788:extras_2escm",(void*)f_1788},
{"f_1794:extras_2escm",(void*)f_1794},
{"f_1797:extras_2escm",(void*)f_1797},
{"f_3386:extras_2escm",(void*)f_3386},
{"f_1769:extras_2escm",(void*)f_1769},
{"f_2188:extras_2escm",(void*)f_2188},
{"f_3379:extras_2escm",(void*)f_3379},
{"f_3375:extras_2escm",(void*)f_3375},
{"f_3373:extras_2escm",(void*)f_3373},
{"f_1779:extras_2escm",(void*)f_1779},
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
o|eliminated procedure checks: 37 
o|specializations:
o|  11 (eqv? (not float) *)
o|  1 (current-output-port)
o|  4 (make-string fixnum char)
o|  1 (assq * (list-of pair))
o|  5 (car pair)
o|  13 (cdr pair)
o|  1 (make-string fixnum)
o|  4 (##sys#check-output-port * * *)
o|  24 (eqv? * (not float))
o|  7 (##sys#check-input-port * * *)
o|  1 (fp/ float float)
o|Removed `not' forms: 5 
o|inlining procedure: k1043 
o|inlining procedure: k1043 
o|inlining procedure: k1070 
o|inlining procedure: k1070 
o|inlining procedure: k1076 
o|inlining procedure: k1076 
o|substituted constant variable: a1144 
o|inlining procedure: k1154 
o|inlining procedure: k1154 
o|substituted constant variable: a1173 
o|substituted constant variable: a1174 
o|inlining procedure: k1178 
o|inlining procedure: k1178 
o|inlining procedure: k1201 
o|inlining procedure: k1201 
o|inlining procedure: k1219 
o|inlining procedure: k1219 
o|inlining procedure: k1228 
o|inlining procedure: k1228 
o|inlining procedure: k1246 
o|inlining procedure: k1246 
o|substituted constant variable: a1287 
o|substituted constant variable: a1289 
o|inlining procedure: k1297 
o|inlining procedure: k1297 
o|inlining procedure: k1338 
o|inlining procedure: k1338 
o|inlining procedure: k1370 
o|substituted constant variable: a1380 
o|substituted constant variable: a1381 
o|inlining procedure: k1370 
o|substituted constant variable: a1410 
o|substituted constant variable: a1411 
o|inlining procedure: k1434 
o|inlining procedure: k1434 
o|inlining procedure: k1458 
o|inlining procedure: k1458 
o|inlining procedure: k1517 
o|inlining procedure: k1517 
o|substituted constant variable: a1579 
o|substituted constant variable: a1580 
o|substituted constant variable: a1644 
o|substituted constant variable: a1645 
o|inlining procedure: k1646 
o|inlining procedure: k1646 
o|inlining procedure: k1682 
o|inlining procedure: k1682 
o|substituted constant variable: a1697 
o|inlining procedure: k1710 
o|inlining procedure: k1710 
o|substituted constant variable: a1747 
o|substituted constant variable: a1748 
o|inlining procedure: k1752 
o|inlining procedure: k1752 
o|substituted constant variable: a1775 
o|substituted constant variable: a1776 
o|inlining procedure: k1789 
o|inlining procedure: k1789 
o|contracted procedure: k1808 
o|substituted constant variable: a1833 
o|substituted constant variable: a1834 
o|inlining procedure: k1845 
o|inlining procedure: k1845 
o|inlining procedure: k1878 
o|inlining procedure: k1878 
o|substituted constant variable: a1914 
o|substituted constant variable: a1915 
o|inlining procedure: k1919 
o|inlining procedure: k1919 
o|substituted constant variable: a1944 
o|substituted constant variable: a1945 
o|inlining procedure: k1983 
o|contracted procedure: "(extras.scm:279) length1?369" 
o|inlining procedure: k1968 
o|inlining procedure: k1968 
o|inlining procedure: k1983 
o|inlining procedure: k1998 
o|inlining procedure: k1998 
o|substituted constant variable: a2011 
o|substituted constant variable: a2013 
o|substituted constant variable: a2015 
o|substituted constant variable: a2017 
o|inlining procedure: k2031 
o|inlining procedure: k2031 
o|inlining procedure: k2043 
o|inlining procedure: k2043 
o|substituted constant variable: a2056 
o|substituted constant variable: a2058 
o|substituted constant variable: a2060 
o|substituted constant variable: a2062 
o|inlining procedure: k2066 
o|inlining procedure: k2066 
o|inlining procedure: k2088 
o|inlining procedure: "(extras.scm:300) read-macro-body363" 
o|inlining procedure: k2088 
o|inlining procedure: k2115 
o|contracted procedure: k2136 
o|inlining procedure: k2133 
o|inlining procedure: k2160 
o|inlining procedure: k2160 
o|inlining procedure: k2133 
o|inlining procedure: k2115 
o|inlining procedure: k2192 
o|inlining procedure: k2192 
o|inlining procedure: k2210 
o|inlining procedure: k2210 
o|inlining procedure: k2236 
o|inlining procedure: k2246 
o|inlining procedure: k2246 
o|inlining procedure: k2236 
o|inlining procedure: k2262 
o|inlining procedure: k2262 
o|inlining procedure: k2294 
o|inlining procedure: k2316 
o|inlining procedure: k2353 
o|substituted constant variable: a2378 
o|inlining procedure: k2379 
o|inlining procedure: k2379 
o|inlining procedure: k2353 
o|inlining procedure: k2316 
o|inlining procedure: k2294 
o|inlining procedure: k2461 
o|substituted constant variable: a2471 
o|inlining procedure: k2461 
o|inlining procedure: k2497 
o|inlining procedure: k2497 
o|inlining procedure: k2530 
o|inlining procedure: k2530 
o|substituted constant variable: a2543 
o|inlining procedure: k2545 
o|inlining procedure: k2545 
o|inlining procedure: k2561 
o|inlining procedure: k2561 
o|inlining procedure: k2589 
o|inlining procedure: k2589 
o|inlining procedure: k2624 
o|inlining procedure: k2624 
o|inlining procedure: k2656 
o|inlining procedure: k2656 
o|inlining procedure: k2685 
o|inlining procedure: k2685 
o|inlining procedure: k2718 
o|inlining procedure: k2727 
o|inlining procedure: k2727 
o|substituted constant variable: a2740 
o|substituted constant variable: a2741 
o|inlining procedure: k2718 
o|inlining procedure: k2752 
o|inlining procedure: k2780 
o|inlining procedure: k2780 
o|substituted constant variable: max-expr-width504 
o|inlining procedure: k2752 
o|inlining procedure: k2839 
o|inlining procedure: "(extras.scm:434) read-macro-body363" 
o|inlining procedure: k2839 
o|inlining procedure: k2872 
o|inlining procedure: k2872 
o|substituted constant variable: max-call-head-width503 
o|inlining procedure: k2907 
o|inlining procedure: k2907 
o|inlining procedure: k2945 
o|inlining procedure: k2977 
o|inlining procedure: k2977 
o|inlining procedure: k2945 
o|inlining procedure: k3015 
o|inlining procedure: k3015 
o|inlining procedure: k3054 
o|inlining procedure: k3054 
o|inlining procedure: k3103 
o|substituted constant variable: indent-general502 
o|inlining procedure: k3103 
o|substituted constant variable: indent-general502 
o|inlining procedure: k3223 
o|inlining procedure: k3223 
o|inlining procedure: k3241 
o|inlining procedure: k3241 
o|inlining procedure: k3253 
o|inlining procedure: k3253 
o|inlining procedure: k3268 
o|inlining procedure: k3268 
o|substituted constant variable: a3281 
o|substituted constant variable: a3283 
o|substituted constant variable: a3285 
o|substituted constant variable: a3290 
o|substituted constant variable: a3292 
o|substituted constant variable: a3294 
o|substituted constant variable: a3296 
o|substituted constant variable: a3301 
o|substituted constant variable: a3303 
o|inlining procedure: k3307 
o|inlining procedure: k3307 
o|inlining procedure: k3319 
o|inlining procedure: k3319 
o|substituted constant variable: a3326 
o|substituted constant variable: a3328 
o|substituted constant variable: a3330 
o|substituted constant variable: a3332 
o|substituted constant variable: a3334 
o|inlining procedure: k3338 
o|substituted constant variable: a3352 
o|substituted constant variable: a3353 
o|inlining procedure: k3338 
o|contracted procedure: k3400 
o|inlining procedure: k3397 
o|contracted procedure: k3409 
o|inlining procedure: k3397 
o|inlining procedure: k3442 
o|inlining procedure: k3442 
o|inlining procedure: k3461 
o|inlining procedure: k3461 
o|inlining procedure: k3485 
o|inlining procedure: k3485 
o|inlining procedure: k3511 
o|inlining procedure: k3511 
o|inlining procedure: k3541 
o|inlining procedure: k3541 
o|inlining procedure: k3575 
o|inlining procedure: k3575 
o|inlining procedure: k3602 
o|inlining procedure: k3602 
o|inlining procedure: k3623 
o|inlining procedure: k3639 
o|inlining procedure: k3639 
o|inlining procedure: k3623 
o|substituted constant variable: a3663 
o|substituted constant variable: a3665 
o|substituted constant variable: a3667 
o|substituted constant variable: a3669 
o|substituted constant variable: a3671 
o|substituted constant variable: a3673 
o|substituted constant variable: a3675 
o|substituted constant variable: a3677 
o|substituted constant variable: a3679 
o|substituted constant variable: a3681 
o|substituted constant variable: a3683 
o|substituted constant variable: a3703 
o|contracted procedure: k3733 
o|inlining procedure: k3730 
o|inlining procedure: k3742 
o|propagated global variable: r37433956 sprintf 
o|inlining procedure: k3742 
o|inlining procedure: k3730 
o|propagated global variable: r37313958 sprintf 
o|replaced variables: 576 
o|removed binding forms: 131 
o|substituted constant variable: r10713771 
o|converted assignments to bindings: (slurp84) 
o|substituted constant variable: r11553774 
o|substituted constant variable: r12983787 
o|converted assignments to bindings: (doread145) 
o|substituted constant variable: r14353792 
o|substituted constant variable: r17533813 
o|substituted constant variable: r19693826 
o|substituted constant variable: r19843827 
o|removed side-effect free assignment to unused variable: read-macro-body363 
o|substituted constant variable: r20323830 
o|substituted constant variable: r20443832 
o|substituted constant variable: r20673835 
o|substituted constant variable: r22473854 
o|substituted constant variable: r22473854 
o|substituted constant variable: r22473856 
o|substituted constant variable: r22473856 
o|substituted constant variable: r25313875 
o|substituted constant variable: r25313875 
o|substituted constant variable: r25313877 
o|substituted constant variable: r25313877 
o|substituted constant variable: r27283893 
o|substituted constant variable: r27193894 
o|substituted constant variable: r29083909 
o|substituted constant variable: r29463913 
o|removed side-effect free assignment to unused variable: indent-general502 
o|removed side-effect free assignment to unused variable: max-call-head-width503 
o|removed side-effect free assignment to unused variable: max-expr-width504 
o|inlining procedure: k3470 
o|inlining procedure: k3730 
o|propagated global variable: r37314019 printf 
o|propagated global variable: r37314019 printf 
o|inlining procedure: k3730 
o|propagated global variable: r37314021 sprintf 
o|propagated global variable: r37314021 sprintf 
o|inlining procedure: k3730 
o|propagated global variable: r37314023 fprintf 
o|propagated global variable: r37314023 fprintf 
o|propagated global variable: a37293959 sprintf 
o|simplifications: ((let . 2)) 
o|replaced variables: 13 
o|removed binding forms: 586 
o|inlining procedure: k3191 
o|inlining procedure: k3693 
o|replaced variables: 2 
o|removed binding forms: 53 
o|substituted constant variable: r31924047 
o|substituted constant variable: r36944054 
o|replaced variables: 2 
o|removed binding forms: 2 
o|removed conditional forms: 1 
o|removed binding forms: 4 
o|simplifications: ((if . 52) (##core#call . 274)) 
o|  call simplifications:
o|    apply	5
o|    char-upcase
o|    char-whitespace?	2
o|    ##sys#check-list
o|    <
o|    >	5
o|    -	5
o|    vector?	2
o|    boolean?	2
o|    symbol?	3
o|    procedure?
o|    char?
o|    ##sys#generic-structure?
o|    ##sys#byte
o|    fx>	2
o|    string-ref
o|    char<?	2
o|    string-length	4
o|    +	12
o|    integer->char
o|    char->integer	3
o|    ##sys#size	4
o|    fx<=
o|    ##sys#setislot
o|    not	2
o|    fx<	7
o|    ##sys#check-string	4
o|    string?	3
o|    fx-	5
o|    pair?	17
o|    cadr	3
o|    ##sys#slot	20
o|    char=?	4
o|    fx=
o|    eq?	45
o|    ##sys#check-exact	7
o|    car	23
o|    null?	28
o|    cdr	10
o|    eof-object?	7
o|    fx>=	5
o|    fx+	16
o|    cons	5
o|contracted procedure: k1118 
o|contracted procedure: k1012 
o|contracted procedure: k1112 
o|contracted procedure: k1015 
o|contracted procedure: k1106 
o|contracted procedure: k1018 
o|contracted procedure: k1100 
o|contracted procedure: k1021 
o|contracted procedure: k1094 
o|contracted procedure: k1024 
o|contracted procedure: k1088 
o|contracted procedure: k1027 
o|contracted procedure: k1046 
o|contracted procedure: k1049 
o|contracted procedure: k1063 
o|contracted procedure: k1067 
o|contracted procedure: k1130 
o|contracted procedure: k1133 
o|contracted procedure: k1151 
o|contracted procedure: k1157 
o|contracted procedure: k1163 
o|contracted procedure: k1166 
o|contracted procedure: k1294 
o|contracted procedure: k1175 
o|contracted procedure: k1189 
o|contracted procedure: k1204 
o|contracted procedure: k1216 
o|contracted procedure: k1222 
o|contracted procedure: k1231 
o|contracted procedure: k1240 
o|contracted procedure: k1249 
o|contracted procedure: k1268 
o|contracted procedure: k1271 
o|contracted procedure: k1279 
o|contracted procedure: k1307 
o|contracted procedure: k1300 
o|contracted procedure: k1397 
o|contracted procedure: k1316 
o|contracted procedure: k1391 
o|contracted procedure: k1319 
o|contracted procedure: k1385 
o|contracted procedure: k1322 
o|contracted procedure: k1332 
o|contracted procedure: k1341 
o|contracted procedure: k1353 
o|contracted procedure: k1363 
o|contracted procedure: k1367 
o|contracted procedure: k1373 
o|contracted procedure: k1406 
o|contracted procedure: k1412 
o|contracted procedure: k1425 
o|contracted procedure: k1415 
o|contracted procedure: k1437 
o|contracted procedure: k1560 
o|contracted procedure: k1440 
o|contracted procedure: k1502 
o|contracted procedure: k1498 
o|contracted procedure: k1455 
o|contracted procedure: k1461 
o|contracted procedure: k1467 
o|contracted procedure: k1470 
o|contracted procedure: k1477 
o|contracted procedure: k1481 
o|contracted procedure: k1485 
o|contracted procedure: k1520 
o|contracted procedure: k1526 
o|contracted procedure: k1529 
o|contracted procedure: k1536 
o|contracted procedure: k1540 
o|contracted procedure: k1544 
o|contracted procedure: k1556 
o|contracted procedure: k1634 
o|contracted procedure: k1566 
o|contracted procedure: k1628 
o|contracted procedure: k1569 
o|contracted procedure: k1622 
o|contracted procedure: k1572 
o|contracted procedure: k1616 
o|contracted procedure: k1575 
o|contracted procedure: k1581 
o|contracted procedure: k1584 
o|contracted procedure: k1587 
o|contracted procedure: k1593 
o|contracted procedure: k1603 
o|contracted procedure: k1610 
o|contracted procedure: k1649 
o|contracted procedure: k1661 
o|contracted procedure: k1685 
o|contracted procedure: k1734 
o|contracted procedure: k1701 
o|contracted procedure: k1728 
o|contracted procedure: k1704 
o|contracted procedure: k1722 
o|contracted procedure: k1707 
o|contracted procedure: k1716 
o|contracted procedure: k1710 
o|contracted procedure: k1762 
o|contracted procedure: k1743 
o|contracted procedure: k1759 
o|contracted procedure: k1749 
o|contracted procedure: k1818 
o|contracted procedure: k1771 
o|contracted procedure: k1815 
o|contracted procedure: k1827 
o|contracted procedure: k1835 
o|contracted procedure: k1862 
o|contracted procedure: k1838 
o|contracted procedure: k1858 
o|contracted procedure: k1881 
o|contracted procedure: k1887 
o|contracted procedure: k1894 
o|contracted procedure: k1900 
o|contracted procedure: k1928 
o|contracted procedure: k1910 
o|contracted procedure: k1922 
o|contracted procedure: k1953 
o|contracted procedure: k1937 
o|contracted procedure: k1940 
o|contracted procedure: k1950 
o|contracted procedure: k1979 
o|contracted procedure: k1986 
o|contracted procedure: k1971 
o|contracted procedure: k1995 
o|contracted procedure: k2001 
o|contracted procedure: k2027 
o|contracted procedure: k2034 
o|contracted procedure: k2040 
o|contracted procedure: k2046 
o|contracted procedure: k2052 
o|contracted procedure: k2079 
o|contracted procedure: k2098 
o|contracted procedure: k2118 
o|contracted procedure: k2142 
o|contracted procedure: k2163 
o|contracted procedure: k2195 
o|contracted procedure: k2204 
o|contracted procedure: k2213 
o|contracted procedure: k2222 
o|contracted procedure: k2239 
o|contracted procedure: k2265 
o|contracted procedure: k2284 
o|contracted procedure: k2297 
o|contracted procedure: k2322 
o|contracted procedure: k2328 
o|contracted procedure: k2331 
o|contracted procedure: k2338 
o|contracted procedure: k2356 
o|contracted procedure: k2359 
o|contracted procedure: k2366 
o|contracted procedure: k2370 
o|contracted procedure: k2388 
o|contracted procedure: k2413 
o|contracted procedure: k2406 
o|contracted procedure: k2417 
o|contracted procedure: k2428 
o|contracted procedure: k2452 
o|contracted procedure: k2458 
o|contracted procedure: k2473 
o|contracted procedure: k2491 
o|contracted procedure: k2500 
o|contracted procedure: k2516 
o|contracted procedure: k2533 
o|contracted procedure: k2676 
o|contracted procedure: k2564 
o|contracted procedure: k2573 
o|contracted procedure: k2603 
o|contracted procedure: k2612 
o|contracted procedure: k2627 
o|contracted procedure: k2630 
o|contracted procedure: k2643 
o|contracted procedure: k2650 
o|contracted procedure: k2688 
o|contracted procedure: k2694 
o|contracted procedure: k2701 
o|contracted procedure: k2724 
o|contracted procedure: k2746 
o|contracted procedure: k2755 
o|contracted procedure: k2758 
o|contracted procedure: k2770 
o|contracted procedure: k2783 
o|contracted procedure: k2804 
o|contracted procedure: k2815 
o|contracted procedure: k2808 
o|contracted procedure: k2827 
o|contracted procedure: k2823 
o|contracted procedure: k2819 
o|contracted procedure: k2849 
o|contracted procedure: k2860 
o|contracted procedure: k2866 
o|contracted procedure: k2891 
o|contracted procedure: k2881 
o|contracted procedure: k2916 
o|contracted procedure: k2920 
o|contracted procedure: k2951 
o|contracted procedure: k2971 
o|contracted procedure: k2955 
o|contracted procedure: k2980 
o|contracted procedure: k2998 
o|contracted procedure: k3018 
o|contracted procedure: k3021 
o|contracted procedure: k3039 
o|contracted procedure: k3025 
o|contracted procedure: k3057 
o|contracted procedure: k3060 
o|contracted procedure: k3078 
o|contracted procedure: k3064 
o|contracted procedure: k3096 
o|contracted procedure: k3106 
o|contracted procedure: k3109 
o|contracted procedure: k3120 
o|contracted procedure: k3124 
o|contracted procedure: k3135 
o|contracted procedure: k3139 
o|contracted procedure: k3188 
o|contracted procedure: k3197 
o|contracted procedure: k3191 
o|contracted procedure: k3226 
o|contracted procedure: k3235 
o|contracted procedure: k3238 
o|contracted procedure: k3244 
o|contracted procedure: k3250 
o|contracted procedure: k3256 
o|contracted procedure: k3259 
o|contracted procedure: k3265 
o|contracted procedure: k3271 
o|contracted procedure: k3277 
o|contracted procedure: k3304 
o|contracted procedure: k3310 
o|contracted procedure: k3316 
o|contracted procedure: k3380 
o|contracted procedure: k3420 
o|contracted procedure: k3426 
o|contracted procedure: k3429 
o|contracted procedure: k3436 
o|contracted procedure: k3448 
o|contracted procedure: k3452 
o|contracted procedure: k3464 
o|contracted procedure: k3687 
o|contracted procedure: k3476 
o|contracted procedure: k3482 
o|contracted procedure: k3488 
o|contracted procedure: k3501 
o|contracted procedure: k3514 
o|contracted procedure: k3527 
o|contracted procedure: k3544 
o|contracted procedure: k3561 
o|contracted procedure: k3578 
o|contracted procedure: k3587 
o|contracted procedure: k3596 
o|contracted procedure: k3605 
o|contracted procedure: k3614 
o|contracted procedure: k3617 
o|contracted procedure: k3626 
o|contracted procedure: k3642 
o|contracted procedure: k3653 
o|contracted procedure: k3739 
o|contracted procedure: k3745 
o|contracted procedure: k3749 
o|contracted procedure: k3759 
o|simplifications: ((let . 55)) 
o|removed binding forms: 259 
o|inlining procedure: k1127 
o|inlining procedure: k1590 
o|inlining procedure: k1590 
o|replaced variables: 130 
o|simplifications: ((if . 1)) 
o|replaced variables: 2 
o|removed binding forms: 58 
o|removed binding forms: 1 
o|direct leaf routine/allocation: read-macro-prefix364 0 
o|direct leaf routine/allocation: fetch699 0 
o|contracted procedure: "(extras.scm:300) k2106" 
o|contracted procedure: "(extras.scm:435) k2857" 
o|contracted procedure: "(extras.scm:604) k3467" 
o|contracted procedure: "(extras.scm:606) k3479" 
o|contracted procedure: "(extras.scm:624) k3633" 
o|contracted procedure: "(extras.scm:626) k3649" 
o|removed binding forms: 6 
o|direct leaf routine/allocation: skip722 0 
o|inlining procedure: k3470 
o|converted assignments to bindings: (skip722) 
o|simplifications: ((let . 1)) 
o|customizable procedures: (fprintf0 k3388 rec694 next700 loop705 k3364 pp367 k3229 tail1564 tail3566 tail2565 indent486 loop546 pp-down491 style505 pp-call489 pp-general492 pr487 generic-write pp-list490 spaces485 doloop470471 g461462 k2319 g450451 loop427 wr-expr410 loop416 read-macro?362 wr-lst411 out365 wr366 k1989 def-n306322 def-port307320 body304312 k1848 loop293 loop244 k1599 k1514 loop191 loop176 loop147 k1169 k1261 loop122 g117118 doloop8687) 
o|calls to known targets: 195 
o|identified direct recursive calls: f_3637 1 
o|identified direct recursive calls: f_3459 1 
o|fast box initializations: 43 
o|fast global references: 5 
o|fast global assignments: 2 
o|dropping unused closure argument: f_1963 
o|dropping unused closure argument: f_1960 
o|dropping unused closure argument: f_2025 
o|dropping unused closure argument: f_3386 
*/
/* end of file */
