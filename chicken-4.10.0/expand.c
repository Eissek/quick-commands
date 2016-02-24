/* Generated from expand.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:03
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: expand.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file expand.c
   unit: expand
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[359];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,14),40,108,111,111,107,117,112,32,115,101,50,52,55,41,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,26),40,109,97,99,114,111,45,97,108,105,97,115,32,118,97,114,50,54,50,32,115,101,50,54,51,41,0,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,51,51,49,32,105,51,51,51,41};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,11),40,119,97,108,107,32,120,51,48,50,41,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,21),40,115,116,114,105,112,45,115,121,110,116,97,120,32,101,120,112,50,57,57,41,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,52,49,56,32,103,52,51,48,52,52,48,32,103,52,51,49,52,52,49,41,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,34),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,56,49,32,103,51,56,56,52,48,57,32,103,51,56,57,52,49,48,41,0,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,51,53,53,32,103,51,54,55,51,55,51,41,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,43),40,35,35,115,121,115,35,101,120,116,101,110,100,45,115,101,32,115,101,51,52,53,32,118,97,114,115,51,52,54,32,46,32,116,109,112,51,52,52,51,52,55,41,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,11),40,103,52,54,53,32,97,52,54,55,41,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,115,101,52,54,57,41,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,49,32,115,121,109,52,53,52,41,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,30),40,35,35,115,121,115,35,103,108,111,98,97,108,105,122,101,32,115,121,109,52,53,49,32,115,101,52,53,50,41,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,43),40,35,35,115,121,115,35,101,110,115,117,114,101,45,116,114,97,110,115,102,111,114,109,101,114,32,116,52,56,54,32,46,32,116,109,112,52,56,53,52,56,55,41,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,6),40,103,53,48,57,41,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,61),40,35,35,115,121,115,35,101,120,116,101,110,100,45,109,97,99,114,111,45,101,110,118,105,114,111,110,109,101,110,116,32,110,97,109,101,52,57,56,32,115,101,52,57,57,32,116,114,97,110,115,102,111,114,109,101,114,53,48,48,41,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,32),40,35,35,115,121,115,35,99,111,112,121,45,109,97,99,114,111,32,111,108,100,53,49,55,32,110,101,119,53,49,56,41};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,33),40,35,35,115,121,115,35,109,97,99,114,111,63,32,115,121,109,53,50,54,32,46,32,116,109,112,53,50,53,53,50,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,109,101,53,52,49,41,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,32),40,35,35,115,121,115,35,117,110,114,101,103,105,115,116,101,114,45,109,97,99,114,111,32,110,97,109,101,53,51,57,41};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,117,110,100,101,102,105,110,101,45,109,97,99,114,111,33,32,110,97,109,101,53,52,57,41,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,12),40,99,111,112,121,32,112,115,53,55,53,41,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,7),40,97,52,51,51,48,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,13),40,97,52,51,50,52,32,101,120,53,55,50,41,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,17),40,102,95,52,52,53,57,32,105,110,112,117,116,53,56,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,7),40,97,52,52,54,52,41,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,7),40,97,52,52,54,57,41,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,7),40,97,52,52,55,53,41,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,10),40,116,109,112,49,51,48,57,57,41,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,7),40,97,52,52,56,56,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,21),40,116,109,112,50,51,49,48,48,32,97,114,103,115,53,54,54,53,57,56,41,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,7),40,97,52,52,50,53,41,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,15),40,97,52,51,49,56,32,107,53,54,53,53,55,49,41,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,52),40,99,97,108,108,45,104,97,110,100,108,101,114,32,110,97,109,101,53,53,54,32,104,97,110,100,108,101,114,53,53,55,32,101,120,112,53,53,56,32,115,101,53,53,57,32,99,115,53,54,48,41,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,31),40,101,120,112,97,110,100,32,104,101,97,100,54,48,49,32,101,120,112,54,48,50,32,109,100,101,102,54,48,51,41,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,54,54,53,32,103,54,55,55,54,56,51,41,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,54,51,56,32,103,54,53,48,54,53,55,41,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,12),40,103,54,57,56,32,99,115,55,48,48,41,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,101,120,112,54,49,50,41,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,37),40,35,35,115,121,115,35,101,120,112,97,110,100,45,48,32,101,120,112,53,53,49,32,100,115,101,53,53,50,32,99,115,63,53,53,51,41,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,7),40,97,52,56,49,55,41,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,32),40,97,52,56,50,51,32,101,120,112,50,55,51,51,55,51,52,55,51,55,32,109,55,51,53,55,51,54,55,51,56,41};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,101,120,112,55,51,50,41,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,27),40,101,120,112,97,110,100,32,101,120,112,55,49,57,32,46,32,116,109,112,55,49,56,55,50,48,41,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,32,108,108,105,115,116,55,52,54,41,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,38),40,35,35,115,121,115,35,101,120,116,101,110,100,101,100,45,108,97,109,98,100,97,45,108,105,115,116,63,32,108,108,105,115,116,55,52,52,41,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,12),40,101,114,114,32,109,115,103,55,54,57,41,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,11),40,103,56,48,48,32,107,56,49,49,41,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,55,57,52,32,103,56,48,54,56,50,51,41,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,44),40,108,111,111,112,32,109,111,100,101,55,55,57,32,114,101,113,55,56,48,32,111,112,116,55,56,49,32,107,101,121,55,56,50,32,108,108,105,115,116,55,56,51,41,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,67),40,35,35,115,121,115,35,101,120,112,97,110,100,45,101,120,116,101,110,100,101,100,45,108,97,109,98,100,97,45,108,105,115,116,32,108,108,105,115,116,48,55,54,51,32,98,111,100,121,55,54,52,32,101,114,114,104,55,54,53,32,115,101,55,54,54,41,0,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,28),40,35,35,115,121,115,35,100,101,102,106,97,109,45,101,114,114,111,114,32,102,111,114,109,56,57,49,41,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,57,51,49,32,103,57,52,51,57,53,54,32,103,57,52,52,57,53,55,41,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,57,48,50,32,103,57,49,52,57,50,48,41,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,31),40,97,53,53,50,51,32,118,97,114,115,56,57,53,32,97,114,103,99,56,57,54,32,114,101,115,116,56,57,55,41,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,60),40,35,35,115,121,115,35,101,120,112,97,110,100,45,109,117,108,116,105,112,108,101,45,118,97,108,117,101,115,45,97,115,115,105,103,110,109,101,110,116,32,102,111,114,109,97,108,115,56,57,51,32,101,120,112,114,56,57,52,41,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,12),40,99,111,109,112,32,105,100,57,57,56,41,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,98,111,100,121,50,49,48,49,54,32,101,120,112,115,49,48,49,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,34),40,109,97,112,45,108,111,111,112,49,49,49,55,32,103,49,49,50,57,49,49,51,55,32,103,49,49,51,48,49,49,51,56,41,0,0,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,34),40,109,97,112,45,108,111,111,112,49,48,56,49,32,103,49,48,57,51,49,49,48,54,32,103,49,48,57,52,49,49,48,55,41,0,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,48,51,51,32,103,49,48,52,53,49,48,55,51,41};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,25),40,97,54,48,55,55,32,97,49,48,54,55,32,95,49,48,54,56,32,95,49,48,54,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,31),40,102,111,108,100,108,49,48,53,54,32,103,49,48,53,55,49,48,54,49,32,103,49,48,53,53,49,48,54,50,41,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,53),40,102,105,110,105,32,118,97,114,115,49,48,48,57,32,118,97,108,115,49,48,49,48,32,109,118,97,114,115,49,48,49,49,32,109,118,97,108,115,49,48,49,50,32,98,111,100,121,49,48,49,51,41,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,49,54,55,32,103,49,49,55,57,49,49,56,53,41};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,33),40,108,111,111,112,32,98,111,100,121,49,49,53,53,32,100,101,102,115,49,49,53,54,32,100,111,110,101,49,49,53,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,60),40,102,105,110,105,47,115,121,110,116,97,120,32,118,97,114,115,49,49,52,57,32,118,97,108,115,49,49,53,48,32,109,118,97,114,115,49,49,53,49,32,109,118,97,108,115,49,49,53,50,32,98,111,100,121,49,49,53,51,41,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,50,32,120,49,50,50,50,41,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,53),40,108,111,111,112,32,98,111,100,121,49,50,48,53,32,118,97,114,115,49,50,48,54,32,118,97,108,115,49,50,48,55,32,109,118,97,114,115,49,50,48,56,32,109,118,97,108,115,49,50,48,57,41,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,17),40,101,120,112,97,110,100,32,98,111,100,121,49,50,48,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,45),40,35,35,115,121,115,35,99,97,110,111,110,105,99,97,108,105,122,101,45,98,111,100,121,32,98,111,100,121,57,56,49,32,46,32,116,109,112,57,56,48,57,56,50,41,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,7),40,103,49,50,54,55,41,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,19),40,109,119,97,108,107,32,120,49,50,53,53,32,112,49,50,53,54,41,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,43),40,109,97,116,99,104,45,101,120,112,114,101,115,115,105,111,110,32,101,120,112,49,50,52,57,32,112,97,116,49,50,53,48,32,118,97,114,115,49,50,53,49,41,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,24),40,108,111,111,112,32,104,101,97,100,49,50,55,57,32,98,111,100,121,49,50,56,48,41};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,54),40,35,35,115,121,115,35,101,120,112,97,110,100,45,99,117,114,114,105,101,100,45,100,101,102,105,110,101,32,104,101,97,100,49,50,55,52,32,98,111,100,121,49,50,55,53,32,115,101,49,50,55,54,41,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,25),40,115,121,110,116,97,120,45,101,114,114,111,114,32,46,32,97,114,103,115,49,50,57,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,16),40,111,117,116,115,116,114,32,115,116,114,49,51,49,51,41};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,108,115,116,49,51,51,50,41,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,32,100,101,102,115,49,51,48,50,41,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,99,120,49,51,49,53,41,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,44),40,35,35,115,121,115,35,115,121,110,116,97,120,45,101,114,114,111,114,47,99,111,110,116,101,120,116,32,109,115,103,49,50,57,55,32,97,114,103,49,50,57,56,41,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,39),40,35,35,115,121,115,35,115,121,110,116,97,120,45,114,117,108,101,115,45,109,105,115,109,97,116,99,104,32,105,110,112,117,116,49,51,52,53,41,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,7),40,103,49,51,53,56,41,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,26),40,103,101,116,45,108,105,110,101,45,110,117,109,98,101,114,32,115,101,120,112,49,51,52,55,41,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,29),40,116,101,115,116,32,120,49,51,56,55,32,112,114,101,100,49,51,56,56,32,109,115,103,49,51,56,57,41,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,13),40,101,114,114,32,109,115,103,49,51,57,48,41,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,120,49,51,57,56,41,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,20),40,108,97,109,98,100,97,45,108,105,115,116,63,32,120,49,51,57,51,41,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,20),40,112,114,111,112,101,114,45,108,105,115,116,63,32,120,49,52,49,48,41,0,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,24),40,100,111,108,111,111,112,49,52,51,54,32,120,49,52,51,56,32,110,49,52,51,57,41};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,13),40,97,55,51,51,55,32,121,49,52,53,50,41,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,18),40,119,97,108,107,32,120,49,52,50,50,32,112,49,52,50,51,41,0,0,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,57),40,35,35,115,121,115,35,99,104,101,99,107,45,115,121,110,116,97,120,32,105,100,49,51,54,57,32,101,120,112,49,51,55,48,32,112,97,116,49,51,55,49,32,46,32,116,109,112,49,51,54,56,49,51,55,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,13),40,103,49,52,57,48,32,97,49,52,57,50,41,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,16),40,114,101,110,97,109,101,32,115,121,109,49,52,55,54,41};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,24),40,100,111,108,111,111,112,49,53,52,51,32,105,49,53,52,53,32,102,49,53,52,54,41};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,7),40,103,49,53,57,56,41,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,7),40,103,49,54,48,55,41,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,23),40,99,111,109,112,97,114,101,32,115,49,49,53,51,49,32,115,50,49,53,51,50,41,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,20),40,97,115,115,113,45,114,101,118,101,114,115,101,32,108,49,54,50,49,41,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,23),40,109,105,114,114,111,114,45,114,101,110,97,109,101,32,115,121,109,49,54,50,54,41,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,31),40,97,55,52,53,51,32,102,111,114,109,49,52,54,53,32,115,101,49,52,54,54,32,100,115,101,49,52,54,55,41,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,59),40,109,97,107,101,45,101,114,47,105,114,45,116,114,97,110,115,102,111,114,109,101,114,32,104,97,110,100,108,101,114,49,52,54,51,32,101,120,112,108,105,99,105,116,45,114,101,110,97,109,105,110,103,63,49,52,54,52,41,0,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,34),40,101,114,45,109,97,99,114,111,45,116,114,97,110,115,102,111,114,109,101,114,32,104,97,110,100,108,101,114,49,54,55,50,41,0,0,0,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,34),40,105,114,45,109,97,99,114,111,45,116,114,97,110,115,102,111,114,109,101,114,32,104,97,110,100,108,101,114,49,54,55,52,41,0,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,33),40,108,111,111,112,32,98,115,49,56,50,50,32,115,101,101,110,49,56,50,51,32,119,97,114,110,101,100,49,56,50,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,59),40,99,104,101,99,107,45,102,111,114,45,109,117,108,116,105,112,108,101,45,98,105,110,100,105,110,103,115,32,98,105,110,100,105,110,103,115,49,56,49,56,32,102,111,114,109,49,56,49,57,32,108,111,99,49,56,50,48,41,0,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,14),40,102,95,56,51,48,50,32,120,50,52,57,53,41,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,53,48,50,32,103,50,53,49,52,50,53,50,48,41};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,18),40,102,95,56,51,48,56,32,114,117,108,101,115,50,52,57,54,41,0,0,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,13),40,97,56,52,51,55,32,120,50,53,51,52,41,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,17),40,102,95,56,52,48,48,32,114,117,108,101,50,53,50,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,48),40,102,95,56,52,54,54,32,105,110,112,117,116,50,53,51,53,32,112,97,116,116,101,114,110,50,53,51,54,32,115,101,101,110,45,115,101,103,109,101,110,116,63,50,53,51,55,41};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,30),40,102,95,56,54,52,55,32,105,110,112,117,116,50,53,55,53,32,112,97,116,116,101,114,110,50,53,55,54,41,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,13),40,97,56,56,51,50,32,120,50,53,57,55,41,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,57),40,102,95,56,55,55,52,32,112,97,116,116,101,114,110,50,53,56,52,32,112,97,116,104,50,53,56,53,32,109,97,112,105,116,50,53,56,54,32,115,101,101,110,45,115,101,103,109,101,110,116,63,50,53,56,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,26),40,100,111,108,111,111,112,50,54,51,54,32,100,50,54,51,56,32,103,101,110,50,54,51,57,41,0,0,0,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,37),40,102,95,56,57,49,52,32,116,101,109,112,108,97,116,101,50,54,49,51,32,100,105,109,50,54,49,52,32,101,110,118,50,54,49,53,41,0,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,55),40,102,95,57,49,48,54,32,112,97,116,116,101,114,110,50,54,53,54,32,100,105,109,50,54,53,55,32,118,97,114,115,50,54,53,56,32,115,101,101,110,45,115,101,103,109,101,110,116,63,50,54,53,57,41,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,46),40,102,95,57,49,56,51,32,116,101,109,112,108,97,116,101,50,54,54,52,32,100,105,109,50,54,54,53,32,101,110,118,50,54,54,54,32,102,114,101,101,50,54,54,55,41,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,32),40,102,95,57,50,55,50,32,112,50,54,55,53,32,115,101,101,110,45,115,101,103,109,101,110,116,63,50,54,55,54,41};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,20),40,102,95,57,51,48,48,32,112,97,116,116,101,114,110,50,54,56,50,41,0,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,20),40,102,95,57,51,50,52,32,112,97,116,116,101,114,110,50,54,56,53,41,0,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,112,97,116,116,101,114,110,50,54,56,56,41,0,0,0,0,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,20),40,102,95,57,51,52,52,32,112,97,116,116,101,114,110,50,54,56,54,41,0,0,0,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,79),40,35,35,115,121,115,35,112,114,111,99,101,115,115,45,115,121,110,116,97,120,45,114,117,108,101,115,32,101,108,108,105,112,115,105,115,50,52,51,56,32,114,117,108,101,115,50,52,51,57,32,115,117,98,107,101,121,119,111,114,100,115,50,52,52,48,32,114,50,52,52,49,32,99,50,52,52,50,41,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,109,101,50,55,53,57,41,0,0,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,109,97,99,114,111,45,115,117,98,115,101,116,32,109,101,48,50,55,53,48,32,46,32,116,109,112,50,55,52,57,50,55,53,49,41,0,0,0,0,0,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,16),40,103,50,55,56,49,32,115,100,101,102,50,55,57,48,41};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,55,56,48,32,103,50,55,56,55,50,55,57,50,41,0,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,52),40,35,35,115,121,115,35,102,105,120,117,112,45,109,97,99,114,111,45,101,110,118,105,114,111,110,109,101,110,116,32,115,101,50,55,55,48,32,46,32,116,109,112,50,55,54,57,50,55,55,49,41,0,0,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,27),40,97,57,53,51,49,32,101,120,112,50,52,50,54,32,114,50,52,50,55,32,99,50,52,50,56,41,0,0,0,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,25),40,97,57,53,54,55,32,120,50,52,50,48,32,114,50,52,50,49,32,99,50,52,50,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,25),40,97,57,53,57,52,32,120,50,52,48,57,32,114,50,52,49,48,32,99,50,52,49,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,25),40,97,57,54,50,52,32,120,50,51,55,49,32,114,50,51,55,50,32,99,50,51,55,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,25),40,97,57,56,48,52,32,120,50,51,54,53,32,114,50,51,54,54,32,99,50,51,54,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,25),40,97,57,56,51,48,32,120,50,51,53,56,32,114,50,51,53,57,32,99,50,51,54,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,25),40,97,57,56,52,51,32,120,50,51,53,49,32,114,50,51,53,50,32,99,50,51,53,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,11),40,101,114,114,32,120,50,50,55,53,41,0,0,0,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,13),40,116,101,115,116,32,102,120,50,50,55,54,41,0,0,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,51,48,57,32,103,50,51,50,49,50,51,50,56,41};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,16),40,101,120,112,97,110,100,32,99,108,115,50,51,48,50,41};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,28),40,97,57,56,53,54,32,102,111,114,109,50,50,54,53,32,114,50,50,54,54,32,99,50,50,54,55,41,0,0,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,29),40,97,49,48,49,52,54,32,102,111,114,109,50,50,53,56,32,114,50,50,53,57,32,99,50,50,54,48,41,0,0,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,29),40,97,49,48,49,54,55,32,102,111,114,109,50,50,53,49,32,114,50,50,53,50,32,99,50,50,53,51,41,0,0,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,18),40,119,97,108,107,32,120,50,49,55,54,32,110,50,49,55,55,41,0,0,0,0,0,0};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,19),40,119,97,108,107,49,32,120,50,49,55,56,32,110,50,49,55,57,41,0,0,0,0,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,15),40,103,50,50,50,57,32,101,110,118,50,50,51,49,41,0};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,15),40,103,50,50,51,54,32,101,110,118,50,50,51,56,41,0};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,16),40,115,105,109,112,108,105,102,121,32,120,50,50,50,50,41};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,29),40,97,49,48,50,48,48,32,102,111,114,109,50,49,54,55,32,114,50,49,54,56,32,99,50,49,54,57,41,0,0,0};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,49,52,49,32,103,50,49,53,51,50,49,54,48,41};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,49,48,55,32,103,50,49,49,57,50,49,50,54,41};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,29),40,97,49,48,52,57,49,32,102,111,114,109,50,48,57,53,32,114,50,48,57,54,32,99,50,48,57,55,41,0,0,0};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,15),40,101,120,112,97,110,100,32,98,115,50,48,56,54,41,0};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,29),40,97,49,48,54,56,51,32,102,111,114,109,50,48,56,48,32,114,50,48,56,49,32,99,50,48,56,50,41,0,0,0};
static C_char C_TLS li158[] C_aligned={C_lihdr(0,0,7),40,103,50,48,52,56,41,0};
static C_char C_TLS li159[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,48,52,50,32,103,50,48,53,52,50,48,54,52,41};
static C_char C_TLS li160[] C_aligned={C_lihdr(0,0,30),40,101,120,112,97,110,100,32,99,108,97,117,115,101,115,50,48,49,57,32,101,108,115,101,63,50,48,50,48,41,0,0};
static C_char C_TLS li161[] C_aligned={C_lihdr(0,0,29),40,97,49,48,55,51,52,32,102,111,114,109,50,48,48,53,32,114,50,48,48,54,32,99,50,48,48,55,41,0,0,0};
static C_char C_TLS li162[] C_aligned={C_lihdr(0,0,30),40,101,120,112,97,110,100,32,99,108,97,117,115,101,115,49,57,50,52,32,101,108,115,101,63,49,57,50,53,41,0,0};
static C_char C_TLS li163[] C_aligned={C_lihdr(0,0,29),40,97,49,48,57,53,55,32,102,111,114,109,49,57,49,54,32,114,49,57,49,55,32,99,49,57,49,56,41,0,0,0};
static C_char C_TLS li164[] C_aligned={C_lihdr(0,0,29),40,97,49,49,51,50,57,32,102,111,114,109,49,57,48,54,32,114,49,57,48,55,32,99,49,57,48,56,41,0,0,0};
static C_char C_TLS li165[] C_aligned={C_lihdr(0,0,29),40,97,49,49,51,56,49,32,102,111,114,109,49,56,57,55,32,114,49,56,57,56,32,99,49,56,57,57,41,0,0,0};
static C_char C_TLS li166[] C_aligned={C_lihdr(0,0,26),40,97,49,49,52,49,56,32,120,49,56,56,49,32,114,49,56,56,50,32,99,49,56,56,51,41,0,0,0,0,0,0};
static C_char C_TLS li167[] C_aligned={C_lihdr(0,0,26),40,97,49,49,52,54,50,32,120,49,56,55,51,32,114,49,56,55,52,32,99,49,56,55,53,41,0,0,0,0,0,0};
static C_char C_TLS li168[] C_aligned={C_lihdr(0,0,26),40,97,49,49,52,56,52,32,120,49,56,54,53,32,114,49,56,54,54,32,99,49,56,54,55,41,0,0,0,0,0,0};
static C_char C_TLS li169[] C_aligned={C_lihdr(0,0,26),40,97,49,49,53,48,54,32,120,49,56,53,55,32,114,49,56,53,56,32,99,49,56,53,57,41,0,0,0,0,0,0};
static C_char C_TLS li170[] C_aligned={C_lihdr(0,0,26),40,97,49,49,53,50,56,32,120,49,56,52,57,32,114,49,56,53,48,32,99,49,56,53,49,41,0,0,0,0,0,0};
static C_char C_TLS li171[] C_aligned={C_lihdr(0,0,26),40,97,49,49,53,53,48,32,120,49,56,51,53,32,114,49,56,51,54,32,99,49,56,51,55,41,0,0,0,0,0,0};
static C_char C_TLS li172[] C_aligned={C_lihdr(0,0,29),40,97,49,49,54,48,50,32,102,111,114,109,49,55,56,55,32,114,49,55,56,56,32,99,49,55,56,57,41,0,0,0};
static C_char C_TLS li173[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,32,102,111,114,109,49,55,53,57,41,0};
static C_char C_TLS li174[] C_aligned={C_lihdr(0,0,26),40,97,49,49,55,48,53,32,120,49,55,53,53,32,114,49,55,53,54,32,99,49,55,53,55,41,0,0,0,0,0,0};
static C_char C_TLS li175[] C_aligned={C_lihdr(0,0,26),40,97,49,49,56,50,52,32,120,49,55,52,56,32,114,49,55,52,57,32,99,49,55,53,48,41,0,0,0,0,0,0};
static C_char C_TLS li176[] C_aligned={C_lihdr(0,0,26),40,97,49,49,56,52,49,32,120,49,55,52,49,32,114,49,55,52,50,32,99,49,55,52,51,41,0,0,0,0,0,0};
static C_char C_TLS li177[] C_aligned={C_lihdr(0,0,26),40,97,49,49,56,53,56,32,120,49,55,51,52,32,114,49,55,51,53,32,99,49,55,51,54,41,0,0,0,0,0,0};
static C_char C_TLS li178[] C_aligned={C_lihdr(0,0,26),40,97,49,49,56,55,53,32,120,49,55,50,55,32,114,49,55,50,56,32,99,49,55,50,57,41,0,0,0,0,0,0};
static C_char C_TLS li179[] C_aligned={C_lihdr(0,0,26),40,97,49,49,56,57,50,32,120,49,55,50,48,32,114,49,55,50,49,32,99,49,55,50,50,41,0,0,0,0,0,0};
static C_char C_TLS li180[] C_aligned={C_lihdr(0,0,50),40,97,49,49,57,48,57,32,103,49,55,48,56,49,55,48,57,49,55,49,52,32,103,49,55,49,48,49,55,49,49,49,55,49,53,32,103,49,55,49,50,49,55,49,51,49,55,49,54,41,0,0,0,0,0,0};
static C_char C_TLS li181[] C_aligned={C_lihdr(0,0,50),40,97,49,49,57,49,57,32,103,49,54,57,52,49,54,57,53,49,55,48,48,32,103,49,54,57,54,49,54,57,55,49,55,48,49,32,103,49,54,57,56,49,54,57,57,49,55,48,50,41,0,0,0,0,0,0};
static C_char C_TLS li182[] C_aligned={C_lihdr(0,0,50),40,97,49,49,57,50,57,32,103,49,54,56,48,49,54,56,49,49,54,56,54,32,103,49,54,56,50,49,54,56,51,49,54,56,55,32,103,49,54,56,52,49,54,56,53,49,54,56,56,41,0,0,0,0,0,0};
static C_char C_TLS li183[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_5891)
static void C_ccall f_5891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7059)
static void C_fcall f_7059(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10759)
static void C_ccall f_10759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7051)
static void C_ccall f_7051(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10756)
static void C_ccall f_10756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10753)
static void C_ccall f_10753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10750)
static void C_ccall f_10750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9998)
static void C_ccall f_9998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7045)
static void C_ccall f_7045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7047)
static void C_ccall f_7047(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5693)
static void C_ccall f_5693(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5693)
static void C_ccall f_5693r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7038)
static void C_ccall f_7038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5697)
static void C_ccall f_5697(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7031)
static void C_ccall f_7031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9255)
static void C_ccall f_9255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5684)
static void C_ccall f_5684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7024)
static void C_ccall f_7024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7020)
static void C_fcall f_7020(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4432)
static void C_ccall f_4432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4428)
static void C_fcall f_4428(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4426)
static void C_ccall f_4426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9181)
static void C_ccall f_9181(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9183)
static void C_ccall f_9183(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_7015)
static void C_ccall f_7015(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9236)
static void C_ccall f_9236(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5881)
static void C_ccall f_5881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5887)
static void C_ccall f_5887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7003)
static void C_ccall f_7003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7008)
static void C_fcall f_7008(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10533)
static void C_ccall f_10533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9225)
static void C_ccall f_9225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5655)
static void C_fcall f_5655(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9971)
static void C_ccall f_9971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5824)
static void C_ccall f_5824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10554)
static void C_fcall f_10554(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5812)
static void C_ccall f_5812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5816)
static void C_ccall f_5816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4502)
static void C_fcall f_4502(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4500)
static void C_ccall f_4500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11908)
static void C_ccall f_11908(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7736)
static void C_fcall f_7736(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8730)
static void C_ccall f_8730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9166)
static void C_ccall f_9166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7728)
static void C_fcall f_7728(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11930)
static void C_ccall f_11930(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_11294)
static void C_ccall f_11294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10420)
static void C_fcall f_10420(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4387)
static void C_ccall f_4387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10416)
static void C_ccall f_10416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9956)
static void C_ccall f_9956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4376)
static void C_fcall f_4376(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11278)
static void C_ccall f_11278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5805)
static void C_fcall f_5805(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11266)
static void C_ccall f_11266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4353)
static void C_ccall f_4353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4359)
static void C_fcall f_4359(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6126)
static void C_ccall f_6126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6128)
static void C_fcall f_6128(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7617)
static void C_ccall f_7617(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6123)
static void C_ccall f_6123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9272)
static void C_ccall f_9272(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9270)
static void C_ccall f_9270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9279)
static void C_ccall f_9279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7600)
static void C_ccall f_7600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11576)
static void C_ccall f_11576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10723)
static void C_ccall f_10723(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6104)
static void C_fcall f_6104(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6102)
static void C_ccall f_6102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10490)
static void C_ccall f_10490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11563)
static void C_fcall f_11563(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11566)
static void C_ccall f_11566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9936)
static void C_ccall f_9936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10492)
static void C_ccall f_10492(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10496)
static void C_ccall f_10496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7918)
static void C_ccall f_7918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7914)
static void C_ccall f_7914(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11536)
static void C_ccall f_11536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4055)
static void C_fcall f_4055(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5569)
static void C_ccall f_5569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11533)
static void C_ccall f_11533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11529)
static void C_ccall f_11529(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6743)
static void C_fcall f_6743(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11527)
static void C_ccall f_11527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5550)
static void C_ccall f_5550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5554)
static void C_ccall f_5554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10479)
static void C_ccall f_10479(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5351)
static void C_ccall f_5351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10786)
static void C_ccall f_10786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6767)
static void C_ccall f_6767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11511)
static void C_ccall f_11511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11514)
static void C_ccall f_11514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9361)
static void C_ccall f_9361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11507)
static void C_ccall f_11507(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6763)
static void C_ccall f_6763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8291)
static void C_ccall f_8291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8295)
static void C_ccall f_8295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11505)
static void C_ccall f_11505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9331)
static void C_ccall f_9331(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9338)
static void C_ccall f_9338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8147)
static void C_ccall f_8147(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6491)
static void C_ccall f_6491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8141)
static void C_ccall f_8141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8144)
static void C_ccall f_8144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8159)
static void C_ccall f_8159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8156)
static void C_ccall f_8156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8153)
static void C_ccall f_8153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8150)
static void C_ccall f_8150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8271)
static void C_ccall f_8271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8278)
static void C_ccall f_8278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5591)
static void C_fcall f_5591(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10772)
static void C_fcall f_10772(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10770)
static void C_ccall f_10770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9354)
static void C_fcall f_9354(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8283)
static void C_ccall f_8283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8287)
static void C_ccall f_8287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6190)
static void C_ccall f_6190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10592)
static void C_ccall f_10592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6447)
static void C_ccall f_6447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11203)
static void C_ccall f_11203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10594)
static void C_fcall f_10594(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6459)
static void C_ccall f_6459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9632)
static void C_ccall f_9632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9638)
static void C_ccall f_9638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6582)
static void C_fcall f_6582(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8105)
static void C_ccall f_8105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8262)
static void C_ccall f_8262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8266)
static void C_ccall f_8266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6176)
static void C_fcall f_6176(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6579)
static void C_fcall f_6579(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9641)
static void C_ccall f_9641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4138)
static void C_ccall f_4138(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6596)
static C_word C_fcall f_6596(C_word t0,C_word t1);
C_noret_decl(f_4121)
static void C_ccall f_4121(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4121)
static void C_ccall f_4121r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_8798)
static void C_ccall f_8798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4117)
static void C_ccall f_4117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9381)
static void C_ccall f_9381(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_9381)
static void C_ccall f_9381r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_9388)
static void C_ccall f_9388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6782)
static void C_ccall f_6782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8774)
static void C_ccall f_8774(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_10508)
static void C_ccall f_10508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6796)
static void C_fcall f_6796(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6794)
static void C_ccall f_6794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8162)
static void C_ccall f_8162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8165)
static void C_ccall f_8165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8168)
static void C_ccall f_8168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11555)
static void C_ccall f_11555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4172)
static C_word C_fcall f_4172(C_word t0,C_word t1);
C_noret_decl(f_11551)
static void C_ccall f_11551(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5531)
static void C_ccall f_5531(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8171)
static void C_ccall f_8171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8177)
static void C_ccall f_8177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8174)
static void C_ccall f_8174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11549)
static void C_ccall f_11549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5272)
static void C_ccall f_5272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8466)
static void C_ccall f_8466(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8180)
static void C_ccall f_8180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8183)
static void C_ccall f_8183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8186)
static void C_ccall f_8186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8189)
static void C_ccall f_8189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9344)
static void C_ccall f_9344(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8192)
static void C_ccall f_8192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8195)
static void C_ccall f_8195(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8198)
static void C_ccall f_8198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5293)
static void C_fcall f_5293(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5290)
static void C_fcall f_5290(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9397)
static void C_fcall f_9397(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9395)
static void C_ccall f_9395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9696)
static void C_ccall f_9696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5708)
static C_word C_fcall f_5708(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_9918)
static void C_ccall f_9918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9300)
static void C_ccall f_9300(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5604)
static void C_fcall f_5604(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9665)
static void C_ccall f_9665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9662)
static void C_ccall f_9662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9324)
static void C_ccall f_9324(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7079)
static void C_ccall f_7079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6510)
static void C_ccall f_6510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9623)
static void C_ccall f_9623(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9625)
static void C_ccall f_9625(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9602)
static void C_ccall f_9602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5528)
static void C_ccall f_5528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5524)
static void C_ccall f_5524(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8443)
static void C_ccall f_8443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5518)
static void C_ccall f_5518(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5512)
static void C_ccall f_5512(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7854)
static C_word C_fcall f_7854(C_word t0,C_word t1);
C_noret_decl(f_8432)
static void C_ccall f_8432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8438)
static void C_ccall f_8438(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8436)
static void C_ccall f_8436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6927)
static void C_ccall f_6927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7879)
static void C_fcall f_7879(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6923)
static void C_ccall f_6923(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8400)
static void C_ccall f_8400(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7395)
static void C_ccall f_7395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6326)
static void C_ccall f_6326(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6716)
static void C_ccall f_6716(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_6716)
static void C_ccall f_6716r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_8407)
static void C_fcall f_8407(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6708)
static void C_ccall f_6708(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6308)
static void C_fcall f_6308(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4721)
static void C_fcall f_4721(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8706)
static void C_ccall f_8706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4729)
static void C_ccall f_4729(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4725)
static void C_fcall f_4725(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8428)
static void C_ccall f_8428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5932)
static void C_fcall f_5932(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5968)
static void C_fcall f_5968(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5952)
static void C_ccall f_5952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5981)
static void C_fcall f_5981(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7583)
static void C_ccall f_7583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7893)
static void C_ccall f_7893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7897)
static void C_ccall f_7897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7338)
static void C_ccall f_7338(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8821)
static void C_ccall f_8821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8647)
static void C_ccall f_8647(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10805)
static void C_ccall f_10805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10808)
static void C_ccall f_10808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10814)
static void C_ccall f_10814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7532)
static void C_fcall f_7532(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5786)
static void C_fcall f_5786(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8914)
static void C_ccall f_8914(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8651)
static void C_ccall f_8651(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7553)
static void C_ccall f_7553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7550)
static void C_fcall f_7550(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8908)
static void C_ccall f_8908(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5903)
static void C_ccall f_5903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5907)
static void C_ccall f_5907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5900)
static void C_ccall f_5900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4528)
static void C_ccall f_4528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5774)
static void C_fcall f_5774(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_5914)
static void C_ccall f_5914(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5919)
static void C_fcall f_5919(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5917)
static void C_ccall f_5917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5911)
static void C_ccall f_5911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11765)
static void C_ccall f_11765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11778)
static void C_ccall f_11778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11769)
static void C_ccall f_11769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4239)
static void C_ccall f_4239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6076)
static void C_ccall f_6076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6078)
static void C_ccall f_6078(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4264)
static void C_fcall f_4264(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4262)
static void C_ccall f_4262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6082)
static void C_ccall f_6082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4217)
static void C_ccall f_4217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4211)
static void C_ccall f_4211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6094)
static void C_fcall f_6094(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_4213)
static void C_ccall f_4213(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4213)
static void C_ccall f_4213r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_10853)
static void C_fcall f_10853(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8601)
static void C_ccall f_8601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10857)
static void C_ccall f_10857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11785)
static void C_ccall f_11785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11788)
static void C_ccall f_11788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8614)
static void C_fcall f_8614(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11662)
static void C_ccall f_11662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11665)
static void C_ccall f_11665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4200)
static void C_ccall f_4200(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11741)
static void C_ccall f_11741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11744)
static void C_ccall f_11744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11758)
static void C_ccall f_11758(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11730)
static void C_ccall f_11730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6200)
static void C_ccall f_6200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4165)
static void C_ccall f_4165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4162)
static void C_ccall f_4162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11632)
static void C_ccall f_11632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11635)
static void C_ccall f_11635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4158)
static void C_ccall f_4158(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_11621)
static void C_ccall f_11621(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11710)
static void C_ccall f_11710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11715)
static void C_fcall f_11715(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10905)
static void C_ccall f_10905(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10907)
static void C_fcall f_10907(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11704)
static void C_ccall f_11704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11618)
static void C_ccall f_11618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7819)
static void C_ccall f_7819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4682)
static void C_fcall f_4682(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10999)
static void C_ccall f_10999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10283)
static void C_ccall f_10283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10996)
static void C_ccall f_10996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7502)
static void C_ccall f_7502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11601)
static void C_ccall f_11601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11603)
static void C_ccall f_11603(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10990)
static void C_ccall f_10990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11706)
static void C_ccall f_11706(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7804)
static C_word C_fcall f_7804(C_word t0,C_word t1);
C_noret_decl(f_10293)
static void C_ccall f_10293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10890)
static C_word C_fcall f_10890(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_4190)
static void C_ccall f_4190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6017)
static void C_fcall f_6017(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10269)
static void C_ccall f_10269(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10260)
static void C_ccall f_10260(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10860)
static void C_ccall f_10860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6396)
static void C_ccall f_6396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9455)
static void C_ccall f_9455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8953)
static void C_ccall f_8953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8956)
static void C_ccall f_8956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10241)
static void C_ccall f_10241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6282)
static void C_fcall f_6282(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6288)
static void C_fcall f_6288(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_10968)
static void C_ccall f_10968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10965)
static void C_ccall f_10965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6052)
static void C_fcall f_6052(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6331)
static void C_fcall f_6331(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10223)
static void C_fcall f_10223(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10976)
static void C_fcall f_10976(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6389)
static void C_ccall f_6389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10221)
static void C_ccall f_10221(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10971)
static void C_ccall f_10971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11380)
static void C_ccall f_11380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11382)
static void C_ccall f_11382(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9781)
static void C_ccall f_9781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10237)
static void C_ccall f_10237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4676)
static void C_ccall f_4676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9795)
static void C_ccall f_9795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11372)
static void C_ccall f_11372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10208)
static void C_ccall f_10208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10205)
static void C_ccall f_10205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8047)
static void C_ccall f_8047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8044)
static void C_ccall f_8044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8041)
static void C_ccall f_8041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10201)
static void C_ccall f_10201(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5150)
static void C_ccall f_5150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5157)
static void C_ccall f_5157(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5154)
static void C_ccall f_5154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10213)
static void C_fcall f_10213(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8056)
static void C_ccall f_8056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8053)
static void C_ccall f_8053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8050)
static void C_ccall f_8050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10211)
static void C_ccall f_10211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11353)
static void C_ccall f_11353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9478)
static void C_ccall f_9478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5160)
static void C_ccall f_5160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5162)
static void C_fcall f_5162(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8974)
static void C_ccall f_8974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8977)
static void C_fcall f_8977(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8022)
static void C_ccall f_8022(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6347)
static void C_ccall f_6347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6344)
static void C_ccall f_6344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9747)
static void C_fcall f_9747(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8962)
static void C_ccall f_8962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8037)
static void C_ccall f_8037(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8031)
static void C_ccall f_8031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8034)
static void C_ccall f_8034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11652)
static void C_ccall f_11652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11330)
static void C_ccall f_11330(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_11659)
static void C_ccall f_11659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11656)
static void C_ccall f_11656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8007)
static void C_ccall f_8007(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10956)
static void C_ccall f_10956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10958)
static void C_ccall f_10958(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5191)
static void C_ccall f_5191(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11645)
static void C_ccall f_11645(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8016)
static void C_ccall f_8016(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8011)
static void C_ccall f_8011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9431)
static void C_ccall f_9431(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_9431)
static void C_ccall f_9431r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_9438)
static void C_ccall f_9438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9439)
static void C_fcall f_9439(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11328)
static void C_ccall f_11328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9480)
static void C_fcall f_9480(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8357)
static void C_fcall f_8357(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9490)
static void C_ccall f_9490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8997)
static void C_ccall f_8997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8993)
static void C_ccall f_8993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8343)
static void C_ccall f_8343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5047)
static void C_ccall f_5047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8980)
static void C_ccall f_8980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6831)
static void C_ccall f_6831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6834)
static void C_ccall f_6834(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8085)
static void C_fcall f_8085(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8088)
static void C_ccall f_8088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6825)
static void C_ccall f_6825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6828)
static void C_ccall f_6828(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6822)
static void C_ccall f_6822(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8060)
static void C_ccall f_8060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8064)
static void C_ccall f_8064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8066)
static void C_fcall f_8066(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5028)
static void C_ccall f_5028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8072)
static void C_fcall f_8072(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9418)
static void C_ccall f_9418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8336)
static void C_ccall f_8336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8386)
static void C_ccall f_8386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5003)
static void C_ccall f_5003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7477)
static void C_ccall f_7477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9706)
static void C_ccall f_9706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9703)
static void C_ccall f_9703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9700)
static void C_ccall f_9700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10645)
static void C_fcall f_10645(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9718)
static void C_ccall f_9718(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7498)
static void C_ccall f_7498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4615)
static void C_fcall f_4615(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4613)
static void C_ccall f_4613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9536)
static void C_ccall f_9536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9532)
static void C_ccall f_9532(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9530)
static void C_ccall f_9530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7463)
static void C_ccall f_7463(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7461)
static void C_ccall f_7461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8300)
static void C_ccall f_8300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8302)
static void C_ccall f_8302(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10199)
static void C_ccall f_10199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8308)
static void C_ccall f_8308(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7454)
static void C_ccall f_7454(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9553)
static void C_ccall f_9553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7136)
static void C_fcall f_7136(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7481)
static void C_ccall f_7481(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9566)
static void C_ccall f_9566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9568)
static void C_ccall f_9568(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9821)
static void C_ccall f_9821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10145)
static void C_ccall f_10145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10147)
static void C_ccall f_10147(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9572)
static void C_ccall f_9572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9575)
static void C_ccall f_9575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9578)
static void C_ccall f_9578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9829)
static void C_ccall f_9829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9831)
static void C_ccall f_9831(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9585)
static void C_ccall f_9585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7141)
static void C_fcall f_7141(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3791)
static void C_ccall f_3791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9593)
static void C_ccall f_9593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10021)
static void C_fcall f_10021(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9595)
static void C_ccall f_9595(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9599)
static void C_ccall f_9599(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7448)
static void C_ccall f_7448(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3798)
static void C_ccall f_3798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7115)
static C_word C_fcall f_7115(C_word t0);
C_noret_decl(f_7109)
static void C_ccall f_7109(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7107)
static void C_ccall f_7107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3662)
static void C_fcall f_3662(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3669)
static void C_ccall f_3669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3672)
static void C_fcall f_3672(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4295)
static void C_ccall f_4295(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3675)
static void C_ccall f_3675(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4435)
static void C_ccall f_4435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3643)
static void C_ccall f_3643(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3645)
static C_word C_fcall f_3645(C_word t0,C_word t1);
C_noret_decl(f_3949)
static void C_fcall f_3949(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9024)
static void C_fcall f_9024(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9106)
static void C_ccall f_9106(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_9101)
static void C_ccall f_9101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9514)
static void C_ccall f_9514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9518)
static void C_ccall f_9518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9003)
static void C_fcall f_9003(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9001)
static void C_ccall f_9001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4250)
static void C_ccall f_4250(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4258)
static void C_ccall f_4258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11876)
static void C_ccall f_11876(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_11874)
static void C_ccall f_11874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9522)
static void C_ccall f_9522(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9526)
static void C_ccall f_9526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4287)
static void C_ccall f_4287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11863)
static void C_ccall f_11863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4342)
static void C_fcall f_4342(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9147)
static void C_ccall f_9147(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4331)
static void C_ccall f_4331(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9132)
static void C_ccall f_9132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11149)
static void C_ccall f_11149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11146)
static void C_ccall f_11146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4325)
static void C_ccall f_4325(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4319)
static void C_ccall f_4319(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4314)
static void C_ccall f_4314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11176)
static void C_ccall f_11176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11891)
static void C_ccall f_11891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11893)
static void C_ccall f_11893(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_11897)
static void C_ccall f_11897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11128)
static void C_ccall f_11128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9097)
static void C_ccall f_9097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4301)
static void C_ccall f_4301(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4304)
static void C_fcall f_4304(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_4784)
static void C_ccall f_4784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3995)
static void C_fcall f_3995(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11880)
static void C_ccall f_11880(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9080)
static void C_ccall f_9080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4798)
static void C_ccall f_4798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4794)
static void C_ccall f_4794(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4794)
static void C_ccall f_4794r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6848)
static void C_ccall f_6848(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10623)
static void C_fcall f_10623(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11109)
static void C_ccall f_11109(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6841)
static void C_ccall f_6841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11106)
static void C_ccall f_11106(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9076)
static void C_ccall f_9076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11100)
static void C_ccall f_11100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6851)
static void C_ccall f_6851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10682)
static void C_ccall f_10682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10684)
static void C_ccall f_10684(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6866)
static void C_ccall f_6866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6869)
static void C_ccall f_6869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10688)
static void C_ccall f_10688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11859)
static void C_ccall f_11859(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6860)
static void C_ccall f_6860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6863)
static void C_ccall f_6863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11857)
static void C_ccall f_11857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4741)
static void C_ccall f_4741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10125)
static void C_ccall f_10125(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6875)
static void C_ccall f_6875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10698)
static void C_fcall f_10698(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11842)
static void C_ccall f_11842(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_11840)
static void C_ccall f_11840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6872)
static void C_ccall f_6872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11846)
static void C_ccall f_11846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11083)
static void C_ccall f_11083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6974)
static void C_ccall f_6974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6978)
static C_word C_fcall f_6978(C_word t0,C_word t1);
C_noret_decl(f_4861)
static void C_ccall f_4861(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4867)
static void C_fcall f_4867(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10386)
static void C_fcall f_10386(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10394)
static void C_fcall f_10394(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10390)
static void C_ccall f_10390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6993)
static void C_ccall f_6993(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_6993)
static void C_ccall f_6993r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_10151)
static void C_ccall f_10151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3913)
static void C_fcall f_3913(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4931)
static void C_ccall f_4931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4937)
static void C_ccall f_4937(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4886)
static void C_fcall f_4886(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4934)
static void C_ccall f_4934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10045)
static void C_fcall f_10045(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10043)
static void C_ccall f_10043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10166)
static void C_ccall f_10166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10168)
static void C_ccall f_10168(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3720)
static void C_ccall f_3720(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5332)
static void C_fcall f_5332(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4942)
static void C_fcall f_4942(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_11040)
static void C_ccall f_11040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10172)
static void C_ccall f_10172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10179)
static void C_ccall f_10179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11034)
static void C_ccall f_11034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4956)
static void C_ccall f_4956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10109)
static void C_ccall f_10109(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10345)
static void C_ccall f_10345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11031)
static void C_ccall f_11031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6948)
static void C_ccall f_6948(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11028)
static void C_ccall f_11028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3900)
static void C_fcall f_3900(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4960)
static void C_fcall f_4960(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10353)
static void C_ccall f_10353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11022)
static void C_ccall f_11022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6954)
static void C_ccall f_6954(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4039)
static void C_fcall f_4039(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4033)
static void C_ccall f_4033(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11018)
static void C_ccall f_11018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11015)
static void C_ccall f_11015(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4972)
static void C_fcall f_4972(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10005)
static void C_ccall f_10005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11012)
static void C_ccall f_11012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10368)
static void C_ccall f_10368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8216)
static void C_ccall f_8216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11492)
static void C_ccall f_11492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9885)
static void C_fcall f_9885(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4024)
static void C_ccall f_4024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11009)
static void C_ccall f_11009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11003)
static void C_ccall f_11003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10372)
static void C_ccall f_10372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6888)
static void C_ccall f_6888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9899)
static void C_ccall f_9899(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10304)
static void C_ccall f_10304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8883)
static void C_ccall f_8883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11823)
static void C_ccall f_11823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6664)
static void C_fcall f_6664(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4089)
static void C_fcall f_4089(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11470)
static void C_ccall f_11470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9867)
static void C_ccall f_9867(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9864)
static void C_ccall f_9864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6892)
static void C_ccall f_6892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6661)
static void C_ccall f_6661(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_11829)
static void C_ccall f_11829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11825)
static void C_ccall f_11825(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10314)
static void C_ccall f_10314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8207)
static void C_ccall f_8207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8209)
static void C_ccall f_8209(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_8201)
static void C_ccall f_8201(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6636)
static void C_ccall f_6636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4073)
static void C_fcall f_4073(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8204)
static void C_ccall f_8204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6909)
static void C_fcall f_6909(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9873)
static void C_ccall f_9873(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9870)
static void C_ccall f_9870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6907)
static void C_ccall f_6907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9875)
static void C_fcall f_9875(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6903)
static void C_ccall f_6903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10323)
static void C_ccall f_10323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8536)
static void C_ccall f_8536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8258)
static void C_ccall f_8258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8254)
static void C_ccall f_8254(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3857)
static void C_ccall f_3857(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3857)
static void C_ccall f_3857r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_8250)
static void C_ccall f_8250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9842)
static void C_ccall f_9842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9844)
static void C_ccall f_9844(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4812)
static void C_fcall f_4812(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10334)
static void C_ccall f_10334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4448)
static void C_ccall f_4448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5051)
static void C_ccall f_5051(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6659)
static void C_ccall f_6659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3861)
static void C_ccall f_3861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11483)
static void C_ccall f_11483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11485)
static void C_ccall f_11485(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9855)
static void C_ccall f_9855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9857)
static void C_ccall f_9857(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4824)
static void C_ccall f_4824(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11489)
static void C_ccall f_11489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4818)
static void C_ccall f_4818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4452)
static void C_ccall f_4452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4459)
static void C_ccall f_4459(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8235)
static void C_ccall f_8235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8231)
static void C_ccall f_8231(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3726)
static void C_fcall f_3726(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8540)
static void C_ccall f_8540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4465)
static void C_ccall f_4465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3846)
static void C_ccall f_3846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8246)
static void C_ccall f_8246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8879)
static void C_ccall f_8879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8544)
static void C_ccall f_8544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8240)
static void C_ccall f_8240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11463)
static void C_ccall f_11463(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_11461)
static void C_ccall f_11461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11467)
static void C_ccall f_11467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4470)
static void C_ccall f_4470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4476)
static void C_ccall f_4476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3898)
static void C_ccall f_3898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11413)
static void C_ccall f_11413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11419)
static void C_ccall f_11419(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_11417)
static void C_ccall f_11417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4489)
static void C_ccall f_4489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4483)
static void C_fcall f_4483(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5097)
static void C_fcall f_5097(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5243)
static void C_fcall f_5243(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4908)
static void C_ccall f_4908(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_11446)
static void C_ccall f_11446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4911)
static void C_fcall f_4911(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5256)
static void C_fcall f_5256(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4570)
static void C_fcall f_4570(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4579)
static void C_ccall f_4579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3886)
static void C_ccall f_3886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11423)
static void C_ccall f_11423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4928)
static void C_ccall f_4928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7160)
static void C_fcall f_7160(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4546)
static void C_fcall f_4546(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4591)
static void C_ccall f_4591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3639)
static void C_ccall f_3639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3635)
static void C_ccall f_3635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3631)
static void C_ccall f_3631(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5202)
static void C_ccall f_5202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7165)
static void C_fcall f_7165(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8593)
static void C_ccall f_8593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7184)
static void C_ccall f_7184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3816)
static void C_ccall f_3816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5419)
static void C_fcall f_5419(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3825)
static void C_fcall f_3825(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6738)
static void C_ccall f_6738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6727)
static void C_ccall f_6727(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6724)
static void C_ccall f_6724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6403)
static void C_ccall f_6403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_expand_toplevel)
C_externexport void C_ccall C_expand_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7776)
static C_word C_fcall f_7776(C_word t0,C_word t1);
C_noret_decl(f_7676)
static void C_fcall f_7676(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7697)
static void C_ccall f_7697(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9805)
static void C_ccall f_9805(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9803)
static void C_ccall f_9803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9813)
static void C_ccall f_9813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10461)
static void C_ccall f_10461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6812)
static void C_fcall f_6812(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6810)
static void C_ccall f_6810(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8804)
static void C_ccall f_8804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7639)
static void C_ccall f_7639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8817)
static void C_ccall f_8817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6803)
static void C_ccall f_6803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8833)
static void C_ccall f_8833(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8500)
static void C_ccall f_8500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10747)
static void C_ccall f_10747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11918)
static void C_ccall f_11918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5859)
static void C_ccall f_5859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10795)
static void C_ccall f_10795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10792)
static void C_ccall f_10792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10799)
static void C_ccall f_10799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11910)
static void C_ccall f_11910(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10739)
static void C_ccall f_10739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10735)
static void C_ccall f_10735(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10733)
static void C_ccall f_10733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11928)
static void C_ccall f_11928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11920)
static void C_ccall f_11920(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7791)
static void C_ccall f_7791(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_7059)
static void C_fcall trf_7059(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7059(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7059(t0,t1,t2);}

C_noret_decl(trf_7020)
static void C_fcall trf_7020(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7020(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7020(t0,t1,t2);}

C_noret_decl(trf_4428)
static void C_fcall trf_4428(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4428(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4428(t0,t1);}

C_noret_decl(trf_7008)
static void C_fcall trf_7008(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7008(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_7008(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5655)
static void C_fcall trf_5655(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5655(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5655(t0,t1,t2);}

C_noret_decl(trf_10554)
static void C_fcall trf_10554(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10554(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10554(t0,t1);}

C_noret_decl(trf_4502)
static void C_fcall trf_4502(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4502(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4502(t0,t1,t2,t3,t4);}

C_noret_decl(trf_7736)
static void C_fcall trf_7736(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7736(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7736(t0,t1);}

C_noret_decl(trf_7728)
static void C_fcall trf_7728(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7728(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7728(t0,t1);}

C_noret_decl(trf_10420)
static void C_fcall trf_10420(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10420(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10420(t0,t1,t2);}

C_noret_decl(trf_4376)
static void C_fcall trf_4376(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4376(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4376(t0,t1);}

C_noret_decl(trf_5805)
static void C_fcall trf_5805(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5805(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5805(t0,t1);}

C_noret_decl(trf_4359)
static void C_fcall trf_4359(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4359(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4359(t0,t1,t2);}

C_noret_decl(trf_6128)
static void C_fcall trf_6128(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6128(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6128(t0,t1,t2);}

C_noret_decl(trf_6104)
static void C_fcall trf_6104(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6104(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_6104(t0,t1,t2,t3,t4);}

C_noret_decl(trf_11563)
static void C_fcall trf_11563(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11563(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11563(t0,t1);}

C_noret_decl(trf_4055)
static void C_fcall trf_4055(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4055(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4055(t0,t1,t2);}

C_noret_decl(trf_6743)
static void C_fcall trf_6743(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6743(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6743(t0,t1,t2);}

C_noret_decl(trf_5591)
static void C_fcall trf_5591(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5591(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5591(t0,t1,t2,t3);}

C_noret_decl(trf_10772)
static void C_fcall trf_10772(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10772(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_10772(t0,t1,t2,t3);}

C_noret_decl(trf_9354)
static void C_fcall trf_9354(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9354(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9354(t0,t1,t2);}

C_noret_decl(trf_10594)
static void C_fcall trf_10594(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10594(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10594(t0,t1,t2);}

C_noret_decl(trf_6582)
static void C_fcall trf_6582(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6582(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6582(t0,t1,t2,t3);}

C_noret_decl(trf_6176)
static void C_fcall trf_6176(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6176(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6176(t0,t1);}

C_noret_decl(trf_6579)
static void C_fcall trf_6579(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6579(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6579(t0,t1,t2,t3);}

C_noret_decl(trf_6796)
static void C_fcall trf_6796(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6796(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6796(t0,t1,t2);}

C_noret_decl(trf_5293)
static void C_fcall trf_5293(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5293(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5293(t0,t1);}

C_noret_decl(trf_5290)
static void C_fcall trf_5290(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5290(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5290(t0,t1);}

C_noret_decl(trf_9397)
static void C_fcall trf_9397(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9397(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9397(t0,t1,t2);}

C_noret_decl(trf_5604)
static void C_fcall trf_5604(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5604(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5604(t0,t1);}

C_noret_decl(trf_7879)
static void C_fcall trf_7879(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7879(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7879(t0,t1,t2);}

C_noret_decl(trf_8407)
static void C_fcall trf_8407(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8407(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8407(t0,t1);}

C_noret_decl(trf_6308)
static void C_fcall trf_6308(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6308(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6308(t0,t1);}

C_noret_decl(trf_4721)
static void C_fcall trf_4721(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4721(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4721(t0,t1);}

C_noret_decl(trf_4725)
static void C_fcall trf_4725(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4725(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4725(t0,t1,t2);}

C_noret_decl(trf_5932)
static void C_fcall trf_5932(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5932(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5932(t0,t1);}

C_noret_decl(trf_5968)
static void C_fcall trf_5968(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5968(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5968(t0,t1,t2,t3);}

C_noret_decl(trf_5981)
static void C_fcall trf_5981(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5981(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5981(t0,t1);}

C_noret_decl(trf_7532)
static void C_fcall trf_7532(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7532(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7532(t0,t1,t2);}

C_noret_decl(trf_5786)
static void C_fcall trf_5786(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5786(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5786(t0,t1,t2,t3);}

C_noret_decl(trf_7550)
static void C_fcall trf_7550(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7550(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7550(t0,t1);}

C_noret_decl(trf_5774)
static void C_fcall trf_5774(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5774(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_5774(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_5919)
static void C_fcall trf_5919(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5919(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5919(t0,t1,t2,t3);}

C_noret_decl(trf_4264)
static void C_fcall trf_4264(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4264(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4264(t0,t1,t2);}

C_noret_decl(trf_6094)
static void C_fcall trf_6094(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6094(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_6094(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_10853)
static void C_fcall trf_10853(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10853(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10853(t0,t1);}

C_noret_decl(trf_8614)
static void C_fcall trf_8614(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8614(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8614(t0,t1);}

C_noret_decl(trf_11715)
static void C_fcall trf_11715(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11715(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11715(t0,t1,t2);}

C_noret_decl(trf_10907)
static void C_fcall trf_10907(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10907(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10907(t0,t1,t2);}

C_noret_decl(trf_4682)
static void C_fcall trf_4682(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4682(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4682(t0,t1,t2);}

C_noret_decl(trf_6017)
static void C_fcall trf_6017(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6017(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6017(t0,t1,t2);}

C_noret_decl(trf_6282)
static void C_fcall trf_6282(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6282(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6282(t0,t1,t2);}

C_noret_decl(trf_6288)
static void C_fcall trf_6288(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6288(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_6288(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_6052)
static void C_fcall trf_6052(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6052(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6052(t0,t1,t2,t3);}

C_noret_decl(trf_6331)
static void C_fcall trf_6331(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6331(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6331(t0,t1,t2);}

C_noret_decl(trf_10223)
static void C_fcall trf_10223(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10223(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_10223(t0,t1,t2,t3);}

C_noret_decl(trf_10976)
static void C_fcall trf_10976(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10976(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_10976(t0,t1,t2,t3);}

C_noret_decl(trf_10213)
static void C_fcall trf_10213(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10213(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_10213(t0,t1,t2,t3);}

C_noret_decl(trf_5162)
static void C_fcall trf_5162(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5162(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5162(t0,t1,t2);}

C_noret_decl(trf_8977)
static void C_fcall trf_8977(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8977(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8977(t0,t1);}

C_noret_decl(trf_9747)
static void C_fcall trf_9747(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9747(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9747(t0,t1);}

C_noret_decl(trf_9439)
static void C_fcall trf_9439(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9439(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9439(t0,t1,t2);}

C_noret_decl(trf_9480)
static void C_fcall trf_9480(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9480(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9480(t0,t1,t2);}

C_noret_decl(trf_8357)
static void C_fcall trf_8357(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8357(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8357(t0,t1,t2);}

C_noret_decl(trf_8085)
static void C_fcall trf_8085(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8085(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8085(t0,t1);}

C_noret_decl(trf_8066)
static void C_fcall trf_8066(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8066(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8066(t0,t1,t2,t3);}

C_noret_decl(trf_8072)
static void C_fcall trf_8072(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8072(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_8072(t0,t1,t2,t3,t4);}

C_noret_decl(trf_10645)
static void C_fcall trf_10645(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10645(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10645(t0,t1,t2);}

C_noret_decl(trf_4615)
static void C_fcall trf_4615(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4615(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4615(t0,t1,t2);}

C_noret_decl(trf_7136)
static void C_fcall trf_7136(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7136(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7136(t0,t1);}

C_noret_decl(trf_7141)
static void C_fcall trf_7141(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7141(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7141(t0,t1,t2,t3);}

C_noret_decl(trf_10021)
static void C_fcall trf_10021(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10021(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10021(t0,t1,t2);}

C_noret_decl(trf_3662)
static void C_fcall trf_3662(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3662(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3662(t0,t1,t2);}

C_noret_decl(trf_3672)
static void C_fcall trf_3672(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3672(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3672(t0,t1);}

C_noret_decl(trf_3949)
static void C_fcall trf_3949(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3949(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3949(t0,t1,t2,t3);}

C_noret_decl(trf_9024)
static void C_fcall trf_9024(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9024(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9024(t0,t1);}

C_noret_decl(trf_9003)
static void C_fcall trf_9003(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9003(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9003(t0,t1,t2,t3);}

C_noret_decl(trf_4342)
static void C_fcall trf_4342(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4342(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4342(t0,t1);}

C_noret_decl(trf_4304)
static void C_fcall trf_4304(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4304(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_4304(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_3995)
static void C_fcall trf_3995(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3995(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3995(t0,t1,t2);}

C_noret_decl(trf_10623)
static void C_fcall trf_10623(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10623(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10623(t0,t1);}

C_noret_decl(trf_10698)
static void C_fcall trf_10698(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10698(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10698(t0,t1,t2);}

C_noret_decl(trf_4867)
static void C_fcall trf_4867(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4867(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4867(t0,t1,t2);}

C_noret_decl(trf_10386)
static void C_fcall trf_10386(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10386(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10386(t0,t1,t2);}

C_noret_decl(trf_10394)
static void C_fcall trf_10394(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10394(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10394(t0,t1,t2);}

C_noret_decl(trf_3913)
static void C_fcall trf_3913(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3913(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3913(t0,t1);}

C_noret_decl(trf_4886)
static void C_fcall trf_4886(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4886(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4886(t0,t1);}

C_noret_decl(trf_10045)
static void C_fcall trf_10045(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10045(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10045(t0,t1,t2);}

C_noret_decl(trf_5332)
static void C_fcall trf_5332(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5332(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5332(t0,t1);}

C_noret_decl(trf_4942)
static void C_fcall trf_4942(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4942(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_4942(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_3900)
static void C_fcall trf_3900(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3900(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3900(t0,t1,t2,t3);}

C_noret_decl(trf_4960)
static void C_fcall trf_4960(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4960(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4960(t0,t1);}

C_noret_decl(trf_4039)
static void C_fcall trf_4039(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4039(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4039(t0,t1,t2);}

C_noret_decl(trf_4972)
static void C_fcall trf_4972(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4972(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4972(t0,t1);}

C_noret_decl(trf_9885)
static void C_fcall trf_9885(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9885(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9885(t0,t1,t2);}

C_noret_decl(trf_6664)
static void C_fcall trf_6664(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6664(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6664(t0,t1,t2,t3);}

C_noret_decl(trf_4089)
static void C_fcall trf_4089(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4089(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4089(t0,t1);}

C_noret_decl(trf_4073)
static void C_fcall trf_4073(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4073(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4073(t0,t1,t2);}

C_noret_decl(trf_6909)
static void C_fcall trf_6909(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6909(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6909(t0,t1,t2);}

C_noret_decl(trf_9875)
static void C_fcall trf_9875(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9875(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9875(t0,t1,t2);}

C_noret_decl(trf_4812)
static void C_fcall trf_4812(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4812(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4812(t0,t1,t2);}

C_noret_decl(trf_3726)
static void C_fcall trf_3726(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3726(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3726(t0,t1,t2);}

C_noret_decl(trf_4483)
static void C_fcall trf_4483(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4483(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4483(t0,t1,t2);}

C_noret_decl(trf_5097)
static void C_fcall trf_5097(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5097(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5097(t0,t1,t2);}

C_noret_decl(trf_5243)
static void C_fcall trf_5243(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5243(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5243(t0,t1);}

C_noret_decl(trf_4911)
static void C_fcall trf_4911(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4911(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4911(t0,t1,t2);}

C_noret_decl(trf_5256)
static void C_fcall trf_5256(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5256(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5256(t0,t1);}

C_noret_decl(trf_4570)
static void C_fcall trf_4570(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4570(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4570(t0,t1);}

C_noret_decl(trf_7160)
static void C_fcall trf_7160(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7160(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7160(t0,t1);}

C_noret_decl(trf_4546)
static void C_fcall trf_4546(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4546(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4546(t0,t1,t2);}

C_noret_decl(trf_7165)
static void C_fcall trf_7165(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7165(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7165(t0,t1,t2,t3);}

C_noret_decl(trf_5419)
static void C_fcall trf_5419(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5419(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5419(t0,t1);}

C_noret_decl(trf_3825)
static void C_fcall trf_3825(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3825(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3825(t0,t1,t2);}

C_noret_decl(trf_7676)
static void C_fcall trf_7676(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7676(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7676(t0,t1,t2,t3);}

C_noret_decl(trf_6812)
static void C_fcall trf_6812(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6812(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6812(t0,t1,t2);}

C_noret_decl(tr7)
static void C_fcall tr7(C_proc7 k) C_regparm C_noret;
C_regparm static void C_fcall tr7(C_proc7 k){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
(k)(7,t0,t1,t2,t3,t4,t5,t6);}

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

/* k5889 in k5885 in k5879 in k5857 in fini in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5891,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[50],t2));}

/* loop in k7049 in lambda-list? in k7001 in check-syntax in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_7059(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7059,NULL,3,t0,t1,t2);}
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep(C_i_symbolp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7079,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:728: keyword? */
t5=*((C_word*)lf[150]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_car(t4);
if(C_truep(C_i_symbolp(t5))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7107,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:731: keyword? */
t7=*((C_word*)lf[150]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t5);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}}}

/* k10757 in k10754 in k10751 in k10748 in k10745 in k10737 in a10734 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in ... */
static void C_ccall f_10759(C_word c,C_word t0,C_word t1){
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
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10759,2,t0,t1);}
t2=t1;
t3=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_a_i_list(&a,1,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10770,a[2]=((C_word*)t0)[4],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10772,a[2]=t8,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t2,a[9]=((C_word)li160),tmp=(C_word)a,a+=10,tmp));
t10=((C_word*)t8)[1];
f_10772(t10,t6,((C_word*)t0)[9],C_SCHEME_FALSE);}

/* k7049 in lambda-list? in k7001 in check-syntax in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_7051(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7051,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7059,a[2]=t3,a[3]=((C_word)li87),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_7059(t5,((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k10754 in k10751 in k10748 in k10745 in k10737 in a10734 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in ... */
static void C_ccall f_10756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10756,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10759,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* expand.scm:1218: r */
t4=((C_word*)t0)[9];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[227]);}

/* k10751 in k10748 in k10745 in k10737 in a10734 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in ... */
static void C_ccall f_10753(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10753,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10756,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* expand.scm:1217: r */
t4=((C_word*)t0)[8];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[304]);}

/* k10748 in k10745 in k10737 in a10734 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in ... */
static void C_ccall f_10750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10750,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10753,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* expand.scm:1216: r */
t4=((C_word*)t0)[7];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[305]);}

/* k9996 in k9954 in k9916 in test in k9871 in k9868 in k9865 in k9862 in a9856 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in ... */
static void C_ccall f_9998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9998,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10005,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* expand.scm:1392: test */
t4=((C_word*)((C_word*)t0)[4])[1];
f_9885(t4,t2,t3);}
else{
/* expand.scm:1393: err */
t2=((C_word*)((C_word*)t0)[5])[1];
f_9875(t2,((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k7043 in k7022 in err in k7001 in check-syntax in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_7045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:721: string-append */
t2=*((C_word*)lf[36]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[148],t1,lf[149],((C_word*)t0)[3]);}

/* lambda-list? in k7001 in check-syntax in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_7047(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7047,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7051,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:725: ##sys#extended-lambda-list? */
t4=*((C_word*)lf[63]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* ##sys#canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5693(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_5693r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5693r(t0,t1,t2,t3);}}

static void C_ccall f_5693r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5697,a[2]=t4,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t4))){
/* expand.scm:471: ##sys#current-environment */
t6=*((C_word*)lf[1]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=t5;
f_5697(2,t6,C_i_car(t4));}}

/* k7036 in k7022 in err in k7001 in check-syntax in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_7038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:720: string-append */
t2=*((C_word*)lf[36]+1);
((C_proc8)(void*)(*((C_word*)t2+1)))(8,t2,((C_word*)t0)[2],lf[145],((C_word*)t0)[3],lf[146],t1,lf[147],((C_word*)t0)[4]);}

/* k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5697(C_word c,C_word t0,C_word t1){
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
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5697,2,t0,t1);}
t2=t1;
t3=C_i_nullp(((C_word*)t0)[2]);
t4=(C_truep(t3)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5708,a[2]=t2,a[3]=((C_word)li56),tmp=(C_word)a,a+=4,tmp));
t19=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5774,a[2]=t17,a[3]=t11,a[4]=((C_word)li63),tmp=(C_word)a,a+=5,tmp));
t20=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6094,a[2]=t13,a[3]=t11,a[4]=((C_word)li66),tmp=(C_word)a,a+=5,tmp));
t21=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6282,a[2]=t11,a[3]=t2,a[4]=t15,a[5]=t13,a[6]=t7,a[7]=((C_word)li69),tmp=(C_word)a,a+=8,tmp));
/* expand.scm:596: expand */
t22=((C_word*)t17)[1];
f_6282(t22,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k7029 in k7022 in err in k7001 in check-syntax in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_7031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:718: ##sys#syntax-error-hook */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k9253 in k9223 */
static void C_ccall f_9255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:276: free-meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc6)C_fast_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t1);}

/* k5682 in map-loop902 in a5523 in expand-multiple-values-assignment in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5684(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5684,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5655(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5655(t6,((C_word*)t0)[5],t5);}}

/* k7022 in err in k7001 in check-syntax in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_7024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7024,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7031,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7038,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:720: symbol->string */
t5=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[5]);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7045,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:721: symbol->string */
t5=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[5]);}}

/* err in k7001 in check-syntax in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_7020(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7020,NULL,3,t0,t1,t2);}
t3=*((C_word*)lf[118]+1);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7024,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:717: get-line-number */
t5=*((C_word*)lf[143]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,*((C_word*)lf[118]+1));}

/* k4430 in tmp13099 in a4425 in a4318 in call-handler in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4432(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4432,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4435,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=(C_truep(t4)?C_SCHEME_FALSE:C_eqp(((C_word*)t0)[4],t2));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4448,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4452,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:243: symbol->string */
t8=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,((C_word*)t0)[5]);}
else{
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t2);}}

/* tmp13099 in a4425 in a4318 in call-handler in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_4428(C_word t0,C_word t1){
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
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4428,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4432,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4459,a[2]=((C_word*)t0)[3],a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4465,a[2]=t6,a[3]=t4,a[4]=((C_word)li25),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4470,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word)li26),tmp=(C_word)a,a+=7,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4476,a[2]=t4,a[3]=t6,a[4]=((C_word)li27),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:237: ##sys#dynamic-wind */
t10=*((C_word*)lf[46]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t2,t7,t8,t9);}
else{
/* expand.scm:239: handler */
t3=((C_word*)t0)[5];
((C_proc5)C_fast_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[3],((C_word*)t0)[6],((C_word*)t0)[7]);}}

/* a4425 in a4318 in call-handler in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4426,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4428,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li28),tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4483,a[2]=((C_word*)t0)[8],a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4500,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tmp13099 */
t5=t2;
f_4428(t5,t4);}

/* k9179 in k9130 */
static void C_ccall f_9181(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:258: meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc6)C_fast_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_FALSE);}

/* f_9183 in k8298 in k8293 in k8289 in k8285 in k8281 in k8276 in k8269 in k8264 in k8260 in k8256 in k8252 in k8248 in k8244 in k8238 in k8233 in k8229 in k8214 in process-syntax-rules in k8205 in k8202 in k8199 in ... */
static void C_ccall f_9183(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[8],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_9183,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(C_i_symbolp(t2))){
if(C_truep(C_i_memq(t2,t5))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=C_i_assq(t2,t4);
if(C_truep(t6)){
t7=C_i_cdr(t6);
t8=t3;
t9=C_fixnum_greater_or_equal_p(t7,t8);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_truep(t9)?C_a_i_cons(&a,2,t2,t5):t5));}
else{
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t5);}}}
else{
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9225,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,a[6]=t4,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* synrules.scm:270: segment-template? */
t7=((C_word*)((C_word*)t0)[3])[1];
((C_proc3)C_fast_retrieve_proc(t7))(3,t7,t6,t2);}}

/* k7013 in test in k7001 in check-syntax in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_7015(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* expand.scm:713: err */
t2=((C_word*)((C_word*)t0)[3])[1];
f_7020(t2,((C_word*)t0)[2],((C_word*)t0)[4]);}}

/* k9234 in k9223 */
static void C_ccall f_9236(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:271: free-meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc6)C_fast_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t1);}

/* k5879 in k5857 in fini in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5881,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[16]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5887,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6017,a[2]=((C_word*)t0)[8],a[3]=t5,a[4]=((C_word*)t0)[9],a[5]=((C_word)li60),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_6017(t7,t3,t1);}

/* k5885 in k5879 in k5857 in fini in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5887(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5887,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5891,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t0)[3];
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5900,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t7,a[7]=t5,a[8]=t8,tmp=(C_word)a,a+=9,tmp);
/* expand.scm:507: reverse */
t10=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,((C_word*)t0)[7]);}

/* k7001 in check-syntax in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_7003(C_word c,C_word t0,C_word t1){
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
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7003,2,t0,t1);}
t2=t1;
t3=C_i_nullp(((C_word*)t0)[2]);
t4=(C_truep(t3)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7008,a[2]=t8,a[3]=((C_word)li85),tmp=(C_word)a,a+=4,tmp));
t14=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7020,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li86),tmp=(C_word)a,a+=5,tmp));
t15=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7047,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp));
t16=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7109,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp));
t17=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7136,a[2]=t8,a[3]=t6,a[4]=t12,a[5]=t10,a[6]=t2,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[7])){
t18=C_mutate2((C_word*)lf[118]+1 /* (set! ##sys#syntax-error-culprit ...) */,((C_word*)t0)[7]);
t19=t17;
f_7136(t19,t18);}
else{
t18=t17;
f_7136(t18,C_SCHEME_UNDEFINED);}}

/* test in k7001 in check-syntax in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_7008(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7008,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7015,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:713: pred */
t6=t3;
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,t2);}

/* k10531 in k10506 in k10494 in a10491 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in ... */
static void C_ccall f_10533(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10533,2,t0,t1);}
t2=t1;
t3=C_i_car(((C_word*)t0)[2]);
t4=t3;
t5=C_u_i_cdr(((C_word*)t0)[2]);
t6=C_eqp(t5,C_SCHEME_END_OF_LIST);
t7=(C_truep(t6)?lf[293]:C_a_i_cons(&a,2,lf[103],t5));
t8=t7;
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10554,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t8,a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t10=C_eqp(((C_word*)t0)[6],C_SCHEME_END_OF_LIST);
if(C_truep(t10)){
t11=t9;
f_10554(t11,lf[295]);}
else{
t11=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[6]);
t12=t9;
f_10554(t12,C_a_i_cons(&a,2,lf[50],t11));}}

/* k9223 */
static void C_ccall f_9225(C_word c,C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9225,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9236,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t5=C_i_cddr(((C_word*)t0)[2]);
/* synrules.scm:273: free-meta-variables */
t6=((C_word*)((C_word*)t0)[3])[1];
((C_proc6)C_fast_retrieve_proc(t6))(6,t6,t4,t5,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9255,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
/* synrules.scm:278: free-meta-variables */
t7=((C_word*)((C_word*)t0)[3])[1];
((C_proc6)C_fast_retrieve_proc(t7))(6,t7,t4,t6,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9270,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* synrules.scm:281: vector->list */
t3=*((C_word*)lf[179]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[7]);}}}}

/* map-loop902 in a5523 in expand-multiple-values-assignment in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_5655(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5655,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5684,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* expand.scm:450: g908 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9969 in k9954 in k9916 in test in k9871 in k9868 in k9865 in k9862 in a9856 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in ... */
static void C_ccall f_9971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9971,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_u_i_cdr(((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
/* expand.scm:1390: test */
t4=((C_word*)((C_word*)t0)[5])[1];
f_9885(t4,((C_word*)t0)[2],t3);}}

/* k5822 in k5814 in k5803 in loop in fini in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5824,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* expand.scm:495: ##sys#append */
t3=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],((C_word*)t0)[3],t2);}

/* k10552 in k10531 in k10506 in k10494 in a10491 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in ... */
static void C_fcall f_10554(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_10554,NULL,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10592,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10594,a[2]=t6,a[3]=t9,a[4]=t4,a[5]=((C_word)li153),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_10594(t11,t7,((C_word*)t0)[7]);}

/* k5810 in k5803 in loop in fini in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5812(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5812,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,lf[103],t1));}

/* k5814 in k5803 in loop in fini in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5816(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5816,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5824,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:495: expand */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6282(t4,t3,((C_word*)t0)[4]);}

/* expand in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_4502(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4502,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_listp(t3))){
if(C_truep(C_i_pairp(t4))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4528,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_i_cadr(t4);
t7=t4;
t8=C_u_i_car(t7);
/* expand.scm:263: call-handler */
t9=((C_word*)((C_word*)t0)[2])[1];
f_4304(t9,t5,t2,t6,t3,t8,C_SCHEME_FALSE);}
else{
/* expand.scm:265: values */
C_values(4,0,t1,t3,C_SCHEME_FALSE);}}
else{
/* expand.scm:259: ##sys#syntax-error-hook */
t5=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,lf[49],t3);}}

/* k4498 in a4425 in a4318 in call-handler in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4500(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4500,2,t0,t1);}
/* tmp23100 */
t2=((C_word*)t0)[2];
f_4483(t2,((C_word*)t0)[3],C_a_i_list(&a,1,t1));}

/* k11906 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11908(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:937: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[354],C_SCHEME_END_OF_LIST,t1);}

/* k7734 in k7726 in compare in k7459 in a7453 in make-er/ir-transformer in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_7736(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_7736,NULL,2,t0,t1);}
t2=t1;
if(C_truep(C_i_symbolp(((C_word*)t0)[2]))){
if(C_truep(C_i_symbolp(t2))){
t3=C_i_getprop(((C_word*)t0)[2],lf[181],C_SCHEME_FALSE);
t4=(C_truep(t3)?t3:((C_word*)t0)[2]);
t5=C_i_getprop(t2,lf[181],C_SCHEME_FALSE);
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(t5)?C_eqp(t4,t5):C_eqp(t4,t2)));}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7791,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:856: ##sys#macro-environment */
t4=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}
else{
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7819,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:860: ##sys#macro-environment */
t4=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_eqp(((C_word*)t0)[2],t2));}}}

/* k8728 in k8649 */
static void C_ccall f_8730(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[47],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8730,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_8706,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
t5=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[13])[1],((C_word*)((C_word*)t0)[14])[1]);
t6=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[15])[1],((C_word*)((C_word*)t0)[16])[1],C_fix(-1));
t7=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[7])[1],t5,t6);
t8=C_a_i_list(&a,1,t7);
/* synrules.scm:61: ##sys#append */
t9=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t4,((C_word*)t0)[17],t8);}

/* k9164 in k9130 */
static void C_ccall f_9166(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:255: meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc6)C_fast_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,C_SCHEME_FALSE);}

/* k7726 in compare in k7459 in a7453 in make-er/ir-transformer in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_7728(C_word t0,C_word t1){
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
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7728,NULL,2,t0,t1);}
t2=t1;
t3=((C_word*)t0)[2];
t4=C_i_getprop(t3,lf[5],C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7736,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
t6=t5;
f_7736(t6,t4);}
else{
t6=((C_word*)t0)[2];
t7=((C_word*)t0)[4];
t8=f_3645(t6,t7);
if(C_truep(t8)){
t9=t5;
f_7736(t9,t8);}
else{
t9=((C_word*)t0)[2];
t10=t5;
f_7736(t10,t9);}}}

/* a11929 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11930(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11930,5,t0,t1,t2,t3,t4);}
t5=*((C_word*)lf[355]+1);
/* expand.scm:927: g1689 */
((C_proc10)C_fast_retrieve_proc(*((C_word*)lf[355]+1)))(10,*((C_word*)lf[355]+1),t1,t2,t3,t4,*((C_word*)lf[1]+1),*((C_word*)lf[19]+1),C_SCHEME_FALSE,C_SCHEME_FALSE,lf[357]);}

/* k11292 in k11276 in k11264 in k11026 in k10988 in expand in k10969 in k10966 in k10963 in a10957 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in ... */
static void C_ccall f_11294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_caar(((C_word*)t0)[2]);
/* expand.scm:1175: c */
t3=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,((C_word*)t0)[4],t1,t2);}

/* g2236 in k10414 in k10388 in simplify in k10209 in k10206 in k10203 in a10200 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in ... */
static void C_fcall f_10420(C_word t0,C_word t1,C_word t2){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10420,NULL,3,t0,t1,t2);}
t3=C_i_assq(lf[284],t2);
t4=C_i_length(t3);
if(C_truep(C_fixnum_lessp(t4,C_fix(32)))){
t5=C_i_assq(lf[283],t2);
t6=C_i_cdr(t5);
t7=C_u_i_cdr(t3);
t8=C_a_i_cons(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,lf[276],t8);
/* expand.scm:1333: simplify */
t10=((C_word*)((C_word*)t0)[2])[1];
f_10386(t10,t1,t9);}
else{
t5=((C_word*)t0)[3];
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k4385 in k4374 in copy in k4340 in a4330 in a4324 in a4318 in call-handler in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4387,2,t0,t1);}
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,lf[35],t3));}

/* k10414 in k10388 in simplify in k10209 in k10206 in k10203 in a10200 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in ... */
static void C_ccall f_10416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10416,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10420,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li150),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1294: g2236 */
t3=t2;
f_10420(t3,((C_word*)t0)[4],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10461,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1336: match-expression */
f_6579(t2,((C_word*)t0)[3],lf[285],lf[286]);}}

/* k9954 in k9916 in test in k9871 in k9868 in k9865 in k9862 in a9856 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in ... */
static void C_ccall f_9956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9956,2,t0,t1);}
if(C_truep(t1)){
t2=C_eqp(((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9971,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=C_u_i_car(((C_word*)t0)[2]);
/* expand.scm:1389: test */
t5=((C_word*)((C_word*)t0)[5])[1];
f_9885(t5,t3,t4);}
else{
/* expand.scm:1391: err */
t3=((C_word*)((C_word*)t0)[6])[1];
f_9875(t3,((C_word*)t0)[3],((C_word*)t0)[7]);}}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9998,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1392: c */
t3=((C_word*)t0)[8];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[9],((C_word*)t0)[10]);}}

/* k4374 in copy in k4340 in a4330 in a4324 in a4318 in call-handler in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_4376(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4376,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4387,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=C_i_car(((C_word*)t0)[2]);
/* expand.scm:226: string-append */
t5=*((C_word*)lf[36]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t2,lf[37],t3,lf[38],t4);}
else{
/* expand.scm:232: copy */
t2=((C_word*)((C_word*)t0)[5])[1];
f_4359(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k11276 in k11264 in k11026 in k10988 in expand in k10969 in k10966 in k10963 in a10957 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_11278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11278,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_11031(2,t2,t1);}
else{
t2=C_u_i_car(((C_word*)t0)[3]);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11294,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1175: r */
t4=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[210]);}
else{
t3=((C_word*)t0)[2];
f_11031(2,t3,C_SCHEME_FALSE);}}}

/* k5803 in loop in fini in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_5805(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5805,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5812,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5816,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:495: reverse */
t4=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[4];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
/* expand.scm:496: loop */
t5=((C_word*)((C_word*)t0)[7])[1];
f_5786(t5,((C_word*)t0)[2],t3,t4);}}

/* k11264 in k11026 in k10988 in expand in k10969 in k10966 in k10963 in a10957 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in ... */
static void C_ccall f_11266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11266,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_11031(2,t2,t1);}
else{
t2=C_u_i_car(((C_word*)t0)[3]);
t3=C_i_vectorp(t2);
if(C_truep(t3)){
t4=((C_word*)t0)[2];
f_11031(2,t4,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11278,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t5=C_u_i_car(((C_word*)t0)[3]);
/* expand.scm:1173: ##sys#srfi-4-vector? */
t6=*((C_word*)lf[312]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}}}

/* k4351 in k4340 in a4330 in a4324 in a4318 in call-handler in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4353,2,t0,t1);}
t2=C_a_i_record3(&a,3,lf[33],((C_word*)t0)[2],t1);
/* expand.scm:210: ##sys#abort */
t3=*((C_word*)lf[34]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t2);}

/* copy in k4340 in a4330 in a4324 in a4318 in call-handler in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_4359(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4359,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_i_car(t2);
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4376,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_equalp(lf[39],t3))){
if(C_truep(C_i_pairp(t5))){
t7=C_u_i_car(t5);
t8=t6;
f_4376(t8,C_i_stringp(t7));}
else{
t7=t6;
f_4376(t7,C_SCHEME_FALSE);}}
else{
t7=t6;
f_4376(t7,C_SCHEME_FALSE);}}}

/* k6124 in k6121 in loop in fini/syntax in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6126,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[106],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,1,t3));}

/* map-loop1167 in k6121 in loop in fini/syntax in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_6128(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_6128,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cdr(t3);
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

/* compare in k7459 in a7453 in make-er/ir-transformer in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_7617(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(10);
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)tr4,(void*)f_7617,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
if(C_truep(C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7639,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=t2;
t6=C_u_i_car(t5);
t7=t3;
t8=C_u_i_car(t7);
/* expand.scm:836: compare */
t28=t4;
t29=t6;
t30=t8;
t1=t28;
t2=t29;
t3=t30;
c=4;
goto loop;}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
if(C_truep(C_i_vectorp(t2))){
if(C_truep(C_i_vectorp(t3))){
t4=t2;
t5=C_block_size(t4);
t6=t5;
t7=t3;
t8=C_block_size(t7);
t9=C_eqp(t6,t8);
if(C_truep(t9)){
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7676,a[2]=t6,a[3]=t11,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[2],a[7]=((C_word)li97),tmp=(C_word)a,a+=8,tmp));
t13=((C_word*)t11)[1];
f_7676(t13,t1,C_fix(0),C_SCHEME_TRUE);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t4=C_i_symbolp(t2);
t5=(C_truep(t4)?C_i_symbolp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=t2;
t7=C_i_getprop(t6,lf[5],C_SCHEME_FALSE);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7728,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t7)){
t9=t8;
f_7728(t9,t7);}
else{
t9=t2;
t10=((C_word*)t0)[3];
t11=f_3645(t9,t10);
if(C_truep(t11)){
t12=t8;
f_7728(t12,t11);}
else{
t12=t2;
t13=t8;
f_7728(t13,t12);}}}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_eqp(t2,t3));}}}}

/* k6121 in loop in fini/syntax in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6123,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6126,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6128,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word)li64),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_6128(t6,t2,t1);}

/* f_9272 in k8298 in k8293 in k8289 in k8285 in k8281 in k8276 in k8269 in k8264 in k8260 in k8256 in k8252 in k8248 in k8244 in k8238 in k8233 in k8229 in k8214 in process-syntax-rules in k8205 in k8202 in k8199 in ... */
static void C_ccall f_9272(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9272,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9279,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* synrules.scm:285: segment-template? */
t5=((C_word*)((C_word*)t0)[2])[1];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,t2);}

/* k9268 in k9223 */
static void C_ccall f_9270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:281: free-meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc6)C_fast_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k9277 */
static void C_ccall f_9279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[2])){
/* synrules.scm:288: ##sys#syntax-error-hook */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],lf[216],((C_word*)t0)[4]);}
else{
if(C_truep(C_i_listp(((C_word*)t0)[4]))){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}
else{
/* synrules.scm:290: ##sys#syntax-error-hook */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],lf[217],((C_word*)t0)[4]);}}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7598 in rename in k7459 in a7453 in make-er/ir-transformer in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_7600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7600,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t1);}

/* k11574 in k11561 in a11550 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cadr(((C_word*)t0)[2]);
/* expand.scm:1062: check-for-multiple-bindings */
f_8066(((C_word*)t0)[3],t2,((C_word*)t0)[2],lf[335]);}

/* k10721 in expand in k10686 in a10683 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in ... */
static void C_ccall f_10723(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10723,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[50],((C_word*)t0)[3],t1));}

/* loop in fini/syntax in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_6104(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
a=C_alloc(10);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6104,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(t4)){
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6123,a[2]=t2,a[3]=t1,a[4]=t8,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:519: reverse */
t10=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t3);}
else{
if(C_truep(C_i_pairp(t2))){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6176,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=C_i_car(t2);
if(C_truep(C_i_listp(t6))){
t7=t2;
t8=C_u_i_car(t7);
t9=C_i_length(t8);
if(C_truep(C_fixnum_greater_or_equal_p(C_fix(3),t9))){
t10=C_i_caar(t2);
if(C_truep(C_i_symbolp(t10))){
t11=t2;
t12=C_u_i_car(t11);
t13=C_u_i_car(t12);
/* expand.scm:524: comp */
t14=t5;
f_6176(t14,f_5708(((C_word*)((C_word*)t0)[3])[1],lf[101],t13));}
else{
t11=t5;
f_6176(t11,C_SCHEME_FALSE);}}
else{
t10=t5;
f_6176(t10,C_SCHEME_FALSE);}}
else{
t7=t5;
f_6176(t7,C_SCHEME_FALSE);}}
else{
/* expand.scm:520: loop */
t20=t1;
t21=t2;
t22=t3;
t23=C_SCHEME_TRUE;
t1=t20;
t2=t21;
t3=t22;
t4=t23;
goto loop;}}}

/* k6100 in fini/syntax in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:515: fini */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5774(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t1);}

/* k10488 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in ... */
static void C_ccall f_10490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1261: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[292],C_SCHEME_END_OF_LIST,t1);}

/* k11561 in a11550 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_11563(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11563,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11566,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1058: ##sys#check-syntax */
t3=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[55],((C_word*)t0)[2],lf[334]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11576,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1061: ##sys#check-syntax */
t3=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[55],((C_word*)t0)[2],lf[336]);}}

/* k11564 in k11561 in a11550 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_caddr(((C_word*)t0)[2]);
/* expand.scm:1059: check-for-multiple-bindings */
f_8066(((C_word*)t0)[3],t2,((C_word*)t0)[2],lf[333]);}

/* k9934 in k9916 in test in k9871 in k9868 in k9865 in k9862 in a9856 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in ... */
static void C_ccall f_9936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9936,2,t0,t1);}
if(C_truep(t1)){
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
/* expand.scm:1384: test */
t4=((C_word*)((C_word*)t0)[4])[1];
f_9885(t4,((C_word*)t0)[5],t3);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a10491 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in ... */
static void C_ccall f_10492(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10492,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10496,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1266: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[292],t2,lf[297]);}

/* k10494 in a10491 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in ... */
static void C_ccall f_10496(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10496,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=C_i_caddr(((C_word*)t0)[2]);
t5=t4;
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
t8=C_u_i_cdr(t7);
t9=C_u_i_cdr(t8);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10508,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t9,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1270: r */
t11=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t11))(3,t11,t10,lf[296]);}

/* k7916 in mirror-rename in k7459 in a7453 in make-er/ir-transformer in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_7918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:884: mirror-rename */
t2=((C_word*)((C_word*)t0)[2])[1];
f_7879(t2,((C_word*)t0)[3],t1);}

/* k7912 in mirror-rename in k7459 in a7453 in make-er/ir-transformer in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_7914(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:884: list->vector */
t2=*((C_word*)lf[178]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k11534 in k11531 in a11528 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11536,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,lf[52],t3));}

/* g465 in loop1 in globalize in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_4055(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4055,NULL,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
/* expand.scm:145: loop1 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4039(t3,t1,t2);}
else{
t3=((C_word*)t0)[3];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5567 in k5548 in k5529 in k5526 in a5523 in expand-multiple-values-assignment in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5569,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)t0)[2]))){
/* expand.scm:449: ##sys#append */
t2=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,lf[93]);}
else{
if(C_truep(C_i_nullp(((C_word*)t0)[4]))){
/* expand.scm:449: ##sys#append */
t2=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}
else{
t2=C_a_i_list(&a,3,lf[94],((C_word*)t0)[5],((C_word*)t0)[4]);
t3=C_a_i_list(&a,1,t2);
/* expand.scm:449: ##sys#append */
t4=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[3],t1,t3);}}}

/* k11531 in a11528 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11533,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11536,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* expand.scm:1071: check-for-multiple-bindings */
f_8066(t2,t3,((C_word*)t0)[2],lf[331]);}

/* a11528 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11529(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11529,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11533,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1070: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[330],t2,lf[332]);}

/* loop in k6736 in k6846 in loop in k6792 in syntax-error/context in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_6743(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6743,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_i_caar(t2);
t4=C_eqp(lf[138],t3);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6763,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:650: cadar */
t6=*((C_word*)lf[68]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}
else{
t5=t2;
t6=C_u_i_cdr(t5);
/* expand.scm:651: loop */
t9=t1;
t10=t6;
t1=t9;
t2=t10;
goto loop;}}}

/* k11525 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1065: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[330],C_SCHEME_END_OF_LIST,t1);}

/* k5548 in k5529 in k5526 in a5523 in expand-multiple-values-assignment in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5550(C_word c,C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5550,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5554,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t0)[4];
t9=C_i_check_list_2(t8,lf[16]);
t10=C_i_check_list_2(((C_word*)t0)[5],lf[16]);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5569,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5591,a[2]=t7,a[3]=t13,a[4]=t5,a[5]=((C_word)li52),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_5591(t15,t11,t8,((C_word*)t0)[5]);}

/* k5552 in k5548 in k5529 in k5526 in a5523 in expand-multiple-values-assignment in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5554,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[72],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[92],((C_word*)t0)[4],t3));}

/* k10477 in k10209 in k10206 in k10203 in a10200 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_10479(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cadr(((C_word*)t0)[2]);
/* expand.scm:1340: walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_10213(t3,((C_word*)t0)[4],t2,C_fix(0));}

/* k5349 in k5241 in loop in k4935 in k4932 in k4929 in k4926 in expand-extended-lambda-list in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_5332(t3,t2);}

/* k10784 in expand in k10757 in k10754 in k10751 in k10748 in k10745 in k10737 in a10734 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in ... */
static void C_ccall f_10786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10786,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10792,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10799,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1229: ##sys#strip-syntax */
t4=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[6]);}
else{
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10805,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
t3=C_i_car(((C_word*)t0)[6]);
/* expand.scm:1232: c */
t4=((C_word*)t0)[8];
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t2,((C_word*)t0)[12],t3);}}

/* k6765 in k6761 in loop in k6736 in k6846 in loop in k6792 in syntax-error/context in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6767,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k11509 in a11506 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11511,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11514,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* expand.scm:1080: check-for-multiple-bindings */
f_8066(t2,t3,((C_word*)t0)[2],lf[328]);}

/* k11512 in k11509 in a11506 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11514,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,lf[327],t3));}

/* k9359 in loop */
static void C_ccall f_9361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
/* synrules.scm:311: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_9354(t3,((C_word*)t0)[4],t2);}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* a11506 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11507(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11507,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11511,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1079: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[326],t2,lf[329]);}

/* k6761 in loop in k6736 in k6846 in loop in k6792 in syntax-error/context in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6763,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6767,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* expand.scm:650: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6743(t6,t3,t5);}

/* k8289 in k8285 in k8281 in k8276 in k8269 in k8264 in k8260 in k8256 in k8252 in k8248 in k8244 in k8238 in k8233 in k8229 in k8214 in process-syntax-rules in k8205 in k8202 in k8199 in k8196 in k8193 in k8190 in ... */
static void C_ccall f_8291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8291,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_8295,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[2],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:99: r */
t4=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[218]);}

/* k8293 in k8289 in k8285 in k8281 in k8276 in k8269 in k8264 in k8260 in k8256 in k8252 in k8248 in k8244 in k8238 in k8233 in k8229 in k8214 in process-syntax-rules in k8205 in k8202 in k8199 in k8196 in k8193 in ... */
static void C_ccall f_8295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[51],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8295,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|50,a[1]=(C_word)f_8300,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[2],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],tmp=(C_word)a,a+=51,tmp);
/* synrules.scm:101: r */
t4=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[52]);}

/* k11503 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1074: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[326],C_SCHEME_END_OF_LIST,t1);}

/* k9329 */
static void C_ccall f_9331(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9331,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9338,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cdr(((C_word*)t0)[3]);
/* synrules.scm:302: segment-depth */
t4=((C_word*)((C_word*)t0)[4])[1];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}}

/* k9336 in k9329 */
static void C_ccall f_9338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fixnum_plus(C_fix(1),t1));}

/* k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_8147(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8147,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8150,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11483,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11485,a[2]=((C_word)li168),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1086: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k6489 in k6306 in loop in expand in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:587: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6288(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_8141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8141,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8144,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11527,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11529,a[2]=((C_word)li170),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1068: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_8144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8144,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8147,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11505,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11507,a[2]=((C_word)li169),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1077: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in ... */
static void C_ccall f_8159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8159,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8162,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11328,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11330,a[2]=((C_word)li164),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1130: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 in ... */
static void C_ccall f_8156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8156,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8159,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11380,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11382,a[2]=((C_word)li165),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1116: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_8153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8153,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8156,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11417,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11419,a[2]=((C_word)li166),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1104: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_8150(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8150,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8153,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11461,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11463,a[2]=((C_word)li167),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1095: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k8269 in k8264 in k8260 in k8256 in k8252 in k8248 in k8244 in k8238 in k8233 in k8229 in k8214 in process-syntax-rules in k8205 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in ... */
static void C_ccall f_8271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8271,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,lf[205]);
t4=C_mutate2(((C_word *)((C_word*)t0)[4])+1,lf[206]);
t5=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_8278,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[16],a[14]=((C_word*)t0)[17],a[15]=((C_word*)t0)[18],a[16]=((C_word*)t0)[19],a[17]=((C_word*)t0)[20],a[18]=((C_word*)t0)[21],a[19]=((C_word*)t0)[22],a[20]=((C_word*)t0)[23],a[21]=((C_word*)t0)[24],a[22]=((C_word*)t0)[25],a[23]=((C_word*)t0)[26],a[24]=((C_word*)t0)[27],a[25]=((C_word*)t0)[28],a[26]=((C_word*)t0)[29],a[27]=((C_word*)t0)[30],a[28]=((C_word*)t0)[31],a[29]=((C_word*)t0)[32],a[30]=((C_word*)t0)[33],a[31]=((C_word*)t0)[34],a[32]=((C_word*)t0)[35],a[33]=((C_word*)t0)[36],a[34]=((C_word*)t0)[37],a[35]=((C_word*)t0)[38],a[36]=((C_word*)t0)[39],a[37]=((C_word*)t0)[40],a[38]=((C_word*)t0)[41],a[39]=((C_word*)t0)[2],a[40]=((C_word*)t0)[42],a[41]=((C_word*)t0)[3],a[42]=((C_word*)t0)[43],a[43]=((C_word*)t0)[4],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:94: r */
t6=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,lf[221]);}

/* k8276 in k8269 in k8264 in k8260 in k8256 in k8252 in k8248 in k8244 in k8238 in k8233 in k8229 in k8214 in process-syntax-rules in k8205 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in ... */
static void C_ccall f_8278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8278,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,lf[207]);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_8283,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[2],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:96: r */
t4=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[210]);}

/* map-loop931 in k5548 in k5529 in k5526 in a5523 in expand-multiple-values-assignment in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_5591(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_5591,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[94],t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5604,a[2]=((C_word*)t0)[2],a[3]=t10,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t12=t11;
f_5604(t12,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t10));}
else{
t12=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t10);
t13=t11;
f_5604(t13,t12);}}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* expand in k10757 in k10754 in k10751 in k10748 in k10745 in k10737 in a10734 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in ... */
static void C_fcall f_10772(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10772,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=C_i_car(t2);
t5=t4;
t6=t2;
t7=C_u_i_cdr(t6);
t8=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_10786,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t7,a[6]=t5,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],tmp=(C_word)a,a+=13,tmp);
/* expand.scm:1225: ##sys#check-syntax */
t9=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,lf[299],t5,lf[302]);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[303]);}}

/* k10768 in k10757 in k10754 in k10751 in k10748 in k10745 in k10737 in a10734 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_10770(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10770,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[55],((C_word*)t0)[3],t1));}

/* loop */
static void C_fcall f_9354(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9354,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9361,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_car(t4);
/* synrules.scm:310: ellipsis? */
t6=((C_word*)((C_word*)t0)[3])[1];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t3,t5);}
else{
t4=t3;
f_9361(2,t4,C_SCHEME_FALSE);}}

/* k8281 in k8276 in k8269 in k8264 in k8260 in k8256 in k8252 in k8248 in k8244 in k8238 in k8233 in k8229 in k8214 in process-syntax-rules in k8205 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in ... */
static void C_ccall f_8283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8283,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_8287,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[37],a[37]=((C_word*)t0)[38],a[38]=((C_word*)t0)[39],a[39]=((C_word*)t0)[40],a[40]=((C_word*)t0)[41],a[41]=((C_word*)t0)[42],a[42]=((C_word*)t0)[43],a[43]=((C_word*)t0)[44],a[44]=((C_word*)t0)[45],a[45]=((C_word*)t0)[46],a[46]=((C_word*)t0)[47],a[47]=((C_word*)t0)[2],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:97: r */
t4=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[220]);}

/* k8285 in k8281 in k8276 in k8269 in k8264 in k8260 in k8256 in k8252 in k8248 in k8244 in k8238 in k8233 in k8229 in k8214 in process-syntax-rules in k8205 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in ... */
static void C_ccall f_8287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8287,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_8291,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[2],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:98: r */
t4=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[219]);}

/* k6188 in k6174 in loop in fini/syntax in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6190,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* expand.scm:526: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6104(t3,((C_word*)t0)[4],((C_word*)t0)[5],t2,C_SCHEME_FALSE);}

/* k10590 in k10552 in k10531 in k10506 in k10494 in a10491 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_10592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[42],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10592,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[53],t2);
t4=C_a_i_list(&a,3,lf[103],((C_word*)t0)[3],t3);
t5=C_a_i_list(&a,4,lf[294],((C_word*)t0)[4],((C_word*)t0)[5],t4);
t6=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,4,lf[50],((C_word*)t0)[2],((C_word*)t0)[7],t5));}

/* k6445 in k6306 in loop in expand in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:581: fini/syntax */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6094(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8]);}

/* k11201 in k11144 in k11104 in k11029 in k11026 in k10988 in expand in k10969 in k10966 in k10963 in a10957 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in ... */
static void C_ccall f_11203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11203,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,4,lf[294],((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* map-loop2141 in k10552 in k10531 in k10506 in k10494 in a10491 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in ... */
static void C_fcall f_10594(C_word t0,C_word t1,C_word t2){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10594,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10623,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_cdr(t4);
t6=C_i_cdr(t5);
t7=C_eqp(t6,C_SCHEME_END_OF_LIST);
if(C_truep(t7)){
t8=C_u_i_car(t4);
t9=t3;
f_10623(t9,t8);}
else{
t8=C_u_i_cdr(t4);
t9=C_i_cdr(t8);
t10=t3;
f_10623(t10,C_i_car(t9));}}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6457 in k6306 in loop in expand in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6459(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6459,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=C_i_caddr(((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[4]);
/* expand.scm:585: loop */
t6=((C_word*)((C_word*)t0)[5])[1];
f_6288(t6,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],t3,t5);}

/* k9630 in a9624 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in ... */
static void C_ccall f_9632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9632,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9638,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)t0)[2],C_fix(4)))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9795,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1444: r */
t4=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[251]);}
else{
t3=t2;
f_9638(2,t3,C_SCHEME_FALSE);}}

/* k9636 in k9630 in a9624 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in ... */
static void C_ccall f_9638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9638,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9641,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1445: ##sys#strip-syntax */
t3=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9718,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9781,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_i_caddr(((C_word*)t0)[5]);
/* expand.scm:1485: ##sys#strip-syntax */
t5=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}}

/* mwalk in match-expression in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_6582(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(6);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6582,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t3))){
if(C_truep(C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6636,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=t2;
t6=C_u_i_car(t5);
t7=C_i_car(t3);
/* expand.scm:612: mwalk */
t14=t4;
t15=t6;
t16=t7;
t1=t14;
t2=t15;
t3=t16;
goto loop;}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t4=C_i_assq(t3,((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6596,a[2]=t2,a[3]=((C_word)li71),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:606: g1267 */
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,f_6596(t5,t4));}
else{
if(C_truep(C_i_memq(t3,((C_word*)t0)[4]))){
t5=C_a_i_cons(&a,2,t3,t2);
t6=C_a_i_cons(&a,2,t5,((C_word*)((C_word*)t0)[3])[1]);
t7=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_TRUE);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_eqp(t2,t3));}}}}

/* k8103 in k8083 in loop in check-for-multiple-bindings in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_8105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=C_u_i_car(t3);
/* expand.scm:1045: ##sys#warn */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[188]+1)))(5,*((C_word*)lf[188]+1),((C_word*)t0)[3],t1,t4,((C_word*)t0)[4]);}

/* k8260 in k8256 in k8252 in k8248 in k8244 in k8238 in k8233 in k8229 in k8214 in process-syntax-rules in k8205 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in ... */
static void C_ccall f_8262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8262,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_8266,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[2],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:88: r */
t4=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[88]);}

/* k8264 in k8260 in k8256 in k8252 in k8248 in k8244 in k8238 in k8233 in k8229 in k8214 in process-syntax-rules in k8205 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in ... */
static void C_ccall f_8266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8266,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,lf[204]);
t4=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_8271,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[16],a[15]=((C_word*)t0)[17],a[16]=((C_word*)t0)[18],a[17]=((C_word*)t0)[19],a[18]=((C_word*)t0)[20],a[19]=((C_word*)t0)[21],a[20]=((C_word*)t0)[22],a[21]=((C_word*)t0)[23],a[22]=((C_word*)t0)[24],a[23]=((C_word*)t0)[2],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[3],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:90: r */
t5=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,lf[222]);}

/* k6174 in loop in fini/syntax in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_6176(C_word t0,C_word t1){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6176,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6190,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=C_i_cadr(t3);
if(C_truep(C_i_pairp(t7))){
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6200,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* expand.scm:530: caadr */
t9=*((C_word*)lf[107]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t3);}
else{
t8=C_u_i_car(t3);
t9=C_u_i_cdr(t3);
t10=C_u_i_car(t9);
t11=C_eqp(t8,t10);
if(C_truep(t11)){
/* expand.scm:536: ##sys#defjam-error */
t12=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t6,t3);}
else{
t12=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
/* expand.scm:526: loop */
t13=((C_word*)((C_word*)t0)[4])[1];
f_6104(t13,((C_word*)t0)[5],t5,t12,C_SCHEME_FALSE);}}}
else{
/* expand.scm:540: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_6104(t2,((C_word*)t0)[5],((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_TRUE);}}

/* match-expression in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_6579(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6579,NULL,4,t1,t2,t3,t4);}
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6582,a[2]=t8,a[3]=t6,a[4]=t4,a[5]=((C_word)li72),tmp=(C_word)a,a+=6,tmp));
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6659,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:615: mwalk */
t11=((C_word*)t8)[1];
f_6582(t11,t10,t2,t3);}

/* k9639 in k9636 in k9630 in a9624 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in ... */
static void C_ccall f_9641(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9641,2,t0,t1);}
t2=t1;
t3=C_i_cadr(t2);
t4=t3;
t5=C_i_cadddr(t2);
t6=t5;
if(C_truep(C_i_symbolp(t6))){
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[2],C_fix(4)))){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9662,a[2]=t2,a[3]=t6,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9696,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9700,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1466: symbol->string */
t10=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t4);}
else{
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9703,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1472: ##sys#register-module-alias */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[256]+1)))(4,*((C_word*)lf[256]+1),t7,t4,t6);}}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9706,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1475: ##sys#check-syntax */
t8=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t7,lf[249],t2,lf[258]);}}

/* k4136 in ensure-transformer in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4138(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_slot(t1,C_fix(1)));}

/* g1267 in mwalk in match-expression in k4115 in k3641 in k3637 in k3633 in k3629 */
static C_word C_fcall f_6596(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;
t2=C_i_cdr(t1);
return(C_i_equalp(((C_word*)t0)[2],t2));}

/* ##sys#ensure-transformer in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4121(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_4121r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4121r(t0,t1,t2,t3);}}

static void C_ccall f_4121r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(3);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
if(C_truep(C_i_closurep(t2))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4138,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:161: ##sys#er-transformer */
t7=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}
else{
if(C_truep(C_i_structurep(t2,lf[24]))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_slot(t2,C_fix(1)));}
else{
/* expand.scm:163: ##sys#error */
t6=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t5,lf[26],t2);}}}

/* k8796 */
static void C_ccall f_8798(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8798,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list1(&a,1,t2));}

/* k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4117(C_word c,C_word t0,C_word t1){
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
C_word ab[78],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4117,2,t0,t1);}
t2=C_mutate2((C_word*)lf[19]+1 /* (set! ##sys#macro-environment ...) */,t1);
t3=C_set_block_item(lf[20] /* ##sys#chicken-macro-environment */,0,C_SCHEME_END_OF_LIST);
t4=C_set_block_item(lf[21] /* ##sys#chicken-ffi-macro-environment */,0,C_SCHEME_END_OF_LIST);
t5=C_mutate2((C_word*)lf[22]+1 /* (set! ##sys#ensure-transformer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4121,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[27]+1 /* (set! ##sys#extend-macro-environment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4158,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[28]+1 /* (set! ##sys#copy-macro ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4200,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[29]+1 /* (set! ##sys#macro? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4213,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[30]+1 /* (set! ##sys#unregister-macro ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4250,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[31]+1 /* (set! ##sys#undefine-macro! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4295,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[32]+1 /* (set! ##sys#expand-0 ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4301,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t12=C_set_block_item(lf[58] /* ##sys#compiler-syntax-hook */,0,C_SCHEME_FALSE);
t13=C_set_block_item(lf[60] /* ##sys#enable-runtime-macros */,0,C_SCHEME_FALSE);
t14=C_mutate2((C_word*)lf[61]+1 /* (set! expand ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4794,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate2((C_word*)lf[62]+1 /* (set! ##sys#expand ...) */,*((C_word*)lf[61]+1));
t16=C_mutate2((C_word*)lf[63]+1 /* (set! ##sys#extended-lambda-list? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4861,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate2((C_word*)lf[67]+1 /* (set! ##sys#expand-extended-lambda-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4908,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate2((C_word*)lf[89]+1 /* (set! ##sys#defjam-error ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5512,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate2((C_word*)lf[91]+1 /* (set! ##sys#expand-multiple-values-assignment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5518,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t20=C_set_block_item(lf[96] /* ##sys#define-definition */,0,C_SCHEME_UNDEFINED);
t21=C_set_block_item(lf[97] /* ##sys#define-syntax-definition */,0,C_SCHEME_UNDEFINED);
t22=C_set_block_item(lf[98] /* ##sys#define-values-definition */,0,C_SCHEME_UNDEFINED);
t23=C_mutate2((C_word*)lf[99]+1 /* (set! ##sys#canonicalize-body ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5693,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate2(&lf[116] /* (set! match-expression ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6579,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate2((C_word*)lf[108]+1 /* (set! ##sys#expand-curried-define ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6661,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp));
t26=C_set_block_item(lf[117] /* ##sys#line-number-database */,0,C_SCHEME_FALSE);
t27=C_set_block_item(lf[118] /* ##sys#syntax-error-culprit */,0,C_SCHEME_FALSE);
t28=C_set_block_item(lf[119] /* ##sys#syntax-context */,0,C_SCHEME_END_OF_LIST);
t29=C_mutate2((C_word*)lf[120]+1 /* (set! syntax-error ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6716,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate2((C_word*)lf[41]+1 /* (set! ##sys#syntax-error-hook ...) */,*((C_word*)lf[120]+1));
t31=C_mutate2((C_word*)lf[123]+1 /* (set! ##sys#syntax-error/context ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6727,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp));
t32=C_mutate2((C_word*)lf[45]+1 /* (set! ##sys#syntax-rules-mismatch ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6948,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate2((C_word*)lf[143]+1 /* (set! get-line-number ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6954,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp));
t34=C_mutate2((C_word*)lf[54]+1 /* (set! ##sys#check-syntax ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6993,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate2((C_word*)lf[177]+1 /* (set! make-er/ir-transformer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7448,a[2]=((C_word)li104),tmp=(C_word)a,a+=3,tmp));
t36=C_mutate2((C_word*)lf[183]+1 /* (set! er-macro-transformer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8016,a[2]=((C_word)li105),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate2((C_word*)lf[184]+1 /* (set! ir-macro-transformer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8022,a[2]=((C_word)li106),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate2((C_word*)lf[23]+1 /* (set! ##sys#er-transformer ...) */,*((C_word*)lf[183]+1));
t39=C_mutate2((C_word*)lf[185]+1 /* (set! ##sys#ir-transformer ...) */,*((C_word*)lf[184]+1));
t40=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8031,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t41=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11928,a[2]=t40,tmp=(C_word)a,a+=3,tmp);
t42=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11930,a[2]=((C_word)li182),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:926: ##sys#er-transformer */
t43=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t43+1)))(3,t43,t41,t42);}

/* ##sys#macro-subset in k8205 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in ... */
static void C_ccall f_9381(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_9381r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_9381r(t0,t1,t2,t3);}}

static void C_ccall f_9381r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(8);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9388,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9395,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1530: ##sys#macro-environment */
t9=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}

/* k9386 in macro-subset in k8205 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in ... */
static void C_ccall f_9388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1534: ##sys#fixup-macro-environment */
t2=*((C_word*)lf[232]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k6780 in k6846 in loop in k6792 in syntax-error/context in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:647: ##sys#get */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[139]+1)))(4,*((C_word*)lf[139]+1),((C_word*)t0)[2],t1,lf[140]);}

/* f_8774 in k8298 in k8293 in k8289 in k8285 in k8281 in k8276 in k8269 in k8264 in k8260 in k8256 in k8252 in k8248 in k8244 in k8238 in k8233 in k8229 in k8214 in process-syntax-rules in k8205 in k8202 in k8199 in ... */
static void C_ccall f_8774(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_8774,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(C_i_symbolp(t2))){
if(C_truep(C_i_memq(t2,((C_word*)t0)[2]))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_END_OF_LIST);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8798,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* synrules.scm:174: mapit */
t7=t4;
((C_proc3)C_fast_retrieve_proc(t7))(3,t7,t6,t3);}}
else{
t6=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_8804,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t4,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],tmp=(C_word)a,a+=13,tmp);
/* synrules.scm:175: segment-pattern? */
t7=((C_word*)((C_word*)t0)[10])[1];
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t6,t2,t5);}}

/* k10506 in k10494 in a10491 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in ... */
static void C_ccall f_10508(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10508,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(((C_word*)t0)[2],lf[16]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10533,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10645,a[2]=t6,a[3]=t10,a[4]=t4,a[5]=((C_word)li154),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_10645(t12,t8,((C_word*)t0)[2]);}

/* outstr in k6792 in syntax-error/context in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_6796(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6796,NULL,3,t0,t1,t2);}
/* expand.scm:656: ##sys#print */
t3=*((C_word*)lf[124]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,t2,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* k6792 in syntax-error/context in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6794(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6794,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6796,a[2]=t2,a[3]=((C_word)li77),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6803,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6812,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t6,a[7]=((C_word)li80),tmp=(C_word)a,a+=8,tmp));
t8=((C_word*)t6)[1];
f_6812(t8,t4,*((C_word*)lf[119]+1));}

/* k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in ... */
static void C_ccall f_8162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8162,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8165,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10956,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10958,a[2]=((C_word)li163),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1146: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in ... */
static void C_ccall f_8165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8165,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8168,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10733,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10735,a[2]=((C_word)li161),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1209: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in ... */
static void C_ccall f_8168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8168,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8171,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10682,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10684,a[2]=((C_word)li157),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1251: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k11553 in a11550 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11555(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11555,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,lf[50],t3));}

/* g509 in k4163 in k4160 in extend-macro-environment in k4115 in k3641 in k3637 in k3633 in k3629 */
static C_word C_fcall f_4172(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
t2=C_i_set_car(t1,((C_word*)t0)[2]);
t3=t1;
t4=C_u_i_cdr(t3);
t5=C_i_set_car(t4,((C_word*)t0)[3]);
return(t1);}

/* a11550 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11551(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11551,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11555,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11563,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_i_cdr(t2);
if(C_truep(C_i_pairp(t7))){
t8=C_i_cadr(t2);
t9=t6;
f_11563(t9,C_i_symbolp(t8));}
else{
t8=t6;
f_11563(t8,C_SCHEME_FALSE);}}

/* k5529 in k5526 in a5523 in expand-multiple-values-assignment in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5531(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5531,2,t0,t1);}
t2=t1;
t3=C_a_i_list(&a,3,lf[72],C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5550,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* expand.scm:455: append */
t6=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,((C_word*)t0)[5],t2);}

/* k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in ... */
static void C_ccall f_8171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8171,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8174,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10490,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10492,a[2]=((C_word)li155),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1264: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in ... */
static void C_ccall f_8177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8177,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8180,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10166,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10168,a[2]=((C_word)li146),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1345: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in ... */
static void C_ccall f_8174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8174,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8177,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10199,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10201,a[2]=((C_word)li152),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1293: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k11547 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1052: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[55],C_SCHEME_END_OF_LIST,t1);}

/* k5270 in k5241 in loop in k4935 in k4932 in k4929 in k4926 in expand-extended-lambda-list in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_5256(t3,t2);}

/* f_8466 in k8298 in k8293 in k8289 in k8285 in k8281 in k8276 in k8269 in k8264 in k8260 in k8256 in k8252 in k8248 in k8244 in k8238 in k8233 in k8229 in k8214 in process-syntax-rules in k8205 in k8202 in k8199 in ... */
static void C_ccall f_8466(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[28],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8466,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_symbolp(t3))){
if(C_truep(C_i_memq(t3,((C_word*)t0)[2]))){
t5=C_a_i_list(&a,2,lf[209],t3);
t6=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[3])[1],t5);
t7=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[4])[1],t2,t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_list(&a,1,t7));}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_END_OF_LIST);}}
else{
t5=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_8500,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
/* synrules.scm:136: segment-pattern? */
t6=((C_word*)((C_word*)t0)[17])[1];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t5,t3,t4);}}

/* k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in ... */
static void C_ccall f_8180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8180,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8183,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10145,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10147,a[2]=((C_word)li145),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1355: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in ... */
static void C_ccall f_8183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8183,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8186,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9855,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9857,a[2]=((C_word)li144),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1363: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in ... */
static void C_ccall f_8186(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8186,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8189,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9842,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9844,a[2]=((C_word)li139),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1417: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_8189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8189,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8192,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9829,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9831,a[2]=((C_word)li138),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1425: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* f_9344 in k8298 in k8293 in k8289 in k8285 in k8281 in k8276 in k8269 in k8264 in k8260 in k8256 in k8252 in k8248 in k8244 in k8238 in k8233 in k8229 in k8214 in process-syntax-rules in k8205 in k8202 in k8199 in ... */
static void C_ccall f_9344(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9344,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9354,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word)li125),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_9354(t7,t1,t3);}

/* k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in ... */
static void C_ccall f_8192(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8192,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8195,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9803,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9805,a[2]=((C_word)li137),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1433: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in ... */
static void C_ccall f_8195(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8195,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8198,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9623,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9625,a[2]=((C_word)li136),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1440: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in ... */
static void C_ccall f_8198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8198,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8201,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9593,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9595,a[2]=((C_word)li135),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1501: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k5291 in k5288 in k5241 in loop in k4935 in k4932 in k4929 in k4926 in expand-extended-lambda-list in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_5293(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_i_car(((C_word*)t0)[2]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
t4=C_u_i_cdr(((C_word*)t0)[2]);
/* expand.scm:408: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_4942(t5,((C_word*)t0)[5],C_fix(2),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_END_OF_LIST,t4);}

/* k5288 in k5241 in loop in k4935 in k4932 in k4929 in k4926 in expand-extended-lambda-list in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_5290(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5290,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5293,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)((C_word*)t0)[8])[1];
if(C_truep(t3)){
t4=t2;
f_5293(t4,C_SCHEME_UNDEFINED);}
else{
t4=C_i_car(((C_word*)t0)[2]);
t5=C_mutate2(((C_word *)((C_word*)t0)[8])+1,t4);
t6=t2;
f_5293(t6,t5);}}
else{
/* expand.scm:409: err */
t2=((C_word*)t0)[9];
f_4911(t2,((C_word*)t0)[5],lf[78]);}}

/* loop in k9393 in macro-subset in k8205 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in ... */
static void C_fcall f_9397(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_9397,NULL,3,t0,t1,t2);}
t3=C_i_nullp(t2);
t4=(C_truep(t3)?t3:C_eqp(t2,((C_word*)t0)[2]));
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_END_OF_LIST);}
else{
t5=C_i_car(t2);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9418,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=t2;
t9=C_u_i_cdr(t8);
/* expand.scm:1533: loop */
t11=t7;
t12=t9;
t1=t11;
t2=t12;
goto loop;}}

/* k9393 in macro-subset in k8205 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in ... */
static void C_ccall f_9395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9395,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9397,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li128),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_9397(t5,((C_word*)t0)[3],t1);}

/* k9694 in k9639 in k9636 in k9630 in a9624 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in ... */
static void C_ccall f_9696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1463: string->symbol */
t2=*((C_word*)lf[252]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* comp in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static C_word C_fcall f_5708(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_stack_overflow_check;
t3=f_3645(t2,((C_word*)t0)[2]);
t4=C_eqp(t1,t3);
if(C_truep(t4)){
return(t4);}
else{
t5=t1;
t6=C_eqp(t5,lf[100]);
if(C_truep(t6)){
return((C_truep(t3)?C_eqp(t3,*((C_word*)lf[96]+1)):C_eqp(t1,t2)));}
else{
t7=C_eqp(t5,lf[101]);
if(C_truep(t7)){
return((C_truep(t3)?C_eqp(t3,*((C_word*)lf[97]+1)):C_eqp(t1,t2)));}
else{
t8=C_eqp(t5,lf[102]);
return((C_truep(t8)?(C_truep(t3)?C_eqp(t3,*((C_word*)lf[98]+1)):C_eqp(t1,t2)):C_eqp(t1,t2)));}}}}

/* k9916 in test in k9871 in k9868 in k9865 in k9862 in a9856 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in ... */
static void C_ccall f_9918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9918,2,t0,t1);}
if(C_truep(t1)){
t2=C_eqp(((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9936,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=C_u_i_car(((C_word*)t0)[2]);
/* expand.scm:1383: test */
t5=((C_word*)((C_word*)t0)[5])[1];
f_9885(t5,t3,t4);}
else{
/* expand.scm:1385: err */
t3=((C_word*)((C_word*)t0)[6])[1];
f_9875(t3,((C_word*)t0)[3],((C_word*)t0)[7]);}}}
else{
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9956,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
/* expand.scm:1386: c */
t3=((C_word*)t0)[9];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[8],((C_word*)t0)[11]);}}

/* f_9300 in k8298 in k8293 in k8289 in k8285 in k8281 in k8276 in k8269 in k8264 in k8260 in k8256 in k8252 in k8248 in k8244 in k8238 in k8233 in k8229 in k8214 in process-syntax-rules in k8205 in k8202 in k8199 in ... */
static void C_ccall f_9300(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9300,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=C_u_i_cdr(t3);
if(C_truep(C_i_pairp(t4))){
t5=C_i_cadr(t2);
/* synrules.scm:296: ellipsis? */
t6=((C_word*)((C_word*)t0)[2])[1];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t1,t5);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k5602 in map-loop931 in k5548 in k5529 in k5526 in a5523 in expand-multiple-values-assignment in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_5604(C_word t0,C_word t1){
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
f_5591(t5,((C_word*)t0)[7],t3,t4);}

/* k9663 in k9660 in k9639 in k9636 in k9630 in a9624 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in ... */
static void C_ccall f_9665(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9665,2,t0,t1);}
t2=C_i_cddddr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[250],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],t3);
t5=C_a_i_cons(&a,2,t1,t4);
t6=C_a_i_list(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
t7=C_a_i_list(&a,4,t1,((C_word*)t0)[5],lf[251],t6);
t8=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_list(&a,3,lf[103],t5,t7));}

/* k9660 in k9639 in k9636 in k9630 in a9624 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in ... */
static void C_ccall f_9662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9662,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9665,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1467: r */
t4=((C_word*)t0)[6];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[249]);}

/* f_9324 in k8298 in k8293 in k8289 in k8285 in k8281 in k8276 in k8269 in k8264 in k8260 in k8256 in k8252 in k8248 in k8244 in k8238 in k8233 in k8229 in k8214 in process-syntax-rules in k8205 in k8202 in k8199 in ... */
static void C_ccall f_9324(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9324,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9331,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* synrules.scm:301: segment-template? */
t4=((C_word*)((C_word*)t0)[3])[1];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,t2);}

/* k7077 in loop in k7049 in lambda-list? in k7001 in check-syntax in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_7079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_not(t1));}

/* k6508 in k6306 in loop in expand in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6510,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[2],t1);
if(C_truep(t2)){
/* expand.scm:593: fini */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5774(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);}
else{
t3=C_a_i_cons(&a,2,t1,((C_word*)t0)[10]);
/* expand.scm:594: loop */
t4=((C_word*)((C_word*)t0)[11])[1];
f_6288(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8]);}}

/* k9621 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in ... */
static void C_ccall f_9623(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1437: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[249],C_SCHEME_END_OF_LIST,t1);}

/* a9624 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in ... */
static void C_ccall f_9625(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9625,5,t0,t1,t2,t3,t4);}
t5=C_i_length(t2);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9632,a[2]=t6,a[3]=t1,a[4]=t3,a[5]=t2,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1443: ##sys#check-syntax */
t8=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t7,lf[249],t2,lf[261]);}

/* k9600 in k9597 in a9594 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in ... */
static void C_ccall f_9602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9602,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,lf[103],t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,2,lf[246],t4));}

/* k5526 in a5523 in expand-multiple-values-assignment in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5528(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5528,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5531,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=((C_word*)t0)[6];
if(C_truep(t4)){
/* expand.scm:451: gensym */
t5=*((C_word*)lf[8]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,((C_word*)t0)[6]);}
else{
t5=t3;
f_5531(2,t5,C_SCHEME_END_OF_LIST);}}

/* a5523 in expand-multiple-values-assignment in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5524(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[20],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5524,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5528,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
t6=t5;
f_5528(2,t6,C_SCHEME_END_OF_LIST);}
else{
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=*((C_word*)lf[8]+1);
t11=((C_word*)t0)[3];
t12=C_i_check_list_2(t11,lf[16]);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5655,a[2]=t9,a[3]=t14,a[4]=t7,a[5]=t10,a[6]=((C_word)li53),tmp=(C_word)a,a+=7,tmp));
t16=((C_word*)t14)[1];
f_5655(t16,t5,t11);}}

/* k8441 in k8405 */
static void C_ccall f_8443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8443,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[2])[1],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8428,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8438,a[2]=((C_word)li112),tmp=(C_word)a,a+=3,tmp);
/* synrules.scm:121: process-pattern */
t6=((C_word*)((C_word*)t0)[9])[1];
((C_proc6)C_fast_retrieve_proc(t6))(6,t6,t4,((C_word*)t0)[8],((C_word*)((C_word*)t0)[10])[1],t5,C_SCHEME_FALSE);}

/* ##sys#expand-multiple-values-assignment in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5518(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5518,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5524,a[2]=t3,a[3]=t2,a[4]=((C_word)li54),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:447: ##sys#decompose-lambda-list */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[95]+1)))(4,*((C_word*)lf[95]+1),t1,t2,t4);}

/* ##sys#defjam-error in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5512(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5512,3,t0,t1,t2);}
/* expand.scm:437: ##sys#syntax-error-hook */
t3=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,lf[90],t2);}

/* assq-reverse in k7459 in a7453 in make-er/ir-transformer in k4115 in k3641 in k3637 in k3633 in k3629 */
static C_word C_fcall f_7854(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_stack_overflow_check;
loop:
if(C_truep(C_i_nullp(t2))){
return(C_SCHEME_FALSE);}
else{
t3=C_i_cdar(t2);
t4=C_eqp(t3,t1);
if(C_truep(t4)){
t5=t2;
return(C_u_i_car(t5));}
else{
t5=t2;
t6=C_u_i_cdr(t5);
t9=t1;
t10=t6;
t1=t9;
t2=t10;
goto loop;}}}

/* k8430 in k8426 in k8441 in k8405 */
static void C_ccall f_8432(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8432,2,t0,t1);}
t2=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3],t1);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,2,((C_word*)t0)[5],t2));}

/* a8437 in k8441 in k8405 */
static void C_ccall f_8438(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8438,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k8434 in k8426 in k8441 in k8405 */
static void C_ccall f_8436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:124: process-template */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],((C_word*)t0)[4],C_fix(0),t1);}

/* k6925 in k6921 in loop in k6873 in k6870 in k6867 in k6864 in k6861 in k6858 in k6849 in k6846 in loop in k6792 in syntax-error/context in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:687: string-append */
t2=*((C_word*)lf[36]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[133],((C_word*)t0)[3],lf[134],t1);}

/* mirror-rename in k7459 in a7453 in make-er/ir-transformer in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_7879(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(7);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_7879,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7893,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=t2;
t5=C_u_i_car(t4);
/* expand.scm:882: mirror-rename */
t16=t3;
t17=t5;
t1=t16;
t2=t17;
goto loop;}
else{
if(C_truep(C_i_vectorp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7914,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7918,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:884: vector->list */
t5=*((C_word*)lf[179]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
if(C_truep(C_i_symbolp(t2))){
t3=f_3645(t2,((C_word*)t0)[3]);
t4=f_7854(t2,((C_word*)((C_word*)t0)[5])[1]);
if(C_truep(t4)){
t5=t1;
t6=t5;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_car(t4));}
else{
if(C_truep(t3)){
if(C_truep(C_i_pairp(t3))){
/* expand.scm:894: rename */
t5=((C_word*)((C_word*)t0)[6])[1];
f_7463(3,t5,t1,t2);}
else{
t5=t2;
t6=C_i_getprop(t5,lf[7],C_SCHEME_FALSE);
if(C_truep(t6)){
t7=t1;
t8=t7;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t6);}
else{
/* expand.scm:901: rename */
t7=((C_word*)((C_word*)t0)[6])[1];
f_7463(3,t7,t1,t2);}}}
else{
/* expand.scm:892: rename */
t5=((C_word*)((C_word*)t0)[6])[1];
f_7463(3,t5,t1,t2);}}}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}}}

/* k6921 in loop in k6873 in k6870 in k6867 in k6864 in k6861 in k6858 in k6849 in k6846 in loop in k6792 in syntax-error/context in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6923(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6923,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6927,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* expand.scm:689: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6909(t6,t3,t5);}

/* f_8400 in k8298 in k8293 in k8289 in k8285 in k8281 in k8276 in k8269 in k8264 in k8260 in k8256 in k8252 in k8248 in k8244 in k8238 in k8233 in k8229 in k8214 in process-syntax-rules in k8205 in k8202 in k8199 in ... */
static void C_ccall f_8400(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8400,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8407,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_cdr(t4);
if(C_truep(C_i_pairp(t5))){
t6=C_i_cddr(t2);
t7=t3;
f_8407(t7,C_i_nullp(t6));}
else{
t6=t3;
f_8407(t6,C_SCHEME_FALSE);}}
else{
t4=t3;
f_8407(t4,C_SCHEME_FALSE);}}

/* k7393 in walk in k7134 in k7001 in check-syntax in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_7395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* expand.scm:786: walk */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7141(t6,((C_word*)t0)[5],t3,t5);}

/* k6324 in k6306 in loop in expand in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6326(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6326,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6331,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word)li67),tmp=(C_word)a,a+=11,tmp));
t5=((C_word*)t3)[1];
f_6331(t5,((C_word*)t0)[9],((C_word*)t0)[10]);}

/* syntax-error in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6716(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_6716r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_6716r(t0,t1,t2);}}

static void C_ccall f_6716r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6724,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:640: ##sys#strip-syntax */
t4=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k8405 */
static void C_fcall f_8407(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8407,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cdar(((C_word*)t0)[2]);
t3=t2;
t4=C_i_cadr(((C_word*)t0)[2]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8443,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t5,a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* synrules.scm:120: process-match */
t7=((C_word*)((C_word*)t0)[10])[1];
((C_proc5)C_fast_retrieve_proc(t7))(5,t7,t6,((C_word*)((C_word*)t0)[9])[1],t3,C_SCHEME_FALSE);}
else{
/* synrules.scm:127: ##sys#syntax-error-hook */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[5],lf[208],((C_word*)t0)[2]);}}

/* k6706 in expand-curried-define in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6708(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6708,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list3(&a,3,lf[100],((C_word*)((C_word*)t0)[3])[1],t1));}

/* k6306 in loop in expand in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_6308(C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6308,NULL,2,t0,t1);}
if(C_truep(C_i_symbolp(t1))){
t2=f_5708(((C_word*)((C_word*)t0)[2])[1],lf[100],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6326,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
/* expand.scm:553: ##sys#check-syntax */
t4=*((C_word*)lf[54]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,t3,lf[100],((C_word*)t0)[11],lf[113],C_SCHEME_FALSE,((C_word*)t0)[3]);}
else{
t3=f_5708(((C_word*)((C_word*)t0)[2])[1],lf[101],t1);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6447,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[13],tmp=(C_word)a,a+=9,tmp);
/* expand.scm:580: ##sys#check-syntax */
t5=*((C_word*)lf[54]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,lf[101],((C_word*)t0)[11],lf[114],((C_word*)t0)[3]);}
else{
t4=f_5708(((C_word*)((C_word*)t0)[2])[1],lf[102],t1);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6459,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
/* expand.scm:584: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc7)(void*)(*((C_word*)t6+1)))(7,t6,t5,lf[102],((C_word*)t0)[11],lf[115],C_SCHEME_FALSE,((C_word*)t0)[3]);}
else{
t5=f_5708(((C_word*)((C_word*)t0)[2])[1],lf[103],t1);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6491,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
t7=C_i_cdr(((C_word*)t0)[11]);
/* expand.scm:587: ##sys#append */
t8=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,t7,((C_word*)t0)[7]);}
else{
t6=C_i_memq(t1,((C_word*)t0)[4]);
t7=(C_truep(t6)?t6:C_i_memq(t1,((C_word*)t0)[8]));
if(C_truep(t7)){
/* expand.scm:590: fini */
t8=((C_word*)((C_word*)t0)[14])[1];
f_5774(t8,((C_word*)t0)[10],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[8],((C_word*)t0)[9],((C_word*)t0)[13]);}
else{
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6510,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[14],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[13],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[6],tmp=(C_word)a,a+=12,tmp);
/* expand.scm:591: ##sys#expand-0 */
t9=*((C_word*)lf[32]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,((C_word*)t0)[11],((C_word*)t0)[3],((C_word*)t0)[15]);}}}}}}
else{
/* expand.scm:550: fini */
t2=((C_word*)((C_word*)t0)[14])[1];
f_5774(t2,((C_word*)t0)[10],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[8],((C_word*)t0)[9],((C_word*)t0)[13]);}}

/* k4719 in k4568 in loop in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_4721(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4721,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4725,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li37),tmp=(C_word)a,a+=9,tmp);
/* expand.scm:274: g698 */
t3=t2;
f_4725(t3,((C_word*)t0)[8],t1);}
else{
/* expand.scm:298: expand */
t2=((C_word*)((C_word*)t0)[3])[1];
f_4502(t2,((C_word*)t0)[8],((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)((C_word*)t0)[5])[1]);}}

/* k8704 in k8728 in k8649 */
static void C_ccall f_8706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[67],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8706,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[2])[1],t1);
t3=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],t3);
t5=C_a_i_list(&a,4,((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[7])[1],((C_word*)t0)[8],t4);
t6=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[9],t5);
t7=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[6])[1],((C_word*)t0)[10],t6);
t8=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[11],t7);
t9=((C_word*)t0)[12];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_a_i_list(&a,1,t8));}

/* k4727 in g698 in k4719 in k4568 in loop in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4729(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4729,2,t0,t1);}
t2=t1;
t3=C_eqp(t2,((C_word*)t0)[2]);
if(C_truep(t3)){
/* expand.scm:293: expand */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4502(t4,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[2],((C_word*)((C_word*)t0)[6])[1]);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4741,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[58]+1))){
/* expand.scm:296: ##sys#compiler-syntax-hook */
t5=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[5],t2);}
else{
/* expand.scm:297: loop */
t5=((C_word*)((C_word*)t0)[7])[1];
f_4546(t5,((C_word*)t0)[4],t2);}}}

/* g698 in k4719 in k4568 in loop in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_4725(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4725,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4729,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=C_i_car(t2);
t5=t2;
t6=C_u_i_cdr(t5);
/* expand.scm:292: call-handler */
t7=((C_word*)((C_word*)t0)[7])[1];
f_4304(t7,t3,((C_word*)t0)[4],t4,((C_word*)t0)[2],t6,C_SCHEME_TRUE);}

/* k8426 in k8441 in k8405 */
static void C_ccall f_8428(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8428,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8432,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8436,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* synrules.scm:126: meta-variables */
t5=((C_word*)((C_word*)t0)[7])[1];
((C_proc6)C_fast_retrieve_proc(t5))(6,t5,t4,((C_word*)t0)[8],C_fix(0),C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* k5930 in k5950 in map-loop1117 in k5912 in k5909 in k5901 in k5898 in k5885 in k5879 in k5857 in fini in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_5932(C_word t0,C_word t1){
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
f_5919(t5,((C_word*)t0)[7],t3,t4);}

/* map-loop1081 in k5898 in k5885 in k5879 in k5857 in fini in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_5968(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_5968,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[94],t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5981,a[2]=((C_word*)t0)[2],a[3]=t10,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t12=t11;
f_5981(t12,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t10));}
else{
t12=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t10);
t13=t11;
f_5981(t13,t12);}}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k5950 in map-loop1117 in k5912 in k5909 in k5901 in k5898 in k5885 in k5879 in k5857 in fini in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5952(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5952,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5932,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t5=t4;
f_5932(t5,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t3));}
else{
t5=C_mutate2(((C_word *)((C_word*)t0)[7])+1,t3);
t6=t4;
f_5932(t6,t5);}}

/* k5979 in map-loop1081 in k5898 in k5885 in k5879 in k5857 in fini in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_5981(C_word t0,C_word t1){
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
f_5968(t5,((C_word*)t0)[7],t3,t4);}

/* k7581 in g1490 in rename in k7459 in a7453 in make-er/ir-transformer in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_7583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7583,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t1);}

/* k7891 in mirror-rename in k7459 in a7453 in make-er/ir-transformer in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_7893(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7893,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7897,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* expand.scm:882: mirror-rename */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7879(t6,t3,t5);}

/* k7895 in k7891 in mirror-rename in k7459 in a7453 in make-er/ir-transformer in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_7897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7897,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* a7337 in walk in k7134 in k7001 in check-syntax in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_7338(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7338,3,t0,t1,t2);}
t3=(C_truep(C_i_symbolp(t2))?f_3645(t2,((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(C_i_symbolp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_eqp(t3,((C_word*)t0)[3]));}
else{
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_eqp(t4,((C_word*)t0)[3]));}}

/* k8819 in k8815 in k8802 */
static void C_ccall f_8821(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:180: append */
t2=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* f_8647 in k8298 in k8293 in k8289 in k8285 in k8281 in k8276 in k8269 in k8264 in k8260 in k8256 in k8252 in k8248 in k8244 in k8238 in k8233 in k8229 in k8214 in process-syntax-rules in k8205 in k8202 in k8199 in ... */
static void C_ccall f_8647(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[26],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8647,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_8651,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],a[15]=t1,a[16]=((C_word*)t0)[13],a[17]=((C_word*)t0)[14],a[18]=((C_word*)t0)[15],tmp=(C_word)a,a+=19,tmp);
t5=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[16])[1],((C_word*)((C_word*)t0)[6])[1]);
t6=C_i_car(t3);
/* synrules.scm:154: process-match */
t7=((C_word*)((C_word*)t0)[15])[1];
((C_proc5)C_fast_retrieve_proc(t7))(5,t7,t4,t5,t6,C_SCHEME_FALSE);}

/* k10803 in k10784 in expand in k10757 in k10754 in k10751 in k10748 in k10745 in k10737 in a10734 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in ... */
static void C_ccall f_10805(C_word c,C_word t0,C_word t1){
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
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10805,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10808,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1233: expand */
t3=((C_word*)((C_word*)t0)[7])[1];
f_10772(t3,t2,((C_word*)t0)[8],C_SCHEME_TRUE);}
else{
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10890,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[4],a[4]=((C_word)li158),tmp=(C_word)a,a+=5,tmp);
t7=C_u_i_car(((C_word*)t0)[2]);
t8=C_i_check_list_2(t7,lf[16]);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10905,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10907,a[2]=t6,a[3]=t5,a[4]=t11,a[5]=t3,a[6]=((C_word)li159),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_10907(t13,t9,t7);}}

/* k10806 in k10803 in k10784 in expand in k10757 in k10754 in k10751 in k10748 in k10745 in k10737 in a10734 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in ... */
static void C_ccall f_10808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10808,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10814,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_length(((C_word*)t0)[2]);
t4=C_eqp(t3,C_fix(3));
if(C_truep(t4)){
t5=C_i_cadr(((C_word*)t0)[2]);
/* expand.scm:1235: c */
t6=((C_word*)t0)[5];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t2,((C_word*)t0)[6],t5);}
else{
t5=t2;
f_10814(2,t5,C_SCHEME_FALSE);}}

/* k10812 in k10806 in k10803 in k10784 in expand in k10757 in k10754 in k10751 in k10748 in k10745 in k10737 in a10734 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in ... */
static void C_ccall f_10814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10814,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_caddr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,2,t2,((C_word*)t0)[4]));}
else{
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[103],t2));}}

/* g1490 in rename in k7459 in a7453 in make-er/ir-transformer in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_7532(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7532,NULL,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
t3=t2;
t4=C_i_getprop(t3,lf[180],C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7550,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t4)){
t6=t5;
f_7550(t6,t4);}
else{
t6=t2;
t7=t5;
f_7550(t7,C_i_getprop(t6,lf[181],C_SCHEME_FALSE));}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7583,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:823: macro-alias */
f_3662(t3,((C_word*)t0)[2],((C_word*)t0)[4]);}}

/* loop in fini in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_5786(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5786,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=C_i_car(t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5805,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t3,a[6]=t5,a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(t5))){
t7=C_u_i_car(t5);
if(C_truep(C_i_symbolp(t7))){
t8=f_5708(((C_word*)((C_word*)t0)[4])[1],lf[100],t7);
t9=t6;
f_5805(t9,(C_truep(t8)?t8:f_5708(((C_word*)((C_word*)t0)[4])[1],lf[102],t7)));}
else{
t8=t6;
f_5805(t8,C_SCHEME_FALSE);}}
else{
t7=t6;
f_5805(t7,C_SCHEME_FALSE);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,lf[103],((C_word*)t0)[5]));}}

/* f_8914 in k8298 in k8293 in k8289 in k8285 in k8281 in k8276 in k8269 in k8264 in k8260 in k8256 in k8252 in k8248 in k8244 in k8238 in k8233 in k8229 in k8214 in process-syntax-rules in k8205 in k8202 in k8199 in ... */
static void C_ccall f_8914(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[15],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8914,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_symbolp(t2))){
t5=C_i_assq(t2,t4);
if(C_truep(t5)){
t6=C_i_cdr(t5);
t7=t3;
if(C_truep(C_fixnum_less_or_equal_p(t6,t7))){
t8=t2;
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
/* synrules.scm:207: ##sys#syntax-error-hook */
t8=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t1,lf[213],t2);}}
else{
t6=C_a_i_list(&a,2,lf[209],t2);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,2,((C_word*)((C_word*)t0)[2])[1],t6));}}
else{
t5=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_8953,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=t4,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[10],a[14]=((C_word*)t0)[11],tmp=(C_word)a,a+=15,tmp);
/* synrules.scm:210: segment-template? */
t6=((C_word*)((C_word*)t0)[12])[1];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,t2);}}

/* k8649 */
static void C_ccall f_8651(C_word c,C_word t0,C_word t1){
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
C_word ab[84],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8651,2,t0,t1);}
t2=t1;
t3=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]);
t4=t3;
t5=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[3]);
t6=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[5])[1],t5);
t7=C_a_i_list(&a,1,t6);
t8=t7;
t9=C_i_cddr(((C_word*)t0)[6]);
t10=C_i_length(t9);
t11=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[5])[1],t10);
t12=t11;
t13=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[8])[1],((C_word*)t0)[3]);
t14=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[5])[1]);
t15=C_a_i_list(&a,2,t13,t14);
t16=t15;
t17=((C_word*)t0)[6];
t18=C_u_i_cdr(t17);
t19=C_u_i_cdr(t18);
t20=C_i_length(t19);
t21=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[9])[1],((C_word*)((C_word*)t0)[5])[1],t20);
t22=t21;
t23=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_8730,a[2]=t22,a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[13],a[7]=((C_word*)t0)[14],a[8]=t16,a[9]=t12,a[10]=t8,a[11]=t4,a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[16],a[14]=((C_word*)t0)[8],a[15]=((C_word*)t0)[17],a[16]=((C_word*)t0)[5],a[17]=t2,tmp=(C_word)a,a+=18,tmp);
t24=((C_word*)t0)[6];
t25=C_u_i_cdr(t24);
t26=C_u_i_cdr(t25);
/* synrules.scm:162: process-match */
t27=((C_word*)((C_word*)t0)[18])[1];
((C_proc5)C_fast_retrieve_proc(t27))(5,t27,t23,((C_word*)((C_word*)t0)[8])[1],t26,C_SCHEME_TRUE);}

/* k7551 in k7548 in g1490 in rename in k7459 in a7453 in make-er/ir-transformer in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_7553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7553,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t1);}

/* k7548 in g1490 in rename in k7459 in a7453 in make-er/ir-transformer in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_7550(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7550,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7553,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:815: macro-alias */
f_3662(t2,((C_word*)t0)[2],((C_word*)t0)[5]);}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[6]);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,((C_word*)t0)[6]);}}

/* k8906 in k8802 */
static void C_ccall f_8908(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8908,2,t0,t1);}
t2=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]);
/* synrules.scm:195: process-pattern */
t3=((C_word*)((C_word*)t0)[4])[1];
((C_proc6)C_fast_retrieve_proc(t3))(6,t3,((C_word*)t0)[5],t1,t2,((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k5901 in k5898 in k5885 in k5879 in k5857 in fini in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5903(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5903,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5907,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=*((C_word*)lf[91]+1);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5911,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t7,a[5]=t5,a[6]=t8,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:509: reverse */
t10=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,((C_word*)t0)[5]);}

/* k5905 in k5901 in k5898 in k5885 in k5879 in k5857 in fini in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:470: ##sys#append */
t2=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k5898 in k5885 in k5879 in k5857 in fini in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5900(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5900,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5903,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5968,a[2]=((C_word*)t0)[6],a[3]=t4,a[4]=((C_word*)t0)[7],a[5]=((C_word)li59),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_5968(t6,t2,((C_word*)t0)[8],t1);}

/* k4526 in expand in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4528(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:261: values */
C_values(4,0,((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* fini in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_5774(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5774,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=C_i_nullp(t2);
t8=(C_truep(t7)?C_i_nullp(t4):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5786,a[2]=((C_word*)t0)[2],a[3]=t10,a[4]=((C_word*)t0)[3],a[5]=t6,a[6]=((C_word)li57),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_5786(t12,t1,t6,C_SCHEME_END_OF_LIST);}
else{
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5859,a[2]=t4,a[3]=t1,a[4]=t6,a[5]=t5,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* expand.scm:497: reverse */
t10=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t2);}}

/* k5912 in k5909 in k5901 in k5898 in k5885 in k5879 in k5857 in fini in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5914(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5914,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5917,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5919,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li58),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_5919(t6,t2,((C_word*)t0)[7],t1);}

/* map-loop1117 in k5912 in k5909 in k5901 in k5898 in k5885 in k5879 in k5857 in fini in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_5919(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_5919,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5952,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* expand.scm:508: g1123 */
t9=((C_word*)t0)[5];
((C_proc4)C_fast_retrieve_proc(t9))(4,t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k5915 in k5912 in k5909 in k5901 in k5898 in k5885 in k5879 in k5857 in fini in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:470: ##sys#append */
t2=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k5909 in k5901 in k5898 in k5885 in k5879 in k5857 in fini in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5911,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5914,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* expand.scm:510: reverse */
t4=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}

/* k11763 in k11739 in k11728 in loop in k11708 in a11705 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1000: c */
t2=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k11776 in loop in k11708 in a11705 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11778,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11785,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1007: ##sys#expand-curried-define */
t3=*((C_word*)lf[108]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* k11767 in k11728 in loop in k11708 in a11705 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:999: ##sys#register-export */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[341]+1)))(4,*((C_word*)lf[341]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k4237 in k4215 in macro? in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=f_3645(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?C_i_pairp(t2):C_SCHEME_FALSE));}

/* k6074 in foldl1056 in k5857 in fini in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:503: ##sys#append */
t2=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* a6077 in foldl1056 in k5857 in fini in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6078(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6078,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}

/* loop in k4260 in unregister-macro in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_4264(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4264,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_i_caar(t2);
t4=C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
t5=t2;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_u_i_cdr(t5));}
else{
t5=t2;
t6=C_u_i_car(t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4287,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=t2;
t9=C_u_i_cdr(t8);
/* expand.scm:195: loop */
t12=t7;
t13=t9;
t1=t12;
t2=t13;
goto loop;}}}

/* k4260 in unregister-macro in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4262,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4264,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li18),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4264(t5,((C_word*)t0)[3],t1);}

/* k6080 in foldl1056 in k5857 in fini in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6082(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[2])[1];
f_6052(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k4215 in macro? in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4217,2,t0,t1);}
t2=f_3645(((C_word*)t0)[2],t1);
t3=C_i_pairp(t2);
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4239,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:186: ##sys#macro-environment */
t5=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k4209 in copy-macro in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=f_3645(((C_word*)t0)[2],t1);
C_apply(5,0,((C_word*)t0)[3],*((C_word*)lf[27]+1),((C_word*)t0)[4],t2);}

/* fini/syntax in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_6094(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6094,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6102,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t4,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6104,a[2]=t9,a[3]=((C_word*)t0)[3],a[4]=((C_word)li65),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_6104(t11,t7,t6,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* ##sys#macro? in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4213(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_4213r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4213r(t0,t1,t2,t3);}}

static void C_ccall f_4213r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4217,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* expand.scm:183: ##sys#current-environment */
t5=*((C_word*)lf[1]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=t4;
f_4217(2,t5,C_i_car(t3));}}

/* k10851 in k10903 in k10803 in k10784 in expand in k10757 in k10754 in k10751 in k10748 in k10745 in k10737 in a10734 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in ... */
static void C_fcall f_10853(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10853,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10857,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1246: expand */
t4=((C_word*)((C_word*)t0)[4])[1];
f_10772(t4,t3,((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k8599 in k8498 */
static void C_ccall f_8601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:146: process-match */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,C_SCHEME_FALSE);}

/* k10855 in k10851 in k10903 in k10803 in k10784 in expand in k10757 in k10754 in k10751 in k10748 in k10745 in k10737 in a10734 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in ... */
static void C_ccall f_10857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10857,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,4,lf[294],((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* k11783 in k11776 in loop in k11708 in a11705 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1007: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_11715(t2,((C_word*)t0)[3],t1);}

/* k11786 in loop in k11708 in a11705 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11788(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_11788,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=C_u_i_car(((C_word*)t0)[3]);
t4=C_u_i_cdr(((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[4]);
t6=C_a_i_cons(&a,2,lf[72],t5);
t7=C_a_i_list3(&a,3,t2,t3,t6);
/* expand.scm:1010: loop */
t8=((C_word*)((C_word*)t0)[5])[1];
f_11715(t8,((C_word*)t0)[6],t7);}

/* k8612 in k8498 */
static void C_fcall f_8614(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8614,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_list(&a,2,lf[210],((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,1,t3));}
else{
t2=C_a_i_list(&a,2,lf[210],((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[6])[1],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,1,t3));}}

/* k11660 in k11657 in a11602 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11662,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11665,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[5];
t4=C_u_i_car(t3);
t5=C_i_car(((C_word*)t0)[2]);
t6=C_eqp(t4,t5);
if(C_truep(t6)){
/* expand.scm:1032: ##sys#syntax-error-hook */
t7=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t2,lf[338],((C_word*)t0)[5]);}
else{
t7=t2;
f_11665(2,t7,C_SCHEME_UNDEFINED);}}

/* k11663 in k11660 in k11657 in a11602 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11665(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11665,2,t0,t1);}
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,lf[72],t4);
t6=C_a_i_list(&a,2,lf[23],t5);
t7=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,3,lf[337],t2,t6));}

/* ##sys#copy-macro in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4200(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4200,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4211,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:180: ##sys#macro-environment */
t5=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k11739 in k11728 in loop in k11708 in a11705 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11741,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11744,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11758,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11765,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1000: r */
t5=((C_word*)t0)[7];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,lf[100]);}

/* k11742 in k11739 in k11728 in loop in k11708 in a11705 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11744,2,t0,t1);}
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=C_u_i_car(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,3,lf[94],((C_word*)t0)[4],t2));}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[94],((C_word*)t0)[4],lf[345]));}}

/* k11756 in k11739 in k11728 in loop in k11708 in a11705 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11758(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* expand.scm:1001: ##sys#defjam-error */
t2=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
f_11744(2,t2,C_SCHEME_UNDEFINED);}}

/* k11728 in loop in k11708 in a11705 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11730(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11730,2,t0,t1);}
t2=C_i_getprop(((C_word*)t0)[2],lf[5],C_SCHEME_FALSE);
t3=(C_truep(t2)?t2:((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11741,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11769,a[2]=t5,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:999: ##sys#current-module */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[243]+1)))(2,*((C_word*)lf[243]+1),t6);}

/* k6198 in k6174 in loop in fini/syntax in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6200(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6200,2,t0,t1);}
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_u_i_car(t2);
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(((C_word*)t0)[2]);
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,t4,t6);
t8=C_a_i_cons(&a,2,lf[72],t7);
t9=C_a_i_list(&a,2,lf[23],t8);
t10=C_a_i_list(&a,3,lf[101],t1,t9);
t11=C_a_i_cons(&a,2,t10,((C_word*)t0)[3]);
/* expand.scm:526: loop */
t12=((C_word*)((C_word*)t0)[4])[1];
f_6104(t12,((C_word*)t0)[5],((C_word*)t0)[6],t11,C_SCHEME_FALSE);}

/* k4163 in k4160 in extend-macro-environment in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4165(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4165,2,t0,t1);}
t2=t1;
t3=f_3645(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4172,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word)li14),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:165: g509 */
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_4172(t4,t3));}
else{
t4=C_a_i_list2(&a,2,((C_word*)t0)[4],t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4190,a[2]=((C_word*)t0)[5],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_a_i_cons(&a,2,((C_word*)t0)[2],t5);
t8=C_a_i_cons(&a,2,t7,((C_word*)t0)[3]);
/* expand.scm:175: ##sys#macro-environment */
t9=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t6,t8);}}

/* k4160 in extend-macro-environment in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4162,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4165,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:167: ##sys#ensure-transformer */
t4=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[5],((C_word*)t0)[2]);}

/* k11630 in k11619 in k11616 in a11602 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11632,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11635,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11645,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11652,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1025: r */
t5=((C_word*)t0)[7];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,lf[101]);}

/* k11633 in k11630 in k11619 in k11616 in a11602 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11635,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,3,lf[337],((C_word*)t0)[4],t2));}

/* ##sys#extend-macro-environment in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4158(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4158,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4162,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:166: ##sys#macro-environment */
t6=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k11619 in k11616 in a11602 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11621(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11621,2,t0,t1);}
t2=C_i_getprop(((C_word*)t0)[2],lf[5],C_SCHEME_FALSE);
t3=(C_truep(t2)?t2:((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11632,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11656,a[2]=t5,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1024: ##sys#current-module */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[243]+1)))(2,*((C_word*)lf[243]+1),t6);}

/* k11708 in a11705 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11710,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11715,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li173),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_11715(t5,((C_word*)t0)[5],((C_word*)t0)[2]);}

/* loop in k11708 in a11705 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_11715(C_word t0,C_word t1,C_word t2){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11715,NULL,3,t0,t1,t2);}
t3=C_i_cadr(t2);
t4=t3;
t5=t2;
t6=C_u_i_cdr(t5);
t7=C_u_i_cdr(t6);
if(C_truep(C_i_pairp(t4))){
t8=C_i_car(t4);
if(C_truep(C_i_pairp(t8))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11778,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1006: ##sys#check-syntax */
t10=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t9,lf[100],t2,lf[343]);}
else{
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11788,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t7,a[5]=((C_word*)t0)[2],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1009: ##sys#check-syntax */
t10=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t9,lf[100],t2,lf[344]);}}
else{
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11730,a[2]=t4,a[3]=t7,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:997: ##sys#check-syntax */
t9=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,lf[100],t2,lf[346]);}}

/* k10903 in k10803 in k10784 in expand in k10757 in k10754 in k10751 in k10748 in k10745 in k10737 in a10734 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in ... */
static void C_ccall f_10905(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10905,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10853,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10860,a[2]=((C_word*)t0)[6],a[3]=t4,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t6=C_i_length(((C_word*)t0)[6]);
t7=C_eqp(t6,C_fix(3));
if(C_truep(t7)){
t8=C_i_cadr(((C_word*)t0)[6]);
/* expand.scm:1243: c */
t9=((C_word*)t0)[8];
((C_proc4)C_fast_retrieve_proc(t9))(4,t9,t5,((C_word*)t0)[9],t8);}
else{
t8=t5;
f_10860(2,t8,C_SCHEME_FALSE);}}

/* map-loop2042 in k10803 in k10784 in expand in k10757 in k10754 in k10751 in k10748 in k10745 in k10737 in a10734 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in ... */
static void C_fcall f_10907(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_10907,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=f_10890(C_a_i(&a,17),((C_word*)t0)[2],t3);
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

/* k11702 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11704(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:987: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[100],C_SCHEME_END_OF_LIST,t1);}

/* k11616 in a11602 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11618(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11618,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11621,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1022: ##sys#check-syntax */
t3=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[101],((C_word*)t0)[3],lf[342]);}

/* k7817 in k7734 in k7726 in compare in k7459 in a7453 in make-er/ir-transformer in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_7819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7819,2,t0,t1);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7804,a[2]=((C_word*)t0)[3],a[3]=((C_word)li99),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:860: g1607 */
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_7804(t3,t2));}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* map-loop638 in k4589 in k4577 in k4568 in loop in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_4682(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_4682,NULL,3,t0,t1,t2);}
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

/* k10997 in k10994 in k10988 in expand in k10969 in k10966 in k10963 in a10957 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in ... */
static void C_ccall f_10999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[307]);}

/* k10281 in k10258 in walk1 in k10209 in k10206 in k10203 in a10200 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in ... */
static void C_ccall f_10283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10283,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list3(&a,3,lf[201],((C_word*)t0)[3],t1));}

/* k10994 in k10988 in expand in k10969 in k10966 in k10963 in a10957 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in ... */
static void C_ccall f_10996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10996,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10999,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1162: expand */
t3=((C_word*)((C_word*)t0)[3])[1];
f_10976(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k7500 in rename in k7459 in a7453 in make-er/ir-transformer in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_7502(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:801: rename */
t2=((C_word*)((C_word*)t0)[2])[1];
f_7463(3,t2,((C_word*)t0)[3],t1);}

/* k11599 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1013: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[101],C_SCHEME_END_OF_LIST,t1);}

/* a11602 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11603(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11603,5,t0,t1,t2,t3,t4);}
t5=C_i_cadr(t2);
t6=t5;
t7=t2;
t8=C_u_i_cdr(t7);
t9=C_u_i_cdr(t8);
if(C_truep(C_i_pairp(t6))){
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11659,a[2]=t6,a[3]=t9,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1029: ##sys#check-syntax */
t11=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t10,lf[101],t6,lf[340]);}
else{
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11618,a[2]=t6,a[3]=t9,a[4]=t1,a[5]=t2,a[6]=t4,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1021: ##sys#check-syntax */
t11=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t10,lf[101],t6,lf[162]);}}

/* k10988 in expand in k10969 in k10966 in k10963 in a10957 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in ... */
static void C_ccall f_10990(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10990,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10996,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11003,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1160: open-output-string */
t4=*((C_word*)lf[141]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11028,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
t3=C_i_car(((C_word*)t0)[6]);
/* expand.scm:1164: c */
t4=((C_word*)t0)[7];
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t2,((C_word*)t0)[11],t3);}}

/* a11705 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11706(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11706,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11710,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:992: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[100],t2,lf[347]);}

/* g1607 in k7817 in k7734 in k7726 in compare in k7459 in a7453 in make-er/ir-transformer in k4115 in k3641 in k3637 in k3633 in k3629 */
static C_word C_fcall f_7804(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;
t2=C_i_cdr(t1);
return(C_eqp(((C_word*)t0)[2],t2));}

/* k10291 in k10258 in walk1 in k10209 in k10206 in k10203 in a10200 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in ... */
static void C_ccall f_10293(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10293,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_list(&a,2,lf[71],((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10304,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* expand.scm:1314: walk */
t6=((C_word*)((C_word*)t0)[5])[1];
f_10213(t6,t4,((C_word*)t0)[6],t5);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10314,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[7]))){
t3=C_u_i_car(((C_word*)t0)[7]);
/* expand.scm:1315: c */
t4=((C_word*)t0)[9];
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t2,((C_word*)t0)[8],t3);}
else{
t3=t2;
f_10314(2,t3,C_SCHEME_FALSE);}}}

/* g2048 in k10803 in k10784 in expand in k10757 in k10754 in k10751 in k10748 in k10745 in k10737 in a10734 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in ... */
static C_word C_fcall f_10890(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;
t2=C_a_i_list(&a,2,lf[210],t1);
return(C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t2));}

/* k4188 in k4163 in k4160 in extend-macro-environment in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* map-loop1033 in k5879 in k5857 in fini in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_6017(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_6017,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,2,t3,lf[105]);
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

/* k10267 in k10258 in walk1 in k10209 in k10206 in k10203 in a10200 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in ... */
static void C_ccall f_10269(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_car(((C_word*)t0)[3]));}

/* k10258 in walk1 in k10209 in k10206 in k10203 in a10200 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in ... */
static void C_ccall f_10260(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10260,2,t0,t1);}
if(C_truep(t1)){
t2=C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10269,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1308: ##sys#check-syntax */
t4=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[279],((C_word*)t0)[5],lf[280]);}
else{
t3=C_a_i_list(&a,2,lf[71],((C_word*)t0)[6]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10283,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
/* expand.scm:1311: walk */
t7=((C_word*)((C_word*)t0)[7])[1];
f_10213(t7,t5,((C_word*)t0)[4],t6);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10293,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
/* expand.scm:1312: c */
t3=((C_word*)t0)[11];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[8],((C_word*)t0)[9]);}}

/* k10858 in k10903 in k10803 in k10784 in expand in k10757 in k10754 in k10751 in k10748 in k10745 in k10737 in a10734 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in ... */
static void C_ccall f_10860(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10860,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_caddr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_10853(t3,C_a_i_list(&a,2,t2,((C_word*)t0)[4]));}
else{
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_10853(t3,C_a_i_cons(&a,2,lf[103],t2));}}

/* k6394 in k6387 in loop2 in k6324 in k6306 in loop in expand in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:569: loop2 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6331(t2,((C_word*)t0)[3],t1);}

/* k9453 in g2781 in k9436 in fixup-macro-environment in k8205 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in ... */
static void C_ccall f_9455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_set_car(((C_word*)t0)[3],t1));}

/* k8951 */
static void C_ccall f_8953(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8953,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8956,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* synrules.scm:211: segment-depth */
t3=((C_word*)((C_word*)t0)[11])[1];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[4]);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9076,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[4];
t4=C_u_i_car(t3);
/* synrules.scm:236: process-template */
t5=((C_word*)((C_word*)t0)[5])[1];
((C_proc5)C_fast_retrieve_proc(t5))(5,t5,t2,t4,((C_word*)t0)[2],((C_word*)t0)[6]);}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9097,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[13],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9101,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* synrules.scm:240: vector->list */
t4=*((C_word*)lf[179]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,((C_word*)((C_word*)t0)[14])[1],((C_word*)t0)[4]));}}}}

/* k8954 in k8951 */
static void C_ccall f_8956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8956,2,t0,t1);}
t2=t1;
t3=C_fixnum_plus(((C_word*)t0)[2],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8962,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=t4,tmp=(C_word)a,a+=12,tmp);
t6=C_i_car(((C_word*)t0)[4]);
/* synrules.scm:214: free-meta-variables */
t7=((C_word*)((C_word*)t0)[10])[1];
((C_proc6)C_fast_retrieve_proc(t7))(6,t7,t5,t6,t4,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);}

/* k10239 in walk1 in k10209 in k10206 in k10203 in a10200 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in ... */
static void C_ccall f_10241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1301: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_10213(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* expand in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_6282(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6282,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6288,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word)li68),tmp=(C_word)a,a+=9,tmp));
t6=((C_word*)t4)[1];
f_6288(t6,t1,t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* loop in expand in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_6288(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6288,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
if(C_truep(C_i_pairp(t2))){
t7=C_i_car(t2);
t8=t7;
t9=t2;
t10=C_u_i_cdr(t9);
t11=C_i_pairp(t8);
t12=(C_truep(t11)?C_u_i_car(t8):C_SCHEME_FALSE);
t13=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_6308,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[4],a[7]=t10,a[8]=t5,a[9]=t6,a[10]=t1,a[11]=t8,a[12]=((C_word*)t0)[5],a[13]=t2,a[14]=((C_word*)t0)[6],a[15]=((C_word*)t0)[7],tmp=(C_word)a,a+=16,tmp);
if(C_truep(t12)){
t14=C_i_symbolp(t12);
t15=t13;
f_6308(t15,(C_truep(t14)?t12:C_SCHEME_FALSE));}
else{
t14=t13;
f_6308(t14,C_SCHEME_FALSE);}}
else{
/* expand.scm:544: fini */
t7=((C_word*)((C_word*)t0)[6])[1];
f_5774(t7,t1,t3,t4,t5,t6,t2);}}

/* k10966 in k10963 in a10957 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in ... */
static void C_ccall f_10968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10968,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10971,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1151: r */
t4=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[227]);}

/* k10963 in a10957 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in ... */
static void C_ccall f_10965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10965,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10968,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1150: r */
t4=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[221]);}

/* foldl1056 in k5857 in fini in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_6052(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_6052,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6082,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=C_slot(t2,C_fix(0));
t8=t6;
t9=t3;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6076,a[2]=t8,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6078,a[2]=((C_word)li61),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:503: ##sys#decompose-lambda-list */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[95]+1)))(4,*((C_word*)lf[95]+1),t10,t7,t11);}
else{
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* loop2 in k6324 in k6306 in loop in expand in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_6331(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6331,NULL,3,t0,t1,t2);}
t3=C_i_cadr(t2);
t4=t3;
if(C_truep(C_i_pairp(t4))){
t5=C_i_car(t4);
if(C_truep(C_i_pairp(t5))){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6389,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t4,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:567: ##sys#check-syntax */
t7=*((C_word*)lf[54]+1);
((C_proc7)(void*)(*((C_word*)t7+1)))(7,t7,t6,lf[100],t2,lf[109],C_SCHEME_FALSE,((C_word*)t0)[3]);}
else{
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6403,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* expand.scm:572: ##sys#check-syntax */
t7=*((C_word*)lf[54]+1);
((C_proc7)(void*)(*((C_word*)t7+1)))(7,t7,t6,lf[100],t2,lf[110],C_SCHEME_FALSE,((C_word*)t0)[3]);}}
else{
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6344,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* expand.scm:557: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc7)(void*)(*((C_word*)t6+1)))(7,t6,t5,lf[100],t2,lf[112],C_SCHEME_FALSE,((C_word*)t0)[3]);}}

/* walk1 in k10209 in k10206 in k10203 in a10200 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in ... */
static void C_fcall f_10223(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_save_and_reclaim((void*)trf_10223,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_vectorp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10237,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10241,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1301: vector->list */
t6=*((C_word*)lf[179]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}
else{
if(C_truep(C_i_pairp(t2))){
t4=C_i_car(t2);
t5=t4;
t6=t2;
t7=C_u_i_cdr(t6);
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_10260,a[2]=t3,a[3]=t1,a[4]=t7,a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[4],a[9]=t5,a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],tmp=(C_word)a,a+=12,tmp);
/* expand.scm:1306: c */
t9=((C_word*)t0)[6];
((C_proc4)C_fast_retrieve_proc(t9))(4,t9,t8,((C_word*)t0)[3],t5);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,2,lf[71],t2));}}}

/* expand in k10969 in k10966 in k10963 in a10957 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in ... */
static void C_fcall f_10976(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10976,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=C_i_car(t2);
t5=t4;
t6=t2;
t7=C_u_i_cdr(t6);
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_10990,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t7,a[6]=t5,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
/* expand.scm:1157: ##sys#check-syntax */
t9=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,lf[228],t5,lf[314]);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[315]);}}

/* k6387 in loop2 in k6324 in k6306 in loop in expand in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6389,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6396,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cddr(((C_word*)t0)[4]);
/* expand.scm:570: ##sys#expand-curried-define */
t4=*((C_word*)lf[108]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[5],t3,((C_word*)t0)[6]);}

/* k10219 in walk in k10209 in k10206 in k10203 in a10200 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in ... */
static void C_ccall f_10221(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1298: simplify */
t2=((C_word*)((C_word*)t0)[2])[1];
f_10386(t2,((C_word*)t0)[3],t1);}

/* k10969 in k10966 in k10963 in a10957 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in ... */
static void C_ccall f_10971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10971,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10976,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,a[8]=((C_word)li162),tmp=(C_word)a,a+=9,tmp));
t6=((C_word*)t4)[1];
f_10976(t6,((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k11378 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in ... */
static void C_ccall f_11380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1113: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[230],C_SCHEME_END_OF_LIST,t1);}

/* a11381 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in ... */
static void C_ccall f_11382(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11382,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
if(C_truep(C_i_nullp(t5))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_TRUE);}
else{
t6=C_i_cdr(t5);
t7=t6;
t8=C_u_i_car(t5);
if(C_truep(C_i_nullp(t7))){
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11413,a[2]=t7,a[3]=t1,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1125: r */
t10=t3;
((C_proc3)C_fast_retrieve_proc(t10))(3,t10,t9,lf[230]);}}}

/* k9779 in k9636 in k9630 in a9624 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in ... */
static void C_ccall f_9781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1484: ##sys#validate-exports */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[244]+1)))(4,*((C_word*)lf[244]+1),((C_word*)t0)[2],t1,lf[249]);}

/* k10235 in walk1 in k10209 in k10206 in k10203 in a10200 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in ... */
static void C_ccall f_10237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10237,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,lf[197],t1));}

/* k4674 in k4589 in k4577 in k4568 in loop in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4676(C_word c,C_word t0,C_word t1){
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
C_word ab[43],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4676,2,t0,t1);}
t2=C_i_cddr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=C_a_i_cons(&a,2,lf[51],t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[3],t4);
t6=C_a_i_list(&a,1,t5);
t7=C_a_i_list(&a,3,lf[52],t6,((C_word*)t0)[3]);
t8=t7;
t9=C_SCHEME_END_OF_LIST;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4613,a[2]=t8,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4615,a[2]=t12,a[3]=t15,a[4]=t10,a[5]=((C_word)li35),tmp=(C_word)a,a+=6,tmp));
t17=((C_word*)t15)[1];
f_4615(t17,t13,((C_word*)t0)[5]);}

/* k9793 in k9630 in a9624 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in ... */
static void C_ccall f_9795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_caddr(((C_word*)t0)[2]);
/* expand.scm:1444: c */
t3=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,((C_word*)t0)[4],t1,t2);}

/* k11370 in k11351 in a11329 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in ... */
static void C_ccall f_11372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11372,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,4,lf[294],((C_word*)t0)[3],((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[50],((C_word*)t0)[5],t3));}

/* k10206 in k10203 in a10200 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in ... */
static void C_ccall f_10208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10208,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10211,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1297: r */
t4=((C_word*)t0)[6];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[281]);}

/* k10203 in a10200 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in ... */
static void C_ccall f_10205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10205,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10208,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1296: r */
t4=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[279]);}

/* k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_8047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8047,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8050,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11857,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11859,a[2]=((C_word)li177),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:965: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_8044(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8044,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8047,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11874,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11876,a[2]=((C_word)li178),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:957: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_8041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8041,2,t0,t1);}
t2=C_mutate2((C_word*)lf[186]+1 /* (set! ##sys#initial-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8044,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11891,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11893,a[2]=((C_word)li179),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:949: ##sys#er-transformer */
t6=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* a10200 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in ... */
static void C_ccall f_10201(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10201,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10205,a[2]=t4,a[3]=t2,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1295: r */
t6=t3;
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,lf[278]);}

/* k5148 in g800 in k4954 in loop in k4935 in k4932 in k4929 in k4926 in expand-extended-lambda-list in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5150(C_word c,C_word t0,C_word t1){
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
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5150,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[71],t1);
t3=((C_word*)((C_word*)t0)[2])[1];
t4=(C_truep(t3)?t3:((C_word*)((C_word*)t0)[3])[1]);
t5=((C_word*)t0)[4];
t6=C_u_i_cdr(t5);
if(C_truep(C_i_pairp(t6))){
t7=((C_word*)t0)[4];
t8=C_u_i_cdr(t7);
t9=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t8);
t10=C_a_i_cons(&a,2,lf[72],t9);
t11=C_a_i_list(&a,1,t10);
t12=C_a_i_cons(&a,2,t4,t11);
t13=C_a_i_cons(&a,2,t2,t12);
t14=C_a_i_cons(&a,2,lf[73],t13);
t15=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_a_i_list(&a,2,((C_word*)t0)[6],t14));}
else{
t7=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t8=C_a_i_cons(&a,2,t2,t7);
t9=C_a_i_cons(&a,2,lf[73],t8);
t10=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_a_i_list(&a,2,((C_word*)t0)[6],t9));}}

/* k5155 in k4954 in loop in k4935 in k4932 in k4929 in k4926 in expand-extended-lambda-list in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5157(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5157,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5160,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5162,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word)li48),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_5162(t6,t2,t1);}

/* k5152 in g800 in k4954 in loop in k4935 in k4932 in k4929 in k4926 in expand-extended-lambda-list in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5154(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(t1,C_fix(1));
/* expand.scm:342: string->keyword */
t3=*((C_word*)lf[74]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* walk in k10209 in k10206 in k10203 in a10200 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in ... */
static void C_fcall f_10213(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10213,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10221,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1298: walk1 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_10223(t5,t4,t2,t3);}

/* k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_8056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8056,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8060,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11704,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11706,a[2]=((C_word)li174),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:990: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_8053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8053,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8056,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11823,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11825,a[2]=((C_word)li175),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:981: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_8050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8050,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8053,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11840,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11842,a[2]=((C_word)li176),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:973: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k10209 in k10206 in k10203 in a10200 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in ... */
static void C_ccall f_10211(C_word c,C_word t0,C_word t1){
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
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10211,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10213,a[2]=t8,a[3]=t6,a[4]=((C_word)li147),tmp=(C_word)a,a+=5,tmp));
t10=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10223,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word)li148),tmp=(C_word)a,a+=8,tmp));
t11=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10386,a[2]=t8,a[3]=((C_word)li151),tmp=(C_word)a,a+=4,tmp));
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10479,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1339: ##sys#check-syntax */
t13=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t13+1)))(5,t13,t12,lf[278],((C_word*)t0)[5],lf[291]);}

/* k11351 in a11329 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in ... */
static void C_ccall f_11353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11353,2,t0,t1);}
t2=t1;
t3=C_a_i_list(&a,2,t2,((C_word*)t0)[2]);
t4=C_a_i_list(&a,1,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11372,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1141: r */
t7=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t7))(3,t7,t6,lf[221]);}

/* k9476 in k9436 in fixup-macro-environment in k8205 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in ... */
static void C_ccall f_9478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k5158 in k5155 in k4954 in loop in k4935 in k4932 in k4929 in k4926 in expand-extended-lambda-list in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5160,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];
f_4960(t4,C_a_i_list(&a,1,t3));}

/* map-loop794 in k5155 in k4954 in loop in k4935 in k4932 in k4929 in k4926 in expand-extended-lambda-list in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_5162(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5162,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5191,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* expand.scm:362: g800 */
t5=((C_word*)t0)[5];
f_5097(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8972 in k8960 in k8954 in k8951 */
static void C_ccall f_8974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8974,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8977,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9024,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[10]))){
t5=C_u_i_cdr(((C_word*)t0)[10]);
if(C_truep(C_i_nullp(t5))){
if(C_truep(C_i_symbolp(t2))){
t6=C_u_i_car(((C_word*)t0)[10]);
t7=t4;
f_9024(t7,C_eqp(t2,t6));}
else{
t6=t4;
f_9024(t6,C_SCHEME_FALSE);}}
else{
t6=t4;
f_9024(t6,C_SCHEME_FALSE);}}
else{
t5=t4;
f_9024(t5,C_SCHEME_FALSE);}}

/* k8975 in k8972 in k8960 in k8954 in k8951 */
static void C_fcall f_8977(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8977,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8980,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9003,a[2]=t4,a[3]=((C_word)li118),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_9003(t6,t2,((C_word*)t0)[8],t1);}

/* ir-macro-transformer in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_8022(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8022,3,t0,t1,t2);}
/* expand.scm:916: make-er/ir-transformer */
t3=*((C_word*)lf[177]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,C_SCHEME_FALSE);}

/* k6345 in k6342 in loop2 in k6324 in k6306 in loop in expand in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6347,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_i_cddr(((C_word*)t0)[4]);
if(C_truep(C_i_pairp(t3))){
t4=C_i_caddr(((C_word*)t0)[4]);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[5]);
/* expand.scm:560: loop */
t6=((C_word*)((C_word*)t0)[6])[1];
f_6288(t6,((C_word*)t0)[7],((C_word*)t0)[8],t2,t5,((C_word*)t0)[9],((C_word*)t0)[10]);}
else{
t4=C_a_i_cons(&a,2,lf[111],((C_word*)t0)[5]);
/* expand.scm:560: loop */
t5=((C_word*)((C_word*)t0)[6])[1];
f_6288(t5,((C_word*)t0)[7],((C_word*)t0)[8],t2,t4,((C_word*)t0)[9],((C_word*)t0)[10]);}}

/* k6342 in loop2 in k6324 in k6306 in loop in expand in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6344,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6347,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=((C_word*)t0)[4];
t4=C_u_i_car(t3);
t5=C_eqp(t4,((C_word*)t0)[2]);
if(C_truep(t5)){
/* expand.scm:559: ##sys#defjam-error */
t6=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t2,((C_word*)t0)[4]);}
else{
t6=t2;
f_6347(2,t6,C_SCHEME_UNDEFINED);}}

/* k9745 in k9716 in k9636 in k9630 in a9624 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in ... */
static void C_fcall f_9747(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_9747,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,lf[259],t2);
t4=C_a_i_list(&a,1,t3);
t5=C_a_i_cons(&a,2,((C_word*)t0)[3],t4);
t6=C_a_i_cons(&a,2,((C_word*)t0)[4],t5);
t7=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_cons(&a,2,lf[260],t6));}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,lf[260],t3));}}

/* k8960 in k8954 in k8951 */
static void C_ccall f_8962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8962,2,t0,t1);}
t2=t1;
if(C_truep(C_i_nullp(t2))){
/* synrules.scm:216: ##sys#syntax-error-hook */
t3=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],lf[214],((C_word*)t0)[3]);}
else{
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8974,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_car(t4);
/* synrules.scm:217: process-template */
t6=((C_word*)((C_word*)t0)[4])[1];
((C_proc5)C_fast_retrieve_proc(t6))(5,t6,t3,t5,((C_word*)t0)[11],((C_word*)t0)[6]);}}

/* k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_8037(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8037,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8041,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:944: ##sys#macro-environment */
t3=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_8031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8031,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8034,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11918,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11920,a[2]=((C_word)li181),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:932: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_8034(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8034,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8037,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11908,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11910,a[2]=((C_word)li180),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:939: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k11650 in k11630 in k11619 in k11616 in a11602 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1025: c */
t2=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* a11329 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in ... */
static void C_ccall f_11330(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11330,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
if(C_truep(C_i_nullp(t5))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}
else{
t6=C_i_cdr(t5);
t7=t6;
t8=C_u_i_car(t5);
if(C_truep(C_i_nullp(t7))){
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11353,a[2]=t8,a[3]=t7,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1139: r */
t10=t3;
((C_proc3)C_fast_retrieve_proc(t10))(3,t10,t9,lf[77]);}}}

/* k11657 in a11602 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11659,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11662,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1030: ##sys#check-syntax */
t3=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[101],((C_word*)t0)[3],lf[339]);}

/* k11654 in k11619 in k11616 in a11602 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1024: ##sys#register-export */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[341]+1)))(4,*((C_word*)lf[341]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k8005 in k7459 in a7453 in make-er/ir-transformer in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_8007(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:913: mirror-rename */
t2=((C_word*)((C_word*)t0)[2])[1];
f_7879(t2,((C_word*)t0)[3],t1);}

/* k10954 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in ... */
static void C_ccall f_10956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1143: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[228],C_SCHEME_END_OF_LIST,t1);}

/* a10957 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in ... */
static void C_ccall f_10958(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10958,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10965,a[2]=t4,a[3]=t3,a[4]=t1,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1149: r */
t8=t3;
((C_proc3)C_fast_retrieve_proc(t8))(3,t8,t7,lf[305]);}

/* k5189 in map-loop794 in k5155 in k4954 in loop in k4935 in k4932 in k4929 in k4926 in expand-extended-lambda-list in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5191(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5191,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5162(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5162(t6,((C_word*)t0)[5],t5);}}

/* k11643 in k11630 in k11619 in k11616 in a11602 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11645(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11645,2,t0,t1);}
if(C_truep(t1)){
/* expand.scm:1026: ##sys#defjam-error */
t2=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=C_i_car(((C_word*)t0)[4]);
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,3,lf[337],((C_word*)t0)[6],t2));}}

/* er-macro-transformer in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_8016(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8016,3,t0,t1,t2);}
/* expand.scm:915: make-er/ir-transformer */
t3=*((C_word*)lf[177]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,C_SCHEME_TRUE);}

/* k8009 in k7459 in a7453 in make-er/ir-transformer in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_8011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:913: handler */
t2=((C_word*)t0)[2];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[5])[1]);}

/* ##sys#fixup-macro-environment in k8205 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in ... */
static void C_ccall f_9431(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_9431r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_9431r(t0,t1,t2,t3);}}

static void C_ccall f_9431r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(4);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9438,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t5)){
/* expand.scm:1537: ##sys#append */
t7=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t2,t5);}
else{
t7=t6;
f_9438(2,t7,t2);}}

/* k9436 in fixup-macro-environment in k8205 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in ... */
static void C_ccall f_9438(C_word c,C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9438,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9439,a[2]=t2,a[3]=((C_word)li130),tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[2];
t5=C_i_check_list_2(t4,lf[14]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9478,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9480,a[2]=t8,a[3]=t3,a[4]=((C_word)li131),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_9480(t10,t6,t4);}

/* g2781 in k9436 in fixup-macro-environment in k8205 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in ... */
static void C_fcall f_9439(C_word t0,C_word t1,C_word t2){
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
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9439,NULL,3,t0,t1,t2);}
t3=C_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9455,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_i_cadr(t2);
if(C_truep(C_i_nullp(t7))){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_i_set_car(t5,((C_word*)t0)[2]));}
else{
t8=t2;
t9=C_u_i_cdr(t8);
t10=C_u_i_car(t9);
/* expand.scm:1545: ##sys#append */
t11=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t6,t10,((C_word*)t0)[2]);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k11326 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in ... */
static void C_ccall f_11328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1127: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[221],C_SCHEME_END_OF_LIST,t1);}

/* for-each-loop2780 in k9436 in fixup-macro-environment in k8205 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in ... */
static void C_fcall f_9480(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9480,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9490,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* expand.scm:1536: g2781 */
t5=((C_word*)t0)[3];
f_9439(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* map-loop2502 */
static void C_fcall f_8357(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8357,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8386,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* synrules.scm:110: g2508 */
t5=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9488 in for-each-loop2780 in k9436 in fixup-macro-environment in k8205 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in ... */
static void C_ccall f_9490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_9480(t3,((C_word*)t0)[4],t2);}

/* k8995 in k8999 in k8978 in k8975 in k8972 in k8960 in k8954 in k8951 */
static void C_ccall f_8997(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:233: process-template */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k8991 in k8999 in k8978 in k8975 in k8972 in k8960 in k8954 in k8951 */
static void C_ccall f_8993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8993,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[70],((C_word*)t0)[3],t1));}

/* k8341 */
static void C_ccall f_8343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8343,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[45],((C_word*)((C_word*)t0)[2])[1]);
t3=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=C_a_i_list(&a,1,t3);
/* synrules.scm:61: ##sys#append */
t5=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[4],t1,t4);}

/* k5045 in k4970 in k4958 in k4954 in loop in k4935 in k4932 in k4929 in k4926 in expand-extended-lambda-list in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5047,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=C_a_i_list(&a,1,t4);
/* expand.scm:356: values */
C_values(4,0,((C_word*)t0)[5],((C_word*)t0)[6],t5);}

/* k8978 in k8975 in k8972 in k8960 in k8954 in k8951 */
static void C_ccall f_8980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8980,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9001,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* synrules.scm:231: segment-tail */
t4=((C_word*)((C_word*)t0)[6])[1];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[7]);}

/* k6829 in k6826 in k6823 in k6820 in loop in k6792 in syntax-error/context in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6831(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6831,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6834,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6841,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(*((C_word*)lf[119]+1));
/* expand.scm:663: ##sys#strip-syntax */
t5=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k6832 in k6829 in k6826 in k6823 in k6820 in loop in k6792 in syntax-error/context in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6834(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:664: outstr */
t2=((C_word*)t0)[2];
f_6796(t2,((C_word*)t0)[3],lf[126]);}

/* k8083 in loop in check-for-multiple-bindings in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_8085(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_8085,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8088,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8105,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1046: string-append */
t4=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[189],((C_word*)t0)[8],lf[190]);}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_i_caar(((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[6]);
/* expand.scm:1050: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8072(t6,((C_word*)t0)[5],t3,t5,((C_word*)t0)[3]);}}

/* k8086 in k8083 in loop in check-for-multiple-bindings in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_8088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8088,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_i_caar(((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[3]);
/* expand.scm:1049: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8072(t6,((C_word*)t0)[5],t3,((C_word*)t0)[6],t5);}

/* k6823 in k6820 in loop in k6792 in syntax-error/context in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6825,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6828,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:661: ##sys#print */
t3=*((C_word*)lf[124]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[4]);}

/* k6826 in k6823 in k6820 in loop in k6792 in syntax-error/context in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6828(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6828,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6831,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:662: outstr */
t3=((C_word*)t0)[2];
f_6796(t3,t2,lf[127]);}

/* k6820 in loop in k6792 in syntax-error/context in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6822(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6822,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6825,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:660: outstr */
t3=((C_word*)t0)[2];
f_6796(t3,t2,lf[128]);}

/* k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_8060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8060,2,t0,t1);}
t2=C_mutate2((C_word*)lf[96]+1 /* (set! ##sys#define-definition ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8064,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11601,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11603,a[2]=((C_word)li172),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1016: ##sys#er-transformer */
t6=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_8064(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8064,2,t0,t1);}
t2=C_mutate2((C_word*)lf[97]+1 /* (set! ##sys#define-syntax-definition ...) */,t1);
t3=C_mutate2(&lf[187] /* (set! check-for-multiple-bindings ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8066,a[2]=((C_word)li108),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8141,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11549,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11551,a[2]=((C_word)li171),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1055: ##sys#er-transformer */
t7=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}

/* check-for-multiple-bindings in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_8066(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8066,NULL,4,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8072,a[2]=t6,a[3]=t3,a[4]=t4,a[5]=((C_word)li107),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_8072(t8,t1,t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* k5026 in k4970 in k4958 in k4954 in loop in k4935 in k4932 in k4929 in k4926 in expand-extended-lambda-list in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5028,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=C_a_i_list(&a,1,t4);
/* expand.scm:356: values */
C_values(4,0,((C_word*)t0)[5],((C_word*)t0)[6],t5);}

/* loop in check-for-multiple-bindings in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_8072(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8072,NULL,5,t0,t1,t2,t3,t4);}
t5=C_i_nullp(t2);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8085,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t3,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
t7=C_i_caar(t2);
if(C_truep(C_i_memq(t7,t3))){
t8=t2;
t9=C_u_i_car(t8);
t10=C_u_i_car(t9);
t11=C_i_memq(t10,t4);
t12=t6;
f_8085(t12,C_i_not(t11));}
else{
t8=t6;
f_8085(t8,C_SCHEME_FALSE);}}}

/* k9416 in loop in k9393 in macro-subset in k8205 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in ... */
static void C_ccall f_9418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9418,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k8334 */
static void C_ccall f_8336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8336,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[2])[1],t1);
t3=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[4],t2);
t4=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[6],t3);
t5=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,2,lf[23],t4));}

/* k8384 in map-loop2502 */
static void C_ccall f_8386(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8386,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8357(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8357(t6,((C_word*)t0)[5],t5);}}

/* k5001 in k4970 in k4958 in k4954 in loop in k4935 in k4932 in k4929 in k4926 in expand-extended-lambda-list in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5003(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5003,2,t0,t1);}
t2=C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[4],t2);
t4=C_a_i_list(&a,1,t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[5]);
t6=C_a_i_cons(&a,2,((C_word*)t0)[6],t5);
t7=C_a_i_list(&a,1,t6);
/* expand.scm:356: values */
C_values(4,0,((C_word*)t0)[7],((C_word*)t0)[8],t7);}

/* k7475 in rename in k7459 in a7453 in make-er/ir-transformer in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_7477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7477,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7481,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* expand.scm:799: rename */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7463(3,t6,t3,t5);}

/* k9704 in k9639 in k9636 in k9630 in a9624 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in ... */
static void C_ccall f_9706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_car(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
/* expand.scm:1477: ##sys#instantiate-functor */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[257]+1)))(5,*((C_word*)lf[257]+1),((C_word*)t0)[3],((C_word*)t0)[4],t2,t3);}

/* k9701 in k9639 in k9636 in k9630 in a9624 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in ... */
static void C_ccall f_9703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[255]);}

/* k9698 in k9639 in k9636 in k9630 in a9624 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in ... */
static void C_ccall f_9700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1464: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[253]+1)))(4,*((C_word*)lf[253]+1),((C_word*)t0)[2],lf[254],t1);}

/* map-loop2107 in k10506 in k10494 in a10491 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in ... */
static void C_fcall f_10645(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(10);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_10645,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_u_i_cdr(t3);
t6=C_i_car(t5);
t7=C_a_i_list2(&a,2,t4,t6);
t8=C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t9=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t8);
t10=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t8);
t11=C_slot(t2,C_fix(1));
t17=t1;
t18=t11;
t1=t17;
t2=t18;
goto loop;}
else{
t9=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t8);
t10=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t8);
t11=C_slot(t2,C_fix(1));
t17=t1;
t18=t11;
t1=t17;
t2=t18;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9716 in k9636 in k9630 in a9624 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in ... */
static void C_ccall f_9718(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9718,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=C_eqp(lf[250],t1);
t5=(C_truep(t4)?C_SCHEME_TRUE:t1);
t6=t5;
t7=C_i_cdddr(((C_word*)t0)[2]);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9747,a[2]=t8,a[3]=t6,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t8))){
t10=C_u_i_cdr(t8);
if(C_truep(C_i_nullp(t10))){
t11=C_u_i_car(t8);
t12=t9;
f_9747(t12,C_i_stringp(t11));}
else{
t11=t9;
f_9747(t11,C_SCHEME_FALSE);}}
else{
t10=t9;
f_9747(t10,C_SCHEME_FALSE);}}

/* k7496 in rename in k7459 in a7453 in make-er/ir-transformer in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_7498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:801: list->vector */
t2=*((C_word*)lf[178]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* map-loop665 in k4674 in k4589 in k4577 in k4568 in loop in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_4615(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_4615,NULL,3,t0,t1,t2);}
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

/* k4611 in k4674 in k4589 in k4577 in k4568 in loop in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4613,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[53],t2);
/* expand.scm:280: values */
C_values(4,0,((C_word*)t0)[3],t3,C_SCHEME_TRUE);}

/* k9534 in a9531 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in ... */
static void C_ccall f_9536(C_word c,C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9536,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
t7=C_u_i_cdr(t6);
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=lf[237];
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_i_symbolp(((C_word*)t4)[1]))){
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9553,a[2]=t10,a[3]=t4,a[4]=t8,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* synrules.scm:54: ##sys#check-syntax */
t12=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t12+1)))(5,t12,t11,lf[236],((C_word*)t0)[2],lf[238]);}
else{
/* synrules.scm:58: ##sys#process-syntax-rules */
t11=*((C_word*)lf[191]+1);
((C_proc7)(void*)(*((C_word*)t11+1)))(7,t11,((C_word*)t0)[3],((C_word*)t10)[1],((C_word*)t8)[1],((C_word*)t4)[1],((C_word*)t0)[4],((C_word*)t0)[5]);}}

/* a9531 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in ... */
static void C_ccall f_9532(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9532,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9536,a[2]=t2,a[3]=t1,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* synrules.scm:49: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[236],t2,lf[239]);}

/* k9528 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in ... */
static void C_ccall f_9530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:44: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[236],C_SCHEME_END_OF_LIST,t1);}

/* rename in k7459 in a7453 in make-er/ir-transformer in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_7463(C_word c,C_word t0,C_word t1,C_word t2){
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
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)tr3,(void*)f_7463,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7477,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=t2;
t5=C_u_i_car(t4);
/* expand.scm:799: rename */
t15=t3;
t16=t5;
t1=t15;
t2=t16;
c=3;
goto loop;}
else{
if(C_truep(C_i_vectorp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7498,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7502,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:801: vector->list */
t5=*((C_word*)lf[179]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
if(C_truep(C_i_symbolp(t2))){
t3=C_i_assq(t2,((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t3)){
t4=t1;
t5=t4;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_cdr(t3));}
else{
t4=f_3645(t2,((C_word*)t0)[4]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7532,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li95),tmp=(C_word)a,a+=6,tmp);
/* expand.scm:794: g1490 */
t6=t5;
f_7532(t6,t1,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7600,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:828: macro-alias */
f_3662(t5,t2,((C_word*)t0)[4]);}}}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}}}

/* k7459 in a7453 in make-er/ir-transformer in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_7461(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7461,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7463,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li96),tmp=(C_word)a,a+=6,tmp));
t11=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7617,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=((C_word)li100),tmp=(C_word)a,a+=5,tmp));
t12=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7854,a[2]=((C_word)li101),tmp=(C_word)a,a+=3,tmp));
t13=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7879,a[2]=t9,a[3]=((C_word*)t0)[3],a[4]=t7,a[5]=((C_word*)t0)[2],a[6]=t3,a[7]=((C_word)li102),tmp=(C_word)a,a+=8,tmp));
if(C_truep(((C_word*)t0)[5])){
/* expand.scm:907: handler */
t14=((C_word*)t0)[6];
((C_proc5)C_fast_retrieve_proc(t14))(5,t14,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t3)[1],((C_word*)t5)[1]);}
else{
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8007,a[2]=t9,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8011,a[2]=((C_word*)t0)[6],a[3]=t14,a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:913: rename */
t16=((C_word*)t3)[1];
f_7463(3,t16,t15,((C_word*)t0)[8]);}}

/* k8298 in k8293 in k8289 in k8285 in k8281 in k8276 in k8269 in k8264 in k8260 in k8256 in k8252 in k8248 in k8244 in k8238 in k8233 in k8229 in k8214 in process-syntax-rules in k8205 in k8202 in k8199 in k8196 in ... */
static void C_ccall f_8300(C_word c,C_word t0,C_word t1){
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
C_word ab[119],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8300,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8302,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word)li109),tmp=(C_word)a,a+=5,tmp));
t4=C_mutate2(((C_word *)((C_word*)t0)[5])+1,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_8308,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[13],a[10]=((C_word*)t0)[14],a[11]=((C_word*)t0)[15],a[12]=((C_word)li111),tmp=(C_word)a,a+=13,tmp));
t5=C_mutate2(((C_word *)((C_word*)t0)[14])+1,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8400,a[2]=((C_word*)t0)[16],a[3]=((C_word*)t0)[17],a[4]=((C_word*)t0)[18],a[5]=((C_word*)t0)[19],a[6]=((C_word*)t0)[20],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[21],a[9]=((C_word)li113),tmp=(C_word)a,a+=10,tmp));
t6=C_mutate2(((C_word *)((C_word*)t0)[21])+1,(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_8466,a[2]=((C_word*)t0)[22],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[23],a[6]=((C_word*)t0)[24],a[7]=((C_word*)t0)[25],a[8]=((C_word*)t0)[16],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[21],a[12]=((C_word*)t0)[26],a[13]=((C_word*)t0)[27],a[14]=((C_word*)t0)[28],a[15]=((C_word*)t0)[29],a[16]=((C_word*)t0)[30],a[17]=((C_word*)t0)[31],a[18]=((C_word)li114),tmp=(C_word)a,a+=19,tmp));
t7=C_mutate2(((C_word *)((C_word*)t0)[23])+1,(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_8647,a[2]=((C_word*)t0)[32],a[3]=((C_word*)t0)[33],a[4]=((C_word*)t0)[34],a[5]=((C_word*)t0)[35],a[6]=((C_word*)t0)[36],a[7]=((C_word*)t0)[37],a[8]=((C_word*)t0)[16],a[9]=((C_word*)t0)[15],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[38],a[13]=((C_word*)t0)[9],a[14]=((C_word*)t0)[39],a[15]=((C_word*)t0)[21],a[16]=((C_word*)t0)[26],a[17]=((C_word)li115),tmp=(C_word)a,a+=18,tmp));
t8=C_mutate2(((C_word *)((C_word*)t0)[20])+1,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8774,a[2]=((C_word*)t0)[22],a[3]=((C_word*)t0)[20],a[4]=((C_word*)t0)[24],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[40],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[26],a[9]=((C_word*)t0)[28],a[10]=((C_word*)t0)[31],a[11]=((C_word)li117),tmp=(C_word)a,a+=12,tmp));
t9=C_mutate2(((C_word *)((C_word*)t0)[18])+1,(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_8914,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[18],a[4]=((C_word*)t0)[41],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[42],a[7]=((C_word*)t0)[43],a[8]=((C_word*)t0)[44],a[9]=((C_word*)t0)[45],a[10]=((C_word*)t0)[46],a[11]=((C_word*)t0)[47],a[12]=((C_word*)t0)[48],a[13]=((C_word)li119),tmp=(C_word)a,a+=14,tmp));
t10=C_mutate2(((C_word *)((C_word*)t0)[19])+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9106,a[2]=((C_word*)t0)[22],a[3]=((C_word*)t0)[19],a[4]=((C_word*)t0)[31],a[5]=((C_word)li120),tmp=(C_word)a,a+=6,tmp));
t11=C_mutate2(((C_word *)((C_word*)t0)[43])+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9183,a[2]=((C_word*)t0)[43],a[3]=((C_word*)t0)[48],a[4]=((C_word)li121),tmp=(C_word)a,a+=5,tmp));
t12=C_mutate2(((C_word *)((C_word*)t0)[31])+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9272,a[2]=((C_word*)t0)[48],a[3]=((C_word)li122),tmp=(C_word)a,a+=4,tmp));
t13=C_mutate2(((C_word *)((C_word*)t0)[48])+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9300,a[2]=((C_word*)t0)[3],a[3]=((C_word)li123),tmp=(C_word)a,a+=4,tmp));
t14=C_mutate2(((C_word *)((C_word*)t0)[44])+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9324,a[2]=((C_word*)t0)[44],a[3]=((C_word*)t0)[48],a[4]=((C_word)li124),tmp=(C_word)a,a+=5,tmp));
t15=C_mutate2(((C_word *)((C_word*)t0)[41])+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9344,a[2]=((C_word*)t0)[3],a[3]=((C_word)li126),tmp=(C_word)a,a+=4,tmp));
/* synrules.scm:314: make-transformer */
t16=((C_word*)((C_word*)t0)[5])[1];
((C_proc3)(void*)(*((C_word*)t16+1)))(3,t16,((C_word*)t0)[49],((C_word*)t0)[50]);}

/* f_8302 in k8298 in k8293 in k8289 in k8285 in k8281 in k8276 in k8269 in k8264 in k8260 in k8256 in k8252 in k8248 in k8244 in k8238 in k8233 in k8229 in k8214 in process-syntax-rules in k8205 in k8202 in k8199 in ... */
static void C_ccall f_8302(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8302,3,t0,t1,t2);}
/* synrules.scm:104: c */
t3=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t1,t2,((C_word*)((C_word*)t0)[3])[1]);}

/* k10197 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in ... */
static void C_ccall f_10199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1290: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[278],C_SCHEME_END_OF_LIST,t1);}

/* f_8308 in k8298 in k8293 in k8289 in k8285 in k8281 in k8276 in k8269 in k8264 in k8260 in k8256 in k8252 in k8248 in k8244 in k8238 in k8233 in k8229 in k8214 in process-syntax-rules in k8205 in k8202 in k8199 in ... */
static void C_ccall f_8308(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[54],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8308,3,t0,t1,t2);}
t3=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]);
t4=t3;
t5=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[2])[1]);
t6=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[6])[1],t5);
t7=C_a_i_list(&a,1,t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8336,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=t8,a[5]=((C_word*)t0)[9],a[6]=t4,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t10=C_SCHEME_END_OF_LIST;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=((C_word*)((C_word*)t0)[10])[1];
t15=C_i_check_list_2(t2,lf[16]);
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8343,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[11],a[4]=t9,tmp=(C_word)a,a+=5,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8357,a[2]=t13,a[3]=t18,a[4]=t11,a[5]=t14,a[6]=((C_word)li110),tmp=(C_word)a,a+=7,tmp));
t20=((C_word*)t18)[1];
f_8357(t20,t16,t2);}

/* a7453 in make-er/ir-transformer in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_7454(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7454,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_listp(t3);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7461,a[2]=t6,a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=t1,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t7)){
t9=t8;
f_7461(2,t9,t7);}
else{
/* expand.scm:794: ##sys#error */
t9=*((C_word*)lf[25]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,lf[182],t3);}}

/* k9551 in k9534 in a9531 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in ... */
static void C_ccall f_9553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_i_car(((C_word*)((C_word*)t0)[4])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t3);
t5=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t6=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t5);
/* synrules.scm:58: ##sys#process-syntax-rules */
t7=*((C_word*)lf[191]+1);
((C_proc7)(void*)(*((C_word*)t7+1)))(7,t7,((C_word*)t0)[5],((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k7134 in k7001 in check-syntax in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_7136(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7136,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7141,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word)li93),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_7141(t5,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);}

/* k7479 in k7475 in rename in k7459 in a7453 in make-er/ir-transformer in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_7481(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7481,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k9564 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in ... */
static void C_ccall f_9566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1507: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[240],C_SCHEME_END_OF_LIST,t1);}

/* a9567 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in ... */
static void C_ccall f_9568(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9568,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9572,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9585,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=C_i_cdr(t2);
/* expand.scm:1514: ##sys#strip-syntax */
t8=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t6,t7);}

/* k9819 in k9811 in a9804 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in ... */
static void C_ccall f_9821(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9821,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,2,((C_word*)t0)[4],t3));}

/* k10143 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in ... */
static void C_ccall f_10145(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1352: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[272],C_SCHEME_END_OF_LIST,t1);}

/* a10146 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in ... */
static void C_ccall f_10147(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10147,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10151,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1357: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[272],t2,lf[274]);}

/* k9570 in a9567 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in ... */
static void C_ccall f_9572(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9572,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9575,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1516: ##sys#current-module */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[243]+1)))(2,*((C_word*)lf[243]+1),t3);}

/* k9573 in k9570 in a9567 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in ... */
static void C_ccall f_9575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9575,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9578,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
/* expand.scm:1518: ##sys#add-to-export-list */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[242]+1)))(4,*((C_word*)lf[242]+1),t2,t1,((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[241]);}}

/* k9576 in k9573 in k9570 in a9567 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in ... */
static void C_ccall f_9578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[241]);}

/* k9827 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in ... */
static void C_ccall f_9829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1422: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[263],C_SCHEME_END_OF_LIST,t1);}

/* a9830 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in ... */
static void C_ccall f_9831(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9831,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,3,lf[264],t5,C_SCHEME_TRUE));}

/* k9583 in a9567 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in ... */
static void C_ccall f_9585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1513: ##sys#validate-exports */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[244]+1)))(4,*((C_word*)lf[244]+1),((C_word*)t0)[2],t1,lf[240]);}

/* walk in k7134 in k7001 in check-syntax in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_7141(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(8);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_7141,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_vectorp(t3))){
t4=C_i_vector_ref(t3,C_fix(0));
t5=t4;
t6=C_block_size(t3);
t7=C_fixnum_greaterp(t6,C_fix(1));
t8=(C_truep(t7)?C_i_vector_ref(t3,C_fix(1)):C_fix(0));
t9=t8;
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7160,a[2]=t9,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=t1,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t11=C_eqp(t6,C_fix(1));
if(C_truep(t11)){
t12=t10;
f_7160(t12,C_fix(1));}
else{
t12=C_fixnum_greaterp(t6,C_fix(2));
t13=t10;
f_7160(t13,(C_truep(t12)?C_i_vector_ref(t3,C_fix(2)):C_fix(99999)));}}
else{
if(C_truep(C_immp(t3))){
t4=C_eqp(t3,t2);
if(C_truep(t4)){
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
/* expand.scm:763: err */
t5=((C_word*)((C_word*)t0)[2])[1];
f_7020(t5,t1,lf[154]);}}
else{
if(C_truep(C_i_symbolp(t3))){
t4=t3;
t5=C_eqp(t4,lf[155]);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_TRUE);}
else{
t6=C_eqp(t4,lf[156]);
if(C_truep(t6)){
/* expand.scm:767: test */
t7=((C_word*)((C_word*)t0)[4])[1];
f_7008(t7,t1,t2,*((C_word*)lf[157]+1),lf[158]);}
else{
t7=C_eqp(t4,lf[159]);
if(C_truep(t7)){
/* expand.scm:768: test */
t8=((C_word*)((C_word*)t0)[4])[1];
f_7008(t8,t1,t2,*((C_word*)lf[160]+1),lf[161]);}
else{
t8=C_eqp(t4,lf[162]);
if(C_truep(t8)){
/* expand.scm:769: test */
t9=((C_word*)((C_word*)t0)[4])[1];
f_7008(t9,t1,t2,*((C_word*)lf[160]+1),lf[163]);}
else{
t9=C_eqp(t4,lf[164]);
if(C_truep(t9)){
/* expand.scm:770: test */
t10=((C_word*)((C_word*)t0)[4])[1];
f_7008(t10,t1,t2,((C_word*)((C_word*)t0)[5])[1],lf[165]);}
else{
t10=C_eqp(t4,lf[166]);
if(C_truep(t10)){
/* expand.scm:771: test */
t11=((C_word*)((C_word*)t0)[4])[1];
f_7008(t11,t1,t2,*((C_word*)lf[167]+1),lf[168]);}
else{
t11=C_eqp(t4,lf[169]);
if(C_truep(t11)){
/* expand.scm:772: test */
t12=((C_word*)((C_word*)t0)[4])[1];
f_7008(t12,t1,t2,*((C_word*)lf[170]+1),lf[171]);}
else{
t12=C_eqp(t4,lf[172]);
if(C_truep(t12)){
/* expand.scm:773: test */
t13=((C_word*)((C_word*)t0)[4])[1];
f_7008(t13,t1,t2,((C_word*)((C_word*)t0)[6])[1],lf[173]);}
else{
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7338,a[2]=((C_word*)t0)[7],a[3]=t3,a[4]=((C_word)li92),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:775: test */
t14=((C_word*)((C_word*)t0)[4])[1];
f_7008(t14,t1,t2,t13,lf[174]);}}}}}}}}}
else{
if(C_truep(C_i_pairp(t3))){
if(C_truep(C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7395,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(t2);
t6=C_i_car(t3);
/* expand.scm:785: walk */
t29=t4;
t30=t5;
t31=t6;
t1=t29;
t2=t30;
t3=t31;
goto loop;}
else{
/* expand.scm:783: err */
t4=((C_word*)((C_word*)t0)[2])[1];
f_7020(t4,t1,lf[175]);}}
else{
/* expand.scm:782: err */
t4=((C_word*)((C_word*)t0)[2])[1];
f_7020(t4,t1,lf[176]);}}}}}

/* k3789 in k3796 in walk in strip-syntax in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_3791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[2],C_fix(1),t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}

/* k9591 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in ... */
static void C_ccall f_9593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1498: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[245],C_SCHEME_END_OF_LIST,t1);}

/* expand in k9871 in k9868 in k9865 in k9862 in a9856 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in ... */
static void C_fcall f_10021(C_word t0,C_word t1,C_word t2){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10021,NULL,3,t0,t1,t2);}
t3=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_i_check_list_2(((C_word*)t0)[2],lf[16]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10043,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10045,a[2]=t7,a[3]=t11,a[4]=t5,a[5]=((C_word)li142),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_10045(t13,t9,((C_word*)t0)[2]);}
else{
if(C_truep(C_i_pairp(t2))){
t4=C_i_car(t2);
t5=t4;
t6=t2;
t7=C_u_i_cdr(t6);
if(C_truep(C_i_pairp(t5))){
t8=C_i_car(t5);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10109,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t7,a[6]=((C_word*)t0)[4],a[7]=t9,tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1406: c */
t11=((C_word*)t0)[5];
((C_proc4)C_fast_retrieve_proc(t11))(4,t11,t10,t9,((C_word*)t0)[6]);}
else{
/* expand.scm:1404: err */
t8=((C_word*)((C_word*)t0)[7])[1];
f_9875(t8,t1,t5);}}
else{
/* expand.scm:1399: err */
t4=((C_word*)((C_word*)t0)[7])[1];
f_9875(t4,t1,t2);}}}

/* a9594 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in ... */
static void C_ccall f_9595(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9595,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9599,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1503: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[245],t2,lf[248]);}

/* k9597 in a9594 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in ... */
static void C_ccall f_9599(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9599,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9602,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,lf[103],t3);
/* expand.scm:1504: ##sys#register-meta-expression */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[247]+1)))(3,*((C_word*)lf[247]+1),t2,t4);}

/* make-er/ir-transformer in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_7448(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7448,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7454,a[2]=t3,a[3]=t2,a[4]=((C_word)li103),tmp=(C_word)a,a+=5,tmp);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record2(&a,2,lf[24],t4));}

/* k3796 in walk in strip-syntax in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_3798(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3798,2,t0,t1);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(0),t1);
t3=((C_word*)t0)[3];
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3791,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[5];
t6=C_u_i_cdr(t5);
/* expand.scm:117: walk */
t7=((C_word*)((C_word*)t0)[6])[1];
f_3726(t7,t4,t6);}

/* loop in proper-list? in k7001 in check-syntax in k4115 in k3641 in k3637 in k3633 in k3629 */
static C_word C_fcall f_7115(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:
t2=C_eqp(t1,C_SCHEME_END_OF_LIST);
if(C_truep(t2)){
return(t2);}
else{
if(C_truep(C_i_pairp(t1))){
t3=t1;
t4=C_u_i_cdr(t3);
t6=t4;
t1=t6;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* proper-list? in k7001 in check-syntax in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_7109(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7109,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7115,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_7115(t2));}

/* k7105 in loop in k7049 in lambda-list? in k7001 in check-syntax in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_7107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_cdr(t2);
/* expand.scm:732: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_7059(t4,((C_word*)t0)[2],t3);}}

/* macro-alias in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_3662(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3662,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3669,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:85: ##sys#qualified-symbol? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(3,*((C_word*)lf[9]+1),t4,t2);}

/* k3667 in macro-alias in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_3669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3669,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3672,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
f_3672(t3,t1);}
else{
t3=C_slot(((C_word*)t0)[2],C_fix(1));
t4=C_block_size(t3);
if(C_truep(C_fixnum_greaterp(t4,C_fix(0)))){
t5=C_subchar(t3,C_fix(0));
t6=t2;
f_3672(t6,C_i_char_equalp(C_make_character(35),t5));}
else{
t5=t2;
f_3672(t5,C_SCHEME_FALSE);}}}

/* k3670 in k3667 in macro-alias in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_3672(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3672,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3675,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:91: gensym */
t3=*((C_word*)lf[8]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}}

/* ##sys#undefine-macro! in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4295(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4295,3,t0,t1,t2);}
/* expand.scm:198: ##sys#unregister-macro */
t3=*((C_word*)lf[30]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* k3673 in k3670 in k3667 in macro-alias in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_3675(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3675,2,t0,t1);}
t2=f_3645(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(C_truep(t2)?t2:((C_word*)t0)[2]);
t4=((C_word*)t0)[2];
t5=C_i_getprop(t4,lf[7],C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_a_i_putprop(&a,3,t1,lf[5],t3);
t7=C_a_i_putprop(&a,3,t1,lf[7],t5);
t8=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t1);}
else{
t6=((C_word*)t0)[2];
t7=C_a_i_putprop(&a,3,t1,lf[5],t3);
t8=C_a_i_putprop(&a,3,t1,lf[7],t6);
t9=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t1);}}

/* k4433 in k4430 in tmp13099 in a4425 in a4318 in call-handler in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_3643(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3643,2,t0,t1);}
t2=C_mutate2((C_word*)lf[3]+1 /* (set! ##sys#active-eval-environment ...) */,t1);
t3=C_mutate2(&lf[4] /* (set! lookup ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3645,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2(&lf[6] /* (set! macro-alias ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3662,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[10]+1 /* (set! strip-syntax ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3720,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[12]+1 /* (set! ##sys#strip-syntax ...) */,*((C_word*)lf[10]+1));
t7=C_mutate2((C_word*)lf[13]+1 /* (set! ##sys#extend-se ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3857,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[17]+1 /* (set! ##sys#globalize ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4033,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4117,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:156: make-parameter */
t10=*((C_word*)lf[235]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,C_SCHEME_END_OF_LIST);}

/* lookup in k3641 in k3637 in k3633 in k3629 */
static C_word C_fcall f_3645(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
t3=C_u_i_assq(t1,t2);
if(C_truep(t3)){
return(C_i_cdr(t3));}
else{
t4=t1;
t5=C_i_getprop(t4,lf[5],C_SCHEME_FALSE);
return((C_truep(t5)?t5:C_SCHEME_FALSE));}}

/* for-each-loop381 in k3859 in extend-se in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_3949(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(8);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3949,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_i_getprop(t7,lf[7],C_SCHEME_FALSE);
t9=(C_truep(t8)?C_a_i_putprop(&a,3,t6,lf[7],t8):C_a_i_putprop(&a,3,t6,lf[7],t7));
t10=C_slot(t2,C_fix(1));
t11=C_slot(t3,C_fix(1));
t14=t1;
t15=t10;
t16=t11;
t1=t14;
t2=t15;
t3=t16;
goto loop;}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k9022 in k8972 in k8960 in k8954 in k8951 */
static void C_fcall f_9024(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9024,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_8977(t2,((C_word*)t0)[3]);}
else{
t2=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[5]);
t4=((C_word*)t0)[2];
f_8977(t4,C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[6])[1],t3));}}

/* f_9106 in k8298 in k8293 in k8289 in k8285 in k8281 in k8276 in k8269 in k8264 in k8260 in k8256 in k8252 in k8248 in k8244 in k8238 in k8233 in k8229 in k8214 in process-syntax-rules in k8205 in k8202 in k8199 in ... */
static void C_ccall f_9106(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_9106,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(C_i_symbolp(t2))){
if(C_truep(C_i_memq(t2,((C_word*)t0)[2]))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t4);}
else{
t6=C_a_i_cons(&a,2,t2,t3);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_cons(&a,2,t6,t4));}}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9132,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* synrules.scm:251: segment-pattern? */
t7=((C_word*)((C_word*)t0)[4])[1];
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t6,t2,t5);}}

/* k9099 in k8951 */
static void C_ccall f_9101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:240: process-template */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k9512 in k8205 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in ... */
static void C_ccall f_9514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9514,2,t0,t1);}
t2=C_mutate2((C_word*)lf[233]+1 /* (set! ##sys#default-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9518,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9522,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1552: ##sys#macro-environment */
t5=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k9516 in k9512 in k8205 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in ... */
static void C_ccall f_9518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2((C_word*)lf[234]+1 /* (set! ##sys#meta-macro-environment ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* doloop2636 in k8975 in k8972 in k8960 in k8954 in k8951 */
static void C_fcall f_9003(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(10);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_9003,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=C_eqp(t4,C_fix(1));
if(C_truep(t5)){
t6=t3;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=C_fixnum_difference(t2,C_fix(1));
t7=C_a_i_list(&a,3,lf[215],lf[70],t3);
t10=t1;
t11=t6;
t12=t7;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}

/* k8999 in k8978 in k8975 in k8972 in k8960 in k8954 in k8951 */
static void C_ccall f_9001(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9001,2,t0,t1);}
if(C_truep(C_i_nullp(t1))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8993,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8997,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* synrules.scm:233: segment-tail */
t4=((C_word*)((C_word*)t0)[7])[1];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[8]);}}

/* ##sys#unregister-macro in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4250(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4250,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4258,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4262,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:192: ##sys#macro-environment */
t5=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k4256 in unregister-macro in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:190: ##sys#macro-environment */
t2=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* a11875 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11876(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11876,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11880,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:959: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[210],t2,lf[352]);}

/* k11872 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:954: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[210],C_SCHEME_END_OF_LIST,t1);}

/* k9520 in k9512 in k8205 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in ... */
static void C_ccall f_9522(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1552: make-parameter */
t2=*((C_word*)lf[235]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k9524 in k8205 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in ... */
static void C_ccall f_9526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1550: ##sys#fixup-macro-environment */
t2=*((C_word*)lf[232]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4285 in loop in k4260 in unregister-macro in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4287,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k11861 in a11858 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11863,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,2,lf[209],t2));}

/* k4340 in a4330 in a4324 in a4318 in call-handler in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_4342(C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4342,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4353,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=C_slot(((C_word*)t0)[2],C_fix(2));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4359,a[2]=((C_word*)t0)[4],a[3]=t7,a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_4359(t9,t4,t5);}
else{
t2=((C_word*)t0)[2];
/* expand.scm:210: ##sys#abort */
t3=*((C_word*)lf[34]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t2);}}

/* k9145 in k9130 */
static void C_ccall f_9147(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:252: meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc6)C_fast_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,C_SCHEME_FALSE);}

/* a4330 in a4324 in a4318 in call-handler in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4331(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4331,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4342,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_structurep(((C_word*)t0)[2],lf[33]))){
t3=C_slot(((C_word*)t0)[2],C_fix(1));
t4=t2;
f_4342(t4,C_i_memq(lf[40],t3));}
else{
t3=t2;
f_4342(t3,C_SCHEME_FALSE);}}

/* k9130 */
static void C_ccall f_9132(C_word c,C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9132,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9147,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=C_i_cddr(((C_word*)t0)[2]);
/* synrules.scm:253: meta-variables */
t8=((C_word*)((C_word*)t0)[4])[1];
((C_proc6)C_fast_retrieve_proc(t8))(6,t8,t6,t7,((C_word*)t0)[3],((C_word*)t0)[6],C_SCHEME_TRUE);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9166,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
/* synrules.scm:256: meta-variables */
t7=((C_word*)((C_word*)t0)[4])[1];
((C_proc6)C_fast_retrieve_proc(t7))(6,t7,t4,t6,((C_word*)t0)[3],((C_word*)t0)[6],C_SCHEME_FALSE);}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9181,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* synrules.scm:258: vector->list */
t3=*((C_word*)lf[179]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[6]);}}}}

/* k11147 in k11144 in k11104 in k11029 in k11026 in k10988 in expand in k10969 in k10966 in k10963 in a10957 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in ... */
static void C_ccall f_11149(C_word c,C_word t0,C_word t1){
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
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11149,2,t0,t1);}
t2=t1;
t3=C_i_car(((C_word*)t0)[2]);
t4=C_a_i_list(&a,3,lf[72],C_SCHEME_END_OF_LIST,t3);
t5=t4;
t6=C_i_cadr(((C_word*)t0)[2]);
t7=C_a_i_list(&a,3,lf[215],t6,t2);
t8=t7;
t9=C_i_cadddr(((C_word*)t0)[2]);
t10=C_a_i_list(&a,3,lf[215],t9,t2);
t11=t10;
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11176,a[2]=t8,a[3]=t11,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1201: expand */
t13=((C_word*)((C_word*)t0)[4])[1];
f_10976(t13,t12,((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k11144 in k11104 in k11029 in k11026 in k10988 in expand in k10969 in k10966 in k10963 in a10957 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in ... */
static void C_ccall f_11146(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11146,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11149,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1194: r */
t3=((C_word*)t0)[6];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[77]);}
else{
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,lf[103],t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11203,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1204: expand */
t8=((C_word*)((C_word*)t0)[4])[1];
f_10976(t8,t7,((C_word*)t0)[5],C_SCHEME_FALSE);}}

/* a4324 in a4318 in call-handler in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4325(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4325,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4331,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li22),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:207: k565 */
t4=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* a4318 in call-handler in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4319(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4319,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4325,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li23),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4426,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word)li31),tmp=(C_word)a,a+=10,tmp);
/* expand.scm:207: with-exception-handler */
t5=*((C_word*)lf[47]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* k4312 in call-handler in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:207: g569 */
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k11174 in k11147 in k11144 in k11104 in k11029 in k11026 in k10988 in expand in k10969 in k10966 in k10963 in a10957 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in ... */
static void C_ccall f_11176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11176,2,t0,t1);}
t2=C_a_i_list(&a,4,lf[311],((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_a_i_list(&a,3,lf[72],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[92],((C_word*)t0)[6],t3));}

/* k11889 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:946: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[223],C_SCHEME_END_OF_LIST,t1);}

/* a11892 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11893(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11893,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11897,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:951: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[223],t2,lf[353]);}

/* k11895 in a11892 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11897,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[72],t2));}

/* k11126 in k11107 in k11104 in k11029 in k11026 in k10988 in expand in k10969 in k10966 in k10963 in a10957 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in ... */
static void C_ccall f_11128(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11128,2,t0,t1);}
t2=C_a_i_list(&a,4,lf[294],((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,3,lf[50],((C_word*)t0)[5],t2));}

/* k9095 in k8951 */
static void C_ccall f_9097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9097,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,((C_word*)((C_word*)t0)[3])[1],t1));}

/* ##sys#expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4301(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[22],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4301,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4304,a[2]=t3,a[3]=((C_word)li33),tmp=(C_word)a,a+=4,tmp));
t10=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4502,a[2]=t6,a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp));
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4546,a[2]=t3,a[3]=t8,a[4]=t12,a[5]=t6,a[6]=t4,a[7]=((C_word)li38),tmp=(C_word)a,a+=8,tmp));
t14=((C_word*)t12)[1];
f_4546(t14,t1,t2);}

/* call-handler in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_4304(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4304,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4314,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4319,a[2]=t2,a[3]=t6,a[4]=t4,a[5]=t3,a[6]=t5,a[7]=((C_word*)t0)[2],a[8]=((C_word)li32),tmp=(C_word)a,a+=9,tmp);
/* expand.scm:207: call-with-current-continuation */
t9=*((C_word*)lf[48]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t7,t8);}

/* k4782 in loop in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=f_3645(((C_word*)((C_word*)t0)[2])[1],t1);
if(C_truep(t2)){
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];
f_4570(t4,t3);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t3);
t5=((C_word*)t0)[3];
f_4570(t5,t4);}}

/* map-loop355 in extend-se in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_3995(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3995,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4024,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* expand.scm:130: g361 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k11878 in a11875 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11880(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11880,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,2,lf[71],t2));}

/* k9078 in k9074 in k8951 */
static void C_ccall f_9080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9080,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[4],t1));}

/* k4796 in expand in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4798(C_word c,C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4798,2,t0,t1);}
t2=t1;
t3=C_i_nullp(((C_word*)t0)[2]);
t4=(C_truep(t3)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4812,a[2]=t2,a[3]=t7,a[4]=t11,a[5]=((C_word)li42),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_4812(t13,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* expand in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4794(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_4794r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4794r(t0,t1,t2,t3);}}

static void C_ccall f_4794r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4798,a[2]=t4,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t4))){
/* expand.scm:309: ##sys#current-environment */
t6=*((C_word*)lf[1]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=t5;
f_4798(2,t6,C_i_car(t4));}}

/* k6846 in loop in k6792 in syntax-error/context in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6848(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6848,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6851,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6738,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6782,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:647: ##sys#strip-syntax */
t7=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}

/* k10621 in map-loop2141 in k10552 in k10531 in k10506 in k10494 in a10491 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in ... */
static void C_fcall f_10623(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_10623,NULL,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_10594(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_10594(t6,((C_word*)t0)[5],t5);}}

/* k11107 in k11104 in k11029 in k11026 in k10988 in expand in k10969 in k10966 in k10963 in a10957 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in ... */
static void C_ccall f_11109(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_11109,2,t0,t1);}
t2=t1;
t3=C_i_car(((C_word*)t0)[2]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,1,t4);
t6=t5;
t7=C_i_caddr(((C_word*)t0)[2]);
t8=C_a_i_list(&a,2,t7,t2);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11128,a[2]=t2,a[3]=t9,a[4]=((C_word*)t0)[3],a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1191: expand */
t11=((C_word*)((C_word*)t0)[4])[1];
f_10976(t11,t10,((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k6839 in k6829 in k6826 in k6823 in k6820 in loop in k6792 in syntax-error/context in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:663: ##sys#print */
t2=*((C_word*)lf[124]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_TRUE,((C_word*)t0)[3]);}

/* k11104 in k11029 in k11026 in k10988 in expand in k10969 in k10966 in k10963 in a10957 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_11106(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11106,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11109,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1187: r */
t3=((C_word*)t0)[6];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[77]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11146,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_u_i_length(((C_word*)t0)[2]);
t4=C_eqp(t3,C_fix(4));
if(C_truep(t4)){
t5=C_i_caddr(((C_word*)t0)[2]);
/* expand.scm:1193: c */
t6=((C_word*)t0)[7];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t2,((C_word*)t0)[8],t5);}
else{
t5=t2;
f_11146(2,t5,C_SCHEME_FALSE);}}}

/* k9074 in k8951 */
static void C_ccall f_9076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9076,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9080,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[4];
t5=C_u_i_cdr(t4);
/* synrules.scm:237: process-template */
t6=((C_word*)((C_word*)t0)[5])[1];
((C_proc5)C_fast_retrieve_proc(t6))(5,t6,t3,t5,((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k11098 in k11029 in k11026 in k10988 in expand in k10969 in k10966 in k10963 in a10957 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_11100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11100,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* k6849 in k6846 in loop in k6792 in syntax-error/context in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6851,2,t0,t1);}
t2=t1;
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6860,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:669: outstr */
t4=((C_word*)t0)[2];
f_6796(t4,t3,((C_word*)t0)[7]);}
else{
t3=((C_word*)t0)[8];
t4=C_u_i_cdr(t3);
/* expand.scm:690: loop */
t5=((C_word*)((C_word*)t0)[9])[1];
f_6812(t5,((C_word*)t0)[3],t4);}}

/* k10680 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in ... */
static void C_ccall f_10682(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1248: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[88],C_SCHEME_END_OF_LIST,t1);}

/* a10683 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in ... */
static void C_ccall f_10684(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10684,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10688,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1253: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[88],t2,lf[298]);}

/* k6864 in k6861 in k6858 in k6849 in k6846 in loop in k6792 in syntax-error/context in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6866,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6869,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:672: outstr */
t3=((C_word*)t0)[3];
f_6796(t3,t2,lf[136]);}

/* k6867 in k6864 in k6861 in k6858 in k6849 in k6846 in loop in k6792 in syntax-error/context in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6869,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6872,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:673: ##sys#print */
t3=*((C_word*)lf[124]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[6]);}

/* k10686 in a10683 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in ... */
static void C_ccall f_10688(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10688,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10698,a[2]=t5,a[3]=t7,a[4]=((C_word)li156),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_10698(t9,((C_word*)t0)[3],t2);}

/* a11858 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11859(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11859,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11863,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:967: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[138],t2,lf[351]);}

/* k6858 in k6849 in k6846 in loop in k6792 in syntax-error/context in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6860(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6860,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6863,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:670: outstr */
t3=((C_word*)t0)[3];
f_6796(t3,t2,lf[137]);}

/* k6861 in k6858 in k6849 in k6846 in loop in k6792 in syntax-error/context in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6863,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6866,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:671: ##sys#print */
t3=*((C_word*)lf[124]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[7],C_SCHEME_TRUE,((C_word*)t0)[6]);}

/* k11855 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:962: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[138],C_SCHEME_END_OF_LIST,t1);}

/* k4739 in k4727 in g698 in k4719 in k4568 in loop in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:297: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4546(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k10123 in k10107 in expand in k9871 in k9868 in k9865 in k9862 in a9856 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in ... */
static void C_ccall f_10125(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10125,2,t0,t1);}
if(C_truep(t1)){
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[103],t2));}
else{
/* expand.scm:1412: expand */
t2=((C_word*)((C_word*)t0)[4])[1];
f_10021(t2,((C_word*)t0)[3],((C_word*)t0)[5]);}}

/* k6873 in k6870 in k6867 in k6864 in k6861 in k6858 in k6849 in k6846 in loop in k6792 in syntax-error/context in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6875(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6875,2,t0,t1);}
t2=C_i_length(((C_word*)t0)[2]);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6888,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6892,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=C_i_car(((C_word*)t0)[2]);
/* expand.scm:679: symbol->string */
t7=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6903,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6907,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6909,a[2]=t7,a[3]=((C_word)li78),tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_6909(t9,t5,((C_word*)t0)[2]);}}

/* expand in k10686 in a10683 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in ... */
static void C_fcall f_10698(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(8);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_10698,NULL,3,t0,t1,t2);}
t3=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_cons(&a,2,lf[50],t4));}
else{
t4=C_i_car(t2);
t5=C_a_i_list(&a,1,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10723,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=t2;
t9=C_u_i_cdr(t8);
/* expand.scm:1259: expand */
t12=t7;
t13=t9;
t1=t12;
t2=t13;
goto loop;}}

/* a11841 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11842(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11842,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11846,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:975: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[311],t2,lf[350]);}

/* k11838 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:970: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[311],C_SCHEME_END_OF_LIST,t1);}

/* k6870 in k6867 in k6864 in k6861 in k6858 in k6849 in k6846 in loop in k6792 in syntax-error/context in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6872,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6875,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:674: outstr */
t3=((C_word*)t0)[3];
f_6796(t3,t2,lf[135]);}

/* k11844 in a11841 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11846,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[294],t2));}

/* k11081 in k11029 in k11026 in k10988 in expand in k10969 in k10966 in k10963 in a10957 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_11083(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1176: expand */
t2=((C_word*)((C_word*)t0)[2])[1];
f_10976(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k6972 in get-line-number in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6974,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6978,a[2]=((C_word*)t0)[2],a[3]=((C_word)li83),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:696: g1358 */
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_6978(t2,t1));}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* g1358 in k6972 in get-line-number in k4115 in k3641 in k3637 in k3633 in k3629 */
static C_word C_fcall f_6978(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;
t2=C_i_assq(((C_word*)t0)[2],t1);
return((C_truep(t2)?C_i_cdr(t2):C_SCHEME_FALSE));}

/* ##sys#extended-lambda-list? in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4861(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4861,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4867,a[2]=t4,a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_4867(t6,t1,t2);}

/* loop in extended-lambda-list? in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_4867(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4867,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_eqp(t3,lf[64]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4886,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t6=t5;
f_4886(t6,t4);}
else{
t6=C_eqp(t3,lf[65]);
t7=t5;
f_4886(t7,(C_truep(t6)?t6:C_eqp(t3,lf[66])));}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* simplify in k10209 in k10206 in k10203 in a10200 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in ... */
static void C_fcall f_10386(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10386,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10390,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1327: match-expression */
f_6579(t3,t2,lf[289],lf[290]);}

/* g2229 in k10388 in simplify in k10209 in k10206 in k10203 in a10200 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in ... */
static void C_fcall f_10394(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10394,NULL,3,t0,t1,t2);}
t3=C_i_assq(lf[283],t2);
t4=C_i_cdr(t3);
t5=C_a_i_list(&a,2,lf[276],t4);
/* expand.scm:1328: simplify */
t6=((C_word*)((C_word*)t0)[2])[1];
f_10386(t6,t1,t5);}

/* k10388 in simplify in k10209 in k10206 in k10203 in a10200 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in ... */
static void C_ccall f_10390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10390,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10394,a[2]=((C_word*)t0)[2],a[3]=((C_word)li149),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1294: g2229 */
t3=t2;
f_10394(t3,((C_word*)t0)[3],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10416,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1329: match-expression */
f_6579(t2,((C_word*)t0)[4],lf[287],lf[288]);}}

/* ##sys#check-syntax in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6993(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr5r,(void*)f_6993r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_6993r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_6993r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a=C_alloc(8);
t6=C_i_nullp(t5);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_i_car(t5));
t8=t7;
t9=C_i_nullp(t5);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:C_i_cdr(t5));
t11=t10;
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7003,a[2]=t11,a[3]=t3,a[4]=t2,a[5]=t1,a[6]=t4,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_nullp(t11))){
/* expand.scm:710: ##sys#current-environment */
t13=*((C_word*)lf[1]+1);
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,t12);}
else{
t13=t12;
f_7003(2,t13,C_i_car(t11));}}

/* k10149 in a10146 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in ... */
static void C_ccall f_10151(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10151,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,lf[72],C_SCHEME_END_OF_LIST,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,2,lf[273],t3));}

/* k3911 in map-loop418 in k3884 in k3859 in extend-se in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_3913(C_word t0,C_word t1){
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
f_3900(t5,((C_word*)t0)[7],t3,t4);}

/* k4929 in k4926 in expand-extended-lambda-list in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4931,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4934,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* expand.scm:348: macro-alias */
f_3662(t3,lf[86],((C_word*)t0)[7]);}

/* k4935 in k4932 in k4929 in k4926 in expand-extended-lambda-list in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4937(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4937,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4942,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t4,a[11]=((C_word*)t0)[9],a[12]=((C_word)li49),tmp=(C_word)a,a+=13,tmp));
t6=((C_word*)t4)[1];
f_4942(t6,((C_word*)t0)[10],C_fix(0),C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,((C_word*)t0)[11]);}

/* k4884 in loop in extended-lambda-list? in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_4886(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_cdr(t2);
/* expand.scm:336: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4867(t4,((C_word*)t0)[2],t3);}}

/* k4932 in k4929 in k4926 in expand-extended-lambda-list in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4934,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4937,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* expand.scm:349: macro-alias */
f_3662(t3,lf[55],((C_word*)t0)[8]);}

/* map-loop2309 in expand in k9871 in k9868 in k9865 in k9862 in a9856 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in ... */
static void C_fcall f_10045(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_10045,NULL,3,t0,t1,t2);}
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

/* k10041 in expand in k9871 in k9868 in k9865 in k9862 in a9856 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in ... */
static void C_ccall f_10043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(5,0,((C_word*)t0)[2],*((C_word*)lf[25]+1),lf[269],t1);}

/* k10164 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in ... */
static void C_ccall f_10166(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1342: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[275],C_SCHEME_END_OF_LIST,t1);}

/* a10167 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in ... */
static void C_ccall f_10168(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10168,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10172,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1347: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[275],t2,lf[277]);}

/* strip-syntax in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_3720(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3720,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3726,a[2]=t4,a[3]=t6,a[4]=((C_word)li3),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_3726(t8,t1,t2);}

/* k5330 in k5241 in loop in k4935 in k4932 in k4929 in k4926 in expand-extended-lambda-list in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_5332(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_fixnum_less_or_equal_p(((C_word*)t0)[2],C_fix(2)))){
/* expand.scm:414: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_4942(t2,((C_word*)t0)[4],C_fix(3),((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_END_OF_LIST,((C_word*)t0)[7]);}
else{
/* expand.scm:415: err */
t2=((C_word*)t0)[8];
f_4911(t2,((C_word*)t0)[4],lf[80]);}}

/* loop in k4935 in k4932 in k4929 in k4926 in expand-extended-lambda-list in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_4942(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word *a;
loop:
a=C_alloc(16);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4942,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
if(C_truep(C_i_nullp(t6))){
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4956,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t5,a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5202,a[2]=t7,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:357: reverse */
t9=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t3);}
else{
/* expand.scm:357: reverse */
t8=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t3);}}
else{
if(C_truep(C_i_symbolp(t6))){
if(C_truep(C_fixnum_greaterp(t2,C_fix(2)))){
/* expand.scm:385: err */
t7=((C_word*)t0)[9];
f_4911(t7,t1,lf[75]);}
else{
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t7=C_mutate2(((C_word *)((C_word*)t0)[5])+1,t6);
/* expand.scm:389: loop */
t17=t1;
t18=C_fix(4);
t19=t3;
t20=t4;
t21=C_SCHEME_END_OF_LIST;
t22=C_SCHEME_END_OF_LIST;
t1=t17;
t2=t18;
t3=t19;
t4=t20;
t5=t21;
t6=t22;
goto loop;}
else{
t7=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t6);
t8=C_mutate2(((C_word *)((C_word*)t0)[5])+1,t6);
/* expand.scm:389: loop */
t17=t1;
t18=C_fix(4);
t19=t3;
t20=t4;
t21=C_SCHEME_END_OF_LIST;
t22=C_SCHEME_END_OF_LIST;
t1=t17;
t2=t18;
t3=t19;
t4=t20;
t5=t21;
t6=t22;
goto loop;}}}
else{
if(C_truep(C_i_pairp(t6))){
t7=C_i_car(t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5243,a[2]=t8,a[3]=t6,a[4]=t2,a[5]=((C_word*)t0)[10],a[6]=t1,a[7]=t3,a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[5],a[12]=t4,a[13]=t5,tmp=(C_word)a,a+=14,tmp);
if(C_truep(C_i_symbolp(t8))){
t10=C_eqp(C_fix(3),t2);
t11=t9;
f_5243(t11,(C_truep(t10)?C_SCHEME_FALSE:f_3645(t8,((C_word*)t0)[11])));}
else{
t10=t9;
f_5243(t10,C_SCHEME_FALSE);}}
else{
/* expand.scm:391: err */
t7=((C_word*)t0)[9];
f_4911(t7,t1,lf[85]);}}}}

/* k11038 in k11032 in k11029 in k11026 in k10988 in expand in k10969 in k10966 in k10963 in a10957 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in ... */
static void C_ccall f_11040(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11040,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_caddr(((C_word*)t0)[2]);
t3=C_u_i_car(((C_word*)t0)[2]);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,2,t2,t3));}
else{
t2=C_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t2))){
t3=C_u_i_car(((C_word*)t0)[2]);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,lf[103],t3));}}}

/* k10170 in a10167 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in ... */
static void C_ccall f_10172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10172,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10179,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1348: r */
t3=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[272]);}

/* k10177 in k10170 in a10167 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in ... */
static void C_ccall f_10179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10179,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,lf[72],C_SCHEME_END_OF_LIST,t2);
t4=C_a_i_list(&a,3,lf[92],t3,lf[276]);
t5=C_a_i_list(&a,2,lf[273],t4);
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,2,t1,t5));}

/* k11032 in k11029 in k11026 in k10988 in expand in k10969 in k10966 in k10963 in a10957 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_11034(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11034,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11040,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_length(((C_word*)t0)[2]);
t4=C_eqp(t3,C_fix(3));
if(C_truep(t4)){
t5=C_i_cadr(((C_word*)t0)[2]);
/* expand.scm:1178: c */
t6=((C_word*)t0)[4];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t2,((C_word*)t0)[5],t5);}
else{
t5=t2;
f_11040(2,t5,C_SCHEME_FALSE);}}

/* k4954 in loop in k4935 in k4932 in k4929 in k4926 in expand-extended-lambda-list in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4956(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4956,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4960,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[8]))){
t4=t3;
f_4960(t4,((C_word*)t0)[10]);}
else{
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5097,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[5],a[4]=((C_word)li47),tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5157,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=t3,a[5]=t7,a[6]=t5,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
/* expand.scm:369: reverse */
t10=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,((C_word*)t0)[8]);}}

/* k10107 in expand in k9871 in k9868 in k9865 in k9862 in a9856 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in ... */
static void C_ccall f_10109(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10109,2,t0,t1);}
if(C_truep(t1)){
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_eqp(t2,C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?lf[270]:C_a_i_cons(&a,2,lf[103],t2)));}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10125,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1411: test */
t3=((C_word*)((C_word*)t0)[6])[1];
f_9885(t3,t2,((C_word*)t0)[7]);}}

/* k10343 in k10351 in k10312 in k10291 in k10258 in walk1 in k10209 in k10206 in k10203 in a10200 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in ... */
static void C_ccall f_10345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10345,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[201],((C_word*)t0)[3],t1));}

/* k11029 in k11026 in k10988 in expand in k10969 in k10966 in k10963 in a10957 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in ... */
static void C_ccall f_11031(C_word c,C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11031,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11034,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11083,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t4=C_u_i_car(((C_word*)t0)[2]);
/* expand.scm:1176: strip-syntax */
t5=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t2=C_u_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t2))){
t3=C_u_i_car(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11100,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[8],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1184: expand */
t5=((C_word*)((C_word*)t0)[6])[1];
f_10976(t5,t4,((C_word*)t0)[7],C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11106,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t4=C_i_length(((C_word*)t0)[2]);
t5=C_eqp(t4,C_fix(3));
if(C_truep(t5)){
t6=C_i_cadr(((C_word*)t0)[2]);
/* expand.scm:1186: c */
t7=((C_word*)t0)[4];
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t3,((C_word*)t0)[5],t6);}
else{
t6=t3;
f_11106(2,t6,C_SCHEME_FALSE);}}}}

/* ##sys#syntax-rules-mismatch in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6948(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6948,3,t0,t1,t2);}
/* expand.scm:694: ##sys#syntax-error-hook */
t3=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,lf[142],t2);}

/* k11026 in k10988 in expand in k10969 in k10966 in k10963 in a10957 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in ... */
static void C_ccall f_11028(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11028,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11031,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(t1)){
t3=t2;
f_11031(2,t3,t1);}
else{
t3=C_u_i_car(((C_word*)t0)[2]);
t4=C_eqp(C_SCHEME_TRUE,t3);
if(C_truep(t4)){
t5=t2;
f_11031(2,t5,t4);}
else{
t5=C_u_i_car(((C_word*)t0)[2]);
t6=C_i_numberp(t5);
if(C_truep(t6)){
t7=t2;
f_11031(2,t7,t6);}
else{
t7=C_u_i_car(((C_word*)t0)[2]);
t8=C_charp(t7);
if(C_truep(t8)){
t9=t2;
f_11031(2,t9,t8);}
else{
t9=C_u_i_car(((C_word*)t0)[2]);
t10=C_i_stringp(t9);
if(C_truep(t10)){
t11=t2;
f_11031(2,t11,t10);}
else{
t11=C_u_i_car(((C_word*)t0)[2]);
t12=C_eofp(t11);
if(C_truep(t12)){
t13=t2;
f_11031(2,t13,t12);}
else{
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11266,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t14=C_u_i_car(((C_word*)t0)[2]);
/* expand.scm:1171: blob? */
t15=*((C_word*)lf[313]+1);
((C_proc3)(void*)(*((C_word*)t15+1)))(3,t15,t13,t14);}}}}}}}

/* map-loop418 in k3884 in k3859 in extend-se in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_3900(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3900,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_cons(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3913,a[2]=((C_word*)t0)[2],a[3]=t10,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t12=t11;
f_3913(t12,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t10));}
else{
t12=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t10);
t13=t11;
f_3913(t13,t12);}}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k4958 in k4954 in loop in k4935 in k4932 in k4929 in k4926 in expand-extended-lambda-list in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_4960(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4960,NULL,2,t0,t1);}
t2=t1;
if(C_truep(C_i_nullp(((C_word*)t0)[2]))){
/* expand.scm:356: values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[4],t2);}
else{
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4972,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t4=((C_word*)((C_word*)t0)[8])[1];
if(C_truep(t4)){
t5=t3;
f_4972(t5,C_SCHEME_FALSE);}
else{
if(C_truep(C_i_nullp(((C_word*)t0)[9]))){
t5=C_i_cdr(((C_word*)t0)[2]);
t6=t3;
f_4972(t6,C_i_nullp(t5));}
else{
t5=t3;
f_4972(t5,C_SCHEME_FALSE);}}}}

/* k10351 in k10312 in k10291 in k10258 in walk1 in k10209 in k10206 in k10203 in a10200 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in ... */
static void C_ccall f_10353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10353,2,t0,t1);}
t2=C_a_i_list(&a,3,lf[201],((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10345,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1323: walk */
t5=((C_word*)((C_word*)t0)[4])[1];
f_10213(t5,t4,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k11020 in k11016 in k11013 in k11010 in k11007 in k11001 in k10988 in expand in k10969 in k10966 in k10963 in a10957 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in ... */
static void C_ccall f_11022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1159: ##sys#warn */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[188]+1)))(4,*((C_word*)lf[188]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* get-line-number in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6954(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6954,3,t0,t1,t2);}
if(C_truep(*((C_word*)lf[117]+1))){
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=C_u_i_car(t3);
if(C_truep(C_i_symbolp(t4))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6974,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:701: ##sys#hash-table-ref */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[144]+1)))(4,*((C_word*)lf[144]+1),t5,*((C_word*)lf[117]+1),t4);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* loop1 in globalize in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_4039(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4039,NULL,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
t3=t2;
t4=C_i_getprop(t3,lf[5],C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4055,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li9),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:141: g465 */
t6=t5;
f_4055(t6,t1,t4);}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4073,a[2]=t2,a[3]=t6,a[4]=((C_word)li10),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_4073(t8,t1,((C_word*)t0)[3]);}}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* ##sys#globalize in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4033(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4033,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4039,a[2]=t5,a[3]=t3,a[4]=((C_word)li11),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_4039(t7,t1,t2);}

/* k11016 in k11013 in k11010 in k11007 in k11001 in k10988 in expand in k10969 in k10966 in k10963 in a10957 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in ... */
static void C_ccall f_11018(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11018,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11022,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1161: ##sys#strip-syntax */
t4=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* k11013 in k11010 in k11007 in k11001 in k10988 in expand in k10969 in k10966 in k10963 in a10957 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in ... */
static void C_ccall f_11015(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11015,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11018,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1160: get-output-string */
t3=*((C_word*)lf[125]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k4970 in k4958 in k4954 in loop in k4935 in k4932 in k4929 in k4926 in expand-extended-lambda-list in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_4972(C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4972,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_caar(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5003,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* expand.scm:374: cadar */
t5=*((C_word*)lf[68]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}
else{
t2=((C_word*)((C_word*)t0)[9])[1];
t3=(C_truep(t2)?C_SCHEME_FALSE:C_i_nullp(((C_word*)t0)[10]));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5028,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:378: reverse */
t5=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5047,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5051,a[2]=((C_word*)t0)[9],a[3]=t4,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:381: reverse */
t6=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[2]);}}}

/* k10003 in k9996 in k9954 in k9916 in test in k9871 in k9868 in k9865 in k9862 in a9856 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in ... */
static void C_ccall f_10005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_not(t1));}

/* k11010 in k11007 in k11001 in k10988 in expand in k10969 in k10966 in k10963 in a10957 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_11012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11012,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11015,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1160: ##sys#print */
t3=*((C_word*)lf[124]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[309],C_SCHEME_FALSE,((C_word*)t0)[5]);}

/* k10366 in k10312 in k10291 in k10258 in walk1 in k10209 in k10206 in k10203 in a10200 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in ... */
static void C_ccall f_10368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10368,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10372,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1325: walk */
t4=((C_word*)((C_word*)t0)[3])[1];
f_10213(t4,t3,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k8214 in process-syntax-rules in k8205 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in ... */
static void C_ccall f_8216(C_word c,C_word t0,C_word t1){
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
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8216,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,lf[192]);
t4=C_mutate2(((C_word *)((C_word*)t0)[4])+1,lf[193]);
t5=C_mutate2(((C_word *)((C_word*)t0)[5])+1,lf[194]);
t6=C_mutate2(((C_word *)((C_word*)t0)[6])+1,lf[195]);
t7=C_mutate2(((C_word *)((C_word*)t0)[7])+1,lf[196]);
t8=C_mutate2(((C_word *)((C_word*)t0)[8])+1,lf[197]);
t9=C_mutate2(((C_word *)((C_word*)t0)[9])+1,lf[198]);
t10=C_mutate2(((C_word *)((C_word*)t0)[10])+1,lf[199]);
t11=C_mutate2(((C_word *)((C_word*)t0)[11])+1,lf[200]);
t12=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_8231,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[14],a[5]=((C_word*)t0)[15],a[6]=((C_word*)t0)[16],a[7]=((C_word*)t0)[17],a[8]=((C_word*)t0)[18],a[9]=((C_word*)t0)[19],a[10]=((C_word*)t0)[20],a[11]=((C_word*)t0)[21],a[12]=((C_word*)t0)[22],a[13]=((C_word*)t0)[23],a[14]=((C_word*)t0)[24],a[15]=((C_word*)t0)[25],a[16]=((C_word*)t0)[26],a[17]=((C_word*)t0)[27],a[18]=((C_word*)t0)[28],a[19]=((C_word*)t0)[29],a[20]=((C_word*)t0)[30],a[21]=((C_word*)t0)[31],a[22]=((C_word*)t0)[32],a[23]=((C_word*)t0)[33],a[24]=((C_word*)t0)[34],a[25]=((C_word*)t0)[35],a[26]=((C_word*)t0)[36],a[27]=((C_word*)t0)[4],a[28]=((C_word*)t0)[37],a[29]=((C_word*)t0)[2],a[30]=((C_word*)t0)[38],a[31]=((C_word*)t0)[39],a[32]=((C_word*)t0)[40],a[33]=((C_word*)t0)[41],a[34]=((C_word*)t0)[42],a[35]=((C_word*)t0)[43],a[36]=((C_word*)t0)[3],a[37]=((C_word*)t0)[6],a[38]=((C_word*)t0)[7],a[39]=((C_word*)t0)[44],a[40]=((C_word*)t0)[5],a[41]=((C_word*)t0)[9],a[42]=((C_word*)t0)[10],a[43]=((C_word*)t0)[11],a[44]=((C_word*)t0)[45],a[45]=((C_word*)t0)[46],a[46]=((C_word*)t0)[47],a[47]=((C_word*)t0)[8],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:77: r */
t13=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t13))(3,t13,t12,lf[229]);}

/* k11490 in k11487 in a11484 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 in ... */
static void C_ccall f_11492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11492,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,lf[323],t3));}

/* test in k9871 in k9868 in k9865 in k9862 in a9856 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in ... */
static void C_fcall f_9885(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9885,NULL,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9899,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1375: ##sys#strip-syntax */
t4=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}
else{
if(C_truep(C_i_pairp(t2))){
t3=C_i_car(t2);
t4=t3;
t5=t2;
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9918,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t2,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=t4,tmp=(C_word)a,a+=12,tmp);
/* expand.scm:1380: c */
t8=((C_word*)t0)[6];
((C_proc4)C_fast_retrieve_proc(t8))(4,t8,t7,((C_word*)t0)[2],t4);}
else{
/* expand.scm:1376: err */
t3=((C_word*)((C_word*)t0)[4])[1];
f_9875(t3,t1,t2);}}}

/* k4022 in map-loop355 in extend-se in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4024(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4024,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3995(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3995(t6,((C_word*)t0)[5],t5);}}

/* k11007 in k11001 in k10988 in expand in k10969 in k10966 in k10963 in a10957 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in ... */
static void C_ccall f_11009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11009,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11012,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1160: ##sys#print */
t3=*((C_word*)lf[124]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[6],C_SCHEME_TRUE,((C_word*)t0)[5]);}

/* k11001 in k10988 in expand in k10969 in k10966 in k10963 in a10957 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in ... */
static void C_ccall f_11003(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11003,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[308]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11009,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1160: ##sys#print */
t6=*((C_word*)lf[124]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[310],C_SCHEME_FALSE,t3);}

/* k10370 in k10366 in k10312 in k10291 in k10258 in walk1 in k10209 in k10206 in k10203 in a10200 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in ... */
static void C_ccall f_10372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10372,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[201],((C_word*)t0)[3],t1));}

/* k6886 in k6873 in k6870 in k6867 in k6864 in k6861 in k6858 in k6849 in k6846 in loop in k6792 in syntax-error/context in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:676: outstr */
t2=((C_word*)t0)[2];
f_6796(t2,((C_word*)t0)[3],t1);}

/* k9897 in test in k9871 in k9868 in k9865 in k9862 in a9856 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in ... */
static void C_ccall f_9899(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1375: ##sys#feature? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[268]+1)))(3,*((C_word*)lf[268]+1),((C_word*)t0)[2],t1);}

/* k10302 in k10291 in k10258 in walk1 in k10209 in k10206 in k10203 in a10200 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in ... */
static void C_ccall f_10304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10304,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list3(&a,3,lf[201],((C_word*)t0)[3],t1));}

/* k8881 in k8877 in k8802 */
static void C_ccall f_8883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:192: append */
t2=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k11821 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:978: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[348],C_SCHEME_END_OF_LIST,t1);}

/* loop in expand-curried-define in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_6664(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(10);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6664,NULL,4,t0,t1,t2,t3);}
t4=C_i_car(t2);
if(C_truep(C_i_symbolp(t4))){
t5=t2;
t6=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_u_i_car(t5));
t7=t2;
t8=C_u_i_cdr(t7);
t9=C_a_i_cons(&a,2,t8,t3);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_a_i_cons(&a,2,lf[72],t9));}
else{
t5=t2;
t6=C_u_i_car(t5);
t7=t2;
t8=C_u_i_cdr(t7);
t9=C_a_i_cons(&a,2,t8,t3);
t10=C_a_i_cons(&a,2,lf[72],t9);
t11=C_a_i_list(&a,1,t10);
/* expand.scm:627: loop */
t18=t1;
t19=t6;
t20=t11;
t1=t18;
t2=t19;
t3=t20;
goto loop;}}

/* k4087 in loop in loop1 in globalize in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_4089(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_cdr(t3));}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* expand.scm:151: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4073(t4,((C_word*)t0)[3],t3);}}

/* k11468 in k11465 in a11462 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in ... */
static void C_ccall f_11470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11470,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,lf[106],t3));}

/* k9865 in k9862 in a9856 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in ... */
static void C_ccall f_9867(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9867,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9870,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1368: r */
t4=((C_word*)t0)[6];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[227]);}

/* k9862 in a9856 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_9864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9864,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9867,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1367: r */
t4=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[271]);}

/* k6890 in k6873 in k6870 in k6867 in k6864 in k6861 in k6858 in k6849 in k6846 in loop in k6792 in syntax-error/context in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:677: string-append */
t2=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[129],t1,lf[130]);}

/* ##sys#expand-curried-define in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6661(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6661,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6664,a[2]=t6,a[3]=t8,a[4]=((C_word)li74),tmp=(C_word)a,a+=5,tmp));
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6708,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:628: loop */
t11=((C_word*)t8)[1];
f_6664(t11,t10,t2,t3);}

/* k11827 in a11824 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11829,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[103],t2));}

/* a11824 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11825(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11825,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11829,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:983: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[348],t2,lf[349]);}

/* k10312 in k10291 in k10258 in walk1 in k10209 in k10206 in k10203 in a10200 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in ... */
static void C_ccall f_10314(C_word c,C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10314,2,t0,t1);}
if(C_truep(t1)){
t2=C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10323,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1317: ##sys#check-syntax */
t4=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[281],((C_word*)t0)[3],lf[282]);}
else{
t3=C_a_i_list(&a,2,lf[71],((C_word*)t0)[7]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10353,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t6=C_i_cdr(((C_word*)t0)[3]);
t7=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
/* expand.scm:1322: walk */
t8=((C_word*)((C_word*)t0)[5])[1];
f_10213(t8,t5,t6,t7);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10368,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1325: walk */
t3=((C_word*)((C_word*)t0)[5])[1];
f_10213(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k8205 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in ... */
static void C_ccall f_8207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8207,2,t0,t1);}
t2=C_mutate2((C_word*)lf[191]+1 /* (set! ##sys#process-syntax-rules ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8209,a[2]=((C_word)li127),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate2((C_word*)lf[231]+1 /* (set! ##sys#macro-subset ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9381,a[2]=((C_word)li129),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[232]+1 /* (set! ##sys#fixup-macro-environment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9431,a[2]=((C_word)li132),tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9514,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9526,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1550: ##sys#macro-environment */
t7=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* ##sys#process-syntax-rules in k8205 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in ... */
static void C_ccall f_8209(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word t61;
C_word t62;
C_word t63;
C_word t64;
C_word t65;
C_word t66;
C_word t67;
C_word t68;
C_word t69;
C_word t70;
C_word t71;
C_word t72;
C_word t73;
C_word t74;
C_word t75;
C_word t76;
C_word t77;
C_word t78;
C_word t79;
C_word t80;
C_word t81;
C_word t82;
C_word t83;
C_word t84;
C_word t85;
C_word t86;
C_word t87;
C_word t88;
C_word t89;
C_word t90;
C_word t91;
C_word t92;
C_word t93;
C_word t94;
C_word t95;
C_word t96;
C_word t97;
C_word t98;
C_word ab[143],*a=ab;
if(c!=7) C_bad_argc_2(c,7,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_8209,7,t0,t1,t2,t3,t4,t5,t6);}
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_SCHEME_UNDEFINED;
t24=(*a=C_VECTOR_TYPE|1,a[1]=t23,tmp=(C_word)a,a+=2,tmp);
t25=C_SCHEME_UNDEFINED;
t26=(*a=C_VECTOR_TYPE|1,a[1]=t25,tmp=(C_word)a,a+=2,tmp);
t27=C_SCHEME_UNDEFINED;
t28=(*a=C_VECTOR_TYPE|1,a[1]=t27,tmp=(C_word)a,a+=2,tmp);
t29=C_SCHEME_UNDEFINED;
t30=(*a=C_VECTOR_TYPE|1,a[1]=t29,tmp=(C_word)a,a+=2,tmp);
t31=C_SCHEME_UNDEFINED;
t32=(*a=C_VECTOR_TYPE|1,a[1]=t31,tmp=(C_word)a,a+=2,tmp);
t33=C_SCHEME_UNDEFINED;
t34=(*a=C_VECTOR_TYPE|1,a[1]=t33,tmp=(C_word)a,a+=2,tmp);
t35=C_SCHEME_UNDEFINED;
t36=(*a=C_VECTOR_TYPE|1,a[1]=t35,tmp=(C_word)a,a+=2,tmp);
t37=C_SCHEME_UNDEFINED;
t38=(*a=C_VECTOR_TYPE|1,a[1]=t37,tmp=(C_word)a,a+=2,tmp);
t39=C_SCHEME_UNDEFINED;
t40=(*a=C_VECTOR_TYPE|1,a[1]=t39,tmp=(C_word)a,a+=2,tmp);
t41=C_SCHEME_UNDEFINED;
t42=(*a=C_VECTOR_TYPE|1,a[1]=t41,tmp=(C_word)a,a+=2,tmp);
t43=C_SCHEME_UNDEFINED;
t44=(*a=C_VECTOR_TYPE|1,a[1]=t43,tmp=(C_word)a,a+=2,tmp);
t45=C_SCHEME_UNDEFINED;
t46=(*a=C_VECTOR_TYPE|1,a[1]=t45,tmp=(C_word)a,a+=2,tmp);
t47=C_SCHEME_UNDEFINED;
t48=(*a=C_VECTOR_TYPE|1,a[1]=t47,tmp=(C_word)a,a+=2,tmp);
t49=C_SCHEME_UNDEFINED;
t50=(*a=C_VECTOR_TYPE|1,a[1]=t49,tmp=(C_word)a,a+=2,tmp);
t51=C_SCHEME_UNDEFINED;
t52=(*a=C_VECTOR_TYPE|1,a[1]=t51,tmp=(C_word)a,a+=2,tmp);
t53=C_SCHEME_UNDEFINED;
t54=(*a=C_VECTOR_TYPE|1,a[1]=t53,tmp=(C_word)a,a+=2,tmp);
t55=C_SCHEME_UNDEFINED;
t56=(*a=C_VECTOR_TYPE|1,a[1]=t55,tmp=(C_word)a,a+=2,tmp);
t57=C_SCHEME_UNDEFINED;
t58=(*a=C_VECTOR_TYPE|1,a[1]=t57,tmp=(C_word)a,a+=2,tmp);
t59=C_SCHEME_UNDEFINED;
t60=(*a=C_VECTOR_TYPE|1,a[1]=t59,tmp=(C_word)a,a+=2,tmp);
t61=C_SCHEME_UNDEFINED;
t62=(*a=C_VECTOR_TYPE|1,a[1]=t61,tmp=(C_word)a,a+=2,tmp);
t63=C_SCHEME_UNDEFINED;
t64=(*a=C_VECTOR_TYPE|1,a[1]=t63,tmp=(C_word)a,a+=2,tmp);
t65=C_SCHEME_UNDEFINED;
t66=(*a=C_VECTOR_TYPE|1,a[1]=t65,tmp=(C_word)a,a+=2,tmp);
t67=C_SCHEME_UNDEFINED;
t68=(*a=C_VECTOR_TYPE|1,a[1]=t67,tmp=(C_word)a,a+=2,tmp);
t69=C_SCHEME_UNDEFINED;
t70=(*a=C_VECTOR_TYPE|1,a[1]=t69,tmp=(C_word)a,a+=2,tmp);
t71=C_SCHEME_UNDEFINED;
t72=(*a=C_VECTOR_TYPE|1,a[1]=t71,tmp=(C_word)a,a+=2,tmp);
t73=C_SCHEME_UNDEFINED;
t74=(*a=C_VECTOR_TYPE|1,a[1]=t73,tmp=(C_word)a,a+=2,tmp);
t75=C_SCHEME_UNDEFINED;
t76=(*a=C_VECTOR_TYPE|1,a[1]=t75,tmp=(C_word)a,a+=2,tmp);
t77=C_SCHEME_UNDEFINED;
t78=(*a=C_VECTOR_TYPE|1,a[1]=t77,tmp=(C_word)a,a+=2,tmp);
t79=C_SCHEME_UNDEFINED;
t80=(*a=C_VECTOR_TYPE|1,a[1]=t79,tmp=(C_word)a,a+=2,tmp);
t81=C_SCHEME_UNDEFINED;
t82=(*a=C_VECTOR_TYPE|1,a[1]=t81,tmp=(C_word)a,a+=2,tmp);
t83=C_SCHEME_UNDEFINED;
t84=(*a=C_VECTOR_TYPE|1,a[1]=t83,tmp=(C_word)a,a+=2,tmp);
t85=C_SCHEME_UNDEFINED;
t86=(*a=C_VECTOR_TYPE|1,a[1]=t85,tmp=(C_word)a,a+=2,tmp);
t87=C_SCHEME_UNDEFINED;
t88=(*a=C_VECTOR_TYPE|1,a[1]=t87,tmp=(C_word)a,a+=2,tmp);
t89=C_SCHEME_UNDEFINED;
t90=(*a=C_VECTOR_TYPE|1,a[1]=t89,tmp=(C_word)a,a+=2,tmp);
t91=C_SCHEME_UNDEFINED;
t92=(*a=C_VECTOR_TYPE|1,a[1]=t91,tmp=(C_word)a,a+=2,tmp);
t93=C_SCHEME_UNDEFINED;
t94=(*a=C_VECTOR_TYPE|1,a[1]=t93,tmp=(C_word)a,a+=2,tmp);
t95=C_SCHEME_UNDEFINED;
t96=(*a=C_VECTOR_TYPE|1,a[1]=t95,tmp=(C_word)a,a+=2,tmp);
t97=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_8216,a[2]=t8,a[3]=t10,a[4]=t12,a[5]=t14,a[6]=t16,a[7]=t18,a[8]=t20,a[9]=t22,a[10]=t24,a[11]=t26,a[12]=t28,a[13]=t30,a[14]=t32,a[15]=t34,a[16]=t36,a[17]=t38,a[18]=t40,a[19]=t42,a[20]=t44,a[21]=t46,a[22]=t48,a[23]=t50,a[24]=t52,a[25]=t54,a[26]=t56,a[27]=t58,a[28]=t60,a[29]=t62,a[30]=t64,a[31]=t66,a[32]=t68,a[33]=t70,a[34]=t72,a[35]=t6,a[36]=t74,a[37]=t76,a[38]=t84,a[39]=t86,a[40]=t82,a[41]=t78,a[42]=t4,a[43]=t80,a[44]=t90,a[45]=t96,a[46]=t88,a[47]=t94,a[48]=t92,a[49]=t1,a[50]=t3,a[51]=t5,a[52]=t2,tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:65: r */
t98=t5;
((C_proc3)C_fast_retrieve_proc(t98))(3,t98,t97,lf[230]);}

/* k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in ... */
static void C_ccall f_8201(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8201,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8204,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9566,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9568,a[2]=((C_word)li134),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1510: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k6634 in mwalk in match-expression in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* expand.scm:613: mwalk */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6582(t6,((C_word*)t0)[5],t3,t5);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* loop in loop1 in globalize in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_4073(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4073,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
/* expand.scm:149: ##sys#alias-global-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[18]+1)))(5,*((C_word*)lf[18]+1),t1,((C_word*)t0)[2],C_SCHEME_TRUE,C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4089,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_i_caar(t2);
t5=C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
t6=t2;
t7=C_u_i_car(t6);
t8=C_u_i_cdr(t7);
t9=t3;
f_4089(t9,C_i_symbolp(t8));}
else{
t6=t3;
f_4089(t6,C_SCHEME_FALSE);}}}

/* k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in ... */
static void C_ccall f_8204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8204,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8207,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9530,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9532,a[2]=((C_word)li133),tmp=(C_word)a,a+=3,tmp);
/* synrules.scm:47: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* loop in k6873 in k6870 in k6867 in k6864 in k6861 in k6858 in k6849 in k6846 in loop in k6792 in syntax-error/context in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_6909(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6909,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[132]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6923,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(t2);
/* expand.scm:688: symbol->string */
t5=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}}

/* k9871 in k9868 in k9865 in k9862 in a9856 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in ... */
static void C_ccall f_9873(C_word c,C_word t0,C_word t1){
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
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9873,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9875,a[2]=((C_word*)t0)[2],a[3]=((C_word)li140),tmp=(C_word)a,a+=4,tmp));
t8=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9885,a[2]=t2,a[3]=t6,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li141),tmp=(C_word)a,a+=9,tmp));
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10021,a[2]=((C_word*)t0)[2],a[3]=t10,a[4]=t6,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],a[7]=t4,a[8]=((C_word)li143),tmp=(C_word)a,a+=9,tmp));
t12=((C_word*)t10)[1];
f_10021(t12,((C_word*)t0)[7],((C_word*)t0)[2]);}

/* k9868 in k9865 in k9862 in a9856 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in ... */
static void C_ccall f_9870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9870,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9873,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1369: r */
t4=((C_word*)t0)[7];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[230]);}

/* k6905 in k6873 in k6870 in k6867 in k6864 in k6861 in k6858 in k6849 in k6846 in loop in k6792 in syntax-error/context in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:682: string-append */
t2=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[131],t1);}

/* err in k9871 in k9868 in k9865 in k9862 in a9856 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in ... */
static void C_fcall f_9875(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9875,NULL,3,t0,t1,t2);}
t3=C_a_i_cons(&a,2,lf[266],((C_word*)t0)[2]);
/* expand.scm:1371: ##sys#error */
t4=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,lf[267],t2,t3);}

/* k6901 in k6873 in k6870 in k6867 in k6864 in k6861 in k6858 in k6849 in k6846 in loop in k6792 in syntax-error/context in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:681: outstr */
t2=((C_word*)t0)[2];
f_6796(t2,((C_word*)t0)[3],t1);}

/* k10321 in k10312 in k10291 in k10258 in walk1 in k10209 in k10206 in k10203 in a10200 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in ... */
static void C_ccall f_10323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10323,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10334,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1318: walk */
t5=((C_word*)((C_word*)t0)[4])[1];
f_10213(t5,t4,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k8534 in k8498 */
static void C_ccall f_8536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8536,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],t3);
t5=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,1,t4));}

/* k8256 in k8252 in k8248 in k8244 in k8238 in k8233 in k8229 in k8214 in process-syntax-rules in k8205 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in ... */
static void C_ccall f_8258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8258,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_8262,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[2],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:87: r */
t4=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[55]);}

/* k8252 in k8248 in k8244 in k8238 in k8233 in k8229 in k8214 in process-syntax-rules in k8205 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in ... */
static void C_ccall f_8254(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8254,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_8258,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[37],a[37]=((C_word*)t0)[38],a[38]=((C_word*)t0)[2],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:86: r */
t4=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[223]);}

/* ##sys#extend-se in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_3857(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+18)){
C_save_and_reclaim((void*)tr4r,(void*)f_3857r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3857r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3857r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(18);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3861,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t4))){
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=*((C_word*)lf[8]+1);
t11=t3;
t12=C_i_check_list_2(t11,lf[16]);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3995,a[2]=t9,a[3]=t14,a[4]=t7,a[5]=t10,a[6]=((C_word)li7),tmp=(C_word)a,a+=7,tmp));
t16=((C_word*)t14)[1];
f_3995(t16,t5,t11);}
else{
t6=t5;
f_3861(2,t6,C_i_car(t4));}}

/* k8248 in k8244 in k8238 in k8233 in k8229 in k8214 in process-syntax-rules in k8205 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in ... */
static void C_ccall f_8250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8250,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_8254,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[37],a[37]=((C_word*)t0)[38],a[38]=((C_word*)t0)[39],a[39]=((C_word*)t0)[40],a[40]=((C_word*)t0)[2],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:85: r */
t4=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[224]);}

/* k9840 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_9842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1414: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[265],C_SCHEME_END_OF_LIST,t1);}

/* a9843 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_9844(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9844,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,3,lf[264],t5,C_SCHEME_FALSE));}

/* loop in k4796 in expand in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_4812(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4812,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4818,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li40),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4824,a[2]=((C_word*)t0)[4],a[3]=((C_word)li41),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:309: ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* k10332 in k10321 in k10312 in k10291 in k10258 in walk1 in k10209 in k10206 in k10203 in a10200 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in ... */
static void C_ccall f_10334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10334,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[70],((C_word*)t0)[3],t1));}

/* k4446 in k4430 in tmp13099 in a4425 in a4318 in call-handler in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:241: ##sys#syntax-error-hook */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k5049 in k4970 in k4958 in k4954 in loop in k4935 in k4932 in k4929 in k4926 in expand-extended-lambda-list in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5051(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5051,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(t2)){
t3=C_a_i_list1(&a,1,t2);
/* expand.scm:381: ##sys#append */
t4=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[3],t1,t3);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=C_a_i_list1(&a,1,t3);
/* expand.scm:381: ##sys#append */
t5=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[3],t1,t4);}}

/* k6657 in match-expression in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)((C_word*)t0)[2])[1];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k3859 in extend-se in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_3861(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3861,2,t0,t1);}
t2=t1;
t3=((C_word*)t0)[2];
t4=C_i_check_list_2(t2,lf[14]);
t5=C_i_check_list_2(t3,lf[14]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3886,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3949,a[2]=t8,a[3]=((C_word)li6),tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_3949(t10,t6,t2,t3);}

/* k11481 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1083: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[322],C_SCHEME_END_OF_LIST,t1);}

/* a11484 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11485(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11485,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11489,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1088: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[322],t2,lf[325]);}

/* k9853 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in ... */
static void C_ccall f_9855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1360: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[266],C_SCHEME_END_OF_LIST,t1);}

/* a9856 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in ... */
static void C_ccall f_9857(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9857,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9864,a[2]=t6,a[3]=t4,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1366: r */
t8=t3;
((C_proc3)C_fast_retrieve_proc(t8))(3,t8,t7,lf[221]);}

/* a4823 in loop in k4796 in expand in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4824(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4824,4,t0,t1,t2,t3);}
if(C_truep(t3)){
/* expand.scm:313: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4812(t4,t1,t2);}
else{
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k11487 in a11484 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11489,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11492,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* expand.scm:1089: check-for-multiple-bindings */
f_8066(t2,t3,((C_word*)t0)[2],lf[324]);}

/* a4817 in loop in k4796 in expand in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4818(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4818,2,t0,t1);}
/* expand.scm:311: ##sys#expand-0 */
t2=*((C_word*)lf[32]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k4450 in k4430 in tmp13099 in a4425 in a4318 in call-handler in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:242: string-append */
t2=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[42],t1,lf[43]);}

/* f_4459 in tmp13099 in a4425 in a4318 in call-handler in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4459(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4459,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}

/* k8233 in k8229 in k8214 in process-syntax-rules in k8205 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in ... */
static void C_ccall f_8235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8235,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,lf[201]);
t4=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_8240,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[16],a[15]=((C_word*)t0)[17],a[16]=((C_word*)t0)[18],a[17]=((C_word*)t0)[19],a[18]=((C_word*)t0)[20],a[19]=((C_word*)t0)[21],a[20]=((C_word*)t0)[22],a[21]=((C_word*)t0)[23],a[22]=((C_word*)t0)[24],a[23]=((C_word*)t0)[25],a[24]=((C_word*)t0)[26],a[25]=((C_word*)t0)[27],a[26]=((C_word*)t0)[2],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[37],a[37]=((C_word*)t0)[38],a[38]=((C_word*)t0)[39],a[39]=((C_word*)t0)[40],a[40]=((C_word*)t0)[41],a[41]=((C_word*)t0)[42],a[42]=((C_word*)t0)[43],a[43]=((C_word*)t0)[44],a[44]=((C_word*)t0)[45],a[45]=((C_word*)t0)[46],a[46]=((C_word*)t0)[3],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:80: r */
t5=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,lf[227]);}

/* k8229 in k8214 in process-syntax-rules in k8205 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in ... */
static void C_ccall f_8231(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8231,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_8235,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[2],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:78: r */
t4=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[228]);}

/* walk in strip-syntax in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_3726(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(16);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3726,NULL,3,t0,t1,t2);}
t3=C_i_assq(t2,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_cdr(t3));}
else{
if(C_truep(C_i_symbolp(t2))){
t4=t2;
t5=C_i_getprop(t4,lf[5],C_SCHEME_FALSE);
t6=t2;
t7=C_i_getprop(t6,lf[7],C_SCHEME_FALSE);
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
if(C_truep(t5)){
if(C_truep(C_i_pairp(t5))){
t8=t2;
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t5);}}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t2);}}}
else{
if(C_truep(C_i_pairp(t2))){
t4=C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_FALSE);
t5=t4;
t6=C_a_i_cons(&a,2,t2,t5);
t7=C_a_i_cons(&a,2,t6,((C_word*)((C_word*)t0)[2])[1]);
t8=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t7);
t9=t5;
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3798,a[2]=t9,a[3]=t5,a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t11=t2;
t12=C_u_i_car(t11);
/* expand.scm:116: walk */
t22=t10;
t23=t12;
t1=t22;
t2=t23;
goto loop;}
else{
if(C_truep(C_i_vectorp(t2))){
t4=C_block_size(t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3816,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word*)t0)[3],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* expand.scm:121: make-vector */
t7=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t5);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}}}}

/* k8538 in k8498 */
static void C_ccall f_8540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8540,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8544,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]);
t5=((C_word*)t0)[5];
t6=C_u_i_cdr(t5);
/* synrules.scm:142: process-match */
t7=((C_word*)((C_word*)t0)[6])[1];
((C_proc5)C_fast_retrieve_proc(t7))(5,t7,t3,t4,t6,C_SCHEME_FALSE);}

/* a4464 in tmp13099 in a4425 in a4318 in call-handler in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4465(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4465,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[45]+1));
t3=C_mutate2((C_word*)lf[45]+1 /* (set! ##sys#syntax-rules-mismatch ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k3844 in doloop331 in k3814 in walk in strip-syntax in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_3846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3825(t4,((C_word*)t0)[5],t3);}

/* k8244 in k8238 in k8233 in k8229 in k8214 in process-syntax-rules in k8205 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in ... */
static void C_ccall f_8246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8246,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_8250,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[2],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:84: r */
t4=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[225]);}

/* k8877 in k8802 */
static void C_ccall f_8879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8879,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8883,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
t6=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5]);
/* synrules.scm:193: process-pattern */
t7=((C_word*)((C_word*)t0)[6])[1];
((C_proc6)C_fast_retrieve_proc(t7))(6,t7,t3,t5,t6,((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k8542 in k8538 in k8498 */
static void C_ccall f_8544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1524: ##sys#append */
t2=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k8238 in k8233 in k8229 in k8214 in process-syntax-rules in k8205 in k8202 in k8199 in k8196 in k8193 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in ... */
static void C_ccall f_8240(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8240,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,lf[202]);
t4=C_mutate2(((C_word *)((C_word*)t0)[4])+1,lf[203]);
t5=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_8246,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[16],a[14]=((C_word*)t0)[17],a[15]=((C_word*)t0)[18],a[16]=((C_word*)t0)[19],a[17]=((C_word*)t0)[20],a[18]=((C_word*)t0)[21],a[19]=((C_word*)t0)[22],a[20]=((C_word*)t0)[23],a[21]=((C_word*)t0)[24],a[22]=((C_word*)t0)[25],a[23]=((C_word*)t0)[26],a[24]=((C_word*)t0)[27],a[25]=((C_word*)t0)[2],a[26]=((C_word*)t0)[28],a[27]=((C_word*)t0)[29],a[28]=((C_word*)t0)[30],a[29]=((C_word*)t0)[31],a[30]=((C_word*)t0)[32],a[31]=((C_word*)t0)[33],a[32]=((C_word*)t0)[34],a[33]=((C_word*)t0)[35],a[34]=((C_word*)t0)[36],a[35]=((C_word*)t0)[37],a[36]=((C_word*)t0)[3],a[37]=((C_word*)t0)[4],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:83: r */
t6=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,lf[226]);}

/* a11462 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11463(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11463,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11467,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1097: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[319],t2,lf[321]);}

/* k11459 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1092: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[319],C_SCHEME_END_OF_LIST,t1);}

/* k11465 in a11462 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 in ... */
static void C_ccall f_11467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11467,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11470,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* expand.scm:1098: check-for-multiple-bindings */
f_8066(t2,t3,((C_word*)t0)[2],lf[320]);}

/* a4469 in tmp13099 in a4425 in a4318 in call-handler in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4470,2,t0,t1);}
/* expand.scm:238: handler */
t2=((C_word*)t0)[2];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,t1,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* a4475 in tmp13099 in a4425 in a4318 in call-handler in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4476(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4476,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[45]+1));
t3=C_mutate2((C_word*)lf[45]+1 /* (set! ##sys#syntax-rules-mismatch ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k3896 in k3884 in k3859 in extend-se in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_3898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:136: append */
t2=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k11411 in a11381 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in ... */
static void C_ccall f_11413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11413,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,4,lf[294],((C_word*)t0)[4],t2,C_SCHEME_FALSE));}

/* a11418 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 in ... */
static void C_ccall f_11419(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11419,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11423,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1106: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[316],t2,lf[318]);}

/* k11415 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 in ... */
static void C_ccall f_11417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1101: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[316],C_SCHEME_END_OF_LIST,t1);}

/* a4488 in tmp23100 in a4425 in a4318 in call-handler in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4489,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* tmp23100 in a4425 in a4318 in call-handler in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_4483(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4483,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4489,a[2]=t2,a[3]=((C_word)li29),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:207: k565 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* g800 in k4954 in loop in k4935 in k4932 in k4929 in k4926 in expand-extended-lambda-list in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_5097(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5097,NULL,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5150,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5154,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:365: ##sys#strip-syntax */
t7=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t4);}

/* k5241 in loop in k4935 in k4932 in k4929 in k4926 in expand-extended-lambda-list in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_5243(C_word t0,C_word t1){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5243,NULL,2,t0,t1);}
t2=(C_truep(t1)?t1:((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=C_eqp(t2,lf[65]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5256,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t4,a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[9])[1])){
t7=t6;
f_5256(t7,C_SCHEME_UNDEFINED);}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5272,a[2]=((C_word*)t0)[9],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:398: macro-alias */
f_3662(t7,lf[77],((C_word*)t0)[10]);}}
else{
t6=C_eqp(t2,lf[64]);
if(C_truep(t6)){
if(C_truep(C_fixnum_less_or_equal_p(((C_word*)t0)[4],C_fix(1)))){
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5290,a[2]=t4,a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_pairp(t4))){
t8=C_u_i_car(t4);
t9=t7;
f_5290(t9,C_i_symbolp(t8));}
else{
t8=t7;
f_5290(t8,C_SCHEME_FALSE);}}
else{
/* expand.scm:410: err */
t7=((C_word*)t0)[8];
f_4911(t7,((C_word*)t0)[6],lf[79]);}}
else{
t7=C_eqp(t2,lf[66]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5332,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[12],a[7]=t4,a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t9=((C_word*)((C_word*)t0)[9])[1];
if(C_truep(t9)){
t10=t8;
f_5332(t10,C_SCHEME_UNDEFINED);}
else{
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5351,a[2]=((C_word*)t0)[9],a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:412: macro-alias */
f_3662(t10,lf[77],((C_word*)t0)[10]);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[2]))){
t8=((C_word*)t0)[4];
switch(t8){
case C_fix(0):
t9=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[7]);
/* expand.scm:419: loop */
t10=((C_word*)((C_word*)t0)[5])[1];
f_4942(t10,((C_word*)t0)[6],C_fix(0),t9,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,t4);
case C_fix(1):
t9=C_a_i_list2(&a,2,((C_word*)t0)[2],C_SCHEME_FALSE);
t10=C_a_i_cons(&a,2,t9,((C_word*)t0)[12]);
/* expand.scm:420: loop */
t11=((C_word*)((C_word*)t0)[5])[1];
f_4942(t11,((C_word*)t0)[6],C_fix(1),((C_word*)t0)[7],t10,C_SCHEME_END_OF_LIST,t4);
case C_fix(2):
/* expand.scm:421: err */
t9=((C_word*)t0)[8];
f_4911(t9,((C_word*)t0)[6],lf[81]);
default:
t9=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t10=C_a_i_cons(&a,2,t9,((C_word*)t0)[13]);
/* expand.scm:422: loop */
t11=((C_word*)((C_word*)t0)[5])[1];
f_4942(t11,((C_word*)t0)[6],C_fix(3),((C_word*)t0)[7],((C_word*)t0)[12],t10,t4);}}
else{
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5419,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[7],a[9]=t4,a[10]=((C_word*)t0)[13],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[2]))){
t9=C_u_i_length(((C_word*)t0)[2]);
t10=C_eqp(C_fix(2),t9);
if(C_truep(t10)){
t11=C_i_car(((C_word*)t0)[2]);
t12=t8;
f_5419(t12,C_i_symbolp(t11));}
else{
t11=t8;
f_5419(t11,C_SCHEME_FALSE);}}
else{
t9=t8;
f_5419(t9,C_SCHEME_FALSE);}}}}}}

/* ##sys#expand-extended-lambda-list in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4908(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[18],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_4908,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4911,a[2]=t4,a[3]=t2,a[4]=((C_word)li46),tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4928,a[2]=t8,a[3]=t10,a[4]=t3,a[5]=t6,a[6]=t5,a[7]=t1,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* expand.scm:345: macro-alias */
f_3662(t11,lf[88],t5);}

/* k11444 in k11421 in a11418 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in ... */
static void C_ccall f_11446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11446,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* err in expand-extended-lambda-list in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_4911(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4911,NULL,3,t0,t1,t2);}
/* expand.scm:341: errh */
t3=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t1,t2,((C_word*)t0)[3]);}

/* k5254 in k5241 in loop in k4935 in k4932 in k4929 in k4926 in expand-extended-lambda-list in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_5256(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t2)){
/* expand.scm:400: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4942(t3,((C_word*)t0)[4],C_fix(1),((C_word*)t0)[5],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,((C_word*)t0)[6]);}
else{
/* expand.scm:401: err */
t3=((C_word*)t0)[7];
f_4911(t3,((C_word*)t0)[4],lf[76]);}}

/* k4568 in loop in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_4570(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4570,NULL,2,t0,t1);}
t2=C_eqp(((C_word*)((C_word*)t0)[2])[1],lf[50]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4579,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:275: ##sys#check-syntax */
t4=*((C_word*)lf[54]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,t3,lf[55],((C_word*)t0)[3],lf[57],C_SCHEME_FALSE,((C_word*)t0)[5]);}
else{
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4721,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[11])){
if(C_truep(C_i_symbolp(((C_word*)((C_word*)t0)[2])[1]))){
t4=((C_word*)((C_word*)t0)[2])[1];
t5=t3;
f_4721(t5,C_i_getprop(t4,lf[59],C_SCHEME_FALSE));}
else{
t4=t3;
f_4721(t4,C_SCHEME_FALSE);}}
else{
t4=t3;
f_4721(t4,C_SCHEME_FALSE);}}}

/* k4577 in k4568 in loop in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4579(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4579,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
if(C_truep(C_i_symbolp(t3))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4591,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:278: ##sys#check-syntax */
t5=*((C_word*)lf[54]+1);
((C_proc7)(void*)(*((C_word*)t5+1)))(7,t5,t4,lf[55],((C_word*)t0)[2],lf[56],C_SCHEME_FALSE,((C_word*)t0)[4]);}
else{
/* expand.scm:289: values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[5],C_SCHEME_FALSE);}}

/* k3884 in k3859 in extend-se in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_3886(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3886,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t0)[2];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3898,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3900,a[2]=t5,a[3]=t9,a[4]=t3,a[5]=((C_word)li5),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_3900(t11,t7,t6,((C_word*)t0)[5]);}

/* k11421 in a11418 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in ... */
static void C_ccall f_11423(C_word c,C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11423,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t2))){
t4=C_u_i_car(t2);
t5=C_a_i_list(&a,2,lf[317],t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11446,a[2]=((C_word*)t0)[3],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=C_u_i_cdr(t2);
t9=C_a_i_list(&a,1,t3);
/* expand.scm:1101: ##sys#append */
t10=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,t8,t9);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[94],t2,t3));}}

/* k4926 in expand-extended-lambda-list in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4928,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4931,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* expand.scm:347: macro-alias */
f_3662(t3,lf[87],((C_word*)t0)[6]);}

/* k7158 in walk in k7134 in k7001 in check-syntax in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_7160(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7160,NULL,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7165,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li91),tmp=(C_word)a,a+=9,tmp));
t6=((C_word*)t4)[1];
f_7165(t6,((C_word*)t0)[6],((C_word*)t0)[7],C_fix(0));}

/* loop in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_4546(C_word t0,C_word t1,C_word t2){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4546,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=C_u_i_car(t3);
t5=t2;
t6=C_u_i_cdr(t5);
if(C_truep(C_i_symbolp(t4))){
t7=f_3645(t4,((C_word*)t0)[2]);
t8=(C_truep(t7)?t7:t4);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4570,a[2]=t10,a[3]=t6,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t2,a[7]=((C_word*)t0)[3],a[8]=t4,a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_i_pairp(((C_word*)t10)[1]))){
t12=t11;
f_4570(t12,C_SCHEME_UNDEFINED);}
else{
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4784,a[2]=t10,a[3]=t11,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:273: ##sys#macro-environment */
t13=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,t12);}}
else{
/* expand.scm:299: values */
C_values(4,0,t1,t2,C_SCHEME_FALSE);}}
else{
/* expand.scm:300: values */
C_values(4,0,t1,t2,C_SCHEME_FALSE);}}

/* k4589 in k4577 in k4568 in loop in expand-0 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_4591(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4591,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_i_check_list_2(t3,lf[16]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4676,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4682,a[2]=t7,a[3]=t11,a[4]=t5,a[5]=((C_word)li36),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_4682(t13,t9,t3);}

/* k3637 in k3633 in k3629 */
static void C_ccall f_3639(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3639,2,t0,t1);}
t2=C_mutate2((C_word*)lf[2]+1 /* (set! ##sys#current-meta-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3643,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:77: make-parameter */
t4=*((C_word*)lf[235]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,*((C_word*)lf[1]+1));}

/* k3633 in k3629 */
static void C_ccall f_3635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3635,2,t0,t1);}
t2=C_mutate2((C_word*)lf[1]+1 /* (set! ##sys#current-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3639,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:74: make-parameter */
t4=*((C_word*)lf[235]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_END_OF_LIST);}

/* k3629 */
static void C_ccall f_3631(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3631,2,t0,t1);}
t2=C_mutate2((C_word*)lf[0]+1 /* (set! ##sys#features ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3635,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:73: make-parameter */
t4=*((C_word*)lf[235]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_END_OF_LIST);}

/* k5200 in loop in k4935 in k4932 in k4929 in k4926 in expand-extended-lambda-list in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:357: ##sys#append */
t2=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)((C_word*)t0)[3])[1]);}

/* doloop1436 in k7158 in walk in k7134 in k7001 in check-syntax in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_7165(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7165,NULL,4,t0,t1,t2,t3);}
t4=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
if(C_truep(C_fixnum_lessp(t3,((C_word*)t0)[2]))){
/* expand.scm:756: err */
t5=((C_word*)((C_word*)t0)[3])[1];
f_7020(t5,t1,lf[151]);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7184,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[5]))){
/* expand.scm:758: err */
t6=((C_word*)((C_word*)t0)[3])[1];
f_7020(t6,t5,lf[152]);}
else{
if(C_truep(C_i_pairp(t2))){
t6=C_i_car(t2);
/* expand.scm:761: walk */
t7=((C_word*)((C_word*)t0)[6])[1];
f_7141(t7,t5,t6,((C_word*)t0)[7]);}
else{
/* expand.scm:760: err */
t6=((C_word*)((C_word*)t0)[3])[1];
f_7020(t6,t5,lf[153]);}}}}

/* k8591 in k8498 */
static void C_ccall f_8593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8593,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],t3);
t5=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,1,t4));}

/* k7182 in doloop1436 in k7158 in walk in k7134 in k7001 in check-syntax in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_7184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_7165(t4,((C_word*)t0)[5],t2,t3);}

/* k3814 in walk in strip-syntax in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_3816(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3816,2,t0,t1);}
t2=t1;
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_cons(&a,2,t3,((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3825,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t7,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word)li2),tmp=(C_word)a,a+=8,tmp));
t9=((C_word*)t7)[1];
f_3825(t9,((C_word*)t0)[6],C_fix(0));}

/* k5417 in k5241 in loop in k4935 in k4932 in k4929 in k4926 in expand-extended-lambda-list in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_5419(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5419,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
switch(t2){
case C_fix(0):
/* expand.scm:425: err */
t3=((C_word*)t0)[3];
f_4911(t3,((C_word*)t0)[4],lf[82]);
case C_fix(1):
t3=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[6]);
/* expand.scm:426: loop */
t4=((C_word*)((C_word*)t0)[7])[1];
f_4942(t4,((C_word*)t0)[4],C_fix(1),((C_word*)t0)[8],t3,C_SCHEME_END_OF_LIST,((C_word*)t0)[9]);
case C_fix(2):
/* expand.scm:427: err */
t3=((C_word*)t0)[3];
f_4911(t3,((C_word*)t0)[4],lf[83]);
default:
t3=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[10]);
/* expand.scm:428: loop */
t4=((C_word*)((C_word*)t0)[7])[1];
f_4942(t4,((C_word*)t0)[4],C_fix(3),((C_word*)t0)[8],((C_word*)t0)[6],t3,((C_word*)t0)[9]);}}
else{
/* expand.scm:429: err */
t2=((C_word*)t0)[3];
f_4911(t2,((C_word*)t0)[4],lf[84]);}}

/* doloop331 in k3814 in walk in strip-syntax in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_3825(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3825,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3846,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[5],t2);
/* expand.scm:125: walk */
t5=((C_word*)((C_word*)t0)[6])[1];
f_3726(t5,t3,t4);}}

/* k6736 in k6846 in loop in k6792 in syntax-error/context in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6738(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6738,2,t0,t1);}
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6743,a[2]=t4,a[3]=((C_word)li79),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_6743(t6,((C_word*)t0)[2],t2);}

/* ##sys#syntax-error/context in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6727(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6727,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(*((C_word*)lf[119]+1)))){
/* expand.scm:653: ##sys#syntax-error-hook */
t4=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6794,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:654: open-output-string */
t5=*((C_word*)lf[141]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k6722 in syntax-error in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(5,0,((C_word*)t0)[2],*((C_word*)lf[121]+1),lf[122],t1);}

/* k6401 in loop2 in k6324 in k6306 in loop in expand in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6403,2,t0,t1);}
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_i_cddr(((C_word*)t0)[4]);
t6=C_a_i_cons(&a,2,t4,t5);
t7=C_a_i_cons(&a,2,lf[72],t6);
t8=C_a_i_cons(&a,2,t7,((C_word*)t0)[5]);
/* expand.scm:575: loop */
t9=((C_word*)((C_word*)t0)[6])[1];
f_6288(t9,((C_word*)t0)[7],((C_word*)t0)[8],t3,t8,((C_word*)t0)[9],((C_word*)t0)[10]);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_expand_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_expand_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("expand_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(4391)){
C_save(t1);
C_rereclaim2(4391*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,359);
lf[0]=C_h_intern(&lf[0],12,"\003sysfeatures");
lf[1]=C_h_intern(&lf[1],23,"\003syscurrent-environment");
lf[2]=C_h_intern(&lf[2],28,"\003syscurrent-meta-environment");
lf[3]=C_h_intern(&lf[3],27,"\003sysactive-eval-environment");
lf[5]=C_h_intern(&lf[5],16,"\004coremacro-alias");
lf[7]=C_h_intern(&lf[7],14,"\004corereal-name");
lf[8]=C_h_intern(&lf[8],6,"gensym");
lf[9]=C_h_intern(&lf[9],21,"\003sysqualified-symbol\077");
lf[10]=C_h_intern(&lf[10],12,"strip-syntax");
lf[11]=C_h_intern(&lf[11],11,"make-vector");
lf[12]=C_h_intern(&lf[12],16,"\003sysstrip-syntax");
lf[13]=C_h_intern(&lf[13],13,"\003sysextend-se");
lf[14]=C_h_intern(&lf[14],8,"for-each");
lf[15]=C_h_intern(&lf[15],6,"append");
lf[16]=C_h_intern(&lf[16],3,"map");
lf[17]=C_h_intern(&lf[17],13,"\003sysglobalize");
lf[18]=C_h_intern(&lf[18],21,"\003sysalias-global-hook");
lf[19]=C_h_intern(&lf[19],21,"\003sysmacro-environment");
lf[20]=C_h_intern(&lf[20],29,"\003syschicken-macro-environment");
lf[21]=C_h_intern(&lf[21],33,"\003syschicken-ffi-macro-environment");
lf[22]=C_h_intern(&lf[22],22,"\003sysensure-transformer");
lf[23]=C_h_intern(&lf[23],18,"\003syser-transformer");
lf[24]=C_h_intern(&lf[24],11,"transformer");
lf[25]=C_h_intern(&lf[25],9,"\003syserror");
lf[26]=C_decode_literal(C_heaptop,"\376B\000\000$expected syntax-transformer, but got");
lf[27]=C_h_intern(&lf[27],28,"\003sysextend-macro-environment");
lf[28]=C_h_intern(&lf[28],14,"\003syscopy-macro");
lf[29]=C_h_intern(&lf[29],10,"\003sysmacro\077");
lf[30]=C_h_intern(&lf[30],20,"\003sysunregister-macro");
lf[31]=C_h_intern(&lf[31],19,"\003sysundefine-macro!");
lf[32]=C_h_intern(&lf[32],12,"\003sysexpand-0");
lf[33]=C_h_intern(&lf[33],9,"condition");
lf[34]=C_h_intern(&lf[34],9,"\003sysabort");
lf[35]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\003exn\376\001\000\000\007message");
lf[36]=C_h_intern(&lf[36],13,"string-append");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\025during expansion of (");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\010 ...) - ");
lf[39]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\003exn\376\001\000\000\007message");
lf[40]=C_h_intern(&lf[40],3,"exn");
lf[41]=C_h_intern(&lf[41],21,"\003syssyntax-error-hook");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\030syntax transformer for `");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000@\047 returns original form, which would result in endless expansion");
lf[44]=C_h_intern(&lf[44],14,"symbol->string");
lf[45]=C_h_intern(&lf[45],25,"\003syssyntax-rules-mismatch");
lf[46]=C_h_intern(&lf[46],16,"\003sysdynamic-wind");
lf[47]=C_h_intern(&lf[47],22,"with-exception-handler");
lf[48]=C_h_intern(&lf[48],30,"call-with-current-continuation");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\034invalid syntax in macro form");
lf[50]=C_h_intern(&lf[50],8,"\004corelet");
lf[51]=C_h_intern(&lf[51],16,"\004coreloop-lambda");
lf[52]=C_h_intern(&lf[52],12,"\004coreletrec\052");
lf[53]=C_h_intern(&lf[53],8,"\004coreapp");
lf[54]=C_h_intern(&lf[54],16,"\003syscheck-syntax");
lf[55]=C_h_intern(&lf[55],3,"let");
lf[56]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[57]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\002");
lf[58]=C_h_intern(&lf[58],24,"\003syscompiler-syntax-hook");
lf[59]=C_h_intern(&lf[59],24,"\010compilercompiler-syntax");
lf[60]=C_h_intern(&lf[60],25,"\003sysenable-runtime-macros");
lf[61]=C_h_intern(&lf[61],6,"expand");
lf[62]=C_h_intern(&lf[62],10,"\003sysexpand");
lf[63]=C_h_intern(&lf[63],25,"\003sysextended-lambda-list\077");
lf[64]=C_h_intern(&lf[64],6,"#!rest");
lf[65]=C_h_intern(&lf[65],10,"#!optional");
lf[66]=C_h_intern(&lf[66],5,"#!key");
lf[67]=C_h_intern(&lf[67],31,"\003sysexpand-extended-lambda-list");
lf[68]=C_h_intern(&lf[68],5,"cadar");
lf[69]=C_h_intern(&lf[69],7,"reverse");
lf[70]=C_h_intern(&lf[70],10,"\003sysappend");
lf[71]=C_h_intern(&lf[71],10,"\004corequote");
lf[72]=C_h_intern(&lf[72],11,"\004corelambda");
lf[73]=C_h_intern(&lf[73],15,"\003sysget-keyword");
lf[74]=C_h_intern(&lf[74],15,"string->keyword");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000+rest argument list specified more than once");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000-`#!optional\047 argument marker in wrong context");
lf[77]=C_h_intern(&lf[77],3,"tmp");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000#invalid syntax of `#!rest\047 argument");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000)`#!rest\047 argument marker in wrong context");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000(`#!key\047 argument marker in wrong context");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\0000invalid lambda list syntax after `#!rest\047 marker");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\000 invalid required argument syntax");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\0000invalid lambda list syntax after `#!rest\047 marker");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\032invalid lambda list syntax");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\032invalid lambda list syntax");
lf[86]=C_h_intern(&lf[86],14,"let-optionals\052");
lf[87]=C_h_intern(&lf[87],8,"optional");
lf[88]=C_h_intern(&lf[88],4,"let\052");
lf[89]=C_h_intern(&lf[89],16,"\003sysdefjam-error");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000,redefinition of currently used defining form");
lf[91]=C_h_intern(&lf[91],37,"\003sysexpand-multiple-values-assignment");
lf[92]=C_h_intern(&lf[92],20,"\003syscall-with-values");
lf[93]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016\376\377\016");
lf[94]=C_h_intern(&lf[94],9,"\004coreset!");
lf[95]=C_h_intern(&lf[95],25,"\003sysdecompose-lambda-list");
lf[96]=C_h_intern(&lf[96],21,"\003sysdefine-definition");
lf[97]=C_h_intern(&lf[97],28,"\003sysdefine-syntax-definition");
lf[98]=C_h_intern(&lf[98],28,"\003sysdefine-values-definition");
lf[99]=C_h_intern(&lf[99],21,"\003syscanonicalize-body");
lf[100]=C_h_intern(&lf[100],6,"define");
lf[101]=C_h_intern(&lf[101],13,"define-syntax");
lf[102]=C_h_intern(&lf[102],13,"define-values");
lf[103]=C_h_intern(&lf[103],10,"\004corebegin");
lf[104]=C_h_intern(&lf[104],5,"foldl");
lf[105]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[106]=C_h_intern(&lf[106],18,"\004coreletrec-syntax");
lf[107]=C_h_intern(&lf[107],5,"caadr");
lf[108]=C_h_intern(&lf[108],25,"\003sysexpand-curried-define");
lf[109]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\013lambda-list\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[110]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010variable\376\001\000\000\013lambda-list\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[111]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[112]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\010variable\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[113]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[114]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[115]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\013lambda-list\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[117]=C_h_intern(&lf[117],24,"\003sysline-number-database");
lf[118]=C_h_intern(&lf[118],24,"\003syssyntax-error-culprit");
lf[119]=C_h_intern(&lf[119],18,"\003syssyntax-context");
lf[120]=C_h_intern(&lf[120],12,"syntax-error");
lf[121]=C_h_intern(&lf[121],15,"\003syssignal-hook");
lf[122]=C_h_intern(&lf[122],13,"\000syntax-error");
lf[123]=C_h_intern(&lf[123],24,"\003syssyntax-error/context");
lf[124]=C_h_intern(&lf[124],9,"\003sysprint");
lf[125]=C_h_intern(&lf[125],17,"get-output-string");
lf[126]=C_decode_literal(C_heaptop,"\376B\000\000\006 ...)\047");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\025\012inside expression `(");
lf[128]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[129]=C_decode_literal(C_heaptop,"\376B\000\000\027  Suggesting: `(import ");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000\002)\047");
lf[131]=C_decode_literal(C_heaptop,"\376B\000\000\025  Suggesting one of:\012");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[133]=C_decode_literal(C_heaptop,"\376B\000\000\017\012      (import ");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\000\002)\047");
lf[135]=C_decode_literal(C_heaptop,"\376B\000\000# ...)\047 without importing it first.\012");
lf[136]=C_decode_literal(C_heaptop,"\376B\000\000-\012\012  Perhaps you intended to use the syntax `(");
lf[137]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[138]=C_h_intern(&lf[138],6,"syntax");
lf[139]=C_h_intern(&lf[139],7,"\003sysget");
lf[140]=C_h_intern(&lf[140],7,"\004coredb");
lf[141]=C_h_intern(&lf[141],18,"open-output-string");
lf[142]=C_decode_literal(C_heaptop,"\376B\000\000\024no rule matches form");
lf[143]=C_h_intern(&lf[143],15,"get-line-number");
lf[144]=C_h_intern(&lf[144],18,"\003syshash-table-ref");
lf[145]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[146]=C_decode_literal(C_heaptop,"\376B\000\000\006) in `");
lf[147]=C_decode_literal(C_heaptop,"\376B\000\000\004\047 - ");
lf[148]=C_decode_literal(C_heaptop,"\376B\000\000\004in `");
lf[149]=C_decode_literal(C_heaptop,"\376B\000\000\004\047 - ");
lf[150]=C_h_intern(&lf[150],8,"keyword\077");
lf[151]=C_decode_literal(C_heaptop,"\376B\000\000\024not enough arguments");
lf[152]=C_decode_literal(C_heaptop,"\376B\000\000\022too many arguments");
lf[153]=C_decode_literal(C_heaptop,"\376B\000\000\021not a proper list");
lf[154]=C_decode_literal(C_heaptop,"\376B\000\000\021unexpected object");
lf[155]=C_h_intern(&lf[155],1,"_");
lf[156]=C_h_intern(&lf[156],4,"pair");
lf[157]=C_h_intern(&lf[157],5,"pair\077");
lf[158]=C_decode_literal(C_heaptop,"\376B\000\000\015pair expected");
lf[159]=C_h_intern(&lf[159],8,"variable");
lf[160]=C_h_intern(&lf[160],7,"symbol\077");
lf[161]=C_decode_literal(C_heaptop,"\376B\000\000\023identifier expected");
lf[162]=C_h_intern(&lf[162],6,"symbol");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000\017symbol expected");
lf[164]=C_h_intern(&lf[164],4,"list");
lf[165]=C_decode_literal(C_heaptop,"\376B\000\000\024proper list expected");
lf[166]=C_h_intern(&lf[166],6,"number");
lf[167]=C_h_intern(&lf[167],7,"number\077");
lf[168]=C_decode_literal(C_heaptop,"\376B\000\000\017number expected");
lf[169]=C_h_intern(&lf[169],6,"string");
lf[170]=C_h_intern(&lf[170],7,"string\077");
lf[171]=C_decode_literal(C_heaptop,"\376B\000\000\017string expected");
lf[172]=C_h_intern(&lf[172],11,"lambda-list");
lf[173]=C_decode_literal(C_heaptop,"\376B\000\000\024lambda-list expected");
lf[174]=C_decode_literal(C_heaptop,"\376B\000\000\017missing keyword");
lf[175]=C_decode_literal(C_heaptop,"\376B\000\000\015pair expected");
lf[176]=C_decode_literal(C_heaptop,"\376B\000\000\017incomplete form");
lf[177]=C_h_intern(&lf[177],22,"make-er/ir-transformer");
lf[178]=C_h_intern(&lf[178],12,"list->vector");
lf[179]=C_h_intern(&lf[179],12,"vector->list");
lf[180]=C_h_intern(&lf[180],12,"\004corealiased");
lf[181]=C_h_intern(&lf[181],14,"\004coreprimitive");
lf[182]=C_decode_literal(C_heaptop,"\376B\000\000\033(expand.scm:796) not a list");
lf[183]=C_h_intern(&lf[183],20,"er-macro-transformer");
lf[184]=C_h_intern(&lf[184],20,"ir-macro-transformer");
lf[185]=C_h_intern(&lf[185],18,"\003sysir-transformer");
lf[186]=C_h_intern(&lf[186],29,"\003sysinitial-macro-environment");
lf[188]=C_h_intern(&lf[188],8,"\003syswarn");
lf[189]=C_decode_literal(C_heaptop,"\376B\000\000!variable bound multiple times in ");
lf[190]=C_decode_literal(C_heaptop,"\376B\000\000\012 construct");
lf[191]=C_h_intern(&lf[191],24,"\003sysprocess-syntax-rules");
lf[192]=C_h_intern(&lf[192],7,"\003syscar");
lf[193]=C_h_intern(&lf[193],7,"\003syscdr");
lf[194]=C_h_intern(&lf[194],10,"\003syslength");
lf[195]=C_h_intern(&lf[195],11,"\003sysvector\077");
lf[196]=C_h_intern(&lf[196],16,"\003sysvector->list");
lf[197]=C_h_intern(&lf[197],16,"\003syslist->vector");
lf[198]=C_h_intern(&lf[198],6,"\003sys>=");
lf[199]=C_h_intern(&lf[199],5,"\003sys=");
lf[200]=C_h_intern(&lf[200],5,"\003sys+");
lf[201]=C_h_intern(&lf[201],8,"\003syscons");
lf[202]=C_h_intern(&lf[202],7,"\003syseq\077");
lf[203]=C_h_intern(&lf[203],10,"\003sysequal\077");
lf[204]=C_h_intern(&lf[204],9,"\003syslist\077");
lf[205]=C_h_intern(&lf[205],7,"\003sysmap");
lf[206]=C_h_intern(&lf[206],9,"\003sysmap-n");
lf[207]=C_h_intern(&lf[207],9,"\003syspair\077");
lf[208]=C_decode_literal(C_heaptop,"\376B\000\000\026ill-formed syntax rule");
lf[209]=C_h_intern(&lf[209],11,"\004coresyntax");
lf[210]=C_h_intern(&lf[210],5,"quote");
lf[211]=C_h_intern(&lf[211],14,"\003sysdrop-right");
lf[212]=C_h_intern(&lf[212],14,"\003systake-right");
lf[213]=C_decode_literal(C_heaptop,"\376B\000\000,template dimension error (too few ellipses\077)");
lf[214]=C_decode_literal(C_heaptop,"\376B\000\000\021too many ellipses");
lf[215]=C_h_intern(&lf[215],9,"\003sysapply");
lf[216]=C_decode_literal(C_heaptop,"\376B\000\000%Only one segment per level is allowed");
lf[217]=C_decode_literal(C_heaptop,"\376B\000\000\047Cannot combine dotted tail and ellipsis");
lf[218]=C_h_intern(&lf[218],4,"temp");
lf[219]=C_h_intern(&lf[219],4,"tail");
lf[220]=C_h_intern(&lf[220],6,"rename");
lf[221]=C_h_intern(&lf[221],2,"or");
lf[222]=C_h_intern(&lf[222],4,"loop");
lf[223]=C_h_intern(&lf[223],6,"lambda");
lf[224]=C_h_intern(&lf[224],3,"len");
lf[225]=C_h_intern(&lf[225],1,"l");
lf[226]=C_h_intern(&lf[226],5,"input");
lf[227]=C_h_intern(&lf[227],4,"else");
lf[228]=C_h_intern(&lf[228],4,"cond");
lf[229]=C_h_intern(&lf[229],7,"compare");
lf[230]=C_h_intern(&lf[230],3,"and");
lf[231]=C_h_intern(&lf[231],16,"\003sysmacro-subset");
lf[232]=C_h_intern(&lf[232],27,"\003sysfixup-macro-environment");
lf[233]=C_h_intern(&lf[233],29,"\003sysdefault-macro-environment");
lf[234]=C_h_intern(&lf[234],26,"\003sysmeta-macro-environment");
lf[235]=C_h_intern(&lf[235],14,"make-parameter");
lf[236]=C_h_intern(&lf[236],12,"syntax-rules");
lf[237]=C_h_intern(&lf[237],3,"...");
lf[238]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\004list\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[239]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\002");
lf[240]=C_h_intern(&lf[240],6,"export");
lf[241]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[242]=C_h_intern(&lf[242],22,"\003sysadd-to-export-list");
lf[243]=C_h_intern(&lf[243],18,"\003syscurrent-module");
lf[244]=C_h_intern(&lf[244],20,"\003sysvalidate-exports");
lf[245]=C_h_intern(&lf[245],16,"begin-for-syntax");
lf[246]=C_h_intern(&lf[246],24,"\004coreelaborationtimeonly");
lf[247]=C_h_intern(&lf[247],28,"\003sysregister-meta-expression");
lf[248]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[249]=C_h_intern(&lf[249],6,"module");
lf[250]=C_h_intern(&lf[250],1,"\052");
lf[251]=C_h_intern(&lf[251],1,"=");
lf[252]=C_h_intern(&lf[252],14,"string->symbol");
lf[253]=C_h_intern(&lf[253],17,"\003sysstring-append");
lf[254]=C_decode_literal(C_heaptop,"\376B\000\000\001_");
lf[255]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[256]=C_h_intern(&lf[256],25,"\003sysregister-module-alias");
lf[257]=C_h_intern(&lf[257],23,"\003sysinstantiate-functor");
lf[258]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\016"
);
lf[259]=C_h_intern(&lf[259],12,"\004coreinclude");
lf[260]=C_h_intern(&lf[260],11,"\004coremodule");
lf[261]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[262]=C_h_intern(&lf[262],28,"require-extension-for-syntax");
lf[263]=C_h_intern(&lf[263],17,"require-extension");
lf[264]=C_h_intern(&lf[264],22,"\004corerequire-extension");
lf[265]=C_h_intern(&lf[265],15,"require-library");
lf[266]=C_h_intern(&lf[266],11,"cond-expand");
lf[267]=C_decode_literal(C_heaptop,"\376B\000\000\042syntax error in `cond-expand\047 form");
lf[268]=C_h_intern(&lf[268],12,"\003sysfeature\077");
lf[269]=C_decode_literal(C_heaptop,"\376B\000\000(no matching clause in `cond-expand\047 form");
lf[270]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[271]=C_h_intern(&lf[271],3,"not");
lf[272]=C_h_intern(&lf[272],11,"delay-force");
lf[273]=C_h_intern(&lf[273],16,"\003sysmake-promise");
lf[274]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[275]=C_h_intern(&lf[275],5,"delay");
lf[276]=C_h_intern(&lf[276],8,"\003syslist");
lf[277]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[278]=C_h_intern(&lf[278],10,"quasiquote");
lf[279]=C_h_intern(&lf[279],7,"unquote");
lf[280]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[281]=C_h_intern(&lf[281],16,"unquote-splicing");
lf[282]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[283]=C_h_intern(&lf[283],1,"a");
lf[284]=C_h_intern(&lf[284],1,"b");
lf[285]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\012\003sysappend\376\003\000\000\002\376\001\000\000\001a\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\004corequote\376\003\000\000\002\376\377\016\376\377\016\376\377\016");
lf[286]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001a\376\377\016");
lf[287]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010\003syscons\376\003\000\000\002\376\001\000\000\001a\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\003syslist\376\001\000\000\001b\376\377\016");
lf[288]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001a\376\003\000\000\002\376\001\000\000\001b\376\377\016");
lf[289]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010\003syscons\376\003\000\000\002\376\001\000\000\001a\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\004corequote\376\003\000\000\002\376\377\016\376\377\016\376\377\016");
lf[290]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001a\376\377\016");
lf[291]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[292]=C_h_intern(&lf[292],2,"do");
lf[293]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[294]=C_h_intern(&lf[294],7,"\004coreif");
lf[295]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[296]=C_h_intern(&lf[296],6,"doloop");
lf[297]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\001\376\001\000\000\001_\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001"
"\000\000\000\001");
lf[298]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[299]=C_h_intern(&lf[299],4,"case");
lf[300]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\012\004corebegin\376\377\016");
lf[301]=C_decode_literal(C_heaptop,"\376B\000\000(clause following `else\047 clause in `case\047");
lf[302]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[303]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[304]=C_h_intern(&lf[304],4,"eqv\077");
lf[305]=C_h_intern(&lf[305],2,"=>");
lf[306]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[307]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\012\004corebegin\376\377\016");
lf[308]=C_h_intern(&lf[308],7,"sprintf");
lf[309]=C_decode_literal(C_heaptop,"\376B\000\000\022\047 clause in `cond\047");
lf[310]=C_decode_literal(C_heaptop,"\376B\000\000\022clause following `");
lf[311]=C_h_intern(&lf[311],2,"if");
lf[312]=C_h_intern(&lf[312],18,"\003syssrfi-4-vector\077");
lf[313]=C_h_intern(&lf[313],5,"blob\077");
lf[314]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[315]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[316]=C_h_intern(&lf[316],4,"set!");
lf[317]=C_h_intern(&lf[317],10,"\003syssetter");
lf[318]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[319]=C_h_intern(&lf[319],13,"letrec-syntax");
lf[320]=C_decode_literal(C_heaptop,"\376B\000\000\015letrec-syntax");
lf[321]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[322]=C_h_intern(&lf[322],10,"let-syntax");
lf[323]=C_h_intern(&lf[323],15,"\004corelet-syntax");
lf[324]=C_decode_literal(C_heaptop,"\376B\000\000\012let-syntax");
lf[325]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[326]=C_h_intern(&lf[326],6,"letrec");
lf[327]=C_h_intern(&lf[327],11,"\004coreletrec");
lf[328]=C_decode_literal(C_heaptop,"\376B\000\000\006letrec");
lf[329]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[330]=C_h_intern(&lf[330],7,"letrec\052");
lf[331]=C_decode_literal(C_heaptop,"\376B\000\000\007letrec\052");
lf[332]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[333]=C_decode_literal(C_heaptop,"\376B\000\000\003let");
lf[334]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376"
"\001\000\000\001_\376\377\001\000\000\000\001");
lf[335]=C_decode_literal(C_heaptop,"\376B\000\000\003let");
lf[336]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[337]=C_h_intern(&lf[337],18,"\004coredefine-syntax");
lf[338]=C_decode_literal(C_heaptop,"\376B\000\000@redefinition of `define-syntax\047 not allowed in syntax-definition");
lf[339]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[340]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\013lambda-list");
lf[341]=C_h_intern(&lf[341],19,"\003sysregister-export");
lf[342]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[343]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\013lambda-list\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[344]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\001\000\000\013lambda-list\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[345]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[346]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001");
lf[347]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[348]=C_h_intern(&lf[348],5,"begin");
lf[349]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[350]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\001\376\001\000\000\001_");
lf[351]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[352]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[353]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\013lambda-list\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[354]=C_h_intern(&lf[354],8,"reexport");
lf[355]=C_h_intern(&lf[355],17,"\003sysexpand-import");
lf[356]=C_h_intern(&lf[356],17,"import-for-syntax");
lf[357]=C_h_intern(&lf[357],6,"import");
lf[358]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\020\000hygienic-macros\376\003\000\000\002\376\001\000\000\015\000syntax-rules\376\003\000\000\002\376\001\000\000\007\000srfi-0\376\003\000\000\002\376\001\000\000\007\000srf"
"i-2\376\003\000\000\002\376\001\000\000\007\000srfi-6\376\003\000\000\002\376\001\000\000\007\000srfi-9\376\003\000\000\002\376\001\000\000\010\000srfi-46\376\003\000\000\002\376\001\000\000\010\000srfi-55\376\003\000\000\002\376\001"
"\000\000\010\000srfi-61\376\377\016");
C_register_lf2(lf,359,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3631,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:55: append */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[358],*((C_word*)lf[0]+1));}

/* g1598 in k7789 in k7734 in k7726 in compare in k7459 in a7453 in make-er/ir-transformer in k4115 in k3641 in k3637 in k3633 in k3629 */
static C_word C_fcall f_7776(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;
t2=C_i_cdr(t1);
return(C_eqp(t2,((C_word*)t0)[2]));}

/* doloop1543 in compare in k7459 in a7453 in make-er/ir-transformer in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_7676(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7676,NULL,4,t0,t1,t2,t3);}
t4=C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]);
t5=(C_truep(t4)?t4:C_i_not(t3));
if(C_truep(t5)){
t6=t3;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=C_fixnum_plus(t2,C_fix(1));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7697,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
t9=C_i_vector_ref(((C_word*)t0)[4],t2);
t10=C_i_vector_ref(((C_word*)t0)[5],t2);
/* expand.scm:843: compare */
t11=((C_word*)((C_word*)t0)[6])[1];
f_7617(4,t11,t8,t9,t10);}}

/* k7695 in doloop1543 in compare in k7459 in a7453 in make-er/ir-transformer in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_7697(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[2])[1];
f_7676(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* a9804 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in ... */
static void C_ccall f_9805(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9805,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9813,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1435: r */
t6=t3;
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,lf[245]);}

/* k9801 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in ... */
static void C_ccall f_9803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1430: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[262],C_SCHEME_END_OF_LIST,t1);}

/* k9811 in a9804 in k8190 in k8187 in k8184 in k8181 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in ... */
static void C_ccall f_9813(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9813,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9821,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1435: r */
t4=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[263]);}

/* k10459 in k10414 in k10388 in simplify in k10209 in k10206 in k10203 in a10200 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in ... */
static void C_ccall f_10461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=t1;
t4=C_i_assq(lf[283],t3);
t5=t2;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_cdr(t4));}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* loop in k6792 in syntax-error/context in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_fcall f_6812(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6812,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6822,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:659: outstr */
t4=((C_word*)t0)[2];
f_6796(t4,t3,((C_word*)t0)[5]);}
else{
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6848,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t4=C_i_car(t2);
/* expand.scm:666: ##sys#strip-syntax */
t5=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}}

/* k6808 in k6801 in k6792 in syntax-error/context in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6810(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:691: ##sys#syntax-error-hook */
t2=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k8802 */
static void C_ccall f_8804(C_word c,C_word t0,C_word t1){
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
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8804,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cddr(((C_word*)t0)[2]);
t3=C_i_length(t2);
t4=t3;
t5=C_eqp(t4,C_fix(0));
t6=(C_truep(t5)?((C_word*)t0)[3]:C_a_i_list(&a,3,lf[211],((C_word*)t0)[3],t4));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8817,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t9=((C_word*)t0)[2];
t10=C_u_i_car(t9);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8833,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[6],a[4]=t7,a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word)li116),tmp=(C_word)a,a+=8,tmp);
/* synrules.scm:181: process-pattern */
t12=((C_word*)((C_word*)t0)[5])[1];
((C_proc6)C_fast_retrieve_proc(t12))(6,t12,t8,t10,((C_word*)((C_word*)t0)[7])[1],t11,C_SCHEME_FALSE);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8879,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
t5=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[11])[1],((C_word*)t0)[3]);
/* synrules.scm:192: process-pattern */
t6=((C_word*)((C_word*)t0)[5])[1];
((C_proc6)C_fast_retrieve_proc(t6))(6,t6,t2,t4,t5,((C_word*)t0)[6],C_SCHEME_FALSE);}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8908,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* synrules.scm:195: vector->list */
t3=*((C_word*)lf[179]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}}}}

/* k7637 in compare in k7459 in a7453 in make-er/ir-transformer in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_7639(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* expand.scm:837: compare */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7617(4,t6,((C_word*)t0)[5],t3,t5);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k8815 in k8802 */
static void C_ccall f_8817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8817,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8821,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cddr(((C_word*)t0)[3]);
t5=C_a_i_list(&a,3,lf[212],((C_word*)t0)[4],((C_word*)t0)[5]);
/* synrules.scm:189: process-pattern */
t6=((C_word*)((C_word*)t0)[6])[1];
((C_proc6)C_fast_retrieve_proc(t6))(6,t6,t3,t4,t5,((C_word*)t0)[7],C_SCHEME_TRUE);}

/* k6801 in k6792 in syntax-error/context in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_6803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6803,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6810,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:691: get-output-string */
t3=*((C_word*)lf[125]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* a8832 in k8802 */
static void C_ccall f_8833(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[24],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8833,3,t0,t1,t2);}
t3=C_eqp(((C_word*)((C_word*)t0)[2])[1],t2);
if(C_truep(t3)){
/* synrules.scm:184: mapit */
t4=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,((C_word*)t0)[4]);}
else{
t4=C_a_i_list(&a,1,((C_word*)((C_word*)t0)[2])[1]);
t5=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[5])[1],t4,t2);
t6=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[6])[1],t5,((C_word*)t0)[4]);
/* synrules.scm:184: mapit */
t7=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t7))(3,t7,t1,t6);}}

/* k8498 */
static void C_ccall f_8500(C_word c,C_word t0,C_word t1){
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
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8500,2,t0,t1);}
if(C_truep(t1)){
/* synrules.scm:137: process-segment-match */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc4)C_fast_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t2=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[6])[1],((C_word*)t0)[4]);
t3=C_a_i_list(&a,1,t2);
t4=t3;
t5=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[6])[1]);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8536,a[2]=t6,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=t4,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8540,a[2]=t7,a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[11],tmp=(C_word)a,a+=7,tmp);
t9=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[12])[1],((C_word*)((C_word*)t0)[6])[1]);
t10=((C_word*)t0)[5];
t11=C_u_i_car(t10);
/* synrules.scm:141: process-match */
t12=((C_word*)((C_word*)t0)[11])[1];
((C_proc5)C_fast_retrieve_proc(t12))(5,t12,t8,t9,t11,C_SCHEME_FALSE);}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[5]))){
t2=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[6])[1],((C_word*)t0)[4]);
t3=C_a_i_list(&a,1,t2);
t4=t3;
t5=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[13])[1],((C_word*)((C_word*)t0)[6])[1]);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8593,a[2]=t6,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=t4,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t8=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[14])[1],((C_word*)((C_word*)t0)[6])[1]);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8601,a[2]=((C_word*)t0)[11],a[3]=t7,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* synrules.scm:147: vector->list */
t11=*((C_word*)lf[179]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,((C_word*)t0)[5]);}
else{
t2=C_i_nullp(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8614,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[15],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[16],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_8614(t4,t2);}
else{
t4=C_booleanp(((C_word*)t0)[5]);
t5=t3;
f_8614(t5,(C_truep(t4)?t4:C_charp(((C_word*)t0)[5])));}}}}}

/* k10745 in k10737 in a10734 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in ... */
static void C_ccall f_10747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10747,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10750,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1215: r */
t4=((C_word*)t0)[6];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[221]);}

/* k11916 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:930: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[356],C_SCHEME_END_OF_LIST,t1);}

/* k5857 in fini in k5695 in canonicalize-body in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_5859(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5859,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t0)[2];
t8=C_i_check_list_2(t7,lf[104]);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5881,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],a[8]=t6,a[9]=t4,tmp=(C_word)a,a+=10,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6052,a[2]=t11,a[3]=((C_word)li62),tmp=(C_word)a,a+=4,tmp));
t13=((C_word*)t11)[1];
f_6052(t13,t9,t7,t2);}

/* k10793 in k10790 in k10784 in expand in k10757 in k10754 in k10751 in k10748 in k10745 in k10737 in a10734 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in ... */
static void C_ccall f_10795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[300]);}

/* k10790 in k10784 in expand in k10757 in k10754 in k10751 in k10748 in k10745 in k10737 in a10734 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in ... */
static void C_ccall f_10792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10792,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10795,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1230: expand */
t3=((C_word*)((C_word*)t0)[3])[1];
f_10772(t3,t2,((C_word*)t0)[4],C_SCHEME_TRUE);}

/* k10797 in k10784 in expand in k10757 in k10754 in k10751 in k10748 in k10745 in k10737 in a10734 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in ... */
static void C_ccall f_10799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1227: ##sys#warn */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[188]+1)))(4,*((C_word*)lf[188]+1),((C_word*)t0)[2],lf[301],t1);}

/* a11909 in k8032 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11910(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11910,5,t0,t1,t2,t3,t4);}
t5=*((C_word*)lf[355]+1);
/* expand.scm:940: g1717 */
((C_proc10)C_fast_retrieve_proc(*((C_word*)lf[355]+1)))(10,*((C_word*)lf[355]+1),t1,t2,t3,t4,*((C_word*)lf[1]+1),*((C_word*)lf[19]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[354]);}

/* k10737 in a10734 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in ... */
static void C_ccall f_10739(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10739,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10747,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t6,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1214: r */
t8=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t8))(3,t8,t7,lf[77]);}

/* a10734 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in ... */
static void C_ccall f_10735(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10735,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10739,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1211: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[299],t2,lf[306]);}

/* k10731 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8062 in k8058 in k8054 in k8051 in k8048 in k8045 in k8042 in k8039 in k8035 in k8032 in k8029 in k4115 in ... */
static void C_ccall f_10733(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1206: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[299],C_SCHEME_END_OF_LIST,t1);}

/* k11926 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:924: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[357],C_SCHEME_END_OF_LIST,t1);}

/* a11919 in k8029 in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_11920(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11920,5,t0,t1,t2,t3,t4);}
t5=*((C_word*)lf[355]+1);
/* expand.scm:933: g1703 */
((C_proc10)C_fast_retrieve_proc(*((C_word*)lf[355]+1)))(10,*((C_word*)lf[355]+1),t1,t2,t3,t4,*((C_word*)lf[2]+1),*((C_word*)lf[234]+1),C_SCHEME_TRUE,C_SCHEME_FALSE,lf[356]);}

/* k7789 in k7734 in k7726 in compare in k7459 in a7453 in make-er/ir-transformer in k4115 in k3641 in k3637 in k3633 in k3629 */
static void C_ccall f_7791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7791,2,t0,t1);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7776,a[2]=((C_word*)t0)[3],a[3]=((C_word)li98),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:853: g1598 */
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_7776(t3,t2));}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[677] = {
{"f_5891:expand_2escm",(void*)f_5891},
{"f_7059:expand_2escm",(void*)f_7059},
{"f_10759:expand_2escm",(void*)f_10759},
{"f_7051:expand_2escm",(void*)f_7051},
{"f_10756:expand_2escm",(void*)f_10756},
{"f_10753:expand_2escm",(void*)f_10753},
{"f_10750:expand_2escm",(void*)f_10750},
{"f_9998:expand_2escm",(void*)f_9998},
{"f_7045:expand_2escm",(void*)f_7045},
{"f_7047:expand_2escm",(void*)f_7047},
{"f_5693:expand_2escm",(void*)f_5693},
{"f_7038:expand_2escm",(void*)f_7038},
{"f_5697:expand_2escm",(void*)f_5697},
{"f_7031:expand_2escm",(void*)f_7031},
{"f_9255:expand_2escm",(void*)f_9255},
{"f_5684:expand_2escm",(void*)f_5684},
{"f_7024:expand_2escm",(void*)f_7024},
{"f_7020:expand_2escm",(void*)f_7020},
{"f_4432:expand_2escm",(void*)f_4432},
{"f_4428:expand_2escm",(void*)f_4428},
{"f_4426:expand_2escm",(void*)f_4426},
{"f_9181:expand_2escm",(void*)f_9181},
{"f_9183:expand_2escm",(void*)f_9183},
{"f_7015:expand_2escm",(void*)f_7015},
{"f_9236:expand_2escm",(void*)f_9236},
{"f_5881:expand_2escm",(void*)f_5881},
{"f_5887:expand_2escm",(void*)f_5887},
{"f_7003:expand_2escm",(void*)f_7003},
{"f_7008:expand_2escm",(void*)f_7008},
{"f_10533:expand_2escm",(void*)f_10533},
{"f_9225:expand_2escm",(void*)f_9225},
{"f_5655:expand_2escm",(void*)f_5655},
{"f_9971:expand_2escm",(void*)f_9971},
{"f_5824:expand_2escm",(void*)f_5824},
{"f_10554:expand_2escm",(void*)f_10554},
{"f_5812:expand_2escm",(void*)f_5812},
{"f_5816:expand_2escm",(void*)f_5816},
{"f_4502:expand_2escm",(void*)f_4502},
{"f_4500:expand_2escm",(void*)f_4500},
{"f_11908:expand_2escm",(void*)f_11908},
{"f_7736:expand_2escm",(void*)f_7736},
{"f_8730:expand_2escm",(void*)f_8730},
{"f_9166:expand_2escm",(void*)f_9166},
{"f_7728:expand_2escm",(void*)f_7728},
{"f_11930:expand_2escm",(void*)f_11930},
{"f_11294:expand_2escm",(void*)f_11294},
{"f_10420:expand_2escm",(void*)f_10420},
{"f_4387:expand_2escm",(void*)f_4387},
{"f_10416:expand_2escm",(void*)f_10416},
{"f_9956:expand_2escm",(void*)f_9956},
{"f_4376:expand_2escm",(void*)f_4376},
{"f_11278:expand_2escm",(void*)f_11278},
{"f_5805:expand_2escm",(void*)f_5805},
{"f_11266:expand_2escm",(void*)f_11266},
{"f_4353:expand_2escm",(void*)f_4353},
{"f_4359:expand_2escm",(void*)f_4359},
{"f_6126:expand_2escm",(void*)f_6126},
{"f_6128:expand_2escm",(void*)f_6128},
{"f_7617:expand_2escm",(void*)f_7617},
{"f_6123:expand_2escm",(void*)f_6123},
{"f_9272:expand_2escm",(void*)f_9272},
{"f_9270:expand_2escm",(void*)f_9270},
{"f_9279:expand_2escm",(void*)f_9279},
{"f_7600:expand_2escm",(void*)f_7600},
{"f_11576:expand_2escm",(void*)f_11576},
{"f_10723:expand_2escm",(void*)f_10723},
{"f_6104:expand_2escm",(void*)f_6104},
{"f_6102:expand_2escm",(void*)f_6102},
{"f_10490:expand_2escm",(void*)f_10490},
{"f_11563:expand_2escm",(void*)f_11563},
{"f_11566:expand_2escm",(void*)f_11566},
{"f_9936:expand_2escm",(void*)f_9936},
{"f_10492:expand_2escm",(void*)f_10492},
{"f_10496:expand_2escm",(void*)f_10496},
{"f_7918:expand_2escm",(void*)f_7918},
{"f_7914:expand_2escm",(void*)f_7914},
{"f_11536:expand_2escm",(void*)f_11536},
{"f_4055:expand_2escm",(void*)f_4055},
{"f_5569:expand_2escm",(void*)f_5569},
{"f_11533:expand_2escm",(void*)f_11533},
{"f_11529:expand_2escm",(void*)f_11529},
{"f_6743:expand_2escm",(void*)f_6743},
{"f_11527:expand_2escm",(void*)f_11527},
{"f_5550:expand_2escm",(void*)f_5550},
{"f_5554:expand_2escm",(void*)f_5554},
{"f_10479:expand_2escm",(void*)f_10479},
{"f_5351:expand_2escm",(void*)f_5351},
{"f_10786:expand_2escm",(void*)f_10786},
{"f_6767:expand_2escm",(void*)f_6767},
{"f_11511:expand_2escm",(void*)f_11511},
{"f_11514:expand_2escm",(void*)f_11514},
{"f_9361:expand_2escm",(void*)f_9361},
{"f_11507:expand_2escm",(void*)f_11507},
{"f_6763:expand_2escm",(void*)f_6763},
{"f_8291:expand_2escm",(void*)f_8291},
{"f_8295:expand_2escm",(void*)f_8295},
{"f_11505:expand_2escm",(void*)f_11505},
{"f_9331:expand_2escm",(void*)f_9331},
{"f_9338:expand_2escm",(void*)f_9338},
{"f_8147:expand_2escm",(void*)f_8147},
{"f_6491:expand_2escm",(void*)f_6491},
{"f_8141:expand_2escm",(void*)f_8141},
{"f_8144:expand_2escm",(void*)f_8144},
{"f_8159:expand_2escm",(void*)f_8159},
{"f_8156:expand_2escm",(void*)f_8156},
{"f_8153:expand_2escm",(void*)f_8153},
{"f_8150:expand_2escm",(void*)f_8150},
{"f_8271:expand_2escm",(void*)f_8271},
{"f_8278:expand_2escm",(void*)f_8278},
{"f_5591:expand_2escm",(void*)f_5591},
{"f_10772:expand_2escm",(void*)f_10772},
{"f_10770:expand_2escm",(void*)f_10770},
{"f_9354:expand_2escm",(void*)f_9354},
{"f_8283:expand_2escm",(void*)f_8283},
{"f_8287:expand_2escm",(void*)f_8287},
{"f_6190:expand_2escm",(void*)f_6190},
{"f_10592:expand_2escm",(void*)f_10592},
{"f_6447:expand_2escm",(void*)f_6447},
{"f_11203:expand_2escm",(void*)f_11203},
{"f_10594:expand_2escm",(void*)f_10594},
{"f_6459:expand_2escm",(void*)f_6459},
{"f_9632:expand_2escm",(void*)f_9632},
{"f_9638:expand_2escm",(void*)f_9638},
{"f_6582:expand_2escm",(void*)f_6582},
{"f_8105:expand_2escm",(void*)f_8105},
{"f_8262:expand_2escm",(void*)f_8262},
{"f_8266:expand_2escm",(void*)f_8266},
{"f_6176:expand_2escm",(void*)f_6176},
{"f_6579:expand_2escm",(void*)f_6579},
{"f_9641:expand_2escm",(void*)f_9641},
{"f_4138:expand_2escm",(void*)f_4138},
{"f_6596:expand_2escm",(void*)f_6596},
{"f_4121:expand_2escm",(void*)f_4121},
{"f_8798:expand_2escm",(void*)f_8798},
{"f_4117:expand_2escm",(void*)f_4117},
{"f_9381:expand_2escm",(void*)f_9381},
{"f_9388:expand_2escm",(void*)f_9388},
{"f_6782:expand_2escm",(void*)f_6782},
{"f_8774:expand_2escm",(void*)f_8774},
{"f_10508:expand_2escm",(void*)f_10508},
{"f_6796:expand_2escm",(void*)f_6796},
{"f_6794:expand_2escm",(void*)f_6794},
{"f_8162:expand_2escm",(void*)f_8162},
{"f_8165:expand_2escm",(void*)f_8165},
{"f_8168:expand_2escm",(void*)f_8168},
{"f_11555:expand_2escm",(void*)f_11555},
{"f_4172:expand_2escm",(void*)f_4172},
{"f_11551:expand_2escm",(void*)f_11551},
{"f_5531:expand_2escm",(void*)f_5531},
{"f_8171:expand_2escm",(void*)f_8171},
{"f_8177:expand_2escm",(void*)f_8177},
{"f_8174:expand_2escm",(void*)f_8174},
{"f_11549:expand_2escm",(void*)f_11549},
{"f_5272:expand_2escm",(void*)f_5272},
{"f_8466:expand_2escm",(void*)f_8466},
{"f_8180:expand_2escm",(void*)f_8180},
{"f_8183:expand_2escm",(void*)f_8183},
{"f_8186:expand_2escm",(void*)f_8186},
{"f_8189:expand_2escm",(void*)f_8189},
{"f_9344:expand_2escm",(void*)f_9344},
{"f_8192:expand_2escm",(void*)f_8192},
{"f_8195:expand_2escm",(void*)f_8195},
{"f_8198:expand_2escm",(void*)f_8198},
{"f_5293:expand_2escm",(void*)f_5293},
{"f_5290:expand_2escm",(void*)f_5290},
{"f_9397:expand_2escm",(void*)f_9397},
{"f_9395:expand_2escm",(void*)f_9395},
{"f_9696:expand_2escm",(void*)f_9696},
{"f_5708:expand_2escm",(void*)f_5708},
{"f_9918:expand_2escm",(void*)f_9918},
{"f_9300:expand_2escm",(void*)f_9300},
{"f_5604:expand_2escm",(void*)f_5604},
{"f_9665:expand_2escm",(void*)f_9665},
{"f_9662:expand_2escm",(void*)f_9662},
{"f_9324:expand_2escm",(void*)f_9324},
{"f_7079:expand_2escm",(void*)f_7079},
{"f_6510:expand_2escm",(void*)f_6510},
{"f_9623:expand_2escm",(void*)f_9623},
{"f_9625:expand_2escm",(void*)f_9625},
{"f_9602:expand_2escm",(void*)f_9602},
{"f_5528:expand_2escm",(void*)f_5528},
{"f_5524:expand_2escm",(void*)f_5524},
{"f_8443:expand_2escm",(void*)f_8443},
{"f_5518:expand_2escm",(void*)f_5518},
{"f_5512:expand_2escm",(void*)f_5512},
{"f_7854:expand_2escm",(void*)f_7854},
{"f_8432:expand_2escm",(void*)f_8432},
{"f_8438:expand_2escm",(void*)f_8438},
{"f_8436:expand_2escm",(void*)f_8436},
{"f_6927:expand_2escm",(void*)f_6927},
{"f_7879:expand_2escm",(void*)f_7879},
{"f_6923:expand_2escm",(void*)f_6923},
{"f_8400:expand_2escm",(void*)f_8400},
{"f_7395:expand_2escm",(void*)f_7395},
{"f_6326:expand_2escm",(void*)f_6326},
{"f_6716:expand_2escm",(void*)f_6716},
{"f_8407:expand_2escm",(void*)f_8407},
{"f_6708:expand_2escm",(void*)f_6708},
{"f_6308:expand_2escm",(void*)f_6308},
{"f_4721:expand_2escm",(void*)f_4721},
{"f_8706:expand_2escm",(void*)f_8706},
{"f_4729:expand_2escm",(void*)f_4729},
{"f_4725:expand_2escm",(void*)f_4725},
{"f_8428:expand_2escm",(void*)f_8428},
{"f_5932:expand_2escm",(void*)f_5932},
{"f_5968:expand_2escm",(void*)f_5968},
{"f_5952:expand_2escm",(void*)f_5952},
{"f_5981:expand_2escm",(void*)f_5981},
{"f_7583:expand_2escm",(void*)f_7583},
{"f_7893:expand_2escm",(void*)f_7893},
{"f_7897:expand_2escm",(void*)f_7897},
{"f_7338:expand_2escm",(void*)f_7338},
{"f_8821:expand_2escm",(void*)f_8821},
{"f_8647:expand_2escm",(void*)f_8647},
{"f_10805:expand_2escm",(void*)f_10805},
{"f_10808:expand_2escm",(void*)f_10808},
{"f_10814:expand_2escm",(void*)f_10814},
{"f_7532:expand_2escm",(void*)f_7532},
{"f_5786:expand_2escm",(void*)f_5786},
{"f_8914:expand_2escm",(void*)f_8914},
{"f_8651:expand_2escm",(void*)f_8651},
{"f_7553:expand_2escm",(void*)f_7553},
{"f_7550:expand_2escm",(void*)f_7550},
{"f_8908:expand_2escm",(void*)f_8908},
{"f_5903:expand_2escm",(void*)f_5903},
{"f_5907:expand_2escm",(void*)f_5907},
{"f_5900:expand_2escm",(void*)f_5900},
{"f_4528:expand_2escm",(void*)f_4528},
{"f_5774:expand_2escm",(void*)f_5774},
{"f_5914:expand_2escm",(void*)f_5914},
{"f_5919:expand_2escm",(void*)f_5919},
{"f_5917:expand_2escm",(void*)f_5917},
{"f_5911:expand_2escm",(void*)f_5911},
{"f_11765:expand_2escm",(void*)f_11765},
{"f_11778:expand_2escm",(void*)f_11778},
{"f_11769:expand_2escm",(void*)f_11769},
{"f_4239:expand_2escm",(void*)f_4239},
{"f_6076:expand_2escm",(void*)f_6076},
{"f_6078:expand_2escm",(void*)f_6078},
{"f_4264:expand_2escm",(void*)f_4264},
{"f_4262:expand_2escm",(void*)f_4262},
{"f_6082:expand_2escm",(void*)f_6082},
{"f_4217:expand_2escm",(void*)f_4217},
{"f_4211:expand_2escm",(void*)f_4211},
{"f_6094:expand_2escm",(void*)f_6094},
{"f_4213:expand_2escm",(void*)f_4213},
{"f_10853:expand_2escm",(void*)f_10853},
{"f_8601:expand_2escm",(void*)f_8601},
{"f_10857:expand_2escm",(void*)f_10857},
{"f_11785:expand_2escm",(void*)f_11785},
{"f_11788:expand_2escm",(void*)f_11788},
{"f_8614:expand_2escm",(void*)f_8614},
{"f_11662:expand_2escm",(void*)f_11662},
{"f_11665:expand_2escm",(void*)f_11665},
{"f_4200:expand_2escm",(void*)f_4200},
{"f_11741:expand_2escm",(void*)f_11741},
{"f_11744:expand_2escm",(void*)f_11744},
{"f_11758:expand_2escm",(void*)f_11758},
{"f_11730:expand_2escm",(void*)f_11730},
{"f_6200:expand_2escm",(void*)f_6200},
{"f_4165:expand_2escm",(void*)f_4165},
{"f_4162:expand_2escm",(void*)f_4162},
{"f_11632:expand_2escm",(void*)f_11632},
{"f_11635:expand_2escm",(void*)f_11635},
{"f_4158:expand_2escm",(void*)f_4158},
{"f_11621:expand_2escm",(void*)f_11621},
{"f_11710:expand_2escm",(void*)f_11710},
{"f_11715:expand_2escm",(void*)f_11715},
{"f_10905:expand_2escm",(void*)f_10905},
{"f_10907:expand_2escm",(void*)f_10907},
{"f_11704:expand_2escm",(void*)f_11704},
{"f_11618:expand_2escm",(void*)f_11618},
{"f_7819:expand_2escm",(void*)f_7819},
{"f_4682:expand_2escm",(void*)f_4682},
{"f_10999:expand_2escm",(void*)f_10999},
{"f_10283:expand_2escm",(void*)f_10283},
{"f_10996:expand_2escm",(void*)f_10996},
{"f_7502:expand_2escm",(void*)f_7502},
{"f_11601:expand_2escm",(void*)f_11601},
{"f_11603:expand_2escm",(void*)f_11603},
{"f_10990:expand_2escm",(void*)f_10990},
{"f_11706:expand_2escm",(void*)f_11706},
{"f_7804:expand_2escm",(void*)f_7804},
{"f_10293:expand_2escm",(void*)f_10293},
{"f_10890:expand_2escm",(void*)f_10890},
{"f_4190:expand_2escm",(void*)f_4190},
{"f_6017:expand_2escm",(void*)f_6017},
{"f_10269:expand_2escm",(void*)f_10269},
{"f_10260:expand_2escm",(void*)f_10260},
{"f_10860:expand_2escm",(void*)f_10860},
{"f_6396:expand_2escm",(void*)f_6396},
{"f_9455:expand_2escm",(void*)f_9455},
{"f_8953:expand_2escm",(void*)f_8953},
{"f_8956:expand_2escm",(void*)f_8956},
{"f_10241:expand_2escm",(void*)f_10241},
{"f_6282:expand_2escm",(void*)f_6282},
{"f_6288:expand_2escm",(void*)f_6288},
{"f_10968:expand_2escm",(void*)f_10968},
{"f_10965:expand_2escm",(void*)f_10965},
{"f_6052:expand_2escm",(void*)f_6052},
{"f_6331:expand_2escm",(void*)f_6331},
{"f_10223:expand_2escm",(void*)f_10223},
{"f_10976:expand_2escm",(void*)f_10976},
{"f_6389:expand_2escm",(void*)f_6389},
{"f_10221:expand_2escm",(void*)f_10221},
{"f_10971:expand_2escm",(void*)f_10971},
{"f_11380:expand_2escm",(void*)f_11380},
{"f_11382:expand_2escm",(void*)f_11382},
{"f_9781:expand_2escm",(void*)f_9781},
{"f_10237:expand_2escm",(void*)f_10237},
{"f_4676:expand_2escm",(void*)f_4676},
{"f_9795:expand_2escm",(void*)f_9795},
{"f_11372:expand_2escm",(void*)f_11372},
{"f_10208:expand_2escm",(void*)f_10208},
{"f_10205:expand_2escm",(void*)f_10205},
{"f_8047:expand_2escm",(void*)f_8047},
{"f_8044:expand_2escm",(void*)f_8044},
{"f_8041:expand_2escm",(void*)f_8041},
{"f_10201:expand_2escm",(void*)f_10201},
{"f_5150:expand_2escm",(void*)f_5150},
{"f_5157:expand_2escm",(void*)f_5157},
{"f_5154:expand_2escm",(void*)f_5154},
{"f_10213:expand_2escm",(void*)f_10213},
{"f_8056:expand_2escm",(void*)f_8056},
{"f_8053:expand_2escm",(void*)f_8053},
{"f_8050:expand_2escm",(void*)f_8050},
{"f_10211:expand_2escm",(void*)f_10211},
{"f_11353:expand_2escm",(void*)f_11353},
{"f_9478:expand_2escm",(void*)f_9478},
{"f_5160:expand_2escm",(void*)f_5160},
{"f_5162:expand_2escm",(void*)f_5162},
{"f_8974:expand_2escm",(void*)f_8974},
{"f_8977:expand_2escm",(void*)f_8977},
{"f_8022:expand_2escm",(void*)f_8022},
{"f_6347:expand_2escm",(void*)f_6347},
{"f_6344:expand_2escm",(void*)f_6344},
{"f_9747:expand_2escm",(void*)f_9747},
{"f_8962:expand_2escm",(void*)f_8962},
{"f_8037:expand_2escm",(void*)f_8037},
{"f_8031:expand_2escm",(void*)f_8031},
{"f_8034:expand_2escm",(void*)f_8034},
{"f_11652:expand_2escm",(void*)f_11652},
{"f_11330:expand_2escm",(void*)f_11330},
{"f_11659:expand_2escm",(void*)f_11659},
{"f_11656:expand_2escm",(void*)f_11656},
{"f_8007:expand_2escm",(void*)f_8007},
{"f_10956:expand_2escm",(void*)f_10956},
{"f_10958:expand_2escm",(void*)f_10958},
{"f_5191:expand_2escm",(void*)f_5191},
{"f_11645:expand_2escm",(void*)f_11645},
{"f_8016:expand_2escm",(void*)f_8016},
{"f_8011:expand_2escm",(void*)f_8011},
{"f_9431:expand_2escm",(void*)f_9431},
{"f_9438:expand_2escm",(void*)f_9438},
{"f_9439:expand_2escm",(void*)f_9439},
{"f_11328:expand_2escm",(void*)f_11328},
{"f_9480:expand_2escm",(void*)f_9480},
{"f_8357:expand_2escm",(void*)f_8357},
{"f_9490:expand_2escm",(void*)f_9490},
{"f_8997:expand_2escm",(void*)f_8997},
{"f_8993:expand_2escm",(void*)f_8993},
{"f_8343:expand_2escm",(void*)f_8343},
{"f_5047:expand_2escm",(void*)f_5047},
{"f_8980:expand_2escm",(void*)f_8980},
{"f_6831:expand_2escm",(void*)f_6831},
{"f_6834:expand_2escm",(void*)f_6834},
{"f_8085:expand_2escm",(void*)f_8085},
{"f_8088:expand_2escm",(void*)f_8088},
{"f_6825:expand_2escm",(void*)f_6825},
{"f_6828:expand_2escm",(void*)f_6828},
{"f_6822:expand_2escm",(void*)f_6822},
{"f_8060:expand_2escm",(void*)f_8060},
{"f_8064:expand_2escm",(void*)f_8064},
{"f_8066:expand_2escm",(void*)f_8066},
{"f_5028:expand_2escm",(void*)f_5028},
{"f_8072:expand_2escm",(void*)f_8072},
{"f_9418:expand_2escm",(void*)f_9418},
{"f_8336:expand_2escm",(void*)f_8336},
{"f_8386:expand_2escm",(void*)f_8386},
{"f_5003:expand_2escm",(void*)f_5003},
{"f_7477:expand_2escm",(void*)f_7477},
{"f_9706:expand_2escm",(void*)f_9706},
{"f_9703:expand_2escm",(void*)f_9703},
{"f_9700:expand_2escm",(void*)f_9700},
{"f_10645:expand_2escm",(void*)f_10645},
{"f_9718:expand_2escm",(void*)f_9718},
{"f_7498:expand_2escm",(void*)f_7498},
{"f_4615:expand_2escm",(void*)f_4615},
{"f_4613:expand_2escm",(void*)f_4613},
{"f_9536:expand_2escm",(void*)f_9536},
{"f_9532:expand_2escm",(void*)f_9532},
{"f_9530:expand_2escm",(void*)f_9530},
{"f_7463:expand_2escm",(void*)f_7463},
{"f_7461:expand_2escm",(void*)f_7461},
{"f_8300:expand_2escm",(void*)f_8300},
{"f_8302:expand_2escm",(void*)f_8302},
{"f_10199:expand_2escm",(void*)f_10199},
{"f_8308:expand_2escm",(void*)f_8308},
{"f_7454:expand_2escm",(void*)f_7454},
{"f_9553:expand_2escm",(void*)f_9553},
{"f_7136:expand_2escm",(void*)f_7136},
{"f_7481:expand_2escm",(void*)f_7481},
{"f_9566:expand_2escm",(void*)f_9566},
{"f_9568:expand_2escm",(void*)f_9568},
{"f_9821:expand_2escm",(void*)f_9821},
{"f_10145:expand_2escm",(void*)f_10145},
{"f_10147:expand_2escm",(void*)f_10147},
{"f_9572:expand_2escm",(void*)f_9572},
{"f_9575:expand_2escm",(void*)f_9575},
{"f_9578:expand_2escm",(void*)f_9578},
{"f_9829:expand_2escm",(void*)f_9829},
{"f_9831:expand_2escm",(void*)f_9831},
{"f_9585:expand_2escm",(void*)f_9585},
{"f_7141:expand_2escm",(void*)f_7141},
{"f_3791:expand_2escm",(void*)f_3791},
{"f_9593:expand_2escm",(void*)f_9593},
{"f_10021:expand_2escm",(void*)f_10021},
{"f_9595:expand_2escm",(void*)f_9595},
{"f_9599:expand_2escm",(void*)f_9599},
{"f_7448:expand_2escm",(void*)f_7448},
{"f_3798:expand_2escm",(void*)f_3798},
{"f_7115:expand_2escm",(void*)f_7115},
{"f_7109:expand_2escm",(void*)f_7109},
{"f_7107:expand_2escm",(void*)f_7107},
{"f_3662:expand_2escm",(void*)f_3662},
{"f_3669:expand_2escm",(void*)f_3669},
{"f_3672:expand_2escm",(void*)f_3672},
{"f_4295:expand_2escm",(void*)f_4295},
{"f_3675:expand_2escm",(void*)f_3675},
{"f_4435:expand_2escm",(void*)f_4435},
{"f_3643:expand_2escm",(void*)f_3643},
{"f_3645:expand_2escm",(void*)f_3645},
{"f_3949:expand_2escm",(void*)f_3949},
{"f_9024:expand_2escm",(void*)f_9024},
{"f_9106:expand_2escm",(void*)f_9106},
{"f_9101:expand_2escm",(void*)f_9101},
{"f_9514:expand_2escm",(void*)f_9514},
{"f_9518:expand_2escm",(void*)f_9518},
{"f_9003:expand_2escm",(void*)f_9003},
{"f_9001:expand_2escm",(void*)f_9001},
{"f_4250:expand_2escm",(void*)f_4250},
{"f_4258:expand_2escm",(void*)f_4258},
{"f_11876:expand_2escm",(void*)f_11876},
{"f_11874:expand_2escm",(void*)f_11874},
{"f_9522:expand_2escm",(void*)f_9522},
{"f_9526:expand_2escm",(void*)f_9526},
{"f_4287:expand_2escm",(void*)f_4287},
{"f_11863:expand_2escm",(void*)f_11863},
{"f_4342:expand_2escm",(void*)f_4342},
{"f_9147:expand_2escm",(void*)f_9147},
{"f_4331:expand_2escm",(void*)f_4331},
{"f_9132:expand_2escm",(void*)f_9132},
{"f_11149:expand_2escm",(void*)f_11149},
{"f_11146:expand_2escm",(void*)f_11146},
{"f_4325:expand_2escm",(void*)f_4325},
{"f_4319:expand_2escm",(void*)f_4319},
{"f_4314:expand_2escm",(void*)f_4314},
{"f_11176:expand_2escm",(void*)f_11176},
{"f_11891:expand_2escm",(void*)f_11891},
{"f_11893:expand_2escm",(void*)f_11893},
{"f_11897:expand_2escm",(void*)f_11897},
{"f_11128:expand_2escm",(void*)f_11128},
{"f_9097:expand_2escm",(void*)f_9097},
{"f_4301:expand_2escm",(void*)f_4301},
{"f_4304:expand_2escm",(void*)f_4304},
{"f_4784:expand_2escm",(void*)f_4784},
{"f_3995:expand_2escm",(void*)f_3995},
{"f_11880:expand_2escm",(void*)f_11880},
{"f_9080:expand_2escm",(void*)f_9080},
{"f_4798:expand_2escm",(void*)f_4798},
{"f_4794:expand_2escm",(void*)f_4794},
{"f_6848:expand_2escm",(void*)f_6848},
{"f_10623:expand_2escm",(void*)f_10623},
{"f_11109:expand_2escm",(void*)f_11109},
{"f_6841:expand_2escm",(void*)f_6841},
{"f_11106:expand_2escm",(void*)f_11106},
{"f_9076:expand_2escm",(void*)f_9076},
{"f_11100:expand_2escm",(void*)f_11100},
{"f_6851:expand_2escm",(void*)f_6851},
{"f_10682:expand_2escm",(void*)f_10682},
{"f_10684:expand_2escm",(void*)f_10684},
{"f_6866:expand_2escm",(void*)f_6866},
{"f_6869:expand_2escm",(void*)f_6869},
{"f_10688:expand_2escm",(void*)f_10688},
{"f_11859:expand_2escm",(void*)f_11859},
{"f_6860:expand_2escm",(void*)f_6860},
{"f_6863:expand_2escm",(void*)f_6863},
{"f_11857:expand_2escm",(void*)f_11857},
{"f_4741:expand_2escm",(void*)f_4741},
{"f_10125:expand_2escm",(void*)f_10125},
{"f_6875:expand_2escm",(void*)f_6875},
{"f_10698:expand_2escm",(void*)f_10698},
{"f_11842:expand_2escm",(void*)f_11842},
{"f_11840:expand_2escm",(void*)f_11840},
{"f_6872:expand_2escm",(void*)f_6872},
{"f_11846:expand_2escm",(void*)f_11846},
{"f_11083:expand_2escm",(void*)f_11083},
{"f_6974:expand_2escm",(void*)f_6974},
{"f_6978:expand_2escm",(void*)f_6978},
{"f_4861:expand_2escm",(void*)f_4861},
{"f_4867:expand_2escm",(void*)f_4867},
{"f_10386:expand_2escm",(void*)f_10386},
{"f_10394:expand_2escm",(void*)f_10394},
{"f_10390:expand_2escm",(void*)f_10390},
{"f_6993:expand_2escm",(void*)f_6993},
{"f_10151:expand_2escm",(void*)f_10151},
{"f_3913:expand_2escm",(void*)f_3913},
{"f_4931:expand_2escm",(void*)f_4931},
{"f_4937:expand_2escm",(void*)f_4937},
{"f_4886:expand_2escm",(void*)f_4886},
{"f_4934:expand_2escm",(void*)f_4934},
{"f_10045:expand_2escm",(void*)f_10045},
{"f_10043:expand_2escm",(void*)f_10043},
{"f_10166:expand_2escm",(void*)f_10166},
{"f_10168:expand_2escm",(void*)f_10168},
{"f_3720:expand_2escm",(void*)f_3720},
{"f_5332:expand_2escm",(void*)f_5332},
{"f_4942:expand_2escm",(void*)f_4942},
{"f_11040:expand_2escm",(void*)f_11040},
{"f_10172:expand_2escm",(void*)f_10172},
{"f_10179:expand_2escm",(void*)f_10179},
{"f_11034:expand_2escm",(void*)f_11034},
{"f_4956:expand_2escm",(void*)f_4956},
{"f_10109:expand_2escm",(void*)f_10109},
{"f_10345:expand_2escm",(void*)f_10345},
{"f_11031:expand_2escm",(void*)f_11031},
{"f_6948:expand_2escm",(void*)f_6948},
{"f_11028:expand_2escm",(void*)f_11028},
{"f_3900:expand_2escm",(void*)f_3900},
{"f_4960:expand_2escm",(void*)f_4960},
{"f_10353:expand_2escm",(void*)f_10353},
{"f_11022:expand_2escm",(void*)f_11022},
{"f_6954:expand_2escm",(void*)f_6954},
{"f_4039:expand_2escm",(void*)f_4039},
{"f_4033:expand_2escm",(void*)f_4033},
{"f_11018:expand_2escm",(void*)f_11018},
{"f_11015:expand_2escm",(void*)f_11015},
{"f_4972:expand_2escm",(void*)f_4972},
{"f_10005:expand_2escm",(void*)f_10005},
{"f_11012:expand_2escm",(void*)f_11012},
{"f_10368:expand_2escm",(void*)f_10368},
{"f_8216:expand_2escm",(void*)f_8216},
{"f_11492:expand_2escm",(void*)f_11492},
{"f_9885:expand_2escm",(void*)f_9885},
{"f_4024:expand_2escm",(void*)f_4024},
{"f_11009:expand_2escm",(void*)f_11009},
{"f_11003:expand_2escm",(void*)f_11003},
{"f_10372:expand_2escm",(void*)f_10372},
{"f_6888:expand_2escm",(void*)f_6888},
{"f_9899:expand_2escm",(void*)f_9899},
{"f_10304:expand_2escm",(void*)f_10304},
{"f_8883:expand_2escm",(void*)f_8883},
{"f_11823:expand_2escm",(void*)f_11823},
{"f_6664:expand_2escm",(void*)f_6664},
{"f_4089:expand_2escm",(void*)f_4089},
{"f_11470:expand_2escm",(void*)f_11470},
{"f_9867:expand_2escm",(void*)f_9867},
{"f_9864:expand_2escm",(void*)f_9864},
{"f_6892:expand_2escm",(void*)f_6892},
{"f_6661:expand_2escm",(void*)f_6661},
{"f_11829:expand_2escm",(void*)f_11829},
{"f_11825:expand_2escm",(void*)f_11825},
{"f_10314:expand_2escm",(void*)f_10314},
{"f_8207:expand_2escm",(void*)f_8207},
{"f_8209:expand_2escm",(void*)f_8209},
{"f_8201:expand_2escm",(void*)f_8201},
{"f_6636:expand_2escm",(void*)f_6636},
{"f_4073:expand_2escm",(void*)f_4073},
{"f_8204:expand_2escm",(void*)f_8204},
{"f_6909:expand_2escm",(void*)f_6909},
{"f_9873:expand_2escm",(void*)f_9873},
{"f_9870:expand_2escm",(void*)f_9870},
{"f_6907:expand_2escm",(void*)f_6907},
{"f_9875:expand_2escm",(void*)f_9875},
{"f_6903:expand_2escm",(void*)f_6903},
{"f_10323:expand_2escm",(void*)f_10323},
{"f_8536:expand_2escm",(void*)f_8536},
{"f_8258:expand_2escm",(void*)f_8258},
{"f_8254:expand_2escm",(void*)f_8254},
{"f_3857:expand_2escm",(void*)f_3857},
{"f_8250:expand_2escm",(void*)f_8250},
{"f_9842:expand_2escm",(void*)f_9842},
{"f_9844:expand_2escm",(void*)f_9844},
{"f_4812:expand_2escm",(void*)f_4812},
{"f_10334:expand_2escm",(void*)f_10334},
{"f_4448:expand_2escm",(void*)f_4448},
{"f_5051:expand_2escm",(void*)f_5051},
{"f_6659:expand_2escm",(void*)f_6659},
{"f_3861:expand_2escm",(void*)f_3861},
{"f_11483:expand_2escm",(void*)f_11483},
{"f_11485:expand_2escm",(void*)f_11485},
{"f_9855:expand_2escm",(void*)f_9855},
{"f_9857:expand_2escm",(void*)f_9857},
{"f_4824:expand_2escm",(void*)f_4824},
{"f_11489:expand_2escm",(void*)f_11489},
{"f_4818:expand_2escm",(void*)f_4818},
{"f_4452:expand_2escm",(void*)f_4452},
{"f_4459:expand_2escm",(void*)f_4459},
{"f_8235:expand_2escm",(void*)f_8235},
{"f_8231:expand_2escm",(void*)f_8231},
{"f_3726:expand_2escm",(void*)f_3726},
{"f_8540:expand_2escm",(void*)f_8540},
{"f_4465:expand_2escm",(void*)f_4465},
{"f_3846:expand_2escm",(void*)f_3846},
{"f_8246:expand_2escm",(void*)f_8246},
{"f_8879:expand_2escm",(void*)f_8879},
{"f_8544:expand_2escm",(void*)f_8544},
{"f_8240:expand_2escm",(void*)f_8240},
{"f_11463:expand_2escm",(void*)f_11463},
{"f_11461:expand_2escm",(void*)f_11461},
{"f_11467:expand_2escm",(void*)f_11467},
{"f_4470:expand_2escm",(void*)f_4470},
{"f_4476:expand_2escm",(void*)f_4476},
{"f_3898:expand_2escm",(void*)f_3898},
{"f_11413:expand_2escm",(void*)f_11413},
{"f_11419:expand_2escm",(void*)f_11419},
{"f_11417:expand_2escm",(void*)f_11417},
{"f_4489:expand_2escm",(void*)f_4489},
{"f_4483:expand_2escm",(void*)f_4483},
{"f_5097:expand_2escm",(void*)f_5097},
{"f_5243:expand_2escm",(void*)f_5243},
{"f_4908:expand_2escm",(void*)f_4908},
{"f_11446:expand_2escm",(void*)f_11446},
{"f_4911:expand_2escm",(void*)f_4911},
{"f_5256:expand_2escm",(void*)f_5256},
{"f_4570:expand_2escm",(void*)f_4570},
{"f_4579:expand_2escm",(void*)f_4579},
{"f_3886:expand_2escm",(void*)f_3886},
{"f_11423:expand_2escm",(void*)f_11423},
{"f_4928:expand_2escm",(void*)f_4928},
{"f_7160:expand_2escm",(void*)f_7160},
{"f_4546:expand_2escm",(void*)f_4546},
{"f_4591:expand_2escm",(void*)f_4591},
{"f_3639:expand_2escm",(void*)f_3639},
{"f_3635:expand_2escm",(void*)f_3635},
{"f_3631:expand_2escm",(void*)f_3631},
{"f_5202:expand_2escm",(void*)f_5202},
{"f_7165:expand_2escm",(void*)f_7165},
{"f_8593:expand_2escm",(void*)f_8593},
{"f_7184:expand_2escm",(void*)f_7184},
{"f_3816:expand_2escm",(void*)f_3816},
{"f_5419:expand_2escm",(void*)f_5419},
{"f_3825:expand_2escm",(void*)f_3825},
{"f_6738:expand_2escm",(void*)f_6738},
{"f_6727:expand_2escm",(void*)f_6727},
{"f_6724:expand_2escm",(void*)f_6724},
{"f_6403:expand_2escm",(void*)f_6403},
{"toplevel:expand_2escm",(void*)C_expand_toplevel},
{"f_7776:expand_2escm",(void*)f_7776},
{"f_7676:expand_2escm",(void*)f_7676},
{"f_7697:expand_2escm",(void*)f_7697},
{"f_9805:expand_2escm",(void*)f_9805},
{"f_9803:expand_2escm",(void*)f_9803},
{"f_9813:expand_2escm",(void*)f_9813},
{"f_10461:expand_2escm",(void*)f_10461},
{"f_6812:expand_2escm",(void*)f_6812},
{"f_6810:expand_2escm",(void*)f_6810},
{"f_8804:expand_2escm",(void*)f_8804},
{"f_7639:expand_2escm",(void*)f_7639},
{"f_8817:expand_2escm",(void*)f_8817},
{"f_6803:expand_2escm",(void*)f_6803},
{"f_8833:expand_2escm",(void*)f_8833},
{"f_8500:expand_2escm",(void*)f_8500},
{"f_10747:expand_2escm",(void*)f_10747},
{"f_11918:expand_2escm",(void*)f_11918},
{"f_5859:expand_2escm",(void*)f_5859},
{"f_10795:expand_2escm",(void*)f_10795},
{"f_10792:expand_2escm",(void*)f_10792},
{"f_10799:expand_2escm",(void*)f_10799},
{"f_11910:expand_2escm",(void*)f_11910},
{"f_10739:expand_2escm",(void*)f_10739},
{"f_10735:expand_2escm",(void*)f_10735},
{"f_10733:expand_2escm",(void*)f_10733},
{"f_11928:expand_2escm",(void*)f_11928},
{"f_11920:expand_2escm",(void*)f_11920},
{"f_7791:expand_2escm",(void*)f_7791},
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
S|  foldl		1
S|  ##sys#map		5
S|  for-each		2
S|  map		11
o|eliminated procedure checks: 553 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|specializations:
o|  1 (zero? fixnum)
o|  1 (cdddr (pair * (pair * pair)))
o|  1 (##sys#check-output-port * * *)
o|  2 (vector-length vector)
o|  8 (eqv? (not float) *)
o|  2 (cadr (pair * pair))
o|  8 (cddr (pair * pair))
o|  1 (cdadr (pair * (pair pair *)))
o|  3 (caar (pair pair *))
o|  1 (>= fixnum fixnum)
o|  2 (length list)
o|  15 (eqv? * (not float))
o|  1 (##sys#call-with-values (procedure () *) *)
o|  2 (cdar (pair pair *))
o|  10 (##sys#check-list (or pair list) *)
o|  1 (set-cdr! pair *)
o|  75 (cdr pair)
o|  1 (set-car! pair *)
o|  58 (car pair)
o|Removed `not' forms: 36 
o|inlining procedure: k3647 
o|inlining procedure: k3647 
o|contracted procedure: "(expand.scm:81) g257258" 
o|inlining procedure: k3664 
o|inlining procedure: k3664 
o|contracted procedure: "(expand.scm:95) g288289" 
o|contracted procedure: "(expand.scm:94) g283284" 
o|contracted procedure: "(expand.scm:93) g279280" 
o|inlining procedure: k3709 
o|inlining procedure: k3709 
o|inlining procedure: k3731 
o|inlining procedure: k3731 
o|inlining procedure: k3753 
o|inlining procedure: k3753 
o|contracted procedure: k3759 
o|inlining procedure: k3762 
o|inlining procedure: k3762 
o|contracted procedure: "(expand.scm:109) g321322" 
o|contracted procedure: "(expand.scm:108) g310311" 
o|inlining procedure: k3768 
o|inlining procedure: k3768 
o|inlining procedure: k3827 
o|inlining procedure: k3827 
o|inlining procedure: k3902 
o|contracted procedure: "(expand.scm:136) g424434" 
o|inlining procedure: k3902 
o|inlining procedure: k3951 
o|contracted procedure: "(expand.scm:130) g382390" 
o|contracted procedure: "(expand.scm:134) g400401" 
o|contracted procedure: "(expand.scm:133) g396397" 
o|inlining procedure: k3951 
o|inlining procedure: k3997 
o|inlining procedure: k3997 
o|contracted procedure: k4044 
o|inlining procedure: k4041 
o|inlining procedure: k4057 
o|inlining procedure: k4057 
o|inlining procedure: k4075 
o|inlining procedure: k4075 
o|contracted procedure: "(expand.scm:144) g461462" 
o|inlining procedure: k4041 
o|inlining procedure: k4126 
o|inlining procedure: k4126 
o|inlining procedure: k4169 
o|inlining procedure: k4169 
o|inlining procedure: k4224 
o|inlining procedure: k4224 
o|removed unused formal parameters: (me2542) 
o|inlining procedure: k4266 
o|inlining procedure: k4266 
o|removed unused parameter to known procedure: me2542 loop540 
o|inlining procedure: k4337 
o|inlining procedure: k4361 
o|inlining procedure: k4361 
o|inlining procedure: k4404 
o|inlining procedure: k4404 
o|inlining procedure: k4337 
o|inlining procedure: k4433 
o|inlining procedure: k4433 
o|contracted procedure: k4453 
o|merged explicitly consed rest parameter: args566598 
o|consed rest parameter at call site: tmp23100 1 
o|contracted procedure: k4510 
o|inlining procedure: k4507 
o|inlining procedure: k4507 
o|inlining procedure: k4548 
o|inlining procedure: k4571 
o|inlining procedure: k4617 
o|inlining procedure: k4617 
o|inlining procedure: k4684 
o|contracted procedure: "(expand.scm:285) g644653" 
o|inlining procedure: k4684 
o|inlining procedure: k4571 
o|inlining procedure: k4730 
o|inlining procedure: k4730 
o|inlining procedure: k4760 
o|contracted procedure: "(expand.scm:290) g694695" 
o|inlining procedure: k4760 
o|inlining procedure: k4778 
o|inlining procedure: k4778 
o|inlining procedure: k4548 
o|inlining procedure: k4826 
o|inlining procedure: k4826 
o|inlining procedure: k4869 
o|inlining procedure: k4895 
o|inlining procedure: k4895 
o|substituted constant variable: a4902 
o|substituted constant variable: a4904 
o|substituted constant variable: a4906 
o|inlining procedure: k4869 
o|inlining procedure: k4944 
o|inlining procedure: k4961 
o|inlining procedure: k4961 
o|inlining procedure: k5004 
o|inlining procedure: k5004 
o|inlining procedure: k5057 
o|inlining procedure: k5057 
o|contracted procedure: k5060 
o|contracted procedure: k5066 
o|inlining procedure: k5069 
o|inlining procedure: k5069 
o|inlining procedure: k5126 
o|substituted constant variable: %lambda774 
o|inlining procedure: k5126 
o|contracted procedure: "(expand.scm:365) ->keyword768" 
o|inlining procedure: k5164 
o|inlining procedure: k5164 
o|inlining procedure: k4944 
o|inlining procedure: k5212 
o|inlining procedure: k5212 
o|contracted procedure: k5232 
o|inlining procedure: k5229 
o|inlining procedure: k5257 
o|inlining procedure: k5257 
o|inlining procedure: k5273 
o|inlining procedure: k5285 
o|contracted procedure: k5303 
o|inlining procedure: k5285 
o|inlining procedure: k5273 
o|inlining procedure: k5333 
o|inlining procedure: k5333 
o|contracted procedure: k5345 
o|inlining procedure: k5352 
o|inlining procedure: k5371 
o|inlining procedure: k5371 
o|substituted constant variable: a5409 
o|substituted constant variable: a5411 
o|substituted constant variable: a5413 
o|inlining procedure: k5352 
o|inlining procedure: k5420 
o|inlining procedure: k5420 
o|inlining procedure: k5442 
o|inlining procedure: k5442 
o|substituted constant variable: a5459 
o|substituted constant variable: a5461 
o|substituted constant variable: a5463 
o|inlining procedure: k5470 
o|inlining procedure: k5470 
o|substituted constant variable: a5486 
o|substituted constant variable: a5488 
o|substituted constant variable: a5490 
o|contracted procedure: k5497 
o|inlining procedure: k5494 
o|inlining procedure: k5494 
o|inlining procedure: k5229 
o|inlining procedure: k5571 
o|inlining procedure: k5571 
o|inlining procedure: k5593 
o|contracted procedure: "(expand.scm:456) g937947" 
o|inlining procedure: k5593 
o|contracted procedure: k5639 
o|inlining procedure: k5657 
o|inlining procedure: k5657 
o|inlining procedure: k5716 
o|inlining procedure: k5716 
o|inlining procedure: k5725 
o|inlining procedure: k5725 
o|inlining procedure: k5734 
o|inlining procedure: k5734 
o|inlining procedure: k5755 
o|inlining procedure: k5755 
o|substituted constant variable: a5768 
o|substituted constant variable: a5770 
o|substituted constant variable: a5772 
o|inlining procedure: k5776 
o|contracted procedure: k5791 
o|inlining procedure: k5788 
o|inlining procedure: k5838 
o|inlining procedure: k5838 
o|inlining procedure: k5788 
o|inlining procedure: k5776 
o|inlining procedure: k5921 
o|inlining procedure: k5921 
o|inlining procedure: k5970 
o|contracted procedure: "(expand.scm:507) g10871097" 
o|inlining procedure: k5970 
o|inlining procedure: k6019 
o|contracted procedure: "(expand.scm:500) g10391048" 
o|inlining procedure: k6019 
o|inlining procedure: k6054 
o|contracted procedure: "(expand.scm:502) g10631064" 
o|inlining procedure: k6054 
o|inlining procedure: k6106 
o|inlining procedure: k6130 
o|inlining procedure: k6130 
o|inlining procedure: k6106 
o|contracted procedure: k6165 
o|inlining procedure: k6171 
o|inlining procedure: k6188 
o|inlining procedure: k6188 
o|inlining procedure: k6171 
o|inlining procedure: k6244 
o|inlining procedure: k6244 
o|substituted constant variable: a6266 
o|contracted procedure: k6293 
o|inlining procedure: k6290 
o|contracted procedure: k6312 
o|inlining procedure: k6318 
o|contracted procedure: k6339 
o|inlining procedure: k6336 
o|inlining procedure: k6336 
o|inlining procedure: k6360 
o|inlining procedure: k6360 
o|inlining procedure: k6318 
o|inlining procedure: k6451 
o|inlining procedure: k6451 
o|inlining procedure: k6496 
o|inlining procedure: k6496 
o|inlining procedure: k6534 
o|inlining procedure: k6534 
o|inlining procedure: k6290 
o|contracted procedure: k6587 
o|inlining procedure: k6584 
o|inlining procedure: k6631 
o|inlining procedure: k6631 
o|inlining procedure: k6584 
o|inlining procedure: k6608 
o|inlining procedure: k6608 
o|inlining procedure: k6654 
o|inlining procedure: k6654 
o|inlining procedure: k6666 
o|inlining procedure: k6666 
o|inlining procedure: k6783 
o|inlining procedure: k6783 
o|inlining procedure: k6814 
o|inlining procedure: k6814 
o|inlining procedure: k6876 
o|inlining procedure: k6876 
o|inlining procedure: k6911 
o|inlining procedure: k6911 
o|contracted procedure: "(expand.scm:667) syntax-imports1299" 
o|inlining procedure: k6745 
o|inlining procedure: k6745 
o|inlining procedure: k6956 
o|inlining procedure: k6966 
o|inlining procedure: k6983 
o|inlining procedure: k6983 
o|inlining procedure: k6966 
o|inlining procedure: k6956 
o|inlining procedure: k7010 
o|inlining procedure: k7010 
o|inlining procedure: k7029 
o|inlining procedure: k7029 
o|propagated global variable: sexp1391 ##sys#syntax-error-culprit 
o|inlining procedure: k7052 
o|inlining procedure: k7052 
o|inlining procedure: k7064 
o|inlining procedure: k7064 
o|inlining procedure: k7080 
o|contracted procedure: k7096 
o|inlining procedure: k7093 
o|inlining procedure: k7093 
o|inlining procedure: k7080 
o|inlining procedure: k7120 
o|inlining procedure: k7120 
o|inlining procedure: k7143 
o|inlining procedure: k7167 
o|inlining procedure: k7167 
o|contracted procedure: k7205 
o|inlining procedure: k7202 
o|inlining procedure: k7202 
o|inlining procedure: k7225 
o|inlining procedure: k7225 
o|inlining procedure: k7143 
o|contracted procedure: k7249 
o|inlining procedure: k7246 
o|inlining procedure: k7246 
o|inlining procedure: k7259 
o|inlining procedure: k7271 
o|inlining procedure: k7271 
o|inlining procedure: k7289 
o|inlining procedure: k7289 
o|inlining procedure: k7307 
o|inlining procedure: k7307 
o|inlining procedure: k7325 
o|inlining procedure: k7325 
o|inlining procedure: k7347 
o|inlining procedure: k7347 
o|substituted constant variable: a7360 
o|substituted constant variable: a7362 
o|substituted constant variable: a7364 
o|substituted constant variable: a7366 
o|substituted constant variable: a7368 
o|substituted constant variable: a7370 
o|substituted constant variable: a7372 
o|substituted constant variable: a7374 
o|inlining procedure: k7259 
o|contracted procedure: k7378 
o|contracted procedure: k7387 
o|inlining procedure: k7384 
o|inlining procedure: k7384 
o|inlining procedure: k7465 
o|inlining procedure: k7465 
o|contracted procedure: k7506 
o|inlining procedure: k7503 
o|contracted procedure: "(expand.scm:794) g14831484" 
o|inlining procedure: k7534 
o|contracted procedure: "(expand.scm:814) g15081509" 
o|contracted procedure: "(expand.scm:813) g15041505" 
o|inlining procedure: k7534 
o|inlining procedure: k7529 
o|inlining procedure: k7529 
o|inlining procedure: k7503 
o|inlining procedure: k7619 
o|inlining procedure: k7634 
o|inlining procedure: k7634 
o|inlining procedure: k7619 
o|inlining procedure: k7657 
o|inlining procedure: k7678 
o|inlining procedure: k7678 
o|inlining procedure: k7657 
o|inlining procedure: k7715 
o|inlining procedure: k7743 
o|inlining procedure: k7767 
o|inlining procedure: k7767 
o|contracted procedure: "(expand.scm:855) g15931594" 
o|contracted procedure: "(expand.scm:854) g15861587" 
o|inlining procedure: k7743 
o|inlining procedure: k7792 
o|inlining procedure: k7792 
o|inlining procedure: k7826 
o|inlining procedure: k7826 
o|removed unused parameter to known procedure: n1613 "(expand.scm:850) lookup21473" 
o|contracted procedure: "(expand.scm:849) g15671568" 
o|inlining procedure: k7832 
o|inlining procedure: k7832 
o|removed unused parameter to known procedure: n1613 "(expand.scm:847) lookup21473" 
o|contracted procedure: "(expand.scm:846) g15571558" 
o|inlining procedure: k7715 
o|removed unused formal parameters: (n1613) 
o|inlining procedure: k7856 
o|inlining procedure: k7856 
o|inlining procedure: k7881 
o|inlining procedure: k7881 
o|contracted procedure: k7922 
o|inlining procedure: k7919 
o|contracted procedure: "(expand.scm:887) g16381639" 
o|contracted procedure: k7948 
o|inlining procedure: k7945 
o|inlining procedure: k7974 
o|contracted procedure: "(expand.scm:887) g16551656" 
o|inlining procedure: k7974 
o|contracted procedure: "(expand.scm:895) g16511652" 
o|inlining procedure: k7945 
o|inlining procedure: k7919 
o|inlining procedure: k7995 
o|inlining procedure: k7995 
o|inlining procedure: k8077 
o|inlining procedure: k8077 
o|removed side-effect free assignment to unused variable: %vector-length2450 
o|removed side-effect free assignment to unused variable: %vector-ref2451 
o|removed side-effect free assignment to unused variable: %null?2473 
o|removed side-effect free assignment to unused variable: %or2474 
o|removed side-effect free assignment to unused variable: %syntax-error2480 
o|inlining procedure: k8359 
o|inlining procedure: k8359 
o|inlining procedure: k8402 
o|inlining procedure: k8402 
o|inlining procedure: k8450 
o|inlining procedure: k8450 
o|inlining procedure: k8468 
o|inlining procedure: k8468 
o|inlining procedure: k8504 
o|inlining procedure: k8504 
o|inlining procedure: k8606 
o|inlining procedure: k8606 
o|inlining procedure: k8640 
o|inlining procedure: k8640 
o|inlining procedure: k8776 
o|inlining procedure: k8776 
o|inlining procedure: k8839 
o|inlining procedure: k8839 
o|inlining procedure: k8867 
o|inlining procedure: k8867 
o|inlining procedure: k8916 
o|inlining procedure: k8928 
o|inlining procedure: k8928 
o|inlining procedure: k8916 
o|inlining procedure: k8963 
o|inlining procedure: k8963 
o|substituted constant variable: %append2443 
o|inlining procedure: k9005 
o|inlining procedure: k9005 
o|substituted constant variable: %apply2444 
o|substituted constant variable: %append2443 
o|inlining procedure: k9039 
o|inlining procedure: k9039 
o|inlining procedure: k9064 
o|inlining procedure: k9064 
o|inlining procedure: k9108 
o|inlining procedure: k9108 
o|inlining procedure: k9152 
o|inlining procedure: k9152 
o|inlining procedure: k9185 
o|contracted procedure: k9200 
o|inlining procedure: k9206 
o|inlining procedure: k9206 
o|inlining procedure: k9185 
o|inlining procedure: k9241 
o|inlining procedure: k9241 
o|inlining procedure: k9274 
o|contracted procedure: k9289 
o|inlining procedure: k9286 
o|inlining procedure: k9286 
o|inlining procedure: k9274 
o|inlining procedure: k9302 
o|inlining procedure: k9302 
o|inlining procedure: k9326 
o|inlining procedure: k9326 
o|inlining procedure: k9356 
o|inlining procedure: k9356 
o|inlining procedure: k9399 
o|inlining procedure: k9399 
o|inlining procedure: k9441 
o|inlining procedure: k9453 
o|inlining procedure: k9453 
o|inlining procedure: k9441 
o|inlining procedure: k9482 
o|inlining procedure: k9482 
o|inlining procedure: k9576 
o|inlining procedure: k9576 
o|inlining procedure: k9633 
o|inlining procedure: k9654 
o|inlining procedure: k9654 
o|inlining procedure: k9633 
o|inlining procedure: k9742 
o|inlining procedure: k9742 
o|inlining procedure: k9762 
o|inlining procedure: k9762 
o|inlining procedure: k9887 
o|inlining procedure: k9887 
o|contracted procedure: k9903 
o|inlining procedure: k9913 
o|inlining procedure: k9925 
o|inlining procedure: k9925 
o|inlining procedure: k9913 
o|contracted procedure: k9960 
o|inlining procedure: k9957 
o|inlining procedure: k9957 
o|inlining procedure: k9972 
o|inlining procedure: k9972 
o|inlining procedure: k9993 
o|inlining procedure: k9993 
o|inlining procedure: k10023 
o|inlining procedure: k10047 
o|contracted procedure: "(expand.scm:1398) g23152324" 
o|inlining procedure: k10047 
o|inlining procedure: k10023 
o|contracted procedure: k10082 
o|contracted procedure: k10095 
o|inlining procedure: k10092 
o|inlining procedure: k10111 
o|inlining procedure: k10111 
o|inlining procedure: k10120 
o|inlining procedure: k10120 
o|inlining procedure: k10092 
o|inlining procedure: k10225 
o|inlining procedure: k10225 
o|contracted procedure: k10245 
o|inlining procedure: k10255 
o|inlining procedure: k10255 
o|inlining procedure: k10309 
o|inlining procedure: k10309 
o|inlining procedure: k10391 
o|inlining procedure: k10391 
o|inlining procedure: k10425 
o|inlining procedure: k10425 
o|inlining procedure: k10462 
o|contracted procedure: "(expand.scm:1294) g22442245" 
o|inlining procedure: k10462 
o|inlining procedure: k10596 
o|contracted procedure: "(expand.scm:1284) g21472156" 
o|inlining procedure: k10566 
o|inlining procedure: k10566 
o|inlining procedure: k10596 
o|inlining procedure: k10647 
o|contracted procedure: "(expand.scm:1273) g21132122" 
o|inlining procedure: k10647 
o|inlining procedure: k10700 
o|inlining procedure: k10700 
o|contracted procedure: k10777 
o|inlining procedure: k10774 
o|inlining procedure: k10800 
o|inlining procedure: k10800 
o|inlining procedure: k10909 
o|inlining procedure: k10909 
o|inlining procedure: k10774 
o|contracted procedure: k10981 
o|inlining procedure: k10978 
o|substituted constant variable: a11005 
o|substituted constant variable: a11006 
o|inlining procedure: k11023 
o|inlining procedure: k11050 
o|inlining procedure: k11050 
o|inlining procedure: k11023 
o|inlining procedure: k11101 
o|inlining procedure: k11101 
o|inlining procedure: k11237 
o|inlining procedure: k11237 
o|inlining procedure: k11249 
o|inlining procedure: k11249 
o|inlining procedure: k11261 
o|inlining procedure: k11261 
o|inlining procedure: k11273 
o|inlining procedure: k11273 
o|inlining procedure: k11282 
o|inlining procedure: k11282 
o|inlining procedure: k10978 
o|inlining procedure: k11335 
o|inlining procedure: k11335 
o|inlining procedure: k11387 
o|inlining procedure: k11387 
o|inlining procedure: k11430 
o|inlining procedure: k11430 
o|contracted procedure: k11613 
o|inlining procedure: k11610 
o|inlining procedure: k11610 
o|contracted procedure: "(expand.scm:1023) g18001801" 
o|contracted procedure: k11725 
o|inlining procedure: k11722 
o|inlining procedure: k11722 
o|inlining procedure: k11749 
o|inlining procedure: k11749 
o|contracted procedure: "(expand.scm:998) g17701771" 
o|propagated global variable: g17171718 ##sys#expand-import 
o|propagated global variable: g17031704 ##sys#expand-import 
o|propagated global variable: g16891690 ##sys#expand-import 
o|replaced variables: 1628 
o|removed binding forms: 493 
o|substituted constant variable: prop260 
o|removed call to pure procedure with unused result: "(expand.scm:96) void" 
o|substituted constant variable: prop291 
o|substituted constant variable: prop286 
o|substituted constant variable: prop282 
o|substituted constant variable: r371011940 
o|substituted constant variable: prop324 
o|substituted constant variable: prop313 
o|substituted constant variable: prop403 
o|inlining procedure: k3875 
o|inlining procedure: k3875 
o|substituted constant variable: prop399 
o|substituted constant variable: prop464 
o|substituted constant variable: r426711969 
o|substituted constant variable: r436211973 
o|substituted constant variable: r440511976 
o|removed call to pure procedure with unused result: "(expand.scm:246) void" 
o|removed call to pure procedure with unused result: "(expand.scm:206) void" 
o|removed call to pure procedure with unused result: "(expand.scm:203) void" 
o|removed call to pure procedure with unused result: "(expand.scm:203) void" 
o|inlining procedure: k4739 
o|substituted constant variable: prop697 
o|substituted constant variable: r476112003 
o|substituted constant variable: r487012014 
o|substituted constant variable: r507012027 
o|substituted constant variable: r512712030 
o|substituted constant variable: r512712030 
o|substituted constant variable: r547112055 
o|substituted constant variable: r549512056 
o|converted assignments to bindings: (err767) 
o|substituted constant variable: r557212059 
o|substituted constant variable: r557212059 
o|inlining procedure: k5571 
o|substituted constant variable: r583912078 
o|removed call to pure procedure with unused result: "(expand.scm:497) void" 
o|inlining procedure: k6188 
o|substituted constant variable: r624512100 
o|substituted constant variable: r636112107 
o|substituted constant variable: r636112107 
o|substituted constant variable: r653512115 
o|substituted constant variable: r663212119 
o|substituted constant variable: r660912121 
o|substituted constant variable: r665512124 
o|substituted constant variable: r691212133 
o|substituted constant variable: r674612135 
o|converted assignments to bindings: (outstr1312) 
o|substituted constant variable: r698412140 
o|substituted constant variable: r696712141 
o|substituted constant variable: r695712142 
o|substituted constant variable: r709412154 
o|substituted constant variable: r708112156 
o|substituted constant variable: r722612165 
o|removed call to pure procedure with unused result: "(expand.scm:804) void" 
o|removed call to pure procedure with unused result: "(expand.scm:815) void" 
o|removed call to pure procedure with unused result: "(expand.scm:819) void" 
o|substituted constant variable: prop1511 
o|substituted constant variable: prop1507 
o|removed call to pure procedure with unused result: "(expand.scm:823) void" 
o|removed call to pure procedure with unused result: "(expand.scm:828) void" 
o|removed call to pure procedure with unused result: "(expand.scm:794) void" 
o|inlining procedure: k7619 
o|substituted constant variable: r763512200 
o|inlining procedure: k7619 
o|inlining procedure: k7619 
o|inlining procedure: k7619 
o|substituted constant variable: r765812210 
o|substituted constant variable: prop1596 
o|substituted constant variable: prop1589 
o|inlining procedure: k7619 
o|inlining procedure: k7619 
o|substituted constant variable: prop1570 
o|substituted constant variable: prop1560 
o|removed call to pure procedure with unused result: "(expand.scm:794) void" 
o|substituted constant variable: r785712225 
o|removed call to pure procedure with unused result: "(expand.scm:889) void" 
o|removed call to pure procedure with unused result: "(expand.scm:894) void" 
o|removed call to pure procedure with unused result: "(expand.scm:896) void" 
o|removed call to pure procedure with unused result: "(expand.scm:901) void" 
o|substituted constant variable: prop1654 
o|removed call to pure procedure with unused result: "(expand.scm:892) void" 
o|removed side-effect free assignment to unused variable: %append2443 
o|removed side-effect free assignment to unused variable: %apply2444 
o|substituted constant variable: r845112244 
o|substituted constant variable: r904012270 
o|substituted constant variable: r920712279 
o|substituted constant variable: r928712284 
o|substituted constant variable: r927512286 
o|substituted constant variable: r930312288 
o|substituted constant variable: r932712290 
o|substituted constant variable: r940012293 
o|substituted constant variable: r965512309 
o|substituted constant variable: r976312316 
o|substituted constant variable: r995812323 
o|substituted constant variable: r1011212334 
o|substituted constant variable: r1077512364 
o|substituted constant variable: r1128312381 
o|substituted constant variable: r1097912382 
o|substituted constant variable: r1133612383 
o|substituted constant variable: r1138812385 
o|substituted constant variable: prop1803 
o|substituted constant variable: r1175012395 
o|substituted constant variable: r1175012395 
o|substituted constant variable: prop1773 
o|simplifications: ((let . 2)) 
o|replaced variables: 67 
o|removed binding forms: 1517 
o|inlining procedure: k3655 
o|contracted procedure: k3700 
o|substituted constant variable: prop40312411 
o|substituted constant variable: prop40312417 
o|contracted procedure: k4306 
o|contracted procedure: k4309 
o|contracted procedure: k4436 
o|removed call to pure procedure with unused result: "(expand.scm:246) void" 
o|contracted procedure: k4504 
o|inlining procedure: k5221 
o|inlining procedure: k5221 
o|contracted procedure: k5863 
o|contracted procedure: k7517 
o|contracted procedure: k7554 
o|contracted procedure: k7565 
o|contracted procedure: k7584 
o|contracted procedure: k7601 
o|contracted procedure: k7622 
o|substituted constant variable: r762012532 
o|removed call to pure procedure with unused result: "(expand.scm:794) void" 
o|substituted constant variable: r762012537 
o|removed call to pure procedure with unused result: "(expand.scm:794) void" 
o|substituted constant variable: r762012546 
o|removed call to pure procedure with unused result: "(expand.scm:794) void" 
o|substituted constant variable: r762012551 
o|removed call to pure procedure with unused result: "(expand.scm:794) void" 
o|substituted constant variable: r762012556 
o|removed call to pure procedure with unused result: "(expand.scm:794) void" 
o|substituted constant variable: r762012561 
o|removed call to pure procedure with unused result: "(expand.scm:794) void" 
o|contracted procedure: k7850 
o|contracted procedure: k7936 
o|contracted procedure: k7963 
o|contracted procedure: k7979 
o|contracted procedure: k7988 
o|contracted procedure: k7951 
o|inlining procedure: k9194 
o|inlining procedure: k9194 
o|inlining procedure: k9542 
o|inlining procedure: k9542 
o|replaced variables: 50 
o|removed binding forms: 165 
o|contracted procedure: k3684 
o|contracted procedure: k3692 
o|contracted procedure: k3697 
o|contracted procedure: k3745 
o|contracted procedure: k3750 
o|contracted procedure: k3866 
o|contracted procedure: k4049 
o|contracted procedure: k443611990 
o|substituted constant variable: r557212469 
o|contracted procedure: k7545 
o|contracted procedure: k762212536 
o|substituted constant variable: result153312533 
o|contracted procedure: k762212541 
o|substituted constant variable: result153312538 
o|contracted procedure: k762212550 
o|substituted constant variable: result153312547 
o|contracted procedure: k762212555 
o|substituted constant variable: result153312552 
o|contracted procedure: k7723 
o|contracted procedure: k7731 
o|contracted procedure: k7755 
o|contracted procedure: k7764 
o|contracted procedure: k762212560 
o|substituted constant variable: result153312557 
o|contracted procedure: k762212565 
o|substituted constant variable: result153312562 
o|inlining procedure: "(expand.scm:850) lookup21473" 
o|inlining procedure: "(expand.scm:847) lookup21473" 
o|contracted procedure: k7971 
o|substituted constant variable: r919512695 
o|substituted constant variable: r919512696 
o|contracted procedure: k11624 
o|contracted procedure: k11733 
o|replaced variables: 4 
o|removed binding forms: 105 
o|removed conditional forms: 2 
o|removed side-effect free assignment to unused variable: lookup21473 
o|replaced variables: 15 
o|removed binding forms: 21 
o|replaced variables: 10 
o|removed binding forms: 13 
o|inlining procedure: k3687 
o|inlining procedure: k3687 
o|replaced variables: 2 
o|removed binding forms: 3 
o|replaced variables: 1 
o|removed binding forms: 3 
o|replaced variables: 4 
o|removed binding forms: 1 
o|removed binding forms: 3 
o|simplifications: ((if . 50) (##core#call . 994)) 
o|  call simplifications:
o|    number?
o|    eof-object?
o|    fx-	2
o|    cdddr
o|    cadddr	2
o|    cddddr
o|    >=
o|    +	3
o|    =
o|    -
o|    <=
o|    boolean?
o|    char?	2
o|    cdar	2
o|    ##sys#immediate?
o|    vector-ref	5
o|    fx<	2
o|    not	4
o|    fx=	7
o|    memq	9
o|    caddr	12
o|    length	11
o|    fx<=	2
o|    ##sys#call-with-values
o|    cddr	10
o|    ##sys#list	163
o|    ##sys#cons	87
o|    list?	5
o|    cadr	36
o|    values	8
o|    ##sys#apply	2
o|    memv
o|    equal?	2
o|    string?	3
o|    ##sys#make-structure	2
o|    apply	2
o|    list	13
o|    set-car!	4
o|    procedure?
o|    ##sys#structure?	2
o|    caar	9
o|    eq?	74
o|    null?	51
o|    car	65
o|    ##sys#check-list	14
o|    assq	12
o|    symbol?	42
o|    vector?	13
o|    fx>=	5
o|    fx+	4
o|    cons	65
o|    ##sys#setslot	19
o|    pair?	88
o|    ##sys#slot	58
o|    ##sys#size	5
o|    fx>	5
o|    char=?
o|    cdr	49
o|contracted procedure: k3679 
o|contracted procedure: k3703 
o|contracted procedure: k3706 
o|contracted procedure: k3712 
o|contracted procedure: k3728 
o|contracted procedure: k3740 
o|contracted procedure: k3765 
o|contracted procedure: k3771 
o|contracted procedure: k3774 
o|contracted procedure: k3802 
o|contracted procedure: k3778 
o|contracted procedure: k3781 
o|contracted procedure: k3784 
o|contracted procedure: k3808 
o|contracted procedure: k3811 
o|contracted procedure: k3852 
o|contracted procedure: k3818 
o|contracted procedure: k3830 
o|contracted procedure: k3833 
o|contracted procedure: k3840 
o|contracted procedure: k3848 
o|contracted procedure: k3878 
o|contracted procedure: k3881 
o|contracted procedure: k3942 
o|contracted procedure: k3905 
o|contracted procedure: k3935 
o|contracted procedure: k3939 
o|contracted procedure: k3931 
o|contracted procedure: k3908 
o|contracted procedure: k3919 
o|contracted procedure: k3923 
o|contracted procedure: k3979 
o|contracted procedure: k3954 
o|contracted procedure: k3972 
o|contracted procedure: k3976 
o|contracted procedure: k3957 
o|contracted procedure: k3964 
o|contracted procedure: k3968 
o|contracted procedure: k3985 
o|contracted procedure: k3988 
o|contracted procedure: k4000 
o|contracted procedure: k4003 
o|contracted procedure: k4014 
o|contracted procedure: k4026 
o|contracted procedure: k4111 
o|contracted procedure: k4060 
o|contracted procedure: k4078 
o|contracted procedure: k4107 
o|contracted procedure: k4097 
o|contracted procedure: k4151 
o|contracted procedure: k4123 
o|contracted procedure: k4129 
o|contracted procedure: k4142 
o|contracted procedure: k4174 
o|contracted procedure: k4177 
o|contracted procedure: k4185 
o|contracted procedure: k4196 
o|contracted procedure: k4192 
o|contracted procedure: k4221 
o|contracted procedure: k4240 
o|contracted procedure: k4269 
o|contracted procedure: k4291 
o|contracted procedure: k4275 
o|contracted procedure: k4347 
o|contracted procedure: k4337 
o|contracted procedure: k4355 
o|contracted procedure: k4364 
o|contracted procedure: k4367 
o|contracted procedure: k4381 
o|contracted procedure: k4391 
o|contracted procedure: k4395 
o|contracted procedure: k4401 
o|contracted procedure: k4407 
o|contracted procedure: k4415 
o|contracted procedure: k4422 
o|contracted procedure: k4439 
o|contracted procedure: k4539 
o|contracted procedure: k4519 
o|contracted procedure: k4530 
o|contracted procedure: k4551 
o|contracted procedure: k4559 
o|contracted procedure: k4565 
o|contracted procedure: k4574 
o|contracted procedure: k4580 
o|contracted procedure: k4586 
o|contracted procedure: k4592 
o|contracted procedure: k4671 
o|contracted procedure: k4678 
o|contracted procedure: k4662 
o|contracted procedure: k4658 
o|contracted procedure: k4654 
o|contracted procedure: k4650 
o|contracted procedure: k4607 
o|contracted procedure: k4603 
o|contracted procedure: k4599 
o|contracted procedure: k4620 
o|contracted procedure: k4646 
o|contracted procedure: k4642 
o|contracted procedure: k4623 
o|contracted procedure: k4634 
o|contracted procedure: k4687 
o|contracted procedure: k4713 
o|contracted procedure: k4709 
o|contracted procedure: k4690 
o|contracted procedure: k4701 
o|contracted procedure: k4733 
o|contracted procedure: k4749 
o|contracted procedure: k4763 
o|contracted procedure: k4771 
o|contracted procedure: k4844 
o|contracted procedure: k4799 
o|contracted procedure: k4838 
o|contracted procedure: k4802 
o|contracted procedure: k4832 
o|contracted procedure: k4805 
o|contracted procedure: k4850 
o|contracted procedure: k4872 
o|contracted procedure: k4875 
o|contracted procedure: k4881 
o|contracted procedure: k4892 
o|contracted procedure: k4947 
o|contracted procedure: k4964 
o|contracted procedure: k4993 
o|contracted procedure: k4997 
o|contracted procedure: k4989 
o|contracted procedure: k4985 
o|contracted procedure: k4981 
o|contracted procedure: k4977 
o|inlining procedure: k4961 
o|contracted procedure: k5007 
o|contracted procedure: k5022 
o|contracted procedure: k5018 
o|contracted procedure: k5014 
o|inlining procedure: k4961 
o|contracted procedure: k5041 
o|contracted procedure: k5037 
o|contracted procedure: k5033 
o|inlining procedure: k4961 
o|inlining procedure: k5053 
o|inlining procedure: k5053 
o|contracted procedure: k5072 
o|contracted procedure: k5079 
o|contracted procedure: k5082 
o|contracted procedure: k5099 
o|contracted procedure: k5114 
o|contracted procedure: k5110 
o|contracted procedure: k5106 
o|contracted procedure: k5122 
o|contracted procedure: k5129 
o|contracted procedure: k5140 
o|contracted procedure: k5136 
o|contracted procedure: k5126 
o|contracted procedure: k4923 
o|contracted procedure: k5093 
o|contracted procedure: k5089 
o|contracted procedure: k5167 
o|contracted procedure: k5170 
o|contracted procedure: k5181 
o|contracted procedure: k5193 
o|contracted procedure: k5209 
o|contracted procedure: k5215 
o|contracted procedure: k5508 
o|contracted procedure: k5238 
o|contracted procedure: k5244 
o|contracted procedure: k5251 
o|contracted procedure: k5260 
o|contracted procedure: k5276 
o|contracted procedure: k5282 
o|contracted procedure: k5295 
o|contracted procedure: k5307 
o|contracted procedure: k5313 
o|contracted procedure: k5327 
o|contracted procedure: k5336 
o|contracted procedure: k5355 
o|contracted procedure: k5361 
o|contracted procedure: k5368 
o|contracted procedure: k5374 
o|contracted procedure: k5385 
o|contracted procedure: k5381 
o|contracted procedure: k5391 
o|contracted procedure: k5405 
o|contracted procedure: k5401 
o|contracted procedure: k5423 
o|contracted procedure: k5432 
o|contracted procedure: k5439 
o|contracted procedure: k5445 
o|contracted procedure: k5455 
o|contracted procedure: k5467 
o|contracted procedure: k5473 
o|contracted procedure: k5480 
o|contracted procedure: k5491 
o|contracted procedure: k5504 
o|contracted procedure: k5536 
o|contracted procedure: k5544 
o|contracted procedure: k5540 
o|contracted procedure: k5561 
o|contracted procedure: k5564 
o|contracted procedure: k5574 
o|contracted procedure: k5580 
o|contracted procedure: k5587 
o|contracted procedure: k5571 
o|contracted procedure: k5633 
o|contracted procedure: k5596 
o|contracted procedure: k5626 
o|contracted procedure: k5630 
o|contracted procedure: k5622 
o|contracted procedure: k5599 
o|contracted procedure: k5610 
o|contracted procedure: k5614 
o|contracted procedure: k5645 
o|contracted procedure: k5648 
o|contracted procedure: k5660 
o|contracted procedure: k5663 
o|contracted procedure: k5674 
o|contracted procedure: k5686 
o|contracted procedure: k6563 
o|contracted procedure: k5698 
o|contracted procedure: k6557 
o|contracted procedure: k5701 
o|contracted procedure: k6551 
o|contracted procedure: k5704 
o|contracted procedure: k5713 
o|contracted procedure: k5722 
o|contracted procedure: k5737 
o|contracted procedure: k5752 
o|contracted procedure: k6087 
o|contracted procedure: k5779 
o|contracted procedure: k5854 
o|contracted procedure: k5797 
o|contracted procedure: k5818 
o|contracted procedure: k5831 
o|contracted procedure: k5834 
o|contracted procedure: k5841 
o|contracted procedure: k5876 
o|contracted procedure: k5882 
o|contracted procedure: k5867 
o|contracted procedure: k5961 
o|contracted procedure: k5924 
o|contracted procedure: k5927 
o|contracted procedure: k5938 
o|contracted procedure: k5942 
o|contracted procedure: k5954 
o|contracted procedure: k5958 
o|contracted procedure: k6010 
o|contracted procedure: k5973 
o|contracted procedure: k6003 
o|contracted procedure: k6007 
o|contracted procedure: k5999 
o|contracted procedure: k5976 
o|contracted procedure: k5987 
o|contracted procedure: k5991 
o|contracted procedure: k6022 
o|contracted procedure: k6048 
o|contracted procedure: k6044 
o|contracted procedure: k6025 
o|contracted procedure: k6036 
o|contracted procedure: k6057 
o|contracted procedure: k6064 
o|contracted procedure: k6084 
o|contracted procedure: k6117 
o|contracted procedure: k6113 
o|contracted procedure: k6133 
o|contracted procedure: k6159 
o|contracted procedure: k6155 
o|contracted procedure: k6136 
o|contracted procedure: k6147 
o|contracted procedure: k6278 
o|inlining procedure: k6184 
o|contracted procedure: k6235 
o|contracted procedure: k6191 
o|contracted procedure: k6210 
o|contracted procedure: k6206 
o|contracted procedure: k6202 
o|contracted procedure: k6223 
o|inlining procedure: k6184 
o|contracted procedure: k6274 
o|contracted procedure: k6241 
o|contracted procedure: k6268 
o|contracted procedure: k6247 
o|contracted procedure: k6263 
o|contracted procedure: k6253 
o|contracted procedure: k6545 
o|contracted procedure: k6299 
o|contracted procedure: k6540 
o|contracted procedure: k6303 
o|contracted procedure: k6531 
o|contracted procedure: k6333 
o|contracted procedure: k6436 
o|contracted procedure: k6432 
o|contracted procedure: k6384 
o|contracted procedure: k6398 
o|contracted procedure: k6408 
o|contracted procedure: k6426 
o|contracted procedure: k6420 
o|contracted procedure: k6416 
o|contracted procedure: k6412 
o|contracted procedure: k6352 
o|contracted procedure: k6370 
o|contracted procedure: k6363 
o|contracted procedure: k6360 
o|inlining procedure: k6356 
o|inlining procedure: k6356 
o|contracted procedure: k6373 
o|contracted procedure: k6476 
o|contracted procedure: k6464 
o|contracted procedure: k6472 
o|contracted procedure: k6468 
o|contracted procedure: k6493 
o|contracted procedure: k6499 
o|contracted procedure: k6502 
o|contracted procedure: k6514 
o|contracted procedure: k6524 
o|contracted procedure: k6537 
o|contracted procedure: k6569 
o|contracted procedure: k6651 
o|contracted procedure: k6628 
o|contracted procedure: k6647 
o|contracted procedure: k6590 
o|contracted procedure: k6602 
o|contracted procedure: k6611 
o|contracted procedure: k6619 
o|contracted procedure: k6615 
o|contracted procedure: k6703 
o|contracted procedure: k6669 
o|contracted procedure: k6678 
o|contracted procedure: k6697 
o|contracted procedure: k6693 
o|contracted procedure: k6689 
o|contracted procedure: k6786 
o|contracted procedure: k6817 
o|contracted procedure: k6843 
o|contracted procedure: k6855 
o|contracted procedure: k6935 
o|contracted procedure: k6879 
o|contracted procedure: k6894 
o|contracted procedure: k6914 
o|contracted procedure: k6931 
o|contracted procedure: k6739 
o|contracted procedure: k6748 
o|contracted procedure: k6776 
o|contracted procedure: k6754 
o|contracted procedure: k6944 
o|contracted procedure: k6962 
o|contracted procedure: k6969 
o|contracted procedure: k6980 
o|contracted procedure: k7441 
o|contracted procedure: k6995 
o|contracted procedure: k7435 
o|contracted procedure: k6998 
o|contracted procedure: k7420 
o|contracted procedure: k7004 
o|contracted procedure: k7061 
o|contracted procedure: k7070 
o|contracted procedure: k7083 
o|contracted procedure: k7090 
o|contracted procedure: k7117 
o|contracted procedure: k7126 
o|contracted procedure: k7146 
o|contracted procedure: k7149 
o|contracted procedure: k7152 
o|contracted procedure: k7234 
o|contracted procedure: k7155 
o|contracted procedure: k7170 
o|contracted procedure: k7176 
o|contracted procedure: k7189 
o|contracted procedure: k7193 
o|contracted procedure: k7196 
o|contracted procedure: k7219 
o|contracted procedure: k7215 
o|contracted procedure: k7222 
o|contracted procedure: k7228 
o|contracted procedure: k7243 
o|contracted procedure: k7256 
o|contracted procedure: k7262 
o|contracted procedure: k7268 
o|contracted procedure: k7274 
o|contracted procedure: k7283 
o|contracted procedure: k7292 
o|contracted procedure: k7301 
o|contracted procedure: k7310 
o|contracted procedure: k7319 
o|contracted procedure: k7328 
o|contracted procedure: k7350 
o|contracted procedure: k7353 
o|contracted procedure: k7416 
o|contracted procedure: k7412 
o|contracted procedure: k7404 
o|contracted procedure: k7408 
o|contracted procedure: k7426 
o|contracted procedure: k7456 
o|contracted procedure: k7468 
o|contracted procedure: k7489 
o|contracted procedure: k7613 
o|contracted procedure: k7509 
o|contracted procedure: k7537 
o|contracted procedure: k7562 
o|contracted procedure: k7558 
o|contracted procedure: k7573 
o|contracted procedure: k7569 
o|contracted procedure: k7592 
o|contracted procedure: k7588 
o|contracted procedure: k7609 
o|contracted procedure: k7605 
o|contracted procedure: k7625 
o|contracted procedure: k7631 
o|contracted procedure: k7654 
o|contracted procedure: k7660 
o|contracted procedure: k7663 
o|contracted procedure: k7710 
o|contracted procedure: k7669 
o|contracted procedure: k7681 
o|contracted procedure: k7684 
o|contracted procedure: k7691 
o|contracted procedure: k7699 
o|contracted procedure: k7703 
o|contracted procedure: k7838 
o|contracted procedure: k7718 
o|contracted procedure: k7740 
o|contracted procedure: k7746 
o|contracted procedure: k7758 
o|contracted procedure: k7770 
o|contracted procedure: k7782 
o|contracted procedure: k7795 
o|contracted procedure: k7798 
o|contracted procedure: k7810 
o|contracted procedure: k7859 
o|contracted procedure: k7875 
o|contracted procedure: k7865 
o|contracted procedure: k7884 
o|contracted procedure: k7905 
o|contracted procedure: k7992 
o|contracted procedure: k7960 
o|contracted procedure: k8074 
o|contracted procedure: k8099 
o|contracted procedure: k8095 
o|contracted procedure: k8119 
o|contracted procedure: k8115 
o|contracted procedure: k8136 
o|contracted procedure: k8122 
o|contracted procedure: k8129 
o|contracted procedure: k8318 
o|contracted procedure: k8396 
o|contracted procedure: k8392 
o|contracted procedure: k8326 
o|contracted procedure: k8330 
o|contracted procedure: k8322 
o|contracted procedure: k8314 
o|contracted procedure: k8338 
o|contracted procedure: k8353 
o|contracted procedure: k8349 
o|contracted procedure: k8345 
o|contracted procedure: k8362 
o|contracted procedure: k8365 
o|contracted procedure: k8376 
o|contracted procedure: k8388 
o|contracted procedure: k8408 
o|contracted procedure: k8411 
o|contracted procedure: k8418 
o|contracted procedure: k8422 
o|contracted procedure: k8447 
o|contracted procedure: k8453 
o|contracted procedure: k8460 
o|contracted procedure: k8471 
o|contracted procedure: k8477 
o|contracted procedure: k8492 
o|contracted procedure: k8488 
o|contracted procedure: k8484 
o|contracted procedure: k8507 
o|contracted procedure: k8558 
o|contracted procedure: k8518 
o|contracted procedure: k8530 
o|contracted procedure: k8526 
o|contracted procedure: k8522 
o|contracted procedure: k8514 
o|contracted procedure: k8546 
o|contracted procedure: k8552 
o|contracted procedure: k8564 
o|contracted procedure: k8603 
o|contracted procedure: k8575 
o|contracted procedure: k8587 
o|contracted procedure: k8583 
o|contracted procedure: k8579 
o|contracted procedure: k8571 
o|contracted procedure: k8595 
o|contracted procedure: k8609 
o|contracted procedure: k8623 
o|contracted procedure: k8619 
o|contracted procedure: k8634 
o|contracted procedure: k8630 
o|contracted procedure: k8637 
o|contracted procedure: k8660 
o|contracted procedure: k8762 
o|contracted procedure: k8758 
o|contracted procedure: k8668 
o|contracted procedure: k8754 
o|contracted procedure: k8750 
o|contracted procedure: k8676 
o|contracted procedure: k8742 
o|contracted procedure: k8746 
o|contracted procedure: k8684 
o|contracted procedure: k8735 
o|contracted procedure: k8724 
o|contracted procedure: k8692 
o|contracted procedure: k8700 
o|contracted procedure: k8696 
o|contracted procedure: k8688 
o|contracted procedure: k8680 
o|contracted procedure: k8672 
o|contracted procedure: k8664 
o|contracted procedure: k8656 
o|contracted procedure: k8716 
o|contracted procedure: k8720 
o|contracted procedure: k8712 
o|contracted procedure: k8708 
o|contracted procedure: k8766 
o|contracted procedure: k8770 
o|contracted procedure: k8779 
o|contracted procedure: k8785 
o|contracted procedure: k8792 
o|contracted procedure: k8864 
o|contracted procedure: k8805 
o|contracted procedure: k8856 
o|contracted procedure: k8808 
o|contracted procedure: k8823 
o|contracted procedure: k8827 
o|contracted procedure: k8842 
o|contracted procedure: k8853 
o|contracted procedure: k8849 
o|contracted procedure: k8839 
o|contracted procedure: k8870 
o|contracted procedure: k8887 
o|contracted procedure: k8893 
o|contracted procedure: k8899 
o|contracted procedure: k8910 
o|contracted procedure: k8919 
o|contracted procedure: k8922 
o|contracted procedure: k8938 
o|contracted procedure: k8931 
o|contracted procedure: k8945 
o|contracted procedure: k8957 
o|contracted procedure: k8966 
o|contracted procedure: k8984 
o|contracted procedure: k9008 
o|substituted constant variable: g13658 
o|contracted procedure: k9015 
o|contracted procedure: k9019 
o|contracted procedure: k9033 
o|contracted procedure: k9029 
o|contracted procedure: k9036 
o|contracted procedure: k9042 
o|contracted procedure: k9048 
o|contracted procedure: k9061 
o|contracted procedure: k9067 
o|contracted procedure: k9088 
o|contracted procedure: k9111 
o|contracted procedure: k9117 
o|contracted procedure: k9124 
o|contracted procedure: k9137 
o|contracted procedure: k9141 
o|contracted procedure: k9149 
o|contracted procedure: k9155 
o|contracted procedure: k9172 
o|contracted procedure: k9188 
o|contracted procedure: k9217 
o|contracted procedure: k9203 
o|contracted procedure: k9213 
o|contracted procedure: k9194 
o|contracted procedure: k9230 
o|contracted procedure: k9238 
o|contracted procedure: k9244 
o|contracted procedure: k9261 
o|contracted procedure: k9296 
o|contracted procedure: k9305 
o|contracted procedure: k9311 
o|contracted procedure: k9318 
o|contracted procedure: k9340 
o|contracted procedure: k9350 
o|contracted procedure: k9366 
o|contracted procedure: k9369 
o|contracted procedure: k9424 
o|contracted procedure: k9383 
o|contracted procedure: k9402 
o|contracted procedure: k9405 
o|contracted procedure: k9412 
o|contracted procedure: k9505 
o|contracted procedure: k9433 
o|contracted procedure: k9470 
o|contracted procedure: k9444 
o|contracted procedure: k9466 
o|contracted procedure: k9456 
o|contracted procedure: k9473 
o|contracted procedure: k9485 
o|contracted procedure: k9495 
o|contracted procedure: k9499 
o|contracted procedure: k9537 
o|contracted procedure: k9548 
o|contracted procedure: k9556 
o|contracted procedure: k9560 
o|contracted procedure: k9587 
o|contracted procedure: k9607 
o|contracted procedure: k9617 
o|contracted procedure: k9613 
o|contracted procedure: k9627 
o|contracted procedure: k9642 
o|contracted procedure: k9645 
o|contracted procedure: k9651 
o|contracted procedure: k9657 
o|contracted procedure: k9690 
o|contracted procedure: k9686 
o|contracted procedure: k9682 
o|contracted procedure: k9670 
o|contracted procedure: k9678 
o|contracted procedure: k9674 
o|contracted procedure: k9711 
o|contracted procedure: k9727 
o|contracted procedure: k9723 
o|contracted procedure: k9775 
o|contracted procedure: k9735 
o|contracted procedure: k9739 
o|contracted procedure: k9756 
o|contracted procedure: k9752 
o|contracted procedure: k9742 
o|contracted procedure: k9759 
o|contracted procedure: k9765 
o|contracted procedure: k9783 
o|contracted procedure: k9786 
o|contracted procedure: k9797 
o|contracted procedure: k9823 
o|contracted procedure: k9815 
o|contracted procedure: k9833 
o|contracted procedure: k9846 
o|contracted procedure: k9859 
o|contracted procedure: k9881 
o|contracted procedure: k9890 
o|contracted procedure: k10014 
o|contracted procedure: k9909 
o|contracted procedure: k9919 
o|contracted procedure: k9928 
o|contracted procedure: k9941 
o|contracted procedure: k9990 
o|contracted procedure: k9966 
o|contracted procedure: k9979 
o|contracted procedure: k10007 
o|contracted procedure: k10026 
o|contracted procedure: k10038 
o|contracted procedure: k10050 
o|contracted procedure: k10076 
o|contracted procedure: k10072 
o|contracted procedure: k10053 
o|contracted procedure: k10064 
o|contracted procedure: k10139 
o|contracted procedure: k10088 
o|contracted procedure: k10135 
o|contracted procedure: k10101 
o|contracted procedure: k10114 
o|contracted procedure: k10160 
o|contracted procedure: k10156 
o|contracted procedure: k10193 
o|contracted procedure: k10189 
o|contracted procedure: k10185 
o|contracted procedure: k10181 
o|contracted procedure: k10228 
o|contracted procedure: k10382 
o|contracted procedure: k10251 
o|contracted procedure: k10264 
o|contracted procedure: k10277 
o|contracted procedure: k10285 
o|contracted procedure: k10298 
o|contracted procedure: k10306 
o|contracted procedure: k10318 
o|contracted procedure: k10328 
o|contracted procedure: k10347 
o|contracted procedure: k10339 
o|contracted procedure: k10355 
o|contracted procedure: k10359 
o|contracted procedure: k10373 
o|contracted procedure: k10408 
o|contracted procedure: k10404 
o|contracted procedure: k10400 
o|contracted procedure: k10422 
o|contracted procedure: k10453 
o|contracted procedure: k10428 
o|contracted procedure: k10449 
o|contracted procedure: k10443 
o|contracted procedure: k10439 
o|contracted procedure: k10435 
o|contracted procedure: k10471 
o|contracted procedure: k10484 
o|contracted procedure: k10497 
o|contracted procedure: k10500 
o|contracted procedure: k10528 
o|contracted procedure: k10539 
o|contracted procedure: k10638 
o|contracted procedure: k10544 
o|contracted procedure: k10560 
o|contracted procedure: k10556 
o|contracted procedure: k10548 
o|contracted procedure: k10535 
o|contracted procedure: k10599 
o|contracted procedure: k10602 
o|contracted procedure: k10613 
o|contracted procedure: k10625 
o|contracted procedure: k10587 
o|contracted procedure: k10583 
o|contracted procedure: k10569 
o|contracted procedure: k10577 
o|contracted procedure: k10628 
o|contracted procedure: k10635 
o|contracted procedure: k10650 
o|contracted procedure: k10653 
o|contracted procedure: k10664 
o|contracted procedure: k10676 
o|contracted procedure: k10519 
o|contracted procedure: k10523 
o|contracted procedure: k10689 
o|contracted procedure: k10703 
o|contracted procedure: k10710 
o|contracted procedure: k10727 
o|contracted procedure: k10717 
o|contracted procedure: k10740 
o|contracted procedure: k10950 
o|contracted procedure: k10764 
o|contracted procedure: k10946 
o|contracted procedure: k10780 
o|contracted procedure: k10819 
o|contracted procedure: k10826 
o|contracted procedure: k10840 
o|contracted procedure: k10829 
o|contracted procedure: k10836 
o|contracted procedure: k10896 
o|contracted procedure: k10900 
o|contracted procedure: k10847 
o|contracted procedure: k10865 
o|contracted procedure: k10872 
o|contracted procedure: k10886 
o|contracted procedure: k10875 
o|contracted procedure: k10882 
o|contracted procedure: k10912 
o|contracted procedure: k10915 
o|contracted procedure: k10926 
o|contracted procedure: k10938 
o|contracted procedure: k10942 
o|contracted procedure: k10960 
o|contracted procedure: k11322 
o|contracted procedure: k10984 
o|contracted procedure: k11045 
o|contracted procedure: k11063 
o|contracted procedure: k11053 
o|contracted procedure: k11077 
o|contracted procedure: k11066 
o|contracted procedure: k11073 
o|contracted procedure: k11089 
o|contracted procedure: k11138 
o|contracted procedure: k11134 
o|contracted procedure: k11114 
o|contracted procedure: k11130 
o|contracted procedure: k11122 
o|contracted procedure: k11118 
o|contracted procedure: k11186 
o|contracted procedure: k11154 
o|contracted procedure: k11182 
o|contracted procedure: k11166 
o|contracted procedure: k11178 
o|contracted procedure: k11170 
o|contracted procedure: k11162 
o|contracted procedure: k11158 
o|contracted procedure: k11193 
o|contracted procedure: k11197 
o|contracted procedure: k11206 
o|contracted procedure: k11213 
o|contracted procedure: k11229 
o|contracted procedure: k11218 
o|contracted procedure: k11225 
o|contracted procedure: k11234 
o|contracted procedure: k11240 
o|contracted procedure: k11246 
o|contracted procedure: k11252 
o|contracted procedure: k11258 
o|contracted procedure: k11270 
o|contracted procedure: k11285 
o|contracted procedure: k11296 
o|contracted procedure: k11318 
o|contracted procedure: k11332 
o|contracted procedure: k11338 
o|contracted procedure: k11341 
o|contracted procedure: k11348 
o|contracted procedure: k11374 
o|contracted procedure: k11358 
o|contracted procedure: k11366 
o|contracted procedure: k11362 
o|contracted procedure: k11384 
o|contracted procedure: k11390 
o|contracted procedure: k11393 
o|contracted procedure: k11400 
o|contracted procedure: k11407 
o|contracted procedure: k11424 
o|contracted procedure: k11427 
o|contracted procedure: k11433 
o|contracted procedure: k11440 
o|contracted procedure: k11450 
o|contracted procedure: k11477 
o|contracted procedure: k11499 
o|contracted procedure: k11521 
o|contracted procedure: k11543 
o|contracted procedure: k11571 
o|contracted procedure: k11581 
o|contracted procedure: k11595 
o|contracted procedure: k11584 
o|contracted procedure: k11591 
o|contracted procedure: k11605 
o|contracted procedure: k11698 
o|contracted procedure: k11680 
o|contracted procedure: k11676 
o|contracted procedure: k11672 
o|contracted procedure: k11694 
o|contracted procedure: k11685 
o|contracted procedure: k11627 
o|contracted procedure: k11640 
o|contracted procedure: k11717 
o|contracted procedure: k11817 
o|contracted procedure: k11813 
o|contracted procedure: k11773 
o|contracted procedure: k11797 
o|contracted procedure: k11807 
o|contracted procedure: k11803 
o|contracted procedure: k11793 
o|contracted procedure: k11736 
o|contracted procedure: k11752 
o|contracted procedure: k11834 
o|contracted procedure: k11851 
o|contracted procedure: k11868 
o|contracted procedure: k11885 
o|contracted procedure: k11902 
o|simplifications: ((let . 183)) 
o|replaced variables: 2 
o|removed binding forms: 823 
o|inlining procedure: k4006 
o|inlining procedure: k4006 
o|inlining procedure: k4626 
o|inlining procedure: k4626 
o|inlining procedure: k4693 
o|inlining procedure: k4693 
o|inlining procedure: k5118 
o|inlining procedure: k5118 
o|inlining procedure: k5173 
o|inlining procedure: k5173 
o|inlining procedure: k5666 
o|inlining procedure: k5666 
o|inlining procedure: k6028 
o|inlining procedure: k6028 
o|inlining procedure: k6139 
o|inlining procedure: k6139 
o|inlining procedure: k6188 
o|inlining procedure: k8368 
o|inlining procedure: k8368 
o|inlining procedure: k9731 
o|inlining procedure: k9731 
o|inlining procedure: k10056 
o|inlining procedure: k10056 
o|inlining procedure: k10605 
o|inlining procedure: k10605 
o|inlining procedure: k10656 
o|inlining procedure: k10656 
o|inlining procedure: k10918 
o|inlining procedure: k10918 
o|inlining procedure: k11633 
o|replaced variables: 150 
o|removed binding forms: 7 
o|simplifications: ((if . 2)) 
o|replaced variables: 4 
o|removed binding forms: 115 
o|contracted procedure: k10672 
o|replaced variables: 50 
o|removed binding forms: 3 
o|removed binding forms: 13 
o|direct leaf routine/allocation: lookup 0 
o|direct leaf routine/allocation: g509510 0 
o|direct leaf routine/allocation: g12671268 0 
o|direct leaf routine/allocation: g13581359 0 
o|direct leaf routine/allocation: loop1411 0 
o|direct leaf routine/allocation: g15981599 0 
o|direct leaf routine/allocation: g16071608 0 
o|direct leaf routine/allocation: assq-reverse1474 0 
o|direct leaf routine/allocation: g20482057 17 
o|contracted procedure: "(expand.scm:92) k3676" 
o|contracted procedure: "(expand.scm:168) k4166" 
o|contracted procedure: "(expand.scm:180) k4202" 
o|contracted procedure: "(expand.scm:184) k4218" 
o|contracted procedure: "(expand.scm:186) k4227" 
o|contracted procedure: "(expand.scm:271) k4562" 
o|contracted procedure: "(expand.scm:273) k4775" 
o|contracted procedure: "(expand.scm:473) k5710" 
o|converted assignments to bindings: (loop1411) 
o|contracted procedure: "(expand.scm:807) k7526" 
o|contracted procedure: "(expand.scm:868) k7823" 
o|contracted procedure: "(expand.scm:868) k7829" 
o|contracted procedure: "(expand.scm:887) k7925" 
o|contracted procedure: "(expand.scm:888) k7928" 
o|contracted procedure: "(expand.scm:1239) k10934" 
o|simplifications: ((let . 1) (if . 2)) 
o|removed binding forms: 14 
o|contracted procedure: "(expand.scm:778) k7340" 
o|replaced variables: 12 
o|removed binding forms: 1 
o|removed binding forms: 6 
o|direct leaf routine/allocation: comp993 0 
o|contracted procedure: "(expand.scm:491) k5844" 
o|contracted procedure: "(expand.scm:552) k6321" 
o|contracted procedure: "(expand.scm:579) k6442" 
o|contracted procedure: "(expand.scm:582) k6454" 
o|contracted procedure: "(expand.scm:586) k6482" 
o|simplifications: ((if . 1)) 
o|removed binding forms: 5 
o|replaced variables: 7 
o|removed binding forms: 1 
o|customizable procedures: (loop1758 k11561 check-for-multiple-bindings expand1923 map-loop20422063 k10851 expand2018 expand2085 map-loop21072125 k10552 k10621 map-loop21412159 match-expression g22362237 g22292230 walk2173 walk12174 simplify2175 expand2301 map-loop23092327 err2273 test2274 k9745 g27812788 for-each-loop27802791 loop2758 loop2687 k9022 k8975 doloop26362637 k8612 k8405 map-loop25022519 k8083 loop1821 mirror-rename1475 k7726 k7734 doloop15431544 g14901491 k7548 k7134 test1383 k7158 walk1421 doloop14361437 loop1397 err1384 loop1301 loop1314 loop1331 outstr1312 loop1278 mwalk1254 k6306 fini/syntax995 loop1204 loop21221 k6174 loop1154 map-loop11671184 fini994 foldl10561060 map-loop10331072 k5979 map-loop10811105 k5930 map-loop11171136 k5803 loop1015 expand996 map-loop902919 k5602 map-loop931955 k5241 k5417 k5330 k5288 k5291 macro-alias k5254 loop778 err767 g800809 map-loop794822 k4958 k4970 k4884 loop745 loop731 k4568 k4719 g698699 loop611 expand555 map-loop638656 map-loop665682 call-handler554 tmp13099 tmp23100 k4340 k4374 copy574 loop540 k4087 loop468 g465466 loop1453 map-loop355372 for-each-loop381408 k3911 map-loop418439 doloop331332 walk301 k3670) 
o|calls to known targets: 380 
o|identified direct recursive calls: f_3726 1 
o|identified direct recursive calls: f_3949 1 
o|identified direct recursive calls: f_4264 1 
o|identified direct recursive calls: f_4615 2 
o|identified direct recursive calls: f_4682 2 
o|identified direct recursive calls: f_4942 2 
o|identified direct recursive calls: f_6017 2 
o|identified direct recursive calls: f_6128 2 
o|identified direct recursive calls: f_6104 1 
o|identified direct recursive calls: f_6582 1 
o|identified direct recursive calls: f_6664 1 
o|identified direct recursive calls: f_6743 1 
o|identified direct recursive calls: f_7115 1 
o|identified direct recursive calls: f_7141 1 
o|identified direct recursive calls: f_7463 1 
o|identified direct recursive calls: f_7617 1 
o|identified direct recursive calls: f_7854 1 
o|identified direct recursive calls: f_7879 1 
o|identified direct recursive calls: f_9003 1 
o|identified direct recursive calls: f_9397 1 
o|identified direct recursive calls: f_10045 2 
o|identified direct recursive calls: f_10645 2 
o|identified direct recursive calls: f_10698 1 
o|identified direct recursive calls: f_10907 2 
o|fast box initializations: 70 
o|fast global references: 32 
o|fast global assignments: 4 
o|dropping unused closure argument: f_6579 
o|dropping unused closure argument: f_7854 
o|dropping unused closure argument: f_8066 
o|dropping unused closure argument: f_7115 
o|dropping unused closure argument: f_3662 
o|dropping unused closure argument: f_3645 
*/
/* end of file */
