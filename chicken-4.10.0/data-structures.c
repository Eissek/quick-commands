/* Generated from data-structures.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:03
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: data-structures.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file data-structures.c
   unit: data_2dstructures
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[121];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,14),40,105,100,101,110,116,105,116,121,32,120,54,52,41,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,112,114,101,100,115,54,57,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,12),40,102,95,49,51,54,49,32,120,54,55,41,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,19),40,99,111,110,106,111,105,110,32,46,32,112,114,101,100,115,54,54,41,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,112,114,101,100,115,56,49,41,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,12),40,102,95,49,51,57,52,32,120,55,57,41,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,19),40,100,105,115,106,111,105,110,32,46,32,112,114,101,100,115,55,56,41,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,14),40,102,95,49,52,52,48,32,46,32,95,57,50,41,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,14),40,102,95,49,52,52,50,32,46,32,95,57,51,41,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,19),40,99,111,110,115,116,97,110,116,108,121,32,46,32,120,115,57,48,41,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,16),40,102,95,49,52,53,50,32,120,57,54,32,121,57,55,41};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,13),40,102,108,105,112,32,112,114,111,99,57,53,41,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,18),40,102,95,49,52,54,48,32,46,32,97,114,103,115,49,48,48,41,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,16),40,99,111,109,112,108,101,109,101,110,116,32,112,57,57,41};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,7),40,97,49,52,56,54,41,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,18),40,102,95,49,52,56,49,32,46,32,97,114,103,115,49,48,54,41,0,0,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,20),40,114,101,99,32,102,48,49,48,52,32,46,32,102,110,115,49,48,53,41,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,18),40,99,111,109,112,111,115,101,32,46,32,102,110,115,49,48,50,41,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,13),40,102,95,49,53,51,50,32,120,49,49,52,41,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,102,110,115,49,49,49,41,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,12),40,111,32,46,32,102,110,115,49,48,57,41,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,49,50,50,41,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,15),40,102,95,49,53,52,55,32,108,115,116,49,50,48,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,18),40,108,105,115,116,45,111,102,63,32,112,114,101,100,49,49,57,41,0,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,15),40,102,95,49,53,57,51,32,46,32,95,49,51,52,41,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,32,112,114,111,99,115,49,51,55,41,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,18),40,102,95,49,54,48,55,32,46,32,97,114,103,115,49,51,53,41,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,17),40,101,97,99,104,32,46,32,112,114,111,99,115,49,50,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,11),40,97,110,121,63,32,120,49,52,51,41,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,12),40,97,116,111,109,63,32,120,49,52,53,41,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,17),40,116,97,105,108,63,32,120,49,52,55,32,121,49,52,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,110,115,49,54,52,41,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,25),40,105,110,116,101,114,115,112,101,114,115,101,32,108,115,116,49,54,49,32,120,49,54,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,49,55,48,41,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,16),40,98,117,116,108,97,115,116,32,108,115,116,49,54,56,41};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,23),40,108,111,111,112,32,108,105,115,116,115,49,55,56,32,114,101,115,116,49,55,57,41,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,21),40,102,108,97,116,116,101,110,32,46,32,108,105,115,116,115,48,49,55,54,41,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,28),40,100,111,108,111,111,112,49,57,56,32,104,100,50,48,48,32,116,108,50,48,49,32,99,50,48,50,41,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,108,115,116,49,57,50,32,105,49,57,51,41,0,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,18),40,99,104,111,112,32,108,115,116,49,56,56,32,110,49,56,57,41,0,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,108,115,116,115,50,49,50,41,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,23),40,106,111,105,110,32,108,115,116,115,50,48,56,32,46,32,108,115,116,50,48,57,41,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,21),40,108,111,111,112,32,98,108,115,116,50,50,54,32,108,115,116,50,50,55,41,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,25),40,99,111,109,112,114,101,115,115,32,98,108,115,116,50,50,50,32,108,115,116,50,50,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,50,53,55,41,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,20),40,102,95,50,48,52,50,32,120,50,53,52,32,108,115,116,50,53,53,41,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,44),40,97,108,105,115,116,45,117,112,100,97,116,101,33,32,120,50,52,48,32,121,50,52,49,32,108,115,116,50,52,50,32,46,32,116,109,112,50,51,57,50,52,51,41,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,50,56,48,41,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,43),40,97,108,105,115,116,45,117,112,100,97,116,101,32,107,50,55,48,32,118,50,55,49,32,108,115,116,50,55,50,32,46,32,116,109,112,50,54,57,50,55,51,41,0,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,51,49,56,41,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,20),40,102,95,50,50,51,52,32,120,51,49,53,32,108,115,116,51,49,54,41,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,35),40,97,108,105,115,116,45,114,101,102,32,120,50,57,55,32,108,115,116,50,57,56,32,46,32,116,109,112,50,57,54,50,57,57,41,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,108,51,51,51,41,0,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,29),40,114,97,115,115,111,99,32,120,51,50,56,32,108,115,116,51,50,57,32,46,32,116,115,116,51,51,48,41,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,107,51,52,57,41,0,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,29),40,114,101,118,45,115,116,114,105,110,103,45,97,112,112,101,110,100,32,108,51,52,50,32,105,51,52,51,41,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,28),40,114,101,118,101,114,115,101,45,115,116,114,105,110,103,45,97,112,112,101,110,100,32,108,51,52,48,41,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,15),40,45,62,115,116,114,105,110,103,32,120,51,53,52,41,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,51,54,53,32,103,51,55,55,51,56,51,41,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,16),40,99,111,110,99,32,46,32,97,114,103,115,51,54,50,41};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,105,115,116,97,114,116,52,48,49,41};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,52),40,116,114,97,118,101,114,115,101,32,119,104,105,99,104,51,57,48,32,119,104,101,114,101,51,57,49,32,115,116,97,114,116,51,57,50,32,116,101,115,116,51,57,51,32,108,111,99,51,57,52,41,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,17),40,97,50,53,57,53,32,105,52,49,52,32,108,52,49,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,50),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,32,119,104,105,99,104,52,49,49,32,119,104,101,114,101,52,49,50,32,115,116,97,114,116,52,49,51,41,0,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,17),40,97,50,54,48,52,32,105,52,49,57,32,108,52,50,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,53),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,45,99,105,32,119,104,105,99,104,52,49,54,32,119,104,101,114,101,52,49,55,32,115,116,97,114,116,52,49,56,41,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,47),40,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,32,119,104,105,99,104,52,50,57,32,119,104,101,114,101,52,51,48,32,46,32,116,109,112,52,50,56,52,51,49,41,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,50),40,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,45,99,105,32,119,104,105,99,104,52,52,51,32,119,104,101,114,101,52,52,52,32,46,32,116,109,112,52,52,50,52,52,53,41,0,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,29),40,115,116,114,105,110,103,45,99,111,109,112,97,114,101,51,32,115,49,52,53,50,32,115,50,52,53,51,41,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,32),40,115,116,114,105,110,103,45,99,111,109,112,97,114,101,51,45,99,105,32,115,49,52,54,49,32,115,50,52,54,50,41};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,56),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,61,63,32,115,49,52,55,48,32,115,50,52,55,49,32,115,116,97,114,116,49,52,55,50,32,115,116,97,114,116,50,52,55,51,32,110,52,55,52,41};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,37),40,115,117,98,115,116,114,105,110,103,61,63,32,115,49,52,56,57,32,115,50,52,57,48,32,46,32,116,109,112,52,56,56,52,57,49,41,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,59),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,45,99,105,61,63,32,115,49,53,48,53,32,115,50,53,48,54,32,115,116,97,114,116,49,53,48,55,32,115,116,97,114,116,50,53,48,56,32,110,53,48,57,41,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,40),40,115,117,98,115,116,114,105,110,103,45,99,105,61,63,32,115,49,53,50,52,32,115,50,53,50,53,32,46,32,116,109,112,53,50,51,53,50,54,41};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,27),40,97,100,100,32,102,114,111,109,53,52,56,32,116,111,53,52,57,32,108,97,115,116,53,53,48,41,0,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,11),40,115,99,97,110,32,106,53,55,48,41,0,0,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,27),40,108,111,111,112,32,105,53,53,52,32,108,97,115,116,53,53,53,32,102,114,111,109,53,53,54,41,0,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,42),40,115,116,114,105,110,103,45,115,112,108,105,116,32,115,116,114,53,52,48,32,46,32,100,101,108,115,116,114,45,97,110,100,45,102,108,97,103,53,52,49,41,0,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,50,32,110,50,54,48,56,41,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,49,32,115,115,53,57,57,32,110,54,48,48,41,0,0,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,40),40,115,116,114,105,110,103,45,105,110,116,101,114,115,112,101,114,115,101,32,115,116,114,115,53,57,48,32,46,32,116,109,112,53,56,57,53,57,49,41};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,13),40,102,95,51,49,51,56,32,99,54,50,57,41,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,15),40,105,110,115,116,114,105,110,103,32,115,54,50,55,41,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,105,54,53,55,32,106,54,53,56,41};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,13),40,102,95,51,51,49,48,32,99,54,52,50,41,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,41),40,115,116,114,105,110,103,45,116,114,97,110,115,108,97,116,101,32,115,116,114,54,50,51,32,102,114,111,109,54,50,52,32,46,32,116,111,54,50,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,115,109,97,112,54,56,49,41,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,37),40,99,111,108,108,101,99,116,32,105,54,55,54,32,102,114,111,109,54,55,55,32,116,111,116,97,108,54,55,56,32,102,115,54,55,57,41,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,34),40,115,116,114,105,110,103,45,116,114,97,110,115,108,97,116,101,42,32,115,116,114,54,55,50,32,115,109,97,112,54,55,51,41,0,0,0,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,116,111,116,97,108,54,57,56,32,112,111,115,54,57,57,41,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,27),40,115,116,114,105,110,103,45,99,104,111,112,32,115,116,114,54,57,52,32,108,101,110,54,57,53,41,0,0,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,33),40,115,116,114,105,110,103,45,99,104,111,109,112,32,115,116,114,55,49,51,32,46,32,116,109,112,55,49,50,55,49,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,55,51,52,32,105,55,51,54,41};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,108,97,115,116,55,52,50,32,110,101,120,116,55,52,51,41,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,25),40,115,111,114,116,101,100,63,32,115,101,113,55,50,55,32,108,101,115,115,63,55,50,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,32,120,55,53,56,32,97,55,53,57,32,121,55,54,48,32,98,55,54,49,41,0,0,0,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,26),40,109,101,114,103,101,32,97,55,53,48,32,98,55,53,49,32,108,101,115,115,63,55,53,50,41,0,0,0,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,21),40,108,111,111,112,32,114,55,55,50,32,97,55,55,51,32,98,55,55,52,41,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,27),40,109,101,114,103,101,33,32,97,55,54,52,32,98,55,54,53,32,108,101,115,115,63,55,54,54,41,0,0,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,11),40,115,116,101,112,32,110,55,56,52,41,0,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,56,48,53,32,112,56,48,55,32,105,56,48,56,41,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,23),40,115,111,114,116,33,32,115,101,113,55,56,49,32,108,101,115,115,63,55,56,50,41,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,22),40,115,111,114,116,32,115,101,113,56,49,52,32,108,101,115,115,63,56,49,53,41,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,24),40,119,97,108,107,32,101,100,103,101,115,56,51,53,32,115,116,97,116,101,56,51,54,41};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,48),40,118,105,115,105,116,32,100,97,103,56,50,48,32,110,111,100,101,56,50,49,32,101,100,103,101,115,56,50,50,32,112,97,116,104,56,50,51,32,115,116,97,116,101,56,50,52,41};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,100,97,103,56,52,51,32,115,116,97,116,101,56,52,52,41,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,33),40,116,111,112,111,108,111,103,105,99,97,108,45,115,111,114,116,32,100,97,103,56,49,55,32,112,114,101,100,56,49,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,112,115,56,53,51,32,112,101,56,53,52,41,0,0,0,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,30),40,98,105,110,97,114,121,45,115,101,97,114,99,104,32,118,101,99,56,52,56,32,112,114,111,99,56,52,57,41,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,12),40,109,97,107,101,45,113,117,101,117,101,41,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,13),40,113,117,101,117,101,63,32,120,56,54,56,41,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,19),40,113,117,101,117,101,45,108,101,110,103,116,104,32,113,56,55,48,41,0,0,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,19),40,113,117,101,117,101,45,101,109,112,116,121,63,32,113,56,55,51,41,0,0,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,18),40,113,117,101,117,101,45,102,105,114,115,116,32,113,56,55,54,41,0,0,0,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,17),40,113,117,101,117,101,45,108,97,115,116,32,113,56,56,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,26),40,113,117,101,117,101,45,97,100,100,33,32,113,56,56,54,32,100,97,116,117,109,56,56,55,41,0,0,0,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,20),40,113,117,101,117,101,45,114,101,109,111,118,101,33,32,113,56,57,56,41,0,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,21),40,108,111,111,112,32,108,115,116,57,48,57,32,108,115,116,50,57,49,48,41,0,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,18),40,113,117,101,117,101,45,62,108,105,115,116,32,113,57,48,55,41,0,0,0,0,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,57,49,53,32,108,115,116,57,49,55,41,0,0,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,21),40,108,105,115,116,45,62,113,117,101,117,101,32,108,115,116,48,57,49,52,41,0,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,31),40,113,117,101,117,101,45,112,117,115,104,45,98,97,99,107,33,32,113,57,50,53,32,105,116,101,109,57,50,54,41,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,57,51,57,41,0,0,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,40),40,113,117,101,117,101,45,112,117,115,104,45,98,97,99,107,45,108,105,115,116,33,32,113,57,51,50,32,105,116,101,109,108,105,115,116,57,51,51,41};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_3183)
static void C_ccall f_3183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3188)
static void C_fcall f_3188(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2834)
static void C_ccall f_2834(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2834)
static void C_ccall f_2834r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4547)
static void C_ccall f_4547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2807)
static void C_fcall f_2807(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2336)
static void C_ccall f_2336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2312)
static void C_fcall f_2312(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1553)
static void C_fcall f_1553(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4033)
static void C_ccall f_4033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2305)
static void C_ccall f_2305(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2305)
static void C_ccall f_2305r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1540)
static void C_ccall f_1540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1543)
static void C_ccall f_1543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1545)
static void C_ccall f_1545(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1547)
static void C_ccall f_1547(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4040)
static void C_ccall f_4040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4042)
static void C_ccall f_4042(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2317)
static void C_fcall f_2317(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4045)
static void C_fcall f_4045(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_4049)
static void C_ccall f_4049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1429)
static void C_ccall f_1429(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1429)
static void C_ccall f_1429r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1532)
static void C_ccall f_1532(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1413)
static void C_ccall f_1413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externexport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3061)
static C_word C_fcall f_3061(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_2669)
static void C_ccall f_2669(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1585)
static void C_ccall f_1585(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1585)
static void C_ccall f_1585r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4086)
static void C_ccall f_4086(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2710)
static void C_fcall f_2710(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3841)
static void C_ccall f_3841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3844)
static void C_ccall f_3844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1572)
static void C_ccall f_1572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4015)
static void C_ccall f_4015(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3056)
static void C_ccall f_3056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3527)
static void C_ccall f_3527(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3527)
static void C_ccall f_3527r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3028)
static void C_ccall f_3028(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3028)
static void C_ccall f_3028r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1659)
static C_word C_fcall f_1659(C_word t0,C_word t1);
C_noret_decl(f_4029)
static void C_ccall f_4029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1641)
static void C_ccall f_1641(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1647)
static void C_ccall f_1647(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1644)
static void C_ccall f_1644(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2894)
static void C_ccall f_2894(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2894)
static void C_ccall f_2894r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2700)
static void C_ccall f_2700(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_3509)
static void C_ccall f_3509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1632)
static void C_ccall f_1632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3046)
static void C_fcall f_3046(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3513)
static void C_ccall f_3513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2265)
static void C_ccall f_2265(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1613)
static void C_fcall f_1613(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2234)
static void C_ccall f_2234(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3666)
static void C_ccall f_3666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1518)
static void C_fcall f_1518(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1607)
static void C_ccall f_1607(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1607)
static void C_ccall f_1607r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4439)
static void C_ccall f_4439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4245)
static void C_fcall f_4245(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2240)
static void C_fcall f_2240(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3672)
static void C_ccall f_3672(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2571)
static void C_ccall f_2571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3938)
static void C_ccall f_3938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4255)
static void C_ccall f_4255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4098)
static void C_ccall f_4098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2558)
static void C_fcall f_2558(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3890)
static void C_fcall f_3890(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2797)
static void C_ccall f_2797(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_4429)
static void C_ccall f_4429(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3862)
static void C_ccall f_3862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1738)
static void C_ccall f_1738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3603)
static void C_ccall f_3603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4476)
static void C_ccall f_4476(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3887)
static void C_ccall f_3887(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4210)
static void C_ccall f_4210(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3903)
static void C_ccall f_3903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3900)
static void C_ccall f_3900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3909)
static void C_ccall f_3909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1717)
static void C_fcall f_1717(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4227)
static void C_ccall f_4227(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2596)
static void C_ccall f_2596(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2599)
static void C_ccall f_2599(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2590)
static void C_ccall f_2590(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1740)
static void C_ccall f_1740(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1740)
static void C_ccall f_1740r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1746)
static void C_fcall f_1746(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4231)
static void C_fcall f_4231(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2161)
static void C_ccall f_2161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1681)
static void C_fcall f_1681(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2139)
static void C_ccall f_2139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3642)
static void C_fcall f_3642(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1675)
static void C_ccall f_1675(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2737)
static void C_ccall f_2737(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2737)
static void C_ccall f_2737r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4322)
static void C_ccall f_4322(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4131)
static void C_ccall f_4131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4331)
static void C_ccall f_4331(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1706)
static void C_ccall f_1706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1708)
static void C_ccall f_1708(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1866)
static void C_ccall f_1866(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1866)
static void C_ccall f_1866r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4153)
static void C_ccall f_4153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4344)
static void C_ccall f_4344(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3327)
static void C_ccall f_3327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2481)
static void C_fcall f_2481(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4354)
static void C_ccall f_4354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3335)
static void C_ccall f_3335(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3974)
static void C_ccall f_3974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4365)
static void C_ccall f_4365(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3983)
static void C_fcall f_3983(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3981)
static void C_ccall f_3981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2463)
static void C_ccall f_2463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2466)
static void C_ccall f_2466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1796)
static void C_fcall f_1796(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1870)
static void C_fcall f_1870(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2962)
static void C_fcall f_2962(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1878)
static void C_fcall f_1878(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3310)
static void C_ccall f_3310(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4375)
static void C_ccall f_4375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2479)
static void C_ccall f_2479(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2471)
static void C_ccall f_2471(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2471)
static void C_ccall f_2471r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4386)
static void C_ccall f_4386(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4111)
static void C_ccall f_4111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4117)
static void C_fcall f_4117(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1779)
static void C_ccall f_1779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1772)
static void C_ccall f_1772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1495)
static void C_ccall f_1495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4396)
static void C_fcall f_4396(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3498)
static void C_ccall f_3498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3729)
static void C_ccall f_3729(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1817)
static void C_fcall f_1817(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2064)
static void C_ccall f_2064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3702)
static void C_fcall f_3702(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1974)
static void C_ccall f_1974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3709)
static void C_ccall f_3709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2370)
static void C_ccall f_2370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2048)
static void C_fcall f_2048(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3420)
static void C_fcall f_3420(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2042)
static void C_ccall f_2042(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3446)
static void C_ccall f_3446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4305)
static void C_ccall f_4305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2379)
static C_word C_fcall f_2379(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_4310)
static void C_ccall f_4310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4316)
static void C_ccall f_4316(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3463)
static void C_ccall f_3463(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3478)
static void C_fcall f_3478(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2356)
static void C_fcall f_2356(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2353)
static void C_ccall f_2353(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1835)
static void C_ccall f_1835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1831)
static void C_ccall f_1831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2003)
static void C_ccall f_2003(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_2003)
static void C_ccall f_2003r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_1593)
static void C_ccall f_1593(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4189)
static void C_fcall f_4189(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2013)
static void C_ccall f_2013(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2010)
static void C_fcall f_2010(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3593)
static void C_fcall f_3593(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3566)
static void C_ccall f_3566(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3766)
static void C_fcall f_3766(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3763)
static void C_ccall f_3763(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2935)
static void C_fcall f_2935(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2930)
static void C_ccall f_2930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3773)
static void C_ccall f_3773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2945)
static void C_ccall f_2945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1932)
static void C_fcall f_1932(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2915)
static void C_fcall f_2915(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2212)
static void C_ccall f_2212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1923)
static void C_ccall f_1923(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3755)
static void C_ccall f_3755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2193)
static void C_ccall f_2193(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2193)
static void C_ccall f_2193r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3168)
static void C_ccall f_3168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1913)
static void C_ccall f_1913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3130)
static void C_ccall f_3130(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3130)
static void C_ccall f_3130r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3133)
static void C_fcall f_3133(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3138)
static void C_ccall f_3138(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2623)
static void C_ccall f_2623(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2623)
static void C_ccall f_2623r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1788)
static void C_ccall f_1788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2209)
static void C_fcall f_2209(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1781)
static void C_ccall f_1781(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2638)
static void C_ccall f_2638(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3144)
static C_word C_fcall f_3144(C_word t0,C_word t1);
C_noret_decl(f_2605)
static void C_ccall f_2605(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2608)
static void C_ccall f_2608(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2608)
static void C_ccall f_2608r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3207)
static void C_ccall f_3207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4614)
static void C_ccall f_4614(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4624)
static void C_ccall f_4624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4627)
static void C_fcall f_4627(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1361)
static void C_ccall f_1361(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1367)
static void C_fcall f_1367(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2089)
static void C_ccall f_2089(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_2089)
static void C_ccall f_2089r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_2098)
static void C_fcall f_2098(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4560)
static void C_fcall f_4560(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3001)
static void C_ccall f_3001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3380)
static void C_fcall f_3380(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2516)
static void C_fcall f_2516(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4574)
static void C_ccall f_4574(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2510)
static void C_ccall f_2510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1394)
static void C_ccall f_1394(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1392)
static void C_ccall f_1392(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1392)
static void C_ccall f_1392r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1383)
static void C_ccall f_1383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1400)
static void C_fcall f_1400(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3361)
static void C_ccall f_3361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4516)
static void C_ccall f_4516(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3375)
static void C_ccall f_3375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4527)
static void C_ccall f_4527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2426)
static void C_ccall f_2426(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1460)
static void C_ccall f_1460(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1460)
static void C_ccall f_1460r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1468)
static void C_ccall f_1468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3347)
static void C_fcall f_3347(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4537)
static void C_fcall f_4537(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1356)
static void C_ccall f_1356(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1354)
static void C_ccall f_1354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1452)
static void C_ccall f_1452(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1359)
static void C_ccall f_1359(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1359)
static void C_ccall f_1359r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1450)
static void C_ccall f_1450(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1458)
static void C_ccall f_1458(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1440)
static void C_ccall f_1440(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1442)
static void C_ccall f_1442(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4655)
static C_word C_fcall f_4655(C_word t0);
C_noret_decl(f_1487)
static void C_ccall f_1487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1481)
static void C_ccall f_1481(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1481)
static void C_ccall f_1481r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3171)
static void C_ccall f_3171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4489)
static void C_fcall f_4489(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1473)
static void C_ccall f_1473(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1473)
static void C_ccall f_1473r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1506)
static void C_ccall f_1506(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1506)
static void C_ccall f_1506r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1470)
static void C_ccall f_1470(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1470)
static void C_ccall f_1470r(C_word t0,C_word t1,C_word t3) C_noret;

C_noret_decl(trf_3188)
static void C_fcall trf_3188(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3188(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3188(t0,t1,t2,t3);}

C_noret_decl(trf_2807)
static void C_fcall trf_2807(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2807(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2807(t0,t1);}

C_noret_decl(trf_2312)
static void C_fcall trf_2312(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2312(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2312(t0,t1);}

C_noret_decl(trf_1553)
static void C_fcall trf_1553(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1553(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1553(t0,t1,t2);}

C_noret_decl(trf_2317)
static void C_fcall trf_2317(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2317(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2317(t0,t1,t2);}

C_noret_decl(trf_4045)
static void C_fcall trf_4045(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4045(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_4045(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_2710)
static void C_fcall trf_2710(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2710(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2710(t0,t1);}

C_noret_decl(trf_3046)
static void C_fcall trf_3046(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3046(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3046(t0,t1,t2,t3);}

C_noret_decl(trf_1613)
static void C_fcall trf_1613(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1613(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1613(t0,t1,t2);}

C_noret_decl(trf_1518)
static void C_fcall trf_1518(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1518(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1518(t0,t1,t2);}

C_noret_decl(trf_4245)
static void C_fcall trf_4245(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4245(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4245(t0,t1,t2,t3);}

C_noret_decl(trf_2240)
static void C_fcall trf_2240(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2240(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2240(t0,t1,t2);}

C_noret_decl(trf_2558)
static void C_fcall trf_2558(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2558(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2558(t0,t1,t2);}

C_noret_decl(trf_3890)
static void C_fcall trf_3890(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3890(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3890(t0,t1,t2);}

C_noret_decl(trf_1717)
static void C_fcall trf_1717(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1717(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1717(t0,t1,t2);}

C_noret_decl(trf_1746)
static void C_fcall trf_1746(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1746(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1746(t0,t1,t2,t3);}

C_noret_decl(trf_4231)
static void C_fcall trf_4231(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4231(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4231(t0,t1);}

C_noret_decl(trf_1681)
static void C_fcall trf_1681(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1681(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1681(t0,t1,t2);}

C_noret_decl(trf_3642)
static void C_fcall trf_3642(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3642(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3642(t0,t1,t2,t3);}

C_noret_decl(trf_2481)
static void C_fcall trf_2481(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2481(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2481(t0,t1,t2);}

C_noret_decl(trf_3983)
static void C_fcall trf_3983(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3983(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3983(t0,t1,t2,t3);}

C_noret_decl(trf_1796)
static void C_fcall trf_1796(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1796(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1796(t0,t1,t2,t3);}

C_noret_decl(trf_1870)
static void C_fcall trf_1870(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1870(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1870(t0,t1);}

C_noret_decl(trf_2962)
static void C_fcall trf_2962(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2962(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2962(t0,t1,t2);}

C_noret_decl(trf_1878)
static void C_fcall trf_1878(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1878(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1878(t0,t1,t2);}

C_noret_decl(trf_4117)
static void C_fcall trf_4117(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4117(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4117(t0,t1,t2,t3);}

C_noret_decl(trf_4396)
static void C_fcall trf_4396(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4396(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4396(t0,t1);}

C_noret_decl(trf_1817)
static void C_fcall trf_1817(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1817(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1817(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3702)
static void C_fcall trf_3702(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3702(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_3702(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2048)
static void C_fcall trf_2048(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2048(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2048(t0,t1,t2);}

C_noret_decl(trf_3420)
static void C_fcall trf_3420(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3420(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3420(t0,t1);}

C_noret_decl(trf_3478)
static void C_fcall trf_3478(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3478(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3478(t0,t1,t2,t3);}

C_noret_decl(trf_2356)
static void C_fcall trf_2356(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2356(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2356(t0,t1,t2,t3);}

C_noret_decl(trf_4189)
static void C_fcall trf_4189(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4189(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4189(t0,t1,t2,t3);}

C_noret_decl(trf_2010)
static void C_fcall trf_2010(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2010(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2010(t0,t1);}

C_noret_decl(trf_3593)
static void C_fcall trf_3593(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3593(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3593(t0,t1,t2);}

C_noret_decl(trf_3766)
static void C_fcall trf_3766(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3766(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3766(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2935)
static void C_fcall trf_2935(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2935(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2935(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1932)
static void C_fcall trf_1932(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1932(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1932(t0,t1,t2,t3);}

C_noret_decl(trf_2915)
static void C_fcall trf_2915(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2915(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2915(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3133)
static void C_fcall trf_3133(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3133(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3133(t0,t1);}

C_noret_decl(trf_2209)
static void C_fcall trf_2209(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2209(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2209(t0,t1);}

C_noret_decl(trf_4627)
static void C_fcall trf_4627(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4627(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4627(t0,t1);}

C_noret_decl(trf_1367)
static void C_fcall trf_1367(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1367(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1367(t0,t1,t2);}

C_noret_decl(trf_2098)
static void C_fcall trf_2098(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2098(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2098(t0,t1,t2);}

C_noret_decl(trf_4560)
static void C_fcall trf_4560(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4560(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4560(t0,t1);}

C_noret_decl(trf_3380)
static void C_fcall trf_3380(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3380(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3380(t0,t1,t2);}

C_noret_decl(trf_2516)
static void C_fcall trf_2516(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2516(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2516(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1400)
static void C_fcall trf_1400(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1400(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1400(t0,t1,t2);}

C_noret_decl(trf_3347)
static void C_fcall trf_3347(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3347(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_3347(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_4537)
static void C_fcall trf_4537(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4537(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4537(t0,t1,t2);}

C_noret_decl(trf_4489)
static void C_fcall trf_4489(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4489(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4489(t0,t1,t2,t3);}

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

/* k3181 in k3169 in k3166 in string-translate in k1352 */
static void C_ccall f_3183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3183,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3188,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t4,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word)li85),tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_3188(t6,((C_word*)t0)[7],C_fix(0),C_fix(0));}

/* loop in k3181 in k3169 in k3166 in string-translate in k1352 */
static void C_fcall f_3188(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3188,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
if(C_truep(C_fixnum_lessp(t3,t2))){
/* data-structures.scm:500: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[66]+1)))(5,*((C_word*)lf[66]+1),t1,((C_word*)t0)[3],C_fix(0),t3);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[3]);}}
else{
t4=C_subchar(((C_word*)t0)[4],t2);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3207,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=t4,tmp=(C_word)a,a+=10,tmp);
/* data-structures.scm:503: from */
t6=((C_word*)t0)[8];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}}

/* substring-ci=? in k1352 */
static void C_ccall f_2834(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_2834r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2834r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2834r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_fix(0):C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_fix(0):C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_nullp(t12);
t14=(C_truep(t13)?C_SCHEME_FALSE:C_i_car(t12));
if(C_truep(C_i_nullp(t12))){
/* data-structures.scm:400: ##sys#substring-ci=? */
t15=*((C_word*)lf[62]+1);
((C_proc7)(void*)(*((C_word*)t15+1)))(7,t15,t1,t2,t3,t6,t10,t14);}
else{
t15=C_i_cdr(t12);
/* data-structures.scm:400: ##sys#substring-ci=? */
t16=*((C_word*)lf[62]+1);
((C_proc7)(void*)(*((C_word*)t16+1)))(7,t16,t1,t2,t3,t6,t10,t14);}}

/* k4545 in doloop915 in list->queue in k1352 */
static void C_ccall f_4547(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4537(t3,((C_word*)t0)[4],t2);}

/* k2805 in substring-ci=? in k1352 */
static void C_fcall f_2807(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_check_exact_2(((C_word*)t0)[2],lf[63]);
t3=C_i_check_exact_2(((C_word*)t0)[3],lf[63]);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_substring_compare_case_insensitive(((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[2],((C_word*)t0)[3],t1));}

/* k2334 in loop in k2310 in rassoc in k1352 */
static void C_ccall f_2336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=C_slot(((C_word*)t0)[4],C_fix(1));
/* data-structures.scm:265: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2317(t3,((C_word*)t0)[2],t2);}}

/* k2310 in rassoc in k1352 */
static void C_fcall f_2312(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2312,NULL,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2317,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word)li53),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2317(t6,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* loop */
static void C_fcall f_1553(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1553,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);}
else{
if(C_truep(C_i_not_pair_p(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1572,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* data-structures.scm:94: pred */
t5=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}}}

/* k4031 in sort in k1352 */
static void C_ccall f_4033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:723: sort! */
t2=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* rassoc in k1352 */
static void C_ccall f_2305(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_2305r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2305r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2305r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t5=C_i_check_list_2(t3,lf[42]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2312,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t4))){
t7=t4;
t8=t6;
f_2312(t8,C_u_i_car(t7));}
else{
t7=t6;
f_2312(t7,*((C_word*)lf[30]+1));}}

/* k1538 */
static void C_ccall f_1540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1540,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1543,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:87: g115 */
t3=t1;
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[4]);}

/* k1541 in k1538 */
static void C_ccall f_1543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:87: h */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],t1);}

/* list-of? in k1352 */
static void C_ccall f_1545(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1545,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1547,a[2]=t2,a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp));}

/* f_1547 in list-of? in k1352 */
static void C_ccall f_1547(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1547,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1553,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1553(t6,t1,t2);}

/* k4038 in sort in k1352 */
static void C_ccall f_4040(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:724: sort! */
t2=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* topological-sort in k1352 */
static void C_ccall f_4042(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4042,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4045,a[2]=t3,a[3]=t5,a[4]=((C_word)li106),tmp=(C_word)a,a+=5,tmp));
t7=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4189,a[2]=t9,a[3]=t5,a[4]=((C_word)li107),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_4189(t11,t1,t2,t7);}

/* loop in k2310 in rassoc in k1352 */
static void C_fcall f_2317(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_2317,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=t3;
t5=C_i_check_pair_2(t4,lf[42]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2336,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t4,C_fix(1));
/* data-structures.scm:263: tst */
t8=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t8))(4,t8,t6,((C_word*)t0)[4],t7);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* visit in topological-sort in k1352 */
static void C_fcall f_4045(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4045,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4049,a[2]=t3,a[3]=t1,a[4]=t5,a[5]=t6,a[6]=t4,a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[3],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
t8=C_i_car(t6);
/* data-structures.scm:734: alist-ref */
t9=*((C_word*)lf[40]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t7,t3,t8,((C_word*)t0)[2]);}

/* k4047 in visit in topological-sort in k1352 */
static void C_ccall f_4049(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4049,2,t0,t1);}
t2=C_eqp(t1,lf[90]);
if(C_truep(t2)){
t3=C_a_i_cons(&a,2,lf[91],lf[92]);
t4=t3;
t5=C_a_i_cons(&a,2,lf[91],lf[93]);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4098,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t6,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:741: reverse */
t8=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,((C_word*)t0)[4]);}
else{
t3=C_eqp(t1,lf[101]);
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[5]);}
else{
t4=((C_word*)t0)[6];
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4111,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[3],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t4)){
t6=t5;
f_4111(2,t6,t4);}
else{
/* data-structures.scm:747: alist-ref */
t6=*((C_word*)lf[40]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t5,((C_word*)t0)[2],((C_word*)t0)[9],((C_word*)t0)[7],C_SCHEME_END_OF_LIST);}}}}

/* constantly in k1352 */
static void C_ccall f_1429(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1429r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1429r(t0,t1,t2);}}

static void C_ccall f_1429r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(4);
t3=t2;
t4=C_u_i_length(t3);
t5=C_eqp(C_fix(1),t4);
if(C_truep(t5)){
t6=C_i_car(t2);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1440,a[2]=t7,a[3]=((C_word)li7),tmp=(C_word)a,a+=4,tmp);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1442,a[2]=t2,a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* f_1532 in loop in o in k1352 */
static void C_ccall f_1532(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1532,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1540,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:87: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1518(t4,t3,((C_word*)t0)[4]);}

/* k1411 in loop */
static void C_ccall f_1413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=C_slot(((C_word*)t0)[3],C_fix(1));
/* data-structures.scm:53: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1400(t3,((C_word*)t0)[2],t2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_data_2dstructures_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("data_2dstructures_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1099)){
C_save(t1);
C_rereclaim2(1099*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,121);
lf[0]=C_h_intern(&lf[0],8,"identity");
lf[1]=C_h_intern(&lf[1],7,"conjoin");
lf[2]=C_h_intern(&lf[2],7,"disjoin");
lf[3]=C_h_intern(&lf[3],10,"constantly");
lf[4]=C_h_intern(&lf[4],4,"flip");
lf[5]=C_h_intern(&lf[5],10,"complement");
lf[6]=C_h_intern(&lf[6],7,"compose");
lf[7]=C_h_intern(&lf[7],6,"values");
lf[8]=C_h_intern(&lf[8],1,"o");
lf[9]=C_h_intern(&lf[9],8,"list-of\077");
lf[10]=C_h_intern(&lf[10],4,"each");
lf[11]=C_h_intern(&lf[11],19,"\003sysundefined-value");
lf[12]=C_h_intern(&lf[12],4,"any\077");
lf[13]=C_h_intern(&lf[13],5,"atom\077");
lf[14]=C_h_intern(&lf[14],5,"tail\077");
lf[15]=C_h_intern(&lf[15],11,"intersperse");
lf[16]=C_h_intern(&lf[16],7,"butlast");
lf[17]=C_h_intern(&lf[17],7,"flatten");
lf[18]=C_h_intern(&lf[18],4,"chop");
lf[19]=C_h_intern(&lf[19],7,"reverse");
lf[20]=C_h_intern(&lf[20],9,"\003syserror");
lf[21]=C_decode_literal(C_heaptop,"\376B\000\000\030invalid numeric argument");
lf[22]=C_h_intern(&lf[22],4,"join");
lf[23]=C_h_intern(&lf[23],10,"\003sysappend");
lf[24]=C_h_intern(&lf[24],27,"\003syserror-not-a-proper-list");
lf[25]=C_h_intern(&lf[25],8,"compress");
lf[26]=C_decode_literal(C_heaptop,"\376B\000\000%bad argument type - not a proper list");
lf[27]=C_h_intern(&lf[27],15,"\003syssignal-hook");
lf[28]=C_h_intern(&lf[28],11,"\000type-error");
lf[29]=C_h_intern(&lf[29],13,"alist-update!");
lf[30]=C_h_intern(&lf[30],4,"eqv\077");
lf[31]=C_h_intern(&lf[31],3,"eq\077");
lf[32]=C_h_intern(&lf[32],4,"assq");
lf[33]=C_h_intern(&lf[33],4,"assv");
lf[34]=C_h_intern(&lf[34],6,"equal\077");
lf[35]=C_h_intern(&lf[35],5,"assoc");
lf[36]=C_h_intern(&lf[36],12,"alist-update");
lf[37]=C_h_intern(&lf[37],5,"error");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\021bad argument type");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\021bad argument type");
lf[40]=C_h_intern(&lf[40],9,"alist-ref");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\021bad argument type");
lf[42]=C_h_intern(&lf[42],6,"rassoc");
lf[43]=C_h_intern(&lf[43],21,"reverse-string-append");
lf[44]=C_h_intern(&lf[44],11,"make-string");
lf[45]=C_h_intern(&lf[45],8,"->string");
lf[46]=C_h_intern(&lf[46],14,"symbol->string");
lf[47]=C_h_intern(&lf[47],18,"\003sysnumber->string");
lf[48]=C_h_intern(&lf[48],17,"get-output-string");
lf[49]=C_h_intern(&lf[49],7,"display");
lf[50]=C_h_intern(&lf[50],18,"open-output-string");
lf[51]=C_h_intern(&lf[51],4,"conc");
lf[52]=C_h_intern(&lf[52],13,"string-append");
lf[53]=C_h_intern(&lf[53],14,"\003syserror-hook");
lf[54]=C_h_intern(&lf[54],19,"\003syssubstring-index");
lf[55]=C_h_intern(&lf[55],15,"substring-index");
lf[56]=C_h_intern(&lf[56],22,"\003syssubstring-index-ci");
lf[57]=C_h_intern(&lf[57],18,"substring-index-ci");
lf[58]=C_h_intern(&lf[58],15,"string-compare3");
lf[59]=C_h_intern(&lf[59],18,"string-compare3-ci");
lf[60]=C_h_intern(&lf[60],15,"\003syssubstring=\077");
lf[61]=C_h_intern(&lf[61],11,"substring=\077");
lf[62]=C_h_intern(&lf[62],18,"\003syssubstring-ci=\077");
lf[63]=C_h_intern(&lf[63],14,"substring-ci=\077");
lf[64]=C_h_intern(&lf[64],12,"string-split");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\003\011\012 ");
lf[66]=C_h_intern(&lf[66],13,"\003syssubstring");
lf[67]=C_h_intern(&lf[67],18,"string-intersperse");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[70]=C_h_intern(&lf[70],19,"\003sysallocate-vector");
lf[71]=C_h_intern(&lf[71],16,"string-translate");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000\037invalid translation destination");
lf[73]=C_h_intern(&lf[73],15,"\003sysmake-string");
lf[74]=C_h_intern(&lf[74],16,"\003syslist->string");
lf[75]=C_h_intern(&lf[75],17,"string-translate\052");
lf[76]=C_h_intern(&lf[76],21,"\003sysfragments->string");
lf[77]=C_h_intern(&lf[77],16,"\003sysfast-reverse");
lf[78]=C_h_intern(&lf[78],11,"string-chop");
lf[79]=C_h_intern(&lf[79],12,"string-chomp");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[81]=C_h_intern(&lf[81],7,"sorted\077");
lf[82]=C_h_intern(&lf[82],5,"merge");
lf[83]=C_h_intern(&lf[83],6,"merge!");
lf[84]=C_h_intern(&lf[84],5,"sort!");
lf[85]=C_h_intern(&lf[85],12,"vector->list");
lf[86]=C_h_intern(&lf[86],4,"sort");
lf[87]=C_h_intern(&lf[87],12,"list->vector");
lf[88]=C_h_intern(&lf[88],6,"append");
lf[89]=C_h_intern(&lf[89],16,"topological-sort");
lf[90]=C_h_intern(&lf[90],4,"grey");
lf[91]=C_h_intern(&lf[91],3,"exn");
lf[92]=C_h_intern(&lf[92],7,"message");
lf[93]=C_h_intern(&lf[93],9,"arguments");
lf[94]=C_h_intern(&lf[94],10,"call-chain");
lf[95]=C_h_intern(&lf[95],8,"location");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000\016cycle detected");
lf[97]=C_h_intern(&lf[97],9,"condition");
lf[98]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\003exn\376\003\000\000\002\376\001\000\000\007runtime\376\003\000\000\002\376\001\000\000\005cycle\376\377\016");
lf[99]=C_h_intern(&lf[99],9,"\003sysabort");
lf[100]=C_h_intern(&lf[100],18,"\003sysget-call-chain");
lf[101]=C_h_intern(&lf[101],5,"black");
lf[102]=C_h_intern(&lf[102],13,"binary-search");
lf[103]=C_h_intern(&lf[103],10,"make-queue");
lf[104]=C_h_intern(&lf[104],5,"queue");
lf[105]=C_h_intern(&lf[105],6,"queue\077");
lf[106]=C_h_intern(&lf[106],12,"queue-length");
lf[107]=C_h_intern(&lf[107],12,"queue-empty\077");
lf[108]=C_h_intern(&lf[108],11,"queue-first");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000\016queue is empty");
lf[110]=C_h_intern(&lf[110],10,"queue-last");
lf[111]=C_decode_literal(C_heaptop,"\376B\000\000\016queue is empty");
lf[112]=C_h_intern(&lf[112],10,"queue-add!");
lf[113]=C_h_intern(&lf[113],13,"queue-remove!");
lf[114]=C_decode_literal(C_heaptop,"\376B\000\000\016queue is empty");
lf[115]=C_h_intern(&lf[115],11,"queue->list");
lf[116]=C_h_intern(&lf[116],11,"list->queue");
lf[117]=C_h_intern(&lf[117],16,"queue-push-back!");
lf[118]=C_h_intern(&lf[118],21,"queue-push-back-list!");
lf[119]=C_h_intern(&lf[119],17,"register-feature!");
lf[120]=C_h_intern(&lf[120],15,"data-structures");
C_register_lf2(lf,121,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1354,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* data-structures.scm:33: register-feature! */
t3=*((C_word*)lf[119]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[120]);}

/* loop2 in k3054 in loop1 in string-intersperse in k1352 */
static C_word C_fcall f_3061(C_word t0,C_word t1,C_word t2){
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
C_stack_overflow_check;
loop:
t3=C_slot(t1,C_fix(0));
t4=C_slot(t1,C_fix(1));
t5=C_block_size(t3);
t6=C_substring_copy(t3,((C_word*)t0)[2],C_fix(0),t5,t2);
t7=C_fixnum_plus(t2,t5);
if(C_truep(C_eqp(t4,C_SCHEME_END_OF_LIST))){
return(((C_word*)t0)[2]);}
else{
t8=C_substring_copy(((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),((C_word*)t0)[4],t7);
t9=C_fixnum_plus(t7,((C_word*)t0)[4]);
t11=t4;
t12=t9;
t1=t11;
t2=t12;
goto loop;}}

/* string-compare3-ci in k1352 */
static void C_ccall f_2669(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2669,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[59]);
t5=C_i_check_string_2(t3,lf[59]);
t6=C_block_size(t2);
t7=C_block_size(t3);
t8=C_fixnum_difference(t6,t7);
t9=C_fixnum_lessp(t8,C_fix(0));
t10=(C_truep(t9)?t6:t7);
t11=C_string_compare_case_insensitive(t2,t3,t10);
t12=C_eqp(t11,C_fix(0));
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,(C_truep(t12)?t8:t11));}

/* each in k1352 */
static void C_ccall f_1585(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1585r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1585r(t0,t1,t2);}}

static void C_ccall f_1585r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1593,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_slot(t2,C_fix(1));
t4=C_i_nullp(t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?C_slot(t2,C_fix(0)):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1607,a[2]=t2,a[3]=((C_word)li26),tmp=(C_word)a,a+=4,tmp)));}}

/* k4084 in k4096 in k4047 in visit in topological-sort in k1352 */
static void C_ccall f_4086(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[32],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4086,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[91],lf[95]);
t3=C_a_i_list(&a,8,((C_word*)t0)[2],lf[96],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,t2,lf[89]);
t4=C_a_i_record3(&a,3,lf[97],lf[98],t3);
/* data-structures.scm:736: ##sys#abort */
t5=*((C_word*)lf[99]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,((C_word*)t0)[6],t4);}

/* k2708 in substring=? in k1352 */
static void C_fcall f_2710(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_check_exact_2(((C_word*)t0)[2],lf[61]);
t3=C_i_check_exact_2(((C_word*)t0)[3],lf[61]);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_substring_compare(((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[2],((C_word*)t0)[3],t1));}

/* k3839 in merge! in k1352 */
static void C_ccall f_3841(C_word c,C_word t0,C_word t1){
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
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3841,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3844,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
if(C_truep(C_i_nullp(t4))){
t5=((C_word*)t0)[2];
t6=((C_word*)t0)[4];
t7=C_i_setslot(t5,C_fix(1),t6);
t8=((C_word*)t0)[2];
t9=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
/* data-structures.scm:662: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_3766(t7,t2,((C_word*)t0)[2],((C_word*)t0)[4],t6);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3862,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
if(C_truep(C_i_nullp(t4))){
t5=((C_word*)t0)[4];
t6=((C_word*)t0)[2];
t7=C_i_setslot(t5,C_fix(1),t6);
t8=((C_word*)t0)[4];
t9=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t5=((C_word*)t0)[4];
t6=C_u_i_cdr(t5);
/* data-structures.scm:667: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_3766(t7,t2,((C_word*)t0)[4],t6,((C_word*)t0)[2]);}}}

/* k3842 in k3839 in merge! in k1352 */
static void C_ccall f_3844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1570 in loop */
static void C_ccall f_1572(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(1));
/* data-structures.scm:94: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1553(t3,((C_word*)t0)[4],t2);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* sort in k1352 */
static void C_ccall f_4015(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4015,4,t0,t1,t2,t3);}
if(C_truep(C_i_vectorp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4029,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4033,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:723: vector->list */
t6=*((C_word*)lf[85]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4040,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:724: append */
t5=*((C_word*)lf[88]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,C_SCHEME_END_OF_LIST);}}

/* k3054 in loop1 in string-intersperse in k1352 */
static void C_ccall f_3056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3056,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3061,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li79),tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_3061(t3,((C_word*)t0)[5],C_fix(0)));}

/* string-chomp in k1352 */
static void C_ccall f_3527(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_3527r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3527r(t0,t1,t2,t3);}}

static void C_ccall f_3527r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=C_i_nullp(t3);
t5=(C_truep(t4)?lf[80]:C_i_car(t3));
t6=C_i_check_string_2(t2,lf[79]);
t7=C_i_check_string_2(t5,lf[79]);
t8=C_block_size(t2);
t9=C_block_size(t5);
t10=C_fixnum_difference(t8,t9);
t11=C_fixnum_greater_or_equal_p(t8,t9);
t12=(C_truep(t11)?C_substring_compare(t2,t5,t10,C_fix(0),t9):C_SCHEME_FALSE);
if(C_truep(t12)){
/* data-structures.scm:571: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[66]+1)))(5,*((C_word*)lf[66]+1),t1,t2,C_fix(0),t10);}
else{
t13=t2;
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,t13);}}

/* string-intersperse in k1352 */
static void C_ccall f_3028(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_3028r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3028r(t0,t1,t2,t3);}}

static void C_ccall f_3028r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(9);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?lf[68]:C_i_car(t3));
t6=t5;
t7=C_i_check_list_2(t2,lf[67]);
t8=C_i_check_string_2(t6,lf[67]);
t9=C_block_size(t6);
t10=t9;
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3046,a[2]=t2,a[3]=t6,a[4]=t10,a[5]=t12,a[6]=((C_word)li80),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_3046(t14,t1,t2,C_fix(0));}

/* loop in tail? in k1352 */
static C_word C_fcall f_1659(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:
if(C_truep(C_eqp(t1,C_SCHEME_END_OF_LIST))){
return(C_SCHEME_FALSE);}
else{
if(C_truep(C_eqp(((C_word*)t0)[2],t1))){
return(C_SCHEME_TRUE);}
else{
t2=C_slot(t1,C_fix(1));
t4=t2;
t1=t4;
goto loop;}}}

/* k4027 in sort in k1352 */
static void C_ccall f_4029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:723: list->vector */
t2=*((C_word*)lf[87]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* any? in k1352 */
static void C_ccall f_1641(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1641,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);}

/* tail? in k1352 */
static void C_ccall f_1647(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1647,4,t0,t1,t2,t3);}
t4=C_i_check_list_2(t3,lf[14]);
t5=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1659,a[2]=t2,a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,f_1659(t6,t3));}}

/* atom? in k1352 */
static void C_ccall f_1644(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1644,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_not_pair_p(t2));}

/* string-split in k1352 */
static void C_ccall f_2894(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+20)){
C_save_and_reclaim((void*)tr3r,(void*)f_2894r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2894r(t0,t1,t2,t3);}}

static void C_ccall f_2894r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(20);
t4=C_i_check_string_2(t2,lf[64]);
t5=C_i_nullp(t3);
t6=(C_truep(t5)?lf[65]:C_i_car(t3));
t7=t6;
t8=t3;
t9=C_u_i_length(t8);
t10=C_eqp(t9,C_fix(2));
t11=(C_truep(t10)?C_i_cadr(t3):C_SCHEME_FALSE);
t12=t11;
t13=C_block_size(t2);
t14=t13;
t15=C_i_check_string_2(t7,lf[64]);
t16=C_block_size(t7);
t17=t16;
t18=C_SCHEME_FALSE;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2915,a[2]=t19,a[3]=t2,a[4]=((C_word)li75),tmp=(C_word)a,a+=5,tmp);
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2935,a[2]=t14,a[3]=t19,a[4]=t12,a[5]=t20,a[6]=t2,a[7]=t17,a[8]=t22,a[9]=t7,a[10]=((C_word)li77),tmp=(C_word)a,a+=11,tmp));
t24=((C_word*)t22)[1];
f_2935(t24,t1,C_fix(0),C_SCHEME_FALSE,C_fix(0));}

/* ##sys#substring=? in k1352 */
static void C_ccall f_2700(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[7],*a=ab;
if(c!=7) C_bad_argc_2(c,7,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_2700,7,t0,t1,t2,t3,t4,t5,t6);}
t7=C_i_check_string_2(t2,lf[61]);
t8=C_i_check_string_2(t3,lf[61]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2710,a[2]=t4,a[3]=t5,a[4]=t1,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t6)){
t10=t9;
f_2710(t10,t6);}
else{
t10=C_block_size(t2);
t11=C_fixnum_difference(t10,t4);
t12=C_block_size(t3);
t13=C_fixnum_difference(t12,t5);
t14=t9;
f_2710(t14,C_i_fixnum_min(t11,t13));}}

/* k3507 in loop in string-chop in k1352 */
static void C_ccall f_3509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3509,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3513,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_fixnum_difference(((C_word*)t0)[3],((C_word*)t0)[4]);
t5=C_fixnum_plus(((C_word*)t0)[5],((C_word*)t0)[4]);
/* data-structures.scm:558: loop */
t6=((C_word*)((C_word*)t0)[6])[1];
f_3478(t6,t3,t4,t5);}

/* k1630 in loop */
static void C_ccall f_1632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:109: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1613(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* loop1 in string-intersperse in k1352 */
static void C_fcall f_3046(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3046,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
if(C_truep(C_eqp(((C_word*)t0)[2],C_SCHEME_END_OF_LIST))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[69]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3056,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t5=C_fixnum_difference(t3,((C_word*)t0)[4]);
/* data-structures.scm:446: ##sys#allocate-vector */
t6=*((C_word*)lf[70]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t4,t5,C_SCHEME_TRUE,C_make_character(32),C_SCHEME_FALSE);}}
else{
t4=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_slot(t2,C_fix(0));
t6=C_i_check_string_2(t5,lf[67]);
t7=C_slot(t2,C_fix(1));
t8=C_block_size(t5);
t9=C_fixnum_plus(((C_word*)t0)[4],t3);
t10=C_fixnum_plus(t8,t9);
/* data-structures.scm:461: loop1 */
t14=t1;
t15=t7;
t16=t10;
t1=t14;
t2=t15;
t3=t16;
goto loop;}
else{
/* data-structures.scm:463: ##sys#error-not-a-proper-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[24]+1)))(3,*((C_word*)lf[24]+1),t1,((C_word*)t0)[2]);}}}

/* k3511 in k3507 in loop in string-chop in k1352 */
static void C_ccall f_3513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3513,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k2263 in loop */
static void C_ccall f_2265(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=C_slot(((C_word*)t0)[4],C_fix(1));
/* data-structures.scm:249: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2240(t3,((C_word*)t0)[2],t2);}}

/* loop */
static void C_fcall f_1613(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1613,NULL,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(0));
t4=C_slot(t2,C_fix(1));
t5=t4;
if(C_truep(C_i_nullp(t5))){
C_apply(4,0,t1,t3,((C_word*)t0)[2]);}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1632,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
C_apply(4,0,t6,t3,((C_word*)t0)[2]);}}

/* f_2234 in alist-ref in k1352 */
static void C_ccall f_2234(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2234,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2240,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word)li50),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2240(t7,t1,t3);}

/* k3664 in loop in sorted? in k1352 */
static void C_ccall f_3666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_car(t2);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* data-structures.scm:611: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_3642(t6,((C_word*)t0)[2],t3,t5);}}

/* loop in o in k1352 */
static void C_fcall f_1518(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_1518,NULL,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(0));
t4=t3;
t5=C_slot(t2,C_fix(1));
t6=t5;
if(C_truep(C_i_nullp(t6))){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t4);}
else{
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1532,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=((C_word)li18),tmp=(C_word)a,a+=6,tmp);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}

/* f_1607 in each in k1352 */
static void C_ccall f_1607(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_1607r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1607r(t0,t1,t2);}}

static void C_ccall f_1607r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1613,a[2]=t2,a[3]=t4,a[4]=((C_word)li25),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1613(t6,t1,((C_word*)t0)[2]);}

/* k4437 in queue-remove! in k1352 */
static void C_ccall f_4439(C_word c,C_word t0,C_word t1){
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
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_i_setslot(((C_word*)t0)[3],C_fix(1),t2);
t4=C_eqp(C_SCHEME_END_OF_LIST,t2);
t5=(C_truep(t4)?C_i_set_i_slot(((C_word*)t0)[3],C_fix(2),C_SCHEME_END_OF_LIST):C_SCHEME_UNDEFINED);
t6=C_slot(((C_word*)t0)[3],C_fix(3));
t7=C_fixnum_difference(t6,C_fix(1));
t8=C_i_set_i_slot(((C_word*)t0)[3],C_fix(3),t7);
t9=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_slot(((C_word*)t0)[2],C_fix(0)));}

/* loop in k4229 in binary-search in k1352 */
static void C_fcall f_4245(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_save_and_reclaim((void*)trf_4245,NULL,4,t0,t1,t2,t3);}
t4=C_fixnum_difference(t3,t2);
t5=C_fixnum_shift_right(t4,C_fix(1));
t6=C_fixnum_plus(t2,t5);
t7=t6;
t8=C_slot(((C_word*)((C_word*)t0)[2])[1],t7);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4255,a[2]=t1,a[3]=t7,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:785: proc */
t10=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t10))(3,t10,t9,t8);}

/* loop */
static void C_fcall f_2240(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_2240,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=t3;
t5=C_i_check_pair_2(t4,lf[40]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2265,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t4,C_fix(0));
/* data-structures.scm:247: cmp */
t8=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t8))(4,t8,t6,t7,((C_word*)t0)[4]);}
else{
/* data-structures.scm:250: error */
t3=*((C_word*)lf[37]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,lf[40],lf[41],t2);}}}

/* merge in k1352 */
static void C_ccall f_3672(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3672,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_nullp(t2))){
t5=t3;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
if(C_truep(C_i_nullp(t3))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}
else{
t5=C_i_car(t2);
t6=t2;
t7=C_u_i_cdr(t6);
t8=C_i_car(t3);
t9=t3;
t10=C_u_i_cdr(t9);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3702,a[2]=t12,a[3]=t4,a[4]=((C_word)li97),tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_3702(t14,t1,t5,t7,t8,t10);}}}

/* k2569 in loop in traverse in k1352 */
static void C_ccall f_2571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* data-structures.scm:322: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2558(t3,((C_word*)t0)[2],t2);}}

/* k3936 in step in sort! in k1352 */
static void C_ccall f_3938(C_word c,C_word t0,C_word t1){
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
if(C_truep(t1)){
t2=C_i_setslot(((C_word*)t0)[2],C_fix(0),((C_word*)t0)[3]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_i_set_car(t3,((C_word*)t0)[4]);
t5=C_u_i_cdr(((C_word*)t0)[2]);
t6=C_i_set_cdr(t5,C_SCHEME_END_OF_LIST);
t7=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,((C_word*)t0)[2]);}
else{
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_i_set_cdr(t2,C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[2]);}}

/* k4253 in loop in k4229 in binary-search in k1352 */
static void C_ccall f_4255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}
else{
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
t3=C_eqp(((C_word*)t0)[4],((C_word*)t0)[3]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
/* data-structures.scm:787: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_4245(t4,((C_word*)t0)[2],((C_word*)t0)[6],((C_word*)t0)[3]);}}
else{
t3=C_eqp(((C_word*)t0)[6],((C_word*)t0)[3]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
/* data-structures.scm:788: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_4245(t4,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}}}}

/* k4096 in k4047 in visit in topological-sort in k1352 */
static void C_ccall f_4098(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4098,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list1(&a,1,t2);
t4=t3;
t5=C_a_i_cons(&a,2,lf[91],lf[94]);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4086,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t6,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:742: ##sys#get-call-chain */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[100]+1)))(2,*((C_word*)lf[100]+1),t7);}

/* loop in traverse in k1352 */
static void C_fcall f_2558(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2558,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greaterp(t2,((C_word*)t0)[2]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2571,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:321: test */
t4=((C_word*)t0)[4];
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t3,t2,((C_word*)t0)[5]);}}

/* step in sort! in k1352 */
static void C_fcall f_3890(C_word t0,C_word t1,C_word t2){
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
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3890,NULL,3,t0,t1,t2);}
if(C_truep(C_i_greaterp(t2,C_fix(2)))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3900,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_quotient(4,0,t3,t2,C_fix(2));}
else{
if(C_truep(C_i_nequalp(t2,C_fix(2)))){
t3=C_i_car(((C_word*)((C_word*)t0)[4])[1]);
t4=t3;
t5=C_i_cadr(((C_word*)((C_word*)t0)[4])[1]);
t6=t5;
t7=((C_word*)((C_word*)t0)[4])[1];
t8=((C_word*)((C_word*)t0)[4])[1];
t9=C_u_i_cdr(t8);
t10=C_mutate2(((C_word *)((C_word*)t0)[4])+1,C_u_i_cdr(t9));
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3938,a[2]=t7,a[3]=t6,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:691: less? */
t12=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t12))(4,t12,t11,t6,t4);}
else{
if(C_truep(C_i_nequalp(t2,C_fix(1)))){
t3=((C_word*)((C_word*)t0)[4])[1];
t4=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t5=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t4);
t6=C_i_set_cdr(t3,C_SCHEME_END_OF_LIST);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}}}}

/* ##sys#substring-ci=? in k1352 */
static void C_ccall f_2797(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[7],*a=ab;
if(c!=7) C_bad_argc_2(c,7,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_2797,7,t0,t1,t2,t3,t4,t5,t6);}
t7=C_i_check_string_2(t2,lf[63]);
t8=C_i_check_string_2(t3,lf[63]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2807,a[2]=t4,a[3]=t5,a[4]=t1,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t6)){
t10=t9;
f_2807(t10,t6);}
else{
t10=C_block_size(t2);
t11=C_fixnum_difference(t10,t4);
t12=C_block_size(t3);
t13=C_fixnum_difference(t12,t5);
t14=t9;
f_2807(t14,C_i_fixnum_min(t11,t13));}}

/* queue-remove! in k1352 */
static void C_ccall f_4429(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4429,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[104],lf[113]);
t4=C_slot(t2,C_fix(1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4439,a[2]=t5,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=C_eqp(C_SCHEME_END_OF_LIST,t5);
if(C_truep(t7)){
/* data-structures.scm:847: ##sys#error */
t8=*((C_word*)lf[20]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t6,lf[113],lf[114],t2);}
else{
t8=t6;
f_4439(2,t8,C_SCHEME_UNDEFINED);}}

/* k3860 in k3839 in merge! in k1352 */
static void C_ccall f_3862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1736 in loop in butlast in k1352 */
static void C_ccall f_1738(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1738,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k3601 in doloop734 in sorted? in k1352 */
static void C_ccall f_3603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3603,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_nequalp(((C_word*)t0)[3],((C_word*)t0)[4]));}
else{
t2=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
t3=((C_word*)((C_word*)t0)[5])[1];
f_3593(t3,((C_word*)t0)[2],t2);}}

/* queue->list in k1352 */
static void C_ccall f_4476(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4476,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[104],lf[115]);
t4=C_slot(t2,C_fix(1));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4489,a[2]=t6,a[3]=((C_word)li119),tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_4489(t8,t1,t4,C_SCHEME_END_OF_LIST);}

/* sort! in k1352 */
static void C_ccall f_3887(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[17],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3887,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3890,a[2]=t3,a[3]=t6,a[4]=t4,a[5]=((C_word)li101),tmp=(C_word)a,a+=6,tmp));
if(C_truep(C_i_vectorp(((C_word*)t4)[1]))){
t8=C_i_vector_length(((C_word*)t4)[1]);
t9=t8;
t10=((C_word*)t4)[1];
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3974,a[2]=t4,a[3]=t10,a[4]=t1,a[5]=t6,a[6]=t9,tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:706: vector->list */
t12=*((C_word*)lf[85]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t11,((C_word*)t4)[1]);}
else{
t8=C_i_length(((C_word*)t4)[1]);
/* data-structures.scm:712: step */
t9=((C_word*)t6)[1];
f_3890(t9,t1,t8);}}

/* k4208 in loop in topological-sort in k1352 */
static void C_ccall f_4210(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:764: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4189(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3901 in k3898 in step in sort! in k1352 */
static void C_ccall f_3903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3903,2,t0,t1);}
t2=t1;
t3=C_a_i_minus(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3909,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:684: step */
t5=((C_word*)((C_word*)t0)[6])[1];
f_3890(t5,t4,t3);}

/* k3898 in step in sort! in k1352 */
static void C_ccall f_3900(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3900,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3903,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:682: step */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3890(t4,t3,t2);}

/* k3907 in k3901 in k3898 in step in sort! in k1352 */
static void C_ccall f_3909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:685: merge! */
t2=*((C_word*)lf[83]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* loop in butlast in k1352 */
static void C_fcall f_1717(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(4);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1717,NULL,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(1));
t4=(C_truep(C_blockp(t3))?C_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_slot(t2,C_fix(0));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1738,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:141: loop */
t9=t7;
t10=t3;
t1=t9;
t2=t10;
goto loop;}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_END_OF_LIST);}}

/* binary-search in k1352 */
static void C_ccall f_4227(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4227,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4231,a[2]=t4,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t4)[1]))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4305,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:777: list->vector */
t7=*((C_word*)lf[87]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t4)[1]);}
else{
t6=t5;
f_4231(t6,C_i_check_vector_2(((C_word*)t4)[1],lf[102]));}}

/* a2595 in substring-index in k1352 */
static void C_ccall f_2596(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2596,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_substring_compare(((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0),t2,t3));}

/* ##sys#substring-index-ci in k1352 */
static void C_ccall f_2599(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2599,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2605,a[2]=t2,a[3]=t3,a[4]=((C_word)li65),tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:336: traverse */
f_2516(t1,t2,t3,t4,t5,lf[57]);}

/* ##sys#substring-index in k1352 */
static void C_ccall f_2590(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2590,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2596,a[2]=t2,a[3]=t3,a[4]=((C_word)li63),tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:330: traverse */
f_2516(t1,t2,t3,t4,t5,lf[55]);}

/* flatten in k1352 */
static void C_ccall f_1740(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_1740r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1740r(t0,t1,t2);}}

static void C_ccall f_1740r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1746,a[2]=t4,a[3]=((C_word)li36),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1746(t6,t1,t2,C_SCHEME_END_OF_LIST);}

/* loop in flatten in k1352 */
static void C_fcall f_1746(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(5);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1746,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_slot(t2,C_fix(0));
t5=t4;
t6=C_slot(t2,C_fix(1));
if(C_truep(C_i_listp(t5))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1772,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:151: loop */
t11=t7;
t12=t6;
t13=t3;
t1=t11;
t2=t12;
t3=t13;
goto loop;}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1779,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:152: loop */
t11=t7;
t12=t6;
t13=t3;
t1=t11;
t2=t12;
t3=t13;
goto loop;}}}

/* k4229 in binary-search in k1352 */
static void C_fcall f_4231(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4231,NULL,2,t0,t1);}
t2=C_block_size(((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(0)))){
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4245,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word)li109),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_4245(t6,((C_word*)t0)[4],C_fix(0),t2);}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2159 in k2137 in loop in alist-update in k1352 */
static void C_ccall f_2161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2161,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* loop in intersperse in k1352 */
static void C_fcall f_1681(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1681,NULL,3,t0,t1,t2);}
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_i_cdr(t2);
if(C_truep(C_eqp(t3,C_SCHEME_END_OF_LIST))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t4=C_slot(t2,C_fix(0));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1706,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:134: loop */
t9=t6;
t10=t3;
t1=t9;
t2=t10;
goto loop;}}}

/* k2137 in loop in alist-update in k1352 */
static void C_ccall f_2139(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2139,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t2,t3));}
else{
t2=C_slot(((C_word*)t0)[6],C_fix(0));
t3=C_slot(((C_word*)t0)[6],C_fix(1));
t4=C_a_i_cons(&a,2,t2,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2161,a[2]=((C_word*)t0)[5],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_slot(((C_word*)t0)[4],C_fix(1));
/* data-structures.scm:233: loop */
t8=((C_word*)((C_word*)t0)[7])[1];
f_2098(t8,t6,t7);}}

/* loop in sorted? in k1352 */
static void C_fcall f_3642(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3642,NULL,4,t0,t1,t2,t3);}
t4=C_i_nullp(t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3666,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t6=C_i_car(t3);
/* data-structures.scm:610: less? */
t7=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t5,t6,t2);}}

/* intersperse in k1352 */
static void C_ccall f_1675(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1675,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1681,a[2]=t3,a[3]=t5,a[4]=((C_word)li32),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1681(t7,t1,t2);}

/* substring=? in k1352 */
static void C_ccall f_2737(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_2737r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2737r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2737r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_fix(0):C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_fix(0):C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_nullp(t12);
t14=(C_truep(t13)?C_SCHEME_FALSE:C_i_car(t12));
if(C_truep(C_i_nullp(t12))){
/* data-structures.scm:386: ##sys#substring=? */
t15=*((C_word*)lf[60]+1);
((C_proc7)(void*)(*((C_word*)t15+1)))(7,t15,t1,t2,t3,t6,t10,t14);}
else{
t15=C_i_cdr(t12);
/* data-structures.scm:386: ##sys#substring=? */
t16=*((C_word*)lf[60]+1);
((C_proc7)(void*)(*((C_word*)t16+1)))(7,t16,t1,t2,t3,t6,t10,t14);}}

/* queue-length in k1352 */
static void C_ccall f_4322(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4322,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[104],lf[106]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(3)));}

/* k4129 in walk in k4109 in k4047 in visit in topological-sort in k1352 */
static void C_ccall f_4131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4131,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_cons(&a,2,t1,t4));}

/* queue-empty? in k1352 */
static void C_ccall f_4331(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4331,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[104],lf[107]);
t4=C_slot(t2,C_fix(1));
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_eqp(C_SCHEME_END_OF_LIST,t4));}

/* k1704 in loop in intersperse in k1352 */
static void C_ccall f_1706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1706,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,((C_word*)t0)[4],t2));}

/* butlast in k1352 */
static void C_ccall f_1708(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1708,3,t0,t1,t2);}
t3=C_i_check_pair_2(t2,lf[16]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1717,a[2]=t5,a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_1717(t7,t1,t2);}

/* join in k1352 */
static void C_ccall f_1866(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_1866r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1866r(t0,t1,t2,t3);}}

static void C_ccall f_1866r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1870,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t5=t3;
t6=t4;
f_1870(t6,C_u_i_car(t5));}
else{
t5=t4;
f_1870(t5,C_SCHEME_END_OF_LIST);}}

/* k4151 in walk in k4109 in k4047 in visit in topological-sort in k1352 */
static void C_ccall f_4153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:754: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4117(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* queue-first in k1352 */
static void C_ccall f_4344(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_4344,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[104],lf[108]);
t4=C_slot(t2,C_fix(1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4354,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_eqp(C_SCHEME_END_OF_LIST,t5);
if(C_truep(t7)){
/* data-structures.scm:822: ##sys#error */
t8=*((C_word*)lf[20]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t6,lf[108],lf[109],t2);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_slot(t5,C_fix(0)));}}

/* k3325 in string-translate in k1352 */
static void C_ccall f_3327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:481: instring */
f_3133(((C_word*)t0)[3],t1);}

/* map-loop365 in conc in k1352 */
static void C_fcall f_2481(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2481,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2510,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* data-structures.scm:301: g371 */
t5=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4352 in queue-first in k1352 */
static void C_ccall f_4354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_slot(((C_word*)t0)[3],C_fix(0)));}

/* string-translate* in k1352 */
static void C_ccall f_3335(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3335,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[75]);
t5=C_i_check_list_2(t3,lf[75]);
t6=C_block_size(t2);
t7=t6;
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3347,a[2]=t7,a[3]=t2,a[4]=t9,a[5]=t3,a[6]=((C_word)li89),tmp=(C_word)a,a+=7,tmp));
/* data-structures.scm:546: collect */
t11=((C_word*)t9)[1];
f_3347(t11,t1,C_fix(0),C_fix(0),C_fix(0),C_SCHEME_END_OF_LIST);}

/* k3972 in sort! in k1352 */
static void C_ccall f_3974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3974,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3981,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:707: step */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3890(t4,t3,((C_word*)t0)[6]);}

/* queue-last in k1352 */
static void C_ccall f_4365(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_4365,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[104],lf[110]);
t4=C_slot(t2,C_fix(2));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4375,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_eqp(C_SCHEME_END_OF_LIST,t5);
if(C_truep(t7)){
/* data-structures.scm:830: ##sys#error */
t8=*((C_word*)lf[20]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t6,lf[110],lf[111],t2);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_slot(t5,C_fix(0)));}}

/* doloop805 in k3979 in k3972 in sort! in k1352 */
static void C_fcall f_3983(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(4);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3983,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[2]);}
else{
t4=C_i_car(t2);
t5=C_i_vector_set(((C_word*)t0)[2],t3,t4);
t6=t2;
t7=C_u_i_cdr(t6);
t8=C_a_i_plus(&a,2,t3,C_fix(1));
t10=t1;
t11=t7;
t12=t8;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}

/* k3979 in k3972 in sort! in k1352 */
static void C_ccall f_3981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3981,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3983,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li102),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3983(t5,((C_word*)t0)[3],t1,C_fix(0));}

/* k2461 in ->string in k1352 */
static void C_ccall f_2463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2463,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2466,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:296: display */
t4=*((C_word*)lf[49]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],t2);}

/* k2464 in k2461 in ->string in k1352 */
static void C_ccall f_2466(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:297: get-output-string */
t2=*((C_word*)lf[48]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* loop in k1786 in chop in k1352 */
static void C_fcall f_1796(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1796,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
if(C_truep(C_fixnum_lessp(t3,((C_word*)t0)[2]))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list1(&a,1,t2));}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1817,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=((C_word)li38),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_1817(t7,t1,C_SCHEME_END_OF_LIST,t2,((C_word*)t0)[2]);}}}

/* k1868 in join in k1352 */
static void C_fcall f_1870(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1870,NULL,2,t0,t1);}
t2=t1;
t3=C_i_check_list_2(t2,lf[22]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1878,a[2]=t2,a[3]=t5,a[4]=((C_word)li41),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1878(t7,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* scan in loop in string-split in k1352 */
static void C_fcall f_2962(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(5);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2962,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* data-structures.scm:427: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2935(t4,t1,t3,((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t3=C_subchar(((C_word*)t0)[7],t2);
t4=C_eqp(((C_word*)t0)[8],t3);
if(C_truep(t4)){
t5=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t6=t5;
t7=C_fixnum_greaterp(((C_word*)t0)[3],((C_word*)t0)[6]);
t8=(C_truep(t7)?t7:((C_word*)t0)[9]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3001,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:431: add */
t10=((C_word*)t0)[10];
f_2915(t10,t9,((C_word*)t0)[6],((C_word*)t0)[3],((C_word*)t0)[5]);}
else{
/* data-structures.scm:432: loop */
t9=((C_word*)((C_word*)t0)[4])[1];
f_2935(t9,t1,t6,((C_word*)t0)[5],t6);}}
else{
t5=C_fixnum_plus(t2,C_fix(1));
/* data-structures.scm:433: scan */
t13=t1;
t14=t5;
t1=t13;
t2=t14;
goto loop;}}}

/* loop in k1868 in join in k1352 */
static void C_fcall f_1878(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(5);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1878,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=t3;
t5=C_slot(t2,C_fix(1));
if(C_truep(C_i_nullp(t5))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t4);}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1913,a[2]=t1,a[3]=t4,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:181: loop */
t8=t6;
t9=t5;
t1=t8;
t2=t9;
goto loop;}}
else{
/* data-structures.scm:175: ##sys#error-not-a-proper-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[24]+1)))(3,*((C_word*)lf[24]+1),t1,t2);}}}

/* f_3310 in string-translate in k1352 */
static void C_ccall f_3310(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3310,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_eqp(t2,((C_word*)t0)[2]));}

/* k4373 in queue-last in k1352 */
static void C_ccall f_4375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_slot(((C_word*)t0)[3],C_fix(0)));}

/* k2477 in conc in k1352 */
static void C_ccall f_2479(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[52]+1),t1);}

/* conc in k1352 */
static void C_ccall f_2471(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+16)){
C_save_and_reclaim((void*)tr2r,(void*)f_2471r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2471r(t0,t1,t2);}}

static void C_ccall f_2471r(C_word t0,C_word t1,C_word t2){
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
C_word *a=C_alloc(16);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=*((C_word*)lf[45]+1);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2479,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2481,a[2]=t6,a[3]=t10,a[4]=t4,a[5]=t7,a[6]=((C_word)li59),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_2481(t12,t8,t2);}

/* queue-add! in k1352 */
static void C_ccall f_4386(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4386,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[104],lf[112]);
t5=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4396,a[2]=t2,a[3]=t6,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t8=C_slot(t2,C_fix(1));
t9=C_eqp(C_SCHEME_END_OF_LIST,t8);
if(C_truep(t9)){
t10=t7;
f_4396(t10,C_i_setslot(t2,C_fix(1),t6));}
else{
t10=C_slot(t2,C_fix(2));
t11=t7;
f_4396(t11,C_i_setslot(t10,C_fix(1),t6));}}

/* k4109 in k4047 in visit in topological-sort in k1352 */
static void C_ccall f_4111(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4111,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],lf[90]);
t3=((C_word*)t0)[3];
t4=C_u_i_car(t3);
t5=C_a_i_cons(&a,2,t2,t4);
t6=((C_word*)t0)[3];
t7=C_u_i_cdr(t6);
t8=C_a_i_cons(&a,2,t5,t7);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4117,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t10,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li105),tmp=(C_word)a,a+=9,tmp));
t12=((C_word*)t10)[1];
f_4117(t12,((C_word*)t0)[8],t1,t8);}

/* walk in k4109 in k4047 in visit in topological-sort in k1352 */
static void C_fcall f_4117(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_save_and_reclaim((void*)trf_4117,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4131,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=C_i_car(t3);
/* data-structures.scm:751: alist-update! */
t6=*((C_word*)lf[29]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t4,((C_word*)t0)[2],lf[101],t5,((C_word*)t0)[3]);}
else{
t4=C_i_car(t2);
t5=t2;
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4153,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=C_a_i_cons(&a,2,t4,((C_word*)t0)[5]);
/* data-structures.scm:755: visit */
t9=((C_word*)((C_word*)t0)[6])[1];
f_4045(t9,t7,((C_word*)t0)[7],t4,C_SCHEME_FALSE,t8,t3);}}

/* k1777 in loop in flatten in k1352 */
static void C_ccall f_1779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1779,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k1770 in loop in flatten in k1352 */
static void C_ccall f_1772(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:151: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1746(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1493 in a1486 */
static void C_ccall f_1495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k4394 in queue-add! in k1352 */
static void C_fcall f_4396(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[2],C_fix(2),((C_word*)t0)[3]);
t3=C_slot(((C_word*)t0)[2],C_fix(3));
t4=C_fixnum_plus(t3,C_fix(1));
t5=C_i_set_i_slot(((C_word*)t0)[2],C_fix(3),t4);
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}

/* k3496 in loop in string-chop in k1352 */
static void C_ccall f_3498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3498,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list1(&a,1,t1));}

/* k3727 in k3707 in loop in merge in k1352 */
static void C_ccall f_3729(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3729,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* doloop198 in loop in k1786 in chop in k1352 */
static void C_fcall f_1817(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
a=C_alloc(7);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1817,NULL,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1831,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:167: reverse */
t7=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}
else{
t6=C_slot(t3,C_fix(0));
t7=C_a_i_cons(&a,2,t6,t2);
t8=C_slot(t3,C_fix(1));
t9=C_fixnum_difference(t4,C_fix(1));
t12=t1;
t13=t7;
t14=t8;
t15=t9;
t1=t12;
t2=t13;
t3=t14;
t4=t15;
goto loop;}}

/* k2062 in loop */
static void C_ccall f_2064(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=C_slot(((C_word*)t0)[4],C_fix(1));
/* data-structures.scm:211: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2048(t3,((C_word*)t0)[2],t2);}}

/* loop in merge in k1352 */
static void C_fcall f_3702(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3702,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3709,a[2]=t5,a[3]=t2,a[4]=t3,a[5]=t1,a[6]=t4,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* data-structures.scm:627: less? */
t7=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t6,t4,t2);}

/* k1972 in loop in compress in k1352 */
static void C_ccall f_1974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1974,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k3707 in loop in merge in k1352 */
static void C_ccall f_3709(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3709,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(C_i_nullp(((C_word*)t0)[2]))){
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,((C_word*)t0)[6],t2));}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3729,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[2]);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
/* data-structures.scm:630: loop */
t6=((C_word*)((C_word*)t0)[7])[1];
f_3702(t6,t2,((C_word*)t0)[3],((C_word*)t0)[4],t3,t5);}}
else{
if(C_truep(C_i_nullp(((C_word*)t0)[4]))){
t2=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[2]);
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,((C_word*)t0)[3],t2));}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3755,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[4]);
t4=((C_word*)t0)[4];
t5=C_u_i_cdr(t4);
/* data-structures.scm:634: loop */
t6=((C_word*)((C_word*)t0)[7])[1];
f_3702(t6,t2,t3,t5,((C_word*)t0)[6],((C_word*)t0)[2]);}}}

/* k2368 in rev-string-append in reverse-string-append in k1352 */
static void C_ccall f_2370(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2370,2,t0,t1);}
t2=t1;
t3=C_i_string_length(t2);
t4=C_fixnum_difference(t3,((C_word*)t0)[2]);
t5=C_fixnum_difference(t4,((C_word*)t0)[3]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2379,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word)li55),tmp=(C_word)a,a+=6,tmp);
t7=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,f_2379(t6,C_fix(0),t5));}

/* loop */
static void C_fcall f_2048(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2048,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2064,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t4))){
t6=C_slot(t4,C_fix(0));
/* data-structures.scm:209: cmp */
t7=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t5,t6,((C_word*)t0)[4]);}
else{
t6=t5;
f_2064(2,t6,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k3418 in loop in collect in string-translate* in k1352 */
static void C_fcall f_3420(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3420,NULL,2,t0,t1);}
t2=C_i_string_length(((C_word*)t0)[2]);
t3=C_fixnum_plus(((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);
/* data-structures.scm:541: collect */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3347(t5,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[7],t3,t4);}

/* f_2042 in alist-update! in k1352 */
static void C_ccall f_2042(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2042,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2048,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word)li45),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2048(t7,t1,t3);}

/* k3444 in loop in collect in string-translate* in k1352 */
static void C_ccall f_3446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3446,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];
f_3420(t4,t3);}

/* k4303 in binary-search in k1352 */
static void C_ccall f_4305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_4231(t3,t2);}

/* loop in k2368 in rev-string-append in reverse-string-append in k1352 */
static C_word C_fcall f_2379(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_stack_overflow_check;
loop:
if(C_truep(C_fixnum_lessp(t1,((C_word*)t0)[2]))){
t3=C_i_string_ref(((C_word*)t0)[3],t1);
t4=C_i_string_set(((C_word*)t0)[4],t2,t3);
t5=C_fixnum_plus(t1,C_fix(1));
t6=C_fixnum_plus(t2,C_fix(1));
t8=t5;
t9=t6;
t1=t8;
t2=t9;
goto loop;}
else{
return(((C_word*)t0)[4]);}}

/* make-queue in k1352 */
static void C_ccall f_4310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4310,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_record4(&a,4,lf[104],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_fix(0)));}

/* queue? in k1352 */
static void C_ccall f_4316(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4316,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[104]));}

/* string-chop in k1352 */
static void C_ccall f_3463(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3463,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[78]);
t5=C_i_check_exact_2(t3,lf[78]);
t6=C_block_size(t2);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3478,a[2]=t3,a[3]=t2,a[4]=t8,a[5]=((C_word)li91),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_3478(t10,t1,t6,C_fix(0));}

/* loop in string-chop in k1352 */
static void C_fcall f_3478(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3478,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_fixnum_less_or_equal_p(t2,C_fix(0)))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
if(C_truep(C_fixnum_less_or_equal_p(t2,((C_word*)t0)[2]))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3498,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=C_fixnum_plus(t3,t2);
/* data-structures.scm:557: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[66]+1)))(5,*((C_word*)lf[66]+1),t4,((C_word*)t0)[3],t3,t5);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3509,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=C_fixnum_plus(t3,((C_word*)t0)[2]);
/* data-structures.scm:558: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[66]+1)))(5,*((C_word*)lf[66]+1),t4,((C_word*)t0)[3],t3,t5);}}}

/* rev-string-append in reverse-string-append in k1352 */
static void C_fcall f_2356(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(6);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2356,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_car(t4);
t6=C_i_string_length(t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2370,a[2]=t3,a[3]=t7,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=t2;
t10=C_u_i_cdr(t9);
t11=C_fixnum_plus(t3,t7);
/* data-structures.scm:276: rev-string-append */
t13=t8;
t14=t10;
t15=t11;
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
/* data-structures.scm:283: make-string */
t4=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}}

/* reverse-string-append in k1352 */
static void C_ccall f_2353(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2353,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2356,a[2]=t4,a[3]=((C_word)li56),tmp=(C_word)a,a+=4,tmp));
/* data-structures.scm:284: rev-string-append */
t6=((C_word*)t4)[1];
f_2356(t6,t1,t2,C_fix(0));}

/* k1833 in k1829 in doloop198 in loop in k1786 in chop in k1352 */
static void C_ccall f_1835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1835,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k1829 in doloop198 in loop in k1786 in chop in k1352 */
static void C_ccall f_1831(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1831,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1835,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_fixnum_difference(((C_word*)t0)[3],((C_word*)t0)[4]);
/* data-structures.scm:167: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1796(t5,t3,((C_word*)t0)[6],t4);}

/* alist-update! in k1352 */
static void C_ccall f_2003(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr5r,(void*)f_2003r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_2003r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_2003r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a=C_alloc(10);
t6=C_i_nullp(t5);
t7=(C_truep(t6)?*((C_word*)lf[30]+1):C_i_car(t5));
t8=t7;
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2010,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t10=C_eqp(*((C_word*)lf[31]+1),t8);
if(C_truep(t10)){
t11=t9;
f_2010(t11,*((C_word*)lf[32]+1));}
else{
t11=C_eqp(*((C_word*)lf[30]+1),t8);
if(C_truep(t11)){
t12=t9;
f_2010(t12,*((C_word*)lf[33]+1));}
else{
t12=C_eqp(*((C_word*)lf[34]+1),t8);
t13=t9;
f_2010(t13,(C_truep(t12)?*((C_word*)lf[35]+1):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2042,a[2]=t8,a[3]=((C_word)li46),tmp=(C_word)a,a+=4,tmp)));}}}

/* f_1593 in each in k1352 */
static void C_ccall f_1593(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1593,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[11]+1));}

/* loop in topological-sort in k1352 */
static void C_fcall f_4189(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_4189,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_cdr(t3));}
else{
t4=C_i_cdr(t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4210,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=C_i_caar(t2);
t8=t2;
t9=C_u_i_car(t8);
t10=C_u_i_cdr(t9);
/* data-structures.scm:765: visit */
t11=((C_word*)((C_word*)t0)[3])[1];
f_4045(t11,t6,t2,t7,t10,C_SCHEME_END_OF_LIST,t3);}}

/* k2011 in k2008 in alist-update! in k1352 */
static void C_ccall f_2013(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2013,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_setslot(t1,C_fix(1),((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[2]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,t2,((C_word*)t0)[3]));}}

/* k2008 in alist-update! in k1352 */
static void C_fcall f_2010(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2010,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2013,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:212: aq */
t3=t1;
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[3]);}

/* doloop734 in sorted? in k1352 */
static void C_fcall f_3593(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3593,NULL,3,t0,t1,t2);}
t3=C_i_nequalp(t2,((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3603,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t5=t4;
f_3603(2,t5,t3);}
else{
t5=C_i_vector_ref(((C_word*)t0)[4],t2);
t6=C_a_i_minus(&a,2,t2,C_fix(1));
t7=C_i_vector_ref(((C_word*)t0)[4],t6);
/* data-structures.scm:604: less? */
t8=((C_word*)t0)[5];
((C_proc4)C_fast_retrieve_proc(t8))(4,t8,t4,t5,t7);}}

/* sorted? in k1352 */
static void C_ccall f_3566(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3566,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_TRUE);}
else{
if(C_truep(C_i_vectorp(t2))){
t4=t2;
t5=C_block_size(t4);
t6=t5;
if(C_truep(C_fixnum_less_or_equal_p(t6,C_fix(1)))){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_TRUE);}
else{
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3593,a[2]=t6,a[3]=t8,a[4]=t2,a[5]=t3,a[6]=((C_word)li94),tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_3593(t10,t1,C_fix(1));}}
else{
t4=C_i_car(t2);
t5=t2;
t6=C_u_i_cdr(t5);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3642,a[2]=t8,a[3]=t3,a[4]=((C_word)li95),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_3642(t10,t1,t4,t6);}}}

/* loop in merge! in k1352 */
static void C_fcall f_3766(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3766,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3773,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t6=C_i_car(t4);
t7=C_i_car(t3);
/* data-structures.scm:644: less? */
t8=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t8))(4,t8,t5,t6,t7);}

/* merge! in k1352 */
static void C_ccall f_3763(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3763,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3766,a[2]=t6,a[3]=t4,a[4]=((C_word)li99),tmp=(C_word)a,a+=5,tmp));
if(C_truep(C_i_nullp(t2))){
t8=t3;
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
if(C_truep(C_i_nullp(t3))){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t2);}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3841,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t9=C_i_car(t3);
t10=C_i_car(t2);
/* data-structures.scm:659: less? */
t11=t4;
((C_proc4)C_fast_retrieve_proc(t11))(4,t11,t8,t9,t10);}}}

/* loop in string-split in k1352 */
static void C_fcall f_2935(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2935,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2945,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=C_fixnum_greaterp(t2,t4);
t7=(C_truep(t6)?t6:((C_word*)t0)[4]);
if(C_truep(t7)){
/* data-structures.scm:422: add */
t8=((C_word*)t0)[5];
f_2915(t8,t5,t4,t2,t3);}
else{
t8=((C_word*)((C_word*)t0)[3])[1];
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_truep(t8)?t8:C_SCHEME_END_OF_LIST));}}
else{
t5=C_subchar(((C_word*)t0)[6],t2);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2962,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[8],a[5]=t3,a[6]=t4,a[7]=((C_word*)t0)[9],a[8]=t5,a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=t7,a[12]=((C_word)li76),tmp=(C_word)a,a+=13,tmp));
t9=((C_word*)t7)[1];
f_2962(t9,t1,C_fix(0));}}

/* k2928 in add in string-split in k1352 */
static void C_ccall f_2930(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2930,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)t0)[3],C_fix(1),t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}

/* k3771 in loop in merge! in k1352 */
static void C_ccall f_3773(C_word c,C_word t0,C_word t1){
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
if(C_truep(t1)){
t2=C_i_set_cdr(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
if(C_truep(C_i_nullp(t4))){
t5=((C_word*)t0)[3];
t6=((C_word*)t0)[4];
t7=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_setslot(t5,C_fix(1),t6));}
else{
t5=((C_word*)t0)[3];
t6=C_u_i_cdr(t5);
/* data-structures.scm:649: loop */
t7=((C_word*)((C_word*)t0)[6])[1];
f_3766(t7,((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[4],t6);}}
else{
t2=C_i_set_cdr(((C_word*)t0)[2],((C_word*)t0)[4]);
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
if(C_truep(C_i_nullp(t4))){
t5=((C_word*)t0)[4];
t6=((C_word*)t0)[3];
t7=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_setslot(t5,C_fix(1),t6));}
else{
t5=((C_word*)t0)[4];
t6=C_u_i_cdr(t5);
/* data-structures.scm:655: loop */
t7=((C_word*)((C_word*)t0)[6])[1];
f_3766(t7,((C_word*)t0)[5],((C_word*)t0)[4],t6,((C_word*)t0)[3]);}}}

/* k2943 in loop in string-split in k1352 */
static void C_ccall f_2945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)((C_word*)t0)[2])[1];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?t2:C_SCHEME_END_OF_LIST));}

/* loop in compress in k1352 */
static void C_fcall f_1932(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(4);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1932,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
if(C_truep(C_i_pairp(t2))){
if(C_truep(C_i_pairp(t3))){
if(C_truep(C_slot(t2,C_fix(0)))){
t4=C_slot(t3,C_fix(0));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1974,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_slot(t2,C_fix(1));
t8=C_slot(t3,C_fix(1));
/* data-structures.scm:194: loop */
t12=t6;
t13=t7;
t14=t8;
t1=t12;
t2=t13;
t3=t14;
goto loop;}
else{
t4=C_slot(t2,C_fix(1));
t5=C_slot(t3,C_fix(1));
/* data-structures.scm:195: loop */
t12=t1;
t13=t4;
t14=t5;
t1=t12;
t2=t13;
t3=t14;
goto loop;}}
else{
/* data-structures.scm:192: ##sys#signal-hook */
t4=*((C_word*)lf[27]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t1,lf[28],lf[25],((C_word*)t0)[3],t3);}}
else{
/* data-structures.scm:190: ##sys#signal-hook */
t4=*((C_word*)lf[27]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t1,lf[28],lf[25],((C_word*)t0)[3],t2);}}}

/* add in string-split in k1352 */
static void C_fcall f_2915(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2915,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2930,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:415: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[66]+1)))(5,*((C_word*)lf[66]+1),t5,((C_word*)t0)[3],t2,t3);}

/* k2210 in k2207 in alist-ref in k1352 */
static void C_ccall f_2212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?C_slot(t1,C_fix(1)):((C_word*)t0)[3]));}

/* compress in k1352 */
static void C_ccall f_1923(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1923,4,t0,t1,t2,t3);}
t4=lf[26];
t5=C_i_check_list_2(t3,lf[25]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1932,a[2]=t7,a[3]=t4,a[4]=((C_word)li43),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_1932(t9,t1,t2,t3);}

/* k3753 in k3707 in loop in merge in k1352 */
static void C_ccall f_3755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3755,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* alist-ref in k1352 */
static void C_ccall f_2193(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_2193r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2193r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2193r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(10);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?*((C_word*)lf[30]+1):C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_SCHEME_FALSE:C_i_car(t9));
t12=t11;
t13=C_i_nullp(t9);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2209,a[2]=t1,a[3]=t12,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t16=C_eqp(*((C_word*)lf[31]+1),t7);
if(C_truep(t16)){
t17=t15;
f_2209(t17,*((C_word*)lf[32]+1));}
else{
t17=C_eqp(*((C_word*)lf[30]+1),t7);
if(C_truep(t17)){
t18=t15;
f_2209(t18,*((C_word*)lf[33]+1));}
else{
t18=C_eqp(*((C_word*)lf[34]+1),t7);
t19=t15;
f_2209(t19,(C_truep(t18)?*((C_word*)lf[35]+1):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2234,a[2]=t7,a[3]=((C_word)li51),tmp=(C_word)a,a+=4,tmp)));}}}

/* k3166 in string-translate in k1352 */
static void C_ccall f_3168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3168,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3171,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t4=C_slot(((C_word*)t0)[4],C_fix(0));
if(C_truep(C_charp(t4))){
t5=t3;
f_3171(2,t5,t4);}
else{
if(C_truep(C_i_pairp(t4))){
/* list->string */
t5=*((C_word*)lf[74]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t5=C_i_check_string_2(t4,lf[71]);
t6=t3;
f_3171(2,t6,t4);}}}
else{
t4=t3;
f_3171(2,t4,C_SCHEME_FALSE);}}

/* k1911 in loop in k1868 in join in k1352 */
static void C_ccall f_1913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:181: ##sys#append */
t2=*((C_word*)lf[23]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* string-translate in k1352 */
static void C_ccall f_3130(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr4r,(void*)f_3130r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3130r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3130r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(12);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3133,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3168,a[2]=t2,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_charp(t3))){
t7=t6;
f_3168(2,t7,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3310,a[2]=t3,a[3]=((C_word)li86),tmp=(C_word)a,a+=4,tmp));}
else{
if(C_truep(C_i_pairp(t3))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3327,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* list->string */
t8=*((C_word*)lf[74]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t3);}
else{
t7=C_i_check_string_2(t3,lf[71]);
/* data-structures.scm:484: instring */
f_3133(t6,t3);}}}

/* instring in string-translate in k1352 */
static void C_fcall f_3133(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3133,NULL,2,t1,t2);}
t3=C_block_size(t2);
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3138,a[2]=t4,a[3]=t2,a[4]=((C_word)li83),tmp=(C_word)a,a+=5,tmp));}

/* f_3138 in instring in string-translate in k1352 */
static void C_ccall f_3138(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3138,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3144,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word)li82),tmp=(C_word)a,a+=6,tmp);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_3144(t3,C_fix(0)));}

/* substring-index-ci in k1352 */
static void C_ccall f_2623(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_2623r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2623r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2623r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
if(C_truep(C_i_nullp(t4))){
/* data-structures.scm:345: ##sys#substring-index-ci */
t5=*((C_word*)lf[56]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,t3,C_fix(0));}
else{
t5=C_i_car(t4);
/* data-structures.scm:345: ##sys#substring-index-ci */
t6=*((C_word*)lf[56]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,t3,t5);}}

/* k1786 in chop in k1352 */
static void C_ccall f_1788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1788,2,t0,t1);}
t2=C_i_length(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1796,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word)li39),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1796(t6,((C_word*)t0)[4],((C_word*)t0)[2],t2);}

/* k2207 in alist-ref in k1352 */
static void C_fcall f_2209(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2209,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2212,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:251: aq */
t3=t1;
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* chop in k1352 */
static void C_ccall f_1781(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1781,4,t0,t1,t2,t3);}
t4=C_i_check_exact_2(t3,lf[18]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1788,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnum_less_or_equal_p(t3,C_fix(0)))){
/* data-structures.scm:157: ##sys#error */
t6=*((C_word*)lf[20]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[18],lf[21],t3);}
else{
t6=t5;
f_1788(2,t6,C_SCHEME_UNDEFINED);}}

/* string-compare3 in k1352 */
static void C_ccall f_2638(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2638,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[58]);
t5=C_i_check_string_2(t3,lf[58]);
t6=C_block_size(t2);
t7=C_block_size(t3);
t8=C_fixnum_difference(t6,t7);
t9=C_fixnum_lessp(t8,C_fix(0));
t10=(C_truep(t9)?t6:t7);
t11=C_string_compare(t2,t3,t10);
t12=C_eqp(t11,C_fix(0));
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,(C_truep(t12)?t8:t11));}

/* loop */
static C_word C_fcall f_3144(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(C_SCHEME_FALSE);}
else{
t2=C_subchar(((C_word*)t0)[3],t1);
t3=C_eqp(((C_word*)t0)[4],t2);
if(C_truep(t3)){
return(t1);}
else{
t4=C_fixnum_plus(t1,C_fix(1));
t6=t4;
t1=t6;
goto loop;}}}

/* a2604 in substring-index-ci in k1352 */
static void C_ccall f_2605(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2605,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_substring_compare_case_insensitive(((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0),t2,t3));}

/* substring-index in k1352 */
static void C_ccall f_2608(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_2608r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2608r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2608r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
if(C_truep(C_i_nullp(t4))){
/* data-structures.scm:342: ##sys#substring-index */
t5=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,t3,C_fix(0));}
else{
t5=C_i_car(t4);
/* data-structures.scm:342: ##sys#substring-index */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,t3,t5);}}

/* k3205 in loop in k3181 in k3169 in k3166 in string-translate in k1352 */
static void C_ccall f_3207(C_word c,C_word t0,C_word t1){
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
C_word *a;
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[2])){
if(C_truep(C_charp(((C_word*)t0)[2]))){
t2=C_setsubchar(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[2]);
t3=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* data-structures.scm:510: loop */
t5=((C_word*)((C_word*)t0)[6])[1];
f_3188(t5,((C_word*)t0)[7],t3,t4);}
else{
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[8]))){
/* data-structures.scm:512: ##sys#error */
t2=*((C_word*)lf[20]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[7],lf[71],lf[72],((C_word*)t0)[5],((C_word*)t0)[2]);}
else{
t2=C_subchar(((C_word*)t0)[2],t1);
t3=C_setsubchar(((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t5=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* data-structures.scm:515: loop */
t6=((C_word*)((C_word*)t0)[6])[1];
f_3188(t6,((C_word*)t0)[7],t4,t5);}}}
else{
t2=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
/* data-structures.scm:507: loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3188(t3,((C_word*)t0)[7],t2,((C_word*)t0)[4]);}}
else{
t2=C_setsubchar(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[9]);
t3=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* data-structures.scm:506: loop */
t5=((C_word*)((C_word*)t0)[6])[1];
f_3188(t5,((C_word*)t0)[7],t3,t4);}}

/* queue-push-back-list! in k1352 */
static void C_ccall f_4614(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4614,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[104],lf[118]);
t5=C_i_check_list_2(t3,lf[118]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4624,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=C_slot(t2,C_fix(1));
/* data-structures.scm:898: append */
t8=*((C_word*)lf[88]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,t3,t7);}

/* k4622 in queue-push-back-list! in k1352 */
static void C_ccall f_4624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4624,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4627,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
t5=t3;
f_4627(t5,C_SCHEME_END_OF_LIST);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4655,a[2]=((C_word)li124),tmp=(C_word)a,a+=3,tmp);
t6=t3;
f_4627(t6,f_4655(t2));}}

/* k4625 in k4622 in queue-push-back-list! in k1352 */
static void C_fcall f_4627(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[2],C_fix(1),((C_word*)t0)[3]);
t3=C_i_setslot(((C_word*)t0)[2],C_fix(2),t1);
t4=C_slot(((C_word*)t0)[2],C_fix(3));
t5=C_i_length(((C_word*)t0)[4]);
t6=C_fixnum_plus(t4,t5);
t7=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_set_i_slot(((C_word*)t0)[2],C_fix(3),t6));}

/* f_1361 in conjoin in k1352 */
static void C_ccall f_1361(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1361,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1367,a[2]=t4,a[3]=t2,a[4]=((C_word)li1),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1367(t6,t1,((C_word*)t0)[2]);}

/* loop */
static void C_fcall f_1367(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1367,NULL,3,t0,t1,t2);}
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1383,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:41: g74 */
t6=t4;
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[3]);}}

/* alist-update in k1352 */
static void C_ccall f_2089(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr5r,(void*)f_2089r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_2089r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_2089r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(9);
t6=C_i_nullp(t5);
t7=(C_truep(t6)?*((C_word*)lf[30]+1):C_i_car(t5));
t8=t7;
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2098,a[2]=t2,a[3]=t3,a[4]=t10,a[5]=t8,a[6]=((C_word)li48),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_2098(t12,t1,t4);}

/* loop in alist-update in k1352 */
static void C_fcall f_2098(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2098,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list1(&a,1,t3));}
else{
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=t3;
if(C_truep(C_i_pairp(t4))){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2139,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,a[6]=t4,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t6=C_slot(t4,C_fix(0));
/* data-structures.scm:229: cmp */
t7=((C_word*)t0)[5];
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t5,t6,((C_word*)t0)[2]);}
else{
/* data-structures.scm:228: error */
t5=*((C_word*)lf[37]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,lf[36],lf[38],t4);}}
else{
/* data-structures.scm:224: error */
t3=*((C_word*)lf[37]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,lf[36],lf[39],t2);}}}

/* k4558 in doloop915 in list->queue in k1352 */
static void C_fcall f_4560(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* data-structures.scm:872: ##sys#error-not-a-proper-list */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[24]+1)))(4,*((C_word*)lf[24]+1),((C_word*)t0)[2],((C_word*)t0)[3],lf[116]);}
else{
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[5])[1];
f_4537(t3,((C_word*)t0)[6],t2);}}

/* k2999 in scan in loop in string-split in k1352 */
static void C_ccall f_3001(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:431: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2935(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[4]);}

/* loop in collect in string-translate* in k1352 */
static void C_fcall f_3380(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(12);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3380,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* data-structures.scm:531: collect */
t5=((C_word*)((C_word*)t0)[4])[1];
f_3347(t5,t1,t3,((C_word*)t0)[5],t4,((C_word*)((C_word*)t0)[6])[1]);}
else{
t3=C_i_car(t2);
t4=C_i_car(t3);
t5=C_i_string_length(t4);
t6=C_u_i_cdr(t3);
t7=C_fixnum_plus(((C_word*)t0)[2],t5);
t8=C_fixnum_less_or_equal_p(t7,((C_word*)t0)[7]);
t9=(C_truep(t8)?C_substring_compare(((C_word*)t0)[8],t4,((C_word*)t0)[2],C_fix(0),t5):C_SCHEME_FALSE);
if(C_truep(t9)){
t10=C_fixnum_plus(((C_word*)t0)[2],t5);
t11=t10;
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3420,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t11,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[2],((C_word*)t0)[5]))){
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3446,a[2]=((C_word*)t0)[6],a[3]=t12,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:540: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[66]+1)))(5,*((C_word*)lf[66]+1),t13,((C_word*)t0)[8],((C_word*)t0)[5],((C_word*)t0)[2]);}
else{
t13=t12;
f_3420(t13,C_SCHEME_UNDEFINED);}}
else{
t10=t2;
t11=C_u_i_cdr(t10);
/* data-structures.scm:545: loop */
t19=t1;
t20=t11;
t1=t19;
t2=t20;
goto loop;}}}

/* traverse in k1352 */
static void C_fcall f_2516(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2516,NULL,6,t1,t2,t3,t4,t5,t6);}
t7=C_i_check_string_2(t2,t6);
t8=C_i_check_string_2(t3,t6);
t9=C_block_size(t3);
t10=C_block_size(t2);
t11=t10;
t12=C_fixnum_difference(t9,t11);
t13=t12;
t14=C_i_check_exact_2(t4,t6);
t15=C_fixnum_greater_or_equal_p(t4,C_fix(0));
t16=(C_truep(t15)?C_fixnum_greater_or_equal_p(t9,t4):C_SCHEME_FALSE);
if(C_truep(t16)){
t17=C_eqp(t11,C_fix(0));
if(C_truep(t17)){
t18=t1;
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,t4);}
else{
if(C_truep(C_fixnum_greater_or_equal_p(t13,C_fix(0)))){
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2558,a[2]=t13,a[3]=t19,a[4]=t5,a[5]=t11,a[6]=((C_word)li61),tmp=(C_word)a,a+=7,tmp));
t21=((C_word*)t19)[1];
f_2558(t21,t1,t4);}
else{
t18=t1;
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,C_SCHEME_FALSE);}}}
else{
t17=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* data-structures.scm:323: ##sys#error-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[53]+1)))(6,*((C_word*)lf[53]+1),t1,t17,t6,t4,t9);}}

/* queue-push-back! in k1352 */
static void C_ccall f_4574(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4574,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[104],lf[117]);
t5=C_slot(t2,C_fix(1));
t6=C_a_i_cons(&a,2,t3,t5);
t7=C_i_setslot(t2,C_fix(1),t6);
t8=C_slot(t2,C_fix(2));
t9=C_eqp(C_SCHEME_END_OF_LIST,t8);
t10=(C_truep(t9)?C_i_setslot(t2,C_fix(2),t6):C_SCHEME_UNDEFINED);
t11=C_slot(t2,C_fix(3));
t12=C_fixnum_plus(t11,C_fix(1));
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_i_set_i_slot(t2,C_fix(3),t12));}

/* k2508 in map-loop365 in conc in k1352 */
static void C_ccall f_2510(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2510,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2481(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2481(t6,((C_word*)t0)[5],t5);}}

/* f_1394 in disjoin in k1352 */
static void C_ccall f_1394(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1394,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1400,a[2]=t4,a[3]=t2,a[4]=((C_word)li4),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1400(t6,t1,((C_word*)t0)[2]);}

/* disjoin in k1352 */
static void C_ccall f_1392(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1392r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1392r(t0,t1,t2);}}

static void C_ccall f_1392r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a=C_alloc(4);
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1394,a[2]=t2,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp));}

/* k1381 in loop */
static void C_ccall f_1383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(1));
/* data-structures.scm:46: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1367(t3,((C_word*)t0)[4],t2);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* loop */
static void C_fcall f_1400(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1400,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1413,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:48: g86 */
t5=t3;
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[3]);}}

/* k3359 in collect in string-translate* in k1352 */
static void C_ccall f_3361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:523: ##sys#fragments->string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[76]+1)))(4,*((C_word*)lf[76]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* list->queue in k1352 */
static void C_ccall f_4516(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4516,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,lf[116]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4527,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t5)){
t6=t2;
t7=C_u_i_length(t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_record4(&a,4,lf[104],t2,C_SCHEME_END_OF_LIST,t7));}
else{
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4537,a[2]=t7,a[3]=t2,a[4]=((C_word)li121),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_4537(t9,t4,t2);}}

/* k3373 in collect in string-translate* in k1352 */
static void C_ccall f_3375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3375,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
/* data-structures.scm:525: ##sys#fast-reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[77]+1)))(3,*((C_word*)lf[77]+1),((C_word*)t0)[3],t2);}

/* k4525 in list->queue in k1352 */
static void C_ccall f_4527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4527,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_length(t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[104],((C_word*)t0)[2],t1,t3));}

/* ->string in k1352 */
static void C_ccall f_2426(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2426,3,t0,t1,t2);}
if(C_truep(C_i_stringp(t2))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep(C_i_symbolp(t2))){
/* data-structures.scm:291: symbol->string */
t3=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}
else{
if(C_truep(C_charp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_string(&a,1,t2));}
else{
if(C_truep(C_i_numberp(t2))){
/* data-structures.scm:293: ##sys#number->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[47]+1)))(3,*((C_word*)lf[47]+1),t1,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2463,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:295: open-output-string */
t4=*((C_word*)lf[50]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}}}}

/* f_1460 in complement in k1352 */
static void C_ccall f_1460(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_1460r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1460r(t0,t1,t2);}}

static void C_ccall f_1460r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1468,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_apply(4,0,t3,((C_word*)t0)[2],t2);}

/* k1466 */
static void C_ccall f_1468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_not(t1));}

/* collect in string-translate* in k1352 */
static void C_fcall f_3347(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3347,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3361,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_greaterp(t2,t3))){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3375,a[2]=t6,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:527: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[66]+1)))(5,*((C_word*)lf[66]+1),t8,((C_word*)t0)[3],t3,t2);}
else{
t8=((C_word*)t6)[1];
/* data-structures.scm:525: ##sys#fast-reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[77]+1)))(3,*((C_word*)lf[77]+1),t7,t8);}}
else{
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3380,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t6,a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[3],a[9]=t8,a[10]=((C_word)li88),tmp=(C_word)a,a+=11,tmp));
t10=((C_word*)t8)[1];
f_3380(t10,t1,((C_word*)t0)[5]);}}

/* doloop915 in list->queue in k1352 */
static void C_fcall f_4537(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_4537,NULL,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(1));
t4=C_eqp(t3,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
t5=t2;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4547,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=C_blockp(t2);
t7=C_i_not(t6);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4560,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t7)){
t9=t8;
f_4560(t9,t7);}
else{
t9=C_pairp(t2);
t10=t8;
f_4560(t10,C_i_not(t9));}}}

/* identity in k1352 */
static void C_ccall f_1356(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1356,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1352 */
static void C_ccall f_1354(C_word c,C_word t0,C_word t1){
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
C_word t61;
C_word t62;
C_word t63;
C_word t64;
C_word ab[188],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1354,2,t0,t1);}
t2=C_mutate2((C_word*)lf[0]+1 /* (set! identity ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1356,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate2((C_word*)lf[1]+1 /* (set! conjoin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1359,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[2]+1 /* (set! disjoin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1392,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[3]+1 /* (set! constantly ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1429,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[4]+1 /* (set! flip ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1450,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[5]+1 /* (set! complement ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1458,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[6]+1 /* (set! compose ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1470,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[8]+1 /* (set! o ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1506,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[9]+1 /* (set! list-of? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1545,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[10]+1 /* (set! each ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1585,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[12]+1 /* (set! any? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1641,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2((C_word*)lf[13]+1 /* (set! atom? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1644,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate2((C_word*)lf[14]+1 /* (set! tail? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1647,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate2((C_word*)lf[15]+1 /* (set! intersperse ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1675,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2((C_word*)lf[16]+1 /* (set! butlast ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1708,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate2((C_word*)lf[17]+1 /* (set! flatten ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1740,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate2((C_word*)lf[18]+1 /* (set! chop ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1781,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate2((C_word*)lf[22]+1 /* (set! join ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1866,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate2((C_word*)lf[25]+1 /* (set! compress ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1923,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate2((C_word*)lf[29]+1 /* (set! alist-update! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2003,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate2((C_word*)lf[36]+1 /* (set! alist-update ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2089,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate2((C_word*)lf[40]+1 /* (set! alist-ref ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2193,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate2((C_word*)lf[42]+1 /* (set! rassoc ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2305,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate2((C_word*)lf[43]+1 /* (set! reverse-string-append ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2353,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate2((C_word*)lf[45]+1 /* (set! ->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2426,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate2((C_word*)lf[51]+1 /* (set! conc ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2471,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp));
t28=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2516,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp);
t29=C_mutate2((C_word*)lf[54]+1 /* (set! ##sys#substring-index ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2590,a[2]=t28,a[3]=((C_word)li64),tmp=(C_word)a,a+=4,tmp));
t30=C_mutate2((C_word*)lf[56]+1 /* (set! ##sys#substring-index-ci ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2599,a[2]=t28,a[3]=((C_word)li66),tmp=(C_word)a,a+=4,tmp));
t31=C_mutate2((C_word*)lf[55]+1 /* (set! substring-index ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2608,a[2]=((C_word)li67),tmp=(C_word)a,a+=3,tmp));
t32=C_mutate2((C_word*)lf[57]+1 /* (set! substring-index-ci ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2623,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate2((C_word*)lf[58]+1 /* (set! string-compare3 ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2638,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp));
t34=C_mutate2((C_word*)lf[59]+1 /* (set! string-compare3-ci ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2669,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate2((C_word*)lf[60]+1 /* (set! ##sys#substring=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2700,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t36=C_mutate2((C_word*)lf[61]+1 /* (set! substring=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2737,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate2((C_word*)lf[62]+1 /* (set! ##sys#substring-ci=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2797,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate2((C_word*)lf[63]+1 /* (set! substring-ci=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2834,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate2((C_word*)lf[64]+1 /* (set! string-split ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2894,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate2((C_word*)lf[67]+1 /* (set! string-intersperse ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3028,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp));
t41=C_mutate2((C_word*)lf[71]+1 /* (set! string-translate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3130,a[2]=((C_word)li87),tmp=(C_word)a,a+=3,tmp));
t42=C_mutate2((C_word*)lf[75]+1 /* (set! string-translate* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3335,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp));
t43=C_mutate2((C_word*)lf[78]+1 /* (set! string-chop ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3463,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp));
t44=C_mutate2((C_word*)lf[79]+1 /* (set! string-chomp ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3527,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp));
t45=C_mutate2((C_word*)lf[81]+1 /* (set! sorted? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3566,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp));
t46=C_mutate2((C_word*)lf[82]+1 /* (set! merge ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3672,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp));
t47=C_mutate2((C_word*)lf[83]+1 /* (set! merge! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3763,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp));
t48=C_mutate2((C_word*)lf[84]+1 /* (set! sort! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3887,a[2]=((C_word)li103),tmp=(C_word)a,a+=3,tmp));
t49=C_mutate2((C_word*)lf[86]+1 /* (set! sort ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4015,a[2]=((C_word)li104),tmp=(C_word)a,a+=3,tmp));
t50=C_mutate2((C_word*)lf[89]+1 /* (set! topological-sort ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4042,a[2]=((C_word)li108),tmp=(C_word)a,a+=3,tmp));
t51=C_mutate2((C_word*)lf[102]+1 /* (set! binary-search ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4227,a[2]=((C_word)li110),tmp=(C_word)a,a+=3,tmp));
t52=C_mutate2((C_word*)lf[103]+1 /* (set! make-queue ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4310,a[2]=((C_word)li111),tmp=(C_word)a,a+=3,tmp));
t53=C_mutate2((C_word*)lf[105]+1 /* (set! queue? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4316,a[2]=((C_word)li112),tmp=(C_word)a,a+=3,tmp));
t54=C_mutate2((C_word*)lf[106]+1 /* (set! queue-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4322,a[2]=((C_word)li113),tmp=(C_word)a,a+=3,tmp));
t55=C_mutate2((C_word*)lf[107]+1 /* (set! queue-empty? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4331,a[2]=((C_word)li114),tmp=(C_word)a,a+=3,tmp));
t56=C_mutate2((C_word*)lf[108]+1 /* (set! queue-first ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4344,a[2]=((C_word)li115),tmp=(C_word)a,a+=3,tmp));
t57=C_mutate2((C_word*)lf[110]+1 /* (set! queue-last ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4365,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp));
t58=C_mutate2((C_word*)lf[112]+1 /* (set! queue-add! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4386,a[2]=((C_word)li117),tmp=(C_word)a,a+=3,tmp));
t59=C_mutate2((C_word*)lf[113]+1 /* (set! queue-remove! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4429,a[2]=((C_word)li118),tmp=(C_word)a,a+=3,tmp));
t60=C_mutate2((C_word*)lf[115]+1 /* (set! queue->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4476,a[2]=((C_word)li120),tmp=(C_word)a,a+=3,tmp));
t61=C_mutate2((C_word*)lf[116]+1 /* (set! list->queue ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4516,a[2]=((C_word)li122),tmp=(C_word)a,a+=3,tmp));
t62=C_mutate2((C_word*)lf[117]+1 /* (set! queue-push-back! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4574,a[2]=((C_word)li123),tmp=(C_word)a,a+=3,tmp));
t63=C_mutate2((C_word*)lf[118]+1 /* (set! queue-push-back-list! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4614,a[2]=((C_word)li125),tmp=(C_word)a,a+=3,tmp));
t64=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t64+1)))(2,t64,C_SCHEME_UNDEFINED);}

/* f_1452 in flip in k1352 */
static void C_ccall f_1452(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1452,4,t0,t1,t2,t3);}
/* data-structures.scm:61: proc */
t4=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t1,t3,t2);}

/* conjoin in k1352 */
static void C_ccall f_1359(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1359r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1359r(t0,t1,t2);}}

static void C_ccall f_1359r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a=C_alloc(4);
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1361,a[2]=t2,a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp));}

/* flip in k1352 */
static void C_ccall f_1450(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1450,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1452,a[2]=t2,a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp));}

/* complement in k1352 */
static void C_ccall f_1458(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1458,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1460,a[2]=t2,a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp));}

/* f_1440 in constantly in k1352 */
static void C_ccall f_1440(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1440,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_1442 in constantly in k1352 */
static void C_ccall f_1442(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1442,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* doloop939 in k4622 in queue-push-back-list! in k1352 */
static C_word C_fcall f_4655(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:
t2=C_slot(t1,C_fix(1));
t3=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=t1;
return(t4);}
else{
t4=C_slot(t1,C_fix(1));
t7=t4;
t1=t7;
goto loop;}}

/* a1486 */
static void C_ccall f_1487(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1487,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1495,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_apply(4,0,t2,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[4]);}

/* f_1481 in rec in compose in k1352 */
static void C_ccall f_1481(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_1481r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1481r(t0,t1,t2);}}

static void C_ccall f_1481r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1487,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li14),tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:72: call-with-values */
C_call_with_values(4,0,t1,t3,((C_word*)t0)[4]);}

/* k3169 in k3166 in string-translate in k1352 */
static void C_ccall f_3171(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3171,2,t0,t1);}
t2=t1;
t3=C_i_stringp(t2);
t4=(C_truep(t3)?C_block_size(t2):C_SCHEME_FALSE);
t5=t4;
t6=C_i_check_string_2(((C_word*)t0)[2],lf[71]);
t7=C_block_size(((C_word*)t0)[2]);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3183,a[2]=t8,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t5,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[73]+1)))(4,*((C_word*)lf[73]+1),t9,t8,C_make_character(32));}

/* loop in queue->list in k1352 */
static void C_fcall f_4489(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
a=C_alloc(3);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4489,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
/* data-structures.scm:859: ##sys#fast-reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[77]+1)))(3,*((C_word*)lf[77]+1),t1,t3);}
else{
t4=C_slot(t2,C_fix(1));
t5=C_slot(t2,C_fix(0));
t6=C_a_i_cons(&a,2,t5,t3);
/* data-structures.scm:860: loop */
t8=t1;
t9=t4;
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}}

/* rec in compose in k1352 */
static void C_ccall f_1473(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_1473r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1473r(t0,t1,t2,t3);}}

static void C_ccall f_1473r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
if(C_truep(C_i_nullp(t3))){
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1481,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,a[5]=((C_word)li15),tmp=(C_word)a,a+=6,tmp);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* o in k1352 */
static void C_ccall f_1506(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_1506r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1506r(t0,t1,t2);}}

static void C_ccall f_1506r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,*((C_word*)lf[0]+1));}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1518,a[2]=t4,a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1518(t6,t1,t2);}}

/* compose in k1352 */
static void C_ccall f_1470(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_1470r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1470r(t0,t1,t2);}}

static void C_ccall f_1470r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1473,a[2]=t4,a[3]=((C_word)li16),tmp=(C_word)a,a+=4,tmp));
if(C_truep(C_i_nullp(t2))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,*((C_word*)lf[7]+1));}
else{
C_apply(4,0,t1,((C_word*)t4)[1],t2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[218] = {
{"f_3183:data_2dstructures_2escm",(void*)f_3183},
{"f_3188:data_2dstructures_2escm",(void*)f_3188},
{"f_2834:data_2dstructures_2escm",(void*)f_2834},
{"f_4547:data_2dstructures_2escm",(void*)f_4547},
{"f_2807:data_2dstructures_2escm",(void*)f_2807},
{"f_2336:data_2dstructures_2escm",(void*)f_2336},
{"f_2312:data_2dstructures_2escm",(void*)f_2312},
{"f_1553:data_2dstructures_2escm",(void*)f_1553},
{"f_4033:data_2dstructures_2escm",(void*)f_4033},
{"f_2305:data_2dstructures_2escm",(void*)f_2305},
{"f_1540:data_2dstructures_2escm",(void*)f_1540},
{"f_1543:data_2dstructures_2escm",(void*)f_1543},
{"f_1545:data_2dstructures_2escm",(void*)f_1545},
{"f_1547:data_2dstructures_2escm",(void*)f_1547},
{"f_4040:data_2dstructures_2escm",(void*)f_4040},
{"f_4042:data_2dstructures_2escm",(void*)f_4042},
{"f_2317:data_2dstructures_2escm",(void*)f_2317},
{"f_4045:data_2dstructures_2escm",(void*)f_4045},
{"f_4049:data_2dstructures_2escm",(void*)f_4049},
{"f_1429:data_2dstructures_2escm",(void*)f_1429},
{"f_1532:data_2dstructures_2escm",(void*)f_1532},
{"f_1413:data_2dstructures_2escm",(void*)f_1413},
{"toplevel:data_2dstructures_2escm",(void*)C_data_2dstructures_toplevel},
{"f_3061:data_2dstructures_2escm",(void*)f_3061},
{"f_2669:data_2dstructures_2escm",(void*)f_2669},
{"f_1585:data_2dstructures_2escm",(void*)f_1585},
{"f_4086:data_2dstructures_2escm",(void*)f_4086},
{"f_2710:data_2dstructures_2escm",(void*)f_2710},
{"f_3841:data_2dstructures_2escm",(void*)f_3841},
{"f_3844:data_2dstructures_2escm",(void*)f_3844},
{"f_1572:data_2dstructures_2escm",(void*)f_1572},
{"f_4015:data_2dstructures_2escm",(void*)f_4015},
{"f_3056:data_2dstructures_2escm",(void*)f_3056},
{"f_3527:data_2dstructures_2escm",(void*)f_3527},
{"f_3028:data_2dstructures_2escm",(void*)f_3028},
{"f_1659:data_2dstructures_2escm",(void*)f_1659},
{"f_4029:data_2dstructures_2escm",(void*)f_4029},
{"f_1641:data_2dstructures_2escm",(void*)f_1641},
{"f_1647:data_2dstructures_2escm",(void*)f_1647},
{"f_1644:data_2dstructures_2escm",(void*)f_1644},
{"f_2894:data_2dstructures_2escm",(void*)f_2894},
{"f_2700:data_2dstructures_2escm",(void*)f_2700},
{"f_3509:data_2dstructures_2escm",(void*)f_3509},
{"f_1632:data_2dstructures_2escm",(void*)f_1632},
{"f_3046:data_2dstructures_2escm",(void*)f_3046},
{"f_3513:data_2dstructures_2escm",(void*)f_3513},
{"f_2265:data_2dstructures_2escm",(void*)f_2265},
{"f_1613:data_2dstructures_2escm",(void*)f_1613},
{"f_2234:data_2dstructures_2escm",(void*)f_2234},
{"f_3666:data_2dstructures_2escm",(void*)f_3666},
{"f_1518:data_2dstructures_2escm",(void*)f_1518},
{"f_1607:data_2dstructures_2escm",(void*)f_1607},
{"f_4439:data_2dstructures_2escm",(void*)f_4439},
{"f_4245:data_2dstructures_2escm",(void*)f_4245},
{"f_2240:data_2dstructures_2escm",(void*)f_2240},
{"f_3672:data_2dstructures_2escm",(void*)f_3672},
{"f_2571:data_2dstructures_2escm",(void*)f_2571},
{"f_3938:data_2dstructures_2escm",(void*)f_3938},
{"f_4255:data_2dstructures_2escm",(void*)f_4255},
{"f_4098:data_2dstructures_2escm",(void*)f_4098},
{"f_2558:data_2dstructures_2escm",(void*)f_2558},
{"f_3890:data_2dstructures_2escm",(void*)f_3890},
{"f_2797:data_2dstructures_2escm",(void*)f_2797},
{"f_4429:data_2dstructures_2escm",(void*)f_4429},
{"f_3862:data_2dstructures_2escm",(void*)f_3862},
{"f_1738:data_2dstructures_2escm",(void*)f_1738},
{"f_3603:data_2dstructures_2escm",(void*)f_3603},
{"f_4476:data_2dstructures_2escm",(void*)f_4476},
{"f_3887:data_2dstructures_2escm",(void*)f_3887},
{"f_4210:data_2dstructures_2escm",(void*)f_4210},
{"f_3903:data_2dstructures_2escm",(void*)f_3903},
{"f_3900:data_2dstructures_2escm",(void*)f_3900},
{"f_3909:data_2dstructures_2escm",(void*)f_3909},
{"f_1717:data_2dstructures_2escm",(void*)f_1717},
{"f_4227:data_2dstructures_2escm",(void*)f_4227},
{"f_2596:data_2dstructures_2escm",(void*)f_2596},
{"f_2599:data_2dstructures_2escm",(void*)f_2599},
{"f_2590:data_2dstructures_2escm",(void*)f_2590},
{"f_1740:data_2dstructures_2escm",(void*)f_1740},
{"f_1746:data_2dstructures_2escm",(void*)f_1746},
{"f_4231:data_2dstructures_2escm",(void*)f_4231},
{"f_2161:data_2dstructures_2escm",(void*)f_2161},
{"f_1681:data_2dstructures_2escm",(void*)f_1681},
{"f_2139:data_2dstructures_2escm",(void*)f_2139},
{"f_3642:data_2dstructures_2escm",(void*)f_3642},
{"f_1675:data_2dstructures_2escm",(void*)f_1675},
{"f_2737:data_2dstructures_2escm",(void*)f_2737},
{"f_4322:data_2dstructures_2escm",(void*)f_4322},
{"f_4131:data_2dstructures_2escm",(void*)f_4131},
{"f_4331:data_2dstructures_2escm",(void*)f_4331},
{"f_1706:data_2dstructures_2escm",(void*)f_1706},
{"f_1708:data_2dstructures_2escm",(void*)f_1708},
{"f_1866:data_2dstructures_2escm",(void*)f_1866},
{"f_4153:data_2dstructures_2escm",(void*)f_4153},
{"f_4344:data_2dstructures_2escm",(void*)f_4344},
{"f_3327:data_2dstructures_2escm",(void*)f_3327},
{"f_2481:data_2dstructures_2escm",(void*)f_2481},
{"f_4354:data_2dstructures_2escm",(void*)f_4354},
{"f_3335:data_2dstructures_2escm",(void*)f_3335},
{"f_3974:data_2dstructures_2escm",(void*)f_3974},
{"f_4365:data_2dstructures_2escm",(void*)f_4365},
{"f_3983:data_2dstructures_2escm",(void*)f_3983},
{"f_3981:data_2dstructures_2escm",(void*)f_3981},
{"f_2463:data_2dstructures_2escm",(void*)f_2463},
{"f_2466:data_2dstructures_2escm",(void*)f_2466},
{"f_1796:data_2dstructures_2escm",(void*)f_1796},
{"f_1870:data_2dstructures_2escm",(void*)f_1870},
{"f_2962:data_2dstructures_2escm",(void*)f_2962},
{"f_1878:data_2dstructures_2escm",(void*)f_1878},
{"f_3310:data_2dstructures_2escm",(void*)f_3310},
{"f_4375:data_2dstructures_2escm",(void*)f_4375},
{"f_2479:data_2dstructures_2escm",(void*)f_2479},
{"f_2471:data_2dstructures_2escm",(void*)f_2471},
{"f_4386:data_2dstructures_2escm",(void*)f_4386},
{"f_4111:data_2dstructures_2escm",(void*)f_4111},
{"f_4117:data_2dstructures_2escm",(void*)f_4117},
{"f_1779:data_2dstructures_2escm",(void*)f_1779},
{"f_1772:data_2dstructures_2escm",(void*)f_1772},
{"f_1495:data_2dstructures_2escm",(void*)f_1495},
{"f_4396:data_2dstructures_2escm",(void*)f_4396},
{"f_3498:data_2dstructures_2escm",(void*)f_3498},
{"f_3729:data_2dstructures_2escm",(void*)f_3729},
{"f_1817:data_2dstructures_2escm",(void*)f_1817},
{"f_2064:data_2dstructures_2escm",(void*)f_2064},
{"f_3702:data_2dstructures_2escm",(void*)f_3702},
{"f_1974:data_2dstructures_2escm",(void*)f_1974},
{"f_3709:data_2dstructures_2escm",(void*)f_3709},
{"f_2370:data_2dstructures_2escm",(void*)f_2370},
{"f_2048:data_2dstructures_2escm",(void*)f_2048},
{"f_3420:data_2dstructures_2escm",(void*)f_3420},
{"f_2042:data_2dstructures_2escm",(void*)f_2042},
{"f_3446:data_2dstructures_2escm",(void*)f_3446},
{"f_4305:data_2dstructures_2escm",(void*)f_4305},
{"f_2379:data_2dstructures_2escm",(void*)f_2379},
{"f_4310:data_2dstructures_2escm",(void*)f_4310},
{"f_4316:data_2dstructures_2escm",(void*)f_4316},
{"f_3463:data_2dstructures_2escm",(void*)f_3463},
{"f_3478:data_2dstructures_2escm",(void*)f_3478},
{"f_2356:data_2dstructures_2escm",(void*)f_2356},
{"f_2353:data_2dstructures_2escm",(void*)f_2353},
{"f_1835:data_2dstructures_2escm",(void*)f_1835},
{"f_1831:data_2dstructures_2escm",(void*)f_1831},
{"f_2003:data_2dstructures_2escm",(void*)f_2003},
{"f_1593:data_2dstructures_2escm",(void*)f_1593},
{"f_4189:data_2dstructures_2escm",(void*)f_4189},
{"f_2013:data_2dstructures_2escm",(void*)f_2013},
{"f_2010:data_2dstructures_2escm",(void*)f_2010},
{"f_3593:data_2dstructures_2escm",(void*)f_3593},
{"f_3566:data_2dstructures_2escm",(void*)f_3566},
{"f_3766:data_2dstructures_2escm",(void*)f_3766},
{"f_3763:data_2dstructures_2escm",(void*)f_3763},
{"f_2935:data_2dstructures_2escm",(void*)f_2935},
{"f_2930:data_2dstructures_2escm",(void*)f_2930},
{"f_3773:data_2dstructures_2escm",(void*)f_3773},
{"f_2945:data_2dstructures_2escm",(void*)f_2945},
{"f_1932:data_2dstructures_2escm",(void*)f_1932},
{"f_2915:data_2dstructures_2escm",(void*)f_2915},
{"f_2212:data_2dstructures_2escm",(void*)f_2212},
{"f_1923:data_2dstructures_2escm",(void*)f_1923},
{"f_3755:data_2dstructures_2escm",(void*)f_3755},
{"f_2193:data_2dstructures_2escm",(void*)f_2193},
{"f_3168:data_2dstructures_2escm",(void*)f_3168},
{"f_1913:data_2dstructures_2escm",(void*)f_1913},
{"f_3130:data_2dstructures_2escm",(void*)f_3130},
{"f_3133:data_2dstructures_2escm",(void*)f_3133},
{"f_3138:data_2dstructures_2escm",(void*)f_3138},
{"f_2623:data_2dstructures_2escm",(void*)f_2623},
{"f_1788:data_2dstructures_2escm",(void*)f_1788},
{"f_2209:data_2dstructures_2escm",(void*)f_2209},
{"f_1781:data_2dstructures_2escm",(void*)f_1781},
{"f_2638:data_2dstructures_2escm",(void*)f_2638},
{"f_3144:data_2dstructures_2escm",(void*)f_3144},
{"f_2605:data_2dstructures_2escm",(void*)f_2605},
{"f_2608:data_2dstructures_2escm",(void*)f_2608},
{"f_3207:data_2dstructures_2escm",(void*)f_3207},
{"f_4614:data_2dstructures_2escm",(void*)f_4614},
{"f_4624:data_2dstructures_2escm",(void*)f_4624},
{"f_4627:data_2dstructures_2escm",(void*)f_4627},
{"f_1361:data_2dstructures_2escm",(void*)f_1361},
{"f_1367:data_2dstructures_2escm",(void*)f_1367},
{"f_2089:data_2dstructures_2escm",(void*)f_2089},
{"f_2098:data_2dstructures_2escm",(void*)f_2098},
{"f_4560:data_2dstructures_2escm",(void*)f_4560},
{"f_3001:data_2dstructures_2escm",(void*)f_3001},
{"f_3380:data_2dstructures_2escm",(void*)f_3380},
{"f_2516:data_2dstructures_2escm",(void*)f_2516},
{"f_4574:data_2dstructures_2escm",(void*)f_4574},
{"f_2510:data_2dstructures_2escm",(void*)f_2510},
{"f_1394:data_2dstructures_2escm",(void*)f_1394},
{"f_1392:data_2dstructures_2escm",(void*)f_1392},
{"f_1383:data_2dstructures_2escm",(void*)f_1383},
{"f_1400:data_2dstructures_2escm",(void*)f_1400},
{"f_3361:data_2dstructures_2escm",(void*)f_3361},
{"f_4516:data_2dstructures_2escm",(void*)f_4516},
{"f_3375:data_2dstructures_2escm",(void*)f_3375},
{"f_4527:data_2dstructures_2escm",(void*)f_4527},
{"f_2426:data_2dstructures_2escm",(void*)f_2426},
{"f_1460:data_2dstructures_2escm",(void*)f_1460},
{"f_1468:data_2dstructures_2escm",(void*)f_1468},
{"f_3347:data_2dstructures_2escm",(void*)f_3347},
{"f_4537:data_2dstructures_2escm",(void*)f_4537},
{"f_1356:data_2dstructures_2escm",(void*)f_1356},
{"f_1354:data_2dstructures_2escm",(void*)f_1354},
{"f_1452:data_2dstructures_2escm",(void*)f_1452},
{"f_1359:data_2dstructures_2escm",(void*)f_1359},
{"f_1450:data_2dstructures_2escm",(void*)f_1450},
{"f_1458:data_2dstructures_2escm",(void*)f_1458},
{"f_1440:data_2dstructures_2escm",(void*)f_1440},
{"f_1442:data_2dstructures_2escm",(void*)f_1442},
{"f_4655:data_2dstructures_2escm",(void*)f_4655},
{"f_1487:data_2dstructures_2escm",(void*)f_1487},
{"f_1481:data_2dstructures_2escm",(void*)f_1481},
{"f_3171:data_2dstructures_2escm",(void*)f_3171},
{"f_4489:data_2dstructures_2escm",(void*)f_4489},
{"f_1473:data_2dstructures_2escm",(void*)f_1473},
{"f_1506:data_2dstructures_2escm",(void*)f_1506},
{"f_1470:data_2dstructures_2escm",(void*)f_1470},
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
S|  map		1
o|eliminated procedure checks: 112 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|specializations:
o|  1 (##sys#length list)
o|  1 (cdar (pair pair *))
o|  2 (eqv? * (not float))
o|  1 (set-car! pair *)
o|  1 (cddr (pair * pair))
o|  4 (set-cdr! pair *)
o|  1 (<= fixnum fixnum)
o|  1 (vector-length vector)
o|  1 (make-string fixnum)
o|  1 (##sys#check-list (or pair list) *)
o|  23 (cdr pair)
o|  5 (car pair)
o|  2 (length list)
o|Removed `not' forms: 11 
o|inlining procedure: k1372 
o|inlining procedure: k1372 
o|contracted procedure: k1405 
o|inlining procedure: k1402 
o|inlining procedure: k1402 
o|inlining procedure: k1431 
o|inlining procedure: k1431 
o|inlining procedure: k1475 
o|inlining procedure: k1475 
o|inlining procedure: k1496 
o|propagated global variable: r14974689 values 
o|inlining procedure: k1496 
o|inlining procedure: k1508 
o|propagated global variable: r15094691 identity 
o|inlining procedure: k1508 
o|inlining procedure: k1526 
o|inlining procedure: k1526 
o|inlining procedure: k1555 
o|inlining procedure: k1555 
o|inlining procedure: k1567 
o|inlining procedure: k1567 
o|inlining procedure: k1587 
o|inlining procedure: k1587 
o|inlining procedure: k1621 
o|inlining procedure: k1621 
o|inlining procedure: k1652 
o|inlining procedure: k1652 
o|inlining procedure: k1661 
o|inlining procedure: k1661 
o|inlining procedure: k1683 
o|inlining procedure: k1683 
o|inlining procedure: k1722 
o|inlining procedure: k1722 
o|inlining procedure: k1748 
o|inlining procedure: k1748 
o|inlining procedure: k1798 
o|inlining procedure: k1798 
o|inlining procedure: k1819 
o|inlining procedure: k1819 
o|inlining procedure: k1880 
o|inlining procedure: k1880 
o|contracted procedure: k1889 
o|inlining procedure: k1901 
o|inlining procedure: k1901 
o|inlining procedure: k1934 
o|inlining procedure: k1934 
o|contracted procedure: k1943 
o|contracted procedure: k1952 
o|inlining procedure: k1949 
o|inlining procedure: k1949 
o|inlining procedure: k2014 
o|inlining procedure: k2014 
o|inlining procedure: k2030 
o|propagated global variable: r20314727 assv 
o|inlining procedure: k2030 
o|inlining procedure: k2050 
o|inlining procedure: k2050 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|contracted procedure: k2116 
o|contracted procedure: k2128 
o|inlining procedure: k2125 
o|inlining procedure: k2125 
o|inlining procedure: k2213 
o|inlining procedure: k2213 
o|inlining procedure: k2222 
o|propagated global variable: r22234737 assv 
o|inlining procedure: k2222 
o|inlining procedure: k2242 
o|inlining procedure: k2242 
o|inlining procedure: k2260 
o|inlining procedure: k2260 
o|inlining procedure: k2319 
o|inlining procedure: k2319 
o|inlining procedure: k2358 
o|inlining procedure: k2381 
o|inlining procedure: k2381 
o|inlining procedure: k2358 
o|inlining procedure: k2428 
o|inlining procedure: k2428 
o|inlining procedure: k2443 
o|inlining procedure: k2443 
o|inlining procedure: k2483 
o|inlining procedure: k2483 
o|inlining procedure: k2536 
o|inlining procedure: k2548 
o|inlining procedure: k2560 
o|inlining procedure: k2560 
o|inlining procedure: k2548 
o|inlining procedure: k2536 
o|inlining procedure: k2659 
o|inlining procedure: k2659 
o|inlining procedure: k2690 
o|inlining procedure: k2690 
o|inlining procedure: k2920 
o|inlining procedure: k2920 
o|inlining procedure: k2937 
o|inlining procedure: k2937 
o|inlining procedure: k2964 
o|inlining procedure: k2964 
o|inlining procedure: k2986 
o|inlining procedure: k2986 
o|inlining procedure: k3048 
o|inlining procedure: k3075 
o|inlining procedure: k3075 
o|inlining procedure: k3048 
o|inlining procedure: k3146 
o|inlining procedure: k3146 
o|inlining procedure: k3190 
o|inlining procedure: k3190 
o|contracted procedure: k3211 
o|contracted procedure: k3228 
o|inlining procedure: k3225 
o|inlining procedure: k3255 
o|inlining procedure: k3255 
o|inlining procedure: k3225 
o|inlining procedure: k3289 
o|inlining procedure: k3289 
o|inlining procedure: k3315 
o|inlining procedure: k3315 
o|inlining procedure: k3349 
o|inlining procedure: k3363 
o|inlining procedure: k3363 
o|inlining procedure: k3349 
o|inlining procedure: k3382 
o|inlining procedure: k3382 
o|inlining procedure: k3480 
o|inlining procedure: k3480 
o|inlining procedure: k3547 
o|inlining procedure: k3547 
o|inlining procedure: k3568 
o|inlining procedure: k3568 
o|inlining procedure: k3583 
o|inlining procedure: k3583 
o|inlining procedure: k3595 
o|inlining procedure: k3595 
o|substituted constant variable: a3630 
o|inlining procedure: k3647 
o|inlining procedure: k3647 
o|contracted procedure: k3653 
o|inlining procedure: k3674 
o|inlining procedure: k3674 
o|inlining procedure: k3704 
o|inlining procedure: k3704 
o|inlining procedure: k3768 
o|inlining procedure: k3768 
o|inlining procedure: k3824 
o|inlining procedure: k3824 
o|inlining procedure: k3836 
o|inlining procedure: k3836 
o|inlining procedure: k3892 
o|inlining procedure: k3892 
o|inlining procedure: k3949 
o|inlining procedure: k3949 
o|inlining procedure: k3962 
o|inlining procedure: k3985 
o|inlining procedure: k3985 
o|inlining procedure: k3962 
o|inlining procedure: k4017 
o|inlining procedure: k4017 
o|inlining procedure: k4050 
o|inlining procedure: k4050 
o|inlining procedure: k4119 
o|inlining procedure: k4119 
o|substituted constant variable: a4174 
o|substituted constant variable: a4176 
o|inlining procedure: k4191 
o|inlining procedure: k4191 
o|inlining procedure: k4235 
o|inlining procedure: k4256 
o|inlining procedure: k4256 
o|contracted procedure: k4271 
o|inlining procedure: k4268 
o|inlining procedure: k4268 
o|contracted procedure: k4284 
o|inlining procedure: k4281 
o|inlining procedure: k4281 
o|inlining procedure: k4235 
o|inlining procedure: k4352 
o|inlining procedure: k4352 
o|inlining procedure: k4373 
o|inlining procedure: k4373 
o|inlining procedure: k4491 
o|inlining procedure: k4491 
o|inlining procedure: k4525 
o|inlining procedure: k4525 
o|inlining procedure: k4539 
o|inlining procedure: k4539 
o|contracted procedure: "(data-structures.scm:901) g936937" 
o|inlining procedure: k4657 
o|inlining procedure: k4657 
o|replaced variables: 523 
o|removed binding forms: 211 
o|substituted constant variable: r14034683 
o|substituted constant variable: r15564695 
o|substituted constant variable: r15684698 
o|substituted constant variable: r16624705 
o|substituted constant variable: r17234710 
o|substituted constant variable: r17994713 
o|substituted constant variable: r18814717 
o|substituted constant variable: r19354721 
o|substituted constant variable: r20514730 
o|substituted constant variable: r22434739 
o|substituted constant variable: r23204744 
o|substituted constant variable: r25614757 
o|substituted constant variable: r25494759 
o|converted assignments to bindings: (add547) 
o|substituted constant variable: r31474779 
o|converted assignments to bindings: (instring626) 
o|substituted constant variable: r34814799 
o|substituted constant variable: r35694803 
o|substituted constant variable: r35844805 
o|substituted constant variable: r39504824 
o|substituted constant variable: r42694840 
o|substituted constant variable: r42824842 
o|substituted constant variable: r42364844 
o|substituted constant variable: r45264867 
o|substituted constant variable: r45264867 
o|converted assignments to bindings: (traverse389) 
o|simplifications: ((let . 3)) 
o|replaced variables: 21 
o|removed binding forms: 527 
o|inlining procedure: k2610 
o|inlining procedure: k2625 
o|inlining procedure: k2754 
o|inlining procedure: k2851 
o|inlining procedure: k2943 
o|inlining procedure: k4545 
o|replaced variables: 10 
o|removed binding forms: 47 
o|substituted constant variable: r26115088 
o|substituted constant variable: r26265089 
o|removed binding forms: 14 
o|removed binding forms: 2 
o|simplifications: ((if . 40) (##core#call . 512)) 
o|  call simplifications:
o|    ##sys#setislot	4
o|    ##sys#check-structure	9
o|    ##sys#structure?
o|    ##sys#check-vector
o|    caar
o|    ##sys#cons	4
o|    ##sys#list
o|    ##sys#make-structure	4
o|    vector-length
o|    vector-set!
o|    >
o|    set-car!
o|    quotient
o|    set-cdr!	4
o|    vector?	3
o|    -	2
o|    vector-ref	2
o|    +	2
o|    =	4
o|    list->string	2
o|    cadr	2
o|    fxmin	2
o|    ##sys#check-string	21
o|    ##sys#size	24
o|    fx>=	10
o|    fx>	6
o|    string?	2
o|    symbol?
o|    char?	4
o|    number?
o|    string
o|    string-length	4
o|    string-ref
o|    string-set!
o|    fx+	31
o|    ##sys#setslot	17
o|    pair?	17
o|    ##sys#check-exact	7
o|    fx<=	5
o|    length	2
o|    fx<	6
o|    fx=	8
o|    fx-	16
o|    list	6
o|    list?
o|    ##sys#check-pair	3
o|    cdr	12
o|    cons	37
o|    ##sys#check-list	8
o|    void
o|    not-pair?
o|    call-with-values
o|    not	3
o|    eq?	23
o|    apply	8
o|    car	33
o|    null?	57
o|    ##sys#slot	80
o|contracted procedure: k1369 
o|contracted procedure: k1378 
o|contracted procedure: k1388 
o|contracted procedure: k1425 
o|contracted procedure: k1408 
o|contracted procedure: k1421 
o|contracted procedure: k1434 
o|contracted procedure: k1437 
o|contracted procedure: k1478 
o|contracted procedure: k1499 
o|contracted procedure: k1511 
o|contracted procedure: k1520 
o|contracted procedure: k1523 
o|contracted procedure: k1529 
o|contracted procedure: k1558 
o|contracted procedure: k1564 
o|contracted procedure: k1577 
o|contracted procedure: k1581 
o|contracted procedure: k1590 
o|contracted procedure: k1637 
o|contracted procedure: k1601 
o|contracted procedure: k1615 
o|contracted procedure: k1618 
o|contracted procedure: k1624 
o|contracted procedure: k1649 
o|contracted procedure: k1671 
o|contracted procedure: k1686 
o|contracted procedure: k1696 
o|contracted procedure: k1700 
o|contracted procedure: k1710 
o|contracted procedure: k1719 
o|contracted procedure: k1725 
o|contracted procedure: k1732 
o|contracted procedure: k1751 
o|contracted procedure: k1754 
o|contracted procedure: k1757 
o|contracted procedure: k1763 
o|contracted procedure: k1783 
o|contracted procedure: k1789 
o|contracted procedure: k1801 
o|contracted procedure: k1807 
o|contracted procedure: k1822 
o|contracted procedure: k1837 
o|contracted procedure: k1856 
o|contracted procedure: k1844 
o|contracted procedure: k1848 
o|contracted procedure: k1852 
o|contracted procedure: k1859 
o|contracted procedure: k1871 
o|contracted procedure: k1883 
o|contracted procedure: k1915 
o|contracted procedure: k1895 
o|contracted procedure: k1898 
o|contracted procedure: k1904 
o|contracted procedure: k1918 
o|contracted procedure: k1925 
o|contracted procedure: k1937 
o|contracted procedure: k1999 
o|contracted procedure: k1995 
o|contracted procedure: k1961 
o|contracted procedure: k1968 
o|contracted procedure: k1976 
o|contracted procedure: k1980 
o|contracted procedure: k1987 
o|contracted procedure: k1991 
o|contracted procedure: k2082 
o|contracted procedure: k2005 
o|contracted procedure: k2017 
o|contracted procedure: k2024 
o|contracted procedure: k2027 
o|contracted procedure: k2033 
o|contracted procedure: k2039 
o|contracted procedure: k2053 
o|contracted procedure: k2056 
o|contracted procedure: k2069 
o|contracted procedure: k2072 
o|contracted procedure: k2079 
o|contracted procedure: k2186 
o|contracted procedure: k2091 
o|contracted procedure: k2103 
o|contracted procedure: k2110 
o|contracted procedure: k2183 
o|contracted procedure: k2122 
o|contracted procedure: k2179 
o|contracted procedure: k2144 
o|contracted procedure: k2148 
o|contracted procedure: k2167 
o|contracted procedure: k2171 
o|contracted procedure: k2155 
o|contracted procedure: k2163 
o|contracted procedure: k2175 
o|contracted procedure: k2298 
o|contracted procedure: k2195 
o|contracted procedure: k2292 
o|contracted procedure: k2198 
o|contracted procedure: k2286 
o|contracted procedure: k2201 
o|contracted procedure: k2280 
o|contracted procedure: k2204 
o|contracted procedure: k2219 
o|contracted procedure: k2225 
o|contracted procedure: k2231 
o|contracted procedure: k2245 
o|contracted procedure: k2251 
o|contracted procedure: k2254 
o|contracted procedure: k2257 
o|contracted procedure: k2270 
o|contracted procedure: k2274 
o|contracted procedure: k2307 
o|contracted procedure: k2322 
o|contracted procedure: k2325 
o|contracted procedure: k2328 
o|contracted procedure: k2341 
o|contracted procedure: k2345 
o|contracted procedure: k2348 
o|contracted procedure: k2361 
o|contracted procedure: k2365 
o|contracted procedure: k2410 
o|contracted procedure: k2406 
o|contracted procedure: k2375 
o|contracted procedure: k2384 
o|contracted procedure: k2402 
o|contracted procedure: k2387 
o|contracted procedure: k2394 
o|contracted procedure: k2398 
o|contracted procedure: k2416 
o|contracted procedure: k2431 
o|contracted procedure: k2437 
o|contracted procedure: k2446 
o|contracted procedure: k2455 
o|contracted procedure: k2486 
o|contracted procedure: k2489 
o|contracted procedure: k2500 
o|contracted procedure: k2512 
o|contracted procedure: k2518 
o|contracted procedure: k2521 
o|contracted procedure: k2524 
o|contracted procedure: k2527 
o|contracted procedure: k2530 
o|contracted procedure: k2533 
o|contracted procedure: k2583 
o|contracted procedure: k2539 
o|contracted procedure: k2545 
o|contracted procedure: k2551 
o|contracted procedure: k2563 
o|contracted procedure: k2576 
o|contracted procedure: k2616 
o|contracted procedure: k2610 
o|contracted procedure: k2631 
o|contracted procedure: k2625 
o|contracted procedure: k2640 
o|contracted procedure: k2643 
o|contracted procedure: k2646 
o|contracted procedure: k2649 
o|contracted procedure: k2652 
o|contracted procedure: k2665 
o|contracted procedure: k2656 
o|contracted procedure: k2662 
o|contracted procedure: k2671 
o|contracted procedure: k2674 
o|contracted procedure: k2677 
o|contracted procedure: k2680 
o|contracted procedure: k2683 
o|contracted procedure: k2696 
o|contracted procedure: k2687 
o|contracted procedure: k2693 
o|contracted procedure: k2702 
o|contracted procedure: k2705 
o|contracted procedure: k2711 
o|contracted procedure: k2714 
o|contracted procedure: k2733 
o|contracted procedure: k2721 
o|contracted procedure: k2729 
o|contracted procedure: k2725 
o|contracted procedure: k2790 
o|contracted procedure: k2739 
o|contracted procedure: k2784 
o|contracted procedure: k2742 
o|contracted procedure: k2778 
o|contracted procedure: k2745 
o|contracted procedure: k2772 
o|contracted procedure: k2748 
o|contracted procedure: k2766 
o|contracted procedure: k2751 
o|contracted procedure: k2760 
o|contracted procedure: k2754 
o|contracted procedure: k2799 
o|contracted procedure: k2802 
o|contracted procedure: k2808 
o|contracted procedure: k2811 
o|contracted procedure: k2830 
o|contracted procedure: k2818 
o|contracted procedure: k2826 
o|contracted procedure: k2822 
o|contracted procedure: k2887 
o|contracted procedure: k2836 
o|contracted procedure: k2881 
o|contracted procedure: k2839 
o|contracted procedure: k2875 
o|contracted procedure: k2842 
o|contracted procedure: k2869 
o|contracted procedure: k2845 
o|contracted procedure: k2863 
o|contracted procedure: k2848 
o|contracted procedure: k2857 
o|contracted procedure: k2851 
o|contracted procedure: k2896 
o|contracted procedure: k3021 
o|contracted procedure: k2899 
o|contracted procedure: k3013 
o|contracted procedure: k2902 
o|contracted procedure: k2905 
o|contracted procedure: k2908 
o|contracted procedure: k2911 
o|contracted procedure: k2917 
o|contracted procedure: k2920 
o|contracted procedure: k2940 
o|contracted procedure: k2949 
o|contracted procedure: k2952 
o|contracted procedure: k2967 
o|contracted procedure: k2974 
o|contracted procedure: k2980 
o|contracted procedure: k2983 
o|contracted procedure: k2989 
o|contracted procedure: k2992 
o|contracted procedure: k3009 
o|contracted procedure: k3123 
o|contracted procedure: k3030 
o|contracted procedure: k3033 
o|contracted procedure: k3036 
o|contracted procedure: k3039 
o|contracted procedure: k3063 
o|contracted procedure: k3066 
o|contracted procedure: k3069 
o|contracted procedure: k3072 
o|contracted procedure: k3082 
o|contracted procedure: k3086 
o|contracted procedure: k3092 
o|contracted procedure: k3095 
o|contracted procedure: k3098 
o|contracted procedure: k3105 
o|contracted procedure: k3113 
o|contracted procedure: k3117 
o|contracted procedure: k3109 
o|contracted procedure: k3135 
o|contracted procedure: k3149 
o|contracted procedure: k3155 
o|contracted procedure: k3162 
o|contracted procedure: k3277 
o|contracted procedure: k3172 
o|contracted procedure: k3175 
o|contracted procedure: k3178 
o|contracted procedure: k3193 
o|contracted procedure: k3199 
o|contracted procedure: k3241 
o|contracted procedure: k3248 
o|contracted procedure: k3252 
o|contracted procedure: k3258 
o|contracted procedure: k3269 
o|contracted procedure: k3273 
o|contracted procedure: k3235 
o|contracted procedure: k3218 
o|contracted procedure: k3222 
o|contracted procedure: k3283 
o|contracted procedure: k3286 
o|contracted procedure: k3292 
o|contracted procedure: k3298 
o|contracted procedure: k3304 
o|contracted procedure: k3307 
o|contracted procedure: k3318 
o|contracted procedure: k3328 
o|contracted procedure: k3337 
o|contracted procedure: k3340 
o|contracted procedure: k3343 
o|contracted procedure: k3352 
o|contracted procedure: k3366 
o|contracted procedure: k3363 
o|contracted procedure: k3385 
o|contracted procedure: k3392 
o|contracted procedure: k3396 
o|contracted procedure: k3399 
o|contracted procedure: k3402 
o|contracted procedure: k3405 
o|contracted procedure: k3456 
o|contracted procedure: k3452 
o|contracted procedure: k3412 
o|contracted procedure: k3415 
o|contracted procedure: k3433 
o|contracted procedure: k3425 
o|contracted procedure: k3429 
o|contracted procedure: k3436 
o|contracted procedure: k3440 
o|contracted procedure: k3465 
o|contracted procedure: k3468 
o|contracted procedure: k3471 
o|contracted procedure: k3483 
o|contracted procedure: k3489 
o|contracted procedure: k3500 
o|contracted procedure: k3515 
o|contracted procedure: k3519 
o|contracted procedure: k3523 
o|contracted procedure: k3559 
o|contracted procedure: k3529 
o|contracted procedure: k3532 
o|contracted procedure: k3535 
o|contracted procedure: k3538 
o|contracted procedure: k3541 
o|contracted procedure: k3544 
o|contracted procedure: k3556 
o|contracted procedure: k3550 
o|contracted procedure: k3571 
o|contracted procedure: k3577 
o|contracted procedure: k3580 
o|contracted procedure: k3586 
o|contracted procedure: k3598 
o|contracted procedure: k3611 
o|contracted procedure: k3618 
o|contracted procedure: k3626 
o|contracted procedure: k3622 
o|contracted procedure: k3636 
o|contracted procedure: k3644 
o|contracted procedure: k3668 
o|contracted procedure: k3677 
o|contracted procedure: k3683 
o|contracted procedure: k3690 
o|contracted procedure: k3696 
o|contracted procedure: k3713 
o|contracted procedure: k3720 
o|contracted procedure: k3731 
o|contracted procedure: k3739 
o|contracted procedure: k3746 
o|contracted procedure: k3757 
o|contracted procedure: k3774 
o|contracted procedure: k3780 
o|contracted procedure: k3795 
o|contracted procedure: k3801 
o|contracted procedure: k3817 
o|contracted procedure: k3821 
o|contracted procedure: k3827 
o|contracted procedure: k3833 
o|contracted procedure: k3845 
o|inlining procedure: k3842 
o|contracted procedure: k3863 
o|inlining procedure: k3860 
o|contracted procedure: k3879 
o|contracted procedure: k3883 
o|contracted procedure: k3895 
o|contracted procedure: k3904 
o|contracted procedure: k3916 
o|contracted procedure: k3919 
o|contracted procedure: k3922 
o|contracted procedure: k3931 
o|contracted procedure: k3939 
o|contracted procedure: k3952 
o|contracted procedure: k3956 
o|contracted procedure: k3959 
o|contracted procedure: k3965 
o|contracted procedure: k3968 
o|contracted procedure: k3988 
o|contracted procedure: k4004 
o|contracted procedure: k3991 
o|contracted procedure: k4000 
o|contracted procedure: k4011 
o|contracted procedure: k4020 
o|contracted procedure: k4053 
o|contracted procedure: k4068 
o|contracted procedure: k4072 
o|contracted procedure: k4092 
o|contracted procedure: k4076 
o|contracted procedure: k4080 
o|contracted procedure: k4088 
o|contracted procedure: k4064 
o|contracted procedure: k4060 
o|contracted procedure: k4102 
o|contracted procedure: k4165 
o|contracted procedure: k4159 
o|contracted procedure: k4113 
o|contracted procedure: k4122 
o|contracted procedure: k4133 
o|contracted procedure: k4139 
o|contracted procedure: k4142 
o|contracted procedure: k4155 
o|contracted procedure: k4178 
o|contracted procedure: k4219 
o|contracted procedure: k4223 
o|contracted procedure: k4185 
o|contracted procedure: k4194 
o|contracted procedure: k4204 
o|contracted procedure: k4212 
o|contracted procedure: k4232 
o|contracted procedure: k4238 
o|contracted procedure: k4296 
o|contracted procedure: k4247 
o|contracted procedure: k4250 
o|contracted procedure: k4259 
o|contracted procedure: k4265 
o|contracted procedure: k4278 
o|contracted procedure: k4291 
o|contracted procedure: k4299 
o|contracted procedure: k4324 
o|contracted procedure: k4333 
o|contracted procedure: k4340 
o|contracted procedure: k4346 
o|contracted procedure: k4349 
o|contracted procedure: k4358 
o|contracted procedure: k4367 
o|contracted procedure: k4370 
o|contracted procedure: k4379 
o|contracted procedure: k4388 
o|contracted procedure: k4391 
o|contracted procedure: k4397 
o|contracted procedure: k4408 
o|contracted procedure: k4404 
o|contracted procedure: k4400 
o|contracted procedure: k4425 
o|contracted procedure: k4411 
o|contracted procedure: k4421 
o|contracted procedure: k4431 
o|contracted procedure: k4434 
o|contracted procedure: k4440 
o|contracted procedure: k4443 
o|contracted procedure: k4463 
o|contracted procedure: k4446 
o|contracted procedure: k4460 
o|contracted procedure: k4456 
o|contracted procedure: k4449 
o|contracted procedure: k4469 
o|contracted procedure: k4478 
o|contracted procedure: k4485 
o|contracted procedure: k4494 
o|contracted procedure: k4504 
o|contracted procedure: k4512 
o|contracted procedure: k4508 
o|contracted procedure: k4518 
o|contracted procedure: k4530 
o|contracted procedure: k4570 
o|contracted procedure: k4542 
o|contracted procedure: k4552 
o|contracted procedure: k4555 
o|contracted procedure: k45525137 
o|contracted procedure: k4576 
o|contracted procedure: k4610 
o|contracted procedure: k4579 
o|contracted procedure: k4582 
o|contracted procedure: k4606 
o|contracted procedure: k4599 
o|contracted procedure: k4585 
o|contracted procedure: k4596 
o|contracted procedure: k4592 
o|contracted procedure: k4616 
o|contracted procedure: k4619 
o|contracted procedure: k4628 
o|contracted procedure: k4631 
o|contracted procedure: k4642 
o|contracted procedure: k4638 
o|contracted procedure: k4646 
o|contracted procedure: k4671 
o|contracted procedure: k4660 
o|contracted procedure: k4667 
o|contracted procedure: k4678 
o|simplifications: ((let . 87)) 
o|removed binding forms: 458 
o|inlining procedure: k2492 
o|inlining procedure: k2492 
o|inlining procedure: k3928 
o|inlining procedure: k3928 
o|substituted constant variable: r4220 
o|substituted constant variable: r4220 
o|substituted constant variable: r4224 
o|replaced variables: 164 
o|removed binding forms: 90 
o|replaced variables: 4 
o|removed binding forms: 1 
o|direct leaf routine/allocation: loop152 0 
o|direct leaf routine/allocation: loop347 0 
o|direct leaf routine/allocation: loop2606 0 
o|direct leaf routine/allocation: loop630 0 
o|direct leaf routine/allocation: doloop939940 0 
o|converted assignments to bindings: (loop152) 
o|converted assignments to bindings: (loop347) 
o|converted assignments to bindings: (loop2606) 
o|converted assignments to bindings: (loop630) 
o|converted assignments to bindings: (doloop939940) 
o|simplifications: ((let . 5)) 
o|customizable procedures: (k4625 k4558 doloop915916 loop908 k4394 k4229 loop852 loop842 visit819 walk834 doloop805806 step783 loop771 loop757 loop741 doloop734735 loop697 loop680 k3418 collect675 instring626 loop656 loop1598 scan569 loop553 add547 k2805 k2708 traverse389 loop400 map-loop365382 rev-string-append341 k2310 loop332 loop317 k2207 loop279 loop256 k2008 loop225 k1868 loop211 doloop198199 loop191 loop177 loop169 loop163 loop136 loop121 loop110 loop80 loop68) 
o|calls to known targets: 132 
o|unused rest argument: _92 f_1440 
o|unused rest argument: _93 f_1442 
o|unused rest argument: _134 f_1593 
o|identified direct recursive calls: f_1659 1 
o|identified direct recursive calls: f_1681 1 
o|identified direct recursive calls: f_1717 1 
o|identified direct recursive calls: f_1746 2 
o|identified direct recursive calls: f_1817 1 
o|identified direct recursive calls: f_1878 1 
o|identified direct recursive calls: f_1932 2 
o|identified direct recursive calls: f_2379 1 
o|identified direct recursive calls: f_2356 1 
o|identified direct recursive calls: f_2962 1 
o|identified direct recursive calls: f_3061 1 
o|identified direct recursive calls: f_3046 1 
o|identified direct recursive calls: f_3144 1 
o|identified direct recursive calls: f_3380 1 
o|identified direct recursive calls: f_3983 1 
o|identified direct recursive calls: f_4489 1 
o|identified direct recursive calls: f_4655 1 
o|fast box initializations: 39 
o|dropping unused closure argument: f_3133 
o|dropping unused closure argument: f_2516 
o|dropping unused closure argument: f_4655 
*/
/* end of file */
