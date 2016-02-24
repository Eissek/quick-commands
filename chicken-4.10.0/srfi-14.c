/* Generated from srfi-14.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:04
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: srfi-14.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file srfi-14.c
   unit: srfi_2d14
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[102];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,19),40,37,108,97,116,105,110,49,45,62,99,104,97,114,32,110,54,52,41,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,19),40,109,97,107,101,45,99,104,97,114,45,115,101,116,32,115,54,56,41,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,17),40,99,104,97,114,45,115,101,116,58,115,32,99,115,55,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,15),40,99,104,97,114,45,115,101,116,63,32,120,55,50,41,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,35),40,37,100,101,102,97,117,108,116,45,98,97,115,101,32,109,97,121,98,101,45,98,97,115,101,55,54,32,112,114,111,99,55,55,41,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,9),40,108,112,32,99,115,56,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,31),40,37,99,104,97,114,45,115,101,116,58,115,47,99,104,101,99,107,32,99,115,56,49,32,112,114,111,99,56,50,41,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,20),40,99,104,97,114,45,115,101,116,45,99,111,112,121,32,99,115,56,57,41,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,11),40,108,112,32,114,101,115,116,57,57,41,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,20),40,99,104,97,114,45,115,101,116,61,32,46,32,114,101,115,116,57,49,41,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,10),40,108,112,50,32,105,49,50,49,41,0,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,18),40,108,112,32,115,49,49,49,51,32,114,101,115,116,49,49,52,41,0,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,22),40,99,104,97,114,45,115,101,116,60,61,32,46,32,114,101,115,116,49,48,54,41,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,4),40,108,112,41,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,16),40,108,112,32,105,49,52,55,32,97,110,115,49,52,56,41};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,38),40,99,104,97,114,45,115,101,116,45,104,97,115,104,32,99,115,49,51,52,32,46,32,109,97,121,98,101,45,98,111,117,110,100,49,51,53,41,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,34),40,99,104,97,114,45,115,101,116,45,99,111,110,116,97,105,110,115,63,32,99,115,49,53,55,32,99,104,97,114,49,53,56,41,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,12),40,108,112,32,115,105,122,101,49,55,51,41,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,21),40,99,104,97,114,45,115,101,116,45,115,105,122,101,32,99,115,49,54,57,41,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,18),40,108,112,32,105,49,56,52,32,99,111,117,110,116,49,56,53,41,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,32),40,99,104,97,114,45,115,101,116,45,99,111,117,110,116,32,112,114,101,100,49,56,48,32,99,115,101,116,49,56,49,41};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,11),40,103,50,48,53,32,99,50,49,52,41,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,48,52,32,103,50,49,49,50,49,54,41,0,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,45),40,37,115,101,116,45,99,104,97,114,45,115,101,116,32,115,101,116,49,57,55,32,112,114,111,99,49,57,56,32,99,115,49,57,57,32,99,104,97,114,115,50,48,48,41,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,11),40,103,50,51,48,32,99,50,51,57,41,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,50,57,32,103,50,51,54,50,52,49,41,0,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,46),40,37,115,101,116,45,99,104,97,114,45,115,101,116,33,32,115,101,116,50,50,50,32,112,114,111,99,50,50,51,32,99,115,50,50,52,32,99,104,97,114,115,50,50,53,41,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,17),40,97,49,57,48,53,32,115,50,52,57,32,105,50,53,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,34),40,99,104,97,114,45,115,101,116,45,97,100,106,111,105,110,32,99,115,50,52,55,32,46,32,99,104,97,114,115,50,52,56,41,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,17),40,97,49,57,49,55,32,115,50,53,52,32,105,50,53,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,35),40,99,104,97,114,45,115,101,116,45,97,100,106,111,105,110,33,32,99,115,50,53,50,32,46,32,99,104,97,114,115,50,53,51,41,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,17),40,97,49,57,50,57,32,115,50,53,57,32,105,50,54,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,34),40,99,104,97,114,45,115,101,116,45,100,101,108,101,116,101,32,99,115,50,53,55,32,46,32,99,104,97,114,115,50,53,56,41,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,17),40,97,49,57,52,49,32,115,50,54,52,32,105,50,54,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,35),40,99,104,97,114,45,115,101,116,45,100,101,108,101,116,101,33,32,99,115,50,54,50,32,46,32,99,104,97,114,115,50,54,51,41,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,25),40,99,104,97,114,45,115,101,116,45,99,117,114,115,111,114,32,99,115,101,116,50,54,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,28),40,101,110,100,45,111,102,45,99,104,97,114,45,115,101,116,63,32,99,117,114,115,111,114,50,54,57,41,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,32),40,99,104,97,114,45,115,101,116,45,114,101,102,32,99,115,101,116,50,55,49,32,99,117,114,115,111,114,50,55,50,41};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,40),40,99,104,97,114,45,115,101,116,45,99,117,114,115,111,114,45,110,101,120,116,32,99,115,101,116,50,55,52,32,99,117,114,115,111,114,50,55,53,41};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,4),40,108,112,41,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,49),40,37,99,104,97,114,45,115,101,116,45,99,117,114,115,111,114,45,110,101,120,116,32,99,115,101,116,50,55,56,32,99,117,114,115,111,114,50,55,57,32,112,114,111,99,50,56,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,51,48,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,33),40,99,104,97,114,45,115,101,116,45,102,111,114,45,101,97,99,104,32,112,114,111,99,50,57,56,32,99,115,50,57,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,51,50,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,28),40,99,104,97,114,45,115,101,116,45,109,97,112,32,112,114,111,99,51,49,56,32,99,115,51,49,57,41,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,16),40,108,112,32,105,51,52,57,32,97,110,115,51,53,48,41};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,37),40,99,104,97,114,45,115,101,116,45,102,111,108,100,32,107,111,110,115,51,52,52,32,107,110,105,108,51,52,53,32,99,115,51,52,54,41,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,51,54,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,30),40,99,104,97,114,45,115,101,116,45,101,118,101,114,121,32,112,114,101,100,51,53,55,32,99,115,51,53,56,41,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,51,55,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,28),40,99,104,97,114,45,115,101,116,45,97,110,121,32,112,114,101,100,51,55,53,32,99,115,51,55,54,41,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,12),40,108,112,32,115,101,101,100,52,48,50,41,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,47),40,37,99,104,97,114,45,115,101,116,45,117,110,102,111,108,100,33,32,112,51,57,54,32,102,51,57,55,32,103,51,57,56,32,115,51,57,57,32,115,101,101,100,52,48,48,41,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,56),40,99,104,97,114,45,115,101,116,45,117,110,102,111,108,100,32,112,52,49,52,32,102,52,49,53,32,103,52,49,54,32,115,101,101,100,52,49,55,32,46,32,109,97,121,98,101,45,98,97,115,101,52,49,56,41};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,54),40,99,104,97,114,45,115,101,116,45,117,110,102,111,108,100,33,32,112,52,50,50,32,102,52,50,51,32,103,52,50,52,32,115,101,101,100,52,50,53,32,98,97,115,101,45,99,115,101,116,52,50,54,41,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,6),40,103,52,51,52,41,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,18),40,102,111,114,45,101,97,99,104,45,108,111,111,112,52,51,51,41,0,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,32),40,37,108,105,115,116,45,62,99,104,97,114,45,115,101,116,33,32,99,104,97,114,115,52,50,57,32,115,52,51,48,41};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,21),40,99,104,97,114,45,115,101,116,32,46,32,99,104,97,114,115,52,53,52,41,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,41),40,108,105,115,116,45,62,99,104,97,114,45,115,101,116,32,99,104,97,114,115,52,53,56,32,46,32,109,97,121,98,101,45,98,97,115,101,52,53,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,37),40,108,105,115,116,45,62,99,104,97,114,45,115,101,116,33,32,99,104,97,114,115,52,54,51,32,98,97,115,101,45,99,115,52,54,52,41,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,16),40,108,112,32,105,52,55,48,32,97,110,115,52,55,49,41};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,22),40,99,104,97,114,45,115,101,116,45,62,108,105,115,116,32,99,115,52,54,55,41,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,52,56,49,41,0,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,41),40,37,115,116,114,105,110,103,45,62,99,104,97,114,45,115,101,116,33,32,115,116,114,52,55,56,32,98,115,52,55,57,32,112,114,111,99,52,56,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,41),40,115,116,114,105,110,103,45,62,99,104,97,114,45,115,101,116,32,115,116,114,52,57,50,32,46,32,109,97,121,98,101,45,98,97,115,101,52,57,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,37),40,115,116,114,105,110,103,45,62,99,104,97,114,45,115,101,116,33,32,115,116,114,52,57,55,32,98,97,115,101,45,99,115,52,57,56,41,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,9),40,108,112,32,106,53,48,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,24),40,99,104,97,114,45,115,101,116,45,62,115,116,114,105,110,103,32,99,115,53,48,49,41};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,4),40,108,112,41,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,65),40,37,117,99,115,45,114,97,110,103,101,45,62,99,104,97,114,45,115,101,116,33,32,108,111,119,101,114,53,49,53,32,117,112,112,101,114,53,49,54,32,101,114,114,111,114,63,53,49,55,32,98,115,53,49,56,32,112,114,111,99,53,49,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,49),40,117,99,115,45,114,97,110,103,101,45,62,99,104,97,114,45,115,101,116,32,108,111,119,101,114,53,51,56,32,117,112,112,101,114,53,51,57,32,46,32,114,101,115,116,53,52,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,61),40,117,99,115,45,114,97,110,103,101,45,62,99,104,97,114,45,115,101,116,33,32,108,111,119,101,114,53,53,51,32,117,112,112,101,114,53,53,52,32,101,114,114,111,114,63,53,53,53,32,98,97,115,101,45,99,115,53,53,54,41,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,53,54,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,39),40,37,99,104,97,114,45,115,101,116,45,102,105,108,116,101,114,33,32,112,114,101,100,53,53,57,32,100,115,53,54,48,32,98,115,53,54,49,41,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,56),40,99,104,97,114,45,115,101,116,45,102,105,108,116,101,114,32,112,114,101,100,105,99,97,116,101,53,56,53,32,100,111,109,97,105,110,53,56,54,32,46,32,109,97,121,98,101,45,98,97,115,101,53,56,55,41};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,52),40,99,104,97,114,45,115,101,116,45,102,105,108,116,101,114,33,32,112,114,101,100,105,99,97,116,101,53,57,49,32,100,111,109,97,105,110,53,57,50,32,98,97,115,101,45,99,115,53,57,51,41,0,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,17),40,45,62,99,104,97,114,45,115,101,116,32,120,53,57,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,54,48,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,24),40,37,115,116,114,105,110,103,45,105,116,101,114,32,112,54,48,50,32,115,54,48,51,41};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,54,51,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,14),40,103,54,50,48,32,99,115,101,116,54,50,57,41,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,54,49,57,32,103,54,50,54,54,52,52,41,0,0,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,47),40,37,99,104,97,114,45,115,101,116,45,97,108,103,101,98,114,97,32,115,54,49,51,32,99,115,101,116,115,54,49,52,32,111,112,54,49,53,32,112,114,111,99,54,49,54,41,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,17),40,97,51,48,51,49,32,105,54,53,50,32,118,54,53,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,27),40,99,104,97,114,45,115,101,116,45,99,111,109,112,108,101,109,101,110,116,32,99,115,54,52,57,41,0,0,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,17),40,97,51,48,54,53,32,105,54,54,56,32,118,54,54,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,30),40,99,104,97,114,45,115,101,116,45,99,111,109,112,108,101,109,101,110,116,33,32,99,115,101,116,54,54,54,41,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,22),40,97,51,48,57,57,32,115,54,56,52,32,105,54,56,53,32,118,54,56,54,41,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,37),40,99,104,97,114,45,115,101,116,45,117,110,105,111,110,33,32,99,115,101,116,49,54,56,50,32,46,32,99,115,101,116,115,54,56,51,41,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,22),40,97,51,49,52,48,32,115,54,57,53,32,105,54,57,54,32,118,54,57,55,41,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,27),40,99,104,97,114,45,115,101,116,45,117,110,105,111,110,32,46,32,99,115,101,116,115,54,57,51,41,0,0,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,22),40,97,51,49,56,48,32,115,55,48,54,32,105,55,48,55,32,118,55,48,56,41,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,44),40,99,104,97,114,45,115,101,116,45,105,110,116,101,114,115,101,99,116,105,111,110,33,32,99,115,101,116,49,55,48,52,32,46,32,99,115,101,116,115,55,48,53,41,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,22),40,97,51,50,49,55,32,115,55,49,55,32,105,55,49,56,32,118,55,49,57,41,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,34),40,99,104,97,114,45,115,101,116,45,105,110,116,101,114,115,101,99,116,105,111,110,32,46,32,99,115,101,116,115,55,49,53,41,0,0,0,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,22),40,97,51,50,53,51,32,115,55,50,56,32,105,55,50,57,32,118,55,51,48,41,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,42),40,99,104,97,114,45,115,101,116,45,100,105,102,102,101,114,101,110,99,101,33,32,99,115,101,116,49,55,50,54,32,46,32,99,115,101,116,115,55,50,55,41,0,0,0,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,22),40,97,51,50,57,50,32,115,55,52,48,32,105,55,52,49,32,118,55,52,50,41,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,39),40,99,104,97,114,45,115,101,116,45,100,105,102,102,101,114,101,110,99,101,32,99,115,49,55,51,55,32,46,32,99,115,101,116,115,55,51,56,41,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,22),40,97,51,51,51,48,32,115,55,53,49,32,105,55,53,50,32,118,55,53,51,41,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,35),40,99,104,97,114,45,115,101,116,45,120,111,114,33,32,99,115,101,116,49,55,52,57,32,46,32,99,115,101,116,115,55,53,48,41,0,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,22),40,97,51,51,57,50,32,115,55,54,55,32,105,55,54,56,32,118,55,54,57,41,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,25),40,99,104,97,114,45,115,101,116,45,120,111,114,32,46,32,99,115,101,116,115,55,54,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,17),40,97,51,52,53,49,32,105,55,57,56,32,118,55,57,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,12),40,103,55,56,56,32,99,115,55,57,55,41,0,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,55,56,55,32,103,55,57,52,56,50,50,41,0,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,62),40,37,99,104,97,114,45,115,101,116,45,100,105,102,102,43,105,110,116,101,114,115,101,99,116,105,111,110,33,32,100,105,102,102,55,56,49,32,105,110,116,55,56,50,32,99,115,101,116,115,55,56,51,32,112,114,111,99,55,56,52,41,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,17),40,97,51,53,53,57,32,105,56,51,50,32,118,56,51,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,54),40,99,104,97,114,45,115,101,116,45,100,105,102,102,43,105,110,116,101,114,115,101,99,116,105,111,110,33,32,99,115,49,56,50,55,32,99,115,50,56,50,56,32,46,32,99,115,101,116,115,56,50,57,41,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,46),40,99,104,97,114,45,115,101,116,45,100,105,102,102,43,105,110,116,101,114,115,101,99,116,105,111,110,32,99,115,49,56,53,51,32,46,32,99,115,101,116,115,56,53,52,41,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,57,54,50,32,103,57,55,52,57,56,48,41,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,57,51,52,32,103,57,52,54,57,53,50,41,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,57,48,54,32,103,57,49,56,57,50,52,41,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,56,55,55,32,103,56,56,57,56,57,53,41,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_2749)
static void C_ccall f_2749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2746)
static void C_ccall f_2746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3393)
static void C_ccall f_3393(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3816)
static void C_fcall f_3816(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3810)
static void C_ccall f_3810(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2874)
static void C_ccall f_2874(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2736)
static void C_ccall f_2736(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2736)
static void C_ccall f_2736r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2379)
static void C_ccall f_2379(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...) C_noret;
C_noret_decl(f_2379)
static void C_ccall f_2379r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t7) C_noret;
C_noret_decl(f_1402)
static void C_ccall f_1402(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1402)
static void C_ccall f_1402r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2377)
static void C_ccall f_2377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2373)
static void C_ccall f_2373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1400)
static void C_ccall f_1400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2872)
static void C_ccall f_2872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2864)
static void C_ccall f_2864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2868)
static void C_ccall f_2868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2860)
static void C_ccall f_2860(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1421)
static void C_fcall f_1421(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1416)
static void C_ccall f_1416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2386)
static void C_ccall f_2386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2383)
static void C_ccall f_2383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2881)
static void C_ccall f_2881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2337)
static void C_fcall f_2337(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2343)
static void C_fcall f_2343(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3896)
static void C_ccall f_3896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1570)
static void C_ccall f_1570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1578)
static void C_fcall f_1578(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3880)
static void C_ccall f_3880(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1564)
static void C_fcall f_1564(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2258)
static void C_ccall f_2258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3254)
static void C_ccall f_3254(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3252)
static void C_ccall f_3252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3057)
static void C_ccall f_3057(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2283)
static void C_fcall f_2283(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2168)
static void C_ccall f_2168(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1332)
static void C_ccall f_1332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3248)
static void C_ccall f_3248(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1339)
static void C_ccall f_1339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3244)
static void C_ccall f_3244(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3244)
static void C_ccall f_3244r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2994)
static void C_fcall f_2994(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1361)
static void C_fcall f_1361(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3237)
static void C_ccall f_3237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1368)
static void C_ccall f_1368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2365)
static void C_ccall f_2365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3032)
static void C_ccall f_3032(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2224)
static void C_ccall f_2224(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2229)
static void C_fcall f_2229(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2220)
static void C_ccall f_2220(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1355)
static void C_fcall f_1355(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2395)
static void C_ccall f_2395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2399)
static void C_ccall f_2399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3021)
static void C_ccall f_3021(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2391)
static void C_ccall f_2391(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_3027)
static void C_ccall f_3027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3024)
static void C_ccall f_3024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3293)
static void C_ccall f_3293(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1388)
static void C_ccall f_1388(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3017)
static void C_ccall f_3017(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3285)
static void C_ccall f_3285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3121)
static void C_ccall f_3121(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3121)
static void C_ccall f_3121r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1378)
static void C_ccall f_1378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3288)
static void C_ccall f_3288(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2195)
static void C_ccall f_2195(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3004)
static void C_ccall f_3004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2172)
static void C_ccall f_2172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1700)
static void C_ccall f_1700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3275)
static void C_ccall f_3275(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3275)
static void C_ccall f_3275r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1705)
static C_word C_fcall f_1705(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_1690)
static void C_ccall f_1690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1696)
static void C_ccall f_1696(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2091)
static void C_ccall f_2091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2094)
static void C_ccall f_2094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2160)
static void C_ccall f_2160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1396)
static void C_ccall f_1396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3100)
static void C_ccall f_3100(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2097)
static void C_ccall f_2097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2177)
static void C_fcall f_2177(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2087)
static void C_ccall f_2087(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1443)
static void C_ccall f_1443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2278)
static void C_ccall f_2278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2274)
static void C_ccall f_2274(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1742)
static void C_ccall f_1742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1747)
static void C_fcall f_1747(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2858)
static void C_ccall f_2858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2851)
static void C_ccall f_2851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2293)
static void C_ccall f_2293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2848)
static void C_ccall f_2848(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2844)
static void C_ccall f_2844(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2844)
static void C_ccall f_2844r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1453)
static void C_ccall f_1453(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1453)
static void C_ccall f_1453r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3617)
static void C_ccall f_3617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3613)
static void C_ccall f_3613(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3613)
static void C_ccall f_3613r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1483)
static void C_ccall f_1483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1473)
static void C_fcall f_1473(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3098)
static void C_ccall f_3098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3094)
static void C_ccall f_3094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1471)
static void C_ccall f_1471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3090)
static void C_ccall f_3090(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3090)
static void C_ccall f_3090r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1498)
static void C_fcall f_1498(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(C_srfi_2d14_toplevel)
C_externexport void C_ccall C_srfi_2d14_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1810)
static void C_fcall f_1810(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3655)
static void C_ccall f_3655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3658)
static void C_ccall f_3658(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2036)
static void C_fcall f_2036(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3652)
static void C_ccall f_3652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2031)
static void C_ccall f_2031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3851)
static void C_fcall f_3851(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3064)
static void C_ccall f_3064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3066)
static void C_ccall f_3066(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3648)
static void C_ccall f_3648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3061)
static void C_ccall f_3061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3644)
static void C_ccall f_3644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3640)
static void C_ccall f_3640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2027)
static void C_ccall f_2027(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3845)
static void C_ccall f_3845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2477)
static void C_ccall f_2477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2473)
static void C_ccall f_2473(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2046)
static void C_ccall f_2046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1930)
static void C_ccall f_1930(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1856)
static void C_fcall f_1856(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1936)
static void C_ccall f_1936(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1936)
static void C_ccall f_1936r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1557)
static void C_ccall f_1557(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1557)
static void C_ccall f_1557r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2468)
static void C_ccall f_2468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2465)
static void C_ccall f_2465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2592)
static void C_ccall f_2592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1768)
static void C_ccall f_1768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3692)
static void C_ccall f_3692(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1854)
static void C_ccall f_1854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3695)
static void C_ccall f_3695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3698)
static void C_ccall f_3698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2461)
static void C_ccall f_2461(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2461)
static void C_ccall f_2461r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1809)
static void C_ccall f_1809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3680)
static void C_ccall f_3680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3684)
static void C_ccall f_3684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1805)
static void C_fcall f_1805(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3688)
static void C_ccall f_3688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1954)
static void C_ccall f_1954(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2597)
static void C_ccall f_2597(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2487)
static void C_ccall f_2487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2483)
static void C_ccall f_2483(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3673)
static void C_ccall f_3673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3676)
static void C_ccall f_3676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2481)
static void C_ccall f_2481(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3716)
static void C_ccall f_3716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1942)
static void C_ccall f_1942(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2585)
static void C_ccall f_2585(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2585)
static void C_ccall f_2585r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1948)
static void C_ccall f_1948(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2589)
static void C_ccall f_2589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3712)
static void C_ccall f_3712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3661)
static void C_ccall f_3661(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3665)
static void C_ccall f_3665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3668)
static void C_ccall f_3668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3708)
static void C_ccall f_3708(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3705)
static void C_ccall f_3705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3702)
static void C_ccall f_3702(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2424)
static C_word C_fcall f_2424(C_word t0,C_word t1);
C_noret_decl(f_1960)
static void C_ccall f_1960(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1966)
static void C_ccall f_1966(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3164)
static void C_ccall f_3164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1912)
static void C_ccall f_1912(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1912)
static void C_ccall f_1912r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1918)
static void C_ccall f_1918(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2447)
static void C_ccall f_2447(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2447)
static void C_ccall f_2447r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1906)
static void C_ccall f_1906(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1900)
static void C_ccall f_1900(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1900)
static void C_ccall f_1900r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3141)
static void C_ccall f_3141(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1628)
static C_word C_fcall f_1628(C_word t0,C_word t1);
C_noret_decl(f_1861)
static void C_fcall f_1861(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1860)
static void C_ccall f_1860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1657)
static void C_ccall f_1657(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3131)
static void C_ccall f_3131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3134)
static void C_ccall f_3134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1924)
static void C_ccall f_1924(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1924)
static void C_ccall f_1924r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3452)
static void C_ccall f_3452(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1887)
static void C_ccall f_1887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2492)
static void C_fcall f_2492(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3198)
static void C_ccall f_3198(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3198)
static void C_ccall f_3198r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1877)
static void C_fcall f_1877(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1875)
static void C_ccall f_1875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3437)
static void C_ccall f_3437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3181)
static void C_ccall f_3181(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1738)
static void C_ccall f_1738(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2718)
static void C_fcall f_2718(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3781)
static void C_fcall f_3781(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1979)
static void C_ccall f_1979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1975)
static void C_fcall f_1975(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3175)
static void C_ccall f_3175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3171)
static void C_ccall f_3171(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3171)
static void C_ccall f_3171r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1283)
static void C_ccall f_1283(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3179)
static void C_ccall f_3179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3771)
static void C_ccall f_3771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3779)
static void C_ccall f_3779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1271)
static void C_ccall f_1271(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2454)
static void C_ccall f_2454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1289)
static void C_ccall f_1289(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2451)
static void C_ccall f_2451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3446)
static void C_fcall f_3446(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3444)
static void C_fcall f_3444(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3634)
static void C_ccall f_3634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3630)
static void C_ccall f_3630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1984)
static C_word C_fcall f_1984(C_word t0,C_word t1);
C_noret_decl(f_2548)
static C_word C_fcall f_2548(C_word t0,C_word t1);
C_noret_decl(f_3623)
static void C_ccall f_3623(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3620)
static void C_ccall f_3620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2535)
static void C_fcall f_2535(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1829)
static void C_fcall f_1829(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1824)
static void C_ccall f_1824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3519)
static void C_fcall f_3519(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3511)
static void C_ccall f_3511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2782)
static void C_fcall f_2782(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3549)
static void C_ccall f_3549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3546)
static void C_ccall f_3546(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3542)
static void C_ccall f_3542(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3542)
static void C_ccall f_3542r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2774)
static void C_ccall f_2774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2776)
static void C_fcall f_2776(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1839)
static void C_ccall f_1839(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2770)
static void C_ccall f_2770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2614)
static void C_ccall f_2614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2619)
static C_word C_fcall f_2619(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_2611)
static void C_ccall f_2611(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2766)
static void C_ccall f_2766(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2605)
static void C_ccall f_2605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2607)
static void C_ccall f_2607(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1295)
static void C_ccall f_1295(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2601)
static void C_ccall f_2601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2403)
static C_word C_fcall f_2403(C_word t0,C_word t1);
C_noret_decl(f_2401)
static void C_fcall f_2401(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1269)
static void C_ccall f_1269(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3560)
static void C_ccall f_3560(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2678)
static void C_ccall f_2678(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2666)
static void C_ccall f_2666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2668)
static void C_fcall f_2668(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2924)
static void C_ccall f_2924(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2914)
static void C_fcall f_2914(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2687)
static C_word C_fcall f_2687(C_word t0,C_word t1);
C_noret_decl(f_2904)
static void C_fcall f_2904(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3742)
static void C_fcall f_3742(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3740)
static void C_ccall f_3740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2951)
static void C_ccall f_2951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3218)
static void C_ccall f_3218(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3736)
static void C_ccall f_3736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3211)
static void C_ccall f_3211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3732)
static void C_ccall f_3732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3316)
static void C_ccall f_3316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2966)
static void C_ccall f_2966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3208)
static void C_ccall f_3208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3728)
static void C_ccall f_3728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3724)
static void C_ccall f_3724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3386)
static void C_ccall f_3386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3720)
static void C_ccall f_3720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3383)
static void C_ccall f_3383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2956)
static void C_fcall f_2956(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3373)
static void C_ccall f_3373(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3373)
static void C_ccall f_3373r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2947)
static void C_fcall f_2947(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2945)
static void C_fcall f_2945(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2102)
static void C_fcall f_2102(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1311)
static void C_fcall f_1311(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2802)
static void C_ccall f_2802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3331)
static void C_ccall f_3331(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3529)
static void C_ccall f_3529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3329)
static void C_ccall f_3329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3321)
static void C_ccall f_3321(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3321)
static void C_ccall f_3321r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3325)
static void C_ccall f_3325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3555)
static void C_ccall f_3555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3552)
static void C_ccall f_3552(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_3816)
static void C_fcall trf_3816(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3816(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3816(t0,t1,t2);}

C_noret_decl(trf_1421)
static void C_fcall trf_1421(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1421(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1421(t0,t1,t2);}

C_noret_decl(trf_2337)
static void C_fcall trf_2337(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2337(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2337(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2343)
static void C_fcall trf_2343(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2343(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2343(t0,t1,t2);}

C_noret_decl(trf_1578)
static void C_fcall trf_1578(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1578(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1578(t0,t1,t2,t3);}

C_noret_decl(trf_1564)
static void C_fcall trf_1564(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1564(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1564(t0,t1);}

C_noret_decl(trf_2283)
static void C_fcall trf_2283(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2283(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2283(t0,t1,t2);}

C_noret_decl(trf_2994)
static void C_fcall trf_2994(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2994(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2994(t0,t1,t2);}

C_noret_decl(trf_1361)
static void C_fcall trf_1361(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1361(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1361(t0,t1,t2);}

C_noret_decl(trf_2229)
static void C_fcall trf_2229(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2229(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2229(t0,t1,t2);}

C_noret_decl(trf_1355)
static void C_fcall trf_1355(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1355(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1355(t0,t1,t2);}

C_noret_decl(trf_2177)
static void C_fcall trf_2177(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2177(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2177(t0,t1,t2,t3);}

C_noret_decl(trf_1747)
static void C_fcall trf_1747(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1747(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1747(t0,t1,t2,t3);}

C_noret_decl(trf_1473)
static void C_fcall trf_1473(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1473(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1473(t0,t1,t2,t3);}

C_noret_decl(trf_1498)
static void C_fcall trf_1498(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1498(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1498(t0,t1,t2);}

C_noret_decl(trf_1810)
static void C_fcall trf_1810(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1810(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1810(t0,t1,t2);}

C_noret_decl(trf_2036)
static void C_fcall trf_2036(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2036(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2036(t0,t1,t2);}

C_noret_decl(trf_3851)
static void C_fcall trf_3851(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3851(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3851(t0,t1,t2);}

C_noret_decl(trf_1856)
static void C_fcall trf_1856(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1856(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1856(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1805)
static void C_fcall trf_1805(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1805(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1805(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1861)
static void C_fcall trf_1861(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1861(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1861(t0,t1,t2);}

C_noret_decl(trf_2492)
static void C_fcall trf_2492(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2492(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2492(t0,t1,t2,t3);}

C_noret_decl(trf_1877)
static void C_fcall trf_1877(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1877(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1877(t0,t1,t2);}

C_noret_decl(trf_2718)
static void C_fcall trf_2718(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2718(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2718(t0,t1);}

C_noret_decl(trf_3781)
static void C_fcall trf_3781(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3781(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3781(t0,t1,t2);}

C_noret_decl(trf_1975)
static void C_fcall trf_1975(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1975(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1975(t0,t1,t2,t3);}

C_noret_decl(trf_3446)
static void C_fcall trf_3446(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3446(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3446(t0,t1,t2);}

C_noret_decl(trf_3444)
static void C_fcall trf_3444(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3444(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3444(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2535)
static void C_fcall trf_2535(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2535(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2535(t0,t1,t2,t3);}

C_noret_decl(trf_1829)
static void C_fcall trf_1829(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1829(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1829(t0,t1,t2);}

C_noret_decl(trf_3519)
static void C_fcall trf_3519(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3519(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3519(t0,t1,t2);}

C_noret_decl(trf_2782)
static void C_fcall trf_2782(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2782(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2782(t0,t1,t2);}

C_noret_decl(trf_2776)
static void C_fcall trf_2776(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2776(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2776(t0,t1,t2,t3);}

C_noret_decl(trf_2401)
static void C_fcall trf_2401(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2401(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2401(t0,t1,t2);}

C_noret_decl(trf_2668)
static void C_fcall trf_2668(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2668(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2668(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2914)
static void C_fcall trf_2914(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2914(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2914(t0,t1,t2);}

C_noret_decl(trf_2904)
static void C_fcall trf_2904(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2904(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2904(t0,t1,t2);}

C_noret_decl(trf_3742)
static void C_fcall trf_3742(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3742(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3742(t0,t1,t2);}

C_noret_decl(trf_2956)
static void C_fcall trf_2956(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2956(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2956(t0,t1,t2);}

C_noret_decl(trf_2947)
static void C_fcall trf_2947(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2947(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2947(t0,t1,t2);}

C_noret_decl(trf_2945)
static void C_fcall trf_2945(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2945(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2945(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2102)
static void C_fcall trf_2102(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2102(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2102(t0,t1,t2);}

C_noret_decl(trf_1311)
static void C_fcall trf_1311(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1311(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1311(t0,t1,t2);}

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

/* k2747 in k2744 in ucs-range->char-set in k1267 */
static void C_ccall f_2749(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:439: make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2744 in ucs-range->char-set in k1267 */
static void C_ccall f_2746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2746,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2749,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:438: %ucs-range->char-set! */
f_2668(t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t2,lf[52]);}

/* a3392 in k3381 in char-set-xor in k1267 */
static void C_ccall f_3393(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3393,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=t2;
t7=t3;
t8=C_i_string_ref(t6,t7);
t9=C_fix(C_character_code(t8));
t10=C_fixnum_difference(C_fix(1),t9);
t11=t1;
t12=t2;
t13=t3;
t14=C_make_character(C_unfix(t10));
t15=t11;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_i_string_set(t12,t13,t14));}}

/* map-loop906 in k3700 in k3696 in k3693 in k3690 in k3686 in k3682 in k3678 in k3674 in k3671 in k3666 in k3663 in k3659 in k3656 in k3653 in k3650 in k3646 in k3642 in k1267 */
static void C_fcall f_3816(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3816,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3845,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* srfi-14.scm:671: g912 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3808 in map-loop934 in k3710 in k3706 in k3703 in k3700 in k3696 in k3693 in k3690 in k3686 in k3682 in k3678 in k3674 in k3671 in k3666 in k3663 in k3659 in k3656 in k3653 in k3650 in k3646 in k3642 in ... */
static void C_ccall f_3810(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3810,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3781(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3781(t6,((C_word*)t0)[5],t5);}}

/* ->char-set in k1267 */
static void C_ccall f_2874(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2874,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2881,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:477: char-set? */
t4=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* ucs-range->char-set in k1267 */
static void C_ccall f_2736(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_2736r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2736r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2736r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2746,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm:437: %default-base */
f_1311(t10,t9,*((C_word*)lf[52]+1));}

/* char-set-unfold in k1267 */
static void C_ccall f_2379(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...){
C_word tmp;
C_word t6;
va_list v;
C_word *a,c2=c;
C_save_rest(t5,c2,6);
if(c<6) C_bad_min_argc_2(c,6,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr6r,(void*)f_2379r,6,t0,t1,t2,t3,t4,t5);}
else{
a=C_alloc((c-6)*3);
t6=C_restore_rest(a,C_rest_count(0));
f_2379r(t0,t1,t2,t3,t4,t5,t6);}}

static void C_ccall f_2379r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word *a=C_alloc(7);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2383,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* srfi-14.scm:346: %default-base */
f_1311(t7,t6,*((C_word*)lf[39]+1));}

/* char-set= in k1267 */
static void C_ccall f_1402(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1402r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1402r(t0,t1,t2);}}

static void C_ccall f_1402r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=C_i_car(t2);
t5=t2;
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1416,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:162: %char-set:s/check */
f_1355(t7,t4,lf[14]);}}

/* k2375 in lp in %char-set-unfold! in k1267 */
static void C_ccall f_2377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2377,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2373,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* srfi-14.scm:342: f */
t3=((C_word*)t0)[7];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[6]);}}

/* k2371 in k2375 in lp in %char-set-unfold! in k1267 */
static void C_ccall f_2373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2373,2,t0,t1);}
t2=C_fix(C_character_code(t1));
t3=((C_word*)t0)[2];
t4=C_i_string_set(t3,t2,C_make_character(1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2365,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:343: g */
t6=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[6]);}

/* k1398 in char-set-copy in k1267 */
static void C_ccall f_1400(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_string_length(t1);
/* srfi-14.scm:102: substring */
t3=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],t1,C_fix(0),t2);}

/* k2870 in k2866 in char-set-filter! in k1267 */
static void C_ccall f_2872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:467: %char-set-filter! */
f_2776(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2862 in char-set-filter! in k1267 */
static void C_ccall f_2864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k2866 in char-set-filter! in k1267 */
static void C_ccall f_2868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2868,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2872,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:469: %char-set:s/check */
f_1355(t3,((C_word*)t0)[4],lf[56]);}

/* char-set-filter! in k1267 */
static void C_ccall f_2860(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2860,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2864,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2868,a[2]=t5,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:468: %char-set:s/check */
f_1355(t6,t3,lf[56]);}

/* lp in k1414 in char-set= in k1267 */
static void C_fcall f_1421(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1421,NULL,3,t0,t1,t2);}
t3=C_i_pairp(t2);
t4=C_i_not(t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1443,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=C_i_car(t2);
/* srfi-14.scm:165: %char-set:s/check */
f_1355(t5,t6,lf[14]);}}

/* k1414 in char-set= in k1267 */
static void C_ccall f_1416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1416,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1421,a[2]=t2,a[3]=t4,a[4]=((C_word)li8),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1421(t6,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2384 in k2381 in char-set-unfold in k1267 */
static void C_ccall f_2386(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:348: make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2381 in char-set-unfold in k1267 */
static void C_ccall f_2383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2383,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2386,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:347: %char-set-unfold! */
f_2337(t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t2,((C_word*)t0)[6]);}

/* k2879 in ->char-set in k1267 */
static void C_ccall f_2881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[2]))){
/* srfi-14.scm:478: string->char-set */
t2=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
if(C_truep(C_charp(((C_word*)t0)[2]))){
/* srfi-14.scm:479: char-set */
t2=*((C_word*)lf[2]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* srfi-14.scm:480: ##sys#error */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[57],lf[58],((C_word*)t0)[2]);}}}}

/* %char-set-unfold! in k1267 */
static void C_fcall f_2337(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2337,NULL,6,t1,t2,t3,t4,t5,t6);}
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2343,a[2]=t5,a[3]=t8,a[4]=t4,a[5]=t3,a[6]=t2,a[7]=((C_word)li51),tmp=(C_word)a,a+=8,tmp));
t10=((C_word*)t8)[1];
f_2343(t10,t1,t6);}

/* lp in %char-set-unfold! in k1267 */
static void C_fcall f_2343(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2343,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2377,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* srfi-14.scm:341: p */
t4=((C_word*)t0)[6];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,t2);}

/* k3894 in k3663 in k3659 in k3656 in k3653 in k3650 in k3646 in k3642 in k1267 */
static void C_ccall f_3896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:642: ucs-range->char-set! */
t2=*((C_word*)lf[53]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],C_fix(216),C_fix(223),C_SCHEME_TRUE,t1);}

/* k1568 in k1562 in char-set-hash in k1267 */
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1570,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1628,a[2]=((C_word*)t0)[2],a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp);
t4=f_1628(t3,C_fix(65536));
t5=t4;
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1578,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t7,a[5]=t5,a[6]=((C_word)li14),tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_1578(t9,((C_word*)t0)[3],C_fix(255),C_fix(0));}

/* lp in k1568 in k1562 in char-set-hash in k1267 */
static void C_fcall f_1578(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1578,NULL,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
/* srfi-14.scm:205: modulo */
t5=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,((C_word*)((C_word*)t0)[2])[1]);}
else{
t5=C_fixnum_difference(t2,C_fix(1));
t6=t2;
t7=C_i_string_ref(((C_word*)t0)[3],t6);
t8=C_fix(C_character_code(t7));
t9=C_eqp(t8,C_fix(0));
if(C_truep(t9)){
t10=t3;
/* srfi-14.scm:206: lp */
t15=t1;
t16=t5;
t17=t10;
t1=t15;
t2=t16;
t3=t17;
goto loop;}
else{
t10=C_fixnum_times(C_fix(37),t3);
t11=C_fixnum_plus(t10,t2);
t12=C_fixnum_and(((C_word*)t0)[5],t11);
/* srfi-14.scm:206: lp */
t15=t1;
t16=t5;
t17=t12;
t1=t15;
t2=t16;
t3=t17;
goto loop;}}}

/* k3878 in map-loop877 in k3690 in k3686 in k3682 in k3678 in k3674 in k3671 in k3666 in k3663 in k3659 in k3656 in k3653 in k3650 in k3646 in k3642 in k1267 */
static void C_ccall f_3880(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3880,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3851(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3851(t6,((C_word*)t0)[5],t5);}}

/* k1562 in char-set-hash in k1267 */
static void C_fcall f_1564(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1564,NULL,2,t0,t1);}
t2=C_i_check_exact_2(((C_word*)((C_word*)t0)[2])[1],lf[16]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1570,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:200: %char-set:s/check */
f_1355(t3,((C_word*)t0)[4],lf[16]);}

/* k2256 in lp in k2222 in char-set-every in k1267 */
static void C_ccall f_2258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
/* srfi-14.scm:325: lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2229(t3,((C_word*)t0)[4],t2);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a3253 in k3250 in char-set-difference! in k1267 */
static void C_ccall f_3254(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3254,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=t1;
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_string_set(t2,t3,C_make_character(0)));}}

/* k3250 in char-set-difference! in k1267 */
static void C_ccall f_3252(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3252,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3254,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:566: %char-set-algebra */
f_2945(((C_word*)t0)[2],t1,((C_word*)t0)[3],t2,lf[69]);}

/* char-set-complement! in k1267 */
static void C_ccall f_3057(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3057,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3061,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:528: %char-set:s/check */
f_1355(t3,t2,lf[62]);}

/* lp in k2276 in char-set-any in k1267 */
static void C_fcall f_2283(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2283,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2293,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=t2;
t6=C_i_string_ref(((C_word*)t0)[3],t5);
t7=C_fix(C_character_code(t6));
t8=C_eqp(t7,C_fix(0));
if(C_truep(C_i_not(t8))){
t9=t2;
t10=C_make_character(C_unfix(t9));
/* srfi-14.scm:332: pred */
t11=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t11))(3,t11,t4,t10);}
else{
t9=C_fixnum_difference(t2,C_fix(1));
/* srfi-14.scm:333: lp */
t13=t1;
t14=t9;
t1=t13;
t2=t14;
goto loop;}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* char-set-fold in k1267 */
static void C_ccall f_2168(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2168,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2172,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:312: %char-set:s/check */
f_1355(t5,t4,lf[35]);}

/* k1330 in %default-base in k1267 */
static void C_ccall f_1332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1332,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1339,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:114: char-set:s */
t3=*((C_word*)lf[3]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
/* srfi-14.scm:115: ##sys#error */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[8],((C_word*)t0)[4],((C_word*)t0)[3]);}}

/* k3246 in char-set-difference! in k1267 */
static void C_ccall f_3248(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k1337 in k1330 in %default-base in k1267 */
static void C_ccall f_1339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_i_string_length(t1);
/* srfi-14.scm:102: substring */
t4=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t1,C_fix(0),t3);}

/* char-set-difference! in k1267 */
static void C_ccall f_3244(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_3244r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3244r(t0,t1,t2,t3);}}

static void C_ccall f_3244r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3248,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3252,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:566: %char-set:s/check */
f_1355(t5,t2,lf[69]);}

/* for-each-loop619 in %char-set-algebra in k1267 */
static void C_fcall f_2994(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2994,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3004,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* srfi-14.scm:509: g620 */
t5=((C_word*)t0)[3];
f_2947(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* lp in %char-set:s/check in k1267 */
static void C_fcall f_1361(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1361,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1368,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm:126: char-set? */
t4=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k3235 in char-set-intersection in k1267 */
static void C_ccall f_3237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_string_length(t1);
/* srfi-14.scm:102: substring */
t3=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],t1,C_fix(0),t2);}

/* k1366 in lp in %char-set:s/check in k1267 */
static void C_ccall f_1368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1368,2,t0,t1);}
if(C_truep(t1)){
/* srfi-14.scm:126: char-set:s */
t2=*((C_word*)lf[3]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1378,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:127: ##sys#error */
t3=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],lf[12],((C_word*)t0)[3]);}}

/* k2363 in k2371 in k2375 in lp in %char-set-unfold! in k1267 */
static void C_ccall f_2365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:343: lp */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2343(t2,((C_word*)t0)[3],t1);}

/* a3031 in k3022 in k3019 in char-set-complement in k1267 */
static void C_ccall f_3032(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3032,4,t0,t1,t2,t3);}
t4=C_fixnum_difference(C_fix(1),t3);
t5=C_make_character(C_unfix(t4));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_string_set(((C_word*)t0)[2],t2,t5));}

/* k2222 in char-set-every in k1267 */
static void C_ccall f_2224(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2224,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2229,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li47),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2229(t6,((C_word*)t0)[3],C_fix(255));}

/* lp in k2222 in char-set-every in k1267 */
static void C_fcall f_2229(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2229,NULL,3,t0,t1,t2);}
t3=t2;
t4=C_fixnum_lessp(t3,C_fix(0));
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=t2;
t6=C_i_string_ref(((C_word*)t0)[2],t5);
t7=C_fix(C_character_code(t6));
t8=C_eqp(t7,C_fix(0));
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2258,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t8)){
if(C_truep(t8)){
t10=C_fixnum_difference(t2,C_fix(1));
/* srfi-14.scm:325: lp */
t14=t1;
t15=t10;
t1=t14;
t2=t15;
goto loop;}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}
else{
t10=t2;
t11=C_make_character(C_unfix(t10));
/* srfi-14.scm:324: pred */
t12=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t12))(3,t12,t9,t11);}}}

/* char-set-every in k1267 */
static void C_ccall f_2220(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2220,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2224,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:321: %char-set:s/check */
f_1355(t4,t3,lf[36]);}

/* %char-set:s/check in k1267 */
static void C_fcall f_1355(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1355,NULL,3,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1361,a[2]=t5,a[3]=t3,a[4]=((C_word)li5),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1361(t7,t1,t2);}

/* k2393 in char-set-unfold! in k1267 */
static void C_ccall f_2395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k2397 in char-set-unfold! in k1267 */
static void C_ccall f_2399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:351: %char-set-unfold! */
f_2337(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,((C_word*)t0)[6]);}

/* k3019 in char-set-complement in k1267 */
static void C_ccall f_3021(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3021,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3024,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t3,C_fix(256),C_make_character(32));}

/* char-set-unfold! in k1267 */
static void C_ccall f_2391(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(c!=7) C_bad_argc_2(c,7,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_2391,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2395,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2399,a[2]=t7,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* srfi-14.scm:352: %char-set:s/check */
f_1355(t8,t6,lf[40]);}

/* k3025 in k3022 in k3019 in char-set-complement in k1267 */
static void C_ccall f_3027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:525: make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3022 in k3019 in char-set-complement in k1267 */
static void C_ccall f_3024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3024,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3027,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3032,a[2]=t2,a[3]=((C_word)li84),tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:524: %string-iter */
f_2904(t3,t4,((C_word*)t0)[3]);}

/* a3292 in k3283 in char-set-difference in k1267 */
static void C_ccall f_3293(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3293,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=t1;
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_string_set(t2,t3,C_make_character(0)));}}

/* char-set-copy in k1267 */
static void C_ccall f_1388(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1388,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1396,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1400,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:155: %char-set:s/check */
f_1355(t4,t2,lf[13]);}

/* char-set-complement in k1267 */
static void C_ccall f_3017(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3017,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3021,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:522: %char-set:s/check */
f_1355(t3,t2,lf[61]);}

/* k3283 in char-set-difference in k1267 */
static void C_ccall f_3285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3285,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3288,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3293,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:573: %char-set-algebra */
f_2945(t3,t2,((C_word*)t0)[3],t4,lf[70]);}

/* char-set-union in k1267 */
static void C_ccall f_3121(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_3121r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3121r(t0,t1,t2);}}

static void C_ccall f_3121r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3131,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3164,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=t2;
t6=C_u_i_car(t5);
/* srfi-14.scm:542: %char-set:s/check */
f_1355(t4,t6,lf[64]);}
else{
/* srfi-14.scm:545: char-set-copy */
t3=*((C_word*)lf[13]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,*((C_word*)lf[65]+1));}}

/* k1376 in k1366 in lp in %char-set:s/check in k1267 */
static void C_ccall f_1378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:127: lp */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1361(t2,((C_word*)t0)[3],t1);}

/* k3286 in k3283 in char-set-difference in k1267 */
static void C_ccall f_3288(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:574: make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2193 in lp in k2170 in char-set-fold in k1267 */
static void C_ccall f_2195(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:315: lp */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2177(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3002 in for-each-loop619 in %char-set-algebra in k1267 */
static void C_ccall f_3004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2994(t3,((C_word*)t0)[4],t2);}

/* k2170 in char-set-fold in k1267 */
static void C_ccall f_2172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2172,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2177,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word)li45),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2177(t6,((C_word*)t0)[3],C_fix(255),((C_word*)t0)[4]);}

/* k1698 in char-set-size in k1267 */
static void C_ccall f_1700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1700,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1705,a[2]=t2,a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_1705(t3,C_fix(255),C_fix(0)));}

/* char-set-difference in k1267 */
static void C_ccall f_3275(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_3275r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3275r(t0,t1,t2,t3);}}

static void C_ccall f_3275r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
if(C_truep(C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3285,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3316,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:572: %char-set:s/check */
f_1355(t5,t2,lf[70]);}
else{
/* srfi-14.scm:575: char-set-copy */
t4=*((C_word*)lf[13]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t2);}}

/* lp in k1698 in char-set-size in k1267 */
static C_word C_fcall f_1705(C_word t0,C_word t1,C_word t2){
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
t3=t1;
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
t4=t2;
return(t4);}
else{
t4=C_fixnum_difference(t1,C_fix(1));
t5=t1;
t6=C_i_string_ref(((C_word*)t0)[2],t5);
t7=C_fix(C_character_code(t6));
t8=C_fixnum_plus(t2,t7);
t11=t4;
t12=t8;
t1=t11;
t2=t12;
goto loop;}}

/* k1688 in char-set-contains? in k1267 */
static void C_ccall f_1690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_fix(C_character_code(t2));
t4=((C_word*)t0)[3];
t5=C_i_string_ref(t1,t3);
t6=C_fix(C_character_code(t5));
t7=C_eqp(t6,C_fix(0));
t8=t4;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_i_not(t7));}

/* char-set-size in k1267 */
static void C_ccall f_1696(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1696,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1700,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:218: %char-set:s/check */
f_1355(t3,t2,lf[19]);}

/* k2089 in char-set-map in k1267 */
static void C_ccall f_2091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2091,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2094,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t3,C_fix(256),C_make_character(0));}

/* k2092 in k2089 in char-set-map in k1267 */
static void C_ccall f_2094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2094,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2097,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2102,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=((C_word)li43),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_2102(t7,t3,C_fix(255));}

/* k2158 in lp in k2092 in k2089 in char-set-map in k1267 */
static void C_ccall f_2160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_fix(C_character_code(t1));
t3=C_i_string_set(((C_word*)t0)[2],t2,C_make_character(1));
t4=C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* srfi-14.scm:307: lp */
t5=((C_word*)((C_word*)t0)[4])[1];
f_2102(t5,((C_word*)t0)[5],t4);}

/* k1394 in char-set-copy in k1267 */
static void C_ccall f_1396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:155: make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* a3099 in k3096 in char-set-union! in k1267 */
static void C_ccall f_3100(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3100,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=t1;
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_string_set(t2,t3,C_make_character(1)));}}

/* k2095 in k2092 in k2089 in char-set-map in k1267 */
static void C_ccall f_2097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:308: make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* lp in k2170 in char-set-fold in k1267 */
static void C_fcall f_2177(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2177,NULL,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t5=t3;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_fixnum_difference(t2,C_fix(1));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2195,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=t2;
t9=C_i_string_ref(((C_word*)t0)[3],t8);
t10=C_fix(C_character_code(t9));
t11=C_eqp(t10,C_fix(0));
if(C_truep(t11)){
t12=t3;
/* srfi-14.scm:315: lp */
t17=t1;
t18=t6;
t19=t12;
t1=t17;
t2=t18;
t3=t19;
goto loop;}
else{
t12=t2;
t13=C_make_character(C_unfix(t12));
/* srfi-14.scm:317: kons */
t14=((C_word*)t0)[4];
((C_proc4)C_fast_retrieve_proc(t14))(4,t14,t7,t13,t3);}}}

/* char-set-map in k1267 */
static void C_ccall f_2087(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2087,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2091,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:301: %char-set:s/check */
f_1355(t4,t3,lf[34]);}

/* k1441 in lp in k1414 in char-set= in k1267 */
static void C_ccall f_1443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(C_i_string_equal_p(((C_word*)t0)[2],t1))){
t2=((C_word*)t0)[3];
t3=C_u_i_cdr(t2);
/* srfi-14.scm:166: lp */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1421(t4,((C_word*)t0)[5],t3);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k2276 in char-set-any in k1267 */
static void C_ccall f_2278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2278,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2283,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word)li49),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2283(t6,((C_word*)t0)[3],C_fix(255));}

/* char-set-any in k1267 */
static void C_ccall f_2274(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2274,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2278,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:329: %char-set:s/check */
f_1355(t4,t3,lf[37]);}

/* k1740 in char-set-count in k1267 */
static void C_ccall f_1742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1742,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1747,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word)li19),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_1747(t6,((C_word*)t0)[3],C_fix(255),C_fix(0));}

/* lp in k1740 in char-set-count in k1267 */
static void C_fcall f_1747(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1747,NULL,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t5=t3;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_fixnum_difference(t2,C_fix(1));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1768,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t8=t2;
t9=C_i_string_ref(((C_word*)t0)[3],t8);
t10=C_fix(C_character_code(t9));
t11=C_eqp(t10,C_fix(0));
if(C_truep(C_i_not(t11))){
t12=t2;
t13=C_make_character(C_unfix(t12));
/* srfi-14.scm:229: pred */
t14=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t14))(3,t14,t7,t13);}
else{
t12=t7;
f_1768(2,t12,C_SCHEME_FALSE);}}}

/* k2856 in k2846 in char-set-filter in k1267 */
static void C_ccall f_2858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:460: %char-set-filter! */
f_2776(((C_word*)t0)[2],((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2849 in k2846 in char-set-filter in k1267 */
static void C_ccall f_2851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:464: make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2291 in lp in k2276 in char-set-any in k1267 */
static void C_ccall f_2293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* srfi-14.scm:333: lp */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2283(t3,((C_word*)t0)[2],t2);}}

/* k2846 in char-set-filter in k1267 */
static void C_ccall f_2848(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2848,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2851,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2858,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:461: %char-set:s/check */
f_1355(t4,((C_word*)t0)[4],lf[56]);}

/* char-set-filter in k1267 */
static void C_ccall f_2844(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_2844r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2844r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2844r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2848,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:459: %default-base */
f_1311(t5,t4,*((C_word*)lf[55]+1));}

/* char-set<= in k1267 */
static void C_ccall f_1453(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1453r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1453r(t0,t1,t2);}}

static void C_ccall f_1453r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=C_i_car(t2);
t5=t2;
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1471,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:173: %char-set:s/check */
f_1355(t7,t4,lf[15]);}}

/* k3615 in char-set-diff+intersection in k1267 */
static void C_ccall f_3617(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3617,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3620,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t3,C_fix(256),C_make_character(0));}

/* char-set-diff+intersection in k1267 */
static void C_ccall f_3613(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_3613r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3613r(t0,t1,t2,t3);}}

static void C_ccall f_3613r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3617,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3640,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:616: %char-set:s/check */
f_1355(t5,t2,lf[75]);}

/* k1481 in lp in k1469 in char-set<= in k1267 */
static void C_ccall f_1483(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1483,2,t0,t1);}
t2=t1;
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_eqp(((C_word*)t0)[3],t2);
if(C_truep(t5)){
/* srfi-14.scm:177: lp */
t6=((C_word*)((C_word*)t0)[4])[1];
f_1473(t6,((C_word*)t0)[5],t2,t4);}
else{
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1498,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t7,a[7]=((C_word)li10),tmp=(C_word)a,a+=8,tmp));
t9=((C_word*)t7)[1];
f_1498(t9,((C_word*)t0)[5],C_fix(255));}}

/* lp in k1469 in char-set<= in k1267 */
static void C_fcall f_1473(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1473,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t3);
t5=C_i_not(t4);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1483,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_i_car(t3);
/* srfi-14.scm:175: %char-set:s/check */
f_1355(t6,t7,lf[15]);}}

/* k3096 in char-set-union! in k1267 */
static void C_ccall f_3098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3098,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3100,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:536: %char-set-algebra */
f_2945(((C_word*)t0)[2],t1,((C_word*)t0)[3],t2,lf[63]);}

/* k3092 in char-set-union! in k1267 */
static void C_ccall f_3094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k1469 in char-set<= in k1267 */
static void C_ccall f_1471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1471,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1473,a[2]=t3,a[3]=((C_word)li11),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_1473(t5,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* char-set-union! in k1267 */
static void C_ccall f_3090(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_3090r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3090r(t0,t1,t2,t3);}}

static void C_ccall f_3090r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3094,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3098,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:536: %char-set:s/check */
f_1355(t5,t2,lf[63]);}

/* lp2 in k1481 in lp in k1469 in char-set<= in k1267 */
static void C_fcall f_1498(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1498,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
/* srfi-14.scm:179: lp */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1473(t4,t1,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t4=((C_word*)t0)[5];
t5=t2;
t6=C_i_string_ref(t4,t5);
t7=C_fix(C_character_code(t6));
t8=t2;
t9=C_i_string_ref(((C_word*)t0)[3],t8);
t10=C_fix(C_character_code(t9));
if(C_truep(C_fixnum_less_or_equal_p(t7,t10))){
t11=C_fixnum_difference(t2,C_fix(1));
/* srfi-14.scm:181: lp2 */
t13=t1;
t14=t11;
t1=t13;
t2=t14;
goto loop;}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_srfi_2d14_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_srfi_2d14_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("srfi_2d14_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(852)){
C_save(t1);
C_rereclaim2(852*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,102);
lf[1]=C_h_intern(&lf[1],13,"make-char-set");
lf[2]=C_h_intern(&lf[2],8,"char-set");
lf[3]=C_h_intern(&lf[3],10,"char-set:s");
lf[4]=C_h_intern(&lf[4],9,"char-set\077");
lf[6]=C_h_intern(&lf[6],9,"substring");
lf[7]=C_h_intern(&lf[7],9,"\003syserror");
lf[8]=C_decode_literal(C_heaptop,"\376B\000\000 BASE-CS parameter not a char-set");
lf[9]=C_decode_literal(C_heaptop,"\376B\000\0003Expected final base char set -- too many parameters");
lf[10]=C_h_intern(&lf[10],15,"\003sysmake-string");
lf[12]=C_decode_literal(C_heaptop,"\376B\000\000\016Not a char-set");
lf[13]=C_h_intern(&lf[13],13,"char-set-copy");
lf[14]=C_h_intern(&lf[14],9,"char-set=");
lf[15]=C_h_intern(&lf[15],10,"char-set<=");
lf[16]=C_h_intern(&lf[16],13,"char-set-hash");
lf[17]=C_h_intern(&lf[17],6,"modulo");
lf[18]=C_h_intern(&lf[18],18,"char-set-contains\077");
lf[19]=C_h_intern(&lf[19],13,"char-set-size");
lf[20]=C_h_intern(&lf[20],14,"char-set-count");
lf[22]=C_h_intern(&lf[22],8,"for-each");
lf[24]=C_h_intern(&lf[24],15,"char-set-adjoin");
lf[25]=C_h_intern(&lf[25],16,"char-set-adjoin!");
lf[26]=C_h_intern(&lf[26],15,"char-set-delete");
lf[27]=C_h_intern(&lf[27],16,"char-set-delete!");
lf[28]=C_h_intern(&lf[28],15,"char-set-cursor");
lf[30]=C_h_intern(&lf[30],16,"end-of-char-set\077");
lf[31]=C_h_intern(&lf[31],12,"char-set-ref");
lf[32]=C_h_intern(&lf[32],20,"char-set-cursor-next");
lf[33]=C_h_intern(&lf[33],17,"char-set-for-each");
lf[34]=C_h_intern(&lf[34],12,"char-set-map");
lf[35]=C_h_intern(&lf[35],13,"char-set-fold");
lf[36]=C_h_intern(&lf[36],14,"char-set-every");
lf[37]=C_h_intern(&lf[37],12,"char-set-any");
lf[39]=C_h_intern(&lf[39],15,"char-set-unfold");
lf[40]=C_h_intern(&lf[40],16,"char-set-unfold!");
lf[42]=C_h_intern(&lf[42],14,"list->char-set");
lf[43]=C_h_intern(&lf[43],15,"list->char-set!");
lf[44]=C_h_intern(&lf[44],14,"char-set->list");
lf[46]=C_h_intern(&lf[46],16,"string->char-set");
lf[47]=C_h_intern(&lf[47],17,"string->char-set!");
lf[48]=C_h_intern(&lf[48],16,"char-set->string");
lf[49]=C_h_intern(&lf[49],11,"make-string");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000`Requested UCS range contains unavailable characters -- this implementation "
"only supports Latin-1");
lf[52]=C_h_intern(&lf[52],19,"ucs-range->char-set");
lf[53]=C_h_intern(&lf[53],20,"ucs-range->char-set!");
lf[55]=C_h_intern(&lf[55],15,"char-set-filter");
lf[56]=C_h_intern(&lf[56],16,"char-set-filter!");
lf[57]=C_h_intern(&lf[57],10,"->char-set");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\036Not a charset, string or char.");
lf[61]=C_h_intern(&lf[61],19,"char-set-complement");
lf[62]=C_h_intern(&lf[62],20,"char-set-complement!");
lf[63]=C_h_intern(&lf[63],15,"char-set-union!");
lf[64]=C_h_intern(&lf[64],14,"char-set-union");
lf[65]=C_h_intern(&lf[65],14,"char-set:empty");
lf[66]=C_h_intern(&lf[66],22,"char-set-intersection!");
lf[67]=C_h_intern(&lf[67],21,"char-set-intersection");
lf[68]=C_h_intern(&lf[68],13,"char-set:full");
lf[69]=C_h_intern(&lf[69],20,"char-set-difference!");
lf[70]=C_h_intern(&lf[70],19,"char-set-difference");
lf[71]=C_h_intern(&lf[71],13,"char-set-xor!");
lf[72]=C_h_intern(&lf[72],12,"char-set-xor");
lf[74]=C_h_intern(&lf[74],27,"char-set-diff+intersection!");
lf[75]=C_h_intern(&lf[75],26,"char-set-diff+intersection");
lf[76]=C_h_intern(&lf[76],11,"string-copy");
lf[77]=C_h_intern(&lf[77],19,"char-set:lower-case");
lf[78]=C_h_intern(&lf[78],19,"char-set:upper-case");
lf[79]=C_h_intern(&lf[79],19,"char-set:title-case");
lf[80]=C_h_intern(&lf[80],15,"char-set:letter");
lf[81]=C_h_intern(&lf[81],14,"char-set:digit");
lf[82]=C_h_intern(&lf[82],18,"char-set:hex-digit");
lf[83]=C_h_intern(&lf[83],21,"char-set:letter+digit");
lf[84]=C_h_intern(&lf[84],20,"char-set:punctuation");
lf[85]=C_h_intern(&lf[85],15,"char-set:symbol");
lf[86]=C_h_intern(&lf[86],16,"char-set:graphic");
lf[87]=C_h_intern(&lf[87],19,"char-set:whitespace");
lf[88]=C_h_intern(&lf[88],17,"char-set:printing");
lf[89]=C_h_intern(&lf[89],14,"char-set:blank");
lf[90]=C_h_intern(&lf[90],20,"char-set:iso-control");
lf[91]=C_h_intern(&lf[91],14,"char-set:ascii");
lf[92]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\011\376\003\000\000\002\376\377\001\000\000\000 \376\003\000\000\002\376\377\001\000\000\000\240\376\377\016");
lf[93]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\011\376\003\000\000\002\376\377\001\000\000\000\012\376\003\000\000\002\376\377\001\000\000\000\013\376\003\000\000\002\376\377\001\000\000\000\014\376\003\000\000\002\376\377\001\000\000\000\015\376\003\000\000\002\376\377\001\000\000\000 \376\003\000\000\002\376\377\001"
"\000\000\000\240\376\377\016");
lf[94]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\242\376\003\000\000\002\376\377\001\000\000\000\243\376\003\000\000\002\376\377\001\000\000\000\244\376\003\000\000\002\376\377\001\000\000\000\245\376\003\000\000\002\376\377\001\000\000\000\246\376\003\000\000\002\376\377\001\000\000\000\247\376\003\000\000\002\376\377\001"
"\000\000\000\250\376\003\000\000\002\376\377\001\000\000\000\251\376\003\000\000\002\376\377\001\000\000\000\254\376\003\000\000\002\376\377\001\000\000\000\256\376\003\000\000\002\376\377\001\000\000\000\257\376\003\000\000\002\376\377\001\000\000\000\260\376\003\000\000\002\376\377\001\000\000\000\261\376\003\000\000"
"\002\376\377\001\000\000\000\264\376\003\000\000\002\376\377\001\000\000\000\266\376\003\000\000\002\376\377\001\000\000\000\270\376\003\000\000\002\376\377\001\000\000\000\327\376\003\000\000\002\376\377\001\000\000\000\367\376\377\016");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000\011$+<=>^`|~");
lf[96]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\241\376\003\000\000\002\376\377\001\000\000\000\253\376\003\000\000\002\376\377\001\000\000\000\255\376\003\000\000\002\376\377\001\000\000\000\267\376\003\000\000\002\376\377\001\000\000\000\273\376\003\000\000\002\376\377\001\000\000\000\277\376\377\016");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\027!\042#%&\047()\052,-./:;\077@[\134]_{}");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000\0260123456789abcdefABCDEF");
lf[99]=C_decode_literal(C_heaptop,"\376B\000\000\0120123456789");
lf[100]=C_h_intern(&lf[100],17,"register-feature!");
lf[101]=C_h_intern(&lf[101],7,"srfi-14");
C_register_lf2(lf,102,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1269,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:15: register-feature! */
t3=*((C_word*)lf[100]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[101]);}

/* g205 in k1807 in %set-char-set in k1267 */
static void C_fcall f_1810(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1810,NULL,3,t0,t1,t2);}
t3=C_fix(C_character_code(t2));
/* srfi-14.scm:238: set */
t4=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t1,((C_word*)t0)[3],t3);}

/* k3653 in k3650 in k3646 in k3642 in k1267 */
static void C_ccall f_3655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3655,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3658,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:636: ucs-range->char-set! */
t3=*((C_word*)lf[53]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,C_fix(248),C_fix(256),C_SCHEME_TRUE,t1);}

/* k3656 in k3653 in k3650 in k3646 in k3642 in k1267 */
static void C_ccall f_3658(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3658,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3661,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:637: char-set-adjoin! */
t3=*((C_word*)lf[25]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,C_make_character(181));}

/* lp in k2029 in char-set-for-each in k1267 */
static void C_fcall f_2036(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2036,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2046,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=t2;
t6=C_i_string_ref(((C_word*)t0)[3],t5);
t7=C_fix(C_character_code(t6));
t8=C_eqp(t7,C_fix(0));
if(C_truep(C_i_not(t8))){
t9=t2;
t10=C_make_character(C_unfix(t9));
/* srfi-14.scm:296: proc */
t11=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t11))(3,t11,t4,t10);}
else{
t9=C_fixnum_difference(t2,C_fix(1));
/* srfi-14.scm:297: lp */
t14=t1;
t15=t9;
t1=t14;
t2=t15;
goto loop;}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k3650 in k3646 in k3642 in k1267 */
static void C_ccall f_3652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3652,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3655,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:635: ucs-range->char-set! */
t3=*((C_word*)lf[53]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,C_fix(223),C_fix(247),C_SCHEME_TRUE,t1);}

/* k2029 in char-set-for-each in k1267 */
static void C_ccall f_2031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2031,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2036,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word)li41),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2036(t6,((C_word*)t0)[3],C_fix(255));}

/* map-loop877 in k3690 in k3686 in k3682 in k3678 in k3674 in k3671 in k3666 in k3663 in k3659 in k3656 in k3653 in k3650 in k3646 in k3642 in k1267 */
static void C_fcall f_3851(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3851,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3880,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* srfi-14.scm:661: g883 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3062 in k3059 in char-set-complement! in k1267 */
static void C_ccall f_3064(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* a3065 in k3059 in char-set-complement! in k1267 */
static void C_ccall f_3066(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3066,4,t0,t1,t2,t3);}
t4=C_fixnum_difference(C_fix(1),t3);
t5=C_make_character(C_unfix(t4));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_string_set(((C_word*)t0)[2],t2,t5));}

/* k3646 in k3642 in k1267 */
static void C_ccall f_3648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3648,2,t0,t1);}
t2=C_mutate2((C_word*)lf[68]+1 /* (set! char-set:full ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3652,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:634: ucs-range->char-set */
t4=*((C_word*)lf[52]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_fix(97),C_fix(123));}

/* k3059 in char-set-complement! in k1267 */
static void C_ccall f_3061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3061,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3064,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3066,a[2]=t2,a[3]=((C_word)li86),tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:529: %string-iter */
f_2904(t3,t4,t2);}

/* k3642 in k1267 */
static void C_ccall f_3644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3644,2,t0,t1);}
t2=C_mutate2((C_word*)lf[65]+1 /* (set! char-set:empty ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3648,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:631: char-set-complement */
t4=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,*((C_word*)lf[65]+1));}

/* k3638 in char-set-diff+intersection in k1267 */
static void C_ccall f_3640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:616: string-copy */
t2=*((C_word*)lf[76]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* char-set-for-each in k1267 */
static void C_ccall f_2027(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2027,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2031,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:293: %char-set:s/check */
f_1355(t4,t3,lf[33]);}

/* k3843 in map-loop906 in k3700 in k3696 in k3693 in k3690 in k3686 in k3682 in k3678 in k3674 in k3671 in k3666 in k3663 in k3659 in k3656 in k3653 in k3650 in k3646 in k3642 in k1267 */
static void C_ccall f_3845(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3845,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3816(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3816(t6,((C_word*)t0)[5],t5);}}

/* k2475 in list->char-set! in k1267 */
static void C_ccall f_2477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* list->char-set! in k1267 */
static void C_ccall f_2473(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2473,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2477,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2481,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:375: %char-set:s/check */
f_1355(t5,t3,lf[43]);}

/* k2044 in lp in k2029 in char-set-for-each in k1267 */
static void C_ccall f_2046(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
/* srfi-14.scm:297: lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2036(t3,((C_word*)t0)[4],t2);}

/* a1929 in char-set-delete in k1267 */
static void C_ccall f_1930(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1930,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_string_set(t2,t3,C_make_character(0)));}

/* %set-char-set! in k1267 */
static void C_fcall f_1856(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1856,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1860,a[2]=t2,a[3]=t5,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm:243: %char-set:s/check */
f_1355(t6,t4,t3);}

/* char-set-delete! in k1267 */
static void C_ccall f_1936(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_1936r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1936r(t0,t1,t2,t3);}}

static void C_ccall f_1936r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1942,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:255: %set-char-set! */
f_1856(t1,t4,lf[27],t2,t3);}

/* char-set-hash in k1267 */
static void C_ccall f_1557(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_1557r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1557r(t0,t1,t2,t3);}}

static void C_ccall f_1557r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(7);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_fix(4194304):C_i_car(t3));
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1564,a[2]=t7,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t9=C_eqp(((C_word*)t7)[1],C_fix(0));
if(C_truep(t9)){
t10=C_set_block_item(t7,0,C_fix(4194304));
t11=t8;
f_1564(t11,t10);}
else{
t10=t8;
f_1564(t10,C_SCHEME_UNDEFINED);}}

/* k2466 in k2463 in list->char-set in k1267 */
static void C_ccall f_2468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:372: make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2463 in list->char-set in k1267 */
static void C_ccall f_2465(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2465,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2468,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:371: %list->char-set! */
f_2401(t3,((C_word*)t0)[3],t2);}

/* k2590 in k2587 in string->char-set in k1267 */
static void C_ccall f_2592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:401: make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k1766 in lp in k1740 in char-set-count in k1267 */
static void C_ccall f_1768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
/* srfi-14.scm:228: lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1747(t3,((C_word*)t0)[4],((C_word*)t0)[5],t2);}
else{
t2=((C_word*)t0)[2];
/* srfi-14.scm:228: lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1747(t3,((C_word*)t0)[4],((C_word*)t0)[5],t2);}}

/* k3690 in k3686 in k3682 in k3678 in k3674 in k3671 in k3666 in k3663 in k3659 in k3656 in k3653 in k3650 in k3646 in k3642 in k1267 */
static void C_ccall f_3692(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3692,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=lf[0];
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3695,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3851,a[2]=t6,a[3]=t10,a[4]=t4,a[5]=t7,a[6]=((C_word)li114),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_3851(t12,t8,lf[96]);}

/* k1852 in %set-char-set in k1267 */
static void C_ccall f_1854(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_string_length(t1);
/* srfi-14.scm:102: substring */
t3=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],t1,C_fix(0),t2);}

/* k3693 in k3690 in k3686 in k3682 in k3678 in k3674 in k3671 in k3666 in k3663 in k3659 in k3656 in k3653 in k3650 in k3646 in k3642 in k1267 */
static void C_ccall f_3695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3695,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3698,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:667: list->char-set! */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,((C_word*)t0)[3]);}

/* k3696 in k3693 in k3690 in k3686 in k3682 in k3678 in k3674 in k3671 in k3666 in k3663 in k3659 in k3656 in k3653 in k3650 in k3646 in k3642 in k1267 */
static void C_ccall f_3698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3698,2,t0,t1);}
t2=C_mutate2((C_word*)lf[84]+1 /* (set! char-set:punctuation ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3702,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:670: string->char-set */
t4=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[95]);}

/* list->char-set in k1267 */
static void C_ccall f_2461(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2461r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2461r(t0,t1,t2,t3);}}

static void C_ccall f_2461r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2465,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:370: %default-base */
f_1311(t4,t3,*((C_word*)lf[42]+1));}

/* k1807 in %set-char-set in k1267 */
static void C_ccall f_1809(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1809,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1810,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[3];
t5=C_i_check_list_2(t4,lf[22]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1824,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1829,a[2]=t8,a[3]=t3,a[4]=((C_word)li22),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_1829(t10,t6,t4);}

/* k3678 in k3674 in k3671 in k3666 in k3663 in k3659 in k3656 in k3653 in k3650 in k3646 in k3642 in k1267 */
static void C_ccall f_3680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3680,2,t0,t1);}
t2=C_mutate2((C_word*)lf[81]+1 /* (set! char-set:digit ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3684,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:654: string->char-set */
t4=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[98]);}

/* k3682 in k3678 in k3674 in k3671 in k3666 in k3663 in k3659 in k3656 in k3653 in k3650 in k3646 in k3642 in k1267 */
static void C_ccall f_3684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3684,2,t0,t1);}
t2=C_mutate2((C_word*)lf[82]+1 /* (set! char-set:hex-digit ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3688,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:657: char-set-union */
t4=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[80]+1),*((C_word*)lf[81]+1));}

/* %set-char-set in k1267 */
static void C_fcall f_1805(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1805,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1809,a[2]=t2,a[3]=t5,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1854,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:237: %char-set:s/check */
f_1355(t7,t4,t3);}

/* k3686 in k3682 in k3678 in k3674 in k3671 in k3666 in k3663 in k3659 in k3656 in k3653 in k3650 in k3646 in k3642 in k1267 */
static void C_ccall f_3688(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3688,2,t0,t1);}
t2=C_mutate2((C_word*)lf[83]+1 /* (set! char-set:letter+digit ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3692,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:660: string->char-set */
t4=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[97]);}

/* end-of-char-set? in k1267 */
static void C_ccall f_1954(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1954,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fixnum_lessp(t2,C_fix(0)));}

/* string->char-set! in k1267 */
static void C_ccall f_2597(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2597,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2601,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2605,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:404: %char-set:s/check */
f_1355(t5,t3,lf[47]);}

/* k2485 in char-set->list in k1267 */
static void C_ccall f_2487(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2487,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2492,a[2]=t2,a[3]=t4,a[4]=((C_word)li61),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_2492(t6,((C_word*)t0)[2],C_fix(255),C_SCHEME_END_OF_LIST);}

/* char-set->list in k1267 */
static void C_ccall f_2483(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2483,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2487,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:380: %char-set:s/check */
f_1355(t3,t2,lf[44]);}

/* k3671 in k3666 in k3663 in k3659 in k3656 in k3653 in k3650 in k3646 in k3642 in k1267 */
static void C_ccall f_3673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3673,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3676,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:649: char-set-adjoin! */
t3=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,t1,C_make_character(170),C_make_character(186));}

/* k3674 in k3671 in k3666 in k3663 in k3659 in k3656 in k3653 in k3650 in k3646 in k3642 in k1267 */
static void C_ccall f_3676(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3676,2,t0,t1);}
t2=C_mutate2((C_word*)lf[80]+1 /* (set! char-set:letter ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3680,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:653: string->char-set */
t4=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[99]);}

/* k2479 in list->char-set! in k1267 */
static void C_ccall f_2481(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:375: %list->char-set! */
f_2401(((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k3714 in k3710 in k3706 in k3703 in k3700 in k3696 in k3693 in k3690 in k3686 in k3682 in k3678 in k3674 in k3671 in k3666 in k3663 in k3659 in k3656 in k3653 in k3650 in k3646 in k3642 in k1267 in ... */
static void C_ccall f_3716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3716,2,t0,t1);}
t2=C_mutate2((C_word*)lf[87]+1 /* (set! char-set:whitespace ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3720,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:704: char-set-union */
t4=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[87]+1),*((C_word*)lf[86]+1));}

/* a1941 in char-set-delete! in k1267 */
static void C_ccall f_1942(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1942,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_string_set(t2,t3,C_make_character(0)));}

/* string->char-set in k1267 */
static void C_ccall f_2585(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2585r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2585r(t0,t1,t2,t3);}}

static void C_ccall f_2585r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2589,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:399: %default-base */
f_1311(t4,t3,*((C_word*)lf[46]+1));}

/* char-set-cursor in k1267 */
static void C_ccall f_1948(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1948,3,t0,t1,t2);}
/* srfi-14.scm:269: %char-set-cursor-next */
f_1975(t1,t2,C_fix(256),lf[28]);}

/* k2587 in string->char-set in k1267 */
static void C_ccall f_2589(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2589,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2592,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:400: %string->char-set! */
f_2535(t3,((C_word*)t0)[3],t2,lf[46]);}

/* k3710 in k3706 in k3703 in k3700 in k3696 in k3693 in k3690 in k3686 in k3682 in k3678 in k3674 in k3671 in k3666 in k3663 in k3659 in k3656 in k3653 in k3650 in k3646 in k3642 in k1267 */
static void C_ccall f_3712(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3712,2,t0,t1);}
t2=C_mutate2((C_word*)lf[86]+1 /* (set! char-set:graphic ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3716,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=lf[0];
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3779,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3781,a[2]=t7,a[3]=t11,a[4]=t5,a[5]=t8,a[6]=((C_word)li112),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_3781(t13,t9,lf[93]);}

/* k3659 in k3656 in k3653 in k3650 in k3646 in k3642 in k1267 */
static void C_ccall f_3661(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3661,2,t0,t1);}
t2=C_mutate2((C_word*)lf[77]+1 /* (set! char-set:lower-case ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3665,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:640: ucs-range->char-set */
t4=*((C_word*)lf[52]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_fix(65),C_fix(91));}

/* k3663 in k3659 in k3656 in k3653 in k3650 in k3646 in k3642 in k1267 */
static void C_ccall f_3665(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3665,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3668,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3896,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:643: ucs-range->char-set! */
t4=*((C_word*)lf[53]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,C_fix(192),C_fix(215),C_SCHEME_TRUE,t1);}

/* k3666 in k3663 in k3659 in k3656 in k3653 in k3650 in k3646 in k3642 in k1267 */
static void C_ccall f_3668(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3668,2,t0,t1);}
t2=C_mutate2((C_word*)lf[78]+1 /* (set! char-set:upper-case ...) */,t1);
t3=C_mutate2((C_word*)lf[79]+1 /* (set! char-set:title-case ...) */,*((C_word*)lf[65]+1));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3673,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:648: char-set-union */
t5=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[78]+1),*((C_word*)lf[77]+1));}

/* k3706 in k3703 in k3700 in k3696 in k3693 in k3690 in k3686 in k3682 in k3678 in k3674 in k3671 in k3666 in k3663 in k3659 in k3656 in k3653 in k3650 in k3646 in k3642 in k1267 */
static void C_ccall f_3708(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3708,2,t0,t1);}
t2=C_mutate2((C_word*)lf[85]+1 /* (set! char-set:symbol ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3712,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:693: char-set-union */
t4=*((C_word*)lf[64]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,*((C_word*)lf[83]+1),*((C_word*)lf[84]+1),*((C_word*)lf[85]+1));}

/* k3703 in k3700 in k3696 in k3693 in k3690 in k3686 in k3682 in k3678 in k3674 in k3671 in k3666 in k3663 in k3659 in k3656 in k3653 in k3650 in k3646 in k3642 in k1267 */
static void C_ccall f_3705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3705,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3708,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:689: list->char-set! */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,((C_word*)t0)[3]);}

/* k3700 in k3696 in k3693 in k3690 in k3686 in k3682 in k3678 in k3674 in k3671 in k3666 in k3663 in k3659 in k3656 in k3653 in k3650 in k3646 in k3642 in k1267 */
static void C_ccall f_3702(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3702,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=lf[0];
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3705,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3816,a[2]=t6,a[3]=t10,a[4]=t4,a[5]=t7,a[6]=((C_word)li113),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_3816(t12,t8,lf[94]);}

/* for-each-loop433 in %list->char-set! in k1267 */
static C_word C_fcall f_2424(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:
if(C_truep(C_i_pairp(t1))){
t2=C_slot(t1,C_fix(0));
t3=f_2403(((C_word*)t0)[2],t2);
t4=C_slot(t1,C_fix(1));
t7=t4;
t1=t7;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* char-set-ref in k1267 */
static void C_ccall f_1960(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1960,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_make_character(C_unfix(t3)));}

/* char-set-cursor-next in k1267 */
static void C_ccall f_1966(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1966,4,t0,t1,t2,t3);}
t4=C_i_check_exact_2(t3,lf[32]);
/* srfi-14.scm:279: %char-set-cursor-next */
f_1975(t1,t2,t3,lf[32]);}

/* k3162 in char-set-union in k1267 */
static void C_ccall f_3164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_string_length(t1);
/* srfi-14.scm:102: substring */
t3=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],t1,C_fix(0),t2);}

/* char-set-adjoin! in k1267 */
static void C_ccall f_1912(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_1912r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1912r(t0,t1,t2,t3);}}

static void C_ccall f_1912r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1918,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:251: %set-char-set! */
f_1856(t1,t4,lf[25],t2,t3);}

/* a1917 in char-set-adjoin! in k1267 */
static void C_ccall f_1918(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1918,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_string_set(t2,t3,C_make_character(1)));}

/* char-set in k1267 */
static void C_ccall f_2447(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_2447r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2447r(t0,t1,t2);}}

static void C_ccall f_2447r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2451,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t3,C_fix(256),C_make_character(0));}

/* a1905 in char-set-adjoin in k1267 */
static void C_ccall f_1906(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1906,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_string_set(t2,t3,C_make_character(1)));}

/* char-set-adjoin in k1267 */
static void C_ccall f_1900(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_1900r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1900r(t0,t1,t2,t3);}}

static void C_ccall f_1900r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1906,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:249: %set-char-set */
f_1805(t1,t4,lf[24],t2,t3);}

/* a3140 in k3129 in char-set-union in k1267 */
static void C_ccall f_3141(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3141,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=t1;
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_string_set(t2,t3,C_make_character(1)));}}

/* lp in k1568 in k1562 in char-set-hash in k1267 */
static C_word C_fcall f_1628(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:
t2=t1;
t3=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(C_fixnum_greater_or_equal_p(t2,t3))){
return(C_fixnum_difference(t1,C_fix(1)));}
else{
t4=C_fixnum_plus(t1,t1);
t6=t4;
t1=t6;
goto loop;}}

/* g230 in k1858 in %set-char-set! in k1267 */
static void C_fcall f_1861(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1861,NULL,3,t0,t1,t2);}
t3=C_fix(C_character_code(t2));
/* srfi-14.scm:244: set */
t4=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t1,((C_word*)t0)[3],t3);}

/* k1858 in %set-char-set! in k1267 */
static void C_ccall f_1860(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1860,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1861,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li24),tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[3];
t5=C_i_check_list_2(t4,lf[22]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1875,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1877,a[2]=t8,a[3]=t3,a[4]=((C_word)li25),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_1877(t10,t6,t4);}

/* char-set-contains? in k1267 */
static void C_ccall f_1657(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1657,4,t0,t1,t2,t3);}
t4=C_i_check_char_2(t3,lf[18]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1690,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:213: %char-set:s/check */
f_1355(t5,t2,lf[18]);}

/* k3129 in char-set-union in k1267 */
static void C_ccall f_3131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3131,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3134,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3141,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:543: %char-set-algebra */
f_2945(t3,t2,t5,t6,lf[64]);}

/* k3132 in k3129 in char-set-union in k1267 */
static void C_ccall f_3134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:544: make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* char-set-delete in k1267 */
static void C_ccall f_1924(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_1924r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1924r(t0,t1,t2,t3);}}

static void C_ccall f_1924r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1930,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:253: %set-char-set */
f_1805(t1,t4,lf[26],t2,t3);}

/* a3451 in g788 in %char-set-diff+intersection! in k1267 */
static void C_ccall f_3452(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3452,4,t0,t1,t2,t3);}
t4=C_eqp(t3,C_fix(0));
if(C_truep(t4)){
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=((C_word*)t0)[2];
t6=t2;
t7=C_i_string_ref(t5,t6);
t8=C_fix(C_character_code(t7));
t9=C_eqp(t8,C_fix(0));
if(C_truep(C_i_not(t9))){
t10=((C_word*)t0)[2];
t11=t2;
t12=C_i_string_set(t10,t11,C_make_character(0));
t13=t1;
t14=((C_word*)t0)[3];
t15=t2;
t16=t13;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_i_string_set(t14,t15,C_make_character(1)));}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_UNDEFINED);}}}

/* k1885 in for-each-loop229 in k1858 in %set-char-set! in k1267 */
static void C_ccall f_1887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1877(t3,((C_word*)t0)[4],t2);}

/* lp in k2485 in char-set->list in k1267 */
static void C_fcall f_2492(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2492,NULL,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t5=t3;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_fixnum_difference(t2,C_fix(1));
t6=t2;
t7=C_i_string_ref(((C_word*)t0)[2],t6);
t8=C_fix(C_character_code(t7));
t9=C_eqp(t8,C_fix(0));
if(C_truep(t9)){
t10=t3;
/* srfi-14.scm:383: lp */
t16=t1;
t17=t5;
t18=t10;
t1=t16;
t2=t17;
t3=t18;
goto loop;}
else{
t10=t2;
t11=C_make_character(C_unfix(t10));
t12=C_a_i_cons(&a,2,t11,t3);
/* srfi-14.scm:383: lp */
t16=t1;
t17=t5;
t18=t12;
t1=t16;
t2=t17;
t3=t18;
goto loop;}}}

/* char-set-intersection in k1267 */
static void C_ccall f_3198(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_3198r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3198r(t0,t1,t2);}}

static void C_ccall f_3198r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3208,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3237,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=t2;
t6=C_u_i_car(t5);
/* srfi-14.scm:557: %char-set:s/check */
f_1355(t4,t6,lf[67]);}
else{
/* srfi-14.scm:560: char-set-copy */
t3=*((C_word*)lf[13]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,*((C_word*)lf[68]+1));}}

/* for-each-loop229 in k1858 in %set-char-set! in k1267 */
static void C_fcall f_1877(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1877,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1887,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* srfi-14.scm:242: g230 */
t5=((C_word*)t0)[3];
f_1861(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1873 in k1858 in %set-char-set! in k1267 */
static void C_ccall f_1875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k3435 in char-set-xor in k1267 */
static void C_ccall f_3437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_string_length(t1);
/* srfi-14.scm:102: substring */
t3=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],t1,C_fix(0),t2);}

/* a3180 in k3177 in char-set-intersection! in k1267 */
static void C_ccall f_3181(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3181,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=t1;
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_string_set(t2,t3,C_make_character(0)));}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* char-set-count in k1267 */
static void C_ccall f_1738(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1738,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1742,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:225: %char-set:s/check */
f_1355(t4,t3,lf[20]);}

/* k2716 in %ucs-range->char-set! in k1267 */
static void C_fcall f_2718(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* srfi-14.scm:429: ##sys#error */
t2=*((C_word*)lf[7]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[51],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[2];
f_2678(2,t2,C_SCHEME_UNDEFINED);}}

/* map-loop934 in k3710 in k3706 in k3703 in k3700 in k3696 in k3693 in k3690 in k3686 in k3682 in k3678 in k3674 in k3671 in k3666 in k3663 in k3659 in k3656 in k3653 in k3650 in k3646 in k3642 in k1267 in ... */
static void C_fcall f_3781(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3781,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3810,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* srfi-14.scm:696: g940 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1977 in %char-set-cursor-next in k1267 */
static void C_ccall f_1979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1979,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1984,a[2]=t2,a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_1984(t3,((C_word*)t0)[3]));}

/* %char-set-cursor-next in k1267 */
static void C_fcall f_1975(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1975,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1979,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:282: %char-set:s/check */
f_1355(t5,t2,t4);}

/* k3173 in char-set-intersection! in k1267 */
static void C_ccall f_3175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* char-set-intersection! in k1267 */
static void C_ccall f_3171(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_3171r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3171r(t0,t1,t2,t3);}}

static void C_ccall f_3171r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3175,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3179,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:551: %char-set:s/check */
f_1355(t5,t2,lf[66]);}

/* make-char-set in k1267 */
static void C_ccall f_1283(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1283,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record2(&a,2,lf[2],t2));}

/* k3177 in char-set-intersection! in k1267 */
static void C_ccall f_3179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3179,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3181,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:551: %char-set-algebra */
f_2945(((C_word*)t0)[2],t1,((C_word*)t0)[3],t2,lf[66]);}

/* k3769 in map-loop962 in k3718 in k3714 in k3710 in k3706 in k3703 in k3700 in k3696 in k3693 in k3690 in k3686 in k3682 in k3678 in k3674 in k3671 in k3666 in k3663 in k3659 in k3656 in k3653 in k3650 in ... */
static void C_ccall f_3771(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3771,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3742(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3742(t6,((C_word*)t0)[5],t5);}}

/* k3777 in k3710 in k3706 in k3703 in k3700 in k3696 in k3693 in k3690 in k3686 in k3682 in k3678 in k3674 in k3671 in k3666 in k3663 in k3659 in k3656 in k3653 in k3650 in k3646 in k3642 in k1267 in ... */
static void C_ccall f_3779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:696: list->char-set */
t2=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* %latin1->char in k1267 */
static void C_ccall f_1271(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1271,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_make_character(C_unfix(t2)));}

/* k2452 in k2449 in char-set in k1267 */
static void C_ccall f_2454(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:367: make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* char-set:s in k1267 */
static void C_ccall f_1289(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1289,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k2449 in char-set in k1267 */
static void C_ccall f_2451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2451,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2454,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:366: %list->char-set! */
f_2401(t3,((C_word*)t0)[3],t2);}

/* g788 in %char-set-diff+intersection! in k1267 */
static void C_fcall f_3446(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3446,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3452,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li104),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3511,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:602: %char-set:s/check */
f_1355(t4,t2,((C_word*)t0)[4]);}

/* %char-set-diff+intersection! in k1267 */
static void C_fcall f_3444(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3444,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3446,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=((C_word)li105),tmp=(C_word)a,a+=6,tmp);
t7=C_i_check_list_2(t4,lf[22]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3519,a[2]=t9,a[3]=t6,a[4]=((C_word)li106),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_3519(t11,t1,t4);}

/* k3632 in k3628 in k3621 in k3618 in k3615 in char-set-diff+intersection in k1267 */
static void C_ccall f_3634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:619: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k3628 in k3621 in k3618 in k3615 in char-set-diff+intersection in k1267 */
static void C_ccall f_3630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3630,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3634,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:619: make-char-set */
t4=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* lp in k1977 in %char-set-cursor-next in k1267 */
static C_word C_fcall f_1984(C_word t0,C_word t1){
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
t2=C_fixnum_difference(t1,C_fix(1));
t3=C_fixnum_lessp(t2,C_fix(0));
if(C_truep(t3)){
if(C_truep(t3)){
return(t2);}
else{
t8=t2;
t1=t8;
goto loop;}}
else{
t4=C_i_string_ref(((C_word*)t0)[2],t2);
t5=C_fix(C_character_code(t4));
t6=C_eqp(t5,C_fix(0));
if(C_truep(C_i_not(t6))){
return(t2);}
else{
t8=t2;
t1=t8;
goto loop;}}}

/* doloop481 in %string->char-set! in k1267 */
static C_word C_fcall f_2548(C_word t0,C_word t1){
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
C_stack_overflow_check;
loop:
t2=t1;
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t3=C_SCHEME_UNDEFINED;
return(t3);}
else{
t3=C_i_string_ref(((C_word*)t0)[2],t1);
t4=C_fix(C_character_code(t3));
t5=((C_word*)t0)[3];
t6=C_i_string_set(t5,t4,C_make_character(1));
t7=C_fixnum_difference(t1,C_fix(1));
t10=t7;
t1=t10;
goto loop;}}

/* k3621 in k3618 in k3615 in char-set-diff+intersection in k1267 */
static void C_ccall f_3623(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3623,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3630,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:619: make-char-set */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k3618 in k3615 in char-set-diff+intersection in k1267 */
static void C_ccall f_3620(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3620,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3623,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:618: %char-set-diff+intersection! */
f_3444(t3,((C_word*)t0)[3],t2,((C_word*)t0)[4],lf[75]);}

/* %string->char-set! in k1267 */
static void C_fcall f_2535(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2535,NULL,4,t1,t2,t3,t4);}
t5=C_i_check_string_2(t2,t4);
t6=t2;
t7=C_block_size(t6);
t8=C_fixnum_difference(t7,C_fix(1));
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2548,a[2]=t2,a[3]=t3,a[4]=((C_word)li63),tmp=(C_word)a,a+=5,tmp);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,f_2548(t9,t8));}

/* for-each-loop204 in k1807 in %set-char-set in k1267 */
static void C_fcall f_1829(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1829,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1839,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* srfi-14.scm:236: g205 */
t5=((C_word*)t0)[3];
f_1810(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1822 in k1807 in %set-char-set in k1267 */
static void C_ccall f_1824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:240: make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* for-each-loop787 in %char-set-diff+intersection! in k1267 */
static void C_fcall f_3519(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3519,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3529,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* srfi-14.scm:595: g788 */
t5=((C_word*)t0)[3];
f_3446(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3509 in g788 in %char-set-diff+intersection! in k1267 */
static void C_ccall f_3511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:597: %string-iter */
f_2904(((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* lp in %char-set-filter! in k1267 */
static void C_fcall f_2782(C_word t0,C_word t1,C_word t2){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2782,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2802,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)t0)[4];
t6=t2;
t7=C_i_string_ref(t5,t6);
t8=C_fix(C_character_code(t7));
t9=C_eqp(t8,C_fix(0));
if(C_truep(C_i_not(t9))){
t10=t2;
t11=C_make_character(C_unfix(t10));
/* srfi-14.scm:454: pred */
t12=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t12))(3,t12,t4,t11);}
else{
t10=t4;
f_2802(2,t10,C_SCHEME_FALSE);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k3547 in k3544 in char-set-diff+intersection! in k1267 */
static void C_ccall f_3549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3549,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3552,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3560,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word)li108),tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:608: %string-iter */
f_2904(t3,t4,((C_word*)t0)[5]);}

/* k3544 in char-set-diff+intersection! in k1267 */
static void C_ccall f_3546(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3546,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3549,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* srfi-14.scm:607: %char-set:s/check */
f_1355(t3,((C_word*)t0)[4],lf[74]);}

/* char-set-diff+intersection! in k1267 */
static void C_ccall f_3542(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_3542r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3542r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3542r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3546,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm:606: %char-set:s/check */
f_1355(t5,t2,lf[74]);}

/* k2772 in ucs-range->char-set! in k1267 */
static void C_ccall f_2774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:442: %ucs-range->char-set! */
f_2668(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,lf[52]);}

/* %char-set-filter! in k1267 */
static void C_fcall f_2776(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2776,NULL,4,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2782,a[2]=t4,a[3]=t6,a[4]=t3,a[5]=t2,a[6]=((C_word)li73),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_2782(t8,t1,C_fix(255));}

/* k1837 in for-each-loop204 in k1807 in %set-char-set in k1267 */
static void C_ccall f_1839(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1829(t3,((C_word*)t0)[4],t2);}

/* k2768 in ucs-range->char-set! in k1267 */
static void C_ccall f_2770(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k2612 in k2609 in char-set->string in k1267 */
static void C_ccall f_2614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2614,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2619,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li67),tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_2619(t3,C_fix(255),C_fix(0)));}

/* lp in k2612 in k2609 in char-set->string in k1267 */
static C_word C_fcall f_2619(C_word t0,C_word t1,C_word t2){
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
C_stack_overflow_check;
loop:
t3=t1;
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
return(((C_word*)t0)[2]);}
else{
t4=t1;
t5=C_i_string_ref(((C_word*)t0)[3],t4);
t6=C_fix(C_character_code(t5));
t7=C_eqp(t6,C_fix(0));
if(C_truep(t7)){
t8=t2;
t9=C_fixnum_difference(t1,C_fix(1));
t16=t9;
t17=t8;
t1=t16;
t2=t17;
goto loop;}
else{
t8=t1;
t9=C_make_character(C_unfix(t8));
t10=C_i_string_set(((C_word*)t0)[2],t2,t9);
t11=C_fixnum_plus(t2,C_fix(1));
t12=C_fixnum_difference(t1,C_fix(1));
t16=t12;
t17=t11;
t1=t16;
t2=t17;
goto loop;}}}

/* k2609 in char-set->string in k1267 */
static void C_ccall f_2611(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2611,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2614,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2666,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:411: char-set-size */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}

/* ucs-range->char-set! in k1267 */
static void C_ccall f_2766(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_2766,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2770,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2774,a[2]=t6,a[3]=t2,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm:443: %char-set:s/check */
f_1355(t7,t5,lf[53]);}

/* k2603 in string->char-set! in k1267 */
static void C_ccall f_2605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:404: %string->char-set! */
f_2535(((C_word*)t0)[2],((C_word*)t0)[3],t1,lf[47]);}

/* char-set->string in k1267 */
static void C_ccall f_2607(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2607,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2611,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:410: %char-set:s/check */
f_1355(t3,t2,lf[48]);}

/* char-set? in k1267 */
static void C_ccall f_1295(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1295,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[2]));}

/* k2599 in string->char-set! in k1267 */
static void C_ccall f_2601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* g434 in %list->char-set! in k1267 */
static C_word C_fcall f_2403(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
t2=C_fix(C_character_code(t1));
t3=((C_word*)t0)[2];
return(C_i_string_set(t3,t2,C_make_character(1)));}

/* %list->char-set! in k1267 */
static void C_fcall f_2401(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2401,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2403,a[2]=t3,a[3]=((C_word)li55),tmp=(C_word)a,a+=4,tmp);
t5=C_i_check_list_2(t2,lf[22]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2424,a[2]=t4,a[3]=((C_word)li56),tmp=(C_word)a,a+=4,tmp);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,f_2424(t6,t2));}

/* k1267 */
static void C_ccall f_1269(C_word c,C_word t0,C_word t1){
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
C_word t65;
C_word t66;
C_word ab[192],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1269,2,t0,t1);}
t2=C_mutate2(&lf[0] /* (set! %latin1->char ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1271,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate2((C_word*)lf[1]+1 /* (set! make-char-set ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1283,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[3]+1 /* (set! char-set:s ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1289,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[4]+1 /* (set! char-set? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1295,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2(&lf[5] /* (set! %default-base ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1311,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2(&lf[11] /* (set! %char-set:s/check ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1355,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[13]+1 /* (set! char-set-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1388,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[14]+1 /* (set! char-set= ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1402,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[15]+1 /* (set! char-set<= ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1453,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[16]+1 /* (set! char-set-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1557,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[18]+1 /* (set! char-set-contains? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1657,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2((C_word*)lf[19]+1 /* (set! char-set-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1696,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate2((C_word*)lf[20]+1 /* (set! char-set-count ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1738,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate2(&lf[21] /* (set! %set-char-set ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1805,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2(&lf[23] /* (set! %set-char-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1856,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate2((C_word*)lf[24]+1 /* (set! char-set-adjoin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1900,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate2((C_word*)lf[25]+1 /* (set! char-set-adjoin! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1912,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate2((C_word*)lf[26]+1 /* (set! char-set-delete ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1924,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate2((C_word*)lf[27]+1 /* (set! char-set-delete! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1936,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate2((C_word*)lf[28]+1 /* (set! char-set-cursor ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1948,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate2((C_word*)lf[30]+1 /* (set! end-of-char-set? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1954,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate2((C_word*)lf[31]+1 /* (set! char-set-ref ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1960,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate2((C_word*)lf[32]+1 /* (set! char-set-cursor-next ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1966,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate2(&lf[29] /* (set! %char-set-cursor-next ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1975,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate2((C_word*)lf[33]+1 /* (set! char-set-for-each ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2027,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate2((C_word*)lf[34]+1 /* (set! char-set-map ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2087,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate2((C_word*)lf[35]+1 /* (set! char-set-fold ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2168,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate2((C_word*)lf[36]+1 /* (set! char-set-every ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2220,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate2((C_word*)lf[37]+1 /* (set! char-set-any ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2274,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t31=C_mutate2(&lf[38] /* (set! %char-set-unfold! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2337,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t32=C_mutate2((C_word*)lf[39]+1 /* (set! char-set-unfold ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2379,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate2((C_word*)lf[40]+1 /* (set! char-set-unfold! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2391,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t34=C_mutate2(&lf[41] /* (set! %list->char-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2401,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate2((C_word*)lf[2]+1 /* (set! char-set ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2447,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t36=C_mutate2((C_word*)lf[42]+1 /* (set! list->char-set ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2461,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate2((C_word*)lf[43]+1 /* (set! list->char-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2473,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate2((C_word*)lf[44]+1 /* (set! char-set->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2483,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate2(&lf[45] /* (set! %string->char-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2535,a[2]=((C_word)li64),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate2((C_word*)lf[46]+1 /* (set! string->char-set ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2585,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp));
t41=C_mutate2((C_word*)lf[47]+1 /* (set! string->char-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2597,a[2]=((C_word)li66),tmp=(C_word)a,a+=3,tmp));
t42=C_mutate2((C_word*)lf[48]+1 /* (set! char-set->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2607,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t43=C_mutate2(&lf[50] /* (set! %ucs-range->char-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2668,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp));
t44=C_mutate2((C_word*)lf[52]+1 /* (set! ucs-range->char-set ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2736,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t45=C_mutate2((C_word*)lf[53]+1 /* (set! ucs-range->char-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2766,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t46=C_mutate2(&lf[54] /* (set! %char-set-filter! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2776,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t47=C_mutate2((C_word*)lf[55]+1 /* (set! char-set-filter ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2844,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp));
t48=C_mutate2((C_word*)lf[56]+1 /* (set! char-set-filter! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2860,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp));
t49=C_mutate2((C_word*)lf[57]+1 /* (set! ->char-set ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2874,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp));
t50=C_mutate2(&lf[59] /* (set! %string-iter ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2904,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp));
t51=C_mutate2(&lf[60] /* (set! %char-set-algebra ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2945,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp));
t52=C_mutate2((C_word*)lf[61]+1 /* (set! char-set-complement ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3017,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp));
t53=C_mutate2((C_word*)lf[62]+1 /* (set! char-set-complement! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3057,a[2]=((C_word)li87),tmp=(C_word)a,a+=3,tmp));
t54=C_mutate2((C_word*)lf[63]+1 /* (set! char-set-union! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3090,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp));
t55=C_mutate2((C_word*)lf[64]+1 /* (set! char-set-union ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3121,a[2]=((C_word)li91),tmp=(C_word)a,a+=3,tmp));
t56=C_mutate2((C_word*)lf[66]+1 /* (set! char-set-intersection! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3171,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp));
t57=C_mutate2((C_word*)lf[67]+1 /* (set! char-set-intersection ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3198,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp));
t58=C_mutate2((C_word*)lf[69]+1 /* (set! char-set-difference! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3244,a[2]=((C_word)li97),tmp=(C_word)a,a+=3,tmp));
t59=C_mutate2((C_word*)lf[70]+1 /* (set! char-set-difference ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3275,a[2]=((C_word)li99),tmp=(C_word)a,a+=3,tmp));
t60=C_mutate2((C_word*)lf[71]+1 /* (set! char-set-xor! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3321,a[2]=((C_word)li101),tmp=(C_word)a,a+=3,tmp));
t61=C_mutate2((C_word*)lf[72]+1 /* (set! char-set-xor ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3373,a[2]=((C_word)li103),tmp=(C_word)a,a+=3,tmp));
t62=C_mutate2(&lf[73] /* (set! %char-set-diff+intersection! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3444,a[2]=((C_word)li107),tmp=(C_word)a,a+=3,tmp));
t63=C_mutate2((C_word*)lf[74]+1 /* (set! char-set-diff+intersection! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3542,a[2]=((C_word)li109),tmp=(C_word)a,a+=3,tmp));
t64=C_mutate2((C_word*)lf[75]+1 /* (set! char-set-diff+intersection ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3613,a[2]=((C_word)li110),tmp=(C_word)a,a+=3,tmp));
t65=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3644,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:630: char-set */
t66=*((C_word*)lf[2]+1);
((C_proc2)(void*)(*((C_word*)t66+1)))(2,t66,t65);}

/* a3559 in k3547 in k3544 in char-set-diff+intersection! in k1267 */
static void C_ccall f_3560(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3560,4,t0,t1,t2,t3);}
t4=C_eqp(t3,C_fix(0));
if(C_truep(t4)){
t5=t1;
t6=t2;
t7=t5;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_string_set(((C_word*)t0)[2],t6,C_make_character(0)));}
else{
t5=t2;
t6=C_i_string_ref(((C_word*)t0)[2],t5);
t7=C_fix(C_character_code(t6));
t8=C_eqp(t7,C_fix(0));
if(C_truep(C_i_not(t8))){
t9=t1;
t10=t2;
t11=t9;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_i_string_set(((C_word*)t0)[3],t10,C_make_character(0)));}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_UNDEFINED);}}}

/* k2676 in %ucs-range->char-set! in k1267 */
static void C_ccall f_2678(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2678,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_i_fixnum_min(t2,C_fix(256));
t4=C_fixnum_difference(t3,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2687,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li69),tmp=(C_word)a,a+=5,tmp);
t6=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,f_2687(t5,t4));}

/* k2664 in k2609 in char-set->string in k1267 */
static void C_ccall f_2666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:411: make-string */
t2=*((C_word*)lf[49]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* %ucs-range->char-set! in k1267 */
static void C_fcall f_2668(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
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
C_save_and_reclaim((void*)trf_2668,NULL,6,t1,t2,t3,t4,t5,t6);}
t7=C_i_check_exact_2(t2,t6);
t8=C_i_check_exact_2(t3,t6);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2678,a[2]=t3,a[3]=t2,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2718,a[2]=t9,a[3]=t6,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t11=t2;
t12=t3;
if(C_truep(C_fixnum_lessp(t11,t12))){
t13=t3;
t14=t10;
f_2718(t14,(C_truep(C_fixnum_lessp(C_fix(256),t13))?t4:C_SCHEME_FALSE));}
else{
t13=t10;
f_2718(t13,C_SCHEME_FALSE);}}

/* k2922 in lp in %string-iter in k1267 */
static void C_ccall f_2924(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
/* srfi-14.scm:501: lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2914(t3,((C_word*)t0)[4],t2);}

/* lp in %string-iter in k1267 */
static void C_fcall f_2914(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2914,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2924,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=C_i_string_ref(((C_word*)t0)[3],t2);
t6=C_fix(C_character_code(t5));
/* srfi-14.scm:500: p */
t7=((C_word*)t0)[4];
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t4,t2,t6);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* lp in k2676 in %ucs-range->char-set! in k1267 */
static C_word C_fcall f_2687(C_word t0,C_word t1){
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
C_stack_overflow_check;
loop:
t2=((C_word*)t0)[2];
t3=t1;
if(C_truep(C_fixnum_less_or_equal_p(t2,t3))){
t4=((C_word*)t0)[3];
t5=t1;
t6=C_i_string_set(t4,t5,C_make_character(1));
t7=C_fixnum_difference(t1,C_fix(1));
t10=t7;
t1=t10;
goto loop;}
else{
t4=C_SCHEME_UNDEFINED;
return(t4);}}

/* %string-iter in k1267 */
static void C_fcall f_2904(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2904,NULL,3,t1,t2,t3);}
t4=C_i_string_length(t3);
t5=C_fixnum_difference(t4,C_fix(1));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2914,a[2]=t7,a[3]=t3,a[4]=t2,a[5]=((C_word)li78),tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_2914(t9,t1,t5);}

/* map-loop962 in k3718 in k3714 in k3710 in k3706 in k3703 in k3700 in k3696 in k3693 in k3690 in k3686 in k3682 in k3678 in k3674 in k3671 in k3666 in k3663 in k3659 in k3656 in k3653 in k3650 in k3646 in ... */
static void C_fcall f_3742(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3742,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3771,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* srfi-14.scm:707: g968 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3738 in k3718 in k3714 in k3710 in k3706 in k3703 in k3700 in k3696 in k3693 in k3690 in k3686 in k3682 in k3678 in k3674 in k3671 in k3666 in k3663 in k3659 in k3656 in k3653 in k3650 in k3646 in ... */
static void C_ccall f_3740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:707: list->char-set */
t2=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2949 in g620 in %char-set-algebra in k1267 */
static void C_ccall f_2951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2951,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2956,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word)li80),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_2956(t6,((C_word*)t0)[4],C_fix(255));}

/* a3217 in k3206 in char-set-intersection in k1267 */
static void C_ccall f_3218(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3218,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=t1;
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_string_set(t2,t3,C_make_character(0)));}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k3734 in k3722 in k3718 in k3714 in k3710 in k3706 in k3703 in k3700 in k3696 in k3693 in k3690 in k3686 in k3682 in k3678 in k3674 in k3671 in k3666 in k3663 in k3659 in k3656 in k3653 in k3650 in ... */
static void C_ccall f_3736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:713: ucs-range->char-set! */
t2=*((C_word*)lf[53]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],C_fix(127),C_fix(160),C_SCHEME_TRUE,t1);}

/* k3209 in k3206 in char-set-intersection in k1267 */
static void C_ccall f_3211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:559: make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3730 in k3726 in k3722 in k3718 in k3714 in k3710 in k3706 in k3703 in k3700 in k3696 in k3693 in k3690 in k3686 in k3682 in k3678 in k3674 in k3671 in k3666 in k3663 in k3659 in k3656 in k3653 in ... */
static void C_ccall f_3732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2((C_word*)lf[91]+1 /* (set! char-set:ascii ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* k3314 in char-set-difference in k1267 */
static void C_ccall f_3316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_string_length(t1);
/* srfi-14.scm:102: substring */
t3=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],t1,C_fix(0),t2);}

/* k2964 in lp in k2949 in g620 in %char-set-algebra in k1267 */
static void C_ccall f_2966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
/* srfi-14.scm:515: lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2956(t3,((C_word*)t0)[4],t2);}

/* k3206 in char-set-intersection in k1267 */
static void C_ccall f_3208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3208,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3211,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3218,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:558: %char-set-algebra */
f_2945(t3,t2,t5,t6,lf[67]);}

/* k3726 in k3722 in k3718 in k3714 in k3710 in k3706 in k3703 in k3700 in k3696 in k3693 in k3690 in k3686 in k3682 in k3678 in k3674 in k3671 in k3666 in k3663 in k3659 in k3656 in k3653 in k3650 in ... */
static void C_ccall f_3728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3728,2,t0,t1);}
t2=C_mutate2((C_word*)lf[90]+1 /* (set! char-set:iso-control ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3732,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:715: ucs-range->char-set */
t4=*((C_word*)lf[52]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_fix(0),C_fix(128));}

/* k3722 in k3718 in k3714 in k3710 in k3706 in k3703 in k3700 in k3696 in k3693 in k3690 in k3686 in k3682 in k3678 in k3674 in k3671 in k3666 in k3663 in k3659 in k3656 in k3653 in k3650 in k3646 in ... */
static void C_ccall f_3724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3724,2,t0,t1);}
t2=C_mutate2((C_word*)lf[89]+1 /* (set! char-set:blank ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3728,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3736,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:713: ucs-range->char-set */
t5=*((C_word*)lf[52]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_fix(0),C_fix(32));}

/* k3384 in k3381 in char-set-xor in k1267 */
static void C_ccall f_3386(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:589: make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3718 in k3714 in k3710 in k3706 in k3703 in k3700 in k3696 in k3693 in k3690 in k3686 in k3682 in k3678 in k3674 in k3671 in k3666 in k3663 in k3659 in k3656 in k3653 in k3650 in k3646 in k3642 in ... */
static void C_ccall f_3720(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3720,2,t0,t1);}
t2=C_mutate2((C_word*)lf[88]+1 /* (set! char-set:printing ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3724,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=lf[0];
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3740,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3742,a[2]=t7,a[3]=t11,a[4]=t5,a[5]=t8,a[6]=((C_word)li111),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_3742(t13,t9,lf[92]);}

/* k3381 in char-set-xor in k1267 */
static void C_ccall f_3383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3383,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3386,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3393,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:588: %char-set-algebra */
f_2945(t3,t2,t5,t6,lf[72]);}

/* lp in k2949 in g620 in %char-set-algebra in k1267 */
static void C_fcall f_2956(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_2956,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2966,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=t2;
t6=C_i_string_ref(((C_word*)t0)[3],t5);
t7=C_fix(C_character_code(t6));
/* srfi-14.scm:514: op */
t8=((C_word*)t0)[4];
((C_proc5)C_fast_retrieve_proc(t8))(5,t8,t4,((C_word*)t0)[5],t2,t7);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* char-set-xor in k1267 */
static void C_ccall f_3373(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_3373r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3373r(t0,t1,t2);}}

static void C_ccall f_3373r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3383,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3437,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=t2;
t6=C_u_i_car(t5);
/* srfi-14.scm:587: %char-set:s/check */
f_1355(t4,t6,lf[72]);}
else{
/* srfi-14.scm:590: char-set-copy */
t3=*((C_word*)lf[13]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,*((C_word*)lf[65]+1));}}

/* g620 in %char-set-algebra in k1267 */
static void C_fcall f_2947(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2947,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2951,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:511: %char-set:s/check */
f_1355(t3,t2,((C_word*)t0)[4]);}

/* %char-set-algebra in k1267 */
static void C_fcall f_2945(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2945,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2947,a[2]=t4,a[3]=t2,a[4]=t5,a[5]=((C_word)li81),tmp=(C_word)a,a+=6,tmp);
t7=C_i_check_list_2(t3,lf[22]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2994,a[2]=t9,a[3]=t6,a[4]=((C_word)li82),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_2994(t11,t1,t3);}

/* lp in k2092 in k2089 in char-set-map in k1267 */
static void C_fcall f_2102(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(6);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2102,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=t2;
t5=C_i_string_ref(((C_word*)t0)[2],t4);
t6=C_fix(C_character_code(t5));
t7=C_eqp(t6,C_fix(0));
if(C_truep(C_i_not(t7))){
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2160,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=t2;
t10=C_make_character(C_unfix(t9));
/* srfi-14.scm:306: proc */
t11=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t11))(3,t11,t8,t10);}
else{
t8=C_fixnum_difference(t2,C_fix(1));
/* srfi-14.scm:307: lp */
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* %default-base in k1267 */
static void C_fcall f_1311(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1311,NULL,3,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_car(t4);
t6=t2;
t7=C_u_i_cdr(t6);
if(C_truep(C_i_nullp(t7))){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1332,a[2]=t1,a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:114: char-set? */
t9=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t5);}
else{
/* srfi-14.scm:116: ##sys#error */
t8=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t1,lf[9],t3,t2);}}
else{
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t1,C_fix(256),C_make_character(0));}}

/* k2800 in lp in %char-set-filter! in k1267 */
static void C_ccall f_2802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=C_i_string_set(t2,t3,C_make_character(1));
t5=C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* srfi-14.scm:456: lp */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2782(t6,((C_word*)t0)[5],t5);}
else{
t2=C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* srfi-14.scm:456: lp */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2782(t3,((C_word*)t0)[5],t2);}}

/* a3330 in k3327 in char-set-xor! in k1267 */
static void C_ccall f_3331(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3331,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=t2;
t7=t3;
t8=C_i_string_ref(t6,t7);
t9=C_fix(C_character_code(t8));
t10=C_fixnum_difference(C_fix(1),t9);
t11=t1;
t12=t2;
t13=t3;
t14=C_make_character(C_unfix(t10));
t15=t11;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_i_string_set(t12,t13,t14));}}

/* k3527 in for-each-loop787 in %char-set-diff+intersection! in k1267 */
static void C_ccall f_3529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3519(t3,((C_word*)t0)[4],t2);}

/* k3327 in char-set-xor! in k1267 */
static void C_ccall f_3329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3329,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3331,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:581: %char-set-algebra */
f_2945(((C_word*)t0)[2],t1,((C_word*)t0)[3],t2,lf[71]);}

/* char-set-xor! in k1267 */
static void C_ccall f_3321(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_3321r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3321r(t0,t1,t2,t3);}}

static void C_ccall f_3321r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3325,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3329,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:581: %char-set:s/check */
f_1355(t5,t2,lf[71]);}

/* k3323 in char-set-xor! in k1267 */
static void C_ccall f_3325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k3553 in k3550 in k3547 in k3544 in char-set-diff+intersection! in k1267 */
static void C_ccall f_3555(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:613: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k3550 in k3547 in k3544 in char-set-diff+intersection! in k1267 */
static void C_ccall f_3552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3552,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3555,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:612: %char-set-diff+intersection! */
f_3444(t2,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],lf[74]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[263] = {
{"f_2749:srfi_2d14_2escm",(void*)f_2749},
{"f_2746:srfi_2d14_2escm",(void*)f_2746},
{"f_3393:srfi_2d14_2escm",(void*)f_3393},
{"f_3816:srfi_2d14_2escm",(void*)f_3816},
{"f_3810:srfi_2d14_2escm",(void*)f_3810},
{"f_2874:srfi_2d14_2escm",(void*)f_2874},
{"f_2736:srfi_2d14_2escm",(void*)f_2736},
{"f_2379:srfi_2d14_2escm",(void*)f_2379},
{"f_1402:srfi_2d14_2escm",(void*)f_1402},
{"f_2377:srfi_2d14_2escm",(void*)f_2377},
{"f_2373:srfi_2d14_2escm",(void*)f_2373},
{"f_1400:srfi_2d14_2escm",(void*)f_1400},
{"f_2872:srfi_2d14_2escm",(void*)f_2872},
{"f_2864:srfi_2d14_2escm",(void*)f_2864},
{"f_2868:srfi_2d14_2escm",(void*)f_2868},
{"f_2860:srfi_2d14_2escm",(void*)f_2860},
{"f_1421:srfi_2d14_2escm",(void*)f_1421},
{"f_1416:srfi_2d14_2escm",(void*)f_1416},
{"f_2386:srfi_2d14_2escm",(void*)f_2386},
{"f_2383:srfi_2d14_2escm",(void*)f_2383},
{"f_2881:srfi_2d14_2escm",(void*)f_2881},
{"f_2337:srfi_2d14_2escm",(void*)f_2337},
{"f_2343:srfi_2d14_2escm",(void*)f_2343},
{"f_3896:srfi_2d14_2escm",(void*)f_3896},
{"f_1570:srfi_2d14_2escm",(void*)f_1570},
{"f_1578:srfi_2d14_2escm",(void*)f_1578},
{"f_3880:srfi_2d14_2escm",(void*)f_3880},
{"f_1564:srfi_2d14_2escm",(void*)f_1564},
{"f_2258:srfi_2d14_2escm",(void*)f_2258},
{"f_3254:srfi_2d14_2escm",(void*)f_3254},
{"f_3252:srfi_2d14_2escm",(void*)f_3252},
{"f_3057:srfi_2d14_2escm",(void*)f_3057},
{"f_2283:srfi_2d14_2escm",(void*)f_2283},
{"f_2168:srfi_2d14_2escm",(void*)f_2168},
{"f_1332:srfi_2d14_2escm",(void*)f_1332},
{"f_3248:srfi_2d14_2escm",(void*)f_3248},
{"f_1339:srfi_2d14_2escm",(void*)f_1339},
{"f_3244:srfi_2d14_2escm",(void*)f_3244},
{"f_2994:srfi_2d14_2escm",(void*)f_2994},
{"f_1361:srfi_2d14_2escm",(void*)f_1361},
{"f_3237:srfi_2d14_2escm",(void*)f_3237},
{"f_1368:srfi_2d14_2escm",(void*)f_1368},
{"f_2365:srfi_2d14_2escm",(void*)f_2365},
{"f_3032:srfi_2d14_2escm",(void*)f_3032},
{"f_2224:srfi_2d14_2escm",(void*)f_2224},
{"f_2229:srfi_2d14_2escm",(void*)f_2229},
{"f_2220:srfi_2d14_2escm",(void*)f_2220},
{"f_1355:srfi_2d14_2escm",(void*)f_1355},
{"f_2395:srfi_2d14_2escm",(void*)f_2395},
{"f_2399:srfi_2d14_2escm",(void*)f_2399},
{"f_3021:srfi_2d14_2escm",(void*)f_3021},
{"f_2391:srfi_2d14_2escm",(void*)f_2391},
{"f_3027:srfi_2d14_2escm",(void*)f_3027},
{"f_3024:srfi_2d14_2escm",(void*)f_3024},
{"f_3293:srfi_2d14_2escm",(void*)f_3293},
{"f_1388:srfi_2d14_2escm",(void*)f_1388},
{"f_3017:srfi_2d14_2escm",(void*)f_3017},
{"f_3285:srfi_2d14_2escm",(void*)f_3285},
{"f_3121:srfi_2d14_2escm",(void*)f_3121},
{"f_1378:srfi_2d14_2escm",(void*)f_1378},
{"f_3288:srfi_2d14_2escm",(void*)f_3288},
{"f_2195:srfi_2d14_2escm",(void*)f_2195},
{"f_3004:srfi_2d14_2escm",(void*)f_3004},
{"f_2172:srfi_2d14_2escm",(void*)f_2172},
{"f_1700:srfi_2d14_2escm",(void*)f_1700},
{"f_3275:srfi_2d14_2escm",(void*)f_3275},
{"f_1705:srfi_2d14_2escm",(void*)f_1705},
{"f_1690:srfi_2d14_2escm",(void*)f_1690},
{"f_1696:srfi_2d14_2escm",(void*)f_1696},
{"f_2091:srfi_2d14_2escm",(void*)f_2091},
{"f_2094:srfi_2d14_2escm",(void*)f_2094},
{"f_2160:srfi_2d14_2escm",(void*)f_2160},
{"f_1396:srfi_2d14_2escm",(void*)f_1396},
{"f_3100:srfi_2d14_2escm",(void*)f_3100},
{"f_2097:srfi_2d14_2escm",(void*)f_2097},
{"f_2177:srfi_2d14_2escm",(void*)f_2177},
{"f_2087:srfi_2d14_2escm",(void*)f_2087},
{"f_1443:srfi_2d14_2escm",(void*)f_1443},
{"f_2278:srfi_2d14_2escm",(void*)f_2278},
{"f_2274:srfi_2d14_2escm",(void*)f_2274},
{"f_1742:srfi_2d14_2escm",(void*)f_1742},
{"f_1747:srfi_2d14_2escm",(void*)f_1747},
{"f_2858:srfi_2d14_2escm",(void*)f_2858},
{"f_2851:srfi_2d14_2escm",(void*)f_2851},
{"f_2293:srfi_2d14_2escm",(void*)f_2293},
{"f_2848:srfi_2d14_2escm",(void*)f_2848},
{"f_2844:srfi_2d14_2escm",(void*)f_2844},
{"f_1453:srfi_2d14_2escm",(void*)f_1453},
{"f_3617:srfi_2d14_2escm",(void*)f_3617},
{"f_3613:srfi_2d14_2escm",(void*)f_3613},
{"f_1483:srfi_2d14_2escm",(void*)f_1483},
{"f_1473:srfi_2d14_2escm",(void*)f_1473},
{"f_3098:srfi_2d14_2escm",(void*)f_3098},
{"f_3094:srfi_2d14_2escm",(void*)f_3094},
{"f_1471:srfi_2d14_2escm",(void*)f_1471},
{"f_3090:srfi_2d14_2escm",(void*)f_3090},
{"f_1498:srfi_2d14_2escm",(void*)f_1498},
{"toplevel:srfi_2d14_2escm",(void*)C_srfi_2d14_toplevel},
{"f_1810:srfi_2d14_2escm",(void*)f_1810},
{"f_3655:srfi_2d14_2escm",(void*)f_3655},
{"f_3658:srfi_2d14_2escm",(void*)f_3658},
{"f_2036:srfi_2d14_2escm",(void*)f_2036},
{"f_3652:srfi_2d14_2escm",(void*)f_3652},
{"f_2031:srfi_2d14_2escm",(void*)f_2031},
{"f_3851:srfi_2d14_2escm",(void*)f_3851},
{"f_3064:srfi_2d14_2escm",(void*)f_3064},
{"f_3066:srfi_2d14_2escm",(void*)f_3066},
{"f_3648:srfi_2d14_2escm",(void*)f_3648},
{"f_3061:srfi_2d14_2escm",(void*)f_3061},
{"f_3644:srfi_2d14_2escm",(void*)f_3644},
{"f_3640:srfi_2d14_2escm",(void*)f_3640},
{"f_2027:srfi_2d14_2escm",(void*)f_2027},
{"f_3845:srfi_2d14_2escm",(void*)f_3845},
{"f_2477:srfi_2d14_2escm",(void*)f_2477},
{"f_2473:srfi_2d14_2escm",(void*)f_2473},
{"f_2046:srfi_2d14_2escm",(void*)f_2046},
{"f_1930:srfi_2d14_2escm",(void*)f_1930},
{"f_1856:srfi_2d14_2escm",(void*)f_1856},
{"f_1936:srfi_2d14_2escm",(void*)f_1936},
{"f_1557:srfi_2d14_2escm",(void*)f_1557},
{"f_2468:srfi_2d14_2escm",(void*)f_2468},
{"f_2465:srfi_2d14_2escm",(void*)f_2465},
{"f_2592:srfi_2d14_2escm",(void*)f_2592},
{"f_1768:srfi_2d14_2escm",(void*)f_1768},
{"f_3692:srfi_2d14_2escm",(void*)f_3692},
{"f_1854:srfi_2d14_2escm",(void*)f_1854},
{"f_3695:srfi_2d14_2escm",(void*)f_3695},
{"f_3698:srfi_2d14_2escm",(void*)f_3698},
{"f_2461:srfi_2d14_2escm",(void*)f_2461},
{"f_1809:srfi_2d14_2escm",(void*)f_1809},
{"f_3680:srfi_2d14_2escm",(void*)f_3680},
{"f_3684:srfi_2d14_2escm",(void*)f_3684},
{"f_1805:srfi_2d14_2escm",(void*)f_1805},
{"f_3688:srfi_2d14_2escm",(void*)f_3688},
{"f_1954:srfi_2d14_2escm",(void*)f_1954},
{"f_2597:srfi_2d14_2escm",(void*)f_2597},
{"f_2487:srfi_2d14_2escm",(void*)f_2487},
{"f_2483:srfi_2d14_2escm",(void*)f_2483},
{"f_3673:srfi_2d14_2escm",(void*)f_3673},
{"f_3676:srfi_2d14_2escm",(void*)f_3676},
{"f_2481:srfi_2d14_2escm",(void*)f_2481},
{"f_3716:srfi_2d14_2escm",(void*)f_3716},
{"f_1942:srfi_2d14_2escm",(void*)f_1942},
{"f_2585:srfi_2d14_2escm",(void*)f_2585},
{"f_1948:srfi_2d14_2escm",(void*)f_1948},
{"f_2589:srfi_2d14_2escm",(void*)f_2589},
{"f_3712:srfi_2d14_2escm",(void*)f_3712},
{"f_3661:srfi_2d14_2escm",(void*)f_3661},
{"f_3665:srfi_2d14_2escm",(void*)f_3665},
{"f_3668:srfi_2d14_2escm",(void*)f_3668},
{"f_3708:srfi_2d14_2escm",(void*)f_3708},
{"f_3705:srfi_2d14_2escm",(void*)f_3705},
{"f_3702:srfi_2d14_2escm",(void*)f_3702},
{"f_2424:srfi_2d14_2escm",(void*)f_2424},
{"f_1960:srfi_2d14_2escm",(void*)f_1960},
{"f_1966:srfi_2d14_2escm",(void*)f_1966},
{"f_3164:srfi_2d14_2escm",(void*)f_3164},
{"f_1912:srfi_2d14_2escm",(void*)f_1912},
{"f_1918:srfi_2d14_2escm",(void*)f_1918},
{"f_2447:srfi_2d14_2escm",(void*)f_2447},
{"f_1906:srfi_2d14_2escm",(void*)f_1906},
{"f_1900:srfi_2d14_2escm",(void*)f_1900},
{"f_3141:srfi_2d14_2escm",(void*)f_3141},
{"f_1628:srfi_2d14_2escm",(void*)f_1628},
{"f_1861:srfi_2d14_2escm",(void*)f_1861},
{"f_1860:srfi_2d14_2escm",(void*)f_1860},
{"f_1657:srfi_2d14_2escm",(void*)f_1657},
{"f_3131:srfi_2d14_2escm",(void*)f_3131},
{"f_3134:srfi_2d14_2escm",(void*)f_3134},
{"f_1924:srfi_2d14_2escm",(void*)f_1924},
{"f_3452:srfi_2d14_2escm",(void*)f_3452},
{"f_1887:srfi_2d14_2escm",(void*)f_1887},
{"f_2492:srfi_2d14_2escm",(void*)f_2492},
{"f_3198:srfi_2d14_2escm",(void*)f_3198},
{"f_1877:srfi_2d14_2escm",(void*)f_1877},
{"f_1875:srfi_2d14_2escm",(void*)f_1875},
{"f_3437:srfi_2d14_2escm",(void*)f_3437},
{"f_3181:srfi_2d14_2escm",(void*)f_3181},
{"f_1738:srfi_2d14_2escm",(void*)f_1738},
{"f_2718:srfi_2d14_2escm",(void*)f_2718},
{"f_3781:srfi_2d14_2escm",(void*)f_3781},
{"f_1979:srfi_2d14_2escm",(void*)f_1979},
{"f_1975:srfi_2d14_2escm",(void*)f_1975},
{"f_3175:srfi_2d14_2escm",(void*)f_3175},
{"f_3171:srfi_2d14_2escm",(void*)f_3171},
{"f_1283:srfi_2d14_2escm",(void*)f_1283},
{"f_3179:srfi_2d14_2escm",(void*)f_3179},
{"f_3771:srfi_2d14_2escm",(void*)f_3771},
{"f_3779:srfi_2d14_2escm",(void*)f_3779},
{"f_1271:srfi_2d14_2escm",(void*)f_1271},
{"f_2454:srfi_2d14_2escm",(void*)f_2454},
{"f_1289:srfi_2d14_2escm",(void*)f_1289},
{"f_2451:srfi_2d14_2escm",(void*)f_2451},
{"f_3446:srfi_2d14_2escm",(void*)f_3446},
{"f_3444:srfi_2d14_2escm",(void*)f_3444},
{"f_3634:srfi_2d14_2escm",(void*)f_3634},
{"f_3630:srfi_2d14_2escm",(void*)f_3630},
{"f_1984:srfi_2d14_2escm",(void*)f_1984},
{"f_2548:srfi_2d14_2escm",(void*)f_2548},
{"f_3623:srfi_2d14_2escm",(void*)f_3623},
{"f_3620:srfi_2d14_2escm",(void*)f_3620},
{"f_2535:srfi_2d14_2escm",(void*)f_2535},
{"f_1829:srfi_2d14_2escm",(void*)f_1829},
{"f_1824:srfi_2d14_2escm",(void*)f_1824},
{"f_3519:srfi_2d14_2escm",(void*)f_3519},
{"f_3511:srfi_2d14_2escm",(void*)f_3511},
{"f_2782:srfi_2d14_2escm",(void*)f_2782},
{"f_3549:srfi_2d14_2escm",(void*)f_3549},
{"f_3546:srfi_2d14_2escm",(void*)f_3546},
{"f_3542:srfi_2d14_2escm",(void*)f_3542},
{"f_2774:srfi_2d14_2escm",(void*)f_2774},
{"f_2776:srfi_2d14_2escm",(void*)f_2776},
{"f_1839:srfi_2d14_2escm",(void*)f_1839},
{"f_2770:srfi_2d14_2escm",(void*)f_2770},
{"f_2614:srfi_2d14_2escm",(void*)f_2614},
{"f_2619:srfi_2d14_2escm",(void*)f_2619},
{"f_2611:srfi_2d14_2escm",(void*)f_2611},
{"f_2766:srfi_2d14_2escm",(void*)f_2766},
{"f_2605:srfi_2d14_2escm",(void*)f_2605},
{"f_2607:srfi_2d14_2escm",(void*)f_2607},
{"f_1295:srfi_2d14_2escm",(void*)f_1295},
{"f_2601:srfi_2d14_2escm",(void*)f_2601},
{"f_2403:srfi_2d14_2escm",(void*)f_2403},
{"f_2401:srfi_2d14_2escm",(void*)f_2401},
{"f_1269:srfi_2d14_2escm",(void*)f_1269},
{"f_3560:srfi_2d14_2escm",(void*)f_3560},
{"f_2678:srfi_2d14_2escm",(void*)f_2678},
{"f_2666:srfi_2d14_2escm",(void*)f_2666},
{"f_2668:srfi_2d14_2escm",(void*)f_2668},
{"f_2924:srfi_2d14_2escm",(void*)f_2924},
{"f_2914:srfi_2d14_2escm",(void*)f_2914},
{"f_2687:srfi_2d14_2escm",(void*)f_2687},
{"f_2904:srfi_2d14_2escm",(void*)f_2904},
{"f_3742:srfi_2d14_2escm",(void*)f_3742},
{"f_3740:srfi_2d14_2escm",(void*)f_3740},
{"f_2951:srfi_2d14_2escm",(void*)f_2951},
{"f_3218:srfi_2d14_2escm",(void*)f_3218},
{"f_3736:srfi_2d14_2escm",(void*)f_3736},
{"f_3211:srfi_2d14_2escm",(void*)f_3211},
{"f_3732:srfi_2d14_2escm",(void*)f_3732},
{"f_3316:srfi_2d14_2escm",(void*)f_3316},
{"f_2966:srfi_2d14_2escm",(void*)f_2966},
{"f_3208:srfi_2d14_2escm",(void*)f_3208},
{"f_3728:srfi_2d14_2escm",(void*)f_3728},
{"f_3724:srfi_2d14_2escm",(void*)f_3724},
{"f_3386:srfi_2d14_2escm",(void*)f_3386},
{"f_3720:srfi_2d14_2escm",(void*)f_3720},
{"f_3383:srfi_2d14_2escm",(void*)f_3383},
{"f_2956:srfi_2d14_2escm",(void*)f_2956},
{"f_3373:srfi_2d14_2escm",(void*)f_3373},
{"f_2947:srfi_2d14_2escm",(void*)f_2947},
{"f_2945:srfi_2d14_2escm",(void*)f_2945},
{"f_2102:srfi_2d14_2escm",(void*)f_2102},
{"f_1311:srfi_2d14_2escm",(void*)f_1311},
{"f_2802:srfi_2d14_2escm",(void*)f_2802},
{"f_3331:srfi_2d14_2escm",(void*)f_3331},
{"f_3529:srfi_2d14_2escm",(void*)f_3529},
{"f_3329:srfi_2d14_2escm",(void*)f_3329},
{"f_3321:srfi_2d14_2escm",(void*)f_3321},
{"f_3325:srfi_2d14_2escm",(void*)f_3325},
{"f_3555:srfi_2d14_2escm",(void*)f_3555},
{"f_3552:srfi_2d14_2escm",(void*)f_3552},
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
S|  map		4
S|  for-each		5
o|eliminated procedure checks: 214 
o|specializations:
o|  4 (##sys#check-list (or pair list) *)
o|  1 (make-string fixnum)
o|  1 (min fixnum fixnum)
o|  2 (< fixnum fixnum)
o|  1 (string-length string)
o|  14 (zero? fixnum)
o|  1 (<= fixnum fixnum)
o|  4 (make-string fixnum char)
o|  8 (cdr pair)
o|  4 (car pair)
o|Removed `not' forms: 8 
o|inlining procedure: k1313 
o|inlining procedure: k1327 
o|inlining procedure: k1327 
o|inlining procedure: k1313 
o|substituted constant variable: a1349 
o|inlining procedure: "(srfi-14.scm:118) %latin1->char" 
o|inlining procedure: k1363 
o|inlining procedure: k1363 
o|inlining procedure: k1407 
o|inlining procedure: k1407 
o|inlining procedure: k1426 
o|inlining procedure: k1426 
o|inlining procedure: k1458 
o|inlining procedure: k1458 
o|inlining procedure: k1478 
o|inlining procedure: k1478 
o|inlining procedure: k1500 
o|inlining procedure: k1500 
o|contracted procedure: "(srfi-14.scm:180) g127128" 
o|inlining procedure: "(srfi-14.scm:137) %char->latin1" 
o|contracted procedure: "(srfi-14.scm:180) g123124" 
o|inlining procedure: "(srfi-14.scm:137) %char->latin1" 
o|inlining procedure: k1580 
o|inlining procedure: k1580 
o|inlining procedure: k1597 
o|inlining procedure: k1597 
o|contracted procedure: "(srfi-14.scm:207) g149150" 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: k1630 
o|inlining procedure: k1630 
o|contracted procedure: "(srfi-14.scm:213) g159160" 
o|contracted procedure: "(srfi-14.scm:136) g163164" 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: "(srfi-14.scm:215) %char->latin1" 
o|inlining procedure: k1707 
o|inlining procedure: k1707 
o|contracted procedure: "(srfi-14.scm:221) g174175" 
o|inlining procedure: "(srfi-14.scm:137) %char->latin1" 
o|inlining procedure: k1749 
o|inlining procedure: k1749 
o|inlining procedure: k1763 
o|inlining procedure: k1763 
o|inlining procedure: "(srfi-14.scm:229) %latin1->char" 
o|contracted procedure: "(srfi-14.scm:229) g187188" 
o|contracted procedure: "(srfi-14.scm:136) g191192" 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: "(srfi-14.scm:238) %char->latin1" 
o|inlining procedure: k1831 
o|inlining procedure: k1831 
o|inlining procedure: "(srfi-14.scm:244) %char->latin1" 
o|inlining procedure: k1879 
o|inlining procedure: k1879 
o|inlining procedure: "(srfi-14.scm:273) %latin1->char" 
o|inlining procedure: k1989 
o|inlining procedure: k1989 
o|contracted procedure: "(srfi-14.scm:285) g288289" 
o|contracted procedure: "(srfi-14.scm:136) g292293" 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: k2038 
o|inlining procedure: "(srfi-14.scm:296) %latin1->char" 
o|contracted procedure: "(srfi-14.scm:296) g307308" 
o|contracted procedure: "(srfi-14.scm:136) g311312" 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: k2038 
o|inlining procedure: k2104 
o|contracted procedure: "(srfi-14.scm:306) g336337" 
o|inlining procedure: "(srfi-14.scm:306) %char->latin1" 
o|inlining procedure: "(srfi-14.scm:306) %latin1->char" 
o|contracted procedure: "(srfi-14.scm:305) g328329" 
o|contracted procedure: "(srfi-14.scm:136) g332333" 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: k2104 
o|substituted constant variable: a2165 
o|inlining procedure: k2179 
o|inlining procedure: k2179 
o|inlining procedure: k2193 
o|inlining procedure: k2193 
o|inlining procedure: "(srfi-14.scm:317) %latin1->char" 
o|contracted procedure: "(srfi-14.scm:316) g351352" 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: k2234 
o|inlining procedure: k2234 
o|inlining procedure: "(srfi-14.scm:324) %latin1->char" 
o|contracted procedure: "(srfi-14.scm:324) g369370" 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: k2285 
o|inlining procedure: "(srfi-14.scm:332) %latin1->char" 
o|contracted procedure: "(srfi-14.scm:332) g385386" 
o|contracted procedure: "(srfi-14.scm:136) g389390" 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: k2285 
o|removed unused formal parameters: (proc395) 
o|contracted procedure: k2348 
o|inlining procedure: k2345 
o|inlining procedure: k2345 
o|contracted procedure: "(srfi-14.scm:342) g407408" 
o|inlining procedure: "(srfi-14.scm:342) %char->latin1" 
o|removed unused parameter to known procedure: proc395 "(srfi-14.scm:347) %char-set-unfold!" 
o|removed unused parameter to known procedure: proc395 "(srfi-14.scm:351) %char-set-unfold!" 
o|contracted procedure: "(srfi-14.scm:361) g444445" 
o|inlining procedure: "(srfi-14.scm:361) %char->latin1" 
o|inlining procedure: k2426 
o|inlining procedure: k2426 
o|substituted constant variable: a2458 
o|inlining procedure: k2494 
o|inlining procedure: k2494 
o|inlining procedure: k2508 
o|inlining procedure: k2508 
o|inlining procedure: "(srfi-14.scm:385) %latin1->char" 
o|contracted procedure: "(srfi-14.scm:384) g472473" 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: k2550 
o|inlining procedure: k2550 
o|contracted procedure: "(srfi-14.scm:396) g484485" 
o|inlining procedure: "(srfi-14.scm:396) %char->latin1" 
o|inlining procedure: k2621 
o|inlining procedure: k2621 
o|inlining procedure: "(srfi-14.scm:415) %latin1->char" 
o|contracted procedure: "(srfi-14.scm:414) g508509" 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: k2689 
o|contracted procedure: "(srfi-14.scm:433) g528529" 
o|inlining procedure: k2689 
o|substituted constant variable: a2715 
o|inlining procedure: k2725 
o|inlining procedure: k2725 
o|substituted constant variable: a2731 
o|removed unused formal parameters: (proc562) 
o|inlining procedure: k2784 
o|contracted procedure: "(srfi-14.scm:455) g578579" 
o|inlining procedure: "(srfi-14.scm:454) %latin1->char" 
o|contracted procedure: "(srfi-14.scm:454) g570571" 
o|contracted procedure: "(srfi-14.scm:136) g574575" 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: k2784 
o|removed unused parameter to known procedure: proc562 "(srfi-14.scm:460) %char-set-filter!" 
o|removed unused parameter to known procedure: proc562 "(srfi-14.scm:467) %char-set-filter!" 
o|inlining procedure: k2876 
o|inlining procedure: k2876 
o|inlining procedure: k2891 
o|inlining procedure: k2891 
o|inlining procedure: k2916 
o|inlining procedure: "(srfi-14.scm:500) %char->latin1" 
o|inlining procedure: k2916 
o|inlining procedure: k2958 
o|contracted procedure: "(srfi-14.scm:514) g637638" 
o|inlining procedure: "(srfi-14.scm:137) %char->latin1" 
o|inlining procedure: k2958 
o|inlining procedure: k2996 
o|inlining procedure: k2996 
o|contracted procedure: "(srfi-14.scm:524) g654655" 
o|contracted procedure: "(srfi-14.scm:148) g659660" 
o|inlining procedure: "(srfi-14.scm:147) %latin1->char" 
o|substituted constant variable: a3055 
o|contracted procedure: "(srfi-14.scm:529) g670671" 
o|contracted procedure: "(srfi-14.scm:148) g675676" 
o|inlining procedure: "(srfi-14.scm:147) %latin1->char" 
o|contracted procedure: k3105 
o|inlining procedure: k3102 
o|inlining procedure: k3102 
o|contracted procedure: "(srfi-14.scm:150) g687688" 
o|inlining procedure: k3123 
o|contracted procedure: k3146 
o|inlining procedure: k3143 
o|inlining procedure: k3143 
o|contracted procedure: "(srfi-14.scm:150) g698699" 
o|inlining procedure: k3123 
o|inlining procedure: k3183 
o|contracted procedure: "(srfi-14.scm:149) g709710" 
o|inlining procedure: k3183 
o|inlining procedure: k3200 
o|inlining procedure: k3220 
o|contracted procedure: "(srfi-14.scm:149) g720721" 
o|inlining procedure: k3220 
o|inlining procedure: k3200 
o|contracted procedure: k3259 
o|inlining procedure: k3256 
o|inlining procedure: k3256 
o|contracted procedure: "(srfi-14.scm:151) g731732" 
o|inlining procedure: k3277 
o|contracted procedure: k3298 
o|inlining procedure: k3295 
o|inlining procedure: k3295 
o|contracted procedure: "(srfi-14.scm:151) g743744" 
o|inlining procedure: k3277 
o|contracted procedure: k3336 
o|inlining procedure: k3333 
o|inlining procedure: k3333 
o|contracted procedure: "(srfi-14.scm:152) g754755" 
o|inlining procedure: "(srfi-14.scm:147) %latin1->char" 
o|contracted procedure: "(srfi-14.scm:152) g759760" 
o|inlining procedure: "(srfi-14.scm:137) %char->latin1" 
o|inlining procedure: k3375 
o|contracted procedure: k3398 
o|inlining procedure: k3395 
o|inlining procedure: k3395 
o|contracted procedure: "(srfi-14.scm:152) g770771" 
o|inlining procedure: "(srfi-14.scm:147) %latin1->char" 
o|contracted procedure: "(srfi-14.scm:152) g775776" 
o|inlining procedure: "(srfi-14.scm:137) %char->latin1" 
o|inlining procedure: k3375 
o|contracted procedure: k3457 
o|inlining procedure: k3454 
o|inlining procedure: k3454 
o|contracted procedure: "(srfi-14.scm:601) g816817" 
o|contracted procedure: "(srfi-14.scm:600) g812813" 
o|contracted procedure: "(srfi-14.scm:599) g804805" 
o|contracted procedure: "(srfi-14.scm:136) g808809" 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: k3521 
o|inlining procedure: k3521 
o|inlining procedure: k3562 
o|contracted procedure: "(srfi-14.scm:609) g834835" 
o|inlining procedure: k3562 
o|contracted procedure: "(srfi-14.scm:610) g846847" 
o|contracted procedure: "(srfi-14.scm:610) g838839" 
o|contracted procedure: "(srfi-14.scm:136) g842843" 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|substituted constant variable: a3635 
o|inlining procedure: k3744 
o|inlining procedure: k3744 
o|inlining procedure: k3783 
o|inlining procedure: k3783 
o|inlining procedure: k3818 
o|inlining procedure: k3818 
o|inlining procedure: k3853 
o|inlining procedure: k3853 
o|inlining procedure: "(srfi-14.scm:651) %latin1->char" 
o|inlining procedure: "(srfi-14.scm:650) %latin1->char" 
o|inlining procedure: "(srfi-14.scm:637) %latin1->char" 
o|inlining procedure: "(srfi-14.scm:142) %latin1->char" 
o|inlining procedure: "(srfi-14.scm:141) %latin1->char" 
o|replaced variables: 421 
o|removed binding forms: 246 
o|removed side-effect free assignment to unused variable: %char->latin1 
o|substituted constant variable: n643906 
o|folded constant expression: (integer->char (quote 0)) 
o|substituted constant variable: r22864072 
o|substituted constant variable: r27264125 
o|substituted constant variable: g974978 
o|substituted constant variable: g946950 
o|substituted constant variable: g918922 
o|substituted constant variable: g889893 
o|substituted constant variable: n644237 
o|folded constant expression: (integer->char (quote 186)) 
o|substituted constant variable: n644242 
o|folded constant expression: (integer->char (quote 170)) 
o|substituted constant variable: n644247 
o|folded constant expression: (integer->char (quote 181)) 
o|substituted constant variable: n644252 
o|folded constant expression: (integer->char (quote 1)) 
o|substituted constant variable: n644257 
o|folded constant expression: (integer->char (quote 0)) 
o|replaced variables: 101 
o|removed binding forms: 447 
o|inlining procedure: "(srfi-14.scm:114) %string-copy" 
o|inlining procedure: "(srfi-14.scm:155) %string-copy" 
o|inlining procedure: "(srfi-14.scm:237) %string-copy" 
o|inlining procedure: k1995 
o|inlining procedure: k2044 
o|inlining procedure: k2110 
o|inlining procedure: k2790 
o|inlining procedure: "(srfi-14.scm:542) %string-copy" 
o|inlining procedure: "(srfi-14.scm:557) %string-copy" 
o|inlining procedure: "(srfi-14.scm:572) %string-copy" 
o|inlining procedure: "(srfi-14.scm:587) %string-copy" 
o|replaced variables: 47 
o|removed binding forms: 114 
o|removed side-effect free assignment to unused variable: %string-copy 
o|replaced variables: 48 
o|removed binding forms: 51 
o|inlining procedure: k1351 
o|inlining procedure: k3890 
o|inlining procedure: k3898 
o|removed binding forms: 49 
o|substituted constant variable: r13524542 
o|contracted procedure: k1380 
o|contracted procedure: k1384 
o|contracted procedure: k3886 
o|substituted constant variable: r38914605 
o|substituted constant variable: r38994606 
o|removed binding forms: 6 
o|substituted constant variable: r1381 
o|substituted constant variable: r1385 
o|substituted constant variable: r3887 
o|substituted constant variable: r3887 
o|replaced variables: 2 
o|removed binding forms: 3 
o|substituted constant variable: c1 
o|substituted constant variable: c1 
o|substituted constant variable: c0 
o|substituted constant variable: c0 
o|substituted constant variable: c1 
o|substituted constant variable: c0 
o|substituted constant variable: c0 
o|substituted constant variable: c1 
o|substituted constant variable: c1 
o|substituted constant variable: c0 
o|substituted constant variable: c0 
o|substituted constant variable: c1 
o|substituted constant variable: c1 
o|substituted constant variable: c1 
o|substituted constant variable: c1 
o|substituted constant variable: c1 
o|substituted constant variable: c0 
o|substituted constant variable: c0 
o|substituted constant variable: c0 
o|substituted constant variable: c0 
o|substituted constant variable: c1 
o|substituted constant variable: c0 
o|substituted constant variable: c0 
o|substituted constant variable: c0 
o|substituted constant variable: c0 
o|substituted constant variable: c0 
o|removed binding forms: 6 
o|removed side-effect free assignment to unused variable: c0 
o|removed side-effect free assignment to unused variable: c1 
o|removed binding forms: 3 
o|removed binding forms: 2 
o|simplifications: ((if . 3) (##core#call . 269)) 
o|  call simplifications:
o|    ##sys#setslot	4
o|    values	2
o|    string?
o|    char?
o|    cdr
o|    fx<	2
o|    fxmin
o|    <=
o|    ##sys#check-string
o|    ##sys#size
o|    cons	5
o|    string-set!	25
o|    ##sys#check-list	5
o|    ##sys#check-char
o|    zero?	11
o|    ##sys#check-exact	4
o|    >=	7
o|    *
o|    +	5
o|    fxand
o|    eq?	15
o|    <	11
o|    string-ref	22
o|    char->integer	28
o|    fx<=
o|    -	28
o|    not	11
o|    car	6
o|    string=?
o|    pair?	16
o|    null?	6
o|    string-length	8
o|    ##sys#structure?
o|    ##sys#slot	19
o|    ##sys#make-structure
o|    integer->char	15
o|contracted procedure: k1316 
o|contracted procedure: k1324 
o|contracted procedure: k13074373 
o|contracted procedure: k13074380 
o|contracted procedure: k1404 
o|contracted procedure: k1410 
o|contracted procedure: k1449 
o|contracted procedure: k1423 
o|contracted procedure: k1432 
o|contracted procedure: k1445 
o|contracted procedure: k1455 
o|contracted procedure: k1461 
o|contracted procedure: k1553 
o|contracted procedure: k1475 
o|contracted procedure: k1488 
o|contracted procedure: k1503 
o|substituted constant variable: g4984 
o|contracted procedure: k1512 
o|contracted procedure: k1519 
o|contracted procedure: k1542 
o|contracted procedure: k1529 
o|contracted procedure: k1549 
o|contracted procedure: k1650 
o|contracted procedure: k1559 
o|contracted procedure: k1565 
o|contracted procedure: k1583 
o|substituted constant variable: g4990 
o|contracted procedure: k1593 
o|contracted procedure: k1624 
o|contracted procedure: k1620 
o|contracted procedure: k1597 
o|contracted procedure: k1610 
o|contracted procedure: k1606 
o|contracted procedure: k1633 
o|contracted procedure: k1643 
o|contracted procedure: k1646 
o|contracted procedure: k1659 
o|contracted procedure: k1692 
o|contracted procedure: k1678 
o|contracted procedure: k1674 
o|contracted procedure: k1710 
o|substituted constant variable: g4998 
o|contracted procedure: k1717 
o|contracted procedure: k1721 
o|contracted procedure: k1731 
o|contracted procedure: k1752 
o|substituted constant variable: g5002 
o|contracted procedure: k1759 
o|contracted procedure: k1763 
o|contracted procedure: k1801 
o|contracted procedure: k1788 
o|contracted procedure: k1784 
o|contracted procedure: k1816 
o|contracted procedure: k1819 
o|contracted procedure: k1834 
o|contracted procedure: k1844 
o|contracted procedure: k1848 
o|contracted procedure: k13074401 
o|contracted procedure: k1867 
o|contracted procedure: k1870 
o|contracted procedure: k1882 
o|contracted procedure: k1892 
o|contracted procedure: k1896 
o|substituted constant variable: g5010 
o|contracted procedure: k1968 
o|contracted procedure: k1986 
o|contracted procedure: k1992 
o|substituted constant variable: g5012 
o|contracted procedure: k2017 
o|contracted procedure: k2013 
o|contracted procedure: k2041 
o|substituted constant variable: g5016 
o|contracted procedure: k2051 
o|contracted procedure: k2083 
o|contracted procedure: k20514411 
o|contracted procedure: k2070 
o|contracted procedure: k2066 
o|contracted procedure: k2107 
o|substituted constant variable: g5020 
o|contracted procedure: k2154 
o|contracted procedure: k2110 
o|contracted procedure: k2117 
o|contracted procedure: k2162 
o|contracted procedure: k21174417 
o|contracted procedure: k2136 
o|contracted procedure: k2132 
o|contracted procedure: k2182 
o|substituted constant variable: g5024 
o|contracted procedure: k2189 
o|contracted procedure: k2216 
o|contracted procedure: k2206 
o|contracted procedure: k2202 
o|contracted procedure: k2231 
o|substituted constant variable: g5028 
o|contracted procedure: k2263 
o|contracted procedure: k2270 
o|contracted procedure: k2250 
o|contracted procedure: k2246 
o|contracted procedure: k2288 
o|substituted constant variable: g5032 
o|contracted procedure: k2301 
o|contracted procedure: k2333 
o|contracted procedure: k2320 
o|contracted procedure: k2316 
o|contracted procedure: k2367 
o|contracted procedure: k2356 
o|contracted procedure: k2414 
o|contracted procedure: k2417 
o|contracted procedure: k2429 
o|contracted procedure: k2439 
o|contracted procedure: k2443 
o|contracted procedure: k2497 
o|substituted constant variable: g5040 
o|contracted procedure: k2504 
o|contracted procedure: k2531 
o|contracted procedure: k2508 
o|contracted procedure: k2521 
o|contracted procedure: k2517 
o|contracted procedure: k2537 
o|contracted procedure: k2580 
o|contracted procedure: k2544 
o|contracted procedure: k2553 
o|substituted constant variable: g5044 
o|contracted procedure: k2576 
o|contracted procedure: k2572 
o|contracted procedure: k2561 
o|contracted procedure: k2568 
o|contracted procedure: k2624 
o|substituted constant variable: g5048 
o|contracted procedure: k2634 
o|contracted procedure: k2660 
o|contracted procedure: k2653 
o|contracted procedure: k2647 
o|contracted procedure: k2643 
o|contracted procedure: k2670 
o|contracted procedure: k2673 
o|contracted procedure: k2711 
o|contracted procedure: k2683 
o|contracted procedure: k2692 
o|contracted procedure: k2700 
o|contracted procedure: k2707 
o|contracted procedure: k2722 
o|contracted procedure: k2728 
o|contracted procedure: k2759 
o|contracted procedure: k2738 
o|contracted procedure: k2753 
o|contracted procedure: k2741 
o|contracted procedure: k2787 
o|substituted constant variable: g5056 
o|contracted procedure: k2790 
o|contracted procedure: k2797 
o|contracted procedure: k27974441 
o|contracted procedure: k2840 
o|contracted procedure: k2827 
o|contracted procedure: k2823 
o|contracted procedure: k2885 
o|contracted procedure: k2894 
o|contracted procedure: k2941 
o|contracted procedure: k2910 
o|contracted procedure: k2919 
o|substituted constant variable: g5060 
o|contracted procedure: k2929 
o|contracted procedure: k2937 
o|contracted procedure: k2933 
o|contracted procedure: k2961 
o|substituted constant variable: g5064 
o|contracted procedure: k2971 
o|contracted procedure: k2981 
o|contracted procedure: k2987 
o|contracted procedure: k2999 
o|contracted procedure: k3009 
o|contracted procedure: k3013 
o|contracted procedure: k3049 
o|contracted procedure: k3042 
o|contracted procedure: k3083 
o|contracted procedure: k3076 
o|contracted procedure: k3117 
o|contracted procedure: k3126 
o|contracted procedure: k3158 
o|contracted procedure: k13074454 
o|contracted procedure: k3186 
o|contracted procedure: k3203 
o|contracted procedure: k3223 
o|contracted procedure: k13074459 
o|contracted procedure: k3271 
o|contracted procedure: k3280 
o|contracted procedure: k3310 
o|contracted procedure: k13074464 
o|contracted procedure: k3369 
o|contracted procedure: k3352 
o|contracted procedure: k3345 
o|contracted procedure: k3362 
o|contracted procedure: k3378 
o|contracted procedure: k3431 
o|contracted procedure: k3414 
o|contracted procedure: k3407 
o|contracted procedure: k3424 
o|contracted procedure: k13074469 
o|contracted procedure: k3505 
o|contracted procedure: k3493 
o|contracted procedure: k3479 
o|contracted procedure: k3475 
o|contracted procedure: k3512 
o|contracted procedure: k3524 
o|contracted procedure: k3534 
o|contracted procedure: k3538 
o|contracted procedure: k3565 
o|contracted procedure: k3595 
o|contracted procedure: k3591 
o|contracted procedure: k3747 
o|contracted procedure: k3750 
o|contracted procedure: k3761 
o|contracted procedure: k3773 
o|contracted procedure: k3786 
o|contracted procedure: k3789 
o|contracted procedure: k3800 
o|contracted procedure: k3812 
o|contracted procedure: k3821 
o|contracted procedure: k3824 
o|contracted procedure: k3835 
o|contracted procedure: k3847 
o|contracted procedure: k3856 
o|contracted procedure: k3859 
o|contracted procedure: k3870 
o|contracted procedure: k3882 
o|simplifications: ((let . 37)) 
o|replaced variables: 2 
o|removed binding forms: 208 
o|inlining procedure: k2256 
o|inlining procedure: k2291 
o|inlining procedure: k2627 
o|inlining procedure: k2627 
o|inlining procedure: k3753 
o|inlining procedure: k3753 
o|inlining procedure: k3792 
o|inlining procedure: k3792 
o|inlining procedure: k3827 
o|inlining procedure: k3827 
o|inlining procedure: k3862 
o|inlining procedure: k3862 
o|replaced variables: 86 
o|removed binding forms: 19 
o|inlining procedure: k1681 
o|inlining procedure: k1734 
o|inlining procedure: k1791 
o|inlining procedure: k2020 
o|inlining procedure: k2073 
o|inlining procedure: k2139 
o|substituted constant variable: r22925173 
o|substituted constant variable: r22925173 
o|inlining procedure: k2323 
o|inlining procedure: k2830 
o|inlining procedure: k2984 
o|inlining procedure: k3482 
o|inlining procedure: k3598 
o|simplifications: ((if . 1)) 
o|replaced variables: 2 
o|removed binding forms: 80 
o|removed conditional forms: 1 
o|contracted procedure: k1532 
o|contracted procedure: k1545 
o|contracted procedure: k1613 
o|contracted procedure: k2209 
o|contracted procedure: k2253 
o|contracted procedure: k2524 
o|contracted procedure: k2650 
o|contracted procedure: k3365 
o|contracted procedure: k3427 
o|replaced variables: 16 
o|removed binding forms: 23 
o|replaced variables: 15 
o|removed binding forms: 4 
o|inlining procedure: k1995 
o|removed binding forms: 13 
o|contracted procedure: k1794 
o|contracted procedure: k2076 
o|contracted procedure: k2142 
o|contracted procedure: k2326 
o|contracted procedure: k2833 
o|contracted procedure: k3485 
o|contracted procedure: k3601 
o|simplifications: ((let . 8)) 
o|removed binding forms: 8 
o|replaced variables: 6 
o|removed binding forms: 1 
o|direct leaf routine/allocation: lp143 0 
o|direct leaf routine/allocation: lp171 0 
o|direct leaf routine/allocation: lp282 0 
o|direct leaf routine/allocation: g434441 0 
o|direct leaf routine/allocation: doloop481482 0 
o|direct leaf routine/allocation: lp504 0 
o|direct leaf routine/allocation: lp522 0 
o|contracted procedure: k1571 
o|converted assignments to bindings: (lp143) 
o|converted assignments to bindings: (lp171) 
o|converted assignments to bindings: (lp282) 
o|contracted procedure: "(srfi-14.scm:360) k2432" 
o|converted assignments to bindings: (doloop481482) 
o|converted assignments to bindings: (lp504) 
o|converted assignments to bindings: (lp522) 
o|simplifications: ((let . 6)) 
o|removed binding forms: 2 
o|direct leaf routine/allocation: for-each-loop433448 0 
o|converted assignments to bindings: (for-each-loop433448) 
o|simplifications: ((let . 1)) 
o|customizable procedures: (map-loop877894 map-loop906923 map-loop934951 map-loop962979 %char-set-diff+intersection! g788795 for-each-loop787821 %char-set-algebra %string-iter g620627 for-each-loop619643 lp631 lp604 %char-set-filter! lp563 %ucs-range->char-set! k2716 %string->char-set! lp469 %list->char-set! %default-base %char-set-unfold! lp401 lp378 lp360 lp348 lp322 lp301 %char-set-cursor-next %set-char-set! %set-char-set g230237 for-each-loop229240 g205212 for-each-loop204215 lp183 k1562 lp146 lp2120 lp112 lp98 %char-set:s/check lp83) 
o|calls to known targets: 150 
o|identified direct recursive calls: f_1498 1 
o|identified direct recursive calls: f_1628 1 
o|identified direct recursive calls: f_1578 2 
o|identified direct recursive calls: f_1705 1 
o|identified direct recursive calls: f_1984 2 
o|identified direct recursive calls: f_2036 1 
o|identified direct recursive calls: f_2102 1 
o|identified direct recursive calls: f_2177 1 
o|identified direct recursive calls: f_2229 1 
o|identified direct recursive calls: f_2283 1 
o|identified direct recursive calls: f_2424 1 
o|identified direct recursive calls: f_2492 2 
o|identified direct recursive calls: f_2548 1 
o|identified direct recursive calls: f_2619 2 
o|identified direct recursive calls: f_2687 1 
o|fast box initializations: 24 
o|fast global references: 81 
o|fast global assignments: 14 
o|dropping unused closure argument: f_2337 
o|dropping unused closure argument: f_1355 
o|dropping unused closure argument: f_1856 
o|dropping unused closure argument: f_1805 
o|dropping unused closure argument: f_1975 
o|dropping unused closure argument: f_3444 
o|dropping unused closure argument: f_2535 
o|dropping unused closure argument: f_2776 
o|dropping unused closure argument: f_2401 
o|dropping unused closure argument: f_2668 
o|dropping unused closure argument: f_2904 
o|dropping unused closure argument: f_2945 
o|dropping unused closure argument: f_1311 
*/
/* end of file */
