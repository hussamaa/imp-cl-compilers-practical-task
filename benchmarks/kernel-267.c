// --atomics 1 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 94,84,1 -l 1,21,1
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

__constant uint32_t permutations[10][21] = {
{1,19,15,5,0,10,20,7,9,8,18,14,11,13,4,12,3,17,6,16,2}, // permutation 0
{8,2,18,13,12,16,6,14,7,0,11,9,10,1,15,19,20,17,5,3,4}, // permutation 1
{9,18,20,4,19,2,6,8,13,0,11,17,1,5,3,16,12,15,10,14,7}, // permutation 2
{9,2,3,4,13,20,1,15,10,19,11,18,6,5,7,16,17,0,12,8,14}, // permutation 3
{18,17,16,14,7,1,11,2,0,5,6,4,8,15,10,13,20,9,3,19,12}, // permutation 4
{10,4,1,3,0,20,15,2,19,5,18,9,17,8,7,12,14,11,13,16,6}, // permutation 5
{15,16,17,12,10,9,5,4,0,7,13,2,1,8,20,3,6,14,18,19,11}, // permutation 6
{1,3,2,15,18,16,4,19,10,11,13,17,8,12,9,0,6,14,5,7,20}, // permutation 7
{2,20,10,14,4,19,3,7,12,8,6,15,0,9,18,13,1,16,17,11,5}, // permutation 8
{10,20,7,0,1,19,15,13,2,11,12,6,16,3,8,5,17,4,18,9,14} // permutation 9
};

// Seed: 4110279558

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    VECTOR(uint8_t, 2) g_24;
    volatile VECTOR(int8_t, 8) g_25;
    int16_t g_34;
    int64_t g_36;
    int32_t g_39[3];
    volatile int32_t *g_40;
    VECTOR(int16_t, 4) g_67;
    VECTOR(uint8_t, 2) g_86;
    volatile uint8_t g_91;
    volatile uint8_t * volatile g_90;
    uint16_t g_94;
    volatile uint64_t g_102;
    volatile int32_t g_106;
    volatile uint8_t g_107;
    int32_t *g_113;
    int32_t ** volatile g_112;
    int32_t g_115;
    int32_t ** volatile g_116;
    VECTOR(int32_t, 2) g_120;
    uint64_t g_131;
    int32_t **g_133;
    int32_t ***g_132;
    VECTOR(int8_t, 8) g_137;
    VECTOR(int8_t, 16) g_138;
    uint32_t g_147[4][10][3];
    int32_t g_151;
    int32_t * volatile g_154[9];
    int32_t * volatile g_155;
    int32_t * volatile g_156;
    VECTOR(uint64_t, 4) g_159;
    uint8_t *g_171;
    VECTOR(uint16_t, 16) g_189;
    uint8_t **g_217;
    uint8_t *** volatile g_216;
    int8_t g_220;
    uint32_t g_242[10];
    VECTOR(int32_t, 4) g_265;
    VECTOR(uint16_t, 2) g_284;
    VECTOR(int16_t, 4) g_301;
    volatile VECTOR(uint16_t, 4) g_302;
    VECTOR(uint16_t, 16) g_327;
    VECTOR(int16_t, 16) g_347;
    uint32_t g_349;
    uint32_t g_350;
    int8_t g_353;
    VECTOR(uint8_t, 16) g_371;
    volatile VECTOR(uint16_t, 16) g_399;
    volatile VECTOR(uint8_t, 2) g_415;
    volatile uint8_t g_416;
    volatile uint8_t *g_414[2];
    volatile uint8_t **g_413[6];
    volatile uint8_t ** volatile *g_412;
    volatile uint8_t ** volatile * volatile *g_411;
    int32_t * volatile g_424;
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
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S0 * p_425);
int32_t  func_2(uint8_t  p_3, uint32_t  p_4, uint8_t  p_5, struct S0 * p_425);
int32_t  func_13(int64_t  p_14, struct S0 * p_425);
int64_t  func_21(int32_t  p_22, struct S0 * p_425);
uint8_t  func_44(int16_t  p_45, uint8_t  p_46, int32_t * p_47, struct S0 * p_425);
int16_t  func_48(int32_t  p_49, int64_t * p_50, struct S0 * p_425);
int32_t * func_53(uint32_t  p_54, int64_t * p_55, int32_t  p_56, struct S0 * p_425);
int64_t * func_57(int32_t  p_58, int64_t  p_59, int8_t  p_60, struct S0 * p_425);
int64_t  func_70(int16_t * p_71, uint8_t  p_72, struct S0 * p_425);
int16_t * func_73(int64_t  p_74, uint16_t  p_75, struct S0 * p_425);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_425->l_comm_values p_425->g_comm_values p_425->g_24 p_425->g_25 p_425->g_34 p_425->g_36 p_425->g_39 p_425->g_67 p_425->g_86 p_425->g_90 p_425->g_91 p_425->g_102 p_425->g_107 p_425->g_112 p_425->g_115 p_425->g_116 p_425->g_120 p_425->g_132 p_425->g_137 p_425->g_138 p_425->g_147 p_425->g_156 p_425->g_159 p_425->g_94 p_425->g_171 p_425->g_113 p_425->g_133 p_425->g_189 p_425->g_131 p_425->g_216 p_425->g_220 p_425->g_265 p_425->g_301 p_425->g_302 p_425->g_327 p_425->g_284 p_425->g_151 p_425->g_347 p_425->g_349 p_425->g_350 p_425->g_353 p_425->g_371 p_425->g_106 p_425->g_399 p_425->g_411 p_425->g_424
 * writes: p_425->g_34 p_425->g_36 p_425->g_40 p_425->g_102 p_425->g_107 p_425->g_113 p_425->g_115 p_425->g_131 p_425->g_147 p_425->g_151 p_425->g_120 p_425->g_94 p_425->g_137 p_425->g_159 p_425->g_220 p_425->g_24 p_425->g_242 p_425->g_349 p_425->g_350 p_425->g_353 p_425->g_284 p_425->g_371 p_425->g_132 p_425->g_133 p_425->g_39
 */
uint32_t  func_1(struct S0 * p_425)
{ /* block id: 4 */
    int32_t l_6 = 0x3F38C088L;
    VECTOR(uint64_t, 4) l_28 = (VECTOR(uint64_t, 4))(0xAEE511904E20EEB4L, (VECTOR(uint64_t, 2))(0xAEE511904E20EEB4L, 0x3CA307758A8CE9B8L), 0x3CA307758A8CE9B8L);
    uint16_t l_31 = 0UL;
    int16_t *l_32 = (void*)0;
    int16_t *l_33 = &p_425->g_34;
    int64_t *l_35 = &p_425->g_36;
    int8_t *l_351 = (void*)0;
    int8_t *l_352 = &p_425->g_353;
    int i;
    (*p_425->g_424) = func_2(((((l_6 & (safe_rshift_func_uint8_t_u_s(p_425->l_comm_values[(safe_mod_func_uint32_t_u_u(p_425->tid, 21))], ((*l_352) &= (safe_lshift_func_uint8_t_u_s(((safe_mul_func_uint8_t_u_u((p_425->g_350 |= (0UL ^ func_13((~(safe_rshift_func_int16_t_s_u((safe_add_func_int16_t_s_s((safe_add_func_int64_t_s_s((p_425->g_comm_values[p_425->tid] ^ ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(1L, (-8L))))).lo), ((*l_35) |= (0xCAL || ((0x283BC1B0FE2CF456L | func_21(l_6, p_425)) ^ (((VECTOR(uint8_t, 16))(p_425->g_24.yxxxxyyxyyyxxxyy)).s4 & ((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(p_425->g_25.s1231402145274543)).even)).lo)).lo)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(0x09L, (((safe_sub_func_int16_t_s_s(((*l_33) = (((func_21(((((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 16))(mad_sat(((VECTOR(uint64_t, 8))(max(((VECTOR(uint64_t, 4))(l_28.zyyx)).zzwwxxww, (uint64_t)((safe_mul_func_uint8_t_u_u(p_425->l_comm_values[(safe_mod_func_uint32_t_u_u(p_425->tid, 21))], p_425->g_24.x)) < 250UL)))).s7250110031234112, ((VECTOR(uint64_t, 16))(0UL)), ((VECTOR(uint64_t, 16))(0UL))))), ((VECTOR(uint64_t, 16))(0x575F7F77771FDA66L))))).s0 == FAKE_DIVERGE(p_425->local_0_offset, get_local_id(0), 10)) , p_425->g_24.x), p_425) > p_425->g_24.y) , l_31) & 0x552CL)), 0x7EE8L)) & 0L) & p_425->l_comm_values[(safe_mod_func_uint32_t_u_u(p_425->tid, 21))]), (-8L), (-3L))), 0x3FL, ((VECTOR(int8_t, 2))(0x68L)), 0x39L)), p_425->g_24.y, (-4L), l_28.x, ((VECTOR(int8_t, 2))(0x19L)), 0x72L)).odd, ((VECTOR(int8_t, 8))(0x71L))))), (int8_t)p_425->g_34))).s37)).xxyxyyyxxxxxxyyx, (int8_t)0x77L))).s9)))))), l_31)), 9))), p_425))), l_28.w)) ^ p_425->g_301.y), p_425->g_301.x)))))) & p_425->g_comm_values[p_425->tid]) | 0x4F39L) , l_6), l_28.x, l_6, p_425);
    return p_425->g_327.s1;
}


/* ------------------------------------------ */
/* 
 * reads : p_425->g_132 p_425->g_133 p_425->g_353 p_425->g_284 p_425->g_371 p_425->g_24 p_425->g_106 p_425->g_265 p_425->g_90 p_425->g_91 p_425->g_302 p_425->g_347 p_425->g_115 p_425->g_327 p_425->g_189 p_425->g_94 p_425->g_349 p_425->g_36 p_425->g_137 p_425->g_156 p_425->g_120 p_425->g_138 p_425->g_34 p_425->g_112 p_425->g_113 p_425->g_399 p_425->g_147 p_425->g_67 p_425->g_350 p_425->l_comm_values p_425->g_151 p_425->g_411 p_425->g_301
 * writes: p_425->g_113 p_425->g_284 p_425->g_24 p_425->g_371 p_425->g_132 p_425->g_131 p_425->g_151 p_425->g_115 p_425->g_120 p_425->g_137 p_425->g_133 p_425->g_350
 */
int32_t  func_2(uint8_t  p_3, uint32_t  p_4, uint8_t  p_5, struct S0 * p_425)
{ /* block id: 121 */
    int32_t *l_354 = (void*)0;
    uint64_t l_397 = 0x8D2CE392085BA577L;
    int32_t ****l_403 = &p_425->g_132;
    VECTOR(uint64_t, 4) l_404 = (VECTOR(uint64_t, 4))(3UL, (VECTOR(uint64_t, 2))(3UL, 18446744073709551615UL), 18446744073709551615UL);
    int32_t l_410 = (-1L);
    int32_t l_417 = (-7L);
    int16_t l_418 = 0L;
    int32_t l_419 = 0L;
    VECTOR(uint64_t, 2) l_420 = (VECTOR(uint64_t, 2))(0x92010763F2911B1FL, 0UL);
    int64_t l_423 = 0x46922C2DD38DEFA6L;
    int i;
    (**p_425->g_132) = (void*)0;
    (*p_425->g_133) = l_354;
    for (p_4 = 5; (p_4 != 23); p_4 = safe_add_func_uint8_t_u_u(p_4, 1))
    { /* block id: 126 */
        uint16_t *l_363 = (void*)0;
        uint16_t *l_364 = (void*)0;
        uint16_t *l_365 = (void*)0;
        uint16_t *l_366[8][3][9] = {{{&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94},{&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94},{&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94}},{{&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94},{&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94},{&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94}},{{&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94},{&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94},{&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94}},{{&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94},{&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94},{&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94}},{{&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94},{&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94},{&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94}},{{&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94},{&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94},{&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94}},{{&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94},{&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94},{&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94}},{{&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94},{&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94},{&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94,&p_425->g_94}}};
        VECTOR(int32_t, 4) l_378 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x15FFAB7BL), 0x15FFAB7BL);
        uint8_t *l_381 = (void*)0;
        uint8_t *l_382 = (void*)0;
        uint8_t *l_383 = (void*)0;
        uint8_t *l_384 = (void*)0;
        uint8_t *l_385[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t ****l_390 = &p_425->g_132;
        int32_t l_398[8][7] = {{7L,0L,0x684543A1L,(-1L),0x684543A1L,0L,7L},{7L,0L,0x684543A1L,(-1L),0x684543A1L,0L,7L},{7L,0L,0x684543A1L,(-1L),0x684543A1L,0L,7L},{7L,0L,0x684543A1L,(-1L),0x684543A1L,0L,7L},{7L,0L,0x684543A1L,(-1L),0x684543A1L,0L,7L},{7L,0L,0x684543A1L,(-1L),0x684543A1L,0L,7L},{7L,0L,0x684543A1L,(-1L),0x684543A1L,0L,7L},{7L,0L,0x684543A1L,(-1L),0x684543A1L,0L,7L}};
        VECTOR(uint16_t, 16) l_400 = (VECTOR(uint16_t, 16))(0xFEC0L, (VECTOR(uint16_t, 4))(0xFEC0L, (VECTOR(uint16_t, 2))(0xFEC0L, 9UL), 9UL), 9UL, 0xFEC0L, 9UL, (VECTOR(uint16_t, 2))(0xFEC0L, 9UL), (VECTOR(uint16_t, 2))(0xFEC0L, 9UL), 0xFEC0L, 9UL, 0xFEC0L, 9UL);
        VECTOR(uint16_t, 4) l_401 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0UL), 0UL);
        VECTOR(uint16_t, 4) l_402 = (VECTOR(uint16_t, 4))(0x388DL, (VECTOR(uint16_t, 2))(0x388DL, 0xFD78L), 0xFD78L);
        int32_t *l_409[3];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_409[i] = &l_398[0][0];
        l_354 = func_53(((p_425->g_353 | (safe_mul_func_uint16_t_u_u(((((((safe_add_func_int32_t_s_s(0x74F8B9ACL, (safe_rshift_func_uint16_t_u_s((++p_425->g_284.y), ((((l_398[0][4] = (safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 8))(0x81L, ((VECTOR(uint8_t, 2))(p_425->g_371.se5)), ((safe_lshift_func_uint8_t_u_u(((((safe_div_func_int64_t_s_s((((0L && (safe_sub_func_uint32_t_u_u(((((l_378.w & (!((safe_mul_func_uint8_t_u_u((p_425->g_24.x++), (safe_sub_func_int64_t_s_s(((((p_425->g_371.s7 = p_5) || 0x08L) == ((((*l_390) = &p_425->g_133) != ((((((p_3 , (((((+((safe_mul_func_int8_t_s_s(((safe_div_func_uint8_t_u_u(FAKE_DIVERGE(p_425->global_0_offset, get_global_id(0), 10), (safe_div_func_uint64_t_u_u((p_4 >= p_3), p_425->g_106)))) == p_5), p_425->g_265.z)) , 0UL)) ^ 250UL) || (*p_425->g_90)) , p_425->g_302.w) , 0x0B95FDD0641AAD81L)) , p_3) || p_3) != 0x28L) ^ p_3) , (void*)0)) , 8UL)) < p_425->g_347.s8), FAKE_DIVERGE(p_425->group_2_offset, get_group_id(2), 10))))) | 0x2227AB925C6C34BFL))) < 0UL) > p_425->g_115) >= 8L), p_425->g_327.s9))) , 0x3DB2E5227E56094BL) && l_378.z), p_425->g_189.se)) > (-1L)) , &p_425->g_216) == (void*)0), l_397)) > p_425->g_189.sf), 255UL, 0x7FL, 0xF2L, 0x55L)).odd, ((VECTOR(uint8_t, 4))(7UL)), ((VECTOR(uint8_t, 4))(4UL))))).ywxyyzwy)).s2, p_4))) ^ 5UL) >= p_5) & p_5))))) == p_425->g_94) , p_4) ^ p_4) , l_398[3][6]) & p_425->g_353), (-1L)))) ^ p_3), &p_425->g_36, p_425->g_349, p_425);
        l_417 |= (((((((*p_425->g_132) = (*p_425->g_132)) == (void*)0) , ((VECTOR(uint16_t, 16))(rotate(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(p_425->g_399.s8f)).yxyy)).xyxyxxxywyxwxwyx, ((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 4))(l_400.s6fdd)), ((VECTOR(uint16_t, 4))(l_401.zxzw))))).even, ((VECTOR(uint16_t, 2))(0x6AC1L, 1UL))))).xxyxxyyxyxxxxyxy, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_402.ww)).yyyx)).xwyxywwwywzzyzxy))), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(0x35B9L, 0x754DL)).yyyxxyxyxxyyxxxy)))))))))))))).s0) , (p_3 = GROUP_DIVERGE(0, 1))) > ((p_4 || (&p_425->g_132 == l_403)) < ((((((VECTOR(uint64_t, 8))(0xA4605DFE3D36590DL, ((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(l_404.ywyzwxyyzzxyzxyx)).hi)).hi)))), p_425->g_347.s7, 18446744073709551609UL, 0x7D08D50906A9F342L, 18446744073709551615UL)).lo, ((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(add_sat(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(1UL, 0x0A275DAFDDA69AC6L, ((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 16))((safe_mod_func_uint32_t_u_u((p_425->g_350 &= ((safe_sub_func_int32_t_s_s(((((l_410 |= (&l_354 == &l_354)) & p_425->g_265.z) == p_425->g_147[3][6][0]) >= GROUP_DIVERGE(0, 1)), p_425->g_67.z)) , p_425->g_353)), p_425->l_comm_values[(safe_mod_func_uint32_t_u_u(p_425->tid, 21))])), ((VECTOR(uint64_t, 8))(1UL)), p_5, ((VECTOR(uint64_t, 4))(0x16D29E58B95C072CL)), 0UL, 0x19A43D3EC3060F40L)).s1bf3, ((VECTOR(uint64_t, 4))(18446744073709551615UL)), ((VECTOR(uint64_t, 4))(18446744073709551615UL))))), 0xB78876D1C4AECBFDL, 1UL)))).s31, ((VECTOR(uint64_t, 2))(0x8787C3A7301B061BL))))).xxyxyxxx)), ((VECTOR(uint64_t, 4))(9UL)), ((VECTOR(uint64_t, 2))(1UL)), 0x13DF84ACC2E609E4L, 0xE8D8C13B6A569083L)).s80, (uint64_t)0xAE65F7D57FF1E77CL))).yyyx))), p_425->g_151, 18446744073709551614UL, 0xBC37ECB489A144EBL)).s3 , p_425->g_411) == (void*)0) < p_425->g_347.s0) && p_425->g_301.y))) != p_4);
        l_420.x++;
        (*p_425->g_156) = 0x01415348L;
    }
    return l_423;
}


/* ------------------------------------------ */
/* 
 * reads : p_425->g_34 p_425->g_39 p_425->g_36 p_425->g_comm_values p_425->g_67 p_425->g_86 p_425->g_90 p_425->g_91 p_425->g_102 p_425->g_107 p_425->g_112 p_425->g_115 p_425->g_116 p_425->g_120 p_425->g_132 p_425->g_137 p_425->g_138 p_425->l_comm_values p_425->g_147 p_425->g_24 p_425->g_156 p_425->g_159 p_425->g_94 p_425->g_171 p_425->g_25 p_425->g_113 p_425->g_133 p_425->g_189 p_425->g_131 p_425->g_216 p_425->g_220 p_425->g_265 p_425->g_301 p_425->g_302 p_425->g_327 p_425->g_284 p_425->g_151 p_425->g_347 p_425->g_349
 * writes: p_425->g_40 p_425->g_102 p_425->g_107 p_425->g_113 p_425->g_115 p_425->g_131 p_425->g_147 p_425->g_151 p_425->g_120 p_425->g_94 p_425->g_137 p_425->g_159 p_425->g_220 p_425->g_24 p_425->g_242 p_425->g_36 p_425->g_349
 */
int32_t  func_13(int64_t  p_14, struct S0 * p_425)
{ /* block id: 9 */
    int32_t *l_38 = &p_425->g_39[0];
    int32_t **l_37[10] = {&l_38,(void*)0,&l_38,(void*)0,&l_38,&l_38,(void*)0,&l_38,(void*)0,&l_38};
    VECTOR(int8_t, 2) l_43 = (VECTOR(int8_t, 2))(0x0AL, 0x6CL);
    int64_t *l_51 = (void*)0;
    VECTOR(uint16_t, 16) l_300 = (VECTOR(uint16_t, 16))(65530UL, (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 65526UL), 65526UL), 65526UL, 65530UL, 65526UL, (VECTOR(uint16_t, 2))(65530UL, 65526UL), (VECTOR(uint16_t, 2))(65530UL, 65526UL), 65530UL, 65526UL, 65530UL, 65526UL);
    int16_t *l_303[3][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    uint32_t l_304[8] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
    uint64_t l_348 = 0x6FEABFEDDA966ECBL;
    int i, j;
    p_425->g_40 = (p_425->g_34 , (void*)0);
    p_425->g_349 ^= (((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 8))(l_43.xxyxxxxy)).s3076051764050630, ((VECTOR(int8_t, 8))((func_21((*l_38), p_425) | (func_21(p_14, p_425) > func_44((l_304[0] = ((*l_38) | (func_48(p_425->g_36, l_51, p_425) , ((safe_mod_func_int32_t_s_s(((safe_mod_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((((((VECTOR(uint16_t, 2))(l_300.sf2)).even ^ ((VECTOR(int16_t, 16))(p_425->g_301.wxzxxwyxzzwxwwzz)).sf) >= (&p_425->g_151 != (void*)0)) <= p_14) , p_14), p_14)), FAKE_DIVERGE(p_425->local_1_offset, get_local_id(1), 10))) ^ p_14) && p_425->l_comm_values[(safe_mod_func_uint32_t_u_u(p_425->tid, 21))]), 12)), p_14)) < p_14), p_425->g_302.w)) , 0x3D27DC44F45AB369L)))), p_14, &p_425->g_39[2], p_425))), 0x53L, 1L, (*l_38), ((VECTOR(int8_t, 4))(0x1CL)))).s7600735601566756))).sb, 7)) < (*l_38)), ((VECTOR(uint16_t, 4))(1UL)), 5UL, ((VECTOR(uint16_t, 2))(0xC142L)), 1UL, ((VECTOR(uint16_t, 4))(0x6881L)), p_425->g_67.w, 65529UL, 1UL)).sad)).hi , l_348);
    return p_14;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int64_t  func_21(int32_t  p_22, struct S0 * p_425)
{ /* block id: 5 */
    int64_t l_23 = 1L;
    return l_23;
}


/* ------------------------------------------ */
/* 
 * reads : p_425->g_102 p_425->g_327 p_425->g_189 p_425->g_39 p_425->g_138 p_425->g_284 p_425->g_137 p_425->g_301 p_425->g_151 p_425->g_comm_values p_425->g_132 p_425->g_133 p_425->g_36 p_425->g_347 p_425->g_90 p_425->g_91
 * writes: p_425->g_120 p_425->g_113 p_425->g_36
 */
uint8_t  func_44(int16_t  p_45, uint8_t  p_46, int32_t * p_47, struct S0 * p_425)
{ /* block id: 104 */
    int32_t l_311 = 0x07B797E4L;
    VECTOR(uint32_t, 8) l_319 = (VECTOR(uint32_t, 8))(0x13D937E2L, (VECTOR(uint32_t, 4))(0x13D937E2L, (VECTOR(uint32_t, 2))(0x13D937E2L, 0x3DC60F20L), 0x3DC60F20L), 0x3DC60F20L, 0x13D937E2L, 0x3DC60F20L);
    VECTOR(int16_t, 16) l_328 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int16_t, 2))(1L, 0L), (VECTOR(int16_t, 2))(1L, 0L), 1L, 0L, 1L, 0L);
    VECTOR(int32_t, 16) l_329 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x6087919DL), 0x6087919DL), 0x6087919DL, 1L, 0x6087919DL, (VECTOR(int32_t, 2))(1L, 0x6087919DL), (VECTOR(int32_t, 2))(1L, 0x6087919DL), 1L, 0x6087919DL, 1L, 0x6087919DL);
    uint8_t *l_330 = (void*)0;
    int64_t *l_331[7][10][3] = {{{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36}},{{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36}},{{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36}},{{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36}},{{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36}},{{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36}},{{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36},{&p_425->g_36,&p_425->g_36,&p_425->g_36}}};
    VECTOR(int32_t, 2) l_332 = (VECTOR(int32_t, 2))(0L, 0x698F1805L);
    uint32_t l_333 = 0x8667795BL;
    int32_t *l_334 = (void*)0;
    int32_t l_335 = 0x36E7ABCDL;
    VECTOR(int16_t, 4) l_343 = (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), 0x7151L), 0x7151L);
    VECTOR(int16_t, 4) l_344 = (VECTOR(int16_t, 4))(0x176BL, (VECTOR(int16_t, 2))(0x176BL, 0L), 0L);
    VECTOR(int64_t, 16) l_345 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int64_t, 2))(1L, (-1L)), (VECTOR(int64_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L));
    int i, j, k;
    l_335 &= (safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(p_425->g_102, (safe_sub_func_int16_t_s_s((((((p_46 = l_311) > (safe_mul_func_uint8_t_u_u(((p_45 , 6L) <= (safe_unary_minus_func_uint64_t_u((safe_mod_func_int16_t_s_s((+(p_45 != (l_332.x ^= (safe_lshift_func_int16_t_s_s((((VECTOR(uint32_t, 8))(l_319.s14603033)).s5 < (GROUP_DIVERGE(0, 1) & 0x7CL)), (safe_unary_minus_func_int8_t_s((((safe_div_func_uint16_t_u_u((safe_div_func_int16_t_s_s((-1L), (((l_329.s8 = (safe_div_func_uint64_t_u_u((((((((p_425->g_120.x = ((((VECTOR(uint16_t, 2))(p_425->g_327.sff)).lo ^ ((VECTOR(int16_t, 4))(0x23C6L, ((VECTOR(int16_t, 2))(l_328.s09)), 0L)).w) == (p_425->g_189.s4 >= 249UL))) && (*p_47)) , 0L) || 0xBCAFL) || l_319.s0) || (*p_47)) , l_329.s2), p_45))) >= GROUP_DIVERGE(0, 1)) , p_425->g_138.sd))), p_45)) <= 0L) < p_425->g_284.y)))))))), l_311))))), p_425->g_137.s4))) < p_425->g_301.w) == p_425->g_151) & 0x64L), l_333)))), p_425->g_comm_values[p_425->tid]));
    (**p_425->g_132) = (void*)0;
    for (p_425->g_36 = 3; (p_425->g_36 <= (-26)); p_425->g_36 = safe_sub_func_int64_t_s_s(p_425->g_36, 5))
    { /* block id: 113 */
        VECTOR(int16_t, 2) l_340 = (VECTOR(int16_t, 2))(0x3522L, 1L);
        VECTOR(uint64_t, 2) l_346 = (VECTOR(uint64_t, 2))(0x7BCA6CF48EFCF066L, 0xD17B3A5BA182F894L);
        int i;
        atomic_min(&p_425->g_atomic_reduction[get_linear_group_id()], ((safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 2))(l_340.yx)).hi, (((~(safe_add_func_int16_t_s_s(((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 2))(l_343.xz)).xxyxxxxy, ((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_344.wzwywwxy)).hi)).w, 0x5FE0L, 0x5608L, (-1L))).ywzxzwzx, ((VECTOR(int16_t, 2))(6L, 9L)).yyyxyyyx)))))).s0, p_46))) , ((VECTOR(uint64_t, 16))(mad_hi(((VECTOR(uint64_t, 16))(abs(((VECTOR(int64_t, 4))(l_345.sbff4)).zxwxyyxyxwwyxyyz))), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(l_346.xxxy)).wzwzywxyxyzxwywz)).s09)).xxxxxyxxxyxyyxxy, ((VECTOR(uint64_t, 2))(0xCAE74D289BE4ABEDL, 18446744073709551615UL)).yyxxyyyxyxxxyyyx))).s1) != ((VECTOR(int64_t, 2))(0x09594C67C49C3C87L, (-9L))).lo))) < ((VECTOR(int16_t, 16))(p_425->g_347.s8058c4b011579539)).s8) + get_linear_global_id());
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_425->v_collective += p_425->g_atomic_reduction[get_linear_group_id()];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    }
    return (*p_425->g_90);
}


/* ------------------------------------------ */
/* 
 * reads : p_425->g_comm_values p_425->g_67 p_425->g_86 p_425->g_90 p_425->g_91 p_425->g_102 p_425->g_107 p_425->g_112 p_425->g_115 p_425->g_116 p_425->g_120 p_425->g_34 p_425->g_132 p_425->g_137 p_425->g_138 p_425->g_36 p_425->g_39 p_425->l_comm_values p_425->g_147 p_425->g_24 p_425->g_156 p_425->g_159 p_425->g_94 p_425->g_171 p_425->g_25 p_425->g_113 p_425->g_133 p_425->g_189 p_425->g_131 p_425->g_216 p_425->g_220 p_425->g_265
 * writes: p_425->g_102 p_425->g_107 p_425->g_113 p_425->g_115 p_425->g_131 p_425->g_147 p_425->g_151 p_425->g_120 p_425->g_94 p_425->g_137 p_425->g_159 p_425->g_220 p_425->g_24 p_425->g_242
 */
int16_t  func_48(int32_t  p_49, int64_t * p_50, struct S0 * p_425)
{ /* block id: 11 */
    int16_t *l_52[3][7];
    VECTOR(int8_t, 4) l_64 = (VECTOR(int8_t, 4))(0x6FL, (VECTOR(int8_t, 2))(0x6FL, 0L), 0L);
    uint8_t *l_89 = (void*)0;
    int64_t l_92 = (-1L);
    int32_t l_125 = 0x778E667AL;
    VECTOR(uint16_t, 4) l_188 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xD290L), 0xD290L);
    uint64_t l_195 = 0x8DD6D27568DB45E2L;
    VECTOR(uint16_t, 2) l_209 = (VECTOR(uint16_t, 2))(0x0757L, 0x40B3L);
    uint32_t *l_218 = (void*)0;
    uint32_t *l_219 = &p_425->g_147[1][5][2];
    int8_t *l_221[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_222 = 1L;
    uint8_t *l_223 = (void*)0;
    uint8_t *l_224[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_225 = 0x4E87DCAFL;
    int32_t l_226 = (-3L);
    int32_t l_227 = 0x5DC7D824L;
    uint64_t *l_234 = &l_195;
    uint32_t *l_241 = &p_425->g_242[9];
    uint8_t ***l_244 = (void*)0;
    uint8_t ****l_243 = &l_244;
    uint32_t l_267 = 0x5A238513L;
    int32_t *l_274[4] = {&p_425->g_115,&p_425->g_115,&p_425->g_115,&p_425->g_115};
    int32_t *l_285 = &l_222;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
            l_52[i][j] = &p_425->g_34;
    }
    if (((void*)0 != l_52[1][6]))
    { /* block id: 12 */
        int64_t l_61 = 0x44D5381D8479822EL;
        uint8_t *l_79 = (void*)0;
        uint8_t *l_80 = (void*)0;
        uint8_t *l_81[3];
        int32_t l_82 = 0x2E6C26CFL;
        VECTOR(uint8_t, 8) l_85 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 9UL), 9UL), 9UL, 255UL, 9UL);
        uint16_t *l_93[3];
        uint64_t l_95 = 0xAB819B16196426D5L;
        int32_t *l_124[3][9] = {{&p_425->g_115,&p_425->g_39[0],&p_425->g_115,&p_425->g_115,&p_425->g_39[0],&p_425->g_115,&p_425->g_115,&p_425->g_39[0],&p_425->g_115},{&p_425->g_115,&p_425->g_39[0],&p_425->g_115,&p_425->g_115,&p_425->g_39[0],&p_425->g_115,&p_425->g_115,&p_425->g_39[0],&p_425->g_115},{&p_425->g_115,&p_425->g_39[0],&p_425->g_115,&p_425->g_115,&p_425->g_39[0],&p_425->g_115,&p_425->g_115,&p_425->g_39[0],&p_425->g_115}};
        int i, j;
        for (i = 0; i < 3; i++)
            l_81[i] = (void*)0;
        for (i = 0; i < 3; i++)
            l_93[i] = &p_425->g_94;
        (*p_425->g_133) = func_53(p_425->g_comm_values[p_425->tid], func_57((l_125 = (l_61 ^ ((safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 4))(l_64.ywww)).w, 0)) > ((safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 8))(p_425->g_67.yywxxzxy)).s5, p_49)) & func_21((safe_sub_func_uint16_t_u_u((((func_70(func_73(p_49, (l_95 |= ((safe_rshift_func_uint8_t_u_s(((((l_82 |= ((safe_unary_minus_func_int64_t_s(p_425->g_67.x)) < (p_49 ^ 18446744073709551615UL))) , ((((safe_rshift_func_uint16_t_u_s((!0UL), 6)) >= ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 8))(0xCFL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_85.s31)), 0x3FL, 0x95L)), 0UL, 250UL, 251UL)).s02, ((VECTOR(uint8_t, 2))(p_425->g_86.yx))))).yyxy)).xyzwxzzx, ((VECTOR(uint8_t, 16))(max(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 4))((safe_sub_func_uint16_t_u_u(((l_89 == p_425->g_90) | 0x78C03821FDCAA397L), l_85.s1)), 0x34L, 1UL, 0x45L)), ((VECTOR(uint8_t, 4))(0x27L))))).yzxywzzzwxywyzwy, (uint8_t)(*p_425->g_90)))).hi))).s47, ((VECTOR(uint8_t, 2))(0xADL))))).yxxx)).wyyywwzx, ((VECTOR(uint16_t, 8))(0x7FEFL))))).s2044533366313476)).sa) , (-1L)) <= p_49)) >= 0x56864248A5E38B96L) || p_49), l_92)) & p_425->g_86.y)), p_425), l_64.y, p_425) >= 0xAFB31ACB9E114892L) > p_49) < l_85.s6), p_425->g_34)), p_425))))), p_49, p_49, p_425), p_49, p_425);
        atomic_max(&p_425->g_atomic_reduction[get_linear_group_id()], 1L + get_linear_global_id());
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_425->v_collective += p_425->g_atomic_reduction[get_linear_group_id()];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    }
    else
    { /* block id: 63 */
        uint16_t l_187[9][4] = {{0xA0A2L,65535UL,0xB185L,0xD6F0L},{0xA0A2L,65535UL,0xB185L,0xD6F0L},{0xA0A2L,65535UL,0xB185L,0xD6F0L},{0xA0A2L,65535UL,0xB185L,0xD6F0L},{0xA0A2L,65535UL,0xB185L,0xD6F0L},{0xA0A2L,65535UL,0xB185L,0xD6F0L},{0xA0A2L,65535UL,0xB185L,0xD6F0L},{0xA0A2L,65535UL,0xB185L,0xD6F0L},{0xA0A2L,65535UL,0xB185L,0xD6F0L}};
        uint64_t *l_194 = &p_425->g_131;
        int32_t *l_196 = &p_425->g_115;
        int i, j;
        l_195 = ((safe_sub_func_int32_t_s_s(0x67404A6EL, p_425->g_159.y)) & ((safe_lshift_func_uint8_t_u_u(l_64.x, ((!(safe_div_func_uint64_t_u_u((l_125 | l_187[6][3]), (((1L >= ((*l_194) &= (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_188.wx)), 0UL, 0UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(p_425->g_189.s0c)))))), 0xDB9AL, 65535UL)).odd)))).w <= (safe_sub_func_uint32_t_u_u(((safe_div_func_int32_t_s_s((p_49 , (l_64.z != 4294967290UL)), 4294967295UL)) <= l_92), 0xD4B8A66AL))))) | l_64.x) , p_425->g_189.s0)))) | p_425->g_147[3][6][0]))) && l_125));
        l_196 = ((p_425->g_159.x |= p_49) , (**p_425->g_132));
        return p_49;
    }
    (*p_425->g_133) = ((safe_sub_func_int8_t_s_s((l_222 &= ((safe_mod_func_uint64_t_u_u((l_125 = ((l_188.w >= ((p_425->g_220 |= (safe_div_func_int64_t_s_s((safe_div_func_int8_t_s_s((safe_add_func_uint64_t_u_u(0xB4228BFCDF91F351L, GROUP_DIVERGE(1, 1))), (((safe_add_func_uint16_t_u_u(p_425->g_159.w, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_209.xxxyyyxy)).s3767533700545645)).s02)).lo)) , ((VECTOR(uint64_t, 4))(p_49, 18446744073709551606UL, 18446744073709551614UL, 0UL)).z) ^ ((VECTOR(int64_t, 8))((safe_lshift_func_uint16_t_u_u(GROUP_DIVERGE(2, 1), 0)), (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 2))(0x6BL, (-1L))).yxyyxxxxyyxxyyyx, (int8_t)((~0x72L) >= p_425->l_comm_values[(safe_mod_func_uint32_t_u_u(p_425->tid, 21))])))).s2b51, ((VECTOR(int8_t, 2))(0L, 1L)).xxyy))), (((safe_mod_func_uint8_t_u_u((p_49 | (((*l_219) = (((p_425->g_216 == (void*)0) < p_49) > p_49)) != p_49)), l_125)) >= p_49) , l_188.y), ((VECTOR(int8_t, 4))(0x11L)), l_188.x, ((VECTOR(int8_t, 2))(0L)), l_209.y, p_49, 5L, 0x39L)).s43, ((VECTOR(int8_t, 2))(0x7EL)), ((VECTOR(int8_t, 2))((-6L)))))).odd, l_64.x)), ((VECTOR(int64_t, 4))(0x4804D94C7B3DE6F4L)), 0x669E41796EB3636EL, 4L)).s0))), 0xA50092697A2408B1L))) != l_195)) , 18446744073709551608UL)), p_425->g_36)) == p_425->g_24.x)), 9UL)) , &l_125);
    if (((FAKE_DIVERGE(p_425->local_1_offset, get_local_id(1), 10) , func_73(((p_425->g_24.y++) & (safe_mul_func_int16_t_s_s((l_92 , (safe_sub_func_int64_t_s_s(0x0F4F7A1DF521F715L, ((*l_234) ^= l_225)))), (p_49 || (((safe_div_func_int64_t_s_s((safe_div_func_int64_t_s_s((((*l_243) = (((*l_241) = (+(safe_lshift_func_uint8_t_u_s(((void*)0 != &p_425->g_36), 2)))) , (void*)0)) == &p_425->g_217), 0x18D602D299493731L)), p_49)) , p_425->g_131) , p_49))))), l_188.z, p_425)) == l_52[1][6]))
    { /* block id: 79 */
        uint16_t *l_249 = &p_425->g_94;
        VECTOR(int32_t, 8) l_264 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x1D9DC3E8L), 0x1D9DC3E8L), 0x1D9DC3E8L, 8L, 0x1D9DC3E8L);
        VECTOR(int32_t, 16) l_266 = (VECTOR(int32_t, 16))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x4F0C02D7L), 0x4F0C02D7L), 0x4F0C02D7L, (-8L), 0x4F0C02D7L, (VECTOR(int32_t, 2))((-8L), 0x4F0C02D7L), (VECTOR(int32_t, 2))((-8L), 0x4F0C02D7L), (-8L), 0x4F0C02D7L, (-8L), 0x4F0C02D7L);
        int32_t *l_272[10][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        uint16_t l_273 = 65535UL;
        int i, j;
        (*p_425->g_113) = p_49;
        l_274[0] = func_53((safe_rshift_func_int16_t_s_u(((safe_div_func_uint16_t_u_u(((*l_249) = 9UL), (safe_sub_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((*p_425->g_90), (l_273 = ((safe_add_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((safe_div_func_int32_t_s_s(((***p_425->g_132) ^= 0x7FB43F38L), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_264.s1001)), (-1L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(p_425->g_265.zz)))).xyyyxyyy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0L, (-4L))), 0x2532BCFAL, 0x3A94196BL)).ywzwzzww))))).s06)).xxxx)), 0L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_266.s321c88ec6b022f53)))).hi)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))((((l_267 = p_425->g_138.s0) != (safe_rshift_func_int16_t_s_u(0L, ((safe_add_func_int32_t_s_s((l_225 = (((65531UL > 3L) <= 0x132C40E7L) != l_266.se)), 0x61D516A5L)) < l_209.y)))) < p_49), 0x410A0099L, 0x27DA6F13L, 1L)).wwyzxwzzyzzzzxyw)).s7048)).zwyxyzwy, ((VECTOR(int32_t, 8))(0x1C1A3CEEL))))).s76, ((VECTOR(int32_t, 2))(0x30A29E18L))))).yyxy)), 0x6527211AL, 4L)).s1)) >= 0x77L), p_425->g_189.sd)), p_425->g_137.s6)), p_425->g_138.s0)) , (**p_425->g_133)), l_92)) && p_49)))), p_49)))) && p_49), 8)), &l_92, l_226, p_425);
        for (l_222 = (-30); (l_222 != 1); l_222 = safe_add_func_int64_t_s_s(l_222, 4))
        { /* block id: 89 */
            uint64_t l_277 = 0x94BE712EA60D0EFDL;
            l_277 |= 0x2BCA21AEL;
            return l_277;
        }
        l_285 = l_272[3][0];
    }
    else
    { /* block id: 96 */
        uint64_t l_286 = 0xB2A901A7BE7A53B6L;
        uint16_t l_287 = 5UL;
        (*p_425->g_113) |= l_286;
        (*l_285) = ((*p_425->g_113) = (((0xB7F0CE31EFFF406CL <= FAKE_DIVERGE(p_425->group_0_offset, get_group_id(0), 10)) <= l_287) <= (!(p_425->g_265.z > (safe_mod_func_int16_t_s_s((((p_425->g_86.x , func_53((0L >= (0x35L == p_425->g_159.y)), &p_425->g_36, p_49, p_425)) == &p_425->g_242[3]) || p_49), p_49))))));
        (*p_425->g_133) = &l_226;
    }
    return p_49;
}


/* ------------------------------------------ */
/* 
 * reads : p_425->g_132 p_425->g_90 p_425->g_91 p_425->g_137 p_425->g_138 p_425->g_36 p_425->g_39 p_425->l_comm_values p_425->g_147 p_425->g_24 p_425->g_156 p_425->g_115 p_425->g_120 p_425->g_159 p_425->g_94 p_425->g_171 p_425->g_25 p_425->g_34 p_425->g_112 p_425->g_113
 * writes: p_425->g_131 p_425->g_147 p_425->g_151 p_425->g_115 p_425->g_120 p_425->g_94 p_425->g_137
 */
int32_t * func_53(uint32_t  p_54, int64_t * p_55, int32_t  p_56, struct S0 * p_425)
{ /* block id: 43 */
    uint64_t *l_130 = &p_425->g_131;
    int32_t ***l_134[6][2][7] = {{{&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133},{&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133}},{{&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133},{&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133}},{{&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133},{&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133}},{{&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133},{&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133}},{{&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133},{&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133}},{{&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133},{&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133,&p_425->g_133}}};
    int32_t ***l_135 = (void*)0;
    VECTOR(int8_t, 4) l_136 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x38L), 0x38L);
    VECTOR(int8_t, 16) l_139 = (VECTOR(int8_t, 16))(0x30L, (VECTOR(int8_t, 4))(0x30L, (VECTOR(int8_t, 2))(0x30L, 1L), 1L), 1L, 0x30L, 1L, (VECTOR(int8_t, 2))(0x30L, 1L), (VECTOR(int8_t, 2))(0x30L, 1L), 0x30L, 1L, 0x30L, 1L);
    VECTOR(int8_t, 4) l_140 = (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), (-1L)), (-1L));
    VECTOR(int8_t, 4) l_141 = (VECTOR(int8_t, 4))(0x2BL, (VECTOR(int8_t, 2))(0x2BL, 0x05L), 0x05L);
    uint32_t *l_146 = &p_425->g_147[3][6][0];
    uint64_t l_148 = 3UL;
    uint32_t l_149 = 0x04D2973CL;
    int32_t *l_150 = &p_425->g_151;
    int16_t *l_152[8][7][4] = {{{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34}},{{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34}},{{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34}},{{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34}},{{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34}},{{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34}},{{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34}},{{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34},{&p_425->g_34,(void*)0,(void*)0,&p_425->g_34}}};
    int32_t l_153 = 0x2806D6E3L;
    uint16_t *l_166 = &p_425->g_94;
    uint8_t *l_172 = (void*)0;
    uint8_t *l_173 = (void*)0;
    uint8_t **l_174 = &l_173;
    uint8_t ***l_175 = &l_174;
    int8_t *l_176 = (void*)0;
    int8_t *l_177 = (void*)0;
    int8_t *l_178 = (void*)0;
    int8_t *l_179[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_180 = 1L;
    int i, j, k;
    (*p_425->g_156) = ((((safe_lshift_func_int16_t_s_s((l_153 = ((255UL != (((*l_130) = FAKE_DIVERGE(p_425->local_0_offset, get_local_id(0), 10)) ^ ((((((*l_150) = ((VECTOR(int32_t, 8))(((p_56 = ((((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 4))(((l_134[3][0][0] = p_425->g_132) != l_135), 0x40L, 0x4EL, 0L)).xxzyyyyz, ((VECTOR(int8_t, 8))(l_136.wxwxxzyy))))).s1 | (*p_425->g_90)) == (p_56 || ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(0x58L, l_136.y, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(0x79L, ((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 8))(p_425->g_137.s12061143)).s4543437044600044, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_425->g_138.sdd)).xxyy)).wxwwzywxyywyzzzz, ((VECTOR(int8_t, 4))(0x54L, ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_139.s8b)))), ((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 16))(l_140.ywywxzwzywxxzyyy)).s1dec, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x7CL, 0x21L)), 0x35L, (-6L))), ((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 4))(l_141.yyxx)), (int8_t)((safe_mul_func_int16_t_s_s(((safe_div_func_int16_t_s_s(p_425->g_36, (((*l_146) = 4294967292UL) ^ p_56))) , p_56), l_148)) | p_425->g_39[0]))))))).zxwzwxzyxwwxwyyz, ((VECTOR(int8_t, 16))(0L))))).scb))), (-1L))).zzxxyzwzyyywwzzz))).s5f86, (int8_t)p_56, (int8_t)p_425->l_comm_values[(safe_mod_func_uint32_t_u_u(p_425->tid, 21))]))), ((VECTOR(int8_t, 2))(0x67L)), 0x37L)).lo)).lo)), 0x2BL, 0x37L, 9L, ((VECTOR(int8_t, 8))((-10L))), 0L)))).even))).hi)).w))) , p_56), 0x1BE6A337L, 0x0B747BEBL, 0x31900754L, p_425->g_147[3][6][0], l_149, 0L, 1L)).s4) , &p_425->g_102) != (void*)0) , 1UL) , (*p_55)))) , (-1L))), p_425->g_137.s7)) >= (-10L)) < 0x1A7CL) == p_425->g_24.x);
    p_425->g_120.x &= (*p_425->g_156);
    l_180 ^= ((((safe_lshift_func_int8_t_s_s((p_425->g_137.s4 = ((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(p_425->g_159.xwzwyyxzzxwzwzwx)).hi)).s1 == (safe_div_func_uint64_t_u_u(((p_55 = func_57((((p_56 != (safe_sub_func_int8_t_s_s((((VECTOR(uint32_t, 16))(min(((VECTOR(uint32_t, 16))(((safe_add_func_uint16_t_u_u((--(*l_166)), (safe_lshift_func_uint8_t_u_u((p_425->g_120.x ^ 0L), (p_54 , ((l_172 = p_425->g_171) == ((*l_174) = l_173))))))) , (9UL || ((((((*l_175) = &l_173) != &p_425->g_171) == 5L) , 0x2F168FF3L) , p_54))), ((VECTOR(uint32_t, 2))(0xBC68AE5BL)), 2UL, ((VECTOR(uint32_t, 2))(1UL)), ((VECTOR(uint32_t, 2))(0x3ACF053EL)), p_425->g_25.s1, 0x7730140DL, ((VECTOR(uint32_t, 4))(2UL)), 0UL, 1UL)), ((VECTOR(uint32_t, 16))(0xC023DFF7L))))).s6 > p_54), p_425->g_138.s1))) <= 0x424F6457C80C0894L) < 8L), p_425->g_34, p_56, p_425)) != (void*)0), p_54))) & p_425->g_36)), 3)) <= 4UL) , p_56) > 0L);
    (*p_425->g_156) |= p_56;
    return (*p_425->g_112);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int64_t * func_57(int32_t  p_58, int64_t  p_59, int8_t  p_60, struct S0 * p_425)
{ /* block id: 40 */
    uint64_t l_126 = 18446744073709551615UL;
    int64_t *l_127[1][9][1];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 1; k++)
                l_127[i][j][k] = &p_425->g_36;
        }
    }
    l_126 = 0L;
    return l_127[0][7][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_425->g_112 p_425->g_115 p_425->g_116 p_425->g_120 p_425->g_67
 * writes: p_425->g_113 p_425->g_115
 */
int64_t  func_70(int16_t * p_71, uint8_t  p_72, struct S0 * p_425)
{ /* block id: 24 */
    int32_t *l_111 = &p_425->g_39[0];
    VECTOR(int32_t, 8) l_121 = (VECTOR(int32_t, 8))(0x0F1E77B9L, (VECTOR(int32_t, 4))(0x0F1E77B9L, (VECTOR(int32_t, 2))(0x0F1E77B9L, (-1L)), (-1L)), (-1L), 0x0F1E77B9L, (-1L));
    VECTOR(int32_t, 2) l_122 = (VECTOR(int32_t, 2))(0x3E2A38A8L, 0x10D83277L);
    int32_t *l_123 = &p_425->g_115;
    int i;
    if (((VECTOR(int32_t, 2))(0x22312402L, 0x571F9CA1L)).even)
    { /* block id: 25 */
        int32_t *l_114 = &p_425->g_115;
        (*p_425->g_112) = l_111;
        (*l_114) |= 5L;
        (*p_425->g_116) = l_114;
    }
    else
    { /* block id: 29 */
        int32_t *l_117 = &p_425->g_115;
        (*l_117) = (-1L);
        for (p_425->g_115 = 12; (p_425->g_115 >= 19); p_425->g_115 = safe_add_func_uint8_t_u_u(p_425->g_115, 4))
        { /* block id: 33 */
            if (p_72)
                break;
        }
    }
    (*l_123) = ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 8))(p_425->g_120.xxyxyyxx)).even, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(l_121.s4651)).zywywyzy, ((VECTOR(int32_t, 2))(l_122.xx)).xyyxxyxx))).s0432106054164501)).s646c))).y;
    return p_425->g_67.z;
}


/* ------------------------------------------ */
/* 
 * reads : p_425->g_102 p_425->g_107
 * writes: p_425->g_102 p_425->g_107
 */
int16_t * func_73(int64_t  p_74, uint16_t  p_75, struct S0 * p_425)
{ /* block id: 15 */
    int32_t *l_105[9] = {&p_425->g_39[0],&p_425->g_39[0],&p_425->g_39[0],&p_425->g_39[0],&p_425->g_39[0],&p_425->g_39[0],&p_425->g_39[0],&p_425->g_39[0],&p_425->g_39[0]};
    int16_t *l_110[2];
    int i;
    for (i = 0; i < 2; i++)
        l_110[i] = &p_425->g_34;
    for (p_75 = 0; (p_75 <= 16); p_75 = safe_add_func_uint64_t_u_u(p_75, 5))
    { /* block id: 18 */
        int32_t *l_99 = &p_425->g_39[0];
        int32_t **l_98 = &l_99;
        int32_t ***l_100 = (void*)0;
        int32_t ***l_101 = &l_98;
        (*l_101) = l_98;
        p_425->g_102--;
    }
    --p_425->g_107;
    return l_110[0];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[21];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 21; i++)
            l_comm_values[i] = 1;
    struct S0 c_426;
    struct S0* p_425 = &c_426;
    struct S0 c_427 = {
        (VECTOR(uint8_t, 2))(1UL, 253UL), // p_425->g_24
        (VECTOR(int8_t, 8))(0x55L, (VECTOR(int8_t, 4))(0x55L, (VECTOR(int8_t, 2))(0x55L, 1L), 1L), 1L, 0x55L, 1L), // p_425->g_25
        1L, // p_425->g_34
        (-6L), // p_425->g_36
        {(-4L),(-4L),(-4L)}, // p_425->g_39
        (void*)0, // p_425->g_40
        (VECTOR(int16_t, 4))(0x3911L, (VECTOR(int16_t, 2))(0x3911L, 0x381BL), 0x381BL), // p_425->g_67
        (VECTOR(uint8_t, 2))(0x81L, 0x01L), // p_425->g_86
        0x72L, // p_425->g_91
        &p_425->g_91, // p_425->g_90
        0UL, // p_425->g_94
        0x1400369CA922C56DL, // p_425->g_102
        0L, // p_425->g_106
        0x0EL, // p_425->g_107
        (void*)0, // p_425->g_113
        &p_425->g_113, // p_425->g_112
        0x04CF5884L, // p_425->g_115
        &p_425->g_113, // p_425->g_116
        (VECTOR(int32_t, 2))(1L, 0x35EB154EL), // p_425->g_120
        0xB4FF7E3BC08C7137L, // p_425->g_131
        &p_425->g_113, // p_425->g_133
        &p_425->g_133, // p_425->g_132
        (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x4DL), 0x4DL), 0x4DL, 1L, 0x4DL), // p_425->g_137
        (VECTOR(int8_t, 16))(3L, (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, 0L), 0L), 0L, 3L, 0L, (VECTOR(int8_t, 2))(3L, 0L), (VECTOR(int8_t, 2))(3L, 0L), 3L, 0L, 3L, 0L), // p_425->g_138
        {{{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L}},{{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L}},{{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L}},{{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L},{4294967295UL,0xCA4C7201L,0x99AC2BE0L}}}, // p_425->g_147
        (-2L), // p_425->g_151
        {&p_425->g_115,&p_425->g_115,&p_425->g_115,&p_425->g_115,&p_425->g_115,&p_425->g_115,&p_425->g_115,&p_425->g_115,&p_425->g_115}, // p_425->g_154
        (void*)0, // p_425->g_155
        &p_425->g_115, // p_425->g_156
        (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL), 18446744073709551615UL), // p_425->g_159
        (void*)0, // p_425->g_171
        (VECTOR(uint16_t, 16))(0xA3C4L, (VECTOR(uint16_t, 4))(0xA3C4L, (VECTOR(uint16_t, 2))(0xA3C4L, 0UL), 0UL), 0UL, 0xA3C4L, 0UL, (VECTOR(uint16_t, 2))(0xA3C4L, 0UL), (VECTOR(uint16_t, 2))(0xA3C4L, 0UL), 0xA3C4L, 0UL, 0xA3C4L, 0UL), // p_425->g_189
        &p_425->g_171, // p_425->g_217
        &p_425->g_217, // p_425->g_216
        4L, // p_425->g_220
        {0UL,1UL,0UL,0UL,1UL,0UL,0UL,1UL,0UL,0UL}, // p_425->g_242
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x66A98954L), 0x66A98954L), // p_425->g_265
        (VECTOR(uint16_t, 2))(0x1716L, 65531UL), // p_425->g_284
        (VECTOR(int16_t, 4))(0x1EF4L, (VECTOR(int16_t, 2))(0x1EF4L, 0x7135L), 0x7135L), // p_425->g_301
        (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 0x692EL), 0x692EL), // p_425->g_302
        (VECTOR(uint16_t, 16))(0x6BFCL, (VECTOR(uint16_t, 4))(0x6BFCL, (VECTOR(uint16_t, 2))(0x6BFCL, 0UL), 0UL), 0UL, 0x6BFCL, 0UL, (VECTOR(uint16_t, 2))(0x6BFCL, 0UL), (VECTOR(uint16_t, 2))(0x6BFCL, 0UL), 0x6BFCL, 0UL, 0x6BFCL, 0UL), // p_425->g_327
        (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x31CCL), 0x31CCL), 0x31CCL, 1L, 0x31CCL, (VECTOR(int16_t, 2))(1L, 0x31CCL), (VECTOR(int16_t, 2))(1L, 0x31CCL), 1L, 0x31CCL, 1L, 0x31CCL), // p_425->g_347
        0xDBF80F28L, // p_425->g_349
        0xE1CADA77L, // p_425->g_350
        1L, // p_425->g_353
        (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xC9L), 0xC9L), 0xC9L, 255UL, 0xC9L, (VECTOR(uint8_t, 2))(255UL, 0xC9L), (VECTOR(uint8_t, 2))(255UL, 0xC9L), 255UL, 0xC9L, 255UL, 0xC9L), // p_425->g_371
        (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x5986L), 0x5986L), 0x5986L, 65535UL, 0x5986L, (VECTOR(uint16_t, 2))(65535UL, 0x5986L), (VECTOR(uint16_t, 2))(65535UL, 0x5986L), 65535UL, 0x5986L, 65535UL, 0x5986L), // p_425->g_399
        (VECTOR(uint8_t, 2))(9UL, 0x7EL), // p_425->g_415
        1UL, // p_425->g_416
        {&p_425->g_416,&p_425->g_416}, // p_425->g_414
        {&p_425->g_414[0],&p_425->g_414[0],&p_425->g_414[0],&p_425->g_414[0],&p_425->g_414[0],&p_425->g_414[0]}, // p_425->g_413
        &p_425->g_413[0], // p_425->g_412
        &p_425->g_412, // p_425->g_411
        &p_425->g_39[0], // p_425->g_424
        0, // p_425->v_collective
        sequence_input[get_global_id(0)], // p_425->global_0_offset
        sequence_input[get_global_id(1)], // p_425->global_1_offset
        sequence_input[get_global_id(2)], // p_425->global_2_offset
        sequence_input[get_local_id(0)], // p_425->local_0_offset
        sequence_input[get_local_id(1)], // p_425->local_1_offset
        sequence_input[get_local_id(2)], // p_425->local_2_offset
        sequence_input[get_group_id(0)], // p_425->group_0_offset
        sequence_input[get_group_id(1)], // p_425->group_1_offset
        sequence_input[get_group_id(2)], // p_425->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 21)), permutations[0][get_linear_local_id()])), // p_425->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_426 = c_427;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_425);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_425->g_24.x, "p_425->g_24.x", print_hash_value);
    transparent_crc(p_425->g_24.y, "p_425->g_24.y", print_hash_value);
    transparent_crc(p_425->g_25.s0, "p_425->g_25.s0", print_hash_value);
    transparent_crc(p_425->g_25.s1, "p_425->g_25.s1", print_hash_value);
    transparent_crc(p_425->g_25.s2, "p_425->g_25.s2", print_hash_value);
    transparent_crc(p_425->g_25.s3, "p_425->g_25.s3", print_hash_value);
    transparent_crc(p_425->g_25.s4, "p_425->g_25.s4", print_hash_value);
    transparent_crc(p_425->g_25.s5, "p_425->g_25.s5", print_hash_value);
    transparent_crc(p_425->g_25.s6, "p_425->g_25.s6", print_hash_value);
    transparent_crc(p_425->g_25.s7, "p_425->g_25.s7", print_hash_value);
    transparent_crc(p_425->g_34, "p_425->g_34", print_hash_value);
    transparent_crc(p_425->g_36, "p_425->g_36", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_425->g_39[i], "p_425->g_39[i]", print_hash_value);

    }
    transparent_crc(p_425->g_67.x, "p_425->g_67.x", print_hash_value);
    transparent_crc(p_425->g_67.y, "p_425->g_67.y", print_hash_value);
    transparent_crc(p_425->g_67.z, "p_425->g_67.z", print_hash_value);
    transparent_crc(p_425->g_67.w, "p_425->g_67.w", print_hash_value);
    transparent_crc(p_425->g_86.x, "p_425->g_86.x", print_hash_value);
    transparent_crc(p_425->g_86.y, "p_425->g_86.y", print_hash_value);
    transparent_crc(p_425->g_91, "p_425->g_91", print_hash_value);
    transparent_crc(p_425->g_94, "p_425->g_94", print_hash_value);
    transparent_crc(p_425->g_102, "p_425->g_102", print_hash_value);
    transparent_crc(p_425->g_106, "p_425->g_106", print_hash_value);
    transparent_crc(p_425->g_107, "p_425->g_107", print_hash_value);
    transparent_crc(p_425->g_115, "p_425->g_115", print_hash_value);
    transparent_crc(p_425->g_120.x, "p_425->g_120.x", print_hash_value);
    transparent_crc(p_425->g_120.y, "p_425->g_120.y", print_hash_value);
    transparent_crc(p_425->g_131, "p_425->g_131", print_hash_value);
    transparent_crc(p_425->g_137.s0, "p_425->g_137.s0", print_hash_value);
    transparent_crc(p_425->g_137.s1, "p_425->g_137.s1", print_hash_value);
    transparent_crc(p_425->g_137.s2, "p_425->g_137.s2", print_hash_value);
    transparent_crc(p_425->g_137.s3, "p_425->g_137.s3", print_hash_value);
    transparent_crc(p_425->g_137.s4, "p_425->g_137.s4", print_hash_value);
    transparent_crc(p_425->g_137.s5, "p_425->g_137.s5", print_hash_value);
    transparent_crc(p_425->g_137.s6, "p_425->g_137.s6", print_hash_value);
    transparent_crc(p_425->g_137.s7, "p_425->g_137.s7", print_hash_value);
    transparent_crc(p_425->g_138.s0, "p_425->g_138.s0", print_hash_value);
    transparent_crc(p_425->g_138.s1, "p_425->g_138.s1", print_hash_value);
    transparent_crc(p_425->g_138.s2, "p_425->g_138.s2", print_hash_value);
    transparent_crc(p_425->g_138.s3, "p_425->g_138.s3", print_hash_value);
    transparent_crc(p_425->g_138.s4, "p_425->g_138.s4", print_hash_value);
    transparent_crc(p_425->g_138.s5, "p_425->g_138.s5", print_hash_value);
    transparent_crc(p_425->g_138.s6, "p_425->g_138.s6", print_hash_value);
    transparent_crc(p_425->g_138.s7, "p_425->g_138.s7", print_hash_value);
    transparent_crc(p_425->g_138.s8, "p_425->g_138.s8", print_hash_value);
    transparent_crc(p_425->g_138.s9, "p_425->g_138.s9", print_hash_value);
    transparent_crc(p_425->g_138.sa, "p_425->g_138.sa", print_hash_value);
    transparent_crc(p_425->g_138.sb, "p_425->g_138.sb", print_hash_value);
    transparent_crc(p_425->g_138.sc, "p_425->g_138.sc", print_hash_value);
    transparent_crc(p_425->g_138.sd, "p_425->g_138.sd", print_hash_value);
    transparent_crc(p_425->g_138.se, "p_425->g_138.se", print_hash_value);
    transparent_crc(p_425->g_138.sf, "p_425->g_138.sf", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_425->g_147[i][j][k], "p_425->g_147[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_425->g_151, "p_425->g_151", print_hash_value);
    transparent_crc(p_425->g_159.x, "p_425->g_159.x", print_hash_value);
    transparent_crc(p_425->g_159.y, "p_425->g_159.y", print_hash_value);
    transparent_crc(p_425->g_159.z, "p_425->g_159.z", print_hash_value);
    transparent_crc(p_425->g_159.w, "p_425->g_159.w", print_hash_value);
    transparent_crc(p_425->g_189.s0, "p_425->g_189.s0", print_hash_value);
    transparent_crc(p_425->g_189.s1, "p_425->g_189.s1", print_hash_value);
    transparent_crc(p_425->g_189.s2, "p_425->g_189.s2", print_hash_value);
    transparent_crc(p_425->g_189.s3, "p_425->g_189.s3", print_hash_value);
    transparent_crc(p_425->g_189.s4, "p_425->g_189.s4", print_hash_value);
    transparent_crc(p_425->g_189.s5, "p_425->g_189.s5", print_hash_value);
    transparent_crc(p_425->g_189.s6, "p_425->g_189.s6", print_hash_value);
    transparent_crc(p_425->g_189.s7, "p_425->g_189.s7", print_hash_value);
    transparent_crc(p_425->g_189.s8, "p_425->g_189.s8", print_hash_value);
    transparent_crc(p_425->g_189.s9, "p_425->g_189.s9", print_hash_value);
    transparent_crc(p_425->g_189.sa, "p_425->g_189.sa", print_hash_value);
    transparent_crc(p_425->g_189.sb, "p_425->g_189.sb", print_hash_value);
    transparent_crc(p_425->g_189.sc, "p_425->g_189.sc", print_hash_value);
    transparent_crc(p_425->g_189.sd, "p_425->g_189.sd", print_hash_value);
    transparent_crc(p_425->g_189.se, "p_425->g_189.se", print_hash_value);
    transparent_crc(p_425->g_189.sf, "p_425->g_189.sf", print_hash_value);
    transparent_crc(p_425->g_220, "p_425->g_220", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_425->g_242[i], "p_425->g_242[i]", print_hash_value);

    }
    transparent_crc(p_425->g_265.x, "p_425->g_265.x", print_hash_value);
    transparent_crc(p_425->g_265.y, "p_425->g_265.y", print_hash_value);
    transparent_crc(p_425->g_265.z, "p_425->g_265.z", print_hash_value);
    transparent_crc(p_425->g_265.w, "p_425->g_265.w", print_hash_value);
    transparent_crc(p_425->g_284.x, "p_425->g_284.x", print_hash_value);
    transparent_crc(p_425->g_284.y, "p_425->g_284.y", print_hash_value);
    transparent_crc(p_425->g_301.x, "p_425->g_301.x", print_hash_value);
    transparent_crc(p_425->g_301.y, "p_425->g_301.y", print_hash_value);
    transparent_crc(p_425->g_301.z, "p_425->g_301.z", print_hash_value);
    transparent_crc(p_425->g_301.w, "p_425->g_301.w", print_hash_value);
    transparent_crc(p_425->g_302.x, "p_425->g_302.x", print_hash_value);
    transparent_crc(p_425->g_302.y, "p_425->g_302.y", print_hash_value);
    transparent_crc(p_425->g_302.z, "p_425->g_302.z", print_hash_value);
    transparent_crc(p_425->g_302.w, "p_425->g_302.w", print_hash_value);
    transparent_crc(p_425->g_327.s0, "p_425->g_327.s0", print_hash_value);
    transparent_crc(p_425->g_327.s1, "p_425->g_327.s1", print_hash_value);
    transparent_crc(p_425->g_327.s2, "p_425->g_327.s2", print_hash_value);
    transparent_crc(p_425->g_327.s3, "p_425->g_327.s3", print_hash_value);
    transparent_crc(p_425->g_327.s4, "p_425->g_327.s4", print_hash_value);
    transparent_crc(p_425->g_327.s5, "p_425->g_327.s5", print_hash_value);
    transparent_crc(p_425->g_327.s6, "p_425->g_327.s6", print_hash_value);
    transparent_crc(p_425->g_327.s7, "p_425->g_327.s7", print_hash_value);
    transparent_crc(p_425->g_327.s8, "p_425->g_327.s8", print_hash_value);
    transparent_crc(p_425->g_327.s9, "p_425->g_327.s9", print_hash_value);
    transparent_crc(p_425->g_327.sa, "p_425->g_327.sa", print_hash_value);
    transparent_crc(p_425->g_327.sb, "p_425->g_327.sb", print_hash_value);
    transparent_crc(p_425->g_327.sc, "p_425->g_327.sc", print_hash_value);
    transparent_crc(p_425->g_327.sd, "p_425->g_327.sd", print_hash_value);
    transparent_crc(p_425->g_327.se, "p_425->g_327.se", print_hash_value);
    transparent_crc(p_425->g_327.sf, "p_425->g_327.sf", print_hash_value);
    transparent_crc(p_425->g_347.s0, "p_425->g_347.s0", print_hash_value);
    transparent_crc(p_425->g_347.s1, "p_425->g_347.s1", print_hash_value);
    transparent_crc(p_425->g_347.s2, "p_425->g_347.s2", print_hash_value);
    transparent_crc(p_425->g_347.s3, "p_425->g_347.s3", print_hash_value);
    transparent_crc(p_425->g_347.s4, "p_425->g_347.s4", print_hash_value);
    transparent_crc(p_425->g_347.s5, "p_425->g_347.s5", print_hash_value);
    transparent_crc(p_425->g_347.s6, "p_425->g_347.s6", print_hash_value);
    transparent_crc(p_425->g_347.s7, "p_425->g_347.s7", print_hash_value);
    transparent_crc(p_425->g_347.s8, "p_425->g_347.s8", print_hash_value);
    transparent_crc(p_425->g_347.s9, "p_425->g_347.s9", print_hash_value);
    transparent_crc(p_425->g_347.sa, "p_425->g_347.sa", print_hash_value);
    transparent_crc(p_425->g_347.sb, "p_425->g_347.sb", print_hash_value);
    transparent_crc(p_425->g_347.sc, "p_425->g_347.sc", print_hash_value);
    transparent_crc(p_425->g_347.sd, "p_425->g_347.sd", print_hash_value);
    transparent_crc(p_425->g_347.se, "p_425->g_347.se", print_hash_value);
    transparent_crc(p_425->g_347.sf, "p_425->g_347.sf", print_hash_value);
    transparent_crc(p_425->g_349, "p_425->g_349", print_hash_value);
    transparent_crc(p_425->g_350, "p_425->g_350", print_hash_value);
    transparent_crc(p_425->g_353, "p_425->g_353", print_hash_value);
    transparent_crc(p_425->g_371.s0, "p_425->g_371.s0", print_hash_value);
    transparent_crc(p_425->g_371.s1, "p_425->g_371.s1", print_hash_value);
    transparent_crc(p_425->g_371.s2, "p_425->g_371.s2", print_hash_value);
    transparent_crc(p_425->g_371.s3, "p_425->g_371.s3", print_hash_value);
    transparent_crc(p_425->g_371.s4, "p_425->g_371.s4", print_hash_value);
    transparent_crc(p_425->g_371.s5, "p_425->g_371.s5", print_hash_value);
    transparent_crc(p_425->g_371.s6, "p_425->g_371.s6", print_hash_value);
    transparent_crc(p_425->g_371.s7, "p_425->g_371.s7", print_hash_value);
    transparent_crc(p_425->g_371.s8, "p_425->g_371.s8", print_hash_value);
    transparent_crc(p_425->g_371.s9, "p_425->g_371.s9", print_hash_value);
    transparent_crc(p_425->g_371.sa, "p_425->g_371.sa", print_hash_value);
    transparent_crc(p_425->g_371.sb, "p_425->g_371.sb", print_hash_value);
    transparent_crc(p_425->g_371.sc, "p_425->g_371.sc", print_hash_value);
    transparent_crc(p_425->g_371.sd, "p_425->g_371.sd", print_hash_value);
    transparent_crc(p_425->g_371.se, "p_425->g_371.se", print_hash_value);
    transparent_crc(p_425->g_371.sf, "p_425->g_371.sf", print_hash_value);
    transparent_crc(p_425->g_399.s0, "p_425->g_399.s0", print_hash_value);
    transparent_crc(p_425->g_399.s1, "p_425->g_399.s1", print_hash_value);
    transparent_crc(p_425->g_399.s2, "p_425->g_399.s2", print_hash_value);
    transparent_crc(p_425->g_399.s3, "p_425->g_399.s3", print_hash_value);
    transparent_crc(p_425->g_399.s4, "p_425->g_399.s4", print_hash_value);
    transparent_crc(p_425->g_399.s5, "p_425->g_399.s5", print_hash_value);
    transparent_crc(p_425->g_399.s6, "p_425->g_399.s6", print_hash_value);
    transparent_crc(p_425->g_399.s7, "p_425->g_399.s7", print_hash_value);
    transparent_crc(p_425->g_399.s8, "p_425->g_399.s8", print_hash_value);
    transparent_crc(p_425->g_399.s9, "p_425->g_399.s9", print_hash_value);
    transparent_crc(p_425->g_399.sa, "p_425->g_399.sa", print_hash_value);
    transparent_crc(p_425->g_399.sb, "p_425->g_399.sb", print_hash_value);
    transparent_crc(p_425->g_399.sc, "p_425->g_399.sc", print_hash_value);
    transparent_crc(p_425->g_399.sd, "p_425->g_399.sd", print_hash_value);
    transparent_crc(p_425->g_399.se, "p_425->g_399.se", print_hash_value);
    transparent_crc(p_425->g_399.sf, "p_425->g_399.sf", print_hash_value);
    transparent_crc(p_425->g_415.x, "p_425->g_415.x", print_hash_value);
    transparent_crc(p_425->g_415.y, "p_425->g_415.y", print_hash_value);
    transparent_crc(p_425->g_416, "p_425->g_416", print_hash_value);
    transparent_crc(p_425->v_collective, "p_425->v_collective", print_hash_value);
    transparent_crc(p_425->l_comm_values[get_linear_local_id()], "p_425->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_425->g_comm_values[get_linear_group_id() * 21 + get_linear_local_id()], "p_425->g_comm_values[get_linear_group_id() * 21 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
