/* Generated from chicken-syntax.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:02
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: chicken-syntax.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file chicken-syntax.c
   unit: chicken_2dsyntax
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[296];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,25),40,97,51,52,49,53,32,120,50,52,48,52,32,114,50,52,48,53,32,99,50,52,48,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,18),40,103,50,51,56,48,32,99,108,97,117,115,101,50,51,57,49,41,0,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,51,55,52,32,103,50,51,56,54,50,51,57,55,41};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,25),40,97,51,52,55,53,32,120,50,51,54,51,32,114,50,51,54,52,32,99,50,51,54,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,34),40,109,97,112,45,108,111,111,112,50,51,49,57,32,103,50,51,51,49,50,51,52,52,32,103,50,51,51,50,50,51,52,53,41,0,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,50,55,57,32,103,50,50,57,49,50,51,48,53,41};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,24),40,108,111,111,112,50,32,97,110,97,109,101,115,50,50,55,51,32,105,50,50,55,52,41};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,37),40,108,111,111,112,32,97,114,103,115,50,50,53,57,32,97,110,97,109,101,115,50,50,54,48,32,97,116,121,112,101,115,50,50,54,49,41,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,25),40,97,51,53,57,54,32,120,50,50,52,49,32,114,50,50,52,50,32,99,50,50,52,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,24),40,97,52,48,50,52,32,116,121,112,101,50,50,51,57,32,118,97,114,50,50,52,48,41};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,50,49,51,32,103,50,50,50,53,50,50,51,50,41};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,49,56,53,32,103,50,49,57,55,50,50,48,52,41};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,32),40,108,111,111,112,50,49,51,55,32,108,50,49,51,50,50,49,55,53,32,108,101,110,50,49,51,51,50,49,55,54,41};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,32),40,108,111,111,112,50,49,51,55,32,108,50,49,51,50,50,49,53,57,32,108,101,110,50,49,51,51,50,49,54,48,41};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,52),40,97,51,57,54,50,32,105,110,112,117,116,50,49,51,49,50,49,52,52,32,114,101,110,97,109,101,50,49,52,48,50,49,52,53,32,99,111,109,112,97,114,101,50,49,50,56,50,49,52,54,41,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,25),40,97,52,50,54,55,32,120,50,49,50,48,32,114,50,49,50,49,32,99,50,49,50,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,7),40,97,52,51,50,54,41,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,58),40,97,52,51,51,54,32,116,121,112,101,50,48,57,52,50,48,57,53,50,49,48,48,32,112,114,101,100,50,48,57,54,50,48,57,55,50,49,48,49,32,112,117,114,101,50,48,57,56,50,48,57,57,50,49,48,50,41,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,25),40,97,52,51,48,53,32,120,50,48,56,57,32,114,50,48,57,48,32,99,50,48,57,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,15),40,103,50,48,53,55,32,97,114,103,50,48,54,56,41,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,48,53,49,32,103,50,48,54,51,50,48,55,57,41};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,25),40,97,52,52,49,51,32,120,50,48,51,54,32,114,50,48,51,55,32,99,50,48,51,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,25),40,97,52,53,55,52,32,120,50,48,49,56,32,114,50,48,49,57,32,99,50,48,50,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,32),40,108,111,111,112,49,57,55,54,32,108,49,57,55,49,50,48,48,57,32,108,101,110,49,57,55,50,50,48,49,48,41};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,32),40,108,111,111,112,49,57,55,54,32,108,49,57,55,49,49,57,57,56,32,108,101,110,49,57,55,50,49,57,57,57,41};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,52),40,97,52,54,54,49,32,105,110,112,117,116,49,57,55,48,49,57,56,51,32,114,101,110,97,109,101,49,57,55,57,49,57,56,52,32,99,111,109,112,97,114,101,49,57,54,55,49,57,56,53,41,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,52),40,97,52,56,48,57,32,105,110,112,117,116,49,57,51,54,49,57,52,57,32,114,101,110,97,109,101,49,57,52,53,49,57,53,48,32,99,111,109,112,97,114,101,49,57,51,51,49,57,53,49,41,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,25),40,97,52,57,48,54,32,120,49,57,50,53,32,114,49,57,50,54,32,99,49,57,50,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,25),40,97,52,57,50,55,32,120,49,57,49,56,32,114,49,57,49,57,32,99,49,57,50,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,28),40,97,52,57,52,52,32,102,111,114,109,49,57,49,49,32,114,49,57,49,50,32,99,49,57,49,51,41,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,28),40,97,52,57,55,51,32,102,111,114,109,49,57,48,48,32,114,49,57,48,49,32,99,49,57,48,50,41,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,47),40,108,111,111,112,32,120,115,49,56,55,56,32,118,97,114,115,49,56,55,57,32,98,115,49,56,56,48,32,118,97,108,115,49,56,56,49,32,114,101,115,116,49,56,56,50,41,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,28),40,97,53,48,51,56,32,102,111,114,109,49,56,55,49,32,114,49,56,55,50,32,99,49,56,55,51,41,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,40),40,108,111,111,112,32,120,115,49,56,52,56,32,118,97,114,115,49,56,52,57,32,118,97,108,115,49,56,53,48,32,114,101,115,116,49,56,53,49,41};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,28),40,97,53,50,51,55,32,102,111,114,109,49,56,52,49,32,114,49,56,52,50,32,99,49,56,52,51,41,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,7),40,103,49,55,56,52,41,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,115,108,111,116,115,49,56,48,52,32,105,49,56,48,53,41,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,55,55,56,32,103,49,55,57,48,49,55,57,55,41};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,55,52,57,32,103,49,55,54,49,49,55,54,55,41};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,28),40,97,53,52,49,55,32,102,111,114,109,49,55,51,52,32,114,49,55,51,53,32,99,49,55,51,54,41,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,7),40,103,49,54,55,49,41,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,54,54,53,32,103,49,54,55,55,49,54,56,55,41};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,20),40,112,97,114,115,101,45,99,108,97,117,115,101,32,99,49,54,52,54,41,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,54,57,54,32,103,49,55,48,56,49,55,49,52,41};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,28),40,97,53,55,57,52,32,102,111,114,109,49,54,51,52,32,114,49,54,51,53,32,99,49,54,51,54,41,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,28),40,97,54,48,55,53,32,102,111,114,109,49,54,50,50,32,114,49,54,50,51,32,99,49,54,50,52,41,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,28),40,97,54,49,57,52,32,102,111,114,109,49,54,48,49,32,114,49,54,48,50,32,99,49,54,48,51,41,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,105,49,52,56,51,41,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,15),40,103,101,110,118,97,114,115,32,110,49,52,56,49,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,7),40,97,54,51,56,54,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,34),40,109,97,112,45,108,111,111,112,49,53,54,56,32,103,49,53,56,48,49,53,56,56,32,103,49,53,56,49,49,53,56,57,41,0,0,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,27),40,98,117,105,108,100,32,118,97,114,115,50,49,53,52,54,32,118,114,101,115,116,49,53,52,55,41,0,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,27),40,97,54,51,57,54,32,118,97,114,115,49,49,53,52,50,32,118,97,114,115,50,49,53,52,51,41,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,34),40,97,54,51,54,54,32,118,97,114,115,49,53,50,57,32,97,114,103,99,49,53,51,48,32,114,101,115,116,49,53,51,49,41,0,0,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,22),40,97,54,51,53,54,32,99,49,53,50,55,32,98,111,100,121,49,53,50,56,41,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,34),40,97,54,54,49,48,32,118,97,114,115,49,53,48,54,32,97,114,103,99,49,53,48,55,32,114,101,115,116,49,53,48,56,41,0,0,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,52,56,56,32,103,49,53,48,48,49,53,49,48,41};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,28),40,97,54,50,54,55,32,102,111,114,109,49,52,55,55,32,114,49,52,55,56,32,99,49,52,55,57,41,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,27),40,108,111,111,112,32,97,114,103,115,49,52,53,57,32,118,97,114,100,101,102,115,49,52,54,48,41,0,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,28),40,97,54,55,48,53,32,102,111,114,109,49,52,52,53,32,114,49,52,52,54,32,99,49,52,52,55,41,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,28),40,97,54,56,54,49,32,102,111,114,109,49,52,51,48,32,114,49,52,51,49,32,99,49,52,51,50,41,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,48),40,114,101,99,117,114,32,118,97,114,115,49,50,57,49,32,100,101,102,97,117,108,116,101,114,115,49,50,57,50,32,110,111,110,45,100,101,102,97,117,108,116,115,49,50,57,51,41};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,61),40,109,97,107,101,45,105,102,45,116,114,101,101,32,118,97,114,115,49,50,56,53,32,100,101,102,97,117,108,116,101,114,115,49,50,56,54,32,98,111,100,121,45,112,114,111,99,49,50,56,55,32,114,101,115,116,49,50,56,56,41,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,31),40,112,114,101,102,105,120,45,115,121,109,32,112,114,101,102,105,120,49,51,51,48,32,115,121,109,49,51,51,49,41,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,13),40,103,49,51,52,49,32,118,49,51,53,50,41,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,15),40,103,49,51,57,56,32,118,97,114,49,52,48,57,41,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,58),40,114,101,99,117,114,32,118,97,114,115,49,50,55,54,32,100,101,102,97,117,108,116,101,114,45,110,97,109,101,115,49,50,55,55,32,100,101,102,115,49,50,55,56,32,110,101,120,116,45,103,117,121,49,50,55,57,41,0,0,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,51,57,50,32,103,49,52,48,52,49,52,49,49,41};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,51,54,51,32,103,49,51,55,53,49,51,56,49,41};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,51,51,53,32,103,49,51,52,55,49,51,53,52,41};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,51,48,53,32,103,49,51,49,55,49,51,50,51,41};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,28),40,97,54,57,53,48,32,102,111,114,109,49,50,54,50,32,114,49,50,54,51,32,99,49,50,54,52,41,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,7),40,103,49,50,51,52,41,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,50,50,56,32,103,49,50,52,48,49,50,53,48,41};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,30),40,101,120,112,97,110,100,32,99,108,97,117,115,101,115,49,50,48,53,32,101,108,115,101,63,49,50,48,54,41,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,28),40,97,55,51,57,48,32,102,111,114,109,49,49,57,51,32,114,49,49,57,52,32,99,49,49,57,53,41,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,13),40,102,111,108,100,32,98,115,49,49,55,48,41,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,28),40,97,55,53,53,54,32,102,111,114,109,49,49,54,52,32,114,49,49,54,53,32,99,49,49,54,54,41,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,32),40,113,117,111,116,105,102,121,45,112,114,111,99,49,49,52,51,32,120,115,49,49,52,54,32,105,100,49,49,52,55,41};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,28),40,97,55,54,53,51,32,102,111,114,109,49,49,52,48,32,114,49,49,52,49,32,99,49,49,52,50,41,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,28),40,97,55,55,53,55,32,102,111,114,109,49,49,51,50,32,114,49,49,51,51,32,99,49,49,51,52,41,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,34),40,109,97,112,45,108,111,111,112,49,48,57,57,32,103,49,49,49,49,49,49,49,57,32,103,49,49,49,50,49,49,50,48,41,0,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,48,53,49,32,103,49,48,54,51,49,48,57,49,41};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,25),40,97,55,57,55,49,32,97,49,48,56,53,32,95,49,48,56,54,32,95,49,48,56,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,31),40,102,111,108,100,108,49,48,55,52,32,103,49,48,55,53,49,48,55,57,32,103,49,48,55,51,49,48,56,48,41,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,48,50,50,32,103,49,48,51,52,49,48,52,48,41};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,23),40,109,97,112,45,108,111,111,112,57,57,54,32,103,49,48,48,56,49,48,49,52,41,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,25),40,97,55,56,48,53,32,102,111,114,109,57,56,55,32,114,57,56,56,32,99,57,56,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,19),40,102,111,108,100,32,118,98,105,110,100,105,110,103,115,57,55,56,41,0,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,25),40,97,56,48,53,53,32,102,111,114,109,57,55,49,32,114,57,55,50,32,99,57,55,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,23),40,97,112,112,101,110,100,42,56,48,50,32,105,108,56,48,56,32,108,56,48,57,41,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,22),40,109,97,112,42,56,48,51,32,112,114,111,99,56,49,48,32,108,56,49,49,41,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,11),40,103,56,54,51,32,118,56,55,52,41,0,0,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,13),40,108,111,111,107,117,112,32,118,56,56,51,41,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,11),40,103,57,49,52,32,118,57,50,53,41,0,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,57,48,56,32,103,57,50,48,57,50,55,41,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,35),40,102,111,108,100,32,108,108,105,115,116,115,56,57,54,32,101,120,112,115,56,57,55,32,108,108,105,115,116,115,50,56,57,56,41,0,0,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,57,52,51,32,103,57,53,53,57,54,50,41,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,23),40,108,111,111,112,32,108,108,105,115,116,115,56,56,54,32,97,99,99,56,56,55,41,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,56,53,55,32,103,56,54,57,56,55,54,41,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,23),40,108,111,111,112,32,108,108,105,115,116,115,56,52,53,32,97,99,99,56,52,54,41,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,56,49,57,32,103,56,51,49,56,51,55,41,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,25),40,97,56,49,48,57,32,102,111,114,109,55,57,55,32,114,55,57,56,32,99,55,57,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,55,55,53,32,103,55,56,50,55,56,56,41,0,0,0,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,31),40,97,56,54,48,48,32,118,97,114,115,55,55,48,32,97,114,103,99,55,55,49,32,114,101,115,116,55,55,50,41,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,25),40,97,56,53,55,56,32,102,111,114,109,55,54,55,32,114,55,54,56,32,99,55,54,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,25),40,97,56,54,52,56,32,102,111,114,109,55,54,51,32,114,55,54,52,32,99,55,54,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,25),40,97,56,54,54,57,32,102,111,114,109,55,53,54,32,114,55,53,55,32,99,55,53,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,25),40,97,56,54,57,55,32,102,111,114,109,55,52,57,32,114,55,53,48,32,99,55,53,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,11),40,103,53,57,57,32,122,54,49,48,41,0,0,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,6),40,103,54,50,55,41,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,12),40,103,55,49,57,32,97,50,55,51,51,41,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,55,49,51,32,103,55,50,53,55,51,56,32,103,55,50,54,55,51,57,41,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,54,56,50,32,103,54,57,52,55,48,50,32,103,54,57,53,55,48,51,41,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,54,53,49,32,103,54,54,51,54,55,49,32,103,54,54,52,54,55,50,41,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,54,50,49,32,103,54,51,51,54,52,48,41,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,53,57,51,32,103,54,48,53,54,49,50,41,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,53,54,54,32,103,53,55,56,53,56,52,41,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,53,51,57,32,103,53,53,49,53,53,55,41,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,25),40,97,56,55,50,49,32,102,111,114,109,53,50,55,32,114,53,50,56,32,99,53,50,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,115,115,53,48,54,41,0,0,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,25),40,97,57,49,56,57,32,102,111,114,109,52,57,49,32,114,52,57,50,32,99,52,57,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,6),40,103,50,48,53,41,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,6),40,103,50,51,51,41,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,52,53,54,32,103,52,54,56,52,56,49,32,103,52,54,57,52,56,50,41,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,52,50,48,32,103,52,51,50,52,52,53,32,103,52,51,51,52,52,54,41,0,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,51,56,52,32,103,51,57,54,52,48,57,32,103,51,57,55,52,49,48,41,0,0,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,51,52,56,32,103,51,54,48,51,55,51,32,103,51,54,49,51,55,52,41,0,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,51,49,52,32,103,51,50,54,51,51,55,32,103,51,50,55,51,51,56,41,0,0,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,110,51,51,52,41,0,0,0,0,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,50,53,55,32,103,50,54,57,51,48,51,32,103,50,55,48,51,48,52,41,0,0,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,50,55,56,32,103,50,57,48,50,57,54,41,0,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,50,50,55,32,103,50,51,57,50,52,54,41,0,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,49,57,57,32,103,50,49,49,50,49,56,41,0,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,49,55,50,32,103,49,56,52,49,57,48,41,0,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,25),40,97,57,50,57,48,32,102,111,114,109,49,54,52,32,114,49,54,53,32,99,49,54,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,25),40,97,57,57,50,51,32,102,111,114,109,49,53,48,32,114,49,53,49,32,99,49,53,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,25),40,97,57,57,57,56,32,102,111,114,109,49,51,48,32,114,49,51,49,32,99,49,51,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,26),40,97,49,48,48,56,55,32,102,111,114,109,49,50,50,32,114,49,50,51,32,99,49,50,52,41,0,0,0,0,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,26),40,97,49,48,49,48,52,32,102,111,114,109,49,49,54,32,114,49,49,55,32,99,49,49,56,41,0,0,0,0,0,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,26),40,97,49,48,49,49,56,32,102,111,114,109,49,48,57,32,114,49,49,48,32,99,49,49,49,41,0,0,0,0,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,23),40,97,49,48,49,54,55,32,102,111,114,109,56,55,32,114,56,56,32,99,56,57,41,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,12),40,103,51,49,32,115,108,111,116,52,50,41,0,0,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,22),40,109,97,112,115,108,111,116,115,32,115,108,111,116,115,54,50,32,105,54,51,41,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,50,53,32,103,51,55,53,50,41,0,0,0,0,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,20),40,97,49,48,50,54,48,32,120,49,51,32,114,49,52,32,99,49,53,41,0,0,0,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,20),40,97,49,48,54,50,48,32,102,111,114,109,54,32,114,55,32,99,56,41,0,0,0,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_9393)
static void C_fcall f_9393(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9383)
static void C_ccall f_9383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9374)
static void C_ccall f_9374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9370)
static void C_ccall f_9370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6397)
static void C_ccall f_6397(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6395)
static void C_ccall f_6395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6280)
static void C_fcall f_6280(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9276)
static void C_ccall f_9276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9327)
static void C_ccall f_9327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9319)
static void C_fcall f_9319(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9318)
static void C_ccall f_9318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9315)
static void C_ccall f_9315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9295)
static void C_ccall f_9295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9291)
static void C_ccall f_9291(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9307)
static void C_fcall f_9307(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9306)
static void C_ccall f_9306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9289)
static void C_ccall f_9289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6333)
static void C_ccall f_6333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6330)
static void C_ccall f_6330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6336)
static void C_ccall f_6336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6343)
static void C_ccall f_6343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6318)
static void C_ccall f_6318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6312)
static void C_ccall f_6312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6315)
static void C_ccall f_6315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9361)
static void C_ccall f_9361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3607)
static void C_ccall f_3607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9598)
static void C_fcall f_9598(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6321)
static void C_ccall f_6321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6327)
static void C_ccall f_6327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6324)
static void C_ccall f_6324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9585)
static void C_fcall f_9585(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3616)
static void C_ccall f_3616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9252)
static void C_ccall f_9252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6371)
static void C_ccall f_6371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3623)
static void C_ccall f_3623(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6387)
static void C_ccall f_6387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3629)
static void C_ccall f_3629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3626)
static void C_ccall f_3626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3620)
static void C_ccall f_3620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9241)
static void C_fcall f_9241(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9337)
static void C_ccall f_9337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6381)
static void C_fcall f_6381(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6385)
static void C_ccall f_6385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9330)
static void C_ccall f_9330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6357)
static void C_ccall f_6357(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10532)
static void C_ccall f_10532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3637)
static void C_fcall f_3637(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4310)
static void C_ccall f_4310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4319)
static void C_ccall f_4319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4288)
static void C_ccall f_4288(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6355)
static void C_ccall f_6355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6367)
static void C_ccall f_6367(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3647)
static void C_ccall f_3647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4366)
static void C_fcall f_4366(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4362)
static void C_ccall f_4362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6274)
static void C_fcall f_6274(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6272)
static void C_ccall f_6272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9549)
static void C_fcall f_9549(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3650)
static void C_ccall f_3650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9212)
static void C_ccall f_9212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4335)
static void C_ccall f_4335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3656)
static void C_ccall f_3656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4337)
static void C_ccall f_4337(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6243)
static void C_ccall f_6243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9209)
static void C_ccall f_9209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9206)
static void C_ccall f_9206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9203)
static void C_ccall f_9203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4266)
static void C_ccall f_4266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9536)
static void C_fcall f_9536(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4268)
static void C_ccall f_4268(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5802)
static void C_ccall f_5802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10582)
static void C_fcall f_10582(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4306)
static void C_ccall f_4306(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4304)
static void C_ccall f_4304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6294)
static void C_ccall f_6294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10578)
static void C_ccall f_10578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6298)
static void C_ccall f_6298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4272)
static void C_ccall f_4272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9526)
static void C_ccall f_9526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5811)
static void C_ccall f_5811(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3283)
static void C_ccall f_3283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3289)
static void C_ccall f_3289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6266)
static void C_ccall f_6266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3286)
static void C_ccall f_3286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5808)
static void C_ccall f_5808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3280)
static void C_ccall f_3280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6268)
static void C_ccall f_6268(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5805)
static void C_ccall f_5805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9517)
static void C_ccall f_9517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5820)
static void C_fcall f_5820(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3688)
static void C_ccall f_3688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9513)
static void C_ccall f_9513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3295)
static void C_ccall f_3295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3292)
static void C_ccall f_3292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3298)
static void C_ccall f_3298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10558)
static void C_ccall f_10558(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5816)
static void C_ccall f_5816(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5814)
static void C_ccall f_5814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10552)
static void C_ccall f_10552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9501)
static void C_ccall f_9501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5826)
static void C_fcall f_5826(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5823)
static void C_fcall f_5823(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4224)
static void C_fcall f_4224(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6309)
static void C_ccall f_6309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7697)
static void C_ccall f_7697(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4235)
static void C_ccall f_4235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6306)
static void C_ccall f_6306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7681)
static void C_fcall f_7681(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5848)
static C_word C_fcall f_5848(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_4205)
static void C_fcall f_4205(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5862)
static void C_ccall f_5862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7672)
static void C_ccall f_7672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4212)
static void C_ccall f_4212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5864)
static void C_fcall f_5864(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3271)
static void C_ccall f_3271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6213)
static void C_ccall f_6213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3277)
static void C_ccall f_3277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9928)
static void C_ccall f_9928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3274)
static void C_ccall f_3274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9924)
static void C_ccall f_9924(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9922)
static void C_ccall f_9922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4327)
static void C_ccall f_4327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8593)
static void C_ccall f_8593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5694)
static C_word C_fcall f_5694(C_word t0,C_word t1);
C_noret_decl(f_6083)
static void C_ccall f_6083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6086)
static void C_ccall f_6086(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6080)
static void C_ccall f_6080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8586)
static void C_ccall f_8586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8583)
static void C_ccall f_8583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7616)
static void C_ccall f_7616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7613)
static void C_ccall f_7613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6974)
static void C_ccall f_6974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5785)
static void C_ccall f_5785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7784)
static void C_ccall f_7784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6097)
static void C_ccall f_6097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10123)
static void C_ccall f_10123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6984)
static void C_fcall f_6984(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5799)
static void C_ccall f_5799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6982)
static void C_ccall f_6982(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5795)
static void C_ccall f_5795(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5793)
static void C_ccall f_5793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6978)
static void C_ccall f_6978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3261)
static void C_ccall f_3261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3268)
static void C_ccall f_3268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3265)
static void C_ccall f_3265(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7660)
static void C_ccall f_7660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7669)
static void C_fcall f_7669(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8388)
static void C_fcall f_8388(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10105)
static void C_ccall f_10105(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10103)
static void C_ccall f_10103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8540)
static void C_fcall f_8540(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7652)
static void C_ccall f_7652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7656)
static void C_fcall f_7656(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7654)
static void C_ccall f_7654(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10119)
static void C_ccall f_10119(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10117)
static void C_ccall f_10117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8577)
static void C_ccall f_8577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8579)
static void C_ccall f_8579(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4810)
static void C_ccall f_4810(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7632)
static void C_ccall f_7632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8073)
static void C_fcall f_8073(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4820)
static void C_fcall f_4820(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7762)
static void C_ccall f_7762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7765)
static void C_ccall f_7765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8515)
static void C_ccall f_8515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8060)
static void C_ccall f_8060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8068)
static void C_ccall f_8068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8098)
static void C_ccall f_8098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7756)
static void C_ccall f_7756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7758)
static void C_ccall f_7758(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8502)
static void C_fcall f_8502(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4808)
static void C_ccall f_4808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5709)
static void C_fcall f_5709(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5707)
static void C_ccall f_5707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7701)
static void C_ccall f_7701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10404)
static void C_ccall f_10404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4857)
static void C_ccall f_4857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8360)
static void C_ccall f_8360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8175)
static void C_ccall f_8175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8171)
static void C_ccall f_8171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5654)
static void C_ccall f_5654(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6909)
static void C_ccall f_6909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4830)
static void C_ccall f_4830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8302)
static void C_ccall f_8302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8056)
static void C_ccall f_8056(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8054)
static void C_ccall f_8054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4844)
static void C_fcall f_4844(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8196)
static void C_ccall f_8196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5138)
static void C_ccall f_5138(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5744)
static void C_fcall f_5744(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8197)
static void C_fcall f_8197(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8193)
static void C_ccall f_8193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7744)
static void C_ccall f_7744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6933)
static void C_ccall f_6933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6937)
static void C_ccall f_6937(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8323)
static void C_ccall f_8323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7946)
static void C_fcall f_7946(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5141)
static void C_ccall f_5141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6941)
static void C_ccall f_6941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8312)
static void C_fcall f_8312(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6949)
static void C_ccall f_6949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9151)
static void C_fcall f_9151(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8017)
static void C_fcall f_8017(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8120)
static void C_ccall f_8120(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7911)
static void C_fcall f_7911(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3690)
static void C_fcall f_3690(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8141)
static void C_ccall f_8141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8148)
static void C_ccall f_8148(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5181)
static void C_ccall f_5181(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3887)
static void C_fcall f_3887(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5115)
static void C_ccall f_5115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6951)
static void C_ccall f_6951(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6955)
static void C_ccall f_6955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8114)
static void C_ccall f_8114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8110)
static void C_ccall f_8110(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5158)
static void C_ccall f_5158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8108)
static void C_ccall f_8108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9075)
static void C_ccall f_9075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5164)
static void C_ccall f_5164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7982)
static void C_fcall f_7982(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3904)
static void C_ccall f_3904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3817)
static void C_ccall f_3817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5105)
static void C_ccall f_5105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3831)
static void C_ccall f_3831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3833)
static void C_fcall f_3833(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5039)
static void C_ccall f_5039(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5037)
static void C_ccall f_5037(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7976)
static void C_ccall f_7976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7972)
static void C_ccall f_7972(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7970)
static void C_ccall f_7970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5043)
static void C_ccall f_5043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5049)
static void C_ccall f_5049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7489)
static void C_ccall f_7489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5046)
static void C_ccall f_5046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10621)
static void C_ccall f_10621(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10517)
static void C_ccall f_10517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10625)
static void C_ccall f_10625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10513)
static void C_ccall f_10513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5078)
static void C_ccall f_5078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7493)
static C_word C_fcall f_7493(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_5089)
static void C_ccall f_5089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3703)
static void C_fcall f_3703(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7403)
static void C_ccall f_7403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7406)
static void C_ccall f_7406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3851)
static void C_ccall f_3851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7409)
static void C_ccall f_7409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10069)
static void C_ccall f_10069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10059)
static void C_ccall f_10059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9999)
static void C_ccall f_9999(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9997)
static void C_ccall f_9997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7467)
static void C_ccall f_7467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3749)
static void C_ccall f_3749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3757)
static void C_ccall f_3757(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3514)
static void C_ccall f_3514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10076)
static void C_ccall f_10076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3510)
static void C_fcall f_3510(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7447)
static void C_ccall f_7447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3521)
static void C_ccall f_3521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7470)
static void C_ccall f_7470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7474)
static void C_ccall f_7474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10092)
static void C_ccall f_10092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externexport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3548)
static void C_ccall f_3548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10040)
static void C_fcall f_10040(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7456)
static void C_ccall f_7456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7453)
static void C_ccall f_7453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5284)
static void C_ccall f_5284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4489)
static void C_fcall f_4489(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3550)
static void C_fcall f_3550(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4480)
static void C_ccall f_4480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9940)
static void C_ccall f_9940(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3579)
static void C_ccall f_3579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10088)
static void C_ccall f_10088(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10086)
static void C_ccall f_10086(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4536)
static void C_fcall f_4536(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4534)
static void C_ccall f_4534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9963)
static void C_fcall f_9963(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5268)
static void C_ccall f_5268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10390)
static void C_ccall f_10390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4421)
static void C_ccall f_4421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4565)
static void C_ccall f_4565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10387)
static void C_ccall f_10387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10384)
static void C_ccall f_10384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7420)
static void C_ccall f_7420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7422)
static void C_fcall f_7422(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5236)
static void C_ccall f_5236(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5238)
static void C_ccall f_5238(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4575)
static void C_ccall f_4575(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4573)
static void C_ccall f_4573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4579)
static void C_ccall f_4579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5204)
static void C_ccall f_5204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4588)
static void C_ccall f_4588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10366)
static void C_ccall f_10366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4582)
static void C_ccall f_4582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4585)
static void C_ccall f_4585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10368)
static void C_fcall f_10368(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5258)
static void C_fcall f_5258(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5300)
static void C_ccall f_5300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5251)
static void C_ccall f_5251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5310)
static void C_ccall f_5310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4468)
static void C_ccall f_4468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5277)
static void C_ccall f_5277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10343)
static void C_ccall f_10343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4470)
static void C_fcall f_4470(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4477)
static void C_ccall f_4477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5271)
static void C_ccall f_5271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5248)
static void C_ccall f_5248(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5245)
static void C_ccall f_5245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5242)
static void C_ccall f_5242(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5359)
static void C_ccall f_5359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5353)
static void C_ccall f_5353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9725)
static void C_ccall f_9725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7598)
static void C_ccall f_7598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9711)
static void C_fcall f_9711(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4412)
static void C_ccall f_4412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4414)
static void C_ccall f_4414(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4418)
static void C_ccall f_4418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5977)
static void C_ccall f_5977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5973)
static void C_ccall f_5973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5228)
static void C_ccall f_5228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7557)
static void C_ccall f_7557(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7555)
static void C_ccall f_7555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8895)
static void C_fcall f_8895(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5336)
static void C_ccall f_5336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5997)
static void C_fcall f_5997(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6770)
static void C_ccall f_6770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5333)
static void C_ccall f_5333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9744)
static void C_fcall f_9744(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7192)
static void C_ccall f_7192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8885)
static void C_ccall f_8885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7195)
static void C_ccall f_7195(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7198)
static void C_ccall f_7198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6781)
static void C_ccall f_6781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7571)
static void C_fcall f_7571(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7180)
static void C_ccall f_7180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7181)
static void C_fcall f_7181(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7189)
static void C_ccall f_7189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6684)
static void C_ccall f_6684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6680)
static void C_ccall f_6680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9731)
static void C_fcall f_9731(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7561)
static void C_ccall f_7561(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6688)
static void C_ccall f_6688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6692)
static void C_ccall f_6692(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6696)
static void C_ccall f_6696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8856)
static void C_ccall f_8856(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8858)
static C_word C_fcall f_8858(C_word *a,C_word t0,C_word t1,C_word t2);
C_noret_decl(f_9455)
static void C_fcall f_9455(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7506)
static void C_fcall f_7506(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7504)
static void C_ccall f_7504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9780)
static void C_fcall f_9780(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9406)
static void C_fcall f_9406(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10619)
static void C_ccall f_10619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10611)
static void C_ccall f_10611(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6710)
static void C_ccall f_6710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6728)
static void C_ccall f_6728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6725)
static void C_ccall f_6725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6722)
static void C_ccall f_6722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8812)
static void C_ccall f_8812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7091)
static void C_ccall f_7091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8788)
static void C_ccall f_8788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8785)
static void C_ccall f_8785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6704)
static void C_ccall f_6704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6706)
static void C_ccall f_6706(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4041)
static void C_ccall f_4041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4146)
static void C_ccall f_4146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4140)
static void C_ccall f_4140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6199)
static void C_ccall f_6199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6611)
static void C_ccall f_6611(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5944)
static void C_ccall f_5944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4015)
static void C_ccall f_4015(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8496)
static void C_ccall f_8496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6623)
static void C_fcall f_6623(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6621)
static void C_ccall f_6621(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4023)
static void C_ccall f_4023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4025)
static void C_ccall f_4025(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6731)
static void C_ccall f_6731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6185)
static void C_ccall f_6185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5966)
static void C_ccall f_5966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8741)
static void C_ccall f_8741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8749)
static void C_ccall f_8749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6742)
static void C_ccall f_6742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6744)
static void C_fcall f_6744(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3392)
static void C_ccall f_3392(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3395)
static void C_ccall f_3395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3398)
static void C_ccall f_3398(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4086)
static void C_fcall f_4086(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8776)
static void C_ccall f_8776(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6189)
static void C_ccall f_6189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8770)
static void C_ccall f_8770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8777)
static void C_fcall f_8777(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4187)
static void C_ccall f_4187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9269)
static void C_ccall f_9269(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9262)
static void C_ccall f_9262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6652)
static void C_ccall f_6652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8762)
static void C_fcall f_8762(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8761)
static void C_ccall f_8761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8454)
static void C_ccall f_8454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8798)
static void C_ccall f_8798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8702)
static void C_ccall f_8702(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4137)
static void C_ccall f_4137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4131)
static void C_ccall f_4131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3350)
static void C_ccall f_3350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7152)
static void C_ccall f_7152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3359)
static void C_ccall f_3359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3353)
static void C_ccall f_3353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6193)
static void C_ccall f_6193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3356)
static void C_ccall f_3356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6195)
static void C_ccall f_6195(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7157)
static void C_fcall f_7157(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7156)
static void C_ccall f_7156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8461)
static void C_ccall f_8461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8467)
static void C_fcall f_8467(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4685)
static void C_ccall f_4685(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3362)
static void C_ccall f_3362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3368)
static void C_ccall f_3368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7143)
static void C_ccall f_7143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7144)
static void C_fcall f_7144(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3365)
static void C_ccall f_3365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8722)
static void C_ccall f_8722(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8720)
static void C_ccall f_8720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3371)
static void C_ccall f_3371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3377)
static void C_ccall f_3377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7171)
static void C_ccall f_7171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3374)
static void C_ccall f_3374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7177)
static void C_ccall f_7177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7174)
static void C_ccall f_7174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8752)
static void C_ccall f_8752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8758)
static void C_ccall f_8758(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3380)
static void C_ccall f_3380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3389)
static void C_ccall f_3389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3386)
static void C_ccall f_3386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3383)
static void C_ccall f_3383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7165)
static void C_ccall f_7165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4672)
static void C_ccall f_4672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7115)
static void C_ccall f_7115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4005)
static void C_ccall f_4005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8423)
static void C_fcall f_8423(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10209)
static void C_fcall f_10209(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7134)
static void C_ccall f_7134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6899)
static void C_ccall f_6899(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7137)
static void C_ccall f_7137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7131)
static void C_ccall f_7131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7123)
static void C_ccall f_7123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7231)
static void C_fcall f_7231(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10259)
static void C_ccall f_10259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10273)
static void C_ccall f_10273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7330)
static void C_ccall f_7330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7336)
static void C_fcall f_7336(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10261)
static void C_ccall f_10261(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10166)
static void C_ccall f_10166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10168)
static void C_ccall f_10168(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10276)
static void C_ccall f_10276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10279)
static void C_ccall f_10279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9658)
static void C_ccall f_9658(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5499)
static void C_fcall f_5499(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10265)
static void C_ccall f_10265(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10282)
static void C_ccall f_10282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9649)
static void C_ccall f_9649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9645)
static void C_ccall f_9645(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7260)
static void C_ccall f_7260(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7266)
static void C_fcall f_7266(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9673)
static void C_fcall f_9673(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10283)
static void C_fcall f_10283(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10172)
static void C_ccall f_10172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9660)
static void C_fcall f_9660(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9885)
static void C_fcall f_9885(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7395)
static void C_ccall f_7395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7391)
static void C_ccall f_7391(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7385)
static void C_ccall f_7385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7389)
static void C_ccall f_7389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7381)
static void C_ccall f_7381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9636)
static void C_ccall f_9636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8961)
static void C_fcall f_8961(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5422)
static void C_ccall f_5422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9844)
static void C_ccall f_9844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6572)
static void C_ccall f_6572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8997)
static void C_fcall f_8997(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7205)
static void C_ccall f_7205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5416)
static void C_ccall f_5416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5418)
static void C_ccall f_5418(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10194)
static void C_ccall f_10194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9879)
static void C_ccall f_9879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5440)
static void C_ccall f_5440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4978)
static void C_ccall f_4978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4972)
static void C_ccall f_4972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5437)
static void C_ccall f_5437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4974)
static void C_ccall f_4974(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9815)
static void C_fcall f_9815(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4905)
static void C_ccall f_4905(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5449)
static void C_ccall f_5449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4907)
static void C_ccall f_4907(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5446)
static void C_ccall f_5446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5505)
static void C_fcall f_5505(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4911)
static void C_ccall f_4911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4918)
static void C_ccall f_4918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5455)
static void C_ccall f_5455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5554)
static void C_ccall f_5554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9850)
static void C_fcall f_9850(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4926)
static void C_ccall f_4926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8948)
static void C_fcall f_8948(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4928)
static void C_ccall f_4928(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5480)
static void C_fcall f_5480(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7301)
static void C_fcall f_7301(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5524)
static void C_ccall f_5524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5478)
static void C_ccall f_5478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5520)
static void C_fcall f_5520(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5575)
static void C_ccall f_5575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4943)
static void C_ccall f_4943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4945)
static void C_ccall f_4945(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4949)
static void C_ccall f_4949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4956)
static void C_ccall f_4956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8908)
static void C_fcall f_8908(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4964)
static void C_ccall f_4964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7895)
static void C_ccall f_7895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6524)
static void C_ccall f_6524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7875)
static void C_fcall f_7875(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6535)
static void C_ccall f_6535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4775)
static void C_fcall f_4775(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9194)
static void C_ccall f_9194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9190)
static void C_ccall f_9190(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4782)
static void C_ccall f_4782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4796)
static void C_ccall f_4796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4932)
static void C_ccall f_4932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8698)
static void C_ccall f_8698(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8696)
static void C_ccall f_8696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5408)
static void C_ccall f_5408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4051)
static void C_fcall f_4051(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9010)
static void C_fcall f_9010(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7821)
static void C_ccall f_7821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7824)
static void C_ccall f_7824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5516)
static void C_ccall f_5516(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5512)
static void C_fcall f_5512(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9081)
static void C_fcall f_9081(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7810)
static void C_ccall f_7810(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9188)
static void C_ccall f_9188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10017)
static void C_fcall f_10017(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10014)
static void C_ccall f_10014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8653)
static void C_ccall f_8653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7800)
static void C_ccall f_7800(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7806)
static void C_ccall f_7806(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7804)
static void C_ccall f_7804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8649)
static void C_ccall f_8649(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8647)
static void C_ccall f_8647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4155)
static void C_fcall f_4155(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8674)
static void C_ccall f_8674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8670)
static void C_ccall f_8670(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7860)
static void C_ccall f_7860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7862)
static void C_fcall f_7862(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9116)
static void C_fcall f_9116(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10003)
static void C_ccall f_10003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4701)
static void C_ccall f_4701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9110)
static void C_ccall f_9110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4707)
static void C_ccall f_4707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4162)
static void C_ccall f_4162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4660)
static void C_ccall f_4660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4662)
static void C_ccall f_4662(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8668)
static void C_ccall f_8668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7853)
static void C_ccall f_7853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4716)
static void C_ccall f_4716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4710)
static void C_ccall f_4710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4176)
static void C_ccall f_4176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8614)
static void C_ccall f_8614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7843)
static void C_ccall f_7843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7849)
static void C_ccall f_7849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4725)
static void C_fcall f_4725(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9046)
static void C_fcall f_9046(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8601)
static void C_ccall f_8601(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8607)
static void C_ccall f_8607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4732)
static void C_ccall f_4732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4190)
static void C_ccall f_4190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4196)
static void C_ccall f_4196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8632)
static void C_ccall f_8632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4746)
static void C_ccall f_4746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8622)
static void C_fcall f_8622(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6471)
static void C_fcall f_6471(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4757)
static void C_ccall f_4757(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6401)
static void C_ccall f_6401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4760)
static void C_ccall f_4760(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4766)
static void C_ccall f_4766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8273)
static void C_fcall f_8273(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8271)
static void C_ccall f_8271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4614)
static void C_ccall f_4614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3963)
static void C_ccall f_3963(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3961)
static void C_ccall f_3961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4611)
static void C_ccall f_4611(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6420)
static void C_ccall f_6420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6422)
static void C_fcall f_6422(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6852)
static void C_ccall f_6852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9442)
static void C_fcall f_9442(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6860)
static void C_ccall f_6860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6862)
static void C_ccall f_6862(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6435)
static void C_fcall f_6435(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6866)
static void C_ccall f_6866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6869)
static void C_ccall f_6869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8215)
static void C_ccall f_8215(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8216)
static void C_ccall f_8216(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3987)
static void C_ccall f_3987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8241)
static void C_fcall f_8241(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3597)
static void C_ccall f_3597(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3595)
static void C_ccall f_3595(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8239)
static void C_ccall f_8239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8265)
static void C_ccall f_8265(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7023)
static void C_ccall f_7023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3973)
static void C_ccall f_3973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5052)
static void C_ccall f_5052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8205)
static void C_ccall f_8205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7005)
static void C_ccall f_7005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8209)
static void C_ccall f_8209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3429)
static void C_ccall f_3429(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3420)
static void C_ccall f_3420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5059)
static void C_fcall f_5059(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_3480)
static void C_ccall f_3480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3489)
static void C_ccall f_3489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5072)
static void C_ccall f_5072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3486)
static void C_ccall f_3486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3476)
static void C_ccall f_3476(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3474)
static void C_ccall f_3474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6066)
static void C_ccall f_6066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6062)
static void C_ccall f_6062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8227)
static void C_ccall f_8227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6113)
static void C_ccall f_6113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7065)
static void C_ccall f_7065(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5069)
static void C_ccall f_5069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3458)
static void C_ccall f_3458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7051)
static void C_fcall f_7051(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6074)
static void C_ccall f_6074(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6076)
static void C_ccall f_6076(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3414)
static void C_ccall f_3414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3416)
static void C_ccall f_3416(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3314)
static void C_ccall f_3314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3317)
static void C_ccall f_3317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3410)
static void C_ccall f_3410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3768)
static void C_fcall f_3768(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3311)
static void C_ccall f_3311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7045)
static void C_fcall f_7045(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3323)
static void C_ccall f_3323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3326)
static void C_ccall f_3326(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3329)
static void C_ccall f_3329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3320)
static void C_ccall f_3320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7035)
static void C_ccall f_7035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7031)
static void C_ccall f_7031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3435)
static void C_ccall f_3435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3432)
static void C_ccall f_3432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3335)
static void C_ccall f_3335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3332)
static void C_ccall f_3332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3786)
static void C_ccall f_3786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3338)
static void C_ccall f_3338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3788)
static void C_fcall f_3788(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6026)
static void C_ccall f_6026(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3407)
static void C_ccall f_3407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3404)
static void C_ccall f_3404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3401)
static void C_ccall f_3401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3344)
static void C_ccall f_3344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10311)
static void C_ccall f_10311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3347)
static void C_ccall f_3347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3341)
static void C_ccall f_3341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8257)
static void C_fcall f_8257(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10416)
static void C_ccall f_10416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3307)
static void C_ccall f_3307(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3304)
static void C_ccall f_3304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3301)
static void C_ccall f_3301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10420)
static void C_fcall f_10420(C_word t0,C_word t1) C_noret;

C_noret_decl(trf_9393)
static void C_fcall trf_9393(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9393(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9393(t0,t1,t2,t3);}

C_noret_decl(trf_6280)
static void C_fcall trf_6280(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6280(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6280(t0,t1,t2);}

C_noret_decl(trf_9319)
static void C_fcall trf_9319(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9319(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9319(t0,t1);}

C_noret_decl(trf_9307)
static void C_fcall trf_9307(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9307(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9307(t0,t1);}

C_noret_decl(trf_9598)
static void C_fcall trf_9598(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9598(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9598(t0,t1);}

C_noret_decl(trf_9585)
static void C_fcall trf_9585(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9585(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9585(t0,t1,t2,t3);}

C_noret_decl(trf_9241)
static void C_fcall trf_9241(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9241(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9241(t0,t1,t2);}

C_noret_decl(trf_6381)
static void C_fcall trf_6381(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6381(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6381(t0,t1);}

C_noret_decl(trf_3637)
static void C_fcall trf_3637(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3637(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3637(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4366)
static void C_fcall trf_4366(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4366(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4366(t0,t1);}

C_noret_decl(trf_6274)
static void C_fcall trf_6274(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6274(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6274(t0,t1,t2);}

C_noret_decl(trf_9549)
static void C_fcall trf_9549(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9549(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9549(t0,t1);}

C_noret_decl(trf_9536)
static void C_fcall trf_9536(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9536(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9536(t0,t1,t2,t3);}

C_noret_decl(trf_10582)
static void C_fcall trf_10582(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10582(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10582(t0,t1,t2);}

C_noret_decl(trf_5820)
static void C_fcall trf_5820(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5820(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5820(t0,t1);}

C_noret_decl(trf_5826)
static void C_fcall trf_5826(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5826(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5826(t0,t1);}

C_noret_decl(trf_5823)
static void C_fcall trf_5823(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5823(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5823(t0,t1);}

C_noret_decl(trf_4224)
static void C_fcall trf_4224(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4224(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4224(t0,t1);}

C_noret_decl(trf_7681)
static void C_fcall trf_7681(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7681(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7681(t0,t1);}

C_noret_decl(trf_4205)
static void C_fcall trf_4205(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4205(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4205(t0,t1,t2,t3);}

C_noret_decl(trf_5864)
static void C_fcall trf_5864(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5864(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5864(t0,t1,t2);}

C_noret_decl(trf_6984)
static void C_fcall trf_6984(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6984(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_6984(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_7669)
static void C_fcall trf_7669(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7669(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7669(t0,t1);}

C_noret_decl(trf_8388)
static void C_fcall trf_8388(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8388(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8388(t0,t1,t2);}

C_noret_decl(trf_8540)
static void C_fcall trf_8540(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8540(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8540(t0,t1,t2);}

C_noret_decl(trf_7656)
static void C_fcall trf_7656(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7656(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7656(t0,t1,t2,t3);}

C_noret_decl(trf_8073)
static void C_fcall trf_8073(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8073(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8073(t0,t1,t2);}

C_noret_decl(trf_4820)
static void C_fcall trf_4820(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4820(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4820(t0,t1);}

C_noret_decl(trf_8502)
static void C_fcall trf_8502(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8502(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8502(t0,t1,t2,t3);}

C_noret_decl(trf_5709)
static void C_fcall trf_5709(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5709(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5709(t0,t1,t2);}

C_noret_decl(trf_4844)
static void C_fcall trf_4844(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4844(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4844(t0,t1);}

C_noret_decl(trf_5744)
static void C_fcall trf_5744(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5744(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5744(t0,t1,t2);}

C_noret_decl(trf_8197)
static void C_fcall trf_8197(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8197(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8197(t0,t1,t2);}

C_noret_decl(trf_7946)
static void C_fcall trf_7946(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7946(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7946(t0,t1,t2,t3);}

C_noret_decl(trf_8312)
static void C_fcall trf_8312(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8312(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8312(t0,t1);}

C_noret_decl(trf_9151)
static void C_fcall trf_9151(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9151(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9151(t0,t1,t2);}

C_noret_decl(trf_8017)
static void C_fcall trf_8017(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8017(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8017(t0,t1,t2);}

C_noret_decl(trf_7911)
static void C_fcall trf_7911(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7911(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7911(t0,t1,t2);}

C_noret_decl(trf_3690)
static void C_fcall trf_3690(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3690(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3690(t0,t1,t2,t3);}

C_noret_decl(trf_3887)
static void C_fcall trf_3887(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3887(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3887(t0,t1);}

C_noret_decl(trf_7982)
static void C_fcall trf_7982(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7982(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7982(t0,t1,t2);}

C_noret_decl(trf_3833)
static void C_fcall trf_3833(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3833(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3833(t0,t1,t2,t3);}

C_noret_decl(trf_3703)
static void C_fcall trf_3703(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3703(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3703(t0,t1);}

C_noret_decl(trf_3510)
static void C_fcall trf_3510(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3510(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3510(t0,t1,t2);}

C_noret_decl(trf_10040)
static void C_fcall trf_10040(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10040(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10040(t0,t1);}

C_noret_decl(trf_4489)
static void C_fcall trf_4489(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4489(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4489(t0,t1);}

C_noret_decl(trf_3550)
static void C_fcall trf_3550(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3550(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3550(t0,t1,t2);}

C_noret_decl(trf_4536)
static void C_fcall trf_4536(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4536(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4536(t0,t1,t2);}

C_noret_decl(trf_9963)
static void C_fcall trf_9963(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9963(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9963(t0,t1);}

C_noret_decl(trf_7422)
static void C_fcall trf_7422(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7422(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7422(t0,t1,t2,t3);}

C_noret_decl(trf_10368)
static void C_fcall trf_10368(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10368(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_10368(t0,t1,t2,t3);}

C_noret_decl(trf_5258)
static void C_fcall trf_5258(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5258(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_5258(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_4470)
static void C_fcall trf_4470(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4470(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4470(t0,t1,t2);}

C_noret_decl(trf_9711)
static void C_fcall trf_9711(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9711(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9711(t0,t1,t2);}

C_noret_decl(trf_8895)
static void C_fcall trf_8895(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8895(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8895(t0,t1,t2,t3);}

C_noret_decl(trf_5997)
static void C_fcall trf_5997(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5997(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5997(t0,t1,t2);}

C_noret_decl(trf_9744)
static void C_fcall trf_9744(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9744(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9744(t0,t1);}

C_noret_decl(trf_7571)
static void C_fcall trf_7571(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7571(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7571(t0,t1,t2);}

C_noret_decl(trf_7181)
static void C_fcall trf_7181(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7181(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7181(t0,t1,t2);}

C_noret_decl(trf_9731)
static void C_fcall trf_9731(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9731(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9731(t0,t1,t2,t3);}

C_noret_decl(trf_9455)
static void C_fcall trf_9455(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9455(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9455(t0,t1);}

C_noret_decl(trf_7506)
static void C_fcall trf_7506(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7506(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7506(t0,t1,t2);}

C_noret_decl(trf_9780)
static void C_fcall trf_9780(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9780(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9780(t0,t1,t2);}

C_noret_decl(trf_9406)
static void C_fcall trf_9406(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9406(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9406(t0,t1);}

C_noret_decl(trf_6623)
static void C_fcall trf_6623(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6623(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6623(t0,t1,t2);}

C_noret_decl(trf_6744)
static void C_fcall trf_6744(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6744(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6744(t0,t1,t2,t3);}

C_noret_decl(trf_4086)
static void C_fcall trf_4086(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4086(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4086(t0,t1,t2);}

C_noret_decl(trf_8777)
static void C_fcall trf_8777(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8777(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8777(t0,t1);}

C_noret_decl(trf_8762)
static void C_fcall trf_8762(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8762(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8762(t0,t1,t2);}

C_noret_decl(trf_7157)
static void C_fcall trf_7157(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7157(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7157(t0,t1,t2);}

C_noret_decl(trf_8467)
static void C_fcall trf_8467(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8467(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8467(t0,t1,t2);}

C_noret_decl(trf_7144)
static void C_fcall trf_7144(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7144(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7144(t0,t1,t2);}

C_noret_decl(trf_8423)
static void C_fcall trf_8423(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8423(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8423(t0,t1,t2,t3);}

C_noret_decl(trf_10209)
static void C_fcall trf_10209(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10209(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10209(t0,t1);}

C_noret_decl(trf_7231)
static void C_fcall trf_7231(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7231(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7231(t0,t1,t2);}

C_noret_decl(trf_7336)
static void C_fcall trf_7336(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7336(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7336(t0,t1,t2);}

C_noret_decl(trf_5499)
static void C_fcall trf_5499(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5499(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5499(t0,t1);}

C_noret_decl(trf_7266)
static void C_fcall trf_7266(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7266(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7266(t0,t1,t2);}

C_noret_decl(trf_9673)
static void C_fcall trf_9673(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9673(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9673(t0,t1);}

C_noret_decl(trf_10283)
static void C_fcall trf_10283(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10283(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10283(t0,t1,t2);}

C_noret_decl(trf_9660)
static void C_fcall trf_9660(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9660(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9660(t0,t1,t2,t3);}

C_noret_decl(trf_9885)
static void C_fcall trf_9885(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9885(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9885(t0,t1,t2);}

C_noret_decl(trf_8961)
static void C_fcall trf_8961(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8961(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8961(t0,t1);}

C_noret_decl(trf_8997)
static void C_fcall trf_8997(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8997(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8997(t0,t1,t2,t3);}

C_noret_decl(trf_9815)
static void C_fcall trf_9815(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9815(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9815(t0,t1,t2);}

C_noret_decl(trf_5505)
static void C_fcall trf_5505(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5505(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5505(t0,t1);}

C_noret_decl(trf_9850)
static void C_fcall trf_9850(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9850(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9850(t0,t1,t2);}

C_noret_decl(trf_8948)
static void C_fcall trf_8948(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8948(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8948(t0,t1,t2,t3);}

C_noret_decl(trf_5480)
static void C_fcall trf_5480(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5480(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5480(t0,t1,t2,t3);}

C_noret_decl(trf_7301)
static void C_fcall trf_7301(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7301(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7301(t0,t1,t2);}

C_noret_decl(trf_5520)
static void C_fcall trf_5520(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5520(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5520(t0,t1);}

C_noret_decl(trf_8908)
static void C_fcall trf_8908(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8908(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8908(t0,t1);}

C_noret_decl(trf_7875)
static void C_fcall trf_7875(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7875(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7875(t0,t1);}

C_noret_decl(trf_4775)
static void C_fcall trf_4775(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4775(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4775(t0,t1,t2,t3);}

C_noret_decl(trf_4051)
static void C_fcall trf_4051(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4051(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4051(t0,t1,t2);}

C_noret_decl(trf_9010)
static void C_fcall trf_9010(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9010(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9010(t0,t1);}

C_noret_decl(trf_5512)
static void C_fcall trf_5512(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5512(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5512(t0,t1);}

C_noret_decl(trf_9081)
static void C_fcall trf_9081(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9081(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9081(t0,t1,t2);}

C_noret_decl(trf_10017)
static void C_fcall trf_10017(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10017(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10017(t0,t1);}

C_noret_decl(trf_4155)
static void C_fcall trf_4155(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4155(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4155(t0,t1,t2,t3);}

C_noret_decl(trf_7862)
static void C_fcall trf_7862(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7862(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7862(t0,t1,t2,t3);}

C_noret_decl(trf_9116)
static void C_fcall trf_9116(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9116(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9116(t0,t1,t2);}

C_noret_decl(trf_4725)
static void C_fcall trf_4725(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4725(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4725(t0,t1,t2,t3);}

C_noret_decl(trf_9046)
static void C_fcall trf_9046(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9046(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9046(t0,t1,t2);}

C_noret_decl(trf_8622)
static void C_fcall trf_8622(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8622(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8622(t0,t1,t2);}

C_noret_decl(trf_6471)
static void C_fcall trf_6471(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6471(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6471(t0,t1,t2,t3);}

C_noret_decl(trf_8273)
static void C_fcall trf_8273(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8273(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8273(t0,t1,t2);}

C_noret_decl(trf_6422)
static void C_fcall trf_6422(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6422(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6422(t0,t1,t2,t3);}

C_noret_decl(trf_9442)
static void C_fcall trf_9442(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9442(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9442(t0,t1,t2,t3);}

C_noret_decl(trf_6435)
static void C_fcall trf_6435(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6435(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6435(t0,t1);}

C_noret_decl(trf_8241)
static void C_fcall trf_8241(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8241(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_8241(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5059)
static void C_fcall trf_5059(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5059(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_5059(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_7051)
static void C_fcall trf_7051(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7051(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_7051(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3768)
static void C_fcall trf_3768(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3768(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3768(t0,t1);}

C_noret_decl(trf_7045)
static void C_fcall trf_7045(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7045(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_7045(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3788)
static void C_fcall trf_3788(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3788(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3788(t0,t1,t2);}

C_noret_decl(trf_8257)
static void C_fcall trf_8257(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8257(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8257(t0,t1,t2);}

C_noret_decl(trf_10420)
static void C_fcall trf_10420(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10420(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10420(t0,t1);}

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

/* map-loop456 in k9368 in k9499 in k9335 in k9328 in k9316 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_fcall f_9393(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9393,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[240],t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9406,a[2]=((C_word*)t0)[2],a[3]=t10,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t12=t11;
f_9406(t12,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t10));}
else{
t12=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t10);
t13=t11;
f_9406(t13,t12);}}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k9381 in k9368 in k9499 in k9335 in k9328 in k9316 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9383,2,t0,t1);}
t2=C_a_i_list(&a,1,lf[232]);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:214: ##sys#append */
t4=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],t1,t3);}

/* k9372 in k9368 in k9499 in k9335 in k9328 in k9316 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:214: ##sys#append */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k9368 in k9499 in k9335 in k9328 in k9316 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9370(C_word c,C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9370,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9374,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9383,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9393,a[2]=t7,a[3]=t10,a[4]=t5,a[5]=((C_word)li124),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_9393(t12,t8,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* a6396 in k6379 in k6369 in a6366 in a6356 in k6341 in k6334 in k6331 in k6328 in k6325 in k6322 in k6319 in k6316 in k6313 in k6310 in k6307 in k6270 in a6267 in k6678 in k6682 in k6686 in k6690 in ... */
static void C_ccall f_6397(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[16],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6397,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6401,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6471,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t6,a[7]=((C_word*)t0)[7],a[8]=((C_word)li51),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_6471(t8,t4,t3,((C_word*)t0)[8]);}

/* k6393 in a6386 in k6379 in k6369 in a6366 in a6356 in k6341 in k6334 in k6331 in k6328 in k6325 in k6322 in k6319 in k6316 in k6313 in k6310 in k6307 in k6270 in a6267 in k6678 in k6682 in k6686 in ... */
static void C_ccall f_6395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:794: split-at! */
t2=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* loop in genvars in k6270 in a6267 in k6678 in k6682 in k6686 in k6690 in k6694 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in ... */
static void C_fcall f_6280(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6280,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6294,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6306,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:762: gensym */
t5=*((C_word*)lf[32]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k9274 in k9267 in k9260 in loop in k9207 in k9204 in k9201 in k9192 in a9189 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t3=C_slot(((C_word*)t0)[3],C_fix(1));
/* chicken-syntax.scm:261: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_9241(t4,((C_word*)t0)[5],t3);}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_car(t2);
/* chicken-syntax.scm:260: ##sys#error */
t4=*((C_word*)lf[249]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[6],lf[250],t3);}}

/* k9325 in g233 in k9316 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:218: r */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* g233 in k9316 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_fcall f_9319(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9319,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9327,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:218: gensym */
t3=*((C_word*)lf[32]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k9316 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9318(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9318,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9319,a[2]=((C_word*)t0)[2],a[3]=((C_word)li123),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9330,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9815,a[2]=t6,a[3]=t10,a[4]=t4,a[5]=t7,a[6]=((C_word)li132),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_9815(t12,t8,((C_word*)t0)[6]);}

/* k9313 in g205 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:217: r */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9295(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9295,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_i_check_list_2(t3,lf[28]);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9306,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9885,a[2]=t10,a[3]=t14,a[4]=t8,a[5]=((C_word)li134),tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_9885(t16,t12,t3);}

/* a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9291(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9291,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9295,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:213: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[255],t2,lf[256]);}

/* g205 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_fcall f_9307(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9307,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9315,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:217: gensym */
t3=*((C_word*)lf[32]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9306(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9306,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9307,a[2]=((C_word*)t0)[2],a[3]=((C_word)li122),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9318,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9850,a[2]=t6,a[3]=t10,a[4]=t4,a[5]=t7,a[6]=((C_word)li133),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_9850(t12,t8,((C_word*)t0)[5]);}

/* k9287 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:209: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[255],C_SCHEME_END_OF_LIST,t1);}

/* k6331 in k6328 in k6325 in k6322 in k6319 in k6316 in k6313 in k6310 in k6307 in k6270 in a6267 in k6678 in k6682 in k6686 in k6690 in k6694 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in ... */
static void C_ccall f_6333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6333,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6336,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm:776: r */
t4=((C_word*)t0)[8];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[157]);}

/* k6328 in k6325 in k6322 in k6319 in k6316 in k6313 in k6310 in k6307 in k6270 in a6267 in k6678 in k6682 in k6686 in k6690 in k6694 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in ... */
static void C_ccall f_6330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6330,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6333,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:775: r */
t4=((C_word*)t0)[7];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[155]);}

/* k6334 in k6331 in k6328 in k6325 in k6322 in k6319 in k6316 in k6313 in k6310 in k6307 in k6270 in a6267 in k6678 in k6682 in k6686 in k6690 in k6694 in k3339 in k3336 in k3333 in k3330 in k3327 in ... */
static void C_ccall f_6336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6336,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6343,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm:778: append */
t4=*((C_word*)lf[166]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[6],((C_word*)t0)[2]);}

/* k6341 in k6334 in k6331 in k6328 in k6325 in k6322 in k6319 in k6316 in k6313 in k6310 in k6307 in k6270 in a6267 in k6678 in k6682 in k6686 in k6690 in k6694 in k3339 in k3336 in k3333 in k3330 in ... */
static void C_ccall f_6343(C_word c,C_word t0,C_word t1){
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
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6343,2,t0,t1);}
t2=t1;
t3=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_a_i_list(&a,2,((C_word*)t0)[4],t3);
t5=C_a_i_list(&a,1,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6355,a[2]=t6,a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6357,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[12],a[11]=((C_word)li54),tmp=(C_word)a,a+=12,tmp);
t9=((C_word*)t0)[13];
t10=C_u_i_cdr(t9);
/* chicken-syntax.scm:781: fold-right */
t11=*((C_word*)lf[164]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t7,t8,lf[165],t10);}

/* k6316 in k6313 in k6310 in k6307 in k6270 in a6267 in k6678 in k6682 in k6686 in k6690 in k6694 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in ... */
static void C_ccall f_6318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6318,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6321,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:771: r */
t4=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[167]);}

/* k6310 in k6307 in k6270 in a6267 in k6678 in k6682 in k6686 in k6690 in k6694 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in ... */
static void C_ccall f_6312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6312,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6315,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:769: genvars */
t4=((C_word*)t0)[5];
f_6274(t4,t3,t2);}

/* k6313 in k6310 in k6307 in k6270 in a6267 in k6678 in k6682 in k6686 in k6690 in k6694 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in ... */
static void C_ccall f_6315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6315,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6318,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:770: r */
t4=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[168]);}

/* k9359 in k9499 in k9335 in k9328 in k9316 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9361,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,lf[101],t2);
t4=C_a_i_list(&a,4,lf[238],((C_word*)t0)[2],((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,3,lf[30],((C_word*)t0)[5],t4));}

/* k3605 in a3596 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in ... */
static void C_ccall f_3607(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3607,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=C_i_car(t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3616,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1214: ##sys#globalize */
t7=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t5,C_SCHEME_END_OF_LIST);}

/* k9596 in map-loop348 in k9335 in k9328 in k9316 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_fcall f_9598(C_word t0,C_word t1){
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
f_9585(t5,((C_word*)t0)[7],t3,t4);}

/* k6319 in k6316 in k6313 in k6310 in k6307 in k6270 in a6267 in k6678 in k6682 in k6686 in k6690 in k6694 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in ... */
static void C_ccall f_6321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6321,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6324,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:772: r */
t4=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[153]);}

/* k6325 in k6322 in k6319 in k6316 in k6313 in k6310 in k6307 in k6270 in a6267 in k6678 in k6682 in k6686 in k6690 in k6694 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in ... */
static void C_ccall f_6327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6327,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6330,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:774: r */
t4=((C_word*)t0)[7];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[154]);}

/* k6322 in k6319 in k6316 in k6313 in k6310 in k6307 in k6270 in a6267 in k6678 in k6682 in k6686 in k6690 in k6694 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in ... */
static void C_ccall f_6324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6324,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6327,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:773: r */
t4=((C_word*)t0)[7];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[156]);}

/* map-loop348 in k9335 in k9328 in k9316 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_fcall f_9585(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9585,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[240],t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9598,a[2]=((C_word*)t0)[2],a[3]=t10,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t12=t11;
f_9598(t12,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t10));}
else{
t12=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t10);
t13=t11;
f_9598(t13,t12);}}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k3614 in k3605 in a3596 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in ... */
static void C_ccall f_3616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3616,2,t0,t1);}
t2=t1;
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3620,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1216: gensym */
t5=*((C_word*)lf[32]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[6]);}

/* k9250 in loop in k9207 in k9204 in k9201 in k9192 in a9189 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9252(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
/* chicken-syntax.scm:261: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_9241(t3,((C_word*)t0)[4],t2);}

/* k6369 in a6366 in a6356 in k6341 in k6334 in k6331 in k6328 in k6325 in k6322 in k6319 in k6316 in k6313 in k6310 in k6307 in k6270 in a6267 in k6678 in k6682 in k6686 in k6690 in k6694 in k3339 in ... */
static void C_ccall f_6371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6371,2,t0,t1);}
t2=C_fixnum_difference(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6381,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[8])){
t4=C_eqp(t2,C_fix(0));
t5=t3;
f_6381(t5,(C_truep(t4)?C_SCHEME_TRUE:C_a_i_list(&a,3,((C_word*)t0)[14],((C_word*)t0)[15],t2)));}
else{
t4=t3;
f_6381(t4,C_a_i_list(&a,3,((C_word*)t0)[16],((C_word*)t0)[15],t2));}}

/* k3621 in k3618 in k3614 in k3605 in a3596 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in ... */
static void C_ccall f_3623(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3623,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3626,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=C_i_cdddr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t4))){
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
t7=C_u_i_cdr(t6);
t8=C_u_i_car(t7);
/* chicken-syntax.scm:1218: ##sys#strip-syntax */
t9=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t3,t8);}
else{
t5=t3;
f_3626(2,t5,C_SCHEME_FALSE);}}

/* a6386 in k6379 in k6369 in a6366 in a6356 in k6341 in k6334 in k6331 in k6328 in k6325 in k6322 in k6319 in k6316 in k6313 in k6310 in k6307 in k6270 in a6267 in k6678 in k6682 in k6686 in k6690 in ... */
static void C_ccall f_6387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6387,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6395,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:794: take */
t3=*((C_word*)lf[161]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k3627 in k3624 in k3621 in k3618 in k3614 in k3605 in a3596 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in ... */
static void C_ccall f_3629(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3629,2,t0,t1);}
t2=t1;
t3=(C_truep(((C_word*)t0)[2])?C_i_cadddr(((C_word*)t0)[3]):C_i_caddr(((C_word*)t0)[3]));
t4=t3;
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3637,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t4,a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[2],a[8]=t6,a[9]=((C_word*)t0)[7],a[10]=((C_word)li7),tmp=(C_word)a,a+=11,tmp));
t8=((C_word*)t6)[1];
f_3637(t8,((C_word*)t0)[8],((C_word*)t0)[9],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* k3624 in k3621 in k3618 in k3614 in k3605 in a3596 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in ... */
static void C_ccall f_3626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3626,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3629,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:1219: r */
t4=((C_word*)t0)[9];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[47]);}

/* k3618 in k3614 in k3605 in a3596 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in ... */
static void C_ccall f_3620(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3620,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3623,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:1217: ##sys#globalize */
t4=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,C_SCHEME_END_OF_LIST);}

/* loop in k9207 in k9204 in k9201 in k9192 in a9189 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_fcall f_9241(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9241,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=C_u_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9252,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_9262,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t5,a[9]=((C_word*)t0)[6],a[10]=t4,a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm:257: c */
t7=((C_word*)t0)[6];
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t4,((C_word*)t0)[9]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9335 in k9328 in k9316 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9337(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9337,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9501,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_i_check_list_2(((C_word*)t0)[4],lf[28]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9513,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9585,a[2]=t7,a[3]=t11,a[4]=t5,a[5]=((C_word)li127),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_9585(t13,t9,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k6379 in k6369 in a6366 in a6356 in k6341 in k6334 in k6331 in k6328 in k6325 in k6322 in k6319 in k6316 in k6313 in k6310 in k6307 in k6270 in a6267 in k6678 in k6682 in k6686 in k6690 in k6694 in ... */
static void C_fcall f_6381(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6381,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6385,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6387,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li49),tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6397,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[13],a[9]=((C_word)li52),tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:793: ##sys#call-with-values */
C_call_with_values(4,0,t3,t4,t5);}

/* k6383 in k6379 in k6369 in a6366 in a6356 in k6341 in k6334 in k6331 in k6328 in k6325 in k6322 in k6319 in k6316 in k6313 in k6310 in k6307 in k6270 in a6267 in k6678 in k6682 in k6686 in k6690 in ... */
static void C_ccall f_6385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6385,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,4,lf[159],((C_word*)t0)[3],t1,((C_word*)t0)[4]));}

/* k9328 in k9316 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9330(C_word c,C_word t0,C_word t1){
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
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9330,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9337,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t0)[5];
t9=C_SCHEME_END_OF_LIST;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9636,a[2]=t8,a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[6],a[6]=t7,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9780,a[2]=t12,a[3]=t15,a[4]=t10,a[5]=((C_word)li131),tmp=(C_word)a,a+=6,tmp));
t17=((C_word*)t15)[1];
f_9780(t17,t13,((C_word*)t0)[6]);}

/* a6356 in k6341 in k6334 in k6331 in k6328 in k6325 in k6322 in k6319 in k6316 in k6313 in k6310 in k6307 in k6270 in a6267 in k6678 in k6682 in k6686 in k6690 in k6694 in k3339 in k3336 in k3333 in ... */
static void C_ccall f_6357(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6357,4,t0,t1,t2,t3);}
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6367,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word)li53),tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm:783: ##sys#decompose-lambda-list */
t6=*((C_word*)lf[163]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t4,t5);}

/* k10530 in k10556 in k10341 in k10280 in k10277 in k10274 in k10271 in k10263 in a10260 in k3266 in k3263 in k3259 */
static void C_ccall f_10532(C_word c,C_word t0,C_word t1){
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
C_word ab[56],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10532,2,t0,t1);}
t2=C_a_i_list(&a,1,lf[127]);
t3=C_a_i_list(&a,2,lf[20],((C_word*)t0)[2]);
t4=C_a_i_list(&a,3,lf[119],lf[127],t3);
t5=C_a_i_list(&a,3,lf[101],t2,t4);
t6=C_a_i_list(&a,3,((C_word*)t0)[3],t1,t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10366,a[2]=t7,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10368,a[2]=((C_word*)t0)[2],a[3]=t10,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word)li143),tmp=(C_word)a,a+=8,tmp));
t12=((C_word*)t10)[1];
f_10368(t12,t8,((C_word*)t0)[8],C_fix(1));}

/* loop in k3627 in k3624 in k3621 in k3618 in k3614 in k3605 in a3596 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in ... */
static void C_fcall f_3637(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
a=C_alloc(11);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3637,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3647,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t3,a[10]=t4,tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:1223: reverse */
t6=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}
else{
t5=C_i_car(t2);
t6=t5;
if(C_truep(C_i_symbolp(t6))){
t7=t2;
t8=C_u_i_cdr(t7);
t9=C_a_i_cons(&a,2,t6,t3);
t10=C_a_i_cons(&a,2,lf[44],t4);
/* chicken-syntax.scm:1258: loop */
t17=t1;
t18=t8;
t19=t9;
t20=t10;
t1=t17;
t2=t18;
t3=t19;
t4=t20;
goto loop;}
else{
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3887,a[2]=t2,a[3]=t6,a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[8],a[7]=t1,a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_listp(t6))){
t8=C_u_i_length(t6);
t9=C_eqp(C_fix(2),t8);
if(C_truep(t9)){
t10=C_i_car(t6);
t11=t7;
f_3887(t11,C_i_symbolp(t10));}
else{
t10=t7;
f_3887(t10,C_SCHEME_FALSE);}}
else{
t8=t7;
f_3887(t8,C_SCHEME_FALSE);}}}}

/* k4308 in a4305 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in ... */
static void C_ccall f_4310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4310,2,t0,t1);}
if(C_truep(C_i_memq(lf[13],*((C_word*)lf[14]+1)))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4319,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_caddr(((C_word*)t0)[2]);
/* chicken-syntax.scm:1175: ##sys#strip-syntax */
t4=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[68]);}}

/* k4317 in k4308 in a4305 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in ... */
static void C_ccall f_4319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4319,2,t0,t1);}
t2=t1;
t3=C_i_cadr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4327,a[2]=t2,a[3]=t4,a[4]=((C_word)li16),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4337,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t4,a[5]=((C_word)li17),tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1175: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],t5,t6);}

/* k4286 in k4270 in a4267 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in ... */
static void C_ccall f_4288(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4288,2,t0,t1);}
t2=C_i_caddr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,4,lf[38],t1,C_SCHEME_TRUE,t2));}

/* k6353 in k6341 in k6334 in k6331 in k6328 in k6325 in k6322 in k6319 in k6316 in k6313 in k6310 in k6307 in k6270 in a6267 in k6678 in k6682 in k6686 in k6690 in k6694 in k3339 in k3336 in k3333 in ... */
static void C_ccall f_6355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6355,2,t0,t1);}
t2=C_a_i_list(&a,3,lf[30],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,3,lf[101],((C_word*)t0)[4],t2));}

/* a6366 in a6356 in k6341 in k6334 in k6331 in k6328 in k6325 in k6322 in k6319 in k6316 in k6313 in k6310 in k6307 in k6270 in a6267 in k6678 in k6682 in k6686 in k6690 in k6694 in k3339 in k3336 in ... */
static void C_ccall f_6367(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6367,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_6371,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=((C_word*)t0)[4],a[8]=t4,a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],a[13]=((C_word*)t0)[9],a[14]=((C_word*)t0)[10],a[15]=((C_word*)t0)[11],a[16]=((C_word*)t0)[12],tmp=(C_word)a,a+=17,tmp);
t6=C_i_car(((C_word*)t0)[5]);
/* chicken-syntax.scm:786: ##sys#check-syntax */
t7=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,lf[158],t6,lf[162]);}

/* k3645 in loop in k3627 in k3624 in k3621 in k3618 in k3614 in k3605 in a3596 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in ... */
static void C_ccall f_3647(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3647,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3650,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:1224: reverse */
t4=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[10]);}

/* k4364 in a4336 in k4317 in k4308 in a4305 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in ... */
static void C_fcall f_4366(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4366,NULL,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,lf[65],t2);
t4=C_a_i_list(&a,1,t3);
/* chicken-syntax.scm:43: ##sys#append */
t5=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[4],t1,t4);}
else{
/* chicken-syntax.scm:43: ##sys#append */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[4],t1,C_SCHEME_END_OF_LIST);}}

/* k4360 in a4336 in k4317 in k4308 in a4305 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in ... */
static void C_ccall f_4362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4362,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[37],t2));}

/* genvars in k6270 in a6267 in k6678 in k6682 in k6686 in k6690 in k6694 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in ... */
static void C_fcall f_6274(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6274,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6280,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li47),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_6280(t6,t1,C_fix(0));}

/* k6270 in a6267 in k6678 in k6682 in k6686 in k6690 in k6694 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in ... */
static void C_ccall f_6272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6272,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6274,a[2]=((C_word*)t0)[2],a[3]=((C_word)li48),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6309,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:763: require */
t4=*((C_word*)lf[170]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[171]);}

/* k9547 in map-loop384 in k9511 in k9335 in k9328 in k9316 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_fcall f_9549(C_word t0,C_word t1){
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
f_9536(t5,((C_word*)t0)[7],t3,t4);}

/* k3648 in k3645 in loop in k3627 in k3624 in k3621 in k3618 in k3614 in k3605 in a3596 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in ... */
static void C_ccall f_3650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3650,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3831,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3833,a[2]=t5,a[3]=((C_word)li6),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_3833(t7,t3,((C_word*)t0)[10],C_fix(1));}

/* k9210 in k9207 in k9204 in k9201 in k9192 in a9189 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9212,2,t0,t1);}
if(C_truep(C_i_memq(lf[13],*((C_word*)lf[14]+1)))){
t2=(C_truep(((C_word*)((C_word*)t0)[2])[1])?((C_word*)((C_word*)t0)[3])[1]:C_SCHEME_FALSE);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?C_a_i_list(&a,2,lf[245],((C_word*)t0)[5]):(C_truep(((C_word*)((C_word*)t0)[2])[1])?C_a_i_list(&a,2,lf[246],((C_word*)t0)[5]):(C_truep(((C_word*)((C_word*)t0)[3])[1])?((C_word*)t0)[5]:lf[247]))));}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(((C_word*)((C_word*)t0)[6])[1])?((C_word*)t0)[5]:lf[248]));}}

/* k4333 in a4326 in k4317 in k4308 in a4305 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in ... */
static void C_ccall f_4335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1179: ##compiler#validate-type */
t2=*((C_word*)lf[63]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k3654 in k3829 in k3648 in k3645 in loop in k3627 in k3624 in k3621 in k3618 in k3614 in k3605 in a3596 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in ... */
static void C_ccall f_3656(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3656,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[35],((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,lf[36],((C_word*)t0)[2]);
t4=C_a_i_list(&a,3,lf[37],t2,t3);
t5=t4;
t6=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t7=t6;
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3688,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t7,a[5]=((C_word*)t0)[6],a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3690,a[2]=t11,a[3]=t14,a[4]=t9,a[5]=((C_word)li4),tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_3690(t16,t12,((C_word*)t0)[3],((C_word*)t0)[7]);}

/* a4336 in k4317 in k4308 in a4305 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in ... */
static void C_ccall f_4337(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[33],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4337,5,t0,t1,t2,t3,t4);}
t5=t3;
if(C_truep(t2)){
t6=C_i_cdddr(((C_word*)t0)[2]);
t7=C_a_i_cons(&a,2,((C_word*)t0)[3],t6);
t8=C_a_i_cons(&a,2,((C_word*)t0)[4],t7);
t9=C_a_i_list(&a,2,lf[64],t8);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4362,a[2]=t10,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4366,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=t11,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t13=C_a_i_list(&a,2,lf[66],((C_word*)t0)[4]);
t14=t12;
f_4366(t14,C_a_i_list(&a,1,t13));}
else{
t13=t12;
f_4366(t13,C_SCHEME_END_OF_LIST);}}
else{
/* chicken-syntax.scm:1181: syntax-error */
t6=*((C_word*)lf[45]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t1,lf[62],lf[67],((C_word*)t0)[4],((C_word*)t0)[3]);}}

/* k6241 in k6197 in a6194 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in ... */
static void C_ccall f_6243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6243,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[20],((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,lf[149],t3));}

/* k9207 in k9204 in k9201 in k9192 in a9189 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9209(C_word c,C_word t0,C_word t1){
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
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9209,2,t0,t1);}
t2=t1;
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9212,a[2]=t6,a[3]=t8,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9241,a[2]=t11,a[3]=t4,a[4]=t8,a[5]=t6,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t2,a[9]=((C_word*)t0)[6],a[10]=((C_word)li120),tmp=(C_word)a,a+=11,tmp));
t13=((C_word*)t11)[1];
f_9241(t13,t9,((C_word*)t0)[7]);}

/* k9204 in k9201 in k9192 in a9189 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9206(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9206,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9209,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:250: r */
t4=((C_word*)t0)[7];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[251]);}

/* k9201 in k9192 in a9189 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9203,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9206,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:249: r */
t4=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[252]);}

/* k4264 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in ... */
static void C_ccall f_4266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1188: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[52],C_SCHEME_END_OF_LIST,t1);}

/* map-loop384 in k9511 in k9335 in k9328 in k9316 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_fcall f_9536(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9536,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[240],t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9549,a[2]=((C_word*)t0)[2],a[3]=t10,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t12=t11;
f_9549(t12,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t10));}
else{
t12=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t10);
t13=t11;
f_9549(t13,t12);}}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* a4267 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in ... */
static void C_ccall f_4268(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4268,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4272,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1192: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[52],t2,lf[61]);}

/* k5800 in k5797 in a5794 in k6060 in k6064 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in ... */
static void C_ccall f_5802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5802,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5805,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:868: r */
t4=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[137]);}

/* map-loop25 in k10280 in k10277 in k10274 in k10271 in k10263 in a10260 in k3266 in k3263 in k3259 */
static void C_fcall f_10582(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10582,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10611,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:66: g31 */
t5=((C_word*)t0)[5];
f_10283(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* a4305 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in ... */
static void C_ccall f_4306(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4306,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4310,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1172: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[62],t2,lf[69]);}

/* k4302 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in ... */
static void C_ccall f_4304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1168: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[62],C_SCHEME_END_OF_LIST,t1);}

/* k6292 in loop in genvars in k6270 in a6267 in k6678 in k6682 in k6686 in k6690 in k6694 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in ... */
static void C_ccall f_6294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6294,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6298,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* chicken-syntax.scm:762: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_6280(t5,t3,t4);}

/* k10576 in k10341 in k10280 in k10277 in k10274 in k10271 in k10263 in a10260 in k3266 in k3263 in k3259 */
static void C_ccall f_10578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:80: string->symbol */
t2=*((C_word*)lf[181]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6296 in k6292 in loop in genvars in k6270 in a6267 in k6678 in k6682 in k6686 in k6690 in k6694 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in ... */
static void C_ccall f_6298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6298,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k4270 in a4267 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in ... */
static void C_ccall f_4272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4272,2,t0,t1);}
if(C_truep(C_i_memq(lf[13],*((C_word*)lf[14]+1)))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4288,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* chicken-syntax.scm:1195: ##compiler#check-and-validate-type */
t4=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,lf[52]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_caddr(((C_word*)t0)[2]));}}

/* k9524 in k9511 in k9335 in k9328 in k9316 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9526,2,t0,t1);}
t2=C_a_i_list(&a,1,lf[232]);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:214: ##sys#append */
t4=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],t1,t3);}

/* k5809 in k5806 in k5803 in k5800 in k5797 in a5794 in k6060 in k6064 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in ... */
static void C_ccall f_5811(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5811,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5814,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:871: r */
t4=((C_word*)t0)[7];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[27]);}

/* k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_3283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3283,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3286,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9997,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9999,a[2]=((C_word)li137),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:168: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_3289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3289,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3292,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9289,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9291,a[2]=((C_word)li135),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:211: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k6264 in k6678 in k6682 in k6686 in k6690 in k6694 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in ... */
static void C_ccall f_6266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:748: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[158],((C_word*)t0)[3],t1);}

/* k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_3286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3286,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3289,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9922,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9924,a[2]=((C_word)li136),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:191: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k5806 in k5803 in k5800 in k5797 in a5794 in k6060 in k6064 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in ... */
static void C_ccall f_5808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5808,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5811,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:870: r */
t4=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[129]);}

/* k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_3280(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3280,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3283,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10086,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10088,a[2]=((C_word)li138),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:161: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a6267 in k6678 in k6682 in k6686 in k6690 in k6694 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in ... */
static void C_ccall f_6268(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6268,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6272,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:757: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[158],t2,lf[172]);}

/* k5803 in k5800 in k5797 in a5794 in k6060 in k6064 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in ... */
static void C_ccall f_5805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5805,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5808,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:869: r */
t4=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[136]);}

/* k9515 in k9511 in k9335 in k9328 in k9316 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:214: ##sys#append */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k5818 in parse-clause in k5812 in k5809 in k5806 in k5803 in k5800 in k5797 in a5794 in k6060 in k6064 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in ... */
static void C_fcall f_5820(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5820,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5823,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
if(C_truep(t2)){
t4=t3;
f_5823(t4,C_i_cadr(((C_word*)t0)[8]));}
else{
t4=((C_word*)t0)[8];
t5=t3;
f_5823(t5,C_u_i_car(t4));}}

/* k3686 in k3654 in k3829 in k3648 in k3645 in loop in k3627 in k3624 in k3621 in k3618 in k3614 in k3605 in a3596 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in ... */
static void C_ccall f_3688(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3688,2,t0,t1);}
t2=C_a_i_list(&a,3,lf[30],t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[26],((C_word*)t0)[6],t3));}

/* k9511 in k9335 in k9328 in k9316 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9513(C_word c,C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9513,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9517,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9526,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9536,a[2]=t7,a[3]=t10,a[4]=t5,a[5]=((C_word)li126),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_9536(t12,t8,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_3295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3295,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3298,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8720,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8722,a[2]=((C_word)li119),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:273: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_3292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3292,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3295,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9188,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9190,a[2]=((C_word)li121),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:243: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_3298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3298,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3301,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8696,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8698,a[2]=((C_word)li108),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:309: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k10556 in k10341 in k10280 in k10277 in k10274 in k10271 in k10263 in a10260 in k3266 in k3263 in k3259 */
static void C_ccall f_10558(C_word c,C_word t0,C_word t1){
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
C_word ab[45],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10558,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[116],((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,lf[118],t3);
t5=C_a_i_list(&a,3,lf[101],((C_word*)t0)[3],t4);
t6=C_a_i_list(&a,3,((C_word*)t0)[4],t1,t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10532,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t7,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10552,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
t10=*((C_word*)lf[286]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,((C_word*)t0)[7],lf[287]);}

/* parse-clause in k5812 in k5809 in k5806 in k5803 in k5800 in k5797 in a5794 in k6060 in k6064 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in ... */
static void C_ccall f_5816(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5816,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5820,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t4=C_i_car(t2);
if(C_truep(C_i_symbolp(t4))){
t5=t2;
t6=t3;
f_5820(t6,C_u_i_car(t5));}
else{
t5=t3;
f_5820(t5,C_SCHEME_FALSE);}}

/* k5812 in k5809 in k5806 in k5803 in k5800 in k5797 in a5794 in k6060 in k6064 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in ... */
static void C_ccall f_5814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5814,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5816,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li42),tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5944,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:883: r */
t5=((C_word*)t0)[8];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[135]);}

/* k10550 in k10556 in k10341 in k10280 in k10277 in k10274 in k10271 in k10263 in a10260 in k3266 in k3263 in k3259 */
static void C_ccall f_10552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:85: string->symbol */
t2=*((C_word*)lf[181]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k9499 in k9335 in k9328 in k9316 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9501(C_word c,C_word t0,C_word t1){
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
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9501,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,lf[101],t2);
t4=t3;
t5=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t6=C_a_i_cons(&a,2,lf[101],t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9361,a[2]=t4,a[3]=t7,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_END_OF_LIST;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9370,a[2]=t8,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9442,a[2]=t12,a[3]=t15,a[4]=t10,a[5]=((C_word)li125),tmp=(C_word)a,a+=6,tmp));
t17=((C_word*)t15)[1];
f_9442(t17,t13,((C_word*)t0)[7],((C_word*)t0)[5]);}

/* k5824 in k5821 in k5818 in parse-clause in k5812 in k5809 in k5806 in k5803 in k5800 in k5797 in a5794 in k6060 in k6064 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in ... */
static void C_fcall f_5826(C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5826,NULL,2,t0,t1);}
t2=t1;
if(C_truep(C_i_nullp(((C_word*)t0)[2]))){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,2,((C_word*)t0)[4],t2));}
else{
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5848,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word)li40),tmp=(C_word)a,a+=5,tmp);
t8=C_i_check_list_2(((C_word*)t0)[2],lf[28]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5862,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5864,a[2]=t7,a[3]=t6,a[4]=t11,a[5]=t4,a[6]=((C_word)li41),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_5864(t13,t9,((C_word*)t0)[2]);}}

/* k5821 in k5818 in parse-clause in k5812 in k5809 in k5806 in k5803 in k5800 in k5797 in a5794 in k6060 in k6064 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in ... */
static void C_fcall f_5823(C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5823,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5826,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
t4=C_a_i_list(&a,2,((C_word*)t0)[7],((C_word*)t0)[8]);
t5=C_a_i_list(&a,1,t4);
t6=C_i_cddr(((C_word*)t0)[9]);
t7=C_a_i_cons(&a,2,t5,t6);
t8=t3;
f_5826(t8,C_a_i_cons(&a,2,lf[30],t7));}
else{
t4=((C_word*)t0)[9];
t5=C_u_i_cdr(t4);
t6=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t5);
t7=t3;
f_5826(t7,C_a_i_cons(&a,2,lf[30],t6));}}

/* k4222 in k4210 in loop2137 in k4194 in k4188 in k4185 in a3962 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in ... */
static void C_fcall f_4224(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4224,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4235,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1201: ##sys#+ */
t5=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[5],C_fix(-1));}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k6307 in k6270 in a6267 in k6678 in k6682 in k6686 in k6690 in k6694 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in ... */
static void C_ccall f_6309(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6309,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6312,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_cdr(((C_word*)t0)[4]);
t8=C_i_check_list_2(t7,lf[28]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6621,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6623,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=((C_word)li56),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_6623(t13,t9,t7);}

/* k7695 in k7667 in k7658 in quotify-proc1143 in a7653 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in ... */
static void C_ccall f_7697(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_7681(t2,C_i_not(t1));}

/* k4233 in k4222 in k4210 in loop2137 in k4194 in k4188 in k4185 in a3962 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in ... */
static void C_ccall f_4235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1201: loop2137 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4205(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k6304 in loop in genvars in k6270 in a6267 in k6678 in k6682 in k6686 in k6690 in k6694 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in ... */
static void C_ccall f_6306(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:762: r */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k7679 in k7667 in k7658 in quotify-proc1143 in a7653 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in ... */
static void C_fcall f_7681(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7681,NULL,2,t0,t1);}
if(C_truep(t1)){
/* chicken-syntax.scm:460: syntax-error */
t2=*((C_word*)lf[45]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[205],lf[206],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]));}}

/* g1671 in k5824 in k5821 in k5818 in parse-clause in k5812 in k5809 in k5806 in k5803 in k5800 in k5797 in a5794 in k6060 in k6064 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in ... */
static C_word C_fcall f_5848(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;
t2=C_a_i_list(&a,2,lf[116],t1);
return(C_a_i_list(&a,3,((C_word*)t0)[2],t2,((C_word*)t0)[3]));}

/* loop2137 in k4194 in k4188 in k4185 in a3962 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in ... */
static void C_fcall f_4205(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4205,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4212,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1201: ##sys#= */
t5=*((C_word*)lf[57]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,C_fix(0));}

/* k5860 in k5824 in k5821 in k5818 in parse-clause in k5812 in k5809 in k5806 in k5803 in k5800 in k5797 in a5794 in k6060 in k6064 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in ... */
static void C_ccall f_5862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5862,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,2,t3,((C_word*)t0)[5]));}

/* k7670 in k7667 in k7658 in quotify-proc1143 in a7653 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in ... */
static void C_ccall f_7672(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7672,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* k4210 in loop2137 in k4194 in k4188 in k4185 in a3962 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in ... */
static void C_ccall f_4212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4212,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST));}
else{
t2=C_i_car(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4224,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t2))){
t4=C_i_cdr(t2);
if(C_truep(C_i_pairp(t4))){
t5=C_i_cdr(t4);
t6=t3;
f_4224(t6,C_eqp(t5,C_SCHEME_END_OF_LIST));}
else{
t5=t3;
f_4224(t5,C_SCHEME_FALSE);}}
else{
t4=t3;
f_4224(t4,C_SCHEME_FALSE);}}}

/* map-loop1665 in k5824 in k5821 in k5818 in parse-clause in k5812 in k5809 in k5806 in k5803 in k5800 in k5797 in a5794 in k6060 in k6064 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in ... */
static void C_fcall f_5864(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(20);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5864,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=f_5848(C_a_i(&a,17),((C_word*)t0)[2],t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t6=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t5);
t7=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate2(((C_word *)((C_word*)t0)[5])+1,t5);
t7=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[5])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_3271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3271,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3274,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10166,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10168,a[2]=((C_word)li141),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:123: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k6211 in k6197 in a6194 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in ... */
static void C_ccall f_6213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6213,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(0));
t3=C_a_i_list(&a,2,lf[20],t2);
t4=C_slot(((C_word*)t0)[2],C_fix(1));
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[3]);
t6=C_a_i_cons(&a,2,lf[101],t5);
t7=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,3,lf[149],t3,t6));}

/* k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_3277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3277,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3280,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10103,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10105,a[2]=((C_word)li139),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:155: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k9926 in a9923 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9928(C_word c,C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9928,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=C_i_caddr(((C_word*)t0)[2]);
t5=t4;
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
t8=C_u_i_cdr(t7);
t9=C_u_i_cdr(t8);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9940,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t9,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:197: r */
t11=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,lf[176]);}

/* k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_3274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3274,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3277,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10117,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10119,a[2]=((C_word)li140),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:141: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a9923 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9924(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9924,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9928,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:193: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[257],t2,lf[262]);}

/* k9920 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:188: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[257],C_SCHEME_END_OF_LIST,t1);}

/* a4326 in k4317 in k4308 in a4305 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in ... */
static void C_ccall f_4327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4327,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4335,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1179: ##sys#strip-syntax */
t3=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k8591 in k8584 in k8581 in a8578 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8593,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t1,t3));}

/* g1784 in k5453 in k5447 in k5444 in k5438 in k5435 in k5420 in a5417 in k5783 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in ... */
static C_word C_fcall f_5694(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;
if(C_truep(C_i_memq(t1,((C_word*)t0)[2]))){
t2=t1;
return(t2);}
else{
return(lf[117]);}}

/* k6081 in k6078 in a6075 in k6183 in k6187 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in ... */
static void C_ccall f_6083(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6083,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6086,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:846: r */
t4=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[145]);}

/* k6084 in k6081 in k6078 in a6075 in k6183 in k6187 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in ... */
static void C_ccall f_6086(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6086,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6097,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:847: r */
t4=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[140]);}

/* k6078 in a6075 in k6183 in k6187 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in ... */
static void C_ccall f_6080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6080,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6083,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:845: r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[146]);}

/* k8584 in k8581 in a8578 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8586,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8593,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:344: r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[223]);}

/* k8581 in a8578 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8583,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8586,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8601,a[2]=((C_word)li104),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:337: ##sys#decompose-lambda-list */
t5=*((C_word*)lf[163]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,t3,t4);}

/* k7614 in fold in k7559 in a7556 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in ... */
static void C_ccall f_7616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7616,2,t0,t1);}
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,1,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7632,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:484: fold */
t8=((C_word*)((C_word*)t0)[4])[1];
f_7571(t8,t7,((C_word*)t0)[5]);}

/* k7611 in fold in k7559 in a7556 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in ... */
static void C_ccall f_7613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7613,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,4,lf[159],((C_word*)t0)[3],t1,C_SCHEME_FALSE));}

/* k6972 in k7190 in k7178 in k7175 in k7172 in k7169 in k7141 in k7135 in k7132 in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in ... */
static void C_ccall f_6974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6974,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6978,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:615: reverse */
t4=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}

/* k5783 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in ... */
static void C_ccall f_5785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5785,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[114],t1);
t3=C_a_i_list(&a,1,t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5416,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5418,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:901: ##sys#er-transformer */
t7=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}

/* k7782 in k7763 in k7760 in a7757 in k7798 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in ... */
static void C_ccall f_7784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7784,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,t1,((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,3,lf[101],((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,3,lf[144],((C_word*)t0)[5],t4));}

/* k6095 in k6084 in k6081 in k6078 in a6075 in k6183 in k6187 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in ... */
static void C_ccall f_6097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6097,2,t0,t1);}
t2=t1;
t3=C_a_i_list(&a,1,((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6113,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:850: r */
t6=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[141]);}

/* k10121 in a10118 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_10123(C_word c,C_word t0,C_word t1){
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
C_word ab[64],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10123,2,t0,t1);}
t2=C_a_i_list(&a,1,lf[273]);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t3);
t5=C_a_i_cons(&a,2,lf[101],t4);
t6=C_a_i_list(&a,1,lf[274]);
t7=C_a_i_list(&a,2,lf[275],t6);
t8=C_a_i_list(&a,3,lf[142],lf[143],t1);
t9=C_a_i_list(&a,4,lf[101],t1,t7,t8);
t10=C_a_i_list(&a,3,lf[144],t5,t9);
t11=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_a_i_list(&a,3,lf[26],t2,t10));}

/* recur in k6980 in k6976 in k6972 in k7190 in k7178 in k7175 in k7172 in k7169 in k7141 in k7135 in k7132 in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in ... */
static void C_fcall f_6984(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6984,NULL,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(C_i_nullp(t2))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_END_OF_LIST);}
else{
t6=C_i_cdr(t2);
t7=t6;
t8=C_i_car(t3);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7023,a[2]=t5,a[3]=t9,a[4]=t1,a[5]=t3,a[6]=t4,a[7]=((C_word*)t0)[2],a[8]=t7,tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:621: reverse */
t11=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t7);}}

/* k5797 in a5794 in k6060 in k6064 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in ... */
static void C_ccall f_5799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5799,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5802,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:867: r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[138]);}

/* k6980 in k6976 in k6972 in k7190 in k7178 in k7175 in k7172 in k7169 in k7141 in k7135 in k7132 in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in ... */
static void C_ccall f_6982(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6982,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6984,a[2]=t3,a[3]=((C_word)li66),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_6984(t5,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5]);}

/* a5794 in k6060 in k6064 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in ... */
static void C_ccall f_5795(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5795,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5799,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:866: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[130],t2,lf[139]);}

/* k5791 in k6060 in k6064 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in ... */
static void C_ccall f_5793(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:860: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[130],((C_word*)t0)[3],t1);}

/* k6976 in k6972 in k7190 in k7178 in k7175 in k7172 in k7169 in k7141 in k7135 in k7132 in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in ... */
static void C_ccall f_6978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6978,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6982,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:616: reverse */
t4=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}

/* k3259 */
static void C_ccall f_3261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3261,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3265,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:44: ##sys#macro-environment */
t3=*((C_word*)lf[293]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3266 in k3263 in k3259 */
static void C_ccall f_3268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3268,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3271,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10259,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10261,a[2]=((C_word)li145),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:56: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3263 in k3259 */
static void C_ccall f_3265(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3265,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3268,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10619,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10621,a[2]=((C_word)li146),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:49: ##sys#er-transformer */
t6=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k7658 in quotify-proc1143 in a7653 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in ... */
static void C_ccall f_7660(C_word c,C_word t0,C_word t1){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7660,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_pairp(t2);
t4=(C_truep(t3)?C_u_i_car(t2):t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7669,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t2))){
t7=C_u_i_cdr(t2);
t8=((C_word*)t0)[2];
t9=C_u_i_cdr(t8);
t10=C_a_i_cons(&a,2,t7,t9);
t11=t6;
f_7669(t11,C_a_i_cons(&a,2,lf[101],t10));}
else{
t7=t6;
f_7669(t7,C_i_cadr(((C_word*)t0)[2]));}}

/* k7667 in k7658 in quotify-proc1143 in a7653 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in ... */
static void C_fcall f_7669(C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7669,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7672,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_i_pairp(t2);
t5=C_i_not(t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7681,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t5)){
t7=t6;
f_7681(t7,t5);}
else{
t7=C_i_car(t2);
t8=C_eqp(lf[101],t7);
if(C_truep(t8)){
t9=t6;
f_7681(t9,C_SCHEME_FALSE);}
else{
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7697,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7701,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:459: r */
t11=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,lf[207]);}}}

/* map-loop943 in k8225 in k8213 in k8194 in k8191 in k8112 in a8109 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in ... */
static void C_fcall f_8388(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_8388,NULL,3,t0,t1,t2);}
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

/* a10104 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_10105(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10105,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,lf[37],t5));}

/* k10101 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_10103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:153: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[271],C_SCHEME_END_OF_LIST,t1);}

/* map-loop819 in k8112 in a8109 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_fcall f_8540(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_8540,NULL,3,t0,t1,t2);}
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

/* k7650 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 in ... */
static void C_ccall f_7652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:445: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[205],C_SCHEME_END_OF_LIST,t1);}

/* quotify-proc1143 in a7653 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in ... */
static void C_fcall f_7656(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7656,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7660,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:451: ##sys#check-syntax */
t5=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,t3,t2,lf[208]);}

/* a7653 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 in ... */
static void C_ccall f_7654(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7654,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7656,a[2]=t4,a[3]=t3,a[4]=((C_word)li78),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7744,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t7=C_i_cdr(t2);
/* chicken-syntax.scm:464: quotify-proc */
t8=t5;
f_7656(t8,t6,t7,lf[205]);}

/* a10118 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_10119(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10119,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10123,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:143: r */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[239]);}

/* k10115 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_10117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:139: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[272],C_SCHEME_END_OF_LIST,t1);}

/* k8575 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:332: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[222],C_SCHEME_END_OF_LIST,t1);}

/* a8578 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8579(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8579,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8583,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:336: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[222],t2,lf[229]);}

/* a4809 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in ... */
static void C_ccall f_4810(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4810,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4820,a[2]=t6,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t6))){
t8=C_i_cdr(t6);
t9=t7;
f_4820(t9,C_eqp(t8,C_SCHEME_END_OF_LIST));}
else{
t8=t7;
f_4820(t8,C_SCHEME_FALSE);}}

/* k7630 in k7614 in fold in k7559 in a7556 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in ... */
static void C_ccall f_7632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7632,2,t0,t1);}
t2=C_a_i_list(&a,4,lf[159],((C_word*)t0)[2],t1,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,3,lf[30],((C_word*)t0)[4],t2));}

/* fold in k8066 in k8058 in a8055 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 in ... */
static void C_fcall f_8073(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(9);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_8073,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,lf[30],t3));}
else{
t3=C_i_car(t2);
t4=C_a_i_list(&a,1,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8098,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=t2;
t8=C_u_i_cdr(t7);
/* chicken-syntax.scm:412: fold */
t11=t6;
t12=t8;
t1=t11;
t2=t12;
goto loop;}}

/* k4818 in a4809 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in ... */
static void C_fcall f_4820(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_4820,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4830,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1090: rename1945 */
t5=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[91]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4844,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t3=C_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t3))){
t4=C_i_cdr(t3);
t5=t2;
f_4844(t5,C_eqp(t4,C_SCHEME_END_OF_LIST));}
else{
t4=t2;
f_4844(t4,C_SCHEME_FALSE);}}
else{
t3=t2;
f_4844(t3,C_SCHEME_FALSE);}}}

/* k7760 in a7757 in k7798 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in ... */
static void C_ccall f_7762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7762,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7765,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:440: r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[176]);}

/* k7763 in k7760 in a7757 in k7798 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in ... */
static void C_ccall f_7765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7765,2,t0,t1);}
t2=t1;
t3=C_i_caddr(((C_word*)t0)[2]);
t4=C_a_i_list(&a,3,lf[101],C_SCHEME_END_OF_LIST,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7784,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:443: r */
t7=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,lf[210]);}

/* k8513 in loop in k8191 in k8112 in a8109 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 in ... */
static void C_ccall f_8515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* chicken-syntax.scm:371: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_8502(t4,((C_word*)t0)[4],t3,t1);}

/* k8058 in a8055 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8060,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8068,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:407: r */
t8=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,lf[219]);}

/* k8066 in k8058 in a8055 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8068,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8073,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t4,a[5]=((C_word)li88),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_8073(t6,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k8096 in fold in k8066 in k8058 in a8055 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in ... */
static void C_ccall f_8098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8098,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* k7754 in k7798 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 in ... */
static void C_ccall f_7756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:434: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[211],((C_word*)t0)[3],t1);}

/* a7757 in k7798 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 in ... */
static void C_ccall f_7758(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7758,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7762,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:439: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[211],t2,lf[212]);}

/* loop in k8191 in k8112 in a8109 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_fcall f_8502(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(8);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_8502,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8515,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_listp(t4))){
/* chicken-syntax.scm:368: append */
t6=*((C_word*)lf[166]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t4,t3);}
else{
if(C_truep(C_i_pairp(t4))){
/* chicken-syntax.scm:369: append* */
t6=((C_word*)((C_word*)t0)[3])[1];
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t4,t3);}
else{
t6=C_a_i_cons(&a,2,t4,t3);
t7=t2;
t8=C_u_i_cdr(t7);
/* chicken-syntax.scm:371: loop */
t11=t1;
t12=t8;
t13=t6;
t1=t11;
t2=t12;
t3=t13;
goto loop;}}}}

/* k4806 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in ... */
static void C_ccall f_4808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1088: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[90],C_SCHEME_END_OF_LIST,t1);}

/* map-loop1778 in k5453 in k5447 in k5444 in k5438 in k5435 in k5420 in a5417 in k5783 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in ... */
static void C_fcall f_5709(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_5709,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=f_5694(((C_word*)t0)[2],t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t6=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t5);
t7=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate2(((C_word *)((C_word*)t0)[5])+1,t5);
t7=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[5])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5705 in k5453 in k5447 in k5444 in k5438 in k5435 in k5420 in a5417 in k5783 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in ... */
static void C_ccall f_5707(C_word c,C_word t0,C_word t1){
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
C_word ab[67],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5707,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[118],t2);
t4=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t3);
t5=t4;
t6=C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[6]);
t7=C_a_i_list(&a,2,lf[116],((C_word*)t0)[7]);
t8=C_a_i_list(&a,3,lf[119],((C_word*)t0)[6],t7);
t9=C_a_i_list(&a,3,((C_word*)t0)[3],t6,t8);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5478,a[2]=t10,a[3]=t5,a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5480,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t13,a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word)li36),tmp=(C_word)a,a+=10,tmp));
t15=((C_word*)t13)[1];
f_5480(t15,t11,((C_word*)t0)[12],C_fix(1));}

/* k7699 in k7667 in k7658 in quotify-proc1143 in a7653 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in ... */
static void C_ccall f_7701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_u_i_car(((C_word*)t0)[2]);
/* chicken-syntax.scm:459: c */
t3=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[4],t1,t2);}

/* k10402 in k10414 in k10388 in k10385 in k10382 in mapslots in k10530 in k10556 in k10341 in k10280 in k10277 in k10274 in k10271 in k10263 in a10260 in k3266 in k3263 in k3259 */
static void C_ccall f_10404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10404,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k4855 in k4842 in k4818 in a4809 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in ... */
static void C_ccall f_4857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4857,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t1,t3));}

/* k8358 in k8310 in fold in k8237 in k8225 in k8213 in k8194 in k8191 in k8112 in a8109 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in ... */
static void C_ccall f_8360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8360,2,t0,t1);}
t2=C_a_i_list(&a,3,lf[101],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,3,lf[144],((C_word*)t0)[4],t2));}

/* k8173 in k8169 in map*803 in k8112 in a8109 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 in ... */
static void C_ccall f_8175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8175,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k8169 in map*803 in k8112 in a8109 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8171,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8175,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* chicken-syntax.scm:361: map* */
t6=((C_word*)((C_word*)t0)[4])[1];
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,((C_word*)t0)[5],t5);}

/* k5652 in loop in k5705 in k5453 in k5447 in k5444 in k5438 in k5435 in k5420 in a5417 in k5783 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in ... */
static void C_ccall f_5654(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5499(t2,(C_truep(t1)?C_i_cadr(((C_word*)t0)[3]):C_SCHEME_FALSE));}

/* k6907 in k6867 in k6864 in a6861 in k6931 in k6935 in k6939 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in ... */
static void C_ccall f_6909(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6909,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=t2;
t4=C_i_cddr(((C_word*)t0)[3]);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6899,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t7,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:699: r */
t9=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,lf[154]);}

/* k4828 in k4818 in a4809 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in ... */
static void C_ccall f_4830(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4830,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t1,t3));}

/* k8300 in map-loop908 in fold in k8237 in k8225 in k8213 in k8194 in k8191 in k8112 in a8109 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in ... */
static void C_ccall f_8302(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8302,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8273(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8273(t6,((C_word*)t0)[5],t5);}}

/* a8055 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8056(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8056,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8060,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:404: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[218],t2,lf[220]);}

/* k8052 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:400: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[218],C_SCHEME_END_OF_LIST,t1);}

/* k4842 in k4818 in a4809 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in ... */
static void C_fcall f_4844(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4844,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=C_i_cdr(((C_word*)t0)[2]);
t5=C_i_car(t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4857,a[2]=t6,a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1090: rename1945 */
t8=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,lf[91]);}
else{
/* chicken-syntax.scm:1090: ##sys#syntax-rules-mismatch */
t2=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[5]);}}

/* k8194 in k8191 in k8112 in a8109 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8196(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8196,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8197,a[2]=((C_word*)t0)[2],a[3]=((C_word)li92),tmp=(C_word)a,a+=4,tmp);
t8=C_i_check_list_2(t2,lf[28]);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8215,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8467,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=t7,a[6]=((C_word)li99),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_8467(t13,t9,t2);}

/* k5136 in loop in k5050 in k5047 in k5044 in k5041 in a5038 in k5226 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in ... */
static void C_ccall f_5138(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5138,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5141,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5158,a[2]=((C_word*)t0)[8],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1026: gensym */
t4=*((C_word*)lf[32]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5164,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
/* chicken-syntax.scm:1028: c */
t5=((C_word*)t0)[10];
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,((C_word*)t0)[11],t4);}}

/* map-loop1749 in k5447 in k5444 in k5438 in k5435 in k5420 in a5417 in k5783 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in ... */
static void C_fcall f_5744(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_5744,NULL,3,t0,t1,t2);}
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

/* g863 in k8194 in k8191 in k8112 in a8109 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 in ... */
static void C_fcall f_8197(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8197,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8205,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8209,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:372: gensym */
t5=*((C_word*)lf[32]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k8191 in k8112 in a8109 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8193,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8196,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8502,a[2]=t5,a[3]=((C_word*)t0)[7],a[4]=((C_word)li100),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_8502(t7,t3,t2,C_SCHEME_END_OF_LIST);}

/* k7742 in a7653 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in ... */
static void C_ccall f_7744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7744,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,lf[209],t1));}

/* k6931 in k6935 in k6939 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in ... */
static void C_ccall f_6933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6933,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[155],t1);
t3=C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6860,a[2]=((C_word*)t0)[4],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6862,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:692: ##sys#er-transformer */
t7=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}

/* k6935 in k6939 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in ... */
static void C_ccall f_6937(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6937,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[154],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6933,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:691: ##sys#primitive-alias */
t5=*((C_word*)lf[110]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[155]);}

/* k8321 in k8310 in fold in k8237 in k8225 in k8213 in k8194 in k8191 in k8112 in a8109 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in ... */
static void C_ccall f_8323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8323,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[30],((C_word*)t0)[3],t1));}

/* foldl1074 in k7822 in k7819 in k7808 in a7805 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in ... */
static void C_fcall f_7946(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7946,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7976,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=C_slot(t2,C_fix(0));
t8=t6;
t9=t3;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7970,a[2]=t8,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7972,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:427: ##sys#decompose-lambda-list */
t12=*((C_word*)lf[163]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t10,t7,t11);}
else{
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k5139 in k5136 in loop in k5050 in k5047 in k5044 in k5041 in a5038 in k5226 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in ... */
static void C_ccall f_5141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5141,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* chicken-syntax.scm:1027: loop */
t6=((C_word*)((C_word*)t0)[5])[1];
f_5059(t6,((C_word*)t0)[6],t3,t4,((C_word*)t0)[7],t5,C_SCHEME_FALSE);}

/* k6939 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in ... */
static void C_ccall f_6941(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6941,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[173],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6937,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:690: ##sys#primitive-alias */
t5=*((C_word*)lf[110]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[154]);}

/* k8310 in fold in k8237 in k8225 in k8213 in k8194 in k8191 in k8112 in a8109 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in ... */
static void C_fcall f_8312(C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8312,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_caar(((C_word*)t0)[2]);
t3=C_i_car(((C_word*)t0)[3]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,1,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8323,a[2]=((C_word*)t0)[4],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=C_i_cdr(((C_word*)t0)[5]);
t9=((C_word*)t0)[3];
t10=C_u_i_cdr(t9);
t11=((C_word*)t0)[2];
t12=C_u_i_cdr(t11);
/* chicken-syntax.scm:392: fold */
t13=((C_word*)((C_word*)t0)[6])[1];
f_8241(t13,t7,t8,t10,t12);}
else{
t2=C_i_car(((C_word*)t0)[3]);
t3=C_a_i_list(&a,3,lf[101],C_SCHEME_END_OF_LIST,t2);
t4=t3;
t5=((C_word*)t0)[2];
t6=C_u_i_car(t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8360,a[2]=t6,a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t8=C_i_cdr(((C_word*)t0)[5]);
t9=((C_word*)t0)[3];
t10=C_u_i_cdr(t9);
t11=((C_word*)t0)[2];
t12=C_u_i_cdr(t11);
/* chicken-syntax.scm:398: fold */
t13=((C_word*)((C_word*)t0)[6])[1];
f_8241(t13,t7,t8,t10,t12);}}

/* k6947 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in ... */
static void C_ccall f_6949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:599: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[180],((C_word*)t0)[3],t1);}

/* map-loop539 in k8750 in k8747 in k8739 in a8721 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_fcall f_9151(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_9151,NULL,3,t0,t1,t2);}
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

/* map-loop996 in k7808 in a7805 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 in ... */
static void C_fcall f_8017(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_8017,NULL,3,t0,t1,t2);}
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

/* append*802 in k8112 in a8109 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8120(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8120,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=C_i_car(t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8141,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=t2;
t8=C_u_i_cdr(t7);
/* chicken-syntax.scm:357: append* */
t9=((C_word*)((C_word*)t0)[2])[1];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t8,t3);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t2,t3));}}

/* map-loop1051 in k7841 in k7822 in k7819 in k7808 in a7805 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in ... */
static void C_fcall f_7911(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(10);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_7911,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,2,t3,lf[216]);
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

/* map-loop2319 in k3654 in k3829 in k3648 in k3645 in loop in k3627 in k3624 in k3621 in k3618 in k3614 in k3605 in a3596 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in ... */
static void C_fcall f_3690(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3690,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,4,lf[38],t7,C_SCHEME_TRUE,t6);
t9=C_a_i_list2(&a,2,t6,t8);
t10=C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=t10;
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3703,a[2]=((C_word*)t0)[2],a[3]=t11,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t13=t12;
f_3703(t13,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t11));}
else{
t13=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t11);
t14=t12;
f_3703(t14,t13);}}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k8139 in append*802 in k8112 in a8109 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8141,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* map*803 in k8112 in a8109 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8148(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8148,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
if(C_truep(C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8171,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(t3);
/* chicken-syntax.scm:361: proc */
t6=t2;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
/* chicken-syntax.scm:360: proc */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}}}

/* k5179 in k5162 in k5136 in loop in k5050 in k5047 in k5044 in k5041 in a5038 in k5226 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in ... */
static void C_ccall f_5181(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5181,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[2];
t5=C_u_i_car(t4);
t6=C_a_i_list2(&a,2,t1,t5);
t7=C_a_i_cons(&a,2,t6,((C_word*)t0)[3]);
t8=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* chicken-syntax.scm:1036: loop */
t9=((C_word*)((C_word*)t0)[5])[1];
f_5059(t9,((C_word*)t0)[6],t3,((C_word*)t0)[7],t7,t8,C_SCHEME_FALSE);}

/* k3885 in loop in k3627 in k3624 in k3621 in k3618 in k3614 in k3605 in a3596 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in ... */
static void C_fcall f_3887(C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3887,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_i_car(((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[4]);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3904,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t3,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
t8=C_i_cadr(((C_word*)t0)[3]);
/* chicken-syntax.scm:1264: ##compiler#check-and-validate-type */
t9=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,t8,lf[34]);}
else{
/* chicken-syntax.scm:1268: syntax-error */
t2=*((C_word*)lf[45]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[7],lf[34],lf[46],((C_word*)t0)[3],((C_word*)t0)[8]);}}

/* k5113 in k5070 in k5067 in loop in k5050 in k5047 in k5044 in k5041 in a5038 in k5226 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in ... */
static void C_ccall f_5115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1018: r */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in ... */
static void C_ccall f_6951(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6951,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6955,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:605: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[180],t2,lf[191]);}

/* k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in ... */
static void C_ccall f_6955(C_word c,C_word t0,C_word t1){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6955,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=C_i_caddr(((C_word*)t0)[2]);
t5=t4;
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
t8=C_u_i_cdr(t7);
t9=C_u_i_cdr(t8);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7045,a[2]=((C_word*)t0)[3],a[3]=((C_word)li62),tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7134,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t9,a[6]=((C_word*)t0)[4],a[7]=t10,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:644: ##sys#check-syntax */
t12=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t12+1)))(5,t12,t11,lf[180],t5,lf[190]);}

/* k8112 in a8109 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8114(C_word c,C_word t0,C_word t1){
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
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8114,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8120,a[2]=t8,a[3]=((C_word)li90),tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8148,a[2]=t10,a[3]=((C_word)li91),tmp=(C_word)a,a+=4,tmp);
t13=C_set_block_item(t8,0,t11);
t14=C_set_block_item(t10,0,t12);
t15=C_SCHEME_END_OF_LIST;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_SCHEME_FALSE;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_i_check_list_2(t3,lf[28]);
t20=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8193,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t10,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8540,a[2]=t18,a[3]=t22,a[4]=t16,a[5]=((C_word)li101),tmp=(C_word)a,a+=6,tmp));
t24=((C_word*)t22)[1];
f_8540(t24,t20,t3);}

/* a8109 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8110(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8110,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8114,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:350: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[219],t2,lf[221]);}

/* k5156 in k5136 in loop in k5050 in k5047 in k5044 in k5041 in a5038 in k5226 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in ... */
static void C_ccall f_5158(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1026: r */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k8106 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:346: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[219],C_SCHEME_END_OF_LIST,t1);}

/* k9073 in map-loop621 in k8774 in k8759 in k8756 in k8750 in k8747 in k8739 in a8721 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9075(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9075,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9046(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9046(t6,((C_word*)t0)[5],t5);}}

/* k5162 in k5136 in loop in k5050 in k5047 in k5044 in k5041 in a5038 in k5226 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in ... */
static void C_ccall f_5164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5164,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
if(C_truep(C_i_nullp(t3))){
/* chicken-syntax.scm:1030: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_5059(t4,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_TRUE);}
else{
/* chicken-syntax.scm:1031: syntax-error */
t4=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[4],lf[105],lf[106],((C_word*)t0)[8]);}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5181,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5204,a[2]=((C_word*)t0)[9],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1035: gensym */
t4=*((C_word*)lf[32]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* map-loop1022 in k7819 in k7808 in a7805 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in ... */
static void C_fcall f_7982(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_7982,NULL,3,t0,t1,t2);}
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

/* k3902 in k3885 in loop in k3627 in k3624 in k3621 in k3618 in k3614 in k3605 in a3596 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in ... */
static void C_ccall f_3904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3904,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* chicken-syntax.scm:1260: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3637(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2);}

/* k3815 in map-loop2279 in k3829 in k3648 in k3645 in loop in k3627 in k3624 in k3621 in k3618 in k3614 in k3605 in a3596 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in ... */
static void C_ccall f_3817(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3817,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3788(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3788(t6,((C_word*)t0)[5],t5);}}

/* k5103 in k5087 in k5076 in k5070 in k5067 in loop in k5050 in k5047 in k5044 in k5041 in a5038 in k5226 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in ... */
static void C_ccall f_5105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5105,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,3,lf[101],((C_word*)t0)[4],t3);
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,3,lf[30],((C_word*)t0)[6],t4));}

/* k3829 in k3648 in k3645 in loop in k3627 in k3624 in k3621 in k3618 in k3614 in k3605 in a3596 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in ... */
static void C_ccall f_3831(C_word c,C_word t0,C_word t1){
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
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3831,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3656,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3749,a[2]=t4,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3768,a[2]=((C_word*)t0)[8],a[3]=t5,a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
t7=(C_truep(((C_word*)t0)[10])?C_i_pairp(((C_word*)t0)[10]):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_i_check_list_2(((C_word*)t0)[10],lf[28]);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3786,a[2]=t6,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3788,a[2]=t11,a[3]=t15,a[4]=t9,a[5]=((C_word)li5),tmp=(C_word)a,a+=6,tmp));
t17=((C_word*)t15)[1];
f_3788(t17,t13,((C_word*)t0)[10]);}
else{
t8=t6;
f_3768(t8,C_a_i_list1(&a,1,t3));}}

/* loop2 in k3648 in k3645 in loop in k3627 in k3624 in k3621 in k3618 in k3614 in k3605 in a3596 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in ... */
static void C_fcall f_3833(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(6);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3833,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=C_a_i_vector1(&a,1,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3851,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_i_cdr(t2);
t8=C_fixnum_plus(t3,C_fix(1));
/* chicken-syntax.scm:1230: loop2 */
t10=t6;
t11=t7;
t12=t8;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}

/* a5038 in k5226 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in ... */
static void C_ccall f_5039(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5039,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5043,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1008: r */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[104]);}

/* k5035 in k5226 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in ... */
static void C_ccall f_5037(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1003: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[105],((C_word*)t0)[3],t1);}

/* k7974 in foldl1074 in k7822 in k7819 in k7808 in a7805 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in ... */
static void C_ccall f_7976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[2])[1];
f_7946(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* a7971 in foldl1074 in k7822 in k7819 in k7808 in a7805 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in ... */
static void C_ccall f_7972(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7972,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}

/* k7968 in foldl1074 in k7822 in k7819 in k7808 in a7805 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in ... */
static void C_ccall f_7970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:427: ##sys#append */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k5041 in a5038 in k5226 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in ... */
static void C_ccall f_5043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5043,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5046,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1009: r */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[109]);}

/* k5047 in k5044 in k5041 in a5038 in k5226 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in ... */
static void C_ccall f_5049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5049,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5052,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=C_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t4))){
/* chicken-syntax.scm:1012: syntax-error */
t5=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,lf[105],lf[107],((C_word*)t0)[2]);}
else{
t5=t3;
f_5052(2,t5,C_SCHEME_UNDEFINED);}}

/* k7487 in k7502 in k7451 in k7445 in expand in k7407 in k7404 in k7401 in k7393 in a7390 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in ... */
static void C_ccall f_7489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7489,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,4,lf[159],((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* k5044 in k5041 in a5038 in k5226 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in ... */
static void C_ccall f_5046(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5046,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5049,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1010: r */
t4=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[108]);}

/* a10620 in k3263 in k3259 */
static void C_ccall f_10621(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10621,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10625,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:51: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[290],t2,lf[292]);}

/* k10515 in k10382 in mapslots in k10530 in k10556 in k10341 in k10280 in k10277 in k10274 in k10271 in k10263 in a10260 in k3266 in k3263 in k3259 */
static void C_ccall f_10517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:93: string->symbol */
t2=*((C_word*)lf[181]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k10623 in a10620 in k3263 in k3259 */
static void C_ccall f_10625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10625,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[291],t2));}

/* k10511 in k10385 in k10382 in mapslots in k10530 in k10556 in k10341 in k10280 in k10277 in k10274 in k10271 in k10263 in a10260 in k3266 in k3263 in k3259 */
static void C_ccall f_10513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:94: string->symbol */
t2=*((C_word*)lf[181]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5076 in k5070 in k5067 in loop in k5050 in k5047 in k5044 in k5041 in a5038 in k5226 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in ... */
static void C_ccall f_5078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5078,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5089,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1018: ##sys#append */
t4=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[6],t2);}

/* g1234 in k7451 in k7445 in expand in k7407 in k7404 in k7401 in k7393 in a7390 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in ... */
static C_word C_fcall f_7493(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;
return(C_a_i_list(&a,3,lf[197],((C_word*)t0)[2],t1));}

/* k5087 in k5076 in k5070 in k5067 in loop in k5050 in k5047 in k5044 in k5041 in a5038 in k5226 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in ... */
static void C_ccall f_5089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5089,2,t0,t1);}
t2=t1;
t3=C_i_car(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5105,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t6=C_u_i_cdr(((C_word*)t0)[2]);
t7=C_a_i_list(&a,1,((C_word*)t0)[6]);
/* chicken-syntax.scm:1018: ##sys#append */
t8=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t5,t6,t7);}

/* k3701 in map-loop2319 in k3654 in k3829 in k3648 in k3645 in loop in k3627 in k3624 in k3621 in k3618 in k3614 in k3605 in a3596 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in ... */
static void C_fcall f_3703(C_word t0,C_word t1){
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
f_3690(t5,((C_word*)t0)[7],t3,t4);}

/* k7401 in k7393 in a7390 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in ... */
static void C_ccall f_7403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7403,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7406,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:494: r */
t4=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[27]);}

/* k7404 in k7401 in k7393 in a7390 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in ... */
static void C_ccall f_7406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7406,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7409,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:495: r */
t4=((C_word*)t0)[7];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[200]);}

/* k3849 in loop2 in k3648 in k3645 in loop in k3627 in k3624 in k3621 in k3618 in k3614 in k3605 in a3596 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in ... */
static void C_ccall f_3851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3851,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k7407 in k7404 in k7401 in k7393 in a7390 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in ... */
static void C_ccall f_7409(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7409,2,t0,t1);}
t2=t1;
t3=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_a_i_list(&a,1,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7420,a[2]=((C_word*)t0)[4],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7422,a[2]=t8,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li74),tmp=(C_word)a,a+=8,tmp));
t10=((C_word*)t8)[1];
f_7422(t10,t6,((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k10067 in k10012 in k10001 in a9998 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_10069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10069,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10076,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:178: string-append */
t3=*((C_word*)lf[182]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[265],t1,lf[266],((C_word*)((C_word*)t0)[2])[1]);}
else{
t2=((C_word*)t0)[3];
f_10017(t2,C_SCHEME_FALSE);}}

/* k10057 in k10015 in k10012 in k10001 in a9998 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_10059(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10059,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[116],t1);
t3=C_a_i_list(&a,1,t2);
t4=((C_word*)t0)[2];
f_10040(t4,C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t3));}

/* a9998 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9999(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9999,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10003,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:171: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[263],t2,lf[267]);}

/* k9995 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9997(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:166: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[263],C_SCHEME_END_OF_LIST,t1);}

/* k7465 in k7451 in k7445 in expand in k7407 in k7404 in k7401 in k7393 in a7390 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in ... */
static void C_ccall f_7467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7467,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7470,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:514: expand */
t3=((C_word*)((C_word*)t0)[3])[1];
f_7422(t3,t2,((C_word*)t0)[4],C_SCHEME_TRUE);}

/* k3747 in k3829 in k3648 in k3645 in loop in k3627 in k3624 in k3621 in k3618 in k3614 in k3605 in a3596 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in ... */
static void C_ccall f_3749(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1231: ##sys#put! */
t2=*((C_word*)lf[39]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[40],t1);}

/* k3755 in k3766 in k3829 in k3648 in k3645 in loop in k3627 in k3624 in k3621 in k3618 in k3614 in k3605 in a3596 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in ... */
static void C_ccall f_3757(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
/* chicken-syntax.scm:1233: ##sys#append */
t3=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],((C_word*)t0)[3],t2);}
else{
/* chicken-syntax.scm:1233: ##sys#append */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_END_OF_LIST);}}

/* k3512 in g2380 in k3487 in k3484 in k3478 in a3475 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in ... */
static void C_ccall f_3514(C_word c,C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3514,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3521,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_eqp(t1,lf[27]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_a_i_cons(&a,2,lf[26],t5);
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list2(&a,2,lf[27],t6));}
else{
if(C_truep(((C_word*)t0)[4])){
/* chicken-syntax.scm:1290: ##compiler#check-and-validate-type */
t4=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t1,lf[25]);}
else{
t4=t1;
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,lf[26],t6);
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_list2(&a,2,t4,t7));}}}

/* k10074 in k10067 in k10012 in k10001 in a9998 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_10076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_10017(t3,t2);}

/* g2380 in k3487 in k3484 in k3478 in a3475 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in ... */
static void C_fcall f_3510(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3510,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3514,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(t2);
/* chicken-syntax.scm:1285: ##sys#strip-syntax */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7445 in expand in k7407 in k7404 in k7401 in k7393 in a7390 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in ... */
static void C_ccall f_7447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7447,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7453,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_i_car(((C_word*)t0)[2]);
/* chicken-syntax.scm:507: c */
t4=((C_word*)t0)[9];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[10],t3);}

/* k3519 in k3512 in g2380 in k3487 in k3484 in k3478 in a3475 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in ... */
static void C_ccall f_3521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3521,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,lf[26],t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list2(&a,2,t1,t4));}

/* k7468 in k7465 in k7451 in k7445 in expand in k7407 in k7404 in k7401 in k7393 in a7390 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in ... */
static void C_ccall f_7470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[194]);}

/* k7472 in k7451 in k7445 in expand in k7407 in k7404 in k7401 in k7393 in a7390 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in ... */
static void C_ccall f_7474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:511: ##sys#notice */
t2=*((C_word*)lf[195]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[196],t1);}

/* k10090 in a10087 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_10092(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10092,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,2,lf[269],t2));}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_chicken_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("chicken_2dsyntax_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(3966)){
C_save(t1);
C_rereclaim2(3966*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,296);
lf[0]=C_h_intern(&lf[0],28,"\003sysdefine-values-definition");
lf[1]=C_h_intern(&lf[1],29,"\003syschicken-macro-environment");
lf[2]=C_h_intern(&lf[2],17,"register-feature!");
lf[3]=C_h_intern(&lf[3],6,"srfi-8");
lf[4]=C_h_intern(&lf[4],7,"srfi-11");
lf[5]=C_h_intern(&lf[5],7,"srfi-15");
lf[6]=C_h_intern(&lf[6],7,"srfi-16");
lf[7]=C_h_intern(&lf[7],7,"srfi-26");
lf[8]=C_h_intern(&lf[8],7,"srfi-31");
lf[9]=C_h_intern(&lf[9],16,"\003sysmacro-subset");
lf[10]=C_h_intern(&lf[10],29,"\003sysdefault-macro-environment");
lf[11]=C_h_intern(&lf[11],28,"\003sysextend-macro-environment");
lf[12]=C_h_intern(&lf[12],11,"define-type");
lf[13]=C_h_intern(&lf[13],10,"\000compiling");
lf[14]=C_h_intern(&lf[14],12,"\003sysfeatures");
lf[15]=C_h_intern(&lf[15],26,"\010compilertype-abbreviation");
lf[16]=C_h_intern(&lf[16],16,"\003sysput/restore!");
lf[17]=C_h_intern(&lf[17],24,"\004coreelaborationtimeonly");
lf[18]=C_h_intern(&lf[18],32,"\010compilercheck-and-validate-type");
lf[19]=C_h_intern(&lf[19],16,"\003sysstrip-syntax");
lf[20]=C_h_intern(&lf[20],5,"quote");
lf[21]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[22]=C_h_intern(&lf[22],16,"\003syscheck-syntax");
lf[23]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[24]=C_h_intern(&lf[24],18,"\003syser-transformer");
lf[25]=C_h_intern(&lf[25],17,"compiler-typecase");
lf[26]=C_h_intern(&lf[26],10,"\004corebegin");
lf[27]=C_h_intern(&lf[27],4,"else");
lf[28]=C_h_intern(&lf[28],3,"map");
lf[29]=C_h_intern(&lf[29],13,"\004coretypecase");
lf[30]=C_h_intern(&lf[30],8,"\004corelet");
lf[31]=C_h_intern(&lf[31],15,"get-line-number");
lf[32]=C_h_intern(&lf[32],6,"gensym");
lf[33]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001\376\377\001\000\000\000\001");
lf[34]=C_h_intern(&lf[34],21,"define-specialization");
lf[35]=C_h_intern(&lf[35],6,"inline");
lf[36]=C_h_intern(&lf[36],4,"hide");
lf[37]=C_h_intern(&lf[37],12,"\004coredeclare");
lf[38]=C_h_intern(&lf[38],8,"\004corethe");
lf[39]=C_h_intern(&lf[39],8,"\003sysput!");
lf[40]=C_h_intern(&lf[40],30,"\010compilerlocal-specializations");
lf[41]=C_h_intern(&lf[41],10,"\003sysappend");
lf[42]=C_h_intern(&lf[42],22,"\010compilervariable-mark");
lf[43]=C_h_intern(&lf[43],7,"reverse");
lf[44]=C_h_intern(&lf[44],1,"\052");
lf[45]=C_h_intern(&lf[45],12,"syntax-error");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\027invalid argument syntax");
lf[47]=C_h_intern(&lf[47],6,"define");
lf[48]=C_h_intern(&lf[48],13,"\003sysglobalize");
lf[49]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010variable\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000"
"\000\376\377\001\000\000\000\001");
lf[50]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[51]=C_h_intern(&lf[51],6,"assume");
lf[52]=C_h_intern(&lf[52],3,"the");
lf[53]=C_h_intern(&lf[53],9,"\003sysmap-n");
lf[54]=C_h_intern(&lf[54],3,"let");
lf[55]=C_h_intern(&lf[55],25,"\003syssyntax-rules-mismatch");
lf[56]=C_h_intern(&lf[56],5,"\003sys+");
lf[57]=C_h_intern(&lf[57],5,"\003sys=");
lf[58]=C_h_intern(&lf[58],6,"\003sys>=");
lf[59]=C_h_intern(&lf[59],10,"\003syslength");
lf[60]=C_h_intern(&lf[60],9,"\003syslist\077");
lf[61]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[62]=C_h_intern(&lf[62],1,":");
lf[63]=C_h_intern(&lf[63],22,"\010compilervalidate-type");
lf[64]=C_h_intern(&lf[64],4,"type");
lf[65]=C_h_intern(&lf[65],9,"predicate");
lf[66]=C_h_intern(&lf[66],4,"pure");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\023invalid type syntax");
lf[68]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[69]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[70]=C_h_intern(&lf[70],7,"functor");
lf[71]=C_h_intern(&lf[71],21,"\003syssyntax-error-hook");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000\030invalid functor argument");
lf[73]=C_h_intern(&lf[73],20,"\003sysvalidate-exports");
lf[74]=C_h_intern(&lf[74],20,"\003sysregister-functor");
lf[75]=C_h_intern(&lf[75],6,"import");
lf[76]=C_h_intern(&lf[76],6,"scheme");
lf[77]=C_h_intern(&lf[77],7,"chicken");
lf[78]=C_h_intern(&lf[78],16,"begin-for-syntax");
lf[79]=C_h_intern(&lf[79],11,"\004coremodule");
lf[80]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\000\000\000\002\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\003\000\000\002\376\001\000\000\001_"
"\376\001\000\000\001_");
lf[81]=C_h_intern(&lf[81],16,"define-interface");
lf[82]=C_h_intern(&lf[82],14,"\004coreinterface");
lf[83]=C_h_intern(&lf[83],10,"\000interface");
lf[84]=C_h_intern(&lf[84],17,"syntax-error-hook");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\017invalid exports");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000-`\052\047 is not allowed as a name for an interface");
lf[87]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[88]=C_h_intern(&lf[88],19,"let-compiler-syntax");
lf[89]=C_h_intern(&lf[89],24,"\004corelet-compiler-syntax");
lf[90]=C_h_intern(&lf[90],22,"define-compiler-syntax");
lf[91]=C_h_intern(&lf[91],27,"\004coredefine-compiler-syntax");
lf[92]=C_h_intern(&lf[92],14,"use-for-syntax");
lf[93]=C_h_intern(&lf[93],28,"require-extension-for-syntax");
lf[94]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[95]=C_h_intern(&lf[95],3,"use");
lf[96]=C_h_intern(&lf[96],22,"\004corerequire-extension");
lf[97]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[98]=C_h_intern(&lf[98],17,"define-for-syntax");
lf[99]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[100]=C_h_intern(&lf[100],3,"rec");
lf[101]=C_h_intern(&lf[101],11,"\004corelambda");
lf[102]=C_h_intern(&lf[102],12,"\004coreletrec\052");
lf[103]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[104]=C_h_intern(&lf[104],5,"apply");
lf[105]=C_h_intern(&lf[105],4,"cute");
lf[106]=C_decode_literal(C_heaptop,"\376B\000\000+tail patterns after <...> are not supported");
lf[107]=C_decode_literal(C_heaptop,"\376B\000\000\047you need to supply at least a procedure");
lf[108]=C_h_intern(&lf[108],5,"<...>");
lf[109]=C_h_intern(&lf[109],2,"<>");
lf[110]=C_h_intern(&lf[110],19,"\003sysprimitive-alias");
lf[111]=C_h_intern(&lf[111],3,"cut");
lf[112]=C_decode_literal(C_heaptop,"\376B\000\000+tail patterns after <...> are not supported");
lf[113]=C_decode_literal(C_heaptop,"\376B\000\000\047you need to supply at least a procedure");
lf[114]=C_h_intern(&lf[114],18,"getter-with-setter");
lf[115]=C_h_intern(&lf[115],18,"define-record-type");
lf[116]=C_h_intern(&lf[116],10,"\004corequote");
lf[117]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[118]=C_h_intern(&lf[118],18,"\003sysmake-structure");
lf[119]=C_h_intern(&lf[119],14,"\003sysstructure\077");
lf[120]=C_h_intern(&lf[120],19,"\003syscheck-structure");
lf[121]=C_h_intern(&lf[121],10,"\004corecheck");
lf[122]=C_h_intern(&lf[122],13,"\003sysblock-ref");
lf[123]=C_h_intern(&lf[123],10,"\003syssetter");
lf[124]=C_h_intern(&lf[124],14,"\003sysblock-set!");
lf[125]=C_h_intern(&lf[125],6,"setter");
lf[126]=C_h_intern(&lf[126],1,"y");
lf[127]=C_h_intern(&lf[127],1,"x");
lf[128]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\000\000\000\002\376\001\000\000\010variable\376\377\001\000\000\000\001\376\003\000\000\002\376\001\000\000\010variable\376\001\000"
"\000\001_");
lf[129]=C_h_intern(&lf[129],4,"memv");
lf[130]=C_h_intern(&lf[130],14,"condition-case");
lf[131]=C_h_intern(&lf[131],9,"condition");
lf[132]=C_h_intern(&lf[132],8,"\003sysslot");
lf[133]=C_h_intern(&lf[133],10,"\003syssignal");
lf[134]=C_h_intern(&lf[134],4,"cond");
lf[135]=C_h_intern(&lf[135],17,"handle-exceptions");
lf[136]=C_h_intern(&lf[136],3,"and");
lf[137]=C_h_intern(&lf[137],4,"kvar");
lf[138]=C_h_intern(&lf[138],5,"exvar");
lf[139]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[140]=C_h_intern(&lf[140],30,"call-with-current-continuation");
lf[141]=C_h_intern(&lf[141],22,"with-exception-handler");
lf[142]=C_h_intern(&lf[142],9,"\003sysapply");
lf[143]=C_h_intern(&lf[143],10,"\003sysvalues");
lf[144]=C_h_intern(&lf[144],20,"\003syscall-with-values");
lf[145]=C_h_intern(&lf[145],4,"args");
lf[146]=C_h_intern(&lf[146],1,"k");
lf[147]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[148]=C_h_intern(&lf[148],21,"define-record-printer");
lf[149]=C_h_intern(&lf[149],27,"\003sysregister-record-printer");
lf[150]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\006symbol\376\377\016\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[151]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[152]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[153]=C_h_intern(&lf[153],2,">=");
lf[154]=C_h_intern(&lf[154],3,"car");
lf[155]=C_h_intern(&lf[155],3,"cdr");
lf[156]=C_h_intern(&lf[156],3,"eq\077");
lf[157]=C_h_intern(&lf[157],6,"length");
lf[158]=C_h_intern(&lf[158],11,"case-lambda");
lf[159]=C_h_intern(&lf[159],7,"\004coreif");
lf[160]=C_h_intern(&lf[160],9,"split-at!");
lf[161]=C_h_intern(&lf[161],4,"take");
lf[162]=C_h_intern(&lf[162],11,"lambda-list");
lf[163]=C_h_intern(&lf[163],25,"\003sysdecompose-lambda-list");
lf[164]=C_h_intern(&lf[164],10,"fold-right");
lf[165]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\012\004corecheck\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\003syserror\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\004coreimmutable\376\003\000\000\002\376\003"
"\000\000\002\376\001\000\000\012\004corequote\376\003\000\000\002\376B\000\0000no matching clause in call to \047case-lambda\047 form\376\377\016\376"
"\377\016\376\377\016\376\377\016");
lf[166]=C_h_intern(&lf[166],6,"append");
lf[167]=C_h_intern(&lf[167],4,"lvar");
lf[168]=C_h_intern(&lf[168],4,"rvar");
lf[169]=C_h_intern(&lf[169],3,"min");
lf[170]=C_h_intern(&lf[170],7,"require");
lf[171]=C_h_intern(&lf[171],6,"srfi-1");
lf[172]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[173]=C_h_intern(&lf[173],5,"null\077");
lf[174]=C_h_intern(&lf[174],14,"let-optionals\052");
lf[175]=C_h_intern(&lf[175],4,"tmp2");
lf[176]=C_h_intern(&lf[176],3,"tmp");
lf[177]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\004list\376\001\000\000\001_");
lf[178]=C_h_intern(&lf[178],8,"optional");
lf[179]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001");
lf[180]=C_h_intern(&lf[180],13,"let-optionals");
lf[181]=C_h_intern(&lf[181],14,"string->symbol");
lf[182]=C_h_intern(&lf[182],13,"string-append");
lf[183]=C_h_intern(&lf[183],14,"symbol->string");
lf[184]=C_decode_literal(C_heaptop,"\376B\000\000\001%");
lf[185]=C_decode_literal(C_heaptop,"\376B\000\000\004def-");
lf[186]=C_h_intern(&lf[186],4,"let\052");
lf[187]=C_h_intern(&lf[187],6,"_%rest");
lf[188]=C_h_intern(&lf[188],4,"body");
lf[189]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[190]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000");
lf[191]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[192]=C_h_intern(&lf[192],6,"select");
lf[193]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[194]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\012\004corebegin\376\377\016");
lf[195]=C_h_intern(&lf[195],10,"\003sysnotice");
lf[196]=C_decode_literal(C_heaptop,"\376B\000\0005non-`else\047 clause following `else\047 clause in `select\047");
lf[197]=C_h_intern(&lf[197],8,"\003syseqv\077");
lf[198]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[199]=C_decode_literal(C_heaptop,"\376B\000\000\016invalid syntax");
lf[200]=C_h_intern(&lf[200],2,"or");
lf[201]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[202]=C_h_intern(&lf[202],8,"and-let\052");
lf[203]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[204]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000\376\001\000\000\001_");
lf[205]=C_h_intern(&lf[205],13,"define-inline");
lf[206]=C_decode_literal(C_heaptop,"\376B\000\000\052invalid substitution form - must be lambda");
lf[207]=C_h_intern(&lf[207],6,"lambda");
lf[208]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[209]=C_h_intern(&lf[209],18,"\004coredefine-inline");
lf[210]=C_h_intern(&lf[210],8,"list-ref");
lf[211]=C_h_intern(&lf[211],9,"nth-value");
lf[212]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[213]=C_h_intern(&lf[213],13,"letrec-values");
lf[214]=C_h_intern(&lf[214],5,"foldl");
lf[215]=C_h_intern(&lf[215],37,"\003sysexpand-multiple-values-assignment");
lf[216]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[217]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\013lambda-list\376\001\000\000\001_\376\377\001\000\000\000\000\376\001\000\000\001_");
lf[218]=C_h_intern(&lf[218],11,"let\052-values");
lf[219]=C_h_intern(&lf[219],10,"let-values");
lf[220]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\004list\376\001\000\000\001_");
lf[221]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\004list\376\001\000\000\001_");
lf[222]=C_h_intern(&lf[222],13,"define-values");
lf[223]=C_h_intern(&lf[223],11,"set!-values");
lf[224]=C_h_intern(&lf[224],8,"for-each");
lf[225]=C_h_intern(&lf[225],19,"\003sysregister-export");
lf[226]=C_h_intern(&lf[226],18,"\003syscurrent-module");
lf[227]=C_h_intern(&lf[227],7,"\003sysget");
lf[228]=C_h_intern(&lf[228],16,"\004coremacro-alias");
lf[229]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\013lambda-list\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[230]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\013lambda-list\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[231]=C_h_intern(&lf[231],6,"unless");
lf[232]=C_h_intern(&lf[232],14,"\004coreundefined");
lf[233]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\002");
lf[234]=C_h_intern(&lf[234],4,"when");
lf[235]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\002");
lf[236]=C_h_intern(&lf[236],12,"parameterize");
lf[237]=C_decode_literal(C_heaptop,"\376B\000\000\011parameter");
lf[238]=C_h_intern(&lf[238],16,"\003sysdynamic-wind");
lf[239]=C_h_intern(&lf[239],1,"t");
lf[240]=C_h_intern(&lf[240],9,"\004coreset!");
lf[241]=C_h_intern(&lf[241],4,"mode");
lf[242]=C_h_intern(&lf[242],4,"swap");
lf[243]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\002");
lf[244]=C_h_intern(&lf[244],9,"eval-when");
lf[245]=C_h_intern(&lf[245],19,"\004corecompiletimetoo");
lf[246]=C_h_intern(&lf[246],20,"\004corecompiletimeonly");
lf[247]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[248]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[249]=C_h_intern(&lf[249],9,"\003syserror");
lf[250]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid situation specifier");
lf[251]=C_h_intern(&lf[251],4,"load");
lf[252]=C_h_intern(&lf[252],7,"compile");
lf[253]=C_h_intern(&lf[253],4,"eval");
lf[254]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\002");
lf[255]=C_h_intern(&lf[255],9,"fluid-let");
lf[256]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\001\000\000\001_");
lf[257]=C_h_intern(&lf[257],6,"ensure");
lf[258]=C_h_intern(&lf[258],15,"\003syssignal-hook");
lf[259]=C_h_intern(&lf[259],11,"\000type-error");
lf[260]=C_decode_literal(C_heaptop,"\376B\000\000\033argument has incorrect type");
lf[261]=C_h_intern(&lf[261],14,"\004coreimmutable");
lf[262]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\003");
lf[263]=C_h_intern(&lf[263],6,"assert");
lf[264]=C_decode_literal(C_heaptop,"\376B\000\000\020assertion failed");
lf[265]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[266]=C_decode_literal(C_heaptop,"\376B\000\000\002) ");
lf[267]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[268]=C_h_intern(&lf[268],7,"include");
lf[269]=C_h_intern(&lf[269],12,"\004coreinclude");
lf[270]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006string\376\377\016");
lf[271]=C_h_intern(&lf[271],7,"declare");
lf[272]=C_h_intern(&lf[272],4,"time");
lf[273]=C_h_intern(&lf[273],15,"\003sysstart-timer");
lf[274]=C_h_intern(&lf[274],14,"\003sysstop-timer");
lf[275]=C_h_intern(&lf[275],17,"\003sysdisplay-times");
lf[276]=C_h_intern(&lf[276],7,"receive");
lf[277]=C_h_intern(&lf[277],8,"\003syslist");
lf[278]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\013lambda-list\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[279]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[280]=C_h_intern(&lf[280],13,"define-record");
lf[281]=C_decode_literal(C_heaptop,"\376B\000\000\032invalid slot specification");
lf[282]=C_h_intern(&lf[282],3,"val");
lf[283]=C_decode_literal(C_heaptop,"\376B\000\000\001-");
lf[284]=C_decode_literal(C_heaptop,"\376B\000\000\001-");
lf[285]=C_decode_literal(C_heaptop,"\376B\000\000\005-set!");
lf[286]=C_h_intern(&lf[286],17,"\003sysstring-append");
lf[287]=C_decode_literal(C_heaptop,"\376B\000\000\001\077");
lf[288]=C_decode_literal(C_heaptop,"\376B\000\000\005make-");
lf[289]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\001\000\000\001_");
lf[290]=C_h_intern(&lf[290],15,"define-constant");
lf[291]=C_h_intern(&lf[291],20,"\004coredefine-constant");
lf[292]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[293]=C_h_intern(&lf[293],21,"\003sysmacro-environment");
lf[294]=C_h_intern(&lf[294],11,"\003sysprovide");
lf[295]=C_h_intern(&lf[295],14,"chicken-syntax");
C_register_lf2(lf,296,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3261,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:38: ##sys#provide */
t3=*((C_word*)lf[294]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[295]);}

/* k3546 in k3487 in k3484 in k3478 in a3475 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in ... */
static void C_ccall f_3548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3548,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,lf[29],t3);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,3,lf[30],((C_word*)t0)[5],t4));}

/* k10038 in k10015 in k10012 in k10001 in a9998 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_fcall f_10040(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10040,NULL,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[249],t1);
t3=C_a_i_list(&a,4,lf[159],((C_word*)t0)[2],((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[30],((C_word*)t0)[5],t3));}

/* k7454 in k7451 in k7445 in expand in k7407 in k7404 in k7401 in k7393 in a7390 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in ... */
static void C_ccall f_7456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7456,2,t0,t1);}
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[26],t2));}

/* k7451 in k7445 in expand in k7407 in k7404 in k7401 in k7393 in a7390 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in ... */
static void C_ccall f_7453(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7453,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7456,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:508: expand */
t3=((C_word*)((C_word*)t0)[4])[1];
f_7422(t3,t2,((C_word*)t0)[5],C_SCHEME_TRUE);}
else{
if(C_truep(((C_word*)t0)[6])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7467,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7474,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:513: ##sys#strip-syntax */
t4=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}
else{
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7493,a[2]=((C_word*)t0)[7],a[3]=((C_word)li72),tmp=(C_word)a,a+=4,tmp);
t7=C_u_i_car(((C_word*)t0)[2]);
t8=C_i_check_list_2(t7,lf[28]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7504,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7506,a[2]=t6,a[3]=t5,a[4]=t11,a[5]=t3,a[6]=((C_word)li73),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_7506(t13,t9,t7);}}}

/* k5282 in k5275 in k5269 in k5266 in loop in k5249 in k5246 in k5243 in k5240 in a5237 in k5406 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in ... */
static void C_ccall f_5284(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5284,2,t0,t1);}
t2=t1;
t3=C_i_car(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5300,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t6=C_u_i_cdr(((C_word*)t0)[2]);
t7=C_a_i_list(&a,1,((C_word*)t0)[5]);
/* chicken-syntax.scm:986: ##sys#append */
t8=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t5,t6,t7);}

/* k4487 in k4475 in g2057 in k4419 in k4416 in a4413 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in ... */
static void C_fcall f_4489(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4489,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]));}
else{
/* chicken-syntax.scm:1154: ##sys#syntax-error-hook */
t2=*((C_word*)lf[71]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[5],lf[72],((C_word*)t0)[6],((C_word*)t0)[7]);}}

/* map-loop2374 in k3487 in k3484 in k3478 in a3475 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in ... */
static void C_fcall f_3550(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3550,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3579,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:1284: g2380 */
t5=((C_word*)t0)[5];
f_3510(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4478 in k4475 in g2057 in k4419 in k4416 in a4413 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in ... */
static void C_ccall f_4480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4480,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* k9938 in k9926 in a9923 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9940(C_word c,C_word t0,C_word t1){
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
C_word ab[65],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9940,2,t0,t1);}
t2=t1;
t3=C_a_i_list(&a,2,t2,((C_word*)t0)[2]);
t4=C_a_i_list(&a,1,t3);
t5=t4;
t6=C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t7=C_a_i_list(&a,2,lf[121],t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9963,a[2]=t8,a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t10=t9;
f_9963(t10,C_a_i_cons(&a,2,lf[259],((C_word*)t0)[5]));}
else{
t10=C_a_i_list(&a,2,lf[116],lf[260]);
t11=C_a_i_list(&a,2,lf[261],t10);
t12=C_a_i_list(&a,2,lf[116],((C_word*)t0)[3]);
t13=C_a_i_list(&a,3,t11,t2,t12);
t14=t9;
f_9963(t14,C_a_i_cons(&a,2,lf[259],t13));}}

/* k3577 in map-loop2374 in k3487 in k3484 in k3478 in a3475 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in ... */
static void C_ccall f_3579(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3579,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3550(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3550(t6,((C_word*)t0)[5],t5);}}

/* a10087 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_10088(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10088,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10092,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:163: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[268],t2,lf[270]);}

/* k10084 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_10086(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:159: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[268],C_SCHEME_END_OF_LIST,t1);}

/* map-loop2051 in k4419 in k4416 in a4413 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in ... */
static void C_fcall f_4536(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4536,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4565,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:1146: g2057 */
t5=((C_word*)t0)[5];
f_4470(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4532 in k4419 in k4416 in a4413 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in ... */
static void C_ccall f_4534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4534,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[20],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4468,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1157: ##sys#validate-exports */
t5=*((C_word*)lf[73]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[6],lf[70]);}

/* k9961 in k9938 in k9926 in a9923 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_fcall f_9963(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9963,NULL,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[258],t1);
t3=C_a_i_list(&a,4,lf[159],((C_word*)t0)[2],((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[30],((C_word*)t0)[5],t3));}

/* k5266 in loop in k5249 in k5246 in k5243 in k5240 in a5237 in k5406 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in ... */
static void C_ccall f_5268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5268,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5271,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:984: reverse */
t4=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[6]);}

/* k10388 in k10385 in k10382 in mapslots in k10530 in k10556 in k10341 in k10280 in k10277 in k10274 in k10271 in k10263 in a10260 in k3266 in k3263 in k3259 */
static void C_ccall f_10390(C_word c,C_word t0,C_word t1){
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
C_word ab[87],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10390,2,t0,t1);}
t2=t1;
t3=C_a_i_list(&a,2,lf[127],lf[282]);
t4=C_a_i_list(&a,2,lf[116],((C_word*)t0)[2]);
t5=C_a_i_list(&a,3,lf[120],lf[127],t4);
t6=C_a_i_list(&a,2,lf[121],t5);
t7=C_a_i_list(&a,4,lf[124],lf[127],((C_word*)t0)[3],lf[282]);
t8=C_a_i_list(&a,4,lf[101],t3,t6,t7);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10416,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t11=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10420,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[8],a[6]=t9,a[7]=((C_word*)t0)[9],a[8]=t2,a[9]=t10,tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[7])){
t12=t11;
f_10420(t12,C_SCHEME_END_OF_LIST);}
else{
t12=C_a_i_list(&a,3,((C_word*)t0)[9],((C_word*)t0)[10],t9);
t13=t11;
f_10420(t13,C_a_i_list(&a,1,t12));}}

/* k4419 in k4416 in a4413 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in ... */
static void C_ccall f_4421(C_word c,C_word t0,C_word t1){
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
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4421,2,t0,t1);}
t2=C_i_cadr(t1);
t3=C_i_car(t2);
t4=t3;
t5=C_u_i_cdr(t2);
t6=C_i_caddr(t1);
t7=t6;
t8=C_u_i_cdr(t1);
t9=C_u_i_cdr(t8);
t10=C_u_i_cdr(t9);
t11=C_a_i_list(&a,2,lf[20],t4);
t12=t11;
t13=C_SCHEME_END_OF_LIST;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_SCHEME_FALSE;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4470,a[2]=t4,a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp);
t18=C_i_check_list_2(t5,lf[28]);
t19=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4534,a[2]=t10,a[3]=t12,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4536,a[2]=t16,a[3]=t21,a[4]=t14,a[5]=t17,a[6]=((C_word)li20),tmp=(C_word)a,a+=7,tmp));
t23=((C_word*)t21)[1];
f_4536(t23,t19,t5);}

/* k4563 in map-loop2051 in k4419 in k4416 in a4413 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in ... */
static void C_ccall f_4565(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4565,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4536(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4536(t6,((C_word*)t0)[5],t5);}}

/* k10385 in k10382 in mapslots in k10530 in k10556 in k10341 in k10280 in k10277 in k10274 in k10271 in k10263 in a10260 in k3266 in k3263 in k3259 */
static void C_ccall f_10387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10387,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10390,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,tmp=(C_word)a,a+=11,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10513,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:94: string-append */
t5=*((C_word*)lf[182]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[10],lf[283],((C_word*)t0)[11]);}

/* k10382 in mapslots in k10530 in k10556 in k10341 in k10280 in k10277 in k10274 in k10271 in k10263 in a10260 in k3266 in k3263 in k3259 */
static void C_ccall f_10384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10384,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_10387,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t2,tmp=(C_word)a,a+=12,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10517,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:93: string-append */
t5=*((C_word*)lf[182]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,((C_word*)t0)[10],lf[284],t2,lf[285]);}

/* k7418 in k7407 in k7404 in k7401 in k7393 in a7390 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in ... */
static void C_ccall f_7420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7420,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[30],((C_word*)t0)[3],t1));}

/* expand in k7407 in k7404 in k7401 in k7393 in a7390 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in ... */
static void C_fcall f_7422(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7422,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[193]);}
else{
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(0));
t5=t4;
t6=C_slot(t2,C_fix(1));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7447,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t7,a[6]=t3,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:506: ##sys#check-syntax */
t9=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,lf[192],t5,lf[198]);}
else{
/* chicken-syntax.scm:502: syntax-error */
t4=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,lf[192],lf[199],t2);}}}

/* k5234 in k5406 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in ... */
static void C_ccall f_5236(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:971: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[111],((C_word*)t0)[3],t1);}

/* a5237 in k5406 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in ... */
static void C_ccall f_5238(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5238,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5242,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:976: r */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[109]);}

/* a4574 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in ... */
static void C_ccall f_4575(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4575,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4579,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1109: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[81],t2,lf[87]);}

/* k4571 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in ... */
static void C_ccall f_4573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1105: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[81],C_SCHEME_END_OF_LIST,t1);}

/* k4577 in a4574 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in ... */
static void C_ccall f_4579(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4579,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4582,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* chicken-syntax.scm:1110: ##sys#strip-syntax */
t4=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* k5202 in k5162 in k5136 in loop in k5050 in k5047 in k5044 in k5041 in a5038 in k5226 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in ... */
static void C_ccall f_5204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1035: r */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k4586 in k4583 in k4580 in k4577 in a4574 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in ... */
static void C_ccall f_4588(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4588,2,t0,t1);}
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=t2;
t4=C_a_i_list(&a,2,((C_word*)t0)[2],lf[82]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4611,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t7=C_i_caddr(((C_word*)t0)[5]);
/* chicken-syntax.scm:1120: ##sys#strip-syntax */
t8=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t6,t7);}

/* k10364 in k10530 in k10556 in k10341 in k10280 in k10277 in k10274 in k10271 in k10263 in a10260 in k3266 in k3263 in k3259 */
static void C_ccall f_10366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10366,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,lf[26],t3));}

/* k4580 in k4577 in a4574 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in ... */
static void C_ccall f_4582(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4582,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4585,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1111: r */
t4=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[20]);}

/* k4583 in k4580 in k4577 in a4574 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in ... */
static void C_ccall f_4585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4585,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4588,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=C_eqp(lf[44],((C_word*)t0)[2]);
if(C_truep(t4)){
/* chicken-syntax.scm:1113: syntax-error-hook */
t5=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[81],lf[86]);}
else{
t5=t3;
f_4588(2,t5,C_SCHEME_UNDEFINED);}}

/* mapslots in k10530 in k10556 in k10341 in k10280 in k10277 in k10274 in k10271 in k10263 in a10260 in k3266 in k3263 in k3259 */
static void C_fcall f_10368(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10368,NULL,4,t0,t1,t2,t3);}
t4=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
t5=t2;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_i_car(t2);
t6=C_i_symbolp(t5);
t7=C_i_not(t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10384,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=t8,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t8)){
t10=C_i_cadr(t5);
/* chicken-syntax.scm:92: symbol->string */
t11=*((C_word*)lf[183]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t9,t10);}
else{
/* chicken-syntax.scm:92: symbol->string */
t10=*((C_word*)lf[183]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t5);}}}

/* loop in k5249 in k5246 in k5243 in k5240 in a5237 in k5406 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in ... */
static void C_fcall f_5258(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5258,NULL,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(C_i_nullp(t2))){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5268,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:983: reverse */
t7=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t3);}
else{
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5333,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
t7=C_i_car(t2);
/* chicken-syntax.scm:992: c */
t8=((C_word*)t0)[6];
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,((C_word*)t0)[8],t7);}}

/* k5298 in k5282 in k5275 in k5269 in k5266 in loop in k5249 in k5246 in k5243 in k5240 in a5237 in k5406 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in ... */
static void C_ccall f_5300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5300,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[101],((C_word*)t0)[5],t3));}

/* k5249 in k5246 in k5243 in k5240 in a5237 in k5406 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in ... */
static void C_ccall f_5251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5251,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5258,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t5,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li33),tmp=(C_word)a,a+=10,tmp));
t7=((C_word*)t5)[1];
f_5258(t7,((C_word*)t0)[8],t3,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* k5308 in k5269 in k5266 in loop in k5249 in k5246 in k5243 in k5240 in a5237 in k5406 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in ... */
static void C_ccall f_5310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:986: r */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k4466 in k4532 in k4419 in k4416 in a4413 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in ... */
static void C_ccall f_4468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[63],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4468,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[20],t1);
t3=C_a_i_list(&a,2,lf[20],((C_word*)t0)[2]);
t4=C_a_i_list(&a,5,lf[74],((C_word*)t0)[3],((C_word*)t0)[4],t2,t3);
t5=C_a_i_list(&a,3,lf[75],lf[76],lf[77]);
t6=C_a_i_list(&a,2,lf[78],t4);
t7=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,5,lf[79],((C_word*)t0)[6],C_SCHEME_TRUE,t5,t6));}

/* k5275 in k5269 in k5266 in loop in k5249 in k5246 in k5243 in k5240 in a5237 in k5406 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in ... */
static void C_ccall f_5277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5277,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5284,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:986: ##sys#append */
t4=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[5],t2);}

/* k10341 in k10280 in k10277 in k10274 in k10271 in k10263 in a10260 in k3266 in k3263 in k3259 */
static void C_ccall f_10343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10343,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10558,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10578,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
t5=*((C_word*)lf[286]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,lf[288],((C_word*)t0)[6]);}

/* g2057 in k4419 in k4416 in a4413 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in ... */
static void C_fcall f_4470(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4470,NULL,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4477,a[2]=t1,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t6=C_i_cadr(t2);
/* chicken-syntax.scm:1148: ##sys#validate-exports */
t7=*((C_word*)lf[73]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,lf[70]);}

/* k4475 in g2057 in k4419 in k4416 in a4413 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in ... */
static void C_ccall f_4477(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4477,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4480,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_i_symbolp(((C_word*)t0)[3]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4489,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t6=t5;
f_4489(t6,t4);}
else{
if(C_truep(C_i_listp(((C_word*)t0)[3]))){
t6=C_u_i_length(((C_word*)t0)[3]);
t7=C_eqp(C_fix(2),t6);
if(C_truep(t7)){
t8=C_i_car(((C_word*)t0)[3]);
if(C_truep(C_i_symbolp(t8))){
t9=C_i_cadr(((C_word*)t0)[3]);
t10=t5;
f_4489(t10,C_i_symbolp(t9));}
else{
t9=t5;
f_4489(t9,C_SCHEME_FALSE);}}
else{
t8=t5;
f_4489(t8,C_SCHEME_FALSE);}}
else{
t6=t5;
f_4489(t6,C_SCHEME_FALSE);}}}

/* k5269 in k5266 in loop in k5249 in k5246 in k5243 in k5240 in a5237 in k5406 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in ... */
static void C_ccall f_5271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5271,2,t0,t1);}
t2=t1;
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5277,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5310,a[2]=((C_word*)t0)[6],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:986: gensym */
t5=*((C_word*)lf[32]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t3=C_i_car(t2);
t4=C_a_i_list(&a,2,lf[26],t3);
t5=C_u_i_cdr(t2);
t6=C_a_i_cons(&a,2,t4,t5);
t7=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,3,lf[101],((C_word*)t0)[5],t6));}}

/* k5246 in k5243 in k5240 in a5237 in k5406 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in ... */
static void C_ccall f_5248(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5248,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5251,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=C_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t4))){
/* chicken-syntax.scm:980: syntax-error */
t5=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,lf[111],lf[113],((C_word*)t0)[2]);}
else{
t5=t3;
f_5251(2,t5,C_SCHEME_UNDEFINED);}}

/* k5243 in k5240 in a5237 in k5406 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in ... */
static void C_ccall f_5245(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5245,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5248,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:978: r */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[104]);}

/* k5240 in a5237 in k5406 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in ... */
static void C_ccall f_5242(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5242,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5245,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:977: r */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[108]);}

/* k5357 in k5331 in loop in k5249 in k5246 in k5243 in k5240 in a5237 in k5406 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in ... */
static void C_ccall f_5359(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5359,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
if(C_truep(C_i_nullp(t3))){
/* chicken-syntax.scm:997: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_5258(t4,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_TRUE);}
else{
/* chicken-syntax.scm:998: syntax-error */
t4=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[4],lf[111],lf[112],((C_word*)t0)[7]);}}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[2];
t5=C_u_i_car(t4);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[6]);
/* chicken-syntax.scm:1001: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_5258(t7,((C_word*)t0)[4],t3,((C_word*)t0)[5],t6,C_SCHEME_FALSE);}}

/* k5351 in k5331 in loop in k5249 in k5246 in k5243 in k5240 in a5237 in k5406 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in ... */
static void C_ccall f_5353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:993: r */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k9723 in loop in k9643 in k9634 in k9328 in k9316 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9725,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,C_SCHEME_FALSE,t1));}

/* k7596 in fold in k7559 in a7556 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in ... */
static void C_ccall f_7598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7598,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,4,lf[159],((C_word*)t0)[3],t1,C_SCHEME_FALSE));}

/* loop in k9643 in k9634 in k9328 in k9316 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_fcall f_9711(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_9711,NULL,3,t0,t1,t2);}
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9725,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=C_fixnum_difference(t2,C_fix(1));
/* chicken-syntax.scm:225: loop */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}

/* k4410 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in ... */
static void C_ccall f_4412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1132: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[70],C_SCHEME_END_OF_LIST,t1);}

/* a4413 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in ... */
static void C_ccall f_4414(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4414,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4418,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1136: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[70],t2,lf[80]);}

/* k4416 in a4413 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in ... */
static void C_ccall f_4418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4418,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4421,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1137: ##sys#strip-syntax */
t3=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k5975 in k5971 in k5964 in k5942 in k5812 in k5809 in k5806 in k5803 in k5800 in k5797 in a5794 in k6060 in k6064 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in ... */
static void C_ccall f_5977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5977,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,3,lf[30],((C_word*)t0)[3],t2);
t4=C_i_cadr(((C_word*)t0)[4]);
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,4,((C_word*)t0)[6],((C_word*)t0)[7],t3,t4));}

/* k5971 in k5964 in k5942 in k5812 in k5809 in k5806 in k5803 in k5800 in k5797 in a5794 in k6060 in k6064 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in ... */
static void C_ccall f_5973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5973,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5977,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_assq(((C_word*)t0)[7],((C_word*)t0)[8]))){
/* chicken-syntax.scm:887: ##sys#append */
t4=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[8],C_SCHEME_END_OF_LIST);}
else{
t4=C_a_i_list(&a,2,lf[133],((C_word*)t0)[6]);
t5=C_a_i_list(&a,2,((C_word*)t0)[7],t4);
t6=C_a_i_list(&a,1,t5);
/* chicken-syntax.scm:887: ##sys#append */
t7=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,((C_word*)t0)[8],t6);}}

/* k5226 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in ... */
static void C_ccall f_5228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5228,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[104],t1);
t3=C_a_i_list(&a,1,t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5037,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5039,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1006: ##sys#er-transformer */
t7=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}

/* a7556 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in ... */
static void C_ccall f_7557(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7557,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7561,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:470: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[202],t2,lf[204]);}

/* k7553 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in ... */
static void C_ccall f_7555(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:466: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[202],C_SCHEME_END_OF_LIST,t1);}

/* map-loop713 in k8810 in k8796 in k8786 in k8774 in k8759 in k8756 in k8750 in k8747 in k8739 in a8721 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in ... */
static void C_fcall f_8895(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[59],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8895,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=f_8858(C_a_i(&a,48),((C_word*)t0)[2],t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8908,a[2]=((C_word*)t0)[3],a[3]=t10,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t12=t11;
f_8908(t12,C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t10));}
else{
t12=C_mutate2(((C_word *)((C_word*)t0)[5])+1,t10);
t13=t11;
f_8908(t13,t12);}}
else{
t6=((C_word*)((C_word*)t0)[5])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k5334 in k5331 in loop in k5249 in k5246 in k5243 in k5240 in a5237 in k5406 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in ... */
static void C_ccall f_5336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5336,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* chicken-syntax.scm:994: loop */
t6=((C_word*)((C_word*)t0)[5])[1];
f_5258(t6,((C_word*)t0)[6],t3,t4,t5,C_SCHEME_FALSE);}

/* map-loop1696 in k5942 in k5812 in k5809 in k5806 in k5803 in k5800 in k5797 in a5794 in k6060 in k6064 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in ... */
static void C_fcall f_5997(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5997,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6026,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:887: g1702 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6768 in loop in k6729 in k6726 in k6723 in k6720 in k6708 in a6705 in k6850 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in ... */
static void C_ccall f_6770(C_word c,C_word t0,C_word t1){
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
C_word ab[86],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6770,2,t0,t1);}
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t4=C_i_cadr(((C_word*)t0)[2]);
t5=C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t6=C_a_i_list(&a,4,lf[159],t3,t4,t5);
t7=C_a_i_list(&a,2,t2,t6);
t8=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t9=C_a_i_list(&a,2,lf[20],C_SCHEME_END_OF_LIST);
t10=C_a_i_list(&a,2,((C_word*)t0)[6],((C_word*)t0)[4]);
t11=C_a_i_list(&a,4,lf[159],t8,t9,t10);
t12=C_a_i_list(&a,2,t1,t11);
t13=C_a_i_list(&a,2,t7,t12);
t14=t13;
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6781,a[2]=((C_word*)t0)[7],a[3]=t14,tmp=(C_word)a,a+=4,tmp);
t16=((C_word*)t0)[8];
t17=C_u_i_cdr(t16);
/* chicken-syntax.scm:742: loop */
t18=((C_word*)((C_word*)t0)[9])[1];
f_6744(t18,t15,t1,t17);}

/* k5331 in loop in k5249 in k5246 in k5243 in k5240 in a5237 in k5406 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in ... */
static void C_ccall f_5333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5333,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5336,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5353,a[2]=((C_word*)t0)[7],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:993: gensym */
t4=*((C_word*)lf[32]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5359,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
/* chicken-syntax.scm:995: c */
t5=((C_word*)t0)[9];
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,((C_word*)t0)[10],t4);}}

/* k9742 in map-loop257 in k9634 in k9328 in k9316 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_fcall f_9744(C_word t0,C_word t1){
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
f_9731(t5,((C_word*)t0)[7],t3,t4);}

/* k7190 in k7178 in k7175 in k7172 in k7169 in k7141 in k7135 in k7132 in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in ... */
static void C_ccall f_7192(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7192,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7195,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t2,tmp=(C_word)a,a+=12,tmp);
t4=t3;
t5=((C_word*)t0)[6];
t6=t2;
t7=((C_word*)t0)[11];
t8=*((C_word*)lf[32]+1);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6974,a[2]=t4,a[3]=t5,a[4]=t7,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:614: reverse */
t10=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,((C_word*)t0)[10]);}

/* k8883 in k8810 in k8796 in k8786 in k8774 in k8759 in k8756 in k8750 in k8747 in k8739 in a8721 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in ... */
static void C_ccall f_8885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8885,2,t0,t1);}
t2=C_a_i_list(&a,3,lf[240],((C_word*)t0)[2],C_SCHEME_TRUE);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:280: ##sys#append */
t4=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[3],t1,t3);}

/* k7193 in k7190 in k7178 in k7175 in k7172 in k7169 in k7141 in k7135 in k7132 in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in ... */
static void C_ccall f_7195(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7195,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7198,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:667: make-if-tree */
t4=((C_word*)t0)[9];
f_7045(t4,t3,((C_word*)t0)[10],((C_word*)t0)[11],((C_word*)t0)[6],((C_word*)t0)[2]);}

/* k7196 in k7193 in k7190 in k7178 in k7175 in k7172 in k7169 in k7141 in k7135 in k7132 in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in ... */
static void C_ccall f_7198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7198,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7205,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:670: r */
t4=((C_word*)t0)[9];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[186]);}

/* k6779 in k6768 in loop in k6729 in k6726 in k6723 in k6720 in k6708 in a6705 in k6850 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in ... */
static void C_ccall f_6781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6781,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[30],((C_word*)t0)[3],t1));}

/* fold in k7559 in a7556 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in ... */
static void C_fcall f_7571(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(6);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_7571,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[26],((C_word*)t0)[2]));}
else{
t3=C_i_car(t2);
t4=t3;
t5=t2;
t6=C_u_i_cdr(t5);
if(C_truep(C_i_pairp(t4))){
t7=C_i_cdr(t4);
if(C_truep(C_i_nullp(t7))){
t8=C_u_i_car(t4);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7613,a[2]=t1,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:479: fold */
t13=t9;
t14=t6;
t1=t13;
t2=t14;
goto loop;}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7616,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:481: ##sys#check-syntax */
t9=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,lf[202],t4,lf[203]);}}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7598,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:478: fold */
t13=t7;
t14=t6;
t1=t13;
t2=t14;
goto loop;}}}

/* k7178 in k7175 in k7172 in k7169 in k7141 in k7135 in k7132 in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in ... */
static void C_ccall f_7180(C_word c,C_word t0,C_word t1){
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
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7180,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7181,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li65),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7192,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7231,a[2]=t6,a[3]=t10,a[4]=t4,a[5]=t7,a[6]=((C_word)li67),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_7231(t12,t8,((C_word*)t0)[5]);}

/* g1398 in k7178 in k7175 in k7172 in k7169 in k7141 in k7135 in k7132 in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in ... */
static void C_fcall f_7181(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7181,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7189,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:662: prefix-sym */
f_7144(t3,lf[185],t2);}

/* k7187 in g1398 in k7178 in k7175 in k7172 in k7169 in k7141 in k7135 in k7132 in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in ... */
static void C_ccall f_7189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:662: r */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k6682 in k6686 in k6690 in k6694 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in ... */
static void C_ccall f_6684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6684,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[156],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6680,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:754: ##sys#primitive-alias */
t5=*((C_word*)lf[110]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[157]);}

/* k6678 in k6682 in k6686 in k6690 in k6694 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in ... */
static void C_ccall f_6680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6680,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[157],t1);
t3=C_a_i_list(&a,5,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6266,a[2]=((C_word*)t0)[6],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6268,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:755: ##sys#er-transformer */
t7=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}

/* map-loop257 in k9634 in k9328 in k9316 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_fcall f_9731(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9731,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9744,a[2]=((C_word*)t0)[2],a[3]=t10,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t12=t11;
f_9744(t12,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t10));}
else{
t12=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t10);
t13=t11;
f_9744(t13,t12);}}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k7559 in a7556 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in ... */
static void C_ccall f_7561(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7561,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7571,a[2]=t5,a[3]=t7,a[4]=((C_word)li76),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_7571(t9,((C_word*)t0)[3],t2);}

/* k6686 in k6690 in k6694 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in ... */
static void C_ccall f_6688(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6688,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[155],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6684,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:753: ##sys#primitive-alias */
t5=*((C_word*)lf[110]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[156]);}

/* k6690 in k6694 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in ... */
static void C_ccall f_6692(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6692,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[154],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6688,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:752: ##sys#primitive-alias */
t5=*((C_word*)lf[110]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[155]);}

/* k6694 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in ... */
static void C_ccall f_6696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6696,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[153],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6692,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:751: ##sys#primitive-alias */
t5=*((C_word*)lf[110]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[154]);}

/* k8854 in k8810 in k8796 in k8786 in k8774 in k8759 in k8756 in k8750 in k8747 in k8739 in a8721 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in ... */
static void C_ccall f_8856(C_word c,C_word t0,C_word t1){
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
C_word ab[76],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8856,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,lf[101],t2);
t4=C_a_i_list(&a,2,((C_word*)t0)[2],t3);
t5=C_a_i_list(&a,1,t4);
t6=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);
t7=C_a_i_cons(&a,2,lf[101],t6);
t8=C_a_i_list(&a,4,lf[238],((C_word*)t0)[2],t7,((C_word*)t0)[2]);
t9=C_a_i_list(&a,3,lf[30],t5,t8);
t10=C_a_i_list(&a,3,lf[30],((C_word*)t0)[4],t9);
t11=C_a_i_list(&a,3,lf[30],((C_word*)t0)[5],t10);
t12=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_a_i_list(&a,3,lf[30],((C_word*)t0)[7],t11));}

/* g719 in k8810 in k8796 in k8786 in k8774 in k8759 in k8756 in k8750 in k8747 in k8739 in a8721 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in ... */
static C_word C_fcall f_8858(C_word *a,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_overflow_check;
t3=C_a_i_list(&a,1,t1);
t4=C_a_i_list(&a,2,lf[239],t3);
t5=C_a_i_list(&a,1,t4);
t6=C_a_i_list(&a,3,t1,t2,((C_word*)t0)[2]);
t7=C_a_i_list(&a,3,lf[240],t2,lf[239]);
return(C_a_i_list(&a,4,lf[30],t5,t6,t7));}

/* k9453 in map-loop420 in k9499 in k9335 in k9328 in k9316 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_fcall f_9455(C_word t0,C_word t1){
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
f_9442(t5,((C_word*)t0)[7],t3,t4);}

/* map-loop1228 in k7451 in k7445 in expand in k7407 in k7404 in k7401 in k7393 in a7390 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in ... */
static void C_fcall f_7506(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(13);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_7506,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=f_7493(C_a_i(&a,10),((C_word*)t0)[2],t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t6=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t5);
t7=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate2(((C_word *)((C_word*)t0)[5])+1,t5);
t7=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[5])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7502 in k7451 in k7445 in expand in k7407 in k7404 in k7401 in k7393 in a7390 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in ... */
static void C_ccall f_7504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7504,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=C_u_i_cdr(((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,lf[26],t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7489,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:521: expand */
t8=((C_word*)((C_word*)t0)[5])[1];
f_7422(t8,t7,((C_word*)t0)[6],C_SCHEME_FALSE);}

/* map-loop278 in k9328 in k9316 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_fcall f_9780(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_9780,NULL,3,t0,t1,t2);}
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

/* k9404 in map-loop456 in k9368 in k9499 in k9335 in k9328 in k9316 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_fcall f_9406(C_word t0,C_word t1){
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
f_9393(t5,((C_word*)t0)[7],t3,t4);}

/* k10617 in k3263 in k3259 */
static void C_ccall f_10619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:46: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[290],C_SCHEME_END_OF_LIST,t1);}

/* k10609 in map-loop25 in k10280 in k10277 in k10274 in k10271 in k10263 in a10260 in k3266 in k3263 in k3259 */
static void C_ccall f_10611(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10611,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_10582(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_10582(t6,((C_word*)t0)[5],t5);}}

/* k6708 in a6705 in k6850 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in ... */
static void C_ccall f_6710(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6710,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=C_i_caddr(((C_word*)t0)[2]);
t5=t4;
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
t8=C_u_i_cdr(t7);
t9=C_u_i_cdr(t8);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6722,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t9,a[5]=((C_word*)t0)[4],a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:724: r */
t11=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,lf[173]);}

/* k6726 in k6723 in k6720 in k6708 in a6705 in k6850 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in ... */
static void C_ccall f_6728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6728,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6731,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:727: r */
t4=((C_word*)t0)[7];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[176]);}

/* k6723 in k6720 in k6708 in a6705 in k6850 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in ... */
static void C_ccall f_6725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6725,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6728,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:726: r */
t4=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[155]);}

/* k6720 in k6708 in a6705 in k6850 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in ... */
static void C_ccall f_6722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6722,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6725,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:725: r */
t4=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[154]);}

/* k8810 in k8796 in k8786 in k8774 in k8759 in k8756 in k8750 in k8747 in k8739 in a8721 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 in ... */
static void C_ccall f_8812(C_word c,C_word t0,C_word t1){
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
C_word ab[40],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8812,2,t0,t1);}
t2=t1;
t3=C_a_i_list(&a,2,((C_word*)t0)[2],C_SCHEME_FALSE);
t4=C_a_i_list(&a,1,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8856,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t5,a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8858,a[2]=((C_word*)t0)[2],a[3]=((C_word)li111),tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8885,a[2]=((C_word*)t0)[2],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8895,a[2]=t11,a[3]=t10,a[4]=t14,a[5]=t8,a[6]=((C_word)li112),tmp=(C_word)a,a+=7,tmp));
t16=((C_word*)t14)[1];
f_8895(t16,t12,((C_word*)t0)[7],((C_word*)t0)[8]);}

/* k7089 in k7113 in k7121 in k7129 in recur in make-if-tree in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in ... */
static void C_ccall f_7091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7091,2,t0,t1);}
t2=C_a_i_list(&a,3,lf[30],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,4,lf[159],((C_word*)t0)[4],((C_word*)t0)[5],t2));}

/* k8786 in k8774 in k8759 in k8756 in k8750 in k8747 in k8739 in a8721 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8788(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8788,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(((C_word*)t0)[2],lf[28]);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8798,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8997,a[2]=t6,a[3]=t10,a[4]=t4,a[5]=((C_word)li114),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_8997(t12,t8,((C_word*)t0)[2],((C_word*)t0)[8]);}

/* k8783 in g627 in k8774 in k8759 in k8756 in k8750 in k8747 in k8739 in a8721 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:287: r */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k6702 in k6850 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in ... */
static void C_ccall f_6704(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:715: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[174],((C_word*)t0)[3],t1);}

/* a6705 in k6850 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in ... */
static void C_ccall f_6706(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6706,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6710,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:720: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[174],t2,lf[177]);}

/* k4039 in a4024 in k4013 in k4003 in k3985 in k3971 in a3962 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in ... */
static void C_ccall f_4041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4041,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,t1,t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,((C_word*)t0)[2],t5));}

/* k4144 in k4138 in k4135 in k4129 in a3962 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in ... */
static void C_ccall f_4146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4146,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4155,a[2]=t4,a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_4155(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
f_3973(2,t2,C_SCHEME_FALSE);}}

/* k4138 in k4135 in k4129 in a3962 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in ... */
static void C_ccall f_4140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4140,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4146,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1201: ##sys#>= */
t4=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,C_fix(0));}

/* k6197 in a6194 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in ... */
static void C_ccall f_6199(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6199,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
if(C_truep(C_i_pairp(t3))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6213,a[2]=t3,a[3]=t6,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t8=C_a_i_cons(&a,2,t3,t6);
/* chicken-syntax.scm:825: ##sys#check-syntax */
t9=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t7,lf[148],t8,lf[150]);}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6243,a[2]=t3,a[3]=t6,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t8=C_a_i_cons(&a,2,t3,t6);
/* chicken-syntax.scm:832: ##sys#check-syntax */
t9=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t7,lf[148],t8,lf[151]);}}

/* a6610 in map-loop1488 in k6307 in k6270 in a6267 in k6678 in k6682 in k6686 in k6690 in k6694 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in ... */
static void C_ccall f_6611(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6611,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}

/* k5942 in k5812 in k5809 in k5806 in k5803 in k5800 in k5797 in a5794 in k6060 in k6064 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in ... */
static void C_ccall f_5944(C_word c,C_word t0,C_word t1){
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
C_word ab[70],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5944,2,t0,t1);}
t2=t1;
t3=C_a_i_list(&a,2,lf[116],lf[131]);
t4=C_a_i_list(&a,3,lf[119],((C_word*)t0)[2],t3);
t5=C_a_i_list(&a,3,lf[132],((C_word*)t0)[2],C_fix(1));
t6=C_a_i_list(&a,3,((C_word*)t0)[3],t4,t5);
t7=C_a_i_list(&a,2,((C_word*)t0)[4],t6);
t8=C_a_i_list(&a,1,t7);
t9=t8;
t10=C_SCHEME_END_OF_LIST;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=((C_word*)t0)[5];
t15=C_i_cddr(((C_word*)t0)[6]);
t16=C_i_check_list_2(t15,lf[28]);
t17=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5966,a[2]=t9,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t2,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5997,a[2]=t13,a[3]=t19,a[4]=t11,a[5]=t14,a[6]=((C_word)li43),tmp=(C_word)a,a+=7,tmp));
t21=((C_word*)t19)[1];
f_5997(t21,t17,t15);}

/* k4013 in k4003 in k3985 in k3971 in a3962 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in ... */
static void C_ccall f_4015(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4015,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4023,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4025,a[2]=((C_word*)t0)[4],a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1201: ##sys#map-n */
t5=*((C_word*)lf[53]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k8494 in map-loop857 in k8194 in k8191 in k8112 in a8109 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in ... */
static void C_ccall f_8496(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8496,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8467(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8467(t6,((C_word*)t0)[5],t5);}}

/* map-loop1488 in k6307 in k6270 in a6267 in k6678 in k6682 in k6686 in k6690 in k6694 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in ... */
static void C_fcall f_6623(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6623,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6652,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6611,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:765: ##sys#decompose-lambda-list */
t7=*((C_word*)lf[163]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,t5,t6);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6619 in k6307 in k6270 in a6267 in k6678 in k6682 in k6686 in k6690 in k6694 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in ... */
static void C_ccall f_6621(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[169]+1),t1);}

/* k4021 in k4013 in k4003 in k3985 in k3971 in a3962 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in ... */
static void C_ccall f_4023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4023,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,((C_word*)t0)[4],t2));}

/* a4024 in k4013 in k4003 in k3985 in k3971 in a3962 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in ... */
static void C_ccall f_4025(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4025,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4041,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1201: rename2140 */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[52]);}

/* k6729 in k6726 in k6723 in k6720 in k6708 in a6705 in k6850 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in ... */
static void C_ccall f_6731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6731,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6742,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6744,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t7,a[7]=((C_word*)t0)[8],a[8]=((C_word)li58),tmp=(C_word)a,a+=9,tmp));
t9=((C_word*)t7)[1];
f_6744(t9,t5,t1,((C_word*)t0)[9]);}

/* k6183 in k6187 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in ... */
static void C_ccall f_6185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6185,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[141],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6074,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6076,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:842: ##sys#er-transformer */
t7=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}

/* k5964 in k5942 in k5812 in k5809 in k5806 in k5803 in k5800 in k5797 in a5794 in k6060 in k6064 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in ... */
static void C_ccall f_5966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5966,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5973,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:888: r */
t4=((C_word*)t0)[8];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[134]);}

/* k8739 in a8721 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8741(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8741,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8749,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:282: r */
t8=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,lf[242]);}

/* k8747 in k8739 in a8721 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8749(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8749,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8752,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:283: r */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[241]);}

/* k6740 in k6729 in k6726 in k6723 in k6720 in k6708 in a6705 in k6850 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in ... */
static void C_ccall f_6742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6742,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[30],((C_word*)t0)[3],t1));}

/* loop in k6729 in k6726 in k6723 in k6720 in k6708 in a6705 in k6850 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in ... */
static void C_fcall f_6744(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_save_and_reclaim((void*)trf_6744,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_cons(&a,2,lf[30],t4));}
else{
t4=C_i_car(t3);
t5=t4;
if(C_truep(C_i_pairp(t5))){
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6770,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,a[8]=t3,a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:735: r */
t7=((C_word*)t0)[7];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,lf[175]);}
else{
t6=C_a_i_list(&a,2,t5,t2);
t7=C_a_i_list(&a,1,t6);
t8=C_a_i_cons(&a,2,t7,((C_word*)t0)[2]);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_a_i_cons(&a,2,lf[30],t8));}}}

/* k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in ... */
static void C_ccall f_3392(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3392,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3395,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3961,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3963,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1201: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in ... */
static void C_ccall f_3395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3395,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3398,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3595,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3597,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1207: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in ... */
static void C_ccall f_3398(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3398,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3401,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3474,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3476,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1274: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* map-loop2185 in k3971 in a3962 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in ... */
static void C_fcall f_4086(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_4086,NULL,3,t0,t1,t2);}
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

/* k8774 in k8759 in k8756 in k8750 in k8747 in k8739 in a8721 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8776(C_word c,C_word t0,C_word t1){
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
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8776,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8777,a[2]=((C_word*)t0)[2],a[3]=((C_word)li110),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8788,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9046,a[2]=t6,a[3]=t10,a[4]=t4,a[5]=t7,a[6]=((C_word)li115),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_9046(t12,t8,((C_word*)t0)[8]);}

/* k6187 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in ... */
static void C_ccall f_6189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6189,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[140],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6185,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:841: ##sys#primitive-alias */
t5=*((C_word*)lf[110]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[141]);}

/* k8768 in g599 in k8759 in k8756 in k8750 in k8747 in k8739 in a8721 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8770(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:286: r */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* g627 in k8774 in k8759 in k8756 in k8750 in k8747 in k8739 in a8721 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_fcall f_8777(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8777,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8785,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:287: gensym */
t3=*((C_word*)lf[32]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k4185 in a3962 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in ... */
static void C_ccall f_4187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4187,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4190,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[2]);
/* chicken-syntax.scm:1201: ##sys#length */
t4=*((C_word*)lf[59]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[3];
f_4131(2,t2,C_SCHEME_FALSE);}}

/* k9267 in k9260 in loop in k9207 in k9204 in k9201 in k9192 in a9189 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9269(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9269,2,t0,t1);}
if(C_truep(t1)){
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t3=C_slot(((C_word*)t0)[3],C_fix(1));
/* chicken-syntax.scm:261: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_9241(t4,((C_word*)t0)[5],t3);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9276,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:259: c */
t3=((C_word*)t0)[8];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[9],((C_word*)t0)[10]);}}

/* k9260 in loop in k9207 in k9204 in k9201 in k9192 in a9189 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9262,2,t0,t1);}
if(C_truep(t1)){
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t3=C_slot(((C_word*)t0)[3],C_fix(1));
/* chicken-syntax.scm:261: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_9241(t4,((C_word*)t0)[5],t3);}
else{
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9269,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:258: c */
t3=((C_word*)t0)[9];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[10],((C_word*)t0)[12]);}}

/* k6650 in map-loop1488 in k6307 in k6270 in a6267 in k6678 in k6682 in k6686 in k6690 in k6694 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in ... */
static void C_ccall f_6652(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6652,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6623(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6623(t6,((C_word*)t0)[5],t5);}}

/* g599 in k8759 in k8756 in k8750 in k8747 in k8739 in a8721 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_fcall f_8762(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8762,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8770,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_symbolp(t2))){
/* chicken-syntax.scm:277: gensym */
t4=*((C_word*)lf[32]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}
else{
/* chicken-syntax.scm:278: gensym */
t4=*((C_word*)lf[32]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[237]);}}

/* k8759 in k8756 in k8750 in k8747 in k8739 in a8721 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8761(C_word c,C_word t0,C_word t1){
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
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8761,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8762,a[2]=((C_word*)t0)[2],a[3]=((C_word)li109),tmp=(C_word)a,a+=4,tmp);
t8=C_i_check_list_2(((C_word*)t0)[3],lf[28]);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8776,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[3],tmp=(C_word)a,a+=9,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9081,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=t7,a[6]=((C_word)li116),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_9081(t13,t9,((C_word*)t0)[3]);}

/* k8452 in loop in k8213 in k8194 in k8191 in k8112 in a8109 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in ... */
static void C_ccall f_8454(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8454,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* chicken-syntax.scm:381: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_8423(t5,((C_word*)t0)[5],t4,t2);}

/* k8796 in k8786 in k8774 in k8759 in k8756 in k8750 in k8747 in k8739 in a8721 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8798(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8798,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(((C_word*)t0)[2],lf[28]);
t8=C_i_check_list_2(((C_word*)t0)[3],lf[28]);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8812,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t2,a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8948,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=((C_word)li113),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_8948(t13,t9,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k8700 in a8697 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8702(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8702,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
t6=C_a_i_cons(&a,2,lf[26],t5);
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,3,lf[159],t2,t6));}

/* k4135 in k4129 in a3962 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in ... */
static void C_ccall f_4137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4137,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4140,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
/* chicken-syntax.scm:1201: ##sys#length */
t4=*((C_word*)lf[59]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[3];
f_3973(2,t2,C_SCHEME_FALSE);}}

/* k4129 in a3962 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in ... */
static void C_ccall f_4131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4131,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4137,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
/* chicken-syntax.scm:1201: ##sys#list? */
t4=*((C_word*)lf[60]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[3];
f_3973(2,t2,C_SCHEME_FALSE);}}

/* k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in ... */
static void C_ccall f_3350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3350,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3353,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6066,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:862: ##sys#primitive-alias */
t4=*((C_word*)lf[110]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[27]);}

/* k7150 in prefix-sym in k7141 in k7135 in k7132 in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in ... */
static void C_ccall f_7152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:648: string->symbol */
t2=*((C_word*)lf[181]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in ... */
static void C_ccall f_3359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3359,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3362,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5228,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1005: ##sys#primitive-alias */
t4=*((C_word*)lf[110]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[104]);}

/* k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in ... */
static void C_ccall f_3353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3353,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3356,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5785,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:900: ##sys#primitive-alias */
t4=*((C_word*)lf[110]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[114]);}

/* k6191 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in ... */
static void C_ccall f_6193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:817: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[148],C_SCHEME_END_OF_LIST,t1);}

/* k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in ... */
static void C_ccall f_3356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3356,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3359,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5408,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:973: ##sys#primitive-alias */
t4=*((C_word*)lf[110]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[104]);}

/* a6194 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in ... */
static void C_ccall f_6195(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6195,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6199,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:821: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[148],t2,lf[152]);}

/* g1341 in k7141 in k7135 in k7132 in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in ... */
static void C_fcall f_7157(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7157,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7165,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:653: prefix-sym */
f_7144(t3,lf[184],t2);}

/* k7154 in prefix-sym in k7141 in k7135 in k7132 in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in ... */
static void C_ccall f_7156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:648: string-append */
t2=*((C_word*)lf[182]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k8459 in loop in k8213 in k8194 in k8191 in k8112 in a8109 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in ... */
static void C_ccall f_8461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8461,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* chicken-syntax.scm:381: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_8423(t5,((C_word*)t0)[5],t4,t2);}

/* map-loop857 in k8194 in k8191 in k8112 in a8109 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 in ... */
static void C_fcall f_8467(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8467,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8496,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:372: g863 */
t5=((C_word*)t0)[5];
f_8197(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4683 in k4670 in a4661 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in ... */
static void C_ccall f_4685(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4685,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,t1,t2));}

/* k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in ... */
static void C_ccall f_3362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3362,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3365,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4972,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4974,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1046: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in ... */
static void C_ccall f_3368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3368,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3371,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4926,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4928,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1073: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7141 in k7135 in k7132 in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in ... */
static void C_ccall f_7143(C_word c,C_word t0,C_word t1){
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
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7143,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7144,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7157,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li64),tmp=(C_word)a,a+=5,tmp);
t9=C_i_check_list_2(t2,lf[28]);
t10=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7171,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7301,a[2]=t7,a[3]=t12,a[4]=t5,a[5]=t8,a[6]=((C_word)li69),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_7301(t14,t10,t2);}

/* prefix-sym in k7141 in k7135 in k7132 in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in ... */
static void C_fcall f_7144(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7144,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7152,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7156,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:648: symbol->string */
t6=*((C_word*)lf[183]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}

/* k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in ... */
static void C_ccall f_3365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3365,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3368,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4943,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4945,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1062: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a8721 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8722(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8722,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8741,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:279: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[236],t2,lf[243]);}

/* k8718 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:271: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[236],C_SCHEME_END_OF_LIST,t1);}

/* k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in ... */
static void C_ccall f_3371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3371,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3374,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4905,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4907,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1080: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in ... */
static void C_ccall f_3377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3377,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3380,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4660,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4662,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1098: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7169 in k7141 in k7135 in k7132 in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in ... */
static void C_ccall f_7171(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7171,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7174,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7266,a[2]=t6,a[3]=t9,a[4]=t4,a[5]=((C_word)li68),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_7266(t11,t7,((C_word*)t0)[9]);}

/* k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in ... */
static void C_ccall f_3374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3374,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3377,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4808,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4810,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1090: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7175 in k7172 in k7169 in k7141 in k7135 in k7132 in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in ... */
static void C_ccall f_7177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7177,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7180,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:660: r */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[187]);}

/* k7172 in k7169 in k7141 in k7135 in k7132 in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in ... */
static void C_ccall f_7174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7174,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7177,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:657: r */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[188]);}

/* k8750 in k8747 in k8739 in a8721 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8752(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8752,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(((C_word*)t0)[2],lf[28]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8758,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9151,a[2]=t6,a[3]=t10,a[4]=t4,a[5]=((C_word)li118),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_9151(t12,t8,((C_word*)t0)[2]);}

/* k8756 in k8750 in k8747 in k8739 in a8721 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8758(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8758,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8761,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9116,a[2]=t6,a[3]=t9,a[4]=t4,a[5]=((C_word)li117),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_9116(t11,t7,((C_word*)t0)[7]);}

/* k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in ... */
static void C_ccall f_3380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3380,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3383,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4573,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4575,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1107: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in ... */
static void C_ccall f_3389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3389,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3392,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4266,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4268,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1190: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in ... */
static void C_ccall f_3386(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3386,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3389,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4304,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4306,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1170: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in ... */
static void C_ccall f_3383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3383,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3386,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4412,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4414,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1134: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7163 in g1341 in k7141 in k7135 in k7132 in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in ... */
static void C_ccall f_7165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:653: r */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k4670 in a4661 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in ... */
static void C_ccall f_4672(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4672,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=C_i_cdr(((C_word*)t0)[2]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4685,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1098: rename1979 */
t7=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,lf[89]);}
else{
/* chicken-syntax.scm:1098: ##sys#syntax-rules-mismatch */
t2=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[5]);}}

/* k7113 in k7121 in k7129 in recur in make-if-tree in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in ... */
static void C_ccall f_7115(C_word c,C_word t0,C_word t1){
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
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7115,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_list(&a,2,((C_word*)t0)[3],t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7091,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t7=((C_word*)t0)[7];
t8=C_u_i_cdr(t7);
t9=((C_word*)t0)[8];
t10=C_u_i_cdr(t9);
t11=C_a_i_cons(&a,2,((C_word*)t0)[9],((C_word*)t0)[10]);
/* chicken-syntax.scm:640: recur */
t12=((C_word*)((C_word*)t0)[11])[1];
f_7051(t12,t6,t8,t10,t11);}

/* k4003 in k3985 in k3971 in a3962 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in ... */
static void C_ccall f_4005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4005,2,t0,t1);}
t2=t1;
t3=C_i_cdr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4015,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1201: rename2140 */
t6=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[54]);}

/* loop in k8213 in k8194 in k8191 in k8112 in a8109 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in ... */
static void C_fcall f_8423(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8423,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
/* chicken-syntax.scm:376: reverse */
t4=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}
else{
t4=C_i_car(t2);
if(C_truep(C_i_pairp(t4))){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8461,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:380: map* */
t6=((C_word*)((C_word*)t0)[3])[1];
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,((C_word*)t0)[4],t4);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8454,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:379: lookup */
t6=((C_word*)t0)[4];
f_8216(3,t6,t5,t4);}}}

/* k10207 in k10192 in k10170 in a10167 in k3269 in k3266 in k3263 in k3259 */
static void C_fcall f_10209(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10209,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,t2,((C_word*)t0)[3]);
t4=C_a_i_list(&a,1,t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[4]);
t6=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,lf[30],t5));}
else{
t2=C_a_i_list(&a,3,lf[101],C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[4]);
t4=C_a_i_cons(&a,2,lf[101],t3);
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,3,lf[144],t2,t4));}}

/* k7132 in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in ... */
static void C_ccall f_7134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7134,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7137,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:645: ##sys#check-syntax */
t3=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[180],((C_word*)t0)[5],lf[189]);}

/* k6897 in k6907 in k6867 in k6864 in a6861 in k6931 in k6935 in k6939 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in ... */
static void C_ccall f_6899(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6899,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,4,lf[159],((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[30],((C_word*)t0)[6],t3));}

/* k7135 in k7132 in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in ... */
static void C_ccall f_7137(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7137,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_i_check_list_2(((C_word*)t0)[2],lf[28]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7143,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7336,a[2]=t5,a[3]=t9,a[4]=t3,a[5]=((C_word)li70),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_7336(t11,t7,((C_word*)t0)[2]);}

/* k7129 in recur in make-if-tree in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in ... */
static void C_ccall f_7131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7131,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7123,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:638: r */
t5=((C_word*)t0)[11];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[154]);}

/* k7121 in k7129 in recur in make-if-tree in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in ... */
static void C_ccall f_7123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7123,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7115,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:639: r */
t6=((C_word*)t0)[11];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[155]);}

/* map-loop1392 in k7178 in k7175 in k7172 in k7169 in k7141 in k7135 in k7132 in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in ... */
static void C_fcall f_7231(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7231,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7260,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:662: g1398 */
t5=((C_word*)t0)[5];
f_7181(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k10257 in k3266 in k3263 in k3259 */
static void C_ccall f_10259(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:54: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[280],C_SCHEME_END_OF_LIST,t1);}

/* k10271 in k10263 in a10260 in k3266 in k3263 in k3259 */
static void C_ccall f_10273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10273,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10276,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:62: r */
t4=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[47]);}

/* k7328 in map-loop1335 in k7141 in k7135 in k7132 in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in ... */
static void C_ccall f_7330(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7330,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7301(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7301(t6,((C_word*)t0)[5],t5);}}

/* map-loop1305 in k7135 in k7132 in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in ... */
static void C_fcall f_7336(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_7336,NULL,3,t0,t1,t2);}
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

/* a10260 in k3266 in k3263 in k3259 */
static void C_ccall f_10261(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10261,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10265,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:58: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[280],t2,lf[289]);}

/* k10164 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_10166(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:120: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[276],C_SCHEME_END_OF_LIST,t1);}

/* a10167 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_10168(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10168,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10172,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:125: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[276],t2,lf[279]);}

/* k10274 in k10271 in k10263 in a10260 in k3266 in k3263 in k3259 */
static void C_ccall f_10276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10276,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10279,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:63: r */
t4=((C_word*)t0)[7];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[125]);}

/* k10277 in k10274 in k10271 in k10263 in a10260 in k3266 in k3263 in k3259 */
static void C_ccall f_10279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10279,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10282,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:64: r */
t4=((C_word*)t0)[8];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[114]);}

/* k9656 in k9647 in k9643 in k9634 in k9328 in k9316 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9658(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:214: ##sys#append */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k5497 in loop in k5705 in k5453 in k5447 in k5444 in k5438 in k5435 in k5420 in a5417 in k5783 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in ... */
static void C_fcall f_5499(C_word t0,C_word t1){
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
C_word ab[142],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5499,NULL,2,t0,t1);}
t2=t1;
t3=C_a_i_list(&a,1,((C_word*)t0)[2]);
t4=C_a_i_list(&a,2,lf[116],((C_word*)t0)[3]);
t5=C_i_cadr(((C_word*)t0)[4]);
t6=C_a_i_list(&a,2,lf[116],t5);
t7=C_a_i_list(&a,4,lf[120],((C_word*)t0)[2],t4,t6);
t8=C_a_i_list(&a,2,lf[121],t7);
t9=C_a_i_list(&a,3,lf[122],((C_word*)t0)[2],((C_word*)t0)[5]);
t10=C_a_i_list(&a,4,lf[101],t3,t8,t9);
t11=t10;
t12=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5505,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=t2,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=t11,tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[9])){
t13=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[14]);
t14=C_a_i_list(&a,2,lf[116],((C_word*)t0)[3]);
t15=C_a_i_list(&a,2,lf[116],t2);
t16=C_a_i_list(&a,4,lf[120],((C_word*)t0)[2],t14,t15);
t17=C_a_i_list(&a,2,lf[121],t16);
t18=C_a_i_list(&a,4,lf[124],((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[14]);
t19=t12;
f_5505(t19,C_a_i_list(&a,4,lf[101],t13,t17,t18));}
else{
t13=t12;
f_5505(t13,C_SCHEME_FALSE);}}

/* k10263 in a10260 in k3266 in k3263 in k3259 */
static void C_ccall f_10265(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10265,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10273,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:61: symbol->string */
t8=*((C_word*)lf[183]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t3);}

/* k10280 in k10277 in k10274 in k10271 in k10263 in a10260 in k3266 in k3263 in k3259 */
static void C_ccall f_10282(C_word c,C_word t0,C_word t1){
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
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10282,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10283,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li142),tmp=(C_word)a,a+=5,tmp);
t8=C_i_check_list_2(((C_word*)t0)[4],lf[28]);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10343,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t2,a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10582,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=t7,a[6]=((C_word)li144),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_10582(t13,t9,((C_word*)t0)[4]);}

/* k9647 in k9643 in k9634 in k9328 in k9316 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9649,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[2],lf[28]);
t3=C_i_check_list_2(t1,lf[28]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9658,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9660,a[2]=((C_word*)t0)[5],a[3]=t6,a[4]=((C_word*)t0)[6],a[5]=((C_word)li128),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_9660(t8,t4,((C_word*)t0)[2],t1);}

/* k9643 in k9634 in k9328 in k9316 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9645(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9645,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t0)[2];
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9649,a[2]=t7,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t6,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t9=C_u_i_length(((C_word*)t0)[4]);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9711,a[2]=t11,a[3]=((C_word)li129),tmp=(C_word)a,a+=4,tmp));
t13=((C_word*)t11)[1];
f_9711(t13,t8,t9);}

/* k7258 in map-loop1392 in k7178 in k7175 in k7172 in k7169 in k7141 in k7135 in k7132 in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in ... */
static void C_ccall f_7260(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7260,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7231(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7231(t6,((C_word*)t0)[5],t5);}}

/* map-loop1363 in k7169 in k7141 in k7135 in k7132 in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in ... */
static void C_fcall f_7266(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_7266,NULL,3,t0,t1,t2);}
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

/* k9671 in map-loop314 in k9647 in k9643 in k9634 in k9328 in k9316 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_fcall f_9673(C_word t0,C_word t1){
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
f_9660(t5,((C_word*)t0)[7],t3,t4);}

/* g31 in k10280 in k10277 in k10274 in k10271 in k10263 in a10260 in k3266 in k3263 in k3259 */
static void C_fcall f_10283(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10283,NULL,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10311,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=t2;
t5=C_u_i_car(t4);
/* chicken-syntax.scm:69: c */
t6=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t5,((C_word*)t0)[3]);}
else{
/* chicken-syntax.scm:75: syntax-error */
t3=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,lf[280],lf[281],t2);}}}

/* k10170 in a10167 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_10172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10172,2,t0,t1);}
t2=C_i_cddr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t2))){
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t4);
t6=C_a_i_cons(&a,2,lf[101],t5);
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,3,lf[144],t6,lf[277]));}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10194,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:129: ##sys#check-syntax */
t4=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[276],((C_word*)t0)[2],lf[278]);}}

/* map-loop314 in k9647 in k9643 in k9634 in k9328 in k9316 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_fcall f_9660(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9660,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9673,a[2]=((C_word*)t0)[2],a[3]=t10,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t12=t11;
f_9673(t12,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t10));}
else{
t12=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t10);
t13=t11;
f_9673(t13,t12);}}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* map-loop172 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_fcall f_9885(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_9885,NULL,3,t0,t1,t2);}
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

/* k7393 in a7390 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in ... */
static void C_ccall f_7395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7395,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7403,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t6,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:493: r */
t8=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,lf[176]);}

/* a7390 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in ... */
static void C_ccall f_7391(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7391,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7395,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:490: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[192],t2,lf[201]);}

/* k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in ... */
static void C_ccall f_7385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7385,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[154],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7381,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:602: ##sys#primitive-alias */
t5=*((C_word*)lf[110]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[155]);}

/* k7387 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in ... */
static void C_ccall f_7389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:486: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[192],C_SCHEME_END_OF_LIST,t1);}

/* k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in ... */
static void C_ccall f_7381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7381,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[155],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6949,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6951,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:603: ##sys#er-transformer */
t7=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}

/* k9634 in k9328 in k9316 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9636(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9636,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[2],lf[28]);
t3=C_i_check_list_2(t1,lf[28]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9645,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9731,a[2]=((C_word*)t0)[6],a[3]=t6,a[4]=((C_word*)t0)[7],a[5]=((C_word)li130),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_9731(t8,t4,((C_word*)t0)[2],t1);}

/* k8959 in map-loop682 in k8796 in k8786 in k8774 in k8759 in k8756 in k8750 in k8747 in k8739 in a8721 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in ... */
static void C_fcall f_8961(C_word t0,C_word t1){
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
f_8948(t5,((C_word*)t0)[7],t3,t4);}

/* k5420 in a5417 in k5783 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in ... */
static void C_ccall f_5422(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5422,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=C_i_caddr(((C_word*)t0)[2]);
t5=t4;
t6=C_i_cadddr(((C_word*)t0)[2]);
t7=t6;
t8=C_i_cddddr(((C_word*)t0)[2]);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5437,a[2]=t5,a[3]=t9,a[4]=t3,a[5]=t7,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:911: r */
t11=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,lf[47]);}

/* k9842 in map-loop227 in k9316 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9844(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9844,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9815(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9815(t6,((C_word*)t0)[5],t5);}}

/* k6570 in build in a6396 in k6379 in k6369 in a6366 in a6356 in k6341 in k6334 in k6331 in k6328 in k6325 in k6322 in k6319 in k6316 in k6313 in k6310 in k6307 in k6270 in a6267 in k6678 in k6682 in ... */
static void C_ccall f_6572(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:801: r */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* map-loop651 in k8786 in k8774 in k8759 in k8756 in k8750 in k8747 in k8739 in a8721 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_fcall f_8997(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8997,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9010,a[2]=((C_word*)t0)[2],a[3]=t10,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t12=t11;
f_9010(t12,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t10));}
else{
t12=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t10);
t13=t11;
f_9010(t13,t12);}}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k7203 in k7196 in k7193 in k7190 in k7178 in k7175 in k7172 in k7169 in k7141 in k7135 in k7132 in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in ... */
static void C_ccall f_7205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7205,2,t0,t1);}
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[5]);
t4=C_a_i_cons(&a,2,lf[101],t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[6],t4);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[7]);
t7=C_a_i_cons(&a,2,t2,t6);
t8=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_list(&a,3,t1,t7,((C_word*)t0)[9]));}

/* k5414 in k5783 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in ... */
static void C_ccall f_5416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:898: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[115],((C_word*)t0)[3],t1);}

/* a5417 in k5783 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in ... */
static void C_ccall f_5418(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5418,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5422,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:903: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[115],t2,lf[128]);}

/* k10192 in k10170 in a10167 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_10194(C_word c,C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10194,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=C_i_caddr(((C_word*)t0)[2]);
t5=t4;
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
t8=C_u_i_cdr(t7);
t9=C_u_i_cdr(t8);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10209,a[2]=t3,a[3]=t5,a[4]=t9,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t3))){
t11=C_u_i_cdr(t3);
t12=t10;
f_10209(t12,C_i_nullp(t11));}
else{
t11=t10;
f_10209(t11,C_SCHEME_FALSE);}}

/* k9877 in map-loop199 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9879(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9879,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9850(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9850(t6,((C_word*)t0)[5],t5);}}

/* k5438 in k5435 in k5420 in a5417 in k5783 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in ... */
static void C_ccall f_5440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5440,2,t0,t1);}
t2=t1;
t3=C_i_cdr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5446,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t2,a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:914: r */
t6=((C_word*)t0)[9];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[127]);}

/* k4976 in a4973 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in ... */
static void C_ccall f_4978(C_word c,C_word t0,C_word t1){
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
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4978,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t2))){
t3=C_u_i_car(t2);
t4=C_u_i_cdr(t2);
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
t7=C_u_i_cdr(t6);
t8=C_a_i_cons(&a,2,t4,t7);
t9=C_a_i_cons(&a,2,lf[101],t8);
t10=C_a_i_list(&a,2,t3,t9);
t11=C_a_i_list(&a,1,t10);
t12=C_u_i_car(t2);
t13=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_a_i_list(&a,3,lf[102],t11,t12));}
else{
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
t6=C_a_i_cons(&a,2,t2,t5);
t7=C_a_i_list(&a,1,t6);
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_list(&a,3,lf[102],t7,t2));}}

/* k4970 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in ... */
static void C_ccall f_4972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1044: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[100],C_SCHEME_END_OF_LIST,t1);}

/* k5435 in k5420 in a5417 in k5783 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in ... */
static void C_ccall f_5437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5437,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5440,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:912: r */
t4=((C_word*)t0)[8];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[114]);}

/* a4973 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in ... */
static void C_ccall f_4974(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4974,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4978,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1048: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[100],t2,lf[103]);}

/* map-loop227 in k9316 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_fcall f_9815(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9815,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9844,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:218: g233 */
t4=((C_word*)t0)[5];
f_9319(t4,t3);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4903 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in ... */
static void C_ccall f_4905(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1078: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[92],C_SCHEME_END_OF_LIST,t1);}

/* k5447 in k5444 in k5438 in k5435 in k5420 in a5417 in k5783 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in ... */
static void C_ccall f_5449(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5449,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(((C_word*)t0)[2],lf[28]);
t8=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5455,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=t2,a[12]=((C_word*)t0)[2],tmp=(C_word)a,a+=13,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5744,a[2]=t6,a[3]=t10,a[4]=t4,a[5]=((C_word)li38),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_5744(t12,t8,((C_word*)t0)[2]);}

/* a4906 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in ... */
static void C_ccall f_4907(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4907,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4911,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1082: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[92],t2,lf[94]);}

/* k5444 in k5438 in k5435 in k5420 in a5417 in k5783 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in ... */
static void C_ccall f_5446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5446,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5449,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:915: r */
t4=((C_word*)t0)[11];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[126]);}

/* k5503 in k5497 in loop in k5705 in k5453 in k5447 in k5444 in k5438 in k5435 in k5420 in a5417 in k5783 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in ... */
static void C_fcall f_5505(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_5505,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5512,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
t4=C_u_i_cdr(((C_word*)t0)[8]);
t5=C_u_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5575,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[13],a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[10],a[7]=t5,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
t7=C_u_i_cdr(((C_word*)t0)[8]);
t8=C_u_i_car(t7);
/* chicken-syntax.scm:956: c */
t9=((C_word*)t0)[9];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,((C_word*)t0)[7],t8);}
else{
t7=t6;
f_5575(2,t7,C_SCHEME_FALSE);}}

/* k4909 in a4906 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in ... */
static void C_ccall f_4911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4911,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4918,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1083: r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[93]);}

/* k4916 in k4909 in a4906 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in ... */
static void C_ccall f_4918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4918,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,t1,t2));}

/* k5453 in k5447 in k5444 in k5438 in k5435 in k5420 in a5417 in k5783 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in ... */
static void C_ccall f_5455(C_word c,C_word t0,C_word t1){
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
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5455,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[116],((C_word*)t0)[2]);
t3=t2;
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5694,a[2]=((C_word*)t0)[3],a[3]=((C_word)li35),tmp=(C_word)a,a+=4,tmp);
t9=C_i_check_list_2(t1,lf[28]);
t10=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5707,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5709,a[2]=t8,a[3]=t7,a[4]=t12,a[5]=t5,a[6]=((C_word)li37),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_5709(t14,t10,t1);}

/* k5552 in k5510 in k5503 in k5497 in loop in k5705 in k5453 in k5447 in k5444 in k5438 in k5435 in k5420 in a5417 in k5783 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in ... */
static void C_ccall f_5554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5554,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_5520(t2,C_SCHEME_END_OF_LIST);}
else{
t2=C_a_i_list(&a,2,lf[123],lf[123]);
t3=C_a_i_list(&a,3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);
t4=((C_word*)t0)[2];
f_5520(t4,C_a_i_list(&a,1,t3));}}

/* map-loop199 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_fcall f_9850(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9850,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9879,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:217: g205 */
t4=((C_word*)t0)[5];
f_9307(t4,t3);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4924 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in ... */
static void C_ccall f_4926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1071: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[95],C_SCHEME_END_OF_LIST,t1);}

/* map-loop682 in k8796 in k8786 in k8774 in k8759 in k8756 in k8750 in k8747 in k8739 in a8721 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 in ... */
static void C_fcall f_8948(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8948,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8961,a[2]=((C_word*)t0)[2],a[3]=t10,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t12=t11;
f_8961(t12,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t10));}
else{
t12=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t10);
t13=t11;
f_8961(t13,t12);}}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* a4927 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in ... */
static void C_ccall f_4928(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4928,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4932,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1075: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[95],t2,lf[97]);}

/* loop in k5705 in k5453 in k5447 in k5444 in k5438 in k5435 in k5420 in a5417 in k5783 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in ... */
static void C_fcall f_5480(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5480,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=C_i_car(t2);
t5=t4;
t6=C_i_cddr(t5);
t7=C_i_pairp(t6);
t8=t7;
t9=(C_truep(t8)?C_i_caddr(t5):C_SCHEME_FALSE);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_5499,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t3,a[6]=t1,a[7]=t2,a[8]=((C_word*)t0)[4],a[9]=t8,a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],a[12]=t10,a[13]=((C_word*)t0)[7],a[14]=((C_word*)t0)[8],tmp=(C_word)a,a+=15,tmp);
if(C_truep(C_i_pairp(t10))){
t12=C_u_i_cdr(t10);
if(C_truep(C_i_pairp(t12))){
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5654,a[2]=t11,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
t14=C_u_i_car(t10);
/* chicken-syntax.scm:935: c */
t15=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t13,lf[125],t14);}
else{
t13=t11;
f_5499(t13,C_SCHEME_FALSE);}}
else{
t12=t11;
f_5499(t12,C_SCHEME_FALSE);}}}

/* map-loop1335 in k7141 in k7135 in k7132 in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in ... */
static void C_fcall f_7301(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7301,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7330,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:653: g1341 */
t5=((C_word*)t0)[5];
f_7157(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5522 in k5518 in k5510 in k5503 in k5497 in loop in k5705 in k5453 in k5447 in k5444 in k5438 in k5435 in k5420 in a5417 in k5783 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in ... */
static void C_ccall f_5524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:930: ##sys#append */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k5476 in k5705 in k5453 in k5447 in k5444 in k5438 in k5435 in k5420 in a5417 in k5783 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in ... */
static void C_ccall f_5478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5478,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,lf[26],t3));}

/* k5518 in k5510 in k5503 in k5497 in loop in k5705 in k5453 in k5447 in k5444 in k5438 in k5435 in k5420 in a5417 in k5783 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in ... */
static void C_fcall f_5520(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5520,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5524,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
t6=C_fixnum_increase(((C_word*)t0)[4]);
/* chicken-syntax.scm:966: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_5480(t7,t3,t5,t6);}

/* k5573 in k5503 in k5497 in loop in k5705 in k5453 in k5447 in k5444 in k5438 in k5435 in k5420 in a5417 in k5783 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in ... */
static void C_ccall f_5575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5575,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=((C_word*)t0)[5];
f_5512(t3,C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[7],t2));}
else{
t2=((C_word*)t0)[5];
f_5512(t2,C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[3]));}}

/* k4941 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in ... */
static void C_ccall f_4943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1060: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[98],C_SCHEME_END_OF_LIST,t1);}

/* a4944 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in ... */
static void C_ccall f_4945(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4945,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4949,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1064: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[98],t2,lf[99]);}

/* k4947 in a4944 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in ... */
static void C_ccall f_4949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4949,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4956,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1065: r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[78]);}

/* k4954 in k4947 in a4944 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in ... */
static void C_ccall f_4956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4956,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4964,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1066: r */
t4=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[47]);}

/* k8906 in map-loop713 in k8810 in k8796 in k8786 in k8774 in k8759 in k8756 in k8750 in k8747 in k8739 in a8721 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in ... */
static void C_fcall f_8908(C_word t0,C_word t1){
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
f_8895(t5,((C_word*)t0)[7],t3,t4);}

/* k4962 in k4954 in k4947 in a4944 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in ... */
static void C_ccall f_4964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4964,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,2,((C_word*)t0)[4],t3));}

/* k7893 in map-loop1099 in k7847 in k7841 in k7822 in k7819 in k7808 in a7805 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in ... */
static void C_ccall f_7895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7895,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7875,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t5=t4;
f_7875(t5,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t3));}
else{
t5=C_mutate2(((C_word *)((C_word*)t0)[7])+1,t3);
t6=t4;
f_7875(t6,t5);}}

/* k6522 in build in a6396 in k6379 in k6369 in a6366 in a6356 in k6341 in k6334 in k6331 in k6328 in k6325 in k6322 in k6319 in k6316 in k6313 in k6310 in k6307 in k6270 in a6267 in k6678 in k6682 in ... */
static void C_ccall f_6524(C_word c,C_word t0,C_word t1){
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
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6524,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t6=C_a_i_list(&a,2,t1,t5);
t7=C_a_i_list(&a,2,t4,t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6535,a[2]=((C_word*)t0)[6],a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=((C_word*)t0)[2];
t11=C_u_i_cdr(t10);
if(C_truep(C_i_pairp(t11))){
t12=((C_word*)t0)[2];
t13=C_u_i_cdr(t12);
/* chicken-syntax.scm:805: build */
t14=((C_word*)((C_word*)t0)[7])[1];
f_6471(t14,t9,t13,t1);}
else{
/* chicken-syntax.scm:806: build */
t12=((C_word*)((C_word*)t0)[7])[1];
f_6471(t12,t9,C_SCHEME_END_OF_LIST,t1);}}

/* k7873 in k7893 in map-loop1099 in k7847 in k7841 in k7822 in k7819 in k7808 in a7805 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in ... */
static void C_fcall f_7875(C_word t0,C_word t1){
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
f_7862(t5,((C_word*)t0)[7],t3,t4);}

/* k6533 in k6522 in build in a6396 in k6379 in k6369 in a6366 in a6356 in k6341 in k6334 in k6331 in k6328 in k6325 in k6322 in k6319 in k6316 in k6313 in k6310 in k6307 in k6270 in a6267 in k6678 in ... */
static void C_ccall f_6535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6535,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[30],((C_word*)t0)[3],t1));}

/* loop1976 in k4764 in k4758 in k4755 in a4661 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in ... */
static void C_fcall f_4775(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4775,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4782,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1098: ##sys#= */
t5=*((C_word*)lf[57]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,C_fix(0));}

/* k9192 in a9189 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9194(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9194,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,lf[26],t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9203,a[2]=((C_word*)t0)[3],a[3]=t8,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:248: r */
t10=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,lf[253]);}

/* a9189 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9190(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9190,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9194,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:245: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[244],t2,lf[254]);}

/* k4780 in loop1976 in k4764 in k4758 in k4755 in a4661 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in ... */
static void C_ccall f_4782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4782,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST));}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4796,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1098: ##sys#+ */
t5=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[5],C_fix(-1));}}

/* k4794 in k4780 in loop1976 in k4764 in k4758 in k4755 in a4661 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in ... */
static void C_ccall f_4796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1098: loop1976 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4775(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k4930 in a4927 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in ... */
static void C_ccall f_4932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4932,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,3,lf[96],t2,C_SCHEME_TRUE));}

/* a8697 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8698(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8698,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8702,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:311: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[234],t2,lf[235]);}

/* k8694 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:307: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[234],C_SCHEME_END_OF_LIST,t1);}

/* k5406 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in ... */
static void C_ccall f_5408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5408,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[104],t1);
t3=C_a_i_list(&a,1,t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5236,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5238,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:974: ##sys#er-transformer */
t7=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}

/* map-loop2213 in k3985 in k3971 in a3962 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in ... */
static void C_fcall f_4051(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4051,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cdr(t3);
t5=C_i_car(t4);
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

/* k9008 in map-loop651 in k8786 in k8774 in k8759 in k8756 in k8750 in k8747 in k8739 in a8721 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 in ... */
static void C_fcall f_9010(C_word t0,C_word t1){
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
f_8997(t5,((C_word*)t0)[7],t3,t4);}

/* k7819 in k7808 in a7805 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 in ... */
static void C_ccall f_7821(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7821,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7824,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7982,a[2]=t6,a[3]=t9,a[4]=t4,a[5]=((C_word)li85),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_7982(t11,t7,((C_word*)t0)[4]);}

/* k7822 in k7819 in k7808 in a7805 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in ... */
static void C_ccall f_7824(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7824,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(((C_word*)t0)[2],lf[214]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7843,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],a[6]=t6,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7946,a[2]=t10,a[3]=((C_word)li84),tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_7946(t12,t8,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k5514 in k5510 in k5503 in k5497 in loop in k5705 in k5453 in k5447 in k5444 in k5438 in k5435 in k5420 in a5417 in k5783 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in ... */
static void C_ccall f_5516(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5516,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k5510 in k5503 in k5497 in loop in k5705 in k5453 in k5447 in k5444 in k5438 in k5435 in k5420 in a5417 in k5783 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in ... */
static void C_fcall f_5512(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5512,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5516,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5520,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
if(C_truep(((C_word*)t0)[7])){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5554,a[2]=t4,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t6=C_i_cadr(((C_word*)t0)[9]);
/* chicken-syntax.scm:961: c */
t7=((C_word*)t0)[10];
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,((C_word*)t0)[7],t6);}
else{
t5=C_a_i_list(&a,3,((C_word*)t0)[11],((C_word*)t0)[12],((C_word*)t0)[8]);
t6=t4;
f_5520(t6,C_a_i_list(&a,1,t5));}}
else{
t5=t4;
f_5520(t5,C_SCHEME_END_OF_LIST);}}

/* map-loop593 in k8759 in k8756 in k8750 in k8747 in k8739 in a8721 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_fcall f_9081(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9081,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9110,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:286: g599 */
t5=((C_word*)t0)[5];
f_8762(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7808 in a7805 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_7810(C_word c,C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7810,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_i_check_list_2(t3,lf[28]);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7821,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8017,a[2]=t10,a[3]=t14,a[4]=t8,a[5]=((C_word)li86),tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_8017(t16,t12,t3);}

/* k9186 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:241: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[244],C_SCHEME_END_OF_LIST,t1);}

/* k10015 in k10012 in k10001 in a9998 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_fcall f_10017(C_word t0,C_word t1){
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
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10017,NULL,2,t0,t1);}
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,1,t2);
t4=t3;
t5=C_a_i_list(&a,2,lf[121],((C_word*)t0)[2]);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10040,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t8=C_u_i_cdr(((C_word*)t0)[5]);
t9=t7;
f_10040(t9,C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[6])[1],t8));}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10059,a[2]=t7,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:186: ##sys#strip-syntax */
t9=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,((C_word*)t0)[3]);}}

/* k10012 in k10001 in a9998 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_10014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10014,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10017,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_stringp(((C_word*)((C_word*)t0)[5])[1]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10069,a[2]=((C_word*)t0)[5],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:177: get-line-number */
t5=*((C_word*)lf[31]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[6]);}
else{
t4=t3;
f_10017(t4,C_SCHEME_UNDEFINED);}}

/* k8651 in a8648 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
/* chicken-syntax.scm:329: ##sys#expand-multiple-values-assignment */
t4=*((C_word*)lf[215]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[3],t2,t3);}

/* k7798 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_7800(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7800,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[210],t1);
t3=C_a_i_list(&a,1,t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7756,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7758,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:437: ##sys#er-transformer */
t7=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}

/* a7805 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_7806(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7806,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7810,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:419: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[213],t2,lf[217]);}

/* k7802 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_7804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:415: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[213],C_SCHEME_END_OF_LIST,t1);}

/* a8648 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8649(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8649,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8653,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:328: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[223],t2,lf[230]);}

/* k8645 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8647(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:324: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[223],C_SCHEME_END_OF_LIST,t1);}

/* loop2137 in k4144 in k4138 in k4135 in k4129 in a3962 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in ... */
static void C_fcall f_4155(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4155,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4162,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1201: ##sys#= */
t5=*((C_word*)lf[57]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,C_fix(0));}

/* k8672 in a8669 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8674,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,lf[232]);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,lf[26],t6);
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_list(&a,4,lf[159],t2,t3,t7));}

/* a8669 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8670(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8670,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8674,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:319: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[231],t2,lf[233]);}

/* k7858 in k7847 in k7841 in k7822 in k7819 in k7808 in a7805 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in ... */
static void C_ccall f_7860(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:420: ##sys#append */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* map-loop1099 in k7847 in k7841 in k7822 in k7819 in k7808 in a7805 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in ... */
static void C_fcall f_7862(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7862,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7895,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* chicken-syntax.scm:431: g1105 */
t9=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* map-loop566 in k8756 in k8750 in k8747 in k8739 in a8721 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_fcall f_9116(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_9116,NULL,3,t0,t1,t2);}
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

/* k10001 in a9998 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_10003(C_word c,C_word t0,C_word t1){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10003,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=C_i_nullp(t6);
t8=(C_truep(t7)?lf[264]:C_i_car(t6));
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10014,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=t10,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:175: r */
t12=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t11,lf[176]);}

/* k4699 in a4661 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in ... */
static void C_ccall f_4701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4701,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4707,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
/* chicken-syntax.scm:1098: ##sys#list? */
t4=*((C_word*)lf[60]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[3];
f_4672(2,t2,C_SCHEME_FALSE);}}

/* k9108 in map-loop593 in k8759 in k8756 in k8750 in k8747 in k8739 in a8721 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_9110(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9110,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9081(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9081(t6,((C_word*)t0)[5],t5);}}

/* k4705 in k4699 in a4661 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in ... */
static void C_ccall f_4707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4707,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4710,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
/* chicken-syntax.scm:1098: ##sys#length */
t4=*((C_word*)lf[59]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[3];
f_4672(2,t2,C_SCHEME_FALSE);}}

/* k4160 in loop2137 in k4144 in k4138 in k4135 in k4129 in a3962 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in ... */
static void C_ccall f_4162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4162,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST));}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4176,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1201: ##sys#+ */
t5=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[5],C_fix(-1));}}

/* k4658 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in ... */
static void C_ccall f_4660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1096: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[88],C_SCHEME_END_OF_LIST,t1);}

/* a4661 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in ... */
static void C_ccall f_4662(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[14],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4662,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=t5;
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4672,a[2]=t6,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t7))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4701,a[2]=t7,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4757,a[2]=t7,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t11=C_i_car(t7);
/* chicken-syntax.scm:1098: ##sys#list? */
t12=*((C_word*)lf[60]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t10,t11);}
else{
t9=t8;
f_4672(2,t9,C_SCHEME_FALSE);}}

/* k8666 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8668(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:315: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[231],C_SCHEME_END_OF_LIST,t1);}

/* k7851 in k7847 in k7841 in k7822 in k7819 in k7808 in a7805 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in ... */
static void C_ccall f_7853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7853,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[30],t2));}

/* k4714 in k4708 in k4705 in k4699 in a4661 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in ... */
static void C_ccall f_4716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4716,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4725,a[2]=t4,a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_4725(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
f_4672(2,t2,C_SCHEME_FALSE);}}

/* k4708 in k4705 in k4699 in a4661 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in ... */
static void C_ccall f_4710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4710,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4716,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1098: ##sys#>= */
t4=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,C_fix(0));}

/* k4174 in k4160 in loop2137 in k4144 in k4138 in k4135 in k4129 in a3962 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in ... */
static void C_ccall f_4176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1201: loop2137 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4155(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k8612 in k8605 in for-each-loop775 in a8600 in k8581 in a8578 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 in ... */
static void C_ccall f_8614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:342: ##sys#register-export */
t2=*((C_word*)lf[225]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k7841 in k7822 in k7819 in k7808 in a7805 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in ... */
static void C_ccall f_7843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7843,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[28]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7849,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7911,a[2]=((C_word*)t0)[6],a[3]=t5,a[4]=((C_word*)t0)[7],a[5]=((C_word)li82),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_7911(t7,t3,t1);}

/* k7847 in k7841 in k7822 in k7819 in k7808 in a7805 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in ... */
static void C_ccall f_7849(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7849,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7853,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=*((C_word*)lf[215]+1);
t9=C_i_check_list_2(((C_word*)t0)[3],lf[28]);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7860,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7862,a[2]=t7,a[3]=t12,a[4]=t5,a[5]=t8,a[6]=((C_word)li81),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_7862(t14,t10,((C_word*)t0)[5],((C_word*)t0)[3]);}

/* loop1976 in k4714 in k4708 in k4705 in k4699 in a4661 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in ... */
static void C_fcall f_4725(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4725,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4732,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1098: ##sys#= */
t5=*((C_word*)lf[57]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,C_fix(0));}

/* map-loop621 in k8774 in k8759 in k8756 in k8750 in k8747 in k8739 in a8721 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_fcall f_9046(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9046,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9075,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:287: g627 */
t4=((C_word*)t0)[5];
f_8777(t4,t3);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* a8600 in k8581 in a8578 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8601(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8601,5,t0,t1,t2,t3,t4);}
t5=C_i_check_list_2(t2,lf[224]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8622,a[2]=t7,a[3]=((C_word)li103),tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_8622(t9,t1,t2);}

/* k8605 in for-each-loop775 in a8600 in k8581 in a8578 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8607(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8607,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8614,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:342: ##sys#current-module */
t4=*((C_word*)lf[226]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k4730 in loop1976 in k4714 in k4708 in k4705 in k4699 in a4661 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in ... */
static void C_ccall f_4732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4732,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST));}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4746,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1098: ##sys#+ */
t5=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[5],C_fix(-1));}}

/* k4188 in k4185 in a3962 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in ... */
static void C_ccall f_4190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4190,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4196,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1201: ##sys#>= */
t4=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,C_fix(0));}

/* k4194 in k4188 in k4185 in a3962 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in ... */
static void C_ccall f_4196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4196,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4205,a[2]=t4,a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_4205(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
f_4131(2,t2,C_SCHEME_FALSE);}}

/* k8630 in for-each-loop775 in a8600 in k8581 in a8578 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_8632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_8622(t3,((C_word*)t0)[4],t2);}

/* k4744 in k4730 in loop1976 in k4714 in k4708 in k4705 in k4699 in a4661 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in ... */
static void C_ccall f_4746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1098: loop1976 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4725(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* for-each-loop775 in a8600 in k8581 in a8578 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_fcall f_8622(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8622,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8632,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8607,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:341: ##sys#get */
t7=*((C_word*)lf[227]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,t4,lf[228],t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* build in a6396 in k6379 in k6369 in a6366 in a6356 in k6341 in k6334 in k6331 in k6328 in k6325 in k6322 in k6319 in k6316 in k6313 in k6310 in k6307 in k6270 in a6267 in k6678 in k6682 in k6686 in ... */
static void C_fcall f_6471(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6471,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
if(C_truep(((C_word*)t0)[2])){
t4=C_a_i_list(&a,2,((C_word*)t0)[2],t3);
t5=C_a_i_list(&a,1,t4);
t6=C_i_cdr(((C_word*)t0)[3]);
t7=C_a_i_cons(&a,2,t5,t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_cons(&a,2,lf[30],t7));}
else{
t4=C_i_cddr(((C_word*)t0)[3]);
if(C_truep(C_i_nullp(t4))){
t5=((C_word*)t0)[3];
t6=C_u_i_cdr(t5);
t7=C_u_i_car(t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t5=((C_word*)t0)[3];
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_cons(&a,2,lf[30],t7));}}}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6524,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6572,a[2]=((C_word*)t0)[7],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:801: gensym */
t6=*((C_word*)lf[32]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k4755 in a4661 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in ... */
static void C_ccall f_4757(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4757,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4760,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[2]);
/* chicken-syntax.scm:1098: ##sys#length */
t4=*((C_word*)lf[59]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[3];
f_4701(2,t2,C_SCHEME_FALSE);}}

/* k6399 in a6396 in k6379 in k6369 in a6366 in a6356 in k6341 in k6334 in k6331 in k6328 in k6325 in k6322 in k6319 in k6316 in k6313 in k6310 in k6307 in k6270 in a6267 in k6678 in k6682 in k6686 in ... */
static void C_ccall f_6401(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6401,2,t0,t1);}
t2=t1;
if(C_truep(C_i_nullp(((C_word*)t0)[2]))){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t0)[2];
t8=C_i_check_list_2(t7,lf[28]);
t9=C_i_check_list_2(((C_word*)t0)[4],lf[28]);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6420,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6422,a[2]=t6,a[3]=t12,a[4]=t4,a[5]=((C_word)li50),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_6422(t14,t10,t7,((C_word*)t0)[4]);}}

/* k4758 in k4755 in a4661 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in ... */
static void C_ccall f_4760(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4760,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4766,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1098: ##sys#>= */
t4=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,C_fix(0));}

/* k4764 in k4758 in k4755 in a4661 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in ... */
static void C_ccall f_4766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4766,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4775,a[2]=t4,a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_4775(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
f_4701(2,t2,C_SCHEME_FALSE);}}

/* map-loop908 in fold in k8237 in k8225 in k8213 in k8194 in k8191 in k8112 in a8109 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in ... */
static void C_fcall f_8273(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8273,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8302,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:387: g914 */
t5=((C_word*)t0)[5];
f_8257(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8269 in fold in k8237 in k8225 in k8213 in k8194 in k8191 in k8112 in a8109 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in ... */
static void C_ccall f_8271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8271,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[30],t2));}

/* k4612 in k4609 in k4586 in k4583 in k4580 in k4577 in a4574 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in ... */
static void C_ccall f_4614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4614,2,t0,t1);}
t2=C_a_i_list(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,4,lf[16],((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,2,lf[17],t3));}

/* a3962 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in ... */
static void C_ccall f_3963(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[14],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3963,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=t5;
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3973,a[2]=t6,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t7))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4131,a[2]=t7,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4187,a[2]=t7,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t11=C_i_car(t7);
/* chicken-syntax.scm:1201: ##sys#list? */
t12=*((C_word*)lf[60]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t10,t11);}
else{
t9=t8;
f_3973(2,t9,C_SCHEME_FALSE);}}

/* k3959 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in ... */
static void C_ccall f_3961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1199: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[51],C_SCHEME_END_OF_LIST,t1);}

/* k4609 in k4586 in k4583 in k4580 in k4577 in a4574 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in ... */
static void C_ccall f_4611(C_word c,C_word t0,C_word t1){
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
C_word ab[40],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4611,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4614,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_eqp(lf[44],t1);
if(C_truep(t3)){
t4=C_a_i_list(&a,2,((C_word*)t0)[2],lf[44]);
t5=C_a_i_list(&a,4,lf[16],((C_word*)t0)[3],((C_word*)t0)[4],t4);
t6=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,2,lf[17],t5));}
else{
if(C_truep(C_i_symbolp(t1))){
t4=C_a_i_list(&a,2,lf[83],t1);
t5=C_a_i_list(&a,2,((C_word*)t0)[2],t4);
t6=C_a_i_list(&a,4,lf[16],((C_word*)t0)[3],((C_word*)t0)[4],t5);
t7=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,2,lf[17],t6));}
else{
if(C_truep(C_i_listp(t1))){
/* chicken-syntax.scm:1124: ##sys#validate-exports */
t4=*((C_word*)lf[73]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t1,lf[81]);}
else{
t4=C_i_caddr(((C_word*)t0)[6]);
/* chicken-syntax.scm:1126: syntax-error-hook */
t5=*((C_word*)lf[84]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,lf[81],lf[85],t4);}}}}

/* k6418 in k6399 in a6396 in k6379 in k6369 in a6366 in a6356 in k6341 in k6334 in k6331 in k6328 in k6325 in k6322 in k6319 in k6316 in k6313 in k6310 in k6307 in k6270 in a6267 in k6678 in k6682 in ... */
static void C_ccall f_6420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6420,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[30],t1,((C_word*)t0)[3]));}

/* map-loop1568 in k6399 in a6396 in k6379 in k6369 in a6366 in a6356 in k6341 in k6334 in k6331 in k6328 in k6325 in k6322 in k6319 in k6316 in k6313 in k6310 in k6307 in k6270 in a6267 in k6678 in k6682 in ... */
static void C_fcall f_6422(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6422,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list2(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6435,a[2]=((C_word*)t0)[2],a[3]=t10,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t12=t11;
f_6435(t12,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t10));}
else{
t12=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t10);
t13=t11;
f_6435(t13,t12);}}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k6850 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in ... */
static void C_ccall f_6852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6852,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[173],t1);
t3=C_a_i_list(&a,1,t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6704,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6706,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:718: ##sys#er-transformer */
t7=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}

/* map-loop420 in k9499 in k9335 in k9328 in k9316 in k9304 in k9293 in a9290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_fcall f_9442(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9442,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[240],t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9455,a[2]=((C_word*)t0)[2],a[3]=t10,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t12=t11;
f_9455(t12,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t10));}
else{
t12=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t10);
t13=t11;
f_9455(t13,t12);}}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k6858 in k6931 in k6935 in k6939 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in ... */
static void C_ccall f_6860(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:687: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[178],((C_word*)t0)[3],t1);}

/* a6861 in k6931 in k6935 in k6939 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in ... */
static void C_ccall f_6862(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6862,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6866,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:694: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[178],t2,lf[179]);}

/* k6433 in map-loop1568 in k6399 in a6396 in k6379 in k6369 in a6366 in a6356 in k6341 in k6334 in k6331 in k6328 in k6325 in k6322 in k6319 in k6316 in k6313 in k6310 in k6307 in k6270 in a6267 in k6678 in ... */
static void C_fcall f_6435(C_word t0,C_word t1){
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
f_6422(t5,((C_word*)t0)[7],t3,t4);}

/* k6864 in a6861 in k6931 in k6935 in k6939 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in ... */
static void C_ccall f_6866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6866,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6869,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:695: r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[176]);}

/* k6867 in k6864 in a6861 in k6931 in k6935 in k6939 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in ... */
static void C_ccall f_6869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6869,2,t0,t1);}
t2=t1;
t3=C_i_cadr(((C_word*)t0)[2]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,1,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6909,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t6,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:697: r */
t8=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,lf[173]);}

/* k8213 in k8194 in k8191 in k8112 in a8109 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 in ... */
static void C_ccall f_8215(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8215,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8216,a[2]=t2,a[3]=((C_word)li93),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8227,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8423,a[2]=t6,a[3]=((C_word*)t0)[7],a[4]=t3,a[5]=((C_word)li98),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_8423(t8,t4,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* lookup in k8213 in k8194 in k8191 in k8112 in a8109 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in ... */
static void C_ccall f_8216(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8216,3,t0,t1,t2);}
t3=C_i_assq(t2,((C_word*)t0)[2]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_cdr(t3));}

/* k3985 in k3971 in a3962 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in ... */
static void C_ccall f_3987(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3987,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_car(((C_word*)t0)[2]);
t8=C_i_check_list_2(t7,lf[28]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4005,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4051,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=((C_word)li10),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_4051(t13,t9,t7);}

/* fold in k8237 in k8225 in k8213 in k8194 in k8191 in k8112 in a8109 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in ... */
static void C_fcall f_8241(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8241,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_nullp(t2))){
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8257,a[2]=((C_word*)t0)[2],a[3]=((C_word)li94),tmp=(C_word)a,a+=4,tmp);
t10=C_i_check_list_2(((C_word*)t0)[3],lf[28]);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8271,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8273,a[2]=t8,a[3]=t13,a[4]=t6,a[5]=t9,a[6]=((C_word)li95),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_8273(t15,t11,((C_word*)t0)[3]);}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8312,a[2]=t4,a[3]=t3,a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t6=C_i_car(t4);
if(C_truep(C_i_pairp(t6))){
t7=C_i_cdar(t4);
t8=t5;
f_8312(t8,C_i_nullp(t7));}
else{
t7=t5;
f_8312(t7,C_SCHEME_FALSE);}}}

/* a3596 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in ... */
static void C_ccall f_3597(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3597,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_memq(lf[13],*((C_word*)lf[14]+1)))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3607,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1211: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[34],t2,lf[49]);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[50]);}}

/* k3593 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in ... */
static void C_ccall f_3595(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1205: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[34],C_SCHEME_END_OF_LIST,t1);}

/* k8237 in k8225 in k8213 in k8194 in k8191 in k8112 in a8109 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in ... */
static void C_ccall f_8239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8239,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8241,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word)li96),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_8241(t5,((C_word*)t0)[5],((C_word*)t0)[6],t1,((C_word*)t0)[7]);}

/* k8263 in g914 in fold in k8237 in k8225 in k8213 in k8194 in k8191 in k8112 in a8109 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in ... */
static void C_ccall f_8265(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8265,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,((C_word*)t0)[3],t1));}

/* k7021 in recur in k6980 in k6976 in k6972 in k7190 in k7178 in k7175 in k7172 in k7169 in k7141 in k7135 in k7132 in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in ... */
static void C_ccall f_7023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7023,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7031,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7035,a[2]=((C_word*)t0)[6],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:622: reverse */
t5=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[8]);}

/* k3971 in a3962 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in ... */
static void C_ccall f_3973(C_word c,C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3973,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_i_car(((C_word*)t0)[2]);
t7=C_i_check_list_2(t6,lf[28]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3987,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4086,a[2]=t5,a[3]=t10,a[4]=t3,a[5]=((C_word)li11),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_4086(t12,t8,t6);}
else{
/* chicken-syntax.scm:1201: ##sys#syntax-rules-mismatch */
t2=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[5]);}}

/* k5050 in k5047 in k5044 in k5041 in a5038 in k5226 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in ... */
static void C_ccall f_5052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5052,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5059,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t5,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li31),tmp=(C_word)a,a+=10,tmp));
t7=((C_word*)t5)[1];
f_5059(t7,((C_word*)t0)[8],t3,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* k8203 in g863 in k8194 in k8191 in k8112 in a8109 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in ... */
static void C_ccall f_8205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8205,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k7003 in k7029 in k7021 in recur in k6980 in k6976 in k6972 in k7190 in k7178 in k7175 in k7172 in k7169 in k7141 in k7135 in k7132 in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in ... */
static void C_ccall f_7005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7005,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k8207 in g863 in k8194 in k8191 in k8112 in a8109 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in ... */
static void C_ccall f_8209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:372: r */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k3427 in k3418 in a3415 in k3399 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in ... */
static void C_ccall f_3429(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3429,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3432,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1305: r */
t4=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[20]);}

/* k3418 in a3415 in k3399 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in ... */
static void C_ccall f_3420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3420,2,t0,t1);}
if(C_truep(C_i_memq(lf[13],*((C_word*)lf[14]+1)))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3429,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* chicken-syntax.scm:1304: ##sys#strip-syntax */
t4=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[21]);}}

/* loop in k5050 in k5047 in k5044 in k5041 in a5038 in k5226 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in ... */
static void C_fcall f_5059(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5059,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
if(C_truep(C_i_nullp(t2))){
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5069,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1015: reverse */
t8=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t3);}
else{
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5138,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t4,a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
t8=C_i_car(t2);
/* chicken-syntax.scm:1025: c */
t9=((C_word*)t0)[6];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,((C_word*)t0)[8],t8);}}

/* k3478 in a3475 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in ... */
static void C_ccall f_3480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3480,2,t0,t1);}
t2=C_i_memq(lf[13],*((C_word*)lf[14]+1));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3486,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1278: gensym */
t5=*((C_word*)lf[32]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k3487 in k3484 in k3478 in a3475 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in ... */
static void C_ccall f_3489(C_word c,C_word t0,C_word t1){
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
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3489,2,t0,t1);}
t2=t1;
t3=C_i_cadr(((C_word*)t0)[2]);
t4=C_a_i_list(&a,2,((C_word*)t0)[3],t3);
t5=C_a_i_list(&a,1,t4);
t6=t5;
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3510,a[2]=((C_word*)t0)[4],a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp);
t12=((C_word*)t0)[2];
t13=C_u_i_cdr(t12);
t14=C_u_i_cdr(t13);
t15=C_i_check_list_2(t14,lf[28]);
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3548,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3550,a[2]=t10,a[3]=t18,a[4]=t8,a[5]=t11,a[6]=((C_word)li2),tmp=(C_word)a,a+=7,tmp));
t20=((C_word*)t18)[1];
f_3550(t20,t16,t14);}

/* k5070 in k5067 in loop in k5050 in k5047 in k5044 in k5041 in a5038 in k5226 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in ... */
static void C_ccall f_5072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5072,2,t0,t1);}
t2=t1;
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5078,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5115,a[2]=((C_word*)t0)[7],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1018: gensym */
t5=*((C_word*)lf[32]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t3=C_i_car(t2);
t4=C_u_i_cdr(t2);
t5=C_a_i_cons(&a,2,t3,t4);
t6=C_a_i_list(&a,3,lf[101],((C_word*)t0)[6],t5);
t7=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,3,lf[30],((C_word*)t0)[5],t6));}}

/* k3484 in k3478 in a3475 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in ... */
static void C_ccall f_3486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3486,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3489,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1279: get-line-number */
t4=*((C_word*)lf[31]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* a3475 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in ... */
static void C_ccall f_3476(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3476,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3480,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1276: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[25],t2,lf[33]);}

/* k3472 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in ... */
static void C_ccall f_3474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1272: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[25],C_SCHEME_END_OF_LIST,t1);}

/* k6064 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in ... */
static void C_ccall f_6066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6066,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[27],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6062,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:863: ##sys#primitive-alias */
t5=*((C_word*)lf[110]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[129]);}

/* k6060 in k6064 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in ... */
static void C_ccall f_6062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6062,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[129],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5793,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5795,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:864: ##sys#er-transformer */
t7=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}

/* k8225 in k8213 in k8194 in k8191 in k8112 in a8109 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in ... */
static void C_ccall f_8227(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8227,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8239,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8388,a[2]=t6,a[3]=t9,a[4]=t4,a[5]=((C_word)li97),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_8388(t11,t7,((C_word*)t0)[7]);}

/* k6111 in k6095 in k6084 in k6081 in k6078 in a6075 in k6183 in k6187 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in ... */
static void C_ccall f_6113(C_word c,C_word t0,C_word t1){
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
C_word ab[125],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6113,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=C_i_caddr(((C_word*)t0)[2]);
t5=C_a_i_list(&a,3,lf[101],C_SCHEME_END_OF_LIST,t4);
t6=C_a_i_list(&a,2,((C_word*)t0)[3],t5);
t7=C_a_i_list(&a,3,lf[101],t3,t6);
t8=((C_word*)t0)[2];
t9=C_u_i_cdr(t8);
t10=C_u_i_cdr(t9);
t11=C_u_i_cdr(t10);
t12=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t11);
t13=C_a_i_cons(&a,2,lf[101],t12);
t14=C_a_i_list(&a,3,lf[142],lf[143],((C_word*)t0)[4]);
t15=C_a_i_list(&a,3,lf[101],C_SCHEME_END_OF_LIST,t14);
t16=C_a_i_list(&a,2,((C_word*)t0)[3],t15);
t17=C_a_i_list(&a,3,lf[101],((C_word*)t0)[4],t16);
t18=C_a_i_list(&a,3,lf[144],t13,t17);
t19=C_a_i_list(&a,3,lf[101],C_SCHEME_END_OF_LIST,t18);
t20=C_a_i_list(&a,3,t1,t7,t19);
t21=C_a_i_list(&a,3,lf[101],((C_word*)t0)[5],t20);
t22=C_a_i_list(&a,2,((C_word*)t0)[6],t21);
t23=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t23+1)))(2,t23,C_a_i_list(&a,1,t22));}

/* k7063 in recur in make-if-tree in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in ... */
static void C_ccall f_7065(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7065,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k5067 in loop in k5050 in k5047 in k5044 in k5041 in a5038 in k5226 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in ... */
static void C_ccall f_5069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5069,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5072,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1016: reverse */
t4=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}

/* k3456 in k3433 in k3430 in k3427 in k3418 in a3415 in k3399 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in ... */
static void C_ccall f_3458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3458,2,t0,t1);}
t2=C_a_i_list(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,4,lf[16],((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,2,lf[17],t3));}

/* recur in make-if-tree in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in ... */
static void C_fcall f_7051(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7051,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7065,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:634: reverse */
t6=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}
else{
t5=C_i_car(t2);
t6=t5;
t7=C_a_i_list(&a,2,lf[173],((C_word*)t0)[3]);
t8=t7;
t9=C_i_car(t3);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7131,a[2]=t10,a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=t1,a[6]=t8,a[7]=t2,a[8]=t3,a[9]=t4,a[10]=((C_word*)t0)[4],a[11]=((C_word*)t0)[5],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:637: reverse */
t12=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t11,t4);}}

/* k6072 in k6183 in k6187 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in ... */
static void C_ccall f_6074(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:838: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[135],((C_word*)t0)[3],t1);}

/* a6075 in k6183 in k6187 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in ... */
static void C_ccall f_6076(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6076,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6080,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:844: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[135],t2,lf[147]);}

/* k3412 in k3399 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in ... */
static void C_ccall f_3414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1297: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[12],C_SCHEME_END_OF_LIST,t1);}

/* a3415 in k3399 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in ... */
static void C_ccall f_3416(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3416,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3420,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1301: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[12],t2,lf[23]);}

/* k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_3314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3314,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3317,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8054,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8056,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:402: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_3317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3317,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3320,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7804,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7806,a[2]=((C_word)li87),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:417: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3408 in k3405 in k3402 in k3399 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in ... */
static void C_ccall f_3410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* k3766 in k3829 in k3648 in k3645 in loop in k3627 in k3624 in k3621 in k3618 in k3614 in k3605 in a3596 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in ... */
static void C_fcall f_3768(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3768,NULL,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list1(&a,1,t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3757,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1244: ##compiler#variable-mark */
t6=*((C_word*)lf[42]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,((C_word*)t0)[4],lf[40]);}

/* k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_3311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3311,2,t0,t1);}
t2=C_mutate2((C_word*)lf[0]+1 /* (set! ##sys#define-values-definition ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3314,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8108,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8110,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:348: ##sys#er-transformer */
t6=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* make-if-tree in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in ... */
static void C_fcall f_7045(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7045,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7051,a[2]=t4,a[3]=t5,a[4]=t7,a[5]=((C_word*)t0)[2],a[6]=((C_word)li61),tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_7051(t9,t1,t2,t3,C_SCHEME_END_OF_LIST);}

/* k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_3323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3323,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3326,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7652,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7654,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:447: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 in ... */
static void C_ccall f_3326(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3326,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3329,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7555,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7557,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:468: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in ... */
static void C_ccall f_3329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3329,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3332,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7389,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7391,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:488: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_3320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3320,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3323,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7800,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:436: ##sys#primitive-alias */
t4=*((C_word*)lf[110]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[210]);}

/* k7033 in k7021 in recur in k6980 in k6976 in k6972 in k7190 in k7178 in k7175 in k7172 in k7169 in k7141 in k7135 in k7132 in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in ... */
static void C_ccall f_7035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7035,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:619: ##sys#append */
t4=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[3],t1,t3);}

/* k7029 in k7021 in recur in k6980 in k6976 in k6972 in k7190 in k7178 in k7175 in k7172 in k7169 in k7141 in k7135 in k7132 in k6953 in a6950 in k7379 in k7383 in k3330 in k3327 in k3324 in k3321 in ... */
static void C_ccall f_7031(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7031,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,3,lf[101],((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,2,((C_word*)t0)[4],t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7005,a[2]=((C_word*)t0)[5],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=((C_word*)t0)[6];
t8=C_u_i_cdr(t7);
t9=((C_word*)t0)[7];
t10=C_u_i_cdr(t9);
t11=((C_word*)t0)[6];
t12=C_u_i_car(t11);
/* chicken-syntax.scm:623: recur */
t13=((C_word*)((C_word*)t0)[8])[1];
f_6984(t13,t6,((C_word*)t0)[9],t8,t10,t12);}

/* k3433 in k3430 in k3427 in k3418 in a3415 in k3399 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in ... */
static void C_ccall f_3435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3435,2,t0,t1);}
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=t2;
t4=C_a_i_list(&a,2,((C_word*)t0)[2],lf[15]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3458,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1311: ##compiler#check-and-validate-type */
t7=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,t1,lf[12],((C_word*)t0)[3]);}

/* k3430 in k3427 in k3418 in a3415 in k3399 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in ... */
static void C_ccall f_3432(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3432,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3435,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_i_caddr(((C_word*)t0)[4]);
/* chicken-syntax.scm:1306: ##sys#strip-syntax */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in ... */
static void C_ccall f_3335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3335,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3338,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6941,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:689: ##sys#primitive-alias */
t4=*((C_word*)lf[110]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[173]);}

/* k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in ... */
static void C_ccall f_3332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3332,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3335,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7385,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:601: ##sys#primitive-alias */
t4=*((C_word*)lf[110]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[154]);}

/* k3784 in k3829 in k3648 in k3645 in loop in k3627 in k3624 in k3621 in k3618 in k3614 in k3605 in a3596 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in ... */
static void C_ccall f_3786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3786,2,t0,t1);}
t2=((C_word*)t0)[2];
f_3768(t2,C_a_i_list2(&a,2,t1,((C_word*)t0)[3]));}

/* k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in ... */
static void C_ccall f_3338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3338,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3341,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6852,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:717: ##sys#primitive-alias */
t4=*((C_word*)lf[110]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[173]);}

/* map-loop2279 in k3829 in k3648 in k3645 in loop in k3627 in k3624 in k3621 in k3618 in k3614 in k3605 in a3596 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in ... */
static void C_fcall f_3788(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3788,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3817,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[18]+1);
/* chicken-syntax.scm:1238: g2302 */
t6=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,lf[34]);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6024 in map-loop1696 in k5942 in k5812 in k5809 in k5806 in k5803 in k5800 in k5797 in a5794 in k6060 in k6064 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in ... */
static void C_ccall f_6026(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6026,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5997(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5997(t6,((C_word*)t0)[5],t5);}}

/* k3405 in k3402 in k3399 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in ... */
static void C_ccall f_3407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3407,2,t0,t1);}
t2=C_mutate2((C_word*)lf[1]+1 /* (set! ##sys#chicken-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3410,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1322: register-feature! */
t4=*((C_word*)lf[2]+1);
((C_proc8)(void*)(*((C_word*)t4+1)))(8,t4,t3,lf[3],lf[4],lf[5],lf[6],lf[7],lf[8]);}

/* k3402 in k3399 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in ... */
static void C_ccall f_3404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3404,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3407,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1316: ##sys#macro-subset */
t3=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],*((C_word*)lf[10]+1));}

/* k3399 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in ... */
static void C_ccall f_3401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3401,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3404,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3414,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3416,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1299: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in ... */
static void C_ccall f_3344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3344,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3347,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6193,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6195,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:819: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k10309 in g31 in k10280 in k10277 in k10274 in k10271 in k10263 in a10260 in k3266 in k3263 in k3259 */
static void C_ccall f_10311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
t4=C_i_cadr(((C_word*)t0)[2]);
if(C_truep(C_i_symbolp(t4))){
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
t7=C_u_i_cdr(t6);
if(C_truep(C_i_nullp(t7))){
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_i_cadr(((C_word*)t0)[2]));}
else{
/* chicken-syntax.scm:75: syntax-error */
t8=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,((C_word*)t0)[3],lf[280],lf[281],((C_word*)t0)[2]);}}
else{
/* chicken-syntax.scm:75: syntax-error */
t5=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,((C_word*)t0)[3],lf[280],lf[281],((C_word*)t0)[2]);}}
else{
/* chicken-syntax.scm:75: syntax-error */
t4=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],lf[280],lf[281],((C_word*)t0)[2]);}}
else{
/* chicken-syntax.scm:75: syntax-error */
t2=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[280],lf[281],((C_word*)t0)[2]);}}

/* k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in ... */
static void C_ccall f_3347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3347,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3350,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6189,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:840: ##sys#primitive-alias */
t4=*((C_word*)lf[110]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[140]);}

/* k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in ... */
static void C_ccall f_3341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3341,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3344,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6696,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:750: ##sys#primitive-alias */
t4=*((C_word*)lf[110]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[153]);}

/* g914 in fold in k8237 in k8225 in k8213 in k8194 in k8191 in k8112 in a8109 in k3309 in k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in ... */
static void C_fcall f_8257(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8257,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8265,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:387: lookup */
t4=((C_word*)t0)[2];
f_8216(3,t4,t3,t2);}

/* k10414 in k10388 in k10385 in k10382 in mapslots in k10530 in k10556 in k10341 in k10280 in k10277 in k10274 in k10271 in k10263 in a10260 in k3266 in k3263 in k3259 */
static void C_ccall f_10416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10416,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[26],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10404,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* chicken-syntax.scm:118: mapslots */
t7=((C_word*)((C_word*)t0)[5])[1];
f_10368(t7,t4,t5,t6);}

/* k3305 in k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_3307(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3307,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3311,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8577,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8579,a[2]=((C_word)li105),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:334: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3302 in k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_3304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3304,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3307,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8647,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8649,a[2]=((C_word)li106),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:326: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3299 in k3296 in k3293 in k3290 in k3287 in k3284 in k3281 in k3278 in k3275 in k3272 in k3269 in k3266 in k3263 in k3259 */
static void C_ccall f_3301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3301,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3304,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8668,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8670,a[2]=((C_word)li107),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:317: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k10418 in k10388 in k10385 in k10382 in mapslots in k10530 in k10556 in k10341 in k10280 in k10277 in k10274 in k10271 in k10263 in a10260 in k3266 in k3263 in k3259 */
static void C_fcall f_10420(C_word t0,C_word t1){
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
C_word ab[75],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10420,NULL,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_list(&a,1,lf[127]);
t3=C_a_i_list(&a,2,lf[116],((C_word*)t0)[3]);
t4=C_a_i_list(&a,3,lf[120],lf[127],t3);
t5=C_a_i_list(&a,2,lf[121],t4);
t6=C_a_i_list(&a,3,lf[122],lf[127],((C_word*)t0)[4]);
t7=C_a_i_list(&a,4,lf[101],t2,t5,t6);
t8=C_a_i_list(&a,3,((C_word*)t0)[5],t7,((C_word*)t0)[6]);
t9=C_a_i_list(&a,3,((C_word*)t0)[7],((C_word*)t0)[8],t8);
t10=C_a_i_list(&a,1,t9);
/* chicken-syntax.scm:43: ##sys#append */
t11=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,((C_word*)t0)[9],t1,t10);}
else{
t2=C_a_i_list(&a,1,lf[127]);
t3=C_a_i_list(&a,2,lf[116],((C_word*)t0)[3]);
t4=C_a_i_list(&a,3,lf[120],lf[127],t3);
t5=C_a_i_list(&a,2,lf[121],t4);
t6=C_a_i_list(&a,3,lf[122],lf[127],((C_word*)t0)[4]);
t7=C_a_i_list(&a,4,lf[101],t2,t5,t6);
t8=C_a_i_list(&a,3,((C_word*)t0)[7],((C_word*)t0)[8],t7);
t9=C_a_i_list(&a,1,t8);
/* chicken-syntax.scm:43: ##sys#append */
t10=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,((C_word*)t0)[9],t1,t9);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[663] = {
{"f_9393:chicken_2dsyntax_2escm",(void*)f_9393},
{"f_9383:chicken_2dsyntax_2escm",(void*)f_9383},
{"f_9374:chicken_2dsyntax_2escm",(void*)f_9374},
{"f_9370:chicken_2dsyntax_2escm",(void*)f_9370},
{"f_6397:chicken_2dsyntax_2escm",(void*)f_6397},
{"f_6395:chicken_2dsyntax_2escm",(void*)f_6395},
{"f_6280:chicken_2dsyntax_2escm",(void*)f_6280},
{"f_9276:chicken_2dsyntax_2escm",(void*)f_9276},
{"f_9327:chicken_2dsyntax_2escm",(void*)f_9327},
{"f_9319:chicken_2dsyntax_2escm",(void*)f_9319},
{"f_9318:chicken_2dsyntax_2escm",(void*)f_9318},
{"f_9315:chicken_2dsyntax_2escm",(void*)f_9315},
{"f_9295:chicken_2dsyntax_2escm",(void*)f_9295},
{"f_9291:chicken_2dsyntax_2escm",(void*)f_9291},
{"f_9307:chicken_2dsyntax_2escm",(void*)f_9307},
{"f_9306:chicken_2dsyntax_2escm",(void*)f_9306},
{"f_9289:chicken_2dsyntax_2escm",(void*)f_9289},
{"f_6333:chicken_2dsyntax_2escm",(void*)f_6333},
{"f_6330:chicken_2dsyntax_2escm",(void*)f_6330},
{"f_6336:chicken_2dsyntax_2escm",(void*)f_6336},
{"f_6343:chicken_2dsyntax_2escm",(void*)f_6343},
{"f_6318:chicken_2dsyntax_2escm",(void*)f_6318},
{"f_6312:chicken_2dsyntax_2escm",(void*)f_6312},
{"f_6315:chicken_2dsyntax_2escm",(void*)f_6315},
{"f_9361:chicken_2dsyntax_2escm",(void*)f_9361},
{"f_3607:chicken_2dsyntax_2escm",(void*)f_3607},
{"f_9598:chicken_2dsyntax_2escm",(void*)f_9598},
{"f_6321:chicken_2dsyntax_2escm",(void*)f_6321},
{"f_6327:chicken_2dsyntax_2escm",(void*)f_6327},
{"f_6324:chicken_2dsyntax_2escm",(void*)f_6324},
{"f_9585:chicken_2dsyntax_2escm",(void*)f_9585},
{"f_3616:chicken_2dsyntax_2escm",(void*)f_3616},
{"f_9252:chicken_2dsyntax_2escm",(void*)f_9252},
{"f_6371:chicken_2dsyntax_2escm",(void*)f_6371},
{"f_3623:chicken_2dsyntax_2escm",(void*)f_3623},
{"f_6387:chicken_2dsyntax_2escm",(void*)f_6387},
{"f_3629:chicken_2dsyntax_2escm",(void*)f_3629},
{"f_3626:chicken_2dsyntax_2escm",(void*)f_3626},
{"f_3620:chicken_2dsyntax_2escm",(void*)f_3620},
{"f_9241:chicken_2dsyntax_2escm",(void*)f_9241},
{"f_9337:chicken_2dsyntax_2escm",(void*)f_9337},
{"f_6381:chicken_2dsyntax_2escm",(void*)f_6381},
{"f_6385:chicken_2dsyntax_2escm",(void*)f_6385},
{"f_9330:chicken_2dsyntax_2escm",(void*)f_9330},
{"f_6357:chicken_2dsyntax_2escm",(void*)f_6357},
{"f_10532:chicken_2dsyntax_2escm",(void*)f_10532},
{"f_3637:chicken_2dsyntax_2escm",(void*)f_3637},
{"f_4310:chicken_2dsyntax_2escm",(void*)f_4310},
{"f_4319:chicken_2dsyntax_2escm",(void*)f_4319},
{"f_4288:chicken_2dsyntax_2escm",(void*)f_4288},
{"f_6355:chicken_2dsyntax_2escm",(void*)f_6355},
{"f_6367:chicken_2dsyntax_2escm",(void*)f_6367},
{"f_3647:chicken_2dsyntax_2escm",(void*)f_3647},
{"f_4366:chicken_2dsyntax_2escm",(void*)f_4366},
{"f_4362:chicken_2dsyntax_2escm",(void*)f_4362},
{"f_6274:chicken_2dsyntax_2escm",(void*)f_6274},
{"f_6272:chicken_2dsyntax_2escm",(void*)f_6272},
{"f_9549:chicken_2dsyntax_2escm",(void*)f_9549},
{"f_3650:chicken_2dsyntax_2escm",(void*)f_3650},
{"f_9212:chicken_2dsyntax_2escm",(void*)f_9212},
{"f_4335:chicken_2dsyntax_2escm",(void*)f_4335},
{"f_3656:chicken_2dsyntax_2escm",(void*)f_3656},
{"f_4337:chicken_2dsyntax_2escm",(void*)f_4337},
{"f_6243:chicken_2dsyntax_2escm",(void*)f_6243},
{"f_9209:chicken_2dsyntax_2escm",(void*)f_9209},
{"f_9206:chicken_2dsyntax_2escm",(void*)f_9206},
{"f_9203:chicken_2dsyntax_2escm",(void*)f_9203},
{"f_4266:chicken_2dsyntax_2escm",(void*)f_4266},
{"f_9536:chicken_2dsyntax_2escm",(void*)f_9536},
{"f_4268:chicken_2dsyntax_2escm",(void*)f_4268},
{"f_5802:chicken_2dsyntax_2escm",(void*)f_5802},
{"f_10582:chicken_2dsyntax_2escm",(void*)f_10582},
{"f_4306:chicken_2dsyntax_2escm",(void*)f_4306},
{"f_4304:chicken_2dsyntax_2escm",(void*)f_4304},
{"f_6294:chicken_2dsyntax_2escm",(void*)f_6294},
{"f_10578:chicken_2dsyntax_2escm",(void*)f_10578},
{"f_6298:chicken_2dsyntax_2escm",(void*)f_6298},
{"f_4272:chicken_2dsyntax_2escm",(void*)f_4272},
{"f_9526:chicken_2dsyntax_2escm",(void*)f_9526},
{"f_5811:chicken_2dsyntax_2escm",(void*)f_5811},
{"f_3283:chicken_2dsyntax_2escm",(void*)f_3283},
{"f_3289:chicken_2dsyntax_2escm",(void*)f_3289},
{"f_6266:chicken_2dsyntax_2escm",(void*)f_6266},
{"f_3286:chicken_2dsyntax_2escm",(void*)f_3286},
{"f_5808:chicken_2dsyntax_2escm",(void*)f_5808},
{"f_3280:chicken_2dsyntax_2escm",(void*)f_3280},
{"f_6268:chicken_2dsyntax_2escm",(void*)f_6268},
{"f_5805:chicken_2dsyntax_2escm",(void*)f_5805},
{"f_9517:chicken_2dsyntax_2escm",(void*)f_9517},
{"f_5820:chicken_2dsyntax_2escm",(void*)f_5820},
{"f_3688:chicken_2dsyntax_2escm",(void*)f_3688},
{"f_9513:chicken_2dsyntax_2escm",(void*)f_9513},
{"f_3295:chicken_2dsyntax_2escm",(void*)f_3295},
{"f_3292:chicken_2dsyntax_2escm",(void*)f_3292},
{"f_3298:chicken_2dsyntax_2escm",(void*)f_3298},
{"f_10558:chicken_2dsyntax_2escm",(void*)f_10558},
{"f_5816:chicken_2dsyntax_2escm",(void*)f_5816},
{"f_5814:chicken_2dsyntax_2escm",(void*)f_5814},
{"f_10552:chicken_2dsyntax_2escm",(void*)f_10552},
{"f_9501:chicken_2dsyntax_2escm",(void*)f_9501},
{"f_5826:chicken_2dsyntax_2escm",(void*)f_5826},
{"f_5823:chicken_2dsyntax_2escm",(void*)f_5823},
{"f_4224:chicken_2dsyntax_2escm",(void*)f_4224},
{"f_6309:chicken_2dsyntax_2escm",(void*)f_6309},
{"f_7697:chicken_2dsyntax_2escm",(void*)f_7697},
{"f_4235:chicken_2dsyntax_2escm",(void*)f_4235},
{"f_6306:chicken_2dsyntax_2escm",(void*)f_6306},
{"f_7681:chicken_2dsyntax_2escm",(void*)f_7681},
{"f_5848:chicken_2dsyntax_2escm",(void*)f_5848},
{"f_4205:chicken_2dsyntax_2escm",(void*)f_4205},
{"f_5862:chicken_2dsyntax_2escm",(void*)f_5862},
{"f_7672:chicken_2dsyntax_2escm",(void*)f_7672},
{"f_4212:chicken_2dsyntax_2escm",(void*)f_4212},
{"f_5864:chicken_2dsyntax_2escm",(void*)f_5864},
{"f_3271:chicken_2dsyntax_2escm",(void*)f_3271},
{"f_6213:chicken_2dsyntax_2escm",(void*)f_6213},
{"f_3277:chicken_2dsyntax_2escm",(void*)f_3277},
{"f_9928:chicken_2dsyntax_2escm",(void*)f_9928},
{"f_3274:chicken_2dsyntax_2escm",(void*)f_3274},
{"f_9924:chicken_2dsyntax_2escm",(void*)f_9924},
{"f_9922:chicken_2dsyntax_2escm",(void*)f_9922},
{"f_4327:chicken_2dsyntax_2escm",(void*)f_4327},
{"f_8593:chicken_2dsyntax_2escm",(void*)f_8593},
{"f_5694:chicken_2dsyntax_2escm",(void*)f_5694},
{"f_6083:chicken_2dsyntax_2escm",(void*)f_6083},
{"f_6086:chicken_2dsyntax_2escm",(void*)f_6086},
{"f_6080:chicken_2dsyntax_2escm",(void*)f_6080},
{"f_8586:chicken_2dsyntax_2escm",(void*)f_8586},
{"f_8583:chicken_2dsyntax_2escm",(void*)f_8583},
{"f_7616:chicken_2dsyntax_2escm",(void*)f_7616},
{"f_7613:chicken_2dsyntax_2escm",(void*)f_7613},
{"f_6974:chicken_2dsyntax_2escm",(void*)f_6974},
{"f_5785:chicken_2dsyntax_2escm",(void*)f_5785},
{"f_7784:chicken_2dsyntax_2escm",(void*)f_7784},
{"f_6097:chicken_2dsyntax_2escm",(void*)f_6097},
{"f_10123:chicken_2dsyntax_2escm",(void*)f_10123},
{"f_6984:chicken_2dsyntax_2escm",(void*)f_6984},
{"f_5799:chicken_2dsyntax_2escm",(void*)f_5799},
{"f_6982:chicken_2dsyntax_2escm",(void*)f_6982},
{"f_5795:chicken_2dsyntax_2escm",(void*)f_5795},
{"f_5793:chicken_2dsyntax_2escm",(void*)f_5793},
{"f_6978:chicken_2dsyntax_2escm",(void*)f_6978},
{"f_3261:chicken_2dsyntax_2escm",(void*)f_3261},
{"f_3268:chicken_2dsyntax_2escm",(void*)f_3268},
{"f_3265:chicken_2dsyntax_2escm",(void*)f_3265},
{"f_7660:chicken_2dsyntax_2escm",(void*)f_7660},
{"f_7669:chicken_2dsyntax_2escm",(void*)f_7669},
{"f_8388:chicken_2dsyntax_2escm",(void*)f_8388},
{"f_10105:chicken_2dsyntax_2escm",(void*)f_10105},
{"f_10103:chicken_2dsyntax_2escm",(void*)f_10103},
{"f_8540:chicken_2dsyntax_2escm",(void*)f_8540},
{"f_7652:chicken_2dsyntax_2escm",(void*)f_7652},
{"f_7656:chicken_2dsyntax_2escm",(void*)f_7656},
{"f_7654:chicken_2dsyntax_2escm",(void*)f_7654},
{"f_10119:chicken_2dsyntax_2escm",(void*)f_10119},
{"f_10117:chicken_2dsyntax_2escm",(void*)f_10117},
{"f_8577:chicken_2dsyntax_2escm",(void*)f_8577},
{"f_8579:chicken_2dsyntax_2escm",(void*)f_8579},
{"f_4810:chicken_2dsyntax_2escm",(void*)f_4810},
{"f_7632:chicken_2dsyntax_2escm",(void*)f_7632},
{"f_8073:chicken_2dsyntax_2escm",(void*)f_8073},
{"f_4820:chicken_2dsyntax_2escm",(void*)f_4820},
{"f_7762:chicken_2dsyntax_2escm",(void*)f_7762},
{"f_7765:chicken_2dsyntax_2escm",(void*)f_7765},
{"f_8515:chicken_2dsyntax_2escm",(void*)f_8515},
{"f_8060:chicken_2dsyntax_2escm",(void*)f_8060},
{"f_8068:chicken_2dsyntax_2escm",(void*)f_8068},
{"f_8098:chicken_2dsyntax_2escm",(void*)f_8098},
{"f_7756:chicken_2dsyntax_2escm",(void*)f_7756},
{"f_7758:chicken_2dsyntax_2escm",(void*)f_7758},
{"f_8502:chicken_2dsyntax_2escm",(void*)f_8502},
{"f_4808:chicken_2dsyntax_2escm",(void*)f_4808},
{"f_5709:chicken_2dsyntax_2escm",(void*)f_5709},
{"f_5707:chicken_2dsyntax_2escm",(void*)f_5707},
{"f_7701:chicken_2dsyntax_2escm",(void*)f_7701},
{"f_10404:chicken_2dsyntax_2escm",(void*)f_10404},
{"f_4857:chicken_2dsyntax_2escm",(void*)f_4857},
{"f_8360:chicken_2dsyntax_2escm",(void*)f_8360},
{"f_8175:chicken_2dsyntax_2escm",(void*)f_8175},
{"f_8171:chicken_2dsyntax_2escm",(void*)f_8171},
{"f_5654:chicken_2dsyntax_2escm",(void*)f_5654},
{"f_6909:chicken_2dsyntax_2escm",(void*)f_6909},
{"f_4830:chicken_2dsyntax_2escm",(void*)f_4830},
{"f_8302:chicken_2dsyntax_2escm",(void*)f_8302},
{"f_8056:chicken_2dsyntax_2escm",(void*)f_8056},
{"f_8054:chicken_2dsyntax_2escm",(void*)f_8054},
{"f_4844:chicken_2dsyntax_2escm",(void*)f_4844},
{"f_8196:chicken_2dsyntax_2escm",(void*)f_8196},
{"f_5138:chicken_2dsyntax_2escm",(void*)f_5138},
{"f_5744:chicken_2dsyntax_2escm",(void*)f_5744},
{"f_8197:chicken_2dsyntax_2escm",(void*)f_8197},
{"f_8193:chicken_2dsyntax_2escm",(void*)f_8193},
{"f_7744:chicken_2dsyntax_2escm",(void*)f_7744},
{"f_6933:chicken_2dsyntax_2escm",(void*)f_6933},
{"f_6937:chicken_2dsyntax_2escm",(void*)f_6937},
{"f_8323:chicken_2dsyntax_2escm",(void*)f_8323},
{"f_7946:chicken_2dsyntax_2escm",(void*)f_7946},
{"f_5141:chicken_2dsyntax_2escm",(void*)f_5141},
{"f_6941:chicken_2dsyntax_2escm",(void*)f_6941},
{"f_8312:chicken_2dsyntax_2escm",(void*)f_8312},
{"f_6949:chicken_2dsyntax_2escm",(void*)f_6949},
{"f_9151:chicken_2dsyntax_2escm",(void*)f_9151},
{"f_8017:chicken_2dsyntax_2escm",(void*)f_8017},
{"f_8120:chicken_2dsyntax_2escm",(void*)f_8120},
{"f_7911:chicken_2dsyntax_2escm",(void*)f_7911},
{"f_3690:chicken_2dsyntax_2escm",(void*)f_3690},
{"f_8141:chicken_2dsyntax_2escm",(void*)f_8141},
{"f_8148:chicken_2dsyntax_2escm",(void*)f_8148},
{"f_5181:chicken_2dsyntax_2escm",(void*)f_5181},
{"f_3887:chicken_2dsyntax_2escm",(void*)f_3887},
{"f_5115:chicken_2dsyntax_2escm",(void*)f_5115},
{"f_6951:chicken_2dsyntax_2escm",(void*)f_6951},
{"f_6955:chicken_2dsyntax_2escm",(void*)f_6955},
{"f_8114:chicken_2dsyntax_2escm",(void*)f_8114},
{"f_8110:chicken_2dsyntax_2escm",(void*)f_8110},
{"f_5158:chicken_2dsyntax_2escm",(void*)f_5158},
{"f_8108:chicken_2dsyntax_2escm",(void*)f_8108},
{"f_9075:chicken_2dsyntax_2escm",(void*)f_9075},
{"f_5164:chicken_2dsyntax_2escm",(void*)f_5164},
{"f_7982:chicken_2dsyntax_2escm",(void*)f_7982},
{"f_3904:chicken_2dsyntax_2escm",(void*)f_3904},
{"f_3817:chicken_2dsyntax_2escm",(void*)f_3817},
{"f_5105:chicken_2dsyntax_2escm",(void*)f_5105},
{"f_3831:chicken_2dsyntax_2escm",(void*)f_3831},
{"f_3833:chicken_2dsyntax_2escm",(void*)f_3833},
{"f_5039:chicken_2dsyntax_2escm",(void*)f_5039},
{"f_5037:chicken_2dsyntax_2escm",(void*)f_5037},
{"f_7976:chicken_2dsyntax_2escm",(void*)f_7976},
{"f_7972:chicken_2dsyntax_2escm",(void*)f_7972},
{"f_7970:chicken_2dsyntax_2escm",(void*)f_7970},
{"f_5043:chicken_2dsyntax_2escm",(void*)f_5043},
{"f_5049:chicken_2dsyntax_2escm",(void*)f_5049},
{"f_7489:chicken_2dsyntax_2escm",(void*)f_7489},
{"f_5046:chicken_2dsyntax_2escm",(void*)f_5046},
{"f_10621:chicken_2dsyntax_2escm",(void*)f_10621},
{"f_10517:chicken_2dsyntax_2escm",(void*)f_10517},
{"f_10625:chicken_2dsyntax_2escm",(void*)f_10625},
{"f_10513:chicken_2dsyntax_2escm",(void*)f_10513},
{"f_5078:chicken_2dsyntax_2escm",(void*)f_5078},
{"f_7493:chicken_2dsyntax_2escm",(void*)f_7493},
{"f_5089:chicken_2dsyntax_2escm",(void*)f_5089},
{"f_3703:chicken_2dsyntax_2escm",(void*)f_3703},
{"f_7403:chicken_2dsyntax_2escm",(void*)f_7403},
{"f_7406:chicken_2dsyntax_2escm",(void*)f_7406},
{"f_3851:chicken_2dsyntax_2escm",(void*)f_3851},
{"f_7409:chicken_2dsyntax_2escm",(void*)f_7409},
{"f_10069:chicken_2dsyntax_2escm",(void*)f_10069},
{"f_10059:chicken_2dsyntax_2escm",(void*)f_10059},
{"f_9999:chicken_2dsyntax_2escm",(void*)f_9999},
{"f_9997:chicken_2dsyntax_2escm",(void*)f_9997},
{"f_7467:chicken_2dsyntax_2escm",(void*)f_7467},
{"f_3749:chicken_2dsyntax_2escm",(void*)f_3749},
{"f_3757:chicken_2dsyntax_2escm",(void*)f_3757},
{"f_3514:chicken_2dsyntax_2escm",(void*)f_3514},
{"f_10076:chicken_2dsyntax_2escm",(void*)f_10076},
{"f_3510:chicken_2dsyntax_2escm",(void*)f_3510},
{"f_7447:chicken_2dsyntax_2escm",(void*)f_7447},
{"f_3521:chicken_2dsyntax_2escm",(void*)f_3521},
{"f_7470:chicken_2dsyntax_2escm",(void*)f_7470},
{"f_7474:chicken_2dsyntax_2escm",(void*)f_7474},
{"f_10092:chicken_2dsyntax_2escm",(void*)f_10092},
{"toplevel:chicken_2dsyntax_2escm",(void*)C_chicken_2dsyntax_toplevel},
{"f_3548:chicken_2dsyntax_2escm",(void*)f_3548},
{"f_10040:chicken_2dsyntax_2escm",(void*)f_10040},
{"f_7456:chicken_2dsyntax_2escm",(void*)f_7456},
{"f_7453:chicken_2dsyntax_2escm",(void*)f_7453},
{"f_5284:chicken_2dsyntax_2escm",(void*)f_5284},
{"f_4489:chicken_2dsyntax_2escm",(void*)f_4489},
{"f_3550:chicken_2dsyntax_2escm",(void*)f_3550},
{"f_4480:chicken_2dsyntax_2escm",(void*)f_4480},
{"f_9940:chicken_2dsyntax_2escm",(void*)f_9940},
{"f_3579:chicken_2dsyntax_2escm",(void*)f_3579},
{"f_10088:chicken_2dsyntax_2escm",(void*)f_10088},
{"f_10086:chicken_2dsyntax_2escm",(void*)f_10086},
{"f_4536:chicken_2dsyntax_2escm",(void*)f_4536},
{"f_4534:chicken_2dsyntax_2escm",(void*)f_4534},
{"f_9963:chicken_2dsyntax_2escm",(void*)f_9963},
{"f_5268:chicken_2dsyntax_2escm",(void*)f_5268},
{"f_10390:chicken_2dsyntax_2escm",(void*)f_10390},
{"f_4421:chicken_2dsyntax_2escm",(void*)f_4421},
{"f_4565:chicken_2dsyntax_2escm",(void*)f_4565},
{"f_10387:chicken_2dsyntax_2escm",(void*)f_10387},
{"f_10384:chicken_2dsyntax_2escm",(void*)f_10384},
{"f_7420:chicken_2dsyntax_2escm",(void*)f_7420},
{"f_7422:chicken_2dsyntax_2escm",(void*)f_7422},
{"f_5236:chicken_2dsyntax_2escm",(void*)f_5236},
{"f_5238:chicken_2dsyntax_2escm",(void*)f_5238},
{"f_4575:chicken_2dsyntax_2escm",(void*)f_4575},
{"f_4573:chicken_2dsyntax_2escm",(void*)f_4573},
{"f_4579:chicken_2dsyntax_2escm",(void*)f_4579},
{"f_5204:chicken_2dsyntax_2escm",(void*)f_5204},
{"f_4588:chicken_2dsyntax_2escm",(void*)f_4588},
{"f_10366:chicken_2dsyntax_2escm",(void*)f_10366},
{"f_4582:chicken_2dsyntax_2escm",(void*)f_4582},
{"f_4585:chicken_2dsyntax_2escm",(void*)f_4585},
{"f_10368:chicken_2dsyntax_2escm",(void*)f_10368},
{"f_5258:chicken_2dsyntax_2escm",(void*)f_5258},
{"f_5300:chicken_2dsyntax_2escm",(void*)f_5300},
{"f_5251:chicken_2dsyntax_2escm",(void*)f_5251},
{"f_5310:chicken_2dsyntax_2escm",(void*)f_5310},
{"f_4468:chicken_2dsyntax_2escm",(void*)f_4468},
{"f_5277:chicken_2dsyntax_2escm",(void*)f_5277},
{"f_10343:chicken_2dsyntax_2escm",(void*)f_10343},
{"f_4470:chicken_2dsyntax_2escm",(void*)f_4470},
{"f_4477:chicken_2dsyntax_2escm",(void*)f_4477},
{"f_5271:chicken_2dsyntax_2escm",(void*)f_5271},
{"f_5248:chicken_2dsyntax_2escm",(void*)f_5248},
{"f_5245:chicken_2dsyntax_2escm",(void*)f_5245},
{"f_5242:chicken_2dsyntax_2escm",(void*)f_5242},
{"f_5359:chicken_2dsyntax_2escm",(void*)f_5359},
{"f_5353:chicken_2dsyntax_2escm",(void*)f_5353},
{"f_9725:chicken_2dsyntax_2escm",(void*)f_9725},
{"f_7598:chicken_2dsyntax_2escm",(void*)f_7598},
{"f_9711:chicken_2dsyntax_2escm",(void*)f_9711},
{"f_4412:chicken_2dsyntax_2escm",(void*)f_4412},
{"f_4414:chicken_2dsyntax_2escm",(void*)f_4414},
{"f_4418:chicken_2dsyntax_2escm",(void*)f_4418},
{"f_5977:chicken_2dsyntax_2escm",(void*)f_5977},
{"f_5973:chicken_2dsyntax_2escm",(void*)f_5973},
{"f_5228:chicken_2dsyntax_2escm",(void*)f_5228},
{"f_7557:chicken_2dsyntax_2escm",(void*)f_7557},
{"f_7555:chicken_2dsyntax_2escm",(void*)f_7555},
{"f_8895:chicken_2dsyntax_2escm",(void*)f_8895},
{"f_5336:chicken_2dsyntax_2escm",(void*)f_5336},
{"f_5997:chicken_2dsyntax_2escm",(void*)f_5997},
{"f_6770:chicken_2dsyntax_2escm",(void*)f_6770},
{"f_5333:chicken_2dsyntax_2escm",(void*)f_5333},
{"f_9744:chicken_2dsyntax_2escm",(void*)f_9744},
{"f_7192:chicken_2dsyntax_2escm",(void*)f_7192},
{"f_8885:chicken_2dsyntax_2escm",(void*)f_8885},
{"f_7195:chicken_2dsyntax_2escm",(void*)f_7195},
{"f_7198:chicken_2dsyntax_2escm",(void*)f_7198},
{"f_6781:chicken_2dsyntax_2escm",(void*)f_6781},
{"f_7571:chicken_2dsyntax_2escm",(void*)f_7571},
{"f_7180:chicken_2dsyntax_2escm",(void*)f_7180},
{"f_7181:chicken_2dsyntax_2escm",(void*)f_7181},
{"f_7189:chicken_2dsyntax_2escm",(void*)f_7189},
{"f_6684:chicken_2dsyntax_2escm",(void*)f_6684},
{"f_6680:chicken_2dsyntax_2escm",(void*)f_6680},
{"f_9731:chicken_2dsyntax_2escm",(void*)f_9731},
{"f_7561:chicken_2dsyntax_2escm",(void*)f_7561},
{"f_6688:chicken_2dsyntax_2escm",(void*)f_6688},
{"f_6692:chicken_2dsyntax_2escm",(void*)f_6692},
{"f_6696:chicken_2dsyntax_2escm",(void*)f_6696},
{"f_8856:chicken_2dsyntax_2escm",(void*)f_8856},
{"f_8858:chicken_2dsyntax_2escm",(void*)f_8858},
{"f_9455:chicken_2dsyntax_2escm",(void*)f_9455},
{"f_7506:chicken_2dsyntax_2escm",(void*)f_7506},
{"f_7504:chicken_2dsyntax_2escm",(void*)f_7504},
{"f_9780:chicken_2dsyntax_2escm",(void*)f_9780},
{"f_9406:chicken_2dsyntax_2escm",(void*)f_9406},
{"f_10619:chicken_2dsyntax_2escm",(void*)f_10619},
{"f_10611:chicken_2dsyntax_2escm",(void*)f_10611},
{"f_6710:chicken_2dsyntax_2escm",(void*)f_6710},
{"f_6728:chicken_2dsyntax_2escm",(void*)f_6728},
{"f_6725:chicken_2dsyntax_2escm",(void*)f_6725},
{"f_6722:chicken_2dsyntax_2escm",(void*)f_6722},
{"f_8812:chicken_2dsyntax_2escm",(void*)f_8812},
{"f_7091:chicken_2dsyntax_2escm",(void*)f_7091},
{"f_8788:chicken_2dsyntax_2escm",(void*)f_8788},
{"f_8785:chicken_2dsyntax_2escm",(void*)f_8785},
{"f_6704:chicken_2dsyntax_2escm",(void*)f_6704},
{"f_6706:chicken_2dsyntax_2escm",(void*)f_6706},
{"f_4041:chicken_2dsyntax_2escm",(void*)f_4041},
{"f_4146:chicken_2dsyntax_2escm",(void*)f_4146},
{"f_4140:chicken_2dsyntax_2escm",(void*)f_4140},
{"f_6199:chicken_2dsyntax_2escm",(void*)f_6199},
{"f_6611:chicken_2dsyntax_2escm",(void*)f_6611},
{"f_5944:chicken_2dsyntax_2escm",(void*)f_5944},
{"f_4015:chicken_2dsyntax_2escm",(void*)f_4015},
{"f_8496:chicken_2dsyntax_2escm",(void*)f_8496},
{"f_6623:chicken_2dsyntax_2escm",(void*)f_6623},
{"f_6621:chicken_2dsyntax_2escm",(void*)f_6621},
{"f_4023:chicken_2dsyntax_2escm",(void*)f_4023},
{"f_4025:chicken_2dsyntax_2escm",(void*)f_4025},
{"f_6731:chicken_2dsyntax_2escm",(void*)f_6731},
{"f_6185:chicken_2dsyntax_2escm",(void*)f_6185},
{"f_5966:chicken_2dsyntax_2escm",(void*)f_5966},
{"f_8741:chicken_2dsyntax_2escm",(void*)f_8741},
{"f_8749:chicken_2dsyntax_2escm",(void*)f_8749},
{"f_6742:chicken_2dsyntax_2escm",(void*)f_6742},
{"f_6744:chicken_2dsyntax_2escm",(void*)f_6744},
{"f_3392:chicken_2dsyntax_2escm",(void*)f_3392},
{"f_3395:chicken_2dsyntax_2escm",(void*)f_3395},
{"f_3398:chicken_2dsyntax_2escm",(void*)f_3398},
{"f_4086:chicken_2dsyntax_2escm",(void*)f_4086},
{"f_8776:chicken_2dsyntax_2escm",(void*)f_8776},
{"f_6189:chicken_2dsyntax_2escm",(void*)f_6189},
{"f_8770:chicken_2dsyntax_2escm",(void*)f_8770},
{"f_8777:chicken_2dsyntax_2escm",(void*)f_8777},
{"f_4187:chicken_2dsyntax_2escm",(void*)f_4187},
{"f_9269:chicken_2dsyntax_2escm",(void*)f_9269},
{"f_9262:chicken_2dsyntax_2escm",(void*)f_9262},
{"f_6652:chicken_2dsyntax_2escm",(void*)f_6652},
{"f_8762:chicken_2dsyntax_2escm",(void*)f_8762},
{"f_8761:chicken_2dsyntax_2escm",(void*)f_8761},
{"f_8454:chicken_2dsyntax_2escm",(void*)f_8454},
{"f_8798:chicken_2dsyntax_2escm",(void*)f_8798},
{"f_8702:chicken_2dsyntax_2escm",(void*)f_8702},
{"f_4137:chicken_2dsyntax_2escm",(void*)f_4137},
{"f_4131:chicken_2dsyntax_2escm",(void*)f_4131},
{"f_3350:chicken_2dsyntax_2escm",(void*)f_3350},
{"f_7152:chicken_2dsyntax_2escm",(void*)f_7152},
{"f_3359:chicken_2dsyntax_2escm",(void*)f_3359},
{"f_3353:chicken_2dsyntax_2escm",(void*)f_3353},
{"f_6193:chicken_2dsyntax_2escm",(void*)f_6193},
{"f_3356:chicken_2dsyntax_2escm",(void*)f_3356},
{"f_6195:chicken_2dsyntax_2escm",(void*)f_6195},
{"f_7157:chicken_2dsyntax_2escm",(void*)f_7157},
{"f_7156:chicken_2dsyntax_2escm",(void*)f_7156},
{"f_8461:chicken_2dsyntax_2escm",(void*)f_8461},
{"f_8467:chicken_2dsyntax_2escm",(void*)f_8467},
{"f_4685:chicken_2dsyntax_2escm",(void*)f_4685},
{"f_3362:chicken_2dsyntax_2escm",(void*)f_3362},
{"f_3368:chicken_2dsyntax_2escm",(void*)f_3368},
{"f_7143:chicken_2dsyntax_2escm",(void*)f_7143},
{"f_7144:chicken_2dsyntax_2escm",(void*)f_7144},
{"f_3365:chicken_2dsyntax_2escm",(void*)f_3365},
{"f_8722:chicken_2dsyntax_2escm",(void*)f_8722},
{"f_8720:chicken_2dsyntax_2escm",(void*)f_8720},
{"f_3371:chicken_2dsyntax_2escm",(void*)f_3371},
{"f_3377:chicken_2dsyntax_2escm",(void*)f_3377},
{"f_7171:chicken_2dsyntax_2escm",(void*)f_7171},
{"f_3374:chicken_2dsyntax_2escm",(void*)f_3374},
{"f_7177:chicken_2dsyntax_2escm",(void*)f_7177},
{"f_7174:chicken_2dsyntax_2escm",(void*)f_7174},
{"f_8752:chicken_2dsyntax_2escm",(void*)f_8752},
{"f_8758:chicken_2dsyntax_2escm",(void*)f_8758},
{"f_3380:chicken_2dsyntax_2escm",(void*)f_3380},
{"f_3389:chicken_2dsyntax_2escm",(void*)f_3389},
{"f_3386:chicken_2dsyntax_2escm",(void*)f_3386},
{"f_3383:chicken_2dsyntax_2escm",(void*)f_3383},
{"f_7165:chicken_2dsyntax_2escm",(void*)f_7165},
{"f_4672:chicken_2dsyntax_2escm",(void*)f_4672},
{"f_7115:chicken_2dsyntax_2escm",(void*)f_7115},
{"f_4005:chicken_2dsyntax_2escm",(void*)f_4005},
{"f_8423:chicken_2dsyntax_2escm",(void*)f_8423},
{"f_10209:chicken_2dsyntax_2escm",(void*)f_10209},
{"f_7134:chicken_2dsyntax_2escm",(void*)f_7134},
{"f_6899:chicken_2dsyntax_2escm",(void*)f_6899},
{"f_7137:chicken_2dsyntax_2escm",(void*)f_7137},
{"f_7131:chicken_2dsyntax_2escm",(void*)f_7131},
{"f_7123:chicken_2dsyntax_2escm",(void*)f_7123},
{"f_7231:chicken_2dsyntax_2escm",(void*)f_7231},
{"f_10259:chicken_2dsyntax_2escm",(void*)f_10259},
{"f_10273:chicken_2dsyntax_2escm",(void*)f_10273},
{"f_7330:chicken_2dsyntax_2escm",(void*)f_7330},
{"f_7336:chicken_2dsyntax_2escm",(void*)f_7336},
{"f_10261:chicken_2dsyntax_2escm",(void*)f_10261},
{"f_10166:chicken_2dsyntax_2escm",(void*)f_10166},
{"f_10168:chicken_2dsyntax_2escm",(void*)f_10168},
{"f_10276:chicken_2dsyntax_2escm",(void*)f_10276},
{"f_10279:chicken_2dsyntax_2escm",(void*)f_10279},
{"f_9658:chicken_2dsyntax_2escm",(void*)f_9658},
{"f_5499:chicken_2dsyntax_2escm",(void*)f_5499},
{"f_10265:chicken_2dsyntax_2escm",(void*)f_10265},
{"f_10282:chicken_2dsyntax_2escm",(void*)f_10282},
{"f_9649:chicken_2dsyntax_2escm",(void*)f_9649},
{"f_9645:chicken_2dsyntax_2escm",(void*)f_9645},
{"f_7260:chicken_2dsyntax_2escm",(void*)f_7260},
{"f_7266:chicken_2dsyntax_2escm",(void*)f_7266},
{"f_9673:chicken_2dsyntax_2escm",(void*)f_9673},
{"f_10283:chicken_2dsyntax_2escm",(void*)f_10283},
{"f_10172:chicken_2dsyntax_2escm",(void*)f_10172},
{"f_9660:chicken_2dsyntax_2escm",(void*)f_9660},
{"f_9885:chicken_2dsyntax_2escm",(void*)f_9885},
{"f_7395:chicken_2dsyntax_2escm",(void*)f_7395},
{"f_7391:chicken_2dsyntax_2escm",(void*)f_7391},
{"f_7385:chicken_2dsyntax_2escm",(void*)f_7385},
{"f_7389:chicken_2dsyntax_2escm",(void*)f_7389},
{"f_7381:chicken_2dsyntax_2escm",(void*)f_7381},
{"f_9636:chicken_2dsyntax_2escm",(void*)f_9636},
{"f_8961:chicken_2dsyntax_2escm",(void*)f_8961},
{"f_5422:chicken_2dsyntax_2escm",(void*)f_5422},
{"f_9844:chicken_2dsyntax_2escm",(void*)f_9844},
{"f_6572:chicken_2dsyntax_2escm",(void*)f_6572},
{"f_8997:chicken_2dsyntax_2escm",(void*)f_8997},
{"f_7205:chicken_2dsyntax_2escm",(void*)f_7205},
{"f_5416:chicken_2dsyntax_2escm",(void*)f_5416},
{"f_5418:chicken_2dsyntax_2escm",(void*)f_5418},
{"f_10194:chicken_2dsyntax_2escm",(void*)f_10194},
{"f_9879:chicken_2dsyntax_2escm",(void*)f_9879},
{"f_5440:chicken_2dsyntax_2escm",(void*)f_5440},
{"f_4978:chicken_2dsyntax_2escm",(void*)f_4978},
{"f_4972:chicken_2dsyntax_2escm",(void*)f_4972},
{"f_5437:chicken_2dsyntax_2escm",(void*)f_5437},
{"f_4974:chicken_2dsyntax_2escm",(void*)f_4974},
{"f_9815:chicken_2dsyntax_2escm",(void*)f_9815},
{"f_4905:chicken_2dsyntax_2escm",(void*)f_4905},
{"f_5449:chicken_2dsyntax_2escm",(void*)f_5449},
{"f_4907:chicken_2dsyntax_2escm",(void*)f_4907},
{"f_5446:chicken_2dsyntax_2escm",(void*)f_5446},
{"f_5505:chicken_2dsyntax_2escm",(void*)f_5505},
{"f_4911:chicken_2dsyntax_2escm",(void*)f_4911},
{"f_4918:chicken_2dsyntax_2escm",(void*)f_4918},
{"f_5455:chicken_2dsyntax_2escm",(void*)f_5455},
{"f_5554:chicken_2dsyntax_2escm",(void*)f_5554},
{"f_9850:chicken_2dsyntax_2escm",(void*)f_9850},
{"f_4926:chicken_2dsyntax_2escm",(void*)f_4926},
{"f_8948:chicken_2dsyntax_2escm",(void*)f_8948},
{"f_4928:chicken_2dsyntax_2escm",(void*)f_4928},
{"f_5480:chicken_2dsyntax_2escm",(void*)f_5480},
{"f_7301:chicken_2dsyntax_2escm",(void*)f_7301},
{"f_5524:chicken_2dsyntax_2escm",(void*)f_5524},
{"f_5478:chicken_2dsyntax_2escm",(void*)f_5478},
{"f_5520:chicken_2dsyntax_2escm",(void*)f_5520},
{"f_5575:chicken_2dsyntax_2escm",(void*)f_5575},
{"f_4943:chicken_2dsyntax_2escm",(void*)f_4943},
{"f_4945:chicken_2dsyntax_2escm",(void*)f_4945},
{"f_4949:chicken_2dsyntax_2escm",(void*)f_4949},
{"f_4956:chicken_2dsyntax_2escm",(void*)f_4956},
{"f_8908:chicken_2dsyntax_2escm",(void*)f_8908},
{"f_4964:chicken_2dsyntax_2escm",(void*)f_4964},
{"f_7895:chicken_2dsyntax_2escm",(void*)f_7895},
{"f_6524:chicken_2dsyntax_2escm",(void*)f_6524},
{"f_7875:chicken_2dsyntax_2escm",(void*)f_7875},
{"f_6535:chicken_2dsyntax_2escm",(void*)f_6535},
{"f_4775:chicken_2dsyntax_2escm",(void*)f_4775},
{"f_9194:chicken_2dsyntax_2escm",(void*)f_9194},
{"f_9190:chicken_2dsyntax_2escm",(void*)f_9190},
{"f_4782:chicken_2dsyntax_2escm",(void*)f_4782},
{"f_4796:chicken_2dsyntax_2escm",(void*)f_4796},
{"f_4932:chicken_2dsyntax_2escm",(void*)f_4932},
{"f_8698:chicken_2dsyntax_2escm",(void*)f_8698},
{"f_8696:chicken_2dsyntax_2escm",(void*)f_8696},
{"f_5408:chicken_2dsyntax_2escm",(void*)f_5408},
{"f_4051:chicken_2dsyntax_2escm",(void*)f_4051},
{"f_9010:chicken_2dsyntax_2escm",(void*)f_9010},
{"f_7821:chicken_2dsyntax_2escm",(void*)f_7821},
{"f_7824:chicken_2dsyntax_2escm",(void*)f_7824},
{"f_5516:chicken_2dsyntax_2escm",(void*)f_5516},
{"f_5512:chicken_2dsyntax_2escm",(void*)f_5512},
{"f_9081:chicken_2dsyntax_2escm",(void*)f_9081},
{"f_7810:chicken_2dsyntax_2escm",(void*)f_7810},
{"f_9188:chicken_2dsyntax_2escm",(void*)f_9188},
{"f_10017:chicken_2dsyntax_2escm",(void*)f_10017},
{"f_10014:chicken_2dsyntax_2escm",(void*)f_10014},
{"f_8653:chicken_2dsyntax_2escm",(void*)f_8653},
{"f_7800:chicken_2dsyntax_2escm",(void*)f_7800},
{"f_7806:chicken_2dsyntax_2escm",(void*)f_7806},
{"f_7804:chicken_2dsyntax_2escm",(void*)f_7804},
{"f_8649:chicken_2dsyntax_2escm",(void*)f_8649},
{"f_8647:chicken_2dsyntax_2escm",(void*)f_8647},
{"f_4155:chicken_2dsyntax_2escm",(void*)f_4155},
{"f_8674:chicken_2dsyntax_2escm",(void*)f_8674},
{"f_8670:chicken_2dsyntax_2escm",(void*)f_8670},
{"f_7860:chicken_2dsyntax_2escm",(void*)f_7860},
{"f_7862:chicken_2dsyntax_2escm",(void*)f_7862},
{"f_9116:chicken_2dsyntax_2escm",(void*)f_9116},
{"f_10003:chicken_2dsyntax_2escm",(void*)f_10003},
{"f_4701:chicken_2dsyntax_2escm",(void*)f_4701},
{"f_9110:chicken_2dsyntax_2escm",(void*)f_9110},
{"f_4707:chicken_2dsyntax_2escm",(void*)f_4707},
{"f_4162:chicken_2dsyntax_2escm",(void*)f_4162},
{"f_4660:chicken_2dsyntax_2escm",(void*)f_4660},
{"f_4662:chicken_2dsyntax_2escm",(void*)f_4662},
{"f_8668:chicken_2dsyntax_2escm",(void*)f_8668},
{"f_7853:chicken_2dsyntax_2escm",(void*)f_7853},
{"f_4716:chicken_2dsyntax_2escm",(void*)f_4716},
{"f_4710:chicken_2dsyntax_2escm",(void*)f_4710},
{"f_4176:chicken_2dsyntax_2escm",(void*)f_4176},
{"f_8614:chicken_2dsyntax_2escm",(void*)f_8614},
{"f_7843:chicken_2dsyntax_2escm",(void*)f_7843},
{"f_7849:chicken_2dsyntax_2escm",(void*)f_7849},
{"f_4725:chicken_2dsyntax_2escm",(void*)f_4725},
{"f_9046:chicken_2dsyntax_2escm",(void*)f_9046},
{"f_8601:chicken_2dsyntax_2escm",(void*)f_8601},
{"f_8607:chicken_2dsyntax_2escm",(void*)f_8607},
{"f_4732:chicken_2dsyntax_2escm",(void*)f_4732},
{"f_4190:chicken_2dsyntax_2escm",(void*)f_4190},
{"f_4196:chicken_2dsyntax_2escm",(void*)f_4196},
{"f_8632:chicken_2dsyntax_2escm",(void*)f_8632},
{"f_4746:chicken_2dsyntax_2escm",(void*)f_4746},
{"f_8622:chicken_2dsyntax_2escm",(void*)f_8622},
{"f_6471:chicken_2dsyntax_2escm",(void*)f_6471},
{"f_4757:chicken_2dsyntax_2escm",(void*)f_4757},
{"f_6401:chicken_2dsyntax_2escm",(void*)f_6401},
{"f_4760:chicken_2dsyntax_2escm",(void*)f_4760},
{"f_4766:chicken_2dsyntax_2escm",(void*)f_4766},
{"f_8273:chicken_2dsyntax_2escm",(void*)f_8273},
{"f_8271:chicken_2dsyntax_2escm",(void*)f_8271},
{"f_4614:chicken_2dsyntax_2escm",(void*)f_4614},
{"f_3963:chicken_2dsyntax_2escm",(void*)f_3963},
{"f_3961:chicken_2dsyntax_2escm",(void*)f_3961},
{"f_4611:chicken_2dsyntax_2escm",(void*)f_4611},
{"f_6420:chicken_2dsyntax_2escm",(void*)f_6420},
{"f_6422:chicken_2dsyntax_2escm",(void*)f_6422},
{"f_6852:chicken_2dsyntax_2escm",(void*)f_6852},
{"f_9442:chicken_2dsyntax_2escm",(void*)f_9442},
{"f_6860:chicken_2dsyntax_2escm",(void*)f_6860},
{"f_6862:chicken_2dsyntax_2escm",(void*)f_6862},
{"f_6435:chicken_2dsyntax_2escm",(void*)f_6435},
{"f_6866:chicken_2dsyntax_2escm",(void*)f_6866},
{"f_6869:chicken_2dsyntax_2escm",(void*)f_6869},
{"f_8215:chicken_2dsyntax_2escm",(void*)f_8215},
{"f_8216:chicken_2dsyntax_2escm",(void*)f_8216},
{"f_3987:chicken_2dsyntax_2escm",(void*)f_3987},
{"f_8241:chicken_2dsyntax_2escm",(void*)f_8241},
{"f_3597:chicken_2dsyntax_2escm",(void*)f_3597},
{"f_3595:chicken_2dsyntax_2escm",(void*)f_3595},
{"f_8239:chicken_2dsyntax_2escm",(void*)f_8239},
{"f_8265:chicken_2dsyntax_2escm",(void*)f_8265},
{"f_7023:chicken_2dsyntax_2escm",(void*)f_7023},
{"f_3973:chicken_2dsyntax_2escm",(void*)f_3973},
{"f_5052:chicken_2dsyntax_2escm",(void*)f_5052},
{"f_8205:chicken_2dsyntax_2escm",(void*)f_8205},
{"f_7005:chicken_2dsyntax_2escm",(void*)f_7005},
{"f_8209:chicken_2dsyntax_2escm",(void*)f_8209},
{"f_3429:chicken_2dsyntax_2escm",(void*)f_3429},
{"f_3420:chicken_2dsyntax_2escm",(void*)f_3420},
{"f_5059:chicken_2dsyntax_2escm",(void*)f_5059},
{"f_3480:chicken_2dsyntax_2escm",(void*)f_3480},
{"f_3489:chicken_2dsyntax_2escm",(void*)f_3489},
{"f_5072:chicken_2dsyntax_2escm",(void*)f_5072},
{"f_3486:chicken_2dsyntax_2escm",(void*)f_3486},
{"f_3476:chicken_2dsyntax_2escm",(void*)f_3476},
{"f_3474:chicken_2dsyntax_2escm",(void*)f_3474},
{"f_6066:chicken_2dsyntax_2escm",(void*)f_6066},
{"f_6062:chicken_2dsyntax_2escm",(void*)f_6062},
{"f_8227:chicken_2dsyntax_2escm",(void*)f_8227},
{"f_6113:chicken_2dsyntax_2escm",(void*)f_6113},
{"f_7065:chicken_2dsyntax_2escm",(void*)f_7065},
{"f_5069:chicken_2dsyntax_2escm",(void*)f_5069},
{"f_3458:chicken_2dsyntax_2escm",(void*)f_3458},
{"f_7051:chicken_2dsyntax_2escm",(void*)f_7051},
{"f_6074:chicken_2dsyntax_2escm",(void*)f_6074},
{"f_6076:chicken_2dsyntax_2escm",(void*)f_6076},
{"f_3414:chicken_2dsyntax_2escm",(void*)f_3414},
{"f_3416:chicken_2dsyntax_2escm",(void*)f_3416},
{"f_3314:chicken_2dsyntax_2escm",(void*)f_3314},
{"f_3317:chicken_2dsyntax_2escm",(void*)f_3317},
{"f_3410:chicken_2dsyntax_2escm",(void*)f_3410},
{"f_3768:chicken_2dsyntax_2escm",(void*)f_3768},
{"f_3311:chicken_2dsyntax_2escm",(void*)f_3311},
{"f_7045:chicken_2dsyntax_2escm",(void*)f_7045},
{"f_3323:chicken_2dsyntax_2escm",(void*)f_3323},
{"f_3326:chicken_2dsyntax_2escm",(void*)f_3326},
{"f_3329:chicken_2dsyntax_2escm",(void*)f_3329},
{"f_3320:chicken_2dsyntax_2escm",(void*)f_3320},
{"f_7035:chicken_2dsyntax_2escm",(void*)f_7035},
{"f_7031:chicken_2dsyntax_2escm",(void*)f_7031},
{"f_3435:chicken_2dsyntax_2escm",(void*)f_3435},
{"f_3432:chicken_2dsyntax_2escm",(void*)f_3432},
{"f_3335:chicken_2dsyntax_2escm",(void*)f_3335},
{"f_3332:chicken_2dsyntax_2escm",(void*)f_3332},
{"f_3786:chicken_2dsyntax_2escm",(void*)f_3786},
{"f_3338:chicken_2dsyntax_2escm",(void*)f_3338},
{"f_3788:chicken_2dsyntax_2escm",(void*)f_3788},
{"f_6026:chicken_2dsyntax_2escm",(void*)f_6026},
{"f_3407:chicken_2dsyntax_2escm",(void*)f_3407},
{"f_3404:chicken_2dsyntax_2escm",(void*)f_3404},
{"f_3401:chicken_2dsyntax_2escm",(void*)f_3401},
{"f_3344:chicken_2dsyntax_2escm",(void*)f_3344},
{"f_10311:chicken_2dsyntax_2escm",(void*)f_10311},
{"f_3347:chicken_2dsyntax_2escm",(void*)f_3347},
{"f_3341:chicken_2dsyntax_2escm",(void*)f_3341},
{"f_8257:chicken_2dsyntax_2escm",(void*)f_8257},
{"f_10416:chicken_2dsyntax_2escm",(void*)f_10416},
{"f_3307:chicken_2dsyntax_2escm",(void*)f_3307},
{"f_3304:chicken_2dsyntax_2escm",(void*)f_3304},
{"f_3301:chicken_2dsyntax_2escm",(void*)f_3301},
{"f_10420:chicken_2dsyntax_2escm",(void*)f_10420},
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
S|  foldl		1
S|  for-each		1
S|  ##sys#map		10
S|  map		33
o|eliminated procedure checks: 616 
o|specializations:
o|  1 (caddr (pair * (pair * pair)))
o|  1 (= fixnum fixnum)
o|  3 (cadr (pair * pair))
o|  1 (zero? fixnum)
o|  3 (length list)
o|  22 (##sys#check-list (or pair list) *)
o|  6 (cdddr (pair * (pair * pair)))
o|  2 (string-append string string)
o|  49 (cdr pair)
o|  20 (car pair)
o|  17 (cddr (pair * pair))
o|Removed `not' forms: 12 
o|contracted procedure: k3424 
o|inlining procedure: k3421 
o|inlining procedure: k3421 
o|inlining procedure: k3531 
o|inlining procedure: k3531 
o|inlining procedure: k3552 
o|inlining procedure: k3552 
o|contracted procedure: k3602 
o|inlining procedure: k3599 
o|inlining procedure: k3639 
o|inlining procedure: k3692 
o|contracted procedure: "(chicken-syntax.scm:1251) g23252335" 
o|inlining procedure: k3692 
o|inlining procedure: k3758 
o|inlining procedure: k3758 
o|inlining procedure: k3766 
o|inlining procedure: k3790 
o|contracted procedure: "(chicken-syntax.scm:1238) g22852294" 
o|propagated global variable: g23022303 ##compiler#check-and-validate-type 
o|inlining procedure: k3790 
o|inlining procedure: k3766 
o|inlining procedure: k3835 
o|inlining procedure: k3835 
o|inlining procedure: k3639 
o|inlining procedure: k3882 
o|inlining procedure: k3882 
o|inlining procedure: k3919 
o|inlining procedure: k3919 
o|inlining procedure: k3599 
o|inlining procedure: k3968 
o|inlining procedure: k4053 
o|contracted procedure: "(chicken-syntax.scm:1201) g22192228" 
o|inlining procedure: k4053 
o|inlining procedure: k4088 
o|contracted procedure: "(chicken-syntax.scm:1201) g21912200" 
o|inlining procedure: k4088 
o|inlining procedure: k3968 
o|inlining procedure: k4126 
o|inlining procedure: k4141 
o|inlining procedure: k4157 
o|inlining procedure: k4157 
o|inlining procedure: k4141 
o|inlining procedure: k4126 
o|inlining procedure: k4191 
o|inlining procedure: k4207 
o|inlining procedure: k4207 
o|inlining procedure: k4242 
o|inlining procedure: k4242 
o|inlining procedure: k4191 
o|contracted procedure: k4276 
o|inlining procedure: k4273 
o|inlining procedure: k4273 
o|contracted procedure: k4314 
o|inlining procedure: k4311 
o|contracted procedure: k4342 
o|inlining procedure: k4339 
o|inlining procedure: k4368 
o|inlining procedure: k4368 
o|inlining procedure: k4339 
o|inlining procedure: k4311 
o|inlining procedure: k4478 
o|inlining procedure: k4478 
o|inlining procedure: k4493 
o|inlining procedure: k4505 
o|inlining procedure: k4505 
o|substituted constant variable: a4522 
o|inlining procedure: k4493 
o|inlining procedure: k4538 
o|inlining procedure: k4538 
o|inlining procedure: k4612 
o|inlining procedure: k4612 
o|inlining procedure: k4627 
o|inlining procedure: k4627 
o|inlining procedure: k4667 
o|inlining procedure: k4667 
o|inlining procedure: k4696 
o|inlining procedure: k4711 
o|inlining procedure: k4727 
o|inlining procedure: k4727 
o|inlining procedure: k4711 
o|inlining procedure: k4696 
o|inlining procedure: k4761 
o|inlining procedure: k4777 
o|inlining procedure: k4777 
o|inlining procedure: k4761 
o|inlining procedure: k4815 
o|inlining procedure: k4815 
o|inlining procedure: k4879 
o|inlining procedure: k4879 
o|inlining procedure: k4982 
o|inlining procedure: k4982 
o|inlining procedure: k5061 
o|inlining procedure: k5061 
o|inlining procedure: k5159 
o|inlining procedure: k5159 
o|inlining procedure: k5260 
o|inlining procedure: k5260 
o|inlining procedure: k5354 
o|inlining procedure: k5354 
o|inlining procedure: k5482 
o|inlining procedure: k5482 
o|inlining procedure: k5531 
o|contracted procedure: k5537 
o|inlining procedure: k5531 
o|inlining procedure: k5570 
o|inlining procedure: k5570 
o|inlining procedure: k5643 
o|inlining procedure: k5643 
o|inlining procedure: k5696 
o|inlining procedure: k5696 
o|inlining procedure: k5711 
o|inlining procedure: k5711 
o|inlining procedure: k5746 
o|inlining procedure: k5746 
o|inlining procedure: k5827 
o|inlining procedure: k5827 
o|inlining procedure: k5866 
o|inlining procedure: k5866 
o|inlining procedure: k5979 
o|inlining procedure: k5979 
o|inlining procedure: k5999 
o|inlining procedure: k5999 
o|inlining procedure: k6205 
o|inlining procedure: k6205 
o|inlining procedure: k6282 
o|inlining procedure: k6282 
o|inlining procedure: k6402 
o|inlining procedure: k6402 
o|inlining procedure: k6424 
o|inlining procedure: k6424 
o|inlining procedure: k6473 
o|inlining procedure: k6501 
o|inlining procedure: k6501 
o|inlining procedure: k6473 
o|inlining procedure: k6533 
o|inlining procedure: k6533 
o|inlining procedure: k6573 
o|inlining procedure: k6573 
o|inlining procedure: k6625 
o|contracted procedure: "(chicken-syntax.scm:764) g14941503" 
o|inlining procedure: k6625 
o|inlining procedure: k6746 
o|inlining procedure: k6746 
o|removed unused formal parameters: (rename1289) 
o|inlining procedure: k7053 
o|inlining procedure: k7053 
o|removed unused parameter to known procedure: rename1289 "(chicken-syntax.scm:667) make-if-tree1269" 
o|contracted procedure: "(chicken-syntax.scm:665) make-default-procs1268" 
o|inlining procedure: k6986 
o|inlining procedure: k6986 
o|inlining procedure: k7233 
o|inlining procedure: k7233 
o|inlining procedure: k7268 
o|inlining procedure: k7268 
o|inlining procedure: k7303 
o|inlining procedure: k7303 
o|inlining procedure: k7338 
o|inlining procedure: k7338 
o|inlining procedure: k7424 
o|inlining procedure: k7424 
o|contracted procedure: k7433 
o|inlining procedure: k7448 
o|inlining procedure: k7448 
o|inlining procedure: k7508 
o|inlining procedure: k7508 
o|inlining procedure: k7573 
o|inlining procedure: k7573 
o|contracted procedure: k7589 
o|inlining procedure: k7599 
o|inlining procedure: k7599 
o|inlining procedure: k7670 
o|inlining procedure: k7670 
o|contracted procedure: k7688 
o|inlining procedure: k7685 
o|inlining procedure: k7685 
o|inlining procedure: k7864 
o|inlining procedure: k7864 
o|inlining procedure: k7913 
o|contracted procedure: "(chicken-syntax.scm:425) g10571066" 
o|inlining procedure: k7913 
o|inlining procedure: k7948 
o|contracted procedure: "(chicken-syntax.scm:426) g10811082" 
o|inlining procedure: k7948 
o|substituted constant variable: g10731076 
o|inlining procedure: k7984 
o|inlining procedure: k7984 
o|inlining procedure: k8019 
o|inlining procedure: k8019 
o|inlining procedure: k8075 
o|inlining procedure: k8075 
o|contracted procedure: k8125 
o|inlining procedure: k8122 
o|inlining procedure: k8122 
o|inlining procedure: k8150 
o|inlining procedure: k8150 
o|contracted procedure: k8159 
o|inlining procedure: k8243 
o|inlining procedure: k8275 
o|inlining procedure: k8275 
o|inlining procedure: k8243 
o|inlining procedure: k8390 
o|contracted procedure: "(chicken-syntax.scm:383) g949958" 
o|inlining procedure: k8390 
o|inlining procedure: k8425 
o|inlining procedure: k8425 
o|contracted procedure: k8445 
o|inlining procedure: k8469 
o|inlining procedure: k8469 
o|inlining procedure: k8504 
o|inlining procedure: k8504 
o|inlining procedure: k8527 
o|inlining procedure: k8527 
o|inlining procedure: k8542 
o|inlining procedure: k8542 
o|inlining procedure: k8624 
o|contracted procedure: "(chicken-syntax.scm:339) g776783" 
o|inlining procedure: k8624 
o|contracted procedure: "(chicken-syntax.scm:286) pname530" 
o|inlining procedure: k8727 
o|inlining procedure: k8727 
o|removed unused formal parameters: (z638) 
o|inlining procedure: k8897 
o|inlining procedure: k8897 
o|inlining procedure: k8950 
o|inlining procedure: k8950 
o|inlining procedure: k8999 
o|inlining procedure: k8999 
o|inlining procedure: k9048 
o|removed unused parameter to known procedure: z638 "(chicken-syntax.scm:287) g627636" 
o|inlining procedure: k9048 
o|inlining procedure: k9083 
o|inlining procedure: k9083 
o|inlining procedure: k9118 
o|inlining procedure: k9118 
o|inlining procedure: k9153 
o|inlining procedure: k9153 
o|inlining procedure: k9213 
o|inlining procedure: k9228 
o|inlining procedure: k9228 
o|inlining procedure: k9213 
o|inlining procedure: k9243 
o|inlining procedure: k9264 
o|inlining procedure: k9264 
o|inlining procedure: k9243 
o|removed unused formal parameters: (x216) 
o|removed unused formal parameters: (x244) 
o|inlining procedure: k9395 
o|contracted procedure: "(chicken-syntax.scm:237) g462472" 
o|inlining procedure: k9395 
o|inlining procedure: k9444 
o|contracted procedure: "(chicken-syntax.scm:235) g426436" 
o|inlining procedure: k9444 
o|inlining procedure: k9538 
o|contracted procedure: "(chicken-syntax.scm:230) g390400" 
o|inlining procedure: k9538 
o|inlining procedure: k9587 
o|contracted procedure: "(chicken-syntax.scm:228) g354364" 
o|inlining procedure: k9587 
o|inlining procedure: k9662 
o|inlining procedure: k9662 
o|inlining procedure: k9713 
o|inlining procedure: k9713 
o|inlining procedure: k9733 
o|inlining procedure: k9733 
o|inlining procedure: k9782 
o|inlining procedure: k9782 
o|inlining procedure: k9817 
o|removed unused parameter to known procedure: x244 "(chicken-syntax.scm:218) g233242" 
o|inlining procedure: k9817 
o|inlining procedure: k9852 
o|removed unused parameter to known procedure: x216 "(chicken-syntax.scm:217) g205214" 
o|inlining procedure: k9852 
o|inlining procedure: k9887 
o|inlining procedure: k9887 
o|inlining procedure: k9965 
o|inlining procedure: k9965 
o|inlining procedure: k10042 
o|inlining procedure: k10042 
o|inlining procedure: k10070 
o|inlining procedure: k10070 
o|inlining procedure: k10173 
o|inlining procedure: k10173 
o|inlining procedure: k10285 
o|inlining procedure: k10285 
o|inlining procedure: k10306 
o|inlining procedure: k10318 
o|inlining procedure: k10318 
o|inlining procedure: k10306 
o|inlining procedure: k10370 
o|inlining procedure: k10370 
o|inlining procedure: k10430 
o|inlining procedure: k10430 
o|inlining procedure: k10519 
o|inlining procedure: k10519 
o|substituted constant variable: a10554 
o|substituted constant variable: a10579 
o|inlining procedure: k10584 
o|inlining procedure: k10584 
o|replaced variables: 1110 
o|removed binding forms: 379 
o|substituted constant variable: r342210634 
o|substituted constant variable: r375910645 
o|substituted constant variable: r375910645 
o|substituted constant variable: r383610653 
o|substituted constant variable: r392010659 
o|substituted constant variable: r360010660 
o|substituted constant variable: r414210671 
o|substituted constant variable: r412710672 
o|substituted constant variable: r424310677 
o|substituted constant variable: r419210678 
o|substituted constant variable: r436910685 
o|substituted constant variable: r436910685 
o|substituted constant variable: r431210688 
o|substituted constant variable: r450610701 
o|substituted constant variable: r449410702 
o|substituted constant variable: r461310705 
o|substituted constant variable: r461310705 
o|substituted constant variable: r471210717 
o|substituted constant variable: r469710718 
o|substituted constant variable: r476210722 
o|substituted constant variable: r488010726 
o|substituted constant variable: r548310737 
o|substituted constant variable: r564410746 
o|substituted constant variable: r569710748 
o|substituted constant variable: r598010757 
o|substituted constant variable: r598010757 
o|converted assignments to bindings: (parse-clause1645) 
o|substituted constant variable: r628310765 
o|substituted constant variable: r657410779 
o|converted assignments to bindings: (genvars1480) 
o|substituted constant variable: r698710787 
o|converted assignments to bindings: (make-if-tree1269) 
o|substituted constant variable: r742510797 
o|substituted constant variable: r768610817 
o|substituted constant variable: r815110833 
o|substituted constant variable: r971410887 
o|substituted constant variable: r1007110908 
o|substituted constant variable: r1031910915 
o|substituted constant variable: r1030710916 
o|simplifications: ((let . 3)) 
o|replaced variables: 19 
o|removed binding forms: 1194 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:287) slot" 
o|inlining procedure: k9250 
o|inlining procedure: k9250 
o|inlining procedure: k9250 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:218) slot" 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:217) slot" 
o|replaced variables: 34 
o|removed binding forms: 57 
o|contracted procedure: k9077 
o|contracted procedure: k9846 
o|contracted procedure: k9881 
o|removed binding forms: 39 
o|removed binding forms: 3 
o|simplifications: ((if . 25) (##core#call . 1075)) 
o|  call simplifications:
o|    string?
o|    cdar
o|    caar
o|    not	3
o|    apply
o|    fx-	2
o|    fx>=
o|    assq	2
o|    cddddr
o|    cddr	6
o|    add1
o|    ##sys#call-with-values	2
o|    ##sys#pair?	7
o|    ##sys#eq?	7
o|    ##sys#car	15
o|    ##sys#cdr	22
o|    cdddr	2
o|    cadddr	2
o|    list?	4
o|    fx=
o|    symbol?	11
o|    null?	30
o|    vector
o|    cdr	18
o|    fx+	3
o|    ##sys#check-list	35
o|    pair?	82
o|    cons	71
o|    ##sys#setslot	43
o|    ##sys#slot	120
o|    car	47
o|    eq?	8
o|    list	9
o|    ##sys#cons	139
o|    memq	7
o|    cadr	51
o|    caddr	17
o|    ##sys#list	301
o|contracted procedure: k3468 
o|contracted procedure: k3444 
o|contracted procedure: k3448 
o|contracted procedure: k3452 
o|contracted procedure: k3440 
o|contracted procedure: k3460 
o|contracted procedure: k3464 
o|contracted procedure: k3481 
o|contracted procedure: k3589 
o|contracted procedure: k3585 
o|contracted procedure: k3494 
o|contracted procedure: k3523 
o|contracted procedure: k3528 
o|contracted procedure: k3538 
o|contracted procedure: k3543 
o|contracted procedure: k3506 
o|contracted procedure: k3502 
o|contracted procedure: k3498 
o|contracted procedure: k3555 
o|contracted procedure: k3558 
o|contracted procedure: k3569 
o|contracted procedure: k3581 
o|contracted procedure: k3955 
o|contracted procedure: k3608 
o|contracted procedure: k3611 
o|contracted procedure: k3630 
o|contracted procedure: k3642 
o|contracted procedure: k3651 
o|contracted procedure: k3739 
o|contracted procedure: k3743 
o|contracted procedure: k3661 
o|contracted procedure: k3669 
o|contracted procedure: k3673 
o|contracted procedure: k3665 
o|contracted procedure: k3732 
o|contracted procedure: k3695 
o|contracted procedure: k3698 
o|contracted procedure: k3709 
o|contracted procedure: k3713 
o|contracted procedure: k3725 
o|contracted procedure: k3729 
o|contracted procedure: k3683 
o|contracted procedure: k3762 
o|contracted procedure: k3751 
o|contracted procedure: k3769 
o|contracted procedure: k3781 
o|contracted procedure: k3793 
o|contracted procedure: k3796 
o|contracted procedure: k3807 
o|contracted procedure: k3819 
o|contracted procedure: k3838 
o|contracted procedure: k3845 
o|contracted procedure: k3853 
o|contracted procedure: k3857 
o|contracted procedure: k3860 
o|contracted procedure: k3866 
o|contracted procedure: k3875 
o|contracted procedure: k3879 
o|contracted procedure: k3910 
o|contracted procedure: k3894 
o|contracted procedure: k3898 
o|contracted procedure: k3906 
o|contracted procedure: k3916 
o|contracted procedure: k3922 
o|contracted procedure: k3929 
o|contracted procedure: k3951 
o|contracted procedure: k3940 
o|contracted procedure: k3965 
o|contracted procedure: k3979 
o|contracted procedure: k3982 
o|contracted procedure: k3997 
o|contracted procedure: k4000 
o|contracted procedure: k4006 
o|contracted procedure: k4017 
o|contracted procedure: k4047 
o|contracted procedure: k4043 
o|contracted procedure: k4035 
o|contracted procedure: k4031 
o|contracted procedure: k4056 
o|contracted procedure: k4059 
o|contracted procedure: k4070 
o|contracted procedure: k4082 
o|contracted procedure: k3994 
o|contracted procedure: k4091 
o|contracted procedure: k4117 
o|contracted procedure: k4113 
o|contracted procedure: k4094 
o|contracted procedure: k4105 
o|contracted procedure: k4123 
o|contracted procedure: k4151 
o|contracted procedure: k4170 
o|contracted procedure: k4178 
o|contracted procedure: k4182 
o|contracted procedure: k4201 
o|contracted procedure: k4219 
o|contracted procedure: k4229 
o|contracted procedure: k4236 
o|contracted procedure: k4239 
o|contracted procedure: k4245 
o|contracted procedure: k4252 
o|contracted procedure: k4256 
o|contracted procedure: k4260 
o|contracted procedure: k4298 
o|contracted procedure: k4290 
o|contracted procedure: k4294 
o|contracted procedure: k4406 
o|contracted procedure: k4320 
o|contracted procedure: k4398 
o|contracted procedure: k4394 
o|contracted procedure: k4390 
o|contracted procedure: k4356 
o|contracted procedure: k4352 
o|contracted procedure: k4379 
o|contracted procedure: k4375 
o|contracted procedure: k4368 
o|contracted procedure: k4386 
o|contracted procedure: k4402 
o|contracted procedure: k4422 
o|contracted procedure: k4425 
o|contracted procedure: k4429 
o|contracted procedure: k4450 
o|contracted procedure: k4472 
o|contracted procedure: k4484 
o|contracted procedure: k4496 
o|contracted procedure: k4502 
o|contracted procedure: k4519 
o|contracted procedure: k4508 
o|contracted procedure: k4515 
o|contracted procedure: k4526 
o|contracted procedure: k4529 
o|contracted procedure: k4454 
o|contracted procedure: k4458 
o|contracted procedure: k4462 
o|contracted procedure: k4435 
o|contracted procedure: k4442 
o|contracted procedure: k4446 
o|contracted procedure: k4541 
o|contracted procedure: k4544 
o|contracted procedure: k4555 
o|contracted procedure: k4567 
o|contracted procedure: k4597 
o|contracted procedure: k4601 
o|contracted procedure: k4593 
o|contracted procedure: k4615 
o|contracted procedure: k4621 
o|inlining procedure: k4612 
o|contracted procedure: k4630 
o|contracted procedure: k4640 
o|contracted procedure: k4644 
o|contracted procedure: k4647 
o|contracted procedure: k4654 
o|contracted procedure: k4664 
o|contracted procedure: k4673 
o|contracted procedure: k4676 
o|contracted procedure: k4687 
o|contracted procedure: k4693 
o|contracted procedure: k4721 
o|contracted procedure: k4740 
o|contracted procedure: k4748 
o|contracted procedure: k4752 
o|contracted procedure: k4771 
o|contracted procedure: k4790 
o|contracted procedure: k4798 
o|contracted procedure: k4802 
o|contracted procedure: k4812 
o|contracted procedure: k4821 
o|contracted procedure: k4836 
o|contracted procedure: k4832 
o|contracted procedure: k4845 
o|contracted procedure: k4867 
o|contracted procedure: k4848 
o|contracted procedure: k4863 
o|contracted procedure: k4859 
o|contracted procedure: k4873 
o|contracted procedure: k4876 
o|contracted procedure: k4882 
o|contracted procedure: k4889 
o|contracted procedure: k4892 
o|contracted procedure: k4899 
o|contracted procedure: k4920 
o|contracted procedure: k4937 
o|contracted procedure: k4966 
o|contracted procedure: k4958 
o|contracted procedure: k4979 
o|contracted procedure: k4985 
o|contracted procedure: k5008 
o|contracted procedure: k5004 
o|contracted procedure: k4998 
o|contracted procedure: k4992 
o|contracted procedure: k5024 
o|contracted procedure: k5020 
o|contracted procedure: k5222 
o|contracted procedure: k5031 
o|contracted procedure: k5064 
o|contracted procedure: k5099 
o|contracted procedure: k5095 
o|contracted procedure: k5091 
o|contracted procedure: k5083 
o|contracted procedure: k5109 
o|contracted procedure: k5128 
o|contracted procedure: k5124 
o|contracted procedure: k5120 
o|contracted procedure: k5148 
o|contracted procedure: k5152 
o|contracted procedure: k5168 
o|contracted procedure: k5196 
o|contracted procedure: k5188 
o|contracted procedure: k5192 
o|contracted procedure: k5208 
o|contracted procedure: k5218 
o|contracted procedure: k5211 
o|contracted procedure: k5402 
o|contracted procedure: k5230 
o|contracted procedure: k5263 
o|contracted procedure: k5294 
o|contracted procedure: k5290 
o|contracted procedure: k5286 
o|contracted procedure: k5304 
o|contracted procedure: k5325 
o|contracted procedure: k5319 
o|contracted procedure: k5315 
o|contracted procedure: k5343 
o|contracted procedure: k5347 
o|contracted procedure: k5363 
o|contracted procedure: k5380 
o|contracted procedure: k5388 
o|contracted procedure: k5398 
o|contracted procedure: k5391 
o|contracted procedure: k5779 
o|contracted procedure: k5410 
o|contracted procedure: k5423 
o|contracted procedure: k5426 
o|contracted procedure: k5429 
o|contracted procedure: k5432 
o|contracted procedure: k5441 
o|contracted procedure: k5450 
o|contracted procedure: k5690 
o|contracted procedure: k5699 
o|contracted procedure: k5702 
o|contracted procedure: k5686 
o|contracted procedure: k5682 
o|contracted procedure: k5464 
o|contracted procedure: k5670 
o|contracted procedure: k5678 
o|contracted procedure: k5674 
o|contracted procedure: k5472 
o|contracted procedure: k5468 
o|contracted procedure: k5460 
o|contracted procedure: k5485 
o|contracted procedure: k5488 
o|contracted procedure: k5666 
o|contracted procedure: k5491 
o|contracted procedure: k5494 
o|contracted procedure: k5613 
o|contracted procedure: k5629 
o|contracted procedure: k5637 
o|contracted procedure: k5633 
o|contracted procedure: k5625 
o|contracted procedure: k5617 
o|contracted procedure: k5621 
o|contracted procedure: k5500 
o|contracted procedure: k5528 
o|contracted procedure: k5548 
o|contracted procedure: k5544 
o|contracted procedure: k5556 
o|contracted procedure: k5563 
o|contracted procedure: k5570 
o|contracted procedure: k5589 
o|contracted procedure: k5605 
o|contracted procedure: k5609 
o|contracted procedure: k5601 
o|contracted procedure: k5593 
o|contracted procedure: k5597 
o|contracted procedure: k5640 
o|contracted procedure: k5646 
o|contracted procedure: k5714 
o|contracted procedure: k5717 
o|contracted procedure: k5728 
o|contracted procedure: k5740 
o|contracted procedure: k5749 
o|contracted procedure: k5775 
o|contracted procedure: k5771 
o|contracted procedure: k5752 
o|contracted procedure: k5763 
o|contracted procedure: k6052 
o|contracted procedure: k6056 
o|contracted procedure: k5787 
o|contracted procedure: k5830 
o|contracted procedure: k5854 
o|contracted procedure: k5857 
o|contracted procedure: k5844 
o|contracted procedure: k5840 
o|contracted procedure: k5869 
o|contracted procedure: k5872 
o|contracted procedure: k5883 
o|contracted procedure: k5895 
o|contracted procedure: k5914 
o|contracted procedure: k5906 
o|contracted procedure: k5910 
o|contracted procedure: k5902 
o|contracted procedure: k5921 
o|contracted procedure: k5935 
o|contracted procedure: k5930 
o|contracted procedure: k6048 
o|contracted procedure: k6040 
o|contracted procedure: k6044 
o|contracted procedure: k6036 
o|contracted procedure: k6032 
o|contracted procedure: k5954 
o|contracted procedure: k5958 
o|contracted procedure: k5961 
o|contracted procedure: k5967 
o|contracted procedure: k5946 
o|contracted procedure: k5950 
o|contracted procedure: k5982 
o|contracted procedure: k5993 
o|contracted procedure: k5989 
o|contracted procedure: k5979 
o|contracted procedure: k6002 
o|contracted procedure: k6005 
o|contracted procedure: k6016 
o|contracted procedure: k6028 
o|contracted procedure: k6175 
o|contracted procedure: k6179 
o|contracted procedure: k6068 
o|contracted procedure: k6103 
o|contracted procedure: k6171 
o|contracted procedure: k6155 
o|contracted procedure: k6167 
o|contracted procedure: k6163 
o|contracted procedure: k6159 
o|contracted procedure: k6115 
o|contracted procedure: k6147 
o|contracted procedure: k6127 
o|contracted procedure: k6143 
o|contracted procedure: k6139 
o|contracted procedure: k6135 
o|contracted procedure: k6131 
o|contracted procedure: k6123 
o|contracted procedure: k6119 
o|contracted procedure: k6107 
o|contracted procedure: k6099 
o|contracted procedure: k6091 
o|contracted procedure: k6200 
o|contracted procedure: k6208 
o|contracted procedure: k6234 
o|contracted procedure: k6218 
o|contracted procedure: k6230 
o|contracted procedure: k6226 
o|contracted procedure: k6222 
o|contracted procedure: k6238 
o|contracted procedure: k6252 
o|contracted procedure: k6248 
o|contracted procedure: k6256 
o|contracted procedure: k6658 
o|contracted procedure: k6662 
o|contracted procedure: k6666 
o|contracted procedure: k6670 
o|contracted procedure: k6674 
o|contracted procedure: k6260 
o|contracted procedure: k6285 
o|contracted procedure: k6300 
o|contracted procedure: k6597 
o|contracted procedure: k6593 
o|contracted procedure: k6349 
o|contracted procedure: k6345 
o|contracted procedure: k6363 
o|contracted procedure: k6376 
o|contracted procedure: k6405 
o|contracted procedure: k6412 
o|contracted procedure: k6415 
o|contracted procedure: k6464 
o|contracted procedure: k6427 
o|contracted procedure: k6457 
o|contracted procedure: k6461 
o|contracted procedure: k6453 
o|contracted procedure: k6430 
o|contracted procedure: k6441 
o|contracted procedure: k6445 
o|contracted procedure: k6476 
o|contracted procedure: k6498 
o|contracted procedure: k6490 
o|contracted procedure: k6494 
o|contracted procedure: k6486 
o|contracted procedure: k6519 
o|contracted procedure: k6504 
o|contracted procedure: k6513 
o|contracted procedure: k6562 
o|contracted procedure: k6566 
o|contracted procedure: k6550 
o|contracted procedure: k6558 
o|contracted procedure: k6554 
o|contracted procedure: k6529 
o|contracted procedure: k6536 
o|contracted procedure: k6576 
o|contracted procedure: k6587 
o|contracted procedure: k6613 
o|contracted procedure: k6616 
o|contracted procedure: k6628 
o|contracted procedure: k6631 
o|contracted procedure: k6642 
o|contracted procedure: k6654 
o|contracted procedure: k6607 
o|contracted procedure: k6846 
o|contracted procedure: k6698 
o|contracted procedure: k6711 
o|contracted procedure: k6714 
o|contracted procedure: k6842 
o|contracted procedure: k6736 
o|contracted procedure: k6749 
o|contracted procedure: k6756 
o|contracted procedure: k6759 
o|contracted procedure: k6765 
o|contracted procedure: k6815 
o|contracted procedure: k6819 
o|contracted procedure: k6823 
o|contracted procedure: k6811 
o|contracted procedure: k6785 
o|contracted procedure: k6797 
o|contracted procedure: k6801 
o|contracted procedure: k6805 
o|contracted procedure: k6793 
o|contracted procedure: k6789 
o|contracted procedure: k6775 
o|contracted procedure: k6838 
o|contracted procedure: k6834 
o|contracted procedure: k6830 
o|contracted procedure: k6919 
o|contracted procedure: k6923 
o|contracted procedure: k6927 
o|contracted procedure: k6854 
o|contracted procedure: k6915 
o|contracted procedure: k6911 
o|contracted procedure: k6874 
o|contracted procedure: k6882 
o|contracted procedure: k6886 
o|contracted procedure: k6900 
o|contracted procedure: k6889 
o|contracted procedure: k6893 
o|contracted procedure: k6878 
o|contracted procedure: k7371 
o|contracted procedure: k7375 
o|contracted procedure: k6943 
o|contracted procedure: k6956 
o|contracted procedure: k6959 
o|contracted procedure: k7056 
o|contracted procedure: k7066 
o|contracted procedure: k7073 
o|contracted procedure: k7125 
o|contracted procedure: k7077 
o|contracted procedure: k7117 
o|contracted procedure: k7101 
o|contracted procedure: k7109 
o|contracted procedure: k7105 
o|contracted procedure: k7085 
o|contracted procedure: k7081 
o|contracted procedure: k7097 
o|contracted procedure: k7138 
o|contracted procedure: k7166 
o|contracted procedure: k7211 
o|contracted procedure: k7227 
o|contracted procedure: k7223 
o|contracted procedure: k7219 
o|contracted procedure: k7215 
o|contracted procedure: k7207 
o|contracted procedure: k6989 
o|contracted procedure: k6992 
o|contracted procedure: k7013 
o|contracted procedure: k7025 
o|contracted procedure: k7017 
o|contracted procedure: k6999 
o|contracted procedure: k7041 
o|contracted procedure: k7037 
o|contracted procedure: k7236 
o|contracted procedure: k7239 
o|contracted procedure: k7250 
o|contracted procedure: k7262 
o|contracted procedure: k7271 
o|contracted procedure: k7297 
o|contracted procedure: k7293 
o|contracted procedure: k7274 
o|contracted procedure: k7285 
o|contracted procedure: k7306 
o|contracted procedure: k7309 
o|contracted procedure: k7320 
o|contracted procedure: k7332 
o|contracted procedure: k7341 
o|contracted procedure: k7367 
o|contracted procedure: k7363 
o|contracted procedure: k7344 
o|contracted procedure: k7355 
o|contracted procedure: k7396 
o|contracted procedure: k7549 
o|contracted procedure: k7414 
o|contracted procedure: k7427 
o|contracted procedure: k7545 
o|contracted procedure: k7439 
o|contracted procedure: k7442 
o|contracted procedure: k7499 
o|contracted procedure: k7479 
o|contracted procedure: k7483 
o|contracted procedure: k7511 
o|contracted procedure: k7514 
o|contracted procedure: k7525 
o|contracted procedure: k7537 
o|contracted procedure: k7541 
o|contracted procedure: k7562 
o|contracted procedure: k7576 
o|contracted procedure: k7582 
o|contracted procedure: k7646 
o|contracted procedure: k7642 
o|contracted procedure: k7602 
o|contracted procedure: k7638 
o|contracted procedure: k7634 
o|contracted procedure: k7622 
o|contracted procedure: k7626 
o|contracted procedure: k7661 
o|contracted procedure: k7733 
o|contracted procedure: k7664 
o|contracted procedure: k7713 
o|contracted procedure: k7676 
o|contracted procedure: k7709 
o|contracted procedure: k7705 
o|contracted procedure: k7716 
o|contracted procedure: k7723 
o|contracted procedure: k7746 
o|contracted procedure: k7794 
o|contracted procedure: k7750 
o|contracted procedure: k7790 
o|contracted procedure: k7770 
o|contracted procedure: k7786 
o|contracted procedure: k7778 
o|contracted procedure: k7774 
o|contracted procedure: k7811 
o|contracted procedure: k7816 
o|contracted procedure: k7838 
o|contracted procedure: k7844 
o|contracted procedure: k7829 
o|contracted procedure: k7855 
o|contracted procedure: k7904 
o|contracted procedure: k7867 
o|contracted procedure: k7870 
o|contracted procedure: k7881 
o|contracted procedure: k7885 
o|contracted procedure: k7897 
o|contracted procedure: k7901 
o|contracted procedure: k7916 
o|contracted procedure: k7942 
o|contracted procedure: k7938 
o|contracted procedure: k7919 
o|contracted procedure: k7930 
o|contracted procedure: k7951 
o|contracted procedure: k7958 
o|contracted procedure: k7978 
o|contracted procedure: k7987 
o|contracted procedure: k8013 
o|contracted procedure: k8009 
o|contracted procedure: k7990 
o|contracted procedure: k8001 
o|contracted procedure: k8022 
o|contracted procedure: k8048 
o|contracted procedure: k8044 
o|contracted procedure: k8025 
o|contracted procedure: k8036 
o|contracted procedure: k8061 
o|contracted procedure: k8078 
o|contracted procedure: k8085 
o|contracted procedure: k8102 
o|contracted procedure: k8092 
o|contracted procedure: k8115 
o|contracted procedure: k8145 
o|contracted procedure: k8135 
o|contracted procedure: k8153 
o|contracted procedure: k8183 
o|contracted procedure: k8179 
o|contracted procedure: k8188 
o|contracted procedure: k8210 
o|contracted procedure: k8222 
o|contracted procedure: k8246 
o|contracted procedure: k8266 
o|contracted procedure: k8253 
o|contracted procedure: k8278 
o|contracted procedure: k8281 
o|contracted procedure: k8292 
o|contracted procedure: k8304 
o|contracted procedure: k8337 
o|contracted procedure: k8341 
o|contracted procedure: k8333 
o|contracted procedure: k8317 
o|contracted procedure: k8325 
o|contracted procedure: k8370 
o|contracted procedure: k8348 
o|contracted procedure: k8352 
o|contracted procedure: k8362 
o|contracted procedure: k8384 
o|contracted procedure: k8373 
o|contracted procedure: k8380 
o|contracted procedure: k8393 
o|contracted procedure: k8419 
o|contracted procedure: k8415 
o|contracted procedure: k8396 
o|contracted procedure: k8407 
o|contracted procedure: k8428 
o|contracted procedure: k8434 
o|contracted procedure: k8463 
o|inlining procedure: k8437 
o|inlining procedure: k8437 
o|contracted procedure: k8472 
o|contracted procedure: k8475 
o|contracted procedure: k8486 
o|contracted procedure: k8498 
o|contracted procedure: k8507 
o|contracted procedure: k8510 
o|contracted procedure: k8521 
o|contracted procedure: k8530 
o|inlining procedure: k8513 
o|contracted procedure: k8545 
o|contracted procedure: k8571 
o|contracted procedure: k8567 
o|contracted procedure: k8548 
o|contracted procedure: k8559 
o|contracted procedure: k8597 
o|contracted procedure: k8615 
o|contracted procedure: k8627 
o|contracted procedure: k8637 
o|contracted procedure: k8641 
o|contracted procedure: k8658 
o|contracted procedure: k8662 
o|contracted procedure: k8679 
o|contracted procedure: k8683 
o|contracted procedure: k8687 
o|contracted procedure: k8707 
o|contracted procedure: k8711 
o|contracted procedure: k8742 
o|contracted procedure: k8753 
o|contracted procedure: k8730 
o|contracted procedure: k8771 
o|contracted procedure: k8793 
o|contracted procedure: k8804 
o|contracted procedure: k8807 
o|contracted procedure: k8944 
o|contracted procedure: k8818 
o|contracted procedure: k8850 
o|contracted procedure: k8846 
o|contracted procedure: k8842 
o|contracted procedure: k8826 
o|contracted procedure: k8838 
o|contracted procedure: k8834 
o|contracted procedure: k8830 
o|contracted procedure: k8822 
o|contracted procedure: k8814 
o|contracted procedure: k8800 
o|contracted procedure: k8880 
o|contracted procedure: k8876 
o|contracted procedure: k8864 
o|contracted procedure: k8868 
o|contracted procedure: k8872 
o|contracted procedure: k8891 
o|contracted procedure: k8887 
o|contracted procedure: k8937 
o|contracted procedure: k8900 
o|contracted procedure: k8903 
o|contracted procedure: k8914 
o|contracted procedure: k8918 
o|contracted procedure: k8930 
o|contracted procedure: k8934 
o|contracted procedure: k8990 
o|contracted procedure: k8953 
o|contracted procedure: k8983 
o|contracted procedure: k8987 
o|contracted procedure: k8979 
o|contracted procedure: k8956 
o|contracted procedure: k8967 
o|contracted procedure: k8971 
o|contracted procedure: k9039 
o|contracted procedure: k9002 
o|contracted procedure: k9032 
o|contracted procedure: k9036 
o|contracted procedure: k9028 
o|contracted procedure: k9005 
o|contracted procedure: k9016 
o|contracted procedure: k9020 
o|contracted procedure: k9051 
o|contracted procedure: k9054 
o|contracted procedure: k9065 
o|contracted procedure: k9086 
o|contracted procedure: k9089 
o|contracted procedure: k9100 
o|contracted procedure: k9112 
o|contracted procedure: k9121 
o|contracted procedure: k9147 
o|contracted procedure: k9143 
o|contracted procedure: k9124 
o|contracted procedure: k9135 
o|contracted procedure: k9156 
o|contracted procedure: k9182 
o|contracted procedure: k9178 
o|contracted procedure: k9159 
o|contracted procedure: k9170 
o|contracted procedure: k9195 
o|contracted procedure: k9198 
o|contracted procedure: k9216 
o|contracted procedure: k9222 
o|contracted procedure: k9246 
o|contracted procedure: k9257 
o|contracted procedure: k925711203 
o|contracted procedure: k925711207 
o|contracted procedure: k925711211 
o|contracted procedure: k9296 
o|contracted procedure: k9301 
o|contracted procedure: k9495 
o|contracted procedure: k9343 
o|contracted procedure: k9491 
o|contracted procedure: k9347 
o|contracted procedure: k9355 
o|contracted procedure: k9351 
o|contracted procedure: k9339 
o|contracted procedure: k9389 
o|contracted procedure: k9385 
o|contracted procedure: k9435 
o|contracted procedure: k9398 
o|contracted procedure: k9428 
o|contracted procedure: k9432 
o|contracted procedure: k9424 
o|contracted procedure: k9401 
o|contracted procedure: k9412 
o|contracted procedure: k9416 
o|contracted procedure: k9484 
o|contracted procedure: k9447 
o|contracted procedure: k9477 
o|contracted procedure: k9481 
o|contracted procedure: k9473 
o|contracted procedure: k9450 
o|contracted procedure: k9461 
o|contracted procedure: k9465 
o|contracted procedure: k9508 
o|contracted procedure: k9532 
o|contracted procedure: k9528 
o|contracted procedure: k9578 
o|contracted procedure: k9541 
o|contracted procedure: k9571 
o|contracted procedure: k9575 
o|contracted procedure: k9567 
o|contracted procedure: k9544 
o|contracted procedure: k9555 
o|contracted procedure: k9559 
o|contracted procedure: k9627 
o|contracted procedure: k9590 
o|contracted procedure: k9620 
o|contracted procedure: k9624 
o|contracted procedure: k9616 
o|contracted procedure: k9593 
o|contracted procedure: k9604 
o|contracted procedure: k9608 
o|contracted procedure: k9637 
o|contracted procedure: k9640 
o|contracted procedure: k9650 
o|contracted procedure: k9653 
o|contracted procedure: k9702 
o|contracted procedure: k9665 
o|contracted procedure: k9695 
o|contracted procedure: k9699 
o|contracted procedure: k9691 
o|contracted procedure: k9668 
o|contracted procedure: k9679 
o|contracted procedure: k9683 
o|contracted procedure: k9716 
o|contracted procedure: k9727 
o|contracted procedure: k9773 
o|contracted procedure: k9736 
o|contracted procedure: k9766 
o|contracted procedure: k9770 
o|contracted procedure: k9762 
o|contracted procedure: k9739 
o|contracted procedure: k9750 
o|contracted procedure: k9754 
o|contracted procedure: k9785 
o|contracted procedure: k9811 
o|contracted procedure: k9807 
o|contracted procedure: k9788 
o|contracted procedure: k9799 
o|contracted procedure: k9820 
o|contracted procedure: k9823 
o|contracted procedure: k9834 
o|contracted procedure: k9855 
o|contracted procedure: k9858 
o|contracted procedure: k9869 
o|contracted procedure: k9890 
o|contracted procedure: k9916 
o|contracted procedure: k9912 
o|contracted procedure: k9893 
o|contracted procedure: k9904 
o|contracted procedure: k9929 
o|contracted procedure: k9932 
o|contracted procedure: k9991 
o|contracted procedure: k9945 
o|contracted procedure: k9987 
o|contracted procedure: k9953 
o|contracted procedure: k9957 
o|contracted procedure: k9949 
o|contracted procedure: k9968 
o|contracted procedure: k9983 
o|contracted procedure: k9975 
o|contracted procedure: k9979 
o|contracted procedure: k9965 
o|contracted procedure: k10004 
o|contracted procedure: k10077 
o|contracted procedure: k10009 
o|contracted procedure: k10061 
o|contracted procedure: k10022 
o|contracted procedure: k10030 
o|contracted procedure: k10034 
o|contracted procedure: k10026 
o|contracted procedure: k10045 
o|contracted procedure: k10053 
o|contracted procedure: k10042 
o|contracted procedure: k10064 
o|contracted procedure: k10097 
o|contracted procedure: k10111 
o|contracted procedure: k10128 
o|contracted procedure: k10160 
o|contracted procedure: k10156 
o|contracted procedure: k10136 
o|contracted procedure: k10152 
o|contracted procedure: k10144 
o|contracted procedure: k10148 
o|contracted procedure: k10140 
o|contracted procedure: k10132 
o|contracted procedure: k10253 
o|contracted procedure: k10176 
o|contracted procedure: k10187 
o|contracted procedure: k10183 
o|contracted procedure: k10195 
o|contracted procedure: k10198 
o|contracted procedure: k10226 
o|contracted procedure: k10222 
o|contracted procedure: k10218 
o|contracted procedure: k10214 
o|contracted procedure: k10233 
o|contracted procedure: k10241 
o|contracted procedure: k10237 
o|contracted procedure: k10244 
o|contracted procedure: k10266 
o|contracted procedure: k10288 
o|contracted procedure: k10303 
o|contracted procedure: k10315 
o|contracted procedure: k10331 
o|contracted procedure: k10321 
o|inlining procedure: k10294 
o|inlining procedure: k10294 
o|inlining procedure: k10294 
o|inlining procedure: k10294 
o|inlining procedure: k10294 
o|contracted procedure: k10338 
o|contracted procedure: k10572 
o|contracted procedure: k10568 
o|contracted procedure: k10564 
o|contracted procedure: k10560 
o|contracted procedure: k10352 
o|contracted procedure: k10538 
o|contracted procedure: k10546 
o|contracted procedure: k10542 
o|contracted procedure: k10534 
o|contracted procedure: k10360 
o|contracted procedure: k10356 
o|contracted procedure: k10348 
o|contracted procedure: k10373 
o|contracted procedure: k10376 
o|contracted procedure: k10526 
o|contracted procedure: k10379 
o|contracted procedure: k10491 
o|contracted procedure: k10507 
o|contracted procedure: k10503 
o|contracted procedure: k10495 
o|contracted procedure: k10499 
o|contracted procedure: k10391 
o|contracted procedure: k10398 
o|contracted procedure: k10406 
o|contracted procedure: k10410 
o|contracted procedure: k10426 
o|contracted procedure: k10422 
o|contracted procedure: k10441 
o|contracted procedure: k10457 
o|contracted procedure: k10453 
o|contracted procedure: k10445 
o|contracted procedure: k10449 
o|contracted procedure: k10437 
o|contracted procedure: k10464 
o|contracted procedure: k10480 
o|contracted procedure: k10476 
o|contracted procedure: k10468 
o|contracted procedure: k10472 
o|contracted procedure: k10487 
o|contracted procedure: k10519 
o|contracted procedure: k10587 
o|contracted procedure: k10590 
o|contracted procedure: k10601 
o|contracted procedure: k10613 
o|contracted procedure: k10630 
o|simplifications: ((let . 106)) 
o|removed binding forms: 890 
o|inlining procedure: k3519 
o|inlining procedure: k3519 
o|inlining procedure: k3561 
o|inlining procedure: k3561 
o|inlining procedure: k3799 
o|inlining procedure: k3799 
o|inlining procedure: k4062 
o|inlining procedure: k4062 
o|inlining procedure: k4097 
o|inlining procedure: k4097 
o|inlining procedure: k4547 
o|inlining procedure: k4547 
o|inlining procedure: k4605 
o|inlining procedure: k4605 
o|inlining procedure: k4605 
o|inlining procedure: k5720 
o|inlining procedure: k5720 
o|inlining procedure: k5755 
o|inlining procedure: k5755 
o|inlining procedure: k5875 
o|inlining procedure: k5875 
o|inlining procedure: k6008 
o|inlining procedure: k6008 
o|inlining procedure: k6634 
o|inlining procedure: k6634 
o|inlining procedure: k7242 
o|inlining procedure: k7242 
o|inlining procedure: k7277 
o|inlining procedure: k7277 
o|inlining procedure: k7312 
o|inlining procedure: k7312 
o|inlining procedure: k7347 
o|inlining procedure: k7347 
o|inlining procedure: k7517 
o|inlining procedure: k7517 
o|inlining procedure: k7922 
o|inlining procedure: k7922 
o|inlining procedure: k7993 
o|inlining procedure: k7993 
o|inlining procedure: k8028 
o|inlining procedure: k8028 
o|inlining procedure: k8284 
o|inlining procedure: k8284 
o|inlining procedure: k8399 
o|inlining procedure: k8399 
o|inlining procedure: k8478 
o|inlining procedure: k8478 
o|inlining procedure: k8551 
o|inlining procedure: k8551 
o|inlining procedure: k9057 
o|inlining procedure: k9057 
o|inlining procedure: k9092 
o|inlining procedure: k9092 
o|inlining procedure: k9127 
o|inlining procedure: k9127 
o|inlining procedure: k9162 
o|inlining procedure: k9162 
o|inlining procedure: k9791 
o|inlining procedure: k9791 
o|inlining procedure: k9826 
o|inlining procedure: k9826 
o|inlining procedure: k9861 
o|inlining procedure: k9861 
o|inlining procedure: k9896 
o|inlining procedure: k9896 
o|substituted constant variable: r1029511927 
o|substituted constant variable: r1029511928 
o|substituted constant variable: r1029511929 
o|substituted constant variable: r1029511930 
o|inlining procedure: k10430 
o|inlining procedure: k10430 
o|inlining procedure: k10593 
o|inlining procedure: k10593 
o|simplifications: ((let . 1)) 
o|replaced variables: 239 
o|removed binding forms: 2 
o|removed conditional forms: 4 
o|substituted constant variable: r352011935 
o|substituted constant variable: r352011935 
o|replaced variables: 1 
o|removed binding forms: 231 
o|contracted procedure: k3721 
o|contracted procedure: k4078 
o|replaced variables: 126 
o|removed binding forms: 5 
o|removed binding forms: 32 
o|direct leaf routine/allocation: g17841793 0 
o|direct leaf routine/allocation: g16711680 17 
o|direct leaf routine/allocation: g12341243 10 
o|direct leaf routine/allocation: g719729 48 
o|contracted procedure: "(chicken-syntax.scm:921) k5736" 
o|contracted procedure: "(chicken-syntax.scm:880) k5891" 
o|contracted procedure: "(chicken-syntax.scm:518) k7533" 
o|contracted procedure: "(chicken-syntax.scm:297) k8926" 
o|removed binding forms: 4 
o|customizable procedures: (g3140 map-loop2551 k10418 mapslots61 k10207 k10015 k10038 k9961 map-loop172189 g205214 map-loop199217 g233242 map-loop227245 map-loop278295 k9742 map-loop257302 loop333 k9671 map-loop314336 k9596 map-loop348372 k9547 map-loop384408 k9453 map-loop420444 k9404 map-loop456480 loop505 map-loop539556 map-loop566583 g599608 map-loop593611 g627636 map-loop621639 k9008 map-loop651670 k8959 map-loop682701 k8906 map-loop713737 for-each-loop775787 map-loop819836 loop844 g863872 map-loop857875 loop885 map-loop943961 k8310 fold895 g914923 map-loop908926 fold977 map-loop9961013 map-loop10221039 foldl10741078 map-loop10511090 k7873 map-loop10991118 quotify-proc11431145 k7667 k7679 fold1169 map-loop12281249 expand1204 map-loop13051322 g13411350 map-loop13351353 map-loop13631380 g13981407 map-loop13921410 recur1275 make-if-tree1269 prefix-sym1329 recur1290 loop1458 map-loop14881509 genvars1480 k6379 build1545 k6433 map-loop15681587 loop1482 map-loop16961713 k5818 k5821 k5824 map-loop16651686 map-loop17491766 map-loop17781796 k5497 k5503 k5510 k5518 loop1803 loop1847 loop1877 k4818 k4842 loop19761997 loop19762008 g20572066 map-loop20512078 k4487 k4364 k4222 loop21372158 loop21372174 map-loop21852203 map-loop22132231 k3885 loop2258 loop22272 map-loop22792304 k3766 k3701 map-loop23192343 g23802389 map-loop23742396) 
o|calls to known targets: 299 
o|identified direct recursive calls: f_3833 1 
o|identified direct recursive calls: f_3637 1 
o|identified direct recursive calls: f_4051 2 
o|identified direct recursive calls: f_4086 2 
o|identified direct recursive calls: f_5709 2 
o|identified direct recursive calls: f_5744 2 
o|identified direct recursive calls: f_5864 2 
o|identified direct recursive calls: f_7266 2 
o|identified direct recursive calls: f_7336 2 
o|identified direct recursive calls: f_7506 2 
o|identified direct recursive calls: f_7571 2 
o|identified direct recursive calls: f_7911 2 
o|identified direct recursive calls: f_7982 2 
o|identified direct recursive calls: f_8017 2 
o|identified direct recursive calls: f_8073 1 
o|identified direct recursive calls: f_8388 2 
o|identified direct recursive calls: f_8502 1 
o|identified direct recursive calls: f_8540 2 
o|identified direct recursive calls: f_9116 2 
o|identified direct recursive calls: f_9151 2 
o|identified direct recursive calls: f_9711 1 
o|identified direct recursive calls: f_9780 2 
o|identified direct recursive calls: f_9885 2 
o|fast box initializations: 70 
o|dropping unused closure argument: f_7144 
*/
/* end of file */
