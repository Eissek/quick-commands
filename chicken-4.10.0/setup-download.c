/* Generated from setup-download.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:02
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: setup-download.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -feature chicken-compile-shared -dynamic -emit-import-library setup-download -output-file setup-download.c
   used units: library eval chicken_2dsyntax extras irregex posix utils srfi_2d1 data_2dstructures tcp srfi_2d13 files
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d1_toplevel)
C_externimport void C_ccall C_srfi_2d1_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_tcp_toplevel)
C_externimport void C_ccall C_tcp_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d13_toplevel)
C_externimport void C_ccall C_srfi_2d13_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[259];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,34),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,100,32,102,115,116,114,49,53,55,32,97,114,103,115,49,53,56,41,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,40),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,103,101,116,45,116,101,109,112,111,114,97,114,121,45,100,105,114,101,99,116,111,114,121,41};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,57),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,101,120,105,115,116,105,110,103,45,118,101,114,115,105,111,110,32,101,103,103,49,54,57,32,118,101,114,115,105,111,110,49,55,48,32,118,115,49,55,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,7),40,97,49,53,51,55,41,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,52,54,32,103,51,53,51,51,53,57,41,0,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,18),40,97,49,55,49,57,32,103,51,51,57,51,52,48,51,52,49,41,0,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,33),40,97,49,53,55,52,32,115,114,99,50,56,52,50,56,53,50,57,49,32,118,101,114,50,56,54,50,56,55,50,57,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,59),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,108,111,99,97,116,101,45,101,103,103,47,108,111,99,97,108,32,101,103,103,50,54,49,32,100,105,114,50,54,50,32,46,32,116,109,112,50,54,48,50,54,51,41,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,7),40,97,49,56,49,54,41,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,7),40,97,49,56,55,52,41,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,13),40,97,49,56,54,56,32,101,120,51,56,54,41,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,7),40,97,49,56,56,57,41,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,7),40,97,49,57,48,49,41,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,20),40,97,49,56,57,53,32,46,32,97,114,103,115,51,56,48,51,56,56,41,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,7),40,97,49,56,56,51,41,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,15),40,97,49,56,54,50,32,107,51,55,57,51,56,53,41,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,17),40,97,49,56,51,55,32,114,101,116,117,114,110,51,55,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,37),40,97,49,56,50,50,32,108,111,99,51,54,56,51,54,57,51,55,50,32,118,101,114,115,105,111,110,51,55,48,51,55,49,51,55,51,41,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,14),40,97,49,56,49,48,32,101,103,103,51,54,55,41,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,46),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,103,97,116,104,101,114,45,101,103,103,45,105,110,102,111,114,109,97,116,105,111,110,32,100,105,114,51,54,53,41,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,66),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,109,97,107,101,45,115,118,110,45,108,115,45,99,109,100,32,117,97,114,103,51,57,53,32,112,97,114,103,51,57,54,32,112,110,97,109,51,57,55,32,116,109,112,51,57,52,51,57,56,41,0,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,7),40,97,50,50,50,54,41,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,37),40,97,50,50,53,52,32,102,105,108,101,100,105,114,53,51,52,53,51,53,53,51,57,32,118,101,114,53,51,54,53,51,55,53,52,48,41,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,12),40,97,50,51,50,48,32,102,53,51,50,41,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,58),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,108,111,99,97,116,101,45,101,103,103,47,115,118,110,32,101,103,103,53,49,48,32,114,101,112,111,53,49,49,32,46,32,116,109,112,53,48,57,53,49,50,41,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,39),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,100,101,99,111,110,115,116,114,117,99,116,45,117,114,108,32,117,114,108,53,53,53,41,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,7),40,97,50,52,56,54,41,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,7),40,97,50,53,50,56,41,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,14),40,97,50,53,50,50,32,101,120,110,54,49,48,41,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,7),40,97,51,49,52,49,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,11),40,103,55,51,50,32,109,55,51,52,41,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,6),40,115,107,105,112,41,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,7),40,97,51,49,49,52,41,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,20),40,103,101,116,45,102,105,108,101,115,32,102,105,108,101,115,55,53,48,41,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,32),40,97,51,49,52,55,32,105,110,55,56,53,55,56,54,55,56,57,32,111,117,116,55,56,55,55,56,56,55,57,48,41};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,7),40,97,50,53,52,54,41,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,7),40,97,50,53,54,56,41,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,20),40,97,50,53,54,50,32,46,32,97,114,103,115,54,48,52,54,49,57,41,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,7),40,97,50,53,52,48,41,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,15),40,97,50,53,49,54,32,107,54,48,51,54,48,57,41,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,31),40,97,50,52,57,50,32,104,111,115,116,53,57,51,32,112,111,114,116,53,57,52,32,108,111,99,110,53,57,53,41,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,58),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,108,111,99,97,116,101,45,101,103,103,47,104,116,116,112,32,101,103,103,53,55,50,32,117,114,108,53,55,51,32,46,32,116,109,112,53,55,49,53,55,52,41,0,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,7),40,97,50,55,50,54,41,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,7),40,97,50,55,50,57,41,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,7),40,97,50,55,51,50,41,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,7),40,97,50,55,51,53,41,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,78),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,109,97,107,101,45,72,84,84,80,45,71,69,84,47,49,46,49,32,108,111,99,97,116,105,111,110,54,51,48,32,117,115,101,114,45,97,103,101,110,116,54,51,49,32,104,111,115,116,54,51,50,32,116,109,112,54,50,57,54,51,51,41,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,53),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,114,101,115,112,111,110,115,101,45,109,97,116,99,104,45,99,111,100,101,63,32,109,114,115,112,54,52,53,32,99,111,100,101,54,52,54,41,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,7),40,97,50,55,56,50,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,20),40,103,101,116,45,99,104,117,110,107,115,32,100,97,116,97,56,50,55,41,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,7),40,97,50,56,55,54,41,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,36),40,97,50,56,56,50,32,105,110,112,120,54,56,57,54,57,48,54,57,51,32,111,117,116,112,120,54,57,49,54,57,50,54,57,52,41,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,32),40,97,50,55,57,54,32,105,110,54,55,50,54,55,51,54,56,50,32,111,117,116,54,55,52,54,55,53,54,56,51,41};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,100),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,104,116,116,112,45,99,111,110,110,101,99,116,32,104,111,115,116,54,53,49,32,112,111,114,116,54,53,50,32,108,111,99,110,54,53,51,32,112,114,111,120,121,45,104,111,115,116,54,53,52,32,112,114,111,120,121,45,112,111,114,116,54,53,53,32,112,114,111,120,121,45,117,115,101,114,45,112,97,115,115,54,53,54,41,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,39),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,99,104,101,99,107,45,101,103,103,45,110,97,109,101,32,110,97,109,101,56,52,51,41,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,7),40,97,51,51,52,57,41,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,7),40,97,51,51,53,56,41,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,7),40,97,51,51,57,55,41,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,7),40,97,51,52,48,54,41,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,80),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,114,101,116,114,105,101,118,101,45,101,120,116,101,110,115,105,111,110,32,110,97,109,101,56,53,48,32,116,114,97,110,115,112,111,114,116,56,53,49,32,108,111,99,97,116,105,111,110,56,53,50,32,46,32,116,109,112,56,52,57,56,53,51,41};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,7),40,97,51,52,51,51,41,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,49,56,49,32,103,49,57,51,50,48,55,41,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,52,50,56,32,103,52,52,48,52,52,55,41,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,7),40,97,51,49,53,57,41,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,7),40,97,51,49,55,49,41,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,32),40,97,51,49,56,49,32,105,110,56,49,48,56,49,49,56,49,52,32,111,117,116,56,49,50,56,49,51,56,49,53,41};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,49),40,97,51,49,54,53,32,104,111,115,116,55,57,56,55,57,57,56,48,52,32,112,111,114,116,56,48,48,56,48,49,56,48,53,32,108,111,99,110,56,48,50,56,48,51,56,48,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,7),40,97,51,52,51,56,41,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,7),40,97,51,52,55,55,41,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,69),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,108,105,115,116,45,101,120,116,101,110,115,105,111,110,115,32,116,114,97,110,115,112,111,114,116,57,48,57,32,108,111,99,97,116,105,111,110,57,49,48,32,46,32,116,109,112,57,48,56,57,49,49,41,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,7),40,97,51,53,48,48,41,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,50,50,51,32,103,50,51,53,50,52,57,41,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,52,55,57,32,103,52,57,49,52,57,56,41,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,7),40,97,51,53,48,53,41,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,7),40,97,51,53,51,51,41,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,85),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,108,105,115,116,45,101,120,116,101,110,115,105,111,110,45,118,101,114,115,105,111,110,115,32,110,97,109,101,57,52,48,32,116,114,97,110,115,112,111,114,116,57,52,49,32,108,111,99,97,116,105,111,110,57,52,50,32,46,32,116,109,112,57,51,57,57,52,51,41,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1585)
static void C_fcall f_1585(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2730)
static void C_ccall f_2730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2733)
static void C_ccall f_2733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2736)
static void C_ccall f_2736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3300)
static void C_ccall f_3300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3305)
static void C_ccall f_3305(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_3305)
static void C_ccall f_3305r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_3102)
static void C_ccall f_3102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3077)
static void C_ccall f_3077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2910)
static void C_ccall f_2910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2919)
static void C_ccall f_2919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2913)
static void C_ccall f_2913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3534)
static void C_ccall f_3534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2906)
static void C_ccall f_2906(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3541)
static void C_ccall f_3541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3093)
static void C_ccall f_3093(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3096)
static void C_ccall f_3096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3090)
static void C_ccall f_3090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1538)
static void C_ccall f_1538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3099)
static void C_ccall f_3099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1533)
static void C_ccall f_1533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1530)
static void C_ccall f_1530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3062)
static void C_ccall f_3062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1313)
static void C_ccall f_1313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1492)
static void C_ccall f_1492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2810)
static void C_ccall f_2810(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1302)
static void C_ccall f_1302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1305)
static void C_ccall f_1305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2819)
static void C_ccall f_2819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2813)
static void C_ccall f_2813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2816)
static void C_ccall f_2816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1318)
static void C_fcall f_1318(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2762)
static void C_ccall f_2762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2766)
static void C_ccall f_2766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2801)
static void C_ccall f_2801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1549)
static void C_ccall f_1549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2807)
static void C_ccall f_2807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2804)
static void C_ccall f_2804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1308)
static void C_ccall f_1308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3166)
static void C_ccall f_3166(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3160)
static void C_ccall f_3160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2719)
static void C_ccall f_2719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2715)
static void C_ccall f_2715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3172)
static void C_ccall f_3172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2210)
static void C_ccall f_2210(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3186)
static void C_ccall f_3186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3180)
static void C_ccall f_3180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2774)
static void C_fcall f_2774(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2219)
static void C_ccall f_2219(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3182)
static void C_ccall f_3182(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2216)
static void C_ccall f_2216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2778)
static void C_ccall f_2778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2213)
static void C_ccall f_2213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3189)
static void C_ccall f_3189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1344)
static void C_ccall f_1344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2207)
static void C_ccall f_2207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3115)
static void C_ccall f_3115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3113)
static void C_ccall f_3113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1334)
static void C_fcall f_1334(C_word t0) C_noret;
C_noret_decl(f_1332)
static void C_ccall f_1332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1347)
static void C_ccall f_1347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1349)
static void C_fcall f_1349(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2551)
static void C_ccall f_2551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2751)
static void C_fcall f_2751(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1500)
static void C_ccall f_1500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1502)
static void C_ccall f_1502(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1502)
static void C_ccall f_1502r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1325)
static void C_ccall f_1325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1338)
static void C_ccall f_1338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2783)
static void C_ccall f_2783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2255)
static void C_ccall f_2255(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2259)
static void C_ccall f_2259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1365)
static void C_ccall f_1365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1735)
static void C_ccall f_1735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2241)
static void C_ccall f_2241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2990)
static void C_ccall f_2990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1720)
static void C_ccall f_1720(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1739)
static void C_ccall f_1739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2797)
static void C_ccall f_2797(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2238)
static void C_ccall f_2238(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2512)
static void C_ccall f_2512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2517)
static void C_ccall f_2517(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2987)
static void C_fcall f_2987(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2222)
static void C_ccall f_2222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1728)
static void C_ccall f_1728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2227)
static void C_ccall f_2227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2583)
static void C_ccall f_2583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2587)
static void C_ccall f_2587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f3750)
static void C_ccall f3750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2497)
static void C_ccall f_2497(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2493)
static void C_ccall f_2493(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1430)
static void C_ccall f_1430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2965)
static void C_fcall f_2965(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2969)
static void C_ccall f_2969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2961)
static void C_ccall f_2961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1298)
static void C_ccall f_1298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1295)
static void C_ccall f_1295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3478)
static void C_ccall f_3478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1292)
static void C_ccall f_1292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2893)
static void C_ccall f_2893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2563)
static void C_ccall f_2563(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2563)
static void C_ccall f_2563r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2955)
static void C_ccall f_2955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2569)
static void C_ccall f_2569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3483)
static void C_ccall f_3483(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_3483)
static void C_ccall f_3483r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_2899)
static void C_ccall f_2899(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2883)
static void C_ccall f_2883(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2942)
static void C_fcall f_2942(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2946)
static void C_ccall f_2946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2940)
static void C_ccall f_2940(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f3746)
static void C_ccall f3746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2872)
static void C_ccall f_2872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2428)
static void C_ccall f_2428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2877)
static void C_ccall f_2877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2425)
static void C_ccall f_2425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1446)
static void C_ccall f_1446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1440)
static void C_ccall f_1440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2931)
static void C_ccall f_2931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2868)
static void C_ccall f_2868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2922)
static void C_ccall f_2922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2928)
static void C_ccall f_2928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2925)
static void C_ccall f_2925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2487)
static void C_ccall f_2487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2856)
static void C_ccall f_2856(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2850)
static void C_ccall f_2850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2844)
static void C_ccall f_2844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2846)
static void C_fcall f_2846(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2840)
static void C_ccall f_2840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1401)
static void C_fcall f_1401(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2837)
static void C_ccall f_2837(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2834)
static void C_ccall f_2834(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3496)
static void C_ccall f_3496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2822)
static void C_ccall f_2822(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2825)
static void C_ccall f_2825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2143)
static void C_ccall f_2143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2147)
static void C_ccall f_2147(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2135)
static void C_ccall f_2135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1399)
static void C_ccall f_1399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1396)
static void C_ccall f_1396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2295)
static void C_ccall f_2295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2281)
static void C_ccall f_2281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2285)
static void C_ccall f_2285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2289)
static void C_ccall f_2289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3250)
static void C_ccall f_3250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3253)
static void C_ccall f_3253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3256)
static void C_ccall f_3256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2262)
static void C_ccall f_2262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2265)
static void C_ccall f_2265(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3267)
static void C_ccall f_3267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3271)
static void C_ccall f_3271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3287)
static void C_ccall f_3287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1634)
static void C_ccall f_1634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1631)
static void C_ccall f_1631(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1637)
static void C_ccall f_1637(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3214)
static void C_ccall f_3214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3210)
static void C_ccall f_3210(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1707)
static void C_ccall f_1707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2321)
static void C_ccall f_2321(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1625)
static void C_ccall f_1625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1622)
static void C_ccall f_1622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2325)
static void C_ccall f_2325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1764)
static void C_ccall f_1764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2541)
static void C_ccall f_2541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3222)
static void C_fcall f_3222(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2547)
static void C_ccall f_2547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2312)
static void C_ccall f_2312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2319)
static void C_ccall f_2319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1751)
static void C_ccall f_1751(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2533)
static void C_ccall f_2533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2302)
static void C_ccall f_2302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3350)
static void C_ccall f_3350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3359)
static void C_ccall f_3359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2529)
static void C_ccall f_2529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1757)
static void C_ccall f_1757(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2523)
static void C_ccall f_2523(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3398)
static void C_ccall f_3398(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2503)
static void C_ccall f_2503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2509)
static void C_ccall f_2509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2506)
static void C_ccall f_2506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2676)
static void C_ccall f_2676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2500)
static void C_ccall f_2500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2412)
static void C_ccall f_2412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2416)
static void C_ccall f_2416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3031)
static void C_ccall f_3031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3037)
static void C_fcall f_3037(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2445)
static void C_ccall f_2445(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2445)
static void C_ccall f_2445r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3083)
static void C_ccall f_3083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3080)
static void C_ccall f_3080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2335)
static void C_ccall f_2335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3059)
static void C_ccall f_3059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1985)
static void C_fcall f_1985(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1271)
static void C_ccall f_1271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1274)
static void C_ccall f_1274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1277)
static void C_ccall f_1277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1983)
static void C_ccall f_1983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3024)
static void C_fcall f_3024(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3028)
static void C_ccall f_3028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1977)
static void C_ccall f_1977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1973)
static void C_ccall f_1973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1811)
static void C_ccall f_1811(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2408)
static void C_ccall f_2408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1817)
static void C_ccall f_1817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3192)
static void C_ccall f_3192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2401)
static void C_ccall f_2401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1960)
static void C_ccall f_1960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2696)
static void C_ccall f_2696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2693)
static void C_ccall f_2693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2690)
static void C_ccall f_2690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1957)
static void C_ccall f_1957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1806)
static void C_ccall f_1806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1802)
static void C_ccall f_1802(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1951)
static void C_ccall f_1951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1954)
static void C_ccall f_1954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2699)
static void C_ccall f_2699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2686)
static void C_fcall f_2686(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2684)
static void C_ccall f_2684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1597)
static void C_ccall f_1597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2680)
static void C_ccall f_2680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1594)
static void C_ccall f_1594(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1908)
static void C_fcall f_1908(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3293)
static void C_fcall f_3293(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1262)
static void C_ccall f_1262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1655)
static void C_ccall f_1655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1265)
static void C_ccall f_1265(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1652)
static void C_ccall f_1652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3142)
static void C_ccall f_3142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1268)
static void C_ccall f_1268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3148)
static void C_ccall f_3148(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1658)
static void C_ccall f_1658(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1902)
static void C_ccall f_1902(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2106)
static void C_fcall f_2106(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2104)
static void C_ccall f_2104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1640)
static void C_ccall f_1640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1646)
static void C_ccall f_1646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1923)
static void C_ccall f_1923(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1280)
static void C_ccall f_1280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1283)
static void C_ccall f_1283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1672)
static void C_ccall f_1672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1675)
static void C_ccall f_1675(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1286)
static void C_ccall f_1286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1289)
static void C_ccall f_1289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1661)
static void C_ccall f_1661(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2014)
static void C_ccall f_2014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1668)
static void C_ccall f_1668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1606)
static void C_ccall f_1606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1603)
static void C_ccall f_1603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1600)
static void C_ccall f_1600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1458)
static void C_ccall f_1458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1875)
static void C_ccall f_1875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1879)
static void C_ccall f_1879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1861)
static void C_ccall f_1861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1863)
static void C_ccall f_1863(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1869)
static void C_ccall f_1869(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1461)
static void C_ccall f_1461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1463)
static void C_fcall f_1463(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1890)
static void C_ccall f_1890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1896)
static void C_ccall f_1896(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1896)
static void C_ccall f_1896r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1561)
static void C_ccall f_1561(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3244)
static void C_ccall f_3244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2179)
static void C_ccall f_2179(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2179)
static void C_ccall f_2179r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3407)
static void C_ccall f_3407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1884)
static void C_ccall f_1884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3010)
static void C_ccall f_3010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3410)
static void C_ccall f_3410(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3410)
static void C_ccall f_3410r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1833)
static void C_ccall f_1833(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2098)
static void C_ccall f_2098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1838)
static void C_ccall f_1838(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2094)
static void C_ccall f_2094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2397)
static void C_fcall f_2397(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1823)
static void C_ccall f_1823(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3345)
static void C_ccall f_3345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1827)
static void C_ccall f_1827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1697)
static void C_fcall f_1697(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1570)
static void C_ccall f_1570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1575)
static void C_ccall f_1575(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1527)
static void C_ccall f_1527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1681)
static void C_ccall f_1681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3434)
static void C_ccall f_3434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3439)
static void C_ccall f_3439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2727)
static void C_ccall f_2727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2072)
static void C_ccall f_2072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2075)
static void C_ccall f_2075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1686)
static void C_ccall f_1686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1858)
static void C_ccall f_1858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1524)
static void C_ccall f_1524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3206)
static void C_ccall f_3206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3202)
static void C_ccall f_3202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2069)
static void C_ccall f_2069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2066)
static void C_ccall f_2066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1846)
static void C_ccall f_1846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3506)
static void C_ccall f_3506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1552)
static void C_ccall f_1552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1555)
static void C_ccall f_1555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3501)
static void C_ccall f_3501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3339)
static void C_ccall f_3339(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1585)
static void C_fcall trf_1585(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1585(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1585(t0,t1);}

C_noret_decl(trf_1318)
static void C_fcall trf_1318(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1318(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1318(t0,t1,t2);}

C_noret_decl(trf_2774)
static void C_fcall trf_2774(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2774(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_2774(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_1334)
static void C_fcall trf_1334(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1334(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_1334(t0);}

C_noret_decl(trf_1349)
static void C_fcall trf_1349(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1349(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1349(t0,t1,t2,t3);}

C_noret_decl(trf_2751)
static void C_fcall trf_2751(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2751(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2751(t0,t1,t2);}

C_noret_decl(trf_2987)
static void C_fcall trf_2987(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2987(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2987(t0,t1);}

C_noret_decl(trf_2965)
static void C_fcall trf_2965(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2965(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2965(t0,t1,t2);}

C_noret_decl(trf_2942)
static void C_fcall trf_2942(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2942(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2942(t0,t1);}

C_noret_decl(trf_2846)
static void C_fcall trf_2846(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2846(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2846(t0,t1);}

C_noret_decl(trf_1401)
static void C_fcall trf_1401(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1401(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1401(t0,t1,t2);}

C_noret_decl(trf_3222)
static void C_fcall trf_3222(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3222(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3222(t0,t1,t2);}

C_noret_decl(trf_3037)
static void C_fcall trf_3037(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3037(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3037(t0,t1);}

C_noret_decl(trf_1985)
static void C_fcall trf_1985(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1985(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1985(t0,t1,t2);}

C_noret_decl(trf_3024)
static void C_fcall trf_3024(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3024(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3024(t0,t1,t2);}

C_noret_decl(trf_2686)
static void C_fcall trf_2686(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2686(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2686(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1908)
static void C_fcall trf_1908(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1908(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1908(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3293)
static void C_fcall trf_3293(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3293(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3293(t0,t1);}

C_noret_decl(trf_2106)
static void C_fcall trf_2106(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2106(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2106(t0,t1,t2);}

C_noret_decl(trf_1463)
static void C_fcall trf_1463(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1463(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1463(t0,t1,t2);}

C_noret_decl(trf_2397)
static void C_fcall trf_2397(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2397(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2397(t0,t1);}

C_noret_decl(trf_1697)
static void C_fcall trf_1697(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1697(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1697(t0,t1,t2);}

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

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

/* k1583 in k1737 in a1574 in k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in ... */
static void C_fcall f_1585(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1585,NULL,2,t0,t1);}
if(C_truep(t1)){
C_trace("setup-download.scm:110: values");
C_values(4,0,((C_word*)t0)[2],C_SCHEME_FALSE,lf[28]);}
else{
if(C_truep(((C_word*)t0)[3])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1594,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:112: create-directory");
t3=C_fast_retrieve(lf[42]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1675,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[6])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1681,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1720,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1728,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:125: directory");
t6=C_fast_retrieve(lf[49]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[5]);}
else{
C_trace("setup-download.scm:131: values");
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[4]);}}}}

/* a2729 in k2691 in k2688 in setup-download#make-HTTP-GET/1.1 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 in ... */
static void C_ccall f_2730(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2730,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[165]);}

/* a2732 in k2688 in setup-download#make-HTTP-GET/1.1 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2733(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2733,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[167]);}

/* a2735 in setup-download#make-HTTP-GET/1.1 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2736,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(80));}

/* k3298 in setup-download#check-egg-name in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
C_trace("setup-download.scm:433: error");
t2=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[196],((C_word*)t0)[3]);}}

/* setup-download#retrieve-extension in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3305(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+20)){
C_save_and_reclaim((void*)tr5r,(void*)f_3305r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_3305r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_3305r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a=C_alloc(20);
t6=C_i_get_keyword(lf[202],t5,C_SCHEME_FALSE);
t7=t6;
t8=C_i_get_keyword(lf[203],t5,C_SCHEME_FALSE);
t9=t8;
t10=C_i_get_keyword(lf[204],t5,C_SCHEME_FALSE);
t11=t10;
t12=C_i_get_keyword(lf[205],t5,C_SCHEME_FALSE);
t13=t12;
t14=C_i_get_keyword(lf[206],t5,C_SCHEME_FALSE);
t15=t14;
t16=C_i_get_keyword(lf[207],t5,C_SCHEME_FALSE);
t17=t16;
t18=C_i_get_keyword(lf[143],t5,C_SCHEME_FALSE);
t19=t18;
t20=C_i_get_keyword(lf[182],t5,C_SCHEME_FALSE);
t21=t20;
t22=C_i_get_keyword(lf[144],t5,C_SCHEME_FALSE);
t23=t22;
t24=C_i_get_keyword(lf[208],t5,C_SCHEME_FALSE);
t25=t24;
t26=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_3339,a[2]=t5,a[3]=t9,a[4]=t25,a[5]=t3,a[6]=t2,a[7]=t4,a[8]=t7,a[9]=t11,a[10]=t13,a[11]=t15,a[12]=t17,a[13]=t19,a[14]=t21,a[15]=t23,a[16]=t1,tmp=(C_word)a,a+=17,tmp);
t27=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3407,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:435: ##sys#get-keyword");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[163]+1)))(5,*((C_word*)lf[163]+1),t26,lf[215],t5,t27);}

/* k3100 in k3097 in k3094 in k3091 in k3075 in k3035 in k3029 in k3026 in get-files in k2938 in a3147 in a2546 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in ... */
static void C_ccall f_3102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3102,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
C_trace("setup-download.scm:383: get-files");
t3=((C_word*)((C_word*)t0)[4])[1];
f_3024(t3,((C_word*)t0)[5],t2);}

/* k3075 in k3035 in k3029 in k3026 in get-files in k2938 in a3147 in a2546 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in ... */
static void C_ccall f_3077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3077,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3080,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-download.scm:375: d");
f_1318(t2,lf[126],C_a_i_list(&a,1,((C_word*)t0)[6]));}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3093,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
C_trace("setup-download.scm:379: d");
f_1318(t2,lf[131],C_a_i_list(&a,1,((C_word*)t0)[6]));}}

/* k2908 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2910,2,t0,t1);}
C_trace("setup-download.scm:299: d");
f_1318(((C_word*)t0)[2],lf[190],C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* k2917 in k2911 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2919,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2922,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:301: ##sys#print");
t3=*((C_word*)lf[34]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[6],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k2911 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2913,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[32]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2919,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-download.scm:301: ##sys#print");
t6=*((C_word*)lf[34]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[192],C_SCHEME_FALSE,t3);}

/* a3533 in k3494 in setup-download#list-extension-versions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 in ... */
static void C_ccall f_3534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3534,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[0],"setup-download#\052quiet\052"));
t3=C_mutate2(&lf[0] /* (set! setup-download#*quiet* ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k2904 in k2799 in a2796 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in ... */
static void C_ccall f_2906(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:305: display");
t2=*((C_word*)lf[127]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)((C_word*)t0)[3])[1]);}

/* k3539 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:54: conc");
t2=C_fast_retrieve(lf[66]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[252],t1);}

/* k3091 in k3075 in k3035 in k3029 in k3026 in get-files in k2938 in a3147 in a2546 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in ... */
static void C_ccall f_3093(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3093,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3096,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace("setup-download.scm:380: read");
t3=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[8]);}

/* k3094 in k3091 in k3075 in k3035 in k3029 in k3026 in get-files in k2938 in a3147 in a2546 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in ... */
static void C_ccall f_3096(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3096,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3099,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("read-string/port");
t3=C_fast_retrieve(lf[130]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,((C_word*)t0)[7]);}

/* k3088 in k3078 in k3075 in k3035 in k3029 in k3026 in get-files in k2938 in a3147 in a2546 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in ... */
static void C_ccall f_3090(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:376: create-directory");
t2=C_fast_retrieve(lf[42]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* a1537 in k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in ... */
static void C_ccall f_1538(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1538,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1549,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:103: make-pathname");
t3=C_fast_retrieve(lf[20]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1552,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:104: make-pathname");
t3=C_fast_retrieve(lf[20]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[27]);}}

/* k3097 in k3094 in k3091 in k3075 in k3035 in k3029 in k3026 in get-files in k2938 in a3147 in a2546 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in ... */
static void C_ccall f_3099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3099,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3102,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3113,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:382: make-pathname");
t5=C_fast_retrieve(lf[20]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[6],((C_word*)t0)[2]);}

/* k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in ... */
static void C_ccall f_1533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1533,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1538,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li3),tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1575,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[4],a[5]=((C_word)li6),tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:94: ##sys#call-with-values");
C_call_with_values(4,0,((C_word*)t0)[8],t3,t4);}

/* k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 in ... */
static void C_ccall f_1530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1530,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1533,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[8])){
C_trace("setup-download.scm:100: make-pathname");
t4=C_fast_retrieve(lf[20]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[8],((C_word*)t0)[4]);}
else{
t4=t3;
f_1533(2,t4,C_SCHEME_FALSE);}}

/* k3060 in k3057 in k3035 in k3029 in k3026 in get-files in k2938 in a3147 in a2546 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in ... */
static void C_ccall f_3062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[3])[1]);}

/* k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_1313(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1313,2,t0,t1);}
t2=C_mutate2(&lf[1] /* (set! setup-download#*chicken-install-user-agent* ...) */,t1);
t3=lf[2] /* setup-download#*trunk* */ =C_SCHEME_FALSE;;
t4=C_mutate2(&lf[3] /* (set! setup-download#*mode* ...) */,lf[4]);
t5=C_mutate2(&lf[5] /* (set! setup-download#*windows-shell* ...) */,C_mk_bool(C_WINDOWS_SHELL));
t6=C_mutate2(&lf[6] /* (set! setup-download#d ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1318,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1332,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:64: make-parameter");
t8=C_fast_retrieve(lf[251]);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,C_SCHEME_FALSE);}

/* k1490 in map-loop223 in k1456 in k1444 in k1438 in a3505 in k3494 in setup-download#list-extension-versions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in ... */
static void C_ccall f_1492(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1492,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1463(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1463(t6,((C_word*)t0)[5],t5);}}

/* k2808 in k2805 in k2802 in k2799 in a2796 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in ... */
static void C_ccall f_2810(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2810,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2813,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
C_trace("setup-download.scm:312: read-line");
t5=C_fast_retrieve(lf[115]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)((C_word*)t0)[2])[1]);}

/* k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_1302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1302,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1305,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:50: tcp-read-timeout");
t3=C_fast_retrieve(lf[255]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_fix(30000));}

/* k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_1305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1305,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1308,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:51: tcp-write-timeout");
t3=C_fast_retrieve(lf[254]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_fix(30000));}

/* k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in a2796 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in ... */
static void C_ccall f_2819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2819,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2822,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2872,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=t2,a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
C_trace("setup-download.scm:316: response-match-code?");
f_2751(t3,((C_word*)t0)[13],C_fix(407));}

/* k2811 in k2808 in k2805 in k2802 in k2799 in a2796 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in ... */
static void C_ccall f_2813(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2813,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2816,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_i_stringp(t2))){
C_trace("setup-download.scm:290: irregex-match");
t4=C_fast_retrieve(lf[98]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[186],t2);}
else{
t4=t3;
f_2816(2,t4,C_SCHEME_FALSE);}}

/* k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in a2796 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in ... */
static void C_ccall f_2816(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2816,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2819,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=t2,tmp=(C_word)a,a+=14,tmp);
C_trace("setup-download.scm:314: d");
f_1318(t3,lf[185],C_a_i_list(&a,1,((C_word*)t0)[12]));}

/* setup-download#d in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_fcall f_1318(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1318,NULL,3,t1,t2,t3);}
t4=(C_truep(C_retrieve2(lf[0],"setup-download#\052quiet\052"))?*((C_word*)lf[7]+1):*((C_word*)lf[8]+1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1325,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
C_apply(6,0,t6,*((C_word*)lf[10]+1),t5,t2,t3);}

/* k2760 in setup-download#response-match-code? in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2762,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2766,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:293: irregex-match-substring");
t4=C_fast_retrieve(lf[83]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],C_fix(1));}

/* k2764 in k2760 in setup-download#response-match-code? in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_string_equal_p(((C_word*)t0)[3],t1));}

/* k2799 in a2796 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 in ... */
static void C_ccall f_2801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[39],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2801,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2804,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2906,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:306: make-HTTP-GET/1.1");
f_2686(t3,((C_word*)t0)[7],C_retrieve2(lf[1],"setup-download#\052chicken-install-user-agent\052"),((C_word*)t0)[8],C_a_i_list(&a,8,lf[169],((C_word*)t0)[9],lf[166],lf[188],lf[143],((C_word*)t0)[5],lf[182],((C_word*)t0)[6]));}

/* k1547 in a1537 in k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in ... */
static void C_ccall f_1549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:103: values");
C_values(4,0,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k2805 in k2802 in k2799 in a2796 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in ... */
static void C_ccall f_2807(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2807,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2810,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
C_trace("setup-download.scm:310: d");
f_1318(t2,lf[187],C_SCHEME_END_OF_LIST);}

/* k2802 in k2799 in a2796 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in ... */
static void C_ccall f_2804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2804,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2807,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
C_trace("setup-download.scm:309: flush-output");
t3=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)((C_word*)t0)[4])[1]);}

/* k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_1308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1308,2,t0,t1);}
t2=lf[0] /* setup-download#*quiet* */ =C_SCHEME_FALSE;;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1313,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3541,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:54: chicken-version");
t5=C_fast_retrieve(lf[253]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* a3165 in a3438 in setup-download#list-extensions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 in ... */
static void C_ccall f_3166(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[12],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3166,5,t0,t1,t2,t3,t4);}
t5=t2;
t6=t3;
t7=t4;
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3172,a[2]=t5,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t7,a[8]=((C_word)li65),tmp=(C_word)a,a+=9,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3182,a[2]=((C_word)li66),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:390: ##sys#call-with-values");
C_call_with_values(4,0,t1,t8,t9);}

/* a3159 in a3438 in setup-download#list-extensions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 in ... */
static void C_ccall f_3160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3160,2,t0,t1);}
C_trace("setup-download.scm:391: deconstruct-url");
f_2397(t1,((C_word*)t0)[2]);}

/* k2717 in k2713 in k2697 in k2694 in k2691 in k2688 in setup-download#make-HTTP-GET/1.1 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in ... */
static void C_ccall f_2719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:272: conc");
t2=C_fast_retrieve(lf[66]);
((C_proc25)(void*)(*((C_word*)t2+1)))(25,t2,((C_word*)t0)[2],lf[145],((C_word*)t0)[3],lf[146],lf[147],lf[148],((C_word*)t0)[4],lf[149],lf[150],((C_word*)t0)[5],lf[151],lf[152],((C_word*)t0)[6],lf[153],lf[154],((C_word*)t0)[7],C_make_character(58),((C_word*)t0)[8],lf[155],t1,lf[156],((C_word*)t0)[9],lf[157],lf[158]);}

/* k2713 in k2697 in k2694 in k2691 in k2688 in setup-download#make-HTTP-GET/1.1 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in ... */
static void C_ccall f_2715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2715,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2719,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[9])){
C_trace("setup-download.scm:283: string-append");
t4=*((C_word*)lf[69]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[159],((C_word*)t0)[9],lf[160]);}
else{
t4=t3;
f_2719(2,t4,lf[161]);}}

/* a3171 in a3165 in a3438 in setup-download#list-extensions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in ... */
static void C_ccall f_3172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3172,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3180,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace("setup-download.scm:395: string-append");
t3=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[7],lf[231]);}

/* k2208 in k2205 in setup-download#locate-egg/svn in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2210(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2210,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2213,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2335,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:183: make-pathname");
t5=C_fast_retrieve(lf[20]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[5],((C_word*)t0)[2]);}

/* k3184 in a3181 in a3165 in a3438 in setup-download#list-extensions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in ... */
static void C_ccall f_3186(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3186,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3189,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:398: close-input-port");
t4=*((C_word*)lf[125]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* k3178 in a3171 in a3165 in a3438 in setup-download#list-extensions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in ... */
static void C_ccall f_3180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:393: http-connect");
f_2774(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_fcall f_2774(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[23],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2774,NULL,7,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2778,a[2]=t5,a[3]=t2,a[4]=t6,a[5]=t3,a[6]=t4,a[7]=t7,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2910,a[2]=t8,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2913,a[2]=t9,a[3]=t6,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:301: open-output-string");
t11=C_fast_retrieve(lf[37]);
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}
else{
C_trace("setup-download.scm:299: d");
f_1318(t8,lf[190],C_a_i_list(&a,3,t2,t3,lf[193]));}}

/* k2217 in k2214 in k2211 in k2208 in k2205 in setup-download#locate-egg/svn in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in ... */
static void C_ccall f_2219(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2219,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2222,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2319,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2321,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:188: filter-map");
t6=C_fast_retrieve(lf[61]);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,t2);}

/* a3181 in a3165 in a3438 in setup-download#list-extensions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in ... */
static void C_ccall f_3182(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3182,4,t0,t1,t2,t3);}
t4=t2;
t5=t3;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3186,a[2]=t1,a[3]=t5,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:397: read-all");
t7=C_fast_retrieve(lf[232]);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t4);}

/* k2214 in k2211 in k2208 in k2205 in setup-download#locate-egg/svn in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in ... */
static void C_ccall f_2216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2216,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2219,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
C_trace("setup-download.scm:185: with-input-from-pipe");
t3=C_fast_retrieve(lf[86]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[9],C_fast_retrieve(lf[87]));}

/* k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2778,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2783,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word)li48),tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2797,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[7],a[8]=((C_word)li53),tmp=(C_word)a,a+=9,tmp);
C_trace("setup-download.scm:303: ##sys#call-with-values");
C_call_with_values(4,0,((C_word*)t0)[8],t2,t3);}

/* k2211 in k2208 in k2205 in setup-download#locate-egg/svn in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 in ... */
static void C_ccall f_2213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2213,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2216,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
C_trace("setup-download.scm:184: d");
f_1318(t3,lf[88],C_a_i_list(&a,1,t2));}

/* k3187 in k3184 in a3181 in a3165 in a3438 in setup-download#list-extensions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in ... */
static void C_ccall f_3189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3189,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3192,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:399: close-output-port");
t3=*((C_word*)lf[124]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k1342 in k1336 in setup-download#get-temporary-directory in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_1344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1344,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1347,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:69: temporary-directory");
((C_proc3)C_fast_retrieve_symbol_proc(lf[11]))(3,*((C_word*)lf[11]+1),t3,t2);}

/* k2205 in setup-download#locate-egg/svn in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2207,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2210,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
C_trace("setup-download.scm:182: string-append");
t4=*((C_word*)lf[69]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[89],((C_word*)t0)[7],lf[90]);}
else{
t4=t3;
f_2210(2,t4,lf[91]);}}

/* a3114 in k3111 in k3097 in k3094 in k3091 in k3075 in k3035 in k3029 in k3026 in get-files in k2938 in a3147 in a2546 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in ... */
static void C_ccall f_3115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3115,2,t0,t1);}
C_trace("setup-download.scm:382: g770");
t2=*((C_word*)lf[127]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* k3111 in k3097 in k3094 in k3091 in k3075 in k3035 in k3029 in k3026 in get-files in k2938 in a3147 in a2546 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in ... */
static void C_ccall f_3113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3113,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3115,a[2]=((C_word*)t0)[2],a[3]=((C_word)li32),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:382: with-output-to-file");
t3=C_fast_retrieve(lf[128]);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],t1,t2,lf[129]);}

/* setup-download#get-temporary-directory in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_fcall f_1334(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1334,NULL,1,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1338,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:67: temporary-directory");
((C_proc2)C_fast_retrieve_symbol_proc(lf[11]))(2,*((C_word*)lf[11]+1),t2);}

/* k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_1332(C_word c,C_word t0,C_word t1){
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
C_word ab[36],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1332,2,t0,t1);}
t2=C_mutate2((C_word*)lf[11]+1 /* (set! setup-download#temporary-directory ...) */,t1);
t3=C_mutate2(&lf[12] /* (set! setup-download#get-temporary-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1334,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2(&lf[14] /* (set! setup-download#existing-version ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1349,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[19]+1 /* (set! setup-download#locate-egg/local ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1502,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[51]+1 /* (set! setup-download#gather-egg-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1802,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2(&lf[62] /* (set! setup-download#make-svn-ls-cmd ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1908,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[68]+1 /* (set! setup-download#locate-egg/svn ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2179,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2(&lf[95] /* (set! setup-download#deconstruct-url ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2397,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[100]+1 /* (set! setup-download#locate-egg/http ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2445,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2(&lf[142] /* (set! setup-download#make-HTTP-GET/1.1 ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2686,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2(&lf[170] /* (set! setup-download#response-match-code? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2751,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2(&lf[104] /* (set! setup-download#http-connect ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2774,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3271,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:425: char-set");
t15=C_fast_retrieve(lf[250]);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t14,C_make_character(92),C_make_character(47));}

/* k1345 in k1342 in k1336 in setup-download#get-temporary-directory in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 in ... */
static void C_ccall f_1347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* setup-download#existing-version in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_fcall f_1349(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1349,NULL,4,t1,t2,t3,t4);}
if(C_truep(t3)){
if(C_truep(C_i_member(t3,t4))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
C_trace("setup-download.scm:76: error");
t5=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,lf[16],t2,t3);}}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1365,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:77: sort");
t6=C_fast_retrieve(lf[17]);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t4,C_fast_retrieve(lf[18]));}}

/* k2549 in a2546 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in ... */
static void C_ccall f_2551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
C_trace("setup-download.scm:254: values");
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],t2);}
else{
if(C_truep(((C_word*)t0)[4])){
C_trace("setup-download.scm:254: values");
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
C_trace("setup-download.scm:254: values");
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],lf[103]);}}}

/* setup-download#response-match-code? in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_fcall f_2751(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2751,NULL,3,t1,t2,t3);}
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2762,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:293: number->string");
t5=*((C_word*)lf[171]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k1498 in a3505 in k3494 in setup-download#list-extension-versions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in ... */
static void C_ccall f_1500(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:88: make-pathname");
t2=C_fast_retrieve(lf[20]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_1502(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr4r,(void*)f_1502r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1502r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1502r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(7);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_SCHEME_FALSE:C_i_car(t9));
t12=t11;
t13=C_i_nullp(t9);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t15=C_i_nullp(t14);
t16=(C_truep(t15)?C_SCHEME_FALSE:C_i_car(t14));
t17=t16;
t18=C_i_nullp(t14);
t19=(C_truep(t18)?C_SCHEME_END_OF_LIST:C_i_cdr(t14));
t20=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1524,a[2]=t2,a[3]=t7,a[4]=t17,a[5]=t1,a[6]=t12,tmp=(C_word)a,a+=7,tmp);
C_trace("setup-download.scm:95: make-pathname");
t21=C_fast_retrieve(lf[20]);
((C_proc4)(void*)(*((C_word*)t21+1)))(4,t21,t20,t3,t2);}

/* k1323 in setup-download#d in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_1325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:62: flush-output");
t2=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k1336 in setup-download#get-temporary-directory in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_1338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1338,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1344,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:68: create-temporary-directory");
t3=C_fast_retrieve(lf[13]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* a2782 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2783,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(C_truep(t2)?t2:((C_word*)t0)[3]);
t4=((C_word*)t0)[4];
if(C_truep(t4)){
C_trace("setup-download.scm:303: tcp-connect");
t5=C_fast_retrieve(lf[172]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}
else{
t5=((C_word*)t0)[5];
C_trace("setup-download.scm:303: tcp-connect");
t6=C_fast_retrieve(lf[172]);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t3,t5);}}

/* a2254 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in setup-download#locate-egg/svn in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in ... */
static void C_ccall f_2255(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2255,4,t0,t1,t2,t3);}
t4=t2;
t5=t3;
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2259,a[2]=t1,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t4,tmp=(C_word)a,a+=9,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2312,a[2]=t6,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[6])){
C_trace("setup-download.scm:201: make-pathname");
t8=C_fast_retrieve(lf[20]);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,((C_word*)t0)[6],((C_word*)t0)[4]);}
else{
C_trace("setup-download.scm:201: get-temporary-directory");
f_1334(t7);}}

/* k2257 in a2254 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in setup-download#locate-egg/svn in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in ... */
static void C_ccall f_2259(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2259,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2262,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2285,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2302,a[2]=t4,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t6=C_eqp(C_retrieve2(lf[3],"setup-download#\052mode\052"),lf[81]);
if(C_truep(t6)){
t7=((C_word*)t0)[6];
C_trace("setup-download.scm:220: conc");
t8=C_fast_retrieve(lf[66]);
((C_proc6)(void*)(*((C_word*)t8+1)))(6,t8,t5,((C_word*)t0)[8],C_make_character(47),t7,lf[82]);}
else{
C_trace("setup-download.scm:204: conc");
t7=C_fast_retrieve(lf[66]);
((C_proc7)(void*)(*((C_word*)t7+1)))(7,t7,t4,((C_word*)t0)[7],C_make_character(47),((C_word*)t0)[6],C_make_character(47),((C_word*)t0)[8]);}}

/* k1363 in setup-download#existing-version in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_1365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_pairp(t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?C_u_i_car(t1):C_SCHEME_FALSE));}

/* k1733 in k1737 in a1574 in k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in ... */
static void C_ccall f_1735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_1585(t2,C_i_not(t1));}

/* k2239 in a2226 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in setup-download#locate-egg/svn in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in ... */
static void C_ccall f_2241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_i_member(lf[71],((C_word*)t0)[2]))){
C_trace("setup-download.scm:199: values");
C_values(4,0,((C_word*)t0)[3],lf[72],lf[73]);}
else{
C_trace("setup-download.scm:200: values");
C_values(4,0,((C_word*)t0)[3],lf[74],lf[75]);}}

/* k2988 in k2985 in k2967 in g732 in k2959 in k2953 in k2944 in skip in k2938 in a3147 in a2546 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in ... */
static void C_ccall f_2990(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
C_trace("setup-download.scm:357: open-input-string");
t3=C_fast_retrieve(lf[105]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* a1719 in k1583 in k1737 in a1574 in k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in ... */
static void C_ccall f_1720(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1720,3,t0,t1,t2);}
t3=C_fast_retrieve(lf[46]);
C_trace("setup-download.scm:125: g342");
t4=C_fast_retrieve(lf[46]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,lf[47],t2);}

/* k1737 in a1574 in k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in ... */
static void C_ccall f_1739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1739,2,t0,t1);}
t2=C_i_not(t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1585,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_1585(t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1735,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:109: directory?");
t5=C_fast_retrieve(lf[23]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[7]);}}

/* a2796 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2797(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[18],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2797,4,t0,t1,t2,t3);}
t4=t2;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=t3;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2801,a[2]=t5,a[3]=t1,a[4]=t7,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
C_trace("setup-download.scm:304: d");
f_1318(t8,lf[189],C_a_i_list(&a,1,((C_word*)t0)[4]));}

/* k2236 in a2226 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in setup-download#locate-egg/svn in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in ... */
static void C_ccall f_2238(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:195: values");
C_values(4,0,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k2510 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in ... */
static void C_ccall f_2512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:248: g607");
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in ... */
static void C_ccall f_2517(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2517,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2523,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word)li28),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2541,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=t2,a[11]=((C_word)li38),tmp=(C_word)a,a+=12,tmp);
C_trace("setup-download.scm:248: with-exception-handler");
t5=C_fast_retrieve(lf[56]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* k2985 in k2967 in g732 in k2959 in k2953 in k2944 in skip in k2938 in a3147 in a2546 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in ... */
static void C_fcall f_2987(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2987,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2990,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:353: warning");
t3=C_fast_retrieve(lf[25]);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[109],((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}
else{
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[5]);
C_trace("setup-download.scm:357: open-input-string");
t3=C_fast_retrieve(lf[105]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],((C_word*)t0)[4]);}}

/* k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in setup-download#locate-egg/svn in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in ... */
static void C_ccall f_2222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2222,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2227,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li21),tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2255,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word)li22),tmp=(C_word)a,a+=8,tmp);
C_trace("setup-download.scm:185: ##sys#call-with-values");
C_call_with_values(4,0,((C_word*)t0)[9],t3,t4);}

/* k1726 in k1583 in k1737 in a1574 in k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in ... */
static void C_ccall f_1728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:125: filter");
t2=C_fast_retrieve(lf[48]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* a2226 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in setup-download#locate-egg/svn in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in ... */
static void C_ccall f_2227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2227,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2238,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:195: string-append");
t3=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[70],((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2241,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[4];
if(C_truep(((C_word*)t0)[5])){
C_trace("setup-download.scm:82: warning");
t4=C_fast_retrieve(lf[25]);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[26],t3,((C_word*)t0)[5]);}
else{
if(C_truep(C_i_member(lf[71],((C_word*)t0)[3]))){
C_trace("setup-download.scm:199: values");
C_values(4,0,t1,lf[72],lf[73]);}
else{
C_trace("setup-download.scm:200: values");
C_values(4,0,t1,lf[74],lf[75]);}}}}

/* k2581 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2583,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2587,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
C_trace("setup-download.scm:242: ->string");
t4=C_fast_retrieve(lf[139]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_retrieve2(lf[3],"setup-download#\052mode\052"));}

/* k2585 in k2581 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 in ... */
static void C_ccall f_2587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[2])){
C_trace("setup-download.scm:238: string-append");
t2=*((C_word*)lf[69]+1);
((C_proc9)(void*)(*((C_word*)t2+1)))(9,t2,((C_word*)t0)[3],((C_word*)t0)[4],lf[135],((C_word*)t0)[5],((C_word*)t0)[6],lf[136],t1,lf[137]);}
else{
C_trace("setup-download.scm:238: string-append");
t2=*((C_word*)lf[69]+1);
((C_proc9)(void*)(*((C_word*)t2+1)))(9,t2,((C_word*)t0)[3],((C_word*)t0)[4],lf[135],((C_word*)t0)[5],((C_word*)t0)[6],lf[136],t1,lf[138]);}}

/* f3750 in k2866 in k2854 in k2848 in loop in k2820 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in a2796 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in ... */
static void C_ccall f3750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:332: loop");
t2=((C_word*)((C_word*)t0)[2])[1];
f_2846(t2,((C_word*)t0)[3]);}

/* k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2497(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2497,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2500,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)t0)[10])){
t4=t3;
f_2500(2,t4,((C_word*)t0)[10]);}
else{
C_trace("setup-download.scm:244: get-temporary-directory");
f_1334(t3);}}

/* a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2493(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2493,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2497,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2583,a[2]=((C_word*)t0)[8],a[3]=t5,a[4]=t4,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
C_trace("setup-download.scm:241: string-append");
t7=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,lf[140],((C_word*)t0)[2]);}
else{
t7=t6;
f_2583(2,t7,lf[141]);}}

/* k1428 in map-loop181 in k1394 in a3438 in setup-download#list-extensions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in ... */
static void C_ccall f_1430(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1430,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1401(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1401(t6,((C_word*)t0)[5],t5);}}

/* g732 in k2959 in k2953 in k2944 in skip in k2938 in a3147 in a2546 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in ... */
static void C_fcall f_2965(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2965,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2969,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:350: irregex-match-substring");
t4=C_fast_retrieve(lf[83]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,C_fix(1));}

/* k2967 in g732 in k2959 in k2953 in k2944 in skip in k2938 in a3147 in a2546 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in ... */
static void C_ccall f_2969(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2969,2,t0,t1);}
t2=t1;
t3=C_i_string_equal_p(lf[107],t2);
t4=(C_truep(t3)?t3:C_u_i_string_equal_p(lf[108],t2));
if(C_truep(t4)){
C_trace("setup-download.scm:357: open-input-string");
t5=C_fast_retrieve(lf[105]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2987,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t6=C_i_string_equal_p(t2,((C_word*)((C_word*)t0)[4])[1]);
t7=t5;
f_2987(t7,C_i_not(t6));}
else{
t6=t5;
f_2987(t6,C_SCHEME_FALSE);}}}

/* k2959 in k2953 in k2944 in skip in k2938 in a3147 in a2546 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in ... */
static void C_ccall f_2961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2961,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2965,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li30),tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:342: g732");
t3=t2;
f_2965(t3,((C_word*)t0)[4],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3010,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:358: string-every");
t3=C_fast_retrieve(lf[111]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_fast_retrieve(lf[112]),((C_word*)t0)[2]);}}

/* k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_1298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1298,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1302,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:49: tcp-connect-timeout");
t3=C_fast_retrieve(lf[256]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_fix(30000));}

/* k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_1295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1295,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1298,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:27: ##sys#require");
((C_proc3)C_fast_retrieve_symbol_proc(lf[257]))(3,*((C_word*)lf[257]+1),t2,lf[258]);}

/* a3477 in setup-download#list-extensions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3478,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[0],"setup-download#\052quiet\052"));
t3=C_mutate2(&lf[0] /* (set! setup-download#*quiet* ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_1292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1292,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1295,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2891 in a2882 in k2870 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in a2796 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in ... */
static void C_ccall f_2893(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:319: display");
t2=*((C_word*)lf[127]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)((C_word*)t0)[3])[1]);}

/* a2562 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in ... */
static void C_ccall f_2563(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_2563r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2563r(t0,t1,t2);}}

static void C_ccall f_2563r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2569,a[2]=t2,a[3]=((C_word)li36),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:248: k603");
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* k2953 in k2944 in skip in k2938 in a3147 in a2546 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in ... */
static void C_ccall f_2955(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2955,2,t0,t1);}
if(C_truep(t1)){
C_trace("setup-download.scm:347: open-input-string");
t2=C_fast_retrieve(lf[105]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[106]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2961,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:348: irregex-match");
t3=C_fast_retrieve(lf[98]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[113],((C_word*)t0)[3]);}}

/* a2568 in a2562 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in ... */
static void C_ccall f_2569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2569,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* setup-download#list-extension-versions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3483(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr5r,(void*)f_3483r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_3483r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_3483r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a=C_alloc(9);
t6=C_i_get_keyword(lf[203],t5,C_SCHEME_FALSE);
t7=t6;
t8=C_i_get_keyword(lf[205],t5,C_SCHEME_FALSE);
t9=t8;
t10=C_i_get_keyword(lf[206],t5,C_SCHEME_FALSE);
t11=t10;
t12=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3496,a[2]=t7,a[3]=t3,a[4]=t2,a[5]=t4,a[6]=t9,a[7]=t11,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
C_trace("setup-download.scm:467: check-egg-name");
f_3293(t12,t2);}

/* k2897 in k2870 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in a2796 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in ... */
static void C_ccall f_2899(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2899,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_2822(2,t3,t2);}
else{
t2=((C_word*)t0)[2];
t3=C_a_i_list(&a,1,((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2676,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2680,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:259: make-property-condition");
t6=C_fast_retrieve(lf[118]);
((C_proc7)(void*)(*((C_word*)t6+1)))(7,t6,t5,lf[120],lf[121],lf[184],lf[122],t3);}}

/* a2882 in k2870 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in a2796 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in ... */
static void C_ccall f_2883(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[34],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2883,4,t0,t1,t2,t3);}
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t3);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2893,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:320: make-HTTP-GET/1.1");
f_2686(t6,((C_word*)t0)[4],C_retrieve2(lf[1],"setup-download#\052chicken-install-user-agent\052"),((C_word*)t0)[5],C_a_i_list(&a,10,lf[169],((C_word*)t0)[6],lf[166],lf[181],lf[143],((C_word*)t0)[7],lf[182],((C_word*)t0)[8],lf[144],((C_word*)t0)[9]));}

/* skip in k2938 in a3147 in a2546 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in ... */
static void C_fcall f_2942(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2942,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2946,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:344: read-line");
t3=C_fast_retrieve(lf[115]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k2944 in skip in k2938 in a3147 in a2546 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in ... */
static void C_ccall f_2946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2946,2,t0,t1);}
t2=t1;
t3=C_eofp(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2955,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t5=t4;
f_2955(2,t5,t3);}
else{
C_trace("setup-download.scm:346: irregex-match");
t5=C_fast_retrieve(lf[98]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,lf[114],t2);}}

/* k2938 in a3147 in a2546 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in ... */
static void C_ccall f_2940(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2940,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2942,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=((C_word)li31),tmp=(C_word)a,a+=6,tmp));
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3024,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=t8,a[6]=((C_word*)t0)[4],a[7]=t5,a[8]=((C_word)li33),tmp=(C_word)a,a+=9,tmp));
t10=((C_word*)t8)[1];
f_3024(t10,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* f3746 in k2866 in k2854 in k2848 in loop in k2820 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in a2796 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in ... */
static void C_ccall f3746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:332: loop");
t2=((C_word*)((C_word*)t0)[2])[1];
f_2846(t2,((C_word*)t0)[3]);}

/* k2870 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in a2796 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in ... */
static void C_ccall f_2872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2872,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2877,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li51),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2883,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[9],a[10]=((C_word)li52),tmp=(C_word)a,a+=11,tmp);
C_trace("setup-download.scm:317: ##sys#call-with-values");
C_call_with_values(4,0,((C_word*)t0)[10],t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2899,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:325: response-match-code?");
f_2751(t2,((C_word*)t0)[12],C_fix(200));}}

/* k2426 in k2423 in k2406 in k2399 in setup-download#deconstruct-url in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in ... */
static void C_ccall f_2428(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2428,2,t0,t1);}
t2=C_a_i_string_to_number(&a,2,t1,C_fix(10));
if(C_truep(t2)){
t3=((C_word*)t0)[2];
f_2412(2,t3,t2);}
else{
C_trace("setup-download.scm:229: error");
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],lf[97],t1);}}

/* a2876 in k2870 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in a2796 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in ... */
static void C_ccall f_2877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2877,2,t0,t1);}
C_trace("setup-download.scm:317: tcp-connect");
t2=C_fast_retrieve(lf[172]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2423 in k2406 in k2399 in setup-download#deconstruct-url in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 in ... */
static void C_ccall f_2425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2425,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2428,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:227: irregex-match-substring");
t3=C_fast_retrieve(lf[83]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],C_fix(4));}
else{
t2=((C_word*)t0)[2];
f_2412(2,t2,C_fix(80));}}

/* k1444 in k1438 in a3505 in k3494 in setup-download#list-extension-versions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in ... */
static void C_ccall f_1446(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1446,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1458,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:91: directory");
t7=C_fast_retrieve(lf[49]);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[236]);}}

/* k1438 in a3505 in k3494 in setup-download#list-extension-versions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in ... */
static void C_ccall f_1440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1440,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1446,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:89: directory-exists?");
t4=C_fast_retrieve(lf[237]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k2929 in k2926 in k2923 in k2920 in k2917 in k2911 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in ... */
static void C_ccall f_2931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:301: get-output-string");
t2=C_fast_retrieve(lf[33]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2866 in k2854 in k2848 in loop in k2820 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in a2796 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in ... */
static void C_ccall f_2868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2868,2,t0,t1);}
if(C_truep(t1)){
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f3746,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:331: d");
f_1318(t3,lf[178],C_a_i_list(&a,1,((C_word*)t0)[5]));}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f3750,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:331: d");
f_1318(t2,lf[178],C_a_i_list(&a,1,((C_word*)t0)[5]));}}

/* k2920 in k2917 in k2911 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 in ... */
static void C_ccall f_2922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2922,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2925,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:301: ##sys#write-char-0");
((C_proc4)C_fast_retrieve_symbol_proc(lf[35]))(4,*((C_word*)lf[35]+1),t2,C_make_character(58),((C_word*)t0)[4]);}

/* k2926 in k2923 in k2920 in k2917 in k2911 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in ... */
static void C_ccall f_2928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2928,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2931,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:301: ##sys#print");
t3=*((C_word*)lf[34]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[191],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k2923 in k2920 in k2917 in k2911 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in ... */
static void C_ccall f_2925(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2925,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2928,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:301: ##sys#print");
t3=*((C_word*)lf[34]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* a2486 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2487(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2487,2,t0,t1);}
C_trace("setup-download.scm:237: deconstruct-url");
f_2397(t1,((C_word*)t0)[2]);}

/* k2854 in k2848 in loop in k2820 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in a2796 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in ... */
static void C_ccall f_2856(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2856,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2868,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:296: irregex-match");
t3=C_fast_retrieve(lf[98]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[179],((C_word*)t0)[5]);}}

/* k2848 in loop in k2820 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in a2796 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in ... */
static void C_ccall f_2850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2850,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2856,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:329: string-null?");
t4=C_fast_retrieve(lf[180]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k2842 in k2838 in k2835 in k2832 in k2823 in k2820 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in a2796 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in ... */
static void C_ccall f_2844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
C_trace("setup-download.scm:338: values");
C_values(4,0,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[4])[1]);}

/* loop in k2820 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in a2796 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in ... */
static void C_fcall f_2846(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2846,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2850,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:328: read-line");
t3=C_fast_retrieve(lf[115]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)((C_word*)t0)[4])[1]);}

/* k2838 in k2835 in k2832 in k2823 in k2820 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in a2796 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in ... */
static void C_ccall f_2840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2840,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2844,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:337: open-input-string");
t3=C_fast_retrieve(lf[105]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* map-loop181 in k1394 in a3438 in setup-download#list-extensions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in ... */
static void C_fcall f_1401(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1401,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1430,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-download.scm:85: g204");
t5=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,lf[218]);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2835 in k2832 in k2823 in k2820 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in a2796 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in ... */
static void C_ccall f_2837(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2837,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2840,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:336: close-input-port");
t4=*((C_word*)lf[125]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)((C_word*)t0)[2])[1]);}

/* k2832 in k2823 in k2820 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in a2796 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in ... */
static void C_ccall f_2834(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2834,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2837,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)((C_word*)t0)[2])[1];
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3222,a[2]=t5,a[3]=t3,a[4]=((C_word)li49),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_3222(t7,t2,C_SCHEME_END_OF_LIST);}

/* k3494 in setup-download#list-extension-versions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[22],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3496,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3501,a[2]=t5,a[3]=t3,a[4]=((C_word)li71),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3506,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word)li74),tmp=(C_word)a,a+=8,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3534,a[2]=t3,a[3]=t5,a[4]=((C_word)li75),tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:468: ##sys#dynamic-wind");
t9=*((C_word*)lf[214]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[8],t6,t7,t8);}

/* k2820 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in a2796 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in ... */
static void C_ccall f_2822(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2822,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2825,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2846,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word)li50),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2846(t6,t2);}

/* k2823 in k2820 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in a2796 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in ... */
static void C_ccall f_2825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2825,2,t0,t1);}
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2834,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:334: d");
f_1318(t2,lf[177],C_SCHEME_END_OF_LIST);}
else{
C_trace("setup-download.scm:338: values");
C_values(4,0,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[5])[1]);}}

/* k2141 in k2067 in k2064 in a3505 in k3494 in setup-download#list-extension-versions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in ... */
static void C_ccall f_2143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:172: make-svn-ls-cmd");
f_1908(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1,C_SCHEME_END_OF_LIST);}

/* k2145 in k2067 in k2064 in a3505 in k3494 in setup-download#list-extension-versions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in ... */
static void C_ccall f_2147(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:172: make-pathname");
t2=C_fast_retrieve(lf[20]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k2133 in map-loop479 in k2096 in k2073 in k2070 in k2067 in k2064 in a3505 in k3494 in setup-download#list-extension-versions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in ... */
static void C_ccall f_2135(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2135,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2106(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2106(t6,((C_word*)t0)[5],t5);}}

/* k1397 in k1394 in a3438 in setup-download#list-extensions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in ... */
static void C_ccall f_1399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:85: string-concatenate");
t2=C_fast_retrieve(lf[217]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1394 in a3438 in setup-download#list-extensions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 in ... */
static void C_ccall f_1396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1396,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1399,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1401,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word)li62),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_1401(t6,t2,t1);}

/* k2293 in k2283 in k2257 in a2254 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in setup-download#locate-egg/svn in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in ... */
static void C_ccall f_2295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[2];
C_trace("setup-download.scm:220: conc");
t3=C_fast_retrieve(lf[66]);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[3],((C_word*)t0)[4],C_make_character(47),t2,lf[82]);}

/* k2279 in k2263 in k2260 in k2257 in a2254 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in setup-download#locate-egg/svn in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in ... */
static void C_ccall f_2281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
C_trace("setup-download.scm:216: values");
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
C_trace("setup-download.scm:217: values");
C_values(4,0,((C_word*)t0)[2],C_SCHEME_FALSE,lf[76]);}}

/* k2283 in k2257 in a2254 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in setup-download#locate-egg/svn in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in ... */
static void C_ccall f_2285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2285,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2289,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_eqp(C_retrieve2(lf[3],"setup-download#\052mode\052"),lf[81]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2295,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:211: create-directory");
t6=C_fast_retrieve(lf[42]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[6]);}
else{
t5=t3;
f_2289(2,t5,((C_word*)t0)[6]);}}

/* k2287 in k2283 in k2257 in a2254 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in setup-download#locate-egg/svn in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in ... */
static void C_ccall f_2289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_truep(C_retrieve2(lf[0],"setup-download#\052quiet\052"))?lf[78]:lf[79]);
C_trace("setup-download.scm:157: conc");
t3=C_fast_retrieve(lf[66]);
((C_proc15)(void*)(*((C_word*)t3+1)))(15,t3,((C_word*)t0)[2],lf[80],((C_word*)t0)[3],C_make_character(32),((C_word*)t0)[4],C_make_character(32),C_make_character(34),((C_word*)t0)[5],C_make_character(34),C_make_character(32),C_make_character(34),t1,C_make_character(34),t2);}

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
if(!C_demand_2(1130)){
C_save(t1);
C_rereclaim2(1130*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,259);
lf[4]=C_h_intern(&lf[4],7,"default");
lf[7]=C_h_intern(&lf[7],18,"\003sysstandard-error");
lf[8]=C_h_intern(&lf[8],19,"\003sysstandard-output");
lf[9]=C_h_intern(&lf[9],12,"flush-output");
lf[10]=C_h_intern(&lf[10],7,"fprintf");
lf[11]=C_h_intern(&lf[11],34,"setup-download#temporary-directory");
lf[13]=C_h_intern(&lf[13],26,"create-temporary-directory");
lf[15]=C_h_intern(&lf[15],5,"error");
lf[16]=C_decode_literal(C_heaptop,"\376B\000\000\021version not found");
lf[17]=C_h_intern(&lf[17],4,"sort");
lf[18]=C_h_intern(&lf[18],20,"setup-api#version>=\077");
lf[19]=C_h_intern(&lf[19],31,"setup-download#locate-egg/local");
lf[20]=C_h_intern(&lf[20],13,"make-pathname");
lf[21]=C_decode_literal(C_heaptop,"\376B\000\000\005trunk");
lf[22]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[23]=C_h_intern(&lf[23],10,"directory\077");
lf[24]=C_h_intern(&lf[24],12,"file-exists\077");
lf[25]=C_h_intern(&lf[25],7,"warning");
lf[26]=C_decode_literal(C_heaptop,"\376B\000\000-extension has no such version - using default");
lf[27]=C_decode_literal(C_heaptop,"\376B\000\000\005trunk");
lf[28]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[29]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[30]=C_h_intern(&lf[30],6,"system");
lf[31]=C_decode_literal(C_heaptop,"\376B\000\000\006  ~a~%");
lf[32]=C_h_intern(&lf[32],7,"sprintf");
lf[33]=C_h_intern(&lf[33],17,"get-output-string");
lf[34]=C_h_intern(&lf[34],9,"\003sysprint");
lf[35]=C_h_intern(&lf[35],16,"\003syswrite-char-0");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000\006xcopy ");
lf[37]=C_h_intern(&lf[37],18,"open-output-string");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\003/\052 ");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\006cp -r ");
lf[40]=C_h_intern(&lf[40],2,"qs");
lf[41]=C_h_intern(&lf[41],18,"normalize-pathname");
lf[42]=C_h_intern(&lf[42],16,"create-directory");
lf[43]=C_h_intern(&lf[43],8,"for-each");
lf[44]=C_h_intern(&lf[44],12,"delete-file\052");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\0006 deleting stale file `~a\047 from local build directory~%");
lf[46]=C_h_intern(&lf[46],14,"string-suffix\077");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\003.so");
lf[48]=C_h_intern(&lf[48],6,"filter");
lf[49]=C_h_intern(&lf[49],9,"directory");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\004tags");
lf[51]=C_h_intern(&lf[51],37,"setup-download#gather-egg-information");
lf[52]=C_h_intern(&lf[52],7,"version");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000.extension has syntactically invalid .meta file");
lf[54]=C_h_intern(&lf[54],20,"with-input-from-file");
lf[55]=C_h_intern(&lf[55],4,"read");
lf[56]=C_h_intern(&lf[56],22,"with-exception-handler");
lf[57]=C_h_intern(&lf[57],30,"call-with-current-continuation");
lf[58]=C_h_intern(&lf[58],14,"string->symbol");
lf[59]=C_h_intern(&lf[59],7,"call/cc");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\000\004meta");
lf[61]=C_h_intern(&lf[61],10,"filter-map");
lf[63]=C_h_intern(&lf[63],11,"\000recursive\077");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\000\004 -R ");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[66]=C_h_intern(&lf[66],4,"conc");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\007svn ls ");
lf[68]=C_h_intern(&lf[68],29,"setup-download#locate-egg/svn");
lf[69]=C_h_intern(&lf[69],13,"string-append");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000\005tags/");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\006trunk/");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000\005trunk");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000\005trunk");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\006  ~a~%");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\005 1>&2");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\013svn export ");
lf[81]=C_h_intern(&lf[81],4,"meta");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\000\005.meta");
lf[83]=C_h_intern(&lf[83],23,"irregex-match-substring");
lf[84]=C_h_intern(&lf[84],14,"irregex-search");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\016^tags/([^/]+)/");
lf[86]=C_h_intern(&lf[86],20,"with-input-from-pipe");
lf[87]=C_h_intern(&lf[87],10,"read-lines");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\047checking available versions ...~%  ~a~%");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000\014--password=\047");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\001\047");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[92]=C_decode_literal(C_heaptop,"\376B\000\000\014--username=\047");
lf[93]=C_decode_literal(C_heaptop,"\376B\000\000\001\047");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\020not a valid port");
lf[98]=C_h_intern(&lf[98],13,"irregex-match");
lf[99]=C_decode_literal(C_heaptop,"\376B\000\000$(http://)\077([^/:]+)(:([^:/]+))\077(/.\052)\077");
lf[100]=C_h_intern(&lf[100],30,"setup-download#locate-egg/http");
lf[101]=C_h_intern(&lf[101],6,"signal");
lf[102]=C_h_intern(&lf[102],26,"setup-api#remove-directory");
lf[103]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[105]=C_h_intern(&lf[105],17,"open-input-string");
lf[106]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[107]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[108]=C_decode_literal(C_heaptop,"\376B\000\000\002#f");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000 files-versions are not identical");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000=unrecognized file-information - possibly corrupt transmission");
lf[111]=C_h_intern(&lf[111],12,"string-every");
lf[112]=C_h_intern(&lf[112],19,"char-set:whitespace");
lf[113]=C_decode_literal(C_heaptop,"\376B\000\000\031 \052#\134|[- ]\052([^- ]\052) \052\134|#.\052");
lf[114]=C_decode_literal(C_heaptop,"\376B\000\000\011 \052#!eof \052");
lf[115]=C_h_intern(&lf[115],9,"read-line");
lf[116]=C_h_intern(&lf[116],5,"abort");
lf[117]=C_h_intern(&lf[117],24,"make-composite-condition");
lf[118]=C_h_intern(&lf[118],23,"make-property-condition");
lf[119]=C_h_intern(&lf[119],20,"setup-download-error");
lf[120]=C_h_intern(&lf[120],3,"exn");
lf[121]=C_h_intern(&lf[121],7,"message");
lf[122]=C_h_intern(&lf[122],9,"arguments");
lf[123]=C_decode_literal(C_heaptop,"\376B\000\000\011[Server] ");
lf[124]=C_h_intern(&lf[124],17,"close-output-port");
lf[125]=C_h_intern(&lf[125],16,"close-input-port");
lf[126]=C_decode_literal(C_heaptop,"\376B\000\000\006  ~a~%");
lf[127]=C_h_intern(&lf[127],7,"display");
lf[128]=C_h_intern(&lf[128],19,"with-output-to-file");
lf[129]=C_h_intern(&lf[129],7,"\000binary");
lf[130]=C_h_intern(&lf[130],20,"\003sysread-string/port");
lf[131]=C_decode_literal(C_heaptop,"\376B\000\000\006  ~a~%");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[133]=C_decode_literal(C_heaptop,"\376B\000\0001invalid file name - possibly corrupt transmission");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\000\023reading files ...~%");
lf[135]=C_decode_literal(C_heaptop,"\376B\000\000\006\077name=");
lf[136]=C_decode_literal(C_heaptop,"\376B\000\000\006&mode=");
lf[137]=C_decode_literal(C_heaptop,"\376B\000\000\012&tests=yes");
lf[138]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[139]=C_h_intern(&lf[139],8,"->string");
lf[140]=C_decode_literal(C_heaptop,"\376B\000\000\011&version=");
lf[141]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[143]=C_h_intern(&lf[143],11,"\000proxy-host");
lf[144]=C_h_intern(&lf[144],16,"\000proxy-user-pass");
lf[145]=C_decode_literal(C_heaptop,"\376B\000\000\004GET ");
lf[146]=C_decode_literal(C_heaptop,"\376B\000\000\011 HTTP/1.1");
lf[147]=C_decode_literal(C_heaptop,"\376B\000\000\002\015\012");
lf[148]=C_decode_literal(C_heaptop,"\376B\000\000\014Connection: ");
lf[149]=C_decode_literal(C_heaptop,"\376B\000\000\002\015\012");
lf[150]=C_decode_literal(C_heaptop,"\376B\000\000\014User-Agent: ");
lf[151]=C_decode_literal(C_heaptop,"\376B\000\000\002\015\012");
lf[152]=C_decode_literal(C_heaptop,"\376B\000\000\010Accept: ");
lf[153]=C_decode_literal(C_heaptop,"\376B\000\000\002\015\012");
lf[154]=C_decode_literal(C_heaptop,"\376B\000\000\006Host: ");
lf[155]=C_decode_literal(C_heaptop,"\376B\000\000\002\015\012");
lf[156]=C_decode_literal(C_heaptop,"\376B\000\000\020Content-length: ");
lf[157]=C_decode_literal(C_heaptop,"\376B\000\000\002\015\012");
lf[158]=C_decode_literal(C_heaptop,"\376B\000\000\002\015\012");
lf[159]=C_decode_literal(C_heaptop,"\376B\000\000\033Proxy-Authorization: Basic ");
lf[160]=C_decode_literal(C_heaptop,"\376B\000\000\002\015\012");
lf[161]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\000\007http://");
lf[163]=C_h_intern(&lf[163],15,"\003sysget-keyword");
lf[164]=C_h_intern(&lf[164],15,"\000content-length");
lf[165]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[166]=C_h_intern(&lf[166],7,"\000accept");
lf[167]=C_decode_literal(C_heaptop,"\376B\000\000\005close");
lf[168]=C_h_intern(&lf[168],11,"\000connection");
lf[169]=C_h_intern(&lf[169],5,"\000port");
lf[171]=C_h_intern(&lf[171],14,"number->string");
lf[172]=C_h_intern(&lf[172],11,"tcp-connect");
lf[173]=C_h_intern(&lf[173],26,"string-concatenate-reverse");
lf[174]=C_decode_literal(C_heaptop,"\376B\000\000\002~%");
lf[175]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[176]=C_decode_literal(C_heaptop,"\376B\000\000/invalid response from server - please try again");
lf[177]=C_decode_literal(C_heaptop,"\376B\000\000\017reading chunks ");
lf[178]=C_decode_literal(C_heaptop,"\376B\000\000\004~a~%");
lf[179]=C_decode_literal(C_heaptop,"\376B\000\000$[Tt]ransfer-[Ee]ncoding:\134s\052chunked.\052");
lf[180]=C_h_intern(&lf[180],12,"string-null\077");
lf[181]=C_decode_literal(C_heaptop,"\376B\000\000\003\052/\052");
lf[182]=C_h_intern(&lf[182],11,"\000proxy-port");
lf[183]=C_h_intern(&lf[183],10,"http-fetch");
lf[184]=C_decode_literal(C_heaptop,"\376B\000\000\034invalid response from server");
lf[185]=C_decode_literal(C_heaptop,"\376B\000\000\004~a~%");
lf[186]=C_decode_literal(C_heaptop,"\376B\000\000\034HTTP/[0-9.]+\134s+([0-9]+)\134s+.\052");
lf[187]=C_decode_literal(C_heaptop,"\376B\000\000\026reading response ...~%");
lf[188]=C_decode_literal(C_heaptop,"\376B\000\000\003\052/\052");
lf[189]=C_decode_literal(C_heaptop,"\376B\000\000\023requesting ~s ...~%");
lf[190]=C_decode_literal(C_heaptop,"\376B\000\000&connecting to host ~s, port ~a ~a...~%");
lf[191]=C_decode_literal(C_heaptop,"\376B\000\000\002) ");
lf[192]=C_decode_literal(C_heaptop,"\376B\000\000\005(via ");
lf[193]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[196]=C_decode_literal(C_heaptop,"\376B\000\000\026invalid extension name");
lf[197]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[198]=C_decode_literal(C_heaptop,"\376B\000\000\002..");
lf[199]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[200]=C_h_intern(&lf[200],12,"string-index");
lf[201]=C_h_intern(&lf[201],33,"setup-download#retrieve-extension");
lf[202]=C_h_intern(&lf[202],8,"\000version");
lf[203]=C_h_intern(&lf[203],6,"\000quiet");
lf[204]=C_h_intern(&lf[204],12,"\000destination");
lf[205]=C_h_intern(&lf[205],9,"\000username");
lf[206]=C_h_intern(&lf[206],9,"\000password");
lf[207]=C_h_intern(&lf[207],6,"\000tests");
lf[208]=C_h_intern(&lf[208],6,"\000trunk");
lf[209]=C_h_intern(&lf[209],6,"\000clean");
lf[210]=C_h_intern(&lf[210],5,"local");
lf[211]=C_h_intern(&lf[211],3,"svn");
lf[212]=C_h_intern(&lf[212],4,"http");
lf[213]=C_decode_literal(C_heaptop,"\376B\000\0001cannot retrieve extension - unsupported transport");
lf[214]=C_h_intern(&lf[214],16,"\003sysdynamic-wind");
lf[215]=C_h_intern(&lf[215],5,"\000mode");
lf[216]=C_h_intern(&lf[216],30,"setup-download#list-extensions");
lf[217]=C_h_intern(&lf[217],18,"string-concatenate");
lf[218]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[219]=C_h_intern(&lf[219],3,"map");
lf[220]=C_h_intern(&lf[220],17,"\003sysstring-append");
lf[221]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[222]=C_h_intern(&lf[222],12,"string-chomp");
lf[223]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000\047listing extension directory ...~%  ~a~%");
lf[225]=C_decode_literal(C_heaptop,"\376B\000\000\014--password=\047");
lf[226]=C_decode_literal(C_heaptop,"\376B\000\000\001\047");
lf[227]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[228]=C_decode_literal(C_heaptop,"\376B\000\000\014--username=\047");
lf[229]=C_decode_literal(C_heaptop,"\376B\000\000\001\047");
lf[230]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[231]=C_decode_literal(C_heaptop,"\376B\000\000\007\077list=1");
lf[232]=C_h_intern(&lf[232],8,"read-all");
lf[233]=C_decode_literal(C_heaptop,"\376B\000\000.cannot list extensions - unsupported transport");
lf[234]=C_h_intern(&lf[234],38,"setup-download#list-extension-versions");
lf[235]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[236]=C_decode_literal(C_heaptop,"\376B\000\000\010unknown\012");
lf[237]=C_h_intern(&lf[237],17,"directory-exists\077");
lf[238]=C_decode_literal(C_heaptop,"\376B\000\000\005/tags");
lf[239]=C_decode_literal(C_heaptop,"\376B\000\000\010unknown\012");
lf[240]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[241]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[242]=C_decode_literal(C_heaptop,"\376B\000\000\005/tags");
lf[243]=C_decode_literal(C_heaptop,"\376B\000\000\014--password=\047");
lf[244]=C_decode_literal(C_heaptop,"\376B\000\000\001\047");
lf[245]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[246]=C_decode_literal(C_heaptop,"\376B\000\000\014--username=\047");
lf[247]=C_decode_literal(C_heaptop,"\376B\000\000\001\047");
lf[248]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[249]=C_decode_literal(C_heaptop,"\376B\000\000.cannot list extensions - unsupported transport");
lf[250]=C_h_intern(&lf[250],8,"char-set");
lf[251]=C_h_intern(&lf[251],14,"make-parameter");
lf[252]=C_decode_literal(C_heaptop,"\376B\000\000\020chicken-install ");
lf[253]=C_h_intern(&lf[253],15,"chicken-version");
lf[254]=C_h_intern(&lf[254],17,"tcp-write-timeout");
lf[255]=C_h_intern(&lf[255],16,"tcp-read-timeout");
lf[256]=C_h_intern(&lf[256],19,"tcp-connect-timeout");
lf[257]=C_h_intern(&lf[257],11,"\003sysrequire");
lf[258]=C_h_intern(&lf[258],9,"setup-api");
C_register_lf2(lf,259,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1262,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k3248 in k3265 in get-chunks in k2832 in k2823 in k2820 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in a2796 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in ... */
static void C_ccall f_3250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3250,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3253,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-download.scm:421: d");
f_1318(t3,lf[175],C_SCHEME_END_OF_LIST);}

/* k3251 in k3248 in k3265 in get-chunks in k2832 in k2823 in k2820 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in a2796 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in ... */
static void C_ccall f_3253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3253,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3256,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:422: read-line");
t3=C_fast_retrieve(lf[115]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* k3254 in k3251 in k3248 in k3265 in get-chunks in k2832 in k2823 in k2820 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in a2796 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in ... */
static void C_ccall f_3256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3256,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
C_trace("setup-download.scm:423: get-chunks");
t3=((C_word*)((C_word*)t0)[4])[1];
f_3222(t3,((C_word*)t0)[5],t2);}

/* k2260 in k2257 in a2254 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in setup-download#locate-egg/svn in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in ... */
static void C_ccall f_2262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2262,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2265,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:214: d");
f_1318(t3,lf[77],C_a_i_list(&a,1,t2));}

/* k2263 in k2260 in k2257 in a2254 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in setup-download#locate-egg/svn in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in ... */
static void C_ccall f_2265(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2265,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2281,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:215: system");
t3=C_fast_retrieve(lf[30]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k3265 in get-chunks in k2832 in k2823 in k2820 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in a2796 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in ... */
static void C_ccall f_3267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3267,2,t0,t1);}
t2=C_a_i_string_to_number(&a,2,t1,C_fix(16));
if(C_truep(t2)){
if(C_truep(C_i_zerop(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3244,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:417: d");
f_1318(t3,lf[174],C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3250,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("read-string/port");
t4=C_fast_retrieve(lf[130]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,((C_word*)t0)[5]);}}
else{
C_trace("setup-download.scm:415: error");
t3=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],lf[176]);}}

/* k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3271(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3271,2,t0,t1);}
t2=C_mutate2(&lf[194] /* (set! setup-download#slashes ...) */,t1);
t3=C_mutate2(&lf[195] /* (set! setup-download#check-egg-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3293,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[201]+1 /* (set! setup-download#retrieve-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3305,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[216]+1 /* (set! setup-download#list-extensions ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3410,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[234]+1 /* (set! setup-download#list-extension-versions ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3483,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_UNDEFINED);}

/* k3285 in setup-download#check-egg-name in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_not(t1));}

/* k1632 in k1629 in k1623 in k1598 in k1595 in k1592 in k1583 in k1737 in a1574 in k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in ... */
static void C_ccall f_1634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1634,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1637,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:116: ##sys#write-char-0");
((C_proc4)C_fast_retrieve_symbol_proc(lf[35]))(4,*((C_word*)lf[35]+1),t2,C_make_character(32),((C_word*)t0)[5]);}

/* k1629 in k1623 in k1598 in k1595 in k1592 in k1583 in k1737 in a1574 in k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in ... */
static void C_ccall f_1631(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1631,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1634,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:116: ##sys#print");
t3=*((C_word*)lf[34]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[6],C_SCHEME_FALSE,((C_word*)t0)[5]);}

/* k1635 in k1632 in k1629 in k1623 in k1598 in k1595 in k1592 in k1583 in k1737 in a1574 in k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in ... */
static void C_ccall f_1637(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1637,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1640,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:116: ##sys#print");
t3=*((C_word*)lf[34]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5]);}

/* k3212 in k3035 in k3029 in k3026 in get-files in k2938 in a3147 in a2546 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in ... */
static void C_ccall f_3214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:405: make-property-condition");
t2=C_fast_retrieve(lf[118]);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],lf[120],lf[121],t1,lf[122],((C_word*)t0)[3]);}

/* k3208 in k3204 in k3035 in k3029 in k3026 in get-files in k2938 in a3147 in a2546 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in ... */
static void C_ccall f_3210(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:404: make-composite-condition");
t2=C_fast_retrieve(lf[117]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k1705 in for-each-loop346 in k1679 in k1583 in k1737 in a1574 in k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in ... */
static void C_ccall f_1707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1697(t3,((C_word*)t0)[4],t2);}

/* a2320 in k2217 in k2214 in k2211 in k2208 in k2205 in setup-download#locate-egg/svn in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in ... */
static void C_ccall f_2321(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2321,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2325,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:190: irregex-search");
t4=C_fast_retrieve(lf[84]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[85],t2);}

/* k1623 in k1598 in k1595 in k1592 in k1583 in k1737 in a1574 in k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in ... */
static void C_ccall f_1625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1625,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[32]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1631,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-download.scm:116: ##sys#print");
t6=*((C_word*)lf[34]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[36],C_SCHEME_FALSE,t3);}

/* k1620 in k1604 in k1601 in k1598 in k1595 in k1592 in k1583 in k1737 in a1574 in k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in ... */
static void C_ccall f_1622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
C_trace("setup-download.scm:120: values");
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
C_trace("setup-download.scm:121: values");
C_values(4,0,((C_word*)t0)[2],C_SCHEME_FALSE,lf[29]);}}

/* k2323 in a2320 in k2217 in k2214 in k2211 in k2208 in k2205 in setup-download#locate-egg/svn in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in ... */
static void C_ccall f_2325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("setup-download.scm:191: irregex-match-substring");
t2=C_fast_retrieve(lf[83]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_fix(1));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k1762 in k1755 in k1749 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in ... */
static void C_ccall f_1764(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:99: existing-version");
f_1349(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in ... */
static void C_ccall f_2541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2541,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2547,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word)li35),tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2563,a[2]=((C_word*)t0)[10],a[3]=((C_word)li37),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:248: ##sys#call-with-values");
C_call_with_values(4,0,t1,t2,t3);}

/* get-chunks in k2832 in k2823 in k2820 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in a2796 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in ... */
static void C_fcall f_3222(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3222,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3267,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:413: read-line");
t4=C_fast_retrieve(lf[115]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* a2546 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in ... */
static void C_ccall f_2547(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2547,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2551,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[4];
t4=((C_word*)t0)[5];
t5=((C_word*)t0)[6];
t6=((C_word*)t0)[2];
t7=((C_word*)t0)[7];
t8=((C_word*)t0)[8];
t9=((C_word*)t0)[9];
t10=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3142,a[2]=t3,a[3]=t4,a[4]=t5,a[5]=t7,a[6]=t8,a[7]=t9,a[8]=((C_word)li29),tmp=(C_word)a,a+=9,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3148,a[2]=t6,a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:385: ##sys#call-with-values");
C_call_with_values(4,0,t2,t10,t11);}

/* k2310 in a2254 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in setup-download#locate-egg/svn in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in ... */
static void C_ccall f_2312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:201: make-pathname");
t2=C_fast_retrieve(lf[20]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k2317 in k2217 in k2214 in k2211 in k2208 in k2205 in setup-download#locate-egg/svn in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in ... */
static void C_ccall f_2319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:186: existing-version");
f_1349(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1749 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 in ... */
static void C_ccall f_1751(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1751,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1757,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:98: directory?");
t3=C_fast_retrieve(lf[23]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[2];
f_1530(2,t2,C_SCHEME_FALSE);}}

/* k2531 in a2528 in a2522 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in ... */
static void C_ccall f_2533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:250: signal");
t2=C_fast_retrieve(lf[101]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2300 in k2257 in a2254 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in setup-download#locate-egg/svn in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in ... */
static void C_ccall f_2302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:204: conc");
t2=C_fast_retrieve(lf[66]);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],((C_word*)t0)[3],C_make_character(47),((C_word*)t0)[4],C_make_character(47),t1);}

/* a3349 in k3343 in k3337 in setup-download#retrieve-extension in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in ... */
static void C_ccall f_3350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3350,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[0],"setup-download#\052quiet\052"));
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,C_retrieve2(lf[2],"setup-download#\052trunk\052"));
t4=C_mutate2(((C_word *)((C_word*)t0)[4])+1,C_retrieve2(lf[3],"setup-download#\052mode\052"));
t5=C_mutate2(&lf[0] /* (set! setup-download#*quiet* ...) */,((C_word*)((C_word*)t0)[5])[1]);
t6=C_mutate2(&lf[2] /* (set! setup-download#*trunk* ...) */,((C_word*)((C_word*)t0)[6])[1]);
t7=C_mutate2(&lf[3] /* (set! setup-download#*mode* ...) */,((C_word*)((C_word*)t0)[7])[1]);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_UNDEFINED);}

/* a3358 in k3343 in k3337 in setup-download#retrieve-extension in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in ... */
static void C_ccall f_3359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3359,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_eqp(t2,lf[210]);
if(C_truep(t3)){
C_trace("setup-download.scm:445: locate-egg/local");
((C_proc7)C_fast_retrieve_symbol_proc(lf[19]))(7,*((C_word*)lf[19]+1),t1,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
t4=C_eqp(t2,lf[211]);
if(C_truep(t4)){
C_trace("setup-download.scm:447: locate-egg/svn");
((C_proc8)C_fast_retrieve_symbol_proc(lf[68]))(8,*((C_word*)lf[68]+1),t1,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[8],((C_word*)t0)[9]);}
else{
t5=C_eqp(t2,lf[212]);
if(C_truep(t5)){
C_trace("setup-download.scm:449: locate-egg/http");
((C_proc10)C_fast_retrieve_symbol_proc(lf[100]))(10,*((C_word*)lf[100]+1),t1,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[10],((C_word*)t0)[11],((C_word*)t0)[12],((C_word*)t0)[13]);}
else{
C_trace("setup-download.scm:451: error");
t6=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,lf[213],((C_word*)t0)[2]);}}}}

/* a2528 in a2522 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in ... */
static void C_ccall f_2529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2529,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2533,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
C_trace("setup-download.scm:250: signal");
t3=C_fast_retrieve(lf[101]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,((C_word*)t0)[2]);}
else{
C_trace("setup-download.scm:249: setup-api#remove-directory");
((C_proc3)C_fast_retrieve_symbol_proc(lf[102]))(3,*((C_word*)lf[102]+1),t2,((C_word*)t0)[4]);}}

/* k1755 in k1749 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in ... */
static void C_ccall f_1757(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1757,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1764,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:99: directory");
t3=C_fast_retrieve(lf[49]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[2];
f_1530(2,t2,C_SCHEME_FALSE);}}

/* a2522 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in ... */
static void C_ccall f_2523(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2523,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2529,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li27),tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:248: k603");
t4=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* a3397 in k3343 in k3337 in setup-download#retrieve-extension in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in ... */
static void C_ccall f_3398(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3398,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[0],"setup-download#\052quiet\052"));
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,C_retrieve2(lf[2],"setup-download#\052trunk\052"));
t4=C_mutate2(((C_word *)((C_word*)t0)[4])+1,C_retrieve2(lf[3],"setup-download#\052mode\052"));
t5=C_mutate2(&lf[0] /* (set! setup-download#*quiet* ...) */,((C_word*)((C_word*)t0)[5])[1]);
t6=C_mutate2(&lf[2] /* (set! setup-download#*trunk* ...) */,((C_word*)((C_word*)t0)[6])[1]);
t7=C_mutate2(&lf[3] /* (set! setup-download#*mode* ...) */,((C_word*)((C_word*)t0)[7])[1]);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_UNDEFINED);}

/* k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in ... */
static void C_ccall f_2503(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2503,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2506,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
C_trace("setup-download.scm:246: file-exists?");
t4=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in ... */
static void C_ccall f_2509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2509,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2512,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2517,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word)li39),tmp=(C_word)a,a+=12,tmp);
C_trace("setup-download.scm:248: call-with-current-continuation");
t4=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in ... */
static void C_ccall f_2506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2506,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2509,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t2)){
t4=t3;
f_2509(2,t4,C_SCHEME_UNDEFINED);}
else{
C_trace("setup-download.scm:247: create-directory");
t4=C_fast_retrieve(lf[42]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}}

/* k2674 in k2897 in k2870 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in a2796 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in ... */
static void C_ccall f_2676(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:257: signal");
t2=C_fast_retrieve(lf[101]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 in ... */
static void C_ccall f_2500(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2500,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2503,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
C_trace("setup-download.scm:245: make-pathname");
t3=C_fast_retrieve(lf[20]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,((C_word*)t0)[10]);}

/* k2410 in k2406 in k2399 in setup-download#deconstruct-url in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 in ... */
static void C_ccall f_2412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2412,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2416,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
C_trace("setup-download.scm:231: irregex-match-substring");
t4=C_fast_retrieve(lf[83]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],C_fix(5));}
else{
t4=t3;
f_2416(2,t4,C_SCHEME_FALSE);}}

/* k2414 in k2410 in k2406 in k2399 in setup-download#deconstruct-url in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in ... */
static void C_ccall f_2416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
C_trace("setup-download.scm:224: values");
C_values(5,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t2);}
else{
C_trace("setup-download.scm:224: values");
C_values(5,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],lf[96]);}}

/* k3029 in k3026 in get-files in k2938 in a3147 in a2546 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in ... */
static void C_ccall f_3031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3031,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3037,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_pairp(t2))){
t4=C_u_i_car(t2);
t5=t3;
f_3037(t5,C_eqp(lf[15],t4));}
else{
t4=t3;
f_3037(t4,C_SCHEME_FALSE);}}

/* k3035 in k3029 in k3026 in get-files in k2938 in a3147 in a2546 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in ... */
static void C_fcall f_3037(C_word t0,C_word t1){
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
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3037,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=((C_word*)t0)[3];
t6=t4;
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3202,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3206,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3214,a[2]=t8,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:407: string-append");
t10=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,lf[123],t2);}
else{
t2=C_eofp(((C_word*)t0)[2]);
t3=(C_truep(t2)?t2:C_i_not(((C_word*)t0)[2]));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3059,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:369: close-input-port");
t5=*((C_word*)lf[125]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[6]);}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[2]))){
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3077,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
C_trace("setup-download.scm:374: string-suffix?");
t5=C_fast_retrieve(lf[46]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,lf[132],((C_word*)t0)[2]);}
else{
C_trace("setup-download.scm:373: error");
t4=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[3],lf[133],((C_word*)t0)[2]);}}}}

/* setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2445(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+14)){
C_save_and_reclaim((void*)tr4r,(void*)f_2445r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2445r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2445r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(14);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_SCHEME_FALSE:C_i_car(t9));
t12=t11;
t13=C_i_nullp(t9);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t15=C_i_nullp(t14);
t16=(C_truep(t15)?C_SCHEME_FALSE:C_i_car(t14));
t17=t16;
t18=C_i_nullp(t14);
t19=(C_truep(t18)?C_SCHEME_END_OF_LIST:C_i_cdr(t14));
t20=C_i_nullp(t19);
t21=(C_truep(t20)?C_SCHEME_FALSE:C_i_car(t19));
t22=t21;
t23=C_i_nullp(t19);
t24=(C_truep(t23)?C_SCHEME_END_OF_LIST:C_i_cdr(t19));
t25=C_i_nullp(t24);
t26=(C_truep(t25)?C_SCHEME_FALSE:C_i_car(t24));
t27=t26;
t28=C_i_nullp(t24);
t29=(C_truep(t28)?C_SCHEME_END_OF_LIST:C_i_cdr(t24));
t30=C_i_nullp(t29);
t31=(C_truep(t30)?C_SCHEME_FALSE:C_i_car(t29));
t32=t31;
t33=C_i_nullp(t29);
t34=(C_truep(t33)?C_SCHEME_END_OF_LIST:C_i_cdr(t29));
t35=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2487,a[2]=t3,a[3]=((C_word)li26),tmp=(C_word)a,a+=4,tmp);
t36=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2493,a[2]=t7,a[3]=t22,a[4]=t27,a[5]=t32,a[6]=t2,a[7]=t12,a[8]=t17,a[9]=((C_word)li40),tmp=(C_word)a,a+=10,tmp);
C_trace("setup-download.scm:234: ##sys#call-with-values");
C_call_with_values(4,0,t1,t35,t36);}

/* k3081 in k3078 in k3075 in k3035 in k3029 in k3026 in get-files in k2938 in a3147 in a2546 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in ... */
static void C_ccall f_3083(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:377: get-files");
t2=((C_word*)((C_word*)t0)[2])[1];
f_3024(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k3078 in k3075 in k3035 in k3029 in k3026 in get-files in k2938 in a3147 in a2546 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in ... */
static void C_ccall f_3080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3080,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3083,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3090,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:376: make-pathname");
t4=C_fast_retrieve(lf[20]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k2333 in k2208 in k2205 in setup-download#locate-egg/svn in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 in ... */
static void C_ccall f_2335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2335,2,t0,t1);}
C_trace("setup-download.scm:183: make-svn-ls-cmd");
f_1908(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1,C_a_i_list(&a,2,lf[63],C_SCHEME_TRUE));}

/* k3057 in k3035 in k3029 in k3026 in get-files in k2938 in a3147 in a2546 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in ... */
static void C_ccall f_3059(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3059,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3062,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:370: close-output-port");
t3=*((C_word*)lf[124]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* map-loop428 in k1975 in k1958 in k1955 in k1952 in k1949 in a3438 in setup-download#list-extensions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in ... */
static void C_fcall f_1985(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_1985,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2014,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1973,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:166: string-chomp");
t7=C_fast_retrieve(lf[222]);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t4,lf[223]);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_1271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1271,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1274,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_irregex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_1274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1274,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1277,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_posix_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_1277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1277,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1280,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1981 in k1975 in k1958 in k1955 in k1952 in k1949 in a3438 in setup-download#list-extensions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in ... */
static void C_ccall f_1983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:165: string-concatenate");
t2=C_fast_retrieve(lf[217]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* get-files in k2938 in a3147 in a2546 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in ... */
static void C_fcall f_3024(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3024,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3028,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
C_trace("setup-download.scm:364: skip");
t4=((C_word*)((C_word*)t0)[7])[1];
f_2942(t4,t3);}

/* k3026 in get-files in k2938 in a3147 in a2546 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in ... */
static void C_ccall f_3028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3028,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3031,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
C_trace("setup-download.scm:365: read");
t4=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k1975 in k1958 in k1955 in k1952 in k1949 in a3438 in setup-download#list-extensions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in ... */
static void C_ccall f_1977(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1977,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[219]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1983,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1985,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],a[5]=((C_word)li63),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_1985(t7,t3,t1);}

/* k1971 in map-loop428 in k1975 in k1958 in k1955 in k1952 in k1949 in a3438 in setup-download#list-extensions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in ... */
static void C_ccall f_1973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#string-append");
((C_proc4)C_fast_retrieve_symbol_proc(lf[220]))(4,*((C_word*)lf[220]+1),((C_word*)t0)[2],t1,lf[221]);}

/* a1810 in k1804 in setup-download#gather-egg-information in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_1811(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1811,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1817,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li8),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1823,a[2]=t2,a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:136: ##sys#call-with-values");
C_call_with_values(4,0,t1,t3,t4);}

/* k2406 in k2399 in setup-download#deconstruct-url in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2408,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2412,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2425,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
C_trace("setup-download.scm:226: irregex-match-substring");
t5=C_fast_retrieve(lf[83]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[3],C_fix(3));}
else{
t5=t4;
f_2425(2,t5,C_SCHEME_FALSE);}}

/* a1816 in a1810 in k1804 in setup-download#gather-egg-information in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 in ... */
static void C_ccall f_1817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1817,2,t0,t1);}
C_trace("setup-download.scm:137: locate-egg/local");
((C_proc4)C_fast_retrieve_symbol_proc(lf[19]))(4,*((C_word*)lf[19]+1),t1,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3190 in k3187 in k3184 in a3181 in a3165 in a3438 in setup-download#list-extensions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in ... */
static void C_ccall f_3192(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k2399 in setup-download#deconstruct-url in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2401,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2408,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
C_trace("setup-download.scm:225: irregex-match-substring");
t4=C_fast_retrieve(lf[83]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,C_fix(2));}
else{
t4=t3;
f_2408(2,t4,((C_word*)t0)[3]);}}

/* k1958 in k1955 in k1952 in k1949 in a3438 in setup-download#list-extensions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in ... */
static void C_ccall f_1960(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1960,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1977,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:167: with-input-from-pipe");
t7=C_fast_retrieve(lf[86]);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[3],C_fast_retrieve(lf[87]));}

/* k2694 in k2691 in k2688 in setup-download#make-HTTP-GET/1.1 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 in ... */
static void C_ccall f_2696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2696,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2699,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2727,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:265: ##sys#get-keyword");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[163]+1)))(5,*((C_word*)lf[163]+1),t3,lf[164],((C_word*)t0)[2],t4);}

/* k2691 in k2688 in setup-download#make-HTTP-GET/1.1 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2693,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2696,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2730,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:265: ##sys#get-keyword");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[163]+1)))(5,*((C_word*)lf[163]+1),t3,lf[166],((C_word*)t0)[2],t4);}

/* k2688 in setup-download#make-HTTP-GET/1.1 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2690,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2693,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2733,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:265: ##sys#get-keyword");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[163]+1)))(5,*((C_word*)lf[163]+1),t3,lf[168],((C_word*)t0)[2],t4);}

/* k1955 in k1952 in k1949 in a3438 in setup-download#list-extensions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in ... */
static void C_ccall f_1957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1957,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1960,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:164: d");
f_1318(t3,lf[224],C_a_i_list(&a,1,t2));}

/* k1804 in setup-download#gather-egg-information in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_1806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1806,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1811,a[2]=((C_word*)t0)[2],a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:135: filter-map");
t3=C_fast_retrieve(lf[61]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,t1);}

/* setup-download#gather-egg-information in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_1802(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1802,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1806,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:134: directory");
t4=C_fast_retrieve(lf[49]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k1949 in a3438 in setup-download#list-extensions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 in ... */
static void C_ccall f_1951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1951,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1954,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
C_trace("setup-download.scm:162: string-append");
t4=*((C_word*)lf[69]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[225],((C_word*)t0)[4],lf[226]);}
else{
t4=t3;
f_1954(2,t4,lf[227]);}}

/* k1952 in k1949 in a3438 in setup-download#list-extensions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in ... */
static void C_ccall f_1954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1954,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1957,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:163: make-svn-ls-cmd");
f_1908(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);}

/* k2697 in k2694 in k2691 in k2688 in setup-download#make-HTTP-GET/1.1 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in ... */
static void C_ccall f_2699(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2699,2,t0,t1);}
t2=t1;
t3=C_i_get_keyword(lf[143],((C_word*)t0)[2],C_SCHEME_FALSE);
t4=C_i_get_keyword(lf[144],((C_word*)t0)[2],C_SCHEME_FALSE);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2715,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t2,a[9]=t5,tmp=(C_word)a,a+=10,tmp);
if(C_truep(t3)){
C_trace("setup-download.scm:275: string-append");
t7=*((C_word*)lf[69]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,lf[162],((C_word*)t0)[7],((C_word*)t0)[9]);}
else{
t7=t6;
f_2715(2,t7,((C_word*)t0)[9]);}}

/* setup-download#make-HTTP-GET/1.1 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_fcall f_2686(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2686,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2690,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=t4,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2736,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:265: ##sys#get-keyword");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[163]+1)))(5,*((C_word*)lf[163]+1),t6,lf[169],t5,t7);}

/* k2682 in k2678 in k2897 in k2870 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in a2796 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in ... */
static void C_ccall f_2684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:258: make-composite-condition");
t2=C_fast_retrieve(lf[117]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k1595 in k1592 in k1583 in k1737 in a1574 in k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in ... */
static void C_ccall f_1597(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1597,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1600,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1668,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:114: normalize-pathname");
t4=C_fast_retrieve(lf[41]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}

/* k2678 in k2897 in k2870 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in a2796 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in ... */
static void C_ccall f_2680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2680,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2684,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:263: make-property-condition");
t4=C_fast_retrieve(lf[118]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[183]);}

/* k1592 in k1583 in k1737 in a1574 in k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in ... */
static void C_ccall f_1594(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1594,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1597,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1672,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:113: normalize-pathname");
t4=C_fast_retrieve(lf[41]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* setup-download#make-svn-ls-cmd in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_fcall f_1908(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1908,NULL,5,t1,t2,t3,t4,t5);}
t6=C_i_get_keyword(lf[63],t5,C_SCHEME_FALSE);
t7=(C_truep(t6)?lf[64]:lf[65]);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1923,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:154: qs");
t10=C_fast_retrieve(lf[40]);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t4);}

/* setup-download#check-egg-name in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_fcall f_3293(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3293,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3300,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=t3;
t5=t2;
if(C_truep((C_truep(C_i_equalp(t5,lf[197]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t5,lf[198]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t5,lf[199]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))){
t6=t4;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3287,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:429: string-index");
t7=C_fast_retrieve(lf[200]);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t5,C_retrieve2(lf[194],"setup-download#slashes"));}}

/* k1260 */
static void C_ccall f_1262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1262,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1265,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1653 in k1650 in k1644 in k1598 in k1595 in k1592 in k1583 in k1737 in a1574 in k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in ... */
static void C_ccall f_1655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1655,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1658,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:117: ##sys#print");
t3=*((C_word*)lf[34]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[38],C_SCHEME_FALSE,((C_word*)t0)[5]);}

/* k1263 in k1260 */
static void C_ccall f_1265(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1265,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1268,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_chicken_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1650 in k1644 in k1598 in k1595 in k1592 in k1583 in k1737 in a1574 in k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in ... */
static void C_ccall f_1652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1652,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1655,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:117: ##sys#print");
t3=*((C_word*)lf[34]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[6],C_SCHEME_FALSE,((C_word*)t0)[5]);}

/* a3141 in a2546 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in ... */
static void C_ccall f_3142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3142,2,t0,t1);}
C_trace("setup-download.scm:387: http-connect");
f_2774(t1,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k1266 in k1263 in k1260 */
static void C_ccall f_1268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1268,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1271,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* a3147 in a2546 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in ... */
static void C_ccall f_3148(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3148,4,t0,t1,t2,t3);}
t4=t1;
t5=t2;
t6=t3;
t7=((C_word*)t0)[2];
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2940,a[2]=t5,a[3]=t6,a[4]=t7,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:341: d");
f_1318(t8,lf[134],C_SCHEME_END_OF_LIST);}

/* k1656 in k1653 in k1650 in k1644 in k1598 in k1595 in k1592 in k1583 in k1737 in a1574 in k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in ... */
static void C_ccall f_1658(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1658,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1661,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:117: ##sys#print");
t3=*((C_word*)lf[34]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5]);}

/* a1901 in a1895 in a1883 in a1862 in k1844 in a1837 in k1831 in k1825 in a1822 in a1810 in k1804 in setup-download#gather-egg-information in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in ... */
static void C_ccall f_1902(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1902,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* map-loop479 in k2096 in k2073 in k2070 in k2067 in k2064 in a3505 in k3494 in setup-download#list-extension-versions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in ... */
static void C_fcall f_2106(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_2106,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2135,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2094,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:177: string-chomp");
t7=C_fast_retrieve(lf[222]);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t4,lf[241]);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2102 in k2096 in k2073 in k2070 in k2067 in k2064 in a3505 in k3494 in setup-download#list-extension-versions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in ... */
static void C_ccall f_2104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:176: string-concatenate");
t2=C_fast_retrieve(lf[217]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1638 in k1635 in k1632 in k1629 in k1623 in k1598 in k1595 in k1592 in k1583 in k1737 in a1574 in k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in ... */
static void C_ccall f_1640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:116: get-output-string");
t2=C_fast_retrieve(lf[33]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k1644 in k1598 in k1595 in k1592 in k1583 in k1737 in a1574 in k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in ... */
static void C_ccall f_1646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1646,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[32]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1652,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-download.scm:117: ##sys#print");
t6=*((C_word*)lf[34]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[39],C_SCHEME_FALSE,t3);}

/* k1921 in setup-download#make-svn-ls-cmd in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_1923(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:154: conc");
t2=C_fast_retrieve(lf[66]);
((C_proc8)(void*)(*((C_word*)t2+1)))(8,t2,((C_word*)t0)[2],lf[67],((C_word*)t0)[3],C_make_character(32),((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_1280(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1280,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1283,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d1_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_1283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1283,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1286,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1670 in k1592 in k1583 in k1737 in a1574 in k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in ... */
static void C_ccall f_1672(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:113: qs");
t2=C_fast_retrieve(lf[40]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1673 in k1583 in k1737 in a1574 in k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in ... */
static void C_ccall f_1675(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:131: values");
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_1286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1286,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1289,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_tcp_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_1289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1289,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1292,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d13_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1659 in k1656 in k1653 in k1650 in k1644 in k1598 in k1595 in k1592 in k1583 in k1737 in a1574 in k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in ... */
static void C_ccall f_1661(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:117: get-output-string");
t2=C_fast_retrieve(lf[33]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2012 in map-loop428 in k1975 in k1958 in k1955 in k1952 in k1949 in a3438 in setup-download#list-extensions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in ... */
static void C_ccall f_2014(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2014,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1985(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1985(t6,((C_word*)t0)[5],t5);}}

/* k1666 in k1595 in k1592 in k1583 in k1737 in a1574 in k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in ... */
static void C_ccall f_1668(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:114: qs");
t2=C_fast_retrieve(lf[40]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1604 in k1601 in k1598 in k1595 in k1592 in k1583 in k1737 in a1574 in k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in ... */
static void C_ccall f_1606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1606,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1622,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:119: system");
t3=C_fast_retrieve(lf[30]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k1601 in k1598 in k1595 in k1592 in k1583 in k1737 in a1574 in k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in ... */
static void C_ccall f_1603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1603,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1606,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:118: d");
f_1318(t3,lf[31],C_a_i_list(&a,1,t2));}

/* k1598 in k1595 in k1592 in k1583 in k1737 in a1574 in k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in ... */
static void C_ccall f_1600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1600,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1603,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve2(lf[5],"setup-download#\052windows-shell\052"))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1625,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:116: open-output-string");
t4=C_fast_retrieve(lf[37]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1646,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:117: open-output-string");
t4=C_fast_retrieve(lf[37]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1456 in k1444 in k1438 in a3505 in k3494 in setup-download#list-extension-versions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in ... */
static void C_ccall f_1458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1458,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1461,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1463,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word)li72),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_1463(t6,t2,t1);}

/* a1874 in a1868 in a1862 in k1844 in a1837 in k1831 in k1825 in a1822 in a1810 in k1804 in setup-download#gather-egg-information in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in ... */
static void C_ccall f_1875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1875,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1879,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:146: warning");
t3=C_fast_retrieve(lf[25]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[53],((C_word*)t0)[3]);}

/* k1877 in a1874 in a1868 in a1862 in k1844 in a1837 in k1831 in k1825 in a1822 in a1810 in k1804 in setup-download#gather-egg-information in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in ... */
static void C_ccall f_1879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:149: return");
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],C_SCHEME_FALSE);}

/* k1859 in k1856 in k1844 in a1837 in k1831 in k1825 in a1822 in a1810 in k1804 in setup-download#gather-egg-information in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in ... */
static void C_ccall f_1861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1861,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,((C_word*)t0)[4],t2));}

/* a1862 in k1844 in a1837 in k1831 in k1825 in a1822 in a1810 in k1804 in setup-download#gather-egg-information in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in ... */
static void C_ccall f_1863(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1863,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1869,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word)li10),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1884,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word)li14),tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:144: with-exception-handler");
t5=C_fast_retrieve(lf[56]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* a1868 in a1862 in k1844 in a1837 in k1831 in k1825 in a1822 in a1810 in k1804 in setup-download#gather-egg-information in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in ... */
static void C_ccall f_1869(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1869,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1875,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li9),tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:144: k379");
t4=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* k1459 in k1456 in k1444 in k1438 in a3505 in k3494 in setup-download#list-extension-versions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in ... */
static void C_ccall f_1461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:90: string-concatenate");
t2=C_fast_retrieve(lf[217]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* map-loop223 in k1456 in k1444 in k1438 in a3505 in k3494 in setup-download#list-extension-versions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in ... */
static void C_fcall f_1463(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1463,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1492,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-download.scm:91: g246");
t5=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,lf[235]);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* a1889 in a1883 in a1862 in k1844 in a1837 in k1831 in k1825 in a1822 in a1810 in k1804 in setup-download#gather-egg-information in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in ... */
static void C_ccall f_1890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1890,2,t0,t1);}
C_trace("setup-download.scm:150: with-input-from-file");
t2=C_fast_retrieve(lf[54]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[2],*((C_word*)lf[55]+1));}

/* a1895 in a1883 in a1862 in k1844 in a1837 in k1831 in k1825 in a1822 in a1810 in k1804 in setup-download#gather-egg-information in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in ... */
static void C_ccall f_1896(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1896r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1896r(t0,t1,t2);}}

static void C_ccall f_1896r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1902,a[2]=t2,a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:144: k379");
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* k1559 in k1553 in k1550 in a1537 in k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in ... */
static void C_ccall f_1561(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("setup-download.scm:107: values");
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],lf[21]);}
else{
C_trace("setup-download.scm:108: values");
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[4],lf[22]);}}

/* k3242 in k3265 in get-chunks in k2832 in k2823 in k2820 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in a2796 in k2776 in setup-download#http-connect in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in ... */
static void C_ccall f_3244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:418: string-concatenate-reverse");
t2=C_fast_retrieve(lf[173]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* setup-download#locate-egg/svn in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2179(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr4r,(void*)f_2179r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2179r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2179r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(8);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_SCHEME_FALSE:C_i_car(t9));
t12=t11;
t13=C_i_nullp(t9);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t15=C_i_nullp(t14);
t16=(C_truep(t15)?C_SCHEME_FALSE:C_i_car(t14));
t17=C_i_nullp(t14);
t18=(C_truep(t17)?C_SCHEME_END_OF_LIST:C_i_cdr(t14));
t19=C_i_nullp(t18);
t20=(C_truep(t19)?C_SCHEME_FALSE:C_i_car(t18));
t21=t20;
t22=C_i_nullp(t18);
t23=(C_truep(t22)?C_SCHEME_END_OF_LIST:C_i_cdr(t18));
t24=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2207,a[2]=t2,a[3]=t7,a[4]=t3,a[5]=t12,a[6]=t1,a[7]=t21,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t16)){
C_trace("setup-download.scm:181: string-append");
t25=*((C_word*)lf[69]+1);
((C_proc5)(void*)(*((C_word*)t25+1)))(5,t25,t24,lf[92],t16,lf[93]);}
else{
t25=t24;
f_2207(2,t25,lf[94]);}}

/* a3406 in setup-download#retrieve-extension in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3407,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[4]);}

/* a1883 in a1862 in k1844 in a1837 in k1831 in k1825 in a1822 in a1810 in k1804 in setup-download#gather-egg-information in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in ... */
static void C_ccall f_1884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1884,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1890,a[2]=((C_word*)t0)[2],a[3]=((C_word)li11),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1896,a[2]=((C_word*)t0)[3],a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:144: ##sys#call-with-values");
C_call_with_values(4,0,t1,t2,t3);}

/* k3008 in k2959 in k2953 in k2944 in skip in k2938 in a3147 in a2546 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in ... */
static void C_ccall f_3010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("setup-download.scm:359: skip");
t2=((C_word*)((C_word*)t0)[2])[1];
f_2942(t2,((C_word*)t0)[3]);}
else{
C_trace("setup-download.scm:361: error");
t2=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],lf[110],((C_word*)t0)[4]);}}

/* setup-download#list-extensions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3410(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+24)){
C_save_and_reclaim((void*)tr4r,(void*)f_3410r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3410r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3410r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(24);
t5=C_i_get_keyword(lf[203],t4,C_SCHEME_FALSE);
t6=C_i_get_keyword(lf[205],t4,C_SCHEME_FALSE);
t7=t6;
t8=C_i_get_keyword(lf[206],t4,C_SCHEME_FALSE);
t9=t8;
t10=C_i_get_keyword(lf[143],t4,C_SCHEME_FALSE);
t11=t10;
t12=C_i_get_keyword(lf[182],t4,C_SCHEME_FALSE);
t13=t12;
t14=C_i_get_keyword(lf[144],t4,C_SCHEME_FALSE);
t15=t14;
t16=t5;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_SCHEME_FALSE;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3434,a[2]=t19,a[3]=t17,a[4]=((C_word)li61),tmp=(C_word)a,a+=5,tmp);
t21=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3439,a[2]=t2,a[3]=t3,a[4]=t7,a[5]=t9,a[6]=t11,a[7]=t13,a[8]=t15,a[9]=((C_word)li68),tmp=(C_word)a,a+=10,tmp);
t22=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3478,a[2]=t17,a[3]=t19,a[4]=((C_word)li69),tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:453: ##sys#dynamic-wind");
t23=*((C_word*)lf[214]+1);
((C_proc5)(void*)(*((C_word*)t23+1)))(5,t23,t1,t20,t21,t22);}

/* k1831 in k1825 in a1822 in a1810 in k1804 in setup-download#gather-egg-information in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in ... */
static void C_ccall f_1833(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1833,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1838,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li16),tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:140: call/cc");
t3=*((C_word*)lf[59]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[5],t2);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k2096 in k2073 in k2070 in k2067 in k2064 in a3505 in k3494 in setup-download#list-extension-versions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in ... */
static void C_ccall f_2098(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2098,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[219]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2104,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2106,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],a[5]=((C_word)li73),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2106(t7,t3,t1);}

/* a1837 in k1831 in k1825 in a1822 in a1810 in k1804 in setup-download#gather-egg-information in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in ... */
static void C_ccall f_1838(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1838,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1846,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-download.scm:142: string->symbol");
t4=*((C_word*)lf[58]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* k2092 in map-loop479 in k2096 in k2073 in k2070 in k2067 in k2064 in a3505 in k3494 in setup-download#list-extension-versions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in ... */
static void C_ccall f_2094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#string-append");
((C_proc4)C_fast_retrieve_symbol_proc(lf[220]))(4,*((C_word*)lf[220]+1),((C_word*)t0)[2],t1,lf[240]);}

/* setup-download#deconstruct-url in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_fcall f_2397(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2397,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2401,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:223: irregex-match");
t4=C_fast_retrieve(lf[98]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[99],t2);}

/* a1822 in a1810 in k1804 in setup-download#gather-egg-information in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 in ... */
static void C_ccall f_1823(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1823,4,t0,t1,t2,t3);}
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1827,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:138: make-pathname");
t6=C_fast_retrieve(lf[20]);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,t2,((C_word*)t0)[2],lf[60]);}

/* k3343 in k3337 in setup-download#retrieve-extension in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 in ... */
static void C_ccall f_3345(C_word c,C_word t0,C_word t1){
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
C_word ab[45],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3345,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=((C_word*)t0)[3];
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t0)[4];
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3350,a[2]=t9,a[3]=t11,a[4]=t13,a[5]=t3,a[6]=t5,a[7]=t7,a[8]=((C_word)li56),tmp=(C_word)a,a+=9,tmp);
t15=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3359,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[16],a[14]=((C_word)li57),tmp=(C_word)a,a+=15,tmp);
t16=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3398,a[2]=t3,a[3]=t5,a[4]=t7,a[5]=t9,a[6]=t11,a[7]=t13,a[8]=((C_word)li58),tmp=(C_word)a,a+=9,tmp);
C_trace("setup-download.scm:440: ##sys#dynamic-wind");
t17=*((C_word*)lf[214]+1);
((C_proc5)(void*)(*((C_word*)t17+1)))(5,t17,((C_word*)t0)[17],t14,t15,t16);}

/* k1825 in a1822 in a1810 in k1804 in setup-download#gather-egg-information in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in ... */
static void C_ccall f_1827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1827,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1833,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:139: file-exists?");
t4=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* for-each-loop346 in k1679 in k1583 in k1737 in a1574 in k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in ... */
static void C_fcall f_1697(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_1697,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1707,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1686,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:128: d");
f_1318(t7,lf[45],C_a_i_list(&a,1,t6));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1568 in k1553 in k1550 in a1537 in k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in ... */
static void C_ccall f_1570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("setup-download.scm:106: directory?");
t2=C_fast_retrieve(lf[23]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
C_trace("setup-download.scm:108: values");
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[5],lf[22]);}}

/* a1574 in k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in ... */
static void C_ccall f_1575(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1575,4,t0,t1,t2,t3);}
t4=t2;
t5=t3;
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1739,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
C_trace("setup-download.scm:109: file-exists?");
t7=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[4]);}

/* k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_1527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1527,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1530,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=C_retrieve2(lf[2],"setup-download#\052trunk\052");
if(C_truep(C_retrieve2(lf[2],"setup-download#\052trunk\052"))){
t5=t3;
f_1530(2,t5,C_SCHEME_FALSE);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1751,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:98: file-exists?");
t6=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}}

/* k1679 in k1583 in k1737 in a1574 in k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in ... */
static void C_ccall f_1681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1681,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[43]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1697,a[2]=t4,a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1697(t6,((C_word*)t0)[2],t1);}

/* a3433 in setup-download#list-extensions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3434,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[0],"setup-download#\052quiet\052"));
t3=C_mutate2(&lf[0] /* (set! setup-download#*quiet* ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a3438 in setup-download#list-extensions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3439(C_word c,C_word t0,C_word t1){
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
C_word t33;
C_word ab[11],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3439,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_eqp(t2,lf[210]);
if(C_truep(t3)){
t4=t1;
t5=((C_word*)t0)[3];
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1396,a[2]=t4,a[3]=t9,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:85: directory");
t11=C_fast_retrieve(lf[49]);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t5);}
else{
t4=C_eqp(t2,lf[211]);
if(C_truep(t4)){
t5=t1;
t6=((C_word*)t0)[3];
t7=C_a_i_list(&a,2,((C_word*)t0)[4],((C_word*)t0)[5]);
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_nullp(t11);
t13=(C_truep(t12)?C_SCHEME_FALSE:C_i_car(t11));
t14=t13;
t15=C_i_nullp(t11);
t16=(C_truep(t15)?C_SCHEME_END_OF_LIST:C_i_cdr(t11));
t17=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1951,a[2]=t5,a[3]=t6,a[4]=t14,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t9)){
C_trace("setup-download.scm:161: string-append");
t18=*((C_word*)lf[69]+1);
((C_proc5)(void*)(*((C_word*)t18+1)))(5,t18,t17,lf[228],t9,lf[229]);}
else{
t18=t17;
f_1951(2,t18,lf[230]);}}
else{
t5=C_eqp(t2,lf[212]);
if(C_truep(t5)){
t6=t1;
t7=((C_word*)t0)[3];
t8=((C_word*)t0)[6];
t9=((C_word*)t0)[7];
t10=((C_word*)t0)[8];
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3160,a[2]=t7,a[3]=((C_word)li64),tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3166,a[2]=t8,a[3]=t9,a[4]=t10,a[5]=((C_word)li67),tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:390: ##sys#call-with-values");
C_call_with_values(4,0,t6,t11,t12);}
else{
C_trace("setup-download.scm:464: error");
t6=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,lf[233],((C_word*)t0)[2]);}}}}

/* a2726 in k2694 in k2691 in k2688 in setup-download#make-HTTP-GET/1.1 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in ... */
static void C_ccall f_2727(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2727,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}

/* k2070 in k2067 in k2064 in a3505 in k3494 in setup-download#list-extension-versions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in ... */
static void C_ccall f_2072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2072,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2075,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:173: with-input-from-pipe");
t4=C_fast_retrieve(lf[86]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,C_fast_retrieve(lf[87]));}

/* k2073 in k2070 in k2067 in k2064 in a3505 in k3494 in setup-download#list-extension-versions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in ... */
static void C_ccall f_2075(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2075,2,t0,t1);}
if(C_truep(C_i_nullp(t1))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[239]);}
else{
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2098,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:178: with-input-from-pipe");
t7=C_fast_retrieve(lf[86]);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[3],C_fast_retrieve(lf[87]));}}

/* k1684 in for-each-loop346 in k1679 in k1583 in k1737 in a1574 in k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in ... */
static void C_ccall f_1686(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:129: delete-file*");
t2=C_fast_retrieve(lf[44]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k1856 in k1844 in a1837 in k1831 in k1825 in a1822 in a1810 in k1804 in setup-download#gather-egg-information in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in ... */
static void C_ccall f_1858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1858,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1861,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:144: g383");
t3=t1;
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_1524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1524,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1527,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace("setup-download.scm:96: make-pathname");
t4=C_fast_retrieve(lf[20]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[50]);}

/* k3204 in k3035 in k3029 in k3026 in get-files in k2938 in a3147 in a2546 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in ... */
static void C_ccall f_3206(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3206,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3210,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:409: make-property-condition");
t4=C_fast_retrieve(lf[118]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[119]);}

/* k3200 in k3035 in k3029 in k3026 in get-files in k2938 in a3147 in a2546 in a2540 in a2516 in k2507 in k2504 in k2501 in k2498 in k2495 in a2492 in setup-download#locate-egg/http in k1330 in k1311 in k1306 in k1303 in k1300 in ... */
static void C_ccall f_3202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:403: abort");
t2=C_fast_retrieve(lf[116]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2067 in k2064 in a3505 in k3494 in setup-download#list-extension-versions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in ... */
static void C_ccall f_2069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2069,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2072,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2143,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2147,a[2]=t4,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:172: string-append");
t6=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,((C_word*)t0)[5],lf[242]);}

/* k2064 in a3505 in k3494 in setup-download#list-extension-versions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in ... */
static void C_ccall f_2066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2066,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2069,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
C_trace("setup-download.scm:171: string-append");
t4=*((C_word*)lf[69]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[243],((C_word*)t0)[5],lf[244]);}
else{
t4=t3;
f_2069(2,t4,lf[245]);}}

/* k1844 in a1837 in k1831 in k1825 in a1822 in a1810 in k1804 in setup-download#gather-egg-information in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in ... */
static void C_ccall f_1846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1846,2,t0,t1);}
t2=t1;
t3=C_a_i_list2(&a,2,lf[52],((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1858,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1863,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li15),tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:144: call-with-current-continuation");
t7=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}

/* a3505 in k3494 in setup-download#list-extension-versions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 in ... */
static void C_ccall f_3506(C_word c,C_word t0,C_word t1){
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
C_word ab[12],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3506,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_eqp(t2,lf[210]);
if(C_truep(t3)){
t4=t1;
t5=((C_word*)t0)[3];
t6=((C_word*)t0)[4];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1440,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1500,a[2]=t7,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:88: string-append");
t9=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,t5,lf[238]);}
else{
t4=C_eqp(t2,lf[211]);
if(C_truep(t4)){
t5=t1;
t6=((C_word*)t0)[3];
t7=((C_word*)t0)[4];
t8=C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[6]);
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_nullp(t12);
t14=(C_truep(t13)?C_SCHEME_FALSE:C_i_car(t12));
t15=t14;
t16=C_i_nullp(t12);
t17=(C_truep(t16)?C_SCHEME_END_OF_LIST:C_i_cdr(t12));
t18=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2066,a[2]=t5,a[3]=t7,a[4]=t6,a[5]=t15,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t10)){
C_trace("setup-download.scm:170: string-append");
t19=*((C_word*)lf[69]+1);
((C_proc5)(void*)(*((C_word*)t19+1)))(5,t19,t18,lf[246],t10,lf[247]);}
else{
t19=t18;
f_2066(2,t19,lf[248]);}}
else{
C_trace("setup-download.scm:475: error");
t5=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,lf[249],((C_word*)t0)[2]);}}}

/* k1550 in a1537 in k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in ... */
static void C_ccall f_1552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1552,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1555,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[4];
if(C_truep(((C_word*)t0)[5])){
C_trace("setup-download.scm:82: warning");
t5=C_fast_retrieve(lf[25]);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,lf[26],t4,((C_word*)t0)[5]);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t3;
f_1555(2,t6,t5);}}

/* k1553 in k1550 in a1537 in k1531 in k1528 in k1525 in k1522 in setup-download#locate-egg/local in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in ... */
static void C_ccall f_1555(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1555,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1561,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1570,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:106: file-exists?");
t4=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* a3500 in k3494 in setup-download#list-extension-versions in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 in ... */
static void C_ccall f_3501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3501,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[0],"setup-download#\052quiet\052"));
t3=C_mutate2(&lf[0] /* (set! setup-download#*quiet* ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k3337 in setup-download#retrieve-extension in k3269 in k1330 in k1311 in k1306 in k1303 in k1300 in k1296 in k1293 in k1290 in k1287 in k1284 in k1281 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3339,2,t0,t1);}
t2=t1;
t3=C_i_get_keyword(lf[209],((C_word*)t0)[2],C_SCHEME_FALSE);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_3345,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t4,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],tmp=(C_word)a,a+=18,tmp);
C_trace("setup-download.scm:439: check-egg-name");
f_3293(t5,((C_word*)t0)[6]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[294] = {
{"f_1585:setup_2ddownload_2escm",(void*)f_1585},
{"f_2730:setup_2ddownload_2escm",(void*)f_2730},
{"f_2733:setup_2ddownload_2escm",(void*)f_2733},
{"f_2736:setup_2ddownload_2escm",(void*)f_2736},
{"f_3300:setup_2ddownload_2escm",(void*)f_3300},
{"f_3305:setup_2ddownload_2escm",(void*)f_3305},
{"f_3102:setup_2ddownload_2escm",(void*)f_3102},
{"f_3077:setup_2ddownload_2escm",(void*)f_3077},
{"f_2910:setup_2ddownload_2escm",(void*)f_2910},
{"f_2919:setup_2ddownload_2escm",(void*)f_2919},
{"f_2913:setup_2ddownload_2escm",(void*)f_2913},
{"f_3534:setup_2ddownload_2escm",(void*)f_3534},
{"f_2906:setup_2ddownload_2escm",(void*)f_2906},
{"f_3541:setup_2ddownload_2escm",(void*)f_3541},
{"f_3093:setup_2ddownload_2escm",(void*)f_3093},
{"f_3096:setup_2ddownload_2escm",(void*)f_3096},
{"f_3090:setup_2ddownload_2escm",(void*)f_3090},
{"f_1538:setup_2ddownload_2escm",(void*)f_1538},
{"f_3099:setup_2ddownload_2escm",(void*)f_3099},
{"f_1533:setup_2ddownload_2escm",(void*)f_1533},
{"f_1530:setup_2ddownload_2escm",(void*)f_1530},
{"f_3062:setup_2ddownload_2escm",(void*)f_3062},
{"f_1313:setup_2ddownload_2escm",(void*)f_1313},
{"f_1492:setup_2ddownload_2escm",(void*)f_1492},
{"f_2810:setup_2ddownload_2escm",(void*)f_2810},
{"f_1302:setup_2ddownload_2escm",(void*)f_1302},
{"f_1305:setup_2ddownload_2escm",(void*)f_1305},
{"f_2819:setup_2ddownload_2escm",(void*)f_2819},
{"f_2813:setup_2ddownload_2escm",(void*)f_2813},
{"f_2816:setup_2ddownload_2escm",(void*)f_2816},
{"f_1318:setup_2ddownload_2escm",(void*)f_1318},
{"f_2762:setup_2ddownload_2escm",(void*)f_2762},
{"f_2766:setup_2ddownload_2escm",(void*)f_2766},
{"f_2801:setup_2ddownload_2escm",(void*)f_2801},
{"f_1549:setup_2ddownload_2escm",(void*)f_1549},
{"f_2807:setup_2ddownload_2escm",(void*)f_2807},
{"f_2804:setup_2ddownload_2escm",(void*)f_2804},
{"f_1308:setup_2ddownload_2escm",(void*)f_1308},
{"f_3166:setup_2ddownload_2escm",(void*)f_3166},
{"f_3160:setup_2ddownload_2escm",(void*)f_3160},
{"f_2719:setup_2ddownload_2escm",(void*)f_2719},
{"f_2715:setup_2ddownload_2escm",(void*)f_2715},
{"f_3172:setup_2ddownload_2escm",(void*)f_3172},
{"f_2210:setup_2ddownload_2escm",(void*)f_2210},
{"f_3186:setup_2ddownload_2escm",(void*)f_3186},
{"f_3180:setup_2ddownload_2escm",(void*)f_3180},
{"f_2774:setup_2ddownload_2escm",(void*)f_2774},
{"f_2219:setup_2ddownload_2escm",(void*)f_2219},
{"f_3182:setup_2ddownload_2escm",(void*)f_3182},
{"f_2216:setup_2ddownload_2escm",(void*)f_2216},
{"f_2778:setup_2ddownload_2escm",(void*)f_2778},
{"f_2213:setup_2ddownload_2escm",(void*)f_2213},
{"f_3189:setup_2ddownload_2escm",(void*)f_3189},
{"f_1344:setup_2ddownload_2escm",(void*)f_1344},
{"f_2207:setup_2ddownload_2escm",(void*)f_2207},
{"f_3115:setup_2ddownload_2escm",(void*)f_3115},
{"f_3113:setup_2ddownload_2escm",(void*)f_3113},
{"f_1334:setup_2ddownload_2escm",(void*)f_1334},
{"f_1332:setup_2ddownload_2escm",(void*)f_1332},
{"f_1347:setup_2ddownload_2escm",(void*)f_1347},
{"f_1349:setup_2ddownload_2escm",(void*)f_1349},
{"f_2551:setup_2ddownload_2escm",(void*)f_2551},
{"f_2751:setup_2ddownload_2escm",(void*)f_2751},
{"f_1500:setup_2ddownload_2escm",(void*)f_1500},
{"f_1502:setup_2ddownload_2escm",(void*)f_1502},
{"f_1325:setup_2ddownload_2escm",(void*)f_1325},
{"f_1338:setup_2ddownload_2escm",(void*)f_1338},
{"f_2783:setup_2ddownload_2escm",(void*)f_2783},
{"f_2255:setup_2ddownload_2escm",(void*)f_2255},
{"f_2259:setup_2ddownload_2escm",(void*)f_2259},
{"f_1365:setup_2ddownload_2escm",(void*)f_1365},
{"f_1735:setup_2ddownload_2escm",(void*)f_1735},
{"f_2241:setup_2ddownload_2escm",(void*)f_2241},
{"f_2990:setup_2ddownload_2escm",(void*)f_2990},
{"f_1720:setup_2ddownload_2escm",(void*)f_1720},
{"f_1739:setup_2ddownload_2escm",(void*)f_1739},
{"f_2797:setup_2ddownload_2escm",(void*)f_2797},
{"f_2238:setup_2ddownload_2escm",(void*)f_2238},
{"f_2512:setup_2ddownload_2escm",(void*)f_2512},
{"f_2517:setup_2ddownload_2escm",(void*)f_2517},
{"f_2987:setup_2ddownload_2escm",(void*)f_2987},
{"f_2222:setup_2ddownload_2escm",(void*)f_2222},
{"f_1728:setup_2ddownload_2escm",(void*)f_1728},
{"f_2227:setup_2ddownload_2escm",(void*)f_2227},
{"f_2583:setup_2ddownload_2escm",(void*)f_2583},
{"f_2587:setup_2ddownload_2escm",(void*)f_2587},
{"f3750:setup_2ddownload_2escm",(void*)f3750},
{"f_2497:setup_2ddownload_2escm",(void*)f_2497},
{"f_2493:setup_2ddownload_2escm",(void*)f_2493},
{"f_1430:setup_2ddownload_2escm",(void*)f_1430},
{"f_2965:setup_2ddownload_2escm",(void*)f_2965},
{"f_2969:setup_2ddownload_2escm",(void*)f_2969},
{"f_2961:setup_2ddownload_2escm",(void*)f_2961},
{"f_1298:setup_2ddownload_2escm",(void*)f_1298},
{"f_1295:setup_2ddownload_2escm",(void*)f_1295},
{"f_3478:setup_2ddownload_2escm",(void*)f_3478},
{"f_1292:setup_2ddownload_2escm",(void*)f_1292},
{"f_2893:setup_2ddownload_2escm",(void*)f_2893},
{"f_2563:setup_2ddownload_2escm",(void*)f_2563},
{"f_2955:setup_2ddownload_2escm",(void*)f_2955},
{"f_2569:setup_2ddownload_2escm",(void*)f_2569},
{"f_3483:setup_2ddownload_2escm",(void*)f_3483},
{"f_2899:setup_2ddownload_2escm",(void*)f_2899},
{"f_2883:setup_2ddownload_2escm",(void*)f_2883},
{"f_2942:setup_2ddownload_2escm",(void*)f_2942},
{"f_2946:setup_2ddownload_2escm",(void*)f_2946},
{"f_2940:setup_2ddownload_2escm",(void*)f_2940},
{"f3746:setup_2ddownload_2escm",(void*)f3746},
{"f_2872:setup_2ddownload_2escm",(void*)f_2872},
{"f_2428:setup_2ddownload_2escm",(void*)f_2428},
{"f_2877:setup_2ddownload_2escm",(void*)f_2877},
{"f_2425:setup_2ddownload_2escm",(void*)f_2425},
{"f_1446:setup_2ddownload_2escm",(void*)f_1446},
{"f_1440:setup_2ddownload_2escm",(void*)f_1440},
{"f_2931:setup_2ddownload_2escm",(void*)f_2931},
{"f_2868:setup_2ddownload_2escm",(void*)f_2868},
{"f_2922:setup_2ddownload_2escm",(void*)f_2922},
{"f_2928:setup_2ddownload_2escm",(void*)f_2928},
{"f_2925:setup_2ddownload_2escm",(void*)f_2925},
{"f_2487:setup_2ddownload_2escm",(void*)f_2487},
{"f_2856:setup_2ddownload_2escm",(void*)f_2856},
{"f_2850:setup_2ddownload_2escm",(void*)f_2850},
{"f_2844:setup_2ddownload_2escm",(void*)f_2844},
{"f_2846:setup_2ddownload_2escm",(void*)f_2846},
{"f_2840:setup_2ddownload_2escm",(void*)f_2840},
{"f_1401:setup_2ddownload_2escm",(void*)f_1401},
{"f_2837:setup_2ddownload_2escm",(void*)f_2837},
{"f_2834:setup_2ddownload_2escm",(void*)f_2834},
{"f_3496:setup_2ddownload_2escm",(void*)f_3496},
{"f_2822:setup_2ddownload_2escm",(void*)f_2822},
{"f_2825:setup_2ddownload_2escm",(void*)f_2825},
{"f_2143:setup_2ddownload_2escm",(void*)f_2143},
{"f_2147:setup_2ddownload_2escm",(void*)f_2147},
{"f_2135:setup_2ddownload_2escm",(void*)f_2135},
{"f_1399:setup_2ddownload_2escm",(void*)f_1399},
{"f_1396:setup_2ddownload_2escm",(void*)f_1396},
{"f_2295:setup_2ddownload_2escm",(void*)f_2295},
{"f_2281:setup_2ddownload_2escm",(void*)f_2281},
{"f_2285:setup_2ddownload_2escm",(void*)f_2285},
{"f_2289:setup_2ddownload_2escm",(void*)f_2289},
{"toplevel:setup_2ddownload_2escm",(void*)C_toplevel},
{"f_3250:setup_2ddownload_2escm",(void*)f_3250},
{"f_3253:setup_2ddownload_2escm",(void*)f_3253},
{"f_3256:setup_2ddownload_2escm",(void*)f_3256},
{"f_2262:setup_2ddownload_2escm",(void*)f_2262},
{"f_2265:setup_2ddownload_2escm",(void*)f_2265},
{"f_3267:setup_2ddownload_2escm",(void*)f_3267},
{"f_3271:setup_2ddownload_2escm",(void*)f_3271},
{"f_3287:setup_2ddownload_2escm",(void*)f_3287},
{"f_1634:setup_2ddownload_2escm",(void*)f_1634},
{"f_1631:setup_2ddownload_2escm",(void*)f_1631},
{"f_1637:setup_2ddownload_2escm",(void*)f_1637},
{"f_3214:setup_2ddownload_2escm",(void*)f_3214},
{"f_3210:setup_2ddownload_2escm",(void*)f_3210},
{"f_1707:setup_2ddownload_2escm",(void*)f_1707},
{"f_2321:setup_2ddownload_2escm",(void*)f_2321},
{"f_1625:setup_2ddownload_2escm",(void*)f_1625},
{"f_1622:setup_2ddownload_2escm",(void*)f_1622},
{"f_2325:setup_2ddownload_2escm",(void*)f_2325},
{"f_1764:setup_2ddownload_2escm",(void*)f_1764},
{"f_2541:setup_2ddownload_2escm",(void*)f_2541},
{"f_3222:setup_2ddownload_2escm",(void*)f_3222},
{"f_2547:setup_2ddownload_2escm",(void*)f_2547},
{"f_2312:setup_2ddownload_2escm",(void*)f_2312},
{"f_2319:setup_2ddownload_2escm",(void*)f_2319},
{"f_1751:setup_2ddownload_2escm",(void*)f_1751},
{"f_2533:setup_2ddownload_2escm",(void*)f_2533},
{"f_2302:setup_2ddownload_2escm",(void*)f_2302},
{"f_3350:setup_2ddownload_2escm",(void*)f_3350},
{"f_3359:setup_2ddownload_2escm",(void*)f_3359},
{"f_2529:setup_2ddownload_2escm",(void*)f_2529},
{"f_1757:setup_2ddownload_2escm",(void*)f_1757},
{"f_2523:setup_2ddownload_2escm",(void*)f_2523},
{"f_3398:setup_2ddownload_2escm",(void*)f_3398},
{"f_2503:setup_2ddownload_2escm",(void*)f_2503},
{"f_2509:setup_2ddownload_2escm",(void*)f_2509},
{"f_2506:setup_2ddownload_2escm",(void*)f_2506},
{"f_2676:setup_2ddownload_2escm",(void*)f_2676},
{"f_2500:setup_2ddownload_2escm",(void*)f_2500},
{"f_2412:setup_2ddownload_2escm",(void*)f_2412},
{"f_2416:setup_2ddownload_2escm",(void*)f_2416},
{"f_3031:setup_2ddownload_2escm",(void*)f_3031},
{"f_3037:setup_2ddownload_2escm",(void*)f_3037},
{"f_2445:setup_2ddownload_2escm",(void*)f_2445},
{"f_3083:setup_2ddownload_2escm",(void*)f_3083},
{"f_3080:setup_2ddownload_2escm",(void*)f_3080},
{"f_2335:setup_2ddownload_2escm",(void*)f_2335},
{"f_3059:setup_2ddownload_2escm",(void*)f_3059},
{"f_1985:setup_2ddownload_2escm",(void*)f_1985},
{"f_1271:setup_2ddownload_2escm",(void*)f_1271},
{"f_1274:setup_2ddownload_2escm",(void*)f_1274},
{"f_1277:setup_2ddownload_2escm",(void*)f_1277},
{"f_1983:setup_2ddownload_2escm",(void*)f_1983},
{"f_3024:setup_2ddownload_2escm",(void*)f_3024},
{"f_3028:setup_2ddownload_2escm",(void*)f_3028},
{"f_1977:setup_2ddownload_2escm",(void*)f_1977},
{"f_1973:setup_2ddownload_2escm",(void*)f_1973},
{"f_1811:setup_2ddownload_2escm",(void*)f_1811},
{"f_2408:setup_2ddownload_2escm",(void*)f_2408},
{"f_1817:setup_2ddownload_2escm",(void*)f_1817},
{"f_3192:setup_2ddownload_2escm",(void*)f_3192},
{"f_2401:setup_2ddownload_2escm",(void*)f_2401},
{"f_1960:setup_2ddownload_2escm",(void*)f_1960},
{"f_2696:setup_2ddownload_2escm",(void*)f_2696},
{"f_2693:setup_2ddownload_2escm",(void*)f_2693},
{"f_2690:setup_2ddownload_2escm",(void*)f_2690},
{"f_1957:setup_2ddownload_2escm",(void*)f_1957},
{"f_1806:setup_2ddownload_2escm",(void*)f_1806},
{"f_1802:setup_2ddownload_2escm",(void*)f_1802},
{"f_1951:setup_2ddownload_2escm",(void*)f_1951},
{"f_1954:setup_2ddownload_2escm",(void*)f_1954},
{"f_2699:setup_2ddownload_2escm",(void*)f_2699},
{"f_2686:setup_2ddownload_2escm",(void*)f_2686},
{"f_2684:setup_2ddownload_2escm",(void*)f_2684},
{"f_1597:setup_2ddownload_2escm",(void*)f_1597},
{"f_2680:setup_2ddownload_2escm",(void*)f_2680},
{"f_1594:setup_2ddownload_2escm",(void*)f_1594},
{"f_1908:setup_2ddownload_2escm",(void*)f_1908},
{"f_3293:setup_2ddownload_2escm",(void*)f_3293},
{"f_1262:setup_2ddownload_2escm",(void*)f_1262},
{"f_1655:setup_2ddownload_2escm",(void*)f_1655},
{"f_1265:setup_2ddownload_2escm",(void*)f_1265},
{"f_1652:setup_2ddownload_2escm",(void*)f_1652},
{"f_3142:setup_2ddownload_2escm",(void*)f_3142},
{"f_1268:setup_2ddownload_2escm",(void*)f_1268},
{"f_3148:setup_2ddownload_2escm",(void*)f_3148},
{"f_1658:setup_2ddownload_2escm",(void*)f_1658},
{"f_1902:setup_2ddownload_2escm",(void*)f_1902},
{"f_2106:setup_2ddownload_2escm",(void*)f_2106},
{"f_2104:setup_2ddownload_2escm",(void*)f_2104},
{"f_1640:setup_2ddownload_2escm",(void*)f_1640},
{"f_1646:setup_2ddownload_2escm",(void*)f_1646},
{"f_1923:setup_2ddownload_2escm",(void*)f_1923},
{"f_1280:setup_2ddownload_2escm",(void*)f_1280},
{"f_1283:setup_2ddownload_2escm",(void*)f_1283},
{"f_1672:setup_2ddownload_2escm",(void*)f_1672},
{"f_1675:setup_2ddownload_2escm",(void*)f_1675},
{"f_1286:setup_2ddownload_2escm",(void*)f_1286},
{"f_1289:setup_2ddownload_2escm",(void*)f_1289},
{"f_1661:setup_2ddownload_2escm",(void*)f_1661},
{"f_2014:setup_2ddownload_2escm",(void*)f_2014},
{"f_1668:setup_2ddownload_2escm",(void*)f_1668},
{"f_1606:setup_2ddownload_2escm",(void*)f_1606},
{"f_1603:setup_2ddownload_2escm",(void*)f_1603},
{"f_1600:setup_2ddownload_2escm",(void*)f_1600},
{"f_1458:setup_2ddownload_2escm",(void*)f_1458},
{"f_1875:setup_2ddownload_2escm",(void*)f_1875},
{"f_1879:setup_2ddownload_2escm",(void*)f_1879},
{"f_1861:setup_2ddownload_2escm",(void*)f_1861},
{"f_1863:setup_2ddownload_2escm",(void*)f_1863},
{"f_1869:setup_2ddownload_2escm",(void*)f_1869},
{"f_1461:setup_2ddownload_2escm",(void*)f_1461},
{"f_1463:setup_2ddownload_2escm",(void*)f_1463},
{"f_1890:setup_2ddownload_2escm",(void*)f_1890},
{"f_1896:setup_2ddownload_2escm",(void*)f_1896},
{"f_1561:setup_2ddownload_2escm",(void*)f_1561},
{"f_3244:setup_2ddownload_2escm",(void*)f_3244},
{"f_2179:setup_2ddownload_2escm",(void*)f_2179},
{"f_3407:setup_2ddownload_2escm",(void*)f_3407},
{"f_1884:setup_2ddownload_2escm",(void*)f_1884},
{"f_3010:setup_2ddownload_2escm",(void*)f_3010},
{"f_3410:setup_2ddownload_2escm",(void*)f_3410},
{"f_1833:setup_2ddownload_2escm",(void*)f_1833},
{"f_2098:setup_2ddownload_2escm",(void*)f_2098},
{"f_1838:setup_2ddownload_2escm",(void*)f_1838},
{"f_2094:setup_2ddownload_2escm",(void*)f_2094},
{"f_2397:setup_2ddownload_2escm",(void*)f_2397},
{"f_1823:setup_2ddownload_2escm",(void*)f_1823},
{"f_3345:setup_2ddownload_2escm",(void*)f_3345},
{"f_1827:setup_2ddownload_2escm",(void*)f_1827},
{"f_1697:setup_2ddownload_2escm",(void*)f_1697},
{"f_1570:setup_2ddownload_2escm",(void*)f_1570},
{"f_1575:setup_2ddownload_2escm",(void*)f_1575},
{"f_1527:setup_2ddownload_2escm",(void*)f_1527},
{"f_1681:setup_2ddownload_2escm",(void*)f_1681},
{"f_3434:setup_2ddownload_2escm",(void*)f_3434},
{"f_3439:setup_2ddownload_2escm",(void*)f_3439},
{"f_2727:setup_2ddownload_2escm",(void*)f_2727},
{"f_2072:setup_2ddownload_2escm",(void*)f_2072},
{"f_2075:setup_2ddownload_2escm",(void*)f_2075},
{"f_1686:setup_2ddownload_2escm",(void*)f_1686},
{"f_1858:setup_2ddownload_2escm",(void*)f_1858},
{"f_1524:setup_2ddownload_2escm",(void*)f_1524},
{"f_3206:setup_2ddownload_2escm",(void*)f_3206},
{"f_3202:setup_2ddownload_2escm",(void*)f_3202},
{"f_2069:setup_2ddownload_2escm",(void*)f_2069},
{"f_2066:setup_2ddownload_2escm",(void*)f_2066},
{"f_1846:setup_2ddownload_2escm",(void*)f_1846},
{"f_3506:setup_2ddownload_2escm",(void*)f_3506},
{"f_1552:setup_2ddownload_2escm",(void*)f_1552},
{"f_1555:setup_2ddownload_2escm",(void*)f_1555},
{"f_3501:setup_2ddownload_2escm",(void*)f_3501},
{"f_3339:setup_2ddownload_2escm",(void*)f_3339},
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
o|hiding nonexported module bindings: setup-download#constant148 
o|hiding nonexported module bindings: setup-download#*quiet* 
o|hiding nonexported module bindings: setup-download#*chicken-install-user-agent* 
o|hiding nonexported module bindings: setup-download#*trunk* 
o|hiding nonexported module bindings: setup-download#*mode* 
o|hiding nonexported module bindings: setup-download#*windows-shell* 
o|hiding nonexported module bindings: setup-download#d 
o|hiding nonexported module bindings: setup-download#get-temporary-directory 
o|hiding nonexported module bindings: setup-download#existing-version 
o|hiding nonexported module bindings: setup-download#when-no-such-version-warning 
o|hiding nonexported module bindings: setup-download#list-eggs/local 
o|hiding nonexported module bindings: setup-download#list-egg-versions/local 
o|hiding nonexported module bindings: setup-download#make-svn-ls-cmd 
o|hiding nonexported module bindings: setup-download#make-svn-export-cmd 
o|hiding nonexported module bindings: setup-download#list-eggs/svn 
o|hiding nonexported module bindings: setup-download#list-egg-versions/svn 
o|hiding nonexported module bindings: setup-download#metafile 
o|hiding nonexported module bindings: setup-download#deconstruct-url 
o|hiding nonexported module bindings: setup-download#network-failure 
o|hiding nonexported module bindings: setup-download#make-HTTP-GET/1.1 
o|hiding nonexported module bindings: setup-download#match-http-response 
o|hiding nonexported module bindings: setup-download#response-match-code? 
o|hiding nonexported module bindings: setup-download#match-chunked-transfer-encoding 
o|hiding nonexported module bindings: setup-download#http-connect 
o|hiding nonexported module bindings: setup-download#http-retrieve-files 
o|hiding nonexported module bindings: setup-download#http-fetch 
o|hiding nonexported module bindings: setup-download#list-eggs/http 
o|hiding nonexported module bindings: setup-download#throw-server-error 
o|hiding nonexported module bindings: setup-download#read-chunks 
o|hiding nonexported module bindings: setup-download#slashes 
o|hiding nonexported module bindings: setup-download#valid-extension-name? 
o|hiding nonexported module bindings: setup-download#check-egg-name 
S|applied compiler syntax:
S|  for-each		1
S|  sprintf		3
S|  map		4
o|eliminated procedure checks: 39 
o|specializations:
o|  8 (eqv? * (not float))
o|  1 (cddr (pair * pair))
o|  1 (string=? string string)
o|  2 (string-append string string)
o|  2 (zero? fixnum)
o|  3 (##sys#check-output-port * * *)
o|  2 (##sys#check-list (or pair list) *)
o|  2 (car pair)
o|  1 (current-output-port)
o|  1 (current-error-port)
o|Removed `not' forms: 4 
o|merged explicitly consed rest parameter: args158 
o|inlining procedure: k1339 
o|inlining procedure: k1339 
o|inlining procedure: k1351 
o|inlining procedure: k1351 
o|inlining procedure: k1376 
o|inlining procedure: k1376 
o|inlining procedure: k1540 
o|inlining procedure: k1540 
o|inlining procedure: k1577 
o|inlining procedure: k1577 
o|inlining procedure: k1607 
o|inlining procedure: k1607 
o|consed rest parameter at call site: "(setup-download.scm:118) setup-download#d" 2 
o|substituted constant variable: a1627 
o|substituted constant variable: a1628 
o|substituted constant variable: a1648 
o|substituted constant variable: a1649 
o|inlining procedure: k1673 
o|inlining procedure: k1699 
o|contracted procedure: "(setup-download.scm:125) g347354" 
o|consed rest parameter at call site: "(setup-download.scm:128) setup-download#d" 2 
o|inlining procedure: k1699 
o|propagated global variable: g342343 string-suffix? 
o|inlining procedure: k1673 
o|contracted procedure: k1743 
o|propagated global variable: r1744 setup-download#*trunk* 
o|inlining procedure: k1746 
o|inlining procedure: k1746 
o|inlining procedure: k1828 
o|inlining procedure: k1828 
o|merged explicitly consed rest parameter: tmp394398 
o|inlining procedure: k2229 
o|inlining procedure: k2229 
o|inlining procedure: k2266 
o|inlining procedure: k2266 
o|consed rest parameter at call site: "(setup-download.scm:214) setup-download#d" 2 
o|contracted procedure: "(setup-download.scm:202) setup-download#make-svn-export-cmd" 
o|inlining procedure: "(setup-download.scm:212) setup-download#metafile" 
o|inlining procedure: k2300 
o|inlining procedure: "(setup-download.scm:207) setup-download#metafile" 
o|inlining procedure: k2300 
o|inlining procedure: k2310 
o|inlining procedure: k2310 
o|inlining procedure: k2326 
o|inlining procedure: k2326 
o|consed rest parameter at call site: "(setup-download.scm:184) setup-download#d" 2 
o|consed rest parameter at call site: "(setup-download.scm:183) setup-download#make-svn-ls-cmd" 4 
o|inlining procedure: k2417 
o|inlining procedure: k2417 
o|inlining procedure: k2432 
o|inlining procedure: k2432 
o|substituted constant variable: setup-download#constant148 
o|inlining procedure: k2531 
o|inlining procedure: k2531 
o|inlining procedure: k2556 
o|inlining procedure: k2556 
o|contracted procedure: "(setup-download.scm:252) setup-download#http-fetch" 
o|contracted procedure: "(setup-download.scm:388) setup-download#http-retrieve-files" 
o|inlining procedure: k2947 
o|inlining procedure: k2947 
o|inlining procedure: k2976 
o|inlining procedure: k2976 
o|substituted constant variable: a3000 
o|inlining procedure: k3005 
o|inlining procedure: k3005 
o|inlining procedure: k3032 
o|contracted procedure: "(setup-download.scm:367) setup-download#throw-server-error" 
o|inlining procedure: k3032 
o|contracted procedure: k3066 
o|inlining procedure: k3063 
o|consed rest parameter at call site: "(setup-download.scm:375) setup-download#d" 2 
o|consed rest parameter at call site: "(setup-download.scm:379) setup-download#d" 2 
o|inlining procedure: k3063 
o|consed rest parameter at call site: "(setup-download.scm:341) setup-download#d" 2 
o|inlining procedure: k2589 
o|inlining procedure: k2589 
o|merged explicitly consed rest parameter: tmp629633 
o|inlining procedure: k2753 
o|inlining procedure: k2753 
o|inlining procedure: k2793 
o|inlining procedure: k2793 
o|inlining procedure: k2826 
o|contracted procedure: "(setup-download.scm:335) setup-download#read-chunks" 
o|contracted procedure: k3230 
o|inlining procedure: k3227 
o|consed rest parameter at call site: "(setup-download.scm:417) setup-download#d" 2 
o|consed rest parameter at call site: "(setup-download.scm:421) setup-download#d" 2 
o|inlining procedure: k3227 
o|consed rest parameter at call site: "(setup-download.scm:334) setup-download#d" 2 
o|inlining procedure: k2826 
o|inlining procedure: k2851 
o|inlining procedure: k2851 
o|consed rest parameter at call site: "(setup-download.scm:331) setup-download#d" 2 
o|contracted procedure: "(setup-download.scm:330) setup-download#match-chunked-transfer-encoding" 
o|consed rest parameter at call site: "(setup-download.scm:320) setup-download#make-HTTP-GET/1.1" 4 
o|inlining procedure: k2894 
o|inlining procedure: k2894 
o|contracted procedure: "(setup-download.scm:326) setup-download#network-failure" 
o|consed rest parameter at call site: "(setup-download.scm:314) setup-download#d" 2 
o|contracted procedure: "(setup-download.scm:313) setup-download#match-http-response" 
o|inlining procedure: k2741 
o|inlining procedure: k2741 
o|consed rest parameter at call site: "(setup-download.scm:310) setup-download#d" 2 
o|consed rest parameter at call site: "(setup-download.scm:306) setup-download#make-HTTP-GET/1.1" 4 
o|consed rest parameter at call site: "(setup-download.scm:304) setup-download#d" 2 
o|consed rest parameter at call site: "(setup-download.scm:299) setup-download#d" 2 
o|substituted constant variable: a2915 
o|substituted constant variable: a2916 
o|inlining procedure: k2908 
o|consed rest parameter at call site: "(setup-download.scm:299) setup-download#d" 2 
o|inlining procedure: k2908 
o|consed rest parameter at call site: "(setup-download.scm:299) setup-download#d" 2 
o|inlining procedure: k3295 
o|inlining procedure: k3295 
o|contracted procedure: "(setup-download.scm:432) setup-download#valid-extension-name?" 
o|contracted procedure: k3278 
o|inlining procedure: k3275 
o|inlining procedure: k3275 
o|inlining procedure: k3361 
o|inlining procedure: k3361 
o|inlining procedure: k3379 
o|inlining procedure: k3379 
o|substituted constant variable: a3392 
o|substituted constant variable: a3394 
o|substituted constant variable: a3396 
o|inlining procedure: k3441 
o|contracted procedure: "(setup-download.scm:458) setup-download#list-eggs/local" 
o|inlining procedure: k1403 
o|contracted procedure: "(setup-download.scm:85) g187196" 
o|inlining procedure: k1403 
o|inlining procedure: k3441 
o|contracted procedure: "(setup-download.scm:460) setup-download#list-eggs/svn" 
o|inlining procedure: k1987 
o|contracted procedure: "(setup-download.scm:166) g434443" 
o|substituted constant variable: a1974 
o|inlining procedure: k1987 
o|consed rest parameter at call site: "(setup-download.scm:164) setup-download#d" 2 
o|consed rest parameter at call site: "(setup-download.scm:163) setup-download#make-svn-ls-cmd" 4 
o|inlining procedure: k3459 
o|contracted procedure: "(setup-download.scm:462) setup-download#list-eggs/http" 
o|inlining procedure: k3459 
o|substituted constant variable: a3472 
o|substituted constant variable: a3474 
o|substituted constant variable: a3476 
o|inlining procedure: k3508 
o|contracted procedure: "(setup-download.scm:471) setup-download#list-egg-versions/local" 
o|inlining procedure: k1441 
o|inlining procedure: k1465 
o|contracted procedure: "(setup-download.scm:91) g229238" 
o|inlining procedure: k1465 
o|inlining procedure: k1441 
o|inlining procedure: k3508 
o|contracted procedure: "(setup-download.scm:473) setup-download#list-egg-versions/svn" 
o|inlining procedure: k2076 
o|inlining procedure: k2076 
o|inlining procedure: k2108 
o|contracted procedure: "(setup-download.scm:177) g485494" 
o|substituted constant variable: a2095 
o|inlining procedure: k2108 
o|consed rest parameter at call site: "(setup-download.scm:172) setup-download#make-svn-ls-cmd" 4 
o|substituted constant variable: a3530 
o|substituted constant variable: a3532 
o|replaced variables: 356 
o|removed binding forms: 178 
o|removed side-effect free assignment to unused variable: setup-download#constant148 
o|substituted constant variable: r17473567 
o|substituted constant variable: r18293569 
o|substituted constant variable: r23273595 
o|removed side-effect free assignment to unused variable: setup-download#metafile 
o|substituted constant variable: r24183598 
o|substituted constant variable: r24183598 
o|inlining procedure: k2556 
o|inlining procedure: k2556 
o|inlining procedure: k2976 
o|inlining procedure: k2976 
o|substituted constant variable: r25903634 
o|substituted constant variable: r25903634 
o|substituted constant variable: r25903636 
o|substituted constant variable: r25903636 
o|removed call to pure procedure with unused result: "(setup-download.scm:265) get-keyword" 
o|substituted constant variable: r27543639 
o|substituted constant variable: r27423661 
o|substituted constant variable: r29093664 
o|substituted constant variable: r29093664 
o|substituted constant variable: r32763668 
o|substituted constant variable: r14423686 
o|substituted constant variable: r20773688 
o|replaced variables: 21 
o|removed binding forms: 383 
o|inlining procedure: "(setup-download.scm:105) setup-download#when-no-such-version-warning" 
o|inlining procedure: "(setup-download.scm:197) setup-download#when-no-such-version-warning" 
o|contracted procedure: k2703 
o|inlining procedure: k2857 
o|inlining procedure: k2857 
o|replaced variables: 17 
o|removed binding forms: 53 
o|removed side-effect free assignment to unused variable: setup-download#when-no-such-version-warning 
o|substituted constant variable: r25573698 
o|replaced variables: 10 
o|removed binding forms: 19 
o|removed binding forms: 8 
o|simplifications: ((if . 41) (##core#call . 193)) 
o|  call simplifications:
o|    ##sys#setslot	4
o|    zero?
o|    string?	2
o|    read-string	2
o|    cadr
o|    eof-object?	2
o|    string=?	3
o|    string->number	2
o|    ##sys#get-keyword	23
o|    list
o|    ##sys#apply	2
o|    cons	8
o|    car	17
o|    null?	35
o|    cdr	17
o|    ##sys#call-with-values	11
o|    not	5
o|    ##sys#check-list	3
o|    ##sys#slot	10
o|    eq?	13
o|    values	20
o|    pair?	7
o|    member	3
o|    apply
o|contracted procedure: k1320 
o|contracted procedure: k1357 
o|contracted procedure: k1369 
o|contracted procedure: k1795 
o|contracted procedure: k1504 
o|contracted procedure: k1789 
o|contracted procedure: k1507 
o|contracted procedure: k1783 
o|contracted procedure: k1510 
o|contracted procedure: k1777 
o|contracted procedure: k1513 
o|contracted procedure: k1771 
o|contracted procedure: k1516 
o|contracted procedure: k1765 
o|contracted procedure: k1519 
o|inlining procedure: k1559 
o|contracted procedure: k1580 
o|contracted procedure: k1610 
o|contracted procedure: k1690 
o|contracted procedure: k1702 
o|contracted procedure: k1712 
o|contracted procedure: k1716 
o|contracted procedure: k1852 
o|contracted procedure: k1848 
o|contracted procedure: k1910 
o|contracted procedure: k1917 
o|contracted procedure: k2384 
o|contracted procedure: k2181 
o|contracted procedure: k2378 
o|contracted procedure: k2184 
o|contracted procedure: k2372 
o|contracted procedure: k2187 
o|contracted procedure: k2366 
o|contracted procedure: k2190 
o|contracted procedure: k2360 
o|contracted procedure: k2193 
o|contracted procedure: k2354 
o|contracted procedure: k2196 
o|contracted procedure: k2348 
o|contracted procedure: k2199 
o|contracted procedure: k2342 
o|contracted procedure: k2202 
o|contracted procedure: k2245 
o|contracted procedure: k2269 
o|contracted procedure: k1931 
o|contracted procedure: k2290 
o|contracted procedure: k2303 
o|contracted procedure: k2429 
o|contracted procedure: k2661 
o|contracted procedure: k2447 
o|contracted procedure: k2655 
o|contracted procedure: k2450 
o|contracted procedure: k2649 
o|contracted procedure: k2453 
o|contracted procedure: k2643 
o|contracted procedure: k2456 
o|contracted procedure: k2637 
o|contracted procedure: k2459 
o|contracted procedure: k2631 
o|contracted procedure: k2462 
o|contracted procedure: k2625 
o|contracted procedure: k2465 
o|contracted procedure: k2619 
o|contracted procedure: k2468 
o|contracted procedure: k2613 
o|contracted procedure: k2471 
o|contracted procedure: k2607 
o|contracted procedure: k2474 
o|contracted procedure: k2601 
o|contracted procedure: k2477 
o|contracted procedure: k2595 
o|contracted procedure: k2480 
o|contracted procedure: k2950 
o|contracted procedure: k2970 
o|contracted procedure: k2973 
o|contracted procedure: k2997 
o|contracted procedure: k3042 
o|contracted procedure: k3051 
o|contracted procedure: k3054 
o|contracted procedure: k3121 
o|contracted procedure: k3107 
o|contracted procedure: k3127 
o|contracted procedure: k2700 
o|contracted procedure: k2706 
o|contracted procedure: k2789 
o|contracted procedure: k3224 
o|contracted procedure: k3239 
o|contracted procedure: k3261 
o|contracted procedure: k2744 
o|contracted procedure: k3289 
o|contracted procedure: k3307 
o|contracted procedure: k3310 
o|contracted procedure: k3313 
o|contracted procedure: k3316 
o|contracted procedure: k3319 
o|contracted procedure: k3322 
o|contracted procedure: k3325 
o|contracted procedure: k3328 
o|contracted procedure: k3331 
o|contracted procedure: k3334 
o|contracted procedure: k3340 
o|contracted procedure: k3364 
o|contracted procedure: k3373 
o|contracted procedure: k3382 
o|contracted procedure: k3412 
o|contracted procedure: k3415 
o|contracted procedure: k3418 
o|contracted procedure: k3421 
o|contracted procedure: k3424 
o|contracted procedure: k3427 
o|contracted procedure: k3444 
o|contracted procedure: k1406 
o|contracted procedure: k1409 
o|contracted procedure: k1420 
o|contracted procedure: k1432 
o|contracted procedure: k3453 
o|contracted procedure: k2043 
o|contracted procedure: k1937 
o|contracted procedure: k2037 
o|contracted procedure: k1940 
o|contracted procedure: k2031 
o|contracted procedure: k1943 
o|contracted procedure: k2025 
o|contracted procedure: k1946 
o|contracted procedure: k1978 
o|contracted procedure: k1990 
o|contracted procedure: k1993 
o|contracted procedure: k2004 
o|contracted procedure: k2016 
o|contracted procedure: k3462 
o|contracted procedure: k3485 
o|contracted procedure: k3488 
o|contracted procedure: k3491 
o|contracted procedure: k3511 
o|contracted procedure: k1468 
o|contracted procedure: k1471 
o|contracted procedure: k1482 
o|contracted procedure: k1494 
o|contracted procedure: k3520 
o|contracted procedure: k2172 
o|contracted procedure: k2052 
o|contracted procedure: k2166 
o|contracted procedure: k2055 
o|contracted procedure: k2160 
o|contracted procedure: k2058 
o|contracted procedure: k2154 
o|contracted procedure: k2061 
o|contracted procedure: k2079 
o|contracted procedure: k2099 
o|contracted procedure: k2111 
o|contracted procedure: k2114 
o|contracted procedure: k2125 
o|contracted procedure: k2137 
o|simplifications: ((if . 1) (let . 13)) 
o|removed binding forms: 152 
o|substituted constant variable: r15603834 
o|inlining procedure: k2239 
o|inlining procedure: k1412 
o|inlining procedure: k1412 
o|inlining procedure: k1996 
o|inlining procedure: k1996 
o|inlining procedure: k1474 
o|inlining procedure: k1474 
o|inlining procedure: k2117 
o|inlining procedure: k2117 
o|replaced variables: 102 
o|removed conditional forms: 1 
o|removed binding forms: 47 
o|replaced variables: 16 
o|removed binding forms: 1 
o|removed binding forms: 4 
o|customizable procedures: (map-loop479497 map-loop223248 map-loop428446 map-loop181206 setup-download#check-egg-name setup-download#response-match-code? setup-download#make-HTTP-GET/1.1 loop699 get-chunks826 k3035 get-files749 skip721 g732733 k2985 setup-download#http-connect setup-download#deconstruct-url setup-download#make-svn-ls-cmd setup-download#get-temporary-directory setup-download#existing-version k1583 for-each-loop346358 setup-download#d) 
o|calls to known targets: 91 
o|fast box initializations: 9 
o|fast global references: 56 
o|fast global assignments: 25 
o|dropping unused closure argument: f_1318 
o|dropping unused closure argument: f_2774 
o|dropping unused closure argument: f_1334 
o|dropping unused closure argument: f_1349 
o|dropping unused closure argument: f_2751 
o|dropping unused closure argument: f_2686 
o|dropping unused closure argument: f_1908 
o|dropping unused closure argument: f_3293 
o|dropping unused closure argument: f_2397 
*/
/* end of file */
