// --atomics 29 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 17,86,6 -l 1,2,1
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

__constant uint32_t permutations[10][2] = {
{1,0}, // permutation 0
{1,0}, // permutation 1
{1,0}, // permutation 2
{1,0}, // permutation 3
{1,0}, // permutation 4
{1,0}, // permutation 5
{1,0}, // permutation 6
{1,0}, // permutation 7
{1,0}, // permutation 8
{1,0} // permutation 9
};

// Seed: 994703601

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint64_t  f0;
   int32_t  f1;
   int16_t  f2;
   uint8_t  f3;
   int32_t  f4;
   int32_t  f5;
};

struct S1 {
    VECTOR(int16_t, 16) g_14;
    volatile int16_t g_21;
    volatile int16_t *g_20[2][3][4];
    uint8_t g_26;
    volatile int32_t * volatile g_34;
    volatile int32_t g_36;
    volatile int32_t *g_35;
    volatile VECTOR(uint8_t, 16) g_96;
    VECTOR(uint16_t, 2) g_99;
    struct S0 g_103;
    struct S0 * volatile g_104;
    volatile uint32_t g_109[7][6];
    int32_t g_118;
    int32_t *g_117;
    int64_t g_120;
    uint8_t g_146[7][1];
    int64_t g_163;
    volatile int8_t g_174;
    int32_t g_175;
    volatile uint8_t g_177;
    VECTOR(uint16_t, 8) g_190;
    VECTOR(uint16_t, 16) g_191;
    int16_t g_210;
    volatile VECTOR(int16_t, 4) g_223;
    uint16_t *g_228;
    uint16_t *g_230;
    uint32_t g_241;
    struct S0 g_250;
    volatile VECTOR(int64_t, 16) g_260;
    VECTOR(uint64_t, 8) g_263;
    VECTOR(int32_t, 4) g_267;
    VECTOR(int64_t, 4) g_288;
    volatile VECTOR(int64_t, 8) g_289;
    VECTOR(int16_t, 8) g_292;
    VECTOR(uint8_t, 16) g_298;
    volatile VECTOR(int32_t, 2) g_304;
    uint32_t g_312;
    volatile VECTOR(uint16_t, 16) g_330;
    int32_t **g_332;
    int32_t ***g_331;
    int64_t g_336;
    volatile VECTOR(int16_t, 8) g_407;
    volatile VECTOR(uint16_t, 8) g_412;
    volatile int64_t * volatile *g_419;
    VECTOR(uint16_t, 16) g_447;
    VECTOR(uint16_t, 2) g_448;
    uint8_t g_450;
    VECTOR(int16_t, 8) g_473;
    volatile VECTOR(int16_t, 4) g_474;
    uint32_t g_507;
    VECTOR(int8_t, 4) g_534;
    VECTOR(uint8_t, 4) g_537;
    VECTOR(uint64_t, 8) g_540;
    VECTOR(uint64_t, 16) g_547;
    struct S0 * volatile g_562;
    VECTOR(uint8_t, 8) g_573;
    volatile VECTOR(uint16_t, 4) g_583;
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
    __global volatile uint32_t *g_atomic_input;
    __global volatile uint32_t *g_special_values;
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
struct S0  func_1(struct S1 * p_588);
int32_t * func_28(int32_t  p_29, int32_t  p_30, int64_t  p_31, int32_t  p_32, struct S1 * p_588);
int32_t  func_38(int32_t * p_39, struct S1 * p_588);
int64_t  func_40(uint8_t * p_41, uint32_t  p_42, struct S1 * p_588);
uint8_t * func_43(uint64_t  p_44, int16_t * p_45, uint8_t * p_46, int32_t * p_47, int32_t  p_48, struct S1 * p_588);
uint8_t  func_51(uint64_t  p_52, uint64_t  p_53, int8_t  p_54, struct S1 * p_588);
uint64_t  func_55(uint8_t * p_56, int16_t * p_57, uint8_t  p_58, int32_t * p_59, uint8_t  p_60, struct S1 * p_588);
uint8_t * func_61(int64_t  p_62, struct S1 * p_588);
int64_t  func_63(int16_t * p_64, uint8_t * p_65, struct S1 * p_588);
int16_t * func_66(uint8_t * p_67, uint16_t  p_68, uint8_t  p_69, int64_t  p_70, uint32_t  p_71, struct S1 * p_588);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_588->l_comm_values p_588->g_14 p_588->g_20 p_588->g_comm_values p_588->g_34 p_588->g_35 p_588->g_36 p_588->g_26 p_588->g_96 p_588->g_99 p_588->g_103 p_588->g_104 p_588->g_109 p_588->g_117 p_588->g_118 p_588->g_120 p_588->g_21 p_588->g_146 p_588->g_163 p_588->g_177 p_588->g_174 p_588->g_190 p_588->g_191 p_588->g_210 p_588->g_223 p_588->g_228 p_588->g_230 p_588->g_241 p_588->g_260 p_588->g_263 p_588->g_267 p_588->g_175 p_588->g_288 p_588->g_289 p_588->g_292 p_588->g_298 p_588->g_250.f0 p_588->g_304 p_588->g_312 p_588->g_250.f1 p_588->g_250.f5 p_588->g_331 p_588->g_332 p_588->g_419 p_588->g_250.f3 p_588->g_336 p_588->g_473 p_588->g_474 p_588->g_448 p_588->g_250.f2 p_588->g_507 p_588->g_534 p_588->g_537 p_588->g_540 p_588->g_547 p_588->g_447 p_588->g_562 p_588->g_573 p_588->g_583
 * writes: p_588->g_26 p_588->g_103 p_588->g_109 p_588->g_117 p_588->g_118 p_588->g_146 p_588->g_120 p_588->g_99 p_588->g_163 p_588->g_177 p_588->g_36 p_588->g_228 p_588->g_230 p_588->g_241 p_588->g_250.f2 p_588->g_14 p_588->g_175 p_588->g_191 p_588->g_312 p_588->g_250.f1 p_588->g_250.f0 p_588->g_250.f5 p_588->g_331 p_588->g_336 p_588->g_250.f3 p_588->g_332 p_588->g_210 p_588->g_507 p_588->g_534
 */
struct S0  func_1(struct S1 * p_588)
{ /* block id: 4 */
    int16_t *l_15 = (void*)0;
    int16_t *l_16 = (void*)0;
    int32_t l_17 = 0x1094D0E8L;
    int32_t l_24[4][4][4] = {{{0L,0x0C844FC3L,0x0C844FC3L,0L},{0L,0x0C844FC3L,0x0C844FC3L,0L},{0L,0x0C844FC3L,0x0C844FC3L,0L},{0L,0x0C844FC3L,0x0C844FC3L,0L}},{{0L,0x0C844FC3L,0x0C844FC3L,0L},{0L,0x0C844FC3L,0x0C844FC3L,0L},{0L,0x0C844FC3L,0x0C844FC3L,0L},{0L,0x0C844FC3L,0x0C844FC3L,0L}},{{0L,0x0C844FC3L,0x0C844FC3L,0L},{0L,0x0C844FC3L,0x0C844FC3L,0L},{0L,0x0C844FC3L,0x0C844FC3L,0L},{0L,0x0C844FC3L,0x0C844FC3L,0L}},{{0L,0x0C844FC3L,0x0C844FC3L,0L},{0L,0x0C844FC3L,0x0C844FC3L,0L},{0L,0x0C844FC3L,0x0C844FC3L,0L},{0L,0x0C844FC3L,0x0C844FC3L,0L}}};
    uint8_t *l_25 = &p_588->g_26;
    VECTOR(uint64_t, 16) l_27 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xBCDCEC458AF32651L), 0xBCDCEC458AF32651L), 0xBCDCEC458AF32651L, 18446744073709551615UL, 0xBCDCEC458AF32651L, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xBCDCEC458AF32651L), (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xBCDCEC458AF32651L), 18446744073709551615UL, 0xBCDCEC458AF32651L, 18446744073709551615UL, 0xBCDCEC458AF32651L);
    int64_t *l_255[6][1] = {{&p_588->g_120},{&p_588->g_120},{&p_588->g_120},{&p_588->g_120},{&p_588->g_120},{&p_588->g_120}};
    int64_t *l_257 = &p_588->g_120;
    VECTOR(uint32_t, 4) l_268 = (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 0UL), 0UL);
    VECTOR(int16_t, 4) l_295 = (VECTOR(int16_t, 4))(0x2131L, (VECTOR(int16_t, 2))(0x2131L, 7L), 7L);
    int16_t l_300 = 0L;
    uint8_t l_301 = 0x10L;
    int32_t l_309 = 0x20F35D9BL;
    uint32_t l_348 = 0x81F295BEL;
    struct S0 l_384 = {18446744073709551615UL,0x3659F51BL,0x6BC7L,0xF4L,0L,1L};
    uint16_t l_403 = 0xA1BCL;
    VECTOR(int16_t, 8) l_409 = (VECTOR(int16_t, 8))(0x1983L, (VECTOR(int16_t, 4))(0x1983L, (VECTOR(int16_t, 2))(0x1983L, 0L), 0L), 0L, 0x1983L, 0L);
    VECTOR(uint16_t, 16) l_411 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 7UL), 7UL), 7UL, 1UL, 7UL, (VECTOR(uint16_t, 2))(1UL, 7UL), (VECTOR(uint16_t, 2))(1UL, 7UL), 1UL, 7UL, 1UL, 7UL);
    VECTOR(uint16_t, 16) l_432 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xCA30L), 0xCA30L), 0xCA30L, 65535UL, 0xCA30L, (VECTOR(uint16_t, 2))(65535UL, 0xCA30L), (VECTOR(uint16_t, 2))(65535UL, 0xCA30L), 65535UL, 0xCA30L, 65535UL, 0xCA30L);
    VECTOR(uint16_t, 8) l_433 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x58F3L), 0x58F3L), 0x58F3L, 65535UL, 0x58F3L);
    VECTOR(uint16_t, 4) l_449 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 1UL), 1UL);
    uint32_t l_452 = 3UL;
    int32_t l_506 = (-1L);
    VECTOR(int16_t, 2) l_529 = (VECTOR(int16_t, 2))((-3L), 0x36E1L);
    int16_t *l_568 = (void*)0;
    int16_t *l_569 = (void*)0;
    int16_t *l_570 = &p_588->g_250.f2;
    uint16_t *l_586 = (void*)0;
    uint16_t *l_587 = &l_403;
    int i, j, k;
    if ((0x695AAD8530DE9BF9L <= (safe_sub_func_int8_t_s_s(((safe_add_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((*l_25) = ((safe_mul_func_uint16_t_u_u(p_588->l_comm_values[(safe_mod_func_uint32_t_u_u(p_588->tid, 2))], (0x5BBBDEBFL >= (((safe_div_func_uint32_t_u_u(((1L != (((VECTOR(uint16_t, 2))(0xE7B1L, 0xCADFL)).lo >= (l_17 = ((VECTOR(int16_t, 8))(p_588->g_14.sa6c65b0b)).s5))) & (2L < ((VECTOR(int64_t, 8))((safe_sub_func_int64_t_s_s((p_588->g_20[0][1][0] != (void*)0), (safe_mul_func_int16_t_s_s(l_24[3][1][2], ((p_588->g_14.sf == l_24[3][1][2]) != 0x97L))))), p_588->l_comm_values[(safe_mod_func_uint32_t_u_u(p_588->tid, 2))], ((VECTOR(int64_t, 2))(0x28E1F916744FA755L)), ((VECTOR(int64_t, 2))(8L)), 4L, 0x53F04E266BC59458L)).s5)), l_24[0][3][2])) != 0x5208DD2DL) < p_588->g_comm_values[p_588->tid])))) & (-1L))), l_27.se)), l_27.sf)) > l_24[3][1][2]), l_24[3][1][2])) < p_588->g_14.sa), 0xA9L))))
    { /* block id: 7 */
        int16_t l_33[1][2][6] = {{{0x76F5L,0x76F5L,0x76F5L,0x76F5L,0x76F5L,0x76F5L},{0x76F5L,0x76F5L,0x76F5L,0x76F5L,0x76F5L,0x76F5L}}};
        uint32_t l_37[2];
        uint32_t l_72 = 0x77B72BA7L;
        uint8_t *l_123 = &p_588->g_26;
        int8_t l_124 = 0x44L;
        int32_t *l_212 = (void*)0;
        int32_t *l_213[8][5] = {{&l_17,&p_588->g_118,&p_588->g_175,&l_24[1][3][1],&p_588->g_175},{&l_17,&p_588->g_118,&p_588->g_175,&l_24[1][3][1],&p_588->g_175},{&l_17,&p_588->g_118,&p_588->g_175,&l_24[1][3][1],&p_588->g_175},{&l_17,&p_588->g_118,&p_588->g_175,&l_24[1][3][1],&p_588->g_175},{&l_17,&p_588->g_118,&p_588->g_175,&l_24[1][3][1],&p_588->g_175},{&l_17,&p_588->g_118,&p_588->g_175,&l_24[1][3][1],&p_588->g_175},{&l_17,&p_588->g_118,&p_588->g_175,&l_24[1][3][1],&p_588->g_175},{&l_17,&p_588->g_118,&p_588->g_175,&l_24[1][3][1],&p_588->g_175}};
        int32_t **l_244 = &l_212;
        struct S0 *l_249 = &p_588->g_250;
        VECTOR(int64_t, 8) l_266 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x1F7A9B40735C3782L), 0x1F7A9B40735C3782L), 0x1F7A9B40735C3782L, 1L, 0x1F7A9B40735C3782L);
        VECTOR(uint8_t, 4) l_283 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 249UL), 249UL);
        uint16_t *l_299[3];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_37[i] = 0xC4917505L;
        for (i = 0; i < 3; i++)
            l_299[i] = (void*)0;
        (*l_244) = func_28(l_33[0][1][0], ((p_588->g_34 != p_588->g_35) , (l_24[3][1][2] = ((((-1L) && (l_37[0] ^ (l_17 = func_38((func_40(func_43((((safe_div_func_uint8_t_u_u(func_51(l_33[0][1][0], func_55(func_61(func_63(func_66(l_25, l_72, p_588->g_36, l_33[0][0][5], p_588->g_26, p_588), l_25, p_588), p_588), &l_33[0][1][0], p_588->l_comm_values[(safe_mod_func_uint32_t_u_u(p_588->tid, 2))], p_588->g_117, p_588->g_118, p_588), p_588->g_120, p_588), l_33[0][1][0])) || p_588->g_comm_values[p_588->tid]) <= 65535UL), &l_33[0][1][0], l_123, &p_588->g_118, l_124, p_588), p_588->g_14.s8, p_588) , (void*)0), p_588)))) == l_24[3][1][2]) < 1L))), p_588->g_14.s6, l_27.se, p_588);
        for (p_588->g_103.f3 = 0; (p_588->g_103.f3 > 25); ++p_588->g_103.f3)
        { /* block id: 69 */
            struct S0 *l_247 = &p_588->g_103;
            struct S0 **l_248[7];
            int i;
            for (i = 0; i < 7; i++)
                l_248[i] = (void*)0;
            l_249 = l_247;
        }
        for (p_588->g_103.f1 = 0; (p_588->g_103.f1 == (-29)); p_588->g_103.f1 = safe_sub_func_uint64_t_u_u(p_588->g_103.f1, 5))
        { /* block id: 74 */
            int64_t **l_256 = &l_255[3][0];
            int16_t *l_258 = (void*)0;
            int16_t *l_259 = &p_588->g_250.f2;
            VECTOR(int64_t, 8) l_264 = (VECTOR(int64_t, 8))((-9L), (VECTOR(int64_t, 4))((-9L), (VECTOR(int64_t, 2))((-9L), 0L), 0L), 0L, (-9L), 0L);
            VECTOR(int64_t, 4) l_265 = (VECTOR(int64_t, 4))(0x3E2EB9D6BF60B687L, (VECTOR(int64_t, 2))(0x3E2EB9D6BF60B687L, 0L), 0L);
            int64_t l_271 = 0L;
            uint16_t *l_272 = (void*)0;
            uint16_t *l_273 = (void*)0;
            uint16_t *l_274 = (void*)0;
            int i;
            if ((*p_588->g_117))
                break;
            (*l_212) ^= ((safe_add_func_int64_t_s_s(((((p_588->g_comm_values[p_588->tid] , ((*l_256) = l_255[3][0])) != l_257) && (p_588->g_99.x = ((!((*l_259) = l_17)) || (p_588->g_14.s9 = (((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(max(((VECTOR(int64_t, 16))(p_588->g_260.s4ec1c7ce739196a5)).odd, ((VECTOR(int64_t, 4))(0x76CBD41AF20DD8B0L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((((safe_lshift_func_int8_t_s_s(p_588->g_26, 4)) & ((VECTOR(uint64_t, 4))(p_588->g_263.s1267)).y) , &p_588->g_117) == &p_588->g_117), ((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 2))(l_264.s17)).xxyy, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_265.yz)), 0x5E035C83AA90A6ACL, (-10L))), ((VECTOR(int64_t, 2))(0x09B279C33F0CA0BBL, (-1L))), ((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(l_266.s53216731)).s5205266126650516)).even)).s01, ((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 4))(p_588->g_267.wyyx)).yyzzzzwz, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(l_268.zxzzwwwwxzzzxwxw)))).lo))).s52, ((VECTOR(int64_t, 2))((-2L), 4L))))), 0x6BB3C29A087F769CL, (safe_div_func_uint64_t_u_u(l_271, p_588->g_260.s7)), l_24[3][1][2], 0x458E79AB5F15D33EL, ((VECTOR(int64_t, 2))(0x742EE506459D8328L)), 8L, 0x102FAF71C874029DL)))).sb8e8))), 0L, 0x2FA40FA77D6FDEC3L, 0x1BEB74CA7D177FFDL)).s71)), 0L)).wxxzwxxz))))), (int64_t)0x39D2F9AA37D95E90L))).s0 && FAKE_DIVERGE(p_588->global_0_offset, get_global_id(0), 10)))))) && l_264.s0), (-8L))) , 0x4FECE7D9L);
        }
        (*l_244) = func_28((((safe_rshift_func_int16_t_s_u(0x48D2L, (p_588->g_191.s8 = (safe_add_func_int32_t_s_s((p_588->g_267.w , (safe_add_func_int32_t_s_s((((safe_div_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(l_283.wxxyzwzx)).s6, (--(*l_123)))) != (safe_div_func_int64_t_s_s(((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 8))(l_24[2][1][2], ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(p_588->g_288.wz)), 0x757D9CDD7CE590E9L, 0x2A423CBAF3439A26L)), 0x41EE8F7912113F23L, (-4L), (-6L))).s4664550471152375, (int64_t)((VECTOR(int64_t, 2))(p_588->g_289.s16)).odd))).sd, (safe_div_func_int16_t_s_s(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 16))(p_588->g_292.s7561370105311007)).hi, ((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 8))(0x683CL, (((safe_mul_func_int8_t_s_s((((((VECTOR(int16_t, 2))(l_295.zw)).hi != 65531UL) && 0x96EA8E69L) == ((p_588->g_146[4][0] != (((((safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(max(((VECTOR(uint8_t, 2))(254UL, 1UL)).yyxyxyyxxyyyxxxy, ((VECTOR(uint8_t, 2))(p_588->g_298.s1b)).xxxxyyxyxyxxyxyx))).sc63d)).yywxzyxy, ((VECTOR(uint8_t, 2))(0UL, 0x05L)).xxxyyyxy))).s3, ((((~0x37D92049911BFB69L) , (((*p_588->g_117) , (*l_244)) == (void*)0)) < 0x94L) == GROUP_DIVERGE(2, 1)))) , l_27.sa) >= p_588->g_241) , 65535UL) , l_24[0][1][2])) && FAKE_DIVERGE(p_588->global_0_offset, get_global_id(0), 10))), 0xA3L)) <= p_588->g_146[4][0]) > 0x093B69A0L), (-7L), 0x13A7L, 1L, p_588->g_292.s1, 0x14FBL, 0x3A3EL)).hi, ((VECTOR(int16_t, 4))(4L))))).xwyzyxyy, ((VECTOR(int16_t, 8))(7L)), ((VECTOR(int16_t, 8))(0x0F8EL)))))))).s40, ((VECTOR(int16_t, 2))(0L)), ((VECTOR(int16_t, 2))(0L))))).hi, l_27.s3))))) != p_588->g_250.f0), l_268.x))), (*p_588->g_117)))))) ^ 0xD1077F895162097EL) , p_588->g_96.s1), l_268.x, l_300, l_301, p_588);
    }
    else
    { /* block id: 85 */
        int8_t l_302 = 0L;
        int16_t *l_303 = &p_588->g_103.f2;
        uint32_t *l_310 = (void*)0;
        uint32_t *l_311 = &p_588->g_312;
        int32_t l_323 = 0x28F585ABL;
        int32_t l_329 = 0x04677EECL;
        int32_t ***l_334 = &p_588->g_332;
        int32_t l_388 = (-10L);
        uint8_t l_389 = 2UL;
        VECTOR(uint64_t, 8) l_396 = (VECTOR(uint64_t, 8))(0xD9D1AF450D317625L, (VECTOR(uint64_t, 4))(0xD9D1AF450D317625L, (VECTOR(uint64_t, 2))(0xD9D1AF450D317625L, 0xAEFE7107843D38D4L), 0xAEFE7107843D38D4L), 0xAEFE7107843D38D4L, 0xD9D1AF450D317625L, 0xAEFE7107843D38D4L);
        VECTOR(uint16_t, 2) l_402 = (VECTOR(uint16_t, 2))(0xB634L, 7UL);
        int64_t l_420 = 0L;
        int i;
        (*p_588->g_35) = ((l_302 != (l_303 != (void*)0)) & (((*l_311) |= (((((VECTOR(int32_t, 4))(p_588->g_304.xxyy)).x || (0x18A4L > (safe_add_func_int8_t_s_s((((&p_588->g_104 != ((safe_mul_func_int16_t_s_s(l_302, 0x523DL)) , ((l_27.s0 , l_268.z) , &p_588->g_104))) >= 255UL) <= l_309), p_588->g_304.y)))) >= 0xECL) < 0x3A1357D6L)) ^ 0x7F44DA31L));
        for (p_588->g_250.f1 = (-16); (p_588->g_250.f1 == (-2)); p_588->g_250.f1++)
        { /* block id: 90 */
            int8_t l_343[9][7][4] = {{{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L}},{{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L}},{{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L}},{{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L}},{{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L}},{{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L}},{{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L}},{{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L}},{{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),1L}}};
            int i, j, k;
            for (p_588->g_250.f0 = 8; (p_588->g_250.f0 > 43); ++p_588->g_250.f0)
            { /* block id: 93 */
                uint64_t l_324 = 0xE9C1B7322BF575D4L;
                uint32_t l_377 = 0xAD5A4714L;
                struct S0 *l_378 = &p_588->g_103;
                for (p_588->g_250.f5 = (-11); (p_588->g_250.f5 <= 20); ++p_588->g_250.f5)
                { /* block id: 96 */
                    int32_t *l_319 = &p_588->g_103.f5;
                    int32_t *l_320 = (void*)0;
                    int32_t *l_321 = &l_24[1][2][0];
                    int32_t *l_322[7] = {&l_17,&l_17,&l_17,&l_17,&l_17,&l_17,&l_17};
                    struct S0 l_339 = {1UL,0x424C5DFDL,0x1C46L,0x79L,0x289039B5L,0L};
                    VECTOR(int32_t, 2) l_369 = (VECTOR(int32_t, 2))(1L, 0x6F8803F5L);
                    int i;
                    l_324++;
                    if ((safe_mul_func_uint16_t_u_u(l_329, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(0xE9D5L, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(p_588->g_330.s09)).yxxy)), 65534UL, 0UL, 0x2783L)))).s0)))
                    { /* block id: 98 */
                        int32_t ****l_333 = &p_588->g_331;
                        int64_t *l_335 = &p_588->g_336;
                        (*p_588->g_332) = func_28((l_324 || FAKE_DIVERGE(p_588->global_2_offset, get_global_id(2), 10)), p_588->g_109[0][3], ((*l_335) = (((*l_333) = p_588->g_331) == l_334)), ((*p_588->g_117) = (safe_lshift_func_uint8_t_u_s((l_324 >= GROUP_DIVERGE(2, 1)), l_324))), p_588);
                        if ((*p_588->g_35))
                            break;
                    }
                    else
                    { /* block id: 104 */
                        struct S0 *l_340 = &l_339;
                        (*l_340) = l_339;
                    }
                    for (p_588->g_175 = 18; (p_588->g_175 < 22); p_588->g_175 = safe_add_func_int64_t_s_s(p_588->g_175, 1))
                    { /* block id: 109 */
                        uint16_t *l_349 = (void*)0;
                        uint16_t *l_350 = (void*)0;
                        uint16_t *l_351 = (void*)0;
                        int32_t l_374 = 3L;
                        uint64_t *l_375 = (void*)0;
                        uint64_t *l_376 = &p_588->g_103.f0;
                        l_319 = ((*p_588->g_332) = (p_588->g_312 , (**p_588->g_331)));
                        return l_339;
                    }
                }
                l_378 = &p_588->g_103;
                return (*p_588->g_104);
            }
        }
        for (p_588->g_103.f2 = (-21); (p_588->g_103.f2 >= (-8)); p_588->g_103.f2 = safe_add_func_int16_t_s_s(p_588->g_103.f2, 9))
        { /* block id: 123 */
            int16_t l_383 = 0x1387L;
            if ((safe_mul_func_uint8_t_u_u(GROUP_DIVERGE(2, 1), l_383)))
            { /* block id: 124 */
                return (*p_588->g_104);
            }
            else
            { /* block id: 126 */
                return l_384;
            }
        }
        for (p_588->g_103.f2 = (-5); (p_588->g_103.f2 != (-18)); p_588->g_103.f2 = safe_sub_func_int64_t_s_s(p_588->g_103.f2, 4))
        { /* block id: 132 */
            int32_t *l_387[5] = {&p_588->g_103.f5,&p_588->g_103.f5,&p_588->g_103.f5,&p_588->g_103.f5,&p_588->g_103.f5};
            int64_t **l_418 = &l_255[5][0];
            int i;
            ++l_389;
            for (p_588->g_103.f4 = 23; (p_588->g_103.f4 != 24); ++p_588->g_103.f4)
            { /* block id: 136 */
                uint16_t l_399 = 0xC81FL;
                uint16_t *l_404 = (void*)0;
                uint16_t *l_405 = (void*)0;
                uint16_t *l_406[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                VECTOR(int16_t, 16) l_408 = (VECTOR(int16_t, 16))(0x57BCL, (VECTOR(int16_t, 4))(0x57BCL, (VECTOR(int16_t, 2))(0x57BCL, 0x57C2L), 0x57C2L), 0x57C2L, 0x57BCL, 0x57C2L, (VECTOR(int16_t, 2))(0x57BCL, 0x57C2L), (VECTOR(int16_t, 2))(0x57BCL, 0x57C2L), 0x57BCL, 0x57C2L, 0x57BCL, 0x57C2L);
                VECTOR(int16_t, 4) l_410 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 1L), 1L);
                int32_t l_413[4][5] = {{4L,0x1B3ADBFBL,4L,4L,0x1B3ADBFBL},{4L,0x1B3ADBFBL,4L,4L,0x1B3ADBFBL},{4L,0x1B3ADBFBL,4L,4L,0x1B3ADBFBL},{4L,0x1B3ADBFBL,4L,4L,0x1B3ADBFBL}};
                int i, j;
                l_384.f5 &= ((safe_mod_func_int32_t_s_s(((((VECTOR(uint64_t, 2))(l_396.s66)).even , (safe_sub_func_int32_t_s_s(((**p_588->g_332) = l_384.f0), l_399))) != ((l_399 && ((safe_mod_func_uint64_t_u_u(((l_413[0][0] = ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0x1D6AL, 0xDFA7L)).yyxx)), ((VECTOR(uint16_t, 2))(l_402.yx)), 65535UL, 65535UL)), ((VECTOR(uint16_t, 8))(l_403, (p_588->g_99.x = l_295.x), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(int16_t, 8))(p_588->g_407.s46633632)).lo, ((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_408.sd86919f3337e6452)))).s3f)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_409.s2422114373737434)).hi)))), ((VECTOR(int16_t, 4))(l_410.xyzx)), 1L, 1L)).hi, ((VECTOR(int16_t, 2))((-1L), 0x765CL)).xyyyyxyy))).even))), ((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 16))(l_411.s4c27ae9e777681c5)).hi, ((VECTOR(uint16_t, 8))(p_588->g_412.s73242223))))).lo))))), 0xFCEBL, 8UL)))).s1) , l_413[0][1]), ((safe_rshift_func_int16_t_s_u((0x50L != (safe_add_func_uint64_t_u_u(1UL, (l_418 != p_588->g_419)))), 11)) & l_420))) >= 255UL)) >= 0x0B616CD6730E5EC8L)), l_348)) , (*p_588->g_117));
                (*p_588->g_332) = l_387[2];
                if ((***l_334))
                    break;
                if ((**p_588->g_332))
                    break;
            }
        }
    }
    for (p_588->g_250.f3 = 0; (p_588->g_250.f3 > 36); ++p_588->g_250.f3)
    { /* block id: 149 */
        int32_t l_427 = 0x7C3F74EFL;
        VECTOR(int8_t, 16) l_434 = (VECTOR(int8_t, 16))(0x72L, (VECTOR(int8_t, 4))(0x72L, (VECTOR(int8_t, 2))(0x72L, 1L), 1L), 1L, 0x72L, 1L, (VECTOR(int8_t, 2))(0x72L, 1L), (VECTOR(int8_t, 2))(0x72L, 1L), 0x72L, 1L, 0x72L, 1L);
        int16_t *l_451[6][2] = {{(void*)0,&p_588->g_210},{(void*)0,&p_588->g_210},{(void*)0,&p_588->g_210},{(void*)0,&p_588->g_210},{(void*)0,&p_588->g_210},{(void*)0,&p_588->g_210}};
        int8_t l_453 = 0L;
        int32_t **l_483 = (void*)0;
        int32_t l_550[3][10][8] = {{{0x4F05E829L,0x52F95376L,9L,3L,1L,(-4L),3L,5L},{0x4F05E829L,0x52F95376L,9L,3L,1L,(-4L),3L,5L},{0x4F05E829L,0x52F95376L,9L,3L,1L,(-4L),3L,5L},{0x4F05E829L,0x52F95376L,9L,3L,1L,(-4L),3L,5L},{0x4F05E829L,0x52F95376L,9L,3L,1L,(-4L),3L,5L},{0x4F05E829L,0x52F95376L,9L,3L,1L,(-4L),3L,5L},{0x4F05E829L,0x52F95376L,9L,3L,1L,(-4L),3L,5L},{0x4F05E829L,0x52F95376L,9L,3L,1L,(-4L),3L,5L},{0x4F05E829L,0x52F95376L,9L,3L,1L,(-4L),3L,5L},{0x4F05E829L,0x52F95376L,9L,3L,1L,(-4L),3L,5L}},{{0x4F05E829L,0x52F95376L,9L,3L,1L,(-4L),3L,5L},{0x4F05E829L,0x52F95376L,9L,3L,1L,(-4L),3L,5L},{0x4F05E829L,0x52F95376L,9L,3L,1L,(-4L),3L,5L},{0x4F05E829L,0x52F95376L,9L,3L,1L,(-4L),3L,5L},{0x4F05E829L,0x52F95376L,9L,3L,1L,(-4L),3L,5L},{0x4F05E829L,0x52F95376L,9L,3L,1L,(-4L),3L,5L},{0x4F05E829L,0x52F95376L,9L,3L,1L,(-4L),3L,5L},{0x4F05E829L,0x52F95376L,9L,3L,1L,(-4L),3L,5L},{0x4F05E829L,0x52F95376L,9L,3L,1L,(-4L),3L,5L},{0x4F05E829L,0x52F95376L,9L,3L,1L,(-4L),3L,5L}},{{0x4F05E829L,0x52F95376L,9L,3L,1L,(-4L),3L,5L},{0x4F05E829L,0x52F95376L,9L,3L,1L,(-4L),3L,5L},{0x4F05E829L,0x52F95376L,9L,3L,1L,(-4L),3L,5L},{0x4F05E829L,0x52F95376L,9L,3L,1L,(-4L),3L,5L},{0x4F05E829L,0x52F95376L,9L,3L,1L,(-4L),3L,5L},{0x4F05E829L,0x52F95376L,9L,3L,1L,(-4L),3L,5L},{0x4F05E829L,0x52F95376L,9L,3L,1L,(-4L),3L,5L},{0x4F05E829L,0x52F95376L,9L,3L,1L,(-4L),3L,5L},{0x4F05E829L,0x52F95376L,9L,3L,1L,(-4L),3L,5L},{0x4F05E829L,0x52F95376L,9L,3L,1L,(-4L),3L,5L}}};
        int32_t l_557[5][4] = {{0x48F5A78CL,(-4L),(-4L),0x48F5A78CL},{0x48F5A78CL,(-4L),(-4L),0x48F5A78CL},{0x48F5A78CL,(-4L),(-4L),0x48F5A78CL},{0x48F5A78CL,(-4L),(-4L),0x48F5A78CL},{0x48F5A78CL,(-4L),(-4L),0x48F5A78CL}};
        struct S0 l_563 = {1UL,0x3C4E3B47L,0x4495L,0xD6L,-1L,-1L};
        int i, j, k;
        (**p_588->g_332) = (safe_rshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u(p_588->g_336, (l_427 != (l_427 , p_588->g_223.w)))), (((((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((((VECTOR(uint16_t, 4))(abs(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 8))(l_432.sbf9f11c0)).even, ((VECTOR(uint16_t, 2))(l_433.s12)).yyxy))), 65535UL, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(abs(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 16))(l_434.sd05925ae1db8abf7)).s30, ((VECTOR(uint8_t, 16))(0x3BL, (safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(((*l_25) = ((((safe_rshift_func_uint16_t_u_u(l_434.sf, (((safe_rshift_func_int16_t_s_u((p_588->g_210 = (safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 4))(p_588->g_447.s37bf)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 2))(0UL, 5UL)).xyxyxyxy, ((VECTOR(uint16_t, 4))(p_588->g_448.yyyy)).zwxyyzyw))))).lo))), ((VECTOR(uint16_t, 2))(1UL, 0x75A0L)), 0xF654L, 65530UL)).odd, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 2))(l_449.zy)).yyyyxyxx, ((VECTOR(uint16_t, 4))(65530UL, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0x99F2L, 0x8580L)), 0UL, 65535UL)), ((((&p_588->g_336 == (p_588->g_450 , &p_588->g_336)) == p_588->g_250.f5) , &p_588->g_146[0][0]) != (void*)0), FAKE_DIVERGE(p_588->group_2_offset, get_group_id(2), 10), 0x2550L, 0x6AE8L)).s5, 0xD463L, ((VECTOR(uint16_t, 2))(0x6E64L)), ((VECTOR(uint16_t, 4))(65534UL)))).s7, 6UL, 0xF5A4L)).yzxwzwzw))).s5532337130111211)).s0b)))), 0UL, 0x051CL, 65535UL, 1UL, 0xC07DL, 0xDB45L, ((VECTOR(uint16_t, 4))(4UL)), ((VECTOR(uint16_t, 4))(1UL)))).s7081))).z, 11))), 3)) || FAKE_DIVERGE(p_588->global_2_offset, get_global_id(2), 10)) || FAKE_DIVERGE(p_588->local_2_offset, get_local_id(2), 10)))) <= 248UL) != p_588->g_120) && l_434.s4)), p_588->g_191.s3)) , (-1L)), p_588->g_146[4][0])), l_295.y)), 0xC3L, p_588->g_190.s7, ((VECTOR(uint8_t, 8))(0x71L)), 255UL, ((VECTOR(uint8_t, 2))(0x3DL)), 0x76L)).sf8))), 0x61B8L, 0L)).hi))), ((VECTOR(uint16_t, 2))(65535UL)), ((VECTOR(uint16_t, 4))(0xF3A5L)))), 0x29B0L, 65526UL, 0x8424L)), ((VECTOR(uint16_t, 16))(0x7796L))))).s0c71, ((VECTOR(uint16_t, 4))(0xDA1AL))))).odd)).xxyy)).wzwxwzwxxxwyyywy)).s3cef))).y , 65535UL), l_434.s0)), l_433.s4)) < l_427) , l_452) < l_434.s2) || l_409.s5)));
        if (l_453)
            break;
        for (l_453 = 3; (l_453 >= 13); l_453++)
        { /* block id: 156 */
            int16_t l_456 = 0x40A4L;
            int16_t **l_457 = &l_451[0][0];
            int16_t **l_458 = (void*)0;
            int32_t l_463 = 1L;
            struct S0 l_554 = {0x8AB3D4352A719A52L,-5L,1L,0x0BL,0L,0L};
            int32_t *l_555 = (void*)0;
            int32_t *l_556[9][3] = {{&l_427,&l_17,(void*)0},{&l_427,&l_17,(void*)0},{&l_427,&l_17,(void*)0},{&l_427,&l_17,(void*)0},{&l_427,&l_17,(void*)0},{&l_427,&l_17,(void*)0},{&l_427,&l_17,(void*)0},{&l_427,&l_17,(void*)0},{&l_427,&l_17,(void*)0}};
            int32_t l_558 = 5L;
            uint32_t l_559 = 1UL;
            int i, j;
            if ((((((l_456 > ((-4L) < (l_434.s2 & l_456))) == (p_588->g_419 != (void*)0)) , (l_15 = ((*l_457) = &p_588->g_210))) == (((safe_lshift_func_uint16_t_u_s((l_309 &= 1UL), 9)) , (safe_rshift_func_int16_t_s_u((l_348 & l_434.sa), l_456))) , &p_588->g_21)) || p_588->g_174))
            { /* block id: 160 */
                int64_t l_464 = (-1L);
                l_463 &= (**p_588->g_332);
                if (l_464)
                    continue;
                if ((**p_588->g_332))
                    break;
            }
            else
            { /* block id: 164 */
                uint32_t *l_465 = &l_348;
                VECTOR(int32_t, 2) l_472 = (VECTOR(int32_t, 2))(0x4783345DL, 0x3580966CL);
                int8_t l_484 = 0x2AL;
                int i;
                if ((((*l_465) = 4294967295UL) <= (safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(0x1CL, (safe_rshift_func_uint16_t_u_u(l_472.x, (l_433.s7 | 0x14C22A94B44C1FF5L))))), (p_588->g_250.f2 &= ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 2))(p_588->g_473.s51)).xyxx, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(p_588->g_474.zz)).xyyxyyyy)).s54, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((((*l_15) = (safe_sub_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s(((safe_add_func_uint64_t_u_u(GROUP_DIVERGE(1, 1), p_588->g_223.w)) > (p_588->g_103.f0 , (((*p_588->g_331) = (*p_588->g_331)) != l_483))), l_484)) || 255UL), p_588->g_448.y))) >= GROUP_DIVERGE(2, 1)) != p_588->g_250.f1), ((VECTOR(int16_t, 2))(0x14E1L)), 0x3DE9L, l_452, l_484, 0x62FAL, 6L)).even)).hi))).yxxx))))))).w)))))
                { /* block id: 169 */
                    uint16_t **l_508 = &p_588->g_230;
                    int32_t *l_509[9];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_509[i] = &p_588->g_175;
                    p_588->g_250.f5 &= (safe_rshift_func_uint16_t_u_s((1L == 65535UL), (((0x4E7EL <= ((&p_588->g_228 == &p_588->g_228) != ((((safe_mod_func_int16_t_s_s(l_17, ((safe_unary_minus_func_int32_t_s(l_456)) | (((!(safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(l_463, ((safe_div_func_uint16_t_u_u((((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((safe_add_func_int16_t_s_s((((((safe_rshift_func_uint8_t_u_s(p_588->g_474.w, p_588->g_250.f3)) , l_384.f5) & 0UL) && l_506) < p_588->g_507), 1L)), 0x2362L)), p_588->g_210)), l_433.s0)) < (**p_588->g_332)) ^ (**p_588->g_332)), l_472.x)) & p_588->g_103.f2))), 248UL))) & p_588->g_312) , p_588->g_292.s6)))) , (-3L)) , &p_588->g_228) != l_508))) & 0L) == p_588->g_473.s4)));
                    if ((atomic_inc(&p_588->g_atomic_input[29 * get_linear_group_id() + 9]) == 4))
                    { /* block id: 172 */
                        uint16_t l_510 = 0UL;
                        int32_t l_513 = 0x299D5E39L;
                        uint64_t l_514[1];
                        uint8_t l_515 = 0xB8L;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_514[i] = 0UL;
                        --l_510;
                        l_515 |= (l_514[0] ^= l_513);
                        unsigned int result = 0;
                        result += l_510;
                        result += l_513;
                        int l_514_i0;
                        for (l_514_i0 = 0; l_514_i0 < 1; l_514_i0++) {
                            result += l_514[l_514_i0];
                        }
                        result += l_515;
                        atomic_add(&p_588->g_special_values[29 * get_linear_group_id() + 9], result);
                    }
                    else
                    { /* block id: 176 */
                        (1 + 1);
                    }
                }
                else
                { /* block id: 179 */
                    int32_t l_526 = 0x2018DA9FL;
                    int32_t *l_551 = &p_588->g_250.f1;
                    int8_t *l_552[2];
                    struct S0 *l_553[10] = {&p_588->g_103,&p_588->g_103,&p_588->g_103,&p_588->g_103,&p_588->g_103,&p_588->g_103,&p_588->g_103,&p_588->g_103,&p_588->g_103,&p_588->g_103};
                    int i;
                    for (i = 0; i < 2; i++)
                        l_552[i] = (void*)0;
                    atomic_sub(&p_588->g_atomic_reduction[get_linear_group_id()], ((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))((+0x2B0FL), ((safe_lshift_func_int16_t_s_u((p_588->g_14.s3 ^= ((safe_rshift_func_uint16_t_u_u(l_472.y, 13)) && ((safe_mod_func_int32_t_s_s((*p_588->g_35), (p_588->g_507 &= p_588->g_250.f3))) > ((VECTOR(uint8_t, 4))((((p_588->g_250.f0 < (((safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u(((((*l_15) = (l_526 ^ (safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 2))(l_529.yy)).odd, ((safe_lshift_func_int8_t_s_u(((safe_sub_func_int8_t_s_s((p_588->g_534.y = ((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(p_588->g_534.zwxyxwyw)).hi)).xywwxwxwxyyyxzxx, (int8_t)((safe_div_func_int64_t_s_s((((*l_551) = (((((VECTOR(uint8_t, 2))(p_588->g_537.zy)).lo , (safe_mod_func_uint64_t_u_u((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(0x26FCD628AE8DCF50L, ((VECTOR(uint64_t, 4))(p_588->g_540.s0542)), (safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((l_526 , (safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(p_588->g_547.sc1)).hi, ((!(safe_mul_func_uint8_t_u_u(p_588->g_447.sa, l_409.s7))) && l_526)))), p_588->g_447.s0)), p_588->g_250.f3)), 0x0E9382FCDAA8B12FL, 0xDCA6E97EE7698742L)))).s6 , l_550[0][1][5]), 0x18336A1777DA3867L))) >= (-1L)) , 3L)) , l_550[2][0][7]), p_588->g_163)) | FAKE_DIVERGE(p_588->global_0_offset, get_global_id(0), 10))))).s9685)).lo))), ((VECTOR(int8_t, 2))(1L)), ((VECTOR(int8_t, 2))(7L))))).lo), GROUP_DIVERGE(2, 1))) | l_268.y), p_588->g_537.w)) , p_588->g_540.s5))))) , p_588->g_191.s3) & l_384.f3), l_472.y)), p_588->g_241)) , 0x473026D9L) , p_588->g_312)) , p_588->g_537.y) >= l_526), ((VECTOR(uint8_t, 2))(246UL)), 0x06L)).w))), 3)) > p_588->g_336), ((VECTOR(int16_t, 8))(9L)), l_348, l_526, 0x403EL, l_529.y, 3L, 0x6FCEL)).odd)).s5 != l_463) & 0x84E471A6L));
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if (get_linear_local_id() == 0)
                        p_588->v_collective += p_588->g_atomic_reduction[get_linear_group_id()];
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    l_554 = (*p_588->g_104);
                }
            }
            l_559++;
            (*p_588->g_562) = (*p_588->g_104);
            return l_563;
        }
        if (l_295.y)
            continue;
    }
    (***p_588->g_331) = (safe_div_func_uint16_t_u_u((((safe_sub_func_int16_t_s_s(((*l_570) = 0x5C42L), (&p_588->g_21 != (void*)0))) && l_300) , (l_257 != ((~(~((((VECTOR(int8_t, 2))((-2L), 6L)).hi == (safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(p_588->g_573.s16)).yyxx)).even)).hi, 0))) <= ((*l_257) ^= (safe_div_func_uint8_t_u_u((((((safe_mul_func_int8_t_s_s(0L, (((safe_rshift_func_uint16_t_u_s((p_588->g_191.s5 , (safe_lshift_func_uint8_t_u_u(((***p_588->g_331) < (safe_unary_minus_func_uint16_t_u(((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 4))(9UL, 0xE9FBL, 65527UL, 0x058DL)), ((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 8))(65535UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 16))(0xE782L, ((VECTOR(uint16_t, 8))(p_588->g_583.zyxzyyxy)), 1UL, 0x2F2CL, 1UL, ((*l_587) |= (safe_sub_func_int16_t_s_s(l_27.sd, l_24[3][1][0]))), 65535UL, 4UL, 0x2B33L)).even, ((VECTOR(uint16_t, 8))(65535UL)), ((VECTOR(uint16_t, 8))(0x61D9L))))).s54)).odd, l_295.y, ((VECTOR(uint16_t, 2))(5UL)), 65532UL, 0x8CEEL, 0UL)).even, ((VECTOR(uint16_t, 4))(0xF03EL)))))))).y))), p_588->g_146[6][0]))), 0)) < p_588->g_573.s4) >= l_384.f1))) ^ (**p_588->g_332)) ^ GROUP_DIVERGE(2, 1)) > p_588->g_175) != p_588->g_26), l_529.y)))))) , (void*)0))), 0xBB42L));
    return (*p_588->g_562);
}


/* ------------------------------------------ */
/* 
 * reads : p_588->g_223 p_588->g_228 p_588->g_230 p_588->g_103.f0 p_588->g_191 p_588->g_117 p_588->g_118 p_588->g_241 p_588->g_175
 * writes: p_588->g_228 p_588->g_230 p_588->g_120 p_588->g_118 p_588->g_241 p_588->g_175
 */
int32_t * func_28(int32_t  p_29, int32_t  p_30, int64_t  p_31, int32_t  p_32, struct S1 * p_588)
{ /* block id: 58 */
    uint16_t *l_220 = (void*)0;
    int32_t l_221 = 1L;
    uint16_t **l_229[1];
    int64_t *l_231 = &p_588->g_120;
    int32_t l_232 = 0x79082D22L;
    int32_t *l_233 = &p_588->g_175;
    int32_t *l_234 = (void*)0;
    int32_t *l_235 = &l_232;
    int32_t *l_236 = &p_588->g_118;
    int32_t *l_237 = (void*)0;
    int32_t *l_238 = (void*)0;
    int32_t *l_239 = &l_232;
    int32_t *l_240[6][1] = {{&l_232},{&l_232},{&l_232},{&l_232},{&l_232},{&l_232}};
    int i, j;
    for (i = 0; i < 1; i++)
        l_229[i] = &p_588->g_228;
    (*p_588->g_117) |= (!(safe_rshift_func_uint16_t_u_s((l_221 = (safe_mod_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u((l_220 == (void*)0), p_29)) || l_221) || ((((VECTOR(uint16_t, 16))((safe_unary_minus_func_int32_t_s((((VECTOR(int16_t, 16))(p_588->g_223.yxwyzxzwxzwwwxzy)).s1 > (4L ^ ((*l_231) = ((~(safe_rshift_func_int8_t_s_u((0UL ^ (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(0x212CL, (p_32 <= ((p_588->g_228 = p_588->g_228) == (p_588->g_230 = p_588->g_230))), l_221, l_221, 0xDFF2L, ((VECTOR(uint16_t, 2))(1UL)), 65530UL)).s3, p_588->g_103.f0))), l_221))) < p_31)))))), ((VECTOR(uint16_t, 2))(0xC339L)), ((VECTOR(uint16_t, 8))(0xF11EL)), FAKE_DIVERGE(p_588->local_0_offset, get_local_id(0), 10), 0xC324L, FAKE_DIVERGE(p_588->global_1_offset, get_global_id(1), 10), 0UL, 0x1900L)).s8 ^ p_588->g_191.sa) > p_30)), 0x1814L))), l_232)));
    p_588->g_241++;
    return &p_588->g_175;
}


/* ------------------------------------------ */
/* 
 * reads : p_588->g_117 p_588->g_35 p_588->g_36 p_588->g_118 p_588->g_20 p_588->g_190 p_588->g_103.f2 p_588->g_191 p_588->g_comm_values p_588->g_210
 * writes: p_588->g_118 p_588->g_99 p_588->g_36
 */
int32_t  func_38(int32_t * p_39, struct S1 * p_588)
{ /* block id: 49 */
    VECTOR(int32_t, 2) l_180 = (VECTOR(int32_t, 2))(1L, 0x6F08E0E4L);
    VECTOR(int32_t, 8) l_181 = (VECTOR(int32_t, 8))(0x6D313F7AL, (VECTOR(int32_t, 4))(0x6D313F7AL, (VECTOR(int32_t, 2))(0x6D313F7AL, 1L), 1L), 1L, 0x6D313F7AL, 1L);
    VECTOR(int32_t, 8) l_182 = (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 1L), 1L), 1L, 9L, 1L);
    VECTOR(int32_t, 2) l_183 = (VECTOR(int32_t, 2))(0L, 0L);
    VECTOR(int32_t, 2) l_184 = (VECTOR(int32_t, 2))(0L, (-1L));
    VECTOR(int32_t, 2) l_187 = (VECTOR(int32_t, 2))(4L, 0x590541D0L);
    uint16_t *l_192 = (void*)0;
    uint16_t *l_193 = (void*)0;
    uint16_t *l_194 = (void*)0;
    uint16_t *l_195 = (void*)0;
    uint16_t *l_196 = (void*)0;
    uint16_t *l_197 = (void*)0;
    uint16_t *l_198 = (void*)0;
    uint16_t *l_199 = (void*)0;
    uint16_t *l_200 = (void*)0;
    uint16_t *l_201 = (void*)0;
    uint32_t l_202[6];
    uint8_t *l_207 = (void*)0;
    uint8_t *l_208 = (void*)0;
    uint8_t *l_209[5] = {&p_588->g_26,&p_588->g_26,&p_588->g_26,&p_588->g_26,&p_588->g_26};
    int32_t l_211 = 5L;
    int i;
    for (i = 0; i < 6; i++)
        l_202[i] = 1UL;
    (*p_588->g_117) = ((VECTOR(int32_t, 2))(1L, 0x637144D6L)).hi;
    (*p_588->g_117) &= (*p_588->g_35);
    (*p_588->g_35) ^= ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_180.yyxxxxyxyxxyyxyy)).sa3a9)).wwwwzxyz)).s40, ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_181.s55162132)).hi)).wzwxwwzz, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(l_182.s3147)).hi, (int32_t)l_181.s0))).xxyxyyxy, ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(l_183.yx)), ((VECTOR(int32_t, 4))(0L, 0x707CB16BL, 0L, (-1L))).lo, ((VECTOR(int32_t, 16))(3L, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))((*p_588->g_117), (-4L), ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(l_184.yxxyyxyx)).s21, (int32_t)(((void*)0 != p_588->g_20[1][2][1]) == ((safe_add_func_int32_t_s_s(l_180.y, ((VECTOR(int32_t, 4))(l_187.yxyx)).y)) | ((p_588->g_99.y = (safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(p_588->g_190.s2212424047747154)).s0a)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(1UL, 65535UL)), 65532UL, 1UL)), ((VECTOR(uint16_t, 8))(0UL, p_588->g_103.f2, ((VECTOR(uint16_t, 4))(p_588->g_191.s5418)), 65535UL, 0xB026L)), 0x5A28L, 0x6CC7L)).s8, 13))) ^ ((l_202[4] < (safe_mul_func_uint8_t_u_u((l_184.y = (safe_div_func_int64_t_s_s(p_588->g_190.s1, 18446744073709551615UL))), 1L))) && p_588->g_comm_values[p_588->tid]))))))).xyyy)).even)))), ((VECTOR(int32_t, 4))(0x5FA92D0FL)), 0x3B9E6809L, 1L)).even, ((VECTOR(int32_t, 4))(1L))))), 0x5D36CBC2L, (-1L))).hi, ((VECTOR(int32_t, 4))(0x207872F4L))))), ((VECTOR(int32_t, 4))(0x263B0F01L)), 0x525ACAF8L, p_588->g_210, l_184.y, ((VECTOR(int32_t, 4))(0L)))).s2c))).xyyxxyxx, ((VECTOR(int32_t, 8))(0x77CA1CA5L)))))))).s04))).yyxyxxxy, (int32_t)l_182.s4, (int32_t)l_211))).s6;
    return l_184.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_588->g_103.f0 p_588->g_177 p_588->g_174
 * writes: p_588->g_103.f0 p_588->g_177
 */
int64_t  func_40(uint8_t * p_41, uint32_t  p_42, struct S1 * p_588)
{ /* block id: 41 */
    int8_t l_167 = 0L;
    int32_t l_170 = 0x4D0B19FEL;
    int32_t l_171 = (-9L);
    int32_t l_172 = (-1L);
    int32_t l_173 = (-1L);
    int32_t l_176 = 4L;
    for (p_588->g_103.f0 = 0; (p_588->g_103.f0 == 42); p_588->g_103.f0 = safe_add_func_uint16_t_u_u(p_588->g_103.f0, 9))
    { /* block id: 44 */
        int32_t l_168 = 0x432ADD22L;
        int32_t *l_169[6];
        int i;
        for (i = 0; i < 6; i++)
            l_169[i] = &l_168;
        ++p_588->g_177;
        return p_588->g_174;
    }
    return p_42;
}


/* ------------------------------------------ */
/* 
 * reads : p_588->g_117 p_588->g_103.f5 p_588->g_26 p_588->g_21 p_588->g_14 p_588->g_103.f2 p_588->g_118 p_588->g_103.f3 p_588->g_146 p_588->g_96 p_588->g_103.f1 p_588->g_163
 * writes: p_588->g_118 p_588->g_26 p_588->g_146 p_588->g_120 p_588->g_99 p_588->g_163
 */
uint8_t * func_43(uint64_t  p_44, int16_t * p_45, uint8_t * p_46, int32_t * p_47, int32_t  p_48, struct S1 * p_588)
{ /* block id: 30 */
    VECTOR(int32_t, 16) l_127 = (VECTOR(int32_t, 16))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x4286F750L), 0x4286F750L), 0x4286F750L, 8L, 0x4286F750L, (VECTOR(int32_t, 2))(8L, 0x4286F750L), (VECTOR(int32_t, 2))(8L, 0x4286F750L), 8L, 0x4286F750L, 8L, 0x4286F750L);
    int32_t *l_130 = &p_588->g_103.f5;
    uint32_t l_139 = 0xD269C2A3L;
    uint32_t l_144[5][10][5] = {{{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L}},{{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L}},{{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L}},{{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L}},{{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L},{4294967295UL,1UL,4294967292UL,4294967295UL,0xEE7B7676L}}};
    int32_t *l_145[3][8] = {{&p_588->g_103.f5,(void*)0,&p_588->g_103.f5,(void*)0,(void*)0,(void*)0,&p_588->g_103.f5,(void*)0},{&p_588->g_103.f5,(void*)0,&p_588->g_103.f5,(void*)0,(void*)0,(void*)0,&p_588->g_103.f5,(void*)0},{&p_588->g_103.f5,(void*)0,&p_588->g_103.f5,(void*)0,(void*)0,(void*)0,&p_588->g_103.f5,(void*)0}};
    int32_t **l_150 = &l_130;
    int32_t ***l_149 = &l_150;
    int32_t **l_152 = &l_145[2][4];
    int32_t ***l_151 = &l_152;
    int64_t *l_157 = &p_588->g_120;
    VECTOR(int64_t, 16) l_160 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x28FA4D6DC9EE6F4BL), 0x28FA4D6DC9EE6F4BL), 0x28FA4D6DC9EE6F4BL, 0L, 0x28FA4D6DC9EE6F4BL, (VECTOR(int64_t, 2))(0L, 0x28FA4D6DC9EE6F4BL), (VECTOR(int64_t, 2))(0L, 0x28FA4D6DC9EE6F4BL), 0L, 0x28FA4D6DC9EE6F4BL, 0L, 0x28FA4D6DC9EE6F4BL);
    int32_t l_161 = 0L;
    uint16_t *l_162[5][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
    uint8_t *l_164 = &p_588->g_103.f3;
    int i, j, k;
    (*p_588->g_117) = (safe_sub_func_uint32_t_u_u((+0UL), ((VECTOR(int32_t, 8))(l_127.s0b1cac37)).s6));
    p_588->g_146[4][0] |= ((safe_mod_func_uint16_t_u_u((((l_130 == (void*)0) || ((safe_sub_func_uint8_t_u_u(FAKE_DIVERGE(p_588->group_1_offset, get_group_id(1), 10), (0x6CF5L != (safe_mul_func_uint8_t_u_u(((((*l_130) , (safe_rshift_func_uint8_t_u_u((++(*p_46)), p_588->g_21))) == l_139) | ((p_588->g_14.s5 >= (((((safe_lshift_func_uint8_t_u_u(((((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))((+(safe_add_func_uint64_t_u_u(p_588->g_103.f2, p_48))), ((VECTOR(uint8_t, 4))(249UL)), ((VECTOR(uint8_t, 2))(0x96L)), 0xA3L)).s7636370367716016)).s6 , (void*)0) != &p_47), 0)) >= 0xB3L) ^ p_588->g_103.f2) ^ (*p_47)) <= (*p_588->g_117))) , 1L)), p_44))))) != (-1L))) >= p_588->g_103.f3), l_144[3][5][4])) == 1UL);
    p_588->g_163 &= (((*p_46) = (safe_rshift_func_uint16_t_u_u((((0x197DAF00FA5D7BF6L != p_588->g_96.sf) , &p_588->g_34) != ((*l_151) = ((*l_149) = &p_588->g_117))), (p_588->g_99.x = (((safe_add_func_uint64_t_u_u((((safe_mod_func_int64_t_s_s(((*l_157) = p_588->g_26), (1L || p_588->g_118))) ^ (safe_lshift_func_uint8_t_u_s(p_588->g_103.f1, 2))) || (((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 8))(l_160.s5c2cf825)).s4350522225204676))).s9f5b)).hi)).even <= l_161)), p_48)) <= p_588->g_103.f5) >= p_48))))) || 0x43L);
    return l_164;
}


/* ------------------------------------------ */
/* 
 * reads : p_588->g_117 p_588->g_118
 * writes: p_588->g_117
 */
uint8_t  func_51(uint64_t  p_52, uint64_t  p_53, int8_t  p_54, struct S1 * p_588)
{ /* block id: 26 */
    int32_t **l_121 = &p_588->g_117;
    int32_t *l_122 = (void*)0;
    l_122 = ((*l_121) = &p_588->g_118);
    return (**l_121);
}


/* ------------------------------------------ */
/* 
 * reads : p_588->g_104 p_588->g_103 p_588->g_96
 * writes: p_588->g_103
 */
uint64_t  func_55(uint8_t * p_56, int16_t * p_57, uint8_t  p_58, int32_t * p_59, uint8_t  p_60, struct S1 * p_588)
{ /* block id: 23 */
    struct S0 *l_119 = &p_588->g_103;
    (*l_119) = (*p_588->g_104);
    return p_588->g_96.se;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint8_t * func_61(int64_t  p_62, struct S1 * p_588)
{ /* block id: 20 */
    VECTOR(uint16_t, 2) l_113 = (VECTOR(uint16_t, 2))(65535UL, 0xCE15L);
    uint8_t *l_116 = &p_588->g_26;
    int i;
    ++l_113.y;
    return l_116;
}


/* ------------------------------------------ */
/* 
 * reads : p_588->g_36
 * writes:
 */
int64_t  func_63(int16_t * p_64, uint8_t * p_65, struct S1 * p_588)
{ /* block id: 18 */
    return p_588->g_36;
}


/* ------------------------------------------ */
/* 
 * reads : p_588->g_26 p_588->g_96 p_588->g_99 p_588->g_14 p_588->g_comm_values p_588->g_103 p_588->g_104 p_588->g_109
 * writes: p_588->g_103 p_588->g_109
 */
int16_t * func_66(uint8_t * p_67, uint16_t  p_68, uint8_t  p_69, int64_t  p_70, uint32_t  p_71, struct S1 * p_588)
{ /* block id: 8 */
    uint8_t l_85 = 254UL;
    struct S0 l_86[2] = {{0UL,-8L,0x6797L,0xDAL,0x46393907L,0x63015D2CL},{0UL,-8L,0x6797L,0xDAL,0x46393907L,0x63015D2CL}};
    VECTOR(int16_t, 16) l_88 = (VECTOR(int16_t, 16))(0x4BDEL, (VECTOR(int16_t, 4))(0x4BDEL, (VECTOR(int16_t, 2))(0x4BDEL, (-7L)), (-7L)), (-7L), 0x4BDEL, (-7L), (VECTOR(int16_t, 2))(0x4BDEL, (-7L)), (VECTOR(int16_t, 2))(0x4BDEL, (-7L)), 0x4BDEL, (-7L), 0x4BDEL, (-7L));
    int32_t l_90 = 0x3BAA24DDL;
    int64_t l_102 = (-1L);
    int32_t l_107 = 0x0B5AE593L;
    int32_t l_108 = 0x0B64A6F6L;
    int16_t *l_112 = (void*)0;
    int i;
    for (p_69 = 0; (p_69 <= 28); p_69 = safe_add_func_uint8_t_u_u(p_69, 8))
    { /* block id: 11 */
        int32_t *l_87 = &l_86[0].f5;
        int16_t *l_89[2][6];
        VECTOR(uint8_t, 4) l_95 = (VECTOR(uint8_t, 4))(3UL, (VECTOR(uint8_t, 2))(3UL, 0x74L), 0x74L);
        VECTOR(uint16_t, 2) l_97 = (VECTOR(uint16_t, 2))(0x60C4L, 0x6C84L);
        VECTOR(uint16_t, 4) l_98 = (VECTOR(uint16_t, 4))(0x2AA9L, (VECTOR(uint16_t, 2))(0x2AA9L, 9UL), 9UL);
        VECTOR(uint16_t, 2) l_100 = (VECTOR(uint16_t, 2))(0x8F16L, 1UL);
        VECTOR(uint16_t, 8) l_101 = (VECTOR(uint16_t, 8))(0xAE72L, (VECTOR(uint16_t, 4))(0xAE72L, (VECTOR(uint16_t, 2))(0xAE72L, 0UL), 0UL), 0UL, 0xAE72L, 0UL);
        int32_t *l_105 = &l_90;
        int32_t *l_106[1][6][10] = {{{&p_588->g_103.f5,&p_588->g_103.f5,(void*)0,&l_86[0].f5,&l_90,&l_86[0].f5,&l_86[0].f5,&p_588->g_103.f5,&l_86[0].f5,&l_86[0].f5},{&p_588->g_103.f5,&p_588->g_103.f5,(void*)0,&l_86[0].f5,&l_90,&l_86[0].f5,&l_86[0].f5,&p_588->g_103.f5,&l_86[0].f5,&l_86[0].f5},{&p_588->g_103.f5,&p_588->g_103.f5,(void*)0,&l_86[0].f5,&l_90,&l_86[0].f5,&l_86[0].f5,&p_588->g_103.f5,&l_86[0].f5,&l_86[0].f5},{&p_588->g_103.f5,&p_588->g_103.f5,(void*)0,&l_86[0].f5,&l_90,&l_86[0].f5,&l_86[0].f5,&p_588->g_103.f5,&l_86[0].f5,&l_86[0].f5},{&p_588->g_103.f5,&p_588->g_103.f5,(void*)0,&l_86[0].f5,&l_90,&l_86[0].f5,&l_86[0].f5,&p_588->g_103.f5,&l_86[0].f5,&l_86[0].f5},{&p_588->g_103.f5,&p_588->g_103.f5,(void*)0,&l_86[0].f5,&l_90,&l_86[0].f5,&l_86[0].f5,&p_588->g_103.f5,&l_86[0].f5,&l_86[0].f5}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 6; j++)
                l_89[i][j] = (void*)0;
        }
        (*p_588->g_104) = (((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(min(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(1UL, 18446744073709551612UL)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(18446744073709551608UL, ((VECTOR(uint64_t, 2))(2UL, 0x4AF31781FA89BF98L)), 1UL, (0xF7L | ((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 16))((-10L), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 8))((-1L), 1L, ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))((-5L), 1L)))), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))((safe_mul_func_uint8_t_u_u((~((-1L) && (safe_rshift_func_uint8_t_u_u((*p_67), ((l_90 = (GROUP_DIVERGE(2, 1) & (safe_mul_func_uint8_t_u_u(FAKE_DIVERGE(p_588->global_1_offset, get_global_id(1), 10), ((p_70 == ((*l_87) = (l_85 | (l_86[0] , ((VECTOR(int64_t, 2))(0L, 0x085ED16D00E5BD8EL)).lo)))) <= ((VECTOR(int16_t, 4))(l_88.s431c)).w))))) < (safe_mod_func_uint32_t_u_u((0x220CCB0868ECCAC4L == (((-9L) <= (safe_div_func_int8_t_s_s((((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_95.yxzz)).wwzwwyyx)).s2131166703103671)))).s3f, ((VECTOR(uint8_t, 4))(abs(((VECTOR(uint8_t, 4))(p_588->g_96.s6bd3))))).even))).yyxyyyyy, ((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 8))((((((VECTOR(uint16_t, 16))(max(((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),VECTOR(uint16_t, 8),((VECTOR(uint16_t, 2))(65535UL, 0x9D1CL)).xyxxxyyx, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),VECTOR(uint16_t, 8),((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_97.xxxy)).wwyzxwyxyyzywzwy)).s8b)))).xxxyyyyy, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_98.xy)), 65531UL, 65534UL)).yzwzzzyz, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(p_588->g_99.xxxxxxyx)).odd)).even, ((VECTOR(uint16_t, 16))(l_100.yxyxxyyxyyyxxxxx)).scd, ((VECTOR(uint16_t, 16))(0UL, 65532UL, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 2))(0xA17DL, 0UL)).yxyx, ((VECTOR(uint16_t, 2))(l_101.s55)).xyxy))).xwwyxzzx)), ((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(uint16_t, 4))(65535UL, p_588->g_96.sa, 0x8964L, 1UL)), ((VECTOR(uint16_t, 4))(0UL))))), 0xC7D6L, 0UL)).s40))).xyxyyxyx)).s4, l_102, 0x513AL, 0x904FL)).lo)), 65527UL, 1UL)).wywyzyzx))))).s73)), 1UL, GROUP_DIVERGE(2, 1), ((VECTOR(uint16_t, 2))(2UL)), 0xFB00L, ((VECTOR(uint16_t, 4))(65533UL)), p_588->g_26, 0x8AEAL, ((VECTOR(uint16_t, 2))(0x312DL)), 0xA3BDL)).hi, ((VECTOR(uint16_t, 8))(0UL))))).s1735232233044252, ((VECTOR(uint16_t, 16))(1UL))))).s7 != 65531UL) , (void*)0) == (void*)0), ((VECTOR(uint8_t, 4))(0xD3L)), 0x79L, 0xA1L, 1UL)), (uint8_t)p_588->g_26))), 1UL, ((VECTOR(uint8_t, 2))(1UL)), 0xBDL, 0x64L, ((VECTOR(uint8_t, 2))(0xBCL)), 0xF1L)).sec, ((VECTOR(uint8_t, 2))(249UL))))).xyxxyyyy, ((VECTOR(uint8_t, 8))(0x1FL))))).s4642575142734205)).sd && l_86[0].f3), (-1L)))) , 0x3929C85ED08B280BL)), 0x8A8358C8L))))))), p_71)), 0x5DL, 0x5CL, 1L, (-1L), 0x4EL, 0x36L, 8L)).s4406405055470711)).sde))), p_71, (-6L), 1L, (-5L))), ((VECTOR(int8_t, 8))(1L))))).s2263001434041345)).s4fa0, (int8_t)p_71))).lo)), ((VECTOR(int8_t, 4))((-3L))), 0x19L, 0x57L)), ((VECTOR(int8_t, 2))(0L)), ((VECTOR(int8_t, 2))(0x02L)), p_70, 0x2CL, (-1L))).s9, p_588->g_14.s4)), l_86[0].f0)) == p_588->g_comm_values[p_588->tid])), ((VECTOR(uint64_t, 2))(0x81D41956CB911F2AL)), 1UL)).even)), 0xB6A9A75A9E6D6167L, 18446744073709551608UL)).s1277015631323130, ((VECTOR(uint64_t, 16))(0x9ED89A75344A4BF2L))))).odd)).s7 , p_588->g_103);
        --p_588->g_109[1][0];
    }
    return l_112;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[2];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 2; i++)
            l_comm_values[i] = 1;
    struct S1 c_589;
    struct S1* p_588 = &c_589;
    struct S1 c_590 = {
        (VECTOR(int16_t, 16))(7L, (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, 0x0886L), 0x0886L), 0x0886L, 7L, 0x0886L, (VECTOR(int16_t, 2))(7L, 0x0886L), (VECTOR(int16_t, 2))(7L, 0x0886L), 7L, 0x0886L, 7L, 0x0886L), // p_588->g_14
        (-1L), // p_588->g_21
        {{{&p_588->g_21,&p_588->g_21,&p_588->g_21,&p_588->g_21},{&p_588->g_21,&p_588->g_21,&p_588->g_21,&p_588->g_21},{&p_588->g_21,&p_588->g_21,&p_588->g_21,&p_588->g_21}},{{&p_588->g_21,&p_588->g_21,&p_588->g_21,&p_588->g_21},{&p_588->g_21,&p_588->g_21,&p_588->g_21,&p_588->g_21},{&p_588->g_21,&p_588->g_21,&p_588->g_21,&p_588->g_21}}}, // p_588->g_20
        0x50L, // p_588->g_26
        (void*)0, // p_588->g_34
        0x75F9F7E4L, // p_588->g_36
        &p_588->g_36, // p_588->g_35
        (VECTOR(uint8_t, 16))(0x75L, (VECTOR(uint8_t, 4))(0x75L, (VECTOR(uint8_t, 2))(0x75L, 255UL), 255UL), 255UL, 0x75L, 255UL, (VECTOR(uint8_t, 2))(0x75L, 255UL), (VECTOR(uint8_t, 2))(0x75L, 255UL), 0x75L, 255UL, 0x75L, 255UL), // p_588->g_96
        (VECTOR(uint16_t, 2))(0UL, 0x4282L), // p_588->g_99
        {0x3B0F068E203B90B5L,0x3F792429L,-4L,0UL,0x690D09DFL,0x36C9F75EL}, // p_588->g_103
        &p_588->g_103, // p_588->g_104
        {{4294967293UL,0xC8BBA856L,0xC8BBA856L,4294967293UL,4294967293UL,0xC8BBA856L},{4294967293UL,0xC8BBA856L,0xC8BBA856L,4294967293UL,4294967293UL,0xC8BBA856L},{4294967293UL,0xC8BBA856L,0xC8BBA856L,4294967293UL,4294967293UL,0xC8BBA856L},{4294967293UL,0xC8BBA856L,0xC8BBA856L,4294967293UL,4294967293UL,0xC8BBA856L},{4294967293UL,0xC8BBA856L,0xC8BBA856L,4294967293UL,4294967293UL,0xC8BBA856L},{4294967293UL,0xC8BBA856L,0xC8BBA856L,4294967293UL,4294967293UL,0xC8BBA856L},{4294967293UL,0xC8BBA856L,0xC8BBA856L,4294967293UL,4294967293UL,0xC8BBA856L}}, // p_588->g_109
        0x16BB63F9L, // p_588->g_118
        &p_588->g_118, // p_588->g_117
        (-5L), // p_588->g_120
        {{0xD5L},{0xD5L},{0xD5L},{0xD5L},{0xD5L},{0xD5L},{0xD5L}}, // p_588->g_146
        0x487D1E233BC691B7L, // p_588->g_163
        (-1L), // p_588->g_174
        1L, // p_588->g_175
        5UL, // p_588->g_177
        (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65535UL), 65535UL), 65535UL, 1UL, 65535UL), // p_588->g_190
        (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint16_t, 2))(1UL, 0UL), (VECTOR(uint16_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL), // p_588->g_191
        0x74D6L, // p_588->g_210
        (VECTOR(int16_t, 4))(0x53A4L, (VECTOR(int16_t, 2))(0x53A4L, 0x07FAL), 0x07FAL), // p_588->g_223
        (void*)0, // p_588->g_228
        (void*)0, // p_588->g_230
        1UL, // p_588->g_241
        {1UL,0x0F97E79EL,-4L,0x7CL,0L,0x1D240A8BL}, // p_588->g_250
        (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x040B4C9AE7DD1FC3L), 0x040B4C9AE7DD1FC3L), 0x040B4C9AE7DD1FC3L, (-1L), 0x040B4C9AE7DD1FC3L, (VECTOR(int64_t, 2))((-1L), 0x040B4C9AE7DD1FC3L), (VECTOR(int64_t, 2))((-1L), 0x040B4C9AE7DD1FC3L), (-1L), 0x040B4C9AE7DD1FC3L, (-1L), 0x040B4C9AE7DD1FC3L), // p_588->g_260
        (VECTOR(uint64_t, 8))(0x9DE3901CCEF30CB7L, (VECTOR(uint64_t, 4))(0x9DE3901CCEF30CB7L, (VECTOR(uint64_t, 2))(0x9DE3901CCEF30CB7L, 0x35EB201C3AF0021FL), 0x35EB201C3AF0021FL), 0x35EB201C3AF0021FL, 0x9DE3901CCEF30CB7L, 0x35EB201C3AF0021FL), // p_588->g_263
        (VECTOR(int32_t, 4))(0x15B597D2L, (VECTOR(int32_t, 2))(0x15B597D2L, 0L), 0L), // p_588->g_267
        (VECTOR(int64_t, 4))(0x47643B7C93A7CE97L, (VECTOR(int64_t, 2))(0x47643B7C93A7CE97L, 0x63B046F2C7330148L), 0x63B046F2C7330148L), // p_588->g_288
        (VECTOR(int64_t, 8))(0x47C78908FC8BB439L, (VECTOR(int64_t, 4))(0x47C78908FC8BB439L, (VECTOR(int64_t, 2))(0x47C78908FC8BB439L, 1L), 1L), 1L, 0x47C78908FC8BB439L, 1L), // p_588->g_289
        (VECTOR(int16_t, 8))((-3L), (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), 9L), 9L), 9L, (-3L), 9L), // p_588->g_292
        (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0UL), 0UL), 0UL, 255UL, 0UL, (VECTOR(uint8_t, 2))(255UL, 0UL), (VECTOR(uint8_t, 2))(255UL, 0UL), 255UL, 0UL, 255UL, 0UL), // p_588->g_298
        (VECTOR(int32_t, 2))(0x0EDC44DFL, 0x5A706C5DL), // p_588->g_304
        0x1924F3BAL, // p_588->g_312
        (VECTOR(uint16_t, 16))(0x939EL, (VECTOR(uint16_t, 4))(0x939EL, (VECTOR(uint16_t, 2))(0x939EL, 65535UL), 65535UL), 65535UL, 0x939EL, 65535UL, (VECTOR(uint16_t, 2))(0x939EL, 65535UL), (VECTOR(uint16_t, 2))(0x939EL, 65535UL), 0x939EL, 65535UL, 0x939EL, 65535UL), // p_588->g_330
        &p_588->g_117, // p_588->g_332
        &p_588->g_332, // p_588->g_331
        0L, // p_588->g_336
        (VECTOR(int16_t, 8))(0x0BBFL, (VECTOR(int16_t, 4))(0x0BBFL, (VECTOR(int16_t, 2))(0x0BBFL, 0x756CL), 0x756CL), 0x756CL, 0x0BBFL, 0x756CL), // p_588->g_407
        (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL), // p_588->g_412
        (void*)0, // p_588->g_419
        (VECTOR(uint16_t, 16))(0xDE76L, (VECTOR(uint16_t, 4))(0xDE76L, (VECTOR(uint16_t, 2))(0xDE76L, 1UL), 1UL), 1UL, 0xDE76L, 1UL, (VECTOR(uint16_t, 2))(0xDE76L, 1UL), (VECTOR(uint16_t, 2))(0xDE76L, 1UL), 0xDE76L, 1UL, 0xDE76L, 1UL), // p_588->g_447
        (VECTOR(uint16_t, 2))(65535UL, 0UL), // p_588->g_448
        0UL, // p_588->g_450
        (VECTOR(int16_t, 8))(0x14ABL, (VECTOR(int16_t, 4))(0x14ABL, (VECTOR(int16_t, 2))(0x14ABL, 0x2E44L), 0x2E44L), 0x2E44L, 0x14ABL, 0x2E44L), // p_588->g_473
        (VECTOR(int16_t, 4))(0x64D0L, (VECTOR(int16_t, 2))(0x64D0L, (-1L)), (-1L)), // p_588->g_474
        4294967295UL, // p_588->g_507
        (VECTOR(int8_t, 4))(0x41L, (VECTOR(int8_t, 2))(0x41L, 0x76L), 0x76L), // p_588->g_534
        (VECTOR(uint8_t, 4))(0x0AL, (VECTOR(uint8_t, 2))(0x0AL, 7UL), 7UL), // p_588->g_537
        (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL), // p_588->g_540
        (VECTOR(uint64_t, 16))(18446744073709551609UL, (VECTOR(uint64_t, 4))(18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 0x11A37DD8157D7777L), 0x11A37DD8157D7777L), 0x11A37DD8157D7777L, 18446744073709551609UL, 0x11A37DD8157D7777L, (VECTOR(uint64_t, 2))(18446744073709551609UL, 0x11A37DD8157D7777L), (VECTOR(uint64_t, 2))(18446744073709551609UL, 0x11A37DD8157D7777L), 18446744073709551609UL, 0x11A37DD8157D7777L, 18446744073709551609UL, 0x11A37DD8157D7777L), // p_588->g_547
        &p_588->g_103, // p_588->g_562
        (VECTOR(uint8_t, 8))(0xACL, (VECTOR(uint8_t, 4))(0xACL, (VECTOR(uint8_t, 2))(0xACL, 0x01L), 0x01L), 0x01L, 0xACL, 0x01L), // p_588->g_573
        (VECTOR(uint16_t, 4))(0x8B3BL, (VECTOR(uint16_t, 2))(0x8B3BL, 0xBC6AL), 0xBC6AL), // p_588->g_583
        0, // p_588->v_collective
        sequence_input[get_global_id(0)], // p_588->global_0_offset
        sequence_input[get_global_id(1)], // p_588->global_1_offset
        sequence_input[get_global_id(2)], // p_588->global_2_offset
        sequence_input[get_local_id(0)], // p_588->local_0_offset
        sequence_input[get_local_id(1)], // p_588->local_1_offset
        sequence_input[get_local_id(2)], // p_588->local_2_offset
        sequence_input[get_group_id(0)], // p_588->group_0_offset
        sequence_input[get_group_id(1)], // p_588->group_1_offset
        sequence_input[get_group_id(2)], // p_588->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[0][get_linear_local_id()])), // p_588->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_589 = c_590;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_588);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_588->g_14.s0, "p_588->g_14.s0", print_hash_value);
    transparent_crc(p_588->g_14.s1, "p_588->g_14.s1", print_hash_value);
    transparent_crc(p_588->g_14.s2, "p_588->g_14.s2", print_hash_value);
    transparent_crc(p_588->g_14.s3, "p_588->g_14.s3", print_hash_value);
    transparent_crc(p_588->g_14.s4, "p_588->g_14.s4", print_hash_value);
    transparent_crc(p_588->g_14.s5, "p_588->g_14.s5", print_hash_value);
    transparent_crc(p_588->g_14.s6, "p_588->g_14.s6", print_hash_value);
    transparent_crc(p_588->g_14.s7, "p_588->g_14.s7", print_hash_value);
    transparent_crc(p_588->g_14.s8, "p_588->g_14.s8", print_hash_value);
    transparent_crc(p_588->g_14.s9, "p_588->g_14.s9", print_hash_value);
    transparent_crc(p_588->g_14.sa, "p_588->g_14.sa", print_hash_value);
    transparent_crc(p_588->g_14.sb, "p_588->g_14.sb", print_hash_value);
    transparent_crc(p_588->g_14.sc, "p_588->g_14.sc", print_hash_value);
    transparent_crc(p_588->g_14.sd, "p_588->g_14.sd", print_hash_value);
    transparent_crc(p_588->g_14.se, "p_588->g_14.se", print_hash_value);
    transparent_crc(p_588->g_14.sf, "p_588->g_14.sf", print_hash_value);
    transparent_crc(p_588->g_21, "p_588->g_21", print_hash_value);
    transparent_crc(p_588->g_26, "p_588->g_26", print_hash_value);
    transparent_crc(p_588->g_36, "p_588->g_36", print_hash_value);
    transparent_crc(p_588->g_96.s0, "p_588->g_96.s0", print_hash_value);
    transparent_crc(p_588->g_96.s1, "p_588->g_96.s1", print_hash_value);
    transparent_crc(p_588->g_96.s2, "p_588->g_96.s2", print_hash_value);
    transparent_crc(p_588->g_96.s3, "p_588->g_96.s3", print_hash_value);
    transparent_crc(p_588->g_96.s4, "p_588->g_96.s4", print_hash_value);
    transparent_crc(p_588->g_96.s5, "p_588->g_96.s5", print_hash_value);
    transparent_crc(p_588->g_96.s6, "p_588->g_96.s6", print_hash_value);
    transparent_crc(p_588->g_96.s7, "p_588->g_96.s7", print_hash_value);
    transparent_crc(p_588->g_96.s8, "p_588->g_96.s8", print_hash_value);
    transparent_crc(p_588->g_96.s9, "p_588->g_96.s9", print_hash_value);
    transparent_crc(p_588->g_96.sa, "p_588->g_96.sa", print_hash_value);
    transparent_crc(p_588->g_96.sb, "p_588->g_96.sb", print_hash_value);
    transparent_crc(p_588->g_96.sc, "p_588->g_96.sc", print_hash_value);
    transparent_crc(p_588->g_96.sd, "p_588->g_96.sd", print_hash_value);
    transparent_crc(p_588->g_96.se, "p_588->g_96.se", print_hash_value);
    transparent_crc(p_588->g_96.sf, "p_588->g_96.sf", print_hash_value);
    transparent_crc(p_588->g_99.x, "p_588->g_99.x", print_hash_value);
    transparent_crc(p_588->g_99.y, "p_588->g_99.y", print_hash_value);
    transparent_crc(p_588->g_103.f0, "p_588->g_103.f0", print_hash_value);
    transparent_crc(p_588->g_103.f1, "p_588->g_103.f1", print_hash_value);
    transparent_crc(p_588->g_103.f2, "p_588->g_103.f2", print_hash_value);
    transparent_crc(p_588->g_103.f3, "p_588->g_103.f3", print_hash_value);
    transparent_crc(p_588->g_103.f4, "p_588->g_103.f4", print_hash_value);
    transparent_crc(p_588->g_103.f5, "p_588->g_103.f5", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_588->g_109[i][j], "p_588->g_109[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_588->g_118, "p_588->g_118", print_hash_value);
    transparent_crc(p_588->g_120, "p_588->g_120", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_588->g_146[i][j], "p_588->g_146[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_588->g_163, "p_588->g_163", print_hash_value);
    transparent_crc(p_588->g_174, "p_588->g_174", print_hash_value);
    transparent_crc(p_588->g_175, "p_588->g_175", print_hash_value);
    transparent_crc(p_588->g_177, "p_588->g_177", print_hash_value);
    transparent_crc(p_588->g_190.s0, "p_588->g_190.s0", print_hash_value);
    transparent_crc(p_588->g_190.s1, "p_588->g_190.s1", print_hash_value);
    transparent_crc(p_588->g_190.s2, "p_588->g_190.s2", print_hash_value);
    transparent_crc(p_588->g_190.s3, "p_588->g_190.s3", print_hash_value);
    transparent_crc(p_588->g_190.s4, "p_588->g_190.s4", print_hash_value);
    transparent_crc(p_588->g_190.s5, "p_588->g_190.s5", print_hash_value);
    transparent_crc(p_588->g_190.s6, "p_588->g_190.s6", print_hash_value);
    transparent_crc(p_588->g_190.s7, "p_588->g_190.s7", print_hash_value);
    transparent_crc(p_588->g_191.s0, "p_588->g_191.s0", print_hash_value);
    transparent_crc(p_588->g_191.s1, "p_588->g_191.s1", print_hash_value);
    transparent_crc(p_588->g_191.s2, "p_588->g_191.s2", print_hash_value);
    transparent_crc(p_588->g_191.s3, "p_588->g_191.s3", print_hash_value);
    transparent_crc(p_588->g_191.s4, "p_588->g_191.s4", print_hash_value);
    transparent_crc(p_588->g_191.s5, "p_588->g_191.s5", print_hash_value);
    transparent_crc(p_588->g_191.s6, "p_588->g_191.s6", print_hash_value);
    transparent_crc(p_588->g_191.s7, "p_588->g_191.s7", print_hash_value);
    transparent_crc(p_588->g_191.s8, "p_588->g_191.s8", print_hash_value);
    transparent_crc(p_588->g_191.s9, "p_588->g_191.s9", print_hash_value);
    transparent_crc(p_588->g_191.sa, "p_588->g_191.sa", print_hash_value);
    transparent_crc(p_588->g_191.sb, "p_588->g_191.sb", print_hash_value);
    transparent_crc(p_588->g_191.sc, "p_588->g_191.sc", print_hash_value);
    transparent_crc(p_588->g_191.sd, "p_588->g_191.sd", print_hash_value);
    transparent_crc(p_588->g_191.se, "p_588->g_191.se", print_hash_value);
    transparent_crc(p_588->g_191.sf, "p_588->g_191.sf", print_hash_value);
    transparent_crc(p_588->g_210, "p_588->g_210", print_hash_value);
    transparent_crc(p_588->g_223.x, "p_588->g_223.x", print_hash_value);
    transparent_crc(p_588->g_223.y, "p_588->g_223.y", print_hash_value);
    transparent_crc(p_588->g_223.z, "p_588->g_223.z", print_hash_value);
    transparent_crc(p_588->g_223.w, "p_588->g_223.w", print_hash_value);
    transparent_crc(p_588->g_241, "p_588->g_241", print_hash_value);
    transparent_crc(p_588->g_250.f0, "p_588->g_250.f0", print_hash_value);
    transparent_crc(p_588->g_250.f1, "p_588->g_250.f1", print_hash_value);
    transparent_crc(p_588->g_250.f2, "p_588->g_250.f2", print_hash_value);
    transparent_crc(p_588->g_250.f3, "p_588->g_250.f3", print_hash_value);
    transparent_crc(p_588->g_250.f4, "p_588->g_250.f4", print_hash_value);
    transparent_crc(p_588->g_250.f5, "p_588->g_250.f5", print_hash_value);
    transparent_crc(p_588->g_260.s0, "p_588->g_260.s0", print_hash_value);
    transparent_crc(p_588->g_260.s1, "p_588->g_260.s1", print_hash_value);
    transparent_crc(p_588->g_260.s2, "p_588->g_260.s2", print_hash_value);
    transparent_crc(p_588->g_260.s3, "p_588->g_260.s3", print_hash_value);
    transparent_crc(p_588->g_260.s4, "p_588->g_260.s4", print_hash_value);
    transparent_crc(p_588->g_260.s5, "p_588->g_260.s5", print_hash_value);
    transparent_crc(p_588->g_260.s6, "p_588->g_260.s6", print_hash_value);
    transparent_crc(p_588->g_260.s7, "p_588->g_260.s7", print_hash_value);
    transparent_crc(p_588->g_260.s8, "p_588->g_260.s8", print_hash_value);
    transparent_crc(p_588->g_260.s9, "p_588->g_260.s9", print_hash_value);
    transparent_crc(p_588->g_260.sa, "p_588->g_260.sa", print_hash_value);
    transparent_crc(p_588->g_260.sb, "p_588->g_260.sb", print_hash_value);
    transparent_crc(p_588->g_260.sc, "p_588->g_260.sc", print_hash_value);
    transparent_crc(p_588->g_260.sd, "p_588->g_260.sd", print_hash_value);
    transparent_crc(p_588->g_260.se, "p_588->g_260.se", print_hash_value);
    transparent_crc(p_588->g_260.sf, "p_588->g_260.sf", print_hash_value);
    transparent_crc(p_588->g_263.s0, "p_588->g_263.s0", print_hash_value);
    transparent_crc(p_588->g_263.s1, "p_588->g_263.s1", print_hash_value);
    transparent_crc(p_588->g_263.s2, "p_588->g_263.s2", print_hash_value);
    transparent_crc(p_588->g_263.s3, "p_588->g_263.s3", print_hash_value);
    transparent_crc(p_588->g_263.s4, "p_588->g_263.s4", print_hash_value);
    transparent_crc(p_588->g_263.s5, "p_588->g_263.s5", print_hash_value);
    transparent_crc(p_588->g_263.s6, "p_588->g_263.s6", print_hash_value);
    transparent_crc(p_588->g_263.s7, "p_588->g_263.s7", print_hash_value);
    transparent_crc(p_588->g_267.x, "p_588->g_267.x", print_hash_value);
    transparent_crc(p_588->g_267.y, "p_588->g_267.y", print_hash_value);
    transparent_crc(p_588->g_267.z, "p_588->g_267.z", print_hash_value);
    transparent_crc(p_588->g_267.w, "p_588->g_267.w", print_hash_value);
    transparent_crc(p_588->g_288.x, "p_588->g_288.x", print_hash_value);
    transparent_crc(p_588->g_288.y, "p_588->g_288.y", print_hash_value);
    transparent_crc(p_588->g_288.z, "p_588->g_288.z", print_hash_value);
    transparent_crc(p_588->g_288.w, "p_588->g_288.w", print_hash_value);
    transparent_crc(p_588->g_289.s0, "p_588->g_289.s0", print_hash_value);
    transparent_crc(p_588->g_289.s1, "p_588->g_289.s1", print_hash_value);
    transparent_crc(p_588->g_289.s2, "p_588->g_289.s2", print_hash_value);
    transparent_crc(p_588->g_289.s3, "p_588->g_289.s3", print_hash_value);
    transparent_crc(p_588->g_289.s4, "p_588->g_289.s4", print_hash_value);
    transparent_crc(p_588->g_289.s5, "p_588->g_289.s5", print_hash_value);
    transparent_crc(p_588->g_289.s6, "p_588->g_289.s6", print_hash_value);
    transparent_crc(p_588->g_289.s7, "p_588->g_289.s7", print_hash_value);
    transparent_crc(p_588->g_292.s0, "p_588->g_292.s0", print_hash_value);
    transparent_crc(p_588->g_292.s1, "p_588->g_292.s1", print_hash_value);
    transparent_crc(p_588->g_292.s2, "p_588->g_292.s2", print_hash_value);
    transparent_crc(p_588->g_292.s3, "p_588->g_292.s3", print_hash_value);
    transparent_crc(p_588->g_292.s4, "p_588->g_292.s4", print_hash_value);
    transparent_crc(p_588->g_292.s5, "p_588->g_292.s5", print_hash_value);
    transparent_crc(p_588->g_292.s6, "p_588->g_292.s6", print_hash_value);
    transparent_crc(p_588->g_292.s7, "p_588->g_292.s7", print_hash_value);
    transparent_crc(p_588->g_298.s0, "p_588->g_298.s0", print_hash_value);
    transparent_crc(p_588->g_298.s1, "p_588->g_298.s1", print_hash_value);
    transparent_crc(p_588->g_298.s2, "p_588->g_298.s2", print_hash_value);
    transparent_crc(p_588->g_298.s3, "p_588->g_298.s3", print_hash_value);
    transparent_crc(p_588->g_298.s4, "p_588->g_298.s4", print_hash_value);
    transparent_crc(p_588->g_298.s5, "p_588->g_298.s5", print_hash_value);
    transparent_crc(p_588->g_298.s6, "p_588->g_298.s6", print_hash_value);
    transparent_crc(p_588->g_298.s7, "p_588->g_298.s7", print_hash_value);
    transparent_crc(p_588->g_298.s8, "p_588->g_298.s8", print_hash_value);
    transparent_crc(p_588->g_298.s9, "p_588->g_298.s9", print_hash_value);
    transparent_crc(p_588->g_298.sa, "p_588->g_298.sa", print_hash_value);
    transparent_crc(p_588->g_298.sb, "p_588->g_298.sb", print_hash_value);
    transparent_crc(p_588->g_298.sc, "p_588->g_298.sc", print_hash_value);
    transparent_crc(p_588->g_298.sd, "p_588->g_298.sd", print_hash_value);
    transparent_crc(p_588->g_298.se, "p_588->g_298.se", print_hash_value);
    transparent_crc(p_588->g_298.sf, "p_588->g_298.sf", print_hash_value);
    transparent_crc(p_588->g_304.x, "p_588->g_304.x", print_hash_value);
    transparent_crc(p_588->g_304.y, "p_588->g_304.y", print_hash_value);
    transparent_crc(p_588->g_312, "p_588->g_312", print_hash_value);
    transparent_crc(p_588->g_330.s0, "p_588->g_330.s0", print_hash_value);
    transparent_crc(p_588->g_330.s1, "p_588->g_330.s1", print_hash_value);
    transparent_crc(p_588->g_330.s2, "p_588->g_330.s2", print_hash_value);
    transparent_crc(p_588->g_330.s3, "p_588->g_330.s3", print_hash_value);
    transparent_crc(p_588->g_330.s4, "p_588->g_330.s4", print_hash_value);
    transparent_crc(p_588->g_330.s5, "p_588->g_330.s5", print_hash_value);
    transparent_crc(p_588->g_330.s6, "p_588->g_330.s6", print_hash_value);
    transparent_crc(p_588->g_330.s7, "p_588->g_330.s7", print_hash_value);
    transparent_crc(p_588->g_330.s8, "p_588->g_330.s8", print_hash_value);
    transparent_crc(p_588->g_330.s9, "p_588->g_330.s9", print_hash_value);
    transparent_crc(p_588->g_330.sa, "p_588->g_330.sa", print_hash_value);
    transparent_crc(p_588->g_330.sb, "p_588->g_330.sb", print_hash_value);
    transparent_crc(p_588->g_330.sc, "p_588->g_330.sc", print_hash_value);
    transparent_crc(p_588->g_330.sd, "p_588->g_330.sd", print_hash_value);
    transparent_crc(p_588->g_330.se, "p_588->g_330.se", print_hash_value);
    transparent_crc(p_588->g_330.sf, "p_588->g_330.sf", print_hash_value);
    transparent_crc(p_588->g_336, "p_588->g_336", print_hash_value);
    transparent_crc(p_588->g_407.s0, "p_588->g_407.s0", print_hash_value);
    transparent_crc(p_588->g_407.s1, "p_588->g_407.s1", print_hash_value);
    transparent_crc(p_588->g_407.s2, "p_588->g_407.s2", print_hash_value);
    transparent_crc(p_588->g_407.s3, "p_588->g_407.s3", print_hash_value);
    transparent_crc(p_588->g_407.s4, "p_588->g_407.s4", print_hash_value);
    transparent_crc(p_588->g_407.s5, "p_588->g_407.s5", print_hash_value);
    transparent_crc(p_588->g_407.s6, "p_588->g_407.s6", print_hash_value);
    transparent_crc(p_588->g_407.s7, "p_588->g_407.s7", print_hash_value);
    transparent_crc(p_588->g_412.s0, "p_588->g_412.s0", print_hash_value);
    transparent_crc(p_588->g_412.s1, "p_588->g_412.s1", print_hash_value);
    transparent_crc(p_588->g_412.s2, "p_588->g_412.s2", print_hash_value);
    transparent_crc(p_588->g_412.s3, "p_588->g_412.s3", print_hash_value);
    transparent_crc(p_588->g_412.s4, "p_588->g_412.s4", print_hash_value);
    transparent_crc(p_588->g_412.s5, "p_588->g_412.s5", print_hash_value);
    transparent_crc(p_588->g_412.s6, "p_588->g_412.s6", print_hash_value);
    transparent_crc(p_588->g_412.s7, "p_588->g_412.s7", print_hash_value);
    transparent_crc(p_588->g_447.s0, "p_588->g_447.s0", print_hash_value);
    transparent_crc(p_588->g_447.s1, "p_588->g_447.s1", print_hash_value);
    transparent_crc(p_588->g_447.s2, "p_588->g_447.s2", print_hash_value);
    transparent_crc(p_588->g_447.s3, "p_588->g_447.s3", print_hash_value);
    transparent_crc(p_588->g_447.s4, "p_588->g_447.s4", print_hash_value);
    transparent_crc(p_588->g_447.s5, "p_588->g_447.s5", print_hash_value);
    transparent_crc(p_588->g_447.s6, "p_588->g_447.s6", print_hash_value);
    transparent_crc(p_588->g_447.s7, "p_588->g_447.s7", print_hash_value);
    transparent_crc(p_588->g_447.s8, "p_588->g_447.s8", print_hash_value);
    transparent_crc(p_588->g_447.s9, "p_588->g_447.s9", print_hash_value);
    transparent_crc(p_588->g_447.sa, "p_588->g_447.sa", print_hash_value);
    transparent_crc(p_588->g_447.sb, "p_588->g_447.sb", print_hash_value);
    transparent_crc(p_588->g_447.sc, "p_588->g_447.sc", print_hash_value);
    transparent_crc(p_588->g_447.sd, "p_588->g_447.sd", print_hash_value);
    transparent_crc(p_588->g_447.se, "p_588->g_447.se", print_hash_value);
    transparent_crc(p_588->g_447.sf, "p_588->g_447.sf", print_hash_value);
    transparent_crc(p_588->g_448.x, "p_588->g_448.x", print_hash_value);
    transparent_crc(p_588->g_448.y, "p_588->g_448.y", print_hash_value);
    transparent_crc(p_588->g_450, "p_588->g_450", print_hash_value);
    transparent_crc(p_588->g_473.s0, "p_588->g_473.s0", print_hash_value);
    transparent_crc(p_588->g_473.s1, "p_588->g_473.s1", print_hash_value);
    transparent_crc(p_588->g_473.s2, "p_588->g_473.s2", print_hash_value);
    transparent_crc(p_588->g_473.s3, "p_588->g_473.s3", print_hash_value);
    transparent_crc(p_588->g_473.s4, "p_588->g_473.s4", print_hash_value);
    transparent_crc(p_588->g_473.s5, "p_588->g_473.s5", print_hash_value);
    transparent_crc(p_588->g_473.s6, "p_588->g_473.s6", print_hash_value);
    transparent_crc(p_588->g_473.s7, "p_588->g_473.s7", print_hash_value);
    transparent_crc(p_588->g_474.x, "p_588->g_474.x", print_hash_value);
    transparent_crc(p_588->g_474.y, "p_588->g_474.y", print_hash_value);
    transparent_crc(p_588->g_474.z, "p_588->g_474.z", print_hash_value);
    transparent_crc(p_588->g_474.w, "p_588->g_474.w", print_hash_value);
    transparent_crc(p_588->g_507, "p_588->g_507", print_hash_value);
    transparent_crc(p_588->g_534.x, "p_588->g_534.x", print_hash_value);
    transparent_crc(p_588->g_534.y, "p_588->g_534.y", print_hash_value);
    transparent_crc(p_588->g_534.z, "p_588->g_534.z", print_hash_value);
    transparent_crc(p_588->g_534.w, "p_588->g_534.w", print_hash_value);
    transparent_crc(p_588->g_537.x, "p_588->g_537.x", print_hash_value);
    transparent_crc(p_588->g_537.y, "p_588->g_537.y", print_hash_value);
    transparent_crc(p_588->g_537.z, "p_588->g_537.z", print_hash_value);
    transparent_crc(p_588->g_537.w, "p_588->g_537.w", print_hash_value);
    transparent_crc(p_588->g_540.s0, "p_588->g_540.s0", print_hash_value);
    transparent_crc(p_588->g_540.s1, "p_588->g_540.s1", print_hash_value);
    transparent_crc(p_588->g_540.s2, "p_588->g_540.s2", print_hash_value);
    transparent_crc(p_588->g_540.s3, "p_588->g_540.s3", print_hash_value);
    transparent_crc(p_588->g_540.s4, "p_588->g_540.s4", print_hash_value);
    transparent_crc(p_588->g_540.s5, "p_588->g_540.s5", print_hash_value);
    transparent_crc(p_588->g_540.s6, "p_588->g_540.s6", print_hash_value);
    transparent_crc(p_588->g_540.s7, "p_588->g_540.s7", print_hash_value);
    transparent_crc(p_588->g_547.s0, "p_588->g_547.s0", print_hash_value);
    transparent_crc(p_588->g_547.s1, "p_588->g_547.s1", print_hash_value);
    transparent_crc(p_588->g_547.s2, "p_588->g_547.s2", print_hash_value);
    transparent_crc(p_588->g_547.s3, "p_588->g_547.s3", print_hash_value);
    transparent_crc(p_588->g_547.s4, "p_588->g_547.s4", print_hash_value);
    transparent_crc(p_588->g_547.s5, "p_588->g_547.s5", print_hash_value);
    transparent_crc(p_588->g_547.s6, "p_588->g_547.s6", print_hash_value);
    transparent_crc(p_588->g_547.s7, "p_588->g_547.s7", print_hash_value);
    transparent_crc(p_588->g_547.s8, "p_588->g_547.s8", print_hash_value);
    transparent_crc(p_588->g_547.s9, "p_588->g_547.s9", print_hash_value);
    transparent_crc(p_588->g_547.sa, "p_588->g_547.sa", print_hash_value);
    transparent_crc(p_588->g_547.sb, "p_588->g_547.sb", print_hash_value);
    transparent_crc(p_588->g_547.sc, "p_588->g_547.sc", print_hash_value);
    transparent_crc(p_588->g_547.sd, "p_588->g_547.sd", print_hash_value);
    transparent_crc(p_588->g_547.se, "p_588->g_547.se", print_hash_value);
    transparent_crc(p_588->g_547.sf, "p_588->g_547.sf", print_hash_value);
    transparent_crc(p_588->g_573.s0, "p_588->g_573.s0", print_hash_value);
    transparent_crc(p_588->g_573.s1, "p_588->g_573.s1", print_hash_value);
    transparent_crc(p_588->g_573.s2, "p_588->g_573.s2", print_hash_value);
    transparent_crc(p_588->g_573.s3, "p_588->g_573.s3", print_hash_value);
    transparent_crc(p_588->g_573.s4, "p_588->g_573.s4", print_hash_value);
    transparent_crc(p_588->g_573.s5, "p_588->g_573.s5", print_hash_value);
    transparent_crc(p_588->g_573.s6, "p_588->g_573.s6", print_hash_value);
    transparent_crc(p_588->g_573.s7, "p_588->g_573.s7", print_hash_value);
    transparent_crc(p_588->g_583.x, "p_588->g_583.x", print_hash_value);
    transparent_crc(p_588->g_583.y, "p_588->g_583.y", print_hash_value);
    transparent_crc(p_588->g_583.z, "p_588->g_583.z", print_hash_value);
    transparent_crc(p_588->g_583.w, "p_588->g_583.w", print_hash_value);
    transparent_crc(p_588->v_collective, "p_588->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 29; i++)
            transparent_crc(p_588->g_special_values[i + 29 * get_linear_group_id()], "p_588->g_special_values[i + 29 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_588->l_comm_values[get_linear_local_id()], "p_588->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_588->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()], "p_588->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
