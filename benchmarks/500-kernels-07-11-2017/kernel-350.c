// -g 100,33,3 -l 4,3,1
#define int64_t long
#define uint64_t ulong
#define int_least64_t long
#define uint_least64_t ulong
#define int_fast64_t long
#define uint_fast64_t ulong
#define intmax_t long
#define uintmax_t ulong
#define int32_t int
#define uint32_t uint
#define int16_t short
#define uint16_t ushort
#define int8_t char
#define uint8_t uchar

#define INT64_MIN LONG_MIN
#define INT64_MAX LONG_MAX
#define INT32_MIN INT_MIN
#define INT32_MAX INT_MAX
#define INT16_MIN SHRT_MIN
#define INT16_MAX SHRT_MAX
#define INT8_MIN CHAR_MIN
#define INT8_MAX CHAR_MAX
#define UINT64_MIN ULONG_MIN
#define UINT64_MAX ULONG_MAX
#define UINT32_MIN UINT_MIN
#define UINT32_MAX UINT_MAX
#define UINT16_MIN USHRT_MIN
#define UINT16_MAX USHRT_MAX
#define UINT8_MIN UCHAR_MIN
#define UINT8_MAX UCHAR_MAX

#define transparent_crc(X, Y, Z) transparent_crc_(&crc64_context, X, Y, Z)

#define VECTOR(X , Y) VECTOR_(X, Y)
#define VECTOR_(X, Y) X##Y

#ifndef NO_GROUP_DIVERGENCE
#define GROUP_DIVERGE(x, y) get_group_id(x)
#else
#define GROUP_DIVERGE(x, y) (y)
#endif

#ifndef NO_FAKE_DIVERGENCE
#define FAKE_DIVERGE(x, y, z) (x - y)
#else
#define FAKE_DIVERGE(x, y, z) (z)
#endif


// Seed: 1558946639

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int32_t  f0;
   int32_t  f1;
   uint64_t  f2;
   volatile int64_t  f3;
   volatile int64_t  f4;
};

union U1 {
   int32_t  f0;
   volatile uint64_t  f1;
   int32_t  f2;
   volatile int64_t  f3;
   int32_t  f4;
};

struct S2 {
    volatile int32_t g_2;
    int32_t g_3;
    volatile int32_t g_6[6];
    int32_t g_7;
    int32_t g_10;
    int32_t g_13[8];
    uint16_t g_22;
    uint64_t g_24;
    uint64_t g_29;
    uint8_t g_32;
    union U0 g_52;
    uint8_t *g_85;
    uint8_t **g_84;
    volatile union U0 g_94;
    uint32_t g_95;
    int32_t g_96;
    volatile union U1 g_97;
    union U1 g_100[10];
    union U1 *g_102;
    union U1 ** volatile g_101;
    uint16_t g_110;
    uint16_t *g_109;
    int64_t g_112;
    uint8_t g_115;
    int8_t g_139;
    volatile union U0 g_157[2][7][8];
    volatile int32_t * volatile g_167;
    volatile int32_t * volatile * volatile g_168;
    int32_t *g_215[4];
    uint32_t g_222;
    int32_t * volatile g_225;
    int32_t ** volatile g_235;
    uint32_t g_275;
    volatile uint32_t g_311;
    int16_t g_334[3];
    int32_t * volatile g_342[5];
    int32_t * volatile g_343;
    uint32_t *g_351[2][10];
    int8_t *g_359[7];
    int8_t ** volatile g_358[8][7];
    int32_t * volatile g_392;
    union U0 g_398;
    int32_t * volatile g_401[7];
    int32_t * volatile g_402;
    uint16_t g_411;
    uint64_t *g_432;
    int32_t * volatile g_453[7];
    int32_t * volatile g_454;
    union U1 **g_458[8][4][7];
    union U1 *** volatile g_457;
    union U1 g_462;
    union U1 ** volatile g_466;
    volatile uint16_t g_488;
    int32_t * volatile g_522;
    int32_t * volatile g_523[6];
    int32_t * volatile g_525[2];
    int32_t * volatile g_526;
    int32_t * volatile g_527[10];
    int32_t * volatile g_528;
    union U0 ** volatile g_533[6];
    union U0 *g_535;
    union U0 ** volatile g_534;
    volatile union U1 g_546;
    uint16_t g_557;
    union U0 **g_568;
    union U1 *** volatile g_586;
    volatile union U0 g_589;
    int8_t g_608;
    volatile uint32_t g_611[7][4][3];
    volatile union U0 g_621;
    int32_t g_664[2];
    int32_t * volatile g_665[10][10];
    uint32_t g_678;
    volatile union U0 g_728[1];
    union U1 g_778;
    uint32_t g_798;
    volatile uint64_t g_820;
    uint32_t *g_823;
    volatile int8_t g_905[10][9];
    union U1 g_932;
    union U1 g_933[10];
    union U1 g_934[5];
    union U1 g_935;
    union U1 g_936;
    union U1 g_937;
    union U1 g_938;
    union U1 g_939;
    union U1 g_940;
    union U1 g_941;
    union U1 g_942;
    union U1 g_943;
    union U1 g_944;
    union U1 g_945;
    union U1 g_946;
    union U1 g_947;
    union U1 g_948;
    union U1 g_949;
    union U1 g_950[4][2];
    union U1 g_951;
    union U1 g_952[8][8];
    union U1 g_953[9][4][2];
    union U1 g_954;
    union U1 g_955[10][2];
    union U1 g_956;
    union U1 g_957[7][3];
    union U1 g_958;
    union U1 g_959;
    union U1 g_960;
    union U1 g_961;
    union U1 g_962;
    union U1 g_963;
    union U1 g_964[7][7][4];
    union U1 g_965;
    union U1 g_966;
    union U1 g_967;
    union U1 g_968;
    union U1 g_969;
    union U1 g_970;
    union U1 g_971[1];
    union U1 g_972;
    union U1 g_973;
    union U1 g_974;
    union U1 g_975[5];
    union U1 g_976;
    union U1 g_977;
    union U1 g_978;
    union U1 g_979[10];
    union U1 g_980;
    union U1 g_981;
    union U1 g_982;
    union U1 g_983[4];
    union U1 g_984;
    union U1 g_985;
    union U1 g_986[8];
    union U1 g_987[7];
    union U1 g_988;
    union U1 g_989;
    union U1 g_990;
    union U1 g_991;
    union U1 g_992;
    union U1 g_993;
    union U1 g_994[6];
    union U1 g_995;
    union U1 g_996;
    union U1 g_997;
    union U1 g_998;
    union U1 g_999;
    union U1 g_1000;
    union U1 g_1001;
    union U1 g_1002[4];
    union U1 g_1003;
    union U1 g_1004;
    union U1 g_1005;
    union U1 g_1006;
    union U1 g_1007[1];
    union U1 g_1009;
    union U1 g_1010;
    volatile uint32_t g_1012;
    int32_t * volatile g_1042;
    uint32_t g_1149;
    volatile union U1 g_1203[4];
    uint32_t g_1251;
    int8_t g_1270[5][8][6];
    int32_t * volatile g_1290;
    union U1 ***g_1325;
    volatile int32_t * volatile g_1343;
    volatile int32_t * volatile * volatile g_1342;
    int32_t *g_1347;
    int32_t ** volatile g_1346;
    int16_t *g_1358;
    int16_t ** volatile g_1357;
    uint8_t ***g_1369[4];
    uint32_t g_1371[7][2];
    uint64_t g_1373;
    volatile union U1 g_1409[7][4];
    uint64_t g_1436;
    uint32_t g_1522;
    volatile union U0 g_1542[1];
    volatile union U1 g_1615[2];
    volatile union U0 g_1639;
    union U0 g_1657;
    int32_t g_1663;
    volatile uint32_t g_1667;
    union U1 **g_1705;
    union U1 * volatile **g_1731;
    union U1 * volatile ***g_1730;
    union U1 * volatile ****g_1729;
    uint16_t *g_1823;
    uint16_t **g_1822;
    volatile union U0 g_1827[8];
    volatile union U1 g_1847;
    union U0 g_1854;
    uint8_t ****g_1894;
    uint8_t *****g_1893;
    int16_t **g_1945;
    volatile int32_t * volatile g_2011;
    int8_t g_2016;
    volatile union U1 g_2064[8][1][8];
    int32_t g_2094;
    uint32_t g_2127;
    int32_t *g_2131;
    union U1 g_2216;
    union U1 g_2219;
    union U0 g_2221;
    volatile union U0 g_2253;
    volatile union U0 g_2261;
    int32_t g_2290;
    int64_t *g_2306;
    volatile union U1 g_2317;
    union U0 g_2355;
    int32_t * volatile *g_2518;
    int32_t * volatile ** volatile g_2517[5][6];
    int32_t * volatile ** volatile *g_2516[5];
    volatile union U0 g_2519;
    volatile union U1 g_2662;
    volatile int32_t g_2673;
    union U1 g_2682;
    union U1 g_2694;
    union U1 g_2697[3][5][10];
    union U0 g_2706;
    int64_t g_2709;
    union U1 g_2710;
    int64_t g_2737;
    volatile int8_t * volatile g_2776;
    volatile int8_t * volatile * volatile g_2775[1];
    volatile int8_t * volatile * volatile * volatile g_2774;
    volatile int8_t * volatile * volatile * volatile * volatile g_2773[3];
    int8_t g_2814;
    union U0 g_2824;
    union U1 g_2829;
    union U1 g_2832;
    int16_t **g_2843;
    uint32_t g_2847[1][2];
    union U0 g_2858;
    uint32_t *g_2923;
    volatile int32_t g_2952[6][9];
    uint8_t g_2970;
    union U1 g_2972;
    union U1 g_2973[1][10][10];
    int32_t * volatile g_3013;
    union U1 g_3017;
    int32_t * volatile g_3018;
};


/* --- FORWARD DECLARATIONS --- */
union U1  func_1(struct S2 * p_3022);
int8_t  func_14(uint8_t  p_15, int32_t  p_16, struct S2 * p_3022);
uint8_t  func_17(int32_t  p_18, struct S2 * p_3022);
uint16_t  func_35(uint64_t  p_36, int32_t  p_37, uint64_t  p_38, int32_t  p_39, int32_t  p_40, struct S2 * p_3022);
int32_t  func_41(int32_t  p_42, uint16_t  p_43, uint32_t  p_44, uint8_t * p_45, struct S2 * p_3022);
union U1  func_46(int32_t  p_47, uint16_t  p_48, int32_t  p_49, int32_t  p_50, struct S2 * p_3022);
uint32_t  func_55(int8_t  p_56, int32_t  p_57, uint32_t  p_58, int32_t  p_59, int32_t  p_60, struct S2 * p_3022);
int8_t  func_67(int32_t  p_68, uint64_t * p_69, struct S2 * p_3022);
uint8_t ** func_71(int32_t  p_72, int8_t  p_73, int32_t  p_74, int32_t  p_75, struct S2 * p_3022);
uint8_t ** func_76(uint32_t  p_77, uint8_t * p_78, int32_t  p_79, uint16_t  p_80, uint32_t  p_81, struct S2 * p_3022);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_3022->g_3 p_3022->g_1823 p_3022->g_110 p_3022->g_432 p_3022->g_29 p_3022->g_1357 p_3022->g_1358 p_3022->g_334 p_3022->g_1371 p_3022->g_2306 p_3022->g_112 p_3022->g_1347 p_3022->g_109 p_3022->g_85 p_3022->g_2219.f0 p_3022->g_13 p_3022->g_1010.f0 p_3022->g_955.f0 p_3022->g_2011 p_3022->g_6 p_3022->g_52.f1 p_3022->g_84 p_3022->g_24 p_3022->g_728.f0 p_3022->g_1945 p_3022->g_557 p_3022->g_1894 p_3022->g_1369 p_3022->g_32 p_3022->g_225 p_3022->g_976.f0 p_3022->g_101 p_3022->g_22 p_3022->g_97.f0 p_3022->g_115 p_3022->g_102 p_3022->g_94.f0 p_3022->g_157 p_3022->g_139 p_3022->g_167 p_3022->g_95 p_3022->g_10 p_3022->g_2 p_3022->g_100 p_3022->g_100.f0 p_3022->g_96 p_3022->g_948.f0 p_3022->g_664 p_3022->g_1893 p_3022->g_275 p_3022->g_1822 p_3022->g_1006.f0 p_3022->g_2516 p_3022->g_2519 p_3022->g_823 p_3022->g_798 p_3022->g_1663 p_3022->g_534 p_3022->g_535 p_3022->g_1042 p_3022->g_2518 p_3022->g_2662 p_3022->g_2673 p_3022->g_2682 p_3022->g_411 p_3022->g_2694 p_3022->g_2697 p_3022->g_1346 p_3022->g_2706 p_3022->g_2709 p_3022->g_2710 p_3022->g_1342 p_3022->g_1343 p_3022->g_1203.f0 p_3022->g_1705 p_3022->g_2773 p_3022->g_2843 p_3022->g_998.f0 p_3022->g_2923 p_3022->g_1522 p_3022->g_7 p_3022->g_951.f2 p_3022->g_3017
 * writes: p_3022->g_3 p_3022->g_7 p_3022->g_10 p_3022->g_13 p_3022->g_939.f0 p_3022->g_401 p_3022->g_993.f2 p_3022->g_52.f1 p_3022->g_32 p_3022->g_110 p_3022->g_557 p_3022->g_334 p_3022->g_24 p_3022->g_102 p_3022->g_22 p_3022->g_115 p_3022->g_112 p_3022->g_6 p_3022->g_139 p_3022->g_96 p_3022->g_52.f0 p_3022->g_215 p_3022->g_664 p_3022->g_29 p_3022->g_275 p_3022->g_1006.f0 p_3022->g_1373 p_3022->g_2127 p_3022->g_1369 p_3022->g_1663 p_3022->g_963.f4 p_3022->g_951.f2 p_3022->g_961.f2 p_3022->g_968.f0 p_3022->g_411 p_3022->g_225 p_3022->g_965.f2 p_3022->g_943.f4 p_3022->g_2131 p_3022->g_2737 p_3022->g_1003.f2 p_3022->g_1347 p_3022->g_1522 p_3022->g_2970
 */
union U1  func_1(struct S2 * p_3022)
{ /* block id: 4 */
    uint16_t l_27 = 0x3090L;
    int32_t **l_2471 = (void*)0;
    uint8_t **l_2488 = &p_3022->g_85;
    int32_t l_2544 = (-2L);
    uint16_t l_2586 = 65532UL;
    int32_t l_2601 = 9L;
    int32_t l_2603 = 0L;
    int32_t l_2604 = 3L;
    int16_t l_2606[3];
    int32_t l_2609 = (-1L);
    int64_t l_2610 = 1L;
    int32_t l_2612[8][4] = {{(-4L),0x4E142029L,0L,0x66326045L},{(-4L),0x4E142029L,0L,0x66326045L},{(-4L),0x4E142029L,0L,0x66326045L},{(-4L),0x4E142029L,0L,0x66326045L},{(-4L),0x4E142029L,0L,0x66326045L},{(-4L),0x4E142029L,0L,0x66326045L},{(-4L),0x4E142029L,0L,0x66326045L},{(-4L),0x4E142029L,0L,0x66326045L}};
    union U1 *l_2617 = &p_3022->g_1007[0];
    int8_t l_2672 = 0x01L;
    int16_t l_2674[7] = {1L,1L,1L,1L,1L,1L,1L};
    uint32_t *l_2764 = &p_3022->g_1371[0][1];
    uint16_t **l_2797 = (void*)0;
    int32_t l_2820 = 0x32CCD802L;
    int16_t **l_2842 = &p_3022->g_1358;
    int16_t l_2846 = 0x7E65L;
    int16_t l_2886 = 0x5E54L;
    int32_t *l_3020[3][3][7] = {{{(void*)0,&l_2604,(void*)0,(void*)0,&l_2604,(void*)0,(void*)0},{(void*)0,&l_2604,(void*)0,(void*)0,&l_2604,(void*)0,(void*)0},{(void*)0,&l_2604,(void*)0,(void*)0,&l_2604,(void*)0,(void*)0}},{{(void*)0,&l_2604,(void*)0,(void*)0,&l_2604,(void*)0,(void*)0},{(void*)0,&l_2604,(void*)0,(void*)0,&l_2604,(void*)0,(void*)0},{(void*)0,&l_2604,(void*)0,(void*)0,&l_2604,(void*)0,(void*)0}},{{(void*)0,&l_2604,(void*)0,(void*)0,&l_2604,(void*)0,(void*)0},{(void*)0,&l_2604,(void*)0,(void*)0,&l_2604,(void*)0,(void*)0},{(void*)0,&l_2604,(void*)0,(void*)0,&l_2604,(void*)0,(void*)0}}};
    int32_t l_3021 = 1L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_2606[i] = 0x607FL;
    if ((1L & 0xF9D7L))
    { /* block id: 5 */
        int32_t l_30 = 0x3C41BBBBL;
        int32_t l_2368 = 0x418B5EDEL;
        int64_t l_2486[1][10] = {{0x5B7DD79B2770CD45L,0x234EA3BA75B7E220L,(-4L),0x234EA3BA75B7E220L,0x5B7DD79B2770CD45L,0x5B7DD79B2770CD45L,0x234EA3BA75B7E220L,(-4L),0x234EA3BA75B7E220L,0x5B7DD79B2770CD45L}};
        int32_t l_2520[3][5] = {{0x4CDD33B2L,0x4CDD33B2L,0x4CDD33B2L,0x4CDD33B2L,0x4CDD33B2L},{0x4CDD33B2L,0x4CDD33B2L,0x4CDD33B2L,0x4CDD33B2L,0x4CDD33B2L},{0x4CDD33B2L,0x4CDD33B2L,0x4CDD33B2L,0x4CDD33B2L,0x4CDD33B2L}};
        int i, j;
        for (p_3022->g_3 = 0; (p_3022->g_3 < (-6)); p_3022->g_3 = safe_sub_func_int32_t_s_s(p_3022->g_3, 3))
        { /* block id: 8 */
            int8_t l_1975[1];
            int32_t l_2410 = 0x4209ACBCL;
            uint8_t *l_2450 = &p_3022->g_115;
            uint64_t l_2487 = 0x083F6B17746CD103L;
            uint64_t *l_2535 = &p_3022->g_1373;
            int i;
            for (i = 0; i < 1; i++)
                l_1975[i] = 0x1BL;
            for (p_3022->g_7 = 0; (p_3022->g_7 >= (-27)); --p_3022->g_7)
            { /* block id: 11 */
                int64_t l_51 = 6L;
                uint64_t *l_70[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int8_t l_217[4];
                uint8_t l_218[10][3] = {{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL}};
                int8_t l_2387 = 0x7BL;
                int32_t l_2400 = 0L;
                uint64_t l_2485 = 0x7C68C20FEF92FC90L;
                int i, j;
                for (i = 0; i < 4; i++)
                    l_217[i] = (-1L);
                for (p_3022->g_10 = (-6); (p_3022->g_10 <= (-23)); p_3022->g_10 = safe_sub_func_uint32_t_u_u(p_3022->g_10, 1))
                { /* block id: 14 */
                    int32_t l_21[7][10] = {{0L,9L,0x16E60BE6L,0x5E19F8C5L,0x16E60BE6L,9L,0L,0x749DCB7BL,0x06C8A81DL,0x06C8A81DL},{0L,9L,0x16E60BE6L,0x5E19F8C5L,0x16E60BE6L,9L,0L,0x749DCB7BL,0x06C8A81DL,0x06C8A81DL},{0L,9L,0x16E60BE6L,0x5E19F8C5L,0x16E60BE6L,9L,0L,0x749DCB7BL,0x06C8A81DL,0x06C8A81DL},{0L,9L,0x16E60BE6L,0x5E19F8C5L,0x16E60BE6L,9L,0L,0x749DCB7BL,0x06C8A81DL,0x06C8A81DL},{0L,9L,0x16E60BE6L,0x5E19F8C5L,0x16E60BE6L,9L,0L,0x749DCB7BL,0x06C8A81DL,0x06C8A81DL},{0L,9L,0x16E60BE6L,0x5E19F8C5L,0x16E60BE6L,9L,0L,0x749DCB7BL,0x06C8A81DL,0x06C8A81DL},{0L,9L,0x16E60BE6L,0x5E19F8C5L,0x16E60BE6L,9L,0L,0x749DCB7BL,0x06C8A81DL,0x06C8A81DL}};
                    int64_t l_2383[1][3][2] = {{{0x28E6CCFFFF4A5B1CL,(-1L)},{0x28E6CCFFFF4A5B1CL,(-1L)},{0x28E6CCFFFF4A5B1CL,(-1L)}}};
                    int i, j, k;
                    for (p_3022->g_13[4] = 5; (p_3022->g_13[4] >= 0); p_3022->g_13[4] -= 1)
                    { /* block id: 17 */
                        uint64_t *l_23 = &p_3022->g_24;
                        uint64_t *l_28[7];
                        uint8_t *l_31 = &p_3022->g_32;
                        int32_t l_219 = 0x58FE576DL;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_28[i] = &p_3022->g_29;
                        (1 + 1);
                    }
                }
                for (p_3022->g_939.f0 = 0; p_3022->g_939.f0 < 7; p_3022->g_939.f0 += 1)
                {
                    p_3022->g_401[p_3022->g_939.f0] = &p_3022->g_1663;
                }
                for (p_3022->g_993.f2 = (-2); (p_3022->g_993.f2 >= (-5)); p_3022->g_993.f2 = safe_sub_func_int16_t_s_s(p_3022->g_993.f2, 1))
                { /* block id: 1258 */
                    uint8_t l_2386 = 251UL;
                    int32_t l_2394 = 5L;
                    int32_t l_2399[10][1][9] = {{{(-1L),0x755AF597L,0x6DC8848BL,0x637AB950L,(-1L),(-8L),0x36698263L,0x3ED41E48L,0x36698263L}},{{(-1L),0x755AF597L,0x6DC8848BL,0x637AB950L,(-1L),(-8L),0x36698263L,0x3ED41E48L,0x36698263L}},{{(-1L),0x755AF597L,0x6DC8848BL,0x637AB950L,(-1L),(-8L),0x36698263L,0x3ED41E48L,0x36698263L}},{{(-1L),0x755AF597L,0x6DC8848BL,0x637AB950L,(-1L),(-8L),0x36698263L,0x3ED41E48L,0x36698263L}},{{(-1L),0x755AF597L,0x6DC8848BL,0x637AB950L,(-1L),(-8L),0x36698263L,0x3ED41E48L,0x36698263L}},{{(-1L),0x755AF597L,0x6DC8848BL,0x637AB950L,(-1L),(-8L),0x36698263L,0x3ED41E48L,0x36698263L}},{{(-1L),0x755AF597L,0x6DC8848BL,0x637AB950L,(-1L),(-8L),0x36698263L,0x3ED41E48L,0x36698263L}},{{(-1L),0x755AF597L,0x6DC8848BL,0x637AB950L,(-1L),(-8L),0x36698263L,0x3ED41E48L,0x36698263L}},{{(-1L),0x755AF597L,0x6DC8848BL,0x637AB950L,(-1L),(-8L),0x36698263L,0x3ED41E48L,0x36698263L}},{{(-1L),0x755AF597L,0x6DC8848BL,0x637AB950L,(-1L),(-8L),0x36698263L,0x3ED41E48L,0x36698263L}}};
                    uint16_t l_2401 = 0x981DL;
                    uint16_t *l_2411 = &p_3022->g_557;
                    int32_t *l_2418 = &p_3022->g_13[4];
                    uint64_t *l_2438 = &p_3022->g_24;
                    uint8_t l_2468 = 0x68L;
                    int32_t **l_2511 = (void*)0;
                    int32_t **l_2512 = &p_3022->g_215[0];
                    int i, j, k;
                    l_2400 = (((*p_3022->g_1823) && (((~(0x7515C299F0A38636L && (*p_3022->g_432))) , ((**p_3022->g_1357) > ((p_3022->g_1371[6][0] , ((l_2387 &= l_2386) , (((safe_rshift_func_int16_t_s_s((((*p_3022->g_85) = ((safe_mod_func_uint64_t_u_u((((safe_add_func_int16_t_s_s((l_2394 = ((-1L) >= (*p_3022->g_2306))), (((((safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(((*p_3022->g_1347) = (l_27 != 1UL)), l_218[9][1])), 0x0C914E6DL)) == 0xC4L) , l_218[6][1]) < (*p_3022->g_2306)) || (*p_3022->g_109)))) || l_27) >= l_2386), 18446744073709551608UL)) || l_217[2])) & l_2386), 1)) & 1UL) < 2L))) , (*p_3022->g_1358)))) == l_2399[6][0][3])) || (*p_3022->g_432));
                    if (((l_2401 != ((*p_3022->g_109)++)) <= (safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(0xDD22L, (**p_3022->g_1357))), (l_2399[6][0][3] < (safe_div_func_int16_t_s_s((((*l_2418) = (((*p_3022->g_1347) = ((l_2410 < l_217[0]) == (((((*l_2411) = ((-1L) <= 255UL)) <= (safe_add_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(((0x9EE0L != l_2394) && 0x9553L), l_1975[0])) < 0x7981L), l_2399[8][0][8])) < 1UL), (*p_3022->g_1358)))) && 0xA15B89DEL) | 0x6CF942CEL))) , l_27)) ^ 0UL), l_217[2])))))))
                    { /* block id: 1268 */
                        uint16_t l_2432 = 2UL;
                        (*p_3022->g_1347) |= ((p_3022->g_2219.f0 , (((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_int8_t_s((safe_lshift_func_int8_t_s_s(l_27, ((((((*p_3022->g_109) = 0xFF22L) >= (safe_mod_func_uint8_t_u_u((&p_3022->g_2290 != &p_3022->g_2290), (safe_div_func_uint8_t_u_u(l_1975[0], (((((((safe_mod_func_int64_t_s_s((*p_3022->g_2306), ((((l_2410 < ((((2UL > 0xC82A1002L) , l_27) && 0x57L) & l_27)) || 18446744073709551611UL) ^ (*l_2418)) , (*p_3022->g_2306)))) <= l_2368) == l_27) <= l_217[3]) == 0x0379EE0FBF538B6DL) < (*l_2418)) || (*l_2418))))))) > l_27) , p_3022->g_1010.f0) , l_2432))))), 9)), p_3022->g_955[5][1].f0)) != l_30) >= l_30)) | (*p_3022->g_2011));
                        (*p_3022->g_1347) = (safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((safe_unary_minus_func_int32_t_s(0x2E0E07B1L)) , (((*p_3022->g_1358) &= (l_2438 != (void*)0)) <= (safe_mod_func_int8_t_s_s((((*l_2438) ^= (l_27 <= (safe_mod_func_int32_t_s_s(((*p_3022->g_84) == ((safe_mod_func_int8_t_s_s(l_2410, (safe_rshift_func_int8_t_s_s((((safe_unary_minus_func_uint16_t_u(((safe_mod_func_uint16_t_u_u((*p_3022->g_1823), 0x253EL)) <= 0x21600E4EL))) | (-4L)) , 0x04L), 7)))) , l_2450)), (*l_2418))))) < l_1975[0]), 0x72L)))), l_30)), l_217[0]));
                    }
                    else
                    { /* block id: 1274 */
                        uint32_t l_2453[9][9][3] = {{{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL}},{{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL}},{{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL}},{{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL}},{{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL}},{{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL}},{{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL}},{{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL}},{{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL},{1UL,0x78BEB16DL,4294967289UL}}};
                        int8_t *l_2466 = (void*)0;
                        int8_t *l_2467 = (void*)0;
                        int8_t **l_2482 = &l_2466;
                        int8_t ***l_2481[5];
                        int8_t ****l_2480 = &l_2481[0];
                        int32_t *l_2489[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        uint32_t *l_2508 = &p_3022->g_275;
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                            l_2481[i] = &l_2482;
                        (*p_3022->g_1347) = 0x0307E7F7L;
                        (*l_2418) = (0x6DD2L | (safe_sub_func_int64_t_s_s((((l_2453[4][4][0] , &p_3022->g_311) != (p_3022->g_728[0].f0 , &p_3022->g_1522)) <= l_2368), (((*l_2411) |= ((l_27 , (safe_mod_func_uint64_t_u_u((*p_3022->g_432), ((safe_div_func_uint64_t_u_u(((*l_2438) = (((safe_mod_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((((l_2400 = (safe_sub_func_uint64_t_u_u(((((**p_3022->g_1945) != (*p_3022->g_1823)) && 1L) || (*p_3022->g_2306)), l_2410))) , (**p_3022->g_1945)) <= (*p_3022->g_1358)) < 0x1697BE90FC896857L), l_27)), (**p_3022->g_1945))) < (*l_2418)), (*p_3022->g_1823))) >= (*p_3022->g_432)) != 255UL)), l_2468)) , l_2453[4][4][0])))) <= l_2453[7][4][1])) , (*p_3022->g_432)))));
                        p_3022->g_664[0] ^= ((*p_3022->g_432) & (safe_add_func_uint64_t_u_u((((((((void*)0 == l_2471) , l_27) & (!l_2387)) != ((safe_rshift_func_int16_t_s_u((((((safe_lshift_func_int16_t_s_u(l_2410, 3)) , func_71((safe_add_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u(((18446744073709551613UL >= ((((*l_2480) = (void*)0) != ((((*p_3022->g_109) = (+(safe_rshift_func_uint8_t_u_u((l_2410 & l_2485), (****p_3022->g_1894))))) | 0x4F53L) , (void*)0)) , (*p_3022->g_2306))) < 0x6C76C8D7L), l_27)) != (*p_3022->g_225)) || l_2486[0][7]), l_2453[4][4][0])), l_2487, p_3022->g_976.f0, l_217[2], p_3022)) == l_2488) ^ p_3022->g_948.f0) && l_217[2]), 14)) ^ (*p_3022->g_432))) ^ 0x0962453D6AC72CEAL) > (*l_2418)), (*p_3022->g_432))));
                        l_2394 ^= ((safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((*****p_3022->g_1893), (safe_lshift_func_uint8_t_u_s((****p_3022->g_1894), l_2486[0][0])))), (((*p_3022->g_432) = ((*l_2438) ^= ((-1L) | l_30))) , 6L))) && ((safe_mod_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(l_27, ((safe_div_func_int64_t_s_s((((-6L) >= ((safe_mod_func_int8_t_s_s((((--(*l_2508)) || 0xEDD33388L) , l_27), 1UL)) , l_2486[0][7])) < 0L), 0x75BB275C4978B0F9L)) | (*p_3022->g_2306)))), (**p_3022->g_1357))) && (**p_3022->g_1822)), (**p_3022->g_1822))) != (*l_2418)), 4UL)) <= 0xEF00L));
                    }
                    (*l_2512) = &l_2394;
                }
            }
            for (p_3022->g_1006.f0 = 0; (p_3022->g_1006.f0 == (-11)); p_3022->g_1006.f0--)
            { /* block id: 1293 */
                int32_t *l_2515 = &p_3022->g_664[0];
                (*l_2515) &= l_2368;
            }
            l_2520[1][2] = ((p_3022->g_2516[0] == (p_3022->g_2519 , &p_3022->g_2517[2][4])) ^ 4L);
            (*p_3022->g_1347) = (safe_sub_func_uint16_t_u_u((*p_3022->g_109), (((*p_3022->g_2306) &= l_2410) && ((*l_2535) = ((*p_3022->g_432) = (((*p_3022->g_432) & (safe_mod_func_uint16_t_u_u((((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((*p_3022->g_85) &= ((l_30 & 1L) > ((*p_3022->g_432) != (*p_3022->g_432)))), 5)), l_2520[1][2])) == ((safe_lshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u(l_27, l_2368)) ^ 0x363AD8E3L), l_2368)), 4)) & 0x570DL)) <= 0x7BL), l_2520[0][0]))) , 5UL))))));
        }
    }
    else
    { /* block id: 1303 */
        int8_t l_2573 = (-10L);
        uint16_t l_2587 = 65535UL;
        int32_t l_2588 = (-1L);
        int32_t l_2596 = (-8L);
        int32_t l_2598 = 0x3C6F09ECL;
        int32_t l_2599 = 1L;
        int32_t l_2602 = 0x195AA8F2L;
        int32_t l_2605[5][6][8] = {{{0x7036CAF7L,1L,0x7036CAF7L,(-4L),0x123C09D8L,(-3L),0x63C3F42DL,6L},{0x7036CAF7L,1L,0x7036CAF7L,(-4L),0x123C09D8L,(-3L),0x63C3F42DL,6L},{0x7036CAF7L,1L,0x7036CAF7L,(-4L),0x123C09D8L,(-3L),0x63C3F42DL,6L},{0x7036CAF7L,1L,0x7036CAF7L,(-4L),0x123C09D8L,(-3L),0x63C3F42DL,6L},{0x7036CAF7L,1L,0x7036CAF7L,(-4L),0x123C09D8L,(-3L),0x63C3F42DL,6L},{0x7036CAF7L,1L,0x7036CAF7L,(-4L),0x123C09D8L,(-3L),0x63C3F42DL,6L}},{{0x7036CAF7L,1L,0x7036CAF7L,(-4L),0x123C09D8L,(-3L),0x63C3F42DL,6L},{0x7036CAF7L,1L,0x7036CAF7L,(-4L),0x123C09D8L,(-3L),0x63C3F42DL,6L},{0x7036CAF7L,1L,0x7036CAF7L,(-4L),0x123C09D8L,(-3L),0x63C3F42DL,6L},{0x7036CAF7L,1L,0x7036CAF7L,(-4L),0x123C09D8L,(-3L),0x63C3F42DL,6L},{0x7036CAF7L,1L,0x7036CAF7L,(-4L),0x123C09D8L,(-3L),0x63C3F42DL,6L},{0x7036CAF7L,1L,0x7036CAF7L,(-4L),0x123C09D8L,(-3L),0x63C3F42DL,6L}},{{0x7036CAF7L,1L,0x7036CAF7L,(-4L),0x123C09D8L,(-3L),0x63C3F42DL,6L},{0x7036CAF7L,1L,0x7036CAF7L,(-4L),0x123C09D8L,(-3L),0x63C3F42DL,6L},{0x7036CAF7L,1L,0x7036CAF7L,(-4L),0x123C09D8L,(-3L),0x63C3F42DL,6L},{0x7036CAF7L,1L,0x7036CAF7L,(-4L),0x123C09D8L,(-3L),0x63C3F42DL,6L},{0x7036CAF7L,1L,0x7036CAF7L,(-4L),0x123C09D8L,(-3L),0x63C3F42DL,6L},{0x7036CAF7L,1L,0x7036CAF7L,(-4L),0x123C09D8L,(-3L),0x63C3F42DL,6L}},{{0x7036CAF7L,1L,0x7036CAF7L,(-4L),0x123C09D8L,(-3L),0x63C3F42DL,6L},{0x7036CAF7L,1L,0x7036CAF7L,(-4L),0x123C09D8L,(-3L),0x63C3F42DL,6L},{0x7036CAF7L,1L,0x7036CAF7L,(-4L),0x123C09D8L,(-3L),0x63C3F42DL,6L},{0x7036CAF7L,1L,0x7036CAF7L,(-4L),0x123C09D8L,(-3L),0x63C3F42DL,6L},{0x7036CAF7L,1L,0x7036CAF7L,(-4L),0x123C09D8L,(-3L),0x63C3F42DL,6L},{0x7036CAF7L,1L,0x7036CAF7L,(-4L),0x123C09D8L,(-3L),0x63C3F42DL,6L}},{{0x7036CAF7L,1L,0x7036CAF7L,(-4L),0x123C09D8L,(-3L),0x63C3F42DL,6L},{0x7036CAF7L,1L,0x7036CAF7L,(-4L),0x123C09D8L,(-3L),0x63C3F42DL,6L},{0x7036CAF7L,1L,0x7036CAF7L,(-4L),0x123C09D8L,(-3L),0x63C3F42DL,6L},{0x7036CAF7L,1L,0x7036CAF7L,(-4L),0x123C09D8L,(-3L),0x63C3F42DL,6L},{0x7036CAF7L,1L,0x7036CAF7L,(-4L),0x123C09D8L,(-3L),0x63C3F42DL,6L},{0x7036CAF7L,1L,0x7036CAF7L,(-4L),0x123C09D8L,(-3L),0x63C3F42DL,6L}}};
        union U1 *l_2616[3];
        uint8_t ***l_2620 = &l_2488;
        uint16_t l_2634 = 0x00DFL;
        uint64_t **l_2635 = &p_3022->g_432;
        uint16_t **l_2671 = &p_3022->g_1823;
        int32_t *l_2695 = &l_2602;
        int8_t l_2743 = 0x6CL;
        int32_t **l_2757 = &p_3022->g_1347;
        int32_t ***l_2756 = &l_2757;
        int32_t ****l_2755 = &l_2756;
        int8_t **l_2779 = (void*)0;
        int8_t ***l_2778 = &l_2779;
        int8_t ****l_2777 = &l_2778;
        uint16_t l_2792 = 7UL;
        uint8_t l_2800[7][9][4] = {{{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL}},{{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL}},{{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL}},{{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL}},{{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL}},{{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL}},{{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL},{0x6DL,0x57L,0x48L,6UL}}};
        int16_t **l_2839 = &p_3022->g_1358;
        uint32_t l_2884 = 0UL;
        int32_t l_2888[6] = {7L,7L,7L,7L,7L,7L};
        int64_t *l_2937 = &p_3022->g_2737;
        int64_t *l_2938[7] = {&p_3022->g_2737,&p_3022->g_2737,&p_3022->g_2737,&p_3022->g_2737,&p_3022->g_2737,&p_3022->g_2737,&p_3022->g_2737};
        int32_t l_2953[2][7][7] = {{{0x6C328DCBL,0x3F120175L,5L,0x0AC4626FL,1L,1L,0x0AC4626FL},{0x6C328DCBL,0x3F120175L,5L,0x0AC4626FL,1L,1L,0x0AC4626FL},{0x6C328DCBL,0x3F120175L,5L,0x0AC4626FL,1L,1L,0x0AC4626FL},{0x6C328DCBL,0x3F120175L,5L,0x0AC4626FL,1L,1L,0x0AC4626FL},{0x6C328DCBL,0x3F120175L,5L,0x0AC4626FL,1L,1L,0x0AC4626FL},{0x6C328DCBL,0x3F120175L,5L,0x0AC4626FL,1L,1L,0x0AC4626FL},{0x6C328DCBL,0x3F120175L,5L,0x0AC4626FL,1L,1L,0x0AC4626FL}},{{0x6C328DCBL,0x3F120175L,5L,0x0AC4626FL,1L,1L,0x0AC4626FL},{0x6C328DCBL,0x3F120175L,5L,0x0AC4626FL,1L,1L,0x0AC4626FL},{0x6C328DCBL,0x3F120175L,5L,0x0AC4626FL,1L,1L,0x0AC4626FL},{0x6C328DCBL,0x3F120175L,5L,0x0AC4626FL,1L,1L,0x0AC4626FL},{0x6C328DCBL,0x3F120175L,5L,0x0AC4626FL,1L,1L,0x0AC4626FL},{0x6C328DCBL,0x3F120175L,5L,0x0AC4626FL,1L,1L,0x0AC4626FL},{0x6C328DCBL,0x3F120175L,5L,0x0AC4626FL,1L,1L,0x0AC4626FL}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_2616[i] = (void*)0;
        if (((safe_lshift_func_int16_t_s_u((*p_3022->g_1358), 2)) , (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s((((l_2544 = (-1L)) <= (safe_lshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(0UL, (safe_mod_func_int64_t_s_s((safe_mul_func_int16_t_s_s(((*p_3022->g_1358) = (*p_3022->g_1358)), ((safe_sub_func_int8_t_s_s(0x65L, (safe_mul_func_uint16_t_u_u(l_27, (((safe_mul_func_uint8_t_u_u(1UL, (safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(l_27, ((safe_sub_func_int64_t_s_s((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s(((safe_lshift_func_int16_t_s_u(((l_2573 , &p_3022->g_1730) != &p_3022->g_1730), l_27)) <= 0x1906F7607D01DCABL), 0L)) <= 0x756BE1C22D52E36BL), 4)), (-3L))), l_2573)) ^ (*p_3022->g_432)))), 0x4169E307L)))) || l_2573) || (-1L)))))) > (*p_3022->g_109)))), 0x160F2FE70F53E7AAL)))), l_27))) < (*****p_3022->g_1893)), 6)), 4)), 0))))
        { /* block id: 1306 */
            uint32_t *l_2580 = &p_3022->g_2127;
            uint64_t **l_2581[8];
            int32_t l_2589 = 0x56D455FBL;
            int32_t l_2597 = 0x2F84AE5EL;
            int32_t l_2600 = (-9L);
            int32_t l_2607 = 1L;
            int32_t l_2608 = 1L;
            int32_t l_2611[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
            uint8_t l_2613 = 0xF3L;
            int i;
            for (i = 0; i < 8; i++)
                l_2581[i] = &p_3022->g_432;
            if ((+((safe_div_func_int64_t_s_s((safe_rshift_func_int16_t_s_u((&p_3022->g_568 != &p_3022->g_533[3]), 3)), (*p_3022->g_432))) & ((!((((((safe_sub_func_int8_t_s_s((((*l_2580) = l_2573) & ((void*)0 != l_2581[1])), (l_2588 = ((safe_lshift_func_int16_t_s_u(((*p_3022->g_823) , (l_2573 != (safe_mod_func_int8_t_s_s((((0x3879A045L | l_2544) , l_2586) & l_27), l_2587)))), 15)) & (*p_3022->g_2306))))) == l_2589) , (*p_3022->g_432)) & (*p_3022->g_432)) > 1UL) ^ 255UL)) , 0x88L))))
            { /* block id: 1309 */
                int32_t *l_2590 = &p_3022->g_398.f1;
                int32_t *l_2591 = &p_3022->g_2094;
                int32_t *l_2592 = &l_2588;
                int32_t *l_2593 = (void*)0;
                int32_t *l_2594 = &p_3022->g_3;
                int32_t *l_2595[2][2][10] = {{{&l_2589,&l_2588,&p_3022->g_1663,&l_2589,&l_2588,&l_2589,&p_3022->g_1663,&l_2588,&l_2589,&l_2589},{&l_2589,&l_2588,&p_3022->g_1663,&l_2589,&l_2588,&l_2589,&p_3022->g_1663,&l_2588,&l_2589,&l_2589}},{{&l_2589,&l_2588,&p_3022->g_1663,&l_2589,&l_2588,&l_2589,&p_3022->g_1663,&l_2588,&l_2589,&l_2589},{&l_2589,&l_2588,&p_3022->g_1663,&l_2589,&l_2588,&l_2589,&p_3022->g_1663,&l_2588,&l_2589,&l_2589}}};
                int i, j, k;
                ++l_2613;
                l_2617 = l_2616[2];
            }
            else
            { /* block id: 1312 */
                int32_t *l_2621 = &p_3022->g_1663;
                (*l_2621) |= (safe_mod_func_int8_t_s_s((l_2620 != ((**p_3022->g_1893) = (void*)0)), l_2608));
            }
        }
        else
        { /* block id: 1316 */
            int32_t ***l_2630 = (void*)0;
            int32_t ***l_2631 = &l_2471;
            union U0 *l_2632[6] = {&p_3022->g_1854,&p_3022->g_1854,&p_3022->g_1854,&p_3022->g_1854,&p_3022->g_1854,&p_3022->g_1854};
            int32_t l_2633[3][7][8] = {{{(-1L),0x0141B512L,1L,0x49AEC3C3L,0x1203F2F6L,(-1L),8L,1L},{(-1L),0x0141B512L,1L,0x49AEC3C3L,0x1203F2F6L,(-1L),8L,1L},{(-1L),0x0141B512L,1L,0x49AEC3C3L,0x1203F2F6L,(-1L),8L,1L},{(-1L),0x0141B512L,1L,0x49AEC3C3L,0x1203F2F6L,(-1L),8L,1L},{(-1L),0x0141B512L,1L,0x49AEC3C3L,0x1203F2F6L,(-1L),8L,1L},{(-1L),0x0141B512L,1L,0x49AEC3C3L,0x1203F2F6L,(-1L),8L,1L},{(-1L),0x0141B512L,1L,0x49AEC3C3L,0x1203F2F6L,(-1L),8L,1L}},{{(-1L),0x0141B512L,1L,0x49AEC3C3L,0x1203F2F6L,(-1L),8L,1L},{(-1L),0x0141B512L,1L,0x49AEC3C3L,0x1203F2F6L,(-1L),8L,1L},{(-1L),0x0141B512L,1L,0x49AEC3C3L,0x1203F2F6L,(-1L),8L,1L},{(-1L),0x0141B512L,1L,0x49AEC3C3L,0x1203F2F6L,(-1L),8L,1L},{(-1L),0x0141B512L,1L,0x49AEC3C3L,0x1203F2F6L,(-1L),8L,1L},{(-1L),0x0141B512L,1L,0x49AEC3C3L,0x1203F2F6L,(-1L),8L,1L},{(-1L),0x0141B512L,1L,0x49AEC3C3L,0x1203F2F6L,(-1L),8L,1L}},{{(-1L),0x0141B512L,1L,0x49AEC3C3L,0x1203F2F6L,(-1L),8L,1L},{(-1L),0x0141B512L,1L,0x49AEC3C3L,0x1203F2F6L,(-1L),8L,1L},{(-1L),0x0141B512L,1L,0x49AEC3C3L,0x1203F2F6L,(-1L),8L,1L},{(-1L),0x0141B512L,1L,0x49AEC3C3L,0x1203F2F6L,(-1L),8L,1L},{(-1L),0x0141B512L,1L,0x49AEC3C3L,0x1203F2F6L,(-1L),8L,1L},{(-1L),0x0141B512L,1L,0x49AEC3C3L,0x1203F2F6L,(-1L),8L,1L},{(-1L),0x0141B512L,1L,0x49AEC3C3L,0x1203F2F6L,(-1L),8L,1L}}};
            uint64_t ***l_2636 = &l_2635;
            int i, j, k;
lbl_2651:
            l_2633[0][6][3] = (safe_add_func_int64_t_s_s(l_2605[4][5][6], ((safe_mul_func_uint16_t_u_u((*p_3022->g_1823), ((safe_mul_func_uint16_t_u_u((*p_3022->g_1823), l_2603)) , (((((safe_mod_func_uint32_t_u_u(((0x1BD8BF0AL < ((((void*)0 != &p_3022->g_432) , &p_3022->g_1343) != ((*l_2631) = &p_3022->g_2131))) && l_2573), l_2603)) , l_2632[1]) != (*p_3022->g_534)) && 1L) || l_2633[1][5][4])))) , (*p_3022->g_2306))));
            l_2634 &= l_2605[4][1][6];
            (*l_2636) = l_2635;
            for (p_3022->g_963.f4 = 5; (p_3022->g_963.f4 >= 2); p_3022->g_963.f4 -= 1)
            { /* block id: 1323 */
                int32_t *l_2637 = &l_2544;
                int32_t l_2639 = 1L;
                int32_t l_2640 = 8L;
                int32_t l_2641 = (-1L);
                int32_t l_2642 = 0x456CDB31L;
                int32_t l_2643 = 0L;
                int32_t l_2644 = 5L;
                int32_t l_2647[8][9][3] = {{{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L}},{{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L}},{{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L}},{{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L}},{{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L}},{{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L}},{{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L}},{{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L},{3L,0x426938C1L,0x5EE7A8D9L}}};
                uint8_t l_2648 = 250UL;
                int8_t l_2653 = 0x3BL;
                int i, j, k;
                (*l_2637) &= ((*p_3022->g_1347) = (*p_3022->g_2011));
                if (l_2633[2][4][1])
                    break;
                if ((*p_3022->g_1042))
                    break;
                for (p_3022->g_951.f2 = 3; (p_3022->g_951.f2 >= 0); p_3022->g_951.f2 -= 1)
                { /* block id: 1330 */
                    int32_t *l_2638[2][3][8] = {{{&p_3022->g_3,&p_3022->g_3,&p_3022->g_13[4],&p_3022->g_3,&l_2633[1][5][4],&p_3022->g_13[4],&p_3022->g_13[4],&l_2633[1][5][4]},{&p_3022->g_3,&p_3022->g_3,&p_3022->g_13[4],&p_3022->g_3,&l_2633[1][5][4],&p_3022->g_13[4],&p_3022->g_13[4],&l_2633[1][5][4]},{&p_3022->g_3,&p_3022->g_3,&p_3022->g_13[4],&p_3022->g_3,&l_2633[1][5][4],&p_3022->g_13[4],&p_3022->g_13[4],&l_2633[1][5][4]}},{{&p_3022->g_3,&p_3022->g_3,&p_3022->g_13[4],&p_3022->g_3,&l_2633[1][5][4],&p_3022->g_13[4],&p_3022->g_13[4],&l_2633[1][5][4]},{&p_3022->g_3,&p_3022->g_3,&p_3022->g_13[4],&p_3022->g_3,&l_2633[1][5][4],&p_3022->g_13[4],&p_3022->g_13[4],&l_2633[1][5][4]},{&p_3022->g_3,&p_3022->g_3,&p_3022->g_13[4],&p_3022->g_3,&l_2633[1][5][4],&p_3022->g_13[4],&p_3022->g_13[4],&l_2633[1][5][4]}}};
                    int64_t l_2645[1];
                    int8_t l_2646[6];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_2645[i] = 1L;
                    for (i = 0; i < 6; i++)
                        l_2646[i] = 0x33L;
                    --l_2648;
                    (**p_3022->g_2518) ^= (((**p_3022->g_84) = ((*l_2637) || 0x43DAF714L)) < (*l_2637));
                    for (p_3022->g_961.f2 = 0; (p_3022->g_961.f2 <= 3); p_3022->g_961.f2 += 1)
                    { /* block id: 1336 */
                        uint32_t l_2652 = 3UL;
                        if (l_2587)
                            goto lbl_2651;
                        if (l_2652)
                            continue;
                        if (l_2653)
                            break;
                        (*l_2637) |= l_2652;
                    }
                }
            }
        }
lbl_2677:
        l_2544 ^= (((*p_3022->g_2306) ^ (safe_mod_func_int64_t_s_s((safe_div_func_int16_t_s_s(((l_2634 <= (safe_mul_func_int8_t_s_s(((!(((safe_div_func_int16_t_s_s(((p_3022->g_2662 , (((safe_rshift_func_int16_t_s_u((-5L), ((*p_3022->g_1823) = (*p_3022->g_109)))) , p_3022->g_29) , ((l_2612[2][1] <= ((safe_sub_func_uint64_t_u_u(1UL, (((**p_3022->g_1945) = ((((((((((((safe_mul_func_uint16_t_u_u(((*p_3022->g_1823) = (safe_div_func_int64_t_s_s((*p_3022->g_2306), l_2587))), l_2596)) >= (*p_3022->g_2306)) || l_2603) , l_2671) == &p_3022->g_109) || (*p_3022->g_1823)) , (-1L)) <= l_2672) ^ p_3022->g_2673) > (**p_3022->g_1945)) > 0L) , 0x6A62L)) & 0x9142L))) == 0x7BF7202682F0C332L)) >= l_2587))) || l_2634), (-1L))) || l_2612[4][2]) != 0xB71BL)) == l_2612[2][1]), l_2606[1]))) & (*p_3022->g_2306)), l_2609)), (*p_3022->g_432)))) & l_2674[3]);
        for (p_3022->g_968.f0 = 3; (p_3022->g_968.f0 == (-6)); p_3022->g_968.f0 = safe_sub_func_int8_t_s_s(p_3022->g_968.f0, 8))
        { /* block id: 1351 */
            uint8_t *l_2685 = &p_3022->g_115;
            int32_t l_2690 = 1L;
            uint16_t *l_2691 = &p_3022->g_411;
            uint64_t l_2696 = 0x3CE0A833F4F90114L;
            int32_t *l_2719 = &p_3022->g_990.f0;
            int8_t l_2742[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
            int32_t l_2747[1];
            int32_t l_2749[8];
            int i;
            for (i = 0; i < 1; i++)
                l_2747[i] = 0x32915FDEL;
            for (i = 0; i < 8; i++)
                l_2749[i] = 0x26471DF2L;
            if (p_3022->g_110)
                goto lbl_2677;
            (*l_2695) = ((safe_mod_func_int64_t_s_s(((safe_lshift_func_int8_t_s_u(l_2609, 2)) && ((p_3022->g_2682 , ((((safe_mul_func_uint8_t_u_u((l_2573 != ((l_2588 = ((**l_2635) = 18446744073709551615UL)) && (((**p_3022->g_84) = l_2603) < ((*l_2685)--)))), (((**p_3022->g_1822) = 0x2C2BL) > ((**p_3022->g_1945) |= (safe_div_func_uint64_t_u_u(((l_2690 , (++(*l_2691))) < ((p_3022->g_2694 , l_2695) == &p_3022->g_664[1])), (*p_3022->g_2306))))))) > (*l_2695)) && (*p_3022->g_2306)) ^ 0x1AB4E8DFL)) || 0x51L)), l_2612[4][2])) , l_2696);
            if (l_2696)
            { /* block id: 1361 */
                int32_t **l_2698 = &p_3022->g_215[3];
                if ((*l_2695))
                    break;
                (*p_3022->g_2518) = ((*l_2698) = (p_3022->g_2697[2][3][4] , (*p_3022->g_1346)));
                if (l_2672)
                    continue;
                for (p_3022->g_965.f2 = 0; (p_3022->g_965.f2 >= 1); ++p_3022->g_965.f2)
                { /* block id: 1368 */
                    int16_t l_2705[7][9] = {{(-7L),0x70B3L,0x343EL,(-4L),0L,0x7E07L,0x14DAL,0x343EL,0x4414L},{(-7L),0x70B3L,0x343EL,(-4L),0L,0x7E07L,0x14DAL,0x343EL,0x4414L},{(-7L),0x70B3L,0x343EL,(-4L),0L,0x7E07L,0x14DAL,0x343EL,0x4414L},{(-7L),0x70B3L,0x343EL,(-4L),0L,0x7E07L,0x14DAL,0x343EL,0x4414L},{(-7L),0x70B3L,0x343EL,(-4L),0L,0x7E07L,0x14DAL,0x343EL,0x4414L},{(-7L),0x70B3L,0x343EL,(-4L),0L,0x7E07L,0x14DAL,0x343EL,0x4414L},{(-7L),0x70B3L,0x343EL,(-4L),0L,0x7E07L,0x14DAL,0x343EL,0x4414L}};
                    int i, j;
                    (**p_3022->g_2518) = (((((&p_3022->g_432 == &p_3022->g_432) >= l_2696) , ((safe_rshift_func_int8_t_s_u(((l_2705[2][6] , (p_3022->g_2706 , &p_3022->g_1893)) == &p_3022->g_1893), 3)) != ((*p_3022->g_432) != (safe_mod_func_int64_t_s_s((*p_3022->g_2306), (*p_3022->g_2306)))))) < p_3022->g_2709) , 0x21C62C22L);
                    return p_3022->g_2710;
                }
            }
            else
            { /* block id: 1372 */
                uint16_t l_2713[10] = {65528UL,65528UL,65528UL,65528UL,65528UL,65528UL,65528UL,65528UL,65528UL,65528UL};
                int32_t l_2725[10][9] = {{0x57D460FBL,0x2F90804CL,0x2F90804CL,0x57D460FBL,0x57D460FBL,0x2F90804CL,0x2F90804CL,0x57D460FBL,0x57D460FBL},{0x57D460FBL,0x2F90804CL,0x2F90804CL,0x57D460FBL,0x57D460FBL,0x2F90804CL,0x2F90804CL,0x57D460FBL,0x57D460FBL},{0x57D460FBL,0x2F90804CL,0x2F90804CL,0x57D460FBL,0x57D460FBL,0x2F90804CL,0x2F90804CL,0x57D460FBL,0x57D460FBL},{0x57D460FBL,0x2F90804CL,0x2F90804CL,0x57D460FBL,0x57D460FBL,0x2F90804CL,0x2F90804CL,0x57D460FBL,0x57D460FBL},{0x57D460FBL,0x2F90804CL,0x2F90804CL,0x57D460FBL,0x57D460FBL,0x2F90804CL,0x2F90804CL,0x57D460FBL,0x57D460FBL},{0x57D460FBL,0x2F90804CL,0x2F90804CL,0x57D460FBL,0x57D460FBL,0x2F90804CL,0x2F90804CL,0x57D460FBL,0x57D460FBL},{0x57D460FBL,0x2F90804CL,0x2F90804CL,0x57D460FBL,0x57D460FBL,0x2F90804CL,0x2F90804CL,0x57D460FBL,0x57D460FBL},{0x57D460FBL,0x2F90804CL,0x2F90804CL,0x57D460FBL,0x57D460FBL,0x2F90804CL,0x2F90804CL,0x57D460FBL,0x57D460FBL},{0x57D460FBL,0x2F90804CL,0x2F90804CL,0x57D460FBL,0x57D460FBL,0x2F90804CL,0x2F90804CL,0x57D460FBL,0x57D460FBL},{0x57D460FBL,0x2F90804CL,0x2F90804CL,0x57D460FBL,0x57D460FBL,0x2F90804CL,0x2F90804CL,0x57D460FBL,0x57D460FBL}};
                int32_t ****l_2728 = (void*)0;
                uint8_t l_2752[1];
                int i, j;
                for (i = 0; i < 1; i++)
                    l_2752[i] = 0UL;
                for (p_3022->g_943.f4 = 0; (p_3022->g_943.f4 <= (-6)); p_3022->g_943.f4 = safe_sub_func_uint16_t_u_u(p_3022->g_943.f4, 6))
                { /* block id: 1375 */
                    int32_t **l_2718 = &p_3022->g_2131;
                    int32_t **l_2720[6];
                    int32_t l_2733 = 0x7C4F7F8DL;
                    int64_t *l_2736 = &p_3022->g_2737;
                    int32_t l_2744 = 0L;
                    int8_t l_2745 = (-1L);
                    int32_t l_2746 = 0x460301D6L;
                    int32_t l_2748 = 0x3FB8FC22L;
                    int32_t l_2750[8];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_2720[i] = &l_2719;
                    for (i = 0; i < 8; i++)
                        l_2750[i] = 0x74A2C1C0L;
                    l_2690 |= l_2713[0];
                    for (p_3022->g_32 = (-25); (p_3022->g_32 != 15); p_3022->g_32 = safe_add_func_uint16_t_u_u(p_3022->g_32, 9))
                    { /* block id: 1379 */
                        (**p_3022->g_2518) = l_2713[8];
                    }
                    (*p_3022->g_2518) = (*p_3022->g_2518);
                    if (((safe_sub_func_int64_t_s_s((((*l_2718) = &p_3022->g_96) != (l_2719 = l_2719)), (safe_add_func_uint32_t_u_u((safe_add_func_uint64_t_u_u(((l_2690 && (((--(**l_2488)) , &p_3022->g_2517[2][4]) != ((**p_3022->g_1342) , l_2728))) <= l_2690), (safe_lshift_func_int16_t_s_u((safe_add_func_uint64_t_u_u((l_2733 | ((((*l_2736) = (safe_div_func_uint16_t_u_u((l_2696 , (*p_3022->g_109)), (*p_3022->g_109)))) , (-10L)) ^ (*l_2695))), (*l_2695))), 9)))), (*l_2695))))) , l_2609))
                    { /* block id: 1387 */
                        return (*p_3022->g_102);
                    }
                    else
                    { /* block id: 1389 */
                        int32_t *l_2738 = &p_3022->g_13[5];
                        int32_t *l_2739 = &p_3022->g_398.f1;
                        int32_t l_2740 = 0x74CBF58AL;
                        int32_t *l_2741[7];
                        int32_t l_2751 = 6L;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_2741[i] = &l_2604;
                        l_2733 = ((*l_2695) = 0x72A664BDL);
                        if (l_2696)
                            break;
                        l_2752[0]--;
                        (*p_3022->g_1347) = l_2690;
                    }
                }
                (*p_3022->g_2518) = (*p_3022->g_2518);
                if (l_2690)
                    continue;
            }
            l_2747[0] &= (+0x19AA0B78L);
        }
        if ((*l_2695))
        { /* block id: 1402 */
            int32_t l_2765 = (-3L);
            (*l_2695) = ((l_2755 != (void*)0) ^ (((((safe_sub_func_uint8_t_u_u((0xADD750F7L >= (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((**p_3022->g_1822), 10)), 1UL))), 0x78L)) < (l_2765 &= (l_2695 == l_2764))) <= ((0x36BA243FL ^ 4UL) , l_2612[2][1])) , 255UL) | l_2606[0]));
            (*p_3022->g_2518) = (*p_3022->g_2518);
        }
        else
        { /* block id: 1406 */
            uint8_t l_2768 = 255UL;
            int32_t *l_2780 = &l_2612[1][0];
            int16_t *l_2803 = &l_2674[0];
            union U0 ***l_2811 = &p_3022->g_568;
            int64_t l_2819 = 8L;
            int8_t l_2821 = 0x03L;
            int16_t l_2887 = 1L;
            uint32_t l_2917[7] = {4294967295UL,0x18C26341L,4294967295UL,4294967295UL,0x18C26341L,4294967295UL,4294967295UL};
            int32_t l_2947 = 8L;
            int32_t l_2949 = 0x7EB742BBL;
            int32_t l_2950 = 0x39910ED8L;
            int32_t l_2951 = 0x47905769L;
            int32_t l_2954 = 0x6438B187L;
            int32_t l_2955 = 0x141B3920L;
            int32_t l_2957 = 0L;
            int8_t ***l_2969[1][7][4] = {{{&l_2779,&l_2779,&l_2779,&l_2779},{&l_2779,&l_2779,&l_2779,&l_2779},{&l_2779,&l_2779,&l_2779,&l_2779},{&l_2779,&l_2779,&l_2779,&l_2779},{&l_2779,&l_2779,&l_2779,&l_2779},{&l_2779,&l_2779,&l_2779,&l_2779},{&l_2779,&l_2779,&l_2779,&l_2779}}};
            int i, j, k;
            for (p_3022->g_557 = 0; (p_3022->g_557 <= 53); p_3022->g_557++)
            { /* block id: 1409 */
                uint8_t l_2769 = 0x15L;
                int32_t l_2770 = 0x6C629E31L;
                if (l_2768)
                    break;
                if ((*l_2695))
                    break;
                l_2770 ^= l_2769;
                for (p_3022->g_1003.f2 = 15; (p_3022->g_1003.f2 < 8); --p_3022->g_1003.f2)
                { /* block id: 1415 */
                    return (**p_3022->g_1705);
                }
            }
            if (p_3022->g_110)
                goto lbl_2781;
            (****l_2755) = (p_3022->g_2773[2] != (l_2603 , l_2777));
lbl_2781:
            (***l_2755) = l_2780;
        }
    }
    if (((*p_3022->g_432) && (l_2612[2][3] <= (((*p_3022->g_432) = (safe_mul_func_int16_t_s_s(((((*p_3022->g_109) = (safe_mod_func_int16_t_s_s((0x270E31A90164863EL == 0x0A02DFAAAA3683F9L), (safe_lshift_func_int16_t_s_s((-8L), ((**p_3022->g_2843) = l_2886)))))) , (safe_add_func_int8_t_s_s((-1L), ((((safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((l_2674[3] || ((l_2604 >= l_2612[5][1]) < l_2820)) != (*p_3022->g_2306)), l_2846)), 1L)) == l_2544) || (*p_3022->g_432)) || l_2674[3])))) ^ l_2610), 0x4FDDL))) > l_2606[2]))))
    { /* block id: 1509 */
        int32_t l_3004[7][7] = {{1L,0x327F537AL,0x327F537AL,1L,0x55A585C9L,0x3457484BL,0x3457484BL},{1L,0x327F537AL,0x327F537AL,1L,0x55A585C9L,0x3457484BL,0x3457484BL},{1L,0x327F537AL,0x327F537AL,1L,0x55A585C9L,0x3457484BL,0x3457484BL},{1L,0x327F537AL,0x327F537AL,1L,0x55A585C9L,0x3457484BL,0x3457484BL},{1L,0x327F537AL,0x327F537AL,1L,0x55A585C9L,0x3457484BL,0x3457484BL},{1L,0x327F537AL,0x327F537AL,1L,0x55A585C9L,0x3457484BL,0x3457484BL},{1L,0x327F537AL,0x327F537AL,1L,0x55A585C9L,0x3457484BL,0x3457484BL}};
        int32_t l_3005 = 2L;
        int16_t l_3006 = (-2L);
        int32_t *l_3007 = &l_2604;
        int i, j;
        (*p_3022->g_1347) = (safe_add_func_uint8_t_u_u((((~(*p_3022->g_432)) , p_3022->g_998.f0) , (safe_rshift_func_uint16_t_u_u((**p_3022->g_1822), 14))), (safe_sub_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(0xC47FL, (1L == ((**p_3022->g_84)--)))) && (l_3005 ^= ((safe_div_func_int8_t_s_s(((0x1B39L >= (safe_mod_func_uint32_t_u_u((l_2820 = 4294967295UL), (1UL | (safe_add_func_int64_t_s_s((0xF2B7L <= l_3004[0][0]), 0x410FA0AC6EBB59CAL)))))) || l_2610), 255UL)) , (**p_3022->g_1945)))), l_3006))));
        (*l_3007) ^= (*p_3022->g_167);
    }
    else
    { /* block id: 1515 */
        uint8_t *l_3012 = &p_3022->g_2970;
        int32_t *l_3014 = &p_3022->g_2858.f1;
        int32_t *l_3015 = &p_3022->g_7;
        int32_t *l_3019[10][9][2] = {{{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609}},{{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609}},{{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609}},{{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609}},{{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609}},{{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609}},{{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609}},{{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609}},{{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609}},{{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609},{&l_2609,&l_2609}}};
        int i, j, k;
        (*l_3015) ^= (((((*p_3022->g_2923)++) , 4294967295UL) , (0x61L && (((*l_3012) = (--(**l_2488))) <= (-10L)))) > l_2612[5][1]);
        for (p_3022->g_951.f2 = 2; (p_3022->g_951.f2 >= 0); p_3022->g_951.f2 -= 1)
        { /* block id: 1522 */
            union U1 *l_3016 = (void*)0;
            l_3016 = l_3016;
            return p_3022->g_3017;
        }
        l_2820 |= (*l_3015);
    }
    l_3021 |= 0L;
    return (*p_3022->g_102);
}


/* ------------------------------------------ */
/* 
 * reads : p_3022->g_1009.f2 p_3022->g_52.f1 p_3022->g_2355 p_3022->g_432 p_3022->g_29 p_3022->g_24 p_3022->g_1358 p_3022->g_334 p_3022->g_1894 p_3022->g_1369 p_3022->g_84 p_3022->g_85 p_3022->g_32 p_3022->g_1346 p_3022->g_1347 p_3022->g_945.f2
 * writes: p_3022->g_1009.f2 p_3022->g_215 p_3022->g_29 p_3022->g_24 p_3022->g_334 p_3022->g_32 p_3022->g_1657.f0 p_3022->g_110 p_3022->g_977.f2 p_3022->g_52.f1 p_3022->g_945.f2
 */
int8_t  func_14(uint8_t  p_15, int32_t  p_16, struct S2 * p_3022)
{ /* block id: 1217 */
    int32_t *l_2347 = &p_3022->g_52.f1;
    int32_t l_2363 = 4L;
    for (p_3022->g_1009.f2 = 0; (p_3022->g_1009.f2 <= 6); p_3022->g_1009.f2 += 1)
    { /* block id: 1220 */
        int32_t **l_2348 = &p_3022->g_215[0];
        uint32_t **l_2356 = &p_3022->g_823;
        int32_t l_2359 = 0x485C97A0L;
        uint16_t l_2360 = 0UL;
        int32_t *l_2361 = &p_3022->g_2221.f1;
        int32_t *l_2362[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        (*l_2348) = l_2347;
        l_2363 &= (p_16 ^ ((safe_lshift_func_uint16_t_u_s(((((safe_rshift_func_uint8_t_u_s(255UL, 5)) || ((*l_2347) | (safe_sub_func_int64_t_s_s(p_15, ((*p_3022->g_432) ^= (&p_3022->g_823 != (p_3022->g_2355 , l_2356))))))) , (((safe_mul_func_uint8_t_u_u(0xE8L, ((****p_3022->g_1894) &= (((((*p_3022->g_1358) |= p_15) == (*l_2347)) , l_2359) < l_2359)))) < l_2360) <= (*p_3022->g_432))) <= (*l_2347)), 4)) > 0x4BL));
        for (p_3022->g_1657.f0 = 3; (p_3022->g_1657.f0 >= 0); p_3022->g_1657.f0 -= 1)
        { /* block id: 1228 */
            int32_t *l_2367 = &l_2363;
            for (p_3022->g_110 = 0; (p_3022->g_110 <= 3); p_3022->g_110 += 1)
            { /* block id: 1231 */
                uint8_t l_2364[4] = {250UL,250UL,250UL,250UL};
                int i;
                l_2364[1]++;
                for (p_3022->g_977.f2 = 6; (p_3022->g_977.f2 >= 0); p_3022->g_977.f2 -= 1)
                { /* block id: 1235 */
                    (*l_2347) |= 9L;
                    (*l_2348) = (*p_3022->g_1346);
                }
            }
            (*l_2348) = l_2367;
        }
        for (p_3022->g_945.f2 = 0; (p_3022->g_945.f2 <= 3); p_3022->g_945.f2 += 1)
        { /* block id: 1244 */
            (*l_2348) = (*p_3022->g_1346);
            (*l_2347) = (p_16 | (*p_3022->g_432));
        }
    }
    return (*l_2347);
}


/* ------------------------------------------ */
/* 
 * reads : p_3022->g_1347 p_3022->g_52.f1 p_3022->g_109 p_3022->g_432 p_3022->g_29 p_3022->g_24 p_3022->g_1358 p_3022->g_84 p_3022->g_85 p_3022->g_32 p_3022->g_2011 p_3022->g_2016 p_3022->g_1823 p_3022->g_110 p_3022->g_1371 p_3022->g_937.f0 p_3022->g_167 p_3022->g_1346 p_3022->g_1325 p_3022->g_2064 p_3022->g_1893 p_3022->g_1894 p_3022->g_1369 p_3022->g_968.f0 p_3022->g_6 p_3022->g_2094 p_3022->g_952.f0 p_3022->g_1357 p_3022->g_334 p_3022->g_392 p_3022->g_608 p_3022->g_115 p_3022->g_2127 p_3022->g_139 p_3022->g_1822 p_3022->g_1945 p_3022->g_112 p_3022->g_959.f0 p_3022->g_1343 p_3022->g_1203.f0 p_3022->g_411 p_3022->g_100.f0 p_3022->g_10 p_3022->g_13 p_3022->g_457 p_3022->g_462 p_3022->g_2216 p_3022->g_2219 p_3022->g_1270 p_3022->g_2221 p_3022->g_2253 p_3022->g_1705 p_3022->g_102 p_3022->g_2261 p_3022->g_960.f0 p_3022->g_2317 p_3022->g_1342 p_3022->g_991.f4
 * writes: p_3022->g_991.f4 p_3022->g_52.f1 p_3022->g_973.f4 p_3022->g_110 p_3022->g_334 p_3022->g_985.f2 p_3022->g_32 p_3022->g_167 p_3022->g_608 p_3022->g_1371 p_3022->g_6 p_3022->g_215 p_3022->g_458 p_3022->g_968.f0 p_3022->g_453 p_3022->g_1893 p_3022->g_1006.f2 p_3022->g_1270 p_3022->g_2016 p_3022->g_115 p_3022->g_139 p_3022->g_2131 p_3022->g_2127 p_3022->g_112 p_3022->g_432 p_3022->g_24 p_3022->g_275 p_3022->g_974.f4 p_3022->g_948.f0 p_3022->g_966.f2 p_3022->g_2306 p_3022->g_1251 p_3022->g_972.f4 p_3022->g_29
 */
uint8_t  func_17(int32_t  p_18, struct S2 * p_3022)
{ /* block id: 1046 */
    int8_t *l_1980 = &p_3022->g_1270[2][6][4];
    union U1 ****l_2010 = (void*)0;
    int32_t *l_2013[2];
    int32_t l_2035 = 0x1888C10BL;
    int32_t l_2038 = 0x46577893L;
    int32_t l_2040 = 1L;
    int32_t l_2041 = 0x3207C9A9L;
    int32_t l_2043[7] = {(-4L),0x32C00170L,(-4L),(-4L),0x32C00170L,(-4L),(-4L)};
    int16_t l_2046 = 1L;
    uint32_t *l_2142 = &p_3022->g_2127;
    int32_t *l_2149 = &l_2038;
    int16_t ***l_2164[6][10][4] = {{{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945}},{{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945}},{{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945}},{{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945}},{{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945}},{{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945},{&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945,&p_3022->g_1945}}};
    int32_t **l_2167 = &p_3022->g_215[0];
    int32_t ***l_2166[3];
    int32_t ****l_2165 = &l_2166[1];
    int64_t *l_2168[2];
    int32_t **l_2170 = &p_3022->g_2131;
    int32_t ***l_2169 = &l_2170;
    uint16_t l_2185 = 0xCE7FL;
    int16_t l_2189 = 3L;
    int8_t l_2190 = (-1L);
    int8_t **l_2204 = (void*)0;
    int8_t **l_2205[1][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    uint8_t l_2328 = 0x0BL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_2013[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_2166[i] = &l_2167;
    for (i = 0; i < 2; i++)
        l_2168[i] = &p_3022->g_112;
lbl_2171:
    for (p_3022->g_991.f4 = 0; (p_3022->g_991.f4 == 28); p_3022->g_991.f4 = safe_add_func_uint32_t_u_u(p_3022->g_991.f4, 3))
    { /* block id: 1049 */
        int64_t l_1978 = (-6L);
        int8_t *l_1981 = &p_3022->g_608;
        int32_t *l_2022[9][3][2] = {{{&p_3022->g_985.f2,&p_3022->g_985.f2},{&p_3022->g_985.f2,&p_3022->g_985.f2},{&p_3022->g_985.f2,&p_3022->g_985.f2}},{{&p_3022->g_985.f2,&p_3022->g_985.f2},{&p_3022->g_985.f2,&p_3022->g_985.f2},{&p_3022->g_985.f2,&p_3022->g_985.f2}},{{&p_3022->g_985.f2,&p_3022->g_985.f2},{&p_3022->g_985.f2,&p_3022->g_985.f2},{&p_3022->g_985.f2,&p_3022->g_985.f2}},{{&p_3022->g_985.f2,&p_3022->g_985.f2},{&p_3022->g_985.f2,&p_3022->g_985.f2},{&p_3022->g_985.f2,&p_3022->g_985.f2}},{{&p_3022->g_985.f2,&p_3022->g_985.f2},{&p_3022->g_985.f2,&p_3022->g_985.f2},{&p_3022->g_985.f2,&p_3022->g_985.f2}},{{&p_3022->g_985.f2,&p_3022->g_985.f2},{&p_3022->g_985.f2,&p_3022->g_985.f2},{&p_3022->g_985.f2,&p_3022->g_985.f2}},{{&p_3022->g_985.f2,&p_3022->g_985.f2},{&p_3022->g_985.f2,&p_3022->g_985.f2},{&p_3022->g_985.f2,&p_3022->g_985.f2}},{{&p_3022->g_985.f2,&p_3022->g_985.f2},{&p_3022->g_985.f2,&p_3022->g_985.f2},{&p_3022->g_985.f2,&p_3022->g_985.f2}},{{&p_3022->g_985.f2,&p_3022->g_985.f2},{&p_3022->g_985.f2,&p_3022->g_985.f2},{&p_3022->g_985.f2,&p_3022->g_985.f2}}};
        int32_t l_2036 = 0x1D3B1DF0L;
        int32_t l_2045[6] = {0x2C88E4FCL,0x2C88E4FCL,0x2C88E4FCL,0x2C88E4FCL,0x2C88E4FCL,0x2C88E4FCL};
        int16_t ***l_2054 = &p_3022->g_1945;
        uint8_t **l_2065 = &p_3022->g_85;
        int i, j, k;
        if (l_1978)
        { /* block id: 1050 */
            int8_t *l_1979 = &p_3022->g_1270[2][5][4];
            (*p_3022->g_1347) &= ((l_1980 = l_1979) != l_1981);
            (*p_3022->g_1347) = p_18;
        }
        else
        { /* block id: 1054 */
            int32_t l_1982 = 0x45C354C0L;
            uint32_t *l_1996 = &p_3022->g_1371[4][1];
            uint8_t ****l_2027 = &p_3022->g_1369[3];
            int32_t l_2042[3];
            uint16_t l_2047[7] = {0xF88CL,65531UL,0xF88CL,0xF88CL,65531UL,0xF88CL,0xF88CL};
            int32_t l_2095[3][6][10] = {{{0x28280810L,(-1L),9L,0x44CB1824L,0L,0x51AD8F34L,1L,0x1E501E45L,0x44CB1824L,0x5B7DE593L},{0x28280810L,(-1L),9L,0x44CB1824L,0L,0x51AD8F34L,1L,0x1E501E45L,0x44CB1824L,0x5B7DE593L},{0x28280810L,(-1L),9L,0x44CB1824L,0L,0x51AD8F34L,1L,0x1E501E45L,0x44CB1824L,0x5B7DE593L},{0x28280810L,(-1L),9L,0x44CB1824L,0L,0x51AD8F34L,1L,0x1E501E45L,0x44CB1824L,0x5B7DE593L},{0x28280810L,(-1L),9L,0x44CB1824L,0L,0x51AD8F34L,1L,0x1E501E45L,0x44CB1824L,0x5B7DE593L},{0x28280810L,(-1L),9L,0x44CB1824L,0L,0x51AD8F34L,1L,0x1E501E45L,0x44CB1824L,0x5B7DE593L}},{{0x28280810L,(-1L),9L,0x44CB1824L,0L,0x51AD8F34L,1L,0x1E501E45L,0x44CB1824L,0x5B7DE593L},{0x28280810L,(-1L),9L,0x44CB1824L,0L,0x51AD8F34L,1L,0x1E501E45L,0x44CB1824L,0x5B7DE593L},{0x28280810L,(-1L),9L,0x44CB1824L,0L,0x51AD8F34L,1L,0x1E501E45L,0x44CB1824L,0x5B7DE593L},{0x28280810L,(-1L),9L,0x44CB1824L,0L,0x51AD8F34L,1L,0x1E501E45L,0x44CB1824L,0x5B7DE593L},{0x28280810L,(-1L),9L,0x44CB1824L,0L,0x51AD8F34L,1L,0x1E501E45L,0x44CB1824L,0x5B7DE593L},{0x28280810L,(-1L),9L,0x44CB1824L,0L,0x51AD8F34L,1L,0x1E501E45L,0x44CB1824L,0x5B7DE593L}},{{0x28280810L,(-1L),9L,0x44CB1824L,0L,0x51AD8F34L,1L,0x1E501E45L,0x44CB1824L,0x5B7DE593L},{0x28280810L,(-1L),9L,0x44CB1824L,0L,0x51AD8F34L,1L,0x1E501E45L,0x44CB1824L,0x5B7DE593L},{0x28280810L,(-1L),9L,0x44CB1824L,0L,0x51AD8F34L,1L,0x1E501E45L,0x44CB1824L,0x5B7DE593L},{0x28280810L,(-1L),9L,0x44CB1824L,0L,0x51AD8F34L,1L,0x1E501E45L,0x44CB1824L,0x5B7DE593L},{0x28280810L,(-1L),9L,0x44CB1824L,0L,0x51AD8F34L,1L,0x1E501E45L,0x44CB1824L,0x5B7DE593L},{0x28280810L,(-1L),9L,0x44CB1824L,0L,0x51AD8F34L,1L,0x1E501E45L,0x44CB1824L,0x5B7DE593L}}};
            int8_t *l_2117 = &p_3022->g_2016;
            uint8_t *l_2124 = &p_3022->g_115;
            int8_t *l_2128 = &p_3022->g_139;
            int32_t *l_2130 = &p_3022->g_1854.f0;
            int32_t **l_2129[8][7] = {{&l_2130,(void*)0,&l_2130,&l_2130,&l_2130,(void*)0,&l_2130},{&l_2130,(void*)0,&l_2130,&l_2130,&l_2130,(void*)0,&l_2130},{&l_2130,(void*)0,&l_2130,&l_2130,&l_2130,(void*)0,&l_2130},{&l_2130,(void*)0,&l_2130,&l_2130,&l_2130,(void*)0,&l_2130},{&l_2130,(void*)0,&l_2130,&l_2130,&l_2130,(void*)0,&l_2130},{&l_2130,(void*)0,&l_2130,&l_2130,&l_2130,(void*)0,&l_2130},{&l_2130,(void*)0,&l_2130,&l_2130,&l_2130,(void*)0,&l_2130},{&l_2130,(void*)0,&l_2130,&l_2130,&l_2130,(void*)0,&l_2130}};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_2042[i] = 0x2244B0E3L;
            if (l_1982)
            { /* block id: 1055 */
                uint32_t *l_1995[8][6] = {{&p_3022->g_1371[0][1],&p_3022->g_1371[0][0],&p_3022->g_1371[0][0],&p_3022->g_1371[0][1],(void*)0,(void*)0},{&p_3022->g_1371[0][1],&p_3022->g_1371[0][0],&p_3022->g_1371[0][0],&p_3022->g_1371[0][1],(void*)0,(void*)0},{&p_3022->g_1371[0][1],&p_3022->g_1371[0][0],&p_3022->g_1371[0][0],&p_3022->g_1371[0][1],(void*)0,(void*)0},{&p_3022->g_1371[0][1],&p_3022->g_1371[0][0],&p_3022->g_1371[0][0],&p_3022->g_1371[0][1],(void*)0,(void*)0},{&p_3022->g_1371[0][1],&p_3022->g_1371[0][0],&p_3022->g_1371[0][0],&p_3022->g_1371[0][1],(void*)0,(void*)0},{&p_3022->g_1371[0][1],&p_3022->g_1371[0][0],&p_3022->g_1371[0][0],&p_3022->g_1371[0][1],(void*)0,(void*)0},{&p_3022->g_1371[0][1],&p_3022->g_1371[0][0],&p_3022->g_1371[0][0],&p_3022->g_1371[0][1],(void*)0,(void*)0},{&p_3022->g_1371[0][1],&p_3022->g_1371[0][0],&p_3022->g_1371[0][0],&p_3022->g_1371[0][1],(void*)0,(void*)0}};
                int32_t **l_2008 = &p_3022->g_215[1];
                int32_t ***l_2007 = &l_2008;
                int32_t ****l_2006 = &l_2007;
                int32_t l_2037 = 0x447DD185L;
                int32_t l_2039 = 0L;
                int32_t l_2044[2];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_2044[i] = 0x1A5B6FF2L;
                for (p_3022->g_973.f4 = 0; (p_3022->g_973.f4 != 23); p_3022->g_973.f4++)
                { /* block id: 1058 */
                    uint32_t l_2003[5][6] = {{0xE00B4B05L,0x2800A8E2L,0xA04321E8L,0x2800A8E2L,0xE00B4B05L,0xE00B4B05L},{0xE00B4B05L,0x2800A8E2L,0xA04321E8L,0x2800A8E2L,0xE00B4B05L,0xE00B4B05L},{0xE00B4B05L,0x2800A8E2L,0xA04321E8L,0x2800A8E2L,0xE00B4B05L,0xE00B4B05L},{0xE00B4B05L,0x2800A8E2L,0xA04321E8L,0x2800A8E2L,0xE00B4B05L,0xE00B4B05L},{0xE00B4B05L,0x2800A8E2L,0xA04321E8L,0x2800A8E2L,0xE00B4B05L,0xE00B4B05L}};
                    int32_t *l_2009 = &p_3022->g_985.f2;
                    uint64_t *l_2021 = &p_3022->g_24;
                    int32_t *l_2028 = &p_3022->g_1657.f1;
                    int32_t *l_2029 = &p_3022->g_1657.f1;
                    int32_t *l_2030 = &p_3022->g_1854.f1;
                    int32_t *l_2031 = &p_3022->g_1854.f1;
                    int32_t *l_2032 = (void*)0;
                    int32_t *l_2033 = &p_3022->g_1657.f1;
                    int32_t *l_2034[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i, j;
                    if (((*p_3022->g_1347) = (((((safe_mul_func_uint8_t_u_u((((**p_3022->g_84) ^= (safe_mod_func_int16_t_s_s((safe_add_func_int16_t_s_s(((((*l_2009) = (((*p_3022->g_1358) = (p_18 , (safe_add_func_int64_t_s_s((((p_18 ^ (safe_sub_func_uint32_t_u_u(((l_1995[5][4] == l_1996) == ((safe_rshift_func_uint16_t_u_s(((*p_3022->g_109) = 0x447EL), 0)) | (((safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(((l_1978 | (0x014D2F26C00CFC88L & l_2003[1][1])) ^ ((safe_mod_func_uint8_t_u_u((l_2006 == (void*)0), 0x14L)) , p_18)), l_2003[1][5])), 0x99A812E4L)) & l_1982) == l_1978))), p_18))) > (*p_3022->g_432)) <= p_18), p_18)))) <= 0x63D4L)) , 8UL) & (*p_3022->g_432)), p_18)), 0xB73BL))) | 0xD2L), p_18)) > p_18) & p_18) , l_2010) != (void*)0)))
                    { /* block id: 1064 */
                        volatile int32_t * volatile *l_2012 = &p_3022->g_167;
                        (*l_2012) = p_3022->g_2011;
                        (**l_2012) = ((*p_3022->g_432) == ((l_2013[1] != (((safe_rshift_func_uint8_t_u_s((((*l_1981) = p_3022->g_2016) && (safe_lshift_func_int8_t_s_s(0x1CL, (((safe_rshift_func_uint16_t_u_s((*p_3022->g_1823), 4)) , &p_3022->g_29) == l_2021)))), (l_1982 < ((*l_1996) &= (1L == 1L))))) , p_3022->g_937.f0) , l_2022[4][0][0])) >= l_2003[0][1]));
                    }
                    else
                    { /* block id: 1069 */
                        (***l_2006) = l_2013[1];
                        l_1982 = (safe_add_func_uint8_t_u_u((+(safe_lshift_func_int16_t_s_u(0x0877L, 15))), ((void*)0 != l_2027)));
                        (**l_2007) = (*p_3022->g_1346);
                    }
                    l_2047[0]--;
                    (*l_2008) = &p_18;
                }
                if (p_18)
                { /* block id: 1077 */
                    uint64_t l_2061 = 18446744073709551615UL;
                    uint8_t **l_2066 = &p_3022->g_85;
                    (*p_3022->g_1347) &= (l_2047[5] || (safe_lshift_func_uint8_t_u_u(0x7AL, 6)));
                    (*l_2008) = &p_18;
                    if (l_2047[5])
                    { /* block id: 1080 */
                        l_2066 = (((((((safe_rshift_func_uint16_t_u_s(((((l_2054 == (((*l_1996) |= (((safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(3UL, ((((((*p_3022->g_1325) = (void*)0) == (void*)0) && l_2061) >= ((p_18 > ((safe_sub_func_int32_t_s_s(((p_18 , ((*p_3022->g_85) ^= l_2047[3])) == ((p_3022->g_2064[0][0][7] , p_18) >= 1UL)), p_18)) , p_18)) && p_18)) | 0x1BL))), (*p_3022->g_1823))), l_2061)) , 4294967293UL) <= p_18)) , (void*)0)) <= 0x13F8DE905F4D0C65L) <= 4294967295UL) == 0x01D4C3F121F20595L), 5)) & 1UL) , 0x5A1EC8F9L) >= l_2040) == l_2045[4]) == 0x84060A3BL) , l_2065);
                        return (*****p_3022->g_1893);
                    }
                    else
                    { /* block id: 1086 */
                        (*l_2008) = &p_18;
                        (*p_3022->g_1347) = l_2042[1];
                    }
                }
                else
                { /* block id: 1090 */
                    int64_t l_2067 = 6L;
                    for (p_3022->g_968.f0 = 2; (p_3022->g_968.f0 >= 0); p_3022->g_968.f0 -= 1)
                    { /* block id: 1093 */
                        uint8_t ******l_2070[9][1];
                        int i, j;
                        for (i = 0; i < 9; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_2070[i][j] = &p_3022->g_1893;
                        }
                        p_3022->g_453[(p_3022->g_968.f0 + 3)] = &l_2042[p_3022->g_968.f0];
                        if (p_18)
                            break;
                        if (l_2067)
                            break;
                        l_2042[p_3022->g_968.f0] = ((safe_sub_func_int32_t_s_s(p_18, (*p_3022->g_2011))) && ((p_3022->g_1893 = &p_3022->g_1894) != (void*)0));
                    }
                    l_2039 &= 0x21779538L;
                    (*p_3022->g_1347) ^= l_2041;
                }
            }
            else
            { /* block id: 1103 */
                uint64_t l_2081 = 18446744073709551611UL;
                int64_t *l_2100 = &l_1978;
                (*p_3022->g_1347) = (safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(((safe_add_func_int8_t_s_s((+0x48L), (safe_add_func_int32_t_s_s((safe_add_func_uint64_t_u_u((l_2081 < (safe_div_func_uint8_t_u_u((((safe_sub_func_uint8_t_u_u((++(**p_3022->g_84)), l_2045[4])) , l_2045[3]) | (safe_rshift_func_int8_t_s_s(((p_18 != ((((((safe_mod_func_uint32_t_u_u(p_18, 0x4D8FDC3CL)) > (1UL < ((p_3022->g_2094 , l_1978) & l_2095[2][1][0]))) == l_2042[0]) != p_18) , p_3022->g_952[2][3].f0) == 9UL)) < (**p_3022->g_1357)), p_18))), p_18))), p_18)), 4294967294UL)))) == p_18), (-1L))), l_2038));
                for (p_3022->g_1006.f2 = 0; (p_3022->g_1006.f2 <= 12); p_3022->g_1006.f2 = safe_add_func_int32_t_s_s(p_3022->g_1006.f2, 6))
                { /* block id: 1108 */
                    int32_t **l_2098 = &p_3022->g_215[0];
                    (*l_2098) = (void*)0;
                }
                (*p_3022->g_1347) = (safe_unary_minus_func_int64_t_s(((*l_2100) = 0x6B49816E0766B1C0L)));
            }
            (*p_3022->g_1347) = ((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(((((safe_lshift_func_int16_t_s_u((safe_add_func_int64_t_s_s((safe_sub_func_int32_t_s_s((*p_3022->g_392), ((0UL < (((((safe_div_func_int16_t_s_s(0L, ((*p_3022->g_109)--))) , ((((p_3022->g_2131 = ((safe_mod_func_int16_t_s_s(0x5B3CL, (((((*l_2117) = ((*l_1980) = ((*l_1981) ^= p_18))) > ((*l_2128) |= ((safe_div_func_int8_t_s_s((safe_div_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(p_18, (p_18 , ((*l_2124) ^= (*****p_3022->g_1893))))) & (safe_div_func_uint8_t_u_u(p_3022->g_2127, p_18))), 0x64L)), 1UL)) > (-4L)))) & (**p_3022->g_1822)) | p_18))) , l_1996)) == l_2022[2][2][0]) || l_2043[4]) || 0x53EBDD5AL)) == (**p_3022->g_1945)) ^ (*p_3022->g_432)) != l_2047[0])) , p_18))), 1UL)), l_2042[2])) == (*p_3022->g_1358)) | 0x3844L) != p_18), 6)), 0xEBL)) < 0x60FF389711EE9290L);
            if (p_18)
                break;
        }
    }
    (*l_2149) = ((*p_3022->g_1347) &= (l_2035 &= ((safe_add_func_uint64_t_u_u((((safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(l_2038, 3)) & p_18), (safe_add_func_uint32_t_u_u(((*l_2142) = ((safe_mod_func_int8_t_s_s(p_18, p_18)) & l_2046)), (l_2043[6] ^= l_2046))))) , (safe_rshift_func_int16_t_s_s(1L, (((l_2041 & (safe_div_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(((void*)0 != &p_3022->g_665[8][5]), p_18)), 0x6535L))) == l_2043[6]) == (**p_3022->g_1357))))) != 0UL), 3UL)) , l_2043[4])));
    if ((((safe_sub_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((((*l_2169) = (((safe_add_func_int8_t_s_s(((p_3022->g_112 ^= (safe_add_func_uint64_t_u_u(((((*l_2149) , (((safe_mod_func_int64_t_s_s((((*l_2149) >= 1L) == ((((safe_mul_func_int16_t_s_s((((void*)0 != l_2164[4][7][1]) <= ((*p_3022->g_85) ^= p_18)), (*l_2149))) , ((+(p_18 == ((((void*)0 != l_2165) == 0x7EA209B0L) ^ p_18))) <= p_18)) < 0x2123L) < p_18)), (*p_3022->g_432))) | p_18) , p_18)) , (-1L)) >= (*l_2149)), p_3022->g_115))) && 0x1CA15E865313BC25L), 0x0EL)) == p_18) , &p_3022->g_2131)) != &p_3022->g_2131), p_18)), p_18)) , p_3022->g_959.f0) | p_18))
    { /* block id: 1133 */
        uint32_t l_2172 = 0x0E1CB3E2L;
        int64_t l_2188 = 0x22692C9271733CD6L;
        int8_t *l_2191 = (void*)0;
        int8_t *l_2192 = &p_3022->g_608;
        int32_t l_2193 = (-4L);
        int32_t ***l_2194 = (void*)0;
        int32_t l_2195 = 0x7C59C4CCL;
        if (p_3022->g_112)
            goto lbl_2171;
        (*p_3022->g_1347) = (func_46(l_2172, (((**p_3022->g_1945) ^= (l_2172 || ((safe_div_func_int64_t_s_s((l_2195 |= ((((l_2193 = (safe_sub_func_int8_t_s_s((!((*l_1980) = (0x1EDAL != (p_18 , l_2172)))), ((*l_2192) &= (((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((+(((((safe_mul_func_uint16_t_u_u(((((safe_mul_func_int8_t_s_s(l_2185, 249UL)) != l_2172) & (+(safe_add_func_uint32_t_u_u(((*l_2142) &= ((**p_3022->g_1822) == l_2172)), p_18)))) != l_2172), (-10L))) ^ 0x0A37CDCDL) && l_2188) , p_18) == p_18)), (**p_3022->g_84))), (**p_3022->g_84))) & l_2189) ^ l_2190))))) && (-10L)) , l_2194) == l_2194)), (*p_3022->g_432))) == p_18))) | p_18), (*p_3022->g_1343), p_18, p_3022) , p_18);
        for (p_3022->g_974.f4 = (-17); (p_3022->g_974.f4 < 11); p_3022->g_974.f4 = safe_add_func_int8_t_s_s(p_3022->g_974.f4, 1))
        { /* block id: 1144 */
            return (*****p_3022->g_1893);
        }
    }
    else
    { /* block id: 1147 */
        int8_t **l_2203 = &p_3022->g_359[0];
        int8_t ***l_2202[4];
        int32_t l_2212 = 0L;
        uint8_t *l_2215 = &p_3022->g_115;
        uint64_t l_2220 = 4UL;
        int32_t *l_2246[10][10][2] = {{{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040}},{{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040}},{{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040}},{{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040}},{{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040}},{{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040}},{{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040}},{{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040}},{{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040}},{{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040},{&p_3022->g_13[6],&l_2040}}};
        uint16_t l_2295 = 3UL;
        uint32_t *l_2296 = &p_3022->g_222;
        int64_t *l_2307 = &p_3022->g_112;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_2202[i] = &l_2203;
        (*l_2167) = (void*)0;
        if ((!(+(func_46((((safe_mul_func_int8_t_s_s((l_2220 = (safe_sub_func_int16_t_s_s(((l_2204 = &p_3022->g_359[1]) != ((**p_3022->g_84) , l_2205[0][6])), ((safe_rshift_func_int8_t_s_u(((*l_1980) &= (safe_sub_func_int64_t_s_s((safe_mul_func_int8_t_s_s(l_2212, ((*l_2149) = p_18))), ((safe_add_func_uint8_t_u_u(((*l_2215) |= 0x29L), (p_3022->g_2216 , (0x378EL == ((safe_div_func_int8_t_s_s(((p_3022->g_2219 , p_18) != 4294967286UL), p_18)) ^ p_18))))) < 0x7A8E80D330B072DDL)))), 0)) ^ (-1L))))), l_2212)) < p_18) , 6L), p_18, p_18, p_18, p_3022) , (**p_3022->g_1346)))))
        { /* block id: 1154 */
            uint16_t l_2243 = 0x7DFAL;
            uint32_t **l_2254 = &p_3022->g_823;
            l_2243 = ((*l_2149) = (p_18 , (p_3022->g_2221 , (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((~(safe_sub_func_int16_t_s_s((((-1L) < (++(*l_2142))) != (**p_3022->g_1945)), (p_18 , (*p_3022->g_1358))))), (safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint64_t_u(((l_2212 ^= p_18) >= (safe_add_func_int32_t_s_s((*p_3022->g_1347), (-5L)))))), 0x1D160D31L)), (**p_3022->g_1357))) > p_18), (*p_3022->g_1823))), 1)), 0x4DA9L)))), (**p_3022->g_1945))))));
            for (l_2243 = 29; (l_2243 == 42); l_2243 = safe_add_func_uint16_t_u_u(l_2243, 9))
            { /* block id: 1161 */
                uint32_t **l_2255 = &p_3022->g_823;
                int32_t l_2258 = 0x7E57FE76L;
                uint32_t *l_2262[10] = {&p_3022->g_95,&p_3022->g_1149,&p_3022->g_95,&p_3022->g_95,&p_3022->g_1149,&p_3022->g_95,&p_3022->g_95,&p_3022->g_1149,&p_3022->g_95,&p_3022->g_95};
                int i;
                (***l_2165) = l_2246[3][5][0];
                (*l_2149) = (safe_sub_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(p_18, ((safe_mod_func_uint16_t_u_u((*p_3022->g_109), ((((p_3022->g_2253 , l_2254) == l_2255) , ((*p_3022->g_109) , (((0x67D7L <= (((safe_add_func_int8_t_s_s(((void*)0 != (*p_3022->g_1705)), p_18)) >= p_18) > p_18)) ^ p_18) >= p_18))) | l_2258))) || p_18))), (*p_3022->g_1358)));
                for (p_3022->g_948.f0 = 2; (p_3022->g_948.f0 >= 0); p_3022->g_948.f0 -= 1)
                { /* block id: 1166 */
                    int i;
                    (***l_2165) = &l_2043[(p_3022->g_948.f0 + 3)];
                    l_2258 = (p_18 = ((*p_3022->g_1347) = ((((((****p_3022->g_1894) ^= p_18) || (safe_lshift_func_int16_t_s_u((~p_18), (((p_3022->g_2261 , l_2262[8]) == (void*)0) >= 0x0106L)))) > (((void*)0 != &p_3022->g_1894) | (safe_sub_func_uint8_t_u_u(p_18, p_18)))) , 0x638252909BAAA912L) & 0L)));
                    l_2258 = (safe_rshift_func_int16_t_s_s((((safe_unary_minus_func_uint64_t_u((safe_mod_func_uint32_t_u_u(((((0x637FF1DAL || (((void*)0 != &l_2166[p_3022->g_948.f0]) | (safe_rshift_func_int16_t_s_s(((65526UL ^ ((*p_3022->g_1823) = ((void*)0 == &p_3022->g_798))) == ((*l_2149) = (safe_mod_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((((~p_18) || (((safe_rshift_func_uint16_t_u_u(((((p_18 && p_18) <= p_18) < (*p_3022->g_432)) | 0x6CL), 3)) < p_3022->g_960.f0) > (**p_3022->g_1945))) ^ l_2258), (**p_3022->g_84))) , l_2258), 4L)))), p_18)))) || p_18) != 8UL) || p_18), p_18)))) , p_18) , 1L), 9));
                }
            }
            return l_2243;
        }
        else
        { /* block id: 1178 */
            int32_t *l_2289 = &p_3022->g_2290;
            int8_t l_2291 = 5L;
            int32_t l_2292 = (-1L);
            int64_t **l_2303 = &l_2168[0];
            int64_t *l_2305 = &p_3022->g_112;
            int64_t **l_2304[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            for (p_3022->g_966.f2 = (-28); (p_3022->g_966.f2 == 16); p_3022->g_966.f2 = safe_add_func_int8_t_s_s(p_3022->g_966.f2, 3))
            { /* block id: 1181 */
                int32_t l_2288[10][3] = {{(-8L),0x709DD38EL,(-8L)},{(-8L),0x709DD38EL,(-8L)},{(-8L),0x709DD38EL,(-8L)},{(-8L),0x709DD38EL,(-8L)},{(-8L),0x709DD38EL,(-8L)},{(-8L),0x709DD38EL,(-8L)},{(-8L),0x709DD38EL,(-8L)},{(-8L),0x709DD38EL,(-8L)},{(-8L),0x709DD38EL,(-8L)},{(-8L),0x709DD38EL,(-8L)}};
                int i, j;
                (*l_2149) &= ((safe_rshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u(((*l_2215) ^= (((((0x3679C855315CE64BL && p_18) >= (safe_div_func_uint16_t_u_u((((0x62L == (safe_div_func_uint32_t_u_u(((*l_2142) ^= ((l_2288[4][1] , (((**p_3022->g_1822) | (l_2291 = (l_2289 != l_2246[0][1][1]))) ^ (p_18 || (p_18 , l_2292)))) || p_18)), l_2288[8][2]))) || 1L) ^ (**p_3022->g_1822)), (**p_3022->g_1945)))) < p_18) , p_18) | (*****p_3022->g_1893))), p_18)), (*p_3022->g_109))) && p_18);
            }
            (*p_3022->g_1347) = (0x5900L ^ ((*p_3022->g_1358) = (safe_mod_func_uint32_t_u_u((((((l_2295 , l_2289) == l_2296) , (~(2L != (safe_sub_func_int8_t_s_s(((*l_1980) = (((**p_3022->g_1822) = ((safe_add_func_int8_t_s_s(((safe_add_func_int16_t_s_s((((((-6L) || (((p_3022->g_2306 = ((*l_2303) = (void*)0)) == l_2307) > (safe_sub_func_int8_t_s_s(p_18, (**p_3022->g_84))))) & p_18) && 0x54L) , 0x4593L), p_18)) > l_2292), 1L)) , 0x0960L)) != p_18)), 251UL))))) , 0x689346247B4517E8L) & 0x3B4D4BB74991E248L), p_18))));
            for (p_3022->g_1251 = 2; (p_3022->g_1251 > 59); ++p_3022->g_1251)
            { /* block id: 1195 */
                int8_t l_2312 = 0x56L;
                uint32_t l_2326[9][7] = {{1UL,0xD0A46537L,1UL,1UL,0xD0A46537L,1UL,1UL},{1UL,0xD0A46537L,1UL,1UL,0xD0A46537L,1UL,1UL},{1UL,0xD0A46537L,1UL,1UL,0xD0A46537L,1UL,1UL},{1UL,0xD0A46537L,1UL,1UL,0xD0A46537L,1UL,1UL},{1UL,0xD0A46537L,1UL,1UL,0xD0A46537L,1UL,1UL},{1UL,0xD0A46537L,1UL,1UL,0xD0A46537L,1UL,1UL},{1UL,0xD0A46537L,1UL,1UL,0xD0A46537L,1UL,1UL},{1UL,0xD0A46537L,1UL,1UL,0xD0A46537L,1UL,1UL},{1UL,0xD0A46537L,1UL,1UL,0xD0A46537L,1UL,1UL}};
                int32_t l_2340 = 1L;
                int i, j;
                if (l_2312)
                    break;
                for (p_3022->g_972.f4 = 17; (p_3022->g_972.f4 >= 2); --p_3022->g_972.f4)
                { /* block id: 1199 */
                    uint64_t l_2327 = 0x59D2BFCDB3820A8EL;
                    int32_t *l_2335 = &p_3022->g_978.f0;
                    int32_t l_2345 = 3L;
                    uint8_t ****l_2346 = &p_3022->g_1369[3];
                    (*p_3022->g_1347) = ((~l_2291) != ((*p_3022->g_1358) &= (((*l_2215) = (safe_mod_func_uint8_t_u_u(((((((*p_3022->g_432) &= (p_3022->g_2317 , ((((p_18 <= 0xD8L) || (safe_div_func_int32_t_s_s((((safe_div_func_int64_t_s_s((safe_sub_func_int32_t_s_s(p_18, p_18)), (~l_2312))) || l_2291) & ((safe_div_func_int32_t_s_s(((*l_2149) = (((l_2326[6][2] , p_18) == 1L) ^ 0UL)), l_2312)) < l_2327)), (-9L)))) || p_18) , l_2328))) >= (-9L)) , (*l_2149)) < l_2292) , 0xE6L), p_18))) != p_18)));
                    (*p_3022->g_1347) ^= ((safe_sub_func_int64_t_s_s((((safe_mod_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(0x78B60CCDDFB4A65AL, (((**p_3022->g_1822) &= (!(((l_2335 == (*p_3022->g_1342)) != (0x296C2F90L ^ (((((((l_2345 ^= ((safe_add_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u((l_2340 = l_2312), (((safe_div_func_uint8_t_u_u((((*l_2142) ^= ((p_18 > (0x3E78FA6BBBD3E55AL == (l_2292 = (safe_mod_func_uint16_t_u_u(65528UL, 0x6194L))))) < 0x57FAL)) , 0x98L), (*l_2149))) || p_18) <= p_18))), p_18)) != p_18)) || p_18) ^ l_2291) < 0x64L) | 0x37L) , (void*)0) != l_2346))) < 0L))) >= l_2327))), l_2326[4][1])) == l_2326[6][2]) || l_2292), 0x0E9C8482E40A9836L)) < p_18);
                    if (l_2312)
                        continue;
                }
            }
        }
    }
    return (**p_3022->g_84);
}


/* ------------------------------------------ */
/* 
 * reads : p_3022->g_96 p_3022->g_462.f2 p_3022->g_462.f4 p_3022->g_10 p_3022->g_488 p_3022->g_462.f0 p_3022->g_109 p_3022->g_110 p_3022->g_29 p_3022->g_84 p_3022->g_85 p_3022->g_534 p_3022->g_546 p_3022->g_432 p_3022->g_24 p_3022->g_392 p_3022->g_13 p_3022->g_139 p_3022->g_32 p_3022->g_112 p_3022->g_457 p_3022->g_458 p_3022->g_586 p_3022->g_589 p_3022->g_100.f0 p_3022->g_611 p_3022->g_621 p_3022->g_7 p_3022->g_608 p_3022->g_334 p_3022->g_22 p_3022->g_222 p_3022->g_115 p_3022->g_225 p_3022->g_728 p_3022->g_275 p_3022->g_778 p_3022->g_798 p_3022->g_167 p_3022->g_6 p_3022->g_52.f1 p_3022->g_820 p_3022->g_664 p_3022->g_454 p_3022->g_411 p_3022->g_905 p_3022->g_778.f2 p_3022->g_1823
 * writes: p_3022->g_112 p_3022->g_462.f2 p_3022->g_462.f4 p_3022->g_458 p_3022->g_52.f1 p_3022->g_139 p_3022->g_215 p_3022->g_535 p_3022->g_110 p_3022->g_557 p_3022->g_568 p_3022->g_398.f1 p_3022->g_527 p_3022->g_411 p_3022->g_611 p_3022->g_334 p_3022->g_664 p_3022->g_32 p_3022->g_608 p_3022->g_678 p_3022->g_533 p_3022->g_29 p_3022->g_24 p_3022->g_102 p_3022->g_665 p_3022->g_95 p_3022->g_523 p_3022->g_275 p_3022->g_115 p_3022->g_798 p_3022->g_6 p_3022->g_462.f0 p_3022->g_823 p_3022->g_52.f0 p_3022->g_778.f2
 */
uint16_t  func_35(uint64_t  p_36, int32_t  p_37, uint64_t  p_38, int32_t  p_39, int32_t  p_40, struct S2 * p_3022)
{ /* block id: 240 */
    int64_t l_469 = (-1L);
    int64_t *l_478[3][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    union U1 **l_489 = &p_3022->g_102;
    int32_t l_513[6][6] = {{0x54403E67L,0x54403E67L,0x122F91D2L,0x52DA53EEL,0x22493751L,0x52DA53EEL},{0x54403E67L,0x54403E67L,0x122F91D2L,0x52DA53EEL,0x22493751L,0x52DA53EEL},{0x54403E67L,0x54403E67L,0x122F91D2L,0x52DA53EEL,0x22493751L,0x52DA53EEL},{0x54403E67L,0x54403E67L,0x122F91D2L,0x52DA53EEL,0x22493751L,0x52DA53EEL},{0x54403E67L,0x54403E67L,0x122F91D2L,0x52DA53EEL,0x22493751L,0x52DA53EEL},{0x54403E67L,0x54403E67L,0x122F91D2L,0x52DA53EEL,0x22493751L,0x52DA53EEL}};
    uint32_t l_519[9] = {4294967288UL,0xF18C6E0FL,4294967288UL,4294967288UL,0xF18C6E0FL,4294967288UL,4294967288UL,0xF18C6E0FL,4294967288UL};
    int32_t *l_555 = &p_3022->g_96;
    union U0 **l_570[9];
    uint8_t ***l_573 = &p_3022->g_84;
    int8_t *l_607 = &p_3022->g_608;
    uint32_t l_691 = 0x92D5F432L;
    int64_t l_802 = (-9L);
    union U0 *l_811 = &p_3022->g_52;
    int32_t *l_864 = &p_3022->g_96;
    uint32_t *l_886[6];
    int16_t l_887 = 0x0180L;
    int16_t *l_888 = &p_3022->g_334[0];
    int32_t **l_889 = &p_3022->g_215[0];
    int32_t l_919 = 0x1CC59B47L;
    int32_t l_930 = (-1L);
    union U1 *l_1008[5] = {&p_3022->g_1009,&p_3022->g_1009,&p_3022->g_1009,&p_3022->g_1009,&p_3022->g_1009};
    int16_t l_1144[2][4][5] = {{{(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L)}}};
    uint16_t l_1224[9][2][10] = {{{0x7C5FL,65528UL,0x7C5FL,0UL,0xDB11L,0UL,9UL,65535UL,7UL,0x8E76L},{0x7C5FL,65528UL,0x7C5FL,0UL,0xDB11L,0UL,9UL,65535UL,7UL,0x8E76L}},{{0x7C5FL,65528UL,0x7C5FL,0UL,0xDB11L,0UL,9UL,65535UL,7UL,0x8E76L},{0x7C5FL,65528UL,0x7C5FL,0UL,0xDB11L,0UL,9UL,65535UL,7UL,0x8E76L}},{{0x7C5FL,65528UL,0x7C5FL,0UL,0xDB11L,0UL,9UL,65535UL,7UL,0x8E76L},{0x7C5FL,65528UL,0x7C5FL,0UL,0xDB11L,0UL,9UL,65535UL,7UL,0x8E76L}},{{0x7C5FL,65528UL,0x7C5FL,0UL,0xDB11L,0UL,9UL,65535UL,7UL,0x8E76L},{0x7C5FL,65528UL,0x7C5FL,0UL,0xDB11L,0UL,9UL,65535UL,7UL,0x8E76L}},{{0x7C5FL,65528UL,0x7C5FL,0UL,0xDB11L,0UL,9UL,65535UL,7UL,0x8E76L},{0x7C5FL,65528UL,0x7C5FL,0UL,0xDB11L,0UL,9UL,65535UL,7UL,0x8E76L}},{{0x7C5FL,65528UL,0x7C5FL,0UL,0xDB11L,0UL,9UL,65535UL,7UL,0x8E76L},{0x7C5FL,65528UL,0x7C5FL,0UL,0xDB11L,0UL,9UL,65535UL,7UL,0x8E76L}},{{0x7C5FL,65528UL,0x7C5FL,0UL,0xDB11L,0UL,9UL,65535UL,7UL,0x8E76L},{0x7C5FL,65528UL,0x7C5FL,0UL,0xDB11L,0UL,9UL,65535UL,7UL,0x8E76L}},{{0x7C5FL,65528UL,0x7C5FL,0UL,0xDB11L,0UL,9UL,65535UL,7UL,0x8E76L},{0x7C5FL,65528UL,0x7C5FL,0UL,0xDB11L,0UL,9UL,65535UL,7UL,0x8E76L}},{{0x7C5FL,65528UL,0x7C5FL,0UL,0xDB11L,0UL,9UL,65535UL,7UL,0x8E76L},{0x7C5FL,65528UL,0x7C5FL,0UL,0xDB11L,0UL,9UL,65535UL,7UL,0x8E76L}}};
    uint64_t l_1269 = 0x346D5194A3080A00L;
    uint8_t l_1274 = 247UL;
    union U1 ***l_1279 = (void*)0;
    uint32_t l_1399 = 0UL;
    union U0 *l_1449 = &p_3022->g_398;
    int32_t l_1459 = 0x4F37D7ADL;
    int32_t l_1483 = 8L;
    int8_t l_1618[5] = {0L,0L,0L,0L,0L};
    int64_t l_1638 = 0x066085E2EC26F1AAL;
    union U1 ***l_1658[1][6][5] = {{{&p_3022->g_458[3][2][0],&l_489,&l_489,&p_3022->g_458[6][2][2],&l_489},{&p_3022->g_458[3][2][0],&l_489,&l_489,&p_3022->g_458[6][2][2],&l_489},{&p_3022->g_458[3][2][0],&l_489,&l_489,&p_3022->g_458[6][2][2],&l_489},{&p_3022->g_458[3][2][0],&l_489,&l_489,&p_3022->g_458[6][2][2],&l_489},{&p_3022->g_458[3][2][0],&l_489,&l_489,&p_3022->g_458[6][2][2],&l_489},{&p_3022->g_458[3][2][0],&l_489,&l_489,&p_3022->g_458[6][2][2],&l_489}}};
    int16_t l_1674 = 0x6BDCL;
    int64_t l_1684 = 1L;
    int64_t l_1685 = 1L;
    int64_t l_1734 = 0x60808C0571207576L;
    uint64_t l_1735 = 0x669B90840D3CFCEBL;
    int32_t l_1744 = 0x4C1129A6L;
    int16_t l_1796 = (-1L);
    uint16_t l_1897 = 0x02BEL;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_570[i] = &p_3022->g_535;
    for (i = 0; i < 6; i++)
        l_886[i] = &p_3022->g_222;
    if (((!p_38) < (p_3022->g_112 = (safe_mod_func_uint16_t_u_u((p_39 > ((l_469 >= ((safe_lshift_func_int8_t_s_s(p_40, (safe_sub_func_uint16_t_u_u(((p_39 > (((safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s(0x7EFEL, 11)), 5)) , l_469) , l_469)) != (0xCC912DBFFE54F513L && p_3022->g_96)), p_38)))) , p_39)) < p_36)), 2L)))))
    { /* block id: 242 */
        uint64_t l_504 = 18446744073709551615UL;
        int32_t l_514 = 0L;
        int32_t l_515 = 0x53594072L;
        int32_t l_517[8][8][4] = {{{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL}},{{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL}},{{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL}},{{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL}},{{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL}},{{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL}},{{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL}},{{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL},{0x4559F817L,(-1L),0L,0x72A3EEABL}}};
        union U0 *l_532 = (void*)0;
        uint8_t ***l_690 = &p_3022->g_84;
        int i, j, k;
        for (p_3022->g_462.f2 = 0; (p_3022->g_462.f2 >= (-21)); p_3022->g_462.f2 = safe_sub_func_int32_t_s_s(p_3022->g_462.f2, 3))
        { /* block id: 245 */
            return l_469;
        }
        p_37 = p_37;
        for (p_3022->g_462.f4 = 12; (p_3022->g_462.f4 == (-8)); --p_3022->g_462.f4)
        { /* block id: 251 */
            uint32_t *l_492 = &p_3022->g_275;
            int32_t l_501 = (-1L);
            int32_t l_512[4];
            uint32_t l_541 = 0UL;
            int32_t *l_556[3][6][4] = {{{(void*)0,&p_3022->g_3,&p_3022->g_3,(void*)0},{(void*)0,&p_3022->g_3,&p_3022->g_3,(void*)0},{(void*)0,&p_3022->g_3,&p_3022->g_3,(void*)0},{(void*)0,&p_3022->g_3,&p_3022->g_3,(void*)0},{(void*)0,&p_3022->g_3,&p_3022->g_3,(void*)0},{(void*)0,&p_3022->g_3,&p_3022->g_3,(void*)0}},{{(void*)0,&p_3022->g_3,&p_3022->g_3,(void*)0},{(void*)0,&p_3022->g_3,&p_3022->g_3,(void*)0},{(void*)0,&p_3022->g_3,&p_3022->g_3,(void*)0},{(void*)0,&p_3022->g_3,&p_3022->g_3,(void*)0},{(void*)0,&p_3022->g_3,&p_3022->g_3,(void*)0},{(void*)0,&p_3022->g_3,&p_3022->g_3,(void*)0}},{{(void*)0,&p_3022->g_3,&p_3022->g_3,(void*)0},{(void*)0,&p_3022->g_3,&p_3022->g_3,(void*)0},{(void*)0,&p_3022->g_3,&p_3022->g_3,(void*)0},{(void*)0,&p_3022->g_3,&p_3022->g_3,(void*)0},{(void*)0,&p_3022->g_3,&p_3022->g_3,(void*)0},{(void*)0,&p_3022->g_3,&p_3022->g_3,(void*)0}}};
            int16_t l_558 = 0x36ABL;
            int8_t *l_559 = &p_3022->g_139;
            uint32_t l_560 = 0x9B6B5D7DL;
            uint8_t l_583 = 0UL;
            int32_t l_624 = 1L;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_512[i] = (-9L);
            for (p_36 = 1; (p_36 < 39); p_36 = safe_add_func_int64_t_s_s(p_36, 1))
            { /* block id: 254 */
                union U1 ***l_490 = (void*)0;
                union U1 ***l_491[3];
                int16_t l_500[6];
                int32_t l_516 = 0x52450DDEL;
                int32_t l_518 = 0x7FC17014L;
                int32_t *l_524 = (void*)0;
                int32_t *l_529[8][8][4] = {{{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]}},{{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]}},{{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]}},{{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]}},{{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]}},{{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]}},{{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]}},{{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]},{&l_512[3],&l_515,&l_512[3],&l_512[3]}}};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_491[i] = (void*)0;
                for (i = 0; i < 6; i++)
                    l_500[i] = 0x59C9L;
                if ((safe_rshift_func_uint16_t_u_s((p_3022->g_10 && (safe_unary_minus_func_uint64_t_u(5UL))), (p_3022->g_488 | (l_489 != (p_3022->g_458[6][2][2] = l_489))))))
                { /* block id: 256 */
                    int32_t *l_493 = &p_3022->g_52.f1;
                    int8_t *l_499 = &p_3022->g_139;
                    (*l_493) = (&p_3022->g_275 == l_492);
                    (*l_493) = ((safe_add_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s((safe_lshift_func_uint16_t_u_u(((((*l_499) = p_36) ^ 0x1AL) , (((((l_501 |= (l_500[4] & (-1L))) ^ (252UL && ((p_3022->g_462.f0 , ((safe_div_func_uint64_t_u_u((0x47BCB2FDL & l_504), ((safe_div_func_int8_t_s_s((0x0AC6L || 0x61ECL), 0x20L)) && 1UL))) <= (-10L))) | p_37))) > 1L) , 0L) | 0x9DE910B2L)), (*p_3022->g_109))))), p_3022->g_29)) >= (-3L));
                }
                else
                { /* block id: 261 */
                    int32_t l_507 = 0x212778C0L;
                    int32_t *l_508 = (void*)0;
                    int32_t *l_509 = &l_501;
                    int32_t *l_510 = &p_3022->g_398.f1;
                    int32_t *l_511[4][3];
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_511[i][j] = &p_3022->g_52.f1;
                    }
                    for (p_3022->g_139 = 0; p_3022->g_139 < 4; p_3022->g_139 += 1)
                    {
                        p_3022->g_215[p_3022->g_139] = &p_3022->g_3;
                    }
                    --l_519[5];
                }
                l_514 |= ((*p_3022->g_84) != (*p_3022->g_84));
                if (l_512[3])
                    continue;
                for (l_518 = 0; (l_518 == 28); l_518 = safe_add_func_int64_t_s_s(l_518, 7))
                { /* block id: 269 */
                    uint16_t l_536 = 65535UL;
                    (*p_3022->g_534) = l_532;
                    if (l_536)
                        continue;
                    for (l_515 = 0; (l_515 < 11); l_515 = safe_add_func_int32_t_s_s(l_515, 8))
                    { /* block id: 274 */
                        return (*p_3022->g_109);
                    }
                }
            }
            if (((((safe_lshift_func_int8_t_s_s(l_541, (safe_sub_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((l_515 = ((((p_3022->g_112 = ((p_3022->g_546 , p_38) , ((0L | (((p_37 ^ (((*l_559) = (((safe_sub_func_uint32_t_u_u(4294967286UL, ((safe_add_func_int32_t_s_s((safe_sub_func_uint64_t_u_u(((p_3022->g_557 = (((((*p_3022->g_392) = (safe_mod_func_int64_t_s_s((((((((*p_3022->g_109) = (l_541 , ((((void*)0 == l_555) , (*p_3022->g_432)) < l_517[5][4][1]))) <= p_36) ^ p_36) ^ p_39) & p_37) || 0x59L), (*p_3022->g_432)))) || 0x61A89A33L) >= 3L) <= l_513[1][1])) > (-1L)), 0x18130FB83F6ED6ABL)), 0x1B712C03L)) | l_519[5]))) & l_558) <= p_36)) && 0L)) , p_37) && 0x281CBDBBL)) == p_40))) <= p_36) > p_3022->g_13[5]) ^ p_36)), l_517[3][2][1])), l_514)))) != p_36) , 0xCF70L) , p_40))
            { /* block id: 285 */
                return l_560;
            }
            else
            { /* block id: 287 */
                int8_t l_564 = 1L;
                int32_t l_565 = 0x595764D0L;
                int32_t l_582 = 2L;
                int64_t l_632 = (-1L);
                for (p_39 = 0; (p_39 != 29); ++p_39)
                { /* block id: 290 */
                    int32_t **l_563 = &l_556[2][0][1];
                    union U0 ***l_569[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t l_580 = (-1L);
                    int32_t l_581 = 0x3A063B1FL;
                    int i;
                    (*l_563) = &p_39;
                    l_565 = l_564;
                    if ((l_513[0][4] != (((l_570[2] = (p_3022->g_568 = &p_3022->g_535)) != &l_532) | (0xDDC902CCL <= ((l_514 <= ((((*p_3022->g_109) = (safe_mul_func_int8_t_s_s((l_573 == ((safe_add_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(0x0CL, 7)), (((*l_559) |= (l_514 , p_40)) && p_36))) | 0UL), (**p_3022->g_84))) , (void*)0)), p_36))) , p_3022->g_488) != p_3022->g_112)) > 0L)))))
                    { /* block id: 297 */
                        --l_583;
                        (*p_3022->g_586) = (*p_3022->g_457);
                        return p_40;
                    }
                    else
                    { /* block id: 301 */
                        (*l_563) = (void*)0;
                    }
                    for (p_3022->g_398.f1 = 0; (p_3022->g_398.f1 <= 2); p_3022->g_398.f1 += 1)
                    { /* block id: 306 */
                        int i, j;
                        p_37 = (((*p_3022->g_85) || ((((safe_sub_func_uint64_t_u_u(p_40, ((p_3022->g_589 , ((*p_3022->g_109) > (safe_div_func_int8_t_s_s((((((p_3022->g_112 , (((p_37 , ((*l_559) = (p_38 || p_38))) != (safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((safe_lshift_func_int16_t_s_u(((*p_3022->g_432) >= (-1L)), l_519[4])))), 8))) && p_38)) <= 0x03DD11BCL) ^ p_36) == p_3022->g_100[7].f0) || (*p_3022->g_432)), l_519[5])))) >= 0x26L))) != l_514) && (-6L)) ^ p_38)) != p_37);
                        if (p_38)
                            continue;
                        (*l_563) = &p_37;
                    }
                }
                for (l_541 = 2; (l_541 <= 9); l_541 += 1)
                { /* block id: 315 */
                    int32_t **l_614 = &p_3022->g_215[0];
                    int i;
                    p_3022->g_527[l_541] = &l_513[3][3];
                    for (p_3022->g_411 = 2; (p_3022->g_411 <= 6); p_3022->g_411 += 1)
                    { /* block id: 319 */
                        int64_t l_599[3][2][7] = {{{(-10L),1L,0x19511C74272436EFL,0x443CEA157B1E161BL,0x67313A5DB53C642AL,0x67313A5DB53C642AL,0x443CEA157B1E161BL},{(-10L),1L,0x19511C74272436EFL,0x443CEA157B1E161BL,0x67313A5DB53C642AL,0x67313A5DB53C642AL,0x443CEA157B1E161BL}},{{(-10L),1L,0x19511C74272436EFL,0x443CEA157B1E161BL,0x67313A5DB53C642AL,0x67313A5DB53C642AL,0x443CEA157B1E161BL},{(-10L),1L,0x19511C74272436EFL,0x443CEA157B1E161BL,0x67313A5DB53C642AL,0x67313A5DB53C642AL,0x443CEA157B1E161BL}},{{(-10L),1L,0x19511C74272436EFL,0x443CEA157B1E161BL,0x67313A5DB53C642AL,0x67313A5DB53C642AL,0x443CEA157B1E161BL},{(-10L),1L,0x19511C74272436EFL,0x443CEA157B1E161BL,0x67313A5DB53C642AL,0x67313A5DB53C642AL,0x443CEA157B1E161BL}}};
                        int i, j, k;
                        l_517[3][2][1] = ((safe_rshift_func_uint16_t_u_u(l_599[1][0][0], 4)) && ((safe_mod_func_uint64_t_u_u((((~(safe_rshift_func_uint8_t_u_s(((safe_unary_minus_func_uint32_t_u(((*p_3022->g_109) == 0x0484L))) && l_504), ((*l_559) &= (-3L))))) < (safe_lshift_func_uint16_t_u_s((*p_3022->g_109), 2))) >= (((l_607 == (void*)0) != (safe_mod_func_int16_t_s_s(((p_39 != (*p_3022->g_109)) == 0x4B04L), 0x5FE3L))) , 0x575AL)), p_40)) ^ 3L));
                        if (l_565)
                            break;
                        p_3022->g_611[1][3][0]++;
                    }
                    if (p_36)
                        break;
                    (*l_614) = &l_517[3][2][1];
                    for (l_515 = 6; (l_515 >= 0); l_515 -= 1)
                    { /* block id: 329 */
                        int32_t l_625 = 0L;
                        uint8_t **l_633 = (void*)0;
                        int i, j;
                        p_39 = ((((l_513[0][4] = ((safe_add_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((((void*)0 == &p_3022->g_432) | (0L > 0x3CB1C6FEBEF5EBBEL)), 0)), ((((l_517[3][2][1] , p_3022->g_621) , ((safe_rshift_func_int8_t_s_s((l_515 == ((*p_3022->g_432) && l_624)), p_38)) , p_40)) && p_39) , 0L))) > (*p_3022->g_432)), p_39)) , p_37)) && l_625) , l_582) | l_517[0][5][0]);
                        p_37 ^= 0x732BDFBEL;
                        p_37 |= (l_513[0][3] || (safe_mod_func_uint16_t_u_u(((6L >= (0x7B271F1CE0004E5EL || (((safe_add_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u((0L == (*p_3022->g_432)), (l_632 >= (l_633 != &p_3022->g_85)))) != 0L), 0x7AD84D7FL)) ^ p_40) | (*p_3022->g_109)))) | (*p_3022->g_432)), l_513[0][4])));
                    }
                }
            }
            l_570[2] = &l_532;
        }
        for (p_3022->g_139 = 0; (p_3022->g_139 <= 5); p_3022->g_139 += 1)
        { /* block id: 341 */
            int16_t *l_646 = &p_3022->g_334[0];
            int32_t l_663 = (-8L);
            int32_t *l_666[8][6] = {{&l_517[3][2][1],&l_517[3][2][1],&l_517[3][2][1],&l_517[3][2][1],&l_517[3][2][1],&l_517[3][2][1]},{&l_517[3][2][1],&l_517[3][2][1],&l_517[3][2][1],&l_517[3][2][1],&l_517[3][2][1],&l_517[3][2][1]},{&l_517[3][2][1],&l_517[3][2][1],&l_517[3][2][1],&l_517[3][2][1],&l_517[3][2][1],&l_517[3][2][1]},{&l_517[3][2][1],&l_517[3][2][1],&l_517[3][2][1],&l_517[3][2][1],&l_517[3][2][1],&l_517[3][2][1]},{&l_517[3][2][1],&l_517[3][2][1],&l_517[3][2][1],&l_517[3][2][1],&l_517[3][2][1],&l_517[3][2][1]},{&l_517[3][2][1],&l_517[3][2][1],&l_517[3][2][1],&l_517[3][2][1],&l_517[3][2][1],&l_517[3][2][1]},{&l_517[3][2][1],&l_517[3][2][1],&l_517[3][2][1],&l_517[3][2][1],&l_517[3][2][1],&l_517[3][2][1]},{&l_517[3][2][1],&l_517[3][2][1],&l_517[3][2][1],&l_517[3][2][1],&l_517[3][2][1],&l_517[3][2][1]}};
            int i, j;
            l_514 = (safe_add_func_int32_t_s_s((safe_mul_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(((~4294967289UL) || (l_513[0][4] ^= (safe_mod_func_uint32_t_u_u((((((safe_add_func_int64_t_s_s((safe_add_func_int64_t_s_s((((*l_646) = p_37) != p_36), (((safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(p_3022->g_7, (safe_rshift_func_int8_t_s_u((safe_add_func_int8_t_s_s((l_517[3][2][1] == p_3022->g_112), (~(((safe_lshift_func_uint16_t_u_u(((void*)0 == &l_555), (safe_lshift_func_int8_t_s_s((((*p_3022->g_85) = ((p_3022->g_664[0] = (((safe_sub_func_uint64_t_u_u((safe_sub_func_int16_t_s_s(((*p_3022->g_432) , p_3022->g_608), 0x8973L)), 0xC7D419050F7D272BL)) || 0x6BL) , l_663)) , (*p_3022->g_85))) <= l_663), 0)))) > 0x3FD6L) | l_517[0][0][3])))), 5)))), p_39)) ^ p_36) , p_40))), (-6L))) , 0L) , l_519[5]) | p_3022->g_29) == p_40), 4L)))), 0x7C82L)) != p_40), p_37)), 0xCA709265L));
            p_39 = 0x054AE15AL;
            for (p_3022->g_608 = 3; (p_3022->g_608 >= 0); p_3022->g_608 -= 1)
            { /* block id: 350 */
                int32_t l_671 = 1L;
                int32_t l_672[3][2] = {{5L,(-9L)},{5L,(-9L)},{5L,(-9L)}};
                uint8_t l_677 = 8UL;
                int i, j;
                l_513[5][1] = ((((*p_3022->g_586) = (*p_3022->g_457)) != ((**p_3022->g_84) , (void*)0)) , ((safe_mod_func_uint16_t_u_u(((l_672[1][0] &= (safe_add_func_int16_t_s_s(p_38, ((*l_646) |= l_671)))) < (safe_div_func_int64_t_s_s((p_3022->g_678 = (p_3022->g_112 = (safe_lshift_func_uint8_t_u_s((l_677 & ((((p_39 != p_37) == p_37) | l_519[5]) | p_37)), 4)))), p_3022->g_22))), 0x0D23L)) & 65535UL));
                for (l_663 = 3; (l_663 >= 0); l_663 -= 1)
                { /* block id: 359 */
                    uint8_t ***l_688 = &p_3022->g_84;
                    uint8_t ****l_689 = &l_573;
                    l_672[1][0] = (p_37 && (safe_div_func_int16_t_s_s((p_36 <= (!(((safe_unary_minus_func_int8_t_s((safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_u(((((p_3022->g_22 , &l_504) != (void*)0) , (((((*l_689) = l_688) == l_690) | (*p_3022->g_432)) || 2UL)) == 1L), l_691)) | 2UL) == p_40), p_36)), p_3022->g_222)))) <= 1UL) & 65535UL))), p_39)));
                }
                for (l_504 = 0; (l_504 <= 3); l_504 += 1)
                { /* block id: 365 */
                    int8_t l_694 = 1L;
                    uint8_t ****l_700 = &l_573;
                    uint8_t *****l_699 = &l_700;
                    int32_t l_707 = (-1L);
                    uint16_t *l_708[8] = {&p_3022->g_557,&p_3022->g_22,&p_3022->g_557,&p_3022->g_557,&p_3022->g_22,&p_3022->g_557,&p_3022->g_557,&p_3022->g_22};
                    int i;
                    for (p_3022->g_678 = 0; p_3022->g_678 < 6; p_3022->g_678 += 1)
                    {
                        p_3022->g_533[p_3022->g_678] = (void*)0;
                    }
                    if (l_517[3][2][1])
                        break;
                    p_39 = (1L ^ (((*p_3022->g_432) = (p_38 , ((safe_mul_func_uint16_t_u_u((l_514 = (l_694 |= (*p_3022->g_109))), (0UL >= ((l_517[6][6][2] = ((safe_mul_func_uint16_t_u_u((l_672[1][0] = ((safe_add_func_int64_t_s_s((((((*l_699) = &l_573) != (void*)0) && 0x05C1L) >= (((safe_div_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((((safe_div_func_uint64_t_u_u((*p_3022->g_432), (-8L))) ^ (*p_3022->g_109)) , 0UL), p_38)) < 65528UL), p_38)) , 0xE0L) && 253UL)), l_707)) == 0x2A02CE9C009E7360L)), p_38)) >= (*p_3022->g_432))) & l_691)))) || p_3022->g_115))) ^ 1L));
                    if (l_672[1][0])
                        continue;
                }
            }
        }
    }
    else
    { /* block id: 379 */
        int16_t *l_710[8] = {&p_3022->g_334[1],&p_3022->g_334[1],&p_3022->g_334[1],&p_3022->g_334[1],&p_3022->g_334[1],&p_3022->g_334[1],&p_3022->g_334[1],&p_3022->g_334[1]};
        int32_t l_714[6];
        union U1 ***l_717[8][3][1] = {{{&l_489},{&l_489},{&l_489}},{{&l_489},{&l_489},{&l_489}},{{&l_489},{&l_489},{&l_489}},{{&l_489},{&l_489},{&l_489}},{{&l_489},{&l_489},{&l_489}},{{&l_489},{&l_489},{&l_489}},{{&l_489},{&l_489},{&l_489}},{{&l_489},{&l_489},{&l_489}}};
        int32_t l_836[5] = {0x5EB16C7FL,0x5EB16C7FL,0x5EB16C7FL,0x5EB16C7FL,0x5EB16C7FL};
        volatile int32_t *l_858 = &p_3022->g_6[4];
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_714[i] = 8L;
lbl_739:
        (*p_3022->g_225) = (0L > (l_519[5] != (p_40 == (*p_3022->g_109))));
        for (p_3022->g_32 = 2; (p_3022->g_32 <= 9); p_3022->g_32 += 1)
        { /* block id: 383 */
            union U0 *l_709 = &p_3022->g_398;
            int16_t **l_711 = &l_710[7];
            union U1 ****l_718 = &l_717[3][2][0];
            int32_t l_719[10][10] = {{1L,(-1L),0x675082A6L,8L,0x2DFBD9E0L,0x75ACD4CEL,1L,(-3L),0x5ED77033L,0x5ED77033L},{1L,(-1L),0x675082A6L,8L,0x2DFBD9E0L,0x75ACD4CEL,1L,(-3L),0x5ED77033L,0x5ED77033L},{1L,(-1L),0x675082A6L,8L,0x2DFBD9E0L,0x75ACD4CEL,1L,(-3L),0x5ED77033L,0x5ED77033L},{1L,(-1L),0x675082A6L,8L,0x2DFBD9E0L,0x75ACD4CEL,1L,(-3L),0x5ED77033L,0x5ED77033L},{1L,(-1L),0x675082A6L,8L,0x2DFBD9E0L,0x75ACD4CEL,1L,(-3L),0x5ED77033L,0x5ED77033L},{1L,(-1L),0x675082A6L,8L,0x2DFBD9E0L,0x75ACD4CEL,1L,(-3L),0x5ED77033L,0x5ED77033L},{1L,(-1L),0x675082A6L,8L,0x2DFBD9E0L,0x75ACD4CEL,1L,(-3L),0x5ED77033L,0x5ED77033L},{1L,(-1L),0x675082A6L,8L,0x2DFBD9E0L,0x75ACD4CEL,1L,(-3L),0x5ED77033L,0x5ED77033L},{1L,(-1L),0x675082A6L,8L,0x2DFBD9E0L,0x75ACD4CEL,1L,(-3L),0x5ED77033L,0x5ED77033L},{1L,(-1L),0x675082A6L,8L,0x2DFBD9E0L,0x75ACD4CEL,1L,(-3L),0x5ED77033L,0x5ED77033L}};
            int32_t **l_720[3][8] = {{&p_3022->g_215[3],(void*)0,&p_3022->g_215[0],(void*)0,&p_3022->g_215[3],&p_3022->g_215[3],(void*)0,&p_3022->g_215[0]},{&p_3022->g_215[3],(void*)0,&p_3022->g_215[0],(void*)0,&p_3022->g_215[3],&p_3022->g_215[3],(void*)0,&p_3022->g_215[0]},{&p_3022->g_215[3],(void*)0,&p_3022->g_215[0],(void*)0,&p_3022->g_215[3],&p_3022->g_215[3],(void*)0,&p_3022->g_215[0]}};
            int32_t ***l_721 = &l_720[2][5];
            uint32_t l_776[8];
            uint8_t *l_793 = (void*)0;
            uint32_t l_795 = 4294967295UL;
            int32_t l_812 = 0x42E91D05L;
            uint32_t l_855 = 0x99B25DABL;
            uint32_t l_861 = 4294967287UL;
            int i, j;
            for (i = 0; i < 8; i++)
                l_776[i] = 4294967295UL;
            l_709 = l_709;
            if (((p_37 , (((&p_3022->g_665[7][1] != ((*l_721) = (((((((*l_711) = l_710[5]) == (void*)0) , ((safe_rshift_func_uint16_t_u_s((*p_3022->g_109), 9)) ^ p_40)) , (l_714[0] > ((*l_607) = ((safe_add_func_uint8_t_u_u(((((*l_718) = l_717[7][0][0]) == (void*)0) || 0x29DAL), l_719[8][7])) != p_39)))) , l_714[0]) , l_720[2][4]))) | 0x60L) | p_39)) < l_714[0]))
            { /* block id: 389 */
                return (*p_3022->g_109);
            }
            else
            { /* block id: 391 */
                int16_t l_737 = 0x7449L;
                int32_t l_777[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_777[i] = 8L;
                for (p_3022->g_110 = 0; (p_3022->g_110 <= 9); p_3022->g_110 += 1)
                { /* block id: 394 */
                    union U1 ****l_722 = (void*)0;
                    int32_t l_738 = 0x2C9B1B97L;
                    uint32_t l_740[9][7][4] = {{{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL}},{{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL}},{{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL}},{{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL}},{{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL}},{{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL}},{{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL}},{{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL}},{{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL},{0x16AEEF8DL,0x31075EBBL,0x3C1E7CEDL,4294967295UL}}};
                    int i, j, k;
                    if (((l_722 != (((void*)0 != &p_36) , &p_3022->g_457)) != (!(safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_int16_t_s(((((p_3022->g_728[0] , l_714[5]) == (safe_sub_func_int8_t_s_s(p_40, (p_37 , ((safe_mul_func_uint8_t_u_u((*p_3022->g_85), 0xC1L)) != 1UL))))) , l_714[3]) , p_37))), 3)), 0x70L)))))
                    { /* block id: 395 */
                        union U1 *l_733 = &p_3022->g_100[7];
                        int32_t l_736 = 0x58ED10B7L;
                        int i, j;
                        (*l_489) = l_733;
                        p_39 &= (safe_sub_func_int8_t_s_s(l_736, l_737));
                        l_738 ^= p_40;
                        if (p_3022->g_32)
                            goto lbl_739;
                    }
                    else
                    { /* block id: 400 */
                        int i, j;
                        p_3022->g_665[p_3022->g_32][p_3022->g_32] = (void*)0;
                        p_37 ^= ((~(&p_3022->g_458[6][1][0] == &p_3022->g_458[4][0][0])) || 2L);
                        if (l_740[1][0][2])
                            break;
                        if (l_738)
                            goto lbl_739;
                    }
                    for (p_3022->g_95 = 0; (p_3022->g_95 <= 3); p_3022->g_95 += 1)
                    { /* block id: 408 */
                        l_714[3] = (~((void*)0 == &p_3022->g_432));
                    }
                }
                p_3022->g_523[1] = &p_39;
                if (l_737)
                    break;
                if ((safe_unary_minus_func_int64_t_s(p_3022->g_334[0])))
                { /* block id: 414 */
                    uint32_t l_747 = 4294967295UL;
                    int32_t l_760[7] = {0L,1L,0L,0L,1L,0L,0L};
                    uint32_t *l_761 = &p_3022->g_275;
                    uint8_t *l_774 = (void*)0;
                    uint8_t *l_775[9][10][2] = {{{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115}},{{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115}},{{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115}},{{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115}},{{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115}},{{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115}},{{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115}},{{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115}},{{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115},{&p_3022->g_115,&p_3022->g_115}}};
                    int i, j, k;
                    for (p_3022->g_462.f4 = 5; (p_3022->g_462.f4 >= 0); p_3022->g_462.f4 -= 1)
                    { /* block id: 417 */
                        int i;
                        p_39 &= (((safe_add_func_int64_t_s_s(1L, (safe_mul_func_int8_t_s_s((safe_unary_minus_func_int32_t_s((l_747 <= (++(*p_3022->g_109))))), l_714[0])))) >= (+0xA3L)) > ((*p_3022->g_432) = (safe_rshift_func_int8_t_s_s(l_691, 7))));
                        return l_747;
                    }
                    if (p_40)
                        continue;
                    l_760[4] ^= (safe_mul_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((((safe_add_func_uint64_t_u_u((--(*p_3022->g_432)), (((0x6FD63176L | ((*l_761)--)) , &p_37) == &p_39))) , (((safe_lshift_func_uint8_t_u_s((l_777[0] = ((safe_mul_func_uint8_t_u_u((p_3022->g_608 ^ ((((((((safe_div_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(0L, (((*p_3022->g_85) > (((l_737 , (p_3022->g_115 = 1UL)) & ((void*)0 == l_761)) >= (*p_3022->g_432))) && p_36))), l_513[0][4])) & p_39) > p_36) , 0xD4522A3355B7909DL) != (*p_3022->g_432)) || p_37) <= 0x4E6BCC7A16BDBD07L) | l_776[0])), (-5L))) , 0x2CL)), 0)) , p_40) , 1L)) , p_39), 0x1F2B79814D4BE455L)), 0x47D0L));
                }
                else
                { /* block id: 429 */
                    uint8_t *l_794 = &p_3022->g_115;
                    uint32_t *l_796 = (void*)0;
                    uint32_t *l_797 = &p_3022->g_798;
                    int64_t l_799[6] = {(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)};
                    uint32_t l_813 = 7UL;
                    int32_t l_814 = (-2L);
                    int i;
                    if (((l_737 , ((*l_797) |= (p_3022->g_778 , ((safe_sub_func_uint64_t_u_u((0xBF8CL | (safe_div_func_uint32_t_u_u(((0xA0382FBFL || l_714[0]) == (safe_mul_func_uint8_t_u_u(p_36, (safe_rshift_func_uint8_t_u_s(((*l_794) = ((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((((*p_3022->g_109) <= (((**l_573) != l_793) || p_39)) < (*p_3022->g_432)), 7)), (**p_3022->g_84))), p_37)) || (-7L))), p_37))))), p_36))), l_795)) >= 1UL)))) , l_799[4]))
                    { /* block id: 432 */
                        int32_t *l_800 = (void*)0;
                        uint32_t *l_801[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        if (p_40)
                            break;
                        (*p_3022->g_167) |= (l_714[1] = ((l_802 = (p_36 , (l_800 != ((p_40 <= 0x4E4DL) , (void*)0)))) <= (safe_lshift_func_uint16_t_u_u((!p_40), (((safe_rshift_func_uint8_t_u_u((0UL >= ((safe_rshift_func_int16_t_s_u((safe_div_func_uint16_t_u_u(((((*l_607) = (l_709 == l_811)) | p_40) | p_37), (*p_3022->g_109))), l_812)) , l_813)), 5)) <= p_38) , 0UL)))));
                        l_814 = p_40;
                        if (p_38)
                            continue;
                    }
                    else
                    { /* block id: 440 */
                        int32_t *l_815 = &l_719[8][7];
                        l_815 = &p_37;
                    }
                }
            }
            for (p_3022->g_462.f0 = 6; (p_3022->g_462.f0 >= 0); p_3022->g_462.f0 -= 1)
            { /* block id: 447 */
                int64_t l_851[6];
                int32_t l_852 = 0x70925D93L;
                int32_t l_853[9] = {0x799B4FD5L,7L,0x799B4FD5L,0x799B4FD5L,7L,0x799B4FD5L,0x799B4FD5L,7L,0x799B4FD5L};
                int32_t *l_859 = &l_719[8][7];
                int i;
                for (i = 0; i < 6; i++)
                    l_851[i] = (-7L);
                for (p_3022->g_398.f1 = 2; (p_3022->g_398.f1 >= 0); p_3022->g_398.f1 -= 1)
                { /* block id: 450 */
                    int8_t l_837[7][9][4] = {{{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL}},{{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL}},{{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL}},{{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL}},{{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL}},{{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL}},{{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL},{1L,0x5AL,(-1L),0x5AL}}};
                    int32_t l_854[10] = {1L,1L,1L,1L,1L,1L,1L,1L,1L,1L};
                    int i, j, k;
                    for (p_3022->g_52.f1 = 7; (p_3022->g_52.f1 >= 0); p_3022->g_52.f1 -= 1)
                    { /* block id: 453 */
                        int32_t *l_838[9][6][3] = {{{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7}},{{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7}},{{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7}},{{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7}},{{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7}},{{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7}},{{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7}},{{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7}},{{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7},{&p_3022->g_664[0],&p_3022->g_664[0],&p_3022->g_7}}};
                        int i, j, k;
                        p_39 &= ((((l_776[p_3022->g_52.f1] < (--(*p_3022->g_432))) <= (l_714[0] = (safe_sub_func_uint32_t_u_u(1UL, p_3022->g_820)))) < ((((safe_lshift_func_int8_t_s_s(((p_3022->g_823 = l_555) != &p_3022->g_798), 7)) || (safe_sub_func_uint16_t_u_u((safe_add_func_int16_t_s_s(p_38, ((**l_711) = (safe_add_func_int16_t_s_s(p_38, (safe_sub_func_uint8_t_u_u(((0x1AL < (safe_mod_func_int64_t_s_s((safe_rshift_func_int8_t_s_s(((*l_607) ^= 0x07L), p_38)), p_3022->g_222))) , p_36), l_836[3]))))))), l_837[0][3][1]))) , (void*)0) == l_838[1][1][2])) >= p_36);
                        l_851[3] = ((p_40 >= (safe_rshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((safe_add_func_int16_t_s_s(p_3022->g_6[0], ((p_39 = 0x0B87847EL) < 0x46DC4512L))) || ((safe_div_func_uint64_t_u_u(0x043F969358464287L, l_836[3])) >= (safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((*p_3022->g_109) = (p_40 ^ (*p_3022->g_432))), 0)), 0x3F68L)))), p_3022->g_664[0])), 6))) && l_691);
                        --l_855;
                        if (p_3022->g_222)
                            goto lbl_921;
                        if (l_519[2])
                            continue;
                    }
                    for (p_36 = 1; (p_36 <= 5); p_36 += 1)
                    { /* block id: 468 */
                        int i;
                        if (p_37)
                            goto lbl_739;
                        l_858 = &p_3022->g_6[(p_3022->g_398.f1 + 1)];
                    }
                    for (p_37 = 2; (p_37 >= 0); p_37 -= 1)
                    { /* block id: 474 */
                        int i;
                        return l_776[(p_3022->g_462.f0 + 1)];
                    }
                    l_859 = &p_39;
                }
                (*p_3022->g_454) = 0L;
                for (p_3022->g_115 = 2; (p_3022->g_115 <= 6); p_3022->g_115 += 1)
                { /* block id: 482 */
                    for (p_3022->g_275 = 0; (p_3022->g_275 <= 6); p_3022->g_275 += 1)
                    { /* block id: 485 */
                        uint16_t l_860 = 4UL;
                        return l_860;
                    }
                }
                l_513[0][4] = l_861;
            }
        }
        if (p_3022->g_112)
            goto lbl_890;
    }
lbl_890:
    (*l_889) = ((l_513[0][4] == (l_555 != l_864)) , ((safe_lshift_func_int16_t_s_u(((*l_888) = (safe_lshift_func_int16_t_s_s((!(safe_rshift_func_int8_t_s_s((safe_div_func_uint32_t_u_u(((p_36 < (p_3022->g_96 , (((((safe_add_func_int32_t_s_s((-1L), ((safe_mod_func_uint8_t_u_u(((**p_3022->g_84) &= (((--(*p_3022->g_432)) <= p_3022->g_411) <= (l_513[3][2] = (safe_add_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u((safe_mul_func_int8_t_s_s(7L, (safe_mul_func_uint8_t_u_u(0x8BL, 3L)))))), 0UL))))), l_469)) && p_38))) < p_40) != l_519[5]) >= p_39) == p_39))) || l_513[0][4]), l_887)), 4))), p_38))), 1)) , (void*)0));
lbl_921:
    for (p_3022->g_411 = 1; (p_3022->g_411 <= 5); p_3022->g_411 += 1)
    { /* block id: 501 */
        int32_t *l_891 = (void*)0;
        int32_t *l_892 = &p_3022->g_664[0];
        int8_t l_920 = 3L;
        (*l_892) |= (*p_3022->g_167);
        if (p_40)
            continue;
        for (p_3022->g_52.f0 = 4; (p_3022->g_52.f0 >= 1); p_3022->g_52.f0 -= 1)
        { /* block id: 506 */
            int32_t **l_918 = &l_555;
            int i, j;
            (*l_892) = (l_513[p_3022->g_411][p_3022->g_411] < ((*l_892) && (((((safe_mul_func_uint16_t_u_u((((((+p_38) || ((safe_rshift_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((safe_add_func_int16_t_s_s((((safe_mul_func_int16_t_s_s(p_38, (safe_sub_func_int8_t_s_s((p_3022->g_905[4][2] | (l_919 = (p_37 , (safe_add_func_uint32_t_u_u(p_40, (safe_lshift_func_uint8_t_u_u(((safe_div_func_uint64_t_u_u((((safe_sub_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((((safe_sub_func_int8_t_s_s(((((*l_918) = (void*)0) == l_891) <= l_469), (**p_3022->g_84))) , l_513[p_3022->g_411][p_3022->g_411]) || (-1L)), l_513[p_3022->g_411][p_3022->g_411])) && p_38), p_3022->g_112)) && p_39) ^ p_36), 0x1C3F4FA9277193EAL)) >= p_36), l_513[p_3022->g_411][p_3022->g_411]))))))), p_40)))) , p_38) || (*p_3022->g_432)), l_513[p_3022->g_411][p_3022->g_411])), p_39)) ^ 0xFD08DBF3L), p_39)) <= l_920)) <= p_36) , 0x23B2DAF2L) & 0x77AD9449L), (-1L))) <= (*p_3022->g_85)) >= p_40) , p_38) >= (*p_3022->g_432))));
            (*l_889) = &p_39;
            (*l_889) = l_892;
        }
    }
    for (p_3022->g_778.f2 = 2; (p_3022->g_778.f2 >= 0); p_3022->g_778.f2 -= 1)
    { /* block id: 517 */
        union U1 *l_931[7][10][3] = {{{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999}},{{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999}},{{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999}},{{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999}},{{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999}},{{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999}},{{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999},{(void*)0,&p_3022->g_954,&p_3022->g_999}}};
        int32_t *l_1011 = &l_919;
        int16_t l_1040 = 2L;
        uint8_t ****l_1070 = &l_573;
        int32_t l_1123 = 0L;
        int32_t l_1124 = 0x3A2EE3F8L;
        int32_t l_1162 = 0x67513973L;
        union U1 **l_1244[1][5][6] = {{{&l_1008[2],&l_1008[0],&l_1008[2],&l_1008[2],&l_1008[0],&l_1008[2]},{&l_1008[2],&l_1008[0],&l_1008[2],&l_1008[2],&l_1008[0],&l_1008[2]},{&l_1008[2],&l_1008[0],&l_1008[2],&l_1008[2],&l_1008[0],&l_1008[2]},{&l_1008[2],&l_1008[0],&l_1008[2],&l_1008[2],&l_1008[0],&l_1008[2]},{&l_1008[2],&l_1008[0],&l_1008[2],&l_1008[2],&l_1008[0],&l_1008[2]}}};
        int32_t * volatile l_1291 = (void*)0;/* VOLATILE GLOBAL l_1291 */
        union U0 *l_1329 = &p_3022->g_52;
        int32_t l_1353 = 0x28DB8B8FL;
        uint8_t l_1354 = 0x42L;
        union U0 ***l_1375[4] = {&l_570[2],&l_570[2],&l_570[2],&l_570[2]};
        uint64_t l_1379 = 18446744073709551615UL;
        int16_t **l_1398 = &l_888;
        int16_t l_1412 = (-8L);
        uint64_t l_1426[4] = {0xD39C7DCB37FC77EFL,0xD39C7DCB37FC77EFL,0xD39C7DCB37FC77EFL,0xD39C7DCB37FC77EFL};
        int32_t l_1433 = 0x0B830300L;
        int32_t l_1477[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        int16_t l_1492 = 0x5C72L;
        uint16_t *l_1535 = &p_3022->g_22;
        union U0 **l_1567 = (void*)0;
        uint16_t l_1573 = 0xADD7L;
        union U1 ****l_1581 = &l_1279;
        int8_t *l_1614 = &p_3022->g_1270[1][4][3];
        uint32_t l_1627 = 4294967292UL;
        union U1 ***l_1659[6][3][3] = {{{&p_3022->g_458[6][2][2],&p_3022->g_458[6][2][2],&p_3022->g_458[4][1][0]},{&p_3022->g_458[6][2][2],&p_3022->g_458[6][2][2],&p_3022->g_458[4][1][0]},{&p_3022->g_458[6][2][2],&p_3022->g_458[6][2][2],&p_3022->g_458[4][1][0]}},{{&p_3022->g_458[6][2][2],&p_3022->g_458[6][2][2],&p_3022->g_458[4][1][0]},{&p_3022->g_458[6][2][2],&p_3022->g_458[6][2][2],&p_3022->g_458[4][1][0]},{&p_3022->g_458[6][2][2],&p_3022->g_458[6][2][2],&p_3022->g_458[4][1][0]}},{{&p_3022->g_458[6][2][2],&p_3022->g_458[6][2][2],&p_3022->g_458[4][1][0]},{&p_3022->g_458[6][2][2],&p_3022->g_458[6][2][2],&p_3022->g_458[4][1][0]},{&p_3022->g_458[6][2][2],&p_3022->g_458[6][2][2],&p_3022->g_458[4][1][0]}},{{&p_3022->g_458[6][2][2],&p_3022->g_458[6][2][2],&p_3022->g_458[4][1][0]},{&p_3022->g_458[6][2][2],&p_3022->g_458[6][2][2],&p_3022->g_458[4][1][0]},{&p_3022->g_458[6][2][2],&p_3022->g_458[6][2][2],&p_3022->g_458[4][1][0]}},{{&p_3022->g_458[6][2][2],&p_3022->g_458[6][2][2],&p_3022->g_458[4][1][0]},{&p_3022->g_458[6][2][2],&p_3022->g_458[6][2][2],&p_3022->g_458[4][1][0]},{&p_3022->g_458[6][2][2],&p_3022->g_458[6][2][2],&p_3022->g_458[4][1][0]}},{{&p_3022->g_458[6][2][2],&p_3022->g_458[6][2][2],&p_3022->g_458[4][1][0]},{&p_3022->g_458[6][2][2],&p_3022->g_458[6][2][2],&p_3022->g_458[4][1][0]},{&p_3022->g_458[6][2][2],&p_3022->g_458[6][2][2],&p_3022->g_458[4][1][0]}}};
        int32_t l_1686[9][6][4] = {{{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L}},{{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L}},{{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L}},{{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L}},{{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L}},{{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L}},{{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L}},{{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L}},{{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L},{0x3B923481L,0x0A197263L,0x11127AE9L,0L}}};
        uint32_t l_1773[9][5][3] = {{{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL}},{{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL}},{{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL}},{{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL}},{{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL}},{{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL}},{{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL}},{{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL}},{{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL},{4294967295UL,2UL,4UL}}};
        int32_t l_1798 = (-1L);
        uint16_t l_1852 = 0x7E9EL;
        int32_t l_1881 = 0x3E87C8E5L;
        int32_t l_1896 = 0x67883AD4L;
        uint64_t l_1927 = 0x1EE6E0D4763B0281L;
        int i, j, k;
        (1 + 1);
    }
    return (*p_3022->g_1823);
}


/* ------------------------------------------ */
/* 
 * reads : p_3022->g_52.f0 p_3022->g_466
 * writes: p_3022->g_52.f0 p_3022->g_102
 */
int32_t  func_41(int32_t  p_42, uint16_t  p_43, uint32_t  p_44, uint8_t * p_45, struct S2 * p_3022)
{ /* block id: 233 */
    for (p_3022->g_52.f0 = 5; (p_3022->g_52.f0 == (-27)); p_3022->g_52.f0 = safe_sub_func_int8_t_s_s(p_3022->g_52.f0, 5))
    { /* block id: 236 */
        union U1 *l_465[8] = {&p_3022->g_462,&p_3022->g_462,&p_3022->g_462,&p_3022->g_462,&p_3022->g_462,&p_3022->g_462,&p_3022->g_462,&p_3022->g_462};
        int i;
        (*p_3022->g_466) = l_465[0];
    }
    return p_43;
}


/* ------------------------------------------ */
/* 
 * reads : p_3022->g_411 p_3022->g_100.f0 p_3022->g_109 p_3022->g_110 p_3022->g_10 p_3022->g_334 p_3022->g_13 p_3022->g_84 p_3022->g_85 p_3022->g_32 p_3022->g_275 p_3022->g_457 p_3022->g_462
 * writes: p_3022->g_432 p_3022->g_110 p_3022->g_24 p_3022->g_32 p_3022->g_275 p_3022->g_458 p_3022->g_52.f1
 */
union U1  func_46(int32_t  p_47, uint16_t  p_48, int32_t  p_49, int32_t  p_50, struct S2 * p_3022)
{ /* block id: 203 */
    int32_t l_404 = 0L;
    uint64_t *l_429 = &p_3022->g_24;
    uint64_t **l_430 = (void*)0;
    uint64_t **l_431 = (void*)0;
    uint64_t l_433 = 18446744073709551615UL;
    int16_t l_434 = 7L;
    int32_t l_435[7][1][2] = {{{0x3BAA1FF9L,0x3BAA1FF9L}},{{0x3BAA1FF9L,0x3BAA1FF9L}},{{0x3BAA1FF9L,0x3BAA1FF9L}},{{0x3BAA1FF9L,0x3BAA1FF9L}},{{0x3BAA1FF9L,0x3BAA1FF9L}},{{0x3BAA1FF9L,0x3BAA1FF9L}},{{0x3BAA1FF9L,0x3BAA1FF9L}}};
    int i, j, k;
    l_435[5][0][1] ^= (l_404 != (safe_mod_func_int16_t_s_s(((safe_div_func_int64_t_s_s((((*p_3022->g_109) |= (l_404 || (safe_rshift_func_int8_t_s_s(p_3022->g_411, (((((safe_sub_func_uint16_t_u_u(0xFC81L, ((safe_sub_func_int8_t_s_s(l_404, (safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((((safe_add_func_int32_t_s_s(0x784F9DE6L, (l_404 , (safe_rshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s(((safe_unary_minus_func_int64_t_s((safe_mul_func_int8_t_s_s((l_429 == (p_3022->g_432 = &p_3022->g_24)), 0x00L)))) != 18446744073709551608UL), 9UL)), p_50))))) && p_47) , l_433), l_404)), 3L)))) & p_3022->g_100[7].f0))) == p_47) == p_48) && l_433) > l_434))))) || l_433), p_3022->g_10)) ^ p_3022->g_334[0]), p_3022->g_13[4])));
    for (p_47 = 5; (p_47 >= 0); p_47 -= 1)
    { /* block id: 209 */
        uint32_t l_440 = 1UL;
        int32_t l_451 = 2L;
        int32_t l_452 = (-7L);
        int32_t *l_455 = &p_3022->g_52.f1;
        int32_t l_456 = 0x3E34E2D2L;
        int i;
        l_456 &= (l_452 ^= ((safe_rshift_func_uint8_t_u_s((l_451 |= ((*p_3022->g_85) = ((l_440 ^ ((((**p_3022->g_84) != ((void*)0 == &p_3022->g_222)) == (safe_mod_func_int64_t_s_s((l_404 = l_404), (l_435[5][0][1] = 0x4032C855293F3C21L)))) > 0x0FA2B4C9L)) & ((((*p_3022->g_109)--) == (p_48 = p_3022->g_10)) <= (safe_add_func_uint64_t_u_u(((*l_429) = (safe_rshift_func_int16_t_s_s(((safe_add_func_int16_t_s_s(((((void*)0 == &l_429) ^ l_440) == p_50), 7L)) == l_440), 5))), p_49)))))), l_440)) | p_50));
        for (p_3022->g_275 = 0; (p_3022->g_275 <= 1); p_3022->g_275 += 1)
        { /* block id: 221 */
            int16_t *l_459[7] = {&l_434,&l_434,&l_434,&l_434,&l_434,&l_434,&l_434};
            int32_t l_460 = 0x7168DBB4L;
            int32_t *l_461 = &l_435[5][0][1];
            int i;
            (*p_3022->g_457) = &p_3022->g_102;
            (*l_461) |= ((l_460 = p_48) == (*p_3022->g_109));
            for (l_452 = 0; (l_452 <= 1); l_452 += 1)
            { /* block id: 227 */
                (*l_455) = p_49;
            }
        }
    }
    return p_3022->g_462;
}


/* ------------------------------------------ */
/* 
 * reads : p_3022->g_84 p_3022->g_85 p_3022->g_32 p_3022->g_225 p_3022->g_13 p_3022->g_139 p_3022->g_109 p_3022->g_110 p_3022->g_2 p_3022->g_343 p_3022->g_6 p_3022->g_334 p_3022->g_115 p_3022->g_112 p_3022->g_351 p_3022->g_358 p_3022->g_102 p_3022->g_100 p_3022->g_275 p_3022->g_392 p_3022->g_398
 * writes: p_3022->g_215 p_3022->g_52.f1 p_3022->g_110 p_3022->g_112 p_3022->g_139 p_3022->g_6 p_3022->g_334 p_3022->g_222 p_3022->g_29 p_3022->g_32
 */
uint32_t  func_55(int8_t  p_56, int32_t  p_57, uint32_t  p_58, int32_t  p_59, int32_t  p_60, struct S2 * p_3022)
{ /* block id: 119 */
    int32_t l_220 = (-4L);
    uint32_t *l_221 = &p_3022->g_222;
    uint64_t *l_325 = (void*)0;
    union U1 **l_331 = &p_3022->g_102;
    uint64_t l_341[6];
    int16_t *l_346 = &p_3022->g_334[0];
    int32_t l_352 = (-10L);
    int8_t **l_360 = &p_3022->g_359[6];
    int32_t *l_395 = &p_3022->g_52.f1;
    int32_t *l_400 = &p_3022->g_96;
    int32_t **l_399 = &l_400;
    uint32_t l_403 = 0x6121AF77L;
    int i;
    for (i = 0; i < 6; i++)
        l_341[i] = 0xE840198C85A825F2L;
    if (l_220)
    { /* block id: 120 */
lbl_230:
        p_3022->g_215[3] = &p_59;
        (*p_3022->g_225) = (((void*)0 == l_221) | (safe_lshift_func_uint8_t_u_u((**p_3022->g_84), 5)));
lbl_233:
        for (p_3022->g_110 = 0; (p_3022->g_110 <= 12); ++p_3022->g_110)
        { /* block id: 125 */
            int32_t *l_228 = (void*)0;
            int32_t *l_229[8][10][3] = {{{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]}},{{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]}},{{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]}},{{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]}},{{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]}},{{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]}},{{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]}},{{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]},{&p_3022->g_13[4],(void*)0,&p_3022->g_13[4]}}};
            int i, j, k;
            p_59 = 0x252D0A62L;
        }
    }
    else
    { /* block id: 128 */
        int64_t l_248 = 0x36EF0B126F15CA27L;
        uint8_t *l_249 = &p_3022->g_115;
        uint32_t l_262 = 1UL;
        int32_t l_273 = 0L;
        int8_t *l_289 = &p_3022->g_139;
        int8_t **l_288[9][4][7] = {{{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289},{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289},{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289},{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289}},{{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289},{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289},{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289},{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289}},{{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289},{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289},{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289},{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289}},{{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289},{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289},{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289},{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289}},{{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289},{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289},{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289},{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289}},{{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289},{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289},{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289},{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289}},{{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289},{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289},{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289},{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289}},{{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289},{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289},{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289},{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289}},{{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289},{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289},{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289},{(void*)0,&l_289,&l_289,&l_289,&l_289,&l_289,&l_289}}};
        uint64_t **l_326 = &l_325;
        uint64_t *l_328 = (void*)0;
        uint64_t **l_327 = &l_328;
        union U1 **l_332 = &p_3022->g_102;
        int16_t *l_333[7] = {&p_3022->g_334[0],&p_3022->g_334[0],&p_3022->g_334[0],&p_3022->g_334[0],&p_3022->g_334[0],&p_3022->g_334[0],&p_3022->g_334[0]};
        int i, j, k;
lbl_234:
        if (l_220)
            goto lbl_230;
        for (p_60 = 0; (p_60 < 17); p_60 = safe_add_func_uint32_t_u_u(p_60, 7))
        { /* block id: 132 */
            uint8_t *l_245 = &p_3022->g_115;
            int32_t l_255 = 1L;
            if (l_220)
                goto lbl_233;
            for (p_57 = 5; (p_57 >= 0); p_57 -= 1)
            { /* block id: 136 */
                int32_t l_254[8] = {9L,0x1DC55A09L,9L,9L,0x1DC55A09L,9L,9L,0x1DC55A09L};
                uint16_t l_276 = 7UL;
                int i;
                for (p_3022->g_112 = 0; (p_3022->g_112 <= 5); p_3022->g_112 += 1)
                { /* block id: 139 */
                    if (p_57)
                        goto lbl_234;
                }
                for (p_3022->g_139 = 1; (p_3022->g_139 >= 0); p_3022->g_139 -= 1)
                { /* block id: 144 */
                    int32_t **l_236 = &p_3022->g_215[3];
                    uint32_t *l_274 = &p_3022->g_275;
                    uint8_t *l_285 = &p_3022->g_115;
                    int i;
                    (*l_236) = &p_59;
                    p_3022->g_6[(p_3022->g_139 + 3)] = (safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s((0x54L || p_56), ((((safe_mul_func_int8_t_s_s(((void*)0 != l_245), (safe_lshift_func_int16_t_s_u(l_248, 14)))) ^ (p_60 , ((void*)0 == l_249))) & (safe_rshift_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((p_59 != p_60), l_254[3])) <= p_3022->g_13[3]), 7))) ^ l_254[3]))), l_255));
                }
            }
        }
        (*p_3022->g_343) = (((((*l_327) = ((safe_unary_minus_func_int8_t_s((p_3022->g_139 ^= (l_220 == l_220)))) , ((*l_326) = l_325))) == ((*p_3022->g_109) , &p_3022->g_29)) <= ((safe_lshift_func_int16_t_s_s((p_3022->g_334[0] = ((l_332 = l_331) != &p_3022->g_102)), 6)) < ((safe_add_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s((**p_3022->g_84), 6)), ((safe_div_func_int32_t_s_s(l_220, p_3022->g_2)) , p_58))) , l_341[3]))) | 0x4C5C5D794C9280EBL);
    }
    l_352 = (&p_3022->g_222 == (((safe_mod_func_int32_t_s_s((l_341[5] != (((*l_221) = (p_58 > l_341[3])) | (0x5E5BA5BDBBED5568L != ((p_3022->g_6[3] && 0xA59CL) | ((*l_346) |= l_341[3]))))), ((l_220 = (safe_sub_func_uint32_t_u_u((safe_add_func_int64_t_s_s((0xB6ED1CEA14A77228L >= p_3022->g_110), 0x5D18551CB4CD0745L)), p_3022->g_115))) , p_57))) < p_3022->g_112) , p_3022->g_351[0][1]));
    for (p_56 = 0; (p_56 != 7); p_56 = safe_add_func_uint32_t_u_u(p_56, 5))
    { /* block id: 180 */
        int8_t l_357 = (-9L);
        int32_t **l_367 = (void*)0;
        int32_t *l_369 = &p_3022->g_100[7].f0;
        int32_t **l_368 = &l_369;
        uint8_t ***l_374 = &p_3022->g_84;
        int32_t l_390[1];
        uint32_t l_391 = 4294967291UL;
        int32_t **l_396 = &p_3022->g_215[0];
        int32_t ***l_397 = &l_396;
        int i;
        for (i = 0; i < 1; i++)
            l_390[i] = 0x375D8F51L;
        for (p_3022->g_29 = 0; (p_3022->g_29 < 47); ++p_3022->g_29)
        { /* block id: 183 */
            return l_357;
        }
        if ((((l_352 , ((p_3022->g_358[5][6] == (p_59 , l_360)) , (&p_3022->g_110 == (((safe_sub_func_int32_t_s_s(p_59, ((**l_331) , (+((l_357 & (safe_rshift_func_int16_t_s_s(((((*l_368) = &p_3022->g_96) != l_221) && 0UL), p_3022->g_275))) <= 0x7D0080CFL))))) < 0x623D3B36L) , &p_3022->g_110)))) < 0x69B1L) || p_57))
        { /* block id: 187 */
            return p_60;
        }
        else
        { /* block id: 189 */
            int32_t l_389 = 0x0B85D963L;
            int32_t *l_393[8][1] = {{&p_3022->g_7},{&p_3022->g_7},{&p_3022->g_7},{&p_3022->g_7},{&p_3022->g_7},{&p_3022->g_7},{&p_3022->g_7},{&p_3022->g_7}};
            int32_t **l_394 = &l_393[4][0];
            int i, j;
            (*p_3022->g_392) = (((safe_lshift_func_int8_t_s_s(((((safe_mul_func_uint16_t_u_u(65535UL, (((void*)0 == l_374) | (safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((((((((void*)0 == &l_357) > ((safe_mul_func_uint16_t_u_u((safe_add_func_int16_t_s_s(l_357, (((((((((**p_3022->g_84) = (*p_3022->g_85)) & (safe_mod_func_int64_t_s_s(p_59, (p_3022->g_112 = ((safe_rshift_func_int8_t_s_s((-3L), l_341[2])) ^ 0xA74702C837289CA0L))))) == 0x269EL) , l_389) , l_390[0]) >= 0x1D473A6EL) && 1UL) | (*p_3022->g_109)))), 0x0B81L)) | 0xE3AF6863L)) , p_57) , p_57) <= l_341[5]) | 0xDF0A969437AFC531L) ^ p_60), p_60)), l_391)), p_60))))) <= 0x857FL) <= (*p_3022->g_109)) ^ p_58), 7)) >= l_389) , l_390[0]);
            l_395 = ((*l_394) = l_393[0][0]);
        }
        p_59 = (((((p_3022->g_112 || (((*l_397) = l_396) != &l_395)) , p_3022->g_398) , l_399) == (l_367 = &l_369)) , ((&p_3022->g_334[0] == (void*)0) , p_59));
    }
    l_403 &= (p_58 < l_341[3]);
    return p_60;
}


/* ------------------------------------------ */
/* 
 * reads : p_3022->g_84 p_3022->g_22 p_3022->g_94 p_3022->g_29 p_3022->g_96 p_3022->g_97 p_3022->g_85 p_3022->g_32 p_3022->g_3 p_3022->g_52.f0 p_3022->g_101 p_3022->g_109 p_3022->g_97.f0 p_3022->g_110 p_3022->g_13 p_3022->g_115 p_3022->g_112 p_3022->g_6 p_3022->g_102 p_3022->g_94.f0 p_3022->g_157 p_3022->g_139 p_3022->g_167 p_3022->g_95 p_3022->g_10 p_3022->g_2 p_3022->g_24 p_3022->g_100 p_3022->g_100.f0
 * writes: p_3022->g_84 p_3022->g_22 p_3022->g_95 p_3022->g_102 p_3022->g_32 p_3022->g_115 p_3022->g_112 p_3022->g_6 p_3022->g_110 p_3022->g_139 p_3022->g_96 p_3022->g_52.f0 p_3022->g_215
 */
int8_t  func_67(int32_t  p_68, uint64_t * p_69, struct S2 * p_3022)
{ /* block id: 23 */
    uint8_t ***l_86 = &p_3022->g_84;
    uint8_t **l_87 = &p_3022->g_85;
    uint8_t ***l_88 = &l_87;
    int32_t l_89 = 0x01FE44AAL;
    uint64_t l_90 = 1UL;
    uint16_t *l_93 = &p_3022->g_22;
    uint8_t *l_98 = &p_3022->g_32;
    (*l_88) = func_71(((((*l_88) = func_76(((((p_68 || (((safe_rshift_func_int16_t_s_u(((((*l_86) = p_3022->g_84) != ((*l_88) = l_87)) || (l_89 == l_90)), ((p_3022->g_95 = (l_90 , (255UL > (safe_div_func_uint16_t_u_u(((((((*l_93) |= l_90) , p_3022->g_94) , 1L) || l_90) == p_3022->g_29), l_90))))) && p_68))) , 0L) > p_3022->g_96)) , p_3022->g_97) , l_89) < (*p_3022->g_85)), l_98, p_68, p_3022->g_3, p_3022->g_52.f0, p_3022)) == (void*)0) , p_3022->g_29), p_3022->g_52.f0, p_68, p_68, p_3022);
    return l_90;
}


/* ------------------------------------------ */
/* 
 * reads : p_3022->g_101 p_3022->g_85 p_3022->g_22 p_3022->g_109 p_3022->g_97.f0 p_3022->g_110 p_3022->g_13 p_3022->g_115 p_3022->g_112 p_3022->g_6 p_3022->g_102 p_3022->g_94.f0 p_3022->g_157 p_3022->g_139 p_3022->g_167 p_3022->g_95 p_3022->g_32 p_3022->g_10 p_3022->g_2 p_3022->g_24 p_3022->g_100 p_3022->g_100.f0 p_3022->g_96
 * writes: p_3022->g_102 p_3022->g_32 p_3022->g_22 p_3022->g_115 p_3022->g_112 p_3022->g_6 p_3022->g_110 p_3022->g_139 p_3022->g_96 p_3022->g_52.f0 p_3022->g_215
 */
uint8_t ** func_71(int32_t  p_72, int8_t  p_73, int32_t  p_74, int32_t  p_75, struct S2 * p_3022)
{ /* block id: 31 */
    union U1 *l_99 = &p_3022->g_100[7];
    uint32_t l_105 = 5UL;
    uint16_t *l_108 = &p_3022->g_22;
    int64_t *l_111[3][9][3] = {{{&p_3022->g_112,&p_3022->g_112,&p_3022->g_112},{&p_3022->g_112,&p_3022->g_112,&p_3022->g_112},{&p_3022->g_112,&p_3022->g_112,&p_3022->g_112},{&p_3022->g_112,&p_3022->g_112,&p_3022->g_112},{&p_3022->g_112,&p_3022->g_112,&p_3022->g_112},{&p_3022->g_112,&p_3022->g_112,&p_3022->g_112},{&p_3022->g_112,&p_3022->g_112,&p_3022->g_112},{&p_3022->g_112,&p_3022->g_112,&p_3022->g_112},{&p_3022->g_112,&p_3022->g_112,&p_3022->g_112}},{{&p_3022->g_112,&p_3022->g_112,&p_3022->g_112},{&p_3022->g_112,&p_3022->g_112,&p_3022->g_112},{&p_3022->g_112,&p_3022->g_112,&p_3022->g_112},{&p_3022->g_112,&p_3022->g_112,&p_3022->g_112},{&p_3022->g_112,&p_3022->g_112,&p_3022->g_112},{&p_3022->g_112,&p_3022->g_112,&p_3022->g_112},{&p_3022->g_112,&p_3022->g_112,&p_3022->g_112},{&p_3022->g_112,&p_3022->g_112,&p_3022->g_112},{&p_3022->g_112,&p_3022->g_112,&p_3022->g_112}},{{&p_3022->g_112,&p_3022->g_112,&p_3022->g_112},{&p_3022->g_112,&p_3022->g_112,&p_3022->g_112},{&p_3022->g_112,&p_3022->g_112,&p_3022->g_112},{&p_3022->g_112,&p_3022->g_112,&p_3022->g_112},{&p_3022->g_112,&p_3022->g_112,&p_3022->g_112},{&p_3022->g_112,&p_3022->g_112,&p_3022->g_112},{&p_3022->g_112,&p_3022->g_112,&p_3022->g_112},{&p_3022->g_112,&p_3022->g_112,&p_3022->g_112},{&p_3022->g_112,&p_3022->g_112,&p_3022->g_112}}};
    int32_t l_113 = 0x0C5F844BL;
    int32_t *l_114[6];
    uint32_t l_118 = 0xEECE7509L;
    int32_t *l_127 = &p_3022->g_13[4];
    uint32_t l_199[6][10] = {{0xB791D43EL,4294967294UL,4294967294UL,0xB791D43EL,4294967295UL,2UL,2UL,4294967295UL,0xB791D43EL,4294967294UL},{0xB791D43EL,4294967294UL,4294967294UL,0xB791D43EL,4294967295UL,2UL,2UL,4294967295UL,0xB791D43EL,4294967294UL},{0xB791D43EL,4294967294UL,4294967294UL,0xB791D43EL,4294967295UL,2UL,2UL,4294967295UL,0xB791D43EL,4294967294UL},{0xB791D43EL,4294967294UL,4294967294UL,0xB791D43EL,4294967295UL,2UL,2UL,4294967295UL,0xB791D43EL,4294967294UL},{0xB791D43EL,4294967294UL,4294967294UL,0xB791D43EL,4294967295UL,2UL,2UL,4294967295UL,0xB791D43EL,4294967294UL},{0xB791D43EL,4294967294UL,4294967294UL,0xB791D43EL,4294967295UL,2UL,2UL,4294967295UL,0xB791D43EL,4294967294UL}};
    uint8_t **l_216 = &p_3022->g_85;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_114[i] = (void*)0;
lbl_211:
    (*p_3022->g_101) = l_99;
lbl_200:
    p_3022->g_115 |= (p_72 , (((p_74 , (((safe_rshift_func_int8_t_s_u((((l_113 = (((*p_3022->g_85) = (l_105 || (0UL >= 1L))) || (safe_div_func_uint16_t_u_u(((((l_105 || ((*l_108) ^= ((void*)0 == l_108))) <= (((l_108 == p_3022->g_109) > 0x1FAEF758L) , 1UL)) , p_3022->g_97.f0) , (*p_3022->g_109)), 0x7BD8L)))) , &p_3022->g_84) != &p_3022->g_84), 6)) , 65535UL) | p_3022->g_13[4])) , 2UL) != l_105));
    for (p_75 = 2; (p_75 <= (-30)); p_75 = safe_sub_func_int16_t_s_s(p_75, 8))
    { /* block id: 39 */
        uint16_t l_132[9];
        int32_t l_137[10][3][4] = {{{0x33C15363L,0x3CC78BB9L,0x33C15363L,0x33C15363L},{0x33C15363L,0x3CC78BB9L,0x33C15363L,0x33C15363L},{0x33C15363L,0x3CC78BB9L,0x33C15363L,0x33C15363L}},{{0x33C15363L,0x3CC78BB9L,0x33C15363L,0x33C15363L},{0x33C15363L,0x3CC78BB9L,0x33C15363L,0x33C15363L},{0x33C15363L,0x3CC78BB9L,0x33C15363L,0x33C15363L}},{{0x33C15363L,0x3CC78BB9L,0x33C15363L,0x33C15363L},{0x33C15363L,0x3CC78BB9L,0x33C15363L,0x33C15363L},{0x33C15363L,0x3CC78BB9L,0x33C15363L,0x33C15363L}},{{0x33C15363L,0x3CC78BB9L,0x33C15363L,0x33C15363L},{0x33C15363L,0x3CC78BB9L,0x33C15363L,0x33C15363L},{0x33C15363L,0x3CC78BB9L,0x33C15363L,0x33C15363L}},{{0x33C15363L,0x3CC78BB9L,0x33C15363L,0x33C15363L},{0x33C15363L,0x3CC78BB9L,0x33C15363L,0x33C15363L},{0x33C15363L,0x3CC78BB9L,0x33C15363L,0x33C15363L}},{{0x33C15363L,0x3CC78BB9L,0x33C15363L,0x33C15363L},{0x33C15363L,0x3CC78BB9L,0x33C15363L,0x33C15363L},{0x33C15363L,0x3CC78BB9L,0x33C15363L,0x33C15363L}},{{0x33C15363L,0x3CC78BB9L,0x33C15363L,0x33C15363L},{0x33C15363L,0x3CC78BB9L,0x33C15363L,0x33C15363L},{0x33C15363L,0x3CC78BB9L,0x33C15363L,0x33C15363L}},{{0x33C15363L,0x3CC78BB9L,0x33C15363L,0x33C15363L},{0x33C15363L,0x3CC78BB9L,0x33C15363L,0x33C15363L},{0x33C15363L,0x3CC78BB9L,0x33C15363L,0x33C15363L}},{{0x33C15363L,0x3CC78BB9L,0x33C15363L,0x33C15363L},{0x33C15363L,0x3CC78BB9L,0x33C15363L,0x33C15363L},{0x33C15363L,0x3CC78BB9L,0x33C15363L,0x33C15363L}},{{0x33C15363L,0x3CC78BB9L,0x33C15363L,0x33C15363L},{0x33C15363L,0x3CC78BB9L,0x33C15363L,0x33C15363L},{0x33C15363L,0x3CC78BB9L,0x33C15363L,0x33C15363L}}};
        int8_t *l_138[10][8][3] = {{{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139}},{{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139}},{{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139}},{{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139}},{{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139}},{{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139}},{{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139}},{{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139}},{{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139}},{{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139},{&p_3022->g_139,&p_3022->g_139,&p_3022->g_139}}};
        int32_t l_140 = 0x570BF509L;
        int32_t l_154 = 0x353E6D42L;
        int i, j, k;
        for (i = 0; i < 9; i++)
            l_132[i] = 4UL;
        l_140 = (l_118 != ((safe_mod_func_int32_t_s_s((safe_mod_func_uint64_t_u_u(((((-1L) < p_72) <= (safe_mul_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((0x2D252A4FL <= ((l_127 != &p_3022->g_13[7]) || ((+(p_73 ^= (safe_add_func_int64_t_s_s(((((safe_add_func_int32_t_s_s(l_132[0], (l_137[1][2][1] = ((!(~l_132[0])) ^ (((safe_rshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(p_3022->g_112, 1L)), (*p_3022->g_109))) == 0xE3ABEA0BD5792D6EL) ^ p_3022->g_6[4]))))) , p_74) >= 0xA420L) < l_132[0]), 0UL)))) <= p_75))), 0)) == 1UL), (*p_3022->g_109)))) <= p_75), p_75)), 0x00286ECFL)) != p_3022->g_13[5]));
        if (l_137[1][2][1])
        { /* block id: 43 */
            union U1 **l_141 = &l_99;
            uint8_t *l_150 = (void*)0;
            int32_t l_159 = 4L;
            uint8_t ***l_194 = &p_3022->g_84;
            (*l_141) = (*p_3022->g_101);
            if (p_3022->g_13[0])
                continue;
            for (p_3022->g_22 = 0; (p_3022->g_22 > 41); p_3022->g_22++)
            { /* block id: 48 */
                uint8_t *l_151 = &p_3022->g_115;
                int32_t l_158 = 0x150E4BADL;
                l_137[1][2][1] = (safe_div_func_int64_t_s_s((~((((((safe_sub_func_uint32_t_u_u((((safe_rshift_func_uint16_t_u_u(0xD19FL, (((p_73 = ((l_150 != l_151) | (p_3022->g_94.f0 & ((safe_rshift_func_uint8_t_u_s(((void*)0 != &p_3022->g_85), 3)) == l_154)))) && (safe_mul_func_int16_t_s_s((p_3022->g_157[1][2][3] , p_72), l_158))) == p_74))) == 7UL) & (*l_127)), (-7L))) , p_74) , p_3022->g_110) , p_73) != 0x5C07D217L) && l_158)), p_3022->g_139));
            }
            for (l_113 = 0; (l_113 <= 9); l_113 += 1)
            { /* block id: 54 */
                uint32_t l_160[4][8][2] = {{{0xDCD2DBF4L,0xDCD2DBF4L},{0xDCD2DBF4L,0xDCD2DBF4L},{0xDCD2DBF4L,0xDCD2DBF4L},{0xDCD2DBF4L,0xDCD2DBF4L},{0xDCD2DBF4L,0xDCD2DBF4L},{0xDCD2DBF4L,0xDCD2DBF4L},{0xDCD2DBF4L,0xDCD2DBF4L},{0xDCD2DBF4L,0xDCD2DBF4L}},{{0xDCD2DBF4L,0xDCD2DBF4L},{0xDCD2DBF4L,0xDCD2DBF4L},{0xDCD2DBF4L,0xDCD2DBF4L},{0xDCD2DBF4L,0xDCD2DBF4L},{0xDCD2DBF4L,0xDCD2DBF4L},{0xDCD2DBF4L,0xDCD2DBF4L},{0xDCD2DBF4L,0xDCD2DBF4L},{0xDCD2DBF4L,0xDCD2DBF4L}},{{0xDCD2DBF4L,0xDCD2DBF4L},{0xDCD2DBF4L,0xDCD2DBF4L},{0xDCD2DBF4L,0xDCD2DBF4L},{0xDCD2DBF4L,0xDCD2DBF4L},{0xDCD2DBF4L,0xDCD2DBF4L},{0xDCD2DBF4L,0xDCD2DBF4L},{0xDCD2DBF4L,0xDCD2DBF4L},{0xDCD2DBF4L,0xDCD2DBF4L}},{{0xDCD2DBF4L,0xDCD2DBF4L},{0xDCD2DBF4L,0xDCD2DBF4L},{0xDCD2DBF4L,0xDCD2DBF4L},{0xDCD2DBF4L,0xDCD2DBF4L},{0xDCD2DBF4L,0xDCD2DBF4L},{0xDCD2DBF4L,0xDCD2DBF4L},{0xDCD2DBF4L,0xDCD2DBF4L},{0xDCD2DBF4L,0xDCD2DBF4L}}};
                int32_t l_163 = 1L;
                volatile int32_t * volatile l_170 = &p_3022->g_6[4];/* VOLATILE GLOBAL l_170 */
                int8_t *l_181 = &p_3022->g_139;
                int i, j, k;
                --l_160[1][2][0];
                for (p_3022->g_112 = 2; (p_3022->g_112 >= 0); p_3022->g_112 -= 1)
                { /* block id: 58 */
                    uint64_t l_164 = 18446744073709551613UL;
                    int32_t l_185 = 0x5C2B71B2L;
                    for (l_140 = 0; (l_140 <= 9); l_140 += 1)
                    { /* block id: 61 */
                        l_163 = (-1L);
                        if (p_73)
                            continue;
                        l_164--;
                    }
                    for (l_164 = 3; (l_164 <= 9); l_164 += 1)
                    { /* block id: 68 */
                        volatile int32_t * volatile *l_169[7] = {&p_3022->g_167,&p_3022->g_167,&p_3022->g_167,&p_3022->g_167,&p_3022->g_167,&p_3022->g_167,&p_3022->g_167};
                        uint64_t *l_182[7][7][5] = {{{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24}},{{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24}},{{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24}},{{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24}},{{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24}},{{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24}},{{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24},{&l_164,&l_164,(void*)0,&l_164,&p_3022->g_24}}};
                        uint32_t *l_183 = &l_160[2][4][0];
                        int32_t l_184[5];
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                            l_184[i] = 0L;
                        l_170 = p_3022->g_167;
                        (*l_170) = (*p_3022->g_167);
                        (*l_170) = ((((*l_170) | (((safe_sub_func_uint8_t_u_u((((*p_3022->g_109) <= ((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u((0xFDEEC52BA2822E89L | (6L || ((0x7605A33BL > ((*l_183) = ((safe_sub_func_uint64_t_u_u((l_163 ^= (l_181 == (void*)0)), (((p_3022->g_13[0] , p_3022->g_95) || p_75) | l_164))) > p_75))) | p_74))), 14)), l_184[1])) != (*p_3022->g_85))) , l_137[3][2][2]), 0UL)) <= p_72) <= p_3022->g_10)) | p_3022->g_13[6]) == 0x75DAL);
                        l_185 |= (*l_170);
                    }
                    l_159 &= 0L;
                    for (p_3022->g_22 = 0; (p_3022->g_22 <= 2); p_3022->g_22 += 1)
                    { /* block id: 79 */
                        int32_t **l_186[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        uint32_t *l_191 = &l_160[1][6][1];
                        int i;
                        (*p_3022->g_167) = (&p_3022->g_167 == (p_75 , l_186[0]));
                        l_137[1][2][1] |= (safe_mod_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u(((((*l_191) |= p_3022->g_115) | (l_164 < (safe_div_func_uint8_t_u_u((l_194 != (((((((((((*p_3022->g_109) = (+(((safe_mod_func_uint64_t_u_u((l_159 ^ ((safe_lshift_func_uint16_t_u_s(((((0xAFL || ((((0x02CD6BF210CA2A5FL < p_3022->g_2) | ((l_154 > p_3022->g_112) , 249UL)) ^ p_73) || 0x59A8L)) == 1L) , p_72) || p_72), 14)) == (*l_127))), 0xD444B73ACF91862BL)) ^ p_3022->g_24) < p_74))) , p_3022->g_100[l_113]) , p_3022->g_32) > p_75) != p_73) || p_73) && l_159) & l_159) , p_3022->g_139) , &p_3022->g_84)), p_3022->g_100[7].f0)))) != l_164), l_199[5][4])), p_72));
                        if (l_113)
                            goto lbl_200;
                    }
                }
            }
        }
        else
        { /* block id: 88 */
            int32_t l_214 = 9L;
            for (l_140 = 14; (l_140 != (-28)); l_140 = safe_sub_func_uint16_t_u_u(l_140, 2))
            { /* block id: 91 */
                int8_t **l_203 = &l_138[0][7][1];
                int32_t l_208[3][1];
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_208[i][j] = 0x570C3564L;
                }
                (*p_3022->g_167) |= (((*l_108) = p_74) == (&p_3022->g_139 != ((*l_203) = &p_3022->g_139)));
                for (p_3022->g_139 = (-15); (p_3022->g_139 != (-17)); p_3022->g_139 = safe_sub_func_int64_t_s_s(p_3022->g_139, 2))
                { /* block id: 97 */
                    int32_t *l_209 = &p_3022->g_96;
                    if (((((safe_add_func_uint32_t_u_u(l_208[2][0], (-8L))) | 0UL) & (*p_3022->g_167)) ^ (((*l_209) &= 0L) , 0x4599D9CEL)))
                    { /* block id: 99 */
                        if (p_73)
                            goto lbl_200;
                    }
                    else
                    { /* block id: 101 */
                        uint8_t l_210 = 4UL;
                        l_210 |= 0x3AFEA6F2L;
                        if (p_3022->g_112)
                            goto lbl_211;
                    }
                    for (p_3022->g_52.f0 = 0; (p_3022->g_52.f0 > 3); p_3022->g_52.f0 = safe_add_func_uint32_t_u_u(p_3022->g_52.f0, 4))
                    { /* block id: 107 */
                        if (p_75)
                            break;
                    }
                }
                l_214 = (-1L);
            }
        }
        p_3022->g_215[0] = &l_113;
    }
    return l_216;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint8_t ** func_76(uint32_t  p_77, uint8_t * p_78, int32_t  p_79, uint16_t  p_80, uint32_t  p_81, struct S2 * p_3022)
{ /* block id: 28 */
    return &p_3022->g_85;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_3023;
    struct S2* p_3022 = &c_3023;
    struct S2 c_3024 = {
        0x72C36544L, // p_3022->g_2
        0x78ABC106L, // p_3022->g_3
        {0x4FAF425FL,0x4FAF425FL,0x4FAF425FL,0x4FAF425FL,0x4FAF425FL,0x4FAF425FL}, // p_3022->g_6
        0x06695998L, // p_3022->g_7
        0L, // p_3022->g_10
        {0L,0L,0L,0L,0L,0L,0L,0L}, // p_3022->g_13
        1UL, // p_3022->g_22
        0x7E29AC92D14B4322L, // p_3022->g_24
        0UL, // p_3022->g_29
        0xE5L, // p_3022->g_32
        {7L}, // p_3022->g_52
        &p_3022->g_32, // p_3022->g_85
        &p_3022->g_85, // p_3022->g_84
        {1L}, // p_3022->g_94
        4294967295UL, // p_3022->g_95
        0L, // p_3022->g_96
        {0x3C996909L}, // p_3022->g_97
        {{0x2ED11754L},{0x2A6E9776L},{0L},{0x2A6E9776L},{0x2ED11754L},{0x2ED11754L},{0x2A6E9776L},{0L},{0x2A6E9776L},{0x2ED11754L}}, // p_3022->g_100
        &p_3022->g_100[7], // p_3022->g_102
        &p_3022->g_102, // p_3022->g_101
        65535UL, // p_3022->g_110
        &p_3022->g_110, // p_3022->g_109
        0x6A377049B5B57A05L, // p_3022->g_112
        0UL, // p_3022->g_115
        0x2DL, // p_3022->g_139
        {{{{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L}},{{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L}},{{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L}},{{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L}},{{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L}},{{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L}},{{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L}}},{{{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L}},{{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L}},{{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L}},{{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L}},{{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L}},{{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L}},{{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L},{0x1F1C0895L}}}}, // p_3022->g_157
        &p_3022->g_6[4], // p_3022->g_167
        (void*)0, // p_3022->g_168
        {(void*)0,(void*)0,(void*)0,(void*)0}, // p_3022->g_215
        4294967287UL, // p_3022->g_222
        &p_3022->g_52.f1, // p_3022->g_225
        (void*)0, // p_3022->g_235
        8UL, // p_3022->g_275
        0x9D030D9EL, // p_3022->g_311
        {0x019AL,0x019AL,0x019AL}, // p_3022->g_334
        {&p_3022->g_52.f1,&p_3022->g_52.f1,&p_3022->g_52.f1,&p_3022->g_52.f1,&p_3022->g_52.f1}, // p_3022->g_342
        &p_3022->g_52.f1, // p_3022->g_343
        {{&p_3022->g_222,&p_3022->g_222,&p_3022->g_222,&p_3022->g_222,&p_3022->g_222,&p_3022->g_222,&p_3022->g_222,&p_3022->g_222,&p_3022->g_222,&p_3022->g_222},{&p_3022->g_222,&p_3022->g_222,&p_3022->g_222,&p_3022->g_222,&p_3022->g_222,&p_3022->g_222,&p_3022->g_222,&p_3022->g_222,&p_3022->g_222,&p_3022->g_222}}, // p_3022->g_351
        {&p_3022->g_139,(void*)0,&p_3022->g_139,&p_3022->g_139,(void*)0,&p_3022->g_139,&p_3022->g_139}, // p_3022->g_359
        {{&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6]},{&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6]},{&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6]},{&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6]},{&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6]},{&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6]},{&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6]},{&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6],&p_3022->g_359[6]}}, // p_3022->g_358
        &p_3022->g_52.f1, // p_3022->g_392
        {0x58FEE9EAL}, // p_3022->g_398
        {&p_3022->g_52.f1,&p_3022->g_52.f1,&p_3022->g_52.f1,&p_3022->g_52.f1,&p_3022->g_52.f1,&p_3022->g_52.f1,&p_3022->g_52.f1}, // p_3022->g_401
        &p_3022->g_398.f1, // p_3022->g_402
        65528UL, // p_3022->g_411
        &p_3022->g_29, // p_3022->g_432
        {&p_3022->g_13[1],(void*)0,&p_3022->g_13[1],&p_3022->g_13[1],(void*)0,&p_3022->g_13[1],&p_3022->g_13[1]}, // p_3022->g_453
        &p_3022->g_52.f1, // p_3022->g_454
        {{{&p_3022->g_102,&p_3022->g_102,&p_3022->g_102,(void*)0,&p_3022->g_102,&p_3022->g_102,&p_3022->g_102},{&p_3022->g_102,&p_3022->g_102,&p_3022->g_102,(void*)0,&p_3022->g_102,&p_3022->g_102,&p_3022->g_102},{&p_3022->g_102,&p_3022->g_102,&p_3022->g_102,(void*)0,&p_3022->g_102,&p_3022->g_102,&p_3022->g_102},{&p_3022->g_102,&p_3022->g_102,&p_3022->g_102,(void*)0,&p_3022->g_102,&p_3022->g_102,&p_3022->g_102}},{{&p_3022->g_102,&p_3022->g_102,&p_3022->g_102,(void*)0,&p_3022->g_102,&p_3022->g_102,&p_3022->g_102},{&p_3022->g_102,&p_3022->g_102,&p_3022->g_102,(void*)0,&p_3022->g_102,&p_3022->g_102,&p_3022->g_102},{&p_3022->g_102,&p_3022->g_102,&p_3022->g_102,(void*)0,&p_3022->g_102,&p_3022->g_102,&p_3022->g_102},{&p_3022->g_102,&p_3022->g_102,&p_3022->g_102,(void*)0,&p_3022->g_102,&p_3022->g_102,&p_3022->g_102}},{{&p_3022->g_102,&p_3022->g_102,&p_3022->g_102,(void*)0,&p_3022->g_102,&p_3022->g_102,&p_3022->g_102},{&p_3022->g_102,&p_3022->g_102,&p_3022->g_102,(void*)0,&p_3022->g_102,&p_3022->g_102,&p_3022->g_102},{&p_3022->g_102,&p_3022->g_102,&p_3022->g_102,(void*)0,&p_3022->g_102,&p_3022->g_102,&p_3022->g_102},{&p_3022->g_102,&p_3022->g_102,&p_3022->g_102,(void*)0,&p_3022->g_102,&p_3022->g_102,&p_3022->g_102}},{{&p_3022->g_102,&p_3022->g_102,&p_3022->g_102,(void*)0,&p_3022->g_102,&p_3022->g_102,&p_3022->g_102},{&p_3022->g_102,&p_3022->g_102,&p_3022->g_102,(void*)0,&p_3022->g_102,&p_3022->g_102,&p_3022->g_102},{&p_3022->g_102,&p_3022->g_102,&p_3022->g_102,(void*)0,&p_3022->g_102,&p_3022->g_102,&p_3022->g_102},{&p_3022->g_102,&p_3022->g_102,&p_3022->g_102,(void*)0,&p_3022->g_102,&p_3022->g_102,&p_3022->g_102}},{{&p_3022->g_102,&p_3022->g_102,&p_3022->g_102,(void*)0,&p_3022->g_102,&p_3022->g_102,&p_3022->g_102},{&p_3022->g_102,&p_3022->g_102,&p_3022->g_102,(void*)0,&p_3022->g_102,&p_3022->g_102,&p_3022->g_102},{&p_3022->g_102,&p_3022->g_102,&p_3022->g_102,(void*)0,&p_3022->g_102,&p_3022->g_102,&p_3022->g_102},{&p_3022->g_102,&p_3022->g_102,&p_3022->g_102,(void*)0,&p_3022->g_102,&p_3022->g_102,&p_3022->g_102}},{{&p_3022->g_102,&p_3022->g_102,&p_3022->g_102,(void*)0,&p_3022->g_102,&p_3022->g_102,&p_3022->g_102},{&p_3022->g_102,&p_3022->g_102,&p_3022->g_102,(void*)0,&p_3022->g_102,&p_3022->g_102,&p_3022->g_102},{&p_3022->g_102,&p_3022->g_102,&p_3022->g_102,(void*)0,&p_3022->g_102,&p_3022->g_102,&p_3022->g_102},{&p_3022->g_102,&p_3022->g_102,&p_3022->g_102,(void*)0,&p_3022->g_102,&p_3022->g_102,&p_3022->g_102}},{{&p_3022->g_102,&p_3022->g_102,&p_3022->g_102,(void*)0,&p_3022->g_102,&p_3022->g_102,&p_3022->g_102},{&p_3022->g_102,&p_3022->g_102,&p_3022->g_102,(void*)0,&p_3022->g_102,&p_3022->g_102,&p_3022->g_102},{&p_3022->g_102,&p_3022->g_102,&p_3022->g_102,(void*)0,&p_3022->g_102,&p_3022->g_102,&p_3022->g_102},{&p_3022->g_102,&p_3022->g_102,&p_3022->g_102,(void*)0,&p_3022->g_102,&p_3022->g_102,&p_3022->g_102}},{{&p_3022->g_102,&p_3022->g_102,&p_3022->g_102,(void*)0,&p_3022->g_102,&p_3022->g_102,&p_3022->g_102},{&p_3022->g_102,&p_3022->g_102,&p_3022->g_102,(void*)0,&p_3022->g_102,&p_3022->g_102,&p_3022->g_102},{&p_3022->g_102,&p_3022->g_102,&p_3022->g_102,(void*)0,&p_3022->g_102,&p_3022->g_102,&p_3022->g_102},{&p_3022->g_102,&p_3022->g_102,&p_3022->g_102,(void*)0,&p_3022->g_102,&p_3022->g_102,&p_3022->g_102}}}, // p_3022->g_458
        &p_3022->g_458[6][2][2], // p_3022->g_457
        {0x05631D79L}, // p_3022->g_462
        &p_3022->g_102, // p_3022->g_466
        0x35DAL, // p_3022->g_488
        &p_3022->g_398.f1, // p_3022->g_522
        {&p_3022->g_52.f1,&p_3022->g_52.f1,&p_3022->g_52.f1,&p_3022->g_52.f1,&p_3022->g_52.f1,&p_3022->g_52.f1}, // p_3022->g_523
        {&p_3022->g_398.f1,&p_3022->g_398.f1}, // p_3022->g_525
        (void*)0, // p_3022->g_526
        {&p_3022->g_398.f1,&p_3022->g_398.f1,&p_3022->g_398.f1,&p_3022->g_398.f1,&p_3022->g_398.f1,&p_3022->g_398.f1,&p_3022->g_398.f1,&p_3022->g_398.f1,&p_3022->g_398.f1,&p_3022->g_398.f1}, // p_3022->g_527
        (void*)0, // p_3022->g_528
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_3022->g_533
        &p_3022->g_398, // p_3022->g_535
        &p_3022->g_535, // p_3022->g_534
        {0x6170456BL}, // p_3022->g_546
        0x99CBL, // p_3022->g_557
        (void*)0, // p_3022->g_568
        &p_3022->g_458[6][2][2], // p_3022->g_586
        {2L}, // p_3022->g_589
        0x09L, // p_3022->g_608
        {{{0x0EFD18FBL,0xB9FAF427L,0xB9FAF427L},{0x0EFD18FBL,0xB9FAF427L,0xB9FAF427L},{0x0EFD18FBL,0xB9FAF427L,0xB9FAF427L},{0x0EFD18FBL,0xB9FAF427L,0xB9FAF427L}},{{0x0EFD18FBL,0xB9FAF427L,0xB9FAF427L},{0x0EFD18FBL,0xB9FAF427L,0xB9FAF427L},{0x0EFD18FBL,0xB9FAF427L,0xB9FAF427L},{0x0EFD18FBL,0xB9FAF427L,0xB9FAF427L}},{{0x0EFD18FBL,0xB9FAF427L,0xB9FAF427L},{0x0EFD18FBL,0xB9FAF427L,0xB9FAF427L},{0x0EFD18FBL,0xB9FAF427L,0xB9FAF427L},{0x0EFD18FBL,0xB9FAF427L,0xB9FAF427L}},{{0x0EFD18FBL,0xB9FAF427L,0xB9FAF427L},{0x0EFD18FBL,0xB9FAF427L,0xB9FAF427L},{0x0EFD18FBL,0xB9FAF427L,0xB9FAF427L},{0x0EFD18FBL,0xB9FAF427L,0xB9FAF427L}},{{0x0EFD18FBL,0xB9FAF427L,0xB9FAF427L},{0x0EFD18FBL,0xB9FAF427L,0xB9FAF427L},{0x0EFD18FBL,0xB9FAF427L,0xB9FAF427L},{0x0EFD18FBL,0xB9FAF427L,0xB9FAF427L}},{{0x0EFD18FBL,0xB9FAF427L,0xB9FAF427L},{0x0EFD18FBL,0xB9FAF427L,0xB9FAF427L},{0x0EFD18FBL,0xB9FAF427L,0xB9FAF427L},{0x0EFD18FBL,0xB9FAF427L,0xB9FAF427L}},{{0x0EFD18FBL,0xB9FAF427L,0xB9FAF427L},{0x0EFD18FBL,0xB9FAF427L,0xB9FAF427L},{0x0EFD18FBL,0xB9FAF427L,0xB9FAF427L},{0x0EFD18FBL,0xB9FAF427L,0xB9FAF427L}}}, // p_3022->g_611
        {0x006597E5L}, // p_3022->g_621
        {0x6D6B3E64L,0x6D6B3E64L}, // p_3022->g_664
        {{&p_3022->g_13[2],&p_3022->g_7,&p_3022->g_13[4],&p_3022->g_7,&p_3022->g_13[2],&p_3022->g_10,(void*)0,&p_3022->g_13[1],&p_3022->g_10,&p_3022->g_7},{&p_3022->g_13[2],&p_3022->g_7,&p_3022->g_13[4],&p_3022->g_7,&p_3022->g_13[2],&p_3022->g_10,(void*)0,&p_3022->g_13[1],&p_3022->g_10,&p_3022->g_7},{&p_3022->g_13[2],&p_3022->g_7,&p_3022->g_13[4],&p_3022->g_7,&p_3022->g_13[2],&p_3022->g_10,(void*)0,&p_3022->g_13[1],&p_3022->g_10,&p_3022->g_7},{&p_3022->g_13[2],&p_3022->g_7,&p_3022->g_13[4],&p_3022->g_7,&p_3022->g_13[2],&p_3022->g_10,(void*)0,&p_3022->g_13[1],&p_3022->g_10,&p_3022->g_7},{&p_3022->g_13[2],&p_3022->g_7,&p_3022->g_13[4],&p_3022->g_7,&p_3022->g_13[2],&p_3022->g_10,(void*)0,&p_3022->g_13[1],&p_3022->g_10,&p_3022->g_7},{&p_3022->g_13[2],&p_3022->g_7,&p_3022->g_13[4],&p_3022->g_7,&p_3022->g_13[2],&p_3022->g_10,(void*)0,&p_3022->g_13[1],&p_3022->g_10,&p_3022->g_7},{&p_3022->g_13[2],&p_3022->g_7,&p_3022->g_13[4],&p_3022->g_7,&p_3022->g_13[2],&p_3022->g_10,(void*)0,&p_3022->g_13[1],&p_3022->g_10,&p_3022->g_7},{&p_3022->g_13[2],&p_3022->g_7,&p_3022->g_13[4],&p_3022->g_7,&p_3022->g_13[2],&p_3022->g_10,(void*)0,&p_3022->g_13[1],&p_3022->g_10,&p_3022->g_7},{&p_3022->g_13[2],&p_3022->g_7,&p_3022->g_13[4],&p_3022->g_7,&p_3022->g_13[2],&p_3022->g_10,(void*)0,&p_3022->g_13[1],&p_3022->g_10,&p_3022->g_7},{&p_3022->g_13[2],&p_3022->g_7,&p_3022->g_13[4],&p_3022->g_7,&p_3022->g_13[2],&p_3022->g_10,(void*)0,&p_3022->g_13[1],&p_3022->g_10,&p_3022->g_7}}, // p_3022->g_665
        0x792E9220L, // p_3022->g_678
        {{0x16A00108L}}, // p_3022->g_728
        {0L}, // p_3022->g_778
        0x8445ED74L, // p_3022->g_798
        2UL, // p_3022->g_820
        &p_3022->g_798, // p_3022->g_823
        {{(-1L),0x13L,0x5AL,0x0DL,0x5AL,0x13L,(-1L),0x40L,1L},{(-1L),0x13L,0x5AL,0x0DL,0x5AL,0x13L,(-1L),0x40L,1L},{(-1L),0x13L,0x5AL,0x0DL,0x5AL,0x13L,(-1L),0x40L,1L},{(-1L),0x13L,0x5AL,0x0DL,0x5AL,0x13L,(-1L),0x40L,1L},{(-1L),0x13L,0x5AL,0x0DL,0x5AL,0x13L,(-1L),0x40L,1L},{(-1L),0x13L,0x5AL,0x0DL,0x5AL,0x13L,(-1L),0x40L,1L},{(-1L),0x13L,0x5AL,0x0DL,0x5AL,0x13L,(-1L),0x40L,1L},{(-1L),0x13L,0x5AL,0x0DL,0x5AL,0x13L,(-1L),0x40L,1L},{(-1L),0x13L,0x5AL,0x0DL,0x5AL,0x13L,(-1L),0x40L,1L},{(-1L),0x13L,0x5AL,0x0DL,0x5AL,0x13L,(-1L),0x40L,1L}}, // p_3022->g_905
        {0x5EC00CB2L}, // p_3022->g_932
        {{1L},{1L},{0x3E7A6E74L},{1L},{1L},{1L},{1L},{0x3E7A6E74L},{1L},{1L}}, // p_3022->g_933
        {{-1L},{-1L},{-1L},{-1L},{-1L}}, // p_3022->g_934
        {0x58AC161FL}, // p_3022->g_935
        {0x16B77E02L}, // p_3022->g_936
        {0x1F0B7FB7L}, // p_3022->g_937
        {0x42545786L}, // p_3022->g_938
        {0L}, // p_3022->g_939
        {-2L}, // p_3022->g_940
        {8L}, // p_3022->g_941
        {0L}, // p_3022->g_942
        {0x02E4EFB3L}, // p_3022->g_943
        {1L}, // p_3022->g_944
        {-1L}, // p_3022->g_945
        {-7L}, // p_3022->g_946
        {0L}, // p_3022->g_947
        {0L}, // p_3022->g_948
        {0x52A4BB27L}, // p_3022->g_949
        {{{-4L},{-4L}},{{-4L},{-4L}},{{-4L},{-4L}},{{-4L},{-4L}}}, // p_3022->g_950
        {0x2D2F7AEAL}, // p_3022->g_951
        {{{0x01948480L},{0L},{0L},{1L},{-1L},{0x01948480L},{1L},{0x73674C4AL}},{{0x01948480L},{0L},{0L},{1L},{-1L},{0x01948480L},{1L},{0x73674C4AL}},{{0x01948480L},{0L},{0L},{1L},{-1L},{0x01948480L},{1L},{0x73674C4AL}},{{0x01948480L},{0L},{0L},{1L},{-1L},{0x01948480L},{1L},{0x73674C4AL}},{{0x01948480L},{0L},{0L},{1L},{-1L},{0x01948480L},{1L},{0x73674C4AL}},{{0x01948480L},{0L},{0L},{1L},{-1L},{0x01948480L},{1L},{0x73674C4AL}},{{0x01948480L},{0L},{0L},{1L},{-1L},{0x01948480L},{1L},{0x73674C4AL}},{{0x01948480L},{0L},{0L},{1L},{-1L},{0x01948480L},{1L},{0x73674C4AL}}}, // p_3022->g_952
        {{{{0x5AAC0706L},{0x2F30AF38L}},{{0x5AAC0706L},{0x2F30AF38L}},{{0x5AAC0706L},{0x2F30AF38L}},{{0x5AAC0706L},{0x2F30AF38L}}},{{{0x5AAC0706L},{0x2F30AF38L}},{{0x5AAC0706L},{0x2F30AF38L}},{{0x5AAC0706L},{0x2F30AF38L}},{{0x5AAC0706L},{0x2F30AF38L}}},{{{0x5AAC0706L},{0x2F30AF38L}},{{0x5AAC0706L},{0x2F30AF38L}},{{0x5AAC0706L},{0x2F30AF38L}},{{0x5AAC0706L},{0x2F30AF38L}}},{{{0x5AAC0706L},{0x2F30AF38L}},{{0x5AAC0706L},{0x2F30AF38L}},{{0x5AAC0706L},{0x2F30AF38L}},{{0x5AAC0706L},{0x2F30AF38L}}},{{{0x5AAC0706L},{0x2F30AF38L}},{{0x5AAC0706L},{0x2F30AF38L}},{{0x5AAC0706L},{0x2F30AF38L}},{{0x5AAC0706L},{0x2F30AF38L}}},{{{0x5AAC0706L},{0x2F30AF38L}},{{0x5AAC0706L},{0x2F30AF38L}},{{0x5AAC0706L},{0x2F30AF38L}},{{0x5AAC0706L},{0x2F30AF38L}}},{{{0x5AAC0706L},{0x2F30AF38L}},{{0x5AAC0706L},{0x2F30AF38L}},{{0x5AAC0706L},{0x2F30AF38L}},{{0x5AAC0706L},{0x2F30AF38L}}},{{{0x5AAC0706L},{0x2F30AF38L}},{{0x5AAC0706L},{0x2F30AF38L}},{{0x5AAC0706L},{0x2F30AF38L}},{{0x5AAC0706L},{0x2F30AF38L}}},{{{0x5AAC0706L},{0x2F30AF38L}},{{0x5AAC0706L},{0x2F30AF38L}},{{0x5AAC0706L},{0x2F30AF38L}},{{0x5AAC0706L},{0x2F30AF38L}}}}, // p_3022->g_953
        {0x59262B08L}, // p_3022->g_954
        {{{-1L},{-1L}},{{-1L},{-1L}},{{-1L},{-1L}},{{-1L},{-1L}},{{-1L},{-1L}},{{-1L},{-1L}},{{-1L},{-1L}},{{-1L},{-1L}},{{-1L},{-1L}},{{-1L},{-1L}}}, // p_3022->g_955
        {-7L}, // p_3022->g_956
        {{{1L},{-1L},{8L}},{{1L},{-1L},{8L}},{{1L},{-1L},{8L}},{{1L},{-1L},{8L}},{{1L},{-1L},{8L}},{{1L},{-1L},{8L}},{{1L},{-1L},{8L}}}, // p_3022->g_957
        {-2L}, // p_3022->g_958
        {0x2AE209F7L}, // p_3022->g_959
        {0x654061B4L}, // p_3022->g_960
        {0L}, // p_3022->g_961
        {0x33CDBCC4L}, // p_3022->g_962
        {0x1145D230L}, // p_3022->g_963
        {{{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}}},{{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}}},{{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}}},{{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}}},{{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}}},{{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}}},{{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}},{{0x7CB328E0L},{0x7CB328E0L},{-8L},{0x1800B9D6L}}}}, // p_3022->g_964
        {0x192EF294L}, // p_3022->g_965
        {2L}, // p_3022->g_966
        {0L}, // p_3022->g_967
        {-9L}, // p_3022->g_968
        {0x00A318B3L}, // p_3022->g_969
        {0x1E2AD224L}, // p_3022->g_970
        {{0x29B62948L}}, // p_3022->g_971
        {-1L}, // p_3022->g_972
        {-1L}, // p_3022->g_973
        {0x01207B7BL}, // p_3022->g_974
        {{0x4839C935L},{0x4839C935L},{0x4839C935L},{0x4839C935L},{0x4839C935L}}, // p_3022->g_975
        {3L}, // p_3022->g_976
        {0x127A18C1L}, // p_3022->g_977
        {8L}, // p_3022->g_978
        {{0x17C15BE1L},{0x17C15BE1L},{0x17C15BE1L},{0x17C15BE1L},{0x17C15BE1L},{0x17C15BE1L},{0x17C15BE1L},{0x17C15BE1L},{0x17C15BE1L},{0x17C15BE1L}}, // p_3022->g_979
        {0x6F9A80C9L}, // p_3022->g_980
        {0x1B0AB10CL}, // p_3022->g_981
        {-1L}, // p_3022->g_982
        {{0x4049B308L},{0x4049B308L},{0x4049B308L},{0x4049B308L}}, // p_3022->g_983
        {0x67E29DF8L}, // p_3022->g_984
        {1L}, // p_3022->g_985
        {{0x300F2416L},{0x300F2416L},{0x300F2416L},{0x300F2416L},{0x300F2416L},{0x300F2416L},{0x300F2416L},{0x300F2416L}}, // p_3022->g_986
        {{0x4D16D780L},{0x4D16D780L},{0x4D16D780L},{0x4D16D780L},{0x4D16D780L},{0x4D16D780L},{0x4D16D780L}}, // p_3022->g_987
        {-8L}, // p_3022->g_988
        {0x3ADF7691L}, // p_3022->g_989
        {0x36BF5D15L}, // p_3022->g_990
        {1L}, // p_3022->g_991
        {0x3F7A89AAL}, // p_3022->g_992
        {0x24AFCF03L}, // p_3022->g_993
        {{0x190C6C47L},{0x190C6C47L},{0x190C6C47L},{0x190C6C47L},{0x190C6C47L},{0x190C6C47L}}, // p_3022->g_994
        {1L}, // p_3022->g_995
        {0x2B9DBCFEL}, // p_3022->g_996
        {7L}, // p_3022->g_997
        {0L}, // p_3022->g_998
        {0x76A607AAL}, // p_3022->g_999
        {8L}, // p_3022->g_1000
        {0x35621AF4L}, // p_3022->g_1001
        {{0x713AE944L},{0x713AE944L},{0x713AE944L},{0x713AE944L}}, // p_3022->g_1002
        {7L}, // p_3022->g_1003
        {0x75E1B232L}, // p_3022->g_1004
        {0x4200F1D7L}, // p_3022->g_1005
        {0x1B0CE126L}, // p_3022->g_1006
        {{-1L}}, // p_3022->g_1007
        {0x7A1974B3L}, // p_3022->g_1009
        {0L}, // p_3022->g_1010
        0xEAB8E1CBL, // p_3022->g_1012
        &p_3022->g_52.f1, // p_3022->g_1042
        4294967295UL, // p_3022->g_1149
        {{0x2E08650DL},{0x2E08650DL},{0x2E08650DL},{0x2E08650DL}}, // p_3022->g_1203
        0UL, // p_3022->g_1251
        {{{1L,4L,0L,(-1L),0L,0x1BL},{1L,4L,0L,(-1L),0L,0x1BL},{1L,4L,0L,(-1L),0L,0x1BL},{1L,4L,0L,(-1L),0L,0x1BL},{1L,4L,0L,(-1L),0L,0x1BL},{1L,4L,0L,(-1L),0L,0x1BL},{1L,4L,0L,(-1L),0L,0x1BL},{1L,4L,0L,(-1L),0L,0x1BL}},{{1L,4L,0L,(-1L),0L,0x1BL},{1L,4L,0L,(-1L),0L,0x1BL},{1L,4L,0L,(-1L),0L,0x1BL},{1L,4L,0L,(-1L),0L,0x1BL},{1L,4L,0L,(-1L),0L,0x1BL},{1L,4L,0L,(-1L),0L,0x1BL},{1L,4L,0L,(-1L),0L,0x1BL},{1L,4L,0L,(-1L),0L,0x1BL}},{{1L,4L,0L,(-1L),0L,0x1BL},{1L,4L,0L,(-1L),0L,0x1BL},{1L,4L,0L,(-1L),0L,0x1BL},{1L,4L,0L,(-1L),0L,0x1BL},{1L,4L,0L,(-1L),0L,0x1BL},{1L,4L,0L,(-1L),0L,0x1BL},{1L,4L,0L,(-1L),0L,0x1BL},{1L,4L,0L,(-1L),0L,0x1BL}},{{1L,4L,0L,(-1L),0L,0x1BL},{1L,4L,0L,(-1L),0L,0x1BL},{1L,4L,0L,(-1L),0L,0x1BL},{1L,4L,0L,(-1L),0L,0x1BL},{1L,4L,0L,(-1L),0L,0x1BL},{1L,4L,0L,(-1L),0L,0x1BL},{1L,4L,0L,(-1L),0L,0x1BL},{1L,4L,0L,(-1L),0L,0x1BL}},{{1L,4L,0L,(-1L),0L,0x1BL},{1L,4L,0L,(-1L),0L,0x1BL},{1L,4L,0L,(-1L),0L,0x1BL},{1L,4L,0L,(-1L),0L,0x1BL},{1L,4L,0L,(-1L),0L,0x1BL},{1L,4L,0L,(-1L),0L,0x1BL},{1L,4L,0L,(-1L),0L,0x1BL},{1L,4L,0L,(-1L),0L,0x1BL}}}, // p_3022->g_1270
        (void*)0, // p_3022->g_1290
        &p_3022->g_458[4][1][4], // p_3022->g_1325
        &p_3022->g_1203[0].f0, // p_3022->g_1343
        &p_3022->g_1343, // p_3022->g_1342
        &p_3022->g_52.f1, // p_3022->g_1347
        &p_3022->g_1347, // p_3022->g_1346
        &p_3022->g_334[0], // p_3022->g_1358
        &p_3022->g_1358, // p_3022->g_1357
        {&p_3022->g_84,&p_3022->g_84,&p_3022->g_84,&p_3022->g_84}, // p_3022->g_1369
        {{4294967295UL,4294967295UL},{4294967295UL,4294967295UL},{4294967295UL,4294967295UL},{4294967295UL,4294967295UL},{4294967295UL,4294967295UL},{4294967295UL,4294967295UL},{4294967295UL,4294967295UL}}, // p_3022->g_1371
        0xBDA6AA959343AD7FL, // p_3022->g_1373
        {{{0x38E5971AL},{0x38E5971AL},{-3L},{0x6B9EAC04L}},{{0x38E5971AL},{0x38E5971AL},{-3L},{0x6B9EAC04L}},{{0x38E5971AL},{0x38E5971AL},{-3L},{0x6B9EAC04L}},{{0x38E5971AL},{0x38E5971AL},{-3L},{0x6B9EAC04L}},{{0x38E5971AL},{0x38E5971AL},{-3L},{0x6B9EAC04L}},{{0x38E5971AL},{0x38E5971AL},{-3L},{0x6B9EAC04L}},{{0x38E5971AL},{0x38E5971AL},{-3L},{0x6B9EAC04L}}}, // p_3022->g_1409
        1UL, // p_3022->g_1436
        0x21FE3934L, // p_3022->g_1522
        {{0L}}, // p_3022->g_1542
        {{0x4F2B28AFL},{0x4F2B28AFL}}, // p_3022->g_1615
        {7L}, // p_3022->g_1639
        {-2L}, // p_3022->g_1657
        0x1CBDFA68L, // p_3022->g_1663
        0xB1936BE6L, // p_3022->g_1667
        &p_3022->g_102, // p_3022->g_1705
        (void*)0, // p_3022->g_1731
        &p_3022->g_1731, // p_3022->g_1730
        &p_3022->g_1730, // p_3022->g_1729
        &p_3022->g_110, // p_3022->g_1823
        &p_3022->g_1823, // p_3022->g_1822
        {{0x20749B47L},{0x20749B47L},{0x20749B47L},{0x20749B47L},{0x20749B47L},{0x20749B47L},{0x20749B47L},{0x20749B47L}}, // p_3022->g_1827
        {0x65F765EAL}, // p_3022->g_1847
        {0x61765071L}, // p_3022->g_1854
        &p_3022->g_1369[3], // p_3022->g_1894
        &p_3022->g_1894, // p_3022->g_1893
        &p_3022->g_1358, // p_3022->g_1945
        &p_3022->g_6[5], // p_3022->g_2011
        1L, // p_3022->g_2016
        {{{{-3L},{0x0B91EE4CL},{0x2E07EA4CL},{0x0B91EE4CL},{-3L},{-3L},{0x0B91EE4CL},{0x2E07EA4CL}}},{{{-3L},{0x0B91EE4CL},{0x2E07EA4CL},{0x0B91EE4CL},{-3L},{-3L},{0x0B91EE4CL},{0x2E07EA4CL}}},{{{-3L},{0x0B91EE4CL},{0x2E07EA4CL},{0x0B91EE4CL},{-3L},{-3L},{0x0B91EE4CL},{0x2E07EA4CL}}},{{{-3L},{0x0B91EE4CL},{0x2E07EA4CL},{0x0B91EE4CL},{-3L},{-3L},{0x0B91EE4CL},{0x2E07EA4CL}}},{{{-3L},{0x0B91EE4CL},{0x2E07EA4CL},{0x0B91EE4CL},{-3L},{-3L},{0x0B91EE4CL},{0x2E07EA4CL}}},{{{-3L},{0x0B91EE4CL},{0x2E07EA4CL},{0x0B91EE4CL},{-3L},{-3L},{0x0B91EE4CL},{0x2E07EA4CL}}},{{{-3L},{0x0B91EE4CL},{0x2E07EA4CL},{0x0B91EE4CL},{-3L},{-3L},{0x0B91EE4CL},{0x2E07EA4CL}}},{{{-3L},{0x0B91EE4CL},{0x2E07EA4CL},{0x0B91EE4CL},{-3L},{-3L},{0x0B91EE4CL},{0x2E07EA4CL}}}}, // p_3022->g_2064
        0x1EA5693CL, // p_3022->g_2094
        0UL, // p_3022->g_2127
        &p_3022->g_955[5][1].f4, // p_3022->g_2131
        {2L}, // p_3022->g_2216
        {0L}, // p_3022->g_2219
        {0x6CD964B6L}, // p_3022->g_2221
        {-2L}, // p_3022->g_2253
        {0x2924ABB9L}, // p_3022->g_2261
        (-3L), // p_3022->g_2290
        &p_3022->g_112, // p_3022->g_2306
        {0x01BBDACEL}, // p_3022->g_2317
        {0x1EA1FDA2L}, // p_3022->g_2355
        &p_3022->g_225, // p_3022->g_2518
        {{&p_3022->g_2518,&p_3022->g_2518,&p_3022->g_2518,&p_3022->g_2518,&p_3022->g_2518,&p_3022->g_2518},{&p_3022->g_2518,&p_3022->g_2518,&p_3022->g_2518,&p_3022->g_2518,&p_3022->g_2518,&p_3022->g_2518},{&p_3022->g_2518,&p_3022->g_2518,&p_3022->g_2518,&p_3022->g_2518,&p_3022->g_2518,&p_3022->g_2518},{&p_3022->g_2518,&p_3022->g_2518,&p_3022->g_2518,&p_3022->g_2518,&p_3022->g_2518,&p_3022->g_2518},{&p_3022->g_2518,&p_3022->g_2518,&p_3022->g_2518,&p_3022->g_2518,&p_3022->g_2518,&p_3022->g_2518}}, // p_3022->g_2517
        {&p_3022->g_2517[2][4],&p_3022->g_2517[2][4],&p_3022->g_2517[2][4],&p_3022->g_2517[2][4],&p_3022->g_2517[2][4]}, // p_3022->g_2516
        {0x21B58F33L}, // p_3022->g_2519
        {0L}, // p_3022->g_2662
        0L, // p_3022->g_2673
        {0x3ADBB25DL}, // p_3022->g_2682
        {0x56FA8AFFL}, // p_3022->g_2694
        {{{{0x4F913121L},{-1L},{0x4930FD06L},{1L},{0x4930FD06L},{-1L},{0x4F913121L},{1L},{1L},{1L}},{{0x4F913121L},{-1L},{0x4930FD06L},{1L},{0x4930FD06L},{-1L},{0x4F913121L},{1L},{1L},{1L}},{{0x4F913121L},{-1L},{0x4930FD06L},{1L},{0x4930FD06L},{-1L},{0x4F913121L},{1L},{1L},{1L}},{{0x4F913121L},{-1L},{0x4930FD06L},{1L},{0x4930FD06L},{-1L},{0x4F913121L},{1L},{1L},{1L}},{{0x4F913121L},{-1L},{0x4930FD06L},{1L},{0x4930FD06L},{-1L},{0x4F913121L},{1L},{1L},{1L}}},{{{0x4F913121L},{-1L},{0x4930FD06L},{1L},{0x4930FD06L},{-1L},{0x4F913121L},{1L},{1L},{1L}},{{0x4F913121L},{-1L},{0x4930FD06L},{1L},{0x4930FD06L},{-1L},{0x4F913121L},{1L},{1L},{1L}},{{0x4F913121L},{-1L},{0x4930FD06L},{1L},{0x4930FD06L},{-1L},{0x4F913121L},{1L},{1L},{1L}},{{0x4F913121L},{-1L},{0x4930FD06L},{1L},{0x4930FD06L},{-1L},{0x4F913121L},{1L},{1L},{1L}},{{0x4F913121L},{-1L},{0x4930FD06L},{1L},{0x4930FD06L},{-1L},{0x4F913121L},{1L},{1L},{1L}}},{{{0x4F913121L},{-1L},{0x4930FD06L},{1L},{0x4930FD06L},{-1L},{0x4F913121L},{1L},{1L},{1L}},{{0x4F913121L},{-1L},{0x4930FD06L},{1L},{0x4930FD06L},{-1L},{0x4F913121L},{1L},{1L},{1L}},{{0x4F913121L},{-1L},{0x4930FD06L},{1L},{0x4930FD06L},{-1L},{0x4F913121L},{1L},{1L},{1L}},{{0x4F913121L},{-1L},{0x4930FD06L},{1L},{0x4930FD06L},{-1L},{0x4F913121L},{1L},{1L},{1L}},{{0x4F913121L},{-1L},{0x4930FD06L},{1L},{0x4930FD06L},{-1L},{0x4F913121L},{1L},{1L},{1L}}}}, // p_3022->g_2697
        {-1L}, // p_3022->g_2706
        1L, // p_3022->g_2709
        {0x67D2A01BL}, // p_3022->g_2710
        0x57F83EEEAE09E2BCL, // p_3022->g_2737
        &p_3022->g_905[6][0], // p_3022->g_2776
        {&p_3022->g_2776}, // p_3022->g_2775
        &p_3022->g_2775[0], // p_3022->g_2774
        {&p_3022->g_2774,&p_3022->g_2774,&p_3022->g_2774}, // p_3022->g_2773
        0L, // p_3022->g_2814
        {-1L}, // p_3022->g_2824
        {-1L}, // p_3022->g_2829
        {1L}, // p_3022->g_2832
        &p_3022->g_1358, // p_3022->g_2843
        {{0x02F7763CL,0x02F7763CL}}, // p_3022->g_2847
        {-8L}, // p_3022->g_2858
        &p_3022->g_1522, // p_3022->g_2923
        {{0x76FD8D39L,1L,0x76FD8D39L,0x76FD8D39L,1L,0x76FD8D39L,0x76FD8D39L,1L,0x76FD8D39L},{0x76FD8D39L,1L,0x76FD8D39L,0x76FD8D39L,1L,0x76FD8D39L,0x76FD8D39L,1L,0x76FD8D39L},{0x76FD8D39L,1L,0x76FD8D39L,0x76FD8D39L,1L,0x76FD8D39L,0x76FD8D39L,1L,0x76FD8D39L},{0x76FD8D39L,1L,0x76FD8D39L,0x76FD8D39L,1L,0x76FD8D39L,0x76FD8D39L,1L,0x76FD8D39L},{0x76FD8D39L,1L,0x76FD8D39L,0x76FD8D39L,1L,0x76FD8D39L,0x76FD8D39L,1L,0x76FD8D39L},{0x76FD8D39L,1L,0x76FD8D39L,0x76FD8D39L,1L,0x76FD8D39L,0x76FD8D39L,1L,0x76FD8D39L}}, // p_3022->g_2952
        255UL, // p_3022->g_2970
        {-3L}, // p_3022->g_2972
        {{{{0x1473059BL},{0x4C887BB1L},{0x655A769AL},{0x36352839L},{0x5FB6E84BL},{0x1473059BL},{0x36352839L},{6L},{0x36352839L},{0x1473059BL}},{{0x1473059BL},{0x4C887BB1L},{0x655A769AL},{0x36352839L},{0x5FB6E84BL},{0x1473059BL},{0x36352839L},{6L},{0x36352839L},{0x1473059BL}},{{0x1473059BL},{0x4C887BB1L},{0x655A769AL},{0x36352839L},{0x5FB6E84BL},{0x1473059BL},{0x36352839L},{6L},{0x36352839L},{0x1473059BL}},{{0x1473059BL},{0x4C887BB1L},{0x655A769AL},{0x36352839L},{0x5FB6E84BL},{0x1473059BL},{0x36352839L},{6L},{0x36352839L},{0x1473059BL}},{{0x1473059BL},{0x4C887BB1L},{0x655A769AL},{0x36352839L},{0x5FB6E84BL},{0x1473059BL},{0x36352839L},{6L},{0x36352839L},{0x1473059BL}},{{0x1473059BL},{0x4C887BB1L},{0x655A769AL},{0x36352839L},{0x5FB6E84BL},{0x1473059BL},{0x36352839L},{6L},{0x36352839L},{0x1473059BL}},{{0x1473059BL},{0x4C887BB1L},{0x655A769AL},{0x36352839L},{0x5FB6E84BL},{0x1473059BL},{0x36352839L},{6L},{0x36352839L},{0x1473059BL}},{{0x1473059BL},{0x4C887BB1L},{0x655A769AL},{0x36352839L},{0x5FB6E84BL},{0x1473059BL},{0x36352839L},{6L},{0x36352839L},{0x1473059BL}},{{0x1473059BL},{0x4C887BB1L},{0x655A769AL},{0x36352839L},{0x5FB6E84BL},{0x1473059BL},{0x36352839L},{6L},{0x36352839L},{0x1473059BL}},{{0x1473059BL},{0x4C887BB1L},{0x655A769AL},{0x36352839L},{0x5FB6E84BL},{0x1473059BL},{0x36352839L},{6L},{0x36352839L},{0x1473059BL}}}}, // p_3022->g_2973
        &p_3022->g_2221.f1, // p_3022->g_3013
        {4L}, // p_3022->g_3017
        &p_3022->g_2221.f1, // p_3022->g_3018
    };
    c_3023 = c_3024;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_3022);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_3022->g_2, "p_3022->g_2", print_hash_value);
    transparent_crc(p_3022->g_3, "p_3022->g_3", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_3022->g_6[i], "p_3022->g_6[i]", print_hash_value);

    }
    transparent_crc(p_3022->g_7, "p_3022->g_7", print_hash_value);
    transparent_crc(p_3022->g_10, "p_3022->g_10", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_3022->g_13[i], "p_3022->g_13[i]", print_hash_value);

    }
    transparent_crc(p_3022->g_22, "p_3022->g_22", print_hash_value);
    transparent_crc(p_3022->g_24, "p_3022->g_24", print_hash_value);
    transparent_crc(p_3022->g_29, "p_3022->g_29", print_hash_value);
    transparent_crc(p_3022->g_32, "p_3022->g_32", print_hash_value);
    transparent_crc(p_3022->g_94.f0, "p_3022->g_94.f0", print_hash_value);
    transparent_crc(p_3022->g_95, "p_3022->g_95", print_hash_value);
    transparent_crc(p_3022->g_96, "p_3022->g_96", print_hash_value);
    transparent_crc(p_3022->g_97.f0, "p_3022->g_97.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_3022->g_100[i].f0, "p_3022->g_100[i].f0", print_hash_value);

    }
    transparent_crc(p_3022->g_110, "p_3022->g_110", print_hash_value);
    transparent_crc(p_3022->g_112, "p_3022->g_112", print_hash_value);
    transparent_crc(p_3022->g_115, "p_3022->g_115", print_hash_value);
    transparent_crc(p_3022->g_139, "p_3022->g_139", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_3022->g_157[i][j][k].f0, "p_3022->g_157[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_3022->g_222, "p_3022->g_222", print_hash_value);
    transparent_crc(p_3022->g_275, "p_3022->g_275", print_hash_value);
    transparent_crc(p_3022->g_311, "p_3022->g_311", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_3022->g_334[i], "p_3022->g_334[i]", print_hash_value);

    }
    transparent_crc(p_3022->g_398.f0, "p_3022->g_398.f0", print_hash_value);
    transparent_crc(p_3022->g_411, "p_3022->g_411", print_hash_value);
    transparent_crc(p_3022->g_462.f0, "p_3022->g_462.f0", print_hash_value);
    transparent_crc(p_3022->g_488, "p_3022->g_488", print_hash_value);
    transparent_crc(p_3022->g_546.f0, "p_3022->g_546.f0", print_hash_value);
    transparent_crc(p_3022->g_557, "p_3022->g_557", print_hash_value);
    transparent_crc(p_3022->g_589.f0, "p_3022->g_589.f0", print_hash_value);
    transparent_crc(p_3022->g_608, "p_3022->g_608", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_3022->g_611[i][j][k], "p_3022->g_611[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_3022->g_621.f0, "p_3022->g_621.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_3022->g_664[i], "p_3022->g_664[i]", print_hash_value);

    }
    transparent_crc(p_3022->g_678, "p_3022->g_678", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_3022->g_728[i].f0, "p_3022->g_728[i].f0", print_hash_value);

    }
    transparent_crc(p_3022->g_778.f0, "p_3022->g_778.f0", print_hash_value);
    transparent_crc(p_3022->g_798, "p_3022->g_798", print_hash_value);
    transparent_crc(p_3022->g_820, "p_3022->g_820", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_3022->g_905[i][j], "p_3022->g_905[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_3022->g_932.f0, "p_3022->g_932.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_3022->g_933[i].f0, "p_3022->g_933[i].f0", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_3022->g_934[i].f0, "p_3022->g_934[i].f0", print_hash_value);

    }
    transparent_crc(p_3022->g_935.f0, "p_3022->g_935.f0", print_hash_value);
    transparent_crc(p_3022->g_936.f0, "p_3022->g_936.f0", print_hash_value);
    transparent_crc(p_3022->g_937.f0, "p_3022->g_937.f0", print_hash_value);
    transparent_crc(p_3022->g_938.f0, "p_3022->g_938.f0", print_hash_value);
    transparent_crc(p_3022->g_939.f0, "p_3022->g_939.f0", print_hash_value);
    transparent_crc(p_3022->g_940.f0, "p_3022->g_940.f0", print_hash_value);
    transparent_crc(p_3022->g_941.f0, "p_3022->g_941.f0", print_hash_value);
    transparent_crc(p_3022->g_942.f0, "p_3022->g_942.f0", print_hash_value);
    transparent_crc(p_3022->g_944.f0, "p_3022->g_944.f0", print_hash_value);
    transparent_crc(p_3022->g_945.f0, "p_3022->g_945.f0", print_hash_value);
    transparent_crc(p_3022->g_946.f0, "p_3022->g_946.f0", print_hash_value);
    transparent_crc(p_3022->g_947.f0, "p_3022->g_947.f0", print_hash_value);
    transparent_crc(p_3022->g_948.f0, "p_3022->g_948.f0", print_hash_value);
    transparent_crc(p_3022->g_949.f0, "p_3022->g_949.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_3022->g_950[i][j].f0, "p_3022->g_950[i][j].f0", print_hash_value);

        }
    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_3022->g_952[i][j].f0, "p_3022->g_952[i][j].f0", print_hash_value);

        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_3022->g_953[i][j][k].f0, "p_3022->g_953[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_3022->g_954.f0, "p_3022->g_954.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_3022->g_955[i][j].f0, "p_3022->g_955[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_3022->g_956.f0, "p_3022->g_956.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_3022->g_957[i][j].f0, "p_3022->g_957[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_3022->g_958.f0, "p_3022->g_958.f0", print_hash_value);
    transparent_crc(p_3022->g_959.f0, "p_3022->g_959.f0", print_hash_value);
    transparent_crc(p_3022->g_960.f0, "p_3022->g_960.f0", print_hash_value);
    transparent_crc(p_3022->g_962.f0, "p_3022->g_962.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_3022->g_964[i][j][k].f0, "p_3022->g_964[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_3022->g_966.f0, "p_3022->g_966.f0", print_hash_value);
    transparent_crc(p_3022->g_967.f0, "p_3022->g_967.f0", print_hash_value);
    transparent_crc(p_3022->g_968.f0, "p_3022->g_968.f0", print_hash_value);
    transparent_crc(p_3022->g_969.f0, "p_3022->g_969.f0", print_hash_value);
    transparent_crc(p_3022->g_970.f0, "p_3022->g_970.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_3022->g_971[i].f0, "p_3022->g_971[i].f0", print_hash_value);

    }
    transparent_crc(p_3022->g_972.f0, "p_3022->g_972.f0", print_hash_value);
    transparent_crc(p_3022->g_973.f0, "p_3022->g_973.f0", print_hash_value);
    transparent_crc(p_3022->g_974.f0, "p_3022->g_974.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_3022->g_975[i].f0, "p_3022->g_975[i].f0", print_hash_value);

    }
    transparent_crc(p_3022->g_976.f0, "p_3022->g_976.f0", print_hash_value);
    transparent_crc(p_3022->g_977.f0, "p_3022->g_977.f0", print_hash_value);
    transparent_crc(p_3022->g_978.f0, "p_3022->g_978.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_3022->g_979[i].f0, "p_3022->g_979[i].f0", print_hash_value);

    }
    transparent_crc(p_3022->g_980.f0, "p_3022->g_980.f0", print_hash_value);
    transparent_crc(p_3022->g_981.f0, "p_3022->g_981.f0", print_hash_value);
    transparent_crc(p_3022->g_982.f0, "p_3022->g_982.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_3022->g_983[i].f0, "p_3022->g_983[i].f0", print_hash_value);

    }
    transparent_crc(p_3022->g_984.f0, "p_3022->g_984.f0", print_hash_value);
    transparent_crc(p_3022->g_985.f0, "p_3022->g_985.f0", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_3022->g_986[i].f0, "p_3022->g_986[i].f0", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_3022->g_987[i].f0, "p_3022->g_987[i].f0", print_hash_value);

    }
    transparent_crc(p_3022->g_988.f0, "p_3022->g_988.f0", print_hash_value);
    transparent_crc(p_3022->g_989.f0, "p_3022->g_989.f0", print_hash_value);
    transparent_crc(p_3022->g_990.f0, "p_3022->g_990.f0", print_hash_value);
    transparent_crc(p_3022->g_991.f0, "p_3022->g_991.f0", print_hash_value);
    transparent_crc(p_3022->g_992.f0, "p_3022->g_992.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_3022->g_994[i].f0, "p_3022->g_994[i].f0", print_hash_value);

    }
    transparent_crc(p_3022->g_995.f0, "p_3022->g_995.f0", print_hash_value);
    transparent_crc(p_3022->g_996.f0, "p_3022->g_996.f0", print_hash_value);
    transparent_crc(p_3022->g_997.f0, "p_3022->g_997.f0", print_hash_value);
    transparent_crc(p_3022->g_998.f0, "p_3022->g_998.f0", print_hash_value);
    transparent_crc(p_3022->g_999.f0, "p_3022->g_999.f0", print_hash_value);
    transparent_crc(p_3022->g_1000.f0, "p_3022->g_1000.f0", print_hash_value);
    transparent_crc(p_3022->g_1001.f0, "p_3022->g_1001.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_3022->g_1002[i].f0, "p_3022->g_1002[i].f0", print_hash_value);

    }
    transparent_crc(p_3022->g_1004.f0, "p_3022->g_1004.f0", print_hash_value);
    transparent_crc(p_3022->g_1005.f0, "p_3022->g_1005.f0", print_hash_value);
    transparent_crc(p_3022->g_1006.f0, "p_3022->g_1006.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_3022->g_1007[i].f0, "p_3022->g_1007[i].f0", print_hash_value);

    }
    transparent_crc(p_3022->g_1009.f0, "p_3022->g_1009.f0", print_hash_value);
    transparent_crc(p_3022->g_1010.f0, "p_3022->g_1010.f0", print_hash_value);
    transparent_crc(p_3022->g_1012, "p_3022->g_1012", print_hash_value);
    transparent_crc(p_3022->g_1149, "p_3022->g_1149", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_3022->g_1203[i].f0, "p_3022->g_1203[i].f0", print_hash_value);

    }
    transparent_crc(p_3022->g_1251, "p_3022->g_1251", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_3022->g_1270[i][j][k], "p_3022->g_1270[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_3022->g_1371[i][j], "p_3022->g_1371[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_3022->g_1373, "p_3022->g_1373", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_3022->g_1409[i][j].f0, "p_3022->g_1409[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_3022->g_1436, "p_3022->g_1436", print_hash_value);
    transparent_crc(p_3022->g_1522, "p_3022->g_1522", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_3022->g_1542[i].f0, "p_3022->g_1542[i].f0", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_3022->g_1615[i].f0, "p_3022->g_1615[i].f0", print_hash_value);

    }
    transparent_crc(p_3022->g_1639.f0, "p_3022->g_1639.f0", print_hash_value);
    transparent_crc(p_3022->g_1657.f0, "p_3022->g_1657.f0", print_hash_value);
    transparent_crc(p_3022->g_1663, "p_3022->g_1663", print_hash_value);
    transparent_crc(p_3022->g_1667, "p_3022->g_1667", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_3022->g_1827[i].f0, "p_3022->g_1827[i].f0", print_hash_value);

    }
    transparent_crc(p_3022->g_1847.f0, "p_3022->g_1847.f0", print_hash_value);
    transparent_crc(p_3022->g_1854.f0, "p_3022->g_1854.f0", print_hash_value);
    transparent_crc(p_3022->g_2016, "p_3022->g_2016", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_3022->g_2064[i][j][k].f0, "p_3022->g_2064[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_3022->g_2094, "p_3022->g_2094", print_hash_value);
    transparent_crc(p_3022->g_2127, "p_3022->g_2127", print_hash_value);
    transparent_crc(p_3022->g_2216.f0, "p_3022->g_2216.f0", print_hash_value);
    transparent_crc(p_3022->g_2219.f0, "p_3022->g_2219.f0", print_hash_value);
    transparent_crc(p_3022->g_2221.f0, "p_3022->g_2221.f0", print_hash_value);
    transparent_crc(p_3022->g_2253.f0, "p_3022->g_2253.f0", print_hash_value);
    transparent_crc(p_3022->g_2261.f0, "p_3022->g_2261.f0", print_hash_value);
    transparent_crc(p_3022->g_2290, "p_3022->g_2290", print_hash_value);
    transparent_crc(p_3022->g_2317.f0, "p_3022->g_2317.f0", print_hash_value);
    transparent_crc(p_3022->g_2355.f0, "p_3022->g_2355.f0", print_hash_value);
    transparent_crc(p_3022->g_2519.f0, "p_3022->g_2519.f0", print_hash_value);
    transparent_crc(p_3022->g_2662.f0, "p_3022->g_2662.f0", print_hash_value);
    transparent_crc(p_3022->g_2673, "p_3022->g_2673", print_hash_value);
    transparent_crc(p_3022->g_2682.f0, "p_3022->g_2682.f0", print_hash_value);
    transparent_crc(p_3022->g_2694.f0, "p_3022->g_2694.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(p_3022->g_2697[i][j][k].f0, "p_3022->g_2697[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_3022->g_2706.f0, "p_3022->g_2706.f0", print_hash_value);
    transparent_crc(p_3022->g_2709, "p_3022->g_2709", print_hash_value);
    transparent_crc(p_3022->g_2710.f0, "p_3022->g_2710.f0", print_hash_value);
    transparent_crc(p_3022->g_2737, "p_3022->g_2737", print_hash_value);
    transparent_crc(p_3022->g_2814, "p_3022->g_2814", print_hash_value);
    transparent_crc(p_3022->g_2824.f0, "p_3022->g_2824.f0", print_hash_value);
    transparent_crc(p_3022->g_2829.f0, "p_3022->g_2829.f0", print_hash_value);
    transparent_crc(p_3022->g_2832.f0, "p_3022->g_2832.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_3022->g_2847[i][j], "p_3022->g_2847[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_3022->g_2858.f0, "p_3022->g_2858.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_3022->g_2952[i][j], "p_3022->g_2952[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_3022->g_2970, "p_3022->g_2970", print_hash_value);
    transparent_crc(p_3022->g_2972.f0, "p_3022->g_2972.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(p_3022->g_2973[i][j][k].f0, "p_3022->g_2973[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_3022->g_3017.f0, "p_3022->g_3017.f0", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
