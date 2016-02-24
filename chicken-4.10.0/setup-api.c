/* Generated from setup-api.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:02
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: setup-api.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -feature chicken-compile-shared -dynamic -emit-import-library setup-api -output-file setup-api.c
   used units: library eval chicken_2dsyntax srfi_2d1 irregex utils posix srfi_2d13 extras ports data_2dstructures files
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
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d13_toplevel)
C_externimport void C_ccall C_srfi_2d13_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[280];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,27),40,115,101,116,117,112,45,97,112,105,35,115,104,101,108,108,112,97,116,104,32,115,116,114,53,55,41,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,36),40,115,101,116,117,112,45,97,112,105,35,101,120,116,114,97,45,102,101,97,116,117,114,101,115,32,46,32,116,109,112,55,50,55,51,41,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,39),40,115,101,116,117,112,45,97,112,105,35,101,120,116,114,97,45,110,111,110,102,101,97,116,117,114,101,115,32,46,32,116,109,112,56,57,57,48,41,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,30),40,115,101,116,117,112,45,97,112,105,35,117,115,101,114,45,105,110,115,116,97,108,108,45,115,101,116,117,112,41,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,34),40,115,101,116,117,112,45,97,112,105,35,115,117,100,111,45,105,110,115,116,97,108,108,32,46,32,97,114,103,115,49,51,48,41,0,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,7),40,97,50,48,49,55,41,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,7),40,97,50,48,48,55,41,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,41),40,115,101,116,117,112,45,97,112,105,35,112,97,116,99,104,32,119,104,105,99,104,49,55,57,32,114,120,49,56,48,32,115,117,98,115,116,49,56,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,48),40,115,101,116,117,112,45,97,112,105,35,114,101,103,105,115,116,101,114,45,112,114,111,103,114,97,109,32,110,97,109,101,50,50,48,32,46,32,116,109,112,50,49,57,50,50,49,41};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,32),40,115,101,116,117,112,45,97,112,105,35,102,105,110,100,45,112,114,111,103,114,97,109,32,110,97,109,101,50,50,56,41};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,22),40,114,101,103,32,110,97,109,101,50,51,50,32,114,110,97,109,101,50,51,51,41,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,50,57,48,32,103,51,48,50,51,48,57,41,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,50,54,51,32,103,50,55,53,50,56,50,41,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,51,51,51,32,103,51,52,53,51,53,49,41,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,15),40,115,109,111,111,116,104,32,108,115,116,51,50,57,41,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,50,48,32,103,51,50,55,51,57,55,41,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,51,55,50,32,103,51,56,52,51,57,48,41,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,30),40,115,101,116,117,112,45,97,112,105,35,101,120,101,99,117,116,101,32,101,120,112,108,105,115,116,51,49,55,41,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,31),40,115,101,116,117,112,45,97,112,105,35,105,110,115,116,97,108,108,97,116,105,111,110,45,112,114,101,102,105,120,41,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,13),40,118,101,114,98,32,100,105,114,53,48,50,41,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,15),40,102,95,52,56,48,57,32,100,105,114,53,49,50,41,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,15),40,102,95,52,56,49,55,32,100,105,114,53,49,52,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,7),40,97,50,54,57,50,41,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,7),40,97,50,55,48,49,41,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,45),40,115,101,116,117,112,45,97,112,105,35,119,114,105,116,101,45,105,110,102,111,32,105,100,53,50,52,32,102,105,108,101,115,53,50,53,32,105,110,102,111,53,50,54,41,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,11),40,103,54,48,54,32,102,54,49,53,41,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,54,48,53,32,103,54,49,50,54,49,55,41,0,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,20),40,119,97,108,107,32,102,114,111,109,53,57,55,32,116,111,53,57,56,41,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,47),40,115,101,116,117,112,45,97,112,105,35,99,111,112,121,45,102,105,108,101,32,102,114,111,109,53,56,48,32,116,111,53,56,49,32,46,32,116,109,112,53,55,57,53,56,50,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,35),40,115,101,116,117,112,45,97,112,105,35,109,111,118,101,45,102,105,108,101,32,102,114,111,109,54,51,52,32,116,111,54,51,53,41,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,31),40,115,101,116,117,112,45,97,112,105,35,114,101,109,111,118,101,45,102,105,108,101,42,32,100,105,114,54,52,54,41,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,46),40,115,101,116,117,112,45,97,112,105,35,109,97,107,101,45,100,101,115,116,45,112,97,116,104,110,97,109,101,32,112,97,116,104,54,53,52,32,102,105,108,101,54,53,53,41,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,54,54,48,32,103,54,55,50,54,56,56,41,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,35),40,115,101,116,117,112,45,97,112,105,35,99,104,101,99,107,45,102,105,108,101,108,105,115,116,32,102,108,105,115,116,54,53,55,41,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,6),40,103,55,50,57,41,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,45),40,115,101,116,117,112,45,97,112,105,35,115,117,112,112,108,121,45,118,101,114,115,105,111,110,32,105,110,102,111,55,50,49,32,118,101,114,115,105,111,110,55,50,50,41,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,7),40,97,51,50,56,49,41,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,50),40,115,101,116,117,112,45,97,112,105,35,115,116,97,110,100,97,114,100,45,101,120,116,101,110,115,105,111,110,32,110,97,109,101,55,52,56,32,46,32,116,109,112,55,52,55,55,52,57,41,0,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,11),40,103,56,49,53,32,102,56,50,54,41,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,56,48,57,32,103,56,50,49,56,53,49,41,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,56),40,115,101,116,117,112,45,97,112,105,35,105,110,115,116,97,108,108,45,101,120,116,101,110,115,105,111,110,32,105,100,55,57,53,32,102,105,108,101,115,55,57,54,32,46,32,116,109,112,55,57,52,55,57,55,41};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,12),40,101,120,105,102,121,32,102,56,55,50,41,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,11),40,103,57,49,51,32,102,57,50,52,41,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,57,48,55,32,103,57,49,57,57,51,54,41,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,11),40,103,56,56,53,32,102,56,57,54,41,0,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,56,55,57,32,103,56,57,49,56,57,56,41,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,54),40,115,101,116,117,112,45,97,112,105,35,105,110,115,116,97,108,108,45,112,114,111,103,114,97,109,32,105,100,56,54,51,32,102,105,108,101,115,56,54,52,32,46,32,116,109,112,56,54,50,56,54,53,41,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,11),40,103,57,54,57,32,102,57,56,48,41,0,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,57,54,51,32,103,57,55,53,57,57,50,41,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,53),40,115,101,116,117,112,45,97,112,105,35,105,110,115,116,97,108,108,45,115,99,114,105,112,116,32,105,100,57,52,57,32,102,105,108,101,115,57,53,48,32,46,32,116,109,112,57,52,56,57,53,49,41,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,33),40,115,101,116,117,112,45,97,112,105,35,114,101,112,111,45,112,97,116,104,32,116,109,112,49,48,49,48,49,48,49,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,49),40,115,101,116,117,112,45,97,112,105,35,101,110,115,117,114,101,45,100,105,114,101,99,116,111,114,121,32,112,97,116,104,49,48,51,56,32,116,109,112,49,48,51,55,49,48,51,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,7),40,97,52,48,48,48,41,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,18),40,97,51,57,57,52,32,101,120,49,48,56,48,49,48,56,56,41,0,0,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,7),40,97,52,48,48,57,41,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,7),40,97,52,48,52,52,41,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,22),40,97,52,48,51,56,32,46,32,97,114,103,115,49,48,56,50,49,49,48,50,41,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,7),40,97,52,48,48,51,41,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,17),40,97,51,57,56,56,32,107,49,48,56,49,49,48,56,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,7),40,97,52,48,57,48,41,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,7),40,97,52,48,57,54,41,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,7),40,97,52,48,57,57,41,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,7),40,97,52,49,48,53,41,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,7),40,97,52,49,48,56,41,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,7),40,97,52,49,49,49,41,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,46),40,115,101,116,117,112,45,97,112,105,35,116,114,121,45,99,111,109,112,105,108,101,32,99,111,100,101,49,48,54,48,32,46,32,116,109,112,49,48,53,57,49,48,54,49,41,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,42),40,115,101,116,117,112,45,97,112,105,35,102,105,110,100,45,108,105,98,114,97,114,121,32,110,97,109,101,49,49,48,55,32,112,114,111,99,49,49,48,56,41,0,0,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,32),40,115,101,116,117,112,45,97,112,105,35,102,105,110,100,45,104,101,97,100,101,114,32,110,97,109,101,49,49,51,52,41};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,49,53,53,32,103,49,49,54,55,49,49,55,55,41};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,21),40,118,101,114,115,105,111,110,45,62,108,105,115,116,32,118,49,49,53,50,41,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,112,49,49,49,56,52,32,112,50,49,49,56,53,41,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,36),40,115,101,116,117,112,45,97,112,105,35,118,101,114,115,105,111,110,62,61,63,32,118,49,49,49,52,57,32,118,50,49,49,53,48,41,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,26),40,115,101,116,117,112,45,97,112,105,35,101,120,116,101,110,115,105,111,110,45,110,97,109,101,41,0,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,43),40,115,101,116,117,112,45,97,112,105,35,101,120,116,101,110,115,105,111,110,45,118,101,114,115,105,111,110,32,46,32,116,109,112,49,50,51,48,49,50,51,49,41,0,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,43),40,115,101,116,117,112,45,97,112,105,35,114,101,97,100,45,105,110,102,111,32,101,103,103,49,50,52,53,32,46,32,116,109,112,49,50,52,52,49,50,52,54,41,0,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,7),40,97,52,52,56,51,41,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,18),40,97,52,52,55,55,32,101,120,49,50,55,48,49,50,55,56,41,0,0,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,7),40,97,52,52,57,50,41,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,7),40,97,52,53,50,52,41,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,22),40,97,52,53,49,56,32,46,32,97,114,103,115,49,50,55,50,49,50,57,49,41,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,7),40,97,52,52,56,54,41,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,17),40,97,52,52,55,49,32,107,49,50,55,49,49,50,55,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,13),40,103,49,50,57,56,32,102,49,51,48,55,41,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,50,57,55,32,103,49,51,48,52,49,51,49,51,41,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,14),40,119,97,108,107,32,100,105,114,49,50,57,51,41,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,50),40,115,101,116,117,112,45,97,112,105,35,114,101,109,111,118,101,45,100,105,114,101,99,116,111,114,121,32,100,105,114,49,50,53,56,32,46,32,116,109,112,49,50,53,55,49,50,53,57,41,0,0,0,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,51,51,53,32,103,49,51,52,50,49,51,52,54,41,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,50),40,115,101,116,117,112,45,97,112,105,35,114,101,109,111,118,101,45,101,120,116,101,110,115,105,111,110,32,101,103,103,49,51,50,53,32,46,32,116,109,112,49,51,50,52,49,51,50,54,41,0,0,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,27),40,115,101,116,117,112,45,97,112,105,35,36,115,121,115,116,101,109,32,115,116,114,49,51,53,50,41,0,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,16),40,116,109,112,49,49,55,50,57,32,99,49,51,55,50,41};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,32),40,115,101,116,117,112,45,97,112,105,35,115,101,116,117,112,45,101,114,114,111,114,45,104,97,110,100,108,105,110,103,41};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,21),40,101,110,115,117,114,101,45,115,116,114,105,110,103,32,120,49,50,50,48,41,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,13),40,97,52,55,52,50,32,120,49,50,48,56,41,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,7),40,97,52,56,54,53,41,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_3282)
static void C_ccall f_3282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2795)
static void C_fcall f_2795(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2790)
static void C_ccall f_2790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4759)
static void C_fcall f_4759(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4163)
static void C_ccall f_4163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4169)
static void C_ccall f_4169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4166)
static void C_ccall f_4166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4160)
static void C_ccall f_4160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2783)
static void C_ccall f_2783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2787)
static void C_ccall f_2787(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4743)
static void C_ccall f_4743(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4195)
static void C_ccall f_4195(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4741)
static void C_ccall f_4741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4198)
static void C_ccall f_4198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3261)
static void C_ccall f_3261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4648)
static void C_ccall f_4648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3297)
static void C_ccall f_3297(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3297)
static void C_ccall f_3297r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4189)
static void C_ccall f_4189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3478)
static void C_ccall f_3478(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3478)
static void C_ccall f_3478r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4181)
static void C_ccall f_4181(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4638)
static void C_fcall f_4638(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4766)
static void C_fcall f_4766(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4663)
static void C_ccall f_4663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1799)
static void C_ccall f_1799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4718)
static void C_ccall f_4718(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1796)
static void C_ccall f_1796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4715)
static void C_ccall f_4715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3498)
static void C_ccall f_3498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4712)
static void C_ccall f_4712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1880)
static void C_ccall f_1880(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1880)
static void C_ccall f_1880r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1789)
static void C_ccall f_1789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4709)
static void C_ccall f_4709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4703)
static void C_ccall f_4703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4706)
static void C_ccall f_4706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3484)
static void C_fcall f_3484(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1781)
static void C_ccall f_1781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1785)
static void C_ccall f_1785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4700)
static void C_ccall f_4700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4734)
static void C_ccall f_4734(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4730)
static void C_ccall f_4730(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4674)
static void C_fcall f_4674(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4678)
static void C_ccall f_4678(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4728)
static void C_ccall f_4728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4723)
static void C_ccall f_4723(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4175)
static void C_ccall f_4175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4172)
static void C_ccall f_4172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4179)
static void C_ccall f_4179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1756)
static void C_ccall f_1756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1753)
static void C_ccall f_1753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2713)
static void C_ccall f_2713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1750)
static void C_ccall f_1750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2710)
static void C_ccall f_2710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1759)
static void C_ccall f_1759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2719)
static void C_ccall f_2719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1843)
static void C_ccall f_1843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4001)
static void C_ccall f_4001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4004)
static void C_ccall f_4004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1847)
static void C_ccall f_1847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1744)
static void C_ccall f_1744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1741)
static void C_ccall f_1741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2702)
static void C_ccall f_2702(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1747)
static void C_ccall f_1747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4033)
static void C_ccall f_4033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1871)
static void C_ccall f_1871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4030)
static void C_ccall f_4030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4037)
static void C_ccall f_4037(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4039)
static void C_ccall f_4039(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4039)
static void C_ccall f_4039r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1773)
static void C_ccall f_1773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1777)
static void C_ccall f_1777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2774)
static void C_ccall f_2774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2775)
static void C_fcall f_2775(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4024)
static void C_ccall f_4024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1861)
static void C_ccall f_1861(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1861)
static void C_ccall f_1861r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4027)
static void C_ccall f_4027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1765)
static void C_ccall f_1765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2762)
static void C_ccall f_2762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1762)
static void C_ccall f_1762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2767)
static void C_fcall f_2767(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1768)
static void C_ccall f_1768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2765)
static void C_ccall f_2765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1890)
static void C_ccall f_1890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2750)
static void C_ccall f_2750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2759)
static void C_ccall f_2759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2756)
static void C_fcall f_2756(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1803)
static void C_ccall f_1803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3418)
static void C_ccall f_3418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1807)
static void C_ccall f_1807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2740)
static void C_ccall f_2740(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2740)
static void C_ccall f_2740r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3408)
static void C_ccall f_3408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1830)
static void C_ccall f_1830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1835)
static void C_ccall f_1835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1839)
static void C_ccall f_1839(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1735)
static void C_ccall f_1735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1738)
static void C_ccall f_1738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1822)
static void C_ccall f_1822(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1820)
static void C_ccall f_1820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3427)
static void C_fcall f_3427(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3425)
static void C_ccall f_3425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1855)
static void C_ccall f_1855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4010)
static void C_ccall f_4010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1851)
static void C_ccall f_1851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4018)
static void C_ccall f_4018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1859)
static void C_ccall f_1859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4627)
static void C_ccall f_4627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4620)
static void C_ccall f_4620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4614)
static void C_ccall f_4614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4610)
static void C_ccall f_4610(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4610)
static void C_ccall f_4610r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1810)
static void C_ccall f_1810(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1813)
static void C_ccall f_1813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1817)
static void C_ccall f_1817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4045)
static void C_ccall f_4045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2731)
static void C_ccall f_2731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2722)
static void C_ccall f_2722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2725)
static void C_ccall f_2725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2728)
static void C_ccall f_2728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3456)
static void C_ccall f_3456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4697)
static void C_ccall f_4697(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4691)
static void C_ccall f_4691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4793)
static void C_ccall f_4793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4789)
static void C_ccall f_4789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4602)
static void C_ccall f_4602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2525)
static void C_fcall f_2525(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3694)
static void C_ccall f_3694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3697)
static void C_ccall f_3697(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2458)
static void C_ccall f_2458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3914)
static void C_ccall f_3914(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3549)
static void C_ccall f_3549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2357)
static void C_ccall f_2357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2354)
static void C_ccall f_2354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3198)
static void C_ccall f_3198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4274)
static void C_ccall f_4274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2512)
static void C_ccall f_2512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4276)
static void C_fcall f_4276(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3769)
static void C_fcall f_3769(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3767)
static void C_ccall f_3767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4270)
static void C_ccall f_4270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3902)
static void C_ccall f_3902(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2347)
static void C_ccall f_2347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3539)
static void C_ccall f_3539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2580)
static void C_ccall f_2580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4549)
static void C_fcall f_4549(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2589)
static void C_ccall f_2589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2588)
static void C_ccall f_2588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2584)
static void C_ccall f_2584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3971)
static void C_ccall f_3971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3974)
static void C_ccall f_3974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2479)
static void C_ccall f_2479(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2473)
static void C_ccall f_2473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3908)
static void C_ccall f_3908(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3752)
static void C_ccall f_3752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3177)
static void C_ccall f_3177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4539)
static void C_fcall f_4539(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4538)
static void C_ccall f_4538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4534)
static void C_fcall f_4534(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3962)
static void C_ccall f_3962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3965)
static void C_ccall f_3965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2467)
static void C_ccall f_2467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3183)
static void C_ccall f_3183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3977)
static void C_ccall f_3977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3742)
static void C_ccall f_3742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3745)
static void C_ccall f_3745(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3093)
static void C_ccall f_3093(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4484)
static void C_ccall f_4484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4487)
static void C_ccall f_4487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2564)
static void C_ccall f_2564(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3950)
static void C_ccall f_3950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3953)
static void C_ccall f_3953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2410)
static void C_ccall f_2410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3658)
static void C_ccall f_3658(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2392)
static void C_ccall f_2392(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3968)
static void C_ccall f_3968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3587)
static void C_ccall f_3587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2398)
static void C_ccall f_2398(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4472)
static void C_ccall f_4472(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3732)
static void C_ccall f_3732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4478)
static void C_ccall f_4478(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3684)
static void C_ccall f_3684(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3684)
static void C_ccall f_3684r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3076)
static void C_ccall f_3076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4558)
static void C_ccall f_4558(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2554)
static void C_ccall f_2554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4552)
static void C_ccall f_4552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2482)
static void C_ccall f_2482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3943)
static void C_ccall f_3943(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3943)
static void C_ccall f_3943r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2485)
static void C_ccall f_2485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3165)
static void C_fcall f_3165(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3959)
static void C_ccall f_3959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3956)
static void C_ccall f_3956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4263)
static void C_ccall f_4263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3717)
static void C_ccall f_3717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4587)
static void C_ccall f_4587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2372)
static void C_ccall f_2372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3714)
static void C_ccall f_3714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4493)
static void C_ccall f_4493(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3711)
static void C_ccall f_3711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3708)
static void C_fcall f_3708(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4572)
static void C_ccall f_4572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4577)
static void C_fcall f_4577(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2429)
static void C_fcall f_2429(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2421)
static void C_ccall f_2421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2360)
static void C_ccall f_2360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3556)
static void C_ccall f_3556(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2366)
static void C_ccall f_2366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3558)
static void C_fcall f_3558(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2363)
static void C_ccall f_2363(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4445)
static void C_ccall f_4445(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4445)
static void C_ccall f_4445r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3704)
static void C_fcall f_3704(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3703)
static void C_ccall f_3703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3700)
static void C_ccall f_3700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2921)
static void C_ccall f_2921(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3610)
static void C_ccall f_3610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3014)
static void C_ccall f_3014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3250)
static void C_fcall f_3250(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3254)
static void C_ccall f_3254(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2956)
static void C_ccall f_2956(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4112)
static void C_ccall f_4112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4119)
static void C_ccall f_4119(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3242)
static void C_ccall f_3242(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3246)
static void C_ccall f_3246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2502)
static void C_fcall f_2502(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2905)
static void C_ccall f_2905(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2909)
static void C_ccall f_2909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4100)
static void C_ccall f_4100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4106)
static void C_ccall f_4106(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4109)
static void C_ccall f_4109(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2936)
static void C_ccall f_2936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4405)
static void C_ccall f_4405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4423)
static void C_ccall f_4423(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4423)
static void C_ccall f_4423r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2312)
static void C_ccall f_2312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2318)
static void C_fcall f_2318(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3157)
static void C_fcall f_3157(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4127)
static void C_ccall f_4127(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3213)
static void C_ccall f_3213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3216)
static void C_ccall f_3216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3219)
static void C_ccall f_3219(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2994)
static void C_ccall f_2994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2999)
static void C_fcall f_2999(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3606)
static void C_ccall f_3606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2403)
static void C_ccall f_2403(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2400)
static void C_ccall f_2400(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4154)
static void C_ccall f_4154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4151)
static void C_ccall f_4151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4157)
static void C_ccall f_4157(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4427)
static void C_ccall f_4427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3200)
static void C_ccall f_3200(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3200)
static void C_ccall f_3200r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2940)
static void C_ccall f_2940(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3932)
static void C_ccall f_3932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4145)
static void C_ccall f_4145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4142)
static void C_ccall f_4142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4148)
static void C_ccall f_4148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4415)
static void C_ccall f_4415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2972)
static void C_ccall f_2972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2974)
static void C_fcall f_2974(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3629)
static void C_fcall f_3629(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3129)
static void C_ccall f_3129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4525)
static void C_ccall f_4525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2834)
static void C_ccall f_2834(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2838)
static void C_ccall f_2838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4517)
static void C_ccall f_4517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4519)
static void C_ccall f_4519(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4519)
static void C_ccall f_4519r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3521)
static void C_ccall f_3521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4510)
static void C_ccall f_4510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3524)
static void C_ccall f_3524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4513)
static void C_ccall f_4513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3511)
static void C_fcall f_3511(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3510)
static void C_ccall f_3510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3515)
static void C_fcall f_3515(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2854)
static void C_ccall f_2854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2847)
static void C_ccall f_2847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3501)
static void C_ccall f_3501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3507)
static void C_ccall f_3507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3504)
static void C_ccall f_3504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4136)
static void C_ccall f_4136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3518)
static void C_ccall f_3518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4133)
static void C_ccall f_4133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4139)
static void C_ccall f_4139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2911)
static void C_ccall f_2911(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2915)
static void C_fcall f_2915(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2918)
static void C_ccall f_2918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3047)
static void C_fcall f_3047(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2819)
static void C_ccall f_2819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3231)
static void C_ccall f_3231(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2805)
static void C_ccall f_2805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3222)
static void C_ccall f_3222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3228)
static void C_ccall f_3228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3225)
static void C_ccall f_3225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4434)
static void C_ccall f_4434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2593)
static void C_ccall f_2593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3983)
static void C_ccall f_3983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3980)
static void C_ccall f_3980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3995)
static void C_ccall f_3995(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4467)
static void C_ccall f_4467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3592)
static void C_fcall f_3592(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3989)
static void C_ccall f_3989(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3666)
static void C_ccall f_3666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2494)
static void C_ccall f_2494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4507)
static void C_ccall f_4507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3798)
static void C_ccall f_3798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4501)
static void C_ccall f_4501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4840)
static void C_ccall f_4840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2037)
static void C_ccall f_2037(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4852)
static void C_ccall f_4852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3856)
static void C_ccall f_3856(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4856)
static void C_ccall f_4856(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2241)
static void C_ccall f_2241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2028)
static void C_ccall f_2028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2024)
static void C_fcall f_2024(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3840)
static void C_ccall f_3840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2693)
static void C_ccall f_2693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3385)
static void C_ccall f_3385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3846)
static void C_ccall f_3846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4844)
static void C_ccall f_4844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2691)
static void C_ccall f_2691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4848)
static void C_ccall f_4848(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2183)
static void C_ccall f_2183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4860)
static void C_ccall f_4860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2180)
static void C_ccall f_2180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2186)
static void C_ccall f_2186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2189)
static void C_ccall f_2189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2057)
static void C_ccall f_2057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2050)
static void C_ccall f_2050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2261)
static void C_ccall f_2261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2687)
static void C_ccall f_2687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2047)
static void C_ccall f_2047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2044)
static void C_ccall f_2044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3865)
static void C_ccall f_3865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3862)
static void C_ccall f_3862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2252)
static void C_ccall f_2252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3868)
static void C_ccall f_3868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4864)
static void C_ccall f_4864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2255)
static void C_ccall f_2255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4866)
static void C_ccall f_4866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1993)
static void C_ccall f_1993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4392)
static void C_ccall f_4392(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4392)
static void C_ccall f_4392r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4817)
static void C_ccall f_4817(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2281)
static void C_ccall f_2281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4390)
static void C_ccall f_4390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4813)
static void C_ccall f_4813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3393)
static void C_ccall f_3393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2283)
static void C_fcall f_2283(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2114)
static void C_ccall f_2114(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2114)
static void C_ccall f_2114r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1987)
static void C_ccall f_1987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2112)
static void C_ccall f_2112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1989)
static void C_ccall f_1989(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2118)
static void C_ccall f_2118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3345)
static void C_ccall f_3345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4078)
static void C_ccall f_4078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4382)
static void C_ccall f_4382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3806)
static void C_ccall f_3806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3342)
static void C_ccall f_3342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4809)
static void C_ccall f_4809(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2272)
static void C_ccall f_2272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4380)
static void C_ccall f_4380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2275)
static void C_ccall f_2275(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4821)
static void C_ccall f_4821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2018)
static void C_ccall f_2018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4064)
static void C_ccall f_4064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4067)
static void C_ccall f_4067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3834)
static void C_ccall f_3834(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3831)
static void C_ccall f_3831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4836)
static void C_ccall f_4836(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2008)
static void C_ccall f_2008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4097)
static void C_ccall f_4097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3824)
static void C_fcall f_3824(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4091)
static void C_ccall f_4091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2126)
static void C_ccall f_2126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4201)
static void C_ccall f_4201(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4204)
static void C_ccall f_4204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4206)
static void C_ccall f_4206(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4209)
static void C_fcall f_4209(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2669)
static void C_ccall f_2669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2666)
static void C_ccall f_2666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2615)
static void C_ccall f_2615(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3307)
static void C_ccall f_3307(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2618)
static void C_ccall f_2618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2105)
static void C_ccall f_2105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2102)
static void C_ccall f_2102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2602)
static void C_fcall f_2602(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2609)
static void C_ccall f_2609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2136)
static void C_ccall f_2136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1964)
static void C_ccall f_1964(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1964)
static void C_ccall f_1964r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2636)
static void C_ccall f_2636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2639)
static void C_ccall f_2639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2072)
static void C_ccall f_2072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2075)
static void C_ccall f_2075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2078)
static void C_ccall f_2078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3313)
static void C_ccall f_3313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3310)
static void C_ccall f_3310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3317)
static void C_fcall f_3317(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3316)
static void C_ccall f_3316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2063)
static void C_ccall f_2063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2066)
static void C_ccall f_2066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2069)
static void C_ccall f_2069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2145)
static void C_ccall f_2145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2141)
static void C_ccall f_2141(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1938)
static void C_fcall f_1938(C_word t0) C_noret;
C_noret_decl(f_2093)
static void C_ccall f_2093(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2099)
static void C_ccall f_2099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2225)
static void C_fcall f_2225(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2642)
static void C_ccall f_2642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2648)
static void C_ccall f_2648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2645)
static void C_ccall f_2645(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2221)
static void C_ccall f_2221(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2082)
static void C_ccall f_2082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2086)
static void C_ccall f_2086(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2672)
static void C_ccall f_2672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2217)
static void C_ccall f_2217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3321)
static void C_fcall f_3321(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3327)
static void C_ccall f_3327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3324)
static void C_ccall f_3324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4226)
static void C_fcall f_4226(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4221)
static void C_ccall f_4221(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2621)
static void C_ccall f_2621(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2629)
static void C_fcall f_2629(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3354)
static void C_fcall f_3354(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4344)
static void C_ccall f_4344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3336)
static void C_ccall f_3336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3330)
static void C_ccall f_3330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3369)
static void C_ccall f_3369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2160)
static void C_fcall f_2160(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2168)
static void C_ccall f_2168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3893)
static void C_ccall f_3893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3896)
static void C_ccall f_3896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2195)
static void C_ccall f_2195(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4889)
static void C_ccall f_4889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3886)
static void C_fcall f_3886(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2171)
static void C_ccall f_2171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2174)
static void C_ccall f_2174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2177)
static void C_ccall f_2177(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_2795)
static void C_fcall trf_2795(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2795(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2795(t0,t1,t2);}

C_noret_decl(trf_4759)
static void C_fcall trf_4759(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4759(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4759(t0,t1);}

C_noret_decl(trf_4638)
static void C_fcall trf_4638(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4638(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4638(t0,t1,t2);}

C_noret_decl(trf_4766)
static void C_fcall trf_4766(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4766(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4766(t0,t1);}

C_noret_decl(trf_3484)
static void C_fcall trf_3484(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3484(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3484(t0,t1);}

C_noret_decl(trf_4674)
static void C_fcall trf_4674(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4674(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4674(t0,t1);}

C_noret_decl(trf_2775)
static void C_fcall trf_2775(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2775(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2775(t0,t1,t2);}

C_noret_decl(trf_2767)
static void C_fcall trf_2767(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2767(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2767(t0,t1,t2,t3);}

C_noret_decl(trf_2756)
static void C_fcall trf_2756(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2756(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2756(t0,t1);}

C_noret_decl(trf_3427)
static void C_fcall trf_3427(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3427(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3427(t0,t1,t2);}

C_noret_decl(trf_2525)
static void C_fcall trf_2525(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2525(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2525(t0,t1,t2);}

C_noret_decl(trf_4276)
static void C_fcall trf_4276(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4276(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4276(t0,t1,t2,t3);}

C_noret_decl(trf_3769)
static void C_fcall trf_3769(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3769(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3769(t0,t1,t2);}

C_noret_decl(trf_4549)
static void C_fcall trf_4549(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4549(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4549(t0,t1);}

C_noret_decl(trf_4539)
static void C_fcall trf_4539(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4539(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4539(t0,t1,t2);}

C_noret_decl(trf_4534)
static void C_fcall trf_4534(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4534(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4534(t0,t1,t2);}

C_noret_decl(trf_3165)
static void C_fcall trf_3165(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3165(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3165(t0,t1);}

C_noret_decl(trf_3708)
static void C_fcall trf_3708(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3708(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3708(t0,t1);}

C_noret_decl(trf_4577)
static void C_fcall trf_4577(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4577(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4577(t0,t1,t2);}

C_noret_decl(trf_2429)
static void C_fcall trf_2429(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2429(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2429(t0,t1,t2);}

C_noret_decl(trf_3558)
static void C_fcall trf_3558(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3558(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3558(t0,t1,t2);}

C_noret_decl(trf_3704)
static void C_fcall trf_3704(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3704(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3704(t0,t1,t2);}

C_noret_decl(trf_3250)
static void C_fcall trf_3250(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3250(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3250(t0,t1);}

C_noret_decl(trf_2502)
static void C_fcall trf_2502(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2502(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2502(t0,t1,t2);}

C_noret_decl(trf_2318)
static void C_fcall trf_2318(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2318(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2318(t0,t1,t2);}

C_noret_decl(trf_3157)
static void C_fcall trf_3157(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3157(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3157(t0,t1,t2);}

C_noret_decl(trf_2999)
static void C_fcall trf_2999(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2999(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2999(t0,t1);}

C_noret_decl(trf_2974)
static void C_fcall trf_2974(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2974(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2974(t0,t1,t2);}

C_noret_decl(trf_3629)
static void C_fcall trf_3629(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3629(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3629(t0,t1,t2);}

C_noret_decl(trf_3511)
static void C_fcall trf_3511(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3511(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3511(t0,t1,t2);}

C_noret_decl(trf_3515)
static void C_fcall trf_3515(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3515(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3515(t0,t1);}

C_noret_decl(trf_2915)
static void C_fcall trf_2915(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2915(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2915(t0,t1);}

C_noret_decl(trf_3047)
static void C_fcall trf_3047(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3047(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3047(t0,t1,t2);}

C_noret_decl(trf_3592)
static void C_fcall trf_3592(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3592(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3592(t0,t1,t2);}

C_noret_decl(trf_2024)
static void C_fcall trf_2024(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2024(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2024(t0,t1);}

C_noret_decl(trf_2283)
static void C_fcall trf_2283(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2283(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2283(t0,t1,t2);}

C_noret_decl(trf_3824)
static void C_fcall trf_3824(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3824(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3824(t0,t1);}

C_noret_decl(trf_4209)
static void C_fcall trf_4209(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4209(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4209(t0,t1);}

C_noret_decl(trf_2602)
static void C_fcall trf_2602(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2602(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2602(t0,t1);}

C_noret_decl(trf_3317)
static void C_fcall trf_3317(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3317(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3317(t0,t1,t2);}

C_noret_decl(trf_1938)
static void C_fcall trf_1938(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1938(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_1938(t0);}

C_noret_decl(trf_2225)
static void C_fcall trf_2225(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2225(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2225(t0,t1);}

C_noret_decl(trf_3321)
static void C_fcall trf_3321(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3321(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3321(t0,t1);}

C_noret_decl(trf_4226)
static void C_fcall trf_4226(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4226(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4226(t0,t1,t2);}

C_noret_decl(trf_2629)
static void C_fcall trf_2629(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2629(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2629(t0,t1,t2,t3);}

C_noret_decl(trf_3354)
static void C_fcall trf_3354(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3354(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3354(t0,t1);}

C_noret_decl(trf_2160)
static void C_fcall trf_2160(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2160(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2160(t0,t1,t2);}

C_noret_decl(trf_3886)
static void C_fcall trf_3886(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3886(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3886(t0,t1,t2);}

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

/* a3281 in setup-api#standard-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_ccall f_3282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3282,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}

/* for-each-loop605 in k2788 in k2772 in walk in k2760 in k2757 in k2754 in k2748 in setup-api#copy-file in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in ... */
static void C_fcall f_2795(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2795,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2805,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-api.scm:336: g606");
t5=((C_word*)t0)[3];
f_2775(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2788 in k2772 in walk in k2760 in k2757 in k2754 in k2748 in setup-api#copy-file in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in ... */
static void C_ccall f_2790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2790,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2795,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li27),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_2795(t5,((C_word*)t0)[3],t1);}

/* k4757 in a4742 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_fcall f_4759(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_4759,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4766,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4789,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:583: ensure-string");
f_4766(t6,t2);}
else{
C_trace("setup-api.scm:585: error");
t2=*((C_word*)lf[134]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],lf[258],((C_word*)t0)[2]);}}

/* k4161 in k4158 in k4155 in k4152 in k4149 in k4146 in k4143 in k4140 in k4137 in k4134 in k4131 in k4125 in setup-api#find-library in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in ... */
static void C_ccall f_4163(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4163,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4166,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:547: ##sys#print");
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[6],C_SCHEME_FALSE,((C_word*)t0)[5]);}

/* k4167 in k4164 in k4161 in k4158 in k4155 in k4152 in k4149 in k4146 in k4143 in k4140 in k4137 in k4134 in k4131 in k4125 in setup-api#find-library in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in ... */
static void C_ccall f_4169(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4169,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4172,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:547: ##sys#write-char-0");
((C_proc4)C_fast_retrieve_symbol_proc(lf[66]))(4,*((C_word*)lf[66]+1),t2,C_make_character(10),((C_word*)t0)[5]);}

/* k4164 in k4161 in k4158 in k4155 in k4152 in k4149 in k4146 in k4143 in k4140 in k4137 in k4134 in k4131 in k4125 in setup-api#find-library in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in ... */
static void C_ccall f_4166(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4166,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4169,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:547: ##sys#print");
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[219],C_SCHEME_FALSE,((C_word*)t0)[5]);}

/* k4158 in k4155 in k4152 in k4149 in k4146 in k4143 in k4140 in k4137 in k4134 in k4131 in k4125 in setup-api#find-library in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in ... */
static void C_ccall f_4160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4160,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4163,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:547: ##sys#print");
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[220],C_SCHEME_FALSE,((C_word*)t0)[5]);}

/* k2781 in g606 in k2772 in walk in k2760 in k2757 in k2754 in k2748 in setup-api#copy-file in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in ... */
static void C_ccall f_2783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2783,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2787,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:338: make-pathname");
t4=C_fast_retrieve(lf[76]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k2785 in k2781 in g606 in k2772 in walk in k2760 in k2757 in k2754 in k2748 in setup-api#copy-file in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in ... */
static void C_ccall f_2787(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:338: walk");
t2=((C_word*)((C_word*)t0)[2])[1];
f_2767(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* a4742 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in ... */
static void C_ccall f_4743(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4743,3,t0,t1,t2);}
t3=C_i_not(t2);
t4=(C_truep(t3)?t3:C_i_nullp(t2));
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[256]);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4759,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_listp(t2))){
t6=t2;
t7=C_u_i_length(t6);
t8=t5;
f_4759(t8,C_eqp(C_fix(2),t7));}
else{
t6=t5;
f_4759(t6,C_SCHEME_FALSE);}}}

/* k4193 in k4187 in setup-api#find-header in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_4195(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4195,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4198,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:552: ##sys#print");
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k4739 in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_ccall f_4741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* k4196 in k4193 in k4187 in setup-api#find-header in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in ... */
static void C_ccall f_4198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4198,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4201,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:552: ##sys#print");
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[227],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k3259 in k3252 in k3244 in k3229 in k3226 in k3223 in k3220 in k3217 in k3214 in k3211 in setup-api#standard-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in ... */
static void C_ccall f_3261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3261,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_3250(t3,C_a_i_cons(&a,2,((C_word*)t0)[4],t2));}
else{
t2=((C_word*)t0)[3];
f_3250(t2,C_a_i_cons(&a,2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST));}}

/* k4646 in for-each-loop1335 in k4661 in k4612 in setup-api#remove-extension in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in ... */
static void C_ccall f_4648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4638(t3,((C_word*)t0)[4],t2);}

/* setup-api#install-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in ... */
static void C_ccall f_3297(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_3297r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3297r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3297r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(6);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_car(t4));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3307,a[2]=t7,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:428: setup-install-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[20]))(2,*((C_word*)lf[20]+1),t8);}

/* k4187 in setup-api#find-header in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_ccall f_4189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4189,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[62]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4195,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:552: ##sys#print");
t6=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[228],C_SCHEME_FALSE,t3);}

/* setup-api#install-program in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in ... */
static void C_ccall f_3478(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_3478r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3478r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3478r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(10);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_car(t4));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3484,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3498,a[2]=t1,a[3]=t2,a[4]=t7,a[5]=t8,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:454: setup-install-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[20]))(2,*((C_word*)lf[20]+1),t9);}

/* setup-api#find-header in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in ... */
static void C_ccall f_4181(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4181,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4189,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:552: open-output-string");
t4=C_fast_retrieve(lf[67]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* for-each-loop1335 in k4661 in k4612 in setup-api#remove-extension in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in ... */
static void C_fcall f_4638(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4638,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4648,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-api.scm:623: g1336");
t5=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* ensure-string in k4757 in a4742 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_fcall f_4766(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4766,NULL,2,t1,t2);}
t3=C_i_not(t2);
if(C_truep(t3)){
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[257]);}
else{
C_trace("setup-api.scm:582: ->string");
t4=C_fast_retrieve(lf[75]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t2);}}
else{
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[257]);}
else{
C_trace("setup-api.scm:582: ->string");
t4=C_fast_retrieve(lf[75]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t2);}}}

/* k4661 in k4612 in setup-api#remove-extension in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in ... */
static void C_ccall f_4663(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4663,2,t0,t1);}
t2=C_i_assq(lf[117],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4620,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=C_fast_retrieve(lf[131]);
t5=C_i_cdr(t2);
t6=C_i_check_list_2(t5,lf[106]);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4638,a[2]=t8,a[3]=t4,a[4]=((C_word)li87),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_4638(t10,t3,t5);}
else{
t4=t3;
f_4620(2,t4,C_SCHEME_FALSE);}}

/* k1797 in k1794 in k1787 in k1783 in k1779 in k1775 in k1771 in k1766 in k1763 in k1760 in k1757 in k1754 in k1751 in k1748 in k1745 in k1742 in k1739 in k1736 in k1733 */
static void C_ccall f_1799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1799,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1803,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:91: make-parameter");
t3=C_fast_retrieve(lf[259]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_SCHEME_FALSE);}

/* k4716 in k4713 in k4710 in k4707 in k4704 in k4701 in k4698 in k4695 in k4689 in k4676 in setup-api#$system in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in ... */
static void C_ccall f_4718(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:632: error");
t2=*((C_word*)lf[134]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1794 in k1787 in k1783 in k1779 in k1775 in k1771 in k1766 in k1763 in k1760 in k1757 in k1754 in k1751 in k1748 in k1745 in k1742 in k1739 in k1736 in k1733 */
static void C_ccall f_1796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1796,2,t0,t1);}
t2=C_mutate2(&lf[10] /* (set! setup-api#*windows* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1799,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:89: register-feature!");
t4=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[276]);}

/* k4713 in k4710 in k4707 in k4704 in k4701 in k4698 in k4695 in k4689 in k4676 in setup-api#$system in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in ... */
static void C_ccall f_4715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4715,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4718,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:633: get-output-string");
t3=C_fast_retrieve(lf[64]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k3496 in setup-api#install-program in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_ccall f_3498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3498,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3501,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[6]))){
t3=((C_word*)t0)[6];
C_trace("setup-api.scm:455: check-filelist");
f_2999(t2,t3);}
else{
t3=C_a_i_list1(&a,1,((C_word*)t0)[6]);
C_trace("setup-api.scm:455: check-filelist");
f_2999(t2,t3);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k4710 in k4707 in k4704 in k4701 in k4698 in k4695 in k4689 in k4676 in setup-api#$system in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in ... */
static void C_ccall f_4712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4712,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4715,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:633: ##sys#print");
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5]);}

/* setup-api#extra-nonfeatures in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in k1775 in k1771 in k1766 in ... */
static void C_ccall f_1880(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_1880r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1880r(t0,t1,t2);}}

static void C_ccall f_1880r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=t4;
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1890,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_apply(4,0,t6,C_fast_retrieve(lf[27]),t5);}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k1787 in k1783 in k1779 in k1775 in k1771 in k1766 in k1763 in k1760 in k1757 in k1754 in k1751 in k1748 in k1745 in k1742 in k1739 in k1736 in k1733 */
static void C_ccall f_1789(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1789,2,t0,t1);}
t2=C_mutate2(&lf[6] /* (set! setup-api#*target-lib-home* ...) */,t1);
t3=lf[7] /* setup-api#*sudo* */ =C_SCHEME_FALSE;;
t4=C_mutate2(&lf[8] /* (set! setup-api#*windows-shell* ...) */,C_mk_bool(C_WINDOWS_SHELL));
t5=lf[9] /* setup-api#*registered-programs* */ =C_SCHEME_END_OF_LIST;;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1796,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4889,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:86: software-type");
t8=C_fast_retrieve(lf[279]);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}

/* k4707 in k4704 in k4701 in k4698 in k4695 in k4689 in k4676 in setup-api#$system in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in ... */
static void C_ccall f_4709(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4709,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4712,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:633: ##sys#print");
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[246],C_SCHEME_FALSE,((C_word*)t0)[5]);}

/* k4701 in k4698 in k4695 in k4689 in k4676 in setup-api#$system in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in ... */
static void C_ccall f_4703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4703,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4706,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:633: ##sys#write-char-0");
((C_proc4)C_fast_retrieve_symbol_proc(lf[66]))(4,*((C_word*)lf[66]+1),t2,C_make_character(10),((C_word*)t0)[5]);}

/* k4704 in k4701 in k4698 in k4695 in k4689 in k4676 in setup-api#$system in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in ... */
static void C_ccall f_4706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4706,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4709,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:633: ##sys#write-char-0");
((C_proc4)C_fast_retrieve_symbol_proc(lf[66]))(4,*((C_word*)lf[66]+1),t2,C_make_character(10),((C_word*)t0)[5]);}

/* exify in setup-api#install-program in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_fcall f_3484(C_word t1,C_word t2){
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
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3484,NULL,2,t1,t2);}
t3=(C_truep(C_retrieve2(lf[8],"setup-api#\052windows-shell\052"))?lf[167]:C_SCHEME_FALSE);
t4=t1;
t5=t2;
t6=C_a_i_list(&a,1,t3);
t7=C_i_nullp(t6);
t8=(C_truep(t7)?C_SCHEME_FALSE:C_i_car(t6));
t9=t8;
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3093,a[2]=t4,a[3]=t5,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:378: pathname-extension");
t11=C_fast_retrieve(lf[164]);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t5);}

/* k1779 in k1775 in k1771 in k1766 in k1763 in k1760 in k1757 in k1754 in k1751 in k1748 in k1745 in k1742 in k1739 in k1736 in k1733 */
static void C_ccall f_1781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1781,2,t0,t1);}
t2=C_mutate2(&lf[4] /* (set! setup-api#*target-cflags* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1785,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[264]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_TARGET_MORE_LIBS),C_fix(0));}

/* k1783 in k1779 in k1775 in k1771 in k1766 in k1763 in k1760 in k1757 in k1754 in k1751 in k1748 in k1745 in k1742 in k1739 in k1736 in k1733 */
static void C_ccall f_1785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1785,2,t0,t1);}
t2=C_mutate2(&lf[5] /* (set! setup-api#*target-libs* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1789,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[264]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_TARGET_LIB_HOME),C_fix(0));}

/* k4698 in k4695 in k4689 in k4676 in setup-api#$system in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in ... */
static void C_ccall f_4700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4700,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4703,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:633: ##sys#write-char-0");
((C_proc4)C_fast_retrieve_symbol_proc(lf[66]))(4,*((C_word*)lf[66]+1),t2,C_make_character(58),((C_word*)t0)[5]);}

/* k4732 in tmp11729 in setup-api#setup-error-handling in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in ... */
static void C_ccall f_4734(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:639: reset");
t2=C_fast_retrieve(lf[252]);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* tmp11729 in setup-api#setup-error-handling in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_4730(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4730,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4734,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:638: print-error-message");
t4=C_fast_retrieve(lf[253]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,*((C_word*)lf[254]+1));}

/* setup-api#$system in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_fcall f_4674(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4674,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4678,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4723,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[8],"setup-api#\052windows-shell\052"))){
C_trace("setup-api.scm:629: string-append");
t5=*((C_word*)lf[248]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,lf[249],t2,lf[250]);}
else{
t5=t2;
C_trace("setup-api.scm:627: system");
t6=C_fast_retrieve(lf[188]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t3,t5);}}

/* k4676 in setup-api#$system in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_4678(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4678,2,t0,t1);}
t2=t1;
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4691,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:633: open-output-string");
t5=C_fast_retrieve(lf[67]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* setup-api#setup-error-handling in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_ccall f_4728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4728,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4730,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp);
t3=C_mutate2((C_word*)lf[255]+1 /* (set! ##sys#current-exception-handler ...) */,t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}

/* k4721 in setup-api#$system in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_4723(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:627: system");
t2=C_fast_retrieve(lf[188]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4173 in k4170 in k4167 in k4164 in k4161 in k4158 in k4155 in k4152 in k4149 in k4146 in k4143 in k4140 in k4137 in k4134 in k4131 in k4125 in setup-api#find-library in k2586 in k2582 in k2578 in k2187 in k2184 in ... */
static void C_ccall f_4175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4175,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4179,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:548: conc");
t4=C_fast_retrieve(lf[196]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[218],((C_word*)t0)[3]);}

/* k4170 in k4167 in k4164 in k4161 in k4158 in k4155 in k4152 in k4149 in k4146 in k4143 in k4140 in k4137 in k4134 in k4131 in k4125 in setup-api#find-library in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in ... */
static void C_ccall f_4172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4172,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4175,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:547: get-output-string");
t3=C_fast_retrieve(lf[64]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k4177 in k4173 in k4170 in k4167 in k4164 in k4161 in k4158 in k4155 in k4152 in k4149 in k4146 in k4143 in k4140 in k4137 in k4134 in k4131 in k4125 in setup-api#find-library in k2586 in k2582 in k2578 in k2187 in ... */
static void C_ccall f_4179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:546: test-compile");
((C_proc5)C_fast_retrieve_symbol_proc(lf[216]))(5,*((C_word*)lf[216]+1),((C_word*)t0)[2],((C_word*)t0)[3],lf[212],t1);}

/* k1754 in k1751 in k1748 in k1745 in k1742 in k1739 in k1736 in k1733 */
static void C_ccall f_1756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1756,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1759,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1751 in k1748 in k1745 in k1742 in k1739 in k1736 in k1733 */
static void C_ccall f_1753(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1753,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1756,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d13_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2711 in setup-api#write-info in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_ccall f_2713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2713,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[69]+1);
t3=*((C_word*)lf[69]+1);
t4=C_i_check_port_2(*((C_word*)lf[69]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[70]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2719,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:314: ##sys#print");
t6=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[125],C_SCHEME_FALSE,*((C_word*)lf[69]+1));}
else{
t2=((C_word*)t0)[2];
f_2636(2,t2,C_SCHEME_UNDEFINED);}}

/* k1748 in k1745 in k1742 in k1739 in k1736 in k1733 */
static void C_ccall f_1750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1750,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1753,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_posix_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2708 in k2637 in k2634 in setup-api#write-info in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in ... */
static void C_ccall f_2710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2710,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=C_a_i_list(&a,1,t1);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2564,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t4))){
C_trace("setup-api.scm:285: repository-path");
t6=C_fast_retrieve(lf[121]);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=C_i_car(t4);
C_trace("setup-api.scm:286: make-pathname");
t7=C_fast_retrieve(lf[76]);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t2,t6,t3,lf[0]);}}

/* k1757 in k1754 in k1751 in k1748 in k1745 in k1742 in k1739 in k1736 in k1733 */
static void C_ccall f_1759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1759,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1762,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2717 in k2711 in setup-api#write-info in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_2719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2719,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2722,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:314: ##sys#print");
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in k1775 in k1771 in k1766 in k1763 in k1760 in k1757 in k1754 in k1751 in ... */
static void C_ccall f_1843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1843,2,t0,t1);}
t2=C_mutate2((C_word*)lf[19]+1 /* (set! setup-api#setup-verbose-mode ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1847,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:110: make-parameter");
t4=C_fast_retrieve(lf[259]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_TRUE);}

/* a4000 in a3994 in a3988 in k3975 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in setup-api#try-compile in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in ... */
static void C_ccall f_4001(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4001,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* a4003 in a3988 in k3975 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in setup-api#try-compile in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in ... */
static void C_ccall f_4004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4004,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4010,a[2]=((C_word*)t0)[2],a[3]=((C_word)li55),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4039,a[2]=((C_word*)t0)[3],a[3]=((C_word)li57),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:540: ##sys#call-with-values");
C_call_with_values(4,0,t1,t2,t3);}

/* k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in k1775 in k1771 in k1766 in k1763 in k1760 in k1757 in k1754 in ... */
static void C_ccall f_1847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1847,2,t0,t1);}
t2=C_mutate2((C_word*)lf[20]+1 /* (set! setup-api#setup-install-mode ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1851,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:111: make-parameter");
t4=C_fast_retrieve(lf[259]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_FALSE);}

/* k1742 in k1739 in k1736 in k1733 */
static void C_ccall f_1744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1744,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1747,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_irregex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1739 in k1736 in k1733 */
static void C_ccall f_1741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1741,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1744,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d1_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* a2701 in k2643 in k2640 in k2637 in k2634 in setup-api#write-info in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in ... */
static void C_ccall f_2702(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2702,2,t0,t1);}
t2=C_fast_retrieve(lf[119]);
C_trace("setup-api.scm:322: g563");
t3=C_fast_retrieve(lf[119]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,((C_word*)t0)[2]);}

/* k1745 in k1742 in k1739 in k1736 in k1733 */
static void C_ccall f_1747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1747,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1750,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k4031 in k4028 in k4025 in k4022 in k4016 in a4009 in a4003 in a3988 in k3975 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in setup-api#try-compile in k2586 in k2582 in k2578 in ... */
static void C_ccall f_4033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:540: $system");
f_4674(((C_word*)t0)[2],t1);}

/* k1869 in setup-api#extra-features in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in k1775 in k1771 in ... */
static void C_ccall f_1871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k4028 in k4025 in k4022 in k4016 in a4009 in a4003 in a3988 in k3975 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in setup-api#try-compile in k2586 in k2582 in k2578 in k2187 in ... */
static void C_ccall f_4030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4030,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4033,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:540: get-output-string");
t3=C_fast_retrieve(lf[64]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k4035 in k4025 in k4022 in k4016 in a4009 in a4003 in a3988 in k3975 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in setup-api#try-compile in k2586 in k2582 in k2578 in k2187 in ... */
static void C_ccall f_4037(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:540: ##sys#print");
t2=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* a4038 in a4003 in a3988 in k3975 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in setup-api#try-compile in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in ... */
static void C_ccall f_4039(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_4039r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4039r(t0,t1,t2);}}

static void C_ccall f_4039r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4045,a[2]=t2,a[3]=((C_word)li56),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:540: k1081");
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

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
if(!C_demand_2(1372)){
C_save(t1);
C_rereclaim2(1372*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,280);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\012setup-info");
lf[11]=C_h_intern(&lf[11],24,"setup-api#host-extension");
lf[13]=C_h_intern(&lf[13],24,"setup-api#chicken-prefix");
lf[14]=C_h_intern(&lf[14],19,"setup-api#shellpath");
lf[15]=C_h_intern(&lf[15],2,"qs");
lf[16]=C_h_intern(&lf[16],18,"normalize-pathname");
lf[18]=C_h_intern(&lf[18],30,"setup-api#setup-root-directory");
lf[19]=C_h_intern(&lf[19],28,"setup-api#setup-verbose-mode");
lf[20]=C_h_intern(&lf[20],28,"setup-api#setup-install-mode");
lf[21]=C_h_intern(&lf[21],25,"setup-api#deployment-mode");
lf[22]=C_h_intern(&lf[22],22,"setup-api#program-path");
lf[23]=C_h_intern(&lf[23],28,"setup-api#keep-intermediates");
lf[24]=C_h_intern(&lf[24],24,"setup-api#extra-features");
lf[25]=C_h_intern(&lf[25],17,"register-feature!");
lf[26]=C_h_intern(&lf[26],27,"setup-api#extra-nonfeatures");
lf[27]=C_h_intern(&lf[27],19,"unregister-feature!");
lf[35]=C_decode_literal(C_heaptop,"\376B\000\000\004copy");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000\011del /Q /S");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\004move");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\005chmod");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\006ranlib");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\005cp -r");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\006rm -fr");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\002mv");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\005chmod");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000\006ranlib");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\005mkdir");
lf[46]=C_h_intern(&lf[46],22,"setup-api#sudo-install");
lf[47]=C_h_intern(&lf[47],5,"print");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\0001Warning: cannot install as superuser with Windows");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\012sudo cp -r");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\013sudo rm -fr");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000\007sudo mv");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\012sudo chmod");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\013sudo ranlib");
lf[54]=C_decode_literal(C_heaptop,"\376B\000\000\012sudo mkdir");
lf[55]=C_h_intern(&lf[55],21,"setup-api#abort-setup");
lf[56]=C_h_intern(&lf[56],15,"setup-api#patch");
lf[57]=C_h_intern(&lf[57],10,"write-line");
lf[58]=C_h_intern(&lf[58],19,"irregex-replace/all");
lf[59]=C_h_intern(&lf[59],9,"read-line");
lf[60]=C_h_intern(&lf[60],20,"with-input-from-file");
lf[61]=C_h_intern(&lf[61],19,"with-output-to-file");
lf[62]=C_h_intern(&lf[62],7,"sprintf");
lf[64]=C_h_intern(&lf[64],17,"get-output-string");
lf[65]=C_h_intern(&lf[65],9,"\003sysprint");
lf[66]=C_h_intern(&lf[66],16,"\003syswrite-char-0");
lf[67]=C_h_intern(&lf[67],18,"open-output-string");
lf[68]=C_h_intern(&lf[68],21,"create-temporary-file");
lf[69]=C_h_intern(&lf[69],19,"\003sysstandard-output");
lf[70]=C_h_intern(&lf[70],6,"printf");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\004 ...");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000\011patching ");
lf[73]=C_h_intern(&lf[73],21,"setup-api#run-verbose");
lf[74]=C_h_intern(&lf[74],26,"setup-api#register-program");
lf[75]=C_h_intern(&lf[75],8,"->string");
lf[76]=C_h_intern(&lf[76],13,"make-pathname");
lf[77]=C_h_intern(&lf[77],22,"setup-api#find-program");
lf[78]=C_h_intern(&lf[78],17,"setup-api#execute");
lf[79]=C_h_intern(&lf[79],3,"map");
lf[80]=C_h_intern(&lf[80],18,"string-intersperse");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\000\003csc");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\002-k");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\005-host");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\011-deployed");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[90]=C_h_intern(&lf[90],5,"cons\052");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\010-feature");
lf[92]=C_decode_literal(C_heaptop,"\376B\000\000\023compiling-extension");
lf[93]=C_h_intern(&lf[93],6,"append");
lf[94]=C_h_intern(&lf[94],17,"\003sysstring-append");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000\014-no-feature ");
lf[96]=C_h_intern(&lf[96],14,"symbol->string");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\011-feature ");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000\013-setup-mode");
lf[99]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[100]=C_h_intern(&lf[100],8,"feature\077");
lf[101]=C_h_intern(&lf[101],14,"\000cross-chicken");
lf[102]=C_decode_literal(C_heaptop,"\376B\000\000\003csc");
lf[103]=C_h_intern(&lf[103],9,"substring");
lf[104]=C_h_intern(&lf[104],14,"string-prefix\077");
lf[105]=C_decode_literal(C_heaptop,"\376B\000\000\002./");
lf[106]=C_h_intern(&lf[106],8,"for-each");
lf[107]=C_h_intern(&lf[107],16,"\003sysflush-output");
lf[108]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[109]=C_h_intern(&lf[109],28,"setup-api#destination-prefix");
lf[110]=C_h_intern(&lf[110],24,"setup-api#runtime-prefix");
lf[111]=C_h_intern(&lf[111],29,"setup-api#installation-prefix");
lf[112]=C_decode_literal(C_heaptop,"\376B\000\000\010  mkdir ");
lf[113]=C_h_intern(&lf[113],16,"create-directory");
lf[114]=C_h_intern(&lf[114],2,"-p");
lf[115]=C_h_intern(&lf[115],34,"setup-api#create-directory/parents");
lf[117]=C_h_intern(&lf[117],5,"files");
lf[118]=C_h_intern(&lf[118],3,"a+r");
lf[119]=C_h_intern(&lf[119],2,"pp");
lf[121]=C_h_intern(&lf[121],15,"repository-path");
lf[123]=C_decode_literal(C_heaptop,"\376B\000\000\004 ...");
lf[124]=C_decode_literal(C_heaptop,"\376B\000\000\004 -> ");
lf[125]=C_decode_literal(C_heaptop,"\376B\000\000\015writing info ");
lf[126]=C_h_intern(&lf[126],19,"setup-api#copy-file");
lf[127]=C_h_intern(&lf[127],9,"directory");
lf[128]=C_h_intern(&lf[128],10,"directory\077");
lf[129]=C_h_intern(&lf[129],18,"absolute-pathname\077");
lf[130]=C_h_intern(&lf[130],19,"setup-api#move-file");
lf[131]=C_h_intern(&lf[131],22,"setup-api#remove-file\052");
lf[134]=C_h_intern(&lf[134],5,"error");
lf[135]=C_decode_literal(C_heaptop,"\376B\000\000\032invalid file-specification");
lf[136]=C_h_intern(&lf[136],5,"every");
lf[137]=C_h_intern(&lf[137],7,"string\077");
lf[139]=C_h_intern(&lf[139],7,"version");
lf[140]=C_h_intern(&lf[140],8,"egg-name");
lf[141]=C_h_intern(&lf[141],24,"setup-api#extension-name");
lf[142]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[143]=C_decode_literal(C_heaptop,"\376B\000\000\007unknown");
lf[144]=C_h_intern(&lf[144],36,"setup-api#extension-name-and-version");
lf[145]=C_h_intern(&lf[145],28,"setup-api#standard-extension");
lf[146]=C_h_intern(&lf[146],27,"setup-api#install-extension");
lf[147]=C_h_intern(&lf[147],12,"file-exists\077");
lf[148]=C_h_intern(&lf[148],26,"pathname-replace-extension");
lf[149]=C_decode_literal(C_heaptop,"\376B\000\000\002so");
lf[150]=C_decode_literal(C_heaptop,"\376B\000\000\002so");
lf[151]=C_h_intern(&lf[151],3,"csc");
lf[152]=C_h_intern(&lf[152],8,"-dynamic");
lf[153]=C_h_intern(&lf[153],15,"-optimize-level");
lf[154]=C_h_intern(&lf[154],12,"-debug-level");
lf[155]=C_h_intern(&lf[155],20,"-emit-import-library");
lf[156]=C_decode_literal(C_heaptop,"\376B\000\000\006inline");
lf[157]=C_decode_literal(C_heaptop,"\376B\000\000\012import.scm");
lf[158]=C_decode_literal(C_heaptop,"\376B\000\000\003scm");
lf[159]=C_h_intern(&lf[159],15,"\003sysget-keyword");
lf[160]=C_h_intern(&lf[160],5,"\000info");
lf[161]=C_h_intern(&lf[161],6,"static");
lf[162]=C_h_intern(&lf[162],6,"macosx");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[164]=C_h_intern(&lf[164],18,"pathname-extension");
lf[165]=C_h_intern(&lf[165],16,"software-version");
lf[166]=C_h_intern(&lf[166],25,"setup-api#install-program");
lf[167]=C_decode_literal(C_heaptop,"\376B\000\000\003exe");
lf[168]=C_decode_literal(C_heaptop,"\376B\000\000\002so");
lf[169]=C_h_intern(&lf[169],26,"\003sysload-dynamic-extension");
lf[170]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[171]=C_decode_literal(C_heaptop,"\376B\000\000\003lib");
lf[172]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[173]=C_decode_literal(C_heaptop,"\376B\000\000\003bin");
lf[174]=C_h_intern(&lf[174],24,"setup-api#install-script");
lf[175]=C_h_intern(&lf[175],4,"a+rx");
lf[176]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[177]=C_decode_literal(C_heaptop,"\376B\000\000\003bin");
lf[178]=C_decode_literal(C_heaptop,"\376B\000\000\014lib/chicken/");
lf[179]=C_decode_literal(C_heaptop,"\376B\000\000Acannot create directory: a file with the same name already exists");
lf[180]=C_h_intern(&lf[180],3,"a+x");
lf[181]=C_h_intern(&lf[181],18,"pathname-directory");
lf[182]=C_h_intern(&lf[182],21,"setup-api#try-compile");
lf[183]=C_h_intern(&lf[183],4,"\000c++");
lf[184]=C_h_intern(&lf[184],22,"with-exception-handler");
lf[185]=C_h_intern(&lf[185],30,"call-with-current-continuation");
lf[186]=C_decode_literal(C_heaptop,"\376B\000\000\012succeeded.");
lf[187]=C_decode_literal(C_heaptop,"\376B\000\000\007failed.");
lf[188]=C_h_intern(&lf[188],6,"system");
lf[189]=C_decode_literal(C_heaptop,"\376B\000\000\004 ...");
lf[190]=C_decode_literal(C_heaptop,"\376B\000\000\002-c");
lf[191]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[192]=C_decode_literal(C_heaptop,"\376B\000\000\007 >nul: ");
lf[193]=C_decode_literal(C_heaptop,"\376B\000\000\014 >/dev/null ");
lf[194]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[195]=C_decode_literal(C_heaptop,"\376B\000\000\0042>&1");
lf[196]=C_h_intern(&lf[196],4,"conc");
lf[197]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[198]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[199]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[200]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[201]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[202]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[203]=C_decode_literal(C_heaptop,"\376B\000\000\002-L");
lf[204]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[205]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[206]=C_h_intern(&lf[206],7,"display");
lf[207]=C_decode_literal(C_heaptop,"\376B\000\000\001o");
lf[208]=C_decode_literal(C_heaptop,"\376B\000\000\001c");
lf[209]=C_h_intern(&lf[209],13,"\000compile-only");
lf[210]=C_h_intern(&lf[210],5,"\000verb");
lf[211]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[212]=C_h_intern(&lf[212],8,"\000ldflags");
lf[213]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[214]=C_h_intern(&lf[214],7,"\000cflags");
lf[215]=C_h_intern(&lf[215],3,"\000cc");
lf[216]=C_h_intern(&lf[216],22,"setup-api#test-compile");
lf[217]=C_h_intern(&lf[217],22,"setup-api#find-library");
lf[218]=C_decode_literal(C_heaptop,"\376B\000\000\002-l");
lf[219]=C_decode_literal(C_heaptop,"\376B\000\000\017(); return 0; }");
lf[220]=C_decode_literal(C_heaptop,"\376B\000\000\015int main() { ");
lf[221]=C_decode_literal(C_heaptop,"\376B\000\000\003();");
lf[222]=C_decode_literal(C_heaptop,"\376B\000\000\005char ");
lf[223]=C_decode_literal(C_heaptop,"\376B\000\000\006#endif");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000\012extern \042C\042");
lf[225]=C_decode_literal(C_heaptop,"\376B\000\000\022#ifdef __cplusplus");
lf[226]=C_h_intern(&lf[226],21,"setup-api#find-header");
lf[227]=C_decode_literal(C_heaptop,"\376B\000\000\033>\012int main() { return 0; }\012");
lf[228]=C_decode_literal(C_heaptop,"\376B\000\000\012#include <");
lf[229]=C_h_intern(&lf[229],20,"setup-api#version>=\077");
lf[230]=C_h_intern(&lf[230],13,"irregex-split");
lf[231]=C_decode_literal(C_heaptop,"\376B\000\000\006[-\134._]");
lf[232]=C_h_intern(&lf[232],8,"string>\077");
lf[233]=C_h_intern(&lf[233],27,"setup-api#extension-version");
lf[234]=C_h_intern(&lf[234],12,"string-null\077");
lf[235]=C_h_intern(&lf[235],19,"setup-api#read-info");
lf[236]=C_h_intern(&lf[236],4,"read");
lf[237]=C_h_intern(&lf[237],26,"setup-api#remove-directory");
lf[238]=C_decode_literal(C_heaptop,"\376B\000\000\014sudo rm -fr ");
lf[239]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[240]=C_h_intern(&lf[240],11,"delete-file");
lf[241]=C_decode_literal(C_heaptop,"\376B\000\000\002..");
lf[242]=C_h_intern(&lf[242],16,"delete-directory");
lf[243]=C_h_intern(&lf[243],16,"remove-directory");
lf[244]=C_decode_literal(C_heaptop,"\376B\000\000#cannot remove - directory not found");
lf[245]=C_h_intern(&lf[245],26,"setup-api#remove-extension");
lf[246]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[247]=C_decode_literal(C_heaptop,"\376B\000\000.shell command failed with nonzero exit status ");
lf[248]=C_h_intern(&lf[248],13,"string-append");
lf[249]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[250]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[251]=C_h_intern(&lf[251],30,"setup-api#setup-error-handling");
lf[252]=C_h_intern(&lf[252],5,"reset");
lf[253]=C_h_intern(&lf[253],19,"print-error-message");
lf[254]=C_h_intern(&lf[254],18,"\003sysstandard-error");
lf[255]=C_h_intern(&lf[255],29,"\003syscurrent-exception-handler");
lf[256]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\000\376\003\000\000\002\376B\000\000\000\376\377\016");
lf[257]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[258]=C_decode_literal(C_heaptop,"\376B\000\000\042invalid extension-name-and-version");
lf[259]=C_h_intern(&lf[259],14,"make-parameter");
lf[260]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\000\376\003\000\000\002\376B\000\000\000\376\377\016");
lf[261]=C_h_intern(&lf[261],24,"get-environment-variable");
lf[262]=C_decode_literal(C_heaptop,"\376B\000\000\026CHICKEN_INSTALL_PREFIX");
lf[263]=C_decode_literal(C_heaptop,"\376B\000\000\013chicken-bug");
lf[264]=C_h_intern(&lf[264],17,"\003syspeek-c-string");
lf[265]=C_decode_literal(C_heaptop,"\376B\000\000\016chicken-status");
lf[266]=C_decode_literal(C_heaptop,"\376B\000\000\021chicken-uninstall");
lf[267]=C_decode_literal(C_heaptop,"\376B\000\000\017chicken-install");
lf[268]=C_decode_literal(C_heaptop,"\376B\000\000\003csc");
lf[269]=C_decode_literal(C_heaptop,"\376B\000\000\003csi");
lf[270]=C_decode_literal(C_heaptop,"\376B\000\000\007chicken");
lf[271]=C_h_intern(&lf[271],4,"exit");
lf[272]=C_h_intern(&lf[272],17,"current-directory");
lf[273]=C_decode_literal(C_heaptop,"\376B\000\000\016CHICKEN_PREFIX");
lf[274]=C_decode_literal(C_heaptop,"\376B\000\000\003bin");
lf[275]=C_decode_literal(C_heaptop,"\376B\000\000\016CHICKEN_PREFIX");
lf[276]=C_h_intern(&lf[276],13,"chicken-setup");
lf[277]=C_h_intern(&lf[277],7,"windows");
lf[278]=C_h_intern(&lf[278],14,"build-platform");
lf[279]=C_h_intern(&lf[279],13,"software-type");
C_register_lf2(lf,280,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1735,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1771 in k1766 in k1763 in k1760 in k1757 in k1754 in k1751 in k1748 in k1745 in k1742 in k1739 in k1736 in k1733 */
static void C_ccall f_1773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1773,2,t0,t1);}
t2=C_mutate2(&lf[2] /* (set! setup-api#*cc* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1777,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[264]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_TARGET_CXX),C_fix(0));}

/* k1775 in k1771 in k1766 in k1763 in k1760 in k1757 in k1754 in k1751 in k1748 in k1745 in k1742 in k1739 in k1736 in k1733 */
static void C_ccall f_1777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1777,2,t0,t1);}
t2=C_mutate2(&lf[3] /* (set! setup-api#*cxx* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1781,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[264]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_TARGET_CFLAGS),C_fix(0));}

/* k2772 in walk in k2760 in k2757 in k2754 in k2748 in setup-api#copy-file in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in ... */
static void C_ccall f_2774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2774,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2775,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li26),tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2790,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:339: directory");
t4=C_fast_retrieve(lf[127]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2819,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:341: ensure-directory");
f_3886(t2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);}}

/* g606 in k2772 in walk in k2760 in k2757 in k2754 in k2748 in setup-api#copy-file in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in ... */
static void C_fcall f_2775(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2775,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2783,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:338: make-pathname");
t4=C_fast_retrieve(lf[76]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],t2);}

/* k4022 in k4016 in a4009 in a4003 in a3988 in k3975 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in setup-api#try-compile in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in ... */
static void C_ccall f_4024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4024,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4027,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:540: ##sys#write-char-0");
((C_proc4)C_fast_retrieve_symbol_proc(lf[66]))(4,*((C_word*)lf[66]+1),t2,C_make_character(32),((C_word*)t0)[4]);}

/* setup-api#extra-features in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in k1775 in k1771 in k1766 in ... */
static void C_ccall f_1861(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_1861r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1861r(t0,t1,t2);}}

static void C_ccall f_1861r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=t4;
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1871,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_apply(4,0,t6,C_fast_retrieve(lf[25]),t5);}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k4025 in k4022 in k4016 in a4009 in a4003 in a3988 in k3975 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in setup-api#try-compile in k2586 in k2582 in k2578 in k2187 in k2184 in ... */
static void C_ccall f_4027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4027,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4030,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4037,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:540: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t3,((C_word*)t0)[5]);}

/* k1763 in k1760 in k1757 in k1754 in k1751 in k1748 in k1745 in k1742 in k1739 in k1736 in k1733 */
static void C_ccall f_1765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1765,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1768,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2760 in k2757 in k2754 in k2748 in setup-api#copy-file in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in ... */
static void C_ccall f_2762(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2762,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2765,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2767,a[2]=t5,a[3]=((C_word)li28),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_2767(t7,t3,((C_word*)t0)[3],t2);}

/* k1760 in k1757 in k1754 in k1751 in k1748 in k1745 in k1742 in k1739 in k1736 in k1733 */
static void C_ccall f_1762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1762,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1765,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* walk in k2760 in k2757 in k2754 in k2748 in setup-api#copy-file in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in ... */
static void C_fcall f_2767(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2767,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2774,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:335: directory?");
t5=C_fast_retrieve(lf[128]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k1766 in k1763 in k1760 in k1757 in k1754 in k1751 in k1748 in k1745 in k1742 in k1739 in k1736 in k1733 */
static void C_ccall f_1768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1768,2,t0,t1);}
t2=C_mutate2(&lf[0] /* (set! setup-api#constant26 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1773,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[264]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_TARGET_CC),C_fix(0));}

/* k2763 in k2760 in k2757 in k2754 in k2748 in setup-api#copy-file in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in ... */
static void C_ccall f_2765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k1888 in setup-api#extra-nonfeatures in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in k1775 in k1771 in ... */
static void C_ccall f_1890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2748 in setup-api#copy-file in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_ccall f_2750(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2750,2,t0,t1);}
t2=t1;
t3=C_i_nullp(((C_word*)t0)[2]);
t4=(C_truep(t3)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2756,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t6=((C_word*)t0)[4];
t7=t5;
f_2756(t7,C_u_i_car(t6));}
else{
t6=t5;
f_2756(t6,((C_word*)t0)[4]);}}

/* k2757 in k2754 in k2748 in setup-api#copy-file in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in ... */
static void C_ccall f_2759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2759,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2762,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2854,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=t4;
t6=t2;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2905,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:349: normalize-pathname");
t8=C_fast_retrieve(lf[16]);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,((C_word*)t0)[4]);}

/* k2754 in k2748 in setup-api#copy-file in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_fcall f_2756(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2756,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2759,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t4=C_i_cadr(((C_word*)t0)[4]);
C_trace("setup-api.scm:328: make-pathname");
t5=C_fast_retrieve(lf[76]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,((C_word*)t0)[5],t4);}
else{
t4=t3;
f_2759(2,t4,((C_word*)t0)[5]);}}

/* k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in k1775 in k1771 in k1766 in k1763 in k1760 in k1757 in k1754 in k1751 in k1748 in k1745 in k1742 in k1739 in k1736 in k1733 */
static void C_ccall f_1803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1803,2,t0,t1);}
t2=C_mutate2((C_word*)lf[11]+1 /* (set! setup-api#host-extension ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1807,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:94: get-environment-variable");
t4=C_fast_retrieve(lf[261]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[275]);}

/* k3416 in k3314 in k3311 in k3308 in k3305 in setup-api#install-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in ... */
static void C_ccall f_3418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3418,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3425,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:447: supply-version");
f_3157(t3,((C_word*)t0)[4],C_SCHEME_FALSE);}

/* k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in k1775 in k1771 in k1766 in k1763 in k1760 in k1757 in k1754 in k1751 in k1748 in k1745 in k1742 in k1739 in k1736 in k1733 */
static void C_ccall f_1807(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1807,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1810,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
C_trace("setup-api.scm:95: make-pathname");
t3=C_fast_retrieve(lf[76]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,lf[274]);}
else{
t3=t2;
f_1810(2,t3,C_SCHEME_FALSE);}}

/* setup-api#copy-file in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in ... */
static void C_ccall f_2740(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_2740r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2740r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2740r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(6);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_TRUE:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=t8;
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2750,a[2]=t9,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_nullp(t9))){
C_trace("setup-api.scm:325: installation-prefix");
((C_proc2)C_fast_retrieve_symbol_proc(lf[111]))(2,*((C_word*)lf[111]+1),t10);}
else{
t11=t10;
f_2750(2,t11,C_i_car(t9));}}

/* k3406 in k3325 in k3322 in k3319 in g815 in k3314 in k3311 in k3308 in k3305 in setup-api#install-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in ... */
static void C_ccall f_3408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3408,2,t0,t1);}
t2=C_a_i_list(&a,3,C_retrieve2(lf[31],"setup-api#\052chmod-command\052"),lf[118],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:437: execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[78]))(3,*((C_word*)lf[78]+1),((C_word*)t0)[2],t3);}

/* k1828 in setup-api#shellpath in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in k1775 in k1771 in k1766 in k1763 in k1760 in k1757 in k1754 in k1751 in k1748 in ... */
static void C_ccall f_1830(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:103: qs");
t2=C_fast_retrieve(lf[15]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in k1775 in k1771 in k1766 in k1763 in k1760 in k1757 in k1754 in k1751 in k1748 in k1745 in ... */
static void C_ccall f_1835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1835,2,t0,t1);}
t2=C_mutate2(&lf[17] /* (set! setup-api#*base-directory* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1839,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:108: make-parameter");
t4=C_fast_retrieve(lf[259]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_retrieve2(lf[17],"setup-api#\052base-directory\052"));}

/* k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in k1775 in k1771 in k1766 in k1763 in k1760 in k1757 in k1754 in k1751 in k1748 in ... */
static void C_ccall f_1839(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1839,2,t0,t1);}
t2=C_mutate2((C_word*)lf[18]+1 /* (set! setup-api#setup-root-directory ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1843,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:109: make-parameter");
t4=C_fast_retrieve(lf[259]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_FALSE);}

/* k1733 */
static void C_ccall f_1735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1735,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1738,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1736 in k1733 */
static void C_ccall f_1738(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1738,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1741,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_chicken_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* setup-api#shellpath in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in k1775 in k1771 in k1766 in k1763 in k1760 in k1757 in k1754 in k1751 in k1748 in k1745 in ... */
static void C_ccall f_1822(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1822,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1830,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:103: normalize-pathname");
t4=C_fast_retrieve(lf[16]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in k1775 in k1771 in k1766 in k1763 in k1760 in k1757 in k1754 in k1751 in k1748 in k1745 in k1742 in ... */
static void C_ccall f_1820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1820,2,t0,t1);}
t2=C_mutate2((C_word*)lf[13]+1 /* (set! setup-api#chicken-prefix ...) */,t1);
t3=C_mutate2((C_word*)lf[14]+1 /* (set! setup-api#shellpath ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1822,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1835,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:106: current-directory");
t5=C_fast_retrieve(lf[272]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* map-loop809 in k3314 in k3311 in k3308 in k3305 in setup-api#install-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in ... */
static void C_fcall f_3427(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3427,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3456,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-api.scm:432: g815");
t5=((C_word*)t0)[5];
f_3317(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3423 in k3416 in k3314 in k3311 in k3308 in k3305 in setup-api#install-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in ... */
static void C_ccall f_3425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:447: write-info");
f_2629(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in k1775 in k1771 in k1766 in k1763 in k1760 in ... */
static void C_ccall f_1855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1855,2,t0,t1);}
t2=C_mutate2((C_word*)lf[22]+1 /* (set! setup-api#program-path ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1859,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:113: make-parameter");
t4=C_fast_retrieve(lf[259]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_FALSE);}

/* a4009 in a4003 in a3988 in k3975 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in setup-api#try-compile in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in ... */
static void C_ccall f_4010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4010,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4018,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:540: open-output-string");
t3=C_fast_retrieve(lf[67]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in k1775 in k1771 in k1766 in k1763 in k1760 in k1757 in ... */
static void C_ccall f_1851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1851,2,t0,t1);}
t2=C_mutate2((C_word*)lf[21]+1 /* (set! setup-api#deployment-mode ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1855,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:112: make-parameter");
t4=C_fast_retrieve(lf[259]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_retrieve2(lf[12],"setup-api#\052chicken-bin-path\052"));}

/* k4016 in a4009 in a4003 in a3988 in k3975 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in setup-api#try-compile in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in ... */
static void C_ccall f_4018(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4018,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[62]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4024,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:540: ##sys#print");
t6=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,C_retrieve2(lf[29],"setup-api#\052remove-command\052"),C_SCHEME_FALSE,t3);}

/* k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in k1775 in k1771 in k1766 in k1763 in ... */
static void C_ccall f_1859(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1859,2,t0,t1);}
t2=C_mutate2((C_word*)lf[23]+1 /* (set! setup-api#keep-intermediates ...) */,t1);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_mutate2((C_word*)lf[24]+1 /* (set! setup-api#extra-features ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1861,a[2]=t4,a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp));
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_mutate2((C_word*)lf[26]+1 /* (set! setup-api#extra-nonfeatures ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1880,a[2]=t7,a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp));
t9=lf[28] /* setup-api#*copy-command* */ =C_SCHEME_UNDEFINED;;
t10=lf[29] /* setup-api#*remove-command* */ =C_SCHEME_UNDEFINED;;
t11=lf[30] /* setup-api#*move-command* */ =C_SCHEME_UNDEFINED;;
t12=lf[31] /* setup-api#*chmod-command* */ =C_SCHEME_UNDEFINED;;
t13=lf[32] /* setup-api#*ranlib-command* */ =C_SCHEME_UNDEFINED;;
t14=lf[33] /* setup-api#*mkdir-command* */ =C_SCHEME_UNDEFINED;;
t15=C_mutate2(&lf[34] /* (set! setup-api#user-install-setup ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1938,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2((C_word*)lf[46]+1 /* (set! setup-api#sudo-install ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1964,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1987,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4866,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:182: make-parameter");
t19=C_fast_retrieve(lf[259]);
((C_proc3)(void*)(*((C_word*)t19+1)))(3,t19,t17,t18);}

/* k4625 in k4618 in k4661 in k4612 in setup-api#remove-extension in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in ... */
static void C_ccall f_4627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:624: remove-file*");
((C_proc3)C_fast_retrieve_symbol_proc(lf[131]))(3,*((C_word*)lf[131]+1),((C_word*)t0)[2],t1);}

/* k4618 in k4661 in k4612 in setup-api#remove-extension in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in ... */
static void C_ccall f_4620(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4620,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4627,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:624: make-pathname");
t3=C_fast_retrieve(lf[76]);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[3],((C_word*)t0)[4],lf[0]);}

/* k4612 in setup-api#remove-extension in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_4614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4614,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4663,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:622: read-info");
((C_proc4)C_fast_retrieve_symbol_proc(lf[235]))(4,*((C_word*)lf[235]+1),t3,((C_word*)t0)[3],t2);}

/* setup-api#remove-extension in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_ccall f_4610(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_4610r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4610r(t0,t1,t2,t3);}}

static void C_ccall f_4610r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4614,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
C_trace("setup-api.scm:621: repository-path");
t5=C_fast_retrieve(lf[121]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=t4;
f_4614(2,t5,C_i_car(t3));}}

/* k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in k1775 in k1771 in k1766 in k1763 in k1760 in k1757 in k1754 in k1751 in k1748 in k1745 in k1742 in k1739 in k1736 in k1733 in ... */
static void C_ccall f_1810(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1810,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1813,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;
f_1813(2,t3,t1);}
else{
C_trace("##sys#peek-c-string");
t3=*((C_word*)lf[264]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_INSTALL_BIN_HOME),C_fix(0));}}

/* k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in k1775 in k1771 in k1766 in k1763 in k1760 in k1757 in k1754 in k1751 in k1748 in k1745 in k1742 in k1739 in k1736 in ... */
static void C_ccall f_1813(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1813,2,t0,t1);}
t2=C_mutate2(&lf[12] /* (set! setup-api#*chicken-bin-path* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1817,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:99: get-environment-variable");
t4=C_fast_retrieve(lf[261]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[273]);}

/* k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in k1775 in k1771 in k1766 in k1763 in k1760 in k1757 in k1754 in k1751 in k1748 in k1745 in k1742 in k1739 in ... */
static void C_ccall f_1817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1817,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1820,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;
f_1820(2,t3,t1);}
else{
C_trace("##sys#peek-c-string");
t3=*((C_word*)lf[264]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_INSTALL_PREFIX),C_fix(0));}}

/* a4044 in a4038 in a4003 in a3988 in k3975 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in setup-api#try-compile in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in ... */
static void C_ccall f_4045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4045,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* k2729 in k2726 in k2723 in k2720 in k2717 in k2711 in setup-api#write-info in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in ... */
static void C_ccall f_2731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:314: ##sys#write-char-0");
((C_proc4)C_fast_retrieve_symbol_proc(lf[66]))(4,*((C_word*)lf[66]+1),((C_word*)t0)[2],C_make_character(10),((C_word*)t0)[3]);}

/* k2720 in k2717 in k2711 in setup-api#write-info in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in ... */
static void C_ccall f_2722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2722,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2725,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:314: ##sys#print");
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[124],C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k2723 in k2720 in k2717 in k2711 in setup-api#write-info in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in ... */
static void C_ccall f_2725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2725,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2728,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:314: ##sys#print");
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[4],C_SCHEME_TRUE,((C_word*)t0)[3]);}

/* k2726 in k2723 in k2720 in k2717 in k2711 in setup-api#write-info in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in ... */
static void C_ccall f_2728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2728,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2731,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:314: ##sys#print");
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[123],C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k3454 in map-loop809 in k3314 in k3311 in k3308 in k3305 in setup-api#install-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in ... */
static void C_ccall f_3456(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3456,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3427(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3427(t6,((C_word*)t0)[5],t5);}}

/* k4695 in k4689 in k4676 in setup-api#$system in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in ... */
static void C_ccall f_4697(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4697,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4700,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:633: ##sys#print");
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[6],C_SCHEME_FALSE,((C_word*)t0)[5]);}

/* k4689 in k4676 in setup-api#$system in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in ... */
static void C_ccall f_4691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4691,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[62]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4697,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:633: ##sys#print");
t6=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[247],C_SCHEME_FALSE,t3);}

/* k4791 in k4787 in k4757 in a4742 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in ... */
static void C_ccall f_4793(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4793,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list2(&a,2,((C_word*)t0)[3],t1));}

/* k4787 in k4757 in a4742 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_4789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4789,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4793,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:583: ensure-string");
f_4766(t3,((C_word*)t0)[4]);}

/* k4600 in setup-api#remove-directory in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_4602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4602,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(C_retrieve2(lf[7],"setup-api#\052sudo\052"))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4467,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4472,a[2]=((C_word*)t0)[3],a[3]=((C_word)li82),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:607: call-with-current-continuation");
t4=*((C_word*)lf[185]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4534,a[2]=t3,a[3]=((C_word)li85),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_4534(t5,((C_word*)t0)[2],((C_word*)t0)[3]);}}
else{
if(C_truep(((C_word*)t0)[4])){
C_trace("setup-api.scm:604: error");
t2=*((C_word*)lf[134]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[243],lf[244],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}}

/* map-loop372 in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in ... */
static void C_fcall f_2525(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2525,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2554,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-api.scm:270: g378");
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3692 in setup-api#install-script in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_ccall f_3694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3694,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3697,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[5]))){
t3=((C_word*)t0)[5];
C_trace("setup-api.scm:477: check-filelist");
f_2999(t2,t3);}
else{
t3=C_a_i_list1(&a,1,((C_word*)t0)[5]);
C_trace("setup-api.scm:477: check-filelist");
f_2999(t2,t3);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k3695 in k3692 in setup-api#install-script in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_3697(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3697,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3700,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:478: installation-prefix");
((C_proc2)C_fast_retrieve_symbol_proc(lf[111]))(2,*((C_word*)lf[111]+1),t3);}

/* k2456 in map-loop333 in smooth in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in ... */
static void C_ccall f_2458(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2458,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2429(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2429(t6,((C_word*)t0)[5],t5);}}

/* k3912 in k3900 in k3891 in setup-api#ensure-directory in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in ... */
static void C_ccall f_3914(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3914,2,t0,t1);}
if(C_truep(C_retrieve2(lf[8],"setup-api#\052windows-shell\052"))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3932,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:517: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t2,((C_word*)t0)[5]);}}

/* k3547 in k3508 in k3505 in k3502 in k3499 in k3496 in setup-api#install-program in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in ... */
static void C_ccall f_3549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3549,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3556,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:473: supply-version");
f_3157(t3,((C_word*)t0)[4],C_SCHEME_FALSE);}

/* k2355 in k2358 in k2223 in k2219 in k2408 in smooth in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in ... */
static void C_ccall f_2357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2357,2,t0,t1);}
t2=(C_truep(t1)?lf[86]:lf[87]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2354,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:248: deployment-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[21]))(2,*((C_word*)lf[21]+1),t4);}

/* k2352 in k2355 in k2358 in k2223 in k2219 in k2408 in smooth in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in ... */
static void C_ccall f_2354(C_word c,C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2354,2,t0,t1);}
t2=(C_truep(t1)?lf[88]:lf[89]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2241,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2255,a[2]=t4,a[3]=t8,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:252: extra-features");
((C_proc2)C_fast_retrieve_symbol_proc(lf[24]))(2,*((C_word*)lf[24]+1),t9);}

/* k3196 in k3181 in setup-api#supply-version in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_3198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3198,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[140],t1);
C_trace("setup-api.scm:399: cons*");
t3=C_fast_retrieve(lf[90]);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],((C_word*)t0)[3],t2,((C_word*)t0)[4]);}

/* k4272 in k4268 in setup-api#version>=? in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_4274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4274,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4276,a[2]=t3,a[3]=((C_word)li71),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_4276(t5,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k2510 in for-each-loop320 in k2492 in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in ... */
static void C_ccall f_2512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2502(t3,((C_word*)t0)[4],t2);}

/* loop in k4272 in k4268 in setup-api#version>=? in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in ... */
static void C_fcall f_4276(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(6);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4276,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_nullp(t3));}
else{
t4=C_i_nullp(t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=C_i_car(t2);
if(C_truep(C_i_numberp(t5))){
t6=C_i_car(t3);
if(C_truep(C_i_numberp(t6))){
t7=t2;
t8=C_u_i_car(t7);
t9=t3;
t10=C_u_i_car(t9);
t11=C_i_greaterp(t8,t10);
if(C_truep(t11)){
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,t11);}
else{
t12=t2;
t13=C_u_i_car(t12);
t14=t3;
t15=C_u_i_car(t14);
if(C_truep(C_i_nequalp(t13,t15))){
t16=t2;
t17=C_u_i_cdr(t16);
t18=t3;
t19=C_u_i_cdr(t18);
C_trace("setup-api.scm:567: loop");
t28=t1;
t29=t17;
t30=t19;
t1=t28;
t2=t29;
t3=t30;
goto loop;}
else{
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_SCHEME_FALSE);}}}
else{
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_FALSE);}}
else{
t6=C_i_car(t3);
t7=C_i_numberp(t6);
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4344,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t9=t2;
t10=C_u_i_car(t9);
t11=t3;
t12=C_u_i_car(t11);
C_trace("setup-api.scm:569: string>?");
t13=*((C_word*)lf[232]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t8,t10,t12);}}}}}

/* map-loop963 in k3701 in k3698 in k3695 in k3692 in setup-api#install-script in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in ... */
static void C_fcall f_3769(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3769,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3798,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-api.scm:480: g969");
t5=((C_word*)t0)[5];
f_3704(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3765 in k3740 in k3701 in k3698 in k3695 in k3692 in setup-api#install-script in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in ... */
static void C_ccall f_3767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3767,2,t0,t1);}
t2=C_a_i_list(&a,3,C_retrieve2(lf[31],"setup-api#\052chmod-command\052"),lf[175],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:489: execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[78]))(3,*((C_word*)lf[78]+1),((C_word*)t0)[2],t3);}

/* k4268 in setup-api#version>=? in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_ccall f_4270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4270,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4274,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:560: version->list");
f_4209(t3,((C_word*)t0)[4]);}

/* k3900 in k3891 in setup-api#ensure-directory in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_3902(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3902,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3908,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:512: directory?");
t3=C_fast_retrieve(lf[128]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3914,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:515: create-directory/parents");
((C_proc3)C_fast_retrieve_symbol_proc(lf[115]))(3,*((C_word*)lf[115]+1),t2,((C_word*)t0)[5]);}}

/* k2345 in map-loop263 in k2253 in k2352 in k2355 in k2358 in k2223 in k2219 in k2408 in smooth in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in ... */
static void C_ccall f_2347(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2347,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2318(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2318(t6,((C_word*)t0)[5],t5);}}

/* k3537 in k3519 in k3516 in k3513 in g913 in k3508 in k3505 in k3502 in k3499 in k3496 in setup-api#install-program in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in ... */
static void C_ccall f_3539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3539,2,t0,t1);}
t2=C_a_i_list(&a,3,C_retrieve2(lf[31],"setup-api#\052chmod-command\052"),lf[118],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:470: execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[78]))(3,*((C_word*)lf[78]+1),((C_word*)t0)[2],t3);}

/* k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in ... */
static void C_ccall f_2580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2580,2,t0,t1);}
t2=C_mutate2((C_word*)lf[109]+1 /* (set! setup-api#destination-prefix ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2584,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:289: make-parameter");
t4=C_fast_retrieve(lf[259]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_FALSE);}

/* k4547 in g1298 in k4536 in walk in k4600 in setup-api#remove-directory in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in ... */
static void C_fcall f_4549(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4549,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4552,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:614: make-pathname");
t3=C_fast_retrieve(lf[76]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}}

/* setup-api#installation-prefix in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in ... */
static void C_ccall f_2589(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2589,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2593,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:294: destination-prefix");
((C_proc2)C_fast_retrieve_symbol_proc(lf[109]))(2,*((C_word*)lf[109]+1),t2);}

/* k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in ... */
static void C_ccall f_2588(C_word c,C_word t0,C_word t1){
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
C_word ab[68],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2588,2,t0,t1);}
t2=t1;
t3=C_mutate2((C_word*)lf[111]+1 /* (set! setup-api#installation-prefix ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2589,a[2]=t2,a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2602,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp);
t5=(C_truep(C_retrieve2(lf[10],"setup-api#\052windows\052"))?(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4809,a[2]=t4,a[3]=((C_word)li21),tmp=(C_word)a,a+=4,tmp):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4817,a[2]=t4,a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp));
t6=C_mutate2((C_word*)lf[115]+1 /* (set! setup-api#create-directory/parents ...) */,t5);
t7=C_mutate2(&lf[116] /* (set! setup-api#write-info ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2629,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[126]+1 /* (set! setup-api#copy-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2740,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[130]+1 /* (set! setup-api#move-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2911,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[131]+1 /* (set! setup-api#remove-file* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2956,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2(&lf[132] /* (set! setup-api#make-dest-pathname ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2974,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2(&lf[133] /* (set! setup-api#check-filelist ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2999,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2(&lf[138] /* (set! setup-api#supply-version ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3157,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate2((C_word*)lf[145]+1 /* (set! setup-api#standard-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3200,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate2((C_word*)lf[146]+1 /* (set! setup-api#install-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3297,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2((C_word*)lf[166]+1 /* (set! setup-api#install-program ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3478,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate2((C_word*)lf[174]+1 /* (set! setup-api#install-script ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3684,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate2(&lf[122] /* (set! setup-api#repo-path ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3824,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate2(&lf[120] /* (set! setup-api#ensure-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3886,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate2((C_word*)lf[182]+1 /* (set! setup-api#try-compile ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3943,a[2]=((C_word)li66),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate2((C_word*)lf[216]+1 /* (set! setup-api#test-compile ...) */,C_fast_retrieve(lf[182]));
t22=C_mutate2((C_word*)lf[217]+1 /* (set! setup-api#find-library ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4119,a[2]=((C_word)li67),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate2((C_word*)lf[226]+1 /* (set! setup-api#find-header ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4181,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate2((C_word*)lf[229]+1 /* (set! setup-api#version>=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4206,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t25=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4380,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4743,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:575: make-parameter");
t27=C_fast_retrieve(lf[259]);
((C_proc4)(void*)(*((C_word*)t27+1)))(4,t27,t25,lf[260],t26);}

/* k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in ... */
static void C_ccall f_2584(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2584,2,t0,t1);}
t2=C_mutate2((C_word*)lf[110]+1 /* (set! setup-api#runtime-prefix ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2588,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:292: get-environment-variable");
t4=C_fast_retrieve(lf[261]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[262]);}

/* k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in setup-api#try-compile in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in ... */
static void C_ccall f_3971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3971,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3974,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4064,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(C_truep(((C_word*)t0)[5])?lf[190]:lf[191]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4078,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[6],a[5]=t5,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[5])){
t7=t6;
f_4078(2,t7,lf[202]);}
else{
C_trace("setup-api.scm:534: conc");
t7=C_fast_retrieve(lf[196]);
((C_proc8)(void*)(*((C_word*)t7+1)))(8,t7,t6,lf[203],C_retrieve2(lf[6],"setup-api#\052target-lib-home\052"),lf[204],((C_word*)t0)[8],lf[205],C_retrieve2(lf[5],"setup-api#\052target-libs\052"));}}

/* k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in setup-api#try-compile in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in ... */
static void C_ccall f_3974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3974,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3977,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
t4=C_eqp(t2,C_fix(0));
if(C_truep(t4)){
C_trace("setup-api.scm:539: print");
t5=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,lf[186]);}
else{
C_trace("setup-api.scm:539: print");
t5=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,lf[187]);}}
else{
t4=t3;
f_3977(2,t4,C_SCHEME_UNDEFINED);}}

/* k2477 in k2471 in for-each-loop320 in k2492 in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_ccall f_2479(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2479,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2482,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:268: ##sys#print");
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k2471 in for-each-loop320 in k2492 in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in ... */
static void C_ccall f_2473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2473,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[69]+1);
t3=*((C_word*)lf[69]+1);
t4=C_i_check_port_2(*((C_word*)lf[69]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[70]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2479,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:268: ##sys#print");
t6=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[108],C_SCHEME_FALSE,*((C_word*)lf[69]+1));}
else{
C_trace("setup-api.scm:269: $system");
f_4674(((C_word*)t0)[4],((C_word*)t0)[3]);}}

/* k3906 in k3900 in k3891 in setup-api#ensure-directory in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in ... */
static void C_ccall f_3908(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
C_trace("setup-api.scm:513: error");
t2=*((C_word*)lf[134]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[4],lf[179]);}}

/* k3750 in k3743 in k3740 in k3701 in k3698 in k3695 in k3692 in setup-api#install-script in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in ... */
static void C_ccall f_3752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:490: write-info");
f_2629(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3175 in g729 in setup-api#supply-version in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_3177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3177,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[140],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,t2,((C_word*)t0)[3]));}

/* g1298 in k4536 in walk in k4600 in setup-api#remove-directory in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in ... */
static void C_fcall f_4539(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4539,NULL,3,t0,t1,t2);}
t3=C_i_string_equal_p(lf[239],t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4549,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t5=t4;
f_4549(t5,t3);}
else{
t5=t2;
t6=t4;
f_4549(t6,C_u_i_string_equal_p(lf[241],t5));}}

/* k4536 in walk in k4600 in setup-api#remove-directory in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in ... */
static void C_ccall f_4538(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4538,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4539,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li83),tmp=(C_word)a,a+=5,tmp);
t3=C_i_check_list_2(t1,lf[106]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4572,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4577,a[2]=t6,a[3]=t2,a[4]=((C_word)li84),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_4577(t8,t4,t1);}

/* walk in k4600 in setup-api#remove-directory in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in ... */
static void C_fcall f_4534(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4534,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4538,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:610: directory");
t4=C_fast_retrieve(lf[127]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,C_SCHEME_TRUE);}

/* k3960 in k3957 in k3954 in k3951 in k3948 in setup-api#try-compile in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in ... */
static void C_ccall f_3962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3962,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3965,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
C_trace("setup-api.scm:522: create-temporary-file");
t4=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[208]);}

/* k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in setup-api#try-compile in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in ... */
static void C_ccall f_3965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3965,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3968,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
C_trace("setup-api.scm:523: pathname-replace-extension");
t4=C_fast_retrieve(lf[148]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[207]);}

/* k2465 in for-each-loop320 in k2492 in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in ... */
static void C_ccall f_2467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:269: $system");
f_4674(((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3181 in setup-api#supply-version in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_ccall f_3183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3183,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[139],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3198,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:401: extension-name");
((C_proc2)C_fast_retrieve_symbol_proc(lf[141]))(2,*((C_word*)lf[141]+1),t4);}

/* k3975 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in setup-api#try-compile in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in ... */
static void C_ccall f_3977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3977,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3980,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3989,a[2]=((C_word*)t0)[4],a[3]=((C_word)li59),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:540: call-with-current-continuation");
t4=*((C_word*)lf[185]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* k3740 in k3701 in k3698 in k3695 in k3692 in setup-api#install-script in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in ... */
static void C_ccall f_3742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3742,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3745,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[8],"setup-api#\052windows-shell\052"))){
t4=t3;
f_3745(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3767,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:489: string-intersperse");
t5=C_fast_retrieve(lf[80]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[176]);}}

/* k3743 in k3740 in k3701 in k3698 in k3695 in k3692 in setup-api#install-script in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in ... */
static void C_ccall f_3745(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3745,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3752,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:490: supply-version");
f_3157(t2,((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k3091 in exify in setup-api#install-program in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_3093(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
if(C_truep(C_i_equalp(lf[168],t1))){
t2=C_fast_retrieve(lf[169]);
t3=C_fast_retrieve(lf[169]);
C_trace("setup-api.scm:377: pathname-replace-extension");
t4=C_fast_retrieve(lf[148]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],((C_word*)t0)[3],C_fast_retrieve(lf[169]));}
else{
if(C_truep(C_i_equalp(lf[170],t1))){
if(C_truep(C_retrieve2(lf[8],"setup-api#\052windows-shell\052"))){
C_trace("setup-api.scm:377: pathname-replace-extension");
t2=C_fast_retrieve(lf[148]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[171]);}
else{
C_trace("setup-api.scm:377: pathname-replace-extension");
t2=C_fast_retrieve(lf[148]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[172]);}}
else{
C_trace("setup-api.scm:377: pathname-replace-extension");
t2=C_fast_retrieve(lf[148]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}}}
else{
C_trace("setup-api.scm:377: pathname-replace-extension");
t2=C_fast_retrieve(lf[148]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}}

/* a4483 in a4477 in a4471 in k4600 in setup-api#remove-directory in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in ... */
static void C_ccall f_4484(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4484,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* a4486 in a4471 in k4600 in setup-api#remove-directory in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in ... */
static void C_ccall f_4487(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4487,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4493,a[2]=((C_word*)t0)[2],a[3]=((C_word)li78),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4519,a[2]=((C_word*)t0)[3],a[3]=((C_word)li80),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:607: ##sys#call-with-values");
C_call_with_values(4,0,t1,t2,t3);}

/* k2562 in k2708 in k2637 in k2634 in setup-api#write-info in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in ... */
static void C_ccall f_2564(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:286: make-pathname");
t2=C_fast_retrieve(lf[76]);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3],lf[0]);}

/* k3948 in setup-api#try-compile in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_ccall f_3950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3950,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3953,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4109,a[2]=((C_word)li64),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:520: ##sys#get-keyword");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[159]+1)))(5,*((C_word*)lf[159]+1),t3,lf[214],((C_word*)t0)[4],t4);}

/* k3951 in k3948 in setup-api#try-compile in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_3953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3953,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3956,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4106,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:520: ##sys#get-keyword");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[159]+1)))(5,*((C_word*)lf[159]+1),t3,lf[212],((C_word*)t0)[5],t4);}

/* k2408 in smooth in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in ... */
static void C_ccall f_2410(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2410,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2421,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(t2);
t5=t3;
t6=t4;
if(C_truep(C_i_string_equal_p(t6,lf[82]))){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2217,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2221,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:240: find-program");
((C_proc3)C_fast_retrieve_symbol_proc(lf[77]))(3,*((C_word*)lf[77]+1),t8,lf[102]);}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2398,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:258: string-prefix?");
t8=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,lf[105],t6);}}

/* k3656 in map-loop879 in k3505 in k3502 in k3499 in k3496 in setup-api#install-program in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in ... */
static void C_ccall f_3658(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3658,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3629(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3629(t6,((C_word*)t0)[5],t5);}}

/* k2390 in k2396 in k2408 in smooth in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_ccall f_2392(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:259: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),((C_word*)t0)[2],t1);}

/* k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in setup-api#try-compile in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in ... */
static void C_ccall f_3968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3968,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3971,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4091,a[2]=((C_word*)t0)[9],a[3]=((C_word)li60),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:525: with-output-to-file");
t4=C_fast_retrieve(lf[61]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[3],t3);}

/* k3585 in map-loop907 in k3508 in k3505 in k3502 in k3499 in k3496 in setup-api#install-program in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in ... */
static void C_ccall f_3587(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3587,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3558(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3558(t6,((C_word*)t0)[5],t5);}}

/* k2396 in k2408 in smooth in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in ... */
static void C_ccall f_2398(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2398,2,t0,t1);}
t2=(C_truep(t1)?C_retrieve2(lf[8],"setup-api#\052windows-shell\052"):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2392,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:259: substring");
t4=*((C_word*)lf[103]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],C_fix(2));}
else{
C_trace("setup-api.scm:260: find-program");
((C_proc3)C_fast_retrieve_symbol_proc(lf[77]))(3,*((C_word*)lf[77]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* a4471 in k4600 in setup-api#remove-directory in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in ... */
static void C_ccall f_4472(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4472,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4478,a[2]=t2,a[3]=((C_word)li77),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4487,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li81),tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:607: with-exception-handler");
t5=C_fast_retrieve(lf[184]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* k3730 in k3712 in k3709 in k3706 in g969 in k3701 in k3698 in k3695 in k3692 in setup-api#install-script in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in ... */
static void C_ccall f_3732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3732,2,t0,t1);}
t2=C_a_i_list(&a,3,C_retrieve2(lf[31],"setup-api#\052chmod-command\052"),lf[118],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:485: execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[78]))(3,*((C_word*)lf[78]+1),((C_word*)t0)[2],t3);}

/* a4477 in a4471 in k4600 in setup-api#remove-directory in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in ... */
static void C_ccall f_4478(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4478,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4484,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:607: k1271");
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* setup-api#install-script in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in ... */
static void C_ccall f_3684(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_3684r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3684r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3684r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(6);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_car(t4));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3694,a[2]=t1,a[3]=t2,a[4]=t7,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:476: setup-install-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[20]))(2,*((C_word*)lf[20]+1),t8);}

/* k3074 in map-loop660 in setup-api#check-filelist in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_3076(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3076,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3047(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3047(t6,((C_word*)t0)[5],t5);}}

/* k4556 in k4550 in k4547 in g1298 in k4536 in walk in k4600 in setup-api#remove-directory in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in ... */
static void C_ccall f_4558(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("setup-api.scm:616: walk");
t2=((C_word*)((C_word*)t0)[2])[1];
f_4534(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
C_trace("setup-api.scm:617: delete-file");
t2=C_fast_retrieve(lf[240]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}}

/* k2552 in map-loop372 in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in ... */
static void C_ccall f_2554(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2554,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2525(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2525(t6,((C_word*)t0)[5],t5);}}

/* k4550 in k4547 in g1298 in k4536 in walk in k4600 in setup-api#remove-directory in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in ... */
static void C_ccall f_4552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4552,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4558,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:615: directory?");
t4=C_fast_retrieve(lf[128]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k2480 in k2477 in k2471 in for-each-loop320 in k2492 in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_2482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2482,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2485,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:268: ##sys#write-char-0");
((C_proc4)C_fast_retrieve_symbol_proc(lf[66]))(4,*((C_word*)lf[66]+1),t2,C_make_character(10),((C_word*)t0)[3]);}

/* setup-api#try-compile in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in ... */
static void C_ccall f_3943(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_3943r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3943r(t0,t1,t2,t3);}}

static void C_ccall f_3943r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(9);
t4=C_i_get_keyword(lf[183],t3,C_SCHEME_FALSE);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3950,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4112,a[2]=t5,a[3]=((C_word)li65),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:520: ##sys#get-keyword");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[159]+1)))(5,*((C_word*)lf[159]+1),t6,lf[215],t3,t7);}

/* k2483 in k2480 in k2477 in k2471 in for-each-loop320 in k2492 in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in ... */
static void C_ccall f_2485(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:268: ##sys#flush-output");
((C_proc3)C_fast_retrieve_symbol_proc(lf[107]))(3,*((C_word*)lf[107]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}

/* g729 in setup-api#supply-version in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_fcall f_3165(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3165,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3177,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:395: extension-name");
((C_proc2)C_fast_retrieve_symbol_proc(lf[141]))(2,*((C_word*)lf[141]+1),t2);}

/* k3957 in k3954 in k3951 in k3948 in setup-api#try-compile in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in ... */
static void C_ccall f_3959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3959,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3962,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4097,a[2]=((C_word)li61),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:520: ##sys#get-keyword");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[159]+1)))(5,*((C_word*)lf[159]+1),t3,lf[209],((C_word*)t0)[7],t4);}

/* k3954 in k3951 in k3948 in setup-api#try-compile in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in ... */
static void C_ccall f_3956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3956,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3959,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4100,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:520: ##sys#get-keyword");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[159]+1)))(5,*((C_word*)lf[159]+1),t3,lf[210],((C_word*)t0)[6],t4);}

/* k4261 in version->list in setup-api#version>=? in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_4263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:558: irregex-split");
t2=C_fast_retrieve(lf[230]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[231],t1);}

/* k3715 in k3712 in k3709 in k3706 in g969 in k3701 in k3698 in k3695 in k3692 in setup-api#install-script in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in ... */
static void C_ccall f_3717(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k4585 in for-each-loop1297 in k4536 in walk in k4600 in setup-api#remove-directory in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in ... */
static void C_ccall f_4587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4577(t3,((C_word*)t0)[4],t2);}

/* k2370 in k2361 in k2219 in k2408 in smooth in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_2372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("setup-api.scm:244: host-extension");
((C_proc2)C_fast_retrieve_symbol_proc(lf[11]))(2,*((C_word*)lf[11]+1),((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_2225(t2,lf[98]);}}

/* k3712 in k3709 in k3706 in g969 in k3701 in k3698 in k3695 in k3692 in setup-api#install-script in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in ... */
static void C_ccall f_3714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3714,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3717,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[8],"setup-api#\052windows-shell\052"))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3732,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:485: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t3,((C_word*)t0)[3]);}}

/* a4492 in a4486 in a4471 in k4600 in setup-api#remove-directory in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in ... */
static void C_ccall f_4493(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4493,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4501,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:607: open-output-string");
t3=C_fast_retrieve(lf[67]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3709 in k3706 in g969 in k3701 in k3698 in k3695 in k3692 in setup-api#install-script in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in ... */
static void C_ccall f_3711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3711,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3714,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:483: copy-file");
((C_proc4)C_fast_retrieve_symbol_proc(lf[126]))(4,*((C_word*)lf[126]+1),t3,((C_word*)t0)[3],t2);}

/* k3706 in g969 in k3701 in k3698 in k3695 in k3692 in setup-api#install-script in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in ... */
static void C_fcall f_3708(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3708,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3711,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:482: make-dest-pathname");
f_2974(t3,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k4570 in k4536 in walk in k4600 in setup-api#remove-directory in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in ... */
static void C_ccall f_4572(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:619: delete-directory");
t2=C_fast_retrieve(lf[242]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* for-each-loop1297 in k4536 in walk in k4600 in setup-api#remove-directory in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in ... */
static void C_fcall f_4577(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4577,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4587,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-api.scm:609: g1298");
t5=((C_word*)t0)[3];
f_4539(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* map-loop333 in smooth in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in ... */
static void C_fcall f_2429(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2429,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2458,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-api.scm:264: g339");
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2419 in k2408 in smooth in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in ... */
static void C_ccall f_2421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2421,2,t0,t1);}
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
C_trace("setup-api.scm:265: string-intersperse");
t4=C_fast_retrieve(lf[80]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[3],t3,lf[81]);}

/* k2358 in k2223 in k2219 in k2408 in smooth in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_2360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2360,2,t0,t1);}
t2=(C_truep(t1)?lf[84]:lf[85]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2357,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:247: host-extension");
((C_proc2)C_fast_retrieve_symbol_proc(lf[11]))(2,*((C_word*)lf[11]+1),t4);}

/* k3554 in k3547 in k3508 in k3505 in k3502 in k3499 in k3496 in setup-api#install-program in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in ... */
static void C_ccall f_3556(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:473: write-info");
f_2629(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2364 in k2361 in k2219 in k2408 in smooth in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_2366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2225(t2,(C_truep(t1)?lf[98]:lf[99]));}

/* map-loop907 in k3508 in k3505 in k3502 in k3499 in k3496 in setup-api#install-program in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in ... */
static void C_fcall f_3558(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3558,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3587,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-api.scm:465: g913");
t5=((C_word*)t0)[5];
f_3511(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2361 in k2219 in k2408 in smooth in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_ccall f_2363(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2363,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2366,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t1;
t4=((C_word*)t0)[2];
f_2225(t4,(C_truep(t3)?lf[99]:lf[98]));}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2372,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:243: feature?");
t4=C_fast_retrieve(lf[100]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[101]);}}

/* setup-api#remove-directory in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_ccall f_4445(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_4445r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4445r(t0,t1,t2,t3);}}

static void C_ccall f_4445r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_TRUE:C_i_car(t3));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4602,a[2]=t1,a[3]=t2,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:602: file-exists?");
t8=C_fast_retrieve(lf[147]);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}

/* g969 in k3701 in k3698 in k3695 in k3692 in setup-api#install-script in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in ... */
static void C_fcall f_3704(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3704,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3708,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=t3;
f_3708(t5,C_u_i_car(t4));}
else{
t4=t3;
f_3708(t4,t2);}}

/* k3701 in k3698 in k3695 in k3692 in setup-api#install-script in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in ... */
static void C_ccall f_3703(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3703,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3704,a[2]=t2,a[3]=((C_word)li48),tmp=(C_word)a,a+=4,tmp);
t8=C_i_check_list_2(((C_word*)t0)[2],lf[79]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3742,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3769,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=t7,a[6]=((C_word)li49),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_3769(t13,t9,((C_word*)t0)[2]);}

/* k3698 in k3695 in k3692 in setup-api#install-script in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in ... */
static void C_ccall f_3700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3700,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3703,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3806,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:479: make-pathname");
t4=C_fast_retrieve(lf[76]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t1,lf[177]);}

/* k2919 in k2916 in k2913 in setup-api#move-file in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in ... */
static void C_ccall f_2921(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2921,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2936,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:356: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t2,((C_word*)t0)[4]);}

/* k3608 in k3604 in g885 in k3505 in k3502 in k3499 in k3496 in setup-api#install-program in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in ... */
static void C_ccall f_3610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3610,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list2(&a,2,((C_word*)t0)[3],t1));}

/* k3012 in map-loop660 in setup-api#check-filelist in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_3014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3014,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t2=C_u_i_car(((C_word*)t0)[3]);
t3=C_u_i_cdr(((C_word*)t0)[3]);
t4=C_a_i_list2(&a,2,t2,t3);
if(C_truep(t4)){
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
C_trace("setup-api.scm:373: error");
t5=*((C_word*)lf[134]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[2],lf[135],((C_word*)t0)[3]);}}
else{
C_trace("setup-api.scm:373: error");
t2=*((C_word*)lf[134]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[135],((C_word*)t0)[3]);}}}

/* k3248 in k3244 in k3229 in k3226 in k3223 in k3220 in k3217 in k3214 in k3211 in setup-api#standard-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in ... */
static void C_fcall f_3250(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3250,NULL,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3242,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:422: supply-version");
f_3157(t4,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k3252 in k3244 in k3229 in k3226 in k3223 in k3220 in k3217 in k3214 in k3211 in setup-api#standard-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in ... */
static void C_ccall f_3254(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3254,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3261,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:419: file-exists?");
t4=C_fast_retrieve(lf[147]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* setup-api#remove-file* in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in ... */
static void C_ccall f_2956(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2956,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2972,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:359: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t3,t2);}

/* a4111 in setup-api#try-compile in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_ccall f_4112(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4112,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=C_retrieve2(lf[3],"setup-api#\052cxx\052");
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_retrieve2(lf[3],"setup-api#\052cxx\052"));}
else{
t2=C_retrieve2(lf[2],"setup-api#\052cc\052");
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_retrieve2(lf[2],"setup-api#\052cc\052"));}}

/* setup-api#find-library in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in ... */
static void C_ccall f_4119(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4119,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4127,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:547: open-output-string");
t5=C_fast_retrieve(lf[67]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k3240 in k3248 in k3244 in k3229 in k3226 in k3223 in k3220 in k3217 in k3214 in k3211 in setup-api#standard-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in ... */
static void C_ccall f_3242(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:415: install-extension");
((C_proc5)C_fast_retrieve_symbol_proc(lf[146]))(5,*((C_word*)lf[146]+1),((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3244 in k3229 in k3226 in k3223 in k3220 in k3217 in k3214 in k3211 in setup-api#standard-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in ... */
static void C_ccall f_3246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3246,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3250,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3254,a[2]=((C_word*)t0)[6],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:418: pathname-replace-extension");
t5=C_fast_retrieve(lf[148]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[7],lf[149]);}

/* for-each-loop320 in k2492 in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in ... */
static void C_fcall f_2502(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2502,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2512,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2467,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2473,a[2]=t7,a[3]=t6,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:268: run-verbose");
((C_proc2)C_fast_retrieve_symbol_proc(lf[73]))(2,*((C_word*)lf[73]+1),t8);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2903 in k2757 in k2754 in k2748 in setup-api#copy-file in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in ... */
static void C_ccall f_2905(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2905,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2909,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:350: normalize-pathname");
t4=C_fast_retrieve(lf[16]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* k2907 in k2903 in k2757 in k2754 in k2748 in setup-api#copy-file in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in ... */
static void C_ccall f_2909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:348: string-prefix?");
t2=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* a4099 in k3954 in k3951 in k3948 in setup-api#try-compile in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in ... */
static void C_ccall f_4100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4100,2,t0,t1);}
C_trace("setup-api.scm:521: setup-verbose-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[19]))(2,*((C_word*)lf[19]+1),t1);}

/* a4105 in k3951 in k3948 in setup-api#try-compile in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in ... */
static void C_ccall f_4106(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4106,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[211]);}

/* a4108 in k3948 in setup-api#try-compile in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_4109(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4109,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[213]);}

/* k2934 in k2919 in k2916 in k2913 in setup-api#move-file in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in ... */
static void C_ccall f_2936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2936,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2940,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:356: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t3,((C_word*)t0)[3]);}

/* k4403 in k4413 in setup-api#extension-version in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in ... */
static void C_ccall f_4405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[2])){
C_trace("setup-api.scm:593: ->string");
t2=C_fast_retrieve(lf[75]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* setup-api#read-info in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_ccall f_4423(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_4423r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4423r(t0,t1,t2,t3);}}

static void C_ccall f_4423r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4427,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
C_trace("setup-api.scm:596: repository-path");
t5=C_fast_retrieve(lf[121]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=t4;
f_4427(2,t5,C_i_car(t3));}}

/* k2310 in map-loop290 in k2273 in k2259 in k2253 in k2352 in k2355 in k2358 in k2223 in k2219 in k2408 in smooth in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in ... */
static void C_ccall f_2312(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2312,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2283(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2283(t6,((C_word*)t0)[5],t5);}}

/* map-loop263 in k2253 in k2352 in k2355 in k2358 in k2223 in k2219 in k2408 in smooth in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in ... */
static void C_fcall f_2318(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_2318,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2347,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2252,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:251: symbol->string");
t7=*((C_word*)lf[96]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* setup-api#supply-version in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in ... */
static void C_fcall f_3157(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3157,NULL,3,t1,t2,t3);}
if(C_truep(C_i_assq(lf[139],t2))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3165,a[2]=t2,a[3]=((C_word)li35),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:391: g729");
t5=t4;
f_3165(t5,t1);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3183,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=t4;
if(C_truep(t3)){
t6=t5;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t3);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3129,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:386: extension-name-and-version");
((C_proc2)C_fast_retrieve_symbol_proc(lf[144]))(2,*((C_word*)lf[144]+1),t6);}}}

/* k4125 in setup-api#find-library in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_ccall f_4127(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4127,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[62]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4133,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:547: ##sys#print");
t6=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[225],C_SCHEME_FALSE,t3);}

/* k3211 in setup-api#standard-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_ccall f_3213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3213,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3216,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:409: ->string");
t4=C_fast_retrieve(lf[75]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* k3214 in k3211 in setup-api#standard-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_3216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3216,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3219,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:410: make-pathname");
t4=C_fast_retrieve(lf[76]);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,C_SCHEME_FALSE,t2,lf[158]);}

/* k3217 in k3214 in k3211 in setup-api#standard-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in ... */
static void C_ccall f_3219(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3219,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3222,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace("setup-api.scm:411: make-pathname");
t4=C_fast_retrieve(lf[76]);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,C_SCHEME_FALSE,((C_word*)t0)[6],lf[157]);}

/* k2992 in setup-api#make-dest-pathname in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_ccall f_2994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
C_trace("setup-api.scm:366: make-pathname");
t2=C_fast_retrieve(lf[76]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[4],((C_word*)t0)[3]);}}

/* setup-api#check-filelist in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in ... */
static void C_fcall f_2999(C_word t1,C_word t2){
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
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2999,NULL,2,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(t2,lf[79]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3047,a[2]=t6,a[3]=t9,a[4]=t4,a[5]=((C_word)li33),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_3047(t11,t1,t2);}

/* k3604 in g885 in k3505 in k3502 in k3499 in k3496 in setup-api#install-program in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in ... */
static void C_ccall f_3606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3606,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3610,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cadr(((C_word*)t0)[3]);
C_trace("setup-api.scm:461: exify");
f_3484(t3,t4);}

/* smooth in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in ... */
static void C_ccall f_2403(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[16],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2403,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_fast_retrieve(lf[75]);
t8=C_i_check_list_2(t2,lf[79]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2410,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2429,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=t7,a[6]=((C_word)li14),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_2429(t13,t9,t2);}

/* setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in ... */
static void C_ccall f_2400(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[19],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2400,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2403,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=t3;
t9=C_i_check_list_2(t2,lf[79]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2494,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2525,a[2]=t7,a[3]=t12,a[4]=t5,a[5]=t8,a[6]=((C_word)li17),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_2525(t14,t10,t2);}

/* k4152 in k4149 in k4146 in k4143 in k4140 in k4137 in k4134 in k4131 in k4125 in setup-api#find-library in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in ... */
static void C_ccall f_4154(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4154,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4157,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:547: ##sys#print");
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[221],C_SCHEME_FALSE,((C_word*)t0)[5]);}

/* k4149 in k4146 in k4143 in k4140 in k4137 in k4134 in k4131 in k4125 in setup-api#find-library in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in ... */
static void C_ccall f_4151(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4151,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4154,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:547: ##sys#print");
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[6],C_SCHEME_FALSE,((C_word*)t0)[5]);}

/* k4155 in k4152 in k4149 in k4146 in k4143 in k4140 in k4137 in k4134 in k4131 in k4125 in setup-api#find-library in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in ... */
static void C_ccall f_4157(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4157,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4160,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:547: ##sys#write-char-0");
((C_proc4)C_fast_retrieve_symbol_proc(lf[66]))(4,*((C_word*)lf[66]+1),t2,C_make_character(10),((C_word*)t0)[5]);}

/* k4425 in setup-api#read-info in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_4427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4427,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4434,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:598: make-pathname");
t3=C_fast_retrieve(lf[76]);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,t1,((C_word*)t0)[3],lf[0]);}

/* setup-api#standard-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in ... */
static void C_ccall f_3200(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_3200r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3200r(t0,t1,t2,t3);}}

static void C_ccall f_3200r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(8);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=t5;
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3213,a[2]=t1,a[3]=t2,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3282,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:407: ##sys#get-keyword");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[159]+1)))(5,*((C_word*)lf[159]+1),t9,lf[160],t8,t10);}

/* k2938 in k2934 in k2919 in k2916 in k2913 in setup-api#move-file in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in ... */
static void C_ccall f_2940(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2940,2,t0,t1);}
t2=C_a_i_list(&a,3,C_retrieve2(lf[30],"setup-api#\052move-command\052"),((C_word*)t0)[2],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:356: execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[78]))(3,*((C_word*)lf[78]+1),((C_word*)t0)[3],t3);}

/* k3930 in k3912 in k3900 in k3891 in setup-api#ensure-directory in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in ... */
static void C_ccall f_3932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3932,2,t0,t1);}
t2=C_a_i_list(&a,3,C_retrieve2(lf[31],"setup-api#\052chmod-command\052"),lf[180],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:517: execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[78]))(3,*((C_word*)lf[78]+1),((C_word*)t0)[2],t3);}

/* k4143 in k4140 in k4137 in k4134 in k4131 in k4125 in setup-api#find-library in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in ... */
static void C_ccall f_4145(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4145,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4148,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:547: ##sys#write-char-0");
((C_proc4)C_fast_retrieve_symbol_proc(lf[66]))(4,*((C_word*)lf[66]+1),t2,C_make_character(10),((C_word*)t0)[5]);}

/* k4140 in k4137 in k4134 in k4131 in k4125 in setup-api#find-library in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in ... */
static void C_ccall f_4142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4142,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4145,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:547: ##sys#print");
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[223],C_SCHEME_FALSE,((C_word*)t0)[5]);}

/* k4146 in k4143 in k4140 in k4137 in k4134 in k4131 in k4125 in setup-api#find-library in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in ... */
static void C_ccall f_4148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4148,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4151,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:547: ##sys#print");
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[222],C_SCHEME_FALSE,((C_word*)t0)[5]);}

/* k4413 in setup-api#extension-version in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_4415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4415,2,t0,t1);}
t2=C_i_cadr(t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4405,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:592: string-null?");
t5=C_fast_retrieve(lf[234]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}

/* k2970 in setup-api#remove-file* in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_ccall f_2972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2972,2,t0,t1);}
t2=C_a_i_list(&a,2,C_retrieve2(lf[29],"setup-api#\052remove-command\052"),t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:358: execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[78]))(3,*((C_word*)lf[78]+1),((C_word*)t0)[2],t3);}

/* setup-api#make-dest-pathname in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in ... */
static void C_fcall f_2974(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
a=C_alloc(5);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2974,NULL,3,t1,t2,t3);}
if(C_truep(C_i_listp(t3))){
t4=C_i_cadr(t3);
C_trace("setup-api.scm:363: make-dest-pathname");
t7=t1;
t8=t2;
t9=t4;
t1=t7;
t2=t8;
t3=t9;
goto loop;}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2994,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:364: absolute-pathname?");
t5=C_fast_retrieve(lf[129]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}}

/* map-loop879 in k3505 in k3502 in k3499 in k3496 in setup-api#install-program in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in ... */
static void C_fcall f_3629(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3629,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3658,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-api.scm:459: g885");
t5=((C_word*)t0)[5];
f_3592(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3127 in setup-api#supply-version in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_ccall f_3129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
if(C_truep(C_i_pairp(t1))){
t2=C_i_cadr(t1);
t3=C_i_equalp(lf[142],t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?lf[143]:C_i_cadr(t1)));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[143]);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[143]);}}

/* a4524 in a4518 in a4486 in a4471 in k4600 in setup-api#remove-directory in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in ... */
static void C_ccall f_4525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4525,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* k2832 in k2817 in k2772 in walk in k2760 in k2757 in k2754 in k2748 in setup-api#copy-file in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in ... */
static void C_ccall f_2834(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2834,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2838,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:344: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t3,((C_word*)t0)[3]);}

/* k2836 in k2832 in k2817 in k2772 in walk in k2760 in k2757 in k2754 in k2748 in setup-api#copy-file in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in ... */
static void C_ccall f_2838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2838,2,t0,t1);}
t2=C_a_i_list(&a,3,C_retrieve2(lf[28],"setup-api#\052copy-command\052"),((C_word*)t0)[2],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:342: execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[78]))(3,*((C_word*)lf[78]+1),((C_word*)t0)[3],t3);}

/* k4515 in k4505 in k4499 in a4492 in a4486 in a4471 in k4600 in setup-api#remove-directory in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in ... */
static void C_ccall f_4517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:607: ##sys#print");
t2=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* a4518 in a4486 in a4471 in k4600 in setup-api#remove-directory in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in ... */
static void C_ccall f_4519(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_4519r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4519r(t0,t1,t2);}}

static void C_ccall f_4519r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4525,a[2]=t2,a[3]=((C_word)li79),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:607: k1271");
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* k3519 in k3516 in k3513 in g913 in k3508 in k3505 in k3502 in k3499 in k3496 in setup-api#install-program in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in ... */
static void C_ccall f_3521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3521,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3524,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[8],"setup-api#\052windows-shell\052"))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3539,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:470: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t3,((C_word*)t0)[3]);}}

/* k4508 in k4505 in k4499 in a4492 in a4486 in a4471 in k4600 in setup-api#remove-directory in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in ... */
static void C_ccall f_4510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4510,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4513,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:607: get-output-string");
t3=C_fast_retrieve(lf[64]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k3522 in k3519 in k3516 in k3513 in g913 in k3508 in k3505 in k3502 in k3499 in k3496 in setup-api#install-program in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in ... */
static void C_ccall f_3524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k4511 in k4508 in k4505 in k4499 in a4492 in a4486 in a4471 in k4600 in setup-api#remove-directory in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in ... */
static void C_ccall f_4513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:607: $system");
f_4674(((C_word*)t0)[2],t1);}

/* g913 in k3508 in k3505 in k3502 in k3499 in k3496 in setup-api#install-program in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in ... */
static void C_fcall f_3511(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3511,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3515,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=t3;
f_3515(t5,C_u_i_car(t4));}
else{
t4=t3;
f_3515(t4,t2);}}

/* k3508 in k3505 in k3502 in k3499 in k3496 in setup-api#install-program in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in ... */
static void C_ccall f_3510(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3510,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3511,a[2]=((C_word*)t0)[2],a[3]=((C_word)li43),tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_list_2(t1,lf[79]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3549,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3558,a[2]=t5,a[3]=t10,a[4]=t3,a[5]=t6,a[6]=((C_word)li44),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_3558(t12,t8,t1);}

/* k3513 in g913 in k3508 in k3505 in k3502 in k3499 in k3496 in setup-api#install-program in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in ... */
static void C_fcall f_3515(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3515,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3518,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:467: make-dest-pathname");
f_2974(t3,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k2852 in k2757 in k2754 in k2748 in setup-api#copy-file in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in ... */
static void C_ccall f_2854(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2854,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_2762(2,t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2847,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:330: absolute-pathname?");
t3=C_fast_retrieve(lf[129]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}}

/* k2845 in k2852 in k2757 in k2754 in k2748 in setup-api#copy-file in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in ... */
static void C_ccall f_2847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_2762(2,t2,((C_word*)t0)[3]);}
else{
C_trace("setup-api.scm:332: make-pathname");
t2=C_fast_retrieve(lf[76]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[4],((C_word*)t0)[3]);}}

/* k3499 in k3496 in setup-api#install-program in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_3501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3501,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3504,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:456: installation-prefix");
((C_proc2)C_fast_retrieve_symbol_proc(lf[111]))(2,*((C_word*)lf[111]+1),t3);}

/* k3505 in k3502 in k3499 in k3496 in setup-api#install-program in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in ... */
static void C_ccall f_3507(C_word c,C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3507,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3510,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[10],"setup-api#\052windows\052"))){
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3592,a[2]=((C_word*)t0)[5],a[3]=((C_word)li45),tmp=(C_word)a,a+=4,tmp);
t9=C_i_check_list_2(((C_word*)t0)[6],lf[79]);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3629,a[2]=t7,a[3]=t11,a[4]=t5,a[5]=t8,a[6]=((C_word)li46),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_3629(t13,t3,((C_word*)t0)[6]);}
else{
t4=t3;
f_3510(2,t4,((C_word*)t0)[6]);}}

/* k3502 in k3499 in k3496 in setup-api#install-program in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in ... */
static void C_ccall f_3504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3504,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3507,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3666,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:457: make-pathname");
t4=C_fast_retrieve(lf[76]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t1,lf[173]);}

/* k4134 in k4131 in k4125 in setup-api#find-library in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in ... */
static void C_ccall f_4136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4136,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4139,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:547: ##sys#print");
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[224],C_SCHEME_FALSE,((C_word*)t0)[5]);}

/* k3516 in k3513 in g913 in k3508 in k3505 in k3502 in k3499 in k3496 in setup-api#install-program in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in ... */
static void C_ccall f_3518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3518,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3521,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:468: copy-file");
((C_proc4)C_fast_retrieve_symbol_proc(lf[126]))(4,*((C_word*)lf[126]+1),t3,((C_word*)t0)[3],t2);}

/* k4131 in k4125 in setup-api#find-library in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_4133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4133,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4136,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:547: ##sys#write-char-0");
((C_proc4)C_fast_retrieve_symbol_proc(lf[66]))(4,*((C_word*)lf[66]+1),t2,C_make_character(10),((C_word*)t0)[5]);}

/* k4137 in k4134 in k4131 in k4125 in setup-api#find-library in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in ... */
static void C_ccall f_4139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4139,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4142,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:547: ##sys#write-char-0");
((C_proc4)C_fast_retrieve_symbol_proc(lf[66]))(4,*((C_word*)lf[66]+1),t2,C_make_character(10),((C_word*)t0)[5]);}

/* setup-api#move-file in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in ... */
static void C_ccall f_2911(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2911,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2915,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t2))){
t5=t2;
t6=t4;
f_2915(t6,C_u_i_car(t5));}
else{
t5=t4;
f_2915(t5,t2);}}

/* k2913 in setup-api#move-file in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_fcall f_2915(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2915,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2918,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t4=C_i_cadr(((C_word*)t0)[3]);
C_trace("setup-api.scm:354: make-pathname");
t5=C_fast_retrieve(lf[76]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,((C_word*)t0)[4],t4);}
else{
t4=t3;
f_2918(2,t4,((C_word*)t0)[4]);}}

/* k2916 in k2913 in setup-api#move-file in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_2918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2918,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2921,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:355: ensure-directory");
f_3886(t3,t2,C_SCHEME_END_OF_LIST);}

/* map-loop660 in setup-api#check-filelist in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_fcall f_3047(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3047,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3076,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
if(C_truep(C_i_stringp(t6))){
t7=t5;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3014,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_listp(t6))){
C_trace("setup-api.scm:371: every");
t8=C_fast_retrieve(lf[136]);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,*((C_word*)lf[137]+1),t6);}
else{
t8=t7;
f_3014(2,t8,C_SCHEME_FALSE);}}}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2817 in k2772 in walk in k2760 in k2757 in k2754 in k2748 in setup-api#copy-file in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in ... */
static void C_ccall f_2819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2819,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2834,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:343: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t2,((C_word*)t0)[4]);}

/* k3229 in k3226 in k3223 in k3220 in k3217 in k3214 in k3211 in setup-api#standard-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in ... */
static void C_ccall f_3231(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3231,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3246,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace("setup-api.scm:417: pathname-replace-extension");
t3=C_fast_retrieve(lf[148]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[8],lf[150]);}

/* k2803 in for-each-loop605 in k2788 in k2772 in walk in k2760 in k2757 in k2754 in k2748 in setup-api#copy-file in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in ... */
static void C_ccall f_2805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2795(t3,((C_word*)t0)[4],t2);}

/* k3220 in k3217 in k3214 in k3211 in setup-api#standard-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in ... */
static void C_ccall f_3222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3222,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3225,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace("setup-api.scm:412: make-pathname");
t4=C_fast_retrieve(lf[76]);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,C_SCHEME_FALSE,((C_word*)t0)[7],lf[156]);}

/* k3226 in k3223 in k3220 in k3217 in k3214 in k3211 in setup-api#standard-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in ... */
static void C_ccall f_3228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[35],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3228,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3231,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_a_i_list(&a,7,lf[151],lf[152],lf[153],C_fix(3),lf[154],C_fix(0),((C_word*)t0)[7]);
t4=C_a_i_list1(&a,1,t3);
C_trace("setup-api.scm:414: execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[78]))(3,*((C_word*)lf[78]+1),t2,t4);}

/* k3223 in k3220 in k3217 in k3214 in k3211 in setup-api#standard-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in ... */
static void C_ccall f_3225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[41],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3225,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3228,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=C_a_i_list(&a,9,lf[151],lf[152],lf[153],C_fix(3),lf[154],C_fix(1),((C_word*)t0)[7],lf[155],((C_word*)t0)[3]);
t5=C_a_i_list1(&a,1,t4);
C_trace("setup-api.scm:407: execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[78]))(3,*((C_word*)lf[78]+1),t3,t5);}

/* k4432 in k4425 in setup-api#read-info in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in ... */
static void C_ccall f_4434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:597: with-input-from-file");
t2=C_fast_retrieve(lf[60]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[236]+1));}

/* k2591 in setup-api#installation-prefix in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_ccall f_2593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(((C_word*)t0)[3])?((C_word*)t0)[3]:C_fast_retrieve(lf[13])));}}

/* k3981 in k3978 in k3975 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in setup-api#try-compile in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in ... */
static void C_ccall f_3983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(((C_word*)t0)[3],C_fix(0)));}

/* k3978 in k3975 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in setup-api#try-compile in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in ... */
static void C_ccall f_3980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3980,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3983,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:540: g1085");
t3=t1;
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* a3994 in a3988 in k3975 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in setup-api#try-compile in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in ... */
static void C_ccall f_3995(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3995,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4001,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:540: k1081");
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* k4465 in k4600 in setup-api#remove-directory in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in ... */
static void C_ccall f_4467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:607: g1275");
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* g885 in k3505 in k3502 in k3499 in k3496 in setup-api#install-program in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in ... */
static void C_fcall f_3592(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3592,NULL,3,t0,t1,t2);}
if(C_truep(C_i_listp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3606,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(t2);
C_trace("setup-api.scm:461: exify");
f_3484(t3,t4);}
else{
C_trace("setup-api.scm:462: exify");
f_3484(t1,t2);}}

/* a3988 in k3975 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in setup-api#try-compile in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in ... */
static void C_ccall f_3989(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3989,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3995,a[2]=t2,a[3]=((C_word)li54),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4004,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li58),tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:540: with-exception-handler");
t5=C_fast_retrieve(lf[184]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* k3664 in k3502 in k3499 in k3496 in setup-api#install-program in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in ... */
static void C_ccall f_3666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3666,2,t0,t1);}
C_trace("setup-api.scm:457: ensure-directory");
f_3886(((C_word*)t0)[2],t1,C_a_i_list(&a,1,C_SCHEME_TRUE));}

/* k2492 in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in ... */
static void C_ccall f_2494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2494,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[106]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2502,a[2]=t4,a[3]=((C_word)li16),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_2502(t6,((C_word*)t0)[2],t1);}

/* k4505 in k4499 in a4492 in a4486 in a4471 in k4600 in setup-api#remove-directory in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in ... */
static void C_ccall f_4507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4507,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4510,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4517,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:607: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t3,((C_word*)t0)[5]);}

/* k3796 in map-loop963 in k3701 in k3698 in k3695 in k3692 in setup-api#install-script in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in ... */
static void C_ccall f_3798(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3798,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3769(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3769(t6,((C_word*)t0)[5],t5);}}

/* k4499 in a4492 in a4486 in a4471 in k4600 in setup-api#remove-directory in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in ... */
static void C_ccall f_4501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4501,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[62]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4507,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:607: ##sys#print");
t6=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[238],C_SCHEME_FALSE,t3);}

/* k4838 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in ... */
static void C_ccall f_4840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:230: reg");
f_2160(((C_word*)t0)[3],lf[263],t1);}

/* k2035 in k2026 in loop in a2017 in a2007 in k1991 in setup-api#patch in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in ... */
static void C_ccall f_2037(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:200: loop");
t2=((C_word*)((C_word*)t0)[2])[1];
f_2024(t2,((C_word*)t0)[3]);}

/* k4850 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in ... */
static void C_ccall f_4852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:227: reg");
f_2160(((C_word*)t0)[3],lf[267],t1);}

/* k3854 in k3844 in k3838 in setup-api#repo-path in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in ... */
static void C_ccall f_3856(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3856,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[62]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3862,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:503: ##sys#print");
t6=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[178],C_SCHEME_FALSE,t3);}

/* k4854 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in ... */
static void C_ccall f_4856(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:226: reg");
f_2160(((C_word*)t0)[3],lf[268],t1);}

/* k2239 in k2352 in k2355 in k2358 in k2223 in k2219 in k2408 in smooth in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in ... */
static void C_ccall f_2241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:239: cons*");
t2=C_fast_retrieve(lf[90]);
((C_proc10)(void*)(*((C_word*)t2+1)))(10,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[91],lf[92],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t1);}

/* k2026 in loop in a2017 in a2007 in k1991 in setup-api#patch in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in ... */
static void C_ccall f_2028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2028,2,t0,t1);}
if(C_truep(C_eofp(t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2037,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2044,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:199: irregex-replace/all");
t4=C_fast_retrieve(lf[58]);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[4],t1,((C_word*)t0)[5]);}}

/* loop in a2017 in a2007 in k1991 in setup-api#patch in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in ... */
static void C_fcall f_2024(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2024,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2028,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:197: read-line");
t3=C_fast_retrieve(lf[59]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3838 in setup-api#repo-path in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_ccall f_3840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3840,2,t0,t1);}
if(C_truep(t1)){
C_trace("setup-api.scm:498: installation-prefix");
((C_proc2)C_fast_retrieve_symbol_proc(lf[111]))(2,*((C_word*)lf[111]+1),((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3846,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:499: destination-prefix");
((C_proc2)C_fast_retrieve_symbol_proc(lf[109]))(2,*((C_word*)lf[109]+1),t2);}}

/* a2692 in k2667 in k2643 in k2640 in k2637 in k2634 in setup-api#write-info in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in ... */
static void C_ccall f_2693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2693,2,t0,t1);}
t2=C_fast_retrieve(lf[119]);
C_trace("setup-api.scm:320: g551");
t3=C_fast_retrieve(lf[119]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,((C_word*)t0)[2]);}

/* k3383 in k3391 in k3328 in k3325 in k3322 in k3319 in g815 in k3314 in k3311 in k3308 in k3305 in setup-api#install-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in ... */
static void C_ccall f_3385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_3354(t2,C_i_equalp(t1,lf[163]));}

/* k3844 in k3838 in setup-api#repo-path in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_3846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3846,2,t0,t1);}
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3856,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:503: open-output-string");
t4=C_fast_retrieve(lf[67]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
C_trace("setup-api.scm:504: repository-path");
t3=C_fast_retrieve(lf[121]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}}

/* k4842 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in ... */
static void C_ccall f_4844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:229: reg");
f_2160(((C_word*)t0)[3],lf[265],t1);}

/* k2689 in k2685 in k2670 in k2667 in k2643 in k2640 in k2637 in k2634 in setup-api#write-info in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in ... */
static void C_ccall f_2691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2691,2,t0,t1);}
t2=C_a_i_list(&a,3,C_retrieve2(lf[30],"setup-api#\052move-command\052"),((C_word*)t0)[2],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:321: execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[78]))(3,*((C_word*)lf[78]+1),((C_word*)t0)[3],t3);}

/* k4846 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in ... */
static void C_ccall f_4848(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:228: reg");
f_2160(((C_word*)t0)[3],lf[266],t1);}

/* k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in ... */
static void C_ccall f_2183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2183,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2186,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4844,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[264]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_CHICKEN_STATUS_PROGRAM),C_fix(0));}

/* k4858 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in ... */
static void C_ccall f_4860(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:225: reg");
f_2160(((C_word*)t0)[3],lf[269],t1);}

/* k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in ... */
static void C_ccall f_2180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2180,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2183,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4848,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[264]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_CHICKEN_UNINSTALL_PROGRAM),C_fix(0));}

/* k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in ... */
static void C_ccall f_2186(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2186,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2189,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4840,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[264]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_CHICKEN_BUG_PROGRAM),C_fix(0));}

/* k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in ... */
static void C_ccall f_2189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2189,2,t0,t1);}
t2=C_mutate2((C_word*)lf[78]+1 /* (set! setup-api#execute ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2400,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2580,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:288: make-parameter");
t4=C_fast_retrieve(lf[259]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_FALSE);}

/* k2055 in k2048 in k2045 in k1991 in setup-api#patch in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in ... */
static void C_ccall f_2057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2057,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[62]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2063,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:204: ##sys#print");
t6=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,C_retrieve2(lf[30],"setup-api#\052move-command\052"),C_SCHEME_FALSE,t3);}

/* k2048 in k2045 in k1991 in setup-api#patch in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in ... */
static void C_ccall f_2050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2050,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2057,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:204: open-output-string");
t3=C_fast_retrieve(lf[67]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2259 in k2253 in k2352 in k2355 in k2358 in k2223 in k2219 in k2408 in smooth in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in ... */
static void C_ccall f_2261(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2261,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2275,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t6,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:255: extra-nonfeatures");
((C_proc2)C_fast_retrieve_symbol_proc(lf[26]))(2,*((C_word*)lf[26]+1),t7);}

/* k2685 in k2670 in k2667 in k2643 in k2640 in k2637 in k2634 in setup-api#write-info in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in ... */
static void C_ccall f_2687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2687,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2691,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:321: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t3,((C_word*)t0)[3]);}

/* k2045 in k1991 in setup-api#patch in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in ... */
static void C_ccall f_2047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2047,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2050,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_a_i_list2(&a,2,t2,t2);
C_trace("setup-api.scm:202: patch");
((C_proc5)C_fast_retrieve_symbol_proc(lf[56]))(5,*((C_word*)lf[56]+1),t3,t4,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k2042 in k2026 in loop in a2017 in a2007 in k1991 in setup-api#patch in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in ... */
static void C_ccall f_2044(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:199: write-line");
t2=C_fast_retrieve(lf[57]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3863 in k3860 in k3854 in k3844 in k3838 in setup-api#repo-path in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in ... */
static void C_ccall f_3865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3865,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3868,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:503: get-output-string");
t3=C_fast_retrieve(lf[64]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k3860 in k3854 in k3844 in k3838 in setup-api#repo-path in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in ... */
static void C_ccall f_3862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3862,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3865,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_fudge(C_fix(42));
C_trace("setup-api.scm:503: ##sys#print");
t4=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,C_SCHEME_FALSE,((C_word*)t0)[5]);}

/* k2250 in map-loop263 in k2253 in k2352 in k2355 in k2358 in k2223 in k2219 in k2408 in smooth in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in ... */
static void C_ccall f_2252(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#string-append");
((C_proc4)C_fast_retrieve_symbol_proc(lf[94]))(4,*((C_word*)lf[94]+1),((C_word*)t0)[2],lf[97],t1);}

/* k3866 in k3863 in k3860 in k3854 in k3844 in k3838 in setup-api#repo-path in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in ... */
static void C_ccall f_3868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:501: make-pathname");
t2=C_fast_retrieve(lf[76]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k4862 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in k1775 in ... */
static void C_ccall f_4864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:224: reg");
f_2160(((C_word*)t0)[3],lf[270],t1);}

/* k2253 in k2352 in k2355 in k2358 in k2223 in k2219 in k2408 in smooth in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in ... */
static void C_ccall f_2255(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2255,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[79]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2261,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2318,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],a[5]=((C_word)li13),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2318(t7,t3,t1);}

/* a4865 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in k1775 in k1771 in k1766 in ... */
static void C_ccall f_4866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4866,2,t0,t1);}
t2=C_fast_retrieve(lf[271]);
C_trace("setup-api.scm:182: g139");
t3=C_fast_retrieve(lf[271]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,C_fix(1));}

/* k1991 in setup-api#patch in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in k1775 in ... */
static void C_ccall f_1993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1993,2,t0,t1);}
if(C_truep(C_i_listp(((C_word*)t0)[2]))){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2008,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li7),tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:192: with-output-to-file");
t4=C_fast_retrieve(lf[61]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[5],t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2047,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:201: create-temporary-file");
t3=C_fast_retrieve(lf[68]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* setup-api#extension-version in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_ccall f_4392(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_4392r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4392r(t0,t1,t2);}}

static void C_ccall f_4392r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(4);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4415,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:591: extension-name-and-version");
((C_proc2)C_fast_retrieve_symbol_proc(lf[144]))(2,*((C_word*)lf[144]+1),t6);}

/* f_4817 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in ... */
static void C_ccall f_4817(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4817,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4821,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:308: verb");
f_2602(t3,t2);}

/* k2279 in k2273 in k2259 in k2253 in k2352 in k2355 in k2358 in k2223 in k2219 in k2408 in smooth in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in ... */
static void C_ccall f_2281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:249: append");
t2=*((C_word*)lf[93]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}

/* k4388 in setup-api#extension-name in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_4390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_car(t1));}

/* k4811 */
static void C_ccall f_4813(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:306: create-directory");
t2=C_fast_retrieve(lf[113]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_TRUE);}

/* k3391 in k3328 in k3325 in k3322 in k3319 in g815 in k3314 in k3311 in k3308 in k3305 in setup-api#install-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in ... */
static void C_ccall f_3393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3393,2,t0,t1);}
t2=C_eqp(t1,lf[162]);
if(C_truep(t2)){
t3=C_i_cadr(((C_word*)t0)[2]);
if(C_truep(C_i_equalp(t3,((C_word*)t0)[3]))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3385,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:441: pathname-extension");
t5=C_fast_retrieve(lf[164]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[5]);}
else{
t4=((C_word*)t0)[4];
f_3354(t4,C_SCHEME_FALSE);}}
else{
t3=((C_word*)t0)[4];
f_3354(t3,C_SCHEME_FALSE);}}

/* map-loop290 in k2273 in k2259 in k2253 in k2352 in k2355 in k2358 in k2223 in k2219 in k2408 in smooth in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in ... */
static void C_fcall f_2283(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_2283,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2312,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2272,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:254: symbol->string");
t7=*((C_word*)lf[96]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* setup-api#register-program in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in k1775 in ... */
static void C_ccall f_2114(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_2114r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2114r(t0,t1,t2,t3);}}

static void C_ccall f_2114r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2118,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2136,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:210: ->string");
t6=C_fast_retrieve(lf[75]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}
else{
t5=t4;
f_2118(2,t5,C_i_car(t3));}}

/* k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in k1775 in k1771 in k1766 in ... */
static void C_ccall f_1987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1987,2,t0,t1);}
t2=C_mutate2((C_word*)lf[55]+1 /* (set! setup-api#abort-setup ...) */,t1);
t3=C_mutate2((C_word*)lf[56]+1 /* (set! setup-api#patch ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1989,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2112,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:207: make-parameter");
t5=C_fast_retrieve(lf[259]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,C_SCHEME_TRUE);}

/* k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in k1775 in k1771 in ... */
static void C_ccall f_2112(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2112,2,t0,t1);}
t2=C_mutate2((C_word*)lf[73]+1 /* (set! setup-api#run-verbose ...) */,t1);
t3=C_mutate2((C_word*)lf[74]+1 /* (set! setup-api#register-program ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2114,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[77]+1 /* (set! setup-api#find-program ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2141,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2160,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2171,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4864,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#peek-c-string");
t8=*((C_word*)lf[264]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,C_mpointer(&a,(void*)C_CHICKEN_PROGRAM),C_fix(0));}

/* setup-api#patch in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in k1775 in k1771 in ... */
static void C_ccall f_1989(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1989,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1993,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2093,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:190: setup-verbose-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[19]))(2,*((C_word*)lf[19]+1),t6);}

/* k2116 in setup-api#register-program in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in ... */
static void C_ccall f_2118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2118,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2126,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:212: ->string");
t4=C_fast_retrieve(lf[75]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* k3343 in k3340 in k3334 in k3328 in k3325 in k3322 in k3319 in g815 in k3314 in k3311 in k3308 in k3305 in setup-api#install-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in ... */
static void C_ccall f_3345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?t1:((C_word*)t0)[3]));}

/* k4076 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in setup-api#try-compile in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in ... */
static void C_ccall f_4078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_truep(C_retrieve2(lf[10],"setup-api#\052windows\052"))?lf[192]:lf[193]);
t3=(C_truep(((C_word*)t0)[2])?lf[194]:lf[195]);
C_trace("setup-api.scm:527: conc");
t4=C_fast_retrieve(lf[196]);
((C_proc15)(void*)(*((C_word*)t4+1)))(15,t4,((C_word*)t0)[3],((C_word*)t0)[4],lf[197],((C_word*)t0)[5],lf[198],((C_word*)t0)[6],lf[199],C_retrieve2(lf[4],"setup-api#\052target-cflags\052"),lf[200],((C_word*)t0)[7],lf[201],t1,t2,t3);}

/* setup-api#extension-name in k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_ccall f_4382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4382,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4390,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:588: extension-name-and-version");
((C_proc2)C_fast_retrieve_symbol_proc(lf[144]))(2,*((C_word*)lf[144]+1),t2);}

/* k3804 in k3698 in k3695 in k3692 in setup-api#install-script in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in ... */
static void C_ccall f_3806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3806,2,t0,t1);}
C_trace("setup-api.scm:479: ensure-directory");
f_3886(((C_word*)t0)[2],t1,C_a_i_list(&a,1,C_SCHEME_TRUE));}

/* k3340 in k3334 in k3328 in k3325 in k3322 in k3319 in g815 in k3314 in k3311 in k3308 in k3305 in setup-api#install-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in ... */
static void C_ccall f_3342(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3342,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3345,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=t2;
t4=((C_word*)t0)[4];
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2195,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:233: runtime-prefix");
((C_proc2)C_fast_retrieve_symbol_proc(lf[110]))(2,*((C_word*)lf[110]+1),t5);}}

/* f_4809 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in ... */
static void C_ccall f_4809(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4809,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4813,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:305: verb");
f_2602(t3,t2);}

/* k2270 in map-loop290 in k2273 in k2259 in k2253 in k2352 in k2355 in k2358 in k2223 in k2219 in k2408 in smooth in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in ... */
static void C_ccall f_2272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#string-append");
((C_proc4)C_fast_retrieve_symbol_proc(lf[94]))(4,*((C_word*)lf[94]+1),((C_word*)t0)[2],lf[95],t1);}

/* k4378 in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in ... */
static void C_ccall f_4380(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4380,2,t0,t1);}
t2=C_mutate2((C_word*)lf[144]+1 /* (set! setup-api#extension-name-and-version ...) */,t1);
t3=C_mutate2((C_word*)lf[141]+1 /* (set! setup-api#extension-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4382,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[233]+1 /* (set! setup-api#extension-version ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4392,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[235]+1 /* (set! setup-api#read-info ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4423,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[237]+1 /* (set! setup-api#remove-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4445,a[2]=((C_word)li86),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[245]+1 /* (set! setup-api#remove-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4610,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2(&lf[63] /* (set! setup-api#$system ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4674,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[251]+1 /* (set! setup-api#setup-error-handling ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4728,a[2]=((C_word)li91),tmp=(C_word)a,a+=3,tmp));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4741,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:645: user-install-setup");
f_1938(t10);}

/* k2273 in k2259 in k2253 in k2352 in k2355 in k2358 in k2223 in k2219 in k2408 in smooth in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in ... */
static void C_ccall f_2275(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2275,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[79]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2281,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2283,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word)li12),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2283(t7,t3,t1);}

/* k4819 */
static void C_ccall f_4821(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4821,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4836,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:309: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t2,((C_word*)t0)[3]);}

/* a2017 in a2007 in k1991 in setup-api#patch in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in ... */
static void C_ccall f_2018(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2018,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2024,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li5),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2024(t5,t1);}

/* k4062 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in setup-api#try-compile in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in ... */
static void C_ccall f_4064(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4064,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4067,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
C_trace("setup-api.scm:537: print");
t4=*((C_word*)lf[47]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[189]);}
else{
C_trace("setup-api.scm:526: system");
t4=C_fast_retrieve(lf[188]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],t2);}}

/* k4065 in k4062 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in setup-api#try-compile in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in ... */
static void C_ccall f_4067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:526: system");
t2=C_fast_retrieve(lf[188]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3832 in k3829 in setup-api#repo-path in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_3834(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k3829 in setup-api#repo-path in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_ccall f_3831(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3831,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3834,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:506: ensure-directory");
f_3886(t3,t2,C_a_i_list(&a,1,C_SCHEME_TRUE));}

/* k4834 in k4819 */
static void C_ccall f_4836(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4836,2,t0,t1);}
t2=C_a_i_list(&a,3,C_retrieve2(lf[33],"setup-api#\052mkdir-command\052"),lf[114],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:309: execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[78]))(3,*((C_word*)lf[78]+1),((C_word*)t0)[2],t3);}

/* a2007 in k1991 in setup-api#patch in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in ... */
static void C_ccall f_2008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2008,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2018,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li6),tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:194: with-input-from-file");
t4=C_fast_retrieve(lf[60]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,t3);}

/* a4096 in k3957 in k3954 in k3951 in k3948 in setup-api#try-compile in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in ... */
static void C_ccall f_4097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4097,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* setup-api#repo-path in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in ... */
static void C_fcall f_3824(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3824,NULL,2,t1,t2);}
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3831,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t4)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3840,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:497: deployment-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[21]))(2,*((C_word*)lf[21]+1),t6);}
else{
C_trace("setup-api.scm:505: repository-path");
t6=C_fast_retrieve(lf[121]);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* a4090 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in setup-api#try-compile in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in ... */
static void C_ccall f_4091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4091,2,t0,t1);}
C_trace("setup-api.scm:525: g1074");
t2=*((C_word*)lf[206]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* k2124 in k2116 in setup-api#register-program in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in ... */
static void C_ccall f_2126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2126,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_a_i_cons(&a,2,t1,((C_word*)t0)[2]),C_retrieve2(lf[9],"setup-api#\052registered-programs\052"));
t3=C_mutate2(&lf[9] /* (set! setup-api#*registered-programs* ...) */,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k4199 in k4196 in k4193 in k4187 in setup-api#find-header in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in ... */
static void C_ccall f_4201(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4201,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4204,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:552: get-output-string");
t3=C_fast_retrieve(lf[64]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k4202 in k4199 in k4196 in k4193 in k4187 in setup-api#find-header in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in ... */
static void C_ccall f_4204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:551: test-compile");
((C_proc5)C_fast_retrieve_symbol_proc(lf[216]))(5,*((C_word*)lf[216]+1),((C_word*)t0)[2],t1,lf[209],C_SCHEME_TRUE);}

/* setup-api#version>=? in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in ... */
static void C_ccall f_4206(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4206,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4209,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4270,a[2]=t1,a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:559: version->list");
f_4209(t5,t2);}

/* version->list in setup-api#version>=? in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_fcall f_4209(C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_4209,NULL,2,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4221,a[2]=t6,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4263,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:558: ->string");
t9=C_fast_retrieve(lf[75]);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t2);}

/* k2667 in k2643 in k2640 in k2637 in k2634 in setup-api#write-info in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in ... */
static void C_ccall f_2669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2669,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2672,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2693,a[2]=((C_word*)t0)[4],a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:320: with-output-to-file");
t5=C_fast_retrieve(lf[61]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t2,t4);}

/* k2664 in k2646 in k2643 in k2640 in k2637 in k2634 in setup-api#write-info in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in ... */
static void C_ccall f_2666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2666,2,t0,t1);}
t2=C_a_i_list(&a,3,C_retrieve2(lf[31],"setup-api#\052chmod-command\052"),lf[118],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:323: execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[78]))(3,*((C_word*)lf[78]+1),((C_word*)t0)[2],t3);}

/* k2613 in k2607 in verb in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_2615(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2615,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2618,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:302: ##sys#print");
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k3305 in setup-api#install-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_ccall f_3307(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3307,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3310,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[5]))){
t3=((C_word*)t0)[5];
C_trace("setup-api.scm:429: check-filelist");
f_2999(t2,t3);}
else{
t3=C_a_i_list1(&a,1,((C_word*)t0)[5]);
C_trace("setup-api.scm:429: check-filelist");
f_2999(t2,t3);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2616 in k2613 in k2607 in verb in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in ... */
static void C_ccall f_2618(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2618,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2621,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:302: ##sys#write-char-0");
((C_proc4)C_fast_retrieve_symbol_proc(lf[66]))(4,*((C_word*)lf[66]+1),t2,C_make_character(10),((C_word*)t0)[3]);}

/* k2103 in k2100 in k2097 in k2091 in setup-api#patch in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in ... */
static void C_ccall f_2105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:190: ##sys#write-char-0");
((C_proc4)C_fast_retrieve_symbol_proc(lf[66]))(4,*((C_word*)lf[66]+1),((C_word*)t0)[2],C_make_character(10),((C_word*)t0)[3]);}

/* k2100 in k2097 in k2091 in setup-api#patch in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in ... */
static void C_ccall f_2102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2102,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2105,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:190: ##sys#print");
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[71],C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* verb in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in ... */
static void C_fcall f_2602(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2602,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2609,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:301: setup-verbose-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[19]))(2,*((C_word*)lf[19]+1),t3);}

/* k2607 in verb in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_ccall f_2609(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2609,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[69]+1);
t3=*((C_word*)lf[69]+1);
t4=C_i_check_port_2(*((C_word*)lf[69]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[70]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2615,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:302: ##sys#print");
t6=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[112],C_SCHEME_FALSE,*((C_word*)lf[69]+1));}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2134 in setup-api#register-program in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in ... */
static void C_ccall f_2136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:210: make-pathname");
t2=C_fast_retrieve(lf[76]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_retrieve2(lf[12],"setup-api#\052chicken-bin-path\052"),t1);}

/* setup-api#sudo-install in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in k1775 in k1771 in k1766 in ... */
static void C_ccall f_1964(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_1964r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1964r(t0,t1,t2);}}

static void C_ccall f_1964r(C_word t0,C_word t1,C_word t2){
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
if(C_truep(C_i_nullp(t2))){
t3=C_retrieve2(lf[7],"setup-api#\052sudo\052");
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_retrieve2(lf[7],"setup-api#\052sudo\052"));}
else{
if(C_truep(C_i_car(t2))){
t3=t1;
t4=lf[7] /* setup-api#*sudo* */ =C_SCHEME_TRUE;;
if(C_truep(C_retrieve2(lf[8],"setup-api#\052windows-shell\052"))){
t5=lf[7] /* setup-api#*sudo* */ =C_SCHEME_FALSE;;
C_trace("setup-api.scm:155: print");
t6=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t3,lf[48]);}
else{
t5=C_mutate2(&lf[28] /* (set! setup-api#*copy-command* ...) */,lf[49]);
t6=C_mutate2(&lf[29] /* (set! setup-api#*remove-command* ...) */,lf[50]);
t7=C_mutate2(&lf[30] /* (set! setup-api#*move-command* ...) */,lf[51]);
t8=C_mutate2(&lf[31] /* (set! setup-api#*chmod-command* ...) */,lf[52]);
t9=C_mutate2(&lf[32] /* (set! setup-api#*ranlib-command* ...) */,lf[53]);
t10=C_mutate2(&lf[33] /* (set! setup-api#*mkdir-command* ...) */,lf[54]);
t11=t3;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}}
else{
C_trace("setup-api.scm:180: user-install-setup");
f_1938(t1);}}}

/* k2634 in setup-api#write-info in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_ccall f_2636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2636,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2639,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:315: ->string");
t3=C_fast_retrieve(lf[75]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k2637 in k2634 in setup-api#write-info in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_2639(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2639,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2642,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2710,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:316: repo-path");
f_3824(t4,C_a_i_list(&a,1,C_SCHEME_TRUE));}

/* k2070 in k2067 in k2064 in k2061 in k2055 in k2048 in k2045 in k1991 in setup-api#patch in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in ... */
static void C_ccall f_2072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2072,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2075,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2082,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:205: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t3,((C_word*)t0)[5]);}

/* k2073 in k2070 in k2067 in k2064 in k2061 in k2055 in k2048 in k2045 in k1991 in setup-api#patch in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in ... */
static void C_ccall f_2075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2075,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2078,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:204: get-output-string");
t3=C_fast_retrieve(lf[64]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k2076 in k2073 in k2070 in k2067 in k2064 in k2061 in k2055 in k2048 in k2045 in k1991 in setup-api#patch in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in ... */
static void C_ccall f_2078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:203: $system");
f_4674(((C_word*)t0)[2],t1);}

/* k3311 in k3308 in k3305 in setup-api#install-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in ... */
static void C_ccall f_3313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3313,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3316,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:431: repo-path");
f_3824(t2,C_a_i_list(&a,1,C_SCHEME_TRUE));}

/* k3308 in k3305 in setup-api#install-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_3310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3310,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3313,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:430: repo-path");
f_3824(t3,C_SCHEME_END_OF_LIST);}

/* g815 in k3314 in k3311 in k3308 in k3305 in setup-api#install-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in ... */
static void C_fcall f_3317(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3317,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3321,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=t3;
f_3321(t5,C_u_i_car(t4));}
else{
t4=t3;
f_3321(t4,t2);}}

/* k3314 in k3311 in k3308 in k3305 in setup-api#install-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in ... */
static void C_ccall f_3316(C_word c,C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3316,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3317,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li39),tmp=(C_word)a,a+=5,tmp);
t8=C_i_check_list_2(((C_word*)t0)[3],lf[79]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3418,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3427,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=t7,a[6]=((C_word)li40),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_3427(t13,t9,((C_word*)t0)[3]);}

/* k2061 in k2055 in k2048 in k2045 in k1991 in setup-api#patch in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in ... */
static void C_ccall f_2063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2063,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2066,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:204: ##sys#write-char-0");
((C_proc4)C_fast_retrieve_symbol_proc(lf[66]))(4,*((C_word*)lf[66]+1),t2,C_make_character(32),((C_word*)t0)[4]);}

/* k2064 in k2061 in k2055 in k2048 in k2045 in k1991 in setup-api#patch in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in ... */
static void C_ccall f_2066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2066,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2069,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2086,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:204: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t3,((C_word*)t0)[6]);}

/* k2067 in k2064 in k2061 in k2055 in k2048 in k2045 in k1991 in setup-api#patch in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in ... */
static void C_ccall f_2069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2069,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2072,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:204: ##sys#write-char-0");
((C_proc4)C_fast_retrieve_symbol_proc(lf[66]))(4,*((C_word*)lf[66]+1),t2,C_make_character(32),((C_word*)t0)[4]);}

/* k2143 in setup-api#find-program in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in ... */
static void C_ccall f_2145(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_assoc(t1,C_retrieve2(lf[9],"setup-api#\052registered-programs\052"));
if(C_truep(t2)){
t3=C_i_cdr(t2);
C_trace("setup-api.scm:218: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),((C_word*)t0)[2],t3);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* setup-api#find-program in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in k1775 in ... */
static void C_ccall f_2141(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2141,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2145,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:215: ->string");
t4=C_fast_retrieve(lf[75]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* setup-api#user-install-setup in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in k1775 in k1771 in k1766 in ... */
static void C_fcall f_1938(C_word t1){
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
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1938,NULL,1,t1);}
t2=lf[7] /* setup-api#*sudo* */ =C_SCHEME_FALSE;;
if(C_truep(C_retrieve2(lf[8],"setup-api#\052windows-shell\052"))){
t3=t1;
t4=C_mutate2(&lf[28] /* (set! setup-api#*copy-command* ...) */,lf[35]);
t5=C_mutate2(&lf[29] /* (set! setup-api#*remove-command* ...) */,lf[36]);
t6=C_mutate2(&lf[30] /* (set! setup-api#*move-command* ...) */,lf[37]);
t7=C_mutate2(&lf[31] /* (set! setup-api#*chmod-command* ...) */,lf[38]);
t8=C_mutate2(&lf[32] /* (set! setup-api#*ranlib-command* ...) */,lf[39]);
t9=t3;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t3=t1;
t4=C_mutate2(&lf[28] /* (set! setup-api#*copy-command* ...) */,lf[40]);
t5=C_mutate2(&lf[29] /* (set! setup-api#*remove-command* ...) */,lf[41]);
t6=C_mutate2(&lf[30] /* (set! setup-api#*move-command* ...) */,lf[42]);
t7=C_mutate2(&lf[31] /* (set! setup-api#*chmod-command* ...) */,lf[43]);
t8=C_mutate2(&lf[32] /* (set! setup-api#*ranlib-command* ...) */,lf[44]);
t9=C_mutate2(&lf[33] /* (set! setup-api#*mkdir-command* ...) */,lf[45]);
t10=t3;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}}

/* k2091 in setup-api#patch in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in k1775 in ... */
static void C_ccall f_2093(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2093,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[69]+1);
t3=*((C_word*)lf[69]+1);
t4=C_i_check_port_2(*((C_word*)lf[69]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[70]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2099,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:190: ##sys#print");
t6=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[72],C_SCHEME_FALSE,*((C_word*)lf[69]+1));}
else{
t2=((C_word*)t0)[2];
f_1993(2,t2,C_SCHEME_UNDEFINED);}}

/* k2097 in k2091 in setup-api#patch in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in ... */
static void C_ccall f_2099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2099,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2102,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:190: ##sys#print");
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k2223 in k2219 in k2408 in smooth in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_fcall f_2225(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2225,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2360,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:246: keep-intermediates");
((C_proc2)C_fast_retrieve_symbol_proc(lf[23]))(2,*((C_word*)lf[23]+1),t3);}

/* k2640 in k2637 in k2634 in setup-api#write-info in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in ... */
static void C_ccall f_2642(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2642,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2645,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:317: ensure-directory");
f_3886(t3,t2,C_SCHEME_END_OF_LIST);}

/* k2646 in k2643 in k2640 in k2637 in k2634 in setup-api#write-info in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in ... */
static void C_ccall f_2648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2648,2,t0,t1);}
if(C_truep(C_retrieve2(lf[8],"setup-api#\052windows-shell\052"))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2666,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:323: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t2,((C_word*)t0)[3]);}}

/* k2643 in k2640 in k2637 in k2634 in setup-api#write-info in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in ... */
static void C_ccall f_2645(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2645,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2648,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[7],"setup-api#\052sudo\052"))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2669,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:319: create-temporary-file");
t4=C_fast_retrieve(lf[68]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2702,a[2]=((C_word*)t0)[4],a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:322: with-output-to-file");
t4=C_fast_retrieve(lf[61]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[3],t3);}}

/* k2219 in k2408 in smooth in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in ... */
static void C_ccall f_2221(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2221,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2225,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2363,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:242: deployment-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[21]))(2,*((C_word*)lf[21]+1),t4);}

/* k2080 in k2070 in k2067 in k2064 in k2061 in k2055 in k2048 in k2045 in k1991 in setup-api#patch in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in ... */
static void C_ccall f_2082(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:204: ##sys#print");
t2=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k2084 in k2064 in k2061 in k2055 in k2048 in k2045 in k1991 in setup-api#patch in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in ... */
static void C_ccall f_2086(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:204: ##sys#print");
t2=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k2670 in k2667 in k2643 in k2640 in k2637 in k2634 in setup-api#write-info in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in ... */
static void C_ccall f_2672(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2672,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2687,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:321: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t2,((C_word*)t0)[4]);}

/* k2215 in k2408 in smooth in setup-api#execute in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in ... */
static void C_ccall f_2217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:238: string-intersperse");
t2=C_fast_retrieve(lf[80]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[83]);}

/* k3319 in g815 in k3314 in k3311 in k3308 in k3305 in setup-api#install-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in ... */
static void C_fcall f_3321(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3321,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3324,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:434: make-dest-pathname");
f_2974(t3,((C_word*)t0)[5],((C_word*)t0)[3]);}

/* k3325 in k3322 in k3319 in g815 in k3314 in k3311 in k3308 in k3305 in setup-api#install-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in ... */
static void C_ccall f_3327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3327,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3330,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_retrieve2(lf[8],"setup-api#\052windows-shell\052"))){
t3=t2;
f_3330(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3408,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:437: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t3,((C_word*)t0)[5]);}}

/* k3322 in k3319 in g815 in k3314 in k3311 in k3308 in k3305 in setup-api#install-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in ... */
static void C_ccall f_3324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3324,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3327,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:435: copy-file");
((C_proc4)C_fast_retrieve_symbol_proc(lf[126]))(4,*((C_word*)lf[126]+1),t3,((C_word*)t0)[5],t2);}

/* map-loop1155 in k4219 in version->list in setup-api#version>=? in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in ... */
static void C_fcall f_4226(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(7);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4226,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_string_to_number(&a,2,t3,C_fix(10));
t5=(C_truep(t4)?t4:t3);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t7=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t6);
t8=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t6);
t9=C_slot(t2,C_fix(1));
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}
else{
t7=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t6);
t8=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t6);
t9=C_slot(t2,C_fix(1));
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4219 in version->list in setup-api#version>=? in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_4221(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4221,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4226,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word)li69),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_4226(t5,((C_word*)t0)[4],t1);}

/* k2619 in k2616 in k2613 in k2607 in verb in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in ... */
static void C_ccall f_2621(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:302: ##sys#flush-output");
((C_proc3)C_fast_retrieve_symbol_proc(lf[107]))(3,*((C_word*)lf[107]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}

/* setup-api#write-info in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in ... */
static void C_fcall f_2629(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2629,NULL,4,t1,t2,t3,t4);}
t5=C_a_i_cons(&a,2,lf[117],t3);
t6=C_a_i_cons(&a,2,t5,t4);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2636,a[2]=t1,a[3]=t7,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2713,a[2]=t8,a[3]=t7,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:314: setup-verbose-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[19]))(2,*((C_word*)lf[19]+1),t9);}

/* k3352 in k3328 in k3325 in k3322 in k3319 in g815 in k3314 in k3311 in k3308 in k3305 in setup-api#install-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in ... */
static void C_fcall f_3354(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3354,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3369,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:442: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t2,((C_word*)t0)[3]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_3336(2,t3,t2);}}

/* k4342 in loop in k4272 in k4268 in setup-api#version>=? in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in ... */
static void C_ccall f_4344(C_word c,C_word t0,C_word t1){
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
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_car(t2);
t4=((C_word*)t0)[4];
t5=C_u_i_car(t4);
if(C_truep(C_i_string_equal_p(t3,t5))){
t6=((C_word*)t0)[3];
t7=C_u_i_cdr(t6);
t8=((C_word*)t0)[4];
t9=C_u_i_cdr(t8);
C_trace("setup-api.scm:572: loop");
t10=((C_word*)((C_word*)t0)[5])[1];
f_4276(t10,((C_word*)t0)[2],t7,t9);}
else{
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}}

/* k3334 in k3328 in k3325 in k3322 in k3319 in g815 in k3314 in k3311 in k3308 in k3305 in setup-api#install-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in ... */
static void C_ccall f_3336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3336,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3342,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:443: deployment-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[21]))(2,*((C_word*)lf[21]+1),t2);}

/* k3328 in k3325 in k3322 in k3319 in g815 in k3314 in k3311 in k3308 in k3305 in setup-api#install-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in ... */
static void C_ccall f_3330(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3330,2,t0,t1);}
t2=C_i_assq(lf[161],((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3336,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3354,a[2]=t4,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3393,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=t5,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:439: software-version");
t7=C_fast_retrieve(lf[165]);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t5=t4;
f_3336(2,t5,C_SCHEME_FALSE);}}

/* k3367 in k3352 in k3328 in k3325 in k3322 in k3319 in g815 in k3314 in k3311 in k3308 in k3305 in setup-api#install-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in ... */
static void C_ccall f_3369(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3369,2,t0,t1);}
t2=C_a_i_list(&a,2,C_retrieve2(lf[32],"setup-api#\052ranlib-command\052"),t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:442: execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[78]))(3,*((C_word*)lf[78]+1),((C_word*)t0)[2],t3);}

/* reg in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in k1775 in ... */
static void C_fcall f_2160(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2160,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2168,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:223: make-pathname");
t5=C_fast_retrieve(lf[76]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_retrieve2(lf[12],"setup-api#\052chicken-bin-path\052"),t3);}

/* k2166 in reg in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in ... */
static void C_ccall f_2168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:223: register-program");
((C_proc4)C_fast_retrieve_symbol_proc(lf[74]))(4,*((C_word*)lf[74]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k3891 in setup-api#ensure-directory in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in ... */
static void C_ccall f_3893(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3893,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3896,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3902,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:511: file-exists?");
t5=C_fast_retrieve(lf[147]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[3]);}}

/* k3894 in k3891 in setup-api#ensure-directory in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in ... */
static void C_ccall f_3896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k2193 in k3340 in k3334 in k3328 in k3325 in k3322 in k3319 in g815 in k3314 in k3311 in k3308 in k3305 in setup-api#install-extension in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in ... */
static void C_ccall f_2195(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("setup-api.scm:234: make-pathname");
t2=C_fast_retrieve(lf[76]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4887 in k1787 in k1783 in k1779 in k1775 in k1771 in k1766 in k1763 in k1760 in k1757 in k1754 in k1751 in k1748 in k1745 in k1742 in k1739 in k1736 in k1733 */
static void C_ccall f_4889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_eqp(t1,lf[277]);
if(C_truep(t2)){
C_trace("setup-api.scm:87: build-platform");
t3=C_fast_retrieve(lf[278]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[2];
f_1796(2,t3,C_SCHEME_FALSE);}}

/* setup-api#ensure-directory in k2586 in k2582 in k2578 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in ... */
static void C_fcall f_3886(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3886,NULL,3,t1,t2,t3);}
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3893,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t5)){
t7=t6;
f_3893(2,t7,t2);}
else{
C_trace("setup-api.scm:510: pathname-directory");
t7=C_fast_retrieve(lf[181]);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}}

/* k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in k1775 in ... */
static void C_ccall f_2171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2171,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2174,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4860,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[264]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_CSI_PROGRAM),C_fix(0));}

/* k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in k1779 in ... */
static void C_ccall f_2174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2174,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2177,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4856,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[264]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_CSC_PROGRAM),C_fix(0));}

/* k2175 in k2172 in k2169 in k2110 in k1985 in k1857 in k1853 in k1849 in k1845 in k1841 in k1837 in k1833 in k1818 in k1815 in k1811 in k1808 in k1805 in k1801 in k1797 in k1794 in k1787 in k1783 in ... */
static void C_ccall f_2177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2177,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2180,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4852,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[264]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_CHICKEN_INSTALL_PROGRAM),C_fix(0));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[430] = {
{"f_3282:setup_2dapi_2escm",(void*)f_3282},
{"f_2795:setup_2dapi_2escm",(void*)f_2795},
{"f_2790:setup_2dapi_2escm",(void*)f_2790},
{"f_4759:setup_2dapi_2escm",(void*)f_4759},
{"f_4163:setup_2dapi_2escm",(void*)f_4163},
{"f_4169:setup_2dapi_2escm",(void*)f_4169},
{"f_4166:setup_2dapi_2escm",(void*)f_4166},
{"f_4160:setup_2dapi_2escm",(void*)f_4160},
{"f_2783:setup_2dapi_2escm",(void*)f_2783},
{"f_2787:setup_2dapi_2escm",(void*)f_2787},
{"f_4743:setup_2dapi_2escm",(void*)f_4743},
{"f_4195:setup_2dapi_2escm",(void*)f_4195},
{"f_4741:setup_2dapi_2escm",(void*)f_4741},
{"f_4198:setup_2dapi_2escm",(void*)f_4198},
{"f_3261:setup_2dapi_2escm",(void*)f_3261},
{"f_4648:setup_2dapi_2escm",(void*)f_4648},
{"f_3297:setup_2dapi_2escm",(void*)f_3297},
{"f_4189:setup_2dapi_2escm",(void*)f_4189},
{"f_3478:setup_2dapi_2escm",(void*)f_3478},
{"f_4181:setup_2dapi_2escm",(void*)f_4181},
{"f_4638:setup_2dapi_2escm",(void*)f_4638},
{"f_4766:setup_2dapi_2escm",(void*)f_4766},
{"f_4663:setup_2dapi_2escm",(void*)f_4663},
{"f_1799:setup_2dapi_2escm",(void*)f_1799},
{"f_4718:setup_2dapi_2escm",(void*)f_4718},
{"f_1796:setup_2dapi_2escm",(void*)f_1796},
{"f_4715:setup_2dapi_2escm",(void*)f_4715},
{"f_3498:setup_2dapi_2escm",(void*)f_3498},
{"f_4712:setup_2dapi_2escm",(void*)f_4712},
{"f_1880:setup_2dapi_2escm",(void*)f_1880},
{"f_1789:setup_2dapi_2escm",(void*)f_1789},
{"f_4709:setup_2dapi_2escm",(void*)f_4709},
{"f_4703:setup_2dapi_2escm",(void*)f_4703},
{"f_4706:setup_2dapi_2escm",(void*)f_4706},
{"f_3484:setup_2dapi_2escm",(void*)f_3484},
{"f_1781:setup_2dapi_2escm",(void*)f_1781},
{"f_1785:setup_2dapi_2escm",(void*)f_1785},
{"f_4700:setup_2dapi_2escm",(void*)f_4700},
{"f_4734:setup_2dapi_2escm",(void*)f_4734},
{"f_4730:setup_2dapi_2escm",(void*)f_4730},
{"f_4674:setup_2dapi_2escm",(void*)f_4674},
{"f_4678:setup_2dapi_2escm",(void*)f_4678},
{"f_4728:setup_2dapi_2escm",(void*)f_4728},
{"f_4723:setup_2dapi_2escm",(void*)f_4723},
{"f_4175:setup_2dapi_2escm",(void*)f_4175},
{"f_4172:setup_2dapi_2escm",(void*)f_4172},
{"f_4179:setup_2dapi_2escm",(void*)f_4179},
{"f_1756:setup_2dapi_2escm",(void*)f_1756},
{"f_1753:setup_2dapi_2escm",(void*)f_1753},
{"f_2713:setup_2dapi_2escm",(void*)f_2713},
{"f_1750:setup_2dapi_2escm",(void*)f_1750},
{"f_2710:setup_2dapi_2escm",(void*)f_2710},
{"f_1759:setup_2dapi_2escm",(void*)f_1759},
{"f_2719:setup_2dapi_2escm",(void*)f_2719},
{"f_1843:setup_2dapi_2escm",(void*)f_1843},
{"f_4001:setup_2dapi_2escm",(void*)f_4001},
{"f_4004:setup_2dapi_2escm",(void*)f_4004},
{"f_1847:setup_2dapi_2escm",(void*)f_1847},
{"f_1744:setup_2dapi_2escm",(void*)f_1744},
{"f_1741:setup_2dapi_2escm",(void*)f_1741},
{"f_2702:setup_2dapi_2escm",(void*)f_2702},
{"f_1747:setup_2dapi_2escm",(void*)f_1747},
{"f_4033:setup_2dapi_2escm",(void*)f_4033},
{"f_1871:setup_2dapi_2escm",(void*)f_1871},
{"f_4030:setup_2dapi_2escm",(void*)f_4030},
{"f_4037:setup_2dapi_2escm",(void*)f_4037},
{"f_4039:setup_2dapi_2escm",(void*)f_4039},
{"toplevel:setup_2dapi_2escm",(void*)C_toplevel},
{"f_1773:setup_2dapi_2escm",(void*)f_1773},
{"f_1777:setup_2dapi_2escm",(void*)f_1777},
{"f_2774:setup_2dapi_2escm",(void*)f_2774},
{"f_2775:setup_2dapi_2escm",(void*)f_2775},
{"f_4024:setup_2dapi_2escm",(void*)f_4024},
{"f_1861:setup_2dapi_2escm",(void*)f_1861},
{"f_4027:setup_2dapi_2escm",(void*)f_4027},
{"f_1765:setup_2dapi_2escm",(void*)f_1765},
{"f_2762:setup_2dapi_2escm",(void*)f_2762},
{"f_1762:setup_2dapi_2escm",(void*)f_1762},
{"f_2767:setup_2dapi_2escm",(void*)f_2767},
{"f_1768:setup_2dapi_2escm",(void*)f_1768},
{"f_2765:setup_2dapi_2escm",(void*)f_2765},
{"f_1890:setup_2dapi_2escm",(void*)f_1890},
{"f_2750:setup_2dapi_2escm",(void*)f_2750},
{"f_2759:setup_2dapi_2escm",(void*)f_2759},
{"f_2756:setup_2dapi_2escm",(void*)f_2756},
{"f_1803:setup_2dapi_2escm",(void*)f_1803},
{"f_3418:setup_2dapi_2escm",(void*)f_3418},
{"f_1807:setup_2dapi_2escm",(void*)f_1807},
{"f_2740:setup_2dapi_2escm",(void*)f_2740},
{"f_3408:setup_2dapi_2escm",(void*)f_3408},
{"f_1830:setup_2dapi_2escm",(void*)f_1830},
{"f_1835:setup_2dapi_2escm",(void*)f_1835},
{"f_1839:setup_2dapi_2escm",(void*)f_1839},
{"f_1735:setup_2dapi_2escm",(void*)f_1735},
{"f_1738:setup_2dapi_2escm",(void*)f_1738},
{"f_1822:setup_2dapi_2escm",(void*)f_1822},
{"f_1820:setup_2dapi_2escm",(void*)f_1820},
{"f_3427:setup_2dapi_2escm",(void*)f_3427},
{"f_3425:setup_2dapi_2escm",(void*)f_3425},
{"f_1855:setup_2dapi_2escm",(void*)f_1855},
{"f_4010:setup_2dapi_2escm",(void*)f_4010},
{"f_1851:setup_2dapi_2escm",(void*)f_1851},
{"f_4018:setup_2dapi_2escm",(void*)f_4018},
{"f_1859:setup_2dapi_2escm",(void*)f_1859},
{"f_4627:setup_2dapi_2escm",(void*)f_4627},
{"f_4620:setup_2dapi_2escm",(void*)f_4620},
{"f_4614:setup_2dapi_2escm",(void*)f_4614},
{"f_4610:setup_2dapi_2escm",(void*)f_4610},
{"f_1810:setup_2dapi_2escm",(void*)f_1810},
{"f_1813:setup_2dapi_2escm",(void*)f_1813},
{"f_1817:setup_2dapi_2escm",(void*)f_1817},
{"f_4045:setup_2dapi_2escm",(void*)f_4045},
{"f_2731:setup_2dapi_2escm",(void*)f_2731},
{"f_2722:setup_2dapi_2escm",(void*)f_2722},
{"f_2725:setup_2dapi_2escm",(void*)f_2725},
{"f_2728:setup_2dapi_2escm",(void*)f_2728},
{"f_3456:setup_2dapi_2escm",(void*)f_3456},
{"f_4697:setup_2dapi_2escm",(void*)f_4697},
{"f_4691:setup_2dapi_2escm",(void*)f_4691},
{"f_4793:setup_2dapi_2escm",(void*)f_4793},
{"f_4789:setup_2dapi_2escm",(void*)f_4789},
{"f_4602:setup_2dapi_2escm",(void*)f_4602},
{"f_2525:setup_2dapi_2escm",(void*)f_2525},
{"f_3694:setup_2dapi_2escm",(void*)f_3694},
{"f_3697:setup_2dapi_2escm",(void*)f_3697},
{"f_2458:setup_2dapi_2escm",(void*)f_2458},
{"f_3914:setup_2dapi_2escm",(void*)f_3914},
{"f_3549:setup_2dapi_2escm",(void*)f_3549},
{"f_2357:setup_2dapi_2escm",(void*)f_2357},
{"f_2354:setup_2dapi_2escm",(void*)f_2354},
{"f_3198:setup_2dapi_2escm",(void*)f_3198},
{"f_4274:setup_2dapi_2escm",(void*)f_4274},
{"f_2512:setup_2dapi_2escm",(void*)f_2512},
{"f_4276:setup_2dapi_2escm",(void*)f_4276},
{"f_3769:setup_2dapi_2escm",(void*)f_3769},
{"f_3767:setup_2dapi_2escm",(void*)f_3767},
{"f_4270:setup_2dapi_2escm",(void*)f_4270},
{"f_3902:setup_2dapi_2escm",(void*)f_3902},
{"f_2347:setup_2dapi_2escm",(void*)f_2347},
{"f_3539:setup_2dapi_2escm",(void*)f_3539},
{"f_2580:setup_2dapi_2escm",(void*)f_2580},
{"f_4549:setup_2dapi_2escm",(void*)f_4549},
{"f_2589:setup_2dapi_2escm",(void*)f_2589},
{"f_2588:setup_2dapi_2escm",(void*)f_2588},
{"f_2584:setup_2dapi_2escm",(void*)f_2584},
{"f_3971:setup_2dapi_2escm",(void*)f_3971},
{"f_3974:setup_2dapi_2escm",(void*)f_3974},
{"f_2479:setup_2dapi_2escm",(void*)f_2479},
{"f_2473:setup_2dapi_2escm",(void*)f_2473},
{"f_3908:setup_2dapi_2escm",(void*)f_3908},
{"f_3752:setup_2dapi_2escm",(void*)f_3752},
{"f_3177:setup_2dapi_2escm",(void*)f_3177},
{"f_4539:setup_2dapi_2escm",(void*)f_4539},
{"f_4538:setup_2dapi_2escm",(void*)f_4538},
{"f_4534:setup_2dapi_2escm",(void*)f_4534},
{"f_3962:setup_2dapi_2escm",(void*)f_3962},
{"f_3965:setup_2dapi_2escm",(void*)f_3965},
{"f_2467:setup_2dapi_2escm",(void*)f_2467},
{"f_3183:setup_2dapi_2escm",(void*)f_3183},
{"f_3977:setup_2dapi_2escm",(void*)f_3977},
{"f_3742:setup_2dapi_2escm",(void*)f_3742},
{"f_3745:setup_2dapi_2escm",(void*)f_3745},
{"f_3093:setup_2dapi_2escm",(void*)f_3093},
{"f_4484:setup_2dapi_2escm",(void*)f_4484},
{"f_4487:setup_2dapi_2escm",(void*)f_4487},
{"f_2564:setup_2dapi_2escm",(void*)f_2564},
{"f_3950:setup_2dapi_2escm",(void*)f_3950},
{"f_3953:setup_2dapi_2escm",(void*)f_3953},
{"f_2410:setup_2dapi_2escm",(void*)f_2410},
{"f_3658:setup_2dapi_2escm",(void*)f_3658},
{"f_2392:setup_2dapi_2escm",(void*)f_2392},
{"f_3968:setup_2dapi_2escm",(void*)f_3968},
{"f_3587:setup_2dapi_2escm",(void*)f_3587},
{"f_2398:setup_2dapi_2escm",(void*)f_2398},
{"f_4472:setup_2dapi_2escm",(void*)f_4472},
{"f_3732:setup_2dapi_2escm",(void*)f_3732},
{"f_4478:setup_2dapi_2escm",(void*)f_4478},
{"f_3684:setup_2dapi_2escm",(void*)f_3684},
{"f_3076:setup_2dapi_2escm",(void*)f_3076},
{"f_4558:setup_2dapi_2escm",(void*)f_4558},
{"f_2554:setup_2dapi_2escm",(void*)f_2554},
{"f_4552:setup_2dapi_2escm",(void*)f_4552},
{"f_2482:setup_2dapi_2escm",(void*)f_2482},
{"f_3943:setup_2dapi_2escm",(void*)f_3943},
{"f_2485:setup_2dapi_2escm",(void*)f_2485},
{"f_3165:setup_2dapi_2escm",(void*)f_3165},
{"f_3959:setup_2dapi_2escm",(void*)f_3959},
{"f_3956:setup_2dapi_2escm",(void*)f_3956},
{"f_4263:setup_2dapi_2escm",(void*)f_4263},
{"f_3717:setup_2dapi_2escm",(void*)f_3717},
{"f_4587:setup_2dapi_2escm",(void*)f_4587},
{"f_2372:setup_2dapi_2escm",(void*)f_2372},
{"f_3714:setup_2dapi_2escm",(void*)f_3714},
{"f_4493:setup_2dapi_2escm",(void*)f_4493},
{"f_3711:setup_2dapi_2escm",(void*)f_3711},
{"f_3708:setup_2dapi_2escm",(void*)f_3708},
{"f_4572:setup_2dapi_2escm",(void*)f_4572},
{"f_4577:setup_2dapi_2escm",(void*)f_4577},
{"f_2429:setup_2dapi_2escm",(void*)f_2429},
{"f_2421:setup_2dapi_2escm",(void*)f_2421},
{"f_2360:setup_2dapi_2escm",(void*)f_2360},
{"f_3556:setup_2dapi_2escm",(void*)f_3556},
{"f_2366:setup_2dapi_2escm",(void*)f_2366},
{"f_3558:setup_2dapi_2escm",(void*)f_3558},
{"f_2363:setup_2dapi_2escm",(void*)f_2363},
{"f_4445:setup_2dapi_2escm",(void*)f_4445},
{"f_3704:setup_2dapi_2escm",(void*)f_3704},
{"f_3703:setup_2dapi_2escm",(void*)f_3703},
{"f_3700:setup_2dapi_2escm",(void*)f_3700},
{"f_2921:setup_2dapi_2escm",(void*)f_2921},
{"f_3610:setup_2dapi_2escm",(void*)f_3610},
{"f_3014:setup_2dapi_2escm",(void*)f_3014},
{"f_3250:setup_2dapi_2escm",(void*)f_3250},
{"f_3254:setup_2dapi_2escm",(void*)f_3254},
{"f_2956:setup_2dapi_2escm",(void*)f_2956},
{"f_4112:setup_2dapi_2escm",(void*)f_4112},
{"f_4119:setup_2dapi_2escm",(void*)f_4119},
{"f_3242:setup_2dapi_2escm",(void*)f_3242},
{"f_3246:setup_2dapi_2escm",(void*)f_3246},
{"f_2502:setup_2dapi_2escm",(void*)f_2502},
{"f_2905:setup_2dapi_2escm",(void*)f_2905},
{"f_2909:setup_2dapi_2escm",(void*)f_2909},
{"f_4100:setup_2dapi_2escm",(void*)f_4100},
{"f_4106:setup_2dapi_2escm",(void*)f_4106},
{"f_4109:setup_2dapi_2escm",(void*)f_4109},
{"f_2936:setup_2dapi_2escm",(void*)f_2936},
{"f_4405:setup_2dapi_2escm",(void*)f_4405},
{"f_4423:setup_2dapi_2escm",(void*)f_4423},
{"f_2312:setup_2dapi_2escm",(void*)f_2312},
{"f_2318:setup_2dapi_2escm",(void*)f_2318},
{"f_3157:setup_2dapi_2escm",(void*)f_3157},
{"f_4127:setup_2dapi_2escm",(void*)f_4127},
{"f_3213:setup_2dapi_2escm",(void*)f_3213},
{"f_3216:setup_2dapi_2escm",(void*)f_3216},
{"f_3219:setup_2dapi_2escm",(void*)f_3219},
{"f_2994:setup_2dapi_2escm",(void*)f_2994},
{"f_2999:setup_2dapi_2escm",(void*)f_2999},
{"f_3606:setup_2dapi_2escm",(void*)f_3606},
{"f_2403:setup_2dapi_2escm",(void*)f_2403},
{"f_2400:setup_2dapi_2escm",(void*)f_2400},
{"f_4154:setup_2dapi_2escm",(void*)f_4154},
{"f_4151:setup_2dapi_2escm",(void*)f_4151},
{"f_4157:setup_2dapi_2escm",(void*)f_4157},
{"f_4427:setup_2dapi_2escm",(void*)f_4427},
{"f_3200:setup_2dapi_2escm",(void*)f_3200},
{"f_2940:setup_2dapi_2escm",(void*)f_2940},
{"f_3932:setup_2dapi_2escm",(void*)f_3932},
{"f_4145:setup_2dapi_2escm",(void*)f_4145},
{"f_4142:setup_2dapi_2escm",(void*)f_4142},
{"f_4148:setup_2dapi_2escm",(void*)f_4148},
{"f_4415:setup_2dapi_2escm",(void*)f_4415},
{"f_2972:setup_2dapi_2escm",(void*)f_2972},
{"f_2974:setup_2dapi_2escm",(void*)f_2974},
{"f_3629:setup_2dapi_2escm",(void*)f_3629},
{"f_3129:setup_2dapi_2escm",(void*)f_3129},
{"f_4525:setup_2dapi_2escm",(void*)f_4525},
{"f_2834:setup_2dapi_2escm",(void*)f_2834},
{"f_2838:setup_2dapi_2escm",(void*)f_2838},
{"f_4517:setup_2dapi_2escm",(void*)f_4517},
{"f_4519:setup_2dapi_2escm",(void*)f_4519},
{"f_3521:setup_2dapi_2escm",(void*)f_3521},
{"f_4510:setup_2dapi_2escm",(void*)f_4510},
{"f_3524:setup_2dapi_2escm",(void*)f_3524},
{"f_4513:setup_2dapi_2escm",(void*)f_4513},
{"f_3511:setup_2dapi_2escm",(void*)f_3511},
{"f_3510:setup_2dapi_2escm",(void*)f_3510},
{"f_3515:setup_2dapi_2escm",(void*)f_3515},
{"f_2854:setup_2dapi_2escm",(void*)f_2854},
{"f_2847:setup_2dapi_2escm",(void*)f_2847},
{"f_3501:setup_2dapi_2escm",(void*)f_3501},
{"f_3507:setup_2dapi_2escm",(void*)f_3507},
{"f_3504:setup_2dapi_2escm",(void*)f_3504},
{"f_4136:setup_2dapi_2escm",(void*)f_4136},
{"f_3518:setup_2dapi_2escm",(void*)f_3518},
{"f_4133:setup_2dapi_2escm",(void*)f_4133},
{"f_4139:setup_2dapi_2escm",(void*)f_4139},
{"f_2911:setup_2dapi_2escm",(void*)f_2911},
{"f_2915:setup_2dapi_2escm",(void*)f_2915},
{"f_2918:setup_2dapi_2escm",(void*)f_2918},
{"f_3047:setup_2dapi_2escm",(void*)f_3047},
{"f_2819:setup_2dapi_2escm",(void*)f_2819},
{"f_3231:setup_2dapi_2escm",(void*)f_3231},
{"f_2805:setup_2dapi_2escm",(void*)f_2805},
{"f_3222:setup_2dapi_2escm",(void*)f_3222},
{"f_3228:setup_2dapi_2escm",(void*)f_3228},
{"f_3225:setup_2dapi_2escm",(void*)f_3225},
{"f_4434:setup_2dapi_2escm",(void*)f_4434},
{"f_2593:setup_2dapi_2escm",(void*)f_2593},
{"f_3983:setup_2dapi_2escm",(void*)f_3983},
{"f_3980:setup_2dapi_2escm",(void*)f_3980},
{"f_3995:setup_2dapi_2escm",(void*)f_3995},
{"f_4467:setup_2dapi_2escm",(void*)f_4467},
{"f_3592:setup_2dapi_2escm",(void*)f_3592},
{"f_3989:setup_2dapi_2escm",(void*)f_3989},
{"f_3666:setup_2dapi_2escm",(void*)f_3666},
{"f_2494:setup_2dapi_2escm",(void*)f_2494},
{"f_4507:setup_2dapi_2escm",(void*)f_4507},
{"f_3798:setup_2dapi_2escm",(void*)f_3798},
{"f_4501:setup_2dapi_2escm",(void*)f_4501},
{"f_4840:setup_2dapi_2escm",(void*)f_4840},
{"f_2037:setup_2dapi_2escm",(void*)f_2037},
{"f_4852:setup_2dapi_2escm",(void*)f_4852},
{"f_3856:setup_2dapi_2escm",(void*)f_3856},
{"f_4856:setup_2dapi_2escm",(void*)f_4856},
{"f_2241:setup_2dapi_2escm",(void*)f_2241},
{"f_2028:setup_2dapi_2escm",(void*)f_2028},
{"f_2024:setup_2dapi_2escm",(void*)f_2024},
{"f_3840:setup_2dapi_2escm",(void*)f_3840},
{"f_2693:setup_2dapi_2escm",(void*)f_2693},
{"f_3385:setup_2dapi_2escm",(void*)f_3385},
{"f_3846:setup_2dapi_2escm",(void*)f_3846},
{"f_4844:setup_2dapi_2escm",(void*)f_4844},
{"f_2691:setup_2dapi_2escm",(void*)f_2691},
{"f_4848:setup_2dapi_2escm",(void*)f_4848},
{"f_2183:setup_2dapi_2escm",(void*)f_2183},
{"f_4860:setup_2dapi_2escm",(void*)f_4860},
{"f_2180:setup_2dapi_2escm",(void*)f_2180},
{"f_2186:setup_2dapi_2escm",(void*)f_2186},
{"f_2189:setup_2dapi_2escm",(void*)f_2189},
{"f_2057:setup_2dapi_2escm",(void*)f_2057},
{"f_2050:setup_2dapi_2escm",(void*)f_2050},
{"f_2261:setup_2dapi_2escm",(void*)f_2261},
{"f_2687:setup_2dapi_2escm",(void*)f_2687},
{"f_2047:setup_2dapi_2escm",(void*)f_2047},
{"f_2044:setup_2dapi_2escm",(void*)f_2044},
{"f_3865:setup_2dapi_2escm",(void*)f_3865},
{"f_3862:setup_2dapi_2escm",(void*)f_3862},
{"f_2252:setup_2dapi_2escm",(void*)f_2252},
{"f_3868:setup_2dapi_2escm",(void*)f_3868},
{"f_4864:setup_2dapi_2escm",(void*)f_4864},
{"f_2255:setup_2dapi_2escm",(void*)f_2255},
{"f_4866:setup_2dapi_2escm",(void*)f_4866},
{"f_1993:setup_2dapi_2escm",(void*)f_1993},
{"f_4392:setup_2dapi_2escm",(void*)f_4392},
{"f_4817:setup_2dapi_2escm",(void*)f_4817},
{"f_2281:setup_2dapi_2escm",(void*)f_2281},
{"f_4390:setup_2dapi_2escm",(void*)f_4390},
{"f_4813:setup_2dapi_2escm",(void*)f_4813},
{"f_3393:setup_2dapi_2escm",(void*)f_3393},
{"f_2283:setup_2dapi_2escm",(void*)f_2283},
{"f_2114:setup_2dapi_2escm",(void*)f_2114},
{"f_1987:setup_2dapi_2escm",(void*)f_1987},
{"f_2112:setup_2dapi_2escm",(void*)f_2112},
{"f_1989:setup_2dapi_2escm",(void*)f_1989},
{"f_2118:setup_2dapi_2escm",(void*)f_2118},
{"f_3345:setup_2dapi_2escm",(void*)f_3345},
{"f_4078:setup_2dapi_2escm",(void*)f_4078},
{"f_4382:setup_2dapi_2escm",(void*)f_4382},
{"f_3806:setup_2dapi_2escm",(void*)f_3806},
{"f_3342:setup_2dapi_2escm",(void*)f_3342},
{"f_4809:setup_2dapi_2escm",(void*)f_4809},
{"f_2272:setup_2dapi_2escm",(void*)f_2272},
{"f_4380:setup_2dapi_2escm",(void*)f_4380},
{"f_2275:setup_2dapi_2escm",(void*)f_2275},
{"f_4821:setup_2dapi_2escm",(void*)f_4821},
{"f_2018:setup_2dapi_2escm",(void*)f_2018},
{"f_4064:setup_2dapi_2escm",(void*)f_4064},
{"f_4067:setup_2dapi_2escm",(void*)f_4067},
{"f_3834:setup_2dapi_2escm",(void*)f_3834},
{"f_3831:setup_2dapi_2escm",(void*)f_3831},
{"f_4836:setup_2dapi_2escm",(void*)f_4836},
{"f_2008:setup_2dapi_2escm",(void*)f_2008},
{"f_4097:setup_2dapi_2escm",(void*)f_4097},
{"f_3824:setup_2dapi_2escm",(void*)f_3824},
{"f_4091:setup_2dapi_2escm",(void*)f_4091},
{"f_2126:setup_2dapi_2escm",(void*)f_2126},
{"f_4201:setup_2dapi_2escm",(void*)f_4201},
{"f_4204:setup_2dapi_2escm",(void*)f_4204},
{"f_4206:setup_2dapi_2escm",(void*)f_4206},
{"f_4209:setup_2dapi_2escm",(void*)f_4209},
{"f_2669:setup_2dapi_2escm",(void*)f_2669},
{"f_2666:setup_2dapi_2escm",(void*)f_2666},
{"f_2615:setup_2dapi_2escm",(void*)f_2615},
{"f_3307:setup_2dapi_2escm",(void*)f_3307},
{"f_2618:setup_2dapi_2escm",(void*)f_2618},
{"f_2105:setup_2dapi_2escm",(void*)f_2105},
{"f_2102:setup_2dapi_2escm",(void*)f_2102},
{"f_2602:setup_2dapi_2escm",(void*)f_2602},
{"f_2609:setup_2dapi_2escm",(void*)f_2609},
{"f_2136:setup_2dapi_2escm",(void*)f_2136},
{"f_1964:setup_2dapi_2escm",(void*)f_1964},
{"f_2636:setup_2dapi_2escm",(void*)f_2636},
{"f_2639:setup_2dapi_2escm",(void*)f_2639},
{"f_2072:setup_2dapi_2escm",(void*)f_2072},
{"f_2075:setup_2dapi_2escm",(void*)f_2075},
{"f_2078:setup_2dapi_2escm",(void*)f_2078},
{"f_3313:setup_2dapi_2escm",(void*)f_3313},
{"f_3310:setup_2dapi_2escm",(void*)f_3310},
{"f_3317:setup_2dapi_2escm",(void*)f_3317},
{"f_3316:setup_2dapi_2escm",(void*)f_3316},
{"f_2063:setup_2dapi_2escm",(void*)f_2063},
{"f_2066:setup_2dapi_2escm",(void*)f_2066},
{"f_2069:setup_2dapi_2escm",(void*)f_2069},
{"f_2145:setup_2dapi_2escm",(void*)f_2145},
{"f_2141:setup_2dapi_2escm",(void*)f_2141},
{"f_1938:setup_2dapi_2escm",(void*)f_1938},
{"f_2093:setup_2dapi_2escm",(void*)f_2093},
{"f_2099:setup_2dapi_2escm",(void*)f_2099},
{"f_2225:setup_2dapi_2escm",(void*)f_2225},
{"f_2642:setup_2dapi_2escm",(void*)f_2642},
{"f_2648:setup_2dapi_2escm",(void*)f_2648},
{"f_2645:setup_2dapi_2escm",(void*)f_2645},
{"f_2221:setup_2dapi_2escm",(void*)f_2221},
{"f_2082:setup_2dapi_2escm",(void*)f_2082},
{"f_2086:setup_2dapi_2escm",(void*)f_2086},
{"f_2672:setup_2dapi_2escm",(void*)f_2672},
{"f_2217:setup_2dapi_2escm",(void*)f_2217},
{"f_3321:setup_2dapi_2escm",(void*)f_3321},
{"f_3327:setup_2dapi_2escm",(void*)f_3327},
{"f_3324:setup_2dapi_2escm",(void*)f_3324},
{"f_4226:setup_2dapi_2escm",(void*)f_4226},
{"f_4221:setup_2dapi_2escm",(void*)f_4221},
{"f_2621:setup_2dapi_2escm",(void*)f_2621},
{"f_2629:setup_2dapi_2escm",(void*)f_2629},
{"f_3354:setup_2dapi_2escm",(void*)f_3354},
{"f_4344:setup_2dapi_2escm",(void*)f_4344},
{"f_3336:setup_2dapi_2escm",(void*)f_3336},
{"f_3330:setup_2dapi_2escm",(void*)f_3330},
{"f_3369:setup_2dapi_2escm",(void*)f_3369},
{"f_2160:setup_2dapi_2escm",(void*)f_2160},
{"f_2168:setup_2dapi_2escm",(void*)f_2168},
{"f_3893:setup_2dapi_2escm",(void*)f_3893},
{"f_3896:setup_2dapi_2escm",(void*)f_3896},
{"f_2195:setup_2dapi_2escm",(void*)f_2195},
{"f_4889:setup_2dapi_2escm",(void*)f_4889},
{"f_3886:setup_2dapi_2escm",(void*)f_3886},
{"f_2171:setup_2dapi_2escm",(void*)f_2171},
{"f_2174:setup_2dapi_2escm",(void*)f_2174},
{"f_2177:setup_2dapi_2escm",(void*)f_2177},
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
o|hiding nonexported module bindings: setup-api#constant26 
o|hiding nonexported module bindings: setup-api#*cc* 
o|hiding nonexported module bindings: setup-api#*cxx* 
o|hiding nonexported module bindings: setup-api#*target-cflags* 
o|hiding nonexported module bindings: setup-api#*target-libs* 
o|hiding nonexported module bindings: setup-api#*target-lib-home* 
o|hiding nonexported module bindings: setup-api#*sudo* 
o|hiding nonexported module bindings: setup-api#*windows-shell* 
o|hiding nonexported module bindings: setup-api#*registered-programs* 
o|hiding nonexported module bindings: setup-api#*windows* 
o|hiding nonexported module bindings: setup-api#*chicken-bin-path* 
o|hiding nonexported module bindings: setup-api#*csc-options* 
o|hiding nonexported module bindings: setup-api#*base-directory* 
o|hiding nonexported module bindings: setup-api#*copy-command* 
o|hiding nonexported module bindings: setup-api#*remove-command* 
o|hiding nonexported module bindings: setup-api#*move-command* 
o|hiding nonexported module bindings: setup-api#*chmod-command* 
o|hiding nonexported module bindings: setup-api#*ranlib-command* 
o|hiding nonexported module bindings: setup-api#*mkdir-command* 
o|hiding nonexported module bindings: setup-api#windows-user-install-setup 
o|hiding nonexported module bindings: setup-api#unix-user-install-setup 
o|hiding nonexported module bindings: setup-api#windows-sudo-install-setup 
o|hiding nonexported module bindings: setup-api#unix-sudo-install-setup 
o|hiding nonexported module bindings: setup-api#user-install-setup 
o|hiding nonexported module bindings: setup-api#sudo-install-setup 
o|hiding nonexported module bindings: setup-api#ignore-errors 
o|hiding nonexported module bindings: setup-api#target-prefix 
o|hiding nonexported module bindings: setup-api#fixpath 
o|hiding nonexported module bindings: setup-api#make-setup-info-pathname 
o|hiding nonexported module bindings: setup-api#write-info 
o|hiding nonexported module bindings: setup-api#path-prefix? 
o|hiding nonexported module bindings: setup-api#make-dest-pathname 
o|hiding nonexported module bindings: setup-api#check-filelist 
o|hiding nonexported module bindings: setup-api#translate-extension 
o|hiding nonexported module bindings: setup-api#what-version 
o|hiding nonexported module bindings: setup-api#supply-version 
o|hiding nonexported module bindings: setup-api#repo-path 
o|hiding nonexported module bindings: setup-api#ensure-directory 
o|hiding nonexported module bindings: setup-api#$system 
S|applied compiler syntax:
S|  for-each		4
S|  map		10
S|  sprintf		7
S|  printf		4
o|eliminated procedure checks: 112 
o|specializations:
o|  1 (current-exception-handler procedure)
o|  1 (current-error-port)
o|  1 (string=? string string)
o|  1 (= fixnum fixnum)
o|  1 (length list)
o|  3 (zero? fixnum)
o|  2 (##sys#check-list (or pair list) *)
o|  14 (car pair)
o|  6 (cdr pair)
o|  2 (string-append string string)
o|  11 (##sys#check-output-port * * *)
o|safe globals: (setup-api#constant26) 
o|Removed `not' forms: 3 
o|inlining procedure: k1866 
o|inlining procedure: k1866 
o|inlining procedure: k1885 
o|inlining procedure: k1885 
o|inlining procedure: k1941 
o|contracted procedure: "(setup-api.scm:168) setup-api#windows-user-install-setup" 
o|inlining procedure: k1941 
o|contracted procedure: "(setup-api.scm:169) setup-api#unix-user-install-setup" 
o|inlining procedure: k1966 
o|propagated global variable: r19674896 setup-api#*sudo* 
o|inlining procedure: k1966 
o|contracted procedure: "(setup-api.scm:179) setup-api#sudo-install-setup" 
o|inlining procedure: k1954 
o|contracted procedure: "(setup-api.scm:174) setup-api#windows-sudo-install-setup" 
o|inlining procedure: k1954 
o|contracted procedure: "(setup-api.scm:175) setup-api#unix-sudo-install-setup" 
o|inlining procedure: k1994 
o|inlining procedure: k2029 
o|inlining procedure: k2029 
o|inlining procedure: k1994 
o|substituted constant variable: a2059 
o|substituted constant variable: a2060 
o|propagated global variable: out182186 ##sys#standard-output 
o|substituted constant variable: a2095 
o|substituted constant variable: a2096 
o|propagated global variable: out182186 ##sys#standard-output 
o|inlining procedure: k2149 
o|inlining procedure: k2149 
o|contracted procedure: "(setup-api.scm:265) setup-api#fixpath" 
o|inlining procedure: k2205 
o|substituted constant variable: setup-api#*csc-options* 
o|inlining procedure: k2285 
o|contracted procedure: "(setup-api.scm:253) g296305" 
o|substituted constant variable: a2268 
o|inlining procedure: k2285 
o|inlining procedure: k2320 
o|contracted procedure: "(setup-api.scm:250) g269278" 
o|substituted constant variable: a2248 
o|inlining procedure: k2320 
o|inlining procedure: k2364 
o|inlining procedure: k2364 
o|inlining procedure: k2205 
o|inlining procedure: k2431 
o|inlining procedure: k2431 
o|inlining procedure: k2504 
o|contracted procedure: "(setup-api.scm:262) g321357" 
o|propagated global variable: out360364 ##sys#standard-output 
o|substituted constant variable: a2475 
o|substituted constant variable: a2476 
o|inlining procedure: k2465 
o|propagated global variable: out360364 ##sys#standard-output 
o|inlining procedure: k2465 
o|inlining procedure: k2504 
o|inlining procedure: k2527 
o|inlining procedure: k2527 
o|inlining procedure: k2594 
o|inlining procedure: k2594 
o|propagated global variable: out503507 ##sys#standard-output 
o|substituted constant variable: a2611 
o|substituted constant variable: a2612 
o|inlining procedure: k2604 
o|propagated global variable: out503507 ##sys#standard-output 
o|inlining procedure: k2604 
o|inlining procedure: k2649 
o|inlining procedure: k2649 
o|propagated global variable: g551552 pp 
o|propagated global variable: g563564 pp 
o|consed rest parameter at call site: "(setup-api.scm:317) setup-api#ensure-directory" 2 
o|contracted procedure: "(setup-api.scm:316) setup-api#make-setup-info-pathname" 
o|consed rest parameter at call site: "(setup-api.scm:316) setup-api#repo-path" 1 
o|propagated global variable: out531535 ##sys#standard-output 
o|substituted constant variable: a2715 
o|substituted constant variable: a2716 
o|propagated global variable: out531535 ##sys#standard-output 
o|inlining procedure: k2769 
o|inlining procedure: k2797 
o|inlining procedure: k2797 
o|inlining procedure: k2769 
o|consed rest parameter at call site: "(setup-api.scm:341) setup-api#ensure-directory" 2 
o|contracted procedure: k2839 
o|inlining procedure: k2842 
o|inlining procedure: k2842 
o|contracted procedure: "(setup-api.scm:329) setup-api#path-prefix?" 
o|consed rest parameter at call site: "(setup-api.scm:355) setup-api#ensure-directory" 2 
o|inlining procedure: k2976 
o|inlining procedure: k2976 
o|inlining procedure: k3049 
o|contracted procedure: "(setup-api.scm:368) g666675" 
o|inlining procedure: k3003 
o|inlining procedure: k3003 
o|inlining procedure: k3018 
o|inlining procedure: k3018 
o|inlining procedure: k3049 
o|removed unused formal parameters: (a731) 
o|inlining procedure: k3162 
o|removed unused parameter to known procedure: a731 "(setup-api.scm:391) g729730" 
o|inlining procedure: k3162 
o|contracted procedure: "(setup-api.scm:398) setup-api#what-version" 
o|inlining procedure: k3124 
o|inlining procedure: k3124 
o|inlining procedure: k3139 
o|inlining procedure: k3139 
o|inlining procedure: k3256 
o|inlining procedure: k3256 
o|inlining procedure: k3337 
o|inlining procedure: k3337 
o|contracted procedure: "(setup-api.scm:445) setup-api#target-prefix" 
o|inlining procedure: k2196 
o|inlining procedure: k2196 
o|inlining procedure: k3349 
o|inlining procedure: k3349 
o|inlining procedure: k3373 
o|inlining procedure: k3373 
o|inlining procedure: k3302 
o|inlining procedure: k3429 
o|inlining procedure: k3429 
o|consed rest parameter at call site: "(setup-api.scm:431) setup-api#repo-path" 1 
o|consed rest parameter at call site: "(setup-api.scm:430) setup-api#repo-path" 1 
o|inlining procedure: k3462 
o|inlining procedure: k3462 
o|inlining procedure: k3302 
o|contracted procedure: "(setup-api.scm:451) setup-api#translate-extension" 
o|contracted procedure: k3097 
o|inlining procedure: k3094 
o|inlining procedure: k3106 
o|inlining procedure: k3106 
o|inlining procedure: k3094 
o|inlining procedure: k3522 
o|inlining procedure: k3522 
o|inlining procedure: k3493 
o|inlining procedure: k3560 
o|inlining procedure: k3560 
o|inlining procedure: k3594 
o|inlining procedure: k3594 
o|inlining procedure: k3631 
o|inlining procedure: k3631 
o|consed rest parameter at call site: "(setup-api.scm:457) setup-api#ensure-directory" 2 
o|inlining procedure: k3668 
o|inlining procedure: k3668 
o|inlining procedure: k3493 
o|inlining procedure: k3715 
o|inlining procedure: k3715 
o|inlining procedure: k3689 
o|inlining procedure: k3771 
o|inlining procedure: k3771 
o|consed rest parameter at call site: "(setup-api.scm:479) setup-api#ensure-directory" 2 
o|inlining procedure: k3808 
o|inlining procedure: k3808 
o|inlining procedure: k3689 
o|merged explicitly consed rest parameter: tmp10101011 
o|consed rest parameter at call site: "(setup-api.scm:506) setup-api#ensure-directory" 2 
o|inlining procedure: k3835 
o|inlining procedure: k3835 
o|substituted constant variable: a3858 
o|substituted constant variable: a3859 
o|merged explicitly consed rest parameter: tmp10371039 
o|inlining procedure: k3894 
o|inlining procedure: k3903 
o|inlining procedure: k3903 
o|inlining procedure: k3915 
o|inlining procedure: k3915 
o|inlining procedure: k3894 
o|substituted constant variable: a4020 
o|substituted constant variable: a4021 
o|inlining procedure: k4054 
o|inlining procedure: k4054 
o|inlining procedure: k4065 
o|inlining procedure: k4065 
o|inlining procedure: k4114 
o|propagated global variable: r41155030 setup-api#*cxx* 
o|inlining procedure: k4114 
o|propagated global variable: r41155031 setup-api#*cc* 
o|substituted constant variable: a4129 
o|substituted constant variable: a4130 
o|substituted constant variable: a4191 
o|substituted constant variable: a4192 
o|inlining procedure: k4228 
o|contracted procedure: "(setup-api.scm:555) g11611170" 
o|inlining procedure: k4216 
o|inlining procedure: k4216 
o|inlining procedure: k4228 
o|inlining procedure: k4278 
o|inlining procedure: k4278 
o|inlining procedure: k4293 
o|inlining procedure: k4308 
o|inlining procedure: k4308 
o|inlining procedure: k4293 
o|inlining procedure: k4345 
o|inlining procedure: k4345 
o|inlining procedure: k4400 
o|inlining procedure: k4400 
o|contracted procedure: k4453 
o|inlining procedure: k4450 
o|substituted constant variable: a4503 
o|substituted constant variable: a4504 
o|inlining procedure: k4541 
o|inlining procedure: k4541 
o|substituted constant variable: a4565 
o|inlining procedure: k4579 
o|inlining procedure: k4579 
o|inlining procedure: k4450 
o|inlining procedure: k4640 
o|inlining procedure: k4640 
o|inlining procedure: k4679 
o|inlining procedure: k4679 
o|substituted constant variable: a4693 
o|substituted constant variable: a4694 
o|inlining procedure: k4721 
o|inlining procedure: k4721 
o|inlining procedure: k4745 
o|inlining procedure: k4745 
o|inlining procedure: k4768 
o|inlining procedure: k4768 
o|substituted constant variable: a4803 
o|propagated global variable: g139140 exit 
o|replaced variables: 480 
o|removed binding forms: 279 
o|removed side-effect free assignment to unused variable: setup-api#*csc-options* 
o|propagated global variable: out182186 ##sys#standard-output 
o|inlining procedure: k2364 
o|propagated global variable: out360364 ##sys#standard-output 
o|converted assignments to bindings: (smooth328) 
o|propagated global variable: out503507 ##sys#standard-output 
o|propagated global variable: out531535 ##sys#standard-output 
o|substituted constant variable: r31404955 
o|substituted constant variable: r32574958 
o|substituted constant variable: r32574958 
o|removed call to pure procedure with unused result: "(setup-api.scm:407) get-keyword" 
o|substituted constant variable: r21974963 
o|substituted constant variable: r33744967 
o|inlining procedure: k3094 
o|propagated global variable: r30955096 ##sys#load-dynamic-extension 
o|propagated global variable: r30955096 ##sys#load-dynamic-extension 
o|inlining procedure: k3094 
o|inlining procedure: k3094 
o|inlining procedure: k3094 
o|converted assignments to bindings: (exify871) 
o|inlining procedure: k3894 
o|inlining procedure: k3894 
o|substituted constant variable: r40555020 
o|substituted constant variable: r40555020 
o|substituted constant variable: r40555022 
o|substituted constant variable: r40555022 
o|converted assignments to bindings: (version->list1151) 
o|substituted constant variable: r47465060 
o|substituted constant variable: r47695062 
o|converted assignments to bindings: (verb501) 
o|converted assignments to bindings: (reg231) 
o|simplifications: ((let . 5)) 
o|replaced variables: 22 
o|removed binding forms: 517 
o|Removed `not' forms: 1 
o|substituted constant variable: r23655072 
o|inlining procedure: k3015 
o|inlining procedure: k3133 
o|inlining procedure: k3133 
o|contracted procedure: k3208 
o|inlining procedure: k4774 
o|replaced variables: 7 
o|removed binding forms: 46 
o|removed conditional forms: 1 
o|Removed `not' forms: 1 
o|substituted constant variable: r30165154 
o|substituted constant variable: r30165154 
o|substituted constant variable: r30165154 
o|substituted constant variable: r31345158 
o|substituted constant variable: r31345159 
o|substituted constant variable: r30955098 
o|substituted constant variable: r30955100 
o|replaced variables: 2 
o|removed binding forms: 12 
o|removed conditional forms: 3 
o|removed binding forms: 7 
o|simplifications: ((if . 30) (##core#call . 241)) 
o|  call simplifications:
o|    not	2
o|    number?	3
o|    >
o|    =
o|    string->number
o|    ##sys#get-keyword
o|    ##sys#call-with-values	2
o|    ##sys#apply	2
o|    ##sys#fudge
o|    eq?	6
o|    assq	3
o|    equal?	5
o|    string?
o|    ##sys#cons	5
o|    ##sys#list	17
o|    string=?	3
o|    ##sys#check-list	12
o|    pair?	23
o|    ##sys#setslot	10
o|    ##sys#slot	28
o|    cons	12
o|    assoc
o|    cdr	5
o|    alist-cons
o|    list?	8
o|    list	22
o|    cadr	10
o|    eof-object?
o|    null?	26
o|    car	26
o|    apply	2
o|contracted procedure: k1873 
o|contracted procedure: k1863 
o|contracted procedure: k1892 
o|contracted procedure: k1882 
o|contracted procedure: k1969 
o|contracted procedure: k1975 
o|contracted procedure: k1997 
o|contracted procedure: k2004 
o|contracted procedure: k2014 
o|contracted procedure: k2032 
o|contracted procedure: k2088 
o|contracted procedure: k2120 
o|contracted procedure: k2127 
o|contracted procedure: k2146 
o|contracted procedure: k2156 
o|contracted procedure: k2405 
o|contracted procedure: k2415 
o|contracted procedure: k2425 
o|contracted procedure: k2208 
o|contracted procedure: k2227 
o|contracted procedure: k2231 
o|contracted procedure: k2235 
o|contracted procedure: k2256 
o|contracted procedure: k2276 
o|contracted procedure: k2288 
o|contracted procedure: k2291 
o|contracted procedure: k2302 
o|contracted procedure: k2314 
o|contracted procedure: k2323 
o|contracted procedure: k2326 
o|contracted procedure: k2337 
o|contracted procedure: k2349 
o|contracted procedure: k2383 
o|contracted procedure: k2434 
o|contracted procedure: k2437 
o|contracted procedure: k2448 
o|contracted procedure: k2460 
o|contracted procedure: k2489 
o|contracted procedure: k2495 
o|contracted procedure: k2507 
o|contracted procedure: k2517 
o|contracted procedure: k2521 
o|contracted procedure: k2530 
o|contracted procedure: k2533 
o|contracted procedure: k2544 
o|contracted procedure: k2556 
o|contracted procedure: k2625 
o|contracted procedure: k4830 
o|contracted procedure: k4826 
o|contracted procedure: k2736 
o|contracted procedure: k2631 
o|contracted procedure: k2660 
o|contracted procedure: k2656 
o|contracted procedure: k2681 
o|contracted procedure: k2677 
o|contracted procedure: k2568 
o|inlining procedure: k2562 
o|contracted procedure: k2890 
o|contracted procedure: k2742 
o|contracted procedure: k2884 
o|contracted procedure: k2745 
o|contracted procedure: k2869 
o|contracted procedure: k2751 
o|contracted procedure: k2800 
o|contracted procedure: k2810 
o|contracted procedure: k2814 
o|contracted procedure: k2828 
o|contracted procedure: k2824 
o|contracted procedure: k2855 
o|contracted procedure: k2862 
o|contracted procedure: k2865 
o|contracted procedure: k2875 
o|contracted procedure: k2930 
o|contracted procedure: k2926 
o|contracted procedure: k2941 
o|contracted procedure: k2948 
o|contracted procedure: k2951 
o|contracted procedure: k2966 
o|contracted procedure: k2962 
o|contracted procedure: k2979 
o|contracted procedure: k2986 
o|contracted procedure: k3040 
o|contracted procedure: k3052 
o|contracted procedure: k3055 
o|contracted procedure: k3066 
o|contracted procedure: k3078 
o|contracted procedure: k3006 
o|contracted procedure: k3024 
o|contracted procedure: k3015 
o|contracted procedure: k3034 
o|contracted procedure: k3159 
o|contracted procedure: k3171 
o|contracted procedure: k3188 
o|contracted procedure: k3192 
o|contracted procedure: k3142 
o|contracted procedure: k3153 
o|contracted procedure: k3133 
o|contracted procedure: k3290 
o|contracted procedure: k3202 
o|contracted procedure: k3284 
o|contracted procedure: k3205 
o|contracted procedure: k3236 
o|contracted procedure: k3256 
o|contracted procedure: k3270 
o|contracted procedure: k3266 
o|contracted procedure: k3278 
o|contracted procedure: k3274 
o|contracted procedure: k3471 
o|contracted procedure: k3299 
o|contracted procedure: k3331 
o|contracted procedure: k3363 
o|contracted procedure: k3359 
o|contracted procedure: k3370 
o|contracted procedure: k3387 
o|contracted procedure: k3376 
o|contracted procedure: k3402 
o|contracted procedure: k3398 
o|contracted procedure: k3409 
o|contracted procedure: k3413 
o|contracted procedure: k3432 
o|contracted procedure: k3435 
o|contracted procedure: k3446 
o|contracted procedure: k3458 
o|contracted procedure: k3465 
o|contracted procedure: k3462 
o|contracted procedure: k3677 
o|contracted procedure: k3480 
o|contracted procedure: k3490 
o|contracted procedure: k3115 
o|contracted procedure: k3084 
o|contracted procedure: k3103 
o|contracted procedure: k3109 
o|contracted procedure: k3533 
o|contracted procedure: k3529 
o|contracted procedure: k3540 
o|contracted procedure: k3544 
o|contracted procedure: k3563 
o|contracted procedure: k3566 
o|contracted procedure: k3577 
o|contracted procedure: k3589 
o|contracted procedure: k3597 
o|contracted procedure: k3612 
o|contracted procedure: k3616 
o|contracted procedure: k3622 
o|contracted procedure: k3634 
o|contracted procedure: k3637 
o|contracted procedure: k3648 
o|contracted procedure: k3660 
o|contracted procedure: k3671 
o|contracted procedure: k3668 
o|contracted procedure: k3817 
o|contracted procedure: k3686 
o|contracted procedure: k3726 
o|contracted procedure: k3722 
o|contracted procedure: k3733 
o|contracted procedure: k3737 
o|contracted procedure: k3761 
o|contracted procedure: k3757 
o|contracted procedure: k3774 
o|contracted procedure: k3777 
o|contracted procedure: k3788 
o|contracted procedure: k3800 
o|contracted procedure: k3811 
o|contracted procedure: k3808 
o|contracted procedure: k3879 
o|contracted procedure: k3826 
o|contracted procedure: k3870 
o|contracted procedure: k3936 
o|contracted procedure: k3888 
o|contracted procedure: k3926 
o|contracted procedure: k3922 
o|contracted procedure: k3945 
o|contracted procedure: k4057 
o|contracted procedure: k4072 
o|contracted procedure: k4080 
o|contracted procedure: k4084 
o|contracted procedure: k4231 
o|contracted procedure: k4234 
o|contracted procedure: k4245 
o|contracted procedure: k4257 
o|contracted procedure: k4213 
o|contracted procedure: k4281 
o|contracted procedure: k4287 
o|contracted procedure: k4374 
o|contracted procedure: k4296 
o|contracted procedure: k4333 
o|contracted procedure: k4302 
o|contracted procedure: k4305 
o|contracted procedure: k4314 
o|contracted procedure: k4370 
o|contracted procedure: k4336 
o|contracted procedure: k4351 
o|contracted procedure: k4416 
o|contracted procedure: k4394 
o|contracted procedure: k4397 
o|contracted procedure: k4435 
o|contracted procedure: k4603 
o|contracted procedure: k4447 
o|contracted procedure: k4544 
o|contracted procedure: k4567 
o|contracted procedure: k4582 
o|contracted procedure: k4592 
o|contracted procedure: k4596 
o|contracted procedure: k4615 
o|contracted procedure: k4628 
o|contracted procedure: k4631 
o|contracted procedure: k4643 
o|contracted procedure: k4653 
o|contracted procedure: k4657 
o|contracted procedure: k4664 
o|contracted procedure: k4682 
o|contracted procedure: k4748 
o|contracted procedure: k4751 
o|contracted procedure: k4760 
o|contracted procedure: k4763 
o|contracted procedure: k4771 
o|contracted procedure: k4774 
o|contracted procedure: k4797 
o|contracted procedure: k4880 
o|simplifications: ((let . 51)) 
o|removed binding forms: 218 
o|inlining procedure: k2294 
o|inlining procedure: k2294 
o|inlining procedure: k2329 
o|inlining procedure: k2329 
o|inlining procedure: k2440 
o|inlining procedure: k2440 
o|inlining procedure: k2536 
o|inlining procedure: k2536 
o|inlining procedure: k3058 
o|inlining procedure: k3058 
o|inlining procedure: k3438 
o|inlining procedure: k3438 
o|inlining procedure: k3569 
o|inlining procedure: k3569 
o|inlining procedure: k3640 
o|inlining procedure: k3640 
o|inlining procedure: k3780 
o|inlining procedure: k3780 
o|inlining procedure: k4237 
o|inlining procedure: k4237 
o|replaced variables: 85 
o|simplifications: ((if . 1)) 
o|removed binding forms: 62 
o|contracted procedure: k4253 
o|replaced variables: 40 
o|removed binding forms: 1 
o|removed binding forms: 10 
o|customizable procedures: (reg231 k4757 ensure-string1219 for-each-loop13351345 g12981305 for-each-loop12971312 k4547 walk1292 version->list1151 loop1183 map-loop11551176 g969978 map-loop963991 k3706 g885894 map-loop879897 exify871 g913922 map-loop907935 k3513 setup-api#check-filelist g815824 map-loop809850 setup-api#write-info k3319 k3352 k3248 setup-api#supply-version g729730 map-loop660687 setup-api#make-dest-pathname k2913 k2754 g606613 for-each-loop605616 walk596 setup-api#repo-path setup-api#ensure-directory verb501 map-loop372389 for-each-loop320396 map-loop333350 k2223 map-loop263281 map-loop290308 setup-api#$system loop191 setup-api#user-install-setup) 
o|calls to known targets: 149 
o|identified direct recursive calls: f_2974 1 
o|identified direct recursive calls: f_4226 2 
o|identified direct recursive calls: f_4276 1 
o|fast box initializations: 18 
o|fast global references: 83 
o|fast global assignments: 47 
o|dropping unused closure argument: f_4766 
o|dropping unused closure argument: f_3484 
o|dropping unused closure argument: f_4674 
o|dropping unused closure argument: f_3157 
o|dropping unused closure argument: f_2999 
o|dropping unused closure argument: f_2974 
o|dropping unused closure argument: f_3824 
o|dropping unused closure argument: f_4209 
o|dropping unused closure argument: f_2602 
o|dropping unused closure argument: f_1938 
o|dropping unused closure argument: f_2629 
o|dropping unused closure argument: f_2160 
o|dropping unused closure argument: f_3886 
*/
/* end of file */
