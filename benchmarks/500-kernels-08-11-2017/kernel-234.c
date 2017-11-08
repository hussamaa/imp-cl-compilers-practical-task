// --atomics 30 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 24,57,2 -l 1,3,1
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

__constant uint32_t permutations[10][3] = {
{1,2,0}, // permutation 0
{2,0,1}, // permutation 1
{2,0,1}, // permutation 2
{2,0,1}, // permutation 3
{1,2,0}, // permutation 4
{2,0,1}, // permutation 5
{1,0,2}, // permutation 6
{2,0,1}, // permutation 7
{2,0,1}, // permutation 8
{2,0,1} // permutation 9
};

// Seed: 3554789263

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile int32_t g_2;
    volatile int32_t g_3;
    volatile int32_t g_4;
    int32_t g_5;
    int32_t g_8;
    int32_t g_13;
    int32_t * volatile g_250;
    int32_t * volatile * volatile g_249;
    VECTOR(uint64_t, 2) g_251;
    int16_t g_288;
    int32_t *g_310;
    int32_t **g_309;
    int32_t ***g_308;
    int32_t ***g_312;
    uint64_t g_316;
    int32_t g_333;
    int32_t g_334;
    int16_t g_335[9];
    int8_t g_336;
    uint32_t g_337;
    uint8_t g_342;
    uint32_t g_433;
    VECTOR(int64_t, 2) g_454;
    uint16_t g_459;
    VECTOR(int32_t, 4) g_533;
    int16_t g_553;
    VECTOR(uint64_t, 2) g_561;
    int16_t **g_609;
    int16_t ***g_608;
    int16_t ****g_607;
    uint16_t g_622;
    uint16_t *g_621[1];
    int64_t *g_634[3][3];
    int64_t **g_633;
    int64_t **g_637;
    VECTOR(uint16_t, 2) g_655;
    VECTOR(uint8_t, 4) g_656;
    VECTOR(int32_t, 16) g_681;
    VECTOR(int32_t, 4) g_700;
    VECTOR(int32_t, 16) g_704;
    volatile VECTOR(uint32_t, 8) g_739;
    VECTOR(int64_t, 16) g_740;
    VECTOR(uint8_t, 2) g_790;
    VECTOR(uint16_t, 8) g_798;
    volatile VECTOR(int16_t, 8) g_813;
    volatile VECTOR(int16_t, 2) g_814;
    volatile VECTOR(int16_t, 4) g_816;
    VECTOR(int16_t, 2) g_818;
    volatile VECTOR(int8_t, 8) g_839;
    volatile VECTOR(int16_t, 4) g_876;
    volatile VECTOR(int8_t, 16) g_877;
    volatile VECTOR(int32_t, 16) g_911;
    volatile int32_t g_917;
    uint64_t g_929;
    volatile VECTOR(uint16_t, 8) g_934;
    int64_t g_974;
    volatile VECTOR(uint8_t, 2) g_979;
    VECTOR(uint64_t, 2) g_983;
    VECTOR(uint64_t, 2) g_985;
    volatile VECTOR(int16_t, 16) g_1013;
    volatile VECTOR(uint64_t, 16) g_1036;
    VECTOR(uint64_t, 8) g_1037;
    int8_t *g_1047;
    volatile VECTOR(int32_t, 8) g_1052;
    VECTOR(int32_t, 16) g_1053;
    VECTOR(int16_t, 4) g_1121;
    int64_t ** volatile g_1147[5];
    int64_t ** volatile *g_1146;
    VECTOR(int16_t, 16) g_1151;
    VECTOR(int8_t, 8) g_1152;
    int32_t g_1157;
    uint32_t g_1160;
    uint32_t g_1216[2][4][6];
    int32_t * volatile g_1219;
    volatile int32_t g_1237[4][2][10];
    VECTOR(int16_t, 16) g_1352;
    uint32_t *g_1360;
    VECTOR(int64_t, 4) g_1366;
    volatile VECTOR(int64_t, 16) g_1367;
    VECTOR(int64_t, 8) g_1368;
    uint32_t * volatile **g_1390;
    volatile VECTOR(int8_t, 16) g_1391;
    VECTOR(uint8_t, 4) g_1411;
    VECTOR(uint8_t, 2) g_1462;
    volatile VECTOR(int8_t, 2) g_1519;
    VECTOR(int8_t, 8) g_1520;
    VECTOR(int8_t, 16) g_1523;
    int8_t g_1536;
    uint32_t g_1539;
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
int8_t  func_1(struct S0 * p_1551);
int32_t  func_14(uint32_t  p_15, int8_t  p_16, int64_t  p_17, int32_t  p_18, struct S0 * p_1551);
uint16_t  func_32(uint32_t  p_33, struct S0 * p_1551);
int32_t * func_255(int32_t ** p_256, int64_t  p_257, int64_t  p_258, struct S0 * p_1551);
int32_t ** func_259(int32_t  p_260, uint32_t  p_261, int32_t * p_262, struct S0 * p_1551);
int32_t  func_263(int32_t * p_264, int32_t * p_265, int32_t ** p_266, int32_t  p_267, struct S0 * p_1551);
int32_t * func_268(int8_t  p_269, int8_t  p_270, int32_t ** p_271, int32_t ** p_272, int32_t * p_273, struct S0 * p_1551);
int32_t  func_274(int32_t ** p_275, struct S0 * p_1551);
int32_t ** func_279(int32_t ** p_280, uint8_t  p_281, int16_t  p_282, int32_t * p_283, struct S0 * p_1551);
int32_t * func_301(int64_t  p_302, int8_t  p_303, int8_t  p_304, int32_t ** p_305, int32_t  p_306, struct S0 * p_1551);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1551->g_5 p_1551->g_2 p_1551->g_1160 p_1551->g_333 p_1551->g_1047 p_1551->g_336 p_1551->g_249 p_1551->g_250 p_1551->g_13 p_1551->g_8 p_1551->g_308 p_1551->g_309 p_1551->g_335 p_1551->g_839 p_1551->g_798 p_1551->g_337 p_1551->g_818
 * writes: p_1551->g_5 p_1551->g_8 p_1551->g_13 p_1551->g_2 p_1551->g_1160 p_1551->g_333 p_1551->g_316 p_1551->g_310 p_1551->g_336 p_1551->g_1216
 */
int8_t  func_1(struct S0 * p_1551)
{ /* block id: 4 */
    int8_t l_11 = (-7L);
    VECTOR(int8_t, 2) l_23 = (VECTOR(int8_t, 2))(0x73L, 0x7DL);
    VECTOR(int8_t, 2) l_24 = (VECTOR(int8_t, 2))(0x6CL, 4L);
    VECTOR(int8_t, 2) l_25 = (VECTOR(int8_t, 2))(1L, (-1L));
    VECTOR(int8_t, 4) l_26 = (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 0x57L), 0x57L);
    VECTOR(int8_t, 8) l_27 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x1DL), 0x1DL), 0x1DL, 0L, 0x1DL);
    int32_t l_1153[8];
    int32_t *l_1154 = (void*)0;
    int32_t *l_1156 = &p_1551->g_1157;
    int32_t l_1218 = (-1L);
    int32_t *l_1221 = (void*)0;
    int32_t *l_1222 = &l_1153[4];
    int32_t *l_1223 = &p_1551->g_5;
    int32_t *l_1224 = &l_1153[4];
    int32_t *l_1225 = &p_1551->g_5;
    int32_t *l_1226[6][7][6] = {{{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0}},{{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0}},{{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0}},{{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0}},{{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0}},{{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0},{&p_1551->g_8,(void*)0,(void*)0,(void*)0,&p_1551->g_5,(void*)0}}};
    int16_t l_1227 = 7L;
    uint64_t l_1228 = 0xA2AAC88B042D5A9CL;
    int32_t l_1231 = 0x1A472A35L;
    int32_t l_1232 = 0x372FA1B6L;
    int64_t l_1233 = 1L;
    int32_t l_1234 = 0x0EFBAF3EL;
    int32_t l_1235 = (-1L);
    int16_t l_1236 = (-1L);
    int64_t l_1238 = 5L;
    int16_t l_1239 = 0x352AL;
    uint32_t l_1240[4];
    VECTOR(uint16_t, 2) l_1340 = (VECTOR(uint16_t, 2))(1UL, 7UL);
    uint32_t l_1361 = 0x1BE4C279L;
    uint64_t l_1378 = 0UL;
    int8_t l_1446 = 0L;
    VECTOR(uint16_t, 16) l_1449 = (VECTOR(uint16_t, 16))(0x773DL, (VECTOR(uint16_t, 4))(0x773DL, (VECTOR(uint16_t, 2))(0x773DL, 0UL), 0UL), 0UL, 0x773DL, 0UL, (VECTOR(uint16_t, 2))(0x773DL, 0UL), (VECTOR(uint16_t, 2))(0x773DL, 0UL), 0x773DL, 0UL, 0x773DL, 0UL);
    uint64_t l_1466[6];
    uint8_t l_1530[8][2] = {{0xDFL,249UL},{0xDFL,249UL},{0xDFL,249UL},{0xDFL,249UL},{0xDFL,249UL},{0xDFL,249UL},{0xDFL,249UL},{0xDFL,249UL}};
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_1153[i] = 0x7B86A709L;
    for (i = 0; i < 4; i++)
        l_1240[i] = 1UL;
    for (i = 0; i < 6; i++)
        l_1466[i] = 0x1B37B11B9CD75FE7L;
    for (p_1551->g_5 = 0; (p_1551->g_5 != (-25)); p_1551->g_5 = safe_sub_func_int64_t_s_s(p_1551->g_5, 3))
    { /* block id: 7 */
        uint64_t l_28 = 18446744073709551615UL;
        VECTOR(int32_t, 4) l_31 = (VECTOR(int32_t, 4))(0x4380D33BL, (VECTOR(int32_t, 2))(0x4380D33BL, 0x7E29AC92L), 0x7E29AC92L);
        int64_t **l_1149 = &p_1551->g_634[1][1];
        int64_t ***l_1148 = &l_1149;
        int64_t ****l_1150 = &l_1148;
        int32_t **l_1155 = &l_1154;
        int32_t **l_1158 = &l_1156;
        uint32_t *l_1159 = &p_1551->g_1160;
        int32_t l_1161 = 0x5DF6DA67L;
        int32_t l_1217 = 0x0CB2340AL;
        int32_t *l_1220 = &p_1551->g_8;
        int i;
        for (p_1551->g_8 = 0; (p_1551->g_8 <= (-9)); p_1551->g_8 = safe_sub_func_uint16_t_u_u(p_1551->g_8, 7))
        { /* block id: 10 */
            int32_t *l_12[1];
            int i;
            for (i = 0; i < 1; i++)
                l_12[i] = (void*)0;
            p_1551->g_2 ^= (p_1551->g_13 = (!l_11));
        }
        l_1217 ^= func_14(((*l_1159) &= (safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 16))(l_23.yyxxyyyyyyxxyyyx)).s03ca, ((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_24.yy)), 0L, (-3L))), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 4))(l_25.yxxx)).yyxyyzxzzwwwyyyw, ((VECTOR(int8_t, 4))(0x6CL, 1L, 1L, 0x50L)).ywzxyxxxyxzyzzzy))).s54)), 0L, (-1L))).hi, ((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_26.wzyz)))).z, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_27.s57)).xyyxyyyx)).hi)), (l_28 , (((((VECTOR(int32_t, 4))(l_31.yyxw)).x , func_32((safe_rshift_func_int8_t_s_u(l_28, 6)), p_1551)) == (p_1551->g_1146 == ((*l_1150) = l_1148))) > ((VECTOR(int16_t, 16))(p_1551->g_1151.s91d9d4b8b294bd9d)).s0)), 0x22L, 0x1AL)).s47, ((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 16))(p_1551->g_1152.s6527153376576374)).s5b, ((VECTOR(int8_t, 16))((((*l_1155) = ((l_1153[4] = ((void*)0 != &p_1551->g_459)) , l_1154)) != ((*l_1158) = l_1156)), (*p_1551->g_1047), 0x18L, l_28, (*p_1551->g_1047), l_27.s4, 0x61L, 0x60L, l_31.x, ((VECTOR(int8_t, 2))(0x4BL)), (*p_1551->g_1047), (-1L), 0x1CL, 3L, 2L)).s5a))).yyyy, ((VECTOR(int8_t, 4))(1L))))), ((VECTOR(int8_t, 4))((-1L)))))).hi, ((VECTOR(int8_t, 2))(0x64L))))).xyxxxyxyxyxxyxyy, ((VECTOR(int8_t, 16))(0L))))).s3954)))))).y, l_31.y)), 0xBBA8CA82L))), p_1551->g_333, l_31.w, l_1161, p_1551);
        (*l_1220) = l_1218;
    }
    --l_1228;
    ++l_1240[3];
    for (l_1231 = 0; (l_1231 == (-23)); --l_1231)
    { /* block id: 549 */
        int32_t l_1245 = (-6L);
        int32_t l_1272 = 0x70CD6E44L;
        int32_t l_1273[3];
        VECTOR(int16_t, 16) l_1353 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x168FL), 0x168FL), 0x168FL, 0L, 0x168FL, (VECTOR(int16_t, 2))(0L, 0x168FL), (VECTOR(int16_t, 2))(0L, 0x168FL), 0L, 0x168FL, 0L, 0x168FL);
        int64_t l_1355 = (-1L);
        int32_t l_1356 = (-3L);
        int64_t l_1357 = 0L;
        int64_t *l_1377[7][8][3] = {{{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974}},{{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974}},{{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974}},{{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974}},{{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974}},{{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974}},{{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974},{&p_1551->g_974,&p_1551->g_974,&p_1551->g_974}}};
        int64_t l_1382 = (-1L);
        uint32_t l_1407 = 0xDFF13780L;
        int16_t *l_1420[2][9][6] = {{{&l_1227,&p_1551->g_335[0],&p_1551->g_335[0],&l_1227,&l_1227,&p_1551->g_335[0]},{&l_1227,&p_1551->g_335[0],&p_1551->g_335[0],&l_1227,&l_1227,&p_1551->g_335[0]},{&l_1227,&p_1551->g_335[0],&p_1551->g_335[0],&l_1227,&l_1227,&p_1551->g_335[0]},{&l_1227,&p_1551->g_335[0],&p_1551->g_335[0],&l_1227,&l_1227,&p_1551->g_335[0]},{&l_1227,&p_1551->g_335[0],&p_1551->g_335[0],&l_1227,&l_1227,&p_1551->g_335[0]},{&l_1227,&p_1551->g_335[0],&p_1551->g_335[0],&l_1227,&l_1227,&p_1551->g_335[0]},{&l_1227,&p_1551->g_335[0],&p_1551->g_335[0],&l_1227,&l_1227,&p_1551->g_335[0]},{&l_1227,&p_1551->g_335[0],&p_1551->g_335[0],&l_1227,&l_1227,&p_1551->g_335[0]},{&l_1227,&p_1551->g_335[0],&p_1551->g_335[0],&l_1227,&l_1227,&p_1551->g_335[0]}},{{&l_1227,&p_1551->g_335[0],&p_1551->g_335[0],&l_1227,&l_1227,&p_1551->g_335[0]},{&l_1227,&p_1551->g_335[0],&p_1551->g_335[0],&l_1227,&l_1227,&p_1551->g_335[0]},{&l_1227,&p_1551->g_335[0],&p_1551->g_335[0],&l_1227,&l_1227,&p_1551->g_335[0]},{&l_1227,&p_1551->g_335[0],&p_1551->g_335[0],&l_1227,&l_1227,&p_1551->g_335[0]},{&l_1227,&p_1551->g_335[0],&p_1551->g_335[0],&l_1227,&l_1227,&p_1551->g_335[0]},{&l_1227,&p_1551->g_335[0],&p_1551->g_335[0],&l_1227,&l_1227,&p_1551->g_335[0]},{&l_1227,&p_1551->g_335[0],&p_1551->g_335[0],&l_1227,&l_1227,&p_1551->g_335[0]},{&l_1227,&p_1551->g_335[0],&p_1551->g_335[0],&l_1227,&l_1227,&p_1551->g_335[0]},{&l_1227,&p_1551->g_335[0],&p_1551->g_335[0],&l_1227,&l_1227,&p_1551->g_335[0]}}};
        int16_t ***l_1433 = &p_1551->g_609;
        uint16_t l_1518 = 0xADF8L;
        int64_t l_1534 = 0x0B163885DCCAAD60L;
        int16_t l_1537 = 0L;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1273[i] = (-1L);
        (1 + 1);
    }
    return (*p_1551->g_1047);
}


/* ------------------------------------------ */
/* 
 * reads : p_1551->g_333 p_1551->g_1047 p_1551->g_336 p_1551->g_249 p_1551->g_250 p_1551->g_13 p_1551->g_8 p_1551->g_308 p_1551->g_309 p_1551->g_335 p_1551->g_839 p_1551->g_798 p_1551->g_337 p_1551->g_818
 * writes: p_1551->g_333 p_1551->g_316 p_1551->g_8 p_1551->g_310 p_1551->g_336 p_1551->g_1216
 */
int32_t  func_14(uint32_t  p_15, int8_t  p_16, int64_t  p_17, int32_t  p_18, struct S0 * p_1551)
{ /* block id: 522 */
    VECTOR(int8_t, 2) l_1166 = (VECTOR(int8_t, 2))(0x1AL, (-10L));
    int32_t l_1189[2];
    VECTOR(uint32_t, 4) l_1194 = (VECTOR(uint32_t, 4))(0xF9C97E31L, (VECTOR(uint32_t, 2))(0xF9C97E31L, 1UL), 1UL);
    int32_t ****l_1195 = &p_1551->g_308;
    int32_t l_1196 = (-7L);
    VECTOR(uint8_t, 16) l_1201 = (VECTOR(uint8_t, 16))(0x27L, (VECTOR(uint8_t, 4))(0x27L, (VECTOR(uint8_t, 2))(0x27L, 4UL), 4UL), 4UL, 0x27L, 4UL, (VECTOR(uint8_t, 2))(0x27L, 4UL), (VECTOR(uint8_t, 2))(0x27L, 4UL), 0x27L, 4UL, 0x27L, 4UL);
    VECTOR(int16_t, 2) l_1204 = (VECTOR(int16_t, 2))(0L, 0L);
    int8_t **l_1207[6][2] = {{&p_1551->g_1047,&p_1551->g_1047},{&p_1551->g_1047,&p_1551->g_1047},{&p_1551->g_1047,&p_1551->g_1047},{&p_1551->g_1047,&p_1551->g_1047},{&p_1551->g_1047,&p_1551->g_1047},{&p_1551->g_1047,&p_1551->g_1047}};
    int8_t ***l_1208 = &l_1207[5][1];
    uint16_t l_1209 = 0x480DL;
    uint32_t *l_1212 = &p_1551->g_433;
    uint32_t **l_1211[8][3][4] = {{{&l_1212,&l_1212,&l_1212,&l_1212},{&l_1212,&l_1212,&l_1212,&l_1212},{&l_1212,&l_1212,&l_1212,&l_1212}},{{&l_1212,&l_1212,&l_1212,&l_1212},{&l_1212,&l_1212,&l_1212,&l_1212},{&l_1212,&l_1212,&l_1212,&l_1212}},{{&l_1212,&l_1212,&l_1212,&l_1212},{&l_1212,&l_1212,&l_1212,&l_1212},{&l_1212,&l_1212,&l_1212,&l_1212}},{{&l_1212,&l_1212,&l_1212,&l_1212},{&l_1212,&l_1212,&l_1212,&l_1212},{&l_1212,&l_1212,&l_1212,&l_1212}},{{&l_1212,&l_1212,&l_1212,&l_1212},{&l_1212,&l_1212,&l_1212,&l_1212},{&l_1212,&l_1212,&l_1212,&l_1212}},{{&l_1212,&l_1212,&l_1212,&l_1212},{&l_1212,&l_1212,&l_1212,&l_1212},{&l_1212,&l_1212,&l_1212,&l_1212}},{{&l_1212,&l_1212,&l_1212,&l_1212},{&l_1212,&l_1212,&l_1212,&l_1212},{&l_1212,&l_1212,&l_1212,&l_1212}},{{&l_1212,&l_1212,&l_1212,&l_1212},{&l_1212,&l_1212,&l_1212,&l_1212},{&l_1212,&l_1212,&l_1212,&l_1212}}};
    uint32_t ***l_1210 = &l_1211[4][0][0];
    int32_t *l_1213 = (void*)0;
    int32_t *l_1214 = &l_1189[1];
    uint32_t *l_1215[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1189[i] = (-8L);
    for (p_1551->g_333 = 0; (p_1551->g_333 >= 29); ++p_1551->g_333)
    { /* block id: 525 */
        uint64_t *l_1167 = (void*)0;
        uint64_t *l_1168 = (void*)0;
        uint64_t *l_1169 = &p_1551->g_316;
        int32_t l_1170 = (-10L);
        int32_t *l_1171 = (void*)0;
        int32_t *l_1172 = &p_1551->g_8;
        l_1170 = ((safe_mul_func_int8_t_s_s((*p_1551->g_1047), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(l_1166.yyyxyyyx)))))).s04)).lo)) || ((*l_1169) = 0x37438D3D7661D240L));
        (*l_1172) &= (**p_1551->g_249);
        if (p_15)
            break;
        p_18 = (*p_1551->g_250);
    }
    (**p_1551->g_308) = (void*)0;
    l_1196 = (safe_sub_func_uint64_t_u_u((safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s(p_17, (((((safe_lshift_func_int8_t_s_u(0x45L, 0)) , &p_1551->g_308) == ((((safe_sub_func_uint64_t_u_u((p_1551->g_335[7] && ((*p_1551->g_1047) = (safe_add_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(0UL, ((l_1189[0] &= 0x30C380D4L) | (safe_rshift_func_int8_t_s_u(p_17, (((~((safe_div_func_uint64_t_u_u((((VECTOR(uint32_t, 16))(l_1194.wwyzzzyxwyyywzzx)).s8 , p_15), ((l_1194.y > p_15) ^ l_1166.y))) >= l_1194.x)) || FAKE_DIVERGE(p_1551->global_0_offset, get_global_id(0), 10)) != 0x540EBEF81972EE98L)))))) ^ p_1551->g_839.s5), l_1194.y)))), p_15)) | l_1166.y) || l_1166.y) , l_1195)) > l_1166.x) != p_18))), p_16)), 0x3A51L)), p_18));
    p_18 = (((&p_1551->g_607 == &p_1551->g_607) && (((safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((p_1551->g_1216[0][3][5] = ((((((VECTOR(uint8_t, 2))(l_1201.s66)).lo > 2L) || (safe_mul_func_int8_t_s_s((((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_1204.yyyyyxxy)).s1635236344366345)).s6946)).y >= p_16), (safe_sub_func_uint32_t_u_u((((*l_1208) = l_1207[3][1]) == (((((((((*l_1214) = (((l_1209 , l_1210) != (void*)0) > (((VECTOR(int8_t, 2))((-1L), 0x4AL)).hi < ((((((*p_1551->g_1047) = p_15) || 247UL) & 2UL) <= (-1L)) == p_17)))) || 0UL) == p_17) > p_18) && p_1551->g_798.s7) , p_18) >= p_1551->g_337) , (void*)0)), (*p_1551->g_250)))))) == 0xB8B8FEC6L) ^ p_18)) , (*l_1214)), 0x0FL)), p_15)) ^ p_1551->g_818.y) >= 4294967289UL)) && 0x8F739DFD303F28F7L);
    return p_18;
}


/* ------------------------------------------ */
/* 
 * reads : p_1551->g_249 p_1551->g_251 p_1551->g_13 p_1551->g_comm_values p_1551->g_5 p_1551->g_316 p_1551->g_334 p_1551->g_288 p_1551->g_433 p_1551->g_454 p_1551->g_342 p_1551->g_459 p_1551->g_533 p_1551->g_309 p_1551->g_310 p_1551->g_561 p_1551->g_337 p_1551->g_607 p_1551->l_comm_values p_1551->g_312 p_1551->g_608 p_1551->g_609 p_1551->g_621 p_1551->g_633 p_1551->g_655 p_1551->g_656 p_1551->g_308 p_1551->g_8 p_1551->g_681 p_1551->g_700 p_1551->g_704 p_1551->g_622 p_1551->g_739 p_1551->g_740 p_1551->g_336 p_1551->g_790 p_1551->g_798 p_1551->g_553 p_1551->g_813 p_1551->g_814 p_1551->g_816 p_1551->g_818 p_1551->g_250 p_1551->g_876 p_1551->g_877 p_1551->g_3 p_1551->g_911 p_1551->g_929 p_1551->g_979 p_1551->g_634 p_1551->g_637 p_1551->g_983 p_1551->g_985 p_1551->g_333 p_1551->g_1013 p_1551->g_1036 p_1551->g_1037 p_1551->g_335 p_1551->g_1052 p_1551->g_1053 p_1551->g_1121 p_1551->g_1047
 * writes: p_1551->g_13 p_1551->g_288 p_1551->g_433 p_1551->g_335 p_1551->g_342 p_1551->g_459 p_1551->g_336 p_1551->g_637 p_1551->g_310 p_1551->g_681 p_1551->g_8 p_1551->g_622 p_1551->g_633 p_1551->g_656 p_1551->g_316 p_1551->g_553 p_1551->g_929 p_1551->g_621 p_1551->g_655 p_1551->g_1047 p_1551->g_312 p_1551->g_337
 */
uint16_t  func_32(uint32_t  p_33, struct S0 * p_1551)
{ /* block id: 14 */
    int32_t l_254 = 0L;
    int32_t *l_277 = &p_1551->g_13;
    int32_t **l_276 = &l_277;
    int32_t **l_284 = &l_277;
    int16_t *l_287 = &p_1551->g_288;
    int32_t ***l_290 = &l_276;
    int32_t *l_291[10][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t *l_682 = &p_1551->g_8;
    int32_t l_726 = 0x55825A02L;
    uint8_t l_748 = 0x6FL;
    VECTOR(int16_t, 8) l_815 = (VECTOR(int16_t, 8))(0x2BE8L, (VECTOR(int16_t, 4))(0x2BE8L, (VECTOR(int16_t, 2))(0x2BE8L, 2L), 2L), 2L, 0x2BE8L, 2L);
    int16_t ****l_870 = (void*)0;
    VECTOR(int16_t, 16) l_873 = (VECTOR(int16_t, 16))(0x3BC5L, (VECTOR(int16_t, 4))(0x3BC5L, (VECTOR(int16_t, 2))(0x3BC5L, 0x7BF7L), 0x7BF7L), 0x7BF7L, 0x3BC5L, 0x7BF7L, (VECTOR(int16_t, 2))(0x3BC5L, 0x7BF7L), (VECTOR(int16_t, 2))(0x3BC5L, 0x7BF7L), 0x3BC5L, 0x7BF7L, 0x3BC5L, 0x7BF7L);
    VECTOR(int16_t, 16) l_874 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x68B0L), 0x68B0L), 0x68B0L, 0L, 0x68B0L, (VECTOR(int16_t, 2))(0L, 0x68B0L), (VECTOR(int16_t, 2))(0L, 0x68B0L), 0L, 0x68B0L, 0L, 0x68B0L);
    VECTOR(int16_t, 2) l_875 = (VECTOR(int16_t, 2))((-2L), 0L);
    int16_t l_888 = (-1L);
    VECTOR(int32_t, 2) l_891 = (VECTOR(int32_t, 2))(0L, (-3L));
    VECTOR(int32_t, 16) l_892 = (VECTOR(int32_t, 16))(0x43F4FA92L, (VECTOR(int32_t, 4))(0x43F4FA92L, (VECTOR(int32_t, 2))(0x43F4FA92L, 0x193EA7E3L), 0x193EA7E3L), 0x193EA7E3L, 0x43F4FA92L, 0x193EA7E3L, (VECTOR(int32_t, 2))(0x43F4FA92L, 0x193EA7E3L), (VECTOR(int32_t, 2))(0x43F4FA92L, 0x193EA7E3L), 0x43F4FA92L, 0x193EA7E3L, 0x43F4FA92L, 0x193EA7E3L);
    int8_t *l_895[2][10][10] = {{{&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336},{&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336},{&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336},{&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336},{&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336},{&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336},{&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336},{&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336},{&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336},{&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336}},{{&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336},{&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336},{&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336},{&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336},{&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336},{&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336},{&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336},{&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336},{&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336},{&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336,&p_1551->g_336}}};
    VECTOR(uint16_t, 2) l_908 = (VECTOR(uint16_t, 2))(1UL, 0xA1BBL);
    int64_t ***l_970 = &p_1551->g_637;
    VECTOR(uint64_t, 16) l_982 = (VECTOR(uint64_t, 16))(9UL, (VECTOR(uint64_t, 4))(9UL, (VECTOR(uint64_t, 2))(9UL, 0x847A19B7EE91CF7CL), 0x847A19B7EE91CF7CL), 0x847A19B7EE91CF7CL, 9UL, 0x847A19B7EE91CF7CL, (VECTOR(uint64_t, 2))(9UL, 0x847A19B7EE91CF7CL), (VECTOR(uint64_t, 2))(9UL, 0x847A19B7EE91CF7CL), 9UL, 0x847A19B7EE91CF7CL, 9UL, 0x847A19B7EE91CF7CL);
    VECTOR(int32_t, 8) l_988 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x4160A90AL), 0x4160A90AL), 0x4160A90AL, 1L, 0x4160A90AL);
    VECTOR(int16_t, 4) l_1012 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x089BL), 0x089BL);
    uint32_t l_1023[5][5] = {{4294967295UL,1UL,4294967295UL,4294967295UL,1UL},{4294967295UL,1UL,4294967295UL,4294967295UL,1UL},{4294967295UL,1UL,4294967295UL,4294967295UL,1UL},{4294967295UL,1UL,4294967295UL,4294967295UL,1UL},{4294967295UL,1UL,4294967295UL,4294967295UL,1UL}};
    VECTOR(int32_t, 4) l_1049 = (VECTOR(int32_t, 4))(0x7C02C2FCL, (VECTOR(int32_t, 2))(0x7C02C2FCL, 0x74EF2615L), 0x74EF2615L);
    VECTOR(int32_t, 4) l_1051 = (VECTOR(int32_t, 4))(0x63FD07FCL, (VECTOR(int32_t, 2))(0x63FD07FCL, 0x6431565EL), 0x6431565EL);
    int64_t l_1145 = (-3L);
    int i, j, k;
    if ((atomic_inc(&p_1551->g_atomic_input[30 * get_linear_group_id() + 29]) == 6))
    { /* block id: 16 */
        int8_t l_36 = 0x3BL;
        uint32_t l_37 = 0xE5769E8AL;
        int32_t l_247 = 0x63576E49L;
        int32_t *l_246 = &l_247;
        int32_t *l_248 = &l_247;
        --l_37;
        for (l_36 = (-22); (l_36 == 7); l_36++)
        { /* block id: 20 */
            VECTOR(int8_t, 16) l_42 = (VECTOR(int8_t, 16))(0x54L, (VECTOR(int8_t, 4))(0x54L, (VECTOR(int8_t, 2))(0x54L, 1L), 1L), 1L, 0x54L, 1L, (VECTOR(int8_t, 2))(0x54L, 1L), (VECTOR(int8_t, 2))(0x54L, 1L), 0x54L, 1L, 0x54L, 1L);
            uint64_t l_43 = 1UL;
            uint16_t l_44[3];
            VECTOR(int32_t, 16) l_45 = (VECTOR(int32_t, 16))(0x274CB070L, (VECTOR(int32_t, 4))(0x274CB070L, (VECTOR(int32_t, 2))(0x274CB070L, 0x3C842353L), 0x3C842353L), 0x3C842353L, 0x274CB070L, 0x3C842353L, (VECTOR(int32_t, 2))(0x274CB070L, 0x3C842353L), (VECTOR(int32_t, 2))(0x274CB070L, 0x3C842353L), 0x274CB070L, 0x3C842353L, 0x274CB070L, 0x3C842353L);
            VECTOR(int32_t, 16) l_46 = (VECTOR(int32_t, 16))(0x48E9BDCCL, (VECTOR(int32_t, 4))(0x48E9BDCCL, (VECTOR(int32_t, 2))(0x48E9BDCCL, 0x77BC72EAL), 0x77BC72EAL), 0x77BC72EAL, 0x48E9BDCCL, 0x77BC72EAL, (VECTOR(int32_t, 2))(0x48E9BDCCL, 0x77BC72EAL), (VECTOR(int32_t, 2))(0x48E9BDCCL, 0x77BC72EAL), 0x48E9BDCCL, 0x77BC72EAL, 0x48E9BDCCL, 0x77BC72EAL);
            int16_t l_47[9] = {0L,4L,0L,0L,4L,0L,0L,4L,0L};
            VECTOR(int32_t, 4) l_48 = (VECTOR(int32_t, 4))(0x09B64D43L, (VECTOR(int32_t, 2))(0x09B64D43L, 3L), 3L);
            uint64_t l_243 = 0x3CEB6214BE4D7167L;
            int i;
            for (i = 0; i < 3; i++)
                l_44[i] = 4UL;
            l_47[6] = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 2))(0x0133D496L, 7L)).yyyyyyxy))).s2323116632053126, ((VECTOR(int32_t, 4))((l_44[0] = (((VECTOR(int8_t, 16))(l_42.s251f81f13d46409e)).sf , l_43)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_45.s725ac950041ac573)).sc0)), 9L)).xzwwzywwxzwxzyzz))), ((VECTOR(int32_t, 4))(l_46.s1289)).zzywzxzwxwywwxwy))).odd)).s2;
            l_45.s2 = 0L;
            if (((VECTOR(int32_t, 2))(l_48.xz)).even)
            { /* block id: 24 */
                uint32_t l_49 = 1UL;
                uint32_t l_139 = 0xC1D09703L;
                if (l_49)
                { /* block id: 25 */
                    int16_t l_50 = 0x247AL;
                    if (l_50)
                    { /* block id: 26 */
                        int16_t l_51 = 0x79EEL;
                        VECTOR(int32_t, 2) l_52 = (VECTOR(int32_t, 2))(0x2B70C687L, 0L);
                        uint16_t l_53 = 0x0BCFL;
                        uint16_t l_54 = 65534UL;
                        uint8_t l_55[8] = {1UL,3UL,1UL,1UL,3UL,1UL,1UL,3UL};
                        uint8_t l_56 = 0UL;
                        int32_t l_57 = 0x03F06E91L;
                        VECTOR(int16_t, 16) l_58 = (VECTOR(int16_t, 16))(0x666BL, (VECTOR(int16_t, 4))(0x666BL, (VECTOR(int16_t, 2))(0x666BL, 0x60ABL), 0x60ABL), 0x60ABL, 0x666BL, 0x60ABL, (VECTOR(int16_t, 2))(0x666BL, 0x60ABL), (VECTOR(int16_t, 2))(0x666BL, 0x60ABL), 0x666BL, 0x60ABL, 0x666BL, 0x60ABL);
                        VECTOR(int16_t, 16) l_59 = (VECTOR(int16_t, 16))(0x4395L, (VECTOR(int16_t, 4))(0x4395L, (VECTOR(int16_t, 2))(0x4395L, 1L), 1L), 1L, 0x4395L, 1L, (VECTOR(int16_t, 2))(0x4395L, 1L), (VECTOR(int16_t, 2))(0x4395L, 1L), 0x4395L, 1L, 0x4395L, 1L);
                        uint64_t l_60 = 18446744073709551606UL;
                        int8_t l_61 = (-8L);
                        int16_t l_62 = (-1L);
                        uint8_t l_63 = 0x10L;
                        uint16_t l_64 = 0xFAEFL;
                        int8_t l_65 = 0L;
                        int16_t l_66[7] = {4L,4L,4L,4L,4L,4L,4L};
                        uint8_t l_67 = 0xEAL;
                        int8_t l_68 = 0x71L;
                        VECTOR(int64_t, 16) l_69 = (VECTOR(int64_t, 16))(0x076915C511D40112L, (VECTOR(int64_t, 4))(0x076915C511D40112L, (VECTOR(int64_t, 2))(0x076915C511D40112L, (-1L)), (-1L)), (-1L), 0x076915C511D40112L, (-1L), (VECTOR(int64_t, 2))(0x076915C511D40112L, (-1L)), (VECTOR(int64_t, 2))(0x076915C511D40112L, (-1L)), 0x076915C511D40112L, (-1L), 0x076915C511D40112L, (-1L));
                        uint16_t l_70 = 0xF5DBL;
                        int32_t *l_72 = (void*)0;
                        int32_t **l_71 = &l_72;
                        uint64_t l_75 = 0x338A2FE657869F8AL;
                        int32_t *l_76[1][2];
                        int32_t *l_77 = (void*)0;
                        int32_t *l_78[2];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_76[i][j] = (void*)0;
                        }
                        for (i = 0; i < 2; i++)
                            l_78[i] = (void*)0;
                        l_46.s5 |= (l_48.z = (l_45.s6 = l_51));
                        l_45.s3 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 16))((l_53 &= ((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(0x0612730CL, 0x16A604C9L)).xxxyxyyx, ((VECTOR(int32_t, 2))(l_52.xy)).xyyyxxyy, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0L, 0L)))).xxyxxxyx))).s0), (-1L), ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))((-5L), 0x67BE80AAL, 0x2C1B334FL, 0x5E5592EDL)).hi, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0x43983B7CL, 2L, 0L, 0x380CEB71L)).hi)), ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 2))(0x7091AFF6L, 0x38D59A43L)).xyxy))), ((VECTOR(int32_t, 16))(l_54, ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 16))((l_55[0] , 5L), (l_46.s9 ^= ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(0L, (l_47[6] = ((VECTOR(int16_t, 2))(0x5FA2L, 0x382DL)).lo), 0x2355L, 1L, 0x36CFL, ((VECTOR(int16_t, 16))((-2L), 0x4FB4L, l_56, 0x5117L, 0L, ((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 4))(l_57, 0x7212L, 6L, 8L)).zyxzxywz, ((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 4))(l_58.s02da)).even, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_59.sf650)).zwxzwxxw)).s47))).yxyyxxyy))), ((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 16))(1L, (-4L), (l_50 = (l_60 , l_61)), l_62, l_63, (-1L), 0x60E8L, 0x67C4L, ((VECTOR(int16_t, 4))(0x28EFL)), l_64, ((VECTOR(int16_t, 2))(1L)), 0x51E4L)).s53, ((VECTOR(int16_t, 2))(0x46B6L))))), (-1L))).sc, (-7L), 9L)), 0x6EF1L, (-3L), ((VECTOR(int16_t, 2))(1L)), l_65, l_66[6], 0x2442L, 0x728FL)).sc8, ((VECTOR(uint16_t, 2))(0xE3FDL))))).lo), l_67, (-3L), 1L, ((VECTOR(int32_t, 4))(0L)), l_68, 0L, ((VECTOR(int32_t, 4))(0x0DBD8298L)), (-2L))).s7a6e, ((VECTOR(int32_t, 4))(9L))))).y, ((VECTOR(int32_t, 4))(0x1B496B13L)), (-1L), 0x41C00ABCL, ((VECTOR(int32_t, 8))(0x269E2847L)))).s5860, ((VECTOR(int32_t, 4))(0L))))).zwzxwzyz, ((VECTOR(int32_t, 8))(8L)), ((VECTOR(int32_t, 8))((-1L)))))).s50))).yyxy)).even))), (-4L), 1L, 0x7EEDE604L, ((VECTOR(int32_t, 2))(0x7E98E595L)), l_69.s1, 0L, 1L, 0x04A2D252L, l_70, (-4L), 0x7F9132EEL)), ((VECTOR(int32_t, 16))(0x17E4B885L))))).even)).s6, ((VECTOR(int32_t, 2))((-8L))), 0x1864EC0BL, 1L, 7L, (-6L), 0x7A78CED0L)).s3;
                        l_71 = (void*)0;
                        l_78[1] = (l_77 = ((l_75 = (l_37--)) , l_76[0][0]));
                    }
                    else
                    { /* block id: 40 */
                        int16_t l_79 = 0x64BEL;
                        int32_t l_81[4][2] = {{0x6BB7C98EL,0x433B3C15L},{0x6BB7C98EL,0x433B3C15L},{0x6BB7C98EL,0x433B3C15L},{0x6BB7C98EL,0x433B3C15L}};
                        int32_t *l_80 = &l_81[3][0];
                        int32_t l_82 = 0x0BB94AC6L;
                        uint64_t l_83 = 0xA6A6FFDE101195FDL;
                        int i, j;
                        l_48.y = l_79;
                        l_80 = (void*)0;
                        l_48.z = (l_45.se = ((l_44[0] |= l_82) , l_83));
                    }
                }
                else
                { /* block id: 47 */
                    int32_t l_84[2];
                    VECTOR(int32_t, 2) l_103 = (VECTOR(int32_t, 2))(0L, 0x095ADC90L);
                    uint32_t l_104 = 4294967294UL;
                    int8_t l_105 = 0x5FL;
                    int8_t l_106 = (-6L);
                    VECTOR(uint32_t, 2) l_107 = (VECTOR(uint32_t, 2))(0x0B9B82EDL, 0x7D217F2CL);
                    uint64_t l_108 = 0x91C42CB54C83FFB0L;
                    int32_t l_109 = 0x1418936BL;
                    int16_t l_110 = 0x6DF9L;
                    VECTOR(int8_t, 8) l_111 = (VECTOR(int8_t, 8))((-5L), (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 0x7FL), 0x7FL), 0x7FL, (-5L), 0x7FL);
                    VECTOR(uint8_t, 16) l_112 = (VECTOR(uint8_t, 16))(0xADL, (VECTOR(uint8_t, 4))(0xADL, (VECTOR(uint8_t, 2))(0xADL, 0x50L), 0x50L), 0x50L, 0xADL, 0x50L, (VECTOR(uint8_t, 2))(0xADL, 0x50L), (VECTOR(uint8_t, 2))(0xADL, 0x50L), 0xADL, 0x50L, 0xADL, 0x50L);
                    uint8_t l_113 = 8UL;
                    int32_t l_114 = 0L;
                    int32_t *l_115 = &l_109;
                    int32_t *l_116[6] = {(void*)0,&l_109,(void*)0,(void*)0,&l_109,(void*)0};
                    int32_t l_117 = 4L;
                    int64_t l_118 = 0L;
                    int64_t l_119 = (-1L);
                    int32_t *l_120 = &l_109;
                    int32_t *l_121 = (void*)0;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_84[i] = 6L;
                    l_46.sd ^= l_84[0];
                    for (l_84[0] = 20; (l_84[0] >= 29); l_84[0] = safe_add_func_uint64_t_u_u(l_84[0], 5))
                    { /* block id: 51 */
                        uint32_t l_87 = 0xC637B4EEL;
                        uint8_t l_88 = 0x79L;
                        uint16_t l_89 = 65535UL;
                        int32_t l_90 = 1L;
                        VECTOR(int16_t, 4) l_91 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x276CL), 0x276CL);
                        VECTOR(int16_t, 8) l_92 = (VECTOR(int16_t, 8))(0x2A41L, (VECTOR(int16_t, 4))(0x2A41L, (VECTOR(int16_t, 2))(0x2A41L, 0x1633L), 0x1633L), 0x1633L, 0x2A41L, 0x1633L);
                        VECTOR(int16_t, 4) l_93 = (VECTOR(int16_t, 4))(0x1D65L, (VECTOR(int16_t, 2))(0x1D65L, 0x6466L), 0x6466L);
                        int8_t l_94 = (-1L);
                        VECTOR(int16_t, 16) l_95 = (VECTOR(int16_t, 16))(0x1523L, (VECTOR(int16_t, 4))(0x1523L, (VECTOR(int16_t, 2))(0x1523L, 0x1FD8L), 0x1FD8L), 0x1FD8L, 0x1523L, 0x1FD8L, (VECTOR(int16_t, 2))(0x1523L, 0x1FD8L), (VECTOR(int16_t, 2))(0x1523L, 0x1FD8L), 0x1523L, 0x1FD8L, 0x1523L, 0x1FD8L);
                        uint32_t l_96 = 1UL;
                        int32_t l_97 = 0x7E5A20DBL;
                        VECTOR(int32_t, 16) l_98 = (VECTOR(int32_t, 16))(0x0BF6E466L, (VECTOR(int32_t, 4))(0x0BF6E466L, (VECTOR(int32_t, 2))(0x0BF6E466L, 1L), 1L), 1L, 0x0BF6E466L, 1L, (VECTOR(int32_t, 2))(0x0BF6E466L, 1L), (VECTOR(int32_t, 2))(0x0BF6E466L, 1L), 0x0BF6E466L, 1L, 0x0BF6E466L, 1L);
                        uint8_t l_99 = 0x0CL;
                        int32_t *l_100 = &l_97;
                        int32_t *l_101 = (void*)0;
                        int32_t *l_102 = (void*)0;
                        int i;
                        l_48.z = l_87;
                        l_102 = (l_101 = ((l_97 ^= (l_96 &= (l_88 , ((l_89 = 0x59A07A57FB1E3A22L) , ((VECTOR(int16_t, 4))((l_90 , ((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(l_91.wzwwwyywxwyzxyxw)).s7858)).odd))).yxyyyxxxxxyxyxxx, ((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 8))(l_92.s33510020)).hi, (int16_t)((VECTOR(int16_t, 2))(l_93.zx)).hi, (int16_t)(l_47[6] = l_94)))).wywwxwxxwzwzxxxy))).s1), (((l_37 = 0xB0F27770L) , 0xAAFB2D28ECC62B0EL) , ((VECTOR(int16_t, 2))(l_95.sa5)).hi), 0x4D49L, 0x519FL)).x)))) , ((l_99 = ((VECTOR(int32_t, 4))(l_98.s44f0)).x) , l_100)));
                    }
                    l_116[3] = (l_115 = (((FAKE_DIVERGE(p_1551->global_0_offset, get_global_id(0), 10) , (l_106 = ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_103.yxyxxxxx)).s13)).xxxxyyyxxyyyyxxy)), (int32_t)(l_104 , l_105))))))).s7)) , ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(2UL, ((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 2))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 2))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 4))(l_107.xyyy)).even, ((VECTOR(uint32_t, 2))(0x4EF6039FL, 0x3E191EB4L)), ((VECTOR(uint32_t, 4))(abs(((VECTOR(int32_t, 16))(1L, l_108, ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(0x2B12L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(0x7757L, 0x6DB7L)))).yyyx)).odd)), l_109, ((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 4))(l_110, 0L, 0x20L, 0x76L)), (int8_t)((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_111.s44)), 0x6DL, 0x1BL)).w))).xzwyyzxyzxxyxwxz)).sa3)).xyyyyxyx, ((VECTOR(uint8_t, 4))(l_112.sd5a8)).xwzwyxyz))).s53))))), 0x34ACL, 3L)).lo)).yzzzzzxwwyyxwyww, ((VECTOR(int16_t, 8))(l_113, (l_110 = 9L), 0x1F5FL, 1L, ((VECTOR(int16_t, 2))((-1L))), (-10L), 0x4D3FL)).s7320126566451617, ((VECTOR(int16_t, 16))(0x1104L))))).sba81, ((VECTOR(uint16_t, 4))(0x4FD2L))))).w, 0L, ((VECTOR(int32_t, 4))((-1L))), l_114, 0x36346332L, ((VECTOR(int32_t, 4))(0x3F6A3D26L)), 0x6A70BF62L, 0x1423B7A2L)).s16f8))).even))), ((VECTOR(uint32_t, 2))(0x79E170EDL))))), ((VECTOR(uint32_t, 2))(4294967295UL))))), 0UL)).even)).hi) , (void*)0));
                    l_121 = (l_120 = ((l_118 = l_117) , (l_119 , (void*)0)));
                }
                for (l_49 = 0; (l_49 == 49); l_49++)
                { /* block id: 72 */
                    int32_t *l_124 = (void*)0;
                    int32_t l_125 = 0x452BA282L;
                    int32_t *l_136 = (void*)0;
                    int32_t *l_137 = (void*)0;
                    int32_t *l_138 = (void*)0;
                    l_124 = l_124;
                    for (l_125 = (-8); (l_125 >= (-18)); l_125 = safe_sub_func_uint16_t_u_u(l_125, 5))
                    { /* block id: 76 */
                        int32_t l_129 = 0x200515F6L;
                        int32_t *l_128[2];
                        uint16_t l_130[2][10] = {{0xDA06L,0x6AD9L,0xDA06L,0xDA06L,0x6AD9L,0xDA06L,0xDA06L,0x6AD9L,0xDA06L,0xDA06L},{0xDA06L,0x6AD9L,0xDA06L,0xDA06L,0x6AD9L,0xDA06L,0xDA06L,0x6AD9L,0xDA06L,0xDA06L}};
                        VECTOR(uint16_t, 16) l_131 = (VECTOR(uint16_t, 16))(0x03D5L, (VECTOR(uint16_t, 4))(0x03D5L, (VECTOR(uint16_t, 2))(0x03D5L, 0x3527L), 0x3527L), 0x3527L, 0x03D5L, 0x3527L, (VECTOR(uint16_t, 2))(0x03D5L, 0x3527L), (VECTOR(uint16_t, 2))(0x03D5L, 0x3527L), 0x03D5L, 0x3527L, 0x03D5L, 0x3527L);
                        uint8_t l_132 = 0UL;
                        VECTOR(int32_t, 16) l_133 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int32_t, 2))((-1L), 0L), (VECTOR(int32_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
                        int32_t l_134 = 0x1A12AFEDL;
                        int32_t *l_135 = (void*)0;
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_128[i] = &l_129;
                        l_128[1] = (void*)0;
                        l_45.sb ^= 0x09E628F7L;
                        l_134 ^= ((l_130[0][7] , ((VECTOR(uint16_t, 16))(l_131.s156c71aa19cee7ff)).sb) , (l_132 , ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 2))(0x7AFCDE76L, 0x2599C36FL)).yxyxxyyx, ((VECTOR(int32_t, 8))(l_133.s868cf8cb))))).s2));
                        l_124 = l_135;
                    }
                    l_138 = (l_137 = l_136);
                }
                if (l_139)
                { /* block id: 85 */
                    uint32_t l_140 = 0x7F8146CFL;
                    uint8_t l_141[8] = {247UL,247UL,247UL,247UL,247UL,247UL,247UL,247UL};
                    int i;
                    l_45.s0 ^= l_140;
                    l_46.s5 |= l_141[1];
                }
                else
                { /* block id: 88 */
                    int32_t l_142[3];
                    int32_t *l_153[4][2] = {{(void*)0,&l_142[1]},{(void*)0,&l_142[1]},{(void*)0,&l_142[1]},{(void*)0,&l_142[1]}};
                    int32_t *l_154 = &l_142[1];
                    int32_t *l_181 = &l_142[1];
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_142[i] = 8L;
                    for (l_142[1] = 0; (l_142[1] != (-10)); --l_142[1])
                    { /* block id: 91 */
                        uint64_t l_145[4];
                        int8_t l_148 = 0x03L;
                        VECTOR(uint32_t, 8) l_149 = (VECTOR(uint32_t, 8))(0xC1D56B47L, (VECTOR(uint32_t, 4))(0xC1D56B47L, (VECTOR(uint32_t, 2))(0xC1D56B47L, 1UL), 1UL), 1UL, 0xC1D56B47L, 1UL);
                        int32_t l_152 = 0x10769E08L;
                        int i;
                        for (i = 0; i < 4; i++)
                            l_145[i] = 0x3AD35209E3FAC453L;
                        l_145[1]++;
                        ++l_149.s6;
                        l_46.s9 |= l_152;
                    }
                    l_154 = l_153[0][1];
                    for (l_142[0] = (-20); (l_142[0] > 2); l_142[0]++)
                    { /* block id: 99 */
                        int32_t l_158 = 0x64CF2CA3L;
                        int32_t *l_157 = &l_158;
                        VECTOR(uint32_t, 2) l_159 = (VECTOR(uint32_t, 2))(0xEB15274BL, 4294967295UL);
                        uint64_t l_160 = 0xEBC3BCD21EB8B61DL;
                        int32_t l_161 = 0x691F10E8L;
                        VECTOR(int32_t, 16) l_162 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x42725619L), 0x42725619L), 0x42725619L, (-1L), 0x42725619L, (VECTOR(int32_t, 2))((-1L), 0x42725619L), (VECTOR(int32_t, 2))((-1L), 0x42725619L), (-1L), 0x42725619L, (-1L), 0x42725619L);
                        VECTOR(int32_t, 4) l_163 = (VECTOR(int32_t, 4))(0x12035A7EL, (VECTOR(int32_t, 2))(0x12035A7EL, 8L), 8L);
                        VECTOR(int32_t, 4) l_164 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x5CB29808L), 0x5CB29808L);
                        uint16_t l_165[3];
                        int64_t l_166 = 0L;
                        VECTOR(uint16_t, 4) l_167 = (VECTOR(uint16_t, 4))(7UL, (VECTOR(uint16_t, 2))(7UL, 0x1EE1L), 0x1EE1L);
                        uint32_t l_168 = 0x142CD7CDL;
                        VECTOR(int32_t, 16) l_169 = (VECTOR(int32_t, 16))(0x1862B91AL, (VECTOR(int32_t, 4))(0x1862B91AL, (VECTOR(int32_t, 2))(0x1862B91AL, 0x29D3D986L), 0x29D3D986L), 0x29D3D986L, 0x1862B91AL, 0x29D3D986L, (VECTOR(int32_t, 2))(0x1862B91AL, 0x29D3D986L), (VECTOR(int32_t, 2))(0x1862B91AL, 0x29D3D986L), 0x1862B91AL, 0x29D3D986L, 0x1862B91AL, 0x29D3D986L);
                        VECTOR(int32_t, 8) l_170 = (VECTOR(int32_t, 8))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x49231591L), 0x49231591L), 0x49231591L, 4L, 0x49231591L);
                        VECTOR(int32_t, 2) l_171 = (VECTOR(int32_t, 2))(0L, 0x451D1813L);
                        VECTOR(int32_t, 2) l_172 = (VECTOR(int32_t, 2))((-2L), 0x03A09F60L);
                        int32_t l_173 = 1L;
                        uint64_t l_174 = 0x2D3572653D7A3F9EL;
                        int64_t l_177 = 0x1E13DE211D2C571BL;
                        int16_t l_178[2][3][7] = {{{(-2L),(-2L),(-7L),1L,0x408DL,1L,(-7L)},{(-2L),(-2L),(-7L),1L,0x408DL,1L,(-7L)},{(-2L),(-2L),(-7L),1L,0x408DL,1L,(-7L)}},{{(-2L),(-2L),(-7L),1L,0x408DL,1L,(-7L)},{(-2L),(-2L),(-7L),1L,0x408DL,1L,(-7L)},{(-2L),(-2L),(-7L),1L,0x408DL,1L,(-7L)}}};
                        uint32_t l_179[9] = {0xBF97DC12L,0xBF97DC12L,0xBF97DC12L,0xBF97DC12L,0xBF97DC12L,0xBF97DC12L,0xBF97DC12L,0xBF97DC12L,0xBF97DC12L};
                        uint32_t l_180 = 0x2699899CL;
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_165[i] = 65528UL;
                        l_157 = (l_154 = (l_153[0][1] = (void*)0));
                        l_173 |= ((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_159.yxyyxxxy)).s21)).hi , l_160) , (l_161 , ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 2))(0x3C63C88BL, 0x10A0710AL)).yxyyyxxxxyxyxyyy, ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(l_162.s75)).yxxyyyyy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_163.zzywwxyx))))))).even, ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 16))(l_164.xxwxyxwzxzwyxwyz)), ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))((l_166 = l_165[0]), 0x499BF413L, ((VECTOR(int32_t, 2))(0L, 0x1E1634F4L)), ((VECTOR(int32_t, 4))(0x3F210CA2L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x4C50D35BL, 0x47731CCDL)).xyyxxyxxxyxxyyxx)).sc5)), 0x1CDA35C1L)), 0x1A809641L, (-3L), (l_168 &= l_167.w), (-3L), ((VECTOR(int32_t, 4))(l_169.s8525)))).s5f)).xyxx, ((VECTOR(int32_t, 8))(l_170.s76513653)).even, ((VECTOR(int32_t, 4))(0x51DA3EC7L, ((VECTOR(int32_t, 2))(l_171.yy)), 0x0A4EC380L))))).xxywzwyyywxzyxyy))).sb96b))).zxzzxyzwwxxwyzxx))).s4f, ((VECTOR(int32_t, 8))(l_172.yxyyyyyy)).s36))).even));
                        l_174++;
                        l_180 ^= ((l_178[0][2][4] = l_177) , (l_169.s2 ^= l_179[3]));
                    }
                    l_181 = (void*)0;
                }
                for (l_139 = 1; (l_139 >= 31); l_139++)
                { /* block id: 115 */
                    int32_t l_184 = (-5L);
                    l_46.s4 ^= 0x6423DF58L;
                    for (l_184 = 0; (l_184 == (-11)); --l_184)
                    { /* block id: 119 */
                        int32_t l_187 = 0x628ABA95L;
                        uint32_t l_188 = 0x4D75D991L;
                        l_188++;
                    }
                }
            }
            else
            { /* block id: 123 */
                int32_t l_191[1][10][9] = {{{(-1L),(-1L),0L,0x700CADEFL,0x29269595L,0L,0x76953BF8L,0x60701759L,0x76953BF8L},{(-1L),(-1L),0L,0x700CADEFL,0x29269595L,0L,0x76953BF8L,0x60701759L,0x76953BF8L},{(-1L),(-1L),0L,0x700CADEFL,0x29269595L,0L,0x76953BF8L,0x60701759L,0x76953BF8L},{(-1L),(-1L),0L,0x700CADEFL,0x29269595L,0L,0x76953BF8L,0x60701759L,0x76953BF8L},{(-1L),(-1L),0L,0x700CADEFL,0x29269595L,0L,0x76953BF8L,0x60701759L,0x76953BF8L},{(-1L),(-1L),0L,0x700CADEFL,0x29269595L,0L,0x76953BF8L,0x60701759L,0x76953BF8L},{(-1L),(-1L),0L,0x700CADEFL,0x29269595L,0L,0x76953BF8L,0x60701759L,0x76953BF8L},{(-1L),(-1L),0L,0x700CADEFL,0x29269595L,0L,0x76953BF8L,0x60701759L,0x76953BF8L},{(-1L),(-1L),0L,0x700CADEFL,0x29269595L,0L,0x76953BF8L,0x60701759L,0x76953BF8L},{(-1L),(-1L),0L,0x700CADEFL,0x29269595L,0L,0x76953BF8L,0x60701759L,0x76953BF8L}}};
                int i, j, k;
                for (l_191[0][3][4] = 0; (l_191[0][3][4] < (-7)); l_191[0][3][4]--)
                { /* block id: 126 */
                    int32_t l_194 = 0L;
                    uint32_t l_225 = 0x350F1077L;
                    int32_t l_226 = 0x378C0FFAL;
                    for (l_194 = 0; (l_194 <= 9); l_194++)
                    { /* block id: 129 */
                        int16_t l_197[2][3];
                        int32_t l_198 = 0L;
                        uint8_t l_199 = 0UL;
                        int32_t l_202 = (-1L);
                        VECTOR(uint32_t, 4) l_203 = (VECTOR(uint32_t, 4))(0x751341D7L, (VECTOR(uint32_t, 2))(0x751341D7L, 0x53814E06L), 0x53814E06L);
                        int8_t l_204 = 0L;
                        VECTOR(int32_t, 4) l_205 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x2108D3F5L), 0x2108D3F5L);
                        VECTOR(uint8_t, 8) l_206 = (VECTOR(uint8_t, 8))(0xDCL, (VECTOR(uint8_t, 4))(0xDCL, (VECTOR(uint8_t, 2))(0xDCL, 0xBFL), 0xBFL), 0xBFL, 0xDCL, 0xBFL);
                        uint32_t l_207[7];
                        VECTOR(uint8_t, 4) l_208 = (VECTOR(uint8_t, 4))(0x6FL, (VECTOR(uint8_t, 2))(0x6FL, 0UL), 0UL);
                        VECTOR(uint8_t, 8) l_209 = (VECTOR(uint8_t, 8))(0xC2L, (VECTOR(uint8_t, 4))(0xC2L, (VECTOR(uint8_t, 2))(0xC2L, 1UL), 1UL), 1UL, 0xC2L, 1UL);
                        VECTOR(uint8_t, 16) l_210 = (VECTOR(uint8_t, 16))(0x6CL, (VECTOR(uint8_t, 4))(0x6CL, (VECTOR(uint8_t, 2))(0x6CL, 0x50L), 0x50L), 0x50L, 0x6CL, 0x50L, (VECTOR(uint8_t, 2))(0x6CL, 0x50L), (VECTOR(uint8_t, 2))(0x6CL, 0x50L), 0x6CL, 0x50L, 0x6CL, 0x50L);
                        int8_t l_211 = 8L;
                        int32_t l_212 = (-1L);
                        VECTOR(uint8_t, 16) l_213 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint8_t, 2))(0UL, 1UL), (VECTOR(uint8_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL);
                        VECTOR(uint8_t, 8) l_214 = (VECTOR(uint8_t, 8))(0xB1L, (VECTOR(uint8_t, 4))(0xB1L, (VECTOR(uint8_t, 2))(0xB1L, 0xF1L), 0xF1L), 0xF1L, 0xB1L, 0xF1L);
                        uint64_t l_215 = 0UL;
                        int32_t l_216 = (-2L);
                        int32_t l_217 = (-8L);
                        uint32_t l_218 = 0x539E2D7BL;
                        int32_t l_219 = 6L;
                        uint32_t l_220[1][8] = {{4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL}};
                        int64_t l_221 = 0x0EE6476ADDCD77AEL;
                        int16_t l_222 = 0x5DEAL;
                        int8_t l_223[8] = {0x6CL,0x6CL,0x6CL,0x6CL,0x6CL,0x6CL,0x6CL,0x6CL};
                        int32_t *l_224 = &l_198;
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_197[i][j] = (-8L);
                        }
                        for (i = 0; i < 7; i++)
                            l_207[i] = 0xD122D107L;
                        l_199++;
                        l_46.s7 = (l_45.s3 = ((l_222 = ((VECTOR(uint32_t, 16))(l_202, 0x2D0A6261L, ((VECTOR(uint32_t, 8))(l_203.zzyyxwxx)), 4294967295UL, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(int32_t, 4))((l_205.y = ((VECTOR(int32_t, 16))(0x5A5712E0L, (l_204 , 0x49E9B30FL), (-5L), ((VECTOR(int32_t, 2))(l_205.wx)), ((VECTOR(int32_t, 2))(0x01AA5684L, 0x51256520L)), 0x0812D9A4L, ((((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 2))(l_206.s66)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 4))(l_207[4], ((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 16))(l_208.zyxyyzyxyzxwzzwx)).sca, ((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(1UL, 0UL, 0x56L, 0xCEL)))), ((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 8))(l_209.s53107066)).hi)))))).lo))), 0x86L)).odd, ((VECTOR(uint8_t, 8))(l_210.s53d33326)).s76))))), 0xFFL, 255UL)).lo))).xxyx, ((VECTOR(uint8_t, 4))(0x38L, l_211, 0x27L, 1UL))))).x , ((VECTOR(uint8_t, 8))((l_212 = 0x8BL), ((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(uint8_t, 4))(l_213.sfe3d)).hi, ((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),VECTOR(uint8_t, 2),((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 16))(l_214.s5422756420166617)), ((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 16))(l_215, 5UL, 0x88L, ((VECTOR(uint8_t, 4))(0x60L, l_216, 0xD2L, 0xDFL)), 1UL, l_217, l_218, ((VECTOR(uint8_t, 2))(255UL)), 247UL, 0x0AL, 3UL, 0x3EL)).s30))).yyyyyyxxyyyyxxxy))))).s45, ((VECTOR(uint8_t, 2))(0xEAL)), ((VECTOR(uint8_t, 2))(5UL)))))))), 254UL, l_219, GROUP_DIVERGE(2, 1), 0x7AL, 0xC9L)).s1) , l_220[0][3]), 8L, l_221, ((VECTOR(int32_t, 4))(2L)), 0x07A5E890L)).s3), ((VECTOR(int32_t, 2))(0x60C484A4L)), 0x4107A232L)).zxyywwxy, ((VECTOR(int32_t, 8))(0x1DC34DCAL))))))).s4, ((VECTOR(uint32_t, 2))(0xBE3DCF11L)), 4294967295UL, 1UL)).se) , l_223[1]));
                        l_224 = l_224;
                    }
                    if ((l_225 , l_226))
                    { /* block id: 138 */
                        uint8_t l_227 = 2UL;
                        l_48.w = 1L;
                        l_194 |= 0x1879B9E3L;
                        l_48.w = l_227;
                    }
                    else
                    { /* block id: 142 */
                        uint32_t l_228 = 4294967292UL;
                        l_46.sb = l_228;
                    }
                    for (l_226 = (-4); (l_226 > 18); l_226++)
                    { /* block id: 147 */
                        int32_t *l_231 = (void*)0;
                        int32_t l_233 = 0L;
                        int32_t *l_232[6][8][5] = {{{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0}},{{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0}},{{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0}},{{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0}},{{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0}},{{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0},{(void*)0,&l_233,&l_233,(void*)0,(void*)0}}};
                        uint16_t l_234 = 0x0951L;
                        int8_t l_235 = 0x49L;
                        int i, j, k;
                        l_232[2][1][3] = l_231;
                        l_46.s3 ^= l_234;
                        l_46.s5 ^= 0L;
                        l_46.s5 = l_235;
                    }
                    for (l_225 = (-3); (l_225 <= 60); l_225 = safe_add_func_uint16_t_u_u(l_225, 3))
                    { /* block id: 155 */
                        int32_t *l_238 = (void*)0;
                        int32_t l_239 = (-1L);
                        int32_t l_241 = 0x53EA8AC7L;
                        int32_t *l_240[1];
                        int32_t *l_242[9] = {&l_241,&l_241,&l_241,&l_241,&l_241,&l_241,&l_241,&l_241,&l_241};
                        int i;
                        for (i = 0; i < 1; i++)
                            l_240[i] = &l_241;
                        l_238 = (void*)0;
                        l_48.x ^= l_239;
                        l_242[5] = l_240[0];
                    }
                }
            }
            l_243--;
        }
        l_248 = (l_246 = (void*)0);
        unsigned int result = 0;
        result += l_36;
        result += l_37;
        result += l_247;
        atomic_add(&p_1551->g_special_values[30 * get_linear_group_id() + 29], result);
    }
    else
    { /* block id: 166 */
        (1 + 1);
    }
    if ((((p_1551->g_249 != (((((((VECTOR(uint64_t, 16))(p_1551->g_251.xxyxxyxyyxyyyxxy)).s2 , FAKE_DIVERGE(p_1551->local_1_offset, get_local_id(1), 10)) < (safe_mul_func_uint16_t_u_u(l_254, l_254))) , (((**p_1551->g_308) = func_255(func_259((p_1551->g_681.s6 ^= func_263(func_268(p_33, p_1551->g_251.x, ((*l_290) = (func_274(l_276, p_1551) , func_279(l_284, (safe_mul_func_int16_t_s_s(((*l_287) = ((**l_276) != p_33)), p_1551->g_comm_values[p_1551->tid])), p_1551->g_251.x, (*l_284), p_1551))), &l_277, l_291[0][5], p_1551), (*p_1551->g_309), &l_291[2][6], p_1551->g_454.y, p_1551)), p_33, l_682, p_1551), p_33, p_1551->g_655.x, p_1551)) != &l_254)) | 0x66DBEF97L) , (*l_290))) , (*l_290)) != (*p_1551->g_312)))
    { /* block id: 336 */
        uint16_t *l_710 = &p_1551->g_622;
        int64_t **l_713 = &p_1551->g_634[1][1];
        int64_t ***l_714 = &p_1551->g_637;
        int32_t l_715 = (-2L);
        l_715 ^= ((++(*l_710)) | ((*l_287) &= (((*l_714) = l_713) != &p_1551->g_634[1][1])));
    }
    else
    { /* block id: 341 */
        int32_t *l_718 = (void*)0;
        VECTOR(int16_t, 4) l_721 = (VECTOR(int16_t, 4))(0x2095L, (VECTOR(int16_t, 2))(0x2095L, 0x3CC7L), 0x3CC7L);
        VECTOR(int16_t, 4) l_722 = (VECTOR(int16_t, 4))(0x1743L, (VECTOR(int16_t, 2))(0x1743L, (-2L)), (-2L));
        VECTOR(uint32_t, 8) l_732 = (VECTOR(uint32_t, 8))(0x6A1FABE1L, (VECTOR(uint32_t, 4))(0x6A1FABE1L, (VECTOR(uint32_t, 2))(0x6A1FABE1L, 6UL), 6UL), 6UL, 0x6A1FABE1L, 6UL);
        VECTOR(int64_t, 16) l_741 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int64_t, 2))(1L, (-1L)), (VECTOR(int64_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L));
        VECTOR(uint8_t, 4) l_791 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x71L), 0x71L);
        uint16_t l_864 = 0xC5A5L;
        int64_t **l_865 = (void*)0;
        int32_t l_872 = 0x1748CC73L;
        int8_t *l_885 = &p_1551->g_336;
        int8_t **l_884 = &l_885;
        uint64_t *l_893 = (void*)0;
        uint64_t *l_894 = &p_1551->g_316;
        uint32_t l_896 = 0xCEA53C20L;
        uint8_t *l_897 = &l_748;
        VECTOR(int32_t, 2) l_909 = (VECTOR(int32_t, 2))(0x417B0295L, 6L);
        uint16_t l_912 = 3UL;
        int16_t l_916 = 8L;
        int32_t l_923 = (-1L);
        int32_t l_925 = 1L;
        int32_t l_926 = 0x6AB8E1CBL;
        int32_t l_927[7][8] = {{0x25C596EEL,0x25C596EEL,0x74723856L,0x418E2C9BL,0x7C6C8DFAL,0x0E6EF868L,0x252FA31FL,(-3L)},{0x25C596EEL,0x25C596EEL,0x74723856L,0x418E2C9BL,0x7C6C8DFAL,0x0E6EF868L,0x252FA31FL,(-3L)},{0x25C596EEL,0x25C596EEL,0x74723856L,0x418E2C9BL,0x7C6C8DFAL,0x0E6EF868L,0x252FA31FL,(-3L)},{0x25C596EEL,0x25C596EEL,0x74723856L,0x418E2C9BL,0x7C6C8DFAL,0x0E6EF868L,0x252FA31FL,(-3L)},{0x25C596EEL,0x25C596EEL,0x74723856L,0x418E2C9BL,0x7C6C8DFAL,0x0E6EF868L,0x252FA31FL,(-3L)},{0x25C596EEL,0x25C596EEL,0x74723856L,0x418E2C9BL,0x7C6C8DFAL,0x0E6EF868L,0x252FA31FL,(-3L)},{0x25C596EEL,0x25C596EEL,0x74723856L,0x418E2C9BL,0x7C6C8DFAL,0x0E6EF868L,0x252FA31FL,(-3L)}};
        VECTOR(uint64_t, 8) l_984 = (VECTOR(uint64_t, 8))(9UL, (VECTOR(uint64_t, 4))(9UL, (VECTOR(uint64_t, 2))(9UL, 0xF76968792CE3F774L), 0xF76968792CE3F774L), 0xF76968792CE3F774L, 9UL, 0xF76968792CE3F774L);
        VECTOR(uint64_t, 8) l_989 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL);
        uint16_t l_1002 = 0xAC82L;
        VECTOR(int32_t, 4) l_1050 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L);
        VECTOR(int8_t, 2) l_1060 = (VECTOR(int8_t, 2))(0x00L, (-5L));
        VECTOR(uint64_t, 8) l_1064 = (VECTOR(uint64_t, 8))(0x96A27271D247F538L, (VECTOR(uint64_t, 4))(0x96A27271D247F538L, (VECTOR(uint64_t, 2))(0x96A27271D247F538L, 0x4EE746CC27E5F211L), 0x4EE746CC27E5F211L), 0x4EE746CC27E5F211L, 0x96A27271D247F538L, 0x4EE746CC27E5F211L);
        int32_t l_1080[7] = {7L,7L,7L,7L,7L,7L,7L};
        uint16_t l_1082 = 0xC0B7L;
        VECTOR(int32_t, 4) l_1132 = (VECTOR(int32_t, 4))(0x3C88B688L, (VECTOR(int32_t, 2))(0x3C88B688L, 0x3DDF18F6L), 0x3DDF18F6L);
        int64_t *l_1144[8][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
        int i, j;
        for (p_1551->g_459 = (-18); (p_1551->g_459 == 48); p_1551->g_459 = safe_add_func_uint32_t_u_u(p_1551->g_459, 8))
        { /* block id: 344 */
            int64_t *l_725 = (void*)0;
            int64_t ***l_727 = &p_1551->g_633;
            int32_t l_746 = 1L;
            uint8_t *l_747[6][10] = {{&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342},{&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342},{&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342},{&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342},{&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342},{&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342,&p_1551->g_342}};
            int16_t l_800 = (-10L);
            int16_t *****l_819[3];
            int32_t l_825[1];
            int i, j;
            for (i = 0; i < 3; i++)
                l_819[i] = &p_1551->g_607;
            for (i = 0; i < 1; i++)
                l_825[i] = 9L;
            (*p_1551->g_309) = func_255((*p_1551->g_308), p_33, (((l_726 = ((safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 8))(l_721.wzwzwxwy)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_722.wwxwzzwz)).even)).yxwyzyxy))).s4, 0)) , (safe_lshift_func_int16_t_s_u((p_33 == p_33), 9)))) , ((*l_727) = &p_1551->g_634[0][1])) == &p_1551->g_634[2][0]), p_1551);
            if ((safe_sub_func_uint32_t_u_u(((((*l_682) &= ((safe_mul_func_uint16_t_u_u((p_33 <= (GROUP_DIVERGE(0, 1) | (GROUP_DIVERGE(2, 1) , ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(l_732.s51)))).xxxx)), 4294967292UL, ((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0xF1FDL, 0x8A49L)).xyyx)).zyxwxxxywwxzxyxx)).s44, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(65533UL, 0x1BF1L)))).yxxyxyxx)).s14))), 4294967287UL)).s2))), (safe_add_func_uint64_t_u_u((*l_277), (safe_lshift_func_uint16_t_u_s(((GROUP_DIVERGE(0, 1) < 4294967290UL) <= ((FAKE_DIVERGE(p_1551->group_0_offset, get_group_id(0), 10) ^ (l_725 != (void*)0)) , ((p_33 ^ p_1551->g_454.y) || ((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(p_1551->g_739.s0006)).hi)).xyxxyyxx)).s7 <= (((~((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(rotate(((VECTOR(int64_t, 16))(p_1551->g_740.s2a6c135d6aa926ba)), ((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),int64_t,((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(mul_hi(((VECTOR(int64_t, 4))(l_741.s769b)).xxyxwxww, ((VECTOR(int64_t, 2))(1L, 0x2D639108D3FF268AL)).yyxxxxxx))).s76)), (int64_t)(safe_sub_func_int64_t_s_s((((safe_lshift_func_uint8_t_u_u((p_1551->g_656.w = ((p_33 , (p_1551->g_316 , p_1551->g_704.s0)) , l_746)), GROUP_DIVERGE(1, 1))) != 250UL) | p_33), p_33)), (int64_t)p_33))).yxxxxyxxxyxyxxyy))).s82)).lo) <= p_33) >= 0x7695668F33EAE072L)) & l_746)))), l_748)))))) == (**l_284))) & p_33) && 0x6048L), GROUP_DIVERGE(2, 1))))
            { /* block id: 350 */
                for (p_1551->g_336 = 0; (p_1551->g_336 != (-21)); --p_1551->g_336)
                { /* block id: 353 */
                    (**p_1551->g_312) = (void*)0;
                }
            }
            else
            { /* block id: 356 */
                VECTOR(uint32_t, 8) l_801 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xBDBAF770L), 0xBDBAF770L), 0xBDBAF770L, 0UL, 0xBDBAF770L);
                int8_t l_823[5][10][5] = {{{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL}},{{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL}},{{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL}},{{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL}},{{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL},{0x48L,1L,1L,0x48L,0x3AL}}};
                int8_t l_824 = 1L;
                int i, j, k;
                if (p_33)
                    break;
                for (p_1551->g_622 = 25; (p_1551->g_622 == 25); p_1551->g_622++)
                { /* block id: 360 */
                    VECTOR(uint16_t, 8) l_799 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 6UL), 6UL), 6UL, 1UL, 6UL);
                    int32_t l_810 = 8L;
                    VECTOR(int16_t, 8) l_817 = (VECTOR(int16_t, 8))((-6L), (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), (-3L)), (-3L)), (-3L), (-6L), (-3L));
                    int16_t *****l_821[6][10] = {{&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607},{&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607},{&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607},{&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607},{&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607},{&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607,&p_1551->g_607}};
                    int16_t ******l_820 = &l_821[5][5];
                    int8_t *l_822 = &p_1551->g_336;
                    uint32_t l_826 = 2UL;
                    int i, j;
                    if ((atomic_inc(&p_1551->g_atomic_input[30 * get_linear_group_id() + 7]) == 1))
                    { /* block id: 362 */
                        VECTOR(uint64_t, 8) l_753 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 1UL, 18446744073709551615UL);
                        uint8_t l_756 = 9UL;
                        uint64_t l_757 = 1UL;
                        int8_t l_758 = (-5L);
                        VECTOR(int32_t, 8) l_759 = (VECTOR(int32_t, 8))(0x3221229DL, (VECTOR(int32_t, 4))(0x3221229DL, (VECTOR(int32_t, 2))(0x3221229DL, 0x708D9EF7L), 0x708D9EF7L), 0x708D9EF7L, 0x3221229DL, 0x708D9EF7L);
                        VECTOR(int16_t, 2) l_760 = (VECTOR(int16_t, 2))((-2L), 0x62E4L);
                        VECTOR(uint16_t, 2) l_761 = (VECTOR(uint16_t, 2))(65535UL, 1UL);
                        VECTOR(uint16_t, 2) l_762 = (VECTOR(uint16_t, 2))(1UL, 0xE3F9L);
                        VECTOR(uint16_t, 8) l_763 = (VECTOR(uint16_t, 8))(65534UL, (VECTOR(uint16_t, 4))(65534UL, (VECTOR(uint16_t, 2))(65534UL, 0x3C46L), 0x3C46L), 0x3C46L, 65534UL, 0x3C46L);
                        VECTOR(int16_t, 8) l_764 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-9L)), (-9L)), (-9L), 1L, (-9L));
                        VECTOR(int16_t, 2) l_765 = (VECTOR(int16_t, 2))(0x12EFL, 0x3843L);
                        VECTOR(int16_t, 4) l_766 = (VECTOR(int16_t, 4))(0x6BDBL, (VECTOR(int16_t, 2))(0x6BDBL, 0x764BL), 0x764BL);
                        int16_t l_767 = 0L;
                        int16_t l_768 = (-1L);
                        int64_t l_769 = 1L;
                        uint32_t l_770 = 1UL;
                        VECTOR(int32_t, 4) l_771 = (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x41EE98F2L), 0x41EE98F2L);
                        VECTOR(int32_t, 4) l_772 = (VECTOR(int32_t, 4))(0x77F0C1C8L, (VECTOR(int32_t, 2))(0x77F0C1C8L, 8L), 8L);
                        VECTOR(int32_t, 8) l_773 = (VECTOR(int32_t, 8))(0x29695B88L, (VECTOR(int32_t, 4))(0x29695B88L, (VECTOR(int32_t, 2))(0x29695B88L, 0x7D265AA0L), 0x7D265AA0L), 0x7D265AA0L, 0x29695B88L, 0x7D265AA0L);
                        uint32_t l_774 = 0UL;
                        uint32_t l_775 = 0xA954BBA7L;
                        uint32_t l_776 = 1UL;
                        int16_t l_777 = 1L;
                        int64_t l_778 = (-1L);
                        VECTOR(int8_t, 2) l_779 = (VECTOR(int8_t, 2))(0L, 1L);
                        uint8_t l_780 = 0UL;
                        uint8_t l_781 = 252UL;
                        int i;
                        --l_753.s5;
                        l_758 |= (l_757 = l_756);
                        l_781 = ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(0x0C2019C7L, 0x063C9E36L, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_759.s6312)), (-1L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(l_760.yyyy)).even, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_761.xy)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(0x7CFAL, 0UL, 0x4DF2L, 7UL)).odd)), ((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_762.yyxyyxyxxyxyyyyx)).s59cb)).hi, ((VECTOR(uint16_t, 16))(l_763.s5522517215610207)).sd4, ((VECTOR(uint16_t, 16))(0xECB2L, 0xCBF0L, 65535UL, 65532UL, 65535UL, ((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_764.s6354522233553710)))).s9dfa, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_765.yy)).yxxyyxxy)).s75)).xxxy, ((VECTOR(int16_t, 2))(l_766.wx)).yxxx))).even)).xyxy))), l_767, l_768, 0xE7F7L, 0UL, 1UL, 0x0339L, 0x8FD8L)).s19))), 0UL, 65535UL)).s33))).xxxyxyyy))).s76)), 3L)).s10)), ((VECTOR(int32_t, 4))(l_769, 0x379814D4L, 0x455C9371L, 1L)).lo))), l_770, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 2))(l_771.zx)), (int32_t)((VECTOR(int32_t, 8))(l_772.xzzwzwyw)).s7, (int32_t)(l_775 |= (((VECTOR(int32_t, 2))(l_773.s30)).lo , (l_774 = 0L)))))).xxxy)), ((VECTOR(int32_t, 8))(0x05FB2E85L, (l_776 ^= 2L), ((VECTOR(int32_t, 2))(0x7A0CA893L)), (-5L), ((VECTOR(int32_t, 2))(0L)), 0x18784620L)), ((VECTOR(int32_t, 4))(0x30D9AF97L)))).s49)), 0L)).s2, 0x7EDADF73L, l_777, l_778, l_779.y, 0x0FC44FBAL, 3L, 0x40A61E14L, 0x6E574FB0L, 0x0B07C9ADL, 0x1B39A34CL, l_780, 0L, 0L, 0x108993B6L, 6L)).s5ed7)).odd, ((VECTOR(int32_t, 2))((-3L)))))).lo;
                        unsigned int result = 0;
                        result += l_753.s7;
                        result += l_753.s6;
                        result += l_753.s5;
                        result += l_753.s4;
                        result += l_753.s3;
                        result += l_753.s2;
                        result += l_753.s1;
                        result += l_753.s0;
                        result += l_756;
                        result += l_757;
                        result += l_758;
                        result += l_759.s7;
                        result += l_759.s6;
                        result += l_759.s5;
                        result += l_759.s4;
                        result += l_759.s3;
                        result += l_759.s2;
                        result += l_759.s1;
                        result += l_759.s0;
                        result += l_760.y;
                        result += l_760.x;
                        result += l_761.y;
                        result += l_761.x;
                        result += l_762.y;
                        result += l_762.x;
                        result += l_763.s7;
                        result += l_763.s6;
                        result += l_763.s5;
                        result += l_763.s4;
                        result += l_763.s3;
                        result += l_763.s2;
                        result += l_763.s1;
                        result += l_763.s0;
                        result += l_764.s7;
                        result += l_764.s6;
                        result += l_764.s5;
                        result += l_764.s4;
                        result += l_764.s3;
                        result += l_764.s2;
                        result += l_764.s1;
                        result += l_764.s0;
                        result += l_765.y;
                        result += l_765.x;
                        result += l_766.w;
                        result += l_766.z;
                        result += l_766.y;
                        result += l_766.x;
                        result += l_767;
                        result += l_768;
                        result += l_769;
                        result += l_770;
                        result += l_771.w;
                        result += l_771.z;
                        result += l_771.y;
                        result += l_771.x;
                        result += l_772.w;
                        result += l_772.z;
                        result += l_772.y;
                        result += l_772.x;
                        result += l_773.s7;
                        result += l_773.s6;
                        result += l_773.s5;
                        result += l_773.s4;
                        result += l_773.s3;
                        result += l_773.s2;
                        result += l_773.s1;
                        result += l_773.s0;
                        result += l_774;
                        result += l_775;
                        result += l_776;
                        result += l_777;
                        result += l_778;
                        result += l_779.y;
                        result += l_779.x;
                        result += l_780;
                        result += l_781;
                        atomic_add(&p_1551->g_special_values[30 * get_linear_group_id() + 7], result);
                    }
                    else
                    { /* block id: 370 */
                        (1 + 1);
                    }
                    l_825[0] = (safe_mul_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(((((safe_div_func_int16_t_s_s((((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 16))(p_1551->g_790.yxyyyyxyyxyxxxxy)).s8dac, ((VECTOR(uint8_t, 4))(l_791.yyxy))))).w , ((safe_mod_func_int8_t_s_s((safe_add_func_int16_t_s_s(((safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(upsample(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(p_1551->g_798.s23)).xyyx)).odd)).yxxyyxyy, ((VECTOR(uint16_t, 4))(l_799.s1160)).wxwyxxww))).s3, (~(p_1551->g_433 = ((VECTOR(uint32_t, 4))((~(!p_33)), ((l_746 = l_800) != ((VECTOR(uint32_t, 8))(l_801.s70451340)).s6), 7UL, 4294967289UL)).z)))) < 0xAE27L), (safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(((safe_mod_func_int32_t_s_s(((l_801.s3 | (p_1551->g_553 > ((((safe_mod_func_uint32_t_u_u(((l_810 = 0x4DL) && ((safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),VECTOR(int16_t, 8),((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 16))(p_1551->g_813.s6755347620073505)).even, ((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 4))(p_1551->g_814.xxxx)), ((VECTOR(int16_t, 2))((-1L), 1L)).yxxy, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 2))(l_815.s24)).xxxxyyxy, ((VECTOR(int16_t, 2))(p_1551->g_816.wx)).yyxyyxxx, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 8))(l_817.s53407552)).lo, ((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(p_1551->g_818.xyxyxxxx)).s76)).xyyy, (int16_t)l_801.s4, (int16_t)(((*l_822) = ((l_819[1] != ((*l_820) = &p_1551->g_607)) || l_801.s5)) , 0x1811L))))))), 0x553BL, 0x4068L, 0L, 1L))))))).s2276346352070412)).s7d15))).wwzwyyyx, ((VECTOR(int16_t, 8))((-7L)))))).odd, ((VECTOR(int16_t, 4))((-10L)))))).yzywyxzy)), ((VECTOR(int16_t, 8))((-1L)))))), ((VECTOR(int16_t, 8))(0x5868L)), ((VECTOR(int16_t, 8))(2L))))), ((VECTOR(int16_t, 8))(0L))))).even)), ((VECTOR(int16_t, 2))(0L)), 0x1D36L, (-2L), ((VECTOR(int16_t, 4))(5L)), (-1L), ((VECTOR(int16_t, 2))(0x6285L)), 0x5AF1L)).sb97b, ((VECTOR(int16_t, 4))(0x53FAL))))).hi))))), 0x3DF3L, 0x7D9CL)).w, 2)) , 0x6FL)), p_33)) , (-1L)) != l_799.s6) || p_1551->g_740.s5))) <= p_33), p_33)) | l_801.s4), 1)), l_823[1][5][2])))), p_1551->g_459)) ^ l_800)), (**l_284))) & l_800) ^ l_801.s6) > 0x6FD19A1EE56E05ACL), p_1551->g_561.y)) < 0x13E64D17L), 0x75C2L)) & p_33), l_824));
                    return l_826;
                }
                if ((**p_1551->g_249))
                    break;
            }
        }
        for (p_1551->g_316 = 0; (p_1551->g_316 > 33); p_1551->g_316 = safe_add_func_uint16_t_u_u(p_1551->g_316, 3))
        { /* block id: 386 */
            int64_t *l_845 = (void*)0;
            int64_t *l_846 = (void*)0;
            int64_t *l_847 = (void*)0;
            int64_t *l_848[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            uint32_t *l_849 = &p_1551->g_433;
            uint16_t *l_866 = (void*)0;
            uint16_t *l_867 = &p_1551->g_459;
            uint32_t *l_869[9][4][5] = {{{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433},{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433},{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433},{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433}},{{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433},{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433},{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433},{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433}},{{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433},{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433},{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433},{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433}},{{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433},{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433},{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433},{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433}},{{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433},{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433},{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433},{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433}},{{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433},{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433},{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433},{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433}},{{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433},{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433},{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433},{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433}},{{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433},{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433},{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433},{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433}},{{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433},{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433},{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433},{&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433,&p_1551->g_433}}};
            uint32_t **l_868 = &l_869[7][3][0];
            int16_t *****l_871 = &p_1551->g_607;
            int i, j, k;
            for (p_1551->g_553 = 0; (p_1551->g_553 <= (-30)); p_1551->g_553--)
            { /* block id: 389 */
                int64_t l_840 = 0x79ACBBF2F7B499C7L;
                if ((atomic_inc(&p_1551->l_atomic_input[11]) == 3))
                { /* block id: 391 */
                    uint64_t l_831 = 0x372D043F96935846L;
                    VECTOR(int8_t, 16) l_834 = (VECTOR(int8_t, 16))(4L, (VECTOR(int8_t, 4))(4L, (VECTOR(int8_t, 2))(4L, 0L), 0L), 0L, 4L, 0L, (VECTOR(int8_t, 2))(4L, 0L), (VECTOR(int8_t, 2))(4L, 0L), 4L, 0L, 4L, 0L);
                    uint16_t l_835 = 0UL;
                    uint32_t l_836[1][1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_836[i][j] = 0xD389B154L;
                    }
                    ++l_831;
                    l_836[0][0] ^= (l_835 = l_834.s5);
                    unsigned int result = 0;
                    result += l_831;
                    result += l_834.sf;
                    result += l_834.se;
                    result += l_834.sd;
                    result += l_834.sc;
                    result += l_834.sb;
                    result += l_834.sa;
                    result += l_834.s9;
                    result += l_834.s8;
                    result += l_834.s7;
                    result += l_834.s6;
                    result += l_834.s5;
                    result += l_834.s4;
                    result += l_834.s3;
                    result += l_834.s2;
                    result += l_834.s1;
                    result += l_834.s0;
                    result += l_835;
                    int l_836_i0, l_836_i1;
                    for (l_836_i0 = 0; l_836_i0 < 1; l_836_i0++) {
                        for (l_836_i1 = 0; l_836_i1 < 1; l_836_i1++) {
                            result += l_836[l_836_i0][l_836_i1];
                        }
                    }
                    atomic_add(&p_1551->l_special_values[11], result);
                }
                else
                { /* block id: 395 */
                    (1 + 1);
                }
                l_840 &= (safe_add_func_int8_t_s_s(((VECTOR(int8_t, 2))(p_1551->g_839.s20)).odd, p_1551->g_790.y));
            }
            (*p_1551->g_309) = (**p_1551->g_308);
            l_872 = ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 4))(0x11661A9EL, (((((*l_871) = ((safe_mod_func_uint8_t_u_u((((**p_1551->g_249) = (safe_add_func_uint16_t_u_u(((((p_33 || ((VECTOR(uint64_t, 2))(0x2A4320769D131BCBL, 6UL)).even) > (((*l_682) = (*l_682)) < p_33)) || (l_849 != ((*l_868) = func_255((*p_1551->g_312), (**l_284), ((safe_rshift_func_uint16_t_u_u(((*l_867) = (((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((((safe_mod_func_int8_t_s_s((0x17L <= (safe_rshift_func_int8_t_s_s(((((((safe_div_func_int64_t_s_s(((safe_lshift_func_uint8_t_u_u(p_1551->g_655.x, 0)) != ((l_864 & p_1551->g_839.s1) , p_33)), p_33)) <= 0x612626F5L) == 0xB3C5L) < (-1L)) == 3UL) < p_1551->g_288), p_1551->g_335[7]))), (-1L))) != FAKE_DIVERGE(p_1551->local_0_offset, get_local_id(0), 10)) , l_865) == &p_1551->g_634[1][0]), 11)), 2)) , p_1551->g_634[2][0]) != p_1551->g_634[1][1])), 8)) | p_33), p_1551)))) , p_33), 0UL))) >= p_33), p_33)) , l_870)) != &p_1551->g_608) , FAKE_DIVERGE(p_1551->local_1_offset, get_local_id(1), 10)) >= p_33), (-10L), (-7L))).xzzyywzzywywzzyy, ((VECTOR(int32_t, 16))(2L))))).s1;
        }
        if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_873.s42)), 0x4597L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x621EL, 0L)).yyxx)), ((VECTOR(int16_t, 8))(l_874.se7e38d3f)).odd))).zwyxxwww)).even)), 0x2865L)).s4672111322064423)).hi, ((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 2))(0L, 0x6DC4L)).xxyx, ((VECTOR(int16_t, 4))(l_875.xxyx))))).zxwyxzzzzxzxzyyw, ((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(p_1551->g_876.yxzzyxxy)).hi)).wwxxywzwyzzzyyzx, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 16))(p_1551->g_877.s0ff4374e2a8fe7f1)).s30, ((VECTOR(uint8_t, 8))((l_870 == (void*)0), ((((((*l_897) |= (safe_rshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((((*l_884) = (void*)0) != (((*l_894) ^= ((safe_lshift_func_int16_t_s_u(p_33, l_888)) != ((safe_mul_func_int16_t_s_s((((void*)0 == &l_718) | ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_891.yyxyyxxx)).s5542050722115263)).s11, ((VECTOR(int32_t, 2))((-1L), 1L)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))((p_33 == ((VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL)).lo), (-2L), ((VECTOR(int32_t, 2))((-1L), 0x62F7B245L)), 0x0556C8EDL, ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(0x042CC23EL, 0x573070C8L)), ((VECTOR(int32_t, 2))(l_892.s09))))), 3L)).s54)).xyyxxxyyyxyyxyxy)).sd2))).yyxx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x32F4B6E3L, (-1L))).xyxx))))).y), (((p_33 , 0x2DD58A9516A53476L) | p_33) ^ 0x61L))) , 1UL))) , l_895[0][9][3])), p_33)) , l_741.s6), l_896)), p_1551->g_740.s4))) || p_1551->g_816.x) == p_33) > 0x07705458L) , p_33), 0xFBL, 0UL, ((VECTOR(uint8_t, 2))(0xF8L)), 250UL, 249UL)).s17))), (int16_t)(-2L)))), (-1L), 0x1278L)).yywwxwxzxyzzxxwx))), ((VECTOR(int16_t, 16))(5L))))).s61f4)).xxxwyxyx)).s17)).yxyy, ((VECTOR(int16_t, 4))(0x24ACL))))), ((VECTOR(int16_t, 4))(1L)))), ((VECTOR(int16_t, 8))(0L)), ((VECTOR(int16_t, 8))(1L))))).odd, (int16_t)0x1AEAL, (int16_t)p_33))).wwyyzxzx))).s7246372737331665, ((VECTOR(uint16_t, 16))(65535UL))))))).s3)
        { /* block id: 411 */
            uint16_t l_898 = 65535UL;
            uint8_t *l_902 = &p_1551->g_342;
            uint64_t l_910 = 0x8F56B9A011D90300L;
            int32_t l_915 = 6L;
            int32_t l_918[4] = {0x7FBADF76L,0x7FBADF76L,0x7FBADF76L,0x7FBADF76L};
            int16_t l_935[7][4][1] = {{{0x5F0EL},{0x5F0EL},{0x5F0EL},{0x5F0EL}},{{0x5F0EL},{0x5F0EL},{0x5F0EL},{0x5F0EL}},{{0x5F0EL},{0x5F0EL},{0x5F0EL},{0x5F0EL}},{{0x5F0EL},{0x5F0EL},{0x5F0EL},{0x5F0EL}},{{0x5F0EL},{0x5F0EL},{0x5F0EL},{0x5F0EL}},{{0x5F0EL},{0x5F0EL},{0x5F0EL},{0x5F0EL}},{{0x5F0EL},{0x5F0EL},{0x5F0EL},{0x5F0EL}}};
            uint32_t *l_954 = &p_1551->g_433;
            uint32_t **l_953 = &l_954;
            VECTOR(uint16_t, 8) l_980 = (VECTOR(uint16_t, 8))(0xCC89L, (VECTOR(uint16_t, 4))(0xCC89L, (VECTOR(uint16_t, 2))(0xCC89L, 1UL), 1UL), 1UL, 0xCC89L, 1UL);
            uint16_t *l_981 = &p_1551->g_622;
            VECTOR(int16_t, 4) l_992 = (VECTOR(int16_t, 4))(0x71C0L, (VECTOR(int16_t, 2))(0x71C0L, 0x1126L), 0x1126L);
            uint16_t *l_993[3][2];
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                    l_993[i][j] = &l_898;
            }
            l_898 |= (**p_1551->g_249);
            for (p_33 = 0; (p_33 != 52); p_33++)
            { /* block id: 415 */
                int8_t l_901 = 0L;
                atomic_min(&p_1551->g_atomic_reduction[get_linear_group_id()], ((VECTOR(int32_t, 8))((-4L), (0x0B093BC978FDD562L >= (-1L)), (((((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 2))(0x7C71L, 0x5681L)).yxxyxxxy, ((VECTOR(int16_t, 8))((l_898 && l_901), (l_902 == (FAKE_DIVERGE(p_1551->global_2_offset, get_global_id(2), 10) , l_885)), (-10L), ((p_33 , (((safe_unary_minus_func_int16_t_s(l_898)) & ((GROUP_DIVERGE(2, 1) <= FAKE_DIVERGE(p_1551->local_0_offset, get_local_id(0), 10)) , ((((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(l_908.yy)))), 0x26B4L, 0UL)).even)).yxxyxxxyyxyyyxxy, ((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(abs(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((p_1551->g_3 ^ l_898) , 1UL), l_898, l_898, 65532UL, 1UL, l_901, ((VECTOR(uint16_t, 8))(0xB793L)), 0x12A3L, 65535UL)).even)).lo))).yyxyyxxz)).s31, ((VECTOR(uint16_t, 2))(0x5D92L))))), ((VECTOR(uint16_t, 2))(65529UL)), ((VECTOR(uint16_t, 2))(0x80ECL))))))).yyxyyxyyxxxxyyyy, ((VECTOR(uint16_t, 16))(0xDB85L))))), ((VECTOR(uint16_t, 16))(0xE1BAL))))))).s26)))), 65529UL, 65531UL)).z, p_33)) <= p_33) || p_33) > l_901))) != 0x4443L)) < FAKE_DIVERGE(p_1551->global_1_offset, get_global_id(1), 10)), 0x6D24L, p_33, 0x423BL, 9L))))).s2524406376451440, ((VECTOR(int16_t, 16))((-7L))), ((VECTOR(int16_t, 16))(0x17E5L))))))).sba67, ((VECTOR(int16_t, 4))((-3L)))))).xwwzxzxw)).s4244401021356210)).s3ccc, (int16_t)p_33))).hi, ((VECTOR(uint16_t, 2))(0xB1F2L))))).hi | l_909.y) , 0UL) || 0x2B321B4636B727FBL), l_910, 0x18B3D121L, l_901, (-1L), 0x485EDDB4L)).s0);
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_1551->v_collective += p_1551->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                l_912 = ((VECTOR(int32_t, 16))(p_1551->g_911.s35ce123cf2fbedc0)).s1;
            }
            for (p_1551->g_288 = 2; (p_1551->g_288 != (-8)); p_1551->g_288 = safe_sub_func_uint32_t_u_u(p_1551->g_288, 5))
            { /* block id: 421 */
                int8_t l_919 = 0x0CL;
                int32_t l_920 = 0x1A974027L;
                int32_t l_921 = 0x2A3DD74AL;
                int32_t l_922 = 0x738D6E93L;
                int32_t l_924 = 7L;
                int32_t l_928 = (-1L);
                int64_t *l_973 = &p_1551->g_974;
                p_1551->g_929--;
                l_935[5][2][0] &= (safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(p_1551->g_934.s34)).lo, 6));
                for (p_1551->g_8 = 0; (p_1551->g_8 == (-15)); p_1551->g_8--)
                { /* block id: 426 */
                    int32_t l_952 = 0x598C1292L;
                    if ((atomic_inc(&p_1551->g_atomic_input[30 * get_linear_group_id() + 5]) == 1))
                    { /* block id: 428 */
                        int32_t l_938 = 0x636EC1B0L;
                        VECTOR(uint32_t, 2) l_939 = (VECTOR(uint32_t, 2))(0x54A2A774L, 0x2DCE51AAL);
                        uint64_t l_940 = 7UL;
                        VECTOR(int16_t, 4) l_941 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x29E4L), 0x29E4L);
                        VECTOR(uint16_t, 4) l_942 = (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 65528UL), 65528UL);
                        VECTOR(uint16_t, 8) l_943 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x342BL), 0x342BL), 0x342BL, 1UL, 0x342BL);
                        uint32_t l_944[3];
                        uint16_t l_945 = 0x8BD8L;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_944[i] = 0xCA3F4C4DL;
                        l_944[0] &= ((l_938 = 0x7EL) , ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(0L, 0x4498L, 1L, (((VECTOR(uint32_t, 2))(l_939.xx)).even , l_940), ((VECTOR(int16_t, 16))(l_941.yxzwzxzyyywyxwwx)).s2, (-6L), 0x78F6L, 0L)).s7400347524640130)).sb5d2, ((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 8))(abs(((VECTOR(uint16_t, 4))(l_942.yxxw)).wzyxywxy))).s60, ((VECTOR(uint16_t, 4))(l_943.s1426)).even))).xyxx))).y);
                        ++l_945;
                        unsigned int result = 0;
                        result += l_938;
                        result += l_939.y;
                        result += l_939.x;
                        result += l_940;
                        result += l_941.w;
                        result += l_941.z;
                        result += l_941.y;
                        result += l_941.x;
                        result += l_942.w;
                        result += l_942.z;
                        result += l_942.y;
                        result += l_942.x;
                        result += l_943.s7;
                        result += l_943.s6;
                        result += l_943.s5;
                        result += l_943.s4;
                        result += l_943.s3;
                        result += l_943.s2;
                        result += l_943.s1;
                        result += l_943.s0;
                        int l_944_i0;
                        for (l_944_i0 = 0; l_944_i0 < 3; l_944_i0++) {
                            result += l_944[l_944_i0];
                        }
                        result += l_945;
                        atomic_add(&p_1551->g_special_values[30 * get_linear_group_id() + 5], result);
                    }
                    else
                    { /* block id: 432 */
                        (1 + 1);
                    }
                    if (((safe_mul_func_int16_t_s_s(p_33, (p_1551->g_334 > l_952))) != (p_33 != p_1551->g_704.s7)))
                    { /* block id: 435 */
                        uint32_t ***l_955 = &l_953;
                        int32_t l_956 = (-10L);
                        uint32_t **l_963 = &l_954;
                        int i, j;
                        (*p_1551->g_309) = (**p_1551->g_308);
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_1551->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 3)), permutations[(safe_mod_func_uint32_t_u_u((((*l_955) = l_953) != (l_956 , ((safe_mod_func_uint64_t_u_u(p_1551->g_813.s2, (safe_add_func_int8_t_s_s(((p_33 , (safe_rshift_func_int16_t_s_s((((*l_963) = &p_1551->g_433) == l_291[0][5]), 13))) , (safe_rshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((safe_div_func_int32_t_s_s((l_970 == &l_865), (((safe_mul_func_uint16_t_u_u((((void*)0 != l_973) <= p_33), GROUP_DIVERGE(0, 1))) , l_956) && 0x5784A6AFB3021F8CL))), GROUP_DIVERGE(0, 1))), p_33))), 0xACL)))) , (void*)0))), 10))][(safe_mod_func_uint32_t_u_u(p_1551->tid, 3))]));
                    }
                    else
                    { /* block id: 442 */
                        if (p_33)
                            break;
                    }
                }
                (*p_1551->g_309) = &l_927[1][3];
            }
            if ((safe_add_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u(p_33, 0)) || 0xD62C7E5CL) , ((~(((VECTOR(uint8_t, 2))(abs(((VECTOR(uint8_t, 4))(p_1551->g_979.xyxy)).odd))).odd && ((*p_1551->g_633) == (**l_970)))) <= (p_1551->g_655.x |= ((((*l_981) ^= ((VECTOR(uint16_t, 4))(l_980.s3645)).x) ^ (((((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(safe_clamp_func(VECTOR(uint64_t, 16),VECTOR(uint64_t, 16),((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_982.sc801)), 0x8AC29685FC1ECDFCL, 0x719460BB61DE0289L, 0UL, 0x81AF660618F340F2L)).s06)))).yxyxxxxxxxyxyyxy, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(p_1551->g_983.yxxx)).hi)).xyyyyxyyyxxyxyxy, ((VECTOR(uint64_t, 2))(l_984.s31)).xyxxyxyyxxyxxyyx))).s0b86)), ((VECTOR(uint64_t, 4))(p_1551->g_985.xyyx)).z, 1UL, 0xAD57AFA820BF25E7L, 0xDB00E94F58B8F37AL)).s7 <= p_33) , ((~((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_988.s4005)).even)).hi) || (((VECTOR(uint64_t, 16))(l_989.s4212370071532054)).s1 > l_912))) , (((safe_add_func_uint16_t_u_u(((((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 16))(l_992.zyzzzwzyzwzxwxyx)).sb243, ((VECTOR(uint16_t, 2))(65535UL, 0x09B9L)).yxyx))).w , l_993[2][0]) != (p_1551->g_621[0] = l_287)), (safe_rshift_func_uint16_t_u_u(GROUP_DIVERGE(2, 1), p_1551->g_316)))) < FAKE_DIVERGE(p_1551->local_0_offset, get_local_id(0), 10)) , p_33)) > p_33) || FAKE_DIVERGE(p_1551->global_0_offset, get_global_id(0), 10))) && l_935[2][2][0])))), p_1551->g_333)))
            { /* block id: 451 */
                uint16_t l_996 = 0x0D6DL;
                ++l_996;
            }
            else
            { /* block id: 453 */
                return p_33;
            }
        }
        else
        { /* block id: 456 */
            VECTOR(uint32_t, 16) l_999 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x38AA461EL), 0x38AA461EL), 0x38AA461EL, 1UL, 0x38AA461EL, (VECTOR(uint32_t, 2))(1UL, 0x38AA461EL), (VECTOR(uint32_t, 2))(1UL, 0x38AA461EL), 1UL, 0x38AA461EL, 1UL, 0x38AA461EL);
            int32_t l_1014 = 0x50D9CD93L;
            int64_t *l_1015 = (void*)0;
            int64_t *l_1016[7][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
            int32_t l_1017 = 0x7394C26DL;
            int32_t l_1018 = 0x58EBC501L;
            uint8_t l_1024 = 255UL;
            VECTOR(uint64_t, 16) l_1038 = (VECTOR(uint64_t, 16))(18446744073709551611UL, (VECTOR(uint64_t, 4))(18446744073709551611UL, (VECTOR(uint64_t, 2))(18446744073709551611UL, 0x3E22E4C92DD3A5B4L), 0x3E22E4C92DD3A5B4L), 0x3E22E4C92DD3A5B4L, 18446744073709551611UL, 0x3E22E4C92DD3A5B4L, (VECTOR(uint64_t, 2))(18446744073709551611UL, 0x3E22E4C92DD3A5B4L), (VECTOR(uint64_t, 2))(18446744073709551611UL, 0x3E22E4C92DD3A5B4L), 18446744073709551611UL, 0x3E22E4C92DD3A5B4L, 18446744073709551611UL, 0x3E22E4C92DD3A5B4L);
            VECTOR(uint64_t, 4) l_1039 = (VECTOR(uint64_t, 4))(4UL, (VECTOR(uint64_t, 2))(4UL, 0x5D55C4A2E1219A92L), 0x5D55C4A2E1219A92L);
            VECTOR(uint64_t, 4) l_1040 = (VECTOR(uint64_t, 4))(0x840445A70FF45BA1L, (VECTOR(uint64_t, 2))(0x840445A70FF45BA1L, 0xB5A830AFF52AB47FL), 0xB5A830AFF52AB47FL);
            VECTOR(uint8_t, 8) l_1059 = (VECTOR(uint8_t, 8))(9UL, (VECTOR(uint8_t, 4))(9UL, (VECTOR(uint8_t, 2))(9UL, 1UL), 1UL), 1UL, 9UL, 1UL);
            uint32_t l_1077 = 1UL;
            int32_t l_1094 = 0L;
            int32_t l_1095 = 0x0838B76AL;
            uint8_t l_1125[3][5] = {{0x48L,8UL,0x48L,0x48L,8UL},{0x48L,8UL,0x48L,0x48L,8UL},{0x48L,8UL,0x48L,0x48L,8UL}};
            int i, j;
            ++l_999.se;
            (*l_682) = l_1002;
            l_1018 |= (((((safe_lshift_func_int8_t_s_s(p_33, ((safe_unary_minus_func_uint8_t_u((safe_mul_func_int16_t_s_s(0x2C05L, (p_33 , l_999.s0))))) < (p_33 < (safe_mul_func_uint16_t_u_u((5UL >= ((safe_mul_func_int16_t_s_s((!(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_1012.yywz)), 0L, ((VECTOR(int16_t, 2))(p_1551->g_1013.sc3)), 1L)).s0 && ((l_1014 = (p_1551->g_911.sf < p_1551->g_985.y)) && (l_1017 |= (l_1014 |= (*l_277)))))), p_33)) > 0UL)), l_925)))))) != p_33) <= 255UL) , l_999.sb) | 0x21197DD138375601L);
            if (((safe_rshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_u(p_33, 10)) < (l_999.s2 <= p_33)), ((**l_970) == (**l_970)))) != ((p_1551->g_336 = 0x1DL) || 0x13L)))
            { /* block id: 464 */
                l_1023[0][2] = p_33;
                (**p_1551->g_249) ^= l_1024;
            }
            else
            { /* block id: 467 */
                VECTOR(uint8_t, 8) l_1035 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x54L), 0x54L), 0x54L, 0UL, 0x54L);
                int32_t l_1045 = 0x2D10E7D1L;
                int8_t **l_1046[10] = {&l_895[0][7][3],&l_895[0][7][3],&l_895[0][7][3],&l_895[0][7][3],&l_895[0][7][3],&l_895[0][7][3],&l_895[0][7][3],&l_895[0][7][3],&l_895[0][7][3],&l_895[0][7][3]};
                uint16_t *l_1048 = &l_864;
                VECTOR(int8_t, 4) l_1061 = (VECTOR(int8_t, 4))(0x65L, (VECTOR(int8_t, 2))(0x65L, 0x18L), 0x18L);
                uint8_t l_1067 = 0x66L;
                VECTOR(int32_t, 4) l_1068 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x215C4806L), 0x215C4806L);
                VECTOR(uint16_t, 2) l_1078 = (VECTOR(uint16_t, 2))(0x788FL, 0x9EC8L);
                int32_t ***l_1124 = &l_284;
                int i;
                if (((safe_div_func_uint64_t_u_u(p_33, (safe_add_func_int32_t_s_s((safe_div_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(p_33, 5)) >= (((VECTOR(uint64_t, 16))((safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 16))(l_1035.s3124432372172247)).sa00c))).w, 3)), ((VECTOR(uint64_t, 8))(hadd(((VECTOR(uint64_t, 16))(p_1551->g_1036.sc846779c00c3cad8)).lo, ((VECTOR(uint64_t, 16))(p_1551->g_1037.s6152415771670230)).lo))), 0x476D535286E4C0FDL, 0xC81E84E1376F0F12L, ((VECTOR(uint64_t, 2))(l_1038.s76)), ((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(uint64_t, 8))(l_1039.xyxwzwxz)).s50, ((VECTOR(uint64_t, 2))(l_1040.wx))))), 0x7A554090067F6701L)).s0 | (l_1045 = (((p_33 > ((*l_1048) |= (((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(18446744073709551614UL, 6UL)).xyyyxxxx)).s5664677057224665)).s6 & ((p_1551->g_798.s4 & ((safe_add_func_int32_t_s_s((l_1018 &= p_33), (safe_lshift_func_int8_t_s_u(l_1035.s3, (((!l_1045) || ((*l_884) == (p_1551->g_1047 = &p_1551->g_336))) , FAKE_DIVERGE(p_1551->global_2_offset, get_global_id(2), 10)))))) < p_1551->g_335[4])) , 1L)) , 0x48A4E3FDL) == 0x8ABE1673L))) && p_33) == 0L)))), 9L)), 6L)))) ^ FAKE_DIVERGE(p_1551->group_0_offset, get_group_id(0), 10)))
                { /* block id: 472 */
                    VECTOR(int32_t, 16) l_1054 = (VECTOR(int32_t, 16))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 3L), 3L), 3L, 6L, 3L, (VECTOR(int32_t, 2))(6L, 3L), (VECTOR(int32_t, 2))(6L, 3L), 6L, 3L, 6L, 3L);
                    uint16_t l_1071 = 0x44D5L;
                    int64_t l_1072[7] = {(-1L),2L,(-1L),(-1L),2L,(-1L),(-1L)};
                    VECTOR(uint16_t, 2) l_1079 = (VECTOR(uint16_t, 2))(0x241FL, 0UL);
                    int32_t *l_1081 = (void*)0;
                    int i;
                    l_1054.s5 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_1018, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_1049.xx)), 0x64BEAF14L, (-1L))).y, 1L, ((VECTOR(int32_t, 2))(l_1050.zw)), ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 8))(l_1051.xyzxyyxw)).hi))).zxwzzwyzwwxwyyxw, ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 8))(0x23BAB815L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(p_1551->g_1052.s4636733724312354)).sffa1, ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(p_1551->g_1053.s9c)).yxyyyxyx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_1054.s9b8b)), ((0x76L > p_33) <= (safe_rshift_func_uint8_t_u_s((0x356AL | (((0x88L == ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_1059.s22)).yxyyxyxyxyyyyxxy)).s71)).lo) > ((((*l_897) = p_33) || ((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_1060.yxxyxxxy)).odd)).yxwxxzxy)).s43, ((VECTOR(int8_t, 2))(l_1061.yy))))).odd) == ((VECTOR(int64_t, 16))(1L, (-1L), (safe_mod_func_int64_t_s_s(l_1054.s4, ((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 4))(clz(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(l_1064.s2513521775717237)))).s14, ((VECTOR(uint64_t, 2))(9UL, 0x50857F2892E4800BL))))).hi, ((safe_rshift_func_int16_t_s_u(l_1045, p_33)) && l_1067), ((VECTOR(uint64_t, 4))(0UL)), 0UL, p_33, ((VECTOR(uint64_t, 2))(0xB2AE7513973C0304L)), ((VECTOR(uint64_t, 4))(5UL)), 0UL, 0x41A65ABB93C05CDCL)).s0e26))), ((VECTOR(uint64_t, 4))(18446744073709551610UL))))).w)), p_33, 1L, p_33, (-9L), ((VECTOR(int64_t, 2))(0x6E9C964E56659F39L)), ((VECTOR(int64_t, 4))(0L)), 0x578C2030216BC297L, 0x716E4B03F0B05271L, 0x734274E61755C33FL)).sb)) != 0xF4L)), p_33))), ((VECTOR(int32_t, 2))(0x726780DEL)), 1L)).lo)).yyywxzxzzzwxxxwy)).lo))).lo))), (**p_1551->g_249), ((VECTOR(int32_t, 2))((-9L))), (-1L))))).s77)), 7L, 0x65552D89L)), ((VECTOR(int32_t, 2))(0x57880CF9L)), (-6L))).s30, ((VECTOR(int32_t, 2))(1L))))).xyxyxyyxxyyxxyxy))).sf4, ((VECTOR(int32_t, 2))(2L))))), (-5L))).s5525711000066213)).s6;
                    if (((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_1068.yyxxzyww)).even)).odd, ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 8))(0x111F1C72L, ((*l_682) |= (p_33 == ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(safe_clamp_func(VECTOR(uint64_t, 8),VECTOR(uint64_t, 8),((VECTOR(uint64_t, 16))(0x11FBE2011B69AA5FL, 1UL, 3UL, 18446744073709551611UL, (((((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 4))(((l_1072[1] = l_1071) & ((void*)0 != &l_865)), ((safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((*l_1048) = (safe_div_func_int32_t_s_s(l_1077, (+p_33)))), 0x384AL, 0x8673L, 5UL)).wzxywywwxwzzzxxy)).sb7, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_1078.xyyx)).wyxywyxyxwxyywxy)).s72, ((VECTOR(uint16_t, 2))(l_1079.yy))))), 0UL, 65526UL)).w, l_1080[2])) > ((((((**p_1551->g_249) ^= p_33) , (*p_1551->g_633)) == &l_1072[1]) , 0x7DE6BEB1L) | 8UL)), 0xAE08650D77C0E6FEL, 0x6D5E8A36718EF8C1L)).wyxywzxxwzwxzzxw, ((VECTOR(uint64_t, 16))(3UL))))).sa == 0UL) < l_1017) ^ p_1551->g_622), ((VECTOR(uint64_t, 4))(18446744073709551610UL)), 0x0A2D165A69F936A1L, 0x8CAB5638949CAF46L, 0x9BF9C07624AD4C3FL, 18446744073709551615UL, l_1061.y, 0xD4EC25D5E2829F4AL, 0xD21FE8260FF9A716L)).even, ((VECTOR(uint64_t, 8))(0xDC4BA68541F18CF9L)), ((VECTOR(uint64_t, 8))(0xBC18860E70B94C00L))))).s31)), 0x3F978983316891E5L, 0xC82798128F48B6DFL)).w)), 0x225D9081L, p_33, 0x7BCEC8D6L, (**p_1551->g_249), (-2L), 0x5263ED2AL)), ((VECTOR(int32_t, 8))((-1L)))))).s04, ((VECTOR(int32_t, 2))(0L))))), ((VECTOR(int32_t, 2))(0x063F67E7L))))).lo)
                    { /* block id: 479 */
                        return l_1014;
                    }
                    else
                    { /* block id: 481 */
                        (*p_1551->g_309) = l_1081;
                        ++l_1082;
                    }
                    return p_33;
                }
                else
                { /* block id: 486 */
                    uint32_t l_1085 = 1UL;
                    int32_t l_1088 = (-4L);
                    int32_t l_1089 = 0L;
                    int32_t l_1090 = 0x7100A374L;
                    int32_t l_1091 = 0x536B57EEL;
                    int32_t l_1092 = 0L;
                    int32_t l_1093[1];
                    uint32_t l_1096 = 4294967290UL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1093[i] = 0x0F508BAFL;
                    l_1085++;
                    ++l_1096;
                    for (p_1551->g_553 = (-15); (p_1551->g_553 == (-26)); p_1551->g_553--)
                    { /* block id: 491 */
                        int64_t ***l_1120 = &p_1551->g_633;
                        int32_t ***l_1126 = &l_276;
                        int32_t ****l_1127 = &l_290;
                        (*l_682) &= l_1085;
                        (*l_682) = ((VECTOR(int32_t, 8))(0x03C0F864L, (-8L), ((VECTOR(int32_t, 2))(0x061965A8L, (-7L))), (safe_unary_minus_func_uint8_t_u(((safe_add_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((0x73L && (l_1092 ^ (safe_mod_func_int32_t_s_s((((*l_1127) = ((((((!p_33) , (safe_rshift_func_uint16_t_u_u((+(safe_mul_func_uint8_t_u_u((safe_div_func_int32_t_s_s((safe_mod_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(((+(((*l_287) = (&p_1551->g_634[1][1] != ((*l_970) = &p_1551->g_634[1][1]))) < (((safe_add_func_int16_t_s_s(((!((void*)0 == l_1120)) | ((VECTOR(int16_t, 2))(p_1551->g_1121.zy)).even), l_1096)) && (safe_add_func_int32_t_s_s(((void*)0 == l_1124), l_1040.y))) ^ l_1125[2][1]))) , (***l_1124)), 7)) , (*p_1551->g_1047)), 0xFDL)), 1UL)), p_33))), FAKE_DIVERGE(p_1551->local_0_offset, get_local_id(0), 10)))) ^ l_1091) , p_33) ^ 0x04L) , l_1126)) != (void*)0), 7L)))), 0xB964L)) && GROUP_DIVERGE(1, 1)), 0x021DL)) == l_1040.z))), (-1L), 0L, 0x6072A0C9L)).s6;
                    }
                    for (p_1551->g_929 = 0; (p_1551->g_929 > 25); p_1551->g_929++)
                    { /* block id: 500 */
                        (**p_1551->g_249) = (-8L);
                    }
                }
                for (l_748 = (-6); (l_748 == 36); l_748 = safe_add_func_uint8_t_u_u(l_748, 2))
                { /* block id: 506 */
                    return l_1077;
                }
                (*l_682) ^= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 16))(l_1132.xzzwywyzzyyzywwy)).even, (int32_t)1L))).s1452075043416235)).s3;
                (*l_682) |= (**p_1551->g_249);
            }
        }
        (*l_284) = func_301(p_33, (safe_mul_func_int8_t_s_s(((7L && (~(((&l_916 != (void*)0) && p_33) >= ((!4294967295UL) , (safe_unary_minus_func_int8_t_s((*p_1551->g_1047))))))) & ((p_1551->g_983.x == (l_927[6][4] |= (safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((p_33 || p_1551->g_655.x), p_33)) <= (**l_284)), p_33)), (*p_1551->g_250))))) && 0UL)), (*p_1551->g_1047))), (*p_1551->g_1047), (*l_290), l_1145, p_1551);
    }
    return p_33;
}


/* ------------------------------------------ */
/* 
 * reads : p_1551->g_13 p_1551->g_433 p_1551->g_700 p_1551->g_704 p_1551->g_316 p_1551->g_8 p_1551->g_310 p_1551->g_309 p_1551->g_288
 * writes: p_1551->g_13 p_1551->g_8 p_1551->g_336 p_1551->g_310
 */
int32_t * func_255(int32_t ** p_256, int64_t  p_257, int64_t  p_258, struct S0 * p_1551)
{ /* block id: 321 */
    uint32_t l_687 = 0UL;
    uint16_t l_694 = 1UL;
    int64_t **l_695 = &p_1551->g_634[0][0];
    int32_t *l_696 = &p_1551->g_13;
    VECTOR(int32_t, 2) l_701 = (VECTOR(int32_t, 2))(0L, 0x07E4B38FL);
    int i;
    if ((safe_add_func_int32_t_s_s((((safe_add_func_uint16_t_u_u(((p_258 <= l_687) >= ((((safe_sub_func_uint64_t_u_u((((safe_div_func_int32_t_s_s((safe_div_func_uint32_t_u_u(l_694, p_257)), (0UL || l_694))) , l_695) != l_695), ((((*l_696) = p_257) || (*l_696)) && 0UL))) >= p_257) , (*l_696)) ^ p_257)), p_258)) && p_258) | p_257), p_1551->g_433)))
    { /* block id: 323 */
        VECTOR(int32_t, 2) l_697 = (VECTOR(int32_t, 2))(0x3CB3770AL, 0x1E6BBD94L);
        int16_t *l_699 = (void*)0;
        int16_t **l_698 = &l_699;
        VECTOR(int32_t, 8) l_702 = (VECTOR(int32_t, 8))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x3028AF91L), 0x3028AF91L), 0x3028AF91L, 3L, 0x3028AF91L);
        VECTOR(int32_t, 8) l_703 = (VECTOR(int32_t, 8))(0x62D67127L, (VECTOR(int32_t, 4))(0x62D67127L, (VECTOR(int32_t, 2))(0x62D67127L, 7L), 7L), 7L, 0x62D67127L, 7L);
        int32_t *l_706 = &p_1551->g_8;
        int8_t *l_707 = &p_1551->g_336;
        int i;
        (*p_1551->g_309) = (((*l_707) = (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_697.xy)), 0x18FF1ACEL, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(0x717C73A4L, (((void*)0 == l_698) | (*l_696)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((-1L), 0x479FDAE0L, 0L, 0x586F728AL)), ((*l_696) = (-6L)), 0x74AA02CEL, (-10L), 0x736036B3L)).s63)))), ((*l_706) ^= ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(0x22DDE13FL, 0x0F1EB7CEL)).xxyxyyxx, ((VECTOR(int32_t, 4))(p_1551->g_700.zwzx)).xxxwxzxx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-6L), 0x2E2C7E90L)), (-6L), 0x12699497L)), ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 2))((-1L), 0x26A0D3AAL)).xyxxxyyyyyxxxyxx, ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(l_701.xx)).xxyy, ((VECTOR(int32_t, 4))(0x147D577CL, 0x15BC1E5AL, 0x7C973565L, (-7L)))))).odd)).xxxyxyyy, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_702.s2761)))).lo, ((VECTOR(int32_t, 2))(0x5E1F1C7AL, (-8L)))))).xyyxyxyx, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(1L, ((VECTOR(int32_t, 2))(l_703.s33)), 9L)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))((-8L), p_257, 0x3E9F3098L, 5L)).yxyyywwzwwxzxyyy)).s62)).yyxx, ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 16))(p_1551->g_704.s5d69fc4d6db0659c)), ((VECTOR(int32_t, 4))(((safe_unary_minus_func_int64_t_s((l_702.s2 || ((((GROUP_DIVERGE(2, 1) , (l_703.s0 = (*l_696))) != (p_258 < (l_702.s5 || p_1551->g_316))) < p_257) | 0xADFBD9E0L)))) ^ l_697.y), 0x0A230224L, 0L, 0x7E8CC8E0L)).xwyyyzyxwyzwywxw))).sff)).xyyxyyxy)).hi, ((VECTOR(int32_t, 4))((-1L))), ((VECTOR(int32_t, 4))(0x67810506L))))).xxyzwxwzwyyyxyxz, (int32_t)7L))).s64fa))).odd)).yxyxyyyxxyxyyyyx, ((VECTOR(int32_t, 16))(1L))))).sd0)).yyxx, ((VECTOR(int32_t, 4))((-2L)))))).zwyxxwyx))).s51)).yxyxxxyx))).s7542612432606155))).s26cd, ((VECTOR(int32_t, 4))((-1L))), ((VECTOR(int32_t, 4))((-1L))))))))))).s7), ((VECTOR(int32_t, 2))(0x74752EA2L)), 0x08940D19L)).s65, ((VECTOR(int32_t, 2))(0x622C0DEAL))))).xyyy, ((VECTOR(int32_t, 4))(0x4FC35F7DL))))).zxzwyzxz, ((VECTOR(int32_t, 8))((-2L)))))).s72, ((VECTOR(int32_t, 2))(1L)), ((VECTOR(int32_t, 2))((-4L)))))))), ((VECTOR(int32_t, 2))(4L))))), 5L, 6L, 1L)).s1560647221702530, ((VECTOR(int32_t, 16))(0x3B8D17D1L)), ((VECTOR(int32_t, 16))(0x19DD3025L))))).lo)).s0 , 0x68L)) , (*p_256));
        return (*p_256);
    }
    else
    { /* block id: 330 */
        int32_t l_708[1];
        VECTOR(uint32_t, 2) l_709 = (VECTOR(uint32_t, 2))(0xC14D8D57L, 1UL);
        int i;
        for (i = 0; i < 1; i++)
            l_708[i] = 0x662694D3L;
        l_708[0] = (p_1551->g_288 , (*l_696));
        (*l_696) = l_709.x;
    }
    return (*p_256);
}


/* ------------------------------------------ */
/* 
 * reads : p_1551->g_312 p_1551->g_309
 * writes:
 */
int32_t ** func_259(int32_t  p_260, uint32_t  p_261, int32_t * p_262, struct S0 * p_1551)
{ /* block id: 319 */
    return (*p_1551->g_312);
}


/* ------------------------------------------ */
/* 
 * reads : p_1551->g_561 p_1551->g_337 p_1551->g_13 p_1551->g_5 p_1551->g_607 p_1551->g_334 p_1551->l_comm_values p_1551->g_288 p_1551->g_comm_values p_1551->g_312 p_1551->g_309 p_1551->g_459 p_1551->g_608 p_1551->g_609 p_1551->g_621 p_1551->g_633 p_1551->g_433 p_1551->g_655 p_1551->g_656 p_1551->g_308 p_1551->g_310 p_1551->g_8
 * writes: p_1551->g_336 p_1551->g_459 p_1551->g_288 p_1551->g_637 p_1551->g_433 p_1551->g_310 p_1551->g_335
 */
int32_t  func_263(int32_t * p_264, int32_t * p_265, int32_t ** p_266, int32_t  p_267, struct S0 * p_1551)
{ /* block id: 290 */
    int8_t l_562 = 0x60L;
    VECTOR(int32_t, 4) l_567 = (VECTOR(int32_t, 4))(0x017C632BL, (VECTOR(int32_t, 2))(0x017C632BL, (-2L)), (-2L));
    VECTOR(int32_t, 2) l_568 = (VECTOR(int32_t, 2))(1L, 6L);
    int16_t **l_572 = (void*)0;
    int16_t ***l_571 = &l_572;
    int16_t ***l_574 = (void*)0;
    int16_t ****l_573 = &l_574;
    int8_t *l_577[3][9][9] = {{{(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0},{(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0},{(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0},{(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0},{(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0},{(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0},{(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0},{(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0},{(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0}},{{(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0},{(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0},{(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0},{(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0},{(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0},{(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0},{(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0},{(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0},{(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0}},{{(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0},{(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0},{(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0},{(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0},{(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0},{(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0},{(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0},{(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0},{(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0,&p_1551->g_336,&p_1551->g_336,(void*)0,(void*)0}}};
    int32_t l_578 = 0x0A28164AL;
    int32_t l_579 = 0x6025DAB0L;
    VECTOR(uint8_t, 2) l_580 = (VECTOR(uint8_t, 2))(0x86L, 0xBCL);
    VECTOR(uint8_t, 16) l_581 = (VECTOR(uint8_t, 16))(0x1AL, (VECTOR(uint8_t, 4))(0x1AL, (VECTOR(uint8_t, 2))(0x1AL, 255UL), 255UL), 255UL, 0x1AL, 255UL, (VECTOR(uint8_t, 2))(0x1AL, 255UL), (VECTOR(uint8_t, 2))(0x1AL, 255UL), 0x1AL, 255UL, 0x1AL, 255UL);
    VECTOR(uint32_t, 2) l_597 = (VECTOR(uint32_t, 2))(0x9A88A25FL, 0xB04D085FL);
    VECTOR(uint16_t, 8) l_654 = (VECTOR(uint16_t, 8))(65532UL, (VECTOR(uint16_t, 4))(65532UL, (VECTOR(uint16_t, 2))(65532UL, 0x46C0L), 0x46C0L), 0x46C0L, 65532UL, 0x46C0L);
    uint8_t l_674 = 0x15L;
    int16_t *l_679 = (void*)0;
    int16_t *l_680 = &p_1551->g_335[3];
    int i, j, k;
    if ((+(safe_mod_func_int16_t_s_s((((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(p_1551->g_561.xyxy)).even)).hi , l_562), 0xBAA6A9FAL, 4294967295UL, (safe_div_func_int16_t_s_s((FAKE_DIVERGE(p_1551->group_1_offset, get_group_id(1), 10) > (((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_567.xwyyyywxzyywxxxw)).sd0)).xyxyxyyx)).even, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_568.yyxxyxxyxyyyxyxy)))).s0a6d))).x != (((safe_add_func_int32_t_s_s((l_571 == ((*l_573) = (void*)0)), ((VECTOR(uint32_t, 2))(4294967295UL, 0x2B03185FL)).lo)) || (p_1551->g_337 , (safe_add_func_int16_t_s_s(p_1551->g_13, (((l_579 = (l_578 = p_267)) & ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 16))(l_580.yxxyyxyyxyyxyyyy)).sde57, ((VECTOR(uint8_t, 2))(l_581.s23)).xyyx))).zzwwywzyywywxzxz)).sa) && (p_1551->g_336 = p_267)))))) , (&p_1551->g_336 != &l_562)))), 0x443CL)), ((VECTOR(uint32_t, 2))(0x57B1E161L)), 0x19511C74L, 4294967286UL)))).s3 >= p_1551->g_5) == 0L) < 0x7CD13A49L), p_267))))
    { /* block id: 295 */
        uint16_t *l_592 = &p_1551->g_459;
        int32_t l_606 = 0L;
        int16_t *****l_610 = (void*)0;
        int16_t ****l_611 = &l_571;
        int32_t *l_612 = &l_578;
        int16_t *l_613 = &p_1551->g_288;
        uint64_t l_614 = 3UL;
        int8_t l_615 = 0x15L;
        int32_t l_616 = 0x228EFDB7L;
        int32_t l_629 = 0x43168381L;
        l_616 = (safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 2))((-2L), (-5L))), ((VECTOR(uint8_t, 16))((((safe_div_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((l_567.y = (safe_div_func_int64_t_s_s((((safe_sub_func_uint16_t_u_u(((*l_592) = (GROUP_DIVERGE(1, 1) <= 0xB812238DL)), (safe_mod_func_int16_t_s_s(((((*l_613) |= (((safe_sub_func_uint32_t_u_u((((VECTOR(uint32_t, 4))(l_597.xyxy)).w && ((*l_612) = ((&p_1551->g_553 == &p_1551->g_553) > ((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(0x38D9775CL, l_606)), 1)), p_267)) <= (((((l_611 = p_1551->g_607) != (void*)0) ^ 1L) | 9L) < l_606))))), (*p_264))) , p_1551->g_334) != p_1551->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1551->tid, 3))])) || p_1551->g_comm_values[p_1551->tid]) || (*l_612)), l_580.y)))) < 0x5EBBL) , p_267), 18446744073709551615UL))), p_1551->g_5)), p_267)) || (*l_612)) | l_614), 0x16L, 6UL, 0x09L, p_267, ((VECTOR(uint8_t, 2))(255UL)), ((VECTOR(uint8_t, 4))(0xEDL)), l_615, ((VECTOR(uint8_t, 2))(255UL)), 1UL, 0xEBL)).sa0))), 0x12E9L, (-1L)))))).w, l_580.x));
        (*l_612) = (((*p_1551->g_312) == &p_265) & ((((((*l_612) >= ((*l_592) &= 0xB304L)) , (*p_1551->g_608)) == (*p_1551->g_608)) >= ((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((p_1551->g_621[0] != l_613), 3)), (safe_div_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((((safe_sub_func_int16_t_s_s((((*l_571) = (**l_611)) != (*p_1551->g_608)), p_267)) != (-8L)) <= (*l_612)) | 0xE3L), (*l_612))), p_267)))) | p_267)) < l_629));
    }
    else
    { /* block id: 305 */
        int16_t l_630 = 0x1F92L;
        int64_t **l_636 = (void*)0;
        int64_t ***l_635[8][3] = {{&l_636,&l_636,&l_636},{&l_636,&l_636,&l_636},{&l_636,&l_636,&l_636},{&l_636,&l_636,&l_636},{&l_636,&l_636,&l_636},{&l_636,&l_636,&l_636},{&l_636,&l_636,&l_636},{&l_636,&l_636,&l_636}};
        VECTOR(int64_t, 4) l_646 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 1L), 1L);
        uint8_t *l_647[2];
        int32_t l_648 = 6L;
        uint32_t *l_651 = &p_1551->g_433;
        int32_t *l_665 = (void*)0;
        int32_t *l_666 = (void*)0;
        int32_t *l_667 = (void*)0;
        int32_t *l_668 = &l_648;
        int32_t l_669 = (-1L);
        int32_t *l_670 = &p_1551->g_8;
        int32_t *l_671 = &p_1551->g_8;
        int32_t *l_672 = (void*)0;
        int32_t *l_673[3][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int i, j;
        for (i = 0; i < 2; i++)
            l_647[i] = &p_1551->g_342;
        l_630 ^= (*p_264);
        (**p_1551->g_312) = ((safe_div_func_int32_t_s_s((p_1551->g_633 == (p_1551->g_637 = &p_1551->g_634[1][1])), (((((safe_rshift_func_int8_t_s_u((safe_add_func_int8_t_s_s((p_1551->g_336 = (safe_mod_func_uint8_t_u_u(0UL, (l_648 = (safe_add_func_int64_t_s_s(((VECTOR(int64_t, 16))(l_646.wxzwxwywywwyyywz)).s3, FAKE_DIVERGE(p_1551->group_2_offset, get_group_id(2), 10))))))), (safe_mul_func_uint16_t_u_u(((((void*)0 == (*p_266)) && (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))(0x50F7D272L, 0x0FDFB4E4L))))).yyyyyyxyxyxxxyxy)).se >= (++(*l_651)))) <= ((void*)0 != &p_1551->g_342)), ((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_654.s2015313043355063)).s0541)).yxyyxxyw, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 16))(p_1551->g_655.yxxxxxyxxxyxyxyx)).hi, ((VECTOR(uint16_t, 16))((((VECTOR(uint8_t, 2))(p_1551->g_656.yw)).odd && (safe_rshift_func_uint16_t_u_u(p_267, (((VECTOR(uint64_t, 2))(0xC849282FC82CEE31L, 0UL)).lo < (safe_rshift_func_int8_t_s_u(((((safe_sub_func_int16_t_s_s(((safe_div_func_uint32_t_u_u(((((VECTOR(int32_t, 16))((p_267 > (-1L)), ((VECTOR(int32_t, 2))(0x7E585BFAL)), p_1551->g_655.x, ((VECTOR(int32_t, 8))(0x11F1BAFFL)), p_267, 0x31F291D3L, 0x384DE8D9L, 0x170C07E5L)).s9 , GROUP_DIVERGE(1, 1)) & p_267), (*p_264))) >= 0x4DB3L), 0x235CL)) | 1UL) <= p_267) , 0x04L), l_567.w)))))), ((VECTOR(uint16_t, 4))(0x8117L)), 1UL, p_267, ((VECTOR(uint16_t, 8))(0x301AL)), 65534UL)).even)))))))).s3)))), p_267)) | 0x951BL) , p_1551->g_561.y) != l_646.z) | 0x0A7C07B06133F0C5L))) , (**p_1551->g_308));
        --l_674;
        (*l_668) |= (safe_mod_func_int16_t_s_s(p_267, (l_581.s0 && (l_562 < (*l_670)))));
    }
    (**p_1551->g_312) = (((*l_680) = (&p_1551->g_336 != (void*)0)) , (*p_266));
    return l_562;
}


/* ------------------------------------------ */
/* 
 * reads : p_1551->g_13 p_1551->g_316 p_1551->g_334 p_1551->g_288 p_1551->g_5 p_1551->g_433 p_1551->g_454 p_1551->g_342 p_1551->g_459 p_1551->g_533
 * writes: p_1551->g_13 p_1551->g_433 p_1551->g_335 p_1551->g_288 p_1551->g_342 p_1551->g_459
 */
int32_t * func_268(int8_t  p_269, int8_t  p_270, int32_t ** p_271, int32_t ** p_272, int32_t * p_273, struct S0 * p_1551)
{ /* block id: 177 */
    VECTOR(int64_t, 2) l_292 = (VECTOR(int64_t, 2))((-1L), 1L);
    int32_t **l_307 = (void*)0;
    int32_t *l_340 = &p_1551->g_13;
    uint8_t *l_341 = &p_1551->g_342;
    int32_t *l_343 = &p_1551->g_13;
    VECTOR(uint32_t, 16) l_426 = (VECTOR(uint32_t, 16))(0x6BC9C2AAL, (VECTOR(uint32_t, 4))(0x6BC9C2AAL, (VECTOR(uint32_t, 2))(0x6BC9C2AAL, 0x622C0B0CL), 0x622C0B0CL), 0x622C0B0CL, 0x6BC9C2AAL, 0x622C0B0CL, (VECTOR(uint32_t, 2))(0x6BC9C2AAL, 0x622C0B0CL), (VECTOR(uint32_t, 2))(0x6BC9C2AAL, 0x622C0B0CL), 0x6BC9C2AAL, 0x622C0B0CL, 0x6BC9C2AAL, 0x622C0B0CL);
    uint64_t l_430 = 18446744073709551614UL;
    uint32_t l_434 = 5UL;
    VECTOR(uint16_t, 4) l_450 = (VECTOR(uint16_t, 4))(7UL, (VECTOR(uint16_t, 2))(7UL, 65528UL), 65528UL);
    int32_t l_550 = 9L;
    int32_t l_551 = 0x489F152CL;
    int32_t l_552 = 0x51D284EBL;
    int32_t l_554[4];
    int16_t l_555 = 9L;
    int i;
    for (i = 0; i < 4; i++)
        l_554[i] = 0x66C7B957L;
    if ((**p_272))
    { /* block id: 193 */
        int32_t l_419 = 1L;
        int16_t *l_427 = &p_1551->g_335[7];
        int64_t *l_428 = (void*)0;
        int64_t *l_429 = (void*)0;
        uint32_t *l_432 = &p_1551->g_433;
        VECTOR(uint32_t, 4) l_449 = (VECTOR(uint32_t, 4))(0xACFC7990L, (VECTOR(uint32_t, 2))(0xACFC7990L, 1UL), 1UL);
        int i;
        if ((atomic_inc(&p_1551->g_atomic_input[30 * get_linear_group_id() + 8]) == 4))
        { /* block id: 195 */
            uint8_t l_344 = 254UL;
            int16_t l_345 = 0x4331L;
            int32_t l_409 = 0L;
            int8_t l_410[1];
            int8_t l_411 = 0x06L;
            uint8_t l_412 = 254UL;
            int8_t l_415 = 0x78L;
            VECTOR(int64_t, 2) l_416 = (VECTOR(int64_t, 2))((-1L), 1L);
            int16_t l_417[2];
            uint16_t l_418 = 2UL;
            int i;
            for (i = 0; i < 1; i++)
                l_410[i] = 0L;
            for (i = 0; i < 2; i++)
                l_417[i] = 0x5F7BL;
            if ((l_345 = l_344))
            { /* block id: 197 */
                int16_t l_348[5];
                int16_t *l_347 = &l_348[1];
                int16_t **l_346 = &l_347;
                int16_t **l_349 = &l_347;
                int16_t **l_350[10][4][2] = {{{&l_347,&l_347},{&l_347,&l_347},{&l_347,&l_347},{&l_347,&l_347}},{{&l_347,&l_347},{&l_347,&l_347},{&l_347,&l_347},{&l_347,&l_347}},{{&l_347,&l_347},{&l_347,&l_347},{&l_347,&l_347},{&l_347,&l_347}},{{&l_347,&l_347},{&l_347,&l_347},{&l_347,&l_347},{&l_347,&l_347}},{{&l_347,&l_347},{&l_347,&l_347},{&l_347,&l_347},{&l_347,&l_347}},{{&l_347,&l_347},{&l_347,&l_347},{&l_347,&l_347},{&l_347,&l_347}},{{&l_347,&l_347},{&l_347,&l_347},{&l_347,&l_347},{&l_347,&l_347}},{{&l_347,&l_347},{&l_347,&l_347},{&l_347,&l_347},{&l_347,&l_347}},{{&l_347,&l_347},{&l_347,&l_347},{&l_347,&l_347},{&l_347,&l_347}},{{&l_347,&l_347},{&l_347,&l_347},{&l_347,&l_347},{&l_347,&l_347}}};
                int16_t **l_351 = &l_347;
                uint32_t l_352[5] = {0xCE9AB9C9L,0xCE9AB9C9L,0xCE9AB9C9L,0xCE9AB9C9L,0xCE9AB9C9L};
                int16_t l_353 = 0L;
                VECTOR(int32_t, 2) l_354 = (VECTOR(int32_t, 2))((-5L), 0x0F6A8A63L);
                VECTOR(int32_t, 8) l_355 = (VECTOR(int32_t, 8))(0x08DEA3B1L, (VECTOR(int32_t, 4))(0x08DEA3B1L, (VECTOR(int32_t, 2))(0x08DEA3B1L, 0x32267C3BL), 0x32267C3BL), 0x32267C3BL, 0x08DEA3B1L, 0x32267C3BL);
                int32_t l_356 = 0x2F25E6BEL;
                uint8_t l_357 = 255UL;
                int32_t *l_358 = (void*)0;
                int32_t *l_359 = (void*)0;
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_348[i] = 0x1B1EL;
                l_351 = (l_350[3][0][1] = (l_349 = (FAKE_DIVERGE(p_1551->local_0_offset, get_local_id(0), 10) , l_346)));
                l_353 = (l_352[0] &= 0x36543DA5L);
                l_357 = (l_356 = (l_354.x = ((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(l_354.xxyx)).ywxzwyxy, ((VECTOR(int32_t, 2))(0x3B4DF4E6L, (-1L))).xxxyxxyx, ((VECTOR(int32_t, 16))(l_355.s2163606007406750)).even))).s3));
                l_359 = l_358;
            }
            else
            { /* block id: 207 */
                int32_t l_360 = 0L;
                int32_t *l_407 = &l_360;
                int32_t *l_408 = &l_360;
                for (l_360 = (-28); (l_360 < (-18)); l_360++)
                { /* block id: 210 */
                    int8_t l_363 = 1L;
                    uint16_t l_401 = 0x7F42L;
                    uint32_t l_404 = 0xBAA1FF9BL;
                    if (l_363)
                    { /* block id: 211 */
                        int8_t l_364 = 1L;
                        int16_t l_365 = 0x31E5L;
                        int32_t l_366 = 0x3D269E7FL;
                        int64_t l_367 = 0x0F5FABB3360B85D9L;
                        int32_t l_368[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
                        int8_t l_369 = 0x40L;
                        uint8_t l_370 = 0xA0L;
                        VECTOR(int16_t, 8) l_373 = (VECTOR(int16_t, 8))(9L, (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, (-3L)), (-3L)), (-3L), 9L, (-3L));
                        int i;
                        l_364 = 0x02C83728L;
                        l_370++;
                        l_373.s3 &= 0x571D473AL;
                    }
                    else
                    { /* block id: 215 */
                        VECTOR(int32_t, 8) l_374 = (VECTOR(int32_t, 8))(0x635C6506L, (VECTOR(int32_t, 4))(0x635C6506L, (VECTOR(int32_t, 2))(0x635C6506L, 0x381F5FF8L), 0x381F5FF8L), 0x381F5FF8L, 0x635C6506L, 0x381F5FF8L);
                        VECTOR(int32_t, 16) l_375 = (VECTOR(int32_t, 16))(0x29D46AF9L, (VECTOR(int32_t, 4))(0x29D46AF9L, (VECTOR(int32_t, 2))(0x29D46AF9L, (-9L)), (-9L)), (-9L), 0x29D46AF9L, (-9L), (VECTOR(int32_t, 2))(0x29D46AF9L, (-9L)), (VECTOR(int32_t, 2))(0x29D46AF9L, (-9L)), 0x29D46AF9L, (-9L), 0x29D46AF9L, (-9L));
                        VECTOR(int32_t, 16) l_376 = (VECTOR(int32_t, 16))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), (-3L)), (-3L)), (-3L), (-2L), (-3L), (VECTOR(int32_t, 2))((-2L), (-3L)), (VECTOR(int32_t, 2))((-2L), (-3L)), (-2L), (-3L), (-2L), (-3L));
                        VECTOR(int32_t, 4) l_377 = (VECTOR(int32_t, 4))(0x6F7D2836L, (VECTOR(int32_t, 2))(0x6F7D2836L, (-6L)), (-6L));
                        VECTOR(int32_t, 2) l_378 = (VECTOR(int32_t, 2))(7L, 0x29BD878AL);
                        uint64_t l_379 = 18446744073709551606UL;
                        uint32_t l_380 = 0x2D1E0E35L;
                        VECTOR(int16_t, 8) l_381 = (VECTOR(int16_t, 8))(0x6A7DL, (VECTOR(int16_t, 4))(0x6A7DL, (VECTOR(int16_t, 2))(0x6A7DL, 0x7AA8L), 0x7AA8L), 0x7AA8L, 0x6A7DL, 0x7AA8L);
                        uint32_t l_382 = 0xADA9AE9DL;
                        uint8_t l_383[9] = {2UL,0UL,2UL,2UL,0UL,2UL,2UL,0UL,2UL};
                        int16_t l_384 = 8L;
                        VECTOR(uint64_t, 4) l_385 = (VECTOR(uint64_t, 4))(5UL, (VECTOR(uint64_t, 2))(5UL, 18446744073709551614UL), 18446744073709551614UL);
                        int32_t l_386 = 0x5746121AL;
                        int64_t l_387 = 1L;
                        VECTOR(uint32_t, 16) l_388 = (VECTOR(uint32_t, 16))(4UL, (VECTOR(uint32_t, 4))(4UL, (VECTOR(uint32_t, 2))(4UL, 0UL), 0UL), 0UL, 4UL, 0UL, (VECTOR(uint32_t, 2))(4UL, 0UL), (VECTOR(uint32_t, 2))(4UL, 0UL), 4UL, 0UL, 4UL, 0UL);
                        VECTOR(uint64_t, 2) l_389 = (VECTOR(uint64_t, 2))(0x7C6CBDAD3AD992B5L, 0UL);
                        VECTOR(uint64_t, 2) l_390 = (VECTOR(uint64_t, 2))(3UL, 8UL);
                        VECTOR(int32_t, 16) l_391 = (VECTOR(int32_t, 16))(0x668A92C4L, (VECTOR(int32_t, 4))(0x668A92C4L, (VECTOR(int32_t, 2))(0x668A92C4L, (-1L)), (-1L)), (-1L), 0x668A92C4L, (-1L), (VECTOR(int32_t, 2))(0x668A92C4L, (-1L)), (VECTOR(int32_t, 2))(0x668A92C4L, (-1L)), 0x668A92C4L, (-1L), 0x668A92C4L, (-1L));
                        VECTOR(int32_t, 8) l_392 = (VECTOR(int32_t, 8))(0x1DE6A60BL, (VECTOR(int32_t, 4))(0x1DE6A60BL, (VECTOR(int32_t, 2))(0x1DE6A60BL, 0L), 0L), 0L, 0x1DE6A60BL, 0L);
                        uint16_t l_393 = 0xEBD8L;
                        uint16_t l_394 = 0xC02BL;
                        uint64_t l_395 = 0x689C453166E13537L;
                        int i;
                        l_376.sc = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 2))(l_374.s02)).xyxyxxxy, ((VECTOR(int32_t, 16))(0L, ((VECTOR(int32_t, 8))(l_375.sef5abe59)), ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))((-1L), ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_376.s57587091)).s50)).xxyx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 2))(0x03515CC3L, (-1L))).xyxyxxxxxxyyyxxx))).even)))).lo))).zzyxyyyxwxyywzwx, (int32_t)(l_380 = ((VECTOR(int32_t, 4))(4L, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(l_377.yy)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_378.xy)).xyxyxxxx)).s43))), (int32_t)l_379))), 0x03411C7EL)).z), (int32_t)(((l_345 |= ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_381.s62)).xyxx)).y) , l_382) , (((l_380 = l_383[3]) , ((VECTOR(uint64_t, 16))(l_384, 18446744073709551615UL, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(l_385.wwwy)).hi)), 0x852397B36C433F4CL, l_386, 1UL, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL)))))), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(rhadd(((VECTOR(uint64_t, 4))(upsample(((VECTOR(uint32_t, 4))((l_387 = 0x903FAEA7L), ((VECTOR(uint32_t, 2))(0x339DDDB8L, 0x4C8DBCB4L)), 4294967295UL)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(l_388.sea58))))))).xxwwzwwzxxwyzxyy, ((VECTOR(uint64_t, 2))(add_sat(((VECTOR(uint64_t, 8))(l_389.xyxyyyyy)).s37, ((VECTOR(uint64_t, 16))(l_390.xxyyyxyyyxxyxxyx)).sb5))).yxxyyxxyxyxyxyyx))).sbb88)), 4UL, 18446744073709551615UL, 1UL)).s7) , ((VECTOR(int32_t, 4))(l_391.s5a0b)).x))))).s34, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_392.s10)), 4L, 0x645A8308L)).hi)).yxyyxyxx)).s77))), (l_393 , 1L), (-10L), 1L, 0x5A78A6A3L, 0L, 0x411936E4L, ((VECTOR(int32_t, 2))((-1L))), l_394, ((VECTOR(int32_t, 4))(0x0489B811L)))))).s21, ((VECTOR(int32_t, 2))(7L)), ((VECTOR(int32_t, 2))(0L))))), 0x4A41DF83L, ((VECTOR(int32_t, 4))(0x6C40D32AL)))).hi))).s16)), l_395, (-1L), ((VECTOR(int32_t, 2))(1L)), 0x59DFDDD3L, 0x25904FA5L)).s4;
                    }
                    for (l_363 = 0; (l_363 != 25); ++l_363)
                    { /* block id: 224 */
                        int32_t l_399 = (-1L);
                        int32_t *l_398 = &l_399;
                        int32_t *l_400 = &l_399;
                        l_400 = l_398;
                    }
                    --l_401;
                    l_404--;
                }
                l_408 = l_407;
            }
            --l_412;
            l_416.y ^= l_415;
            l_418 = l_417[0];
            unsigned int result = 0;
            result += l_344;
            result += l_345;
            result += l_409;
            int l_410_i0;
            for (l_410_i0 = 0; l_410_i0 < 1; l_410_i0++) {
                result += l_410[l_410_i0];
            }
            result += l_411;
            result += l_412;
            result += l_415;
            result += l_416.y;
            result += l_416.x;
            int l_417_i0;
            for (l_417_i0 = 0; l_417_i0 < 2; l_417_i0++) {
                result += l_417[l_417_i0];
            }
            result += l_418;
            atomic_add(&p_1551->g_special_values[30 * get_linear_group_id() + 8], result);
        }
        else
        { /* block id: 235 */
            (1 + 1);
        }
        (*l_340) = (**p_272);
        if ((((((*l_340) != p_1551->g_316) != l_419) <= (safe_div_func_int64_t_s_s((((safe_sub_func_int32_t_s_s(((l_430 = (safe_sub_func_uint8_t_u_u((p_269 & (((VECTOR(uint32_t, 8))(l_426.s993070f6)).s6 , (&p_1551->g_335[7] != l_427))), p_269))) != (safe_unary_minus_func_int64_t_s(0x7F0529FBBD50D57BL))), ((*l_432) = (0x41C3L ^ 5L)))) >= l_434) , p_1551->g_334), FAKE_DIVERGE(p_1551->local_1_offset, get_local_id(1), 10)))) >= 9L))
        { /* block id: 241 */
            int32_t *l_435 = &p_1551->g_5;
            (*p_272) = l_435;
        }
        else
        { /* block id: 243 */
            VECTOR(int16_t, 4) l_440 = (VECTOR(int16_t, 4))(0x267CL, (VECTOR(int16_t, 2))(0x267CL, 1L), 1L);
            int16_t **l_455[9] = {&l_427,&l_427,&l_427,&l_427,&l_427,&l_427,&l_427,&l_427,&l_427};
            int16_t l_468 = (-4L);
            int i;
            (*l_340) = ((safe_add_func_int16_t_s_s(0x79DCL, (p_1551->g_288 = (((safe_add_func_uint16_t_u_u(6UL, p_1551->g_288)) | ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 2))(0L, 0L)), ((VECTOR(int16_t, 16))(l_440.yywyzxyyzwzzwwwz)).s36))), ((*l_427) = ((safe_rshift_func_int8_t_s_u((((0x4106L == (safe_add_func_uint64_t_u_u((4UL < (safe_sub_func_uint8_t_u_u((6L < l_440.y), 0L))), 18446744073709551615UL))) > GROUP_DIVERGE(1, 1)) , (*l_343)), GROUP_DIVERGE(2, 1))) ^ p_270)), (*l_343), ((VECTOR(int16_t, 2))(0L)), (-1L), 0x0798L)).s6) >= p_1551->g_5)))) && 65529UL);
            for (p_1551->g_433 = 0; (p_1551->g_433 == 19); p_1551->g_433 = safe_add_func_int8_t_s_s(p_1551->g_433, 9))
            { /* block id: 249 */
                VECTOR(uint64_t, 4) l_453 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), 18446744073709551615UL);
                int16_t **l_456 = &l_427;
                int16_t ***l_457 = &l_456;
                uint16_t *l_458 = &p_1551->g_459;
                int32_t *l_466 = (void*)0;
                int32_t l_467 = (-6L);
                int i;
                l_468 |= (((0x4708CE89L > ((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_449.yz)).yxyxyxxx)).s51))).even) , ((VECTOR(uint16_t, 2))(l_450.yy)).hi) < (safe_div_func_int32_t_s_s(((0x43L || ((*l_341) |= ((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(l_453.zzwwyxww)))).s0630574114336507)).s1 , p_1551->g_334) , ((((VECTOR(int64_t, 8))(add_sat(((VECTOR(int64_t, 4))(0x2326F1AB0378CB08L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(l_440.x, 0x13D574E489B31BDFL, (-8L), 0L)).hi)), 0L)).xyzzyzyx, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(p_1551->g_454.yxyy)).odd)).yxxxyyyx))).s1 , l_455[5]) == ((*l_457) = l_456))))) > ((l_467 = ((((*l_340) = (p_1551->g_13 || ((*l_458) ^= l_440.w))) , ((safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_div_func_uint16_t_u_u(p_270, 1UL)), p_1551->g_5)), 1)) & 0x0CL)) > l_449.z)) , (**p_272))), 0x7BFB7129L)));
            }
            if ((atomic_inc(&p_1551->l_atomic_input[10]) == 4))
            { /* block id: 258 */
                VECTOR(int32_t, 16) l_469 = (VECTOR(int32_t, 16))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x79AA6520L), 0x79AA6520L), 0x79AA6520L, (-2L), 0x79AA6520L, (VECTOR(int32_t, 2))((-2L), 0x79AA6520L), (VECTOR(int32_t, 2))((-2L), 0x79AA6520L), (-2L), 0x79AA6520L, (-2L), 0x79AA6520L);
                int8_t l_470 = 0x05L;
                VECTOR(uint32_t, 2) l_471 = (VECTOR(uint32_t, 2))(0x92130D78L, 4294967295UL);
                int32_t l_472 = 0x6E1B0FC3L;
                uint8_t l_473[2];
                VECTOR(int32_t, 8) l_474 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x7B78395CL), 0x7B78395CL), 0x7B78395CL, (-1L), 0x7B78395CL);
                int64_t l_526 = 0x02C0D96974D6C700L;
                int64_t *l_525 = &l_526;
                int64_t **l_524 = &l_525;
                int32_t l_527 = (-9L);
                uint64_t l_528 = 1UL;
                uint8_t l_531 = 0UL;
                uint16_t l_532 = 0x83F6L;
                int i;
                for (i = 0; i < 2; i++)
                    l_473[i] = 0UL;
                if (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 8))(l_469.s4f1598d4)).even, ((VECTOR(int32_t, 16))((-7L), ((VECTOR(int32_t, 2))((-5L), 0x0DF20DA0L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(6L, 0L)), 0x697BBC22L, 0L)))), ((VECTOR(int32_t, 4))(l_470, ((VECTOR(int32_t, 2))((-1L), 0x1DF8FA97L)), 0x1B59C90DL)), (((VECTOR(uint32_t, 16))(l_471.xxxxyyyyxyyxyyyx)).sf , l_472), (l_473[1] , ((VECTOR(int32_t, 8))(l_474.s44412307)).s0), 3L, (-1L), 1L)).secfa))).lo)))), 0x0A3C7D15L, (-1L))).z)
                { /* block id: 259 */
                    int32_t l_476 = 0x19ABB8A9L;
                    int32_t *l_475[1][1][5];
                    int32_t *l_477 = &l_476;
                    int32_t *l_478 = &l_476;
                    VECTOR(int32_t, 2) l_479 = (VECTOR(int32_t, 2))(0x62F7704DL, (-1L));
                    VECTOR(int32_t, 2) l_480 = (VECTOR(int32_t, 2))(0x39F0F953L, (-1L));
                    VECTOR(int32_t, 8) l_481 = (VECTOR(int32_t, 8))(0x253EE177L, (VECTOR(int32_t, 4))(0x253EE177L, (VECTOR(int32_t, 2))(0x253EE177L, 0x54403E67L), 0x54403E67L), 0x54403E67L, 0x253EE177L, 0x54403E67L);
                    VECTOR(int32_t, 8) l_482 = (VECTOR(int32_t, 8))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0L), 0L), 0L, 4L, 0L);
                    VECTOR(int32_t, 16) l_483 = (VECTOR(int32_t, 16))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x286F9879L), 0x286F9879L), 0x286F9879L, 8L, 0x286F9879L, (VECTOR(int32_t, 2))(8L, 0x286F9879L), (VECTOR(int32_t, 2))(8L, 0x286F9879L), 8L, 0x286F9879L, 8L, 0x286F9879L);
                    VECTOR(int32_t, 8) l_484 = (VECTOR(int32_t, 8))(0x1F0DA403L, (VECTOR(int32_t, 4))(0x1F0DA403L, (VECTOR(int32_t, 2))(0x1F0DA403L, 0x073D3594L), 0x073D3594L), 0x073D3594L, 0x1F0DA403L, 0x073D3594L);
                    int64_t l_485 = 0x017572EA0A6CBC35L;
                    uint32_t l_486 = 4294967292UL;
                    int32_t l_487 = 0x6C6F7024L;
                    VECTOR(int32_t, 16) l_488 = (VECTOR(int32_t, 16))(0x01785E00L, (VECTOR(int32_t, 4))(0x01785E00L, (VECTOR(int32_t, 2))(0x01785E00L, (-1L)), (-1L)), (-1L), 0x01785E00L, (-1L), (VECTOR(int32_t, 2))(0x01785E00L, (-1L)), (VECTOR(int32_t, 2))(0x01785E00L, (-1L)), 0x01785E00L, (-1L), 0x01785E00L, (-1L));
                    VECTOR(int32_t, 4) l_489 = (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x41FE6ABAL), 0x41FE6ABAL);
                    VECTOR(int32_t, 16) l_490 = (VECTOR(int32_t, 16))(0x7EDE6164L, (VECTOR(int32_t, 4))(0x7EDE6164L, (VECTOR(int32_t, 2))(0x7EDE6164L, (-1L)), (-1L)), (-1L), 0x7EDE6164L, (-1L), (VECTOR(int32_t, 2))(0x7EDE6164L, (-1L)), (VECTOR(int32_t, 2))(0x7EDE6164L, (-1L)), 0x7EDE6164L, (-1L), 0x7EDE6164L, (-1L));
                    VECTOR(int32_t, 2) l_491 = (VECTOR(int32_t, 2))(7L, 6L);
                    uint64_t l_492 = 1UL;
                    VECTOR(int32_t, 16) l_493 = (VECTOR(int32_t, 16))(0x6556B8DDL, (VECTOR(int32_t, 4))(0x6556B8DDL, (VECTOR(int32_t, 2))(0x6556B8DDL, 0x1158C8A3L), 0x1158C8A3L), 0x1158C8A3L, 0x6556B8DDL, 0x1158C8A3L, (VECTOR(int32_t, 2))(0x6556B8DDL, 0x1158C8A3L), (VECTOR(int32_t, 2))(0x6556B8DDL, 0x1158C8A3L), 0x6556B8DDL, 0x1158C8A3L, 0x6556B8DDL, 0x1158C8A3L);
                    uint32_t l_494 = 0x88F64A4AL;
                    VECTOR(int32_t, 16) l_495 = (VECTOR(int32_t, 16))(0x68750B3DL, (VECTOR(int32_t, 4))(0x68750B3DL, (VECTOR(int32_t, 2))(0x68750B3DL, (-1L)), (-1L)), (-1L), 0x68750B3DL, (-1L), (VECTOR(int32_t, 2))(0x68750B3DL, (-1L)), (VECTOR(int32_t, 2))(0x68750B3DL, (-1L)), 0x68750B3DL, (-1L), 0x68750B3DL, (-1L));
                    VECTOR(int32_t, 8) l_496 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 5L), 5L), 5L, 1L, 5L);
                    VECTOR(int32_t, 8) l_497 = (VECTOR(int32_t, 8))(0x66FE7431L, (VECTOR(int32_t, 4))(0x66FE7431L, (VECTOR(int32_t, 2))(0x66FE7431L, 9L), 9L), 9L, 0x66FE7431L, 9L);
                    uint32_t l_498[4] = {0UL,0UL,0UL,0UL};
                    VECTOR(int32_t, 8) l_499 = (VECTOR(int32_t, 8))(0x2CB048DFL, (VECTOR(int32_t, 4))(0x2CB048DFL, (VECTOR(int32_t, 2))(0x2CB048DFL, 0L), 0L), 0L, 0x2CB048DFL, 0L);
                    int32_t l_500[4];
                    VECTOR(int32_t, 4) l_501 = (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 1L), 1L);
                    VECTOR(uint8_t, 16) l_502 = (VECTOR(uint8_t, 16))(0xB0L, (VECTOR(uint8_t, 4))(0xB0L, (VECTOR(uint8_t, 2))(0xB0L, 0x03L), 0x03L), 0x03L, 0xB0L, 0x03L, (VECTOR(uint8_t, 2))(0xB0L, 0x03L), (VECTOR(uint8_t, 2))(0xB0L, 0x03L), 0xB0L, 0x03L, 0xB0L, 0x03L);
                    uint64_t l_503 = 0x3C41C6A03658734CL;
                    VECTOR(int32_t, 8) l_504 = (VECTOR(int32_t, 8))(0x503FFE33L, (VECTOR(int32_t, 4))(0x503FFE33L, (VECTOR(int32_t, 2))(0x503FFE33L, (-9L)), (-9L)), (-9L), 0x503FFE33L, (-9L));
                    uint32_t l_505 = 0x1C34F5FCL;
                    VECTOR(int32_t, 16) l_506 = (VECTOR(int32_t, 16))(0x0C6F659CL, (VECTOR(int32_t, 4))(0x0C6F659CL, (VECTOR(int32_t, 2))(0x0C6F659CL, 0x55D13CACL), 0x55D13CACL), 0x55D13CACL, 0x0C6F659CL, 0x55D13CACL, (VECTOR(int32_t, 2))(0x0C6F659CL, 0x55D13CACL), (VECTOR(int32_t, 2))(0x0C6F659CL, 0x55D13CACL), 0x0C6F659CL, 0x55D13CACL, 0x0C6F659CL, 0x55D13CACL);
                    VECTOR(int32_t, 2) l_507 = (VECTOR(int32_t, 2))(1L, 0x3B78732AL);
                    int32_t l_508 = 0x503FE365L;
                    int64_t l_509[6];
                    VECTOR(int32_t, 16) l_510 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x61CFE587L), 0x61CFE587L), 0x61CFE587L, 0L, 0x61CFE587L, (VECTOR(int32_t, 2))(0L, 0x61CFE587L), (VECTOR(int32_t, 2))(0L, 0x61CFE587L), 0L, 0x61CFE587L, 0L, 0x61CFE587L);
                    uint8_t l_511 = 0x64L;
                    uint16_t l_512[1];
                    int8_t l_513 = 1L;
                    int8_t l_514[6] = {(-3L),(-1L),(-3L),(-3L),(-1L),(-3L)};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 5; k++)
                                l_475[i][j][k] = &l_476;
                        }
                    }
                    for (i = 0; i < 4; i++)
                        l_500[i] = (-9L);
                    for (i = 0; i < 6; i++)
                        l_509[i] = 0x39043DB5D53C9815L;
                    for (i = 0; i < 1; i++)
                        l_512[i] = 0x4201L;
                    l_478 = (l_477 = l_475[0][0][2]);
                    (*l_478) = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_479.yy)).yxxxyyyx)).s0055064212001701)).hi, ((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 2))(0x55440D90L, 0L)).xxyxxyxyyyxyxxyx, ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(l_480.yyyxxxyxxxyyyyxx)).s00, ((VECTOR(int32_t, 2))(0x6E5616F7L, 1L))))).xyxy, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_481.s42601227)).s11)).yxxx))).hi, ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 4))(l_482.s2112)).zxywxzyz))), ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 8))(l_483.s0c82ae2a)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_484.s0722)), ((l_485 , l_486) , l_487), 0x04CB71A1L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_488.scde192ad359da6b7)).lo)).s7, ((VECTOR(int32_t, 8))(l_489.zxwzzyzw)), 0x77C3C4E6L)).s98, (int32_t)((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_490.sd80c914b)).s24)).odd))), 0L, (-9L))).zwyzxyyx)))))).s02))).yyxxyxxy, ((VECTOR(int32_t, 2))(0L, 0x3F5D643FL)).xyxyyxyx))).s4675373276400026))).s7117)).wyywwzwzxxyzyzxz, ((VECTOR(int32_t, 4))((l_469.sf = ((VECTOR(int32_t, 8))(l_491.xxyxxyyx)).s5), (((VECTOR(int32_t, 2))(0L, 0x7F940C8FL)).hi , l_492), (-1L), (-10L))).wzwwxxzzwwxyzwxx))).odd))).s02)), (-1L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-7L), 0x6B1C2A43L)).odd, (-7L), (-6L), (-1L))), 0x53CC0506L)).s3;
                    l_474.s3 = ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(6L, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_493.s2536c5f6)).s6017515744315443)).s4e, ((VECTOR(int32_t, 8))(l_494, ((VECTOR(int32_t, 2))(l_495.s6c)), ((VECTOR(int32_t, 4))(l_496.s7070)), (-1L))).s75))), 0x43E60566L)), 0x14CC149AL, 3L, (((VECTOR(int32_t, 8))(9L, 0x5C5D4467L, 0x2667277AL, ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(l_497.s64)), ((VECTOR(int32_t, 2))((-1L), 0x7F2E497CL)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_498[1], (-6L), ((VECTOR(int32_t, 2))(l_499.s73)), 0x3BD3AAB3L, l_500[3], ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(l_501.yy)).xxxx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 16))((((VECTOR(uint8_t, 4))(l_502.s0f87)).z , l_503), ((VECTOR(int32_t, 16))(l_504.s7322415030717226)).sc, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(0L, l_505, 0x701A904EL, 5L)))), 0L, ((VECTOR(int32_t, 2))(l_506.s38)), ((VECTOR(int32_t, 8))(l_507.xxxyyxxy)).s5, 0x4228BDBAL, l_508, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(0x63F2E87FL, l_509[5], ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 8))(l_510.sbada4dbc)).s5365252046162206))).s74)), (l_469.sb = l_511), ((VECTOR(int32_t, 4))(6L)), 0x120353F7L, ((VECTOR(int32_t, 2))(0x18A7C6BFL)), (-4L), ((VECTOR(int32_t, 2))(0x27309363L)), 1L)).s8b)), ((VECTOR(int32_t, 2))(0L))))))))), (-1L), 0x1930F35EL)).s84a4, ((VECTOR(int32_t, 4))(0x099E1704L))))), 1L, 7L, 0x6A284253L, 3L)).hi, ((VECTOR(int32_t, 4))((-1L)))))), ((VECTOR(int32_t, 4))(0L)), 0x56C40414L, (-1L))).se7)), ((VECTOR(int32_t, 2))(6L))))).yyxy)).lo))), ((VECTOR(int32_t, 2))(0x5AE07524L)), (-4L))).s6 , l_512[0]), (-1L), 0x6163C297L, 0x6A418F1DL, l_513, 0x53FA878EL, ((VECTOR(int32_t, 2))(0x56D4231FL)), 0x5A96E44AL, 1L)), ((VECTOR(int32_t, 16))(0x6571CB56L))))).sb9, (int32_t)1L, (int32_t)l_514[0]))).even;
                }
                else
                { /* block id: 266 */
                    int8_t l_515 = 0x4FL;
                    l_469.sc = (-8L);
                    if (l_515)
                    { /* block id: 268 */
                        uint8_t l_516 = 250UL;
                        int32_t l_518 = 0L;
                        int32_t *l_517 = &l_518;
                        int32_t *l_519 = (void*)0;
                        uint32_t l_520 = 2UL;
                        uint16_t l_521 = 0UL;
                        int32_t l_522 = 1L;
                        l_519 = (l_516 , l_517);
                        l_472 ^= (l_469.sf = ((l_521 = l_520) , l_522));
                    }
                    else
                    { /* block id: 273 */
                        VECTOR(int32_t, 4) l_523 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x0F548CFEL), 0x0F548CFEL);
                        int i;
                        l_469.s1 ^= ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x17B869FEL, (-3L))).yxxyyxyxyyyxxxyx)).odd, ((VECTOR(int32_t, 8))(l_523.zyzxyzww))))).s2;
                    }
                }
                l_524 = (void*)0;
                l_528++;
                l_532 = l_531;
                unsigned int result = 0;
                result += l_469.sf;
                result += l_469.se;
                result += l_469.sd;
                result += l_469.sc;
                result += l_469.sb;
                result += l_469.sa;
                result += l_469.s9;
                result += l_469.s8;
                result += l_469.s7;
                result += l_469.s6;
                result += l_469.s5;
                result += l_469.s4;
                result += l_469.s3;
                result += l_469.s2;
                result += l_469.s1;
                result += l_469.s0;
                result += l_470;
                result += l_471.y;
                result += l_471.x;
                result += l_472;
                int l_473_i0;
                for (l_473_i0 = 0; l_473_i0 < 2; l_473_i0++) {
                    result += l_473[l_473_i0];
                }
                result += l_474.s7;
                result += l_474.s6;
                result += l_474.s5;
                result += l_474.s4;
                result += l_474.s3;
                result += l_474.s2;
                result += l_474.s1;
                result += l_474.s0;
                result += l_526;
                result += l_527;
                result += l_528;
                result += l_531;
                result += l_532;
                atomic_add(&p_1551->l_special_values[10], result);
            }
            else
            { /* block id: 280 */
                (1 + 1);
            }
        }
        (*l_340) = l_449.z;
    }
    else
    { /* block id: 285 */
        int32_t *l_534 = (void*)0;
        int32_t *l_535 = &p_1551->g_8;
        int32_t *l_536 = (void*)0;
        int32_t l_537 = 0x6EC281CBL;
        int32_t l_538 = 7L;
        int32_t l_539 = 0x55E0D183L;
        int32_t *l_540 = &l_537;
        int32_t *l_541 = (void*)0;
        int32_t *l_542 = (void*)0;
        int32_t *l_543 = &p_1551->g_13;
        int32_t *l_544 = (void*)0;
        int32_t *l_545 = &p_1551->g_8;
        int32_t *l_546 = &l_538;
        int32_t *l_547 = (void*)0;
        int32_t *l_548[7];
        int32_t l_549 = 1L;
        uint16_t l_556 = 0x89C1L;
        int i;
        for (i = 0; i < 7; i++)
            l_548[i] = (void*)0;
        (*l_340) ^= ((VECTOR(int32_t, 2))(p_1551->g_533.xz)).hi;
        --l_556;
    }
    return (*p_272);
}


/* ------------------------------------------ */
/* 
 * reads : p_1551->g_13
 * writes: p_1551->g_13
 */
int32_t  func_274(int32_t ** p_275, struct S0 * p_1551)
{ /* block id: 169 */
    int16_t l_278[10][7] = {{0x5BA5L,0x04E8L,0x6DCDL,0x70BEL,1L,0L,0x5BA5L},{0x5BA5L,0x04E8L,0x6DCDL,0x70BEL,1L,0L,0x5BA5L},{0x5BA5L,0x04E8L,0x6DCDL,0x70BEL,1L,0L,0x5BA5L},{0x5BA5L,0x04E8L,0x6DCDL,0x70BEL,1L,0L,0x5BA5L},{0x5BA5L,0x04E8L,0x6DCDL,0x70BEL,1L,0L,0x5BA5L},{0x5BA5L,0x04E8L,0x6DCDL,0x70BEL,1L,0L,0x5BA5L},{0x5BA5L,0x04E8L,0x6DCDL,0x70BEL,1L,0L,0x5BA5L},{0x5BA5L,0x04E8L,0x6DCDL,0x70BEL,1L,0L,0x5BA5L},{0x5BA5L,0x04E8L,0x6DCDL,0x70BEL,1L,0L,0x5BA5L},{0x5BA5L,0x04E8L,0x6DCDL,0x70BEL,1L,0L,0x5BA5L}};
    int i, j;
    (**p_275) &= l_278[2][4];
    return l_278[2][4];
}


/* ------------------------------------------ */
/* 
 * reads : p_1551->g_5
 * writes: p_1551->g_13 p_1551->g_8
 */
int32_t ** func_279(int32_t ** p_280, uint8_t  p_281, int16_t  p_282, int32_t * p_283, struct S0 * p_1551)
{ /* block id: 173 */
    int32_t **l_289 = (void*)0;
    (*p_283) = p_1551->g_5;
    return l_289;
}


/* ------------------------------------------ */
/* 
 * reads : p_1551->g_308 p_1551->g_309 p_1551->g_310 p_1551->g_316 p_1551->g_8 p_1551->g_comm_values p_1551->g_337
 * writes: p_1551->g_312 p_1551->g_316 p_1551->g_288 p_1551->g_310 p_1551->g_337
 */
int32_t * func_301(int64_t  p_302, int8_t  p_303, int8_t  p_304, int32_t ** p_305, int32_t  p_306, struct S0 * p_1551)
{ /* block id: 178 */
    int32_t ***l_311 = &p_1551->g_309;
    int32_t ***l_313[3];
    int i;
    for (i = 0; i < 3; i++)
        l_313[i] = &p_1551->g_309;
    if ((p_1551->g_308 == (FAKE_DIVERGE(p_1551->local_0_offset, get_local_id(0), 10) , (l_313[1] = (p_1551->g_312 = l_311)))))
    { /* block id: 181 */
        int32_t *l_314 = &p_1551->g_13;
        int32_t l_315 = 0x2DCCEB26L;
        int16_t *l_329 = &p_1551->g_288;
        l_314 = (*p_1551->g_309);
        ++p_1551->g_316;
        l_315 = (safe_mul_func_uint8_t_u_u(250UL, ((safe_mul_func_int8_t_s_s(p_303, p_304)) ^ ((((&l_315 != (**p_1551->g_308)) != ((p_1551->g_316 & p_1551->g_8) && (safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((*l_329) = p_1551->g_comm_values[p_1551->tid]), (safe_mod_func_int64_t_s_s(p_304, 18446744073709551615UL)))), p_306)))) , p_303) >= p_304))));
    }
    else
    { /* block id: 186 */
        int32_t *l_332[4];
        int i;
        for (i = 0; i < 4; i++)
            l_332[i] = &p_1551->g_13;
        (**l_311) = l_332[2];
        p_1551->g_337++;
    }
    return (**p_1551->g_308);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[30];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 30; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[30];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 30; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[3];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 3; i++)
            l_comm_values[i] = 1;
    struct S0 c_1552;
    struct S0* p_1551 = &c_1552;
    struct S0 c_1553 = {
        0x4506D444L, // p_1551->g_2
        0x3D7B1C2AL, // p_1551->g_3
        0x48A6B950L, // p_1551->g_4
        0x3F2B2994L, // p_1551->g_5
        0L, // p_1551->g_8
        0L, // p_1551->g_13
        &p_1551->g_13, // p_1551->g_250
        &p_1551->g_250, // p_1551->g_249
        (VECTOR(uint64_t, 2))(0xDA0C82F176727871L, 0x5A0B546C53810D45L), // p_1551->g_251
        0x3887L, // p_1551->g_288
        (void*)0, // p_1551->g_310
        &p_1551->g_310, // p_1551->g_309
        &p_1551->g_309, // p_1551->g_308
        &p_1551->g_309, // p_1551->g_312
        18446744073709551613UL, // p_1551->g_316
        (-7L), // p_1551->g_333
        0L, // p_1551->g_334
        {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}, // p_1551->g_335
        (-1L), // p_1551->g_336
        0x12C4E2E2L, // p_1551->g_337
        246UL, // p_1551->g_342
        1UL, // p_1551->g_433
        (VECTOR(int64_t, 2))((-1L), 1L), // p_1551->g_454
        0x3BB3L, // p_1551->g_459
        (VECTOR(int32_t, 4))(0x10321D70L, (VECTOR(int32_t, 2))(0x10321D70L, 0x31E72B01L), 0x31E72B01L), // p_1551->g_533
        0x2521L, // p_1551->g_553
        (VECTOR(uint64_t, 2))(2UL, 0x947BD34C8260AB8AL), // p_1551->g_561
        (void*)0, // p_1551->g_609
        &p_1551->g_609, // p_1551->g_608
        &p_1551->g_608, // p_1551->g_607
        0x1F1CL, // p_1551->g_622
        {&p_1551->g_622}, // p_1551->g_621
        {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}, // p_1551->g_634
        &p_1551->g_634[1][1], // p_1551->g_633
        &p_1551->g_634[1][1], // p_1551->g_637
        (VECTOR(uint16_t, 2))(0x6EBFL, 65530UL), // p_1551->g_655
        (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 255UL), 255UL), // p_1551->g_656
        (VECTOR(int32_t, 16))(0x1B4A4F1BL, (VECTOR(int32_t, 4))(0x1B4A4F1BL, (VECTOR(int32_t, 2))(0x1B4A4F1BL, (-10L)), (-10L)), (-10L), 0x1B4A4F1BL, (-10L), (VECTOR(int32_t, 2))(0x1B4A4F1BL, (-10L)), (VECTOR(int32_t, 2))(0x1B4A4F1BL, (-10L)), 0x1B4A4F1BL, (-10L), 0x1B4A4F1BL, (-10L)), // p_1551->g_681
        (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, (-1L)), (-1L)), // p_1551->g_700
        (VECTOR(int32_t, 16))(0x668E409CL, (VECTOR(int32_t, 4))(0x668E409CL, (VECTOR(int32_t, 2))(0x668E409CL, 0x009B2262L), 0x009B2262L), 0x009B2262L, 0x668E409CL, 0x009B2262L, (VECTOR(int32_t, 2))(0x668E409CL, 0x009B2262L), (VECTOR(int32_t, 2))(0x668E409CL, 0x009B2262L), 0x668E409CL, 0x009B2262L, 0x668E409CL, 0x009B2262L), // p_1551->g_704
        (VECTOR(uint32_t, 8))(0x16AEEF8DL, (VECTOR(uint32_t, 4))(0x16AEEF8DL, (VECTOR(uint32_t, 2))(0x16AEEF8DL, 4294967286UL), 4294967286UL), 4294967286UL, 0x16AEEF8DL, 4294967286UL), // p_1551->g_739
        (VECTOR(int64_t, 16))(0x0E08F7AB0BE9ED51L, (VECTOR(int64_t, 4))(0x0E08F7AB0BE9ED51L, (VECTOR(int64_t, 2))(0x0E08F7AB0BE9ED51L, 0L), 0L), 0L, 0x0E08F7AB0BE9ED51L, 0L, (VECTOR(int64_t, 2))(0x0E08F7AB0BE9ED51L, 0L), (VECTOR(int64_t, 2))(0x0E08F7AB0BE9ED51L, 0L), 0x0E08F7AB0BE9ED51L, 0L, 0x0E08F7AB0BE9ED51L, 0L), // p_1551->g_740
        (VECTOR(uint8_t, 2))(0x38L, 1UL), // p_1551->g_790
        (VECTOR(uint16_t, 8))(0x2389L, (VECTOR(uint16_t, 4))(0x2389L, (VECTOR(uint16_t, 2))(0x2389L, 0x8D10L), 0x8D10L), 0x8D10L, 0x2389L, 0x8D10L), // p_1551->g_798
        (VECTOR(int16_t, 8))(0x46B4L, (VECTOR(int16_t, 4))(0x46B4L, (VECTOR(int16_t, 2))(0x46B4L, (-1L)), (-1L)), (-1L), 0x46B4L, (-1L)), // p_1551->g_813
        (VECTOR(int16_t, 2))(0x7E26L, 1L), // p_1551->g_814
        (VECTOR(int16_t, 4))(0x0027L, (VECTOR(int16_t, 2))(0x0027L, 1L), 1L), // p_1551->g_816
        (VECTOR(int16_t, 2))((-1L), 0x1AF5L), // p_1551->g_818
        (VECTOR(int8_t, 8))(2L, (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, 0L), 0L), 0L, 2L, 0L), // p_1551->g_839
        (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x22A3L), 0x22A3L), // p_1551->g_876
        (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x39L), 0x39L), 0x39L, (-1L), 0x39L, (VECTOR(int8_t, 2))((-1L), 0x39L), (VECTOR(int8_t, 2))((-1L), 0x39L), (-1L), 0x39L, (-1L), 0x39L), // p_1551->g_877
        (VECTOR(int32_t, 16))(0x37BCA3C8L, (VECTOR(int32_t, 4))(0x37BCA3C8L, (VECTOR(int32_t, 2))(0x37BCA3C8L, 3L), 3L), 3L, 0x37BCA3C8L, 3L, (VECTOR(int32_t, 2))(0x37BCA3C8L, 3L), (VECTOR(int32_t, 2))(0x37BCA3C8L, 3L), 0x37BCA3C8L, 3L, 0x37BCA3C8L, 3L), // p_1551->g_911
        8L, // p_1551->g_917
        18446744073709551615UL, // p_1551->g_929
        (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0UL), 0UL), 0UL, 65535UL, 0UL), // p_1551->g_934
        1L, // p_1551->g_974
        (VECTOR(uint8_t, 2))(255UL, 248UL), // p_1551->g_979
        (VECTOR(uint64_t, 2))(0xD8BC7DA92F487D8DL, 0xF1C4BF9E88CB4457L), // p_1551->g_983
        (VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL), // p_1551->g_985
        (VECTOR(int16_t, 16))(0x3F25L, (VECTOR(int16_t, 4))(0x3F25L, (VECTOR(int16_t, 2))(0x3F25L, 1L), 1L), 1L, 0x3F25L, 1L, (VECTOR(int16_t, 2))(0x3F25L, 1L), (VECTOR(int16_t, 2))(0x3F25L, 1L), 0x3F25L, 1L, 0x3F25L, 1L), // p_1551->g_1013
        (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551609UL), 18446744073709551609UL), 18446744073709551609UL, 1UL, 18446744073709551609UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551609UL), (VECTOR(uint64_t, 2))(1UL, 18446744073709551609UL), 1UL, 18446744073709551609UL, 1UL, 18446744073709551609UL), // p_1551->g_1036
        (VECTOR(uint64_t, 8))(18446744073709551611UL, (VECTOR(uint64_t, 4))(18446744073709551611UL, (VECTOR(uint64_t, 2))(18446744073709551611UL, 0xA666205B97208F00L), 0xA666205B97208F00L), 0xA666205B97208F00L, 18446744073709551611UL, 0xA666205B97208F00L), // p_1551->g_1037
        &p_1551->g_336, // p_1551->g_1047
        (VECTOR(int32_t, 8))(0x4D0F80E0L, (VECTOR(int32_t, 4))(0x4D0F80E0L, (VECTOR(int32_t, 2))(0x4D0F80E0L, 0L), 0L), 0L, 0x4D0F80E0L, 0L), // p_1551->g_1052
        (VECTOR(int32_t, 16))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), (-1L)), (-1L)), (-1L), (-8L), (-1L), (VECTOR(int32_t, 2))((-8L), (-1L)), (VECTOR(int32_t, 2))((-8L), (-1L)), (-8L), (-1L), (-8L), (-1L)), // p_1551->g_1053
        (VECTOR(int16_t, 4))(0x2B8EL, (VECTOR(int16_t, 2))(0x2B8EL, 0x0377L), 0x0377L), // p_1551->g_1121
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1551->g_1147
        &p_1551->g_1147[3], // p_1551->g_1146
        (VECTOR(int16_t, 16))(0x7DAAL, (VECTOR(int16_t, 4))(0x7DAAL, (VECTOR(int16_t, 2))(0x7DAAL, 0x7DFAL), 0x7DFAL), 0x7DFAL, 0x7DAAL, 0x7DFAL, (VECTOR(int16_t, 2))(0x7DAAL, 0x7DFAL), (VECTOR(int16_t, 2))(0x7DAAL, 0x7DFAL), 0x7DAAL, 0x7DFAL, 0x7DAAL, 0x7DFAL), // p_1551->g_1151
        (VECTOR(int8_t, 8))(0x69L, (VECTOR(int8_t, 4))(0x69L, (VECTOR(int8_t, 2))(0x69L, 2L), 2L), 2L, 0x69L, 2L), // p_1551->g_1152
        0L, // p_1551->g_1157
        1UL, // p_1551->g_1160
        {{{0xDF458142L,0xCEEBCD24L,4294967290UL,0xCE885422L,0xEE0528EBL,0xDF458142L},{0xDF458142L,0xCEEBCD24L,4294967290UL,0xCE885422L,0xEE0528EBL,0xDF458142L},{0xDF458142L,0xCEEBCD24L,4294967290UL,0xCE885422L,0xEE0528EBL,0xDF458142L},{0xDF458142L,0xCEEBCD24L,4294967290UL,0xCE885422L,0xEE0528EBL,0xDF458142L}},{{0xDF458142L,0xCEEBCD24L,4294967290UL,0xCE885422L,0xEE0528EBL,0xDF458142L},{0xDF458142L,0xCEEBCD24L,4294967290UL,0xCE885422L,0xEE0528EBL,0xDF458142L},{0xDF458142L,0xCEEBCD24L,4294967290UL,0xCE885422L,0xEE0528EBL,0xDF458142L},{0xDF458142L,0xCEEBCD24L,4294967290UL,0xCE885422L,0xEE0528EBL,0xDF458142L}}}, // p_1551->g_1216
        (void*)0, // p_1551->g_1219
        {{{(-1L),(-6L),0x3D7473AAL,0x50DE0F96L,0x23710BFBL,0x1BD2C274L,0L,(-8L),0L,0x1BD2C274L},{(-1L),(-6L),0x3D7473AAL,0x50DE0F96L,0x23710BFBL,0x1BD2C274L,0L,(-8L),0L,0x1BD2C274L}},{{(-1L),(-6L),0x3D7473AAL,0x50DE0F96L,0x23710BFBL,0x1BD2C274L,0L,(-8L),0L,0x1BD2C274L},{(-1L),(-6L),0x3D7473AAL,0x50DE0F96L,0x23710BFBL,0x1BD2C274L,0L,(-8L),0L,0x1BD2C274L}},{{(-1L),(-6L),0x3D7473AAL,0x50DE0F96L,0x23710BFBL,0x1BD2C274L,0L,(-8L),0L,0x1BD2C274L},{(-1L),(-6L),0x3D7473AAL,0x50DE0F96L,0x23710BFBL,0x1BD2C274L,0L,(-8L),0L,0x1BD2C274L}},{{(-1L),(-6L),0x3D7473AAL,0x50DE0F96L,0x23710BFBL,0x1BD2C274L,0L,(-8L),0L,0x1BD2C274L},{(-1L),(-6L),0x3D7473AAL,0x50DE0F96L,0x23710BFBL,0x1BD2C274L,0L,(-8L),0L,0x1BD2C274L}}}, // p_1551->g_1237
        (VECTOR(int16_t, 16))(0x75E7L, (VECTOR(int16_t, 4))(0x75E7L, (VECTOR(int16_t, 2))(0x75E7L, 0x6662L), 0x6662L), 0x6662L, 0x75E7L, 0x6662L, (VECTOR(int16_t, 2))(0x75E7L, 0x6662L), (VECTOR(int16_t, 2))(0x75E7L, 0x6662L), 0x75E7L, 0x6662L, 0x75E7L, 0x6662L), // p_1551->g_1352
        &p_1551->g_433, // p_1551->g_1360
        (VECTOR(int64_t, 4))(0x612A1ADB8852EFDDL, (VECTOR(int64_t, 2))(0x612A1ADB8852EFDDL, 0x4453568411288E6EL), 0x4453568411288E6EL), // p_1551->g_1366
        (VECTOR(int64_t, 16))(0x4F0DB9A152E881B8L, (VECTOR(int64_t, 4))(0x4F0DB9A152E881B8L, (VECTOR(int64_t, 2))(0x4F0DB9A152E881B8L, 0x70B329B6F966D456L), 0x70B329B6F966D456L), 0x70B329B6F966D456L, 0x4F0DB9A152E881B8L, 0x70B329B6F966D456L, (VECTOR(int64_t, 2))(0x4F0DB9A152E881B8L, 0x70B329B6F966D456L), (VECTOR(int64_t, 2))(0x4F0DB9A152E881B8L, 0x70B329B6F966D456L), 0x4F0DB9A152E881B8L, 0x70B329B6F966D456L, 0x4F0DB9A152E881B8L, 0x70B329B6F966D456L), // p_1551->g_1367
        (VECTOR(int64_t, 8))(8L, (VECTOR(int64_t, 4))(8L, (VECTOR(int64_t, 2))(8L, 4L), 4L), 4L, 8L, 4L), // p_1551->g_1368
        (void*)0, // p_1551->g_1390
        (VECTOR(int8_t, 16))(0x24L, (VECTOR(int8_t, 4))(0x24L, (VECTOR(int8_t, 2))(0x24L, (-6L)), (-6L)), (-6L), 0x24L, (-6L), (VECTOR(int8_t, 2))(0x24L, (-6L)), (VECTOR(int8_t, 2))(0x24L, (-6L)), 0x24L, (-6L), 0x24L, (-6L)), // p_1551->g_1391
        (VECTOR(uint8_t, 4))(7UL, (VECTOR(uint8_t, 2))(7UL, 249UL), 249UL), // p_1551->g_1411
        (VECTOR(uint8_t, 2))(0xFBL, 1UL), // p_1551->g_1462
        (VECTOR(int8_t, 2))(0x01L, (-8L)), // p_1551->g_1519
        (VECTOR(int8_t, 8))(0x26L, (VECTOR(int8_t, 4))(0x26L, (VECTOR(int8_t, 2))(0x26L, 1L), 1L), 1L, 0x26L, 1L), // p_1551->g_1520
        (VECTOR(int8_t, 16))(0x47L, (VECTOR(int8_t, 4))(0x47L, (VECTOR(int8_t, 2))(0x47L, 0x0BL), 0x0BL), 0x0BL, 0x47L, 0x0BL, (VECTOR(int8_t, 2))(0x47L, 0x0BL), (VECTOR(int8_t, 2))(0x47L, 0x0BL), 0x47L, 0x0BL, 0x47L, 0x0BL), // p_1551->g_1523
        (-8L), // p_1551->g_1536
        0x8F56DF52L, // p_1551->g_1539
        0, // p_1551->v_collective
        sequence_input[get_global_id(0)], // p_1551->global_0_offset
        sequence_input[get_global_id(1)], // p_1551->global_1_offset
        sequence_input[get_global_id(2)], // p_1551->global_2_offset
        sequence_input[get_local_id(0)], // p_1551->local_0_offset
        sequence_input[get_local_id(1)], // p_1551->local_1_offset
        sequence_input[get_local_id(2)], // p_1551->local_2_offset
        sequence_input[get_group_id(0)], // p_1551->group_0_offset
        sequence_input[get_group_id(1)], // p_1551->group_1_offset
        sequence_input[get_group_id(2)], // p_1551->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 3)), permutations[0][get_linear_local_id()])), // p_1551->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1552 = c_1553;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1551);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1551->g_2, "p_1551->g_2", print_hash_value);
    transparent_crc(p_1551->g_3, "p_1551->g_3", print_hash_value);
    transparent_crc(p_1551->g_4, "p_1551->g_4", print_hash_value);
    transparent_crc(p_1551->g_5, "p_1551->g_5", print_hash_value);
    transparent_crc(p_1551->g_8, "p_1551->g_8", print_hash_value);
    transparent_crc(p_1551->g_13, "p_1551->g_13", print_hash_value);
    transparent_crc(p_1551->g_251.x, "p_1551->g_251.x", print_hash_value);
    transparent_crc(p_1551->g_251.y, "p_1551->g_251.y", print_hash_value);
    transparent_crc(p_1551->g_288, "p_1551->g_288", print_hash_value);
    transparent_crc(p_1551->g_316, "p_1551->g_316", print_hash_value);
    transparent_crc(p_1551->g_333, "p_1551->g_333", print_hash_value);
    transparent_crc(p_1551->g_334, "p_1551->g_334", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1551->g_335[i], "p_1551->g_335[i]", print_hash_value);

    }
    transparent_crc(p_1551->g_336, "p_1551->g_336", print_hash_value);
    transparent_crc(p_1551->g_337, "p_1551->g_337", print_hash_value);
    transparent_crc(p_1551->g_342, "p_1551->g_342", print_hash_value);
    transparent_crc(p_1551->g_433, "p_1551->g_433", print_hash_value);
    transparent_crc(p_1551->g_454.x, "p_1551->g_454.x", print_hash_value);
    transparent_crc(p_1551->g_454.y, "p_1551->g_454.y", print_hash_value);
    transparent_crc(p_1551->g_459, "p_1551->g_459", print_hash_value);
    transparent_crc(p_1551->g_533.x, "p_1551->g_533.x", print_hash_value);
    transparent_crc(p_1551->g_533.y, "p_1551->g_533.y", print_hash_value);
    transparent_crc(p_1551->g_533.z, "p_1551->g_533.z", print_hash_value);
    transparent_crc(p_1551->g_533.w, "p_1551->g_533.w", print_hash_value);
    transparent_crc(p_1551->g_553, "p_1551->g_553", print_hash_value);
    transparent_crc(p_1551->g_561.x, "p_1551->g_561.x", print_hash_value);
    transparent_crc(p_1551->g_561.y, "p_1551->g_561.y", print_hash_value);
    transparent_crc(p_1551->g_622, "p_1551->g_622", print_hash_value);
    transparent_crc(p_1551->g_655.x, "p_1551->g_655.x", print_hash_value);
    transparent_crc(p_1551->g_655.y, "p_1551->g_655.y", print_hash_value);
    transparent_crc(p_1551->g_656.x, "p_1551->g_656.x", print_hash_value);
    transparent_crc(p_1551->g_656.y, "p_1551->g_656.y", print_hash_value);
    transparent_crc(p_1551->g_656.z, "p_1551->g_656.z", print_hash_value);
    transparent_crc(p_1551->g_656.w, "p_1551->g_656.w", print_hash_value);
    transparent_crc(p_1551->g_681.s0, "p_1551->g_681.s0", print_hash_value);
    transparent_crc(p_1551->g_681.s1, "p_1551->g_681.s1", print_hash_value);
    transparent_crc(p_1551->g_681.s2, "p_1551->g_681.s2", print_hash_value);
    transparent_crc(p_1551->g_681.s3, "p_1551->g_681.s3", print_hash_value);
    transparent_crc(p_1551->g_681.s4, "p_1551->g_681.s4", print_hash_value);
    transparent_crc(p_1551->g_681.s5, "p_1551->g_681.s5", print_hash_value);
    transparent_crc(p_1551->g_681.s6, "p_1551->g_681.s6", print_hash_value);
    transparent_crc(p_1551->g_681.s7, "p_1551->g_681.s7", print_hash_value);
    transparent_crc(p_1551->g_681.s8, "p_1551->g_681.s8", print_hash_value);
    transparent_crc(p_1551->g_681.s9, "p_1551->g_681.s9", print_hash_value);
    transparent_crc(p_1551->g_681.sa, "p_1551->g_681.sa", print_hash_value);
    transparent_crc(p_1551->g_681.sb, "p_1551->g_681.sb", print_hash_value);
    transparent_crc(p_1551->g_681.sc, "p_1551->g_681.sc", print_hash_value);
    transparent_crc(p_1551->g_681.sd, "p_1551->g_681.sd", print_hash_value);
    transparent_crc(p_1551->g_681.se, "p_1551->g_681.se", print_hash_value);
    transparent_crc(p_1551->g_681.sf, "p_1551->g_681.sf", print_hash_value);
    transparent_crc(p_1551->g_700.x, "p_1551->g_700.x", print_hash_value);
    transparent_crc(p_1551->g_700.y, "p_1551->g_700.y", print_hash_value);
    transparent_crc(p_1551->g_700.z, "p_1551->g_700.z", print_hash_value);
    transparent_crc(p_1551->g_700.w, "p_1551->g_700.w", print_hash_value);
    transparent_crc(p_1551->g_704.s0, "p_1551->g_704.s0", print_hash_value);
    transparent_crc(p_1551->g_704.s1, "p_1551->g_704.s1", print_hash_value);
    transparent_crc(p_1551->g_704.s2, "p_1551->g_704.s2", print_hash_value);
    transparent_crc(p_1551->g_704.s3, "p_1551->g_704.s3", print_hash_value);
    transparent_crc(p_1551->g_704.s4, "p_1551->g_704.s4", print_hash_value);
    transparent_crc(p_1551->g_704.s5, "p_1551->g_704.s5", print_hash_value);
    transparent_crc(p_1551->g_704.s6, "p_1551->g_704.s6", print_hash_value);
    transparent_crc(p_1551->g_704.s7, "p_1551->g_704.s7", print_hash_value);
    transparent_crc(p_1551->g_704.s8, "p_1551->g_704.s8", print_hash_value);
    transparent_crc(p_1551->g_704.s9, "p_1551->g_704.s9", print_hash_value);
    transparent_crc(p_1551->g_704.sa, "p_1551->g_704.sa", print_hash_value);
    transparent_crc(p_1551->g_704.sb, "p_1551->g_704.sb", print_hash_value);
    transparent_crc(p_1551->g_704.sc, "p_1551->g_704.sc", print_hash_value);
    transparent_crc(p_1551->g_704.sd, "p_1551->g_704.sd", print_hash_value);
    transparent_crc(p_1551->g_704.se, "p_1551->g_704.se", print_hash_value);
    transparent_crc(p_1551->g_704.sf, "p_1551->g_704.sf", print_hash_value);
    transparent_crc(p_1551->g_739.s0, "p_1551->g_739.s0", print_hash_value);
    transparent_crc(p_1551->g_739.s1, "p_1551->g_739.s1", print_hash_value);
    transparent_crc(p_1551->g_739.s2, "p_1551->g_739.s2", print_hash_value);
    transparent_crc(p_1551->g_739.s3, "p_1551->g_739.s3", print_hash_value);
    transparent_crc(p_1551->g_739.s4, "p_1551->g_739.s4", print_hash_value);
    transparent_crc(p_1551->g_739.s5, "p_1551->g_739.s5", print_hash_value);
    transparent_crc(p_1551->g_739.s6, "p_1551->g_739.s6", print_hash_value);
    transparent_crc(p_1551->g_739.s7, "p_1551->g_739.s7", print_hash_value);
    transparent_crc(p_1551->g_740.s0, "p_1551->g_740.s0", print_hash_value);
    transparent_crc(p_1551->g_740.s1, "p_1551->g_740.s1", print_hash_value);
    transparent_crc(p_1551->g_740.s2, "p_1551->g_740.s2", print_hash_value);
    transparent_crc(p_1551->g_740.s3, "p_1551->g_740.s3", print_hash_value);
    transparent_crc(p_1551->g_740.s4, "p_1551->g_740.s4", print_hash_value);
    transparent_crc(p_1551->g_740.s5, "p_1551->g_740.s5", print_hash_value);
    transparent_crc(p_1551->g_740.s6, "p_1551->g_740.s6", print_hash_value);
    transparent_crc(p_1551->g_740.s7, "p_1551->g_740.s7", print_hash_value);
    transparent_crc(p_1551->g_740.s8, "p_1551->g_740.s8", print_hash_value);
    transparent_crc(p_1551->g_740.s9, "p_1551->g_740.s9", print_hash_value);
    transparent_crc(p_1551->g_740.sa, "p_1551->g_740.sa", print_hash_value);
    transparent_crc(p_1551->g_740.sb, "p_1551->g_740.sb", print_hash_value);
    transparent_crc(p_1551->g_740.sc, "p_1551->g_740.sc", print_hash_value);
    transparent_crc(p_1551->g_740.sd, "p_1551->g_740.sd", print_hash_value);
    transparent_crc(p_1551->g_740.se, "p_1551->g_740.se", print_hash_value);
    transparent_crc(p_1551->g_740.sf, "p_1551->g_740.sf", print_hash_value);
    transparent_crc(p_1551->g_790.x, "p_1551->g_790.x", print_hash_value);
    transparent_crc(p_1551->g_790.y, "p_1551->g_790.y", print_hash_value);
    transparent_crc(p_1551->g_798.s0, "p_1551->g_798.s0", print_hash_value);
    transparent_crc(p_1551->g_798.s1, "p_1551->g_798.s1", print_hash_value);
    transparent_crc(p_1551->g_798.s2, "p_1551->g_798.s2", print_hash_value);
    transparent_crc(p_1551->g_798.s3, "p_1551->g_798.s3", print_hash_value);
    transparent_crc(p_1551->g_798.s4, "p_1551->g_798.s4", print_hash_value);
    transparent_crc(p_1551->g_798.s5, "p_1551->g_798.s5", print_hash_value);
    transparent_crc(p_1551->g_798.s6, "p_1551->g_798.s6", print_hash_value);
    transparent_crc(p_1551->g_798.s7, "p_1551->g_798.s7", print_hash_value);
    transparent_crc(p_1551->g_813.s0, "p_1551->g_813.s0", print_hash_value);
    transparent_crc(p_1551->g_813.s1, "p_1551->g_813.s1", print_hash_value);
    transparent_crc(p_1551->g_813.s2, "p_1551->g_813.s2", print_hash_value);
    transparent_crc(p_1551->g_813.s3, "p_1551->g_813.s3", print_hash_value);
    transparent_crc(p_1551->g_813.s4, "p_1551->g_813.s4", print_hash_value);
    transparent_crc(p_1551->g_813.s5, "p_1551->g_813.s5", print_hash_value);
    transparent_crc(p_1551->g_813.s6, "p_1551->g_813.s6", print_hash_value);
    transparent_crc(p_1551->g_813.s7, "p_1551->g_813.s7", print_hash_value);
    transparent_crc(p_1551->g_814.x, "p_1551->g_814.x", print_hash_value);
    transparent_crc(p_1551->g_814.y, "p_1551->g_814.y", print_hash_value);
    transparent_crc(p_1551->g_816.x, "p_1551->g_816.x", print_hash_value);
    transparent_crc(p_1551->g_816.y, "p_1551->g_816.y", print_hash_value);
    transparent_crc(p_1551->g_816.z, "p_1551->g_816.z", print_hash_value);
    transparent_crc(p_1551->g_816.w, "p_1551->g_816.w", print_hash_value);
    transparent_crc(p_1551->g_818.x, "p_1551->g_818.x", print_hash_value);
    transparent_crc(p_1551->g_818.y, "p_1551->g_818.y", print_hash_value);
    transparent_crc(p_1551->g_839.s0, "p_1551->g_839.s0", print_hash_value);
    transparent_crc(p_1551->g_839.s1, "p_1551->g_839.s1", print_hash_value);
    transparent_crc(p_1551->g_839.s2, "p_1551->g_839.s2", print_hash_value);
    transparent_crc(p_1551->g_839.s3, "p_1551->g_839.s3", print_hash_value);
    transparent_crc(p_1551->g_839.s4, "p_1551->g_839.s4", print_hash_value);
    transparent_crc(p_1551->g_839.s5, "p_1551->g_839.s5", print_hash_value);
    transparent_crc(p_1551->g_839.s6, "p_1551->g_839.s6", print_hash_value);
    transparent_crc(p_1551->g_839.s7, "p_1551->g_839.s7", print_hash_value);
    transparent_crc(p_1551->g_876.x, "p_1551->g_876.x", print_hash_value);
    transparent_crc(p_1551->g_876.y, "p_1551->g_876.y", print_hash_value);
    transparent_crc(p_1551->g_876.z, "p_1551->g_876.z", print_hash_value);
    transparent_crc(p_1551->g_876.w, "p_1551->g_876.w", print_hash_value);
    transparent_crc(p_1551->g_877.s0, "p_1551->g_877.s0", print_hash_value);
    transparent_crc(p_1551->g_877.s1, "p_1551->g_877.s1", print_hash_value);
    transparent_crc(p_1551->g_877.s2, "p_1551->g_877.s2", print_hash_value);
    transparent_crc(p_1551->g_877.s3, "p_1551->g_877.s3", print_hash_value);
    transparent_crc(p_1551->g_877.s4, "p_1551->g_877.s4", print_hash_value);
    transparent_crc(p_1551->g_877.s5, "p_1551->g_877.s5", print_hash_value);
    transparent_crc(p_1551->g_877.s6, "p_1551->g_877.s6", print_hash_value);
    transparent_crc(p_1551->g_877.s7, "p_1551->g_877.s7", print_hash_value);
    transparent_crc(p_1551->g_877.s8, "p_1551->g_877.s8", print_hash_value);
    transparent_crc(p_1551->g_877.s9, "p_1551->g_877.s9", print_hash_value);
    transparent_crc(p_1551->g_877.sa, "p_1551->g_877.sa", print_hash_value);
    transparent_crc(p_1551->g_877.sb, "p_1551->g_877.sb", print_hash_value);
    transparent_crc(p_1551->g_877.sc, "p_1551->g_877.sc", print_hash_value);
    transparent_crc(p_1551->g_877.sd, "p_1551->g_877.sd", print_hash_value);
    transparent_crc(p_1551->g_877.se, "p_1551->g_877.se", print_hash_value);
    transparent_crc(p_1551->g_877.sf, "p_1551->g_877.sf", print_hash_value);
    transparent_crc(p_1551->g_911.s0, "p_1551->g_911.s0", print_hash_value);
    transparent_crc(p_1551->g_911.s1, "p_1551->g_911.s1", print_hash_value);
    transparent_crc(p_1551->g_911.s2, "p_1551->g_911.s2", print_hash_value);
    transparent_crc(p_1551->g_911.s3, "p_1551->g_911.s3", print_hash_value);
    transparent_crc(p_1551->g_911.s4, "p_1551->g_911.s4", print_hash_value);
    transparent_crc(p_1551->g_911.s5, "p_1551->g_911.s5", print_hash_value);
    transparent_crc(p_1551->g_911.s6, "p_1551->g_911.s6", print_hash_value);
    transparent_crc(p_1551->g_911.s7, "p_1551->g_911.s7", print_hash_value);
    transparent_crc(p_1551->g_911.s8, "p_1551->g_911.s8", print_hash_value);
    transparent_crc(p_1551->g_911.s9, "p_1551->g_911.s9", print_hash_value);
    transparent_crc(p_1551->g_911.sa, "p_1551->g_911.sa", print_hash_value);
    transparent_crc(p_1551->g_911.sb, "p_1551->g_911.sb", print_hash_value);
    transparent_crc(p_1551->g_911.sc, "p_1551->g_911.sc", print_hash_value);
    transparent_crc(p_1551->g_911.sd, "p_1551->g_911.sd", print_hash_value);
    transparent_crc(p_1551->g_911.se, "p_1551->g_911.se", print_hash_value);
    transparent_crc(p_1551->g_911.sf, "p_1551->g_911.sf", print_hash_value);
    transparent_crc(p_1551->g_917, "p_1551->g_917", print_hash_value);
    transparent_crc(p_1551->g_929, "p_1551->g_929", print_hash_value);
    transparent_crc(p_1551->g_934.s0, "p_1551->g_934.s0", print_hash_value);
    transparent_crc(p_1551->g_934.s1, "p_1551->g_934.s1", print_hash_value);
    transparent_crc(p_1551->g_934.s2, "p_1551->g_934.s2", print_hash_value);
    transparent_crc(p_1551->g_934.s3, "p_1551->g_934.s3", print_hash_value);
    transparent_crc(p_1551->g_934.s4, "p_1551->g_934.s4", print_hash_value);
    transparent_crc(p_1551->g_934.s5, "p_1551->g_934.s5", print_hash_value);
    transparent_crc(p_1551->g_934.s6, "p_1551->g_934.s6", print_hash_value);
    transparent_crc(p_1551->g_934.s7, "p_1551->g_934.s7", print_hash_value);
    transparent_crc(p_1551->g_974, "p_1551->g_974", print_hash_value);
    transparent_crc(p_1551->g_979.x, "p_1551->g_979.x", print_hash_value);
    transparent_crc(p_1551->g_979.y, "p_1551->g_979.y", print_hash_value);
    transparent_crc(p_1551->g_983.x, "p_1551->g_983.x", print_hash_value);
    transparent_crc(p_1551->g_983.y, "p_1551->g_983.y", print_hash_value);
    transparent_crc(p_1551->g_985.x, "p_1551->g_985.x", print_hash_value);
    transparent_crc(p_1551->g_985.y, "p_1551->g_985.y", print_hash_value);
    transparent_crc(p_1551->g_1013.s0, "p_1551->g_1013.s0", print_hash_value);
    transparent_crc(p_1551->g_1013.s1, "p_1551->g_1013.s1", print_hash_value);
    transparent_crc(p_1551->g_1013.s2, "p_1551->g_1013.s2", print_hash_value);
    transparent_crc(p_1551->g_1013.s3, "p_1551->g_1013.s3", print_hash_value);
    transparent_crc(p_1551->g_1013.s4, "p_1551->g_1013.s4", print_hash_value);
    transparent_crc(p_1551->g_1013.s5, "p_1551->g_1013.s5", print_hash_value);
    transparent_crc(p_1551->g_1013.s6, "p_1551->g_1013.s6", print_hash_value);
    transparent_crc(p_1551->g_1013.s7, "p_1551->g_1013.s7", print_hash_value);
    transparent_crc(p_1551->g_1013.s8, "p_1551->g_1013.s8", print_hash_value);
    transparent_crc(p_1551->g_1013.s9, "p_1551->g_1013.s9", print_hash_value);
    transparent_crc(p_1551->g_1013.sa, "p_1551->g_1013.sa", print_hash_value);
    transparent_crc(p_1551->g_1013.sb, "p_1551->g_1013.sb", print_hash_value);
    transparent_crc(p_1551->g_1013.sc, "p_1551->g_1013.sc", print_hash_value);
    transparent_crc(p_1551->g_1013.sd, "p_1551->g_1013.sd", print_hash_value);
    transparent_crc(p_1551->g_1013.se, "p_1551->g_1013.se", print_hash_value);
    transparent_crc(p_1551->g_1013.sf, "p_1551->g_1013.sf", print_hash_value);
    transparent_crc(p_1551->g_1036.s0, "p_1551->g_1036.s0", print_hash_value);
    transparent_crc(p_1551->g_1036.s1, "p_1551->g_1036.s1", print_hash_value);
    transparent_crc(p_1551->g_1036.s2, "p_1551->g_1036.s2", print_hash_value);
    transparent_crc(p_1551->g_1036.s3, "p_1551->g_1036.s3", print_hash_value);
    transparent_crc(p_1551->g_1036.s4, "p_1551->g_1036.s4", print_hash_value);
    transparent_crc(p_1551->g_1036.s5, "p_1551->g_1036.s5", print_hash_value);
    transparent_crc(p_1551->g_1036.s6, "p_1551->g_1036.s6", print_hash_value);
    transparent_crc(p_1551->g_1036.s7, "p_1551->g_1036.s7", print_hash_value);
    transparent_crc(p_1551->g_1036.s8, "p_1551->g_1036.s8", print_hash_value);
    transparent_crc(p_1551->g_1036.s9, "p_1551->g_1036.s9", print_hash_value);
    transparent_crc(p_1551->g_1036.sa, "p_1551->g_1036.sa", print_hash_value);
    transparent_crc(p_1551->g_1036.sb, "p_1551->g_1036.sb", print_hash_value);
    transparent_crc(p_1551->g_1036.sc, "p_1551->g_1036.sc", print_hash_value);
    transparent_crc(p_1551->g_1036.sd, "p_1551->g_1036.sd", print_hash_value);
    transparent_crc(p_1551->g_1036.se, "p_1551->g_1036.se", print_hash_value);
    transparent_crc(p_1551->g_1036.sf, "p_1551->g_1036.sf", print_hash_value);
    transparent_crc(p_1551->g_1037.s0, "p_1551->g_1037.s0", print_hash_value);
    transparent_crc(p_1551->g_1037.s1, "p_1551->g_1037.s1", print_hash_value);
    transparent_crc(p_1551->g_1037.s2, "p_1551->g_1037.s2", print_hash_value);
    transparent_crc(p_1551->g_1037.s3, "p_1551->g_1037.s3", print_hash_value);
    transparent_crc(p_1551->g_1037.s4, "p_1551->g_1037.s4", print_hash_value);
    transparent_crc(p_1551->g_1037.s5, "p_1551->g_1037.s5", print_hash_value);
    transparent_crc(p_1551->g_1037.s6, "p_1551->g_1037.s6", print_hash_value);
    transparent_crc(p_1551->g_1037.s7, "p_1551->g_1037.s7", print_hash_value);
    transparent_crc(p_1551->g_1052.s0, "p_1551->g_1052.s0", print_hash_value);
    transparent_crc(p_1551->g_1052.s1, "p_1551->g_1052.s1", print_hash_value);
    transparent_crc(p_1551->g_1052.s2, "p_1551->g_1052.s2", print_hash_value);
    transparent_crc(p_1551->g_1052.s3, "p_1551->g_1052.s3", print_hash_value);
    transparent_crc(p_1551->g_1052.s4, "p_1551->g_1052.s4", print_hash_value);
    transparent_crc(p_1551->g_1052.s5, "p_1551->g_1052.s5", print_hash_value);
    transparent_crc(p_1551->g_1052.s6, "p_1551->g_1052.s6", print_hash_value);
    transparent_crc(p_1551->g_1052.s7, "p_1551->g_1052.s7", print_hash_value);
    transparent_crc(p_1551->g_1053.s0, "p_1551->g_1053.s0", print_hash_value);
    transparent_crc(p_1551->g_1053.s1, "p_1551->g_1053.s1", print_hash_value);
    transparent_crc(p_1551->g_1053.s2, "p_1551->g_1053.s2", print_hash_value);
    transparent_crc(p_1551->g_1053.s3, "p_1551->g_1053.s3", print_hash_value);
    transparent_crc(p_1551->g_1053.s4, "p_1551->g_1053.s4", print_hash_value);
    transparent_crc(p_1551->g_1053.s5, "p_1551->g_1053.s5", print_hash_value);
    transparent_crc(p_1551->g_1053.s6, "p_1551->g_1053.s6", print_hash_value);
    transparent_crc(p_1551->g_1053.s7, "p_1551->g_1053.s7", print_hash_value);
    transparent_crc(p_1551->g_1053.s8, "p_1551->g_1053.s8", print_hash_value);
    transparent_crc(p_1551->g_1053.s9, "p_1551->g_1053.s9", print_hash_value);
    transparent_crc(p_1551->g_1053.sa, "p_1551->g_1053.sa", print_hash_value);
    transparent_crc(p_1551->g_1053.sb, "p_1551->g_1053.sb", print_hash_value);
    transparent_crc(p_1551->g_1053.sc, "p_1551->g_1053.sc", print_hash_value);
    transparent_crc(p_1551->g_1053.sd, "p_1551->g_1053.sd", print_hash_value);
    transparent_crc(p_1551->g_1053.se, "p_1551->g_1053.se", print_hash_value);
    transparent_crc(p_1551->g_1053.sf, "p_1551->g_1053.sf", print_hash_value);
    transparent_crc(p_1551->g_1121.x, "p_1551->g_1121.x", print_hash_value);
    transparent_crc(p_1551->g_1121.y, "p_1551->g_1121.y", print_hash_value);
    transparent_crc(p_1551->g_1121.z, "p_1551->g_1121.z", print_hash_value);
    transparent_crc(p_1551->g_1121.w, "p_1551->g_1121.w", print_hash_value);
    transparent_crc(p_1551->g_1151.s0, "p_1551->g_1151.s0", print_hash_value);
    transparent_crc(p_1551->g_1151.s1, "p_1551->g_1151.s1", print_hash_value);
    transparent_crc(p_1551->g_1151.s2, "p_1551->g_1151.s2", print_hash_value);
    transparent_crc(p_1551->g_1151.s3, "p_1551->g_1151.s3", print_hash_value);
    transparent_crc(p_1551->g_1151.s4, "p_1551->g_1151.s4", print_hash_value);
    transparent_crc(p_1551->g_1151.s5, "p_1551->g_1151.s5", print_hash_value);
    transparent_crc(p_1551->g_1151.s6, "p_1551->g_1151.s6", print_hash_value);
    transparent_crc(p_1551->g_1151.s7, "p_1551->g_1151.s7", print_hash_value);
    transparent_crc(p_1551->g_1151.s8, "p_1551->g_1151.s8", print_hash_value);
    transparent_crc(p_1551->g_1151.s9, "p_1551->g_1151.s9", print_hash_value);
    transparent_crc(p_1551->g_1151.sa, "p_1551->g_1151.sa", print_hash_value);
    transparent_crc(p_1551->g_1151.sb, "p_1551->g_1151.sb", print_hash_value);
    transparent_crc(p_1551->g_1151.sc, "p_1551->g_1151.sc", print_hash_value);
    transparent_crc(p_1551->g_1151.sd, "p_1551->g_1151.sd", print_hash_value);
    transparent_crc(p_1551->g_1151.se, "p_1551->g_1151.se", print_hash_value);
    transparent_crc(p_1551->g_1151.sf, "p_1551->g_1151.sf", print_hash_value);
    transparent_crc(p_1551->g_1152.s0, "p_1551->g_1152.s0", print_hash_value);
    transparent_crc(p_1551->g_1152.s1, "p_1551->g_1152.s1", print_hash_value);
    transparent_crc(p_1551->g_1152.s2, "p_1551->g_1152.s2", print_hash_value);
    transparent_crc(p_1551->g_1152.s3, "p_1551->g_1152.s3", print_hash_value);
    transparent_crc(p_1551->g_1152.s4, "p_1551->g_1152.s4", print_hash_value);
    transparent_crc(p_1551->g_1152.s5, "p_1551->g_1152.s5", print_hash_value);
    transparent_crc(p_1551->g_1152.s6, "p_1551->g_1152.s6", print_hash_value);
    transparent_crc(p_1551->g_1152.s7, "p_1551->g_1152.s7", print_hash_value);
    transparent_crc(p_1551->g_1157, "p_1551->g_1157", print_hash_value);
    transparent_crc(p_1551->g_1160, "p_1551->g_1160", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_1551->g_1216[i][j][k], "p_1551->g_1216[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(p_1551->g_1237[i][j][k], "p_1551->g_1237[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1551->g_1352.s0, "p_1551->g_1352.s0", print_hash_value);
    transparent_crc(p_1551->g_1352.s1, "p_1551->g_1352.s1", print_hash_value);
    transparent_crc(p_1551->g_1352.s2, "p_1551->g_1352.s2", print_hash_value);
    transparent_crc(p_1551->g_1352.s3, "p_1551->g_1352.s3", print_hash_value);
    transparent_crc(p_1551->g_1352.s4, "p_1551->g_1352.s4", print_hash_value);
    transparent_crc(p_1551->g_1352.s5, "p_1551->g_1352.s5", print_hash_value);
    transparent_crc(p_1551->g_1352.s6, "p_1551->g_1352.s6", print_hash_value);
    transparent_crc(p_1551->g_1352.s7, "p_1551->g_1352.s7", print_hash_value);
    transparent_crc(p_1551->g_1352.s8, "p_1551->g_1352.s8", print_hash_value);
    transparent_crc(p_1551->g_1352.s9, "p_1551->g_1352.s9", print_hash_value);
    transparent_crc(p_1551->g_1352.sa, "p_1551->g_1352.sa", print_hash_value);
    transparent_crc(p_1551->g_1352.sb, "p_1551->g_1352.sb", print_hash_value);
    transparent_crc(p_1551->g_1352.sc, "p_1551->g_1352.sc", print_hash_value);
    transparent_crc(p_1551->g_1352.sd, "p_1551->g_1352.sd", print_hash_value);
    transparent_crc(p_1551->g_1352.se, "p_1551->g_1352.se", print_hash_value);
    transparent_crc(p_1551->g_1352.sf, "p_1551->g_1352.sf", print_hash_value);
    transparent_crc(p_1551->g_1366.x, "p_1551->g_1366.x", print_hash_value);
    transparent_crc(p_1551->g_1366.y, "p_1551->g_1366.y", print_hash_value);
    transparent_crc(p_1551->g_1366.z, "p_1551->g_1366.z", print_hash_value);
    transparent_crc(p_1551->g_1366.w, "p_1551->g_1366.w", print_hash_value);
    transparent_crc(p_1551->g_1367.s0, "p_1551->g_1367.s0", print_hash_value);
    transparent_crc(p_1551->g_1367.s1, "p_1551->g_1367.s1", print_hash_value);
    transparent_crc(p_1551->g_1367.s2, "p_1551->g_1367.s2", print_hash_value);
    transparent_crc(p_1551->g_1367.s3, "p_1551->g_1367.s3", print_hash_value);
    transparent_crc(p_1551->g_1367.s4, "p_1551->g_1367.s4", print_hash_value);
    transparent_crc(p_1551->g_1367.s5, "p_1551->g_1367.s5", print_hash_value);
    transparent_crc(p_1551->g_1367.s6, "p_1551->g_1367.s6", print_hash_value);
    transparent_crc(p_1551->g_1367.s7, "p_1551->g_1367.s7", print_hash_value);
    transparent_crc(p_1551->g_1367.s8, "p_1551->g_1367.s8", print_hash_value);
    transparent_crc(p_1551->g_1367.s9, "p_1551->g_1367.s9", print_hash_value);
    transparent_crc(p_1551->g_1367.sa, "p_1551->g_1367.sa", print_hash_value);
    transparent_crc(p_1551->g_1367.sb, "p_1551->g_1367.sb", print_hash_value);
    transparent_crc(p_1551->g_1367.sc, "p_1551->g_1367.sc", print_hash_value);
    transparent_crc(p_1551->g_1367.sd, "p_1551->g_1367.sd", print_hash_value);
    transparent_crc(p_1551->g_1367.se, "p_1551->g_1367.se", print_hash_value);
    transparent_crc(p_1551->g_1367.sf, "p_1551->g_1367.sf", print_hash_value);
    transparent_crc(p_1551->g_1368.s0, "p_1551->g_1368.s0", print_hash_value);
    transparent_crc(p_1551->g_1368.s1, "p_1551->g_1368.s1", print_hash_value);
    transparent_crc(p_1551->g_1368.s2, "p_1551->g_1368.s2", print_hash_value);
    transparent_crc(p_1551->g_1368.s3, "p_1551->g_1368.s3", print_hash_value);
    transparent_crc(p_1551->g_1368.s4, "p_1551->g_1368.s4", print_hash_value);
    transparent_crc(p_1551->g_1368.s5, "p_1551->g_1368.s5", print_hash_value);
    transparent_crc(p_1551->g_1368.s6, "p_1551->g_1368.s6", print_hash_value);
    transparent_crc(p_1551->g_1368.s7, "p_1551->g_1368.s7", print_hash_value);
    transparent_crc(p_1551->g_1391.s0, "p_1551->g_1391.s0", print_hash_value);
    transparent_crc(p_1551->g_1391.s1, "p_1551->g_1391.s1", print_hash_value);
    transparent_crc(p_1551->g_1391.s2, "p_1551->g_1391.s2", print_hash_value);
    transparent_crc(p_1551->g_1391.s3, "p_1551->g_1391.s3", print_hash_value);
    transparent_crc(p_1551->g_1391.s4, "p_1551->g_1391.s4", print_hash_value);
    transparent_crc(p_1551->g_1391.s5, "p_1551->g_1391.s5", print_hash_value);
    transparent_crc(p_1551->g_1391.s6, "p_1551->g_1391.s6", print_hash_value);
    transparent_crc(p_1551->g_1391.s7, "p_1551->g_1391.s7", print_hash_value);
    transparent_crc(p_1551->g_1391.s8, "p_1551->g_1391.s8", print_hash_value);
    transparent_crc(p_1551->g_1391.s9, "p_1551->g_1391.s9", print_hash_value);
    transparent_crc(p_1551->g_1391.sa, "p_1551->g_1391.sa", print_hash_value);
    transparent_crc(p_1551->g_1391.sb, "p_1551->g_1391.sb", print_hash_value);
    transparent_crc(p_1551->g_1391.sc, "p_1551->g_1391.sc", print_hash_value);
    transparent_crc(p_1551->g_1391.sd, "p_1551->g_1391.sd", print_hash_value);
    transparent_crc(p_1551->g_1391.se, "p_1551->g_1391.se", print_hash_value);
    transparent_crc(p_1551->g_1391.sf, "p_1551->g_1391.sf", print_hash_value);
    transparent_crc(p_1551->g_1411.x, "p_1551->g_1411.x", print_hash_value);
    transparent_crc(p_1551->g_1411.y, "p_1551->g_1411.y", print_hash_value);
    transparent_crc(p_1551->g_1411.z, "p_1551->g_1411.z", print_hash_value);
    transparent_crc(p_1551->g_1411.w, "p_1551->g_1411.w", print_hash_value);
    transparent_crc(p_1551->g_1462.x, "p_1551->g_1462.x", print_hash_value);
    transparent_crc(p_1551->g_1462.y, "p_1551->g_1462.y", print_hash_value);
    transparent_crc(p_1551->g_1519.x, "p_1551->g_1519.x", print_hash_value);
    transparent_crc(p_1551->g_1519.y, "p_1551->g_1519.y", print_hash_value);
    transparent_crc(p_1551->g_1520.s0, "p_1551->g_1520.s0", print_hash_value);
    transparent_crc(p_1551->g_1520.s1, "p_1551->g_1520.s1", print_hash_value);
    transparent_crc(p_1551->g_1520.s2, "p_1551->g_1520.s2", print_hash_value);
    transparent_crc(p_1551->g_1520.s3, "p_1551->g_1520.s3", print_hash_value);
    transparent_crc(p_1551->g_1520.s4, "p_1551->g_1520.s4", print_hash_value);
    transparent_crc(p_1551->g_1520.s5, "p_1551->g_1520.s5", print_hash_value);
    transparent_crc(p_1551->g_1520.s6, "p_1551->g_1520.s6", print_hash_value);
    transparent_crc(p_1551->g_1520.s7, "p_1551->g_1520.s7", print_hash_value);
    transparent_crc(p_1551->g_1523.s0, "p_1551->g_1523.s0", print_hash_value);
    transparent_crc(p_1551->g_1523.s1, "p_1551->g_1523.s1", print_hash_value);
    transparent_crc(p_1551->g_1523.s2, "p_1551->g_1523.s2", print_hash_value);
    transparent_crc(p_1551->g_1523.s3, "p_1551->g_1523.s3", print_hash_value);
    transparent_crc(p_1551->g_1523.s4, "p_1551->g_1523.s4", print_hash_value);
    transparent_crc(p_1551->g_1523.s5, "p_1551->g_1523.s5", print_hash_value);
    transparent_crc(p_1551->g_1523.s6, "p_1551->g_1523.s6", print_hash_value);
    transparent_crc(p_1551->g_1523.s7, "p_1551->g_1523.s7", print_hash_value);
    transparent_crc(p_1551->g_1523.s8, "p_1551->g_1523.s8", print_hash_value);
    transparent_crc(p_1551->g_1523.s9, "p_1551->g_1523.s9", print_hash_value);
    transparent_crc(p_1551->g_1523.sa, "p_1551->g_1523.sa", print_hash_value);
    transparent_crc(p_1551->g_1523.sb, "p_1551->g_1523.sb", print_hash_value);
    transparent_crc(p_1551->g_1523.sc, "p_1551->g_1523.sc", print_hash_value);
    transparent_crc(p_1551->g_1523.sd, "p_1551->g_1523.sd", print_hash_value);
    transparent_crc(p_1551->g_1523.se, "p_1551->g_1523.se", print_hash_value);
    transparent_crc(p_1551->g_1523.sf, "p_1551->g_1523.sf", print_hash_value);
    transparent_crc(p_1551->g_1536, "p_1551->g_1536", print_hash_value);
    transparent_crc(p_1551->g_1539, "p_1551->g_1539", print_hash_value);
    transparent_crc(p_1551->v_collective, "p_1551->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 30; i++)
            transparent_crc(p_1551->g_special_values[i + 30 * get_linear_group_id()], "p_1551->g_special_values[i + 30 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 30; i++)
            transparent_crc(p_1551->l_special_values[i], "p_1551->l_special_values[i]", print_hash_value);
    transparent_crc(p_1551->l_comm_values[get_linear_local_id()], "p_1551->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1551->g_comm_values[get_linear_group_id() * 3 + get_linear_local_id()], "p_1551->g_comm_values[get_linear_group_id() * 3 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
