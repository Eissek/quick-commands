/* Generated from chicken-ffi-syntax.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:02
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: chicken-ffi-syntax.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file chicken-ffi-syntax.c
   unit: chicken_2dffi_2dsyntax
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[93];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,24),40,97,56,48,57,32,102,111,114,109,52,52,48,32,114,52,52,49,32,99,52,52,50,41};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,52,49,52,32,103,52,50,54,52,51,51,41,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,24),40,97,56,53,51,32,102,111,114,109,52,48,54,32,114,52,48,55,32,99,52,48,56,41};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,51,55,51,32,103,51,56,53,51,57,57,41,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,24),40,97,57,52,54,32,102,111,114,109,51,54,53,32,114,51,54,54,32,99,51,54,55,41};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,51,51,57,32,103,51,53,49,51,53,56,41,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,25),40,97,49,48,51,53,32,102,111,114,109,51,51,49,32,114,51,51,50,32,99,51,51,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,50,57,56,32,103,51,49,48,51,50,52,41,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,25),40,97,49,49,50,56,32,102,111,114,109,50,57,48,32,114,50,57,49,32,99,50,57,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,50,53,55,32,103,50,54,57,50,56,51,41,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,50,50,56,32,103,50,52,48,50,52,54,41,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,25),40,97,49,50,49,55,32,102,111,114,109,50,49,55,32,114,50,49,56,32,99,50,49,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,25),40,97,49,51,56,57,32,102,111,114,109,50,49,49,32,114,50,49,50,32,99,50,49,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,25),40,97,49,52,48,51,32,102,111,114,109,50,48,53,32,114,50,48,54,32,99,50,48,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,25),40,97,49,52,49,55,32,102,111,114,109,49,57,56,32,114,49,57,57,32,99,50,48,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,25),40,97,49,52,51,56,32,102,111,114,109,49,56,53,32,114,49,56,54,32,99,49,56,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,25),40,97,49,53,48,48,32,102,111,114,109,49,54,50,32,114,49,54,51,32,99,49,54,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,6),40,103,49,50,53,41,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,25),40,97,49,54,48,50,32,98,49,52,57,32,97,49,53,48,32,114,101,115,116,49,53,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,17),40,97,49,54,52,54,32,98,49,52,55,32,97,49,52,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,49,49,57,32,103,49,51,49,49,51,56,41,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,25),40,97,49,53,54,53,32,102,111,114,109,49,49,49,32,114,49,49,50,32,99,49,49,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,22),40,97,49,55,48,56,32,102,111,114,109,57,51,32,114,57,52,32,99,57,53,41,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,19),40,97,49,55,56,54,32,120,56,54,32,114,56,55,32,99,56,56,41,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,48,32,103,55,50,55,57,41,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,51,51,32,103,52,53,53,50,41,0,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,19),40,97,49,56,48,51,32,102,111,114,109,54,32,114,55,32,99,56,41,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_973)
static void C_ccall f_973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1933)
static void C_ccall f_1933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_979)
static void C_ccall f_979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1920)
static void C_ccall f_1920(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_904)
static void C_fcall f_904(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1735)
static void C_ccall f_1735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1501)
static void C_ccall f_1501(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1505)
static void C_ccall f_1505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1508)
static void C_ccall f_1508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1945)
static void C_fcall f_1945(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1422)
static void C_ccall f_1422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1439)
static void C_ccall f_1439(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1437)
static void C_ccall f_1437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_933)
static void C_ccall f_933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1266)
static void C_ccall f_1266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1443)
static void C_ccall f_1443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1785)
static void C_ccall f_1785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1787)
static void C_ccall f_1787(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1456)
static void C_fcall f_1456(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1820)
static void C_ccall f_1820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1127)
static void C_ccall f_1127(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1129)
static void C_ccall f_1129(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1877)
static void C_ccall f_1877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1280)
static void C_ccall f_1280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1282)
static void C_fcall f_1282(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1775)
static void C_ccall f_1775(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1771)
static void C_ccall f_1771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1446)
static void C_ccall f_1446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_chicken_2dffi_2dsyntax_toplevel)
C_externexport void C_ccall C_chicken_2dffi_2dsyntax_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1811)
static void C_fcall f_1811(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1814)
static void C_fcall f_1814(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1791)
static void C_ccall f_1791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1830)
static void C_ccall f_1830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1175)
static void C_fcall f_1175(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1404)
static void C_ccall f_1404(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1402)
static void C_ccall f_1402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1647)
static void C_ccall f_1647(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1418)
static void C_ccall f_1418(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1416)
static void C_ccall f_1416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1990)
static void C_ccall f_1990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1992)
static void C_fcall f_1992(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1570)
static void C_ccall f_1570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1576)
static void C_fcall f_1576(C_word t0,C_word t1) C_noret;
C_noret_decl(f_854)
static void C_ccall f_854(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_852)
static void C_ccall f_852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1564)
static void C_ccall f_1564(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1566)
static void C_ccall f_1566(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1133)
static void C_ccall f_1133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1590)
static void C_ccall f_1590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1597)
static void C_ccall f_1597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1709)
static void C_ccall f_1709(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_858)
static void C_ccall f_858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1707)
static void C_ccall f_1707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1584)
static void C_ccall f_1584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1155)
static void C_ccall f_1155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1670)
static void C_fcall f_1670(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_884)
static void C_ccall f_884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1115)
static void C_ccall f_1115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1228)
static void C_ccall f_1228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1728)
static void C_ccall f_1728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1225)
static void C_fcall f_1225(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1222)
static void C_ccall f_1222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1713)
static void C_ccall f_1713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_890)
static void C_ccall f_890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_894)
static void C_ccall f_894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1699)
static void C_ccall f_1699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1080)
static void C_ccall f_1080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_898)
static void C_ccall f_898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1169)
static void C_ccall f_1169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1165)
static void C_ccall f_1165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1161)
static void C_ccall f_1161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1237)
static void C_ccall f_1237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1086)
static void C_fcall f_1086(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1890)
static void C_ccall f_1890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1231)
static void C_ccall f_1231(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1464)
static void C_ccall f_1464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1072)
static void C_ccall f_1072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1076)
static void C_ccall f_1076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1468)
static void C_ccall f_1468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1040)
static void C_ccall f_1040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_820)
static void C_ccall f_820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_823)
static void C_ccall f_823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1480)
static void C_ccall f_1480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1499)
static void C_ccall f_1499(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_795)
static void C_ccall f_795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_792)
static void C_ccall f_792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_798)
static void C_ccall f_798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1601)
static void C_ccall f_1601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1603)
static void C_ccall f_1603(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1311)
static void C_ccall f_1311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1317)
static void C_fcall f_1317(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1022)
static void C_ccall f_1022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_801)
static void C_ccall f_801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_804)
static void C_ccall f_804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_838)
static void C_ccall f_838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1036)
static void C_ccall f_1036(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1034)
static void C_ccall f_1034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1216)
static void C_ccall f_1216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_810)
static void C_ccall f_810(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_817)
static void C_ccall f_817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1218)
static void C_ccall f_1218(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_814)
static void C_ccall f_814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_808)
static void C_ccall f_808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1066)
static void C_ccall f_1066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1388)
static void C_ccall f_1388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_777)
static void C_ccall f_777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_771)
static void C_ccall f_771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_774)
static void C_ccall f_774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_789)
static void C_ccall f_789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_786)
static void C_ccall f_786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_780)
static void C_ccall f_780(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_983)
static void C_ccall f_983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_783)
static void C_ccall f_783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1254)
static void C_fcall f_1254(C_word t0,C_word t1) C_noret;
C_noret_decl(f_987)
static void C_ccall f_987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_993)
static void C_fcall f_993(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1204)
static void C_ccall f_1204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1531)
static void C_ccall f_1531(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1537)
static void C_ccall f_1537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1804)
static void C_ccall f_1804(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1802)
static void C_ccall f_1802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1523)
static void C_ccall f_1523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_945)
static void C_ccall f_945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_947)
static void C_ccall f_947(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1552)
static void C_ccall f_1552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1556)
static void C_ccall f_1556(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_756)
static void C_ccall f_756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_759)
static void C_ccall f_759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_752)
static void C_ccall f_752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_951)
static void C_ccall f_951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1543)
static void C_ccall f_1543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1390)
static void C_ccall f_1390(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1540)
static void C_ccall f_1540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1549)
static void C_ccall f_1549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1546)
static void C_ccall f_1546(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_768)
static void C_ccall f_768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_762)
static void C_ccall f_762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_765)
static void C_ccall f_765(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_904)
static void C_fcall trf_904(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_904(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_904(t0,t1,t2);}

C_noret_decl(trf_1945)
static void C_fcall trf_1945(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1945(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1945(t0,t1,t2);}

C_noret_decl(trf_1456)
static void C_fcall trf_1456(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1456(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1456(t0,t1);}

C_noret_decl(trf_1282)
static void C_fcall trf_1282(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1282(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1282(t0,t1,t2);}

C_noret_decl(trf_1811)
static void C_fcall trf_1811(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1811(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1811(t0,t1);}

C_noret_decl(trf_1814)
static void C_fcall trf_1814(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1814(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1814(t0,t1);}

C_noret_decl(trf_1175)
static void C_fcall trf_1175(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1175(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1175(t0,t1,t2);}

C_noret_decl(trf_1992)
static void C_fcall trf_1992(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1992(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1992(t0,t1,t2);}

C_noret_decl(trf_1576)
static void C_fcall trf_1576(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1576(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1576(t0,t1);}

C_noret_decl(trf_1670)
static void C_fcall trf_1670(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1670(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1670(t0,t1,t2);}

C_noret_decl(trf_1225)
static void C_fcall trf_1225(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1225(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1225(t0,t1);}

C_noret_decl(trf_1086)
static void C_fcall trf_1086(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1086(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1086(t0,t1,t2);}

C_noret_decl(trf_1317)
static void C_fcall trf_1317(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1317(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1317(t0,t1,t2);}

C_noret_decl(trf_1254)
static void C_fcall trf_1254(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1254(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1254(t0,t1);}

C_noret_decl(trf_993)
static void C_fcall trf_993(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_993(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_993(t0,t1,t2);}

C_noret_decl(tr4)
static void C_fcall tr4(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4(C_proc4 k){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
(k)(4,t0,t1,t2,t3);}

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

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

/* k971 in k949 in a946 in k790 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_973,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[21]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_979,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_993,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word)li3),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_993(t7,t3,t1);}

/* k1931 in k1918 in k1988 in k1888 in k1875 in k1812 in k1809 in a1803 in k754 in k750 */
static void C_ccall f_1933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1933,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[2])?C_i_cdddr(((C_word*)t0)[3]):C_i_cddr(((C_word*)t0)[3]));
t3=C_a_i_cons(&a,2,t1,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=C_a_i_list(&a,6,lf[85],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],t4);
t6=((C_word*)t0)[9];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,3,((C_word*)t0)[10],((C_word*)t0)[11],t5));}

/* k977 in k971 in k949 in a946 in k790 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_979,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_983,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_987,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_cadr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:263: ##sys#strip-syntax */
t6=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k1918 in k1988 in k1888 in k1875 in k1812 in k1809 in a1803 in k754 in k750 */
static void C_ccall f_1920(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1920,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1933,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1945,a[2]=t6,a[3]=t9,a[4]=t4,a[5]=((C_word)li24),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_1945(t11,t7,((C_word*)t0)[11]);}

/* map-loop414 in k882 in k856 in a853 in k793 in k790 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_fcall f_904(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_904,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_933,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_car(t4);
/* chicken-ffi-syntax.scm:274: ##compiler#foreign-type->scrutiny-type */
t6=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t5,lf[26]);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1733 in k1726 in k1711 in a1708 in k760 in k757 in k754 in k750 */
static void C_ccall f_1735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1735,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1771,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* chicken-ffi-syntax.scm:101: symbol->string */
t4=*((C_word*)lf[48]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* a1500 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1501(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1501,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1505,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:146: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[53],t2,lf[66]);}

/* k1503 in a1500 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1505,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1508,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:147: gensym */
t3=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[65]);}

/* k1506 in k1503 in a1500 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1508,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1523,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:149: r */
t4=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[64]);}

/* map-loop60 in k1918 in k1988 in k1888 in k1875 in k1812 in k1809 in a1803 in k754 in k750 */
static void C_fcall f_1945(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1945,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
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

/* k1420 in a1417 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1422,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[44],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,2,lf[45],t3));}

/* a1438 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1439(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1439,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1443,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:161: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[47],t2,lf[52]);}

/* k1435 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:156: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[47],C_SCHEME_END_OF_LIST,t1);}

/* k931 in map-loop414 in k882 in k856 in a853 in k793 in k790 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_933(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_933,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_904(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_904(t6,((C_word*)t0)[5],t5);}}

/* k1264 in k1235 in k1229 in k1226 in k1223 in k1220 in a1217 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1266,2,t0,t1);}
t2=t1;
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1280,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:221: ##compiler#foreign-type->scrutiny-type */
t4=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[2],lf[25]);}
else{
t3=((C_word*)t0)[3];
f_1254(t3,C_a_i_cons(&a,2,t2,lf[39]));}}

/* k1441 in a1438 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1443,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1446,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:162: gensym */
t3=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[51]);}

/* k1783 in k757 in k754 in k750 */
static void C_ccall f_1785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:82: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[78],C_SCHEME_END_OF_LIST,t1);}

/* a1786 in k757 in k754 in k750 */
static void C_ccall f_1787(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1787,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1791,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:87: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[78],t2,lf[80]);}

/* k1454 in k1444 in k1441 in a1438 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_fcall f_1456(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1456,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1464,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1468,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_caddr(((C_word*)t0)[4]);
/* chicken-ffi-syntax.scm:175: ##sys#strip-syntax */
t6=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k1818 in k1812 in k1809 in a1803 in k754 in k750 */
static void C_ccall f_1820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1820,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1830,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:56: r */
t5=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[76]);}

/* k1125 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1127(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:225: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[34],C_SCHEME_END_OF_LIST,t1);}

/* a1128 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1129(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1129,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1133,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:230: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[34],t2,lf[36]);}

/* k1875 in k1812 in k1809 in a1803 in k754 in k750 */
static void C_ccall f_1877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1877,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[2])?C_i_cadr(((C_word*)t0)[3]):C_i_car(((C_word*)t0)[3]));
t3=t2;
t4=C_i_cdr(t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1890,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* chicken-ffi-syntax.scm:68: r */
t7=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,lf[87]);}

/* k1278 in k1264 in k1235 in k1229 in k1226 in k1223 in k1220 in a1217 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1280(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1280,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=((C_word*)t0)[2];
f_1254(t3,C_a_i_cons(&a,2,((C_word*)t0)[3],t2));}

/* map-loop257 in k1235 in k1229 in k1226 in k1223 in k1220 in a1217 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_fcall f_1282(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1282,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1311,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[24]+1);
/* chicken-ffi-syntax.scm:218: g280 */
t6=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,lf[26]);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1773 in k1711 in a1708 in k760 in k757 in k754 in k750 */
static void C_ccall f_1775(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:99: r */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k1769 in k1733 in k1726 in k1711 in a1708 in k760 in k757 in k754 in k750 */
static void C_ccall f_1771(C_word c,C_word t0,C_word t1){
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
C_word ab[52],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1771,2,t0,t1);}
t2=C_a_i_list(&a,4,lf[4],((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_a_i_list(&a,5,lf[74],((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_FALSE,((C_word*)t0)[4]);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t4=C_u_i_car(((C_word*)t0)[5]);
t5=C_a_i_list(&a,3,lf[75],((C_word*)t0)[2],t4);
t6=C_a_i_list(&a,1,t5);
t7=C_a_i_cons(&a,2,t3,t6);
t8=C_a_i_cons(&a,2,t2,t7);
t9=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_a_i_cons(&a,2,((C_word*)t0)[7],t8));}
else{
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,t2,t4);
t6=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,((C_word*)t0)[7],t5));}}

/* k1444 in k1441 in a1438 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1446,2,t0,t1);}
t2=t1;
t3=C_i_cadr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1456,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=C_i_caddr(((C_word*)t0)[2]);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1480,a[2]=t4,a[3]=t2,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_stringp(t3))){
t8=t4;
f_1456(t8,C_a_i_list(&a,4,lf[4],t2,t6,t3));}
else{
if(C_truep(C_i_symbolp(t3))){
/* chicken-ffi-syntax.scm:168: symbol->string */
t8=*((C_word*)lf[48]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t3);}
else{
/* chicken-ffi-syntax.scm:170: syntax-error */
t8=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t7,lf[47],lf[50],t3);}}}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_chicken_2dffi_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_chicken_2dffi_2dsyntax_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("chicken_2dffi_2dsyntax_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1388)){
C_save(t1);
C_rereclaim2(1388*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,93);
lf[0]=C_h_intern(&lf[0],33,"\003syschicken-ffi-macro-environment");
lf[1]=C_h_intern(&lf[1],16,"\003sysmacro-subset");
lf[2]=C_h_intern(&lf[2],28,"\003sysextend-macro-environment");
lf[3]=C_h_intern(&lf[3],17,"foreign-type-size");
lf[4]=C_h_intern(&lf[4],28,"\004coredefine-foreign-variable");
lf[5]=C_h_intern(&lf[5],6,"size_t");
lf[6]=C_h_intern(&lf[6],8,"\004corethe");
lf[7]=C_h_intern(&lf[7],6,"fixnum");
lf[8]=C_h_intern(&lf[8],10,"\004corebegin");
lf[9]=C_h_intern(&lf[9],13,"string-append");
lf[10]=C_decode_literal(C_heaptop,"\376B\000\000\007sizeof(");
lf[11]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[12]=C_h_intern(&lf[12],33,"\010compilerforeign-type-declaration");
lf[13]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[14]=C_h_intern(&lf[14],6,"gensym");
lf[15]=C_decode_literal(C_heaptop,"\376B\000\000\005code_");
lf[16]=C_h_intern(&lf[16],16,"\003sysstrip-syntax");
lf[17]=C_h_intern(&lf[17],16,"\003syscheck-syntax");
lf[18]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[19]=C_h_intern(&lf[19],18,"\003syser-transformer");
lf[20]=C_h_intern(&lf[20],20,"foreign-safe-lambda\052");
lf[21]=C_h_intern(&lf[21],3,"map");
lf[22]=C_h_intern(&lf[22],9,"procedure");
lf[23]=C_h_intern(&lf[23],25,"\004coreforeign-safe-lambda\052");
lf[24]=C_h_intern(&lf[24],36,"\010compilerforeign-type->scrutiny-type");
lf[25]=C_h_intern(&lf[25],6,"result");
lf[26]=C_h_intern(&lf[26],3,"arg");
lf[27]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[28]=C_h_intern(&lf[28],19,"foreign-safe-lambda");
lf[29]=C_h_intern(&lf[29],24,"\004coreforeign-safe-lambda");
lf[30]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[31]=C_h_intern(&lf[31],15,"foreign-lambda\052");
lf[32]=C_h_intern(&lf[32],20,"\004coreforeign-lambda\052");
lf[33]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[34]=C_h_intern(&lf[34],14,"foreign-lambda");
lf[35]=C_h_intern(&lf[35],19,"\004coreforeign-lambda");
lf[36]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[37]=C_h_intern(&lf[37],17,"foreign-primitive");
lf[38]=C_h_intern(&lf[38],22,"\004coreforeign-primitive");
lf[39]=C_h_intern(&lf[39],1,"\052");
lf[40]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[41]=C_h_intern(&lf[41],23,"define-foreign-variable");
lf[42]=C_h_intern(&lf[42],19,"define-foreign-type");
lf[43]=C_h_intern(&lf[43],24,"\004coredefine-foreign-type");
lf[44]=C_h_intern(&lf[44],15,"foreign-declare");
lf[45]=C_h_intern(&lf[45],12,"\004coredeclare");
lf[46]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\006string\376\377\001\000\000\000\000");
lf[47]=C_h_intern(&lf[47],13,"foreign-value");
lf[48]=C_h_intern(&lf[48],14,"symbol->string");
lf[49]=C_h_intern(&lf[49],12,"syntax-error");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\052bad argument type - not a string or symbol");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000\005code_");
lf[52]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[53]=C_h_intern(&lf[53],12,"foreign-code");
lf[54]=C_h_intern(&lf[54],7,"sprintf");
lf[55]=C_h_intern(&lf[55],11,"\004coreinline");
lf[56]=C_h_intern(&lf[56],17,"get-output-string");
lf[57]=C_h_intern(&lf[57],9,"\003sysprint");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000 \012; return C_SCHEME_UNDEFINED; }\012");
lf[59]=C_h_intern(&lf[59],18,"string-intersperse");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000\005() { ");
lf[62]=C_decode_literal(C_heaptop,"\376B\000\000\016static C_word ");
lf[63]=C_h_intern(&lf[63],18,"open-output-string");
lf[64]=C_h_intern(&lf[64],7,"declare");
lf[65]=C_h_intern(&lf[65],5,"code_");
lf[66]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\006string\376\377\001\000\000\000\000");
lf[67]=C_h_intern(&lf[67],12,"let-location");
lf[68]=C_h_intern(&lf[68],8,"\004corelet");
lf[69]=C_h_intern(&lf[69],17,"\004corelet-location");
lf[70]=C_h_intern(&lf[70],10,"fold-right");
lf[71]=C_h_intern(&lf[71],10,"append-map");
lf[72]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001\376\377\001\000\000"
"\000\000\376\001\000\000\001_");
lf[73]=C_h_intern(&lf[73],15,"define-location");
lf[74]=C_h_intern(&lf[74],29,"\004coredefine-external-variable");
lf[75]=C_h_intern(&lf[75],9,"\004coreset!");
lf[76]=C_h_intern(&lf[76],5,"begin");
lf[77]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001");
lf[78]=C_h_intern(&lf[78],8,"location");
lf[79]=C_h_intern(&lf[79],13,"\004corelocation");
lf[80]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010location\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[81]=C_h_intern(&lf[81],15,"define-external");
lf[82]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001");
lf[83]=C_h_intern(&lf[83],5,"quote");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[85]=C_h_intern(&lf[85],29,"\004coreforeign-callback-wrapper");
lf[86]=C_h_intern(&lf[86],6,"lambda");
lf[87]=C_h_intern(&lf[87],6,"define");
lf[88]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\000\000\000\002\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\377\016\376\377\001\000\000\000\000\376"
"\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[89]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\000\000\000\002\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\377\016\376\377\001\000\000\000\000\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376"
"\001\000\000\001_\376\377\001\000\000\000\001");
lf[90]=C_h_intern(&lf[90],21,"\003sysmacro-environment");
lf[91]=C_h_intern(&lf[91],11,"\003sysprovide");
lf[92]=C_h_intern(&lf[92],18,"chicken-ffi-syntax");
C_register_lf2(lf,93,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_752,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:38: ##sys#provide */
t3=*((C_word*)lf[91]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[92]);}

/* k1809 in a1803 in k754 in k750 */
static void C_fcall f_1811(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1811,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1814,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_1814(t4,C_SCHEME_FALSE);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t4=C_u_i_car(((C_word*)t0)[2]);
t5=t3;
f_1814(t5,C_i_symbolp(t4));}
else{
t4=t3;
f_1814(t4,C_SCHEME_FALSE);}}}

/* k1812 in k1809 in a1803 in k754 in k750 */
static void C_fcall f_1814(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1814,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1820,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:54: ##sys#check-syntax */
t3=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[81],((C_word*)t0)[2],lf[82]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1877,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
/* chicken-ffi-syntax.scm:64: ##sys#check-syntax */
t3=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[81],((C_word*)t0)[2],lf[88]);}
else{
/* chicken-ffi-syntax.scm:65: ##sys#check-syntax */
t3=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[81],((C_word*)t0)[2],lf[89]);}}}

/* k1789 in a1786 in k757 in k754 in k750 */
static void C_ccall f_1791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1791,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,2,lf[79],t2));}

/* k1828 in k1818 in k1812 in k1809 in a1803 in k754 in k750 */
static void C_ccall f_1830(C_word c,C_word t0,C_word t1){
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
C_word ab[46],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1830,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,lf[4],((C_word*)t0)[3],t2);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_car(t4);
t6=C_a_i_list(&a,4,lf[74],((C_word*)t0)[3],t5,C_SCHEME_TRUE);
t7=C_u_i_cdr(((C_word*)t0)[2]);
t8=C_u_i_cdr(t7);
if(C_truep(C_i_pairp(t8))){
t9=C_i_caddr(((C_word*)t0)[2]);
t10=C_a_i_list(&a,3,lf[75],((C_word*)t0)[3],t9);
t11=C_a_i_list(&a,1,t10);
t12=C_a_i_cons(&a,2,t6,t11);
t13=C_a_i_cons(&a,2,t3,t12);
t14=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_a_i_cons(&a,2,t1,t13));}
else{
t9=C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t10=C_a_i_cons(&a,2,t3,t9);
t11=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_a_i_cons(&a,2,t1,t10));}}

/* map-loop298 in k1153 in k1131 in a1128 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_fcall f_1175(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1175,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1204,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[24]+1);
/* chicken-ffi-syntax.scm:232: g321 */
t6=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,lf[26]);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* a1403 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1404(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1404,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,lf[43],t5));}

/* k1400 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:193: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[42],C_SCHEME_END_OF_LIST,t1);}

/* a1646 in k1588 in k1568 in a1565 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1647(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1647,4,t0,t1,t2,t3);}
t4=C_i_cddr(t2);
if(C_truep(C_i_pairp(t4))){
t5=t2;
t6=C_u_i_cdr(t5);
t7=C_u_i_cdr(t6);
t8=C_a_i_cons(&a,2,t3,t7);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_a_i_list1(&a,1,t8));}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_END_OF_LIST);}}

/* a1417 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1418(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1418,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1422,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:187: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[44],t2,lf[46]);}

/* k1414 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:182: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[44],C_SCHEME_END_OF_LIST,t1);}

/* k1988 in k1888 in k1875 in k1812 in k1809 in a1803 in k754 in k750 */
static void C_ccall f_1990(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1990,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[83],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1920,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-ffi-syntax.scm:74: r */
t5=((C_word*)t0)[11];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[86]);}

/* map-loop33 in k1888 in k1875 in k1812 in k1809 in a1803 in k754 in k750 */
static void C_fcall f_1992(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1992,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
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

/* k1568 in a1565 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1570(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1570,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1576,a[2]=((C_word*)t0)[3],a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp);
t12=C_i_check_list_2(t3,lf[21]);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1590,a[2]=((C_word*)t0)[4],a[3]=t6,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1670,a[2]=t10,a[3]=t15,a[4]=t8,a[5]=t11,a[6]=((C_word)li20),tmp=(C_word)a,a+=7,tmp));
t17=((C_word*)t15)[1];
f_1670(t17,t13,t3);}

/* g125 in k1568 in a1565 in k763 in k760 in k757 in k754 in k750 */
static void C_fcall f_1576(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1576,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1584,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:115: gensym */
t3=*((C_word*)lf[14]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* a853 in k793 in k790 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_854(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_854,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_858,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:272: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[20],t2,lf[27]);}

/* k850 in k793 in k790 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:267: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[20],C_SCHEME_END_OF_LIST,t1);}

/* k1562 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1564(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:107: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[67],C_SCHEME_END_OF_LIST,t1);}

/* a1565 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1566(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1566,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1570,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:112: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[67],t2,lf[72]);}

/* k1131 in a1128 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1133,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1155,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t7=C_i_cdddr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:233: ##sys#strip-syntax */
t8=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t6,t7);}

/* k1588 in k1568 in a1565 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1590,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1597,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1647,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:117: append-map */
t5=*((C_word*)lf[71]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,((C_word*)t0)[4],t2);}

/* k1595 in k1588 in k1568 in a1565 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1597(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1597,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1601,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1603,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp);
t5=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);
t6=C_a_i_cons(&a,2,lf[68],t5);
/* chicken-ffi-syntax.scm:123: fold-right */
t7=*((C_word*)lf[70]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t3,t4,t6,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* a1708 in k760 in k757 in k754 in k750 */
static void C_ccall f_1709(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1709,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1713,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:95: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[73],t2,lf[77]);}

/* k856 in a853 in k793 in k790 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_858,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_884,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t7=C_i_caddr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:275: ##sys#strip-syntax */
t8=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t6,t7);}

/* k1705 in k760 in k757 in k754 in k750 */
static void C_ccall f_1707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:90: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[73],C_SCHEME_END_OF_LIST,t1);}

/* k1582 in g125 in k1568 in a1565 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1584(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:115: r */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k1153 in k1131 in a1128 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1155,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[21]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1161,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1175,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word)li7),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_1175(t7,t3,t1);}

/* map-loop119 in k1568 in a1565 in k763 in k760 in k757 in k754 in k750 */
static void C_fcall f_1670(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1670,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1699,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-ffi-syntax.scm:115: g125 */
t4=((C_word*)t0)[5];
f_1576(t4,t3);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k882 in k856 in a853 in k793 in k790 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_884,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[21]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_890,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_904,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word)li1),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_904(t7,t3,t1);}

/* k1113 in map-loop339 in k1064 in k1038 in a1035 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1115(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1115,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1086(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1086(t6,((C_word*)t0)[5],t5);}}

/* k1226 in k1223 in k1220 in a1217 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1228,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1231,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_truep(((C_word*)t0)[4])?C_i_caddr(((C_word*)t0)[2]):C_i_cadr(((C_word*)t0)[2]));
/* chicken-ffi-syntax.scm:215: ##sys#strip-syntax */
t5=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k1726 in k1711 in a1708 in k760 in k757 in k754 in k750 */
static void C_ccall f_1728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1728,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1735,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-ffi-syntax.scm:100: r */
t4=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[76]);}

/* k1223 in k1220 in a1217 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_fcall f_1225(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1225,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1228,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_car(t5);
/* chicken-ffi-syntax.scm:214: ##sys#strip-syntax */
t7=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t3,t6);}
else{
t4=t3;
f_1228(2,t4,C_SCHEME_FALSE);}}

/* k1220 in a1217 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1222,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1225,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cddr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t3))){
t4=C_i_caddr(((C_word*)t0)[2]);
t5=C_i_stringp(t4);
t6=t2;
f_1225(t6,C_i_not(t5));}
else{
t4=t2;
f_1225(t4,C_SCHEME_FALSE);}}

/* k1711 in a1708 in k760 in k757 in k754 in k750 */
static void C_ccall f_1713(C_word c,C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1713,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=C_i_caddr(((C_word*)t0)[2]);
t5=t4;
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
t8=C_u_i_cdr(t7);
t9=C_u_i_cdr(t8);
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_SCHEME_FALSE:C_i_car(t9));
t12=t11;
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1728,a[2]=t3,a[3]=t5,a[4]=t12,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1775,a[2]=((C_word*)t0)[4],a[3]=t13,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:99: gensym */
t15=*((C_word*)lf[14]+1);
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,t14);}

/* k888 in k882 in k856 in a853 in k793 in k790 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_890,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_894,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_898,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_cadr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:277: ##sys#strip-syntax */
t6=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k892 in k888 in k882 in k856 in a853 in k793 in k790 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_894,2,t0,t1);}
t2=C_a_i_list(&a,3,lf[22],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,lf[23],t4);
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,4,lf[6],t2,C_SCHEME_FALSE,t5));}

/* k1697 in map-loop119 in k1568 in a1565 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1699(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1699,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1670(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1670(t6,((C_word*)t0)[5],t5);}}

/* k1078 in k1070 in k1064 in k1038 in a1035 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:248: ##compiler#foreign-type->scrutiny-type */
t2=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[25]);}

/* k896 in k888 in k882 in k856 in a853 in k793 in k790 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:276: ##compiler#foreign-type->scrutiny-type */
t2=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[25]);}

/* k1167 in k1159 in k1153 in k1131 in a1128 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1169(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:234: ##compiler#foreign-type->scrutiny-type */
t2=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[25]);}

/* k1163 in k1159 in k1153 in k1131 in a1128 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1165,2,t0,t1);}
t2=C_a_i_list(&a,3,lf[22],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,lf[35],t4);
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,4,lf[6],t2,C_SCHEME_FALSE,t5));}

/* k1159 in k1153 in k1131 in a1128 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1161,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1165,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1169,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_cadr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:235: ##sys#strip-syntax */
t6=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k1235 in k1229 in k1226 in k1223 in k1220 in a1217 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1237(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1237,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1254,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(t1,lf[21]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1266,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1282,a[2]=t6,a[3]=t10,a[4]=t4,a[5]=((C_word)li9),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_1282(t12,t8,t1);}

/* map-loop339 in k1064 in k1038 in a1035 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_fcall f_1086(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1086,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1115,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_car(t4);
/* chicken-ffi-syntax.scm:246: ##compiler#foreign-type->scrutiny-type */
t6=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t5,lf[26]);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1888 in k1875 in k1812 in k1809 in a1803 in k754 in k750 */
static void C_ccall f_1890(C_word c,C_word t0,C_word t1){
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
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1890,2,t0,t1);}
t2=t1;
t3=C_u_i_car(((C_word*)t0)[2]);
t4=C_u_i_car(((C_word*)t0)[2]);
t5=C_a_i_list(&a,2,lf[83],t4);
t6=t5;
t7=(C_truep(((C_word*)t0)[3])?C_i_car(((C_word*)t0)[4]):lf[84]);
t8=t7;
t9=(C_truep(((C_word*)t0)[3])?C_i_caddr(((C_word*)t0)[4]):C_i_cadr(((C_word*)t0)[4]));
t10=C_a_i_list(&a,2,lf[83],t9);
t11=t10;
t12=C_SCHEME_END_OF_LIST;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_FALSE;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_i_check_list_2(((C_word*)t0)[5],lf[21]);
t17=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1990,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t6,a[5]=t8,a[6]=t11,a[7]=((C_word*)t0)[6],a[8]=t2,a[9]=t3,a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1992,a[2]=t15,a[3]=t19,a[4]=t13,a[5]=((C_word)li25),tmp=(C_word)a,a+=6,tmp));
t21=((C_word*)t19)[1];
f_1992(t21,t17,((C_word*)t0)[5]);}

/* k1229 in k1226 in k1223 in k1220 in a1217 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1231(C_word c,C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1231,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_i_check_list_2(t1,lf[21]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1237,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1317,a[2]=t5,a[3]=t9,a[4]=t3,a[5]=((C_word)li10),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_1317(t11,t7,t1);}

/* k1462 in k1454 in k1444 in k1441 in a1438 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1464,2,t0,t1);}
t2=C_a_i_list(&a,4,lf[6],t1,C_SCHEME_FALSE,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,3,lf[8],((C_word*)t0)[4],t2));}

/* k1070 in k1064 in k1038 in a1035 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1072,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1076,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1080,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_cadr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:249: ##sys#strip-syntax */
t6=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k1074 in k1070 in k1064 in k1038 in a1035 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1076,2,t0,t1);}
t2=C_a_i_list(&a,3,lf[22],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,lf[32],t4);
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,4,lf[6],t2,C_SCHEME_FALSE,t5));}

/* k1466 in k1454 in k1444 in k1441 in a1438 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:174: ##compiler#foreign-type->scrutiny-type */
t2=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[25]);}

/* k1038 in a1035 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1040(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1040,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1066,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t7=C_i_caddr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:247: ##sys#strip-syntax */
t8=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t6,t7);}

/* k818 in k815 in k812 in a809 in k796 in k793 in k790 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_820,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_823,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
t4=t3;
f_823(2,t4,((C_word*)t0)[3]);}
else{
/* chicken-ffi-syntax.scm:292: ##compiler#foreign-type-declaration */
t4=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],lf[13]);}}

/* k821 in k818 in k815 in k812 in a809 in k796 in k793 in k790 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_823,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_838,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:294: string-append */
t3=*((C_word*)lf[9]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[10],t1,lf[11]);}

/* k1478 in k1444 in k1441 in a1438 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1480,2,t0,t1);}
t2=((C_word*)t0)[2];
f_1456(t2,C_a_i_list(&a,4,lf[4],((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* k1497 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1499(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:141: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[53],C_SCHEME_END_OF_LIST,t1);}

/* k793 in k790 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_795,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_798,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_852,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_854,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:270: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k790 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_792,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_795,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_945,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_947,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:256: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k796 in k793 in k790 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_798(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_798,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_801,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_808,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_810,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:284: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k1599 in k1595 in k1588 in k1568 in a1565 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1601,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[68],((C_word*)t0)[3],t1));}

/* a1602 in k1595 in k1588 in k1568 in a1565 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1603(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[16],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1603,5,t0,t1,t2,t3,t4);}
t5=C_i_length(t2);
t6=C_eqp(C_fix(3),t5);
if(C_truep(t6)){
t7=C_i_car(t2);
t8=C_i_cadr(t2);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_a_i_list(&a,5,lf[69],t7,t8,t3,t4));}
else{
t7=C_i_car(t2);
t8=C_i_cadr(t2);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_a_i_list(&a,4,lf[69],t7,t8,t4));}}

/* k1309 in map-loop257 in k1235 in k1229 in k1226 in k1223 in k1220 in a1217 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1311(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1311,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1282(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1282(t6,((C_word*)t0)[5],t5);}}

/* map-loop228 in k1229 in k1226 in k1223 in k1220 in a1217 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_fcall f_1317(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1317,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
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

/* k1020 in map-loop373 in k971 in k949 in a946 in k790 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1022(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1022,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_993(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_993(t6,((C_word*)t0)[5],t5);}}

/* k799 in k796 in k793 in k790 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_801,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_804,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:298: ##sys#macro-subset */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k802 in k799 in k796 in k793 in k790 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2((C_word*)lf[0]+1 /* (set! ##sys#chicken-ffi-macro-environment ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* k836 in k821 in k818 in k815 in k812 in a809 in k796 in k793 in k790 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 in ... */
static void C_ccall f_838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_838,2,t0,t1);}
t2=C_a_i_list(&a,4,lf[4],((C_word*)t0)[2],lf[5],t1);
t3=C_a_i_list(&a,4,lf[6],lf[7],C_SCHEME_FALSE,((C_word*)t0)[2]);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[8],t2,t3));}

/* a1035 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1036(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1036,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1040,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:244: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[31],t2,lf[33]);}

/* k1032 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1034(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:239: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[31],C_SCHEME_END_OF_LIST,t1);}

/* k1214 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:207: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[37],C_SCHEME_END_OF_LIST,t1);}

/* a809 in k796 in k793 in k790 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_810(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_810,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_814,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:286: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[3],t2,lf[18]);}

/* k815 in k812 in a809 in k796 in k793 in k790 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_817,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_820,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:288: gensym */
t4=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[15]);}

/* a1217 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1218(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1218,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1222,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:212: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[37],t2,lf[40]);}

/* k812 in a809 in k796 in k793 in k790 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_814,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_817,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* chicken-ffi-syntax.scm:287: ##sys#strip-syntax */
t4=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* k806 in k796 in k793 in k790 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:281: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[3],C_SCHEME_END_OF_LIST,t1);}

/* k1064 in k1038 in a1035 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1066,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[21]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1072,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1086,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word)li5),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_1086(t7,t3,t1);}

/* k1386 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:200: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[41],C_SCHEME_END_OF_LIST,t1);}

/* k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_777,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_780,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1402,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1404,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:196: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_771,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_774,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1437,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1439,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:159: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_774,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_777,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1416,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1418,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:185: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_789,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_792,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1034,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1036,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:242: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_786,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_789,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1127,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1129,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:228: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_780(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_780,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_783,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1388,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1390,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:203: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k981 in k977 in k971 in k949 in a946 in k790 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_983,2,t0,t1);}
t2=C_a_i_list(&a,3,lf[22],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,lf[29],t4);
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,4,lf[6],t2,C_SCHEME_FALSE,t5));}

/* k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_783,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_786,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1216,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1218,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:210: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k1252 in k1235 in k1229 in k1226 in k1223 in k1220 in a1217 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_fcall f_1254(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1254,NULL,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[22],t1);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,lf[38],t4);
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,4,lf[6],t2,C_SCHEME_FALSE,t5));}

/* k985 in k977 in k971 in k949 in a946 in k790 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:262: ##compiler#foreign-type->scrutiny-type */
t2=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[25]);}

/* map-loop373 in k971 in k949 in a946 in k790 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_fcall f_993(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_993,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1022,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[24]+1);
/* chicken-ffi-syntax.scm:260: g396 */
t6=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,lf[26]);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1202 in map-loop298 in k1153 in k1131 in a1128 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1204(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1204,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1175(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1175(t6,((C_word*)t0)[5],t5);}}

/* k1529 in k1521 in k1506 in k1503 in a1500 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1531(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1531,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[54]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1537,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t3,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* chicken-ffi-syntax.scm:151: ##sys#print */
t6=*((C_word*)lf[57]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[62],C_SCHEME_FALSE,t3);}

/* k1535 in k1529 in k1521 in k1506 in k1503 in a1500 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1537,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1540,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken-ffi-syntax.scm:151: ##sys#print */
t3=*((C_word*)lf[57]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[3],C_SCHEME_FALSE,((C_word*)t0)[6]);}

/* a1803 in k754 in k750 */
static void C_ccall f_1804(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1804,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1811,a[2]=t6,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t6))){
t8=C_u_i_car(t6);
t9=t7;
f_1811(t9,C_i_stringp(t8));}
else{
t8=t7;
f_1811(t8,C_SCHEME_FALSE);}}

/* k1800 in k754 in k750 */
static void C_ccall f_1802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:45: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[81],C_SCHEME_END_OF_LIST,t1);}

/* k1521 in k1506 in k1503 in a1500 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1523,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1531,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-ffi-syntax.scm:151: open-output-string */
t4=*((C_word*)lf[63]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k943 in k790 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:253: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[28],C_SCHEME_END_OF_LIST,t1);}

/* a946 in k790 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_947(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_947,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_951,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:258: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[28],t2,lf[30]);}

/* k1550 in k1547 in k1544 in k1541 in k1538 in k1535 in k1529 in k1521 in k1506 in k1503 in a1500 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1552,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[44],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_list(&a,2,lf[55],((C_word*)t0)[3]);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,3,lf[8],t3,t4));}

/* k1554 in k1541 in k1538 in k1535 in k1529 in k1521 in k1506 in k1503 in a1500 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1556(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:151: ##sys#print */
t2=*((C_word*)lf[57]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k754 in k750 */
static void C_ccall f_756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_756,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_759,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1802,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1804,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:48: ##sys#er-transformer */
t6=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k757 in k754 in k750 */
static void C_ccall f_759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_759,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_762,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1785,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1787,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:85: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k750 */
static void C_ccall f_752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_752,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_756,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:43: ##sys#macro-environment */
t3=*((C_word*)lf[90]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k949 in a946 in k790 in k787 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_951,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_973,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t7=C_i_cdddr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:261: ##sys#strip-syntax */
t8=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t6,t7);}

/* k1541 in k1538 in k1535 in k1529 in k1521 in k1506 in k1503 in a1500 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1543,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1546,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1556,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=C_i_cdr(((C_word*)t0)[7]);
/* chicken-ffi-syntax.scm:153: string-intersperse */
t5=*((C_word*)lf[59]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,lf[60]);}

/* a1389 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1390(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1390,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,lf[4],t5));}

/* k1538 in k1535 in k1529 in k1521 in k1506 in k1503 in a1500 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1540,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1543,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken-ffi-syntax.scm:151: ##sys#print */
t3=*((C_word*)lf[57]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[61],C_SCHEME_FALSE,((C_word*)t0)[6]);}

/* k1547 in k1544 in k1541 in k1538 in k1535 in k1529 in k1521 in k1506 in k1503 in a1500 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1549,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1552,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:151: get-output-string */
t3=*((C_word*)lf[56]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k1544 in k1541 in k1538 in k1535 in k1529 in k1521 in k1506 in k1503 in a1500 in k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_1546(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1546,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1549,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-ffi-syntax.scm:151: ##sys#print */
t3=*((C_word*)lf[57]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[58],C_SCHEME_FALSE,((C_word*)t0)[6]);}

/* k766 in k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_768,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_771,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1499,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1501,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:144: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k760 in k757 in k754 in k750 */
static void C_ccall f_762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_762,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_765,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1707,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1709,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:93: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k763 in k760 in k757 in k754 in k750 */
static void C_ccall f_765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_765,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_768,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1564,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1566,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:110: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[139] = {
{"f_973:chicken_2dffi_2dsyntax_2escm",(void*)f_973},
{"f_1933:chicken_2dffi_2dsyntax_2escm",(void*)f_1933},
{"f_979:chicken_2dffi_2dsyntax_2escm",(void*)f_979},
{"f_1920:chicken_2dffi_2dsyntax_2escm",(void*)f_1920},
{"f_904:chicken_2dffi_2dsyntax_2escm",(void*)f_904},
{"f_1735:chicken_2dffi_2dsyntax_2escm",(void*)f_1735},
{"f_1501:chicken_2dffi_2dsyntax_2escm",(void*)f_1501},
{"f_1505:chicken_2dffi_2dsyntax_2escm",(void*)f_1505},
{"f_1508:chicken_2dffi_2dsyntax_2escm",(void*)f_1508},
{"f_1945:chicken_2dffi_2dsyntax_2escm",(void*)f_1945},
{"f_1422:chicken_2dffi_2dsyntax_2escm",(void*)f_1422},
{"f_1439:chicken_2dffi_2dsyntax_2escm",(void*)f_1439},
{"f_1437:chicken_2dffi_2dsyntax_2escm",(void*)f_1437},
{"f_933:chicken_2dffi_2dsyntax_2escm",(void*)f_933},
{"f_1266:chicken_2dffi_2dsyntax_2escm",(void*)f_1266},
{"f_1443:chicken_2dffi_2dsyntax_2escm",(void*)f_1443},
{"f_1785:chicken_2dffi_2dsyntax_2escm",(void*)f_1785},
{"f_1787:chicken_2dffi_2dsyntax_2escm",(void*)f_1787},
{"f_1456:chicken_2dffi_2dsyntax_2escm",(void*)f_1456},
{"f_1820:chicken_2dffi_2dsyntax_2escm",(void*)f_1820},
{"f_1127:chicken_2dffi_2dsyntax_2escm",(void*)f_1127},
{"f_1129:chicken_2dffi_2dsyntax_2escm",(void*)f_1129},
{"f_1877:chicken_2dffi_2dsyntax_2escm",(void*)f_1877},
{"f_1280:chicken_2dffi_2dsyntax_2escm",(void*)f_1280},
{"f_1282:chicken_2dffi_2dsyntax_2escm",(void*)f_1282},
{"f_1775:chicken_2dffi_2dsyntax_2escm",(void*)f_1775},
{"f_1771:chicken_2dffi_2dsyntax_2escm",(void*)f_1771},
{"f_1446:chicken_2dffi_2dsyntax_2escm",(void*)f_1446},
{"toplevel:chicken_2dffi_2dsyntax_2escm",(void*)C_chicken_2dffi_2dsyntax_toplevel},
{"f_1811:chicken_2dffi_2dsyntax_2escm",(void*)f_1811},
{"f_1814:chicken_2dffi_2dsyntax_2escm",(void*)f_1814},
{"f_1791:chicken_2dffi_2dsyntax_2escm",(void*)f_1791},
{"f_1830:chicken_2dffi_2dsyntax_2escm",(void*)f_1830},
{"f_1175:chicken_2dffi_2dsyntax_2escm",(void*)f_1175},
{"f_1404:chicken_2dffi_2dsyntax_2escm",(void*)f_1404},
{"f_1402:chicken_2dffi_2dsyntax_2escm",(void*)f_1402},
{"f_1647:chicken_2dffi_2dsyntax_2escm",(void*)f_1647},
{"f_1418:chicken_2dffi_2dsyntax_2escm",(void*)f_1418},
{"f_1416:chicken_2dffi_2dsyntax_2escm",(void*)f_1416},
{"f_1990:chicken_2dffi_2dsyntax_2escm",(void*)f_1990},
{"f_1992:chicken_2dffi_2dsyntax_2escm",(void*)f_1992},
{"f_1570:chicken_2dffi_2dsyntax_2escm",(void*)f_1570},
{"f_1576:chicken_2dffi_2dsyntax_2escm",(void*)f_1576},
{"f_854:chicken_2dffi_2dsyntax_2escm",(void*)f_854},
{"f_852:chicken_2dffi_2dsyntax_2escm",(void*)f_852},
{"f_1564:chicken_2dffi_2dsyntax_2escm",(void*)f_1564},
{"f_1566:chicken_2dffi_2dsyntax_2escm",(void*)f_1566},
{"f_1133:chicken_2dffi_2dsyntax_2escm",(void*)f_1133},
{"f_1590:chicken_2dffi_2dsyntax_2escm",(void*)f_1590},
{"f_1597:chicken_2dffi_2dsyntax_2escm",(void*)f_1597},
{"f_1709:chicken_2dffi_2dsyntax_2escm",(void*)f_1709},
{"f_858:chicken_2dffi_2dsyntax_2escm",(void*)f_858},
{"f_1707:chicken_2dffi_2dsyntax_2escm",(void*)f_1707},
{"f_1584:chicken_2dffi_2dsyntax_2escm",(void*)f_1584},
{"f_1155:chicken_2dffi_2dsyntax_2escm",(void*)f_1155},
{"f_1670:chicken_2dffi_2dsyntax_2escm",(void*)f_1670},
{"f_884:chicken_2dffi_2dsyntax_2escm",(void*)f_884},
{"f_1115:chicken_2dffi_2dsyntax_2escm",(void*)f_1115},
{"f_1228:chicken_2dffi_2dsyntax_2escm",(void*)f_1228},
{"f_1728:chicken_2dffi_2dsyntax_2escm",(void*)f_1728},
{"f_1225:chicken_2dffi_2dsyntax_2escm",(void*)f_1225},
{"f_1222:chicken_2dffi_2dsyntax_2escm",(void*)f_1222},
{"f_1713:chicken_2dffi_2dsyntax_2escm",(void*)f_1713},
{"f_890:chicken_2dffi_2dsyntax_2escm",(void*)f_890},
{"f_894:chicken_2dffi_2dsyntax_2escm",(void*)f_894},
{"f_1699:chicken_2dffi_2dsyntax_2escm",(void*)f_1699},
{"f_1080:chicken_2dffi_2dsyntax_2escm",(void*)f_1080},
{"f_898:chicken_2dffi_2dsyntax_2escm",(void*)f_898},
{"f_1169:chicken_2dffi_2dsyntax_2escm",(void*)f_1169},
{"f_1165:chicken_2dffi_2dsyntax_2escm",(void*)f_1165},
{"f_1161:chicken_2dffi_2dsyntax_2escm",(void*)f_1161},
{"f_1237:chicken_2dffi_2dsyntax_2escm",(void*)f_1237},
{"f_1086:chicken_2dffi_2dsyntax_2escm",(void*)f_1086},
{"f_1890:chicken_2dffi_2dsyntax_2escm",(void*)f_1890},
{"f_1231:chicken_2dffi_2dsyntax_2escm",(void*)f_1231},
{"f_1464:chicken_2dffi_2dsyntax_2escm",(void*)f_1464},
{"f_1072:chicken_2dffi_2dsyntax_2escm",(void*)f_1072},
{"f_1076:chicken_2dffi_2dsyntax_2escm",(void*)f_1076},
{"f_1468:chicken_2dffi_2dsyntax_2escm",(void*)f_1468},
{"f_1040:chicken_2dffi_2dsyntax_2escm",(void*)f_1040},
{"f_820:chicken_2dffi_2dsyntax_2escm",(void*)f_820},
{"f_823:chicken_2dffi_2dsyntax_2escm",(void*)f_823},
{"f_1480:chicken_2dffi_2dsyntax_2escm",(void*)f_1480},
{"f_1499:chicken_2dffi_2dsyntax_2escm",(void*)f_1499},
{"f_795:chicken_2dffi_2dsyntax_2escm",(void*)f_795},
{"f_792:chicken_2dffi_2dsyntax_2escm",(void*)f_792},
{"f_798:chicken_2dffi_2dsyntax_2escm",(void*)f_798},
{"f_1601:chicken_2dffi_2dsyntax_2escm",(void*)f_1601},
{"f_1603:chicken_2dffi_2dsyntax_2escm",(void*)f_1603},
{"f_1311:chicken_2dffi_2dsyntax_2escm",(void*)f_1311},
{"f_1317:chicken_2dffi_2dsyntax_2escm",(void*)f_1317},
{"f_1022:chicken_2dffi_2dsyntax_2escm",(void*)f_1022},
{"f_801:chicken_2dffi_2dsyntax_2escm",(void*)f_801},
{"f_804:chicken_2dffi_2dsyntax_2escm",(void*)f_804},
{"f_838:chicken_2dffi_2dsyntax_2escm",(void*)f_838},
{"f_1036:chicken_2dffi_2dsyntax_2escm",(void*)f_1036},
{"f_1034:chicken_2dffi_2dsyntax_2escm",(void*)f_1034},
{"f_1216:chicken_2dffi_2dsyntax_2escm",(void*)f_1216},
{"f_810:chicken_2dffi_2dsyntax_2escm",(void*)f_810},
{"f_817:chicken_2dffi_2dsyntax_2escm",(void*)f_817},
{"f_1218:chicken_2dffi_2dsyntax_2escm",(void*)f_1218},
{"f_814:chicken_2dffi_2dsyntax_2escm",(void*)f_814},
{"f_808:chicken_2dffi_2dsyntax_2escm",(void*)f_808},
{"f_1066:chicken_2dffi_2dsyntax_2escm",(void*)f_1066},
{"f_1388:chicken_2dffi_2dsyntax_2escm",(void*)f_1388},
{"f_777:chicken_2dffi_2dsyntax_2escm",(void*)f_777},
{"f_771:chicken_2dffi_2dsyntax_2escm",(void*)f_771},
{"f_774:chicken_2dffi_2dsyntax_2escm",(void*)f_774},
{"f_789:chicken_2dffi_2dsyntax_2escm",(void*)f_789},
{"f_786:chicken_2dffi_2dsyntax_2escm",(void*)f_786},
{"f_780:chicken_2dffi_2dsyntax_2escm",(void*)f_780},
{"f_983:chicken_2dffi_2dsyntax_2escm",(void*)f_983},
{"f_783:chicken_2dffi_2dsyntax_2escm",(void*)f_783},
{"f_1254:chicken_2dffi_2dsyntax_2escm",(void*)f_1254},
{"f_987:chicken_2dffi_2dsyntax_2escm",(void*)f_987},
{"f_993:chicken_2dffi_2dsyntax_2escm",(void*)f_993},
{"f_1204:chicken_2dffi_2dsyntax_2escm",(void*)f_1204},
{"f_1531:chicken_2dffi_2dsyntax_2escm",(void*)f_1531},
{"f_1537:chicken_2dffi_2dsyntax_2escm",(void*)f_1537},
{"f_1804:chicken_2dffi_2dsyntax_2escm",(void*)f_1804},
{"f_1802:chicken_2dffi_2dsyntax_2escm",(void*)f_1802},
{"f_1523:chicken_2dffi_2dsyntax_2escm",(void*)f_1523},
{"f_945:chicken_2dffi_2dsyntax_2escm",(void*)f_945},
{"f_947:chicken_2dffi_2dsyntax_2escm",(void*)f_947},
{"f_1552:chicken_2dffi_2dsyntax_2escm",(void*)f_1552},
{"f_1556:chicken_2dffi_2dsyntax_2escm",(void*)f_1556},
{"f_756:chicken_2dffi_2dsyntax_2escm",(void*)f_756},
{"f_759:chicken_2dffi_2dsyntax_2escm",(void*)f_759},
{"f_752:chicken_2dffi_2dsyntax_2escm",(void*)f_752},
{"f_951:chicken_2dffi_2dsyntax_2escm",(void*)f_951},
{"f_1543:chicken_2dffi_2dsyntax_2escm",(void*)f_1543},
{"f_1390:chicken_2dffi_2dsyntax_2escm",(void*)f_1390},
{"f_1540:chicken_2dffi_2dsyntax_2escm",(void*)f_1540},
{"f_1549:chicken_2dffi_2dsyntax_2escm",(void*)f_1549},
{"f_1546:chicken_2dffi_2dsyntax_2escm",(void*)f_1546},
{"f_768:chicken_2dffi_2dsyntax_2escm",(void*)f_768},
{"f_762:chicken_2dffi_2dsyntax_2escm",(void*)f_762},
{"f_765:chicken_2dffi_2dsyntax_2escm",(void*)f_765},
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
S|  sprintf		1
S|  map		9
o|eliminated procedure checks: 89 
o|specializations:
o|  5 (cdr pair)
o|  1 (##sys#check-output-port * * *)
o|  1 (= fixnum fixnum)
o|  1 (cdddr (pair * (pair * pair)))
o|  1 (##sys#check-list (or pair list) *)
o|  3 (cddr (pair * pair))
o|  2 (cadr (pair * pair))
o|  5 (car pair)
o|Removed `not' forms: 2 
o|inlining procedure: k906 
o|contracted procedure: "(chicken-ffi-syntax.scm:274) g420429" 
o|inlining procedure: k906 
o|inlining procedure: k995 
o|contracted procedure: "(chicken-ffi-syntax.scm:260) g379388" 
o|propagated global variable: g396397 ##compiler#foreign-type->scrutiny-type 
o|inlining procedure: k995 
o|inlining procedure: k1088 
o|contracted procedure: "(chicken-ffi-syntax.scm:246) g345354" 
o|inlining procedure: k1088 
o|inlining procedure: k1177 
o|contracted procedure: "(chicken-ffi-syntax.scm:232) g304313" 
o|propagated global variable: g321322 ##compiler#foreign-type->scrutiny-type 
o|inlining procedure: k1177 
o|contracted procedure: k1271 
o|inlining procedure: k1268 
o|inlining procedure: k1268 
o|inlining procedure: k1284 
o|contracted procedure: "(chicken-ffi-syntax.scm:218) g263272" 
o|propagated global variable: g280281 ##compiler#foreign-type->scrutiny-type 
o|inlining procedure: k1284 
o|inlining procedure: k1319 
o|inlining procedure: k1319 
o|inlining procedure: k1352 
o|inlining procedure: k1352 
o|inlining procedure: k1478 
o|inlining procedure: k1478 
o|substituted constant variable: a1533 
o|substituted constant variable: a1534 
o|removed unused formal parameters: (_136) 
o|inlining procedure: k1605 
o|inlining procedure: k1605 
o|substituted constant variable: a1633 
o|inlining procedure: k1649 
o|inlining procedure: k1649 
o|inlining procedure: k1672 
o|removed unused parameter to known procedure: _136 "(chicken-ffi-syntax.scm:115) g125134" 
o|inlining procedure: k1672 
o|inlining procedure: k1753 
o|inlining procedure: k1753 
o|inlining procedure: k1815 
o|inlining procedure: k1848 
o|inlining procedure: k1848 
o|inlining procedure: k1815 
o|inlining procedure: k1935 
o|inlining procedure: k1935 
o|inlining procedure: k1947 
o|contracted procedure: "(chicken-ffi-syntax.scm:75) g6675" 
o|inlining procedure: k1947 
o|inlining procedure: k1994 
o|contracted procedure: "(chicken-ffi-syntax.scm:73) g3948" 
o|inlining procedure: k1994 
o|inlining procedure: k2027 
o|inlining procedure: k2027 
o|contracted procedure: k2053 
o|inlining procedure: k2056 
o|inlining procedure: k2056 
o|replaced variables: 198 
o|removed binding forms: 82 
o|substituted constant variable: r12692085 
o|substituted constant variable: r12692085 
o|substituted constant variable: r16502102 
o|substituted constant variable: r17542107 
o|substituted constant variable: r17542107 
o|substituted constant variable: r18492112 
o|substituted constant variable: r18492112 
o|substituted constant variable: r20572128 
o|replaced variables: 4 
o|removed binding forms: 215 
o|removed call to pure procedure with unused result: "(chicken-ffi-syntax.scm:115) slot" 
o|replaced variables: 12 
o|removed binding forms: 12 
o|contracted procedure: k1701 
o|removed binding forms: 13 
o|removed binding forms: 1 
o|simplifications: ((if . 6) (##core#call . 179)) 
o|  call simplifications:
o|    null?
o|    length
o|    eq?
o|    symbol?	2
o|    cdr	6
o|    cddr	3
o|    not
o|    list	2
o|    cdddr	3
o|    caddr	9
o|    ##sys#check-list	8
o|    pair?	15
o|    car	10
o|    cons	10
o|    ##sys#setslot	9
o|    ##sys#slot	17
o|    ##sys#cons	23
o|    cadr	16
o|    string?	4
o|    ##sys#list	38
o|contracted procedure: k828 
o|contracted procedure: k832 
o|contracted procedure: k839 
o|contracted procedure: k846 
o|contracted procedure: k885 
o|contracted procedure: k863 
o|contracted procedure: k867 
o|contracted procedure: k900 
o|contracted procedure: k909 
o|contracted procedure: k912 
o|contracted procedure: k923 
o|contracted procedure: k935 
o|contracted procedure: k879 
o|contracted procedure: k939 
o|contracted procedure: k974 
o|contracted procedure: k956 
o|contracted procedure: k960 
o|contracted procedure: k989 
o|contracted procedure: k998 
o|contracted procedure: k1001 
o|contracted procedure: k1012 
o|contracted procedure: k1024 
o|contracted procedure: k1028 
o|contracted procedure: k1067 
o|contracted procedure: k1045 
o|contracted procedure: k1049 
o|contracted procedure: k1082 
o|contracted procedure: k1091 
o|contracted procedure: k1094 
o|contracted procedure: k1105 
o|contracted procedure: k1117 
o|contracted procedure: k1061 
o|contracted procedure: k1121 
o|contracted procedure: k1156 
o|contracted procedure: k1138 
o|contracted procedure: k1142 
o|contracted procedure: k1171 
o|contracted procedure: k1180 
o|contracted procedure: k1183 
o|contracted procedure: k1194 
o|contracted procedure: k1206 
o|contracted procedure: k1210 
o|contracted procedure: k1232 
o|contracted procedure: k1242 
o|contracted procedure: k1246 
o|contracted procedure: k1261 
o|contracted procedure: k1268 
o|contracted procedure: k1287 
o|contracted procedure: k1290 
o|contracted procedure: k1301 
o|contracted procedure: k1313 
o|contracted procedure: k1322 
o|contracted procedure: k1348 
o|contracted procedure: k1344 
o|contracted procedure: k1325 
o|contracted procedure: k1336 
o|contracted procedure: k1352 
o|contracted procedure: k1382 
o|contracted procedure: k1367 
o|contracted procedure: k1378 
o|contracted procedure: k1374 
o|contracted procedure: k1396 
o|contracted procedure: k1410 
o|contracted procedure: k1431 
o|contracted procedure: k1427 
o|contracted procedure: k1447 
o|contracted procedure: k1458 
o|contracted procedure: k1470 
o|contracted procedure: k1474 
o|contracted procedure: k1481 
o|contracted procedure: k1487 
o|contracted procedure: k1525 
o|contracted procedure: k1513 
o|contracted procedure: k1517 
o|contracted procedure: k1558 
o|contracted procedure: k1571 
o|contracted procedure: k1585 
o|contracted procedure: k1635 
o|contracted procedure: k1608 
o|contracted procedure: k1615 
o|contracted procedure: k1619 
o|contracted procedure: k1626 
o|contracted procedure: k1630 
o|contracted procedure: k1643 
o|contracted procedure: k1639 
o|contracted procedure: k1666 
o|contracted procedure: k1652 
o|contracted procedure: k1659 
o|contracted procedure: k1675 
o|contracted procedure: k1678 
o|contracted procedure: k1689 
o|contracted procedure: k1714 
o|contracted procedure: k1717 
o|contracted procedure: k1776 
o|contracted procedure: k1723 
o|contracted procedure: k1741 
o|contracted procedure: k1737 
o|contracted procedure: k1749 
o|contracted procedure: k1756 
o|contracted procedure: k1763 
o|contracted procedure: k1753 
o|contracted procedure: k1796 
o|contracted procedure: k1806 
o|contracted procedure: k1821 
o|contracted procedure: k1872 
o|contracted procedure: k1836 
o|contracted procedure: k1832 
o|contracted procedure: k1844 
o|contracted procedure: k1851 
o|contracted procedure: k1862 
o|contracted procedure: k1858 
o|contracted procedure: k1848 
o|contracted procedure: k1878 
o|contracted procedure: k1881 
o|contracted procedure: k1898 
o|contracted procedure: k1902 
o|contracted procedure: k2027 
o|contracted procedure: k1906 
o|contracted procedure: k1985 
o|contracted procedure: k1910 
o|contracted procedure: k1935 
o|contracted procedure: k1922 
o|contracted procedure: k1914 
o|contracted procedure: k1894 
o|contracted procedure: k1950 
o|contracted procedure: k1976 
o|contracted procedure: k1972 
o|contracted procedure: k1953 
o|contracted procedure: k1964 
o|contracted procedure: k1997 
o|contracted procedure: k2023 
o|contracted procedure: k2019 
o|contracted procedure: k2000 
o|contracted procedure: k2011 
o|contracted procedure: k2059 
o|contracted procedure: k2067 
o|simplifications: ((let . 18)) 
o|removed binding forms: 136 
o|inlining procedure: k915 
o|inlining procedure: k915 
o|inlining procedure: k1004 
o|inlining procedure: k1004 
o|inlining procedure: k1097 
o|inlining procedure: k1097 
o|inlining procedure: k1186 
o|inlining procedure: k1186 
o|inlining procedure: k1293 
o|inlining procedure: k1293 
o|inlining procedure: k1328 
o|inlining procedure: k1328 
o|inlining procedure: k1681 
o|inlining procedure: k1681 
o|inlining procedure: k1745 
o|inlining procedure: k1745 
o|inlining procedure: k1840 
o|inlining procedure: k1840 
o|inlining procedure: k1956 
o|inlining procedure: k1956 
o|inlining procedure: k2003 
o|inlining procedure: k2003 
o|replaced variables: 37 
o|removed binding forms: 43 
o|replaced variables: 42 
o|removed binding forms: 12 
o|customizable procedures: (k1809 k1812 map-loop3351 map-loop6078 g125134 map-loop119137 k1454 k1223 map-loop228245 map-loop257282 k1252 map-loop298323 map-loop339357 map-loop373398 map-loop414432) 
o|calls to known targets: 41 
o|identified direct recursive calls: f_1317 2 
o|identified direct recursive calls: f_1945 2 
o|identified direct recursive calls: f_1992 2 
o|fast box initializations: 9 
*/
/* end of file */
