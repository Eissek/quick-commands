/* Generated from modules.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:04
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: modules.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file modules.c
   unit: modules
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[180];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,21),40,109,111,100,117,108,101,45,110,97,109,101,32,120,50,52,49,50,54,48,41,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,31),40,109,111,100,117,108,101,45,117,110,100,101,102,105,110,101,100,45,108,105,115,116,32,120,50,52,49,50,57,49,41,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,44),40,115,101,116,45,109,111,100,117,108,101,45,117,110,100,101,102,105,110,101,100,45,108,105,115,116,33,32,120,50,52,49,50,57,52,32,121,50,52,50,50,57,53,41,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,27),40,35,35,115,121,115,35,109,111,100,117,108,101,45,101,120,112,111,114,116,115,32,109,51,55,52,41,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,46),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,109,111,100,117,108,101,45,97,108,105,97,115,32,97,108,105,97,115,51,56,50,32,110,97,109,101,51,56,51,41,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,9),40,115,119,97,112,51,56,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,7),40,97,51,48,52,55,41,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,51,57,55,32,103,52,48,57,52,49,54,41,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,48),40,35,35,115,121,115,35,119,105,116,104,45,109,111,100,117,108,101,45,97,108,105,97,115,101,115,32,98,105,110,100,105,110,103,115,51,56,53,32,116,104,117,110,107,51,56,54,41};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,11),40,103,52,51,57,32,97,52,52,49,41,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,19),40,108,111,111,112,32,110,52,51,49,32,100,111,110,101,52,51,50,41,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,114,101,115,111,108,118,101,45,109,111,100,117,108,101,45,110,97,109,101,32,110,97,109,101,52,50,56,32,108,111,99,52,50,57,41,0,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,39),40,35,35,115,121,115,35,102,105,110,100,45,109,111,100,117,108,101,32,110,97,109,101,52,53,48,32,46,32,116,109,112,52,52,57,52,53,49,41,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,11),40,103,52,55,56,32,109,52,56,48,41,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,28),40,35,35,115,121,115,35,115,119,105,116,99,104,45,109,111,100,117,108,101,32,109,111,100,52,55,48,41,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,6),40,103,53,49,49,41,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,6),40,103,52,57,53,41,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,52,57,52,32,103,53,48,49,53,49,53,41,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,97,100,100,45,116,111,45,101,120,112,111,114,116,45,108,105,115,116,32,109,111,100,52,56,54,32,101,120,112,115,52,56,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,60),40,35,35,115,121,115,35,116,111,112,108,101,118,101,108,45,100,101,102,105,110,105,116,105,111,110,45,104,111,111,107,32,115,121,109,53,50,50,32,109,111,100,53,50,51,32,101,120,112,53,50,52,32,118,97,108,53,50,53,41,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,39),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,109,101,116,97,45,101,120,112,114,101,115,115,105,111,110,32,101,120,112,53,50,55,41,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,39),40,99,104,101,99,107,45,102,111,114,45,114,101,100,101,102,32,115,121,109,53,51,48,32,101,110,118,53,51,49,32,115,101,110,118,53,51,50,41,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,37),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,101,120,112,111,114,116,32,115,121,109,53,51,55,32,109,111,100,53,51,56,41,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,51),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,115,121,110,116,97,120,45,101,120,112,111,114,116,32,115,121,109,53,53,51,32,109,111,100,53,53,52,32,118,97,108,53,53,53,41,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,11),40,103,53,55,57,32,97,53,56,49,41,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,49),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,117,110,100,101,102,105,110,101,100,32,115,121,109,53,54,57,32,109,111,100,53,55,48,32,119,104,101,114,101,53,55,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,54),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,109,111,100,117,108,101,32,110,97,109,101,53,56,57,32,101,120,112,108,105,115,116,53,57,48,32,46,32,116,109,112,53,56,56,53,57,49,41,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,54,48,56,32,103,54,49,53,54,50,57,41,0,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,35),40,35,35,115,121,115,35,109,97,114,107,45,105,109,112,111,114,116,101,100,45,115,121,109,98,111,108,115,32,115,101,54,48,53,41,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,115,101,54,57,51,41,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,17),40,109,101,114,103,101,45,115,101,32,115,101,115,54,56,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,17),40,103,55,56,54,32,115,101,120,112,111,114,116,55,57,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,115,100,56,50,49,41,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,55,56,48,32,103,55,57,50,56,49,52,41,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,55,52,55,32,103,55,53,57,55,55,50,41,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,55,50,49,32,103,55,51,51,55,51,57,41,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,43),40,35,35,115,121,115,35,99,111,109,112,105,108,101,100,45,109,111,100,117,108,101,45,114,101,103,105,115,116,114,97,116,105,111,110,32,109,111,100,55,48,52,41,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,14),40,103,57,52,48,32,115,101,120,112,57,52,57,41,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,14),40,103,57,54,49,32,105,101,120,112,57,55,48,41,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,14),40,103,57,56,50,32,110,101,120,112,57,57,49,41,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,57,56,49,32,103,57,56,56,57,57,54,41,0,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,57,54,48,32,103,57,54,55,57,55,53,41,0,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,57,51,57,32,103,57,52,54,57,53,52,41,0,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,57,49,48,32,103,57,50,50,57,50,57,41,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,56,56,50,32,103,56,57,52,57,48,49,41,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,56,53,52,32,103,56,54,54,56,55,51,41,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,88),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,99,111,109,112,105,108,101,100,45,109,111,100,117,108,101,32,110,97,109,101,56,51,55,32,105,101,120,112,111,114,116,115,56,51,56,32,118,101,120,112,111,114,116,115,56,51,57,32,115,101,120,112,111,114,116,115,56,52,48,32,46,32,116,109,112,56,51,54,56,52,49,41};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,112,114,105,109,105,116,105,118,101,45,97,108,105,97,115,32,115,121,109,49,48,48,55,41,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,14),40,103,49,48,54,54,32,115,101,49,48,55,55,41,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,48,54,48,32,103,49,48,55,50,49,48,56,50,41};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,48,51,51,32,103,49,48,52,53,49,48,53,50,41};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,69),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,112,114,105,109,105,116,105,118,101,45,109,111,100,117,108,101,32,110,97,109,101,49,48,50,49,32,118,101,120,112,111,114,116,115,49,48,50,50,32,46,32,116,109,112,49,48,50,48,49,48,50,51,41,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,120,108,49,48,57,54,41,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,48),40,35,35,115,121,115,35,102,105,110,100,45,101,120,112,111,114,116,32,115,121,109,49,48,57,49,32,109,111,100,49,48,57,50,32,105,110,100,105,114,101,99,116,49,48,57,51,41};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,13),40,103,49,50,50,54,32,97,49,50,51,53,41,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,50,50,53,32,103,49,50,51,50,49,50,51,57,41,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,15),40,103,49,49,57,53,32,115,121,109,49,50,48,52,41,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,49,57,52,32,103,49,50,48,49,49,50,48,55,41,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,13),40,103,49,49,55,57,32,117,49,49,56,56,41,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,13),40,103,49,50,57,52,32,109,49,51,48,51,41,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,50,57,51,32,103,49,51,48,48,49,51,48,57,41,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,50,53,56,32,103,49,50,55,48,49,50,56,52,41};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,19),40,119,97,114,110,32,109,115,103,54,52,57,32,105,100,54,53,48,41,0,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,11),40,103,54,54,54,32,97,54,54,56,41,0,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,11),40,103,54,55,51,32,97,54,55,53,41,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,19),40,108,111,111,112,50,32,105,101,120,112,111,114,116,115,54,53,56,41,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,101,120,112,111,114,116,115,54,53,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,49,55,56,32,103,49,49,56,53,49,50,53,49,41,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,120,108,49,49,53,57,41,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,109,101,49,49,53,49,41,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,49,50,52,32,103,49,49,51,54,49,49,52,51,41};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,102,105,110,97,108,105,122,101,45,109,111,100,117,108,101,32,109,111,100,49,49,49,53,41,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,10),40,115,119,97,112,49,51,51,51,41,0,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,7),40,97,53,56,48,55,41,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,7),40,97,53,56,49,50,41,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,7),40,97,53,56,49,56,41,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,7),40,97,53,56,48,49,41,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,52),40,35,35,115,121,115,35,102,105,110,100,45,109,111,100,117,108,101,47,105,109,112,111,114,116,45,108,105,98,114,97,114,121,32,109,110,97,109,101,49,51,50,53,32,108,111,99,49,51,50,54,41,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,17),40,114,101,115,111,108,118,101,32,115,121,109,49,52,48,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,13),40,116,111,115,116,114,32,120,49,52,48,55,41,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,22),40,105,109,112,111,114,116,45,110,97,109,101,32,115,112,101,99,49,52,49,50,41,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,7),40,97,53,57,56,55,41,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,13),40,103,49,52,56,57,32,97,49,52,57,49,41,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,13),40,103,49,52,57,51,32,97,49,52,57,53,41,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,32,105,100,115,49,52,55,55,32,118,49,52,55,56,32,115,49,52,55,57,41,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,52,53,50,32,103,49,52,54,52,49,52,55,48,41};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,21),40,108,111,111,112,32,105,109,112,115,49,53,51,51,32,115,49,53,51,52,41,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,21),40,108,111,111,112,32,105,109,112,118,49,53,50,54,32,118,49,53,50,55,41,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,53,48,49,32,103,49,53,49,51,49,53,49,57,41};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,53,54,51,32,103,49,53,55,48,49,53,55,53,41,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,13),40,103,49,53,56,52,32,97,49,53,56,54,41,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,13),40,103,49,53,56,56,32,97,49,53,57,48,41,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,44),40,108,111,111,112,32,105,109,112,118,49,53,52,54,32,105,109,112,115,49,53,52,55,32,118,49,53,52,56,32,115,49,53,52,57,32,105,100,115,49,53,53,48,41,0,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,13),40,114,101,110,32,105,109,112,49,53,57,53,41,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,54,50,52,32,103,49,54,51,54,49,54,52,50,41};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,53,57,56,32,103,49,54,49,48,49,54,49,54,41};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,75),40,97,53,57,57,55,32,102,111,114,109,49,52,50,57,49,52,51,48,49,52,51,55,32,105,109,112,118,49,52,51,49,49,52,51,50,49,52,51,56,32,105,109,112,115,49,52,51,51,49,52,51,52,49,52,51,57,32,105,109,112,105,49,52,51,53,49,52,51,54,49,52,52,48,41,0,0,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,22),40,105,109,112,111,114,116,45,115,112,101,99,32,115,112,101,99,49,52,49,55,41,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,7),40,97,54,54,50,51,41,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,15),40,103,49,54,56,57,32,105,109,112,49,54,57,56,41,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,15),40,103,49,55,49,48,32,105,109,112,49,55,49,57,41,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,55,53,57,32,103,49,55,55,49,49,55,55,55,41};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,55,51,51,32,103,49,55,52,53,49,55,53,49,41};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,56,49,51,32,103,49,56,50,53,49,56,51,49,41};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,55,56,55,32,103,49,55,57,57,49,56,48,53,41};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,55,48,57,32,103,49,55,49,54,49,55,50,50,41,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,54,56,56,32,103,49,54,57,53,49,55,48,51,41,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,72),40,97,54,54,50,57,32,102,111,114,109,49,54,54,52,49,54,54,53,49,54,55,50,32,118,115,118,49,54,54,54,49,54,54,55,49,54,55,51,32,118,115,115,49,54,54,56,49,54,54,57,49,54,55,52,32,118,115,105,49,54,55,48,49,54,55,49,49,54,55,53,41};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,16),40,103,49,54,53,52,32,115,112,101,99,49,54,54,51,41};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,54,53,51,32,103,49,54,54,48,49,56,53,50,41,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,97),40,35,35,115,121,115,35,101,120,112,97,110,100,45,105,109,112,111,114,116,32,120,49,51,56,54,32,114,49,51,56,55,32,99,49,51,56,56,32,105,109,112,111,114,116,45,101,110,118,49,51,56,57,32,109,97,99,114,111,45,101,110,118,49,51,57,48,32,109,101,116,97,63,49,51,57,49,32,114,101,101,120,112,63,49,51,57,50,32,108,111,99,49,51,57,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,40),40,35,35,115,121,115,35,109,111,100,117,108,101,45,114,101,110,97,109,101,32,115,121,109,49,56,54,51,32,112,114,101,102,105,120,49,56,54,52,41};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,15),40,103,49,56,56,50,32,109,111,100,49,56,56,52,41,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,17),40,109,114,101,110,97,109,101,32,115,121,109,49,56,55,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,13),40,103,49,57,49,48,32,97,49,57,49,50,41,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,54),40,35,35,115,121,115,35,97,108,105,97,115,45,103,108,111,98,97,108,45,104,111,111,107,32,115,121,109,49,56,54,54,32,97,115,115,105,103,110,49,56,54,55,32,119,104,101,114,101,49,56,54,56,41,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,44),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,105,110,116,101,114,102,97,99,101,32,110,97,109,101,49,57,50,54,32,101,120,112,115,49,57,50,55,41,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,14),40,101,114,114,32,97,114,103,115,49,57,52,50,41,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,16),40,105,102,97,99,101,32,110,97,109,101,49,57,52,51,41};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,50,32,108,115,116,49,57,54,52,41,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,120,112,115,49,57,53,50,41,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,118,97,108,105,100,97,116,101,45,101,120,112,111,114,116,115,32,101,120,112,115,49,57,51,52,32,108,111,99,49,57,51,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,62),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,102,117,110,99,116,111,114,32,110,97,109,101,49,57,55,52,32,102,97,114,103,115,49,57,55,53,32,102,101,120,112,115,49,57,55,54,32,98,111,100,121,49,57,55,55,41,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,14),40,101,114,114,32,97,114,103,115,49,57,57,51,41,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,48,48,51,32,103,50,48,49,53,50,48,50,49,41};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,6),40,109,101,114,114,41,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,50,32,102,97,115,50,48,51,53,41,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,21),40,108,111,111,112,32,97,115,50,48,50,56,32,102,97,115,50,48,50,57,41,0,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,55),40,35,35,115,121,115,35,105,110,115,116,97,110,116,105,97,116,101,45,102,117,110,99,116,111,114,32,110,97,109,101,49,57,56,52,32,102,110,97,109,101,49,57,56,53,32,97,114,103,115,49,57,56,54,41,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,15),40,103,50,48,54,52,32,101,120,112,50,48,55,51,41,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,48,56,53,32,103,50,48,57,55,50,49,48,52,41};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,48,54,51,32,103,50,48,55,48,50,48,55,57,41,0,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,78),40,35,35,115,121,115,35,109,97,116,99,104,45,102,117,110,99,116,111,114,45,97,114,103,117,109,101,110,116,32,97,108,105,97,115,50,48,53,52,32,110,97,109,101,50,48,53,53,32,109,110,97,109,101,50,48,53,54,32,101,120,112,115,50,48,53,55,32,102,110,97,109,101,50,48,53,56,41,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,44),40,109,111,100,117,108,101,45,101,110,118,105,114,111,110,109,101,110,116,32,109,110,97,109,101,50,49,50,50,32,46,32,116,109,112,50,49,50,49,50,49,50,51,41,0,0,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_7646)
static void C_ccall f_7646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6646)
static void C_ccall f_6646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6647)
static void C_fcall f_6647(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6464)
static void C_ccall f_6464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6270)
static void C_ccall f_6270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6273)
static void C_ccall f_6273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5568)
static void C_fcall f_5568(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6278)
static void C_fcall f_6278(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_6844)
static void C_fcall f_6844(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7851)
static void C_ccall f_7851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6470)
static void C_ccall f_6470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6617)
static void C_ccall f_6617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6474)
static void C_ccall f_6474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6618)
static void C_fcall f_6618(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6478)
static void C_ccall f_6478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6614)
static void C_ccall f_6614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7669)
static void C_ccall f_7669(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_7871)
static void C_ccall f_7871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7657)
static void C_ccall f_7657(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6496)
static void C_ccall f_6496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6630)
static void C_ccall f_6630(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_6634)
static void C_ccall f_6634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7222)
static void C_ccall f_7222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7224)
static void C_ccall f_7224(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7680)
static void C_fcall f_7680(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6809)
static void C_fcall f_6809(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6807)
static void C_ccall f_6807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3507)
static void C_ccall f_3507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6803)
static void C_ccall f_6803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3504)
static void C_ccall f_3504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7219)
static void C_ccall f_7219(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7673)
static void C_ccall f_7673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3119)
static void C_fcall f_3119(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7842)
static void C_ccall f_7842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7844)
static void C_ccall f_7844(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7844)
static void C_ccall f_7844r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3113)
static void C_ccall f_3113(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7478)
static void C_fcall f_7478(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7833)
static void C_ccall f_7833(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7693)
static void C_fcall f_7693(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7836)
static void C_ccall f_7836(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7839)
static void C_ccall f_7839(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7830)
static void C_ccall f_7830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7461)
static void C_fcall f_7461(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7468)
static void C_ccall f_7468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7497)
static void C_ccall f_7497(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7499)
static void C_fcall f_7499(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7282)
static void C_fcall f_7282(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7809)
static void C_ccall f_7809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3573)
static void C_ccall f_3573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7824)
static void C_ccall f_7824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7827)
static void C_ccall f_7827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3587)
static void C_fcall f_3587(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3580)
static void C_fcall f_3580(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5520)
static void C_ccall f_5520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5906)
static void C_fcall f_5906(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5358)
static void C_ccall f_5358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5324)
static void C_ccall f_5324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5333)
static void C_ccall f_5333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5330)
static void C_ccall f_5330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4062)
static void C_ccall f_4062(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6231)
static void C_fcall f_6231(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4052)
static void C_ccall f_4052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7054)
static void C_ccall f_7054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7241)
static void C_fcall f_7241(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6448)
static void C_ccall f_6448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7083)
static void C_ccall f_7083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7235)
static void C_fcall f_7235(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7232)
static void C_ccall f_7232(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6456)
static void C_ccall f_6456(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6451)
static void C_ccall f_6451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7071)
static void C_ccall f_7071(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7073)
static void C_fcall f_7073(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3027)
static void C_ccall f_3027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3029)
static void C_ccall f_3029(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3485)
static void C_ccall f_3485(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4093)
static void C_fcall f_4093(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4097)
static void C_ccall f_4097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3033)
static void C_ccall f_3033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3034)
static void C_ccall f_3034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3038)
static void C_ccall f_3038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4085)
static void C_fcall f_4085(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4089)
static void C_ccall f_4089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3232)
static void C_ccall f_3232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7437)
static void C_ccall f_7437(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4951)
static void C_fcall f_4951(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3893)
static void C_fcall f_3893(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3245)
static void C_fcall f_3245(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3472)
static void C_ccall f_3472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7039)
static void C_ccall f_7039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7609)
static void C_ccall f_7609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3257)
static void C_ccall f_3257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7453)
static void C_ccall f_7453(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4781)
static void C_ccall f_4781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4787)
static void C_fcall f_4787(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3498)
static void C_ccall f_3498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3495)
static void C_ccall f_3495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7104)
static void C_ccall f_7104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3461)
static void C_ccall f_3461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3279)
static void C_ccall f_3279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3468)
static void C_ccall f_3468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4129)
static void C_fcall f_4129(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3280)
static C_word C_fcall f_3280(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_3856)
static void C_fcall f_3856(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3288)
static C_word C_fcall f_3288(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_3409)
static void C_ccall f_3409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3406)
static void C_ccall f_3406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4510)
static void C_ccall f_4510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3223)
static void C_fcall f_3223(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3220)
static void C_ccall f_3220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3879)
static void C_ccall f_3879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3226)
static void C_ccall f_3226(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3457)
static void C_ccall f_3457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4101)
static void C_ccall f_4101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3041)
static void C_ccall f_3041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4500)
static void C_ccall f_4500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3048)
static void C_ccall f_3048(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_modules_toplevel)
C_externexport void C_ccall C_modules_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3421)
static void C_ccall f_3421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3806)
static void C_fcall f_3806(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4721)
static void C_fcall f_4721(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3424)
static void C_ccall f_3424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3814)
static void C_ccall f_3814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3818)
static void C_ccall f_3818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4560)
static void C_ccall f_4560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4943)
static void C_ccall f_4943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4949)
static void C_ccall f_4949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3829)
static void C_fcall f_3829(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5010)
static void C_fcall f_5010(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3076)
static void C_ccall f_3076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3072)
static void C_ccall f_3072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3078)
static void C_fcall f_3078(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4708)
static void C_ccall f_4708(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3263)
static void C_ccall f_3263(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3412)
static void C_ccall f_3412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3261)
static void C_ccall f_3261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3418)
static void C_ccall f_3418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4911)
static void C_ccall f_4911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4915)
static void C_ccall f_4915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4919)
static void C_ccall f_4919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5004)
static void C_ccall f_5004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4752)
static void C_fcall f_4752(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4750)
static void C_ccall f_4750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4746)
static void C_ccall f_4746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4592)
static void C_ccall f_4592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4975)
static void C_fcall f_4975(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4973)
static void C_ccall f_4973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4731)
static void C_ccall f_4731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5039)
static void C_ccall f_5039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4580)
static void C_fcall f_4580(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4570)
static void C_ccall f_4570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4576)
static void C_ccall f_4576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4579)
static void C_ccall f_4579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4377)
static void C_fcall f_4377(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4375)
static void C_ccall f_4375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7121)
static void C_ccall f_7121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7125)
static void C_fcall f_7125(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5092)
static void C_fcall f_5092(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7114)
static void C_ccall f_7114(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7117)
static void C_fcall f_7117(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6066)
static void C_fcall f_6066(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5833)
static void C_ccall f_5833(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5836)
static void C_ccall f_5836(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9) C_noret;
C_noret_decl(f_5206)
static void C_ccall f_5206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5691)
static void C_ccall f_5691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6094)
static void C_fcall f_6094(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5843)
static void C_ccall f_5843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5849)
static void C_ccall f_5849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5846)
static void C_ccall f_5846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5213)
static void C_ccall f_5213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5840)
static void C_ccall f_5840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5813)
static void C_ccall f_5813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5819)
static void C_ccall f_5819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5240)
static void C_ccall f_5240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4328)
static void C_fcall f_4328(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4326)
static void C_ccall f_4326(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5829)
static void C_ccall f_5829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5682)
static void C_ccall f_5682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4357)
static void C_fcall f_4357(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6044)
static void C_fcall f_6044(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5412)
static void C_ccall f_5412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5876)
static void C_ccall f_5876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4547)
static void C_ccall f_4547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4531)
static void C_ccall f_4531(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5427)
static void C_ccall f_5427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5423)
static void C_ccall f_5423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5883)
static void C_ccall f_5883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6737)
static void C_fcall f_6737(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5854)
static void C_ccall f_5854(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6734)
static void C_ccall f_6734(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5051)
static void C_ccall f_5051(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3632)
static void C_ccall f_3632(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3632)
static void C_ccall f_3632r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5852)
static void C_ccall f_5852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5409)
static void C_ccall f_5409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5406)
static void C_ccall f_5406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5400)
static void C_ccall f_5400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6747)
static void C_ccall f_6747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5863)
static void C_fcall f_5863(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5669)
static void C_fcall f_5669(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5667)
static void C_ccall f_5667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6740)
static void C_ccall f_6740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6995)
static void C_ccall f_6995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5064)
static void C_fcall f_5064(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5062)
static void C_fcall f_5062(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5292)
static void C_ccall f_5292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5634)
static void C_ccall f_5634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5287)
static void C_ccall f_5287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5288)
static void C_fcall f_5288(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5466)
static void C_ccall f_5466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6728)
static void C_ccall f_6728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2851)
static void C_ccall f_2851(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5620)
static void C_ccall f_5620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6540)
static void C_fcall f_6540(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6315)
static void C_fcall f_6315(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6771)
static void C_ccall f_6771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6985)
static void C_fcall f_6985(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2842)
static void C_ccall f_2842(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5612)
static void C_ccall f_5612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6778)
static void C_ccall f_6778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5265)
static void C_ccall f_5265(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5616)
static void C_ccall f_5616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7793)
static void C_ccall f_7793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7799)
static void C_fcall f_7799(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6325)
static void C_ccall f_6325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6788)
static void C_ccall f_6788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7314)
static void C_ccall f_7314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6755)
static void C_ccall f_6755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6751)
static void C_ccall f_6751(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6759)
static void C_ccall f_6759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3691)
static void C_fcall f_3691(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6302)
static void C_ccall f_6302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6762)
static void C_ccall f_6762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6768)
static void C_ccall f_6768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6503)
static void C_ccall f_6503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6505)
static void C_fcall f_6505(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5470)
static void C_ccall f_5470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5472)
static void C_fcall f_5472(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6944)
static void C_fcall f_6944(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7756)
static void C_ccall f_7756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6569)
static void C_ccall f_6569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6795)
static void C_ccall f_6795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6579)
static void C_ccall f_6579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7762)
static void C_ccall f_7762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7764)
static void C_fcall f_7764(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6396)
static void C_fcall f_6396(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6909)
static void C_fcall f_6909(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6907)
static void C_ccall f_6907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6903)
static void C_ccall f_6903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7745)
static void C_ccall f_7745(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7741)
static void C_ccall f_7741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7395)
static void C_ccall f_7395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6123)
static void C_ccall f_6123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7381)
static void C_fcall f_7381(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3011)
static void C_ccall f_3011(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7572)
static void C_fcall f_7572(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7720)
static void C_ccall f_7720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7560)
static void C_fcall f_7560(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3217)
static void C_ccall f_3217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3210)
static void C_ccall f_3210(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5451)
static void C_ccall f_5451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7733)
static void C_ccall f_7733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7737)
static void C_ccall f_7737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5435)
static void C_ccall f_5435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5431)
static void C_ccall f_5431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5441)
static void C_fcall f_5441(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7594)
static void C_ccall f_7594(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7598)
static void C_ccall f_7598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3682)
static void C_ccall f_3682(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5243)
static void C_ccall f_5243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5808)
static void C_ccall f_5808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5802)
static void C_ccall f_5802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5800)
static void C_ccall f_5800(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5255)
static void C_fcall f_5255(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6359)
static void C_ccall f_6359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5225)
static void C_ccall f_5225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5222)
static void C_ccall f_5222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5236)
static void C_fcall f_5236(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5235)
static void C_ccall f_5235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5232)
static void C_ccall f_5232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6343)
static void C_fcall f_6343(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4145)
static void C_fcall f_4145(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7185)
static void C_fcall f_7185(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3994)
static void C_ccall f_3994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4133)
static void C_ccall f_4133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6534)
static void C_ccall f_6534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4199)
static void C_fcall f_4199(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3375)
static void C_ccall f_3375(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7151)
static void C_ccall f_7151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3981)
static void C_ccall f_3981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4187)
static void C_ccall f_4187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3382)
static void C_ccall f_3382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7354)
static void C_fcall f_7354(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4867)
static void C_ccall f_4867(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3154)
static void C_ccall f_3154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3156)
static void C_ccall f_3156(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3156)
static void C_ccall f_3156r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4177)
static void C_ccall f_4177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3396)
static void C_ccall f_3396(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4863)
static void C_ccall f_4863(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7132)
static void C_ccall f_7132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7340)
static void C_ccall f_7340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3127)
static void C_fcall f_3127(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4685)
static void C_ccall f_4685(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4698)
static void C_fcall f_4698(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4851)
static void C_ccall f_4851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7539)
static void C_ccall f_7539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4675)
static void C_fcall f_4675(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4665)
static void C_ccall f_4665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3918)
static void C_ccall f_3918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3352)
static void C_ccall f_3352(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3350)
static void C_ccall f_3350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7008)
static void C_fcall f_7008(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3355)
static void C_ccall f_3355(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3359)
static void C_ccall f_3359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3962)
static void C_ccall f_3962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4025)
static void C_fcall f_4025(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4895)
static void C_ccall f_4895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4406)
static void C_ccall f_4406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3933)
static void C_fcall f_3933(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4014)
static void C_ccall f_4014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4010)
static void C_fcall f_4010(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3901)
static void C_fcall f_3901(C_word t0,C_word t1) C_noret;
C_noret_decl(f8321)
static void C_ccall f8321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3905)
static void C_ccall f_3905(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4004)
static void C_ccall f_4004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7096)
static void C_ccall f_7096(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3302)
static void C_ccall f_3302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3305)
static void C_ccall f_3305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3951)
static void C_ccall f_3951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3312)
static void C_ccall f_3312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3316)
static void C_ccall f_3316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4241)
static void C_fcall f_4241(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3322)
static void C_fcall f_3322(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3727)
static void C_fcall f_3727(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3737)
static void C_ccall f_3737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4605)
static void C_ccall f_4605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4606)
static void C_fcall f_4606(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4478)
static void C_ccall f_4478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5129)
static void C_ccall f_5129(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4652)
static void C_ccall f_4652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4822)
static void C_fcall f_4822(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4816)
static void C_ccall f_4816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4640)
static void C_fcall f_4640(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4889)
static void C_ccall f_4889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4270)
static void C_ccall f_4270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4882)
static void C_ccall f_4882(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4882)
static void C_ccall f_4882r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4622)
static void C_ccall f_4622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4639)
static void C_ccall f_4639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7018)
static void C_ccall f_7018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4876)
static void C_ccall f_4876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5195)
static void C_ccall f_5195(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5192)
static void C_ccall f_5192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5198)
static void C_ccall f_5198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5171)
static void C_fcall f_5171(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5170)
static void C_ccall f_5170(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5185)
static void C_ccall f_5185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5189)
static void C_ccall f_5189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5932)
static void C_fcall f_5932(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5930)
static void C_ccall f_5930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6159)
static void C_fcall f_6159(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5300)
static void C_fcall f_5300(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5310)
static void C_ccall f_5310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2987)
static void C_ccall f_2987(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6136)
static void C_ccall f_6136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6133)
static void C_ccall f_6133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4448)
static void C_ccall f_4448(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...) C_noret;
C_noret_decl(f_4448)
static void C_ccall f_4448r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t7) C_noret;
C_noret_decl(f_4446)
static void C_ccall f_4446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5910)
static void C_ccall f_5910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6147)
static void C_fcall f_6147(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5788)
static void C_ccall f_5788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6142)
static void C_ccall f_6142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5784)
static void C_ccall f_5784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5781)
static void C_ccall f_5781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4223)
static void C_ccall f_4223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4239)
static void C_ccall f_4239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5537)
static void C_fcall f_5537(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5796)
static void C_ccall f_5796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3513)
static void C_ccall f_3513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5975)
static void C_ccall f_5975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5791)
static void C_ccall f_5791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5971)
static void C_ccall f_5971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4424)
static void C_ccall f_4424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5767)
static void C_ccall f_5767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5763)
static void C_ccall f_5763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5501)
static void C_ccall f_5501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5988)
static void C_ccall f_5988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5762)
static void C_ccall f_5762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5777)
static void C_ccall f_5777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5774)
static void C_ccall f_5774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5510)
static void C_fcall f_5510(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5770)
static void C_ccall f_5770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5155)
static void C_ccall f_5155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5951)
static void C_fcall f_5951(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5164)
static void C_ccall f_5164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3547)
static void C_ccall f_3547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5744)
static void C_ccall f_5744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5967)
static void C_ccall f_5967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5747)
static void C_ccall f_5747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5740)
static void C_ccall f_5740(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5167)
static void C_ccall f_5167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5960)
static void C_fcall f_5960(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6691)
static void C_ccall f_6691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6692)
static void C_fcall f_6692(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5759)
static void C_ccall f_5759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3551)
static void C_ccall f_3551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5753)
static void C_ccall f_5753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6005)
static void C_ccall f_6005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2761)
static void C_ccall f_2761(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6008)
static void C_ccall f_6008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5572)
static void C_ccall f_5572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5750)
static void C_ccall f_5750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5382)
static void C_ccall f_5382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3566)
static void C_ccall f_3566(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6014)
static void C_ccall f_6014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6019)
static void C_fcall f_6019(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6412)
static void C_ccall f_6412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5733)
static void C_ccall f_5733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2743)
static void C_ccall f_2743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5998)
static void C_ccall f_5998(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2747)
static void C_ccall f_2747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5365)
static void C_ccall f_5365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6685)
static void C_ccall f_6685(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6881)
static void C_ccall f_6881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5704)
static void C_fcall f_5704(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5377)
static void C_ccall f_5377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5374)
static void C_ccall f_5374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5378)
static void C_fcall f_5378(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6892)
static void C_ccall f_6892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5371)
static void C_ccall f_5371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5584)
static void C_fcall f_5584(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6624)
static void C_ccall f_6624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5581)
static void C_ccall f_5581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5596)
static void C_fcall f_5596(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6260)
static void C_ccall f_6260(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_6647)
static void C_fcall trf_6647(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6647(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6647(t0,t1,t2);}

C_noret_decl(trf_5568)
static void C_fcall trf_5568(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5568(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5568(t0,t1);}

C_noret_decl(trf_6278)
static void C_fcall trf_6278(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6278(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_6278(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_6844)
static void C_fcall trf_6844(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6844(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6844(t0,t1,t2);}

C_noret_decl(trf_6618)
static void C_fcall trf_6618(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6618(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6618(t0,t1,t2);}

C_noret_decl(trf_7680)
static void C_fcall trf_7680(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7680(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7680(t0,t1,t2);}

C_noret_decl(trf_6809)
static void C_fcall trf_6809(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6809(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6809(t0,t1,t2);}

C_noret_decl(trf_3119)
static void C_fcall trf_3119(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3119(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3119(t0,t1,t2,t3);}

C_noret_decl(trf_7478)
static void C_fcall trf_7478(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7478(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7478(t0,t1);}

C_noret_decl(trf_7693)
static void C_fcall trf_7693(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7693(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7693(t0,t1);}

C_noret_decl(trf_7461)
static void C_fcall trf_7461(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7461(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7461(t0,t1,t2);}

C_noret_decl(trf_7499)
static void C_fcall trf_7499(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7499(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7499(t0,t1,t2);}

C_noret_decl(trf_7282)
static void C_fcall trf_7282(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7282(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7282(t0,t1,t2);}

C_noret_decl(trf_3587)
static void C_fcall trf_3587(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3587(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3587(t0,t1);}

C_noret_decl(trf_3580)
static void C_fcall trf_3580(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3580(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3580(t0,t1,t2);}

C_noret_decl(trf_5906)
static void C_fcall trf_5906(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5906(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5906(t0,t1);}

C_noret_decl(trf_6231)
static void C_fcall trf_6231(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6231(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6231(t0,t1,t2);}

C_noret_decl(trf_7241)
static void C_fcall trf_7241(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7241(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7241(t0,t1,t2);}

C_noret_decl(trf_7235)
static void C_fcall trf_7235(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7235(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7235(t0,t1,t2);}

C_noret_decl(trf_7073)
static void C_fcall trf_7073(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7073(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7073(t0,t1,t2);}

C_noret_decl(trf_4093)
static void C_fcall trf_4093(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4093(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4093(t0,t1);}

C_noret_decl(trf_4085)
static void C_fcall trf_4085(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4085(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4085(t0,t1);}

C_noret_decl(trf_4951)
static void C_fcall trf_4951(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4951(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4951(t0,t1,t2);}

C_noret_decl(trf_3893)
static void C_fcall trf_3893(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3893(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3893(t0,t1,t2);}

C_noret_decl(trf_3245)
static void C_fcall trf_3245(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3245(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3245(t0,t1,t2);}

C_noret_decl(trf_4787)
static void C_fcall trf_4787(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4787(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4787(t0,t1,t2);}

C_noret_decl(trf_4129)
static void C_fcall trf_4129(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4129(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4129(t0,t1);}

C_noret_decl(trf_3856)
static void C_fcall trf_3856(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3856(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3856(t0,t1,t2);}

C_noret_decl(trf_3223)
static void C_fcall trf_3223(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3223(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3223(t0,t1);}

C_noret_decl(trf_3806)
static void C_fcall trf_3806(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3806(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3806(t0,t1,t2,t3);}

C_noret_decl(trf_4721)
static void C_fcall trf_4721(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4721(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4721(t0,t1,t2);}

C_noret_decl(trf_3829)
static void C_fcall trf_3829(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3829(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3829(t0,t1,t2);}

C_noret_decl(trf_5010)
static void C_fcall trf_5010(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5010(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5010(t0,t1,t2);}

C_noret_decl(trf_3078)
static void C_fcall trf_3078(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3078(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3078(t0,t1,t2);}

C_noret_decl(trf_4752)
static void C_fcall trf_4752(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4752(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4752(t0,t1,t2);}

C_noret_decl(trf_4975)
static void C_fcall trf_4975(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4975(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4975(t0,t1,t2);}

C_noret_decl(trf_4580)
static void C_fcall trf_4580(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4580(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4580(t0,t1,t2);}

C_noret_decl(trf_4377)
static void C_fcall trf_4377(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4377(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4377(t0,t1,t2);}

C_noret_decl(trf_7125)
static void C_fcall trf_7125(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7125(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7125(t0,t1,t2);}

C_noret_decl(trf_5092)
static void C_fcall trf_5092(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5092(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5092(t0,t1);}

C_noret_decl(trf_7117)
static void C_fcall trf_7117(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7117(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7117(t0,t1,t2);}

C_noret_decl(trf_6066)
static void C_fcall trf_6066(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6066(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6066(t0,t1,t2);}

C_noret_decl(trf_6094)
static void C_fcall trf_6094(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6094(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6094(t0,t1,t2);}

C_noret_decl(trf_4328)
static void C_fcall trf_4328(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4328(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4328(t0,t1,t2);}

C_noret_decl(trf_4357)
static void C_fcall trf_4357(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4357(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4357(t0,t1);}

C_noret_decl(trf_6044)
static void C_fcall trf_6044(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6044(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6044(t0,t1,t2);}

C_noret_decl(trf_6737)
static void C_fcall trf_6737(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6737(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6737(t0,t1);}

C_noret_decl(trf_5863)
static void C_fcall trf_5863(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5863(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5863(t0,t1,t2);}

C_noret_decl(trf_5669)
static void C_fcall trf_5669(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5669(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5669(t0,t1,t2);}

C_noret_decl(trf_5064)
static void C_fcall trf_5064(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5064(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5064(t0,t1,t2);}

C_noret_decl(trf_5062)
static void C_fcall trf_5062(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5062(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5062(t0,t1);}

C_noret_decl(trf_5288)
static void C_fcall trf_5288(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5288(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5288(t0,t1,t2);}

C_noret_decl(trf_6540)
static void C_fcall trf_6540(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6540(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6540(t0,t1,t2);}

C_noret_decl(trf_6315)
static void C_fcall trf_6315(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6315(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6315(t0,t1,t2);}

C_noret_decl(trf_6985)
static void C_fcall trf_6985(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6985(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6985(t0,t1,t2);}

C_noret_decl(trf_7799)
static void C_fcall trf_7799(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7799(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7799(t0,t1,t2);}

C_noret_decl(trf_3691)
static void C_fcall trf_3691(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3691(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3691(t0,t1);}

C_noret_decl(trf_6505)
static void C_fcall trf_6505(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6505(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6505(t0,t1,t2);}

C_noret_decl(trf_5472)
static void C_fcall trf_5472(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5472(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5472(t0,t1,t2);}

C_noret_decl(trf_6944)
static void C_fcall trf_6944(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6944(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6944(t0,t1,t2);}

C_noret_decl(trf_7764)
static void C_fcall trf_7764(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7764(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7764(t0,t1,t2);}

C_noret_decl(trf_6396)
static void C_fcall trf_6396(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6396(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6396(t0,t1,t2);}

C_noret_decl(trf_6909)
static void C_fcall trf_6909(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6909(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6909(t0,t1,t2);}

C_noret_decl(trf_7381)
static void C_fcall trf_7381(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7381(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7381(t0,t1,t2);}

C_noret_decl(trf_7572)
static void C_fcall trf_7572(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7572(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7572(t0,t1,t2);}

C_noret_decl(trf_7560)
static void C_fcall trf_7560(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7560(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7560(t0,t1,t2,t3);}

C_noret_decl(trf_5441)
static void C_fcall trf_5441(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5441(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5441(t0,t1,t2);}

C_noret_decl(trf_5255)
static void C_fcall trf_5255(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5255(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5255(t0,t1,t2);}

C_noret_decl(trf_5236)
static void C_fcall trf_5236(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5236(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5236(t0,t1,t2);}

C_noret_decl(trf_6343)
static void C_fcall trf_6343(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6343(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6343(t0,t1,t2);}

C_noret_decl(trf_4145)
static void C_fcall trf_4145(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4145(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4145(t0,t1,t2);}

C_noret_decl(trf_7185)
static void C_fcall trf_7185(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7185(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7185(t0,t1,t2);}

C_noret_decl(trf_4199)
static void C_fcall trf_4199(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4199(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4199(t0,t1,t2);}

C_noret_decl(trf_7354)
static void C_fcall trf_7354(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7354(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7354(t0,t1);}

C_noret_decl(trf_3127)
static void C_fcall trf_3127(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3127(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3127(t0,t1,t2);}

C_noret_decl(trf_4698)
static void C_fcall trf_4698(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4698(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4698(t0,t1,t2);}

C_noret_decl(trf_4675)
static void C_fcall trf_4675(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4675(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4675(t0,t1,t2);}

C_noret_decl(trf_7008)
static void C_fcall trf_7008(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7008(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7008(t0,t1,t2);}

C_noret_decl(trf_4025)
static void C_fcall trf_4025(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4025(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4025(t0,t1,t2);}

C_noret_decl(trf_3933)
static void C_fcall trf_3933(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3933(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3933(t0,t1,t2);}

C_noret_decl(trf_4010)
static void C_fcall trf_4010(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4010(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4010(t0,t1);}

C_noret_decl(trf_3901)
static void C_fcall trf_3901(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3901(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3901(t0,t1);}

C_noret_decl(trf_4241)
static void C_fcall trf_4241(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4241(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4241(t0,t1,t2);}

C_noret_decl(trf_3322)
static void C_fcall trf_3322(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3322(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3322(t0,t1,t2);}

C_noret_decl(trf_3727)
static void C_fcall trf_3727(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3727(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3727(t0,t1,t2);}

C_noret_decl(trf_4606)
static void C_fcall trf_4606(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4606(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4606(t0,t1,t2);}

C_noret_decl(trf_4822)
static void C_fcall trf_4822(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4822(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4822(t0,t1,t2);}

C_noret_decl(trf_4640)
static void C_fcall trf_4640(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4640(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4640(t0,t1,t2);}

C_noret_decl(trf_5171)
static void C_fcall trf_5171(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5171(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5171(t0,t1,t2);}

C_noret_decl(trf_5932)
static void C_fcall trf_5932(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5932(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5932(t0,t1,t2);}

C_noret_decl(trf_6159)
static void C_fcall trf_6159(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6159(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6159(t0,t1,t2,t3);}

C_noret_decl(trf_5300)
static void C_fcall trf_5300(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5300(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5300(t0,t1,t2);}

C_noret_decl(trf_6147)
static void C_fcall trf_6147(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6147(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6147(t0,t1,t2,t3);}

C_noret_decl(trf_5537)
static void C_fcall trf_5537(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5537(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5537(t0,t1,t2);}

C_noret_decl(trf_5510)
static void C_fcall trf_5510(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5510(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5510(t0,t1,t2);}

C_noret_decl(trf_5951)
static void C_fcall trf_5951(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5951(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5951(t0,t1);}

C_noret_decl(trf_5960)
static void C_fcall trf_5960(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5960(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5960(t0,t1);}

C_noret_decl(trf_6692)
static void C_fcall trf_6692(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6692(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6692(t0,t1,t2);}

C_noret_decl(trf_6019)
static void C_fcall trf_6019(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6019(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_6019(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5704)
static void C_fcall trf_5704(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5704(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5704(t0,t1,t2);}

C_noret_decl(trf_5378)
static void C_fcall trf_5378(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5378(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5378(t0,t1,t2);}

C_noret_decl(trf_5584)
static void C_fcall trf_5584(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5584(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5584(t0,t1);}

C_noret_decl(trf_5596)
static void C_fcall trf_5596(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5596(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5596(t0,t1);}

C_noret_decl(tr10)
static void C_fcall tr10(C_proc10 k) C_regparm C_noret;
C_regparm static void C_fcall tr10(C_proc10 k){
C_word t9=C_pick(0);
C_word t8=C_pick(1);
C_word t7=C_pick(2);
C_word t6=C_pick(3);
C_word t5=C_pick(4);
C_word t4=C_pick(5);
C_word t3=C_pick(6);
C_word t2=C_pick(7);
C_word t1=C_pick(8);
C_word t0=C_pick(9);
C_adjust_stack(-10);
(k)(10,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);}

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

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

C_noret_decl(tr6r)
static void C_fcall tr6r(C_proc6 k) C_regparm C_noret;
C_regparm static void C_fcall tr6r(C_proc6 k){
int n;
C_word *a,t6;
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
n=C_rest_count(0);
a=C_alloc(n*3);
t6=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4,t5,t6);}

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

/* k7644 in loop in k7466 in instantiate-functor in k2745 in k2741 */
static void C_ccall f_7646(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7646,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7657,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[5];
t6=C_u_i_cdr(t5);
t7=((C_word*)t0)[6];
t8=C_u_i_cdr(t7);
/* modules.scm:844: loop */
t9=((C_word*)((C_word*)t0)[7])[1];
f_7560(t9,t4,t6,t8);}

/* k6644 in k6632 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6646,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6647,a[2]=((C_word*)t0)[2],a[3]=((C_word)li99),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[3],lf[30]);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6691,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7008,a[2]=t6,a[3]=t2,a[4]=((C_word)li106),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_7008(t8,t4,((C_word*)t0)[3]);}

/* g1689 in k6644 in k6632 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_fcall f_6647(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6647,NULL,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=t3;
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6685,a[2]=t4,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:693: import-env */
t6=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t6))(2,t6,t5);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}

/* k6462 in ren in k6449 in k6446 in k6268 in k6131 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6464,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t1,t3));}

/* k6268 in k6131 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6270,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6273,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* modules.scm:638: ##sys#check-syntax */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[118]+1)))(5,*((C_word*)lf[118]+1),t2,((C_word*)t0)[9],((C_word*)t0)[10],lf[122]);}
else{
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6448,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* modules.scm:663: c */
t3=((C_word*)t0)[12];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[13],((C_word*)t0)[4]);}}

/* k6271 in k6268 in k6131 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6273,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6278,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word)li92),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_6278(t5,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);}

/* k5566 in loop in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_fcall f_5568(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5568,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5572,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* modules.scm:484: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_5537(t6,t3,t5);}

/* loop in k6271 in k6268 in k6131 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_fcall f_6278(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word *a;
loop:
a=C_alloc(15);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6278,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
if(C_truep(C_i_nullp(t2))){
if(C_truep(C_i_nullp(t3))){
t7=t6;
t8=C_i_check_list_2(t7,lf[30]);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6302,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=t4,a[7]=t5,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6315,a[2]=t11,a[3]=((C_word)li89),tmp=(C_word)a,a+=4,tmp));
t13=((C_word*)t11)[1];
f_6315(t13,t9,t7);}
else{
t7=C_i_caar(t3);
t8=C_i_assq(t7,t6);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6343,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=t4,a[7]=t6,a[8]=((C_word)li90),tmp=(C_word)a,a+=9,tmp);
/* modules.scm:641: g1584 */
t10=t9;
f_6343(t10,t1,t8);}
else{
t9=t3;
t10=C_u_i_cdr(t9);
t11=t3;
t12=C_u_i_car(t11);
t13=C_a_i_cons(&a,2,t12,t5);
/* modules.scm:653: loop */
t30=t1;
t31=t2;
t32=t10;
t33=t4;
t34=t13;
t35=t6;
t1=t30;
t2=t31;
t3=t32;
t4=t33;
t5=t34;
t6=t35;
goto loop;}}}
else{
t7=C_i_caar(t2);
t8=C_i_assq(t7,t6);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6396,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[6],a[5]=t3,a[6]=t5,a[7]=t6,a[8]=((C_word)li91),tmp=(C_word)a,a+=9,tmp);
/* modules.scm:639: g1588 */
t10=t9;
f_6396(t10,t1,t8);}
else{
t9=t2;
t10=C_u_i_cdr(t9);
t11=t2;
t12=C_u_i_car(t11);
t13=C_a_i_cons(&a,2,t12,t4);
/* modules.scm:660: loop */
t30=t1;
t31=t10;
t32=t3;
t33=t13;
t34=t5;
t35=t6;
t1=t30;
t2=t31;
t3=t32;
t4=t33;
t5=t34;
t6=t35;
goto loop;}}}

/* map-loop1733 in k6786 in k6760 in k6732 in k6689 in k6644 in k6632 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_fcall f_6844(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_6844,NULL,3,t0,t1,t2);}
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

/* k7849 in module-environment in k7840 in k7837 in k7834 in k7831 in k7828 in k7825 in k2745 in k2741 */
static void C_ccall f_7851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7851,2,t0,t1);}
t2=C_i_check_structure_2(t1,lf[3],lf[27]);
t3=C_i_block_ref(t1,C_fix(13));
t4=C_i_car(t3);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[170],((C_word*)t0)[3],t4,C_SCHEME_TRUE));}

/* k6468 in ren in k6449 in k6446 in k6268 in k6131 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:668: ##sys#string->symbol */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[69]+1)))(3,*((C_word*)lf[69]+1),((C_word*)t0)[2],t1);}

/* k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6617(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6617,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6618,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li108),tmp=(C_word)a,a+=10,tmp);
t4=C_i_cdr(((C_word*)t0)[8]);
t5=C_i_check_list_2(t4,lf[30]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7071,a[2]=((C_word*)t0)[9],tmp=(C_word)a,a+=3,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7073,a[2]=t8,a[3]=t3,a[4]=((C_word)li109),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_7073(t10,t6,t4);}

/* k6472 in ren in k6449 in k6446 in k6268 in k6131 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6474,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6478,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(((C_word*)t0)[3]);
/* modules.scm:669: ##sys#symbol->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[111]+1)))(3,*((C_word*)lf[111]+1),t3,t4);}

/* g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_fcall f_6618(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6618,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6624,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li98),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6630,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word)li107),tmp=(C_word)a,a+=9,tmp);
/* modules.scm:676: ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* k6476 in k6472 in ren in k6449 in k6446 in k6268 in k6131 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:669: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6614,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6617,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* modules.scm:674: ##sys#current-module */
t3=*((C_word*)lf[0]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* ##sys#match-functor-argument in k2745 in k2741 */
static void C_ccall f_7669(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(c!=7) C_bad_argc_2(c,7,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_7669,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7673,a[2]=t5,a[3]=t1,a[4]=t6,a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7824,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:851: ##sys#resolve-module-name */
t9=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,t4,lf[3]);}

/* k7869 in k7825 in k2745 in k2741 */
static void C_ccall f_7871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:911: ##sys#register-primitive-module */
t2=*((C_word*)lf[72]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[174],t1,((C_word*)t0)[3]);}

/* k7655 in k7644 in loop in k7466 in instantiate-functor in k2745 in k2741 */
static void C_ccall f_7657(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7657,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k6494 in k6449 in k6446 in k6268 in k6131 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6496(C_word c,C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6496,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t0)[2];
t8=C_i_check_list_2(((C_word*)t0)[3],lf[16]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6503,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6505,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=t7,a[6]=((C_word)li94),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_6505(t13,t9,((C_word*)t0)[3]);}

/* a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6630(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[19],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_6630,6,t0,t1,t2,t3,t4,t5);}
t6=t3;
t7=t4;
t8=t5;
t9=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6634,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=((C_word*)t0)[3],a[5]=t7,a[6]=t1,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=t8,a[10]=((C_word*)t0)[6],tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[7])){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7039,a[2]=((C_word*)t0)[5],a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t11=C_i_check_structure_2(((C_word*)t0)[5],lf[3],lf[53]);
t12=C_i_block_ref(((C_word*)t0)[5],C_fix(8));
t13=C_a_i_list1(&a,1,t2);
/* modules.scm:682: append */
t14=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t10,t12,t13);}
else{
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7054,a[2]=((C_word*)t0)[5],a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t11=C_i_check_structure_2(((C_word*)t0)[5],lf[3],lf[52]);
t12=C_i_block_ref(((C_word*)t0)[5],C_fix(7));
t13=C_a_i_list1(&a,1,t2);
/* modules.scm:685: append */
t14=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t10,t12,t13);}}
else{
t10=t9;
f_6634(2,t10,C_SCHEME_UNDEFINED);}}

/* k6632 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6634,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6646,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* modules.scm:689: ##sys#mark-imported-symbols */
t3=*((C_word*)lf[48]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k7220 in k7217 in k7149 in alias-global-hook in k2745 in k2741 */
static void C_ccall f_7222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7222,2,t0,t1);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7185,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word)li114),tmp=(C_word)a,a+=5,tmp);
/* modules.scm:739: g1910 */
t4=t3;
f_7185(t4,((C_word*)t0)[4],t2);}
else{
/* modules.scm:763: mrename */
t3=((C_word*)t0)[3];
f_7117(t3,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* ##sys#register-interface in k2745 in k2741 */
static void C_ccall f_7224(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7224,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_putprop(&a,3,t2,lf[141],t3));}

/* g2064 in k7671 in match-functor-argument in k2745 in k2741 */
static void C_fcall f_7680(C_word t0,C_word t1,C_word t2){
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
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7680,NULL,3,t0,t1,t2);}
t3=C_i_symbolp(t2);
t4=(C_truep(t3)?t2:C_i_car(t2));
t5=t4;
t6=C_i_check_structure_2(((C_word*)t0)[2],lf[3],lf[11]);
t7=C_i_block_ref(((C_word*)t0)[2],C_fix(10));
t8=C_i_assq(t5,t7);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7693,a[2]=t1,a[3]=t5,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t8)){
t10=t9;
f_7693(t10,t8);}
else{
t10=C_i_check_structure_2(((C_word*)t0)[2],lf[3],lf[12]);
t11=C_i_block_ref(((C_word*)t0)[2],C_fix(11));
t12=t9;
f_7693(t12,C_i_assq(t5,t11));}}

/* map-loop1759 in k6801 in k6786 in k6760 in k6732 in k6689 in k6644 in k6632 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_fcall f_6809(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_6809,NULL,3,t0,t1,t2);}
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

/* k6805 in k6801 in k6786 in k6760 in k6732 in k6689 in k6644 in k6632 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6807(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:712: append */
t2=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3505 in k3502 in k3496 in k3493 in register-syntax-export in k2745 in k2741 */
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3507,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3513,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=((C_word*)t0)[4];
t5=C_i_check_structure_2(t4,lf[3],lf[39]);
t6=C_i_block_ref(t4,C_fix(3));
t7=C_a_i_cons(&a,2,t3,t6);
t8=((C_word*)t0)[4];
t9=C_i_check_structure_2(t8,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t10=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t2,t8,C_fix(3),t7);}
else{
t3=t2;
f_3513(2,t3,C_SCHEME_UNDEFINED);}}

/* k6801 in k6786 in k6760 in k6732 in k6689 in k6644 in k6632 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6803(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6803,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6807,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6809,a[2]=t6,a[3]=t9,a[4]=t4,a[5]=((C_word)li101),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_6809(t11,t7,((C_word*)t0)[4]);}

/* k3502 in k3496 in k3493 in register-syntax-export in k2745 in k2741 */
static void C_ccall f_3504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3504,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3507,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3547,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:216: ##sys#current-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(2,*((C_word*)lf[26]+1),t3);}

/* k7217 in k7149 in alias-global-hook in k2745 in k2741 */
static void C_ccall f_7219(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7219,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7222,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:756: g1908 */
t3=t1;
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* k7671 in match-functor-argument in k2745 in k2741 */
static void C_ccall f_7673(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7673,2,t0,t1);}
t2=t1;
t3=C_eqp(((C_word*)t0)[2],lf[145]);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7680,a[2]=t2,a[3]=t5,a[4]=((C_word)li129),tmp=(C_word)a,a+=5,tmp);
t7=((C_word*)t0)[2];
t8=C_i_check_list_2(t7,lf[30]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7720,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7799,a[2]=t11,a[3]=t6,a[4]=((C_word)li131),tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_7799(t13,t9,t7);}}

/* loop in resolve-module-name in k2745 in k2741 */
static void C_fcall f_3119(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3119,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3154,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* modules.scm:133: ##sys#module-alias-environment */
t5=*((C_word*)lf[1]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k7840 in k7837 in k7834 in k7831 in k7828 in k7825 in k2745 in k2741 */
static void C_ccall f_7842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7842,2,t0,t1);}
t2=C_mutate2((C_word*)lf[169]+1 /* (set! module-environment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7844,a[2]=((C_word)li133),tmp=(C_word)a,a+=3,tmp));
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* module-environment in k7840 in k7837 in k7834 in k7831 in k7828 in k7825 in k2745 in k2741 */
static void C_ccall f_7844(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_7844r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7844r(t0,t1,t2,t3);}}

static void C_ccall f_7844r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?t2:C_i_car(t3));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7851,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:923: ##sys#find-module/import-library */
t8=*((C_word*)lf[99]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,t2,lf[169]);}

/* ##sys#resolve-module-name in k2745 in k2741 */
static void C_ccall f_3113(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3113,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3119,a[2]=t3,a[3]=t2,a[4]=t5,a[5]=((C_word)li10),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_3119(t7,t1,t2,C_SCHEME_END_OF_LIST);}

/* merr in k7466 in instantiate-functor in k2745 in k2741 */
static void C_fcall f_7478(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_7478,NULL,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=t2;
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_i_check_list_2(((C_word*)t0)[4],lf[16]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7497,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7499,a[2]=t7,a[3]=t11,a[4]=t5,a[5]=((C_word)li124),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_7499(t13,t9,((C_word*)t0)[4]);}

/* k7831 in k7828 in k7825 in k2745 in k2741 */
static void C_ccall f_7833(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7833,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7836,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:916: ##sys#register-primitive-module */
t3=*((C_word*)lf[72]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[175],C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);}

/* k7691 in g2064 in k7671 in match-functor-argument in k2745 in k2741 */
static void C_fcall f_7693(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7693,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7834 in k7831 in k7828 in k7825 in k2745 in k2741 */
static void C_ccall f_7836(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7836,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7839,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:918: ##sys#register-module-alias */
t3=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[173],lf[174]);}

/* k7837 in k7834 in k7831 in k7828 in k7825 in k2745 in k2741 */
static void C_ccall f_7839(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7839,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7842,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:920: register-feature! */
t3=*((C_word*)lf[171]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[172]);}

/* k7828 in k7825 in k2745 in k2741 */
static void C_ccall f_7830(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7830,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7833,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:915: ##sys#register-primitive-module */
t3=*((C_word*)lf[72]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[176],C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);}

/* err in instantiate-functor in k2745 in k2741 */
static void C_fcall f_7461(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7461,NULL,3,t0,t1,t2);}
C_apply(5,0,t1,*((C_word*)lf[104]+1),((C_word*)t0)[2],t2);}

/* k7466 in instantiate-functor in k2745 in k2741 */
static void C_ccall f_7468(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7468,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=C_i_cadr(((C_word*)t0)[2]);
t5=t4;
t6=C_u_i_cdr(((C_word*)t0)[2]);
t7=C_u_i_cdr(t6);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7478,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li125),tmp=(C_word)a,a+=8,tmp);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7539,a[2]=t5,a[3]=t7,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7560,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=t8,a[5]=t11,a[6]=((C_word)li127),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_7560(t13,t9,((C_word*)t0)[4],t3);}

/* k7495 in merr in k7466 in instantiate-functor in k2745 in k2741 */
static void C_ccall f_7497(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7497,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* modules.scm:814: err */
t3=((C_word*)t0)[3];
f_7461(t3,((C_word*)t0)[4],C_a_i_list(&a,3,lf[156],((C_word*)t0)[5],t2));}

/* map-loop2003 in merr in k7466 in instantiate-functor in k2745 in k2741 */
static void C_fcall f_7499(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_7499,NULL,3,t0,t1,t2);}
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

/* loop in validate-exports in k2745 in k2741 */
static void C_fcall f_7282(C_word t0,C_word t1,C_word t2){
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
C_word t24;
C_word *a;
loop:
a=C_alloc(11);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_7282,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
if(C_truep(C_i_pairp(t2))){
t3=C_i_car(t2);
t4=t3;
if(C_truep(C_i_symbolp(t4))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7314,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=t2;
t7=C_u_i_cdr(t6);
/* modules.scm:787: loop */
t23=t5;
t24=t7;
t1=t23;
t2=t24;
goto loop;}
else{
if(C_truep(C_i_listp(t4))){
t5=C_i_car(t4);
t6=C_eqp(lf[146],t5);
if(C_truep(t6)){
t7=C_u_i_cdr(t4);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7340,a[2]=t1,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=t2;
t10=C_u_i_cdr(t9);
/* modules.scm:791: loop */
t23=t8;
t24=t10;
t1=t23;
t2=t24;
goto loop;}
else{
t7=C_u_i_car(t4);
t8=C_eqp(lf[147],t7);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7354,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t10=C_u_i_cdr(t4);
if(C_truep(C_i_pairp(t10))){
t11=C_i_cadr(t4);
t12=t9;
f_7354(t12,C_i_symbolp(t11));}
else{
t11=t9;
f_7354(t11,C_SCHEME_FALSE);}}
else{
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7381,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t10,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li119),tmp=(C_word)a,a+=9,tmp));
t12=((C_word*)t10)[1];
f_7381(t12,t1,t4);}}}
else{
/* modules.scm:789: err */
t5=((C_word*)((C_word*)t0)[4])[1];
f_7235(t5,t1,C_a_i_list(&a,3,lf[150],t4,((C_word*)t0)[5]));}}}
else{
/* modules.scm:784: err */
t3=((C_word*)((C_word*)t0)[4])[1];
f_7235(t3,t1,C_a_i_list(&a,2,lf[151],((C_word*)t0)[5]));}}}

/* k7807 in for-each-loop2063 in k7671 in match-functor-argument in k2745 in k2741 */
static void C_ccall f_7809(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7799(t3,((C_word*)t0)[4],t2);}

/* k3571 in register-undefined in k2745 in k2741 */
static void C_ccall f_3573(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3573,2,t0,t1);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3580,a[2]=((C_word*)t0)[3],a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp);
/* modules.scm:229: g579 */
t4=t3;
f_3580(t4,((C_word*)t0)[4],t2);}
else{
if(C_truep(((C_word*)t0)[3])){
t3=C_a_i_list1(&a,1,((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
t5=C_a_i_cons(&a,2,t4,t1);
/* modules.scm:235: set-module-undefined-list! */
t6=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,((C_word*)t0)[4],((C_word*)t0)[5],t5);}
else{
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,t3,t1);
/* modules.scm:235: set-module-undefined-list! */
t5=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[4],((C_word*)t0)[5],t4);}}}

/* k7822 in match-functor-argument in k2745 in k2741 */
static void C_ccall f_7824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:851: ##sys#find-module */
t2=*((C_word*)lf[21]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_TRUE,lf[3]);}

/* k7825 in k2745 in k2741 */
static void C_ccall f_7827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7827,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7830,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7871,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:913: append */
t4=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[177],((C_word*)t0)[4]);}

/* k3585 in g579 in k3571 in register-undefined in k2745 in k2741 */
static void C_fcall f_3587(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3587,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_set_cdr(((C_word*)t0)[2],t3));}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* g579 in k3571 in register-undefined in k2745 in k2741 */
static void C_fcall f_3580(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3580,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3587,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
t4=C_i_cdr(t2);
t5=C_i_memq(((C_word*)t0)[2],t4);
t6=t3;
f_3587(t6,C_i_not(t5));}
else{
t4=t3;
f_3587(t4,C_SCHEME_FALSE);}}

/* k5518 in for-each-loop1178 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5510(t3,((C_word*)t0)[4],t2);}

/* import-name in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_fcall f_5906(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5906,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5910,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5930,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:595: ##sys#strip-syntax */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(3,*((C_word*)lf[59]+1),t4,t2);}

/* k5356 in map-loop1258 in k5363 in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=C_u_i_car(((C_word*)t0)[4]);
/* modules.scm:523: ##sys#error */
t4=*((C_word*)lf[65]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[3],lf[88],t3);}}

/* k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5324,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[30]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5330,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5510,a[2]=t5,a[3]=((C_word*)t0)[9],a[4]=((C_word)li67),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_5510(t7,t3,t1);}

/* k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5333(C_word c,C_word t0,C_word t1){
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
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5333,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5365,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t5,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
t7=((C_word*)t0)[4];
t8=C_i_check_structure_2(t7,lf[3],lf[10]);
t9=C_i_block_ref(t7,C_fix(2));
t10=C_i_check_structure_2(t7,lf[3],lf[4]);
t11=C_i_block_ref(t7,C_fix(1));
t12=t11;
t13=C_i_check_structure_2(t7,lf[3],lf[39]);
t14=C_i_block_ref(t7,C_fix(3));
t15=t14;
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3806,a[2]=t12,a[3]=((C_word)li62),tmp=(C_word)a,a+=4,tmp);
t17=C_eqp(C_SCHEME_TRUE,t9);
if(C_truep(t17)){
t18=t6;
f_5365(2,t18,C_SCHEME_END_OF_LIST);}
else{
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3829,a[2]=t19,a[3]=t16,a[4]=t15,a[5]=t12,a[6]=((C_word)li66),tmp=(C_word)a,a+=7,tmp));
t21=((C_word*)t19)[1];
f_3829(t21,t6,t9);}}

/* k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5330,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5333,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
/* modules.scm:518: ##sys#error */
t3=*((C_word*)lf[65]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[96],((C_word*)t0)[8]);}
else{
t3=t2;
f_5333(2,t3,C_SCHEME_UNDEFINED);}}

/* ##sys#compiled-module-registration in k2745 in k2741 */
static void C_ccall f_4062(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4062,3,t0,t1,t2);}
t3=t2;
t4=C_i_check_structure_2(t3,lf[3],lf[39]);
t5=C_i_block_ref(t3,C_fix(3));
t6=t5;
t7=t2;
t8=C_i_check_structure_2(t7,lf[3],lf[4]);
t9=C_i_block_ref(t7,C_fix(1));
t10=t2;
t11=C_i_check_structure_2(t10,lf[3],lf[52]);
t12=C_i_block_ref(t10,C_fix(7));
t13=t2;
t14=C_i_check_structure_2(t13,lf[3],lf[12]);
t15=C_i_block_ref(t13,C_fix(11));
t16=t15;
t17=t2;
t18=C_i_check_structure_2(t17,lf[3],lf[53]);
t19=C_i_block_ref(t17,C_fix(8));
t20=t19;
t21=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4085,a[2]=t1,a[3]=t2,a[4]=t6,a[5]=t16,a[6]=t20,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_pairp(t12))){
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4446,a[2]=t21,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:312: ##sys#strip-syntax */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(3,*((C_word*)lf[59]+1),t22,t12);}
else{
t22=t21;
f_4085(t22,C_SCHEME_END_OF_LIST);}}

/* map-loop1501 in k6134 in k6131 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_fcall f_6231(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6231,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6260,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:627: g1507 */
t5=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4050 in loop in k4012 in merge-se in k2745 in k2741 */
static void C_ccall f_4052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4052,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k7052 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_7054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t3=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(7),t1);}

/* iface in validate-exports in k2745 in k2741 */
static void C_fcall f_7241(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7241,NULL,3,t0,t1,t2);}
t3=C_i_getprop(t2,lf[141],C_SCHEME_FALSE);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* modules.scm:775: err */
t4=((C_word*)((C_word*)t0)[2])[1];
f_7235(t4,t1,C_a_i_list(&a,3,lf[143],*((C_word*)lf[144]+1),((C_word*)t0)[3]));}}

/* k6446 in k6268 in k6131 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6448,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6451,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* modules.scm:664: ##sys#check-syntax */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[118]+1)))(5,*((C_word*)lf[118]+1),t2,((C_word*)t0)[10],((C_word*)t0)[2],lf[123]);}
else{
/* modules.scm:672: ##sys#syntax-error-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[104]+1)))(5,*((C_word*)lf[104]+1),((C_word*)t0)[8],((C_word*)t0)[10],lf[124],((C_word*)t0)[2]);}}

/* k7081 in for-each-loop1653 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_7083(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7073(t3,((C_word*)t0)[4],t2);}

/* err in validate-exports in k2745 in k2741 */
static void C_fcall f_7235(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7235,NULL,3,t0,t1,t2);}
C_apply(5,0,t1,*((C_word*)lf[104]+1),((C_word*)t0)[2],t2);}

/* ##sys#validate-exports in k2745 in k2741 */
static void C_ccall f_7232(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[22],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7232,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7235,a[2]=t3,a[3]=((C_word)li117),tmp=(C_word)a,a+=4,tmp));
t9=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7241,a[2]=t5,a[3]=t2,a[4]=((C_word)li118),tmp=(C_word)a,a+=5,tmp));
t10=C_eqp(lf[145],t2);
if(C_truep(t10)){
t11=t2;
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,t11);}
else{
if(C_truep(C_i_symbolp(t2))){
/* modules.scm:777: iface */
t11=((C_word*)t7)[1];
f_7241(t11,t1,t2);}
else{
if(C_truep(C_i_listp(t2))){
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7282,a[2]=t12,a[3]=t7,a[4]=t5,a[5]=t2,a[6]=((C_word)li120),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_7282(t14,t1,t2);}
else{
/* modules.scm:779: err */
t11=((C_word*)t5)[1];
f_7235(t11,t1,C_a_i_list(&a,2,lf[152],t2));}}}}

/* ren in k6449 in k6446 in k6268 in k6131 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6456(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6456,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6464,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6470,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6474,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:669: tostr */
t6=((C_word*)((C_word*)t0)[2])[1];
f_5863(t6,t5,((C_word*)t0)[3]);}

/* k6449 in k6446 in k6268 in k6131 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6451(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6451,2,t0,t1);}
t2=C_i_caddr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6456,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word)li93),tmp=(C_word)a,a+=5,tmp);
t5=C_a_i_list3(&a,3,((C_word*)t0)[4],((C_word*)t0)[5],t3);
t6=t5;
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=t4;
t12=C_i_check_list_2(((C_word*)t0)[6],lf[16]);
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6496,a[2]=t4,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=t6,a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6540,a[2]=t10,a[3]=t15,a[4]=t8,a[5]=t11,a[6]=((C_word)li95),tmp=(C_word)a,a+=7,tmp));
t17=((C_word*)t15)[1];
f_6540(t17,t13,((C_word*)t0)[6]);}

/* k7069 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_7071(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[129]);}

/* for-each-loop1653 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_fcall f_7073(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7073,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7083,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:674: g1654 */
t5=((C_word*)t0)[3];
f_6618(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3025 in register-module-alias in k2745 in k2741 */
static void C_ccall f_3027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3027,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* modules.scm:121: ##sys#module-alias-environment */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t2);}

/* ##sys#with-module-aliases in k2745 in k2741 */
static void C_ccall f_3029(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[20],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3029,4,t0,t1,t2,t3);}
t4=*((C_word*)lf[1]+1);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3033,a[2]=t4,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_i_check_list_2(t2,lf[16]);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3072,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3078,a[2]=t9,a[3]=t13,a[4]=t7,a[5]=((C_word)li7),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_3078(t15,t11,t2);}

/* ##sys#register-syntax-export in k2745 in k2741 */
static void C_ccall f_3485(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3485,5,t0,t1,t2,t3,t4);}
if(C_truep(t3)){
t5=t3;
t6=C_i_check_structure_2(t5,lf[3],lf[10]);
t7=C_i_block_ref(t5,C_fix(2));
t8=C_eqp(C_SCHEME_TRUE,t7);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3495,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t8)){
t10=t9;
f_3495(2,t10,t8);}
else{
/* modules.scm:211: ##sys#find-export */
t10=*((C_word*)lf[42]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t9,t2,t3,C_SCHEME_TRUE);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k4091 in k4083 in compiled-module-registration in k2745 in k2741 */
static void C_fcall f_4093(C_word t0,C_word t1){
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
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4093,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4097,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4101,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=*((C_word*)lf[59]+1);
t10=((C_word*)t0)[3];
t11=C_i_check_structure_2(t10,lf[3],lf[33]);
t12=C_i_block_ref(t10,C_fix(9));
t13=C_i_check_list_2(t12,lf[16]);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4375,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4377,a[2]=t8,a[3]=t16,a[4]=t6,a[5]=t9,a[6]=((C_word)li35),tmp=(C_word)a,a+=7,tmp));
t18=((C_word*)t16)[1];
f_4377(t18,t14,t12);}

/* k4095 in k4091 in k4083 in compiled-module-registration in k2745 in k2741 */
static void C_ccall f_4097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:306: ##sys#append */
t2=*((C_word*)lf[54]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k3031 in with-module-aliases in k2745 in k2741 */
static void C_ccall f_3033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3033,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3034,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=((C_word)li5),tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3048,a[2]=((C_word*)t0)[3],a[3]=((C_word)li6),tmp=(C_word)a,a+=4,tmp);
/* modules.scm:124: ##sys#dynamic-wind */
t8=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,((C_word*)t0)[4],t6,t7,t6);}

/* swap387 in k3031 in with-module-aliases in k2745 in k2741 */
static void C_ccall f_3034(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3034,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3038,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:124: module-alias-environment389390 */
t3=((C_word*)t0)[4];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* k3036 in swap387 in k3031 in with-module-aliases in k2745 in k2741 */
static void C_ccall f_3038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3038,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3041,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:124: module-alias-environment389390 */
t4=((C_word*)t0)[5];
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t3,((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);}

/* k4083 in compiled-module-registration in k2745 in k2741 */
static void C_fcall f_4085(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4085,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4089,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4093,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[6]))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4424,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:313: ##sys#strip-syntax */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(3,*((C_word*)lf[59]+1),t5,((C_word*)t0)[6]);}
else{
t5=t4;
f_4093(t5,C_SCHEME_END_OF_LIST);}}

/* k4087 in k4083 in compiled-module-registration in k2745 in k2741 */
static void C_ccall f_4089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:306: ##sys#append */
t2=*((C_word*)lf[54]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k3230 in k3221 in k3218 in k3215 in k3259 in k3255 in switch-module in k2745 in k2741 */
static void C_ccall f_3232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_u_i_cdr(((C_word*)t0)[2]);
/* modules.scm:158: ##sys#macro-environment */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(3,*((C_word*)lf[25]+1),((C_word*)t0)[3],t2);}

/* ##sys#register-functor in k2745 in k2741 */
static void C_ccall f_7437(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_7437,6,t0,t1,t2,t3,t4,t5);}
t6=C_a_i_cons(&a,2,t4,t5);
t7=C_a_i_cons(&a,2,t3,t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_putprop(&a,3,t2,lf[154],t7));}

/* g1066 in k4947 in k4887 in register-primitive-module in k2745 in k2741 */
static void C_fcall f_4951(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4951,NULL,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
t3=C_i_assq(t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* modules.scm:411: ##sys#error */
t4=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,lf[73],t2,((C_word*)t0)[3]);}}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* g666 in k4002 in loop2 in loop in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_fcall f_3893(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_save_and_reclaim((void*)trf_3893,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3901,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(((C_word*)t0)[2]);
t5=t4;
t6=C_i_cdr(t2);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3918,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t6)){
t8=t3;
f_3901(t8,C_a_i_cons(&a,2,t5,t6));}
else{
t8=((C_word*)t0)[2];
t9=C_u_i_car(t8);
/* modules.scm:282: ##sys#module-rename */
t10=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,t9,((C_word*)t0)[4]);}}

/* g478 in k3215 in k3259 in k3255 in switch-module in k2745 in k2741 */
static void C_fcall f_3245(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3245,NULL,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t4=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,t2,C_fix(13),((C_word*)t0)[2]);}

/* k3470 in k3407 in k3404 in register-export in k2745 in k2741 */
static void C_ccall f_3472(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:194: ##sys#toplevel-definition-hook */
t2=*((C_word*)lf[31]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_FALSE);}

/* k7037 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_7039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t3=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(8),t1);}

/* k7607 in k7596 in k7592 in loop2 in loop in k7466 in instantiate-functor in k2745 in k2741 */
static void C_ccall f_7609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7609,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k3255 in switch-module in k2745 in k2741 */
static void C_ccall f_3257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3257,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3261,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:149: ##sys#macro-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(2,*((C_word*)lf[25]+1),t3);}

/* ##sys#instantiate-functor in k2745 in k2741 */
static void C_ccall f_7453(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[18],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7453,5,t0,t1,t2,t3,t4);}
t5=t3;
t6=C_i_getprop(t5,lf[154],C_SCHEME_FALSE);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7461,a[2]=t2,a[3]=((C_word)li123),tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7468,a[2]=t7,a[3]=t2,a[4]=t4,a[5]=t3,a[6]=t8,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t7)){
t10=t9;
f_7468(2,t10,C_SCHEME_UNDEFINED);}
else{
/* modules.scm:809: err */
t10=t8;
f_7461(t10,t9,C_a_i_list(&a,2,lf[160],t3));}}

/* k4779 in map-loop910 in k4545 in k4508 in register-compiled-module in k2745 in k2741 */
static void C_ccall f_4781(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4781,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4752(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4752(t6,((C_word*)t0)[5],t5);}}

/* map-loop882 in k4508 in register-compiled-module in k2745 in k2741 */
static void C_fcall f_4787(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4787,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4816,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=C_i_cdr(t4);
if(C_truep(C_i_pairp(t6))){
t7=C_u_i_car(t4);
t8=C_i_cadr(t4);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4531,a[2]=t5,a[3]=t7,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
t11=C_i_caddr(t4);
t12=C_u_i_car(t4);
/* modules.scm:363: ##sys#ensure-transformer */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[64]+1)))(4,*((C_word*)lf[64]+1),t10,t11,t12);}
else{
t7=t5;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t4);}}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3496 in k3493 in register-syntax-export in k2745 in k2741 */
static void C_ccall f_3498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3498,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_i_check_structure_2(t2,lf[3],lf[4]);
t4=C_i_block_ref(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3504,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_assq(((C_word*)t0)[3],t1))){
/* modules.scm:215: ##sys#warn */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[35]+1)))(4,*((C_word*)lf[35]+1),t5,lf[45],((C_word*)t0)[3]);}
else{
t6=t5;
f_3504(2,t6,C_SCHEME_UNDEFINED);}}

/* k3493 in register-syntax-export in k2745 in k2741 */
static void C_ccall f_3495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3495,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3498,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* modules.scm:212: module-undefined-list */
t4=*((C_word*)lf[5]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k7102 in module-rename in k2745 in k2741 */
static void C_ccall f_7104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:733: ##sys#string->symbol */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[69]+1)))(3,*((C_word*)lf[69]+1),((C_word*)t0)[2],t1);}

/* k3459 in k3455 in k3416 in k3410 in k3407 in k3404 in register-export in k2745 in k2741 */
static void C_ccall f_3461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:199: check-for-redef */
t2=*((C_word*)lf[34]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3277 in add-to-export-list in k2745 in k2741 */
static void C_ccall f_3279(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3279,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3288,a[2]=t4,a[3]=((C_word)li15),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3280,a[2]=t2,a[3]=t5,a[4]=((C_word)li16),tmp=(C_word)a,a+=5,tmp);
t7=((C_word*)t0)[2];
t8=C_i_check_list_2(t7,lf[30]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3302,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3322,a[2]=t6,a[3]=t11,a[4]=((C_word)li17),tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_3322(t13,t9,t7);}

/* k3466 in k3410 in k3407 in k3404 in register-export in k2745 in k2741 */
static void C_ccall f_3468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:198: set-module-undefined-list! */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k4127 in k4237 in k4324 in k4099 in k4091 in k4083 in compiled-module-registration in k2745 in k2741 */
static void C_fcall f_4129(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4129,NULL,2,t0,t1);}
t2=C_a_i_list(&a,6,lf[60],((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);
t3=C_a_i_list(&a,1,t2);
/* modules.scm:306: ##sys#append */
t4=*((C_word*)lf[54]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[6],((C_word*)t0)[7],t3);}

/* g495 in k3277 in add-to-export-list in k2745 in k2741 */
static C_word C_fcall f_3280(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
t2=C_i_assq(t1,((C_word*)t0)[2]);
if(C_truep(t2)){
return(f_3288(C_a_i(&a,3),((C_word*)t0)[3],t2));}
else{
t3=C_SCHEME_UNDEFINED;
return(t3);}}

/* loop2 in loop in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_fcall f_3856(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3856,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_i_cdr(((C_word*)t0)[2]);
/* modules.scm:273: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3829(t4,t1,t3);}
else{
t3=C_i_car(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4004,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* modules.scm:274: ##sys#macro-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(2,*((C_word*)lf[25]+1),t5);}}

/* g511 in k3277 in add-to-export-list in k2745 in k2741 */
static C_word C_fcall f_3288(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
t2=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
return(t3);}

/* k3407 in k3404 in register-export in k2745 in k2741 */
static void C_ccall f_3409(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3409,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3412,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3472,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[4];
t6=C_i_check_structure_2(t5,lf[3],lf[4]);
t7=C_i_block_ref(t5,C_fix(1));
/* modules.scm:195: ##sys#module-rename */
t8=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t4,((C_word*)t0)[2],t7);}

/* k3404 in register-export in k2745 in k2741 */
static void C_ccall f_3406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3406,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3409,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:193: module-undefined-list */
t4=*((C_word*)lf[5]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* k4508 in register-compiled-module in k2745 in k2741 */
static void C_ccall f_4510(C_word c,C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4510,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t0)[2];
t8=C_i_check_list_2(t7,lf[16]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4547,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4787,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=((C_word)li44),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_4787(t13,t9,t7);}

/* k3221 in k3218 in k3215 in k3259 in k3255 in switch-module in k2745 in k2741 */
static void C_fcall f_3223(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3223,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3226,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3232,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_car(t2);
/* modules.scm:157: ##sys#current-environment */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(3,*((C_word*)lf[26]+1),t4,t5);}
else{
/* modules.scm:159: ##sys#current-module */
t4=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k3218 in k3215 in k3259 in k3255 in switch-module in k2745 in k2741 */
static void C_ccall f_3220(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3220,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3223,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=((C_word*)t0)[3];
t4=C_i_check_structure_2(t3,lf[3],lf[27]);
t5=t2;
f_3223(t5,C_i_block_ref(t3,C_fix(13)));}
else{
t3=t2;
f_3223(t3,((C_word*)((C_word*)t0)[4])[1]);}}

/* k3877 in k4002 in loop2 in loop in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_3879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* modules.scm:276: loop2 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3856(t4,((C_word*)t0)[4],t3);}

/* k3224 in k3221 in k3218 in k3215 in k3259 in k3255 in switch-module in k2745 in k2741 */
static void C_ccall f_3226(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:159: ##sys#current-module */
t2=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3455 in k3416 in k3410 in k3407 in k3404 in register-export in k2745 in k2741 */
static void C_ccall f_3457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3457,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3461,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:199: ##sys#macro-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(2,*((C_word*)lf[25]+1),t3);}

/* k4099 in k4091 in k4083 in compiled-module-registration in k2745 in k2741 */
static void C_ccall f_4101(C_word c,C_word t0,C_word t1){
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
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4101,2,t0,t1);}
t2=t1;
t3=((C_word*)t0)[2];
t4=C_i_check_structure_2(t3,lf[3],lf[4]);
t5=C_i_block_ref(t3,C_fix(1));
t6=C_a_i_list(&a,2,lf[55],t5);
t7=t6;
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=((C_word*)t0)[2];
t13=C_i_check_structure_2(t12,lf[3],lf[56]);
t14=C_i_block_ref(t12,C_fix(12));
t15=C_i_check_list_2(t14,lf[16]);
t16=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4326,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t7,a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4328,a[2]=t11,a[3]=t18,a[4]=t9,a[5]=((C_word)li34),tmp=(C_word)a,a+=6,tmp));
t20=((C_word*)t18)[1];
f_4328(t20,t16,t14);}

/* k3039 in k3036 in swap387 in k3031 in with-module-aliases in k2745 in k2741 */
static void C_ccall f_3041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_TRUE);
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k4498 in map-loop854 in register-compiled-module in k2745 in k2741 */
static void C_ccall f_4500(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4500,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list3(&a,3,((C_word*)t0)[3],C_SCHEME_FALSE,t1));}

/* a3047 in k3031 in with-module-aliases in k2745 in k2741 */
static void C_ccall f_3048(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3048,2,t0,t1);}
/* modules.scm:129: thunk */
t2=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,t1);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_modules_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_modules_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("modules_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(3959)){
C_save(t1);
C_rereclaim2(3959*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,180);
lf[0]=C_h_intern(&lf[0],18,"\003syscurrent-module");
lf[1]=C_h_intern(&lf[1],28,"\003sysmodule-alias-environment");
lf[3]=C_h_intern(&lf[3],6,"module");
lf[4]=C_h_intern(&lf[4],11,"module-name");
lf[5]=C_h_intern(&lf[5],21,"module-undefined-list");
lf[6]=C_h_intern(&lf[6],26,"set-module-undefined-list!");
lf[7]=C_h_intern(&lf[7],14,"\003sysblock-set!");
lf[8]=C_h_intern(&lf[8],15,"\003sysmodule-name");
lf[9]=C_h_intern(&lf[9],18,"\003sysmodule-exports");
lf[10]=C_h_intern(&lf[10],18,"module-export-list");
lf[11]=C_h_intern(&lf[11],15,"module-vexports");
lf[12]=C_h_intern(&lf[12],15,"module-sexports");
lf[13]=C_h_intern(&lf[13],25,"\003sysregister-module-alias");
lf[14]=C_h_intern(&lf[14],23,"\003syswith-module-aliases");
lf[15]=C_h_intern(&lf[15],16,"\003sysdynamic-wind");
lf[16]=C_h_intern(&lf[16],3,"map");
lf[17]=C_h_intern(&lf[17],6,"append");
lf[18]=C_h_intern(&lf[18],23,"\003sysresolve-module-name");
lf[19]=C_h_intern(&lf[19],5,"error");
lf[20]=C_decode_literal(C_heaptop,"\376B\000\000\035module alias refers to itself");
lf[21]=C_h_intern(&lf[21],15,"\003sysfind-module");
lf[22]=C_h_intern(&lf[22],16,"\003sysmodule-table");
lf[23]=C_decode_literal(C_heaptop,"\376B\000\000\020module not found");
lf[24]=C_h_intern(&lf[24],17,"\003sysswitch-module");
lf[25]=C_h_intern(&lf[25],21,"\003sysmacro-environment");
lf[26]=C_h_intern(&lf[26],23,"\003syscurrent-environment");
lf[27]=C_h_intern(&lf[27],25,"module-saved-environments");
lf[28]=C_h_intern(&lf[28],22,"\003sysadd-to-export-list");
lf[29]=C_h_intern(&lf[29],17,"module-exist-list");
lf[30]=C_h_intern(&lf[30],8,"for-each");
lf[31]=C_h_intern(&lf[31],28,"\003systoplevel-definition-hook");
lf[32]=C_h_intern(&lf[32],28,"\003sysregister-meta-expression");
lf[33]=C_h_intern(&lf[33],23,"module-meta-expressions");
lf[34]=C_h_intern(&lf[34],15,"check-for-redef");
lf[35]=C_h_intern(&lf[35],8,"\003syswarn");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000\047redefinition of imported syntax binding");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000&redefinition of imported value binding");
lf[38]=C_h_intern(&lf[38],19,"\003sysregister-export");
lf[39]=C_h_intern(&lf[39],19,"module-defined-list");
lf[40]=C_h_intern(&lf[40],8,"\003sysdelq");
lf[41]=C_h_intern(&lf[41],17,"\003sysmodule-rename");
lf[42]=C_h_intern(&lf[42],15,"\003sysfind-export");
lf[43]=C_h_intern(&lf[43],26,"\003sysregister-syntax-export");
lf[44]=C_h_intern(&lf[44],26,"module-defined-syntax-list");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000!use of syntax precedes definition");
lf[46]=C_h_intern(&lf[46],22,"\003sysregister-undefined");
lf[47]=C_h_intern(&lf[47],19,"\003sysregister-module");
lf[48]=C_h_intern(&lf[48],25,"\003sysmark-imported-symbols");
lf[49]=C_h_intern(&lf[49],12,"\004corealiased");
lf[51]=C_h_intern(&lf[51],32,"\003syscompiled-module-registration");
lf[52]=C_h_intern(&lf[52],19,"module-import-forms");
lf[53]=C_h_intern(&lf[53],24,"module-meta-import-forms");
lf[54]=C_h_intern(&lf[54],10,"\003sysappend");
lf[55]=C_h_intern(&lf[55],5,"quote");
lf[56]=C_h_intern(&lf[56],15,"module-iexports");
lf[57]=C_h_intern(&lf[57],4,"list");
lf[58]=C_h_intern(&lf[58],4,"cons");
lf[59]=C_h_intern(&lf[59],16,"\003sysstrip-syntax");
lf[60]=C_h_intern(&lf[60],28,"\003sysregister-compiled-module");
lf[61]=C_h_intern(&lf[61],16,"\003sysfast-reverse");
lf[62]=C_h_intern(&lf[62],6,"import");
lf[63]=C_h_intern(&lf[63],4,"eval");
lf[64]=C_h_intern(&lf[64],22,"\003sysensure-transformer");
lf[65]=C_h_intern(&lf[65],9,"\003syserror");
lf[66]=C_decode_literal(C_heaptop,"\376B\000\0000cannot find implementation of re-exported syntax");
lf[67]=C_h_intern(&lf[67],19,"\003sysprimitive-alias");
lf[68]=C_h_intern(&lf[68],14,"\004coreprimitive");
lf[69]=C_h_intern(&lf[69],18,"\003sysstring->symbol");
lf[70]=C_h_intern(&lf[70],17,"\003sysstring-append");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\002#%");
lf[72]=C_h_intern(&lf[72],29,"\003sysregister-primitive-module");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\0002unknown syntax referenced while registering module");
lf[74]=C_h_intern(&lf[74],19,"\003sysfinalize-module");
lf[75]=C_h_intern(&lf[75],7,"\004coredb");
lf[76]=C_h_intern(&lf[76],17,"get-output-string");
lf[77]=C_h_intern(&lf[77],7,"display");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\002)\047");
lf[79]=C_h_intern(&lf[79],5,"cadar");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\042\012Warning:    suggesting: `(import ");
lf[81]=C_h_intern(&lf[81],19,"\003syswrite-char/port");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\000\025\012Warning:    (import ");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\000\037\012Warning:    suggesting one of:");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\015\012Warning:    ");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\004 in:");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\052reference to possibly unbound identifier `");
lf[87]=C_h_intern(&lf[87],18,"open-output-string");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000$(internal) indirect export not found");
lf[89]=C_h_intern(&lf[89],13,"string-append");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\014 in module `");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\001\047");
lf[92]=C_h_intern(&lf[92],14,"symbol->string");
lf[93]=C_decode_literal(C_heaptop,"\376B\000\000!indirect export of syntax binding");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000\033indirect reexport of syntax");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000\042indirect export of unknown binding");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000\021module unresolved");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\037exported identifier of module `");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000\026\047 has not been defined");
lf[99]=C_h_intern(&lf[99],30,"\003sysfind-module/import-library");
lf[100]=C_h_intern(&lf[100],28,"\003syscurrent-meta-environment");
lf[101]=C_h_intern(&lf[101],19,"\003sysnotices-enabled");
lf[102]=C_h_intern(&lf[102],8,"\003sysload");
lf[103]=C_h_intern(&lf[103],26,"\003sysmeta-macro-environment");
lf[104]=C_h_intern(&lf[104],21,"\003syssyntax-error-hook");
lf[105]=C_decode_literal(C_heaptop,"\376B\000\000#cannot import from undefined module");
lf[106]=C_h_intern(&lf[106],18,"\003sysfind-extension");
lf[107]=C_decode_literal(C_heaptop,"\376B\000\000\007.import");
lf[108]=C_h_intern(&lf[108],17,"\003sysexpand-import");
lf[109]=C_h_intern(&lf[109],16,"\004coremacro-alias");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000\001:");
lf[111]=C_h_intern(&lf[111],18,"\003syssymbol->string");
lf[112]=C_h_intern(&lf[112],14,"number->string");
lf[113]=C_decode_literal(C_heaptop,"\376B\000\000\016invalid prefix");
lf[114]=C_h_intern(&lf[114],8,"keyword\077");
lf[115]=C_decode_literal(C_heaptop,"\376B\000\000\034invalid import specification");
lf[116]=C_decode_literal(C_heaptop,"\376B\000\000\005srfi-");
lf[117]=C_h_intern(&lf[117],18,"\003sysnumber->string");
lf[118]=C_h_intern(&lf[118],16,"\003syscheck-syntax");
lf[119]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\006symbol\376\377\001\000\000\000\000");
lf[120]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\006symbol\376\377\001\000\000\000\000");
lf[121]=C_decode_literal(C_heaptop,"\376B\000\000\037renamed identifier not imported");
lf[122]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\006symbol\376\377\016\376\377\001\000\000\000\000");
lf[123]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[124]=C_decode_literal(C_heaptop,"\376B\000\000\034invalid import specification");
lf[125]=C_h_intern(&lf[125],10,"\003sysnotice");
lf[126]=C_decode_literal(C_heaptop,"\376B\000\000(re-importing already imported identifier");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000$re-importing already imported syntax");
lf[128]=C_decode_literal(C_heaptop,"\376B\000\000%`reexport\047 only valid inside a module");
lf[129]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[130]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[131]=C_h_intern(&lf[131],4,"srfi");
lf[132]=C_h_intern(&lf[132],6,"prefix");
lf[133]=C_h_intern(&lf[133],6,"except");
lf[134]=C_h_intern(&lf[134],6,"rename");
lf[135]=C_h_intern(&lf[135],4,"only");
lf[136]=C_decode_literal(C_heaptop,"\376B\000\000\001#");
lf[137]=C_h_intern(&lf[137],21,"\003sysalias-global-hook");
lf[138]=C_h_intern(&lf[138],27,"\003sysactive-eval-environment");
lf[139]=C_h_intern(&lf[139],21,"\003sysqualified-symbol\077");
lf[140]=C_h_intern(&lf[140],22,"\003sysregister-interface");
lf[141]=C_h_intern(&lf[141],14,"\004coreinterface");
lf[142]=C_h_intern(&lf[142],20,"\003sysvalidate-exports");
lf[143]=C_decode_literal(C_heaptop,"\376B\000\000\021unknown interface");
lf[144]=C_h_intern(&lf[144],1,"x");
lf[145]=C_h_intern(&lf[145],1,"\052");
lf[146]=C_h_intern(&lf[146],7,"\000syntax");
lf[147]=C_h_intern(&lf[147],10,"\000interface");
lf[148]=C_decode_literal(C_heaptop,"\376B\000\000\037invalid interface specification");
lf[149]=C_decode_literal(C_heaptop,"\376B\000\000\016invalid export");
lf[150]=C_decode_literal(C_heaptop,"\376B\000\000\016invalid export");
lf[151]=C_decode_literal(C_heaptop,"\376B\000\000\017invalid exports");
lf[152]=C_decode_literal(C_heaptop,"\376B\000\000\017invalid exports");
lf[153]=C_h_intern(&lf[153],20,"\003sysregister-functor");
lf[154]=C_h_intern(&lf[154],12,"\004corefunctor");
lf[155]=C_h_intern(&lf[155],23,"\003sysinstantiate-functor");
lf[156]=C_decode_literal(C_heaptop,"\376B\000\000/argument list mismatch in functor instantiation");
lf[157]=C_h_intern(&lf[157],11,"\004coremodule");
lf[158]=C_h_intern(&lf[158],21,"\004corelet-module-alias");
lf[159]=C_h_intern(&lf[159],26,"\003sysmatch-functor-argument");
lf[160]=C_decode_literal(C_heaptop,"\376B\000\000!instantation of undefined functor");
lf[161]=C_decode_literal(C_heaptop,"\376B\000\000\021argument module `");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\000$\047 does not match required signature\012");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000\022in instantiation `");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\016\047 of functor `");
lf[165]=C_decode_literal(C_heaptop,"\376B\000\0007\047, because the following required exports are missing:\012");
lf[166]=C_decode_literal(C_heaptop,"\376B\000\000\003\012  ");
lf[167]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\003not\376\003\000\000\002\376\001\000\000\010boolean\077\376\003\000\000\002\376\001\000\000\003eq\077\376\003\000\000\002\376\001\000\000\004eqv\077\376\003\000\000\002\376\001\000\000\006equal\077\376\003\000\000\002\376"
"\001\000\000\005pair\077\376\003\000\000\002\376\001\000\000\004cons\376\003\000\000\002\376\001\000\000\003car\376\003\000\000\002\376\001\000\000\003cdr\376\003\000\000\002\376\001\000\000\004caar\376\003\000\000\002\376\001\000\000\004cadr\376\003\000"
"\000\002\376\001\000\000\004cdar\376\003\000\000\002\376\001\000\000\004cddr\376\003\000\000\002\376\001\000\000\005caaar\376\003\000\000\002\376\001\000\000\005caadr\376\003\000\000\002\376\001\000\000\005cadar\376\003\000\000\002\376\001\000\000\005"
"caddr\376\003\000\000\002\376\001\000\000\005cdaar\376\003\000\000\002\376\001\000\000\005cdadr\376\003\000\000\002\376\001\000\000\005cddar\376\003\000\000\002\376\001\000\000\005cdddr\376\003\000\000\002\376\001\000\000\006caaaa"
"r\376\003\000\000\002\376\001\000\000\006caaadr\376\003\000\000\002\376\001\000\000\006caadar\376\003\000\000\002\376\001\000\000\006caaddr\376\003\000\000\002\376\001\000\000\006cadaar\376\003\000\000\002\376\001\000\000\006cadad"
"r\376\003\000\000\002\376\001\000\000\006caddar\376\003\000\000\002\376\001\000\000\006cadddr\376\003\000\000\002\376\001\000\000\006cdaaar\376\003\000\000\002\376\001\000\000\006cdaadr\376\003\000\000\002\376\001\000\000\006cdada"
"r\376\003\000\000\002\376\001\000\000\006cdaddr\376\003\000\000\002\376\001\000\000\006cddaar\376\003\000\000\002\376\001\000\000\006cddadr\376\003\000\000\002\376\001\000\000\006cdddar\376\003\000\000\002\376\001\000\000\006cdddd"
"r\376\003\000\000\002\376\001\000\000\010set-car!\376\003\000\000\002\376\001\000\000\010set-cdr!\376\003\000\000\002\376\001\000\000\005null\077\376\003\000\000\002\376\001\000\000\005list\077\376\003\000\000\002\376\001\000\000\004lis"
"t\376\003\000\000\002\376\001\000\000\006length\376\003\000\000\002\376\001\000\000\011list-tail\376\003\000\000\002\376\001\000\000\010list-ref\376\003\000\000\002\376\001\000\000\006append\376\003\000\000\002\376\001\000\000\007"
"reverse\376\003\000\000\002\376\001\000\000\004memq\376\003\000\000\002\376\001\000\000\004memv\376\003\000\000\002\376\001\000\000\006member\376\003\000\000\002\376\001\000\000\004assq\376\003\000\000\002\376\001\000\000\004assv\376"
"\003\000\000\002\376\001\000\000\005assoc\376\003\000\000\002\376\001\000\000\007symbol\077\376\003\000\000\002\376\001\000\000\016symbol->string\376\003\000\000\002\376\001\000\000\016string->symbol\376"
"\003\000\000\002\376\001\000\000\007number\077\376\003\000\000\002\376\001\000\000\010integer\077\376\003\000\000\002\376\001\000\000\006exact\077\376\003\000\000\002\376\001\000\000\005real\077\376\003\000\000\002\376\001\000\000\010compl"
"ex\077\376\003\000\000\002\376\001\000\000\010inexact\077\376\003\000\000\002\376\001\000\000\011rational\077\376\003\000\000\002\376\001\000\000\005zero\077\376\003\000\000\002\376\001\000\000\004odd\077\376\003\000\000\002\376\001\000\000\005e"
"ven\077\376\003\000\000\002\376\001\000\000\011positive\077\376\003\000\000\002\376\001\000\000\011negative\077\376\003\000\000\002\376\001\000\000\003max\376\003\000\000\002\376\001\000\000\003min\376\003\000\000\002\376\001\000\000\001+\376"
"\003\000\000\002\376\001\000\000\001-\376\003\000\000\002\376\001\000\000\001\052\376\003\000\000\002\376\001\000\000\001/\376\003\000\000\002\376\001\000\000\001=\376\003\000\000\002\376\001\000\000\001>\376\003\000\000\002\376\001\000\000\001<\376\003\000\000\002\376\001\000\000\002>=\376\003\000"
"\000\002\376\001\000\000\002<=\376\003\000\000\002\376\001\000\000\010quotient\376\003\000\000\002\376\001\000\000\011remainder\376\003\000\000\002\376\001\000\000\006modulo\376\003\000\000\002\376\001\000\000\003gcd\376\003\000\000\002"
"\376\001\000\000\003lcm\376\003\000\000\002\376\001\000\000\003abs\376\003\000\000\002\376\001\000\000\005floor\376\003\000\000\002\376\001\000\000\007ceiling\376\003\000\000\002\376\001\000\000\010truncate\376\003\000\000\002\376\001\000\000"
"\005round\376\003\000\000\002\376\001\000\000\016exact->inexact\376\003\000\000\002\376\001\000\000\016inexact->exact\376\003\000\000\002\376\001\000\000\003exp\376\003\000\000\002\376\001\000\000\003log"
"\376\003\000\000\002\376\001\000\000\004expt\376\003\000\000\002\376\001\000\000\004sqrt\376\003\000\000\002\376\001\000\000\003sin\376\003\000\000\002\376\001\000\000\003cos\376\003\000\000\002\376\001\000\000\003tan\376\003\000\000\002\376\001\000\000\004asi"
"n\376\003\000\000\002\376\001\000\000\004acos\376\003\000\000\002\376\001\000\000\004atan\376\003\000\000\002\376\001\000\000\016number->string\376\003\000\000\002\376\001\000\000\016string->number\376\003\000"
"\000\002\376\001\000\000\005char\077\376\003\000\000\002\376\001\000\000\006char=\077\376\003\000\000\002\376\001\000\000\006char>\077\376\003\000\000\002\376\001\000\000\006char<\077\376\003\000\000\002\376\001\000\000\007char>=\077\376\003\000"
"\000\002\376\001\000\000\007char<=\077\376\003\000\000\002\376\001\000\000\011char-ci=\077\376\003\000\000\002\376\001\000\000\011char-ci<\077\376\003\000\000\002\376\001\000\000\011char-ci>\077\376\003\000\000\002\376\001\000\000"
"\012char-ci>=\077\376\003\000\000\002\376\001\000\000\012char-ci<=\077\376\003\000\000\002\376\001\000\000\020char-alphabetic\077\376\003\000\000\002\376\001\000\000\020char-whitespa"
"ce\077\376\003\000\000\002\376\001\000\000\015char-numeric\077\376\003\000\000\002\376\001\000\000\020char-upper-case\077\376\003\000\000\002\376\001\000\000\020char-lower-case\077\376\003"
"\000\000\002\376\001\000\000\013char-upcase\376\003\000\000\002\376\001\000\000\015char-downcase\376\003\000\000\002\376\001\000\000\015char->integer\376\003\000\000\002\376\001\000\000\015integ"
"er->char\376\003\000\000\002\376\001\000\000\007string\077\376\003\000\000\002\376\001\000\000\010string=\077\376\003\000\000\002\376\001\000\000\010string>\077\376\003\000\000\002\376\001\000\000\010string<\077\376"
"\003\000\000\002\376\001\000\000\011string>=\077\376\003\000\000\002\376\001\000\000\011string<=\077\376\003\000\000\002\376\001\000\000\013string-ci=\077\376\003\000\000\002\376\001\000\000\013string-ci<\077\376"
"\003\000\000\002\376\001\000\000\013string-ci>\077\376\003\000\000\002\376\001\000\000\014string-ci>=\077\376\003\000\000\002\376\001\000\000\014string-ci<=\077\376\003\000\000\002\376\001\000\000\013make-s"
"tring\376\003\000\000\002\376\001\000\000\015string-length\376\003\000\000\002\376\001\000\000\012string-ref\376\003\000\000\002\376\001\000\000\013string-set!\376\003\000\000\002\376\001\000\000\015s"
"tring-append\376\003\000\000\002\376\001\000\000\013string-copy\376\003\000\000\002\376\001\000\000\014string->list\376\003\000\000\002\376\001\000\000\014list->string\376\003\000"
"\000\002\376\001\000\000\011substring\376\003\000\000\002\376\001\000\000\014string-fill!\376\003\000\000\002\376\001\000\000\007vector\077\376\003\000\000\002\376\001\000\000\013make-vector\376\003\000\000"
"\002\376\001\000\000\012vector-ref\376\003\000\000\002\376\001\000\000\013vector-set!\376\003\000\000\002\376\001\000\000\006string\376\003\000\000\002\376\001\000\000\006vector\376\003\000\000\002\376\001\000\000\015v"
"ector-length\376\003\000\000\002\376\001\000\000\014vector->list\376\003\000\000\002\376\001\000\000\014list->vector\376\003\000\000\002\376\001\000\000\014vector-fill!\376\003"
"\000\000\002\376\001\000\000\012procedure\077\376\003\000\000\002\376\001\000\000\003map\376\003\000\000\002\376\001\000\000\010for-each\376\003\000\000\002\376\001\000\000\005apply\376\003\000\000\002\376\001\000\000\005force\376"
"\003\000\000\002\376\001\000\000\036call-with-current-continuation\376\003\000\000\002\376\001\000\000\013input-port\077\376\003\000\000\002\376\001\000\000\014output-por"
"t\077\376\003\000\000\002\376\001\000\000\022current-input-port\376\003\000\000\002\376\001\000\000\023current-output-port\376\003\000\000\002\376\001\000\000\024call-with-i"
"nput-file\376\003\000\000\002\376\001\000\000\025call-with-output-file\376\003\000\000\002\376\001\000\000\017open-input-file\376\003\000\000\002\376\001\000\000\020open-"
"output-file\376\003\000\000\002\376\001\000\000\020close-input-port\376\003\000\000\002\376\001\000\000\021close-output-port\376\003\000\000\002\376\001\000\000\004load\376\003"
"\000\000\002\376\001\000\000\004read\376\003\000\000\002\376\001\000\000\013eof-object\077\376\003\000\000\002\376\001\000\000\011read-char\376\003\000\000\002\376\001\000\000\011peek-char\376\003\000\000\002\376\001\000\000"
"\005write\376\003\000\000\002\376\001\000\000\007display\376\003\000\000\002\376\001\000\000\012write-char\376\003\000\000\002\376\001\000\000\007newline\376\003\000\000\002\376\001\000\000\024with-input"
"-from-file\376\003\000\000\002\376\001\000\000\023with-output-to-file\376\003\000\000\002\376\001\000\000\004eval\376\003\000\000\002\376\001\000\000\013char-ready\077\376\003\000\000\002\376"
"\001\000\000\011imag-part\376\003\000\000\002\376\001\000\000\011real-part\376\003\000\000\002\376\001\000\000\011magnitude\376\003\000\000\002\376\001\000\000\011numerator\376\003\000\000\002\376\001\000\000\013"
"denominator\376\003\000\000\002\376\001\000\000\005angle\376\003\000\000\002\376\001\000\000\031scheme-report-environment\376\003\000\000\002\376\001\000\000\020null-envi"
"ronment\376\003\000\000\002\376\001\000\000\027interaction-environment\376\003\000\000\002\376\001\000\000\004else\376\377\016");
lf[168]=C_h_intern(&lf[168],29,"\003sysdefault-macro-environment");
lf[169]=C_h_intern(&lf[169],18,"module-environment");
lf[170]=C_h_intern(&lf[170],11,"environment");
lf[171]=C_h_intern(&lf[171],17,"register-feature!");
lf[172]=C_h_intern(&lf[172],19,"module-environments");
lf[173]=C_h_intern(&lf[173],4,"r5rs");
lf[174]=C_h_intern(&lf[174],6,"scheme");
lf[175]=C_h_intern(&lf[175],9,"r5rs-null");
lf[176]=C_h_intern(&lf[176],9,"r4rs-null");
lf[177]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\014dynamic-wind\376\003\000\000\002\376\001\000\000\006values\376\003\000\000\002\376\001\000\000\020call-with-values\376\377\016");
lf[178]=C_h_intern(&lf[178],4,"r4rs");
lf[179]=C_h_intern(&lf[179],14,"make-parameter");
C_register_lf2(lf,180,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2743,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:72: make-parameter */
t3=*((C_word*)lf[179]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_SCHEME_FALSE);}

/* k3419 in k3416 in k3410 in k3407 in k3404 in register-export in k2745 in k2741 */
static void C_ccall f_3421(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3421,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3424,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[4];
t4=C_i_check_structure_2(t3,lf[3],lf[29]);
t5=C_i_block_ref(t3,C_fix(4));
t6=C_a_i_cons(&a,2,((C_word*)t0)[3],t5);
t7=((C_word*)t0)[4];
t8=C_i_check_structure_2(t7,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t9=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t2,t7,C_fix(4),t6);}

/* warn in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_fcall f_3806(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3806,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3814,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3818,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:264: symbol->string */
t6=*((C_word*)lf[92]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[2]);}

/* for-each-loop939 in k4577 in k4574 in k4568 in k4545 in k4508 in register-compiled-module in k2745 in k2741 */
static void C_fcall f_4721(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4721,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4731,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:376: g940 */
t5=((C_word*)t0)[3];
f_4580(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3422 in k3419 in k3416 in k3410 in k3407 in k3404 in register-export in k2745 in k2741 */
static void C_ccall f_3424(C_word c,C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3424,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_FALSE);
t3=((C_word*)t0)[4];
t4=C_i_check_structure_2(t3,lf[3],lf[39]);
t5=C_i_block_ref(t3,C_fix(3));
t6=C_a_i_cons(&a,2,t2,t5);
t7=((C_word*)t0)[5];
t8=((C_word*)t0)[4];
t9=C_i_check_structure_2(t8,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t10=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t7,t8,C_fix(3),t6);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k3812 in warn in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_3814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:263: ##sys#warn */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[35]+1)))(4,*((C_word*)lf[35]+1),((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k3816 in warn in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_3818(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:264: string-append */
t2=*((C_word*)lf[89]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[90],t1,lf[91]);}

/* k4558 in map-loop910 in k4545 in k4508 in register-compiled-module in k2745 in k2741 */
static void C_ccall f_4560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4560,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list3(&a,3,((C_word*)t0)[3],C_SCHEME_FALSE,t1));}

/* k4941 in map-loop1033 in k4887 in register-primitive-module in k2745 in k2741 */
static void C_ccall f_4943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4943,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k4947 in k4887 in register-primitive-module in k2745 in k2741 */
static void C_ccall f_4949(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4949,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4951,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li48),tmp=(C_word)a,a+=5,tmp);
t8=C_i_check_list_2(((C_word*)t0)[4],lf[16]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4973,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4975,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=t7,a[6]=((C_word)li49),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_4975(t13,t9,((C_word*)t0)[4]);}

/* loop in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_fcall f_3829(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(11);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3829,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_i_car(t2);
if(C_truep(C_i_symbolp(t3))){
t4=t2;
t5=C_u_i_cdr(t4);
/* modules.scm:270: loop */
t11=t1;
t12=t5;
t1=t11;
t2=t12;
goto loop;}
else{
t4=C_i_cdar(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3856,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li65),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_3856(t8,t1,t4);}}}

/* map-loop1033 in k4887 in register-primitive-module in k2745 in k2741 */
static void C_fcall f_5010(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_5010,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5039,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
if(C_truep(C_i_symbolp(t6))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4943,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:405: ##sys#primitive-alias */
t8=*((C_word*)lf[67]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t6);}
else{
t7=t5;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3074 in k3070 in with-module-aliases in k2745 in k2741 */
static void C_ccall f_3076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:126: append */
t2=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k3070 in with-module-aliases in k2745 in k2741 */
static void C_ccall f_3072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3072,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3076,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:128: ##sys#module-alias-environment */
t4=*((C_word*)lf[1]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* map-loop397 in with-module-aliases in k2745 in k2741 */
static void C_fcall f_3078(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(6);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3078,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_i_cadr(t3);
t6=C_a_i_cons(&a,2,t4,t5);
t7=C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t8=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t7);
t9=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t7);
t10=C_slot(t2,C_fix(1));
t16=t1;
t17=t10;
t1=t16;
t2=t17;
goto loop;}
else{
t8=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t7);
t9=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t7);
t10=C_slot(t2,C_fix(1));
t16=t1;
t17=t10;
t1=t16;
t2=t17;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4706 in for-each-loop960 in k4603 in k4577 in k4574 in k4568 in k4545 in k4508 in register-compiled-module in k2745 in k2741 */
static void C_ccall f_4708(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4698(t3,((C_word*)t0)[4],t2);}

/* ##sys#add-to-export-list in k2745 in k2741 */
static void C_ccall f_3263(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3263,4,t0,t1,t2,t3);}
t4=t2;
t5=C_i_check_structure_2(t4,lf[3],lf[10]);
t6=C_i_block_ref(t4,C_fix(2));
t7=C_eqp(t6,C_SCHEME_TRUE);
if(C_truep(t7)){
t8=t2;
t9=C_i_check_structure_2(t8,lf[3],lf[29]);
t10=C_i_block_ref(t8,C_fix(4));
t11=t10;
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3279,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t11,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:165: ##sys#macro-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(2,*((C_word*)lf[25]+1),t12);}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3350,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:175: append */
t9=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,t6,t3);}}

/* k3410 in k3407 in k3404 in register-export in k2745 in k2741 */
static void C_ccall f_3412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3412,2,t0,t1);}
t2=C_i_assq(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3418,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3468,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:198: ##sys#delq */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),t4,t2,((C_word*)t0)[3]);}
else{
t4=t3;
f_3418(2,t4,C_SCHEME_FALSE);}}

/* k3259 in k3255 in switch-module in k2745 in k2741 */
static void C_ccall f_3261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3261,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3217,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:150: ##sys#current-module */
t5=*((C_word*)lf[0]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k3416 in k3410 in k3407 in k3404 in register-export in k2745 in k2741 */
static void C_ccall f_3418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3418,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3421,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3457,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:199: ##sys#current-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(2,*((C_word*)lf[26]+1),t3);}

/* k4909 in k4971 in k4947 in k4887 in register-primitive-module in k2745 in k2741 */
static void C_ccall f_4911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4911,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4915,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:422: ##sys#macro-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(2,*((C_word*)lf[25]+1),t3);}

/* k4913 in k4909 in k4971 in k4947 in k4887 in register-primitive-module in k2745 in k2741 */
static void C_ccall f_4915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4915,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_i_check_structure_2(((C_word*)t0)[3],lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t4=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[4],((C_word*)t0)[3],C_fix(13),t2);}

/* k4917 in k4971 in k4947 in k4887 in register-primitive-module in k2745 in k2741 */
static void C_ccall f_4919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4919,2,t0,t1);}
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[3],lf[11]);
t3=C_i_block_ref(((C_word*)t0)[2],C_fix(10));
t4=C_i_check_structure_2(((C_word*)t0)[2],lf[3],lf[12]);
t5=C_i_block_ref(((C_word*)t0)[2],C_fix(11));
/* modules.scm:419: merge-se */
f_4010(((C_word*)t0)[3],C_a_i_list(&a,3,t1,t3,t5));}

/* k5002 in map-loop1060 in k4947 in k4887 in register-primitive-module in k2745 in k2741 */
static void C_ccall f_5004(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5004,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4975(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4975(t6,((C_word*)t0)[5],t5);}}

/* map-loop910 in k4545 in k4508 in register-compiled-module in k2745 in k2741 */
static void C_fcall f_4752(C_word t0,C_word t1,C_word t2){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4752,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4781,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=C_i_car(t4);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4560,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=C_u_i_cdr(t4);
t10=C_u_i_car(t4);
/* modules.scm:368: ##sys#ensure-transformer */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[64]+1)))(4,*((C_word*)lf[64]+1),t8,t9,t10);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4748 in k4744 in k4568 in k4545 in k4508 in register-compiled-module in k2745 in k2741 */
static void C_ccall f_4750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4750,2,t0,t1);}
/* modules.scm:371: merge-se */
f_4010(((C_word*)t0)[2],C_a_i_list(&a,6,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]));}

/* k4744 in k4568 in k4545 in k4508 in register-compiled-module in k2745 in k2741 */
static void C_ccall f_4746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4746,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4750,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:373: ##sys#current-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(2,*((C_word*)lf[26]+1),t3);}

/* k4590 in g940 in k4577 in k4574 in k4568 in k4545 in k4508 in register-compiled-module in k2745 in k2741 */
static void C_ccall f_4592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_set_car(((C_word*)t0)[3],t1));}

/* map-loop1060 in k4947 in k4887 in register-primitive-module in k2745 in k2741 */
static void C_fcall f_4975(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4975,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5004,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:408: g1066 */
t5=((C_word*)t0)[5];
f_4951(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4971 in k4947 in k4887 in register-primitive-module in k2745 in k2741 */
static void C_ccall f_4973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4973,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_a_i_record(&a,14,lf[3],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4895,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4911,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4919,a[2]=t4,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:419: ##sys#current-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(2,*((C_word*)lf[26]+1),t7);}

/* k4729 in for-each-loop939 in k4577 in k4574 in k4568 in k4545 in k4508 in register-compiled-module in k2745 in k2741 */
static void C_ccall f_4731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4721(t3,((C_word*)t0)[4],t2);}

/* k5037 in map-loop1033 in k4887 in register-primitive-module in k2745 in k2741 */
static void C_ccall f_5039(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5039,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5010(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5010(t6,((C_word*)t0)[5],t5);}}

/* g940 in k4577 in k4574 in k4568 in k4545 in k4508 in register-compiled-module in k2745 in k2741 */
static void C_fcall f_4580(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4580,NULL,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4592,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_i_cadr(t2);
if(C_truep(t6)){
/* modules.scm:378: merge-se */
f_4010(t5,C_a_i_list(&a,2,t6,((C_word*)t0)[2]));}
else{
/* modules.scm:378: merge-se */
f_4010(t5,C_a_i_list(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]));}}

/* k4568 in k4545 in k4508 in register-compiled-module in k2745 in k2741 */
static void C_ccall f_4570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4570,2,t0,t1);}
t2=t1;
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[3];
t5=C_a_i_record(&a,14,lf[3],t3,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,t4,((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_FALSE);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4576,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=t6,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4746,a[2]=t7,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* modules.scm:372: ##sys#macro-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(2,*((C_word*)lf[25]+1),t8);}

/* k4574 in k4568 in k4545 in k4508 in register-compiled-module in k2745 in k2741 */
static void C_ccall f_4576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4576,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4579,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* modules.scm:375: ##sys#mark-imported-symbols */
t4=*((C_word*)lf[48]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* k4577 in k4574 in k4568 in k4545 in k4508 in register-compiled-module in k2745 in k2741 */
static void C_ccall f_4579(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4579,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4580,a[2]=((C_word*)t0)[2],a[3]=((C_word)li37),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[3],lf[30]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4605,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4721,a[2]=t6,a[3]=t2,a[4]=((C_word)li42),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_4721(t8,t4,((C_word*)t0)[3]);}

/* map-loop721 in k4091 in k4083 in compiled-module-registration in k2745 in k2741 */
static void C_fcall f_4377(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4377,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4406,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:314: g727 */
t5=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4373 in k4091 in k4083 in compiled-module-registration in k2745 in k2741 */
static void C_ccall f_4375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:314: ##sys#fast-reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[61]+1)))(3,*((C_word*)lf[61]+1),((C_word*)t0)[2],t1);}

/* k7119 in mrename in alias-global-hook in k2745 in k2741 */
static void C_ccall f_7121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7121,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7125,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li112),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:739: g1882 */
t3=t2;
f_7125(t3,((C_word*)t0)[5],t1);}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* g1882 in k7119 in mrename in alias-global-hook in k2745 in k2741 */
static void C_fcall f_7125(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7125,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7132,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=t2;
t5=C_i_check_structure_2(t4,lf[3],lf[4]);
t6=C_i_block_ref(t4,C_fix(1));
/* modules.scm:746: ##sys#module-rename */
t7=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t1,((C_word*)t0)[2],t6);}
else{
/* modules.scm:745: ##sys#register-undefined */
t4=*((C_word*)lf[46]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[2],t2,((C_word*)t0)[4]);}}

/* k5090 in loop in k5060 in find-export in k2745 in k2741 */
static void C_fcall f_5092(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_cdr(t2);
/* modules.scm:434: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_5064(t4,((C_word*)t0)[2],t3);}}

/* ##sys#alias-global-hook in k2745 in k2741 */
static void C_ccall f_7114(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7114,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7117,a[2]=t3,a[3]=t4,a[4]=((C_word)li113),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7151,a[2]=t2,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:748: ##sys#qualified-symbol? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[139]+1)))(3,*((C_word*)lf[139]+1),t6,t2);}

/* mrename in alias-global-hook in k2745 in k2741 */
static void C_fcall f_7117(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7117,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7121,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:741: ##sys#current-module */
t4=*((C_word*)lf[0]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* g1493 in loop in k6012 in k6006 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_fcall f_6066(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6066,NULL,3,t0,t1,t2);}
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
/* modules.scm:623: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_6019(t5,t1,t3,((C_word*)t0)[5],t4);}

/* k5831 in k5745 in k5742 in find-module/import-library in k2745 in k2741 */
static void C_ccall f_5833(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),((C_word*)t0)[2],t1,lf[107]);}

/* ##sys#expand-import in k2745 in k2741 */
static void C_ccall f_5836(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9){
C_word tmp;
C_word t10;
C_word t11;
C_word ab[11],*a=ab;
if(c!=10) C_bad_argc_2(c,10,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr10,(void*)f_5836,10,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);}
t10=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5840,a[2]=t9,a[3]=t4,a[4]=t5,a[5]=t6,a[6]=t8,a[7]=t7,a[8]=t2,a[9]=t1,a[10]=t3,tmp=(C_word)a,a+=11,tmp);
/* modules.scm:581: r */
t11=t3;
((C_proc3)C_fast_retrieve_proc(t11))(3,t11,t10,lf[135]);}

/* k5204 in k5196 in k5193 in k5190 in k5187 in k5183 in g1179 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5206(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5206,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5213,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:515: get-output-string */
t3=*((C_word*)lf[76]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k5689 in k5680 in loop in k5665 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5691,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* map-loop1452 in k6006 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_fcall f_6094(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6094,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6123,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:614: g1458 */
t5=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_5843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5843,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5846,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* modules.scm:583: r */
t4=((C_word*)t0)[11];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[133]);}

/* k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_5849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5849,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5852,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* modules.scm:585: r */
t4=((C_word*)t0)[13];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[131]);}

/* k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_5846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5846,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5849,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* modules.scm:584: r */
t4=((C_word*)t0)[12];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[132]);}

/* k5211 in k5204 in k5196 in k5193 in k5190 in k5187 in k5183 in g1179 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:515: ##sys#warn */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[35]+1)))(3,*((C_word*)lf[35]+1),((C_word*)t0)[2],t1);}

/* k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_5840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5840,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5843,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* modules.scm:582: r */
t4=((C_word*)t0)[10];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[134]);}

/* a5812 in a5801 in k5760 in k5757 in k5751 in k5745 in k5742 in find-module/import-library in k2745 in k2741 */
static void C_ccall f_5813(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5813,2,t0,t1);}
/* modules.scm:572: ##sys#load */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[102]+1)))(5,*((C_word*)lf[102]+1),t1,((C_word*)t0)[2],C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* a5818 in a5801 in k5760 in k5757 in k5751 in k5745 in k5742 in find-module/import-library in k2745 in k2741 */
static void C_ccall f_5819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5819,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[101]+1));
t3=C_mutate2((C_word*)lf[101]+1 /* (set! ##sys#notices-enabled ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k5238 in g1226 in k5233 in k5196 in k5193 in k5190 in k5187 in k5183 in g1179 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5240(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5240,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5243,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* modules.scm:512: display */
t4=*((C_word*)lf[77]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[3]);}

/* map-loop747 in k4099 in k4091 in k4083 in compiled-module-registration in k2745 in k2741 */
static void C_fcall f_4328(C_word t0,C_word t1,C_word t2){
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
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4328,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4357,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_cdr(t4);
if(C_truep(C_i_symbolp(t5))){
t6=C_u_i_car(t4);
t7=C_u_i_cdr(t4);
t8=C_a_i_cons(&a,2,t6,t7);
t9=t3;
f_4357(t9,C_a_i_list(&a,2,lf[55],t8));}
else{
t6=C_u_i_car(t4);
t7=C_a_i_list(&a,2,lf[55],t6);
t8=C_a_i_list(&a,2,lf[55],C_SCHEME_END_OF_LIST);
t9=C_u_i_cdr(t4);
t10=t3;
f_4357(t10,C_a_i_list(&a,4,lf[57],t7,t8,t9));}}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4324 in k4099 in k4091 in k4083 in compiled-module-registration in k2745 in k2741 */
static void C_ccall f_4326(C_word c,C_word t0,C_word t1){
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
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4326,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[57],t1);
t3=t2;
t4=((C_word*)t0)[2];
t5=C_i_check_structure_2(t4,lf[3],lf[11]);
t6=C_i_block_ref(t4,C_fix(10));
t7=C_a_i_list(&a,2,lf[55],t6);
t8=t7;
t9=C_SCHEME_END_OF_LIST;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4199,a[2]=((C_word*)t0)[3],a[3]=((C_word)li31),tmp=(C_word)a,a+=4,tmp);
t14=C_i_check_list_2(((C_word*)t0)[4],lf[16]);
t15=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4239,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=t8,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4241,a[2]=t12,a[3]=t17,a[4]=t10,a[5]=t13,a[6]=((C_word)li33),tmp=(C_word)a,a+=7,tmp));
t19=((C_word*)t17)[1];
f_4241(t19,t15,((C_word*)t0)[4]);}

/* k5827 in k5745 in k5742 in find-module/import-library in k2745 in k2741 */
static void C_ccall f_5829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:562: ##sys#find-extension */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[106]+1)))(4,*((C_word*)lf[106]+1),((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* k5680 in loop in k5665 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5682(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5682,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5691,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
/* modules.scm:454: loop */
t7=((C_word*)((C_word*)t0)[4])[1];
f_5669(t7,t4,t6);}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* modules.scm:455: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_5669(t4,((C_word*)t0)[3],t3);}}

/* k4355 in map-loop747 in k4099 in k4091 in k4083 in compiled-module-registration in k2745 in k2741 */
static void C_fcall f_4357(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_4357,NULL,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4328(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4328(t6,((C_word*)t0)[5],t5);}}

/* g1489 in loop in k6012 in k6006 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_fcall f_6044(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6044,NULL,3,t0,t1,t2);}
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
/* modules.scm:620: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_6019(t5,t1,t3,t4,((C_word*)t0)[5]);}

/* k5410 in k5407 in k5404 in k5398 in k5375 in k5372 in k5369 in k5363 in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5412,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5423,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5431,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:550: ##sys#current-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(2,*((C_word*)lf[26]+1),t3);}

/* k5874 in tostr in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_5876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5876,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5883,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:590: ##sys#symbol->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[111]+1)))(3,*((C_word*)lf[111]+1),t2,((C_word*)t0)[3]);}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
/* modules.scm:591: ##sys#symbol->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[111]+1)))(3,*((C_word*)lf[111]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
if(C_truep(C_i_numberp(((C_word*)t0)[3]))){
/* modules.scm:592: number->string */
t2=*((C_word*)lf[112]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
/* modules.scm:593: ##sys#syntax-error-hook */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[104]+1)))(4,*((C_word*)lf[104]+1),((C_word*)t0)[2],((C_word*)t0)[4],lf[113]);}}}}

/* k4545 in k4508 in register-compiled-module in k2745 in k2741 */
static void C_ccall f_4547(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4547,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(((C_word*)t0)[2],lf[16]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4570,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4752,a[2]=t6,a[3]=t10,a[4]=t4,a[5]=((C_word)li43),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_4752(t12,t8,((C_word*)t0)[2]);}

/* k4529 in map-loop882 in k4508 in register-compiled-module in k2745 in k2741 */
static void C_ccall f_4531(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4531,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list3(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* k5425 in k5421 in k5410 in k5407 in k5404 in k5398 in k5375 in k5372 in k5369 in k5363 in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5427,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=C_i_check_structure_2(t4,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t6=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t3,t4,C_fix(13),t2);}

/* k5421 in k5410 in k5407 in k5404 in k5398 in k5375 in k5372 in k5369 in k5363 in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5423,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5427,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:551: ##sys#macro-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(2,*((C_word*)lf[25]+1),t3);}

/* k5881 in k5874 in tostr in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_5883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:590: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),((C_word*)t0)[2],t1,lf[110]);}

/* k6735 in k6732 in k6689 in k6644 in k6632 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_fcall f_6737(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6737,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6740,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6755,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6759,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:727: import-env */
t5=((C_word*)t0)[5];
((C_proc2)C_fast_retrieve_proc(t5))(2,t5,t4);}

/* resolve in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_5854(C_word c,C_word t0,C_word t1,C_word t2){
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
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5854,3,t0,t1,t2);}
t3=t2;
t4=C_u_i_assq(t3,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
t5=C_i_cdr(t4);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=t2;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}
else{
t5=C_i_getprop(t3,lf[109],C_SCHEME_FALSE);
if(C_truep(t5)){
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=t2;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}
else{
t6=t2;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}}

/* k6732 in k6689 in k6644 in k6632 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6734(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6734,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6737,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[7])){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6762,a[2]=((C_word*)t0)[8],a[3]=t2,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[8])){
t4=t3;
f_6762(2,t4,C_SCHEME_UNDEFINED);}
else{
/* modules.scm:706: ##sys#syntax-error-hook */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[104]+1)))(4,*((C_word*)lf[104]+1),t3,((C_word*)t0)[10],lf[128]);}}
else{
t3=t2;
f_6737(t3,C_SCHEME_UNDEFINED);}}

/* ##sys#find-export in k2745 in k2741 */
static void C_ccall f_5051(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5051,5,t0,t1,t2,t3,t4);}
t5=t3;
t6=C_i_check_structure_2(t5,lf[3],lf[10]);
t7=C_i_block_ref(t5,C_fix(2));
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5062,a[2]=t2,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t9=C_eqp(C_SCHEME_TRUE,t7);
if(C_truep(t9)){
t10=t3;
t11=C_i_check_structure_2(t10,lf[3],lf[29]);
t12=t8;
f_5062(t12,C_i_block_ref(t10,C_fix(4)));}
else{
t10=t8;
f_5062(t10,t7);}}

/* ##sys#register-module in k2745 in k2741 */
static void C_ccall f_3632(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+21)){
C_save_and_reclaim((void*)tr4r,(void*)f_3632r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3632r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3632r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(21);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=t2;
t14=C_a_i_record(&a,14,lf[3],t13,t3,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,t6,t10,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);
t15=C_a_i_cons(&a,2,t2,t14);
t16=C_a_i_cons(&a,2,t15,*((C_word*)lf[22]+1));
t17=C_mutate2((C_word*)lf[22]+1 /* (set! ##sys#module-table ...) */,t16);
t18=t1;
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,t14);}

/* k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_5852(C_word c,C_word t0,C_word t1){
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
C_word ab[42],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5852,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5854,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp));
t12=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5863,a[2]=((C_word*)t0)[2],a[3]=((C_word)li79),tmp=(C_word)a,a+=4,tmp));
t13=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5906,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp));
t14=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5932,a[2]=t8,a[3]=((C_word*)t0)[2],a[4]=t10,a[5]=t4,a[6]=t6,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=t2,a[13]=((C_word)li97),tmp=(C_word)a,a+=14,tmp));
t15=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6614,a[2]=t10,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[13],tmp=(C_word)a,a+=10,tmp);
/* modules.scm:673: ##sys#check-syntax */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[118]+1)))(5,*((C_word*)lf[118]+1),t15,((C_word*)t0)[2],((C_word*)t0)[12],lf[130]);}

/* k5407 in k5404 in k5398 in k5375 in k5372 in k5369 in k5363 in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5409,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5412,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5435,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_i_check_structure_2(t4,lf[3],lf[56]);
t6=C_i_block_ref(t4,C_fix(12));
/* modules.scm:547: merge-se */
f_4010(t3,C_a_i_list(&a,2,t6,((C_word*)t0)[6]));}

/* k5404 in k5398 in k5375 in k5372 in k5369 in k5363 in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5406,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5409,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[3];
t4=C_i_check_structure_2(t3,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t5=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,t3,C_fix(11),((C_word*)t0)[5]);}

/* k5398 in k5375 in k5372 in k5369 in k5363 in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5400(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5400,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5406,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[3];
t4=C_i_check_structure_2(t3,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t5=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,t3,C_fix(10),((C_word*)t0)[4]);}

/* k6745 in k6738 in k6735 in k6732 in k6689 in k6644 in k6632 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:728: macro-env */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],t1);}

/* tostr in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_fcall f_5863(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5863,NULL,3,t0,t1,t2);}
if(C_truep(C_i_stringp(t2))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5876,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:590: keyword? */
t4=*((C_word*)lf[114]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}}

/* loop in k5665 in k5162 in finalize-module in k2745 in k2741 */
static void C_fcall f_5669(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5669,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5682,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_caar(t2);
/* modules.scm:453: ##sys#find-export */
t5=*((C_word*)lf[42]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,((C_word*)t0)[3],C_SCHEME_FALSE);}}

/* k5665 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5667(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5667,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5669,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li69),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_5669(t5,((C_word*)t0)[3],t1);}

/* k6738 in k6735 in k6732 in k6689 in k6644 in k6632 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6740,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6747,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6751,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:728: macro-env */
t4=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t3);}

/* k6993 in for-each-loop1709 in k6689 in k6644 in k6632 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6985(t3,((C_word*)t0)[4],t2);}

/* loop in k5060 in find-export in k2745 in k2741 */
static void C_fcall f_5064(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5064,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=C_i_car(t2);
t4=C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=t2;
t6=C_u_i_car(t5);
if(C_truep(C_i_pairp(t6))){
t7=C_i_caar(t2);
t8=C_eqp(((C_word*)t0)[2],t7);
if(C_truep(t8)){
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5092,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
t10=t2;
t11=C_u_i_car(t10);
t12=C_u_i_cdr(t11);
t13=t9;
f_5092(t13,C_i_memq(((C_word*)t0)[2],t12));}
else{
t10=t9;
f_5092(t10,C_SCHEME_FALSE);}}}
else{
t7=t2;
t8=C_u_i_cdr(t7);
/* modules.scm:435: loop */
t16=t1;
t17=t8;
t1=t16;
t2=t17;
goto loop;}}}}

/* k5060 in find-export in k2745 in k2741 */
static void C_fcall f_5062(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5062,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5064,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word)li52),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_5064(t5,((C_word*)t0)[4],t1);}

/* k5290 in g1195 in k5285 in k5193 in k5190 in k5187 in k5183 in g1179 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:500: display */
t2=*((C_word*)lf[77]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k5632 in k5582 in loop in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5634,2,t0,t1);}
t2=C_i_assq(((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5596,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t3)){
t5=C_i_cdr(t3);
t6=t4;
f_5596(t6,C_i_symbolp(t5));}
else{
t5=t4;
f_5596(t5,C_SCHEME_FALSE);}}

/* k5285 in k5193 in k5190 in k5187 in k5183 in g1179 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5287,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5288,a[2]=((C_word*)t0)[2],a[3]=((C_word)li56),tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5300,a[2]=t4,a[3]=t2,a[4]=((C_word)li57),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_5300(t6,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* g1195 in k5285 in k5193 in k5190 in k5187 in k5183 in g1179 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_fcall f_5288(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5288,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5292,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:499: display */
t4=*((C_word*)lf[77]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[84],((C_word*)t0)[2]);}

/* k5464 in k5369 in k5363 in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5466(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5466,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5470,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:527: ##sys#current-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(2,*((C_word*)lf[26]+1),t3);}

/* k6726 in g1710 in k6689 in k6644 in k6632 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6728(C_word c,C_word t0,C_word t1){
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
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=C_i_cdr(t2);
t6=C_eqp(t4,t5);
if(C_truep(t6)){
t7=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_FALSE);}
else{
t7=((C_word*)t0)[3];
t8=C_u_i_car(t7);
/* modules.scm:702: ##sys#notice */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[125]+1)))(4,*((C_word*)lf[125]+1),((C_word*)t0)[4],lf[127],t8);}}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* set-module-undefined-list! in k2745 in k2741 */
static void C_ccall f_2851(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2851,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t5=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(6),t3);}

/* k5618 in k5594 in k5632 in k5582 in loop in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5620(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:477: string-append */
t2=*((C_word*)lf[89]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[97],t1,lf[98]);}

/* map-loop1598 in k6449 in k6446 in k6268 in k6131 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_fcall f_6540(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6540,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6569,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:671: g1604 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* for-each-loop1563 in loop in k6271 in k6268 in k6131 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_fcall f_6315(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6315,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6325,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:644: ##sys#warn */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[35]+1)))(4,*((C_word*)lf[35]+1),t3,lf[121],t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6769 in k6766 in k6760 in k6732 in k6689 in k6644 in k6632 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_6737(t2,C_SCHEME_UNDEFINED);}

/* for-each-loop1709 in k6689 in k6644 in k6632 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_fcall f_6985(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6985,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6995,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:698: g1710 */
t5=((C_word*)t0)[3];
f_6692(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* module-undefined-list in k2745 in k2741 */
static void C_ccall f_2842(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2842,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[3],lf[5]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_block_ref(t2,C_fix(6)));}

/* k5610 in k5594 in k5632 in k5582 in loop in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5612,2,t0,t1);}
t2=((C_word*)t0)[2];
f_5568(t2,C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_FALSE));}

/* k6776 in k6766 in k6760 in k6732 in k6689 in k6644 in k6632 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t3=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(12),t1);}

/* k5263 in for-each-loop1225 in k5233 in k5196 in k5193 in k5190 in k5187 in k5183 in g1179 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5265(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5255(t3,((C_word*)t0)[4],t2);}

/* k5614 in k5594 in k5632 in k5582 in loop in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:476: ##sys#warn */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[35]+1)))(4,*((C_word*)lf[35]+1),((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k7791 in map-loop2085 in k7743 in k7739 in k7735 in k7718 in k7671 in match-functor-argument in k2745 in k2741 */
static void C_ccall f_7793(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7793,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7764(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7764(t6,((C_word*)t0)[5],t5);}}

/* for-each-loop2063 in k7671 in match-functor-argument in k2745 in k2741 */
static void C_fcall f_7799(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7799,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7809,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:853: g2064 */
t5=((C_word*)t0)[3];
f_7680(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6323 in for-each-loop1563 in loop in k6271 in k6268 in k6131 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6315(t3,((C_word*)t0)[4],t2);}

/* k6786 in k6760 in k6732 in k6689 in k6644 in k6632 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6788(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6788,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6795,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_structure_2(((C_word*)t0)[2],lf[3],lf[29]);
t4=C_i_block_ref(((C_word*)t0)[2],C_fix(4));
t5=t4;
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6803,a[2]=t2,a[3]=t5,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6844,a[2]=t9,a[3]=t12,a[4]=t7,a[5]=((C_word)li102),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_6844(t14,t10,((C_word*)t0)[5]);}

/* k7312 in loop in validate-exports in k2745 in k2741 */
static void C_ccall f_7314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7314,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k6753 in k6735 in k6732 in k6689 in k6644 in k6632 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:727: import-env */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],t1);}

/* k6749 in k6738 in k6735 in k6732 in k6689 in k6644 in k6632 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6751(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:728: append */
t2=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k6757 in k6735 in k6732 in k6689 in k6644 in k6632 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:727: append */
t2=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k3689 in for-each-loop608 in mark-imported-symbols in k2745 in k2741 */
static void C_fcall f_3691(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3691,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_putprop(&a,3,t2,lf[49],C_SCHEME_TRUE));}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k6300 in loop in k6271 in k6268 in k6131 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6302,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
/* modules.scm:646: values */
C_values(6,0,((C_word*)t0)[5],t3,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8]);}

/* k6760 in k6732 in k6689 in k6644 in k6632 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6762(C_word c,C_word t0,C_word t1){
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
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6762,2,t0,t1);}
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[3],lf[10]);
t3=C_i_block_ref(((C_word*)t0)[2],C_fix(2));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6768,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_eqp(C_SCHEME_TRUE,t3);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6788,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6881,a[2]=((C_word*)t0)[2],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=C_i_check_structure_2(((C_word*)t0)[2],lf[3],lf[12]);
t9=C_i_block_ref(((C_word*)t0)[2],C_fix(11));
/* modules.scm:709: append */
t10=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,((C_word*)t0)[5],t9);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6892,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_structure_2(((C_word*)t0)[2],lf[3],lf[10]);
t8=C_i_block_ref(((C_word*)t0)[2],C_fix(2));
t9=C_eqp(C_SCHEME_TRUE,t8);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:t8);
t11=t10;
t12=C_SCHEME_END_OF_LIST;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_FALSE;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6903,a[2]=t6,a[3]=t11,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6944,a[2]=t15,a[3]=t18,a[4]=t13,a[5]=((C_word)li104),tmp=(C_word)a,a+=6,tmp));
t20=((C_word*)t18)[1];
f_6944(t20,t16,((C_word*)t0)[6]);}}

/* k6766 in k6760 in k6732 in k6689 in k6644 in k6632 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6768,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6771,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6778,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_check_structure_2(((C_word*)t0)[3],lf[3],lf[56]);
t5=C_i_block_ref(((C_word*)t0)[3],C_fix(12));
/* modules.scm:725: merge-se */
f_4010(t3,C_a_i_list(&a,2,t5,((C_word*)t0)[4]));}

/* k6501 in k6494 in k6449 in k6446 in k6268 in k6131 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6503(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:671: values */
C_values(6,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5]);}

/* map-loop1624 in k6494 in k6449 in k6446 in k6268 in k6131 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_fcall f_6505(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6505,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6534,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:671: g1630 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5468 in k5464 in k5369 in k5363 in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5470,2,t0,t1);}
/* modules.scm:525: merge-se */
f_4010(((C_word*)t0)[2],C_a_i_list(&a,6,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]));}

/* map-loop1258 in k5363 in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_fcall f_5472(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5472,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5501,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=C_i_cdr(t6);
if(C_truep(C_i_symbolp(t7))){
t8=t5;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t6);}
else{
t8=C_u_i_car(t6);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5358,a[2]=t8,a[3]=t5,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:522: ##sys#macro-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(2,*((C_word*)lf[25]+1),t9);}}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* map-loop1787 in k6760 in k6732 in k6689 in k6644 in k6632 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_fcall f_6944(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_6944,NULL,3,t0,t1,t2);}
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

/* k7754 in map-loop2085 in k7743 in k7739 in k7735 in k7718 in k7671 in match-functor-argument in k2745 in k2741 */
static void C_ccall f_7756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),((C_word*)t0)[2],lf[166],t1);}

/* k6567 in map-loop1598 in k6449 in k6446 in k6268 in k6131 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6569(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6569,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6540(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6540(t6,((C_word*)t0)[5],t5);}}

/* k6793 in k6786 in k6760 in k6732 in k6689 in k6644 in k6632 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t3=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(4),t1);}

/* k6577 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6579(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
if(C_truep(C_fixnump(t2))){
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
t6=((C_word*)t0)[3];
f_5960(t6,C_i_nullp(t5));}
else{
t3=((C_word*)t0)[3];
f_5960(t3,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
f_5960(t2,C_SCHEME_FALSE);}}

/* k7760 in k7743 in k7739 in k7735 in k7718 in k7671 in match-functor-argument in k2745 in k2741 */
static void C_ccall f_7762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(12,0,((C_word*)t0)[2],*((C_word*)lf[89]+1),lf[161],((C_word*)t0)[3],lf[162],lf[163],((C_word*)t0)[4],lf[164],((C_word*)t0)[5],lf[165],t1);}

/* map-loop2085 in k7743 in k7739 in k7735 in k7718 in k7671 in match-functor-argument in k2745 in k2741 */
static void C_fcall f_7764(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7764,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7793,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7756,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:869: symbol->string */
t7=*((C_word*)lf[92]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* g1588 in loop in k6271 in k6268 in k6131 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_fcall f_6396(C_word t0,C_word t1,C_word t2){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6396,NULL,3,t0,t1,t2);}
t3=C_i_cdr(((C_word*)t0)[2]);
t4=t3;
t5=C_i_cadr(t2);
t6=C_i_cdar(((C_word*)t0)[2]);
t7=C_a_i_cons(&a,2,t5,t6);
t8=C_a_i_cons(&a,2,t7,((C_word*)t0)[3]);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6412,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t4,a[5]=((C_word*)t0)[5],a[6]=t9,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:659: ##sys#delq */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),t10,t2,((C_word*)t0)[7]);}

/* map-loop1813 in k6901 in k6760 in k6732 in k6689 in k6644 in k6632 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_fcall f_6909(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_6909,NULL,3,t0,t1,t2);}
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

/* k6905 in k6901 in k6760 in k6732 in k6689 in k6644 in k6632 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:718: append */
t2=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k6901 in k6760 in k6732 in k6689 in k6644 in k6632 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6903(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6903,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6907,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6909,a[2]=t6,a[3]=t9,a[4]=t4,a[5]=((C_word)li103),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_6909(t11,t7,((C_word*)t0)[4]);}

/* k7743 in k7739 in k7735 in k7718 in k7671 in match-functor-argument in k2745 in k2741 */
static void C_ccall f_7745(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7745,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)((C_word*)t0)[2])[1];
t8=C_i_check_list_2(t7,lf[16]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7762,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7764,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=((C_word)li130),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_7764(t13,t9,t7);}

/* k7739 in k7735 in k7718 in k7671 in match-functor-argument in k2745 in k2741 */
static void C_ccall f_7741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7741,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7745,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:868: symbol->string */
t4=*((C_word*)lf[92]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}

/* k7393 in loop2 in loop in validate-exports in k2745 in k2741 */
static void C_ccall f_7395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7395,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k6121 in map-loop1452 in k6006 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6123(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6123,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6094(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6094(t6,((C_word*)t0)[5],t5);}}

/* loop2 in loop in validate-exports in k2745 in k2741 */
static void C_fcall f_7381(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(9);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_7381,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7395,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_i_cdr(((C_word*)t0)[3]);
/* modules.scm:798: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_7282(t5,t3,t4);}
else{
t3=C_i_car(t2);
if(C_truep(C_i_symbolp(t3))){
t4=t2;
t5=C_u_i_cdr(t4);
/* modules.scm:799: loop2 */
t9=t1;
t10=t5;
t1=t9;
t2=t10;
goto loop;}
else{
/* modules.scm:800: err */
t4=((C_word*)((C_word*)t0)[6])[1];
f_7235(t4,t1,C_a_i_list(&a,3,lf[149],((C_word*)t0)[2],((C_word*)t0)[7]));}}}

/* ##sys#register-module-alias in k2745 in k2741 */
static void C_ccall f_3011(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3011,4,t0,t1,t2,t3);}
t4=C_a_i_cons(&a,2,t2,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3027,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:122: ##sys#module-alias-environment */
t7=*((C_word*)lf[1]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* loop2 in loop in k7466 in instantiate-functor in k2745 in k2741 */
static void C_fcall f_7572(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7572,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_i_car(t2);
t4=t3;
t5=C_i_car(t4);
if(C_truep(C_i_pairp(t5))){
t6=C_i_caar(t4);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7594,a[2]=t4,a[3]=t7,a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
/* modules.scm:826: cadar */
t9=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t4);}
else{
/* modules.scm:831: merr */
t6=((C_word*)t0)[5];
f_7478(t6,t1);}}}

/* k7718 in k7671 in match-functor-argument in k2745 in k2741 */
static void C_ccall f_7720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7720,2,t0,t1);}
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7733,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7737,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:866: symbol->string */
t4=*((C_word*)lf[92]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[6]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* loop in k7466 in instantiate-functor in k2745 in k2741 */
static void C_fcall f_7560(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7560,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7572,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li126),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_7572(t7,t1,t3);}
else{
if(C_truep(C_i_nullp(t3))){
/* modules.scm:833: merr */
t4=((C_word*)t0)[4];
f_7478(t4,t1);}
else{
t4=C_i_car(t3);
t5=C_i_car(t4);
t6=C_i_pairp(t5);
t7=(C_truep(t6)?C_i_car(t5):t5);
t8=t7;
t9=C_i_car(t2);
t10=t9;
t11=C_u_i_cdr(t4);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7646,a[2]=t8,a[3]=t10,a[4]=t1,a[5]=t2,a[6]=t3,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:842: ##sys#match-functor-argument */
t13=*((C_word*)lf[159]+1);
((C_proc7)(void*)(*((C_word*)t13+1)))(7,t13,t12,t8,((C_word*)t0)[2],t10,t11,((C_word*)t0)[3]);}}}

/* k3215 in k3259 in k3255 in switch-module in k2745 in k2741 */
static void C_ccall f_3217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3217,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3220,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3245,a[2]=((C_word*)t0)[5],a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp);
/* modules.scm:147: g478 */
t4=t3;
f_3245(t4,t2,t1);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[4])+1,((C_word*)t0)[5]);
t4=t2;
f_3220(2,t4,t3);}}

/* ##sys#switch-module in k2745 in k2741 */
static void C_ccall f_3210(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3210,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3257,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:149: ##sys#current-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(2,*((C_word*)lf[26]+1),t3);}

/* k5449 in for-each-loop1293 in k5375 in k5372 in k5369 in k5363 in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5441(t3,((C_word*)t0)[4],t2);}

/* k7731 in k7718 in k7671 in match-functor-argument in k2745 in k2741 */
static void C_ccall f_7733(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:862: ##sys#syntax-error-hook */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[104]+1)))(4,*((C_word*)lf[104]+1),((C_word*)t0)[2],lf[3],t1);}

/* k7735 in k7718 in k7671 in match-functor-argument in k2745 in k2741 */
static void C_ccall f_7737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7737,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7741,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:867: symbol->string */
t4=*((C_word*)lf[92]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}

/* k5433 in k5407 in k5404 in k5398 in k5375 in k5372 in k5369 in k5363 in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_i_check_structure_2(t2,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t4=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],t2,C_fix(12),t1);}

/* k5429 in k5410 in k5407 in k5404 in k5398 in k5375 in k5372 in k5369 in k5363 in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5431,2,t0,t1);}
/* modules.scm:550: merge-se */
f_4010(((C_word*)t0)[2],C_a_i_list(&a,3,t1,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* for-each-loop1293 in k5375 in k5372 in k5369 in k5363 in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_fcall f_5441(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5441,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5451,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:530: g1294 */
t5=((C_word*)t0)[3];
f_5378(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7592 in loop2 in loop in k7466 in instantiate-functor in k2745 in k2741 */
static void C_ccall f_7594(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7594,2,t0,t1);}
t2=t1;
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7598,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:828: ##sys#match-functor-argument */
t5=*((C_word*)lf[159]+1);
((C_proc7)(void*)(*((C_word*)t5+1)))(7,t5,t4,((C_word*)t0)[3],((C_word*)t0)[7],t2,t3,((C_word*)t0)[8]);}

/* k7596 in k7592 in loop2 in loop in k7466 in instantiate-functor in k2745 in k2741 */
static void C_ccall f_7598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7598,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7609,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[5];
t6=C_u_i_cdr(t5);
/* modules.scm:829: loop2 */
t7=((C_word*)((C_word*)t0)[6])[1];
f_7572(t7,t4,t6);}

/* ##sys#mark-imported-symbols in k2745 in k2741 */
static void C_ccall f_3682(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3682,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,lf[30]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3727,a[2]=t5,a[3]=((C_word)li27),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_3727(t7,t1,t2);}

/* k5241 in k5238 in g1226 in k5233 in k5196 in k5193 in k5190 in k5187 in k5183 in g1179 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=*((C_word*)lf[81]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(41),((C_word*)t0)[3]);}

/* a5807 in a5801 in k5760 in k5757 in k5751 in k5745 in k5742 in find-module/import-library in k2745 in k2741 */
static void C_ccall f_5808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5808,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[101]+1));
t3=C_mutate2((C_word*)lf[101]+1 /* (set! ##sys#notices-enabled ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a5801 in k5760 in k5757 in k5751 in k5745 in k5742 in find-module/import-library in k2745 in k2741 */
static void C_ccall f_5802(C_word c,C_word t0,C_word t1){
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
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5802,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5808,a[2]=t5,a[3]=t3,a[4]=((C_word)li73),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5813,a[2]=((C_word*)t0)[2],a[3]=((C_word)li74),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5819,a[2]=t3,a[3]=t5,a[4]=((C_word)li75),tmp=(C_word)a,a+=5,tmp);
/* modules.scm:565: ##sys#dynamic-wind */
t9=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t1,t6,t7,t8);}

/* k5798 in k5794 in k5760 in k5757 in k5751 in k5745 in k5742 in find-module/import-library in k2745 in k2741 */
static void C_ccall f_5800(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)((C_word*)t0)[2])[1]);}

/* for-each-loop1225 in k5233 in k5196 in k5193 in k5190 in k5187 in k5183 in g1179 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_fcall f_5255(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5255,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5265,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:509: g1226 */
t5=((C_word*)t0)[3];
f_5236(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6357 in g1584 in loop in k6271 in k6268 in k6131 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:649: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6278(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t1);}

/* k5223 in k5220 in k5196 in k5193 in k5190 in k5187 in k5183 in g1179 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:506: display */
t2=*((C_word*)lf[77]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[78],((C_word*)t0)[3]);}

/* k5220 in k5196 in k5193 in k5190 in k5187 in k5183 in g1179 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5222,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5225,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5232,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:505: cadar */
t4=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* g1226 in k5233 in k5196 in k5193 in k5190 in k5187 in k5183 in g1179 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_fcall f_5236(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5236,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5240,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:511: display */
t4=*((C_word*)lf[77]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[82],((C_word*)t0)[2]);}

/* k5233 in k5196 in k5193 in k5190 in k5187 in k5183 in g1179 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5235,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5236,a[2]=((C_word*)t0)[2],a[3]=((C_word)li54),tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5255,a[2]=t4,a[3]=t2,a[4]=((C_word)li55),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_5255(t6,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k5230 in k5220 in k5196 in k5193 in k5190 in k5187 in k5183 in g1179 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:505: display */
t2=*((C_word*)lf[77]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* g1584 in loop in k6271 in k6268 in k6131 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_fcall f_6343(C_word t0,C_word t1,C_word t2){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6343,NULL,3,t0,t1,t2);}
t3=C_i_cdr(((C_word*)t0)[2]);
t4=t3;
t5=C_i_cadr(t2);
t6=C_i_cdar(((C_word*)t0)[2]);
t7=C_a_i_cons(&a,2,t5,t6);
t8=C_a_i_cons(&a,2,t7,((C_word*)t0)[3]);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6359,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=t4,a[6]=((C_word*)t0)[6],a[7]=t9,tmp=(C_word)a,a+=8,tmp);
/* modules.scm:652: ##sys#delq */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),t10,t2,((C_word*)t0)[7]);}

/* loop in k4237 in k4324 in k4099 in k4091 in k4083 in compiled-module-registration in k2745 in k2741 */
static void C_fcall f_4145(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(13);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4145,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_i_caar(t2);
if(C_truep(C_i_assq(t3,((C_word*)t0)[2]))){
t4=t2;
t5=C_u_i_cdr(t4);
/* modules.scm:339: loop */
t17=t1;
t18=t5;
t1=t17;
t2=t18;
goto loop;}
else{
t4=C_i_caar(t2);
t5=t2;
t6=C_u_i_car(t5);
t7=C_u_i_car(t6);
t8=C_a_i_list(&a,2,lf[55],t7);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4187,a[2]=t9,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t11=t2;
t12=C_u_i_car(t11);
t13=C_u_i_cdr(t12);
/* modules.scm:342: ##sys#strip-syntax */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(3,*((C_word*)lf[59]+1),t10,t13);}}}

/* g1910 in k7220 in k7217 in k7149 in alias-global-hook in k2745 in k2741 */
static void C_fcall f_7185(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7185,NULL,3,t0,t1,t2);}
t3=C_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
/* modules.scm:761: mrename */
t4=((C_word*)t0)[2];
f_7117(t4,t1,((C_word*)t0)[3]);}
else{
t4=C_i_getprop(t3,lf[68],C_SCHEME_FALSE);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?t4:t3));}}

/* k3992 in k4002 in loop2 in loop in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_3994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3994,2,t0,t1);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3933,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li64),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:272: g673 */
t4=t3;
f_3933(t4,((C_word*)t0)[6],t2);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3981,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_car(t4);
/* modules.scm:292: warn */
t6=((C_word*)t0)[5];
f_3806(t6,t3,lf[95],t5);}}

/* k4131 in k4237 in k4324 in k4099 in k4091 in k4083 in compiled-module-registration in k2745 in k2741 */
static void C_ccall f_4133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4133,2,t0,t1);}
t2=((C_word*)t0)[2];
f_4129(t2,C_a_i_cons(&a,2,lf[57],t1));}

/* k6532 in map-loop1624 in k6494 in k6449 in k6446 in k6268 in k6131 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6534(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6534,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6505(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6505(t6,((C_word*)t0)[5],t5);}}

/* g786 in k4324 in k4099 in k4091 in k4083 in compiled-module-registration in k2745 in k2741 */
static void C_fcall f_4199(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4199,NULL,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=C_i_assq(t3,((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t4))){
t5=t2;
t6=C_u_i_car(t5);
t7=C_a_i_list(&a,2,lf[55],t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4223,a[2]=t1,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=C_u_i_cdr(t4);
/* modules.scm:329: ##sys#strip-syntax */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(3,*((C_word*)lf[59]+1),t9,t10);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,2,lf[55],t3));}}

/* check-for-redef in k2745 in k2741 */
static void C_ccall f_3375(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3375,5,t0,t1,t2,t3,t4);}
t5=C_i_assq(t2,t3);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3382,a[2]=t2,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
/* modules.scm:185: ##sys#warn */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[35]+1)))(4,*((C_word*)lf[35]+1),t6,lf[37],t2);}
else{
t7=t6;
f_3382(2,t7,C_SCHEME_FALSE);}}

/* k7149 in alias-global-hook in k2745 in k2741 */
static void C_ccall f_7151(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7151,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[2];
t3=C_i_getprop(t2,lf[68],C_SCHEME_FALSE);
if(C_truep(t3)){
t4=((C_word*)t0)[3];
t5=t4;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
t4=((C_word*)t0)[2];
if(C_truep(C_i_getprop(t4,lf[49],C_SCHEME_FALSE))){
t5=((C_word*)t0)[2];
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7219,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:756: ##sys#active-eval-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[138]+1)))(2,*((C_word*)lf[138]+1),t5);}}}}

/* k3979 in k3992 in k4002 in loop2 in loop in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_3981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* modules.scm:293: loop2 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3856(t4,((C_word*)t0)[4],t3);}

/* k4185 in loop in k4237 in k4324 in k4099 in k4091 in k4083 in compiled-module-registration in k2745 in k2741 */
static void C_ccall f_4187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4187,2,t0,t1);}
t2=C_a_i_list(&a,3,lf[58],((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4177,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[4];
t6=C_u_i_cdr(t5);
/* modules.scm:343: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_4145(t7,t4,t6);}

/* k3380 in check-for-redef in k2745 in k2741 */
static void C_ccall f_3382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_i_assq(((C_word*)t0)[2],((C_word*)t0)[3]))){
/* modules.scm:187: ##sys#warn */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[35]+1)))(4,*((C_word*)lf[35]+1),((C_word*)t0)[4],lf[36],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7352 in loop in validate-exports in k2745 in k2741 */
static void C_fcall f_7354(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7354,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
/* modules.scm:794: iface */
t3=((C_word*)((C_word*)t0)[3])[1];
f_7241(t3,((C_word*)t0)[4],t2);}
else{
/* modules.scm:795: err */
t2=((C_word*)((C_word*)t0)[5])[1];
f_7235(t2,((C_word*)t0)[4],C_a_i_list(&a,3,lf[148],((C_word*)t0)[2],((C_word*)t0)[6]));}}

/* k4865 in primitive-alias in k2745 in k2741 */
static void C_ccall f_4867(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4867,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_a_i_putprop(&a,3,t1,lf[68],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t1);}

/* k3152 in loop in resolve-module-name in k2745 in k2741 */
static void C_ccall f_3154(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3154,2,t0,t1);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3127,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li9),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:131: g439 */
t4=t3;
f_3127(t4,((C_word*)t0)[7],t2);}
else{
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* ##sys#find-module in k2745 in k2741 */
static void C_ccall f_3156(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_3156r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3156r(t0,t1,t2,t3);}}

static void C_ccall f_3156r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_TRUE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_assq(t2,*((C_word*)lf[22]+1));
if(C_truep(t12)){
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_i_cdr(t12));}
else{
if(C_truep(t5)){
/* modules.scm:143: error */
t13=*((C_word*)lf[19]+1);
((C_proc5)(void*)(*((C_word*)t13+1)))(5,t13,t1,t9,lf[23],t2);}
else{
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_SCHEME_FALSE);}}}

/* k4175 in k4185 in loop in k4237 in k4324 in k4099 in k4091 in k4083 in compiled-module-registration in k2745 in k2741 */
static void C_ccall f_4177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4177,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* ##sys#register-export in k2745 in k2741 */
static void C_ccall f_3396(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3396,4,t0,t1,t2,t3);}
if(C_truep(t3)){
t4=t3;
t5=C_i_check_structure_2(t4,lf[3],lf[10]);
t6=C_i_block_ref(t4,C_fix(2));
t7=C_eqp(C_SCHEME_TRUE,t6);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3406,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t7)){
t9=t8;
f_3406(2,t9,t7);}
else{
/* modules.scm:192: ##sys#find-export */
t9=*((C_word*)lf[42]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,t2,t3,C_SCHEME_TRUE);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* ##sys#primitive-alias in k2745 in k2741 */
static void C_ccall f_4863(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4863,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4867,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4876,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_slot(t2,C_fix(1));
/* modules.scm:395: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),t4,lf[71],t5);}

/* k7130 in g1882 in k7119 in mrename in alias-global-hook in k2745 in k2741 */
static void C_ccall f_7132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_i_check_structure_2(t2,lf[3],lf[4]);
t4=C_i_block_ref(t2,C_fix(1));
/* modules.scm:746: ##sys#module-rename */
t5=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[3],((C_word*)t0)[4],t4);}

/* k7338 in loop in validate-exports in k2745 in k2741 */
static void C_ccall f_7340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7340,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* g439 in k3152 in loop in resolve-module-name in k2745 in k2741 */
static void C_fcall f_3127(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3127,NULL,3,t0,t1,t2);}
t3=C_i_cdr(t2);
if(C_truep(C_i_memq(t3,((C_word*)t0)[2]))){
/* modules.scm:137: error */
t4=*((C_word*)lf[19]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,((C_word*)t0)[3],lf[20],((C_word*)t0)[4]);}
else{
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[2]);
/* modules.scm:138: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3119(t5,t1,t3,t4);}}

/* k4683 in for-each-loop981 in k4637 in k4603 in k4577 in k4574 in k4568 in k4545 in k4508 in register-compiled-module in k2745 in k2741 */
static void C_ccall f_4685(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4675(t3,((C_word*)t0)[4],t2);}

/* for-each-loop960 in k4603 in k4577 in k4574 in k4568 in k4545 in k4508 in register-compiled-module in k2745 in k2741 */
static void C_fcall f_4698(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4698,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4708,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:380: g961 */
t5=((C_word*)t0)[3];
f_4606(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4849 in map-loop854 in register-compiled-module in k2745 in k2741 */
static void C_ccall f_4851(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4851,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4822(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4822(t6,((C_word*)t0)[5],t5);}}

/* k7537 in k7466 in instantiate-functor in k2745 in k2741 */
static void C_ccall f_7539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7539,2,t0,t1);}
t2=C_eqp(lf[145],((C_word*)t0)[2]);
t3=(C_truep(t2)?C_a_i_cons(&a,2,C_SCHEME_TRUE,((C_word*)t0)[3]):C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]));
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=C_a_i_cons(&a,2,lf[157],t4);
t6=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,3,lf[158],t1,t5));}

/* for-each-loop981 in k4637 in k4603 in k4577 in k4574 in k4568 in k4545 in k4508 in register-compiled-module in k2745 in k2741 */
static void C_fcall f_4675(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4675,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4685,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:385: g982 */
t5=((C_word*)t0)[3];
f_4640(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4663 in k4637 in k4603 in k4577 in k4574 in k4568 in k4545 in k4508 in register-compiled-module in k2745 in k2741 */
static void C_ccall f_4665(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4665,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,t2,*((C_word*)lf[22]+1));
t4=C_mutate2((C_word*)lf[22]+1 /* (set! ##sys#module-table ...) */,t3);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,((C_word*)t0)[3]);}

/* k3916 in g666 in k4002 in loop2 in loop in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_3918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3918,2,t0,t1);}
t2=((C_word*)t0)[2];
f_3901(t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* ##sys#toplevel-definition-hook in k2745 in k2741 */
static void C_ccall f_3352(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_3352,6,t0,t1,t2,t3,t4,t5);}
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}

/* k3348 in add-to-export-list in k2745 in k2741 */
static void C_ccall f_3350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=C_i_check_structure_2(t3,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t5=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,t3,C_fix(2),t1);}

/* for-each-loop1688 in k6644 in k6632 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_fcall f_7008(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7008,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7018,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:690: g1689 */
t5=((C_word*)t0)[3];
f_6647(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* ##sys#register-meta-expression in k2745 in k2741 */
static void C_ccall f_3355(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3355,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3359,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:180: ##sys#current-module */
t4=*((C_word*)lf[0]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k3357 in register-meta-expression in k2745 in k2741 */
static void C_ccall f_3359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3359,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_check_structure_2(t1,lf[3],lf[33]);
t3=C_i_block_ref(t1,C_fix(9));
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
t5=((C_word*)t0)[3];
t6=C_i_check_structure_2(t1,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t7=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,t1,C_fix(9),t4);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k3960 in g673 in k3992 in k4002 in loop2 in loop in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_3962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* modules.scm:290: loop2 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3856(t4,((C_word*)t0)[4],t3);}

/* loop in k4012 in merge-se in k2745 in k2741 */
static void C_fcall f_4025(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4025,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_i_caar(t2);
t4=t2;
t5=C_u_i_cdr(t4);
if(C_truep(C_i_assq(t3,t5))){
t6=t2;
t7=C_u_i_cdr(t6);
/* modules.scm:301: loop */
t14=t1;
t15=t7;
t1=t14;
t2=t15;
goto loop;}
else{
t6=t2;
t7=C_u_i_car(t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4052,a[2]=t1,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=t2;
t10=C_u_i_cdr(t9);
/* modules.scm:302: loop */
t14=t8;
t15=t10;
t1=t14;
t2=t15;
goto loop;}}}

/* k4893 in k4971 in k4947 in k4887 in register-primitive-module in k2745 in k2741 */
static void C_ccall f_4895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4895,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,t2,*((C_word*)lf[22]+1));
t4=C_mutate2((C_word*)lf[22]+1 /* (set! ##sys#module-table ...) */,t3);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,((C_word*)t0)[3]);}

/* k4404 in map-loop721 in k4091 in k4083 in compiled-module-registration in k2745 in k2741 */
static void C_ccall f_4406(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4406,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4377(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4377(t6,((C_word*)t0)[5],t5);}}

/* g673 in k3992 in k4002 in loop2 in loop in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_fcall f_3933(C_word t0,C_word t1,C_word t2){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3933,NULL,3,t0,t1,t2);}
t3=C_i_cdr(t2);
if(C_truep(C_i_symbolp(t3))){
t4=C_i_car(((C_word*)t0)[2]);
t5=t2;
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,t4,t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3951,a[2]=t1,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=((C_word*)t0)[2];
t11=C_u_i_cdr(t10);
/* modules.scm:287: loop2 */
t12=((C_word*)((C_word*)t0)[3])[1];
f_3856(t12,t9,t11);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3962,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=C_i_car(((C_word*)t0)[2]);
/* modules.scm:289: warn */
t6=((C_word*)t0)[4];
f_3806(t6,t4,lf[94],t5);}}

/* k4012 in merge-se in k2745 in k2741 */
static void C_ccall f_4014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4014,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4025,a[2]=t3,a[3]=((C_word)li29),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_4025(t5,((C_word*)t0)[2],t1);}

/* merge-se in k2745 in k2741 */
static void C_fcall f_4010(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4010,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4014,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_apply(4,0,t3,*((C_word*)lf[17]+1),t2);}

/* k3899 in g666 in k4002 in loop2 in loop in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_fcall f_3901(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3901,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3905,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* modules.scm:283: loop2 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_3856(t6,t3,t5);}

/* f8321 in k5196 in k5193 in k5190 in k5187 in k5183 in g1179 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f8321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:515: ##sys#warn */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[35]+1)))(3,*((C_word*)lf[35]+1),((C_word*)t0)[2],t1);}

/* k3903 in k3899 in g666 in k4002 in loop2 in loop in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_3905(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3905,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k4002 in loop2 in loop in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_4004(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4004,2,t0,t1);}
if(C_truep(C_i_assq(((C_word*)t0)[2],t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3879,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_car(t3);
/* modules.scm:275: warn */
t5=((C_word*)t0)[6];
f_3806(t5,t2,lf[93],t4);}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_car(t2);
t4=C_i_assq(t3,((C_word*)t0)[7]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3893,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[8],a[5]=((C_word)li63),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:272: g666 */
t6=t5;
f_3893(t6,((C_word*)t0)[5],t4);}
else{
t5=((C_word*)t0)[3];
t6=C_u_i_car(t5);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3994,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:284: ##sys#current-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(2,*((C_word*)lf[26]+1),t7);}}}

/* ##sys#module-rename in k2745 in k2741 */
static void C_ccall f_7096(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7096,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7104,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=C_slot(t3,C_fix(1));
t6=C_slot(t2,C_fix(1));
/* modules.scm:734: string-append */
t7=*((C_word*)lf[89]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t4,t5,lf[136],t6);}

/* k3300 in k3277 in add-to-export-list in k2745 in k2741 */
static void C_ccall f_3302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3302,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3305,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3316,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_i_check_structure_2(t4,lf[3],lf[12]);
t6=C_i_block_ref(t4,C_fix(11));
/* modules.scm:173: append */
t7=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,((C_word*)((C_word*)t0)[6])[1],t6);}

/* k3303 in k3300 in k3277 in add-to-export-list in k2745 in k2741 */
static void C_ccall f_3305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3305,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3312,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:174: append */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k3949 in g673 in k3992 in k4002 in loop2 in loop in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_3951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3951,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k3310 in k3303 in k3300 in k3277 in add-to-export-list in k2745 in k2741 */
static void C_ccall f_3312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=C_i_check_structure_2(t3,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t5=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,t3,C_fix(4),t1);}

/* k3314 in k3300 in k3277 in add-to-export-list in k2745 in k2741 */
static void C_ccall f_3316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_i_check_structure_2(t2,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t4=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],t2,C_fix(11),t1);}

/* map-loop780 in k4324 in k4099 in k4091 in k4083 in compiled-module-registration in k2745 in k2741 */
static void C_fcall f_4241(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4241,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4270,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:325: g786 */
t5=((C_word*)t0)[5];
f_4199(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* for-each-loop494 in k3277 in add-to-export-list in k2745 in k2741 */
static void C_fcall f_3322(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3322,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=f_3280(C_a_i(&a,3),((C_word*)t0)[2],t3);
t5=C_slot(t2,C_fix(1));
t8=t1;
t9=t5;
t1=t8;
t2=t9;
goto loop;}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* for-each-loop608 in mark-imported-symbols in k2745 in k2741 */
static void C_fcall f_3727(C_word t0,C_word t1,C_word t2){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3727,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3737,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3691,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t8=C_i_cdr(t6);
if(C_truep(C_i_symbolp(t8))){
t9=C_u_i_car(t6);
t10=C_u_i_cdr(t6);
t11=C_eqp(t9,t10);
t12=t7;
f_3691(t12,C_i_not(t11));}
else{
t9=t7;
f_3691(t9,C_SCHEME_FALSE);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3735 in for-each-loop608 in mark-imported-symbols in k2745 in k2741 */
static void C_ccall f_3737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3727(t3,((C_word*)t0)[4],t2);}

/* k4603 in k4577 in k4574 in k4568 in k4545 in k4508 in register-compiled-module in k2745 in k2741 */
static void C_ccall f_4605(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4605,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4606,a[2]=((C_word*)t0)[2],a[3]=((C_word)li38),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[3],lf[30]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4639,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4698,a[2]=t6,a[3]=t2,a[4]=((C_word)li41),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_4698(t8,t4,((C_word*)t0)[3]);}

/* g961 in k4603 in k4577 in k4574 in k4568 in k4545 in k4508 in register-compiled-module in k2745 in k2741 */
static void C_fcall f_4606(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4606,NULL,3,t0,t1,t2);}
t3=C_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4622,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_i_cadr(t2);
if(C_truep(t7)){
/* modules.scm:383: merge-se */
f_4010(t6,C_a_i_list(&a,2,t7,((C_word*)t0)[2]));}
else{
/* modules.scm:383: merge-se */
f_4010(t6,C_a_i_list(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]));}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k4476 in map-loop854 in register-compiled-module in k2745 in k2741 */
static void C_ccall f_4478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=C_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
/* modules.scm:351: ##sys#error */
t4=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],lf[62],lf[66],((C_word*)t0)[2]);}}
else{
/* modules.scm:351: ##sys#error */
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],lf[62],lf[66],((C_word*)t0)[2]);}}

/* ##sys#finalize-module in k2745 in k2741 */
static void C_ccall f_5129(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[23],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5129,3,t0,t1,t2);}
t3=t2;
t4=C_i_check_structure_2(t3,lf[3],lf[10]);
t5=C_i_block_ref(t3,C_fix(2));
t6=t5;
t7=t2;
t8=C_i_check_structure_2(t7,lf[3],lf[4]);
t9=C_i_block_ref(t7,C_fix(1));
t10=t9;
t11=t2;
t12=C_i_check_structure_2(t11,lf[3],lf[39]);
t13=C_i_block_ref(t11,C_fix(3));
t14=t13;
t15=t2;
t16=C_i_check_structure_2(t15,lf[3],lf[29]);
t17=C_i_block_ref(t15,C_fix(4));
t18=t17;
t19=C_SCHEME_FALSE;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_SCHEME_END_OF_LIST;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_SCHEME_FALSE;
t24=(*a=C_VECTOR_TYPE|1,a[1]=t23,tmp=(C_word)a,a+=2,tmp);
t25=t2;
t26=C_i_check_structure_2(t25,lf[3],lf[44]);
t27=C_i_block_ref(t25,C_fix(5));
t28=C_i_check_list_2(t27,lf[16]);
t29=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5164,a[2]=t18,a[3]=t20,a[4]=t1,a[5]=t2,a[6]=t10,a[7]=t6,a[8]=t14,tmp=(C_word)a,a+=9,tmp);
t30=C_SCHEME_UNDEFINED;
t31=(*a=C_VECTOR_TYPE|1,a[1]=t30,tmp=(C_word)a,a+=2,tmp);
t32=C_set_block_item(t31,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5704,a[2]=t24,a[3]=t31,a[4]=t22,a[5]=((C_word)li70),tmp=(C_word)a,a+=6,tmp));
t33=((C_word*)t31)[1];
f_5704(t33,t29,t27);}

/* k4650 in g982 in k4637 in k4603 in k4577 in k4574 in k4568 in k4545 in k4508 in register-compiled-module in k2745 in k2741 */
static void C_ccall f_4652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_set_car(((C_word*)t0)[3],t1));}

/* map-loop854 in register-compiled-module in k2745 in k2741 */
static void C_fcall f_4822(C_word t0,C_word t1,C_word t2){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4822,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4851,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
if(C_truep(C_i_symbolp(t4))){
t6=t5;
t7=t4;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4478,a[2]=t7,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:348: ##sys#macro-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(2,*((C_word*)lf[25]+1),t8);}
else{
t6=C_i_car(t4);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4500,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=C_u_i_cdr(t4);
t10=C_u_i_car(t4);
/* modules.scm:358: ##sys#ensure-transformer */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[64]+1)))(4,*((C_word*)lf[64]+1),t8,t9,t10);}}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4814 in map-loop882 in k4508 in register-compiled-module in k2745 in k2741 */
static void C_ccall f_4816(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4816,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4787(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4787(t6,((C_word*)t0)[5],t5);}}

/* g982 in k4637 in k4603 in k4577 in k4574 in k4568 in k4545 in k4508 in register-compiled-module in k2745 in k2741 */
static void C_fcall f_4640(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4640,NULL,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4652,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_i_cadr(t2);
if(C_truep(t6)){
/* modules.scm:387: merge-se */
f_4010(t5,C_a_i_list(&a,2,t6,((C_word*)t0)[2]));}
else{
/* modules.scm:387: merge-se */
f_4010(t5,C_a_i_list(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]));}}

/* k4887 in register-primitive-module in k2745 in k2741 */
static void C_ccall f_4889(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4889,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t0)[2];
t8=C_i_check_list_2(t7,lf[16]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4949,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5010,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=((C_word)li50),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_5010(t13,t9,t7);}

/* k4268 in map-loop780 in k4324 in k4099 in k4091 in k4083 in compiled-module-registration in k2745 in k2741 */
static void C_ccall f_4270(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4270,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4241(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4241(t6,((C_word*)t0)[5],t5);}}

/* ##sys#register-primitive-module in k2745 in k2741 */
static void C_ccall f_4882(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_4882r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4882r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4882r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4889,a[2]=t3,a[3]=t2,a[4]=t7,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:400: ##sys#macro-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(2,*((C_word*)lf[25]+1),t8);}

/* k4620 in g961 in k4603 in k4577 in k4574 in k4568 in k4545 in k4508 in register-compiled-module in k2745 in k2741 */
static void C_ccall f_4622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_set_car(((C_word*)t0)[3],t1));}

/* k4637 in k4603 in k4577 in k4574 in k4568 in k4545 in k4508 in register-compiled-module in k2745 in k2741 */
static void C_ccall f_4639(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4639,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4640,a[2]=((C_word*)t0)[2],a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[3],lf[30]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4665,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4675,a[2]=t6,a[3]=t2,a[4]=((C_word)li40),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_4675(t8,t4,((C_word*)t0)[3]);}

/* k7016 in for-each-loop1688 in k6644 in k6632 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_7018(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7008(t3,((C_word*)t0)[4],t2);}

/* k4874 in primitive-alias in k2745 in k2741 */
static void C_ccall f_4876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:394: ##sys#string->symbol */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[69]+1)))(3,*((C_word*)lf[69]+1),((C_word*)t0)[2],t1);}

/* k5193 in k5190 in k5187 in k5183 in g1179 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5195(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5195,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5198,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5287,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:496: display */
t4=*((C_word*)lf[77]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[85],((C_word*)t0)[4]);}
else{
t3=t2;
f_5198(2,t3,C_SCHEME_UNDEFINED);}}

/* k5190 in k5187 in k5183 in g1179 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5192(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5192,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5195,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t3=*((C_word*)lf[81]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(39),((C_word*)t0)[4]);}

/* k5196 in k5193 in k5190 in k5187 in k5183 in g1179 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5198(C_word c,C_word t0,C_word t1){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5198,2,t0,t1);}
t2=C_i_getprop(((C_word*)t0)[2],lf[75],C_SCHEME_FALSE);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5206,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=C_i_length(t3);
t6=C_eqp(C_fix(1),t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5222,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:504: display */
t8=*((C_word*)lf[77]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,lf[80],((C_word*)t0)[4]);}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5235,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:508: display */
t8=*((C_word*)lf[77]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,lf[83],((C_word*)t0)[4]);}}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8321,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:515: get-output-string */
t6=*((C_word*)lf[76]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[4]);}}

/* g1179 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_fcall f_5171(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5171,NULL,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=t3;
t5=t2;
t6=C_u_i_car(t5);
if(C_truep(C_i_memq(t6,((C_word*)t0)[2]))){
t7=C_SCHEME_UNDEFINED;
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5185,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:490: open-output-string */
t8=*((C_word*)lf[87]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}

/* k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5170(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5170,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5171,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li58),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5324,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[8],a[9]=t3,tmp=(C_word)a,a+=10,tmp);
/* modules.scm:516: module-undefined-list */
t5=*((C_word*)lf[5]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[6]);}

/* k5183 in g1179 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5185,2,t0,t1);}
t2=t1;
t3=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5189,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:492: display */
t5=*((C_word*)lf[77]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,lf[86],t2);}

/* k5187 in k5183 in g1179 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5189,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5192,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:493: display */
t3=*((C_word*)lf[77]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_fcall f_5932(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5932,NULL,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
/* modules.scm:601: import-name */
f_5906(t1,t2);}
else{
t3=C_i_listp(t2);
t4=C_i_not(t3);
t5=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_5951,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],tmp=(C_word)a,a+=15,tmp);
if(C_truep(t4)){
t6=t5;
f_5951(t6,t4);}
else{
t6=C_i_length(t2);
t7=t5;
f_5951(t7,C_fixnum_lessp(t6,C_fix(2)));}}}

/* k5928 in import-name in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_5930(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:595: ##sys#find-module/import-library */
t2=*((C_word*)lf[99]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[62]);}

/* loop in loop in k6140 in k6134 in k6131 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_fcall f_6159(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(6);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6159,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,((C_word*)t0)[4],t4);
/* modules.scm:632: values */
C_values(6,0,t1,t5,((C_word*)t0)[5],t3,((C_word*)t0)[6]);}
else{
t4=C_i_caar(t2);
if(C_truep(C_i_memq(t4,((C_word*)t0)[7]))){
t5=t2;
t6=C_u_i_cdr(t5);
/* modules.scm:633: loop */
t15=t1;
t16=t6;
t17=t3;
t1=t15;
t2=t16;
t3=t17;
goto loop;}
else{
t5=t2;
t6=C_u_i_cdr(t5);
t7=t2;
t8=C_u_i_car(t7);
t9=C_a_i_cons(&a,2,t8,t3);
/* modules.scm:634: loop */
t15=t1;
t16=t6;
t17=t9;
t1=t15;
t2=t16;
t3=t17;
goto loop;}}}

/* for-each-loop1194 in k5285 in k5193 in k5190 in k5187 in k5183 in g1179 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_fcall f_5300(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5300,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5310,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:497: g1195 */
t5=((C_word*)t0)[3];
f_5288(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5308 in for-each-loop1194 in k5285 in k5193 in k5190 in k5187 in k5183 in g1179 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5300(t3,((C_word*)t0)[4],t2);}

/* ##sys#module-exports in k2745 in k2741 */
static void C_ccall f_2987(C_word c,C_word t0,C_word t1,C_word t2){
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
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2987,3,t0,t1,t2);}
t3=t2;
t4=C_i_check_structure_2(t3,lf[3],lf[10]);
t5=C_i_block_ref(t3,C_fix(2));
t6=t2;
t7=C_i_check_structure_2(t6,lf[3],lf[11]);
t8=C_i_block_ref(t6,C_fix(10));
t9=t2;
t10=C_i_check_structure_2(t9,lf[3],lf[12]);
t11=C_i_block_ref(t9,C_fix(11));
/* modules.scm:112: values */
C_values(5,0,t1,t5,t8,t11);}

/* k6134 in k6131 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6136(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6136,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)((C_word*)t0)[2])[1];
t7=C_i_check_list_2(((C_word*)t0)[3],lf[16]);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6142,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6231,a[2]=t5,a[3]=t10,a[4]=t3,a[5]=t6,a[6]=((C_word)li88),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_6231(t12,t8,((C_word*)t0)[3]);}

/* k6131 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6133,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6136,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* modules.scm:626: ##sys#check-syntax */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[118]+1)))(5,*((C_word*)lf[118]+1),t2,((C_word*)t0)[10],((C_word*)t0)[11],lf[120]);}
else{
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6270,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
/* modules.scm:637: c */
t3=((C_word*)t0)[13];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[15],((C_word*)t0)[5]);}}

/* ##sys#register-compiled-module in k2745 in k2741 */
static void C_ccall f_4448(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...){
C_word tmp;
C_word t6;
va_list v;
C_word *a,c2=c;
C_save_rest(t5,c2,6);
if(c<6) C_bad_min_argc_2(c,6,t0);
if(!C_demand(c*C_SIZEOF_PAIR+19)){
C_save_and_reclaim((void*)tr6r,(void*)f_4448r,6,t0,t1,t2,t3,t4,t5);}
else{
a=C_alloc((c-6)*3);
t6=C_restore_rest(a,C_rest_count(0));
f_4448r(t0,t1,t2,t3,t4,t5,t6);}}

static void C_ccall f_4448r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word *a=C_alloc(19);
t7=C_i_nullp(t6);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_car(t6));
t9=t8;
t10=C_SCHEME_END_OF_LIST;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_i_check_list_2(t5,lf[16]);
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4510,a[2]=t3,a[3]=t9,a[4]=t2,a[5]=t4,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4822,a[2]=t13,a[3]=t17,a[4]=t11,a[5]=((C_word)li45),tmp=(C_word)a,a+=6,tmp));
t19=((C_word*)t17)[1];
f_4822(t19,t15,t5);}

/* k4444 in compiled-module-registration in k2745 in k2741 */
static void C_ccall f_4446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4446,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[62],t1);
t3=C_a_i_list(&a,2,lf[55],t2);
t4=C_a_i_list(&a,2,lf[63],t3);
t5=((C_word*)t0)[2];
f_4085(t5,C_a_i_list(&a,1,t4));}

/* k5908 in import-name in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_5910(C_word c,C_word t0,C_word t1){
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
C_word *a;
t2=C_i_check_structure_2(t1,lf[3],lf[11]);
t3=C_i_block_ref(t1,C_fix(10));
t4=C_i_check_structure_2(t1,lf[3],lf[12]);
t5=C_i_block_ref(t1,C_fix(11));
t6=C_i_check_structure_2(t1,lf[3],lf[56]);
t7=C_i_block_ref(t1,C_fix(12));
t8=C_i_check_structure_2(t1,lf[3],lf[4]);
t9=C_i_block_ref(t1,C_fix(1));
/* modules.scm:599: values */
C_values(6,0,((C_word*)t0)[2],t9,t3,t5,t7);}

/* loop in k6140 in k6134 in k6131 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_fcall f_6147(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(12);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6147,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6159,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t5,a[9]=((C_word)li86),tmp=(C_word)a,a+=10,tmp));
t7=((C_word*)t5)[1];
f_6159(t7,t1,((C_word*)t0)[7],C_SCHEME_END_OF_LIST);}
else{
t4=C_i_caar(t2);
if(C_truep(C_i_memq(t4,((C_word*)t0)[6]))){
t5=t2;
t6=C_u_i_cdr(t5);
/* modules.scm:635: loop */
t16=t1;
t17=t6;
t18=t3;
t1=t16;
t2=t17;
t3=t18;
goto loop;}
else{
t5=t2;
t6=C_u_i_cdr(t5);
t7=t2;
t8=C_u_i_car(t7);
t9=C_a_i_cons(&a,2,t8,t3);
/* modules.scm:636: loop */
t16=t1;
t17=t6;
t18=t9;
t1=t16;
t2=t17;
t3=t18;
goto loop;}}}

/* k5786 in k5782 in k5779 in k5775 in k5772 in k5768 in k5765 in swap1333 in k5760 in k5757 in k5751 in k5745 in k5742 in find-module/import-library in k2745 in k2741 */
static void C_ccall f_5788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5788,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5791,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:565: macro-environment13411342 */
t4=((C_word*)t0)[5];
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t3,((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);}

/* k6140 in k6134 in k6131 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6142,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6147,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=t4,a[9]=((C_word)li87),tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_6147(t6,((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_END_OF_LIST);}

/* k5782 in k5779 in k5775 in k5772 in k5768 in k5765 in swap1333 in k5760 in k5757 in k5751 in k5745 in k5742 in find-module/import-library in k2745 in k2741 */
static void C_ccall f_5784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5784,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5788,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:565: macro-environment13411342 */
t4=((C_word*)t0)[7];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t3);}

/* k5779 in k5775 in k5772 in k5768 in k5765 in swap1333 in k5760 in k5757 in k5751 in k5745 in k5742 in find-module/import-library in k2745 in k2741 */
static void C_ccall f_5781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5781,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5784,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:565: current-meta-environment13391340 */
t4=((C_word*)t0)[7];
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t3,((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[4])[1]);}

/* k4221 in g786 in k4324 in k4099 in k4091 in k4083 in compiled-module-registration in k2745 in k2741 */
static void C_ccall f_4223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4223,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[58],((C_word*)t0)[3],t1));}

/* k4237 in k4324 in k4099 in k4091 in k4083 in compiled-module-registration in k2745 in k2741 */
static void C_ccall f_4239(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4239,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[57],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4129,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4133,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[7]))){
t6=t4;
f_4129(t6,C_a_i_cons(&a,2,lf[57],C_SCHEME_END_OF_LIST));}
else{
t6=((C_word*)t0)[8];
t7=C_i_check_structure_2(t6,lf[3],lf[44]);
t8=C_i_block_ref(t6,C_fix(5));
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4145,a[2]=((C_word*)t0)[7],a[3]=t10,a[4]=((C_word)li32),tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_4145(t12,t5,t8);}}

/* loop in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_fcall f_5537(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(17);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5537,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_i_car(t2);
t4=C_i_symbolp(t3);
t5=(C_truep(t4)?t3:C_i_car(t3));
t6=t5;
if(C_truep(C_i_assq(t6,((C_word*)t0)[2]))){
t7=t2;
t8=C_u_i_cdr(t7);
/* modules.scm:463: loop */
t16=t1;
t17=t8;
t1=t16;
t2=t17;
goto loop;}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5568,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t8=C_i_assq(t6,((C_word*)t0)[4]);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5581,a[2]=t7,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5584,a[2]=t9,a[3]=t7,a[4]=t6,a[5]=t10,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t9)){
t12=C_i_cdr(t9);
t13=t11;
f_5584(t13,C_i_symbolp(t12));}
else{
t12=t11;
f_5584(t12,C_SCHEME_FALSE);}}}}

/* k5794 in k5760 in k5757 in k5751 in k5745 in k5742 in find-module/import-library in k2745 in k2741 */
static void C_ccall f_5796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5796,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5800,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:573: ##sys#find-module */
t3=*((C_word*)lf[21]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[62]);}

/* k3511 in k3505 in k3502 in k3496 in k3493 in register-syntax-export in k2745 in k2741 */
static void C_ccall f_3513(C_word c,C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3513,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[4];
t4=C_i_check_structure_2(t3,lf[3],lf[44]);
t5=C_i_block_ref(t3,C_fix(5));
t6=C_a_i_cons(&a,2,t2,t5);
t7=((C_word*)t0)[5];
t8=((C_word*)t0)[4];
t9=C_i_check_structure_2(t8,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t10=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t7,t8,C_fix(5),t6);}

/* k5973 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_5975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:607: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),((C_word*)t0)[2],lf[116],t1);}

/* k5789 in k5786 in k5782 in k5779 in k5775 in k5772 in k5768 in k5765 in swap1333 in k5760 in k5757 in k5751 in k5745 in k5742 in find-module/import-library in k2745 in k2741 */
static void C_ccall f_5791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_TRUE);
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k5969 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_5971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:606: ##sys#intern-symbol */
C_string_to_symbol(3,0,((C_word*)t0)[2],t1);}

/* k4422 in k4083 in compiled-module-registration in k2745 in k2741 */
static void C_ccall f_4424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4424,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[62],t1);
t3=((C_word*)t0)[2];
f_4093(t3,C_a_i_list(&a,1,t2));}

/* k5765 in swap1333 in k5760 in k5757 in k5751 in k5745 in k5742 in find-module/import-library in k2745 in k2741 */
static void C_ccall f_5767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5767,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5770,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* modules.scm:565: current-module13351336 */
t4=((C_word*)t0)[11];
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t3,((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[6])[1]);}

/* swap1333 in k5760 in k5757 in k5751 in k5745 in k5742 in find-module/import-library in k2745 in k2741 */
static void C_ccall f_5763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5763,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5767,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* modules.scm:565: current-module13351336 */
t3=((C_word*)t0)[10];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* k5499 in map-loop1258 in k5363 in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5501(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5501,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5472(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5472(t6,((C_word*)t0)[5],t5);}}

/* a5987 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_5988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5988,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
/* modules.scm:611: import-spec */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5932(t3,t1,t2);}

/* k5760 in k5757 in k5751 in k5745 in k5742 in find-module/import-library in k2745 in k2741 */
static void C_ccall f_5762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5762,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5763,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t5,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word)li72),tmp=(C_word)a,a+=12,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5796,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5802,a[2]=((C_word*)t0)[12],a[3]=((C_word)li76),tmp=(C_word)a,a+=4,tmp);
/* modules.scm:565: ##sys#dynamic-wind */
t9=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t7,t6,t8,t6);}

/* k5775 in k5772 in k5768 in k5765 in swap1333 in k5760 in k5757 in k5751 in k5745 in k5742 in find-module/import-library in k2745 in k2741 */
static void C_ccall f_5777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5777,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5781,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:565: current-meta-environment13391340 */
t4=((C_word*)t0)[9];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t3);}

/* k5772 in k5768 in k5765 in swap1333 in k5760 in k5757 in k5751 in k5745 in k5742 in find-module/import-library in k2745 in k2741 */
static void C_ccall f_5774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5774,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5777,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* modules.scm:565: current-environment13371338 */
t4=((C_word*)t0)[9];
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t3,((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[5])[1]);}

/* for-each-loop1178 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_fcall f_5510(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5510,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5520,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:438: g1179 */
t5=((C_word*)t0)[3];
f_5171(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5768 in k5765 in swap1333 in k5760 in k5757 in k5751 in k5745 in k5742 in find-module/import-library in k2745 in k2741 */
static void C_ccall f_5770(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5770,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5774,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
/* modules.scm:565: current-environment13371338 */
t4=((C_word*)t0)[11];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t3);}

/* k5153 in map-loop1124 in finalize-module in k2745 in k2741 */
static void C_ccall f_5155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_assq(((C_word*)t0)[3],t1));}

/* k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_fcall f_5951(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5951,NULL,2,t0,t1);}
if(C_truep(t1)){
/* modules.scm:603: ##sys#syntax-error-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[104]+1)))(5,*((C_word*)lf[104]+1),((C_word*)t0)[2],((C_word*)t0)[3],lf[115],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5960,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6579,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(((C_word*)t0)[4]);
/* modules.scm:604: c */
t5=((C_word*)t0)[9];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t3,((C_word*)t0)[14],t4);}}

/* k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5164(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5164,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5167,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[7]);
if(C_truep(t4)){
t5=((C_word*)t0)[5];
t6=C_i_check_structure_2(t5,lf[3],lf[12]);
t7=C_i_block_ref(t5,C_fix(11));
/* modules.scm:450: merge-se */
f_4010(t3,C_a_i_list(&a,2,t7,t2));}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5667,a[2]=((C_word*)t0)[5],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:451: ##sys#macro-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(2,*((C_word*)lf[25]+1),t5);}}

/* k3545 in k3502 in k3496 in k3493 in register-syntax-export in k2745 in k2741 */
static void C_ccall f_3547(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3547,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3551,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:216: ##sys#macro-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(2,*((C_word*)lf[25]+1),t3);}

/* k5742 in find-module/import-library in k2745 in k2741 */
static void C_ccall f_5744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5744,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5747,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:560: ##sys#find-module */
t4=*((C_word*)lf[21]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k5965 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_5967(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:605: import-name */
f_5906(((C_word*)t0)[3],t1);}

/* k5745 in k5742 in find-module/import-library in k2745 in k2741 */
static void C_ccall f_5747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5747,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5750,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t3)[1])){
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,((C_word*)t3)[1]);}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5753,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5829,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5833,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:563: symbol->string */
t8=*((C_word*)lf[92]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,((C_word*)t0)[3]);}}

/* ##sys#find-module/import-library in k2745 in k2741 */
static void C_ccall f_5740(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5740,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5744,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:559: ##sys#resolve-module-name */
t5=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,t3);}

/* k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5167,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5170,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[8]);
t5=(C_truep(t4)?((C_word*)t0)[2]:((C_word*)t0)[8]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5537,a[2]=t2,a[3]=t7,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[3],a[7]=((C_word)li68),tmp=(C_word)a,a+=8,tmp));
t9=((C_word*)t7)[1];
f_5537(t9,t3,t5);}

/* k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_fcall f_5960(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_5960,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5967,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5971,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5975,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_cadr(((C_word*)t0)[4]);
/* modules.scm:607: ##sys#number->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[117]+1)))(3,*((C_word*)lf[117]+1),t4,t5);}
else{
t2=((C_word*)t0)[4];
t3=C_u_i_car(t2);
t4=C_i_cddr(((C_word*)t0)[4]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5988,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word)li81),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5998,a[2]=((C_word*)t0)[6],a[3]=t5,a[4]=t3,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word)li96),tmp=(C_word)a,a+=14,tmp);
/* modules.scm:609: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],t6,t7);}}

/* k6689 in k6644 in k6632 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6691,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6692,a[2]=((C_word*)t0)[2],a[3]=((C_word)li100),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[3],lf[30]);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6734,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6985,a[2]=t6,a[3]=t2,a[4]=((C_word)li105),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_6985(t8,t4,((C_word*)t0)[3]);}

/* g1710 in k6689 in k6644 in k6632 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_fcall f_6692(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6692,NULL,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6728,a[2]=t4,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:700: macro-env */
t6=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t6))(2,t6,t5);}

/* k5757 in k5751 in k5745 in k5742 in find-module/import-library in k2745 in k2741 */
static void C_ccall f_5759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5759,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5762,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* modules.scm:570: ##sys#meta-macro-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[103]+1)))(2,*((C_word*)lf[103]+1),t4);}

/* k3549 in k3545 in k3502 in k3496 in k3493 in register-syntax-export in k2745 in k2741 */
static void C_ccall f_3551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:216: check-for-redef */
t2=*((C_word*)lf[34]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k5751 in k5745 in k5742 in find-module/import-library in k2745 in k2741 */
static void C_ccall f_5753(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5753,2,t0,t1);}
t2=t1;
if(C_truep(t2)){
t3=*((C_word*)lf[0]+1);
t4=*((C_word*)lf[26]+1);
t5=*((C_word*)lf[100]+1);
t6=*((C_word*)lf[25]+1);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_END_OF_LIST;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5759,a[2]=t8,a[3]=t10,a[4]=t6,a[5]=t5,a[6]=t4,a[7]=t3,a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[4],a[11]=t2,tmp=(C_word)a,a+=12,tmp);
/* modules.scm:568: ##sys#current-meta-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[100]+1)))(2,*((C_word*)lf[100]+1),t11);}
else{
/* modules.scm:575: ##sys#syntax-error-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[104]+1)))(5,*((C_word*)lf[104]+1),((C_word*)t0)[5],((C_word*)t0)[6],lf[105],((C_word*)t0)[4]);}}

/* k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6005,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6008,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* modules.scm:613: ##sys#check-syntax */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[118]+1)))(5,*((C_word*)lf[118]+1),t2,((C_word*)t0)[10],((C_word*)t0)[11],lf[119]);}
else{
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_6133,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
/* modules.scm:625: c */
t3=((C_word*)t0)[13];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[16],((C_word*)t0)[5]);}}

/* module-name in k2745 in k2741 */
static void C_ccall f_2761(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2761,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[3],lf[4]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_block_ref(t2,C_fix(1)));}

/* k6006 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6008(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6008,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)((C_word*)t0)[2])[1];
t7=C_i_check_list_2(((C_word*)t0)[3],lf[16]);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6014,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6094,a[2]=t5,a[3]=t10,a[4]=t3,a[5]=t6,a[6]=((C_word)li85),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_6094(t12,t8,((C_word*)t0)[3]);}

/* k5570 in k5566 in loop in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5572(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5572,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k5748 in k5745 in k5742 in find-module/import-library in k2745 in k2741 */
static void C_ccall f_5750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[3])[1]);}

/* k5380 in g1294 in k5375 in k5372 in k5369 in k5363 in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_set_car(t3,t1));}

/* ##sys#register-undefined in k2745 in k2741 */
static void C_ccall f_3566(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3566,5,t0,t1,t2,t3,t4);}
if(C_truep(t3)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3573,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:229: module-undefined-list */
t6=*((C_word*)lf[5]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k6012 in k6006 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6014,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6019,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=((C_word*)t0)[7],a[9]=((C_word)li84),tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_6019(t5,((C_word*)t0)[8],t1,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* loop in k6012 in k6006 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_fcall f_6019(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
a=C_alloc(7);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6019,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_nullp(t2))){
t5=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t6=C_a_i_cons(&a,2,((C_word*)t0)[4],t5);
/* modules.scm:617: values */
C_values(6,0,t1,t6,t3,t4,((C_word*)t0)[5]);}
else{
t5=C_i_car(t2);
t6=C_i_assq(t5,((C_word*)t0)[6]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6044,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[7],a[5]=t4,a[6]=((C_word)li82),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:614: g1489 */
t8=t7;
f_6044(t8,t1,t6);}
else{
t7=t2;
t8=C_u_i_car(t7);
t9=C_i_assq(t8,((C_word*)t0)[8]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6066,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[7],a[5]=t3,a[6]=((C_word)li83),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:614: g1493 */
t11=t10;
f_6066(t11,t1,t9);}
else{
t10=t2;
t11=C_u_i_cdr(t10);
/* modules.scm:624: loop */
t17=t1;
t18=t11;
t19=t3;
t20=t4;
t1=t17;
t2=t18;
t3=t19;
t4=t20;
goto loop;}}}}

/* k6410 in g1588 in loop in k6271 in k6268 in k6131 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:656: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6278(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t1);}

/* k5731 in map-loop1124 in finalize-module in k2745 in k2741 */
static void C_ccall f_5733(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5733,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5704(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5704(t6,((C_word*)t0)[5],t5);}}

/* k2741 */
static void C_ccall f_2743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2743,2,t0,t1);}
t2=C_mutate2((C_word*)lf[0]+1 /* (set! ##sys#current-module ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2747,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:73: make-parameter */
t4=*((C_word*)lf[179]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_END_OF_LIST);}

/* a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_5998(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[17],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_5998,6,t0,t1,t2,t3,t4,t5);}
t6=t2;
t7=t3;
t8=t4;
t9=t5;
t10=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_6005,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=((C_word*)t0)[4],a[6]=t9,a[7]=t7,a[8]=t8,a[9]=t1,a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],a[12]=((C_word*)t0)[7],a[13]=((C_word*)t0)[8],a[14]=((C_word*)t0)[9],a[15]=((C_word*)t0)[10],a[16]=((C_word*)t0)[11],tmp=(C_word)a,a+=17,tmp);
/* modules.scm:612: c */
t11=((C_word*)t0)[8];
((C_proc4)C_fast_retrieve_proc(t11))(4,t11,t10,((C_word*)t0)[12],((C_word*)t0)[4]);}

/* k2745 in k2741 */
static void C_ccall f_2747(C_word c,C_word t0,C_word t1){
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
C_word ab[110],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2747,2,t0,t1);}
t2=C_mutate2((C_word*)lf[1]+1 /* (set! ##sys#module-alias-environment ...) */,t1);
t3=C_mutate2(&lf[2] /* (set! module-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2761,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[5]+1 /* (set! module-undefined-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2842,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[6]+1 /* (set! set-module-undefined-list! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2851,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[8]+1 /* (set! ##sys#module-name ...) */,lf[2]);
t7=C_mutate2((C_word*)lf[9]+1 /* (set! ##sys#module-exports ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2987,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[13]+1 /* (set! ##sys#register-module-alias ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3011,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[14]+1 /* (set! ##sys#with-module-aliases ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3029,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[18]+1 /* (set! ##sys#resolve-module-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3113,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[21]+1 /* (set! ##sys#find-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3156,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_mutate2((C_word*)lf[24]+1 /* (set! ##sys#switch-module ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3210,a[2]=t13,a[3]=((C_word)li14),tmp=(C_word)a,a+=4,tmp));
t15=C_mutate2((C_word*)lf[28]+1 /* (set! ##sys#add-to-export-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3263,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2((C_word*)lf[31]+1 /* (set! ##sys#toplevel-definition-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3352,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate2((C_word*)lf[32]+1 /* (set! ##sys#register-meta-expression ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3355,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate2((C_word*)lf[34]+1 /* (set! check-for-redef ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3375,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate2((C_word*)lf[38]+1 /* (set! ##sys#register-export ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3396,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate2((C_word*)lf[43]+1 /* (set! ##sys#register-syntax-export ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3485,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate2((C_word*)lf[46]+1 /* (set! ##sys#register-undefined ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3566,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate2((C_word*)lf[47]+1 /* (set! ##sys#register-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3632,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate2((C_word*)lf[48]+1 /* (set! ##sys#mark-imported-symbols ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3682,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate2(&lf[50] /* (set! merge-se ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4010,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate2((C_word*)lf[51]+1 /* (set! ##sys#compiled-module-registration ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4062,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate2((C_word*)lf[60]+1 /* (set! ##sys#register-compiled-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4448,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate2((C_word*)lf[67]+1 /* (set! ##sys#primitive-alias ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4863,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate2((C_word*)lf[72]+1 /* (set! ##sys#register-primitive-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4882,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate2((C_word*)lf[42]+1 /* (set! ##sys#find-export ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5051,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate2((C_word*)lf[74]+1 /* (set! ##sys#finalize-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5129,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t31=C_set_block_item(lf[22] /* ##sys#module-table */,0,C_SCHEME_END_OF_LIST);
t32=C_mutate2((C_word*)lf[99]+1 /* (set! ##sys#find-module/import-library ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5740,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate2((C_word*)lf[108]+1 /* (set! ##sys#expand-import ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5836,a[2]=((C_word)li110),tmp=(C_word)a,a+=3,tmp));
t34=C_mutate2((C_word*)lf[41]+1 /* (set! ##sys#module-rename ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7096,a[2]=((C_word)li111),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate2((C_word*)lf[137]+1 /* (set! ##sys#alias-global-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7114,a[2]=((C_word)li115),tmp=(C_word)a,a+=3,tmp));
t36=C_mutate2((C_word*)lf[140]+1 /* (set! ##sys#register-interface ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7224,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate2((C_word*)lf[142]+1 /* (set! ##sys#validate-exports ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7232,a[2]=((C_word)li121),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate2((C_word*)lf[153]+1 /* (set! ##sys#register-functor ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7437,a[2]=((C_word)li122),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate2((C_word*)lf[155]+1 /* (set! ##sys#instantiate-functor ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7453,a[2]=((C_word)li128),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate2((C_word*)lf[159]+1 /* (set! ##sys#match-functor-argument ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7669,a[2]=((C_word)li132),tmp=(C_word)a,a+=3,tmp));
t41=lf[167];
t42=*((C_word*)lf[168]+1);
t43=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7827,a[2]=((C_word*)t0)[2],a[3]=t42,a[4]=t41,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:910: ##sys#register-primitive-module */
t44=*((C_word*)lf[72]+1);
((C_proc5)(void*)(*((C_word*)t44+1)))(5,t44,t43,lf[178],t41,*((C_word*)lf[168]+1));}

/* k5363 in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5365,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[16]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5371,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5472,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=((C_word*)t0)[8],a[5]=((C_word)li61),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_5472(t7,t3,t1);}

/* k6683 in g1689 in k6644 in k6632 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6685(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
if(C_truep(t4)){
t5=C_i_cdr(t2);
t6=C_eqp(t4,t5);
if(C_truep(t6)){
t7=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_FALSE);}
else{
/* modules.scm:696: ##sys#notice */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[125]+1)))(4,*((C_word*)lf[125]+1),((C_word*)t0)[4],lf[126],((C_word*)t0)[2]);}}
else{
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k6879 in k6760 in k6732 in k6689 in k6644 in k6632 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t3=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(11),t1);}

/* map-loop1124 in finalize-module in k2745 in k2741 */
static void C_fcall f_5704(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_save_and_reclaim((void*)trf_5704,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5733,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=C_i_car(t4);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5155,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:446: ##sys#macro-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(2,*((C_word*)lf[25]+1),t8);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5375 in k5372 in k5369 in k5363 in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5377(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5377,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5378,a[2]=((C_word*)t0)[2],a[3]=((C_word)li59),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[3],lf[30]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5400,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5441,a[2]=t6,a[3]=t2,a[4]=((C_word)li60),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_5441(t8,t4,((C_word*)t0)[3]);}

/* k5372 in k5369 in k5363 in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5374,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5377,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* modules.scm:529: ##sys#mark-imported-symbols */
t4=*((C_word*)lf[48]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}

/* g1294 in k5375 in k5372 in k5369 in k5363 in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_fcall f_5378(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5378,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5382,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cadr(t2);
/* modules.scm:532: merge-se */
f_4010(t3,C_a_i_list(&a,2,t4,((C_word*)t0)[2]));}

/* k6890 in k6760 in k6732 in k6689 in k6644 in k6632 in a6629 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t3=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(2),t1);}

/* k5369 in k5363 in k5331 in k5328 in k5322 in k5168 in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5371,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5374,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5466,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:526: ##sys#macro-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(2,*((C_word*)lf[25]+1),t4);}

/* k5582 in loop in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_fcall f_5584(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5584,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_5568(t3,C_a_i_cons(&a,2,((C_word*)t0)[4],t2));}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5634,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:470: ##sys#current-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(2,*((C_word*)lf[26]+1),t2);}}

/* a6623 in g1654 in k6615 in k6612 in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6624,2,t0,t1);}
/* modules.scm:677: import-spec */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5932(t2,t1,((C_word*)t0)[3]);}

/* k5579 in loop in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_ccall f_5581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5581,2,t0,t1);}
t2=((C_word*)t0)[2];
f_5568(t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k5594 in k5632 in k5582 in loop in k5165 in k5162 in finalize-module in k2745 in k2741 */
static void C_fcall f_5596(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5596,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_5568(t3,C_a_i_cons(&a,2,((C_word*)t0)[4],t2));}
else{
if(C_truep(((C_word*)t0)[5])){
/* modules.scm:483: ##sys#module-rename */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[6],((C_word*)t0)[4],((C_word*)t0)[7]);}
else{
t2=C_set_block_item(((C_word*)t0)[8],0,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5612,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5616,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5620,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:479: symbol->string */
t6=*((C_word*)lf[92]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[7]);}}}

/* k6258 in map-loop1501 in k6134 in k6131 in k6003 in a5997 in k5958 in k5949 in import-spec in k5850 in k5847 in k5844 in k5841 in k5838 in expand-import in k2745 in k2741 */
static void C_ccall f_6260(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6260,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6231(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6231(t6,((C_word*)t0)[5],t5);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[433] = {
{"f_7646:modules_2escm",(void*)f_7646},
{"f_6646:modules_2escm",(void*)f_6646},
{"f_6647:modules_2escm",(void*)f_6647},
{"f_6464:modules_2escm",(void*)f_6464},
{"f_6270:modules_2escm",(void*)f_6270},
{"f_6273:modules_2escm",(void*)f_6273},
{"f_5568:modules_2escm",(void*)f_5568},
{"f_6278:modules_2escm",(void*)f_6278},
{"f_6844:modules_2escm",(void*)f_6844},
{"f_7851:modules_2escm",(void*)f_7851},
{"f_6470:modules_2escm",(void*)f_6470},
{"f_6617:modules_2escm",(void*)f_6617},
{"f_6474:modules_2escm",(void*)f_6474},
{"f_6618:modules_2escm",(void*)f_6618},
{"f_6478:modules_2escm",(void*)f_6478},
{"f_6614:modules_2escm",(void*)f_6614},
{"f_7669:modules_2escm",(void*)f_7669},
{"f_7871:modules_2escm",(void*)f_7871},
{"f_7657:modules_2escm",(void*)f_7657},
{"f_6496:modules_2escm",(void*)f_6496},
{"f_6630:modules_2escm",(void*)f_6630},
{"f_6634:modules_2escm",(void*)f_6634},
{"f_7222:modules_2escm",(void*)f_7222},
{"f_7224:modules_2escm",(void*)f_7224},
{"f_7680:modules_2escm",(void*)f_7680},
{"f_6809:modules_2escm",(void*)f_6809},
{"f_6807:modules_2escm",(void*)f_6807},
{"f_3507:modules_2escm",(void*)f_3507},
{"f_6803:modules_2escm",(void*)f_6803},
{"f_3504:modules_2escm",(void*)f_3504},
{"f_7219:modules_2escm",(void*)f_7219},
{"f_7673:modules_2escm",(void*)f_7673},
{"f_3119:modules_2escm",(void*)f_3119},
{"f_7842:modules_2escm",(void*)f_7842},
{"f_7844:modules_2escm",(void*)f_7844},
{"f_3113:modules_2escm",(void*)f_3113},
{"f_7478:modules_2escm",(void*)f_7478},
{"f_7833:modules_2escm",(void*)f_7833},
{"f_7693:modules_2escm",(void*)f_7693},
{"f_7836:modules_2escm",(void*)f_7836},
{"f_7839:modules_2escm",(void*)f_7839},
{"f_7830:modules_2escm",(void*)f_7830},
{"f_7461:modules_2escm",(void*)f_7461},
{"f_7468:modules_2escm",(void*)f_7468},
{"f_7497:modules_2escm",(void*)f_7497},
{"f_7499:modules_2escm",(void*)f_7499},
{"f_7282:modules_2escm",(void*)f_7282},
{"f_7809:modules_2escm",(void*)f_7809},
{"f_3573:modules_2escm",(void*)f_3573},
{"f_7824:modules_2escm",(void*)f_7824},
{"f_7827:modules_2escm",(void*)f_7827},
{"f_3587:modules_2escm",(void*)f_3587},
{"f_3580:modules_2escm",(void*)f_3580},
{"f_5520:modules_2escm",(void*)f_5520},
{"f_5906:modules_2escm",(void*)f_5906},
{"f_5358:modules_2escm",(void*)f_5358},
{"f_5324:modules_2escm",(void*)f_5324},
{"f_5333:modules_2escm",(void*)f_5333},
{"f_5330:modules_2escm",(void*)f_5330},
{"f_4062:modules_2escm",(void*)f_4062},
{"f_6231:modules_2escm",(void*)f_6231},
{"f_4052:modules_2escm",(void*)f_4052},
{"f_7054:modules_2escm",(void*)f_7054},
{"f_7241:modules_2escm",(void*)f_7241},
{"f_6448:modules_2escm",(void*)f_6448},
{"f_7083:modules_2escm",(void*)f_7083},
{"f_7235:modules_2escm",(void*)f_7235},
{"f_7232:modules_2escm",(void*)f_7232},
{"f_6456:modules_2escm",(void*)f_6456},
{"f_6451:modules_2escm",(void*)f_6451},
{"f_7071:modules_2escm",(void*)f_7071},
{"f_7073:modules_2escm",(void*)f_7073},
{"f_3027:modules_2escm",(void*)f_3027},
{"f_3029:modules_2escm",(void*)f_3029},
{"f_3485:modules_2escm",(void*)f_3485},
{"f_4093:modules_2escm",(void*)f_4093},
{"f_4097:modules_2escm",(void*)f_4097},
{"f_3033:modules_2escm",(void*)f_3033},
{"f_3034:modules_2escm",(void*)f_3034},
{"f_3038:modules_2escm",(void*)f_3038},
{"f_4085:modules_2escm",(void*)f_4085},
{"f_4089:modules_2escm",(void*)f_4089},
{"f_3232:modules_2escm",(void*)f_3232},
{"f_7437:modules_2escm",(void*)f_7437},
{"f_4951:modules_2escm",(void*)f_4951},
{"f_3893:modules_2escm",(void*)f_3893},
{"f_3245:modules_2escm",(void*)f_3245},
{"f_3472:modules_2escm",(void*)f_3472},
{"f_7039:modules_2escm",(void*)f_7039},
{"f_7609:modules_2escm",(void*)f_7609},
{"f_3257:modules_2escm",(void*)f_3257},
{"f_7453:modules_2escm",(void*)f_7453},
{"f_4781:modules_2escm",(void*)f_4781},
{"f_4787:modules_2escm",(void*)f_4787},
{"f_3498:modules_2escm",(void*)f_3498},
{"f_3495:modules_2escm",(void*)f_3495},
{"f_7104:modules_2escm",(void*)f_7104},
{"f_3461:modules_2escm",(void*)f_3461},
{"f_3279:modules_2escm",(void*)f_3279},
{"f_3468:modules_2escm",(void*)f_3468},
{"f_4129:modules_2escm",(void*)f_4129},
{"f_3280:modules_2escm",(void*)f_3280},
{"f_3856:modules_2escm",(void*)f_3856},
{"f_3288:modules_2escm",(void*)f_3288},
{"f_3409:modules_2escm",(void*)f_3409},
{"f_3406:modules_2escm",(void*)f_3406},
{"f_4510:modules_2escm",(void*)f_4510},
{"f_3223:modules_2escm",(void*)f_3223},
{"f_3220:modules_2escm",(void*)f_3220},
{"f_3879:modules_2escm",(void*)f_3879},
{"f_3226:modules_2escm",(void*)f_3226},
{"f_3457:modules_2escm",(void*)f_3457},
{"f_4101:modules_2escm",(void*)f_4101},
{"f_3041:modules_2escm",(void*)f_3041},
{"f_4500:modules_2escm",(void*)f_4500},
{"f_3048:modules_2escm",(void*)f_3048},
{"toplevel:modules_2escm",(void*)C_modules_toplevel},
{"f_3421:modules_2escm",(void*)f_3421},
{"f_3806:modules_2escm",(void*)f_3806},
{"f_4721:modules_2escm",(void*)f_4721},
{"f_3424:modules_2escm",(void*)f_3424},
{"f_3814:modules_2escm",(void*)f_3814},
{"f_3818:modules_2escm",(void*)f_3818},
{"f_4560:modules_2escm",(void*)f_4560},
{"f_4943:modules_2escm",(void*)f_4943},
{"f_4949:modules_2escm",(void*)f_4949},
{"f_3829:modules_2escm",(void*)f_3829},
{"f_5010:modules_2escm",(void*)f_5010},
{"f_3076:modules_2escm",(void*)f_3076},
{"f_3072:modules_2escm",(void*)f_3072},
{"f_3078:modules_2escm",(void*)f_3078},
{"f_4708:modules_2escm",(void*)f_4708},
{"f_3263:modules_2escm",(void*)f_3263},
{"f_3412:modules_2escm",(void*)f_3412},
{"f_3261:modules_2escm",(void*)f_3261},
{"f_3418:modules_2escm",(void*)f_3418},
{"f_4911:modules_2escm",(void*)f_4911},
{"f_4915:modules_2escm",(void*)f_4915},
{"f_4919:modules_2escm",(void*)f_4919},
{"f_5004:modules_2escm",(void*)f_5004},
{"f_4752:modules_2escm",(void*)f_4752},
{"f_4750:modules_2escm",(void*)f_4750},
{"f_4746:modules_2escm",(void*)f_4746},
{"f_4592:modules_2escm",(void*)f_4592},
{"f_4975:modules_2escm",(void*)f_4975},
{"f_4973:modules_2escm",(void*)f_4973},
{"f_4731:modules_2escm",(void*)f_4731},
{"f_5039:modules_2escm",(void*)f_5039},
{"f_4580:modules_2escm",(void*)f_4580},
{"f_4570:modules_2escm",(void*)f_4570},
{"f_4576:modules_2escm",(void*)f_4576},
{"f_4579:modules_2escm",(void*)f_4579},
{"f_4377:modules_2escm",(void*)f_4377},
{"f_4375:modules_2escm",(void*)f_4375},
{"f_7121:modules_2escm",(void*)f_7121},
{"f_7125:modules_2escm",(void*)f_7125},
{"f_5092:modules_2escm",(void*)f_5092},
{"f_7114:modules_2escm",(void*)f_7114},
{"f_7117:modules_2escm",(void*)f_7117},
{"f_6066:modules_2escm",(void*)f_6066},
{"f_5833:modules_2escm",(void*)f_5833},
{"f_5836:modules_2escm",(void*)f_5836},
{"f_5206:modules_2escm",(void*)f_5206},
{"f_5691:modules_2escm",(void*)f_5691},
{"f_6094:modules_2escm",(void*)f_6094},
{"f_5843:modules_2escm",(void*)f_5843},
{"f_5849:modules_2escm",(void*)f_5849},
{"f_5846:modules_2escm",(void*)f_5846},
{"f_5213:modules_2escm",(void*)f_5213},
{"f_5840:modules_2escm",(void*)f_5840},
{"f_5813:modules_2escm",(void*)f_5813},
{"f_5819:modules_2escm",(void*)f_5819},
{"f_5240:modules_2escm",(void*)f_5240},
{"f_4328:modules_2escm",(void*)f_4328},
{"f_4326:modules_2escm",(void*)f_4326},
{"f_5829:modules_2escm",(void*)f_5829},
{"f_5682:modules_2escm",(void*)f_5682},
{"f_4357:modules_2escm",(void*)f_4357},
{"f_6044:modules_2escm",(void*)f_6044},
{"f_5412:modules_2escm",(void*)f_5412},
{"f_5876:modules_2escm",(void*)f_5876},
{"f_4547:modules_2escm",(void*)f_4547},
{"f_4531:modules_2escm",(void*)f_4531},
{"f_5427:modules_2escm",(void*)f_5427},
{"f_5423:modules_2escm",(void*)f_5423},
{"f_5883:modules_2escm",(void*)f_5883},
{"f_6737:modules_2escm",(void*)f_6737},
{"f_5854:modules_2escm",(void*)f_5854},
{"f_6734:modules_2escm",(void*)f_6734},
{"f_5051:modules_2escm",(void*)f_5051},
{"f_3632:modules_2escm",(void*)f_3632},
{"f_5852:modules_2escm",(void*)f_5852},
{"f_5409:modules_2escm",(void*)f_5409},
{"f_5406:modules_2escm",(void*)f_5406},
{"f_5400:modules_2escm",(void*)f_5400},
{"f_6747:modules_2escm",(void*)f_6747},
{"f_5863:modules_2escm",(void*)f_5863},
{"f_5669:modules_2escm",(void*)f_5669},
{"f_5667:modules_2escm",(void*)f_5667},
{"f_6740:modules_2escm",(void*)f_6740},
{"f_6995:modules_2escm",(void*)f_6995},
{"f_5064:modules_2escm",(void*)f_5064},
{"f_5062:modules_2escm",(void*)f_5062},
{"f_5292:modules_2escm",(void*)f_5292},
{"f_5634:modules_2escm",(void*)f_5634},
{"f_5287:modules_2escm",(void*)f_5287},
{"f_5288:modules_2escm",(void*)f_5288},
{"f_5466:modules_2escm",(void*)f_5466},
{"f_6728:modules_2escm",(void*)f_6728},
{"f_2851:modules_2escm",(void*)f_2851},
{"f_5620:modules_2escm",(void*)f_5620},
{"f_6540:modules_2escm",(void*)f_6540},
{"f_6315:modules_2escm",(void*)f_6315},
{"f_6771:modules_2escm",(void*)f_6771},
{"f_6985:modules_2escm",(void*)f_6985},
{"f_2842:modules_2escm",(void*)f_2842},
{"f_5612:modules_2escm",(void*)f_5612},
{"f_6778:modules_2escm",(void*)f_6778},
{"f_5265:modules_2escm",(void*)f_5265},
{"f_5616:modules_2escm",(void*)f_5616},
{"f_7793:modules_2escm",(void*)f_7793},
{"f_7799:modules_2escm",(void*)f_7799},
{"f_6325:modules_2escm",(void*)f_6325},
{"f_6788:modules_2escm",(void*)f_6788},
{"f_7314:modules_2escm",(void*)f_7314},
{"f_6755:modules_2escm",(void*)f_6755},
{"f_6751:modules_2escm",(void*)f_6751},
{"f_6759:modules_2escm",(void*)f_6759},
{"f_3691:modules_2escm",(void*)f_3691},
{"f_6302:modules_2escm",(void*)f_6302},
{"f_6762:modules_2escm",(void*)f_6762},
{"f_6768:modules_2escm",(void*)f_6768},
{"f_6503:modules_2escm",(void*)f_6503},
{"f_6505:modules_2escm",(void*)f_6505},
{"f_5470:modules_2escm",(void*)f_5470},
{"f_5472:modules_2escm",(void*)f_5472},
{"f_6944:modules_2escm",(void*)f_6944},
{"f_7756:modules_2escm",(void*)f_7756},
{"f_6569:modules_2escm",(void*)f_6569},
{"f_6795:modules_2escm",(void*)f_6795},
{"f_6579:modules_2escm",(void*)f_6579},
{"f_7762:modules_2escm",(void*)f_7762},
{"f_7764:modules_2escm",(void*)f_7764},
{"f_6396:modules_2escm",(void*)f_6396},
{"f_6909:modules_2escm",(void*)f_6909},
{"f_6907:modules_2escm",(void*)f_6907},
{"f_6903:modules_2escm",(void*)f_6903},
{"f_7745:modules_2escm",(void*)f_7745},
{"f_7741:modules_2escm",(void*)f_7741},
{"f_7395:modules_2escm",(void*)f_7395},
{"f_6123:modules_2escm",(void*)f_6123},
{"f_7381:modules_2escm",(void*)f_7381},
{"f_3011:modules_2escm",(void*)f_3011},
{"f_7572:modules_2escm",(void*)f_7572},
{"f_7720:modules_2escm",(void*)f_7720},
{"f_7560:modules_2escm",(void*)f_7560},
{"f_3217:modules_2escm",(void*)f_3217},
{"f_3210:modules_2escm",(void*)f_3210},
{"f_5451:modules_2escm",(void*)f_5451},
{"f_7733:modules_2escm",(void*)f_7733},
{"f_7737:modules_2escm",(void*)f_7737},
{"f_5435:modules_2escm",(void*)f_5435},
{"f_5431:modules_2escm",(void*)f_5431},
{"f_5441:modules_2escm",(void*)f_5441},
{"f_7594:modules_2escm",(void*)f_7594},
{"f_7598:modules_2escm",(void*)f_7598},
{"f_3682:modules_2escm",(void*)f_3682},
{"f_5243:modules_2escm",(void*)f_5243},
{"f_5808:modules_2escm",(void*)f_5808},
{"f_5802:modules_2escm",(void*)f_5802},
{"f_5800:modules_2escm",(void*)f_5800},
{"f_5255:modules_2escm",(void*)f_5255},
{"f_6359:modules_2escm",(void*)f_6359},
{"f_5225:modules_2escm",(void*)f_5225},
{"f_5222:modules_2escm",(void*)f_5222},
{"f_5236:modules_2escm",(void*)f_5236},
{"f_5235:modules_2escm",(void*)f_5235},
{"f_5232:modules_2escm",(void*)f_5232},
{"f_6343:modules_2escm",(void*)f_6343},
{"f_4145:modules_2escm",(void*)f_4145},
{"f_7185:modules_2escm",(void*)f_7185},
{"f_3994:modules_2escm",(void*)f_3994},
{"f_4133:modules_2escm",(void*)f_4133},
{"f_6534:modules_2escm",(void*)f_6534},
{"f_4199:modules_2escm",(void*)f_4199},
{"f_3375:modules_2escm",(void*)f_3375},
{"f_7151:modules_2escm",(void*)f_7151},
{"f_3981:modules_2escm",(void*)f_3981},
{"f_4187:modules_2escm",(void*)f_4187},
{"f_3382:modules_2escm",(void*)f_3382},
{"f_7354:modules_2escm",(void*)f_7354},
{"f_4867:modules_2escm",(void*)f_4867},
{"f_3154:modules_2escm",(void*)f_3154},
{"f_3156:modules_2escm",(void*)f_3156},
{"f_4177:modules_2escm",(void*)f_4177},
{"f_3396:modules_2escm",(void*)f_3396},
{"f_4863:modules_2escm",(void*)f_4863},
{"f_7132:modules_2escm",(void*)f_7132},
{"f_7340:modules_2escm",(void*)f_7340},
{"f_3127:modules_2escm",(void*)f_3127},
{"f_4685:modules_2escm",(void*)f_4685},
{"f_4698:modules_2escm",(void*)f_4698},
{"f_4851:modules_2escm",(void*)f_4851},
{"f_7539:modules_2escm",(void*)f_7539},
{"f_4675:modules_2escm",(void*)f_4675},
{"f_4665:modules_2escm",(void*)f_4665},
{"f_3918:modules_2escm",(void*)f_3918},
{"f_3352:modules_2escm",(void*)f_3352},
{"f_3350:modules_2escm",(void*)f_3350},
{"f_7008:modules_2escm",(void*)f_7008},
{"f_3355:modules_2escm",(void*)f_3355},
{"f_3359:modules_2escm",(void*)f_3359},
{"f_3962:modules_2escm",(void*)f_3962},
{"f_4025:modules_2escm",(void*)f_4025},
{"f_4895:modules_2escm",(void*)f_4895},
{"f_4406:modules_2escm",(void*)f_4406},
{"f_3933:modules_2escm",(void*)f_3933},
{"f_4014:modules_2escm",(void*)f_4014},
{"f_4010:modules_2escm",(void*)f_4010},
{"f_3901:modules_2escm",(void*)f_3901},
{"f8321:modules_2escm",(void*)f8321},
{"f_3905:modules_2escm",(void*)f_3905},
{"f_4004:modules_2escm",(void*)f_4004},
{"f_7096:modules_2escm",(void*)f_7096},
{"f_3302:modules_2escm",(void*)f_3302},
{"f_3305:modules_2escm",(void*)f_3305},
{"f_3951:modules_2escm",(void*)f_3951},
{"f_3312:modules_2escm",(void*)f_3312},
{"f_3316:modules_2escm",(void*)f_3316},
{"f_4241:modules_2escm",(void*)f_4241},
{"f_3322:modules_2escm",(void*)f_3322},
{"f_3727:modules_2escm",(void*)f_3727},
{"f_3737:modules_2escm",(void*)f_3737},
{"f_4605:modules_2escm",(void*)f_4605},
{"f_4606:modules_2escm",(void*)f_4606},
{"f_4478:modules_2escm",(void*)f_4478},
{"f_5129:modules_2escm",(void*)f_5129},
{"f_4652:modules_2escm",(void*)f_4652},
{"f_4822:modules_2escm",(void*)f_4822},
{"f_4816:modules_2escm",(void*)f_4816},
{"f_4640:modules_2escm",(void*)f_4640},
{"f_4889:modules_2escm",(void*)f_4889},
{"f_4270:modules_2escm",(void*)f_4270},
{"f_4882:modules_2escm",(void*)f_4882},
{"f_4622:modules_2escm",(void*)f_4622},
{"f_4639:modules_2escm",(void*)f_4639},
{"f_7018:modules_2escm",(void*)f_7018},
{"f_4876:modules_2escm",(void*)f_4876},
{"f_5195:modules_2escm",(void*)f_5195},
{"f_5192:modules_2escm",(void*)f_5192},
{"f_5198:modules_2escm",(void*)f_5198},
{"f_5171:modules_2escm",(void*)f_5171},
{"f_5170:modules_2escm",(void*)f_5170},
{"f_5185:modules_2escm",(void*)f_5185},
{"f_5189:modules_2escm",(void*)f_5189},
{"f_5932:modules_2escm",(void*)f_5932},
{"f_5930:modules_2escm",(void*)f_5930},
{"f_6159:modules_2escm",(void*)f_6159},
{"f_5300:modules_2escm",(void*)f_5300},
{"f_5310:modules_2escm",(void*)f_5310},
{"f_2987:modules_2escm",(void*)f_2987},
{"f_6136:modules_2escm",(void*)f_6136},
{"f_6133:modules_2escm",(void*)f_6133},
{"f_4448:modules_2escm",(void*)f_4448},
{"f_4446:modules_2escm",(void*)f_4446},
{"f_5910:modules_2escm",(void*)f_5910},
{"f_6147:modules_2escm",(void*)f_6147},
{"f_5788:modules_2escm",(void*)f_5788},
{"f_6142:modules_2escm",(void*)f_6142},
{"f_5784:modules_2escm",(void*)f_5784},
{"f_5781:modules_2escm",(void*)f_5781},
{"f_4223:modules_2escm",(void*)f_4223},
{"f_4239:modules_2escm",(void*)f_4239},
{"f_5537:modules_2escm",(void*)f_5537},
{"f_5796:modules_2escm",(void*)f_5796},
{"f_3513:modules_2escm",(void*)f_3513},
{"f_5975:modules_2escm",(void*)f_5975},
{"f_5791:modules_2escm",(void*)f_5791},
{"f_5971:modules_2escm",(void*)f_5971},
{"f_4424:modules_2escm",(void*)f_4424},
{"f_5767:modules_2escm",(void*)f_5767},
{"f_5763:modules_2escm",(void*)f_5763},
{"f_5501:modules_2escm",(void*)f_5501},
{"f_5988:modules_2escm",(void*)f_5988},
{"f_5762:modules_2escm",(void*)f_5762},
{"f_5777:modules_2escm",(void*)f_5777},
{"f_5774:modules_2escm",(void*)f_5774},
{"f_5510:modules_2escm",(void*)f_5510},
{"f_5770:modules_2escm",(void*)f_5770},
{"f_5155:modules_2escm",(void*)f_5155},
{"f_5951:modules_2escm",(void*)f_5951},
{"f_5164:modules_2escm",(void*)f_5164},
{"f_3547:modules_2escm",(void*)f_3547},
{"f_5744:modules_2escm",(void*)f_5744},
{"f_5967:modules_2escm",(void*)f_5967},
{"f_5747:modules_2escm",(void*)f_5747},
{"f_5740:modules_2escm",(void*)f_5740},
{"f_5167:modules_2escm",(void*)f_5167},
{"f_5960:modules_2escm",(void*)f_5960},
{"f_6691:modules_2escm",(void*)f_6691},
{"f_6692:modules_2escm",(void*)f_6692},
{"f_5759:modules_2escm",(void*)f_5759},
{"f_3551:modules_2escm",(void*)f_3551},
{"f_5753:modules_2escm",(void*)f_5753},
{"f_6005:modules_2escm",(void*)f_6005},
{"f_2761:modules_2escm",(void*)f_2761},
{"f_6008:modules_2escm",(void*)f_6008},
{"f_5572:modules_2escm",(void*)f_5572},
{"f_5750:modules_2escm",(void*)f_5750},
{"f_5382:modules_2escm",(void*)f_5382},
{"f_3566:modules_2escm",(void*)f_3566},
{"f_6014:modules_2escm",(void*)f_6014},
{"f_6019:modules_2escm",(void*)f_6019},
{"f_6412:modules_2escm",(void*)f_6412},
{"f_5733:modules_2escm",(void*)f_5733},
{"f_2743:modules_2escm",(void*)f_2743},
{"f_5998:modules_2escm",(void*)f_5998},
{"f_2747:modules_2escm",(void*)f_2747},
{"f_5365:modules_2escm",(void*)f_5365},
{"f_6685:modules_2escm",(void*)f_6685},
{"f_6881:modules_2escm",(void*)f_6881},
{"f_5704:modules_2escm",(void*)f_5704},
{"f_5377:modules_2escm",(void*)f_5377},
{"f_5374:modules_2escm",(void*)f_5374},
{"f_5378:modules_2escm",(void*)f_5378},
{"f_6892:modules_2escm",(void*)f_6892},
{"f_5371:modules_2escm",(void*)f_5371},
{"f_5584:modules_2escm",(void*)f_5584},
{"f_6624:modules_2escm",(void*)f_6624},
{"f_5581:modules_2escm",(void*)f_5581},
{"f_5596:modules_2escm",(void*)f_5596},
{"f_6260:modules_2escm",(void*)f_6260},
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
S|  for-each		14
S|  map		21
o|eliminated procedure checks: 301 
o|specializations:
o|  2 (cddr (pair * pair))
o|  1 (< fixnum fixnum)
o|  2 (string-append string string)
o|  1 (= fixnum fixnum)
o|  6 (##sys#check-list (or pair list) *)
o|  2 (cdar (pair pair *))
o|  1 (caar (pair pair *))
o|  27 (car pair)
o|  49 (cdr pair)
o|safe globals: (lookup) 
o|Removed `not' forms: 7 
o|removed side-effect free assignment to unused variable: module? 
o|contracted procedure: "(modules.scm:118) %make-module" 
o|inlining procedure: k3080 
o|contracted procedure: "(modules.scm:127) g403412" 
o|inlining procedure: k3080 
o|inlining procedure: k3132 
o|inlining procedure: k3132 
o|inlining procedure: k3124 
o|inlining procedure: k3124 
o|inlining procedure: k3173 
o|inlining procedure: k3173 
o|inlining procedure: k3224 
o|inlining procedure: k3224 
o|inlining procedure: k3285 
o|inlining procedure: k3285 
o|inlining procedure: k3268 
o|inlining procedure: k3324 
o|inlining procedure: k3324 
o|inlining procedure: k3268 
o|inlining procedure: k3360 
o|contracted procedure: "(modules.scm:181) set-module-meta-expressions!" 
o|inlining procedure: k3360 
o|inlining procedure: k3386 
o|inlining procedure: k3386 
o|inlining procedure: k3398 
o|inlining procedure: k3398 
o|inlining procedure: k3487 
o|contracted procedure: "(modules.scm:223) set-module-defined-syntax-list!" 
o|inlining procedure: k3487 
o|inlining procedure: k3568 
o|inlining procedure: k3582 
o|inlining procedure: k3582 
o|inlining procedure: k3625 
o|inlining procedure: k3625 
o|inlining procedure: k3568 
o|inlining procedure: k3729 
o|contracted procedure: "(modules.scm:244) g609616" 
o|inlining procedure: k3686 
o|contracted procedure: "(modules.scm:249) g622623" 
o|inlining procedure: k3686 
o|inlining procedure: k3729 
o|merged explicitly consed rest parameter: ses687 
o|inlining procedure: k4027 
o|inlining procedure: k4027 
o|inlining procedure: k4131 
o|inlining procedure: k4131 
o|inlining procedure: k4147 
o|inlining procedure: k4147 
o|inlining procedure: k4207 
o|inlining procedure: k4207 
o|inlining procedure: k4243 
o|inlining procedure: k4243 
o|inlining procedure: k4330 
o|contracted procedure: "(modules.scm:318) g753762" 
o|inlining procedure: k4282 
o|inlining procedure: k4282 
o|inlining procedure: k4330 
o|inlining procedure: k4379 
o|inlining procedure: k4379 
o|inlining procedure: k4481 
o|contracted procedure: "(modules.scm:357) find-reexport847" 
o|inlining procedure: k4459 
o|inlining procedure: k4459 
o|inlining procedure: k4481 
o|consed rest parameter at call site: "(modules.scm:378) merge-se" 1 
o|inlining procedure: k4597 
o|consed rest parameter at call site: "(modules.scm:378) merge-se" 1 
o|inlining procedure: k4597 
o|consed rest parameter at call site: "(modules.scm:378) merge-se" 1 
o|inlining procedure: k4608 
o|consed rest parameter at call site: "(modules.scm:383) merge-se" 1 
o|inlining procedure: k4627 
o|consed rest parameter at call site: "(modules.scm:383) merge-se" 1 
o|inlining procedure: k4627 
o|consed rest parameter at call site: "(modules.scm:383) merge-se" 1 
o|inlining procedure: k4608 
o|consed rest parameter at call site: "(modules.scm:387) merge-se" 1 
o|inlining procedure: k4657 
o|consed rest parameter at call site: "(modules.scm:387) merge-se" 1 
o|inlining procedure: k4657 
o|consed rest parameter at call site: "(modules.scm:387) merge-se" 1 
o|inlining procedure: k4677 
o|inlining procedure: k4677 
o|inlining procedure: k4700 
o|inlining procedure: k4700 
o|inlining procedure: k4723 
o|inlining procedure: k4723 
o|consed rest parameter at call site: "(modules.scm:371) merge-se" 1 
o|inlining procedure: k4754 
o|contracted procedure: "(modules.scm:367) g916925" 
o|inlining procedure: k4754 
o|inlining procedure: k4789 
o|contracted procedure: "(modules.scm:361) g888897" 
o|inlining procedure: k4513 
o|inlining procedure: k4513 
o|inlining procedure: k4789 
o|inlining procedure: k4824 
o|inlining procedure: k4824 
o|contracted procedure: "(modules.scm:396) g10091010" 
o|consed rest parameter at call site: "(modules.scm:419) merge-se" 1 
o|inlining procedure: k4953 
o|inlining procedure: k4953 
o|inlining procedure: k4977 
o|inlining procedure: k4977 
o|inlining procedure: k5012 
o|contracted procedure: "(modules.scm:403) g10391048" 
o|inlining procedure: k4931 
o|inlining procedure: k4931 
o|inlining procedure: k5012 
o|inlining procedure: k5066 
o|inlining procedure: k5066 
o|inlining procedure: k5078 
o|inlining procedure: k5093 
o|inlining procedure: k5093 
o|inlining procedure: k5078 
o|inlining procedure: k5177 
o|inlining procedure: k5177 
o|inlining procedure: k5214 
o|inlining procedure: k5214 
o|inlining procedure: k5257 
o|inlining procedure: k5257 
o|substituted constant variable: a5277 
o|contracted procedure: "(modules.scm:502) g12131214" 
o|inlining procedure: k5302 
o|inlining procedure: k5302 
o|consed rest parameter at call site: "(modules.scm:532) merge-se" 1 
o|consed rest parameter at call site: "(modules.scm:550) merge-se" 1 
o|consed rest parameter at call site: "(modules.scm:547) merge-se" 1 
o|contracted procedure: "(modules.scm:543) set-module-vexports!" 
o|inlining procedure: k5443 
o|inlining procedure: k5443 
o|consed rest parameter at call site: "(modules.scm:525) merge-se" 1 
o|inlining procedure: k5474 
o|contracted procedure: "(modules.scm:520) g12641273" 
o|inlining procedure: k5336 
o|inlining procedure: k5336 
o|inlining procedure: k5474 
o|contracted procedure: "(modules.scm:524) module-indirect-exports" 
o|removed side-effect free assignment to unused variable: indirect?638 
o|inlining procedure: k3819 
o|inlining procedure: k3819 
o|inlining procedure: k3831 
o|inlining procedure: k3831 
o|inlining procedure: k3858 
o|inlining procedure: k3858 
o|inlining procedure: k3916 
o|inlining procedure: k3916 
o|inlining procedure: k3890 
o|inlining procedure: k3890 
o|inlining procedure: k3935 
o|inlining procedure: k3935 
o|inlining procedure: k5512 
o|inlining procedure: k5512 
o|inlining procedure: k5539 
o|inlining procedure: k5539 
o|inlining procedure: k5579 
o|inlining procedure: k5579 
o|contracted procedure: k5606 
o|inlining procedure: k5603 
o|inlining procedure: k5603 
o|consed rest parameter at call site: "(modules.scm:450) merge-se" 1 
o|inlining procedure: k5671 
o|inlining procedure: k5671 
o|inlining procedure: k5706 
o|contracted procedure: "(modules.scm:446) g11301139" 
o|inlining procedure: k5706 
o|inlining procedure: k5748 
o|inlining procedure: k5748 
o|substituted constant variable: a5834 
o|inlining procedure: k5859 
o|inlining procedure: k5859 
o|contracted procedure: "(modules.scm:587) lookup" 
o|inlining procedure: k2726 
o|inlining procedure: k2726 
o|contracted procedure: "(modules.scm:60) g229230" 
o|inlining procedure: k5865 
o|inlining procedure: k5865 
o|inlining procedure: k5884 
o|inlining procedure: k5884 
o|inlining procedure: k5934 
o|inlining procedure: k5934 
o|inlining procedure: k5955 
o|inlining procedure: k5955 
o|inlining procedure: k6000 
o|inlining procedure: k6021 
o|inlining procedure: k6021 
o|inlining procedure: k6063 
o|inlining procedure: k6063 
o|inlining procedure: k6096 
o|inlining procedure: k6096 
o|inlining procedure: k6000 
o|inlining procedure: k6149 
o|inlining procedure: k6161 
o|inlining procedure: k6161 
o|inlining procedure: k6149 
o|inlining procedure: k6233 
o|inlining procedure: k6233 
o|inlining procedure: k6265 
o|inlining procedure: k6280 
o|inlining procedure: k6317 
o|contracted procedure: "(modules.scm:642) g15641571" 
o|inlining procedure: k6317 
o|inlining procedure: k6340 
o|inlining procedure: k6340 
o|inlining procedure: k6280 
o|inlining procedure: k6265 
o|inlining procedure: k6507 
o|inlining procedure: k6507 
o|inlining procedure: k6542 
o|inlining procedure: k6542 
o|inlining procedure: k6580 
o|inlining procedure: k6580 
o|substituted constant variable: a6607 
o|inlining procedure: k6652 
o|inlining procedure: k6662 
o|contracted procedure: k6668 
o|inlining procedure: k6662 
o|inlining procedure: k6652 
o|inlining procedure: k6697 
o|contracted procedure: k6703 
o|inlining procedure: k6697 
o|consed rest parameter at call site: "(modules.scm:725) merge-se" 1 
o|inlining procedure: k6811 
o|inlining procedure: k6811 
o|inlining procedure: k6846 
o|inlining procedure: k6846 
o|inlining procedure: k6911 
o|inlining procedure: k6911 
o|inlining procedure: k6946 
o|inlining procedure: k6946 
o|inlining procedure: k6987 
o|inlining procedure: k6987 
o|inlining procedure: k7010 
o|inlining procedure: k7010 
o|inlining procedure: k7030 
o|contracted procedure: "(modules.scm:680) set-module-meta-import-forms!" 
o|inlining procedure: k7030 
o|contracted procedure: "(modules.scm:683) set-module-import-forms!" 
o|inlining procedure: k7075 
o|inlining procedure: k7075 
o|inlining procedure: k7122 
o|inlining procedure: k7122 
o|inlining procedure: k7146 
o|inlining procedure: k7146 
o|contracted procedure: "(modules.scm:739) g18941895" 
o|inlining procedure: k7168 
o|inlining procedure: k7168 
o|inlining procedure: k7193 
o|inlining procedure: k7193 
o|contracted procedure: "(modules.scm:762) g19191920" 
o|contracted procedure: "(modules.scm:753) g19001901" 
o|contracted procedure: "(modules.scm:749) g18901891" 
o|contracted procedure: "(modules.scm:767) g19281929" 
o|merged explicitly consed rest parameter: args1942 
o|inlining procedure: k7248 
o|inlining procedure: k7248 
o|consed rest parameter at call site: "(modules.scm:775) err1940" 1 
o|contracted procedure: "(modules.scm:774) g19471948" 
o|inlining procedure: k7254 
o|inlining procedure: k7254 
o|contracted procedure: k7272 
o|inlining procedure: k7269 
o|inlining procedure: k7284 
o|inlining procedure: k7284 
o|contracted procedure: k7293 
o|inlining procedure: k7302 
o|inlining procedure: k7302 
o|contracted procedure: k7320 
o|inlining procedure: k7326 
o|inlining procedure: k7326 
o|inlining procedure: k7349 
o|inlining procedure: k7349 
o|consed rest parameter at call site: "(modules.scm:795) err1940" 1 
o|inlining procedure: k7383 
o|inlining procedure: k7383 
o|consed rest parameter at call site: "(modules.scm:800) err1940" 1 
o|consed rest parameter at call site: "(modules.scm:789) err1940" 1 
o|consed rest parameter at call site: "(modules.scm:784) err1940" 1 
o|inlining procedure: k7269 
o|consed rest parameter at call site: "(modules.scm:779) err1940" 1 
o|contracted procedure: "(modules.scm:803) g19781979" 
o|merged explicitly consed rest parameter: args1993 
o|consed rest parameter at call site: "(modules.scm:814) err1992" 1 
o|inlining procedure: k7501 
o|inlining procedure: k7501 
o|inlining procedure: k7553 
o|inlining procedure: k7553 
o|inlining procedure: k7562 
o|inlining procedure: k7574 
o|inlining procedure: k7574 
o|inlining procedure: k7562 
o|consed rest parameter at call site: "(modules.scm:809) err1992" 1 
o|contracted procedure: "(modules.scm:806) g19881989" 
o|inlining procedure: k7674 
o|inlining procedure: k7685 
o|inlining procedure: k7685 
o|inlining procedure: k7674 
o|inlining procedure: k7766 
o|contracted procedure: "(modules.scm:869) g20912100" 
o|substituted constant variable: a7752 
o|inlining procedure: k7766 
o|inlining procedure: k7801 
o|inlining procedure: k7801 
o|propagated global variable: r4rs-syntax2112 ##sys#default-macro-environment 
o|replaced variables: 813 
o|removed binding forms: 393 
o|substituted constant variable: defined-list246 
o|substituted constant variable: exist-list247 
o|substituted constant variable: defined-syntax-list248 
o|substituted constant variable: undefined-list249 
o|substituted constant variable: import-forms250 
o|substituted constant variable: meta-import-forms251 
o|substituted constant variable: meta-expressions252 
o|substituted constant variable: saved-environments256 
o|substituted constant variable: r33617897 
o|substituted constant variable: r33877899 
o|removed call to pure procedure with unused result: "(modules.scm:202) void" 
o|removed call to pure procedure with unused result: "(modules.scm:217) void" 
o|substituted constant variable: r36267909 
o|substituted constant variable: r36267909 
o|substituted constant variable: prop625 
o|substituted constant variable: val626 
o|removed call to pure procedure with unused result: "(modules.scm:248) void" 
o|removed call to pure procedure with unused result: "(modules.scm:298) void" 
o|substituted constant variable: r40287916 
o|removed call to pure procedure with unused result: "(modules.scm:295) void" 
o|substituted constant variable: r41327918 
o|substituted constant variable: r41327918 
o|substituted constant variable: r41487922 
o|removed call to pure procedure with unused result: "(modules.scm:331) void" 
o|substituted constant variable: r45987940 
o|substituted constant variable: r45987940 
o|substituted constant variable: r46287945 
o|substituted constant variable: r46287945 
o|substituted constant variable: r46587950 
o|substituted constant variable: r46587950 
o|contracted procedure: "(modules.scm:355) g860869" 
o|substituted constant variable: prop1012 
o|substituted constant variable: r50677974 
o|substituted constant variable: prop1216 
o|removed call to pure procedure with unused result: "(modules.scm:531) void" 
o|removed call to pure procedure with unused result: "(modules.scm:536) void" 
o|substituted constant variable: r38207994 
o|substituted constant variable: r38327996 
o|converted assignments to bindings: (warn639) 
o|substituted constant variable: r55408010 
o|removed call to pure procedure with unused result: "(modules.scm:472) void" 
o|inlining procedure: k5579 
o|substituted constant variable: r56048017 
o|substituted constant variable: r56728018 
o|inlining procedure: k5748 
o|substituted constant variable: se219 
o|substituted constant variable: prop232 
o|converted assignments to bindings: (ren1594) 
o|substituted constant variable: r65818065 
o|substituted constant variable: r66638068 
o|substituted constant variable: r66538069 
o|substituted constant variable: r66988071 
o|removed call to pure procedure with unused result: "(modules.scm:726) void" 
o|removed call to pure procedure with unused result: "(modules.scm:688) void" 
o|removed call to pure procedure with unused result: "(modules.scm:687) void" 
o|removed call to pure procedure with unused result: "(modules.scm:686) void" 
o|removed call to pure procedure with unused result: "(modules.scm:742) void" 
o|removed call to pure procedure with unused result: "(modules.scm:750) void" 
o|removed call to pure procedure with unused result: "(modules.scm:754) void" 
o|substituted constant variable: prop1922 
o|removed call to pure procedure with unused result: "(modules.scm:757) void" 
o|substituted constant variable: prop1903 
o|substituted constant variable: prop1893 
o|converted assignments to bindings: (mrename1874) 
o|substituted constant variable: prop1931 
o|substituted constant variable: prop1950 
o|substituted constant variable: r72858101 
o|substituted constant variable: prop1981 
o|substituted constant variable: r75548114 
o|substituted constant variable: r75548114 
o|substituted constant variable: r75758119 
o|converted assignments to bindings: (merr2000) 
o|converted assignments to bindings: (err1992) 
o|substituted constant variable: prop1991 
o|simplifications: ((let . 5)) 
o|replaced variables: 48 
o|removed binding forms: 840 
o|contracted procedure: k3428 
o|contracted procedure: k3508 
o|contracted procedure: k3692 
o|contracted procedure: k4015 
o|contracted procedure: k4021 
o|contracted procedure: k4228 
o|inlining procedure: k4870 
o|inlining procedure: k5204 
o|contracted procedure: k5383 
o|contracted procedure: k5401 
o|contracted procedure: k5597 
o|substituted constant variable: r55808201 
o|inlining procedure: k2734 
o|contracted procedure: k6635 
o|contracted procedure: k6638 
o|contracted procedure: k6641 
o|contracted procedure: k7127 
o|inlining procedure: k7130 
o|contracted procedure: k7162 
o|contracted procedure: k7176 
o|contracted procedure: k7190 
o|inlining procedure: k7204 
o|replaced variables: 14 
o|removed binding forms: 117 
o|inlining procedure: k4462 
o|contracted procedure: k5201 
o|contracted procedure: k7154 
o|contracted procedure: k7173 
o|contracted procedure: k7245 
o|contracted procedure: k7457 
o|simplifications: ((let . 1)) 
o|replaced variables: 3 
o|removed binding forms: 41 
o|inlining procedure: "(modules.scm:240) make-module" 
o|inlining procedure: "(modules.scm:370) make-module" 
o|substituted constant variable: r44638421 
o|inlining procedure: "(modules.scm:401) make-module" 
o|replaced variables: 7 
o|removed binding forms: 3 
o|removed conditional forms: 1 
o|removed side-effect free assignment to unused variable: make-module 
o|substituted constant variable: iexports3808507 
o|substituted constant variable: explist3778528 
o|substituted constant variable: explist3778540 
o|substituted constant variable: iexports3808543 
o|inlining procedure: k5856 
o|inlining procedure: k5856 
o|replaced variables: 10 
o|removed binding forms: 5 
o|substituted constant variable: r58578675 
o|substituted constant variable: r58578675 
o|substituted constant variable: r58578675 
o|replaced variables: 3 
o|removed binding forms: 15 
o|removed conditional forms: 1 
o|removed binding forms: 3 
o|simplifications: ((if . 18) (##core#call . 582)) 
o|  call simplifications:
o|    list?	3
o|    fx<
o|    fixnum?
o|    cddr
o|    ##sys#call-with-values	2
o|    ##sys#intern-symbol
o|    string?
o|    number?
o|    cdar	3
o|    length	2
o|    write-char	2
o|    caddr	2
o|    set-car!	4
o|    ##sys#cons	17
o|    ##sys#list	18
o|    apply	4
o|    caar	10
o|    symbol?	18
o|    ##sys#make-structure	4
o|    list	9
o|    not	3
o|    set-cdr!
o|    eq?	20
o|    null?	30
o|    assq	30
o|    cdr	34
o|    memq	6
o|    ##sys#check-list	29
o|    pair?	49
o|    car	43
o|    cadr	15
o|    ##sys#setslot	21
o|    ##sys#slot	73
o|    cons	80
o|    values	6
o|    ##sys#check-structure	25
o|    ##sys#block-ref	13
o|contracted procedure: k2763 
o|contracted procedure: k2772 
o|contracted procedure: k2781 
o|contracted procedure: k2790 
o|contracted procedure: k2799 
o|contracted procedure: k2808 
o|contracted procedure: k2817 
o|contracted procedure: k2826 
o|contracted procedure: k2844 
o|contracted procedure: k2853 
o|contracted procedure: k2862 
o|contracted procedure: k2880 
o|contracted procedure: k2898 
o|contracted procedure: k2916 
o|contracted procedure: k2934 
o|contracted procedure: k2943 
o|contracted procedure: k2952 
o|contracted procedure: k2961 
o|contracted procedure: k2970 
o|contracted procedure: k2979 
o|contracted procedure: k3021 
o|contracted procedure: k3017 
o|contracted procedure: k3067 
o|contracted procedure: k3083 
o|contracted procedure: k3086 
o|contracted procedure: k3097 
o|contracted procedure: k3109 
o|contracted procedure: k3060 
o|contracted procedure: k3064 
o|contracted procedure: k3121 
o|contracted procedure: k3129 
o|contracted procedure: k3135 
o|contracted procedure: k3145 
o|contracted procedure: k3203 
o|contracted procedure: k3158 
o|contracted procedure: k3197 
o|contracted procedure: k3161 
o|contracted procedure: k3191 
o|contracted procedure: k3164 
o|contracted procedure: k3185 
o|contracted procedure: k3167 
o|contracted procedure: k3170 
o|contracted procedure: k3212 
o|contracted procedure: k3239 
o|contracted procedure: k3271 
o|contracted procedure: k3282 
o|contracted procedure: k3291 
o|contracted procedure: k3297 
o|contracted procedure: k3327 
o|contracted procedure: k3337 
o|contracted procedure: k3341 
o|contracted procedure: k3367 
o|contracted procedure: k2907 
o|contracted procedure: k3377 
o|contracted procedure: k3383 
o|contracted procedure: k3401 
o|contracted procedure: k3413 
o|contracted procedure: k3439 
o|contracted procedure: k3435 
o|contracted procedure: k3447 
o|contracted procedure: k3490 
o|contracted procedure: k3522 
o|contracted procedure: k3518 
o|contracted procedure: k2835 
o|contracted procedure: k3537 
o|contracted procedure: k3533 
o|contracted procedure: k3552 
o|contracted procedure: k3574 
o|contracted procedure: k3596 
o|contracted procedure: k3592 
o|contracted procedure: k3607 
o|contracted procedure: k3603 
o|contracted procedure: k3617 
o|contracted procedure: k3625 
o|contracted procedure: k3675 
o|contracted procedure: k3634 
o|contracted procedure: k3669 
o|contracted procedure: k3637 
o|contracted procedure: k3663 
o|contracted procedure: k3640 
o|contracted procedure: k3657 
o|contracted procedure: k3643 
o|contracted procedure: k3646 
o|contracted procedure: k3654 
o|contracted procedure: k3650 
o|contracted procedure: k3720 
o|contracted procedure: k3732 
o|contracted procedure: k3742 
o|contracted procedure: k3746 
o|contracted procedure: k3717 
o|contracted procedure: k3702 
o|contracted procedure: k3709 
o|contracted procedure: k4030 
o|contracted procedure: k4056 
o|contracted procedure: k4036 
o|contracted procedure: k4111 
o|contracted procedure: k4321 
o|contracted procedure: k4115 
o|contracted procedure: k4119 
o|contracted procedure: k4201 
o|contracted procedure: k4204 
o|contracted procedure: k4210 
o|contracted procedure: k4217 
o|contracted procedure: k4234 
o|contracted procedure: k4123 
o|contracted procedure: k4107 
o|contracted procedure: k4103 
o|contracted procedure: k4134 
o|contracted procedure: k4150 
o|contracted procedure: k4195 
o|contracted procedure: k4156 
o|contracted procedure: k4164 
o|contracted procedure: k4181 
o|contracted procedure: k4171 
o|contracted procedure: k4246 
o|contracted procedure: k4249 
o|contracted procedure: k4260 
o|contracted procedure: k4272 
o|contracted procedure: k4333 
o|contracted procedure: k4336 
o|contracted procedure: k4347 
o|contracted procedure: k4359 
o|contracted procedure: k4315 
o|contracted procedure: k4285 
o|contracted procedure: k4292 
o|contracted procedure: k4303 
o|contracted procedure: k4307 
o|contracted procedure: k4370 
o|contracted procedure: k4382 
o|contracted procedure: k4385 
o|contracted procedure: k4396 
o|contracted procedure: k4408 
o|contracted procedure: k4411 
o|contracted procedure: k4418 
o|contracted procedure: k4425 
o|contracted procedure: k4440 
o|contracted procedure: k4436 
o|contracted procedure: k4432 
o|contracted procedure: k4856 
o|contracted procedure: k4450 
o|contracted procedure: k4505 
o|contracted procedure: k4542 
o|contracted procedure: k4565 
o|contracted procedure: k4571 
o|contracted procedure: k4586 
o|contracted procedure: k4594 
o|contracted procedure: k4600 
o|contracted procedure: k4631 
o|contracted procedure: k4611 
o|contracted procedure: k4624 
o|contracted procedure: k4634 
o|contracted procedure: k4646 
o|contracted procedure: k4654 
o|contracted procedure: k4660 
o|contracted procedure: k4671 
o|contracted procedure: k4667 
o|contracted procedure: k4680 
o|contracted procedure: k4690 
o|contracted procedure: k4694 
o|contracted procedure: k4703 
o|contracted procedure: k4713 
o|contracted procedure: k4717 
o|contracted procedure: k4726 
o|contracted procedure: k4736 
o|contracted procedure: k4740 
o|contracted procedure: k4757 
o|contracted procedure: k4760 
o|contracted procedure: k4771 
o|contracted procedure: k4783 
o|contracted procedure: k4554 
o|contracted procedure: k4792 
o|contracted procedure: k4795 
o|contracted procedure: k4806 
o|contracted procedure: k4818 
o|contracted procedure: k4539 
o|contracted procedure: k4516 
o|contracted procedure: k4525 
o|contracted procedure: k4533 
o|contracted procedure: k4827 
o|contracted procedure: k4830 
o|contracted procedure: k4841 
o|contracted procedure: k4853 
o|contracted procedure: k4484 
o|contracted procedure: k4456 
o|contracted procedure: k4472 
o|contracted procedure: k4462 
o|contracted procedure: k4494 
o|contracted procedure: k4878 
o|contracted procedure: k5044 
o|contracted procedure: k4884 
o|contracted procedure: k4944 
o|contracted procedure: k4956 
o|contracted procedure: k4959 
o|contracted procedure: k4968 
o|contracted procedure: k4890 
o|contracted procedure: k4901 
o|contracted procedure: k4897 
o|contracted procedure: k4905 
o|contracted procedure: k4980 
o|contracted procedure: k4983 
o|contracted procedure: k4994 
o|contracted procedure: k5006 
o|contracted procedure: k5015 
o|contracted procedure: k5018 
o|contracted procedure: k5029 
o|contracted procedure: k5041 
o|contracted procedure: k4934 
o|contracted procedure: k5069 
o|contracted procedure: k5119 
o|contracted procedure: k5072 
o|contracted procedure: k5081 
o|contracted procedure: k5108 
o|contracted procedure: k5084 
o|contracted procedure: k5122 
o|contracted procedure: k5159 
o|contracted procedure: k5173 
o|contracted procedure: k5180 
o|contracted procedure: k5279 
o|contracted procedure: k5217 
o|contracted procedure: k5248 
o|contracted procedure: k5260 
o|contracted procedure: k5270 
o|contracted procedure: k5274 
o|contracted procedure: k5282 
o|contracted procedure: k5305 
o|contracted procedure: k5315 
o|contracted procedure: k5319 
o|contracted procedure: k5325 
o|contracted procedure: k5366 
o|contracted procedure: k5392 
o|contracted procedure: k5395 
o|contracted procedure: k5417 
o|contracted procedure: k2925 
o|contracted procedure: k5446 
o|contracted procedure: k5456 
o|contracted procedure: k5460 
o|contracted procedure: k5477 
o|contracted procedure: k5480 
o|contracted procedure: k5491 
o|contracted procedure: k5503 
o|contracted procedure: k5360 
o|contracted procedure: k5339 
o|contracted procedure: k5342 
o|contracted procedure: k3822 
o|contracted procedure: k3834 
o|contracted procedure: k4006 
o|contracted procedure: k3840 
o|contracted procedure: k3852 
o|contracted procedure: k3861 
o|contracted procedure: k3868 
o|contracted procedure: k3998 
o|contracted procedure: k3874 
o|contracted procedure: k3887 
o|contracted procedure: k3909 
o|contracted procedure: k3913 
o|contracted procedure: k3927 
o|contracted procedure: k3973 
o|contracted procedure: k3938 
o|contracted procedure: k3955 
o|contracted procedure: k3945 
o|contracted procedure: k3969 
o|contracted procedure: k5515 
o|contracted procedure: k5525 
o|contracted procedure: k5529 
o|contracted procedure: k5648 
o|contracted procedure: k5533 
o|contracted procedure: k5542 
o|contracted procedure: k5545 
o|contracted procedure: k5642 
o|contracted procedure: k5548 
o|contracted procedure: k5554 
o|contracted procedure: k5576 
o|inlining procedure: k5579 
o|contracted procedure: k5588 
o|inlining procedure: k5579 
o|contracted procedure: k5628 
o|contracted procedure: k5639 
o|contracted procedure: k5651 
o|contracted procedure: k5674 
o|contracted procedure: k5700 
o|contracted procedure: k5709 
o|contracted procedure: k5712 
o|contracted procedure: k5723 
o|contracted procedure: k5735 
o|contracted procedure: k5149 
o|contracted procedure: k5856 
o|contracted procedure: k5868 
o|contracted procedure: k5887 
o|contracted procedure: k5896 
o|contracted procedure: k5937 
o|contracted procedure: k6609 
o|contracted procedure: k5946 
o|contracted procedure: k5977 
o|contracted procedure: k5981 
o|contracted procedure: k5994 
o|contracted procedure: k6009 
o|contracted procedure: k6024 
o|contracted procedure: k6035 
o|contracted procedure: k6031 
o|contracted procedure: k6090 
o|contracted procedure: k6038 
o|contracted procedure: k6050 
o|contracted procedure: k6054 
o|contracted procedure: k6060 
o|contracted procedure: k6072 
o|contracted procedure: k6076 
o|contracted procedure: k6099 
o|contracted procedure: k6102 
o|contracted procedure: k6113 
o|contracted procedure: k6125 
o|contracted procedure: k6137 
o|contracted procedure: k6152 
o|contracted procedure: k6164 
o|contracted procedure: k6175 
o|contracted procedure: k6171 
o|contracted procedure: k6201 
o|contracted procedure: k6181 
o|contracted procedure: k6195 
o|contracted procedure: k6227 
o|contracted procedure: k6207 
o|contracted procedure: k6221 
o|contracted procedure: k6236 
o|contracted procedure: k6239 
o|contracted procedure: k6250 
o|contracted procedure: k6262 
o|contracted procedure: k6283 
o|contracted procedure: k6289 
o|contracted procedure: k6297 
o|contracted procedure: k6311 
o|contracted procedure: k6307 
o|contracted procedure: k6320 
o|contracted procedure: k6330 
o|contracted procedure: k6334 
o|contracted procedure: k6387 
o|contracted procedure: k6337 
o|contracted procedure: k6349 
o|contracted procedure: k6365 
o|contracted procedure: k6369 
o|contracted procedure: k6361 
o|contracted procedure: k6353 
o|contracted procedure: k6381 
o|contracted procedure: k6440 
o|contracted procedure: k6390 
o|contracted procedure: k6402 
o|contracted procedure: k6418 
o|contracted procedure: k6422 
o|contracted procedure: k6414 
o|contracted procedure: k6406 
o|contracted procedure: k6434 
o|contracted procedure: k6452 
o|contracted procedure: k6480 
o|contracted procedure: k6487 
o|contracted procedure: k6491 
o|contracted procedure: k6498 
o|contracted procedure: k6510 
o|contracted procedure: k6513 
o|contracted procedure: k6524 
o|contracted procedure: k6536 
o|contracted procedure: k6545 
o|contracted procedure: k6548 
o|contracted procedure: k6559 
o|contracted procedure: k6571 
o|contracted procedure: k6593 
o|contracted procedure: k6583 
o|contracted procedure: k6597 
o|contracted procedure: k6604 
o|contracted procedure: k6649 
o|contracted procedure: k6655 
o|contracted procedure: k6679 
o|contracted procedure: k6675 
o|contracted procedure: k6686 
o|contracted procedure: k6722 
o|contracted procedure: k6694 
o|contracted procedure: k6718 
o|contracted procedure: k6712 
o|contracted procedure: k6729 
o|contracted procedure: k6783 
o|contracted procedure: k6814 
o|contracted procedure: k6840 
o|contracted procedure: k6836 
o|contracted procedure: k6817 
o|contracted procedure: k6828 
o|contracted procedure: k6849 
o|contracted procedure: k6875 
o|contracted procedure: k6871 
o|contracted procedure: k6852 
o|contracted procedure: k6863 
o|contracted procedure: k6978 
o|contracted procedure: k6897 
o|contracted procedure: k6914 
o|contracted procedure: k6940 
o|contracted procedure: k6936 
o|contracted procedure: k6917 
o|contracted procedure: k6928 
o|contracted procedure: k6949 
o|contracted procedure: k6975 
o|contracted procedure: k6971 
o|contracted procedure: k6952 
o|contracted procedure: k6963 
o|contracted procedure: k6990 
o|contracted procedure: k7000 
o|contracted procedure: k7004 
o|contracted procedure: k7013 
o|contracted procedure: k7023 
o|contracted procedure: k7027 
o|contracted procedure: k2889 
o|contracted procedure: k7045 
o|contracted procedure: k2871 
o|contracted procedure: k7060 
o|contracted procedure: k7063 
o|contracted procedure: k7066 
o|contracted procedure: k7078 
o|contracted procedure: k7088 
o|contracted procedure: k7092 
o|contracted procedure: k7106 
o|contracted procedure: k7110 
o|contracted procedure: k7179 
o|contracted procedure: k7187 
o|contracted procedure: k7196 
o|contracted procedure: k7257 
o|contracted procedure: k7263 
o|contracted procedure: k7433 
o|contracted procedure: k7287 
o|contracted procedure: k7429 
o|contracted procedure: k7299 
o|contracted procedure: k7305 
o|contracted procedure: k7425 
o|contracted procedure: k7421 
o|contracted procedure: k7329 
o|contracted procedure: k7346 
o|contracted procedure: k7359 
o|contracted procedure: k7365 
o|contracted procedure: k7372 
o|contracted procedure: k7386 
o|contracted procedure: k7397 
o|contracted procedure: k7415 
o|contracted procedure: k7403 
o|contracted procedure: k7449 
o|contracted procedure: k7445 
o|contracted procedure: k7469 
o|contracted procedure: k7472 
o|contracted procedure: k7484 
o|contracted procedure: k7492 
o|contracted procedure: k7488 
o|contracted procedure: k7504 
o|contracted procedure: k7530 
o|contracted procedure: k7526 
o|contracted procedure: k7507 
o|contracted procedure: k7518 
o|contracted procedure: k7556 
o|contracted procedure: k7549 
o|contracted procedure: k7545 
o|contracted procedure: k7541 
o|contracted procedure: k7565 
o|contracted procedure: k7577 
o|contracted procedure: k7580 
o|contracted procedure: k7616 
o|contracted procedure: k7586 
o|contracted procedure: k7589 
o|contracted procedure: k7603 
o|contracted procedure: k7622 
o|contracted procedure: k7628 
o|contracted procedure: k7631 
o|contracted procedure: k7634 
o|contracted procedure: k7637 
o|contracted procedure: k7640 
o|contracted procedure: k7651 
o|contracted procedure: k7677 
o|contracted procedure: k7709 
o|contracted procedure: k7682 
o|contracted procedure: k7688 
o|contracted procedure: k7695 
o|contracted procedure: k7715 
o|contracted procedure: k7724 
o|contracted procedure: k7757 
o|contracted procedure: k7769 
o|contracted procedure: k7772 
o|contracted procedure: k7783 
o|contracted procedure: k7795 
o|contracted procedure: k7804 
o|contracted procedure: k7814 
o|contracted procedure: k7818 
o|contracted procedure: k7862 
o|contracted procedure: k7846 
o|contracted procedure: k7859 
o|simplifications: ((let . 94)) 
o|removed binding forms: 483 
o|inlining procedure: "(modules.scm:115) module-sexports" 
o|inlining procedure: "(modules.scm:114) module-vexports" 
o|inlining procedure: "(modules.scm:113) module-export-list" 
o|inlining procedure: k3089 
o|inlining procedure: k3089 
o|inlining procedure: "(modules.scm:155) module-saved-environments" 
o|inlining procedure: "(modules.scm:152) set-module-saved-environments!" 
o|inlining procedure: "(modules.scm:174) set-module-exist-list!" 
o|inlining procedure: "(modules.scm:173) set-module-sexports!" 
o|inlining procedure: "(modules.scm:173) module-sexports" 
o|inlining procedure: "(modules.scm:164) module-exist-list" 
o|inlining procedure: "(modules.scm:175) set-module-export-list!" 
o|inlining procedure: "(modules.scm:162) module-export-list" 
o|inlining procedure: "(modules.scm:181) module-meta-expressions" 
o|inlining procedure: "(modules.scm:203) set-module-defined-list!" 
o|inlining procedure: "(modules.scm:206) module-defined-list" 
o|inlining procedure: "(modules.scm:200) set-module-exist-list!" 
o|inlining procedure: "(modules.scm:200) module-exist-list" 
o|inlining procedure: "(modules.scm:195) module-name" 
o|inlining procedure: "(modules.scm:191) module-export-list" 
o|inlining procedure: "(modules.scm:225) module-defined-syntax-list" 
o|inlining procedure: "(modules.scm:219) set-module-defined-list!" 
o|inlining procedure: "(modules.scm:222) module-defined-list" 
o|inlining procedure: "(modules.scm:213) module-name" 
o|inlining procedure: "(modules.scm:210) module-export-list" 
o|inlining procedure: k3621 
o|inlining procedure: k3621 
o|inlining procedure: "(modules.scm:337) module-defined-syntax-list" 
o|inlining procedure: k4252 
o|inlining procedure: k4252 
o|inlining procedure: "(modules.scm:323) module-vexports" 
o|inlining procedure: k4339 
o|inlining procedure: k4339 
o|inlining procedure: "(modules.scm:322) module-iexports" 
o|inlining procedure: "(modules.scm:316) module-name" 
o|inlining procedure: k4388 
o|inlining procedure: k4388 
o|inlining procedure: "(modules.scm:314) module-meta-expressions" 
o|inlining procedure: "(modules.scm:311) module-meta-import-forms" 
o|inlining procedure: "(modules.scm:310) module-sexports" 
o|inlining procedure: "(modules.scm:309) module-import-forms" 
o|inlining procedure: "(modules.scm:308) module-name" 
o|inlining procedure: "(modules.scm:307) module-defined-list" 
o|inlining procedure: k4763 
o|inlining procedure: k4763 
o|inlining procedure: k4798 
o|inlining procedure: k4798 
o|inlining procedure: k4833 
o|inlining procedure: k4833 
o|inlining procedure: "(modules.scm:417) set-module-saved-environments!" 
o|inlining procedure: "(modules.scm:421) module-sexports" 
o|inlining procedure: "(modules.scm:420) module-vexports" 
o|inlining procedure: k4986 
o|inlining procedure: k4986 
o|inlining procedure: k5021 
o|inlining procedure: k5021 
o|inlining procedure: "(modules.scm:428) module-exist-list" 
o|inlining procedure: "(modules.scm:427) module-export-list" 
o|inlining procedure: "(modules.scm:548) set-module-saved-environments!" 
o|inlining procedure: "(modules.scm:545) set-module-iexports!" 
o|inlining procedure: "(modules.scm:547) module-iexports" 
o|inlining procedure: "(modules.scm:544) set-module-sexports!" 
o|inlining procedure: k5483 
o|inlining procedure: k5483 
o|inlining procedure: "(modules.scm:255) module-defined-list" 
o|inlining procedure: "(modules.scm:254) module-name" 
o|inlining procedure: "(modules.scm:253) module-export-list" 
o|inlining procedure: "(modules.scm:450) module-sexports" 
o|inlining procedure: k5715 
o|inlining procedure: k5715 
o|inlining procedure: "(modules.scm:447) module-defined-syntax-list" 
o|inlining procedure: "(modules.scm:444) module-exist-list" 
o|inlining procedure: "(modules.scm:443) module-defined-list" 
o|inlining procedure: "(modules.scm:442) module-name" 
o|inlining procedure: "(modules.scm:441) module-export-list" 
o|inlining procedure: "(modules.scm:599) module-name" 
o|inlining procedure: "(modules.scm:598) module-iexports" 
o|inlining procedure: "(modules.scm:597) module-sexports" 
o|inlining procedure: "(modules.scm:596) module-vexports" 
o|inlining procedure: k6105 
o|inlining procedure: k6105 
o|inlining procedure: k6242 
o|inlining procedure: k6242 
o|inlining procedure: k6516 
o|inlining procedure: k6516 
o|inlining procedure: k6551 
o|inlining procedure: k6551 
o|inlining procedure: "(modules.scm:723) set-module-iexports!" 
o|inlining procedure: "(modules.scm:725) module-iexports" 
o|inlining procedure: "(modules.scm:710) set-module-exist-list!" 
o|inlining procedure: k6820 
o|inlining procedure: k6820 
o|inlining procedure: k6855 
o|inlining procedure: k6855 
o|inlining procedure: "(modules.scm:712) module-exist-list" 
o|inlining procedure: "(modules.scm:709) set-module-sexports!" 
o|inlining procedure: "(modules.scm:709) module-sexports" 
o|inlining procedure: "(modules.scm:716) set-module-export-list!" 
o|inlining procedure: k6920 
o|inlining procedure: k6920 
o|inlining procedure: k6955 
o|inlining procedure: k6955 
o|inlining procedure: "(modules.scm:719) module-export-list" 
o|inlining procedure: "(modules.scm:707) module-export-list" 
o|inlining procedure: "(modules.scm:682) module-meta-import-forms" 
o|inlining procedure: "(modules.scm:685) module-import-forms" 
o|inlining procedure: "(modules.scm:746) module-name" 
o|inlining procedure: "(modules.scm:746) module-name" 
o|inlining procedure: k7510 
o|inlining procedure: k7510 
o|inlining procedure: "(modules.scm:858) module-sexports" 
o|inlining procedure: "(modules.scm:857) module-vexports" 
o|inlining procedure: k7775 
o|inlining procedure: k7775 
o|inlining procedure: "(modules.scm:924) module-saved-environments" 
o|replaced variables: 157 
o|removed side-effect free assignment to unused variable: module-export-list 
o|removed side-effect free assignment to unused variable: set-module-export-list! 
o|removed side-effect free assignment to unused variable: module-defined-list 
o|removed side-effect free assignment to unused variable: set-module-defined-list! 
o|removed side-effect free assignment to unused variable: module-exist-list 
o|removed side-effect free assignment to unused variable: set-module-exist-list! 
o|removed side-effect free assignment to unused variable: module-defined-syntax-list 
o|removed side-effect free assignment to unused variable: module-import-forms 
o|removed side-effect free assignment to unused variable: module-meta-import-forms 
o|removed side-effect free assignment to unused variable: module-meta-expressions 
o|removed side-effect free assignment to unused variable: module-vexports 
o|removed side-effect free assignment to unused variable: module-sexports 
o|removed side-effect free assignment to unused variable: set-module-sexports! 
o|removed side-effect free assignment to unused variable: module-iexports 
o|removed side-effect free assignment to unused variable: set-module-iexports! 
o|removed side-effect free assignment to unused variable: module-saved-environments 
o|removed side-effect free assignment to unused variable: set-module-saved-environments! 
o|replaced variables: 134 
o|removed binding forms: 125 
o|inlining procedure: k3001 
o|contracted procedure: k3105 
o|inlining procedure: k3318 
o|inlining procedure: k3474 
o|inlining procedure: k4925 
o|inlining procedure: k5437 
o|inlining procedure: k5658 
o|inlining procedure: k5924 
o|inlining procedure: k6780 
o|inlining procedure: k6883 
o|inlining procedure: k7041 
o|inlining procedure: k7056 
o|inlining procedure: k7137 
o|inlining procedure: k71378377 
o|inlining procedure: k7702 
o|inlining procedure: k7852 
o|replaced variables: 87 
o|removed binding forms: 126 
o|contracted procedure: k2993 
o|contracted procedure: k2997 
o|contracted procedure: k3265 
o|contracted procedure: k3274 
o|contracted procedure: k3371 
o|contracted procedure: k3481 
o|contracted procedure: k3443 
o|contracted procedure: k3451 
o|contracted procedure: k3562 
o|contracted procedure: k3499 
o|contracted procedure: k3526 
o|contracted procedure: k3541 
o|contracted procedure: k4064 
o|contracted procedure: k4067 
o|contracted procedure: k4070 
o|contracted procedure: k4073 
o|contracted procedure: k4076 
o|contracted procedure: k4363 
o|contracted procedure: k4318 
o|contracted procedure: k4276 
o|contracted procedure: k4141 
o|contracted procedure: k4367 
o|contracted procedure: k4921 
o|contracted procedure: k5053 
o|contracted procedure: k5131 
o|contracted procedure: k5134 
o|contracted procedure: k5137 
o|contracted procedure: k5140 
o|contracted procedure: k5156 
o|contracted procedure: k3752 
o|contracted procedure: k3755 
o|contracted procedure: k3758 
o|contracted procedure: k5911 
o|contracted procedure: k5914 
o|contracted procedure: k5917 
o|contracted procedure: k6763 
o|contracted procedure: k6797 
o|contracted procedure: k6894 
o|contracted procedure: k7706 
o|removed binding forms: 76 
o|replaced variables: 32 
o|removed binding forms: 17 
o|direct leaf routine/allocation: g511512 3 
o|direct leaf routine with hoistable closures/allocation: g495502 (g511512) 3 
o|contracted procedure: "(modules.scm:164) k3330" 
o|removed binding forms: 2 
o|customizable procedures: (g20642071 for-each-loop20632078 map-loop20852103 k7691 loop2027 merr2000 loop22034 map-loop20032020 err1992 loop21963 k7352 loop1951 iface1941 err1940 g19101911 mrename1874 g18821883 g16541661 for-each-loop16531851 g16891696 for-each-loop16881702 g17101717 for-each-loop17091721 map-loop17871804 map-loop18131830 map-loop17331750 map-loop17591776 k6735 k5949 k5958 map-loop15981615 map-loop16241641 tostr1400 g15881589 g15841585 loop1545 for-each-loop15631574 map-loop15011518 loop1525 loop1532 map-loop14521469 g14931494 g14891490 loop1476 import-spec1402 import-name1401 map-loop11241142 loop1150 k5582 k5594 k5566 loop1158 g11791186 for-each-loop11781250 g673674 g666667 k3899 warn639 loop2657 loop651 map-loop12581283 g12941301 for-each-loop12931308 g11951202 for-each-loop11941206 g12261233 for-each-loop12251238 k5060 k5090 loop1095 map-loop10331051 g10661075 map-loop10601081 map-loop854872 map-loop882900 map-loop910928 g940947 for-each-loop939953 g961968 for-each-loop960974 g982989 for-each-loop981995 merge-se k4083 k4091 map-loop721738 k4355 map-loop747771 g786795 map-loop780813 loop820 k4127 loop692 k3689 for-each-loop608628 g579580 k3585 for-each-loop494514 g478479 k3221 g439440 loop430 map-loop397415) 
o|calls to known targets: 254 
o|identified direct recursive calls: f_3078 2 
o|identified direct recursive calls: f_3322 1 
o|identified direct recursive calls: f_4025 2 
o|identified direct recursive calls: f_4145 1 
o|identified direct recursive calls: f_5064 1 
o|identified direct recursive calls: f_3829 1 
o|identified direct recursive calls: f_5537 1 
o|identified direct recursive calls: f_6019 1 
o|identified direct recursive calls: f_6159 2 
o|identified direct recursive calls: f_6147 2 
o|identified direct recursive calls: f_6278 2 
o|identified direct recursive calls: f_6809 2 
o|identified direct recursive calls: f_6844 2 
o|identified direct recursive calls: f_6909 2 
o|identified direct recursive calls: f_6944 2 
o|identified direct recursive calls: f_7381 1 
o|identified direct recursive calls: f_7282 2 
o|identified direct recursive calls: f_7499 2 
o|fast box initializations: 57 
o|fast global references: 15 
o|fast global assignments: 2 
o|dropping unused closure argument: f_5906 
o|dropping unused closure argument: f_4010 
*/
/* end of file */
