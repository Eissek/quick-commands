/* Generated from lolevel.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:04
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: lolevel.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file lolevel.c
   unit: lolevel
*/

#include "chicken.h"

#ifndef C_NONUNIX
# include <sys/mman.h>
#endif

#define C_memmove_o(to, from, n, toff, foff) C_memmove((char *)(to) + (toff), (char *)(from) + (foff), (n))

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_srfi_2d69_toplevel)
C_externimport void C_ccall C_srfi_2d69_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[141];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,29),40,35,35,115,121,115,35,99,104,101,99,107,45,98,108,111,99,107,32,120,54,52,32,108,111,99,54,53,41,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,99,104,101,99,107,45,103,101,110,101,114,105,99,45,115,116,114,117,99,116,117,114,101,32,120,56,55,32,108,111,99,56,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,35),40,35,35,115,121,115,35,99,104,101,99,107,45,112,111,105,110,116,101,114,32,120,49,48,54,32,46,32,108,111,99,49,48,55,41,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,10),40,110,111,115,105,122,101,114,114,41,0,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,16),40,115,105,122,101,114,114,32,97,114,103,115,50,49,48,41};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,29),40,99,104,101,99,107,110,49,32,110,50,49,49,32,110,109,97,120,50,49,50,32,111,102,102,50,49,51,41,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,47),40,99,104,101,99,107,110,50,32,110,50,49,52,32,110,109,97,120,50,49,53,32,110,109,97,120,50,50,49,54,32,111,102,102,49,50,49,55,32,111,102,102,50,50,49,56,41,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,20),40,109,111,118,101,32,102,114,111,109,50,50,49,32,116,111,50,50,50,41,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,40),40,109,111,118,101,45,109,101,109,111,114,121,33,32,102,114,111,109,49,57,49,32,116,111,49,57,50,32,46,32,116,109,112,49,57,48,49,57,51,41};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,51,48,55,32,105,51,48,57,41};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,11),40,99,111,112,121,32,120,50,57,54,41,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,18),40,111,98,106,101,99,116,45,99,111,112,121,32,120,50,57,52,41,0,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,20),40,97,108,108,111,99,97,116,101,32,105,110,116,51,49,53,51,49,56,41,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,22),40,102,114,101,101,32,99,45,112,111,105,110,116,101,114,51,50,49,51,50,53,41,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,15),40,112,111,105,110,116,101,114,63,32,120,51,50,56,41,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,20),40,112,111,105,110,116,101,114,45,108,105,107,101,63,32,120,51,51,51,41,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,26),40,97,100,100,114,101,115,115,45,62,112,111,105,110,116,101,114,32,97,100,100,114,51,51,57,41,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,25),40,112,111,105,110,116,101,114,45,62,97,100,100,114,101,115,115,32,112,116,114,51,52,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,22),40,111,98,106,101,99,116,45,62,112,111,105,110,116,101,114,32,120,51,52,53,41,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,24),40,112,111,105,110,116,101,114,45,62,111,98,106,101,99,116,32,112,116,114,51,53,53,41};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,23),40,112,111,105,110,116,101,114,61,63,32,112,49,51,53,56,32,112,50,51,53,57,41,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,30),40,112,111,105,110,116,101,114,43,32,112,116,114,51,54,51,51,54,56,32,111,102,102,51,54,52,51,54,57,41,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,20),40,97,108,105,103,110,45,116,111,45,119,111,114,100,32,120,51,55,57,41,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,27),40,116,97,103,45,112,111,105,110,116,101,114,32,112,116,114,51,56,57,32,116,97,103,51,57,48,41,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,34),40,116,97,103,103,101,100,45,112,111,105,110,116,101,114,63,32,120,52,48,52,32,46,32,116,109,112,52,48,51,52,48,53,41,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,18),40,112,111,105,110,116,101,114,45,116,97,103,32,120,52,49,55,41,0,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,33),40,109,97,107,101,45,108,111,99,97,116,105,118,101,32,111,98,106,52,50,53,32,46,32,105,110,100,101,120,52,50,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,38),40,109,97,107,101,45,119,101,97,107,45,108,111,99,97,116,105,118,101,32,111,98,106,52,51,50,32,46,32,105,110,100,101,120,52,51,51,41,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,25),40,108,111,99,97,116,105,118,101,45,115,101,116,33,32,120,52,51,57,32,121,52,52,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,23),40,108,111,99,97,116,105,118,101,45,62,111,98,106,101,99,116,32,120,52,52,51,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,16),40,108,111,99,97,116,105,118,101,63,32,120,52,52,53,41};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,27),40,112,111,105,110,116,101,114,45,117,56,45,115,101,116,33,32,112,52,52,56,32,110,52,52,57,41,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,27),40,112,111,105,110,116,101,114,45,115,56,45,115,101,116,33,32,112,52,53,49,32,110,52,53,50,41,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,28),40,112,111,105,110,116,101,114,45,117,49,54,45,115,101,116,33,32,112,52,53,52,32,110,52,53,53,41,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,28),40,112,111,105,110,116,101,114,45,115,49,54,45,115,101,116,33,32,112,52,53,55,32,110,52,53,56,41,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,28),40,112,111,105,110,116,101,114,45,117,51,50,45,115,101,116,33,32,112,52,54,48,32,110,52,54,49,41,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,28),40,112,111,105,110,116,101,114,45,115,51,50,45,115,101,116,33,32,112,52,54,51,32,110,52,54,52,41,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,28),40,112,111,105,110,116,101,114,45,102,51,50,45,115,101,116,33,32,112,52,54,54,32,110,52,54,55,41,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,28),40,112,111,105,110,116,101,114,45,102,54,52,45,115,101,116,33,32,112,52,54,57,32,110,52,55,48,41,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,12),40,97,50,49,53,52,32,120,52,57,49,41,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,17),40,97,50,49,55,48,32,120,52,57,51,32,105,52,57,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,34),40,101,120,116,101,110,100,45,112,114,111,99,101,100,117,114,101,32,112,114,111,99,52,56,57,32,100,97,116,97,52,57,48,41,0,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,12),40,97,50,49,57,55,32,120,53,48,53,41,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,26),40,101,120,116,101,110,100,101,100,45,112,114,111,99,101,100,117,114,101,63,32,120,52,57,56,41,0,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,12),40,97,50,50,51,48,32,120,53,49,53,41,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,21),40,112,114,111,99,101,100,117,114,101,45,100,97,116,97,32,120,53,48,56,41,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,34),40,115,101,116,45,112,114,111,99,101,100,117,114,101,45,100,97,116,97,33,32,112,114,111,99,53,49,56,32,120,53,49,57,41,0,0,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,19),40,118,101,99,116,111,114,45,108,105,107,101,63,32,120,53,50,50,41,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,22),40,110,117,109,98,101,114,45,111,102,45,115,108,111,116,115,32,120,53,51,51,41,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,22),40,110,117,109,98,101,114,45,111,102,45,98,121,116,101,115,32,120,53,51,54,41,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,40),40,109,97,107,101,45,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,32,116,121,112,101,53,52,50,32,46,32,97,114,103,115,53,52,51,41};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,35),40,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,63,32,120,53,53,49,32,46,32,116,109,112,53,53,48,53,53,50,41,0,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,27),40,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,45,116,121,112,101,32,120,53,54,55,41,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,29),40,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,45,108,101,110,103,116,104,32,120,53,55,48,41,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,42),40,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,45,115,108,111,116,45,115,101,116,33,32,120,53,55,51,32,105,53,55,52,32,121,53,55,53,41,0,0,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,53,56,55,41,0,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,21),40,114,101,99,111,114,100,45,62,118,101,99,116,111,114,32,120,53,56,52,41,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,22),40,111,98,106,101,99,116,45,101,118,105,99,116,101,100,63,32,120,53,57,52,41,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,54,49,55,32,105,54,49,57,41};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,12),40,101,118,105,99,116,32,120,54,48,54,41,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,18),40,102,95,50,53,55,51,32,105,110,116,54,48,48,54,48,51,41,0,0,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,34),40,111,98,106,101,99,116,45,101,118,105,99,116,32,120,53,57,54,32,46,32,97,108,108,111,99,97,116,111,114,53,57,55,41,0,0,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,54,53,52,32,105,54,53,54,41};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,12),40,101,118,105,99,116,32,120,54,52,50,41,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,49),40,111,98,106,101,99,116,45,101,118,105,99,116,45,116,111,45,108,111,99,97,116,105,111,110,32,120,54,51,49,32,112,116,114,54,51,50,32,46,32,108,105,109,105,116,54,51,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,54,56,55,32,105,54,56,57,41};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,14),40,114,101,108,101,97,115,101,32,120,54,56,49,41,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,24),40,102,95,50,56,50,54,32,99,45,112,111,105,110,116,101,114,54,55,52,54,55,56,41};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,35),40,111,98,106,101,99,116,45,114,101,108,101,97,115,101,32,120,54,55,48,32,46,32,114,101,108,101,97,115,101,114,54,55,49,41,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,55,48,54,32,105,55,48,56,41};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,12),40,101,118,105,99,116,32,120,54,57,57,41,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,18),40,111,98,106,101,99,116,45,115,105,122,101,32,120,54,57,54,41,0,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,55,52,54,32,105,55,52,56,41};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,11),40,99,111,112,121,32,120,55,51,50,41,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,33),40,111,98,106,101,99,116,45,117,110,101,118,105,99,116,32,120,55,50,51,32,46,32,116,109,112,55,50,50,55,50,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,108,115,116,55,50,41,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,24),40,111,98,106,101,99,116,45,98,101,99,111,109,101,33,32,97,108,115,116,55,53,53,41};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,34),40,109,117,116,97,116,101,45,112,114,111,99,101,100,117,114,101,33,32,111,108,100,55,53,56,32,112,114,111,99,55,53,57,41,0,0,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,55,56,51,41,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,38),40,109,97,107,101,45,112,111,105,110,116,101,114,45,118,101,99,116,111,114,32,110,55,55,51,32,46,32,116,109,112,55,55,50,55,55,52,41,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,22),40,112,111,105,110,116,101,114,45,118,101,99,116,111,114,63,32,120,55,57,50,41,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,24),40,100,111,108,111,111,112,55,57,56,32,112,116,114,115,56,48,48,32,105,56,48,49,41};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,26),40,112,111,105,110,116,101,114,45,118,101,99,116,111,114,32,46,32,112,116,114,115,55,57,52,41,0,0,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,56,49,49,41,0,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,35),40,112,111,105,110,116,101,114,45,118,101,99,116,111,114,45,102,105,108,108,33,32,112,118,56,48,55,32,112,116,114,56,48,56,41,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,31),40,112,118,45,98,117,102,45,115,101,116,33,32,105,56,50,56,56,51,52,32,112,116,114,56,50,57,56,51,53,41,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,39),40,112,111,105,110,116,101,114,45,118,101,99,116,111,114,45,115,101,116,33,32,112,118,56,51,56,32,105,56,51,57,32,112,116,114,56,52,48,41,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,29),40,112,111,105,110,116,101,114,45,118,101,99,116,111,114,45,108,101,110,103,116,104,32,112,118,56,53,50,41,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,18),40,97,51,50,57,50,32,112,118,56,52,54,32,105,56,52,55,41,0,0,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,17),40,97,51,51,49,53,32,120,53,55,57,32,105,53,56,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,12),40,97,51,51,51,57,32,112,52,56,54,41,0,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,12),40,97,51,51,52,50,32,112,52,56,52,41,0,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,12),40,97,51,51,52,53,32,112,52,56,50,41,0,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,12),40,97,51,51,52,56,32,112,52,56,48,41,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,12),40,97,51,51,53,49,32,112,52,55,56,41,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,12),40,97,51,51,53,52,32,112,52,55,54,41,0,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,12),40,97,51,51,53,55,32,112,52,55,52,41,0,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,12),40,97,51,51,54,48,32,112,52,55,50,41,0,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,14),67,95,108,111,99,97,116,105,118,101,95,114,101,102,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub830(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub830(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word buf=(C_word )(C_a0);
unsigned int i=(unsigned int )C_unfix(C_a1);
void * ptr=(void * )C_c_pointer_or_null(C_a2);
*((void **)C_data_pointer(buf) + i) = ptr;
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer_or_false(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub821(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub821(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word buf=(C_word )(C_a0);
unsigned int i=(unsigned int )C_unfix(C_a1);
C_return(*((void **)C_data_pointer(buf) + i));
C_ret:
#undef return

return C_r;}

/* from k2829 */
static C_word C_fcall stub675(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub675(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
C_free(t0);
return C_r;}

/* from k2576 */
static C_word C_fcall stub601(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub601(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer_or_false(&C_a,(void*)C_malloc(t0));
return C_r;}

/* from k1922 */
static C_word C_fcall stub375(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub375(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_num_to_int(C_a0);
C_r=C_int_to_num(&C_a,C_align(t0));
return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub365(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub365(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * ptr=(void * )C_c_pointer_or_null(C_a0);
int off=(int )C_num_to_int(C_a1);
C_return((unsigned char *)ptr + off);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub350(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub350(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word x=(C_word )(C_a0);
C_return((void *)x);
C_ret:
#undef return

return C_r;}

/* from k1835 */
static C_word C_fcall stub322(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub322(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
C_free(t0);
return C_r;}

/* from k1828 */
static C_word C_fcall stub316(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub316(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer_or_false(&C_a,(void*)C_malloc(t0));
return C_r;}

/* from k1385 */
static C_word C_fcall stub173(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4) C_regparm;
C_regparm static C_word C_fcall stub173(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

/* from k1357 */
static C_word C_fcall stub157(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4) C_regparm;
C_regparm static C_word C_fcall stub157(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
void * t1=(void * )C_c_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

/* from k1329 */
static C_word C_fcall stub141(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4) C_regparm;
C_regparm static C_word C_fcall stub141(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

/* from k1301 */
static C_word C_fcall stub125(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4) C_regparm;
C_regparm static C_word C_fcall stub125(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
void * t1=(void * )C_c_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

C_noret_decl(f_1259)
static void C_ccall f_1259(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1259)
static void C_ccall f_1259r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2593)
static void C_ccall f_2593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2590)
static void C_ccall f_2590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2596)
static void C_ccall f_2596(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3026)
static void C_ccall f_3026(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1663)
static void C_ccall f_1663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2496)
static void C_ccall f_2496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2271)
static void C_ccall f_2271(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1653)
static void C_ccall f_1653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2798)
static void C_fcall f_2798(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2198)
static void C_ccall f_2198(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2260)
static void C_ccall f_2260(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2181)
static void C_ccall f_2181(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3040)
static void C_ccall f_3040(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3044)
static void C_ccall f_3044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3049)
static void C_ccall f_3049(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3053)
static void C_ccall f_3053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3056)
static void C_ccall f_3056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1673)
static void C_ccall f_1673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1485)
static void C_ccall f_1485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2665)
static void C_ccall f_2665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1482)
static void C_ccall f_1482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1479)
static void C_ccall f_1479(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2393)
static void C_ccall f_2393(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1476)
static void C_ccall f_1476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2397)
static void C_ccall f_2397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2155)
static void C_ccall f_2155(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2584)
static void C_ccall f_2584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2580)
static void C_ccall f_2580(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2580)
static void C_ccall f_2580r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2150)
static void C_ccall f_2150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2587)
static void C_fcall f_2587(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2683)
static void C_ccall f_2683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1427)
static void C_fcall f_1427(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2993)
static void C_ccall f_2993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2996)
static void C_ccall f_2996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2999)
static void C_ccall f_2999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1421)
static void C_fcall f_1421(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3078)
static void C_ccall f_3078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2146)
static void C_ccall f_2146(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2573)
static void C_ccall f_2573(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2140)
static void C_ccall f_2140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2632)
static void C_ccall f_2632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2635)
static void C_ccall f_2635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2982)
static void C_ccall f_2982(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2629)
static void C_ccall f_2629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2626)
static void C_fcall f_2626(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2472)
static void C_ccall f_2472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2487)
static void C_ccall f_2487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3083)
static void C_ccall f_3083(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3083)
static void C_ccall f_3083r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2171)
static void C_ccall f_2171(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2620)
static void C_fcall f_2620(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2623)
static void C_ccall f_2623(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2421)
static void C_ccall f_2421(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2425)
static void C_ccall f_2425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3099)
static void C_ccall f_3099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2477)
static void C_fcall f_2477(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2518)
static void C_fcall f_2518(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2516)
static void C_fcall f_2516(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2384)
static void C_ccall f_2384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2380)
static void C_ccall f_2380(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2642)
static void C_fcall f_2642(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2644)
static void C_fcall f_2644(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2419)
static void C_ccall f_2419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2826)
static void C_ccall f_2826(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2375)
static void C_ccall f_2375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2371)
static void C_ccall f_2371(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2539)
static void C_ccall f_2539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1456)
static void C_fcall f_1456(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2840)
static void C_ccall f_2840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2858)
static void C_ccall f_2858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2326)
static void C_ccall f_2326(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2326)
static void C_ccall f_2326r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2466)
static void C_fcall f_2466(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2462)
static void C_ccall f_2462(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2462)
static void C_ccall f_2462r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2845)
static void C_fcall f_2845(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2469)
static void C_ccall f_2469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2915)
static void C_ccall f_2915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1591)
static void C_ccall f_1591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2459)
static void C_ccall f_2459(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3176)
static void C_ccall f_3176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2901)
static void C_ccall f_2901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1582)
static void C_ccall f_1582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3005)
static void C_fcall f_3005(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2350)
static void C_fcall f_2350(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1575)
static void C_fcall f_1575(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1865)
static void C_ccall f_1865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1861)
static void C_ccall f_1861(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3303)
static void C_ccall f_3303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1559)
static void C_fcall f_1559(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2979)
static void C_ccall f_2979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1779)
static void C_ccall f_1779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3316)
static void C_ccall f_3316(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2963)
static void C_ccall f_2963(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2966)
static void C_ccall f_2966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3320)
static void C_ccall f_3320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3323)
static void C_ccall f_3323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1874)
static void C_ccall f_1874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1879)
static void C_ccall f_1879(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1870)
static void C_ccall f_1870(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2014)
static void C_ccall f_2014(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1782)
static void C_ccall f_1782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3282)
static void C_ccall f_3282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3284)
static void C_ccall f_3284(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1896)
static void C_ccall f_1896(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1894)
static void C_ccall f_1894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1136)
static void C_ccall f_1136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1138)
static void C_fcall f_1138(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2808)
static void C_ccall f_2808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1890)
static void C_ccall f_1890(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3197)
static void C_ccall f_3197(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3190)
static void C_ccall f_3190(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3293)
static void C_ccall f_3293(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2836)
static void C_ccall f_2836(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(C_lolevel_toplevel)
C_externexport void C_ccall C_lolevel_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1794)
static void C_fcall f_1794(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1925)
static void C_ccall f_1925(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f3701)
static void C_ccall f3701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2026)
static void C_fcall f_2026(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2038)
static void C_ccall f_2038(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2038)
static void C_ccall f_2038r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2054)
static void C_ccall f_2054(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2054)
static void C_ccall f_2054r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2092)
static void C_ccall f_2092(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2095)
static void C_ccall f_2095(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2075)
static void C_ccall f_2075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2070)
static void C_ccall f_2070(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2080)
static void C_ccall f_2080(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2098)
static void C_ccall f_2098(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2077)
static void C_ccall f_2077(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1133)
static void C_ccall f_1133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1957)
static void C_ccall f_1957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2086)
static void C_ccall f_2086(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2089)
static void C_ccall f_2089(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2112)
static void C_ccall f_2112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3208)
static C_word C_fcall f_3208(C_word t0,C_word t1);
C_noret_decl(f_2116)
static void C_ccall f_2116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1946)
static void C_fcall f_1946(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2101)
static void C_ccall f_2101(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2107)
static void C_ccall f_2107(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2104)
static void C_ccall f_2104(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2132)
static void C_ccall f_2132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2136)
static void C_ccall f_2136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2120)
static void C_ccall f_2120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1185)
static void C_ccall f_1185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2124)
static void C_ccall f_2124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1188)
static void C_ccall f_1188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2128)
static void C_ccall f_2128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2217)
static void C_ccall f_2217(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2215)
static void C_ccall f_2215(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1842)
static void C_ccall f_1842(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1832)
static void C_ccall f_1832(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1165)
static void C_fcall f_1165(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2231)
static void C_ccall f_2231(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1749)
static void C_fcall f_1749(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1743)
static void C_ccall f_1743(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1850)
static void C_ccall f_1850(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1605)
static void C_ccall f_1605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1601)
static void C_ccall f_1601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2744)
static void C_ccall f_2744(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2744)
static void C_ccall f_2744r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1400)
static void C_ccall f_1400(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1400)
static void C_ccall f_1400r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2748)
static void C_fcall f_2748(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1624)
static void C_ccall f_1624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2611)
static void C_ccall f_2611(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1983)
static void C_ccall f_1983(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1983)
static void C_ccall f_1983r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2735)
static void C_ccall f_2735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2503)
static void C_fcall f_2503(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2500)
static void C_ccall f_2500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2601)
static void C_fcall f_2601(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2509)
static void C_ccall f_2509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2506)
static void C_ccall f_2506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2753)
static void C_fcall f_2753(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1449)
static void C_fcall f_1449(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_1433)
static void C_fcall f_1433(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2303)
static void C_ccall f_2303(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2431)
static void C_ccall f_2431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1202)
static void C_fcall f_1202(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1825)
static void C_ccall f_1825(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2436)
static C_word C_fcall f_2436(C_word t0,C_word t1);
C_noret_decl(f_1900)
static void C_ccall f_1900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1815)
static void C_ccall f_1815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3340)
static void C_ccall f_3340(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3343)
static void C_ccall f_3343(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3346)
static void C_ccall f_3346(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3349)
static void C_ccall f_3349(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2400)
static void C_ccall f_2400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3352)
static void C_ccall f_3352(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3355)
static void C_ccall f_3355(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3358)
static void C_ccall f_3358(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1903)
static void C_ccall f_1903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1905)
static void C_ccall f_1905(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1246)
static void C_fcall f_1246(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2335)
static void C_ccall f_2335(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2335)
static void C_ccall f_2335r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1962)
static void C_ccall f_1962(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3361)
static void C_ccall f_3361(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3237)
static C_word C_fcall f_3237(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_1977)
static void C_fcall f_1977(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2934)
static void C_fcall f_2934(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1966)
static void C_ccall f_1966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1969)
static void C_ccall f_1969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2922)
static void C_ccall f_2922(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2922)
static void C_ccall f_2922r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2929)
static void C_ccall f_2929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3251)
static void C_ccall f_3251(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1214)
static void C_fcall f_1214(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2950)
static void C_ccall f_2950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2726)
static void C_ccall f_2726(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3261)
static void C_ccall f_3261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3264)
static void C_ccall f_3264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3150)
static void C_ccall f_3150(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3150)
static void C_ccall f_3150r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2298)
static void C_ccall f_2298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3155)
static void C_ccall f_3155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2710)
static void C_ccall f_2710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2714)
static void C_ccall f_2714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2718)
static void C_ccall f_2718(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2294)
static void C_ccall f_2294(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2292)
static void C_ccall f_2292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3063)
static void C_ccall f_3063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3066)
static void C_ccall f_3066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3144)
static void C_ccall f_3144(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3111)
static void C_ccall f_3111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2782)
static void C_ccall f_2782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3116)
static C_word C_fcall f_3116(C_word t0,C_word t1);
C_noret_decl(f_2870)
static void C_ccall f_2870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2789)
static void C_ccall f_2789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2877)
static void C_fcall f_2877(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1646)
static void C_fcall f_1646(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2256)
static void C_ccall f_2256(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1490)
static void C_fcall f_1490(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3163)
static void C_fcall f_3163(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2248)
static void C_ccall f_2248(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2864)
static void C_fcall f_2864(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2867)
static void C_ccall f_2867(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2879)
static void C_fcall f_2879(C_word t0,C_word t1,C_word t2) C_noret;

C_noret_decl(trf_2798)
static void C_fcall trf_2798(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2798(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2798(t0,t1,t2);}

C_noret_decl(trf_2587)
static void C_fcall trf_2587(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2587(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2587(t0,t1);}

C_noret_decl(trf_1427)
static void C_fcall trf_1427(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1427(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1427(t0,t1,t2);}

C_noret_decl(trf_1421)
static void C_fcall trf_1421(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1421(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1421(t0,t1);}

C_noret_decl(trf_2626)
static void C_fcall trf_2626(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2626(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2626(t0,t1);}

C_noret_decl(trf_2620)
static void C_fcall trf_2620(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2620(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2620(t0,t1);}

C_noret_decl(trf_2477)
static void C_fcall trf_2477(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2477(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2477(t0,t1,t2);}

C_noret_decl(trf_2518)
static void C_fcall trf_2518(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2518(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2518(t0,t1,t2);}

C_noret_decl(trf_2516)
static void C_fcall trf_2516(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2516(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2516(t0,t1);}

C_noret_decl(trf_2642)
static void C_fcall trf_2642(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2642(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2642(t0,t1);}

C_noret_decl(trf_2644)
static void C_fcall trf_2644(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2644(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2644(t0,t1,t2);}

C_noret_decl(trf_1456)
static void C_fcall trf_1456(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1456(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1456(t0,t1);}

C_noret_decl(trf_2466)
static void C_fcall trf_2466(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2466(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2466(t0,t1);}

C_noret_decl(trf_2845)
static void C_fcall trf_2845(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2845(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2845(t0,t1,t2);}

C_noret_decl(trf_3005)
static void C_fcall trf_3005(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3005(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3005(t0,t1,t2);}

C_noret_decl(trf_2350)
static void C_fcall trf_2350(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2350(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2350(t0,t1);}

C_noret_decl(trf_1575)
static void C_fcall trf_1575(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1575(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1575(t0,t1);}

C_noret_decl(trf_1559)
static void C_fcall trf_1559(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1559(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1559(t0,t1);}

C_noret_decl(trf_1138)
static void C_fcall trf_1138(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1138(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1138(t0,t1,t2);}

C_noret_decl(trf_1794)
static void C_fcall trf_1794(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1794(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1794(t0,t1,t2);}

C_noret_decl(trf_2026)
static void C_fcall trf_2026(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2026(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2026(t0,t1);}

C_noret_decl(trf_1946)
static void C_fcall trf_1946(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1946(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1946(t0,t1);}

C_noret_decl(trf_1165)
static void C_fcall trf_1165(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1165(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1165(t0,t1,t2);}

C_noret_decl(trf_1749)
static void C_fcall trf_1749(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1749(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1749(t0,t1,t2);}

C_noret_decl(trf_2748)
static void C_fcall trf_2748(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2748(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2748(t0,t1);}

C_noret_decl(trf_2503)
static void C_fcall trf_2503(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2503(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2503(t0,t1);}

C_noret_decl(trf_2601)
static void C_fcall trf_2601(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2601(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2601(t0,t1,t2);}

C_noret_decl(trf_2753)
static void C_fcall trf_2753(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2753(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2753(t0,t1,t2);}

C_noret_decl(trf_1449)
static void C_fcall trf_1449(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1449(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_1449(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_1433)
static void C_fcall trf_1433(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1433(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1433(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1202)
static void C_fcall trf_1202(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1202(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1202(t0,t1,t2);}

C_noret_decl(trf_1246)
static void C_fcall trf_1246(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1246(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1246(t0,t1);}

C_noret_decl(trf_1977)
static void C_fcall trf_1977(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1977(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1977(t0,t1);}

C_noret_decl(trf_2934)
static void C_fcall trf_2934(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2934(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2934(t0,t1,t2);}

C_noret_decl(trf_1214)
static void C_fcall trf_1214(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1214(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1214(t0,t1);}

C_noret_decl(trf_2877)
static void C_fcall trf_2877(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2877(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2877(t0,t1);}

C_noret_decl(trf_1646)
static void C_fcall trf_1646(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1646(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1646(t0,t1);}

C_noret_decl(trf_1490)
static void C_fcall trf_1490(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1490(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1490(t0,t1,t2,t3);}

C_noret_decl(trf_3163)
static void C_fcall trf_3163(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3163(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3163(t0,t1,t2,t3);}

C_noret_decl(trf_2864)
static void C_fcall trf_2864(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2864(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2864(t0,t1);}

C_noret_decl(trf_2879)
static void C_fcall trf_2879(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2879(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2879(t0,t1,t2);}

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

/* ##sys#check-pointer in k1134 in k1131 */
static void C_ccall f_1259(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_1259r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1259r(t0,t1,t2,t3);}}

static void C_ccall f_1259r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t4=t2;
if(C_truep(C_i_safe_pointerp(t4))){
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR);
if(C_truep(C_i_pairp(t3))){
t6=t3;
t7=C_u_i_car(t6);
/* lolevel.scm:114: ##sys#error-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t1,t5,t7,lf[7],t2);}
else{
/* lolevel.scm:114: ##sys#error-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t1,t5,C_SCHEME_FALSE,lf[7],t2);}}}

/* k2591 in k2588 in k2585 in k2582 in object-evict-to-location in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2593,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2596,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2601,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word)li63),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_2601(t7,t3,((C_word*)t0)[5]);}

/* k2588 in k2585 in k2582 in object-evict-to-location in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2590,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2593,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:509: make-hash-table */
t4=*((C_word*)lf[93]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,*((C_word*)lf[94]+1));}

/* k2594 in k2591 in k2588 in k2585 in k2582 in object-evict-to-location in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2596(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm:538: values */
C_values(4,0,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k3024 in doloop746 in k2994 in k2991 in k2948 in copy in k2927 in object-unevict in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_3026(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3005(t4,((C_word*)t0)[5],t3);}

/* k1661 in k1644 in k1622 in k1557 in move in k1483 in k1480 in k1477 in k1474 in move-memory! in k1134 in k1131 */
static void C_ccall f_1663(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1663,2,t0,t1);}
t2=(C_truep(t1)?t1:C_i_stringp(((C_word*)t0)[2]));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1673,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=(C_truep(((C_word*)t0)[7])?((C_word*)t0)[7]:((C_word*)t0)[8]);
t5=C_block_size(((C_word*)t0)[2]);
/* lolevel.scm:179: checkn2 */
t6=((C_word*)((C_word*)t0)[9])[1];
f_1449(t6,t3,t4,((C_word*)t0)[8],t5,((C_word*)t0)[6],((C_word*)t0)[5]);}
else{
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];
t5=C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR);
/* lolevel.scm:128: ##sys#error-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t3,t5,lf[9],t4);}}

/* k2494 in k2485 in evict in k2470 in k2467 in k2464 in object-evict in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2496,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2500,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_bytes(C_fix(1));
t4=C_fixnum_plus(t1,t3);
/* lolevel.scm:492: allocator */
t5=((C_word*)t0)[7];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t2,t4);}

/* vector-like? in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2271(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2271,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
t3=C_specialp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_not(t3));}
else{
t4=C_byteblockp(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_not(t4));}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k1651 in k1644 in k1622 in k1557 in move in k1483 in k1480 in k1477 in k1474 in move-memory! in k1134 in k1131 */
static void C_ccall f_1653(C_word c,C_word t0,C_word t1){
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
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=(C_truep(t3)?C_i_foreign_pointer_argumentp(t3):C_SCHEME_FALSE);
t6=(C_truep(t4)?C_i_foreign_block_argumentp(t4):C_SCHEME_FALSE);
t7=C_i_foreign_fixnum_argumentp(t1);
t8=C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]);
t9=C_i_foreign_fixnum_argumentp(((C_word*)t0)[6]);
t10=t2;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,stub141(C_SCHEME_UNDEFINED,t5,t6,t7,t8,t9));}

/* doloop687 in release in k2746 in object-release in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_fcall f_2798(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2798,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2808,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(((C_word*)t0)[4],t2);
/* lolevel.scm:555: release */
t5=((C_word*)((C_word*)t0)[5])[1];
f_2753(t5,t3,t4);}}

/* a2197 in extended-procedure? in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2198(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2198,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_eqp(lf[62],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2258 in set-procedure-data! in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2260(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_eqp(t1,((C_word*)t0)[2]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* lolevel.scm:399: ##sys#signal-hook */
t3=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[3],lf[4],lf[69],lf[70],((C_word*)t0)[2]);}}

/* extended-procedure? in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2181(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2181,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
if(C_truep(C_closurep(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2215,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=t2;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2198,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:382: ##sys#lambda-decoration */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t3,t4,t5);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* object-become! in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_3040(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3040,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3044,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=t2;
t5=C_i_check_list_2(t4,lf[111]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1165,a[2]=t7,a[3]=t4,a[4]=((C_word)li75),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_1165(t9,t3,t4);}

/* k3042 in object-become! in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_3044(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm:607: ##sys#become! */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[112]+1)))(3,*((C_word*)lf[112]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}

/* mutate-procedure! in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_3049(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3049,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3053,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:610: ##sys#check-closure */
t5=*((C_word*)lf[65]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[114]);}

/* k3051 in mutate-procedure! in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_3053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3053,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3056,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:611: ##sys#check-closure */
t3=*((C_word*)lf[65]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[114]);}

/* k3054 in k3051 in mutate-procedure! in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_3056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3056,2,t0,t1);}
t2=C_block_size(((C_word*)t0)[2]);
t3=C_words(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3063,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:614: ##sys#make-vector */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(3,*((C_word*)lf[17]+1),t4,t3);}

/* k1671 in k1661 in k1644 in k1622 in k1557 in move in k1483 in k1480 in k1477 in k1474 in move-memory! in k1134 in k1131 */
static void C_ccall f_1673(C_word c,C_word t0,C_word t1){
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
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=(C_truep(t3)?C_i_foreign_block_argumentp(t3):C_SCHEME_FALSE);
t6=(C_truep(t4)?C_i_foreign_block_argumentp(t4):C_SCHEME_FALSE);
t7=C_i_foreign_fixnum_argumentp(t1);
t8=C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]);
t9=C_i_foreign_fixnum_argumentp(((C_word*)t0)[6]);
t10=t2;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,stub173(C_SCHEME_UNDEFINED,t5,t6,t7,t8,t9));}

/* k1483 in k1480 in k1477 in k1474 in move-memory! in k1134 in k1131 */
static void C_ccall f_1485(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1485,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1490,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word)li7),tmp=(C_word)a,a+=11,tmp));
t5=((C_word*)t3)[1];
f_1490(t5,((C_word*)t0)[9],((C_word*)t0)[10],((C_word*)t0)[11]);}

/* k2663 in doloop654 in k2640 in k2630 in k2627 in k2624 in k2621 in k2618 in k2609 in evict in k2591 in k2588 in k2585 in k2582 in object-evict-to-location in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in ... */
static void C_ccall f_2665(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_set_i_slot(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_2644(t4,((C_word*)t0)[5],t3);}

/* k1480 in k1477 in k1474 in move-memory! in k1134 in k1131 */
static void C_ccall f_1482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1482,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1485,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[3],C_fix(0)))){
/* lolevel.scm:157: ##sys#error */
t3=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[9],lf[14],((C_word*)t0)[3]);}
else{
t3=t2;
f_1485(2,t3,C_SCHEME_UNDEFINED);}}

/* k1477 in k1474 in move-memory! in k1134 in k1131 */
static void C_ccall f_1479(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1479,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1482,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[4],C_fix(0)))){
/* lolevel.scm:155: ##sys#error */
t3=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[9],lf[15],((C_word*)t0)[4]);}
else{
t3=t2;
f_1482(2,t3,C_SCHEME_UNDEFINED);}}

/* record-instance-slot-set! in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2393(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2393,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2397,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:454: ##sys#check-generic-structure */
f_1202(t5,t2,C_a_i_list(&a,1,lf[84]));}

/* k1474 in move-memory! in k1134 in k1131 */
static void C_ccall f_1476(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1476,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1479,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* lolevel.scm:153: ##sys#check-block */
f_1138(t2,((C_word*)t0)[11],C_a_i_list(&a,1,lf[9]));}

/* k2395 in record-instance-slot-set! in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2397,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2400,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_block_size(((C_word*)t0)[4]);
t4=C_fixnum_difference(t3,C_fix(1));
/* lolevel.scm:455: ##sys#check-range */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[85]+1)))(6,*((C_word*)lf[85]+1),t2,((C_word*)t0)[2],C_fix(0),t4,lf[84]);}

/* a2154 in k2148 in extend-procedure in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2155(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2155,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_eqp(lf[62],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2582 in object-evict-to-location in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2584(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2584,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2587,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t3=((C_word*)t0)[5];
t4=C_u_i_car(t3);
t5=C_i_check_exact_2(t4,lf[95]);
t6=t2;
f_2587(t6,t4);}
else{
t3=t2;
f_2587(t3,C_SCHEME_FALSE);}}

/* object-evict-to-location in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2580(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_2580r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2580r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2580r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2584,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:503: ##sys#check-special */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(4,*((C_word*)lf[27]+1),t5,t3,lf[95]);}

/* k2148 in extend-procedure in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2150(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2150,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2155,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2171,a[2]=((C_word*)t0)[2],a[3]=((C_word)li40),tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:376: ##sys#decorate-lambda */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[64]+1)))(5,*((C_word*)lf[64]+1),((C_word*)t0)[3],((C_word*)t0)[4],t2,t3);}

/* k2585 in k2582 in object-evict-to-location in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_fcall f_2587(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2587,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2590,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2735,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:508: ##sys#pointer->address */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(3,*((C_word*)lf[26]+1),t5,((C_word*)t0)[4]);}

/* k2681 in k2624 in k2621 in k2618 in k2609 in evict in k2591 in k2588 in k2585 in k2582 in object-evict-to-location in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in ... */
static void C_ccall f_2683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2683,2,t0,t1);}
t2=C_a_i_plus(&a,2,t1,((C_word*)t0)[2]);
/* lolevel.scm:531: ##sys#set-pointer-address! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[96]+1)))(4,*((C_word*)lf[96]+1),((C_word*)t0)[3],((C_word*)t0)[4],t2);}

/* sizerr in move-memory! in k1134 in k1131 */
static void C_fcall f_1427(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1427,NULL,3,t0,t1,t2);}
C_apply(8,0,t1,*((C_word*)lf[10]+1),lf[9],lf[12],((C_word*)t0)[2],((C_word*)t0)[3],t2);}

/* k2991 in k2948 in copy in k2927 in object-unevict in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2993,2,t0,t1);}
t2=C_copy_block(((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2996,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm:596: hash-table-set! */
t4=*((C_word*)lf[90]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[6],((C_word*)t0)[2],t2);}

/* k2994 in k2991 in k2948 in copy in k2927 in object-unevict in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2996,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2999,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_truep(C_specialp(((C_word*)t0)[4]))?C_fix(1):C_fix(0));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3005,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=((C_word*)t0)[6],a[6]=((C_word)li72),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_3005(t7,t2,t3);}

/* k2997 in k2994 in k2991 in k2948 in copy in k2927 in object-unevict in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* nosizerr in move-memory! in k1134 in k1131 */
static void C_fcall f_1421(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1421,NULL,2,t0,t1);}
/* lolevel.scm:137: ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,t1,lf[9],lf[11],((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3076 in k3061 in k3054 in k3051 in mutate-procedure! in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_3078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3078,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list1(&a,1,t2);
/* lolevel.scm:615: ##sys#become! */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[112]+1)))(3,*((C_word*)lf[112]+1),((C_word*)t0)[3],t3);}

/* extend-procedure in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2146(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2146,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2150,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:375: ##sys#check-closure */
t5=*((C_word*)lf[65]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[63]);}

/* f_2573 in object-evict in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2573(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2573,3,t0,t1,t2);}
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_fixnum_argumentp(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub601(t3,t4));}

/* k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2140(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2140,2,t0,t1);}
t2=C_mutate2((C_word*)lf[60]+1 /* (set! pointer-f64-ref ...) */,t1);
t3=C_a_i_vector1(&a,1,lf[61]);
t4=C_mutate2(&lf[62] /* (set! xproc-tag ...) */,t3);
t5=C_mutate2((C_word*)lf[63]+1 /* (set! extend-procedure ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2146,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[66]+1 /* (set! extended-procedure? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2181,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[68]+1 /* (set! procedure-data ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2217,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[69]+1 /* (set! set-procedure-data! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2256,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[71]+1 /* (set! vector-like? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2271,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[72]+1 /* (set! block-set! ...) */,*((C_word*)lf[73]+1));
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2292,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:411: getter-with-setter */
t12=*((C_word*)lf[125]+1);
((C_proc5)(void*)(*((C_word*)t12+1)))(5,t12,t11,*((C_word*)lf[128]+1),*((C_word*)lf[73]+1),lf[129]);}

/* k2630 in k2627 in k2624 in k2621 in k2618 in k2609 in evict in k2591 in k2588 in k2585 in k2582 in object-evict-to-location in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in ... */
static void C_ccall f_2632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2632,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2635,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[4]))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2642,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t4=C_specialp(((C_word*)t0)[4]);
if(C_truep(t4)){
t5=t3;
f_2642(t5,(C_truep(t4)?C_fix(1):C_fix(0)));}
else{
t5=C_i_symbolp(((C_word*)t0)[4]);
t6=t3;
f_2642(t6,(C_truep(t5)?C_fix(1):C_fix(0)));}}}

/* k2633 in k2630 in k2627 in k2624 in k2621 in k2618 in k2609 in evict in k2591 in k2588 in k2585 in k2582 in object-evict-to-location in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in ... */
static void C_ccall f_2635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k2980 in k2977 in k2948 in copy in k2927 in object-unevict in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2982(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k2627 in k2624 in k2621 in k2618 in k2609 in evict in k2591 in k2588 in k2585 in k2582 in object-evict-to-location in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in ... */
static void C_ccall f_2629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2629,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2632,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm:532: hash-table-set! */
t3=*((C_word*)lf[90]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[7],((C_word*)t0)[4],((C_word*)t0)[3]);}

/* k2624 in k2621 in k2618 in k2609 in evict in k2591 in k2588 in k2585 in k2582 in object-evict-to-location in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in ... */
static void C_fcall f_2626(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2626,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2629,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2683,a[2]=((C_word*)t0)[8],a[3]=t2,a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:531: ##sys#pointer->address */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(3,*((C_word*)lf[26]+1),t3,((C_word*)t0)[9]);}

/* k2470 in k2467 in k2464 in object-evict in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2472(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2472,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2477,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li59),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2477(t5,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k2485 in evict in k2470 in k2467 in k2464 in object-evict in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2487(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2487,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=C_block_size(((C_word*)t0)[3]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2496,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[3]))){
/* lolevel.scm:491: align-to-word */
t5=*((C_word*)lf[32]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}
else{
t5=t4;
f_2496(2,t5,C_bytes(t3));}}}

/* make-pointer-vector in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_3083(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_3083r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3083r(t0,t1,t2,t3);}}

static void C_ccall f_3083r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(6);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?((C_word*)t0)[2]:C_i_car(t3));
t6=t5;
t7=C_i_check_exact_2(t2,lf[116]);
t8=C_fudge(C_fix(7));
t9=C_fixnum_times(t2,t8);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3099,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:627: ##sys#make-blob */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[119]+1)))(3,*((C_word*)lf[119]+1),t10,t9);}

/* a2170 in k2148 in extend-procedure in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2171(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2171,4,t0,t1,t2,t3);}
t4=C_a_i_cons(&a,2,lf[62],((C_word*)t0)[2]);
t5=C_i_setslot(t2,t3,t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t2);}

/* k2618 in k2609 in evict in k2591 in k2588 in k2585 in k2582 in object-evict-to-location in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_fcall f_2620(C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2620,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2623,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)((C_word*)t0)[8])[1])){
t4=C_fixnum_difference(((C_word*)((C_word*)t0)[8])[1],t2);
t5=C_mutate2(((C_word *)((C_word*)t0)[8])+1,t4);
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[8])[1],C_fix(0)))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2710,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2714,a[2]=t6,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t8=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[8])[1]);
/* lolevel.scm:524: make-property-condition */
t9=*((C_word*)lf[99]+1);
((C_proc9)(void*)(*((C_word*)t9+1)))(9,t9,t7,lf[102],lf[103],lf[95],lf[104],lf[105],lf[106],t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t3;
f_2623(2,t7,t6);}}
else{
t4=t3;
f_2623(2,t4,C_SCHEME_UNDEFINED);}}

/* k2621 in k2618 in k2609 in evict in k2591 in k2588 in k2585 in k2582 in object-evict-to-location in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 in ... */
static void C_ccall f_2623(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2623,2,t0,t1);}
t2=C_evict_block(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2626,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[2]))){
t4=*((C_word*)lf[91]+1);
t5=t3;
f_2626(t5,C_i_set_i_slot(t2,C_fix(0),*((C_word*)lf[91]+1)));}
else{
t4=t3;
f_2626(t4,C_SCHEME_UNDEFINED);}}

/* record->vector in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2421(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2421,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2425,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:468: ##sys#check-generic-structure */
f_1202(t3,t2,C_a_i_list(&a,1,lf[87]));}

/* k2423 in record->vector in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2425,2,t0,t1);}
t2=C_block_size(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2431,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:470: ##sys#make-vector */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(3,*((C_word*)lf[17]+1),t4,t3);}

/* k3097 in make-pointer-vector in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_3099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3099,2,t0,t1);}
t2=t1;
t3=C_eqp(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(t3)){
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record3(&a,3,lf[117],((C_word*)t0)[5],t2));}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3111,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
/* lolevel.scm:630: ##sys#check-pointer */
t5=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],lf[116]);}
else{
t5=t4;
f_3111(2,t5,C_SCHEME_UNDEFINED);}}}

/* evict in k2470 in k2467 in k2464 in object-evict in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_fcall f_2477(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2477,NULL,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2487,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm:488: hash-table-ref/default */
t4=*((C_word*)lf[92]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[3],t2,C_SCHEME_FALSE);}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* doloop617 in k2514 in k2504 in k2501 in k2498 in k2494 in k2485 in evict in k2470 in k2467 in k2464 in object-evict in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in ... */
static void C_fcall f_2518(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2518,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2539,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[5],t2);
/* lolevel.scm:499: evict */
t5=((C_word*)((C_word*)t0)[6])[1];
f_2477(t5,t3,t4);}}

/* k2514 in k2504 in k2501 in k2498 in k2494 in k2485 in evict in k2470 in k2467 in k2464 in object-evict in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in ... */
static void C_fcall f_2516(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2516,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2518,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li58),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_2518(t5,((C_word*)t0)[6],t1);}

/* k2382 in record-instance-length in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_block_size(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fixnum_difference(t2,C_fix(1)));}

/* record-instance-length in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2380(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2380,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2384,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:450: ##sys#check-generic-structure */
f_1202(t3,t2,C_a_i_list(&a,1,lf[83]));}

/* k2640 in k2630 in k2627 in k2624 in k2621 in k2618 in k2609 in evict in k2591 in k2588 in k2585 in k2582 in object-evict-to-location in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in ... */
static void C_fcall f_2642(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2642,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2644,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li62),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_2644(t5,((C_word*)t0)[6],t1);}

/* doloop654 in k2640 in k2630 in k2627 in k2624 in k2621 in k2618 in k2609 in evict in k2591 in k2588 in k2585 in k2582 in object-evict-to-location in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in ... */
static void C_fcall f_2644(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2644,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2665,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[5],t2);
/* lolevel.scm:536: evict */
t5=((C_word*)((C_word*)t0)[6])[1];
f_2601(t5,t3,t4);}}

/* k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2419(C_word c,C_word t0,C_word t1){
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
C_word ab[56],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2419,2,t0,t1);}
t2=C_mutate2((C_word*)lf[86]+1 /* (set! record-instance-slot ...) */,t1);
t3=C_mutate2((C_word*)lf[87]+1 /* (set! record->vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2421,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[88]+1 /* (set! object-evicted? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2459,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[89]+1 /* (set! object-evict ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2462,a[2]=((C_word)li61),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[95]+1 /* (set! object-evict-to-location ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2580,a[2]=((C_word)li64),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[107]+1 /* (set! object-release ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2744,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[108]+1 /* (set! object-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2836,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[109]+1 /* (set! object-unevict ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2922,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[111]+1 /* (set! object-become! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3040,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[114]+1 /* (set! mutate-procedure! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3049,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp));
t12=C_a_i_list1(&a,1,lf[115]);
t13=t12;
t14=C_mutate2((C_word*)lf[116]+1 /* (set! make-pointer-vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3083,a[2]=t13,a[3]=((C_word)li79),tmp=(C_word)a,a+=4,tmp));
t15=C_mutate2((C_word*)lf[120]+1 /* (set! pointer-vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3144,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2((C_word*)lf[117]+1 /* (set! pointer-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3150,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate2((C_word*)lf[121]+1 /* (set! pointer-vector-fill! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3190,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate2(&lf[118] /* (set! pv-buf-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3237,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate2((C_word*)lf[122]+1 /* (set! pointer-vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3251,a[2]=((C_word)li86),tmp=(C_word)a,a+=3,tmp));
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3282,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3293,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:675: getter-with-setter */
t22=*((C_word*)lf[125]+1);
((C_proc5)(void*)(*((C_word*)t22+1)))(5,t22,t20,t21,*((C_word*)lf[122]+1),lf[126]);}

/* f_2826 in object-release in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2826(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2826,3,t0,t1,t2);}
if(C_truep(t2)){
t3=C_i_foreign_pointer_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub675(C_SCHEME_UNDEFINED,t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,stub675(C_SCHEME_UNDEFINED,C_SCHEME_FALSE));}}

/* k2373 in record-instance-type in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_slot(((C_word*)t0)[3],C_fix(0)));}

/* record-instance-type in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2371(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2371,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2375,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:446: ##sys#check-generic-structure */
f_1202(t3,t2,C_a_i_list(&a,1,lf[82]));}

/* k2537 in doloop617 in k2514 in k2504 in k2501 in k2498 in k2494 in k2485 in evict in k2470 in k2467 in k2464 in object-evict in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in ... */
static void C_ccall f_2539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_set_i_slot(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_2518(t4,((C_word*)t0)[5],t3);}

/* k1454 in checkn2 in move-memory! in k1134 in k1131 */
static void C_fcall f_1456(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1456,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* lolevel.scm:150: sizerr */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1427(t2,((C_word*)t0)[3],C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[6]));}}

/* k2838 in object-size in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2840,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2845,a[2]=t4,a[3]=t2,a[4]=((C_word)li70),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_2845(t6,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2856 in evict in k2838 in object-size in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2858(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2858,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
t2=C_block_size(((C_word*)t0)[3]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2864,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2915,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[3]))){
/* lolevel.scm:568: align-to-word */
t6=*((C_word*)lf[32]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}
else{
t6=C_bytes(t3);
t7=C_bytes(C_fix(1));
t8=t4;
f_2864(t8,C_fixnum_plus(t6,t7));}}}

/* make-record-instance in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2326(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_2326r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2326r(t0,t1,t2,t3);}}

static void C_ccall f_2326r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
t4=C_i_check_symbol_2(t2,lf[79]);
C_apply(5,0,t1,*((C_word*)lf[80]+1),t2,t3);}

/* k2464 in object-evict in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_fcall f_2466(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2466,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2469,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:484: make-hash-table */
t4=*((C_word*)lf[93]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,*((C_word*)lf[94]+1));}

/* object-evict in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2462(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_2462r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2462r(t0,t1,t2,t3);}}

static void C_ccall f_2462r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2466,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t5=t3;
t6=t4;
f_2466(t6,C_u_i_car(t5));}
else{
t5=t4;
f_2466(t5,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2573,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp));}}

/* evict in k2838 in object-size in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_fcall f_2845(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2845,NULL,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2858,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:564: hash-table-ref/default */
t4=*((C_word*)lf[92]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[3],t2,C_SCHEME_FALSE);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fix(0));}}

/* k2467 in k2464 in object-evict in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2469,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2472,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:485: ##sys#check-closure */
t4=*((C_word*)lf[65]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[2],lf[89]);}

/* k2913 in k2856 in evict in k2838 in object-size in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_bytes(C_fix(1));
t3=((C_word*)t0)[2];
f_2864(t3,C_fixnum_plus(t1,t2));}

/* k1589 in k1573 in k1557 in move in k1483 in k1480 in k1477 in k1474 in move-memory! in k1134 in k1131 */
static void C_ccall f_1591(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1591,2,t0,t1);}
t2=(C_truep(t1)?t1:C_i_stringp(((C_word*)t0)[2]));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1601,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1605,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[7],a[4]=t3,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[8])){
t5=C_block_size(((C_word*)t0)[2]);
/* lolevel.scm:171: checkn1 */
t6=((C_word*)((C_word*)t0)[7])[1];
f_1433(t6,t3,((C_word*)t0)[8],t5,((C_word*)t0)[5]);}
else{
/* lolevel.scm:171: nosizerr */
t5=((C_word*)((C_word*)t0)[9])[1];
f_1421(t5,t4);}}
else{
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];
t5=C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR);
/* lolevel.scm:128: ##sys#error-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t3,t5,lf[9],t4);}}

/* object-evicted? in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2459(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2459,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_permanentp(t2));}

/* k3174 in doloop798 in k3153 in pointer-vector in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_3176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=f_3237(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=((C_word*)t0)[5];
t4=C_u_i_cdr(t3);
t5=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[6])[1];
f_3163(t6,((C_word*)t0)[7],t4,t5);}

/* k2899 in doloop706 in k2875 in k2865 in k2862 in k2856 in evict in k2838 in object-size in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 in ... */
static void C_ccall f_2901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_fixnum_plus(t1,((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t5=((C_word*)((C_word*)t0)[4])[1];
f_2879(t5,((C_word*)t0)[5],t4);}

/* k1580 in k1573 in k1557 in move in k1483 in k1480 in k1477 in k1474 in move-memory! in k1134 in k1131 */
static void C_ccall f_1582(C_word c,C_word t0,C_word t1){
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
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=(C_truep(t3)?C_i_foreign_pointer_argumentp(t3):C_SCHEME_FALSE);
t6=(C_truep(t4)?C_i_foreign_pointer_argumentp(t4):C_SCHEME_FALSE);
t7=C_i_foreign_fixnum_argumentp(t1);
t8=C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]);
t9=C_i_foreign_fixnum_argumentp(((C_word*)t0)[6]);
t10=t2;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,stub125(C_SCHEME_UNDEFINED,t5,t6,t7,t8,t9));}

/* doloop746 in k2994 in k2991 in k2948 in copy in k2927 in object-unevict in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_fcall f_3005(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3005,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3026,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[3],t2);
/* lolevel.scm:599: copy */
t5=((C_word*)((C_word*)t0)[5])[1];
f_2934(t5,t3,t4);}}

/* k2348 in record-instance? in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_fcall f_2350(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_i_not(((C_word*)t0)[2]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=C_slot(((C_word*)t0)[4],C_fix(0));
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_eqp(((C_word*)t0)[2],t3));}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k1573 in k1557 in move in k1483 in k1480 in k1477 in k1474 in move-memory! in k1134 in k1131 */
static void C_fcall f_1575(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1575,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1582,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[7])){
t3=t2;
f_1582(2,t3,((C_word*)t0)[7]);}
else{
/* lolevel.scm:169: nosizerr */
t3=((C_word*)((C_word*)t0)[8])[1];
f_1421(t3,t2);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1591,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* lolevel.scm:170: ##sys#bytevector? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t2,((C_word*)t0)[3]);}}

/* k1863 in address->pointer in k1134 in k1131 */
static void C_ccall f_1865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm:215: ##sys#address->pointer */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[23]+1)))(3,*((C_word*)lf[23]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}

/* address->pointer in k1134 in k1131 */
static void C_ccall f_1861(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1861,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1865,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:214: ##sys#check-integer */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[24]+1)))(4,*((C_word*)lf[24]+1),t3,t2,lf[22]);}

/* k3301 in a3292 in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_3303(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3303,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=t3;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,stub821(t5,t2,t6));}

/* k1557 in move in k1483 in k1480 in k1477 in k1474 in move-memory! in k1134 in k1131 */
static void C_fcall f_1559(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1559,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1575,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=((C_word*)t0)[3];
t4=C_i_safe_pointerp(t3);
if(C_truep(t4)){
t5=t2;
f_1575(t5,t4);}
else{
t5=C_locativep(t3);
t6=t2;
f_1575(t6,t5);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1624,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* lolevel.scm:174: ##sys#bytevector? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t2,((C_word*)t0)[4]);}}

/* k2977 in k2948 in copy in k2927 in object-unevict in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2979,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2982,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:591: hash-table-set! */
t4=*((C_word*)lf[90]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[3],((C_word*)t0)[4],t2);}

/* k1777 in copy in object-copy in k1134 in k1131 */
static void C_ccall f_1779(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1779,2,t0,t1);}
t2=C_copy_block(((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1782,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_byteblockp(((C_word*)t0)[2]);
t5=(C_truep(t4)?t4:C_i_symbolp(((C_word*)t0)[2]));
if(C_truep(t5)){
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t2);}
else{
t6=(C_truep(C_specialp(((C_word*)t0)[2]))?C_fix(1):C_fix(0));
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1794,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t8,a[5]=((C_word*)t0)[5],a[6]=((C_word)li9),tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_1794(t10,t3,t6);}}

/* a3315 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_3316(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3316,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3320,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:461: ##sys#check-generic-structure */
f_1202(t4,t2,C_a_i_list(&a,1,lf[86]));}

/* k2961 in k2948 in copy in k2927 in object-unevict in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2963(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2963,2,t0,t1);}
t2=C_copy_block(((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2966,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:586: hash-table-set! */
t4=*((C_word*)lf[90]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[4],((C_word*)t0)[2],t2);}

/* k2964 in k2961 in k2948 in copy in k2927 in object-unevict in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k3318 in a3315 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_3320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3320,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3323,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_block_size(((C_word*)t0)[4]);
t4=C_fixnum_difference(t3,C_fix(1));
/* lolevel.scm:462: ##sys#check-range */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[85]+1)))(6,*((C_word*)lf[85]+1),t2,((C_word*)t0)[2],C_fix(0),t4,lf[86]);}

/* k3321 in k3318 in a3315 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_3323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(((C_word*)t0)[4],t2));}

/* k1872 in pointer->address in k1134 in k1131 */
static void C_ccall f_1874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm:219: ##sys#pointer->address */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(3,*((C_word*)lf[26]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}

/* object->pointer in k1134 in k1131 */
static void C_ccall f_1879(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1879,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
t3=t1;
t4=t2;
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=t3;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,stub350(t5,t4));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* pointer->address in k1134 in k1131 */
static void C_ccall f_1870(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1870,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1874,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:218: ##sys#check-special */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(4,*((C_word*)lf[27]+1),t3,t2,lf[25]);}

/* pointer-tag in k1134 in k1131 */
static void C_ccall f_2014(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2014,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2026,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=t2;
if(C_truep(C_blockp(t4))){
t5=C_specialp(t4);
t6=t3;
f_2026(t6,t5);}
else{
t5=t3;
f_2026(t5,C_SCHEME_FALSE);}}

/* k1780 in k1777 in copy in object-copy in k1134 in k1131 */
static void C_ccall f_1782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k3280 in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_3282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3282,2,t0,t1);}
t2=C_mutate2((C_word*)lf[123]+1 /* (set! pointer-vector-ref ...) */,t1);
t3=C_mutate2((C_word*)lf[124]+1 /* (set! pointer-vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3284,a[2]=((C_word)li87),tmp=(C_word)a,a+=3,tmp));
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* pointer-vector-length in k3280 in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_3284(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3284,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[117],lf[124]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* pointer=? in k1134 in k1131 */
static void C_ccall f_1896(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1896,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1900,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:230: ##sys#check-special */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(4,*((C_word*)lf[27]+1),t4,t2,lf[30]);}

/* k1892 in pointer->object in k1134 in k1131 */
static void C_ccall f_1894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_pointer_to_object(((C_word*)t0)[3]));}

/* k1134 in k1131 */
static void C_ccall f_1136(C_word c,C_word t0,C_word t1){
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
C_word ab[73],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1136,2,t0,t1);}
t2=C_mutate2(&lf[0] /* (set! ##sys#check-block ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1138,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate2(&lf[2] /* (set! ##sys#check-generic-structure ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1202,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[6]+1 /* (set! ##sys#check-pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1259,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=lf[8];
t6=C_mutate2((C_word*)lf[9]+1 /* (set! move-memory! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1400,a[2]=t5,a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp));
t7=C_mutate2((C_word*)lf[16]+1 /* (set! object-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1743,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[18]+1 /* (set! allocate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1825,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[19]+1 /* (set! free ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1832,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[20]+1 /* (set! pointer? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1842,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[21]+1 /* (set! pointer-like? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1850,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[22]+1 /* (set! address->pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1861,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2((C_word*)lf[25]+1 /* (set! pointer->address ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1870,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate2((C_word*)lf[28]+1 /* (set! object->pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1879,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate2((C_word*)lf[29]+1 /* (set! pointer->object ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1890,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2((C_word*)lf[30]+1 /* (set! pointer=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1896,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate2((C_word*)lf[31]+1 /* (set! pointer+ ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1905,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate2((C_word*)lf[32]+1 /* (set! align-to-word ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1925,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate2((C_word*)lf[34]+1 /* (set! tag-pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1962,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate2((C_word*)lf[36]+1 /* (set! tagged-pointer? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1983,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate2((C_word*)lf[37]+1 /* (set! pointer-tag ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2014,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate2((C_word*)lf[38]+1 /* (set! make-locative ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2038,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate2((C_word*)lf[40]+1 /* (set! make-weak-locative ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2054,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate2((C_word*)lf[41]+1 /* (set! locative-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2070,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t25=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2075,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)C_locative_ref,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:300: getter-with-setter */
t27=*((C_word*)lf[125]+1);
((C_proc5)(void*)(*((C_word*)t27+1)))(5,t27,t25,t26,*((C_word*)lf[41]+1),lf[138]);}

/* ##sys#check-block in k1134 in k1131 */
static void C_fcall f_1138(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1138,NULL,3,t1,t2,t3);}
if(C_truep(C_blockp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_BLOCK_ERROR);
if(C_truep(C_i_pairp(t3))){
t5=t3;
t6=C_u_i_car(t5);
/* lolevel.scm:79: ##sys#error-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t1,t4,t6,t2);}
else{
/* lolevel.scm:79: ##sys#error-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t1,t4,C_SCHEME_FALSE,t2);}}}

/* k2806 in doloop687 in release in k2746 in object-release in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2798(t3,((C_word*)t0)[4],t2);}

/* pointer->object in k1134 in k1131 */
static void C_ccall f_1890(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1890,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1894,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:226: ##sys#check-pointer */
t4=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[29]);}

/* k3195 in pointer-vector-fill! in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_3197(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3197,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=t2;
t4=C_slot(((C_word*)t0)[2],C_fix(1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3208,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word)li83),tmp=(C_word)a,a+=6,tmp);
t7=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,f_3208(t6,C_fix(0)));}

/* pointer-vector-fill! in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_3190(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3190,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[117],lf[121]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3197,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
/* lolevel.scm:652: ##sys#check-pointer */
t6=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t3,lf[121]);}
else{
t6=t5;
f_3197(2,t6,C_SCHEME_UNDEFINED);}}

/* a3292 in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_3293(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_3293,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[117],lf[123]);
t5=C_i_check_exact_2(t3,lf[123]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3303,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=C_slot(t2,C_fix(1));
/* lolevel.scm:679: ##sys#check-range */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[85]+1)))(5,*((C_word*)lf[85]+1),t6,t3,C_fix(0),t7);}

/* object-size in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2836(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2836,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2840,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:561: make-hash-table */
t4=*((C_word*)lf[93]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,*((C_word*)lf[94]+1));}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_lolevel_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_lolevel_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("lolevel_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1237)){
C_save(t1);
C_rereclaim2(1237*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,141);
lf[1]=C_h_intern(&lf[1],14,"\003syserror-hook");
lf[3]=C_h_intern(&lf[3],15,"\003syssignal-hook");
lf[4]=C_h_intern(&lf[4],11,"\000type-error");
lf[5]=C_decode_literal(C_heaptop,"\376B\000\000#bad argument type - not a structure");
lf[6]=C_h_intern(&lf[6],17,"\003syscheck-pointer");
lf[7]=C_decode_literal(C_heaptop,"\376B\000\000!bad argument type - not a pointer");
lf[8]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\004mmap\376\003\000\000\002\376\001\000\000\010u8vector\376\003\000\000\002\376\001\000\000\011u16vector\376\003\000\000\002\376\001\000\000\011u32vector\376\003\000\000\002\376\001\000\000\010"
"s8vector\376\003\000\000\002\376\001\000\000\011s16vector\376\003\000\000\002\376\001\000\000\011s32vector\376\003\000\000\002\376\001\000\000\011f32vector\376\003\000\000\002\376\001\000\000\011f64ve"
"ctor\376\377\016");
lf[9]=C_h_intern(&lf[9],12,"move-memory!");
lf[10]=C_h_intern(&lf[10],9,"\003syserror");
lf[11]=C_decode_literal(C_heaptop,"\376B\000\000\034need number of bytes to move");
lf[12]=C_decode_literal(C_heaptop,"\376B\000\000!number of bytes to move too large");
lf[13]=C_h_intern(&lf[13],15,"\003sysbytevector\077");
lf[14]=C_decode_literal(C_heaptop,"\376B\000\000\033negative destination offset");
lf[15]=C_decode_literal(C_heaptop,"\376B\000\000\026negative source offset");
lf[16]=C_h_intern(&lf[16],11,"object-copy");
lf[17]=C_h_intern(&lf[17],15,"\003sysmake-vector");
lf[18]=C_h_intern(&lf[18],8,"allocate");
lf[19]=C_h_intern(&lf[19],4,"free");
lf[20]=C_h_intern(&lf[20],8,"pointer\077");
lf[21]=C_h_intern(&lf[21],13,"pointer-like\077");
lf[22]=C_h_intern(&lf[22],16,"address->pointer");
lf[23]=C_h_intern(&lf[23],20,"\003sysaddress->pointer");
lf[24]=C_h_intern(&lf[24],17,"\003syscheck-integer");
lf[25]=C_h_intern(&lf[25],16,"pointer->address");
lf[26]=C_h_intern(&lf[26],20,"\003syspointer->address");
lf[27]=C_h_intern(&lf[27],17,"\003syscheck-special");
lf[28]=C_h_intern(&lf[28],15,"object->pointer");
lf[29]=C_h_intern(&lf[29],15,"pointer->object");
lf[30]=C_h_intern(&lf[30],9,"pointer=\077");
lf[31]=C_h_intern(&lf[31],8,"pointer+");
lf[32]=C_h_intern(&lf[32],13,"align-to-word");
lf[33]=C_decode_literal(C_heaptop,"\376B\000\000,bad argument type - not a pointer or integer");
lf[34]=C_h_intern(&lf[34],11,"tag-pointer");
lf[35]=C_h_intern(&lf[35],23,"\003sysmake-tagged-pointer");
lf[36]=C_h_intern(&lf[36],15,"tagged-pointer\077");
lf[37]=C_h_intern(&lf[37],11,"pointer-tag");
lf[38]=C_h_intern(&lf[38],13,"make-locative");
lf[39]=C_h_intern(&lf[39],17,"\003sysmake-locative");
lf[40]=C_h_intern(&lf[40],18,"make-weak-locative");
lf[41]=C_h_intern(&lf[41],13,"locative-set!");
lf[42]=C_h_intern(&lf[42],12,"locative-ref");
lf[43]=C_h_intern(&lf[43],16,"locative->object");
lf[44]=C_h_intern(&lf[44],9,"locative\077");
lf[45]=C_h_intern(&lf[45],15,"pointer-u8-set!");
lf[46]=C_h_intern(&lf[46],15,"pointer-s8-set!");
lf[47]=C_h_intern(&lf[47],16,"pointer-u16-set!");
lf[48]=C_h_intern(&lf[48],16,"pointer-s16-set!");
lf[49]=C_h_intern(&lf[49],16,"pointer-u32-set!");
lf[50]=C_h_intern(&lf[50],16,"pointer-s32-set!");
lf[51]=C_h_intern(&lf[51],16,"pointer-f32-set!");
lf[52]=C_h_intern(&lf[52],16,"pointer-f64-set!");
lf[53]=C_h_intern(&lf[53],14,"pointer-u8-ref");
lf[54]=C_h_intern(&lf[54],14,"pointer-s8-ref");
lf[55]=C_h_intern(&lf[55],15,"pointer-u16-ref");
lf[56]=C_h_intern(&lf[56],15,"pointer-s16-ref");
lf[57]=C_h_intern(&lf[57],15,"pointer-u32-ref");
lf[58]=C_h_intern(&lf[58],15,"pointer-s32-ref");
lf[59]=C_h_intern(&lf[59],15,"pointer-f32-ref");
lf[60]=C_h_intern(&lf[60],15,"pointer-f64-ref");
lf[61]=C_h_intern(&lf[61],8,"extended");
lf[63]=C_h_intern(&lf[63],16,"extend-procedure");
lf[64]=C_h_intern(&lf[64],19,"\003sysdecorate-lambda");
lf[65]=C_h_intern(&lf[65],17,"\003syscheck-closure");
lf[66]=C_h_intern(&lf[66],19,"extended-procedure\077");
lf[67]=C_h_intern(&lf[67],21,"\003syslambda-decoration");
lf[68]=C_h_intern(&lf[68],14,"procedure-data");
lf[69]=C_h_intern(&lf[69],19,"set-procedure-data!");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000-bad argument type - not an extended procedure");
lf[71]=C_h_intern(&lf[71],12,"vector-like\077");
lf[72]=C_h_intern(&lf[72],10,"block-set!");
lf[73]=C_h_intern(&lf[73],14,"\003sysblock-set!");
lf[74]=C_h_intern(&lf[74],9,"block-ref");
lf[75]=C_h_intern(&lf[75],15,"number-of-slots");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000,bad argument type - not a vector-like object");
lf[77]=C_h_intern(&lf[77],15,"number-of-bytes");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\0002cannot compute number of bytes of immediate object");
lf[79]=C_h_intern(&lf[79],20,"make-record-instance");
lf[80]=C_h_intern(&lf[80],18,"\003sysmake-structure");
lf[81]=C_h_intern(&lf[81],16,"record-instance\077");
lf[82]=C_h_intern(&lf[82],20,"record-instance-type");
lf[83]=C_h_intern(&lf[83],22,"record-instance-length");
lf[84]=C_h_intern(&lf[84],25,"record-instance-slot-set!");
lf[85]=C_h_intern(&lf[85],15,"\003syscheck-range");
lf[86]=C_h_intern(&lf[86],20,"record-instance-slot");
lf[87]=C_h_intern(&lf[87],14,"record->vector");
lf[88]=C_h_intern(&lf[88],15,"object-evicted\077");
lf[89]=C_h_intern(&lf[89],12,"object-evict");
lf[90]=C_h_intern(&lf[90],15,"hash-table-set!");
lf[91]=C_h_intern(&lf[91],19,"\003sysundefined-value");
lf[92]=C_h_intern(&lf[92],22,"hash-table-ref/default");
lf[93]=C_h_intern(&lf[93],15,"make-hash-table");
lf[94]=C_h_intern(&lf[94],3,"eq\077");
lf[95]=C_h_intern(&lf[95],24,"object-evict-to-location");
lf[96]=C_h_intern(&lf[96],24,"\003sysset-pointer-address!");
lf[97]=C_h_intern(&lf[97],6,"signal");
lf[98]=C_h_intern(&lf[98],24,"make-composite-condition");
lf[99]=C_h_intern(&lf[99],23,"make-property-condition");
lf[100]=C_h_intern(&lf[100],5,"evict");
lf[101]=C_h_intern(&lf[101],5,"limit");
lf[102]=C_h_intern(&lf[102],3,"exn");
lf[103]=C_h_intern(&lf[103],8,"location");
lf[104]=C_h_intern(&lf[104],7,"message");
lf[105]=C_decode_literal(C_heaptop,"\376B\000\000$cannot evict object - limit exceeded");
lf[106]=C_h_intern(&lf[106],9,"arguments");
lf[107]=C_h_intern(&lf[107],14,"object-release");
lf[108]=C_h_intern(&lf[108],11,"object-size");
lf[109]=C_h_intern(&lf[109],14,"object-unevict");
lf[110]=C_h_intern(&lf[110],15,"\003sysmake-string");
lf[111]=C_h_intern(&lf[111],14,"object-become!");
lf[112]=C_h_intern(&lf[112],11,"\003sysbecome!");
lf[113]=C_decode_literal(C_heaptop,"\376B\000\000:bad argument type - not an a-list of non-immediate objects");
lf[114]=C_h_intern(&lf[114],17,"mutate-procedure!");
lf[115]=C_h_intern(&lf[115],5,"unset");
lf[116]=C_h_intern(&lf[116],19,"make-pointer-vector");
lf[117]=C_h_intern(&lf[117],14,"pointer-vector");
lf[119]=C_h_intern(&lf[119],13,"\003sysmake-blob");
lf[120]=C_h_intern(&lf[120],15,"pointer-vector\077");
lf[121]=C_h_intern(&lf[121],20,"pointer-vector-fill!");
lf[122]=C_h_intern(&lf[122],19,"pointer-vector-set!");
lf[123]=C_h_intern(&lf[123],18,"pointer-vector-ref");
lf[124]=C_h_intern(&lf[124],21,"pointer-vector-length");
lf[125]=C_h_intern(&lf[125],18,"getter-with-setter");
lf[126]=C_decode_literal(C_heaptop,"\376B\000\000\031(pointer-vector-ref pv i)");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\032(record-instance-slot x i)");
lf[128]=C_h_intern(&lf[128],13,"\003sysblock-ref");
lf[129]=C_decode_literal(C_heaptop,"\376B\000\000\017(block-ref x i)");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000\023(pointer-f64-ref p)");
lf[131]=C_decode_literal(C_heaptop,"\376B\000\000\023(pointer-f32-ref p)");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000\023(pointer-s32-ref p)");
lf[133]=C_decode_literal(C_heaptop,"\376B\000\000\023(pointer-u32-ref p)");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\000\023(pointer-s16-ref p)");
lf[135]=C_decode_literal(C_heaptop,"\376B\000\000\023(pointer-u16-ref p)");
lf[136]=C_decode_literal(C_heaptop,"\376B\000\000\022(pointer-s8-ref p)");
lf[137]=C_decode_literal(C_heaptop,"\376B\000\000\022(pointer-u8-ref p)");
lf[138]=C_decode_literal(C_heaptop,"\376B\000\000\022(locative-ref loc)");
lf[139]=C_h_intern(&lf[139],17,"register-feature!");
lf[140]=C_h_intern(&lf[140],7,"lolevel");
C_register_lf2(lf,141,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1133,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_srfi_2d69_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* doloop307 in k1777 in copy in object-copy in k1134 in k1131 */
static void C_fcall f_1794(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1794,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1815,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[3],t2);
/* lolevel.scm:200: copy */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1749(t5,t3,t4);}}

/* align-to-word in k1134 in k1131 */
static void C_ccall f_1925(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1925,3,t0,t1,t2);}
if(C_truep(C_i_integerp(t2))){
t3=t1;
t4=t2;
t5=C_a_i_bytevector(&a,1,C_fix(4));
t6=C_i_foreign_integer_argumentp(t4);
t7=t3;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,stub375(t5,t6));}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1946,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=t2;
if(C_truep(C_blockp(t4))){
t5=C_specialp(t4);
t6=t3;
f_1946(t6,t5);}
else{
t5=t3;
f_1946(t5,C_SCHEME_FALSE);}}}

/* f3701 in release in k2746 in object-release in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f3701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm:556: free */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],t1);}

/* k2024 in pointer-tag in k1134 in k1131 */
static void C_fcall f_2026(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(C_taggedpointerp(((C_word*)t0)[3]))?C_slot(((C_word*)t0)[3],C_fix(1)):C_SCHEME_FALSE));}
else{
t2=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR);
/* lolevel.scm:269: ##sys#error-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),((C_word*)t0)[2],t2,lf[37],((C_word*)t0)[3]);}}

/* make-locative in k1134 in k1131 */
static void C_ccall f_2038(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_2038r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2038r(t0,t1,t2,t3);}}

static void C_ccall f_2038r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
if(C_truep(C_i_nullp(t3))){
/* lolevel.scm:292: ##sys#make-locative */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[39]+1)))(6,*((C_word*)lf[39]+1),t1,t2,C_fix(0),C_SCHEME_FALSE,lf[38]);}
else{
t4=C_i_car(t3);
/* lolevel.scm:292: ##sys#make-locative */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[39]+1)))(6,*((C_word*)lf[39]+1),t1,t2,t4,C_SCHEME_FALSE,lf[38]);}}

/* make-weak-locative in k1134 in k1131 */
static void C_ccall f_2054(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_2054r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2054r(t0,t1,t2,t3);}}

static void C_ccall f_2054r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
if(C_truep(C_i_nullp(t3))){
/* lolevel.scm:295: ##sys#make-locative */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[39]+1)))(6,*((C_word*)lf[39]+1),t1,t2,C_fix(0),C_SCHEME_TRUE,lf[40]);}
else{
t4=C_i_car(t3);
/* lolevel.scm:295: ##sys#make-locative */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[39]+1)))(6,*((C_word*)lf[39]+1),t1,t2,t4,C_SCHEME_TRUE,lf[40]);}}

/* pointer-u16-set! in k2073 in k1134 in k1131 */
static void C_ccall f_2092(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2092,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_pointer_u16_set(t2,t3));}

/* pointer-s16-set! in k2073 in k1134 in k1131 */
static void C_ccall f_2095(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2095,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_pointer_s16_set(t2,t3));}

/* k2073 in k1134 in k1131 */
static void C_ccall f_2075(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2075,2,t0,t1);}
t2=C_mutate2((C_word*)lf[42]+1 /* (set! locative-ref ...) */,t1);
t3=C_mutate2((C_word*)lf[43]+1 /* (set! locative->object ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2077,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[44]+1 /* (set! locative? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2080,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[45]+1 /* (set! pointer-u8-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2086,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[46]+1 /* (set! pointer-s8-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2089,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[47]+1 /* (set! pointer-u16-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2092,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[48]+1 /* (set! pointer-s16-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2095,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[49]+1 /* (set! pointer-u32-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2098,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[50]+1 /* (set! pointer-s32-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2101,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[51]+1 /* (set! pointer-f32-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2104,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[52]+1 /* (set! pointer-f64-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2107,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2112,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3361,a[2]=((C_word)li97),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:321: getter-with-setter */
t15=*((C_word*)lf[125]+1);
((C_proc5)(void*)(*((C_word*)t15+1)))(5,t15,t13,t14,*((C_word*)lf[45]+1),lf[137]);}

/* locative-set! in k1134 in k1131 */
static void C_ccall f_2070(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2070,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_locative_set(t2,t3));}

/* locative? in k2073 in k1134 in k1131 */
static void C_ccall f_2080(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2080,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
t3=C_locativep(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* pointer-u32-set! in k2073 in k1134 in k1131 */
static void C_ccall f_2098(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2098,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_pointer_u32_set(t2,t3));}

/* locative->object in k2073 in k1134 in k1131 */
static void C_ccall f_2077(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2077,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_locative_to_object(t2));}

/* k1131 */
static void C_ccall f_1133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1133,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1136,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:49: register-feature! */
t3=*((C_word*)lf[139]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[140]);}

/* k1955 in k1944 in align-to-word in k1134 in k1131 */
static void C_ccall f_1957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1957,2,t0,t1);}
t2=C_a_i_bytevector(&a,1,C_fix(4));
t3=C_i_foreign_integer_argumentp(t1);
t4=stub375(t2,t3);
/* lolevel.scm:244: ##sys#address->pointer */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[23]+1)))(3,*((C_word*)lf[23]+1),((C_word*)t0)[2],t4);}

/* pointer-u8-set! in k2073 in k1134 in k1131 */
static void C_ccall f_2086(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2086,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_pointer_u8_set(t2,t3));}

/* pointer-s8-set! in k2073 in k1134 in k1131 */
static void C_ccall f_2089(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2089,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_pointer_s8_set(t2,t3));}

/* k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2112(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2112,2,t0,t1);}
t2=C_mutate2((C_word*)lf[53]+1 /* (set! pointer-u8-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2116,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3358,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:327: getter-with-setter */
t5=*((C_word*)lf[125]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,*((C_word*)lf[46]+1),lf[136]);}

/* doloop811 in k3195 in pointer-vector-fill! in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static C_word C_fcall f_3208(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
t2=C_SCHEME_UNDEFINED;
return(t2);}
else{
t2=f_3237(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t3=C_fixnum_plus(t1,C_fix(1));
t6=t3;
t1=t6;
goto loop;}}

/* k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2116(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2116,2,t0,t1);}
t2=C_mutate2((C_word*)lf[54]+1 /* (set! pointer-s8-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2120,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3355,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:333: getter-with-setter */
t5=*((C_word*)lf[125]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,*((C_word*)lf[47]+1),lf[135]);}

/* k1944 in align-to-word in k1134 in k1131 */
static void C_fcall f_1946(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1946,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1957,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:244: ##sys#pointer->address */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(3,*((C_word*)lf[26]+1),t2,((C_word*)t0)[3]);}
else{
/* lolevel.scm:246: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[4],lf[32],lf[33],((C_word*)t0)[3]);}}

/* pointer-s32-set! in k2073 in k1134 in k1131 */
static void C_ccall f_2101(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2101,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_pointer_s32_set(t2,t3));}

/* pointer-f64-set! in k2073 in k1134 in k1131 */
static void C_ccall f_2107(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2107,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_pointer_f64_set(t2,t3));}

/* pointer-f32-set! in k2073 in k1134 in k1131 */
static void C_ccall f_2104(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2104,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_pointer_f32_set(t2,t3));}

/* k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2132,2,t0,t1);}
t2=C_mutate2((C_word*)lf[58]+1 /* (set! pointer-s32-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2136,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3343,a[2]=((C_word)li91),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:357: getter-with-setter */
t5=*((C_word*)lf[125]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,*((C_word*)lf[51]+1),lf[131]);}

/* k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2136,2,t0,t1);}
t2=C_mutate2((C_word*)lf[59]+1 /* (set! pointer-f32-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2140,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3340,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:363: getter-with-setter */
t5=*((C_word*)lf[125]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,*((C_word*)lf[52]+1),lf[130]);}

/* k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2120,2,t0,t1);}
t2=C_mutate2((C_word*)lf[55]+1 /* (set! pointer-u16-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2124,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3352,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:339: getter-with-setter */
t5=*((C_word*)lf[125]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,*((C_word*)lf[48]+1),lf[134]);}

/* k1183 in loop in object-become! in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_1185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1185,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1188,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_u_i_cdr(((C_word*)t0)[5]);
/* lolevel.scm:91: ##sys#check-block */
f_1138(t2,t3,C_a_i_list(&a,1,lf[111]));}

/* k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2124,2,t0,t1);}
t2=C_mutate2((C_word*)lf[56]+1 /* (set! pointer-s16-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2128,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3349,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:345: getter-with-setter */
t5=*((C_word*)lf[125]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,*((C_word*)lf[49]+1),lf[133]);}

/* k1186 in k1183 in loop in object-become! in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_1188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* lolevel.scm:92: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1165(t4,((C_word*)t0)[4],t3);}

/* k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2128(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2128,2,t0,t1);}
t2=C_mutate2((C_word*)lf[57]+1 /* (set! pointer-u32-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2132,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3346,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:351: getter-with-setter */
t5=*((C_word*)lf[125]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,*((C_word*)lf[50]+1),lf[132]);}

/* procedure-data in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2217(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2217,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
if(C_truep(C_closurep(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2248,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=t2;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2231,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:382: ##sys#lambda-decoration */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t3,t4,t5);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2213 in extended-procedure? in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2215(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?C_SCHEME_TRUE:C_SCHEME_FALSE));}

/* pointer? in k1134 in k1131 */
static void C_ccall f_1842(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1842,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_safe_pointerp(t2));}

/* free in k1134 in k1131 */
static void C_ccall f_1832(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1832,3,t0,t1,t2);}
if(C_truep(t2)){
t3=C_i_foreign_pointer_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub322(C_SCHEME_UNDEFINED,t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,stub322(C_SCHEME_UNDEFINED,C_SCHEME_FALSE));}}

/* loop in object-become! in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_fcall f_1165(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_save_and_reclaim((void*)trf_1165,NULL,3,t0,t1,t2);}
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_car(t4);
t6=C_i_check_pair_2(t5,lf[111]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1185,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t8=C_u_i_car(t5);
/* lolevel.scm:90: ##sys#check-block */
f_1138(t7,t8,C_a_i_list(&a,1,lf[111]));}
else{
/* lolevel.scm:94: ##sys#signal-hook */
t4=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t1,lf[4],lf[111],lf[113],((C_word*)t0)[3]);}}}

/* a2230 in procedure-data in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2231(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2231,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_eqp(lf[62],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* copy in object-copy in k1134 in k1131 */
static void C_fcall f_1749(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1749,NULL,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
if(C_truep(C_i_symbolp(t2))){
t3=C_slot(t2,C_fix(1));
/* lolevel.scm:192: ##sys#intern-symbol */
C_string_to_symbol(3,0,t1,t3);}
else{
t3=C_block_size(t2);
t4=t3;
t5=(C_truep(C_byteblockp(t2))?C_words(t4):t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1779,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:196: ##sys#make-vector */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(3,*((C_word*)lf[17]+1),t6,t5);}}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* object-copy in k1134 in k1131 */
static void C_ccall f_1743(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1743,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1749,a[2]=t4,a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1749(t6,t1,t2);}

/* pointer-like? in k1134 in k1131 */
static void C_ccall f_1850(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1850,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
t3=C_specialp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k1603 in k1589 in k1573 in k1557 in move in k1483 in k1480 in k1477 in k1474 in move-memory! in k1134 in k1131 */
static void C_ccall f_1605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_block_size(((C_word*)t0)[2]);
/* lolevel.scm:171: checkn1 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1433(t3,((C_word*)t0)[4],t1,t2,((C_word*)t0)[5]);}

/* k1599 in k1589 in k1573 in k1557 in move in k1483 in k1480 in k1477 in k1474 in move-memory! in k1134 in k1131 */
static void C_ccall f_1601(C_word c,C_word t0,C_word t1){
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
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=(C_truep(t3)?C_i_foreign_block_argumentp(t3):C_SCHEME_FALSE);
t6=(C_truep(t4)?C_i_foreign_pointer_argumentp(t4):C_SCHEME_FALSE);
t7=C_i_foreign_fixnum_argumentp(t1);
t8=C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]);
t9=C_i_foreign_fixnum_argumentp(((C_word*)t0)[6]);
t10=t2;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,stub157(C_SCHEME_UNDEFINED,t5,t6,t7,t8,t9));}

/* object-release in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2744(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_2744r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2744r(t0,t1,t2,t3);}}

static void C_ccall f_2744r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2748,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t5=t3;
t6=t4;
f_2748(t6,C_u_i_car(t5));}
else{
t5=t4;
f_2748(t5,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2826,a[2]=((C_word)li67),tmp=(C_word)a,a+=3,tmp));}}

/* move-memory! in k1134 in k1131 */
static void C_ccall f_1400(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+41)){
C_save_and_reclaim((void*)tr4r,(void*)f_1400r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1400r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1400r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(41);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_fix(0):C_i_car(t9));
t12=t11;
t13=C_i_nullp(t9);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t15=C_i_nullp(t14);
t16=(C_truep(t15)?C_fix(0):C_i_car(t14));
t17=t16;
t18=C_i_nullp(t14);
t19=(C_truep(t18)?C_SCHEME_END_OF_LIST:C_i_cdr(t14));
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_SCHEME_UNDEFINED;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=C_SCHEME_UNDEFINED;
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=C_SCHEME_UNDEFINED;
t27=(*a=C_VECTOR_TYPE|1,a[1]=t26,tmp=(C_word)a,a+=2,tmp);
t28=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1421,a[2]=t2,a[3]=t3,a[4]=((C_word)li3),tmp=(C_word)a,a+=5,tmp));
t29=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1427,a[2]=t2,a[3]=t3,a[4]=((C_word)li4),tmp=(C_word)a,a+=5,tmp));
t30=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1433,a[2]=t23,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp));
t31=C_set_block_item(t27,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1449,a[2]=t23,a[3]=((C_word)li6),tmp=(C_word)a,a+=4,tmp));
t32=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1476,a[2]=((C_word*)t0)[2],a[3]=t17,a[4]=t12,a[5]=t7,a[6]=t21,a[7]=t25,a[8]=t27,a[9]=t1,a[10]=t2,a[11]=t3,tmp=(C_word)a,a+=12,tmp);
/* lolevel.scm:152: ##sys#check-block */
f_1138(t32,t2,C_a_i_list(&a,1,lf[9]));}

/* k2746 in object-release in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_fcall f_2748(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_2748,NULL,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2753,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li66),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_2753(t8,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k1622 in k1557 in move in k1483 in k1480 in k1477 in k1474 in move-memory! in k1134 in k1131 */
static void C_ccall f_1624(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1624,2,t0,t1);}
t2=(C_truep(t1)?t1:C_i_stringp(((C_word*)t0)[2]));
if(C_truep(t2)){
t3=C_block_size(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1646,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t4,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t6=((C_word*)t0)[4];
t7=C_i_safe_pointerp(t6);
if(C_truep(t7)){
t8=t5;
f_1646(t8,t7);}
else{
t8=C_locativep(t6);
t9=t5;
f_1646(t9,t8);}}
else{
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];
t5=C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR);
/* lolevel.scm:128: ##sys#error-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t3,t5,lf[9],t4);}}

/* k2609 in evict in k2591 in k2588 in k2585 in k2582 in object-evict-to-location in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2611(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2611,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=C_block_size(((C_word*)t0)[3]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2620,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2726,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[3]))){
/* lolevel.scm:517: align-to-word */
t6=*((C_word*)lf[32]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}
else{
t6=C_bytes(t3);
t7=C_bytes(C_fix(1));
t8=t4;
f_2620(t8,C_fixnum_plus(t6,t7));}}}

/* tagged-pointer? in k1134 in k1131 */
static void C_ccall f_1983(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_1983r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1983r(t0,t1,t2,t3);}}

static void C_ccall f_1983r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
if(C_truep(C_blockp(t2))){
if(C_truep(C_taggedpointerp(t2))){
t6=C_i_not(t5);
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t7=C_slot(t2,C_fix(1));
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_i_equalp(t5,t7));}}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}

/* k2733 in k2585 in k2582 in object-evict-to-location in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm:508: ##sys#address->pointer */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[23]+1)))(3,*((C_word*)lf[23]+1),((C_word*)t0)[2],t1);}

/* k2501 in k2498 in k2494 in k2485 in evict in k2470 in k2467 in k2464 in object-evict in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 in ... */
static void C_fcall f_2503(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2503,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2506,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm:494: hash-table-set! */
t3=*((C_word*)lf[90]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[7],((C_word*)t0)[4],((C_word*)t0)[3]);}

/* k2498 in k2494 in k2485 in evict in k2470 in k2467 in k2464 in object-evict in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2500(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2500,2,t0,t1);}
t2=C_evict_block(((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2503,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[2]))){
t4=*((C_word*)lf[91]+1);
t5=t3;
f_2503(t5,C_i_set_i_slot(t2,C_fix(0),*((C_word*)lf[91]+1)));}
else{
t4=t3;
f_2503(t4,C_SCHEME_UNDEFINED);}}

/* evict in k2591 in k2588 in k2585 in k2582 in object-evict-to-location in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_fcall f_2601(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2601,NULL,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2611,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* lolevel.scm:513: hash-table-ref/default */
t4=*((C_word*)lf[92]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[4],t2,C_SCHEME_FALSE);}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2507 in k2504 in k2501 in k2498 in k2494 in k2485 in evict in k2470 in k2467 in k2464 in object-evict in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in ... */
static void C_ccall f_2509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k2504 in k2501 in k2498 in k2494 in k2485 in evict in k2470 in k2467 in k2464 in object-evict in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in ... */
static void C_ccall f_2506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2506,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2509,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[4]))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2516,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t4=C_specialp(((C_word*)t0)[4]);
if(C_truep(t4)){
t5=t3;
f_2516(t5,(C_truep(t4)?C_fix(1):C_fix(0)));}
else{
t5=C_i_symbolp(((C_word*)t0)[4]);
t6=t3;
f_2516(t6,(C_truep(t5)?C_fix(1):C_fix(0)));}}}

/* release in k2746 in object-release in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_fcall f_2753(C_word t0,C_word t1,C_word t2){
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
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2753,NULL,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
if(C_truep(C_permanentp(t2))){
if(C_truep(C_i_memq(t2,((C_word*)((C_word*)t0)[2])[1]))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_block_size(t2);
t4=t3;
t5=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[2])[1]);
t6=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2782,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_byteblockp(t2))){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f3701,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:557: ##sys#address->pointer */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[23]+1)))(3,*((C_word*)lf[23]+1),t8,C_block_address(&a,1,t2));}
else{
t8=(C_truep(C_specialp(t2))?C_fix(1):C_fix(0));
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2798,a[2]=t4,a[3]=t10,a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word)li65),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_2798(t12,t7,t8);}}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* checkn2 in move-memory! in k1134 in k1131 */
static void C_fcall f_1449(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1449,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1456,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t8=C_fixnum_difference(t3,t5);
if(C_truep(C_fixnum_less_or_equal_p(t2,t8))){
t9=C_fixnum_difference(t4,t6);
t10=t7;
f_1456(t10,C_fixnum_less_or_equal_p(t2,t9));}
else{
t9=t7;
f_1456(t9,C_SCHEME_FALSE);}}

/* checkn1 in move-memory! in k1134 in k1131 */
static void C_fcall f_1433(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1433,NULL,5,t0,t1,t2,t3,t4);}
t5=C_fixnum_difference(t3,t4);
if(C_truep(C_fixnum_less_or_equal_p(t2,t5))){
t6=t2;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
/* lolevel.scm:145: sizerr */
t6=((C_word*)((C_word*)t0)[2])[1];
f_1427(t6,t1,C_a_i_list(&a,2,t2,t3));}}

/* number-of-bytes in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2303(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2303,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
if(C_truep(C_byteblockp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_block_size(t2));}
else{
t3=C_block_size(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_bytes(t3));}}
else{
/* lolevel.scm:420: ##sys#signal-hook */
t3=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t1,lf[4],lf[77],lf[78],t2);}}

/* k2429 in k2423 in record->vector in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2431,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2436,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word)li55),tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_2436(t3,C_fix(0)));}

/* ##sys#check-generic-structure in k1134 in k1131 */
static void C_fcall f_1202(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1202,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1214,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=t2;
if(C_truep(C_blockp(t5))){
t6=C_structurep(t5);
t7=t4;
f_1214(t7,t6);}
else{
t6=t4;
f_1214(t6,C_SCHEME_FALSE);}}

/* allocate in k1134 in k1131 */
static void C_ccall f_1825(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1825,3,t0,t1,t2);}
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_fixnum_argumentp(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub316(t3,t4));}

/* doloop587 in k2429 in k2423 in record->vector in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static C_word C_fcall f_2436(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_slot(((C_word*)t0)[4],t1);
t3=C_i_setslot(((C_word*)t0)[3],t1,t2);
t4=C_fixnum_plus(t1,C_fix(1));
t6=t4;
t1=t6;
goto loop;}}

/* k1898 in pointer=? in k1134 in k1131 */
static void C_ccall f_1900(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1900,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1903,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:231: ##sys#check-special */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(4,*((C_word*)lf[27]+1),t2,((C_word*)t0)[4],lf[30]);}

/* k1813 in doloop307 in k1777 in copy in object-copy in k1134 in k1131 */
static void C_ccall f_1815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_1794(t4,((C_word*)t0)[5],t3);}

/* a3339 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_3340(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3340,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_u_i_pointer_f64_ref(&a,1,t2));}

/* a3342 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_3343(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3343,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_u_i_pointer_f32_ref(&a,1,t2));}

/* a3345 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_3346(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3346,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_u_i_pointer_s32_ref(&a,1,t2));}

/* a3348 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_3349(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3349,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_u_i_pointer_u32_ref(&a,1,t2));}

/* k2398 in k2395 in record-instance-slot-set! in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2400(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_setslot(((C_word*)t0)[4],t2,((C_word*)t0)[5]));}

/* a3351 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_3352(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3352,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_u_i_pointer_s16_ref(t2));}

/* a3354 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_3355(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3355,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_u_i_pointer_u16_ref(t2));}

/* a3357 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_3358(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3358,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_u_i_pointer_s8_ref(t2));}

/* k1901 in k1898 in pointer=? in k1134 in k1131 */
static void C_ccall f_1903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_pointer_eqp(((C_word*)t0)[3],((C_word*)t0)[4]));}

/* pointer+ in k1134 in k1131 */
static void C_ccall f_1905(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1905,4,t0,t1,t2,t3);}
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=(C_truep(t2)?C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t6=C_i_foreign_integer_argumentp(t3);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,stub365(t4,t5,t6));}

/* k1244 in number-of-slots in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_fcall f_1246(C_word t0,C_word t1){
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
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t2=C_u_i_car(((C_word*)t0)[3]);
/* lolevel.scm:108: ##sys#signal-hook */
t3=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[2],lf[4],t2,lf[76],((C_word*)t0)[4]);}
else{
/* lolevel.scm:108: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[4],C_SCHEME_FALSE,lf[76],((C_word*)t0)[4]);}}}

/* record-instance? in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2335(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_2335r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2335r(t0,t1,t2,t3);}}

static void C_ccall f_2335r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(5);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2350,a[2]=t6,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=t2;
if(C_truep(C_blockp(t8))){
t9=C_structurep(t8);
t10=t7;
f_2350(t10,t9);}
else{
t9=t7;
f_2350(t9,C_SCHEME_FALSE);}}

/* tag-pointer in k1134 in k1131 */
static void C_ccall f_1962(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1962,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1966,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:254: ##sys#make-tagged-pointer */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[35]+1)))(3,*((C_word*)lf[35]+1),t4,t3);}

/* a3360 in k2073 in k1134 in k1131 */
static void C_ccall f_3361(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3361,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_u_i_pointer_u8_ref(t2));}

/* pv-buf-set! in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static C_word C_fcall f_3237(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
t4=C_i_foreign_fixnum_argumentp(t2);
if(C_truep(t3)){
t5=C_i_foreign_pointer_argumentp(t3);
return(stub830(C_SCHEME_UNDEFINED,t1,t4,t5));}
else{
return(stub830(C_SCHEME_UNDEFINED,t1,t4,C_SCHEME_FALSE));}}

/* k1975 in k1964 in tag-pointer in k1134 in k1131 */
static void C_fcall f_1977(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_copy_pointer(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}
else{
t2=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR);
/* lolevel.scm:257: ##sys#error-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),((C_word*)t0)[5],t2,lf[34],((C_word*)t0)[2]);}}

/* copy in k2927 in object-unevict in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_fcall f_2934(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2934,NULL,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
if(C_truep(C_permanentp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2950,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm:582: hash-table-ref/default */
t4=*((C_word*)lf[92]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[3],t2,C_SCHEME_FALSE);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1964 in tag-pointer in k1134 in k1131 */
static void C_ccall f_1966(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1966,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1969,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1977,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)t0)[3];
if(C_truep(C_blockp(t5))){
t6=C_specialp(t5);
t7=t4;
f_1977(t7,t6);}
else{
t6=t4;
f_1977(t6,C_SCHEME_FALSE);}}

/* k1967 in k1964 in tag-pointer in k1134 in k1131 */
static void C_ccall f_1969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* object-unevict in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2922(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_2922r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2922r(t0,t1,t2,t3);}}

static void C_ccall f_2922r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2929,a[2]=t6,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:578: make-hash-table */
t8=*((C_word*)lf[93]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,*((C_word*)lf[94]+1));}

/* k2927 in object-unevict in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2929(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2929,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2934,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t4,a[5]=((C_word)li73),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2934(t6,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* pointer-vector-set! in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_3251(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3251,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[117],lf[123]);
t6=C_i_check_exact_2(t3,lf[123]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3261,a[2]=t2,a[3]=t1,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t8=C_slot(t2,C_fix(1));
/* lolevel.scm:670: ##sys#check-range */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[85]+1)))(5,*((C_word*)lf[85]+1),t7,t3,C_fix(0),t8);}

/* k1212 in check-generic-structure in k1134 in k1131 */
static void C_fcall f_1214(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[3];
t3=C_u_i_car(t2);
/* lolevel.scm:100: ##sys#signal-hook */
t4=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,((C_word*)t0)[2],lf[4],t3,lf[5],((C_word*)t0)[4]);}
else{
/* lolevel.scm:100: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[4],C_SCHEME_FALSE,lf[5],((C_word*)t0)[4]);}}}

/* k2948 in copy in k2927 in object-unevict in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2950(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2950,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(C_byteblockp(((C_word*)t0)[3]))){
if(C_truep(((C_word*)t0)[4])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2963,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=C_block_size(((C_word*)t0)[3]);
/* lolevel.scm:585: ##sys#make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[110]+1)))(3,*((C_word*)lf[110]+1),t2,t3);}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2979,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[3],C_fix(1));
/* lolevel.scm:590: ##sys#intern-symbol */
C_string_to_symbol(3,0,t2,t3);}
else{
t2=C_block_size(((C_word*)t0)[3]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2993,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm:595: ##sys#make-vector */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(3,*((C_word*)lf[17]+1),t4,t3);}}}}

/* k2724 in k2609 in evict in k2591 in k2588 in k2585 in k2582 in object-evict-to-location in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2726(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_bytes(C_fix(1));
t3=((C_word*)t0)[2];
f_2620(t3,C_fixnum_plus(t1,t2));}

/* k3259 in pointer-vector-set! in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_3261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3261,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3264,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
/* lolevel.scm:671: ##sys#check-pointer */
t3=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],lf[122]);}
else{
t3=C_slot(((C_word*)t0)[2],C_fix(2));
/* lolevel.scm:672: pv-buf-set! */
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_3237(t3,((C_word*)t0)[4],((C_word*)t0)[5]));}}

/* k3262 in k3259 in pointer-vector-set! in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_3264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(2));
/* lolevel.scm:672: pv-buf-set! */
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_3237(t2,((C_word*)t0)[4],((C_word*)t0)[5]));}

/* pointer-vector in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_3150(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_3150r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3150r(t0,t1,t2);}}

static void C_ccall f_3150r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t3=t2;
t4=C_u_i_length(t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3155,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:641: make-pointer-vector */
t6=*((C_word*)lf[116]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}

/* k2296 in number-of-slots in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_block_size(((C_word*)t0)[3]));}

/* k3153 in pointer-vector in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_3155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3155,2,t0,t1);}
t2=t1;
t3=C_slot(t2,C_fix(2));
t4=t3;
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3163,a[2]=t2,a[3]=t4,a[4]=t6,a[5]=((C_word)li81),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3163(t8,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0));}

/* k2708 in k2618 in k2609 in evict in k2591 in k2588 in k2585 in k2582 in object-evict-to-location in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 in ... */
static void C_ccall f_2710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm:522: signal */
t2=*((C_word*)lf[97]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2712 in k2618 in k2609 in evict in k2591 in k2588 in k2585 in k2582 in object-evict-to-location in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 in ... */
static void C_ccall f_2714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2714,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2718,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:528: make-property-condition */
t4=*((C_word*)lf[99]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[100],lf[101],((C_word*)((C_word*)t0)[3])[1]);}

/* k2716 in k2712 in k2618 in k2609 in evict in k2591 in k2588 in k2585 in k2582 in object-evict-to-location in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in ... */
static void C_ccall f_2718(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm:523: make-composite-condition */
t2=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* number-of-slots in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2294(C_word c,C_word t0,C_word t1,C_word t2){
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
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2294,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2298,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=t3;
t5=t2;
t6=C_a_i_list(&a,1,lf[75]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1246,a[2]=t4,a[3]=t6,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_blockp(t5))){
t8=C_specialp(t5);
if(C_truep(t8)){
t9=t7;
f_1246(t9,C_i_not(t8));}
else{
t9=C_byteblockp(t5);
t10=t7;
f_1246(t10,C_i_not(t9));}}
else{
t8=t7;
f_1246(t8,C_SCHEME_FALSE);}}

/* k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2292(C_word c,C_word t0,C_word t1){
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
C_word ab[27],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2292,2,t0,t1);}
t2=C_mutate2((C_word*)lf[74]+1 /* (set! block-ref ...) */,t1);
t3=C_mutate2((C_word*)lf[75]+1 /* (set! number-of-slots ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2294,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[77]+1 /* (set! number-of-bytes ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2303,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[79]+1 /* (set! make-record-instance ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2326,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[81]+1 /* (set! record-instance? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2335,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[82]+1 /* (set! record-instance-type ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2371,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[83]+1 /* (set! record-instance-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2380,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[84]+1 /* (set! record-instance-slot-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2393,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2419,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3316,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:459: getter-with-setter */
t12=*((C_word*)lf[125]+1);
((C_proc5)(void*)(*((C_word*)t12+1)))(5,t12,t10,t11,*((C_word*)lf[84]+1),lf[127]);}

/* k3061 in k3054 in k3051 in mutate-procedure! in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_3063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3063,2,t0,t1);}
t2=C_copy_block(((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3066,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3078,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:615: proc */
t5=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k3064 in k3061 in k3054 in k3051 in mutate-procedure! in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_3066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* pointer-vector? in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_3144(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3144,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[117]));}

/* k3109 in k3097 in make-pointer-vector in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_3111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3111,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3116,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li78),tmp=(C_word)a,a+=6,tmp);
t3=f_3116(t2,C_fix(0));
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record3(&a,3,lf[117],((C_word*)t0)[2],((C_word*)t0)[3]));}

/* k2780 in release in k2746 in object-release in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2782,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2789,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:557: ##sys#address->pointer */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[23]+1)))(3,*((C_word*)lf[23]+1),t2,C_block_address(&a,1,((C_word*)t0)[4]));}

/* doloop783 in k3109 in k3097 in make-pointer-vector in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static C_word C_fcall f_3116(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
t2=C_SCHEME_UNDEFINED;
return(t2);}
else{
t2=f_3237(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t3=C_fixnum_plus(t1,C_fix(1));
t6=t3;
t1=t6;
goto loop;}}

/* k2868 in k2865 in k2862 in k2856 in evict in k2838 in object-size in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[3])[1]);}

/* k2787 in k2780 in release in k2746 in object-release in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm:556: free */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],t1);}

/* k2875 in k2865 in k2862 in k2856 in evict in k2838 in object-size in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_fcall f_2877(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2877,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2879,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li69),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_2879(t5,((C_word*)t0)[6],t1);}

/* k1644 in k1622 in k1557 in move in k1483 in k1480 in k1477 in k1474 in move-memory! in k1134 in k1131 */
static void C_fcall f_1646(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1646,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1653,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[7])){
/* lolevel.scm:177: checkn1 */
t3=((C_word*)((C_word*)t0)[8])[1];
f_1433(t3,t2,((C_word*)t0)[7],((C_word*)t0)[9],((C_word*)t0)[6]);}
else{
/* lolevel.scm:177: checkn1 */
t3=((C_word*)((C_word*)t0)[8])[1];
f_1433(t3,t2,((C_word*)t0)[9],((C_word*)t0)[9],((C_word*)t0)[6]);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1663,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* lolevel.scm:178: ##sys#bytevector? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t2,((C_word*)t0)[3]);}}

/* set-procedure-data! in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2256(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2256,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2260,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:396: extend-procedure */
t5=*((C_word*)lf[63]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,t3);}

/* move in k1483 in k1480 in k1477 in k1474 in move-memory! in k1134 in k1131 */
static void C_fcall f_1490(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(11);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1490,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_structurep(t2))){
t4=C_slot(t2,C_fix(0));
if(C_truep(C_i_memq(t4,((C_word*)t0)[2]))){
t5=C_slot(t2,C_fix(1));
/* lolevel.scm:161: move */
t19=t1;
t20=t5;
t21=t3;
t1=t19;
t2=t20;
t3=t21;
goto loop;}
else{
t5=t1;
t6=t2;
t7=C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR);
/* lolevel.scm:128: ##sys#error-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t5,t7,lf[9],t6);}}
else{
if(C_truep(C_structurep(t3))){
t4=C_slot(t3,C_fix(0));
if(C_truep(C_i_memq(t4,((C_word*)t0)[2]))){
t5=C_slot(t3,C_fix(1));
/* lolevel.scm:165: move */
t19=t1;
t20=t2;
t21=t5;
t1=t19;
t2=t20;
t3=t21;
goto loop;}
else{
t5=t1;
t6=t3;
t7=C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR);
/* lolevel.scm:128: ##sys#error-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t5,t7,lf[9],t6);}}
else{
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1559,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t5=t2;
t6=C_i_safe_pointerp(t5);
if(C_truep(t6)){
t7=t4;
f_1559(t7,t6);}
else{
t7=C_locativep(t5);
t8=t4;
f_1559(t8,t7);}}}}

/* doloop798 in k3153 in pointer-vector in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_fcall f_3163(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3163,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[2]);}
else{
t4=C_i_car(t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3176,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t5,a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* lolevel.scm:647: ##sys#check-pointer */
t7=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t5,lf[117]);}}

/* k2246 in procedure-data in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2248(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?C_slot(t1,C_fix(1)):C_SCHEME_FALSE));}

/* k2862 in k2856 in evict in k2838 in object-size in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_fcall f_2864(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2864,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2867,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm:570: hash-table-set! */
t5=*((C_word*)lf[90]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[6],((C_word*)t0)[3],C_SCHEME_TRUE);}

/* k2865 in k2862 in k2856 in evict in k2838 in object-size in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_ccall f_2867(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2867,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2870,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[4]))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)((C_word*)t0)[3])[1]);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2877,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t4=C_specialp(((C_word*)t0)[4]);
if(C_truep(t4)){
t5=t3;
f_2877(t5,(C_truep(t4)?C_fix(1):C_fix(0)));}
else{
t5=C_i_symbolp(((C_word*)t0)[4]);
t6=t3;
f_2877(t6,(C_truep(t5)?C_fix(1):C_fix(0)));}}}

/* doloop706 in k2875 in k2865 in k2862 in k2856 in evict in k2838 in object-size in k2417 in k2290 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2114 in k2110 in k2073 in k1134 in k1131 */
static void C_fcall f_2879(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2879,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2901,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[5],t2);
/* lolevel.scm:574: evict */
t5=((C_word*)((C_word*)t0)[6])[1];
f_2845(t5,t3,t4);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[230] = {
{"f_1259:lolevel_2escm",(void*)f_1259},
{"f_2593:lolevel_2escm",(void*)f_2593},
{"f_2590:lolevel_2escm",(void*)f_2590},
{"f_2596:lolevel_2escm",(void*)f_2596},
{"f_3026:lolevel_2escm",(void*)f_3026},
{"f_1663:lolevel_2escm",(void*)f_1663},
{"f_2496:lolevel_2escm",(void*)f_2496},
{"f_2271:lolevel_2escm",(void*)f_2271},
{"f_1653:lolevel_2escm",(void*)f_1653},
{"f_2798:lolevel_2escm",(void*)f_2798},
{"f_2198:lolevel_2escm",(void*)f_2198},
{"f_2260:lolevel_2escm",(void*)f_2260},
{"f_2181:lolevel_2escm",(void*)f_2181},
{"f_3040:lolevel_2escm",(void*)f_3040},
{"f_3044:lolevel_2escm",(void*)f_3044},
{"f_3049:lolevel_2escm",(void*)f_3049},
{"f_3053:lolevel_2escm",(void*)f_3053},
{"f_3056:lolevel_2escm",(void*)f_3056},
{"f_1673:lolevel_2escm",(void*)f_1673},
{"f_1485:lolevel_2escm",(void*)f_1485},
{"f_2665:lolevel_2escm",(void*)f_2665},
{"f_1482:lolevel_2escm",(void*)f_1482},
{"f_1479:lolevel_2escm",(void*)f_1479},
{"f_2393:lolevel_2escm",(void*)f_2393},
{"f_1476:lolevel_2escm",(void*)f_1476},
{"f_2397:lolevel_2escm",(void*)f_2397},
{"f_2155:lolevel_2escm",(void*)f_2155},
{"f_2584:lolevel_2escm",(void*)f_2584},
{"f_2580:lolevel_2escm",(void*)f_2580},
{"f_2150:lolevel_2escm",(void*)f_2150},
{"f_2587:lolevel_2escm",(void*)f_2587},
{"f_2683:lolevel_2escm",(void*)f_2683},
{"f_1427:lolevel_2escm",(void*)f_1427},
{"f_2993:lolevel_2escm",(void*)f_2993},
{"f_2996:lolevel_2escm",(void*)f_2996},
{"f_2999:lolevel_2escm",(void*)f_2999},
{"f_1421:lolevel_2escm",(void*)f_1421},
{"f_3078:lolevel_2escm",(void*)f_3078},
{"f_2146:lolevel_2escm",(void*)f_2146},
{"f_2573:lolevel_2escm",(void*)f_2573},
{"f_2140:lolevel_2escm",(void*)f_2140},
{"f_2632:lolevel_2escm",(void*)f_2632},
{"f_2635:lolevel_2escm",(void*)f_2635},
{"f_2982:lolevel_2escm",(void*)f_2982},
{"f_2629:lolevel_2escm",(void*)f_2629},
{"f_2626:lolevel_2escm",(void*)f_2626},
{"f_2472:lolevel_2escm",(void*)f_2472},
{"f_2487:lolevel_2escm",(void*)f_2487},
{"f_3083:lolevel_2escm",(void*)f_3083},
{"f_2171:lolevel_2escm",(void*)f_2171},
{"f_2620:lolevel_2escm",(void*)f_2620},
{"f_2623:lolevel_2escm",(void*)f_2623},
{"f_2421:lolevel_2escm",(void*)f_2421},
{"f_2425:lolevel_2escm",(void*)f_2425},
{"f_3099:lolevel_2escm",(void*)f_3099},
{"f_2477:lolevel_2escm",(void*)f_2477},
{"f_2518:lolevel_2escm",(void*)f_2518},
{"f_2516:lolevel_2escm",(void*)f_2516},
{"f_2384:lolevel_2escm",(void*)f_2384},
{"f_2380:lolevel_2escm",(void*)f_2380},
{"f_2642:lolevel_2escm",(void*)f_2642},
{"f_2644:lolevel_2escm",(void*)f_2644},
{"f_2419:lolevel_2escm",(void*)f_2419},
{"f_2826:lolevel_2escm",(void*)f_2826},
{"f_2375:lolevel_2escm",(void*)f_2375},
{"f_2371:lolevel_2escm",(void*)f_2371},
{"f_2539:lolevel_2escm",(void*)f_2539},
{"f_1456:lolevel_2escm",(void*)f_1456},
{"f_2840:lolevel_2escm",(void*)f_2840},
{"f_2858:lolevel_2escm",(void*)f_2858},
{"f_2326:lolevel_2escm",(void*)f_2326},
{"f_2466:lolevel_2escm",(void*)f_2466},
{"f_2462:lolevel_2escm",(void*)f_2462},
{"f_2845:lolevel_2escm",(void*)f_2845},
{"f_2469:lolevel_2escm",(void*)f_2469},
{"f_2915:lolevel_2escm",(void*)f_2915},
{"f_1591:lolevel_2escm",(void*)f_1591},
{"f_2459:lolevel_2escm",(void*)f_2459},
{"f_3176:lolevel_2escm",(void*)f_3176},
{"f_2901:lolevel_2escm",(void*)f_2901},
{"f_1582:lolevel_2escm",(void*)f_1582},
{"f_3005:lolevel_2escm",(void*)f_3005},
{"f_2350:lolevel_2escm",(void*)f_2350},
{"f_1575:lolevel_2escm",(void*)f_1575},
{"f_1865:lolevel_2escm",(void*)f_1865},
{"f_1861:lolevel_2escm",(void*)f_1861},
{"f_3303:lolevel_2escm",(void*)f_3303},
{"f_1559:lolevel_2escm",(void*)f_1559},
{"f_2979:lolevel_2escm",(void*)f_2979},
{"f_1779:lolevel_2escm",(void*)f_1779},
{"f_3316:lolevel_2escm",(void*)f_3316},
{"f_2963:lolevel_2escm",(void*)f_2963},
{"f_2966:lolevel_2escm",(void*)f_2966},
{"f_3320:lolevel_2escm",(void*)f_3320},
{"f_3323:lolevel_2escm",(void*)f_3323},
{"f_1874:lolevel_2escm",(void*)f_1874},
{"f_1879:lolevel_2escm",(void*)f_1879},
{"f_1870:lolevel_2escm",(void*)f_1870},
{"f_2014:lolevel_2escm",(void*)f_2014},
{"f_1782:lolevel_2escm",(void*)f_1782},
{"f_3282:lolevel_2escm",(void*)f_3282},
{"f_3284:lolevel_2escm",(void*)f_3284},
{"f_1896:lolevel_2escm",(void*)f_1896},
{"f_1894:lolevel_2escm",(void*)f_1894},
{"f_1136:lolevel_2escm",(void*)f_1136},
{"f_1138:lolevel_2escm",(void*)f_1138},
{"f_2808:lolevel_2escm",(void*)f_2808},
{"f_1890:lolevel_2escm",(void*)f_1890},
{"f_3197:lolevel_2escm",(void*)f_3197},
{"f_3190:lolevel_2escm",(void*)f_3190},
{"f_3293:lolevel_2escm",(void*)f_3293},
{"f_2836:lolevel_2escm",(void*)f_2836},
{"toplevel:lolevel_2escm",(void*)C_lolevel_toplevel},
{"f_1794:lolevel_2escm",(void*)f_1794},
{"f_1925:lolevel_2escm",(void*)f_1925},
{"f3701:lolevel_2escm",(void*)f3701},
{"f_2026:lolevel_2escm",(void*)f_2026},
{"f_2038:lolevel_2escm",(void*)f_2038},
{"f_2054:lolevel_2escm",(void*)f_2054},
{"f_2092:lolevel_2escm",(void*)f_2092},
{"f_2095:lolevel_2escm",(void*)f_2095},
{"f_2075:lolevel_2escm",(void*)f_2075},
{"f_2070:lolevel_2escm",(void*)f_2070},
{"f_2080:lolevel_2escm",(void*)f_2080},
{"f_2098:lolevel_2escm",(void*)f_2098},
{"f_2077:lolevel_2escm",(void*)f_2077},
{"f_1133:lolevel_2escm",(void*)f_1133},
{"f_1957:lolevel_2escm",(void*)f_1957},
{"f_2086:lolevel_2escm",(void*)f_2086},
{"f_2089:lolevel_2escm",(void*)f_2089},
{"f_2112:lolevel_2escm",(void*)f_2112},
{"f_3208:lolevel_2escm",(void*)f_3208},
{"f_2116:lolevel_2escm",(void*)f_2116},
{"f_1946:lolevel_2escm",(void*)f_1946},
{"f_2101:lolevel_2escm",(void*)f_2101},
{"f_2107:lolevel_2escm",(void*)f_2107},
{"f_2104:lolevel_2escm",(void*)f_2104},
{"f_2132:lolevel_2escm",(void*)f_2132},
{"f_2136:lolevel_2escm",(void*)f_2136},
{"f_2120:lolevel_2escm",(void*)f_2120},
{"f_1185:lolevel_2escm",(void*)f_1185},
{"f_2124:lolevel_2escm",(void*)f_2124},
{"f_1188:lolevel_2escm",(void*)f_1188},
{"f_2128:lolevel_2escm",(void*)f_2128},
{"f_2217:lolevel_2escm",(void*)f_2217},
{"f_2215:lolevel_2escm",(void*)f_2215},
{"f_1842:lolevel_2escm",(void*)f_1842},
{"f_1832:lolevel_2escm",(void*)f_1832},
{"f_1165:lolevel_2escm",(void*)f_1165},
{"f_2231:lolevel_2escm",(void*)f_2231},
{"f_1749:lolevel_2escm",(void*)f_1749},
{"f_1743:lolevel_2escm",(void*)f_1743},
{"f_1850:lolevel_2escm",(void*)f_1850},
{"f_1605:lolevel_2escm",(void*)f_1605},
{"f_1601:lolevel_2escm",(void*)f_1601},
{"f_2744:lolevel_2escm",(void*)f_2744},
{"f_1400:lolevel_2escm",(void*)f_1400},
{"f_2748:lolevel_2escm",(void*)f_2748},
{"f_1624:lolevel_2escm",(void*)f_1624},
{"f_2611:lolevel_2escm",(void*)f_2611},
{"f_1983:lolevel_2escm",(void*)f_1983},
{"f_2735:lolevel_2escm",(void*)f_2735},
{"f_2503:lolevel_2escm",(void*)f_2503},
{"f_2500:lolevel_2escm",(void*)f_2500},
{"f_2601:lolevel_2escm",(void*)f_2601},
{"f_2509:lolevel_2escm",(void*)f_2509},
{"f_2506:lolevel_2escm",(void*)f_2506},
{"f_2753:lolevel_2escm",(void*)f_2753},
{"f_1449:lolevel_2escm",(void*)f_1449},
{"f_1433:lolevel_2escm",(void*)f_1433},
{"f_2303:lolevel_2escm",(void*)f_2303},
{"f_2431:lolevel_2escm",(void*)f_2431},
{"f_1202:lolevel_2escm",(void*)f_1202},
{"f_1825:lolevel_2escm",(void*)f_1825},
{"f_2436:lolevel_2escm",(void*)f_2436},
{"f_1900:lolevel_2escm",(void*)f_1900},
{"f_1815:lolevel_2escm",(void*)f_1815},
{"f_3340:lolevel_2escm",(void*)f_3340},
{"f_3343:lolevel_2escm",(void*)f_3343},
{"f_3346:lolevel_2escm",(void*)f_3346},
{"f_3349:lolevel_2escm",(void*)f_3349},
{"f_2400:lolevel_2escm",(void*)f_2400},
{"f_3352:lolevel_2escm",(void*)f_3352},
{"f_3355:lolevel_2escm",(void*)f_3355},
{"f_3358:lolevel_2escm",(void*)f_3358},
{"f_1903:lolevel_2escm",(void*)f_1903},
{"f_1905:lolevel_2escm",(void*)f_1905},
{"f_1246:lolevel_2escm",(void*)f_1246},
{"f_2335:lolevel_2escm",(void*)f_2335},
{"f_1962:lolevel_2escm",(void*)f_1962},
{"f_3361:lolevel_2escm",(void*)f_3361},
{"f_3237:lolevel_2escm",(void*)f_3237},
{"f_1977:lolevel_2escm",(void*)f_1977},
{"f_2934:lolevel_2escm",(void*)f_2934},
{"f_1966:lolevel_2escm",(void*)f_1966},
{"f_1969:lolevel_2escm",(void*)f_1969},
{"f_2922:lolevel_2escm",(void*)f_2922},
{"f_2929:lolevel_2escm",(void*)f_2929},
{"f_3251:lolevel_2escm",(void*)f_3251},
{"f_1214:lolevel_2escm",(void*)f_1214},
{"f_2950:lolevel_2escm",(void*)f_2950},
{"f_2726:lolevel_2escm",(void*)f_2726},
{"f_3261:lolevel_2escm",(void*)f_3261},
{"f_3264:lolevel_2escm",(void*)f_3264},
{"f_3150:lolevel_2escm",(void*)f_3150},
{"f_2298:lolevel_2escm",(void*)f_2298},
{"f_3155:lolevel_2escm",(void*)f_3155},
{"f_2710:lolevel_2escm",(void*)f_2710},
{"f_2714:lolevel_2escm",(void*)f_2714},
{"f_2718:lolevel_2escm",(void*)f_2718},
{"f_2294:lolevel_2escm",(void*)f_2294},
{"f_2292:lolevel_2escm",(void*)f_2292},
{"f_3063:lolevel_2escm",(void*)f_3063},
{"f_3066:lolevel_2escm",(void*)f_3066},
{"f_3144:lolevel_2escm",(void*)f_3144},
{"f_3111:lolevel_2escm",(void*)f_3111},
{"f_2782:lolevel_2escm",(void*)f_2782},
{"f_3116:lolevel_2escm",(void*)f_3116},
{"f_2870:lolevel_2escm",(void*)f_2870},
{"f_2789:lolevel_2escm",(void*)f_2789},
{"f_2877:lolevel_2escm",(void*)f_2877},
{"f_1646:lolevel_2escm",(void*)f_1646},
{"f_2256:lolevel_2escm",(void*)f_2256},
{"f_1490:lolevel_2escm",(void*)f_1490},
{"f_3163:lolevel_2escm",(void*)f_3163},
{"f_2248:lolevel_2escm",(void*)f_2248},
{"f_2864:lolevel_2escm",(void*)f_2864},
{"f_2867:lolevel_2escm",(void*)f_2867},
{"f_2879:lolevel_2escm",(void*)f_2879},
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
o|eliminated procedure checks: 95 
o|specializations:
o|  1 (length list)
o|  3 (cdr pair)
o|  9 (car pair)
o|Removed `not' forms: 9 
o|merged explicitly consed rest parameter: loc65 
o|inlining procedure: k1140 
o|inlining procedure: k1140 
o|inlining procedure: k1148 
o|inlining procedure: k1148 
o|merged explicitly consed rest parameter: loc88 
o|inlining procedure: k1204 
o|inlining procedure: k1204 
o|inlining procedure: k1219 
o|inlining procedure: k1219 
o|contracted procedure: "(lolevel.scm:99) g8990" 
o|inlining procedure: k1209 
o|inlining procedure: k1209 
o|inlining procedure: k1261 
o|inlining procedure: k1261 
o|inlining procedure: k1274 
o|inlining procedure: k1274 
o|contracted procedure: "(lolevel.scm:113) g108109" 
o|merged explicitly consed rest parameter: args210 
o|inlining procedure: k1435 
o|inlining procedure: k1435 
o|consed rest parameter at call site: "(lolevel.scm:145) sizerr207" 1 
o|inlining procedure: k1451 
o|inlining procedure: k1451 
o|consed rest parameter at call site: "(lolevel.scm:150) sizerr207" 1 
o|inlining procedure: k1492 
o|inlining procedure: "(lolevel.scm:162) typerr118" 
o|inlining procedure: k1492 
o|inlining procedure: k1524 
o|inlining procedure: k1524 
o|inlining procedure: "(lolevel.scm:166) typerr118" 
o|inlining procedure: k1544 
o|contracted procedure: "(lolevel.scm:169) memmove1114" 
o|inlining procedure: k1586 
o|contracted procedure: "(lolevel.scm:171) memmove3116" 
o|inlining procedure: k1586 
o|inlining procedure: "(lolevel.scm:173) typerr118" 
o|contracted procedure: "(lolevel.scm:168) g240241" 
o|inlining procedure: k1570 
o|inlining procedure: k1570 
o|contracted procedure: "(lolevel.scm:58) g246247" 
o|inlining procedure: k1544 
o|inlining procedure: k1631 
o|contracted procedure: "(lolevel.scm:177) memmove2115" 
o|inlining procedure: k1655 
o|inlining procedure: k1655 
o|inlining procedure: k1631 
o|contracted procedure: "(lolevel.scm:179) memmove4117" 
o|inlining procedure: "(lolevel.scm:182) typerr118" 
o|contracted procedure: "(lolevel.scm:176) g266267" 
o|inlining procedure: k1641 
o|inlining procedure: k1641 
o|contracted procedure: "(lolevel.scm:58) g272273" 
o|inlining procedure: "(lolevel.scm:184) typerr118" 
o|contracted procedure: "(lolevel.scm:167) g227228" 
o|inlining procedure: k1554 
o|inlining procedure: k1554 
o|contracted procedure: "(lolevel.scm:58) g233234" 
o|consed rest parameter at call site: "(lolevel.scm:153) check-block" 2 
o|consed rest parameter at call site: "(lolevel.scm:152) check-block" 2 
o|contracted procedure: k1754 
o|inlining procedure: k1751 
o|inlining procedure: k1780 
o|inlining procedure: k1780 
o|inlining procedure: k1796 
o|inlining procedure: k1796 
o|inlining procedure: k1751 
o|inlining procedure: k1835 
o|inlining procedure: k1835 
o|contracted procedure: "(lolevel.scm:209) g329330" 
o|contracted procedure: "(lolevel.scm:211) g334335" 
o|inlining procedure: k1854 
o|inlining procedure: k1854 
o|inlining procedure: k1881 
o|contracted procedure: "(lolevel.scm:221) g347348" 
o|inlining procedure: k1881 
o|inlining procedure: k1927 
o|inlining procedure: k1927 
o|contracted procedure: "(lolevel.scm:243) g384385" 
o|inlining procedure: k1941 
o|inlining procedure: k1941 
o|inlining procedure: k1967 
o|inlining procedure: k1967 
o|contracted procedure: "(lolevel.scm:255) g392393" 
o|inlining procedure: k1972 
o|inlining procedure: k1972 
o|inlining procedure: k1988 
o|inlining procedure: k1997 
o|inlining procedure: k1997 
o|inlining procedure: k1988 
o|inlining procedure: k2016 
o|inlining procedure: k2016 
o|contracted procedure: "(lolevel.scm:266) g418419" 
o|inlining procedure: k2021 
o|inlining procedure: k2021 
o|inlining procedure: k2044 
o|inlining procedure: k2044 
o|inlining procedure: k2060 
o|inlining procedure: k2060 
o|inlining procedure: k2082 
o|inlining procedure: k2082 
o|inlining procedure: k2157 
o|inlining procedure: k2157 
o|inlining procedure: k2183 
o|inlining procedure: k2189 
o|inlining procedure: k2189 
o|contracted procedure: "(lolevel.scm:386) g502503" 
o|inlining procedure: k2200 
o|inlining procedure: k2200 
o|inlining procedure: k2183 
o|inlining procedure: k2219 
o|inlining procedure: k2249 
o|inlining procedure: k2249 
o|contracted procedure: "(lolevel.scm:391) g512513" 
o|inlining procedure: k2233 
o|inlining procedure: k2233 
o|inlining procedure: k2219 
o|inlining procedure: k2261 
o|inlining procedure: k2261 
o|contracted procedure: "(lolevel.scm:406) g523524" 
o|inlining procedure: k2275 
o|inlining procedure: k2282 
o|inlining procedure: k2282 
o|inlining procedure: k2275 
o|contracted procedure: "(lolevel.scm:415) check-generic-vector" 
o|inlining procedure: k1229 
o|inlining procedure: k1229 
o|inlining procedure: k1251 
o|inlining procedure: k1251 
o|contracted procedure: "(lolevel.scm:107) g9798" 
o|inlining procedure: k1234 
o|inlining procedure: k1241 
o|inlining procedure: k1241 
o|inlining procedure: k1234 
o|contracted procedure: k2308 
o|inlining procedure: k2305 
o|inlining procedure: k2305 
o|inlining procedure: k2340 
o|inlining procedure: k2340 
o|contracted procedure: "(lolevel.scm:441) g559560" 
o|inlining procedure: k2345 
o|inlining procedure: k2345 
o|consed rest parameter at call site: "(lolevel.scm:446) check-generic-structure" 2 
o|consed rest parameter at call site: "(lolevel.scm:450) check-generic-structure" 2 
o|consed rest parameter at call site: "(lolevel.scm:454) check-generic-structure" 2 
o|inlining procedure: k2438 
o|inlining procedure: k2438 
o|consed rest parameter at call site: "(lolevel.scm:468) check-generic-structure" 2 
o|contracted procedure: k2482 
o|inlining procedure: k2479 
o|inlining procedure: k2507 
o|inlining procedure: k2507 
o|inlining procedure: k2520 
o|inlining procedure: k2520 
o|inlining procedure: k2544 
o|inlining procedure: k2544 
o|inlining procedure: k2479 
o|contracted procedure: k2606 
o|inlining procedure: k2603 
o|inlining procedure: k2633 
o|inlining procedure: k2633 
o|inlining procedure: k2646 
o|inlining procedure: k2646 
o|inlining procedure: k2670 
o|inlining procedure: k2670 
o|inlining procedure: k2698 
o|inlining procedure: k2698 
o|inlining procedure: k2724 
o|inlining procedure: k2724 
o|inlining procedure: k2603 
o|contracted procedure: k2758 
o|inlining procedure: k2755 
o|contracted procedure: k2764 
o|inlining procedure: k2767 
o|inlining procedure: k2767 
o|inlining procedure: k2800 
o|inlining procedure: k2800 
o|inlining procedure: k2755 
o|inlining procedure: k2829 
o|inlining procedure: k2829 
o|contracted procedure: k2850 
o|inlining procedure: k2847 
o|inlining procedure: k2868 
o|inlining procedure: k2868 
o|inlining procedure: k2881 
o|inlining procedure: k2881 
o|inlining procedure: k2906 
o|inlining procedure: k2906 
o|inlining procedure: k2913 
o|inlining procedure: k2913 
o|inlining procedure: k2847 
o|contracted procedure: k2939 
o|inlining procedure: k2936 
o|contracted procedure: k2945 
o|inlining procedure: k2951 
o|inlining procedure: k2951 
o|inlining procedure: k2957 
o|inlining procedure: k2957 
o|inlining procedure: k2971 
o|inlining procedure: k2971 
o|inlining procedure: k3007 
o|inlining procedure: k3007 
o|inlining procedure: k2936 
o|contracted procedure: "(lolevel.scm:606) check-become-alist" 
o|inlining procedure: k1170 
o|inlining procedure: k1170 
o|consed rest parameter at call site: "(lolevel.scm:91) check-block" 2 
o|consed rest parameter at call site: "(lolevel.scm:90) check-block" 2 
o|inlining procedure: k3118 
o|inlining procedure: k3118 
o|inlining procedure: k3165 
o|inlining procedure: k3165 
o|inlining procedure: k3210 
o|inlining procedure: k3210 
o|inlining procedure: k3244 
o|inlining procedure: k3244 
o|contracted procedure: "(lolevel.scm:680) pv-buf-ref" 
o|consed rest parameter at call site: "(lolevel.scm:461) check-generic-structure" 2 
o|replaced variables: 384 
o|removed binding forms: 208 
o|substituted constant variable: r11493368 
o|substituted constant variable: r11493368 
o|substituted constant variable: r12203374 
o|substituted constant variable: r12203374 
o|substituted constant variable: r12103377 
o|substituted constant variable: r12753382 
o|substituted constant variable: r12753382 
o|substituted constant variable: r18363448 
o|substituted constant variable: r18363448 
o|substituted constant variable: r18553451 
o|substituted constant variable: r18823453 
o|substituted constant variable: r19423457 
o|substituted constant variable: r19733463 
o|substituted constant variable: r19893467 
o|substituted constant variable: r20223471 
o|substituted constant variable: r20453472 
o|substituted constant variable: r20453472 
o|substituted constant variable: r20613476 
o|substituted constant variable: r20613476 
o|substituted constant variable: r20833481 
o|substituted constant variable: r21583483 
o|substituted constant variable: r21903485 
o|substituted constant variable: r21903486 
o|substituted constant variable: r22013488 
o|substituted constant variable: r21843489 
o|substituted constant variable: r22503492 
o|substituted constant variable: r22343494 
o|substituted constant variable: r22203495 
o|substituted constant variable: r22763503 
o|substituted constant variable: r12523508 
o|substituted constant variable: r12523508 
o|substituted constant variable: r12353515 
o|substituted constant variable: r23413519 
o|substituted constant variable: r23463521 
o|substituted constant variable: r28303560 
o|substituted constant variable: r28303560 
o|substituted constant variable: r28483577 
o|substituted constant variable: loc70 
o|substituted constant variable: loc70 
o|substituted constant variable: loc70 
o|substituted constant variable: loc70 
o|substituted constant variable: loc70 
o|inlining procedure: k3100 
o|substituted constant variable: r32453598 
o|substituted constant variable: r32453598 
o|replaced variables: 63 
o|removed binding forms: 362 
o|inlining procedure: k1567 
o|inlining procedure: k1638 
o|inlining procedure: k1551 
o|inlining procedure: k2780 
o|replaced variables: 21 
o|removed binding forms: 100 
o|contracted procedure: k1266 
o|simplifications: ((let . 10)) 
o|replaced variables: 3 
o|removed binding forms: 16 
o|replaced variables: 6 
o|removed binding forms: 3 
o|removed binding forms: 3 
o|simplifications: ((if . 37) (##core#call . 226)) 
o|  call simplifications:
o|    vector
o|    ##sys#check-structure	4
o|    ##sys#structure?
o|    ##sys#fudge
o|    fx*
o|    ##sys#make-structure	2
o|    ##sys#check-list
o|    ##sys#check-pair
o|    ##sys#check-exact	4
o|    list	3
o|    +
o|    values
o|    void	2
o|    ##sys#setislot	4
o|    ##sys#check-symbol
o|    cons	3
o|    eq?	6
o|    not	6
o|    equal?
o|    integer?
o|    ##sys#foreign-integer-argument	2
o|    symbol?	8
o|    fx>=	9
o|    ##sys#setslot	5
o|    fx+	18
o|    ##sys#intern-symbol	2
o|    car	10
o|    null?	14
o|    cdr	3
o|    fx<	3
o|    ##sys#generic-structure?	2
o|    string?	3
o|    ##sys#size	18
o|    ##sys#foreign-block-argument	4
o|    ##sys#foreign-pointer-argument	8
o|    ##sys#foreign-fixnum-argument	16
o|    memq	3
o|    ##sys#slot	30
o|    fx-	7
o|    fx<=	3
o|    apply	2
o|    pair?	11
o|contracted procedure: k1151 
o|contracted procedure: k1222 
o|contracted procedure: k1277 
o|contracted procedure: k1736 
o|contracted procedure: k1402 
o|contracted procedure: k1730 
o|contracted procedure: k1405 
o|contracted procedure: k1724 
o|contracted procedure: k1408 
o|contracted procedure: k1718 
o|contracted procedure: k1411 
o|contracted procedure: k1712 
o|contracted procedure: k1414 
o|contracted procedure: k1706 
o|contracted procedure: k1417 
o|contracted procedure: k1445 
o|contracted procedure: k1438 
o|contracted procedure: k1471 
o|contracted procedure: k1460 
o|contracted procedure: k1467 
o|contracted procedure: k1495 
o|contracted procedure: k1515 
o|contracted procedure: k1501 
o|contracted procedure: k1508 
o|contracted procedure: k1521 
o|contracted procedure: k1541 
o|contracted procedure: k1527 
o|contracted procedure: k1534 
o|contracted procedure: k1285 
o|contracted procedure: k1289 
o|contracted procedure: k1293 
o|contracted procedure: k1297 
o|contracted procedure: k1301 
o|contracted procedure: k1592 
o|contracted procedure: k1341 
o|contracted procedure: k1345 
o|contracted procedure: k1349 
o|contracted procedure: k1353 
o|contracted procedure: k1357 
o|contracted procedure: k1607 
o|contracted procedure: k1625 
o|contracted procedure: k1628 
o|contracted procedure: k1313 
o|contracted procedure: k1317 
o|contracted procedure: k1321 
o|contracted procedure: k1325 
o|contracted procedure: k1329 
o|contracted procedure: k1664 
o|contracted procedure: k1369 
o|contracted procedure: k1373 
o|contracted procedure: k1377 
o|contracted procedure: k1381 
o|contracted procedure: k1385 
o|contracted procedure: k1675 
o|contracted procedure: k1679 
o|contracted procedure: k1694 
o|contracted procedure: k1700 
o|contracted procedure: k1760 
o|contracted procedure: k1767 
o|contracted procedure: k1770 
o|contracted procedure: k1773 
o|contracted procedure: k1783 
o|contracted procedure: k1790 
o|contracted procedure: k1799 
o|contracted procedure: k1802 
o|contracted procedure: k1809 
o|contracted procedure: k1817 
o|contracted procedure: k1828 
o|contracted procedure: k1835 
o|contracted procedure: k1908 
o|contracted procedure: k1912 
o|contracted procedure: k1922 
o|contracted procedure: k1930 
o|contracted procedure: k2007 
o|contracted procedure: k1985 
o|contracted procedure: k1994 
o|contracted procedure: k2004 
o|contracted procedure: k2047 
o|contracted procedure: k2044 
o|contracted procedure: k2063 
o|contracted procedure: k2060 
o|contracted procedure: k2142 
o|contracted procedure: k2160 
o|contracted procedure: k2167 
o|contracted procedure: k2177 
o|contracted procedure: k2173 
o|contracted procedure: k2203 
o|contracted procedure: k2210 
o|contracted procedure: k2236 
o|contracted procedure: k2243 
o|contracted procedure: k2264 
o|contracted procedure: k1254 
o|contracted procedure: k2321 
o|contracted procedure: k2328 
o|contracted procedure: k2364 
o|contracted procedure: k2337 
o|contracted procedure: k2351 
o|contracted procedure: k2361 
o|contracted procedure: k2389 
o|contracted procedure: k2405 
o|contracted procedure: k2413 
o|contracted procedure: k2409 
o|contracted procedure: k2426 
o|contracted procedure: k2441 
o|contracted procedure: k2455 
o|contracted procedure: k2444 
o|contracted procedure: k2451 
o|contracted procedure: k2491 
o|contracted procedure: k2523 
o|contracted procedure: k2526 
o|contracted procedure: k2533 
o|contracted procedure: k2541 
o|contracted procedure: k2544 
o|contracted procedure: k2550 
o|contracted procedure: k2557 
o|propagated global variable: r2558 ##sys#undefined-value 
o|contracted procedure: k2561 
o|contracted procedure: k2569 
o|contracted procedure: k2576 
o|contracted procedure: k2615 
o|contracted procedure: k2649 
o|contracted procedure: k2652 
o|contracted procedure: k2659 
o|contracted procedure: k2667 
o|contracted procedure: k2670 
o|contracted procedure: k2677 
o|contracted procedure: k2684 
o|contracted procedure: k2691 
o|propagated global variable: r2692 ##sys#undefined-value 
o|contracted procedure: k2695 
o|contracted procedure: k2701 
o|contracted procedure: k2720 
o|contracted procedure: k2736 
o|contracted procedure: k2740 
o|contracted procedure: k2770 
o|contracted procedure: k2773 
o|contracted procedure: k2777 
o|contracted procedure: k2794 
o|contracted procedure: k2803 
o|contracted procedure: k2813 
o|contracted procedure: k2817 
o|contracted procedure: k2822 
o|contracted procedure: k2829 
o|contracted procedure: k2859 
o|contracted procedure: k2884 
o|contracted procedure: k2888 
o|contracted procedure: k2895 
o|contracted procedure: k2903 
o|contracted procedure: k2906 
o|contracted procedure: k3033 
o|contracted procedure: k2924 
o|contracted procedure: k2968 
o|contracted procedure: k2974 
o|contracted procedure: k2984 
o|contracted procedure: k2987 
o|contracted procedure: k3001 
o|contracted procedure: k3010 
o|contracted procedure: k3013 
o|contracted procedure: k3020 
o|contracted procedure: k3028 
o|contracted procedure: k1158 
o|contracted procedure: k1167 
o|contracted procedure: k1176 
o|contracted procedure: k1180 
o|contracted procedure: k3057 
o|contracted procedure: k3072 
o|contracted procedure: k3068 
o|contracted procedure: k3080 
o|contracted procedure: k3137 
o|contracted procedure: k3085 
o|contracted procedure: k3088 
o|contracted procedure: k3091 
o|contracted procedure: k3094 
o|contracted procedure: k3106 
o|contracted procedure: k3121 
o|contracted procedure: k3131 
o|contracted procedure: k3156 
o|contracted procedure: k3168 
o|contracted procedure: k3171 
o|contracted procedure: k3186 
o|contracted procedure: k3192 
o|contracted procedure: k3198 
o|contracted procedure: k3201 
o|contracted procedure: k3213 
o|contracted procedure: k3223 
o|contracted procedure: k3240 
o|contracted procedure: k3244 
o|contracted procedure: k3253 
o|contracted procedure: k3256 
o|contracted procedure: k3269 
o|contracted procedure: k3276 
o|contracted procedure: k3286 
o|contracted procedure: k3295 
o|contracted procedure: k3298 
o|contracted procedure: k3308 
o|contracted procedure: k3233 
o|contracted procedure: k3312 
o|contracted procedure: k3328 
o|contracted procedure: k3336 
o|contracted procedure: k3332 
o|simplifications: ((let . 38)) 
o|removed binding forms: 198 
o|inlining procedure: k1603 
o|inlining procedure: "(lolevel.scm:242) align373" 
o|inlining procedure: "(lolevel.scm:244) align373" 
o|inlining procedure: k3262 
o|replaced variables: 65 
o|replaced variables: 4 
o|removed binding forms: 49 
o|inlining procedure: k1951 
o|removed binding forms: 4 
o|removed binding forms: 1 
o|direct leaf routine/allocation: doloop587588 0 
o|direct leaf routine/allocation: pv-buf-set! 0 
o|converted assignments to bindings: (doloop587588) 
o|contracted procedure: "(lolevel.scm:633) k3124" 
o|contracted procedure: "(lolevel.scm:648) k3177" 
o|contracted procedure: "(lolevel.scm:657) k3216" 
o|simplifications: ((let . 1)) 
o|removed binding forms: 3 
o|direct leaf routine/allocation: doloop783784 0 
o|direct leaf routine/allocation: doloop811812 0 
o|contracted procedure: k3100 
o|converted assignments to bindings: (doloop783784) 
o|converted assignments to bindings: (doloop811812) 
o|simplifications: ((let . 2)) 
o|removed binding forms: 1 
o|customizable procedures: (doloop798799 loop71 copy731 doloop746747 k2862 k2875 evict698 doloop706707 k2746 release680 doloop687688 k2585 k2618 k2624 k2640 evict641 doloop654655 k2464 k2501 k2514 evict605 doloop617618 ##sys#check-generic-structure k2348 k1244 k2024 k1975 k1944 copy295 doloop307308 ##sys#check-block k1557 k1644 checkn2209 k1573 checkn1208 nosizerr206 move220 k1454 sizerr207 k1212) 
o|calls to known targets: 98 
o|identified direct recursive calls: f_1490 2 
o|identified direct recursive calls: f_2436 1 
o|identified direct recursive calls: f_3116 1 
o|identified direct recursive calls: f_3208 1 
o|fast box initializations: 19 
o|fast global references: 18 
o|fast global assignments: 4 
o|dropping unused closure argument: f_1138 
o|dropping unused closure argument: f_1202 
o|dropping unused closure argument: f_3237 
*/
/* end of file */
