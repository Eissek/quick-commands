/* Generated from srfi-69.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:04
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: srfi-69.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file srfi-69.c
   unit: srfi_2d69
*/

#include "chicken.h"

#define C_rnd_fix() (C_fix(rand()))

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[124];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,36),40,35,35,115,121,115,35,110,117,109,98,101,114,45,104,97,115,104,45,104,111,111,107,32,111,98,106,56,54,32,114,110,100,56,55,41,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,29),40,110,117,109,98,101,114,45,104,97,115,104,32,111,98,106,57,52,32,46,32,116,109,112,57,51,57,53,41,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,36),40,111,98,106,101,99,116,45,117,105,100,45,104,97,115,104,32,111,98,106,49,55,56,32,46,32,116,109,112,49,55,55,49,55,57,41,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,32),40,115,121,109,98,111,108,45,104,97,115,104,32,111,98,106,50,48,57,32,46,32,116,109,112,50,48,56,50,49,48,41};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,33),40,35,35,115,121,115,35,99,104,101,99,107,45,107,101,121,119,111,114,100,32,120,50,52,48,32,46,32,121,50,52,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,33),40,107,101,121,119,111,114,100,45,104,97,115,104,32,111,98,106,50,52,57,32,46,32,116,109,112,50,52,56,50,53,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,29),40,101,113,63,45,104,97,115,104,32,111,98,106,51,48,55,32,46,32,116,109,112,51,48,54,51,48,56,41,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,30),40,101,113,118,63,45,104,97,115,104,32,111,98,106,52,48,53,32,46,32,116,109,112,52,48,52,52,48,54,41,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,104,115,104,52,52,56,32,105,52,52,57,32,108,101,110,52,53,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,53),40,118,101,99,116,111,114,45,104,97,115,104,32,111,98,106,52,52,49,32,115,101,101,100,52,52,50,32,100,101,112,116,104,52,52,51,32,115,116,97,114,116,52,52,52,32,114,110,100,52,52,53,41,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,20),40,103,53,50,53,32,111,98,106,53,50,55,32,114,110,100,53,50,56,41,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,20),40,103,53,51,57,32,111,98,106,53,52,49,32,114,110,100,53,52,50,41,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,20),40,103,53,52,51,32,111,98,106,53,52,53,32,114,110,100,53,52,54,41,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,39),40,114,101,99,117,114,115,105,118,101,45,104,97,115,104,32,111,98,106,52,53,50,32,100,101,112,116,104,52,53,51,32,114,110,100,52,53,52,41,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,28),40,42,101,113,117,97,108,63,45,104,97,115,104,32,111,98,106,52,51,55,32,114,110,100,52,51,56,41,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,32),40,101,113,117,97,108,63,45,104,97,115,104,32,111,98,106,53,53,53,32,46,32,116,109,112,53,53,52,53,53,54,41};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,32),40,115,116,114,105,110,103,45,104,97,115,104,32,115,116,114,53,56,51,32,46,32,116,109,112,53,56,50,53,56,52,41};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,35),40,115,116,114,105,110,103,45,99,105,45,104,97,115,104,32,115,116,114,54,50,54,32,46,32,116,109,112,54,50,53,54,50,55,41,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,43),40,104,97,115,104,45,116,97,98,108,101,45,99,97,110,111,110,105,99,97,108,45,108,101,110,103,116,104,32,116,97,98,54,55,57,32,114,101,113,54,56,48,41,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,27),40,102,95,51,53,54,49,32,111,98,106,101,99,116,55,48,50,32,98,111,117,110,100,55,48,51,41,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,27),40,102,95,51,53,54,54,32,111,98,106,101,99,116,55,48,52,32,98,111,117,110,100,55,48,53,41,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,27),40,102,95,51,53,55,49,32,111,98,106,101,99,116,55,48,54,32,98,111,117,110,100,55,48,55,41,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,38),40,42,109,97,107,101,45,104,97,115,104,45,102,117,110,99,116,105,111,110,32,117,115,101,114,45,102,117,110,99,116,105,111,110,55,48,48,41,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,86),40,42,109,97,107,101,45,104,97,115,104,45,116,97,98,108,101,32,116,101,115,116,55,49,56,32,104,97,115,104,55,49,57,32,108,101,110,55,50,48,32,109,105,110,45,108,111,97,100,55,50,49,32,109,97,120,45,108,111,97,100,55,50,50,32,105,110,105,116,105,97,108,55,50,53,32,116,109,112,55,49,55,55,50,54,41,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,19),40,105,110,118,97,114,103,45,101,114,114,32,109,115,103,55,57,53,41,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,8),40,102,95,51,56,49,57,41};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,97,114,103,115,55,57,50,41,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,33),40,109,97,107,101,45,104,97,115,104,45,116,97,98,108,101,32,46,32,97,114,103,117,109,101,110,116,115,48,55,52,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,20),40,104,97,115,104,45,116,97,98,108,101,63,32,111,98,106,56,50,56,41,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,23),40,104,97,115,104,45,116,97,98,108,101,45,115,105,122,101,32,104,116,56,51,48,41,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,39),40,104,97,115,104,45,116,97,98,108,101,45,101,113,117,105,118,97,108,101,110,99,101,45,102,117,110,99,116,105,111,110,32,104,116,56,51,51,41,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,32),40,104,97,115,104,45,116,97,98,108,101,45,104,97,115,104,45,102,117,110,99,116,105,111,110,32,104,116,56,51,54,41};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,27),40,104,97,115,104,45,116,97,98,108,101,45,109,105,110,45,108,111,97,100,32,104,116,56,51,57,41,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,27),40,104,97,115,104,45,116,97,98,108,101,45,109,97,120,45,108,111,97,100,32,104,116,56,52,50,41,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,28),40,104,97,115,104,45,116,97,98,108,101,45,119,101,97,107,45,107,101,121,115,32,104,116,56,52,53,41,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,30),40,104,97,115,104,45,116,97,98,108,101,45,119,101,97,107,45,118,97,108,117,101,115,32,104,116,56,52,56,41,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,31),40,104,97,115,104,45,116,97,98,108,101,45,104,97,115,45,105,110,105,116,105,97,108,63,32,104,116,56,53,49,41,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,26),40,104,97,115,104,45,116,97,98,108,101,45,105,110,105,116,105,97,108,32,104,116,56,53,53,41,0,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,98,117,99,107,101,116,56,54,56,41};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,56,54,52,32,105,56,54,54,41};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,40),40,104,97,115,104,45,116,97,98,108,101,45,114,101,115,105,122,101,33,32,104,116,56,55,55,32,118,101,99,56,55,56,32,108,101,110,56,55,57,41};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,21),40,99,111,112,121,45,108,111,111,112,32,98,117,99,107,101,116,56,57,53,41,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,56,57,49,32,105,56,57,51,41};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,24),40,42,104,97,115,104,45,116,97,98,108,101,45,99,111,112,121,32,104,116,56,56,54,41};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,23),40,104,97,115,104,45,116,97,98,108,101,45,99,111,112,121,32,104,116,57,48,51,41,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,98,117,99,107,101,116,57,53,49,41};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,98,117,99,107,101,116,57,54,48,41};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,8),40,102,95,52,53,56,49,41};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,53),40,104,97,115,104,45,116,97,98,108,101,45,117,112,100,97,116,101,33,32,104,116,57,49,50,32,107,101,121,57,49,51,32,102,117,110,99,57,49,52,32,46,32,116,109,112,57,49,49,57,49,53,41,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,48,48,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,48,49,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,57),40,42,104,97,115,104,45,116,97,98,108,101,45,117,112,100,97,116,101,33,47,100,101,102,97,117,108,116,32,104,116,57,55,52,32,107,101,121,57,55,53,32,102,117,110,99,57,55,54,32,100,101,102,57,55,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,60),40,104,97,115,104,45,116,97,98,108,101,45,117,112,100,97,116,101,33,47,100,101,102,97,117,108,116,32,104,116,49,48,50,51,32,107,101,121,49,48,50,52,32,102,117,110,99,49,48,50,53,32,100,101,102,49,48,50,54,41,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,48,54,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,48,54,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,40),40,104,97,115,104,45,116,97,98,108,101,45,115,101,116,33,32,104,116,49,48,51,49,32,107,101,121,49,48,51,50,32,118,97,108,49,48,51,51,41};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,49,49,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,47),40,104,97,115,104,45,116,97,98,108,101,45,114,101,102,47,100,101,102,97,117,108,116,32,104,116,49,49,48,51,32,107,101,121,49,49,48,52,32,100,101,102,49,49,48,53,41,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,49,51,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,35),40,104,97,115,104,45,116,97,98,108,101,45,101,120,105,115,116,115,63,32,104,116,49,49,50,49,32,107,101,121,49,49,50,50,41,0,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,49,53,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,32,112,114,101,118,49,49,54,53,32,98,117,99,107,101,116,49,49,54,54,41,0,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,35),40,104,97,115,104,45,116,97,98,108,101,45,100,101,108,101,116,101,33,32,104,116,49,49,52,54,32,107,101,121,49,49,52,55,41,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,32,112,114,101,118,49,49,56,52,32,98,117,99,107,101,116,49,49,56,53,41,0,0,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,49,49,56,48,32,105,49,49,56,50,41,0,0,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,36),40,104,97,115,104,45,116,97,98,108,101,45,114,101,109,111,118,101,33,32,104,116,49,49,55,53,32,102,117,110,99,49,49,55,54,41,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,26),40,104,97,115,104,45,116,97,98,108,101,45,99,108,101,97,114,33,32,104,116,49,49,57,55,41,0,0,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,13),40,97,53,53,54,53,32,120,49,50,49,50,41,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,20),40,100,111,108,111,111,112,49,50,48,56,32,108,115,116,49,50,49,48,41,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,49,50,48,53,32,105,49,50,48,55,41,0,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,36),40,42,104,97,115,104,45,116,97,98,108,101,45,109,101,114,103,101,33,32,104,116,49,49,50,48,49,32,104,116,50,49,50,48,50,41,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,35),40,104,97,115,104,45,116,97,98,108,101,45,109,101,114,103,101,33,32,104,116,49,49,50,49,56,32,104,116,50,49,50,49,57,41,0,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,34),40,104,97,115,104,45,116,97,98,108,101,45,109,101,114,103,101,32,104,116,49,49,50,50,51,32,104,116,50,49,50,50,52,41,0,0,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,50,32,98,117,99,107,101,116,49,50,51,53,32,108,115,116,49,50,51,54,41,0,0,0,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,105,49,50,51,50,32,108,115,116,49,50,51,51,41,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,26),40,104,97,115,104,45,116,97,98,108,101,45,62,97,108,105,115,116,32,104,116,49,50,50,56,41,0,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,13),40,97,53,54,57,52,32,120,49,50,53,56,41,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,13),40,103,49,50,52,56,32,120,49,50,53,55,41,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,50,52,55,32,103,49,50,53,52,49,50,54,49,41,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,40),40,97,108,105,115,116,45,62,104,97,115,104,45,116,97,98,108,101,32,97,108,105,115,116,49,50,52,50,32,46,32,114,101,115,116,49,50,52,51,41};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,50,32,98,117,99,107,101,116,49,50,55,53,32,108,115,116,49,50,55,54,41,0,0,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,105,49,50,55,50,32,108,115,116,49,50,55,51,41,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,24),40,104,97,115,104,45,116,97,98,108,101,45,107,101,121,115,32,104,116,49,50,54,56,41};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,50,32,98,117,99,107,101,116,49,50,56,57,32,108,115,116,49,50,57,48,41,0,0,0,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,105,49,50,56,54,32,108,115,116,49,50,56,55,41,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,26),40,104,97,115,104,45,116,97,98,108,101,45,118,97,108,117,101,115,32,104,116,49,50,56,50,41,0,0,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,18),40,103,49,51,48,54,32,98,117,99,107,101,116,49,51,49,53,41,0,0,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,51,48,53,32,103,49,51,49,50,49,51,49,55,41,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,49,51,48,48,32,105,49,51,48,50,41,0,0,0,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,38),40,42,104,97,115,104,45,116,97,98,108,101,45,102,111,114,45,101,97,99,104,32,104,116,49,50,57,54,32,112,114,111,99,49,50,57,55,41,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,26),40,102,111,108,100,50,32,98,117,99,107,101,116,49,51,51,51,32,97,99,99,49,51,51,52,41,0,0,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,105,49,51,51,48,32,97,99,99,49,51,51,49,41,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,43),40,42,104,97,115,104,45,116,97,98,108,101,45,102,111,108,100,32,104,116,49,51,50,52,32,102,117,110,99,49,51,50,53,32,105,110,105,116,49,51,50,54,41,0,0,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,42),40,104,97,115,104,45,116,97,98,108,101,45,102,111,108,100,32,104,116,49,51,51,57,32,102,117,110,99,49,51,52,48,32,105,110,105,116,49,51,52,49,41,0,0,0,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,37),40,104,97,115,104,45,116,97,98,108,101,45,102,111,114,45,101,97,99,104,32,104,116,49,51,52,53,32,112,114,111,99,49,51,52,54,41,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,33),40,104,97,115,104,45,116,97,98,108,101,45,119,97,108,107,32,104,116,49,51,53,48,32,112,114,111,99,49,51,53,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,25),40,97,54,48,52,52,32,107,49,51,53,55,32,118,49,51,53,56,32,97,49,51,53,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,32),40,104,97,115,104,45,116,97,98,108,101,45,109,97,112,32,104,116,49,51,53,53,32,102,117,110,99,49,51,53,54,41};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,23),40,97,54,48,53,55,32,104,116,49,51,54,50,32,112,111,114,116,49,51,54,51,41,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,8),40,102,95,54,49,57,52,41};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,48,57,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,48,57,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,36),40,97,54,48,55,51,32,104,116,49,48,55,57,32,107,101,121,49,48,56,48,32,46,32,116,109,112,49,48,55,56,49,48,56,49,41,0,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,12),40,97,54,50,48,50,32,120,52,51,51,41,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,12),40,97,54,50,49,54,32,120,52,50,56,41,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_4758)
static void C_fcall f_4758(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5987)
static void C_ccall f_5987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2017)
static void C_ccall f_2017(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2017)
static void C_ccall f_2017r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(C_srfi_2d69_toplevel)
C_externexport void C_ccall C_srfi_2d69_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4768)
static void C_ccall f_4768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5278)
static void C_ccall f_5278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1711)
static void C_ccall f_1711(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1708)
static void C_ccall f_1708(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4994)
static void C_fcall f_4994(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4709)
static void C_ccall f_4709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1717)
static void C_ccall f_1717(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1717)
static void C_ccall f_1717r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5997)
static void C_ccall f_5997(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1733)
static void C_ccall f_1733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4120)
static void C_fcall f_4120(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3829)
static void C_ccall f_3829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5079)
static C_word C_fcall f_5079(C_word t0,C_word t1);
C_noret_decl(f_3819)
static void C_ccall f_3819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1906)
static void C_ccall f_1906(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1900)
static void C_ccall f_1900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5517)
static void C_fcall f_5517(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5064)
static void C_ccall f_5064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3013)
static void C_ccall f_3013(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3832)
static void C_ccall f_3832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5134)
static void C_ccall f_5134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4164)
static void C_ccall f_4164(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5505)
static void C_fcall f_5505(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6111)
static void C_fcall f_6111(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5118)
static void C_fcall f_5118(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3855)
static void C_ccall f_3855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3852)
static void C_ccall f_3852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4107)
static void C_ccall f_4107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3801)
static void C_ccall f_3801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6045)
static void C_ccall f_6045(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1938)
static void C_ccall f_1938(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1938)
static void C_ccall f_1938r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6096)
static void C_ccall f_6096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6040)
static void C_ccall f_6040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6016)
static void C_ccall f_6016(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4830)
static void C_ccall f_4830(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6065)
static void C_ccall f_6065(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6062)
static void C_ccall f_6062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2795)
static void C_fcall f_2795(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3707)
static void C_ccall f_3707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3701)
static void C_fcall f_3701(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3704)
static void C_fcall f_3704(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5899)
static void C_ccall f_5899(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6084)
static void C_ccall f_6084(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6033)
static void C_ccall f_6033(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5599)
static void C_ccall f_5599(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3739)
static void C_fcall f_3739(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6009)
static void C_ccall f_6009(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4825)
static void C_ccall f_4825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4383)
static void C_fcall f_4383(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3730)
static void C_ccall f_3730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6004)
static void C_ccall f_6004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3734)
static void C_ccall f_3734(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6056)
static void C_ccall f_6056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6058)
static void C_ccall f_6058(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6053)
static void C_ccall f_6053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5585)
static void C_ccall f_5585(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4873)
static void C_fcall f_4873(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5878)
static void C_fcall f_5878(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5870)
static void C_fcall f_5870(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2131)
static void C_ccall f_2131(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2131)
static void C_ccall f_2131r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4879)
static void C_fcall f_4879(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5573)
static void C_ccall f_5573(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4377)
static void C_fcall f_4377(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6074)
static void C_ccall f_6074(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_6074)
static void C_ccall f_6074r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5566)
static void C_ccall f_5566(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4818)
static void C_ccall f_4818(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5931)
static void C_fcall f_5931(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3778)
static void C_ccall f_3778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4862)
static void C_fcall f_4862(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5553)
static void C_ccall f_5553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2147)
static void C_ccall f_2147(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3767)
static void C_ccall f_3767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4070)
static void C_ccall f_4070(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3764)
static void C_ccall f_3764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3760)
static void C_ccall f_3760(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5540)
static void C_fcall f_5540(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4581)
static void C_ccall f_4581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3710)
static void C_ccall f_3710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3714)
static void C_ccall f_3714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5527)
static void C_ccall f_5527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5943)
static void C_fcall f_5943(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4906)
static void C_ccall f_4906(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3788)
static void C_ccall f_3788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4097)
static void C_fcall f_4097(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2112)
static void C_ccall f_2112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5414)
static void C_fcall f_5414(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2105)
static void C_ccall f_2105(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2105)
static void C_ccall f_2105r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5400)
static void C_ccall f_5400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5959)
static void C_fcall f_5959(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4590)
static void C_fcall f_4590(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5046)
static void C_ccall f_5046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5048)
static void C_ccall f_5048(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5908)
static void C_fcall f_5908(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3750)
static void C_fcall f_3750(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3962)
static void C_ccall f_3962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3959)
static void C_ccall f_3959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4934)
static void C_ccall f_4934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4945)
static void C_fcall f_4945(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5024)
static void C_ccall f_5024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3982)
static void C_ccall f_3982(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4913)
static void C_ccall f_4913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3979)
static void C_ccall f_3979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5918)
static void C_ccall f_5918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4928)
static void C_ccall f_4928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3989)
static void C_ccall f_3989(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3995)
static void C_ccall f_3995(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4486)
static void C_ccall f_4486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4474)
static void C_ccall f_4474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5496)
static void C_ccall f_5496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5489)
static void C_ccall f_5489(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4004)
static void C_ccall f_4004(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5793)
static void C_ccall f_5793(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5858)
static void C_fcall f_5858(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5459)
static void C_ccall f_5459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5440)
static void C_fcall f_5440(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3609)
static void C_ccall f_3609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4519)
static void C_ccall f_4519(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6153)
static void C_fcall f_6153(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5427)
static void C_ccall f_5427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4537)
static void C_ccall f_4537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6172)
static void C_ccall f_6172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4509)
static void C_fcall f_4509(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5808)
static void C_fcall f_5808(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5728)
static void C_ccall f_5728(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5703)
static void C_ccall f_5703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5715)
static void C_ccall f_5715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5705)
static void C_fcall f_5705(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3698)
static void C_fcall f_3698(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4549)
static void C_ccall f_4549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4546)
static void C_ccall f_4546(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4366)
static void C_fcall f_4366(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5743)
static void C_fcall f_5743(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4685)
static void C_ccall f_4685(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5759)
static void C_fcall f_5759(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5824)
static void C_fcall f_5824(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3620)
static void C_ccall f_3620(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3620)
static void C_ccall f_3620r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3622)
static C_word C_fcall f_3622(C_word t0);
C_noret_decl(f_2607)
static void C_ccall f_2607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4190)
static void C_fcall f_4190(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2635)
static void C_ccall f_2635(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2635)
static void C_ccall f_2635r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4699)
static void C_fcall f_4699(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3263)
static void C_ccall f_3263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4177)
static void C_ccall f_4177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4174)
static void C_ccall f_4174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4171)
static void C_ccall f_4171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6194)
static void C_ccall f_6194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5695)
static void C_ccall f_5695(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3202)
static void C_ccall f_3202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5682)
static void C_fcall f_5682(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5681)
static void C_ccall f_5681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5674)
static void C_ccall f_5674(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5674)
static void C_ccall f_5674r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3229)
static void C_ccall f_3229(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3229)
static void C_ccall f_3229r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1991)
static void C_ccall f_1991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3933)
static void C_ccall f_3933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4302)
static void C_ccall f_4302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3927)
static void C_ccall f_3927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4316)
static void C_ccall f_4316(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4329)
static void C_fcall f_4329(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4325)
static void C_ccall f_4325(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_4325)
static void C_ccall f_4325r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_4335)
static void C_ccall f_4335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4338)
static void C_ccall f_4338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3063)
static void C_ccall f_3063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5616)
static void C_fcall f_5616(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5601)
static void C_ccall f_5601(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4456)
static void C_ccall f_4456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3519)
static C_word C_fcall f_3519(C_word t0,C_word t1);
C_noret_decl(f_3513)
static void C_fcall f_3513(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3075)
static void C_ccall f_3075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4040)
static void C_ccall f_4040(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4049)
static void C_ccall f_4049(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4013)
static void C_ccall f_4013(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6217)
static void C_ccall f_6217(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6210)
static void C_fcall f_6210(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6224)
static void C_fcall f_6224(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5632)
static void C_fcall f_5632(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5298)
static C_word C_fcall f_5298(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_4031)
static void C_ccall f_4031(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4219)
static void C_fcall f_4219(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3578)
static void C_ccall f_3578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3575)
static void C_ccall f_3575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3571)
static void C_ccall f_3571(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4058)
static void C_ccall f_4058(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3566)
static void C_ccall f_3566(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3561)
static void C_ccall f_3561(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3404)
static void C_ccall f_3404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4022)
static void C_ccall f_4022(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4898)
static void C_ccall f_4898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4791)
static void C_ccall f_4791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4794)
static void C_ccall f_4794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3595)
static void C_fcall f_3595(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_3599)
static void C_ccall f_3599(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3130)
static void C_fcall f_3130(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4619)
static void C_fcall f_4619(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6203)
static void C_ccall f_6203(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3370)
static void C_ccall f_3370(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3370)
static void C_ccall f_3370r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2712)
static void C_ccall f_2712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2717)
static void C_ccall f_2717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2719)
static void C_fcall f_2719(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4402)
static void C_ccall f_4402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4203)
static void C_ccall f_4203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4200)
static void C_ccall f_4200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3447)
static void C_ccall f_3447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3444)
static void C_ccall f_3444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5364)
static void C_ccall f_5364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4636)
static void C_fcall f_4636(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3154)
static void C_ccall f_3154(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3154)
static void C_ccall f_3154r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4630)
static void C_fcall f_4630(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4417)
static void C_ccall f_4417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4410)
static void C_ccall f_4410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3142)
static void C_fcall f_3142(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2739)
static void C_fcall f_2739(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3543)
static void C_ccall f_3543(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4655)
static void C_ccall f_4655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2722)
static void C_fcall f_2722(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_6028)
static void C_ccall f_6028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4432)
static void C_ccall f_4432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6021)
static void C_ccall f_6021(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4281)
static void C_fcall f_4281(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4663)
static void C_ccall f_4663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4446)
static void C_fcall f_4446(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5345)
static void C_fcall f_5345(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4275)
static void C_ccall f_4275(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4670)
static void C_ccall f_4670(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3110)
static void C_ccall f_3110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5170)
static void C_ccall f_5170(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5393)
static void C_ccall f_5393(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2773)
static void C_ccall f_2773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3306)
static void C_ccall f_3306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3303)
static void C_ccall f_3303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5154)
static void C_ccall f_5154(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2683)
static void C_ccall f_2683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5185)
static C_word C_fcall f_5185(C_word t0,C_word t1);
C_noret_decl(f_2323)
static void C_ccall f_2323(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2323)
static void C_ccall f_2323r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5225)
static void C_fcall f_5225(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3051)
static void C_fcall f_3051(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4136)
static void C_ccall f_4136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5238)
static void C_ccall f_5238(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2371)
static void C_ccall f_2371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4735)
static void C_ccall f_4735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5262)
static void C_ccall f_5262(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;

C_noret_decl(trf_4758)
static void C_fcall trf_4758(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4758(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4758(t0,t1,t2);}

C_noret_decl(trf_4994)
static void C_fcall trf_4994(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4994(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4994(t0,t1,t2);}

C_noret_decl(trf_4120)
static void C_fcall trf_4120(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4120(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4120(t0,t1,t2);}

C_noret_decl(trf_5517)
static void C_fcall trf_5517(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5517(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5517(t0,t1,t2);}

C_noret_decl(trf_5505)
static void C_fcall trf_5505(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5505(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5505(t0,t1,t2);}

C_noret_decl(trf_6111)
static void C_fcall trf_6111(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6111(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6111(t0,t1,t2);}

C_noret_decl(trf_5118)
static void C_fcall trf_5118(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5118(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5118(t0,t1,t2);}

C_noret_decl(trf_2795)
static void C_fcall trf_2795(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2795(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2795(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3701)
static void C_fcall trf_3701(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3701(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3701(t0,t1);}

C_noret_decl(trf_3704)
static void C_fcall trf_3704(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3704(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3704(t0,t1);}

C_noret_decl(trf_3739)
static void C_fcall trf_3739(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3739(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3739(t0,t1,t2);}

C_noret_decl(trf_4383)
static void C_fcall trf_4383(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4383(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4383(t0,t1);}

C_noret_decl(trf_4873)
static void C_fcall trf_4873(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4873(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4873(t0,t1);}

C_noret_decl(trf_5878)
static void C_fcall trf_5878(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5878(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5878(t0,t1,t2);}

C_noret_decl(trf_5870)
static void C_fcall trf_5870(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5870(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5870(t0,t1,t2);}

C_noret_decl(trf_4879)
static void C_fcall trf_4879(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4879(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4879(t0,t1);}

C_noret_decl(trf_4377)
static void C_fcall trf_4377(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4377(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4377(t0,t1);}

C_noret_decl(trf_5931)
static void C_fcall trf_5931(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5931(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5931(t0,t1,t2,t3);}

C_noret_decl(trf_4862)
static void C_fcall trf_4862(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4862(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4862(t0,t1);}

C_noret_decl(trf_5540)
static void C_fcall trf_5540(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5540(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5540(t0,t1,t2);}

C_noret_decl(trf_5943)
static void C_fcall trf_5943(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5943(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5943(t0,t1,t2,t3);}

C_noret_decl(trf_4097)
static void C_fcall trf_4097(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4097(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4097(t0,t1,t2);}

C_noret_decl(trf_5414)
static void C_fcall trf_5414(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5414(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5414(t0,t1,t2);}

C_noret_decl(trf_5959)
static void C_fcall trf_5959(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5959(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5959(t0,t1,t2,t3);}

C_noret_decl(trf_4590)
static void C_fcall trf_4590(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4590(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_4590(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_5908)
static void C_fcall trf_5908(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5908(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5908(t0,t1,t2);}

C_noret_decl(trf_3750)
static void C_fcall trf_3750(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3750(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3750(t0,t1,t2);}

C_noret_decl(trf_4945)
static void C_fcall trf_4945(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4945(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4945(t0,t1,t2);}

C_noret_decl(trf_5858)
static void C_fcall trf_5858(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5858(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5858(t0,t1,t2);}

C_noret_decl(trf_5440)
static void C_fcall trf_5440(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5440(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5440(t0,t1,t2,t3);}

C_noret_decl(trf_6153)
static void C_fcall trf_6153(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6153(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6153(t0,t1,t2);}

C_noret_decl(trf_4509)
static void C_fcall trf_4509(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4509(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4509(t0,t1,t2);}

C_noret_decl(trf_5808)
static void C_fcall trf_5808(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5808(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5808(t0,t1,t2,t3);}

C_noret_decl(trf_5705)
static void C_fcall trf_5705(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5705(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5705(t0,t1,t2);}

C_noret_decl(trf_3698)
static void C_fcall trf_3698(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3698(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3698(t0,t1);}

C_noret_decl(trf_4366)
static void C_fcall trf_4366(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4366(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4366(t0,t1);}

C_noret_decl(trf_5743)
static void C_fcall trf_5743(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5743(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5743(t0,t1,t2,t3);}

C_noret_decl(trf_5759)
static void C_fcall trf_5759(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5759(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5759(t0,t1,t2,t3);}

C_noret_decl(trf_5824)
static void C_fcall trf_5824(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5824(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5824(t0,t1,t2,t3);}

C_noret_decl(trf_4190)
static void C_fcall trf_4190(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4190(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4190(t0,t1);}

C_noret_decl(trf_4699)
static void C_fcall trf_4699(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4699(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4699(t0,t1,t2);}

C_noret_decl(trf_5682)
static void C_fcall trf_5682(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5682(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5682(t0,t1,t2);}

C_noret_decl(trf_4329)
static void C_fcall trf_4329(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4329(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4329(t0,t1);}

C_noret_decl(trf_5616)
static void C_fcall trf_5616(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5616(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5616(t0,t1,t2,t3);}

C_noret_decl(trf_3513)
static void C_fcall trf_3513(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3513(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3513(t0,t1,t2);}

C_noret_decl(trf_6210)
static void C_fcall trf_6210(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6210(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6210(t0,t1);}

C_noret_decl(trf_6224)
static void C_fcall trf_6224(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6224(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6224(t0,t1);}

C_noret_decl(trf_5632)
static void C_fcall trf_5632(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5632(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5632(t0,t1,t2,t3);}

C_noret_decl(trf_4219)
static void C_fcall trf_4219(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4219(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4219(t0,t1,t2);}

C_noret_decl(trf_3595)
static void C_fcall trf_3595(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3595(void *dummy){
C_word t7=C_pick(0);
C_word t6=C_pick(1);
C_word t5=C_pick(2);
C_word t4=C_pick(3);
C_word t3=C_pick(4);
C_word t2=C_pick(5);
C_word t1=C_pick(6);
C_word t0=C_pick(7);
C_adjust_stack(-8);
f_3595(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_3130)
static void C_fcall trf_3130(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3130(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3130(t0,t1,t2,t3);}

C_noret_decl(trf_4619)
static void C_fcall trf_4619(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4619(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4619(t0,t1);}

C_noret_decl(trf_2719)
static void C_fcall trf_2719(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2719(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2719(t0,t1,t2);}

C_noret_decl(trf_4636)
static void C_fcall trf_4636(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4636(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4636(t0,t1);}

C_noret_decl(trf_4630)
static void C_fcall trf_4630(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4630(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4630(t0,t1);}

C_noret_decl(trf_3142)
static void C_fcall trf_3142(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3142(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3142(t0,t1,t2,t3);}

C_noret_decl(trf_2739)
static void C_fcall trf_2739(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2739(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2739(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2722)
static void C_fcall trf_2722(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2722(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_2722(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_4281)
static void C_fcall trf_4281(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4281(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4281(t0,t1,t2);}

C_noret_decl(trf_4446)
static void C_fcall trf_4446(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4446(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4446(t0,t1,t2);}

C_noret_decl(trf_5345)
static void C_fcall trf_5345(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5345(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5345(t0,t1,t2,t3);}

C_noret_decl(trf_5225)
static void C_fcall trf_5225(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5225(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5225(t0,t1,t2);}

C_noret_decl(trf_3051)
static void C_fcall trf_3051(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3051(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3051(t0,t1,t2,t3);}

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

/* loop in k4683 in k4668 in *hash-table-update!/default in k2715 in k2710 in k1706 */
static void C_fcall f_4758(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_4758,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4768,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* srfi-69.scm:787: func */
t4=((C_word*)t0)[8];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[9]);}
else{
t3=C_slot(t2,C_fix(0));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4791,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[8],a[5]=t2,a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
t6=C_slot(t4,C_fix(0));
/* srfi-69.scm:792: test */
t7=((C_word*)t0)[11];
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t5,((C_word*)t0)[2],t6);}}

/* k5985 in fold2 in loop in *hash-table-fold in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_5987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:1101: fold2 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5959(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* symbol-hash in k1706 */
static void C_ccall f_2017(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_2017r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2017r(t0,t1,t2,t3);}}

static void C_ccall f_2017r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_fix(536870912):C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?lf[0]:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_check_symbol_2(t2,lf[8]);
t13=C_i_check_exact_2(t5,lf[8]);
t14=t2;
t15=C_slot(t14,C_fix(1));
t16=C_u_i_string_hash(t15,t9);
t17=C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM);
t18=C_fixnum_lessp(t16,C_fix(0));
t19=(C_truep(t18)?C_fixnum_negate(t16):t16);
t20=C_fixnum_and(t17,t19);
t21=t1;
((C_proc2)(void*)(*((C_word*)t21+1)))(2,t21,C_fixnum_modulo(t20,t5));}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_srfi_2d69_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_srfi_2d69_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("srfi_2d69_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1005)){
C_save(t1);
C_rereclaim2(1005*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,124);
lf[1]=C_h_intern(&lf[1],20,"\003sysnumber-hash-hook");
lf[3]=C_h_intern(&lf[3],11,"number-hash");
lf[4]=C_h_intern(&lf[4],15,"\003syssignal-hook");
lf[5]=C_h_intern(&lf[5],5,"\000type");
lf[6]=C_decode_literal(C_heaptop,"\376B\000\000\016invalid number");
lf[7]=C_h_intern(&lf[7],15,"object-uid-hash");
lf[8]=C_h_intern(&lf[8],11,"symbol-hash");
lf[9]=C_h_intern(&lf[9],17,"\003syscheck-keyword");
lf[10]=C_h_intern(&lf[10],11,"\000type-error");
lf[11]=C_decode_literal(C_heaptop,"\376B\000\000!bad argument type - not a keyword");
lf[12]=C_h_intern(&lf[12],8,"keyword\077");
lf[13]=C_h_intern(&lf[13],12,"keyword-hash");
lf[14]=C_h_intern(&lf[14],8,"eq\077-hash");
lf[15]=C_h_intern(&lf[15],16,"hash-by-identity");
lf[16]=C_h_intern(&lf[16],9,"eqv\077-hash");
lf[17]=C_h_intern(&lf[17],26,"\052recursive-hash-max-depth\052");
lf[18]=C_h_intern(&lf[18],24,"recursive-hash-max-depth");
lf[19]=C_h_intern(&lf[19],27,"\052recursive-hash-max-length\052");
lf[20]=C_h_intern(&lf[20],25,"recursive-hash-max-length");
lf[21]=C_h_intern(&lf[21],11,"input-port\077");
lf[22]=C_h_intern(&lf[22],11,"equal\077-hash");
lf[23]=C_h_intern(&lf[23],4,"hash");
lf[24]=C_h_intern(&lf[24],11,"string-hash");
lf[25]=C_h_intern(&lf[25],13,"\003syssubstring");
lf[26]=C_h_intern(&lf[26],15,"\003syscheck-range");
lf[27]=C_h_intern(&lf[27],14,"string-ci-hash");
lf[28]=C_h_intern(&lf[28],14,"string-hash-ci");
lf[30]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\0013\376\003\000\000\002\376\377\001\000\000\002i\376\003\000\000\002\376\377\001\000\000\004\325\376\003\000\000\002\376\377\001\000\000\011\255\376\003\000\000\002\376\377\001\000\000\023]\376\003\000\000\002\376\377\001\000\000&\303\376\003\000\000\002\376\377\001"
"\000\000M\215\376\003\000\000\002\376\377\001\000\000\233\035\376\003\000\000\002\376\377\001\000\0016\077\376\003\000\000\002\376\377\001\000\002l\201\376\003\000\000\002\376\377\001\000\004\331\005\376\003\000\000\002\376\377\001\000\011\262\025\376\003\000\000\002\376\377\001\000\023dA\376\003\000\000"
"\002\376\377\001\000&\310\205\376\003\000\000\002\376\377\001\000M\221\037\376\003\000\000\002\376\377\001\000\233\042I\376\003\000\000\002\376\377\001\0016D\277\376\003\000\000\002\376\377\001\002l\211\207\376\003\000\000\002\376\377\001\004\331\023\027\376\003\000\000\002\376\377\001\011\262&1"
"\376\003\000\000\002\376\377\001\023dLq\376\003\000\000\002\376\377\001&\310\230\373\376\003\000\000\002\376\377\001\077\377\377\377\376\377\016");
lf[32]=C_h_intern(&lf[32],19,"\052make-hash-function");
lf[33]=C_h_intern(&lf[33],13,"\000bounds-error");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000\030Hash value out of bounds");
lf[35]=C_h_intern(&lf[35],15,"\003syscheck-exact");
lf[37]=C_h_intern(&lf[37],10,"hash-table");
lf[38]=C_h_intern(&lf[38],11,"make-vector");
lf[39]=C_h_intern(&lf[39],3,"eq\077");
lf[40]=C_h_intern(&lf[40],4,"eqv\077");
lf[41]=C_h_intern(&lf[41],6,"equal\077");
lf[42]=C_h_intern(&lf[42],8,"string=\077");
lf[43]=C_h_intern(&lf[43],11,"string-ci=\077");
lf[44]=C_h_intern(&lf[44],1,"=");
lf[45]=C_h_intern(&lf[45],15,"make-hash-table");
lf[46]=C_decode_literal(C_heaptop,"\376U0.5\000");
lf[47]=C_decode_literal(C_heaptop,"\376U0.8000000000000000444089209850062616169452667236328125\000");
lf[48]=C_h_intern(&lf[48],7,"warning");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\033user test without user hash");
lf[50]=C_h_intern(&lf[50],5,"error");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000\036min-load greater than max-load");
lf[52]=C_h_intern(&lf[52],3,"fp<");
lf[53]=C_h_intern(&lf[53],5,"\000test");
lf[54]=C_h_intern(&lf[54],17,"\003syscheck-closure");
lf[55]=C_h_intern(&lf[55],5,"\000hash");
lf[56]=C_h_intern(&lf[56],5,"\000size");
lf[57]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid size");
lf[58]=C_h_intern(&lf[58],8,"\000initial");
lf[59]=C_h_intern(&lf[59],9,"\000min-load");
lf[60]=C_decode_literal(C_heaptop,"\376U0.0\000");
lf[61]=C_decode_literal(C_heaptop,"\376U1.0\000");
lf[62]=C_decode_literal(C_heaptop,"\376B\000\000\020invalid min-load");
lf[63]=C_h_intern(&lf[63],17,"\003syscheck-inexact");
lf[64]=C_h_intern(&lf[64],9,"\000max-load");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\020invalid max-load");
lf[66]=C_h_intern(&lf[66],10,"\000weak-keys");
lf[67]=C_h_intern(&lf[67],12,"\000weak-values");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\017unknown keyword");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\025missing keyword value");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000\017missing keyword");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid size");
lf[72]=C_h_intern(&lf[72],11,"hash-table\077");
lf[73]=C_h_intern(&lf[73],15,"hash-table-size");
lf[74]=C_h_intern(&lf[74],31,"hash-table-equivalence-function");
lf[75]=C_h_intern(&lf[75],24,"hash-table-hash-function");
lf[76]=C_h_intern(&lf[76],19,"hash-table-min-load");
lf[77]=C_h_intern(&lf[77],19,"hash-table-max-load");
lf[78]=C_h_intern(&lf[78],20,"hash-table-weak-keys");
lf[79]=C_h_intern(&lf[79],22,"hash-table-weak-values");
lf[80]=C_h_intern(&lf[80],23,"hash-table-has-initial\077");
lf[81]=C_h_intern(&lf[81],18,"hash-table-initial");
lf[82]=C_h_intern(&lf[82],18,"hash-table-resize!");
lf[84]=C_h_intern(&lf[84],15,"hash-table-copy");
lf[85]=C_h_intern(&lf[85],18,"hash-table-update!");
lf[86]=C_h_intern(&lf[86],5,"floor");
lf[87]=C_h_intern(&lf[87],13,"\000access-error");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\037hash-table does not contain key");
lf[90]=C_h_intern(&lf[90],26,"hash-table-update!/default");
lf[91]=C_h_intern(&lf[91],15,"hash-table-set!");
lf[92]=C_h_intern(&lf[92],19,"\003sysundefined-value");
lf[93]=C_h_intern(&lf[93],14,"hash-table-ref");
lf[94]=C_h_intern(&lf[94],22,"hash-table-ref/default");
lf[95]=C_h_intern(&lf[95],18,"hash-table-exists\077");
lf[96]=C_h_intern(&lf[96],18,"hash-table-delete!");
lf[97]=C_h_intern(&lf[97],18,"hash-table-remove!");
lf[98]=C_h_intern(&lf[98],17,"hash-table-clear!");
lf[99]=C_h_intern(&lf[99],12,"vector-fill!");
lf[101]=C_h_intern(&lf[101],17,"hash-table-merge!");
lf[102]=C_h_intern(&lf[102],16,"hash-table-merge");
lf[103]=C_h_intern(&lf[103],17,"hash-table->alist");
lf[104]=C_h_intern(&lf[104],17,"alist->hash-table");
lf[105]=C_h_intern(&lf[105],15,"hash-table-keys");
lf[106]=C_h_intern(&lf[106],17,"hash-table-values");
lf[108]=C_h_intern(&lf[108],8,"for-each");
lf[110]=C_h_intern(&lf[110],15,"hash-table-fold");
lf[111]=C_h_intern(&lf[111],19,"hash-table-for-each");
lf[112]=C_h_intern(&lf[112],15,"hash-table-walk");
lf[113]=C_h_intern(&lf[113],14,"hash-table-map");
lf[114]=C_h_intern(&lf[114],9,"\003sysprint");
lf[115]=C_decode_literal(C_heaptop,"\376B\000\000\002)>");
lf[116]=C_decode_literal(C_heaptop,"\376B\000\000\016#<hash-table (");
lf[117]=C_h_intern(&lf[117],27,"\003sysregister-record-printer");
lf[118]=C_decode_literal(C_heaptop,"\376B\000\000\037hash-table does not contain key");
lf[119]=C_h_intern(&lf[119],18,"getter-with-setter");
lf[120]=C_decode_literal(C_heaptop,"\376B\000\000\035(hash-table-ref ht key . def)");
lf[121]=C_h_intern(&lf[121],14,"make-parameter");
lf[122]=C_h_intern(&lf[122],17,"register-feature!");
lf[123]=C_h_intern(&lf[123],7,"srfi-69");
C_register_lf2(lf,124,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1708,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm:40: register-feature! */
t3=*((C_word*)lf[122]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[123]);}

/* k4766 in loop in k4683 in k4668 in *hash-table-update!/default in k2715 in k2710 in k1706 */
static void C_ccall f_4768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4768,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=C_i_setslot(((C_word*)t0)[4],((C_word*)t0)[5],t3);
t5=C_i_set_i_slot(((C_word*)t0)[6],C_fix(2),((C_word*)t0)[7]);
t6=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t1);}

/* k5276 in hash-table-delete! in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_5278(C_word c,C_word t0,C_word t1){
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
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5278,2,t0,t1);}
t2=t1;
t3=C_slot(((C_word*)t0)[2],C_fix(3));
t4=t3;
t5=C_slot(((C_word*)t0)[2],C_fix(2));
t6=C_fixnum_difference(t5,C_fix(1));
t7=t6;
t8=C_slot(((C_word*)t0)[3],t2);
t9=C_eqp(((C_word*)t0)[4],t4);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5298,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=t7,a[7]=((C_word)li63),tmp=(C_word)a,a+=8,tmp);
t11=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,f_5298(t10,C_SCHEME_FALSE,t8));}
else{
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5345,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t7,a[6]=t11,a[7]=t4,a[8]=((C_word*)t0)[5],a[9]=((C_word)li64),tmp=(C_word)a,a+=10,tmp));
t13=((C_word*)t11)[1];
f_5345(t13,((C_word*)t0)[6],C_SCHEME_FALSE,t8);}}

/* ##sys#number-hash-hook in k1706 */
static void C_ccall f_1711(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1711,4,t0,t1,t2,t3);}
/* srfi-69.scm:144: *equal?-hash */
f_2719(t1,t2,t3);}

/* k1706 */
static void C_ccall f_1708(C_word c,C_word t0,C_word t1){
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
C_word ab[30],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1708,2,t0,t1);}
t2=C_mutate2(&lf[0] /* (set! hash-default-randomization ...) */,C_rnd_fix());
t3=C_mutate2((C_word*)lf[1]+1 /* (set! ##sys#number-hash-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1711,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[3]+1 /* (set! number-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1717,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[7]+1 /* (set! object-uid-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1938,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[8]+1 /* (set! symbol-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2017,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[9]+1 /* (set! ##sys#check-keyword ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2105,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[13]+1 /* (set! keyword-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2131,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[14]+1 /* (set! eq?-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2323,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[15]+1 /* (set! hash-by-identity ...) */,*((C_word*)lf[14]+1));
t11=C_mutate2((C_word*)lf[16]+1 /* (set! eqv?-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2635,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t12=C_set_block_item(lf[17] /* *recursive-hash-max-depth* */,0,C_fix(4));
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2712,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6217,a[2]=((C_word)li107),tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm:270: make-parameter */
t15=*((C_word*)lf[121]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t13,C_fix(4),t14);}

/* loop in k4926 in k4911 in hash-table-set! in k2715 in k2710 in k1706 */
static void C_fcall f_4994(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4994,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[4]);
t5=C_i_setslot(((C_word*)t0)[5],((C_word*)t0)[6],t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_set_i_slot(((C_word*)t0)[7],C_fix(2),((C_word*)t0)[8]));}
else{
t3=C_slot(t2,C_fix(0));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5024,a[2]=t1,a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
t6=C_slot(t4,C_fix(0));
/* srfi-69.scm:833: test */
t7=((C_word*)t0)[10];
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t5,((C_word*)t0)[2],t6);}}

/* k4707 in loop in k4683 in k4668 in *hash-table-update!/default in k2715 in k2710 in k1706 */
static void C_ccall f_4709(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4709,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=C_i_setslot(((C_word*)t0)[4],((C_word*)t0)[5],t3);
t5=C_i_set_i_slot(((C_word*)t0)[6],C_fix(2),((C_word*)t0)[7]);
t6=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t1);}

/* number-hash in k1706 */
static void C_ccall f_1717(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_1717r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1717r(t0,t1,t2,t3);}}

static void C_ccall f_1717r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(6);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_fix(536870912):C_i_car(t3));
t6=t5;
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?lf[0]:C_i_car(t8));
t11=t10;
t12=C_i_nullp(t8);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1733,a[2]=t6,a[3]=t1,a[4]=t2,a[5]=t11,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_numberp(t2))){
t15=t14;
f_1733(2,t15,C_SCHEME_UNDEFINED);}
else{
/* srfi-69.scm:157: ##sys#signal-hook */
t15=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t15+1)))(6,t15,t14,lf[5],lf[3],lf[6],t2);}}

/* hash-table-fold in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_5997(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5997,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[37],lf[110]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6004,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:1106: ##sys#check-closure */
t7=*((C_word*)lf[54]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t3,lf[110]);}

/* k1731 in number-hash in k1706 */
static void C_ccall f_1733(C_word c,C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1733,2,t0,t1);}
t2=C_i_check_exact_2(((C_word*)t0)[2],lf[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1906,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[4];
if(C_truep(C_fixnump(t4))){
t5=t3;
f_1906(2,t5,C_fixnum_xor(t4,((C_word*)t0)[5]));}
else{
t5=t3;
if(C_truep(C_i_flonump(t4))){
t6=C_subbyte(t4,C_fix(7));
t7=C_subbyte(t4,C_fix(6));
t8=C_subbyte(t4,C_fix(5));
t9=C_subbyte(t4,C_fix(4));
t10=C_subbyte(t4,C_fix(3));
t11=C_subbyte(t4,C_fix(2));
t12=C_subbyte(t4,C_fix(1));
t13=C_subbyte(t4,C_fix(0));
t14=C_fixnum_shift_left(t13,C_fix(1));
t15=C_fixnum_plus(t12,t14);
t16=C_fixnum_shift_left(t15,C_fix(1));
t17=C_fixnum_plus(t11,t16);
t18=C_fixnum_shift_left(t17,C_fix(1));
t19=C_fixnum_plus(t10,t18);
t20=C_fixnum_shift_left(t19,C_fix(1));
t21=C_fixnum_plus(t9,t20);
t22=C_fixnum_shift_left(t21,C_fix(1));
t23=C_fixnum_plus(t8,t22);
t24=C_fixnum_shift_left(t23,C_fix(1));
t25=C_fixnum_plus(t7,t24);
t26=C_fixnum_shift_left(t25,C_fix(1));
t27=C_fixnum_plus(t6,t26);
t28=t5;
((C_proc2)(void*)(*((C_word*)t28+1)))(2,t28,C_fixnum_times(C_fix(331804471),t27));}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1900,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm:148: ##sys#number-hash-hook */
t7=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t4,((C_word*)t0)[5]);}}}

/* loop in doloop864 in k4172 in k4169 in hash-table-resize! in k2715 in k2710 in k1706 */
static void C_fcall f_4120(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4120,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_slot(t2,C_fix(0));
t4=t3;
t5=C_slot(t4,C_fix(0));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4136,a[2]=t4,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* srfi-69.scm:643: hash */
t8=((C_word*)t0)[4];
((C_proc4)C_fast_retrieve_proc(t8))(4,t8,t7,t6,((C_word*)t0)[5]);}}

/* k3827 in k3762 in k3758 in loop in k3702 in k3699 in k3696 in make-hash-table in k2715 in k2710 in k1706 */
static void C_ccall f_3829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3829,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3832,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_truep(C_flonum_lessp(lf[60],((C_word*)t0)[3]))?C_flonum_lessp(((C_word*)t0)[3],lf[61]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t5=C_u_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm:569: loop */
t6=((C_word*)((C_word*)t0)[5])[1];
f_3739(t6,((C_word*)t0)[6],t5);}
else{
/* srfi-69.scm:556: error */
t4=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[45],lf[62],((C_word*)t0)[3]);}}

/* loop in k5062 in hash-table-ref/default in k5044 in k2715 in k2710 in k1706 */
static C_word C_fcall f_5079(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_overflow_check;
loop:
if(C_truep(C_i_nullp(t1))){
t2=((C_word*)t0)[2];
return(t2);}
else{
t2=C_slot(t1,C_fix(0));
t3=C_slot(t2,C_fix(0));
t4=C_eqp(((C_word*)t0)[3],t3);
if(C_truep(t4)){
return(C_slot(t2,C_fix(1)));}
else{
t5=C_slot(t1,C_fix(1));
t8=t5;
t1=t8;
goto loop;}}}

/* f_3819 in k3762 in k3758 in loop in k3702 in k3699 in k3696 in make-hash-table in k2715 in k2710 in k1706 */
static void C_ccall f_3819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3819,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k1904 in k1731 in number-hash in k1706 */
static void C_ccall f_1906(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM);
t4=C_fixnum_lessp(t1,C_fix(0));
t5=(C_truep(t4)?C_fixnum_negate(t1):t1);
t6=C_fixnum_and(t3,t5);
t7=t2;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_fixnum_modulo(t6,((C_word*)t0)[3]));}

/* k1898 in k1731 in number-hash in k1706 */
static void C_ccall f_1900(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(t1));}

/* doloop1205 in *hash-table-merge! in k5044 in k2715 in k2710 in k1706 */
static void C_fcall f_5517(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_5517,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=((C_word*)t0)[3];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5527,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(((C_word*)t0)[5],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5540,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=((C_word)li71),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_5540(t8,t3,t4);}}

/* k5062 in hash-table-ref/default in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_5064(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
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
C_save_and_reclaim((void*)tr2,(void*)f_5064,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(t2)){
t3=C_slot(((C_word*)t0)[4],t1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5079,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word)li57),tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_5079(t4,t3));}
else{
t3=C_slot(((C_word*)t0)[4],t1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5118,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word)li58),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_5118(t7,((C_word*)t0)[7],t3);}}

/* k3011 in recursive-hash in *equal?-hash in k2715 in k2710 in k1706 */
static void C_ccall f_3013(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(t1));}

/* k3830 in k3827 in k3762 in k3758 in loop in k3702 in k3699 in k3696 in make-hash-table in k2715 in k2710 in k1706 */
static void C_ccall f_3832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_u_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm:569: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3739(t4,((C_word*)t0)[6],t3);}

/* k5132 in loop in k5062 in hash-table-ref/default in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_5134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_slot(((C_word*)t0)[3],C_fix(1)));}
else{
t2=C_slot(((C_word*)t0)[4],C_fix(1));
/* srfi-69.scm:897: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_5118(t3,((C_word*)t0)[2],t2);}}

/* hash-table-resize! in k2715 in k2710 in k1706 */
static void C_ccall f_4164(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4164,5,t0,t1,t2,t3,t4);}
t5=C_fixnum_times(t4,C_fix(2));
t6=C_i_fixnum_min(C_fix(1073741823),t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4171,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:652: hash-table-canonical-length */
f_3513(t7,lf[29],t6);}

/* *hash-table-merge! in k5044 in k2715 in k2710 in k1706 */
static void C_fcall f_5505(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5505,NULL,3,t1,t2,t3);}
t4=C_slot(t3,C_fix(1));
t5=t4;
t6=C_block_size(t5);
t7=t6;
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5517,a[2]=t7,a[3]=t2,a[4]=t9,a[5]=t5,a[6]=((C_word)li72),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_5517(t11,t1,C_fix(0));}

/* loop in k6094 in k6082 in a6073 in k2715 in k2710 in k1706 */
static void C_fcall f_6111(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6111,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
/* srfi-69.scm:857: def */
t3=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t1);}
else{
t3=C_slot(t2,C_fix(0));
t4=C_slot(t3,C_fix(0));
t5=C_eqp(((C_word*)t0)[3],t4);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_slot(t3,C_fix(1)));}
else{
t6=C_slot(t2,C_fix(1));
/* srfi-69.scm:861: loop */
t8=t1;
t9=t6;
t1=t8;
t2=t9;
goto loop;}}}

/* loop in k5062 in hash-table-ref/default in k5044 in k2715 in k2710 in k1706 */
static void C_fcall f_5118(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5118,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=((C_word*)t0)[2];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_slot(t2,C_fix(0));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5134,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t6=C_slot(t4,C_fix(0));
/* srfi-69.scm:895: test */
t7=((C_word*)t0)[4];
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t5,((C_word*)t0)[5],t6);}}

/* k3853 in k3850 in k3762 in k3758 in loop in k3702 in k3699 in k3696 in make-hash-table in k2715 in k2710 in k1706 */
static void C_ccall f_3855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_u_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm:569: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3739(t4,((C_word*)t0)[6],t3);}

/* k3850 in k3762 in k3758 in loop in k3702 in k3699 in k3696 in make-hash-table in k2715 in k2710 in k1706 */
static void C_ccall f_3852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3852,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3855,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_truep(C_flonum_lessp(lf[60],((C_word*)t0)[3]))?C_flonum_lessp(((C_word*)t0)[3],lf[61]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t5=C_u_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm:569: loop */
t6=((C_word*)((C_word*)t0)[5])[1];
f_3739(t6,((C_word*)t0)[6],t5);}
else{
/* srfi-69.scm:561: error */
t4=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[45],lf[65],((C_word*)t0)[3]);}}

/* k4105 in doloop864 in k4172 in k4169 in hash-table-resize! in k2715 in k2710 in k1706 */
static void C_ccall f_4107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4097(t3,((C_word*)t0)[4],t2);}

/* k3799 in k3762 in k3758 in loop in k3702 in k3699 in k3696 in make-hash-table in k2715 in k2710 in k1706 */
static void C_ccall f_3801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_i_fixnum_min(C_fix(1073741823),((C_word*)t0)[2]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
t4=C_u_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm:569: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3739(t5,((C_word*)t0)[6],t4);}

/* a6044 in k6038 in hash-table-map in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_6045(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6045,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6053,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:1122: func */
t6=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t5,t2,t3);}

/* object-uid-hash in k1706 */
static void C_ccall f_1938(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_1938r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1938r(t0,t1,t2,t3);}}

static void C_ccall f_1938r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(4);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_fix(536870912):C_i_car(t3));
t6=t5;
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?lf[0]:C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_check_exact_2(t6,lf[7]);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1991,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:168: *equal?-hash */
f_2719(t14,t2,t10);}

/* k6094 in k6082 in a6073 in k2715 in k2710 in k1706 */
static void C_ccall f_6096(C_word c,C_word t0,C_word t1){
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
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6096,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(t2)){
t3=C_slot(((C_word*)t0)[4],t1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6111,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t5,a[5]=((C_word)li103),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_6111(t7,((C_word*)t0)[7],t3);}
else{
t3=C_slot(((C_word*)t0)[4],t1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6153,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word)li104),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_6153(t7,((C_word*)t0)[7],t3);}}

/* k6038 in hash-table-map in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_6040(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6040,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6045,a[2]=((C_word*)t0)[2],a[3]=((C_word)li99),tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:1122: *hash-table-fold */
f_5931(((C_word*)t0)[3],((C_word*)t0)[4],t2,C_SCHEME_END_OF_LIST);}

/* k6014 in hash-table-for-each in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_6016(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:1112: *hash-table-for-each */
f_5858(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* hash-table-set! in k2715 in k2710 in k1706 */
static void C_ccall f_4830(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[23],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4830,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[37],lf[91]);
t6=C_slot(t2,C_fix(2));
t7=C_fixnum_plus(t6,C_fix(1));
t8=t7;
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4913,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=t4,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
t10=t9;
t11=t2;
t12=t8;
t13=C_slot(t11,C_fix(1));
t14=t13;
t15=C_slot(t11,C_fix(5));
t16=C_slot(t11,C_fix(6));
t17=t16;
t18=C_block_size(t14);
t19=t18;
t20=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4862,a[2]=t10,a[3]=t11,a[4]=t14,a[5]=t19,a[6]=t12,a[7]=t17,tmp=(C_word)a,a+=8,tmp);
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4906,a[2]=t20,tmp=(C_word)a,a+=3,tmp);
t22=C_a_i_times(&a,2,t19,t15);
/* srfi-69.scm:664: floor */
t23=*((C_word*)lf[86]+1);
((C_proc3)(void*)(*((C_word*)t23+1)))(3,t23,t21,t22);}

/* k6063 in k6060 in a6057 in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_6065(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:1132: ##sys#print */
t2=*((C_word*)lf[114]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[115],C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k6060 in a6057 in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_6062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6062,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6065,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_slot(((C_word*)t0)[4],C_fix(2));
/* srfi-69.scm:1131: ##sys#print */
t4=*((C_word*)lf[114]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* recursive-hash in *equal?-hash in k2715 in k2710 in k1706 */
static void C_fcall f_2795(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2795,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_fixnum_greater_or_equal_p(t3,*((C_word*)lf[17]+1)))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_fixnum_xor(C_fix(99),t4));}
else{
if(C_truep(C_fixnump(t2))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_fixnum_xor(t2,t4));}
else{
if(C_truep(C_charp(t2))){
t5=C_fix(C_character_code(t2));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_fixnum_xor(t5,t4));}
else{
switch(t2){
case C_SCHEME_TRUE:
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_fixnum_xor(C_fix(256),t4));
case C_SCHEME_FALSE:
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_fixnum_xor(C_fix(257),t4));
default:
if(C_truep(C_i_nullp(t2))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_fixnum_xor(C_fix(258),t4));}
else{
if(C_truep(C_eofp(t2))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_fixnum_xor(C_fix(259),t4));}
else{
if(C_truep(C_i_symbolp(t2))){
t5=t1;
t6=t2;
t7=t4;
t8=C_slot(t6,C_fix(1));
t9=t5;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_u_i_string_hash(t8,t7));}
else{
if(C_truep(C_i_numberp(t2))){
t5=t1;
t6=t2;
t7=t4;
if(C_truep(C_i_flonump(t6))){
t8=C_subbyte(t6,C_fix(7));
t9=C_subbyte(t6,C_fix(6));
t10=C_subbyte(t6,C_fix(5));
t11=C_subbyte(t6,C_fix(4));
t12=C_subbyte(t6,C_fix(3));
t13=C_subbyte(t6,C_fix(2));
t14=C_subbyte(t6,C_fix(1));
t15=C_subbyte(t6,C_fix(0));
t16=C_fixnum_shift_left(t15,C_fix(1));
t17=C_fixnum_plus(t14,t16);
t18=C_fixnum_shift_left(t17,C_fix(1));
t19=C_fixnum_plus(t13,t18);
t20=C_fixnum_shift_left(t19,C_fix(1));
t21=C_fixnum_plus(t12,t20);
t22=C_fixnum_shift_left(t21,C_fix(1));
t23=C_fixnum_plus(t11,t22);
t24=C_fixnum_shift_left(t23,C_fix(1));
t25=C_fixnum_plus(t10,t24);
t26=C_fixnum_shift_left(t25,C_fix(1));
t27=C_fixnum_plus(t9,t26);
t28=C_fixnum_shift_left(t27,C_fix(1));
t29=C_fixnum_plus(t8,t28);
t30=t5;
((C_proc2)(void*)(*((C_word*)t30+1)))(2,t30,C_fixnum_times(C_fix(331804471),t29));}
else{
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3013,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm:148: ##sys#number-hash-hook */
t9=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,t6,t7);}}
else{
t5=t2;
if(C_truep(C_blockp(t5))){
t6=t2;
if(C_truep(C_byteblockp(t6))){
t7=t1;
t8=t2;
t9=t4;
t10=t7;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_u_i_string_hash(t8,t9));}
else{
if(C_truep(C_i_pairp(t2))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3051,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li10),tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:337: g525 */
t8=t7;
f_3051(t8,t1,t2,t4);}
else{
t7=t2;
if(C_truep(C_portp(t7))){
t8=t1;
t9=t2;
t10=t4;
t11=C_peek_fixnum(t9,C_fix(0));
t12=C_fixnum_shift_left(t11,C_fix(4));
t13=C_fixnum_xor(t12,t10);
t14=t13;
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3110,a[2]=t8,a[3]=t14,tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:295: input-port? */
t16=*((C_word*)lf[21]+1);
((C_proc3)(void*)(*((C_word*)t16+1)))(3,t16,t15,t9);}
else{
t8=t2;
if(C_truep(C_specialp(t8))){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3130,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word)li11),tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:339: g539 */
t10=t9;
f_3130(t10,t1,t2,t4);}
else{
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3142,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word)li12),tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:340: g543 */
t10=t9;
f_3142(t10,t1,t2,t4);}}}}}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_fixnum_xor(C_fix(262),t4));}}}}}}}}}}

/* k3705 in k3702 in k3699 in k3696 in make-hash-table in k2715 in k2710 in k1706 */
static void C_ccall f_3707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3707,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3710,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3734,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:572: fp< */
t4=*((C_word*)lf[52]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[6])[1]);}

/* k3699 in k3696 in make-hash-table in k2715 in k2710 in k1706 */
static void C_fcall f_3701(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3701,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3704,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[12])[1]))){
t3=t2;
f_3704(t3,C_SCHEME_UNDEFINED);}
else{
t3=C_i_car(((C_word*)((C_word*)t0)[12])[1]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3927,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[12],tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:521: keyword? */
t6=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}}

/* k3702 in k3699 in k3696 in make-hash-table in k2715 in k2710 in k1706 */
static void C_fcall f_3704(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[24],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3704,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3707,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3739,a[2]=((C_word*)t0)[11],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word)li27),tmp=(C_word)a,a+=11,tmp));
t6=((C_word*)t4)[1];
f_3739(t6,t2,((C_word*)((C_word*)t0)[12])[1]);}

/* k5897 in doloop1300 in *hash-table-for-each in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_5899(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5870(t3,((C_word*)t0)[4],t2);}

/* k6082 in a6073 in k2715 in k2710 in k1706 */
static void C_ccall f_6084(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6084,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=t2;
t4=C_slot(((C_word*)t0)[2],C_fix(3));
t5=t4;
t6=C_slot(((C_word*)t0)[2],C_fix(10));
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6096,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t8=C_block_size(t3);
/* srfi-69.scm:852: hash */
t9=t6;
((C_proc4)C_fast_retrieve_proc(t9))(4,t9,t7,((C_word*)t0)[5],t8);}

/* hash-table-map in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_6033(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6033,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[37],lf[113]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6040,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:1121: ##sys#check-closure */
t6=*((C_word*)lf[54]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t3,lf[113]);}

/* k5597 in hash-table-merge in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_5599(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:1012: *hash-table-merge! */
f_5505(((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* loop in k3702 in k3699 in k3696 in make-hash-table in k2715 in k2710 in k1706 */
static void C_fcall f_3739(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3739,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_i_car(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3750,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word)li25),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3760,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t4,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=t5,tmp=(C_word)a,a+=13,tmp);
/* srfi-69.scm:534: keyword? */
t7=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t4);}}

/* hash-table-for-each in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_6009(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6009,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[37],lf[111]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6016,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:1111: ##sys#check-closure */
t6=*((C_word*)lf[54]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t3,lf[111]);}

/* k4823 in hash-table-update!/default in k2715 in k2710 in k1706 */
static void C_ccall f_4825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:801: *hash-table-update!/default */
t2=lf[89];
f_4590(t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k4381 in k4375 in k4364 in k4336 in k4333 in k4327 in hash-table-update! in k2715 in k2710 in k1706 */
static void C_fcall f_4383(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* srfi-69.scm:668: hash-table-resize! */
t2=*((C_word*)lf[82]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k3728 in k3712 in k3708 in k3705 in k3702 in k3699 in k3696 in make-hash-table in k2715 in k2710 in k1706 */
static void C_ccall f_3730(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
/* srfi-69.scm:585: *make-hash-table */
f_3595(((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[8])[1],((C_word*)((C_word*)t0)[9])[1],C_SCHEME_END_OF_LIST);}

/* k6002 in hash-table-fold in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_6004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:1107: *hash-table-fold */
f_5931(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k3732 in k3705 in k3702 in k3699 in k3696 in make-hash-table in k2715 in k2710 in k1706 */
static void C_ccall f_3734(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* srfi-69.scm:573: error */
t2=*((C_word*)lf[50]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[45],lf[51],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]);}
else{
t2=((C_word*)t0)[2];
f_3710(2,t2,C_SCHEME_UNDEFINED);}}

/* k6054 in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_6056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* a6057 in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_6058(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6058,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6062,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:1130: ##sys#print */
t5=*((C_word*)lf[114]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,lf[116],C_SCHEME_FALSE,t3);}

/* k6051 in a6044 in k6038 in hash-table-map in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_6053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6053,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,t1,((C_word*)t0)[3]));}

/* hash-table-merge in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_5585(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5585,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[37],lf[102]);
t5=C_i_check_structure_2(t3,lf[37],lf[102]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5599,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:1012: *hash-table-copy */
f_4190(t6,t2);}

/* k4871 in k4860 in hash-table-set! in k2715 in k2710 in k1706 */
static void C_fcall f_4873(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4873,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4879,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[5],C_fix(1073741823)))){
t3=C_fixnum_less_or_equal_p(((C_word*)t0)[6],((C_word*)t0)[7]);
t4=t2;
f_4879(t4,(C_truep(t3)?C_fixnum_less_or_equal_p(((C_word*)t0)[7],t1):C_SCHEME_FALSE));}
else{
t3=t2;
f_4879(t3,C_SCHEME_FALSE);}}

/* g1306 in doloop1300 in *hash-table-for-each in k5044 in k2715 in k2710 in k1706 */
static void C_fcall f_5878(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5878,NULL,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(0));
t4=C_slot(t2,C_fix(1));
/* srfi-69.scm:1087: proc */
t5=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t1,t3,t4);}

/* doloop1300 in *hash-table-for-each in k5044 in k2715 in k2710 in k1706 */
static void C_fcall f_5870(C_word t0,C_word t1,C_word t2){
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
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5870,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5878,a[2]=((C_word*)t0)[3],a[3]=((C_word)li89),tmp=(C_word)a,a+=4,tmp);
t4=C_slot(((C_word*)t0)[4],t2);
t5=C_i_check_list_2(t4,lf[108]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5899,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5908,a[2]=t8,a[3]=t3,a[4]=((C_word)li90),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_5908(t10,t6,t4);}}

/* keyword-hash in k1706 */
static void C_ccall f_2131(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_2131r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2131r(t0,t1,t2,t3);}}

static void C_ccall f_2131r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(6);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_fix(536870912):C_i_car(t3));
t6=t5;
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?lf[0]:C_i_car(t8));
t11=t10;
t12=C_i_nullp(t8);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2147,a[2]=t6,a[3]=t2,a[4]=t11,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:207: ##sys#check-keyword */
t15=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t14,t2,lf[13]);}

/* k4877 in k4871 in k4860 in hash-table-set! in k2715 in k2710 in k1706 */
static void C_fcall f_4879(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* srfi-69.scm:668: hash-table-resize! */
t2=*((C_word*)lf[82]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* hash-table-merge! in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_5573(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5573,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[37],lf[101]);
t5=C_i_check_structure_2(t3,lf[37],lf[101]);
/* srfi-69.scm:1007: *hash-table-merge! */
f_5505(t1,t2,t3);}

/* k4375 in k4364 in k4336 in k4333 in k4327 in hash-table-update! in k2715 in k2710 in k1706 */
static void C_fcall f_4377(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4377,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4383,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[5],C_fix(1073741823)))){
t3=C_fixnum_less_or_equal_p(((C_word*)t0)[6],((C_word*)t0)[7]);
t4=t2;
f_4383(t4,(C_truep(t3)?C_fixnum_less_or_equal_p(((C_word*)t0)[7],t1):C_SCHEME_FALSE));}
else{
t3=t2;
f_4383(t3,C_SCHEME_FALSE);}}

/* a6073 in k2715 in k2710 in k1706 */
static void C_ccall f_6074(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr4r,(void*)f_6074r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_6074r(t0,t1,t2,t3,t4);}}

static void C_ccall f_6074r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(12);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6194,a[2]=t3,a[3]=t2,a[4]=((C_word)li102),tmp=(C_word)a,a+=5,tmp):C_i_car(t4));
t7=t6;
t8=C_i_check_structure_2(t2,lf[37],lf[93]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6084,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t7,a[5]=t3,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm:848: ##sys#check-closure */
t10=*((C_word*)lf[54]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,t7,lf[93]);}

/* a5565 in doloop1208 in doloop1205 in *hash-table-merge! in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_5566(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5566,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* hash-table-update!/default in k2715 in k2710 in k1706 */
static void C_ccall f_4818(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_4818,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_check_structure_2(t2,lf[37],lf[90]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4825,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm:800: ##sys#check-closure */
t8=*((C_word*)lf[54]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,t4,lf[90]);}

/* *hash-table-fold in k5044 in k2715 in k2710 in k1706 */
static void C_fcall f_5931(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5931,NULL,4,t1,t2,t3,t4);}
t5=C_slot(t2,C_fix(1));
t6=t5;
t7=C_block_size(t6);
t8=t7;
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5943,a[2]=t8,a[3]=t6,a[4]=t10,a[5]=t3,a[6]=((C_word)li94),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_5943(t12,t1,C_fix(0),t4);}

/* k3776 in k3762 in k3758 in loop in k3702 in k3699 in k3696 in make-hash-table in k2715 in k2710 in k1706 */
static void C_ccall f_3778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_u_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm:569: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3739(t4,((C_word*)t0)[6],t3);}

/* k4860 in hash-table-set! in k2715 in k2710 in k1706 */
static void C_fcall f_4862(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4862,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4873,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4898,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_a_i_times(&a,2,((C_word*)t0)[5],((C_word*)t0)[7]);
/* srfi-69.scm:665: floor */
t6=*((C_word*)lf[86]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k5551 in doloop1208 in doloop1205 in *hash-table-merge! in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_5553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5540(t3,((C_word*)t0)[4],t2);}

/* k2145 in keyword-hash in k1706 */
static void C_ccall f_2147(C_word c,C_word t0,C_word t1){
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
t2=C_i_check_exact_2(((C_word*)t0)[2],lf[13]);
t3=((C_word*)t0)[3];
t4=C_slot(t3,C_fix(1));
t5=C_u_i_string_hash(t4,((C_word*)t0)[4]);
t6=((C_word*)t0)[5];
t7=C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM);
t8=C_fixnum_lessp(t5,C_fix(0));
t9=(C_truep(t8)?C_fixnum_negate(t5):t5);
t10=C_fixnum_and(t7,t9);
t11=t6;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_fixnum_modulo(t10,((C_word*)t0)[2]));}

/* k3765 in k3762 in k3758 in loop in k3702 in k3699 in k3696 in make-hash-table in k2715 in k2710 in k1706 */
static void C_ccall f_3767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_u_i_cdr(((C_word*)t0)[2]);
/* srfi-69.scm:569: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3739(t3,((C_word*)t0)[4],t2);}

/* hash-table-initial in k2715 in k2710 in k1706 */
static void C_ccall f_4070(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4070,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[37],lf[81]);
t4=C_slot(t2,C_fix(9));
if(C_truep(t4)){
/* srfi-69.scm:630: thunk */
t5=t4;
((C_proc2)C_fast_retrieve_proc(t5))(2,t5,t1);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}

/* k3762 in k3758 in loop in k3702 in k3699 in k3696 in make-hash-table in k2715 in k2710 in k1706 */
static void C_ccall f_3764(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3764,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3767,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(((C_word*)t0)[5],lf[53]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3778,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm:541: ##sys#check-closure */
t6=*((C_word*)lf[54]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,lf[45]);}
else{
t5=C_eqp(((C_word*)t0)[5],lf[55]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3788,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm:544: ##sys#check-closure */
t7=*((C_word*)lf[54]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t2,lf[45]);}
else{
t6=C_eqp(((C_word*)t0)[5],lf[56]);
if(C_truep(t6)){
t7=C_i_check_exact_2(t2,lf[45]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3801,a[2]=t2,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fixnum_lessp(C_fix(0),t2))){
t9=t8;
f_3801(2,t9,C_SCHEME_UNDEFINED);}
else{
/* srfi-69.scm:549: error */
t9=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,lf[45],lf[57],t2);}}
else{
t7=C_eqp(((C_word*)t0)[5],lf[58]);
if(C_truep(t7)){
t8=C_mutate2(((C_word *)((C_word*)t0)[9])+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3819,a[2]=t2,a[3]=((C_word)li26),tmp=(C_word)a,a+=4,tmp));
t9=C_u_i_cdr(((C_word*)t0)[2]);
/* srfi-69.scm:569: loop */
t10=((C_word*)((C_word*)t0)[3])[1];
f_3739(t10,((C_word*)t0)[4],t9);}
else{
t8=C_eqp(((C_word*)t0)[5],lf[59]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3829,a[2]=((C_word*)t0)[10],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm:554: ##sys#check-inexact */
t10=*((C_word*)lf[63]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,t2,lf[45]);}
else{
t9=C_eqp(((C_word*)t0)[5],lf[64]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3852,a[2]=((C_word*)t0)[11],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm:559: ##sys#check-inexact */
t11=*((C_word*)lf[63]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t10,t2,lf[45]);}
else{
t10=C_eqp(((C_word*)t0)[5],lf[66]);
if(C_truep(t10)){
if(C_truep(t2)){
t11=C_u_i_cdr(((C_word*)t0)[2]);
/* srfi-69.scm:569: loop */
t12=((C_word*)((C_word*)t0)[3])[1];
f_3739(t12,((C_word*)t0)[4],t11);}
else{
t11=C_u_i_cdr(((C_word*)t0)[2]);
/* srfi-69.scm:569: loop */
t12=((C_word*)((C_word*)t0)[3])[1];
f_3739(t12,((C_word*)t0)[4],t11);}}
else{
t11=C_eqp(((C_word*)t0)[5],lf[67]);
if(C_truep(t11)){
if(C_truep(t2)){
t12=C_u_i_cdr(((C_word*)t0)[2]);
/* srfi-69.scm:569: loop */
t13=((C_word*)((C_word*)t0)[3])[1];
f_3739(t13,((C_word*)t0)[4],t12);}
else{
t12=C_u_i_cdr(((C_word*)t0)[2]);
/* srfi-69.scm:569: loop */
t13=((C_word*)((C_word*)t0)[3])[1];
f_3739(t13,((C_word*)t0)[4],t12);}}
else{
/* srfi-69.scm:568: invarg-err */
t12=((C_word*)t0)[12];
f_3750(t12,t3,lf[68]);}}}}}}}}}

/* k3758 in loop in k3702 in k3699 in k3696 in make-hash-table in k2715 in k2710 in k1706 */
static void C_ccall f_3760(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3760,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3764,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_i_pairp(t3))){
t5=t4;
f_3764(2,t5,C_u_i_car(t3));}
else{
/* srfi-69.scm:538: invarg-err */
t5=((C_word*)t0)[12];
f_3750(t5,t4,lf[69]);}}
else{
/* srfi-69.scm:570: invarg-err */
t2=((C_word*)t0)[12];
f_3750(t2,((C_word*)t0)[4],lf[70]);}}

/* doloop1208 in doloop1205 in *hash-table-merge! in k5044 in k2715 in k2710 in k1706 */
static void C_fcall f_5540(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5540,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5553,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=C_slot(t3,C_fix(0));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5566,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp);
t7=C_slot(t3,C_fix(1));
/* srfi-69.scm:1002: *hash-table-update!/default */
t8=lf[89];
f_4590(t8,t4,((C_word*)t0)[3],t5,t6,t7);}}

/* f_4581 in hash-table-update! in k2715 in k2710 in k1706 */
static void C_ccall f_4581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4581,2,t0,t1);}
/* srfi-69.scm:716: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,t1,lf[87],lf[85],lf[88],((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3708 in k3705 in k3702 in k3699 in k3696 in make-hash-table in k2715 in k2710 in k1706 */
static void C_ccall f_3710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3710,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3714,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* srfi-69.scm:575: hash-table-canonical-length */
f_3513(t2,lf[29],((C_word*)((C_word*)t0)[2])[1]);}

/* k3712 in k3708 in k3705 in k3702 in k3699 in k3696 in make-hash-table in k2715 in k2710 in k1706 */
static void C_ccall f_3714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3714,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
/* srfi-69.scm:585: *make-hash-table */
f_3595(((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[8])[1],C_SCHEME_END_OF_LIST);}
else{
t3=f_3622(((C_word*)t0)[9]);
if(C_truep(t3)){
t4=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t3);
/* srfi-69.scm:585: *make-hash-table */
f_3595(((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[8])[1],C_SCHEME_END_OF_LIST);}
else{
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3730,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* srfi-69.scm:582: warning */
t5=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,lf[45],lf[49]);}}}

/* k5525 in doloop1205 in *hash-table-merge! in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_5527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5517(t3,((C_word*)t0)[4],t2);}

/* loop in *hash-table-fold in k5044 in k2715 in k2710 in k1706 */
static void C_fcall f_5943(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_5943,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_slot(((C_word*)t0)[3],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5959,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t6,a[5]=((C_word*)t0)[5],a[6]=((C_word)li93),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_5959(t8,t1,t4,t3);}}

/* k4904 in hash-table-set! in k2715 in k2710 in k1706 */
static void C_ccall f_4906(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_immp(t1))){
t2=((C_word*)t0)[2];
f_4862(t2,t1);}
else{
t2=C_i_inexact_to_exact(t1);
t3=((C_word*)t0)[2];
f_4862(t3,t2);}}

/* k3786 in k3762 in k3758 in loop in k3702 in k3699 in k3696 in make-hash-table in k2715 in k2710 in k1706 */
static void C_ccall f_3788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_u_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm:569: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3739(t4,((C_word*)t0)[6],t3);}

/* doloop864 in k4172 in k4169 in hash-table-resize! in k2715 in k2710 in k1706 */
static void C_fcall f_4097(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4097,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4107,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(((C_word*)t0)[4],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4120,a[2]=((C_word*)t0)[5],a[3]=t6,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word)li39),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_4120(t8,t3,t4);}}

/* k2110 in check-keyword in k1706 */
static void C_ccall f_2112(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(C_i_nullp(((C_word*)t0)[3]))){
/* srfi-69.scm:194: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[10],C_SCHEME_FALSE,lf[11],((C_word*)t0)[4]);}
else{
t2=C_i_car(((C_word*)t0)[3]);
/* srfi-69.scm:194: ##sys#signal-hook */
t3=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[2],lf[10],t2,lf[11],((C_word*)t0)[4]);}}}

/* doloop1180 in k5398 in hash-table-remove! in k5044 in k2715 in k2710 in k1706 */
static void C_fcall f_5414(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5414,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_set_i_slot(((C_word*)t0)[3],C_fix(2),((C_word*)((C_word*)t0)[4])[1]));}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5427,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(((C_word*)t0)[6],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5440,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t6,a[6]=((C_word*)t0)[7],a[7]=((C_word)li66),tmp=(C_word)a,a+=8,tmp));
t8=((C_word*)t6)[1];
f_5440(t8,t3,C_SCHEME_FALSE,t4);}}

/* ##sys#check-keyword in k1706 */
static void C_ccall f_2105(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_2105r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2105r(t0,t1,t2,t3);}}

static void C_ccall f_2105r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2112,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:193: keyword? */
t5=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k5398 in hash-table-remove! in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_5400(C_word c,C_word t0,C_word t1){
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
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5400,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=t2;
t4=C_block_size(t3);
t5=t4;
t6=C_slot(((C_word*)t0)[2],C_fix(2));
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5414,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t8,a[5]=t10,a[6]=t3,a[7]=((C_word*)t0)[3],a[8]=((C_word)li67),tmp=(C_word)a,a+=9,tmp));
t12=((C_word*)t10)[1];
f_5414(t12,((C_word*)t0)[4],C_fix(0));}

/* fold2 in loop in *hash-table-fold in k5044 in k2715 in k2710 in k1706 */
static void C_fcall f_5959(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_5959,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
/* srfi-69.scm:1099: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_5943(t5,t1,t4,t3);}
else{
t4=C_slot(t2,C_fix(0));
t5=C_slot(t2,C_fix(1));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5987,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=C_slot(t4,C_fix(0));
t9=C_slot(t4,C_fix(1));
/* srfi-69.scm:1102: func */
t10=((C_word*)t0)[5];
((C_proc5)C_fast_retrieve_proc(t10))(5,t10,t7,t8,t9,t3);}}

/* *hash-table-update!/default in k2715 in k2710 in k1706 */
static void C_fcall f_4590(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[24],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4590,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=C_slot(t2,C_fix(2));
t7=C_fixnum_plus(t6,C_fix(1));
t8=t7;
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4670,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t8,a[6]=t4,a[7]=t5,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t10=t9;
t11=t2;
t12=t8;
t13=C_slot(t11,C_fix(1));
t14=t13;
t15=C_slot(t11,C_fix(5));
t16=C_slot(t11,C_fix(6));
t17=t16;
t18=C_block_size(t14);
t19=t18;
t20=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4619,a[2]=t10,a[3]=t11,a[4]=t14,a[5]=t19,a[6]=t12,a[7]=t17,tmp=(C_word)a,a+=8,tmp);
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4663,a[2]=t20,tmp=(C_word)a,a+=3,tmp);
t22=C_a_i_times(&a,2,t19,t15);
/* srfi-69.scm:664: floor */
t23=*((C_word*)lf[86]+1);
((C_proc3)(void*)(*((C_word*)t23+1)))(3,t23,t21,t22);}

/* k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_5046(C_word c,C_word t0,C_word t1){
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
C_word ab[63],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5046,2,t0,t1);}
t2=C_mutate2((C_word*)lf[93]+1 /* (set! hash-table-ref ...) */,t1);
t3=*((C_word*)lf[39]+1);
t4=C_mutate2((C_word*)lf[94]+1 /* (set! hash-table-ref/default ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5048,a[2]=t3,a[3]=((C_word)li59),tmp=(C_word)a,a+=4,tmp));
t5=*((C_word*)lf[39]+1);
t6=C_mutate2((C_word*)lf[95]+1 /* (set! hash-table-exists? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5154,a[2]=t5,a[3]=((C_word)li62),tmp=(C_word)a,a+=4,tmp));
t7=*((C_word*)lf[39]+1);
t8=C_mutate2((C_word*)lf[96]+1 /* (set! hash-table-delete! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5262,a[2]=t7,a[3]=((C_word)li65),tmp=(C_word)a,a+=4,tmp));
t9=C_mutate2((C_word*)lf[97]+1 /* (set! hash-table-remove! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5393,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[98]+1 /* (set! hash-table-clear! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5489,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2(&lf[100] /* (set! *hash-table-merge! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5505,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[101]+1 /* (set! hash-table-merge! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5573,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2((C_word*)lf[102]+1 /* (set! hash-table-merge ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5585,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate2((C_word*)lf[103]+1 /* (set! hash-table->alist ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5601,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate2((C_word*)lf[104]+1 /* (set! alist->hash-table ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5674,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2((C_word*)lf[105]+1 /* (set! hash-table-keys ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5728,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate2((C_word*)lf[106]+1 /* (set! hash-table-values ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5793,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate2(&lf[107] /* (set! *hash-table-for-each ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5858,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate2(&lf[109] /* (set! *hash-table-fold ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5931,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate2((C_word*)lf[110]+1 /* (set! hash-table-fold ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5997,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate2((C_word*)lf[111]+1 /* (set! hash-table-for-each ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6009,a[2]=((C_word)li97),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate2((C_word*)lf[112]+1 /* (set! hash-table-walk ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6021,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate2((C_word*)lf[113]+1 /* (set! hash-table-map ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6033,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp));
t24=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6056,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t25=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6058,a[2]=((C_word)li101),tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm:1127: ##sys#register-record-printer */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[117]+1)))(4,*((C_word*)lf[117]+1),t24,lf[37],t25);}

/* hash-table-ref/default in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_5048(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5048,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[37],lf[94]);
t6=C_slot(t2,C_fix(1));
t7=t6;
t8=C_slot(t2,C_fix(3));
t9=t8;
t10=C_slot(t2,C_fix(10));
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5064,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=t7,a[5]=t4,a[6]=t3,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t12=C_block_size(t7);
/* srfi-69.scm:880: hash */
t13=t10;
((C_proc4)C_fast_retrieve_proc(t13))(4,t13,t11,t3,t12);}

/* for-each-loop1305 in doloop1300 in *hash-table-for-each in k5044 in k2715 in k2710 in k1706 */
static void C_fcall f_5908(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5908,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5918,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* srfi-69.scm:1081: g1306 */
t5=((C_word*)t0)[3];
f_5878(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* invarg-err in loop in k3702 in k3699 in k3696 in make-hash-table in k2715 in k2710 in k1706 */
static void C_fcall f_3750(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3750,NULL,3,t0,t1,t2);}
/* srfi-69.scm:533: error */
t3=*((C_word*)lf[50]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t1,lf[45],t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3960 in k3957 in k3696 in make-hash-table in k2715 in k2710 in k1706 */
static void C_ccall f_3962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t3);
t5=((C_word*)t0)[5];
f_3701(t5,t4);}

/* k3957 in k3696 in make-hash-table in k2715 in k2710 in k1706 */
static void C_ccall f_3959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3959,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_3701(t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3962,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:516: ##sys#check-closure */
t3=*((C_word*)lf[54]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[45]);}}

/* k4932 in k4926 in k4911 in hash-table-set! in k2715 in k2710 in k1706 */
static void C_ccall f_4934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[92]+1));}

/* loop in k4926 in k4911 in hash-table-set! in k2715 in k2710 in k1706 */
static void C_fcall f_4945(C_word t0,C_word t1,C_word t2){
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
loop:
a=C_alloc(6);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4945,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[4]);
t5=C_i_setslot(((C_word*)t0)[5],((C_word*)t0)[6],t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_set_i_slot(((C_word*)t0)[7],C_fix(2),((C_word*)t0)[8]));}
else{
t3=C_slot(t2,C_fix(0));
t4=C_slot(t3,C_fix(0));
t5=C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_setslot(t3,C_fix(1),((C_word*)t0)[3]));}
else{
t6=C_slot(t2,C_fix(1));
/* srfi-69.scm:825: loop */
t11=t1;
t12=t6;
t1=t11;
t2=t12;
goto loop;}}}

/* k5022 in loop in k4926 in k4911 in hash-table-set! in k2715 in k2710 in k1706 */
static void C_ccall f_5024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_setslot(((C_word*)t0)[3],C_fix(1),((C_word*)t0)[4]));}
else{
t2=C_slot(((C_word*)t0)[5],C_fix(1));
/* srfi-69.scm:835: loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_4994(t3,((C_word*)t0)[2],t2);}}

/* k3980 in k3977 in make-hash-table in k2715 in k2710 in k1706 */
static void C_ccall f_3982(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t3);
t5=((C_word*)t0)[5];
f_3698(t5,t4);}

/* k4911 in hash-table-set! in k2715 in k2710 in k1706 */
static void C_ccall f_4913(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4913,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(10));
t3=C_slot(((C_word*)t0)[2],C_fix(3));
t4=t3;
t5=C_slot(((C_word*)t0)[2],C_fix(1));
t6=t5;
t7=C_block_size(t6);
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4928,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* srfi-69.scm:813: hash */
t9=t2;
((C_proc4)C_fast_retrieve_proc(t9))(4,t9,t8,((C_word*)t0)[5],t7);}

/* k3977 in make-hash-table in k2715 in k2710 in k1706 */
static void C_ccall f_3979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3979,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_3698(t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3982,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:510: ##sys#check-closure */
t3=*((C_word*)lf[54]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[45]);}}

/* k5916 in for-each-loop1305 in doloop1300 in *hash-table-for-each in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_5918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5908(t3,((C_word*)t0)[4],t2);}

/* k4926 in k4911 in hash-table-set! in k2715 in k2710 in k1706 */
static void C_ccall f_4928(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4928,2,t0,t1);}
t2=t1;
t3=C_slot(((C_word*)t0)[2],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4934,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t6=C_eqp(((C_word*)t0)[4],((C_word*)t0)[5]);
if(C_truep(t6)){
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4945,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=t2,a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t8,a[10]=((C_word)li54),tmp=(C_word)a,a+=11,tmp));
t10=((C_word*)t8)[1];
f_4945(t10,t5,t4);}
else{
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4994,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=t2,a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t8,a[10]=((C_word*)t0)[5],a[11]=((C_word)li55),tmp=(C_word)a,a+=12,tmp));
t10=((C_word*)t8)[1];
f_4994(t10,t5,t4);}}

/* hash-table? in k2715 in k2710 in k1706 */
static void C_ccall f_3989(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3989,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[37]));}

/* hash-table-size in k2715 in k2710 in k1706 */
static void C_ccall f_3995(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3995,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[37],lf[73]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(2)));}

/* k4484 in loop in k4430 in k4415 in k4336 in k4333 in k4327 in hash-table-update! in k2715 in k2710 in k1706 */
static void C_ccall f_4486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[2],C_fix(1),t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* k4472 in loop in k4430 in k4415 in k4336 in k4333 in k4327 in hash-table-update! in k2715 in k2710 in k1706 */
static void C_ccall f_4474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:735: func */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],t1);}

/* k5494 in hash-table-clear! in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_5496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_set_i_slot(((C_word*)t0)[3],C_fix(2),C_fix(0)));}

/* hash-table-clear! in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_5489(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5489,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[37],lf[98]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5496,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_slot(t2,C_fix(1));
/* srfi-69.scm:989: vector-fill! */
t6=*((C_word*)lf[99]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,C_SCHEME_END_OF_LIST);}

/* hash-table-equivalence-function in k2715 in k2710 in k1706 */
static void C_ccall f_4004(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4004,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[37],lf[74]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(3)));}

/* hash-table-values in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_5793(C_word c,C_word t0,C_word t1,C_word t2){
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
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5793,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[37],lf[106]);
t4=C_slot(t2,C_fix(1));
t5=t4;
t6=C_block_size(t5);
t7=t6;
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5808,a[2]=t7,a[3]=t5,a[4]=t9,a[5]=((C_word)li87),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_5808(t11,t1,C_fix(0),C_SCHEME_END_OF_LIST);}

/* *hash-table-for-each in k5044 in k2715 in k2710 in k1706 */
static void C_fcall f_5858(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5858,NULL,3,t1,t2,t3);}
t4=C_slot(t2,C_fix(1));
t5=t4;
t6=C_block_size(t5);
t7=t6;
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5870,a[2]=t7,a[3]=t3,a[4]=t5,a[5]=t9,a[6]=((C_word)li91),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_5870(t11,t1,C_fix(0));}

/* k5457 in loop in doloop1180 in k5398 in hash-table-remove! in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_5459(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=(C_truep(((C_word*)t0)[2])?C_i_setslot(((C_word*)t0)[2],C_fix(1),((C_word*)t0)[3]):C_i_setslot(((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[3]));
t3=C_fixnum_difference(((C_word*)((C_word*)t0)[6])[1],C_fix(1));
t4=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t3);
t5=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_TRUE);}
else{
/* srfi-69.scm:983: loop */
t2=((C_word*)((C_word*)t0)[8])[1];
f_5440(t2,((C_word*)t0)[7],((C_word*)t0)[9],((C_word*)t0)[3]);}}

/* loop in doloop1180 in k5398 in hash-table-remove! in k5044 in k2715 in k2710 in k1706 */
static void C_fcall f_5440(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_save_and_reclaim((void*)trf_5440,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=C_slot(t3,C_fix(0));
t5=C_slot(t3,C_fix(1));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5459,a[2]=t2,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t1,a[8]=((C_word*)t0)[5],a[9]=t3,tmp=(C_word)a,a+=10,tmp);
t8=C_slot(t4,C_fix(0));
t9=C_slot(t4,C_fix(1));
/* srfi-69.scm:976: func */
t10=((C_word*)t0)[6];
((C_proc4)C_fast_retrieve_proc(t10))(4,t10,t7,t8,t9);}}

/* k3607 in k3597 in *make-hash-table in k2715 in k2710 in k1706 */
static void C_ccall f_3609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[2],C_fix(10),t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}

/* k4517 in loop in k4430 in k4415 in k4336 in k4333 in k4327 in hash-table-update! in k2715 in k2710 in k1706 */
static void C_ccall f_4519(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4519,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=C_i_setslot(((C_word*)t0)[4],((C_word*)t0)[5],t3);
t5=C_i_set_i_slot(((C_word*)t0)[6],C_fix(2),((C_word*)t0)[7]);
t6=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t1);}

/* loop in k6094 in k6082 in a6073 in k2715 in k2710 in k1706 */
static void C_fcall f_6153(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6153,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
/* srfi-69.scm:865: def */
t3=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t1);}
else{
t3=C_slot(t2,C_fix(0));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6172,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t6=C_slot(t4,C_fix(0));
/* srfi-69.scm:867: test */
t7=((C_word*)t0)[4];
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t5,((C_word*)t0)[5],t6);}}

/* k5425 in doloop1180 in k5398 in hash-table-remove! in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_5427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5414(t3,((C_word*)t0)[4],t2);}

/* k4535 in loop in k4430 in k4415 in k4336 in k4333 in k4327 in hash-table-update! in k2715 in k2710 in k1706 */
static void C_ccall f_4537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:748: func */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],t1);}

/* k6170 in loop in k6094 in k6082 in a6073 in k2715 in k2710 in k1706 */
static void C_ccall f_6172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_slot(((C_word*)t0)[3],C_fix(1)));}
else{
t2=C_slot(((C_word*)t0)[4],C_fix(1));
/* srfi-69.scm:869: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_6153(t3,((C_word*)t0)[2],t2);}}

/* loop in k4430 in k4415 in k4336 in k4333 in k4327 in hash-table-update! in k2715 in k2710 in k1706 */
static void C_fcall f_4509(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4509,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4519,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4537,a[2]=((C_word*)t0)[8],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:748: thunk */
t5=((C_word*)t0)[9];
((C_proc2)C_fast_retrieve_proc(t5))(2,t5,t4);}
else{
t3=C_slot(t2,C_fix(0));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4546,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[8],a[5]=t2,a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
t6=C_slot(t4,C_fix(0));
/* srfi-69.scm:753: test */
t7=((C_word*)t0)[11];
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t5,((C_word*)t0)[2],t6);}}

/* loop in hash-table-values in k5044 in k2715 in k2710 in k1706 */
static void C_fcall f_5808(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5808,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_slot(((C_word*)t0)[3],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5824,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t6,a[5]=((C_word)li86),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_5824(t8,t1,t4,t3);}}

/* hash-table-keys in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_5728(C_word c,C_word t0,C_word t1,C_word t2){
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
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5728,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[37],lf[105]);
t4=C_slot(t2,C_fix(1));
t5=t4;
t6=C_block_size(t5);
t7=t6;
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5743,a[2]=t7,a[3]=t5,a[4]=t9,a[5]=((C_word)li84),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_5743(t11,t1,C_fix(0),C_SCHEME_END_OF_LIST);}

/* k5701 in k5679 in alist->hash-table in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_5703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k5713 in for-each-loop1247 in k5679 in alist->hash-table in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_5715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5705(t3,((C_word*)t0)[4],t2);}

/* for-each-loop1247 in k5679 in alist->hash-table in k5044 in k2715 in k2710 in k1706 */
static void C_fcall f_5705(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5705,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5715,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* srfi-69.scm:1034: g1248 */
t5=((C_word*)t0)[3];
f_5682(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3696 in make-hash-table in k2715 in k2710 in k1706 */
static void C_fcall f_3698(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3698,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3701,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[12])[1]))){
t3=t2;
f_3701(t3,C_SCHEME_UNDEFINED);}
else{
t3=C_i_car(((C_word*)((C_word*)t0)[12])[1]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3959,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[12],tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:515: keyword? */
t6=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}}

/* k4547 in k4544 in loop in k4430 in k4415 in k4336 in k4333 in k4327 in hash-table-update! in k2715 in k2710 in k1706 */
static void C_ccall f_4549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[2],C_fix(1),t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* k4544 in loop in k4430 in k4415 in k4336 in k4333 in k4327 in hash-table-update! in k2715 in k2710 in k1706 */
static void C_ccall f_4546(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4546,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4549,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(1));
/* srfi-69.scm:754: func */
t4=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t2,t3);}
else{
t2=C_slot(((C_word*)t0)[5],C_fix(1));
/* srfi-69.scm:757: loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_4509(t3,((C_word*)t0)[3],t2);}}

/* k4364 in k4336 in k4333 in k4327 in hash-table-update! in k2715 in k2710 in k1706 */
static void C_fcall f_4366(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4366,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4377,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4402,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_a_i_times(&a,2,((C_word*)t0)[5],((C_word*)t0)[7]);
/* srfi-69.scm:665: floor */
t6=*((C_word*)lf[86]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* loop in hash-table-keys in k5044 in k2715 in k2710 in k1706 */
static void C_fcall f_5743(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5743,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_slot(((C_word*)t0)[3],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5759,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t6,a[5]=((C_word)li83),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_5759(t8,t1,t4,t3);}}

/* k4683 in k4668 in *hash-table-update!/default in k2715 in k2710 in k1706 */
static void C_ccall f_4685(C_word c,C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4685,2,t0,t1);}
t2=t1;
t3=C_slot(((C_word*)t0)[2],t2);
t4=t3;
t5=C_eqp(((C_word*)t0)[3],((C_word*)t0)[4]);
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4699,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t7,a[11]=((C_word)li50),tmp=(C_word)a,a+=12,tmp));
t9=((C_word*)t7)[1];
f_4699(t9,((C_word*)t0)[10],t4);}
else{
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4758,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t7,a[11]=((C_word*)t0)[4],a[12]=((C_word)li51),tmp=(C_word)a,a+=13,tmp));
t9=((C_word*)t7)[1];
f_4758(t9,((C_word*)t0)[10],t4);}}

/* loop2 in loop in hash-table-keys in k5044 in k2715 in k2710 in k1706 */
static void C_fcall f_5759(C_word t0,C_word t1,C_word t2,C_word t3){
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
loop:
a=C_alloc(3);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5759,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
/* srfi-69.scm:1054: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_5743(t5,t1,t4,t3);}
else{
t4=C_slot(t2,C_fix(1));
t5=C_slot(t2,C_fix(0));
t6=C_slot(t5,C_fix(0));
t7=C_a_i_cons(&a,2,t6,t3);
/* srfi-69.scm:1055: loop2 */
t10=t1;
t11=t4;
t12=t7;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}

/* loop2 in loop in hash-table-values in k5044 in k2715 in k2710 in k1706 */
static void C_fcall f_5824(C_word t0,C_word t1,C_word t2,C_word t3){
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
loop:
a=C_alloc(3);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5824,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
/* srfi-69.scm:1069: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_5808(t5,t1,t4,t3);}
else{
t4=C_slot(t2,C_fix(1));
t5=C_slot(t2,C_fix(0));
t6=C_slot(t5,C_fix(1));
t7=C_a_i_cons(&a,2,t6,t3);
/* srfi-69.scm:1070: loop2 */
t10=t1;
t11=t4;
t12=t7;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}

/* make-hash-table in k2715 in k2710 in k1706 */
static void C_ccall f_3620(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+48)){
C_save_and_reclaim((void*)tr2r,(void*)f_3620r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3620r(t0,t1,t2);}}

static void C_ccall f_3620r(C_word t0,C_word t1,C_word t2){
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
C_word *a=C_alloc(48);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=*((C_word*)lf[41]+1);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_fix(307);
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=lf[46];
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=lf[47];
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3622,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
t18=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3698,a[2]=t10,a[3]=t8,a[4]=t1,a[5]=t6,a[6]=t14,a[7]=t16,a[8]=t12,a[9]=t17,a[10]=((C_word*)t0)[7],a[11]=t2,a[12]=t4,tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_i_nullp(((C_word*)t4)[1]))){
t19=t18;
f_3698(t19,C_SCHEME_UNDEFINED);}
else{
t19=C_i_car(((C_word*)t4)[1]);
t20=t19;
t21=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3979,a[2]=t18,a[3]=t6,a[4]=t20,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:509: keyword? */
t22=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t22+1)))(3,t22,t21,t20);}}

/* hash-for-test in make-hash-table in k2715 in k2710 in k1706 */
static C_word C_fcall f_3622(C_word t0){
C_word tmp;
C_word t1;
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
C_stack_overflow_check;
t1=C_eqp(((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t2=(C_truep(t1)?t1:C_eqp(*((C_word*)lf[39]+1),((C_word*)((C_word*)t0)[3])[1]));
if(C_truep(t2)){
return(((C_word*)t0)[4]);}
else{
t3=C_eqp(((C_word*)t0)[5],((C_word*)((C_word*)t0)[3])[1]);
t4=(C_truep(t3)?t3:C_eqp(*((C_word*)lf[40]+1),((C_word*)((C_word*)t0)[3])[1]));
if(C_truep(t4)){
return(((C_word*)t0)[6]);}
else{
t5=C_eqp(((C_word*)t0)[7],((C_word*)((C_word*)t0)[3])[1]);
t6=(C_truep(t5)?t5:C_eqp(*((C_word*)lf[41]+1),((C_word*)((C_word*)t0)[3])[1]));
if(C_truep(t6)){
return(((C_word*)t0)[8]);}
else{
t7=C_eqp(((C_word*)t0)[9],((C_word*)((C_word*)t0)[3])[1]);
t8=(C_truep(t7)?t7:C_eqp(*((C_word*)lf[42]+1),((C_word*)((C_word*)t0)[3])[1]));
if(C_truep(t8)){
return(((C_word*)t0)[10]);}
else{
t9=C_eqp(((C_word*)t0)[11],((C_word*)((C_word*)t0)[3])[1]);
t10=(C_truep(t9)?t9:C_eqp(*((C_word*)lf[43]+1),((C_word*)((C_word*)t0)[3])[1]));
if(C_truep(t10)){
return(((C_word*)t0)[12]);}
else{
t11=C_eqp(((C_word*)t0)[13],((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t11)){
return((C_truep(t11)?((C_word*)t0)[14]:C_SCHEME_FALSE));}
else{
t12=C_eqp(*((C_word*)lf[44]+1),((C_word*)((C_word*)t0)[3])[1]);
return((C_truep(t12)?((C_word*)t0)[14]:C_SCHEME_FALSE));}}}}}}}

/* k2605 in eqv?-hash in k1706 */
static void C_ccall f_2607(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(t1));}

/* *hash-table-copy in k2715 in k2710 in k1706 */
static void C_fcall f_4190(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4190,NULL,2,t1,t2);}
t3=C_slot(t2,C_fix(1));
t4=t3;
t5=C_block_size(t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4200,a[2]=t2,a[3]=t1,a[4]=t6,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:677: make-vector */
t8=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,t6,C_SCHEME_END_OF_LIST);}

/* eqv?-hash in k1706 */
static void C_ccall f_2635(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_2635r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2635r(t0,t1,t2,t3);}}

static void C_ccall f_2635r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(7);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_fix(536870912):C_i_car(t3));
t6=t5;
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?lf[0]:C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_check_exact_2(t6,lf[16]);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2683,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnump(t2))){
t15=t14;
f_2683(2,t15,C_fixnum_xor(t2,t10));}
else{
if(C_truep(C_charp(t2))){
t15=C_fix(C_character_code(t2));
t16=t14;
f_2683(2,t16,C_fixnum_xor(t15,t10));}
else{
switch(t2){
case C_SCHEME_TRUE:
t15=t14;
f_2683(2,t15,C_fixnum_xor(C_fix(256),t10));
case C_SCHEME_FALSE:
t15=t14;
f_2683(2,t15,C_fixnum_xor(C_fix(257),t10));
default:
if(C_truep(C_i_nullp(t2))){
t15=t14;
f_2683(2,t15,C_fixnum_xor(C_fix(258),t10));}
else{
if(C_truep(C_eofp(t2))){
t15=t14;
f_2683(2,t15,C_fixnum_xor(C_fix(259),t10));}
else{
if(C_truep(C_i_symbolp(t2))){
t15=C_slot(t2,C_fix(1));
t16=t14;
f_2683(2,t16,C_u_i_string_hash(t15,t10));}
else{
if(C_truep(C_i_numberp(t2))){
t15=t14;
if(C_truep(C_i_flonump(t2))){
t16=C_subbyte(t2,C_fix(7));
t17=C_subbyte(t2,C_fix(6));
t18=C_subbyte(t2,C_fix(5));
t19=C_subbyte(t2,C_fix(4));
t20=C_subbyte(t2,C_fix(3));
t21=C_subbyte(t2,C_fix(2));
t22=C_subbyte(t2,C_fix(1));
t23=C_subbyte(t2,C_fix(0));
t24=C_fixnum_shift_left(t23,C_fix(1));
t25=C_fixnum_plus(t22,t24);
t26=C_fixnum_shift_left(t25,C_fix(1));
t27=C_fixnum_plus(t21,t26);
t28=C_fixnum_shift_left(t27,C_fix(1));
t29=C_fixnum_plus(t20,t28);
t30=C_fixnum_shift_left(t29,C_fix(1));
t31=C_fixnum_plus(t19,t30);
t32=C_fixnum_shift_left(t31,C_fix(1));
t33=C_fixnum_plus(t18,t32);
t34=C_fixnum_shift_left(t33,C_fix(1));
t35=C_fixnum_plus(t17,t34);
t36=C_fixnum_shift_left(t35,C_fix(1));
t37=C_fixnum_plus(t16,t36);
t38=t15;
((C_proc2)(void*)(*((C_word*)t38+1)))(2,t38,C_fixnum_times(C_fix(331804471),t37));}
else{
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2607,a[2]=t15,tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm:148: ##sys#number-hash-hook */
t17=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t17+1)))(4,t17,t16,t2,t10);}}
else{
if(C_truep(C_blockp(t2))){
/* srfi-69.scm:168: *equal?-hash */
f_2719(t14,t2,t10);}
else{
t15=t14;
f_2683(2,t15,C_fixnum_xor(C_fix(262),t10));}}}}}}}}}

/* loop in k4683 in k4668 in *hash-table-update!/default in k2715 in k2710 in k1706 */
static void C_fcall f_4699(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(9);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4699,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4709,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* srfi-69.scm:774: func */
t4=((C_word*)t0)[8];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[9]);}
else{
t3=C_slot(t2,C_fix(0));
t4=t3;
t5=C_slot(t4,C_fix(0));
t6=C_eqp(((C_word*)t0)[2],t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4735,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t8=C_slot(t4,C_fix(1));
/* srfi-69.scm:780: func */
t9=((C_word*)t0)[8];
((C_proc3)C_fast_retrieve_proc(t9))(3,t9,t7,t8);}
else{
t7=C_slot(t2,C_fix(1));
/* srfi-69.scm:783: loop */
t12=t1;
t13=t7;
t1=t12;
t2=t13;
goto loop;}}}

/* k3261 in string-hash in k2715 in k2710 in k1706 */
static void C_ccall f_3263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
t2=C_u_i_string_hash(t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
t4=C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM);
t5=C_fixnum_lessp(t2,C_fix(0));
t6=(C_truep(t5)?C_fixnum_negate(t2):t2);
t7=C_fixnum_and(t4,t6);
t8=t3;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_fixnum_modulo(t7,((C_word*)t0)[4]));}

/* k4175 in k4172 in k4169 in hash-table-resize! in k2715 in k2710 in k1706 */
static void C_ccall f_4177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_setslot(((C_word*)t0)[3],C_fix(1),((C_word*)t0)[4]));}

/* k4172 in k4169 in hash-table-resize! in k2715 in k2710 in k1706 */
static void C_ccall f_4174(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4174,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4177,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(((C_word*)t0)[3],C_fix(10));
t5=((C_word*)t0)[4];
t6=t2;
t7=t4;
t8=C_block_size(t5);
t9=t8;
t10=C_block_size(t6);
t11=t10;
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4097,a[2]=t9,a[3]=t13,a[4]=t5,a[5]=t6,a[6]=t7,a[7]=t11,a[8]=((C_word)li40),tmp=(C_word)a,a+=9,tmp));
t15=((C_word*)t13)[1];
f_4097(t15,t3,C_fix(0));}

/* k4169 in hash-table-resize! in k2715 in k2710 in k1706 */
static void C_ccall f_4171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4171,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4174,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:653: make-vector */
t3=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,C_SCHEME_END_OF_LIST);}

/* f_6194 in a6073 in k2715 in k2710 in k1706 */
static void C_ccall f_6194(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6194,2,t0,t1);}
/* srfi-69.scm:844: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,t1,lf[87],lf[93],lf[118],((C_word*)t0)[2],((C_word*)t0)[3]);}

/* a5694 in g1248 in k5679 in alist->hash-table in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_5695(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5695,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3200 in equal?-hash in k2715 in k2710 in k1706 */
static void C_ccall f_3202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM);
t4=C_fixnum_lessp(t1,C_fix(0));
t5=(C_truep(t4)?C_fixnum_negate(t1):t1);
t6=C_fixnum_and(t3,t5);
t7=t2;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_fixnum_modulo(t6,((C_word*)t0)[3]));}

/* g1248 in k5679 in alist->hash-table in k5044 in k2715 in k2710 in k1706 */
static void C_fcall f_5682(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5682,NULL,3,t0,t1,t2);}
t3=C_i_check_pair_2(t2,lf[104]);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5695,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp);
t6=C_slot(t2,C_fix(1));
/* srfi-69.scm:1038: *hash-table-update!/default */
t7=lf[89];
f_4590(t7,t1,((C_word*)t0)[2],t4,t5,t6);}

/* k5679 in alist->hash-table in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_5681(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5681,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5682,a[2]=t2,a[3]=((C_word)li80),tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[2];
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5703,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5705,a[2]=t7,a[3]=t3,a[4]=((C_word)li81),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_5705(t9,t5,t4);}

/* alist->hash-table in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_5674(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_5674r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5674r(t0,t1,t2,t3);}}

static void C_ccall f_5674r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=C_i_check_list_2(t2,lf[104]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5681,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_apply(4,0,t5,*((C_word*)lf[45]+1),t3);}

/* string-hash in k2715 in k2710 in k1706 */
static void C_ccall f_3229(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr3r,(void*)f_3229r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3229r(t0,t1,t2,t3);}}

static void C_ccall f_3229r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(11);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_fix(536870912):C_i_car(t3));
t6=t5;
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=t10;
t12=C_i_nullp(t8);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t14=C_i_nullp(t13);
t15=(C_truep(t14)?C_SCHEME_FALSE:C_i_car(t13));
t16=C_i_nullp(t13);
t17=(C_truep(t16)?C_SCHEME_END_OF_LIST:C_i_cdr(t13));
t18=C_i_nullp(t17);
t19=(C_truep(t18)?lf[0]:C_i_car(t17));
t20=t19;
t21=C_i_nullp(t17);
t22=(C_truep(t21)?C_SCHEME_END_OF_LIST:C_i_cdr(t17));
t23=C_i_check_string_2(t2,lf[24]);
t24=C_i_check_exact_2(t6,lf[24]);
t25=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3263,a[2]=t20,a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t11)){
t26=(C_truep(t15)?t15:C_block_size(t2));
t27=t26;
t28=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3303,a[2]=t25,a[3]=t2,a[4]=t11,a[5]=t27,tmp=(C_word)a,a+=6,tmp);
t29=C_block_size(t2);
/* srfi-69.scm:360: ##sys#check-range */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(6,*((C_word*)lf[26]+1),t28,t11,C_fix(0),t29,lf[24]);}
else{
t26=t25;
f_3263(2,t26,t2);}}

/* k1989 in object-uid-hash in k1706 */
static void C_ccall f_1991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM);
t4=C_fixnum_lessp(t1,C_fix(0));
t5=(C_truep(t4)?C_fixnum_negate(t1):t1);
t6=C_fixnum_and(t3,t5);
t7=t2;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_fixnum_modulo(t6,((C_word*)t0)[3]));}

/* k3931 in k3925 in k3699 in k3696 in make-hash-table in k2715 in k2710 in k1706 */
static void C_ccall f_3933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_i_fixnum_min(C_fix(1073741823),((C_word*)t0)[2]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t5=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t4);
t6=((C_word*)t0)[5];
f_3704(t6,t5);}

/* k4300 in copy-loop in doloop891 in k4198 in *hash-table-copy in k2715 in k2710 in k1706 */
static void C_ccall f_4302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4302,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k3925 in k3699 in k3696 in make-hash-table in k2715 in k2710 in k1706 */
static void C_ccall f_3927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3927,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_3704(t3,t2);}
else{
t2=C_i_check_exact_2(((C_word*)t0)[3],lf[45]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3933,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_lessp(C_fix(0),((C_word*)t0)[3]))){
t4=t3;
f_3933(2,t4,C_SCHEME_UNDEFINED);}
else{
/* srfi-69.scm:524: error */
t4=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[45],lf[71],((C_word*)t0)[3]);}}}

/* hash-table-copy in k2715 in k2710 in k1706 */
static void C_ccall f_4316(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4316,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[37],lf[84]);
/* srfi-69.scm:701: *hash-table-copy */
f_4190(t1,t2);}

/* k4327 in hash-table-update! in k2715 in k2710 in k1706 */
static void C_fcall f_4329(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4329,NULL,2,t0,t1);}
t2=t1;
t3=C_i_check_structure_2(((C_word*)t0)[2],lf[37],lf[85]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4335,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* srfi-69.scm:721: ##sys#check-closure */
t5=*((C_word*)lf[54]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[5],lf[85]);}

/* hash-table-update! in k2715 in k2710 in k1706 */
static void C_ccall f_4325(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr5r,(void*)f_4325r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_4325r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_4325r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(12);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4329,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t4,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_nullp(t5))){
t7=C_slot(t2,C_fix(9));
if(C_truep(t7)){
t8=t6;
f_4329(t8,t7);}
else{
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4581,a[2]=t3,a[3]=t2,a[4]=((C_word)li48),tmp=(C_word)a,a+=5,tmp);
t9=t6;
f_4329(t9,t8);}}
else{
t7=t6;
f_4329(t7,C_i_car(t5));}}

/* k4333 in k4327 in hash-table-update! in k2715 in k2710 in k1706 */
static void C_ccall f_4335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4335,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4338,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* srfi-69.scm:722: ##sys#check-closure */
t3=*((C_word*)lf[54]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[6],lf[85]);}

/* k4336 in k4333 in k4327 in hash-table-update! in k2715 in k2710 in k1706 */
static void C_ccall f_4338(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4338,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_fixnum_plus(t2,C_fix(1));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4417,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t6=t5;
t7=((C_word*)t0)[2];
t8=t4;
t9=C_slot(t7,C_fix(1));
t10=t9;
t11=C_slot(t7,C_fix(5));
t12=C_slot(t7,C_fix(6));
t13=t12;
t14=C_block_size(t10);
t15=t14;
t16=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4366,a[2]=t6,a[3]=t7,a[4]=t10,a[5]=t15,a[6]=t8,a[7]=t13,tmp=(C_word)a,a+=8,tmp);
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4410,a[2]=t16,tmp=(C_word)a,a+=3,tmp);
t18=C_a_i_times(&a,2,t15,t11);
/* srfi-69.scm:664: floor */
t19=*((C_word*)lf[86]+1);
((C_proc3)(void*)(*((C_word*)t19+1)))(3,t19,t17,t18);}

/* k3061 in k3073 in g525 in recursive-hash in *equal?-hash in k2715 in k2710 in k1706 */
static void C_ccall f_3063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fixnum_plus(((C_word*)t0)[3],t1));}

/* loop in hash-table->alist in k5044 in k2715 in k2710 in k1706 */
static void C_fcall f_5616(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5616,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_slot(((C_word*)t0)[3],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5632,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t6,a[5]=((C_word)li76),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_5632(t8,t1,t4,t3);}}

/* hash-table->alist in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_5601(C_word c,C_word t0,C_word t1,C_word t2){
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
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5601,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[37],lf[103]);
t4=C_slot(t2,C_fix(1));
t5=t4;
t6=C_block_size(t5);
t7=t6;
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5616,a[2]=t7,a[3]=t5,a[4]=t9,a[5]=((C_word)li77),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_5616(t11,t1,C_fix(0),C_SCHEME_END_OF_LIST);}

/* k4454 in loop in k4430 in k4415 in k4336 in k4333 in k4327 in hash-table-update! in k2715 in k2710 in k1706 */
static void C_ccall f_4456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4456,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=C_i_setslot(((C_word*)t0)[4],((C_word*)t0)[5],t3);
t5=C_i_set_i_slot(((C_word*)t0)[6],C_fix(2),((C_word*)t0)[7]);
t6=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t1);}

/* loop in hash-table-canonical-length in k2715 in k2710 in k1706 */
static C_word C_fcall f_3519(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:
t2=C_slot(t1,C_fix(0));
t3=C_slot(t1,C_fix(1));
t4=C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]);
if(C_truep(t4)){
if(C_truep(t4)){
return(t2);}
else{
t6=t3;
t1=t6;
goto loop;}}
else{
if(C_truep(C_i_nullp(t3))){
return(t2);}
else{
t6=t3;
t1=t6;
goto loop;}}}

/* hash-table-canonical-length in k2715 in k2710 in k1706 */
static void C_fcall f_3513(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3513,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3519,a[2]=t3,a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_3519(t4,t2));}

/* k3073 in g525 in recursive-hash in *equal?-hash in k2715 in k2710 in k1706 */
static void C_ccall f_3075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3075,2,t0,t1);}
t2=C_fixnum_shift_left(t1,C_fix(16));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3063,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* srfi-69.scm:291: recursive-hash */
t7=((C_word*)((C_word*)t0)[5])[1];
f_2795(t7,t4,t5,t6,((C_word*)t0)[6]);}

/* hash-table-weak-keys in k2715 in k2710 in k1706 */
static void C_ccall f_4040(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4040,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[37],lf[78]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(7)));}

/* hash-table-weak-values in k2715 in k2710 in k1706 */
static void C_ccall f_4049(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4049,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[37],lf[79]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(8)));}

/* hash-table-hash-function in k2715 in k2710 in k1706 */
static void C_ccall f_4013(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4013,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[37],lf[75]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(4)));}

/* a6216 in k1706 */
static void C_ccall f_6217(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6217,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6224,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnump(t2))){
t4=t2;
t5=t3;
f_6224(t5,C_fixnum_greaterp(t4,C_fix(0)));}
else{
t4=t3;
f_6224(t4,C_SCHEME_FALSE);}}

/* k6208 in a6202 in k2710 in k1706 */
static void C_fcall f_6210(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=C_mutate2((C_word*)lf[19]+1 /* (set! *recursive-hash-max-length* ...) */,((C_word*)t0)[2]);
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=*((C_word*)lf[19]+1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,*((C_word*)lf[19]+1));}}

/* k6222 in a6216 in k1706 */
static void C_fcall f_6224(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=C_mutate2((C_word*)lf[17]+1 /* (set! *recursive-hash-max-depth* ...) */,((C_word*)t0)[2]);
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=*((C_word*)lf[17]+1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,*((C_word*)lf[17]+1));}}

/* loop2 in loop in hash-table->alist in k5044 in k2715 in k2710 in k1706 */
static void C_fcall f_5632(C_word t0,C_word t1,C_word t2,C_word t3){
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
loop:
a=C_alloc(6);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5632,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
/* srfi-69.scm:1026: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_5616(t5,t1,t4,t3);}
else{
t4=C_slot(t2,C_fix(1));
t5=C_slot(t2,C_fix(0));
t6=C_slot(t5,C_fix(0));
t7=C_slot(t5,C_fix(1));
t8=C_a_i_cons(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,t3);
/* srfi-69.scm:1027: loop2 */
t12=t1;
t13=t4;
t14=t9;
t1=t12;
t2=t13;
t3=t14;
goto loop;}}

/* loop in k5276 in hash-table-delete! in k5044 in k2715 in k2710 in k1706 */
static C_word C_fcall f_5298(C_word t0,C_word t1,C_word t2){
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
C_stack_overflow_check;
loop:
if(C_truep(C_i_nullp(t2))){
return(C_SCHEME_FALSE);}
else{
t3=C_slot(t2,C_fix(0));
t4=C_slot(t2,C_fix(1));
t5=C_slot(t3,C_fix(0));
t6=C_eqp(((C_word*)t0)[2],t5);
if(C_truep(t6)){
t7=(C_truep(t1)?C_i_setslot(t1,C_fix(1),t4):C_i_setslot(((C_word*)t0)[3],((C_word*)t0)[4],t4));
t8=C_i_set_i_slot(((C_word*)t0)[5],C_fix(2),((C_word*)t0)[6]);
return(C_SCHEME_TRUE);}
else{
t10=t2;
t11=t4;
t1=t10;
t2=t11;
goto loop;}}}

/* hash-table-max-load in k2715 in k2710 in k1706 */
static void C_ccall f_4031(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4031,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[37],lf[77]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(6)));}

/* doloop891 in k4198 in *hash-table-copy in k2715 in k2710 in k1706 */
static void C_fcall f_4219(C_word t0,C_word t1,C_word t2){
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
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4219,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_slot(((C_word*)t0)[3],C_fix(3));
t4=C_slot(((C_word*)t0)[3],C_fix(4));
t5=C_slot(((C_word*)t0)[3],C_fix(2));
t6=C_slot(((C_word*)t0)[3],C_fix(5));
t7=C_slot(((C_word*)t0)[3],C_fix(6));
t8=C_slot(((C_word*)t0)[3],C_fix(9));
/* srfi-69.scm:680: *make-hash-table */
f_3595(t1,t3,t4,t5,t6,t7,t8,C_a_i_list(&a,1,((C_word*)t0)[4]));}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4275,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[6],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4281,a[2]=t6,a[3]=((C_word)li42),tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_4281(t8,t3,t4);}}

/* k3576 in k3573 */
static void C_ccall f_3578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_fixnum_lessp(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(C_truep(t2)?C_fixnum_greater_or_equal_p(((C_word*)t0)[2],C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[2]);}
else{
/* srfi-69.scm:442: ##sys#signal-hook */
t4=*((C_word*)lf[4]+1);
((C_proc8)(void*)(*((C_word*)t4+1)))(8,t4,((C_word*)t0)[4],lf[33],lf[23],lf[34],((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[5]);}}

/* k3573 */
static void C_ccall f_3575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3575,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3578,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:439: ##sys#check-exact */
t4=*((C_word*)lf[35]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,lf[23],((C_word*)t0)[4]);}

/* f_3571 in *make-hash-function in k2715 in k2710 in k1706 */
static void C_ccall f_3571(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3571,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3575,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:438: user-function */
t5=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t4,t2,t3);}

/* hash-table-has-initial? in k2715 in k2710 in k1706 */
static void C_ccall f_4058(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4058,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[37],lf[80]);
t4=C_slot(t2,C_fix(9));
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?C_SCHEME_TRUE:C_SCHEME_FALSE));}

/* f_3566 in *make-hash-function in k2715 in k2710 in k1706 */
static void C_ccall f_3566(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3566,4,t0,t1,t2,t3);}
/* srfi-69.scm:436: user-function */
t4=((C_word*)t0)[2];
((C_proc5)C_fast_retrieve_proc(t4))(5,t4,t1,t2,t3,((C_word*)t0)[3]);}

/* f_3561 in *make-hash-function in k2715 in k2710 in k1706 */
static void C_ccall f_3561(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3561,4,t0,t1,t2,t3);}
/* srfi-69.scm:434: user-function */
t4=((C_word*)t0)[2];
((C_proc7)C_fast_retrieve_proc(t4))(7,t4,t1,t2,t3,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k3402 in string-ci-hash in k2715 in k2710 in k1706 */
static void C_ccall f_3404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
t2=C_u_i_string_ci_hash(t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
t4=C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM);
t5=C_fixnum_lessp(t2,C_fix(0));
t6=(C_truep(t5)?C_fixnum_negate(t2):t2);
t7=C_fixnum_and(t4,t6);
t8=t3;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_fixnum_modulo(t7,((C_word*)t0)[4]));}

/* hash-table-min-load in k2715 in k2710 in k1706 */
static void C_ccall f_4022(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4022,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[37],lf[76]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(5)));}

/* k4896 in k4860 in hash-table-set! in k2715 in k2710 in k1706 */
static void C_ccall f_4898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_immp(t1))){
t2=((C_word*)t0)[2];
f_4873(t2,t1);}
else{
t2=C_i_inexact_to_exact(t1);
t3=((C_word*)t0)[2];
f_4873(t3,t2);}}

/* k4789 in loop in k4683 in k4668 in *hash-table-update!/default in k2715 in k2710 in k1706 */
static void C_ccall f_4791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4791,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4794,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(1));
/* srfi-69.scm:793: func */
t4=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t2,t3);}
else{
t2=C_slot(((C_word*)t0)[5],C_fix(1));
/* srfi-69.scm:796: loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_4758(t3,((C_word*)t0)[3],t2);}}

/* k4792 in k4789 in loop in k4683 in k4668 in *hash-table-update!/default in k2715 in k2710 in k1706 */
static void C_ccall f_4794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[2],C_fix(1),t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* *make-hash-table in k2715 in k2710 in k1706 */
static void C_fcall f_3595(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3595,NULL,8,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3599,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=t6,a[6]=t7,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_nullp(t8))){
/* srfi-69.scm:451: make-vector */
t10=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,t4,C_SCHEME_END_OF_LIST);}
else{
t10=t9;
f_3599(2,t10,C_i_car(t8));}}

/* k3597 in *make-hash-table in k2715 in k2710 in k1706 */
static void C_ccall f_3599(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3599,2,t0,t1);}
t2=C_a_i_record(&a,11,lf[37],t1,C_fix(0),((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[6],C_SCHEME_FALSE);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3609,a[2]=t3,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:454: *make-hash-function */
t5=*((C_word*)lf[32]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}

/* g539 in recursive-hash in *equal?-hash in k2715 in k2710 in k1706 */
static void C_fcall f_3130(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3130,NULL,4,t0,t1,t2,t3);}
t4=C_peek_fixnum(t2,C_fix(0));
/* srfi-69.scm:300: vector-hash */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2722(t5,t1,t2,t4,((C_word*)t0)[3],C_fix(1),t3);}

/* k4617 in *hash-table-update!/default in k2715 in k2710 in k1706 */
static void C_fcall f_4619(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4619,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4630,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4655,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_a_i_times(&a,2,((C_word*)t0)[5],((C_word*)t0)[7]);
/* srfi-69.scm:665: floor */
t6=*((C_word*)lf[86]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* a6202 in k2710 in k1706 */
static void C_ccall f_6203(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6203,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6210,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnump(t2))){
t4=t2;
t5=t3;
f_6210(t5,C_fixnum_greaterp(t4,C_fix(0)));}
else{
t4=t3;
f_6210(t4,C_SCHEME_FALSE);}}

/* string-ci-hash in k2715 in k2710 in k1706 */
static void C_ccall f_3370(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr3r,(void*)f_3370r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3370r(t0,t1,t2,t3);}}

static void C_ccall f_3370r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(11);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_fix(536870912):C_i_car(t3));
t6=t5;
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=t10;
t12=C_i_nullp(t8);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t14=C_i_nullp(t13);
t15=(C_truep(t14)?C_SCHEME_FALSE:C_i_car(t13));
t16=C_i_nullp(t13);
t17=(C_truep(t16)?C_SCHEME_END_OF_LIST:C_i_cdr(t13));
t18=C_i_nullp(t17);
t19=(C_truep(t18)?lf[0]:C_i_car(t17));
t20=t19;
t21=C_i_nullp(t17);
t22=(C_truep(t21)?C_SCHEME_END_OF_LIST:C_i_cdr(t17));
t23=C_i_check_string_2(t2,lf[27]);
t24=C_i_check_exact_2(t6,lf[27]);
t25=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3404,a[2]=t20,a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t11)){
t26=(C_truep(t15)?t15:C_block_size(t2));
t27=t26;
t28=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3444,a[2]=t25,a[3]=t2,a[4]=t11,a[5]=t27,tmp=(C_word)a,a+=6,tmp);
t29=C_block_size(t2);
/* srfi-69.scm:372: ##sys#check-range */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(6,*((C_word*)lf[26]+1),t28,t11,C_fix(0),t29,lf[24]);}
else{
t26=t25;
f_3404(2,t26,t2);}}

/* k2710 in k1706 */
static void C_ccall f_2712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2712,2,t0,t1);}
t2=C_mutate2((C_word*)lf[18]+1 /* (set! recursive-hash-max-depth ...) */,t1);
t3=C_set_block_item(lf[19] /* *recursive-hash-max-length* */,0,C_fix(4));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2717,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6203,a[2]=((C_word)li106),tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm:279: make-parameter */
t6=*((C_word*)lf[121]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,C_fix(4),t5);}

/* k2715 in k2710 in k1706 */
static void C_ccall f_2717(C_word c,C_word t0,C_word t1){
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
C_word t59;
C_word t60;
C_word ab[107],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2717,2,t0,t1);}
t2=C_mutate2((C_word*)lf[20]+1 /* (set! recursive-hash-max-length ...) */,t1);
t3=C_mutate2(&lf[2] /* (set! *equal?-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2719,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[22]+1 /* (set! equal?-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3154,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[23]+1 /* (set! hash ...) */,*((C_word*)lf[22]+1));
t6=C_mutate2((C_word*)lf[24]+1 /* (set! string-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3229,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[27]+1 /* (set! string-ci-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3370,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[28]+1 /* (set! string-hash-ci ...) */,*((C_word*)lf[27]+1));
t9=C_mutate2(&lf[29] /* (set! constant676 ...) */,lf[30]);
t10=C_mutate2(&lf[31] /* (set! hash-table-canonical-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3513,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t11=*((C_word*)lf[14]+1);
t12=*((C_word*)lf[16]+1);
t13=*((C_word*)lf[22]+1);
t14=*((C_word*)lf[23]+1);
t15=*((C_word*)lf[24]+1);
t16=*((C_word*)lf[28]+1);
t17=*((C_word*)lf[3]+1);
t18=*((C_word*)lf[7]+1);
t19=*((C_word*)lf[8]+1);
t20=*((C_word*)lf[13]+1);
t21=C_mutate2((C_word*)lf[32]+1 /* (set! *make-hash-function ...) */,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3543,a[2]=t11,a[3]=t12,a[4]=t13,a[5]=t14,a[6]=t15,a[7]=t16,a[8]=t17,a[9]=t18,a[10]=t19,a[11]=t20,a[12]=((C_word)li23),tmp=(C_word)a,a+=13,tmp));
t22=C_mutate2(&lf[36] /* (set! *make-hash-table ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3595,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t23=*((C_word*)lf[39]+1);
t24=*((C_word*)lf[40]+1);
t25=*((C_word*)lf[41]+1);
t26=*((C_word*)lf[42]+1);
t27=*((C_word*)lf[43]+1);
t28=*((C_word*)lf[44]+1);
t29=*((C_word*)lf[14]+1);
t30=*((C_word*)lf[16]+1);
t31=*((C_word*)lf[22]+1);
t32=*((C_word*)lf[23]+1);
t33=*((C_word*)lf[24]+1);
t34=*((C_word*)lf[28]+1);
t35=*((C_word*)lf[3]+1);
t36=C_mutate2((C_word*)lf[45]+1 /* (set! make-hash-table ...) */,(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3620,a[2]=t23,a[3]=t29,a[4]=t24,a[5]=t30,a[6]=t25,a[7]=t31,a[8]=t26,a[9]=t33,a[10]=t27,a[11]=t34,a[12]=t28,a[13]=t35,a[14]=((C_word)li28),tmp=(C_word)a,a+=15,tmp));
t37=C_mutate2((C_word*)lf[72]+1 /* (set! hash-table? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3989,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate2((C_word*)lf[73]+1 /* (set! hash-table-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3995,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate2((C_word*)lf[74]+1 /* (set! hash-table-equivalence-function ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4004,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate2((C_word*)lf[75]+1 /* (set! hash-table-hash-function ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4013,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t41=C_mutate2((C_word*)lf[76]+1 /* (set! hash-table-min-load ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4022,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t42=C_mutate2((C_word*)lf[77]+1 /* (set! hash-table-max-load ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4031,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t43=C_mutate2((C_word*)lf[78]+1 /* (set! hash-table-weak-keys ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4040,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t44=C_mutate2((C_word*)lf[79]+1 /* (set! hash-table-weak-values ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4049,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t45=C_mutate2((C_word*)lf[80]+1 /* (set! hash-table-has-initial? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4058,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t46=C_mutate2((C_word*)lf[81]+1 /* (set! hash-table-initial ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4070,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t47=C_mutate2((C_word*)lf[82]+1 /* (set! hash-table-resize! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4164,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t48=C_mutate2(&lf[83] /* (set! *hash-table-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4190,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp));
t49=C_mutate2((C_word*)lf[84]+1 /* (set! hash-table-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4316,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t50=*((C_word*)lf[39]+1);
t51=C_mutate2((C_word*)lf[85]+1 /* (set! hash-table-update! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4325,a[2]=t50,a[3]=((C_word)li49),tmp=(C_word)a,a+=4,tmp));
t52=*((C_word*)lf[39]+1);
t53=C_mutate2(&lf[89] /* (set! *hash-table-update!/default ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4590,a[2]=t52,a[3]=((C_word)li52),tmp=(C_word)a,a+=4,tmp));
t54=C_mutate2((C_word*)lf[90]+1 /* (set! hash-table-update!/default ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4818,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));
t55=*((C_word*)lf[39]+1);
t56=C_mutate2((C_word*)lf[91]+1 /* (set! hash-table-set! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4830,a[2]=t55,a[3]=((C_word)li56),tmp=(C_word)a,a+=4,tmp));
t57=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5046,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t58=*((C_word*)lf[39]+1);
t59=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6074,a[2]=t58,a[3]=((C_word)li105),tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:841: getter-with-setter */
t60=*((C_word*)lf[119]+1);
((C_proc5)(void*)(*((C_word*)t60+1)))(5,t60,t57,t59,*((C_word*)lf[91]+1),lf[120]);}

/* *equal?-hash in k2715 in k2710 in k1706 */
static void C_fcall f_2719(C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_save_and_reclaim((void*)trf_2719,NULL,3,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2722,a[2]=t7,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp));
t9=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2795,a[2]=t7,a[3]=t5,a[4]=((C_word)li13),tmp=(C_word)a,a+=5,tmp));
/* srfi-69.scm:343: recursive-hash */
t10=((C_word*)t7)[1];
f_2795(t10,t1,t2,C_fix(0),t3);}

/* k4400 in k4364 in k4336 in k4333 in k4327 in hash-table-update! in k2715 in k2710 in k1706 */
static void C_ccall f_4402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_immp(t1))){
t2=((C_word*)t0)[2];
f_4377(t2,t1);}
else{
t2=C_i_inexact_to_exact(t1);
t3=((C_word*)t0)[2];
f_4377(t3,t2);}}

/* k4201 in k4198 in *hash-table-copy in k2715 in k2710 in k1706 */
static void C_ccall f_4203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_i_setslot(t1,C_fix(2),t2);
t4=C_slot(((C_word*)t0)[2],C_fix(10));
t5=C_i_setslot(t1,C_fix(10),t4);
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t1);}

/* k4198 in *hash-table-copy in k2715 in k2710 in k1706 */
static void C_ccall f_4200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4200,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4203,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4219,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t5,a[6]=((C_word*)t0)[5],a[7]=((C_word)li43),tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_4219(t7,t3,C_fix(0));}

/* k3445 in k3442 in string-ci-hash in k2715 in k2710 in k1706 */
static void C_ccall f_3447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:374: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(5,*((C_word*)lf[25]+1),((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k3442 in string-ci-hash in k2715 in k2710 in k1706 */
static void C_ccall f_3444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3444,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3447,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_block_size(((C_word*)t0)[3]);
/* srfi-69.scm:373: ##sys#check-range */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(6,*((C_word*)lf[26]+1),t2,((C_word*)t0)[5],C_fix(0),t3,lf[24]);}

/* k5362 in loop in k5276 in hash-table-delete! in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_5364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_truep(((C_word*)t0)[2])?C_i_setslot(((C_word*)t0)[2],C_fix(1),((C_word*)t0)[3]):C_i_setslot(((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[3]));
t3=C_i_set_i_slot(((C_word*)t0)[6],C_fix(2),((C_word*)t0)[7]);
t4=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_TRUE);}
else{
/* srfi-69.scm:960: loop */
t2=((C_word*)((C_word*)t0)[9])[1];
f_5345(t2,((C_word*)t0)[8],((C_word*)t0)[10],((C_word*)t0)[3]);}}

/* k4634 in k4628 in k4617 in *hash-table-update!/default in k2715 in k2710 in k1706 */
static void C_fcall f_4636(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* srfi-69.scm:668: hash-table-resize! */
t2=*((C_word*)lf[82]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* equal?-hash in k2715 in k2710 in k1706 */
static void C_ccall f_3154(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_3154r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3154r(t0,t1,t2,t3);}}

static void C_ccall f_3154r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(4);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_fix(536870912):C_i_car(t3));
t6=t5;
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?lf[0]:C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_check_exact_2(t6,lf[23]);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3202,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:348: *equal?-hash */
f_2719(t14,t2,t10);}

/* k4628 in k4617 in *hash-table-update!/default in k2715 in k2710 in k1706 */
static void C_fcall f_4630(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4630,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4636,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[5],C_fix(1073741823)))){
t3=C_fixnum_less_or_equal_p(((C_word*)t0)[6],((C_word*)t0)[7]);
t4=t2;
f_4636(t4,(C_truep(t3)?C_fixnum_less_or_equal_p(((C_word*)t0)[7],t1):C_SCHEME_FALSE));}
else{
t3=t2;
f_4636(t3,C_SCHEME_FALSE);}}

/* k4415 in k4336 in k4333 in k4327 in hash-table-update! in k2715 in k2710 in k1706 */
static void C_ccall f_4417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
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
C_save_and_reclaim((void*)tr2,(void*)f_4417,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(10));
t3=C_slot(((C_word*)t0)[2],C_fix(3));
t4=t3;
t5=C_slot(((C_word*)t0)[2],C_fix(1));
t6=t5;
t7=C_block_size(t6);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4432,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
/* srfi-69.scm:729: hash */
t9=t2;
((C_proc4)C_fast_retrieve_proc(t9))(4,t9,t8,((C_word*)t0)[4],t7);}

/* k4408 in k4336 in k4333 in k4327 in hash-table-update! in k2715 in k2710 in k1706 */
static void C_ccall f_4410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_immp(t1))){
t2=((C_word*)t0)[2];
f_4366(t2,t1);}
else{
t2=C_i_inexact_to_exact(t1);
t3=((C_word*)t0)[2];
f_4366(t3,t2);}}

/* g543 in recursive-hash in *equal?-hash in k2715 in k2710 in k1706 */
static void C_fcall f_3142(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3142,NULL,4,t0,t1,t2,t3);}
/* srfi-69.scm:303: vector-hash */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2722(t4,t1,t2,C_fix(0),((C_word*)t0)[3],C_fix(0),t3);}

/* loop in vector-hash in *equal?-hash in k2715 in k2710 in k1706 */
static void C_fcall f_2739(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2739,NULL,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=t2;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=C_fixnum_shift_left(t2,C_fix(4));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2773,a[2]=t7,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[2],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t9=C_slot(((C_word*)t0)[3],t3);
t10=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* srfi-69.scm:317: recursive-hash */
t11=((C_word*)((C_word*)t0)[5])[1];
f_2795(t11,t8,t9,t10,((C_word*)t0)[6]);}}

/* *make-hash-function in k2715 in k2710 in k1706 */
static void C_ccall f_3543(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[43],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3543,3,t0,t1,t2);}
t3=t2;
t4=C_a_i_list(&a,10,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],((C_word*)t0)[10],((C_word*)t0)[11]);
if(C_truep(C_u_i_memq(t3,t4))){
t5=C_rnd_fix();
t6=t2;
t7=C_a_i_list2(&a,2,((C_word*)t0)[6],((C_word*)t0)[7]);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_truep(C_u_i_memq(t6,t7))?(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3561,a[2]=t2,a[3]=t5,a[4]=((C_word)li20),tmp=(C_word)a,a+=5,tmp):(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3566,a[2]=t2,a[3]=t5,a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp)));}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3571,a[2]=t2,a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k4653 in k4617 in *hash-table-update!/default in k2715 in k2710 in k1706 */
static void C_ccall f_4655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_immp(t1))){
t2=((C_word*)t0)[2];
f_4630(t2,t1);}
else{
t2=C_i_inexact_to_exact(t1);
t3=((C_word*)t0)[2];
f_4630(t3,t2);}}

/* vector-hash in *equal?-hash in k2715 in k2710 in k1706 */
static void C_fcall f_2722(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
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
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2722,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=C_block_size(t2);
t8=C_fixnum_xor(t3,t6);
t9=C_fixnum_plus(t7,t8);
t10=C_i_fixnum_min(*((C_word*)lf[19]+1),t7);
t11=C_i_fixnum_max(t5,t10);
t12=C_fixnum_difference(t11,t5);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2739,a[2]=t14,a[3]=t2,a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=t6,a[7]=((C_word)li8),tmp=(C_word)a,a+=8,tmp));
t16=((C_word*)t14)[1];
f_2739(t16,t1,t9,t5,t12);}

/* k6026 in hash-table-walk in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_6028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:1117: *hash-table-for-each */
f_5858(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k4430 in k4415 in k4336 in k4333 in k4327 in hash-table-update! in k2715 in k2710 in k1706 */
static void C_ccall f_4432(C_word c,C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4432,2,t0,t1);}
t2=t1;
t3=C_slot(((C_word*)t0)[2],t2);
t4=t3;
t5=C_eqp(((C_word*)t0)[3],((C_word*)t0)[4]);
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4446,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t7,a[11]=((C_word)li46),tmp=(C_word)a,a+=12,tmp));
t9=((C_word*)t7)[1];
f_4446(t9,((C_word*)t0)[10],t4);}
else{
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4509,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t7,a[11]=((C_word*)t0)[4],a[12]=((C_word)li47),tmp=(C_word)a,a+=13,tmp));
t9=((C_word*)t7)[1];
f_4509(t9,((C_word*)t0)[10],t4);}}

/* hash-table-walk in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_6021(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6021,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[37],lf[112]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6028,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:1116: ##sys#check-closure */
t6=*((C_word*)lf[54]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t3,lf[112]);}

/* copy-loop in doloop891 in k4198 in *hash-table-copy in k2715 in k2710 in k1706 */
static void C_fcall f_4281(C_word t0,C_word t1,C_word t2){
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
loop:
a=C_alloc(7);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4281,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_slot(t2,C_fix(0));
t4=C_slot(t3,C_fix(0));
t5=C_slot(t3,C_fix(1));
t6=C_a_i_cons(&a,2,t4,t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4302,a[2]=t1,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=C_slot(t2,C_fix(1));
/* srfi-69.scm:692: copy-loop */
t11=t8;
t12=t9;
t1=t11;
t2=t12;
goto loop;}}

/* k4661 in *hash-table-update!/default in k2715 in k2710 in k1706 */
static void C_ccall f_4663(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_immp(t1))){
t2=((C_word*)t0)[2];
f_4619(t2,t1);}
else{
t2=C_i_inexact_to_exact(t1);
t3=((C_word*)t0)[2];
f_4619(t3,t2);}}

/* loop in k4430 in k4415 in k4336 in k4333 in k4327 in hash-table-update! in k2715 in k2710 in k1706 */
static void C_fcall f_4446(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(13);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4446,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4456,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4474,a[2]=((C_word*)t0)[8],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:735: thunk */
t5=((C_word*)t0)[9];
((C_proc2)C_fast_retrieve_proc(t5))(2,t5,t4);}
else{
t3=C_slot(t2,C_fix(0));
t4=t3;
t5=C_slot(t4,C_fix(0));
t6=C_eqp(((C_word*)t0)[2],t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4486,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t8=C_slot(t4,C_fix(1));
/* srfi-69.scm:741: func */
t9=((C_word*)t0)[8];
((C_proc3)C_fast_retrieve_proc(t9))(3,t9,t7,t8);}
else{
t7=C_slot(t2,C_fix(1));
/* srfi-69.scm:744: loop */
t13=t1;
t14=t7;
t1=t13;
t2=t14;
goto loop;}}}

/* loop in k5276 in hash-table-delete! in k5044 in k2715 in k2710 in k1706 */
static void C_fcall f_5345(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5345,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=C_slot(t3,C_fix(0));
t5=C_slot(t3,C_fix(1));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5364,a[2]=t2,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t1,a[9]=((C_word*)t0)[6],a[10]=t3,tmp=(C_word)a,a+=11,tmp);
t8=C_slot(t4,C_fix(0));
/* srfi-69.scm:953: test */
t9=((C_word*)t0)[7];
((C_proc4)C_fast_retrieve_proc(t9))(4,t9,t7,((C_word*)t0)[8],t8);}}

/* k4273 in doloop891 in k4198 in *hash-table-copy in k2715 in k2710 in k1706 */
static void C_ccall f_4275(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_4219(t4,((C_word*)t0)[5],t3);}

/* k4668 in *hash-table-update!/default in k2715 in k2710 in k1706 */
static void C_ccall f_4670(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
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
C_save_and_reclaim((void*)tr2,(void*)f_4670,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(10));
t3=C_slot(((C_word*)t0)[2],C_fix(3));
t4=t3;
t5=C_slot(((C_word*)t0)[2],C_fix(1));
t6=t5;
t7=C_block_size(t6);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4685,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
/* srfi-69.scm:768: hash */
t9=t2;
((C_proc4)C_fast_retrieve_proc(t9))(4,t9,t8,((C_word*)t0)[4],t7);}

/* k3108 in recursive-hash in *equal?-hash in k2715 in k2710 in k1706 */
static void C_ccall f_3110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?C_fixnum_plus(((C_word*)t0)[3],C_fix(260)):C_fixnum_plus(((C_word*)t0)[3],C_fix(261))));}

/* k5168 in hash-table-exists? in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_5170(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5170,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(t2)){
t3=C_slot(((C_word*)t0)[4],t1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5185,a[2]=((C_word*)t0)[5],a[3]=((C_word)li60),tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_5185(t4,t3));}
else{
t3=C_slot(((C_word*)t0)[4],t1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5225,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word)li61),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_5225(t7,((C_word*)t0)[6],t3);}}

/* hash-table-remove! in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_5393(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5393,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[37],lf[97]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5400,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:966: ##sys#check-closure */
t6=*((C_word*)lf[54]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t3,lf[97]);}

/* k2771 in loop in vector-hash in *equal?-hash in k2715 in k2710 in k1706 */
static void C_ccall f_2773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],t1);
t3=C_fixnum_plus(((C_word*)t0)[3],t2);
t4=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t5=C_fixnum_difference(((C_word*)t0)[5],C_fix(1));
/* srfi-69.scm:315: loop */
t6=((C_word*)((C_word*)t0)[6])[1];
f_2739(t6,((C_word*)t0)[7],t3,t4,t5);}

/* k3304 in k3301 in string-hash in k2715 in k2710 in k1706 */
static void C_ccall f_3306(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:362: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(5,*((C_word*)lf[25]+1),((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k3301 in string-hash in k2715 in k2710 in k1706 */
static void C_ccall f_3303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3303,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3306,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_block_size(((C_word*)t0)[3]);
/* srfi-69.scm:361: ##sys#check-range */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(6,*((C_word*)lf[26]+1),t2,((C_word*)t0)[5],C_fix(0),t3,lf[24]);}

/* hash-table-exists? in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_5154(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5154,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[37],lf[95]);
t5=C_slot(t2,C_fix(1));
t6=t5;
t7=C_slot(t2,C_fix(3));
t8=t7;
t9=C_slot(t2,C_fix(10));
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5170,a[2]=((C_word*)t0)[2],a[3]=t8,a[4]=t6,a[5]=t3,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t11=C_block_size(t6);
/* srfi-69.scm:906: hash */
t12=t9;
((C_proc4)C_fast_retrieve_proc(t12))(4,t12,t10,t3,t11);}

/* k2681 in eqv?-hash in k1706 */
static void C_ccall f_2683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM);
t4=C_fixnum_lessp(t1,C_fix(0));
t5=(C_truep(t4)?C_fixnum_negate(t1):t1);
t6=C_fixnum_and(t3,t5);
t7=t2;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_fixnum_modulo(t6,((C_word*)t0)[3]));}

/* loop in k5168 in hash-table-exists? in k5044 in k2715 in k2710 in k1706 */
static C_word C_fcall f_5185(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:
if(C_truep(C_i_nullp(t1))){
return(C_SCHEME_FALSE);}
else{
t2=C_slot(t1,C_fix(0));
t3=C_slot(t2,C_fix(0));
t4=C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
return(t4);}
else{
t5=C_slot(t1,C_fix(1));
t7=t5;
t1=t7;
goto loop;}}}

/* eq?-hash in k1706 */
static void C_ccall f_2323(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2323r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2323r(t0,t1,t2,t3);}}

static void C_ccall f_2323r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(4);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_fix(536870912):C_i_car(t3));
t6=t5;
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?lf[0]:C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_check_exact_2(t6,lf[14]);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2371,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnump(t2))){
t15=t14;
f_2371(2,t15,C_fixnum_xor(t2,t10));}
else{
if(C_truep(C_charp(t2))){
t15=C_fix(C_character_code(t2));
t16=t14;
f_2371(2,t16,C_fixnum_xor(t15,t10));}
else{
switch(t2){
case C_SCHEME_TRUE:
t15=t14;
f_2371(2,t15,C_fixnum_xor(C_fix(256),t10));
case C_SCHEME_FALSE:
t15=t14;
f_2371(2,t15,C_fixnum_xor(C_fix(257),t10));
default:
if(C_truep(C_i_nullp(t2))){
t15=t14;
f_2371(2,t15,C_fixnum_xor(C_fix(258),t10));}
else{
if(C_truep(C_eofp(t2))){
t15=t14;
f_2371(2,t15,C_fixnum_xor(C_fix(259),t10));}
else{
if(C_truep(C_i_symbolp(t2))){
t15=C_slot(t2,C_fix(1));
t16=t14;
f_2371(2,t16,C_u_i_string_hash(t15,t10));}
else{
if(C_truep(C_blockp(t2))){
/* srfi-69.scm:168: *equal?-hash */
f_2719(t14,t2,t10);}
else{
t15=t14;
f_2371(2,t15,C_fixnum_xor(C_fix(262),t10));}}}}}}}}

/* loop in k5168 in hash-table-exists? in k5044 in k2715 in k2710 in k1706 */
static void C_fcall f_5225(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5225,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5238,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=C_slot(t3,C_fix(0));
/* srfi-69.scm:918: test */
t6=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t4,((C_word*)t0)[4],t5);}}

/* g525 in recursive-hash in *equal?-hash in k2715 in k2710 in k1706 */
static void C_fcall f_3051(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3051,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3075,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t5=C_slot(t2,C_fix(0));
t6=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
/* srfi-69.scm:290: recursive-hash */
t7=((C_word*)((C_word*)t0)[3])[1];
f_2795(t7,t4,t5,t6,t3);}

/* k4134 in loop in doloop864 in k4172 in k4169 in hash-table-resize! in k2715 in k2710 in k1706 */
static void C_ccall f_4136(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4136,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_slot(((C_word*)t0)[4],t1);
t5=C_a_i_cons(&a,2,t3,t4);
t6=C_i_setslot(((C_word*)t0)[4],t1,t5);
t7=C_slot(((C_word*)t0)[5],C_fix(1));
/* srfi-69.scm:646: loop */
t8=((C_word*)((C_word*)t0)[6])[1];
f_4120(t8,((C_word*)t0)[7],t7);}

/* k5236 in loop in k5168 in hash-table-exists? in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_5238(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=C_slot(((C_word*)t0)[3],C_fix(1));
/* srfi-69.scm:919: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_5225(t3,((C_word*)t0)[2],t2);}}

/* k2369 in eq?-hash in k1706 */
static void C_ccall f_2371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM);
t4=C_fixnum_lessp(t1,C_fix(0));
t5=(C_truep(t4)?C_fixnum_negate(t1):t1);
t6=C_fixnum_and(t3,t5);
t7=t2;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_fixnum_modulo(t6,((C_word*)t0)[3]));}

/* k4733 in loop in k4683 in k4668 in *hash-table-update!/default in k2715 in k2710 in k1706 */
static void C_ccall f_4735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[2],C_fix(1),t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* hash-table-delete! in k5044 in k2715 in k2710 in k1706 */
static void C_ccall f_5262(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5262,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[37],lf[96]);
t5=C_slot(t2,C_fix(1));
t6=t5;
t7=C_block_size(t6);
t8=C_slot(t2,C_fix(10));
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5278,a[2]=t2,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm:930: hash */
t10=t8;
((C_proc4)C_fast_retrieve_proc(t10))(4,t10,t9,t3,t7);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[244] = {
{"f_4758:srfi_2d69_2escm",(void*)f_4758},
{"f_5987:srfi_2d69_2escm",(void*)f_5987},
{"f_2017:srfi_2d69_2escm",(void*)f_2017},
{"toplevel:srfi_2d69_2escm",(void*)C_srfi_2d69_toplevel},
{"f_4768:srfi_2d69_2escm",(void*)f_4768},
{"f_5278:srfi_2d69_2escm",(void*)f_5278},
{"f_1711:srfi_2d69_2escm",(void*)f_1711},
{"f_1708:srfi_2d69_2escm",(void*)f_1708},
{"f_4994:srfi_2d69_2escm",(void*)f_4994},
{"f_4709:srfi_2d69_2escm",(void*)f_4709},
{"f_1717:srfi_2d69_2escm",(void*)f_1717},
{"f_5997:srfi_2d69_2escm",(void*)f_5997},
{"f_1733:srfi_2d69_2escm",(void*)f_1733},
{"f_4120:srfi_2d69_2escm",(void*)f_4120},
{"f_3829:srfi_2d69_2escm",(void*)f_3829},
{"f_5079:srfi_2d69_2escm",(void*)f_5079},
{"f_3819:srfi_2d69_2escm",(void*)f_3819},
{"f_1906:srfi_2d69_2escm",(void*)f_1906},
{"f_1900:srfi_2d69_2escm",(void*)f_1900},
{"f_5517:srfi_2d69_2escm",(void*)f_5517},
{"f_5064:srfi_2d69_2escm",(void*)f_5064},
{"f_3013:srfi_2d69_2escm",(void*)f_3013},
{"f_3832:srfi_2d69_2escm",(void*)f_3832},
{"f_5134:srfi_2d69_2escm",(void*)f_5134},
{"f_4164:srfi_2d69_2escm",(void*)f_4164},
{"f_5505:srfi_2d69_2escm",(void*)f_5505},
{"f_6111:srfi_2d69_2escm",(void*)f_6111},
{"f_5118:srfi_2d69_2escm",(void*)f_5118},
{"f_3855:srfi_2d69_2escm",(void*)f_3855},
{"f_3852:srfi_2d69_2escm",(void*)f_3852},
{"f_4107:srfi_2d69_2escm",(void*)f_4107},
{"f_3801:srfi_2d69_2escm",(void*)f_3801},
{"f_6045:srfi_2d69_2escm",(void*)f_6045},
{"f_1938:srfi_2d69_2escm",(void*)f_1938},
{"f_6096:srfi_2d69_2escm",(void*)f_6096},
{"f_6040:srfi_2d69_2escm",(void*)f_6040},
{"f_6016:srfi_2d69_2escm",(void*)f_6016},
{"f_4830:srfi_2d69_2escm",(void*)f_4830},
{"f_6065:srfi_2d69_2escm",(void*)f_6065},
{"f_6062:srfi_2d69_2escm",(void*)f_6062},
{"f_2795:srfi_2d69_2escm",(void*)f_2795},
{"f_3707:srfi_2d69_2escm",(void*)f_3707},
{"f_3701:srfi_2d69_2escm",(void*)f_3701},
{"f_3704:srfi_2d69_2escm",(void*)f_3704},
{"f_5899:srfi_2d69_2escm",(void*)f_5899},
{"f_6084:srfi_2d69_2escm",(void*)f_6084},
{"f_6033:srfi_2d69_2escm",(void*)f_6033},
{"f_5599:srfi_2d69_2escm",(void*)f_5599},
{"f_3739:srfi_2d69_2escm",(void*)f_3739},
{"f_6009:srfi_2d69_2escm",(void*)f_6009},
{"f_4825:srfi_2d69_2escm",(void*)f_4825},
{"f_4383:srfi_2d69_2escm",(void*)f_4383},
{"f_3730:srfi_2d69_2escm",(void*)f_3730},
{"f_6004:srfi_2d69_2escm",(void*)f_6004},
{"f_3734:srfi_2d69_2escm",(void*)f_3734},
{"f_6056:srfi_2d69_2escm",(void*)f_6056},
{"f_6058:srfi_2d69_2escm",(void*)f_6058},
{"f_6053:srfi_2d69_2escm",(void*)f_6053},
{"f_5585:srfi_2d69_2escm",(void*)f_5585},
{"f_4873:srfi_2d69_2escm",(void*)f_4873},
{"f_5878:srfi_2d69_2escm",(void*)f_5878},
{"f_5870:srfi_2d69_2escm",(void*)f_5870},
{"f_2131:srfi_2d69_2escm",(void*)f_2131},
{"f_4879:srfi_2d69_2escm",(void*)f_4879},
{"f_5573:srfi_2d69_2escm",(void*)f_5573},
{"f_4377:srfi_2d69_2escm",(void*)f_4377},
{"f_6074:srfi_2d69_2escm",(void*)f_6074},
{"f_5566:srfi_2d69_2escm",(void*)f_5566},
{"f_4818:srfi_2d69_2escm",(void*)f_4818},
{"f_5931:srfi_2d69_2escm",(void*)f_5931},
{"f_3778:srfi_2d69_2escm",(void*)f_3778},
{"f_4862:srfi_2d69_2escm",(void*)f_4862},
{"f_5553:srfi_2d69_2escm",(void*)f_5553},
{"f_2147:srfi_2d69_2escm",(void*)f_2147},
{"f_3767:srfi_2d69_2escm",(void*)f_3767},
{"f_4070:srfi_2d69_2escm",(void*)f_4070},
{"f_3764:srfi_2d69_2escm",(void*)f_3764},
{"f_3760:srfi_2d69_2escm",(void*)f_3760},
{"f_5540:srfi_2d69_2escm",(void*)f_5540},
{"f_4581:srfi_2d69_2escm",(void*)f_4581},
{"f_3710:srfi_2d69_2escm",(void*)f_3710},
{"f_3714:srfi_2d69_2escm",(void*)f_3714},
{"f_5527:srfi_2d69_2escm",(void*)f_5527},
{"f_5943:srfi_2d69_2escm",(void*)f_5943},
{"f_4906:srfi_2d69_2escm",(void*)f_4906},
{"f_3788:srfi_2d69_2escm",(void*)f_3788},
{"f_4097:srfi_2d69_2escm",(void*)f_4097},
{"f_2112:srfi_2d69_2escm",(void*)f_2112},
{"f_5414:srfi_2d69_2escm",(void*)f_5414},
{"f_2105:srfi_2d69_2escm",(void*)f_2105},
{"f_5400:srfi_2d69_2escm",(void*)f_5400},
{"f_5959:srfi_2d69_2escm",(void*)f_5959},
{"f_4590:srfi_2d69_2escm",(void*)f_4590},
{"f_5046:srfi_2d69_2escm",(void*)f_5046},
{"f_5048:srfi_2d69_2escm",(void*)f_5048},
{"f_5908:srfi_2d69_2escm",(void*)f_5908},
{"f_3750:srfi_2d69_2escm",(void*)f_3750},
{"f_3962:srfi_2d69_2escm",(void*)f_3962},
{"f_3959:srfi_2d69_2escm",(void*)f_3959},
{"f_4934:srfi_2d69_2escm",(void*)f_4934},
{"f_4945:srfi_2d69_2escm",(void*)f_4945},
{"f_5024:srfi_2d69_2escm",(void*)f_5024},
{"f_3982:srfi_2d69_2escm",(void*)f_3982},
{"f_4913:srfi_2d69_2escm",(void*)f_4913},
{"f_3979:srfi_2d69_2escm",(void*)f_3979},
{"f_5918:srfi_2d69_2escm",(void*)f_5918},
{"f_4928:srfi_2d69_2escm",(void*)f_4928},
{"f_3989:srfi_2d69_2escm",(void*)f_3989},
{"f_3995:srfi_2d69_2escm",(void*)f_3995},
{"f_4486:srfi_2d69_2escm",(void*)f_4486},
{"f_4474:srfi_2d69_2escm",(void*)f_4474},
{"f_5496:srfi_2d69_2escm",(void*)f_5496},
{"f_5489:srfi_2d69_2escm",(void*)f_5489},
{"f_4004:srfi_2d69_2escm",(void*)f_4004},
{"f_5793:srfi_2d69_2escm",(void*)f_5793},
{"f_5858:srfi_2d69_2escm",(void*)f_5858},
{"f_5459:srfi_2d69_2escm",(void*)f_5459},
{"f_5440:srfi_2d69_2escm",(void*)f_5440},
{"f_3609:srfi_2d69_2escm",(void*)f_3609},
{"f_4519:srfi_2d69_2escm",(void*)f_4519},
{"f_6153:srfi_2d69_2escm",(void*)f_6153},
{"f_5427:srfi_2d69_2escm",(void*)f_5427},
{"f_4537:srfi_2d69_2escm",(void*)f_4537},
{"f_6172:srfi_2d69_2escm",(void*)f_6172},
{"f_4509:srfi_2d69_2escm",(void*)f_4509},
{"f_5808:srfi_2d69_2escm",(void*)f_5808},
{"f_5728:srfi_2d69_2escm",(void*)f_5728},
{"f_5703:srfi_2d69_2escm",(void*)f_5703},
{"f_5715:srfi_2d69_2escm",(void*)f_5715},
{"f_5705:srfi_2d69_2escm",(void*)f_5705},
{"f_3698:srfi_2d69_2escm",(void*)f_3698},
{"f_4549:srfi_2d69_2escm",(void*)f_4549},
{"f_4546:srfi_2d69_2escm",(void*)f_4546},
{"f_4366:srfi_2d69_2escm",(void*)f_4366},
{"f_5743:srfi_2d69_2escm",(void*)f_5743},
{"f_4685:srfi_2d69_2escm",(void*)f_4685},
{"f_5759:srfi_2d69_2escm",(void*)f_5759},
{"f_5824:srfi_2d69_2escm",(void*)f_5824},
{"f_3620:srfi_2d69_2escm",(void*)f_3620},
{"f_3622:srfi_2d69_2escm",(void*)f_3622},
{"f_2607:srfi_2d69_2escm",(void*)f_2607},
{"f_4190:srfi_2d69_2escm",(void*)f_4190},
{"f_2635:srfi_2d69_2escm",(void*)f_2635},
{"f_4699:srfi_2d69_2escm",(void*)f_4699},
{"f_3263:srfi_2d69_2escm",(void*)f_3263},
{"f_4177:srfi_2d69_2escm",(void*)f_4177},
{"f_4174:srfi_2d69_2escm",(void*)f_4174},
{"f_4171:srfi_2d69_2escm",(void*)f_4171},
{"f_6194:srfi_2d69_2escm",(void*)f_6194},
{"f_5695:srfi_2d69_2escm",(void*)f_5695},
{"f_3202:srfi_2d69_2escm",(void*)f_3202},
{"f_5682:srfi_2d69_2escm",(void*)f_5682},
{"f_5681:srfi_2d69_2escm",(void*)f_5681},
{"f_5674:srfi_2d69_2escm",(void*)f_5674},
{"f_3229:srfi_2d69_2escm",(void*)f_3229},
{"f_1991:srfi_2d69_2escm",(void*)f_1991},
{"f_3933:srfi_2d69_2escm",(void*)f_3933},
{"f_4302:srfi_2d69_2escm",(void*)f_4302},
{"f_3927:srfi_2d69_2escm",(void*)f_3927},
{"f_4316:srfi_2d69_2escm",(void*)f_4316},
{"f_4329:srfi_2d69_2escm",(void*)f_4329},
{"f_4325:srfi_2d69_2escm",(void*)f_4325},
{"f_4335:srfi_2d69_2escm",(void*)f_4335},
{"f_4338:srfi_2d69_2escm",(void*)f_4338},
{"f_3063:srfi_2d69_2escm",(void*)f_3063},
{"f_5616:srfi_2d69_2escm",(void*)f_5616},
{"f_5601:srfi_2d69_2escm",(void*)f_5601},
{"f_4456:srfi_2d69_2escm",(void*)f_4456},
{"f_3519:srfi_2d69_2escm",(void*)f_3519},
{"f_3513:srfi_2d69_2escm",(void*)f_3513},
{"f_3075:srfi_2d69_2escm",(void*)f_3075},
{"f_4040:srfi_2d69_2escm",(void*)f_4040},
{"f_4049:srfi_2d69_2escm",(void*)f_4049},
{"f_4013:srfi_2d69_2escm",(void*)f_4013},
{"f_6217:srfi_2d69_2escm",(void*)f_6217},
{"f_6210:srfi_2d69_2escm",(void*)f_6210},
{"f_6224:srfi_2d69_2escm",(void*)f_6224},
{"f_5632:srfi_2d69_2escm",(void*)f_5632},
{"f_5298:srfi_2d69_2escm",(void*)f_5298},
{"f_4031:srfi_2d69_2escm",(void*)f_4031},
{"f_4219:srfi_2d69_2escm",(void*)f_4219},
{"f_3578:srfi_2d69_2escm",(void*)f_3578},
{"f_3575:srfi_2d69_2escm",(void*)f_3575},
{"f_3571:srfi_2d69_2escm",(void*)f_3571},
{"f_4058:srfi_2d69_2escm",(void*)f_4058},
{"f_3566:srfi_2d69_2escm",(void*)f_3566},
{"f_3561:srfi_2d69_2escm",(void*)f_3561},
{"f_3404:srfi_2d69_2escm",(void*)f_3404},
{"f_4022:srfi_2d69_2escm",(void*)f_4022},
{"f_4898:srfi_2d69_2escm",(void*)f_4898},
{"f_4791:srfi_2d69_2escm",(void*)f_4791},
{"f_4794:srfi_2d69_2escm",(void*)f_4794},
{"f_3595:srfi_2d69_2escm",(void*)f_3595},
{"f_3599:srfi_2d69_2escm",(void*)f_3599},
{"f_3130:srfi_2d69_2escm",(void*)f_3130},
{"f_4619:srfi_2d69_2escm",(void*)f_4619},
{"f_6203:srfi_2d69_2escm",(void*)f_6203},
{"f_3370:srfi_2d69_2escm",(void*)f_3370},
{"f_2712:srfi_2d69_2escm",(void*)f_2712},
{"f_2717:srfi_2d69_2escm",(void*)f_2717},
{"f_2719:srfi_2d69_2escm",(void*)f_2719},
{"f_4402:srfi_2d69_2escm",(void*)f_4402},
{"f_4203:srfi_2d69_2escm",(void*)f_4203},
{"f_4200:srfi_2d69_2escm",(void*)f_4200},
{"f_3447:srfi_2d69_2escm",(void*)f_3447},
{"f_3444:srfi_2d69_2escm",(void*)f_3444},
{"f_5364:srfi_2d69_2escm",(void*)f_5364},
{"f_4636:srfi_2d69_2escm",(void*)f_4636},
{"f_3154:srfi_2d69_2escm",(void*)f_3154},
{"f_4630:srfi_2d69_2escm",(void*)f_4630},
{"f_4417:srfi_2d69_2escm",(void*)f_4417},
{"f_4410:srfi_2d69_2escm",(void*)f_4410},
{"f_3142:srfi_2d69_2escm",(void*)f_3142},
{"f_2739:srfi_2d69_2escm",(void*)f_2739},
{"f_3543:srfi_2d69_2escm",(void*)f_3543},
{"f_4655:srfi_2d69_2escm",(void*)f_4655},
{"f_2722:srfi_2d69_2escm",(void*)f_2722},
{"f_6028:srfi_2d69_2escm",(void*)f_6028},
{"f_4432:srfi_2d69_2escm",(void*)f_4432},
{"f_6021:srfi_2d69_2escm",(void*)f_6021},
{"f_4281:srfi_2d69_2escm",(void*)f_4281},
{"f_4663:srfi_2d69_2escm",(void*)f_4663},
{"f_4446:srfi_2d69_2escm",(void*)f_4446},
{"f_5345:srfi_2d69_2escm",(void*)f_5345},
{"f_4275:srfi_2d69_2escm",(void*)f_4275},
{"f_4670:srfi_2d69_2escm",(void*)f_4670},
{"f_3110:srfi_2d69_2escm",(void*)f_3110},
{"f_5170:srfi_2d69_2escm",(void*)f_5170},
{"f_5393:srfi_2d69_2escm",(void*)f_5393},
{"f_2773:srfi_2d69_2escm",(void*)f_2773},
{"f_3306:srfi_2d69_2escm",(void*)f_3306},
{"f_3303:srfi_2d69_2escm",(void*)f_3303},
{"f_5154:srfi_2d69_2escm",(void*)f_5154},
{"f_2683:srfi_2d69_2escm",(void*)f_2683},
{"f_5185:srfi_2d69_2escm",(void*)f_5185},
{"f_2323:srfi_2d69_2escm",(void*)f_2323},
{"f_5225:srfi_2d69_2escm",(void*)f_5225},
{"f_3051:srfi_2d69_2escm",(void*)f_3051},
{"f_4136:srfi_2d69_2escm",(void*)f_4136},
{"f_5238:srfi_2d69_2escm",(void*)f_5238},
{"f_2371:srfi_2d69_2escm",(void*)f_2371},
{"f_4735:srfi_2d69_2escm",(void*)f_4735},
{"f_5262:srfi_2d69_2escm",(void*)f_5262},
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
S|  for-each		1
o|eliminated procedure checks: 243 
o|specializations:
o|  1 (##sys#check-list (or pair list) *)
o|  4 (fp< float float)
o|  8 (eqv? * (not float))
o|  1 (car pair)
o|  2 (cdr pair)
o|  2 (memq * list)
o|  2 (positive? fixnum)
o|Removed `not' forms: 6 
o|contracted procedure: "(srfi-69.scm:159) g106107" 
o|contracted procedure: "(srfi-69.scm:120) g111112" 
o|inlining procedure: k1750 
o|inlining procedure: k1750 
o|contracted procedure: "(srfi-69.scm:159) g114115" 
o|inlining procedure: k1768 
o|inlining procedure: k1768 
o|contracted procedure: "(srfi-69.scm:152) g122123" 
o|inlining procedure: k1779 
o|contracted procedure: "(srfi-69.scm:147) g163164" 
o|contracted procedure: "(srfi-69.scm:147) g159160" 
o|contracted procedure: "(srfi-69.scm:147) g155156" 
o|contracted procedure: "(srfi-69.scm:147) g151152" 
o|contracted procedure: "(srfi-69.scm:147) g147148" 
o|contracted procedure: "(srfi-69.scm:147) g143144" 
o|contracted procedure: "(srfi-69.scm:147) g139140" 
o|contracted procedure: "(srfi-69.scm:147) g135136" 
o|inlining procedure: k1779 
o|contracted procedure: "(srfi-69.scm:148) g167168" 
o|contracted procedure: "(srfi-69.scm:173) g190191" 
o|contracted procedure: "(srfi-69.scm:120) g195196" 
o|inlining procedure: k1968 
o|inlining procedure: k1968 
o|contracted procedure: "(srfi-69.scm:173) g198199" 
o|contracted procedure: "(srfi-69.scm:188) g221222" 
o|contracted procedure: "(srfi-69.scm:120) g226227" 
o|inlining procedure: k2050 
o|inlining procedure: k2050 
o|contracted procedure: "(srfi-69.scm:188) g229230" 
o|contracted procedure: "(srfi-69.scm:182) g233234" 
o|inlining procedure: k2107 
o|inlining procedure: k2107 
o|contracted procedure: k2120 
o|inlining procedure: k2117 
o|inlining procedure: k2117 
o|contracted procedure: "(srfi-69.scm:209) g261262" 
o|contracted procedure: "(srfi-69.scm:120) g266267" 
o|inlining procedure: k2164 
o|inlining procedure: k2164 
o|contracted procedure: "(srfi-69.scm:209) g269270" 
o|contracted procedure: "(srfi-69.scm:203) g273274" 
o|contracted procedure: "(srfi-69.scm:235) g319320" 
o|contracted procedure: "(srfi-69.scm:120) g324325" 
o|inlining procedure: k2353 
o|inlining procedure: k2353 
o|contracted procedure: "(srfi-69.scm:235) *eq?-hash" 
o|inlining procedure: k2221 
o|inlining procedure: k2221 
o|inlining procedure: k2243 
o|inlining procedure: k2243 
o|inlining procedure: k2261 
o|inlining procedure: k2261 
o|inlining procedure: k2279 
o|contracted procedure: "(srfi-69.scm:226) g286287" 
o|contracted procedure: "(srfi-69.scm:182) g290291" 
o|inlining procedure: k2279 
o|contracted procedure: "(srfi-69.scm:230) g297298" 
o|contracted procedure: "(srfi-69.scm:229) g294295" 
o|contracted procedure: "(srfi-69.scm:262) g417418" 
o|contracted procedure: "(srfi-69.scm:120) g422423" 
o|inlining procedure: k2665 
o|inlining procedure: k2665 
o|contracted procedure: "(srfi-69.scm:262) *eqv?-hash" 
o|inlining procedure: k2400 
o|inlining procedure: k2400 
o|inlining procedure: k2422 
o|inlining procedure: k2422 
o|inlining procedure: k2440 
o|inlining procedure: k2440 
o|inlining procedure: k2458 
o|contracted procedure: "(srfi-69.scm:252) g336337" 
o|contracted procedure: "(srfi-69.scm:182) g340341" 
o|inlining procedure: k2458 
o|contracted procedure: "(srfi-69.scm:255) g344345" 
o|inlining procedure: k2486 
o|contracted procedure: "(srfi-69.scm:147) g385386" 
o|contracted procedure: "(srfi-69.scm:147) g381382" 
o|contracted procedure: "(srfi-69.scm:147) g377378" 
o|contracted procedure: "(srfi-69.scm:147) g373374" 
o|contracted procedure: "(srfi-69.scm:147) g369370" 
o|contracted procedure: "(srfi-69.scm:147) g365366" 
o|contracted procedure: "(srfi-69.scm:147) g361362" 
o|contracted procedure: "(srfi-69.scm:147) g357358" 
o|inlining procedure: k2486 
o|contracted procedure: "(srfi-69.scm:148) g389390" 
o|inlining procedure: k2611 
o|inlining procedure: k2611 
o|contracted procedure: "(srfi-69.scm:257) g395396" 
o|contracted procedure: "(srfi-69.scm:256) g392393" 
o|inlining procedure: k2741 
o|inlining procedure: k2741 
o|inlining procedure: k2797 
o|inlining procedure: k2797 
o|inlining procedure: k2815 
o|inlining procedure: k2815 
o|inlining procedure: k2837 
o|inlining procedure: k2837 
o|inlining procedure: k2855 
o|inlining procedure: k2855 
o|contracted procedure: "(srfi-69.scm:331) g459460" 
o|contracted procedure: "(srfi-69.scm:182) g463464" 
o|inlining procedure: k2884 
o|contracted procedure: "(srfi-69.scm:334) g467468" 
o|inlining procedure: k2892 
o|contracted procedure: "(srfi-69.scm:147) g508509" 
o|contracted procedure: "(srfi-69.scm:147) g504505" 
o|contracted procedure: "(srfi-69.scm:147) g500501" 
o|contracted procedure: "(srfi-69.scm:147) g496497" 
o|contracted procedure: "(srfi-69.scm:147) g492493" 
o|contracted procedure: "(srfi-69.scm:147) g488489" 
o|contracted procedure: "(srfi-69.scm:147) g484485" 
o|contracted procedure: "(srfi-69.scm:147) g480481" 
o|inlining procedure: k2892 
o|contracted procedure: "(srfi-69.scm:148) g512513" 
o|inlining procedure: k2884 
o|inlining procedure: k3032 
o|contracted procedure: "(srfi-69.scm:336) g521522" 
o|inlining procedure: k3032 
o|inlining procedure: k3087 
o|contracted procedure: "(srfi-69.scm:338) g532533" 
o|inlining procedure: k3105 
o|inlining procedure: k3105 
o|inlining procedure: k3087 
o|contracted procedure: "(srfi-69.scm:339) g536537" 
o|contracted procedure: "(srfi-69.scm:338) g529530" 
o|contracted procedure: "(srfi-69.scm:336) g518519" 
o|contracted procedure: "(srfi-69.scm:335) g515516" 
o|contracted procedure: "(srfi-69.scm:348) g567568" 
o|contracted procedure: "(srfi-69.scm:120) g572573" 
o|inlining procedure: k3184 
o|inlining procedure: k3184 
o|contracted procedure: "(srfi-69.scm:364) g606607" 
o|contracted procedure: "(srfi-69.scm:120) g611612" 
o|inlining procedure: k3277 
o|inlining procedure: k3277 
o|contracted procedure: "(srfi-69.scm:364) g614615" 
o|contracted procedure: "(srfi-69.scm:376) g649650" 
o|contracted procedure: "(srfi-69.scm:120) g654655" 
o|inlining procedure: k3418 
o|inlining procedure: k3418 
o|contracted procedure: "(srfi-69.scm:376) g657658" 
o|inlining procedure: k3527 
o|inlining procedure: k3527 
o|inlining procedure: k3545 
o|inlining procedure: k3545 
o|inlining procedure: k3579 
o|inlining procedure: k3579 
o|merged explicitly consed rest parameter: tmp717726 
o|inlining procedure: k3624 
o|inlining procedure: k3624 
o|inlining procedure: k3642 
o|inlining procedure: k3642 
o|inlining procedure: k3660 
o|inlining procedure: k3660 
o|inlining procedure: k3675 
o|inlining procedure: k3675 
o|consed rest parameter at call site: "(srfi-69.scm:585) *make-hash-table" 9 
o|inlining procedure: k3724 
o|inlining procedure: k3724 
o|inlining procedure: k3741 
o|inlining procedure: k3741 
o|inlining procedure: k3780 
o|inlining procedure: k3780 
o|inlining procedure: k3812 
o|inlining procedure: k3812 
o|inlining procedure: k3830 
o|inlining procedure: k3830 
o|substituted constant variable: a3840 
o|substituted constant variable: a3843 
o|inlining procedure: k3844 
o|substituted constant variable: a3863 
o|substituted constant variable: a3866 
o|inlining procedure: k3844 
o|inlining procedure: k3874 
o|inlining procedure: k3874 
o|inlining procedure: k3877 
o|inlining procedure: k3877 
o|substituted constant variable: a3891 
o|substituted constant variable: a3893 
o|substituted constant variable: a3895 
o|substituted constant variable: a3897 
o|substituted constant variable: a3899 
o|substituted constant variable: a3901 
o|substituted constant variable: a3903 
o|substituted constant variable: a3905 
o|inlining procedure: k3922 
o|inlining procedure: k3922 
o|inlining procedure: k3954 
o|inlining procedure: k3954 
o|inlining procedure: k3974 
o|inlining procedure: k3974 
o|inlining procedure: k4063 
o|inlining procedure: k4063 
o|inlining procedure: k4078 
o|inlining procedure: k4078 
o|contracted procedure: "(srfi-69.scm:654) hash-table-rehash!" 
o|inlining procedure: k4099 
o|inlining procedure: k4099 
o|inlining procedure: k4122 
o|inlining procedure: k4122 
o|inlining procedure: k4221 
o|consed rest parameter at call site: "(srfi-69.scm:680) *make-hash-table" 9 
o|inlining procedure: k4221 
o|inlining procedure: k4283 
o|inlining procedure: k4283 
o|inlining procedure: k4436 
o|inlining procedure: k4448 
o|inlining procedure: k4448 
o|inlining procedure: k4436 
o|inlining procedure: k4511 
o|inlining procedure: k4511 
o|contracted procedure: "(srfi-69.scm:724) g926927" 
o|inlining procedure: k4378 
o|inlining procedure: k4378 
o|inlining procedure: k4390 
o|inlining procedure: k4390 
o|contracted procedure: "(srfi-69.scm:665) g939940" 
o|inlining procedure: k4369 
o|inlining procedure: k4369 
o|contracted procedure: "(srfi-69.scm:664) g936937" 
o|inlining procedure: k4358 
o|inlining procedure: k4358 
o|inlining procedure: k4578 
o|inlining procedure: k4578 
o|inlining procedure: k4689 
o|inlining procedure: k4701 
o|inlining procedure: k4701 
o|inlining procedure: k4689 
o|inlining procedure: k4760 
o|inlining procedure: k4760 
o|contracted procedure: "(srfi-69.scm:763) g979980" 
o|inlining procedure: k4631 
o|inlining procedure: k4631 
o|inlining procedure: k4643 
o|inlining procedure: k4643 
o|contracted procedure: "(srfi-69.scm:665) g992993" 
o|inlining procedure: k4622 
o|inlining procedure: k4622 
o|contracted procedure: "(srfi-69.scm:664) g989990" 
o|inlining procedure: k4611 
o|inlining procedure: k4611 
o|inlining procedure: k4932 
o|inlining procedure: k4947 
o|inlining procedure: k4947 
o|inlining procedure: k4932 
o|inlining procedure: k4996 
o|inlining procedure: k4996 
o|contracted procedure: "(srfi-69.scm:808) g10351036" 
o|inlining procedure: k4874 
o|inlining procedure: k4874 
o|inlining procedure: k4886 
o|inlining procedure: k4886 
o|contracted procedure: "(srfi-69.scm:665) g10481049" 
o|inlining procedure: k4865 
o|inlining procedure: k4865 
o|contracted procedure: "(srfi-69.scm:664) g10451046" 
o|inlining procedure: k4854 
o|inlining procedure: k4854 
o|inlining procedure: k5065 
o|inlining procedure: k5081 
o|inlining procedure: k5081 
o|inlining procedure: k5065 
o|inlining procedure: k5120 
o|inlining procedure: k5120 
o|inlining procedure: k5171 
o|contracted procedure: k5190 
o|inlining procedure: k5187 
o|inlining procedure: k5187 
o|inlining procedure: k5171 
o|contracted procedure: k5230 
o|inlining procedure: k5227 
o|inlining procedure: k5227 
o|inlining procedure: k5288 
o|contracted procedure: k5303 
o|inlining procedure: k5300 
o|inlining procedure: k5300 
o|inlining procedure: k5288 
o|contracted procedure: k5350 
o|inlining procedure: k5347 
o|inlining procedure: k5347 
o|inlining procedure: k5416 
o|inlining procedure: k5416 
o|contracted procedure: k5445 
o|inlining procedure: k5442 
o|inlining procedure: k5442 
o|inlining procedure: k5519 
o|inlining procedure: k5519 
o|inlining procedure: k5542 
o|inlining procedure: k5542 
o|inlining procedure: k5618 
o|inlining procedure: k5618 
o|inlining procedure: k5634 
o|inlining procedure: k5634 
o|inlining procedure: k5707 
o|inlining procedure: k5707 
o|inlining procedure: k5745 
o|inlining procedure: k5745 
o|inlining procedure: k5761 
o|inlining procedure: k5761 
o|inlining procedure: k5810 
o|inlining procedure: k5810 
o|inlining procedure: k5826 
o|inlining procedure: k5826 
o|inlining procedure: k5872 
o|inlining procedure: k5872 
o|inlining procedure: k5910 
o|inlining procedure: k5910 
o|inlining procedure: k5945 
o|inlining procedure: k5945 
o|inlining procedure: k5961 
o|inlining procedure: k5961 
o|inlining procedure: k6097 
o|inlining procedure: k6113 
o|inlining procedure: k6113 
o|inlining procedure: k6097 
o|inlining procedure: k6155 
o|inlining procedure: k6155 
o|inlining procedure: k6205 
o|inlining procedure: k6205 
o|propagated global variable: r62066461 *recursive-hash-max-length* 
o|inlining procedure: k6219 
o|inlining procedure: k6219 
o|propagated global variable: r62206463 *recursive-hash-max-depth* 
o|replaced variables: 690 
o|removed binding forms: 330 
o|substituted constant variable: i166 
o|substituted constant variable: i162 
o|substituted constant variable: i158 
o|substituted constant variable: i154 
o|substituted constant variable: i150 
o|substituted constant variable: i146 
o|substituted constant variable: i142 
o|substituted constant variable: i138 
o|substituted constant variable: r21186242 
o|substituted constant variable: r21186242 
o|substituted constant variable: i388 
o|substituted constant variable: i384 
o|substituted constant variable: i380 
o|substituted constant variable: i376 
o|substituted constant variable: i372 
o|substituted constant variable: i368 
o|substituted constant variable: i364 
o|substituted constant variable: i360 
o|substituted constant variable: i511 
o|substituted constant variable: i507 
o|substituted constant variable: i503 
o|substituted constant variable: i499 
o|substituted constant variable: i495 
o|substituted constant variable: i491 
o|substituted constant variable: i487 
o|substituted constant variable: i483 
o|substituted constant variable: r31066289 
o|substituted constant variable: r31066289 
o|substituted constant variable: r31066291 
o|substituted constant variable: r31066291 
o|removed unused formal parameters: (weak-keys723 weak-values724) 
o|removed unused parameter to known procedure: weak-keys723 "(srfi-69.scm:585) *make-hash-table" 
o|removed unused parameter to known procedure: weak-values724 "(srfi-69.scm:585) *make-hash-table" 
o|inlining procedure: k3853 
o|substituted constant variable: r38756330 
o|substituted constant variable: r38756332 
o|inlining procedure: k3884 
o|inlining procedure: k3884 
o|substituted constant variable: r40646342 
o|substituted constant variable: r40646343 
o|substituted constant variable: r40796345 
o|removed unused parameter to known procedure: weak-keys723 "(srfi-69.scm:680) *make-hash-table" 
o|removed unused parameter to known procedure: weak-values724 "(srfi-69.scm:680) *make-hash-table" 
o|substituted constant variable: r42846352 
o|substituted constant variable: r43916363 
o|substituted constant variable: r46446379 
o|substituted constant variable: r48876401 
o|substituted constant variable: r51886413 
o|substituted constant variable: r52286416 
o|substituted constant variable: r53016419 
o|substituted constant variable: r53486422 
o|substituted constant variable: r54436426 
o|replaced variables: 110 
o|removed binding forms: 711 
o|inlining procedure: k1889 
o|inlining procedure: k2596 
o|inlining procedure: k3002 
o|inlining procedure: k3533 
o|inlining procedure: k3715 
o|inlining procedure: k3715 
o|inlining procedure: k3715 
o|inlining procedure: k3765 
o|inlining procedure: k3765 
o|inlining procedure: k3765 
o|inlining procedure: k3765 
o|inlining procedure: k3765 
o|inlining procedure: k3765 
o|inlining procedure: k3765 
o|inlining procedure: k3765 
o|removed side-effect free assignment to unused variable: weak-keys756 
o|inlining procedure: k3765 
o|removed side-effect free assignment to unused variable: weak-keys756 
o|inlining procedure: k3765 
o|removed side-effect free assignment to unused variable: weak-values757 
o|inlining procedure: k3765 
o|removed side-effect free assignment to unused variable: weak-values757 
o|inlining procedure: k3765 
o|replaced variables: 34 
o|removed binding forms: 158 
o|contracted procedure: k1795 
o|contracted procedure: k1809 
o|contracted procedure: k1823 
o|contracted procedure: k1837 
o|contracted procedure: k1851 
o|contracted procedure: k1865 
o|contracted procedure: k1879 
o|contracted procedure: k2502 
o|contracted procedure: k2516 
o|contracted procedure: k2530 
o|contracted procedure: k2544 
o|contracted procedure: k2558 
o|contracted procedure: k2572 
o|contracted procedure: k2586 
o|contracted procedure: k2908 
o|contracted procedure: k2922 
o|contracted procedure: k2936 
o|contracted procedure: k2950 
o|contracted procedure: k2964 
o|contracted procedure: k2978 
o|contracted procedure: k2992 
o|contracted procedure: k3037 
o|contracted procedure: k3092 
o|contracted procedure: k3127 
o|contracted procedure: k3295 
o|contracted procedure: k3436 
o|removed call to pure procedure with unused result: "(srfi-69.scm:684) slot" 
o|removed call to pure procedure with unused result: "(srfi-69.scm:684) slot" 
o|simplifications: ((let . 3)) 
o|removed binding forms: 84 
o|Removed `not' forms: 3 
o|contracted procedure: k2308 
o|contracted procedure: k2620 
o|contracted procedure: k3026 
o|contracted procedure: k4251 
o|contracted procedure: k4255 
o|removed binding forms: 9 
o|replaced variables: 3 
o|removed binding forms: 2 
o|removed binding forms: 3 
o|simplifications: ((let . 3)) 
o|simplifications: ((if . 75) (##core#call . 698)) 
o|  call simplifications:
o|    ##sys#check-list	2
o|    apply
o|    ##sys#check-pair
o|    void
o|    *	6
o|    ##sys#immediate?	6
o|    fx<=	6
o|    ##sys#setislot	10
o|    cons	21
o|    ##sys#check-structure	30
o|    ##sys#structure?
o|    ##sys#make-structure
o|    ##sys#setslot	24
o|    list	2
o|    ##sys#check-string	2
o|    fx>=	12
o|    pair?	4
o|    ##sys#peek-fixnum	2
o|    ##sys#size	27
o|    fxmin	4
o|    fxmax
o|    fx=
o|    fx-	4
o|    char?	3
o|    eq?	40
o|    eof-object?	3
o|    symbol?	3
o|    char->integer	3
o|    ##sys#check-symbol
o|    ##sys#slot	182
o|    car	30
o|    null?	78
o|    cdr	25
o|    number?	3
o|    ##sys#check-exact	11
o|    fixnum?	6
o|    flonum?	3
o|    fxshl	24
o|    fx+	43
o|    fx*	4
o|    fxxor	25
o|    fx<	15
o|    fxneg	9
o|    fxand	9
o|    fxmod	9
o|contracted procedure: k1931 
o|contracted procedure: k1719 
o|contracted procedure: k1925 
o|contracted procedure: k1722 
o|contracted procedure: k1919 
o|contracted procedure: k1725 
o|contracted procedure: k1913 
o|contracted procedure: k1728 
o|contracted procedure: k1734 
o|contracted procedure: k1743 
o|contracted procedure: k1753 
o|contracted procedure: k1771 
o|contracted procedure: k1782 
o|contracted procedure: k1883 
o|contracted procedure: k1873 
o|contracted procedure: k1869 
o|contracted procedure: k1859 
o|contracted procedure: k1855 
o|contracted procedure: k1845 
o|contracted procedure: k1841 
o|contracted procedure: k1831 
o|contracted procedure: k1827 
o|contracted procedure: k1817 
o|contracted procedure: k1813 
o|contracted procedure: k1803 
o|contracted procedure: k1799 
o|contracted procedure: k1789 
o|contracted procedure: k1907 
o|contracted procedure: k2010 
o|contracted procedure: k1940 
o|contracted procedure: k2004 
o|contracted procedure: k1943 
o|contracted procedure: k1998 
o|contracted procedure: k1946 
o|contracted procedure: k1992 
o|contracted procedure: k1949 
o|contracted procedure: k1952 
o|contracted procedure: k1961 
o|contracted procedure: k1971 
o|contracted procedure: k2098 
o|contracted procedure: k2019 
o|contracted procedure: k2092 
o|contracted procedure: k2022 
o|contracted procedure: k2086 
o|contracted procedure: k2025 
o|contracted procedure: k2080 
o|contracted procedure: k2028 
o|contracted procedure: k2031 
o|contracted procedure: k2034 
o|contracted procedure: k2043 
o|contracted procedure: k2053 
o|contracted procedure: k2074 
o|contracted procedure: k2127 
o|contracted procedure: k2117 
o|contracted procedure: k2212 
o|contracted procedure: k2133 
o|contracted procedure: k2206 
o|contracted procedure: k2136 
o|contracted procedure: k2200 
o|contracted procedure: k2139 
o|contracted procedure: k2194 
o|contracted procedure: k2142 
o|contracted procedure: k2148 
o|contracted procedure: k2157 
o|contracted procedure: k2167 
o|contracted procedure: k2188 
o|contracted procedure: k2390 
o|contracted procedure: k2325 
o|contracted procedure: k2384 
o|contracted procedure: k2328 
o|contracted procedure: k2378 
o|contracted procedure: k2331 
o|contracted procedure: k2372 
o|contracted procedure: k2334 
o|contracted procedure: k2337 
o|contracted procedure: k2346 
o|contracted procedure: k2356 
o|contracted procedure: k2224 
o|contracted procedure: k2233 
o|contracted procedure: k2240 
o|contracted procedure: k2246 
o|contracted procedure: k2255 
o|contracted procedure: k2264 
o|contracted procedure: k2273 
o|contracted procedure: k2282 
o|contracted procedure: k2293 
o|contracted procedure: k2702 
o|contracted procedure: k2637 
o|contracted procedure: k2696 
o|contracted procedure: k2640 
o|contracted procedure: k2690 
o|contracted procedure: k2643 
o|contracted procedure: k2684 
o|contracted procedure: k2646 
o|contracted procedure: k2649 
o|contracted procedure: k2658 
o|contracted procedure: k2668 
o|contracted procedure: k2403 
o|contracted procedure: k2412 
o|contracted procedure: k2419 
o|contracted procedure: k2425 
o|contracted procedure: k2434 
o|contracted procedure: k2443 
o|contracted procedure: k2452 
o|contracted procedure: k2461 
o|contracted procedure: k2472 
o|contracted procedure: k2481 
o|contracted procedure: k2489 
o|contracted procedure: k2590 
o|contracted procedure: k2580 
o|contracted procedure: k2576 
o|contracted procedure: k2566 
o|contracted procedure: k2562 
o|contracted procedure: k2552 
o|contracted procedure: k2548 
o|contracted procedure: k2538 
o|contracted procedure: k2534 
o|contracted procedure: k2524 
o|contracted procedure: k2520 
o|contracted procedure: k2510 
o|contracted procedure: k2506 
o|contracted procedure: k2496 
o|contracted procedure: k2724 
o|contracted procedure: k2791 
o|contracted procedure: k2731 
o|contracted procedure: k2787 
o|contracted procedure: k2783 
o|contracted procedure: k2735 
o|contracted procedure: k2744 
o|contracted procedure: k2767 
o|contracted procedure: k2763 
o|contracted procedure: k2751 
o|contracted procedure: k2755 
o|contracted procedure: k2759 
o|contracted procedure: k2775 
o|contracted procedure: k2779 
o|contracted procedure: k2800 
o|contracted procedure: k2809 
o|contracted procedure: k2818 
o|contracted procedure: k2825 
o|contracted procedure: k2831 
o|contracted procedure: k2840 
o|contracted procedure: k2849 
o|contracted procedure: k2858 
o|contracted procedure: k2867 
o|contracted procedure: k2878 
o|contracted procedure: k2887 
o|contracted procedure: k2895 
o|contracted procedure: k2996 
o|contracted procedure: k2986 
o|contracted procedure: k2982 
o|contracted procedure: k2972 
o|contracted procedure: k2968 
o|contracted procedure: k2958 
o|contracted procedure: k2954 
o|contracted procedure: k2944 
o|contracted procedure: k2940 
o|contracted procedure: k2930 
o|contracted procedure: k2926 
o|contracted procedure: k2916 
o|contracted procedure: k2912 
o|contracted procedure: k2902 
o|contracted procedure: k3048 
o|contracted procedure: k3057 
o|contracted procedure: k3065 
o|contracted procedure: k3069 
o|contracted procedure: k3077 
o|contracted procedure: k3081 
o|contracted procedure: k3116 
o|contracted procedure: k3112 
o|contracted procedure: k3101 
o|contracted procedure: k3136 
o|contracted procedure: k3221 
o|contracted procedure: k3156 
o|contracted procedure: k3215 
o|contracted procedure: k3159 
o|contracted procedure: k3209 
o|contracted procedure: k3162 
o|contracted procedure: k3203 
o|contracted procedure: k3165 
o|contracted procedure: k3168 
o|contracted procedure: k3177 
o|contracted procedure: k3187 
o|contracted procedure: k3363 
o|contracted procedure: k3231 
o|contracted procedure: k3357 
o|contracted procedure: k3234 
o|contracted procedure: k3351 
o|contracted procedure: k3237 
o|contracted procedure: k3345 
o|contracted procedure: k3240 
o|contracted procedure: k3339 
o|contracted procedure: k3243 
o|contracted procedure: k3333 
o|contracted procedure: k3246 
o|contracted procedure: k3327 
o|contracted procedure: k3249 
o|contracted procedure: k3321 
o|contracted procedure: k3252 
o|contracted procedure: k3255 
o|contracted procedure: k3258 
o|contracted procedure: k3270 
o|contracted procedure: k3280 
o|contracted procedure: k3298 
o|contracted procedure: k3311 
o|contracted procedure: k3315 
o|contracted procedure: k3504 
o|contracted procedure: k3372 
o|contracted procedure: k3498 
o|contracted procedure: k3375 
o|contracted procedure: k3492 
o|contracted procedure: k3378 
o|contracted procedure: k3486 
o|contracted procedure: k3381 
o|contracted procedure: k3480 
o|contracted procedure: k3384 
o|contracted procedure: k3474 
o|contracted procedure: k3387 
o|contracted procedure: k3468 
o|contracted procedure: k3390 
o|contracted procedure: k3462 
o|contracted procedure: k3393 
o|contracted procedure: k3396 
o|contracted procedure: k3399 
o|contracted procedure: k3411 
o|contracted procedure: k3421 
o|contracted procedure: k3439 
o|contracted procedure: k3452 
o|contracted procedure: k3456 
o|contracted procedure: k3521 
o|contracted procedure: k3524 
o|contracted procedure: k3530 
o|contracted procedure: k3533 
o|contracted procedure: k3550 
o|contracted procedure: k3558 
o|contracted procedure: k3588 
o|contracted procedure: k3582 
o|contracted procedure: k3600 
o|contracted procedure: k3603 
o|contracted procedure: k3610 
o|contracted procedure: k3627 
o|contracted procedure: k3630 
o|contracted procedure: k3636 
o|contracted procedure: k3639 
o|contracted procedure: k3645 
o|contracted procedure: k3648 
o|contracted procedure: k3654 
o|contracted procedure: k3657 
o|contracted procedure: k3663 
o|contracted procedure: k3666 
o|contracted procedure: k3672 
o|contracted procedure: k3675 
o|contracted procedure: k3744 
o|contracted procedure: k3747 
o|contracted procedure: k3773 
o|contracted procedure: k3783 
o|contracted procedure: k3793 
o|contracted procedure: k3796 
o|contracted procedure: k3803 
o|contracted procedure: k3806 
o|contracted procedure: k3815 
o|contracted procedure: k3824 
o|contracted procedure: k3834 
o|contracted procedure: k3847 
o|contracted procedure: k3857 
o|contracted procedure: k3870 
o|contracted procedure: k3880 
o|contracted procedure: k3906 
o|contracted procedure: k3916 
o|contracted procedure: k3919 
o|contracted procedure: k3928 
o|contracted procedure: k3935 
o|contracted procedure: k3939 
o|contracted procedure: k3942 
o|contracted procedure: k3948 
o|contracted procedure: k3951 
o|contracted procedure: k3965 
o|contracted procedure: k3968 
o|contracted procedure: k3971 
o|contracted procedure: k3985 
o|contracted procedure: k3997 
o|contracted procedure: k4006 
o|contracted procedure: k4015 
o|contracted procedure: k4024 
o|contracted procedure: k4033 
o|contracted procedure: k4042 
o|contracted procedure: k4051 
o|contracted procedure: k4060 
o|contracted procedure: k4066 
o|contracted procedure: k4072 
o|contracted procedure: k4075 
o|contracted procedure: k4186 
o|contracted procedure: k4166 
o|contracted procedure: k4182 
o|contracted procedure: k4087 
o|contracted procedure: k4090 
o|contracted procedure: k4102 
o|contracted procedure: k4112 
o|contracted procedure: k4116 
o|contracted procedure: k4125 
o|contracted procedure: k4128 
o|contracted procedure: k4131 
o|contracted procedure: k4160 
o|contracted procedure: k4152 
o|contracted procedure: k4156 
o|contracted procedure: k4148 
o|contracted procedure: k4137 
o|contracted procedure: k4144 
o|contracted procedure: k4192 
o|contracted procedure: k4195 
o|contracted procedure: k4215 
o|contracted procedure: k4204 
o|contracted procedure: k4211 
o|contracted procedure: k4207 
o|contracted procedure: k4224 
o|contracted procedure: k4231 
o|contracted procedure: k4235 
o|contracted procedure: k4239 
o|contracted procedure: k4243 
o|contracted procedure: k4247 
o|contracted procedure: k4259 
o|contracted procedure: k4262 
o|contracted procedure: k4269 
o|contracted procedure: k4277 
o|contracted procedure: k4286 
o|contracted procedure: k4289 
o|contracted procedure: k4308 
o|contracted procedure: k4312 
o|contracted procedure: k4296 
o|contracted procedure: k4304 
o|contracted procedure: k4318 
o|contracted procedure: k4330 
o|contracted procedure: k4569 
o|contracted procedure: k4339 
o|contracted procedure: k4418 
o|contracted procedure: k4421 
o|contracted procedure: k4424 
o|contracted procedure: k4427 
o|contracted procedure: k4433 
o|contracted procedure: k4439 
o|contracted procedure: k4451 
o|contracted procedure: k4468 
o|contracted procedure: k4464 
o|contracted procedure: k4457 
o|contracted procedure: k4460 
o|contracted procedure: k4475 
o|contracted procedure: k4502 
o|contracted procedure: k4481 
o|contracted procedure: k4487 
o|contracted procedure: k4491 
o|contracted procedure: k4498 
o|contracted procedure: k4514 
o|contracted procedure: k4531 
o|contracted procedure: k4527 
o|contracted procedure: k4520 
o|contracted procedure: k4523 
o|contracted procedure: k4538 
o|contracted procedure: k4550 
o|contracted procedure: k4554 
o|contracted procedure: k4561 
o|contracted procedure: k4565 
o|contracted procedure: k4344 
o|contracted procedure: k4347 
o|contracted procedure: k4350 
o|contracted procedure: k4353 
o|contracted procedure: k4387 
o|contracted procedure: k4393 
o|contracted procedure: k4372 
o|contracted procedure: k4404 
o|contracted procedure: k4361 
o|contracted procedure: k4412 
o|contracted procedure: k4572 
o|contracted procedure: k4575 
o|contracted procedure: k4814 
o|contracted procedure: k4592 
o|contracted procedure: k4671 
o|contracted procedure: k4674 
o|contracted procedure: k4677 
o|contracted procedure: k4680 
o|contracted procedure: k4686 
o|contracted procedure: k4692 
o|contracted procedure: k4704 
o|contracted procedure: k4721 
o|contracted procedure: k4717 
o|contracted procedure: k4710 
o|contracted procedure: k4713 
o|contracted procedure: k4724 
o|contracted procedure: k4751 
o|contracted procedure: k4730 
o|contracted procedure: k4736 
o|contracted procedure: k4740 
o|contracted procedure: k4747 
o|contracted procedure: k4763 
o|contracted procedure: k4780 
o|contracted procedure: k4776 
o|contracted procedure: k4769 
o|contracted procedure: k4772 
o|contracted procedure: k4783 
o|contracted procedure: k4795 
o|contracted procedure: k4799 
o|contracted procedure: k4806 
o|contracted procedure: k4810 
o|contracted procedure: k4597 
o|contracted procedure: k4600 
o|contracted procedure: k4603 
o|contracted procedure: k4606 
o|contracted procedure: k4640 
o|contracted procedure: k4646 
o|contracted procedure: k4625 
o|contracted procedure: k4657 
o|contracted procedure: k4614 
o|contracted procedure: k4665 
o|contracted procedure: k4820 
o|contracted procedure: k4832 
o|contracted procedure: k5040 
o|contracted procedure: k4835 
o|contracted procedure: k4914 
o|contracted procedure: k4917 
o|contracted procedure: k4920 
o|contracted procedure: k4923 
o|contracted procedure: k4929 
o|contracted procedure: k4938 
o|contracted procedure: k4950 
o|contracted procedure: k4964 
o|contracted procedure: k4960 
o|contracted procedure: k4953 
o|contracted procedure: k4967 
o|contracted procedure: k4987 
o|contracted procedure: k4973 
o|contracted procedure: k4983 
o|contracted procedure: k4999 
o|contracted procedure: k5013 
o|contracted procedure: k5009 
o|contracted procedure: k5002 
o|contracted procedure: k5016 
o|contracted procedure: k5032 
o|contracted procedure: k5036 
o|contracted procedure: k4840 
o|contracted procedure: k4843 
o|contracted procedure: k4846 
o|contracted procedure: k4849 
o|contracted procedure: k4883 
o|contracted procedure: k4889 
o|contracted procedure: k4868 
o|contracted procedure: k4900 
o|contracted procedure: k4857 
o|contracted procedure: k4908 
o|contracted procedure: k5050 
o|contracted procedure: k5053 
o|contracted procedure: k5056 
o|contracted procedure: k5059 
o|contracted procedure: k5068 
o|contracted procedure: k5075 
o|contracted procedure: k5084 
o|contracted procedure: k5087 
o|contracted procedure: k5107 
o|contracted procedure: k5093 
o|contracted procedure: k5103 
o|contracted procedure: k5114 
o|contracted procedure: k5123 
o|contracted procedure: k5126 
o|contracted procedure: k5142 
o|contracted procedure: k5146 
o|contracted procedure: k5150 
o|contracted procedure: k5156 
o|contracted procedure: k5159 
o|contracted procedure: k5162 
o|contracted procedure: k5165 
o|contracted procedure: k5174 
o|contracted procedure: k5181 
o|contracted procedure: k5214 
o|contracted procedure: k5193 
o|contracted procedure: k5210 
o|contracted procedure: k5196 
o|contracted procedure: k5206 
o|contracted procedure: k5221 
o|contracted procedure: k5254 
o|contracted procedure: k5233 
o|contracted procedure: k5246 
o|contracted procedure: k5250 
o|contracted procedure: k5258 
o|contracted procedure: k5264 
o|contracted procedure: k5267 
o|contracted procedure: k5270 
o|contracted procedure: k5273 
o|contracted procedure: k5279 
o|contracted procedure: k5389 
o|contracted procedure: k5282 
o|contracted procedure: k5285 
o|contracted procedure: k5291 
o|contracted procedure: k5338 
o|contracted procedure: k5306 
o|contracted procedure: k5309 
o|contracted procedure: k5334 
o|contracted procedure: k5315 
o|contracted procedure: k5318 
o|contracted procedure: k5321 
o|contracted procedure: k5385 
o|contracted procedure: k5353 
o|contracted procedure: k5356 
o|contracted procedure: k5365 
o|contracted procedure: k5368 
o|contracted procedure: k5381 
o|contracted procedure: k5395 
o|contracted procedure: k5401 
o|contracted procedure: k5404 
o|contracted procedure: k5407 
o|contracted procedure: k5419 
o|contracted procedure: k5432 
o|contracted procedure: k5436 
o|contracted procedure: k5485 
o|contracted procedure: k5448 
o|contracted procedure: k5451 
o|contracted procedure: k5460 
o|contracted procedure: k5464 
o|contracted procedure: k5477 
o|contracted procedure: k5481 
o|contracted procedure: k5491 
o|contracted procedure: k5501 
o|contracted procedure: k5507 
o|contracted procedure: k5510 
o|contracted procedure: k5522 
o|contracted procedure: k5532 
o|contracted procedure: k5536 
o|contracted procedure: k5545 
o|contracted procedure: k5548 
o|contracted procedure: k5558 
o|contracted procedure: k5562 
o|contracted procedure: k5569 
o|contracted procedure: k5575 
o|contracted procedure: k5578 
o|contracted procedure: k5587 
o|contracted procedure: k5590 
o|contracted procedure: k5603 
o|contracted procedure: k5606 
o|contracted procedure: k5609 
o|contracted procedure: k5621 
o|contracted procedure: k5628 
o|contracted procedure: k5637 
o|contracted procedure: k5644 
o|contracted procedure: k5651 
o|contracted procedure: k5655 
o|contracted procedure: k5666 
o|contracted procedure: k5670 
o|contracted procedure: k5662 
o|contracted procedure: k5658 
o|contracted procedure: k5676 
o|contracted procedure: k5684 
o|contracted procedure: k5691 
o|contracted procedure: k5698 
o|contracted procedure: k5710 
o|contracted procedure: k5720 
o|contracted procedure: k5724 
o|contracted procedure: k5730 
o|contracted procedure: k5733 
o|contracted procedure: k5736 
o|contracted procedure: k5748 
o|contracted procedure: k5755 
o|contracted procedure: k5764 
o|contracted procedure: k5771 
o|contracted procedure: k5778 
o|contracted procedure: k5782 
o|contracted procedure: k5789 
o|contracted procedure: k5785 
o|contracted procedure: k5795 
o|contracted procedure: k5798 
o|contracted procedure: k5801 
o|contracted procedure: k5813 
o|contracted procedure: k5820 
o|contracted procedure: k5829 
o|contracted procedure: k5836 
o|contracted procedure: k5843 
o|contracted procedure: k5847 
o|contracted procedure: k5854 
o|contracted procedure: k5850 
o|contracted procedure: k5860 
o|contracted procedure: k5863 
o|contracted procedure: k5875 
o|contracted procedure: k5884 
o|contracted procedure: k5888 
o|contracted procedure: k5891 
o|contracted procedure: k5894 
o|contracted procedure: k5904 
o|contracted procedure: k5913 
o|contracted procedure: k5923 
o|contracted procedure: k5927 
o|contracted procedure: k5933 
o|contracted procedure: k5936 
o|contracted procedure: k5948 
o|contracted procedure: k5955 
o|contracted procedure: k5964 
o|contracted procedure: k5971 
o|contracted procedure: k5974 
o|contracted procedure: k5981 
o|contracted procedure: k5989 
o|contracted procedure: k5993 
o|contracted procedure: k5999 
o|contracted procedure: k6011 
o|contracted procedure: k6023 
o|contracted procedure: k6035 
o|contracted procedure: k6070 
o|contracted procedure: k6191 
o|contracted procedure: k6076 
o|contracted procedure: k6079 
o|contracted procedure: k6085 
o|contracted procedure: k6088 
o|contracted procedure: k6091 
o|contracted procedure: k6100 
o|contracted procedure: k6107 
o|contracted procedure: k6116 
o|contracted procedure: k6122 
o|contracted procedure: k6142 
o|contracted procedure: k6128 
o|contracted procedure: k6138 
o|contracted procedure: k6149 
o|contracted procedure: k6158 
o|contracted procedure: k6164 
o|contracted procedure: k6180 
o|contracted procedure: k6184 
o|contracted procedure: k6188 
o|contracted procedure: k6212 
o|contracted procedure: k6226 
o|simplifications: ((let . 82)) 
o|removed binding forms: 622 
o|replaced variables: 394 
o|inlining procedure: k1759 
o|inlining procedure: k1977 
o|inlining procedure: k2059 
o|inlining procedure: k2173 
o|inlining procedure: k2362 
o|inlining procedure: k2674 
o|inlining procedure: k3193 
o|inlining procedure: k3286 
o|inlining procedure: k3427 
o|removed binding forms: 173 
o|contracted procedure: k2077 
o|contracted procedure: k2191 
o|removed binding forms: 11 
o|replaced variables: 12 
o|removed binding forms: 11 
o|direct leaf routine/allocation: loop681 0 
o|direct leaf routine/allocation: hash-for-test758 0 
o|direct leaf routine/allocation: loop1110 0 
o|direct leaf routine/allocation: loop1127 0 
o|direct leaf routine/allocation: loop1155 0 
o|converted assignments to bindings: (loop681) 
o|contracted procedure: "(srfi-69.scm:578) k3721" 
o|converted assignments to bindings: (loop1110) 
o|converted assignments to bindings: (loop1127) 
o|converted assignments to bindings: (loop1155) 
o|simplifications: ((let . 4)) 
o|removed binding forms: 1 
o|customizable procedures: (k6222 k6208 loop1095 loop1091 *hash-table-for-each *hash-table-fold fold21332 loop1329 g13061313 for-each-loop13051316 doloop13001301 loop21288 loop1285 loop21274 loop1271 g12481255 for-each-loop12471260 loop21234 loop1231 *hash-table-merge! doloop12081209 doloop12051206 loop1183 doloop11801181 loop1164 loop1135 loop1114 k4860 k4871 k4877 loop1064 loop1059 *hash-table-update!/default k4617 k4628 k4634 loop1012 loop1003 k4327 k4364 k4375 k4381 loop959 loop950 *hash-table-copy copy-loop894 doloop891892 loop867 doloop864865 k3696 k3699 k3702 invarg-err794 loop791 hash-table-canonical-length *make-hash-table g543544 g539540 vector-hash439 g525526 recursive-hash440 loop447 *equal?-hash) 
o|calls to known targets: 171 
o|identified direct recursive calls: f_3519 2 
o|identified direct recursive calls: f_4281 1 
o|identified direct recursive calls: f_4446 1 
o|identified direct recursive calls: f_4699 1 
o|identified direct recursive calls: f_4945 1 
o|identified direct recursive calls: f_5079 1 
o|identified direct recursive calls: f_5185 1 
o|identified direct recursive calls: f_5298 1 
o|identified direct recursive calls: f_5632 1 
o|identified direct recursive calls: f_5759 1 
o|identified direct recursive calls: f_5824 1 
o|identified direct recursive calls: f_6111 1 
o|fast box initializations: 34 
o|fast global references: 33 
o|fast global assignments: 10 
o|dropping unused closure argument: f_5505 
o|dropping unused closure argument: f_5931 
o|dropping unused closure argument: f_5858 
o|dropping unused closure argument: f_4190 
o|dropping unused closure argument: f_3513 
o|dropping unused closure argument: f_3595 
o|dropping unused closure argument: f_2719 
*/
/* end of file */
