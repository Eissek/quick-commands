/* Generated from ports.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:04
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: ports.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file ports.c
   unit: ports
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[40];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,28),40,112,111,114,116,45,102,111,114,45,101,97,99,104,32,102,110,54,52,32,116,104,117,110,107,54,53,41,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,120,115,55,52,41,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,23),40,112,111,114,116,45,109,97,112,32,102,110,55,49,32,116,104,117,110,107,55,50,41,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,97,99,99,56,50,41,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,30),40,112,111,114,116,45,102,111,108,100,32,102,110,55,56,32,97,99,99,55,57,32,116,104,117,110,107,56,48,41,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,19),40,102,95,56,53,57,32,98,117,102,49,53,49,32,110,49,53,50,41,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,49,48,51,32,105,49,48,53,41};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,19),40,102,95,56,54,52,32,98,117,102,49,53,51,32,110,49,53,52,41,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,110,49,49,57,41,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,6),40,97,56,56,49,41,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,11),40,97,56,56,55,32,120,49,53,53,41,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,38),40,99,111,112,121,45,112,111,114,116,32,115,114,99,49,51,52,32,100,101,115,116,49,51,53,32,46,32,116,109,112,49,51,51,49,51,54,41,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,17),40,103,49,54,54,32,103,49,55,56,49,55,57,49,56,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,54,53,32,103,49,55,50,49,56,52,41,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,11),40,97,57,50,51,32,115,49,54,50,41,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,57,48,32,103,49,57,55,50,48,49,41,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,6),40,97,57,53,55,41,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,32),40,109,97,107,101,45,98,114,111,97,100,99,97,115,116,45,112,111,114,116,32,46,32,112,111,114,116,115,49,54,49,41};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,6),40,97,57,57,53,41,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,7),40,97,49,48,51,48,41,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,7),40,97,49,48,53,48,41,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,110,50,51,49,32,99,50,51,50,41};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,34),40,97,49,48,56,53,32,112,50,50,54,32,110,50,50,55,32,100,101,115,116,50,50,56,32,115,116,97,114,116,50,50,57,41,0,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,41),40,109,97,107,101,45,99,111,110,99,97,116,101,110,97,116,101,100,45,112,111,114,116,32,112,49,50,48,54,32,46,32,112,111,114,116,115,50,48,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,7),40,97,49,49,52,55,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,7),40,97,49,49,53,50,41,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,7),40,97,49,49,53,56,41,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,39),40,119,105,116,104,45,105,110,112,117,116,45,102,114,111,109,45,112,111,114,116,32,112,111,114,116,50,52,49,32,116,104,117,110,107,50,52,50,41,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,7),40,97,49,49,55,50,41,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,7),40,97,49,49,55,55,41,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,7),40,97,49,49,56,51,41,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,38),40,119,105,116,104,45,111,117,116,112,117,116,45,116,111,45,112,111,114,116,32,112,111,114,116,50,53,53,32,116,104,117,110,107,50,53,54,41,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,7),40,97,49,49,57,55,41,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,7),40,97,49,50,48,50,41,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,7),40,97,49,50,48,56,41,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,44),40,119,105,116,104,45,101,114,114,111,114,45,111,117,116,112,117,116,45,116,111,45,112,111,114,116,32,112,111,114,116,50,54,57,32,116,104,117,110,107,50,55,48,41,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,39),40,99,97,108,108,45,119,105,116,104,45,105,110,112,117,116,45,115,116,114,105,110,103,32,115,116,114,50,56,51,32,112,114,111,99,50,56,52,41,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,33),40,99,97,108,108,45,119,105,116,104,45,111,117,116,112,117,116,45,115,116,114,105,110,103,32,112,114,111,99,50,56,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,7),40,97,49,50,52,51,41,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,7),40,97,49,50,52,56,41,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,7),40,97,49,50,53,52,41,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,40),40,119,105,116,104,45,105,110,112,117,116,45,102,114,111,109,45,115,116,114,105,110,103,32,115,116,114,50,57,49,32,116,104,117,110,107,50,57,50,41};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,7),40,97,49,50,54,56,41,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,7),40,97,49,50,55,51,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,7),40,97,49,50,56,50,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,32),40,119,105,116,104,45,111,117,116,112,117,116,45,116,111,45,115,116,114,105,110,103,32,116,104,117,110,107,51,48,52,41};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,12),40,97,49,51,50,54,32,112,51,52,49,41,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,12),40,97,49,51,52,55,32,112,51,52,55,41,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,12),40,97,49,51,54,56,32,112,51,53,52,41,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,12),40,97,49,51,55,55,32,112,51,53,54,41,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,56),40,109,97,107,101,45,105,110,112,117,116,45,112,111,114,116,32,114,101,97,100,51,50,50,32,114,101,97,100,121,63,51,50,51,32,99,108,111,115,101,51,50,52,32,46,32,116,109,112,51,50,49,51,50,53,41};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,17),40,97,49,52,52,57,32,112,51,55,53,32,99,51,55,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,17),40,97,49,52,53,57,32,112,51,55,55,32,115,51,55,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,12),40,97,49,52,54,53,32,112,51,55,57,41,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,12),40,97,49,52,55,52,32,112,51,56,49,41,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,48),40,109,97,107,101,45,111,117,116,112,117,116,45,112,111,114,116,32,119,114,105,116,101,51,54,54,32,99,108,111,115,101,51,54,55,32,46,32,116,109,112,51,54,53,51,54,56,41};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_996)
static void C_ccall f_996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1092)
static void C_fcall f_1092(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_945)
static void C_ccall f_945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1470)
static void C_ccall f_1470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1475)
static void C_ccall f_1475(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_974)
static void C_ccall f_974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1086)
static void C_ccall f_1086(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_603)
static void C_ccall f_603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_606)
static void C_ccall f_606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_608)
static void C_ccall f_608(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1239)
static void C_ccall f_1239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1227)
static void C_ccall f_1227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1223)
static void C_ccall f_1223(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_791)
static void C_ccall f_791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1450)
static void C_ccall f_1450(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_788)
static void C_fcall f_788(C_word t0,C_word t1) C_noret;
C_noret_decl(f_784)
static void C_fcall f_784(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_987)
static void C_ccall f_987(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_987)
static void C_ccall f_987r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1057)
static void C_fcall f_1057(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1051)
static void C_ccall f_1051(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1432)
static void C_ccall f_1432(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1432)
static void C_ccall f_1432r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_642)
static void C_ccall f_642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_638)
static void C_fcall f_638(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1031)
static void C_ccall f_1031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_632)
static void C_ccall f_632(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_829)
static void C_ccall f_829(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_829)
static void C_ccall f_829r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_826)
static void C_ccall f_826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_918)
static void C_ccall f_918(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_918)
static void C_ccall f_918r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_627)
static void C_ccall f_627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1255)
static void C_ccall f_1255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1445)
static void C_ccall f_1445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1448)
static void C_ccall f_1448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_618)
static void C_ccall f_618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1012)
static void C_ccall f_1012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_614)
static void C_fcall f_614(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1198)
static void C_ccall f_1198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1244)
static void C_ccall f_1244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_888)
static void C_ccall f_888(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_882)
static void C_ccall f_882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_687)
static void C_ccall f_687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1002)
static void C_fcall f_1002(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1249)
static void C_ccall f_1249(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1235)
static void C_ccall f_1235(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1164)
static void C_ccall f_1164(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1230)
static void C_ccall f_1230(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_670)
static void C_fcall f_670(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_674)
static void C_ccall f_674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_864)
static void C_ccall f_864(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_662)
static void C_ccall f_662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_664)
static void C_ccall f_664(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1184)
static void C_ccall f_1184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_859)
static void C_ccall f_859(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1189)
static void C_ccall f_1189(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1173)
static void C_ccall f_1173(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1178)
static void C_ccall f_1178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1108)
static void C_ccall f_1108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_926)
static void C_fcall f_926(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_924)
static void C_ccall f_924(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1373)
static void C_ccall f_1373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1378)
static void C_ccall f_1378(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1460)
static void C_ccall f_1460(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1466)
static void C_ccall f_1466(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_958)
static void C_ccall f_958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1364)
static void C_ccall f_1364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1369)
static void C_ccall f_1369(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_694)
static void C_ccall f_694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1111)
static void C_fcall f_1111(C_word t0,C_word t1) C_noret;
C_noret_decl(f_699)
static void C_fcall f_699(C_word t0,C_word t1) C_noret;
C_noret_decl(C_ports_toplevel)
C_externexport void C_ccall C_ports_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_935)
static void C_fcall f_935(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1148)
static void C_ccall f_1148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1139)
static void C_ccall f_1139(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_734)
static void C_ccall f_734(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1327)
static void C_ccall f_1327(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1325)
static void C_ccall f_1325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1322)
static void C_ccall f_1322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1067)
static void C_ccall f_1067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_724)
static void C_fcall f_724(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1159)
static void C_ccall f_1159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1153)
static void C_ccall f_1153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_712)
static void C_ccall f_712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1283)
static void C_ccall f_1283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1288)
static void C_ccall f_1288(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_1288)
static void C_ccall f_1288r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_1348)
static void C_ccall f_1348(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_703)
static void C_ccall f_703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1214)
static void C_ccall f_1214(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1218)
static void C_ccall f_1218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1274)
static void C_ccall f_1274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1278)
static void C_ccall f_1278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1203)
static void C_ccall f_1203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1209)
static void C_ccall f_1209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_779)
static void C_ccall f_779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_770)
static void C_ccall f_770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_761)
static void C_ccall f_761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_964)
static void C_fcall f_964(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1260)
static void C_ccall f_1260(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_757)
static void C_fcall f_757(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1264)
static void C_ccall f_1264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1269)
static void C_ccall f_1269(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1092)
static void C_fcall trf_1092(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1092(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1092(t0,t1,t2,t3);}

C_noret_decl(trf_788)
static void C_fcall trf_788(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_788(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_788(t0,t1);}

C_noret_decl(trf_784)
static void C_fcall trf_784(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_784(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_784(t0,t1,t2);}

C_noret_decl(trf_1057)
static void C_fcall trf_1057(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1057(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1057(t0,t1);}

C_noret_decl(trf_638)
static void C_fcall trf_638(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_638(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_638(t0,t1,t2);}

C_noret_decl(trf_614)
static void C_fcall trf_614(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_614(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_614(t0,t1);}

C_noret_decl(trf_1002)
static void C_fcall trf_1002(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1002(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1002(t0,t1);}

C_noret_decl(trf_670)
static void C_fcall trf_670(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_670(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_670(t0,t1,t2);}

C_noret_decl(trf_926)
static void C_fcall trf_926(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_926(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_926(t0,t1,t2);}

C_noret_decl(trf_1111)
static void C_fcall trf_1111(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1111(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1111(t0,t1);}

C_noret_decl(trf_699)
static void C_fcall trf_699(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_699(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_699(t0,t1);}

C_noret_decl(trf_935)
static void C_fcall trf_935(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_935(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_935(t0,t1,t2);}

C_noret_decl(trf_724)
static void C_fcall trf_724(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_724(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_724(t0,t1,t2);}

C_noret_decl(trf_964)
static void C_fcall trf_964(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_964(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_964(t0,t1,t2);}

C_noret_decl(trf_757)
static void C_fcall trf_757(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_757(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_757(t0,t1);}

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

C_noret_decl(tr5r)
static void C_fcall tr5r(C_proc5 k) C_regparm C_noret;
C_regparm static void C_fcall tr5r(C_proc5 k){
int n;
C_word *a,t5;
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
n=C_rest_count(0);
a=C_alloc(n*3);
t5=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4,t5);}

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

/* a995 in make-concatenated-port in k604 in k601 */
static void C_ccall f_996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_996,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1002,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_1002(t5,t1);}

/* loop in a1085 in make-concatenated-port in k604 in k601 */
static void C_fcall f_1092(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1092,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
if(C_truep(C_fixnum_less_or_equal_p(t2,C_fix(0)))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1108,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t5=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t6=C_fixnum_plus(((C_word*)t0)[4],t3);
/* ports.scm:158: read-string! */
t7=*((C_word*)lf[8]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t4,t2,((C_word*)t0)[5],t5,t6);}}}

/* k943 in for-each-loop165 in a923 in make-broadcast-port in k604 in k601 */
static void C_ccall f_945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_935(t3,((C_word*)t0)[4],t2);}

/* k1468 in a1465 in make-output-port in k604 in k601 */
static void C_ccall f_1470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_set_i_slot(((C_word*)t0)[3],C_fix(8),C_SCHEME_TRUE));}

/* a1474 in make-output-port in k604 in k601 */
static void C_ccall f_1475(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1475,3,t0,t1,t2);}
if(C_truep(((C_word*)t0)[2])){
/* ports.scm:261: flush */
t3=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t1);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k972 in for-each-loop190 in a957 in make-broadcast-port in k604 in k601 */
static void C_ccall f_974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_964(t3,((C_word*)t0)[4],t2);}

/* a1085 in make-concatenated-port in k604 in k601 */
static void C_ccall f_1086(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_1086,6,t0,t1,t2,t3,t4,t5);}
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1092,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=t5,a[5]=t4,a[6]=((C_word)li26),tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_1092(t9,t1,t3,C_fix(0));}

/* k601 */
static void C_ccall f_603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_603,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_606,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ports.scm:41: register-feature! */
t3=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[39]);}

/* k604 in k601 */
static void C_ccall f_606(C_word c,C_word t0,C_word t1){
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
C_word ab[47],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_606,2,t0,t1);}
t2=C_mutate2((C_word*)lf[0]+1 /* (set! port-for-each ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_608,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate2((C_word*)lf[1]+1 /* (set! port-map ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_632,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[3]+1 /* (set! port-fold ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_664,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t5=*((C_word*)lf[4]+1);
t6=*((C_word*)lf[5]+1);
t7=C_mutate2((C_word*)lf[6]+1 /* (set! copy-port ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_829,a[2]=t5,a[3]=t6,a[4]=((C_word)li14),tmp=(C_word)a,a+=5,tmp));
t8=C_mutate2((C_word*)lf[10]+1 /* (set! make-broadcast-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_918,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[14]+1 /* (set! make-concatenated-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_987,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[19]+1 /* (set! with-input-from-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1139,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[22]+1 /* (set! with-output-to-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1164,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[24]+1 /* (set! with-error-output-to-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1189,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2((C_word*)lf[26]+1 /* (set! call-with-input-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1214,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate2((C_word*)lf[28]+1 /* (set! call-with-output-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1223,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate2((C_word*)lf[31]+1 /* (set! with-input-from-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1235,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2((C_word*)lf[32]+1 /* (set! with-output-to-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1260,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate2((C_word*)lf[18]+1 /* (set! make-input-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1288,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate2((C_word*)lf[12]+1 /* (set! make-output-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1432,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp));
t19=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,C_SCHEME_UNDEFINED);}

/* port-for-each in k604 in k601 */
static void C_ccall f_608(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_608,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_614,a[2]=t5,a[3]=t2,a[4]=t3,a[5]=((C_word)li0),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_614(t7,t1);}

/* k1237 in with-input-from-string in k604 in k601 */
static void C_ccall f_1239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1239,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1244,a[2]=t5,a[3]=t3,a[4]=((C_word)li43),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1249,a[2]=((C_word*)t0)[2],a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1255,a[2]=t3,a[3]=t5,a[4]=((C_word)li45),tmp=(C_word)a,a+=5,tmp);
/* ports.scm:195: ##sys#dynamic-wind */
t9=*((C_word*)lf[21]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[3],t6,t7,t8);}

/* k1225 in call-with-output-string in k604 in k601 */
static void C_ccall f_1227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1227,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1230,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:191: proc */
t4=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,t2);}

/* call-with-output-string in k604 in k601 */
static void C_ccall f_1223(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1223,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1227,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:190: open-output-string */
t4=*((C_word*)lf[30]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k789 in k786 in loop in k777 in copy-port in k604 in k601 */
static void C_ccall f_791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(C_eofp(t1))){
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],C_fix(0)))){
/* ports.scm:99: write-string */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}
else{
t2=C_fix(C_character_code(t1));
t3=C_setbyte(((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1],t2);
t4=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
/* ports.scm:102: loop */
t5=((C_word*)((C_word*)t0)[6])[1];
f_784(t5,((C_word*)t0)[3],t4);}}

/* a1449 in make-output-port in k604 in k601 */
static void C_ccall f_1450(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[2],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1450,4,t0,t1,t2,t3);}
t4=C_a_i_string(&a,1,t3);
/* ports.scm:254: write */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t1,t4);}

/* k786 in loop in k777 in copy-port in k604 in k601 */
static void C_fcall f_788(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_788,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_791,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* ports.scm:96: reader */
t3=((C_word*)t0)[7];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[8]);}

/* loop in k777 in copy-port in k604 in k601 */
static void C_fcall f_784(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_784,NULL,3,t0,t1,t2);}
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_788,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)t3)[1],C_fix(1024)))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_826,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:94: write-string */
t6=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,((C_word*)t0)[2],C_fix(1024),((C_word*)t0)[3]);}
else{
t5=t4;
f_788(t5,C_SCHEME_UNDEFINED);}}

/* make-concatenated-port in k604 in k601 */
static void C_ccall f_987(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+21)){
C_save_and_reclaim((void*)tr3r,(void*)f_987r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_987r(t0,t1,t2,t3);}}

static void C_ccall f_987r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(21);
t4=C_a_i_cons(&a,2,t2,t3);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_996,a[2]=t6,a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1031,a[2]=t6,a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1051,a[2]=t6,a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1086,a[2]=t6,a[3]=((C_word)li27),tmp=(C_word)a,a+=4,tmp);
/* ports.scm:130: make-input-port */
t11=*((C_word*)lf[18]+1);
((C_proc7)(void*)(*((C_word*)t11+1)))(7,t11,t1,t7,t8,*((C_word*)lf[13]+1),t9,t10);}

/* loop in a1050 in make-concatenated-port in k604 in k601 */
static void C_fcall f_1057(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1057,NULL,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_FILE);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1067,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* ports.scm:148: peek-char */
t4=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}}

/* a1050 in make-concatenated-port in k604 in k601 */
static void C_ccall f_1051(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1051,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1057,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li24),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_1057(t5,t1);}

/* make-output-port in k604 in k601 */
static void C_ccall f_1432(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+32)){
C_save_and_reclaim((void*)tr4r,(void*)f_1432r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1432r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1432r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(32);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1450,a[2]=t2,a[3]=((C_word)li56),tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1460,a[2]=t2,a[3]=((C_word)li57),tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1466,a[2]=t3,a[3]=((C_word)li58),tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1475,a[2]=t7,a[3]=((C_word)li59),tmp=(C_word)a,a+=4,tmp);
t12=C_a_i_vector(&a,9,C_SCHEME_FALSE,C_SCHEME_FALSE,t8,t9,t10,t11,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);
t13=C_a_i_vector1(&a,1,C_SCHEME_FALSE);
t14=t13;
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1445,a[2]=t1,a[3]=t14,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:266: ##sys#make-port */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(6,*((C_word*)lf[34]+1),t15,C_SCHEME_FALSE,t12,lf[37],lf[36]);}

/* k640 in loop in port-map in k604 in k601 */
static void C_ccall f_642(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_642,2,t0,t1);}
if(C_truep(C_eofp(t1))){
/* ports.scm:58: ##sys#fast-reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[2]+1)))(3,*((C_word*)lf[2]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_662,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* ports.scm:59: fn */
t3=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,t1);}}

/* loop in port-map in k604 in k601 */
static void C_fcall f_638(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_638,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_642,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* ports.scm:56: thunk */
t4=((C_word*)t0)[4];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t3);}

/* a1030 in make-concatenated-port in k604 in k601 */
static void C_ccall f_1031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1031,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* ports.scm:142: char-ready? */
t3=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}}

/* port-map in k604 in k601 */
static void C_ccall f_632(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_632,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_638,a[2]=t5,a[3]=t2,a[4]=t3,a[5]=((C_word)li2),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_638(t7,t1,C_SCHEME_END_OF_LIST);}

/* copy-port in k604 in k601 */
static void C_ccall f_829(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+18)){
C_save_and_reclaim((void*)tr4r,(void*)f_829r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_829r(t0,t1,t2,t3,t4);}}

static void C_ccall f_829r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(18);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?((C_word*)t0)[2]:C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?((C_word*)t0)[3]:C_i_car(t9));
t12=t11;
t13=C_i_nullp(t9);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t15=C_eqp(t7,((C_word*)t0)[2]);
if(C_truep(t15)){
t16=C_eqp(t12,((C_word*)t0)[3]);
t17=(C_truep(t16)?(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_859,a[2]=t3,a[3]=((C_word)li6),tmp=(C_word)a,a+=4,tmp):(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_864,a[2]=t3,a[3]=t12,a[4]=((C_word)li8),tmp=(C_word)a,a+=5,tmp));
t18=t1;
t19=t2;
t20=t17;
t21=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_694,a[2]=t20,a[3]=t19,a[4]=t18,tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(4,*((C_word*)lf[9]+1),t21,C_fix(1024),C_make_character(32));}
else{
t16=C_eqp(t12,((C_word*)t0)[3]);
if(C_truep(t16)){
t17=t1;
t18=t2;
t19=t3;
t20=t7;
t21=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_779,a[2]=t19,a[3]=t20,a[4]=t18,a[5]=t17,tmp=(C_word)a,a+=6,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(4,*((C_word*)lf[9]+1),t21,C_fix(1024),C_make_character(32));}
else{
t17=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_882,a[2]=t7,a[3]=t2,a[4]=((C_word)li11),tmp=(C_word)a,a+=5,tmp);
t18=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_888,a[2]=t12,a[3]=t3,a[4]=((C_word)li12),tmp=(C_word)a,a+=5,tmp);
t19=t1;
t20=t17;
t21=t18;
t22=C_SCHEME_UNDEFINED;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_757,a[2]=t23,a[3]=t21,a[4]=t20,a[5]=((C_word)li13),tmp=(C_word)a,a+=6,tmp));
t25=((C_word*)t23)[1];
f_757(t25,t19);}}}

/* k824 in loop in k777 in copy-port in k604 in k601 */
static void C_ccall f_826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
t3=((C_word*)t0)[3];
f_788(t3,t2);}

/* make-broadcast-port in k604 in k601 */
static void C_ccall f_918(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr2r,(void*)f_918r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_918r(t0,t1,t2);}}

static void C_ccall f_918r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_924,a[2]=t2,a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_958,a[2]=t2,a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp);
/* ports.scm:122: make-output-port */
t5=*((C_word*)lf[12]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t3,*((C_word*)lf[13]+1),t4);}

/* k625 in k616 in loop in port-for-each in k604 in k601 */
static void C_ccall f_627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ports.scm:51: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_614(t2,((C_word*)t0)[3]);}

/* a1254 in k1237 in with-input-from-string in k604 in k601 */
static void C_ccall f_1255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1255,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[20]+1));
t3=C_mutate2((C_word*)lf[20]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k1443 in make-output-port in k604 in k601 */
static void C_ccall f_1445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1445,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1448,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:267: ##sys#set-port-data! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[33]+1)))(4,*((C_word*)lf[33]+1),t3,t2,((C_word*)t0)[3]);}

/* k1446 in k1443 in make-output-port in k604 in k601 */
static void C_ccall f_1448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k616 in loop in port-for-each in k604 in k601 */
static void C_ccall f_618(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_618,2,t0,t1);}
if(C_truep(C_eofp(t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_627,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* ports.scm:50: fn */
t3=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,t1);}}

/* k1010 in loop in a995 in make-concatenated-port in k604 in k601 */
static void C_ccall f_1012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(C_eofp(t1))){
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
/* ports.scm:138: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1002(t4,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}}

/* loop in port-for-each in k604 in k601 */
static void C_fcall f_614(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_614,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_618,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ports.scm:48: thunk */
t3=((C_word*)t0)[4];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* a1197 in with-error-output-to-port in k604 in k601 */
static void C_ccall f_1198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1198,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[25]+1));
t3=C_mutate2((C_word*)lf[25]+1 /* (set! ##sys#standard-error ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a1243 in k1237 in with-input-from-string in k604 in k601 */
static void C_ccall f_1244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1244,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[20]+1));
t3=C_mutate2((C_word*)lf[20]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a887 in copy-port in k604 in k601 */
static void C_ccall f_888(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_888,3,t0,t1,t2);}
/* ports.scm:116: write */
t3=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t1,t2,((C_word*)t0)[3]);}

/* a881 in copy-port in k604 in k601 */
static void C_ccall f_882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_882,2,t0,t1);}
/* ports.scm:115: read */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[3]);}

/* k685 in k672 in loop in port-fold in k604 in k601 */
static void C_ccall f_687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ports.scm:66: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_670(t2,((C_word*)t0)[3],t1);}

/* loop in a995 in make-concatenated-port in k604 in k601 */
static void C_fcall f_1002(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1002,NULL,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_FILE);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1012,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* read-char/port */
t4=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}}

/* a1248 in k1237 in with-input-from-string in k604 in k601 */
static void C_ccall f_1249(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1249,2,t0,t1);}
/* ports.scm:197: thunk */
t2=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,t1);}

/* with-input-from-string in k604 in k601 */
static void C_ccall f_1235(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1235,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1239,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:196: open-input-string */
t5=*((C_word*)lf[27]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* with-output-to-port in k604 in k601 */
static void C_ccall f_1164(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[18],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1164,4,t0,t1,t2,t3);}
t4=t2;
t5=C_i_check_port_2(t4,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[22]);
t6=t2;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1173,a[2]=t9,a[3]=t7,a[4]=((C_word)li33),tmp=(C_word)a,a+=5,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1178,a[2]=t3,a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1184,a[2]=t7,a[3]=t9,a[4]=((C_word)li35),tmp=(C_word)a,a+=5,tmp);
/* ports.scm:173: ##sys#dynamic-wind */
t13=*((C_word*)lf[21]+1);
((C_proc5)(void*)(*((C_word*)t13+1)))(5,t13,t1,t10,t11,t12);}

/* k1228 in k1225 in call-with-output-string in k604 in k601 */
static void C_ccall f_1230(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ports.scm:192: get-output-string */
t2=*((C_word*)lf[29]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* loop in port-fold in k604 in k601 */
static void C_fcall f_670(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_670,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_674,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* ports.scm:63: thunk */
t4=((C_word*)t0)[4];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t3);}

/* k672 in loop in port-fold in k604 in k601 */
static void C_ccall f_674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_674,2,t0,t1);}
if(C_truep(C_eofp(t1))){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_687,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ports.scm:66: fn */
t3=((C_word*)t0)[5];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,t1,((C_word*)t0)[2]);}}

/* f_864 in copy-port in k604 in k601 */
static void C_ccall f_864(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[10],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_864,4,t0,t1,t2,t3);}
t4=t2;
t5=t3;
t6=((C_word*)t0)[2];
t7=((C_word*)t0)[3];
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_724,a[2]=t5,a[3]=t9,a[4]=t4,a[5]=t7,a[6]=t6,a[7]=((C_word)li7),tmp=(C_word)a,a+=8,tmp));
t11=((C_word*)t9)[1];
f_724(t11,t1,C_fix(0));}

/* k660 in k640 in loop in port-map in k604 in k601 */
static void C_ccall f_662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_662,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* ports.scm:59: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_638(t3,((C_word*)t0)[4],t2);}

/* port-fold in k604 in k601 */
static void C_ccall f_664(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_664,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_670,a[2]=t6,a[3]=t2,a[4]=t4,a[5]=((C_word)li4),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_670(t8,t1,t3);}

/* a1183 in with-output-to-port in k604 in k601 */
static void C_ccall f_1184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1184,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[23]+1));
t3=C_mutate2((C_word*)lf[23]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* f_859 in copy-port in k604 in k601 */
static void C_ccall f_859(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_859,4,t0,t1,t2,t3);}
/* ports.scm:109: write-string */
t4=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,t2,t3,((C_word*)t0)[2]);}

/* with-error-output-to-port in k604 in k601 */
static void C_ccall f_1189(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[18],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1189,4,t0,t1,t2,t3);}
t4=t2;
t5=C_i_check_port_2(t4,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[24]);
t6=t2;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1198,a[2]=t9,a[3]=t7,a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1203,a[2]=t3,a[3]=((C_word)li38),tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1209,a[2]=t7,a[3]=t9,a[4]=((C_word)li39),tmp=(C_word)a,a+=5,tmp);
/* ports.scm:178: ##sys#dynamic-wind */
t13=*((C_word*)lf[21]+1);
((C_proc5)(void*)(*((C_word*)t13+1)))(5,t13,t1,t10,t11,t12);}

/* a1172 in with-output-to-port in k604 in k601 */
static void C_ccall f_1173(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1173,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[23]+1));
t3=C_mutate2((C_word*)lf[23]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a1177 in with-output-to-port in k604 in k601 */
static void C_ccall f_1178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1178,2,t0,t1);}
/* ports.scm:174: thunk */
t2=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,t1);}

/* k1106 in loop in a1085 in make-concatenated-port in k604 in k601 */
static void C_ccall f_1108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1108,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1111,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fixnum_lessp(t2,((C_word*)t0)[2]))){
t4=C_i_cdr(((C_word*)((C_word*)t0)[6])[1]);
t5=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t4);
t6=t3;
f_1111(t6,t5);}
else{
t4=t3;
f_1111(t4,C_SCHEME_UNDEFINED);}}

/* g166 in a923 in make-broadcast-port in k604 in k601 */
static void C_fcall f_926(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_926,NULL,3,t0,t1,t2);}
t3=*((C_word*)lf[7]+1);
/* ports.scm:123: g181 */
t4=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,((C_word*)t0)[2],C_SCHEME_FALSE,t2);}

/* a923 in make-broadcast-port in k604 in k601 */
static void C_ccall f_924(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_924,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_926,a[2]=t2,a[3]=((C_word)li15),tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[2];
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_935,a[2]=t6,a[3]=t3,a[4]=((C_word)li16),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_935(t8,t1,t4);}

/* k1371 in a1368 in make-input-port in k604 in k601 */
static void C_ccall f_1373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_set_i_slot(((C_word*)t0)[3],C_fix(8),C_SCHEME_TRUE));}

/* a1377 in make-input-port in k604 in k601 */
static void C_ccall f_1378(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1378,3,t0,t1,t2);}
/* ports.scm:238: ready? */
t3=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t1);}

/* a1459 in make-output-port in k604 in k601 */
static void C_ccall f_1460(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1460,4,t0,t1,t2,t3);}
/* ports.scm:256: write */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* a1465 in make-output-port in k604 in k601 */
static void C_ccall f_1466(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1466,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1470,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:258: close */
t4=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t3);}

/* a957 in make-broadcast-port in k604 in k601 */
static void C_ccall f_958(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_958,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_964,a[2]=t4,a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_964(t6,t1,t2);}

/* k1362 in a1347 in make-input-port in k604 in k601 */
static void C_ccall f_1364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[2],C_fix(10),t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* a1368 in make-input-port in k604 in k601 */
static void C_ccall f_1369(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1369,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1373,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:234: close */
t4=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t3);}

/* k692 in copy-port in k604 in k601 */
static void C_ccall f_694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_694,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_699,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word)li9),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_699(t6,((C_word*)t0)[4]);}

/* k1109 in k1106 in loop in a1085 in make-concatenated-port in k604 in k601 */
static void C_fcall f_1111(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_fixnum_difference(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_fixnum_plus(((C_word*)t0)[4],((C_word*)t0)[3]);
/* ports.scm:161: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_1092(t4,((C_word*)t0)[6],t2,t3);}

/* loop in k692 in copy-port in k604 in k601 */
static void C_fcall f_699(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_699,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_703,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* ports.scm:76: read-string! */
t3=*((C_word*)lf[8]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,C_fix(1024),((C_word*)t0)[4],((C_word*)t0)[5]);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_ports_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_ports_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("ports_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(380)){
C_save(t1);
C_rereclaim2(380*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,40);
lf[0]=C_h_intern(&lf[0],13,"port-for-each");
lf[1]=C_h_intern(&lf[1],8,"port-map");
lf[2]=C_h_intern(&lf[2],16,"\003sysfast-reverse");
lf[3]=C_h_intern(&lf[3],9,"port-fold");
lf[4]=C_h_intern(&lf[4],9,"read-char");
lf[5]=C_h_intern(&lf[5],10,"write-char");
lf[6]=C_h_intern(&lf[6],9,"copy-port");
lf[7]=C_h_intern(&lf[7],12,"write-string");
lf[8]=C_h_intern(&lf[8],12,"read-string!");
lf[9]=C_h_intern(&lf[9],15,"\003sysmake-string");
lf[10]=C_h_intern(&lf[10],19,"make-broadcast-port");
lf[11]=C_h_intern(&lf[11],12,"flush-output");
lf[12]=C_h_intern(&lf[12],16,"make-output-port");
lf[13]=C_h_intern(&lf[13],4,"void");
lf[14]=C_h_intern(&lf[14],22,"make-concatenated-port");
lf[15]=C_h_intern(&lf[15],18,"\003sysread-char/port");
lf[16]=C_h_intern(&lf[16],11,"char-ready\077");
lf[17]=C_h_intern(&lf[17],9,"peek-char");
lf[18]=C_h_intern(&lf[18],15,"make-input-port");
lf[19]=C_h_intern(&lf[19],20,"with-input-from-port");
lf[20]=C_h_intern(&lf[20],18,"\003sysstandard-input");
lf[21]=C_h_intern(&lf[21],16,"\003sysdynamic-wind");
lf[22]=C_h_intern(&lf[22],19,"with-output-to-port");
lf[23]=C_h_intern(&lf[23],19,"\003sysstandard-output");
lf[24]=C_h_intern(&lf[24],25,"with-error-output-to-port");
lf[25]=C_h_intern(&lf[25],18,"\003sysstandard-error");
lf[26]=C_h_intern(&lf[26],22,"call-with-input-string");
lf[27]=C_h_intern(&lf[27],17,"open-input-string");
lf[28]=C_h_intern(&lf[28],23,"call-with-output-string");
lf[29]=C_h_intern(&lf[29],17,"get-output-string");
lf[30]=C_h_intern(&lf[30],18,"open-output-string");
lf[31]=C_h_intern(&lf[31],22,"with-input-from-string");
lf[32]=C_h_intern(&lf[32],21,"with-output-to-string");
lf[33]=C_h_intern(&lf[33],18,"\003sysset-port-data!");
lf[34]=C_h_intern(&lf[34],13,"\003sysmake-port");
lf[35]=C_decode_literal(C_heaptop,"\376B\000\000\010(custom)");
lf[36]=C_h_intern(&lf[36],6,"custom");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\010(custom)");
lf[38]=C_h_intern(&lf[38],17,"register-feature!");
lf[39]=C_h_intern(&lf[39],5,"ports");
C_register_lf2(lf,40,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_603,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* for-each-loop165 in a923 in make-broadcast-port in k604 in k601 */
static void C_fcall f_935(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_935,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_945,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* ports.scm:123: g166 */
t5=((C_word*)t0)[3];
f_926(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* a1147 in with-input-from-port in k604 in k601 */
static void C_ccall f_1148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1148,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[20]+1));
t3=C_mutate2((C_word*)lf[20]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* with-input-from-port in k604 in k601 */
static void C_ccall f_1139(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[18],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1139,4,t0,t1,t2,t3);}
t4=t2;
t5=C_i_check_port_2(t4,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[19]);
t6=t2;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1148,a[2]=t9,a[3]=t7,a[4]=((C_word)li29),tmp=(C_word)a,a+=5,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1153,a[2]=t3,a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1159,a[2]=t7,a[3]=t9,a[4]=((C_word)li31),tmp=(C_word)a,a+=5,tmp);
/* ports.scm:168: ##sys#dynamic-wind */
t13=*((C_word*)lf[21]+1);
((C_proc5)(void*)(*((C_word*)t13+1)))(5,t13,t1,t10,t11,t12);}

/* k732 in doloop103 */
static void C_ccall f_734(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_724(t3,((C_word*)t0)[4],t2);}

/* a1326 in make-input-port in k604 in k601 */
static void C_ccall f_1327(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1327,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(10));
if(C_truep(((C_word*)t0)[2])){
/* ports.scm:218: read */
t4=((C_word*)t0)[3];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t1);}
else{
if(C_truep(t3)){
t4=C_i_set_i_slot(t2,C_fix(10),C_SCHEME_FALSE);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
/* ports.scm:222: read */
t4=((C_word*)t0)[3];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t1);}}}

/* k1323 in k1320 in make-input-port in k604 in k601 */
static void C_ccall f_1325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k1320 in make-input-port in k604 in k601 */
static void C_ccall f_1322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1322,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1325,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:244: ##sys#set-port-data! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[33]+1)))(4,*((C_word*)lf[33]+1),t3,t2,((C_word*)t0)[3]);}

/* k1065 in loop in a1050 in make-concatenated-port in k604 in k601 */
static void C_ccall f_1067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(C_eofp(t1))){
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
/* ports.scm:151: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1057(t4,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}}

/* doloop103 */
static void C_fcall f_724(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_724,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_734,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_subbyte(((C_word*)t0)[4],t2);
t5=C_make_character(C_unfix(t4));
/* ports.scm:83: writer */
t6=((C_word*)t0)[5];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t3,t5,((C_word*)t0)[6]);}}

/* a1158 in with-input-from-port in k604 in k601 */
static void C_ccall f_1159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1159,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[20]+1));
t3=C_mutate2((C_word*)lf[20]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a1152 in with-input-from-port in k604 in k601 */
static void C_ccall f_1153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1153,2,t0,t1);}
/* ports.scm:169: thunk */
t2=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,t1);}

/* k710 in k701 in loop in k692 in copy-port in k604 in k601 */
static void C_ccall f_712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ports.scm:79: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_699(t2,((C_word*)t0)[3]);}

/* a1282 in k1262 in with-output-to-string in k604 in k601 */
static void C_ccall f_1283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1283,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[23]+1));
t3=C_mutate2((C_word*)lf[23]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* make-input-port in k604 in k601 */
static void C_ccall f_1288(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+35)){
C_save_and_reclaim((void*)tr5r,(void*)f_1288r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_1288r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_1288r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word *a=C_alloc(35);
t6=C_i_nullp(t5);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_i_car(t5));
t8=t7;
t9=C_i_nullp(t5);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:C_i_cdr(t5));
t11=C_i_nullp(t10);
t12=(C_truep(t11)?C_SCHEME_FALSE:C_i_car(t10));
t13=C_i_nullp(t10);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t10));
t15=C_i_nullp(t14);
t16=(C_truep(t15)?C_SCHEME_FALSE:C_i_car(t14));
t17=C_i_nullp(t14);
t18=(C_truep(t17)?C_SCHEME_END_OF_LIST:C_i_cdr(t14));
t19=C_i_nullp(t18);
t20=(C_truep(t19)?C_SCHEME_FALSE:C_i_car(t18));
t21=C_i_nullp(t18);
t22=(C_truep(t21)?C_SCHEME_END_OF_LIST:C_i_cdr(t18));
t23=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1327,a[2]=t8,a[3]=t2,a[4]=((C_word)li51),tmp=(C_word)a,a+=5,tmp);
t24=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1348,a[2]=t8,a[3]=t2,a[4]=((C_word)li52),tmp=(C_word)a,a+=5,tmp);
t25=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1369,a[2]=t4,a[3]=((C_word)li53),tmp=(C_word)a,a+=4,tmp);
t26=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1378,a[2]=t3,a[3]=((C_word)li54),tmp=(C_word)a,a+=4,tmp);
t27=C_a_i_vector(&a,10,t23,t24,C_SCHEME_FALSE,C_SCHEME_FALSE,t25,C_SCHEME_FALSE,t26,t12,t16,t20);
t28=C_a_i_vector1(&a,1,C_SCHEME_FALSE);
t29=t28;
t30=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1322,a[2]=t1,a[3]=t29,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:243: ##sys#make-port */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(6,*((C_word*)lf[34]+1),t30,C_SCHEME_TRUE,t27,lf[35],lf[36]);}

/* a1347 in make-input-port in k604 in k601 */
static void C_ccall f_1348(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1348,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(10));
if(C_truep(((C_word*)t0)[2])){
/* ports.scm:225: peek */
t4=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t1);}
else{
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1364,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:228: read */
t5=((C_word*)t0)[3];
((C_proc2)C_fast_retrieve_proc(t5))(2,t5,t4);}}}

/* k701 in loop in k692 in copy-port in k604 in k601 */
static void C_ccall f_703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_703,2,t0,t1);}
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_712,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* ports.scm:78: writer */
t4=((C_word*)t0)[4];
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[5],t1);}}

/* call-with-input-string in k604 in k601 */
static void C_ccall f_1214(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1214,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1218,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:185: open-input-string */
t5=*((C_word*)lf[27]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k1216 in call-with-input-string in k604 in k601 */
static void C_ccall f_1218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ports.scm:186: proc */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],t1);}

/* a1273 in k1262 in with-output-to-string in k604 in k601 */
static void C_ccall f_1274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1274,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1278,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* ports.scm:202: thunk */
t3=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* k1276 in a1273 in k1262 in with-output-to-string in k604 in k601 */
static void C_ccall f_1278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ports.scm:203: get-output-string */
t2=*((C_word*)lf[29]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],*((C_word*)lf[23]+1));}

/* a1202 in with-error-output-to-port in k604 in k601 */
static void C_ccall f_1203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1203,2,t0,t1);}
/* ports.scm:179: thunk */
t2=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,t1);}

/* a1208 in with-error-output-to-port in k604 in k601 */
static void C_ccall f_1209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1209,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[25]+1));
t3=C_mutate2((C_word*)lf[25]+1 /* (set! ##sys#standard-error ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k777 in copy-port in k604 in k601 */
static void C_ccall f_779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_779,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_784,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word)li10),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_784(t6,((C_word*)t0)[5],C_fix(0));}

/* k768 in k759 in loop in copy-port in k604 in k601 */
static void C_ccall f_770(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ports.scm:89: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_757(t2,((C_word*)t0)[3]);}

/* k759 in loop in copy-port in k604 in k601 */
static void C_ccall f_761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_761,2,t0,t1);}
if(C_truep(C_eofp(t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_770,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* ports.scm:88: writer */
t3=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,t1);}}

/* for-each-loop190 in a957 in make-broadcast-port in k604 in k601 */
static void C_fcall f_964(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_964,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_974,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* ports.scm:125: g191 */
t5=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* with-output-to-string in k604 in k601 */
static void C_ccall f_1260(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1260,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1264,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:201: open-output-string */
t4=*((C_word*)lf[30]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* loop in copy-port in k604 in k601 */
static void C_fcall f_757(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_757,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_761,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ports.scm:86: reader */
t3=((C_word*)t0)[4];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* k1262 in with-output-to-string in k604 in k601 */
static void C_ccall f_1264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1264,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1269,a[2]=t5,a[3]=t3,a[4]=((C_word)li47),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1274,a[2]=((C_word*)t0)[2],a[3]=((C_word)li48),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1283,a[2]=t3,a[3]=t5,a[4]=((C_word)li49),tmp=(C_word)a,a+=5,tmp);
/* ports.scm:200: ##sys#dynamic-wind */
t9=*((C_word*)lf[21]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[3],t6,t7,t8);}

/* a1268 in k1262 in with-output-to-string in k604 in k601 */
static void C_ccall f_1269(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1269,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[23]+1));
t3=C_mutate2((C_word*)lf[23]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[100] = {
{"f_996:ports_2escm",(void*)f_996},
{"f_1092:ports_2escm",(void*)f_1092},
{"f_945:ports_2escm",(void*)f_945},
{"f_1470:ports_2escm",(void*)f_1470},
{"f_1475:ports_2escm",(void*)f_1475},
{"f_974:ports_2escm",(void*)f_974},
{"f_1086:ports_2escm",(void*)f_1086},
{"f_603:ports_2escm",(void*)f_603},
{"f_606:ports_2escm",(void*)f_606},
{"f_608:ports_2escm",(void*)f_608},
{"f_1239:ports_2escm",(void*)f_1239},
{"f_1227:ports_2escm",(void*)f_1227},
{"f_1223:ports_2escm",(void*)f_1223},
{"f_791:ports_2escm",(void*)f_791},
{"f_1450:ports_2escm",(void*)f_1450},
{"f_788:ports_2escm",(void*)f_788},
{"f_784:ports_2escm",(void*)f_784},
{"f_987:ports_2escm",(void*)f_987},
{"f_1057:ports_2escm",(void*)f_1057},
{"f_1051:ports_2escm",(void*)f_1051},
{"f_1432:ports_2escm",(void*)f_1432},
{"f_642:ports_2escm",(void*)f_642},
{"f_638:ports_2escm",(void*)f_638},
{"f_1031:ports_2escm",(void*)f_1031},
{"f_632:ports_2escm",(void*)f_632},
{"f_829:ports_2escm",(void*)f_829},
{"f_826:ports_2escm",(void*)f_826},
{"f_918:ports_2escm",(void*)f_918},
{"f_627:ports_2escm",(void*)f_627},
{"f_1255:ports_2escm",(void*)f_1255},
{"f_1445:ports_2escm",(void*)f_1445},
{"f_1448:ports_2escm",(void*)f_1448},
{"f_618:ports_2escm",(void*)f_618},
{"f_1012:ports_2escm",(void*)f_1012},
{"f_614:ports_2escm",(void*)f_614},
{"f_1198:ports_2escm",(void*)f_1198},
{"f_1244:ports_2escm",(void*)f_1244},
{"f_888:ports_2escm",(void*)f_888},
{"f_882:ports_2escm",(void*)f_882},
{"f_687:ports_2escm",(void*)f_687},
{"f_1002:ports_2escm",(void*)f_1002},
{"f_1249:ports_2escm",(void*)f_1249},
{"f_1235:ports_2escm",(void*)f_1235},
{"f_1164:ports_2escm",(void*)f_1164},
{"f_1230:ports_2escm",(void*)f_1230},
{"f_670:ports_2escm",(void*)f_670},
{"f_674:ports_2escm",(void*)f_674},
{"f_864:ports_2escm",(void*)f_864},
{"f_662:ports_2escm",(void*)f_662},
{"f_664:ports_2escm",(void*)f_664},
{"f_1184:ports_2escm",(void*)f_1184},
{"f_859:ports_2escm",(void*)f_859},
{"f_1189:ports_2escm",(void*)f_1189},
{"f_1173:ports_2escm",(void*)f_1173},
{"f_1178:ports_2escm",(void*)f_1178},
{"f_1108:ports_2escm",(void*)f_1108},
{"f_926:ports_2escm",(void*)f_926},
{"f_924:ports_2escm",(void*)f_924},
{"f_1373:ports_2escm",(void*)f_1373},
{"f_1378:ports_2escm",(void*)f_1378},
{"f_1460:ports_2escm",(void*)f_1460},
{"f_1466:ports_2escm",(void*)f_1466},
{"f_958:ports_2escm",(void*)f_958},
{"f_1364:ports_2escm",(void*)f_1364},
{"f_1369:ports_2escm",(void*)f_1369},
{"f_694:ports_2escm",(void*)f_694},
{"f_1111:ports_2escm",(void*)f_1111},
{"f_699:ports_2escm",(void*)f_699},
{"toplevel:ports_2escm",(void*)C_ports_toplevel},
{"f_935:ports_2escm",(void*)f_935},
{"f_1148:ports_2escm",(void*)f_1148},
{"f_1139:ports_2escm",(void*)f_1139},
{"f_734:ports_2escm",(void*)f_734},
{"f_1327:ports_2escm",(void*)f_1327},
{"f_1325:ports_2escm",(void*)f_1325},
{"f_1322:ports_2escm",(void*)f_1322},
{"f_1067:ports_2escm",(void*)f_1067},
{"f_724:ports_2escm",(void*)f_724},
{"f_1159:ports_2escm",(void*)f_1159},
{"f_1153:ports_2escm",(void*)f_1153},
{"f_712:ports_2escm",(void*)f_712},
{"f_1283:ports_2escm",(void*)f_1283},
{"f_1288:ports_2escm",(void*)f_1288},
{"f_1348:ports_2escm",(void*)f_1348},
{"f_703:ports_2escm",(void*)f_703},
{"f_1214:ports_2escm",(void*)f_1214},
{"f_1218:ports_2escm",(void*)f_1218},
{"f_1274:ports_2escm",(void*)f_1274},
{"f_1278:ports_2escm",(void*)f_1278},
{"f_1203:ports_2escm",(void*)f_1203},
{"f_1209:ports_2escm",(void*)f_1209},
{"f_779:ports_2escm",(void*)f_779},
{"f_770:ports_2escm",(void*)f_770},
{"f_761:ports_2escm",(void*)f_761},
{"f_964:ports_2escm",(void*)f_964},
{"f_1260:ports_2escm",(void*)f_1260},
{"f_757:ports_2escm",(void*)f_757},
{"f_1264:ports_2escm",(void*)f_1264},
{"f_1269:ports_2escm",(void*)f_1269},
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
S|  for-each		2
o|eliminated procedure checks: 14 
o|specializations:
o|  2 (##sys#check-output-port * * *)
o|  1 (##sys#check-input-port * * *)
o|  2 (##sys#check-list (or pair list) *)
o|  2 (make-string fixnum)
o|Removed `not' forms: 1 
o|inlining procedure: k619 
o|inlining procedure: k619 
o|inlining procedure: k643 
o|inlining procedure: k643 
o|inlining procedure: k675 
o|inlining procedure: k675 
o|inlining procedure: k843 
o|contracted procedure: "(ports.scm:106) read-buf88" 
o|inlining procedure: k704 
o|inlining procedure: k704 
o|substituted constant variable: a716 
o|contracted procedure: "(ports.scm:110) write-buf89" 
o|inlining procedure: k726 
o|inlining procedure: k726 
o|inlining procedure: k843 
o|contracted procedure: "(ports.scm:112) read-and-write-buf91" 
o|inlining procedure: k792 
o|inlining procedure: k792 
o|substituted constant variable: a828 
o|contracted procedure: "(ports.scm:114) read-and-write90" 
o|inlining procedure: k762 
o|inlining procedure: k762 
o|propagated global variable: g181182 write-string 
o|inlining procedure: k937 
o|inlining procedure: k937 
o|inlining procedure: k966 
o|inlining procedure: k966 
o|inlining procedure: k1004 
o|inlining procedure: k1004 
o|contracted procedure: k1036 
o|inlining procedure: k1033 
o|inlining procedure: k1033 
o|inlining procedure: k1059 
o|inlining procedure: k1059 
o|inlining procedure: k1094 
o|inlining procedure: k1094 
o|substituted constant variable: a1142 
o|substituted constant variable: a1143 
o|substituted constant variable: a1167 
o|substituted constant variable: a1168 
o|substituted constant variable: a1192 
o|substituted constant variable: a1193 
o|inlining procedure: k1332 
o|inlining procedure: k1332 
o|inlining procedure: k1353 
o|inlining procedure: k1353 
o|inlining procedure: k1477 
o|inlining procedure: k1477 
o|replaced variables: 108 
o|removed binding forms: 84 
o|substituted constant variable: r10051509 
o|substituted constant variable: r10341511 
o|substituted constant variable: r10601513 
o|removed binding forms: 130 
o|replaced variables: 2 
o|removed binding forms: 3 
o|removed binding forms: 2 
o|simplifications: ((if . 14) (##core#call . 82)) 
o|  call simplifications:
o|    string
o|    ##sys#setslot
o|    ##sys#setislot	3
o|    vector	4
o|    fx<=
o|    fx<
o|    fx-
o|    read-char
o|    pair?	2
o|    ##sys#slot	6
o|    car	11
o|    null?	17
o|    cdr	9
o|    char->integer
o|    ##sys#setbyte
o|    fx>=	3
o|    ##sys#byte
o|    integer->char
o|    fx+	4
o|    eq?	4
o|    cons	2
o|    eof-object?	7
o|contracted procedure: k622 
o|contracted procedure: k646 
o|contracted procedure: k656 
o|contracted procedure: k678 
o|contracted procedure: k911 
o|contracted procedure: k831 
o|contracted procedure: k905 
o|contracted procedure: k834 
o|contracted procedure: k899 
o|contracted procedure: k837 
o|contracted procedure: k893 
o|contracted procedure: k840 
o|contracted procedure: k846 
o|contracted procedure: k856 
o|contracted procedure: k853 
o|contracted procedure: k729 
o|contracted procedure: k739 
o|contracted procedure: k747 
o|contracted procedure: k743 
o|contracted procedure: k707 
o|contracted procedure: k872 
o|contracted procedure: k795 
o|contracted procedure: k801 
o|contracted procedure: k818 
o|contracted procedure: k807 
o|contracted procedure: k814 
o|contracted procedure: k821 
o|contracted procedure: k765 
o|contracted procedure: k940 
o|contracted procedure: k950 
o|contracted procedure: k954 
o|contracted procedure: k969 
o|contracted procedure: k979 
o|contracted procedure: k983 
o|contracted procedure: k989 
o|contracted procedure: k1007 
o|contracted procedure: k1016 
o|contracted procedure: k1020 
o|contracted procedure: k1027 
o|contracted procedure: k1047 
o|contracted procedure: k1043 
o|contracted procedure: k1062 
o|contracted procedure: k1071 
o|contracted procedure: k1075 
o|contracted procedure: k1082 
o|contracted procedure: k1097 
o|contracted procedure: k1103 
o|contracted procedure: k1116 
o|contracted procedure: k1120 
o|contracted procedure: k1123 
o|contracted procedure: k1127 
o|contracted procedure: k1131 
o|contracted procedure: k1135 
o|contracted procedure: k1425 
o|contracted procedure: k1290 
o|contracted procedure: k1419 
o|contracted procedure: k1293 
o|contracted procedure: k1413 
o|contracted procedure: k1296 
o|contracted procedure: k1407 
o|contracted procedure: k1299 
o|contracted procedure: k1401 
o|contracted procedure: k1302 
o|contracted procedure: k1395 
o|contracted procedure: k1305 
o|contracted procedure: k1389 
o|contracted procedure: k1308 
o|contracted procedure: k1383 
o|contracted procedure: k1311 
o|contracted procedure: k1329 
o|contracted procedure: k1341 
o|contracted procedure: k1350 
o|contracted procedure: k1365 
o|contracted procedure: k1314 
o|contracted procedure: k1317 
o|contracted procedure: k1483 
o|contracted procedure: k1434 
o|contracted procedure: k1456 
o|contracted procedure: k1437 
o|contracted procedure: k1440 
o|simplifications: ((let . 18)) 
o|removed binding forms: 80 
o|replaced variables: 53 
o|removed binding forms: 24 
o|customizable procedures: (k1109 loop230 loop218 loop209 for-each-loop190200 g166173 for-each-loop165183 loop110 k786 loop118 loop95 doloop103104 loop81 loop73 loop66) 
o|calls to known targets: 29 
o|fast box initializations: 12 
*/
/* end of file */
