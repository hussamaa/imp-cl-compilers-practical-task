// --atomics 83 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 42,27,7 -l 6,1,1
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

__constant uint32_t permutations[10][6] = {
{5,0,3,4,2,1}, // permutation 0
{2,0,3,1,5,4}, // permutation 1
{2,3,1,0,4,5}, // permutation 2
{1,4,5,3,2,0}, // permutation 3
{1,5,2,0,4,3}, // permutation 4
{1,3,4,5,0,2}, // permutation 5
{3,4,2,1,5,0}, // permutation 6
{5,0,4,2,1,3}, // permutation 7
{3,2,0,5,1,4}, // permutation 8
{1,4,3,0,5,2} // permutation 9
};

// Seed: 3875970619

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint32_t  f0;
   uint8_t  f1;
};

struct S1 {
    VECTOR(uint64_t, 16) g_5;
    uint64_t g_7;
    VECTOR(int16_t, 8) g_9;
    volatile VECTOR(uint16_t, 16) g_11;
    uint32_t g_50;
    int32_t g_53;
    uint16_t g_63;
    uint16_t g_68;
    uint16_t *g_67[7];
    int32_t g_70;
    uint32_t g_75[1];
    uint32_t g_80;
    int32_t *g_89;
    uint32_t g_97;
    int32_t g_116;
    VECTOR(uint32_t, 4) g_122;
    union U0 g_130;
    uint8_t g_135;
    uint32_t * volatile g_137;
    uint32_t * volatile *g_136;
    volatile uint64_t g_143[10];
    volatile uint64_t *g_142[8];
    volatile uint64_t * volatile *g_141;
    VECTOR(uint32_t, 8) g_155;
    int16_t g_160;
    int16_t g_163[9];
    uint16_t g_181;
    uint64_t *g_221;
    uint64_t **g_220[9];
    VECTOR(int8_t, 4) g_236;
    VECTOR(int8_t, 16) g_237;
    int32_t g_242;
    int64_t *g_249;
    VECTOR(uint64_t, 16) g_256;
    VECTOR(int64_t, 4) g_297;
    VECTOR(int64_t, 16) g_298;
    int32_t g_299;
    VECTOR(uint8_t, 8) g_308;
    int16_t g_327;
    uint32_t g_328;
    uint32_t *g_339;
    uint32_t **g_338;
    int64_t g_348;
    int64_t g_349;
    int32_t g_352;
    VECTOR(int64_t, 2) g_353;
    uint16_t g_358;
    uint32_t *g_375;
    uint32_t **g_374;
    VECTOR(int32_t, 16) g_493;
    uint64_t g_495;
    VECTOR(int64_t, 2) g_510;
    VECTOR(int32_t, 4) g_569;
    VECTOR(int64_t, 4) g_573;
    VECTOR(uint64_t, 2) g_576;
    uint32_t g_639;
    uint32_t g_680;
    VECTOR(uint8_t, 16) g_709;
    VECTOR(uint8_t, 2) g_711;
    VECTOR(uint8_t, 8) g_712;
    VECTOR(int8_t, 16) g_715;
    VECTOR(int8_t, 2) g_716;
    VECTOR(uint16_t, 8) g_734;
    uint64_t *g_782;
    int32_t **g_808[5][2];
    int32_t *** volatile g_807[9];
    int32_t *** volatile *g_806;
    VECTOR(int16_t, 2) g_835;
    volatile VECTOR(uint64_t, 8) g_897;
    volatile uint64_t g_898;
    volatile uint64_t *g_896;
    volatile uint64_t **g_895;
    VECTOR(int8_t, 8) g_968;
    VECTOR(int8_t, 4) g_969;
    VECTOR(uint64_t, 4) g_970;
    int32_t * volatile g_974;
    VECTOR(int32_t, 16) g_981;
    VECTOR(int64_t, 2) g_1015;
    VECTOR(int64_t, 8) g_1018;
    volatile VECTOR(int64_t, 16) g_1019;
    int64_t g_1049;
    VECTOR(uint16_t, 16) g_1088;
    uint32_t g_1095;
    VECTOR(uint64_t, 8) g_1128;
    volatile VECTOR(uint64_t, 2) g_1129;
    int32_t ** volatile g_1148;
    VECTOR(int16_t, 4) g_1171;
    VECTOR(int16_t, 16) g_1172;
    volatile int16_t g_1210;
    volatile int16_t *g_1209;
    volatile int16_t ** volatile g_1208;
    int16_t *g_1214;
    int16_t **g_1213;
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
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
uint8_t  func_1(struct S1 * p_1221);
int64_t  func_12(uint64_t * p_13, int16_t  p_14, uint64_t * p_15, uint64_t * p_16, uint32_t  p_17, struct S1 * p_1221);
int16_t  func_22(uint64_t  p_23, uint64_t  p_24, uint64_t * p_25, int64_t  p_26, struct S1 * p_1221);
int64_t  func_27(uint64_t * p_28, int8_t  p_29, uint32_t  p_30, uint64_t  p_31, uint64_t * p_32, struct S1 * p_1221);
uint64_t * func_33(uint64_t * p_34, uint32_t  p_35, struct S1 * p_1221);
int32_t * func_54(uint32_t  p_55, union U0  p_56, uint64_t * p_57, uint32_t  p_58, uint32_t  p_59, struct S1 * p_1221);
uint64_t  func_64(uint16_t * p_65, uint32_t  p_66, struct S1 * p_1221);
union U0  func_81(uint64_t ** p_82, int16_t  p_83, uint64_t  p_84, struct S1 * p_1221);
uint16_t  func_100(uint64_t ** p_101, struct S1 * p_1221);
uint64_t ** func_102(uint64_t  p_103, uint32_t * p_104, struct S1 * p_1221);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1221->g_5 p_1221->g_7 p_1221->g_9 p_1221->g_11 p_1221->g_comm_values p_1221->g_53 p_1221->g_67 p_1221->g_75 p_1221->g_50 p_1221->g_80 p_1221->g_89 p_1221->g_70 p_1221->g_68 p_1221->g_116 p_1221->g_130 p_1221->g_135 p_1221->g_136 p_1221->g_141 p_1221->g_160 p_1221->g_163 p_1221->g_181 p_1221->l_comm_values p_1221->g_155 p_1221->g_220 p_1221->g_122 p_1221->g_130.f0 p_1221->g_142 p_1221->g_237 p_1221->g_328 p_1221->g_358 p_1221->g_221 p_1221->g_299 p_1221->g_374 p_1221->g_639 p_1221->g_576 p_1221->g_569 p_1221->g_680 p_1221->g_495 p_1221->g_298 p_1221->g_510 p_1221->g_242 p_1221->g_308 p_1221->g_709 p_1221->g_711 p_1221->g_712 p_1221->g_715 p_1221->g_716 p_1221->g_297 p_1221->g_734 p_1221->g_327 p_1221->g_353 p_1221->g_375 p_1221->g_806 p_1221->g_97 p_1221->g_835 p_1221->g_352 p_1221->g_895 p_1221->g_981 p_1221->g_896 p_1221->g_970 p_1221->g_573 p_1221->g_236 p_1221->g_1095 p_1221->g_1148 p_1221->g_1171 p_1221->g_1172 p_1221->g_1214
 * writes: p_1221->g_7 p_1221->g_50 p_1221->g_53 p_1221->g_63 p_1221->g_75 p_1221->g_80 p_1221->g_89 p_1221->g_70 p_1221->g_97 p_1221->g_68 p_1221->g_116 p_1221->g_135 p_1221->g_136 p_1221->g_130.f0 p_1221->g_181 p_1221->g_160 p_1221->g_249 p_1221->g_237 p_1221->g_299 p_1221->g_328 p_1221->g_358 p_1221->g_348 p_1221->g_352 p_1221->g_349 p_1221->g_639 p_1221->g_236 p_1221->g_163 p_1221->g_327 p_1221->g_353 p_1221->g_782 p_1221->g_122 p_1221->g_297 p_1221->g_716 p_1221->g_242 p_1221->g_680 p_1221->g_573 p_1221->g_9 p_1221->g_1049 p_1221->g_130.f1 p_1221->g_130 p_1221->g_1095 p_1221->g_510
 */
uint8_t  func_1(struct S1 * p_1221)
{ /* block id: 4 */
    VECTOR(uint64_t, 2) l_3 = (VECTOR(uint64_t, 2))(0xC5735E4B7834D8A9L, 0UL);
    VECTOR(uint64_t, 16) l_4 = (VECTOR(uint64_t, 16))(0xCE55459EEDA58528L, (VECTOR(uint64_t, 4))(0xCE55459EEDA58528L, (VECTOR(uint64_t, 2))(0xCE55459EEDA58528L, 18446744073709551611UL), 18446744073709551611UL), 18446744073709551611UL, 0xCE55459EEDA58528L, 18446744073709551611UL, (VECTOR(uint64_t, 2))(0xCE55459EEDA58528L, 18446744073709551611UL), (VECTOR(uint64_t, 2))(0xCE55459EEDA58528L, 18446744073709551611UL), 0xCE55459EEDA58528L, 18446744073709551611UL, 0xCE55459EEDA58528L, 18446744073709551611UL);
    uint64_t *l_6 = &p_1221->g_7;
    VECTOR(int16_t, 4) l_8 = (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, 0x7E3BL), 0x7E3BL);
    VECTOR(int16_t, 4) l_10 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x77F1L), 0x77F1L);
    uint64_t **l_46 = &l_6;
    uint64_t *l_47 = (void*)0;
    uint64_t **l_48 = &l_47;
    uint64_t *l_612[5][9][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
    uint64_t *l_642[6][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t *l_973 = (void*)0;
    int32_t *l_975 = &p_1221->g_116;
    int16_t *l_976[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    uint64_t l_979[3];
    uint32_t l_980[10][8][3] = {{{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L}},{{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L}},{{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L}},{{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L}},{{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L}},{{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L}},{{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L}},{{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L}},{{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L}},{{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L},{0xAEBD41DDL,0xD7801739L,0x60D518B8L}}};
    int8_t l_984 = 0x3FL;
    int32_t l_985 = 0x372F6E8AL;
    int8_t l_986 = 0x1CL;
    int64_t *l_989 = (void*)0;
    uint64_t l_1004 = 1UL;
    int32_t *l_1005 = &p_1221->g_242;
    VECTOR(int64_t, 2) l_1016 = (VECTOR(int64_t, 2))(1L, 0x06572135B0A1E868L);
    VECTOR(int64_t, 2) l_1023 = (VECTOR(int64_t, 2))(0L, 0x3AF984A2292934C8L);
    union U0 l_1028 = {4294967295UL};
    uint16_t l_1054 = 1UL;
    VECTOR(uint16_t, 2) l_1087 = (VECTOR(uint16_t, 2))(65532UL, 0UL);
    VECTOR(int64_t, 16) l_1091 = (VECTOR(int64_t, 16))(0x509909EFBFD1E6B0L, (VECTOR(int64_t, 4))(0x509909EFBFD1E6B0L, (VECTOR(int64_t, 2))(0x509909EFBFD1E6B0L, (-9L)), (-9L)), (-9L), 0x509909EFBFD1E6B0L, (-9L), (VECTOR(int64_t, 2))(0x509909EFBFD1E6B0L, (-9L)), (VECTOR(int64_t, 2))(0x509909EFBFD1E6B0L, (-9L)), 0x509909EFBFD1E6B0L, (-9L), 0x509909EFBFD1E6B0L, (-9L));
    int32_t l_1157 = 0x0D405FAAL;
    int32_t l_1159 = 0x7F5F0AB8L;
    int32_t l_1194[1];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_979[i] = 0x35EE586ECCC0CB05L;
    for (i = 0; i < 1; i++)
        l_1194[i] = 0x3061ED5FL;
    (*l_975) = ((safe_unary_minus_func_uint32_t_u((((*l_6) ^= ((VECTOR(uint64_t, 16))(18446744073709551612UL, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(l_3.yy)).xyxxyxyx)).s44)), ((VECTOR(uint64_t, 4))(l_4.s7f45)), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(p_1221->g_5.s6076fda0)))), 0x6C3825062D7BC352L)).s4) || ((((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_8.xxzzzyxwwxxywwzy)))).even, ((VECTOR(int16_t, 8))(p_1221->g_9.s76446342)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_10.wzxyxzwywxxyxwyx)).lo))))).s6 & ((+(((VECTOR(uint16_t, 4))(p_1221->g_11.s844b)).z < (func_12(&p_1221->g_7, (safe_sub_func_int16_t_s_s(l_4.sc, ((safe_add_func_int16_t_s_s(func_22(p_1221->g_7, (func_27(func_33(((*l_48) = ((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(p_1221->g_comm_values[p_1221->tid], l_8.z)), (safe_sub_func_uint64_t_u_u(((((*l_46) = &p_1221->g_7) != l_47) == (l_47 != &p_1221->g_7)), l_10.x)))), 2)), p_1221->g_comm_values[p_1221->tid])) , (void*)0)), p_1221->g_9.s2, p_1221), l_10.z, l_3.y, (*p_1221->g_221), l_612[3][7][0], p_1221) == (-1L)), l_642[1][4], l_4.s0, p_1221), l_8.x)) && p_1221->g_75[0]))), l_642[1][4], l_612[0][2][0], l_8.z, p_1221) , l_3.x))) || 0x50DD154965F7F04DL)) >= 1UL)))) ^ l_4.sf);
    (*l_975) ^= 0x39A60BD5L;
    l_985 = (((*l_975) = ((*l_975) ^ (*l_975))) | ((l_10.w == p_1221->g_11.sf) < ((safe_add_func_uint32_t_u_u(5UL, ((l_980[6][7][0] = l_979[1]) , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(p_1221->g_981.sa5bc82ec71dacbd8)).s7d)).lo))) || (l_976[0] != (((VECTOR(int32_t, 16))(((safe_mul_func_int8_t_s_s(p_1221->g_981.se, (((*p_1221->g_895) != l_612[3][4][0]) | l_984))) , p_1221->g_160), (-4L), ((VECTOR(int32_t, 2))(3L)), p_1221->g_569.x, p_1221->g_716.x, ((VECTOR(int32_t, 8))(0x27D47642L)), (-3L), 0x4237DAACL)).sd , &p_1221->g_63)))));
    if (((*l_1005) = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((*l_975) = (l_986 ^ ((safe_sub_func_int64_t_s_s(0x4C3BC6C5FEE4E891L, ((*p_1221->g_221) &= ((*l_975) | p_1221->g_358)))) != (p_1221->g_573.y = (*l_975))))), (((((safe_div_func_uint16_t_u_u((0x0323F44CL <= (safe_rshift_func_uint16_t_u_s((*l_975), (p_1221->g_9.s1 = ((((((safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_s(0UL, 5)) & (safe_div_func_int32_t_s_s(((~(((((((safe_add_func_int64_t_s_s(p_1221->g_569.y, (*l_975))) , &l_973) == &l_973) & (*l_975)) & (-1L)) && (*l_975)) == (*l_975))) & (*l_975)), (*l_975)))), p_1221->g_9.s1)), 0xCCL)) > p_1221->g_510.x) , p_1221->g_970.y) , (*l_975)) < l_1004) & (*l_975)))))), (*l_975))) ^ p_1221->g_573.w) , (void*)0) != l_1005) <= 0UL), 0x6E2CA845L, 1L)), (*l_1005), ((VECTOR(int32_t, 2))((-1L))), ((VECTOR(int32_t, 2))((-3L))), (*l_975), 0x0A3CB9C6L, 3L, 0x345AD5EAL, (*l_975), 0x16EB8F10L, 0x6DE33E4CL)).sea, ((VECTOR(int32_t, 2))(0x7F87D4AEL))))), ((VECTOR(int32_t, 4))(0x01F61D16L)), 1L, 0x325AA6BCL)).even)).w))
    { /* block id: 432 */
        int32_t *l_1010 = &l_985;
        VECTOR(int64_t, 16) l_1017 = (VECTOR(int64_t, 16))(0x0D71D3E4AE60D9CEL, (VECTOR(int64_t, 4))(0x0D71D3E4AE60D9CEL, (VECTOR(int64_t, 2))(0x0D71D3E4AE60D9CEL, 0x6054A7B852CA508FL), 0x6054A7B852CA508FL), 0x6054A7B852CA508FL, 0x0D71D3E4AE60D9CEL, 0x6054A7B852CA508FL, (VECTOR(int64_t, 2))(0x0D71D3E4AE60D9CEL, 0x6054A7B852CA508FL), (VECTOR(int64_t, 2))(0x0D71D3E4AE60D9CEL, 0x6054A7B852CA508FL), 0x0D71D3E4AE60D9CEL, 0x6054A7B852CA508FL, 0x0D71D3E4AE60D9CEL, 0x6054A7B852CA508FL);
        VECTOR(int64_t, 2) l_1020 = (VECTOR(int64_t, 2))((-4L), 0L);
        VECTOR(int64_t, 2) l_1021 = (VECTOR(int64_t, 2))(1L, 2L);
        VECTOR(int64_t, 2) l_1022 = (VECTOR(int64_t, 2))(0x5FCE629A2B514420L, 0x3BB07B7E0FA3032AL);
        VECTOR(int32_t, 16) l_1029 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x063AF922L), 0x063AF922L), 0x063AF922L, (-1L), 0x063AF922L, (VECTOR(int32_t, 2))((-1L), 0x063AF922L), (VECTOR(int32_t, 2))((-1L), 0x063AF922L), (-1L), 0x063AF922L, (-1L), 0x063AF922L);
        uint8_t *l_1030 = (void*)0;
        uint8_t *l_1031 = &p_1221->g_135;
        int32_t l_1032 = 1L;
        uint64_t l_1033[2][2][2];
        union U0 l_1034[3] = {{3UL},{3UL},{3UL}};
        int32_t **l_1035[5][3] = {{&l_1005,&l_1010,&l_973},{&l_1005,&l_1010,&l_973},{&l_1005,&l_1010,&l_973},{&l_1005,&l_1010,&l_973},{&l_1005,&l_1010,&l_973}};
        int32_t *l_1036[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        VECTOR(uint64_t, 4) l_1041 = (VECTOR(uint64_t, 4))(0xBE183AFE25104FDEL, (VECTOR(uint64_t, 2))(0xBE183AFE25104FDEL, 18446744073709551613UL), 18446744073709551613UL);
        int32_t l_1042[3];
        int32_t l_1043 = (-7L);
        int64_t *l_1048 = &p_1221->g_1049;
        int32_t l_1050 = 0x51C5972FL;
        int32_t l_1051 = 7L;
        int64_t *l_1052 = (void*)0;
        int64_t *l_1053 = &p_1221->g_349;
        int32_t *l_1055[7][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 2; k++)
                    l_1033[i][j][k] = 0x792160EC30AFBED6L;
            }
        }
        for (i = 0; i < 3; i++)
            l_1042[i] = (-1L);
        (*l_1010) = ((safe_lshift_func_uint8_t_u_u(((*l_1031) = (((safe_sub_func_uint8_t_u_u(0xEBL, ((void*)0 != &p_1221->g_896))) , l_1010) != (l_1036[2] = &l_1032))), 5)) == (*l_1010));
        l_1055[6][2] = &l_985;
    }
    else
    { /* block id: 442 */
        uint32_t l_1064 = 4294967295UL;
        uint16_t l_1113[3];
        uint64_t **l_1124[4];
        int8_t l_1139 = 0x45L;
        int32_t l_1140 = (-1L);
        int32_t l_1151 = 0x1C7B6A71L;
        int32_t l_1152 = 0x1B2E6420L;
        int16_t **l_1211[5][10] = {{&l_976[1],&l_976[2],(void*)0,&l_976[1],&l_976[1],(void*)0,&l_976[2],(void*)0,&l_976[1],&l_976[1]},{&l_976[1],&l_976[2],(void*)0,&l_976[1],&l_976[1],(void*)0,&l_976[2],(void*)0,&l_976[1],&l_976[1]},{&l_976[1],&l_976[2],(void*)0,&l_976[1],&l_976[1],(void*)0,&l_976[2],(void*)0,&l_976[1],&l_976[1]},{&l_976[1],&l_976[2],(void*)0,&l_976[1],&l_976[1],(void*)0,&l_976[2],(void*)0,&l_976[1],&l_976[1]},{&l_976[1],&l_976[2],(void*)0,&l_976[1],&l_976[1],(void*)0,&l_976[2],(void*)0,&l_976[1],&l_976[1]}};
        int i, j;
        for (i = 0; i < 3; i++)
            l_1113[i] = 1UL;
        for (i = 0; i < 4; i++)
            l_1124[i] = &p_1221->g_782;
        for (p_1221->g_70 = 0; (p_1221->g_70 == (-8)); p_1221->g_70 = safe_sub_func_int32_t_s_s(p_1221->g_70, 1))
        { /* block id: 445 */
            uint8_t l_1072 = 0x3EL;
            uint64_t **l_1082 = &p_1221->g_782;
            int32_t l_1096 = (-1L);
            int8_t l_1111 = 1L;
            uint64_t l_1114 = 0x26DBB0D95D2FE7BAL;
            VECTOR(int64_t, 16) l_1121 = (VECTOR(int64_t, 16))((-3L), (VECTOR(int64_t, 4))((-3L), (VECTOR(int64_t, 2))((-3L), 0x1C8E7F14F80359ACL), 0x1C8E7F14F80359ACL), 0x1C8E7F14F80359ACL, (-3L), 0x1C8E7F14F80359ACL, (VECTOR(int64_t, 2))((-3L), 0x1C8E7F14F80359ACL), (VECTOR(int64_t, 2))((-3L), 0x1C8E7F14F80359ACL), (-3L), 0x1C8E7F14F80359ACL, (-3L), 0x1C8E7F14F80359ACL);
            union U0 *l_1143 = &p_1221->g_130;
            uint8_t l_1160[6][6] = {{0xFAL,5UL,252UL,5UL,0xFAL,0xFAL},{0xFAL,5UL,252UL,5UL,0xFAL,0xFAL},{0xFAL,5UL,252UL,5UL,0xFAL,0xFAL},{0xFAL,5UL,252UL,5UL,0xFAL,0xFAL},{0xFAL,5UL,252UL,5UL,0xFAL,0xFAL},{0xFAL,5UL,252UL,5UL,0xFAL,0xFAL}};
            int16_t *l_1176 = &p_1221->g_160;
            uint32_t l_1195 = 4294967292UL;
            int i, j;
            (*l_1005) ^= (safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((p_1221->g_135 , p_1221->g_353.x), ((*p_1221->g_141) == (*l_46)))), (safe_div_func_int32_t_s_s(l_1064, l_1064))));
            for (p_1221->g_328 = 0; (p_1221->g_328 == 1); p_1221->g_328 = safe_add_func_int32_t_s_s(p_1221->g_328, 6))
            { /* block id: 449 */
                int64_t l_1067[3][4];
                int32_t *l_1147 = &p_1221->g_116;
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_1067[i][j] = (-10L);
                }
                if ((l_1067[1][2] , (safe_add_func_uint8_t_u_u(0x21L, (~(safe_sub_func_uint16_t_u_u(l_1067[1][2], l_1072)))))))
                { /* block id: 450 */
                    uint64_t l_1079 = 0xBB23D8C2E8AC9D31L;
                    VECTOR(int32_t, 16) l_1097 = (VECTOR(int32_t, 16))(0x57696202L, (VECTOR(int32_t, 4))(0x57696202L, (VECTOR(int32_t, 2))(0x57696202L, 0x12D1B9B6L), 0x12D1B9B6L), 0x12D1B9B6L, 0x57696202L, 0x12D1B9B6L, (VECTOR(int32_t, 2))(0x57696202L, 0x12D1B9B6L), (VECTOR(int32_t, 2))(0x57696202L, 0x12D1B9B6L), 0x57696202L, 0x12D1B9B6L, 0x57696202L, 0x12D1B9B6L);
                    int32_t l_1112 = 0x39A86520L;
                    union U0 *l_1142 = (void*)0;
                    union U0 **l_1141 = &l_1142;
                    int i;
                    for (l_1028.f0 = 0; (l_1028.f0 != 55); l_1028.f0 = safe_add_func_uint16_t_u_u(l_1028.f0, 6))
                    { /* block id: 453 */
                        uint8_t l_1094 = 248UL;
                        int32_t **l_1100 = &p_1221->g_89;
                        (*l_975) ^= (l_1096 = (((safe_lshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u(((FAKE_DIVERGE(p_1221->local_2_offset, get_local_id(2), 10) < ((l_1079 , (((safe_div_func_uint32_t_u_u(((void*)0 != l_1082), 0x7F4BBDDDL)) || ((((safe_sub_func_int16_t_s_s(((((safe_sub_func_uint16_t_u_u((l_1064 != ((VECTOR(uint16_t, 16))(3UL, 0x9485L, ((VECTOR(uint16_t, 8))(l_1087.yyyyyyxy)), ((VECTOR(uint16_t, 2))(p_1221->g_1088.sd6)).odd, 0UL, 65535UL, 65535UL, 5UL, 0x34ABL)).s8), (!(((safe_div_func_int64_t_s_s(((VECTOR(int64_t, 4))(l_1091.s158d)).y, p_1221->g_50)) , (0L & l_1079)) , (safe_lshift_func_uint16_t_u_u(65528UL, 3)))))) <= 0L) || FAKE_DIVERGE(p_1221->local_0_offset, get_local_id(0), 10)) && l_1094), 65527UL)) && l_1094) <= 0x2640D4D79AA60044L) , p_1221->g_716.y)) , (void*)0)) != (void*)0)) == p_1221->g_573.x), p_1221->g_297.w)), p_1221->g_236.y)) & p_1221->g_711.y) >= p_1221->g_1095));
                        (*l_1005) &= (~((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(0x7AFDEEEDL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_1097.sc3b3f63b)).hi)), ((safe_rshift_func_uint16_t_u_u((l_1064 == (l_1100 == ((**p_1221->g_806) = (**p_1221->g_806)))), 0)) & (p_1221->g_835.x |= (((safe_lshift_func_uint16_t_u_s(((p_1221->g_163[6] &= p_1221->g_236.y) && (l_1064 == (p_1221->g_5.s3 , ((0x39A7634DL != (safe_mul_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(((((*l_975) = ((FAKE_DIVERGE(p_1221->group_0_offset, get_group_id(0), 10) == (((safe_sub_func_uint32_t_u_u((~4294967290UL), ((safe_sub_func_int8_t_s_s(p_1221->g_969.x, (-10L))) || l_1067[2][3]))) , 0x4B75L) ^ l_1111)) , l_1072)) < l_1111) , l_1112), 8)) && p_1221->g_297.z), l_1113[0]))) != l_1114)))), 3)) && (*p_1221->g_221)) , 0x6E2DL))), 0x3EBB445DL, 0x32152726L)), (-1L), ((VECTOR(int32_t, 4))((-1L))), 0L, 1L, 0x14A9C7B5L)).s6);
                        return p_1221->g_7;
                    }
                    for (p_1221->g_1049 = 0; (p_1221->g_1049 > 22); p_1221->g_1049 = safe_add_func_int32_t_s_s(p_1221->g_1049, 2))
                    { /* block id: 465 */
                        uint8_t *l_1125 = (void*)0;
                        uint8_t *l_1126 = &p_1221->g_130.f1;
                        uint16_t l_1127 = 1UL;
                        int32_t l_1138 = (-7L);
                        (*l_1005) &= (safe_sub_func_uint64_t_u_u((((*l_1126) = (((safe_add_func_int64_t_s_s(((VECTOR(int64_t, 2))(l_1121.s65)).even, (l_1097.s7 > l_1113[2]))) , &p_1221->g_782) == (((safe_rshift_func_int16_t_s_s(p_1221->g_68, 8)) , l_1067[0][3]) , l_1124[2]))) & (l_1127 != ((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(uint64_t, 8))(max(((VECTOR(uint64_t, 4))(p_1221->g_1128.s7333)).wwwyxxxy, ((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 4))(18446744073709551615UL, FAKE_DIVERGE(p_1221->global_2_offset, get_global_id(2), 10), 18446744073709551607UL, 0x431E20236C597FE9L)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(add_sat(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(mad_sat(((VECTOR(uint64_t, 2))(p_1221->g_1129.yy)).xyyx, ((VECTOR(uint64_t, 16))((safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((p_1221->g_308.s0 = (((l_1138 = (l_1067[1][2] , (safe_mod_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_s(l_1064, 13)) ^ 4294967288UL), l_1121.sf)))) ^ GROUP_DIVERGE(1, 1)) != l_1139)), 0xBCL)), l_1067[1][3])), l_1140, 18446744073709551615UL, (*p_1221->g_221), ((VECTOR(uint64_t, 4))(0UL)), ((VECTOR(uint64_t, 4))(6UL)), 0x6B43E823005AA668L, ((VECTOR(uint64_t, 2))(0x4B8C757940F63EA0L)), 18446744073709551611UL)).s6f2f, ((VECTOR(uint64_t, 4))(0x0DA45AF9572ED482L))))))), ((VECTOR(uint64_t, 4))(1UL))))).zyyzzxww)).even))))).zzxzwwzw))).s66, ((VECTOR(uint64_t, 2))(0x24A833340E0FDA89L))))).yyxy, ((VECTOR(uint64_t, 4))(0x46846D570574C63AL))))).z)), l_1097.s5));
                    }
                    l_1143 = ((*l_1141) = &p_1221->g_130);
                }
                else
                { /* block id: 473 */
                    int8_t *l_1146 = &l_1111;
                    uint8_t l_1153 = 7UL;
                    int32_t l_1156 = 0x02BB556AL;
                    (*p_1221->g_1148) = ((((*l_1143) = (*l_1143)) , (safe_rshift_func_int8_t_s_s(((*l_1146) |= p_1221->g_53), 6))) , l_1147);
                    if ((((void*)0 != &p_1221->g_339) < (p_1221->g_308.s4 >= p_1221->g_308.s0)))
                    { /* block id: 477 */
                        int32_t *l_1149 = &p_1221->g_242;
                        int32_t *l_1150[4][1][2] = {{{&p_1221->g_70,(void*)0}},{{&p_1221->g_70,(void*)0}},{{&p_1221->g_70,(void*)0}},{{&p_1221->g_70,(void*)0}}};
                        int32_t l_1158 = 0x758D5673L;
                        int i, j, k;
                        ++l_1153;
                        --l_1160[3][4];
                        if ((*l_1149))
                            continue;
                    }
                    else
                    { /* block id: 481 */
                        VECTOR(int32_t, 2) l_1163 = (VECTOR(int32_t, 2))(0x3BAC980DL, 0x74047299L);
                        int i;
                        if (l_1152)
                            break;
                        (*l_975) = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_1163.xyyyyyyx)).s53)).yyyyxyyx)).s1;
                        return l_1064;
                    }
                }
            }
            for (p_1221->g_1095 = 0; (p_1221->g_1095 > 49); ++p_1221->g_1095)
            { /* block id: 490 */
                uint8_t *l_1168 = &p_1221->g_135;
                int16_t *l_1173 = &p_1221->g_163[0];
                int16_t **l_1174 = (void*)0;
                int16_t **l_1175 = &l_976[1];
                if (l_1160[2][3])
                    break;
                (*l_1005) = (safe_sub_func_int16_t_s_s(((l_1168 == (void*)0) , (-1L)), (((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(p_1221->g_1171.xw)).xyxxxyxyyyxyxyyy)), ((VECTOR(int16_t, 4))(p_1221->g_1172.s3028)).xxzxyxzzyyxxzxyy))).scbbc)).w | (((*l_1175) = l_1173) != l_1176))));
            }
            for (l_1157 = (-12); (l_1157 <= (-26)); l_1157 = safe_sub_func_uint32_t_u_u(l_1157, 6))
            { /* block id: 497 */
                int32_t *l_1179 = &p_1221->g_53;
                int32_t *l_1180 = (void*)0;
                int32_t l_1181[6] = {1L,1L,1L,1L,1L,1L};
                int32_t *l_1182 = (void*)0;
                int32_t *l_1183 = &l_1181[4];
                int32_t *l_1184 = &l_1140;
                int32_t *l_1185 = &p_1221->g_53;
                int32_t *l_1186 = &p_1221->g_242;
                int32_t *l_1187 = &l_1140;
                int32_t *l_1188 = &p_1221->g_242;
                int32_t *l_1189 = &p_1221->g_116;
                int32_t *l_1190 = (void*)0;
                int32_t *l_1191 = &l_1151;
                int32_t *l_1192 = &l_1181[0];
                int32_t *l_1193[10][7] = {{&l_1181[4],(void*)0,&l_1181[5],&l_1159,&l_1140,(void*)0,(void*)0},{&l_1181[4],(void*)0,&l_1181[5],&l_1159,&l_1140,(void*)0,(void*)0},{&l_1181[4],(void*)0,&l_1181[5],&l_1159,&l_1140,(void*)0,(void*)0},{&l_1181[4],(void*)0,&l_1181[5],&l_1159,&l_1140,(void*)0,(void*)0},{&l_1181[4],(void*)0,&l_1181[5],&l_1159,&l_1140,(void*)0,(void*)0},{&l_1181[4],(void*)0,&l_1181[5],&l_1159,&l_1140,(void*)0,(void*)0},{&l_1181[4],(void*)0,&l_1181[5],&l_1159,&l_1140,(void*)0,(void*)0},{&l_1181[4],(void*)0,&l_1181[5],&l_1159,&l_1140,(void*)0,(void*)0},{&l_1181[4],(void*)0,&l_1181[5],&l_1159,&l_1140,(void*)0,(void*)0},{&l_1181[4],(void*)0,&l_1181[5],&l_1159,&l_1140,(void*)0,(void*)0}};
                int i, j;
                ++l_1195;
            }
        }
        for (l_1028.f1 = 27; (l_1028.f1 <= 3); l_1028.f1 = safe_sub_func_int64_t_s_s(l_1028.f1, 9))
        { /* block id: 503 */
            int16_t ***l_1212[2][4] = {{&l_1211[3][6],&l_1211[3][6],&l_1211[3][6],&l_1211[3][6]},{&l_1211[3][6],&l_1211[3][6],&l_1211[3][6],&l_1211[3][6]}};
            uint16_t *l_1215 = &l_1113[0];
            int64_t *l_1218 = (void*)0;
            int64_t *l_1219 = (void*)0;
            int64_t *l_1220[1][8] = {{&p_1221->g_349,&p_1221->g_349,&p_1221->g_349,&p_1221->g_349,&p_1221->g_349,&p_1221->g_349,&p_1221->g_349,&p_1221->g_349}};
            int i, j;
            (*l_1005) = l_1140;
            for (p_1221->g_160 = (-5); (p_1221->g_160 == 24); p_1221->g_160++)
            { /* block id: 507 */
                int32_t *l_1202 = &p_1221->g_116;
                int32_t **l_1203 = &p_1221->g_89;
                if (l_1113[0])
                    break;
                (*l_1203) = l_1202;
                return p_1221->g_576.y;
            }
            (*l_975) = ((*l_1005) = ((p_1221->g_510.y = ((&p_1221->g_807[2] == (void*)0) | ((18446744073709551615UL > (safe_mul_func_uint16_t_u_u(GROUP_DIVERGE(1, 1), (!((*l_975) , l_1152))))) == (((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))((-1L), 0x79D7L)), 9L, ((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x2EEDL, 0x53FAL)), 0x1D85L, 0x3DB0L)).yxxzyxzzywxwzwzy)).s60, (int16_t)(safe_lshift_func_int16_t_s_s(0x0963L, (((*l_1215) ^= (p_1221->g_1208 != (p_1221->g_1213 = l_1211[3][6]))) | (((((safe_lshift_func_int16_t_s_u((*p_1221->g_1214), l_1064)) > p_1221->g_155.s4) ^ (*l_1005)) != (*p_1221->g_1214)) ^ (*p_1221->g_221))))), (int16_t)(**p_1221->g_1208)))), (-1L), 0x4CEAL, 0x45B8L)), (-1L), 0x2E61L, 5L, ((VECTOR(int16_t, 4))(0x3D76L)), 2L)).s8 > (*p_1221->g_1214))))) || (*l_1005)));
        }
    }
    return p_1221->g_9.s3;
}


/* ------------------------------------------ */
/* 
 * reads : p_1221->g_299
 * writes: p_1221->g_299 p_1221->g_89
 */
int64_t  func_12(uint64_t * p_13, int16_t  p_14, uint64_t * p_15, uint64_t * p_16, uint32_t  p_17, struct S1 * p_1221)
{ /* block id: 413 */
    int32_t *l_948 = (void*)0;
    VECTOR(uint64_t, 2) l_971 = (VECTOR(uint64_t, 2))(18446744073709551609UL, 0x7F249184A4AA0996L);
    int i;
    for (p_1221->g_299 = 0; (p_1221->g_299 < 3); ++p_1221->g_299)
    { /* block id: 416 */
        int32_t **l_949 = &p_1221->g_89;
        VECTOR(int64_t, 4) l_956 = (VECTOR(int64_t, 4))(6L, (VECTOR(int64_t, 2))(6L, 0x3619D246298FD446L), 0x3619D246298FD446L);
        uint32_t *l_961[9] = {&p_1221->g_97,&p_1221->g_97,&p_1221->g_97,&p_1221->g_97,&p_1221->g_97,&p_1221->g_97,&p_1221->g_97,&p_1221->g_97,&p_1221->g_97};
        int16_t l_972 = 8L;
        int i;
        (*l_949) = l_948;
        (*l_949) = l_948;
    }
    return l_971.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_1221->g_181 p_1221->g_89 p_1221->g_116 p_1221->g_9 p_1221->g_5 p_1221->g_576 p_1221->g_569 p_1221->g_358 p_1221->g_680 p_1221->g_495 p_1221->g_298 p_1221->g_510 p_1221->g_135 p_1221->g_242 p_1221->g_155 p_1221->g_308 p_1221->g_68 p_1221->g_709 p_1221->g_711 p_1221->g_712 p_1221->g_715 p_1221->g_716 p_1221->g_70 p_1221->g_221 p_1221->g_7 p_1221->g_297 p_1221->g_734 p_1221->g_299 p_1221->g_327 p_1221->g_353 p_1221->g_375 p_1221->g_328 p_1221->g_130 p_1221->g_237 p_1221->g_806 p_1221->g_97 p_1221->g_835 p_1221->g_53 p_1221->g_352 p_1221->g_895 p_1221->g_639
 * writes: p_1221->g_181 p_1221->g_116 p_1221->g_89 p_1221->g_135 p_1221->g_68 p_1221->g_70 p_1221->g_236 p_1221->g_163 p_1221->g_327 p_1221->g_348 p_1221->g_353 p_1221->g_160 p_1221->g_782 p_1221->g_122 p_1221->g_297 p_1221->g_716 p_1221->g_75 p_1221->g_97 p_1221->g_53 p_1221->g_352 p_1221->g_242 p_1221->g_680 p_1221->g_639
 */
int16_t  func_22(uint64_t  p_23, uint64_t  p_24, uint64_t * p_25, int64_t  p_26, struct S1 * p_1221)
{ /* block id: 279 */
    union U0 l_645 = {0x62E26A32L};
    uint32_t **l_648 = &p_1221->g_375;
    VECTOR(int32_t, 2) l_649 = (VECTOR(int32_t, 2))(0x123A2A2DL, 0x2E1BAECCL);
    VECTOR(int32_t, 16) l_650 = (VECTOR(int32_t, 16))(0x4229F0DBL, (VECTOR(int32_t, 4))(0x4229F0DBL, (VECTOR(int32_t, 2))(0x4229F0DBL, 0x578CF08EL), 0x578CF08EL), 0x578CF08EL, 0x4229F0DBL, 0x578CF08EL, (VECTOR(int32_t, 2))(0x4229F0DBL, 0x578CF08EL), (VECTOR(int32_t, 2))(0x4229F0DBL, 0x578CF08EL), 0x4229F0DBL, 0x578CF08EL, 0x4229F0DBL, 0x578CF08EL);
    VECTOR(int32_t, 2) l_675 = (VECTOR(int32_t, 2))(0x5D272C78L, 0x2EF8FD13L);
    VECTOR(uint16_t, 4) l_695 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65535UL), 65535UL);
    VECTOR(int32_t, 2) l_717 = (VECTOR(int32_t, 2))(0x78F2A151L, 0x66BEC3F6L);
    uint8_t l_723 = 248UL;
    int32_t l_756[2][6];
    uint64_t *l_783[2][10][7] = {{{(void*)0,(void*)0,(void*)0,&p_1221->g_7,(void*)0,&p_1221->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1221->g_7,(void*)0,&p_1221->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1221->g_7,(void*)0,&p_1221->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1221->g_7,(void*)0,&p_1221->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1221->g_7,(void*)0,&p_1221->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1221->g_7,(void*)0,&p_1221->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1221->g_7,(void*)0,&p_1221->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1221->g_7,(void*)0,&p_1221->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1221->g_7,(void*)0,&p_1221->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1221->g_7,(void*)0,&p_1221->g_7,(void*)0}},{{(void*)0,(void*)0,(void*)0,&p_1221->g_7,(void*)0,&p_1221->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1221->g_7,(void*)0,&p_1221->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1221->g_7,(void*)0,&p_1221->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1221->g_7,(void*)0,&p_1221->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1221->g_7,(void*)0,&p_1221->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1221->g_7,(void*)0,&p_1221->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1221->g_7,(void*)0,&p_1221->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1221->g_7,(void*)0,&p_1221->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1221->g_7,(void*)0,&p_1221->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1221->g_7,(void*)0,&p_1221->g_7,(void*)0}}};
    int32_t l_818 = 0x17A15BD2L;
    int32_t l_872[10][6] = {{0x1223F555L,0x5A0C3390L,0x5A0C3390L,0x1223F555L,0x6E028698L,0x7390049AL},{0x1223F555L,0x5A0C3390L,0x5A0C3390L,0x1223F555L,0x6E028698L,0x7390049AL},{0x1223F555L,0x5A0C3390L,0x5A0C3390L,0x1223F555L,0x6E028698L,0x7390049AL},{0x1223F555L,0x5A0C3390L,0x5A0C3390L,0x1223F555L,0x6E028698L,0x7390049AL},{0x1223F555L,0x5A0C3390L,0x5A0C3390L,0x1223F555L,0x6E028698L,0x7390049AL},{0x1223F555L,0x5A0C3390L,0x5A0C3390L,0x1223F555L,0x6E028698L,0x7390049AL},{0x1223F555L,0x5A0C3390L,0x5A0C3390L,0x1223F555L,0x6E028698L,0x7390049AL},{0x1223F555L,0x5A0C3390L,0x5A0C3390L,0x1223F555L,0x6E028698L,0x7390049AL},{0x1223F555L,0x5A0C3390L,0x5A0C3390L,0x1223F555L,0x6E028698L,0x7390049AL},{0x1223F555L,0x5A0C3390L,0x5A0C3390L,0x1223F555L,0x6E028698L,0x7390049AL}};
    int32_t *l_944 = &p_1221->g_116;
    int32_t **l_945 = &p_1221->g_89;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
            l_756[i][j] = 0x243380BFL;
    }
    for (p_1221->g_181 = 0; (p_1221->g_181 <= 44); ++p_1221->g_181)
    { /* block id: 282 */
        atomic_or(&p_1221->l_atomic_reduction[0], (*p_1221->g_89));
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_1221->v_collective += p_1221->l_atomic_reduction[0];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    }
    if ((65533UL > ((((l_645 , (safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(0x9D73B669L, ((VECTOR(uint32_t, 4))(0x7522CFFCL, 0xB24C309EL, 0x565661D1L, 1UL)), (l_645.f0 >= p_1221->g_9.s3), 0xC7BF1154L, 0x630D33BEL)).s5, (l_648 == (void*)0)))) < (((*p_1221->g_89) = (p_1221->g_5.s9 , 0x3C58C653L)) != ((VECTOR(int32_t, 16))((-1L), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_649.xx)).yyyx)).wyyzxzwzwwwyywww, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(l_650.s17c5)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))((-1L), 0x440FBBCAL, (safe_mul_func_int16_t_s_s(((safe_mod_func_uint64_t_u_u((((void*)0 == &p_1221->g_327) & p_1221->g_576.x), l_645.f0)) , l_650.s3), 1UL)), ((VECTOR(int32_t, 4))(3L)), (-1L))).s71)).xyxyxxxy)).even, ((VECTOR(int32_t, 4))(0x2D05D968L))))), ((VECTOR(int32_t, 4))(0x286445DFL)))).s6744360462637042))).sd25b)).zywzzxyz)).odd, ((VECTOR(int32_t, 4))((-6L))), ((VECTOR(int32_t, 4))((-5L)))))), (int32_t)l_645.f0, (int32_t)l_645.f0))).odd, ((VECTOR(int32_t, 2))(0x62408437L)), ((VECTOR(int32_t, 2))((-1L)))))).xyyxyyyx, ((VECTOR(int32_t, 8))((-1L))), ((VECTOR(int32_t, 8))(0x4CCE7BEAL))))).s4712025715575245)).s03, ((VECTOR(int32_t, 2))(0x1BE5DA6CL)), ((VECTOR(int32_t, 2))(0x6E519473L))))).yyyxyyyy, ((VECTOR(int32_t, 8))(0x020E227DL)), ((VECTOR(int32_t, 8))(0x1023578BL))))))), (-9L), ((VECTOR(int32_t, 4))(0x4D3AE9FAL)), 0x19496DDEL, 0L)).se)) , l_650.sa) <= p_23)))
    { /* block id: 286 */
        int32_t *l_655 = (void*)0;
        int32_t **l_656[1];
        int i;
        for (i = 0; i < 1; i++)
            l_656[i] = (void*)0;
        p_1221->g_89 = l_655;
    }
    else
    { /* block id: 288 */
        int32_t l_659 = (-1L);
        VECTOR(int16_t, 2) l_660 = (VECTOR(int16_t, 2))(0x4488L, 0x7D4EL);
        VECTOR(uint8_t, 16) l_667 = (VECTOR(uint8_t, 16))(0x7EL, (VECTOR(uint8_t, 4))(0x7EL, (VECTOR(uint8_t, 2))(0x7EL, 0xA5L), 0xA5L), 0xA5L, 0x7EL, 0xA5L, (VECTOR(uint8_t, 2))(0x7EL, 0xA5L), (VECTOR(uint8_t, 2))(0x7EL, 0xA5L), 0x7EL, 0xA5L, 0x7EL, 0xA5L);
        VECTOR(int8_t, 16) l_668 = (VECTOR(int8_t, 16))(0x17L, (VECTOR(int8_t, 4))(0x17L, (VECTOR(int8_t, 2))(0x17L, 0L), 0L), 0L, 0x17L, 0L, (VECTOR(int8_t, 2))(0x17L, 0L), (VECTOR(int8_t, 2))(0x17L, 0L), 0x17L, 0L, 0x17L, 0L);
        VECTOR(int32_t, 16) l_676 = (VECTOR(int32_t, 16))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x48A58158L), 0x48A58158L), 0x48A58158L, 6L, 0x48A58158L, (VECTOR(int32_t, 2))(6L, 0x48A58158L), (VECTOR(int32_t, 2))(6L, 0x48A58158L), 6L, 0x48A58158L, 6L, 0x48A58158L);
        uint8_t *l_681 = &p_1221->g_135;
        VECTOR(uint8_t, 2) l_710 = (VECTOR(uint8_t, 2))(0x4AL, 255UL);
        VECTOR(int8_t, 4) l_714 = (VECTOR(int8_t, 4))(0x2DL, (VECTOR(int8_t, 2))(0x2DL, 0x1DL), 0x1DL);
        VECTOR(int64_t, 4) l_745 = (VECTOR(int64_t, 4))(0x4658331174803D86L, (VECTOR(int64_t, 2))(0x4658331174803D86L, 1L), 1L);
        int32_t l_817[5];
        int8_t l_842 = 0x76L;
        int32_t *l_847 = &p_1221->g_352;
        int32_t *l_848 = &p_1221->g_70;
        int32_t *l_849 = &p_1221->g_242;
        int32_t *l_850 = (void*)0;
        int32_t *l_851 = &p_1221->g_70;
        int32_t *l_852 = (void*)0;
        int32_t *l_853 = &l_817[4];
        int32_t *l_854 = (void*)0;
        int32_t *l_855 = &l_817[4];
        int32_t *l_856 = &p_1221->g_352;
        int32_t *l_857 = &l_817[0];
        int32_t *l_858 = &l_817[4];
        int32_t *l_859 = (void*)0;
        int32_t *l_860 = &p_1221->g_70;
        int32_t *l_861 = &l_817[4];
        int32_t *l_862 = (void*)0;
        int32_t *l_863 = (void*)0;
        int32_t *l_864 = &p_1221->g_242;
        int32_t *l_865 = &p_1221->g_242;
        int32_t *l_866 = &l_817[4];
        int32_t *l_867 = (void*)0;
        int32_t *l_868 = (void*)0;
        int32_t *l_869 = (void*)0;
        int32_t *l_870[1];
        VECTOR(int64_t, 4) l_871 = (VECTOR(int64_t, 4))((-8L), (VECTOR(int64_t, 2))((-8L), 0L), 0L);
        uint32_t l_873 = 1UL;
        int i;
        for (i = 0; i < 5; i++)
            l_817[i] = 0x63009825L;
        for (i = 0; i < 1; i++)
            l_870[i] = &p_1221->g_53;
        if ((safe_mul_func_uint8_t_u_u((((l_659 != ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_660.yyxy)).yzxwzyyx)).s0) , (p_1221->g_569.x > (safe_lshift_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u(((((!(safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_667.s0201)))), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(int8_t, 4))(l_668.sdedf)).xyxwwwyx, ((VECTOR(int8_t, 8))((4L != l_667.sa), ((safe_lshift_func_uint16_t_u_u(((l_650.s7 < l_659) < ((safe_rshift_func_uint8_t_u_s((((*l_681) &= (safe_mul_func_int16_t_s_s((((((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(l_675.yyyxyxxyyyyxxxxy)), ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 2))(l_676.s66)).yxyyyxxxxxxxyxxx))), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))((l_649.y >= ((safe_unary_minus_func_int32_t_s(l_676.s3)) | (((safe_rshift_func_uint8_t_u_s(((l_675.x <= (*p_1221->g_89)) , p_1221->g_358), 7)) < p_1221->g_680) | p_1221->g_495))), 4L, 5L, 0x5C069E0CL)).zwzwwywzxzxxwzzz))))), ((VECTOR(int32_t, 16))(0x6DCA9965L))))).sc | p_1221->g_298.s3) >= l_668.s7) | p_1221->g_510.x), p_23))) & FAKE_DIVERGE(p_1221->local_1_offset, get_local_id(1), 10)), 2)) <= p_26)), 0)) && l_659), 0x3FL, ((VECTOR(int8_t, 2))((-1L))), ((VECTOR(int8_t, 2))(1L)), 1L))))).hi, ((VECTOR(uint8_t, 4))(255UL))))).xywxyxxx, ((VECTOR(uint8_t, 8))(255UL)), ((VECTOR(uint8_t, 8))(0UL))))).even, ((VECTOR(uint8_t, 4))(255UL))))), p_1221->g_242, 9UL, l_659, 0xFEL, ((VECTOR(uint8_t, 4))(255UL)), 0x96L, ((VECTOR(uint8_t, 2))(255UL)), 0x73L)).s28d4))).y, l_650.sd))) , 0xCAEFA576EF980C0BL) < l_645.f0) != 0L), p_23)) < l_675.y) , l_650.sb), 2)))) , p_1221->g_155.s2), 0x04L)))
        { /* block id: 290 */
            uint16_t *l_690 = &p_1221->g_68;
            uint8_t l_700 = 0xBFL;
            VECTOR(int8_t, 4) l_713 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x03L), 0x03L);
            int32_t *l_718 = &p_1221->g_70;
            int8_t *l_724 = (void*)0;
            int8_t *l_725 = (void*)0;
            int8_t *l_726 = (void*)0;
            int8_t *l_727[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            VECTOR(int32_t, 8) l_744 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L);
            int64_t *l_778 = (void*)0;
            int32_t ***l_810 = &p_1221->g_808[0][0];
            int32_t ****l_809 = &l_810;
            int i;
            if ((safe_mul_func_int8_t_s_s((l_650.s0 = (safe_mul_func_int8_t_s_s((((-1L) != l_660.x) < ((safe_rshift_func_int16_t_s_u(((safe_sub_func_int16_t_s_s(p_1221->g_308.s2, p_24)) == l_650.s9), (--(*l_690)))) ^ (((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_695.wwzywxyw)), 0x004DL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(0UL, ((safe_div_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_s((l_700 | ((safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((((safe_mul_func_uint8_t_u_u((l_717.y = ((*l_681) = (safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 8))(p_1221->g_709.sc802e3c0)).s05, ((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),VECTOR(uint8_t, 4),((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 16))(l_710.yxxyxyyxxxxyyxyx)).s41eb, ((VECTOR(uint8_t, 16))(p_1221->g_711.xyyxxyyxyyyxyyyy)).s7977))), ((VECTOR(uint8_t, 16))(p_1221->g_712.s0155713346464543)).s6b40, ((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(int8_t, 2))(l_713.xy)), ((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 4))(l_714.yzxx)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_713.z, ((VECTOR(int8_t, 2))(p_1221->g_715.s7a)), (p_1221->g_236.y = ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),int8_t,((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(p_1221->g_716.xy)))).xyyyxxyx, (int8_t)(((((*l_718) |= ((*p_1221->g_89) &= ((VECTOR(int32_t, 8))(l_717.yyyyxyxy)).s6)) , (safe_rshift_func_uint8_t_u_u(p_23, 7))) <= (((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 16))(0xD5L, ((safe_lshift_func_int16_t_s_s(0x2185L, l_659)) >= l_723), ((VECTOR(uint8_t, 8))(253UL)), 0x8AL, GROUP_DIVERGE(1, 1), 0x25L, l_714.z, 0x4CL, 0UL)).s2e04, ((VECTOR(uint8_t, 4))(0xC3L))))).z & 0x4DL)) <= l_649.x), (int8_t)p_1221->g_181))).s52)), ((VECTOR(int8_t, 4))((-4L))), 0x21L, 0x50L)).s5), ((VECTOR(int8_t, 4))((-8L))), ((VECTOR(int8_t, 2))(1L)), 0x11L, 0x21L, 0x3BL, p_23, 5L, 7L)).s82)).yyxx))).odd))).yyxy, ((VECTOR(uint8_t, 4))(246UL)), ((VECTOR(uint8_t, 4))(0x08L)))))))).hi))), ((VECTOR(uint8_t, 2))(1UL)), ((VECTOR(uint8_t, 2))(0x5BL))))).xyyxxxyx, ((VECTOR(uint8_t, 8))(0xB7L))))).lo, ((VECTOR(uint8_t, 4))(2UL))))).x, 4)))), GROUP_DIVERGE(0, 1))) <= 0x32EC12BF9DD9920FL) > p_26) >= p_24), p_23)), l_676.s7)) && 18446744073709551615UL)), 4)) , l_650.sc) , 0x60L), p_26)) | 0UL), ((VECTOR(uint16_t, 8))(0x8C27L)), 0x1D73L, ((VECTOR(uint16_t, 2))(0x25AAL)), ((VECTOR(uint16_t, 2))(0UL)), 0x449DL)).s25a5)), ((VECTOR(uint16_t, 2))(9UL)), 6UL)).sb, l_713.z)) == (*p_1221->g_221)) || p_1221->g_297.z))), p_26))), l_695.z)))
            { /* block id: 298 */
                VECTOR(int16_t, 16) l_741 = (VECTOR(int16_t, 16))(0x2D32L, (VECTOR(int16_t, 4))(0x2D32L, (VECTOR(int16_t, 2))(0x2D32L, 5L), 5L), 5L, 0x2D32L, 5L, (VECTOR(int16_t, 2))(0x2D32L, 5L), (VECTOR(int16_t, 2))(0x2D32L, 5L), 0x2D32L, 5L, 0x2D32L, 5L);
                int16_t *l_751 = &p_1221->g_163[2];
                int16_t *l_752 = &p_1221->g_327;
                int64_t *l_753 = &p_1221->g_348;
                int64_t *l_754 = (void*)0;
                int64_t *l_755 = (void*)0;
                int i;
                (*p_1221->g_89) |= ((*l_718) = (p_1221->g_712.s3 > (safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((*l_690) &= (+((VECTOR(uint16_t, 2))(p_1221->g_734.s62)).even)), 0)), (p_24 | (((*l_718) <= (safe_mod_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((*l_718), ((((~p_23) , (((p_26 & (GROUP_DIVERGE(1, 1) & (safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 2))(l_741.s18)).odd, 15)))) <= ((p_1221->g_353.x ^= ((safe_mod_func_int32_t_s_s(((void*)0 == &p_1221->g_242), ((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 2))(1UL, 0xEF4C74B1L)).yyyxxxyx, ((VECTOR(uint32_t, 16))(abs(((VECTOR(int32_t, 4))(l_744.s0106)).zzyzyyzwxzzzyzzz))).lo))).s4)) < (((((VECTOR(int64_t, 8))(l_745.wwwwwywx)).s0 ^ ((safe_unary_minus_func_int16_t_s((((*l_753) = (((safe_rshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u((((*l_752) ^= (((*l_751) = (p_25 == p_25)) | p_1221->g_299)) == 0x4E81L), l_741.sf)), l_741.s5)) , 1L) ^ p_26)) | l_676.sf))) , 4UL)) && l_741.s9) && l_667.s8))) >= l_714.w)) & p_1221->g_242)) | l_714.x) , 0x2DL))) <= 1UL), p_24))) , 0x1575B65B876E36BDL)))), l_741.s9))));
                return l_756[1][2];
            }
            else
            { /* block id: 307 */
                uint8_t l_763 = 0x88L;
                int16_t *l_768 = (void*)0;
                int16_t *l_769 = &p_1221->g_160;
                int64_t **l_779 = &l_778;
                uint64_t *l_780 = (void*)0;
                uint64_t **l_781[9][4] = {{&l_780,&l_780,&l_780,&l_780},{&l_780,&l_780,&l_780,&l_780},{&l_780,&l_780,&l_780,&l_780},{&l_780,&l_780,&l_780,&l_780},{&l_780,&l_780,&l_780,&l_780},{&l_780,&l_780,&l_780,&l_780},{&l_780,&l_780,&l_780,&l_780},{&l_780,&l_780,&l_780,&l_780},{&l_780,&l_780,&l_780,&l_780}};
                int32_t ***l_815 = &p_1221->g_808[3][0];
                int i, j;
                if ((safe_lshift_func_int8_t_s_u((((safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((((l_763++) >= 1L) , (safe_mul_func_int16_t_s_s((l_676.s0 = ((*l_769) = l_763)), 0x645DL))), 2)), 0x2AL)) == (safe_div_func_int64_t_s_s(((((safe_lshift_func_uint16_t_u_s(p_24, (safe_mul_func_int8_t_s_s((((~(l_745.y != (((*l_779) = l_778) == p_25))) ^ ((p_1221->g_782 = l_780) != (void*)0)) && p_23), p_24)))) , FAKE_DIVERGE(p_1221->local_0_offset, get_local_id(0), 10)) , (void*)0) == &p_1221->g_327), (*p_1221->g_221)))) , l_723), p_24)))
                { /* block id: 313 */
                    uint32_t *l_792[10][2] = {{(void*)0,&p_1221->g_97},{(void*)0,&p_1221->g_97},{(void*)0,&p_1221->g_97},{(void*)0,&p_1221->g_97},{(void*)0,&p_1221->g_97},{(void*)0,&p_1221->g_97},{(void*)0,&p_1221->g_97},{(void*)0,&p_1221->g_97},{(void*)0,&p_1221->g_97},{(void*)0,&p_1221->g_97}};
                    int32_t **l_793 = &l_718;
                    int i, j;
                    (*l_793) = func_54((*p_1221->g_375), p_1221->g_130, l_783[0][9][6], (((VECTOR(uint8_t, 4))(((FAKE_DIVERGE(p_1221->global_2_offset, get_global_id(2), 10) & p_26) <= (((*l_718) = (safe_add_func_uint8_t_u_u(p_1221->g_709.s4, (safe_div_func_int16_t_s_s(p_1221->g_242, ((p_1221->g_510.y , (safe_add_func_uint32_t_u_u((p_1221->g_122.w = (safe_rshift_func_uint8_t_u_u(p_1221->g_5.s2, 3))), ((*l_718) ^ p_26)))) , 0xDFF3L)))))) == 0xD7568F61L)), 0x82L, 251UL, 8UL)).y >= p_1221->g_237.se), p_24, p_1221);
                }
                else
                { /* block id: 317 */
                    VECTOR(int8_t, 2) l_802 = (VECTOR(int8_t, 2))(0x70L, 1L);
                    int64_t *l_803[5];
                    int8_t l_816 = (-6L);
                    int i;
                    for (i = 0; i < 5; i++)
                        l_803[i] = (void*)0;
                    (*p_1221->g_89) &= (safe_rshift_func_int8_t_s_s((l_817[4] = (p_1221->g_716.x &= ((safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(249UL, ((VECTOR(uint8_t, 16))(9UL, ((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 2))(7UL, 0xCCL)).xxxxyxxx, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((0x60L < FAKE_DIVERGE(p_1221->group_0_offset, get_group_id(0), 10)) < ((safe_lshift_func_uint8_t_u_s(p_24, (+(safe_sub_func_int8_t_s_s(0x34L, ((((p_1221->g_353.y = ((*l_718) = (p_1221->g_297.w |= (((VECTOR(int8_t, 16))(l_802.xyxxyyyyyyxyyxxx)).sa ^ 0x21L)))) , (safe_lshift_func_int8_t_s_s((p_1221->g_806 != (l_710.y , l_809)), (safe_sub_func_uint16_t_u_u(0x1534L, (((VECTOR(uint64_t, 4))(min(((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 16))((safe_mod_func_uint16_t_u_u((((l_676.s8 &= (((*l_809) = (void*)0) != l_815)) ^ 0UL) | (-1L)), p_24)), p_26, 5UL, 0x5F7D089D23906738L, ((VECTOR(uint64_t, 2))(0xCA9908F5CA3DBD3FL)), ((VECTOR(uint64_t, 2))(18446744073709551610UL)), 0x1ECE3B35D63C1FCAL, 18446744073709551615UL, (*p_1221->g_221), ((VECTOR(uint64_t, 2))(0x6AB330F0608DC9A4L)), 0UL, 18446744073709551615UL, 18446744073709551609UL)).s39, ((VECTOR(uint64_t, 2))(0UL))))).yyyx, ((VECTOR(uint64_t, 4))(0xB5CAFE7C79324FACL))))).w | (-1L))))))) != l_816) == p_26)))))) != p_24)), ((VECTOR(uint8_t, 2))(1UL)), FAKE_DIVERGE(p_1221->group_0_offset, get_group_id(0), 10), p_23, 0x56L, 255UL, 8UL)).lo)).yzzyzwwz))).s64, ((VECTOR(uint8_t, 2))(255UL))))), p_1221->g_308.s4, 0UL, ((VECTOR(uint8_t, 4))(255UL)), ((VECTOR(uint8_t, 4))(249UL)), 247UL, 8UL, 255UL)).s5, 0xBAL, 0xF1L, 255UL, ((VECTOR(uint8_t, 2))(1UL)), 0x60L)).s0745267460251531)).odd)).s7, p_26)) || p_24))), l_818));
                    return p_1221->g_116;
                }
            }
        }
        else
        { /* block id: 329 */
            uint32_t l_825 = 1UL;
            union U0 l_830[2][6] = {{{5UL},{5UL},{5UL},{5UL},{5UL},{5UL}},{{5UL},{5UL},{5UL},{5UL},{5UL},{5UL}}};
            int32_t l_844 = 0x3A74AF5DL;
            int i, j;
            for (p_1221->g_135 = (-19); (p_1221->g_135 < 21); p_1221->g_135 = safe_add_func_uint8_t_u_u(p_1221->g_135, 7))
            { /* block id: 332 */
                uint32_t *l_821 = &p_1221->g_75[0];
                uint32_t *l_822 = &p_1221->g_97;
                int32_t *l_823 = &l_817[4];
                int32_t *l_824[7] = {&l_817[4],&p_1221->g_70,&l_817[4],&l_817[4],&p_1221->g_70,&l_817[4],&l_817[4]};
                int16_t *l_843[10] = {(void*)0,&p_1221->g_163[3],(void*)0,(void*)0,&p_1221->g_163[3],(void*)0,(void*)0,&p_1221->g_163[3],(void*)0,(void*)0};
                int i;
                (*l_823) ^= (((*l_822) &= ((*l_821) = p_1221->g_116)) <= l_668.s5);
                --l_825;
                l_844 ^= ((safe_mul_func_uint8_t_u_u(248UL, (p_24 , p_1221->g_9.s5))) || (((l_830[0][4] , (safe_sub_func_uint16_t_u_u(l_825, ((safe_rshift_func_int16_t_s_u((p_1221->g_163[1] = ((VECTOR(int16_t, 8))((&l_824[2] == (void*)0), 0L, ((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(p_1221->g_835.xxyyyxyy)).odd)).xxwxwxzz))))), (((((safe_rshift_func_uint16_t_u_s(((0xBBF1L != ((safe_sub_func_uint8_t_u_u(((((safe_lshift_func_int8_t_s_u((0x54L > p_23), p_23)) && l_817[4]) && l_650.s8) | (*p_1221->g_89)), l_842)) , p_23)) || 0L), p_23)) & 0L) , l_825) , l_695.z) & p_26), 0x42B7L, 0L, ((VECTOR(int16_t, 4))(0x1C8BL)), (-1L))).s7f9a, ((VECTOR(int16_t, 4))((-1L)))))), 0x363EL, 0L)).s0), l_668.s5)) || (*p_1221->g_89))))) > p_1221->g_242) && p_26));
            }
        }
        for (p_1221->g_53 = 0; (p_1221->g_53 >= 10); ++p_1221->g_53)
        { /* block id: 343 */
            (*p_1221->g_89) = p_24;
        }
        --l_873;
        for (p_1221->g_352 = 0; (p_1221->g_352 == (-17)); p_1221->g_352 = safe_sub_func_uint32_t_u_u(p_1221->g_352, 7))
        { /* block id: 349 */
            uint64_t l_901 = 0x28196AABF9E3D8DCL;
            for (p_1221->g_181 = 0; (p_1221->g_181 < 12); p_1221->g_181++)
            { /* block id: 352 */
                uint64_t l_880 = 1UL;
                uint64_t **l_894 = &p_1221->g_782;
                int32_t l_900 = 0x6B3CAEC3L;
                int32_t l_912 = 0x25C65B66L;
                l_880--;
                (*l_860) = 0x192E7D41L;
                for (p_1221->g_53 = (-11); (p_1221->g_53 < 18); p_1221->g_53 = safe_add_func_uint32_t_u_u(p_1221->g_53, 4))
                { /* block id: 357 */
                    uint64_t l_889 = 0xC133813302EE4E26L;
                    (*l_864) = (safe_mod_func_uint16_t_u_u(GROUP_DIVERGE(2, 1), (safe_add_func_uint8_t_u_u(l_889, (safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 16))(0x93C6L, l_650.s2, ((VECTOR(uint16_t, 2))(0x81B5L, 0x6FA0L)), 65535UL, 0xA11FL, ((VECTOR(uint16_t, 2))(4UL, 1UL)), 0x9DA3L, ((VECTOR(uint16_t, 2))(65535UL, 65532UL)), 0x440BL, 65535UL, 0UL, 0UL, 3UL)).odd))).s57))).hi, l_889))))));
                }
                for (p_1221->g_680 = (-2); (p_1221->g_680 < 36); p_1221->g_680 = safe_add_func_uint8_t_u_u(p_1221->g_680, 3))
                { /* block id: 362 */
                    if ((l_894 == p_1221->g_895))
                    { /* block id: 363 */
                        int32_t **l_899 = &l_866;
                        if (p_24)
                            break;
                        (*l_899) = &l_817[3];
                        l_901--;
                    }
                    else
                    { /* block id: 367 */
                        (*l_857) |= (safe_rshift_func_uint8_t_u_u((l_649.y |= (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(p_24, 4)), 0))), 7));
                    }
                    for (p_1221->g_639 = 29; (p_1221->g_639 >= 8); p_1221->g_639--)
                    { /* block id: 373 */
                        (*l_861) |= l_912;
                    }
                }
            }
            if ((atomic_inc(&p_1221->l_atomic_input[26]) == 7))
            { /* block id: 379 */
                int16_t l_913 = 0x4F0BL;
                uint8_t l_914 = 3UL;
                uint16_t l_917 = 0UL;
                int8_t l_918[4];
                uint8_t l_942 = 0xDBL;
                uint64_t l_943 = 0UL;
                int i;
                for (i = 0; i < 4; i++)
                    l_918[i] = 0L;
                ++l_914;
                if ((l_918[1] &= l_917))
                { /* block id: 382 */
                    uint8_t l_919 = 0x99L;
                    int32_t l_922 = (-10L);
                    uint32_t l_923 = 4294967290UL;
                    int32_t *l_926 = (void*)0;
                    l_919++;
                    ++l_923;
                    l_926 = l_926;
                    for (l_923 = 8; (l_923 == 2); l_923 = safe_sub_func_uint16_t_u_u(l_923, 8))
                    { /* block id: 388 */
                        l_926 = (void*)0;
                    }
                }
                else
                { /* block id: 391 */
                    int32_t l_930 = 0x41E55F01L;
                    int32_t *l_929 = &l_930;
                    int32_t *l_931 = &l_930;
                    uint32_t l_932[8];
                    int32_t *l_941 = &l_930;
                    int i;
                    for (i = 0; i < 8; i++)
                        l_932[i] = 0xB06CF70DL;
                    l_931 = (l_929 = (void*)0);
                    if (l_932[4])
                    { /* block id: 394 */
                        int32_t l_934 = 1L;
                        int32_t *l_933 = &l_934;
                        uint32_t l_935 = 0x51946DE5L;
                        VECTOR(uint16_t, 4) l_938 = (VECTOR(uint16_t, 4))(0xE37DL, (VECTOR(uint16_t, 2))(0xE37DL, 0UL), 0UL);
                        int32_t l_939 = 0x7D5AD5F8L;
                        int i;
                        l_931 = l_933;
                        --l_935;
                        (*l_933) &= (((VECTOR(uint16_t, 16))(l_938.xzwxxzzyzwxyxwyz)).se , l_939);
                        l_929 = (void*)0;
                    }
                    else
                    { /* block id: 399 */
                        uint32_t l_940[1][1][2];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 2; k++)
                                    l_940[i][j][k] = 1UL;
                            }
                        }
                        l_930 = l_940[0][0][1];
                    }
                    l_941 = (void*)0;
                }
                l_943 &= l_942;
                unsigned int result = 0;
                result += l_913;
                result += l_914;
                result += l_917;
                int l_918_i0;
                for (l_918_i0 = 0; l_918_i0 < 4; l_918_i0++) {
                    result += l_918[l_918_i0];
                }
                result += l_942;
                result += l_943;
                atomic_add(&p_1221->l_special_values[26], result);
            }
            else
            { /* block id: 405 */
                (1 + 1);
            }
            return p_26;
        }
    }
    (*l_945) = l_944;
    return p_1221->g_835.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_1221->g_80 p_1221->g_75 p_1221->g_237 p_1221->g_135 p_1221->g_89 p_1221->g_116 p_1221->g_639
 * writes: p_1221->g_80 p_1221->g_116 p_1221->g_639
 */
int64_t  func_27(uint64_t * p_28, int8_t  p_29, uint32_t  p_30, uint64_t  p_31, uint64_t * p_32, struct S1 * p_1221)
{ /* block id: 268 */
    VECTOR(int64_t, 2) l_615 = (VECTOR(int64_t, 2))((-2L), 0x5DE81081FF2A07FDL);
    int32_t *l_630 = (void*)0;
    int32_t *l_631[7] = {&p_1221->g_352,&p_1221->g_352,&p_1221->g_352,&p_1221->g_352,&p_1221->g_352,&p_1221->g_352,&p_1221->g_352};
    int32_t l_632 = 0x2FB24974L;
    uint32_t l_633 = 0xDF3EF61EL;
    uint64_t *l_636 = (void*)0;
    uint64_t *l_637 = (void*)0;
    uint64_t *l_638[9][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
    int i, j;
    for (p_1221->g_80 = (-14); (p_1221->g_80 <= 46); p_1221->g_80++)
    { /* block id: 271 */
        return p_29;
    }
    (*p_1221->g_89) &= ((((VECTOR(int64_t, 16))(l_615.yxyyxxyxyxyyxyyx)).s5 ^ ((((safe_lshift_func_uint16_t_u_s((7UL <= ((((safe_add_func_int32_t_s_s(((safe_div_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(p_1221->g_75[0], 7)), p_29)) > l_615.x), l_615.y)) > (safe_mul_func_uint8_t_u_u(l_615.x, (safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((p_1221->g_237.se < (((p_1221->g_135 || 0xE76FL) >= FAKE_DIVERGE(p_1221->global_0_offset, get_global_id(0), 10)) , 247UL)), l_615.y)), 1UL))))) || l_615.y) ^ 0UL)), l_615.y)) < p_30) , (void*)0) == &p_30)) , 0x7749F9C7L);
    --l_633;
    (*p_1221->g_89) &= (p_31 <= (--p_1221->g_639));
    return p_30;
}


/* ------------------------------------------ */
/* 
 * reads : p_1221->g_53 p_1221->g_67 p_1221->g_75 p_1221->g_50 p_1221->g_80 p_1221->g_9 p_1221->g_89 p_1221->g_70 p_1221->g_68 p_1221->g_116 p_1221->g_130 p_1221->g_135 p_1221->g_136 p_1221->g_141 p_1221->g_160 p_1221->g_163 p_1221->g_181 p_1221->l_comm_values p_1221->g_155 p_1221->g_220 p_1221->g_122 p_1221->g_130.f0 p_1221->g_142 p_1221->g_237 p_1221->g_328 p_1221->g_358 p_1221->g_221 p_1221->g_7 p_1221->g_299 p_1221->g_374
 * writes: p_1221->g_50 p_1221->g_53 p_1221->g_63 p_1221->g_75 p_1221->g_80 p_1221->g_89 p_1221->g_70 p_1221->g_97 p_1221->g_68 p_1221->g_116 p_1221->g_135 p_1221->g_136 p_1221->g_130.f0 p_1221->g_181 p_1221->g_160 p_1221->g_249 p_1221->g_237 p_1221->g_299 p_1221->g_328 p_1221->g_358 p_1221->g_348 p_1221->g_352 p_1221->g_349
 */
uint64_t * func_33(uint64_t * p_34, uint32_t  p_35, struct S1 * p_1221)
{ /* block id: 8 */
    uint64_t l_49 = 0x0AECF93A29ADD925L;
    int32_t *l_51 = (void*)0;
    int32_t *l_52 = &p_1221->g_53;
    uint16_t *l_62 = &p_1221->g_63;
    uint32_t *l_78 = (void*)0;
    uint32_t *l_79 = &p_1221->g_80;
    uint64_t *l_86 = &l_49;
    uint64_t **l_85 = &l_86;
    int32_t **l_393 = &p_1221->g_89;
    int32_t l_406 = (-1L);
    uint64_t *l_516 = &l_49;
    VECTOR(uint64_t, 2) l_532 = (VECTOR(uint64_t, 2))(0x8D16794967EF61FBL, 18446744073709551612UL);
    uint32_t ***l_542[7] = {&p_1221->g_338,&p_1221->g_338,&p_1221->g_338,&p_1221->g_338,&p_1221->g_338,&p_1221->g_338,&p_1221->g_338};
    int64_t l_550 = 1L;
    int32_t l_554 = 0x3CB5E6D3L;
    int32_t l_555 = 0x5BF17CF8L;
    VECTOR(int64_t, 8) l_572 = (VECTOR(int64_t, 8))(8L, (VECTOR(int64_t, 4))(8L, (VECTOR(int64_t, 2))(8L, 3L), 3L), 3L, 8L, 3L);
    int i;
    (*l_52) |= (0x1520L > (p_1221->g_50 = l_49));
    (*l_393) = func_54(((*l_79) |= ((safe_lshift_func_uint16_t_u_s(((*l_62) = (*l_52)), 15)) ^ func_64(p_1221->g_67[2], p_35, p_1221))), func_81((p_35 , l_85), p_35, p_1221->g_9.s6, p_1221), p_34, p_35, (*l_52), p_1221);
    for (p_35 = 19; (p_35 > 58); p_35++)
    { /* block id: 165 */
        uint8_t l_407 = 0UL;
        VECTOR(uint32_t, 2) l_498 = (VECTOR(uint32_t, 2))(1UL, 0xAA157877L);
        uint8_t *l_530 = &p_1221->g_130.f1;
        uint8_t *l_531 = &l_407;
        uint64_t *l_541[10] = {&p_1221->g_495,(void*)0,&p_1221->g_495,&p_1221->g_495,(void*)0,&p_1221->g_495,&p_1221->g_495,(void*)0,&p_1221->g_495,&p_1221->g_495};
        uint16_t *l_545 = &p_1221->g_63;
        int16_t l_546 = 0x5B2EL;
        int8_t *l_547 = (void*)0;
        int8_t *l_548 = (void*)0;
        int8_t *l_549 = (void*)0;
        int32_t l_551 = 0x4C7C0082L;
        int32_t l_556 = 7L;
        uint64_t l_557 = 1UL;
        uint32_t **l_567 = &p_1221->g_339;
        uint64_t l_568[5];
        VECTOR(int64_t, 2) l_570 = (VECTOR(int64_t, 2))((-5L), 0L);
        VECTOR(int64_t, 2) l_574 = (VECTOR(int64_t, 2))(0x2F8155A5EC3C716BL, (-5L));
        int32_t ***l_599 = &l_393;
        int i;
        for (i = 0; i < 5; i++)
            l_568[i] = 0x1ABC02B33C64DB52L;
        for (p_1221->g_349 = 0; (p_1221->g_349 != 16); ++p_1221->g_349)
        { /* block id: 168 */
            int32_t *l_398 = &p_1221->g_116;
            int32_t *l_399 = &p_1221->g_70;
            int32_t *l_400 = (void*)0;
            int32_t *l_401 = &p_1221->g_116;
            int32_t *l_402 = &p_1221->g_116;
            int32_t *l_403 = &p_1221->g_70;
            int32_t *l_404 = (void*)0;
            int32_t *l_405 = &p_1221->g_70;
            --l_407;
            return p_34;
        }
    }
    (*l_52) = (safe_div_func_int8_t_s_s(p_1221->g_237.sd, p_35));
    return p_34;
}


/* ------------------------------------------ */
/* 
 * reads : p_1221->g_89 p_1221->g_70 p_1221->g_53 p_1221->g_116
 * writes: p_1221->g_70 p_1221->g_53 p_1221->g_116
 */
int32_t * func_54(uint32_t  p_55, union U0  p_56, uint64_t * p_57, uint32_t  p_58, uint32_t  p_59, struct S1 * p_1221)
{ /* block id: 159 */
    int32_t *l_392[7] = {&p_1221->g_116,&p_1221->g_116,&p_1221->g_116,&p_1221->g_116,&p_1221->g_116,&p_1221->g_116,&p_1221->g_116};
    int i;
    (*p_1221->g_89) ^= (-9L);
    return l_392[3];
}


/* ------------------------------------------ */
/* 
 * reads : p_1221->g_75 p_1221->g_50
 * writes: p_1221->g_75
 */
uint64_t  func_64(uint16_t * p_65, uint32_t  p_66, struct S1 * p_1221)
{ /* block id: 12 */
    int32_t *l_69 = &p_1221->g_70;
    int32_t *l_71 = &p_1221->g_70;
    int32_t *l_72 = (void*)0;
    int32_t l_73 = 0x64B57DC5L;
    int32_t *l_74[8] = {&p_1221->g_70,&p_1221->g_70,&p_1221->g_70,&p_1221->g_70,&p_1221->g_70,&p_1221->g_70,&p_1221->g_70,&p_1221->g_70};
    int i;
    p_1221->g_75[0]--;
    return p_1221->g_50;
}


/* ------------------------------------------ */
/* 
 * reads : p_1221->g_89 p_1221->g_70 p_1221->g_53 p_1221->g_68 p_1221->g_116 p_1221->g_130 p_1221->g_135 p_1221->g_50 p_1221->g_136 p_1221->g_141 p_1221->g_160 p_1221->g_163 p_1221->g_181 p_1221->l_comm_values p_1221->g_155 p_1221->g_220 p_1221->g_122 p_1221->g_130.f0 p_1221->g_142 p_1221->g_237 p_1221->g_328 p_1221->g_358 p_1221->g_221 p_1221->g_7 p_1221->g_299 p_1221->g_374
 * writes: p_1221->g_89 p_1221->g_70 p_1221->g_97 p_1221->g_68 p_1221->g_116 p_1221->g_135 p_1221->g_136 p_1221->g_130.f0 p_1221->g_181 p_1221->g_160 p_1221->g_249 p_1221->g_237 p_1221->g_299 p_1221->g_328 p_1221->g_358 p_1221->g_348 p_1221->g_352
 */
union U0  func_81(uint64_t ** p_82, int16_t  p_83, uint64_t  p_84, struct S1 * p_1221)
{ /* block id: 16 */
    int32_t *l_87 = &p_1221->g_53;
    int32_t **l_88[3][2][8] = {{{&l_87,&l_87,&l_87,&l_87,(void*)0,&l_87,&l_87,&l_87},{&l_87,&l_87,&l_87,&l_87,(void*)0,&l_87,&l_87,&l_87}},{{&l_87,&l_87,&l_87,&l_87,(void*)0,&l_87,&l_87,&l_87},{&l_87,&l_87,&l_87,&l_87,(void*)0,&l_87,&l_87,&l_87}},{{&l_87,&l_87,&l_87,&l_87,(void*)0,&l_87,&l_87,&l_87},{&l_87,&l_87,&l_87,&l_87,(void*)0,&l_87,&l_87,&l_87}}};
    int32_t *l_320[6] = {&p_1221->g_53,&p_1221->g_70,&p_1221->g_53,&p_1221->g_53,&p_1221->g_70,&p_1221->g_53};
    int64_t l_385 = 0x120F243AADE2573CL;
    uint8_t l_386 = 1UL;
    union U0 l_391 = {9UL};
    int i, j, k;
    p_1221->g_89 = l_87;
    for (p_84 = (-26); (p_84 > 42); p_84 = safe_add_func_uint16_t_u_u(p_84, 1))
    { /* block id: 20 */
        uint64_t *l_112 = &p_1221->g_7;
        int32_t l_114 = 0L;
        VECTOR(int8_t, 4) l_317 = (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 0x08L), 0x08L);
        uint32_t **l_340[8] = {&p_1221->g_339,&p_1221->g_339,&p_1221->g_339,&p_1221->g_339,&p_1221->g_339,&p_1221->g_339,&p_1221->g_339,&p_1221->g_339};
        uint32_t **l_341 = &p_1221->g_339;
        int32_t l_356 = (-1L);
        int i;
        for (p_1221->g_70 = 23; (p_1221->g_70 != (-12)); p_1221->g_70 = safe_sub_func_uint64_t_u_u(p_1221->g_70, 9))
        { /* block id: 23 */
            uint32_t *l_96 = &p_1221->g_97;
            int32_t **l_107 = &p_1221->g_89;
            uint16_t *l_113 = &p_1221->g_68;
            int8_t l_333 = (-1L);
            int32_t l_347 = 0x08CCDC71L;
            VECTOR(int32_t, 16) l_350 = (VECTOR(int32_t, 16))(0x0C45E470L, (VECTOR(int32_t, 4))(0x0C45E470L, (VECTOR(int32_t, 2))(0x0C45E470L, (-8L)), (-8L)), (-8L), 0x0C45E470L, (-8L), (VECTOR(int32_t, 2))(0x0C45E470L, (-8L)), (VECTOR(int32_t, 2))(0x0C45E470L, (-8L)), 0x0C45E470L, (-8L), 0x0C45E470L, (-8L));
            int32_t l_357 = 0x09516DBDL;
            uint32_t l_367 = 0x071BE5E8L;
            int i;
            if (((safe_sub_func_int32_t_s_s(((((*l_96) = FAKE_DIVERGE(p_1221->global_2_offset, get_global_id(2), 10)) > (safe_mul_func_uint16_t_u_u(func_100(func_102(((safe_sub_func_int64_t_s_s(((((void*)0 != l_107) >= (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((p_84 | (1L ^ ((l_112 == ((2L != ((((void*)0 == &p_1221->g_70) && ((*l_113) |= (**l_107))) & p_83)) , l_112)) != 0xBE35A8448041AE35L))) | l_114), 12)), l_114))) ^ p_83), 2UL)) >= p_84), l_96, p_1221), p_1221), (*l_87)))) , l_114), l_114)) , 0x2D3E3147L))
            { /* block id: 107 */
                int8_t *l_318 = (void*)0;
                int8_t *l_319[4];
                int32_t l_323 = 0x643EF07CL;
                int32_t l_346 = 0x1A8C06CBL;
                int32_t l_354 = (-4L);
                uint32_t **l_376 = (void*)0;
                VECTOR(int16_t, 8) l_379 = (VECTOR(int16_t, 8))(0x692AL, (VECTOR(int16_t, 4))(0x692AL, (VECTOR(int16_t, 2))(0x692AL, 0x31A1L), 0x31A1L), 0x31A1L, 0x692AL, 0x31A1L);
                int i;
                for (i = 0; i < 4; i++)
                    l_319[i] = (void*)0;
                l_320[4] = ((safe_mul_func_int8_t_s_s((p_1221->g_237.s6 &= ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_317.xy)).xxxyyxyyyxyxxyyx)).sb), ((void*)0 != l_96))) , (*l_107));
                for (p_1221->g_299 = 0; (p_1221->g_299 == (-20)); --p_1221->g_299)
                { /* block id: 112 */
                    int64_t l_324 = 0x019A385717BF625CL;
                    int32_t ***l_334 = &l_88[1][1][4];
                    int32_t ***l_335 = &l_107;
                    if ((*p_1221->g_89))
                    { /* block id: 113 */
                        int16_t l_325 = (-7L);
                        int32_t l_326 = 0x5FDD5CE2L;
                        p_1221->g_328++;
                    }
                    else
                    { /* block id: 115 */
                        (*l_107) = &p_1221->g_70;
                        if (p_84)
                            continue;
                    }
                    if ((safe_div_func_uint32_t_u_u((l_333 | (((*l_334) = &p_1221->g_89) != ((*l_335) = &p_1221->g_89))), (((VECTOR(uint64_t, 16))(1UL, ((((0x64726813L > (*p_1221->g_89)) | p_84) > ((l_340[6] = p_1221->g_338) == l_341)) >= ((p_83 < l_323) != p_1221->g_242)), ((VECTOR(uint64_t, 8))(8UL)), 0x76D319144B7A4872L, 0xD0869CC9F603E7C4L, ((VECTOR(uint64_t, 2))(0x9233FE3BF29AA3EDL)), 6UL, 9UL)).sb , p_83))))
                    { /* block id: 122 */
                        p_1221->g_89 = &p_1221->g_70;
                    }
                    else
                    { /* block id: 124 */
                        l_114 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(0x75F38C48L, 0x339C9CAAL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-7L), (-9L))).yxxx)), (-1L), (-1L))).s4765370330237412)).s9;
                    }
                }
                for (l_333 = 0; (l_333 > 4); ++l_333)
                { /* block id: 130 */
                    int32_t l_344 = 1L;
                    int32_t l_345 = 0x447DA34EL;
                    int32_t l_351 = (-1L);
                    int32_t l_355 = 0x2A92C74DL;
                    int64_t *l_363 = (void*)0;
                    int64_t *l_364 = (void*)0;
                    int64_t *l_365 = &p_1221->g_348;
                    VECTOR(uint8_t, 8) l_366 = (VECTOR(uint8_t, 8))(0x9AL, (VECTOR(uint8_t, 4))(0x9AL, (VECTOR(uint8_t, 2))(0x9AL, 255UL), 255UL), 255UL, 0x9AL, 255UL);
                    uint8_t l_380 = 0x91L;
                    int i;
                    ++p_1221->g_358;
                    p_1221->g_116 |= (((0x02L != (l_367 = ((safe_rshift_func_int8_t_s_s((((*l_365) = 0L) >= (*p_1221->g_221)), (((void*)0 != &l_320[4]) , ((((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))((-1L), 0x6AL)).xyyx)).y || 0xD1L) , p_1221->g_122.y)))) || (l_356 , ((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(l_366.s74302446)))), (l_345 < p_1221->g_130.f0), 0UL, 5UL, ((VECTOR(uint8_t, 4))(6UL)), 6UL)).s694b)).lo))).hi)))) == l_344) , (*p_1221->g_89));
                    for (p_83 = 0; (p_83 <= (-13)); p_83 = safe_sub_func_uint8_t_u_u(p_83, 6))
                    { /* block id: 137 */
                        int32_t ***l_371 = (void*)0;
                        int32_t ****l_370 = &l_371;
                        uint64_t *l_381 = (void*)0;
                        uint64_t *l_382 = (void*)0;
                        uint64_t *l_383 = (void*)0;
                        uint64_t *l_384 = (void*)0;
                        p_1221->g_116 = (((*l_370) = (void*)0) == (void*)0);
                        l_385 = ((l_114 &= ((**p_82) = (~(p_1221->g_299 , (((safe_sub_func_int16_t_s_s((&p_1221->g_89 == ((p_1221->g_374 != l_376) , &p_1221->g_89)), 0UL)) , ((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 4))(l_379.s2764)).z, l_380)) & ((**l_107) , p_83))) > l_356))))) < (*p_1221->g_221));
                    }
                }
                ++l_386;
            }
            else
            { /* block id: 146 */
                for (p_1221->g_352 = 0; (p_1221->g_352 != (-11)); p_1221->g_352 = safe_sub_func_uint32_t_u_u(p_1221->g_352, 3))
                { /* block id: 149 */
                    if (p_83)
                        break;
                    (*l_107) = (l_114 , (*l_107));
                }
            }
            (*l_107) = &p_1221->g_70;
        }
        if ((*p_1221->g_89))
            continue;
    }
    return l_391;
}


/* ------------------------------------------ */
/* 
 * reads : p_1221->g_160 p_1221->g_89 p_1221->g_53 p_1221->g_236 p_1221->g_237 p_1221->g_116 p_1221->g_221 p_1221->g_135 p_1221->g_130.f0 p_1221->g_256 p_1221->g_136 p_1221->g_297 p_1221->g_298 p_1221->g_299 p_1221->g_7 p_1221->g_142 p_1221->g_308 p_1221->g_70
 * writes: p_1221->g_160 p_1221->g_116 p_1221->g_249
 */
uint16_t  func_100(uint64_t ** p_101, struct S1 * p_1221)
{ /* block id: 89 */
    int8_t l_240 = 5L;
    int32_t l_243 = (-8L);
    VECTOR(uint32_t, 4) l_246 = (VECTOR(uint32_t, 4))(4294967287UL, (VECTOR(uint32_t, 2))(4294967287UL, 4294967287UL), 4294967287UL);
    int64_t *l_247[1][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int64_t **l_248[8] = {&l_247[0][6],&l_247[0][6],&l_247[0][6],&l_247[0][6],&l_247[0][6],&l_247[0][6],&l_247[0][6],&l_247[0][6]};
    VECTOR(uint16_t, 4) l_252 = (VECTOR(uint16_t, 4))(0x325DL, (VECTOR(uint16_t, 2))(0x325DL, 65532UL), 65532UL);
    uint32_t *l_254 = (void*)0;
    uint32_t **l_253[10][10] = {{(void*)0,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254},{(void*)0,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254},{(void*)0,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254},{(void*)0,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254},{(void*)0,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254},{(void*)0,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254},{(void*)0,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254},{(void*)0,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254},{(void*)0,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254},{(void*)0,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254,&l_254}};
    VECTOR(uint64_t, 2) l_255 = (VECTOR(uint64_t, 2))(0xA0FE7317C9CA4C6FL, 18446744073709551615UL);
    VECTOR(uint64_t, 8) l_257 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0xB27EF69D77BA142AL), 0xB27EF69D77BA142AL), 0xB27EF69D77BA142AL, 1UL, 0xB27EF69D77BA142AL);
    VECTOR(uint64_t, 2) l_258 = (VECTOR(uint64_t, 2))(18446744073709551608UL, 0x629CB9F3FC713C8FL);
    int32_t l_259 = (-5L);
    int32_t l_260 = (-1L);
    uint64_t *l_261 = (void*)0;
    uint64_t *l_262 = (void*)0;
    uint64_t *l_263 = (void*)0;
    uint64_t *l_264 = (void*)0;
    uint64_t *l_265 = (void*)0;
    uint64_t *l_266 = (void*)0;
    uint64_t *l_267 = (void*)0;
    uint64_t *l_268 = (void*)0;
    uint64_t *l_269 = (void*)0;
    int32_t l_270 = 0x3EB66CE2L;
    uint64_t *l_271 = (void*)0;
    uint64_t *l_272 = (void*)0;
    uint64_t *l_273 = (void*)0;
    uint64_t *l_274 = (void*)0;
    int32_t l_275 = 1L;
    uint64_t *l_276 = (void*)0;
    uint64_t *l_277 = (void*)0;
    uint64_t *l_278 = (void*)0;
    uint64_t *l_279 = (void*)0;
    uint64_t *l_280 = (void*)0;
    uint64_t *l_281 = (void*)0;
    uint64_t *l_282 = (void*)0;
    uint64_t *l_283 = (void*)0;
    uint64_t *l_284 = (void*)0;
    uint64_t *l_285 = (void*)0;
    uint64_t *l_286 = (void*)0;
    uint64_t *l_287 = (void*)0;
    uint64_t *l_288 = (void*)0;
    uint64_t *l_289 = (void*)0;
    uint64_t *l_290 = (void*)0;
    uint64_t *l_291[8][6][5] = {{{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0}},{{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0}},{{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0}},{{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0}},{{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0}},{{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0}},{{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0}},{{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1221->g_7,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int32_t l_292[9][8] = {{0x4CBC2570L,(-1L),0x4CBC2570L,0x4CBC2570L,(-1L),0x4CBC2570L,0x4CBC2570L,(-1L)},{0x4CBC2570L,(-1L),0x4CBC2570L,0x4CBC2570L,(-1L),0x4CBC2570L,0x4CBC2570L,(-1L)},{0x4CBC2570L,(-1L),0x4CBC2570L,0x4CBC2570L,(-1L),0x4CBC2570L,0x4CBC2570L,(-1L)},{0x4CBC2570L,(-1L),0x4CBC2570L,0x4CBC2570L,(-1L),0x4CBC2570L,0x4CBC2570L,(-1L)},{0x4CBC2570L,(-1L),0x4CBC2570L,0x4CBC2570L,(-1L),0x4CBC2570L,0x4CBC2570L,(-1L)},{0x4CBC2570L,(-1L),0x4CBC2570L,0x4CBC2570L,(-1L),0x4CBC2570L,0x4CBC2570L,(-1L)},{0x4CBC2570L,(-1L),0x4CBC2570L,0x4CBC2570L,(-1L),0x4CBC2570L,0x4CBC2570L,(-1L)},{0x4CBC2570L,(-1L),0x4CBC2570L,0x4CBC2570L,(-1L),0x4CBC2570L,0x4CBC2570L,(-1L)},{0x4CBC2570L,(-1L),0x4CBC2570L,0x4CBC2570L,(-1L),0x4CBC2570L,0x4CBC2570L,(-1L)}};
    uint32_t l_293 = 0x672BC6C1L;
    VECTOR(int64_t, 8) l_296 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-5L)), (-5L)), (-5L), (-1L), (-5L));
    VECTOR(int8_t, 4) l_300 = (VECTOR(int8_t, 4))(0x1CL, (VECTOR(int8_t, 2))(0x1CL, 0x3BL), 0x3BL);
    int i, j, k;
    for (p_1221->g_160 = 0; (p_1221->g_160 == (-29)); p_1221->g_160 = safe_sub_func_uint16_t_u_u(p_1221->g_160, 5))
    { /* block id: 92 */
        uint16_t l_233 = 7UL;
        int32_t *l_234 = &p_1221->g_116;
        int32_t *l_241[4] = {&p_1221->g_242,&p_1221->g_242,&p_1221->g_242,&p_1221->g_242};
        int i;
        (*l_234) = l_233;
        l_243 ^= ((*p_1221->g_89) , (safe_unary_minus_func_uint16_t_u((((((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 4))((-7L), ((VECTOR(int8_t, 4))(p_1221->g_236.wyxy)).w, 1L, (-1L))).even, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(p_1221->g_237.se5bb092f33c9a5dc)).s9, (-5L), (((*l_234) , p_1221->g_89) != (((safe_lshift_func_uint16_t_u_s(((void*)0 != p_1221->g_221), 1)) && (l_240 || l_240)) , l_234)), 0x6DL, l_240, 0x4AL, (*l_234), p_1221->g_135, ((VECTOR(int8_t, 8))(0x68L)))).even, ((VECTOR(int8_t, 8))(1L))))).s5417305216171123)).s7e))).lo ^ l_240) & l_240) >= 4L))));
        if ((*p_1221->g_89))
            continue;
    }
    if ((((((p_1221->g_130.f0 , (safe_rshift_func_uint16_t_u_u(l_240, 0))) , ((VECTOR(uint32_t, 8))(l_246.xwxwwyww)).s0) , ((p_1221->g_249 = l_247[0][6]) != ((safe_mod_func_int32_t_s_s(((((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(0xBD11L, 0xCFAAL, ((VECTOR(uint16_t, 2))(l_252.wx)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 8))(65535UL, 0x0239L, ((l_292[0][3] &= ((((((((void*)0 == l_253[6][9]) | (+l_243)) >= (((VECTOR(uint64_t, 8))(hadd(((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),VECTOR(uint64_t, 4),((VECTOR(uint64_t, 8))(sub_sat(((VECTOR(uint64_t, 2))(l_255.xy)).yxxxxyxx, ((VECTOR(uint64_t, 16))(p_1221->g_256.s15cb0287e10008b8)).odd))).even, ((VECTOR(uint64_t, 16))(l_257.s3022313712475362)).se7fb, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(add_sat(((VECTOR(uint64_t, 16))(1UL, 18446744073709551607UL, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(clz(((VECTOR(uint64_t, 8))(l_258.yyxxyyyy)).even))).ywwzxyywxzyzyzyw)).s53fd)).odd)), FAKE_DIVERGE(p_1221->group_2_offset, get_group_id(2), 10), 1UL, 0xEB0FD5B6BA7CE9A3L, 0x781DF53A70F743DBL, (++l_293), (+(p_1221->g_136 == p_1221->g_136)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(sub_sat(((VECTOR(uint64_t, 4))(abs_diff(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(l_296.s22756566)))).even, ((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 16))(p_1221->g_297.xxywzzwzxwxzzxwz)).sdd23, ((VECTOR(int64_t, 4))(0L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(p_1221->g_298.sbf76)).hi)), (-1L))), ((VECTOR(int64_t, 16))(rhadd(((VECTOR(int64_t, 4))(p_1221->g_299, ((VECTOR(int64_t, 2))(0x0D4E44B14B88DAA9L)), 1L)).xwxyywxwwxzzzxyw, ((VECTOR(int64_t, 16))(0x4D0D6DFACB869B2CL))))).sab1e))), ((VECTOR(int64_t, 4))(0x6BA384BA09C71677L)))))))), ((VECTOR(uint64_t, 4))(0UL))))))).y, (*p_1221->g_221), ((VECTOR(uint64_t, 2))(1UL)), 0x8F20B7610B732DA3L, 0xAA78C08C1B6F5815L)).s55, ((VECTOR(uint64_t, 2))(1UL))))).xyxyxyxxxyyxyxyx)).hi)))).odd))).zzwzwzww, ((VECTOR(uint64_t, 8))(1UL))))).s7 | l_296.s4)) , &l_254) != &l_254) ^ 0x59L) & 0xF998L)) > l_300.x), ((VECTOR(uint16_t, 2))(1UL)), 1UL, 4UL, 7UL)), ((VECTOR(uint16_t, 8))(0xCDF4L))))).even)))).s1733120751235465)).sf < l_257.s3) > l_252.w), 0xDF5D58D9L)) , p_1221->g_142[1]))) < (*p_1221->g_89)) , (-10L)))
    { /* block id: 100 */
        int16_t l_303 = 1L;
        int32_t l_313[2];
        int32_t *l_314 = &l_292[1][0];
        int i;
        for (i = 0; i < 2; i++)
            l_313[i] = (-1L);
        (*l_314) = ((l_258.y < (safe_div_func_int32_t_s_s(l_292[1][0], (l_303 , 0x4C760C56L)))) > (safe_div_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(0x58L, ((VECTOR(uint8_t, 16))(p_1221->g_308.s6055265515272700)).s6)), (l_313[0] = (safe_lshift_func_int16_t_s_u((+(safe_rshift_func_int8_t_s_u(1L, 5))), 5))))));
        return l_275;
    }
    else
    { /* block id: 104 */
        return l_275;
    }
}


/* ------------------------------------------ */
/* 
 * reads : p_1221->g_116 p_1221->g_122 p_1221->g_130 p_1221->g_135 p_1221->g_50 p_1221->g_136 p_1221->g_130.f0 p_1221->g_141 p_1221->g_5 p_1221->g_155 p_1221->g_160 p_1221->g_163 p_1221->g_181 p_1221->g_68 p_1221->l_comm_values p_1221->g_220
 * writes: p_1221->g_116 p_1221->g_135 p_1221->g_136 p_1221->g_130.f0 p_1221->g_160 p_1221->g_163 p_1221->g_181 p_1221->g_68
 */
uint64_t ** func_102(uint64_t  p_103, uint32_t * p_104, struct S1 * p_1221)
{ /* block id: 26 */
    int32_t *l_115 = &p_1221->g_116;
    VECTOR(uint32_t, 4) l_121 = (VECTOR(uint32_t, 4))(5UL, (VECTOR(uint32_t, 2))(5UL, 0x2A9FC04FL), 0x2A9FC04FL);
    VECTOR(int32_t, 16) l_123 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 9L), 9L), 9L, 0L, 9L, (VECTOR(int32_t, 2))(0L, 9L), (VECTOR(int32_t, 2))(0L, 9L), 0L, 9L, 0L, 9L);
    VECTOR(uint32_t, 8) l_124 = (VECTOR(uint32_t, 8))(9UL, (VECTOR(uint32_t, 4))(9UL, (VECTOR(uint32_t, 2))(9UL, 0x80A8C217L), 0x80A8C217L), 0x80A8C217L, 9UL, 0x80A8C217L);
    union U0 l_129 = {0xDCC1C6A8L};
    uint32_t l_131[4];
    uint8_t *l_134 = &p_1221->g_135;
    uint32_t * volatile **l_138 = &p_1221->g_136;
    VECTOR(uint32_t, 2) l_153 = (VECTOR(uint32_t, 2))(0x71A61B91L, 0x6E363805L);
    int16_t l_186 = (-9L);
    int i;
    for (i = 0; i < 4; i++)
        l_131[i] = 0xF904C67DL;
    (*l_115) ^= (((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))((-1L), (-1L))), 0x2DL, (-1L))).x >= p_103);
    (*l_138) = ((((void*)0 == l_115) & (((safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 16))(l_121.wwyzzxzzywxwwyyy)).s14, ((VECTOR(uint32_t, 16))(p_1221->g_122.yywyyxxyyxzwywzx)).sf6, ((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 8))(abs(((VECTOR(int32_t, 2))(l_123.s41)).yyxxyyxy))), ((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0xBA86ABA2L, 0xE681A9B7L)).xxyx)).xzzywzxzzwwxyxzy, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 2))(l_124.s06))))))).xyxxyxxxxxyxyxyx))).lo))).s37))).hi & 0UL), (safe_sub_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(((l_129 , &l_115) == ((p_1221->g_130 , l_131[2]) , &l_115)), ((*l_134) &= (safe_mod_func_uint8_t_u_u(251UL, 7UL))))) , p_103), p_1221->g_50)))), p_103)) || p_1221->g_116) & p_103)) , p_1221->g_136);
    for (p_1221->g_130.f0 = 0; (p_1221->g_130.f0 <= 43); ++p_1221->g_130.f0)
    { /* block id: 32 */
        int32_t *l_144[8][10] = {{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,(void*)0,&p_1221->g_70,(void*)0,&p_1221->g_70,&p_1221->g_70,&p_1221->g_70,(void*)0},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,(void*)0,&p_1221->g_70,(void*)0,&p_1221->g_70,&p_1221->g_70,&p_1221->g_70,(void*)0},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,(void*)0,&p_1221->g_70,(void*)0,&p_1221->g_70,&p_1221->g_70,&p_1221->g_70,(void*)0},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,(void*)0,&p_1221->g_70,(void*)0,&p_1221->g_70,&p_1221->g_70,&p_1221->g_70,(void*)0},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,(void*)0,&p_1221->g_70,(void*)0,&p_1221->g_70,&p_1221->g_70,&p_1221->g_70,(void*)0},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,(void*)0,&p_1221->g_70,(void*)0,&p_1221->g_70,&p_1221->g_70,&p_1221->g_70,(void*)0},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,(void*)0,&p_1221->g_70,(void*)0,&p_1221->g_70,&p_1221->g_70,&p_1221->g_70,(void*)0},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,(void*)0,&p_1221->g_70,(void*)0,&p_1221->g_70,&p_1221->g_70,&p_1221->g_70,(void*)0}};
        union U0 l_170 = {1UL};
        uint8_t *l_173 = (void*)0;
        uint32_t *l_206 = &l_131[0];
        int i, j;
        if (((void*)0 == p_1221->g_141))
        { /* block id: 33 */
            int32_t *l_145[9][6][4] = {{{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116}},{{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116}},{{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116}},{{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116}},{{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116}},{{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116}},{{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116}},{{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116}},{{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116},{&p_1221->g_53,&p_1221->g_53,&p_1221->g_53,&p_1221->g_116}}};
            int i, j, k;
            l_145[6][2][0] = l_144[6][0];
        }
        else
        { /* block id: 35 */
            uint64_t l_146 = 0x028E1C9646ABAFA4L;
            uint32_t *l_158 = (void*)0;
            uint32_t **l_157 = &l_158;
            uint8_t *l_171 = &p_1221->g_135;
            if ((0xCD90L > l_146))
            { /* block id: 36 */
                uint32_t *l_154 = &l_131[2];
                int32_t l_156[4] = {1L,1L,1L,1L};
                int16_t *l_159 = &p_1221->g_160;
                int16_t *l_161 = (void*)0;
                int16_t *l_162 = &p_1221->g_163[3];
                uint8_t *l_172 = (void*)0;
                int64_t *l_174 = (void*)0;
                int64_t *l_175 = (void*)0;
                int64_t *l_176 = (void*)0;
                int64_t *l_177 = (void*)0;
                int64_t *l_178 = (void*)0;
                int64_t *l_179 = (void*)0;
                int64_t *l_180[2];
                int32_t l_182 = 1L;
                int i;
                for (i = 0; i < 2; i++)
                    l_180[i] = (void*)0;
                l_144[0][8] = (((VECTOR(uint16_t, 16))((4294967292UL < (p_1221->g_5.s3 , (((*l_162) = (l_156[2] = (safe_add_func_uint32_t_u_u((FAKE_DIVERGE(p_1221->local_0_offset, get_local_id(0), 10) < ((((((safe_mul_func_int16_t_s_s(((safe_div_func_int32_t_s_s(((((VECTOR(uint32_t, 8))(l_153.xxyxyyyy)).s7 , l_154) == (void*)0), ((VECTOR(uint32_t, 8))(p_1221->g_155.s00274674)).s1)) | ((0x8373L < ((*l_159) = ((l_156[2] , p_1221->g_136) != l_157))) >= (p_103 & 0UL))), p_103)) == (*l_115)) >= l_156[1]) <= l_156[0]) || l_156[2]) , p_103)), 0x199123B7L)))) & 0x56A2L))), 0x60F3L, 65532UL, 0UL, 5UL, ((VECTOR(uint16_t, 2))(65535UL)), ((VECTOR(uint16_t, 4))(5UL)), 0x2672L, ((VECTOR(uint16_t, 2))(0x9EEBL)), 0xCF4EL, 0x9EFAL)).s1 , &l_156[2]);
                l_182 |= (p_1221->g_181 ^= (safe_add_func_int64_t_s_s(((l_156[2] <= 0x2FFF8CD5L) , p_1221->g_160), (0x57DA9072AC36249AL <= (safe_rshift_func_uint16_t_u_s((((-4L) && (0xAC7F9B73E17168C3L && ((*l_115) = (l_170 , ((((l_171 != l_172) ^ p_1221->g_135) , l_173) != l_173))))) >= l_146), p_1221->g_163[3]))))));
            }
            else
            { /* block id: 44 */
                int64_t l_185 = 8L;
                for (p_1221->g_68 = 0; (p_1221->g_68 >= 8); p_1221->g_68 = safe_add_func_int64_t_s_s(p_1221->g_68, 3))
                { /* block id: 47 */
                    if (p_103)
                        break;
                }
                (*l_115) = l_185;
                p_1221->g_116 = (l_186 = p_103);
            }
            if ((atomic_inc(&p_1221->l_atomic_input[57]) == 5))
            { /* block id: 55 */
                uint16_t l_187 = 1UL;
                int32_t l_190 = (-5L);
                ++l_187;
                l_190 = 0x72811500L;
                unsigned int result = 0;
                result += l_187;
                result += l_190;
                atomic_add(&p_1221->l_special_values[57], result);
            }
            else
            { /* block id: 58 */
                (1 + 1);
            }
        }
        for (p_1221->g_181 = 27; (p_1221->g_181 == 47); p_1221->g_181 = safe_add_func_uint64_t_u_u(p_1221->g_181, 9))
        { /* block id: 64 */
            uint8_t l_201 = 253UL;
            for (l_170.f0 = (-27); (l_170.f0 == 19); ++l_170.f0)
            { /* block id: 67 */
                uint32_t *l_205 = (void*)0;
                uint32_t **l_204[5] = {&l_205,&l_205,&l_205,&l_205,&l_205};
                int32_t l_215 = 0x5D348384L;
                int i;
                (*l_115) = (safe_lshift_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s(l_201, 8)), 3)) > ((~((safe_sub_func_uint16_t_u_u(GROUP_DIVERGE(2, 1), p_103)) , p_103)) != (((l_206 = p_104) != &p_1221->g_50) | (safe_add_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(p_1221->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1221->tid, 6))], 0x4FL)), (safe_lshift_func_int16_t_s_s(l_215, (p_1221->g_155.s4 && 18446744073709551615UL))))) || p_1221->g_163[3]), l_215))))), p_103));
            }
            for (l_129.f1 = 4; (l_129.f1 != 39); l_129.f1 = safe_add_func_uint16_t_u_u(l_129.f1, 8))
            { /* block id: 73 */
                uint64_t *l_219 = (void*)0;
                uint64_t **l_218 = &l_219;
                return p_1221->g_220[3];
            }
        }
    }
    for (p_103 = 0; (p_103 == 40); p_103++)
    { /* block id: 80 */
        int16_t l_230 = 0x3184L;
        for (p_1221->g_181 = 6; (p_1221->g_181 < 17); p_1221->g_181 = safe_add_func_int64_t_s_s(p_1221->g_181, 2))
        { /* block id: 83 */
            if (p_103)
                break;
        }
        (*l_115) = (safe_lshift_func_uint8_t_u_u((((*l_115) & p_1221->g_122.y) , (safe_div_func_uint8_t_u_u(l_230, 0x7AL))), 3));
    }
    return &p_1221->g_221;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_input[83];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 83; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[83];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 83; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[6];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 6; i++)
            l_comm_values[i] = 1;
    struct S1 c_1222;
    struct S1* p_1221 = &c_1222;
    struct S1 c_1223 = {
        (VECTOR(uint64_t, 16))(0x5DEC4F3F7E813A3DL, (VECTOR(uint64_t, 4))(0x5DEC4F3F7E813A3DL, (VECTOR(uint64_t, 2))(0x5DEC4F3F7E813A3DL, 0x56E700D62E65251CL), 0x56E700D62E65251CL), 0x56E700D62E65251CL, 0x5DEC4F3F7E813A3DL, 0x56E700D62E65251CL, (VECTOR(uint64_t, 2))(0x5DEC4F3F7E813A3DL, 0x56E700D62E65251CL), (VECTOR(uint64_t, 2))(0x5DEC4F3F7E813A3DL, 0x56E700D62E65251CL), 0x5DEC4F3F7E813A3DL, 0x56E700D62E65251CL, 0x5DEC4F3F7E813A3DL, 0x56E700D62E65251CL), // p_1221->g_5
        18446744073709551615UL, // p_1221->g_7
        (VECTOR(int16_t, 8))(0x7F44L, (VECTOR(int16_t, 4))(0x7F44L, (VECTOR(int16_t, 2))(0x7F44L, 0L), 0L), 0L, 0x7F44L, 0L), // p_1221->g_9
        (VECTOR(uint16_t, 16))(0x7D41L, (VECTOR(uint16_t, 4))(0x7D41L, (VECTOR(uint16_t, 2))(0x7D41L, 0x53BFL), 0x53BFL), 0x53BFL, 0x7D41L, 0x53BFL, (VECTOR(uint16_t, 2))(0x7D41L, 0x53BFL), (VECTOR(uint16_t, 2))(0x7D41L, 0x53BFL), 0x7D41L, 0x53BFL, 0x7D41L, 0x53BFL), // p_1221->g_11
        5UL, // p_1221->g_50
        0x1521F00BL, // p_1221->g_53
        0xAEBCL, // p_1221->g_63
        65535UL, // p_1221->g_68
        {&p_1221->g_68,(void*)0,&p_1221->g_68,&p_1221->g_68,(void*)0,&p_1221->g_68,&p_1221->g_68}, // p_1221->g_67
        0x3B87E338L, // p_1221->g_70
        {4294967295UL}, // p_1221->g_75
        0xC96F5CA2L, // p_1221->g_80
        (void*)0, // p_1221->g_89
        0xC383C403L, // p_1221->g_97
        0x48A0849DL, // p_1221->g_116
        (VECTOR(uint32_t, 4))(0x83F91D89L, (VECTOR(uint32_t, 2))(0x83F91D89L, 4294967289UL), 4294967289UL), // p_1221->g_122
        {3UL}, // p_1221->g_130
        0UL, // p_1221->g_135
        (void*)0, // p_1221->g_137
        &p_1221->g_137, // p_1221->g_136
        {0x745E92913E687FAFL,0x745E92913E687FAFL,0x745E92913E687FAFL,0x745E92913E687FAFL,0x745E92913E687FAFL,0x745E92913E687FAFL,0x745E92913E687FAFL,0x745E92913E687FAFL,0x745E92913E687FAFL,0x745E92913E687FAFL}, // p_1221->g_143
        {&p_1221->g_143[6],&p_1221->g_143[6],&p_1221->g_143[6],&p_1221->g_143[6],&p_1221->g_143[6],&p_1221->g_143[6],&p_1221->g_143[6],&p_1221->g_143[6]}, // p_1221->g_142
        &p_1221->g_142[1], // p_1221->g_141
        (VECTOR(uint32_t, 8))(0xEC8F53D4L, (VECTOR(uint32_t, 4))(0xEC8F53D4L, (VECTOR(uint32_t, 2))(0xEC8F53D4L, 7UL), 7UL), 7UL, 0xEC8F53D4L, 7UL), // p_1221->g_155
        0x7B46L, // p_1221->g_160
        {0x61DCL,0x61DCL,0x61DCL,0x61DCL,0x61DCL,0x61DCL,0x61DCL,0x61DCL,0x61DCL}, // p_1221->g_163
        0x5212L, // p_1221->g_181
        &p_1221->g_7, // p_1221->g_221
        {&p_1221->g_221,&p_1221->g_221,&p_1221->g_221,&p_1221->g_221,&p_1221->g_221,&p_1221->g_221,&p_1221->g_221,&p_1221->g_221,&p_1221->g_221}, // p_1221->g_220
        (VECTOR(int8_t, 4))(0x41L, (VECTOR(int8_t, 2))(0x41L, 8L), 8L), // p_1221->g_236
        (VECTOR(int8_t, 16))((-3L), (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), (-10L)), (-10L)), (-10L), (-3L), (-10L), (VECTOR(int8_t, 2))((-3L), (-10L)), (VECTOR(int8_t, 2))((-3L), (-10L)), (-3L), (-10L), (-3L), (-10L)), // p_1221->g_237
        0x661FE242L, // p_1221->g_242
        (void*)0, // p_1221->g_249
        (VECTOR(uint64_t, 16))(0xA0E98675463EB591L, (VECTOR(uint64_t, 4))(0xA0E98675463EB591L, (VECTOR(uint64_t, 2))(0xA0E98675463EB591L, 0x1CC9719984EDDFC6L), 0x1CC9719984EDDFC6L), 0x1CC9719984EDDFC6L, 0xA0E98675463EB591L, 0x1CC9719984EDDFC6L, (VECTOR(uint64_t, 2))(0xA0E98675463EB591L, 0x1CC9719984EDDFC6L), (VECTOR(uint64_t, 2))(0xA0E98675463EB591L, 0x1CC9719984EDDFC6L), 0xA0E98675463EB591L, 0x1CC9719984EDDFC6L, 0xA0E98675463EB591L, 0x1CC9719984EDDFC6L), // p_1221->g_256
        (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x49C0721CABDFC57CL), 0x49C0721CABDFC57CL), // p_1221->g_297
        (VECTOR(int64_t, 16))(0x4341456ECF784793L, (VECTOR(int64_t, 4))(0x4341456ECF784793L, (VECTOR(int64_t, 2))(0x4341456ECF784793L, (-4L)), (-4L)), (-4L), 0x4341456ECF784793L, (-4L), (VECTOR(int64_t, 2))(0x4341456ECF784793L, (-4L)), (VECTOR(int64_t, 2))(0x4341456ECF784793L, (-4L)), 0x4341456ECF784793L, (-4L), 0x4341456ECF784793L, (-4L)), // p_1221->g_298
        0x5DDAB37FL, // p_1221->g_299
        (VECTOR(uint8_t, 8))(0xE7L, (VECTOR(uint8_t, 4))(0xE7L, (VECTOR(uint8_t, 2))(0xE7L, 0x0BL), 0x0BL), 0x0BL, 0xE7L, 0x0BL), // p_1221->g_308
        (-1L), // p_1221->g_327
        4294967287UL, // p_1221->g_328
        (void*)0, // p_1221->g_339
        &p_1221->g_339, // p_1221->g_338
        0x691B390526F34422L, // p_1221->g_348
        6L, // p_1221->g_349
        (-1L), // p_1221->g_352
        (VECTOR(int64_t, 2))(0x5AEDDC266FC46F5DL, 0x0210185259C5DC8DL), // p_1221->g_353
        2UL, // p_1221->g_358
        &p_1221->g_328, // p_1221->g_375
        &p_1221->g_375, // p_1221->g_374
        (VECTOR(int32_t, 16))(0x5F3929C4L, (VECTOR(int32_t, 4))(0x5F3929C4L, (VECTOR(int32_t, 2))(0x5F3929C4L, 0x5CC85A0CL), 0x5CC85A0CL), 0x5CC85A0CL, 0x5F3929C4L, 0x5CC85A0CL, (VECTOR(int32_t, 2))(0x5F3929C4L, 0x5CC85A0CL), (VECTOR(int32_t, 2))(0x5F3929C4L, 0x5CC85A0CL), 0x5F3929C4L, 0x5CC85A0CL, 0x5F3929C4L, 0x5CC85A0CL), // p_1221->g_493
        0xFCDDD6CE07A3EC4BL, // p_1221->g_495
        (VECTOR(int64_t, 2))(0L, 1L), // p_1221->g_510
        (VECTOR(int32_t, 4))(0x4EE184CCL, (VECTOR(int32_t, 2))(0x4EE184CCL, (-10L)), (-10L)), // p_1221->g_569
        (VECTOR(int64_t, 4))(0x7FE1232D19A8E6B4L, (VECTOR(int64_t, 2))(0x7FE1232D19A8E6B4L, 1L), 1L), // p_1221->g_573
        (VECTOR(uint64_t, 2))(0x9BA6312DA6C16757L, 0x6913AAC5E7524901L), // p_1221->g_576
        0xE54C8AF7L, // p_1221->g_639
        0x6A727B42L, // p_1221->g_680
        (VECTOR(uint8_t, 16))(249UL, (VECTOR(uint8_t, 4))(249UL, (VECTOR(uint8_t, 2))(249UL, 1UL), 1UL), 1UL, 249UL, 1UL, (VECTOR(uint8_t, 2))(249UL, 1UL), (VECTOR(uint8_t, 2))(249UL, 1UL), 249UL, 1UL, 249UL, 1UL), // p_1221->g_709
        (VECTOR(uint8_t, 2))(4UL, 255UL), // p_1221->g_711
        (VECTOR(uint8_t, 8))(0x3FL, (VECTOR(uint8_t, 4))(0x3FL, (VECTOR(uint8_t, 2))(0x3FL, 0x97L), 0x97L), 0x97L, 0x3FL, 0x97L), // p_1221->g_712
        (VECTOR(int8_t, 16))(0x6AL, (VECTOR(int8_t, 4))(0x6AL, (VECTOR(int8_t, 2))(0x6AL, 0x7CL), 0x7CL), 0x7CL, 0x6AL, 0x7CL, (VECTOR(int8_t, 2))(0x6AL, 0x7CL), (VECTOR(int8_t, 2))(0x6AL, 0x7CL), 0x6AL, 0x7CL, 0x6AL, 0x7CL), // p_1221->g_715
        (VECTOR(int8_t, 2))((-6L), 0x5BL), // p_1221->g_716
        (VECTOR(uint16_t, 8))(0x7E98L, (VECTOR(uint16_t, 4))(0x7E98L, (VECTOR(uint16_t, 2))(0x7E98L, 0x39B3L), 0x39B3L), 0x39B3L, 0x7E98L, 0x39B3L), // p_1221->g_734
        &p_1221->g_495, // p_1221->g_782
        {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}, // p_1221->g_808
        {&p_1221->g_808[3][0],&p_1221->g_808[3][0],&p_1221->g_808[3][0],&p_1221->g_808[3][0],&p_1221->g_808[3][0],&p_1221->g_808[3][0],&p_1221->g_808[3][0],&p_1221->g_808[3][0],&p_1221->g_808[3][0]}, // p_1221->g_807
        &p_1221->g_807[8], // p_1221->g_806
        (VECTOR(int16_t, 2))(0x0018L, (-9L)), // p_1221->g_835
        (VECTOR(uint64_t, 8))(0x244C73D2EE1DBA31L, (VECTOR(uint64_t, 4))(0x244C73D2EE1DBA31L, (VECTOR(uint64_t, 2))(0x244C73D2EE1DBA31L, 0UL), 0UL), 0UL, 0x244C73D2EE1DBA31L, 0UL), // p_1221->g_897
        0x6D88F730C17F64D3L, // p_1221->g_898
        &p_1221->g_898, // p_1221->g_896
        &p_1221->g_896, // p_1221->g_895
        (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0L), 0L), 0L, 0L, 0L), // p_1221->g_968
        (VECTOR(int8_t, 4))(0x36L, (VECTOR(int8_t, 2))(0x36L, 0L), 0L), // p_1221->g_969
        (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 5UL), 5UL), // p_1221->g_970
        (void*)0, // p_1221->g_974
        (VECTOR(int32_t, 16))(0x6D7BD940L, (VECTOR(int32_t, 4))(0x6D7BD940L, (VECTOR(int32_t, 2))(0x6D7BD940L, 0x6A4F84ECL), 0x6A4F84ECL), 0x6A4F84ECL, 0x6D7BD940L, 0x6A4F84ECL, (VECTOR(int32_t, 2))(0x6D7BD940L, 0x6A4F84ECL), (VECTOR(int32_t, 2))(0x6D7BD940L, 0x6A4F84ECL), 0x6D7BD940L, 0x6A4F84ECL, 0x6D7BD940L, 0x6A4F84ECL), // p_1221->g_981
        (VECTOR(int64_t, 2))(0x7671E3EB19B5E204L, 0x11607DEA72F4D863L), // p_1221->g_1015
        (VECTOR(int64_t, 8))(0x1E99F8BD3AEAEEE8L, (VECTOR(int64_t, 4))(0x1E99F8BD3AEAEEE8L, (VECTOR(int64_t, 2))(0x1E99F8BD3AEAEEE8L, 0x5ED01C4A41C25AD6L), 0x5ED01C4A41C25AD6L), 0x5ED01C4A41C25AD6L, 0x1E99F8BD3AEAEEE8L, 0x5ED01C4A41C25AD6L), // p_1221->g_1018
        (VECTOR(int64_t, 16))(0x1BAFA51B6E931F4EL, (VECTOR(int64_t, 4))(0x1BAFA51B6E931F4EL, (VECTOR(int64_t, 2))(0x1BAFA51B6E931F4EL, 0L), 0L), 0L, 0x1BAFA51B6E931F4EL, 0L, (VECTOR(int64_t, 2))(0x1BAFA51B6E931F4EL, 0L), (VECTOR(int64_t, 2))(0x1BAFA51B6E931F4EL, 0L), 0x1BAFA51B6E931F4EL, 0L, 0x1BAFA51B6E931F4EL, 0L), // p_1221->g_1019
        0x24D9703A18BC1051L, // p_1221->g_1049
        (VECTOR(uint16_t, 16))(0x566BL, (VECTOR(uint16_t, 4))(0x566BL, (VECTOR(uint16_t, 2))(0x566BL, 65526UL), 65526UL), 65526UL, 0x566BL, 65526UL, (VECTOR(uint16_t, 2))(0x566BL, 65526UL), (VECTOR(uint16_t, 2))(0x566BL, 65526UL), 0x566BL, 65526UL, 0x566BL, 65526UL), // p_1221->g_1088
        0xBBA31378L, // p_1221->g_1095
        (VECTOR(uint64_t, 8))(0xAA8F92F8CE5DDAFEL, (VECTOR(uint64_t, 4))(0xAA8F92F8CE5DDAFEL, (VECTOR(uint64_t, 2))(0xAA8F92F8CE5DDAFEL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0xAA8F92F8CE5DDAFEL, 18446744073709551615UL), // p_1221->g_1128
        (VECTOR(uint64_t, 2))(0x58B8BE6ACD6ED68FL, 0UL), // p_1221->g_1129
        &p_1221->g_89, // p_1221->g_1148
        (VECTOR(int16_t, 4))(0x23DAL, (VECTOR(int16_t, 2))(0x23DAL, 0x58C4L), 0x58C4L), // p_1221->g_1171
        (VECTOR(int16_t, 16))((-2L), (VECTOR(int16_t, 4))((-2L), (VECTOR(int16_t, 2))((-2L), 1L), 1L), 1L, (-2L), 1L, (VECTOR(int16_t, 2))((-2L), 1L), (VECTOR(int16_t, 2))((-2L), 1L), (-2L), 1L, (-2L), 1L), // p_1221->g_1172
        0x6A11L, // p_1221->g_1210
        &p_1221->g_1210, // p_1221->g_1209
        &p_1221->g_1209, // p_1221->g_1208
        &p_1221->g_163[5], // p_1221->g_1214
        &p_1221->g_1214, // p_1221->g_1213
        0, // p_1221->v_collective
        sequence_input[get_global_id(0)], // p_1221->global_0_offset
        sequence_input[get_global_id(1)], // p_1221->global_1_offset
        sequence_input[get_global_id(2)], // p_1221->global_2_offset
        sequence_input[get_local_id(0)], // p_1221->local_0_offset
        sequence_input[get_local_id(1)], // p_1221->local_1_offset
        sequence_input[get_local_id(2)], // p_1221->local_2_offset
        sequence_input[get_group_id(0)], // p_1221->group_0_offset
        sequence_input[get_group_id(1)], // p_1221->group_1_offset
        sequence_input[get_group_id(2)], // p_1221->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 6)), permutations[0][get_linear_local_id()])), // p_1221->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1222 = c_1223;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1221);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1221->g_5.s0, "p_1221->g_5.s0", print_hash_value);
    transparent_crc(p_1221->g_5.s1, "p_1221->g_5.s1", print_hash_value);
    transparent_crc(p_1221->g_5.s2, "p_1221->g_5.s2", print_hash_value);
    transparent_crc(p_1221->g_5.s3, "p_1221->g_5.s3", print_hash_value);
    transparent_crc(p_1221->g_5.s4, "p_1221->g_5.s4", print_hash_value);
    transparent_crc(p_1221->g_5.s5, "p_1221->g_5.s5", print_hash_value);
    transparent_crc(p_1221->g_5.s6, "p_1221->g_5.s6", print_hash_value);
    transparent_crc(p_1221->g_5.s7, "p_1221->g_5.s7", print_hash_value);
    transparent_crc(p_1221->g_5.s8, "p_1221->g_5.s8", print_hash_value);
    transparent_crc(p_1221->g_5.s9, "p_1221->g_5.s9", print_hash_value);
    transparent_crc(p_1221->g_5.sa, "p_1221->g_5.sa", print_hash_value);
    transparent_crc(p_1221->g_5.sb, "p_1221->g_5.sb", print_hash_value);
    transparent_crc(p_1221->g_5.sc, "p_1221->g_5.sc", print_hash_value);
    transparent_crc(p_1221->g_5.sd, "p_1221->g_5.sd", print_hash_value);
    transparent_crc(p_1221->g_5.se, "p_1221->g_5.se", print_hash_value);
    transparent_crc(p_1221->g_5.sf, "p_1221->g_5.sf", print_hash_value);
    transparent_crc(p_1221->g_7, "p_1221->g_7", print_hash_value);
    transparent_crc(p_1221->g_9.s0, "p_1221->g_9.s0", print_hash_value);
    transparent_crc(p_1221->g_9.s1, "p_1221->g_9.s1", print_hash_value);
    transparent_crc(p_1221->g_9.s2, "p_1221->g_9.s2", print_hash_value);
    transparent_crc(p_1221->g_9.s3, "p_1221->g_9.s3", print_hash_value);
    transparent_crc(p_1221->g_9.s4, "p_1221->g_9.s4", print_hash_value);
    transparent_crc(p_1221->g_9.s5, "p_1221->g_9.s5", print_hash_value);
    transparent_crc(p_1221->g_9.s6, "p_1221->g_9.s6", print_hash_value);
    transparent_crc(p_1221->g_9.s7, "p_1221->g_9.s7", print_hash_value);
    transparent_crc(p_1221->g_11.s0, "p_1221->g_11.s0", print_hash_value);
    transparent_crc(p_1221->g_11.s1, "p_1221->g_11.s1", print_hash_value);
    transparent_crc(p_1221->g_11.s2, "p_1221->g_11.s2", print_hash_value);
    transparent_crc(p_1221->g_11.s3, "p_1221->g_11.s3", print_hash_value);
    transparent_crc(p_1221->g_11.s4, "p_1221->g_11.s4", print_hash_value);
    transparent_crc(p_1221->g_11.s5, "p_1221->g_11.s5", print_hash_value);
    transparent_crc(p_1221->g_11.s6, "p_1221->g_11.s6", print_hash_value);
    transparent_crc(p_1221->g_11.s7, "p_1221->g_11.s7", print_hash_value);
    transparent_crc(p_1221->g_11.s8, "p_1221->g_11.s8", print_hash_value);
    transparent_crc(p_1221->g_11.s9, "p_1221->g_11.s9", print_hash_value);
    transparent_crc(p_1221->g_11.sa, "p_1221->g_11.sa", print_hash_value);
    transparent_crc(p_1221->g_11.sb, "p_1221->g_11.sb", print_hash_value);
    transparent_crc(p_1221->g_11.sc, "p_1221->g_11.sc", print_hash_value);
    transparent_crc(p_1221->g_11.sd, "p_1221->g_11.sd", print_hash_value);
    transparent_crc(p_1221->g_11.se, "p_1221->g_11.se", print_hash_value);
    transparent_crc(p_1221->g_11.sf, "p_1221->g_11.sf", print_hash_value);
    transparent_crc(p_1221->g_50, "p_1221->g_50", print_hash_value);
    transparent_crc(p_1221->g_53, "p_1221->g_53", print_hash_value);
    transparent_crc(p_1221->g_63, "p_1221->g_63", print_hash_value);
    transparent_crc(p_1221->g_68, "p_1221->g_68", print_hash_value);
    transparent_crc(p_1221->g_70, "p_1221->g_70", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1221->g_75[i], "p_1221->g_75[i]", print_hash_value);

    }
    transparent_crc(p_1221->g_80, "p_1221->g_80", print_hash_value);
    transparent_crc(p_1221->g_97, "p_1221->g_97", print_hash_value);
    transparent_crc(p_1221->g_116, "p_1221->g_116", print_hash_value);
    transparent_crc(p_1221->g_122.x, "p_1221->g_122.x", print_hash_value);
    transparent_crc(p_1221->g_122.y, "p_1221->g_122.y", print_hash_value);
    transparent_crc(p_1221->g_122.z, "p_1221->g_122.z", print_hash_value);
    transparent_crc(p_1221->g_122.w, "p_1221->g_122.w", print_hash_value);
    transparent_crc(p_1221->g_135, "p_1221->g_135", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1221->g_143[i], "p_1221->g_143[i]", print_hash_value);

    }
    transparent_crc(p_1221->g_155.s0, "p_1221->g_155.s0", print_hash_value);
    transparent_crc(p_1221->g_155.s1, "p_1221->g_155.s1", print_hash_value);
    transparent_crc(p_1221->g_155.s2, "p_1221->g_155.s2", print_hash_value);
    transparent_crc(p_1221->g_155.s3, "p_1221->g_155.s3", print_hash_value);
    transparent_crc(p_1221->g_155.s4, "p_1221->g_155.s4", print_hash_value);
    transparent_crc(p_1221->g_155.s5, "p_1221->g_155.s5", print_hash_value);
    transparent_crc(p_1221->g_155.s6, "p_1221->g_155.s6", print_hash_value);
    transparent_crc(p_1221->g_155.s7, "p_1221->g_155.s7", print_hash_value);
    transparent_crc(p_1221->g_160, "p_1221->g_160", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1221->g_163[i], "p_1221->g_163[i]", print_hash_value);

    }
    transparent_crc(p_1221->g_181, "p_1221->g_181", print_hash_value);
    transparent_crc(p_1221->g_236.x, "p_1221->g_236.x", print_hash_value);
    transparent_crc(p_1221->g_236.y, "p_1221->g_236.y", print_hash_value);
    transparent_crc(p_1221->g_236.z, "p_1221->g_236.z", print_hash_value);
    transparent_crc(p_1221->g_236.w, "p_1221->g_236.w", print_hash_value);
    transparent_crc(p_1221->g_237.s0, "p_1221->g_237.s0", print_hash_value);
    transparent_crc(p_1221->g_237.s1, "p_1221->g_237.s1", print_hash_value);
    transparent_crc(p_1221->g_237.s2, "p_1221->g_237.s2", print_hash_value);
    transparent_crc(p_1221->g_237.s3, "p_1221->g_237.s3", print_hash_value);
    transparent_crc(p_1221->g_237.s4, "p_1221->g_237.s4", print_hash_value);
    transparent_crc(p_1221->g_237.s5, "p_1221->g_237.s5", print_hash_value);
    transparent_crc(p_1221->g_237.s6, "p_1221->g_237.s6", print_hash_value);
    transparent_crc(p_1221->g_237.s7, "p_1221->g_237.s7", print_hash_value);
    transparent_crc(p_1221->g_237.s8, "p_1221->g_237.s8", print_hash_value);
    transparent_crc(p_1221->g_237.s9, "p_1221->g_237.s9", print_hash_value);
    transparent_crc(p_1221->g_237.sa, "p_1221->g_237.sa", print_hash_value);
    transparent_crc(p_1221->g_237.sb, "p_1221->g_237.sb", print_hash_value);
    transparent_crc(p_1221->g_237.sc, "p_1221->g_237.sc", print_hash_value);
    transparent_crc(p_1221->g_237.sd, "p_1221->g_237.sd", print_hash_value);
    transparent_crc(p_1221->g_237.se, "p_1221->g_237.se", print_hash_value);
    transparent_crc(p_1221->g_237.sf, "p_1221->g_237.sf", print_hash_value);
    transparent_crc(p_1221->g_242, "p_1221->g_242", print_hash_value);
    transparent_crc(p_1221->g_256.s0, "p_1221->g_256.s0", print_hash_value);
    transparent_crc(p_1221->g_256.s1, "p_1221->g_256.s1", print_hash_value);
    transparent_crc(p_1221->g_256.s2, "p_1221->g_256.s2", print_hash_value);
    transparent_crc(p_1221->g_256.s3, "p_1221->g_256.s3", print_hash_value);
    transparent_crc(p_1221->g_256.s4, "p_1221->g_256.s4", print_hash_value);
    transparent_crc(p_1221->g_256.s5, "p_1221->g_256.s5", print_hash_value);
    transparent_crc(p_1221->g_256.s6, "p_1221->g_256.s6", print_hash_value);
    transparent_crc(p_1221->g_256.s7, "p_1221->g_256.s7", print_hash_value);
    transparent_crc(p_1221->g_256.s8, "p_1221->g_256.s8", print_hash_value);
    transparent_crc(p_1221->g_256.s9, "p_1221->g_256.s9", print_hash_value);
    transparent_crc(p_1221->g_256.sa, "p_1221->g_256.sa", print_hash_value);
    transparent_crc(p_1221->g_256.sb, "p_1221->g_256.sb", print_hash_value);
    transparent_crc(p_1221->g_256.sc, "p_1221->g_256.sc", print_hash_value);
    transparent_crc(p_1221->g_256.sd, "p_1221->g_256.sd", print_hash_value);
    transparent_crc(p_1221->g_256.se, "p_1221->g_256.se", print_hash_value);
    transparent_crc(p_1221->g_256.sf, "p_1221->g_256.sf", print_hash_value);
    transparent_crc(p_1221->g_297.x, "p_1221->g_297.x", print_hash_value);
    transparent_crc(p_1221->g_297.y, "p_1221->g_297.y", print_hash_value);
    transparent_crc(p_1221->g_297.z, "p_1221->g_297.z", print_hash_value);
    transparent_crc(p_1221->g_297.w, "p_1221->g_297.w", print_hash_value);
    transparent_crc(p_1221->g_298.s0, "p_1221->g_298.s0", print_hash_value);
    transparent_crc(p_1221->g_298.s1, "p_1221->g_298.s1", print_hash_value);
    transparent_crc(p_1221->g_298.s2, "p_1221->g_298.s2", print_hash_value);
    transparent_crc(p_1221->g_298.s3, "p_1221->g_298.s3", print_hash_value);
    transparent_crc(p_1221->g_298.s4, "p_1221->g_298.s4", print_hash_value);
    transparent_crc(p_1221->g_298.s5, "p_1221->g_298.s5", print_hash_value);
    transparent_crc(p_1221->g_298.s6, "p_1221->g_298.s6", print_hash_value);
    transparent_crc(p_1221->g_298.s7, "p_1221->g_298.s7", print_hash_value);
    transparent_crc(p_1221->g_298.s8, "p_1221->g_298.s8", print_hash_value);
    transparent_crc(p_1221->g_298.s9, "p_1221->g_298.s9", print_hash_value);
    transparent_crc(p_1221->g_298.sa, "p_1221->g_298.sa", print_hash_value);
    transparent_crc(p_1221->g_298.sb, "p_1221->g_298.sb", print_hash_value);
    transparent_crc(p_1221->g_298.sc, "p_1221->g_298.sc", print_hash_value);
    transparent_crc(p_1221->g_298.sd, "p_1221->g_298.sd", print_hash_value);
    transparent_crc(p_1221->g_298.se, "p_1221->g_298.se", print_hash_value);
    transparent_crc(p_1221->g_298.sf, "p_1221->g_298.sf", print_hash_value);
    transparent_crc(p_1221->g_299, "p_1221->g_299", print_hash_value);
    transparent_crc(p_1221->g_308.s0, "p_1221->g_308.s0", print_hash_value);
    transparent_crc(p_1221->g_308.s1, "p_1221->g_308.s1", print_hash_value);
    transparent_crc(p_1221->g_308.s2, "p_1221->g_308.s2", print_hash_value);
    transparent_crc(p_1221->g_308.s3, "p_1221->g_308.s3", print_hash_value);
    transparent_crc(p_1221->g_308.s4, "p_1221->g_308.s4", print_hash_value);
    transparent_crc(p_1221->g_308.s5, "p_1221->g_308.s5", print_hash_value);
    transparent_crc(p_1221->g_308.s6, "p_1221->g_308.s6", print_hash_value);
    transparent_crc(p_1221->g_308.s7, "p_1221->g_308.s7", print_hash_value);
    transparent_crc(p_1221->g_327, "p_1221->g_327", print_hash_value);
    transparent_crc(p_1221->g_328, "p_1221->g_328", print_hash_value);
    transparent_crc(p_1221->g_348, "p_1221->g_348", print_hash_value);
    transparent_crc(p_1221->g_349, "p_1221->g_349", print_hash_value);
    transparent_crc(p_1221->g_352, "p_1221->g_352", print_hash_value);
    transparent_crc(p_1221->g_353.x, "p_1221->g_353.x", print_hash_value);
    transparent_crc(p_1221->g_353.y, "p_1221->g_353.y", print_hash_value);
    transparent_crc(p_1221->g_358, "p_1221->g_358", print_hash_value);
    transparent_crc(p_1221->g_493.s0, "p_1221->g_493.s0", print_hash_value);
    transparent_crc(p_1221->g_493.s1, "p_1221->g_493.s1", print_hash_value);
    transparent_crc(p_1221->g_493.s2, "p_1221->g_493.s2", print_hash_value);
    transparent_crc(p_1221->g_493.s3, "p_1221->g_493.s3", print_hash_value);
    transparent_crc(p_1221->g_493.s4, "p_1221->g_493.s4", print_hash_value);
    transparent_crc(p_1221->g_493.s5, "p_1221->g_493.s5", print_hash_value);
    transparent_crc(p_1221->g_493.s6, "p_1221->g_493.s6", print_hash_value);
    transparent_crc(p_1221->g_493.s7, "p_1221->g_493.s7", print_hash_value);
    transparent_crc(p_1221->g_493.s8, "p_1221->g_493.s8", print_hash_value);
    transparent_crc(p_1221->g_493.s9, "p_1221->g_493.s9", print_hash_value);
    transparent_crc(p_1221->g_493.sa, "p_1221->g_493.sa", print_hash_value);
    transparent_crc(p_1221->g_493.sb, "p_1221->g_493.sb", print_hash_value);
    transparent_crc(p_1221->g_493.sc, "p_1221->g_493.sc", print_hash_value);
    transparent_crc(p_1221->g_493.sd, "p_1221->g_493.sd", print_hash_value);
    transparent_crc(p_1221->g_493.se, "p_1221->g_493.se", print_hash_value);
    transparent_crc(p_1221->g_493.sf, "p_1221->g_493.sf", print_hash_value);
    transparent_crc(p_1221->g_495, "p_1221->g_495", print_hash_value);
    transparent_crc(p_1221->g_510.x, "p_1221->g_510.x", print_hash_value);
    transparent_crc(p_1221->g_510.y, "p_1221->g_510.y", print_hash_value);
    transparent_crc(p_1221->g_569.x, "p_1221->g_569.x", print_hash_value);
    transparent_crc(p_1221->g_569.y, "p_1221->g_569.y", print_hash_value);
    transparent_crc(p_1221->g_569.z, "p_1221->g_569.z", print_hash_value);
    transparent_crc(p_1221->g_569.w, "p_1221->g_569.w", print_hash_value);
    transparent_crc(p_1221->g_573.x, "p_1221->g_573.x", print_hash_value);
    transparent_crc(p_1221->g_573.y, "p_1221->g_573.y", print_hash_value);
    transparent_crc(p_1221->g_573.z, "p_1221->g_573.z", print_hash_value);
    transparent_crc(p_1221->g_573.w, "p_1221->g_573.w", print_hash_value);
    transparent_crc(p_1221->g_576.x, "p_1221->g_576.x", print_hash_value);
    transparent_crc(p_1221->g_576.y, "p_1221->g_576.y", print_hash_value);
    transparent_crc(p_1221->g_639, "p_1221->g_639", print_hash_value);
    transparent_crc(p_1221->g_680, "p_1221->g_680", print_hash_value);
    transparent_crc(p_1221->g_709.s0, "p_1221->g_709.s0", print_hash_value);
    transparent_crc(p_1221->g_709.s1, "p_1221->g_709.s1", print_hash_value);
    transparent_crc(p_1221->g_709.s2, "p_1221->g_709.s2", print_hash_value);
    transparent_crc(p_1221->g_709.s3, "p_1221->g_709.s3", print_hash_value);
    transparent_crc(p_1221->g_709.s4, "p_1221->g_709.s4", print_hash_value);
    transparent_crc(p_1221->g_709.s5, "p_1221->g_709.s5", print_hash_value);
    transparent_crc(p_1221->g_709.s6, "p_1221->g_709.s6", print_hash_value);
    transparent_crc(p_1221->g_709.s7, "p_1221->g_709.s7", print_hash_value);
    transparent_crc(p_1221->g_709.s8, "p_1221->g_709.s8", print_hash_value);
    transparent_crc(p_1221->g_709.s9, "p_1221->g_709.s9", print_hash_value);
    transparent_crc(p_1221->g_709.sa, "p_1221->g_709.sa", print_hash_value);
    transparent_crc(p_1221->g_709.sb, "p_1221->g_709.sb", print_hash_value);
    transparent_crc(p_1221->g_709.sc, "p_1221->g_709.sc", print_hash_value);
    transparent_crc(p_1221->g_709.sd, "p_1221->g_709.sd", print_hash_value);
    transparent_crc(p_1221->g_709.se, "p_1221->g_709.se", print_hash_value);
    transparent_crc(p_1221->g_709.sf, "p_1221->g_709.sf", print_hash_value);
    transparent_crc(p_1221->g_711.x, "p_1221->g_711.x", print_hash_value);
    transparent_crc(p_1221->g_711.y, "p_1221->g_711.y", print_hash_value);
    transparent_crc(p_1221->g_712.s0, "p_1221->g_712.s0", print_hash_value);
    transparent_crc(p_1221->g_712.s1, "p_1221->g_712.s1", print_hash_value);
    transparent_crc(p_1221->g_712.s2, "p_1221->g_712.s2", print_hash_value);
    transparent_crc(p_1221->g_712.s3, "p_1221->g_712.s3", print_hash_value);
    transparent_crc(p_1221->g_712.s4, "p_1221->g_712.s4", print_hash_value);
    transparent_crc(p_1221->g_712.s5, "p_1221->g_712.s5", print_hash_value);
    transparent_crc(p_1221->g_712.s6, "p_1221->g_712.s6", print_hash_value);
    transparent_crc(p_1221->g_712.s7, "p_1221->g_712.s7", print_hash_value);
    transparent_crc(p_1221->g_715.s0, "p_1221->g_715.s0", print_hash_value);
    transparent_crc(p_1221->g_715.s1, "p_1221->g_715.s1", print_hash_value);
    transparent_crc(p_1221->g_715.s2, "p_1221->g_715.s2", print_hash_value);
    transparent_crc(p_1221->g_715.s3, "p_1221->g_715.s3", print_hash_value);
    transparent_crc(p_1221->g_715.s4, "p_1221->g_715.s4", print_hash_value);
    transparent_crc(p_1221->g_715.s5, "p_1221->g_715.s5", print_hash_value);
    transparent_crc(p_1221->g_715.s6, "p_1221->g_715.s6", print_hash_value);
    transparent_crc(p_1221->g_715.s7, "p_1221->g_715.s7", print_hash_value);
    transparent_crc(p_1221->g_715.s8, "p_1221->g_715.s8", print_hash_value);
    transparent_crc(p_1221->g_715.s9, "p_1221->g_715.s9", print_hash_value);
    transparent_crc(p_1221->g_715.sa, "p_1221->g_715.sa", print_hash_value);
    transparent_crc(p_1221->g_715.sb, "p_1221->g_715.sb", print_hash_value);
    transparent_crc(p_1221->g_715.sc, "p_1221->g_715.sc", print_hash_value);
    transparent_crc(p_1221->g_715.sd, "p_1221->g_715.sd", print_hash_value);
    transparent_crc(p_1221->g_715.se, "p_1221->g_715.se", print_hash_value);
    transparent_crc(p_1221->g_715.sf, "p_1221->g_715.sf", print_hash_value);
    transparent_crc(p_1221->g_716.x, "p_1221->g_716.x", print_hash_value);
    transparent_crc(p_1221->g_716.y, "p_1221->g_716.y", print_hash_value);
    transparent_crc(p_1221->g_734.s0, "p_1221->g_734.s0", print_hash_value);
    transparent_crc(p_1221->g_734.s1, "p_1221->g_734.s1", print_hash_value);
    transparent_crc(p_1221->g_734.s2, "p_1221->g_734.s2", print_hash_value);
    transparent_crc(p_1221->g_734.s3, "p_1221->g_734.s3", print_hash_value);
    transparent_crc(p_1221->g_734.s4, "p_1221->g_734.s4", print_hash_value);
    transparent_crc(p_1221->g_734.s5, "p_1221->g_734.s5", print_hash_value);
    transparent_crc(p_1221->g_734.s6, "p_1221->g_734.s6", print_hash_value);
    transparent_crc(p_1221->g_734.s7, "p_1221->g_734.s7", print_hash_value);
    transparent_crc(p_1221->g_835.x, "p_1221->g_835.x", print_hash_value);
    transparent_crc(p_1221->g_835.y, "p_1221->g_835.y", print_hash_value);
    transparent_crc(p_1221->g_897.s0, "p_1221->g_897.s0", print_hash_value);
    transparent_crc(p_1221->g_897.s1, "p_1221->g_897.s1", print_hash_value);
    transparent_crc(p_1221->g_897.s2, "p_1221->g_897.s2", print_hash_value);
    transparent_crc(p_1221->g_897.s3, "p_1221->g_897.s3", print_hash_value);
    transparent_crc(p_1221->g_897.s4, "p_1221->g_897.s4", print_hash_value);
    transparent_crc(p_1221->g_897.s5, "p_1221->g_897.s5", print_hash_value);
    transparent_crc(p_1221->g_897.s6, "p_1221->g_897.s6", print_hash_value);
    transparent_crc(p_1221->g_897.s7, "p_1221->g_897.s7", print_hash_value);
    transparent_crc(p_1221->g_898, "p_1221->g_898", print_hash_value);
    transparent_crc(p_1221->g_968.s0, "p_1221->g_968.s0", print_hash_value);
    transparent_crc(p_1221->g_968.s1, "p_1221->g_968.s1", print_hash_value);
    transparent_crc(p_1221->g_968.s2, "p_1221->g_968.s2", print_hash_value);
    transparent_crc(p_1221->g_968.s3, "p_1221->g_968.s3", print_hash_value);
    transparent_crc(p_1221->g_968.s4, "p_1221->g_968.s4", print_hash_value);
    transparent_crc(p_1221->g_968.s5, "p_1221->g_968.s5", print_hash_value);
    transparent_crc(p_1221->g_968.s6, "p_1221->g_968.s6", print_hash_value);
    transparent_crc(p_1221->g_968.s7, "p_1221->g_968.s7", print_hash_value);
    transparent_crc(p_1221->g_969.x, "p_1221->g_969.x", print_hash_value);
    transparent_crc(p_1221->g_969.y, "p_1221->g_969.y", print_hash_value);
    transparent_crc(p_1221->g_969.z, "p_1221->g_969.z", print_hash_value);
    transparent_crc(p_1221->g_969.w, "p_1221->g_969.w", print_hash_value);
    transparent_crc(p_1221->g_970.x, "p_1221->g_970.x", print_hash_value);
    transparent_crc(p_1221->g_970.y, "p_1221->g_970.y", print_hash_value);
    transparent_crc(p_1221->g_970.z, "p_1221->g_970.z", print_hash_value);
    transparent_crc(p_1221->g_970.w, "p_1221->g_970.w", print_hash_value);
    transparent_crc(p_1221->g_981.s0, "p_1221->g_981.s0", print_hash_value);
    transparent_crc(p_1221->g_981.s1, "p_1221->g_981.s1", print_hash_value);
    transparent_crc(p_1221->g_981.s2, "p_1221->g_981.s2", print_hash_value);
    transparent_crc(p_1221->g_981.s3, "p_1221->g_981.s3", print_hash_value);
    transparent_crc(p_1221->g_981.s4, "p_1221->g_981.s4", print_hash_value);
    transparent_crc(p_1221->g_981.s5, "p_1221->g_981.s5", print_hash_value);
    transparent_crc(p_1221->g_981.s6, "p_1221->g_981.s6", print_hash_value);
    transparent_crc(p_1221->g_981.s7, "p_1221->g_981.s7", print_hash_value);
    transparent_crc(p_1221->g_981.s8, "p_1221->g_981.s8", print_hash_value);
    transparent_crc(p_1221->g_981.s9, "p_1221->g_981.s9", print_hash_value);
    transparent_crc(p_1221->g_981.sa, "p_1221->g_981.sa", print_hash_value);
    transparent_crc(p_1221->g_981.sb, "p_1221->g_981.sb", print_hash_value);
    transparent_crc(p_1221->g_981.sc, "p_1221->g_981.sc", print_hash_value);
    transparent_crc(p_1221->g_981.sd, "p_1221->g_981.sd", print_hash_value);
    transparent_crc(p_1221->g_981.se, "p_1221->g_981.se", print_hash_value);
    transparent_crc(p_1221->g_981.sf, "p_1221->g_981.sf", print_hash_value);
    transparent_crc(p_1221->g_1015.x, "p_1221->g_1015.x", print_hash_value);
    transparent_crc(p_1221->g_1015.y, "p_1221->g_1015.y", print_hash_value);
    transparent_crc(p_1221->g_1018.s0, "p_1221->g_1018.s0", print_hash_value);
    transparent_crc(p_1221->g_1018.s1, "p_1221->g_1018.s1", print_hash_value);
    transparent_crc(p_1221->g_1018.s2, "p_1221->g_1018.s2", print_hash_value);
    transparent_crc(p_1221->g_1018.s3, "p_1221->g_1018.s3", print_hash_value);
    transparent_crc(p_1221->g_1018.s4, "p_1221->g_1018.s4", print_hash_value);
    transparent_crc(p_1221->g_1018.s5, "p_1221->g_1018.s5", print_hash_value);
    transparent_crc(p_1221->g_1018.s6, "p_1221->g_1018.s6", print_hash_value);
    transparent_crc(p_1221->g_1018.s7, "p_1221->g_1018.s7", print_hash_value);
    transparent_crc(p_1221->g_1019.s0, "p_1221->g_1019.s0", print_hash_value);
    transparent_crc(p_1221->g_1019.s1, "p_1221->g_1019.s1", print_hash_value);
    transparent_crc(p_1221->g_1019.s2, "p_1221->g_1019.s2", print_hash_value);
    transparent_crc(p_1221->g_1019.s3, "p_1221->g_1019.s3", print_hash_value);
    transparent_crc(p_1221->g_1019.s4, "p_1221->g_1019.s4", print_hash_value);
    transparent_crc(p_1221->g_1019.s5, "p_1221->g_1019.s5", print_hash_value);
    transparent_crc(p_1221->g_1019.s6, "p_1221->g_1019.s6", print_hash_value);
    transparent_crc(p_1221->g_1019.s7, "p_1221->g_1019.s7", print_hash_value);
    transparent_crc(p_1221->g_1019.s8, "p_1221->g_1019.s8", print_hash_value);
    transparent_crc(p_1221->g_1019.s9, "p_1221->g_1019.s9", print_hash_value);
    transparent_crc(p_1221->g_1019.sa, "p_1221->g_1019.sa", print_hash_value);
    transparent_crc(p_1221->g_1019.sb, "p_1221->g_1019.sb", print_hash_value);
    transparent_crc(p_1221->g_1019.sc, "p_1221->g_1019.sc", print_hash_value);
    transparent_crc(p_1221->g_1019.sd, "p_1221->g_1019.sd", print_hash_value);
    transparent_crc(p_1221->g_1019.se, "p_1221->g_1019.se", print_hash_value);
    transparent_crc(p_1221->g_1019.sf, "p_1221->g_1019.sf", print_hash_value);
    transparent_crc(p_1221->g_1049, "p_1221->g_1049", print_hash_value);
    transparent_crc(p_1221->g_1088.s0, "p_1221->g_1088.s0", print_hash_value);
    transparent_crc(p_1221->g_1088.s1, "p_1221->g_1088.s1", print_hash_value);
    transparent_crc(p_1221->g_1088.s2, "p_1221->g_1088.s2", print_hash_value);
    transparent_crc(p_1221->g_1088.s3, "p_1221->g_1088.s3", print_hash_value);
    transparent_crc(p_1221->g_1088.s4, "p_1221->g_1088.s4", print_hash_value);
    transparent_crc(p_1221->g_1088.s5, "p_1221->g_1088.s5", print_hash_value);
    transparent_crc(p_1221->g_1088.s6, "p_1221->g_1088.s6", print_hash_value);
    transparent_crc(p_1221->g_1088.s7, "p_1221->g_1088.s7", print_hash_value);
    transparent_crc(p_1221->g_1088.s8, "p_1221->g_1088.s8", print_hash_value);
    transparent_crc(p_1221->g_1088.s9, "p_1221->g_1088.s9", print_hash_value);
    transparent_crc(p_1221->g_1088.sa, "p_1221->g_1088.sa", print_hash_value);
    transparent_crc(p_1221->g_1088.sb, "p_1221->g_1088.sb", print_hash_value);
    transparent_crc(p_1221->g_1088.sc, "p_1221->g_1088.sc", print_hash_value);
    transparent_crc(p_1221->g_1088.sd, "p_1221->g_1088.sd", print_hash_value);
    transparent_crc(p_1221->g_1088.se, "p_1221->g_1088.se", print_hash_value);
    transparent_crc(p_1221->g_1088.sf, "p_1221->g_1088.sf", print_hash_value);
    transparent_crc(p_1221->g_1095, "p_1221->g_1095", print_hash_value);
    transparent_crc(p_1221->g_1128.s0, "p_1221->g_1128.s0", print_hash_value);
    transparent_crc(p_1221->g_1128.s1, "p_1221->g_1128.s1", print_hash_value);
    transparent_crc(p_1221->g_1128.s2, "p_1221->g_1128.s2", print_hash_value);
    transparent_crc(p_1221->g_1128.s3, "p_1221->g_1128.s3", print_hash_value);
    transparent_crc(p_1221->g_1128.s4, "p_1221->g_1128.s4", print_hash_value);
    transparent_crc(p_1221->g_1128.s5, "p_1221->g_1128.s5", print_hash_value);
    transparent_crc(p_1221->g_1128.s6, "p_1221->g_1128.s6", print_hash_value);
    transparent_crc(p_1221->g_1128.s7, "p_1221->g_1128.s7", print_hash_value);
    transparent_crc(p_1221->g_1129.x, "p_1221->g_1129.x", print_hash_value);
    transparent_crc(p_1221->g_1129.y, "p_1221->g_1129.y", print_hash_value);
    transparent_crc(p_1221->g_1171.x, "p_1221->g_1171.x", print_hash_value);
    transparent_crc(p_1221->g_1171.y, "p_1221->g_1171.y", print_hash_value);
    transparent_crc(p_1221->g_1171.z, "p_1221->g_1171.z", print_hash_value);
    transparent_crc(p_1221->g_1171.w, "p_1221->g_1171.w", print_hash_value);
    transparent_crc(p_1221->g_1172.s0, "p_1221->g_1172.s0", print_hash_value);
    transparent_crc(p_1221->g_1172.s1, "p_1221->g_1172.s1", print_hash_value);
    transparent_crc(p_1221->g_1172.s2, "p_1221->g_1172.s2", print_hash_value);
    transparent_crc(p_1221->g_1172.s3, "p_1221->g_1172.s3", print_hash_value);
    transparent_crc(p_1221->g_1172.s4, "p_1221->g_1172.s4", print_hash_value);
    transparent_crc(p_1221->g_1172.s5, "p_1221->g_1172.s5", print_hash_value);
    transparent_crc(p_1221->g_1172.s6, "p_1221->g_1172.s6", print_hash_value);
    transparent_crc(p_1221->g_1172.s7, "p_1221->g_1172.s7", print_hash_value);
    transparent_crc(p_1221->g_1172.s8, "p_1221->g_1172.s8", print_hash_value);
    transparent_crc(p_1221->g_1172.s9, "p_1221->g_1172.s9", print_hash_value);
    transparent_crc(p_1221->g_1172.sa, "p_1221->g_1172.sa", print_hash_value);
    transparent_crc(p_1221->g_1172.sb, "p_1221->g_1172.sb", print_hash_value);
    transparent_crc(p_1221->g_1172.sc, "p_1221->g_1172.sc", print_hash_value);
    transparent_crc(p_1221->g_1172.sd, "p_1221->g_1172.sd", print_hash_value);
    transparent_crc(p_1221->g_1172.se, "p_1221->g_1172.se", print_hash_value);
    transparent_crc(p_1221->g_1172.sf, "p_1221->g_1172.sf", print_hash_value);
    transparent_crc(p_1221->g_1210, "p_1221->g_1210", print_hash_value);
    transparent_crc(p_1221->v_collective, "p_1221->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 83; i++)
            transparent_crc(p_1221->l_special_values[i], "p_1221->l_special_values[i]", print_hash_value);
    transparent_crc(p_1221->l_comm_values[get_linear_local_id()], "p_1221->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1221->g_comm_values[get_linear_group_id() * 6 + get_linear_local_id()], "p_1221->g_comm_values[get_linear_group_id() * 6 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
