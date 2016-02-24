/* Generated from files.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:03
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: files.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file files.c
   unit: files
*/

#include "chicken.h"

#include <errno.h>

#ifndef _WIN32
# include <sys/stat.h>
# define C_mkdir(str)       C_fix(mkdir(C_c_string(str), S_IRWXU | S_IRWXG | S_IRWXO))
#else
# define C_mkdir(str)	    C_fix(mkdir(C_c_string(str)))
#endif

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[104];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,21),40,100,101,108,101,116,101,45,102,105,108,101,42,32,102,105,108,101,54,52,41,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,100,57,52,32,108,57,53,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,42),40,102,105,108,101,45,99,111,112,121,32,111,114,105,103,102,105,108,101,55,50,32,110,101,119,102,105,108,101,55,51,32,46,32,116,109,112,55,49,55,52,41,0,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,100,49,51,52,32,108,49,51,53,41};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,46),40,102,105,108,101,45,109,111,118,101,32,111,114,105,103,102,105,108,101,49,49,50,32,110,101,119,102,105,108,101,49,49,51,32,46,32,116,109,112,49,49,49,49,49,52,41,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,26),40,97,98,115,111,108,117,116,101,45,112,97,116,104,110,97,109,101,63,32,112,110,49,54,54,41,0,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,11),40,108,112,32,108,101,110,49,55,50,41,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,17),40,99,104,111,112,45,112,100,115,32,115,116,114,49,54,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,115,116,114,115,49,56,57,41,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,19),40,99,111,110,99,45,100,105,114,115,32,100,105,114,115,49,56,55,41,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,27),40,99,97,110,111,110,105,99,97,108,105,122,101,45,100,105,114,115,32,100,105,114,115,49,57,51,41,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,45),40,95,109,97,107,101,45,112,97,116,104,110,97,109,101,32,108,111,99,50,48,49,32,100,105,114,50,48,50,32,102,105,108,101,50,48,51,32,101,120,116,50,48,52,41,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,43),40,109,97,107,101,45,112,97,116,104,110,97,109,101,32,100,105,114,115,50,50,55,32,102,105,108,101,50,50,56,32,46,32,116,109,112,50,50,54,50,50,57,41,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,52),40,109,97,107,101,45,97,98,115,111,108,117,116,101,45,112,97,116,104,110,97,109,101,32,100,105,114,115,50,52,48,32,102,105,108,101,50,52,49,32,46,32,116,109,112,50,51,57,50,52,50,41,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,18),40,115,116,114,105,112,45,112,100,115,32,100,105,114,50,53,57,41,0,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,26),40,100,101,99,111,109,112,111,115,101,45,112,97,116,104,110,97,109,101,32,112,110,50,54,50,41,0,0,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,7),40,97,49,52,51,50,41,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,47),40,97,49,52,51,56,32,100,105,114,50,54,56,50,54,57,50,55,52,32,102,105,108,101,50,55,48,50,55,49,50,55,53,32,101,120,116,50,55,50,50,55,51,50,55,54,41,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,26),40,112,97,116,104,110,97,109,101,45,100,105,114,101,99,116,111,114,121,32,112,110,50,54,55,41,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,7),40,97,49,52,52,55,41,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,47),40,97,49,52,53,51,32,100,105,114,50,56,50,50,56,51,50,56,56,32,102,105,108,101,50,56,52,50,56,53,50,56,57,32,101,120,116,50,56,54,50,56,55,50,57,48,41,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,21),40,112,97,116,104,110,97,109,101,45,102,105,108,101,32,112,110,50,56,49,41,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,7),40,97,49,52,54,50,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,47),40,97,49,52,54,56,32,100,105,114,50,57,54,50,57,55,51,48,50,32,102,105,108,101,50,57,56,50,57,57,51,48,51,32,101,120,116,51,48,48,51,48,49,51,48,52,41,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,26),40,112,97,116,104,110,97,109,101,45,101,120,116,101,110,115,105,111,110,32,112,110,50,57,53,41,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,7),40,97,49,52,55,55,41,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,47),40,97,49,52,56,51,32,100,105,114,51,49,48,51,49,49,51,49,54,32,102,105,108,101,51,49,50,51,49,51,51,49,55,32,101,120,116,51,49,52,51,49,53,51,49,56,41,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,32),40,112,97,116,104,110,97,109,101,45,115,116,114,105,112,45,100,105,114,101,99,116,111,114,121,32,112,110,51,48,57,41};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,7),40,97,49,52,57,53,41,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,47),40,97,49,53,48,49,32,100,105,114,51,50,52,51,50,53,51,51,48,32,102,105,108,101,51,50,54,51,50,55,51,51,49,32,101,120,116,51,50,56,51,50,57,51,51,50,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,32),40,112,97,116,104,110,97,109,101,45,115,116,114,105,112,45,101,120,116,101,110,115,105,111,110,32,112,110,51,50,51,41};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,7),40,97,49,53,49,51,41,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,45),40,97,49,53,49,57,32,95,51,51,57,51,52,48,51,52,53,32,102,105,108,101,51,52,49,51,52,50,51,52,54,32,101,120,116,51,52,51,51,52,52,51,52,55,41,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,41),40,112,97,116,104,110,97,109,101,45,114,101,112,108,97,99,101,45,100,105,114,101,99,116,111,114,121,32,112,110,51,51,55,32,100,105,114,51,51,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,7),40,97,49,53,51,49,41,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,44),40,97,49,53,51,55,32,100,105,114,51,53,52,51,53,53,51,54,48,32,95,51,53,54,51,53,55,51,54,49,32,101,120,116,51,53,56,51,53,57,51,54,50,41,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,37),40,112,97,116,104,110,97,109,101,45,114,101,112,108,97,99,101,45,102,105,108,101,32,112,110,51,53,50,32,102,105,108,101,51,53,51,41,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,7),40,97,49,53,52,57,41,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,45),40,97,49,53,53,53,32,100,105,114,51,54,57,51,55,48,51,55,53,32,102,105,108,101,51,55,49,51,55,50,51,55,54,32,95,51,55,51,51,55,52,51,55,55,41,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,41),40,112,97,116,104,110,97,109,101,45,114,101,112,108,97,99,101,45,101,120,116,101,110,115,105,111,110,32,112,110,51,54,55,32,101,120,116,51,54,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,9),40,116,101,109,112,100,105,114,41,0,0,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,12),40,97,49,54,49,54,32,112,52,49,53,41,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,35),40,99,114,101,97,116,101,45,116,101,109,112,111,114,97,114,121,45,102,105,108,101,32,46,32,116,109,112,52,48,53,52,48,54,41,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,28),40,99,114,101,97,116,101,45,116,101,109,112,111,114,97,114,121,45,100,105,114,101,99,116,111,114,121,41,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,18),40,97,100,100,112,97,114,116,32,112,97,114,116,115,52,50,57,41,0,0,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,11),40,103,52,54,55,32,112,52,55,54,41,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,52,54,54,32,103,52,55,51,52,55,57,41,0,0,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,28),40,108,111,111,112,32,105,52,53,52,32,112,114,101,118,52,53,53,32,112,97,114,116,115,52,53,54,41,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,40),40,110,111,114,109,97,108,105,122,101,45,112,97,116,104,110,97,109,101,32,112,97,116,104,52,52,50,32,46,32,116,109,112,52,52,49,52,52,51,41};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,24),40,100,105,114,101,99,116,111,114,121,45,110,117,108,108,63,32,100,105,114,53,48,54,41};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,28),40,100,101,99,111,109,112,111,115,101,45,100,105,114,101,99,116,111,114,121,32,100,105,114,53,49,53,41,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,14),40,102,95,50,49,53,49,32,112,110,49,53,49,41,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,14),40,102,95,50,49,53,55,32,114,116,49,53,50,41,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,14),40,102,95,50,49,54,54,32,114,116,49,53,52,41,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,30),40,97,98,115,111,108,117,116,101,45,112,97,116,104,110,97,109,101,45,114,111,111,116,32,112,110,49,53,57,41,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,19),40,114,111,111,116,45,111,114,105,103,105,110,32,114,116,49,54,48,41,0,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,22),40,114,111,111,116,45,100,105,114,101,99,116,111,114,121,32,114,116,49,54,49,41,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1823)
static void C_ccall f_1823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1826)
static void C_ccall f_1826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1829)
static void C_ccall f_1829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1526)
static void C_ccall f_1526(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1314)
static void C_ccall f_1314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1520)
static void C_ccall f_1520(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1311)
static void C_ccall f_1311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1556)
static void C_ccall f_1556(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2149)
static void C_ccall f_2149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2146)
static void C_ccall f_2146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1813)
static void C_ccall f_1813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1963)
static void C_ccall f_1963(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1550)
static void C_ccall f_1550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1300)
static void C_ccall f_1300(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1300)
static void C_ccall f_1300r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1317)
static void C_ccall f_1317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1959)
static void C_fcall f_1959(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1587)
static void C_ccall f_1587(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1587)
static void C_ccall f_1587r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1690)
static void C_ccall f_1690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1694)
static void C_ccall f_1694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1582)
static void C_ccall f_1582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1698)
static void C_ccall f_1698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1371)
static void C_ccall f_1371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1292)
static void C_ccall f_1292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_775)
static void C_ccall f_775(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1943)
static void C_ccall f_1943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1569)
static void C_ccall f_1569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_780)
static void C_ccall f_780(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_780)
static void C_ccall f_780r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1562)
static void C_fcall f_1562(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1599)
static void C_fcall f_1599(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1712)
static C_word C_fcall f_1712(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_1333)
static void C_ccall f_1333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1334)
static void C_fcall f_1334(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1330)
static void C_ccall f_1330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1603)
static void C_ccall f_1603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1609)
static void C_ccall f_1609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1622)
static void C_ccall f_1622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1626)
static void C_ccall f_1626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1617)
static void C_ccall f_1617(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1126)
static void C_fcall f_1126(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_845)
static void C_ccall f_845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_842)
static void C_ccall f_842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1117)
static void C_fcall f_1117(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2024)
static void C_ccall f_2024(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_865)
static void C_ccall f_865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2187)
static void C_ccall f_2187(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2184)
static void C_ccall f_2184(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_839)
static void C_ccall f_839(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1168)
static void C_fcall f_1168(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2176)
static void C_ccall f_2176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2178)
static void C_ccall f_2178(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1158)
static void C_ccall f_1158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2128)
static void C_ccall f_2128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2124)
static void C_ccall f_2124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_859)
static void C_ccall f_859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1154)
static void C_ccall f_1154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1907)
static void C_fcall f_1907(C_word t0,C_word t1) C_noret;
C_noret_decl(f_852)
static void C_ccall f_852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2064)
static void C_ccall f_2064(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1080)
static void C_fcall f_1080(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2117)
static void C_ccall f_2117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2114)
static void C_ccall f_2114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1073)
static void C_fcall f_1073(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2111)
static void C_ccall f_2111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_files_toplevel)
C_externexport void C_ccall C_files_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1199)
static void C_fcall f_1199(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1000)
static void C_ccall f_1000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1406)
static void C_ccall f_1406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2166)
static void C_ccall f_2166(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2157)
static void C_ccall f_2157(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1421)
static void C_ccall f_1421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2151)
static void C_ccall f_2151(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1427)
static void C_ccall f_1427(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1414)
static void C_ccall f_1414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1410)
static void C_ccall f_1410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1060)
static void C_fcall f_1060(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1045)
static void C_fcall f_1045(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1047)
static void C_ccall f_1047(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1442)
static void C_ccall f_1442(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1058)
static void C_ccall f_1058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1448)
static void C_ccall f_1448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1433)
static void C_ccall f_1433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1439)
static void C_ccall f_1439(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1778)
static void C_fcall f_1778(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1463)
static void C_ccall f_1463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1469)
static void C_ccall f_1469(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1750)
static void C_ccall f_1750(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1750)
static void C_ccall f_1750r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1768)
static void C_fcall f_1768(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1454)
static void C_ccall f_1454(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1457)
static void C_ccall f_1457(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1846)
static void C_ccall f_1846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1832)
static void C_fcall f_1832(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1484)
static void C_ccall f_1484(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1839)
static void C_ccall f_1839(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1472)
static void C_ccall f_1472(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1478)
static void C_ccall f_1478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1868)
static void C_ccall f_1868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_984)
static void C_ccall f_984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1858)
static void C_fcall f_1858(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1490)
static void C_ccall f_1490(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1222)
static void C_ccall f_1222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_991)
static void C_ccall f_991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1229)
static void C_fcall f_1229(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1496)
static void C_ccall f_1496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1702)
static void C_ccall f_1702(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_805)
static void C_ccall f_805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_808)
static void C_ccall f_808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_974)
static void C_ccall f_974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_977)
static void C_ccall f_977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1393)
static void C_ccall f_1393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1247)
static void C_fcall f_1247(C_word t0,C_word t1) C_noret;
C_noret_decl(f_971)
static void C_ccall f_971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_820)
static void C_ccall f_820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1894)
static void C_ccall f_1894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_827)
static void C_ccall f_827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_829)
static void C_fcall f_829(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_943)
static void C_ccall f_943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_949)
static void C_ccall f_949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_946)
static void C_ccall f_946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1381)
static void C_ccall f_1381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_940)
static void C_ccall f_940(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1508)
static void C_ccall f_1508(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1396)
static void C_ccall f_1396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_958)
static void C_fcall f_958(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_956)
static void C_ccall f_956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1502)
static void C_ccall f_1502(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1538)
static void C_ccall f_1538(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1389)
static void C_ccall f_1389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1385)
static void C_ccall f_1385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1646)
static void C_ccall f_1646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1532)
static void C_ccall f_1532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1634)
static void C_ccall f_1634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1281)
static void C_ccall f_1281(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1281)
static void C_ccall f_1281r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1630)
static void C_ccall f_1630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_811)
static void C_ccall f_811(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_817)
static void C_ccall f_817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_814)
static void C_ccall f_814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_937)
static void C_ccall f_937(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_934)
static void C_ccall f_934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1355)
static void C_ccall f_1355(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2032)
static void C_ccall f_2032(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1662)
static void C_ccall f_1662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2103)
static void C_ccall f_2103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_909)
static void C_ccall f_909(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_909)
static void C_ccall f_909r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1341)
static void C_ccall f_1341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1669)
static void C_ccall f_1669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1514)
static void C_ccall f_1514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1652)
static void C_fcall f_1652(C_word t0,C_word t1) C_noret;
C_noret_decl(f_768)
static void C_ccall f_768(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_766)
static void C_ccall f_766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1802)
static void C_ccall f_1802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1805)
static void C_ccall f_1805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_763)
static void C_ccall f_763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1809)
static void C_fcall f_1809(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_760)
static void C_ccall f_760(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1808)
static void C_ccall f_1808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2034)
static C_word C_fcall f_2034(C_word t0);
C_noret_decl(f_1656)
static void C_ccall f_1656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1544)
static void C_ccall f_1544(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1576)
static void C_ccall f_1576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1682)
static void C_ccall f_1682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_968)
static void C_ccall f_968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1686)
static void C_ccall f_1686(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1959)
static void C_fcall trf_1959(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1959(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1959(t0,t1);}

C_noret_decl(trf_1562)
static void C_fcall trf_1562(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1562(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1562(t0,t1);}

C_noret_decl(trf_1599)
static void C_fcall trf_1599(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1599(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1599(t0,t1);}

C_noret_decl(trf_1334)
static void C_fcall trf_1334(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1334(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1334(t0,t1);}

C_noret_decl(trf_1126)
static void C_fcall trf_1126(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1126(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1126(t0,t1,t2);}

C_noret_decl(trf_1117)
static void C_fcall trf_1117(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1117(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1117(t0,t1);}

C_noret_decl(trf_1168)
static void C_fcall trf_1168(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1168(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1168(t0,t1,t2);}

C_noret_decl(trf_1907)
static void C_fcall trf_1907(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1907(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1907(t0,t1);}

C_noret_decl(trf_1080)
static void C_fcall trf_1080(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1080(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1080(t0,t1);}

C_noret_decl(trf_1073)
static void C_fcall trf_1073(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1073(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1073(t0,t1,t2);}

C_noret_decl(trf_1199)
static void C_fcall trf_1199(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1199(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1199(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1060)
static void C_fcall trf_1060(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1060(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1060(t0,t1);}

C_noret_decl(trf_1045)
static void C_fcall trf_1045(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1045(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1045(t0,t1);}

C_noret_decl(trf_1778)
static void C_fcall trf_1778(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1778(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1778(t0,t1);}

C_noret_decl(trf_1768)
static void C_fcall trf_1768(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1768(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1768(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1832)
static void C_fcall trf_1832(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1832(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1832(t0,t1);}

C_noret_decl(trf_1858)
static void C_fcall trf_1858(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1858(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1858(t0,t1,t2);}

C_noret_decl(trf_1229)
static void C_fcall trf_1229(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1229(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1229(t0,t1);}

C_noret_decl(trf_1247)
static void C_fcall trf_1247(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1247(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1247(t0,t1);}

C_noret_decl(trf_829)
static void C_fcall trf_829(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_829(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_829(t0,t1,t2,t3);}

C_noret_decl(trf_958)
static void C_fcall trf_958(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_958(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_958(t0,t1,t2,t3);}

C_noret_decl(trf_1652)
static void C_fcall trf_1652(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1652(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1652(t0,t1);}

C_noret_decl(trf_1809)
static void C_fcall trf_1809(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1809(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1809(t0,t1,t2);}

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

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

/* k1821 in k1806 in k1803 in k1800 in k1776 in loop in normalize-pathname in k2144 in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1823,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1826,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(((C_word*)t0)[7],((C_word*)t0)[8]);
if(C_truep(t3)){
/* files.scm:383: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[82]+1)))(4,*((C_word*)lf[82]+1),t2,((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t4=t2;
f_1826(2,t4,C_SCHEME_UNDEFINED);}}

/* k1824 in k1821 in k1806 in k1803 in k1800 in k1776 in loop in normalize-pathname in k2144 in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1826,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1829,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* files.scm:384: get-output-string */
t3=*((C_word*)lf[84]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* k1827 in k1824 in k1821 in k1806 in k1803 in k1800 in k1776 in loop in normalize-pathname in k2144 in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1829,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1832,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=C_eqp(((C_word*)((C_word*)t0)[4])[1],lf[79]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1846,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t7=C_a_i_string(&a,1,((C_word*)t0)[5]);
/* files.scm:386: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),t6,t7,((C_word*)t3)[1]);}
else{
t6=t4;
f_1832(t6,C_SCHEME_UNDEFINED);}}

/* pathname-replace-file in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1526(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1526,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1532,a[2]=t2,a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1538,a[2]=t3,a[3]=((C_word)li35),tmp=(C_word)a,a+=4,tmp);
/* files.scm:288: ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* k1312 in k1309 in make-absolute-pathname in k1043 in k764 in k761 in k758 */
static void C_ccall f_1314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:219: _make-pathname */
f_1199(((C_word*)t0)[3],lf[39],t1,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* a1519 in pathname-replace-directory in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1520(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1520,5,t0,t1,t2,t3,t4);}
/* files.scm:285: make-pathname */
t5=*((C_word*)lf[29]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,((C_word*)t0)[2],t3,t4);}

/* k1309 in make-absolute-pathname in k1043 in k764 in k761 in k758 */
static void C_ccall f_1311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1311,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1314,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1317,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* files.scm:222: absolute-pathname? */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* a1555 in pathname-replace-extension in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1556(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1556,5,t0,t1,t2,t3,t4);}
/* files.scm:295: make-pathname */
t5=*((C_word*)lf[29]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,t3,((C_word*)t0)[2]);}

/* k2147 in k764 in k761 in k758 */
static void C_ccall f_2149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2149,2,t0,t1);}
t2=t1;
t3=C_mutate2(&lf[21] /* (set! absolute-pathname-root ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2151,a[2]=t2,a[3]=((C_word)li54),tmp=(C_word)a,a+=4,tmp));
t4=C_mutate2(&lf[22] /* (set! root-origin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2157,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2(&lf[23] /* (set! root-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2166,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t0)[2];
f_1045(t6,t5);}

/* k2144 in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_2146(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2146,2,t0,t1);}
t2=C_eqp(t1,lf[72]);
t3=(C_truep(t2)?lf[73]:lf[74]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1712,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp);
t6=C_mutate2((C_word*)lf[78]+1 /* (set! normalize-pathname ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1750,a[2]=t4,a[3]=t5,a[4]=((C_word)li50),tmp=(C_word)a,a+=5,tmp));
t7=C_mutate2((C_word*)lf[88]+1 /* (set! directory-null? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2024,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[93]+1 /* (set! decompose-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2064,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_UNDEFINED);}

/* k1811 in g467 in k1806 in k1803 in k1800 in k1776 in loop in normalize-pathname in k2144 in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1813(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:381: display */
t2=*((C_word*)lf[81]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k1961 in k1957 in loop in normalize-pathname in k2144 in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1963(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* files.scm:402: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_1768(t5,((C_word*)t0)[5],t3,t4,C_SCHEME_END_OF_LIST);}

/* a1549 in pathname-replace-extension in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1550,2,t0,t1);}
/* files.scm:294: decompose-pathname */
t2=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* make-absolute-pathname in k1043 in k764 in k761 in k758 */
static void C_ccall f_1300(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_1300r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1300r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1300r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(6);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1311,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* files.scm:221: canonicalize-dirs */
t9=((C_word*)((C_word*)t0)[3])[1];
f_1168(t9,t8,t2);}

/* k1315 in k1309 in make-absolute-pathname in k1043 in k764 in k761 in k758 */
static void C_ccall f_1317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* files.scm:219: _make-pathname */
f_1199(((C_word*)t0)[3],lf[39],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
/* files.scm:224: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),((C_word*)t0)[7],lf[41],((C_word*)t0)[4]);}}

/* k1957 in loop in normalize-pathname in k2144 in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_fcall f_1959(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1959,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1963,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* files.scm:401: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(5,*((C_word*)lf[27]+1),t2,((C_word*)t0)[6],C_fix(0),t3);}
else{
t2=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* files.scm:403: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1768(t3,((C_word*)t0)[5],t2,((C_word*)t0)[7],((C_word*)((C_word*)t0)[8])[1]);}}

/* create-temporary-file in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1587(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr2r,(void*)f_1587r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1587r(t0,t1,t2);}}

static void C_ccall f_1587r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(9);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?lf[60]:C_i_car(t2));
t5=t4;
t6=C_i_check_string_2(t5,lf[59]);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1599,a[2]=t8,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word)li42),tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_1599(t10,t1);}

/* k1688 in loop in create-temporary-directory in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1690,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1694,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1698,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* files.scm:336: number->string */
t5=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[4],C_fix(16));}

/* k1692 in k1688 in loop in create-temporary-directory in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:332: make-pathname */
t2=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k1580 in k1574 in k1567 in tempdir in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1582(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t2=lf[54];
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}

/* k1696 in k1688 in loop in create-temporary-directory in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1698,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1702,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_fudge(C_fix(33));
/* files.scm:338: ##sys#number->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[63]+1)))(3,*((C_word*)lf[63]+1),t3,t4);}

/* k1369 in decompose-pathname in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1371,2,t0,t1);}
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1381,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1393,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* files.scm:246: irregex-match-substring */
t5=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,C_fix(1));}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1396,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* files.scm:249: irregex-search */
t4=*((C_word*)lf[44]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[5],((C_word*)t0)[4]);}}

/* k1290 in make-pathname in k1043 in k764 in k761 in k758 */
static void C_ccall f_1292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:215: _make-pathname */
f_1199(((C_word*)t0)[3],lf[29],t1,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k773 in delete-file* in k764 in k761 in k758 */
static void C_ccall f_775(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* files.scm:67: delete-file */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k1941 in k1905 in loop in normalize-pathname in k2144 in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1943,2,t0,t1);}
t2=f_1712(C_a_i(&a,9),t1,((C_word*)((C_word*)t0)[3])[1]);
/* files.scm:395: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1768(t3,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t2);}

/* k1567 in tempdir in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1569,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1576,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* files.scm:307: get-environment-variable */
t3=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[57]);}}

/* file-copy in k764 in k761 in k758 */
static void C_ccall f_780(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr4r,(void*)f_780r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_780r(t0,t1,t2,t3,t4);}}

static void C_ccall f_780r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(7);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_fix(1024):C_i_car(t9));
t12=t11;
t13=C_i_nullp(t9);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t15=C_i_check_string_2(t2,lf[3]);
t16=C_i_check_string_2(t3,lf[3]);
t17=C_i_check_number_2(t12,lf[3]);
t18=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_805,a[2]=t12,a[3]=t1,a[4]=t3,a[5]=t2,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_integerp(t12))){
if(C_truep(C_fixnum_greaterp(t12,C_fix(0)))){
t19=t18;
f_805(2,t19,C_SCHEME_UNDEFINED);}
else{
/* files.scm:76: ##sys#error */
t19=*((C_word*)lf[12]+1);
((C_proc5)(void*)(*((C_word*)t19+1)))(5,t19,t18,lf[3],lf[16],t12);}}
else{
/* files.scm:76: ##sys#error */
t19=*((C_word*)lf[12]+1);
((C_proc5)(void*)(*((C_word*)t19+1)))(5,t19,t18,lf[3],lf[16],t12);}}

/* tempdir in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_fcall f_1562(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1562,NULL,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(t2)){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1569,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* files.scm:306: get-environment-variable */
t4=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[58]);}}

/* loop in create-temporary-file in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_fcall f_1599(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1599,NULL,2,t0,t1);}
t2=C_random_fixnum(C_fix(65536));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1603,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1622,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* files.scm:318: tempdir */
t5=((C_word*)t0)[5];
f_1562(t5,t4);}

/* addpart in k2144 in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static C_word C_fcall f_1712(C_word *a,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_overflow_check;
if(C_truep(C_i_string_equal_p(lf[75],t1))){
t3=t2;
return(t3);}
else{
t3=t1;
if(C_truep(C_u_i_string_equal_p(lf[76],t3))){
t4=C_i_nullp(t2);
if(C_truep(t4)){
return((C_truep(t4)?C_a_i_cons(&a,2,t1,t2):C_i_cdr(t2)));}
else{
t5=C_i_car(t2);
t6=C_i_string_equal_p(lf[77],t5);
return((C_truep(t6)?C_a_i_cons(&a,2,t1,t2):C_i_cdr(t2)));}}
else{
return(C_a_i_cons(&a,2,t1,t2));}}}

/* k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1333(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1333,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1334,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp);
t4=C_mutate2((C_word*)lf[42]+1 /* (set! decompose-pathname ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1355,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word)li15),tmp=(C_word)a,a+=6,tmp));
t5=C_mutate2((C_word*)lf[45]+1 /* (set! pathname-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1427,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[46]+1 /* (set! pathname-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1442,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[47]+1 /* (set! pathname-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1457,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[48]+1 /* (set! pathname-strip-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1472,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[49]+1 /* (set! pathname-strip-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1490,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[50]+1 /* (set! pathname-replace-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1508,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[51]+1 /* (set! pathname-replace-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1526,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[52]+1 /* (set! pathname-replace-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1544,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t13=C_SCHEME_FALSE;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=lf[53];
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1562,a[2]=t14,a[3]=((C_word)li40),tmp=(C_word)a,a+=4,tmp);
t17=C_mutate2((C_word*)lf[59]+1 /* (set! create-temporary-file ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1587,a[2]=t15,a[3]=t16,a[4]=((C_word)li43),tmp=(C_word)a,a+=5,tmp));
t18=C_mutate2((C_word*)lf[65]+1 /* (set! create-temporary-directory ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1646,a[2]=t15,a[3]=t16,a[4]=((C_word)li45),tmp=(C_word)a,a+=5,tmp));
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2146,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* files.scm:353: build-platform */
t20=*((C_word*)lf[94]+1);
((C_proc2)(void*)(*((C_word*)t20+1)))(2,t20,t19);}

/* strip-pds in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_fcall f_1334(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1334,NULL,2,t1,t2);}
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1341,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* files.scm:235: chop-pds */
f_1060(t3,t2);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1330,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1333,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* files.scm:231: irregex */
t4=*((C_word*)lf[95]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[96]);}

/* k1601 in loop in create-temporary-file in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1603,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1609,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* files.scm:325: file-exists? */
t4=*((C_word*)lf[2]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k1607 in k1601 in loop in create-temporary-file in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1609,2,t0,t1);}
if(C_truep(t1)){
/* files.scm:326: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1599(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1617,a[2]=((C_word*)t0)[4],a[3]=((C_word)li41),tmp=(C_word)a,a+=4,tmp);
/* files.scm:327: call-with-output-file */
t3=*((C_word*)lf[61]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[4],t2);}}

/* k1620 in loop in create-temporary-file in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1622,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1626,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1630,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* files.scm:321: number->string */
t5=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[5],C_fix(16));}

/* k1624 in k1620 in loop in create-temporary-file in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:317: make-pathname */
t2=*((C_word*)lf[29]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* a1616 in k1607 in k1601 in loop in create-temporary-file in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1617(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1617,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}

/* loop in conc-dirs in k1043 in k764 in k761 in k758 */
static void C_fcall f_1126(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_1126,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[30]);}
else{
t3=C_i_car(t2);
t4=C_i_string_length(t3);
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=t2;
t7=C_u_i_cdr(t6);
/* files.scm:183: loop */
t12=t1;
t13=t7;
t1=t12;
t2=t13;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1154,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t7=t2;
t8=C_u_i_car(t7);
/* files.scm:185: chop-pds */
f_1060(t6,t8);}}}

/* k843 in loop in k825 in k818 in k815 in k812 in k809 in k806 in k803 in file-copy in k764 in k761 in k758 */
static void C_ccall f_845(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_845,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_852,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* files.scm:100: read-string! */
t3=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8]);}

/* k840 in k837 in loop in k825 in k818 in k815 in k812 in k809 in k806 in k803 in file-copy in k764 in k761 in k758 */
static void C_ccall f_842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* conc-dirs in k1043 in k764 in k761 in k758 */
static void C_fcall f_1117(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1117,NULL,2,t1,t2);}
t3=C_i_check_list_2(t2,lf[29]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1126,a[2]=t5,a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_1126(t7,t1,t2);}

/* directory-null? in k2144 in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_2024(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2024,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2032,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_listp(t2))){
t4=t3;
f_2032(2,t4,t2);}
else{
t4=t2;
t5=C_i_check_string_2(t4,lf[88]);
/* files.scm:412: string-split */
t6=*((C_word*)lf[91]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t3,t4,lf[92],C_SCHEME_TRUE);}}

/* k863 in k803 in file-copy in k764 in k761 in k758 */
static void C_ccall f_865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[2])){
t2=((C_word*)t0)[3];
f_808(2,t2,((C_word*)t0)[2]);}
else{
/* files.scm:82: ##sys#error */
t2=*((C_word*)lf[12]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[3],lf[15],((C_word*)t0)[4]);}}
else{
t2=((C_word*)t0)[3];
f_808(2,t2,C_SCHEME_FALSE);}}

/* root-directory in k2174 in k764 in k761 in k758 */
static void C_ccall f_2187(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2187,3,t0,t1,t2);}
if(C_truep(t2)){
/* files.scm:153: irregex-match-substring */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,C_fix(1));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* root-origin in k2174 in k764 in k761 in k758 */
static void C_ccall f_2184(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2184,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* k837 in loop in k825 in k818 in k815 in k812 in k809 in k806 in k803 in file-copy in k764 in k761 in k758 */
static void C_ccall f_839(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_839,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_842,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* files.scm:96: close-output-port */
t3=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* canonicalize-dirs in k1043 in k764 in k761 in k758 */
static void C_fcall f_1168(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1168,NULL,3,t0,t1,t2);}
t3=C_i_not(t2);
t4=(C_truep(t3)?t3:C_i_nullp(t2));
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[33]);}
else{
if(C_truep(C_i_stringp(t2))){
t5=C_a_i_list1(&a,1,t2);
/* files.scm:191: conc-dirs */
f_1117(t1,t5);}
else{
/* files.scm:192: conc-dirs */
f_1117(t1,t2);}}}

/* k2174 in k764 in k761 in k758 */
static void C_ccall f_2176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2176,2,t0,t1);}
t2=t1;
t3=C_mutate2(&lf[21] /* (set! absolute-pathname-root ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2178,a[2]=t2,a[3]=((C_word)li57),tmp=(C_word)a,a+=4,tmp));
t4=C_mutate2(&lf[22] /* (set! root-origin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2184,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2(&lf[23] /* (set! root-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2187,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t0)[2];
f_1045(t6,t5);}

/* absolute-pathname-root in k2174 in k764 in k761 in k758 */
static void C_ccall f_2178(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2178,3,t0,t1,t2);}
/* files.scm:151: irregex-match */
t3=*((C_word*)lf[99]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,((C_word*)t0)[2],t2);}

/* k1156 in k1152 in loop in conc-dirs in k1043 in k764 in k761 in k758 */
static void C_ccall f_1158(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:184: string-append */
t2=*((C_word*)lf[31]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[32],t1);}

/* k2126 in k2122 in k2115 in k2112 in k2109 in decompose-directory in k2144 in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_2128(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:447: values */
C_values(5,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2122 in k2115 in k2112 in k2109 in decompose-directory in k2144 in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_2124(C_word c,C_word t0,C_word t1){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2124,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2128,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_i_nullp(((C_word*)t0)[4]);
t5=(C_truep(t4)?C_SCHEME_FALSE:((C_word*)t0)[4]);
t6=t3;
if(C_truep(((C_word*)t0)[3])){
t7=C_i_car(t5);
t8=C_block_size(((C_word*)t0)[3]);
if(C_truep(C_substring_compare(((C_word*)t0)[3],t7,C_fix(0),C_fix(0),t8))){
t9=C_u_i_cdr(t5);
t10=C_block_size(t7);
t11=C_block_size(t10);
t12=C_eqp(t8,t11);
if(C_truep(t12)){
t13=t6;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,t9);}
else{
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2103,a[2]=t6,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
/* files.scm:443: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(5,*((C_word*)lf[27]+1),t13,t7,t8,t10);}}
else{
t9=t6;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t5);}}
else{
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t5);}}

/* k857 in k806 in k803 in file-copy in k764 in k761 in k758 */
static void C_ccall f_859(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* files.scm:87: ##sys#error */
t2=*((C_word*)lf[12]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[3],lf[13],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
f_811(2,t2,C_SCHEME_UNDEFINED);}}

/* k1152 in loop in conc-dirs in k1043 in k764 in k761 in k758 */
static void C_ccall f_1154(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1154,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1158,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* files.scm:187: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_1126(t6,t3,t5);}

/* k1905 in loop in normalize-pathname in k2144 in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_fcall f_1907(C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1907,NULL,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(t2)){
t3=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
/* files.scm:394: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_1768(t5,((C_word*)t0)[5],t3,t4,((C_word*)((C_word*)t0)[6])[1]);}
else{
t3=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t4=t3;
t5=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1943,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t4,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
/* files.scm:397: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(5,*((C_word*)lf[27]+1),t7,((C_word*)t0)[8],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k850 in k843 in loop in k825 in k818 in k815 in k812 in k809 in k806 in k803 in file-copy in k764 in k761 in k758 */
static void C_ccall f_852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],((C_word*)t0)[3]);
/* files.scm:100: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_829(t3,((C_word*)t0)[5],t1,t2);}

/* decompose-directory in k2144 in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_2064(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2064,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2111,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=t2;
t5=C_i_check_string_2(t4,lf[93]);
/* files.scm:412: string-split */
t6=*((C_word*)lf[91]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t3,t4,lf[92],C_SCHEME_FALSE);}

/* k1078 in lp in chop-pds in k1043 in k764 in k761 in k758 */
static void C_fcall f_1080(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
/* files.scm:166: lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1073(t3,((C_word*)t0)[4],t2);}
else{
t2=C_block_size(((C_word*)t0)[5]);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[2],t2))){
/* files.scm:168: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(5,*((C_word*)lf[27]+1),((C_word*)t0)[4],((C_word*)t0)[5],C_fix(0),((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[5]);}}}

/* k2115 in k2112 in k2109 in decompose-directory in k2144 in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_2117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2117,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2124,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* files.scm:447: root-directory */
t4=lf[23];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* k2112 in k2109 in decompose-directory in k2144 in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_2114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2114,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2117,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* files.scm:446: root-origin */
t4=lf[22];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* lp in chop-pds in k1043 in k764 in k761 in k758 */
static void C_fcall f_1073(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1073,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1080,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(t2,C_fix(1)))){
t4=C_fixnum_difference(t2,C_fix(1));
t5=C_subchar(((C_word*)t0)[3],t4);
t6=t3;
f_1080(t6,C_u_i_memq(t5,lf[28]));}
else{
t4=t3;
f_1080(t4,C_SCHEME_FALSE);}}

/* k2109 in decompose-directory in k2144 in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_2111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2111,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2114,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* files.scm:445: absolute-pathname-root */
t4=lf[21];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_files_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_files_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("files_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(652)){
C_save(t1);
C_rereclaim2(652*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,104);
lf[0]=C_h_intern(&lf[0],12,"delete-file\052");
lf[1]=C_h_intern(&lf[1],11,"delete-file");
lf[2]=C_h_intern(&lf[2],12,"file-exists\077");
lf[3]=C_h_intern(&lf[3],9,"file-copy");
lf[4]=C_h_intern(&lf[4],17,"close-output-port");
lf[5]=C_h_intern(&lf[5],16,"close-input-port");
lf[6]=C_h_intern(&lf[6],12,"read-string!");
lf[7]=C_h_intern(&lf[7],12,"write-string");
lf[8]=C_h_intern(&lf[8],11,"make-string");
lf[9]=C_h_intern(&lf[9],16,"open-output-file");
lf[10]=C_h_intern(&lf[10],7,"\000binary");
lf[11]=C_h_intern(&lf[11],15,"open-input-file");
lf[12]=C_h_intern(&lf[12],9,"\003syserror");
lf[13]=C_decode_literal(C_heaptop,"\376B\000\000\030can not copy directories");
lf[14]=C_h_intern(&lf[14],17,"directory-exists\077");
lf[15]=C_decode_literal(C_heaptop,"\376B\000\000#newfile exists but clobber is false");
lf[16]=C_decode_literal(C_heaptop,"\376B\000\000/invalid blocksize given: not a positive integer");
lf[17]=C_h_intern(&lf[17],9,"file-move");
lf[18]=C_decode_literal(C_heaptop,"\376B\000\000#newfile exists but clobber is false");
lf[19]=C_decode_literal(C_heaptop,"\376B\000\000\030can not move directories");
lf[20]=C_decode_literal(C_heaptop,"\376B\000\000/invalid blocksize given: not a positive integer");
lf[24]=C_h_intern(&lf[24],18,"absolute-pathname\077");
lf[25]=C_h_intern(&lf[25],19,"irregex-match-data\077");
lf[27]=C_h_intern(&lf[27],13,"\003syssubstring");
lf[28]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000/\376\377\016");
lf[29]=C_h_intern(&lf[29],13,"make-pathname");
lf[30]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[31]=C_h_intern(&lf[31],13,"string-append");
lf[32]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[33]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[35]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[38]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000/\376\377\016");
lf[39]=C_h_intern(&lf[39],22,"make-absolute-pathname");
lf[40]=C_h_intern(&lf[40],17,"\003sysstring-append");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[42]=C_h_intern(&lf[42],18,"decompose-pathname");
lf[43]=C_h_intern(&lf[43],23,"irregex-match-substring");
lf[44]=C_h_intern(&lf[44],14,"irregex-search");
lf[45]=C_h_intern(&lf[45],18,"pathname-directory");
lf[46]=C_h_intern(&lf[46],13,"pathname-file");
lf[47]=C_h_intern(&lf[47],18,"pathname-extension");
lf[48]=C_h_intern(&lf[48],24,"pathname-strip-directory");
lf[49]=C_h_intern(&lf[49],24,"pathname-strip-extension");
lf[50]=C_h_intern(&lf[50],26,"pathname-replace-directory");
lf[51]=C_h_intern(&lf[51],21,"pathname-replace-file");
lf[52]=C_h_intern(&lf[52],26,"pathname-replace-extension");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\004temp");
lf[54]=C_decode_literal(C_heaptop,"\376B\000\000\004/tmp");
lf[55]=C_h_intern(&lf[55],24,"get-environment-variable");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\000\003TMP");
lf[57]=C_decode_literal(C_heaptop,"\376B\000\000\004TEMP");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\006TMPDIR");
lf[59]=C_h_intern(&lf[59],21,"create-temporary-file");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\000\003tmp");
lf[61]=C_h_intern(&lf[61],21,"call-with-output-file");
lf[62]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[63]=C_h_intern(&lf[63],18,"\003sysnumber->string");
lf[64]=C_h_intern(&lf[64],14,"number->string");
lf[65]=C_h_intern(&lf[65],26,"create-temporary-directory");
lf[66]=C_h_intern(&lf[66],15,"\003syssignal-hook");
lf[67]=C_h_intern(&lf[67],11,"\000file-error");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000$cannot create temporary directory - ");
lf[69]=C_h_intern(&lf[69],17,"\003syspeek-c-string");
lf[70]=C_h_intern(&lf[70],17,"\003sysmake-c-string");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[72]=C_h_intern(&lf[72],7,"mingw32");
lf[73]=C_h_intern(&lf[73],7,"windows");
lf[74]=C_h_intern(&lf[74],4,"unix");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000\002..");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\002..");
lf[78]=C_h_intern(&lf[78],18,"normalize-pathname");
lf[79]=C_h_intern(&lf[79],3,"abs");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[81]=C_h_intern(&lf[81],7,"display");
lf[82]=C_h_intern(&lf[82],16,"\003syswrite-char-0");
lf[83]=C_h_intern(&lf[83],8,"for-each");
lf[84]=C_h_intern(&lf[84],17,"get-output-string");
lf[85]=C_h_intern(&lf[85],16,"\003sysfast-reverse");
lf[86]=C_h_intern(&lf[86],18,"open-output-string");
lf[87]=C_h_intern(&lf[87],3,"rel");
lf[88]=C_h_intern(&lf[88],15,"directory-null\077");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[91]=C_h_intern(&lf[91],12,"string-split");
lf[92]=C_decode_literal(C_heaptop,"\376B\000\000\002/\134");
lf[93]=C_h_intern(&lf[93],19,"decompose-directory");
lf[94]=C_h_intern(&lf[94],14,"build-platform");
lf[95]=C_h_intern(&lf[95],7,"irregex");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000\034^(.\052[\134/\134\134])\077((\134.)\077[^\134/\134\134]+)$");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000&^(.\052[\134/\134\134])\077([^\134/\134\134]+)(\134.([^\134/\134\134.]+))$");
lf[98]=C_h_intern(&lf[98],20,"\003syswindows-platform");
lf[99]=C_h_intern(&lf[99],13,"irregex-match");
lf[100]=C_decode_literal(C_heaptop,"\376B\000\000\026([A-Za-z]:)\077([\134/\134\134]).\052");
lf[101]=C_decode_literal(C_heaptop,"\376B\000\000\012([\134/\134\134]).\052");
lf[102]=C_h_intern(&lf[102],17,"register-feature!");
lf[103]=C_h_intern(&lf[103],5,"files");
C_register_lf2(lf,104,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_760,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_irregex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* _make-pathname in k1043 in k764 in k761 in k758 */
static void C_fcall f_1199(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1199,NULL,5,t1,t2,t3,t4,t5);}
t6=(C_truep(t5)?t5:lf[34]);
t7=t6;
t8=(C_truep(t4)?t4:lf[35]);
t9=t8;
t10=C_i_check_string_2(t3,t2);
t11=C_i_check_string_2(t9,t2);
t12=C_i_check_string_2(t7,t2);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1222,a[2]=t1,a[3]=t3,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1247,a[2]=t9,a[3]=t13,tmp=(C_word)a,a+=4,tmp);
t15=C_block_size(t3);
if(C_truep(C_fixnum_greater_or_equal_p(t15,C_fix(1)))){
t16=C_block_size(t9);
if(C_truep(C_fixnum_greater_or_equal_p(t16,C_fix(1)))){
t17=C_subchar(t9,C_fix(0));
t18=t14;
f_1247(t18,C_u_i_memq(t17,lf[38]));}
else{
t17=t14;
f_1247(t17,C_SCHEME_FALSE);}}
else{
t16=t14;
f_1247(t16,C_SCHEME_FALSE);}}

/* k998 in k932 in file-move in k764 in k761 in k758 */
static void C_ccall f_1000(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* files.scm:112: ##sys#error */
t2=*((C_word*)lf[12]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[17],lf[19],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
f_937(2,t2,C_SCHEME_UNDEFINED);}}

/* k1404 in k1394 in k1369 in decompose-pathname in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1406,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1410,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* files.scm:253: irregex-match-substring */
t4=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],C_fix(2));}

/* f_2166 in k2147 in k764 in k761 in k758 */
static void C_ccall f_2166(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2166,3,t0,t1,t2);}
if(C_truep(t2)){
/* files.scm:149: irregex-match-substring */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,C_fix(2));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* f_2157 in k2147 in k764 in k761 in k758 */
static void C_ccall f_2157(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2157,3,t0,t1,t2);}
if(C_truep(t2)){
/* files.scm:148: irregex-match-substring */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,C_fix(1));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k1419 in k1394 in k1369 in decompose-pathname in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:255: values */
C_values(5,0,((C_word*)t0)[2],t1,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* f_2151 in k2147 in k764 in k761 in k758 */
static void C_ccall f_2151(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2151,3,t0,t1,t2);}
/* files.scm:147: irregex-match */
t3=*((C_word*)lf[99]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,((C_word*)t0)[2],t2);}

/* pathname-directory in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1427(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1427,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1433,a[2]=t2,a[3]=((C_word)li16),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1439,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp);
/* files.scm:258: ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* k1412 in k1394 in k1369 in decompose-pathname in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:252: strip-pds */
f_1334(((C_word*)t0)[3],t1);}

/* k1408 in k1404 in k1394 in k1369 in decompose-pathname in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:251: values */
C_values(5,0,((C_word*)t0)[2],((C_word*)t0)[3],t1,C_SCHEME_FALSE);}

/* chop-pds in k1043 in k764 in k761 in k758 */
static void C_fcall f_1060(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1060,NULL,2,t1,t2);}
if(C_truep(t2)){
t3=C_block_size(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1073,a[2]=t5,a[3]=t2,a[4]=((C_word)li6),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1073(t7,t1,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k1043 in k764 in k761 in k758 */
static void C_fcall f_1045(C_word t0,C_word t1){
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
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1045,NULL,2,t0,t1);}
t2=C_mutate2((C_word*)lf[24]+1 /* (set! absolute-pathname? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1047,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate2(&lf[26] /* (set! chop-pds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1060,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1117,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t11=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1168,a[2]=t5,a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp));
t12=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1199,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2((C_word*)lf[29]+1 /* (set! make-pathname ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1281,a[2]=t9,a[3]=t7,a[4]=((C_word)li12),tmp=(C_word)a,a+=5,tmp));
t14=C_mutate2((C_word*)lf[39]+1 /* (set! make-absolute-pathname ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1300,a[2]=t9,a[3]=t7,a[4]=((C_word)li13),tmp=(C_word)a,a+=5,tmp));
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1330,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* files.scm:230: irregex */
t16=*((C_word*)lf[95]+1);
((C_proc3)(void*)(*((C_word*)t16+1)))(3,t16,t15,lf[97]);}

/* absolute-pathname? in k1043 in k764 in k761 in k758 */
static void C_ccall f_1047(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1047,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[24]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1058,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* files.scm:157: absolute-pathname-root */
t5=lf[21];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* pathname-file in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1442(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1442,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1448,a[2]=t2,a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1454,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp);
/* files.scm:263: ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* k1056 in absolute-pathname? in k1043 in k764 in k761 in k758 */
static void C_ccall f_1058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:157: irregex-match-data? */
t2=*((C_word*)lf[25]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* a1447 in pathname-file in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1448,2,t0,t1);}
/* files.scm:264: decompose-pathname */
t2=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* a1432 in pathname-directory in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1433,2,t0,t1);}
/* files.scm:259: decompose-pathname */
t2=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* a1438 in pathname-directory in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1439(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1439,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}

/* k1776 in loop in normalize-pathname in k2144 in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_fcall f_1778(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1778,NULL,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t2=C_eqp(((C_word*)((C_word*)t0)[3])[1],lf[79]);
if(C_truep(t2)){
t3=C_a_i_string(&a,1,((C_word*)t0)[4]);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
/* files.scm:374: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),((C_word*)t0)[6],((C_word*)((C_word*)t0)[5])[1],t3);}
else{
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}
else{
t3=lf[80];
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
/* files.scm:374: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),((C_word*)t0)[6],((C_word*)((C_word*)t0)[5])[1],t3);}
else{
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1802,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
/* files.scm:375: open-output-string */
t3=*((C_word*)lf[86]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* a1462 in pathname-extension in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1463,2,t0,t1);}
/* files.scm:269: decompose-pathname */
t2=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* a1468 in pathname-extension in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1469(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1469,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* normalize-pathname in k2144 in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1750(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr3r,(void*)f_1750r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1750r(t0,t1,t2,t3);}}

static void C_ccall f_1750r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(17);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?((C_word*)t0)[2]:C_i_car(t3));
t6=t5;
t7=C_eqp(t6,lf[73]);
t8=(C_truep(t7)?C_make_character(92):C_make_character(47));
t9=t8;
t10=C_i_check_string_2(t2,lf[78]);
t11=C_block_size(t2);
t12=t11;
t13=C_SCHEME_FALSE;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_SCHEME_FALSE;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1768,a[2]=t12,a[3]=t14,a[4]=t9,a[5]=t16,a[6]=((C_word*)t0)[3],a[7]=t2,a[8]=t18,a[9]=t6,a[10]=((C_word)li49),tmp=(C_word)a,a+=11,tmp));
t20=((C_word*)t18)[1];
f_1768(t20,t1,C_fix(0),C_fix(0),C_SCHEME_END_OF_LIST);}

/* loop in normalize-pathname in k2144 in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_fcall f_1768(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1768,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1778,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=t2,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnum_greaterp(t2,t3))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1894,a[2]=((C_word*)t0)[6],a[3]=t5,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* files.scm:371: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(5,*((C_word*)lf[27]+1),t7,((C_word*)t0)[7],t3,t2);}
else{
t7=t6;
f_1778(t7,C_SCHEME_UNDEFINED);}}
else{
t6=C_i_string_ref(((C_word*)t0)[7],t2);
if(C_truep((C_truep(C_eqp(t6,C_make_character(92)))?C_SCHEME_TRUE:(C_truep(C_eqp(t6,C_make_character(47)))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1907,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[8],a[5]=t1,a[6]=t5,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t8=((C_word*)((C_word*)t0)[3])[1];
if(C_truep(t8)){
t9=t7;
f_1907(t9,C_SCHEME_UNDEFINED);}
else{
t9=C_eqp(t2,t3);
if(C_truep(t9)){
t10=C_mutate2(((C_word *)((C_word*)t0)[3])+1,lf[79]);
t11=t7;
f_1907(t11,t10);}
else{
t10=C_mutate2(((C_word *)((C_word*)t0)[3])+1,lf[87]);
t11=t7;
f_1907(t11,t10);}}}
else{
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1959,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[8],a[5]=t1,a[6]=((C_word*)t0)[7],a[7]=t3,a[8]=t5,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_nullp(((C_word*)t5)[1]))){
t8=((C_word*)t0)[7];
t9=t2;
t10=C_subchar(t8,t9);
t11=C_i_char_equalp(t10,C_make_character(58));
t12=t7;
f_1959(t12,(C_truep(t11)?C_eqp(lf[73],((C_word*)t0)[9]):C_SCHEME_FALSE));}
else{
t8=t7;
f_1959(t8,C_SCHEME_FALSE);}}}}

/* a1453 in pathname-file in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1454(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1454,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}

/* pathname-extension in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1457(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1457,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1463,a[2]=t2,a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1469,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp);
/* files.scm:268: ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* k1844 in k1827 in k1824 in k1821 in k1806 in k1803 in k1800 in k1776 in loop in normalize-pathname in k2144 in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_1832(t3,t2);}

/* k1830 in k1827 in k1824 in k1821 in k1806 in k1803 in k1800 in k1776 in loop in normalize-pathname in k2144 in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_fcall f_1832(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1832,NULL,2,t0,t1);}
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1839,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* files.scm:388: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),t2,((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[3])[1]);}}

/* a1483 in pathname-strip-directory in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1484(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1484,5,t0,t1,t2,t3,t4);}
/* files.scm:275: make-pathname */
t5=*((C_word*)lf[29]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,C_SCHEME_FALSE,t3,t4);}

/* k1837 in k1830 in k1827 in k1824 in k1821 in k1806 in k1803 in k1800 in k1776 in loop in normalize-pathname in k2144 in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1839(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)((C_word*)t0)[2])[1]);}

/* pathname-strip-directory in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1472(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1472,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1478,a[2]=t2,a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1484,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp);
/* files.scm:273: ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* a1477 in pathname-strip-directory in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1478,2,t0,t1);}
/* files.scm:274: decompose-pathname */
t2=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* k1866 in for-each-loop466 in k1806 in k1803 in k1800 in k1776 in loop in normalize-pathname in k2144 in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1858(t3,((C_word*)t0)[4],t2);}

/* k982 in k975 in loop in k954 in k947 in k944 in k941 in k938 in k935 in k932 in file-move in k764 in k761 in k758 */
static void C_ccall f_984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],((C_word*)t0)[3]);
/* files.scm:132: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_958(t3,((C_word*)t0)[5],t1,t2);}

/* for-each-loop466 in k1806 in k1803 in k1800 in k1776 in loop in normalize-pathname in k2144 in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_fcall f_1858(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1858,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1868,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* files.scm:378: g467 */
t5=((C_word*)t0)[3];
f_1809(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* pathname-strip-extension in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1490(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1490,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1496,a[2]=t2,a[3]=((C_word)li28),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1502,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp);
/* files.scm:278: ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* k1220 in _make-pathname in k1043 in k764 in k761 in k758 */
static void C_ccall f_1222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1222,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1229,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=C_block_size(((C_word*)t0)[4]);
if(C_truep(C_fixnum_greaterp(t4,C_fix(0)))){
t5=C_subchar(((C_word*)t0)[4],C_fix(0));
t6=C_i_char_equalp(t5,C_make_character(46));
t7=t3;
f_1229(t7,C_i_not(t6));}
else{
t5=t3;
f_1229(t5,C_SCHEME_FALSE);}}

/* k989 in k935 in k932 in file-move in k764 in k761 in k758 */
static void C_ccall f_991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[2])){
t2=((C_word*)t0)[3];
f_940(2,t2,((C_word*)t0)[2]);}
else{
/* files.scm:115: ##sys#error */
t2=*((C_word*)lf[12]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[17],lf[18],((C_word*)t0)[4]);}}
else{
t2=((C_word*)t0)[3];
f_940(2,t2,C_SCHEME_FALSE);}}

/* k1227 in k1220 in _make-pathname in k1043 in k764 in k761 in k758 */
static void C_fcall f_1229(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* files.scm:200: string-append */
t2=*((C_word*)lf[31]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],lf[36],((C_word*)t0)[5]);}
else{
/* files.scm:200: string-append */
t2=*((C_word*)lf[31]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],lf[37],((C_word*)t0)[5]);}}

/* a1495 in pathname-strip-extension in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1496,2,t0,t1);}
/* files.scm:279: decompose-pathname */
t2=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* k1700 in k1696 in k1688 in loop in create-temporary-directory in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1702(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:334: string-append */
t2=*((C_word*)lf[31]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],lf[71],t1);}

/* k803 in file-copy in k764 in k761 in k758 */
static void C_ccall f_805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_805,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_808,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_865,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* files.scm:80: file-exists? */
t4=*((C_word*)lf[2]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* k806 in k803 in file-copy in k764 in k761 in k758 */
static void C_ccall f_808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_808,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_811,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_859,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* files.scm:86: directory-exists? */
t4=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}

/* k972 in k969 in k966 in loop in k954 in k947 in k944 in k941 in k938 in k935 in k932 in file-move in k764 in k761 in k758 */
static void C_ccall f_974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k975 in loop in k954 in k947 in k944 in k941 in k938 in k935 in k932 in file-move in k764 in k761 in k758 */
static void C_ccall f_977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_977,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_984,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* files.scm:132: read-string! */
t3=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8]);}

/* k1391 in k1369 in decompose-pathname in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:246: strip-pds */
f_1334(((C_word*)t0)[3],t1);}

/* k1245 in _make-pathname in k1043 in k764 in k761 in k758 */
static void C_fcall f_1247(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_block_size(((C_word*)t0)[2]);
/* files.scm:205: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(5,*((C_word*)lf[27]+1),((C_word*)t0)[3],((C_word*)t0)[2],C_fix(1),t2);}
else{
t2=((C_word*)t0)[3];
f_1222(2,t2,((C_word*)t0)[2]);}}

/* k969 in k966 in loop in k954 in k947 in k944 in k941 in k938 in k935 in k932 in file-move in k764 in k761 in k758 */
static void C_ccall f_971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_971,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_974,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* files.scm:128: delete-file */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k818 in k815 in k812 in k809 in k806 in k803 in file-copy in k764 in k761 in k758 */
static void C_ccall f_820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_820,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_827,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* files.scm:91: read-string! */
t4=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[4],t2,((C_word*)t0)[3]);}

/* k1892 in loop in normalize-pathname in k2144 in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1894,2,t0,t1);}
t2=f_1712(C_a_i(&a,9),t1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[4];
f_1778(t4,t3);}

/* k825 in k818 in k815 in k812 in k809 in k806 in k803 in file-copy in k764 in k761 in k758 */
static void C_ccall f_827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_827,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_829,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li1),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_829(t5,((C_word*)t0)[6],t1,C_fix(0));}

/* loop in k825 in k818 in k815 in k812 in k809 in k806 in k803 in file-copy in k764 in k761 in k758 */
static void C_fcall f_829(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_829,NULL,4,t0,t1,t2,t3);}
t4=C_eqp(C_fix(0),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_839,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* files.scm:95: close-input-port */
t6=*((C_word*)lf[5]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[3]);}
else{
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_845,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[3],tmp=(C_word)a,a+=9,tmp);
/* files.scm:99: write-string */
t6=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,((C_word*)t0)[6],t2,((C_word*)t0)[2]);}}

/* k941 in k938 in k935 in k932 in file-move in k764 in k761 in k758 */
static void C_ccall f_943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_943,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_946,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* files.scm:120: open-output-file */
t4=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[5],lf[10]);}

/* k947 in k944 in k941 in k938 in k935 in k932 in file-move in k764 in k761 in k758 */
static void C_ccall f_949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_949,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_956,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* files.scm:122: read-string! */
t4=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[5],t2,((C_word*)t0)[4]);}

/* k944 in k941 in k938 in k935 in k932 in file-move in k764 in k761 in k758 */
static void C_ccall f_946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_946,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_949,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* files.scm:121: make-string */
t4=*((C_word*)lf[8]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* k1379 in k1369 in decompose-pathname in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1381,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1385,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* files.scm:247: irregex-match-substring */
t4=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],C_fix(2));}

/* k938 in k935 in k932 in file-move in k764 in k761 in k758 */
static void C_ccall f_940(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_940,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_943,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* files.scm:119: open-input-file */
t3=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],lf[10]);}

/* pathname-replace-directory in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1508(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1508,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1514,a[2]=t2,a[3]=((C_word)li31),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1520,a[2]=t3,a[3]=((C_word)li32),tmp=(C_word)a,a+=4,tmp);
/* files.scm:283: ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* k1394 in k1369 in decompose-pathname in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1396,2,t0,t1);}
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1406,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1414,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* files.scm:252: irregex-match-substring */
t5=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,C_fix(1));}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1421,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* files.scm:255: strip-pds */
f_1334(t3,((C_word*)t0)[4]);}}

/* loop in k954 in k947 in k944 in k941 in k938 in k935 in k932 in file-move in k764 in k761 in k758 */
static void C_fcall f_958(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_958,NULL,4,t0,t1,t2,t3);}
t4=C_eqp(C_fix(0),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_968,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* files.scm:126: close-input-port */
t6=*((C_word*)lf[5]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[4]);}
else{
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_977,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
/* files.scm:131: write-string */
t6=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,((C_word*)t0)[7],t2,((C_word*)t0)[3]);}}

/* k954 in k947 in k944 in k941 in k938 in k935 in k932 in file-move in k764 in k761 in k758 */
static void C_ccall f_956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_956,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_958,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word)li3),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_958(t5,((C_word*)t0)[7],t1,C_fix(0));}

/* a1501 in pathname-strip-extension in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1502(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1502,5,t0,t1,t2,t3,t4);}
/* files.scm:280: make-pathname */
t5=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t2,t3);}

/* a1537 in pathname-replace-file in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1538(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1538,5,t0,t1,t2,t3,t4);}
/* files.scm:290: make-pathname */
t5=*((C_word*)lf[29]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,((C_word*)t0)[2],t4);}

/* k1387 in k1383 in k1379 in k1369 in decompose-pathname in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:245: values */
C_values(5,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1383 in k1379 in k1369 in decompose-pathname in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1385,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1389,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* files.scm:248: irregex-match-substring */
t4=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],C_fix(4));}

/* create-temporary-directory in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1646,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1652,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li44),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1652(t5,t1);}

/* a1531 in pathname-replace-file in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1532,2,t0,t1);}
/* files.scm:289: decompose-pathname */
t2=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* k1632 in k1628 in k1620 in loop in create-temporary-file in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:319: string-append */
t2=*((C_word*)lf[31]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],lf[62],t1);}

/* make-pathname in k1043 in k764 in k761 in k758 */
static void C_ccall f_1281(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_1281r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1281r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1281r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(6);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1292,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* files.scm:215: canonicalize-dirs */
t9=((C_word*)((C_word*)t0)[3])[1];
f_1168(t9,t8,t2);}

/* k1628 in k1620 in loop in create-temporary-file in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1630,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1634,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_fudge(C_fix(33));
/* files.scm:323: ##sys#number->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[63]+1)))(3,*((C_word*)lf[63]+1),t3,t4);}

/* k809 in k806 in k803 in file-copy in k764 in k761 in k758 */
static void C_ccall f_811(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_811,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_814,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* files.scm:88: open-input-file */
t3=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],lf[10]);}

/* k815 in k812 in k809 in k806 in k803 in file-copy in k764 in k761 in k758 */
static void C_ccall f_817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_817,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_820,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* files.scm:90: make-string */
t4=*((C_word*)lf[8]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* k812 in k809 in k806 in k803 in file-copy in k764 in k761 in k758 */
static void C_ccall f_814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_814,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_817,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* files.scm:89: open-output-file */
t4=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],lf[10]);}

/* k935 in k932 in file-move in k764 in k761 in k758 */
static void C_ccall f_937(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_937,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_940,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_991,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* files.scm:113: file-exists? */
t4=*((C_word*)lf[2]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}

/* k932 in file-move in k764 in k761 in k758 */
static void C_ccall f_934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_934,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_937,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1000,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* files.scm:111: directory-exists? */
t4=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* decompose-pathname in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1355(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1355,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[42]);
t4=C_block_size(t2);
t5=C_eqp(C_fix(0),t4);
if(C_truep(t5)){
/* files.scm:242: values */
C_values(5,0,t1,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1371,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* files.scm:243: irregex-search */
t7=*((C_word*)lf[44]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[4],t2);}}

/* k2030 in directory-null? in k2144 in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_2032(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2032,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2034,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_2034(t1));}

/* k1660 in k1654 in loop in create-temporary-directory in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1662,2,t0,t1);}
if(C_truep(t1)){
/* files.scm:340: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1652(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1669,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* files.scm:341: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),t2,((C_word*)t0)[4],lf[65]);}}

/* k2101 in k2122 in k2115 in k2112 in k2109 in decompose-directory in k2144 in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_2103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2103,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,t1,((C_word*)t0)[3]));}

/* file-move in k764 in k761 in k758 */
static void C_ccall f_909(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr4r,(void*)f_909r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_909r(t0,t1,t2,t3,t4);}}

static void C_ccall f_909r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(7);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_fix(1024):C_i_car(t9));
t12=t11;
t13=C_i_nullp(t9);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t15=C_i_check_string_2(t2,lf[17]);
t16=C_i_check_string_2(t3,lf[17]);
t17=C_i_check_number_2(t12,lf[17]);
t18=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_934,a[2]=t2,a[3]=t12,a[4]=t1,a[5]=t3,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_integerp(t12))){
if(C_truep(C_fixnum_greaterp(t12,C_fix(0)))){
t19=t18;
f_934(2,t19,C_SCHEME_UNDEFINED);}
else{
/* files.scm:107: ##sys#error */
t19=*((C_word*)lf[12]+1);
((C_proc5)(void*)(*((C_word*)t19+1)))(5,t19,t18,lf[17],lf[20],t12);}}
else{
/* files.scm:107: ##sys#error */
t19=*((C_word*)lf[12]+1);
((C_proc5)(void*)(*((C_word*)t19+1)))(5,t19,t18,lf[17],lf[20],t12);}}

/* k1339 in strip-pds in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_block_size(t1);
if(C_truep(C_fixnum_greaterp(t2,C_fix(0)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}
else{
/* files.scm:238: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(5,*((C_word*)lf[27]+1),((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0),C_fix(1));}}

/* k1667 in k1660 in k1654 in loop in create-temporary-directory in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1669,2,t0,t1);}
t2=C_mkdir(t1);
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[3]);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1682,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1686,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}}

/* a1513 in pathname-replace-directory in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1514,2,t0,t1);}
/* files.scm:284: decompose-pathname */
t2=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* loop in create-temporary-directory in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_fcall f_1652(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1652,NULL,2,t0,t1);}
t2=C_random_fixnum(C_fix(65536));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1656,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1690,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* files.scm:333: tempdir */
t5=((C_word*)t0)[4];
f_1562(t5,t4);}

/* delete-file* in k764 in k761 in k758 */
static void C_ccall f_768(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_768,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_775,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* files.scm:67: file-exists? */
t4=*((C_word*)lf[2]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k764 in k761 in k758 */
static void C_ccall f_766(C_word c,C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_766,2,t0,t1);}
t2=C_mutate2((C_word*)lf[0]+1 /* (set! delete-file* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_768,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate2((C_word*)lf[3]+1 /* (set! file-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_780,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[17]+1 /* (set! file-move ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_909,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t5=lf[21] /* absolute-pathname-root */ =C_SCHEME_UNDEFINED;;
t6=lf[22] /* root-origin */ =C_SCHEME_UNDEFINED;;
t7=lf[23] /* root-directory */ =C_SCHEME_UNDEFINED;;
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1045,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[98]+1))){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2149,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* files.scm:146: irregex */
t10=*((C_word*)lf[95]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,lf[100]);}
else{
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2176,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* files.scm:150: irregex */
t10=*((C_word*)lf[95]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,lf[101]);}}

/* k1800 in k1776 in loop in normalize-pathname in k2144 in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1802,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1805,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* files.scm:376: ##sys#fast-reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[85]+1)))(3,*((C_word*)lf[85]+1),t3,((C_word*)((C_word*)t0)[8])[1]);}

/* k1803 in k1800 in k1776 in loop in normalize-pathname in k2144 in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1805,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1808,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=C_i_car(t2);
/* files.scm:377: display */
t5=*((C_word*)lf[81]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[2]);}

/* k761 in k758 */
static void C_ccall f_763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_763,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_766,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* files.scm:57: register-feature! */
t3=*((C_word*)lf[102]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[103]);}

/* g467 in k1806 in k1803 in k1800 in k1776 in loop in normalize-pathname in k2144 in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_fcall f_1809(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1809,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1813,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* files.scm:380: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[82]+1)))(4,*((C_word*)lf[82]+1),t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k758 */
static void C_ccall f_760(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_760,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_763,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1806 in k1803 in k1800 in k1776 in loop in normalize-pathname in k2144 in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1808,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1809,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li47),tmp=(C_word)a,a+=5,tmp);
t3=C_u_i_cdr(((C_word*)t0)[4]);
t4=C_i_check_list_2(t3,lf[83]);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1823,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1858,a[2]=t7,a[3]=t2,a[4]=((C_word)li48),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_1858(t9,t5,t3);}

/* loop in k2030 in directory-null? in k2144 in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static C_word C_fcall f_2034(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:
t2=C_i_nullp(t1);
if(C_truep(t2)){
return(t2);}
else{
t3=C_i_car(t1);
if(C_truep((C_truep(C_i_equalp(t3,lf[89]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[90]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t4=t1;
t5=C_u_i_cdr(t4);
t7=t5;
t1=t7;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* k1654 in loop in create-temporary-directory in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1656,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1662,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* files.scm:339: directory-exists? */
t4=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* pathname-replace-extension in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1544(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1544,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1550,a[2]=t2,a[3]=((C_word)li37),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1556,a[2]=t3,a[3]=((C_word)li38),tmp=(C_word)a,a+=4,tmp);
/* files.scm:293: ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* k1574 in k1567 in tempdir in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1576,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1582,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* files.scm:308: get-environment-variable */
t3=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[56]);}}

/* k1680 in k1667 in k1660 in k1654 in loop in create-temporary-directory in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1682(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:344: ##sys#signal-hook */
t2=*((C_word*)lf[66]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[67],lf[65],t1,((C_word*)t0)[3]);}

/* k966 in loop in k954 in k947 in k944 in k941 in k938 in k935 in k932 in file-move in k764 in k761 in k758 */
static void C_ccall f_968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_968,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_971,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* files.scm:127: close-output-port */
t3=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k1684 in k1667 in k1660 in k1654 in loop in create-temporary-directory in k1331 in k1328 in k1043 in k764 in k761 in k758 */
static void C_ccall f_1686(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:346: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),((C_word*)t0)[2],lf[68],t1);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[163] = {
{"f_1823:files_2escm",(void*)f_1823},
{"f_1826:files_2escm",(void*)f_1826},
{"f_1829:files_2escm",(void*)f_1829},
{"f_1526:files_2escm",(void*)f_1526},
{"f_1314:files_2escm",(void*)f_1314},
{"f_1520:files_2escm",(void*)f_1520},
{"f_1311:files_2escm",(void*)f_1311},
{"f_1556:files_2escm",(void*)f_1556},
{"f_2149:files_2escm",(void*)f_2149},
{"f_2146:files_2escm",(void*)f_2146},
{"f_1813:files_2escm",(void*)f_1813},
{"f_1963:files_2escm",(void*)f_1963},
{"f_1550:files_2escm",(void*)f_1550},
{"f_1300:files_2escm",(void*)f_1300},
{"f_1317:files_2escm",(void*)f_1317},
{"f_1959:files_2escm",(void*)f_1959},
{"f_1587:files_2escm",(void*)f_1587},
{"f_1690:files_2escm",(void*)f_1690},
{"f_1694:files_2escm",(void*)f_1694},
{"f_1582:files_2escm",(void*)f_1582},
{"f_1698:files_2escm",(void*)f_1698},
{"f_1371:files_2escm",(void*)f_1371},
{"f_1292:files_2escm",(void*)f_1292},
{"f_775:files_2escm",(void*)f_775},
{"f_1943:files_2escm",(void*)f_1943},
{"f_1569:files_2escm",(void*)f_1569},
{"f_780:files_2escm",(void*)f_780},
{"f_1562:files_2escm",(void*)f_1562},
{"f_1599:files_2escm",(void*)f_1599},
{"f_1712:files_2escm",(void*)f_1712},
{"f_1333:files_2escm",(void*)f_1333},
{"f_1334:files_2escm",(void*)f_1334},
{"f_1330:files_2escm",(void*)f_1330},
{"f_1603:files_2escm",(void*)f_1603},
{"f_1609:files_2escm",(void*)f_1609},
{"f_1622:files_2escm",(void*)f_1622},
{"f_1626:files_2escm",(void*)f_1626},
{"f_1617:files_2escm",(void*)f_1617},
{"f_1126:files_2escm",(void*)f_1126},
{"f_845:files_2escm",(void*)f_845},
{"f_842:files_2escm",(void*)f_842},
{"f_1117:files_2escm",(void*)f_1117},
{"f_2024:files_2escm",(void*)f_2024},
{"f_865:files_2escm",(void*)f_865},
{"f_2187:files_2escm",(void*)f_2187},
{"f_2184:files_2escm",(void*)f_2184},
{"f_839:files_2escm",(void*)f_839},
{"f_1168:files_2escm",(void*)f_1168},
{"f_2176:files_2escm",(void*)f_2176},
{"f_2178:files_2escm",(void*)f_2178},
{"f_1158:files_2escm",(void*)f_1158},
{"f_2128:files_2escm",(void*)f_2128},
{"f_2124:files_2escm",(void*)f_2124},
{"f_859:files_2escm",(void*)f_859},
{"f_1154:files_2escm",(void*)f_1154},
{"f_1907:files_2escm",(void*)f_1907},
{"f_852:files_2escm",(void*)f_852},
{"f_2064:files_2escm",(void*)f_2064},
{"f_1080:files_2escm",(void*)f_1080},
{"f_2117:files_2escm",(void*)f_2117},
{"f_2114:files_2escm",(void*)f_2114},
{"f_1073:files_2escm",(void*)f_1073},
{"f_2111:files_2escm",(void*)f_2111},
{"toplevel:files_2escm",(void*)C_files_toplevel},
{"f_1199:files_2escm",(void*)f_1199},
{"f_1000:files_2escm",(void*)f_1000},
{"f_1406:files_2escm",(void*)f_1406},
{"f_2166:files_2escm",(void*)f_2166},
{"f_2157:files_2escm",(void*)f_2157},
{"f_1421:files_2escm",(void*)f_1421},
{"f_2151:files_2escm",(void*)f_2151},
{"f_1427:files_2escm",(void*)f_1427},
{"f_1414:files_2escm",(void*)f_1414},
{"f_1410:files_2escm",(void*)f_1410},
{"f_1060:files_2escm",(void*)f_1060},
{"f_1045:files_2escm",(void*)f_1045},
{"f_1047:files_2escm",(void*)f_1047},
{"f_1442:files_2escm",(void*)f_1442},
{"f_1058:files_2escm",(void*)f_1058},
{"f_1448:files_2escm",(void*)f_1448},
{"f_1433:files_2escm",(void*)f_1433},
{"f_1439:files_2escm",(void*)f_1439},
{"f_1778:files_2escm",(void*)f_1778},
{"f_1463:files_2escm",(void*)f_1463},
{"f_1469:files_2escm",(void*)f_1469},
{"f_1750:files_2escm",(void*)f_1750},
{"f_1768:files_2escm",(void*)f_1768},
{"f_1454:files_2escm",(void*)f_1454},
{"f_1457:files_2escm",(void*)f_1457},
{"f_1846:files_2escm",(void*)f_1846},
{"f_1832:files_2escm",(void*)f_1832},
{"f_1484:files_2escm",(void*)f_1484},
{"f_1839:files_2escm",(void*)f_1839},
{"f_1472:files_2escm",(void*)f_1472},
{"f_1478:files_2escm",(void*)f_1478},
{"f_1868:files_2escm",(void*)f_1868},
{"f_984:files_2escm",(void*)f_984},
{"f_1858:files_2escm",(void*)f_1858},
{"f_1490:files_2escm",(void*)f_1490},
{"f_1222:files_2escm",(void*)f_1222},
{"f_991:files_2escm",(void*)f_991},
{"f_1229:files_2escm",(void*)f_1229},
{"f_1496:files_2escm",(void*)f_1496},
{"f_1702:files_2escm",(void*)f_1702},
{"f_805:files_2escm",(void*)f_805},
{"f_808:files_2escm",(void*)f_808},
{"f_974:files_2escm",(void*)f_974},
{"f_977:files_2escm",(void*)f_977},
{"f_1393:files_2escm",(void*)f_1393},
{"f_1247:files_2escm",(void*)f_1247},
{"f_971:files_2escm",(void*)f_971},
{"f_820:files_2escm",(void*)f_820},
{"f_1894:files_2escm",(void*)f_1894},
{"f_827:files_2escm",(void*)f_827},
{"f_829:files_2escm",(void*)f_829},
{"f_943:files_2escm",(void*)f_943},
{"f_949:files_2escm",(void*)f_949},
{"f_946:files_2escm",(void*)f_946},
{"f_1381:files_2escm",(void*)f_1381},
{"f_940:files_2escm",(void*)f_940},
{"f_1508:files_2escm",(void*)f_1508},
{"f_1396:files_2escm",(void*)f_1396},
{"f_958:files_2escm",(void*)f_958},
{"f_956:files_2escm",(void*)f_956},
{"f_1502:files_2escm",(void*)f_1502},
{"f_1538:files_2escm",(void*)f_1538},
{"f_1389:files_2escm",(void*)f_1389},
{"f_1385:files_2escm",(void*)f_1385},
{"f_1646:files_2escm",(void*)f_1646},
{"f_1532:files_2escm",(void*)f_1532},
{"f_1634:files_2escm",(void*)f_1634},
{"f_1281:files_2escm",(void*)f_1281},
{"f_1630:files_2escm",(void*)f_1630},
{"f_811:files_2escm",(void*)f_811},
{"f_817:files_2escm",(void*)f_817},
{"f_814:files_2escm",(void*)f_814},
{"f_937:files_2escm",(void*)f_937},
{"f_934:files_2escm",(void*)f_934},
{"f_1355:files_2escm",(void*)f_1355},
{"f_2032:files_2escm",(void*)f_2032},
{"f_1662:files_2escm",(void*)f_1662},
{"f_2103:files_2escm",(void*)f_2103},
{"f_909:files_2escm",(void*)f_909},
{"f_1341:files_2escm",(void*)f_1341},
{"f_1669:files_2escm",(void*)f_1669},
{"f_1514:files_2escm",(void*)f_1514},
{"f_1652:files_2escm",(void*)f_1652},
{"f_768:files_2escm",(void*)f_768},
{"f_766:files_2escm",(void*)f_766},
{"f_1802:files_2escm",(void*)f_1802},
{"f_1805:files_2escm",(void*)f_1805},
{"f_763:files_2escm",(void*)f_763},
{"f_1809:files_2escm",(void*)f_1809},
{"f_760:files_2escm",(void*)f_760},
{"f_1808:files_2escm",(void*)f_1808},
{"f_2034:files_2escm",(void*)f_2034},
{"f_1656:files_2escm",(void*)f_1656},
{"f_1544:files_2escm",(void*)f_1544},
{"f_1576:files_2escm",(void*)f_1576},
{"f_1682:files_2escm",(void*)f_1682},
{"f_968:files_2escm",(void*)f_968},
{"f_1686:files_2escm",(void*)f_1686},
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
o|eliminated procedure checks: 41 
o|specializations:
o|  1 (string-ref string fixnum)
o|  1 (string=? string string)
o|  1 (car pair)
o|  5 (cdr pair)
o|  1 (zero? fixnum)
o|  3 (memq * list)
o|dropping redundant toplevel assignment: make-pathname 
o|dropping redundant toplevel assignment: make-absolute-pathname 
o|dropping redundant toplevel assignment: create-temporary-file 
o|dropping redundant toplevel assignment: create-temporary-directory 
o|Removed `not' forms: 4 
o|inlining procedure: k770 
o|inlining procedure: k770 
o|inlining procedure: k831 
o|inlining procedure: k831 
o|inlining procedure: k866 
o|inlining procedure: k866 
o|inlining procedure: k960 
o|inlining procedure: k960 
o|inlining procedure: k992 
o|inlining procedure: k992 
o|inlining procedure: k1062 
o|inlining procedure: k1075 
o|inlining procedure: k1075 
o|contracted procedure: "(files.scm:165) g178179" 
o|substituted constant variable: a1107 
o|inlining procedure: k1062 
o|inlining procedure: k1128 
o|inlining procedure: k1128 
o|inlining procedure: k1170 
o|inlining procedure: k1170 
o|inlining procedure: k1224 
o|inlining procedure: k1224 
o|inlining procedure: k1258 
o|contracted procedure: "(files.scm:204) g215216" 
o|substituted constant variable: a1267 
o|inlining procedure: k1258 
o|inlining procedure: k1312 
o|inlining procedure: k1312 
o|inlining procedure: k1336 
o|inlining procedure: k1336 
o|inlining procedure: k1360 
o|inlining procedure: k1360 
o|inlining procedure: k1397 
o|inlining procedure: k1397 
o|inlining procedure: k1564 
o|inlining procedure: k1564 
o|inlining procedure: k1577 
o|inlining procedure: k1577 
o|inlining procedure: k1604 
o|inlining procedure: k1604 
o|inlining procedure: k1657 
o|inlining procedure: k1657 
o|inlining procedure: k1714 
o|inlining procedure: k1714 
o|substituted constant variable: a1723 
o|inlining procedure: k1725 
o|inlining procedure: k1725 
o|inlining procedure: k1770 
o|inlining procedure: k1788 
o|inlining procedure: k1788 
o|inlining procedure: k1833 
o|inlining procedure: k1833 
o|inlining procedure: k1860 
o|inlining procedure: k1860 
o|inlining procedure: k1770 
o|inlining procedure: k1908 
o|inlining procedure: k1908 
o|contracted procedure: k1944 
o|inlining procedure: k1948 
o|inlining procedure: k1948 
o|inlining procedure: k1954 
o|inlining procedure: k1954 
o|inlining procedure: k1989 
o|inlining procedure: k1989 
o|contracted procedure: "(files.scm:390) g490491" 
o|substituted constant variable: a1901 
o|inlining procedure: k2039 
o|inlining procedure: k2039 
o|contracted procedure: "(files.scm:447) strip-origin-prefix516" 
o|contracted procedure: k2072 
o|inlining procedure: k2069 
o|contracted procedure: k2084 
o|inlining procedure: k2091 
o|inlining procedure: k2091 
o|inlining procedure: k2069 
o|contracted procedure: k2133 
o|substituted constant variable: patt2255 
o|substituted constant variable: patt1254 
o|inlining procedure: k2159 
o|inlining procedure: k2159 
o|inlining procedure: k2168 
o|inlining procedure: k2168 
o|inlining procedure: k2189 
o|inlining procedure: k2189 
o|replaced variables: 240 
o|removed binding forms: 113 
o|substituted constant variable: r7712196 
o|substituted constant variable: r10632208 
o|substituted constant variable: r11292209 
o|substituted constant variable: r11712211 
o|substituted constant variable: r12252213 
o|substituted constant variable: r12252213 
o|substituted constant variable: r12252215 
o|substituted constant variable: r12252215 
o|substituted constant variable: r12592218 
o|substituted constant variable: r13372224 
o|inlining procedure: k1570 
o|inlining procedure: k1570 
o|inlining procedure: k1570 
o|inlining procedure: k1570 
o|substituted constant variable: r19492253 
o|substituted constant variable: r19492255 
o|substituted constant variable: r19902260 
o|converted assignments to bindings: (addpart427) 
o|converted assignments to bindings: (tempdir386) 
o|substituted constant variable: r21602268 
o|substituted constant variable: r21692270 
o|substituted constant variable: r21902272 
o|simplifications: ((let . 2)) 
o|replaced variables: 15 
o|removed binding forms: 242 
o|inlining procedure: k872 
o|inlining procedure: k1004 
o|inlining procedure: k1785 
o|replaced variables: 8 
o|removed binding forms: 38 
o|substituted constant variable: r8732327 
o|substituted constant variable: r10052330 
o|contracted procedure: k1902 
o|simplifications: ((if . 1) (let . 2)) 
o|replaced variables: 1 
o|removed binding forms: 8 
o|removed conditional forms: 2 
o|replaced variables: 2 
o|removed binding forms: 3 
o|removed binding forms: 1 
o|simplifications: ((if . 20) (##core#call . 138)) 
o|  call simplifications:
o|    list?
o|    member
o|    string-ref
o|    pair?
o|    ##sys#slot	2
o|    string	2
o|    string=?	2
o|    cons	3
o|    ##sys#fudge	2
o|    ##sys#call-with-values	8
o|    values	5
o|    fx>	3
o|    char=?	2
o|    not	2
o|    string?
o|    list
o|    ##sys#check-list	2
o|    string-length
o|    eq?	7
o|    fx>=	4
o|    ##sys#size	12
o|    fx<
o|    fx-	2
o|    car	13
o|    null?	19
o|    cdr	5
o|    ##sys#check-string	12
o|    ##sys#check-number	2
o|    integer?	2
o|    >	2
o|    fx=	7
o|    fx+	10
o|contracted procedure: k902 
o|contracted procedure: k782 
o|contracted procedure: k896 
o|contracted procedure: k785 
o|contracted procedure: k890 
o|contracted procedure: k788 
o|contracted procedure: k884 
o|contracted procedure: k791 
o|contracted procedure: k794 
o|contracted procedure: k797 
o|contracted procedure: k800 
o|contracted procedure: k834 
o|contracted procedure: k854 
o|contracted procedure: k878 
o|contracted procedure: k872 
o|substituted constant variable: g2423 
o|contracted procedure: k1034 
o|contracted procedure: k911 
o|contracted procedure: k1028 
o|contracted procedure: k914 
o|contracted procedure: k1022 
o|contracted procedure: k917 
o|contracted procedure: k1016 
o|contracted procedure: k920 
o|contracted procedure: k923 
o|contracted procedure: k926 
o|contracted procedure: k929 
o|contracted procedure: k963 
o|contracted procedure: k986 
o|contracted procedure: k1010 
o|contracted procedure: k1004 
o|substituted constant variable: g2427 
o|contracted procedure: k1049 
o|contracted procedure: k1069 
o|contracted procedure: k1085 
o|contracted procedure: k1098 
o|contracted procedure: k1091 
o|contracted procedure: k1101 
o|contracted procedure: k1113 
o|contracted procedure: k1119 
o|contracted procedure: k1131 
o|contracted procedure: k1134 
o|contracted procedure: k1164 
o|contracted procedure: k1140 
o|contracted procedure: k1173 
o|contracted procedure: k1176 
o|contracted procedure: k1182 
o|contracted procedure: k1189 
o|contracted procedure: k1201 
o|contracted procedure: k1204 
o|contracted procedure: k1207 
o|contracted procedure: k1210 
o|contracted procedure: k1213 
o|contracted procedure: k1242 
o|contracted procedure: k1230 
o|contracted procedure: k1237 
o|contracted procedure: k1252 
o|contracted procedure: k1277 
o|contracted procedure: k1255 
o|contracted procedure: k1273 
o|contracted procedure: k1261 
o|contracted procedure: k1293 
o|contracted procedure: k1283 
o|contracted procedure: k1321 
o|contracted procedure: k1302 
o|contracted procedure: k1352 
o|contracted procedure: k1345 
o|contracted procedure: k1357 
o|contracted procedure: k1423 
o|contracted procedure: k1363 
o|contracted procedure: k1639 
o|contracted procedure: k1589 
o|contracted procedure: k1592 
o|contracted procedure: k1636 
o|contracted procedure: k1673 
o|contracted procedure: k1704 
o|contracted procedure: k2140 
o|contracted procedure: k1708 
o|contracted procedure: k1717 
o|contracted procedure: k1728 
o|inlining procedure: k1731 
o|contracted procedure: k1744 
o|inlining procedure: k1731 
o|contracted procedure: k2008 
o|contracted procedure: k1752 
o|contracted procedure: k2005 
o|contracted procedure: k1755 
o|contracted procedure: k1758 
o|contracted procedure: k1761 
o|contracted procedure: k1773 
o|contracted procedure: k1782 
o|contracted procedure: k1794 
o|contracted procedure: k1785 
o|contracted procedure: k1818 
o|contracted procedure: k1840 
o|contracted procedure: k1848 
o|contracted procedure: k1851 
o|contracted procedure: k1863 
o|contracted procedure: k1873 
o|contracted procedure: k1877 
o|contracted procedure: k1881 
o|contracted procedure: k1884 
o|contracted procedure: k2002 
o|contracted procedure: k1911 
o|contracted procedure: k1918 
o|contracted procedure: k1922 
o|contracted procedure: k1929 
o|contracted procedure: k1933 
o|contracted procedure: k1951 
o|contracted procedure: k1968 
o|contracted procedure: k1972 
o|contracted procedure: k1976 
o|contracted procedure: k1983 
o|contracted procedure: k1986 
o|contracted procedure: k1992 
o|contracted procedure: k2017 
o|contracted procedure: k2036 
o|contracted procedure: k2054 
o|contracted procedure: k2045 
o|contracted procedure: k2057 
o|contracted procedure: k2137 
o|contracted procedure: k2130 
o|contracted procedure: k2075 
o|contracted procedure: k2078 
o|contracted procedure: k2088 
o|contracted procedure: k2105 
o|contracted procedure: k2094 
o|simplifications: ((if . 1) (let . 20)) 
o|replaced variables: 2 
o|removed binding forms: 123 
o|inlining procedure: "(files.scm:418) split-directory" 
o|inlining procedure: "(files.scm:444) split-directory" 
o|replaced variables: 52 
o|removed binding forms: 5 
o|removed side-effect free assignment to unused variable: split-directory 
o|substituted constant variable: loc5012482 
o|substituted constant variable: keep?5032484 
o|substituted constant variable: loc5012487 
o|substituted constant variable: keep?5032489 
o|replaced variables: 2 
o|removed binding forms: 23 
o|removed binding forms: 7 
o|direct leaf routine/allocation: addpart427 9 
o|direct leaf routine/allocation: loop507 0 
o|contracted procedure: "(files.scm:371) k1888" 
o|contracted procedure: "(files.scm:397) k1937" 
o|converted assignments to bindings: (loop507) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 2 
o|customizable procedures: (k1043 k1957 k1905 loop453 k1776 g467474 for-each-loop466478 k1830 loop418 tempdir386 loop412 strip-pds258 canonicalize-dirs185 _make-pathname186 k1245 k1227 conc-dirs184 chop-pds loop188 k1078 lp171 loop133 loop93) 
o|calls to known targets: 64 
o|identified direct recursive calls: f_1126 1 
o|identified direct recursive calls: f_2034 1 
o|fast box initializations: 11 
o|fast global references: 6 
o|fast global assignments: 10 
o|dropping unused closure argument: f_1712 
o|dropping unused closure argument: f_1334 
o|dropping unused closure argument: f_1117 
o|dropping unused closure argument: f_1199 
o|dropping unused closure argument: f_1060 
o|dropping unused closure argument: f_2034 
*/
/* end of file */
