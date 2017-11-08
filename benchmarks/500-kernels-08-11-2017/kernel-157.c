// --atomics 2 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 19,93,3 -l 19,1,1
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

__constant uint32_t permutations[10][19] = {
{17,7,2,6,13,1,0,15,10,4,8,14,16,3,18,9,5,11,12}, // permutation 0
{4,10,1,3,16,13,8,17,18,2,6,14,15,12,7,5,9,11,0}, // permutation 1
{18,7,11,12,4,6,1,14,16,5,0,13,3,8,10,17,9,15,2}, // permutation 2
{3,8,5,6,0,7,17,16,13,4,12,11,10,15,2,14,18,1,9}, // permutation 3
{10,9,18,5,14,16,7,1,0,4,13,6,11,3,17,2,15,8,12}, // permutation 4
{14,8,1,0,2,6,11,9,18,4,12,7,10,3,5,13,16,15,17}, // permutation 5
{2,9,11,18,7,1,14,17,0,4,6,16,8,5,10,15,3,12,13}, // permutation 6
{2,7,4,8,12,11,15,9,16,3,18,5,17,1,0,10,14,6,13}, // permutation 7
{10,15,7,12,9,1,3,18,11,17,5,4,16,8,14,0,13,6,2}, // permutation 8
{15,2,12,7,17,9,5,0,8,16,3,4,13,10,1,11,14,18,6} // permutation 9
};

// Seed: 1546501752

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile int32_t  f0;
   volatile uint64_t  f1;
   int64_t  f2;
};

struct S1 {
   volatile uint64_t  f0;
   int32_t  f1;
   volatile uint64_t  f2;
   int64_t  f3;
   uint64_t  f4;
   int32_t  f5;
};

struct S2 {
   uint16_t  f0;
   int32_t  f1;
};

union U3 {
   volatile struct S2  f0;
   volatile uint32_t  f1;
   volatile int64_t  f2;
};

struct S4 {
    int32_t g_5;
    int32_t *g_30;
    int32_t **g_29;
    VECTOR(int64_t, 8) g_41;
    volatile uint32_t g_48;
    volatile uint32_t *g_47;
    VECTOR(int32_t, 8) g_50;
    uint32_t g_57[3][8];
    VECTOR(uint8_t, 8) g_76;
    struct S2 g_120;
    int64_t g_131[5];
    uint8_t g_133[7];
    int8_t g_137;
    VECTOR(int16_t, 16) g_149;
    uint8_t g_154;
    uint64_t g_168;
    int32_t g_171;
    union U3 g_175;
    VECTOR(int8_t, 8) g_185;
    VECTOR(int8_t, 4) g_188;
    VECTOR(int8_t, 2) g_189;
    VECTOR(int8_t, 16) g_190;
    uint32_t g_215;
    uint64_t g_229;
    VECTOR(uint32_t, 2) g_232;
    VECTOR(uint8_t, 2) g_236;
    volatile int8_t g_268;
    volatile int8_t g_269;
    volatile int8_t g_270;
    volatile int8_t g_271;
    volatile int8_t g_272[1][1][6];
    volatile int8_t g_273;
    volatile int8_t g_274;
    volatile int8_t g_275;
    volatile int8_t g_276;
    volatile int8_t g_277;
    volatile int8_t g_278;
    volatile int8_t g_279;
    volatile int8_t g_280;
    volatile int8_t g_281;
    volatile int8_t g_282;
    volatile int8_t g_283;
    volatile int8_t g_284[7][6];
    volatile int8_t g_285;
    volatile int8_t g_286;
    volatile int8_t g_287;
    volatile int8_t g_288[1][3];
    volatile int8_t g_289;
    volatile int8_t g_290;
    volatile int8_t g_291[7];
    volatile int8_t g_292;
    volatile int8_t g_293[3][4][10];
    volatile int8_t g_294;
    volatile int8_t g_295;
    volatile int8_t g_296;
    volatile int8_t g_297;
    volatile int8_t g_298;
    volatile int8_t g_299[5][1];
    volatile int8_t *g_267[4][7][4];
    volatile int8_t **g_266;
    volatile int32_t g_315;
    volatile int32_t *g_314;
    int32_t *g_389[3][1];
    volatile uint32_t **g_394;
    struct S1 g_428;
    VECTOR(uint32_t, 16) g_453;
    VECTOR(int64_t, 4) g_460;
    uint64_t *g_471;
    uint64_t *g_472;
    uint64_t *g_473;
    VECTOR(int8_t, 8) g_486;
    VECTOR(int8_t, 4) g_487;
    int16_t *g_488;
    uint8_t g_499;
    VECTOR(int32_t, 2) g_517;
    union U3 * volatile g_549;
    union U3 * volatile * volatile g_548;
    union U3 g_552;
    uint32_t g_558[5][4];
    VECTOR(uint16_t, 8) g_573;
    volatile union U3 g_580;
    volatile union U3 * volatile g_579;
    volatile union U3 * volatile *g_578;
    union U3 g_601[8];
    volatile VECTOR(uint16_t, 16) g_608;
    VECTOR(uint8_t, 8) g_616;
    VECTOR(int64_t, 2) g_618;
    VECTOR(uint8_t, 8) g_620;
    VECTOR(uint16_t, 4) g_651;
    VECTOR(uint32_t, 8) g_660;
    volatile struct S0 g_763;
    volatile VECTOR(uint16_t, 2) g_770;
    volatile VECTOR(int16_t, 8) g_772;
    volatile uint8_t g_775;
    volatile uint8_t *g_774[2][7][9];
    volatile uint8_t **g_773[8];
    volatile struct S1 g_781;
    volatile struct S1 g_782;
    int32_t *g_784;
    volatile VECTOR(int32_t, 4) g_793;
    volatile VECTOR(int32_t, 4) g_794;
    VECTOR(int32_t, 8) g_795;
    VECTOR(int32_t, 2) g_825;
    VECTOR(uint8_t, 8) g_832;
    uint32_t *g_835;
    uint64_t **g_859;
    VECTOR(uint32_t, 8) g_862;
    VECTOR(uint64_t, 4) g_868;
    int32_t ** volatile g_886;
    uint16_t g_898;
    VECTOR(uint8_t, 8) g_901;
    volatile struct S1 g_906;
    volatile VECTOR(int8_t, 16) g_908;
    volatile VECTOR(int8_t, 2) g_909;
    volatile struct S0 *g_926;
    volatile struct S0 ** volatile g_925;
    VECTOR(int16_t, 8) g_938;
    volatile VECTOR(uint64_t, 4) g_939;
    volatile VECTOR(uint64_t, 16) g_942;
    uint32_t v_collective;
    uint64_t global_0_offset;
    uint64_t global_1_offset;
    uint64_t global_2_offset;
    uint64_t local_0_offset;
    uint64_t local_1_offset;
    uint64_t local_2_offset;
    uint64_t group_0_offset;
    uint64_t group_1_offset;
    uint64_t group_2_offset;
    uint32_t tid;
    __local volatile uint32_t *l_atomic_input;
    __local volatile uint32_t *l_special_values;
    __global volatile uint32_t *g_atomic_input;
    __global volatile uint32_t *g_special_values;
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
uint64_t  func_1(struct S4 * p_970);
uint16_t  func_6(uint64_t  p_7, int32_t * p_8, int32_t * p_9, int32_t  p_10, struct S4 * p_970);
int32_t  func_11(uint8_t  p_12, uint64_t  p_13, int32_t  p_14, int16_t  p_15, struct S4 * p_970);
uint8_t  func_16(uint32_t  p_17, int32_t * p_18, struct S2  p_19, struct S4 * p_970);
struct S1  func_22(int32_t ** p_23, int32_t ** p_24, int32_t ** p_25, int32_t ** p_26, int8_t  p_27, struct S4 * p_970);
int32_t ** func_31(int32_t * p_32, int32_t ** p_33, uint32_t  p_34, uint32_t  p_35, int32_t ** p_36, struct S4 * p_970);
int32_t  func_62(int32_t * p_63, int16_t  p_64, int32_t * p_65, int32_t * p_66, uint32_t * p_67, struct S4 * p_970);
int16_t  func_68(uint16_t  p_69, int64_t  p_70, int16_t  p_71, uint64_t  p_72, int32_t  p_73, struct S4 * p_970);
int8_t  func_87(int32_t * p_88, uint8_t  p_89, uint32_t * p_90, int8_t  p_91, uint64_t  p_92, struct S4 * p_970);
uint16_t  func_95(uint32_t * p_96, int16_t  p_97, int32_t ** p_98, struct S4 * p_970);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_970->g_comm_values p_970->g_5 p_970->l_comm_values p_970->g_29 p_970->g_30 p_970->g_41 p_970->g_47 p_970->g_48 p_970->g_50 p_970->g_57 p_970->g_76 p_970->g_120 p_970->g_131 p_970->g_133 p_970->g_137 p_970->g_154 p_970->g_168 p_970->g_171 p_970->g_185 p_970->g_188 p_970->g_189 p_970->g_190 p_970->g_215 p_970->g_232 p_970->g_236 p_970->g_266 p_970->g_229 p_970->g_428 p_970->g_272 p_970->g_292 p_970->g_453 p_970->g_460 p_970->g_281 p_970->g_486 p_970->g_487 p_970->g_488 p_970->g_499 p_970->g_548 p_970->g_558 p_970->g_517 p_970->g_471 p_970->g_286 p_970->g_578 p_970->g_601 p_970->g_608 p_970->g_616 p_970->g_618 p_970->g_620 p_970->g_290 p_970->g_651 p_970->g_660 p_970->g_149 p_970->g_763 p_970->g_770 p_970->g_772 p_970->g_773 p_970->g_276 p_970->g_781 p_970->g_784 p_970->g_775 p_970->g_862 p_970->g_267 p_970->g_868 p_970->g_601.f0 p_970->g_886 p_970->g_898 p_970->g_901 p_970->g_906 p_970->g_908 p_970->g_909 p_970->g_925 p_970->g_938 p_970->g_939 p_970->g_942 p_970->g_795
 * writes: p_970->g_5 p_970->g_50 p_970->g_57 p_970->g_137 p_970->g_154 p_970->g_168 p_970->g_171 p_970->g_215 p_970->g_229 p_970->g_314 p_970->g_389 p_970->g_30 p_970->g_394 p_970->g_120 p_970->g_471 p_970->g_472 p_970->g_473 p_970->g_29 p_970->g_499 p_970->g_428.f1 p_970->g_189 p_970->g_232 p_970->g_428.f4 p_970->g_133 p_970->g_236 p_970->g_782 p_970->g_859 p_970->g_898 p_970->g_784 p_970->g_926 p_970->g_190
 */
uint64_t  func_1(struct S4 * p_970)
{ /* block id: 4 */
    int32_t *l_4 = &p_970->g_5;
    int32_t *l_20 = &p_970->g_5;
    struct S2 l_21 = {0x466AL,8L};
    int16_t *l_489[4][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    uint8_t l_490 = 0x63L;
    uint32_t l_491 = 1UL;
    uint8_t l_820 = 0xE9L;
    uint64_t *l_837 = &p_970->g_168;
    uint8_t l_843 = 0x2AL;
    int32_t l_845 = 0x194D6E34L;
    uint64_t **l_856 = (void*)0;
    uint16_t l_874 = 65534UL;
    int32_t l_876 = 0x24510BA5L;
    int32_t l_877 = (-3L);
    int32_t l_879 = (-6L);
    int32_t l_881 = 0x4727FEC3L;
    int32_t l_882 = 1L;
    uint8_t l_883 = 0xC1L;
    VECTOR(int64_t, 4) l_914 = (VECTOR(int64_t, 4))(4L, (VECTOR(int64_t, 2))(4L, 2L), 2L);
    VECTOR(uint64_t, 8) l_934 = (VECTOR(uint64_t, 8))(2UL, (VECTOR(uint64_t, 4))(2UL, (VECTOR(uint64_t, 2))(2UL, 0xA00299987708D832L), 0xA00299987708D832L), 0xA00299987708D832L, 2UL, 0xA00299987708D832L);
    VECTOR(uint64_t, 16) l_935 = (VECTOR(uint64_t, 16))(0x3780BBA9E5EE2329L, (VECTOR(uint64_t, 4))(0x3780BBA9E5EE2329L, (VECTOR(uint64_t, 2))(0x3780BBA9E5EE2329L, 0UL), 0UL), 0UL, 0x3780BBA9E5EE2329L, 0UL, (VECTOR(uint64_t, 2))(0x3780BBA9E5EE2329L, 0UL), (VECTOR(uint64_t, 2))(0x3780BBA9E5EE2329L, 0UL), 0x3780BBA9E5EE2329L, 0UL, 0x3780BBA9E5EE2329L, 0UL);
    VECTOR(uint64_t, 8) l_940 = (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xA63CBA8F9B3747D1L), 0xA63CBA8F9B3747D1L), 0xA63CBA8F9B3747D1L, 18446744073709551615UL, 0xA63CBA8F9B3747D1L);
    VECTOR(uint64_t, 4) l_941 = (VECTOR(uint64_t, 4))(0xC867E4BD70D365DFL, (VECTOR(uint64_t, 2))(0xC867E4BD70D365DFL, 0x6F32E295BAABF992L), 0x6F32E295BAABF992L);
    VECTOR(int64_t, 2) l_945 = (VECTOR(int64_t, 2))(1L, 0x0A92028322908E92L);
    uint64_t l_956 = 0x6D338F4C9220868CL;
    uint32_t l_957 = 4294967292UL;
    uint32_t l_967[3];
    int i, j;
    for (i = 0; i < 3; i++)
        l_967[i] = 0x2121D4B7L;
    (*l_4) &= (safe_rshift_func_uint16_t_u_s(p_970->g_comm_values[p_970->tid], 3));
    if ((GROUP_DIVERGE(2, 1) == func_6(((((((func_11(((*l_4) , func_16(((l_4 != &p_970->g_5) , p_970->l_comm_values[(safe_mod_func_uint32_t_u_u(p_970->tid, 19))]), l_20, l_21, p_970)), p_970->g_428.f3, (safe_mod_func_uint32_t_u_u(((safe_div_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((safe_div_func_int32_t_s_s((safe_unary_minus_func_uint8_t_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 2))(0x4DL, 0x4DL)).yyyx, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(p_970->g_486.s61)).yxxyyyyx)).odd))).zzwwyzyw, ((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_970->g_487.yw)), 0x2CL, 0x4DL)).zwyyyzxy, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(0x7DL, (p_970->g_488 == l_489[3][1]), ((VECTOR(int8_t, 4))(0x2BL)), 0x4FL, (-2L))).s56)), (int8_t)0x2CL))).yyxyxxxy))))).s70, ((VECTOR(int8_t, 2))(1L))))).yxyyxyyy))).s7000145403576054)).s0)), 0x0B2BFA02L)) < p_970->g_487.z), l_490)), p_970->g_190.s0)) > 65530UL), p_970->g_428.f3)) < p_970->g_428.f3), 4294967287UL)), l_491, p_970) || 0x0E59426BL) ^ p_970->g_41.s1) <= FAKE_DIVERGE(p_970->global_2_offset, get_global_id(2), 10)) <= 65531UL) != p_970->g_651.x) && 0x3767L), p_970->g_784, p_970->g_784, p_970->g_131[4], p_970)))
    { /* block id: 330 */
        int32_t l_818 = 0x58F1F577L;
        VECTOR(uint32_t, 4) l_826 = (VECTOR(uint32_t, 4))(0x45CF4ADBL, (VECTOR(uint32_t, 2))(0x45CF4ADBL, 1UL), 1UL);
        VECTOR(int32_t, 8) l_829 = (VECTOR(int32_t, 8))(0x3907CE08L, (VECTOR(int32_t, 4))(0x3907CE08L, (VECTOR(int32_t, 2))(0x3907CE08L, 0x2D719CE7L), 0x2D719CE7L), 0x2D719CE7L, 0x3907CE08L, 0x2D719CE7L);
        int8_t *l_864 = (void*)0;
        int8_t **l_863[3][2] = {{&l_864,&l_864},{&l_864,&l_864},{&l_864,&l_864}};
        int8_t ***l_865 = &l_863[1][1];
        uint64_t **l_873 = &p_970->g_472;
        int32_t l_878[10] = {0x51C2CE8FL,0x51C2CE8FL,0x51C2CE8FL,0x51C2CE8FL,0x51C2CE8FL,0x51C2CE8FL,0x51C2CE8FL,0x51C2CE8FL,0x51C2CE8FL,0x51C2CE8FL};
        int32_t l_880 = 0x523B87ECL;
        int16_t l_890[7][8][4] = {{{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL}},{{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL}},{{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL}},{{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL}},{{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL}},{{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL}},{{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL},{0x4B7AL,(-9L),0x74FAL,0x74FAL}}};
        int64_t l_897 = 0x45C15F3CED802186L;
        int32_t *l_903 = (void*)0;
        VECTOR(uint64_t, 8) l_933 = (VECTOR(uint64_t, 8))(0x5D30ACB14AB147BDL, (VECTOR(uint64_t, 4))(0x5D30ACB14AB147BDL, (VECTOR(uint64_t, 2))(0x5D30ACB14AB147BDL, 0xE842FA084785FA5DL), 0xE842FA084785FA5DL), 0xE842FA084785FA5DL, 0x5D30ACB14AB147BDL, 0xE842FA084785FA5DL);
        VECTOR(uint64_t, 4) l_943 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), 18446744073709551615UL);
        uint16_t *l_952 = &p_970->g_120.f0;
        uint64_t l_958 = 3UL;
        int i, j, k;
        for (l_491 = 0; (l_491 == 3); l_491 = safe_add_func_int16_t_s_s(l_491, 1))
        { /* block id: 333 */
            int16_t *l_800[10][9][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
            int32_t l_823 = 6L;
            VECTOR(int32_t, 8) l_824 = (VECTOR(int32_t, 8))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x56D8E179L), 0x56D8E179L), 0x56D8E179L, (-9L), 0x56D8E179L);
            uint64_t *l_840 = (void*)0;
            int i, j, k;
            for (p_970->g_154 = 16; (p_970->g_154 == 4); p_970->g_154 = safe_sub_func_uint8_t_u_u(p_970->g_154, 4))
            { /* block id: 336 */
                int16_t **l_801 = (void*)0;
                int16_t *l_802 = (void*)0;
                int16_t **l_803 = (void*)0;
                int16_t **l_804 = (void*)0;
                int16_t **l_805 = &p_970->g_488;
                int8_t *l_819 = &p_970->g_137;
                uint8_t *l_821[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t l_822 = 6L;
                uint32_t *l_833 = (void*)0;
                uint64_t l_838 = 0xA6D10BCC17A4E9EBL;
                int32_t l_846 = 0x77A101E3L;
                int i;
                for (p_970->g_428.f1 = 12; (p_970->g_428.f1 < 27); p_970->g_428.f1++)
                { /* block id: 339 */
                    (*l_20) ^= ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(0x6799D616L, 0x77EFBBB8L)), ((VECTOR(int32_t, 8))(p_970->g_793.wzzxzzzw)).s47, ((VECTOR(int32_t, 16))(p_970->g_794.xwzzywwyxxzxzzxx)).s10))).even;
                }
                if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(p_970->g_795.s2650)).yzyzyyyw, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))((safe_div_func_int16_t_s_s((safe_add_func_uint32_t_u_u((((VECTOR(int32_t, 2))(0x20EA3DE8L, (-1L))).lo > ((l_802 = l_800[8][4][1]) != ((*l_805) = l_800[2][1][1]))), ((safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((((((safe_add_func_int8_t_s_s(7L, (p_970->g_781.f1 , 8UL))) <= ((((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 8))((((((safe_add_func_uint16_t_u_u(FAKE_DIVERGE(p_970->local_2_offset, get_local_id(2), 10), 0x5833L)) , (((safe_lshift_func_uint8_t_u_s((p_970->g_616.s3 = ((VECTOR(uint8_t, 8))((safe_rshift_func_int8_t_s_s(((*l_819) = ((&p_970->g_120 != (void*)0) >= l_818)), l_820)), p_970->g_499, ((VECTOR(uint8_t, 2))(0x97L)), 255UL, p_970->g_131[0], 0x83L, 250UL)).s4), 3)) | 0x36A5L) > p_970->g_232.y)) == (-1L)) , (*l_4)) > l_822), ((VECTOR(int16_t, 2))(0x0E20L)), (-1L), ((VECTOR(int16_t, 4))(1L)))).s5235725741402051, ((VECTOR(int16_t, 16))(0x7F3BL)), ((VECTOR(int16_t, 16))(0x5050L))))).s27cc)).z , p_970->g_131[1]) == p_970->g_190.sb)) , &p_970->g_472) == &p_970->g_471) >= 6UL), l_818)), l_823)) < 4294967293UL))), l_823)), ((VECTOR(int32_t, 4))(0x26BAC255L)), 1L, (-1L), 0x5897329CL)))), ((VECTOR(int32_t, 8))(0x70F92390L))))).s5447416645174535)).s9)
                { /* block id: 346 */
                    uint32_t *l_827 = (void*)0;
                    uint32_t *l_828 = &p_970->g_215;
                    uint32_t **l_834 = &l_827;
                    uint64_t **l_836[10][1][3];
                    int32_t l_839 = 0x6A3FF41CL;
                    int32_t *l_844[6][7] = {{&p_970->g_171,&l_839,&p_970->g_428.f5,(void*)0,&p_970->g_5,&p_970->g_5,(void*)0},{&p_970->g_171,&l_839,&p_970->g_428.f5,(void*)0,&p_970->g_5,&p_970->g_5,(void*)0},{&p_970->g_171,&l_839,&p_970->g_428.f5,(void*)0,&p_970->g_5,&p_970->g_5,(void*)0},{&p_970->g_171,&l_839,&p_970->g_428.f5,(void*)0,&p_970->g_5,&p_970->g_5,(void*)0},{&p_970->g_171,&l_839,&p_970->g_428.f5,(void*)0,&p_970->g_5,&p_970->g_5,(void*)0},{&p_970->g_171,&l_839,&p_970->g_428.f5,(void*)0,&p_970->g_5,&p_970->g_5,(void*)0}};
                    uint32_t l_847 = 0x5945187DL;
                    int i, j, k;
                    for (i = 0; i < 10; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 3; k++)
                                l_836[i][j][k] = &p_970->g_473;
                        }
                    }
                    (*l_4) &= ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_824.s5761107777677220)))).s4c, ((VECTOR(int32_t, 16))(p_970->g_825.xxxxyxxyxyxyyxxx)).s24))).yyxxyyyx)), (int32_t)(((((!((*l_828) &= ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_826.yx)).xyxx)).x)) > ((VECTOR(int32_t, 2))(l_829.s76)).lo) >= (safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(abs(((VECTOR(uint8_t, 4))(abs(((VECTOR(uint8_t, 2))(p_970->g_832.s13)).yxxy)))))).wwwwyxxywywyzwxy)).sf, ((p_970->g_835 = ((*l_834) = l_833)) != (void*)0)))) , ((((l_837 = &p_970->g_229) != (((p_970->g_288[0][1] , l_838) == l_839) , l_840)) == ((((VECTOR(int16_t, 16))(6L, (safe_mul_func_uint8_t_u_u(0x61L, l_823)), ((VECTOR(int16_t, 4))(0x4C34L)), 0x27C1L, ((VECTOR(int16_t, 2))((-7L))), 0x2303L, 0L, ((VECTOR(int16_t, 2))((-1L))), 3L, (-3L), 0x1635L)).s6 ^ l_818) == l_824.s2)) == p_970->g_120.f0)) > l_843), (int32_t)l_818))).s1;
                    l_847--;
                }
                else
                { /* block id: 353 */
                    return l_838;
                }
            }
        }
        for (p_970->g_5 = 0; (p_970->g_5 <= 29); p_970->g_5 = safe_add_func_int64_t_s_s(p_970->g_5, 4))
        { /* block id: 360 */
            uint64_t l_852 = 0UL;
            uint64_t ***l_855 = (void*)0;
            uint64_t **l_858 = &l_837;
            uint64_t ***l_857[5] = {&l_858,&l_858,&l_858,&l_858,&l_858};
            int i;
            l_852--;
            atomic_min(&p_970->l_atomic_reduction[0], ((l_856 = &l_837) == (p_970->g_859 = &p_970->g_472)) + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_970->v_collective += p_970->l_atomic_reduction[0];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        }
        if (((safe_mul_func_int16_t_s_s((p_970->g_775 & 1L), (l_874 |= (((*l_4) >= FAKE_DIVERGE(p_970->local_1_offset, get_local_id(1), 10)) | (((*l_873) = (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(p_970->g_862.s1115)))), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(sub_sat(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(uint32_t, 2))(8UL, 0x9D4A57ADL)).yyxxyxxy, ((VECTOR(uint32_t, 16))(0x03B04BFFL, 0x72803B25L, (((*l_865) = l_863[1][1]) != (((*p_970->g_266) == (*p_970->g_266)) , &p_970->g_267[1][4][2])), ((safe_lshift_func_uint16_t_u_u(((l_829.s7 != ((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(p_970->g_868.ywyy)), (safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(7UL, p_970->g_453.sd)), l_829.s0)), 0UL, 0x954B25A7EA4570DCL, 0xC682A7715869DFDDL)).s3534230652240663, ((VECTOR(uint64_t, 16))(18446744073709551610UL))))).s5) , GROUP_DIVERGE(1, 1)), 1)) != p_970->g_137), 0x956A38A8L, 0x2E8365EAL, 0x4E74212CL, l_826.y, (*l_4), ((VECTOR(uint32_t, 2))(0UL)), 0x3526A3DEL, ((VECTOR(uint32_t, 2))(0UL)), 0x55390DBCL, 0x7D7BF62CL)).odd))).s45)), 8UL, 0UL)).wzyywxwwwwwxwxwy, ((VECTOR(uint32_t, 16))(4UL))))))).s19)), 0xAE7BC1B6L, 0xD780A9F3L)).s2 , (void*)0)) != (void*)0))))) , 0x0FE49612L))
        { /* block id: 369 */
            return l_829.s3;
        }
        else
        { /* block id: 371 */
            int32_t *l_875[5];
            int i;
            for (i = 0; i < 5; i++)
                l_875[i] = &p_970->g_171;
            --l_883;
        }
        if ((250UL < l_878[8]))
        { /* block id: 374 */
            int64_t l_891 = 0x298470FAC3A85C8AL;
            int32_t l_892 = 0x27DDE7ECL;
            int32_t l_893 = (-1L);
            int8_t l_894 = (-1L);
            int32_t l_895 = 1L;
            int32_t l_896 = 1L;
            if ((((p_970->g_763 , p_970->g_601[1].f0) , p_970->g_488) == p_970->g_488))
            { /* block id: 375 */
                int32_t *l_887 = &l_882;
                int32_t *l_888 = &p_970->g_428.f5;
                int32_t *l_889[6][8] = {{&l_881,(void*)0,(void*)0,&l_876,(void*)0,&l_876,(void*)0,(void*)0},{&l_881,(void*)0,(void*)0,&l_876,(void*)0,&l_876,(void*)0,(void*)0},{&l_881,(void*)0,(void*)0,&l_876,(void*)0,&l_876,(void*)0,(void*)0},{&l_881,(void*)0,(void*)0,&l_876,(void*)0,&l_876,(void*)0,(void*)0},{&l_881,(void*)0,(void*)0,&l_876,(void*)0,&l_876,(void*)0,(void*)0},{&l_881,(void*)0,(void*)0,&l_876,(void*)0,&l_876,(void*)0,(void*)0}};
                int32_t **l_902[3][5] = {{&p_970->g_30,&p_970->g_30,&p_970->g_30,&p_970->g_30,&p_970->g_30},{&p_970->g_30,&p_970->g_30,&p_970->g_30,&p_970->g_30,&p_970->g_30},{&p_970->g_30,&p_970->g_30,&p_970->g_30,&p_970->g_30,&p_970->g_30}};
                int i, j;
                (*p_970->g_886) = &l_876;
                ++p_970->g_898;
                l_903 = (p_970->g_784 = (((VECTOR(uint8_t, 2))(p_970->g_901.s25)).odd , ((*p_970->g_886) = &l_893)));
            }
            else
            { /* block id: 381 */
                return (*l_4);
            }
        }
        else
        { /* block id: 384 */
            int16_t l_907 = 0x7869L;
            VECTOR(int32_t, 2) l_915 = (VECTOR(int32_t, 2))(0x39C9BFDDL, 0x632C3096L);
            uint64_t **l_920 = (void*)0;
            int32_t l_923 = (-7L);
            int64_t l_924 = 0x4B8312D05BB61717L;
            int32_t **l_927 = (void*)0;
            int32_t **l_928 = &l_903;
            VECTOR(uint64_t, 2) l_944 = (VECTOR(uint64_t, 2))(1UL, 0xD465B6C89FE6F047L);
            uint16_t **l_953 = (void*)0;
            uint16_t *l_955[5];
            uint16_t **l_954 = &l_955[2];
            uint8_t l_959 = 0xBFL;
            uint8_t *l_960 = &l_883;
            int32_t *l_961 = (void*)0;
            int32_t *l_962 = &l_876;
            int i;
            for (i = 0; i < 5; i++)
                l_955[i] = (void*)0;
            (*p_970->g_925) = ((+(safe_lshift_func_int8_t_s_u(0x5FL, (((p_970->g_906 , ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0L, 0x15L)), l_907, ((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(p_970->g_908.sba33)).even)))))).yyxyyxyyxyyyyxxx, ((VECTOR(int8_t, 8))(p_970->g_909.yyxyyyyy)).s6634623325046076))).scc7e, ((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 2))((-1L), 0x3CL)), ((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 2))(0L, 0L)), ((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 16))((safe_div_func_int32_t_s_s((*p_970->g_30), (safe_div_func_uint16_t_u_u(((l_923 = ((((VECTOR(int64_t, 8))(l_914.wyzyzwyx)).s0 , ((l_915.x &= 0x8F1D3F71L) | ((safe_mod_func_uint64_t_u_u(((*l_837) |= (((safe_div_func_int8_t_s_s((l_920 != (p_970->g_859 = l_873)), l_907)) , ((safe_add_func_uint8_t_u_u(0x4DL, 2L)) >= 0x931226E6L)) > p_970->g_558[2][0])), 0x0EEDEF333CAB30EDL)) <= 7L))) , (*p_970->g_30))) != l_907), p_970->g_428.f1)))), 0x3DL, l_923, 0L, 0x77L, (*l_20), 0x57L, 1L, 0L, (-7L), l_924, ((VECTOR(int8_t, 2))((-1L))), (*l_20), (-3L), (-1L))).odd, ((VECTOR(int8_t, 8))((-10L)))))).s64))).xxxy, ((VECTOR(int8_t, 4))(0x5BL)), ((VECTOR(int8_t, 4))(0x46L))))).odd))).yyxx))), 3L, 3L, ((VECTOR(int8_t, 4))((-1L))), ((VECTOR(int8_t, 2))(0x67L)), 1L)).s3) & 6UL) , 255UL)))) , &p_970->g_763);
            (*l_928) = (void*)0;
            (*l_962) ^= ((safe_div_func_int8_t_s_s((((*l_4) == (((safe_lshift_func_uint8_t_u_s(((*l_960) = (((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(rhadd(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(abs_diff(((VECTOR(uint64_t, 4))(mad_sat(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(l_933.s4674420477041732)).odd)).lo, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(1UL, 1UL, 0x972B20D0C1C7432FL, ((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(abs_diff(((VECTOR(uint64_t, 16))(l_934.s1465532250275327)).sd5de, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_935.sf956)).yxxzxwwy)).hi))).hi)), ((VECTOR(uint64_t, 8))(min(((VECTOR(uint64_t, 2))(0x745BAF8E4F28B245L, 18446744073709551615UL)).xyyyyxxx, (uint64_t)((*l_837) &= (safe_mod_func_uint16_t_u_u(p_970->g_460.w, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(p_970->g_938.s0777427440626431)).sba)).hi)))))).s66))), ((VECTOR(uint64_t, 2))(p_970->g_939.xw)), 0UL)).s0502461536337333)).s2275, ((VECTOR(uint64_t, 16))(add_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(abs_diff(((VECTOR(uint64_t, 2))(0xE225924F7BB899CAL, 0x3D3D83EC4169DA8EL)).yyyx, ((VECTOR(uint64_t, 4))(l_940.s3155))))), ((VECTOR(uint64_t, 8))(l_941.yxxyywwy)), ((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(p_970->g_942.s4c665fea58c547f7)).even)).s51, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 2))(0xDC8E5EB82D55CBA0L, 2UL)), ((VECTOR(uint64_t, 4))(0xEB53A3B29DFF7E8BL, ((VECTOR(uint64_t, 2))(l_943.wy)), 0x5EC379C4D4291C38L)).lo))).xyxxxxyx)).odd)).odd))), 0xC85F20D04B36F839L, 18446744073709551615UL)), ((VECTOR(uint64_t, 4))(l_944.yyxx)).wzwwyxxwzyzyywwz))).s11f8))).wxxwzyzyxwzxxzyz, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))((l_897 || (((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(0x3519A644AF8A5B6DL, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(l_945.xyxxxxxxxyyyyyyy)).sad)), (-4L))).wzxxzxyy)), (safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_sub_func_int8_t_s_s((p_970->g_190.s1 |= ((l_952 != ((*l_954) = &p_970->g_898)) == ((l_956 | l_829.s4) , (!(l_957 != 0x90A4493EDE53CFC4L))))), l_958)), (*l_4))), (*l_20))), 1L, 0x56886B397A71CD2CL, p_970->g_428.f1, p_970->g_185.s3, 0x391F95A58750CBE1L, 0x60CCE85D6B0F33C6L, (-1L))).s9 != 1L) , (*l_20)) ^ 0x153268E5387D26CEL)), 18446744073709551609UL, l_959, ((VECTOR(uint64_t, 2))(4UL)), ((VECTOR(uint64_t, 2))(18446744073709551615UL)), 0x93665AB9FDA98112L)))).s4323701300755112))))).sec3a)).odd, ((VECTOR(uint64_t, 2))(0UL))))).yxyyyyyx)).s7 != (*l_20))), p_970->g_898)) & (*l_20)) == l_878[1])) > (*l_4)), p_970->g_795.s0)) >= 4294967288UL);
        }
    }
    else
    { /* block id: 397 */
        int32_t *l_963 = &l_876;
        int32_t *l_964 = &l_877;
        int32_t *l_965 = &l_845;
        int32_t *l_966[4][3][8] = {{{&l_882,&p_970->g_428.f5,&p_970->g_5,&p_970->g_428.f5,(void*)0,&l_877,&l_877,(void*)0},{&l_882,&p_970->g_428.f5,&p_970->g_5,&p_970->g_428.f5,(void*)0,&l_877,&l_877,(void*)0},{&l_882,&p_970->g_428.f5,&p_970->g_5,&p_970->g_428.f5,(void*)0,&l_877,&l_877,(void*)0}},{{&l_882,&p_970->g_428.f5,&p_970->g_5,&p_970->g_428.f5,(void*)0,&l_877,&l_877,(void*)0},{&l_882,&p_970->g_428.f5,&p_970->g_5,&p_970->g_428.f5,(void*)0,&l_877,&l_877,(void*)0},{&l_882,&p_970->g_428.f5,&p_970->g_5,&p_970->g_428.f5,(void*)0,&l_877,&l_877,(void*)0}},{{&l_882,&p_970->g_428.f5,&p_970->g_5,&p_970->g_428.f5,(void*)0,&l_877,&l_877,(void*)0},{&l_882,&p_970->g_428.f5,&p_970->g_5,&p_970->g_428.f5,(void*)0,&l_877,&l_877,(void*)0},{&l_882,&p_970->g_428.f5,&p_970->g_5,&p_970->g_428.f5,(void*)0,&l_877,&l_877,(void*)0}},{{&l_882,&p_970->g_428.f5,&p_970->g_5,&p_970->g_428.f5,(void*)0,&l_877,&l_877,(void*)0},{&l_882,&p_970->g_428.f5,&p_970->g_5,&p_970->g_428.f5,(void*)0,&l_877,&l_877,(void*)0},{&l_882,&p_970->g_428.f5,&p_970->g_5,&p_970->g_428.f5,(void*)0,&l_877,&l_877,(void*)0}}};
        int i, j, k;
        l_967[2]++;
    }
    return (*l_20);
}


/* ------------------------------------------ */
/* 
 * reads : p_970->g_30 p_970->g_428.f0
 * writes: p_970->g_5
 */
uint16_t  func_6(uint64_t  p_7, int32_t * p_8, int32_t * p_9, int32_t  p_10, struct S4 * p_970)
{ /* block id: 327 */
    (*p_970->g_30) = (FAKE_DIVERGE(p_970->global_0_offset, get_global_id(0), 10) <= (safe_lshift_func_uint8_t_u_u(FAKE_DIVERGE(p_970->local_2_offset, get_local_id(2), 10), 1)));
    return p_970->g_428.f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_970->g_30 p_970->g_5 p_970->g_499 p_970->g_428.f1 p_970->g_171 p_970->g_120.f0 p_970->g_548 p_970->g_558 p_970->g_41 p_970->g_517 p_970->g_471 p_970->g_286 p_970->g_578 p_970->g_133 p_970->g_189 p_970->g_428.f4 p_970->g_601 p_970->g_608 p_970->g_616 p_970->g_618 p_970->g_620 p_970->g_232 p_970->g_428.f5 p_970->g_460 p_970->g_290 p_970->g_651 p_970->g_660 p_970->l_comm_values p_970->g_149 p_970->g_488 p_970->g_57 p_970->g_763 p_970->g_770 p_970->g_772 p_970->g_773 p_970->g_276 p_970->g_120.f1 p_970->g_781
 * writes: p_970->g_5 p_970->g_499 p_970->g_428.f1 p_970->g_137 p_970->g_120.f0 p_970->g_189 p_970->g_232 p_970->g_428.f4 p_970->g_133 p_970->g_236 p_970->g_120 p_970->g_782 p_970->g_389
 */
int32_t  func_11(uint8_t  p_12, uint64_t  p_13, int32_t  p_14, int16_t  p_15, struct S4 * p_970)
{ /* block id: 199 */
    int32_t ***l_492[2][1][4] = {{{&p_970->g_29,&p_970->g_29,&p_970->g_29,&p_970->g_29}},{{&p_970->g_29,&p_970->g_29,&p_970->g_29,&p_970->g_29}}};
    int64_t l_495 = (-1L);
    int32_t l_496 = 1L;
    int32_t l_497 = 1L;
    VECTOR(int32_t, 16) l_518 = (VECTOR(int32_t, 16))(0x67B91AC3L, (VECTOR(int32_t, 4))(0x67B91AC3L, (VECTOR(int32_t, 2))(0x67B91AC3L, (-5L)), (-5L)), (-5L), 0x67B91AC3L, (-5L), (VECTOR(int32_t, 2))(0x67B91AC3L, (-5L)), (VECTOR(int32_t, 2))(0x67B91AC3L, (-5L)), 0x67B91AC3L, (-5L), 0x67B91AC3L, (-5L));
    union U3 *l_551 = &p_970->g_552;
    union U3 **l_550 = &l_551;
    uint16_t *l_553 = (void*)0;
    VECTOR(uint8_t, 8) l_617 = (VECTOR(uint8_t, 8))(0x76L, (VECTOR(uint8_t, 4))(0x76L, (VECTOR(uint8_t, 2))(0x76L, 255UL), 255UL), 255UL, 0x76L, 255UL);
    struct S2 l_761 = {0x8CC8L,0x6CB7EB3AL};
    uint8_t *l_777 = &p_970->g_133[1];
    uint8_t **l_776 = &l_777;
    int32_t l_778 = 0x32E0B21EL;
    uint32_t l_783 = 0xF5EAB9D4L;
    int i, j, k;
    if (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x09E878C9L, 0x11E349ABL)))).lo)
    { /* block id: 200 */
        int16_t l_493 = (-1L);
        VECTOR(int32_t, 16) l_494 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x49410279L), 0x49410279L), 0x49410279L, 0L, 0x49410279L, (VECTOR(int32_t, 2))(0L, 0x49410279L), (VECTOR(int32_t, 2))(0L, 0x49410279L), 0L, 0x49410279L, 0L, 0x49410279L);
        int32_t l_498 = 0x4B07BBABL;
        uint64_t **l_504 = &p_970->g_471;
        uint32_t *l_591 = (void*)0;
        VECTOR(int32_t, 2) l_595 = (VECTOR(int32_t, 2))((-1L), 0L);
        VECTOR(int8_t, 4) l_611 = (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 1L), 1L);
        int32_t *l_629 = &p_970->g_428.f5;
        uint8_t *l_668 = &p_970->g_133[6];
        uint8_t **l_667 = &l_668;
        int i;
        (*p_970->g_30) |= (&p_970->g_29 != l_492[0][0][0]);
        --p_970->g_499;
        for (l_497 = 0; (l_497 < (-1)); --l_497)
        { /* block id: 205 */
            VECTOR(int16_t, 16) l_509 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x3F8AL), 0x3F8AL), 0x3F8AL, 1L, 0x3F8AL, (VECTOR(int16_t, 2))(1L, 0x3F8AL), (VECTOR(int16_t, 2))(1L, 0x3F8AL), 1L, 0x3F8AL, 1L, 0x3F8AL);
            struct S2 *l_537 = &p_970->g_120;
            uint8_t *l_637 = &p_970->g_154;
            uint8_t **l_636 = &l_637;
            int32_t l_638 = 0L;
            int i;
            if (((void*)0 == l_504))
            { /* block id: 206 */
                uint16_t l_523 = 1UL;
                uint8_t *l_525 = &p_970->g_499;
                int32_t l_559[4] = {0x2507D538L,0x2507D538L,0x2507D538L,0x2507D538L};
                int i;
                for (p_970->g_428.f1 = 0; (p_970->g_428.f1 <= (-8)); p_970->g_428.f1 = safe_sub_func_uint32_t_u_u(p_970->g_428.f1, 6))
                { /* block id: 209 */
                    int64_t l_512 = 0x4CA90196065421C8L;
                    uint8_t *l_524 = (void*)0;
                    int32_t *l_527 = &p_970->g_171;
                    struct S2 *l_536 = (void*)0;
                    uint16_t l_593 = 65533UL;
                    if ((safe_sub_func_uint16_t_u_u(((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(abs(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),VECTOR(int16_t, 8),((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 4))(l_509.sc64f)).wwxwyxyy))), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 16))(0x5921L, (safe_div_func_int16_t_s_s(p_14, l_512)), 0x3100L, (safe_mul_func_uint8_t_u_u((+p_970->g_232.y), 0x58L)), (-1L), (((&p_12 == (l_509.s1 , (((**p_970->g_394) , (((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 2))(p_970->g_517.yy)).xyyxyyyxyxyxxyyy, (int32_t)((VECTOR(int32_t, 4))(l_518.sd40d)).w, (int32_t)(safe_lshift_func_uint8_t_u_s(l_509.s1, 4))))).s8 < (safe_mod_func_int64_t_s_s((255UL == p_14), (-1L))))) , (void*)0))) ^ 1UL) >= p_13), ((VECTOR(int16_t, 4))((-1L))), l_523, 0L, ((VECTOR(int16_t, 4))(0x122BL)))).sef, (int16_t)p_15))))).xyyxxxxx, ((VECTOR(int16_t, 8))(0x3AC3L))))).s5646264513250565))))).even)).s0 , l_524) != l_525), p_14)))
                    { /* block id: 210 */
                        return l_523;
                    }
                    else
                    { /* block id: 212 */
                        int32_t *l_526 = &p_970->g_171;
                        l_527 = l_526;
                    }
                    if ((*l_527))
                        continue;
                    if (p_14)
                        break;
                    for (p_970->g_137 = 0; (p_970->g_137 == (-9)); p_970->g_137--)
                    { /* block id: 219 */
                        uint16_t *l_538 = (void*)0;
                        uint16_t *l_539 = &l_523;
                        uint16_t *l_540 = &p_970->g_120.f0;
                        int16_t *l_554 = (void*)0;
                        int16_t *l_555 = &l_493;
                        int8_t *l_560 = (void*)0;
                        int8_t *l_561[3];
                        int32_t l_562 = 0x5E75B321L;
                        uint32_t *l_592[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        struct S2 **l_594 = &l_537;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_561[i] = (void*)0;
                        l_562 ^= (!(safe_sub_func_int8_t_s_s((*l_527), ((safe_rshift_func_int16_t_s_s((((*l_540) &= ((*l_539) = (safe_add_func_uint32_t_u_u(FAKE_DIVERGE(p_970->global_0_offset, get_global_id(0), 10), (l_536 == l_537))))) > (safe_mod_func_int64_t_s_s((safe_unary_minus_func_int32_t_s(((((p_970->g_189.x = (((safe_mul_func_int16_t_s_s(((p_12 = ((*l_525) = p_15)) <= (p_970->g_548 != l_550)), (((*l_555) = ((void*)0 != l_553)) <= ((safe_mod_func_uint16_t_u_u((p_15 == p_15), 0x01E5L)) > p_970->g_5)))) || p_970->g_558[4][3]) & l_559[0])) & p_970->g_41.s0) || p_15) || p_12))), p_970->g_517.x))), 2)) != l_509.se))));
                        l_494.sc = ((p_12 || (p_970->g_189.x &= ((safe_add_func_int16_t_s_s((((void*)0 == (*l_504)) || p_970->g_286), (((safe_mul_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(p_970->g_573.s3160552527644033)).even)).s0, ((safe_rshift_func_uint8_t_u_s(((safe_add_func_uint64_t_u_u((((p_970->g_578 == (void*)0) , (((safe_lshift_func_int8_t_s_s(((~(p_970->g_232.y = (safe_mul_func_uint8_t_u_u((++(*l_525)), (safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s((l_591 != l_527), ((void*)0 != &p_970->g_215))), (*l_527))))))) == p_14), 4)) <= 4294967287UL) | 0x52L)) <= 0x080BL), l_562)) == l_523), p_970->g_133[5])) & p_13))), l_562)), (*l_527))) < p_12) ^ p_14))) & l_593))) | 0L);
                        (*p_970->g_30) = (p_13 != l_494.s8);
                        (*l_594) = (void*)0;
                    }
                }
                (*p_970->g_30) ^= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_595.yyxyxxyy)).s60)).yxyyyyxy)).lo)).x;
                if (p_14)
                    continue;
            }
            else
            { /* block id: 237 */
                uint64_t *l_598 = &p_970->g_428.f4;
                uint8_t *l_619 = &p_970->g_133[2];
                uint32_t l_621 = 0x39C3938DL;
                int32_t l_622 = 0L;
                l_622 &= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))((((safe_sub_func_uint64_t_u_u((--(*l_598)), (p_970->g_601[1] , (safe_div_func_int64_t_s_s(l_509.s8, (safe_lshift_func_uint16_t_u_s((safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(p_970->g_608.s9f8e)).y, ((((((((+p_12) >= ((safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_611.zx)).xyyyyyyy)).s2, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(0UL, (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(0x2EL, 0)), 7)), ((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 8))(0x82L, p_13, 249UL, ((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 16))(1UL, ((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 4))(p_970->g_616.s6714)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(l_617.s13305105)).s71)).xyxy))), 0xBEL, ((VECTOR(uint8_t, 2))(0xEEL, 0x37L)), 0UL, 0xEBL, ((*l_619) |= (((VECTOR(int64_t, 2))(p_970->g_618.yx)).lo > p_970->g_189.y)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 2))(p_970->g_620.s06)), ((VECTOR(uint8_t, 16))(251UL, 255UL, 0UL, (!((((l_509.s8 != l_509.s7) | l_621) , l_621) , 1UL)), 2UL, 251UL, 0xCDL, ((VECTOR(uint8_t, 2))(255UL)), p_15, FAKE_DIVERGE(p_970->group_1_offset, get_group_id(1), 10), ((VECTOR(uint8_t, 2))(0xC4L)), FAKE_DIVERGE(p_970->global_1_offset, get_global_id(1), 10), 0x08L, 248UL)).se0))).yyxx)).odd)), 0xAEL, 6UL, 0xDAL)), ((VECTOR(uint8_t, 16))(255UL))))).s5, p_970->g_616.s3, 0UL, 0x00L, 0x63L)).s54, ((VECTOR(uint8_t, 2))(255UL)), ((VECTOR(uint8_t, 2))(255UL))))), p_13, ((VECTOR(uint8_t, 2))(5UL)), 0x36L)))).s0)) > 0x7F8DF3BE2D64D7D4L)) & 0x84D4L) , p_13) == (*p_970->g_30)) == 0x2CL) > 0xEDE777EAF19A6A4FL) & FAKE_DIVERGE(p_970->global_2_offset, get_global_id(2), 10)))), p_970->g_232.x))))))) , 0x0F43690EL) , l_621), (-5L), l_509.s5, l_509.s2, l_621, 0x42BE742FL, 0x6AEE916FL, 9L)).hi)), 0x0D7A9554L, l_494.s8, 0L, 0x0D6A6343L)).s4;
                for (l_495 = 0; (l_495 >= (-3)); l_495 = safe_sub_func_int32_t_s_s(l_495, 7))
                { /* block id: 243 */
                    int32_t *l_628 = (void*)0;
                    for (p_970->g_499 = 0; (p_970->g_499 < 17); p_970->g_499 = safe_add_func_uint64_t_u_u(p_970->g_499, 6))
                    { /* block id: 246 */
                        int32_t *l_627[4] = {&l_622,&l_622,&l_622,&l_622};
                        int i;
                        l_627[0] = l_627[2];
                        l_629 = l_628;
                    }
                }
                return (*p_970->g_30);
            }
            (*p_970->g_30) |= (*l_629);
            (*p_970->g_30) = (safe_lshift_func_uint8_t_u_s((l_509.sd >= (safe_sub_func_int64_t_s_s(p_13, (safe_rshift_func_uint8_t_u_s((l_636 != ((p_970->g_460.w , ((l_638 = p_970->g_290) != (safe_lshift_func_uint8_t_u_u((((safe_div_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(((p_970->g_236.y = p_970->g_517.x) < (((VECTOR(int8_t, 2))(0x78L, 1L)).odd , ((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(p_970->g_651.ywxwwwxy)).s0, 3)), 3)) > (safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),VECTOR(int8_t, 8),((VECTOR(int8_t, 8))((safe_mod_func_uint16_t_u_u((safe_add_func_int16_t_s_s((-1L), ((safe_rshift_func_uint16_t_u_s((((VECTOR(uint64_t, 8))(upsample(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 4))(p_970->g_660.s6570)), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(4294967290UL, FAKE_DIVERGE(p_970->global_1_offset, get_global_id(1), 10), 0x8A3E8E34L, 1UL)).yywzyywyzwxyxzxy)).sec53))).w, 0x436AB62EL, 0x4A09C70FL, 0xB3B41552L)), (safe_lshift_func_uint16_t_u_s((safe_div_func_uint64_t_u_u(FAKE_DIVERGE(p_970->group_1_offset, get_group_id(1), 10), ((p_970->l_comm_values[(safe_mod_func_uint32_t_u_u(p_970->tid, 19))] < (safe_add_func_uint32_t_u_u((p_13 , l_509.s2), p_13))) & p_970->g_120.f0))), 6)), 0xC4DB96C1L, 0x91BB86AEL, 0xB857DAD3L)), ((VECTOR(uint32_t, 8))(1UL))))).s0 , p_970->g_189.x), (*l_629))) || 18446744073709551615UL))), (*l_629))), 0x62L, 0x3AL, p_970->g_149.s8, 0x13L, l_509.s6, 0x53L, (-1L))), ((VECTOR(int8_t, 8))(1L)), ((VECTOR(int8_t, 8))(1L))))).s5, p_14))))), p_14)), p_12)) , (void*)0) != p_970->g_488), 6)))) , l_667)), 6))))), p_970->g_57[0][5]));
            return l_509.sc;
        }
    }
    else
    { /* block id: 259 */
        struct S2 *l_762 = &p_970->g_120;
        int32_t l_771 = 0x4D7CB976L;
        if ((atomic_inc(&p_970->l_atomic_input[1]) == 4))
        { /* block id: 261 */
            uint32_t l_669 = 0x9D2A747FL;
            int64_t l_670[7] = {0x19FD9929AFF6E522L,0x33BD916EAFFD8BDCL,0x19FD9929AFF6E522L,0x19FD9929AFF6E522L,0x33BD916EAFFD8BDCL,0x19FD9929AFF6E522L,0x19FD9929AFF6E522L};
            VECTOR(int32_t, 8) l_671 = (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 5L), 5L), 5L, 9L, 5L);
            int64_t l_672 = 0x172FFC47D18EAC7DL;
            int16_t l_673 = 0L;
            VECTOR(uint16_t, 4) l_674 = (VECTOR(uint16_t, 4))(0xACB6L, (VECTOR(uint16_t, 2))(0xACB6L, 0UL), 0UL);
            int32_t *l_675 = (void*)0;
            int32_t l_676 = 0x42DA814CL;
            int i;
            l_675 = (((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(0x2C7EL, 4L, l_669, (l_670[2] , (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_671.s07635715)))), ((VECTOR(int32_t, 2))(0L, 0L)).xyyyxxyy))).hi)).w , l_672)), (l_673 = 0x390DL), 0x635EL, 4L, (-5L))).s37, ((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 4))(l_674.yxyx))))).hi))).lo , (void*)0);
            if (l_676)
            { /* block id: 264 */
                int32_t l_677 = 0x3A41B537L;
                int32_t *l_717[7][7] = {{(void*)0,&l_677,(void*)0,&l_677,(void*)0,(void*)0,&l_677},{(void*)0,&l_677,(void*)0,&l_677,(void*)0,(void*)0,&l_677},{(void*)0,&l_677,(void*)0,&l_677,(void*)0,(void*)0,&l_677},{(void*)0,&l_677,(void*)0,&l_677,(void*)0,(void*)0,&l_677},{(void*)0,&l_677,(void*)0,&l_677,(void*)0,(void*)0,&l_677},{(void*)0,&l_677,(void*)0,&l_677,(void*)0,(void*)0,&l_677},{(void*)0,&l_677,(void*)0,&l_677,(void*)0,(void*)0,&l_677}};
                int32_t *l_718[5] = {&l_677,&l_677,&l_677,&l_677,&l_677};
                int i, j;
                l_675 = (void*)0;
                for (l_677 = 0; (l_677 != 17); l_677++)
                { /* block id: 268 */
                    uint16_t l_680 = 0x672DL;
                    int64_t l_683[3][5];
                    VECTOR(uint32_t, 8) l_684 = (VECTOR(uint32_t, 8))(0xD81EE869L, (VECTOR(uint32_t, 4))(0xD81EE869L, (VECTOR(uint32_t, 2))(0xD81EE869L, 0xBD29A734L), 0xBD29A734L), 0xBD29A734L, 0xD81EE869L, 0xBD29A734L);
                    VECTOR(int32_t, 4) l_687 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-9L)), (-9L));
                    VECTOR(int32_t, 2) l_688 = (VECTOR(int32_t, 2))(0x719032A9L, 0x7BD2B91BL);
                    VECTOR(int32_t, 8) l_689 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-7L)), (-7L)), (-7L), 1L, (-7L));
                    VECTOR(uint8_t, 2) l_690 = (VECTOR(uint8_t, 2))(0xF2L, 0UL);
                    uint8_t l_691 = 0x3CL;
                    VECTOR(uint32_t, 8) l_692 = (VECTOR(uint32_t, 8))(0x4B2F934CL, (VECTOR(uint32_t, 4))(0x4B2F934CL, (VECTOR(uint32_t, 2))(0x4B2F934CL, 4UL), 4UL), 4UL, 0x4B2F934CL, 4UL);
                    VECTOR(uint32_t, 8) l_693 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 6UL), 6UL), 6UL, 1UL, 6UL);
                    VECTOR(uint32_t, 4) l_694 = (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 0x31CC2DC9L), 0x31CC2DC9L);
                    int32_t l_695 = (-9L);
                    int8_t l_696 = (-1L);
                    VECTOR(int32_t, 2) l_697 = (VECTOR(int32_t, 2))(0L, 0x4633645BL);
                    VECTOR(int32_t, 16) l_698 = (VECTOR(int32_t, 16))(0x1AC2357EL, (VECTOR(int32_t, 4))(0x1AC2357EL, (VECTOR(int32_t, 2))(0x1AC2357EL, (-9L)), (-9L)), (-9L), 0x1AC2357EL, (-9L), (VECTOR(int32_t, 2))(0x1AC2357EL, (-9L)), (VECTOR(int32_t, 2))(0x1AC2357EL, (-9L)), 0x1AC2357EL, (-9L), 0x1AC2357EL, (-9L));
                    VECTOR(int32_t, 4) l_699 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x67485624L), 0x67485624L);
                    VECTOR(int32_t, 4) l_700 = (VECTOR(int32_t, 4))(0x0D6914E1L, (VECTOR(int32_t, 2))(0x0D6914E1L, 0x3A2191CAL), 0x3A2191CAL);
                    VECTOR(int32_t, 4) l_701 = (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x42132033L), 0x42132033L);
                    VECTOR(int32_t, 2) l_702 = (VECTOR(int32_t, 2))(0x095A9974L, 0L);
                    VECTOR(int32_t, 8) l_703 = (VECTOR(int32_t, 8))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, (-1L)), (-1L)), (-1L), 2L, (-1L));
                    VECTOR(int32_t, 16) l_704 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 2L), 2L), 2L, (-1L), 2L, (VECTOR(int32_t, 2))((-1L), 2L), (VECTOR(int32_t, 2))((-1L), 2L), (-1L), 2L, (-1L), 2L);
                    VECTOR(int32_t, 2) l_705 = (VECTOR(int32_t, 2))(8L, 0x2E611C21L);
                    VECTOR(int32_t, 2) l_706 = (VECTOR(int32_t, 2))(7L, (-9L));
                    VECTOR(int32_t, 8) l_707 = (VECTOR(int32_t, 8))(0x3DA9DEF7L, (VECTOR(int32_t, 4))(0x3DA9DEF7L, (VECTOR(int32_t, 2))(0x3DA9DEF7L, 3L), 3L), 3L, 0x3DA9DEF7L, 3L);
                    VECTOR(int32_t, 4) l_708 = (VECTOR(int32_t, 4))(0x2570B86AL, (VECTOR(int32_t, 2))(0x2570B86AL, 0x6DFFA062L), 0x6DFFA062L);
                    VECTOR(int32_t, 8) l_709 = (VECTOR(int32_t, 8))(0x525F4682L, (VECTOR(int32_t, 4))(0x525F4682L, (VECTOR(int32_t, 2))(0x525F4682L, 0x2A33C53DL), 0x2A33C53DL), 0x2A33C53DL, 0x525F4682L, 0x2A33C53DL);
                    VECTOR(int32_t, 2) l_710 = (VECTOR(int32_t, 2))(8L, 8L);
                    VECTOR(int16_t, 16) l_711 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int16_t, 2))(1L, 0L), (VECTOR(int16_t, 2))(1L, 0L), 1L, 0L, 1L, 0L);
                    VECTOR(int16_t, 8) l_712 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x798CL), 0x798CL), 0x798CL, 0L, 0x798CL);
                    VECTOR(uint16_t, 2) l_713 = (VECTOR(uint16_t, 2))(0x93EDL, 65535UL);
                    union U3 l_714 = {{1UL,0x436AE4CEL}};/* VOLATILE GLOBAL l_714 */
                    int64_t l_715 = 1L;
                    uint16_t l_716 = 0x3401L;
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_683[i][j] = 0x26FC4797DB1B6BA2L;
                    }
                    --l_680;
                    l_671.s3 = (-1L);
                    l_684.s1--;
                    l_671.s7 |= ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_687.xzyzxxwx)).s6260202463161720)).s3209, ((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 2))(l_688.yy)).xxyyyyxyxyxyyxyx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(7L, 0x103113C0L)))).yyyyxxyyyyyxyyxy))).s3a08, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(0x37373964L, ((VECTOR(int32_t, 4))(l_689.s3233)), 4L, 3L, (l_687.w = l_690.x), (((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 8))(l_691, FAKE_DIVERGE(p_970->global_0_offset, get_global_id(0), 10), ((VECTOR(uint32_t, 4))(l_692.s6403)), 0UL, 4294967292UL)).odd, ((VECTOR(uint32_t, 16))(l_693.s7746345027763327)).s578d, ((VECTOR(uint32_t, 2))(l_694.wx)).yxyy))).w , l_695), l_696, ((VECTOR(int32_t, 2))(l_697.xy)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_698.s7707)).ywyzxxzyyyzwzxzw)), ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(0L, 0x0FEF8357L)).yxxx, ((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 16))(l_699.xzyzxzxxzxxzwxyw)), ((VECTOR(int32_t, 8))(l_700.xxwwxyyy)).s0173030266673617))).s826e))).wzywyyyxyyzywxyw, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_701.yz)), ((VECTOR(int32_t, 4))(l_702.yyxy)), 1L, 1L)).odd)).wxzxwzxx, ((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(l_703.s0004)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_704.s4968e38d0ff21c3b)).s17)).yyxx))).yzyzwzwwwyywzxxz)), ((VECTOR(int32_t, 4))(l_705.yxyy)).wwzyxxxzwwwyzwxw))))), ((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 4))(l_706.yxyy)).wzwywwwxwxwxywyw, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_707.s11)), 0x6572A8F8L, 0x34B84797L, 0x369BC7F2L, (l_702.y &= 8L), 0L, 0x7511F271L, ((VECTOR(int32_t, 4))(l_708.zzzx)), ((VECTOR(int32_t, 2))(0x418FB594L, 1L)), 0x0EF28836L, 0x4ADCD7B9L)))))))).even, ((VECTOR(int32_t, 2))(l_709.s77)).xyyxyyyx))).s62)).xxyyyyxxyyxxyyxx))).se704)))).y, ((VECTOR(int32_t, 2))(l_710.xy)), 0x35773B6AL)).hi)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x05853E24L, 1L, 0x71A797EEL, 0x2D5B1DE9L)).xzxzwxyw)))).s1c8a)).hi, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_711.s2f3a)), ((VECTOR(int16_t, 2))(l_712.s31)), 0x3097L, 0x46DCL)), ((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 2))(l_713.xy)).xyyx, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 8))((l_714 , l_715), ((VECTOR(uint16_t, 4))(65534UL)), ((VECTOR(uint16_t, 2))(0x3915L)), 65531UL)), ((VECTOR(uint16_t, 8))(0xE459L))))).s6027475211466240)).s89f3, ((VECTOR(uint16_t, 4))(65535UL))))), ((VECTOR(uint16_t, 4))(0UL))))).yxwwyzzy))), l_716, 0x5FEA1A7DL, ((VECTOR(int32_t, 4))(0x25FD9D32L)), (-1L), 0L)).s6c))).xyyy))).hi, ((VECTOR(int32_t, 2))(0x5CE06C2AL))))).even;
                }
                l_718[3] = l_717[5][1];
                l_671.s1 = 0L;
            }
            else
            { /* block id: 278 */
                struct S2 l_719 = {1UL,0x6CA330F3L};
                uint32_t l_720 = 6UL;
                struct S0 l_721 = {0x2775B66EL,0xFC9F5AFE1B61789EL,1L};/* VOLATILE GLOBAL l_721 */
                VECTOR(uint32_t, 8) l_722 = (VECTOR(uint32_t, 8))(0x84B7CFE3L, (VECTOR(uint32_t, 4))(0x84B7CFE3L, (VECTOR(uint32_t, 2))(0x84B7CFE3L, 0UL), 0UL), 0UL, 0x84B7CFE3L, 0UL);
                uint16_t l_723 = 0x8618L;
                int32_t l_724 = 1L;
                int8_t l_725 = 1L;
                int32_t *l_753[4][2][3] = {{{&l_724,&l_724,&l_724},{&l_724,&l_724,&l_724}},{{&l_724,&l_724,&l_724},{&l_724,&l_724,&l_724}},{{&l_724,&l_724,&l_724},{&l_724,&l_724,&l_724}},{{&l_724,&l_724,&l_724},{&l_724,&l_724,&l_724}}};
                uint32_t l_760 = 0UL;
                int i, j, k;
                if (((((l_719 , (l_720 , l_721)) , ((VECTOR(uint32_t, 4))(l_722.s3472)).y) , (l_723 , (l_724 , l_725))) , (-2L)))
                { /* block id: 279 */
                    int32_t l_727 = 0x7ECE0786L;
                    int32_t *l_726[7][2] = {{&l_727,&l_727},{&l_727,&l_727},{&l_727,&l_727},{&l_727,&l_727},{&l_727,&l_727},{&l_727,&l_727},{&l_727,&l_727}};
                    int32_t *l_728 = &l_727;
                    int32_t *l_729[3];
                    int32_t *l_730[10][10] = {{&l_727,&l_727,&l_727,&l_727,&l_727,&l_727,&l_727,(void*)0,&l_727,&l_727},{&l_727,&l_727,&l_727,&l_727,&l_727,&l_727,&l_727,(void*)0,&l_727,&l_727},{&l_727,&l_727,&l_727,&l_727,&l_727,&l_727,&l_727,(void*)0,&l_727,&l_727},{&l_727,&l_727,&l_727,&l_727,&l_727,&l_727,&l_727,(void*)0,&l_727,&l_727},{&l_727,&l_727,&l_727,&l_727,&l_727,&l_727,&l_727,(void*)0,&l_727,&l_727},{&l_727,&l_727,&l_727,&l_727,&l_727,&l_727,&l_727,(void*)0,&l_727,&l_727},{&l_727,&l_727,&l_727,&l_727,&l_727,&l_727,&l_727,(void*)0,&l_727,&l_727},{&l_727,&l_727,&l_727,&l_727,&l_727,&l_727,&l_727,(void*)0,&l_727,&l_727},{&l_727,&l_727,&l_727,&l_727,&l_727,&l_727,&l_727,(void*)0,&l_727,&l_727},{&l_727,&l_727,&l_727,&l_727,&l_727,&l_727,&l_727,(void*)0,&l_727,&l_727}};
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_729[i] = (void*)0;
                    l_729[2] = (l_728 = (l_675 = l_726[5][0]));
                    l_675 = l_730[6][4];
                }
                else
                { /* block id: 284 */
                    int32_t l_731[1][10][2] = {{{0L,8L},{0L,8L},{0L,8L},{0L,8L},{0L,8L},{0L,8L},{0L,8L},{0L,8L},{0L,8L},{0L,8L}}};
                    int i, j, k;
                    for (l_731[0][8][0] = 0; (l_731[0][8][0] > 28); l_731[0][8][0] = safe_add_func_int16_t_s_s(l_731[0][8][0], 8))
                    { /* block id: 287 */
                        uint64_t l_734 = 18446744073709551615UL;
                        int16_t l_735 = (-7L);
                        int32_t l_736 = 0x547055EBL;
                        l_671.s1 = 3L;
                        l_724 = l_734;
                        l_736 &= l_735;
                        l_671.s6 |= 0x12CE5A03L;
                    }
                    for (l_731[0][8][0] = 0; (l_731[0][8][0] <= 7); l_731[0][8][0] = safe_add_func_uint8_t_u_u(l_731[0][8][0], 6))
                    { /* block id: 295 */
                        uint32_t l_739 = 0x1BC411DBL;
                        VECTOR(int32_t, 4) l_740 = (VECTOR(int32_t, 4))(0x27D0C994L, (VECTOR(int32_t, 2))(0x27D0C994L, 0x2B54ED1EL), 0x2B54ED1EL);
                        VECTOR(int32_t, 8) l_741 = (VECTOR(int32_t, 8))(0x6B7C45A6L, (VECTOR(int32_t, 4))(0x6B7C45A6L, (VECTOR(int32_t, 2))(0x6B7C45A6L, 4L), 4L), 4L, 0x6B7C45A6L, 4L);
                        VECTOR(int32_t, 16) l_742 = (VECTOR(int32_t, 16))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x36BE583BL), 0x36BE583BL), 0x36BE583BL, (-10L), 0x36BE583BL, (VECTOR(int32_t, 2))((-10L), 0x36BE583BL), (VECTOR(int32_t, 2))((-10L), 0x36BE583BL), (-10L), 0x36BE583BL, (-10L), 0x36BE583BL);
                        VECTOR(int16_t, 2) l_743 = (VECTOR(int16_t, 2))((-1L), 0x0642L);
                        uint16_t l_744 = 0UL;
                        VECTOR(uint32_t, 16) l_745 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967288UL), 4294967288UL), 4294967288UL, 4294967295UL, 4294967288UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967288UL), (VECTOR(uint32_t, 2))(4294967295UL, 4294967288UL), 4294967295UL, 4294967288UL, 4294967295UL, 4294967288UL);
                        int16_t l_746 = (-1L);
                        VECTOR(int32_t, 8) l_747 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 7L), 7L), 7L, 1L, 7L);
                        int64_t l_748 = 0x7FCAC24DE305710BL;
                        uint8_t l_749 = 3UL;
                        uint32_t l_750 = 0xD7F1AE6EL;
                        int8_t l_751 = 0x79L;
                        int32_t *l_752 = (void*)0;
                        int i;
                        l_749 &= (l_739 , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(l_740.zxzy)).odd, ((VECTOR(int32_t, 2))(l_741.s05))))), 0L, ((VECTOR(int32_t, 2))(1L, 0x58BC658BL)), 1L, 1L, (-10L))).lo, ((VECTOR(int32_t, 16))(l_742.s01b5c7fecd33065e)).sb8c8))).zwwyxxxx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(l_743.xxxx)).odd, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(GROUP_DIVERGE(1, 1), 0x33DDL, l_744, 0x8FDEL, 65535UL, 0x0C8DL, 0UL, 0x71B9L)))).s45))), ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))((((VECTOR(uint32_t, 2))(l_745.s36)).hi , 0L), l_746, (-1L), ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))((-3L), (-4L))).xxyx, ((VECTOR(int32_t, 8))((-1L), ((VECTOR(int32_t, 4))(l_747.s6742)), l_748, 0x1E7F331DL, 0x69E92DA1L)).lo, ((VECTOR(int32_t, 4))((-1L)))))), 1L)), ((VECTOR(int32_t, 8))(0x2FFABF8AL))))).s33))).xyxyyyxyyyyxyxyy, ((VECTOR(int32_t, 16))((-10L))), ((VECTOR(int32_t, 16))(0L))))).s80)).xxxxxxxy))))).s4);
                        l_751 = l_750;
                        l_675 = l_752;
                    }
                }
                l_675 = l_753[1][1][2];
                for (l_722.s2 = 0; (l_722.s2 > 32); l_722.s2++)
                { /* block id: 304 */
                    struct S2 l_757 = {65535UL,8L};
                    struct S2 *l_756 = &l_757;
                    VECTOR(int32_t, 16) l_758 = (VECTOR(int32_t, 16))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x2679AB2BL), 0x2679AB2BL), 0x2679AB2BL, (-10L), 0x2679AB2BL, (VECTOR(int32_t, 2))((-10L), 0x2679AB2BL), (VECTOR(int32_t, 2))((-10L), 0x2679AB2BL), (-10L), 0x2679AB2BL, (-10L), 0x2679AB2BL);
                    uint8_t l_759 = 0x8EL;
                    int i;
                    l_756 = (void*)0;
                    l_758.s0 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_758.s827e14eb)).odd)).y;
                    l_758.sf = l_759;
                }
                l_671.s2 |= (l_760 ^= 0x4D00665DL);
            }
            unsigned int result = 0;
            result += l_669;
            int l_670_i0;
            for (l_670_i0 = 0; l_670_i0 < 7; l_670_i0++) {
                result += l_670[l_670_i0];
            }
            result += l_671.s7;
            result += l_671.s6;
            result += l_671.s5;
            result += l_671.s4;
            result += l_671.s3;
            result += l_671.s2;
            result += l_671.s1;
            result += l_671.s0;
            result += l_672;
            result += l_673;
            result += l_674.w;
            result += l_674.z;
            result += l_674.y;
            result += l_674.x;
            result += l_676;
            atomic_add(&p_970->l_special_values[1], result);
        }
        else
        { /* block id: 312 */
            (1 + 1);
        }
        (*l_762) = l_761;
        l_771 = ((*p_970->g_30) &= (p_970->g_763 , (l_778 = (p_13 == (p_12 , ((safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(0x125BL, 0UL, 65535UL, (safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s(p_12, p_13)), p_970->g_763.f0)), p_13, ((VECTOR(uint16_t, 4))(p_970->g_770.yxxy)), (l_771 >= (((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(p_970->g_772.s10)))), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(abs(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))((p_970->g_773[1] != l_776), 0x1894L, 2L, 1L)), p_970->g_276, 0x66D9L, 0x59D9L, 0x7648L))))).s3161256424645707)).se9))).odd , l_771)), 0UL, l_771, GROUP_DIVERGE(0, 1), ((VECTOR(uint16_t, 2))(2UL)), 0UL)).s1, 8UL, p_14, p_15, 0x8475L, l_771, 0UL, 0xE3D8L)).s73)).yyyxyyyxxxxxxyyy)).se, 8L)) < 1UL))))));
        for (p_970->g_120.f1 = 0; (p_970->g_120.f1 < 19); p_970->g_120.f1 = safe_add_func_uint16_t_u_u(p_970->g_120.f1, 8))
        { /* block id: 321 */
            p_970->g_782 = p_970->g_781;
        }
    }
    p_970->g_389[0][0] = &p_970->g_171;
    return l_783;
}


/* ------------------------------------------ */
/* 
 * reads : p_970->g_29 p_970->g_30 p_970->g_comm_values p_970->g_41 p_970->g_5 p_970->g_47 p_970->g_48 p_970->g_50 p_970->g_57 p_970->g_76 p_970->g_120 p_970->g_131 p_970->g_133 p_970->g_137 p_970->g_154 p_970->g_168 p_970->g_171 p_970->g_185 p_970->g_188 p_970->g_189 p_970->g_190 p_970->g_215 p_970->g_232 p_970->g_236 p_970->g_266 p_970->g_229 p_970->g_428 p_970->g_272 p_970->g_292 p_970->g_453 p_970->g_460 p_970->g_281
 * writes: p_970->g_5 p_970->g_50 p_970->g_57 p_970->g_137 p_970->g_154 p_970->g_168 p_970->g_171 p_970->g_215 p_970->g_229 p_970->g_314 p_970->g_389 p_970->g_30 p_970->g_394 p_970->g_120 p_970->g_471 p_970->g_472 p_970->g_473 p_970->g_29
 */
uint8_t  func_16(uint32_t  p_17, int32_t * p_18, struct S2  p_19, struct S4 * p_970)
{ /* block id: 6 */
    int32_t **l_28 = (void*)0;
    VECTOR(int64_t, 2) l_40 = (VECTOR(int64_t, 2))(0x2932DA3BB1D4416DL, 0x3505D01CD43A1E25L);
    uint32_t *l_42 = (void*)0;
    int32_t ***l_474 = &p_970->g_29;
    int i;
    (*l_474) = ((func_22(l_28, p_970->g_29, func_31(p_18, &p_970->g_30, (p_17 ^= ((((safe_lshift_func_uint8_t_u_u(((*p_970->g_29) == (void*)0), (safe_unary_minus_func_uint8_t_u(p_970->g_comm_values[p_970->tid])))) && l_40.y) || ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(p_970->g_41.s4640)).xxxxxzxzwwwyxxwy)).s0) || p_970->g_41.s7)), p_19.f1, l_28, p_970), &p_970->g_30, p_19.f1, p_970) , 0x8ABDL) , &p_18);
    return p_970->g_120.f1;
}


/* ------------------------------------------ */
/* 
 * reads : p_970->g_57 p_970->g_48 p_970->g_29 p_970->g_30 p_970->g_76 p_970->g_comm_values p_970->g_5 p_970->g_120 p_970->g_50 p_970->g_131 p_970->g_133 p_970->g_137 p_970->g_41 p_970->g_154 p_970->g_168 p_970->g_171 p_970->g_185 p_970->g_188 p_970->g_189 p_970->g_190 p_970->g_215 p_970->g_232 p_970->g_236 p_970->g_266 p_970->g_229 p_970->g_428 p_970->g_272 p_970->g_292 p_970->g_453 p_970->g_460 p_970->g_281
 * writes: p_970->g_57 p_970->g_137 p_970->g_154 p_970->g_168 p_970->g_171 p_970->g_5 p_970->g_215 p_970->g_229 p_970->g_314 p_970->g_389 p_970->g_30 p_970->g_394 p_970->g_120 p_970->g_471 p_970->g_472 p_970->g_473
 */
struct S1  func_22(int32_t ** p_23, int32_t ** p_24, int32_t ** p_25, int32_t ** p_26, int8_t  p_27, struct S4 * p_970)
{ /* block id: 16 */
    int64_t l_54 = (-1L);
    int32_t *l_55[5][9] = {{(void*)0,&p_970->g_5,(void*)0,&p_970->g_5,(void*)0,&p_970->g_5,(void*)0,&p_970->g_5,&p_970->g_5},{(void*)0,&p_970->g_5,(void*)0,&p_970->g_5,(void*)0,&p_970->g_5,(void*)0,&p_970->g_5,&p_970->g_5},{(void*)0,&p_970->g_5,(void*)0,&p_970->g_5,(void*)0,&p_970->g_5,(void*)0,&p_970->g_5,&p_970->g_5},{(void*)0,&p_970->g_5,(void*)0,&p_970->g_5,(void*)0,&p_970->g_5,(void*)0,&p_970->g_5,&p_970->g_5},{(void*)0,&p_970->g_5,(void*)0,&p_970->g_5,(void*)0,&p_970->g_5,(void*)0,&p_970->g_5,&p_970->g_5}};
    int32_t l_56 = (-9L);
    VECTOR(int8_t, 16) l_85 = (VECTOR(int8_t, 16))((-8L), (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), 0x5CL), 0x5CL), 0x5CL, (-8L), 0x5CL, (VECTOR(int8_t, 2))((-8L), 0x5CL), (VECTOR(int8_t, 2))((-8L), 0x5CL), (-8L), 0x5CL, (-8L), 0x5CL);
    VECTOR(int8_t, 2) l_86 = (VECTOR(int8_t, 2))(0x37L, 0x4AL);
    int32_t **l_99 = &p_970->g_30;
    uint32_t l_138 = 0x0D023A19L;
    uint32_t *l_139 = &p_970->g_57[2][1];
    uint8_t *l_153[9][10][1] = {{{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154}},{{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154}},{{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154}},{{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154}},{{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154}},{{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154}},{{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154}},{{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154}},{{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154},{&p_970->g_154}}};
    uint8_t l_155[5][8] = {{0x71L,0x71L,0x71L,0x71L,0x71L,0x71L,0x71L,0x71L},{0x71L,0x71L,0x71L,0x71L,0x71L,0x71L,0x71L,0x71L},{0x71L,0x71L,0x71L,0x71L,0x71L,0x71L,0x71L,0x71L},{0x71L,0x71L,0x71L,0x71L,0x71L,0x71L,0x71L,0x71L},{0x71L,0x71L,0x71L,0x71L,0x71L,0x71L,0x71L,0x71L}};
    int8_t l_421[1];
    int8_t l_431[10] = {0x10L,(-1L),0x10L,0x10L,(-1L),0x10L,0x10L,(-1L),0x10L,0x10L};
    int32_t l_432 = 0x1D9B47E1L;
    int32_t l_433 = 0x40C986C8L;
    int16_t l_437[6] = {0x1420L,0x75CCL,0x1420L,0x1420L,0x75CCL,0x1420L};
    uint8_t l_438 = 255UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_421[i] = (-1L);
    p_970->g_57[2][1]--;
    if ((safe_add_func_uint8_t_u_u(p_970->g_48, (func_62((*p_970->g_29), func_68((safe_rshift_func_uint8_t_u_s((p_970->g_154 &= ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(p_970->g_76.s35)).xxxyxyxy)))).hi, ((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0xC0L, 0xD3L)).yyyx)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 8))((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(1L, 7)), (((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0x6DL, 1UL)), 0xDFL, 1UL, ((VECTOR(uint8_t, 2))(251UL, 1UL)), 0x69L, 9UL)), ((VECTOR(uint8_t, 8))((safe_div_func_int8_t_s_s(p_970->g_76.s4, (safe_add_func_int8_t_s_s(((p_27 > ((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))((-1L), ((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x23L, (-1L))), 0x6AL, 1L)), ((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 16))(l_85.sd2cf262fdf43112e)).hi, ((VECTOR(int8_t, 4))((-1L), ((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_86.yxyyxxxxxyxyyyyx)))).s42d3, (int8_t)((VECTOR(int8_t, 16))(func_87((l_55[1][2] = (*p_24)), ((p_24 != (void*)0) ^ (safe_sub_func_uint16_t_u_u(func_95(&p_970->g_57[2][1], l_86.x, l_99, p_970), l_138))), l_139, p_970->g_131[1], p_970->g_50.s1, p_970), 0x2BL, ((VECTOR(int8_t, 8))(0x46L)), 0x68L, ((VECTOR(int8_t, 2))(0L)), (**l_99), 4L, (-3L))).sd))), 3L, p_27, p_27, 5L, p_27, p_970->g_76.s1, p_27, 8L, ((VECTOR(int8_t, 2))((-1L))), 7L, 8L)), ((VECTOR(int8_t, 16))(1L))))).s1, 0x53L, 0L)).zxxyzzwx))).s62)).xxxx, ((VECTOR(int8_t, 4))((-4L))))))))), (int8_t)p_27))), p_27, ((VECTOR(int8_t, 2))(0L)), (-1L), ((VECTOR(int8_t, 4))(4L)), ((VECTOR(int8_t, 2))(0x3BL)), (-2L))).odd)).odd, ((VECTOR(int8_t, 4))(0x6EL)), ((VECTOR(int8_t, 4))(0x75L))))).z) , p_970->g_120.f0), (**l_99))))), 250UL, 0xD9L, 246UL, 0x77L, 0UL, 0x48L, 0x5EL)), ((VECTOR(uint8_t, 8))(0UL))))).s0 <= p_970->g_57[2][1]))), ((VECTOR(uint8_t, 2))(0x8FL)), p_970->g_41.s2, GROUP_DIVERGE(1, 1), ((VECTOR(uint8_t, 2))(0x67L)), 1UL)).hi))).odd)).xxyy))), ((VECTOR(uint8_t, 4))(251UL))))))).z), 0)), p_27, l_155[2][4], (**l_99), (**l_99), p_970), (*l_99), (*l_99), &p_970->g_57[0][5], p_970) , 0L))))
    { /* block id: 167 */
        int16_t l_410 = 0x3C1EL;
        int32_t l_411 = 0x1CD9867DL;
        int32_t l_412 = (-10L);
        int32_t l_413 = 0x19D96BFDL;
        uint16_t l_414 = 0x7576L;
        int32_t l_420 = (-7L);
        int32_t l_423 = 0x1C75D746L;
        uint64_t l_425[7];
        int i;
        for (i = 0; i < 7; i++)
            l_425[i] = 0UL;
        (**p_26) |= 0x02EBE50EL;
        l_414--;
        for (p_970->g_154 = 20; (p_970->g_154 >= 29); p_970->g_154 = safe_add_func_uint16_t_u_u(p_970->g_154, 5))
        { /* block id: 172 */
            int16_t l_419 = 0x192CL;
            int32_t l_422 = 0x7BA8782FL;
            int32_t l_424 = 0x2EF8AC3CL;
            l_425[3]--;
        }
        return p_970->g_428;
    }
    else
    { /* block id: 176 */
        int32_t l_429 = 9L;
        int32_t l_430[8] = {0x5CCA552DL,0x5CCA552DL,0x5CCA552DL,0x5CCA552DL,0x5CCA552DL,0x5CCA552DL,0x5CCA552DL,0x5CCA552DL};
        uint32_t l_434 = 0x3E6019CDL;
        int i;
        ++l_434;
    }
    ++l_438;
    if ((p_970->g_272[0][0][2] && 0xE77BL))
    { /* block id: 180 */
        uint64_t l_441 = 0x8AACDBE739863F58L;
        VECTOR(uint8_t, 8) l_450 = (VECTOR(uint8_t, 8))(0x13L, (VECTOR(uint8_t, 4))(0x13L, (VECTOR(uint8_t, 2))(0x13L, 0xB9L), 0xB9L), 0xB9L, 0x13L, 0xB9L);
        uint32_t *l_454[9] = {&p_970->g_215,&p_970->g_215,&p_970->g_215,&p_970->g_215,&p_970->g_215,&p_970->g_215,&p_970->g_215,&p_970->g_215,&p_970->g_215};
        uint8_t **l_455 = &l_153[8][6][0];
        uint64_t *l_456[8];
        int32_t l_457 = 0L;
        int32_t l_458 = 0L;
        VECTOR(int32_t, 8) l_459 = (VECTOR(int32_t, 8))(0x4005B4D8L, (VECTOR(int32_t, 4))(0x4005B4D8L, (VECTOR(int32_t, 2))(0x4005B4D8L, 0x61DC4876L), 0x61DC4876L), 0x61DC4876L, 0x4005B4D8L, 0x61DC4876L);
        int i;
        for (i = 0; i < 8; i++)
            l_456[i] = (void*)0;
        (*p_24) = (*l_99);
        --l_441;
        l_458 = (l_457 = ((safe_div_func_int64_t_s_s(((-10L) > (safe_lshift_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(p_970->g_232.y, p_970->g_292)), ((VECTOR(uint8_t, 2))(l_450.s10)).even))), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))((safe_mul_func_int8_t_s_s((((**l_99) = ((VECTOR(uint32_t, 2))(p_970->g_453.sbc)).lo) && (0x1E42E274L || ((**p_26) = (((VECTOR(int64_t, 2))((-9L), (-1L))).even < (((*l_455) = &l_155[2][4]) == &l_438))))), ((*p_970->g_29) == (void*)0))), 18446744073709551615UL, (p_970->g_229 = l_441), ((VECTOR(uint64_t, 4))(0UL)), p_970->g_50.s6, ((VECTOR(uint64_t, 4))(0x29610B8F5752217CL)), ((VECTOR(uint64_t, 2))(0x740F91E039FE6F56L)), 0xF2E34BE1CC4DB252L, 1UL)).even)).s7)) >= p_970->g_428.f1));
        (**l_99) &= ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(l_459.s5513303536455701)).lo, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(0x06A669CDL, 0x5CA28B79L)).yyyy, ((VECTOR(int32_t, 4))(0x2ADA6890L, 5L, (-1L), 0L))))))).yxzwwwwz))).s1;
    }
    else
    { /* block id: 190 */
        uint64_t *l_469 = (void*)0;
        uint64_t **l_470[6];
        int i;
        for (i = 0; i < 6; i++)
            l_470[i] = &l_469;
        (**p_970->g_29) = (p_970->g_453.s9 >= (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(p_970->g_460.xzwx)))), ((safe_mul_func_uint8_t_u_u(p_970->g_281, p_27)) <= (~(p_27 == 0x2906BCD9L))), ((safe_rshift_func_uint16_t_u_s((0x0AL >= (safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((-3L), ((p_970->g_471 = l_469) != (p_970->g_473 = (p_970->g_472 = &p_970->g_229))))), 7))), 10)) > 0x775F116CL), p_27, ((VECTOR(int64_t, 8))(0L)), (-8L))).s1 , GROUP_DIVERGE(0, 1)));
    }
    return p_970->g_428;
}


/* ------------------------------------------ */
/* 
 * reads : p_970->g_5 p_970->g_30 p_970->g_47 p_970->g_48 p_970->g_50
 * writes: p_970->g_5 p_970->g_50
 */
int32_t ** func_31(int32_t * p_32, int32_t ** p_33, uint32_t  p_34, uint32_t  p_35, int32_t ** p_36, struct S4 * p_970)
{ /* block id: 8 */
    int32_t **l_53 = (void*)0;
    for (p_34 = (-28); (p_34 < 51); p_34 = safe_add_func_uint32_t_u_u(p_34, 9))
    { /* block id: 11 */
        int32_t *l_49 = (void*)0;
        int32_t *l_51 = (void*)0;
        int32_t *l_52 = (void*)0;
        p_970->g_50.s6 ^= ((**p_33) = (p_35 && ((safe_div_func_int16_t_s_s(p_970->g_5, (p_35 & (p_970->g_30 == p_970->g_47)))) != ((-10L) ^ (GROUP_DIVERGE(0, 1) >= p_970->g_48)))));
    }
    return l_53;
}


/* ------------------------------------------ */
/* 
 * reads : p_970->g_29 p_970->g_30
 * writes: p_970->g_30 p_970->g_394 p_970->g_120
 */
int32_t  func_62(int32_t * p_63, int16_t  p_64, int32_t * p_65, int32_t * p_66, uint32_t * p_67, struct S4 * p_970)
{ /* block id: 161 */
    struct S2 l_395 = {65530UL,-3L};
    struct S2 *l_396 = &p_970->g_120;
    int32_t *l_397 = &p_970->g_5;
    int32_t *l_398 = (void*)0;
    int32_t l_399 = 1L;
    int32_t l_400 = 0x4AA792C6L;
    int32_t *l_401 = (void*)0;
    int32_t *l_402 = &l_399;
    int32_t *l_403 = (void*)0;
    int32_t *l_404 = &p_970->g_5;
    int32_t *l_405 = &p_970->g_5;
    int32_t *l_406[1][4];
    uint32_t l_407 = 0x0903CBFBL;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_406[i][j] = &l_399;
    }
    (*p_970->g_29) = (*p_970->g_29);
    p_970->g_394 = &p_970->g_47;
    (*l_396) = l_395;
    --l_407;
    return p_64;
}


/* ------------------------------------------ */
/* 
 * reads : p_970->g_154 p_970->g_50 p_970->g_76 p_970->g_168 p_970->g_30 p_970->g_5 p_970->g_171 p_970->g_185 p_970->g_188 p_970->g_189 p_970->g_190 p_970->g_41 p_970->g_29 p_970->g_137 p_970->g_131 p_970->g_215 p_970->g_232 p_970->g_236 p_970->g_266 p_970->g_229 p_970->g_57
 * writes: p_970->g_154 p_970->g_168 p_970->g_171 p_970->g_5 p_970->g_137 p_970->g_215 p_970->g_229 p_970->g_314 p_970->g_389
 */
int16_t  func_68(uint16_t  p_69, int64_t  p_70, int16_t  p_71, uint64_t  p_72, int32_t  p_73, struct S4 * p_970)
{ /* block id: 39 */
    int8_t *l_165 = &p_970->g_137;
    int32_t l_167 = (-6L);
    int64_t l_225 = 0x431B24D9D22A20EBL;
    int64_t l_226 = 0x6BFDEF3ACD965592L;
    VECTOR(uint32_t, 8) l_233 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0UL), 0UL), 0UL, 4294967295UL, 0UL);
    uint32_t *l_234 = (void*)0;
    struct S2 l_249 = {6UL,0x6ED29486L};
    int32_t l_304 = 1L;
    int32_t l_306 = 0x3ECD138FL;
    uint64_t l_319[5][1][3] = {{{18446744073709551612UL,18446744073709551612UL,18446744073709551612UL}},{{18446744073709551612UL,18446744073709551612UL,18446744073709551612UL}},{{18446744073709551612UL,18446744073709551612UL,18446744073709551612UL}},{{18446744073709551612UL,18446744073709551612UL,18446744073709551612UL}},{{18446744073709551612UL,18446744073709551612UL,18446744073709551612UL}}};
    uint16_t l_366 = 0x2367L;
    int32_t *l_385[6][8] = {{&p_970->g_5,(void*)0,&p_970->g_5,&p_970->g_5,(void*)0,&p_970->g_5,&p_970->g_5,(void*)0},{&p_970->g_5,(void*)0,&p_970->g_5,&p_970->g_5,(void*)0,&p_970->g_5,&p_970->g_5,(void*)0},{&p_970->g_5,(void*)0,&p_970->g_5,&p_970->g_5,(void*)0,&p_970->g_5,&p_970->g_5,(void*)0},{&p_970->g_5,(void*)0,&p_970->g_5,&p_970->g_5,(void*)0,&p_970->g_5,&p_970->g_5,(void*)0},{&p_970->g_5,(void*)0,&p_970->g_5,&p_970->g_5,(void*)0,&p_970->g_5,&p_970->g_5,(void*)0},{&p_970->g_5,(void*)0,&p_970->g_5,&p_970->g_5,(void*)0,&p_970->g_5,&p_970->g_5,(void*)0}};
    int32_t **l_384 = &l_385[0][5];
    int32_t **l_386 = (void*)0;
    int32_t *l_388 = &p_970->g_171;
    int32_t **l_387[10][8][3] = {{{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388}},{{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388}},{{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388}},{{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388}},{{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388}},{{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388}},{{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388}},{{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388}},{{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388}},{{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388},{&p_970->g_30,(void*)0,&l_388}}};
    int i, j, k;
    for (p_73 = 0; (p_73 >= 18); p_73++)
    { /* block id: 42 */
        int32_t *l_235 = (void*)0;
        int32_t l_241 = 0L;
        int32_t l_244 = 0L;
        int32_t l_245[5][9][4] = {{{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L}},{{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L}},{{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L}},{{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L}},{{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L},{(-5L),0x6EF9496CL,0x709485D0L,0x3ABD6275L}}};
        int32_t l_301[3][2] = {{0L,0L},{0L,0L},{0L,0L}};
        int i, j, k;
        for (p_970->g_154 = (-6); (p_970->g_154 < 20); p_970->g_154++)
        { /* block id: 45 */
            int8_t **l_162 = (void*)0;
            int8_t *l_164[7][6][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
            int8_t **l_163 = &l_164[3][3][0];
            int32_t l_166 = 1L;
            uint8_t l_169 = 0xBEL;
            int32_t *l_170 = &p_970->g_171;
            int i, j, k;
            (*l_170) ^= ((p_970->g_50.s6 , ((p_970->g_76.s3 == (safe_div_func_uint8_t_u_u((((((*l_163) = &p_970->g_137) == (p_73 , l_165)) > l_166) , ((p_970->g_168 |= l_167) == (+(l_166 & (p_73 >= (*p_970->g_30)))))), l_169))) , p_72)) ^ p_69);
        }
        for (p_970->g_168 = 0; (p_970->g_168 <= 60); p_970->g_168 = safe_add_func_int16_t_s_s(p_970->g_168, 6))
        { /* block id: 52 */
            union U3 *l_174 = &p_970->g_175;
            int32_t l_199 = 0x37DE32D5L;
            int64_t l_209 = 0x248F00F302B24482L;
            VECTOR(uint8_t, 8) l_230 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 255UL), 255UL), 255UL, 0UL, 255UL);
            VECTOR(int32_t, 2) l_237 = (VECTOR(int32_t, 2))((-6L), 0x4683442AL);
            uint32_t l_246 = 0xA54794A0L;
            int32_t *l_313[1][10] = {{&l_167,(void*)0,&l_167,&l_167,(void*)0,&l_167,&l_167,(void*)0,&l_167,&l_167}};
            int16_t l_317 = 0x475DL;
            int i, j;
            if (((*p_970->g_30) = l_167))
            { /* block id: 54 */
                union U3 **l_176 = &l_174;
                VECTOR(int8_t, 2) l_187 = (VECTOR(int8_t, 2))((-2L), (-5L));
                int8_t **l_220 = &l_165;
                int i;
                if (p_71)
                    break;
                (*l_176) = l_174;
                for (p_970->g_154 = (-4); (p_970->g_154 <= 32); p_970->g_154 = safe_add_func_uint32_t_u_u(p_970->g_154, 8))
                { /* block id: 59 */
                    int64_t l_200 = (-1L);
                    uint32_t *l_214 = &p_970->g_215;
                    uint64_t *l_227 = (void*)0;
                    uint64_t *l_228[7] = {&p_970->g_229,&p_970->g_229,&p_970->g_229,&p_970->g_229,&p_970->g_229,&p_970->g_229,&p_970->g_229};
                    int i;
                    for (p_72 = 0; (p_72 == 5); p_72 = safe_add_func_uint32_t_u_u(p_72, 3))
                    { /* block id: 62 */
                        int16_t *l_191 = (void*)0;
                        int16_t *l_192[1];
                        int32_t *l_206[8][7] = {{&p_970->g_171,&p_970->g_171,&p_970->g_171,&p_970->g_171,&p_970->g_171,&p_970->g_171,&p_970->g_171},{&p_970->g_171,&p_970->g_171,&p_970->g_171,&p_970->g_171,&p_970->g_171,&p_970->g_171,&p_970->g_171},{&p_970->g_171,&p_970->g_171,&p_970->g_171,&p_970->g_171,&p_970->g_171,&p_970->g_171,&p_970->g_171},{&p_970->g_171,&p_970->g_171,&p_970->g_171,&p_970->g_171,&p_970->g_171,&p_970->g_171,&p_970->g_171},{&p_970->g_171,&p_970->g_171,&p_970->g_171,&p_970->g_171,&p_970->g_171,&p_970->g_171,&p_970->g_171},{&p_970->g_171,&p_970->g_171,&p_970->g_171,&p_970->g_171,&p_970->g_171,&p_970->g_171,&p_970->g_171},{&p_970->g_171,&p_970->g_171,&p_970->g_171,&p_970->g_171,&p_970->g_171,&p_970->g_171,&p_970->g_171},{&p_970->g_171,&p_970->g_171,&p_970->g_171,&p_970->g_171,&p_970->g_171,&p_970->g_171,&p_970->g_171}};
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_192[i] = (void*)0;
                        l_167 ^= (safe_sub_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 2))(p_970->g_185.s57))))))).yxxx)).y, ((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(1L, (safe_unary_minus_func_uint32_t_u(0x4F085FD9L)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_187.xxyxyxxy)).s74)), ((VECTOR(int8_t, 2))(0L, 9L)), 0x6EL, 0x64L)).s04)).yyxy, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 8))(p_970->g_188.zzxywxzw)).hi, ((VECTOR(int8_t, 2))(p_970->g_189.yx)).yyxy))).wwwyzxxyyywxzyzw)).s8a)).xxyxyxyy)), ((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(p_970->g_190.s66edb2b0423c1866)))).se465, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((*l_165) = 1L), 0x36L, 0x10L, (-10L))))))).wxxyyxxz, ((VECTOR(int8_t, 4))(((p_71 &= 0x0593L) == ((~(safe_sub_func_uint16_t_u_u(65532UL, l_187.y))) < (p_72 , (((safe_lshift_func_int16_t_s_u((safe_add_func_int16_t_s_s(l_199, FAKE_DIVERGE(p_970->group_0_offset, get_group_id(0), 10))), 3)) , (l_200 != (safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_int16_t_s(((-8L) ^ l_199))), p_970->g_188.y)) <= p_970->g_188.y), 4294967295UL)))) && p_73)))), p_73, 0x7BL, (-4L))).wwxxzyyx, ((VECTOR(int8_t, 8))(0x47L))))).even))))).zyyxwyzx, ((VECTOR(int8_t, 8))(3L))))).lo, ((VECTOR(int8_t, 4))(0x1BL))))).zywwwxwxwxxzwyzz, ((VECTOR(int8_t, 16))(0x5FL))))).hi))).s71)).xxxy, ((VECTOR(int8_t, 4))(0x1EL))))))).wxwwwxwz, ((VECTOR(int8_t, 8))(0x51L))))).s2)) || p_970->g_41.s2), (*p_970->g_30)));
                        (**p_970->g_29) ^= p_73;
                    }
                    (*p_970->g_30) = (-1L);
                    for (p_970->g_137 = 0; (p_970->g_137 > 4); p_970->g_137++)
                    { /* block id: 71 */
                        return l_209;
                    }
                    (*p_970->g_30) = (l_187.x || (safe_sub_func_uint8_t_u_u(((p_970->g_229 = (((p_72 , (((((safe_mul_func_int8_t_s_s((((0x0BL > p_970->g_131[1]) , ((*l_214)--)) , (safe_lshift_func_uint16_t_u_u((l_220 != &l_165), p_970->g_137))), 0x10L)) != (safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint16_t_u_u(p_69, l_225)) == l_200), 2))) >= l_226) < 0L) & 1UL)) , FAKE_DIVERGE(p_970->global_1_offset, get_global_id(1), 10)) > 0L)) > p_970->g_5), l_167)));
                }
            }
            else
            { /* block id: 78 */
                VECTOR(uint32_t, 16) l_231 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967289UL), 4294967289UL), 4294967289UL, 0UL, 4294967289UL, (VECTOR(uint32_t, 2))(0UL, 4294967289UL), (VECTOR(uint32_t, 2))(0UL, 4294967289UL), 0UL, 4294967289UL, 0UL, 4294967289UL);
                int32_t *l_240 = &p_970->g_171;
                int32_t *l_242 = &p_970->g_5;
                int32_t *l_243[4];
                uint16_t l_307[1][8][8] = {{{0x70CEL,65535UL,1UL,0UL,65535UL,0UL,1UL,65535UL},{0x70CEL,65535UL,1UL,0UL,65535UL,0UL,1UL,65535UL},{0x70CEL,65535UL,1UL,0UL,65535UL,0UL,1UL,65535UL},{0x70CEL,65535UL,1UL,0UL,65535UL,0UL,1UL,65535UL},{0x70CEL,65535UL,1UL,0UL,65535UL,0UL,1UL,65535UL},{0x70CEL,65535UL,1UL,0UL,65535UL,0UL,1UL,65535UL},{0x70CEL,65535UL,1UL,0UL,65535UL,0UL,1UL,65535UL},{0x70CEL,65535UL,1UL,0UL,65535UL,0UL,1UL,65535UL}}};
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_243[i] = (void*)0;
                (*l_240) &= (((((((VECTOR(uint8_t, 8))(l_230.s51230136)).s0 || (((((VECTOR(uint32_t, 8))(add_sat(((VECTOR(uint32_t, 2))(l_231.s09)).xyyyxxxy, ((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(p_970->g_232.xyyyyyyxyxxyyyxx)).sdf)).yxyy, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(l_233.s5373670512220601)).s1c95))))))).lo, ((VECTOR(uint32_t, 4))(0UL, (p_970->g_189.y >= ((void*)0 != l_234)), 0UL, 1UL)).hi))).xxxyyyxx))).s7 , (l_235 = (*p_970->g_29))) != ((((*p_970->g_30) , (*p_970->g_29)) != (void*)0) , &p_73)) || (((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(p_970->g_236.xxxy)).yxwxywxwxwwyxwzw)).s5 < (((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_237.xx))))))).lo , (((safe_div_func_uint64_t_u_u(p_70, 0x4CF0C64A288BBBB0L)) | p_970->g_76.s5) , l_225))))) == p_970->g_190.s5) > 7L) == 0x0EL) , 0x03C21F83L);
                (*l_240) ^= (*p_970->g_30);
                ++l_246;
                if ((l_249 , 0L))
                { /* block id: 83 */
                    uint32_t *l_300[1][10] = {{(void*)0,(void*)0,&p_970->g_215,(void*)0,(void*)0,(void*)0,(void*)0,&p_970->g_215,(void*)0,(void*)0}};
                    uint64_t *l_302 = &p_970->g_229;
                    int32_t l_303 = 0x79C30704L;
                    int32_t l_305 = 0L;
                    int i, j;
                    if (((-5L) >= (((safe_lshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((((void*)0 == l_242) >= l_237.x), ((((void*)0 == &l_199) , ((VECTOR(uint32_t, 8))((((*l_302) = ((safe_mod_func_int64_t_s_s((safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((~(safe_sub_func_uint64_t_u_u(((safe_add_func_uint32_t_u_u((l_301[1][0] &= (((p_970->g_266 == &p_970->g_267[1][4][2]) ^ ((0x319C4EBD6CA1A1E9L || 1L) != p_970->g_171)) || (-5L))), 7L)) < p_71), l_237.x))), p_69)), 0xF47291F4L)), p_73)) , 18446744073709551615UL)) & 1L), l_303, ((VECTOR(uint32_t, 2))(4294967295UL)), 5UL, 0xC2ECA8B7L, 5UL, 4294967295UL)).s7) & l_209))), 5)) & 0L) ^ 0x4B57L)))
                    { /* block id: 86 */
                        int32_t l_310 = (-8L);
                        --l_307[0][7][6];
                        return l_310;
                    }
                    else
                    { /* block id: 89 */
                        int32_t **l_311 = &l_243[3];
                        int32_t **l_312[9];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_312[i] = &l_240;
                        if ((**p_970->g_29))
                            break;
                        l_313[0][7] = ((*l_311) = (*p_970->g_29));
                    }
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_970->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 19)), permutations[(safe_mod_func_uint32_t_u_u(0xBCA8D5A9L, 10))][(safe_mod_func_uint32_t_u_u(p_970->tid, 19))]));
                }
                else
                { /* block id: 97 */
                    int16_t l_316 = 0x1EC4L;
                    int32_t l_318[2][4][6] = {{{1L,6L,0x31AA630FL,0L,0x7C97FB50L,0L},{1L,6L,0x31AA630FL,0L,0x7C97FB50L,0L},{1L,6L,0x31AA630FL,0L,0x7C97FB50L,0L},{1L,6L,0x31AA630FL,0L,0x7C97FB50L,0L}},{{1L,6L,0x31AA630FL,0L,0x7C97FB50L,0L},{1L,6L,0x31AA630FL,0L,0x7C97FB50L,0L},{1L,6L,0x31AA630FL,0L,0x7C97FB50L,0L},{1L,6L,0x31AA630FL,0L,0x7C97FB50L,0L}}};
                    int i, j, k;
                    p_970->g_314 = (void*)0;
                    l_319[4][0][1]++;
                    (*p_970->g_30) |= (safe_add_func_int64_t_s_s((safe_unary_minus_func_int8_t_s(0L)), 0x0375DA50369AEC49L));
                }
            }
            return p_70;
        }
    }
    for (p_970->g_229 = 0; (p_970->g_229 != 12); p_970->g_229++)
    { /* block id: 108 */
        int8_t l_344 = 9L;
        int32_t l_356 = (-1L);
        int32_t l_359 = 0x430A9120L;
        int32_t l_360[4] = {(-8L),(-8L),(-8L),(-8L)};
        int i;
        for (p_71 = 18; (p_71 <= (-10)); p_71--)
        { /* block id: 111 */
            int32_t *l_331 = (void*)0;
            int32_t l_361 = 4L;
            int32_t l_363 = 0L;
            int32_t l_364 = 0x452E01F9L;
            for (p_970->g_168 = 0; (p_970->g_168 <= 37); p_970->g_168 = safe_add_func_uint8_t_u_u(p_970->g_168, 1))
            { /* block id: 114 */
                int32_t **l_332 = &l_331;
                int32_t l_365 = 0x406EEB6CL;
                (*l_332) = l_331;
                for (l_249.f1 = 0; (l_249.f1 > 9); l_249.f1 = safe_add_func_uint32_t_u_u(l_249.f1, 1))
                { /* block id: 118 */
                    int32_t **l_335 = &l_331;
                    int32_t ***l_336 = (void*)0;
                    int32_t ***l_337 = &l_332;
                    int32_t l_362 = 0L;
                    (*p_970->g_30) &= (&p_970->g_314 != ((*l_337) = l_335));
                    for (l_167 = (-1); (l_167 != 10); l_167 = safe_add_func_int8_t_s_s(l_167, 8))
                    { /* block id: 123 */
                        struct S2 l_340 = {6UL,-2L};
                        struct S2 *l_341 = (void*)0;
                        struct S2 *l_342 = &l_340;
                        int32_t *l_343 = &p_970->g_171;
                        int32_t *l_345 = &l_306;
                        int32_t *l_346 = &l_304;
                        int32_t *l_347 = (void*)0;
                        int32_t *l_348 = &p_970->g_171;
                        int32_t *l_349 = &l_304;
                        int32_t *l_350 = &p_970->g_5;
                        int32_t *l_351 = (void*)0;
                        int32_t *l_352 = &l_306;
                        int32_t *l_353 = &p_970->g_5;
                        int32_t *l_354 = (void*)0;
                        int32_t *l_355 = &l_306;
                        int32_t *l_357 = (void*)0;
                        int32_t *l_358[3][2][10] = {{{(void*)0,&p_970->g_5,(void*)0,(void*)0,&p_970->g_5,(void*)0,(void*)0,&p_970->g_5,(void*)0,(void*)0},{(void*)0,&p_970->g_5,(void*)0,(void*)0,&p_970->g_5,(void*)0,(void*)0,&p_970->g_5,(void*)0,(void*)0}},{{(void*)0,&p_970->g_5,(void*)0,(void*)0,&p_970->g_5,(void*)0,(void*)0,&p_970->g_5,(void*)0,(void*)0},{(void*)0,&p_970->g_5,(void*)0,(void*)0,&p_970->g_5,(void*)0,(void*)0,&p_970->g_5,(void*)0,(void*)0}},{{(void*)0,&p_970->g_5,(void*)0,(void*)0,&p_970->g_5,(void*)0,(void*)0,&p_970->g_5,(void*)0,(void*)0},{(void*)0,&p_970->g_5,(void*)0,(void*)0,&p_970->g_5,(void*)0,(void*)0,&p_970->g_5,(void*)0,(void*)0}}};
                        int i, j, k;
                        (*l_342) = l_340;
                        ++l_366;
                        return p_71;
                    }
                }
                return l_356;
            }
            (**p_970->g_29) = p_73;
            if ((atomic_inc(&p_970->g_atomic_input[2 * get_linear_group_id() + 0]) == 3))
            { /* block id: 133 */
                int32_t l_369 = 3L;
                for (l_369 = 0; (l_369 > (-8)); l_369 = safe_sub_func_int8_t_s_s(l_369, 6))
                { /* block id: 136 */
                    VECTOR(int64_t, 4) l_372 = (VECTOR(int64_t, 4))(0x6E59BB500A7374C6L, (VECTOR(int64_t, 2))(0x6E59BB500A7374C6L, (-10L)), (-10L));
                    uint64_t l_373 = 0UL;
                    VECTOR(int16_t, 2) l_376 = (VECTOR(int16_t, 2))(0x1B35L, 0x33AEL);
                    uint32_t l_383[2][5][8] = {{{0xC38F882CL,0UL,6UL,4294967290UL,0x464C9888L,4294967295UL,4UL,6UL},{0xC38F882CL,0UL,6UL,4294967290UL,0x464C9888L,4294967295UL,4UL,6UL},{0xC38F882CL,0UL,6UL,4294967290UL,0x464C9888L,4294967295UL,4UL,6UL},{0xC38F882CL,0UL,6UL,4294967290UL,0x464C9888L,4294967295UL,4UL,6UL},{0xC38F882CL,0UL,6UL,4294967290UL,0x464C9888L,4294967295UL,4UL,6UL}},{{0xC38F882CL,0UL,6UL,4294967290UL,0x464C9888L,4294967295UL,4UL,6UL},{0xC38F882CL,0UL,6UL,4294967290UL,0x464C9888L,4294967295UL,4UL,6UL},{0xC38F882CL,0UL,6UL,4294967290UL,0x464C9888L,4294967295UL,4UL,6UL},{0xC38F882CL,0UL,6UL,4294967290UL,0x464C9888L,4294967295UL,4UL,6UL},{0xC38F882CL,0UL,6UL,4294967290UL,0x464C9888L,4294967295UL,4UL,6UL}}};
                    int i, j, k;
                    --l_373;
                    if (l_376.y)
                    { /* block id: 138 */
                        int64_t l_377 = 0L;
                        uint64_t l_378 = 0x9A11204BB2FE15CDL;
                        l_378 = l_377;
                    }
                    else
                    { /* block id: 140 */
                        uint8_t l_379 = 1UL;
                        uint32_t l_380 = 0xE33728CEL;
                        struct S2 l_381 = {0x4A99L,0x7F442B08L};
                        struct S2 l_382[6] = {{0x71FFL,0x0FB8F4EEL},{0x7492L,0x159F0BB1L},{0x71FFL,0x0FB8F4EEL},{0x71FFL,0x0FB8F4EEL},{0x7492L,0x159F0BB1L},{0x71FFL,0x0FB8F4EEL}};
                        int i;
                        l_380 = l_379;
                        l_382[3] = l_381;
                    }
                    l_383[0][0][3] = 2L;
                }
                unsigned int result = 0;
                result += l_369;
                atomic_add(&p_970->g_special_values[2 * get_linear_group_id() + 0], result);
            }
            else
            { /* block id: 146 */
                (1 + 1);
            }
        }
    }
    p_970->g_389[0][0] = ((*l_384) = &p_73);
    for (p_970->g_171 = (-20); (p_970->g_171 == (-29)); p_970->g_171 = safe_sub_func_int32_t_s_s(p_970->g_171, 5))
    { /* block id: 155 */
        struct S2 *l_392[4];
        int32_t l_393 = 0x32ECB61AL;
        int i;
        for (i = 0; i < 4; i++)
            l_392[i] = &l_249;
        l_249 = l_249;
        if (p_69)
            break;
        return l_393;
    }
    return p_970->g_57[0][6];
}


/* ------------------------------------------ */
/* 
 * reads : p_970->g_137 p_970->g_120.f1
 * writes: p_970->g_137
 */
int8_t  func_87(int32_t * p_88, uint8_t  p_89, uint32_t * p_90, int8_t  p_91, uint64_t  p_92, struct S4 * p_970)
{ /* block id: 26 */
    int32_t *l_147 = (void*)0;
    int32_t *l_148[2][5][3] = {{{&p_970->g_5,&p_970->g_5,&p_970->g_5},{&p_970->g_5,&p_970->g_5,&p_970->g_5},{&p_970->g_5,&p_970->g_5,&p_970->g_5},{&p_970->g_5,&p_970->g_5,&p_970->g_5},{&p_970->g_5,&p_970->g_5,&p_970->g_5}},{{&p_970->g_5,&p_970->g_5,&p_970->g_5},{&p_970->g_5,&p_970->g_5,&p_970->g_5},{&p_970->g_5,&p_970->g_5,&p_970->g_5},{&p_970->g_5,&p_970->g_5,&p_970->g_5},{&p_970->g_5,&p_970->g_5,&p_970->g_5}}};
    uint32_t l_150 = 0x59CB8B08L;
    int i, j, k;
    for (p_970->g_137 = 0; (p_970->g_137 > (-3)); p_970->g_137--)
    { /* block id: 29 */
        for (p_89 = 0; (p_89 != 26); p_89 = safe_add_func_int32_t_s_s(p_89, 9))
        { /* block id: 32 */
            int32_t *l_144 = (void*)0;
            int32_t **l_145 = (void*)0;
            int32_t **l_146 = &l_144;
            (*l_146) = l_144;
        }
    }
    --l_150;
    return p_970->g_120.f1;
}


/* ------------------------------------------ */
/* 
 * reads : p_970->g_comm_values p_970->g_30 p_970->g_5 p_970->g_120 p_970->g_50 p_970->g_131 p_970->g_57 p_970->g_76 p_970->g_29 p_970->g_133
 * writes: p_970->g_137
 */
uint16_t  func_95(uint32_t * p_96, int16_t  p_97, int32_t ** p_98, struct S4 * p_970)
{ /* block id: 19 */
    VECTOR(int16_t, 16) l_108 = (VECTOR(int16_t, 16))(0x013AL, (VECTOR(int16_t, 4))(0x013AL, (VECTOR(int16_t, 2))(0x013AL, 0x7BF4L), 0x7BF4L), 0x7BF4L, 0x013AL, 0x7BF4L, (VECTOR(int16_t, 2))(0x013AL, 0x7BF4L), (VECTOR(int16_t, 2))(0x013AL, 0x7BF4L), 0x013AL, 0x7BF4L, 0x013AL, 0x7BF4L);
    VECTOR(int16_t, 4) l_109 = (VECTOR(int16_t, 4))(0x2B2EL, (VECTOR(int16_t, 2))(0x2B2EL, 1L), 1L);
    VECTOR(int16_t, 8) l_112 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x1344L), 0x1344L), 0x1344L, 1L, 0x1344L);
    int32_t l_113 = (-3L);
    VECTOR(int64_t, 2) l_123 = (VECTOR(int64_t, 2))(0x5544D09D3C4D2ADBL, 0x27B7FA829B7C7E5BL);
    VECTOR(int16_t, 4) l_126 = (VECTOR(int16_t, 4))(0x2C81L, (VECTOR(int16_t, 2))(0x2C81L, 6L), 6L);
    VECTOR(uint32_t, 4) l_127 = (VECTOR(uint32_t, 4))(8UL, (VECTOR(uint32_t, 2))(8UL, 0UL), 0UL);
    VECTOR(uint32_t, 2) l_130 = (VECTOR(uint32_t, 2))(4294967291UL, 0UL);
    uint8_t *l_132[7][6] = {{(void*)0,&p_970->g_133[1],&p_970->g_133[1],(void*)0,(void*)0,&p_970->g_133[1]},{(void*)0,&p_970->g_133[1],&p_970->g_133[1],(void*)0,(void*)0,&p_970->g_133[1]},{(void*)0,&p_970->g_133[1],&p_970->g_133[1],(void*)0,(void*)0,&p_970->g_133[1]},{(void*)0,&p_970->g_133[1],&p_970->g_133[1],(void*)0,(void*)0,&p_970->g_133[1]},{(void*)0,&p_970->g_133[1],&p_970->g_133[1],(void*)0,(void*)0,&p_970->g_133[1]},{(void*)0,&p_970->g_133[1],&p_970->g_133[1],(void*)0,(void*)0,&p_970->g_133[1]},{(void*)0,&p_970->g_133[1],&p_970->g_133[1],(void*)0,(void*)0,&p_970->g_133[1]}};
    int32_t l_134 = 1L;
    int64_t l_135[10] = {0x0292736123B1B58FL,0x0292736123B1B58FL,0x0292736123B1B58FL,0x0292736123B1B58FL,0x0292736123B1B58FL,0x0292736123B1B58FL,0x0292736123B1B58FL,0x0292736123B1B58FL,0x0292736123B1B58FL,0x0292736123B1B58FL};
    int8_t *l_136 = &p_970->g_137;
    int i, j;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_970->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 19)), permutations[(safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((((safe_div_func_int32_t_s_s((((*l_136) = ((safe_lshift_func_int16_t_s_s((((safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 2))(l_108.sd4)), ((VECTOR(int16_t, 16))(l_109.yzwzwywyyywwzzxw)).sbb, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 8))(((l_113 = ((safe_div_func_int16_t_s_s(((VECTOR(int16_t, 2))(l_112.s17)).hi, ((l_113 != (safe_lshift_func_int16_t_s_u(p_970->g_comm_values[p_970->tid], 13))) && (*p_970->g_30)))) || (safe_add_func_uint32_t_u_u(((safe_div_func_int64_t_s_s((((((p_970->g_120 , (safe_div_func_int64_t_s_s(((VECTOR(int64_t, 2))(l_123.yx)).odd, 1L))) == (l_108.s2 , (0x01580886FBCFDD99L || (safe_add_func_int16_t_s_s((((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 2))((-4L), (-1L))), ((VECTOR(int16_t, 16))(l_126.zyyxzwzzxzxxxyxx)).sf1, ((VECTOR(int16_t, 2))((-8L), 0x457AL))))).xxyyxxyxxyxyxxyy, ((VECTOR(int16_t, 2))(8L, 0x3B30L)).xyyxxxxxxyyxxyxy))).s9 >= GROUP_DIVERGE(0, 1)), ((((VECTOR(uint32_t, 8))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 4))(0xD081FCDCL, ((VECTOR(uint32_t, 2))(l_127.yz)), 1UL)).yyyxyzxx, ((VECTOR(uint32_t, 2))(0x0736A644L, 4294967288UL)).yyxxyxyy))).s4 & (((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 16))(l_130.yyxxyxxxyxyyxyxy)).s49c1, ((VECTOR(uint32_t, 8))(0xC314D703L, (((p_97 , 0x436BL) >= l_130.y) , FAKE_DIVERGE(p_970->global_0_offset, get_global_id(0), 10)), ((VECTOR(uint32_t, 4))(0xE38C59D0L)), 1UL, 4294967288UL)).even))).z, (-1L))) | 0x7AD302FAL) | 18446744073709551606UL)) , p_97)))))) & 0x6DA849F5L) && p_970->g_120.f0) | p_970->g_50.s4), p_97)) | p_970->g_50.s6), p_970->g_131[1])))) ^ 0x58L), 1L, 0x0952L, p_970->g_120.f1, 1L, p_970->g_57[2][1], 0x5F35L, 7L)).s45, (int16_t)l_134, (int16_t)l_135[6]))), ((VECTOR(int16_t, 4))(0L)), 0x3FA6L, (-1L))).s10))).xxxyxyxx, ((VECTOR(int16_t, 8))(1L)), ((VECTOR(int16_t, 8))(1L))))).s5064426240540457, ((VECTOR(int16_t, 16))((-7L)))))).s6, p_970->g_76.s6)) | p_97) != l_130.y), 2)) & l_127.y)) , (**p_970->g_29)), p_970->g_133[5])) , 0x65D6L) ^ FAKE_DIVERGE(p_970->global_1_offset, get_global_id(1), 10)), 0x36L)), 10))][(safe_mod_func_uint32_t_u_u(p_970->tid, 19))]));
    return p_97;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[2];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 2; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[2];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 2; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[19];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 19; i++)
            l_comm_values[i] = 1;
    struct S4 c_971;
    struct S4* p_970 = &c_971;
    struct S4 c_972 = {
        0x17963BA2L, // p_970->g_5
        &p_970->g_5, // p_970->g_30
        &p_970->g_30, // p_970->g_29
        (VECTOR(int64_t, 8))((-3L), (VECTOR(int64_t, 4))((-3L), (VECTOR(int64_t, 2))((-3L), (-8L)), (-8L)), (-8L), (-3L), (-8L)), // p_970->g_41
        1UL, // p_970->g_48
        &p_970->g_48, // p_970->g_47
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x3C8CA929L), 0x3C8CA929L), 0x3C8CA929L, 0L, 0x3C8CA929L), // p_970->g_50
        {{4UL,4UL,4294967295UL,0x390C49C4L,0x31554092L,0x390C49C4L,4294967295UL,4UL},{4UL,4UL,4294967295UL,0x390C49C4L,0x31554092L,0x390C49C4L,4294967295UL,4UL},{4UL,4UL,4294967295UL,0x390C49C4L,0x31554092L,0x390C49C4L,4294967295UL,4UL}}, // p_970->g_57
        (VECTOR(uint8_t, 8))(0x0BL, (VECTOR(uint8_t, 4))(0x0BL, (VECTOR(uint8_t, 2))(0x0BL, 5UL), 5UL), 5UL, 0x0BL, 5UL), // p_970->g_76
        {0UL,0L}, // p_970->g_120
        {0x699366D9D4B4A69FL,0x699366D9D4B4A69FL,0x699366D9D4B4A69FL,0x699366D9D4B4A69FL,0x699366D9D4B4A69FL}, // p_970->g_131
        {0x12L,0x12L,0x12L,0x12L,0x12L,0x12L,0x12L}, // p_970->g_133
        0x7EL, // p_970->g_137
        (VECTOR(int16_t, 16))(0x5B62L, (VECTOR(int16_t, 4))(0x5B62L, (VECTOR(int16_t, 2))(0x5B62L, 0x3584L), 0x3584L), 0x3584L, 0x5B62L, 0x3584L, (VECTOR(int16_t, 2))(0x5B62L, 0x3584L), (VECTOR(int16_t, 2))(0x5B62L, 0x3584L), 0x5B62L, 0x3584L, 0x5B62L, 0x3584L), // p_970->g_149
        0xF5L, // p_970->g_154
        0x83E5D9B5BCDB702CL, // p_970->g_168
        0x406B8AFCL, // p_970->g_171
        {{0xEC7DL,5L}}, // p_970->g_175
        (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x7EL), 0x7EL), 0x7EL, (-1L), 0x7EL), // p_970->g_185
        (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 0x15L), 0x15L), // p_970->g_188
        (VECTOR(int8_t, 2))(0x59L, 9L), // p_970->g_189
        (VECTOR(int8_t, 16))(0x79L, (VECTOR(int8_t, 4))(0x79L, (VECTOR(int8_t, 2))(0x79L, 0x11L), 0x11L), 0x11L, 0x79L, 0x11L, (VECTOR(int8_t, 2))(0x79L, 0x11L), (VECTOR(int8_t, 2))(0x79L, 0x11L), 0x79L, 0x11L, 0x79L, 0x11L), // p_970->g_190
        1UL, // p_970->g_215
        1UL, // p_970->g_229
        (VECTOR(uint32_t, 2))(4294967295UL, 0x7DB5C110L), // p_970->g_232
        (VECTOR(uint8_t, 2))(0x43L, 0UL), // p_970->g_236
        0L, // p_970->g_268
        0x13L, // p_970->g_269
        1L, // p_970->g_270
        0x41L, // p_970->g_271
        {{{0x5AL,0x5AL,0x5AL,0x5AL,0x5AL,0x5AL}}}, // p_970->g_272
        (-4L), // p_970->g_273
        0L, // p_970->g_274
        0x3EL, // p_970->g_275
        0x12L, // p_970->g_276
        0x43L, // p_970->g_277
        0x71L, // p_970->g_278
        3L, // p_970->g_279
        8L, // p_970->g_280
        4L, // p_970->g_281
        9L, // p_970->g_282
        0x71L, // p_970->g_283
        {{0x65L,(-5L),3L,(-5L),0x65L,0x65L},{0x65L,(-5L),3L,(-5L),0x65L,0x65L},{0x65L,(-5L),3L,(-5L),0x65L,0x65L},{0x65L,(-5L),3L,(-5L),0x65L,0x65L},{0x65L,(-5L),3L,(-5L),0x65L,0x65L},{0x65L,(-5L),3L,(-5L),0x65L,0x65L},{0x65L,(-5L),3L,(-5L),0x65L,0x65L}}, // p_970->g_284
        0x45L, // p_970->g_285
        3L, // p_970->g_286
        0x7CL, // p_970->g_287
        {{0x50L,0x50L,0x50L}}, // p_970->g_288
        (-1L), // p_970->g_289
        0x21L, // p_970->g_290
        {1L,1L,1L,1L,1L,1L,1L}, // p_970->g_291
        0x39L, // p_970->g_292
        {{{1L,1L,0x53L,0x3DL,0x01L,0L,0x3CL,0x63L,0x3CL,0L},{1L,1L,0x53L,0x3DL,0x01L,0L,0x3CL,0x63L,0x3CL,0L},{1L,1L,0x53L,0x3DL,0x01L,0L,0x3CL,0x63L,0x3CL,0L},{1L,1L,0x53L,0x3DL,0x01L,0L,0x3CL,0x63L,0x3CL,0L}},{{1L,1L,0x53L,0x3DL,0x01L,0L,0x3CL,0x63L,0x3CL,0L},{1L,1L,0x53L,0x3DL,0x01L,0L,0x3CL,0x63L,0x3CL,0L},{1L,1L,0x53L,0x3DL,0x01L,0L,0x3CL,0x63L,0x3CL,0L},{1L,1L,0x53L,0x3DL,0x01L,0L,0x3CL,0x63L,0x3CL,0L}},{{1L,1L,0x53L,0x3DL,0x01L,0L,0x3CL,0x63L,0x3CL,0L},{1L,1L,0x53L,0x3DL,0x01L,0L,0x3CL,0x63L,0x3CL,0L},{1L,1L,0x53L,0x3DL,0x01L,0L,0x3CL,0x63L,0x3CL,0L},{1L,1L,0x53L,0x3DL,0x01L,0L,0x3CL,0x63L,0x3CL,0L}}}, // p_970->g_293
        0x08L, // p_970->g_294
        0x55L, // p_970->g_295
        (-4L), // p_970->g_296
        0x7EL, // p_970->g_297
        (-5L), // p_970->g_298
        {{0x5BL},{0x5BL},{0x5BL},{0x5BL},{0x5BL}}, // p_970->g_299
        {{{&p_970->g_287,&p_970->g_288[0][1],(void*)0,&p_970->g_288[0][1]},{&p_970->g_287,&p_970->g_288[0][1],(void*)0,&p_970->g_288[0][1]},{&p_970->g_287,&p_970->g_288[0][1],(void*)0,&p_970->g_288[0][1]},{&p_970->g_287,&p_970->g_288[0][1],(void*)0,&p_970->g_288[0][1]},{&p_970->g_287,&p_970->g_288[0][1],(void*)0,&p_970->g_288[0][1]},{&p_970->g_287,&p_970->g_288[0][1],(void*)0,&p_970->g_288[0][1]},{&p_970->g_287,&p_970->g_288[0][1],(void*)0,&p_970->g_288[0][1]}},{{&p_970->g_287,&p_970->g_288[0][1],(void*)0,&p_970->g_288[0][1]},{&p_970->g_287,&p_970->g_288[0][1],(void*)0,&p_970->g_288[0][1]},{&p_970->g_287,&p_970->g_288[0][1],(void*)0,&p_970->g_288[0][1]},{&p_970->g_287,&p_970->g_288[0][1],(void*)0,&p_970->g_288[0][1]},{&p_970->g_287,&p_970->g_288[0][1],(void*)0,&p_970->g_288[0][1]},{&p_970->g_287,&p_970->g_288[0][1],(void*)0,&p_970->g_288[0][1]},{&p_970->g_287,&p_970->g_288[0][1],(void*)0,&p_970->g_288[0][1]}},{{&p_970->g_287,&p_970->g_288[0][1],(void*)0,&p_970->g_288[0][1]},{&p_970->g_287,&p_970->g_288[0][1],(void*)0,&p_970->g_288[0][1]},{&p_970->g_287,&p_970->g_288[0][1],(void*)0,&p_970->g_288[0][1]},{&p_970->g_287,&p_970->g_288[0][1],(void*)0,&p_970->g_288[0][1]},{&p_970->g_287,&p_970->g_288[0][1],(void*)0,&p_970->g_288[0][1]},{&p_970->g_287,&p_970->g_288[0][1],(void*)0,&p_970->g_288[0][1]},{&p_970->g_287,&p_970->g_288[0][1],(void*)0,&p_970->g_288[0][1]}},{{&p_970->g_287,&p_970->g_288[0][1],(void*)0,&p_970->g_288[0][1]},{&p_970->g_287,&p_970->g_288[0][1],(void*)0,&p_970->g_288[0][1]},{&p_970->g_287,&p_970->g_288[0][1],(void*)0,&p_970->g_288[0][1]},{&p_970->g_287,&p_970->g_288[0][1],(void*)0,&p_970->g_288[0][1]},{&p_970->g_287,&p_970->g_288[0][1],(void*)0,&p_970->g_288[0][1]},{&p_970->g_287,&p_970->g_288[0][1],(void*)0,&p_970->g_288[0][1]},{&p_970->g_287,&p_970->g_288[0][1],(void*)0,&p_970->g_288[0][1]}}}, // p_970->g_267
        &p_970->g_267[1][4][2], // p_970->g_266
        0L, // p_970->g_315
        &p_970->g_315, // p_970->g_314
        {{&p_970->g_171},{&p_970->g_171},{&p_970->g_171}}, // p_970->g_389
        &p_970->g_47, // p_970->g_394
        {0x42BC16C8DF5154F3L,-6L,0xFF4D86060A22F4F1L,8L,18446744073709551615UL,4L}, // p_970->g_428
        (VECTOR(uint32_t, 16))(0xF1537748L, (VECTOR(uint32_t, 4))(0xF1537748L, (VECTOR(uint32_t, 2))(0xF1537748L, 4294967295UL), 4294967295UL), 4294967295UL, 0xF1537748L, 4294967295UL, (VECTOR(uint32_t, 2))(0xF1537748L, 4294967295UL), (VECTOR(uint32_t, 2))(0xF1537748L, 4294967295UL), 0xF1537748L, 4294967295UL, 0xF1537748L, 4294967295UL), // p_970->g_453
        (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x518D3937B353D9A9L), 0x518D3937B353D9A9L), // p_970->g_460
        &p_970->g_428.f4, // p_970->g_471
        (void*)0, // p_970->g_472
        (void*)0, // p_970->g_473
        (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x15L), 0x15L), 0x15L, (-1L), 0x15L), // p_970->g_486
        (VECTOR(int8_t, 4))(0x13L, (VECTOR(int8_t, 2))(0x13L, 0x7CL), 0x7CL), // p_970->g_487
        (void*)0, // p_970->g_488
        0xCDL, // p_970->g_499
        (VECTOR(int32_t, 2))(0x0663ABD1L, 3L), // p_970->g_517
        &p_970->g_175, // p_970->g_549
        &p_970->g_549, // p_970->g_548
        {{0UL,1L}}, // p_970->g_552
        {{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL}}, // p_970->g_558
        (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xD77AL), 0xD77AL), 0xD77AL, 65535UL, 0xD77AL), // p_970->g_573
        {{65533UL,1L}}, // p_970->g_580
        &p_970->g_580, // p_970->g_579
        &p_970->g_579, // p_970->g_578
        {{{4UL,0x567A423CL}},{{4UL,0x567A423CL}},{{4UL,0x567A423CL}},{{4UL,0x567A423CL}},{{4UL,0x567A423CL}},{{4UL,0x567A423CL}},{{4UL,0x567A423CL}},{{4UL,0x567A423CL}}}, // p_970->g_601
        (VECTOR(uint16_t, 16))(0x5352L, (VECTOR(uint16_t, 4))(0x5352L, (VECTOR(uint16_t, 2))(0x5352L, 4UL), 4UL), 4UL, 0x5352L, 4UL, (VECTOR(uint16_t, 2))(0x5352L, 4UL), (VECTOR(uint16_t, 2))(0x5352L, 4UL), 0x5352L, 4UL, 0x5352L, 4UL), // p_970->g_608
        (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x71L), 0x71L), 0x71L, 255UL, 0x71L), // p_970->g_616
        (VECTOR(int64_t, 2))(0x6BE1184FC5566C73L, 0x408AA13ABB4F8FB1L), // p_970->g_618
        (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x85L), 0x85L), 0x85L, 0UL, 0x85L), // p_970->g_620
        (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0UL), 0UL), // p_970->g_651
        (VECTOR(uint32_t, 8))(4294967288UL, (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 0xBDB0F4F1L), 0xBDB0F4F1L), 0xBDB0F4F1L, 4294967288UL, 0xBDB0F4F1L), // p_970->g_660
        {0x507C8F18L,0xBF583F769349EEDFL,0x389B98467E3889B1L}, // p_970->g_763
        (VECTOR(uint16_t, 2))(0x6EA1L, 8UL), // p_970->g_770
        (VECTOR(int16_t, 8))(0x73DEL, (VECTOR(int16_t, 4))(0x73DEL, (VECTOR(int16_t, 2))(0x73DEL, 0L), 0L), 0L, 0x73DEL, 0L), // p_970->g_772
        0x0AL, // p_970->g_775
        {{{(void*)0,&p_970->g_775,&p_970->g_775,(void*)0,&p_970->g_775,&p_970->g_775,&p_970->g_775,&p_970->g_775,(void*)0},{(void*)0,&p_970->g_775,&p_970->g_775,(void*)0,&p_970->g_775,&p_970->g_775,&p_970->g_775,&p_970->g_775,(void*)0},{(void*)0,&p_970->g_775,&p_970->g_775,(void*)0,&p_970->g_775,&p_970->g_775,&p_970->g_775,&p_970->g_775,(void*)0},{(void*)0,&p_970->g_775,&p_970->g_775,(void*)0,&p_970->g_775,&p_970->g_775,&p_970->g_775,&p_970->g_775,(void*)0},{(void*)0,&p_970->g_775,&p_970->g_775,(void*)0,&p_970->g_775,&p_970->g_775,&p_970->g_775,&p_970->g_775,(void*)0},{(void*)0,&p_970->g_775,&p_970->g_775,(void*)0,&p_970->g_775,&p_970->g_775,&p_970->g_775,&p_970->g_775,(void*)0},{(void*)0,&p_970->g_775,&p_970->g_775,(void*)0,&p_970->g_775,&p_970->g_775,&p_970->g_775,&p_970->g_775,(void*)0}},{{(void*)0,&p_970->g_775,&p_970->g_775,(void*)0,&p_970->g_775,&p_970->g_775,&p_970->g_775,&p_970->g_775,(void*)0},{(void*)0,&p_970->g_775,&p_970->g_775,(void*)0,&p_970->g_775,&p_970->g_775,&p_970->g_775,&p_970->g_775,(void*)0},{(void*)0,&p_970->g_775,&p_970->g_775,(void*)0,&p_970->g_775,&p_970->g_775,&p_970->g_775,&p_970->g_775,(void*)0},{(void*)0,&p_970->g_775,&p_970->g_775,(void*)0,&p_970->g_775,&p_970->g_775,&p_970->g_775,&p_970->g_775,(void*)0},{(void*)0,&p_970->g_775,&p_970->g_775,(void*)0,&p_970->g_775,&p_970->g_775,&p_970->g_775,&p_970->g_775,(void*)0},{(void*)0,&p_970->g_775,&p_970->g_775,(void*)0,&p_970->g_775,&p_970->g_775,&p_970->g_775,&p_970->g_775,(void*)0},{(void*)0,&p_970->g_775,&p_970->g_775,(void*)0,&p_970->g_775,&p_970->g_775,&p_970->g_775,&p_970->g_775,(void*)0}}}, // p_970->g_774
        {&p_970->g_774[1][4][7],&p_970->g_774[1][4][7],&p_970->g_774[1][4][7],&p_970->g_774[1][4][7],&p_970->g_774[1][4][7],&p_970->g_774[1][4][7],&p_970->g_774[1][4][7],&p_970->g_774[1][4][7]}, // p_970->g_773
        {0xE18A83F9EAF6723DL,0x19F0723CL,0x6AA720A50E670D8DL,0x52F53EAD9283FFE6L,4UL,0x68D5F9F6L}, // p_970->g_781
        {18446744073709551615UL,-8L,1UL,0L,0xE6D0B43616AC59FEL,-8L}, // p_970->g_782
        (void*)0, // p_970->g_784
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), // p_970->g_793
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x1325B098L), 0x1325B098L), // p_970->g_794
        (VECTOR(int32_t, 8))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x726B8EE4L), 0x726B8EE4L), 0x726B8EE4L, (-5L), 0x726B8EE4L), // p_970->g_795
        (VECTOR(int32_t, 2))((-1L), 0L), // p_970->g_825
        (VECTOR(uint8_t, 8))(0x04L, (VECTOR(uint8_t, 4))(0x04L, (VECTOR(uint8_t, 2))(0x04L, 0x6DL), 0x6DL), 0x6DL, 0x04L, 0x6DL), // p_970->g_832
        (void*)0, // p_970->g_835
        (void*)0, // p_970->g_859
        (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL), // p_970->g_862
        (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0xD1FE618DCCAD60F6L), 0xD1FE618DCCAD60F6L), // p_970->g_868
        &p_970->g_389[1][0], // p_970->g_886
        0xC320L, // p_970->g_898
        (VECTOR(uint8_t, 8))(0x84L, (VECTOR(uint8_t, 4))(0x84L, (VECTOR(uint8_t, 2))(0x84L, 255UL), 255UL), 255UL, 0x84L, 255UL), // p_970->g_901
        {0x59F9A163CAB5950AL,-1L,7UL,0x04EB5FB9806BC96FL,18446744073709551614UL,0x2159AC42L}, // p_970->g_906
        (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x4FL), 0x4FL), 0x4FL, 0L, 0x4FL, (VECTOR(int8_t, 2))(0L, 0x4FL), (VECTOR(int8_t, 2))(0L, 0x4FL), 0L, 0x4FL, 0L, 0x4FL), // p_970->g_908
        (VECTOR(int8_t, 2))(1L, 1L), // p_970->g_909
        &p_970->g_763, // p_970->g_926
        &p_970->g_926, // p_970->g_925
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L)), // p_970->g_938
        (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x78E4B5AF6CE926FCL), 0x78E4B5AF6CE926FCL), // p_970->g_939
        (VECTOR(uint64_t, 16))(0x31371FF13DE12C12L, (VECTOR(uint64_t, 4))(0x31371FF13DE12C12L, (VECTOR(uint64_t, 2))(0x31371FF13DE12C12L, 18446744073709551614UL), 18446744073709551614UL), 18446744073709551614UL, 0x31371FF13DE12C12L, 18446744073709551614UL, (VECTOR(uint64_t, 2))(0x31371FF13DE12C12L, 18446744073709551614UL), (VECTOR(uint64_t, 2))(0x31371FF13DE12C12L, 18446744073709551614UL), 0x31371FF13DE12C12L, 18446744073709551614UL, 0x31371FF13DE12C12L, 18446744073709551614UL), // p_970->g_942
        0, // p_970->v_collective
        sequence_input[get_global_id(0)], // p_970->global_0_offset
        sequence_input[get_global_id(1)], // p_970->global_1_offset
        sequence_input[get_global_id(2)], // p_970->global_2_offset
        sequence_input[get_local_id(0)], // p_970->local_0_offset
        sequence_input[get_local_id(1)], // p_970->local_1_offset
        sequence_input[get_local_id(2)], // p_970->local_2_offset
        sequence_input[get_group_id(0)], // p_970->group_0_offset
        sequence_input[get_group_id(1)], // p_970->group_1_offset
        sequence_input[get_group_id(2)], // p_970->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 19)), permutations[0][get_linear_local_id()])), // p_970->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_971 = c_972;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_970);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_970->g_5, "p_970->g_5", print_hash_value);
    transparent_crc(p_970->g_41.s0, "p_970->g_41.s0", print_hash_value);
    transparent_crc(p_970->g_41.s1, "p_970->g_41.s1", print_hash_value);
    transparent_crc(p_970->g_41.s2, "p_970->g_41.s2", print_hash_value);
    transparent_crc(p_970->g_41.s3, "p_970->g_41.s3", print_hash_value);
    transparent_crc(p_970->g_41.s4, "p_970->g_41.s4", print_hash_value);
    transparent_crc(p_970->g_41.s5, "p_970->g_41.s5", print_hash_value);
    transparent_crc(p_970->g_41.s6, "p_970->g_41.s6", print_hash_value);
    transparent_crc(p_970->g_41.s7, "p_970->g_41.s7", print_hash_value);
    transparent_crc(p_970->g_48, "p_970->g_48", print_hash_value);
    transparent_crc(p_970->g_50.s0, "p_970->g_50.s0", print_hash_value);
    transparent_crc(p_970->g_50.s1, "p_970->g_50.s1", print_hash_value);
    transparent_crc(p_970->g_50.s2, "p_970->g_50.s2", print_hash_value);
    transparent_crc(p_970->g_50.s3, "p_970->g_50.s3", print_hash_value);
    transparent_crc(p_970->g_50.s4, "p_970->g_50.s4", print_hash_value);
    transparent_crc(p_970->g_50.s5, "p_970->g_50.s5", print_hash_value);
    transparent_crc(p_970->g_50.s6, "p_970->g_50.s6", print_hash_value);
    transparent_crc(p_970->g_50.s7, "p_970->g_50.s7", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_970->g_57[i][j], "p_970->g_57[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_970->g_76.s0, "p_970->g_76.s0", print_hash_value);
    transparent_crc(p_970->g_76.s1, "p_970->g_76.s1", print_hash_value);
    transparent_crc(p_970->g_76.s2, "p_970->g_76.s2", print_hash_value);
    transparent_crc(p_970->g_76.s3, "p_970->g_76.s3", print_hash_value);
    transparent_crc(p_970->g_76.s4, "p_970->g_76.s4", print_hash_value);
    transparent_crc(p_970->g_76.s5, "p_970->g_76.s5", print_hash_value);
    transparent_crc(p_970->g_76.s6, "p_970->g_76.s6", print_hash_value);
    transparent_crc(p_970->g_76.s7, "p_970->g_76.s7", print_hash_value);
    transparent_crc(p_970->g_120.f0, "p_970->g_120.f0", print_hash_value);
    transparent_crc(p_970->g_120.f1, "p_970->g_120.f1", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_970->g_131[i], "p_970->g_131[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_970->g_133[i], "p_970->g_133[i]", print_hash_value);

    }
    transparent_crc(p_970->g_137, "p_970->g_137", print_hash_value);
    transparent_crc(p_970->g_149.s0, "p_970->g_149.s0", print_hash_value);
    transparent_crc(p_970->g_149.s1, "p_970->g_149.s1", print_hash_value);
    transparent_crc(p_970->g_149.s2, "p_970->g_149.s2", print_hash_value);
    transparent_crc(p_970->g_149.s3, "p_970->g_149.s3", print_hash_value);
    transparent_crc(p_970->g_149.s4, "p_970->g_149.s4", print_hash_value);
    transparent_crc(p_970->g_149.s5, "p_970->g_149.s5", print_hash_value);
    transparent_crc(p_970->g_149.s6, "p_970->g_149.s6", print_hash_value);
    transparent_crc(p_970->g_149.s7, "p_970->g_149.s7", print_hash_value);
    transparent_crc(p_970->g_149.s8, "p_970->g_149.s8", print_hash_value);
    transparent_crc(p_970->g_149.s9, "p_970->g_149.s9", print_hash_value);
    transparent_crc(p_970->g_149.sa, "p_970->g_149.sa", print_hash_value);
    transparent_crc(p_970->g_149.sb, "p_970->g_149.sb", print_hash_value);
    transparent_crc(p_970->g_149.sc, "p_970->g_149.sc", print_hash_value);
    transparent_crc(p_970->g_149.sd, "p_970->g_149.sd", print_hash_value);
    transparent_crc(p_970->g_149.se, "p_970->g_149.se", print_hash_value);
    transparent_crc(p_970->g_149.sf, "p_970->g_149.sf", print_hash_value);
    transparent_crc(p_970->g_154, "p_970->g_154", print_hash_value);
    transparent_crc(p_970->g_168, "p_970->g_168", print_hash_value);
    transparent_crc(p_970->g_171, "p_970->g_171", print_hash_value);
    transparent_crc(p_970->g_175.f0.f0, "p_970->g_175.f0.f0", print_hash_value);
    transparent_crc(p_970->g_175.f0.f1, "p_970->g_175.f0.f1", print_hash_value);
    transparent_crc(p_970->g_185.s0, "p_970->g_185.s0", print_hash_value);
    transparent_crc(p_970->g_185.s1, "p_970->g_185.s1", print_hash_value);
    transparent_crc(p_970->g_185.s2, "p_970->g_185.s2", print_hash_value);
    transparent_crc(p_970->g_185.s3, "p_970->g_185.s3", print_hash_value);
    transparent_crc(p_970->g_185.s4, "p_970->g_185.s4", print_hash_value);
    transparent_crc(p_970->g_185.s5, "p_970->g_185.s5", print_hash_value);
    transparent_crc(p_970->g_185.s6, "p_970->g_185.s6", print_hash_value);
    transparent_crc(p_970->g_185.s7, "p_970->g_185.s7", print_hash_value);
    transparent_crc(p_970->g_188.x, "p_970->g_188.x", print_hash_value);
    transparent_crc(p_970->g_188.y, "p_970->g_188.y", print_hash_value);
    transparent_crc(p_970->g_188.z, "p_970->g_188.z", print_hash_value);
    transparent_crc(p_970->g_188.w, "p_970->g_188.w", print_hash_value);
    transparent_crc(p_970->g_189.x, "p_970->g_189.x", print_hash_value);
    transparent_crc(p_970->g_189.y, "p_970->g_189.y", print_hash_value);
    transparent_crc(p_970->g_190.s0, "p_970->g_190.s0", print_hash_value);
    transparent_crc(p_970->g_190.s1, "p_970->g_190.s1", print_hash_value);
    transparent_crc(p_970->g_190.s2, "p_970->g_190.s2", print_hash_value);
    transparent_crc(p_970->g_190.s3, "p_970->g_190.s3", print_hash_value);
    transparent_crc(p_970->g_190.s4, "p_970->g_190.s4", print_hash_value);
    transparent_crc(p_970->g_190.s5, "p_970->g_190.s5", print_hash_value);
    transparent_crc(p_970->g_190.s6, "p_970->g_190.s6", print_hash_value);
    transparent_crc(p_970->g_190.s7, "p_970->g_190.s7", print_hash_value);
    transparent_crc(p_970->g_190.s8, "p_970->g_190.s8", print_hash_value);
    transparent_crc(p_970->g_190.s9, "p_970->g_190.s9", print_hash_value);
    transparent_crc(p_970->g_190.sa, "p_970->g_190.sa", print_hash_value);
    transparent_crc(p_970->g_190.sb, "p_970->g_190.sb", print_hash_value);
    transparent_crc(p_970->g_190.sc, "p_970->g_190.sc", print_hash_value);
    transparent_crc(p_970->g_190.sd, "p_970->g_190.sd", print_hash_value);
    transparent_crc(p_970->g_190.se, "p_970->g_190.se", print_hash_value);
    transparent_crc(p_970->g_190.sf, "p_970->g_190.sf", print_hash_value);
    transparent_crc(p_970->g_215, "p_970->g_215", print_hash_value);
    transparent_crc(p_970->g_229, "p_970->g_229", print_hash_value);
    transparent_crc(p_970->g_232.x, "p_970->g_232.x", print_hash_value);
    transparent_crc(p_970->g_232.y, "p_970->g_232.y", print_hash_value);
    transparent_crc(p_970->g_236.x, "p_970->g_236.x", print_hash_value);
    transparent_crc(p_970->g_236.y, "p_970->g_236.y", print_hash_value);
    transparent_crc(p_970->g_268, "p_970->g_268", print_hash_value);
    transparent_crc(p_970->g_269, "p_970->g_269", print_hash_value);
    transparent_crc(p_970->g_270, "p_970->g_270", print_hash_value);
    transparent_crc(p_970->g_271, "p_970->g_271", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_970->g_272[i][j][k], "p_970->g_272[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_970->g_273, "p_970->g_273", print_hash_value);
    transparent_crc(p_970->g_274, "p_970->g_274", print_hash_value);
    transparent_crc(p_970->g_275, "p_970->g_275", print_hash_value);
    transparent_crc(p_970->g_276, "p_970->g_276", print_hash_value);
    transparent_crc(p_970->g_277, "p_970->g_277", print_hash_value);
    transparent_crc(p_970->g_278, "p_970->g_278", print_hash_value);
    transparent_crc(p_970->g_279, "p_970->g_279", print_hash_value);
    transparent_crc(p_970->g_280, "p_970->g_280", print_hash_value);
    transparent_crc(p_970->g_281, "p_970->g_281", print_hash_value);
    transparent_crc(p_970->g_282, "p_970->g_282", print_hash_value);
    transparent_crc(p_970->g_283, "p_970->g_283", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_970->g_284[i][j], "p_970->g_284[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_970->g_285, "p_970->g_285", print_hash_value);
    transparent_crc(p_970->g_286, "p_970->g_286", print_hash_value);
    transparent_crc(p_970->g_287, "p_970->g_287", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_970->g_288[i][j], "p_970->g_288[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_970->g_289, "p_970->g_289", print_hash_value);
    transparent_crc(p_970->g_290, "p_970->g_290", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_970->g_291[i], "p_970->g_291[i]", print_hash_value);

    }
    transparent_crc(p_970->g_292, "p_970->g_292", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(p_970->g_293[i][j][k], "p_970->g_293[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_970->g_294, "p_970->g_294", print_hash_value);
    transparent_crc(p_970->g_295, "p_970->g_295", print_hash_value);
    transparent_crc(p_970->g_296, "p_970->g_296", print_hash_value);
    transparent_crc(p_970->g_297, "p_970->g_297", print_hash_value);
    transparent_crc(p_970->g_298, "p_970->g_298", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_970->g_299[i][j], "p_970->g_299[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_970->g_315, "p_970->g_315", print_hash_value);
    transparent_crc(p_970->g_428.f0, "p_970->g_428.f0", print_hash_value);
    transparent_crc(p_970->g_428.f1, "p_970->g_428.f1", print_hash_value);
    transparent_crc(p_970->g_428.f2, "p_970->g_428.f2", print_hash_value);
    transparent_crc(p_970->g_428.f3, "p_970->g_428.f3", print_hash_value);
    transparent_crc(p_970->g_428.f4, "p_970->g_428.f4", print_hash_value);
    transparent_crc(p_970->g_428.f5, "p_970->g_428.f5", print_hash_value);
    transparent_crc(p_970->g_453.s0, "p_970->g_453.s0", print_hash_value);
    transparent_crc(p_970->g_453.s1, "p_970->g_453.s1", print_hash_value);
    transparent_crc(p_970->g_453.s2, "p_970->g_453.s2", print_hash_value);
    transparent_crc(p_970->g_453.s3, "p_970->g_453.s3", print_hash_value);
    transparent_crc(p_970->g_453.s4, "p_970->g_453.s4", print_hash_value);
    transparent_crc(p_970->g_453.s5, "p_970->g_453.s5", print_hash_value);
    transparent_crc(p_970->g_453.s6, "p_970->g_453.s6", print_hash_value);
    transparent_crc(p_970->g_453.s7, "p_970->g_453.s7", print_hash_value);
    transparent_crc(p_970->g_453.s8, "p_970->g_453.s8", print_hash_value);
    transparent_crc(p_970->g_453.s9, "p_970->g_453.s9", print_hash_value);
    transparent_crc(p_970->g_453.sa, "p_970->g_453.sa", print_hash_value);
    transparent_crc(p_970->g_453.sb, "p_970->g_453.sb", print_hash_value);
    transparent_crc(p_970->g_453.sc, "p_970->g_453.sc", print_hash_value);
    transparent_crc(p_970->g_453.sd, "p_970->g_453.sd", print_hash_value);
    transparent_crc(p_970->g_453.se, "p_970->g_453.se", print_hash_value);
    transparent_crc(p_970->g_453.sf, "p_970->g_453.sf", print_hash_value);
    transparent_crc(p_970->g_460.x, "p_970->g_460.x", print_hash_value);
    transparent_crc(p_970->g_460.y, "p_970->g_460.y", print_hash_value);
    transparent_crc(p_970->g_460.z, "p_970->g_460.z", print_hash_value);
    transparent_crc(p_970->g_460.w, "p_970->g_460.w", print_hash_value);
    transparent_crc(p_970->g_486.s0, "p_970->g_486.s0", print_hash_value);
    transparent_crc(p_970->g_486.s1, "p_970->g_486.s1", print_hash_value);
    transparent_crc(p_970->g_486.s2, "p_970->g_486.s2", print_hash_value);
    transparent_crc(p_970->g_486.s3, "p_970->g_486.s3", print_hash_value);
    transparent_crc(p_970->g_486.s4, "p_970->g_486.s4", print_hash_value);
    transparent_crc(p_970->g_486.s5, "p_970->g_486.s5", print_hash_value);
    transparent_crc(p_970->g_486.s6, "p_970->g_486.s6", print_hash_value);
    transparent_crc(p_970->g_486.s7, "p_970->g_486.s7", print_hash_value);
    transparent_crc(p_970->g_487.x, "p_970->g_487.x", print_hash_value);
    transparent_crc(p_970->g_487.y, "p_970->g_487.y", print_hash_value);
    transparent_crc(p_970->g_487.z, "p_970->g_487.z", print_hash_value);
    transparent_crc(p_970->g_487.w, "p_970->g_487.w", print_hash_value);
    transparent_crc(p_970->g_499, "p_970->g_499", print_hash_value);
    transparent_crc(p_970->g_517.x, "p_970->g_517.x", print_hash_value);
    transparent_crc(p_970->g_517.y, "p_970->g_517.y", print_hash_value);
    transparent_crc(p_970->g_552.f0.f0, "p_970->g_552.f0.f0", print_hash_value);
    transparent_crc(p_970->g_552.f0.f1, "p_970->g_552.f0.f1", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_970->g_558[i][j], "p_970->g_558[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_970->g_573.s0, "p_970->g_573.s0", print_hash_value);
    transparent_crc(p_970->g_573.s1, "p_970->g_573.s1", print_hash_value);
    transparent_crc(p_970->g_573.s2, "p_970->g_573.s2", print_hash_value);
    transparent_crc(p_970->g_573.s3, "p_970->g_573.s3", print_hash_value);
    transparent_crc(p_970->g_573.s4, "p_970->g_573.s4", print_hash_value);
    transparent_crc(p_970->g_573.s5, "p_970->g_573.s5", print_hash_value);
    transparent_crc(p_970->g_573.s6, "p_970->g_573.s6", print_hash_value);
    transparent_crc(p_970->g_573.s7, "p_970->g_573.s7", print_hash_value);
    transparent_crc(p_970->g_580.f0.f0, "p_970->g_580.f0.f0", print_hash_value);
    transparent_crc(p_970->g_580.f0.f1, "p_970->g_580.f0.f1", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_970->g_601[i].f0.f0, "p_970->g_601[i].f0.f0", print_hash_value);
        transparent_crc(p_970->g_601[i].f0.f1, "p_970->g_601[i].f0.f1", print_hash_value);

    }
    transparent_crc(p_970->g_608.s0, "p_970->g_608.s0", print_hash_value);
    transparent_crc(p_970->g_608.s1, "p_970->g_608.s1", print_hash_value);
    transparent_crc(p_970->g_608.s2, "p_970->g_608.s2", print_hash_value);
    transparent_crc(p_970->g_608.s3, "p_970->g_608.s3", print_hash_value);
    transparent_crc(p_970->g_608.s4, "p_970->g_608.s4", print_hash_value);
    transparent_crc(p_970->g_608.s5, "p_970->g_608.s5", print_hash_value);
    transparent_crc(p_970->g_608.s6, "p_970->g_608.s6", print_hash_value);
    transparent_crc(p_970->g_608.s7, "p_970->g_608.s7", print_hash_value);
    transparent_crc(p_970->g_608.s8, "p_970->g_608.s8", print_hash_value);
    transparent_crc(p_970->g_608.s9, "p_970->g_608.s9", print_hash_value);
    transparent_crc(p_970->g_608.sa, "p_970->g_608.sa", print_hash_value);
    transparent_crc(p_970->g_608.sb, "p_970->g_608.sb", print_hash_value);
    transparent_crc(p_970->g_608.sc, "p_970->g_608.sc", print_hash_value);
    transparent_crc(p_970->g_608.sd, "p_970->g_608.sd", print_hash_value);
    transparent_crc(p_970->g_608.se, "p_970->g_608.se", print_hash_value);
    transparent_crc(p_970->g_608.sf, "p_970->g_608.sf", print_hash_value);
    transparent_crc(p_970->g_616.s0, "p_970->g_616.s0", print_hash_value);
    transparent_crc(p_970->g_616.s1, "p_970->g_616.s1", print_hash_value);
    transparent_crc(p_970->g_616.s2, "p_970->g_616.s2", print_hash_value);
    transparent_crc(p_970->g_616.s3, "p_970->g_616.s3", print_hash_value);
    transparent_crc(p_970->g_616.s4, "p_970->g_616.s4", print_hash_value);
    transparent_crc(p_970->g_616.s5, "p_970->g_616.s5", print_hash_value);
    transparent_crc(p_970->g_616.s6, "p_970->g_616.s6", print_hash_value);
    transparent_crc(p_970->g_616.s7, "p_970->g_616.s7", print_hash_value);
    transparent_crc(p_970->g_618.x, "p_970->g_618.x", print_hash_value);
    transparent_crc(p_970->g_618.y, "p_970->g_618.y", print_hash_value);
    transparent_crc(p_970->g_620.s0, "p_970->g_620.s0", print_hash_value);
    transparent_crc(p_970->g_620.s1, "p_970->g_620.s1", print_hash_value);
    transparent_crc(p_970->g_620.s2, "p_970->g_620.s2", print_hash_value);
    transparent_crc(p_970->g_620.s3, "p_970->g_620.s3", print_hash_value);
    transparent_crc(p_970->g_620.s4, "p_970->g_620.s4", print_hash_value);
    transparent_crc(p_970->g_620.s5, "p_970->g_620.s5", print_hash_value);
    transparent_crc(p_970->g_620.s6, "p_970->g_620.s6", print_hash_value);
    transparent_crc(p_970->g_620.s7, "p_970->g_620.s7", print_hash_value);
    transparent_crc(p_970->g_651.x, "p_970->g_651.x", print_hash_value);
    transparent_crc(p_970->g_651.y, "p_970->g_651.y", print_hash_value);
    transparent_crc(p_970->g_651.z, "p_970->g_651.z", print_hash_value);
    transparent_crc(p_970->g_651.w, "p_970->g_651.w", print_hash_value);
    transparent_crc(p_970->g_660.s0, "p_970->g_660.s0", print_hash_value);
    transparent_crc(p_970->g_660.s1, "p_970->g_660.s1", print_hash_value);
    transparent_crc(p_970->g_660.s2, "p_970->g_660.s2", print_hash_value);
    transparent_crc(p_970->g_660.s3, "p_970->g_660.s3", print_hash_value);
    transparent_crc(p_970->g_660.s4, "p_970->g_660.s4", print_hash_value);
    transparent_crc(p_970->g_660.s5, "p_970->g_660.s5", print_hash_value);
    transparent_crc(p_970->g_660.s6, "p_970->g_660.s6", print_hash_value);
    transparent_crc(p_970->g_660.s7, "p_970->g_660.s7", print_hash_value);
    transparent_crc(p_970->g_763.f0, "p_970->g_763.f0", print_hash_value);
    transparent_crc(p_970->g_763.f1, "p_970->g_763.f1", print_hash_value);
    transparent_crc(p_970->g_763.f2, "p_970->g_763.f2", print_hash_value);
    transparent_crc(p_970->g_770.x, "p_970->g_770.x", print_hash_value);
    transparent_crc(p_970->g_770.y, "p_970->g_770.y", print_hash_value);
    transparent_crc(p_970->g_772.s0, "p_970->g_772.s0", print_hash_value);
    transparent_crc(p_970->g_772.s1, "p_970->g_772.s1", print_hash_value);
    transparent_crc(p_970->g_772.s2, "p_970->g_772.s2", print_hash_value);
    transparent_crc(p_970->g_772.s3, "p_970->g_772.s3", print_hash_value);
    transparent_crc(p_970->g_772.s4, "p_970->g_772.s4", print_hash_value);
    transparent_crc(p_970->g_772.s5, "p_970->g_772.s5", print_hash_value);
    transparent_crc(p_970->g_772.s6, "p_970->g_772.s6", print_hash_value);
    transparent_crc(p_970->g_772.s7, "p_970->g_772.s7", print_hash_value);
    transparent_crc(p_970->g_775, "p_970->g_775", print_hash_value);
    transparent_crc(p_970->g_781.f0, "p_970->g_781.f0", print_hash_value);
    transparent_crc(p_970->g_781.f1, "p_970->g_781.f1", print_hash_value);
    transparent_crc(p_970->g_781.f2, "p_970->g_781.f2", print_hash_value);
    transparent_crc(p_970->g_781.f3, "p_970->g_781.f3", print_hash_value);
    transparent_crc(p_970->g_781.f4, "p_970->g_781.f4", print_hash_value);
    transparent_crc(p_970->g_781.f5, "p_970->g_781.f5", print_hash_value);
    transparent_crc(p_970->g_782.f0, "p_970->g_782.f0", print_hash_value);
    transparent_crc(p_970->g_782.f1, "p_970->g_782.f1", print_hash_value);
    transparent_crc(p_970->g_782.f2, "p_970->g_782.f2", print_hash_value);
    transparent_crc(p_970->g_782.f3, "p_970->g_782.f3", print_hash_value);
    transparent_crc(p_970->g_782.f4, "p_970->g_782.f4", print_hash_value);
    transparent_crc(p_970->g_782.f5, "p_970->g_782.f5", print_hash_value);
    transparent_crc(p_970->g_793.x, "p_970->g_793.x", print_hash_value);
    transparent_crc(p_970->g_793.y, "p_970->g_793.y", print_hash_value);
    transparent_crc(p_970->g_793.z, "p_970->g_793.z", print_hash_value);
    transparent_crc(p_970->g_793.w, "p_970->g_793.w", print_hash_value);
    transparent_crc(p_970->g_794.x, "p_970->g_794.x", print_hash_value);
    transparent_crc(p_970->g_794.y, "p_970->g_794.y", print_hash_value);
    transparent_crc(p_970->g_794.z, "p_970->g_794.z", print_hash_value);
    transparent_crc(p_970->g_794.w, "p_970->g_794.w", print_hash_value);
    transparent_crc(p_970->g_795.s0, "p_970->g_795.s0", print_hash_value);
    transparent_crc(p_970->g_795.s1, "p_970->g_795.s1", print_hash_value);
    transparent_crc(p_970->g_795.s2, "p_970->g_795.s2", print_hash_value);
    transparent_crc(p_970->g_795.s3, "p_970->g_795.s3", print_hash_value);
    transparent_crc(p_970->g_795.s4, "p_970->g_795.s4", print_hash_value);
    transparent_crc(p_970->g_795.s5, "p_970->g_795.s5", print_hash_value);
    transparent_crc(p_970->g_795.s6, "p_970->g_795.s6", print_hash_value);
    transparent_crc(p_970->g_795.s7, "p_970->g_795.s7", print_hash_value);
    transparent_crc(p_970->g_825.x, "p_970->g_825.x", print_hash_value);
    transparent_crc(p_970->g_825.y, "p_970->g_825.y", print_hash_value);
    transparent_crc(p_970->g_832.s0, "p_970->g_832.s0", print_hash_value);
    transparent_crc(p_970->g_832.s1, "p_970->g_832.s1", print_hash_value);
    transparent_crc(p_970->g_832.s2, "p_970->g_832.s2", print_hash_value);
    transparent_crc(p_970->g_832.s3, "p_970->g_832.s3", print_hash_value);
    transparent_crc(p_970->g_832.s4, "p_970->g_832.s4", print_hash_value);
    transparent_crc(p_970->g_832.s5, "p_970->g_832.s5", print_hash_value);
    transparent_crc(p_970->g_832.s6, "p_970->g_832.s6", print_hash_value);
    transparent_crc(p_970->g_832.s7, "p_970->g_832.s7", print_hash_value);
    transparent_crc(p_970->g_862.s0, "p_970->g_862.s0", print_hash_value);
    transparent_crc(p_970->g_862.s1, "p_970->g_862.s1", print_hash_value);
    transparent_crc(p_970->g_862.s2, "p_970->g_862.s2", print_hash_value);
    transparent_crc(p_970->g_862.s3, "p_970->g_862.s3", print_hash_value);
    transparent_crc(p_970->g_862.s4, "p_970->g_862.s4", print_hash_value);
    transparent_crc(p_970->g_862.s5, "p_970->g_862.s5", print_hash_value);
    transparent_crc(p_970->g_862.s6, "p_970->g_862.s6", print_hash_value);
    transparent_crc(p_970->g_862.s7, "p_970->g_862.s7", print_hash_value);
    transparent_crc(p_970->g_868.x, "p_970->g_868.x", print_hash_value);
    transparent_crc(p_970->g_868.y, "p_970->g_868.y", print_hash_value);
    transparent_crc(p_970->g_868.z, "p_970->g_868.z", print_hash_value);
    transparent_crc(p_970->g_868.w, "p_970->g_868.w", print_hash_value);
    transparent_crc(p_970->g_898, "p_970->g_898", print_hash_value);
    transparent_crc(p_970->g_901.s0, "p_970->g_901.s0", print_hash_value);
    transparent_crc(p_970->g_901.s1, "p_970->g_901.s1", print_hash_value);
    transparent_crc(p_970->g_901.s2, "p_970->g_901.s2", print_hash_value);
    transparent_crc(p_970->g_901.s3, "p_970->g_901.s3", print_hash_value);
    transparent_crc(p_970->g_901.s4, "p_970->g_901.s4", print_hash_value);
    transparent_crc(p_970->g_901.s5, "p_970->g_901.s5", print_hash_value);
    transparent_crc(p_970->g_901.s6, "p_970->g_901.s6", print_hash_value);
    transparent_crc(p_970->g_901.s7, "p_970->g_901.s7", print_hash_value);
    transparent_crc(p_970->g_906.f0, "p_970->g_906.f0", print_hash_value);
    transparent_crc(p_970->g_906.f1, "p_970->g_906.f1", print_hash_value);
    transparent_crc(p_970->g_906.f2, "p_970->g_906.f2", print_hash_value);
    transparent_crc(p_970->g_906.f3, "p_970->g_906.f3", print_hash_value);
    transparent_crc(p_970->g_906.f4, "p_970->g_906.f4", print_hash_value);
    transparent_crc(p_970->g_906.f5, "p_970->g_906.f5", print_hash_value);
    transparent_crc(p_970->g_908.s0, "p_970->g_908.s0", print_hash_value);
    transparent_crc(p_970->g_908.s1, "p_970->g_908.s1", print_hash_value);
    transparent_crc(p_970->g_908.s2, "p_970->g_908.s2", print_hash_value);
    transparent_crc(p_970->g_908.s3, "p_970->g_908.s3", print_hash_value);
    transparent_crc(p_970->g_908.s4, "p_970->g_908.s4", print_hash_value);
    transparent_crc(p_970->g_908.s5, "p_970->g_908.s5", print_hash_value);
    transparent_crc(p_970->g_908.s6, "p_970->g_908.s6", print_hash_value);
    transparent_crc(p_970->g_908.s7, "p_970->g_908.s7", print_hash_value);
    transparent_crc(p_970->g_908.s8, "p_970->g_908.s8", print_hash_value);
    transparent_crc(p_970->g_908.s9, "p_970->g_908.s9", print_hash_value);
    transparent_crc(p_970->g_908.sa, "p_970->g_908.sa", print_hash_value);
    transparent_crc(p_970->g_908.sb, "p_970->g_908.sb", print_hash_value);
    transparent_crc(p_970->g_908.sc, "p_970->g_908.sc", print_hash_value);
    transparent_crc(p_970->g_908.sd, "p_970->g_908.sd", print_hash_value);
    transparent_crc(p_970->g_908.se, "p_970->g_908.se", print_hash_value);
    transparent_crc(p_970->g_908.sf, "p_970->g_908.sf", print_hash_value);
    transparent_crc(p_970->g_909.x, "p_970->g_909.x", print_hash_value);
    transparent_crc(p_970->g_909.y, "p_970->g_909.y", print_hash_value);
    transparent_crc(p_970->g_938.s0, "p_970->g_938.s0", print_hash_value);
    transparent_crc(p_970->g_938.s1, "p_970->g_938.s1", print_hash_value);
    transparent_crc(p_970->g_938.s2, "p_970->g_938.s2", print_hash_value);
    transparent_crc(p_970->g_938.s3, "p_970->g_938.s3", print_hash_value);
    transparent_crc(p_970->g_938.s4, "p_970->g_938.s4", print_hash_value);
    transparent_crc(p_970->g_938.s5, "p_970->g_938.s5", print_hash_value);
    transparent_crc(p_970->g_938.s6, "p_970->g_938.s6", print_hash_value);
    transparent_crc(p_970->g_938.s7, "p_970->g_938.s7", print_hash_value);
    transparent_crc(p_970->g_939.x, "p_970->g_939.x", print_hash_value);
    transparent_crc(p_970->g_939.y, "p_970->g_939.y", print_hash_value);
    transparent_crc(p_970->g_939.z, "p_970->g_939.z", print_hash_value);
    transparent_crc(p_970->g_939.w, "p_970->g_939.w", print_hash_value);
    transparent_crc(p_970->g_942.s0, "p_970->g_942.s0", print_hash_value);
    transparent_crc(p_970->g_942.s1, "p_970->g_942.s1", print_hash_value);
    transparent_crc(p_970->g_942.s2, "p_970->g_942.s2", print_hash_value);
    transparent_crc(p_970->g_942.s3, "p_970->g_942.s3", print_hash_value);
    transparent_crc(p_970->g_942.s4, "p_970->g_942.s4", print_hash_value);
    transparent_crc(p_970->g_942.s5, "p_970->g_942.s5", print_hash_value);
    transparent_crc(p_970->g_942.s6, "p_970->g_942.s6", print_hash_value);
    transparent_crc(p_970->g_942.s7, "p_970->g_942.s7", print_hash_value);
    transparent_crc(p_970->g_942.s8, "p_970->g_942.s8", print_hash_value);
    transparent_crc(p_970->g_942.s9, "p_970->g_942.s9", print_hash_value);
    transparent_crc(p_970->g_942.sa, "p_970->g_942.sa", print_hash_value);
    transparent_crc(p_970->g_942.sb, "p_970->g_942.sb", print_hash_value);
    transparent_crc(p_970->g_942.sc, "p_970->g_942.sc", print_hash_value);
    transparent_crc(p_970->g_942.sd, "p_970->g_942.sd", print_hash_value);
    transparent_crc(p_970->g_942.se, "p_970->g_942.se", print_hash_value);
    transparent_crc(p_970->g_942.sf, "p_970->g_942.sf", print_hash_value);
    transparent_crc(p_970->v_collective, "p_970->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 2; i++)
            transparent_crc(p_970->g_special_values[i + 2 * get_linear_group_id()], "p_970->g_special_values[i + 2 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 2; i++)
            transparent_crc(p_970->l_special_values[i], "p_970->l_special_values[i]", print_hash_value);
    transparent_crc(p_970->l_comm_values[get_linear_local_id()], "p_970->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_970->g_comm_values[get_linear_group_id() * 19 + get_linear_local_id()], "p_970->g_comm_values[get_linear_group_id() * 19 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
