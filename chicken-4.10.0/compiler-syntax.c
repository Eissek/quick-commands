/* Generated from compiler-syntax.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:02
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: compiler-syntax.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -extend private-namespace.scm -no-trace -output-file compiler-syntax.c
   unit: compiler_2dsyntax
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[86];
static double C_possibly_force_alignment;


C_noret_decl(f_2247)
static void C_ccall f_2247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2243)
static void C_ccall f_2243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1901)
static void C_ccall f_1901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1428)
static void C_fcall f_1428(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2269)
static void C_ccall f_2269(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2267)
static void C_ccall f_2267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2263)
static void C_ccall f_2263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2310)
static void C_ccall f_2310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2251)
static void C_ccall f_2251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2259)
static void C_ccall f_2259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2255)
static void C_ccall f_2255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3299)
static void C_fcall f_3299(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3297)
static void C_ccall f_3297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1485)
static C_word C_fcall f_1485(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_1841)
static void C_ccall f_1841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2286)
static void C_ccall f_2286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1495)
static void C_fcall f_1495(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1859)
static void C_ccall f_1859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1198)
static void C_ccall f_1198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2276)
static void C_ccall f_2276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2273)
static void C_ccall f_2273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1830)
static void C_ccall f_1830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1837)
static void C_ccall f_1837(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2298)
static void C_ccall f_2298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1883)
static void C_ccall f_1883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3002)
static void C_ccall f_3002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3253)
static void C_fcall f_3253(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2476)
static void C_fcall f_2476(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1889)
static void C_ccall f_1889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1886)
static void C_ccall f_1886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1447)
static void C_fcall f_1447(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1892)
static void C_ccall f_1892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3079)
static void C_ccall f_3079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2461)
static void C_ccall f_2461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2467)
static void C_ccall f_2467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2464)
static void C_ccall f_2464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1895)
static void C_ccall f_1895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1898)
static void C_ccall f_1898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2734)
static void C_fcall f_2734(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1705)
static void C_ccall f_1705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1702)
static void C_ccall f_1702(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2400)
static void C_ccall f_2400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2408)
static void C_ccall f_2408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2393)
static void C_ccall f_2393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2431)
static void C_ccall f_2431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2434)
static void C_ccall f_2434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2437)
static void C_ccall f_2437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2383)
static void C_ccall f_2383(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2381)
static void C_ccall f_2381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3034)
static void C_ccall f_3034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2424)
static void C_ccall f_2424(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2428)
static void C_ccall f_2428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2770)
static void C_fcall f_2770(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2377)
static void C_ccall f_2377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2373)
static void C_ccall f_2373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2361)
static void C_ccall f_2361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2721)
static void C_fcall f_2721(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2369)
static void C_ccall f_2369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2365)
static void C_ccall f_2365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2107)
static void C_ccall f_2107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1756)
static void C_fcall f_1756(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2109)
static void C_ccall f_2109(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3167)
static void C_ccall f_3167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3081)
static void C_fcall f_3081(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3160)
static C_word C_fcall f_3160(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_3169)
static void C_fcall f_3169(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2845)
static void C_fcall f_2845(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2832)
static void C_fcall f_2832(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2830)
static void C_ccall f_2830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1862)
static void C_ccall f_1862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1864)
static void C_ccall f_1864(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2487)
static void C_ccall f_2487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2948)
static void C_ccall f_2948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3046)
static void C_ccall f_3046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2502)
static void C_ccall f_2502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2932)
static void C_ccall f_2932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2504)
static C_word C_fcall f_2504(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_2572)
static void C_ccall f_2572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2574)
static void C_fcall f_2574(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2991)
static void C_fcall f_2991(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2452)
static void C_ccall f_2452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2918)
static void C_ccall f_2918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2458)
static void C_ccall f_2458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2455)
static void C_ccall f_2455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2982)
static void C_ccall f_2982(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2440)
static void C_ccall f_2440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2449)
static void C_ccall f_2449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2446)
static void C_ccall f_2446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2443)
static void C_ccall f_2443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2976)
static void C_ccall f_2976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2973)
static void C_ccall f_2973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2970)
static void C_ccall f_2970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2979)
static void C_ccall f_2979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2531)
static void C_ccall f_2531(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2519)
static void C_ccall f_2519(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3217)
static void C_fcall f_3217(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3204)
static void C_fcall f_3204(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(C_compiler_2dsyntax_toplevel)
C_externexport void C_ccall C_compiler_2dsyntax_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2192)
static void C_ccall f_2192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2180)
static void C_ccall f_2180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2182)
static void C_ccall f_2182(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2172)
static void C_ccall f_2172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2014)
static void C_ccall f_2014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2176)
static void C_ccall f_2176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2017)
static void C_ccall f_2017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2011)
static void C_ccall f_2011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2961)
static void C_ccall f_2961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2964)
static void C_ccall f_2964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2967)
static void C_ccall f_2967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2640)
static void C_ccall f_2640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2642)
static void C_fcall f_2642(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2160)
static void C_ccall f_2160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2168)
static void C_ccall f_2168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2164)
static void C_ccall f_2164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2952)
static void C_ccall f_2952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2954)
static void C_ccall f_2954(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2958)
static void C_ccall f_2958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1301)
static void C_ccall f_1301(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_1307)
static void C_ccall f_1307(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2156)
static void C_ccall f_2156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3017)
static void C_ccall f_3017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3019)
static C_word C_fcall f_3019(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_3123)
static void C_ccall f_3123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3125)
static void C_fcall f_3125(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2686)
static void C_fcall f_2686(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1332)
static void C_ccall f_1332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1248)
static void C_ccall f_1248(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1335)
static void C_fcall f_1335(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2684)
static void C_ccall f_2684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1329)
static void C_fcall f_1329(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2677)
static C_word C_fcall f_2677(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_1342)
static void C_ccall f_1342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1339)
static void C_ccall f_1339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2113)
static void C_ccall f_2113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3407)
static void C_ccall f_3407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1221)
static void C_ccall f_1221(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1221)
static void C_ccall f_1221r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1229)
static void C_fcall f_1229(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1352)
static void C_ccall f_1352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1238)
static void C_fcall f_1238(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1364)
static void C_ccall f_1364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1361)
static void C_ccall f_1361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1358)
static void C_ccall f_1358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1201)
static void C_ccall f_1201(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2023)
static void C_ccall f_2023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1204)
static void C_ccall f_1204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1207)
static void C_ccall f_1207(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1376)
static void C_ccall f_1376(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2026)
static void C_ccall f_2026(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1373)
static void C_ccall f_1373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1370)
static void C_ccall f_1370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2020)
static void C_ccall f_2020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1367)
static void C_ccall f_1367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1211)
static void C_ccall f_1211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1383)
static void C_ccall f_1383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1215)
static void C_ccall f_1215(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1379)
static void C_ccall f_1379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1392)
static void C_ccall f_1392(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1395)
static void C_ccall f_1395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1386)
static void C_ccall f_1386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3312)
static void C_fcall f_3312(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1398)
static void C_ccall f_1398(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1680)
static void C_ccall f_1680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1600)
static void C_ccall f_1600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1566)
static void C_ccall f_1566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1560)
static void C_ccall f_1560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1659)
static void C_ccall f_1659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1508)
static void C_ccall f_1508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2889)
static void C_fcall f_2889(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1505)
static void C_ccall f_1505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1638)
static void C_ccall f_1638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1284)
static void C_ccall f_1284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1287)
static void C_ccall f_1287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1290)
static void C_ccall f_1290(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1293)
static void C_ccall f_1293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1296)
static void C_ccall f_1296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1617)
static void C_ccall f_1617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1299)
static void C_ccall f_1299(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1531)
static void C_ccall f_1531(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1263)
static void C_ccall f_1263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1267)
static void C_ccall f_1267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1271)
static void C_ccall f_1271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3395)
static void C_ccall f_3395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1407)
static void C_ccall f_1407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3381)
static void C_ccall f_3381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1413)
static void C_ccall f_1413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1410)
static void C_ccall f_1410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1416)
static void C_ccall f_1416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1418)
static C_word C_fcall f_1418(C_word t0);
C_noret_decl(f_1992)
static void C_ccall f_1992(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1990)
static void C_ccall f_1990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1583)
static void C_ccall f_1583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1478)
static void C_ccall f_1478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2357)
static void C_ccall f_2357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3352)
static void C_fcall f_3352(C_word t0,C_word t1,C_word t2) C_noret;

C_noret_decl(trf_1428)
static void C_fcall trf_1428(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1428(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1428(t0,t1);}

C_noret_decl(trf_3299)
static void C_fcall trf_3299(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3299(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3299(t0,t1,t2,t3);}

C_noret_decl(trf_1495)
static void C_fcall trf_1495(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1495(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1495(t0,t1,t2);}

C_noret_decl(trf_3253)
static void C_fcall trf_3253(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3253(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3253(t0,t1,t2);}

C_noret_decl(trf_2476)
static void C_fcall trf_2476(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2476(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2476(t0,t1);}

C_noret_decl(trf_1447)
static void C_fcall trf_1447(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1447(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1447(t0,t1,t2);}

C_noret_decl(trf_2734)
static void C_fcall trf_2734(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2734(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2734(t0,t1);}

C_noret_decl(trf_2770)
static void C_fcall trf_2770(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2770(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2770(t0,t1,t2);}

C_noret_decl(trf_2721)
static void C_fcall trf_2721(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2721(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2721(t0,t1,t2,t3);}

C_noret_decl(trf_1756)
static void C_fcall trf_1756(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1756(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1756(t0,t1,t2);}

C_noret_decl(trf_3081)
static void C_fcall trf_3081(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3081(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3081(t0,t1,t2);}

C_noret_decl(trf_3169)
static void C_fcall trf_3169(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3169(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3169(t0,t1,t2);}

C_noret_decl(trf_2845)
static void C_fcall trf_2845(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2845(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2845(t0,t1);}

C_noret_decl(trf_2832)
static void C_fcall trf_2832(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2832(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2832(t0,t1,t2,t3);}

C_noret_decl(trf_2574)
static void C_fcall trf_2574(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2574(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2574(t0,t1,t2);}

C_noret_decl(trf_2991)
static void C_fcall trf_2991(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2991(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2991(t0,t1);}

C_noret_decl(trf_3217)
static void C_fcall trf_3217(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3217(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3217(t0,t1);}

C_noret_decl(trf_3204)
static void C_fcall trf_3204(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3204(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3204(t0,t1,t2,t3);}

C_noret_decl(trf_2642)
static void C_fcall trf_2642(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2642(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2642(t0,t1,t2);}

C_noret_decl(trf_3125)
static void C_fcall trf_3125(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3125(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3125(t0,t1,t2);}

C_noret_decl(trf_2686)
static void C_fcall trf_2686(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2686(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2686(t0,t1,t2);}

C_noret_decl(trf_1335)
static void C_fcall trf_1335(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1335(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1335(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1329)
static void C_fcall trf_1329(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1329(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1329(t0,t1);}

C_noret_decl(trf_1229)
static void C_fcall trf_1229(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1229(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1229(t0,t1,t2);}

C_noret_decl(trf_1238)
static void C_fcall trf_1238(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1238(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1238(t0,t1,t2);}

C_noret_decl(trf_3312)
static void C_fcall trf_3312(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3312(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3312(t0,t1);}

C_noret_decl(trf_2889)
static void C_fcall trf_2889(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2889(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2889(t0,t1,t2);}

C_noret_decl(trf_3352)
static void C_fcall trf_3352(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3352(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3352(t0,t1,t2);}

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

C_noret_decl(tr8)
static void C_fcall tr8(C_proc8 k) C_regparm C_noret;
C_regparm static void C_fcall tr8(C_proc8 k){
C_word t7=C_pick(0);
C_word t6=C_pick(1);
C_word t5=C_pick(2);
C_word t4=C_pick(3);
C_word t3=C_pick(4);
C_word t2=C_pick(5);
C_word t1=C_pick(6);
C_word t0=C_pick(7);
C_adjust_stack(-8);
(k)(8,t0,t1,t2,t3,t4,t5,t6,t7);}

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

/* k2245 in k2249 in k2253 in k2257 in k2261 in k2265 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2247,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[23],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2243,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* compiler-syntax.scm:160: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[16]);}

/* k2241 in k2245 in k2249 in k2253 in k2257 in k2261 in k2265 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2243,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[16],t1);
t3=C_a_i_list(&a,7,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t2);
/* compiler-syntax.scm:160: r-c-s */
t4=*((C_word*)lf[5]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[8],lf[62],((C_word*)t0)[9],t3);}

/* k1899 in k1896 in k1893 in k1890 in k1887 in k1884 in k1881 in a1863 in k1857 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1901(C_word c,C_word t0,C_word t1){
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
C_word ab[155],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1901,2,t0,t1);}
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,2,t1,((C_word*)t0)[4]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,2,lf[41],lf[40]);
t6=C_a_i_list(&a,3,lf[42],t1,t5);
t7=C_a_i_list(&a,2,lf[43],t6);
t8=C_a_i_list(&a,2,t1,t1);
t9=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[2]);
t10=C_a_i_list(&a,2,t8,t9);
t11=C_a_i_list(&a,2,((C_word*)t0)[5],t1);
t12=C_a_i_list(&a,3,lf[44],t1,C_fix(1));
t13=C_a_i_list(&a,3,lf[44],t1,C_fix(0));
t14=C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[2],t13);
t15=C_a_i_list(&a,4,lf[45],((C_word*)t0)[7],t12,t14);
t16=C_a_i_list(&a,4,((C_word*)t0)[8],t11,t15,((C_word*)t0)[2]);
t17=C_a_i_list(&a,4,((C_word*)t0)[9],((C_word*)t0)[7],t10,t16);
t18=((C_word*)t0)[10];
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,C_a_i_list(&a,4,((C_word*)t0)[11],t4,t7,t17));}

/* next in k1414 in k1411 in k1408 in k1405 in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_fcall f_1428(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1428,NULL,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
/* compiler-syntax.scm:210: fail */
t2=((C_word*)t0)[3];
f_1335(t2,t1,C_SCHEME_TRUE,lf[26],C_SCHEME_END_OF_LIST);}
else{
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* a2268 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2269(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2269,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2273,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:145: gensym */
t6=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[37]);}

/* k2265 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2267,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[58],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2263,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:160: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[59]);}

/* k2261 in k2265 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2263,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[59],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2259,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:160: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[17]);}

/* k2308 in k2284 in k2274 in k2271 in a2268 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2310,2,t0,t1);}
t2=C_a_i_list(&a,1,t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_list(&a,1,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2298,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t5,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:157: r */
t7=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,lf[16]);}

/* k2249 in k2253 in k2257 in k2261 in k2265 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2251,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[60],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2247,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:160: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[23]);}

/* k2257 in k2261 in k2265 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2259(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2259,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[17],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2255,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:160: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[35]);}

/* k2253 in k2257 in k2261 in k2265 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2255,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[35],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2251,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:160: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[60]);}

/* map-loop158 in k3000 in k2989 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in a2953 in k1202 in k1199 in k1196 */
static void C_fcall f_3299(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_3299,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list2(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3312,a[2]=((C_word*)t0)[2],a[3]=t10,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t12=t11;
f_3312(t12,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t10));}
else{
t12=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t10);
t13=t11;
f_3312(t13,t12);}}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k3295 in k3000 in k2989 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in a2953 in k1202 in k1199 in k1196 */
static void C_ccall f_3297(C_word c,C_word t0,C_word t1){
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
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3297,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3017,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3019,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3034,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[4],a[9]=t4,a[10]=((C_word*)t0)[12],tmp=(C_word)a,a+=11,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3253,a[2]=t9,a[3]=t8,a[4]=t12,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_3253(t14,t10,((C_word*)t0)[12]);}

/* push in k1414 in k1411 in k1408 in k1405 in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static C_word C_fcall f_1485(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
t2=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
return(t3);}

/* k1839 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_caar(((C_word*)t0)[2]);
/* compiler-syntax.scm:185: c */
t3=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[4],t1,t2);}

/* k2284 in k2274 in k2271 in a2268 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2286,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2310,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:155: r */
t4=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[23]);}

/* loop in k1414 in k1411 in k1408 in k1405 in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_fcall f_1495(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(13);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1495,NULL,3,t0,t1,t2);}
if(C_truep(C_i_greater_or_equalp(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]))){
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1505,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[10])[1]))){
t4=t3;
f_1505(2,t4,C_SCHEME_UNDEFINED);}
else{
/* compiler-syntax.scm:225: fail */
t4=((C_word*)t0)[11];
f_1335(t4,t3,C_SCHEME_FALSE,lf[31],C_SCHEME_END_OF_LIST);}}
else{
t3=f_1418(((C_word*)((C_word*)t0)[12])[1]);
t4=C_eqp(t3,C_make_character(126));
if(C_truep(t4)){
t5=f_1418(((C_word*)((C_word*)t0)[12])[1]);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_1560,a[2]=t6,a[3]=((C_word*)t0)[13],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[14],a[7]=((C_word*)t0)[15],a[8]=((C_word*)t0)[16],a[9]=((C_word*)t0)[17],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[2],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* compiler-syntax.scm:234: endchunk */
t8=((C_word*)((C_word*)t0)[9])[1];
f_1447(t8,t7,t2);}
else{
t5=C_a_i_cons(&a,2,t3,t2);
/* compiler-syntax.scm:266: loop */
t11=t1;
t12=t5;
t1=t11;
t2=t12;
goto loop;}}}

/* k1857 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1859(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1859,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1862,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1864,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1990,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:290: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[48]);}

/* k1196 */
static void C_ccall f_1198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1198,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1201,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2274 in k2271 in a2268 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2276,2,t0,t1);}
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2286,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:155: r */
t4=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[36]);}
else{
t3=((C_word*)t0)[5];
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2271 in a2268 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2273(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2273,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2276,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=C_i_car(((C_word*)t0)[4]);
t5=(C_truep((C_truep(C_eqp(t4,lf[14]))?C_SCHEME_TRUE:(C_truep(C_eqp(t4,lf[63]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))?lf[14]:lf[64]);
t6=((C_word*)t0)[4];
t7=C_u_i_cdr(t6);
/* compiler-syntax.scm:146: compile-format-string */
t8=*((C_word*)lf[12]+1);
((C_proc8)(void*)(*((C_word*)t8+1)))(8,t8,t3,t5,t2,((C_word*)t0)[4],t7,((C_word*)t0)[3],((C_word*)t0)[5]);}

/* k1828 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1830(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1830,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1837,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* compiler-syntax.scm:186: cadar */
t3=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
f_1329(t2,C_SCHEME_FALSE);}}

/* k1835 in k1828 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1837(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_1329(t2,C_i_stringp(t1));}

/* k2296 in k2308 in k2284 in k2274 in k2271 in a2268 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2298,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,4,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2));}

/* k1881 in a1863 in k1857 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1883,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1886,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:298: r */
t4=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[36]);}

/* k3000 in k2989 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in a2953 in k1202 in k1199 in k1196 */
static void C_ccall f_3002(C_word c,C_word t0,C_word t1){
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
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3002,2,t0,t1);}
t2=t1;
t3=C_i_cadr(((C_word*)t0)[2]);
t4=C_a_i_list(&a,2,((C_word*)t0)[3],t3);
t5=t4;
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_i_check_list_2(t2,lf[72]);
t11=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3297,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3299,a[2]=t9,a[3]=t13,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t15=((C_word*)t13)[1];
f_3299(t15,t11,t2,((C_word*)t0)[12]);}

/* map-loop189 in k3295 in k3000 in k2989 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in a2953 in k1202 in k1199 in k1196 */
static void C_fcall f_3253(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(27);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3253,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=f_3019(C_a_i(&a,24),((C_word*)t0)[2],t3);
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

/* k2474 in k2465 in k2462 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2441 in k2438 in k2435 in k2432 in k2429 in k2426 in a2423 in k1282 in k1202 in k1199 in k1196 */
static void C_fcall f_2476(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_2476,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_i_check_list_2(((C_word*)t0)[2],lf[72]);
t7=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2487,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[2],tmp=(C_word)a,a+=17,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2889,a[2]=t5,a[3]=t9,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_2889(t11,t7,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[6];
t3=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1887 in k1884 in k1881 in a1863 in k1857 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1889,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1892,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:300: r */
t4=((C_word*)t0)[8];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[48]);}

/* k1884 in k1881 in a1863 in k1857 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1886,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1889,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:299: r */
t4=((C_word*)t0)[7];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[49]);}

/* endchunk in k1414 in k1411 in k1408 in k1405 in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_fcall f_1447(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1447,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_i_length(t2);
t4=C_eqp(C_fix(1),t3);
if(C_truep(t4)){
t5=C_i_car(t2);
t6=C_a_i_list(&a,3,lf[21],t5,((C_word*)t0)[2]);
/* compiler-syntax.scm:216: push */
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,f_1485(C_a_i(&a,3),((C_word*)((C_word*)t0)[3])[1],t6));}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1478,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:219: reverse-list->string */
t6=*((C_word*)lf[27]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1890 in k1887 in k1884 in k1881 in a1863 in k1857 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1892,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1895,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* compiler-syntax.scm:301: gensym */
t4=*((C_word*)lf[46]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k3077 in k3121 in k3165 in k3044 in k3032 in k3295 in k3000 in k2989 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in a2953 in k1202 in k1199 in k1196 */
static void C_ccall f_3079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[43],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3079,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[45],t2);
t4=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t3);
t5=C_a_i_list(&a,3,((C_word*)t0)[5],((C_word*)t0)[6],t4);
t6=C_a_i_list(&a,4,((C_word*)t0)[7],((C_word*)t0)[2],((C_word*)t0)[8],t5);
t7=C_a_i_list(&a,1,t6);
/* compiler-syntax.scm:76: ##sys#append */
t8=*((C_word*)lf[74]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,((C_word*)t0)[9],((C_word*)t0)[10],t7);}

/* k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2441 in k2438 in k2435 in k2432 in k2429 in k2426 in a2423 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2461,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2464,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
/* compiler-syntax.scm:106: r */
t3=((C_word*)t0)[14];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[77]);}

/* k2465 in k2462 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2441 in k2438 in k2435 in k2432 in k2429 in k2426 in a2423 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2467,2,t0,t1);}
t2=t1;
t3=C_i_cddr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2476,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t2,a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],a[15]=((C_word*)t0)[13],a[16]=((C_word*)t0)[14],tmp=(C_word)a,a+=17,tmp);
if(C_truep(C_i_memq(lf[72],*((C_word*)lf[75]+1)))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2932,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* compiler-syntax.scm:110: length+ */
t7=*((C_word*)lf[76]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[2]);}
else{
t6=t5;
f_2476(t6,C_SCHEME_FALSE);}}

/* k2462 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2441 in k2438 in k2435 in k2432 in k2429 in k2426 in a2423 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2464,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2467,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* compiler-syntax.scm:107: r */
t4=((C_word*)t0)[14];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[48]);}

/* k1893 in k1890 in k1887 in k1884 in k1881 in a1863 in k1857 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1895,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1898,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* compiler-syntax.scm:302: gensym */
t4=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[47]);}

/* k1896 in k1893 in k1890 in k1887 in k1884 in k1881 in a1863 in k1857 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1898,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1901,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* compiler-syntax.scm:303: gensym */
t4=*((C_word*)lf[46]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k2732 in map-loop459 in k2517 in k2828 in k2485 in k2474 in k2465 in k2462 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2441 in k2438 in k2435 in k2432 in k2429 in k2426 in a2423 in k1282 in ... */
static void C_fcall f_2734(C_word t0,C_word t1){
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
f_2721(t5,((C_word*)t0)[7],t3,t4);}

/* k1703 in k1700 in k1558 in loop in k1414 in k1411 in k1408 in k1405 in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1705,2,t0,t1);}
t2=C_a_i_list(&a,5,lf[33],((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);
t3=f_1485(C_a_i(&a,3),((C_word*)((C_word*)t0)[5])[1],t2);
/* compiler-syntax.scm:265: loop */
t4=((C_word*)((C_word*)t0)[6])[1];
f_1495(t4,((C_word*)t0)[7],C_SCHEME_END_OF_LIST);}

/* k1700 in k1558 in loop in k1414 in k1411 in k1408 in k1405 in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1702(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1702,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1705,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:254: next */
t4=((C_word*)((C_word*)t0)[7])[1];
f_1428(t4,t3);}

/* k2398 in k2391 in a2382 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2400(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2400,2,t0,t1);}
t2=t1;
t3=C_a_i_list(&a,1,((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2408,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_i_cdr(((C_word*)t0)[4]);
/* compiler-syntax.scm:140: fold-right */
t7=*((C_word*)lf[67]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,*((C_word*)lf[68]+1),((C_word*)t0)[2],t6);}

/* k2406 in k2398 in k2391 in a2382 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2408,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* k2391 in a2382 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2393,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2400,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:140: r */
t4=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[69]);}

/* k2429 in k2426 in a2423 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2431,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2434,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:96: r */
t4=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[81]);}

/* k2432 in k2429 in k2426 in a2423 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2434,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2437,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:97: gensym */
t4=*((C_word*)lf[46]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k2435 in k2432 in k2429 in k2426 in a2423 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2437,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2440,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:98: r */
t4=((C_word*)t0)[7];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[80]);}

/* a2382 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2383(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2383,5,t0,t1,t2,t3,t4);}
t5=C_i_length(t2);
t6=C_fixnum_greaterp(t5,C_fix(1));
t7=(C_truep(t6)?C_i_memq(lf[66],*((C_word*)lf[13]+1)):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2393,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:139: r */
t9=t3;
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,lf[70]);}
else{
t8=t2;
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}}

/* k2379 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2381,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[58],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2377,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:143: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[59]);}

/* k3032 in k3295 in k3000 in k2989 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in a2953 in k1202 in k1199 in k1196 */
static void C_ccall f_3034(C_word c,C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3034,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3046,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3204,a[2]=t6,a[3]=t9,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_3204(t11,t7,((C_word*)t0)[10],((C_word*)t0)[10]);}

/* a2423 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2424(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2424,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2428,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:94: r */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[36]);}

/* k2426 in a2423 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2428(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2428,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2431,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:95: r */
t4=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[49]);}

/* map-loop429 in k2828 in k2485 in k2474 in k2465 in k2462 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2441 in k2438 in k2435 in k2432 in k2429 in k2426 in a2423 in k1282 in k1202 in k1199 in ... */
static void C_fcall f_2770(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(27);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2770,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=f_2504(C_a_i(&a,24),((C_word*)t0)[2],t3);
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

/* k2375 in k2379 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2377,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[59],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2373,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:143: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[17]);}

/* k2371 in k2375 in k2379 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2373,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[17],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2369,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:143: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[35]);}

/* k2359 in k2363 in k2367 in k2371 in k2375 in k2379 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2361,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[23],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2357,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* compiler-syntax.scm:143: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[16]);}

/* map-loop459 in k2517 in k2828 in k2485 in k2474 in k2465 in k2462 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2441 in k2438 in k2435 in k2432 in k2429 in k2426 in a2423 in k1282 in k1202 in ... */
static void C_fcall f_2721(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_2721,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list2(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2734,a[2]=((C_word*)t0)[2],a[3]=t10,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t12=t11;
f_2734(t12,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t10));}
else{
t12=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t10);
t13=t11;
f_2734(t13,t12);}}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k2367 in k2371 in k2375 in k2379 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2369(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2369,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[35],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2365,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:143: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[60]);}

/* k2363 in k2367 in k2371 in k2375 in k2379 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2365,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[60],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2361,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:143: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[23]);}

/* k2105 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2107,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[48],t1);
t3=C_a_i_list(&a,1,t2);
/* compiler-syntax.scm:268: r-c-s */
t4=*((C_word*)lf[5]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[2],lf[55],((C_word*)t0)[3],t3);}

/* skip in k1558 in loop in k1414 in k1411 in k1408 in k1405 in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_fcall f_1756(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_1756,NULL,3,t0,t1,t2);}
if(C_truep(C_u_i_char_whitespacep(t2))){
t3=f_1418(((C_word*)((C_word*)t0)[2])[1]);
/* compiler-syntax.scm:262: skip */
t7=t1;
t8=t3;
t1=t7;
t2=t8;
goto loop;}
else{
t3=C_a_i_minus(&a,2,((C_word*)((C_word*)t0)[4])[1],C_fix(1));
t4=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* a2108 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2109(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2109,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2113,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t6=C_i_cdr(t2);
/* compiler-syntax.scm:172: compile-format-string */
t7=*((C_word*)lf[12]+1);
((C_proc8)(void*)(*((C_word*)t7+1)))(8,t7,t5,lf[56],lf[57],t2,t6,t3,t4);}

/* k3165 in k3044 in k3032 in k3295 in k3000 in k2989 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in a2953 in k1202 in k1199 in k1196 */
static void C_ccall f_3167(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3167,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3123,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3125,a[2]=t7,a[3]=t10,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_3125(t12,t8,((C_word*)t0)[11]);}

/* map-loop310 in k3121 in k3165 in k3044 in k3032 in k3295 in k3000 in k2989 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in a2953 in k1202 in k1199 in k1196 */
static void C_fcall f_3081(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3081,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,3,lf[44],t3,C_fix(1));
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

/* g256 in k3044 in k3032 in k3295 in k3000 in k2989 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in a2953 in k1202 in k1199 in k1196 */
static C_word C_fcall f_3160(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;
return(C_a_i_list(&a,2,((C_word*)t0)[2],t1));}

/* map-loop250 in k3044 in k3032 in k3295 in k3000 in k2989 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in a2953 in k1202 in k1199 in k1196 */
static void C_fcall f_3169(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3169,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=f_3160(C_a_i(&a,7),((C_word*)t0)[2],t3);
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

/* k2843 in map-loop398 in k2485 in k2474 in k2465 in k2462 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2441 in k2438 in k2435 in k2432 in k2429 in k2426 in a2423 in k1282 in k1202 in k1199 in ... */
static void C_fcall f_2845(C_word t0,C_word t1){
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
f_2832(t5,((C_word*)t0)[7],t3,t4);}

/* map-loop398 in k2485 in k2474 in k2465 in k2462 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2441 in k2438 in k2435 in k2432 in k2429 in k2426 in a2423 in k1282 in k1202 in k1199 in k1196 in ... */
static void C_fcall f_2832(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_2832,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list2(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2845,a[2]=((C_word*)t0)[2],a[3]=t10,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t12=t11;
f_2845(t12,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t10));}
else{
t12=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t10);
t13=t11;
f_2845(t13,t12);}}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k2828 in k2485 in k2474 in k2465 in k2462 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2441 in k2438 in k2435 in k2432 in k2429 in k2426 in a2423 in k1282 in k1202 in k1199 in k1196 in ... */
static void C_ccall f_2830(C_word c,C_word t0,C_word t1){
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
C_word ab[45],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2830,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2502,a[2]=t5,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2504,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp);
t12=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_2519,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[13],a[9]=((C_word*)t0)[14],a[10]=((C_word*)t0)[15],a[11]=((C_word*)t0)[16],a[12]=((C_word*)t0)[17],a[13]=((C_word*)t0)[6],a[14]=t6,a[15]=((C_word*)t0)[18],tmp=(C_word)a,a+=16,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2770,a[2]=t11,a[3]=t10,a[4]=t14,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_2770(t16,t12,((C_word*)t0)[18]);}

/* k1860 in k1857 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* a1863 in k1857 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1864(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1864,5,t0,t1,t2,t3,t4);}
t5=C_i_length(t2);
t6=C_eqp(t5,C_fix(4));
t7=(C_truep(t6)?C_i_memq(lf[40],*((C_word*)lf[13]+1)):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_i_cadr(t2);
t9=t8;
t10=C_i_caddr(t2);
t11=t10;
t12=C_i_cadddr(t2);
t13=t12;
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1883,a[2]=t11,a[3]=t13,a[4]=t9,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:297: r */
t15=t3;
((C_proc3)(void*)(*((C_word*)t15+1)))(3,t15,t14,lf[50]);}
else{
t8=t2;
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}}

/* k2485 in k2474 in k2465 in k2462 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2441 in k2438 in k2435 in k2432 in k2429 in k2426 in a2423 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2487(C_word c,C_word t0,C_word t1){
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
C_word ab[58],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2487,2,t0,t1);}
t2=t1;
t3=C_a_i_list(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t4=C_a_i_list(&a,2,((C_word*)t0)[3],t3);
t5=t4;
t6=C_a_i_list(&a,2,((C_word*)t0)[4],C_SCHEME_FALSE);
t7=t6;
t8=C_i_cadr(((C_word*)t0)[5]);
t9=C_a_i_list(&a,2,((C_word*)t0)[6],t8);
t10=t9;
t11=C_SCHEME_END_OF_LIST;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_FALSE;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_i_check_list_2(t2,lf[72]);
t16=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_2830,a[2]=t10,a[3]=t7,a[4]=t5,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[4],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[3],a[16]=((C_word*)t0)[14],a[17]=((C_word*)t0)[15],a[18]=t2,tmp=(C_word)a,a+=19,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2832,a[2]=t14,a[3]=t18,a[4]=t12,tmp=(C_word)a,a+=5,tmp));
t20=((C_word*)t18)[1];
f_2832(t20,t16,t2,((C_word*)t0)[16]);}

/* k2946 in k2950 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2948,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[80],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
/* compiler-syntax.scm:92: r-c-s */
t4=*((C_word*)lf[5]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],lf[82],((C_word*)t0)[4],t3);}

/* k3044 in k3032 in k3295 in k3000 in k2989 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in a2953 in k1202 in k1199 in k1196 */
static void C_ccall f_3046(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3046,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3160,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3167,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t2,a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3169,a[2]=t7,a[3]=t6,a[4]=t10,a[5]=t4,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_3169(t12,t8,((C_word*)t0)[11]);}

/* k2500 in k2828 in k2485 in k2474 in k2465 in k2462 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2441 in k2438 in k2435 in k2432 in k2429 in k2426 in a2423 in k1282 in k1202 in k1199 in ... */
static void C_ccall f_2502(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2502,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,((C_word*)t0)[4],t2));}

/* k2930 in k2465 in k2462 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2441 in k2438 in k2435 in k2432 in k2429 in k2426 in a2423 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2476(t2,C_i_greaterp(t1,C_fix(2)));}

/* g435 in k2828 in k2485 in k2474 in k2465 in k2462 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2441 in k2438 in k2435 in k2432 in k2429 in k2426 in a2423 in k1282 in k1202 in k1199 in ... */
static C_word C_fcall f_2504(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
t2=C_a_i_list(&a,2,((C_word*)t0)[2],lf[72]);
t3=C_a_i_list(&a,3,lf[42],t1,t2);
return(C_a_i_list(&a,2,lf[43],t3));}

/* k2570 in k2638 in k2682 in k2529 in k2517 in k2828 in k2485 in k2474 in k2465 in k2462 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2441 in k2438 in k2435 in k2432 in k2429 in k2426 in ... */
static void C_ccall f_2572(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[52],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2572,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[45],t2);
t4=C_a_i_list(&a,5,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t3);
t5=C_a_i_list(&a,4,((C_word*)t0)[7],((C_word*)t0)[8],t4,((C_word*)t0)[9]);
t6=C_a_i_list(&a,4,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[10],t5);
t7=C_a_i_list(&a,1,t6);
/* compiler-syntax.scm:111: ##sys#append */
t8=*((C_word*)lf[74]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,((C_word*)t0)[11],((C_word*)t0)[12],t7);}

/* map-loop550 in k2638 in k2682 in k2529 in k2517 in k2828 in k2485 in k2474 in k2465 in k2462 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2441 in k2438 in k2435 in k2432 in k2429 in k2426 in ... */
static void C_fcall f_2574(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_2574,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,3,lf[44],t3,C_fix(1));
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

/* k2989 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in a2953 in k1202 in k1199 in k1196 */
static void C_fcall f_2991(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_2991,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_i_check_list_2(((C_word*)t0)[2],lf[72]);
t7=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3002,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[2],tmp=(C_word)a,a+=13,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3352,a[2]=t5,a[3]=t9,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_3352(t11,t7,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2450 in k2447 in k2444 in k2441 in k2438 in k2435 in k2432 in k2429 in k2426 in a2423 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2452,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2455,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* compiler-syntax.scm:103: r */
t4=((C_word*)t0)[12];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[28]);}

/* k2916 in map-loop368 in k2474 in k2465 in k2462 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2441 in k2438 in k2435 in k2432 in k2429 in k2426 in a2423 in k1282 in k1202 in k1199 in k1196 in ... */
static void C_ccall f_2918(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2918,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2889(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2889(t6,((C_word*)t0)[5],t5);}}

/* k2456 in k2453 in k2450 in k2447 in k2444 in k2441 in k2438 in k2435 in k2432 in k2429 in k2426 in a2423 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2458,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2461,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
/* compiler-syntax.scm:105: r */
t3=((C_word*)t0)[14];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[69]);}

/* k2453 in k2450 in k2447 in k2444 in k2441 in k2438 in k2435 in k2432 in k2429 in k2426 in a2423 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2455,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2458,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* compiler-syntax.scm:104: r */
t4=((C_word*)t0)[13];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[78]);}

/* k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in a2953 in k1202 in k1199 in k1196 */
static void C_ccall f_2982(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2982,2,t0,t1);}
t2=C_i_cddr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2991,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_i_memq(lf[83],*((C_word*)lf[75]+1)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3395,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* compiler-syntax.scm:75: length+ */
t6=*((C_word*)lf[76]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[2]);}
else{
t5=t4;
f_2991(t5,C_SCHEME_FALSE);}}

/* k2438 in k2435 in k2432 in k2429 in k2426 in a2423 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2440,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2443,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* compiler-syntax.scm:99: r */
t4=((C_word*)t0)[8];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[79]);}

/* k2447 in k2444 in k2441 in k2438 in k2435 in k2432 in k2429 in k2426 in a2423 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2449,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2452,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* compiler-syntax.scm:102: gensym */
t4=*((C_word*)lf[46]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k2444 in k2441 in k2438 in k2435 in k2432 in k2429 in k2426 in a2423 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2446,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2449,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* compiler-syntax.scm:101: gensym */
t4=*((C_word*)lf[46]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k2441 in k2438 in k2435 in k2432 in k2429 in k2426 in a2423 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2443,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2446,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* compiler-syntax.scm:100: gensym */
t4=*((C_word*)lf[46]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in a2953 in k1202 in k1199 in k1196 */
static void C_ccall f_2976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2976,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2979,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* compiler-syntax.scm:71: r */
t4=((C_word*)t0)[10];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[48]);}

/* k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in a2953 in k1202 in k1199 in k1196 */
static void C_ccall f_2973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2973,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2976,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* compiler-syntax.scm:70: r */
t4=((C_word*)t0)[9];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[77]);}

/* k2968 in k2965 in k2962 in k2959 in k2956 in a2953 in k1202 in k1199 in k1196 */
static void C_ccall f_2970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2970,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2973,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* compiler-syntax.scm:69: r */
t4=((C_word*)t0)[8];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[28]);}

/* k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in a2953 in k1202 in k1199 in k1196 */
static void C_ccall f_2979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2979,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2982,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* compiler-syntax.scm:72: r */
t4=((C_word*)t0)[11];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[69]);}

/* k2529 in k2517 in k2828 in k2485 in k2474 in k2465 in k2462 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2441 in k2438 in k2435 in k2432 in k2429 in k2426 in a2423 in k1282 in k1202 in ... */
static void C_ccall f_2531(C_word c,C_word t0,C_word t1){
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
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2531,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2677,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2684,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=t2,a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2686,a[2]=t7,a[3]=t6,a[4]=t10,a[5]=t4,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_2686(t12,t8,((C_word*)t0)[16]);}

/* k2517 in k2828 in k2485 in k2474 in k2465 in k2462 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2441 in k2438 in k2435 in k2432 in k2429 in k2426 in a2423 in k1282 in k1202 in k1199 in ... */
static void C_ccall f_2519(C_word c,C_word t0,C_word t1){
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
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2519,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2531,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=t2,a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2721,a[2]=t6,a[3]=t9,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_2721(t11,t7,((C_word*)t0)[15],((C_word*)t0)[15]);}

/* k3215 in map-loop219 in k3032 in k3295 in k3000 in k2989 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in a2953 in k1202 in k1199 in k1196 */
static void C_fcall f_3217(C_word t0,C_word t1){
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
f_3204(t5,((C_word*)t0)[7],t3,t4);}

/* map-loop219 in k3032 in k3295 in k3000 in k2989 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in a2953 in k1202 in k1199 in k1196 */
static void C_fcall f_3204(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_3204,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list2(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3217,a[2]=((C_word*)t0)[2],a[3]=t10,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t12=t11;
f_3217(t12,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t10));}
else{
t12=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t10);
t13=t11;
f_3217(t13,t12);}}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_compiler_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_compiler_2dsyntax_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("compiler_2dsyntax_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(950)){
C_save(t1);
C_rereclaim2(950*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,86);
lf[0]=C_h_intern(&lf[0],35,"\010compilercompiler-syntax-statistics");
lf[1]=C_h_intern(&lf[1],24,"\003syscompiler-syntax-hook");
lf[2]=C_h_intern(&lf[2],13,"alist-update!");
lf[3]=C_h_intern(&lf[3],9,"alist-ref");
lf[4]=C_h_intern(&lf[4],3,"eq\077");
lf[5]=C_h_intern(&lf[5],14,"\010compilerr-c-s");
lf[6]=C_h_intern(&lf[6],8,"\003sysput!");
lf[7]=C_h_intern(&lf[7],24,"\010compilercompiler-syntax");
lf[8]=C_h_intern(&lf[8],6,"append");
lf[9]=C_h_intern(&lf[9],29,"\003sysdefault-macro-environment");
lf[10]=C_h_intern(&lf[10],22,"\003sysensure-transformer");
lf[11]=C_h_intern(&lf[11],18,"\003syser-transformer");
lf[12]=C_h_intern(&lf[12],30,"\010compilercompile-format-string");
lf[13]=C_h_intern(&lf[13],17,"extended-bindings");
lf[14]=C_h_intern(&lf[14],7,"sprintf");
lf[15]=C_h_intern(&lf[15],7,"warning");
lf[16]=C_h_intern(&lf[16],17,"get-output-string");
lf[17]=C_h_intern(&lf[17],7,"fprintf");
lf[18]=C_h_intern(&lf[18],9,"\003sysprint");
lf[19]=C_decode_literal(C_heaptop,"\376B\000\000\002, ");
lf[20]=C_decode_literal(C_heaptop,"\376B\000\000\024\047, in format string ");
lf[21]=C_h_intern(&lf[21],16,"\003syswrite-char-0");
lf[22]=C_decode_literal(C_heaptop,"\376B\000\000\002) ");
lf[23]=C_h_intern(&lf[23],18,"open-output-string");
lf[24]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[25]=C_h_intern(&lf[25],17,"\010compilerget-line");
lf[26]=C_decode_literal(C_heaptop,"\376B\000\000/too few arguments to formatted output procedure");
lf[27]=C_h_intern(&lf[27],20,"reverse-list->string");
lf[28]=C_h_intern(&lf[28],5,"quote");
lf[29]=C_h_intern(&lf[29],21,"\003syscheck-output-port");
lf[30]=C_h_intern(&lf[30],7,"reverse");
lf[31]=C_decode_literal(C_heaptop,"\376B\000\0000too many arguments to formatted output procedure");
lf[32]=C_h_intern(&lf[32],16,"\003sysflush-output");
lf[33]=C_h_intern(&lf[33],9,"\003sysapply");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000$illegal format-string character `~c\047");
lf[35]=C_h_intern(&lf[35],14,"number->string");
lf[36]=C_h_intern(&lf[36],3,"let");
lf[37]=C_h_intern(&lf[37],3,"out");
lf[38]=C_h_intern(&lf[38],5,"cadar");
lf[39]=C_h_intern(&lf[39],7,"call/cc");
lf[40]=C_h_intern(&lf[40],5,"foldl");
lf[41]=C_h_intern(&lf[41],10,"\004corequote");
lf[42]=C_h_intern(&lf[42],14,"\003syscheck-list");
lf[43]=C_h_intern(&lf[43],10,"\004corecheck");
lf[44]=C_h_intern(&lf[44],8,"\003sysslot");
lf[45]=C_h_intern(&lf[45],8,"\004coreapp");
lf[46]=C_h_intern(&lf[46],6,"gensym");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\005foldl");
lf[48]=C_h_intern(&lf[48],5,"pair\077");
lf[49]=C_h_intern(&lf[49],2,"if");
lf[50]=C_h_intern(&lf[50],4,"let\052");
lf[51]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\005foldl\376\003\000\000\002\376\001\000\000\007#%foldl\376\377\016");
lf[52]=C_h_intern(&lf[52],19,"\003sysprimitive-alias");
lf[53]=C_h_intern(&lf[53],5,"foldr");
lf[54]=C_decode_literal(C_heaptop,"\376B\000\000\005foldr");
lf[55]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\005foldr\376\003\000\000\002\376\001\000\000\007#%foldr\376\377\016");
lf[56]=C_h_intern(&lf[56],6,"printf");
lf[57]=C_h_intern(&lf[57],19,"\003sysstandard-output");
lf[58]=C_h_intern(&lf[58],7,"display");
lf[59]=C_h_intern(&lf[59],5,"write");
lf[60]=C_h_intern(&lf[60],10,"write-char");
lf[61]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006printf\376\003\000\000\002\376\001\000\000\010#%printf\376\377\016");
lf[62]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007fprintf\376\003\000\000\002\376\001\000\000\011#%fprintf\376\377\016");
lf[63]=C_h_intern(&lf[63],9,"#%sprintf");
lf[64]=C_h_intern(&lf[64],6,"format");
lf[65]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007sprintf\376\003\000\000\002\376\001\000\000\011#%sprintf\376\003\000\000\002\376\001\000\000\006format\376\003\000\000\002\376\001\000\000\010#%format\376\377\016");
lf[66]=C_h_intern(&lf[66],1,"o");
lf[67]=C_h_intern(&lf[67],10,"fold-right");
lf[68]=C_h_intern(&lf[68],4,"list");
lf[69]=C_h_intern(&lf[69],6,"lambda");
lf[70]=C_h_intern(&lf[70],3,"tmp");
lf[71]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001o\376\003\000\000\002\376\001\000\000\003#%o\376\377\016");
lf[72]=C_h_intern(&lf[72],3,"map");
lf[73]=C_h_intern(&lf[73],11,"\003syssetslot");
lf[74]=C_h_intern(&lf[74],10,"\003sysappend");
lf[75]=C_h_intern(&lf[75],17,"standard-bindings");
lf[76]=C_h_intern(&lf[76],7,"length+");
lf[77]=C_h_intern(&lf[77],3,"and");
lf[78]=C_h_intern(&lf[78],5,"begin");
lf[79]=C_h_intern(&lf[79],4,"set!");
lf[80]=C_h_intern(&lf[80],4,"cons");
lf[81]=C_h_intern(&lf[81],8,"map-loop");
lf[82]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\003map\376\003\000\000\002\376\001\000\000\007\003sysmap\376\003\000\000\002\376\001\000\000\005#%map\376\377\016");
lf[83]=C_h_intern(&lf[83],8,"for-each");
lf[84]=C_h_intern(&lf[84],13,"for-each-loop");
lf[85]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010for-each\376\003\000\000\002\376\001\000\000\014\003sysfor-each\376\003\000\000\002\376\001\000\000\012#%for-each\376\377\016");
C_register_lf2(lf,86,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1198,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2190 in a2181 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2192(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?t1:((C_word*)t0)[3]));}

/* k2178 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2180,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[58],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2176,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:170: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[59]);}

/* a2181 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2182(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
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
C_save_and_reclaim((void*)tr5,(void*)f_2182,5,t0,t1,t2,t3,t4);}
t5=C_i_length(t2);
if(C_truep(C_fixnum_greater_or_equal_p(t5,C_fix(3)))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2192,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=C_i_cadr(t2);
t8=t2;
t9=C_u_i_cdr(t8);
t10=C_u_i_cdr(t9);
/* compiler-syntax.scm:163: compile-format-string */
t11=*((C_word*)lf[12]+1);
((C_proc8)(void*)(*((C_word*)t11+1)))(8,t11,t6,lf[17],t7,t2,t10,t3,t4);}
else{
t6=t2;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k2170 in k2174 in k2178 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2172,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[17],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2168,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:170: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[35]);}

/* k2012 in k2009 in a1991 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2014,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2017,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:277: r */
t4=((C_word*)t0)[7];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[48]);}

/* k2174 in k2178 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2176,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[59],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2172,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:170: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[17]);}

/* k2015 in k2012 in k2009 in a1991 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2017,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2020,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:278: r */
t4=((C_word*)t0)[8];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[49]);}

/* k2009 in a1991 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2011,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2014,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:276: r */
t4=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[36]);}

/* k2959 in k2956 in a2953 in k1202 in k1199 in k1196 */
static void C_ccall f_2961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2961,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2964,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:66: r */
t4=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[84]);}

/* k2962 in k2959 in k2956 in a2953 in k1202 in k1199 in k1196 */
static void C_ccall f_2964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2964,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2967,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:67: gensym */
t4=*((C_word*)lf[46]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k2965 in k2962 in k2959 in k2956 in a2953 in k1202 in k1199 in k1196 */
static void C_ccall f_2967(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2967,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2970,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:68: r */
t4=((C_word*)t0)[7];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[78]);}

/* k2638 in k2682 in k2529 in k2517 in k2828 in k2485 in k2474 in k2465 in k2462 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2441 in k2438 in k2435 in k2432 in k2429 in k2426 in a2423 in ... */
static void C_ccall f_2640(C_word c,C_word t0,C_word t1){
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
C_word ab[101],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2640,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
t4=C_a_i_list(&a,3,((C_word*)t0)[4],t2,t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[5],t4);
t6=C_a_i_list(&a,1,t5);
t7=t6;
t8=C_a_i_list(&a,4,lf[73],((C_word*)t0)[6],C_fix(1),((C_word*)t0)[5]);
t9=C_a_i_list(&a,3,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[5]);
t10=C_a_i_list(&a,4,((C_word*)t0)[9],((C_word*)t0)[6],t8,t9);
t11=t10;
t12=C_a_i_list(&a,3,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5]);
t13=t12;
t14=C_SCHEME_END_OF_LIST;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_SCHEME_FALSE;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2572,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=t7,a[5]=t11,a[6]=t13,a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],tmp=(C_word)a,a+=13,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2574,a[2]=t17,a[3]=t20,a[4]=t15,tmp=(C_word)a,a+=5,tmp));
t22=((C_word*)t20)[1];
f_2574(t22,t18,((C_word*)t0)[16]);}

/* map-loop520 in k2682 in k2529 in k2517 in k2828 in k2485 in k2474 in k2465 in k2462 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2441 in k2438 in k2435 in k2432 in k2429 in k2426 in a2423 in ... */
static void C_fcall f_2642(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_2642,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,3,lf[44],t3,C_fix(0));
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

/* k2158 in k2162 in k2166 in k2170 in k2174 in k2178 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2160,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[23],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2156,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* compiler-syntax.scm:170: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[16]);}

/* k2166 in k2170 in k2174 in k2178 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2168,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[35],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2164,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:170: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[60]);}

/* k2162 in k2166 in k2170 in k2174 in k2178 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2164,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[60],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2160,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:170: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[23]);}

/* k2950 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2952(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2952,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[48],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2948,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:92: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[80]);}

/* a2953 in k1202 in k1199 in k1196 */
static void C_ccall f_2954(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2954,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2958,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:64: r */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[36]);}

/* k2956 in a2953 in k1202 in k1199 in k1196 */
static void C_ccall f_2958(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2958,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2961,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:65: r */
t4=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[49]);}

/* ##compiler#compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1301(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr8,(void*)f_1301,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1307,a[2]=t5,a[3]=t2,a[4]=t4,a[5]=t3,a[6]=t6,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:179: call/cc */
t9=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t1,t8);}

/* a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1307(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1307,3,t0,t1,t2);}
t3=C_i_length(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(1)))){
if(C_truep(C_i_memq(((C_word*)t0)[3],*((C_word*)lf[13]+1)))){
t4=C_i_car(((C_word*)t0)[2]);
t5=C_i_stringp(t4);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1329,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t5)){
t7=t6;
f_1329(t7,t5);}
else{
t7=((C_word*)t0)[2];
t8=C_u_i_car(t7);
if(C_truep(C_i_listp(t8))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1830,a[2]=t6,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1841,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[7],a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:185: r */
t11=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,lf[28]);}
else{
t9=t6;
f_1329(t9,C_SCHEME_FALSE);}}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k2154 in k2158 in k2162 in k2166 in k2170 in k2174 in k2178 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2156,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[16],t1);
t3=C_a_i_list(&a,7,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t2);
/* compiler-syntax.scm:170: r-c-s */
t4=*((C_word*)lf[5]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[8],lf[61],((C_word*)t0)[9],t3);}

/* k3015 in k3295 in k3000 in k2989 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in a2953 in k1202 in k1199 in k1196 */
static void C_ccall f_3017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3017,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,((C_word*)t0)[4],t2));}

/* g195 in k3295 in k3000 in k2989 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in a2953 in k1202 in k1199 in k1196 */
static C_word C_fcall f_3019(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
t2=C_a_i_list(&a,2,((C_word*)t0)[2],lf[83]);
t3=C_a_i_list(&a,3,lf[42],t1,t2);
return(C_a_i_list(&a,2,lf[43],t3));}

/* k3121 in k3165 in k3044 in k3032 in k3295 in k3000 in k2989 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in a2953 in k1202 in k1199 in k1196 */
static void C_ccall f_3123(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3123,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3079,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3081,a[2]=t7,a[3]=t10,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_3081(t12,t8,((C_word*)t0)[11]);}

/* map-loop280 in k3165 in k3044 in k3032 in k3295 in k3000 in k2989 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in a2953 in k1202 in k1199 in k1196 */
static void C_fcall f_3125(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3125,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,3,lf[44],t3,C_fix(0));
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

/* map-loop490 in k2529 in k2517 in k2828 in k2485 in k2474 in k2465 in k2462 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2441 in k2438 in k2435 in k2432 in k2429 in k2426 in a2423 in k1282 in ... */
static void C_fcall f_2686(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_2686,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=f_2677(C_a_i(&a,7),((C_word*)t0)[2],t3);
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

/* k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1332,2,t0,t1);}
t2=t1;
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1335,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_fix(0);
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_i_string_length(t2);
t12=t11;
t13=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1407,a[2]=t2,a[3]=t10,a[4]=t5,a[5]=t6,a[6]=t8,a[7]=t12,a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],tmp=(C_word)a,a+=12,tmp);
/* compiler-syntax.scm:200: r */
t14=((C_word*)t0)[8];
((C_proc3)(void*)(*((C_word*)t14+1)))(3,t14,t13,lf[37]);}

/* k1246 in for-each-loop43 in k1265 in k1261 in r-c-s in k1202 in k1199 in k1196 */
static void C_ccall f_1248(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1238(t3,((C_word*)t0)[4],t2);}

/* fail in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_fcall f_1335(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1335,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1339,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,a[6]=t4,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:190: get-line */
t6=*((C_word*)lf[25]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[5]);}

/* k2682 in k2529 in k2517 in k2828 in k2485 in k2474 in k2465 in k2462 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2441 in k2438 in k2435 in k2432 in k2429 in k2426 in a2423 in k1282 in ... */
static void C_ccall f_2684(C_word c,C_word t0,C_word t1){
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
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2684,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2640,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=t3,a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2642,a[2]=t7,a[3]=t10,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_2642(t12,t8,((C_word*)t0)[16]);}

/* k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_fcall f_1329(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1329,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1332,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
if(C_truep(C_i_stringp(t4))){
t5=((C_word*)t0)[2];
t6=t2;
f_1332(2,t6,C_u_i_car(t5));}
else{
/* compiler-syntax.scm:187: cadar */
t5=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t2,((C_word*)t0)[2]);}}
else{
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* g496 in k2529 in k2517 in k2828 in k2485 in k2474 in k2465 in k2462 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2441 in k2438 in k2435 in k2432 in k2429 in k2426 in a2423 in k1282 in ... */
static C_word C_fcall f_2677(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;
return(C_a_i_list(&a,2,((C_word*)t0)[2],t1));}

/* k1340 in k1337 in fail in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1342(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(((C_word*)t0)[2])){
/* compiler-syntax.scm:196: return */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[4],C_SCHEME_FALSE);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1337 in fail in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1339,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1342,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1352,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:192: open-output-string */
t5=*((C_word*)lf[23]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k2111 in a2108 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k3405 in k1202 in k1199 in k1196 */
static void C_ccall f_3407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3407,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[48],t1);
t3=C_a_i_list(&a,1,t2);
/* compiler-syntax.scm:62: r-c-s */
t4=*((C_word*)lf[5]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[2],lf[85],((C_word*)t0)[3],t3);}

/* ##compiler#r-c-s in k1202 in k1199 in k1196 */
static void C_ccall f_1221(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr4r,(void*)f_1221r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1221r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1221r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(9);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_car(t4));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1263,a[2]=t2,a[3]=t1,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1271,a[2]=t2,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:47: ##sys#er-transformer */
t10=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t3);}

/* g44 in k1265 in k1261 in r-c-s in k1202 in k1199 in k1196 */
static void C_fcall f_1229(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1229,NULL,3,t0,t1,t2);}
/* compiler-syntax.scm:52: ##sys#put! */
t3=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,t2,lf[7],((C_word*)t0)[2]);}

/* k1350 in k1337 in fail in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1352,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[14]);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1358,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1383,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[7])){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1386,a[2]=t6,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:193: open-output-string */
t8=*((C_word*)lf[23]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
/* compiler-syntax.scm:192: ##sys#print */
t7=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,lf[24],C_SCHEME_FALSE,t3);}}

/* for-each-loop43 in k1265 in k1261 in r-c-s in k1202 in k1199 in k1196 */
static void C_fcall f_1238(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1238,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1248,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* compiler-syntax.scm:45: g44 */
t5=((C_word*)t0)[3];
f_1229(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1362 in k1359 in k1356 in k1350 in k1337 in fail in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1364,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1367,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:192: ##sys#print */
t3=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[20],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k1359 in k1356 in k1350 in k1337 in fail in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1361,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1364,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:192: ##sys#print */
t3=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[8],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k1356 in k1350 in k1337 in fail in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1358,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1361,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:192: ##sys#write-char-0 */
t3=*((C_word*)lf[21]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(96),((C_word*)t0)[4]);}

/* k1199 in k1196 */
static void C_ccall f_1201(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1201,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1204,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_chicken_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2021 in k2018 in k2015 in k2012 in k2009 in a1991 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2023,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2026,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* compiler-syntax.scm:280: gensym */
t4=*((C_word*)lf[46]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k1202 in k1199 in k1196 */
static void C_ccall f_1204(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1204,2,t0,t1);}
t2=C_set_block_item(lf[0] /* ##compiler#compiler-syntax-statistics */,0,C_SCHEME_END_OF_LIST);
t3=C_mutate2((C_word*)lf[1]+1 /* (set! ##sys#compiler-syntax-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1207,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate2((C_word*)lf[5]+1 /* (set! ##compiler#r-c-s ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1221,tmp=(C_word)a,a+=2,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1284,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2954,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3407,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:62: ##sys#primitive-alias */
t8=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,lf[48]);}

/* ##sys#compiler-syntax-hook in k1202 in k1199 in k1196 */
static void C_ccall f_1207(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1207,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1211,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:41: alist-ref */
t5=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,t2,*((C_word*)lf[0]+1),*((C_word*)lf[4]+1),C_fix(0));}

/* k1374 in k1371 in k1368 in k1365 in k1362 in k1359 in k1356 in k1350 in k1337 in fail in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in ... */
static void C_ccall f_1376(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1376,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1379,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* compiler-syntax.scm:192: get-output-string */
t3=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k2024 in k2021 in k2018 in k2015 in k2012 in k2009 in a1991 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2026(C_word c,C_word t0,C_word t1){
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
C_word ab[132],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2026,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,lf[41],lf[53]);
t5=C_a_i_list(&a,3,lf[42],t1,t4);
t6=C_a_i_list(&a,2,lf[43],t5);
t7=C_a_i_list(&a,2,t1,t1);
t8=C_a_i_list(&a,1,t7);
t9=C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t10=C_a_i_list(&a,3,lf[44],t1,C_fix(0));
t11=C_a_i_list(&a,3,lf[44],t1,C_fix(1));
t12=C_a_i_list(&a,3,lf[45],((C_word*)t0)[4],t11);
t13=C_a_i_list(&a,3,((C_word*)t0)[5],t10,t12);
t14=C_a_i_list(&a,4,((C_word*)t0)[6],t9,t13,((C_word*)t0)[7]);
t15=C_a_i_list(&a,4,((C_word*)t0)[8],((C_word*)t0)[4],t8,t14);
t16=((C_word*)t0)[9];
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_a_i_list(&a,4,((C_word*)t0)[10],t3,t6,t15));}

/* k1371 in k1368 in k1365 in k1362 in k1359 in k1356 in k1350 in k1337 in fail in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 in ... */
static void C_ccall f_1373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1373,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1376,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_apply(6,0,t2,*((C_word*)lf[17]+1),((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k1368 in k1365 in k1362 in k1359 in k1356 in k1350 in k1337 in fail in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1370,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1373,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:192: ##sys#print */
t3=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[19],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k2018 in k2015 in k2012 in k2009 in a1991 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2020,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2023,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* compiler-syntax.scm:279: gensym */
t4=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[54]);}

/* k1365 in k1362 in k1359 in k1356 in k1350 in k1337 in fail in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1367,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1370,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:192: ##sys#print */
t3=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[7],C_SCHEME_TRUE,((C_word*)t0)[4]);}

/* k1209 in compiler-syntax-hook in k1202 in k1199 in k1196 */
static void C_ccall f_1211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1211,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1215,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_plus(&a,2,t1,C_fix(1));
/* compiler-syntax.scm:43: alist-update! */
t4=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[3],t3,*((C_word*)lf[0]+1));}

/* k1381 in k1350 in k1337 in fail in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler-syntax.scm:192: ##sys#print */
t2=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k1213 in k1209 in compiler-syntax-hook in k1202 in k1199 in k1196 */
static void C_ccall f_1215(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2((C_word*)lf[0]+1 /* (set! ##compiler#compiler-syntax-statistics ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1377 in k1374 in k1371 in k1368 in k1365 in k1362 in k1359 in k1356 in k1350 in k1337 in fail in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in ... */
static void C_ccall f_1379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler-syntax.scm:191: warning */
t2=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1390 in k1384 in k1350 in k1337 in fail in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1392(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1392,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1395,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:193: ##sys#print */
t3=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k1393 in k1390 in k1384 in k1350 in k1337 in fail in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1395,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1398,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:193: ##sys#print */
t3=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[22],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k1384 in k1350 in k1337 in fail in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1386(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1386,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[14]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1392,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:193: ##sys#write-char-0 */
t6=*((C_word*)lf[21]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_make_character(40),t3);}

/* k3310 in map-loop158 in k3000 in k2989 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in a2953 in k1202 in k1199 in k1196 */
static void C_fcall f_3312(C_word t0,C_word t1){
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
f_3299(t5,((C_word*)t0)[7],t3,t4);}

/* k1396 in k1393 in k1390 in k1384 in k1350 in k1337 in fail in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1398(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler-syntax.scm:193: get-output-string */
t2=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k1678 in k1558 in loop in k1414 in k1411 in k1408 in k1405 in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1680,2,t0,t1);}
t2=C_a_i_list(&a,3,((C_word*)t0)[2],t1,C_fix(16));
t3=C_a_i_list(&a,4,lf[18],t2,C_SCHEME_FALSE,((C_word*)t0)[3]);
t4=f_1485(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t3);
/* compiler-syntax.scm:265: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1495(t5,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);}

/* k1598 in k1558 in loop in k1414 in k1411 in k1408 in k1405 in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1600,2,t0,t1);}
t2=C_a_i_list(&a,4,lf[18],t1,C_SCHEME_FALSE,((C_word*)t0)[2]);
t3=f_1485(C_a_i(&a,3),((C_word*)((C_word*)t0)[3])[1],t2);
/* compiler-syntax.scm:265: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1495(t4,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* k1564 in k1558 in loop in k1414 in k1411 in k1408 in k1405 in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler-syntax.scm:265: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1495(t2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);}

/* k1558 in loop in k1414 in k1411 in k1408 in k1405 in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1560(C_word c,C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1560,2,t0,t1);}
t2=C_u_i_char_upcase(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1566,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
switch(t2){
case C_make_character(83):
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1583,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:236: next */
t5=((C_word*)((C_word*)t0)[7])[1];
f_1428(t5,t4);
case C_make_character(65):
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1600,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:237: next */
t5=((C_word*)((C_word*)t0)[7])[1];
f_1428(t5,t4);
case C_make_character(67):
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1617,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:238: next */
t5=((C_word*)((C_word*)t0)[7])[1];
f_1428(t5,t4);
case C_make_character(66):
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1638,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:241: next */
t5=((C_word*)((C_word*)t0)[7])[1];
f_1428(t5,t4);
case C_make_character(79):
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1659,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:245: next */
t5=((C_word*)((C_word*)t0)[7])[1];
f_1428(t5,t4);
case C_make_character(88):
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1680,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:249: next */
t5=((C_word*)((C_word*)t0)[7])[1];
f_1428(t5,t4);
case C_make_character(33):
t4=C_a_i_list(&a,2,lf[32],((C_word*)t0)[5]);
t5=f_1485(C_a_i(&a,3),((C_word*)((C_word*)t0)[6])[1],t4);
/* compiler-syntax.scm:265: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_1495(t6,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);
case C_make_character(63):
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1702,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:253: next */
t5=((C_word*)((C_word*)t0)[7])[1];
f_1428(t5,t4);
case C_make_character(126):
t4=C_a_i_list(&a,3,lf[21],C_make_character(126),((C_word*)t0)[5]);
t5=f_1485(C_a_i(&a,3),((C_word*)((C_word*)t0)[6])[1],t4);
/* compiler-syntax.scm:265: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_1495(t6,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);
default:
t4=C_eqp(t2,C_make_character(37));
t5=(C_truep(t4)?t4:C_eqp(t2,C_make_character(78)));
if(C_truep(t5)){
t6=C_a_i_list(&a,3,lf[21],C_make_character(10),((C_word*)t0)[5]);
t7=f_1485(C_a_i(&a,3),((C_word*)((C_word*)t0)[6])[1],t6);
/* compiler-syntax.scm:265: loop */
t8=((C_word*)((C_word*)t0)[3])[1];
f_1495(t8,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);}
else{
if(C_truep(C_u_i_char_whitespacep(((C_word*)t0)[2]))){
t6=f_1418(((C_word*)((C_word*)t0)[10])[1]);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1756,a[2]=((C_word*)t0)[10],a[3]=t8,a[4]=((C_word*)t0)[11],tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_1756(t10,t3,t6);}
else{
/* compiler-syntax.scm:264: fail */
t6=((C_word*)t0)[12];
f_1335(t6,t3,C_SCHEME_TRUE,lf[34],C_a_i_list(&a,1,((C_word*)t0)[2]));}}}}

/* k1657 in k1558 in loop in k1414 in k1411 in k1408 in k1405 in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1659,2,t0,t1);}
t2=C_a_i_list(&a,3,((C_word*)t0)[2],t1,C_fix(8));
t3=C_a_i_list(&a,4,lf[18],t2,C_SCHEME_FALSE,((C_word*)t0)[3]);
t4=f_1485(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t3);
/* compiler-syntax.scm:265: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1495(t5,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);}

/* k1506 in k1503 in loop in k1414 in k1411 in k1408 in k1405 in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1508,2,t0,t1);}
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,1,t2);
t4=t3;
t5=C_a_i_list(&a,2,lf[28],((C_word*)t0)[4]);
t6=C_a_i_list(&a,4,lf[29],((C_word*)t0)[2],C_SCHEME_TRUE,t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1531,a[2]=t7,a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:229: reverse */
t9=*((C_word*)lf[30]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,((C_word*)((C_word*)t0)[7])[1]);}

/* map-loop368 in k2474 in k2465 in k2462 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2441 in k2438 in k2435 in k2432 in k2429 in k2426 in a2423 in k1282 in k1202 in k1199 in k1196 */
static void C_fcall f_2889(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2889,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2918,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_a_i_list(&a,1,t4);
/* compiler-syntax.scm:111: gensym */
t6=*((C_word*)lf[46]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t3);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1503 in loop in k1414 in k1411 in k1408 in k1405 in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1505,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1508,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:226: endchunk */
t3=((C_word*)((C_word*)t0)[8])[1];
f_1447(t3,t2,((C_word*)t0)[9]);}

/* k1636 in k1558 in loop in k1414 in k1411 in k1408 in k1405 in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1638,2,t0,t1);}
t2=C_a_i_list(&a,3,((C_word*)t0)[2],t1,C_fix(2));
t3=C_a_i_list(&a,4,lf[18],t2,C_SCHEME_FALSE,((C_word*)t0)[3]);
t4=f_1485(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t3);
/* compiler-syntax.scm:265: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1495(t5,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);}

/* k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1284,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1287,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2424,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2952,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:92: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[48]);}

/* k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1287,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1290,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2383,tmp=(C_word)a,a+=2,tmp);
/* compiler-syntax.scm:136: r-c-s */
t4=*((C_word*)lf[5]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[71],t3,C_SCHEME_END_OF_LIST);}

/* k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1290(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1290,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1293,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2269,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2381,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:143: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[58]);}

/* k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1293,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1296,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2182,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2267,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:160: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[58]);}

/* k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1296,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1299,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2109,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2180,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:170: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[58]);}

/* k1615 in k1558 in loop in k1414 in k1411 in k1408 in k1405 in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1617(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1617,2,t0,t1);}
t2=C_a_i_list(&a,3,lf[21],t1,((C_word*)t0)[2]);
t3=f_1485(C_a_i(&a,3),((C_word*)((C_word*)t0)[3])[1],t2);
/* compiler-syntax.scm:265: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1495(t4,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1299(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1299,2,t0,t1);}
t2=C_mutate2((C_word*)lf[12]+1 /* (set! ##compiler#compile-format-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1301,tmp=(C_word)a,a+=2,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1859,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1992,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2107,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:268: ##sys#primitive-alias */
t6=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[48]);}

/* k1529 in k1506 in k1503 in loop in k1414 in k1411 in k1408 in k1405 in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1531(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1531,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,((C_word*)t0)[5],t3));}

/* k1261 in r-c-s in k1202 in k1199 in k1196 */
static void C_ccall f_1263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1263,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1267,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:49: append */
t4=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],*((C_word*)lf[9]+1));}

/* k1265 in k1261 in r-c-s in k1202 in k1199 in k1196 */
static void C_ccall f_1267(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1267,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1229,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=((C_word*)t0)[3];
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1238,a[2]=t7,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_1238(t9,((C_word*)t0)[4],t5);}

/* k1269 in r-c-s in k1202 in k1199 in k1196 */
static void C_ccall f_1271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(((C_word*)t0)[2]);
/* compiler-syntax.scm:46: ##sys#ensure-transformer */
t3=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t1,t2);}

/* k3393 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in a2953 in k1202 in k1199 in k1196 */
static void C_ccall f_3395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2991(t2,C_i_greaterp(t1,C_fix(2)));}

/* k1405 in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1407,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_1410,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* compiler-syntax.scm:201: r */
t4=((C_word*)t0)[11];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[17]);}

/* k3379 in map-loop128 in k2989 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in a2953 in k1202 in k1199 in k1196 */
static void C_ccall f_3381(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3381,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3352(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3352(t6,((C_word*)t0)[5],t5);}}

/* k1411 in k1408 in k1405 in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1413,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_1416,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t2,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* compiler-syntax.scm:203: r */
t4=((C_word*)t0)[13];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[35]);}

/* k1408 in k1405 in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1410,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_1413,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t2,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* compiler-syntax.scm:202: r */
t4=((C_word*)t0)[12];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[36]);}

/* k1414 in k1411 in k1408 in k1405 in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1416(C_word c,C_word t0,C_word t1){
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
C_word ab[43],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1416,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1418,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t12=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1428,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp));
t13=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1447,a[2]=((C_word*)t0)[6],a[3]=t10,tmp=(C_word)a,a+=4,tmp));
t14=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1485,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp));
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_1495,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[7],a[9]=t8,a[10]=((C_word*)t0)[4],a[11]=((C_word*)t0)[5],a[12]=t4,a[13]=t16,a[14]=t10,a[15]=t6,a[16]=t2,a[17]=((C_word*)t0)[12],tmp=(C_word)a,a+=18,tmp));
t18=((C_word*)t16)[1];
f_1495(t18,((C_word*)t0)[13],C_SCHEME_END_OF_LIST);}

/* fetch in k1414 in k1411 in k1408 in k1405 in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static C_word C_fcall f_1418(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
t1=C_i_string_ref(((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
return(t1);}

/* a1991 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1992(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1992,5,t0,t1,t2,t3,t4);}
t5=C_i_length(t2);
t6=C_eqp(t5,C_fix(4));
t7=(C_truep(t6)?C_i_memq(lf[53],*((C_word*)lf[13]+1)):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_i_cadr(t2);
t9=t8;
t10=C_i_caddr(t2);
t11=t10;
t12=C_i_cadddr(t2);
t13=t12;
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2011,a[2]=t13,a[3]=t9,a[4]=t11,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:275: r */
t15=t3;
((C_proc3)(void*)(*((C_word*)t15+1)))(3,t15,t14,lf[50]);}
else{
t8=t2;
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}}

/* k1988 in k1857 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1990(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1990,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[48],t1);
t3=C_a_i_list(&a,1,t2);
/* compiler-syntax.scm:290: r-c-s */
t4=*((C_word*)lf[5]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[2],lf[51],((C_word*)t0)[3],t3);}

/* k1581 in k1558 in loop in k1414 in k1411 in k1408 in k1405 in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1583,2,t0,t1);}
t2=C_a_i_list(&a,4,lf[18],t1,C_SCHEME_TRUE,((C_word*)t0)[2]);
t3=f_1485(C_a_i(&a,3),((C_word*)((C_word*)t0)[3])[1],t2);
/* compiler-syntax.scm:265: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1495(t4,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* k1476 in endchunk in k1414 in k1411 in k1408 in k1405 in k1330 in k1327 in a1306 in compile-format-string in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_1478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1478,2,t0,t1);}
t2=C_a_i_list(&a,4,lf[18],t1,C_SCHEME_FALSE,((C_word*)t0)[2]);
/* compiler-syntax.scm:216: push */
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_1485(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t2));}

/* k2355 in k2359 in k2363 in k2367 in k2371 in k2375 in k2379 in k1288 in k1285 in k1282 in k1202 in k1199 in k1196 */
static void C_ccall f_2357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2357,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[16],t1);
t3=C_a_i_list(&a,7,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t2);
/* compiler-syntax.scm:143: r-c-s */
t4=*((C_word*)lf[5]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[8],lf[65],((C_word*)t0)[9],t3);}

/* map-loop128 in k2989 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in a2953 in k1202 in k1199 in k1196 */
static void C_fcall f_3352(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3352,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3381,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_a_i_list(&a,1,t4);
/* compiler-syntax.scm:76: gensym */
t6=*((C_word*)lf[46]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t3);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[195] = {
{"f_2247:compiler_2dsyntax_2escm",(void*)f_2247},
{"f_2243:compiler_2dsyntax_2escm",(void*)f_2243},
{"f_1901:compiler_2dsyntax_2escm",(void*)f_1901},
{"f_1428:compiler_2dsyntax_2escm",(void*)f_1428},
{"f_2269:compiler_2dsyntax_2escm",(void*)f_2269},
{"f_2267:compiler_2dsyntax_2escm",(void*)f_2267},
{"f_2263:compiler_2dsyntax_2escm",(void*)f_2263},
{"f_2310:compiler_2dsyntax_2escm",(void*)f_2310},
{"f_2251:compiler_2dsyntax_2escm",(void*)f_2251},
{"f_2259:compiler_2dsyntax_2escm",(void*)f_2259},
{"f_2255:compiler_2dsyntax_2escm",(void*)f_2255},
{"f_3299:compiler_2dsyntax_2escm",(void*)f_3299},
{"f_3297:compiler_2dsyntax_2escm",(void*)f_3297},
{"f_1485:compiler_2dsyntax_2escm",(void*)f_1485},
{"f_1841:compiler_2dsyntax_2escm",(void*)f_1841},
{"f_2286:compiler_2dsyntax_2escm",(void*)f_2286},
{"f_1495:compiler_2dsyntax_2escm",(void*)f_1495},
{"f_1859:compiler_2dsyntax_2escm",(void*)f_1859},
{"f_1198:compiler_2dsyntax_2escm",(void*)f_1198},
{"f_2276:compiler_2dsyntax_2escm",(void*)f_2276},
{"f_2273:compiler_2dsyntax_2escm",(void*)f_2273},
{"f_1830:compiler_2dsyntax_2escm",(void*)f_1830},
{"f_1837:compiler_2dsyntax_2escm",(void*)f_1837},
{"f_2298:compiler_2dsyntax_2escm",(void*)f_2298},
{"f_1883:compiler_2dsyntax_2escm",(void*)f_1883},
{"f_3002:compiler_2dsyntax_2escm",(void*)f_3002},
{"f_3253:compiler_2dsyntax_2escm",(void*)f_3253},
{"f_2476:compiler_2dsyntax_2escm",(void*)f_2476},
{"f_1889:compiler_2dsyntax_2escm",(void*)f_1889},
{"f_1886:compiler_2dsyntax_2escm",(void*)f_1886},
{"f_1447:compiler_2dsyntax_2escm",(void*)f_1447},
{"f_1892:compiler_2dsyntax_2escm",(void*)f_1892},
{"f_3079:compiler_2dsyntax_2escm",(void*)f_3079},
{"f_2461:compiler_2dsyntax_2escm",(void*)f_2461},
{"f_2467:compiler_2dsyntax_2escm",(void*)f_2467},
{"f_2464:compiler_2dsyntax_2escm",(void*)f_2464},
{"f_1895:compiler_2dsyntax_2escm",(void*)f_1895},
{"f_1898:compiler_2dsyntax_2escm",(void*)f_1898},
{"f_2734:compiler_2dsyntax_2escm",(void*)f_2734},
{"f_1705:compiler_2dsyntax_2escm",(void*)f_1705},
{"f_1702:compiler_2dsyntax_2escm",(void*)f_1702},
{"f_2400:compiler_2dsyntax_2escm",(void*)f_2400},
{"f_2408:compiler_2dsyntax_2escm",(void*)f_2408},
{"f_2393:compiler_2dsyntax_2escm",(void*)f_2393},
{"f_2431:compiler_2dsyntax_2escm",(void*)f_2431},
{"f_2434:compiler_2dsyntax_2escm",(void*)f_2434},
{"f_2437:compiler_2dsyntax_2escm",(void*)f_2437},
{"f_2383:compiler_2dsyntax_2escm",(void*)f_2383},
{"f_2381:compiler_2dsyntax_2escm",(void*)f_2381},
{"f_3034:compiler_2dsyntax_2escm",(void*)f_3034},
{"f_2424:compiler_2dsyntax_2escm",(void*)f_2424},
{"f_2428:compiler_2dsyntax_2escm",(void*)f_2428},
{"f_2770:compiler_2dsyntax_2escm",(void*)f_2770},
{"f_2377:compiler_2dsyntax_2escm",(void*)f_2377},
{"f_2373:compiler_2dsyntax_2escm",(void*)f_2373},
{"f_2361:compiler_2dsyntax_2escm",(void*)f_2361},
{"f_2721:compiler_2dsyntax_2escm",(void*)f_2721},
{"f_2369:compiler_2dsyntax_2escm",(void*)f_2369},
{"f_2365:compiler_2dsyntax_2escm",(void*)f_2365},
{"f_2107:compiler_2dsyntax_2escm",(void*)f_2107},
{"f_1756:compiler_2dsyntax_2escm",(void*)f_1756},
{"f_2109:compiler_2dsyntax_2escm",(void*)f_2109},
{"f_3167:compiler_2dsyntax_2escm",(void*)f_3167},
{"f_3081:compiler_2dsyntax_2escm",(void*)f_3081},
{"f_3160:compiler_2dsyntax_2escm",(void*)f_3160},
{"f_3169:compiler_2dsyntax_2escm",(void*)f_3169},
{"f_2845:compiler_2dsyntax_2escm",(void*)f_2845},
{"f_2832:compiler_2dsyntax_2escm",(void*)f_2832},
{"f_2830:compiler_2dsyntax_2escm",(void*)f_2830},
{"f_1862:compiler_2dsyntax_2escm",(void*)f_1862},
{"f_1864:compiler_2dsyntax_2escm",(void*)f_1864},
{"f_2487:compiler_2dsyntax_2escm",(void*)f_2487},
{"f_2948:compiler_2dsyntax_2escm",(void*)f_2948},
{"f_3046:compiler_2dsyntax_2escm",(void*)f_3046},
{"f_2502:compiler_2dsyntax_2escm",(void*)f_2502},
{"f_2932:compiler_2dsyntax_2escm",(void*)f_2932},
{"f_2504:compiler_2dsyntax_2escm",(void*)f_2504},
{"f_2572:compiler_2dsyntax_2escm",(void*)f_2572},
{"f_2574:compiler_2dsyntax_2escm",(void*)f_2574},
{"f_2991:compiler_2dsyntax_2escm",(void*)f_2991},
{"f_2452:compiler_2dsyntax_2escm",(void*)f_2452},
{"f_2918:compiler_2dsyntax_2escm",(void*)f_2918},
{"f_2458:compiler_2dsyntax_2escm",(void*)f_2458},
{"f_2455:compiler_2dsyntax_2escm",(void*)f_2455},
{"f_2982:compiler_2dsyntax_2escm",(void*)f_2982},
{"f_2440:compiler_2dsyntax_2escm",(void*)f_2440},
{"f_2449:compiler_2dsyntax_2escm",(void*)f_2449},
{"f_2446:compiler_2dsyntax_2escm",(void*)f_2446},
{"f_2443:compiler_2dsyntax_2escm",(void*)f_2443},
{"f_2976:compiler_2dsyntax_2escm",(void*)f_2976},
{"f_2973:compiler_2dsyntax_2escm",(void*)f_2973},
{"f_2970:compiler_2dsyntax_2escm",(void*)f_2970},
{"f_2979:compiler_2dsyntax_2escm",(void*)f_2979},
{"f_2531:compiler_2dsyntax_2escm",(void*)f_2531},
{"f_2519:compiler_2dsyntax_2escm",(void*)f_2519},
{"f_3217:compiler_2dsyntax_2escm",(void*)f_3217},
{"f_3204:compiler_2dsyntax_2escm",(void*)f_3204},
{"toplevel:compiler_2dsyntax_2escm",(void*)C_compiler_2dsyntax_toplevel},
{"f_2192:compiler_2dsyntax_2escm",(void*)f_2192},
{"f_2180:compiler_2dsyntax_2escm",(void*)f_2180},
{"f_2182:compiler_2dsyntax_2escm",(void*)f_2182},
{"f_2172:compiler_2dsyntax_2escm",(void*)f_2172},
{"f_2014:compiler_2dsyntax_2escm",(void*)f_2014},
{"f_2176:compiler_2dsyntax_2escm",(void*)f_2176},
{"f_2017:compiler_2dsyntax_2escm",(void*)f_2017},
{"f_2011:compiler_2dsyntax_2escm",(void*)f_2011},
{"f_2961:compiler_2dsyntax_2escm",(void*)f_2961},
{"f_2964:compiler_2dsyntax_2escm",(void*)f_2964},
{"f_2967:compiler_2dsyntax_2escm",(void*)f_2967},
{"f_2640:compiler_2dsyntax_2escm",(void*)f_2640},
{"f_2642:compiler_2dsyntax_2escm",(void*)f_2642},
{"f_2160:compiler_2dsyntax_2escm",(void*)f_2160},
{"f_2168:compiler_2dsyntax_2escm",(void*)f_2168},
{"f_2164:compiler_2dsyntax_2escm",(void*)f_2164},
{"f_2952:compiler_2dsyntax_2escm",(void*)f_2952},
{"f_2954:compiler_2dsyntax_2escm",(void*)f_2954},
{"f_2958:compiler_2dsyntax_2escm",(void*)f_2958},
{"f_1301:compiler_2dsyntax_2escm",(void*)f_1301},
{"f_1307:compiler_2dsyntax_2escm",(void*)f_1307},
{"f_2156:compiler_2dsyntax_2escm",(void*)f_2156},
{"f_3017:compiler_2dsyntax_2escm",(void*)f_3017},
{"f_3019:compiler_2dsyntax_2escm",(void*)f_3019},
{"f_3123:compiler_2dsyntax_2escm",(void*)f_3123},
{"f_3125:compiler_2dsyntax_2escm",(void*)f_3125},
{"f_2686:compiler_2dsyntax_2escm",(void*)f_2686},
{"f_1332:compiler_2dsyntax_2escm",(void*)f_1332},
{"f_1248:compiler_2dsyntax_2escm",(void*)f_1248},
{"f_1335:compiler_2dsyntax_2escm",(void*)f_1335},
{"f_2684:compiler_2dsyntax_2escm",(void*)f_2684},
{"f_1329:compiler_2dsyntax_2escm",(void*)f_1329},
{"f_2677:compiler_2dsyntax_2escm",(void*)f_2677},
{"f_1342:compiler_2dsyntax_2escm",(void*)f_1342},
{"f_1339:compiler_2dsyntax_2escm",(void*)f_1339},
{"f_2113:compiler_2dsyntax_2escm",(void*)f_2113},
{"f_3407:compiler_2dsyntax_2escm",(void*)f_3407},
{"f_1221:compiler_2dsyntax_2escm",(void*)f_1221},
{"f_1229:compiler_2dsyntax_2escm",(void*)f_1229},
{"f_1352:compiler_2dsyntax_2escm",(void*)f_1352},
{"f_1238:compiler_2dsyntax_2escm",(void*)f_1238},
{"f_1364:compiler_2dsyntax_2escm",(void*)f_1364},
{"f_1361:compiler_2dsyntax_2escm",(void*)f_1361},
{"f_1358:compiler_2dsyntax_2escm",(void*)f_1358},
{"f_1201:compiler_2dsyntax_2escm",(void*)f_1201},
{"f_2023:compiler_2dsyntax_2escm",(void*)f_2023},
{"f_1204:compiler_2dsyntax_2escm",(void*)f_1204},
{"f_1207:compiler_2dsyntax_2escm",(void*)f_1207},
{"f_1376:compiler_2dsyntax_2escm",(void*)f_1376},
{"f_2026:compiler_2dsyntax_2escm",(void*)f_2026},
{"f_1373:compiler_2dsyntax_2escm",(void*)f_1373},
{"f_1370:compiler_2dsyntax_2escm",(void*)f_1370},
{"f_2020:compiler_2dsyntax_2escm",(void*)f_2020},
{"f_1367:compiler_2dsyntax_2escm",(void*)f_1367},
{"f_1211:compiler_2dsyntax_2escm",(void*)f_1211},
{"f_1383:compiler_2dsyntax_2escm",(void*)f_1383},
{"f_1215:compiler_2dsyntax_2escm",(void*)f_1215},
{"f_1379:compiler_2dsyntax_2escm",(void*)f_1379},
{"f_1392:compiler_2dsyntax_2escm",(void*)f_1392},
{"f_1395:compiler_2dsyntax_2escm",(void*)f_1395},
{"f_1386:compiler_2dsyntax_2escm",(void*)f_1386},
{"f_3312:compiler_2dsyntax_2escm",(void*)f_3312},
{"f_1398:compiler_2dsyntax_2escm",(void*)f_1398},
{"f_1680:compiler_2dsyntax_2escm",(void*)f_1680},
{"f_1600:compiler_2dsyntax_2escm",(void*)f_1600},
{"f_1566:compiler_2dsyntax_2escm",(void*)f_1566},
{"f_1560:compiler_2dsyntax_2escm",(void*)f_1560},
{"f_1659:compiler_2dsyntax_2escm",(void*)f_1659},
{"f_1508:compiler_2dsyntax_2escm",(void*)f_1508},
{"f_2889:compiler_2dsyntax_2escm",(void*)f_2889},
{"f_1505:compiler_2dsyntax_2escm",(void*)f_1505},
{"f_1638:compiler_2dsyntax_2escm",(void*)f_1638},
{"f_1284:compiler_2dsyntax_2escm",(void*)f_1284},
{"f_1287:compiler_2dsyntax_2escm",(void*)f_1287},
{"f_1290:compiler_2dsyntax_2escm",(void*)f_1290},
{"f_1293:compiler_2dsyntax_2escm",(void*)f_1293},
{"f_1296:compiler_2dsyntax_2escm",(void*)f_1296},
{"f_1617:compiler_2dsyntax_2escm",(void*)f_1617},
{"f_1299:compiler_2dsyntax_2escm",(void*)f_1299},
{"f_1531:compiler_2dsyntax_2escm",(void*)f_1531},
{"f_1263:compiler_2dsyntax_2escm",(void*)f_1263},
{"f_1267:compiler_2dsyntax_2escm",(void*)f_1267},
{"f_1271:compiler_2dsyntax_2escm",(void*)f_1271},
{"f_3395:compiler_2dsyntax_2escm",(void*)f_3395},
{"f_1407:compiler_2dsyntax_2escm",(void*)f_1407},
{"f_3381:compiler_2dsyntax_2escm",(void*)f_3381},
{"f_1413:compiler_2dsyntax_2escm",(void*)f_1413},
{"f_1410:compiler_2dsyntax_2escm",(void*)f_1410},
{"f_1416:compiler_2dsyntax_2escm",(void*)f_1416},
{"f_1418:compiler_2dsyntax_2escm",(void*)f_1418},
{"f_1992:compiler_2dsyntax_2escm",(void*)f_1992},
{"f_1990:compiler_2dsyntax_2escm",(void*)f_1990},
{"f_1583:compiler_2dsyntax_2escm",(void*)f_1583},
{"f_1478:compiler_2dsyntax_2escm",(void*)f_1478},
{"f_2357:compiler_2dsyntax_2escm",(void*)f_2357},
{"f_3352:compiler_2dsyntax_2escm",(void*)f_3352},
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
S|  sprintf		2
S|  map		14
S|  for-each		1
o|eliminated procedure checks: 204 
o|specializations:
o|  11 (eqv? (not float) *)
o|  1 (= fixnum fixnum)
o|  2 (##sys#check-output-port * * *)
o|  3 (car pair)
o|  1 (cddr (pair * pair))
o|  2 (>= fixnum fixnum)
o|  2 (cdr pair)
o|  1 (memq * list)
o|  15 (##sys#check-list (or pair list) *)
o|safe globals: (##compiler#r-c-s ##sys#compiler-syntax-hook ##compiler#compiler-syntax-statistics) 
o|inlining procedure: k1240 
o|inlining procedure: k1240 
o|inlining procedure: k1309 
o|merged explicitly consed rest parameter: args663 
o|inlining procedure: k1343 
o|inlining procedure: k1343 
o|substituted constant variable: a1354 
o|substituted constant variable: a1355 
o|substituted constant variable: a1388 
o|substituted constant variable: a1389 
o|inlining procedure: k1381 
o|inlining procedure: k1381 
o|inlining procedure: k1430 
o|consed rest parameter at call site: "(compiler-syntax.scm:210) fail660" 3 
o|inlining procedure: k1430 
o|inlining procedure: k1449 
o|inlining procedure: k1459 
o|inlining procedure: k1459 
o|substituted constant variable: a1479 
o|inlining procedure: k1449 
o|inlining procedure: k1321 
o|inlining procedure: k1497 
o|consed rest parameter at call site: "(compiler-syntax.scm:225) fail660" 3 
o|inlining procedure: k1497 
o|inlining procedure: k1564 
o|inlining procedure: k1564 
o|inlining procedure: k1601 
o|inlining procedure: k1601 
o|inlining procedure: k1639 
o|inlining procedure: k1639 
o|inlining procedure: k1681 
o|inlining procedure: k1681 
o|inlining procedure: k1713 
o|inlining procedure: k1713 
o|inlining procedure: k1742 
o|inlining procedure: k1758 
o|inlining procedure: k1758 
o|inlining procedure: k1742 
o|consed rest parameter at call site: "(compiler-syntax.scm:264) fail660" 3 
o|substituted constant variable: a1782 
o|substituted constant variable: a1784 
o|substituted constant variable: a1786 
o|substituted constant variable: a1788 
o|substituted constant variable: a1790 
o|substituted constant variable: a1792 
o|substituted constant variable: a1794 
o|substituted constant variable: a1796 
o|substituted constant variable: a1798 
o|substituted constant variable: a1800 
o|substituted constant variable: a1802 
o|inlining procedure: k1321 
o|inlining procedure: k1819 
o|inlining procedure: k1819 
o|inlining procedure: k1309 
o|substituted constant variable: a1856 
o|inlining procedure: k1866 
o|inlining procedure: k1866 
o|inlining procedure: k1994 
o|inlining procedure: k1994 
o|inlining procedure: k2114 
o|inlining procedure: k2114 
o|inlining procedure: k2184 
o|inlining procedure: k2184 
o|substituted constant variable: a2207 
o|inlining procedure: k2277 
o|inlining procedure: k2277 
o|substituted constant variable: a2321 
o|inlining procedure: k2385 
o|inlining procedure: k2385 
o|inlining procedure: k2471 
o|inlining procedure: k2576 
o|contracted procedure: "(compiler-syntax.scm:132) g556565" 
o|inlining procedure: k2576 
o|inlining procedure: k2644 
o|contracted procedure: "(compiler-syntax.scm:124) g526535" 
o|inlining procedure: k2644 
o|inlining procedure: k2688 
o|inlining procedure: k2688 
o|inlining procedure: k2723 
o|inlining procedure: k2723 
o|inlining procedure: k2772 
o|inlining procedure: k2772 
o|inlining procedure: k2834 
o|inlining procedure: k2834 
o|inlining procedure: k2891 
o|contracted procedure: "(compiler-syntax.scm:111) g374383" 
o|inlining procedure: k2891 
o|inlining procedure: k2471 
o|inlining procedure: k2986 
o|inlining procedure: k3083 
o|contracted procedure: "(compiler-syntax.scm:89) g316325" 
o|inlining procedure: k3083 
o|inlining procedure: k3127 
o|contracted procedure: "(compiler-syntax.scm:86) g286295" 
o|inlining procedure: k3127 
o|inlining procedure: k3171 
o|inlining procedure: k3171 
o|inlining procedure: k3206 
o|inlining procedure: k3206 
o|inlining procedure: k3255 
o|inlining procedure: k3255 
o|inlining procedure: k3301 
o|inlining procedure: k3301 
o|inlining procedure: k3354 
o|contracted procedure: "(compiler-syntax.scm:76) g134143" 
o|inlining procedure: k3354 
o|inlining procedure: k2986 
o|simplifications: ((if . 1)) 
o|replaced variables: 352 
o|removed binding forms: 126 
o|substituted constant variable: r13823415 
o|substituted constant variable: r13823415 
o|converted assignments to bindings: (fail660) 
o|substituted constant variable: r13223450 
o|substituted constant variable: r18203452 
o|substituted constant variable: r13103453 
o|simplifications: ((let . 1)) 
o|replaced variables: 2 
o|removed binding forms: 382 
o|replaced variables: 12 
o|removed binding forms: 7 
o|removed binding forms: 11 
o|simplifications: ((if . 11) (##core#call . 310)) 
o|  call simplifications:
o|    cddr	2
o|    >	2
o|    ##sys#check-list	4
o|    list	4
o|    ##sys#setslot	14
o|    fx>
o|    fx=	2
o|    cadr	5
o|    caddr	2
o|    cadddr	2
o|    fx>=	2
o|    memq	6
o|    list?
o|    caar
o|    string?	3
o|    string-length
o|    >=
o|    char-upcase
o|    char-whitespace?	2
o|    sub1
o|    ##sys#cons	45
o|    length	6
o|    eq?	13
o|    ##sys#list	98
o|    cdr	3
o|    string-ref
o|    fx+
o|    ##sys#apply
o|    null?	3
o|    car	6
o|    cons	17
o|    pair?	20
o|    ##sys#slot	38
o|    add1
o|contracted procedure: k1217 
o|contracted procedure: k1276 
o|contracted procedure: k1223 
o|contracted procedure: k1226 
o|contracted procedure: k1243 
o|contracted procedure: k1253 
o|contracted procedure: k1257 
o|contracted procedure: k1273 
o|contracted procedure: k1853 
o|contracted procedure: k1312 
o|contracted procedure: k1318 
o|contracted procedure: k1849 
o|contracted procedure: k1324 
o|contracted procedure: k1402 
o|contracted procedure: k1420 
o|contracted procedure: k1424 
o|contracted procedure: k1433 
o|contracted procedure: k1439 
o|contracted procedure: k1443 
o|contracted procedure: k1452 
o|contracted procedure: k1481 
o|contracted procedure: k1462 
o|contracted procedure: k1469 
o|inlining procedure: k1459 
o|inlining procedure: k1459 
o|contracted procedure: k1488 
o|contracted procedure: k1500 
o|contracted procedure: k1537 
o|contracted procedure: k1517 
o|contracted procedure: k1533 
o|contracted procedure: k1525 
o|contracted procedure: k1521 
o|contracted procedure: k1513 
o|contracted procedure: k1540 
o|contracted procedure: k1552 
o|contracted procedure: k1561 
o|contracted procedure: k1570 
o|contracted procedure: k1577 
o|contracted procedure: k1587 
o|contracted procedure: k1594 
o|contracted procedure: k1604 
o|contracted procedure: k1611 
o|contracted procedure: k1621 
o|contracted procedure: k1632 
o|contracted procedure: k1628 
o|contracted procedure: k1642 
o|contracted procedure: k1653 
o|contracted procedure: k1649 
o|contracted procedure: k1663 
o|contracted procedure: k1674 
o|contracted procedure: k1670 
o|contracted procedure: k1684 
o|contracted procedure: k1691 
o|contracted procedure: k1697 
o|contracted procedure: k1710 
o|contracted procedure: k1716 
o|contracted procedure: k1723 
o|contracted procedure: k1729 
o|contracted procedure: k1732 
o|contracted procedure: k1739 
o|contracted procedure: k1745 
o|contracted procedure: k1761 
o|contracted procedure: k1772 
o|contracted procedure: k1807 
o|contracted procedure: k1810 
o|contracted procedure: k1822 
o|contracted procedure: k1843 
o|contracted procedure: k1976 
o|contracted procedure: k1969 
o|contracted procedure: k1869 
o|contracted procedure: k1872 
o|contracted procedure: k1875 
o|contracted procedure: k1878 
o|contracted procedure: k1962 
o|contracted procedure: k1966 
o|contracted procedure: k1906 
o|contracted procedure: k1958 
o|contracted procedure: k1954 
o|contracted procedure: k1910 
o|contracted procedure: k1946 
o|contracted procedure: k1950 
o|contracted procedure: k1918 
o|contracted procedure: k1926 
o|contracted procedure: k1934 
o|contracted procedure: k1942 
o|contracted procedure: k1938 
o|contracted procedure: k1930 
o|contracted procedure: k1922 
o|contracted procedure: k1914 
o|contracted procedure: k1984 
o|contracted procedure: k1980 
o|contracted procedure: k2093 
o|contracted procedure: k2086 
o|contracted procedure: k1997 
o|contracted procedure: k2000 
o|contracted procedure: k2003 
o|contracted procedure: k2006 
o|contracted procedure: k2083 
o|contracted procedure: k2031 
o|contracted procedure: k2079 
o|contracted procedure: k2075 
o|contracted procedure: k2035 
o|contracted procedure: k2071 
o|contracted procedure: k2043 
o|contracted procedure: k2051 
o|contracted procedure: k2059 
o|contracted procedure: k2067 
o|contracted procedure: k2063 
o|contracted procedure: k2055 
o|contracted procedure: k2047 
o|contracted procedure: k2039 
o|contracted procedure: k2101 
o|contracted procedure: k2097 
o|contracted procedure: k2118 
o|contracted procedure: k2126 
o|contracted procedure: k2130 
o|contracted procedure: k2134 
o|contracted procedure: k2138 
o|contracted procedure: k2142 
o|contracted procedure: k2146 
o|contracted procedure: k2150 
o|contracted procedure: k2122 
o|contracted procedure: k2204 
o|contracted procedure: k2187 
o|contracted procedure: k2197 
o|contracted procedure: k2213 
o|contracted procedure: k2217 
o|contracted procedure: k2221 
o|contracted procedure: k2225 
o|contracted procedure: k2229 
o|contracted procedure: k2233 
o|contracted procedure: k2237 
o|contracted procedure: k2209 
o|contracted procedure: k2304 
o|contracted procedure: k2300 
o|contracted procedure: k2288 
o|contracted procedure: k2292 
o|contracted procedure: k2318 
o|contracted procedure: k2312 
o|contracted procedure: k2327 
o|contracted procedure: k2331 
o|contracted procedure: k2335 
o|contracted procedure: k2339 
o|contracted procedure: k2343 
o|contracted procedure: k2347 
o|contracted procedure: k2351 
o|contracted procedure: k2323 
o|contracted procedure: k2420 
o|contracted procedure: k2413 
o|contracted procedure: k2388 
o|contracted procedure: k2402 
o|contracted procedure: k2410 
o|contracted procedure: k2468 
o|contracted procedure: k2482 
o|contracted procedure: k2885 
o|contracted procedure: k2805 
o|contracted procedure: k2813 
o|contracted procedure: k2881 
o|contracted procedure: k2821 
o|contracted procedure: k2825 
o|contracted procedure: k2817 
o|contracted procedure: k2809 
o|contracted procedure: k2496 
o|contracted procedure: k2492 
o|contracted procedure: k2514 
o|contracted procedure: k2510 
o|contracted procedure: k2537 
o|contracted procedure: k2625 
o|contracted procedure: k2629 
o|contracted procedure: k2621 
o|contracted procedure: k2617 
o|contracted procedure: k2545 
o|contracted procedure: k2609 
o|contracted procedure: k2613 
o|contracted procedure: k2549 
o|contracted procedure: k2553 
o|contracted procedure: k2561 
o|contracted procedure: k2557 
o|contracted procedure: k2541 
o|contracted procedure: k2533 
o|contracted procedure: k2525 
o|contracted procedure: k2521 
o|contracted procedure: k2579 
o|contracted procedure: k2605 
o|contracted procedure: k2601 
o|contracted procedure: k2582 
o|contracted procedure: k2593 
o|contracted procedure: k2647 
o|contracted procedure: k2673 
o|contracted procedure: k2669 
o|contracted procedure: k2650 
o|contracted procedure: k2661 
o|contracted procedure: k2691 
o|contracted procedure: k2694 
o|contracted procedure: k2705 
o|contracted procedure: k2717 
o|contracted procedure: k2763 
o|contracted procedure: k2726 
o|contracted procedure: k2756 
o|contracted procedure: k2760 
o|contracted procedure: k2752 
o|contracted procedure: k2729 
o|contracted procedure: k2740 
o|contracted procedure: k2744 
o|contracted procedure: k2775 
o|contracted procedure: k2778 
o|contracted procedure: k2789 
o|contracted procedure: k2801 
o|contracted procedure: k2874 
o|contracted procedure: k2837 
o|contracted procedure: k2867 
o|contracted procedure: k2871 
o|contracted procedure: k2863 
o|contracted procedure: k2840 
o|contracted procedure: k2851 
o|contracted procedure: k2855 
o|contracted procedure: k2894 
o|contracted procedure: k2897 
o|contracted procedure: k2908 
o|contracted procedure: k2920 
o|contracted procedure: k2923 
o|contracted procedure: k2938 
o|contracted procedure: k2942 
o|contracted procedure: k2934 
o|contracted procedure: k2983 
o|contracted procedure: k2997 
o|contracted procedure: k3348 
o|contracted procedure: k3288 
o|contracted procedure: k3292 
o|contracted procedure: k3011 
o|contracted procedure: k3007 
o|contracted procedure: k3029 
o|contracted procedure: k3025 
o|contracted procedure: k3052 
o|contracted procedure: k3060 
o|contracted procedure: k3068 
o|contracted procedure: k3064 
o|contracted procedure: k3056 
o|contracted procedure: k3048 
o|contracted procedure: k3040 
o|contracted procedure: k3036 
o|contracted procedure: k3086 
o|contracted procedure: k3112 
o|contracted procedure: k3108 
o|contracted procedure: k3089 
o|contracted procedure: k3100 
o|contracted procedure: k3130 
o|contracted procedure: k3156 
o|contracted procedure: k3152 
o|contracted procedure: k3133 
o|contracted procedure: k3144 
o|contracted procedure: k3174 
o|contracted procedure: k3177 
o|contracted procedure: k3188 
o|contracted procedure: k3200 
o|contracted procedure: k3246 
o|contracted procedure: k3209 
o|contracted procedure: k3239 
o|contracted procedure: k3243 
o|contracted procedure: k3235 
o|contracted procedure: k3212 
o|contracted procedure: k3223 
o|contracted procedure: k3227 
o|contracted procedure: k3258 
o|contracted procedure: k3261 
o|contracted procedure: k3272 
o|contracted procedure: k3284 
o|contracted procedure: k3341 
o|contracted procedure: k3304 
o|contracted procedure: k3334 
o|contracted procedure: k3338 
o|contracted procedure: k3330 
o|contracted procedure: k3307 
o|contracted procedure: k3318 
o|contracted procedure: k3322 
o|contracted procedure: k3357 
o|contracted procedure: k3360 
o|contracted procedure: k3371 
o|contracted procedure: k3383 
o|contracted procedure: k3386 
o|contracted procedure: k3401 
o|contracted procedure: k3397 
o|simplifications: ((let . 32)) 
o|removed binding forms: 280 
o|inlining procedure: k2585 
o|inlining procedure: k2585 
o|inlining procedure: k2653 
o|inlining procedure: k2653 
o|inlining procedure: k2697 
o|inlining procedure: k2697 
o|inlining procedure: k2781 
o|inlining procedure: k2781 
o|inlining procedure: k2900 
o|inlining procedure: k2900 
o|inlining procedure: k3092 
o|inlining procedure: k3092 
o|inlining procedure: k3136 
o|inlining procedure: k3136 
o|inlining procedure: k3180 
o|inlining procedure: k3180 
o|inlining procedure: k3264 
o|inlining procedure: k3264 
o|inlining procedure: k3363 
o|inlining procedure: k3363 
o|replaced variables: 57 
o|removed binding forms: 1 
o|removed binding forms: 57 
o|replaced variables: 40 
o|removed binding forms: 10 
o|direct leaf routine/allocation: fetch703 0 
o|direct leaf routine/allocation: push706 3 
o|direct leaf routine/allocation: g435444 24 
o|direct leaf routine/allocation: g496505 7 
o|direct leaf routine/allocation: g195204 24 
o|direct leaf routine/allocation: g256265 7 
o|contracted procedure: "(compiler-syntax.scm:231) k1546" 
o|contracted procedure: "(compiler-syntax.scm:233) k1555" 
o|inlining procedure: "(compiler-syntax.scm:236) k1564" 
o|inlining procedure: "(compiler-syntax.scm:237) k1564" 
o|inlining procedure: "(compiler-syntax.scm:238) k1564" 
o|inlining procedure: "(compiler-syntax.scm:240) k1564" 
o|inlining procedure: "(compiler-syntax.scm:244) k1564" 
o|inlining procedure: "(compiler-syntax.scm:248) k1564" 
o|inlining procedure: "(compiler-syntax.scm:251) k1564" 
o|inlining procedure: "(compiler-syntax.scm:255) k1564" 
o|inlining procedure: "(compiler-syntax.scm:256) k1564" 
o|inlining procedure: "(compiler-syntax.scm:257) k1564" 
o|contracted procedure: "(compiler-syntax.scm:260) k1752" 
o|contracted procedure: "(compiler-syntax.scm:262) k1768" 
o|contracted procedure: "(compiler-syntax.scm:120) k2713" 
o|contracted procedure: "(compiler-syntax.scm:116) k2797" 
o|contracted procedure: "(compiler-syntax.scm:83) k3196" 
o|contracted procedure: "(compiler-syntax.scm:79) k3280" 
o|removed binding forms: 8 
o|customizable procedures: (k2989 map-loop128146 k3310 map-loop158177 map-loop189210 k3215 map-loop219238 map-loop250271 map-loop280301 map-loop310331 k2474 map-loop368386 k2843 map-loop398417 map-loop429450 k2732 map-loop459478 map-loop490511 map-loop520541 map-loop550571 k1327 skip773 next704 loop719 endchunk705 fail660 g4451 for-each-loop4354) 
o|calls to known targets: 87 
o|identified direct recursive calls: f_1756 1 
o|identified direct recursive calls: f_1495 1 
o|identified direct recursive calls: f_2574 2 
o|identified direct recursive calls: f_2642 2 
o|identified direct recursive calls: f_2686 2 
o|identified direct recursive calls: f_2770 2 
o|identified direct recursive calls: f_3081 2 
o|identified direct recursive calls: f_3125 2 
o|identified direct recursive calls: f_3169 2 
o|identified direct recursive calls: f_3253 2 
o|fast box initializations: 21 
*/
/* end of file */
