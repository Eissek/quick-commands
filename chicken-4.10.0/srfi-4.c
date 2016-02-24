/* Generated from srfi-4.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:04
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: srfi-4.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file srfi-4.c
   unit: srfi_2d4
*/

#include "chicken.h"

#define C_copy_subvector(to, from, start_to, start_from, bytes)   \
  (C_memcpy((C_char *)C_data_pointer(to) + C_unfix(start_to), (C_char *)C_data_pointer(from) + C_unfix(start_from), C_unfix(bytes)), \
    C_SCHEME_UNDEFINED)

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[163];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,50),40,35,35,115,121,115,35,99,104,101,99,107,45,101,120,97,99,116,45,105,110,116,101,114,118,97,108,32,110,54,52,32,102,114,111,109,54,53,32,116,111,54,54,32,108,111,99,54,55,41,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,21),40,117,56,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,55,51,41,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,21),40,115,56,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,55,54,41,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,22),40,117,49,54,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,55,57,41,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,22),40,115,49,54,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,56,50,41,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,22),40,117,51,50,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,56,53,41,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,22),40,115,51,50,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,56,56,41,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,22),40,102,51,50,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,57,49,41,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,22),40,102,54,52,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,57,52,41,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,27),40,117,56,118,101,99,116,111,114,45,115,101,116,33,32,120,57,55,32,105,57,56,32,121,57,57,41,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,30),40,115,56,118,101,99,116,111,114,45,115,101,116,33,32,120,49,49,53,32,105,49,49,54,32,121,49,49,55,41,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,31),40,117,49,54,118,101,99,116,111,114,45,115,101,116,33,32,120,49,51,50,32,105,49,51,51,32,121,49,51,52,41,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,31),40,115,49,54,118,101,99,116,111,114,45,115,101,116,33,32,120,49,53,48,32,105,49,53,49,32,121,49,53,50,41,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,31),40,117,51,50,118,101,99,116,111,114,45,115,101,116,33,32,120,49,54,55,32,105,49,54,56,32,121,49,54,57,41,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,31),40,115,51,50,118,101,99,116,111,114,45,115,101,116,33,32,120,49,56,57,32,105,49,57,48,32,121,49,57,49,41,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,31),40,102,51,50,118,101,99,116,111,114,45,115,101,116,33,32,120,50,48,55,32,105,50,48,56,32,121,50,48,57,41,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,31),40,102,54,52,118,101,99,116,111,114,45,115,101,116,33,32,120,50,50,52,32,105,50,50,53,32,121,50,50,54,41,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,19),40,101,120,116,45,102,114,101,101,32,98,118,51,54,54,51,54,57,41,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,29),40,97,108,108,111,99,32,108,111,99,51,55,49,32,108,101,110,51,55,50,32,101,120,116,63,51,55,51,41,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,28),40,114,101,108,101,97,115,101,45,110,117,109,98,101,114,45,118,101,99,116,111,114,32,118,51,56,48,41,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,52,48,50,41,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,34),40,109,97,107,101,45,117,56,118,101,99,116,111,114,32,108,101,110,51,56,54,32,46,32,116,109,112,51,56,53,51,56,55,41,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,52,51,49,41,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,34),40,109,97,107,101,45,115,56,118,101,99,116,111,114,32,108,101,110,52,49,53,32,46,32,116,109,112,52,49,52,52,49,54,41,0,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,52,54,48,41,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,35),40,109,97,107,101,45,117,49,54,118,101,99,116,111,114,32,108,101,110,52,52,52,32,46,32,116,109,112,52,52,51,52,52,53,41,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,52,56,57,41,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,35),40,109,97,107,101,45,115,49,54,118,101,99,116,111,114,32,108,101,110,52,55,51,32,46,32,116,109,112,52,55,50,52,55,52,41,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,53,49,56,41,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,35),40,109,97,107,101,45,117,51,50,118,101,99,116,111,114,32,108,101,110,53,48,50,32,46,32,116,109,112,53,48,49,53,48,51,41,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,53,52,55,41,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,35),40,109,97,107,101,45,115,51,50,118,101,99,116,111,114,32,108,101,110,53,51,49,32,46,32,116,109,112,53,51,48,53,51,50,41,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,53,55,54,41,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,35),40,109,97,107,101,45,102,51,50,118,101,99,116,111,114,32,108,101,110,53,54,48,32,46,32,116,109,112,53,53,57,53,54,49,41,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,54,48,54,41,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,35),40,109,97,107,101,45,102,54,52,118,101,99,116,111,114,32,108,101,110,53,57,48,32,46,32,116,109,112,53,56,57,53,57,49,41,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,54,52,48,32,112,54,52,50,32,105,54,52,51,41,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,23),40,108,105,115,116,45,62,117,56,118,101,99,116,111,114,32,108,115,116,54,51,55,41,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,54,53,51,32,112,54,53,53,32,105,54,53,54,41,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,23),40,108,105,115,116,45,62,115,56,118,101,99,116,111,114,32,108,115,116,54,53,48,41,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,54,54,54,32,112,54,54,56,32,105,54,54,57,41,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,24),40,108,105,115,116,45,62,117,49,54,118,101,99,116,111,114,32,108,115,116,54,54,51,41};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,54,55,57,32,112,54,56,49,32,105,54,56,50,41,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,24),40,108,105,115,116,45,62,115,49,54,118,101,99,116,111,114,32,108,115,116,54,55,54,41};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,54,57,50,32,112,54,57,52,32,105,54,57,53,41,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,24),40,108,105,115,116,45,62,117,51,50,118,101,99,116,111,114,32,108,115,116,54,56,57,41};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,55,48,53,32,112,55,48,55,32,105,55,48,56,41,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,24),40,108,105,115,116,45,62,115,51,50,118,101,99,116,111,114,32,108,115,116,55,48,50,41};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,55,49,56,32,112,55,50,48,32,105,55,50,49,41,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,24),40,108,105,115,116,45,62,102,51,50,118,101,99,116,111,114,32,108,115,116,55,49,53,41};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,55,51,49,32,112,55,51,51,32,105,55,51,52,41,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,24),40,108,105,115,116,45,62,102,54,52,118,101,99,116,111,114,32,108,115,116,55,50,56,41};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,18),40,117,56,118,101,99,116,111,114,32,46,32,120,115,55,52,48,41,0,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,18),40,115,56,118,101,99,116,111,114,32,46,32,120,115,55,52,50,41,0,0,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,19),40,117,49,54,118,101,99,116,111,114,32,46,32,120,115,55,52,52,41,0,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,19),40,115,49,54,118,101,99,116,111,114,32,46,32,120,115,55,52,54,41,0,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,19),40,117,51,50,118,101,99,116,111,114,32,46,32,120,115,55,52,56,41,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,19),40,115,51,50,118,101,99,116,111,114,32,46,32,120,115,55,53,48,41,0,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,19),40,102,51,50,118,101,99,116,111,114,32,46,32,120,115,55,53,50,41,0,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,19),40,102,54,52,118,101,99,116,111,114,32,46,32,120,115,55,53,52,41,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,55,55,53,41,0,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,21),40,117,56,118,101,99,116,111,114,45,62,108,105,115,116,32,118,55,55,50,41,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,55,56,50,41,0,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,21),40,115,56,118,101,99,116,111,114,45,62,108,105,115,116,32,118,55,55,57,41,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,55,56,57,41,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,22),40,117,49,54,118,101,99,116,111,114,45,62,108,105,115,116,32,118,55,56,54,41,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,55,57,54,41,0,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,22),40,115,49,54,118,101,99,116,111,114,45,62,108,105,115,116,32,118,55,57,51,41,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,56,48,51,41,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,22),40,117,51,50,118,101,99,116,111,114,45,62,108,105,115,116,32,118,56,48,48,41,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,56,49,48,41,0,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,22),40,115,51,50,118,101,99,116,111,114,45,62,108,105,115,116,32,118,56,48,55,41,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,56,49,55,41,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,22),40,102,51,50,118,101,99,116,111,114,45,62,108,105,115,116,32,118,56,49,52,41,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,56,50,52,41,0,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,22),40,102,54,52,118,101,99,116,111,114,45,62,108,105,115,116,32,118,56,50,49,41,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,16),40,117,56,118,101,99,116,111,114,63,32,120,56,50,56,41};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,16),40,115,56,118,101,99,116,111,114,63,32,120,56,51,48,41};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,17),40,117,49,54,118,101,99,116,111,114,63,32,120,56,51,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,17),40,115,49,54,118,101,99,116,111,114,63,32,120,56,51,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,17),40,117,51,50,118,101,99,116,111,114,63,32,120,56,51,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,17),40,115,51,50,118,101,99,116,111,114,63,32,120,56,51,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,17),40,102,51,50,118,101,99,116,111,114,63,32,120,56,52,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,17),40,102,54,52,118,101,99,116,111,114,63,32,120,56,52,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,13),40,102,95,51,51,55,51,32,118,56,53,50,41,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,25),40,112,97,99,107,45,99,111,112,121,32,116,97,103,56,53,48,32,108,111,99,56,53,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,15),40,102,95,51,51,57,49,32,115,116,114,56,54,48,41,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,28),40,117,110,112,97,99,107,32,116,97,103,56,53,55,32,115,122,56,53,56,32,108,111,99,56,53,57,41,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,15),40,102,95,51,52,50,49,32,115,116,114,56,55,48,41,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,33),40,117,110,112,97,99,107,45,99,111,112,121,32,116,97,103,56,54,55,32,115,122,56,54,56,32,108,111,99,56,54,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,16),40,102,53,48,51,50,32,118,56,52,55,53,48,51,49,41};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,16),40,102,53,48,50,53,32,118,56,52,55,53,48,50,52,41};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,16),40,102,53,48,49,56,32,118,56,52,55,53,48,49,55,41};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,16),40,102,53,48,49,49,32,118,56,52,55,53,48,49,48,41};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,16),40,102,53,48,48,52,32,118,56,52,55,53,48,48,51,41};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,16),40,102,52,57,57,55,32,118,56,52,55,52,57,57,54,41};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,16),40,102,52,57,57,48,32,118,56,52,55,52,57,56,57,41};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,16),40,102,52,57,56,51,32,118,56,52,55,52,57,56,50,41};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,11),40,103,57,50,54,32,99,57,50,56,41,0,0,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,38),40,35,35,115,121,115,35,117,115,101,114,45,114,101,97,100,45,104,111,111,107,32,99,104,97,114,57,49,50,32,112,111,114,116,57,49,51,41,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,48),40,35,35,115,121,115,35,117,115,101,114,45,112,114,105,110,116,45,104,111,111,107,32,120,57,51,50,32,114,101,97,100,97,98,108,101,57,51,51,32,112,111,114,116,57,51,52,41};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,49),40,115,117,98,110,118,101,99,116,111,114,32,118,57,52,55,32,116,57,52,56,32,101,115,57,52,57,32,102,114,111,109,57,53,48,32,116,111,57,53,49,32,108,111,99,57,53,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,32),40,115,117,98,117,56,118,101,99,116,111,114,32,118,57,56,51,32,102,114,111,109,57,56,52,32,116,111,57,56,53,41};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,33),40,115,117,98,117,49,54,118,101,99,116,111,114,32,118,57,56,55,32,102,114,111,109,57,56,56,32,116,111,57,56,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,33),40,115,117,98,117,51,50,118,101,99,116,111,114,32,118,57,57,49,32,102,114,111,109,57,57,50,32,116,111,57,57,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,32),40,115,117,98,115,56,118,101,99,116,111,114,32,118,57,57,53,32,102,114,111,109,57,57,54,32,116,111,57,57,55,41};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,35),40,115,117,98,115,49,54,118,101,99,116,111,114,32,118,57,57,57,32,102,114,111,109,49,48,48,48,32,116,111,49,48,48,49,41,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,36),40,115,117,98,115,51,50,118,101,99,116,111,114,32,118,49,48,48,51,32,102,114,111,109,49,48,48,52,32,116,111,49,48,48,53,41,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,36),40,115,117,98,102,51,50,118,101,99,116,111,114,32,118,49,48,48,55,32,102,114,111,109,49,48,48,56,32,116,111,49,48,48,57,41,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,36),40,115,117,98,102,54,52,118,101,99,116,111,114,32,118,49,48,49,49,32,102,114,111,109,49,48,49,50,32,116,111,49,48,49,51,41,0,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,36),40,119,114,105,116,101,45,117,56,118,101,99,116,111,114,32,118,49,48,50,48,32,46,32,116,109,112,49,48,49,57,49,48,50,49,41,0,0,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,45),40,114,101,97,100,45,117,56,118,101,99,116,111,114,33,32,110,49,48,55,53,32,100,101,115,116,49,48,55,54,32,46,32,116,109,112,49,48,55,52,49,48,55,55,41,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,29),40,114,101,97,100,45,117,56,118,101,99,116,111,114,32,46,32,116,109,112,49,49,48,49,49,49,48,50,41,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,17),40,97,52,49,51,57,32,120,51,52,54,32,105,51,52,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,17),40,97,52,49,54,57,32,120,51,51,49,32,105,51,51,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,17),40,97,52,49,57,57,32,120,51,49,54,32,105,51,49,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,17),40,97,52,50,50,57,32,120,51,48,49,32,105,51,48,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,17),40,97,52,50,53,57,32,120,50,56,54,32,105,50,56,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,17),40,97,52,50,56,57,32,120,50,55,49,32,105,50,55,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,17),40,97,52,51,49,57,32,120,50,53,54,32,105,50,53,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,17),40,97,52,51,52,57,32,120,50,52,49,32,105,50,52,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub367(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub367(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word bv=(C_word )(C_a0);
C_free((void *)C_block_item(bv, 1));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub362(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub362(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int bytes=(int )C_unfix(C_a0);
C_word *buf = (C_word *)C_malloc(bytes + sizeof(C_header));if(buf == NULL) C_return(C_SCHEME_FALSE);C_block_header_init(buf, C_make_header(C_BYTEVECTOR_TYPE, bytes));C_return(buf);
C_ret:
#undef return

return C_r;}

C_noret_decl(f_1558)
static void C_ccall f_1558(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3819)
static void C_ccall f_3819(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1542)
static void C_ccall f_1542(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2179)
static C_word C_fcall f_2179(C_word t0,C_word t1);
C_noret_decl(f_1548)
static void C_ccall f_1548(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3224)
static void C_ccall f_3224(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3813)
static void C_ccall f_3813(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1863)
static void C_ccall f_1863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1536)
static void C_ccall f_1536(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2165)
static void C_ccall f_2165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1530)
static void C_ccall f_1530(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3218)
static void C_ccall f_3218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1879)
static void C_ccall f_1879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1875)
static void C_ccall f_1875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1871)
static void C_ccall f_1871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2700)
static void C_ccall f_2700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2197)
static void C_ccall f_2197(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1887)
static void C_ccall f_1887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1883)
static void C_ccall f_1883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3159)
static void C_ccall f_3159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1899)
static void C_ccall f_1899(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4138)
static void C_ccall f_4138(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1895)
static void C_ccall f_1895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1891)
static void C_ccall f_1891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3033)
static void C_ccall f_3033(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3033)
static void C_ccall f_3033r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3039)
static void C_ccall f_3039(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3039)
static void C_ccall f_3039r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3144)
static void C_fcall f_3144(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3593)
static void C_ccall f_3593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1906)
static void C_ccall f_1906(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1826)
static void C_ccall f_1826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1908)
static void C_fcall f_1908(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1832)
static void C_ccall f_1832(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2902)
static void C_ccall f_2902(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2919)
static void C_ccall f_2919(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3003)
static void C_fcall f_3003(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4170)
static void C_ccall f_4170(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3075)
static void C_ccall f_3075(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4108)
static void C_ccall f_4108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3407)
static void C_fcall f_3407(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3027)
static void C_ccall f_3027(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3027)
static void C_ccall f_3027r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3010)
static void C_ccall f_3010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1524)
static void C_ccall f_1524(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3421)
static void C_ccall f_3421(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1518)
static void C_ccall f_1518(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1512)
static void C_ccall f_1512(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3419)
static void C_fcall f_3419(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f5032)
static void C_ccall f5032(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f4990)
static void C_ccall f4990(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f4997)
static void C_ccall f4997(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f5025)
static void C_ccall f5025(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3195)
static void C_ccall f_3195(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f4983)
static void C_ccall f4983(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3329)
static void C_ccall f_3329(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3323)
static void C_ccall f_3323(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f5011)
static void C_ccall f5011(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f5018)
static void C_ccall f5018(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3189)
static void C_ccall f_3189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3317)
static void C_ccall f_3317(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3311)
static void C_ccall f_3311(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1969)
static void C_ccall f_1969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3305)
static void C_ccall f_3305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1978)
static void C_ccall f_1978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1665)
static void C_ccall f_1665(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1983)
static C_word C_fcall f_1983(C_word t0,C_word t1);
C_noret_decl(f_1924)
static void C_ccall f_1924(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1926)
static void C_ccall f_1926(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1941)
static void C_ccall f_1941(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1941)
static void C_ccall f_1941r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1696)
static void C_ccall f_1696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1698)
static void C_ccall f_1698(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1933)
static void C_ccall f_1933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1623)
static void C_ccall f_1623(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1621)
static void C_ccall f_1621(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3391)
static void C_ccall f_3391(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1633)
static void C_ccall f_1633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3383)
static void C_ccall f_3383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3389)
static void C_fcall f_3389(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f5004)
static void C_ccall f5004(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1657)
static void C_ccall f_1657(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2434)
static void C_ccall f_2434(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2434)
static void C_ccall f_2434r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3045)
static void C_ccall f_3045(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3045)
static void C_ccall f_3045r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3291)
static void C_fcall f_3291(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4140)
static void C_ccall f_4140(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3069)
static void C_ccall f_3069(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3069)
static void C_ccall f_3069r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3063)
static void C_ccall f_3063(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3063)
static void C_ccall f_3063r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2462)
static void C_ccall f_2462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3057)
static void C_ccall f_3057(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3057)
static void C_ccall f_3057r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3051)
static void C_ccall f_3051(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3051)
static void C_ccall f_3051r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3918)
static void C_ccall f_3918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4168)
static void C_ccall f_4168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1763)
static void C_ccall f_1763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1760)
static void C_ccall f_1760(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3373)
static void C_ccall f_3373(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3371)
static void C_fcall f_3371(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3908)
static void C_fcall f_3908(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1787)
static void C_ccall f_1787(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4348)
static void C_ccall f_4348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1795)
static void C_ccall f_1795(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4198)
static void C_ccall f_4198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1732)
static void C_ccall f_1732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2476)
static C_word C_fcall f_2476(C_word t0,C_word t1);
C_noret_decl(f_3487)
static void C_ccall f_3487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1753)
static void C_ccall f_1753(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2494)
static void C_ccall f_2494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4350)
static void C_ccall f_4350(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1705)
static void C_ccall f_1705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1708)
static void C_ccall f_1708(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3495)
static void C_ccall f_3495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3491)
static void C_ccall f_3491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3499)
static void C_ccall f_3499(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2866)
static void C_ccall f_2866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_srfi_2d4_toplevel)
C_externexport void C_ccall C_srfi_2d4_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2890)
static void C_ccall f_2890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2895)
static void C_fcall f_2895(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3555)
static void C_ccall f_3555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2363)
static void C_ccall f_2363(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3559)
static void C_ccall f_3559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3551)
static void C_ccall f_3551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3282)
static void C_ccall f_3282(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2883)
static void C_ccall f_2883(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3276)
static void C_ccall f_3276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2830)
static void C_ccall f_2830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3535)
static void C_ccall f_3535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3539)
static void C_ccall f_3539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3531)
static void C_ccall f_3531(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2823)
static void C_fcall f_2823(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3563)
static void C_ccall f_3563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2335)
static void C_ccall f_2335(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2335)
static void C_ccall f_2335r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3567)
static void C_ccall f_3567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2854)
static void C_ccall f_2854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2859)
static void C_fcall f_2859(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3519)
static void C_ccall f_3519(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3515)
static void C_ccall f_3515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3612)
static void C_fcall f_3612(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3511)
static void C_ccall f_3511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2847)
static void C_ccall f_2847(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3543)
static void C_ccall f_3543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3547)
static void C_ccall f_3547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4230)
static void C_ccall f_4230(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2039)
static void C_ccall f_2039(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2039)
static void C_ccall f_2039r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4378)
static void C_ccall f_4378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4260)
static void C_ccall f_4260(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2395)
static void C_ccall f_2395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2236)
static void C_ccall f_2236(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2236)
static void C_ccall f_2236r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4258)
static void C_ccall f_4258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2775)
static void C_ccall f_2775(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2264)
static void C_ccall f_2264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2001)
static void C_ccall f_2001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3669)
static void C_ccall f_3669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2794)
static void C_ccall f_2794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2533)
static void C_ccall f_2533(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2533)
static void C_ccall f_2533r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4320)
static void C_ccall f_4320(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2787)
static void C_fcall f_2787(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2377)
static C_word C_fcall f_2377(C_word t0,C_word t1);
C_noret_decl(f_2782)
static void C_ccall f_2782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2561)
static void C_ccall f_2561(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1483)
static void C_ccall f_1483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1485)
static void C_fcall f_1485(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2739)
static void C_ccall f_2739(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3623)
static void C_ccall f_3623(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3247)
static void C_ccall f_3247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3659)
static void C_ccall f_3659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3656)
static void C_ccall f_3656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3233)
static void C_fcall f_3233(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3710)
static void C_fcall f_3710(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_4318)
static void C_ccall f_4318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2962)
static void C_ccall f_2962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2758)
static void C_ccall f_2758(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3644)
static void C_ccall f_3644(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3262)
static void C_fcall f_3262(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2076)
static void C_ccall f_2076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2751)
static void C_fcall f_2751(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3440)
static void C_fcall f_3440(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2991)
static void C_ccall f_2991(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2746)
static void C_ccall f_2746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3253)
static void C_ccall f_3253(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2967)
static void C_fcall f_2967(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2067)
static void C_ccall f_2067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3431)
static void C_ccall f_3431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2099)
static void C_ccall f_2099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2998)
static void C_ccall f_2998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3204)
static void C_fcall f_3204(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2081)
static C_word C_fcall f_2081(C_word t0,C_word t1);
C_noret_decl(f_2938)
static void C_ccall f_2938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3843)
static void C_ccall f_3843(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3843)
static void C_ccall f_3843r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4288)
static void C_ccall f_4288(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2955)
static void C_ccall f_2955(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2926)
static void C_ccall f_2926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2278)
static C_word C_fcall f_2278(C_word t0,C_word t1);
C_noret_decl(f_2273)
static void C_ccall f_2273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4012)
static void C_ccall f_4012(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4012)
static void C_ccall f_4012r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3837)
static void C_ccall f_3837(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4290)
static void C_ccall f_4290(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3831)
static void C_ccall f_3831(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3527)
static void C_ccall f_3527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3523)
static void C_ccall f_3523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2818)
static void C_ccall f_2818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2811)
static void C_ccall f_2811(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2974)
static void C_ccall f_2974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2296)
static void C_ccall f_2296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2137)
static void C_ccall f_2137(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2137)
static void C_ccall f_2137r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3507)
static void C_ccall f_3507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3503)
static void C_ccall f_3503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2676)
static void C_fcall f_2676(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3795)
static void C_ccall f_3795(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3335)
static void C_ccall f_3335(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3084)
static void C_fcall f_3084(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2664)
static void C_ccall f_2664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3575)
static void C_ccall f_3575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2578)
static C_word C_fcall f_2578(C_word t0,C_word t1);
C_noret_decl(f_3774)
static void C_ccall f_3774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3571)
static void C_ccall f_3571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2174)
static void C_ccall f_2174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2573)
static void C_fcall f_2573(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3579)
static void C_ccall f_3579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3825)
static void C_ccall f_3825(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2681)
static C_word C_fcall f_2681(C_word t0,C_word t1);
C_noret_decl(f_2931)
static void C_fcall f_2931(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4228)
static void C_ccall f_4228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3114)
static void C_fcall f_3114(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3768)
static void C_ccall f_3768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3895)
static void C_ccall f_3895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3892)
static void C_ccall f_3892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3099)
static void C_ccall f_3099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3105)
static void C_ccall f_3105(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2636)
static void C_ccall f_2636(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2636)
static void C_ccall f_2636r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2597)
static void C_ccall f_2597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1582)
static void C_ccall f_1582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4200)
static void C_ccall f_4200(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4092)
static void C_ccall f_4092(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4092)
static void C_ccall f_4092r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3174)
static void C_fcall f_3174(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3744)
static void C_ccall f_3744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3584)
static void C_ccall f_3584(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1590)
static void C_ccall f_1590(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3165)
static void C_ccall f_3165(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3353)
static void C_ccall f_3353(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3347)
static void C_ccall f_3347(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3341)
static void C_ccall f_3341(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1506)
static void C_ccall f_1506(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1500)
static void C_ccall f_1500(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3807)
static void C_ccall f_3807(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3135)
static void C_ccall f_3135(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4052)
static void C_fcall f_4052(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3801)
static void C_ccall f_3801(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3129)
static void C_ccall f_3129(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_3144)
static void C_fcall trf_3144(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3144(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3144(t0,t1,t2);}

C_noret_decl(trf_1908)
static void C_fcall trf_1908(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1908(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1908(t0,t1,t2,t3);}

C_noret_decl(trf_3003)
static void C_fcall trf_3003(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3003(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3003(t0,t1,t2,t3);}

C_noret_decl(trf_3407)
static void C_fcall trf_3407(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3407(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3407(t0,t1);}

C_noret_decl(trf_3419)
static void C_fcall trf_3419(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3419(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3419(t0,t1,t2,t3);}

C_noret_decl(trf_3389)
static void C_fcall trf_3389(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3389(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3389(t0,t1,t2,t3);}

C_noret_decl(trf_3291)
static void C_fcall trf_3291(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3291(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3291(t0,t1,t2);}

C_noret_decl(trf_3371)
static void C_fcall trf_3371(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3371(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3371(t0,t1,t2);}

C_noret_decl(trf_3908)
static void C_fcall trf_3908(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3908(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3908(t0,t1);}

C_noret_decl(trf_2895)
static void C_fcall trf_2895(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2895(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2895(t0,t1,t2,t3);}

C_noret_decl(trf_2823)
static void C_fcall trf_2823(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2823(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2823(t0,t1,t2,t3);}

C_noret_decl(trf_2859)
static void C_fcall trf_2859(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2859(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2859(t0,t1,t2,t3);}

C_noret_decl(trf_3612)
static void C_fcall trf_3612(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3612(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3612(t0,t1,t2);}

C_noret_decl(trf_2787)
static void C_fcall trf_2787(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2787(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2787(t0,t1,t2,t3);}

C_noret_decl(trf_1485)
static void C_fcall trf_1485(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1485(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1485(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3233)
static void C_fcall trf_3233(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3233(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3233(t0,t1,t2);}

C_noret_decl(trf_3710)
static void C_fcall trf_3710(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3710(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_3710(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_3262)
static void C_fcall trf_3262(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3262(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3262(t0,t1,t2);}

C_noret_decl(trf_2751)
static void C_fcall trf_2751(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2751(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2751(t0,t1,t2,t3);}

C_noret_decl(trf_3440)
static void C_fcall trf_3440(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3440(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3440(t0,t1);}

C_noret_decl(trf_2967)
static void C_fcall trf_2967(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2967(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2967(t0,t1,t2,t3);}

C_noret_decl(trf_3204)
static void C_fcall trf_3204(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3204(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3204(t0,t1,t2);}

C_noret_decl(trf_2676)
static void C_fcall trf_2676(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2676(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2676(t0,t1);}

C_noret_decl(trf_3084)
static void C_fcall trf_3084(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3084(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3084(t0,t1,t2);}

C_noret_decl(trf_2573)
static void C_fcall trf_2573(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2573(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2573(t0,t1);}

C_noret_decl(trf_2931)
static void C_fcall trf_2931(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2931(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2931(t0,t1,t2,t3);}

C_noret_decl(trf_3114)
static void C_fcall trf_3114(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3114(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3114(t0,t1,t2);}

C_noret_decl(trf_3174)
static void C_fcall trf_3174(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3174(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3174(t0,t1,t2);}

C_noret_decl(trf_4052)
static void C_fcall trf_4052(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4052(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4052(t0,t1);}

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

/* k1556 in u8vector-set! in k1481 */
static void C_ccall f_1558(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1558,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1582,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[4];
t4=C_i_check_exact_2(t3,lf[19]);
t5=C_fixnum_less_or_equal_p(C_fix(0),t3);
t6=(C_truep(t5)?C_fixnum_lessp(t3,((C_word*)t0)[6]):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_u_i_u8vector_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]));}
else{
t7=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t2,t7,lf[19],t3,C_fix(0),((C_word*)t0)[6]);}}

/* subs16vector in k3577 in k3573 in k3569 in k3565 in k3561 in k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in k3497 in ... */
static void C_ccall f_3819(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3819,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm:638: subnvector */
f_3710(t1,t2,lf[10],C_fix(2),t3,t4,lf[141]);}

/* f64vector-length in k1481 */
static void C_ccall f_1542(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1542,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[18],lf[17]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_64vector_length(t2));}

/* doloop460 in k2172 in k2163 in k2195 in make-u16vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static C_word C_fcall f_2179(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_u16vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t3=C_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}

/* u8vector-set! in k1481 */
static void C_ccall f_1548(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1548,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[4],lf[19]);
t6=C_u_i_8vector_length(t2);
t7=C_i_check_exact_2(t4,lf[19]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1558,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
/* srfi-4.scm:104: ##sys#error */
t9=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,lf[19],lf[21],t4);}
else{
t9=t8;
f_1558(2,t9,C_SCHEME_UNDEFINED);}}

/* s32vector->list in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3224(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3224,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[14],lf[70]);
t4=C_u_i_s32vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3233,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li70),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3233(t8,t1,C_fix(0));}

/* subs8vector in k3577 in k3573 in k3569 in k3565 in k3561 in k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in k3497 in ... */
static void C_ccall f_3813(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3813,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm:637: subnvector */
f_3710(t1,t2,lf[6],C_fix(1),t3,t4,lf[140]);}

/* k1861 in f64vector-set! in k1481 */
static void C_ccall f_1863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1863,2,t0,t1);}
if(C_truep(C_blockp(((C_word*)t0)[2]))){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_u_i_f64vector_set(((C_word*)t0)[4],((C_word*)t0)[5],t2));}
else{
t2=C_a_i_fix_to_flo(&a,1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_u_i_f64vector_set(((C_word*)t0)[4],((C_word*)t0)[5],t2));}}

/* f32vector-length in k1481 */
static void C_ccall f_1536(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1536,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[16],lf[15]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_32vector_length(t2));}

/* k2163 in k2195 in make-u16vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2165,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2174,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:317: ##sys#check-exact-interval */
f_1485(t2,((C_word*)t0)[2],C_fix(0),C_fix(65535),lf[50]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* s32vector-length in k1481 */
static void C_ccall f_1530(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1530,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[14],lf[13]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_32vector_length(t2));}

/* k3216 in loop in u32vector->list in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3218,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,C_a_u_i_u32vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]),t1));}

/* k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_1879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1879,2,t0,t1);}
t2=C_mutate2((C_word*)lf[36]+1 /* (set! u16vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1883,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4260,a[2]=((C_word)li117),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:206: getter-with-setter */
t5=*((C_word*)lf[154]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,*((C_word*)lf[25]+1),lf[159]);}

/* k1873 in k1869 in k1481 */
static void C_ccall f_1875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1875,2,t0,t1);}
t2=C_mutate2((C_word*)lf[35]+1 /* (set! s8vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1879,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4290,a[2]=((C_word)li118),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:196: getter-with-setter */
t5=*((C_word*)lf[154]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,*((C_word*)lf[23]+1),lf[160]);}

/* k1869 in k1481 */
static void C_ccall f_1871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1871,2,t0,t1);}
t2=C_mutate2((C_word*)lf[34]+1 /* (set! u8vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1875,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4320,a[2]=((C_word)li119),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:186: getter-with-setter */
t5=*((C_word*)lf[154]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,*((C_word*)lf[19]+1),lf[161]);}

/* k2698 in make-f64vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2700,2,t0,t1);}
t2=C_a_i_record2(&a,2,lf[18],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2664,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:382: set-finalizer! */
t5=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,((C_word*)t0)[7]);}
else{
t5=t4;
f_2664(2,t5,C_SCHEME_UNDEFINED);}}
else{
t5=t4;
f_2664(2,t5,C_SCHEME_UNDEFINED);}}

/* k2195 in make-u16vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2197(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2197,2,t0,t1);}
t2=C_a_i_record2(&a,2,lf[8],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2165,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:313: set-finalizer! */
t5=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,((C_word*)t0)[7]);}
else{
t5=t4;
f_2165(2,t5,C_SCHEME_UNDEFINED);}}
else{
t5=t4;
f_2165(2,t5,C_SCHEME_UNDEFINED);}}

/* k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_1887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1887,2,t0,t1);}
t2=C_mutate2((C_word*)lf[38]+1 /* (set! u32vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1891,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4200,a[2]=((C_word)li115),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:226: getter-with-setter */
t5=*((C_word*)lf[154]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,*((C_word*)lf[30]+1),lf[157]);}

/* k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_1883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1883,2,t0,t1);}
t2=C_mutate2((C_word*)lf[37]+1 /* (set! s16vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1887,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4230,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:216: getter-with-setter */
t5=*((C_word*)lf[154]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,*((C_word*)lf[26]+1),lf[158]);}

/* k3157 in loop in u16vector->list in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3159,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_1899(C_word c,C_word t0,C_word t1){
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
C_word t67;
C_word t68;
C_word t69;
C_word t70;
C_word t71;
C_word t72;
C_word t73;
C_word t74;
C_word t75;
C_word ab[189],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1899,2,t0,t1);}
t2=C_mutate2((C_word*)lf[41]+1 /* (set! f64vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1906,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1908,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp);
t5=C_mutate2((C_word*)lf[44]+1 /* (set! release-number-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1926,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[47]+1 /* (set! make-u8vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1941,a[2]=t3,a[3]=t4,a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp));
t7=C_mutate2((C_word*)lf[49]+1 /* (set! make-s8vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2039,a[2]=t3,a[3]=t4,a[4]=((C_word)li23),tmp=(C_word)a,a+=5,tmp));
t8=C_mutate2((C_word*)lf[50]+1 /* (set! make-u16vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2137,a[2]=t3,a[3]=t4,a[4]=((C_word)li25),tmp=(C_word)a,a+=5,tmp));
t9=C_mutate2((C_word*)lf[51]+1 /* (set! make-s16vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2236,a[2]=t3,a[3]=t4,a[4]=((C_word)li27),tmp=(C_word)a,a+=5,tmp));
t10=C_mutate2((C_word*)lf[52]+1 /* (set! make-u32vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2335,a[2]=t3,a[3]=t4,a[4]=((C_word)li29),tmp=(C_word)a,a+=5,tmp));
t11=C_mutate2((C_word*)lf[53]+1 /* (set! make-s32vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2434,a[2]=t3,a[3]=t4,a[4]=((C_word)li31),tmp=(C_word)a,a+=5,tmp));
t12=C_mutate2((C_word*)lf[54]+1 /* (set! make-f32vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2533,a[2]=t3,a[3]=t4,a[4]=((C_word)li33),tmp=(C_word)a,a+=5,tmp));
t13=C_mutate2((C_word*)lf[55]+1 /* (set! make-f64vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2636,a[2]=t3,a[3]=t4,a[4]=((C_word)li35),tmp=(C_word)a,a+=5,tmp));
t14=*((C_word*)lf[47]+1);
t15=C_mutate2((C_word*)lf[56]+1 /* (set! list->u8vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2739,a[2]=t14,a[3]=((C_word)li37),tmp=(C_word)a,a+=4,tmp));
t16=*((C_word*)lf[49]+1);
t17=C_mutate2((C_word*)lf[58]+1 /* (set! list->s8vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2775,a[2]=t16,a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp));
t18=*((C_word*)lf[50]+1);
t19=C_mutate2((C_word*)lf[59]+1 /* (set! list->u16vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2811,a[2]=t18,a[3]=((C_word)li41),tmp=(C_word)a,a+=4,tmp));
t20=*((C_word*)lf[51]+1);
t21=C_mutate2((C_word*)lf[60]+1 /* (set! list->s16vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2847,a[2]=t20,a[3]=((C_word)li43),tmp=(C_word)a,a+=4,tmp));
t22=*((C_word*)lf[52]+1);
t23=C_mutate2((C_word*)lf[61]+1 /* (set! list->u32vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2883,a[2]=t22,a[3]=((C_word)li45),tmp=(C_word)a,a+=4,tmp));
t24=*((C_word*)lf[53]+1);
t25=C_mutate2((C_word*)lf[62]+1 /* (set! list->s32vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2919,a[2]=t24,a[3]=((C_word)li47),tmp=(C_word)a,a+=4,tmp));
t26=*((C_word*)lf[54]+1);
t27=C_mutate2((C_word*)lf[63]+1 /* (set! list->f32vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2955,a[2]=t26,a[3]=((C_word)li49),tmp=(C_word)a,a+=4,tmp));
t28=*((C_word*)lf[55]+1);
t29=C_mutate2((C_word*)lf[64]+1 /* (set! list->f64vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2991,a[2]=t28,a[3]=((C_word)li51),tmp=(C_word)a,a+=4,tmp));
t30=C_mutate2((C_word*)lf[4]+1 /* (set! u8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3027,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t31=C_mutate2((C_word*)lf[6]+1 /* (set! s8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3033,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));
t32=C_mutate2((C_word*)lf[8]+1 /* (set! u16vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3039,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate2((C_word*)lf[10]+1 /* (set! s16vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3045,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t34=C_mutate2((C_word*)lf[12]+1 /* (set! u32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3051,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate2((C_word*)lf[14]+1 /* (set! s32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3057,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t36=C_mutate2((C_word*)lf[16]+1 /* (set! f32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3063,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate2((C_word*)lf[18]+1 /* (set! f64vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3069,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate2((C_word*)lf[65]+1 /* (set! u8vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3075,a[2]=((C_word)li61),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate2((C_word*)lf[66]+1 /* (set! s8vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3105,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate2((C_word*)lf[67]+1 /* (set! u16vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3135,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp));
t41=C_mutate2((C_word*)lf[68]+1 /* (set! s16vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3165,a[2]=((C_word)li67),tmp=(C_word)a,a+=3,tmp));
t42=C_mutate2((C_word*)lf[69]+1 /* (set! u32vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3195,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp));
t43=C_mutate2((C_word*)lf[70]+1 /* (set! s32vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3224,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t44=C_mutate2((C_word*)lf[71]+1 /* (set! f32vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3253,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t45=C_mutate2((C_word*)lf[72]+1 /* (set! f64vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3282,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp));
t46=C_mutate2((C_word*)lf[73]+1 /* (set! u8vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3311,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp));
t47=C_mutate2((C_word*)lf[74]+1 /* (set! s8vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3317,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp));
t48=C_mutate2((C_word*)lf[75]+1 /* (set! u16vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3323,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp));
t49=C_mutate2((C_word*)lf[76]+1 /* (set! s16vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3329,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp));
t50=C_mutate2((C_word*)lf[77]+1 /* (set! u32vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3335,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp));
t51=C_mutate2((C_word*)lf[78]+1 /* (set! s32vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3341,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp));
t52=C_mutate2((C_word*)lf[79]+1 /* (set! f32vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3347,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t53=C_mutate2((C_word*)lf[80]+1 /* (set! f64vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3353,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp));
t54=C_mutate2((C_word*)lf[46]+1 /* (set! number-vector? ...) */,*((C_word*)lf[81]+1));
t55=C_mutate2(&lf[82] /* (set! pack-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3371,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp));
t56=C_mutate2(&lf[84] /* (set! unpack ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3389,a[2]=((C_word)li87),tmp=(C_word)a,a+=3,tmp));
t57=C_mutate2(&lf[86] /* (set! unpack-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3419,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp));
t58=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5032,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp);
t59=C_mutate2((C_word*)lf[88]+1 /* (set! u8vector->blob/shared ...) */,t58);
t60=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5025,a[2]=((C_word)li91),tmp=(C_word)a,a+=3,tmp);
t61=C_mutate2((C_word*)lf[89]+1 /* (set! s8vector->blob/shared ...) */,t60);
t62=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5018,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp);
t63=C_mutate2((C_word*)lf[90]+1 /* (set! u16vector->blob/shared ...) */,t62);
t64=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5011,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp);
t65=C_mutate2((C_word*)lf[91]+1 /* (set! s16vector->blob/shared ...) */,t64);
t66=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5004,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp);
t67=C_mutate2((C_word*)lf[92]+1 /* (set! u32vector->blob/shared ...) */,t66);
t68=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4997,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp);
t69=C_mutate2((C_word*)lf[93]+1 /* (set! s32vector->blob/shared ...) */,t68);
t70=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4990,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp);
t71=C_mutate2((C_word*)lf[94]+1 /* (set! f32vector->blob/shared ...) */,t70);
t72=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4983,a[2]=((C_word)li97),tmp=(C_word)a,a+=3,tmp);
t73=C_mutate2((C_word*)lf[95]+1 /* (set! f64vector->blob/shared ...) */,t72);
t74=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3487,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:544: pack-copy */
f_3371(t74,lf[4],lf[96]);}

/* k4136 in k3577 in k3573 in k3569 in k3565 in k3561 in k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in k3497 in ... */
static void C_ccall f_4138(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_1895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1895,2,t0,t1);}
t2=C_mutate2((C_word*)lf[40]+1 /* (set! f32vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1899,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4140,a[2]=((C_word)li113),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:246: getter-with-setter */
t5=*((C_word*)lf[154]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,*((C_word*)lf[33]+1),lf[155]);}

/* k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_1891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1891,2,t0,t1);}
t2=C_mutate2((C_word*)lf[39]+1 /* (set! s32vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1895,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4170,a[2]=((C_word)li114),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:236: getter-with-setter */
t5=*((C_word*)lf[154]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,*((C_word*)lf[32]+1),lf[156]);}

/* s8vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3033(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_3033r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3033r(t0,t1,t2);}}

static void C_ccall f_3033r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm:433: list->s8vector */
t3=*((C_word*)lf[58]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* u16vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3039(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_3039r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3039r(t0,t1,t2);}}

static void C_ccall f_3039r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm:436: list->u16vector */
t3=*((C_word*)lf[59]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* loop in u16vector->list in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_fcall f_3144(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3144,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_u_i_u16vector_ref(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3159,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_fixnum_plus(t2,C_fix(1));
/* srfi-4.scm:476: loop */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}

/* k3591 in user-read-hook in k3577 in k3573 in k3569 in k3565 in k3561 in k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in ... */
static void C_ccall f_3593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3593,2,t0,t1);}
t2=C_i_symbolp(t1);
t3=(C_truep(t2)?t1:C_SCHEME_FALSE);
t4=C_eqp(t3,lf[129]);
t5=(C_truep(t4)?t4:C_eqp(t3,lf[130]));
if(C_truep(t5)){
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}
else{
t6=C_i_memq(t3,((C_word*)t0)[3]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3612,a[2]=((C_word*)t0)[4],a[3]=((C_word)li98),tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:587: g926 */
t8=t7;
f_3612(t8,((C_word*)t0)[2],t6);}
else{
/* srfi-4.scm:591: ##sys#read-error */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[132]+1)))(5,*((C_word*)lf[132]+1),((C_word*)t0)[2],((C_word*)t0)[4],lf[133],t3);}}}

/* ext-free in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_1906(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1906,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,stub367(C_SCHEME_UNDEFINED,t2));}

/* k1824 in f32vector-set! in k1481 */
static void C_ccall f_1826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1826,2,t0,t1);}
if(C_truep(C_blockp(((C_word*)t0)[2]))){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_u_i_f32vector_set(((C_word*)t0)[4],((C_word*)t0)[5],t2));}
else{
t2=C_a_i_fix_to_flo(&a,1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_u_i_f32vector_set(((C_word*)t0)[4],((C_word*)t0)[5],t2));}}

/* alloc in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_fcall f_1908(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1908,NULL,4,t1,t2,t3,t4);}
if(C_truep(t4)){
t5=t3;
t6=C_i_foreign_fixnum_argumentp(t5);
t7=stub362(C_SCHEME_UNDEFINED,t6);
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
/* srfi-4.scm:272: ##sys#error */
t8=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t1,t2,lf[42],t3);}}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1924,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:273: ##sys#allocate-vector */
t6=*((C_word*)lf[43]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t5,t3,C_SCHEME_TRUE,C_SCHEME_FALSE,C_SCHEME_TRUE);}}

/* f64vector-set! in k1481 */
static void C_ccall f_1832(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1832,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[18],lf[33]);
t6=C_u_i_64vector_length(t2);
t7=C_i_check_number_2(t4,lf[33]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1863,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t9=t3;
t10=C_i_check_exact_2(t9,lf[33]);
t11=C_fixnum_less_or_equal_p(C_fix(0),t9);
t12=(C_truep(t11)?C_fixnum_lessp(t9,t6):C_SCHEME_FALSE);
if(C_truep(t12)){
t13=C_SCHEME_UNDEFINED;
t14=t8;
f_1863(2,t14,t13);}
else{
t13=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t8,t13,lf[33],t9,C_fix(0),t6);}}

/* k2900 in doloop692 in k2888 in list->u32vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2902(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_2895(t4,((C_word*)t0)[5],t2,t3);}

/* list->s32vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2919(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2919,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,lf[14]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2926,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:422: make-s32vector */
t6=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,t4);}

/* doloop731 in k2996 in list->f64vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_fcall f_3003(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3003,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[2]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3010,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
/* srfi-4.scm:424: f64vector-set! */
t7=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t4,((C_word*)t0)[2],t3,t6);}
else{
/* srfi-4.scm:424: ##sys#error-not-a-proper-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(3,*((C_word*)lf[57]+1),t4,((C_word*)t0)[4]);}}}

/* a4169 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_4170(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4170,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[16],lf[40]);
t5=C_u_i_f32vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4198,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=t3;
t8=C_i_check_exact_2(t7,lf[40]);
t9=C_fixnum_less_or_equal_p(C_fix(0),t7);
t10=(C_truep(t9)?C_fixnum_lessp(t7,t5):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_a_u_i_f32vector_ref(&a,2,t2,t3));}
else{
t11=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t6,t11,lf[40],t7,C_fix(0),t5);}}

/* u8vector->list in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3075(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3075,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[4],lf[65]);
t4=C_u_i_u8vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3084,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li60),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3084(t8,t1,C_fix(0));}

/* k4106 in read-u8vector in k3577 in k3573 in k3569 in k3565 in k3561 in k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in ... */
static void C_ccall f_4108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4108,2,t0,t1);}
t2=C_string_to_bytevector(t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record2(&a,2,lf[4],t1));}

/* k3405 */
static void C_fcall f_3407(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3407,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_record2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]));}
else{
/* srfi-4.scm:521: ##sys#error */
t2=*((C_word*)lf[1]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],((C_word*)t0)[5],lf[85],((C_word*)t0)[3],((C_word*)t0)[6],((C_word*)t0)[7]);}}

/* u8vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3027(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_3027r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3027r(t0,t1,t2);}}

static void C_ccall f_3027r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm:430: list->u8vector */
t3=*((C_word*)lf[56]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* k3008 in doloop731 in k2996 in list->f64vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3003(t4,((C_word*)t0)[5],t2,t3);}

/* u32vector-length in k1481 */
static void C_ccall f_1524(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1524,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[12],lf[11]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_32vector_length(t2));}

/* f_3421 in unpack-copy in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3421(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3421,3,t0,t1,t2);}
t3=C_i_check_bytevector_2(t2,((C_word*)t0)[2]);
t4=C_block_size(t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3431,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:527: ##sys#make-blob */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[83]+1)))(3,*((C_word*)lf[83]+1),t6,t5);}

/* s16vector-length in k1481 */
static void C_ccall f_1518(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1518,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[10],lf[9]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_16vector_length(t2));}

/* u16vector-length in k1481 */
static void C_ccall f_1512(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1512,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[8],lf[7]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_16vector_length(t2));}

/* unpack-copy in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_fcall f_3419(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3419,NULL,4,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3421,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=((C_word)li88),tmp=(C_word)a,a+=6,tmp));}

/* f5032 in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f5032(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f5032,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[4],lf[88]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* f4990 in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f4990(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f4990,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[16],lf[94]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* f4997 in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f4997(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f4997,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[14],lf[93]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* f5025 in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f5025(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f5025,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[6],lf[89]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* u32vector->list in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3195(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3195,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[12],lf[69]);
t4=C_u_i_u32vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3204,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li68),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3204(t8,t1,C_fix(0));}

/* f4983 in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f4983(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f4983,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[18],lf[95]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* s16vector? in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3329(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3329,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[10]));}

/* u16vector? in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3323(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3323,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[8]));}

/* f5011 in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f5011(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f5011,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[10],lf[91]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* f5018 in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f5018(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f5018,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[8],lf[90]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* k3187 in loop in s16vector->list in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3189,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* s8vector? in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3317(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3317,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[6]));}

/* u8vector? in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3311(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3311,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[4]));}

/* k1967 in k1999 in make-u8vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_1969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1969,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1978,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:291: ##sys#check-exact-interval */
f_1485(t2,((C_word*)t0)[2],C_fix(0),C_fix(255),lf[47]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* k3303 in loop in f64vector->list in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3305,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,C_a_u_i_f64vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]),t1));}

/* k1976 in k1967 in k1999 in make-u8vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_1978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1978,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1983,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li20),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_1983(t2,C_fix(0)));}

/* s16vector-set! in k1481 */
static void C_ccall f_1665(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1665,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[10],lf[25]);
t6=C_u_i_16vector_length(t2);
t7=C_i_check_exact_2(t4,lf[25]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1696,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t9=t3;
t10=C_i_check_exact_2(t9,lf[25]);
t11=C_fixnum_less_or_equal_p(C_fix(0),t9);
t12=(C_truep(t11)?C_fixnum_lessp(t9,t6):C_SCHEME_FALSE);
if(C_truep(t12)){
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_u_i_s16vector_set(t2,t3,t4));}
else{
t13=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t8,t13,lf[25],t9,C_fix(0),t6);}}

/* doloop402 in k1976 in k1967 in k1999 in make-u8vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static C_word C_fcall f_1983(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_u8vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t3=C_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}

/* k1922 in alloc in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_1924(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_string_to_bytevector(t1);
t3=t1;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* release-number-vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_1926(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1926,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1933,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:279: number-vector? */
t4=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* make-u8vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_1941(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_1941r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1941r(t0,t1,t2,t3);}}

static void C_ccall f_1941r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(8);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=t5;
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=t10;
t12=C_i_nullp(t8);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t14=C_i_nullp(t13);
t15=(C_truep(t14)?C_SCHEME_TRUE:C_i_car(t13));
t16=t15;
t17=C_i_nullp(t13);
t18=(C_truep(t17)?C_SCHEME_END_OF_LIST:C_i_cdr(t13));
t19=C_i_check_exact_2(t2,lf[47]);
t20=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2001,a[2]=t6,a[3]=t2,a[4]=t1,a[5]=t11,a[6]=t16,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:286: alloc */
f_1908(t20,lf[47],t2,t11);}

/* k1694 in s16vector-set! in k1481 */
static void C_ccall f_1696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_u_i_s16vector_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]));}

/* u32vector-set! in k1481 */
static void C_ccall f_1698(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1698,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[12],lf[26]);
t6=C_u_i_32vector_length(t2);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1705,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm:134: ##sys#check-integer */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[29]+1)))(4,*((C_word*)lf[29]+1),t7,t4,lf[26]);}

/* k1931 in release-number-vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_1933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub367(C_SCHEME_UNDEFINED,t3));}
else{
/* srfi-4.scm:281: ##sys#error */
t2=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[44],lf[45],((C_word*)t0)[3]);}}

/* u16vector-set! in k1481 */
static void C_ccall f_1623(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1623,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[8],lf[23]);
t6=C_u_i_16vector_length(t2);
t7=C_i_check_exact_2(t4,lf[23]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1633,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
/* srfi-4.scm:120: ##sys#error */
t9=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,lf[23],lf[24],t4);}
else{
t9=t8;
f_1633(2,t9,C_SCHEME_UNDEFINED);}}

/* k1619 in s8vector-set! in k1481 */
static void C_ccall f_1621(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_u_i_s8vector_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]));}

/* f_3391 in unpack in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3391(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3391,3,t0,t1,t2);}
t3=C_i_check_bytevector_2(t2,((C_word*)t0)[2]);
t4=C_block_size(t2);
t5=t4;
t6=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[3]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3407,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=t5,a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t6)){
t8=t7;
f_3407(t8,t6);}
else{
t8=C_fixnum_modulo(t5,((C_word*)t0)[3]);
t9=t7;
f_3407(t9,C_eqp(C_fix(0),t8));}}

/* k1631 in u16vector-set! in k1481 */
static void C_ccall f_1633(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1633,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1657,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[4];
t4=C_i_check_exact_2(t3,lf[23]);
t5=C_fixnum_less_or_equal_p(C_fix(0),t3);
t6=(C_truep(t5)?C_fixnum_lessp(t3,((C_word*)t0)[6]):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_u_i_u16vector_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]));}
else{
t7=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t2,t7,lf[23],t3,C_fix(0),((C_word*)t0)[6]);}}

/* k3381 */
static void C_ccall f_3383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_copy_block(((C_word*)t0)[3],t1));}

/* unpack in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_fcall f_3389(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3389,NULL,4,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3391,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=((C_word)li86),tmp=(C_word)a,a+=6,tmp));}

/* f5004 in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f5004(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f5004,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[12],lf[92]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* k1655 in k1631 in u16vector-set! in k1481 */
static void C_ccall f_1657(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_u_i_u16vector_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]));}

/* make-s32vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2434(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_2434r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2434r(t0,t1,t2,t3);}}

static void C_ccall f_2434r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(8);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=t5;
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=t10;
t12=C_i_nullp(t8);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t14=C_i_nullp(t13);
t15=(C_truep(t14)?C_SCHEME_TRUE:C_i_car(t13));
t16=t15;
t17=C_i_nullp(t13);
t18=(C_truep(t17)?C_SCHEME_END_OF_LIST:C_i_cdr(t13));
t19=C_i_check_exact_2(t2,lf[53]);
t20=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2494,a[2]=t6,a[3]=t2,a[4]=t1,a[5]=t11,a[6]=t16,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t21=C_fixnum_shift_left(t2,C_fix(2));
/* srfi-4.scm:351: alloc */
f_1908(t20,lf[53],t21,t11);}

/* s16vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3045(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_3045r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3045r(t0,t1,t2);}}

static void C_ccall f_3045r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm:439: list->s16vector */
t3=*((C_word*)lf[60]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* loop in f64vector->list in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_fcall f_3291(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3291,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3305,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_fixnum_plus(t2,C_fix(1));
/* srfi-4.scm:481: loop */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* a4139 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_4140(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4140,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[18],lf[41]);
t5=C_u_i_f64vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4168,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=t3;
t8=C_i_check_exact_2(t7,lf[41]);
t9=C_fixnum_less_or_equal_p(C_fix(0),t7);
t10=(C_truep(t9)?C_fixnum_lessp(t7,t5):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_a_u_i_f64vector_ref(&a,2,t2,t3));}
else{
t11=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t6,t11,lf[41],t7,C_fix(0),t5);}}

/* f64vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3069(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_3069r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3069r(t0,t1,t2);}}

static void C_ccall f_3069r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm:451: list->f64vector */
t3=*((C_word*)lf[64]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* f32vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3063(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_3063r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3063r(t0,t1,t2);}}

static void C_ccall f_3063r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm:448: list->f32vector */
t3=*((C_word*)lf[63]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* k2460 in k2492 in make-s32vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2462(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2462,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=C_i_check_exact_2(((C_word*)t0)[2],lf[53]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2476,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word)li30),tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_2476(t3,C_fix(0)));}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* s32vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3057(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_3057r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3057r(t0,t1,t2);}}

static void C_ccall f_3057r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm:445: list->s32vector */
t3=*((C_word*)lf[62]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* u32vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3051(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_3051r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3051r(t0,t1,t2);}}

static void C_ccall f_3051r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm:442: list->u32vector */
t3=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* k3916 in k3906 in k3893 in k3890 in write-u8vector in k3577 in k3573 in k3569 in k3565 in k3561 in k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in ... */
static void C_ccall f_3918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(t1,C_fix(1));
/* srfi-4.scm:646: g1056 */
t3=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,((C_word*)t0)[3],((C_word*)t0)[4],t2);}

/* k4166 in a4139 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_4168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4168,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_u_i_f64vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* k1761 in k1758 in s32vector-set! in k1481 */
static void C_ccall f_1763(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1763,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1787,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[4];
t4=C_i_check_exact_2(t3,lf[30]);
t5=C_fixnum_less_or_equal_p(C_fix(0),t3);
t6=(C_truep(t5)?C_fixnum_lessp(t3,((C_word*)t0)[6]):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_u_i_s32vector_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]));}
else{
t7=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t2,t7,lf[30],t3,C_fix(0),((C_word*)t0)[6]);}}

/* k1758 in s32vector-set! in k1481 */
static void C_ccall f_1760(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1760,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1763,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fits_in_int_p(((C_word*)t0)[5]))){
t3=t2;
f_1763(2,t3,C_SCHEME_UNDEFINED);}
else{
/* srfi-4.scm:147: ##sys#error */
t3=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[30],lf[31],((C_word*)t0)[5]);}}

/* f_3373 in pack-copy in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3373(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3373,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_slot(t2,C_fix(1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3383,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_block_size(t5);
/* srfi-4.scm:511: ##sys#make-blob */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[83]+1)))(3,*((C_word*)lf[83]+1),t6,t7);}

/* pack-copy in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_fcall f_3371(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3371,NULL,3,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3373,a[2]=t2,a[3]=t3,a[4]=((C_word)li84),tmp=(C_word)a,a+=5,tmp));}

/* k3906 in k3893 in k3890 in write-u8vector in k3577 in k3573 in k3569 in k3565 in k3561 in k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in ... */
static void C_fcall f_3908(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3908,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(1));
/* srfi-4.scm:646: g1056 */
t3=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,((C_word*)t0)[4],((C_word*)t0)[5],t2);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3918,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:655: subu8vector */
t3=*((C_word*)lf[137]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[2],((C_word*)t0)[7],((C_word*)t0)[6]);}
else{
/* srfi-4.scm:655: subu8vector */
t3=*((C_word*)lf[137]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[2],((C_word*)t0)[7],((C_word*)t0)[8]);}}}

/* k1785 in k1761 in k1758 in s32vector-set! in k1481 */
static void C_ccall f_1787(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_u_i_s32vector_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]));}

/* k4346 in a4319 in k1869 in k1481 */
static void C_ccall f_4348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_u_i_s8vector_ref(((C_word*)t0)[3],((C_word*)t0)[4]));}

/* f32vector-set! in k1481 */
static void C_ccall f_1795(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1795,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[16],lf[32]);
t6=C_u_i_32vector_length(t2);
t7=C_i_check_number_2(t4,lf[32]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1826,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t9=t3;
t10=C_i_check_exact_2(t9,lf[32]);
t11=C_fixnum_less_or_equal_p(C_fix(0),t9);
t12=(C_truep(t11)?C_fixnum_lessp(t9,t6):C_SCHEME_FALSE);
if(C_truep(t12)){
t13=C_SCHEME_UNDEFINED;
t14=t8;
f_1826(2,t14,t13);}
else{
t13=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t8,t13,lf[32],t9,C_fix(0),t6);}}

/* k4196 in a4169 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_4198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4198,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_u_i_f32vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* k1730 in k1706 in k1703 in u32vector-set! in k1481 */
static void C_ccall f_1732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_u_i_u32vector_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]));}

/* doloop547 in k2460 in k2492 in make-s32vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static C_word C_fcall f_2476(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_s32vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t3=C_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}

/* k3485 in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3487(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3487,2,t0,t1);}
t2=C_mutate2((C_word*)lf[96]+1 /* (set! u8vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3491,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:545: pack-copy */
f_3371(t3,lf[6],lf[97]);}

/* s32vector-set! in k1481 */
static void C_ccall f_1753(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1753,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[14],lf[30]);
t6=C_u_i_32vector_length(t2);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1760,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm:145: ##sys#check-integer */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[29]+1)))(4,*((C_word*)lf[29]+1),t7,t4,lf[30]);}

/* k2492 in make-s32vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2494,2,t0,t1);}
t2=C_a_i_record2(&a,2,lf[14],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2462,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:352: set-finalizer! */
t5=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,((C_word*)t0)[7]);}
else{
t5=t4;
f_2462(2,t5,C_SCHEME_UNDEFINED);}}
else{
t5=t4;
f_2462(2,t5,C_SCHEME_UNDEFINED);}}

/* a4349 in k1481 */
static void C_ccall f_4350(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4350,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[4],lf[34]);
t5=C_u_i_s8vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4378,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=t3;
t8=C_i_check_exact_2(t7,lf[34]);
t9=C_fixnum_less_or_equal_p(C_fix(0),t7);
t10=(C_truep(t9)?C_fixnum_lessp(t7,t5):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_u_i_u8vector_ref(t2,t3));}
else{
t11=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t6,t11,lf[34],t7,C_fix(0),t5);}}

/* k1703 in u32vector-set! in k1481 */
static void C_ccall f_1705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1705,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1708,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_negativep(((C_word*)t0)[5]))){
/* srfi-4.scm:136: ##sys#error */
t3=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[26],lf[27],((C_word*)t0)[5]);}
else{
if(C_truep(C_fits_in_unsigned_int_p(((C_word*)t0)[5]))){
t3=C_SCHEME_UNDEFINED;
t4=t2;
f_1708(2,t4,t3);}
else{
/* srfi-4.scm:138: ##sys#error */
t3=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[26],lf[28],((C_word*)t0)[5]);}}}

/* k1706 in k1703 in u32vector-set! in k1481 */
static void C_ccall f_1708(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1708,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1732,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[4];
t4=C_i_check_exact_2(t3,lf[26]);
t5=C_fixnum_less_or_equal_p(C_fix(0),t3);
t6=(C_truep(t5)?C_fixnum_lessp(t3,((C_word*)t0)[6]):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_u_i_u32vector_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]));}
else{
t7=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t2,t7,lf[26],t3,C_fix(0),((C_word*)t0)[6]);}}

/* k3493 in k3489 in k3485 in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3495,2,t0,t1);}
t2=C_mutate2((C_word*)lf[98]+1 /* (set! u16vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3499,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:547: pack-copy */
f_3371(t3,lf[10],lf[99]);}

/* k3489 in k3485 in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3491,2,t0,t1);}
t2=C_mutate2((C_word*)lf[97]+1 /* (set! s8vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3495,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:546: pack-copy */
f_3371(t3,lf[8],lf[98]);}

/* k3497 in k3493 in k3489 in k3485 in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3499(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3499,2,t0,t1);}
t2=C_mutate2((C_word*)lf[99]+1 /* (set! s16vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3503,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:548: pack-copy */
f_3371(t3,lf[12],lf[100]);}

/* k2864 in doloop679 in k2852 in list->s16vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_2859(t4,((C_word*)t0)[5],t2,t3);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_srfi_2d4_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_srfi_2d4_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("srfi_2d4_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1390)){
C_save(t1);
C_rereclaim2(1390*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,163);
lf[1]=C_h_intern(&lf[1],9,"\003syserror");
lf[2]=C_decode_literal(C_heaptop,"\376B\000\000&numeric value is not in expected range");
lf[3]=C_h_intern(&lf[3],15,"u8vector-length");
lf[4]=C_h_intern(&lf[4],8,"u8vector");
lf[5]=C_h_intern(&lf[5],15,"s8vector-length");
lf[6]=C_h_intern(&lf[6],8,"s8vector");
lf[7]=C_h_intern(&lf[7],16,"u16vector-length");
lf[8]=C_h_intern(&lf[8],9,"u16vector");
lf[9]=C_h_intern(&lf[9],16,"s16vector-length");
lf[10]=C_h_intern(&lf[10],9,"s16vector");
lf[11]=C_h_intern(&lf[11],16,"u32vector-length");
lf[12]=C_h_intern(&lf[12],9,"u32vector");
lf[13]=C_h_intern(&lf[13],16,"s32vector-length");
lf[14]=C_h_intern(&lf[14],9,"s32vector");
lf[15]=C_h_intern(&lf[15],16,"f32vector-length");
lf[16]=C_h_intern(&lf[16],9,"f32vector");
lf[17]=C_h_intern(&lf[17],16,"f64vector-length");
lf[18]=C_h_intern(&lf[18],9,"f64vector");
lf[19]=C_h_intern(&lf[19],13,"u8vector-set!");
lf[20]=C_h_intern(&lf[20],14,"\003syserror-hook");
lf[21]=C_decode_literal(C_heaptop,"\376B\000\000\034argument may not be negative");
lf[22]=C_h_intern(&lf[22],13,"s8vector-set!");
lf[23]=C_h_intern(&lf[23],14,"u16vector-set!");
lf[24]=C_decode_literal(C_heaptop,"\376B\000\000\034argument may not be negative");
lf[25]=C_h_intern(&lf[25],14,"s16vector-set!");
lf[26]=C_h_intern(&lf[26],14,"u32vector-set!");
lf[27]=C_decode_literal(C_heaptop,"\376B\000\000\034argument may not be negative");
lf[28]=C_decode_literal(C_heaptop,"\376B\000\000\036argument exceeds integer range");
lf[29]=C_h_intern(&lf[29],17,"\003syscheck-integer");
lf[30]=C_h_intern(&lf[30],14,"s32vector-set!");
lf[31]=C_decode_literal(C_heaptop,"\376B\000\000\036argument exceeds integer range");
lf[32]=C_h_intern(&lf[32],14,"f32vector-set!");
lf[33]=C_h_intern(&lf[33],14,"f64vector-set!");
lf[34]=C_h_intern(&lf[34],12,"u8vector-ref");
lf[35]=C_h_intern(&lf[35],12,"s8vector-ref");
lf[36]=C_h_intern(&lf[36],13,"u16vector-ref");
lf[37]=C_h_intern(&lf[37],13,"s16vector-ref");
lf[38]=C_h_intern(&lf[38],13,"u32vector-ref");
lf[39]=C_h_intern(&lf[39],13,"s32vector-ref");
lf[40]=C_h_intern(&lf[40],13,"f32vector-ref");
lf[41]=C_h_intern(&lf[41],13,"f64vector-ref");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000:not enough memory - cannot allocate external number vector");
lf[43]=C_h_intern(&lf[43],19,"\003sysallocate-vector");
lf[44]=C_h_intern(&lf[44],21,"release-number-vector");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\047bad argument type - not a number vector");
lf[46]=C_h_intern(&lf[46],14,"number-vector\077");
lf[47]=C_h_intern(&lf[47],13,"make-u8vector");
lf[48]=C_h_intern(&lf[48],14,"set-finalizer!");
lf[49]=C_h_intern(&lf[49],13,"make-s8vector");
lf[50]=C_h_intern(&lf[50],14,"make-u16vector");
lf[51]=C_h_intern(&lf[51],14,"make-s16vector");
lf[52]=C_h_intern(&lf[52],14,"make-u32vector");
lf[53]=C_h_intern(&lf[53],14,"make-s32vector");
lf[54]=C_h_intern(&lf[54],14,"make-f32vector");
lf[55]=C_h_intern(&lf[55],14,"make-f64vector");
lf[56]=C_h_intern(&lf[56],14,"list->u8vector");
lf[57]=C_h_intern(&lf[57],27,"\003syserror-not-a-proper-list");
lf[58]=C_h_intern(&lf[58],14,"list->s8vector");
lf[59]=C_h_intern(&lf[59],15,"list->u16vector");
lf[60]=C_h_intern(&lf[60],15,"list->s16vector");
lf[61]=C_h_intern(&lf[61],15,"list->u32vector");
lf[62]=C_h_intern(&lf[62],15,"list->s32vector");
lf[63]=C_h_intern(&lf[63],15,"list->f32vector");
lf[64]=C_h_intern(&lf[64],15,"list->f64vector");
lf[65]=C_h_intern(&lf[65],14,"u8vector->list");
lf[66]=C_h_intern(&lf[66],14,"s8vector->list");
lf[67]=C_h_intern(&lf[67],15,"u16vector->list");
lf[68]=C_h_intern(&lf[68],15,"s16vector->list");
lf[69]=C_h_intern(&lf[69],15,"u32vector->list");
lf[70]=C_h_intern(&lf[70],15,"s32vector->list");
lf[71]=C_h_intern(&lf[71],15,"f32vector->list");
lf[72]=C_h_intern(&lf[72],15,"f64vector->list");
lf[73]=C_h_intern(&lf[73],9,"u8vector\077");
lf[74]=C_h_intern(&lf[74],9,"s8vector\077");
lf[75]=C_h_intern(&lf[75],10,"u16vector\077");
lf[76]=C_h_intern(&lf[76],10,"s16vector\077");
lf[77]=C_h_intern(&lf[77],10,"u32vector\077");
lf[78]=C_h_intern(&lf[78],10,"s32vector\077");
lf[79]=C_h_intern(&lf[79],10,"f32vector\077");
lf[80]=C_h_intern(&lf[80],10,"f64vector\077");
lf[81]=C_h_intern(&lf[81],18,"\003syssrfi-4-vector\077");
lf[83]=C_h_intern(&lf[83],13,"\003sysmake-blob");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000+blob does not have correct size for packing");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000+blob does not have correct size for packing");
lf[88]=C_h_intern(&lf[88],21,"u8vector->blob/shared");
lf[89]=C_h_intern(&lf[89],21,"s8vector->blob/shared");
lf[90]=C_h_intern(&lf[90],22,"u16vector->blob/shared");
lf[91]=C_h_intern(&lf[91],22,"s16vector->blob/shared");
lf[92]=C_h_intern(&lf[92],22,"u32vector->blob/shared");
lf[93]=C_h_intern(&lf[93],22,"s32vector->blob/shared");
lf[94]=C_h_intern(&lf[94],22,"f32vector->blob/shared");
lf[95]=C_h_intern(&lf[95],22,"f64vector->blob/shared");
lf[96]=C_h_intern(&lf[96],14,"u8vector->blob");
lf[97]=C_h_intern(&lf[97],14,"s8vector->blob");
lf[98]=C_h_intern(&lf[98],15,"u16vector->blob");
lf[99]=C_h_intern(&lf[99],15,"s16vector->blob");
lf[100]=C_h_intern(&lf[100],15,"u32vector->blob");
lf[101]=C_h_intern(&lf[101],15,"s32vector->blob");
lf[102]=C_h_intern(&lf[102],15,"f32vector->blob");
lf[103]=C_h_intern(&lf[103],15,"f64vector->blob");
lf[104]=C_h_intern(&lf[104],21,"blob->u8vector/shared");
lf[105]=C_h_intern(&lf[105],21,"blob->s8vector/shared");
lf[106]=C_h_intern(&lf[106],22,"blob->u16vector/shared");
lf[107]=C_h_intern(&lf[107],22,"blob->s16vector/shared");
lf[108]=C_h_intern(&lf[108],22,"blob->u32vector/shared");
lf[109]=C_h_intern(&lf[109],22,"blob->s32vector/shared");
lf[110]=C_h_intern(&lf[110],22,"blob->f32vector/shared");
lf[111]=C_h_intern(&lf[111],22,"blob->f64vector/shared");
lf[112]=C_h_intern(&lf[112],14,"blob->u8vector");
lf[113]=C_h_intern(&lf[113],14,"blob->s8vector");
lf[114]=C_h_intern(&lf[114],15,"blob->u16vector");
lf[115]=C_h_intern(&lf[115],15,"blob->s16vector");
lf[116]=C_h_intern(&lf[116],15,"blob->u32vector");
lf[117]=C_h_intern(&lf[117],15,"blob->s32vector");
lf[118]=C_h_intern(&lf[118],15,"blob->f32vector");
lf[119]=C_h_intern(&lf[119],15,"blob->f64vector");
lf[120]=C_h_intern(&lf[120],18,"\003sysuser-read-hook");
lf[121]=C_h_intern(&lf[121],2,"u8");
lf[122]=C_h_intern(&lf[122],2,"s8");
lf[123]=C_h_intern(&lf[123],3,"u16");
lf[124]=C_h_intern(&lf[124],3,"s16");
lf[125]=C_h_intern(&lf[125],3,"u32");
lf[126]=C_h_intern(&lf[126],3,"s32");
lf[127]=C_h_intern(&lf[127],3,"f32");
lf[128]=C_h_intern(&lf[128],3,"f64");
lf[129]=C_h_intern(&lf[129],1,"f");
lf[130]=C_h_intern(&lf[130],1,"F");
lf[131]=C_h_intern(&lf[131],4,"read");
lf[132]=C_h_intern(&lf[132],14,"\003sysread-error");
lf[133]=C_decode_literal(C_heaptop,"\376B\000\000\031illegal bytevector syntax");
lf[134]=C_h_intern(&lf[134],19,"\003sysuser-print-hook");
lf[135]=C_h_intern(&lf[135],9,"\003sysprint");
lf[137]=C_h_intern(&lf[137],11,"subu8vector");
lf[138]=C_h_intern(&lf[138],12,"subu16vector");
lf[139]=C_h_intern(&lf[139],12,"subu32vector");
lf[140]=C_h_intern(&lf[140],11,"subs8vector");
lf[141]=C_h_intern(&lf[141],12,"subs16vector");
lf[142]=C_h_intern(&lf[142],12,"subs32vector");
lf[143]=C_h_intern(&lf[143],12,"subf32vector");
lf[144]=C_h_intern(&lf[144],12,"subf64vector");
lf[145]=C_h_intern(&lf[145],14,"write-u8vector");
lf[146]=C_h_intern(&lf[146],19,"\003sysstandard-output");
lf[147]=C_h_intern(&lf[147],14,"read-u8vector!");
lf[148]=C_h_intern(&lf[148],18,"\003sysstandard-input");
lf[149]=C_h_intern(&lf[149],16,"\003sysread-string!");
lf[150]=C_h_intern(&lf[150],13,"read-u8vector");
lf[151]=C_h_intern(&lf[151],20,"\003sysread-string/port");
lf[152]=C_h_intern(&lf[152],17,"register-feature!");
lf[153]=C_h_intern(&lf[153],6,"srfi-4");
lf[154]=C_h_intern(&lf[154],18,"getter-with-setter");
lf[155]=C_decode_literal(C_heaptop,"\376B\000\000\023(f64vector-ref v i)");
lf[156]=C_decode_literal(C_heaptop,"\376B\000\000\023(f32vector-ref v i)");
lf[157]=C_decode_literal(C_heaptop,"\376B\000\000\023(s32vector-ref v i)");
lf[158]=C_decode_literal(C_heaptop,"\376B\000\000\023(u32vector-ref v i)");
lf[159]=C_decode_literal(C_heaptop,"\376B\000\000\023(s16vector-ref v i)");
lf[160]=C_decode_literal(C_heaptop,"\376B\000\000\023(u16vector-ref v i)");
lf[161]=C_decode_literal(C_heaptop,"\376B\000\000\022(s8vector-ref v i)");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\000\022(u8vector-ref v i)");
C_register_lf2(lf,163,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1483,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2888 in list->u32vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2890,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2895,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li44),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2895(t6,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop692 in k2888 in list->u32vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_fcall f_2895(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2895,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[2]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2902,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
/* srfi-4.scm:421: u32vector-set! */
t7=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t4,((C_word*)t0)[2],t3,t6);}
else{
/* srfi-4.scm:421: ##sys#error-not-a-proper-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(3,*((C_word*)lf[57]+1),t4,((C_word*)t0)[4]);}}}

/* k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in k3497 in k3493 in k3489 in k3485 in k1897 in k1893 in k1889 in k1885 in ... */
static void C_ccall f_3555(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3555,2,t0,t1);}
t2=C_mutate2((C_word*)lf[113]+1 /* (set! blob->s8vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3559,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:564: unpack-copy */
f_3419(t3,lf[8],C_fix(2),lf[114]);}

/* k2361 in k2393 in make-u32vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2363(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2363,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=C_i_check_exact_2(((C_word*)t0)[2],lf[52]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2377,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word)li28),tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_2377(t3,C_fix(0)));}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in k3497 in k3493 in k3489 in k3485 in k1897 in k1893 in k1889 in ... */
static void C_ccall f_3559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3559,2,t0,t1);}
t2=C_mutate2((C_word*)lf[114]+1 /* (set! blob->u16vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3563,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:565: unpack-copy */
f_3419(t3,lf[10],C_fix(2),lf[115]);}

/* k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in k3497 in k3493 in k3489 in k3485 in k1897 in k1893 in k1889 in k1885 in k1881 in ... */
static void C_ccall f_3551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3551,2,t0,t1);}
t2=C_mutate2((C_word*)lf[112]+1 /* (set! blob->u8vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3555,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:563: unpack-copy */
f_3419(t3,lf[6],C_SCHEME_TRUE,lf[113]);}

/* f64vector->list in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3282(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3282,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[18],lf[72]);
t4=C_u_i_f64vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3291,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li74),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3291(t8,t1,C_fix(0));}

/* list->u32vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2883(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2883,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,lf[12]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2890,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:421: make-u32vector */
t6=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,t4);}

/* k3274 in loop in f32vector->list in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3276,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,C_a_u_i_f32vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]),t1));}

/* k2828 in doloop666 in k2816 in list->u16vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2830(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_2823(t4,((C_word*)t0)[5],t2,t3);}

/* k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in k3497 in k3493 in k3489 in k3485 in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 in ... */
static void C_ccall f_3535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3535,2,t0,t1);}
t2=C_mutate2((C_word*)lf[108]+1 /* (set! blob->u32vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3539,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:558: unpack */
f_3389(t3,lf[14],C_fix(4),lf[109]);}

/* k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in k3497 in k3493 in k3489 in k3485 in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in ... */
static void C_ccall f_3539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3539,2,t0,t1);}
t2=C_mutate2((C_word*)lf[109]+1 /* (set! blob->s32vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3543,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:559: unpack */
f_3389(t3,lf[16],C_fix(4),lf[110]);}

/* k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in k3497 in k3493 in k3489 in k3485 in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3531(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3531,2,t0,t1);}
t2=C_mutate2((C_word*)lf[107]+1 /* (set! blob->s16vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3535,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:557: unpack */
f_3389(t3,lf[12],C_fix(4),lf[108]);}

/* doloop666 in k2816 in list->u16vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_fcall f_2823(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2823,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[2]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2830,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
/* srfi-4.scm:419: u16vector-set! */
t7=*((C_word*)lf[23]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t4,((C_word*)t0)[2],t3,t6);}
else{
/* srfi-4.scm:419: ##sys#error-not-a-proper-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(3,*((C_word*)lf[57]+1),t4,((C_word*)t0)[4]);}}}

/* k3561 in k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in k3497 in k3493 in k3489 in k3485 in k1897 in k1893 in ... */
static void C_ccall f_3563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3563,2,t0,t1);}
t2=C_mutate2((C_word*)lf[115]+1 /* (set! blob->s16vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3567,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:566: unpack-copy */
f_3419(t3,lf[12],C_fix(4),lf[116]);}

/* make-u32vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2335(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
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
C_word *a=C_alloc(8);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=t5;
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=t10;
t12=C_i_nullp(t8);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t14=C_i_nullp(t13);
t15=(C_truep(t14)?C_SCHEME_TRUE:C_i_car(t13));
t16=t15;
t17=C_i_nullp(t13);
t18=(C_truep(t17)?C_SCHEME_END_OF_LIST:C_i_cdr(t13));
t19=C_i_check_exact_2(t2,lf[52]);
t20=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2395,a[2]=t6,a[3]=t2,a[4]=t1,a[5]=t11,a[6]=t16,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t21=C_fixnum_shift_left(t2,C_fix(2));
/* srfi-4.scm:338: alloc */
f_1908(t20,lf[52],t21,t11);}

/* k3565 in k3561 in k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in k3497 in k3493 in k3489 in k3485 in k1897 in ... */
static void C_ccall f_3567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3567,2,t0,t1);}
t2=C_mutate2((C_word*)lf[116]+1 /* (set! blob->u32vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3571,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:567: unpack-copy */
f_3419(t3,lf[14],C_fix(4),lf[117]);}

/* k2852 in list->s16vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2854(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2854,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2859,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li42),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2859(t6,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop679 in k2852 in list->s16vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_fcall f_2859(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2859,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[2]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2866,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
/* srfi-4.scm:420: s16vector-set! */
t7=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t4,((C_word*)t0)[2],t3,t6);}
else{
/* srfi-4.scm:420: ##sys#error-not-a-proper-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(3,*((C_word*)lf[57]+1),t4,((C_word*)t0)[4]);}}}

/* k3517 in k3513 in k3509 in k3505 in k3501 in k3497 in k3493 in k3489 in k3485 in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3519(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3519,2,t0,t1);}
t2=C_mutate2((C_word*)lf[104]+1 /* (set! blob->u8vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3523,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:554: unpack */
f_3389(t3,lf[6],C_SCHEME_TRUE,lf[105]);}

/* k3513 in k3509 in k3505 in k3501 in k3497 in k3493 in k3489 in k3485 in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3515,2,t0,t1);}
t2=C_mutate2((C_word*)lf[103]+1 /* (set! f64vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3519,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:553: unpack */
f_3389(t3,lf[4],C_SCHEME_TRUE,lf[104]);}

/* g926 in k3591 in user-read-hook in k3577 in k3573 in k3569 in k3565 in k3561 in k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in ... */
static void C_fcall f_3612(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3612,NULL,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(1));
t4=C_slot(t3,C_fix(0));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3623,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:590: read */
t7=*((C_word*)lf[131]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[2]);}

/* k3509 in k3505 in k3501 in k3497 in k3493 in k3489 in k3485 in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3511,2,t0,t1);}
t2=C_mutate2((C_word*)lf[102]+1 /* (set! f32vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3515,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:551: pack-copy */
f_3371(t3,lf[18],lf[103]);}

/* list->s16vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2847(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2847,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,lf[10]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2854,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:420: make-s16vector */
t6=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,t4);}

/* k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in k3497 in k3493 in k3489 in k3485 in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in ... */
static void C_ccall f_3543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3543,2,t0,t1);}
t2=C_mutate2((C_word*)lf[110]+1 /* (set! blob->f32vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3547,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:560: unpack */
f_3389(t3,lf[18],C_fix(8),lf[111]);}

/* k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in k3497 in k3493 in k3489 in k3485 in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in ... */
static void C_ccall f_3547(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3547,2,t0,t1);}
t2=C_mutate2((C_word*)lf[111]+1 /* (set! blob->f64vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3551,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:562: unpack-copy */
f_3419(t3,lf[4],C_SCHEME_TRUE,lf[112]);}

/* a4229 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_4230(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4230,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[12],lf[38]);
t5=C_u_i_u32vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4258,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=t3;
t8=C_i_check_exact_2(t7,lf[38]);
t9=C_fixnum_less_or_equal_p(C_fix(0),t7);
t10=(C_truep(t9)?C_fixnum_lessp(t7,t5):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_a_u_i_u32vector_ref(&a,2,t2,t3));}
else{
t11=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t6,t11,lf[38],t7,C_fix(0),t5);}}

/* make-s8vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2039(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_2039r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2039r(t0,t1,t2,t3);}}

static void C_ccall f_2039r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(8);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=t5;
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=t10;
t12=C_i_nullp(t8);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t14=C_i_nullp(t13);
t15=(C_truep(t14)?C_SCHEME_TRUE:C_i_car(t13));
t16=t15;
t17=C_i_nullp(t13);
t18=(C_truep(t17)?C_SCHEME_END_OF_LIST:C_i_cdr(t13));
t19=C_i_check_exact_2(t2,lf[49]);
t20=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2099,a[2]=t6,a[3]=t2,a[4]=t1,a[5]=t11,a[6]=t16,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:299: alloc */
f_1908(t20,lf[49],t2,t11);}

/* k4376 in a4349 in k1481 */
static void C_ccall f_4378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_u_i_u8vector_ref(((C_word*)t0)[3],((C_word*)t0)[4]));}

/* a4259 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_4260(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4260,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[10],lf[37]);
t5=C_u_i_s16vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4288,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=t3;
t8=C_i_check_exact_2(t7,lf[37]);
t9=C_fixnum_less_or_equal_p(C_fix(0),t7);
t10=(C_truep(t9)?C_fixnum_lessp(t7,t5):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_u_i_s16vector_ref(t2,t3));}
else{
t11=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t6,t11,lf[37],t7,C_fix(0),t5);}}

/* k2393 in make-u32vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2395,2,t0,t1);}
t2=C_a_i_record2(&a,2,lf[12],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2363,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:339: set-finalizer! */
t5=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,((C_word*)t0)[7]);}
else{
t5=t4;
f_2363(2,t5,C_SCHEME_UNDEFINED);}}
else{
t5=t4;
f_2363(2,t5,C_SCHEME_UNDEFINED);}}

/* make-s16vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2236(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_2236r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2236r(t0,t1,t2,t3);}}

static void C_ccall f_2236r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(8);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=t5;
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=t10;
t12=C_i_nullp(t8);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t14=C_i_nullp(t13);
t15=(C_truep(t14)?C_SCHEME_TRUE:C_i_car(t13));
t16=t15;
t17=C_i_nullp(t13);
t18=(C_truep(t17)?C_SCHEME_END_OF_LIST:C_i_cdr(t13));
t19=C_i_check_exact_2(t2,lf[51]);
t20=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2296,a[2]=t6,a[3]=t2,a[4]=t1,a[5]=t11,a[6]=t16,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t21=C_fixnum_shift_left(t2,C_fix(1));
/* srfi-4.scm:325: alloc */
f_1908(t20,lf[51],t21,t11);}

/* k4256 in a4229 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_4258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4258,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_u_i_u32vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* list->s8vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2775(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2775,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,lf[6]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2782,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:418: make-s8vector */
t6=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,t4);}

/* k2262 in k2294 in make-s16vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2264,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2273,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:330: ##sys#check-exact-interval */
f_1485(t2,((C_word*)t0)[2],C_fix(-32768),C_fix(32767),lf[51]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* k1999 in make-u8vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2001(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2001,2,t0,t1);}
t2=C_a_i_record2(&a,2,lf[4],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1969,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:287: set-finalizer! */
t5=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,((C_word*)t0)[7]);}
else{
t5=t4;
f_1969(2,t5,C_SCHEME_UNDEFINED);}}
else{
t5=t4;
f_1969(2,t5,C_SCHEME_UNDEFINED);}}

/* k3667 in k3657 in k3654 in user-print-hook in k3577 in k3573 in k3569 in k3565 in k3561 in k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in ... */
static void C_ccall f_3669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm:612: ##sys#print */
t2=*((C_word*)lf[135]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_TRUE,((C_word*)t0)[3]);}

/* k2792 in doloop653 in k2780 in list->s8vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_2787(t4,((C_word*)t0)[5],t2,t3);}

/* make-f32vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2533(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_2533r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2533r(t0,t1,t2,t3);}}

static void C_ccall f_2533r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(10);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_i_nullp(t3);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_SCHEME_FALSE:C_i_car(t9));
t12=t11;
t13=C_i_nullp(t9);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t15=C_i_nullp(t14);
t16=(C_truep(t15)?C_SCHEME_TRUE:C_i_car(t14));
t17=t16;
t18=C_i_nullp(t14);
t19=(C_truep(t18)?C_SCHEME_END_OF_LIST:C_i_cdr(t14));
t20=C_i_check_exact_2(t2,lf[54]);
t21=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2597,a[2]=t7,a[3]=t2,a[4]=t1,a[5]=t12,a[6]=t17,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t22=C_fixnum_shift_left(t2,C_fix(2));
/* srfi-4.scm:364: alloc */
f_1908(t21,lf[54],t22,t12);}

/* a4319 in k1869 in k1481 */
static void C_ccall f_4320(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4320,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[6],lf[35]);
t5=C_u_i_s8vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4348,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=t3;
t8=C_i_check_exact_2(t7,lf[35]);
t9=C_fixnum_less_or_equal_p(C_fix(0),t7);
t10=(C_truep(t9)?C_fixnum_lessp(t7,t5):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_u_i_s8vector_ref(t2,t3));}
else{
t11=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t6,t11,lf[35],t7,C_fix(0),t5);}}

/* doloop653 in k2780 in list->s8vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_fcall f_2787(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2787,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[2]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2794,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
/* srfi-4.scm:418: s8vector-set! */
t7=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t4,((C_word*)t0)[2],t3,t6);}
else{
/* srfi-4.scm:418: ##sys#error-not-a-proper-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(3,*((C_word*)lf[57]+1),t4,((C_word*)t0)[4]);}}}

/* doloop518 in k2361 in k2393 in make-u32vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static C_word C_fcall f_2377(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_u32vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t3=C_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}

/* k2780 in list->s8vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2782,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2787,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li38),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2787(t6,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* k2559 in k2595 in make-f32vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2561(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2561,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(t2)){
t3=C_i_check_number_2(((C_word*)((C_word*)t0)[2])[1],lf[54]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2573,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(((C_word*)((C_word*)t0)[2])[1]))){
t5=t4;
f_2573(t5,C_SCHEME_UNDEFINED);}
else{
t5=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_a_i_fix_to_flo(&a,1,((C_word*)((C_word*)t0)[2])[1]));
t6=t4;
f_2573(t6,t5);}}
else{
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}}

/* k1481 */
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
C_word ab[57],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1483,2,t0,t1);}
t2=C_mutate2(&lf[0] /* (set! ##sys#check-exact-interval ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1485,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate2((C_word*)lf[3]+1 /* (set! u8vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1500,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[5]+1 /* (set! s8vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1506,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[7]+1 /* (set! u16vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1512,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[9]+1 /* (set! s16vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1518,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[11]+1 /* (set! u32vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1524,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[13]+1 /* (set! s32vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1530,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[15]+1 /* (set! f32vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1536,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[17]+1 /* (set! f64vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1542,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[19]+1 /* (set! u8vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1548,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[22]+1 /* (set! s8vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1590,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2((C_word*)lf[23]+1 /* (set! u16vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1623,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate2((C_word*)lf[25]+1 /* (set! s16vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1665,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate2((C_word*)lf[26]+1 /* (set! u32vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1698,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2((C_word*)lf[30]+1 /* (set! s32vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1753,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate2((C_word*)lf[32]+1 /* (set! f32vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1795,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate2((C_word*)lf[33]+1 /* (set! f64vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1832,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1871,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4350,a[2]=((C_word)li120),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:176: getter-with-setter */
t21=*((C_word*)lf[154]+1);
((C_proc5)(void*)(*((C_word*)t21+1)))(5,t21,t19,t20,*((C_word*)lf[19]+1),lf[162]);}

/* ##sys#check-exact-interval in k1481 */
static void C_fcall f_1485(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1485,NULL,5,t1,t2,t3,t4,t5);}
t6=C_i_check_exact_2(t2,t5);
t7=C_fixnum_lessp(t2,t3);
t8=(C_truep(t7)?t7:C_fixnum_greaterp(t2,t4));
if(C_truep(t8)){
/* srfi-4.scm:52: ##sys#error */
t9=*((C_word*)lf[1]+1);
((C_proc7)(void*)(*((C_word*)t9+1)))(7,t9,t1,t5,lf[2],t2,t3,t4);}
else{
t9=C_SCHEME_UNDEFINED;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}}

/* list->u8vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2739(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2739,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,lf[4]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2746,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:417: make-u8vector */
t6=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,t4);}

/* k3621 in g926 in k3591 in user-read-hook in k3577 in k3573 in k3569 in k3565 in k3561 in k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in ... */
static void C_ccall f_3623(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm:590: g929 */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],t1);}

/* k3245 in loop in s32vector->list in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3247,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,C_a_u_i_s32vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]),t1));}

/* k3657 in k3654 in user-print-hook in k3577 in k3573 in k3569 in k3565 in k3561 in k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in ... */
static void C_ccall f_3659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3659,2,t0,t1);}
t2=C_i_caddr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3669,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:612: g942 */
t4=t2;
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[5]);}

/* k3654 in user-print-hook in k3577 in k3573 in k3569 in k3565 in k3561 in k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in ... */
static void C_ccall f_3656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3656,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3659,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* srfi-4.scm:611: ##sys#print */
t4=*((C_word*)lf[135]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* loop in s32vector->list in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_fcall f_3233(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3233,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3247,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_fixnum_plus(t2,C_fix(1));
/* srfi-4.scm:479: loop */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* subnvector in k3577 in k3573 in k3569 in k3565 in k3561 in k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in k3497 in ... */
static void C_fcall f_3710(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
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
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3710,NULL,7,t1,t2,t3,t4,t5,t6,t7);}
t8=C_i_check_structure_2(t2,t3,t7);
t9=C_slot(t2,C_fix(1));
t10=t9;
t11=C_block_size(t10);
t12=C_u_fixnum_divide(t11,t4);
t13=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3744,a[2]=t6,a[3]=t5,a[4]=t4,a[5]=t3,a[6]=t10,a[7]=t1,a[8]=t12,a[9]=t7,tmp=(C_word)a,a+=10,tmp);
t14=C_fixnum_plus(t12,C_fix(1));
t15=t5;
t16=t7;
t17=C_i_check_exact_2(t15,t16);
t18=C_fixnum_less_or_equal_p(C_fix(0),t15);
t19=(C_truep(t18)?C_fixnum_lessp(t15,t14):C_SCHEME_FALSE);
if(C_truep(t19)){
t20=C_SCHEME_UNDEFINED;
t21=t13;
f_3744(2,t21,t20);}
else{
t20=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t13,t20,t16,t15,C_fix(0),t14);}}

/* k4316 in a4289 in k1873 in k1869 in k1481 */
static void C_ccall f_4318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_u_i_u16vector_ref(((C_word*)t0)[3],((C_word*)t0)[4]));}

/* k2960 in list->f32vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2962,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2967,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li48),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2967(t6,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* k2756 in doloop640 in k2744 in list->u8vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2758(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_2751(t4,((C_word*)t0)[5],t2,t3);}

/* ##sys#user-print-hook in k3577 in k3573 in k3569 in k3565 in k3561 in k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in k3497 in ... */
static void C_ccall f_3644(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[111],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3644,5,t0,t1,t2,t3,t4);}
t5=C_slot(t2,C_fix(0));
t6=C_a_i_list(&a,3,lf[4],lf[121],*((C_word*)lf[65]+1));
t7=C_a_i_list(&a,3,lf[6],lf[122],*((C_word*)lf[66]+1));
t8=C_a_i_list(&a,3,lf[8],lf[123],*((C_word*)lf[67]+1));
t9=C_a_i_list(&a,3,lf[10],lf[124],*((C_word*)lf[68]+1));
t10=C_a_i_list(&a,3,lf[12],lf[125],*((C_word*)lf[69]+1));
t11=C_a_i_list(&a,3,lf[14],lf[126],*((C_word*)lf[70]+1));
t12=C_a_i_list(&a,3,lf[16],lf[127],*((C_word*)lf[71]+1));
t13=C_a_i_list(&a,3,lf[18],lf[128],*((C_word*)lf[72]+1));
t14=C_a_i_list(&a,8,t6,t7,t8,t9,t10,t11,t12,t13);
t15=C_u_i_assq(t5,t14);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3656,a[2]=t15,a[3]=t1,a[4]=t4,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:610: ##sys#print */
t17=*((C_word*)lf[135]+1);
((C_proc5)(void*)(*((C_word*)t17+1)))(5,t17,t16,C_make_character(35),C_SCHEME_FALSE,t4);}
else{
/* srfi-4.scm:613: old-hook */
t16=((C_word*)t0)[2];
((C_proc5)C_fast_retrieve_proc(t16))(5,t16,t1,t2,t3,t4);}}

/* loop in f32vector->list in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_fcall f_3262(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3262,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3276,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_fixnum_plus(t2,C_fix(1));
/* srfi-4.scm:480: loop */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* k2074 in k2065 in k2097 in make-s8vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2076,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2081,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li22),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_2081(t2,C_fix(0)));}

/* doloop640 in k2744 in list->u8vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_fcall f_2751(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2751,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[2]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2758,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
/* srfi-4.scm:417: u8vector-set! */
t7=*((C_word*)lf[19]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t4,((C_word*)t0)[2],t3,t6);}
else{
/* srfi-4.scm:417: ##sys#error-not-a-proper-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(3,*((C_word*)lf[57]+1),t4,((C_word*)t0)[4]);}}}

/* k3438 in k3429 */
static void C_fcall f_3440(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3440,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_copy_block(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record2(&a,2,((C_word*)t0)[5],t2));}
else{
/* srfi-4.scm:533: ##sys#error */
t2=*((C_word*)lf[1]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],((C_word*)t0)[6],lf[87],((C_word*)t0)[5],((C_word*)t0)[7],((C_word*)t0)[8]);}}

/* list->f64vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2991(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2991,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,lf[18]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2998,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:424: make-f64vector */
t6=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,t4);}

/* k2744 in list->u8vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2746,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2751,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li36),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2751(t6,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* f32vector->list in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3253(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3253,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[16],lf[71]);
t4=C_u_i_f32vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3262,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li72),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3262(t8,t1,C_fix(0));}

/* doloop718 in k2960 in list->f32vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_fcall f_2967(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2967,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[2]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2974,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
/* srfi-4.scm:423: f32vector-set! */
t7=*((C_word*)lf[32]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t4,((C_word*)t0)[2],t3,t6);}
else{
/* srfi-4.scm:423: ##sys#error-not-a-proper-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(3,*((C_word*)lf[57]+1),t4,((C_word*)t0)[4]);}}}

/* k2065 in k2097 in make-s8vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2067,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2076,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:304: ##sys#check-exact-interval */
f_1485(t2,((C_word*)t0)[2],C_fix(-128),C_fix(127),lf[49]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* k3429 */
static void C_ccall f_3431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3431,2,t0,t1);}
t2=t1;
t3=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3440,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t3)){
t5=t4;
f_3440(t5,t3);}
else{
t5=C_fixnum_modulo(((C_word*)t0)[7],((C_word*)t0)[2]);
t6=t4;
f_3440(t6,C_eqp(C_fix(0),t5));}}

/* k2097 in make-s8vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2099,2,t0,t1);}
t2=C_a_i_record2(&a,2,lf[6],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2067,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:300: set-finalizer! */
t5=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,((C_word*)t0)[7]);}
else{
t5=t4;
f_2067(2,t5,C_SCHEME_UNDEFINED);}}
else{
t5=t4;
f_2067(2,t5,C_SCHEME_UNDEFINED);}}

/* k2996 in list->f64vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2998,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3003,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li50),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_3003(t6,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* loop in u32vector->list in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_fcall f_3204(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3204,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3218,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_fixnum_plus(t2,C_fix(1));
/* srfi-4.scm:478: loop */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* doloop431 in k2074 in k2065 in k2097 in make-s8vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static C_word C_fcall f_2081(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_s8vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t3=C_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}

/* k2936 in doloop705 in k2924 in list->s32vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_2931(t4,((C_word*)t0)[5],t2,t3);}

/* write-u8vector in k3577 in k3573 in k3569 in k3565 in k3561 in k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in k3497 in ... */
static void C_ccall f_3843(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_3843r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3843r(t0,t1,t2,t3);}}

static void C_ccall f_3843r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(8);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[146]+1):C_i_car(t3));
t6=t5;
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_fix(0):C_i_car(t8));
t11=t10;
t12=C_i_nullp(t8);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t14=C_i_nullp(t13);
t15=(C_truep(t14)?C_SCHEME_FALSE:C_i_car(t13));
t16=t15;
t17=C_i_nullp(t13);
t18=(C_truep(t17)?C_SCHEME_END_OF_LIST:C_i_cdr(t13));
t19=C_i_check_structure_2(t2,lf[4],lf[145]);
t20=C_i_check_port_2(t6,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[145]);
t21=C_u_i_8vector_length(t2);
t22=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3892,a[2]=t6,a[3]=t2,a[4]=t1,a[5]=t16,a[6]=t11,a[7]=t21,tmp=(C_word)a,a+=8,tmp);
t23=(C_truep(t16)?C_fixnum_plus(t16,C_fix(1)):C_fixnum_plus(t21,C_fix(1)));
t24=C_i_check_exact_2(t11,lf[145]);
t25=C_fixnum_less_or_equal_p(C_fix(0),t11);
t26=(C_truep(t25)?C_fixnum_lessp(t11,t23):C_SCHEME_FALSE);
if(C_truep(t26)){
t27=C_SCHEME_UNDEFINED;
t28=t22;
f_3892(2,t28,t27);}
else{
t27=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t22,t27,lf[145],t11,C_fix(0),t23);}}

/* k4286 in a4259 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_4288(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_u_i_s16vector_ref(((C_word*)t0)[3],((C_word*)t0)[4]));}

/* list->f32vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2955(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2955,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,lf[16]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2962,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:423: make-f32vector */
t6=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,t4);}

/* k2924 in list->s32vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2926,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2931,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li46),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2931(t6,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop489 in k2271 in k2262 in k2294 in make-s16vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static C_word C_fcall f_2278(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_s16vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t3=C_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}

/* k2271 in k2262 in k2294 in make-s16vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2273,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2278,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li26),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_2278(t2,C_fix(0)));}

/* read-u8vector! in k3577 in k3573 in k3569 in k3565 in k3561 in k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in k3497 in ... */
static void C_ccall f_4012(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_4012r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4012r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4012r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(10);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t6=C_i_nullp(t4);
t7=(C_truep(t6)?*((C_word*)lf[148]+1):C_i_car(t4));
t8=t7;
t9=C_i_nullp(t4);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t11=C_i_nullp(t10);
t12=(C_truep(t11)?C_fix(0):C_i_car(t10));
t13=t12;
t14=C_i_nullp(t10);
t15=(C_truep(t14)?C_SCHEME_END_OF_LIST:C_i_cdr(t10));
t16=C_i_check_port_2(t8,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[147]);
t17=C_i_check_exact_2(t13,lf[147]);
t18=C_i_check_structure_2(t3,lf[4],lf[147]);
t19=(C_truep(((C_word*)t5)[1])?C_i_check_exact_2(((C_word*)t5)[1],lf[147]):C_SCHEME_UNDEFINED);
t20=C_slot(t3,C_fix(1));
t21=t20;
t22=C_block_size(t21);
t23=t22;
t24=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4052,a[2]=t1,a[3]=t5,a[4]=t21,a[5]=t8,a[6]=t13,a[7]=t23,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t5)[1])){
t25=C_fixnum_plus(t13,((C_word*)t5)[1]);
t26=t24;
f_4052(t26,C_fixnum_less_or_equal_p(t25,t23));}
else{
t25=t24;
f_4052(t25,C_SCHEME_FALSE);}}

/* subf64vector in k3577 in k3573 in k3569 in k3565 in k3561 in k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in k3497 in ... */
static void C_ccall f_3837(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3837,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm:641: subnvector */
f_3710(t1,t2,lf[18],C_fix(8),t3,t4,lf[144]);}

/* a4289 in k1873 in k1869 in k1481 */
static void C_ccall f_4290(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4290,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[8],lf[36]);
t5=C_u_i_s16vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4318,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=t3;
t8=C_i_check_exact_2(t7,lf[36]);
t9=C_fixnum_less_or_equal_p(C_fix(0),t7);
t10=(C_truep(t9)?C_fixnum_lessp(t7,t5):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_u_i_u16vector_ref(t2,t3));}
else{
t11=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t6,t11,lf[36],t7,C_fix(0),t5);}}

/* subf32vector in k3577 in k3573 in k3569 in k3565 in k3561 in k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in k3497 in ... */
static void C_ccall f_3831(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3831,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm:640: subnvector */
f_3710(t1,t2,lf[16],C_fix(4),t3,t4,lf[143]);}

/* k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in k3497 in k3493 in k3489 in k3485 in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3527,2,t0,t1);}
t2=C_mutate2((C_word*)lf[106]+1 /* (set! blob->u16vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3531,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:556: unpack */
f_3389(t3,lf[10],C_fix(2),lf[107]);}

/* k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in k3497 in k3493 in k3489 in k3485 in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3523,2,t0,t1);}
t2=C_mutate2((C_word*)lf[105]+1 /* (set! blob->s8vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3527,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:555: unpack */
f_3389(t3,lf[8],C_fix(2),lf[106]);}

/* k2816 in list->u16vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2818(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2818,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2823,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li40),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2823(t6,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* list->u16vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2811(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2811,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,lf[8]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2818,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:419: make-u16vector */
t6=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,t4);}

/* k2972 in doloop718 in k2960 in list->f32vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_2967(t4,((C_word*)t0)[5],t2,t3);}

/* k2294 in make-s16vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2296,2,t0,t1);}
t2=C_a_i_record2(&a,2,lf[10],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2264,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:326: set-finalizer! */
t5=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,((C_word*)t0)[7]);}
else{
t5=t4;
f_2264(2,t5,C_SCHEME_UNDEFINED);}}
else{
t5=t4;
f_2264(2,t5,C_SCHEME_UNDEFINED);}}

/* make-u16vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2137(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_2137r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2137r(t0,t1,t2,t3);}}

static void C_ccall f_2137r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(8);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=t5;
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=t10;
t12=C_i_nullp(t8);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t14=C_i_nullp(t13);
t15=(C_truep(t14)?C_SCHEME_TRUE:C_i_car(t13));
t16=t15;
t17=C_i_nullp(t13);
t18=(C_truep(t17)?C_SCHEME_END_OF_LIST:C_i_cdr(t13));
t19=C_i_check_exact_2(t2,lf[50]);
t20=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2197,a[2]=t6,a[3]=t2,a[4]=t1,a[5]=t11,a[6]=t16,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t21=C_fixnum_shift_left(t2,C_fix(1));
/* srfi-4.scm:312: alloc */
f_1908(t20,lf[50],t21,t11);}

/* k3505 in k3501 in k3497 in k3493 in k3489 in k3485 in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3507,2,t0,t1);}
t2=C_mutate2((C_word*)lf[101]+1 /* (set! s32vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3511,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:550: pack-copy */
f_3371(t3,lf[16],lf[102]);}

/* k3501 in k3497 in k3493 in k3489 in k3485 in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3503(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3503,2,t0,t1);}
t2=C_mutate2((C_word*)lf[100]+1 /* (set! u32vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3507,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:549: pack-copy */
f_3371(t3,lf[14],lf[101]);}

/* k2674 in k2662 in k2698 in make-f64vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_fcall f_2676(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2676,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2681,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li34),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_2681(t2,C_fix(0)));}

/* subu8vector in k3577 in k3573 in k3569 in k3565 in k3561 in k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in k3497 in ... */
static void C_ccall f_3795(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3795,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm:634: subnvector */
f_3710(t1,t2,lf[4],C_fix(1),t3,t4,lf[137]);}

/* u32vector? in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3335(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3335,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[12]));}

/* loop in u8vector->list in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_fcall f_3084(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3084,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_u_i_u8vector_ref(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3099,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_fixnum_plus(t2,C_fix(1));
/* srfi-4.scm:474: loop */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}

/* k2662 in k2698 in make-f64vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2664(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2664,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(t2)){
t3=C_i_check_number_2(((C_word*)((C_word*)t0)[2])[1],lf[55]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2676,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(((C_word*)((C_word*)t0)[2])[1]))){
t5=t4;
f_2676(t5,C_SCHEME_UNDEFINED);}
else{
t5=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_a_i_fix_to_flo(&a,1,((C_word*)((C_word*)t0)[2])[1]));
t6=t4;
f_2676(t6,t5);}}
else{
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}}

/* k3573 in k3569 in k3565 in k3561 in k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in k3497 in k3493 in k3489 in ... */
static void C_ccall f_3575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3575,2,t0,t1);}
t2=C_mutate2((C_word*)lf[118]+1 /* (set! blob->f32vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3579,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:569: unpack-copy */
f_3419(t3,lf[18],C_fix(8),lf[119]);}

/* doloop576 in k2571 in k2559 in k2595 in make-f32vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static C_word C_fcall f_2578(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_f32vector_set(((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[4])[1]);
t3=C_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}

/* k3772 in k3766 in k3742 in subnvector in k3577 in k3573 in k3569 in k3565 in k3561 in k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in ... */
static void C_ccall f_3774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3774,2,t0,t1);}
t2=C_string_to_bytevector(t1);
t3=C_a_i_record2(&a,2,((C_word*)t0)[2],t1);
t4=C_fixnum_times(((C_word*)t0)[3],((C_word*)t0)[4]);
t5=C_copy_subvector(t1,((C_word*)t0)[5],C_fix(0),t4,((C_word*)t0)[6]);
t6=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t3);}

/* k3569 in k3565 in k3561 in k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in k3497 in k3493 in k3489 in k3485 in ... */
static void C_ccall f_3571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3571,2,t0,t1);}
t2=C_mutate2((C_word*)lf[117]+1 /* (set! blob->s32vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3575,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:568: unpack-copy */
f_3419(t3,lf[16],C_fix(4),lf[118]);}

/* k2172 in k2163 in k2195 in make-u16vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2174,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2179,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li24),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_2179(t2,C_fix(0)));}

/* k2571 in k2559 in k2595 in make-f32vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_fcall f_2573(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2573,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2578,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li32),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_2578(t2,C_fix(0)));}

/* k3577 in k3573 in k3569 in k3565 in k3561 in k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in k3497 in k3493 in ... */
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
C_word ab[97],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3579,2,t0,t1);}
t2=C_mutate2((C_word*)lf[119]+1 /* (set! blob->f64vector ...) */,t1);
t3=*((C_word*)lf[120]+1);
t4=C_a_i_list(&a,16,lf[121],*((C_word*)lf[56]+1),lf[122],*((C_word*)lf[58]+1),lf[123],*((C_word*)lf[59]+1),lf[124],*((C_word*)lf[60]+1),lf[125],*((C_word*)lf[61]+1),lf[126],*((C_word*)lf[62]+1),lf[127],*((C_word*)lf[63]+1),lf[128],*((C_word*)lf[64]+1));
t5=t4;
t6=C_mutate2((C_word*)lf[120]+1 /* (set! ##sys#user-read-hook ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3584,a[2]=t5,a[3]=t3,a[4]=((C_word)li99),tmp=(C_word)a,a+=5,tmp));
t7=*((C_word*)lf[134]+1);
t8=C_mutate2((C_word*)lf[134]+1 /* (set! ##sys#user-print-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3644,a[2]=t7,a[3]=((C_word)li100),tmp=(C_word)a,a+=4,tmp));
t9=C_mutate2(&lf[136] /* (set! subnvector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3710,a[2]=((C_word)li101),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[137]+1 /* (set! subu8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3795,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[138]+1 /* (set! subu16vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3801,a[2]=((C_word)li103),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[139]+1 /* (set! subu32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3807,a[2]=((C_word)li104),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2((C_word*)lf[140]+1 /* (set! subs8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3813,a[2]=((C_word)li105),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate2((C_word*)lf[141]+1 /* (set! subs16vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3819,a[2]=((C_word)li106),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate2((C_word*)lf[142]+1 /* (set! subs32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3825,a[2]=((C_word)li107),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2((C_word*)lf[143]+1 /* (set! subf32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3831,a[2]=((C_word)li108),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate2((C_word*)lf[144]+1 /* (set! subf64vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3837,a[2]=((C_word)li109),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate2((C_word*)lf[145]+1 /* (set! write-u8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3843,a[2]=((C_word)li110),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate2((C_word*)lf[147]+1 /* (set! read-u8vector! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4012,a[2]=((C_word)li111),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate2((C_word*)lf[150]+1 /* (set! read-u8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4092,a[2]=((C_word)li112),tmp=(C_word)a,a+=3,tmp));
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4138,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:673: register-feature! */
t22=*((C_word*)lf[152]+1);
((C_proc3)(void*)(*((C_word*)t22+1)))(3,t22,t21,lf[153]);}

/* subs32vector in k3577 in k3573 in k3569 in k3565 in k3561 in k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in k3497 in ... */
static void C_ccall f_3825(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3825,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm:639: subnvector */
f_3710(t1,t2,lf[14],C_fix(4),t3,t4,lf[142]);}

/* doloop606 in k2674 in k2662 in k2698 in make-f64vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static C_word C_fcall f_2681(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_f64vector_set(((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[4])[1]);
t3=C_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}

/* doloop705 in k2924 in list->s32vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_fcall f_2931(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2931,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[2]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2938,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
/* srfi-4.scm:422: s32vector-set! */
t7=*((C_word*)lf[30]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t4,((C_word*)t0)[2],t3,t6);}
else{
/* srfi-4.scm:422: ##sys#error-not-a-proper-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(3,*((C_word*)lf[57]+1),t4,((C_word*)t0)[4]);}}}

/* k4226 in a4199 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_4228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4228,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_u_i_s32vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* loop in s8vector->list in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_fcall f_3114(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3114,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_u_i_s8vector_ref(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3129,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_fixnum_plus(t2,C_fix(1));
/* srfi-4.scm:475: loop */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}

/* k3766 in k3742 in subnvector in k3577 in k3573 in k3569 in k3565 in k3561 in k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in ... */
static void C_ccall f_3768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3768,2,t0,t1);}
t2=C_fixnum_difference(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_fixnum_times(((C_word*)t0)[4],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3774,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t4,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:628: ##sys#allocate-vector */
t6=*((C_word*)lf[43]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t5,t4,C_SCHEME_TRUE,C_SCHEME_FALSE,C_SCHEME_TRUE);}

/* k3893 in k3890 in write-u8vector in k3577 in k3573 in k3569 in k3565 in k3561 in k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in ... */
static void C_ccall f_3895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3895,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_slot(t2,C_fix(3));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3908,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t6=C_eqp(((C_word*)t0)[6],C_fix(0));
if(C_truep(t6)){
t7=C_i_not(((C_word*)t0)[5]);
t8=t5;
f_3908(t8,(C_truep(t7)?t7:C_eqp(((C_word*)t0)[5],((C_word*)t0)[7])));}
else{
t7=t5;
f_3908(t7,C_SCHEME_FALSE);}}

/* k3890 in write-u8vector in k3577 in k3573 in k3569 in k3565 in k3561 in k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in ... */
static void C_ccall f_3892(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3892,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3895,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=C_fixnum_plus(((C_word*)t0)[7],C_fix(1));
t4=C_i_check_exact_2(((C_word*)t0)[5],lf[145]);
t5=C_fixnum_less_or_equal_p(((C_word*)t0)[6],((C_word*)t0)[5]);
t6=(C_truep(t5)?C_fixnum_lessp(((C_word*)t0)[5],t3):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=C_SCHEME_UNDEFINED;
t8=t2;
f_3895(2,t8,t7);}
else{
t7=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t2,t7,lf[145],((C_word*)t0)[5],((C_word*)t0)[6],t3);}}
else{
t3=t2;
f_3895(2,t3,C_SCHEME_UNDEFINED);}}

/* k3097 in loop in u8vector->list in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3099,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* s8vector->list in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3105(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3105,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[6],lf[66]);
t4=C_u_i_s8vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3114,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li62),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3114(t8,t1,C_fix(0));}

/* make-f64vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2636(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_2636r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2636r(t0,t1,t2,t3);}}

static void C_ccall f_2636r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(10);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_i_nullp(t3);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_SCHEME_FALSE:C_i_car(t9));
t12=t11;
t13=C_i_nullp(t9);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t15=C_i_nullp(t14);
t16=(C_truep(t15)?C_SCHEME_TRUE:C_i_car(t14));
t17=t16;
t18=C_i_nullp(t14);
t19=(C_truep(t18)?C_SCHEME_END_OF_LIST:C_i_cdr(t14));
t20=C_i_check_exact_2(t2,lf[55]);
t21=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2700,a[2]=t7,a[3]=t2,a[4]=t1,a[5]=t12,a[6]=t17,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t22=C_fixnum_shift_left(t2,C_fix(3));
/* srfi-4.scm:381: alloc */
f_1908(t21,lf[55],t22,t12);}

/* k2595 in make-f32vector in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_2597(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2597,2,t0,t1);}
t2=C_a_i_record2(&a,2,lf[16],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2561,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:365: set-finalizer! */
t5=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,((C_word*)t0)[7]);}
else{
t5=t4;
f_2561(2,t5,C_SCHEME_UNDEFINED);}}
else{
t5=t4;
f_2561(2,t5,C_SCHEME_UNDEFINED);}}

/* k1580 in k1556 in u8vector-set! in k1481 */
static void C_ccall f_1582(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_u_i_u8vector_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]));}

/* a4199 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_4200(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4200,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[14],lf[39]);
t5=C_u_i_s32vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4228,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=t3;
t8=C_i_check_exact_2(t7,lf[39]);
t9=C_fixnum_less_or_equal_p(C_fix(0),t7);
t10=(C_truep(t9)?C_fixnum_lessp(t7,t5):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_a_u_i_s32vector_ref(&a,2,t2,t3));}
else{
t11=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t6,t11,lf[39],t7,C_fix(0),t5);}}

/* read-u8vector in k3577 in k3573 in k3569 in k3565 in k3561 in k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in k3497 in ... */
static void C_ccall f_4092(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_4092r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4092r(t0,t1,t2);}}

static void C_ccall f_4092r(C_word t0,C_word t1,C_word t2){
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
C_word *a=C_alloc(3);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=C_i_nullp(t2);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_cdr(t2));
t7=C_i_nullp(t6);
t8=(C_truep(t7)?*((C_word*)lf[148]+1):C_i_car(t6));
t9=C_i_nullp(t6);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:C_i_cdr(t6));
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4108,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:669: ##sys#read-string/port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[151]+1)))(4,*((C_word*)lf[151]+1),t11,t4,t8);}

/* loop in s16vector->list in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_fcall f_3174(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3174,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_u_i_s16vector_ref(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3189,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_fixnum_plus(t2,C_fix(1));
/* srfi-4.scm:477: loop */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}

/* k3742 in subnvector in k3577 in k3573 in k3569 in k3565 in k3561 in k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in ... */
static void C_ccall f_3744(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3744,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3768,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_fixnum_plus(((C_word*)t0)[8],C_fix(1));
t4=((C_word*)t0)[2];
t5=((C_word*)t0)[9];
t6=C_i_check_exact_2(t4,t5);
t7=C_fixnum_less_or_equal_p(C_fix(0),t4);
t8=(C_truep(t7)?C_fixnum_lessp(t4,t3):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_SCHEME_UNDEFINED;
t10=t2;
f_3768(2,t10,t9);}
else{
t9=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t2,t9,t5,t4,C_fix(0),t3);}}

/* ##sys#user-read-hook in k3577 in k3573 in k3569 in k3565 in k3561 in k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in k3497 in ... */
static void C_ccall f_3584(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3584,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep((C_truep(C_eqp(t4,C_make_character(117)))?C_SCHEME_TRUE:(C_truep(C_eqp(t4,C_make_character(115)))?C_SCHEME_TRUE:(C_truep(C_eqp(t4,C_make_character(102)))?C_SCHEME_TRUE:(C_truep(C_eqp(t4,C_make_character(85)))?C_SCHEME_TRUE:(C_truep(C_eqp(t4,C_make_character(83)))?C_SCHEME_TRUE:(C_truep(C_eqp(t4,C_make_character(70)))?C_SCHEME_TRUE:C_SCHEME_FALSE)))))))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3593,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:587: read */
t6=*((C_word*)lf[131]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}
else{
/* srfi-4.scm:592: old-hook */
t5=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t1,t2,t3);}}

/* s8vector-set! in k1481 */
static void C_ccall f_1590(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1590,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[6],lf[22]);
t6=C_u_i_8vector_length(t2);
t7=C_i_check_exact_2(t4,lf[22]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1621,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t9=t3;
t10=C_i_check_exact_2(t9,lf[22]);
t11=C_fixnum_less_or_equal_p(C_fix(0),t9);
t12=(C_truep(t11)?C_fixnum_lessp(t9,t6):C_SCHEME_FALSE);
if(C_truep(t12)){
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_u_i_s8vector_set(t2,t3,t4));}
else{
t13=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t8,t13,lf[22],t9,C_fix(0),t6);}}

/* s16vector->list in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3165(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3165,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[10],lf[68]);
t4=C_u_i_s16vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3174,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li66),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3174(t8,t1,C_fix(0));}

/* f64vector? in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3353(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3353,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[18]));}

/* f32vector? in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3347(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3347,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[16]));}

/* s32vector? in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3341(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3341,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[14]));}

/* s8vector-length in k1481 */
static void C_ccall f_1506(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1506,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[6],lf[5]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_8vector_length(t2));}

/* u8vector-length in k1481 */
static void C_ccall f_1500(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1500,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[4],lf[3]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_8vector_length(t2));}

/* subu32vector in k3577 in k3573 in k3569 in k3565 in k3561 in k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in k3497 in ... */
static void C_ccall f_3807(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3807,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm:636: subnvector */
f_3710(t1,t2,lf[12],C_fix(4),t3,t4,lf[139]);}

/* u16vector->list in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3135(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3135,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[8],lf[67]);
t4=C_u_i_u16vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3144,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li64),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3144(t8,t1,C_fix(0));}

/* k4050 in read-u8vector! in k3577 in k3573 in k3569 in k3565 in k3561 in k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in ... */
static void C_fcall f_4052(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
/* srfi-4.scm:666: ##sys#read-string! */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[149]+1)))(6,*((C_word*)lf[149]+1),((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t2=C_fixnum_difference(((C_word*)t0)[7],((C_word*)t0)[6]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
/* srfi-4.scm:666: ##sys#read-string! */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[149]+1)))(6,*((C_word*)lf[149]+1),((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}}

/* subu16vector in k3577 in k3573 in k3569 in k3565 in k3561 in k3557 in k3553 in k3549 in k3545 in k3541 in k3537 in k3533 in k3529 in k3525 in k3521 in k3517 in k3513 in k3509 in k3505 in k3501 in k3497 in ... */
static void C_ccall f_3801(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3801,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm:635: subnvector */
f_3710(t1,t2,lf[8],C_fix(2),t3,t4,lf[138]);}

/* k3127 in loop in s8vector->list in k1897 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1481 */
static void C_ccall f_3129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3129,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[245] = {
{"f_1558:srfi_2d4_2escm",(void*)f_1558},
{"f_3819:srfi_2d4_2escm",(void*)f_3819},
{"f_1542:srfi_2d4_2escm",(void*)f_1542},
{"f_2179:srfi_2d4_2escm",(void*)f_2179},
{"f_1548:srfi_2d4_2escm",(void*)f_1548},
{"f_3224:srfi_2d4_2escm",(void*)f_3224},
{"f_3813:srfi_2d4_2escm",(void*)f_3813},
{"f_1863:srfi_2d4_2escm",(void*)f_1863},
{"f_1536:srfi_2d4_2escm",(void*)f_1536},
{"f_2165:srfi_2d4_2escm",(void*)f_2165},
{"f_1530:srfi_2d4_2escm",(void*)f_1530},
{"f_3218:srfi_2d4_2escm",(void*)f_3218},
{"f_1879:srfi_2d4_2escm",(void*)f_1879},
{"f_1875:srfi_2d4_2escm",(void*)f_1875},
{"f_1871:srfi_2d4_2escm",(void*)f_1871},
{"f_2700:srfi_2d4_2escm",(void*)f_2700},
{"f_2197:srfi_2d4_2escm",(void*)f_2197},
{"f_1887:srfi_2d4_2escm",(void*)f_1887},
{"f_1883:srfi_2d4_2escm",(void*)f_1883},
{"f_3159:srfi_2d4_2escm",(void*)f_3159},
{"f_1899:srfi_2d4_2escm",(void*)f_1899},
{"f_4138:srfi_2d4_2escm",(void*)f_4138},
{"f_1895:srfi_2d4_2escm",(void*)f_1895},
{"f_1891:srfi_2d4_2escm",(void*)f_1891},
{"f_3033:srfi_2d4_2escm",(void*)f_3033},
{"f_3039:srfi_2d4_2escm",(void*)f_3039},
{"f_3144:srfi_2d4_2escm",(void*)f_3144},
{"f_3593:srfi_2d4_2escm",(void*)f_3593},
{"f_1906:srfi_2d4_2escm",(void*)f_1906},
{"f_1826:srfi_2d4_2escm",(void*)f_1826},
{"f_1908:srfi_2d4_2escm",(void*)f_1908},
{"f_1832:srfi_2d4_2escm",(void*)f_1832},
{"f_2902:srfi_2d4_2escm",(void*)f_2902},
{"f_2919:srfi_2d4_2escm",(void*)f_2919},
{"f_3003:srfi_2d4_2escm",(void*)f_3003},
{"f_4170:srfi_2d4_2escm",(void*)f_4170},
{"f_3075:srfi_2d4_2escm",(void*)f_3075},
{"f_4108:srfi_2d4_2escm",(void*)f_4108},
{"f_3407:srfi_2d4_2escm",(void*)f_3407},
{"f_3027:srfi_2d4_2escm",(void*)f_3027},
{"f_3010:srfi_2d4_2escm",(void*)f_3010},
{"f_1524:srfi_2d4_2escm",(void*)f_1524},
{"f_3421:srfi_2d4_2escm",(void*)f_3421},
{"f_1518:srfi_2d4_2escm",(void*)f_1518},
{"f_1512:srfi_2d4_2escm",(void*)f_1512},
{"f_3419:srfi_2d4_2escm",(void*)f_3419},
{"f5032:srfi_2d4_2escm",(void*)f5032},
{"f4990:srfi_2d4_2escm",(void*)f4990},
{"f4997:srfi_2d4_2escm",(void*)f4997},
{"f5025:srfi_2d4_2escm",(void*)f5025},
{"f_3195:srfi_2d4_2escm",(void*)f_3195},
{"f4983:srfi_2d4_2escm",(void*)f4983},
{"f_3329:srfi_2d4_2escm",(void*)f_3329},
{"f_3323:srfi_2d4_2escm",(void*)f_3323},
{"f5011:srfi_2d4_2escm",(void*)f5011},
{"f5018:srfi_2d4_2escm",(void*)f5018},
{"f_3189:srfi_2d4_2escm",(void*)f_3189},
{"f_3317:srfi_2d4_2escm",(void*)f_3317},
{"f_3311:srfi_2d4_2escm",(void*)f_3311},
{"f_1969:srfi_2d4_2escm",(void*)f_1969},
{"f_3305:srfi_2d4_2escm",(void*)f_3305},
{"f_1978:srfi_2d4_2escm",(void*)f_1978},
{"f_1665:srfi_2d4_2escm",(void*)f_1665},
{"f_1983:srfi_2d4_2escm",(void*)f_1983},
{"f_1924:srfi_2d4_2escm",(void*)f_1924},
{"f_1926:srfi_2d4_2escm",(void*)f_1926},
{"f_1941:srfi_2d4_2escm",(void*)f_1941},
{"f_1696:srfi_2d4_2escm",(void*)f_1696},
{"f_1698:srfi_2d4_2escm",(void*)f_1698},
{"f_1933:srfi_2d4_2escm",(void*)f_1933},
{"f_1623:srfi_2d4_2escm",(void*)f_1623},
{"f_1621:srfi_2d4_2escm",(void*)f_1621},
{"f_3391:srfi_2d4_2escm",(void*)f_3391},
{"f_1633:srfi_2d4_2escm",(void*)f_1633},
{"f_3383:srfi_2d4_2escm",(void*)f_3383},
{"f_3389:srfi_2d4_2escm",(void*)f_3389},
{"f5004:srfi_2d4_2escm",(void*)f5004},
{"f_1657:srfi_2d4_2escm",(void*)f_1657},
{"f_2434:srfi_2d4_2escm",(void*)f_2434},
{"f_3045:srfi_2d4_2escm",(void*)f_3045},
{"f_3291:srfi_2d4_2escm",(void*)f_3291},
{"f_4140:srfi_2d4_2escm",(void*)f_4140},
{"f_3069:srfi_2d4_2escm",(void*)f_3069},
{"f_3063:srfi_2d4_2escm",(void*)f_3063},
{"f_2462:srfi_2d4_2escm",(void*)f_2462},
{"f_3057:srfi_2d4_2escm",(void*)f_3057},
{"f_3051:srfi_2d4_2escm",(void*)f_3051},
{"f_3918:srfi_2d4_2escm",(void*)f_3918},
{"f_4168:srfi_2d4_2escm",(void*)f_4168},
{"f_1763:srfi_2d4_2escm",(void*)f_1763},
{"f_1760:srfi_2d4_2escm",(void*)f_1760},
{"f_3373:srfi_2d4_2escm",(void*)f_3373},
{"f_3371:srfi_2d4_2escm",(void*)f_3371},
{"f_3908:srfi_2d4_2escm",(void*)f_3908},
{"f_1787:srfi_2d4_2escm",(void*)f_1787},
{"f_4348:srfi_2d4_2escm",(void*)f_4348},
{"f_1795:srfi_2d4_2escm",(void*)f_1795},
{"f_4198:srfi_2d4_2escm",(void*)f_4198},
{"f_1732:srfi_2d4_2escm",(void*)f_1732},
{"f_2476:srfi_2d4_2escm",(void*)f_2476},
{"f_3487:srfi_2d4_2escm",(void*)f_3487},
{"f_1753:srfi_2d4_2escm",(void*)f_1753},
{"f_2494:srfi_2d4_2escm",(void*)f_2494},
{"f_4350:srfi_2d4_2escm",(void*)f_4350},
{"f_1705:srfi_2d4_2escm",(void*)f_1705},
{"f_1708:srfi_2d4_2escm",(void*)f_1708},
{"f_3495:srfi_2d4_2escm",(void*)f_3495},
{"f_3491:srfi_2d4_2escm",(void*)f_3491},
{"f_3499:srfi_2d4_2escm",(void*)f_3499},
{"f_2866:srfi_2d4_2escm",(void*)f_2866},
{"toplevel:srfi_2d4_2escm",(void*)C_srfi_2d4_toplevel},
{"f_2890:srfi_2d4_2escm",(void*)f_2890},
{"f_2895:srfi_2d4_2escm",(void*)f_2895},
{"f_3555:srfi_2d4_2escm",(void*)f_3555},
{"f_2363:srfi_2d4_2escm",(void*)f_2363},
{"f_3559:srfi_2d4_2escm",(void*)f_3559},
{"f_3551:srfi_2d4_2escm",(void*)f_3551},
{"f_3282:srfi_2d4_2escm",(void*)f_3282},
{"f_2883:srfi_2d4_2escm",(void*)f_2883},
{"f_3276:srfi_2d4_2escm",(void*)f_3276},
{"f_2830:srfi_2d4_2escm",(void*)f_2830},
{"f_3535:srfi_2d4_2escm",(void*)f_3535},
{"f_3539:srfi_2d4_2escm",(void*)f_3539},
{"f_3531:srfi_2d4_2escm",(void*)f_3531},
{"f_2823:srfi_2d4_2escm",(void*)f_2823},
{"f_3563:srfi_2d4_2escm",(void*)f_3563},
{"f_2335:srfi_2d4_2escm",(void*)f_2335},
{"f_3567:srfi_2d4_2escm",(void*)f_3567},
{"f_2854:srfi_2d4_2escm",(void*)f_2854},
{"f_2859:srfi_2d4_2escm",(void*)f_2859},
{"f_3519:srfi_2d4_2escm",(void*)f_3519},
{"f_3515:srfi_2d4_2escm",(void*)f_3515},
{"f_3612:srfi_2d4_2escm",(void*)f_3612},
{"f_3511:srfi_2d4_2escm",(void*)f_3511},
{"f_2847:srfi_2d4_2escm",(void*)f_2847},
{"f_3543:srfi_2d4_2escm",(void*)f_3543},
{"f_3547:srfi_2d4_2escm",(void*)f_3547},
{"f_4230:srfi_2d4_2escm",(void*)f_4230},
{"f_2039:srfi_2d4_2escm",(void*)f_2039},
{"f_4378:srfi_2d4_2escm",(void*)f_4378},
{"f_4260:srfi_2d4_2escm",(void*)f_4260},
{"f_2395:srfi_2d4_2escm",(void*)f_2395},
{"f_2236:srfi_2d4_2escm",(void*)f_2236},
{"f_4258:srfi_2d4_2escm",(void*)f_4258},
{"f_2775:srfi_2d4_2escm",(void*)f_2775},
{"f_2264:srfi_2d4_2escm",(void*)f_2264},
{"f_2001:srfi_2d4_2escm",(void*)f_2001},
{"f_3669:srfi_2d4_2escm",(void*)f_3669},
{"f_2794:srfi_2d4_2escm",(void*)f_2794},
{"f_2533:srfi_2d4_2escm",(void*)f_2533},
{"f_4320:srfi_2d4_2escm",(void*)f_4320},
{"f_2787:srfi_2d4_2escm",(void*)f_2787},
{"f_2377:srfi_2d4_2escm",(void*)f_2377},
{"f_2782:srfi_2d4_2escm",(void*)f_2782},
{"f_2561:srfi_2d4_2escm",(void*)f_2561},
{"f_1483:srfi_2d4_2escm",(void*)f_1483},
{"f_1485:srfi_2d4_2escm",(void*)f_1485},
{"f_2739:srfi_2d4_2escm",(void*)f_2739},
{"f_3623:srfi_2d4_2escm",(void*)f_3623},
{"f_3247:srfi_2d4_2escm",(void*)f_3247},
{"f_3659:srfi_2d4_2escm",(void*)f_3659},
{"f_3656:srfi_2d4_2escm",(void*)f_3656},
{"f_3233:srfi_2d4_2escm",(void*)f_3233},
{"f_3710:srfi_2d4_2escm",(void*)f_3710},
{"f_4318:srfi_2d4_2escm",(void*)f_4318},
{"f_2962:srfi_2d4_2escm",(void*)f_2962},
{"f_2758:srfi_2d4_2escm",(void*)f_2758},
{"f_3644:srfi_2d4_2escm",(void*)f_3644},
{"f_3262:srfi_2d4_2escm",(void*)f_3262},
{"f_2076:srfi_2d4_2escm",(void*)f_2076},
{"f_2751:srfi_2d4_2escm",(void*)f_2751},
{"f_3440:srfi_2d4_2escm",(void*)f_3440},
{"f_2991:srfi_2d4_2escm",(void*)f_2991},
{"f_2746:srfi_2d4_2escm",(void*)f_2746},
{"f_3253:srfi_2d4_2escm",(void*)f_3253},
{"f_2967:srfi_2d4_2escm",(void*)f_2967},
{"f_2067:srfi_2d4_2escm",(void*)f_2067},
{"f_3431:srfi_2d4_2escm",(void*)f_3431},
{"f_2099:srfi_2d4_2escm",(void*)f_2099},
{"f_2998:srfi_2d4_2escm",(void*)f_2998},
{"f_3204:srfi_2d4_2escm",(void*)f_3204},
{"f_2081:srfi_2d4_2escm",(void*)f_2081},
{"f_2938:srfi_2d4_2escm",(void*)f_2938},
{"f_3843:srfi_2d4_2escm",(void*)f_3843},
{"f_4288:srfi_2d4_2escm",(void*)f_4288},
{"f_2955:srfi_2d4_2escm",(void*)f_2955},
{"f_2926:srfi_2d4_2escm",(void*)f_2926},
{"f_2278:srfi_2d4_2escm",(void*)f_2278},
{"f_2273:srfi_2d4_2escm",(void*)f_2273},
{"f_4012:srfi_2d4_2escm",(void*)f_4012},
{"f_3837:srfi_2d4_2escm",(void*)f_3837},
{"f_4290:srfi_2d4_2escm",(void*)f_4290},
{"f_3831:srfi_2d4_2escm",(void*)f_3831},
{"f_3527:srfi_2d4_2escm",(void*)f_3527},
{"f_3523:srfi_2d4_2escm",(void*)f_3523},
{"f_2818:srfi_2d4_2escm",(void*)f_2818},
{"f_2811:srfi_2d4_2escm",(void*)f_2811},
{"f_2974:srfi_2d4_2escm",(void*)f_2974},
{"f_2296:srfi_2d4_2escm",(void*)f_2296},
{"f_2137:srfi_2d4_2escm",(void*)f_2137},
{"f_3507:srfi_2d4_2escm",(void*)f_3507},
{"f_3503:srfi_2d4_2escm",(void*)f_3503},
{"f_2676:srfi_2d4_2escm",(void*)f_2676},
{"f_3795:srfi_2d4_2escm",(void*)f_3795},
{"f_3335:srfi_2d4_2escm",(void*)f_3335},
{"f_3084:srfi_2d4_2escm",(void*)f_3084},
{"f_2664:srfi_2d4_2escm",(void*)f_2664},
{"f_3575:srfi_2d4_2escm",(void*)f_3575},
{"f_2578:srfi_2d4_2escm",(void*)f_2578},
{"f_3774:srfi_2d4_2escm",(void*)f_3774},
{"f_3571:srfi_2d4_2escm",(void*)f_3571},
{"f_2174:srfi_2d4_2escm",(void*)f_2174},
{"f_2573:srfi_2d4_2escm",(void*)f_2573},
{"f_3579:srfi_2d4_2escm",(void*)f_3579},
{"f_3825:srfi_2d4_2escm",(void*)f_3825},
{"f_2681:srfi_2d4_2escm",(void*)f_2681},
{"f_2931:srfi_2d4_2escm",(void*)f_2931},
{"f_4228:srfi_2d4_2escm",(void*)f_4228},
{"f_3114:srfi_2d4_2escm",(void*)f_3114},
{"f_3768:srfi_2d4_2escm",(void*)f_3768},
{"f_3895:srfi_2d4_2escm",(void*)f_3895},
{"f_3892:srfi_2d4_2escm",(void*)f_3892},
{"f_3099:srfi_2d4_2escm",(void*)f_3099},
{"f_3105:srfi_2d4_2escm",(void*)f_3105},
{"f_2636:srfi_2d4_2escm",(void*)f_2636},
{"f_2597:srfi_2d4_2escm",(void*)f_2597},
{"f_1582:srfi_2d4_2escm",(void*)f_1582},
{"f_4200:srfi_2d4_2escm",(void*)f_4200},
{"f_4092:srfi_2d4_2escm",(void*)f_4092},
{"f_3174:srfi_2d4_2escm",(void*)f_3174},
{"f_3744:srfi_2d4_2escm",(void*)f_3744},
{"f_3584:srfi_2d4_2escm",(void*)f_3584},
{"f_1590:srfi_2d4_2escm",(void*)f_1590},
{"f_3165:srfi_2d4_2escm",(void*)f_3165},
{"f_3353:srfi_2d4_2escm",(void*)f_3353},
{"f_3347:srfi_2d4_2escm",(void*)f_3347},
{"f_3341:srfi_2d4_2escm",(void*)f_3341},
{"f_1506:srfi_2d4_2escm",(void*)f_1506},
{"f_1500:srfi_2d4_2escm",(void*)f_1500},
{"f_3807:srfi_2d4_2escm",(void*)f_3807},
{"f_3135:srfi_2d4_2escm",(void*)f_3135},
{"f_4052:srfi_2d4_2escm",(void*)f_4052},
{"f_3801:srfi_2d4_2escm",(void*)f_3801},
{"f_3129:srfi_2d4_2escm",(void*)f_3129},
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
o|eliminated procedure checks: 105 
o|specializations:
o|  1 (##sys#check-input-port * * *)
o|  1 (##sys#check-output-port * * *)
o|  1 (assq * (list-of pair))
o|  1 (memq * list)
o|safe globals: (f64vector-set! f32vector-set! s32vector-set! u32vector-set! s16vector-set! u16vector-set! s8vector-set! u8vector-set! f64vector-length f32vector-length s32vector-length u32vector-length s16vector-length u16vector-length s8vector-length u8vector-length ##sys#check-exact-interval) 
o|Removed `not' forms: 9 
o|inlining procedure: k1490 
o|inlining procedure: k1490 
o|contracted procedure: "(srfi-4.scm:105) g101102" 
o|inlining procedure: k1564 
o|inlining procedure: k1564 
o|contracted procedure: "(srfi-4.scm:112) g119120" 
o|inlining procedure: k1603 
o|inlining procedure: k1603 
o|contracted procedure: "(srfi-4.scm:121) g136137" 
o|inlining procedure: k1639 
o|inlining procedure: k1639 
o|contracted procedure: "(srfi-4.scm:128) g154155" 
o|inlining procedure: k1678 
o|inlining procedure: k1678 
o|contracted procedure: "(srfi-4.scm:139) g175176" 
o|inlining procedure: k1714 
o|inlining procedure: k1714 
o|contracted procedure: k1742 
o|inlining procedure: k1739 
o|inlining procedure: k1739 
o|contracted procedure: "(srfi-4.scm:148) g193194" 
o|inlining procedure: k1769 
o|inlining procedure: k1769 
o|inlining procedure: k1828 
o|inlining procedure: k1828 
o|contracted procedure: "(srfi-4.scm:155) g211212" 
o|inlining procedure: k1808 
o|inlining procedure: k1808 
o|inlining procedure: k1865 
o|inlining procedure: k1865 
o|contracted procedure: "(srfi-4.scm:167) g228229" 
o|inlining procedure: k1845 
o|inlining procedure: k1845 
o|inlining procedure: k1910 
o|contracted procedure: "(srfi-4.scm:270) ext-alloc360" 
o|inlining procedure: k1910 
o|inlining procedure: k1928 
o|inlining procedure: "(srfi-4.scm:280) ext-free365" 
o|inlining procedure: k1928 
o|contracted procedure: k1973 
o|inlining procedure: k1970 
o|inlining procedure: k1985 
o|inlining procedure: k1985 
o|inlining procedure: k1970 
o|contracted procedure: k2071 
o|inlining procedure: k2068 
o|inlining procedure: k2083 
o|inlining procedure: k2083 
o|inlining procedure: k2068 
o|contracted procedure: k2169 
o|inlining procedure: k2166 
o|inlining procedure: k2181 
o|inlining procedure: k2181 
o|inlining procedure: k2166 
o|contracted procedure: k2268 
o|inlining procedure: k2265 
o|inlining procedure: k2280 
o|inlining procedure: k2280 
o|inlining procedure: k2265 
o|contracted procedure: k2367 
o|inlining procedure: k2364 
o|inlining procedure: k2379 
o|inlining procedure: k2379 
o|inlining procedure: k2364 
o|contracted procedure: k2466 
o|inlining procedure: k2463 
o|inlining procedure: k2478 
o|inlining procedure: k2478 
o|inlining procedure: k2463 
o|contracted procedure: k2565 
o|inlining procedure: k2562 
o|inlining procedure: k2580 
o|inlining procedure: k2580 
o|inlining procedure: k2562 
o|contracted procedure: k2668 
o|inlining procedure: k2665 
o|inlining procedure: k2683 
o|inlining procedure: k2683 
o|inlining procedure: k2665 
o|inlining procedure: k2753 
o|inlining procedure: k2753 
o|inlining procedure: k2789 
o|inlining procedure: k2789 
o|inlining procedure: k2825 
o|inlining procedure: k2825 
o|inlining procedure: k2861 
o|inlining procedure: k2861 
o|inlining procedure: k2897 
o|inlining procedure: k2897 
o|inlining procedure: k2933 
o|inlining procedure: k2933 
o|inlining procedure: k2969 
o|inlining procedure: k2969 
o|inlining procedure: k3005 
o|inlining procedure: k3005 
o|inlining procedure: k3086 
o|inlining procedure: k3086 
o|inlining procedure: k3116 
o|inlining procedure: k3116 
o|inlining procedure: k3146 
o|inlining procedure: k3146 
o|inlining procedure: k3176 
o|inlining procedure: k3176 
o|inlining procedure: k3206 
o|inlining procedure: k3206 
o|inlining procedure: k3235 
o|inlining procedure: k3235 
o|inlining procedure: k3264 
o|inlining procedure: k3264 
o|inlining procedure: k3293 
o|inlining procedure: k3293 
o|inlining procedure: k3399 
o|inlining procedure: k3399 
o|inlining procedure: k3432 
o|inlining procedure: k3432 
o|substituted constant variable: a3590 
o|inlining procedure: k3586 
o|inlining procedure: k3609 
o|inlining procedure: k3609 
o|inlining procedure: k3586 
o|inlining procedure: k3651 
o|inlining procedure: k3651 
o|contracted procedure: "(srfi-4.scm:626) g965966" 
o|inlining procedure: k3750 
o|inlining procedure: k3750 
o|contracted procedure: "(srfi-4.scm:625) g956957" 
o|inlining procedure: k3726 
o|inlining procedure: k3726 
o|substituted constant variable: a3867 
o|substituted constant variable: a3868 
o|inlining procedure: k3903 
o|inlining procedure: k3903 
o|inlining procedure: k3920 
o|inlining procedure: k3920 
o|inlining procedure: k3929 
o|inlining procedure: k3929 
o|contracted procedure: "(srfi-4.scm:648) g10471048" 
o|inlining procedure: k3944 
o|inlining procedure: k3944 
o|contracted procedure: "(srfi-4.scm:647) g10351036" 
o|inlining procedure: k3874 
o|inlining procedure: k3874 
o|inlining procedure: k3972 
o|inlining procedure: k3972 
o|substituted constant variable: a4027 
o|substituted constant variable: a4028 
o|contracted procedure: "(srfi-4.scm:250) g349350" 
o|inlining procedure: k4150 
o|inlining procedure: k4150 
o|contracted procedure: "(srfi-4.scm:240) g334335" 
o|inlining procedure: k4180 
o|inlining procedure: k4180 
o|contracted procedure: "(srfi-4.scm:230) g319320" 
o|inlining procedure: k4210 
o|inlining procedure: k4210 
o|contracted procedure: "(srfi-4.scm:220) g304305" 
o|inlining procedure: k4240 
o|inlining procedure: k4240 
o|contracted procedure: "(srfi-4.scm:210) g289290" 
o|inlining procedure: k4270 
o|inlining procedure: k4270 
o|contracted procedure: "(srfi-4.scm:200) g274275" 
o|inlining procedure: k4300 
o|inlining procedure: k4300 
o|contracted procedure: "(srfi-4.scm:190) g259260" 
o|inlining procedure: k4330 
o|inlining procedure: k4330 
o|contracted procedure: "(srfi-4.scm:180) g244245" 
o|inlining procedure: k4360 
o|inlining procedure: k4360 
o|simplifications: ((if . 1)) 
o|replaced variables: 311 
o|removed binding forms: 323 
o|substituted constant variable: loc106 
o|substituted constant variable: from104 
o|substituted constant variable: from104 
o|substituted constant variable: loc106 
o|substituted constant variable: loc124 
o|substituted constant variable: from122 
o|substituted constant variable: from122 
o|substituted constant variable: loc124 
o|substituted constant variable: loc141 
o|substituted constant variable: from139 
o|substituted constant variable: from139 
o|substituted constant variable: loc141 
o|substituted constant variable: loc159 
o|substituted constant variable: from157 
o|substituted constant variable: from157 
o|substituted constant variable: loc159 
o|substituted constant variable: loc180 
o|substituted constant variable: from178 
o|substituted constant variable: from178 
o|substituted constant variable: loc180 
o|substituted constant variable: loc198 
o|substituted constant variable: from196 
o|substituted constant variable: from196 
o|substituted constant variable: loc198 
o|substituted constant variable: loc216 
o|substituted constant variable: from214 
o|substituted constant variable: from214 
o|substituted constant variable: loc216 
o|substituted constant variable: loc233 
o|substituted constant variable: from231 
o|substituted constant variable: from231 
o|substituted constant variable: loc233 
o|substituted constant variable: r30874461 
o|substituted constant variable: r31174463 
o|substituted constant variable: r31474465 
o|substituted constant variable: r31774467 
o|substituted constant variable: r32074469 
o|substituted constant variable: r32364471 
o|substituted constant variable: r32654473 
o|substituted constant variable: r32944475 
o|substituted constant variable: from968 
o|substituted constant variable: from968 
o|substituted constant variable: from959 
o|substituted constant variable: from959 
o|substituted constant variable: loc1052 
o|substituted constant variable: loc1052 
o|substituted constant variable: loc1040 
o|substituted constant variable: from1038 
o|substituted constant variable: from1038 
o|substituted constant variable: loc1040 
o|substituted constant variable: loc354 
o|substituted constant variable: from352 
o|substituted constant variable: from352 
o|substituted constant variable: loc354 
o|substituted constant variable: loc339 
o|substituted constant variable: from337 
o|substituted constant variable: from337 
o|substituted constant variable: loc339 
o|substituted constant variable: loc324 
o|substituted constant variable: from322 
o|substituted constant variable: from322 
o|substituted constant variable: loc324 
o|substituted constant variable: loc309 
o|substituted constant variable: from307 
o|substituted constant variable: from307 
o|substituted constant variable: loc309 
o|substituted constant variable: loc294 
o|substituted constant variable: from292 
o|substituted constant variable: from292 
o|substituted constant variable: loc294 
o|substituted constant variable: loc279 
o|substituted constant variable: from277 
o|substituted constant variable: from277 
o|substituted constant variable: loc279 
o|substituted constant variable: loc264 
o|substituted constant variable: from262 
o|substituted constant variable: from262 
o|substituted constant variable: loc264 
o|substituted constant variable: loc249 
o|substituted constant variable: from247 
o|substituted constant variable: from247 
o|substituted constant variable: loc249 
o|replaced variables: 48 
o|removed binding forms: 363 
o|inlining procedure: k1992 
o|inlining procedure: k1992 
o|inlining procedure: k2090 
o|inlining procedure: k2090 
o|inlining procedure: k2188 
o|inlining procedure: k2188 
o|inlining procedure: k2287 
o|inlining procedure: k2287 
o|inlining procedure: k2386 
o|inlining procedure: k2386 
o|inlining procedure: k2485 
o|inlining procedure: k2485 
o|inlining procedure: k2588 
o|inlining procedure: k2588 
o|inlining procedure: k2691 
o|inlining procedure: k2691 
o|inlining procedure: k4044 
o|inlining procedure: k4044 
o|replaced variables: 1 
o|removed binding forms: 88 
o|substituted constant variable: r19934625 
o|substituted constant variable: r20914629 
o|substituted constant variable: r21894633 
o|substituted constant variable: r22884637 
o|substituted constant variable: r23874641 
o|substituted constant variable: r24864645 
o|substituted constant variable: r25894649 
o|substituted constant variable: r26924653 
o|replaced variables: 8 
o|removed binding forms: 12 
o|removed conditional forms: 8 
o|removed binding forms: 16 
o|simplifications: ((##core#call . 351) (if . 95)) 
o|  call simplifications:
o|    list
o|    not
o|    fx=	2
o|    fx-	2
o|    fx*	2
o|    ##sys#list	9
o|    cadr
o|    caddr
o|    symbol?
o|    memq
o|    ##sys#check-byte-vector	2
o|    eq?	6
o|    ##sys#size	5
o|    ##sys#slot	10
o|    ##sys#structure?	8
o|    fx>=	8
o|    fx+	14
o|    cons	8
o|    ##sys#check-list	8
o|    car	31
o|    null?	62
o|    cdr	31
o|    ##sys#make-structure	12
o|    ##sys#foreign-fixnum-argument
o|    ##sys#check-number	4
o|    ##sys#fits-in-int?
o|    negative?
o|    ##sys#fits-in-unsigned-int?
o|    fx<=	21
o|    fx<	22
o|    ##sys#check-structure	37
o|    ##sys#check-exact	37
o|contracted procedure: k1487 
o|contracted procedure: k1493 
o|contracted procedure: k1502 
o|contracted procedure: k1508 
o|contracted procedure: k1514 
o|contracted procedure: k1520 
o|contracted procedure: k1526 
o|contracted procedure: k1532 
o|contracted procedure: k1538 
o|contracted procedure: k1544 
o|contracted procedure: k1550 
o|contracted procedure: k1553 
o|contracted procedure: k1561 
o|contracted procedure: k1574 
o|contracted procedure: k1567 
o|contracted procedure: k1583 
o|contracted procedure: k1592 
o|contracted procedure: k1595 
o|contracted procedure: k1600 
o|contracted procedure: k1613 
o|contracted procedure: k1606 
o|contracted procedure: k1625 
o|contracted procedure: k1628 
o|contracted procedure: k1636 
o|contracted procedure: k1649 
o|contracted procedure: k1642 
o|contracted procedure: k1658 
o|contracted procedure: k1667 
o|contracted procedure: k1670 
o|contracted procedure: k1675 
o|contracted procedure: k1688 
o|contracted procedure: k1681 
o|contracted procedure: k1700 
o|contracted procedure: k1711 
o|contracted procedure: k1724 
o|contracted procedure: k1717 
o|contracted procedure: k1733 
o|contracted procedure: k1749 
o|contracted procedure: k1755 
o|contracted procedure: k1766 
o|contracted procedure: k1779 
o|contracted procedure: k1772 
o|contracted procedure: k1788 
o|contracted procedure: k1797 
o|contracted procedure: k1800 
o|contracted procedure: k1805 
o|contracted procedure: k1818 
o|contracted procedure: k1811 
o|contracted procedure: k1834 
o|contracted procedure: k1837 
o|contracted procedure: k1842 
o|contracted procedure: k1855 
o|contracted procedure: k1848 
o|contracted procedure: k1903 
o|contracted procedure: k2032 
o|contracted procedure: k1943 
o|contracted procedure: k2026 
o|contracted procedure: k1946 
o|contracted procedure: k2020 
o|contracted procedure: k1949 
o|contracted procedure: k2014 
o|contracted procedure: k1952 
o|contracted procedure: k2008 
o|contracted procedure: k1955 
o|contracted procedure: k2002 
o|contracted procedure: k1958 
o|contracted procedure: k1961 
o|contracted procedure: k1964 
o|contracted procedure: k2130 
o|contracted procedure: k2041 
o|contracted procedure: k2124 
o|contracted procedure: k2044 
o|contracted procedure: k2118 
o|contracted procedure: k2047 
o|contracted procedure: k2112 
o|contracted procedure: k2050 
o|contracted procedure: k2106 
o|contracted procedure: k2053 
o|contracted procedure: k2100 
o|contracted procedure: k2056 
o|contracted procedure: k2059 
o|contracted procedure: k2062 
o|contracted procedure: k2229 
o|contracted procedure: k2139 
o|contracted procedure: k2223 
o|contracted procedure: k2142 
o|contracted procedure: k2217 
o|contracted procedure: k2145 
o|contracted procedure: k2211 
o|contracted procedure: k2148 
o|contracted procedure: k2205 
o|contracted procedure: k2151 
o|contracted procedure: k2199 
o|contracted procedure: k2154 
o|contracted procedure: k2157 
o|contracted procedure: k2160 
o|contracted procedure: k2328 
o|contracted procedure: k2238 
o|contracted procedure: k2322 
o|contracted procedure: k2241 
o|contracted procedure: k2316 
o|contracted procedure: k2244 
o|contracted procedure: k2310 
o|contracted procedure: k2247 
o|contracted procedure: k2304 
o|contracted procedure: k2250 
o|contracted procedure: k2298 
o|contracted procedure: k2253 
o|contracted procedure: k2256 
o|contracted procedure: k2259 
o|contracted procedure: k2427 
o|contracted procedure: k2337 
o|contracted procedure: k2421 
o|contracted procedure: k2340 
o|contracted procedure: k2415 
o|contracted procedure: k2343 
o|contracted procedure: k2409 
o|contracted procedure: k2346 
o|contracted procedure: k2403 
o|contracted procedure: k2349 
o|contracted procedure: k2397 
o|contracted procedure: k2352 
o|contracted procedure: k2355 
o|contracted procedure: k2358 
o|contracted procedure: k2370 
o|contracted procedure: k2526 
o|contracted procedure: k2436 
o|contracted procedure: k2520 
o|contracted procedure: k2439 
o|contracted procedure: k2514 
o|contracted procedure: k2442 
o|contracted procedure: k2508 
o|contracted procedure: k2445 
o|contracted procedure: k2502 
o|contracted procedure: k2448 
o|contracted procedure: k2496 
o|contracted procedure: k2451 
o|contracted procedure: k2454 
o|contracted procedure: k2457 
o|contracted procedure: k2469 
o|contracted procedure: k2629 
o|contracted procedure: k2535 
o|contracted procedure: k2623 
o|contracted procedure: k2538 
o|contracted procedure: k2617 
o|contracted procedure: k2541 
o|contracted procedure: k2611 
o|contracted procedure: k2544 
o|contracted procedure: k2605 
o|contracted procedure: k2547 
o|contracted procedure: k2599 
o|contracted procedure: k2550 
o|contracted procedure: k2553 
o|contracted procedure: k2556 
o|contracted procedure: k2568 
o|contracted procedure: k2732 
o|contracted procedure: k2638 
o|contracted procedure: k2726 
o|contracted procedure: k2641 
o|contracted procedure: k2720 
o|contracted procedure: k2644 
o|contracted procedure: k2714 
o|contracted procedure: k2647 
o|contracted procedure: k2708 
o|contracted procedure: k2650 
o|contracted procedure: k2702 
o|contracted procedure: k2653 
o|contracted procedure: k2656 
o|contracted procedure: k2659 
o|contracted procedure: k2671 
o|contracted procedure: k2741 
o|contracted procedure: k2764 
o|contracted procedure: k2777 
o|contracted procedure: k2800 
o|contracted procedure: k2813 
o|contracted procedure: k2836 
o|contracted procedure: k2849 
o|contracted procedure: k2872 
o|contracted procedure: k2885 
o|contracted procedure: k2908 
o|contracted procedure: k2921 
o|contracted procedure: k2944 
o|contracted procedure: k2957 
o|contracted procedure: k2980 
o|contracted procedure: k2993 
o|contracted procedure: k3016 
o|contracted procedure: k3077 
o|contracted procedure: k3089 
o|contracted procedure: k3101 
o|contracted procedure: k3107 
o|contracted procedure: k3119 
o|contracted procedure: k3131 
o|contracted procedure: k3137 
o|contracted procedure: k3149 
o|contracted procedure: k3161 
o|contracted procedure: k3167 
o|contracted procedure: k3179 
o|contracted procedure: k3191 
o|contracted procedure: k3197 
o|contracted procedure: k3209 
o|contracted procedure: k3220 
o|contracted procedure: k3226 
o|contracted procedure: k3238 
o|contracted procedure: k3249 
o|contracted procedure: k3255 
o|contracted procedure: k3267 
o|contracted procedure: k3278 
o|contracted procedure: k3284 
o|contracted procedure: k3296 
o|contracted procedure: k3307 
o|contracted procedure: k3364 
o|contracted procedure: k3375 
o|contracted procedure: k3378 
o|contracted procedure: k3385 
o|contracted procedure: k3393 
o|contracted procedure: k3396 
o|contracted procedure: k3402 
o|contracted procedure: k3423 
o|contracted procedure: k3426 
o|contracted procedure: k3435 
o|contracted procedure: k3581 
o|contracted procedure: k3637 
o|contracted procedure: k3594 
o|contracted procedure: k3600 
o|contracted procedure: k3603 
o|contracted procedure: k3606 
o|contracted procedure: k3625 
o|contracted procedure: k3614 
o|contracted procedure: k3678 
o|contracted procedure: k3682 
o|contracted procedure: k3686 
o|contracted procedure: k3690 
o|contracted procedure: k3694 
o|contracted procedure: k3698 
o|contracted procedure: k3702 
o|contracted procedure: k3706 
o|contracted procedure: k3648 
o|contracted procedure: k3664 
o|contracted procedure: k3671 
o|contracted procedure: k3712 
o|contracted procedure: k3715 
o|contracted procedure: k3718 
o|contracted procedure: k3783 
o|contracted procedure: k3769 
o|contracted procedure: k3775 
o|contracted procedure: k3779 
o|contracted procedure: k3787 
o|contracted procedure: k3747 
o|contracted procedure: k3760 
o|contracted procedure: k3753 
o|contracted procedure: k3791 
o|contracted procedure: k3723 
o|contracted procedure: k3736 
o|contracted procedure: k3729 
o|contracted procedure: k4005 
o|contracted procedure: k3845 
o|contracted procedure: k3999 
o|contracted procedure: k3848 
o|contracted procedure: k3993 
o|contracted procedure: k3851 
o|contracted procedure: k3987 
o|contracted procedure: k3854 
o|contracted procedure: k3981 
o|contracted procedure: k3857 
o|contracted procedure: k3975 
o|contracted procedure: k3860 
o|contracted procedure: k3863 
o|contracted procedure: k3936 
o|contracted procedure: k3896 
o|inlining procedure: k3903 
o|inlining procedure: k3903 
o|contracted procedure: k3923 
o|contracted procedure: k3926 
o|contracted procedure: k3964 
o|contracted procedure: k3941 
o|contracted procedure: k3954 
o|contracted procedure: k3947 
o|contracted procedure: k3968 
o|contracted procedure: k3871 
o|contracted procedure: k3884 
o|contracted procedure: k3877 
o|contracted procedure: k4085 
o|contracted procedure: k4014 
o|contracted procedure: k4079 
o|contracted procedure: k4017 
o|contracted procedure: k4073 
o|contracted procedure: k4020 
o|contracted procedure: k4067 
o|contracted procedure: k4023 
o|contracted procedure: k4029 
o|contracted procedure: k4032 
o|contracted procedure: k4035 
o|contracted procedure: k4038 
o|contracted procedure: k4041 
o|contracted procedure: k4054 
o|contracted procedure: k4061 
o|contracted procedure: k4130 
o|contracted procedure: k4094 
o|contracted procedure: k4124 
o|contracted procedure: k4097 
o|contracted procedure: k4118 
o|contracted procedure: k4100 
o|contracted procedure: k4112 
o|contracted procedure: k4103 
o|contracted procedure: k4142 
o|contracted procedure: k4147 
o|contracted procedure: k4160 
o|contracted procedure: k4153 
o|contracted procedure: k4172 
o|contracted procedure: k4177 
o|contracted procedure: k4190 
o|contracted procedure: k4183 
o|contracted procedure: k4202 
o|contracted procedure: k4207 
o|contracted procedure: k4220 
o|contracted procedure: k4213 
o|contracted procedure: k4232 
o|contracted procedure: k4237 
o|contracted procedure: k4250 
o|contracted procedure: k4243 
o|contracted procedure: k4262 
o|contracted procedure: k4267 
o|contracted procedure: k4280 
o|contracted procedure: k4273 
o|contracted procedure: k4292 
o|contracted procedure: k4297 
o|contracted procedure: k4310 
o|contracted procedure: k4303 
o|contracted procedure: k4322 
o|contracted procedure: k4327 
o|contracted procedure: k4340 
o|contracted procedure: k4333 
o|contracted procedure: k4352 
o|contracted procedure: k4357 
o|contracted procedure: k4370 
o|contracted procedure: k4363 
o|simplifications: ((let . 13)) 
o|removed binding forms: 334 
o|inlining procedure: "(srfi-4.scm:542) pack" 
o|inlining procedure: "(srfi-4.scm:541) pack" 
o|inlining procedure: "(srfi-4.scm:540) pack" 
o|inlining procedure: "(srfi-4.scm:539) pack" 
o|inlining procedure: "(srfi-4.scm:538) pack" 
o|inlining procedure: "(srfi-4.scm:537) pack" 
o|inlining procedure: "(srfi-4.scm:536) pack" 
o|inlining procedure: "(srfi-4.scm:535) pack" 
o|replaced variables: 235 
o|removed binding forms: 1 
o|inlining procedure: k1580 
o|inlining procedure: k1619 
o|inlining procedure: k1655 
o|inlining procedure: k1694 
o|inlining procedure: k1730 
o|inlining procedure: k1785 
o|inlining procedure: k1913 
o|removed side-effect free assignment to unused variable: pack 
o|substituted constant variable: tag8454979 
o|substituted constant variable: loc8464980 
o|substituted constant variable: tag8454986 
o|substituted constant variable: loc8464987 
o|substituted constant variable: tag8454993 
o|substituted constant variable: loc8464994 
o|substituted constant variable: tag8455000 
o|substituted constant variable: loc8465001 
o|substituted constant variable: tag8455007 
o|substituted constant variable: loc8465008 
o|substituted constant variable: tag8455014 
o|substituted constant variable: loc8465015 
o|substituted constant variable: tag8455021 
o|substituted constant variable: loc8465022 
o|substituted constant variable: tag8455028 
o|substituted constant variable: loc8465029 
o|inlining procedure: k4166 
o|inlining procedure: k4196 
o|inlining procedure: k4226 
o|inlining procedure: k4256 
o|inlining procedure: k4286 
o|inlining procedure: k4316 
o|inlining procedure: k4346 
o|inlining procedure: k4376 
o|simplifications: ((if . 1)) 
o|replaced variables: 8 
o|removed binding forms: 89 
o|removed binding forms: 40 
o|contracted procedure: k3453 
o|contracted procedure: k3457 
o|contracted procedure: k3461 
o|contracted procedure: k3465 
o|contracted procedure: k3469 
o|contracted procedure: k3473 
o|contracted procedure: k3477 
o|contracted procedure: k3481 
o|removed binding forms: 22 
o|direct leaf routine/allocation: doloop402403 0 
o|direct leaf routine/allocation: doloop431432 0 
o|direct leaf routine/allocation: doloop460461 0 
o|direct leaf routine/allocation: doloop489490 0 
o|direct leaf routine/allocation: doloop518519 0 
o|direct leaf routine/allocation: doloop547548 0 
o|direct leaf routine/allocation: doloop576577 0 
o|direct leaf routine/allocation: doloop606607 0 
o|converted assignments to bindings: (doloop402403) 
o|converted assignments to bindings: (doloop431432) 
o|converted assignments to bindings: (doloop460461) 
o|converted assignments to bindings: (doloop489490) 
o|converted assignments to bindings: (doloop518519) 
o|converted assignments to bindings: (doloop547548) 
o|converted assignments to bindings: (doloop576577) 
o|converted assignments to bindings: (doloop606607) 
o|simplifications: ((let . 8)) 
o|customizable procedures: (pack-copy unpack unpack-copy k4050 k3906 subnvector g926927 k3438 k3405 loop823 loop816 loop809 loop802 loop795 loop788 loop781 loop774 doloop731732 doloop718719 doloop705706 doloop692693 doloop679680 doloop666667 doloop653654 doloop640641 k2674 k2571 alloc370 ##sys#check-exact-interval) 
o|calls to known targets: 116 
o|identified direct recursive calls: f_1983 1 
o|identified direct recursive calls: f_2081 1 
o|identified direct recursive calls: f_2179 1 
o|identified direct recursive calls: f_2278 1 
o|identified direct recursive calls: f_2377 1 
o|identified direct recursive calls: f_2476 1 
o|identified direct recursive calls: f_2578 1 
o|identified direct recursive calls: f_2681 1 
o|identified direct recursive calls: f_3084 1 
o|identified direct recursive calls: f_3114 1 
o|identified direct recursive calls: f_3144 1 
o|identified direct recursive calls: f_3174 1 
o|identified direct recursive calls: f_3204 1 
o|identified direct recursive calls: f_3233 1 
o|identified direct recursive calls: f_3262 1 
o|identified direct recursive calls: f_3291 1 
o|fast box initializations: 16 
o|fast global references: 36 
o|fast global assignments: 5 
o|dropping unused closure argument: f_1908 
o|dropping unused closure argument: f_3419 
o|dropping unused closure argument: f_3389 
o|dropping unused closure argument: f_3371 
o|dropping unused closure argument: f_1485 
o|dropping unused closure argument: f_3710 
*/
/* end of file */
