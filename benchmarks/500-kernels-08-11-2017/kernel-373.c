// --atomics 20 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 92,98,1 -l 1,49,1
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

__constant uint32_t permutations[10][49] = {
{42,0,5,13,16,1,29,15,25,20,35,32,8,26,2,31,33,6,3,30,48,38,45,36,11,43,7,4,46,22,40,10,34,23,18,17,14,21,47,28,19,39,44,12,27,41,37,24,9}, // permutation 0
{14,30,35,44,37,28,22,46,13,39,33,4,47,5,9,38,15,36,21,18,17,1,40,45,34,26,20,24,19,6,32,25,10,29,0,42,43,23,3,48,27,41,12,2,8,7,31,16,11}, // permutation 1
{12,32,22,42,2,6,17,21,8,46,20,27,29,16,11,35,33,40,18,45,43,26,44,36,23,5,13,30,37,7,48,47,14,9,19,34,41,24,31,28,4,25,10,38,15,0,3,1,39}, // permutation 2
{36,45,16,23,24,7,34,8,17,18,5,15,3,26,20,4,32,25,33,46,35,0,43,2,44,13,41,21,6,12,47,22,14,48,39,28,37,1,19,29,38,40,30,11,27,42,10,31,9}, // permutation 3
{32,48,34,28,0,39,36,1,14,27,16,33,4,5,47,22,20,41,29,45,11,18,43,23,24,30,10,25,8,3,35,42,31,2,12,9,19,40,21,44,13,38,15,46,26,17,37,6,7}, // permutation 4
{46,20,12,42,35,16,5,17,6,1,23,27,33,36,40,32,2,41,10,44,31,28,43,0,34,30,25,39,8,19,15,3,48,7,26,45,38,18,9,13,47,37,29,14,21,11,22,24,4}, // permutation 5
{29,13,7,35,3,6,8,15,5,33,12,41,46,0,28,10,18,22,19,23,45,47,16,24,42,21,27,25,9,34,14,30,31,40,36,37,44,11,43,2,17,32,39,48,20,1,4,26,38}, // permutation 6
{41,21,46,6,43,40,27,31,38,19,7,8,33,10,47,35,16,39,45,0,26,48,1,22,42,17,44,5,2,23,37,32,11,18,3,36,15,34,4,24,14,28,29,20,9,30,25,12,13}, // permutation 7
{42,45,22,8,21,36,4,9,39,37,35,20,44,27,46,28,14,38,34,24,32,17,10,31,12,1,18,26,47,25,33,29,15,11,19,2,23,48,30,0,13,41,5,3,43,40,6,7,16}, // permutation 8
{47,30,15,6,16,29,48,32,8,2,10,39,41,36,34,18,45,7,22,21,40,44,46,3,19,12,31,24,9,25,17,33,11,37,0,43,26,27,14,13,4,20,42,28,35,23,38,5,1} // permutation 9
};

// Seed: 294793698

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    VECTOR(int8_t, 16) g_12;
    volatile VECTOR(uint64_t, 4) g_26;
    uint32_t g_28;
    volatile int32_t g_35;
    volatile int32_t * volatile g_34;
    int32_t g_50;
    int32_t *g_49;
    int16_t g_53[4];
    uint32_t g_54;
    VECTOR(int64_t, 8) g_75;
    VECTOR(uint32_t, 16) g_77;
    VECTOR(uint32_t, 4) g_78;
    uint16_t g_81;
    int32_t *g_84;
    int32_t g_96;
    int32_t g_108;
    VECTOR(int32_t, 16) g_116;
    uint8_t g_125;
    VECTOR(int16_t, 16) g_126;
    VECTOR(uint32_t, 8) g_184;
    VECTOR(uint32_t, 16) g_185;
    VECTOR(int16_t, 2) g_201;
    VECTOR(int16_t, 2) g_205;
    VECTOR(int16_t, 2) g_206;
    VECTOR(int16_t, 8) g_208;
    uint16_t g_218;
    VECTOR(int32_t, 2) g_241;
    VECTOR(int32_t, 16) g_247;
    uint64_t g_268[8][8][4];
    VECTOR(uint32_t, 8) g_285;
    volatile int32_t * volatile *g_332;
    volatile int32_t * volatile **g_331;
    VECTOR(int32_t, 2) g_347;
    int8_t g_358;
    int16_t *g_401;
    int16_t **g_400;
    uint32_t **g_419;
    int8_t g_441;
    uint16_t g_456;
    uint32_t g_490;
    VECTOR(uint32_t, 8) g_510;
    uint64_t g_514;
    uint32_t g_519;
    int64_t *g_545;
    VECTOR(uint16_t, 16) g_552;
    VECTOR(uint8_t, 4) g_568;
    VECTOR(uint32_t, 8) g_573;
    int32_t *g_585;
    VECTOR(uint8_t, 4) g_588;
    VECTOR(uint32_t, 16) g_597;
    VECTOR(uint16_t, 2) g_659;
    volatile VECTOR(uint16_t, 8) g_661;
    VECTOR(uint64_t, 16) g_681;
    VECTOR(uint64_t, 8) g_682;
    VECTOR(uint64_t, 4) g_684;
    VECTOR(uint16_t, 8) g_688;
    VECTOR(int8_t, 2) g_699;
    int32_t g_746;
    uint32_t g_748;
    volatile uint16_t g_922;
    int32_t ** volatile g_925;
    volatile VECTOR(int32_t, 8) g_928;
    volatile VECTOR(int32_t, 4) g_943;
    VECTOR(uint64_t, 8) g_975;
    volatile VECTOR(uint64_t, 8) g_976;
    VECTOR(int8_t, 8) g_988;
    volatile VECTOR(int8_t, 4) g_990;
    VECTOR(uint16_t, 4) g_1006;
    volatile VECTOR(uint16_t, 16) g_1007;
    int32_t * volatile g_1033;
    uint64_t **g_1080;
    uint64_t **g_1082;
    uint64_t *** volatile g_1081;
    VECTOR(uint16_t, 16) g_1177;
    uint32_t g_1199;
    VECTOR(uint16_t, 4) g_1216;
    volatile VECTOR(uint16_t, 16) g_1220;
    uint16_t g_1229;
    VECTOR(int32_t, 4) g_1251;
    int32_t ** volatile g_1256;
    int32_t ** volatile g_1299;
    int32_t * volatile g_1305;
    int32_t * volatile g_1307[1][3];
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
int8_t  func_1(struct S0 * p_1311);
int32_t  func_2(uint8_t  p_3, uint8_t  p_4, struct S0 * p_1311);
uint8_t  func_5(int32_t  p_6, struct S0 * p_1311);
int32_t  func_7(uint32_t  p_8, uint64_t  p_9, int16_t  p_10, uint16_t  p_11, struct S0 * p_1311);
uint16_t  func_18(int64_t  p_19, int32_t  p_20, struct S0 * p_1311);
uint32_t  func_21(int32_t  p_22, struct S0 * p_1311);
uint64_t  func_38(uint64_t  p_39, int32_t * p_40, int32_t * p_41, uint8_t  p_42, struct S0 * p_1311);
int8_t  func_47(int32_t * p_48, struct S0 * p_1311);
int8_t  func_66(int32_t  p_67, struct S0 * p_1311);
int32_t  func_99(uint32_t * p_100, int16_t  p_101, uint32_t  p_102, int32_t  p_103, struct S0 * p_1311);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1311->g_12 p_1311->g_26 p_1311->g_28 p_1311->g_34 p_1311->g_49 p_1311->g_54 p_1311->l_comm_values p_1311->g_50 p_1311->g_81 p_1311->g_108 p_1311->g_84 p_1311->g_116 p_1311->g_126 p_1311->g_185 p_1311->g_268 p_1311->g_125 p_1311->g_241 p_1311->g_206 p_1311->g_208 p_1311->g_285 p_1311->g_331 p_1311->g_53 p_1311->g_201 p_1311->g_347 p_1311->g_358 p_1311->g_77 p_1311->g_218 p_1311->g_490 p_1311->g_510 p_1311->g_184 p_1311->g_456 p_1311->g_545 p_1311->g_552 p_1311->g_205 p_1311->g_78 p_1311->g_568 p_1311->g_573 p_1311->g_247 p_1311->g_96 p_1311->g_585 p_1311->g_514 p_1311->g_588 p_1311->g_597 p_1311->g_75 p_1311->g_comm_values p_1311->g_332 p_1311->g_659 p_1311->g_661 p_1311->g_681 p_1311->g_682 p_1311->g_684 p_1311->g_688 p_1311->g_699 p_1311->g_746 p_1311->g_922 p_1311->g_925 p_1311->g_748 p_1311->g_928 p_1311->g_943 p_1311->g_975 p_1311->g_976 p_1311->g_988 p_1311->g_990 p_1311->g_400 p_1311->g_401 p_1311->g_1006 p_1311->g_1007 p_1311->g_1033 p_1311->g_1081 p_1311->g_519 p_1311->g_1216 p_1311->g_1251 p_1311->g_35 p_1311->g_1256 p_1311->g_1299
 * writes: p_1311->g_28 p_1311->g_54 p_1311->g_81 p_1311->g_84 p_1311->g_50 p_1311->g_96 p_1311->g_108 p_1311->g_53 p_1311->g_185 p_1311->g_218 p_1311->g_49 p_1311->g_125 p_1311->g_358 p_1311->g_268 p_1311->g_519 p_1311->g_75 p_1311->g_490 p_1311->g_201 p_1311->g_35 p_1311->g_419 p_1311->g_746 p_1311->g_748 p_1311->g_922 p_1311->g_585 p_1311->g_682 p_1311->g_247 p_1311->g_12 p_1311->g_1080 p_1311->g_1082 p_1311->g_456 p_1311->g_568 p_1311->g_347
 */
int8_t  func_1(struct S0 * p_1311)
{ /* block id: 4 */
    VECTOR(int8_t, 4) l_13 = (VECTOR(int8_t, 4))(0x12L, (VECTOR(int8_t, 2))(0x12L, 0x29L), 0x29L);
    VECTOR(int64_t, 8) l_25 = (VECTOR(int64_t, 8))((-4L), (VECTOR(int64_t, 4))((-4L), (VECTOR(int64_t, 2))((-4L), 0x1914CC5C6A3F1540L), 0x1914CC5C6A3F1540L), 0x1914CC5C6A3F1540L, (-4L), 0x1914CC5C6A3F1540L);
    uint16_t l_660 = 0x20BAL;
    VECTOR(uint16_t, 8) l_734 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xD2BEL), 0xD2BEL), 0xD2BEL, 1UL, 0xD2BEL);
    int32_t l_743 = 0x631D234BL;
    uint16_t l_744 = 0xB519L;
    uint64_t l_745 = 18446744073709551613UL;
    uint32_t *l_747 = &p_1311->g_748;
    int32_t l_1259 = 0L;
    int32_t l_1260[3];
    uint32_t *l_1274 = &p_1311->g_28;
    uint32_t **l_1273 = &l_1274;
    int8_t l_1287 = 0x2BL;
    int32_t *l_1295 = (void*)0;
    int64_t l_1304[6][4] = {{(-5L),(-1L),(-5L),(-5L)},{(-5L),(-1L),(-5L),(-5L)},{(-5L),(-1L),(-5L),(-5L)},{(-5L),(-1L),(-5L),(-5L)},{(-5L),(-1L),(-5L),(-5L)},{(-5L),(-1L),(-5L),(-5L)}};
    int32_t *l_1306 = (void*)0;
    int32_t *l_1308 = &l_1259;
    int32_t **l_1309 = &p_1311->g_585;
    uint64_t l_1310[4];
    int i, j;
    for (i = 0; i < 3; i++)
        l_1260[i] = 0x09B3EB6EL;
    for (i = 0; i < 4; i++)
        l_1310[i] = 0x696A6DA26A559345L;
    if (func_2(func_5(func_7(((*l_747) = (p_1311->g_746 |= ((((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 16))(p_1311->g_12.se0369bd697e780ca)), ((VECTOR(int8_t, 4))(l_13.wzxy)).zyzxxwzwyzyyzyyy))).lo)).s4503572576205010)).hi)).hi)).xwwxzxxx))).s3 , (safe_rshift_func_uint16_t_u_u((((safe_div_func_uint32_t_u_u((((VECTOR(uint16_t, 16))(func_18((((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(65527UL, (func_21((safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 4))(l_25.s6615)).x, ((VECTOR(uint64_t, 4))(p_1311->g_26.zzxy)).w)), p_1311) != (l_25.s5 == l_25.s7)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(p_1311->g_659.yy)).yxxx)), 0x70C1L, 1UL)).s14)).odd >= GROUP_DIVERGE(0, 1)), l_660, p_1311), 65529UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(l_734.s6120)))), ((((l_13.z <= (~((safe_sub_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u((p_1311->g_201.x > (l_25.s2 > ((VECTOR(int32_t, 2))(5L, 3L)).lo)), ((safe_lshift_func_uint8_t_u_s((((safe_mul_func_int16_t_s_s(((l_743 = l_660) ^ l_734.s4), 65534UL)) , l_743) > l_734.s1), l_13.z)) < 0L))) || p_1311->g_26.w), 0x7DFBA235L)) == p_1311->g_510.s0))) ^ l_734.s0) <= 0L) , 65535UL), l_660, ((VECTOR(uint16_t, 8))(0xD267L)))).s9 < l_744), 4294967293UL)) != p_1311->g_241.x) >= l_25.s3), l_745))) == 0x0324L))), p_1311->g_568.z, l_734.s3, p_1311->g_699.x, p_1311), p_1311), p_1311->g_comm_values[p_1311->tid], p_1311))
    { /* block id: 609 */
        int32_t *l_1255 = (void*)0;
        int32_t *l_1257 = (void*)0;
        int32_t *l_1258[10][8][3] = {{{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108}},{{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108}},{{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108}},{{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108}},{{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108}},{{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108}},{{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108}},{{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108}},{{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108}},{{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108},{&p_1311->g_108,(void*)0,&p_1311->g_108}}};
        uint32_t l_1261 = 4294967293UL;
        uint16_t l_1284 = 1UL;
        int32_t l_1289 = 0x4BE64A33L;
        int i, j, k;
        (*p_1311->g_1256) = l_1255;
        l_1261++;
        for (p_1311->g_218 = 11; (p_1311->g_218 <= 10); p_1311->g_218--)
        { /* block id: 614 */
            uint32_t *l_1269 = &p_1311->g_490;
            uint32_t **l_1268 = &l_1269;
            uint32_t ***l_1270 = &p_1311->g_419;
            uint32_t ***l_1271 = &p_1311->g_419;
            uint32_t ***l_1272[6][8][5] = {{{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268}},{{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268}},{{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268}},{{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268}},{{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268}},{{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268},{&l_1268,&p_1311->g_419,&l_1268,&l_1268,&l_1268}}};
            int32_t l_1279[3][8][5] = {{{0L,0x64120D9AL,0x64120D9AL,0L,0L},{0L,0x64120D9AL,0x64120D9AL,0L,0L},{0L,0x64120D9AL,0x64120D9AL,0L,0L},{0L,0x64120D9AL,0x64120D9AL,0L,0L},{0L,0x64120D9AL,0x64120D9AL,0L,0L},{0L,0x64120D9AL,0x64120D9AL,0L,0L},{0L,0x64120D9AL,0x64120D9AL,0L,0L},{0L,0x64120D9AL,0x64120D9AL,0L,0L}},{{0L,0x64120D9AL,0x64120D9AL,0L,0L},{0L,0x64120D9AL,0x64120D9AL,0L,0L},{0L,0x64120D9AL,0x64120D9AL,0L,0L},{0L,0x64120D9AL,0x64120D9AL,0L,0L},{0L,0x64120D9AL,0x64120D9AL,0L,0L},{0L,0x64120D9AL,0x64120D9AL,0L,0L},{0L,0x64120D9AL,0x64120D9AL,0L,0L},{0L,0x64120D9AL,0x64120D9AL,0L,0L}},{{0L,0x64120D9AL,0x64120D9AL,0L,0L},{0L,0x64120D9AL,0x64120D9AL,0L,0L},{0L,0x64120D9AL,0x64120D9AL,0L,0L},{0L,0x64120D9AL,0x64120D9AL,0L,0L},{0L,0x64120D9AL,0x64120D9AL,0L,0L},{0L,0x64120D9AL,0x64120D9AL,0L,0L},{0L,0x64120D9AL,0x64120D9AL,0L,0L},{0L,0x64120D9AL,0x64120D9AL,0L,0L}}};
            uint64_t *l_1285 = &p_1311->g_268[5][5][2];
            int32_t **l_1286 = &p_1311->g_49;
            int8_t l_1288 = 0x01L;
            int16_t l_1290 = 0x031CL;
            uint32_t l_1291 = 1UL;
            int i, j, k;
            l_1259 = (l_734.s0 && ((*l_1285) = (safe_sub_func_int16_t_s_s((l_1268 == (l_1273 = &l_1269)), ((safe_div_func_int64_t_s_s((safe_mod_func_int32_t_s_s((*p_1311->g_34), (l_1279[2][0][1] ^ ((safe_mod_func_int16_t_s_s(l_1279[1][2][0], l_25.s6)) <= (0x03L || (safe_rshift_func_int8_t_s_u(((((6L ^ l_1279[2][0][1]) && GROUP_DIVERGE(1, 1)) & 2UL) > 0x544A287EL), 2))))))), l_1284)) ^ p_1311->g_682.s1)))));
            (*l_1286) = (void*)0;
            ++l_1291;
        }
    }
    else
    { /* block id: 621 */
        int32_t *l_1294 = (void*)0;
        l_1295 = l_1294;
        for (p_1311->g_108 = (-10); (p_1311->g_108 == 1); ++p_1311->g_108)
        { /* block id: 625 */
            int32_t **l_1298 = &l_1295;
            (*l_1298) = (*p_1311->g_1256);
        }
        (*p_1311->g_1299) = l_1294;
        p_1311->g_347.y &= ((*p_1311->g_1033) |= 5L);
    }
    (*l_1308) |= ((safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((l_1304[4][2] &= 5UL) && ((VECTOR(uint16_t, 4))(0x54DAL, 65530UL, 0xF643L, 0x8031L)).x), 0x36062AE6L)), p_1311->g_218)) & l_25.s3);
    (*l_1309) = (*p_1311->g_1299);
    return l_1310[2];
}


/* ------------------------------------------ */
/* 
 * reads : p_1311->g_990 p_1311->g_456 p_1311->g_1033 p_1311->g_108 p_1311->g_347 p_1311->g_126 p_1311->g_77 p_1311->g_116 p_1311->g_1081 p_1311->g_519 p_1311->g_748 p_1311->g_568 p_1311->g_925 p_1311->g_1216 p_1311->g_185 p_1311->g_1251 p_1311->g_34 p_1311->g_35
 * writes: p_1311->g_50 p_1311->g_1080 p_1311->g_1082 p_1311->g_456 p_1311->g_519 p_1311->g_748 p_1311->g_568 p_1311->g_125 p_1311->g_585 p_1311->g_35
 */
int32_t  func_2(uint8_t  p_3, uint8_t  p_4, struct S0 * p_1311)
{ /* block id: 497 */
    VECTOR(int64_t, 8) l_1038 = (VECTOR(int64_t, 8))(0x131DD3380CD6DC23L, (VECTOR(int64_t, 4))(0x131DD3380CD6DC23L, (VECTOR(int64_t, 2))(0x131DD3380CD6DC23L, (-1L)), (-1L)), (-1L), 0x131DD3380CD6DC23L, (-1L));
    VECTOR(int32_t, 4) l_1049 = (VECTOR(int32_t, 4))(0x2823EED9L, (VECTOR(int32_t, 2))(0x2823EED9L, (-1L)), (-1L));
    uint16_t *l_1051 = (void*)0;
    uint16_t **l_1050 = &l_1051;
    uint16_t **l_1052 = (void*)0;
    uint16_t *l_1054 = &p_1311->g_456;
    uint16_t **l_1053 = &l_1054;
    int16_t ***l_1057 = &p_1311->g_400;
    int16_t ****l_1058 = &l_1057;
    uint32_t *l_1062 = (void*)0;
    uint32_t **l_1061 = &l_1062;
    uint32_t l_1063 = 0xDD1EA363L;
    uint64_t l_1074 = 18446744073709551609UL;
    int32_t l_1075 = 0x6E4DBFFFL;
    int32_t *l_1076 = (void*)0;
    int32_t *l_1077[7] = {&p_1311->g_96,&p_1311->g_50,&p_1311->g_96,&p_1311->g_96,&p_1311->g_50,&p_1311->g_96,&p_1311->g_96};
    VECTOR(uint16_t, 8) l_1217 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xE864L), 0xE864L), 0xE864L, 0UL, 0xE864L);
    int8_t *l_1218 = &p_1311->g_441;
    int32_t **l_1253[2][8][7] = {{{&p_1311->g_49,&p_1311->g_49,(void*)0,&p_1311->g_49,&l_1077[2],&p_1311->g_49,(void*)0},{&p_1311->g_49,&p_1311->g_49,(void*)0,&p_1311->g_49,&l_1077[2],&p_1311->g_49,(void*)0},{&p_1311->g_49,&p_1311->g_49,(void*)0,&p_1311->g_49,&l_1077[2],&p_1311->g_49,(void*)0},{&p_1311->g_49,&p_1311->g_49,(void*)0,&p_1311->g_49,&l_1077[2],&p_1311->g_49,(void*)0},{&p_1311->g_49,&p_1311->g_49,(void*)0,&p_1311->g_49,&l_1077[2],&p_1311->g_49,(void*)0},{&p_1311->g_49,&p_1311->g_49,(void*)0,&p_1311->g_49,&l_1077[2],&p_1311->g_49,(void*)0},{&p_1311->g_49,&p_1311->g_49,(void*)0,&p_1311->g_49,&l_1077[2],&p_1311->g_49,(void*)0},{&p_1311->g_49,&p_1311->g_49,(void*)0,&p_1311->g_49,&l_1077[2],&p_1311->g_49,(void*)0}},{{&p_1311->g_49,&p_1311->g_49,(void*)0,&p_1311->g_49,&l_1077[2],&p_1311->g_49,(void*)0},{&p_1311->g_49,&p_1311->g_49,(void*)0,&p_1311->g_49,&l_1077[2],&p_1311->g_49,(void*)0},{&p_1311->g_49,&p_1311->g_49,(void*)0,&p_1311->g_49,&l_1077[2],&p_1311->g_49,(void*)0},{&p_1311->g_49,&p_1311->g_49,(void*)0,&p_1311->g_49,&l_1077[2],&p_1311->g_49,(void*)0},{&p_1311->g_49,&p_1311->g_49,(void*)0,&p_1311->g_49,&l_1077[2],&p_1311->g_49,(void*)0},{&p_1311->g_49,&p_1311->g_49,(void*)0,&p_1311->g_49,&l_1077[2],&p_1311->g_49,(void*)0},{&p_1311->g_49,&p_1311->g_49,(void*)0,&p_1311->g_49,&l_1077[2],&p_1311->g_49,(void*)0},{&p_1311->g_49,&p_1311->g_49,(void*)0,&p_1311->g_49,&l_1077[2],&p_1311->g_49,(void*)0}}};
    int i, j, k;
    (*p_1311->g_1033) = (safe_div_func_uint16_t_u_u(1UL, (safe_div_func_int64_t_s_s(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0x57C56D3A244A3B95L, (-1L))), 0x062097F22D41DE0FL, ((VECTOR(int64_t, 4))(l_1038.s5263)), (-9L))))).s1, (((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(9UL, ((safe_sub_func_uint32_t_u_u((+(l_1049.x &= ((safe_add_func_uint32_t_u_u((0L <= p_1311->g_990.y), p_1311->g_456)) , FAKE_DIVERGE(p_1311->group_0_offset, get_group_id(0), 10)))), (&p_1311->g_81 == ((*l_1053) = ((*l_1050) = &p_1311->g_218))))) >= (safe_add_func_int32_t_s_s(((((*l_1058) = l_1057) != ((safe_div_func_int64_t_s_s((l_1061 == &l_1062), 0xE1CA041A58F020CCL)) , &p_1311->g_400)) >= (-1L)), p_3))))), l_1063)), 0xC6L)) > GROUP_DIVERGE(0, 1)) , (-1L))))));
    if ((safe_div_func_uint16_t_u_u(((l_1049.z = (!p_1311->g_108)) == (safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s(0x79L, p_3)), GROUP_DIVERGE(0, 1))) , p_1311->g_347.x), p_1311->g_126.s3)), ((*p_1311->g_1033) = (p_3 , (l_1074 , ((((((((*l_1053) = &p_1311->g_81) == ((*l_1050) = &p_1311->g_456)) != l_1038.s0) == l_1038.s3) && l_1075) || p_1311->g_77.s3) || p_1311->g_116.s9))))))), FAKE_DIVERGE(p_1311->group_1_offset, get_group_id(1), 10))))
    { /* block id: 507 */
        uint64_t ***l_1078 = (void*)0;
        uint64_t ***l_1079 = (void*)0;
        int32_t l_1146 = 9L;
        int32_t l_1147 = 0x4FD169F1L;
        int32_t l_1148 = 0x7E20AF9AL;
        int32_t l_1149 = 0x36BB64CCL;
        int32_t l_1150 = (-1L);
        int32_t l_1151 = 0x7923C3B0L;
        int64_t l_1152 = (-7L);
        int32_t l_1153 = (-10L);
        int64_t l_1154 = 0L;
        (*p_1311->g_1081) = (p_1311->g_1080 = (void*)0);
        for (p_1311->g_456 = 24; (p_1311->g_456 >= 23); p_1311->g_456 = safe_sub_func_int64_t_s_s(p_1311->g_456, 2))
        { /* block id: 512 */
            VECTOR(int32_t, 16) l_1145 = (VECTOR(int32_t, 16))(0x65F5EC94L, (VECTOR(int32_t, 4))(0x65F5EC94L, (VECTOR(int32_t, 2))(0x65F5EC94L, (-2L)), (-2L)), (-2L), 0x65F5EC94L, (-2L), (VECTOR(int32_t, 2))(0x65F5EC94L, (-2L)), (VECTOR(int32_t, 2))(0x65F5EC94L, (-2L)), 0x65F5EC94L, (-2L), 0x65F5EC94L, (-2L));
            uint64_t l_1155 = 0UL;
            uint16_t l_1158[4];
            int i;
            for (i = 0; i < 4; i++)
                l_1158[i] = 0UL;
            if ((atomic_inc(&p_1311->g_atomic_input[20 * get_linear_group_id() + 4]) == 0))
            { /* block id: 514 */
                uint8_t l_1085 = 1UL;
                VECTOR(int32_t, 8) l_1118 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x689F3E84L), 0x689F3E84L), 0x689F3E84L, 0L, 0x689F3E84L);
                int16_t l_1119 = (-1L);
                VECTOR(int32_t, 16) l_1134 = (VECTOR(int32_t, 16))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, (-6L)), (-6L)), (-6L), 5L, (-6L), (VECTOR(int32_t, 2))(5L, (-6L)), (VECTOR(int32_t, 2))(5L, (-6L)), 5L, (-6L), 5L, (-6L));
                uint8_t l_1135 = 0xA5L;
                int i;
                if (l_1085)
                { /* block id: 515 */
                    int32_t l_1087 = 0L;
                    int32_t *l_1086 = &l_1087;
                    int32_t *l_1088[4][4][1] = {{{&l_1087},{&l_1087},{&l_1087},{&l_1087}},{{&l_1087},{&l_1087},{&l_1087},{&l_1087}},{{&l_1087},{&l_1087},{&l_1087},{&l_1087}},{{&l_1087},{&l_1087},{&l_1087},{&l_1087}}};
                    VECTOR(int32_t, 16) l_1089 = (VECTOR(int32_t, 16))(0x7B4A32F8L, (VECTOR(int32_t, 4))(0x7B4A32F8L, (VECTOR(int32_t, 2))(0x7B4A32F8L, 0x5A8E8704L), 0x5A8E8704L), 0x5A8E8704L, 0x7B4A32F8L, 0x5A8E8704L, (VECTOR(int32_t, 2))(0x7B4A32F8L, 0x5A8E8704L), (VECTOR(int32_t, 2))(0x7B4A32F8L, 0x5A8E8704L), 0x7B4A32F8L, 0x5A8E8704L, 0x7B4A32F8L, 0x5A8E8704L);
                    uint16_t l_1090 = 0x6292L;
                    uint16_t l_1091 = 0x5D02L;
                    int32_t *l_1092[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t *l_1093[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    int8_t l_1094 = (-1L);
                    uint32_t l_1095 = 1UL;
                    int i, j, k;
                    l_1088[2][2][0] = l_1086;
                    l_1090 = ((VECTOR(int32_t, 8))(l_1089.s448a47ee)).s2;
                    l_1093[0] = (l_1091 , l_1092[3]);
                    l_1095--;
                }
                else
                { /* block id: 520 */
                    uint64_t l_1098 = 0x9E633DC264406D98L;
                    int32_t l_1101 = 0x33897149L;
                    VECTOR(uint8_t, 16) l_1102 = (VECTOR(uint8_t, 16))(0x3EL, (VECTOR(uint8_t, 4))(0x3EL, (VECTOR(uint8_t, 2))(0x3EL, 0x39L), 0x39L), 0x39L, 0x3EL, 0x39L, (VECTOR(uint8_t, 2))(0x3EL, 0x39L), (VECTOR(uint8_t, 2))(0x3EL, 0x39L), 0x3EL, 0x39L, 0x3EL, 0x39L);
                    int32_t l_1109 = (-10L);
                    int32_t *l_1108 = &l_1109;
                    uint64_t l_1110 = 0UL;
                    int8_t l_1111 = 1L;
                    int32_t *l_1112 = &l_1109;
                    int32_t *l_1113 = &l_1109;
                    int32_t *l_1114 = &l_1109;
                    int32_t l_1115[9][3][8] = {{{0x59E2E8F8L,0x59E2E8F8L,8L,0x43CDD360L,0x74352B34L,0x33D60E3DL,1L,0x6A1A9925L},{0x59E2E8F8L,0x59E2E8F8L,8L,0x43CDD360L,0x74352B34L,0x33D60E3DL,1L,0x6A1A9925L},{0x59E2E8F8L,0x59E2E8F8L,8L,0x43CDD360L,0x74352B34L,0x33D60E3DL,1L,0x6A1A9925L}},{{0x59E2E8F8L,0x59E2E8F8L,8L,0x43CDD360L,0x74352B34L,0x33D60E3DL,1L,0x6A1A9925L},{0x59E2E8F8L,0x59E2E8F8L,8L,0x43CDD360L,0x74352B34L,0x33D60E3DL,1L,0x6A1A9925L},{0x59E2E8F8L,0x59E2E8F8L,8L,0x43CDD360L,0x74352B34L,0x33D60E3DL,1L,0x6A1A9925L}},{{0x59E2E8F8L,0x59E2E8F8L,8L,0x43CDD360L,0x74352B34L,0x33D60E3DL,1L,0x6A1A9925L},{0x59E2E8F8L,0x59E2E8F8L,8L,0x43CDD360L,0x74352B34L,0x33D60E3DL,1L,0x6A1A9925L},{0x59E2E8F8L,0x59E2E8F8L,8L,0x43CDD360L,0x74352B34L,0x33D60E3DL,1L,0x6A1A9925L}},{{0x59E2E8F8L,0x59E2E8F8L,8L,0x43CDD360L,0x74352B34L,0x33D60E3DL,1L,0x6A1A9925L},{0x59E2E8F8L,0x59E2E8F8L,8L,0x43CDD360L,0x74352B34L,0x33D60E3DL,1L,0x6A1A9925L},{0x59E2E8F8L,0x59E2E8F8L,8L,0x43CDD360L,0x74352B34L,0x33D60E3DL,1L,0x6A1A9925L}},{{0x59E2E8F8L,0x59E2E8F8L,8L,0x43CDD360L,0x74352B34L,0x33D60E3DL,1L,0x6A1A9925L},{0x59E2E8F8L,0x59E2E8F8L,8L,0x43CDD360L,0x74352B34L,0x33D60E3DL,1L,0x6A1A9925L},{0x59E2E8F8L,0x59E2E8F8L,8L,0x43CDD360L,0x74352B34L,0x33D60E3DL,1L,0x6A1A9925L}},{{0x59E2E8F8L,0x59E2E8F8L,8L,0x43CDD360L,0x74352B34L,0x33D60E3DL,1L,0x6A1A9925L},{0x59E2E8F8L,0x59E2E8F8L,8L,0x43CDD360L,0x74352B34L,0x33D60E3DL,1L,0x6A1A9925L},{0x59E2E8F8L,0x59E2E8F8L,8L,0x43CDD360L,0x74352B34L,0x33D60E3DL,1L,0x6A1A9925L}},{{0x59E2E8F8L,0x59E2E8F8L,8L,0x43CDD360L,0x74352B34L,0x33D60E3DL,1L,0x6A1A9925L},{0x59E2E8F8L,0x59E2E8F8L,8L,0x43CDD360L,0x74352B34L,0x33D60E3DL,1L,0x6A1A9925L},{0x59E2E8F8L,0x59E2E8F8L,8L,0x43CDD360L,0x74352B34L,0x33D60E3DL,1L,0x6A1A9925L}},{{0x59E2E8F8L,0x59E2E8F8L,8L,0x43CDD360L,0x74352B34L,0x33D60E3DL,1L,0x6A1A9925L},{0x59E2E8F8L,0x59E2E8F8L,8L,0x43CDD360L,0x74352B34L,0x33D60E3DL,1L,0x6A1A9925L},{0x59E2E8F8L,0x59E2E8F8L,8L,0x43CDD360L,0x74352B34L,0x33D60E3DL,1L,0x6A1A9925L}},{{0x59E2E8F8L,0x59E2E8F8L,8L,0x43CDD360L,0x74352B34L,0x33D60E3DL,1L,0x6A1A9925L},{0x59E2E8F8L,0x59E2E8F8L,8L,0x43CDD360L,0x74352B34L,0x33D60E3DL,1L,0x6A1A9925L},{0x59E2E8F8L,0x59E2E8F8L,8L,0x43CDD360L,0x74352B34L,0x33D60E3DL,1L,0x6A1A9925L}}};
                    uint8_t l_1116 = 0x69L;
                    int8_t l_1117 = 1L;
                    int i, j, k;
                    if ((l_1102.s1 = ((l_1098++) , l_1101)))
                    { /* block id: 523 */
                        VECTOR(int32_t, 2) l_1103 = (VECTOR(int32_t, 2))(9L, 0x2CAD9F48L);
                        uint32_t l_1104 = 0x1C55D6B5L;
                        int i;
                        l_1104 = ((VECTOR(int32_t, 8))(l_1103.xyyyxyxy)).s7;
                    }
                    else
                    { /* block id: 525 */
                        int32_t *l_1105 = (void*)0;
                        int32_t l_1107 = 0x20003B10L;
                        int32_t *l_1106 = &l_1107;
                        l_1106 = (l_1105 = l_1105);
                    }
                    l_1108 = (void*)0;
                    l_1114 = (FAKE_DIVERGE(p_1311->global_1_offset, get_global_id(1), 10) , ((l_1111 &= (l_1110 = ((VECTOR(int8_t, 4))(0x3BL, 6L, (-9L), 0x20L)).y)) , (l_1113 = l_1112)));
                    l_1117 &= ((l_1116 = l_1115[6][2][3]) , (-9L));
                }
                if ((l_1119 = ((VECTOR(int32_t, 4))(l_1118.s7203)).x))
                { /* block id: 538 */
                    int32_t l_1120 = 0L;
                    VECTOR(int32_t, 4) l_1127 = (VECTOR(int32_t, 4))(0x50EAA295L, (VECTOR(int32_t, 2))(0x50EAA295L, 0L), 0L);
                    int i;
                    if (l_1120)
                    { /* block id: 539 */
                        int64_t l_1121 = 0x30EF708808837B4BL;
                        uint8_t l_1122 = 255UL;
                        uint8_t l_1125 = 0xCAL;
                        l_1121 = 0x093FF3E6L;
                        ++l_1122;
                        l_1118.s5 &= l_1125;
                    }
                    else
                    { /* block id: 543 */
                        VECTOR(int32_t, 4) l_1126 = (VECTOR(int32_t, 4))(0x710E9B19L, (VECTOR(int32_t, 2))(0x710E9B19L, 2L), 2L);
                        int i;
                        l_1120 |= ((VECTOR(int32_t, 16))(l_1126.yyywywzxzwzwyyyz)).sc;
                    }
                    l_1118.s6 = ((VECTOR(int32_t, 4))(l_1127.wxxy)).y;
                }
                else
                { /* block id: 547 */
                    uint8_t l_1128 = 0x6DL;
                    int32_t l_1132 = (-1L);
                    int32_t *l_1131 = &l_1132;
                    int32_t *l_1133 = &l_1132;
                    l_1128--;
                    l_1133 = l_1131;
                }
                l_1135 ^= ((VECTOR(int32_t, 16))(l_1134.sd4695304ff463efe)).s4;
                for (l_1118.s6 = 0; (l_1118.s6 < 14); ++l_1118.s6)
                { /* block id: 554 */
                    uint8_t l_1138 = 0x15L;
                    uint64_t l_1139 = 18446744073709551615UL;
                    uint32_t l_1140 = 9UL;
                    VECTOR(int32_t, 8) l_1141 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x48DA9736L), 0x48DA9736L), 0x48DA9736L, 1L, 0x48DA9736L);
                    VECTOR(int32_t, 2) l_1142 = (VECTOR(int32_t, 2))((-1L), 0x1E9EFEB7L);
                    VECTOR(int32_t, 2) l_1143 = (VECTOR(int32_t, 2))(0x014C6F3BL, 0x410DC185L);
                    VECTOR(int32_t, 2) l_1144 = (VECTOR(int32_t, 2))(0x4A2F5FC2L, 0x53F2DF78L);
                    int i;
                    l_1140 ^= (l_1139 = (l_1134.s9 ^= (FAKE_DIVERGE(p_1311->local_1_offset, get_local_id(1), 10) , (GROUP_DIVERGE(0, 1) , l_1138))));
                    l_1134.s3 |= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 8))(l_1141.s73133067)).even, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_1142.yxyx))))))), ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(l_1143.yyyx)), ((VECTOR(int32_t, 2))(0x3153AEDDL, 0x673AF345L)).xyyy, ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_1144.yxyx)).zyywwwyz)).odd, ((VECTOR(int32_t, 2))(0L, 0x6CB68A79L)).yyyy)))))))).s3;
                }
                unsigned int result = 0;
                result += l_1085;
                result += l_1118.s7;
                result += l_1118.s6;
                result += l_1118.s5;
                result += l_1118.s4;
                result += l_1118.s3;
                result += l_1118.s2;
                result += l_1118.s1;
                result += l_1118.s0;
                result += l_1119;
                result += l_1134.sf;
                result += l_1134.se;
                result += l_1134.sd;
                result += l_1134.sc;
                result += l_1134.sb;
                result += l_1134.sa;
                result += l_1134.s9;
                result += l_1134.s8;
                result += l_1134.s7;
                result += l_1134.s6;
                result += l_1134.s5;
                result += l_1134.s4;
                result += l_1134.s3;
                result += l_1134.s2;
                result += l_1134.s1;
                result += l_1134.s0;
                result += l_1135;
                atomic_add(&p_1311->g_special_values[20 * get_linear_group_id() + 4], result);
            }
            else
            { /* block id: 560 */
                (1 + 1);
            }
            l_1155++;
            l_1158[2]--;
        }
    }
    else
    { /* block id: 566 */
        uint64_t *l_1161 = (void*)0;
        uint64_t **l_1162[9][7] = {{(void*)0,(void*)0,&l_1161,&l_1161,(void*)0,&l_1161,&l_1161},{(void*)0,(void*)0,&l_1161,&l_1161,(void*)0,&l_1161,&l_1161},{(void*)0,(void*)0,&l_1161,&l_1161,(void*)0,&l_1161,&l_1161},{(void*)0,(void*)0,&l_1161,&l_1161,(void*)0,&l_1161,&l_1161},{(void*)0,(void*)0,&l_1161,&l_1161,(void*)0,&l_1161,&l_1161},{(void*)0,(void*)0,&l_1161,&l_1161,(void*)0,&l_1161,&l_1161},{(void*)0,(void*)0,&l_1161,&l_1161,(void*)0,&l_1161,&l_1161},{(void*)0,(void*)0,&l_1161,&l_1161,(void*)0,&l_1161,&l_1161},{(void*)0,(void*)0,&l_1161,&l_1161,(void*)0,&l_1161,&l_1161}};
        uint64_t *l_1163 = (void*)0;
        int32_t l_1193 = 0x7EBEEDCDL;
        VECTOR(uint16_t, 16) l_1215 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL, (VECTOR(uint16_t, 2))(1UL, 1UL), (VECTOR(uint16_t, 2))(1UL, 1UL), 1UL, 1UL, 1UL, 1UL);
        int32_t l_1244 = 0L;
        int32_t l_1245[8][9] = {{0x28D68726L,0x28D68726L,9L,(-1L),0x3D1ABAA3L,(-7L),1L,1L,1L},{0x28D68726L,0x28D68726L,9L,(-1L),0x3D1ABAA3L,(-7L),1L,1L,1L},{0x28D68726L,0x28D68726L,9L,(-1L),0x3D1ABAA3L,(-7L),1L,1L,1L},{0x28D68726L,0x28D68726L,9L,(-1L),0x3D1ABAA3L,(-7L),1L,1L,1L},{0x28D68726L,0x28D68726L,9L,(-1L),0x3D1ABAA3L,(-7L),1L,1L,1L},{0x28D68726L,0x28D68726L,9L,(-1L),0x3D1ABAA3L,(-7L),1L,1L,1L},{0x28D68726L,0x28D68726L,9L,(-1L),0x3D1ABAA3L,(-7L),1L,1L,1L},{0x28D68726L,0x28D68726L,9L,(-1L),0x3D1ABAA3L,(-7L),1L,1L,1L}};
        int32_t *l_1254 = (void*)0;
        int i, j;
        if ((&l_1074 == (l_1163 = l_1161)))
        { /* block id: 568 */
            VECTOR(uint8_t, 4) l_1170 = (VECTOR(uint8_t, 4))(0x1AL, (VECTOR(uint8_t, 2))(0x1AL, 0x3DL), 0x3DL);
            int32_t l_1203 = (-9L);
            VECTOR(int32_t, 8) l_1204 = (VECTOR(int32_t, 8))(0x0727F476L, (VECTOR(int32_t, 4))(0x0727F476L, (VECTOR(int32_t, 2))(0x0727F476L, 0L), 0L), 0L, 0x0727F476L, 0L);
            int i;
            for (p_1311->g_519 = 0; (p_1311->g_519 > 12); p_1311->g_519++)
            { /* block id: 571 */
                uint16_t *l_1198 = (void*)0;
                int32_t l_1200 = 0x6E8A7B15L;
                int32_t l_1240 = 1L;
                int16_t **l_1241[4][2][10] = {{{&p_1311->g_401,(void*)0,(void*)0,&p_1311->g_401,&p_1311->g_401,&p_1311->g_401,&p_1311->g_401,&p_1311->g_401,&p_1311->g_401,(void*)0},{&p_1311->g_401,(void*)0,(void*)0,&p_1311->g_401,&p_1311->g_401,&p_1311->g_401,&p_1311->g_401,&p_1311->g_401,&p_1311->g_401,(void*)0}},{{&p_1311->g_401,(void*)0,(void*)0,&p_1311->g_401,&p_1311->g_401,&p_1311->g_401,&p_1311->g_401,&p_1311->g_401,&p_1311->g_401,(void*)0},{&p_1311->g_401,(void*)0,(void*)0,&p_1311->g_401,&p_1311->g_401,&p_1311->g_401,&p_1311->g_401,&p_1311->g_401,&p_1311->g_401,(void*)0}},{{&p_1311->g_401,(void*)0,(void*)0,&p_1311->g_401,&p_1311->g_401,&p_1311->g_401,&p_1311->g_401,&p_1311->g_401,&p_1311->g_401,(void*)0},{&p_1311->g_401,(void*)0,(void*)0,&p_1311->g_401,&p_1311->g_401,&p_1311->g_401,&p_1311->g_401,&p_1311->g_401,&p_1311->g_401,(void*)0}},{{&p_1311->g_401,(void*)0,(void*)0,&p_1311->g_401,&p_1311->g_401,&p_1311->g_401,&p_1311->g_401,&p_1311->g_401,&p_1311->g_401,(void*)0},{&p_1311->g_401,(void*)0,(void*)0,&p_1311->g_401,&p_1311->g_401,&p_1311->g_401,&p_1311->g_401,&p_1311->g_401,&p_1311->g_401,(void*)0}}};
                int64_t l_1242 = 0x718798B96A29756AL;
                int16_t l_1243 = 0x30F2L;
                uint16_t l_1248 = 4UL;
                int i, j, k;
                for (p_1311->g_748 = 0; (p_1311->g_748 < 8); ++p_1311->g_748)
                { /* block id: 574 */
                    uint8_t *l_1171 = (void*)0;
                    uint8_t *l_1172 = (void*)0;
                    uint8_t *l_1173 = &p_1311->g_125;
                    int32_t l_1176 = (-1L);
                    int32_t l_1246 = (-1L);
                    int32_t l_1247 = 0x0D6098D5L;
                    l_1200 = (((*l_1173) = (p_1311->g_568.y ^= (safe_lshift_func_int8_t_s_u(l_1170.y, 0)))) ^ ((safe_mod_func_uint16_t_u_u(l_1176, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(p_1311->g_1177.s782e)))).odd)), 0UL, 0xAE15L, ((safe_mod_func_int64_t_s_s((safe_unary_minus_func_uint64_t_u((((VECTOR(int8_t, 2))(0x7EL, 0x77L)).hi < (safe_mod_func_uint64_t_u_u((((safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((GROUP_DIVERGE(2, 1) >= ((void*)0 == p_1311->g_545)), 6)), ((*p_1311->g_1033) = (0UL & (safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(l_1193, 65535UL)), 4)))))), (safe_div_func_int64_t_s_s((safe_add_func_uint32_t_u_u(p_4, (((*l_1050) = &p_1311->g_218) != l_1198))), l_1170.x)))) <= 0xE3L) <= p_1311->g_1199), p_4))))), p_4)) | l_1176), p_3, 0x486AL, 65535UL)).s2)) != l_1193));
                    for (l_1193 = 0; (l_1193 <= 6); l_1193 = safe_add_func_int64_t_s_s(l_1193, 3))
                    { /* block id: 582 */
                        uint64_t l_1205 = 0UL;
                        int32_t **l_1208 = &p_1311->g_585;
                        VECTOR(uint16_t, 8) l_1219 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65528UL), 65528UL), 65528UL, 65535UL, 65528UL);
                        int16_t *l_1230 = &p_1311->g_53[1];
                        uint16_t *l_1233 = (void*)0;
                        uint16_t *l_1234 = (void*)0;
                        uint16_t *l_1235[4][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
                        int16_t *l_1236 = (void*)0;
                        int16_t *l_1237 = (void*)0;
                        int16_t *l_1238 = (void*)0;
                        int16_t *l_1239[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i, j;
                        l_1205--;
                        (*l_1208) = &l_1200;
                        (*p_1311->g_925) = (void*)0;
                        (*p_1311->g_1033) = (((l_1203 = (safe_add_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(p_3, ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 16))(((((*l_1054) = ((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 8))(l_1215.s57729554)).lo, ((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(p_1311->g_1216.yzyz)), 0xCC10L, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_1217.s71)).yyxy)), 65528UL, ((VECTOR(uint16_t, 4))((l_1218 != (void*)0), 0x5F19L, 0x0941L, 0x897FL)), 65535UL, 9UL)), ((VECTOR(uint16_t, 2))(l_1219.s30)).xxyxyyxxxyxyyyyy))).s68ea, ((VECTOR(uint16_t, 8))(p_1311->g_1220.s0f97fe40)).lo))).x) ^ (safe_lshift_func_uint16_t_u_u(((safe_div_func_int32_t_s_s(((void*)0 != &p_1311->g_456), (safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s(l_1193, p_1311->g_681.sb)), (((((*l_1230) = p_1311->g_1229) ^ (l_1240 |= (safe_rshift_func_uint16_t_u_s((l_1200 = (l_1204.s3 = (p_1311->g_1177.s6 = ((*l_1051) ^= (1L != p_4))))), 10)))) , &p_1311->g_401) == l_1241[2][1][8]))))) ^ p_3), p_1311->g_285.s1))) , p_4), 2L, 1L, 1L, 7L, ((VECTOR(int8_t, 4))((-7L))), ((VECTOR(int8_t, 4))(4L)), 0x7DL, 0x63L, (-5L))).sd050))).odd, ((VECTOR(int8_t, 2))(0x48L)), ((VECTOR(int8_t, 2))(0x29L))))), ((VECTOR(int8_t, 4))(1L)), ((VECTOR(int8_t, 8))(3L)), 0x22L)).s5c53)), p_3, 0x30L, ((VECTOR(int8_t, 2))(8L)), 0L, 0x33L, 0x48L, 1L, 7L, ((VECTOR(int8_t, 2))(0x07L)), (-3L))).lo)).s5, p_1311->g_347.x)), p_4)), p_1311->g_1216.x))) == 0x1D8C2E125607CF92L) | p_1311->g_185.s0);
                    }
                    l_1248--;
                }
                return p_4;
            }
        }
        else
        { /* block id: 600 */
            uint16_t l_1252 = 1UL;
            l_1252 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(p_1311->g_1251.zw)))).odd;
            return p_3;
        }
        (*p_1311->g_34) &= p_4;
        l_1253[0][6][2] = (void*)0;
        l_1254 = &l_1245[2][5];
    }
    return (*p_1311->g_34);
}


/* ------------------------------------------ */
/* 
 * reads : p_1311->g_108 p_1311->g_682 p_1311->g_975 p_1311->g_976 p_1311->g_988 p_1311->g_990 p_1311->g_208 p_1311->g_125 p_1311->g_247 p_1311->g_699 p_1311->g_400 p_1311->g_401 p_1311->g_1006 p_1311->g_1007 p_1311->g_268 p_1311->g_514 p_1311->g_53 p_1311->g_54 p_1311->g_285 p_1311->g_1033
 * writes: p_1311->g_108 p_1311->g_49 p_1311->g_682 p_1311->g_125 p_1311->g_247 p_1311->g_268 p_1311->g_12 p_1311->g_50
 */
uint8_t  func_5(int32_t  p_6, struct S0 * p_1311)
{ /* block id: 482 */
    VECTOR(int32_t, 2) l_962 = (VECTOR(int32_t, 2))(0L, 1L);
    VECTOR(int32_t, 2) l_963 = (VECTOR(int32_t, 2))(0L, (-6L));
    int32_t *l_964 = &p_1311->g_108;
    int32_t **l_965 = &p_1311->g_49;
    uint64_t *l_971[2];
    uint32_t l_972 = 0UL;
    VECTOR(uint16_t, 8) l_985 = (VECTOR(uint16_t, 8))(65526UL, (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 0UL), 0UL), 0UL, 65526UL, 0UL);
    VECTOR(int8_t, 16) l_989 = (VECTOR(int8_t, 16))(0x18L, (VECTOR(int8_t, 4))(0x18L, (VECTOR(int8_t, 2))(0x18L, 1L), 1L), 1L, 0x18L, 1L, (VECTOR(int8_t, 2))(0x18L, 1L), (VECTOR(int8_t, 2))(0x18L, 1L), 0x18L, 1L, 0x18L, 1L);
    VECTOR(int64_t, 2) l_991 = (VECTOR(int64_t, 2))(0x0087666D32D1F71DL, 0x4730C94B6DA23556L);
    VECTOR(int64_t, 4) l_992 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-1L)), (-1L));
    VECTOR(uint64_t, 2) l_997 = (VECTOR(uint64_t, 2))(18446744073709551610UL, 0x039AE4ACF61BD6F7L);
    VECTOR(uint64_t, 8) l_998 = (VECTOR(uint64_t, 8))(0x6EDFDEF2044C329FL, (VECTOR(uint64_t, 4))(0x6EDFDEF2044C329FL, (VECTOR(uint64_t, 2))(0x6EDFDEF2044C329FL, 0xE649967F8DA827DCL), 0xE649967F8DA827DCL), 0xE649967F8DA827DCL, 0x6EDFDEF2044C329FL, 0xE649967F8DA827DCL);
    int64_t l_1001 = 0x45752C4EDF7AD348L;
    uint8_t *l_1002 = (void*)0;
    int32_t *l_1003 = (void*)0;
    VECTOR(uint16_t, 2) l_1008 = (VECTOR(uint16_t, 2))(0x098BL, 65535UL);
    VECTOR(uint16_t, 4) l_1009 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 1UL), 1UL);
    VECTOR(uint16_t, 8) l_1014 = (VECTOR(uint16_t, 8))(0xD520L, (VECTOR(uint16_t, 4))(0xD520L, (VECTOR(uint16_t, 2))(0xD520L, 0x0CC9L), 0x0CC9L), 0x0CC9L, 0xD520L, 0x0CC9L);
    VECTOR(uint16_t, 16) l_1015 = (VECTOR(uint16_t, 16))(0xD77FL, (VECTOR(uint16_t, 4))(0xD77FL, (VECTOR(uint16_t, 2))(0xD77FL, 0x72DBL), 0x72DBL), 0x72DBL, 0xD77FL, 0x72DBL, (VECTOR(uint16_t, 2))(0xD77FL, 0x72DBL), (VECTOR(uint16_t, 2))(0xD77FL, 0x72DBL), 0xD77FL, 0x72DBL, 0xD77FL, 0x72DBL);
    uint8_t *l_1020 = (void*)0;
    uint8_t *l_1021 = (void*)0;
    uint8_t *l_1022 = (void*)0;
    uint8_t *l_1023 = &p_1311->g_125;
    uint8_t l_1028 = 1UL;
    uint16_t l_1029 = 9UL;
    uint64_t l_1030 = 0x1E232E9DE2D9AA9FL;
    int8_t *l_1031 = (void*)0;
    int32_t l_1032 = 0x481D9C0EL;
    int i;
    for (i = 0; i < 2; i++)
        l_971[i] = (void*)0;
    (*l_964) |= ((VECTOR(int32_t, 16))(p_6, 9L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(l_962.yyxyxxyx)).s02))).xxyyyxxy)), ((VECTOR(int32_t, 4))(l_963.yyyx)), 1L, 0x3983330EL)).sb;
    (*l_965) = (void*)0;
    (*l_964) = (((safe_lshift_func_int16_t_s_u(p_6, 12)) <= ((*l_964) > ((safe_unary_minus_func_uint16_t_u(((safe_mod_func_uint64_t_u_u((p_1311->g_268[5][5][2] = (((VECTOR(uint64_t, 16))((p_1311->g_682.s5 ^= (l_972--)), ((VECTOR(uint64_t, 4))(p_1311->g_975.s4061)), 0xF59F953B9F5002BAL, (p_1311->g_682.s3 ^= 2UL), ((VECTOR(uint64_t, 4))(p_1311->g_976.s3772)), (safe_lshift_func_int16_t_s_u(p_6, 11)), ((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 4))(1UL, ((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 16))(0UL, ((VECTOR(uint32_t, 2))(0x1251A780L, 1UL)), ((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 4))((&l_964 != &l_964), ((VECTOR(uint32_t, 2))(0UL, 0x676541F9L)), 0x1A17918FL)).zyzwzzyy))), ((safe_sub_func_uint32_t_u_u(GROUP_DIVERGE(1, 1), (p_1311->g_247.s4 ^= (safe_lshift_func_uint8_t_u_u((p_1311->g_125 ^= (safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 8))(l_985.s65163523)).s3, (((((VECTOR(int32_t, 2))(0L, (-1L))).lo && FAKE_DIVERGE(p_1311->local_2_offset, get_local_id(2), 10)) == (safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))((-1L), 0x1BL)).yyxx)).xxxxzxyw, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 16))(p_1311->g_988.s3074526314531404)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 4))(l_989.sd54e)).odd, ((VECTOR(int8_t, 8))(p_1311->g_990.xzyxxxzx)).s50, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x6FL, 0L)).xxyyxxyyxyyxxxxx)).s7fb6))).wxzyzzxwyxxxwyyw)).lo)).s61))), 0x75L, (((VECTOR(int64_t, 16))(add_sat(((VECTOR(int64_t, 8))((-8L), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(l_991.xyyxxxxy)).s37)).lo, ((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(1L, 0x557F911F65AEB670L)).yyxyyyyy)).s63, ((VECTOR(int64_t, 2))((-9L), 1L))))), ((VECTOR(int64_t, 4))(l_992.zzwx)))).s7366325632664720, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))((-1L), (-1L), ((safe_mod_func_int16_t_s_s((safe_sub_func_int32_t_s_s((((0x7B4B5B29374929A1L != ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 8))(l_997.xyyyxyxy)).s42, ((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 16))(l_998.s0076543071131673)), ((VECTOR(uint64_t, 8))((safe_div_func_uint32_t_u_u(((p_1311->g_208.s6 , p_6) || p_6), 0xA002B779L)), 0x9FE35A1090A03BA5L, 0x14EAD47FC9EF285EL, 1UL, ((VECTOR(uint64_t, 2))(2UL)), 0UL, 1UL)).s1010551540476667))).s4b))))).lo) ^ p_6) && 3UL), p_1311->g_975.s6)), (*l_964))) | l_1001), ((VECTOR(int64_t, 4))((-8L))), 0L)).s3477647701666553))))).s2 == 0x44FCA3098356A847L), p_6, (-2L), 0x52L, (-1L))).s7403501455327150))).s3359)).wxxwzzzw))).s7764426222526427)).s7, (*l_964)))) , (*l_964))))), 6))))) && GROUP_DIVERGE(0, 1)), ((VECTOR(uint32_t, 4))(0xFF345C4CL)))).sf0, ((VECTOR(uint32_t, 2))(0x010E120BL)), ((VECTOR(uint32_t, 2))(7UL))))), 4294967286UL)).hi, ((VECTOR(uint32_t, 2))(0xA086D171L))))), 18446744073709551615UL, 0x9163477433F7E7A0L)).s1 | p_1311->g_699.y)), p_6)) | p_6))) , p_6))) | p_6);
    (*p_1311->g_1033) = ((0x357FCB2553E1D3E1L != (((safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 8))((p_6 <= p_6), 0xF7B2L, 65526UL, 6UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((*p_1311->g_400) == (void*)0), ((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 16))(p_1311->g_1006.wxzxwwxxzyzwywyy)).s76, ((VECTOR(uint16_t, 8))(0x6E71L, ((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 2))(p_1311->g_1007.s0a)), ((VECTOR(uint16_t, 2))(l_1008.yx)), ((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 2))(65529UL, 0xAD15L)).yxxxyyyx, ((VECTOR(uint16_t, 4))(l_1009.yzzy)).yxwyxzxx))).s56))).xxyy)).wwwwzyywzwzxxwzx, ((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),VECTOR(uint16_t, 2),((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 16))(((((((*l_964) = ((+(safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s((p_6 <= ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_1014.s31)), ((VECTOR(uint16_t, 8))(l_1015.s16a142ce)), (((((((VECTOR(uint32_t, 2))(0x4159552BL, 0xCF1D4E41L)).even > (safe_rshift_func_int8_t_s_u(((!(safe_rshift_func_uint8_t_u_s(((*l_964) <= ((*l_1023)--)), (p_1311->g_12.sa = (((((safe_rshift_func_int16_t_s_s((l_1028 == ((VECTOR(int8_t, 2))(0x79L, 0L)).lo), 13)) ^ (((0L >= p_6) <= l_1029) >= 0x13A9L)) , (void*)0) == &p_1311->g_419) , l_1030))))) == (*l_964)), p_6))) || p_6) != 0x6CFDA12E94419D92L) == 0x50184E4D6B9EDA4CL) != 0x09ABF16E01606EAEL), ((VECTOR(uint16_t, 4))(1UL)), 9UL)).sd), p_1311->g_208.s2)), p_1311->g_268[2][1][3]))) <= p_1311->g_514)) < p_1311->g_514) | p_6) > p_6) != p_1311->g_699.y), ((VECTOR(uint16_t, 8))(0xF3CCL)), ((VECTOR(uint16_t, 2))(0x8783L)), ((VECTOR(uint16_t, 4))(0UL)), 0x4E15L)).odd, ((VECTOR(uint16_t, 8))(0x4576L))))).even)), p_1311->g_53[1], ((VECTOR(uint16_t, 2))(1UL)), 65527UL)).lo)).lo)), 0xC20AL, 0UL)).lo, ((VECTOR(uint16_t, 2))(4UL)), ((VECTOR(uint16_t, 2))(0UL))))).xxyyxxyxxxxyyyyy))).odd)).s3466466200353140, ((VECTOR(uint16_t, 16))(0UL))))).s3a))), p_6, ((VECTOR(uint16_t, 4))(6UL)))).s04))), 0xDD24L, ((VECTOR(uint16_t, 2))(0xF056L)), 7UL, 1UL)).lo)))).s6, 11)) == p_1311->g_54) >= p_1311->g_285.s7)) > l_1032);
    return p_6;
}


/* ------------------------------------------ */
/* 
 * reads : p_1311->g_108 p_1311->g_185 p_1311->g_218 p_1311->g_125 p_1311->g_922 p_1311->g_925 p_1311->g_748 p_1311->g_928 p_1311->g_943 p_1311->g_456
 * writes: p_1311->g_108 p_1311->g_218 p_1311->g_125 p_1311->g_922 p_1311->g_585 p_1311->g_748 p_1311->g_75
 */
int32_t  func_7(uint32_t  p_8, uint64_t  p_9, int16_t  p_10, uint16_t  p_11, struct S0 * p_1311)
{ /* block id: 342 */
    VECTOR(uint8_t, 16) l_868 = (VECTOR(uint8_t, 16))(253UL, (VECTOR(uint8_t, 4))(253UL, (VECTOR(uint8_t, 2))(253UL, 0x19L), 0x19L), 0x19L, 253UL, 0x19L, (VECTOR(uint8_t, 2))(253UL, 0x19L), (VECTOR(uint8_t, 2))(253UL, 0x19L), 253UL, 0x19L, 253UL, 0x19L);
    VECTOR(uint8_t, 2) l_869 = (VECTOR(uint8_t, 2))(8UL, 0x0CL);
    int32_t l_872 = 0x42363C41L;
    VECTOR(uint32_t, 2) l_932 = (VECTOR(uint32_t, 2))(0x8C76E579L, 4294967291UL);
    int32_t **l_934 = &p_1311->g_84;
    int32_t ***l_933 = &l_934;
    VECTOR(int32_t, 8) l_954 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-3L)), (-3L)), (-3L), (-1L), (-3L));
    int i;
    for (p_1311->g_108 = (-29); (p_1311->g_108 < 1); p_1311->g_108 = safe_add_func_uint64_t_u_u(p_1311->g_108, 6))
    { /* block id: 345 */
        if ((atomic_inc(&p_1311->l_atomic_input[5]) == 9))
        { /* block id: 347 */
            int8_t l_751 = 0x2FL;
            int32_t l_752 = 4L;
            int64_t l_769 = 0x7FFA0F42FCB1B8D3L;
            uint8_t l_770 = 0xBEL;
            uint64_t l_773 = 18446744073709551613UL;
            l_751 &= 0x2EEB738DL;
            if (l_752)
            { /* block id: 349 */
                int32_t *l_753 = (void*)0;
                int32_t l_755 = (-6L);
                int32_t *l_754[10] = {&l_755,&l_755,&l_755,&l_755,&l_755,&l_755,&l_755,&l_755,&l_755,&l_755};
                uint8_t l_756[7] = {0x42L,0x42L,0x42L,0x42L,0x42L,0x42L,0x42L};
                uint32_t l_759 = 0x0AE5542CL;
                uint32_t l_760[4][7][3] = {{{0x56FF12E5L,4294967292UL,0xCAD25C7BL},{0x56FF12E5L,4294967292UL,0xCAD25C7BL},{0x56FF12E5L,4294967292UL,0xCAD25C7BL},{0x56FF12E5L,4294967292UL,0xCAD25C7BL},{0x56FF12E5L,4294967292UL,0xCAD25C7BL},{0x56FF12E5L,4294967292UL,0xCAD25C7BL},{0x56FF12E5L,4294967292UL,0xCAD25C7BL}},{{0x56FF12E5L,4294967292UL,0xCAD25C7BL},{0x56FF12E5L,4294967292UL,0xCAD25C7BL},{0x56FF12E5L,4294967292UL,0xCAD25C7BL},{0x56FF12E5L,4294967292UL,0xCAD25C7BL},{0x56FF12E5L,4294967292UL,0xCAD25C7BL},{0x56FF12E5L,4294967292UL,0xCAD25C7BL},{0x56FF12E5L,4294967292UL,0xCAD25C7BL}},{{0x56FF12E5L,4294967292UL,0xCAD25C7BL},{0x56FF12E5L,4294967292UL,0xCAD25C7BL},{0x56FF12E5L,4294967292UL,0xCAD25C7BL},{0x56FF12E5L,4294967292UL,0xCAD25C7BL},{0x56FF12E5L,4294967292UL,0xCAD25C7BL},{0x56FF12E5L,4294967292UL,0xCAD25C7BL},{0x56FF12E5L,4294967292UL,0xCAD25C7BL}},{{0x56FF12E5L,4294967292UL,0xCAD25C7BL},{0x56FF12E5L,4294967292UL,0xCAD25C7BL},{0x56FF12E5L,4294967292UL,0xCAD25C7BL},{0x56FF12E5L,4294967292UL,0xCAD25C7BL},{0x56FF12E5L,4294967292UL,0xCAD25C7BL},{0x56FF12E5L,4294967292UL,0xCAD25C7BL},{0x56FF12E5L,4294967292UL,0xCAD25C7BL}}};
                int i, j, k;
                l_754[6] = l_753;
                l_756[6]--;
                l_760[0][2][1] = l_759;
            }
            else
            { /* block id: 353 */
                int8_t l_761 = 0x25L;
                int32_t l_763 = 0x31F4B79AL;
                int32_t *l_762 = &l_763;
                int32_t *l_764 = &l_763;
                int32_t l_765 = 0x61CF879DL;
                uint32_t l_766 = 0x7C706E16L;
                l_761 = 0L;
                l_764 = l_762;
                --l_766;
            }
            l_770++;
            if (l_773)
            { /* block id: 359 */
                int32_t l_774 = (-1L);
                uint32_t l_815[6] = {0x639D4CC2L,0UL,0x639D4CC2L,0x639D4CC2L,0UL,0x639D4CC2L};
                uint16_t l_816 = 0x7F17L;
                uint8_t l_817 = 0UL;
                int i;
                for (l_774 = 0; (l_774 > 27); l_774++)
                { /* block id: 362 */
                    int16_t l_777[7][7][1] = {{{0x629CL},{0x629CL},{0x629CL},{0x629CL},{0x629CL},{0x629CL},{0x629CL}},{{0x629CL},{0x629CL},{0x629CL},{0x629CL},{0x629CL},{0x629CL},{0x629CL}},{{0x629CL},{0x629CL},{0x629CL},{0x629CL},{0x629CL},{0x629CL},{0x629CL}},{{0x629CL},{0x629CL},{0x629CL},{0x629CL},{0x629CL},{0x629CL},{0x629CL}},{{0x629CL},{0x629CL},{0x629CL},{0x629CL},{0x629CL},{0x629CL},{0x629CL}},{{0x629CL},{0x629CL},{0x629CL},{0x629CL},{0x629CL},{0x629CL},{0x629CL}},{{0x629CL},{0x629CL},{0x629CL},{0x629CL},{0x629CL},{0x629CL},{0x629CL}}};
                    uint16_t l_778 = 0x6434L;
                    int i, j, k;
                    l_778--;
                    for (l_777[5][5][0] = 4; (l_777[5][5][0] < (-4)); l_777[5][5][0]--)
                    { /* block id: 366 */
                        int32_t l_784 = (-7L);
                        int32_t *l_783[8];
                        int32_t *l_785 = &l_784;
                        int32_t *l_786[6][10][4] = {{{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784}},{{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784}},{{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784}},{{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784}},{{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784}},{{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784},{&l_784,&l_784,&l_784,&l_784}}};
                        uint16_t l_787 = 65535UL;
                        int32_t l_788 = 0x3A284DE6L;
                        int16_t l_789 = 3L;
                        uint8_t l_790 = 0x1FL;
                        int32_t *l_793[10][7] = {{(void*)0,(void*)0,&l_784,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_784,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_784,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_784,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_784,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_784,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_784,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_784,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_784,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_784,(void*)0,(void*)0,(void*)0,(void*)0}};
                        int32_t *l_794[9] = {&l_784,&l_784,&l_784,&l_784,&l_784,&l_784,&l_784,&l_784,&l_784};
                        int i, j, k;
                        for (i = 0; i < 8; i++)
                            l_783[i] = &l_784;
                        l_786[2][7][0] = (l_785 = l_783[3]);
                        l_787 &= (FAKE_DIVERGE(p_1311->local_2_offset, get_local_id(2), 10) , 9L);
                        --l_790;
                        l_794[5] = l_793[5][3];
                    }
                    for (l_778 = 0; (l_778 != 48); ++l_778)
                    { /* block id: 375 */
                        int32_t l_798 = 0x13A09B3EL;
                        int32_t *l_797 = &l_798;
                        int32_t *l_799 = &l_798;
                        VECTOR(uint8_t, 16) l_800 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x96L), 0x96L), 0x96L, 1UL, 0x96L, (VECTOR(uint8_t, 2))(1UL, 0x96L), (VECTOR(uint8_t, 2))(1UL, 0x96L), 1UL, 0x96L, 1UL, 0x96L);
                        int32_t l_801[7][1] = {{0x1DB019E0L},{0x1DB019E0L},{0x1DB019E0L},{0x1DB019E0L},{0x1DB019E0L},{0x1DB019E0L},{0x1DB019E0L}};
                        int8_t l_802 = 0x7EL;
                        uint32_t l_803 = 0x86C19499L;
                        uint32_t l_806 = 0x7432DD85L;
                        int8_t l_807 = 0x28L;
                        uint8_t l_808[1][3][3] = {{{250UL,250UL,250UL},{250UL,250UL,250UL},{250UL,250UL,250UL}}};
                        int32_t *l_809 = &l_801[3][0];
                        int8_t l_810 = 0L;
                        int32_t l_811[6] = {3L,0x22A26404L,3L,3L,0x22A26404L,3L};
                        uint32_t l_812 = 0xDE87DD99L;
                        int i, j, k;
                        l_799 = l_797;
                        (*l_799) = (l_808[0][0][0] = (l_807 = (l_806 ^= ((l_801[0][0] ^= l_800.s0) , ((l_802 , (++l_803)) , 0x32D567EFL)))));
                        l_797 = (l_809 = l_809);
                        --l_812;
                    }
                }
                l_774 = (l_817 ^= (l_816 = l_815[2]));
            }
            else
            { /* block id: 391 */
                int32_t l_819 = 0x004E561DL;
                int32_t *l_818 = &l_819;
                VECTOR(int16_t, 16) l_820 = (VECTOR(int16_t, 16))(0x7D46L, (VECTOR(int16_t, 4))(0x7D46L, (VECTOR(int16_t, 2))(0x7D46L, 0x4880L), 0x4880L), 0x4880L, 0x7D46L, 0x4880L, (VECTOR(int16_t, 2))(0x7D46L, 0x4880L), (VECTOR(int16_t, 2))(0x7D46L, 0x4880L), 0x7D46L, 0x4880L, 0x7D46L, 0x4880L);
                VECTOR(int16_t, 8) l_821 = (VECTOR(int16_t, 8))(7L, (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, 0L), 0L), 0L, 7L, 0L);
                VECTOR(int16_t, 2) l_822 = (VECTOR(int16_t, 2))(0x5EEAL, 0L);
                int64_t l_823 = (-1L);
                uint8_t l_824 = 0x43L;
                uint64_t l_825 = 18446744073709551615UL;
                VECTOR(int32_t, 8) l_826 = (VECTOR(int32_t, 8))(0x69C2C565L, (VECTOR(int32_t, 4))(0x69C2C565L, (VECTOR(int32_t, 2))(0x69C2C565L, 0x468CE244L), 0x468CE244L), 0x468CE244L, 0x69C2C565L, 0x468CE244L);
                int32_t l_827 = 0x1F4ABCCEL;
                uint64_t l_828 = 0x195761DF6AF11DB1L;
                uint16_t l_829 = 65535UL;
                int32_t l_830 = 6L;
                int64_t l_831 = 0L;
                uint16_t l_832 = 0x0B59L;
                int32_t l_833 = 0L;
                uint32_t l_834 = 7UL;
                int64_t l_835 = 9L;
                uint16_t l_836 = 0UL;
                int32_t l_837 = 0x6883204BL;
                uint8_t l_838 = 246UL;
                uint64_t l_859[1][9][7] = {{{18446744073709551615UL,0xFB7FE5058E3B6419L,18446744073709551610UL,18446744073709551611UL,0x81233A2CB4337CC4L,18446744073709551611UL,18446744073709551610UL},{18446744073709551615UL,0xFB7FE5058E3B6419L,18446744073709551610UL,18446744073709551611UL,0x81233A2CB4337CC4L,18446744073709551611UL,18446744073709551610UL},{18446744073709551615UL,0xFB7FE5058E3B6419L,18446744073709551610UL,18446744073709551611UL,0x81233A2CB4337CC4L,18446744073709551611UL,18446744073709551610UL},{18446744073709551615UL,0xFB7FE5058E3B6419L,18446744073709551610UL,18446744073709551611UL,0x81233A2CB4337CC4L,18446744073709551611UL,18446744073709551610UL},{18446744073709551615UL,0xFB7FE5058E3B6419L,18446744073709551610UL,18446744073709551611UL,0x81233A2CB4337CC4L,18446744073709551611UL,18446744073709551610UL},{18446744073709551615UL,0xFB7FE5058E3B6419L,18446744073709551610UL,18446744073709551611UL,0x81233A2CB4337CC4L,18446744073709551611UL,18446744073709551610UL},{18446744073709551615UL,0xFB7FE5058E3B6419L,18446744073709551610UL,18446744073709551611UL,0x81233A2CB4337CC4L,18446744073709551611UL,18446744073709551610UL},{18446744073709551615UL,0xFB7FE5058E3B6419L,18446744073709551610UL,18446744073709551611UL,0x81233A2CB4337CC4L,18446744073709551611UL,18446744073709551610UL},{18446744073709551615UL,0xFB7FE5058E3B6419L,18446744073709551610UL,18446744073709551611UL,0x81233A2CB4337CC4L,18446744073709551611UL,18446744073709551610UL}}};
                int16_t l_860 = 5L;
                int i, j, k;
                l_818 = (void*)0;
                l_838 = ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 2))(l_820.s16)).yyxxxyxy, ((VECTOR(int16_t, 4))(l_821.s0143)).zywwzzyw))), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_822.xxxx)))), 0x2BFAL, l_823, 0L, 0x6CA3L)).lo, ((VECTOR(uint16_t, 4))((l_825 = (l_824 , 65526UL)), 0xB7E2L, 0xEFD8L, 65527UL)).zxwzzzyw))), ((VECTOR(int32_t, 16))((l_836 = (l_835 |= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(0x1AFF70D8L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_826.s2372)).xwyxwzwz)).s7, 0x55A16BCEL, (l_828 = l_827), ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(0x27DF3862L, 9L, (((VECTOR(uint8_t, 2))(0x12L, 0xD8L)).lo , (l_829 , (l_830 , (l_831 , 0x1EC7C09AL)))), 9L, l_832, l_833, 0x4BECF9A7L, 6L)).s05)).xxyx, ((VECTOR(int32_t, 4))((-1L)))))).xyywywwy, (int32_t)0x18E6A037L))), l_834, 0L, (-1L), (-9L))).s9b)).hi)), 0x5FD3102BL, ((VECTOR(int32_t, 2))(0x32236275L)), ((VECTOR(int32_t, 4))(0L)), l_837, 1L, ((VECTOR(int32_t, 2))(0x4AD33724L)), 0x2C8F5E67L, 1L, (-1L), 0x5F03810DL)).lo))).s7;
                for (l_820.s7 = (-25); (l_820.s7 == 8); l_820.s7 = safe_add_func_uint64_t_u_u(l_820.s7, 2))
                { /* block id: 400 */
                    int32_t l_841 = 0x3B4607D8L;
                    if (l_841)
                    { /* block id: 401 */
                        VECTOR(int16_t, 16) l_842 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x01B3L), 0x01B3L), 0x01B3L, 1L, 0x01B3L, (VECTOR(int16_t, 2))(1L, 0x01B3L), (VECTOR(int16_t, 2))(1L, 0x01B3L), 1L, 0x01B3L, 1L, 0x01B3L);
                        int64_t l_843 = 0x1867A0D84A7E0C18L;
                        int32_t *l_844 = (void*)0;
                        uint32_t l_845 = 0x76ACE301L;
                        int i;
                        l_830 ^= l_842.s6;
                        l_844 = (l_843 , (l_818 = (void*)0));
                        l_830 ^= l_845;
                    }
                    else
                    { /* block id: 406 */
                        int32_t l_846 = 0x290509E0L;
                        int8_t l_847 = 0x21L;
                        VECTOR(uint64_t, 16) l_848 = (VECTOR(uint64_t, 16))(5UL, (VECTOR(uint64_t, 4))(5UL, (VECTOR(uint64_t, 2))(5UL, 0xF38B40C9D784B3FFL), 0xF38B40C9D784B3FFL), 0xF38B40C9D784B3FFL, 5UL, 0xF38B40C9D784B3FFL, (VECTOR(uint64_t, 2))(5UL, 0xF38B40C9D784B3FFL), (VECTOR(uint64_t, 2))(5UL, 0xF38B40C9D784B3FFL), 5UL, 0xF38B40C9D784B3FFL, 5UL, 0xF38B40C9D784B3FFL);
                        int32_t l_849 = 0x35965ACBL;
                        int32_t l_851 = 0x70F120DAL;
                        int32_t *l_850 = &l_851;
                        int32_t *l_852[6];
                        int16_t l_853 = 0L;
                        int64_t l_854 = (-3L);
                        int32_t l_855 = 0x2AB50315L;
                        uint16_t l_856 = 0x33D3L;
                        int i;
                        for (i = 0; i < 6; i++)
                            l_852[i] = &l_851;
                        l_852[5] = (l_846 , ((l_849 = (l_848.s1 = l_847)) , (l_818 = l_850)));
                        (*l_818) = (l_853 , l_854);
                        l_856--;
                    }
                }
                l_860 = l_859[0][0][1];
            }
            unsigned int result = 0;
            result += l_751;
            result += l_752;
            result += l_769;
            result += l_770;
            result += l_773;
            atomic_add(&p_1311->l_special_values[5], result);
        }
        else
        { /* block id: 417 */
            (1 + 1);
        }
    }
    if (p_10)
    { /* block id: 421 */
        uint16_t l_870[7];
        uint16_t *l_871 = &p_1311->g_218;
        int i;
        for (i = 0; i < 7; i++)
            l_870[i] = 6UL;
        l_872 = (1UL > (4294967295UL != (!(((safe_mul_func_int8_t_s_s(p_1311->g_185.sc, (safe_rshift_func_uint16_t_u_s(((*l_871) &= ((FAKE_DIVERGE(p_1311->local_1_offset, get_local_id(1), 10) || ((p_11 | (-7L)) , (FAKE_DIVERGE(p_1311->group_1_offset, get_group_id(1), 10) , (1L | 0xF9L)))) | ((p_9 == (safe_div_func_int8_t_s_s((!(safe_unary_minus_func_int32_t_s(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(1L, 0x17DAE3D5L)).yxyyxyyx)).s6))), ((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 8))(l_868.s783928e8)).s02, ((VECTOR(uint8_t, 16))(l_869.yxxxxxyxyxyyxxxy)).s32))).lo))) || l_870[3]))), l_868.s6)))) != FAKE_DIVERGE(p_1311->group_2_offset, get_group_id(2), 10)) < (-1L)))));
    }
    else
    { /* block id: 424 */
        int32_t *l_921[9][10][2] = {{{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108}},{{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108}},{{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108}},{{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108}},{{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108}},{{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108}},{{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108}},{{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108}},{{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108},{(void*)0,&p_1311->g_108}}};
        int i, j, k;
        for (p_1311->g_125 = 0; (p_1311->g_125 == 58); p_1311->g_125 = safe_add_func_uint16_t_u_u(p_1311->g_125, 2))
        { /* block id: 427 */
            if ((atomic_inc(&p_1311->l_atomic_input[2]) == 2))
            { /* block id: 429 */
                uint16_t l_875[4][9] = {{65526UL,65526UL,65529UL,0x5397L,0x3721L,0x5397L,65529UL,65526UL,65526UL},{65526UL,65526UL,65529UL,0x5397L,0x3721L,0x5397L,65529UL,65526UL,65526UL},{65526UL,65526UL,65529UL,0x5397L,0x3721L,0x5397L,65529UL,65526UL,65526UL},{65526UL,65526UL,65529UL,0x5397L,0x3721L,0x5397L,65529UL,65526UL,65526UL}};
                int i, j;
                if (l_875[1][5])
                { /* block id: 430 */
                    int32_t l_876[3];
                    uint8_t l_877 = 0xE8L;
                    uint32_t l_878 = 0x602F0CBEL;
                    uint32_t l_879[8];
                    int16_t l_880 = (-1L);
                    uint16_t l_881[7] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL};
                    int i;
                    for (i = 0; i < 3; i++)
                        l_876[i] = (-2L);
                    for (i = 0; i < 8; i++)
                        l_879[i] = 4294967293UL;
                    if ((l_881[0] = ((l_877 = (l_876[0] , 0x42B24180L)) , (l_880 = ((l_879[6] &= l_878) , 0L)))))
                    { /* block id: 435 */
                        int32_t l_883 = (-1L);
                        int32_t *l_882 = &l_883;
                        l_882 = (void*)0;
                    }
                    else
                    { /* block id: 437 */
                        int16_t l_886 = (-1L);
                        int16_t *l_885 = &l_886;
                        int16_t **l_884 = &l_885;
                        uint64_t l_887 = 1UL;
                        uint32_t l_890[2][2][9] = {{{0xA6CFC4AEL,0x699D65B4L,0xA6CFC4AEL,0xA6CFC4AEL,0x699D65B4L,0xA6CFC4AEL,0xA6CFC4AEL,0x699D65B4L,0xA6CFC4AEL},{0xA6CFC4AEL,0x699D65B4L,0xA6CFC4AEL,0xA6CFC4AEL,0x699D65B4L,0xA6CFC4AEL,0xA6CFC4AEL,0x699D65B4L,0xA6CFC4AEL}},{{0xA6CFC4AEL,0x699D65B4L,0xA6CFC4AEL,0xA6CFC4AEL,0x699D65B4L,0xA6CFC4AEL,0xA6CFC4AEL,0x699D65B4L,0xA6CFC4AEL},{0xA6CFC4AEL,0x699D65B4L,0xA6CFC4AEL,0xA6CFC4AEL,0x699D65B4L,0xA6CFC4AEL,0xA6CFC4AEL,0x699D65B4L,0xA6CFC4AEL}}};
                        uint64_t l_891 = 0xFCA8BC77A0C14682L;
                        int i, j, k;
                        l_884 = (void*)0;
                        ++l_887;
                        l_891 = l_890[1][0][2];
                    }
                }
                else
                { /* block id: 442 */
                    int32_t l_892 = 0x62A30FDFL;
                    uint16_t l_901 = 65535UL;
                    uint16_t l_902 = 65530UL;
                    int32_t l_903 = 0x16EFA609L;
                    int32_t *l_904 = &l_892;
                    VECTOR(int32_t, 8) l_905 = (VECTOR(int32_t, 8))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 3L), 3L), 3L, (-7L), 3L);
                    uint8_t l_906 = 0x78L;
                    int32_t l_907 = 0x7A148ACCL;
                    uint16_t l_908[7][9] = {{65531UL,65531UL,0x77D3L,0xAF47L,0x4B6AL,0xAF47L,0x77D3L,65531UL,65531UL},{65531UL,65531UL,0x77D3L,0xAF47L,0x4B6AL,0xAF47L,0x77D3L,65531UL,65531UL},{65531UL,65531UL,0x77D3L,0xAF47L,0x4B6AL,0xAF47L,0x77D3L,65531UL,65531UL},{65531UL,65531UL,0x77D3L,0xAF47L,0x4B6AL,0xAF47L,0x77D3L,65531UL,65531UL},{65531UL,65531UL,0x77D3L,0xAF47L,0x4B6AL,0xAF47L,0x77D3L,65531UL,65531UL},{65531UL,65531UL,0x77D3L,0xAF47L,0x4B6AL,0xAF47L,0x77D3L,65531UL,65531UL},{65531UL,65531UL,0x77D3L,0xAF47L,0x4B6AL,0xAF47L,0x77D3L,65531UL,65531UL}};
                    int i, j;
                    for (l_892 = 20; (l_892 >= (-12)); l_892 = safe_sub_func_int32_t_s_s(l_892, 5))
                    { /* block id: 445 */
                        int32_t *l_895 = (void*)0;
                        int32_t l_897 = 0L;
                        int32_t *l_896 = &l_897;
                        int32_t l_898[4][1] = {{0x4056A652L},{0x4056A652L},{0x4056A652L},{0x4056A652L}};
                        int32_t *l_899 = &l_897;
                        int32_t *l_900 = &l_897;
                        int i, j;
                        l_895 = (l_896 = l_895);
                        l_900 = (l_899 = ((l_898[1][0] |= 0x6AL) , (void*)0));
                    }
                    l_903 |= (l_902 ^= l_901);
                    l_904 = (void*)0;
                    if ((l_908[2][5] = (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_905.s1555)))).x , (l_906 , l_907))))
                    { /* block id: 456 */
                        VECTOR(int8_t, 8) l_909 = (VECTOR(int8_t, 8))(3L, (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, 2L), 2L), 2L, 3L, 2L);
                        uint32_t l_910 = 0xA2DB0E63L;
                        uint8_t l_911 = 255UL;
                        int32_t l_913 = 0x420A2E87L;
                        int32_t *l_912 = &l_913;
                        int32_t *l_914 = &l_913;
                        int32_t l_915 = (-3L);
                        uint32_t l_916[10][4] = {{0x1FD3FE7BL,4294967295UL,0x1FD3FE7BL,0x1FD3FE7BL},{0x1FD3FE7BL,4294967295UL,0x1FD3FE7BL,0x1FD3FE7BL},{0x1FD3FE7BL,4294967295UL,0x1FD3FE7BL,0x1FD3FE7BL},{0x1FD3FE7BL,4294967295UL,0x1FD3FE7BL,0x1FD3FE7BL},{0x1FD3FE7BL,4294967295UL,0x1FD3FE7BL,0x1FD3FE7BL},{0x1FD3FE7BL,4294967295UL,0x1FD3FE7BL,0x1FD3FE7BL},{0x1FD3FE7BL,4294967295UL,0x1FD3FE7BL,0x1FD3FE7BL},{0x1FD3FE7BL,4294967295UL,0x1FD3FE7BL,0x1FD3FE7BL},{0x1FD3FE7BL,4294967295UL,0x1FD3FE7BL,0x1FD3FE7BL},{0x1FD3FE7BL,4294967295UL,0x1FD3FE7BL,0x1FD3FE7BL}};
                        int64_t l_919 = 0x021FEEFFEC1938DDL;
                        int i, j;
                        l_914 = (l_904 = (((VECTOR(int8_t, 16))(0x17L, 0x47L, 1L, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_909.s43)).xyxyyxxx)), l_910, ((VECTOR(int8_t, 2))(0x41L, (-5L))), (-6L), 0x00L)).s8 , (l_911 , l_912)));
                        (*l_904) = l_915;
                        l_916[4][0]--;
                        (*l_904) = l_919;
                    }
                    else
                    { /* block id: 462 */
                        uint64_t l_920 = 0x2BB931A92C331C0BL;
                        l_920 = 0x20C48FFBL;
                    }
                }
                unsigned int result = 0;
                int l_875_i0, l_875_i1;
                for (l_875_i0 = 0; l_875_i0 < 4; l_875_i0++) {
                    for (l_875_i1 = 0; l_875_i1 < 9; l_875_i1++) {
                        result += l_875[l_875_i0][l_875_i1];
                    }
                }
                atomic_add(&p_1311->l_special_values[2], result);
            }
            else
            { /* block id: 466 */
                (1 + 1);
            }
        }
        p_1311->g_922++;
        (*p_1311->g_925) = l_921[7][0][1];
    }
    for (p_1311->g_748 = 0; (p_1311->g_748 >= 23); ++p_1311->g_748)
    { /* block id: 475 */
        int32_t l_931 = 0x7FE97EDFL;
        int64_t *l_941 = (void*)0;
        int32_t l_942 = 0x0333D59DL;
        VECTOR(int32_t, 8) l_955 = (VECTOR(int32_t, 8))(0x4FE67967L, (VECTOR(int32_t, 4))(0x4FE67967L, (VECTOR(int32_t, 2))(0x4FE67967L, 5L), 5L), 5L, 0x4FE67967L, 5L);
        VECTOR(int32_t, 4) l_956 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-2L)), (-2L));
        VECTOR(int32_t, 4) l_957 = (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0L), 0L);
        VECTOR(int32_t, 16) l_958 = (VECTOR(int32_t, 16))(0x5A51FB91L, (VECTOR(int32_t, 4))(0x5A51FB91L, (VECTOR(int32_t, 2))(0x5A51FB91L, 1L), 1L), 1L, 0x5A51FB91L, 1L, (VECTOR(int32_t, 2))(0x5A51FB91L, 1L), (VECTOR(int32_t, 2))(0x5A51FB91L, 1L), 0x5A51FB91L, 1L, 0x5A51FB91L, 1L);
        int16_t l_959 = 0L;
        int16_t *l_960 = &l_959;
        int64_t *l_961[4][1][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int i, j, k;
        l_958.s6 = ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_1311->g_928.s23)).xyyx)).xzzxwwzwxzzxxwzx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((p_1311->g_75.s1 = ((safe_sub_func_uint8_t_u_u(((l_931 < ((VECTOR(uint32_t, 4))(l_932.yxyx)).z) , (&p_1311->g_925 != l_933)), (((safe_mod_func_int16_t_s_s(((*l_960) = (((safe_lshift_func_uint16_t_u_s((safe_div_func_int64_t_s_s((l_942 = l_931), p_10)), 11)) > ((VECTOR(int32_t, 2))(p_1311->g_943.xw)).even) & (safe_sub_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_s(0x12L, 3)) , ((((safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(l_931, 6)), p_1311->g_456)) , (((VECTOR(uint8_t, 2))(0x35L, 0x58L)).hi , (safe_div_func_int32_t_s_s(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_954.s16)).xyyx)), 0x6CC0B526L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_955.s22441272)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x1FE89529L, 0x25244FE9L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(l_956.wwxwyxwwyyzwxzxx)).sf6))), ((VECTOR(int32_t, 2))(l_957.xz))))).yyyxxxyxyxxxxxxy, ((VECTOR(int32_t, 16))(l_958.s257f386d3b8db698)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x79CA2F53L, (-1L))), 0x2C7576E6L, 0L)).xywzxyywxzxwywxy))).sd542)), (-1L), 0x743921C6L)))).even)), (-4L), 6L, 1L, 0x3AB955A3L)).seb)), ((VECTOR(int32_t, 8))((-9L), 0x29E83061L, 1L, ((VECTOR(int32_t, 2))(5L)), ((VECTOR(int32_t, 2))(0x7801523BL)), (-7L))), 1L)).s5a)).yyyxxxyyyxyxyyxy)).s4b, ((VECTOR(int32_t, 2))(0L))))).hi, p_11)))) == p_1311->g_125) && p_9)) | p_8), l_959)))), l_957.y)) || 1L) , (-10L)))) == 0xEBC0L)) ^ 18446744073709551610UL), (-1L), p_8, ((VECTOR(int32_t, 2))(0x0CAFF374L)), ((VECTOR(int32_t, 2))((-1L))), 0x6D5B3B1BL)))).s6616255053022077))).odd, ((VECTOR(int32_t, 8))(0L)), ((VECTOR(int32_t, 8))(0x492F0B24L))))).s60)).yxyx)).zzzxwwxzzzwyyyyx, ((VECTOR(int32_t, 16))(0x67D33C16L))))).s4;
    }
    return p_10;
}


/* ------------------------------------------ */
/* 
 * reads : p_1311->g_661 p_1311->g_681 p_1311->g_682 p_1311->g_684 p_1311->g_688 p_1311->g_456 p_1311->g_116 p_1311->g_78 p_1311->g_573 p_1311->g_205 p_1311->g_75 p_1311->g_26 p_1311->g_34 p_1311->g_699 p_1311->g_53 p_1311->g_50 p_1311->g_241 p_1311->g_96 p_1311->g_81 p_1311->g_126
 * writes: p_1311->g_35 p_1311->g_419 p_1311->g_81
 */
uint16_t  func_18(int64_t  p_19, int32_t  p_20, struct S0 * p_1311)
{ /* block id: 315 */
    VECTOR(int8_t, 2) l_668 = (VECTOR(int8_t, 2))(0x07L, (-2L));
    VECTOR(int8_t, 8) l_669 = (VECTOR(int8_t, 8))(3L, (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, (-10L)), (-10L)), (-10L), 3L, (-10L));
    VECTOR(int8_t, 8) l_670 = (VECTOR(int8_t, 8))(0x5EL, (VECTOR(int8_t, 4))(0x5EL, (VECTOR(int8_t, 2))(0x5EL, 0x2DL), 0x2DL), 0x2DL, 0x5EL, 0x2DL);
    VECTOR(int16_t, 16) l_677 = (VECTOR(int16_t, 16))(8L, (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 0x7B87L), 0x7B87L), 0x7B87L, 8L, 0x7B87L, (VECTOR(int16_t, 2))(8L, 0x7B87L), (VECTOR(int16_t, 2))(8L, 0x7B87L), 8L, 0x7B87L, 8L, 0x7B87L);
    VECTOR(int64_t, 8) l_680 = (VECTOR(int64_t, 8))(0x283A2EC829D57B55L, (VECTOR(int64_t, 4))(0x283A2EC829D57B55L, (VECTOR(int64_t, 2))(0x283A2EC829D57B55L, 0x1C99260EA3412FC6L), 0x1C99260EA3412FC6L), 0x1C99260EA3412FC6L, 0x283A2EC829D57B55L, 0x1C99260EA3412FC6L);
    VECTOR(uint64_t, 8) l_683 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL);
    VECTOR(uint64_t, 4) l_685 = (VECTOR(uint64_t, 4))(0xCCDC27AF77C4F578L, (VECTOR(uint64_t, 2))(0xCCDC27AF77C4F578L, 0x9C33790B3243AF87L), 0x9C33790B3243AF87L);
    VECTOR(uint16_t, 8) l_689 = (VECTOR(uint16_t, 8))(65531UL, (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 0x8E1EL), 0x8E1EL), 0x8E1EL, 65531UL, 0x8E1EL);
    uint32_t *l_692[10];
    int32_t l_693 = 1L;
    int32_t l_694 = 3L;
    int32_t *l_695 = &p_1311->g_96;
    VECTOR(int8_t, 4) l_700 = (VECTOR(int8_t, 4))(0x1CL, (VECTOR(int8_t, 2))(0x1CL, (-5L)), (-5L));
    uint64_t l_730 = 0xFF2979F8C9900DEEL;
    int i;
    for (i = 0; i < 10; i++)
        l_692[i] = (void*)0;
    (*p_1311->g_34) = (+(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0xCA6DL, 0UL)).yxyyxxyy)).s45, ((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(65532UL, 3UL)), 0xD907L, 8UL)).yzyxyzzxxwwwywzy)).lo, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(p_1311->g_661.s7770067241207233)).s54eb)).zwwzyxzx))).s64))).xyxx, ((VECTOR(uint16_t, 8))(((safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((safe_div_func_uint32_t_u_u(((l_694 = ((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_668.xy)).yyyxxyxx)).hi, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_669.s07)), ((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(0x0CL, (-1L), 1L, 0x3EL)))).zxyxzxxz, ((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 16))(l_670.s5434675736175624)).hi)))))), ((VECTOR(int8_t, 2))(0L, (-5L))).yyyyxxxy))).s4, ((safe_div_func_uint32_t_u_u(((((void*)0 == &p_19) | ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(add_sat(((VECTOR(uint32_t, 16))(((GROUP_DIVERGE(2, 1) || ((((safe_div_func_uint16_t_u_u((((((safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(l_677.sf4cfeeccca8b6870)).s020a)).lo)).odd, (((void*)0 == &p_1311->g_268[5][5][2]) , (-3L)))) > (safe_mod_func_uint32_t_u_u((l_693 &= (((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(abs_diff(((VECTOR(int64_t, 16))(l_680.s3042707233004257)).odd, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x34AD46D9ADF28D87L, (-7L))), 0x1958C290F23000A4L, 0L)).xwzyyyxz))).s20)), 0xBD50700946E9BF9DL, 18446744073709551608UL)), ((VECTOR(uint64_t, 8))(min(((VECTOR(uint64_t, 2))(p_1311->g_681.s9a)).yyyxyyyy, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(0x7559AC7280F2F9C2L, 0x55EB21EFC6EDFF34L, ((VECTOR(uint64_t, 8))(p_1311->g_682.s42007075)), 0x3A42B31332C50F7DL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(l_683.s22621104)))).hi)).x, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(p_1311->g_684.wx)).yyxyyxxxxxyxxyyy)).s9014)))).s3cac)).xzwzxzyx))), 7UL, ((VECTOR(uint64_t, 2))(l_685.zw)), 1UL)).sa | (((l_683.s5 , (!(safe_sub_func_uint32_t_u_u(p_19, (((VECTOR(uint32_t, 2))(0xDA8E943DL, 0x69193E72L)).odd | ((VECTOR(uint32_t, 16))(0UL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(upsample(((VECTOR(uint16_t, 2))(4UL, 65535UL)).yxyyyyyy, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 2))(0xBEADL, 1UL)), ((VECTOR(uint16_t, 2))(0x9F53L, 0x2999L)), ((VECTOR(uint16_t, 8))(1UL, 0x74C4L, ((VECTOR(uint16_t, 2))(p_1311->g_688.s75)), ((VECTOR(uint16_t, 2))(l_689.s13)), 1UL, 65530UL)).s66))).yyxy, (uint16_t)((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 16))(max(((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 16))(2UL, 0x41L, (((safe_lshift_func_uint8_t_u_u(8UL, 1)) == p_1311->g_456) < p_1311->g_116.sa), 247UL, 4UL, 7UL, 255UL, 255UL, 255UL, l_680.s2, 1UL, 0UL, 251UL, 0xD1L, 0UL, 0x79L)).lo, ((VECTOR(uint8_t, 8))(255UL))))).s4657117603333645, (uint8_t)p_1311->g_78.y))).even, ((VECTOR(uint8_t, 8))(250UL))))).s4))), ((VECTOR(uint16_t, 4))(65535UL))))), ((VECTOR(uint16_t, 4))(0x095CL))))).hi, ((VECTOR(uint16_t, 2))(0UL))))).yyyyyxyy, ((VECTOR(uint16_t, 8))(0x8396L))))).s04)).xxxxxyxx))).s2355414740407526)).s61)), p_20, p_20, p_1311->g_573.s5, ((VECTOR(uint32_t, 2))(0UL)), p_19, ((VECTOR(uint32_t, 2))(4294967287UL)), l_680.s7, ((VECTOR(uint32_t, 4))(4294967292UL)))).sa))))) & (-1L)) , l_670.s3))), p_1311->g_205.x))) <= FAKE_DIVERGE(p_1311->group_1_offset, get_group_id(1), 10)) , (void*)0) != (void*)0), GROUP_DIVERGE(0, 1))) <= p_19) == l_680.s1) || 0x7ED0L)) ^ FAKE_DIVERGE(p_1311->group_1_offset, get_group_id(1), 10)), 0xE661F542L, 0xB76B959BL, GROUP_DIVERGE(1, 1), ((VECTOR(uint32_t, 8))(4294967291UL)), 0xF9D690D2L, 1UL, 0UL, 0xDFBFC590L)).lo, ((VECTOR(uint32_t, 8))(0xACE82805L))))))).s0) , l_670.s7), p_20)) , p_20), 1L, p_1311->g_75.s2, 1L, 0x59L)).s04))).xxyxxyyxyyyyyxyx)).s08e0)), ((VECTOR(int8_t, 4))(0x65L))))).y) , FAKE_DIVERGE(p_1311->local_1_offset, get_local_id(1), 10)), 4294967292UL)) <= 0x9D8365A84204F4B9L), 0x4922L)), l_689.s3)) , p_1311->g_26.y), 2UL, GROUP_DIVERGE(1, 1), ((VECTOR(uint16_t, 2))(0UL)), 1UL, 0x70DBL, 0x5C1FL)).lo))))).y > p_19));
    l_695 = (p_20 , &p_20);
    for (p_19 = 0; (p_19 != (-17)); --p_19)
    { /* block id: 322 */
        VECTOR(uint16_t, 4) l_703 = (VECTOR(uint16_t, 4))(0xD729L, (VECTOR(uint16_t, 2))(0xD729L, 65530UL), 65530UL);
        uint32_t l_707 = 4294967295UL;
        uint32_t ***l_717 = &p_1311->g_419;
        uint32_t **l_719 = &l_692[7];
        uint32_t ***l_718 = &l_719;
        uint16_t *l_731 = &p_1311->g_81;
        int i, j;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_1311->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 49)), permutations[(safe_mod_func_uint32_t_u_u(((safe_unary_minus_func_int8_t_s(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(0x05L, (-6L), 0x53L, 0L)).xywzzxzyzzzwxxwx)).s9a65, ((VECTOR(int8_t, 8))(p_1311->g_699.yyyyyyyy)).lo, ((VECTOR(int8_t, 2))(l_700.wy)).yyxx))).x)) || ((safe_mod_func_int32_t_s_s((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(p_1311->g_53[2], ((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_703.zyyy)).wxyyxwzz)), 65528UL, 0x3EDFL, 65535UL, ((*l_731) = (safe_unary_minus_func_uint64_t_u((((safe_lshift_func_uint16_t_u_u(((((18446744073709551615UL ^ ((*l_695) = l_707)) , (safe_rshift_func_int16_t_s_u((safe_unary_minus_func_int16_t_s((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 8))((*l_695), 18446744073709551615UL, ((VECTOR(uint64_t, 16))(((safe_lshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((+((((*l_717) = &l_692[9]) != ((*l_718) = &l_692[9])) < (safe_mod_func_uint64_t_u_u((((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 8))(0UL, 0xA67CL, (((*l_695) = (safe_mod_func_int16_t_s_s((safe_mod_func_int8_t_s_s((p_1311->g_50 && ((safe_mod_func_int32_t_s_s((p_1311->g_241.y , (-1L)), 0x14B60631L)) || l_703.y)), l_703.z)), p_20))) & 1UL), ((VECTOR(uint16_t, 4))(65534UL)), 0x4C0DL)).s21, ((VECTOR(uint16_t, 2))(0x4E21L))))).xyyyxyyy, ((VECTOR(uint16_t, 8))(65535UL))))).s6, l_703.w)) , GROUP_DIVERGE(2, 1)) && p_1311->g_682.s2), 0x6D86746C9EEBFA17L)))), 0xC3BF5F1BL)), l_703.y)) || (*l_695)), 0x96BFFA77FCAF7D47L, ((VECTOR(uint64_t, 2))(0x8F9A5B9E4A3A3472L)), ((VECTOR(uint64_t, 8))(8UL)), 0xA50DCED834998FCFL, ((VECTOR(uint64_t, 2))(0x404473D36CF15ECDL)), 0UL)).s4, GROUP_DIVERGE(1, 1), ((VECTOR(uint64_t, 4))(9UL)))).s7, 2UL)))), p_1311->g_661.s3))) == p_19) < p_19), p_1311->g_75.s5)) != l_730) & p_19)))), ((VECTOR(uint16_t, 4))(0x01A4L)))).s43, ((VECTOR(uint16_t, 2))(0x4DB3L))))), 0x9BF1L, p_1311->g_205.y, p_20, 0UL, 0xC1BAL)).hi)).z ^ 0xAA35L), 0x9D814530L)) < p_1311->g_96)), 10))][(safe_mod_func_uint32_t_u_u(p_1311->tid, 49))]));
        for (p_1311->g_81 = 3; (p_1311->g_81 <= 5); ++p_1311->g_81)
        { /* block id: 333 */
            p_20 = 0x21ECC050L;
        }
        if ((*l_695))
            break;
    }
    return p_1311->g_126.se;
}


/* ------------------------------------------ */
/* 
 * reads : p_1311->g_28 p_1311->g_12 p_1311->g_34 p_1311->g_49 p_1311->g_54 p_1311->l_comm_values p_1311->g_50 p_1311->g_81 p_1311->g_108 p_1311->g_84 p_1311->g_116 p_1311->g_126 p_1311->g_185 p_1311->g_268 p_1311->g_125 p_1311->g_241 p_1311->g_206 p_1311->g_208 p_1311->g_285 p_1311->g_331 p_1311->g_53 p_1311->g_201 p_1311->g_347 p_1311->g_358 p_1311->g_77 p_1311->g_218 p_1311->g_490 p_1311->g_510 p_1311->g_184 p_1311->g_456 p_1311->g_545 p_1311->g_552 p_1311->g_205 p_1311->g_78 p_1311->g_568 p_1311->g_573 p_1311->g_247 p_1311->g_96 p_1311->g_585 p_1311->g_514 p_1311->g_588 p_1311->g_597 p_1311->g_75 p_1311->g_comm_values p_1311->g_332
 * writes: p_1311->g_28 p_1311->g_54 p_1311->g_81 p_1311->g_84 p_1311->g_50 p_1311->g_96 p_1311->g_108 p_1311->g_53 p_1311->g_185 p_1311->g_218 p_1311->g_49 p_1311->g_125 p_1311->g_358 p_1311->g_268 p_1311->g_519 p_1311->g_75 p_1311->g_490 p_1311->g_201
 */
uint32_t  func_21(int32_t  p_22, struct S0 * p_1311)
{ /* block id: 5 */
    uint16_t l_31 = 0xEF6FL;
    int32_t **l_642 = (void*)0;
    if (p_22)
    { /* block id: 6 */
        int32_t *l_27[6];
        int i;
        for (i = 0; i < 6; i++)
            l_27[i] = (void*)0;
        p_1311->g_28++;
        return l_31;
    }
    else
    { /* block id: 9 */
        uint64_t *l_583 = &p_1311->g_268[7][2][1];
        int32_t *l_584 = (void*)0;
        if (((p_1311->g_12.s8 > (safe_rshift_func_int8_t_s_s(((p_22 &= (-1L)) > ((~((void*)0 != p_1311->g_34)) <= (((safe_mod_func_int64_t_s_s((func_38((+((*l_583) = (~((safe_rshift_func_uint16_t_u_u((0xA3D35555L ^ (safe_div_func_int8_t_s_s(func_47(p_1311->g_49, p_1311), p_1311->g_490))), 0)) & p_1311->g_116.s2)))), l_584, p_1311->g_585, p_1311->g_514, p_1311) , 5L), p_1311->g_12.s4)) , p_1311->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1311->tid, 49))]) , p_1311->g_96))), p_1311->g_247.s2))) , 0x2526C084L))
        { /* block id: 280 */
            for (l_31 = 0; (l_31 >= 33); l_31 = safe_add_func_uint32_t_u_u(l_31, 9))
            { /* block id: 283 */
                return p_1311->g_comm_values[p_1311->tid];
            }
            if ((atomic_inc(&p_1311->l_atomic_input[18]) == 2))
            { /* block id: 287 */
                uint64_t l_631 = 0x45129E9D78C0DB7CL;
                int32_t l_635 = 0x58D06C99L;
                int32_t *l_634[1];
                int32_t *l_636 = &l_635;
                uint32_t l_637 = 1UL;
                int32_t l_638 = 0x1D7CA3E4L;
                uint32_t l_639 = 0x5FDD42F2L;
                int64_t l_640 = (-6L);
                uint64_t l_641 = 0x6E0A0F987797E73AL;
                int i;
                for (i = 0; i < 1; i++)
                    l_634[i] = &l_635;
                --l_631;
                l_636 = l_634[0];
                l_641 |= (l_640 = (l_639 = (l_638 = ((VECTOR(int32_t, 4))(l_637, 1L, 0x21D188C7L, 1L)).z)));
                unsigned int result = 0;
                result += l_631;
                result += l_635;
                result += l_637;
                result += l_638;
                result += l_639;
                result += l_640;
                result += l_641;
                atomic_add(&p_1311->l_special_values[18], result);
            }
            else
            { /* block id: 294 */
                (1 + 1);
            }
        }
        else
        { /* block id: 297 */
            uint64_t **l_643[9] = {&l_583,&l_583,&l_583,&l_583,&l_583,&l_583,&l_583,&l_583,&l_583};
            uint32_t ***l_646 = &p_1311->g_419;
            int32_t ***l_651 = (void*)0;
            int32_t ***l_652 = &l_642;
            int32_t *l_653 = &p_1311->g_96;
            int32_t *l_658 = &p_1311->g_108;
            int i;
            p_22 = (2L ^ ((((void*)0 != l_642) && 0x69745E2367775A61L) , (((p_1311->g_201.x |= ((l_643[4] != (void*)0) , (((safe_sub_func_uint32_t_u_u(((void*)0 != l_646), ((*l_653) |= (((safe_add_func_int64_t_s_s(((safe_div_func_uint16_t_u_u((((*l_652) = &p_1311->g_84) == (*p_1311->g_331)), p_22)) || p_22), p_1311->g_347.y)) | p_1311->g_50) & p_22)))) ^ 0x43DAE49E52EE5CA9L) < p_22))) < 0x0987L) ^ 0x9EL)));
            for (p_1311->g_490 = 0; (p_1311->g_490 == 9); ++p_1311->g_490)
            { /* block id: 304 */
                VECTOR(int32_t, 8) l_656 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x5506D42EL), 0x5506D42EL), 0x5506D42EL, 0L, 0x5506D42EL);
                VECTOR(int32_t, 2) l_657 = (VECTOR(int32_t, 2))(6L, (-5L));
                int i;
                (*l_653) |= ((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_656.s66124644)))).s40, ((VECTOR(int32_t, 8))(0x36938DACL, 0x0FD9038BL, 1L, 0x3168C63DL, 0x421F4E8CL, (-4L), 0L, (-10L))).s52))), (-3L), 0x4FB7211BL)).wwzzxyyyzxwyxzwy, ((VECTOR(int32_t, 16))(l_657.xxyxyxxyyyyyyxxy))))).sc;
                (*l_653) = (&l_584 != (void*)0);
                (*l_642) = l_658;
                (*l_653) |= ((*l_658) |= p_22);
            }
            return p_22;
        }
    }
    return l_31;
}


/* ------------------------------------------ */
/* 
 * reads : p_1311->g_81 p_1311->g_588 p_1311->g_597 p_1311->g_50 p_1311->g_184 p_1311->g_96 p_1311->g_75 p_1311->g_126 p_1311->g_490
 * writes: p_1311->g_81 p_1311->g_125 p_1311->g_96 p_1311->g_75 p_1311->g_490
 */
uint64_t  func_38(uint64_t  p_39, int32_t * p_40, int32_t * p_41, uint8_t  p_42, struct S0 * p_1311)
{ /* block id: 262 */
    uint32_t l_608 = 0x7FD64744L;
    int32_t l_612 = 0x59CFAEE4L;
    VECTOR(int16_t, 4) l_620 = (VECTOR(int16_t, 4))(0x196BL, (VECTOR(int16_t, 2))(0x196BL, 0x069FL), 0x069FL);
    uint64_t **l_623[10];
    int32_t *l_624 = &l_612;
    int i;
    for (i = 0; i < 10; i++)
        l_623[i] = (void*)0;
    for (p_1311->g_81 = 0; (p_1311->g_81 >= 44); p_1311->g_81++)
    { /* block id: 265 */
        int32_t l_602[6] = {0x43025EBDL,0x43025EBDL,0x43025EBDL,0x43025EBDL,0x43025EBDL,0x43025EBDL};
        uint32_t **l_607 = (void*)0;
        int64_t *l_609[10][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int32_t l_610 = 0x0E485DB2L;
        uint8_t *l_611 = (void*)0;
        int32_t *l_613 = &p_1311->g_96;
        uint64_t *l_622 = &p_1311->g_268[5][5][2];
        uint64_t **l_621 = &l_622;
        int64_t l_625 = 0x2E32DEB9C04E9FF8L;
        int i, j;
        (*l_613) = (((((VECTOR(uint8_t, 2))(p_1311->g_588.wz)).odd , (safe_add_func_uint8_t_u_u((p_1311->g_125 = (l_612 |= ((safe_div_func_uint64_t_u_u(((safe_div_func_uint16_t_u_u(((((safe_lshift_func_uint16_t_u_s(65534UL, (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(p_1311->g_597.se32e)), ((~0x048E7EB0L) != ((p_42 , 0UL) > (l_610 |= (safe_div_func_int16_t_s_s((p_1311->g_50 | ((safe_mod_func_uint16_t_u_u((p_42 ^ ((l_602[2] >= 254UL) <= (safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s((l_607 == (void*)0), l_608)), (-1L))))), p_1311->g_597.s9)) > l_608)), l_602[2]))))), p_39, FAKE_DIVERGE(p_1311->group_0_offset, get_group_id(0), 10), 0xE1EED436L, 0x8D9F0620L, 0x8EF4F97EL, ((VECTOR(uint32_t, 4))(0x963236CDL)), 4294967287UL, 0xC0500B04L)).s8 || p_1311->g_184.s3))) , (void*)0) != &p_1311->g_125) && 0x181DL), l_602[2])) && 0x313B9D68L), 0x16D4D6958B0C90E8L)) <= p_39))), l_608))) <= 0x24L) , l_602[0]);
        l_625 &= (((safe_add_func_int64_t_s_s((p_1311->g_75.s5 ^= (safe_sub_func_uint64_t_u_u(p_1311->g_597.s3, (*l_613)))), (0x33C1L & (((safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 8))(l_620.ywwzwyzy)).s7, (p_1311->g_126.s0 || 0x6CF50226L))) , l_621) != l_623[0])))) & (p_39 <= ((void*)0 == l_624))) , 0L);
    }
    for (p_1311->g_490 = 0; (p_1311->g_490 > 38); ++p_1311->g_490)
    { /* block id: 275 */
        int32_t **l_628 = &l_624;
        (*l_628) = p_41;
        return p_39;
    }
    return p_1311->g_597.s9;
}


/* ------------------------------------------ */
/* 
 * reads : p_1311->g_54 p_1311->l_comm_values p_1311->g_50 p_1311->g_81 p_1311->g_108 p_1311->g_84 p_1311->g_116 p_1311->g_126 p_1311->g_49 p_1311->g_185 p_1311->g_268 p_1311->g_125 p_1311->g_241 p_1311->g_206 p_1311->g_208 p_1311->g_285 p_1311->g_331 p_1311->g_53 p_1311->g_201 p_1311->g_347 p_1311->g_358 p_1311->g_77 p_1311->g_28 p_1311->g_218 p_1311->g_490 p_1311->g_510 p_1311->g_184 p_1311->g_456 p_1311->g_545 p_1311->g_552 p_1311->g_205 p_1311->g_78 p_1311->g_568 p_1311->g_573 p_1311->g_247 p_1311->g_96
 * writes: p_1311->g_54 p_1311->g_28 p_1311->g_81 p_1311->g_84 p_1311->g_50 p_1311->g_96 p_1311->g_108 p_1311->g_53 p_1311->g_185 p_1311->g_218 p_1311->g_49 p_1311->g_125 p_1311->g_358 p_1311->g_268 p_1311->g_519
 */
int8_t  func_47(int32_t * p_48, struct S0 * p_1311)
{ /* block id: 11 */
    int64_t l_51 = (-9L);
    int32_t *l_52[3][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    VECTOR(int32_t, 2) l_300 = (VECTOR(int32_t, 2))(0x185ECD89L, 0x2D4B0A3DL);
    int32_t l_305 = 3L;
    int32_t **l_334 = &p_1311->g_49;
    int32_t ***l_333 = &l_334;
    VECTOR(int32_t, 4) l_353 = (VECTOR(int32_t, 4))(0x3EA298D6L, (VECTOR(int32_t, 2))(0x3EA298D6L, (-3L)), (-3L));
    uint64_t *l_403 = &p_1311->g_268[0][5][3];
    uint32_t *l_422 = (void*)0;
    uint32_t **l_421[6][8] = {{&l_422,&l_422,&l_422,&l_422,&l_422,(void*)0,(void*)0,&l_422},{&l_422,&l_422,&l_422,&l_422,&l_422,(void*)0,(void*)0,&l_422},{&l_422,&l_422,&l_422,&l_422,&l_422,(void*)0,(void*)0,&l_422},{&l_422,&l_422,&l_422,&l_422,&l_422,(void*)0,(void*)0,&l_422},{&l_422,&l_422,&l_422,&l_422,&l_422,(void*)0,(void*)0,&l_422},{&l_422,&l_422,&l_422,&l_422,&l_422,(void*)0,(void*)0,&l_422}};
    VECTOR(uint8_t, 2) l_449 = (VECTOR(uint8_t, 2))(246UL, 255UL);
    VECTOR(uint8_t, 4) l_493 = (VECTOR(uint8_t, 4))(0x70L, (VECTOR(uint8_t, 2))(0x70L, 0xB9L), 0xB9L);
    VECTOR(uint8_t, 16) l_502 = (VECTOR(uint8_t, 16))(0x0CL, (VECTOR(uint8_t, 4))(0x0CL, (VECTOR(uint8_t, 2))(0x0CL, 7UL), 7UL), 7UL, 0x0CL, 7UL, (VECTOR(uint8_t, 2))(0x0CL, 7UL), (VECTOR(uint8_t, 2))(0x0CL, 7UL), 0x0CL, 7UL, 0x0CL, 7UL);
    VECTOR(uint16_t, 16) l_555 = (VECTOR(uint16_t, 16))(0x193FL, (VECTOR(uint16_t, 4))(0x193FL, (VECTOR(uint16_t, 2))(0x193FL, 65535UL), 65535UL), 65535UL, 0x193FL, 65535UL, (VECTOR(uint16_t, 2))(0x193FL, 65535UL), (VECTOR(uint16_t, 2))(0x193FL, 65535UL), 0x193FL, 65535UL, 0x193FL, 65535UL);
    uint8_t *l_575 = (void*)0;
    int32_t l_582 = 0x7FCE14F2L;
    int i, j;
    --p_1311->g_54;
    if (((((void*)0 != p_48) , ((safe_unary_minus_func_uint64_t_u(((safe_mod_func_int32_t_s_s((p_1311->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1311->tid, 49))] , ((GROUP_DIVERGE(2, 1) == (&p_1311->g_50 != (void*)0)) && (!(safe_div_func_int8_t_s_s(p_1311->g_54, func_66(p_1311->g_50, p_1311)))))), ((VECTOR(int32_t, 4))(l_300.xyxx)).y)) & (((safe_lshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u(p_1311->g_54, p_1311->g_241.x)), 2)) , p_1311->g_206.x) && (-7L))))) , p_1311->g_208.s7)) || l_305))
    { /* block id: 108 */
        uint8_t l_317 = 1UL;
        for (p_1311->g_81 = 0; (p_1311->g_81 <= 49); p_1311->g_81 = safe_add_func_uint8_t_u_u(p_1311->g_81, 4))
        { /* block id: 111 */
            uint16_t l_314 = 1UL;
            for (p_1311->g_54 = 0; (p_1311->g_54 < 45); ++p_1311->g_54)
            { /* block id: 114 */
                for (p_1311->g_108 = 0; (p_1311->g_108 <= (-11)); --p_1311->g_108)
                { /* block id: 117 */
                    uint32_t l_312 = 0UL;
                    int32_t l_313 = 0x428841D2L;
                    (*p_48) = (l_313 = l_312);
                    --l_314;
                    if ((*p_48))
                        break;
                    if (l_317)
                        continue;
                }
            }
            return p_1311->g_285.s4;
        }
        (*p_48) ^= (~6L);
    }
    else
    { /* block id: 128 */
        int32_t **l_318 = &p_1311->g_49;
        VECTOR(uint8_t, 4) l_329 = (VECTOR(uint8_t, 4))(0xD1L, (VECTOR(uint8_t, 2))(0xD1L, 0x7AL), 0x7AL);
        VECTOR(uint8_t, 8) l_330 = (VECTOR(uint8_t, 8))(9UL, (VECTOR(uint8_t, 4))(9UL, (VECTOR(uint8_t, 2))(9UL, 0x0AL), 0x0AL), 0x0AL, 9UL, 0x0AL);
        int i, j;
        (*l_318) = &p_1311->g_108;
        (*p_48) ^= (*p_1311->g_49);
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_1311->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 49)), permutations[(safe_mod_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(1UL, 0x06L, ((VECTOR(uint8_t, 8))(8UL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(abs(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(l_329.ywyyyxzxxxwxzzyz)))).odd))))).s16)).yyxx)), 0x32L, 0UL, 0xCCL)), ((VECTOR(uint8_t, 2))(l_330.s00)), 2UL, 252UL, 255UL, 0x18L)).s8, ((**l_318) < ((0x54E17701L > (p_1311->g_331 != l_333)) <= (((safe_mod_func_uint64_t_u_u(0x533CD40BDCB24873L, p_1311->g_53[1])) > p_1311->g_185.sa) == 1UL))))), 0x0570L)), p_1311->g_201.x)), p_1311->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1311->tid, 49))])), (**l_318))) & p_1311->g_54), 10))][(safe_mod_func_uint32_t_u_u(p_1311->tid, 49))]));
        for (l_51 = 18; (l_51 == 1); l_51 = safe_sub_func_uint32_t_u_u(l_51, 3))
        { /* block id: 136 */
            uint32_t *l_350 = &p_1311->g_54;
            int32_t l_356[4][8][8] = {{{8L,0x4D308265L,2L,0L,0x3CEE8E53L,0x069FD067L,0x53A3771DL,1L},{8L,0x4D308265L,2L,0L,0x3CEE8E53L,0x069FD067L,0x53A3771DL,1L},{8L,0x4D308265L,2L,0L,0x3CEE8E53L,0x069FD067L,0x53A3771DL,1L},{8L,0x4D308265L,2L,0L,0x3CEE8E53L,0x069FD067L,0x53A3771DL,1L},{8L,0x4D308265L,2L,0L,0x3CEE8E53L,0x069FD067L,0x53A3771DL,1L},{8L,0x4D308265L,2L,0L,0x3CEE8E53L,0x069FD067L,0x53A3771DL,1L},{8L,0x4D308265L,2L,0L,0x3CEE8E53L,0x069FD067L,0x53A3771DL,1L},{8L,0x4D308265L,2L,0L,0x3CEE8E53L,0x069FD067L,0x53A3771DL,1L}},{{8L,0x4D308265L,2L,0L,0x3CEE8E53L,0x069FD067L,0x53A3771DL,1L},{8L,0x4D308265L,2L,0L,0x3CEE8E53L,0x069FD067L,0x53A3771DL,1L},{8L,0x4D308265L,2L,0L,0x3CEE8E53L,0x069FD067L,0x53A3771DL,1L},{8L,0x4D308265L,2L,0L,0x3CEE8E53L,0x069FD067L,0x53A3771DL,1L},{8L,0x4D308265L,2L,0L,0x3CEE8E53L,0x069FD067L,0x53A3771DL,1L},{8L,0x4D308265L,2L,0L,0x3CEE8E53L,0x069FD067L,0x53A3771DL,1L},{8L,0x4D308265L,2L,0L,0x3CEE8E53L,0x069FD067L,0x53A3771DL,1L},{8L,0x4D308265L,2L,0L,0x3CEE8E53L,0x069FD067L,0x53A3771DL,1L}},{{8L,0x4D308265L,2L,0L,0x3CEE8E53L,0x069FD067L,0x53A3771DL,1L},{8L,0x4D308265L,2L,0L,0x3CEE8E53L,0x069FD067L,0x53A3771DL,1L},{8L,0x4D308265L,2L,0L,0x3CEE8E53L,0x069FD067L,0x53A3771DL,1L},{8L,0x4D308265L,2L,0L,0x3CEE8E53L,0x069FD067L,0x53A3771DL,1L},{8L,0x4D308265L,2L,0L,0x3CEE8E53L,0x069FD067L,0x53A3771DL,1L},{8L,0x4D308265L,2L,0L,0x3CEE8E53L,0x069FD067L,0x53A3771DL,1L},{8L,0x4D308265L,2L,0L,0x3CEE8E53L,0x069FD067L,0x53A3771DL,1L},{8L,0x4D308265L,2L,0L,0x3CEE8E53L,0x069FD067L,0x53A3771DL,1L}},{{8L,0x4D308265L,2L,0L,0x3CEE8E53L,0x069FD067L,0x53A3771DL,1L},{8L,0x4D308265L,2L,0L,0x3CEE8E53L,0x069FD067L,0x53A3771DL,1L},{8L,0x4D308265L,2L,0L,0x3CEE8E53L,0x069FD067L,0x53A3771DL,1L},{8L,0x4D308265L,2L,0L,0x3CEE8E53L,0x069FD067L,0x53A3771DL,1L},{8L,0x4D308265L,2L,0L,0x3CEE8E53L,0x069FD067L,0x53A3771DL,1L},{8L,0x4D308265L,2L,0L,0x3CEE8E53L,0x069FD067L,0x53A3771DL,1L},{8L,0x4D308265L,2L,0L,0x3CEE8E53L,0x069FD067L,0x53A3771DL,1L},{8L,0x4D308265L,2L,0L,0x3CEE8E53L,0x069FD067L,0x53A3771DL,1L}}};
            int8_t *l_357 = &p_1311->g_358;
            int i, j, k;
            for (l_305 = (-17); (l_305 == (-2)); l_305++)
            { /* block id: 139 */
                if ((*p_48))
                    break;
            }
            (*p_48) = (safe_add_func_int8_t_s_s(((*l_357) &= ((safe_lshift_func_int8_t_s_u(0x34L, 3)) && (safe_mod_func_uint64_t_u_u((((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(int32_t, 16))(p_1311->g_347.yyyxyxyxyxyxxyyy)).scab9, ((VECTOR(int32_t, 2))((-7L), 0x445092B7L)).xyxy))).y <= (*p_48)), (safe_mul_func_int16_t_s_s(((++(*l_350)) != ((VECTOR(int32_t, 2))(l_353.xx)).hi), (safe_mod_func_uint64_t_u_u(FAKE_DIVERGE(p_1311->group_0_offset, get_group_id(0), 10), l_356[2][3][1])))))))), p_1311->g_77.s0));
        }
    }
    for (p_1311->g_28 = 4; (p_1311->g_28 < 41); ++p_1311->g_28)
    { /* block id: 149 */
        int32_t l_371 = 0x58C3FB1AL;
        VECTOR(int32_t, 8) l_377 = (VECTOR(int32_t, 8))(0x3DFBE86FL, (VECTOR(int32_t, 4))(0x3DFBE86FL, (VECTOR(int32_t, 2))(0x3DFBE86FL, 0x04381999L), 0x04381999L), 0x04381999L, 0x3DFBE86FL, 0x04381999L);
        VECTOR(int32_t, 4) l_413 = (VECTOR(int32_t, 4))(0x05C47657L, (VECTOR(int32_t, 2))(0x05C47657L, (-1L)), (-1L));
        uint32_t **l_433 = &l_422;
        int8_t *l_453 = (void*)0;
        VECTOR(uint8_t, 16) l_489 = (VECTOR(uint8_t, 16))(251UL, (VECTOR(uint8_t, 4))(251UL, (VECTOR(uint8_t, 2))(251UL, 0UL), 0UL), 0UL, 251UL, 0UL, (VECTOR(uint8_t, 2))(251UL, 0UL), (VECTOR(uint8_t, 2))(251UL, 0UL), 251UL, 0UL, 251UL, 0UL);
        VECTOR(uint8_t, 8) l_491 = (VECTOR(uint8_t, 8))(0xCFL, (VECTOR(uint8_t, 4))(0xCFL, (VECTOR(uint8_t, 2))(0xCFL, 0xA2L), 0xA2L), 0xA2L, 0xCFL, 0xA2L);
        int8_t l_494 = 6L;
        uint64_t l_507 = 0xFE901407AD30C7C6L;
        VECTOR(uint32_t, 16) l_512 = (VECTOR(uint32_t, 16))(8UL, (VECTOR(uint32_t, 4))(8UL, (VECTOR(uint32_t, 2))(8UL, 1UL), 1UL), 1UL, 8UL, 1UL, (VECTOR(uint32_t, 2))(8UL, 1UL), (VECTOR(uint32_t, 2))(8UL, 1UL), 8UL, 1UL, 8UL, 1UL);
        VECTOR(uint64_t, 2) l_564 = (VECTOR(uint64_t, 2))(18446744073709551608UL, 0UL);
        VECTOR(uint8_t, 16) l_574 = (VECTOR(uint8_t, 16))(0xBFL, (VECTOR(uint8_t, 4))(0xBFL, (VECTOR(uint8_t, 2))(0xBFL, 247UL), 247UL), 247UL, 0xBFL, 247UL, (VECTOR(uint8_t, 2))(0xBFL, 247UL), (VECTOR(uint8_t, 2))(0xBFL, 247UL), 0xBFL, 247UL, 0xBFL, 247UL);
        int i;
        for (p_1311->g_218 = 2; (p_1311->g_218 >= 1); p_1311->g_218 = safe_sub_func_uint64_t_u_u(p_1311->g_218, 4))
        { /* block id: 152 */
            int16_t l_380 = 0x28A8L;
            int16_t *l_399 = &p_1311->g_53[1];
            int16_t **l_398 = &l_399;
            int32_t l_414 = 0x1A959259L;
            int32_t l_437 = (-9L);
            int32_t l_438 = 5L;
            int32_t l_440 = 1L;
            VECTOR(uint8_t, 2) l_450 = (VECTOR(uint8_t, 2))(0UL, 0x21L);
            VECTOR(uint8_t, 2) l_492 = (VECTOR(uint8_t, 2))(255UL, 0UL);
            VECTOR(uint32_t, 8) l_511 = (VECTOR(uint32_t, 8))(3UL, (VECTOR(uint32_t, 4))(3UL, (VECTOR(uint32_t, 2))(3UL, 4294967288UL), 4294967288UL), 4294967288UL, 3UL, 4294967288UL);
            uint64_t l_520 = 0xB15D6EBF71CC4EACL;
            VECTOR(int8_t, 16) l_534 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int8_t, 2))(1L, 1L), (VECTOR(int8_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
            int64_t *l_565[10];
            uint8_t *l_580 = (void*)0;
            uint8_t **l_581 = &l_580;
            int i;
            for (i = 0; i < 10; i++)
                l_565[i] = (void*)0;
            for (p_1311->g_96 = 0; (p_1311->g_96 > 18); p_1311->g_96++)
            { /* block id: 155 */
                uint16_t *l_376[7][4] = {{&p_1311->g_81,&p_1311->g_81,&p_1311->g_81,&p_1311->g_81},{&p_1311->g_81,&p_1311->g_81,&p_1311->g_81,&p_1311->g_81},{&p_1311->g_81,&p_1311->g_81,&p_1311->g_81,&p_1311->g_81},{&p_1311->g_81,&p_1311->g_81,&p_1311->g_81,&p_1311->g_81},{&p_1311->g_81,&p_1311->g_81,&p_1311->g_81,&p_1311->g_81},{&p_1311->g_81,&p_1311->g_81,&p_1311->g_81,&p_1311->g_81},{&p_1311->g_81,&p_1311->g_81,&p_1311->g_81,&p_1311->g_81}};
                int32_t l_381 = (-8L);
                VECTOR(int8_t, 8) l_425 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
                int32_t l_439 = 7L;
                int i, j;
                (1 + 1);
            }
            if (((((FAKE_DIVERGE(p_1311->global_0_offset, get_global_id(0), 10) || (-1L)) , (((l_377.s2 , 0x4AL) < (safe_add_func_uint16_t_u_u(GROUP_DIVERGE(1, 1), (((safe_lshift_func_int8_t_s_u((((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(0xC0L, ((VECTOR(uint8_t, 8))(6UL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_489.sd1)), 5UL, 0x87L)), l_413.w, 0xF5L, 0x2DL)), 0UL, ((VECTOR(uint8_t, 2))(abs(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 8))(0x48L, 0x2EL, 0x25L, 0L, ((VECTOR(int8_t, 2))(0x25L, 0x6DL)), (-2L), 0x35L)).lo, (int8_t)((VECTOR(int8_t, 4))(0x01L, 2L, (-3L), 0x3FL)).z))).lo))), 0UL, ((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 8))(1UL, p_1311->g_490, (l_438 = p_1311->g_77.s6), 247UL, 0xF1L, ((VECTOR(uint8_t, 2))(l_491.s34)), 0x7DL)).s07, ((VECTOR(uint8_t, 2))(l_492.yy))))), 0xB4L)).s22)), ((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),uint8_t,((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_493.yxyy)))).ywzzxwxy, (uint8_t)6UL, (uint8_t)p_1311->g_347.y))).s76, ((VECTOR(uint8_t, 2))(0x7AL))))), 0x2CL, 0UL)).lo, ((VECTOR(uint8_t, 2))(7UL))))).lo || (-3L)), 7)) || p_1311->g_125) >= (*p_48))))) <= 7UL)) >= l_494) <= l_377.s2))
            { /* block id: 231 */
                uint32_t l_495 = 9UL;
                uint64_t *l_513[1];
                uint8_t *l_517 = (void*)0;
                uint8_t *l_518 = &p_1311->g_125;
                int i;
                for (i = 0; i < 1; i++)
                    l_513[i] = &p_1311->g_514;
                --l_495;
                (*p_48) = (safe_mod_func_uint32_t_u_u((l_414 <= (l_520 &= (p_1311->g_519 = ((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(l_502.s1de248bea360bd74)).s1, (safe_mod_func_int16_t_s_s((~((l_438 = (((--(*l_403)) || (l_507 >= l_495)) > ((-2L) ^ (safe_unary_minus_func_uint16_t_u((safe_unary_minus_func_uint32_t_u(((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 8))(0x81363FEBL, l_492.x, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0x7068B464L, 4294967295UL)).yxyx)).odd)).yyyy, ((VECTOR(uint32_t, 8))(p_1311->g_510.s43106316)).hi))))), 0UL, 4294967295UL)).s2125311205257560, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(abs(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(max(((VECTOR(uint32_t, 16))(0x2429E58DL, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_511.s36)).xxxxyyyx)), 0x69CA01CEL, ((VECTOR(uint32_t, 2))(l_512.s6d)), ((VECTOR(uint32_t, 4))(0x8A1B60CDL, 0x48B95B34L, 4294967293UL, 4294967290UL)))).lo, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(7UL, 5UL)).yxyyyxxyyxyyxyxx)).odd))))).lo)).zzzzywzyyzzxxwww)).s98b1))), 4UL, 0x90BF071CL, 1UL, 0x09792553L)).s27)).yyyyyxxyyxyyyyyx))).sbb8d))).w))))))) , l_414)), p_1311->g_201.x)))) == (safe_mod_func_uint64_t_u_u(((((((((*l_518) = 4UL) > p_1311->g_490) != l_414) < 0xDD8730E5L) > (-1L)) , 0xF351B24EL) , FAKE_DIVERGE(p_1311->local_2_offset, get_local_id(2), 10)), 0xCBF852DD9EDCC4CCL)))))), l_414));
                (**l_333) = &p_1311->g_96;
            }
            else
            { /* block id: 240 */
                int32_t l_521 = (-9L);
                (*p_48) |= ((FAKE_DIVERGE(p_1311->local_0_offset, get_local_id(0), 10) != (!l_521)) == (((VECTOR(uint16_t, 4))(1UL, 0x563EL, 0xC22FL, 0xC548L)).x , (l_450.x , (safe_div_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((((VECTOR(uint8_t, 2))(1UL, 0x02L)).odd > (0x44L < (safe_lshift_func_uint16_t_u_s(((l_492.y & (safe_mul_func_int8_t_s_s(9L, (safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 16))(l_534.sde5d0d9d96228b2f)).sc, 5))))) < (((safe_rshift_func_int8_t_s_u((((l_437 = ((safe_div_func_int64_t_s_s((p_1311->g_185.s7 < (4UL && (safe_div_func_uint32_t_u_u(l_491.s2, (safe_div_func_int64_t_s_s((-4L), 18446744073709551609UL)))))), p_1311->g_510.s6)) ^ 0x26C3CB23L)) , p_1311->g_108) ^ 4L), 5)) & l_440) != p_1311->g_184.s0)), 8)))), 0UL)) >= 0x306EL), l_507)), l_521)))));
                for (p_1311->g_125 = 0; (p_1311->g_125 != 11); ++p_1311->g_125)
                { /* block id: 245 */
                    return p_1311->g_456;
                }
                (*p_48) ^= (p_1311->g_545 != p_1311->g_545);
            }
            (*p_48) = (l_377.s5 && (safe_lshift_func_uint8_t_u_s(p_1311->g_77.s0, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(0x78L, (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(p_1311->g_552.sb06934de)).s2, (safe_add_func_int16_t_s_s(((**l_398) = (~l_377.s0)), (l_413.w , ((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 16))(l_555.s6b15079872058fc5)).s409d, (uint16_t)((safe_rshift_func_uint16_t_u_s((18446744073709551615UL < 3UL), ((p_1311->g_358 , &p_1311->g_125) != ((safe_mod_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(l_380, 1L)), p_1311->g_205.x)) , l_453)))) & p_1311->g_78.w)))).y))))), p_1311->g_552.sd)), ((VECTOR(int8_t, 2))((-4L))), (-3L), 0x3EL, 0x36L, 1L)).s04)), p_1311->g_208.s3, 0x7EL, 3L, 0x1DL, 0x78L, (-1L))).s3)));
            (*p_48) = (safe_div_func_uint64_t_u_u((((*l_403) = ((VECTOR(uint64_t, 16))(max(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(0UL, 1UL)))).yyxyyyyxxyxyxxxx, ((VECTOR(uint64_t, 2))(l_564.yy)).yxyyyxyxxxxxyyyx))).s7) <= (l_413.z = (-1L))), (((((+(((safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(p_1311->g_568.yxyy)).z, 2)) || ((safe_mod_func_uint64_t_u_u(0x0873EEF3F7C83909L, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551606UL)), 0UL, 0x7CEA4C0FC31B998AL)).odd)).lo)) , (((safe_sub_func_uint32_t_u_u(l_511.s3, ((VECTOR(uint32_t, 8))(p_1311->g_573.s35744416)).s4)) , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x2572AA9FL, 0x0F728291L)))).even) > ((VECTOR(uint32_t, 4))(0xC4231D32L, (l_371 |= (((((VECTOR(uint8_t, 4))(l_574.sf158)).w , (void*)0) != (void*)0) , (((l_575 == ((*l_581) = ((safe_mod_func_int16_t_s_s(((safe_div_func_uint32_t_u_u((l_565[0] == p_1311->g_545), l_377.s1)) && l_489.s3), l_450.y)) , l_580))) != l_582) <= l_377.s1))), 0xA71F99E1L, 4294967289UL)).y))) | p_1311->g_247.s1)) , l_414) < (-8L)) < 18446744073709551615UL) & 0x302BE9B1L)));
        }
        (**l_333) = &l_371;
    }
    return p_1311->g_96;
}


/* ------------------------------------------ */
/* 
 * reads : p_1311->g_81 p_1311->g_54 p_1311->g_108 p_1311->g_84 p_1311->g_50 p_1311->g_116 p_1311->g_126 p_1311->g_49 p_1311->g_185 p_1311->g_268 p_1311->g_125 p_1311->g_241
 * writes: p_1311->g_28 p_1311->g_81 p_1311->g_84 p_1311->g_50 p_1311->g_96 p_1311->g_108 p_1311->g_53 p_1311->g_185 p_1311->g_218 p_1311->g_49 p_1311->g_125
 */
int8_t  func_66(int32_t  p_67, struct S0 * p_1311)
{ /* block id: 13 */
    VECTOR(int32_t, 8) l_76 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x44EE7962L), 0x44EE7962L), 0x44EE7962L, (-1L), 0x44EE7962L);
    int32_t *l_85 = (void*)0;
    VECTOR(int16_t, 16) l_202 = (VECTOR(int16_t, 16))(0x43A7L, (VECTOR(int16_t, 4))(0x43A7L, (VECTOR(int16_t, 2))(0x43A7L, 0x1CB5L), 0x1CB5L), 0x1CB5L, 0x43A7L, 0x1CB5L, (VECTOR(int16_t, 2))(0x43A7L, 0x1CB5L), (VECTOR(int16_t, 2))(0x43A7L, 0x1CB5L), 0x43A7L, 0x1CB5L, 0x43A7L, 0x1CB5L);
    VECTOR(int16_t, 16) l_204 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x5671L), 0x5671L), 0x5671L, (-1L), 0x5671L, (VECTOR(int16_t, 2))((-1L), 0x5671L), (VECTOR(int16_t, 2))((-1L), 0x5671L), (-1L), 0x5671L, (-1L), 0x5671L);
    int32_t **l_212 = &l_85;
    int32_t l_216 = (-1L);
    int32_t l_230 = (-10L);
    VECTOR(int32_t, 2) l_233 = (VECTOR(int32_t, 2))(0x76405BA7L, 0x2DC3F203L);
    uint8_t l_236 = 0x71L;
    int16_t *l_255 = &p_1311->g_53[2];
    uint8_t l_266 = 246UL;
    VECTOR(uint32_t, 16) l_288 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x19FA5CB6L), 0x19FA5CB6L), 0x19FA5CB6L, 1UL, 0x19FA5CB6L, (VECTOR(uint32_t, 2))(1UL, 0x19FA5CB6L), (VECTOR(uint32_t, 2))(1UL, 0x19FA5CB6L), 1UL, 0x19FA5CB6L, 1UL, 0x19FA5CB6L);
    int32_t *l_293 = (void*)0;
    int32_t *l_294 = &p_1311->g_50;
    int32_t *l_295 = &p_1311->g_108;
    int32_t *l_296[3];
    uint32_t l_297[2][9][1] = {{{0x761DF950L},{0x761DF950L},{0x761DF950L},{0x761DF950L},{0x761DF950L},{0x761DF950L},{0x761DF950L},{0x761DF950L},{0x761DF950L}},{{0x761DF950L},{0x761DF950L},{0x761DF950L},{0x761DF950L},{0x761DF950L},{0x761DF950L},{0x761DF950L},{0x761DF950L},{0x761DF950L}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_296[i] = &p_1311->g_50;
    for (p_67 = (-15); (p_67 == (-11)); p_67 = safe_add_func_int8_t_s_s(p_67, 8))
    { /* block id: 16 */
        VECTOR(int32_t, 8) l_72 = (VECTOR(int32_t, 8))(0x18A503ECL, (VECTOR(int32_t, 4))(0x18A503ECL, (VECTOR(int32_t, 2))(0x18A503ECL, 0x36AA1284L), 0x36AA1284L), 0x36AA1284L, 0x18A503ECL, 0x36AA1284L);
        int i;
        for (p_1311->g_28 = 16; (p_1311->g_28 >= 52); ++p_1311->g_28)
        { /* block id: 19 */
            VECTOR(int32_t, 4) l_73 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-3L)), (-3L));
            int32_t **l_74[9];
            uint32_t *l_79 = (void*)0;
            uint32_t *l_80 = (void*)0;
            uint16_t l_86 = 65526UL;
            int i;
            for (i = 0; i < 9; i++)
                l_74[i] = (void*)0;
            l_86 = ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 2))(l_72.s01)).yyyy, ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_73.zzywzxxxyyywxwwz)))), (int32_t)((((p_1311->g_49 = &p_1311->g_50) == ((((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(mul_hi(((VECTOR(int64_t, 8))(p_1311->g_75.s65005267)), ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_76.s24)).xyxy)).hi)), ((VECTOR(uint32_t, 8))((GROUP_DIVERGE(0, 1) <= p_1311->g_54), 0x14AC9AC8L, ((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(p_1311->g_77.se34927b9)).s23)), 0xC7DC5EB7L, 0x2D86EA79L)), ((VECTOR(uint32_t, 16))(p_1311->g_78.ywzzxwxxxxxzxxzy)).s725c))), 4294967295UL, 0xB6D63D46L)).s32))), 0x2EFFCBC420B167ACL, (&p_1311->g_50 == ((--p_1311->g_81) , (p_1311->g_84 = ((((void*)0 != l_79) , 0xE842L) , (void*)0)))), (4294967295UL | (l_79 == &p_1311->g_54)), (-7L), ((VECTOR(int64_t, 8))(0L)), 0x02584F164E9E2562L, 6L)).odd))).lo)).wzxxywyyxzyxwwyy)).s27a6, ((VECTOR(int64_t, 4))(3L)), ((VECTOR(int64_t, 4))(0x3A0DB06F5C0CD63DL))))).w && p_1311->g_54) , l_85)) != p_67) | l_72.s5)))).s0622))).wyyyxxywyzyxxxzz)))).s41ca, ((VECTOR(int32_t, 4))(1L)), ((VECTOR(int32_t, 4))(0x5298B49AL))))).y;
        }
    }
    for (p_1311->g_81 = 0; (p_1311->g_81 < 37); p_1311->g_81 = safe_add_func_uint64_t_u_u(p_1311->g_81, 8))
    { /* block id: 28 */
        int8_t l_181 = 0x34L;
        VECTOR(int16_t, 8) l_198 = (VECTOR(int16_t, 8))(5L, (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, 0x1E91L), 0x1E91L), 0x1E91L, 5L, 0x1E91L);
        VECTOR(int16_t, 16) l_207 = (VECTOR(int16_t, 16))(0x1A84L, (VECTOR(int16_t, 4))(0x1A84L, (VECTOR(int16_t, 2))(0x1A84L, (-5L)), (-5L)), (-5L), 0x1A84L, (-5L), (VECTOR(int16_t, 2))(0x1A84L, (-5L)), (VECTOR(int16_t, 2))(0x1A84L, (-5L)), 0x1A84L, (-5L), 0x1A84L, (-5L));
        int32_t l_222 = 8L;
        int32_t l_232 = 0x112C0037L;
        int32_t l_234 = 0x1FC940DAL;
        uint32_t *l_262[10];
        int16_t l_263[1];
        uint8_t l_264 = 0x29L;
        int i;
        for (i = 0; i < 10; i++)
            l_262[i] = (void*)0;
        for (i = 0; i < 1; i++)
            l_263[i] = 0L;
        for (p_67 = 0; (p_67 == (-19)); p_67--)
        { /* block id: 31 */
            int32_t **l_91 = &p_1311->g_84;
            VECTOR(int16_t, 2) l_203 = (VECTOR(int16_t, 2))(0x2985L, 9L);
            int16_t l_209 = 0x6520L;
            VECTOR(int8_t, 16) l_210 = (VECTOR(int8_t, 16))(0x3BL, (VECTOR(int8_t, 4))(0x3BL, (VECTOR(int8_t, 2))(0x3BL, 2L), 2L), 2L, 0x3BL, 2L, (VECTOR(int8_t, 2))(0x3BL, 2L), (VECTOR(int8_t, 2))(0x3BL, 2L), 0x3BL, 2L, 0x3BL, 2L);
            int32_t l_231 = 0x4AD67650L;
            int32_t l_235[3][2];
            VECTOR(int16_t, 8) l_254 = (VECTOR(int16_t, 8))(0x7E46L, (VECTOR(int16_t, 4))(0x7E46L, (VECTOR(int16_t, 2))(0x7E46L, 0x6D61L), 0x6D61L), 0x6D61L, 0x7E46L, 0x6D61L);
            VECTOR(int32_t, 8) l_258 = (VECTOR(int32_t, 8))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 6L), 6L), 6L, 6L, 6L);
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                    l_235[i][j] = (-9L);
            }
            (*l_91) = &p_1311->g_50;
            for (p_1311->g_28 = 0; (p_1311->g_28 == 39); p_1311->g_28++)
            { /* block id: 35 */
                int64_t l_180 = 0x60AC10FD6D6A5165L;
                uint32_t *l_189 = (void*)0;
                uint32_t **l_188 = &l_189;
                VECTOR(int16_t, 8) l_199 = (VECTOR(int16_t, 8))(0x5878L, (VECTOR(int16_t, 4))(0x5878L, (VECTOR(int16_t, 2))(0x5878L, 0x177AL), 0x177AL), 0x177AL, 0x5878L, 0x177AL);
                VECTOR(int16_t, 4) l_200 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x66EAL), 0x66EAL);
                int32_t **l_211 = &l_85;
                uint32_t *l_213 = (void*)0;
                uint32_t *l_214 = (void*)0;
                uint32_t *l_215[6] = {(void*)0,&p_1311->g_28,(void*)0,(void*)0,&p_1311->g_28,(void*)0};
                uint16_t *l_217 = &p_1311->g_218;
                int32_t *l_224 = (void*)0;
                int32_t *l_225 = &p_1311->g_108;
                int32_t *l_226 = &p_1311->g_50;
                int32_t *l_227 = (void*)0;
                int32_t *l_228 = &p_1311->g_50;
                int32_t *l_229[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t l_292 = 0x2C2AD42AL;
                int i;
                for (p_1311->g_50 = 0; (p_1311->g_50 >= 6); p_1311->g_50++)
                { /* block id: 38 */
                    uint16_t l_106 = 65535UL;
                    for (p_1311->g_96 = 0; (p_1311->g_96 > (-12)); p_1311->g_96 = safe_sub_func_int64_t_s_s(p_1311->g_96, 4))
                    { /* block id: 41 */
                        int32_t *l_107 = &p_1311->g_108;
                        l_180 |= (p_67 & func_99(l_85, p_1311->g_54, p_67, ((*l_107) = (safe_rshift_func_uint16_t_u_u(l_106, 12))), p_1311));
                        if (l_181)
                            break;
                        (*l_91) = l_107;
                    }
                }
                if (((((safe_sub_func_uint16_t_u_u(((*l_217) = (((p_1311->g_185.se = ((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 8))(0x62547967L, ((VECTOR(uint32_t, 16))(1UL, ((VECTOR(uint32_t, 8))(p_1311->g_184.s17265347)), ((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),uint32_t,((VECTOR(uint32_t, 16))(p_1311->g_185.s09d877c5e7dc0190)).s0f, (uint32_t)0UL, (uint32_t)((safe_lshift_func_int16_t_s_s((((p_67 > ((((*l_188) = &p_1311->g_28) == l_85) , (safe_sub_func_uint16_t_u_u(((+(safe_rshift_func_int8_t_s_u(((((safe_add_func_uint32_t_u_u((**l_91), (safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_198.s46)), ((VECTOR(int16_t, 2))((-1L), (-7L))), ((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 4))(l_199.s7777)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_200.zxzx)).zzxxywwy)).even, ((VECTOR(int16_t, 16))(p_1311->g_201.xyxyyyyxxxyyyxyy)).s568a))).lo)), (int16_t)p_1311->g_78.x))))).xyxy, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_202.s7d1a)).xxyxyxwzzxwwzzzy)).odd, ((VECTOR(int16_t, 4))(l_203.yyyy)).zwzzyxxx))).lo, ((VECTOR(int16_t, 8))(l_204.s7282aec8)).lo, ((VECTOR(int16_t, 2))(p_1311->g_205.xy)).xxxx))).lo)).xxyx, ((VECTOR(int16_t, 8))(p_1311->g_206.yxyyyxxx)).lo))).lo)), ((VECTOR(int16_t, 8))(l_207.s73ff7721)), p_67, ((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 8))(p_1311->g_208.s63146712)).s06, (int16_t)(l_209 && ((VECTOR(int8_t, 16))(l_210.sf2b3a501e57f89f2)).s7)))))))).xxyxyxxx)).odd, ((VECTOR(int16_t, 8))(0x16BAL, (((-1L) || p_67) || 248UL), (-8L), p_1311->g_77.sb, p_1311->g_185.sd, p_1311->g_12.s5, 2L, 0L)).odd))), 0L)).s4ebf))).xzzyzzxz, ((VECTOR(int16_t, 8))(0x5222L))))).odd, ((VECTOR(int16_t, 4))(0x24E8L))))))).s4, p_67)))) , l_211) == l_212) || p_1311->g_78.z), 5))) , p_1311->g_53[2]), (**l_91))))) , (void*)0) == (void*)0), 8)) , 4294967295UL)))), 0x180EF6ECL, 4294967288UL)))), ((VECTOR(uint32_t, 4))(0xA7921FCFL))))), ((VECTOR(uint32_t, 2))(0x1F28254AL)), 4UL)).se, ((VECTOR(uint32_t, 2))(0x7AB014F3L)), ((VECTOR(uint32_t, 2))(0UL)), 0xB646C3CCL, 0xC3CB9D36L)), ((VECTOR(uint32_t, 8))(4294967295UL))))).s2) & l_216) != p_67)), p_67)) != 0x0D3EB170D87551B8L) < (*p_1311->g_49)) != (*p_1311->g_84)))
                { /* block id: 73 */
                    int64_t *l_221[8] = {(void*)0,&l_180,(void*)0,(void*)0,&l_180,(void*)0,(void*)0,&l_180};
                    int32_t *l_223 = &p_1311->g_108;
                    int i;
                    (*l_211) = ((l_222 = (safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 2))(3L, 0x7CL)).lo, 0))) , l_223);
                    p_1311->g_49 = (p_1311->g_54 , &l_222);
                    (*l_85) = p_67;
                }
                else
                { /* block id: 78 */
                    return p_1311->g_185.s5;
                }
                l_236--;
                for (p_1311->g_125 = 18; (p_1311->g_125 != 11); p_1311->g_125--)
                { /* block id: 84 */
                    int8_t l_243 = 4L;
                    VECTOR(int32_t, 16) l_259 = (VECTOR(int32_t, 16))(0x505AA689L, (VECTOR(int32_t, 4))(0x505AA689L, (VECTOR(int32_t, 2))(0x505AA689L, 0x68E014A8L), 0x68E014A8L), 0x68E014A8L, 0x505AA689L, 0x68E014A8L, (VECTOR(int32_t, 2))(0x505AA689L, 0x68E014A8L), (VECTOR(int32_t, 2))(0x505AA689L, 0x68E014A8L), 0x505AA689L, 0x68E014A8L, 0x505AA689L, 0x68E014A8L);
                    int i;
                    (**l_211) = p_67;
                    if (p_67)
                        continue;
                    if ((**l_91))
                    { /* block id: 87 */
                        int64_t l_242 = 4L;
                        l_242 = ((VECTOR(int32_t, 16))(p_1311->g_241.yxyyxxxxxxxxxyyy)).s8;
                        (*l_212) = (*l_91);
                    }
                    else
                    { /* block id: 90 */
                        uint32_t l_244 = 4294967294UL;
                        uint32_t l_265 = 0x452C0C4FL;
                        uint64_t *l_267 = &p_1311->g_268[5][5][2];
                        int64_t *l_269 = (void*)0;
                        int64_t *l_270 = &l_180;
                        int16_t **l_291 = &l_255;
                        l_244++;
                        if (p_67)
                            break;
                        (**l_91) = ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(0x4DBA9E8CL, p_67, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(p_1311->g_247.s9d07db5b)))), (((*l_270) = (safe_div_func_int64_t_s_s((safe_div_func_uint64_t_u_u(p_1311->g_241.x, ((((-2L) > (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 8))(l_254.s10426037)).s7, ((void*)0 != l_255)))) || FAKE_DIVERGE(p_1311->group_0_offset, get_group_id(0), 10)) & 0x9B9A7E04L))), ((*l_267) ^= ((((((~((0xD719L && (((safe_mod_func_int32_t_s_s(((((0x7CA91A60AADBF9C2L <= (((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_258.s24125600)).s4775444422322415)).s85, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(0x18853547L, (-9L))).yxxx, ((VECTOR(int32_t, 2))(l_259.s62)).xxyy))), 0x0E9D857BL, (safe_sub_func_uint32_t_u_u(((((l_262[5] != l_85) || 1UL) > 0x7225953BL) & 0x22CCC34450B96334L), 0x5A95782EL)), 0x4985195AL, 0x40EC37F9L)).s44))).lo == 0xDE3A13B9L)) == 0x7AL) != l_263[0]) != p_1311->g_247.s8), l_264)) && (*l_85)) | l_265)) < l_266)) ^ p_1311->g_125) , (void*)0) == l_217) <= p_67) == p_1311->g_247.s3))))) ^ 0x3A7E0E67F560DB04L), (**l_91), ((VECTOR(int32_t, 2))((-2L))), 0x5562E8DBL, 0x4DB1FA78L)).s9a, ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 2))(0x7968874FL))))).odd;
                        (*p_1311->g_49) |= (safe_sub_func_int8_t_s_s(p_1311->g_268[6][7][3], ((~(safe_mod_func_uint64_t_u_u((((p_1311->g_125 , ((safe_mul_func_uint8_t_u_u(0xA5L, (safe_lshift_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_s((((((safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((p_1311->g_53[3] = (((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(1UL, ((VECTOR(uint32_t, 2))(1UL, 0xCE3E4D31L)), 4294967295UL)).zyzxyxzw)).s01, ((VECTOR(uint32_t, 8))(p_1311->g_285.s76217436)).s34, ((VECTOR(uint32_t, 4))((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 4))(l_288.sf0bd)), ((VECTOR(uint32_t, 2))(4294967290UL, 0xFA91F54AL)).xxyx))).w, (safe_mul_func_int16_t_s_s(p_1311->g_285.s2, (7UL < ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(0x459AL, 65531UL, 0UL, 0UL)), 0xCC2AL, (((((&p_1311->g_53[1] != ((*l_291) = &l_209)) & p_1311->g_201.x) >= p_67) < 6L) || p_1311->g_77.sa), GROUP_DIVERGE(0, 1), ((VECTOR(uint16_t, 2))(65533UL)), 0xC3E2L, ((VECTOR(uint16_t, 4))(65535UL)), 2UL, 0UL)).sa))))), ((VECTOR(uint32_t, 2))(0xF7A4E7BDL)), 0xAAE49ED9L)).lo))).yxxyxxxy)).s2 != (*p_1311->g_84)) <= (-1L)) , l_292)), GROUP_DIVERGE(0, 1))), p_1311->g_241.x)) < p_1311->g_54) < p_1311->g_108) > l_232) & 0x14L), 5)) < p_67) || 0L), 3)))) || l_259.s9)) , l_263[0]) , 18446744073709551615UL), p_67))) & l_264)));
                    }
                    (*l_85) &= (-6L);
                }
            }
        }
        return l_288.sc;
    }
    --l_297[0][4][0];
    return p_1311->g_185.s1;
}


/* ------------------------------------------ */
/* 
 * reads : p_1311->g_116 p_1311->g_125 p_1311->g_126 p_1311->g_75 p_1311->g_108 p_1311->g_84 p_1311->g_50 p_1311->g_77 p_1311->g_81 p_1311->g_comm_values p_1311->g_49
 * writes: p_1311->g_108 p_1311->g_53
 */
int32_t  func_99(uint32_t * p_100, int16_t  p_101, uint32_t  p_102, int32_t  p_103, struct S0 * p_1311)
{ /* block id: 43 */
    uint16_t l_115[5][1];
    int32_t *l_117 = &p_1311->g_108;
    VECTOR(uint32_t, 4) l_118 = (VECTOR(uint32_t, 4))(0x5DD00C07L, (VECTOR(uint32_t, 2))(0x5DD00C07L, 0x843F4C8EL), 0x843F4C8EL);
    int32_t l_131[4];
    VECTOR(uint16_t, 16) l_134 = (VECTOR(uint16_t, 16))(0x6E9BL, (VECTOR(uint16_t, 4))(0x6E9BL, (VECTOR(uint16_t, 2))(0x6E9BL, 0UL), 0UL), 0UL, 0x6E9BL, 0UL, (VECTOR(uint16_t, 2))(0x6E9BL, 0UL), (VECTOR(uint16_t, 2))(0x6E9BL, 0UL), 0x6E9BL, 0UL, 0x6E9BL, 0UL);
    VECTOR(int32_t, 2) l_146 = (VECTOR(int32_t, 2))(9L, (-10L));
    VECTOR(int16_t, 4) l_153 = (VECTOR(int16_t, 4))(0x0295L, (VECTOR(int16_t, 2))(0x0295L, 6L), 6L);
    int16_t *l_154 = &p_1311->g_53[1];
    VECTOR(int16_t, 8) l_159 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x173EL), 0x173EL), 0x173EL, (-1L), 0x173EL);
    VECTOR(int16_t, 16) l_160 = (VECTOR(int16_t, 16))((-8L), (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), 0x3B96L), 0x3B96L), 0x3B96L, (-8L), 0x3B96L, (VECTOR(int16_t, 2))((-8L), 0x3B96L), (VECTOR(int16_t, 2))((-8L), 0x3B96L), (-8L), 0x3B96L, (-8L), 0x3B96L);
    VECTOR(int8_t, 16) l_161 = (VECTOR(int8_t, 16))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, (-7L)), (-7L)), (-7L), 8L, (-7L), (VECTOR(int8_t, 2))(8L, (-7L)), (VECTOR(int8_t, 2))(8L, (-7L)), 8L, (-7L), 8L, (-7L));
    VECTOR(uint8_t, 16) l_162 = (VECTOR(uint8_t, 16))(249UL, (VECTOR(uint8_t, 4))(249UL, (VECTOR(uint8_t, 2))(249UL, 0xE3L), 0xE3L), 0xE3L, 249UL, 0xE3L, (VECTOR(uint8_t, 2))(249UL, 0xE3L), (VECTOR(uint8_t, 2))(249UL, 0xE3L), 249UL, 0xE3L, 249UL, 0xE3L);
    int32_t **l_176 = &l_117;
    int32_t ***l_175 = &l_176;
    VECTOR(uint64_t, 2) l_177 = (VECTOR(uint64_t, 2))(0x851F4452DAF4E41DL, 1UL);
    int32_t *l_178[9][9] = {{&l_131[2],&p_1311->g_108,&l_131[0],(void*)0,&p_1311->g_96,(void*)0,&l_131[0],&p_1311->g_108,&l_131[2]},{&l_131[2],&p_1311->g_108,&l_131[0],(void*)0,&p_1311->g_96,(void*)0,&l_131[0],&p_1311->g_108,&l_131[2]},{&l_131[2],&p_1311->g_108,&l_131[0],(void*)0,&p_1311->g_96,(void*)0,&l_131[0],&p_1311->g_108,&l_131[2]},{&l_131[2],&p_1311->g_108,&l_131[0],(void*)0,&p_1311->g_96,(void*)0,&l_131[0],&p_1311->g_108,&l_131[2]},{&l_131[2],&p_1311->g_108,&l_131[0],(void*)0,&p_1311->g_96,(void*)0,&l_131[0],&p_1311->g_108,&l_131[2]},{&l_131[2],&p_1311->g_108,&l_131[0],(void*)0,&p_1311->g_96,(void*)0,&l_131[0],&p_1311->g_108,&l_131[2]},{&l_131[2],&p_1311->g_108,&l_131[0],(void*)0,&p_1311->g_96,(void*)0,&l_131[0],&p_1311->g_108,&l_131[2]},{&l_131[2],&p_1311->g_108,&l_131[0],(void*)0,&p_1311->g_96,(void*)0,&l_131[0],&p_1311->g_108,&l_131[2]},{&l_131[2],&p_1311->g_108,&l_131[0],(void*)0,&p_1311->g_96,(void*)0,&l_131[0],&p_1311->g_108,&l_131[2]}};
    VECTOR(int32_t, 4) l_179 = (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x201408C7L), 0x201408C7L);
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_115[i][j] = 0x78ABL;
    }
    for (i = 0; i < 4; i++)
        l_131[i] = 0x46F3577BL;
    l_131[0] = (safe_lshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s((l_115[2][0] , ((*l_117) = ((VECTOR(int32_t, 16))(p_1311->g_116.s5fb0772e7de2ca42)).s2)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(0UL, ((VECTOR(uint32_t, 8))(l_118.yzxxxyxx)), 0x712D857CL, (safe_add_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 16))(0L, 1L, 0x1E80L, 0x0260L, (safe_div_func_uint8_t_u_u(p_1311->g_125, (FAKE_DIVERGE(p_1311->global_0_offset, get_global_id(0), 10) & ((void*)0 != &p_1311->g_50)))), 0x6C79L, 0x2EA2L, ((VECTOR(int16_t, 8))(p_1311->g_126.sb4a57d0c)), 0x338CL)).s8, ((safe_add_func_int64_t_s_s(((void*)0 != &p_1311->g_28), ((safe_sub_func_uint8_t_u_u(p_1311->g_75.s3, (l_115[2][0] != p_101))) > p_102))) , l_115[2][0]))), 0x4218L)), 1UL, p_1311->g_116.s3, 0x8FA86218L, 0x46327CABL, 0x4A42B1B4L)).odd)).s1)), 0x9CDEL)), l_118.x));
    (*l_117) = (*l_117);
    if ((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(l_134.s8497f570)).s6, p_102)))
    { /* block id: 47 */
        int32_t *l_135[1][5][1];
        uint8_t l_136[6][7][5] = {{{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L}},{{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L}},{{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L}},{{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L}},{{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L}},{{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L},{0xE1L,0xE1L,1UL,251UL,0xD5L}}};
        uint64_t l_139 = 0x1DD2CE5EEE56F2A0L;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
            {
                for (k = 0; k < 1; k++)
                    l_135[i][j][k] = &l_131[0];
            }
        }
        p_103 = (*p_1311->g_84);
        l_136[0][4][1]--;
        return l_139;
    }
    else
    { /* block id: 51 */
        if ((atomic_inc(&p_1311->l_atomic_input[9]) == 0))
        { /* block id: 53 */
            int8_t l_140[9] = {0x1BL,0x1BL,0x1BL,0x1BL,0x1BL,0x1BL,0x1BL,0x1BL,0x1BL};
            int8_t l_141[10][9][2] = {{{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL}},{{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL}},{{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL}},{{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL}},{{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL}},{{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL}},{{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL}},{{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL}},{{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL}},{{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL},{0x77L,0x6DL}}};
            int16_t l_142[6];
            VECTOR(uint8_t, 8) l_143 = (VECTOR(uint8_t, 8))(0xE9L, (VECTOR(uint8_t, 4))(0xE9L, (VECTOR(uint8_t, 2))(0xE9L, 0xB2L), 0xB2L), 0xB2L, 0xE9L, 0xB2L);
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_142[i] = (-1L);
            l_143.s6 = (l_142[2] = (l_141[8][0][0] = l_140[5]));
            unsigned int result = 0;
            int l_140_i0;
            for (l_140_i0 = 0; l_140_i0 < 9; l_140_i0++) {
                result += l_140[l_140_i0];
            }
            int l_141_i0, l_141_i1, l_141_i2;
            for (l_141_i0 = 0; l_141_i0 < 10; l_141_i0++) {
                for (l_141_i1 = 0; l_141_i1 < 9; l_141_i1++) {
                    for (l_141_i2 = 0; l_141_i2 < 2; l_141_i2++) {
                        result += l_141[l_141_i0][l_141_i1][l_141_i2];
                    }
                }
            }
            int l_142_i0;
            for (l_142_i0 = 0; l_142_i0 < 6; l_142_i0++) {
                result += l_142[l_142_i0];
            }
            result += l_143.s7;
            result += l_143.s6;
            result += l_143.s5;
            result += l_143.s4;
            result += l_143.s3;
            result += l_143.s2;
            result += l_143.s1;
            result += l_143.s0;
            atomic_add(&p_1311->l_special_values[9], result);
        }
        else
        { /* block id: 57 */
            (1 + 1);
        }
    }
    l_179.w ^= ((((safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 16))(l_146.yxyxxyyxyyyxxxyy)).s5, (p_1311->g_116.s1 , ((safe_div_func_int16_t_s_s(((safe_div_func_int32_t_s_s((((+((safe_div_func_int16_t_s_s((*l_117), ((*l_154) = ((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 4))(l_153.wxxw)).zwxxxxzy, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(0L, 0x5340L)))).xxxxxyxx))).s0))) , ((safe_sub_func_uint64_t_u_u(0xC6485764B534227FL, (safe_lshift_func_uint16_t_u_s((*l_117), (((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_159.s6151)).even)), 0x164FL, 0x02FEL)).even, ((VECTOR(int16_t, 16))(l_160.s202e0d2957ce5d3b)).sfb, ((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 2))(l_161.sf7)), ((VECTOR(uint8_t, 2))(l_162.s22))))), (int16_t)(-10L), (int16_t)(safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(1UL, 65535UL)))).odd, (safe_add_func_int16_t_s_s((safe_add_func_int64_t_s_s((safe_sub_func_uint16_t_u_u((0x54L < (safe_sub_func_int8_t_s_s((-1L), p_101))), (safe_lshift_func_int8_t_s_u((((((((*l_175) = &l_117) != &p_1311->g_84) < 0x5FL) <= p_1311->g_77.s2) < p_1311->g_81) < p_102), p_101)))), p_1311->g_comm_values[p_1311->tid])), p_101))))))).yyyyyyxy)).s1477775502174040, ((VECTOR(int16_t, 16))(2L))))).sfc))).even != (*l_117)))))) <= p_102))) , p_1311->g_126.s8) ^ p_103), 0x440BDA7EL)) >= p_1311->g_126.sa), p_1311->g_126.se)) | l_177.x)))) | (-4L)) , (***l_175)) , p_103);
    return (*p_1311->g_49);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[20];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 20; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[20];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 20; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[49];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 49; i++)
            l_comm_values[i] = 1;
    struct S0 c_1312;
    struct S0* p_1311 = &c_1312;
    struct S0 c_1313 = {
        (VECTOR(int8_t, 16))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 0x3DL), 0x3DL), 0x3DL, 8L, 0x3DL, (VECTOR(int8_t, 2))(8L, 0x3DL), (VECTOR(int8_t, 2))(8L, 0x3DL), 8L, 0x3DL, 8L, 0x3DL), // p_1311->g_12
        (VECTOR(uint64_t, 4))(3UL, (VECTOR(uint64_t, 2))(3UL, 2UL), 2UL), // p_1311->g_26
        0xEDFA90EFL, // p_1311->g_28
        1L, // p_1311->g_35
        &p_1311->g_35, // p_1311->g_34
        0L, // p_1311->g_50
        &p_1311->g_50, // p_1311->g_49
        {0x29E5L,0x29E5L,0x29E5L,0x29E5L}, // p_1311->g_53
        1UL, // p_1311->g_54
        (VECTOR(int64_t, 8))(0x2EDFCA599F3DF38EL, (VECTOR(int64_t, 4))(0x2EDFCA599F3DF38EL, (VECTOR(int64_t, 2))(0x2EDFCA599F3DF38EL, (-3L)), (-3L)), (-3L), 0x2EDFCA599F3DF38EL, (-3L)), // p_1311->g_75
        (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xF365AED0L), 0xF365AED0L), 0xF365AED0L, 1UL, 0xF365AED0L, (VECTOR(uint32_t, 2))(1UL, 0xF365AED0L), (VECTOR(uint32_t, 2))(1UL, 0xF365AED0L), 1UL, 0xF365AED0L, 1UL, 0xF365AED0L), // p_1311->g_77
        (VECTOR(uint32_t, 4))(0x9DC621C6L, (VECTOR(uint32_t, 2))(0x9DC621C6L, 0xC2AD413EL), 0xC2AD413EL), // p_1311->g_78
        0UL, // p_1311->g_81
        &p_1311->g_50, // p_1311->g_84
        0L, // p_1311->g_96
        (-1L), // p_1311->g_108
        (VECTOR(int32_t, 16))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 8L), 8L), 8L, (-4L), 8L, (VECTOR(int32_t, 2))((-4L), 8L), (VECTOR(int32_t, 2))((-4L), 8L), (-4L), 8L, (-4L), 8L), // p_1311->g_116
        0x37L, // p_1311->g_125
        (VECTOR(int16_t, 16))((-8L), (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), 0L), 0L), 0L, (-8L), 0L, (VECTOR(int16_t, 2))((-8L), 0L), (VECTOR(int16_t, 2))((-8L), 0L), (-8L), 0L, (-8L), 0L), // p_1311->g_126
        (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 5UL), 5UL), 5UL, 1UL, 5UL), // p_1311->g_184
        (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4UL), 4UL), 4UL, 0UL, 4UL, (VECTOR(uint32_t, 2))(0UL, 4UL), (VECTOR(uint32_t, 2))(0UL, 4UL), 0UL, 4UL, 0UL, 4UL), // p_1311->g_185
        (VECTOR(int16_t, 2))(0x0F2CL, 0x25D1L), // p_1311->g_201
        (VECTOR(int16_t, 2))(1L, 1L), // p_1311->g_205
        (VECTOR(int16_t, 2))(0L, 0x26A5L), // p_1311->g_206
        (VECTOR(int16_t, 8))(0x218CL, (VECTOR(int16_t, 4))(0x218CL, (VECTOR(int16_t, 2))(0x218CL, (-10L)), (-10L)), (-10L), 0x218CL, (-10L)), // p_1311->g_208
        0x41C6L, // p_1311->g_218
        (VECTOR(int32_t, 2))(0x1EC8A6BBL, 1L), // p_1311->g_241
        (VECTOR(int32_t, 16))(0x2CA49896L, (VECTOR(int32_t, 4))(0x2CA49896L, (VECTOR(int32_t, 2))(0x2CA49896L, 0x24701106L), 0x24701106L), 0x24701106L, 0x2CA49896L, 0x24701106L, (VECTOR(int32_t, 2))(0x2CA49896L, 0x24701106L), (VECTOR(int32_t, 2))(0x2CA49896L, 0x24701106L), 0x2CA49896L, 0x24701106L, 0x2CA49896L, 0x24701106L), // p_1311->g_247
        {{{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL}},{{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL}},{{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL}},{{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL}},{{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL}},{{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL}},{{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL}},{{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL},{18446744073709551609UL,0x8000DD47A858E960L,0UL,3UL}}}, // p_1311->g_268
        (VECTOR(uint32_t, 8))(6UL, (VECTOR(uint32_t, 4))(6UL, (VECTOR(uint32_t, 2))(6UL, 0xE044CEBCL), 0xE044CEBCL), 0xE044CEBCL, 6UL, 0xE044CEBCL), // p_1311->g_285
        (void*)0, // p_1311->g_332
        &p_1311->g_332, // p_1311->g_331
        (VECTOR(int32_t, 2))((-10L), 1L), // p_1311->g_347
        0L, // p_1311->g_358
        (void*)0, // p_1311->g_401
        &p_1311->g_401, // p_1311->g_400
        (void*)0, // p_1311->g_419
        (-6L), // p_1311->g_441
        0xC29AL, // p_1311->g_456
        4294967295UL, // p_1311->g_490
        (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0UL), 0UL), 0UL, 4294967295UL, 0UL), // p_1311->g_510
        0xF1275505B0D23D71L, // p_1311->g_514
        4UL, // p_1311->g_519
        (void*)0, // p_1311->g_545
        (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xCB27L), 0xCB27L), 0xCB27L, 65535UL, 0xCB27L, (VECTOR(uint16_t, 2))(65535UL, 0xCB27L), (VECTOR(uint16_t, 2))(65535UL, 0xCB27L), 65535UL, 0xCB27L, 65535UL, 0xCB27L), // p_1311->g_552
        (VECTOR(uint8_t, 4))(246UL, (VECTOR(uint8_t, 2))(246UL, 252UL), 252UL), // p_1311->g_568
        (VECTOR(uint32_t, 8))(0xA678845AL, (VECTOR(uint32_t, 4))(0xA678845AL, (VECTOR(uint32_t, 2))(0xA678845AL, 4294967295UL), 4294967295UL), 4294967295UL, 0xA678845AL, 4294967295UL), // p_1311->g_573
        (void*)0, // p_1311->g_585
        (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xC9L), 0xC9L), // p_1311->g_588
        (VECTOR(uint32_t, 16))(4294967290UL, (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 4294967295UL), 4294967295UL), 4294967295UL, 4294967290UL, 4294967295UL, (VECTOR(uint32_t, 2))(4294967290UL, 4294967295UL), (VECTOR(uint32_t, 2))(4294967290UL, 4294967295UL), 4294967290UL, 4294967295UL, 4294967290UL, 4294967295UL), // p_1311->g_597
        (VECTOR(uint16_t, 2))(65535UL, 0xA0EDL), // p_1311->g_659
        (VECTOR(uint16_t, 8))(0xE7DCL, (VECTOR(uint16_t, 4))(0xE7DCL, (VECTOR(uint16_t, 2))(0xE7DCL, 0UL), 0UL), 0UL, 0xE7DCL, 0UL), // p_1311->g_661
        (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x9E5F17175FD5531DL), 0x9E5F17175FD5531DL), 0x9E5F17175FD5531DL, 0UL, 0x9E5F17175FD5531DL, (VECTOR(uint64_t, 2))(0UL, 0x9E5F17175FD5531DL), (VECTOR(uint64_t, 2))(0UL, 0x9E5F17175FD5531DL), 0UL, 0x9E5F17175FD5531DL, 0UL, 0x9E5F17175FD5531DL), // p_1311->g_681
        (VECTOR(uint64_t, 8))(18446744073709551614UL, (VECTOR(uint64_t, 4))(18446744073709551614UL, (VECTOR(uint64_t, 2))(18446744073709551614UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 18446744073709551614UL, 18446744073709551615UL), // p_1311->g_682
        (VECTOR(uint64_t, 4))(0x6B0118A717965BCCL, (VECTOR(uint64_t, 2))(0x6B0118A717965BCCL, 18446744073709551609UL), 18446744073709551609UL), // p_1311->g_684
        (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x13C6L), 0x13C6L), 0x13C6L, 65535UL, 0x13C6L), // p_1311->g_688
        (VECTOR(int8_t, 2))((-4L), 0L), // p_1311->g_699
        0x78E621CBL, // p_1311->g_746
        6UL, // p_1311->g_748
        0x3359L, // p_1311->g_922
        &p_1311->g_585, // p_1311->g_925
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-3L)), (-3L)), (-3L), 0L, (-3L)), // p_1311->g_928
        (VECTOR(int32_t, 4))(0x7FC5D580L, (VECTOR(int32_t, 2))(0x7FC5D580L, 0x3C784E05L), 0x3C784E05L), // p_1311->g_943
        (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 1UL), 1UL), 1UL, 18446744073709551615UL, 1UL), // p_1311->g_975
        (VECTOR(uint64_t, 8))(0x09EA5DAABF8FA8B5L, (VECTOR(uint64_t, 4))(0x09EA5DAABF8FA8B5L, (VECTOR(uint64_t, 2))(0x09EA5DAABF8FA8B5L, 0UL), 0UL), 0UL, 0x09EA5DAABF8FA8B5L, 0UL), // p_1311->g_976
        (VECTOR(int8_t, 8))(0x64L, (VECTOR(int8_t, 4))(0x64L, (VECTOR(int8_t, 2))(0x64L, 1L), 1L), 1L, 0x64L, 1L), // p_1311->g_988
        (VECTOR(int8_t, 4))(0x0FL, (VECTOR(int8_t, 2))(0x0FL, 0x03L), 0x03L), // p_1311->g_990
        (VECTOR(uint16_t, 4))(0x0B28L, (VECTOR(uint16_t, 2))(0x0B28L, 65526UL), 65526UL), // p_1311->g_1006
        (VECTOR(uint16_t, 16))(65530UL, (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 65530UL), 65530UL), 65530UL, 65530UL, 65530UL, (VECTOR(uint16_t, 2))(65530UL, 65530UL), (VECTOR(uint16_t, 2))(65530UL, 65530UL), 65530UL, 65530UL, 65530UL, 65530UL), // p_1311->g_1007
        &p_1311->g_50, // p_1311->g_1033
        (void*)0, // p_1311->g_1080
        (void*)0, // p_1311->g_1082
        &p_1311->g_1082, // p_1311->g_1081
        (VECTOR(uint16_t, 16))(8UL, (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 2UL), 2UL), 2UL, 8UL, 2UL, (VECTOR(uint16_t, 2))(8UL, 2UL), (VECTOR(uint16_t, 2))(8UL, 2UL), 8UL, 2UL, 8UL, 2UL), // p_1311->g_1177
        4294967295UL, // p_1311->g_1199
        (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x5EEEL), 0x5EEEL), // p_1311->g_1216
        (VECTOR(uint16_t, 16))(5UL, (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 1UL), 1UL), 1UL, 5UL, 1UL, (VECTOR(uint16_t, 2))(5UL, 1UL), (VECTOR(uint16_t, 2))(5UL, 1UL), 5UL, 1UL, 5UL, 1UL), // p_1311->g_1220
        9UL, // p_1311->g_1229
        (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0L), 0L), // p_1311->g_1251
        &p_1311->g_84, // p_1311->g_1256
        &p_1311->g_84, // p_1311->g_1299
        (void*)0, // p_1311->g_1305
        {{&p_1311->g_96,&p_1311->g_96,&p_1311->g_96}}, // p_1311->g_1307
        0, // p_1311->v_collective
        sequence_input[get_global_id(0)], // p_1311->global_0_offset
        sequence_input[get_global_id(1)], // p_1311->global_1_offset
        sequence_input[get_global_id(2)], // p_1311->global_2_offset
        sequence_input[get_local_id(0)], // p_1311->local_0_offset
        sequence_input[get_local_id(1)], // p_1311->local_1_offset
        sequence_input[get_local_id(2)], // p_1311->local_2_offset
        sequence_input[get_group_id(0)], // p_1311->group_0_offset
        sequence_input[get_group_id(1)], // p_1311->group_1_offset
        sequence_input[get_group_id(2)], // p_1311->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 49)), permutations[0][get_linear_local_id()])), // p_1311->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1312 = c_1313;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1311);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1311->g_12.s0, "p_1311->g_12.s0", print_hash_value);
    transparent_crc(p_1311->g_12.s1, "p_1311->g_12.s1", print_hash_value);
    transparent_crc(p_1311->g_12.s2, "p_1311->g_12.s2", print_hash_value);
    transparent_crc(p_1311->g_12.s3, "p_1311->g_12.s3", print_hash_value);
    transparent_crc(p_1311->g_12.s4, "p_1311->g_12.s4", print_hash_value);
    transparent_crc(p_1311->g_12.s5, "p_1311->g_12.s5", print_hash_value);
    transparent_crc(p_1311->g_12.s6, "p_1311->g_12.s6", print_hash_value);
    transparent_crc(p_1311->g_12.s7, "p_1311->g_12.s7", print_hash_value);
    transparent_crc(p_1311->g_12.s8, "p_1311->g_12.s8", print_hash_value);
    transparent_crc(p_1311->g_12.s9, "p_1311->g_12.s9", print_hash_value);
    transparent_crc(p_1311->g_12.sa, "p_1311->g_12.sa", print_hash_value);
    transparent_crc(p_1311->g_12.sb, "p_1311->g_12.sb", print_hash_value);
    transparent_crc(p_1311->g_12.sc, "p_1311->g_12.sc", print_hash_value);
    transparent_crc(p_1311->g_12.sd, "p_1311->g_12.sd", print_hash_value);
    transparent_crc(p_1311->g_12.se, "p_1311->g_12.se", print_hash_value);
    transparent_crc(p_1311->g_12.sf, "p_1311->g_12.sf", print_hash_value);
    transparent_crc(p_1311->g_26.x, "p_1311->g_26.x", print_hash_value);
    transparent_crc(p_1311->g_26.y, "p_1311->g_26.y", print_hash_value);
    transparent_crc(p_1311->g_26.z, "p_1311->g_26.z", print_hash_value);
    transparent_crc(p_1311->g_26.w, "p_1311->g_26.w", print_hash_value);
    transparent_crc(p_1311->g_28, "p_1311->g_28", print_hash_value);
    transparent_crc(p_1311->g_35, "p_1311->g_35", print_hash_value);
    transparent_crc(p_1311->g_50, "p_1311->g_50", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1311->g_53[i], "p_1311->g_53[i]", print_hash_value);

    }
    transparent_crc(p_1311->g_54, "p_1311->g_54", print_hash_value);
    transparent_crc(p_1311->g_75.s0, "p_1311->g_75.s0", print_hash_value);
    transparent_crc(p_1311->g_75.s1, "p_1311->g_75.s1", print_hash_value);
    transparent_crc(p_1311->g_75.s2, "p_1311->g_75.s2", print_hash_value);
    transparent_crc(p_1311->g_75.s3, "p_1311->g_75.s3", print_hash_value);
    transparent_crc(p_1311->g_75.s4, "p_1311->g_75.s4", print_hash_value);
    transparent_crc(p_1311->g_75.s5, "p_1311->g_75.s5", print_hash_value);
    transparent_crc(p_1311->g_75.s6, "p_1311->g_75.s6", print_hash_value);
    transparent_crc(p_1311->g_75.s7, "p_1311->g_75.s7", print_hash_value);
    transparent_crc(p_1311->g_77.s0, "p_1311->g_77.s0", print_hash_value);
    transparent_crc(p_1311->g_77.s1, "p_1311->g_77.s1", print_hash_value);
    transparent_crc(p_1311->g_77.s2, "p_1311->g_77.s2", print_hash_value);
    transparent_crc(p_1311->g_77.s3, "p_1311->g_77.s3", print_hash_value);
    transparent_crc(p_1311->g_77.s4, "p_1311->g_77.s4", print_hash_value);
    transparent_crc(p_1311->g_77.s5, "p_1311->g_77.s5", print_hash_value);
    transparent_crc(p_1311->g_77.s6, "p_1311->g_77.s6", print_hash_value);
    transparent_crc(p_1311->g_77.s7, "p_1311->g_77.s7", print_hash_value);
    transparent_crc(p_1311->g_77.s8, "p_1311->g_77.s8", print_hash_value);
    transparent_crc(p_1311->g_77.s9, "p_1311->g_77.s9", print_hash_value);
    transparent_crc(p_1311->g_77.sa, "p_1311->g_77.sa", print_hash_value);
    transparent_crc(p_1311->g_77.sb, "p_1311->g_77.sb", print_hash_value);
    transparent_crc(p_1311->g_77.sc, "p_1311->g_77.sc", print_hash_value);
    transparent_crc(p_1311->g_77.sd, "p_1311->g_77.sd", print_hash_value);
    transparent_crc(p_1311->g_77.se, "p_1311->g_77.se", print_hash_value);
    transparent_crc(p_1311->g_77.sf, "p_1311->g_77.sf", print_hash_value);
    transparent_crc(p_1311->g_78.x, "p_1311->g_78.x", print_hash_value);
    transparent_crc(p_1311->g_78.y, "p_1311->g_78.y", print_hash_value);
    transparent_crc(p_1311->g_78.z, "p_1311->g_78.z", print_hash_value);
    transparent_crc(p_1311->g_78.w, "p_1311->g_78.w", print_hash_value);
    transparent_crc(p_1311->g_81, "p_1311->g_81", print_hash_value);
    transparent_crc(p_1311->g_96, "p_1311->g_96", print_hash_value);
    transparent_crc(p_1311->g_108, "p_1311->g_108", print_hash_value);
    transparent_crc(p_1311->g_116.s0, "p_1311->g_116.s0", print_hash_value);
    transparent_crc(p_1311->g_116.s1, "p_1311->g_116.s1", print_hash_value);
    transparent_crc(p_1311->g_116.s2, "p_1311->g_116.s2", print_hash_value);
    transparent_crc(p_1311->g_116.s3, "p_1311->g_116.s3", print_hash_value);
    transparent_crc(p_1311->g_116.s4, "p_1311->g_116.s4", print_hash_value);
    transparent_crc(p_1311->g_116.s5, "p_1311->g_116.s5", print_hash_value);
    transparent_crc(p_1311->g_116.s6, "p_1311->g_116.s6", print_hash_value);
    transparent_crc(p_1311->g_116.s7, "p_1311->g_116.s7", print_hash_value);
    transparent_crc(p_1311->g_116.s8, "p_1311->g_116.s8", print_hash_value);
    transparent_crc(p_1311->g_116.s9, "p_1311->g_116.s9", print_hash_value);
    transparent_crc(p_1311->g_116.sa, "p_1311->g_116.sa", print_hash_value);
    transparent_crc(p_1311->g_116.sb, "p_1311->g_116.sb", print_hash_value);
    transparent_crc(p_1311->g_116.sc, "p_1311->g_116.sc", print_hash_value);
    transparent_crc(p_1311->g_116.sd, "p_1311->g_116.sd", print_hash_value);
    transparent_crc(p_1311->g_116.se, "p_1311->g_116.se", print_hash_value);
    transparent_crc(p_1311->g_116.sf, "p_1311->g_116.sf", print_hash_value);
    transparent_crc(p_1311->g_125, "p_1311->g_125", print_hash_value);
    transparent_crc(p_1311->g_126.s0, "p_1311->g_126.s0", print_hash_value);
    transparent_crc(p_1311->g_126.s1, "p_1311->g_126.s1", print_hash_value);
    transparent_crc(p_1311->g_126.s2, "p_1311->g_126.s2", print_hash_value);
    transparent_crc(p_1311->g_126.s3, "p_1311->g_126.s3", print_hash_value);
    transparent_crc(p_1311->g_126.s4, "p_1311->g_126.s4", print_hash_value);
    transparent_crc(p_1311->g_126.s5, "p_1311->g_126.s5", print_hash_value);
    transparent_crc(p_1311->g_126.s6, "p_1311->g_126.s6", print_hash_value);
    transparent_crc(p_1311->g_126.s7, "p_1311->g_126.s7", print_hash_value);
    transparent_crc(p_1311->g_126.s8, "p_1311->g_126.s8", print_hash_value);
    transparent_crc(p_1311->g_126.s9, "p_1311->g_126.s9", print_hash_value);
    transparent_crc(p_1311->g_126.sa, "p_1311->g_126.sa", print_hash_value);
    transparent_crc(p_1311->g_126.sb, "p_1311->g_126.sb", print_hash_value);
    transparent_crc(p_1311->g_126.sc, "p_1311->g_126.sc", print_hash_value);
    transparent_crc(p_1311->g_126.sd, "p_1311->g_126.sd", print_hash_value);
    transparent_crc(p_1311->g_126.se, "p_1311->g_126.se", print_hash_value);
    transparent_crc(p_1311->g_126.sf, "p_1311->g_126.sf", print_hash_value);
    transparent_crc(p_1311->g_184.s0, "p_1311->g_184.s0", print_hash_value);
    transparent_crc(p_1311->g_184.s1, "p_1311->g_184.s1", print_hash_value);
    transparent_crc(p_1311->g_184.s2, "p_1311->g_184.s2", print_hash_value);
    transparent_crc(p_1311->g_184.s3, "p_1311->g_184.s3", print_hash_value);
    transparent_crc(p_1311->g_184.s4, "p_1311->g_184.s4", print_hash_value);
    transparent_crc(p_1311->g_184.s5, "p_1311->g_184.s5", print_hash_value);
    transparent_crc(p_1311->g_184.s6, "p_1311->g_184.s6", print_hash_value);
    transparent_crc(p_1311->g_184.s7, "p_1311->g_184.s7", print_hash_value);
    transparent_crc(p_1311->g_185.s0, "p_1311->g_185.s0", print_hash_value);
    transparent_crc(p_1311->g_185.s1, "p_1311->g_185.s1", print_hash_value);
    transparent_crc(p_1311->g_185.s2, "p_1311->g_185.s2", print_hash_value);
    transparent_crc(p_1311->g_185.s3, "p_1311->g_185.s3", print_hash_value);
    transparent_crc(p_1311->g_185.s4, "p_1311->g_185.s4", print_hash_value);
    transparent_crc(p_1311->g_185.s5, "p_1311->g_185.s5", print_hash_value);
    transparent_crc(p_1311->g_185.s6, "p_1311->g_185.s6", print_hash_value);
    transparent_crc(p_1311->g_185.s7, "p_1311->g_185.s7", print_hash_value);
    transparent_crc(p_1311->g_185.s8, "p_1311->g_185.s8", print_hash_value);
    transparent_crc(p_1311->g_185.s9, "p_1311->g_185.s9", print_hash_value);
    transparent_crc(p_1311->g_185.sa, "p_1311->g_185.sa", print_hash_value);
    transparent_crc(p_1311->g_185.sb, "p_1311->g_185.sb", print_hash_value);
    transparent_crc(p_1311->g_185.sc, "p_1311->g_185.sc", print_hash_value);
    transparent_crc(p_1311->g_185.sd, "p_1311->g_185.sd", print_hash_value);
    transparent_crc(p_1311->g_185.se, "p_1311->g_185.se", print_hash_value);
    transparent_crc(p_1311->g_185.sf, "p_1311->g_185.sf", print_hash_value);
    transparent_crc(p_1311->g_201.x, "p_1311->g_201.x", print_hash_value);
    transparent_crc(p_1311->g_201.y, "p_1311->g_201.y", print_hash_value);
    transparent_crc(p_1311->g_205.x, "p_1311->g_205.x", print_hash_value);
    transparent_crc(p_1311->g_205.y, "p_1311->g_205.y", print_hash_value);
    transparent_crc(p_1311->g_206.x, "p_1311->g_206.x", print_hash_value);
    transparent_crc(p_1311->g_206.y, "p_1311->g_206.y", print_hash_value);
    transparent_crc(p_1311->g_208.s0, "p_1311->g_208.s0", print_hash_value);
    transparent_crc(p_1311->g_208.s1, "p_1311->g_208.s1", print_hash_value);
    transparent_crc(p_1311->g_208.s2, "p_1311->g_208.s2", print_hash_value);
    transparent_crc(p_1311->g_208.s3, "p_1311->g_208.s3", print_hash_value);
    transparent_crc(p_1311->g_208.s4, "p_1311->g_208.s4", print_hash_value);
    transparent_crc(p_1311->g_208.s5, "p_1311->g_208.s5", print_hash_value);
    transparent_crc(p_1311->g_208.s6, "p_1311->g_208.s6", print_hash_value);
    transparent_crc(p_1311->g_208.s7, "p_1311->g_208.s7", print_hash_value);
    transparent_crc(p_1311->g_218, "p_1311->g_218", print_hash_value);
    transparent_crc(p_1311->g_241.x, "p_1311->g_241.x", print_hash_value);
    transparent_crc(p_1311->g_241.y, "p_1311->g_241.y", print_hash_value);
    transparent_crc(p_1311->g_247.s0, "p_1311->g_247.s0", print_hash_value);
    transparent_crc(p_1311->g_247.s1, "p_1311->g_247.s1", print_hash_value);
    transparent_crc(p_1311->g_247.s2, "p_1311->g_247.s2", print_hash_value);
    transparent_crc(p_1311->g_247.s3, "p_1311->g_247.s3", print_hash_value);
    transparent_crc(p_1311->g_247.s4, "p_1311->g_247.s4", print_hash_value);
    transparent_crc(p_1311->g_247.s5, "p_1311->g_247.s5", print_hash_value);
    transparent_crc(p_1311->g_247.s6, "p_1311->g_247.s6", print_hash_value);
    transparent_crc(p_1311->g_247.s7, "p_1311->g_247.s7", print_hash_value);
    transparent_crc(p_1311->g_247.s8, "p_1311->g_247.s8", print_hash_value);
    transparent_crc(p_1311->g_247.s9, "p_1311->g_247.s9", print_hash_value);
    transparent_crc(p_1311->g_247.sa, "p_1311->g_247.sa", print_hash_value);
    transparent_crc(p_1311->g_247.sb, "p_1311->g_247.sb", print_hash_value);
    transparent_crc(p_1311->g_247.sc, "p_1311->g_247.sc", print_hash_value);
    transparent_crc(p_1311->g_247.sd, "p_1311->g_247.sd", print_hash_value);
    transparent_crc(p_1311->g_247.se, "p_1311->g_247.se", print_hash_value);
    transparent_crc(p_1311->g_247.sf, "p_1311->g_247.sf", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1311->g_268[i][j][k], "p_1311->g_268[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1311->g_285.s0, "p_1311->g_285.s0", print_hash_value);
    transparent_crc(p_1311->g_285.s1, "p_1311->g_285.s1", print_hash_value);
    transparent_crc(p_1311->g_285.s2, "p_1311->g_285.s2", print_hash_value);
    transparent_crc(p_1311->g_285.s3, "p_1311->g_285.s3", print_hash_value);
    transparent_crc(p_1311->g_285.s4, "p_1311->g_285.s4", print_hash_value);
    transparent_crc(p_1311->g_285.s5, "p_1311->g_285.s5", print_hash_value);
    transparent_crc(p_1311->g_285.s6, "p_1311->g_285.s6", print_hash_value);
    transparent_crc(p_1311->g_285.s7, "p_1311->g_285.s7", print_hash_value);
    transparent_crc(p_1311->g_347.x, "p_1311->g_347.x", print_hash_value);
    transparent_crc(p_1311->g_347.y, "p_1311->g_347.y", print_hash_value);
    transparent_crc(p_1311->g_358, "p_1311->g_358", print_hash_value);
    transparent_crc(p_1311->g_441, "p_1311->g_441", print_hash_value);
    transparent_crc(p_1311->g_456, "p_1311->g_456", print_hash_value);
    transparent_crc(p_1311->g_490, "p_1311->g_490", print_hash_value);
    transparent_crc(p_1311->g_510.s0, "p_1311->g_510.s0", print_hash_value);
    transparent_crc(p_1311->g_510.s1, "p_1311->g_510.s1", print_hash_value);
    transparent_crc(p_1311->g_510.s2, "p_1311->g_510.s2", print_hash_value);
    transparent_crc(p_1311->g_510.s3, "p_1311->g_510.s3", print_hash_value);
    transparent_crc(p_1311->g_510.s4, "p_1311->g_510.s4", print_hash_value);
    transparent_crc(p_1311->g_510.s5, "p_1311->g_510.s5", print_hash_value);
    transparent_crc(p_1311->g_510.s6, "p_1311->g_510.s6", print_hash_value);
    transparent_crc(p_1311->g_510.s7, "p_1311->g_510.s7", print_hash_value);
    transparent_crc(p_1311->g_514, "p_1311->g_514", print_hash_value);
    transparent_crc(p_1311->g_519, "p_1311->g_519", print_hash_value);
    transparent_crc(p_1311->g_552.s0, "p_1311->g_552.s0", print_hash_value);
    transparent_crc(p_1311->g_552.s1, "p_1311->g_552.s1", print_hash_value);
    transparent_crc(p_1311->g_552.s2, "p_1311->g_552.s2", print_hash_value);
    transparent_crc(p_1311->g_552.s3, "p_1311->g_552.s3", print_hash_value);
    transparent_crc(p_1311->g_552.s4, "p_1311->g_552.s4", print_hash_value);
    transparent_crc(p_1311->g_552.s5, "p_1311->g_552.s5", print_hash_value);
    transparent_crc(p_1311->g_552.s6, "p_1311->g_552.s6", print_hash_value);
    transparent_crc(p_1311->g_552.s7, "p_1311->g_552.s7", print_hash_value);
    transparent_crc(p_1311->g_552.s8, "p_1311->g_552.s8", print_hash_value);
    transparent_crc(p_1311->g_552.s9, "p_1311->g_552.s9", print_hash_value);
    transparent_crc(p_1311->g_552.sa, "p_1311->g_552.sa", print_hash_value);
    transparent_crc(p_1311->g_552.sb, "p_1311->g_552.sb", print_hash_value);
    transparent_crc(p_1311->g_552.sc, "p_1311->g_552.sc", print_hash_value);
    transparent_crc(p_1311->g_552.sd, "p_1311->g_552.sd", print_hash_value);
    transparent_crc(p_1311->g_552.se, "p_1311->g_552.se", print_hash_value);
    transparent_crc(p_1311->g_552.sf, "p_1311->g_552.sf", print_hash_value);
    transparent_crc(p_1311->g_568.x, "p_1311->g_568.x", print_hash_value);
    transparent_crc(p_1311->g_568.y, "p_1311->g_568.y", print_hash_value);
    transparent_crc(p_1311->g_568.z, "p_1311->g_568.z", print_hash_value);
    transparent_crc(p_1311->g_568.w, "p_1311->g_568.w", print_hash_value);
    transparent_crc(p_1311->g_573.s0, "p_1311->g_573.s0", print_hash_value);
    transparent_crc(p_1311->g_573.s1, "p_1311->g_573.s1", print_hash_value);
    transparent_crc(p_1311->g_573.s2, "p_1311->g_573.s2", print_hash_value);
    transparent_crc(p_1311->g_573.s3, "p_1311->g_573.s3", print_hash_value);
    transparent_crc(p_1311->g_573.s4, "p_1311->g_573.s4", print_hash_value);
    transparent_crc(p_1311->g_573.s5, "p_1311->g_573.s5", print_hash_value);
    transparent_crc(p_1311->g_573.s6, "p_1311->g_573.s6", print_hash_value);
    transparent_crc(p_1311->g_573.s7, "p_1311->g_573.s7", print_hash_value);
    transparent_crc(p_1311->g_588.x, "p_1311->g_588.x", print_hash_value);
    transparent_crc(p_1311->g_588.y, "p_1311->g_588.y", print_hash_value);
    transparent_crc(p_1311->g_588.z, "p_1311->g_588.z", print_hash_value);
    transparent_crc(p_1311->g_588.w, "p_1311->g_588.w", print_hash_value);
    transparent_crc(p_1311->g_597.s0, "p_1311->g_597.s0", print_hash_value);
    transparent_crc(p_1311->g_597.s1, "p_1311->g_597.s1", print_hash_value);
    transparent_crc(p_1311->g_597.s2, "p_1311->g_597.s2", print_hash_value);
    transparent_crc(p_1311->g_597.s3, "p_1311->g_597.s3", print_hash_value);
    transparent_crc(p_1311->g_597.s4, "p_1311->g_597.s4", print_hash_value);
    transparent_crc(p_1311->g_597.s5, "p_1311->g_597.s5", print_hash_value);
    transparent_crc(p_1311->g_597.s6, "p_1311->g_597.s6", print_hash_value);
    transparent_crc(p_1311->g_597.s7, "p_1311->g_597.s7", print_hash_value);
    transparent_crc(p_1311->g_597.s8, "p_1311->g_597.s8", print_hash_value);
    transparent_crc(p_1311->g_597.s9, "p_1311->g_597.s9", print_hash_value);
    transparent_crc(p_1311->g_597.sa, "p_1311->g_597.sa", print_hash_value);
    transparent_crc(p_1311->g_597.sb, "p_1311->g_597.sb", print_hash_value);
    transparent_crc(p_1311->g_597.sc, "p_1311->g_597.sc", print_hash_value);
    transparent_crc(p_1311->g_597.sd, "p_1311->g_597.sd", print_hash_value);
    transparent_crc(p_1311->g_597.se, "p_1311->g_597.se", print_hash_value);
    transparent_crc(p_1311->g_597.sf, "p_1311->g_597.sf", print_hash_value);
    transparent_crc(p_1311->g_659.x, "p_1311->g_659.x", print_hash_value);
    transparent_crc(p_1311->g_659.y, "p_1311->g_659.y", print_hash_value);
    transparent_crc(p_1311->g_661.s0, "p_1311->g_661.s0", print_hash_value);
    transparent_crc(p_1311->g_661.s1, "p_1311->g_661.s1", print_hash_value);
    transparent_crc(p_1311->g_661.s2, "p_1311->g_661.s2", print_hash_value);
    transparent_crc(p_1311->g_661.s3, "p_1311->g_661.s3", print_hash_value);
    transparent_crc(p_1311->g_661.s4, "p_1311->g_661.s4", print_hash_value);
    transparent_crc(p_1311->g_661.s5, "p_1311->g_661.s5", print_hash_value);
    transparent_crc(p_1311->g_661.s6, "p_1311->g_661.s6", print_hash_value);
    transparent_crc(p_1311->g_661.s7, "p_1311->g_661.s7", print_hash_value);
    transparent_crc(p_1311->g_681.s0, "p_1311->g_681.s0", print_hash_value);
    transparent_crc(p_1311->g_681.s1, "p_1311->g_681.s1", print_hash_value);
    transparent_crc(p_1311->g_681.s2, "p_1311->g_681.s2", print_hash_value);
    transparent_crc(p_1311->g_681.s3, "p_1311->g_681.s3", print_hash_value);
    transparent_crc(p_1311->g_681.s4, "p_1311->g_681.s4", print_hash_value);
    transparent_crc(p_1311->g_681.s5, "p_1311->g_681.s5", print_hash_value);
    transparent_crc(p_1311->g_681.s6, "p_1311->g_681.s6", print_hash_value);
    transparent_crc(p_1311->g_681.s7, "p_1311->g_681.s7", print_hash_value);
    transparent_crc(p_1311->g_681.s8, "p_1311->g_681.s8", print_hash_value);
    transparent_crc(p_1311->g_681.s9, "p_1311->g_681.s9", print_hash_value);
    transparent_crc(p_1311->g_681.sa, "p_1311->g_681.sa", print_hash_value);
    transparent_crc(p_1311->g_681.sb, "p_1311->g_681.sb", print_hash_value);
    transparent_crc(p_1311->g_681.sc, "p_1311->g_681.sc", print_hash_value);
    transparent_crc(p_1311->g_681.sd, "p_1311->g_681.sd", print_hash_value);
    transparent_crc(p_1311->g_681.se, "p_1311->g_681.se", print_hash_value);
    transparent_crc(p_1311->g_681.sf, "p_1311->g_681.sf", print_hash_value);
    transparent_crc(p_1311->g_682.s0, "p_1311->g_682.s0", print_hash_value);
    transparent_crc(p_1311->g_682.s1, "p_1311->g_682.s1", print_hash_value);
    transparent_crc(p_1311->g_682.s2, "p_1311->g_682.s2", print_hash_value);
    transparent_crc(p_1311->g_682.s3, "p_1311->g_682.s3", print_hash_value);
    transparent_crc(p_1311->g_682.s4, "p_1311->g_682.s4", print_hash_value);
    transparent_crc(p_1311->g_682.s5, "p_1311->g_682.s5", print_hash_value);
    transparent_crc(p_1311->g_682.s6, "p_1311->g_682.s6", print_hash_value);
    transparent_crc(p_1311->g_682.s7, "p_1311->g_682.s7", print_hash_value);
    transparent_crc(p_1311->g_684.x, "p_1311->g_684.x", print_hash_value);
    transparent_crc(p_1311->g_684.y, "p_1311->g_684.y", print_hash_value);
    transparent_crc(p_1311->g_684.z, "p_1311->g_684.z", print_hash_value);
    transparent_crc(p_1311->g_684.w, "p_1311->g_684.w", print_hash_value);
    transparent_crc(p_1311->g_688.s0, "p_1311->g_688.s0", print_hash_value);
    transparent_crc(p_1311->g_688.s1, "p_1311->g_688.s1", print_hash_value);
    transparent_crc(p_1311->g_688.s2, "p_1311->g_688.s2", print_hash_value);
    transparent_crc(p_1311->g_688.s3, "p_1311->g_688.s3", print_hash_value);
    transparent_crc(p_1311->g_688.s4, "p_1311->g_688.s4", print_hash_value);
    transparent_crc(p_1311->g_688.s5, "p_1311->g_688.s5", print_hash_value);
    transparent_crc(p_1311->g_688.s6, "p_1311->g_688.s6", print_hash_value);
    transparent_crc(p_1311->g_688.s7, "p_1311->g_688.s7", print_hash_value);
    transparent_crc(p_1311->g_699.x, "p_1311->g_699.x", print_hash_value);
    transparent_crc(p_1311->g_699.y, "p_1311->g_699.y", print_hash_value);
    transparent_crc(p_1311->g_746, "p_1311->g_746", print_hash_value);
    transparent_crc(p_1311->g_748, "p_1311->g_748", print_hash_value);
    transparent_crc(p_1311->g_922, "p_1311->g_922", print_hash_value);
    transparent_crc(p_1311->g_928.s0, "p_1311->g_928.s0", print_hash_value);
    transparent_crc(p_1311->g_928.s1, "p_1311->g_928.s1", print_hash_value);
    transparent_crc(p_1311->g_928.s2, "p_1311->g_928.s2", print_hash_value);
    transparent_crc(p_1311->g_928.s3, "p_1311->g_928.s3", print_hash_value);
    transparent_crc(p_1311->g_928.s4, "p_1311->g_928.s4", print_hash_value);
    transparent_crc(p_1311->g_928.s5, "p_1311->g_928.s5", print_hash_value);
    transparent_crc(p_1311->g_928.s6, "p_1311->g_928.s6", print_hash_value);
    transparent_crc(p_1311->g_928.s7, "p_1311->g_928.s7", print_hash_value);
    transparent_crc(p_1311->g_943.x, "p_1311->g_943.x", print_hash_value);
    transparent_crc(p_1311->g_943.y, "p_1311->g_943.y", print_hash_value);
    transparent_crc(p_1311->g_943.z, "p_1311->g_943.z", print_hash_value);
    transparent_crc(p_1311->g_943.w, "p_1311->g_943.w", print_hash_value);
    transparent_crc(p_1311->g_975.s0, "p_1311->g_975.s0", print_hash_value);
    transparent_crc(p_1311->g_975.s1, "p_1311->g_975.s1", print_hash_value);
    transparent_crc(p_1311->g_975.s2, "p_1311->g_975.s2", print_hash_value);
    transparent_crc(p_1311->g_975.s3, "p_1311->g_975.s3", print_hash_value);
    transparent_crc(p_1311->g_975.s4, "p_1311->g_975.s4", print_hash_value);
    transparent_crc(p_1311->g_975.s5, "p_1311->g_975.s5", print_hash_value);
    transparent_crc(p_1311->g_975.s6, "p_1311->g_975.s6", print_hash_value);
    transparent_crc(p_1311->g_975.s7, "p_1311->g_975.s7", print_hash_value);
    transparent_crc(p_1311->g_976.s0, "p_1311->g_976.s0", print_hash_value);
    transparent_crc(p_1311->g_976.s1, "p_1311->g_976.s1", print_hash_value);
    transparent_crc(p_1311->g_976.s2, "p_1311->g_976.s2", print_hash_value);
    transparent_crc(p_1311->g_976.s3, "p_1311->g_976.s3", print_hash_value);
    transparent_crc(p_1311->g_976.s4, "p_1311->g_976.s4", print_hash_value);
    transparent_crc(p_1311->g_976.s5, "p_1311->g_976.s5", print_hash_value);
    transparent_crc(p_1311->g_976.s6, "p_1311->g_976.s6", print_hash_value);
    transparent_crc(p_1311->g_976.s7, "p_1311->g_976.s7", print_hash_value);
    transparent_crc(p_1311->g_988.s0, "p_1311->g_988.s0", print_hash_value);
    transparent_crc(p_1311->g_988.s1, "p_1311->g_988.s1", print_hash_value);
    transparent_crc(p_1311->g_988.s2, "p_1311->g_988.s2", print_hash_value);
    transparent_crc(p_1311->g_988.s3, "p_1311->g_988.s3", print_hash_value);
    transparent_crc(p_1311->g_988.s4, "p_1311->g_988.s4", print_hash_value);
    transparent_crc(p_1311->g_988.s5, "p_1311->g_988.s5", print_hash_value);
    transparent_crc(p_1311->g_988.s6, "p_1311->g_988.s6", print_hash_value);
    transparent_crc(p_1311->g_988.s7, "p_1311->g_988.s7", print_hash_value);
    transparent_crc(p_1311->g_990.x, "p_1311->g_990.x", print_hash_value);
    transparent_crc(p_1311->g_990.y, "p_1311->g_990.y", print_hash_value);
    transparent_crc(p_1311->g_990.z, "p_1311->g_990.z", print_hash_value);
    transparent_crc(p_1311->g_990.w, "p_1311->g_990.w", print_hash_value);
    transparent_crc(p_1311->g_1006.x, "p_1311->g_1006.x", print_hash_value);
    transparent_crc(p_1311->g_1006.y, "p_1311->g_1006.y", print_hash_value);
    transparent_crc(p_1311->g_1006.z, "p_1311->g_1006.z", print_hash_value);
    transparent_crc(p_1311->g_1006.w, "p_1311->g_1006.w", print_hash_value);
    transparent_crc(p_1311->g_1007.s0, "p_1311->g_1007.s0", print_hash_value);
    transparent_crc(p_1311->g_1007.s1, "p_1311->g_1007.s1", print_hash_value);
    transparent_crc(p_1311->g_1007.s2, "p_1311->g_1007.s2", print_hash_value);
    transparent_crc(p_1311->g_1007.s3, "p_1311->g_1007.s3", print_hash_value);
    transparent_crc(p_1311->g_1007.s4, "p_1311->g_1007.s4", print_hash_value);
    transparent_crc(p_1311->g_1007.s5, "p_1311->g_1007.s5", print_hash_value);
    transparent_crc(p_1311->g_1007.s6, "p_1311->g_1007.s6", print_hash_value);
    transparent_crc(p_1311->g_1007.s7, "p_1311->g_1007.s7", print_hash_value);
    transparent_crc(p_1311->g_1007.s8, "p_1311->g_1007.s8", print_hash_value);
    transparent_crc(p_1311->g_1007.s9, "p_1311->g_1007.s9", print_hash_value);
    transparent_crc(p_1311->g_1007.sa, "p_1311->g_1007.sa", print_hash_value);
    transparent_crc(p_1311->g_1007.sb, "p_1311->g_1007.sb", print_hash_value);
    transparent_crc(p_1311->g_1007.sc, "p_1311->g_1007.sc", print_hash_value);
    transparent_crc(p_1311->g_1007.sd, "p_1311->g_1007.sd", print_hash_value);
    transparent_crc(p_1311->g_1007.se, "p_1311->g_1007.se", print_hash_value);
    transparent_crc(p_1311->g_1007.sf, "p_1311->g_1007.sf", print_hash_value);
    transparent_crc(p_1311->g_1177.s0, "p_1311->g_1177.s0", print_hash_value);
    transparent_crc(p_1311->g_1177.s1, "p_1311->g_1177.s1", print_hash_value);
    transparent_crc(p_1311->g_1177.s2, "p_1311->g_1177.s2", print_hash_value);
    transparent_crc(p_1311->g_1177.s3, "p_1311->g_1177.s3", print_hash_value);
    transparent_crc(p_1311->g_1177.s4, "p_1311->g_1177.s4", print_hash_value);
    transparent_crc(p_1311->g_1177.s5, "p_1311->g_1177.s5", print_hash_value);
    transparent_crc(p_1311->g_1177.s6, "p_1311->g_1177.s6", print_hash_value);
    transparent_crc(p_1311->g_1177.s7, "p_1311->g_1177.s7", print_hash_value);
    transparent_crc(p_1311->g_1177.s8, "p_1311->g_1177.s8", print_hash_value);
    transparent_crc(p_1311->g_1177.s9, "p_1311->g_1177.s9", print_hash_value);
    transparent_crc(p_1311->g_1177.sa, "p_1311->g_1177.sa", print_hash_value);
    transparent_crc(p_1311->g_1177.sb, "p_1311->g_1177.sb", print_hash_value);
    transparent_crc(p_1311->g_1177.sc, "p_1311->g_1177.sc", print_hash_value);
    transparent_crc(p_1311->g_1177.sd, "p_1311->g_1177.sd", print_hash_value);
    transparent_crc(p_1311->g_1177.se, "p_1311->g_1177.se", print_hash_value);
    transparent_crc(p_1311->g_1177.sf, "p_1311->g_1177.sf", print_hash_value);
    transparent_crc(p_1311->g_1199, "p_1311->g_1199", print_hash_value);
    transparent_crc(p_1311->g_1216.x, "p_1311->g_1216.x", print_hash_value);
    transparent_crc(p_1311->g_1216.y, "p_1311->g_1216.y", print_hash_value);
    transparent_crc(p_1311->g_1216.z, "p_1311->g_1216.z", print_hash_value);
    transparent_crc(p_1311->g_1216.w, "p_1311->g_1216.w", print_hash_value);
    transparent_crc(p_1311->g_1220.s0, "p_1311->g_1220.s0", print_hash_value);
    transparent_crc(p_1311->g_1220.s1, "p_1311->g_1220.s1", print_hash_value);
    transparent_crc(p_1311->g_1220.s2, "p_1311->g_1220.s2", print_hash_value);
    transparent_crc(p_1311->g_1220.s3, "p_1311->g_1220.s3", print_hash_value);
    transparent_crc(p_1311->g_1220.s4, "p_1311->g_1220.s4", print_hash_value);
    transparent_crc(p_1311->g_1220.s5, "p_1311->g_1220.s5", print_hash_value);
    transparent_crc(p_1311->g_1220.s6, "p_1311->g_1220.s6", print_hash_value);
    transparent_crc(p_1311->g_1220.s7, "p_1311->g_1220.s7", print_hash_value);
    transparent_crc(p_1311->g_1220.s8, "p_1311->g_1220.s8", print_hash_value);
    transparent_crc(p_1311->g_1220.s9, "p_1311->g_1220.s9", print_hash_value);
    transparent_crc(p_1311->g_1220.sa, "p_1311->g_1220.sa", print_hash_value);
    transparent_crc(p_1311->g_1220.sb, "p_1311->g_1220.sb", print_hash_value);
    transparent_crc(p_1311->g_1220.sc, "p_1311->g_1220.sc", print_hash_value);
    transparent_crc(p_1311->g_1220.sd, "p_1311->g_1220.sd", print_hash_value);
    transparent_crc(p_1311->g_1220.se, "p_1311->g_1220.se", print_hash_value);
    transparent_crc(p_1311->g_1220.sf, "p_1311->g_1220.sf", print_hash_value);
    transparent_crc(p_1311->g_1229, "p_1311->g_1229", print_hash_value);
    transparent_crc(p_1311->g_1251.x, "p_1311->g_1251.x", print_hash_value);
    transparent_crc(p_1311->g_1251.y, "p_1311->g_1251.y", print_hash_value);
    transparent_crc(p_1311->g_1251.z, "p_1311->g_1251.z", print_hash_value);
    transparent_crc(p_1311->g_1251.w, "p_1311->g_1251.w", print_hash_value);
    transparent_crc(p_1311->v_collective, "p_1311->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 20; i++)
            transparent_crc(p_1311->g_special_values[i + 20 * get_linear_group_id()], "p_1311->g_special_values[i + 20 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 20; i++)
            transparent_crc(p_1311->l_special_values[i], "p_1311->l_special_values[i]", print_hash_value);
    transparent_crc(p_1311->l_comm_values[get_linear_local_id()], "p_1311->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1311->g_comm_values[get_linear_group_id() * 49 + get_linear_local_id()], "p_1311->g_comm_values[get_linear_group_id() * 49 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
