// --atomics 72 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 30,72,2 -l 3,9,2
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

__constant uint32_t permutations[10][54] = {
{17,31,11,40,24,34,7,4,46,50,48,47,12,8,19,45,21,23,18,26,27,52,22,3,2,20,37,43,30,10,1,51,5,15,0,33,25,53,28,49,41,44,14,32,38,9,35,42,13,39,36,6,16,29}, // permutation 0
{26,17,13,14,27,25,6,43,50,38,41,12,33,31,9,53,3,20,51,32,46,29,39,42,7,45,18,4,48,1,36,2,52,23,44,5,47,10,24,21,19,30,11,35,28,22,34,40,8,16,0,49,37,15}, // permutation 1
{28,4,23,19,16,11,25,14,42,38,43,15,52,50,13,29,30,6,27,49,10,22,35,48,46,24,45,44,26,36,7,53,17,51,40,37,18,3,0,5,20,2,1,9,21,41,32,34,31,39,33,12,47,8}, // permutation 2
{24,4,21,52,17,2,19,30,12,10,8,23,53,39,50,5,6,18,3,11,7,20,46,40,37,27,0,45,44,47,38,25,26,1,16,22,9,42,13,32,28,14,36,34,48,41,31,43,15,33,29,49,35,51}, // permutation 3
{19,45,5,11,35,3,16,18,25,1,27,28,48,22,14,50,44,17,33,10,39,30,0,13,38,51,15,2,26,41,29,47,40,43,4,12,8,9,20,52,23,46,34,37,53,42,7,49,24,31,36,21,6,32}, // permutation 4
{23,38,42,28,18,12,34,24,51,35,5,47,0,1,39,41,27,21,22,53,30,25,32,15,49,14,43,31,11,10,7,4,29,48,20,52,40,6,9,33,46,13,2,37,26,3,8,36,45,19,16,44,17,50}, // permutation 5
{37,0,47,49,30,29,28,1,51,22,35,33,23,21,7,26,11,10,42,39,17,12,25,48,4,31,14,20,41,18,50,24,2,9,16,27,19,6,15,3,32,5,13,45,52,38,40,53,43,34,44,8,36,46}, // permutation 6
{42,51,13,22,3,40,16,25,5,43,37,39,26,18,28,24,9,48,0,35,15,32,50,20,53,30,21,27,8,12,46,49,7,47,2,34,38,52,44,4,41,31,1,19,11,17,45,14,10,33,36,23,29,6}, // permutation 7
{44,11,24,38,50,25,18,35,43,39,13,2,1,6,7,19,45,16,51,20,15,9,14,26,0,4,10,47,29,3,41,34,5,37,33,12,36,31,22,46,53,21,28,30,49,32,52,17,42,8,40,48,23,27}, // permutation 8
{33,42,11,20,53,5,3,51,14,48,50,40,38,45,34,8,0,49,19,15,47,39,18,35,27,6,21,28,16,32,52,10,26,4,31,1,43,23,37,46,29,17,30,44,7,22,41,25,12,9,13,2,24,36} // permutation 9
};

// Seed: 1701768534

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile int32_t g_2;
    volatile int32_t g_3;
    int32_t g_4;
    int32_t g_56;
    int8_t g_102;
    VECTOR(int32_t, 4) g_107;
    int8_t g_109;
    int8_t *g_108;
    VECTOR(uint8_t, 2) g_133;
    int32_t *g_146;
    int32_t **g_145;
    int16_t g_148;
    int8_t **g_156;
    int32_t * volatile g_318;
    volatile VECTOR(int32_t, 2) g_332;
    int32_t * volatile g_333[1][6][1];
    int32_t * volatile g_334;
    volatile VECTOR(int32_t, 8) g_348;
    uint64_t g_350;
    volatile VECTOR(uint8_t, 2) g_363;
    VECTOR(uint8_t, 2) g_364;
    VECTOR(int16_t, 8) g_369;
    uint16_t g_376;
    int32_t g_380;
    VECTOR(uint64_t, 16) g_383;
    VECTOR(uint16_t, 8) g_388;
    int8_t g_390;
    VECTOR(int32_t, 16) g_392;
    int32_t * volatile g_396[5][2][7];
    int32_t * volatile g_399[6][9];
    VECTOR(int16_t, 8) g_491;
    uint32_t g_493;
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
uint32_t  func_1(struct S0 * p_497);
int32_t * func_7(uint16_t  p_8, int32_t * p_9, int32_t * p_10, struct S0 * p_497);
int32_t * func_12(int32_t  p_13, int32_t  p_14, uint32_t  p_15, uint32_t  p_16, int32_t  p_17, struct S0 * p_497);
int32_t  func_21(uint16_t  p_22, int64_t  p_23, int32_t * p_24, int32_t * p_25, int64_t  p_26, struct S0 * p_497);
int32_t * func_57(int32_t  p_58, int32_t * p_59, uint32_t  p_60, int8_t  p_61, uint64_t  p_62, struct S0 * p_497);
int32_t * func_63(int32_t  p_64, uint64_t  p_65, uint32_t  p_66, int32_t  p_67, struct S0 * p_497);
int32_t * func_75(int32_t ** p_76, int32_t ** p_77, int32_t * p_78, int32_t  p_79, int32_t ** p_80, struct S0 * p_497);
int32_t ** func_81(int32_t  p_82, uint32_t  p_83, int64_t  p_84, struct S0 * p_497);
uint32_t  func_85(int32_t ** p_86, int32_t  p_87, uint32_t  p_88, struct S0 * p_497);
int32_t ** func_89(int32_t * p_90, int16_t  p_91, int32_t * p_92, uint8_t  p_93, uint64_t  p_94, struct S0 * p_497);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_497->g_4 p_497->g_comm_values p_497->l_comm_values p_497->g_3 p_497->g_56 p_497->g_109 p_497->g_107 p_497->g_133 p_497->g_145 p_497->g_148 p_497->g_146 p_497->g_108 p_497->g_350 p_497->g_383 p_497->g_380 p_497->g_364
 * writes: p_497->g_4 p_497->g_56 p_497->g_102 p_497->g_148 p_497->g_146 p_497->g_156 p_497->g_350 p_497->g_376
 */
uint32_t  func_1(struct S0 * p_497)
{ /* block id: 4 */
    uint16_t l_18 = 65526UL;
    int32_t *l_29 = &p_497->g_4;
    VECTOR(int16_t, 2) l_467 = (VECTOR(int16_t, 2))(0x2F5DL, 0x4E0DL);
    int8_t *l_488 = &p_497->g_109;
    uint64_t *l_494 = (void*)0;
    uint64_t *l_496 = (void*)0;
    int i;
    for (p_497->g_4 = 19; (p_497->g_4 < (-12)); --p_497->g_4)
    { /* block id: 7 */
        int32_t *l_11 = &p_497->g_4;
        int32_t *l_54 = (void*)0;
        int32_t *l_55 = &p_497->g_56;
        uint64_t *l_472 = &p_497->g_350;
        VECTOR(int8_t, 8) l_483 = (VECTOR(int8_t, 8))(0x36L, (VECTOR(int8_t, 4))(0x36L, (VECTOR(int8_t, 2))(0x36L, 0x36L), 0x36L), 0x36L, 0x36L, 0x36L);
        int8_t *l_486 = &p_497->g_102;
        int8_t **l_487[7] = {&p_497->g_108,&p_497->g_108,&p_497->g_108,&p_497->g_108,&p_497->g_108,&p_497->g_108,&p_497->g_108};
        uint32_t *l_492 = &p_497->g_493;
        uint64_t **l_495 = &l_494;
        int i;
        (*p_497->g_145) = func_7(p_497->g_comm_values[p_497->tid], l_11, func_12(l_18, (safe_sub_func_uint64_t_u_u(1UL, (-1L))), p_497->l_comm_values[(safe_mod_func_uint32_t_u_u(p_497->tid, 54))], (*l_11), ((*l_55) = func_21((((safe_rshift_func_uint8_t_u_s(GROUP_DIVERGE(1, 1), ((&p_497->g_3 == l_11) <= p_497->g_comm_values[p_497->tid]))) , p_497->g_3) >= p_497->l_comm_values[(safe_mod_func_uint32_t_u_u(p_497->tid, 54))]), p_497->l_comm_values[(safe_mod_func_uint32_t_u_u(p_497->tid, 54))], &p_497->g_4, l_29, p_497->g_4, p_497)), p_497), p_497);
        (*p_497->g_145) = func_12((*l_29), p_497->g_383.s8, (((VECTOR(int16_t, 4))(l_467.yxyx)).w || (*l_11)), (((VECTOR(int16_t, 16))(((safe_div_func_uint8_t_u_u(p_497->g_348.s0, ((VECTOR(uint8_t, 16))(((safe_add_func_uint64_t_u_u((++(*l_472)), 1L)) == (safe_mod_func_int32_t_s_s((safe_div_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s(p_497->g_376, (((!(safe_div_func_int8_t_s_s((((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(abs_diff(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 2))(l_483.s25)), (int8_t)(safe_rshift_func_uint16_t_u_u((((l_486 != (l_488 = (void*)0)) ^ ((safe_lshift_func_int8_t_s_u((((VECTOR(int16_t, 4))(p_497->g_491.s5372)).w , (((*l_492) |= GROUP_DIVERGE(0, 1)) < ((((*l_495) = l_494) != l_496) && GROUP_DIVERGE(2, 1)))), p_497->g_369.s0)) || (*l_29))) > (*l_29)), 15))))).xxxyyyxyxyxyyyyx))).sa8)).yyyxyxxxxyxyxxxx, ((VECTOR(int8_t, 16))(3L))))).lo)).odd)).lo, ((VECTOR(uint8_t, 2))(3UL))))).lo != FAKE_DIVERGE(p_497->group_2_offset, get_group_id(2), 10)), p_497->g_392.sc))) , (*l_11)) ^ 0x11L))) > p_497->g_380), p_497->g_392.sa)), (*l_29)))), ((VECTOR(uint8_t, 8))(253UL)), ((VECTOR(uint8_t, 2))(0UL)), 247UL, p_497->g_388.s7, FAKE_DIVERGE(p_497->global_2_offset, get_global_id(2), 10), 1UL, 0x68L)).s4)) & p_497->g_56), (-3L), (*l_11), (*l_29), (*l_11), p_497->g_369.s7, (*l_11), ((VECTOR(int16_t, 2))(0x5AFFL)), 0L, (-9L), 0x308EL, 0L, 0x3120L, (-1L), 3L)).sa & 0x699FL), p_497->g_380, p_497);
        (*p_497->g_145) = l_55;
    }
    return p_497->g_364.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_497->g_350
 * writes: p_497->g_350
 */
int32_t * func_7(uint16_t  p_8, int32_t * p_9, int32_t * p_10, struct S0 * p_497)
{ /* block id: 203 */
    int32_t *l_404 = (void*)0;
    int32_t l_405 = 9L;
    l_405 ^= ((VECTOR(int32_t, 2))(0x1CDDC4CFL, (-6L))).hi;
    atomic_or(&p_497->l_atomic_reduction[0], ((-10L) >= 0x8D246230L));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_497->v_collective += p_497->l_atomic_reduction[0];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    for (p_497->g_350 = (-26); (p_497->g_350 < 22); p_497->g_350 = safe_add_func_int16_t_s_s(p_497->g_350, 5))
    { /* block id: 208 */
        if ((atomic_inc(&p_497->l_atomic_input[54]) == 1))
        { /* block id: 210 */
            int32_t l_408 = (-7L);
            int32_t *l_445 = &l_408;
            VECTOR(int32_t, 16) l_446 = (VECTOR(int32_t, 16))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x5977D785L), 0x5977D785L), 0x5977D785L, 4L, 0x5977D785L, (VECTOR(int32_t, 2))(4L, 0x5977D785L), (VECTOR(int32_t, 2))(4L, 0x5977D785L), 4L, 0x5977D785L, 4L, 0x5977D785L);
            uint32_t l_447 = 4UL;
            int32_t l_448[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
            VECTOR(int32_t, 4) l_449 = (VECTOR(int32_t, 4))(0x5FF07B80L, (VECTOR(int32_t, 2))(0x5FF07B80L, (-1L)), (-1L));
            VECTOR(int32_t, 16) l_450 = (VECTOR(int32_t, 16))(0x5A3B1420L, (VECTOR(int32_t, 4))(0x5A3B1420L, (VECTOR(int32_t, 2))(0x5A3B1420L, (-8L)), (-8L)), (-8L), 0x5A3B1420L, (-8L), (VECTOR(int32_t, 2))(0x5A3B1420L, (-8L)), (VECTOR(int32_t, 2))(0x5A3B1420L, (-8L)), 0x5A3B1420L, (-8L), 0x5A3B1420L, (-8L));
            VECTOR(int32_t, 2) l_451 = (VECTOR(int32_t, 2))(0x609C9DBCL, 1L);
            VECTOR(uint8_t, 4) l_452 = (VECTOR(uint8_t, 4))(0xDBL, (VECTOR(uint8_t, 2))(0xDBL, 0x5AL), 0x5AL);
            VECTOR(int32_t, 16) l_453 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 7L), 7L), 7L, 1L, 7L, (VECTOR(int32_t, 2))(1L, 7L), (VECTOR(int32_t, 2))(1L, 7L), 1L, 7L, 1L, 7L);
            VECTOR(int16_t, 4) l_454 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x2FD6L), 0x2FD6L);
            uint8_t l_455 = 0x93L;
            uint64_t l_456 = 0UL;
            int32_t l_457 = 6L;
            VECTOR(int32_t, 2) l_458 = (VECTOR(int32_t, 2))((-7L), 8L);
            VECTOR(int32_t, 8) l_459 = (VECTOR(int32_t, 8))(0x77850661L, (VECTOR(int32_t, 4))(0x77850661L, (VECTOR(int32_t, 2))(0x77850661L, 0x29F2E661L), 0x29F2E661L), 0x29F2E661L, 0x77850661L, 0x29F2E661L);
            int8_t l_460 = 0x44L;
            int64_t l_461[6][5] = {{0x5D0290DF8FCF7707L,0x0504E0F67733FAE7L,0x5D0290DF8FCF7707L,0x5D0290DF8FCF7707L,0x0504E0F67733FAE7L},{0x5D0290DF8FCF7707L,0x0504E0F67733FAE7L,0x5D0290DF8FCF7707L,0x5D0290DF8FCF7707L,0x0504E0F67733FAE7L},{0x5D0290DF8FCF7707L,0x0504E0F67733FAE7L,0x5D0290DF8FCF7707L,0x5D0290DF8FCF7707L,0x0504E0F67733FAE7L},{0x5D0290DF8FCF7707L,0x0504E0F67733FAE7L,0x5D0290DF8FCF7707L,0x5D0290DF8FCF7707L,0x0504E0F67733FAE7L},{0x5D0290DF8FCF7707L,0x0504E0F67733FAE7L,0x5D0290DF8FCF7707L,0x5D0290DF8FCF7707L,0x0504E0F67733FAE7L},{0x5D0290DF8FCF7707L,0x0504E0F67733FAE7L,0x5D0290DF8FCF7707L,0x5D0290DF8FCF7707L,0x0504E0F67733FAE7L}};
            VECTOR(int64_t, 2) l_462 = (VECTOR(int64_t, 2))((-1L), 1L);
            uint8_t l_463 = 255UL;
            int32_t l_464 = (-1L);
            int32_t *l_465 = &l_464;
            int32_t *l_466 = &l_448[6];
            int i, j;
            for (l_408 = 0; (l_408 == (-24)); l_408 = safe_sub_func_int32_t_s_s(l_408, 7))
            { /* block id: 213 */
                int32_t l_411 = 0x5013C8B3L;
                for (l_411 = 6; (l_411 <= 22); ++l_411)
                { /* block id: 216 */
                    VECTOR(int16_t, 8) l_414 = (VECTOR(int16_t, 8))(0x7C2BL, (VECTOR(int16_t, 4))(0x7C2BL, (VECTOR(int16_t, 2))(0x7C2BL, 0x21CAL), 0x21CAL), 0x21CAL, 0x7C2BL, 0x21CAL);
                    int64_t l_415 = 0L;
                    VECTOR(int32_t, 8) l_416 = (VECTOR(int32_t, 8))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), (-2L)), (-2L)), (-2L), (-3L), (-2L));
                    int8_t l_417 = (-9L);
                    VECTOR(int32_t, 8) l_418 = (VECTOR(int32_t, 8))(0x352F13D6L, (VECTOR(int32_t, 4))(0x352F13D6L, (VECTOR(int32_t, 2))(0x352F13D6L, 1L), 1L), 1L, 0x352F13D6L, 1L);
                    VECTOR(int32_t, 2) l_419 = (VECTOR(int32_t, 2))((-8L), 0x4A9A6FF2L);
                    VECTOR(int32_t, 16) l_420 = (VECTOR(int32_t, 16))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x059075F0L), 0x059075F0L), 0x059075F0L, 7L, 0x059075F0L, (VECTOR(int32_t, 2))(7L, 0x059075F0L), (VECTOR(int32_t, 2))(7L, 0x059075F0L), 7L, 0x059075F0L, 7L, 0x059075F0L);
                    VECTOR(int32_t, 2) l_421 = (VECTOR(int32_t, 2))((-1L), 0x7412E92DL);
                    VECTOR(int32_t, 2) l_422 = (VECTOR(int32_t, 2))(1L, 0x53B65346L);
                    int8_t l_423 = 0x5DL;
                    uint8_t l_424 = 0x8BL;
                    int64_t l_425 = 0x7082AFD527552E12L;
                    uint8_t l_426 = 1UL;
                    int8_t l_427 = (-1L);
                    VECTOR(uint64_t, 8) l_428 = (VECTOR(uint64_t, 8))(0xC2550F5473FEE92CL, (VECTOR(uint64_t, 4))(0xC2550F5473FEE92CL, (VECTOR(uint64_t, 2))(0xC2550F5473FEE92CL, 1UL), 1UL), 1UL, 0xC2550F5473FEE92CL, 1UL);
                    int32_t l_429 = (-1L);
                    uint16_t l_430 = 0xAE2DL;
                    int32_t l_431 = 1L;
                    int32_t l_432 = 1L;
                    int32_t *l_433[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t *l_434 = (void*)0;
                    uint32_t l_442 = 0xB1D07DF9L;
                    int32_t l_443 = 1L;
                    int32_t *l_444 = &l_431;
                    int i;
                    l_431 &= (((VECTOR(int16_t, 2))(l_414.s25)).even , ((VECTOR(int32_t, 16))((-7L), l_415, 0L, ((VECTOR(int32_t, 8))(l_416.s60756330)).s1, (l_418.s2 = l_417), 1L, 0x1BA1757DL, 8L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_419.yx)))).xxxyxyyx, ((VECTOR(int32_t, 2))(l_420.s3b)).yyyxxyyx))).even)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 8))((-3L), (-7L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0x078A9BECL, 0x7D2A0862L, 0x02E6CFCAL, 0x7F61D5CEL)).even)), 0x7B286A2AL, 0L)), 0x48D017B6L, 0x2C149CE2L)).hi, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_421.yyxxxyyy)))).hi, ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 8))(l_422.xxxxxyyy)).hi, ((VECTOR(int32_t, 8))((l_427 = (l_426 = (l_425 = ((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_423, l_424, 0x7FL, 0x15L)).wywwyxxy)).s5010621734274013)).s8 , 2L) , 6L)))), 1L, ((VECTOR(int32_t, 2))(0x56A77C7CL)), l_428.s0, 0x3230573AL, 4L, 0x17F18265L)).even))), ((VECTOR(int32_t, 4))(0x70201BE4L))))), (int32_t)l_429))).xzwzyzyw)).s3 , l_430), ((VECTOR(int32_t, 2))(1L)), 0x3020D5BAL)).ywyywwyz, ((VECTOR(int32_t, 8))((-1L))), ((VECTOR(int32_t, 8))(1L))))).s05, (int32_t)0x29BB1006L))).xyyy, ((VECTOR(int32_t, 4))((-1L)))))))))).s9);
                    l_434 = (l_432 , l_433[5]);
                    for (l_419.y = 2; (l_419.y > (-11)); l_419.y = safe_sub_func_int16_t_s_s(l_419.y, 5))
                    { /* block id: 225 */
                        uint32_t l_437 = 0UL;
                        VECTOR(int32_t, 16) l_440 = (VECTOR(int32_t, 16))(0x0F0F4B2FL, (VECTOR(int32_t, 4))(0x0F0F4B2FL, (VECTOR(int32_t, 2))(0x0F0F4B2FL, (-3L)), (-3L)), (-3L), 0x0F0F4B2FL, (-3L), (VECTOR(int32_t, 2))(0x0F0F4B2FL, (-3L)), (VECTOR(int32_t, 2))(0x0F0F4B2FL, (-3L)), 0x0F0F4B2FL, (-3L), 0x0F0F4B2FL, (-3L));
                        int32_t *l_441 = (void*)0;
                        int i;
                        --l_437;
                        l_440.sf = ((VECTOR(int32_t, 8))(l_440.s8e93cabc)).s1;
                        l_441 = (void*)0;
                    }
                    l_444 = (l_442 , ((l_443 = 0x1FC3D04EL) , (void*)0));
                }
            }
            l_445 = (void*)0;
            l_464 = (((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_446.s79614361)).s46)), 0x0A16BF02L, 0x7439672BL)).hi)))), ((VECTOR(int32_t, 16))(l_447, 1L, ((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_448[3], 0x7BFFF465L, (-1L), (-8L))), (-5L), 0x39570C8EL, 0x6E25FF4CL, 0L)), ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_449.xxxzxzzz)).s56)).yyyyyyxx, ((VECTOR(int32_t, 4))(0x5D4D8103L, ((VECTOR(int32_t, 16))(l_450.s8b9a2a8c4d1a898f)).se, (-1L), 0L)).wwxxzzzy)))))), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_451.xxyyyxxyyxxyxyyx)))).lo, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(6L, 0L)).yyxx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(3L, 0x05672E51L)), 0x3485E18FL, 9L)).y, 1L, 0L, 0x14732877L))))).ywxxwxyw))), 0x6E73FE1AL, l_452.w, ((VECTOR(int32_t, 4))(l_453.s6bab)))).sef))).hi, (((l_455 = l_454.y) , l_456) , l_457), ((VECTOR(int32_t, 16))(l_458.yxyxyyxyxyyxxxyx)).sc, ((VECTOR(int32_t, 4))(0x09509B8DL, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_459.s50)).yyxyxxyy)).hi)).hi)), (-1L))), 0x2A7AFCCBL)).odd)).z , (l_461[3][3] = l_460)) , l_462.y) , l_463);
            l_466 = (l_465 = (void*)0);
            unsigned int result = 0;
            result += l_408;
            result += l_446.sf;
            result += l_446.se;
            result += l_446.sd;
            result += l_446.sc;
            result += l_446.sb;
            result += l_446.sa;
            result += l_446.s9;
            result += l_446.s8;
            result += l_446.s7;
            result += l_446.s6;
            result += l_446.s5;
            result += l_446.s4;
            result += l_446.s3;
            result += l_446.s2;
            result += l_446.s1;
            result += l_446.s0;
            result += l_447;
            int l_448_i0;
            for (l_448_i0 = 0; l_448_i0 < 9; l_448_i0++) {
                result += l_448[l_448_i0];
            }
            result += l_449.w;
            result += l_449.z;
            result += l_449.y;
            result += l_449.x;
            result += l_450.sf;
            result += l_450.se;
            result += l_450.sd;
            result += l_450.sc;
            result += l_450.sb;
            result += l_450.sa;
            result += l_450.s9;
            result += l_450.s8;
            result += l_450.s7;
            result += l_450.s6;
            result += l_450.s5;
            result += l_450.s4;
            result += l_450.s3;
            result += l_450.s2;
            result += l_450.s1;
            result += l_450.s0;
            result += l_451.y;
            result += l_451.x;
            result += l_452.w;
            result += l_452.z;
            result += l_452.y;
            result += l_452.x;
            result += l_453.sf;
            result += l_453.se;
            result += l_453.sd;
            result += l_453.sc;
            result += l_453.sb;
            result += l_453.sa;
            result += l_453.s9;
            result += l_453.s8;
            result += l_453.s7;
            result += l_453.s6;
            result += l_453.s5;
            result += l_453.s4;
            result += l_453.s3;
            result += l_453.s2;
            result += l_453.s1;
            result += l_453.s0;
            result += l_454.w;
            result += l_454.z;
            result += l_454.y;
            result += l_454.x;
            result += l_455;
            result += l_456;
            result += l_457;
            result += l_458.y;
            result += l_458.x;
            result += l_459.s7;
            result += l_459.s6;
            result += l_459.s5;
            result += l_459.s4;
            result += l_459.s3;
            result += l_459.s2;
            result += l_459.s1;
            result += l_459.s0;
            result += l_460;
            int l_461_i0, l_461_i1;
            for (l_461_i0 = 0; l_461_i0 < 6; l_461_i0++) {
                for (l_461_i1 = 0; l_461_i1 < 5; l_461_i1++) {
                    result += l_461[l_461_i0][l_461_i1];
                }
            }
            result += l_462.y;
            result += l_462.x;
            result += l_463;
            result += l_464;
            atomic_add(&p_497->l_special_values[54], result);
        }
        else
        { /* block id: 240 */
            (1 + 1);
        }
    }
    return p_10;
}


/* ------------------------------------------ */
/* 
 * reads : p_497->g_56 p_497->g_4 p_497->g_109 p_497->l_comm_values p_497->g_3 p_497->g_107 p_497->g_133 p_497->g_145 p_497->g_148 p_497->g_146 p_497->g_108 p_497->g_348 p_497->g_350 p_497->g_363 p_497->g_364 p_497->g_369 p_497->g_383 p_497->g_388 p_497->g_392
 * writes: p_497->g_102 p_497->g_148 p_497->g_146 p_497->g_156 p_497->g_350 p_497->g_376
 */
int32_t * func_12(int32_t  p_13, int32_t  p_14, uint32_t  p_15, uint32_t  p_16, int32_t  p_17, struct S0 * p_497)
{ /* block id: 34 */
    int64_t l_68[8][1];
    int32_t **l_377 = (void*)0;
    int32_t **l_378 = (void*)0;
    int32_t *l_379 = &p_497->g_380;
    int8_t *l_389[7] = {&p_497->g_390,&p_497->g_390,&p_497->g_390,&p_497->g_390,&p_497->g_390,&p_497->g_390,&p_497->g_390};
    int32_t l_391 = 0x23A8A909L;
    VECTOR(int8_t, 4) l_393 = (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), 0x3BL), 0x3BL);
    int i, j;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
            l_68[i][j] = 0x2E23F1199D328171L;
    }
    (*p_497->g_145) = func_57(p_497->g_56, (l_379 = func_63(l_68[5][0], p_15, l_68[5][0], l_68[6][0], p_497)), (safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(p_497->g_383.s5b2529b08e72cedf)).sb, (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 4))((-5L), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))((l_68[2][0] , (l_391 |= (safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(p_497->g_388.s07)).xyyxyyxxyyxyxyyy)).sf, 8)))), (((VECTOR(int32_t, 2))(p_497->g_392.s2a)).odd , l_68[5][0]), ((VECTOR(int8_t, 2))(l_393.xy)), (*p_497->g_108), 0x7FL, (-10L), 0x06L)))).s33)), (-1L))).x, (-1L))))), l_393.w, p_17, p_497);
    return (*p_497->g_145);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_21(uint16_t  p_22, int64_t  p_23, int32_t * p_24, int32_t * p_25, int64_t  p_26, struct S0 * p_497)
{ /* block id: 8 */
    int64_t l_53 = (-8L);
    if ((atomic_inc(&p_497->g_atomic_input[72 * get_linear_group_id() + 6]) == 7))
    { /* block id: 10 */
        int32_t l_30 = (-1L);
        uint8_t l_31[10] = {8UL,5UL,8UL,8UL,5UL,8UL,8UL,5UL,8UL,8UL};
        VECTOR(int32_t, 4) l_32 = (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x5D61FB9AL), 0x5D61FB9AL);
        VECTOR(int32_t, 4) l_33 = (VECTOR(int32_t, 4))(0x4D4B4B26L, (VECTOR(int32_t, 2))(0x4D4B4B26L, 0L), 0L);
        VECTOR(int32_t, 4) l_50 = (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x28F68172L), 0x28F68172L);
        VECTOR(int32_t, 4) l_51 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x3BC08F52L), 0x3BC08F52L);
        int8_t l_52 = (-4L);
        int i;
        if ((l_30 , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((FAKE_DIVERGE(p_497->global_0_offset, get_global_id(0), 10) , l_31[9]), ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(l_32.wyxx)).lo, ((VECTOR(int32_t, 4))(l_33.xwzx)).odd))), 0x6C6EA3D8L)).lo)).odd))
        { /* block id: 11 */
            uint32_t l_34 = 0xBB1E5DE2L;
            uint64_t l_35 = 0x2C6EB81F947F9F41L;
            uint8_t l_36 = 0x8CL;
            int32_t l_37[9][5][5] = {{{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L}},{{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L}},{{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L}},{{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L}},{{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L}},{{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L}},{{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L}},{{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L}},{{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L},{0x03FCA5EBL,0x1302D9CAL,0x60700C0DL,0x6C8609E0L,0x438DB075L}}};
            int i, j, k;
            if ((l_32.w = ((l_34 , l_35) , ((l_36 |= 0x26L) , l_37[6][2][4]))))
            { /* block id: 14 */
                uint64_t l_38 = 0xECB515FE49BA5CD2L;
                int32_t l_39 = 4L;
                l_39 = l_38;
            }
            else
            { /* block id: 16 */
                int16_t l_40 = 0x3879L;
                uint32_t l_41[6] = {0x5B7DFF93L,0x5B7DFF93L,0x5B7DFF93L,0x5B7DFF93L,0x5B7DFF93L,0x5B7DFF93L};
                VECTOR(int32_t, 2) l_44 = (VECTOR(int32_t, 2))((-8L), 0x47BFE1A2L);
                int i;
                l_33.w &= l_40;
                l_41[1]++;
                l_33.x = ((VECTOR(int32_t, 4))(l_44.yyyy)).z;
            }
        }
        else
        { /* block id: 21 */
            int32_t l_45 = 1L;
            for (l_45 = (-15); (l_45 != (-30)); l_45 = safe_sub_func_uint16_t_u_u(l_45, 6))
            { /* block id: 24 */
                int32_t **l_48 = (void*)0;
                int32_t **l_49 = (void*)0;
                l_49 = l_48;
            }
        }
        l_52 = ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(l_50.xxzx)).zywyywzw, ((VECTOR(int32_t, 8))(l_51.xwwwwyzz))))).s7;
        unsigned int result = 0;
        result += l_30;
        int l_31_i0;
        for (l_31_i0 = 0; l_31_i0 < 10; l_31_i0++) {
            result += l_31[l_31_i0];
        }
        result += l_32.w;
        result += l_32.z;
        result += l_32.y;
        result += l_32.x;
        result += l_33.w;
        result += l_33.z;
        result += l_33.y;
        result += l_33.x;
        result += l_50.w;
        result += l_50.z;
        result += l_50.y;
        result += l_50.x;
        result += l_51.w;
        result += l_51.z;
        result += l_51.y;
        result += l_51.x;
        result += l_52;
        atomic_add(&p_497->g_special_values[72 * get_linear_group_id() + 6], result);
    }
    else
    { /* block id: 29 */
        (1 + 1);
    }
    return l_53;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_57(int32_t  p_58, int32_t * p_59, uint32_t  p_60, int8_t  p_61, uint64_t  p_62, struct S0 * p_497)
{ /* block id: 198 */
    int32_t *l_397 = (void*)0;
    int32_t *l_398 = (void*)0;
    int32_t *l_400 = (void*)0;
    int32_t *l_401 = (void*)0;
    int32_t *l_402[6][4][10] = {{{&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,&p_497->g_4},{&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,&p_497->g_4},{&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,&p_497->g_4},{&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,&p_497->g_4}},{{&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,&p_497->g_4},{&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,&p_497->g_4},{&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,&p_497->g_4},{&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,&p_497->g_4}},{{&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,&p_497->g_4},{&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,&p_497->g_4},{&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,&p_497->g_4},{&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,&p_497->g_4}},{{&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,&p_497->g_4},{&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,&p_497->g_4},{&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,&p_497->g_4},{&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,&p_497->g_4}},{{&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,&p_497->g_4},{&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,&p_497->g_4},{&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,&p_497->g_4},{&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,&p_497->g_4}},{{&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,&p_497->g_4},{&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,&p_497->g_4},{&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,&p_497->g_4},{&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4,(void*)0,(void*)0,&p_497->g_4,&p_497->g_4}}};
    int32_t *l_403 = (void*)0;
    int i, j, k;
    p_58 = (safe_rshift_func_int8_t_s_u(0x25L, 7));
    return l_403;
}


/* ------------------------------------------ */
/* 
 * reads : p_497->g_4 p_497->g_109 p_497->g_56 p_497->l_comm_values p_497->g_3 p_497->g_107 p_497->g_133 p_497->g_145 p_497->g_148 p_497->g_146 p_497->g_108 p_497->g_348 p_497->g_350 p_497->g_363 p_497->g_364 p_497->g_369
 * writes: p_497->g_102 p_497->g_148 p_497->g_146 p_497->g_156 p_497->g_350 p_497->g_376
 */
int32_t * func_63(int32_t  p_64, uint64_t  p_65, uint32_t  p_66, int32_t  p_67, struct S0 * p_497)
{ /* block id: 35 */
    int32_t *l_71 = &p_497->g_56;
    int32_t l_74 = 0L;
    int32_t l_100 = (-1L);
    int8_t *l_111[7][10] = {{&p_497->g_109,(void*)0,(void*)0,&p_497->g_109,&p_497->g_109,(void*)0,(void*)0,&p_497->g_109,&p_497->g_109,(void*)0},{&p_497->g_109,(void*)0,(void*)0,&p_497->g_109,&p_497->g_109,(void*)0,(void*)0,&p_497->g_109,&p_497->g_109,(void*)0},{&p_497->g_109,(void*)0,(void*)0,&p_497->g_109,&p_497->g_109,(void*)0,(void*)0,&p_497->g_109,&p_497->g_109,(void*)0},{&p_497->g_109,(void*)0,(void*)0,&p_497->g_109,&p_497->g_109,(void*)0,(void*)0,&p_497->g_109,&p_497->g_109,(void*)0},{&p_497->g_109,(void*)0,(void*)0,&p_497->g_109,&p_497->g_109,(void*)0,(void*)0,&p_497->g_109,&p_497->g_109,(void*)0},{&p_497->g_109,(void*)0,(void*)0,&p_497->g_109,&p_497->g_109,(void*)0,(void*)0,&p_497->g_109,&p_497->g_109,(void*)0},{&p_497->g_109,(void*)0,(void*)0,&p_497->g_109,&p_497->g_109,(void*)0,(void*)0,&p_497->g_109,&p_497->g_109,(void*)0}};
    int64_t l_152 = 0x190560A05798251AL;
    int32_t **l_322 = &p_497->g_146;
    int64_t l_327 = 0x6C0BA828B3160A0AL;
    int32_t *l_335 = (void*)0;
    int32_t *l_336 = (void*)0;
    int32_t *l_337 = &l_100;
    VECTOR(uint8_t, 8) l_361 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x76L), 0x76L), 0x76L, 1UL, 0x76L);
    VECTOR(uint8_t, 4) l_362 = (VECTOR(uint8_t, 4))(0xECL, (VECTOR(uint8_t, 2))(0xECL, 0xBDL), 0xBDL);
    VECTOR(uint8_t, 16) l_365 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x9EL), 0x9EL), 0x9EL, 0UL, 0x9EL, (VECTOR(uint8_t, 2))(0UL, 0x9EL), (VECTOR(uint8_t, 2))(0UL, 0x9EL), 0UL, 0x9EL, 0UL, 0x9EL);
    VECTOR(uint8_t, 4) l_366 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0xDBL), 0xDBL);
    uint16_t *l_375 = &p_497->g_376;
    int i, j;
    for (p_64 = (-5); (p_64 > 6); p_64 = safe_add_func_int32_t_s_s(p_64, 8))
    { /* block id: 38 */
        int32_t *l_95 = &p_497->g_56;
        int8_t *l_101 = &p_497->g_102;
        int8_t **l_110 = &p_497->g_108;
        int32_t l_112[4][8][8] = {{{(-9L),(-9L),0x64B2277CL,0x291DCC14L,(-3L),1L,1L,1L},{(-9L),(-9L),0x64B2277CL,0x291DCC14L,(-3L),1L,1L,1L},{(-9L),(-9L),0x64B2277CL,0x291DCC14L,(-3L),1L,1L,1L},{(-9L),(-9L),0x64B2277CL,0x291DCC14L,(-3L),1L,1L,1L},{(-9L),(-9L),0x64B2277CL,0x291DCC14L,(-3L),1L,1L,1L},{(-9L),(-9L),0x64B2277CL,0x291DCC14L,(-3L),1L,1L,1L},{(-9L),(-9L),0x64B2277CL,0x291DCC14L,(-3L),1L,1L,1L},{(-9L),(-9L),0x64B2277CL,0x291DCC14L,(-3L),1L,1L,1L}},{{(-9L),(-9L),0x64B2277CL,0x291DCC14L,(-3L),1L,1L,1L},{(-9L),(-9L),0x64B2277CL,0x291DCC14L,(-3L),1L,1L,1L},{(-9L),(-9L),0x64B2277CL,0x291DCC14L,(-3L),1L,1L,1L},{(-9L),(-9L),0x64B2277CL,0x291DCC14L,(-3L),1L,1L,1L},{(-9L),(-9L),0x64B2277CL,0x291DCC14L,(-3L),1L,1L,1L},{(-9L),(-9L),0x64B2277CL,0x291DCC14L,(-3L),1L,1L,1L},{(-9L),(-9L),0x64B2277CL,0x291DCC14L,(-3L),1L,1L,1L},{(-9L),(-9L),0x64B2277CL,0x291DCC14L,(-3L),1L,1L,1L}},{{(-9L),(-9L),0x64B2277CL,0x291DCC14L,(-3L),1L,1L,1L},{(-9L),(-9L),0x64B2277CL,0x291DCC14L,(-3L),1L,1L,1L},{(-9L),(-9L),0x64B2277CL,0x291DCC14L,(-3L),1L,1L,1L},{(-9L),(-9L),0x64B2277CL,0x291DCC14L,(-3L),1L,1L,1L},{(-9L),(-9L),0x64B2277CL,0x291DCC14L,(-3L),1L,1L,1L},{(-9L),(-9L),0x64B2277CL,0x291DCC14L,(-3L),1L,1L,1L},{(-9L),(-9L),0x64B2277CL,0x291DCC14L,(-3L),1L,1L,1L},{(-9L),(-9L),0x64B2277CL,0x291DCC14L,(-3L),1L,1L,1L}},{{(-9L),(-9L),0x64B2277CL,0x291DCC14L,(-3L),1L,1L,1L},{(-9L),(-9L),0x64B2277CL,0x291DCC14L,(-3L),1L,1L,1L},{(-9L),(-9L),0x64B2277CL,0x291DCC14L,(-3L),1L,1L,1L},{(-9L),(-9L),0x64B2277CL,0x291DCC14L,(-3L),1L,1L,1L},{(-9L),(-9L),0x64B2277CL,0x291DCC14L,(-3L),1L,1L,1L},{(-9L),(-9L),0x64B2277CL,0x291DCC14L,(-3L),1L,1L,1L},{(-9L),(-9L),0x64B2277CL,0x291DCC14L,(-3L),1L,1L,1L},{(-9L),(-9L),0x64B2277CL,0x291DCC14L,(-3L),1L,1L,1L}}};
        int32_t *l_167 = &p_497->g_56;
        int32_t l_168 = (-10L);
        int32_t **l_169 = (void*)0;
        int32_t *l_319 = &l_100;
        uint8_t *l_323 = (void*)0;
        uint8_t *l_324 = (void*)0;
        uint8_t *l_325 = (void*)0;
        uint8_t *l_326[8][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        VECTOR(int64_t, 8) l_330 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x0F784B9505C2108AL), 0x0F784B9505C2108AL), 0x0F784B9505C2108AL, 0L, 0x0F784B9505C2108AL);
        VECTOR(int32_t, 4) l_331 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L);
        int i, j, k;
        (*l_319) = func_21(((~((void*)0 == l_71)) ^ p_497->g_4), (safe_sub_func_int16_t_s_s(l_74, 0x1D4AL)), ((*p_497->g_145) = func_75(func_81((func_85(func_89(l_95, (((safe_mul_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(((*l_101) = (l_100 = 0x68L)), (+0xE2L))) > (safe_mul_func_uint16_t_u_u(GROUP_DIVERGE(2, 1), (((((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))((-8L), 0L, 0L, 0x16947F70L)).hi, (int32_t)(safe_lshift_func_uint16_t_u_u((((((VECTOR(int16_t, 2))(0x6909L, 0L)).lo <= FAKE_DIVERGE(p_497->global_0_offset, get_global_id(0), 10)) & ((VECTOR(int32_t, 8))(p_497->g_107.ywyxxwxz)).s3) ^ (((*l_110) = p_497->g_108) != l_111[0][8])), 0))))), 6L, (-1L))).xzzwywwz)).s07)).xyyyyxyx, (int32_t)0x678DF1EFL))).s1 > l_74) & p_66) >= l_112[1][7][0])))), 0x91L)) != p_497->g_109) , p_66), &p_497->g_4, l_74, l_112[2][5][1], p_497), p_497->g_56, p_65, p_497) , l_112[2][6][2]), l_74, l_152, p_497), p_497->g_145, l_167, l_168, l_169, p_497)), &l_74, p_66, p_497);
        (*l_319) ^= (-5L);
        (*p_497->g_145) = (*p_497->g_145);
    }
    (*l_337) &= p_66;
    for (l_327 = 23; (l_327 != 16); l_327 = safe_sub_func_int8_t_s_s(l_327, 4))
    { /* block id: 181 */
        int16_t l_340 = (-4L);
        int16_t *l_341 = &p_497->g_148;
        int32_t **l_345 = &l_71;
        int32_t ***l_344 = &l_345;
        uint64_t *l_349 = &p_497->g_350;
        int16_t *l_353 = &l_340;
        int32_t l_354[1];
        int32_t **l_355 = &l_337;
        int32_t ***l_356 = &l_355;
        int i;
        for (i = 0; i < 1; i++)
            l_354[i] = 0x460881D1L;
        p_64 = ((*l_337) = l_340);
        l_74 = (((*l_341) ^= p_67) >= (((*p_497->g_108) > ((*l_337) = ((((safe_rshift_func_int16_t_s_s(((((*l_344) = &l_71) == &l_71) == (l_354[0] ^= (0x2819L < ((*l_353) &= (safe_add_func_int32_t_s_s(((VECTOR(int32_t, 2))(p_497->g_348.s34)).lo, (p_64 > ((((((*l_349)--) >= (&p_497->g_145 == &l_322)) && 3UL) == 6L) != p_65)))))))), 12)) & 0x0F323D7ECBDB1773L) & p_64) , 3L))) != p_64));
        (*l_356) = l_355;
    }
    p_64 = (safe_div_func_int16_t_s_s(((((p_66 || 0x9B4EL) < ((((((safe_lshift_func_int8_t_s_u(0x49L, 5)) != (((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_361.s56)), ((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(l_362.zwzwyywx)))).s2676754511377245, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 2))(abs(((VECTOR(uint8_t, 16))(p_497->g_363.yyyyyxxyxyyyyyxy)).sb1))).xyyx, ((VECTOR(uint8_t, 16))(p_497->g_364.xxyyxxxxyyxxyyyx)).sba3c))).wwyxxwzywzzxywxy)).s01ad)).zzyyzwzyywwwxwyw))).s03))), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 8))(l_365.s5d797af0)), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_366.yz)).xyyxxyyxyxxyyxxy)).even))))).s3106436727747031)).even)).even)))).s4 & (safe_add_func_int16_t_s_s(((VECTOR(int16_t, 16))(p_497->g_369.s0736734021212263)).s8, (((safe_mod_func_int32_t_s_s(p_497->g_107.x, (safe_unary_minus_func_int16_t_s(p_64)))) > (((65529UL >= (safe_add_func_uint16_t_u_u((~((*l_375) = (*l_337))), ((2L > ((void*)0 == &l_322)) == (-1L))))) != 0UL) , p_64)) || p_497->g_148)))) < p_497->g_107.x) && p_67)) ^ (*l_337)) > 0x7C5119F7L) != FAKE_DIVERGE(p_497->global_2_offset, get_global_id(2), 10)) && (*p_497->g_108))) , p_66) && (*l_337)), p_497->g_148));
    return &p_497->g_56;
}


/* ------------------------------------------ */
/* 
 * reads : p_497->g_146
 * writes:
 */
int32_t * func_75(int32_t ** p_76, int32_t ** p_77, int32_t * p_78, int32_t  p_79, int32_t ** p_80, struct S0 * p_497)
{ /* block id: 69 */
    if ((atomic_inc(&p_497->g_atomic_input[72 * get_linear_group_id() + 17]) == 5))
    { /* block id: 71 */
        VECTOR(int32_t, 8) l_170 = (VECTOR(int32_t, 8))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x789DFEE8L), 0x789DFEE8L), 0x789DFEE8L, 2L, 0x789DFEE8L);
        int i;
        if (((VECTOR(int32_t, 8))(l_170.s04701737)).s0)
        { /* block id: 72 */
            uint32_t l_171 = 0xFBAFD827L;
            int32_t l_254 = 1L;
            int32_t *l_253 = &l_254;
            uint32_t l_255[2];
            int i;
            for (i = 0; i < 2; i++)
                l_255[i] = 0x6A065113L;
            l_171--;
            for (l_171 = (-11); (l_171 <= 20); l_171 = safe_add_func_uint32_t_u_u(l_171, 2))
            { /* block id: 76 */
                uint8_t l_176 = 0x20L;
                int64_t l_227 = 0x63D4CD08088E2FD6L;
                uint8_t l_228 = 8UL;
                uint16_t l_229[1][7];
                uint32_t l_230 = 0UL;
                int16_t l_231 = 6L;
                VECTOR(uint16_t, 16) l_232 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xD910L), 0xD910L), 0xD910L, 0UL, 0xD910L, (VECTOR(uint16_t, 2))(0UL, 0xD910L), (VECTOR(uint16_t, 2))(0UL, 0xD910L), 0UL, 0xD910L, 0UL, 0xD910L);
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_229[i][j] = 65527UL;
                }
                l_170.s2 |= l_176;
                if ((l_170.s1 = 0x7D275BA9L))
                { /* block id: 79 */
                    int32_t l_178 = 1L;
                    int32_t *l_177 = &l_178;
                    int32_t *l_179 = &l_178;
                    int32_t *l_180 = (void*)0;
                    int16_t l_181[3][3] = {{0x561FL,0x561FL,0x561FL},{0x561FL,0x561FL,0x561FL},{0x561FL,0x561FL,0x561FL}};
                    int i, j;
                    l_180 = (l_179 = l_177);
                    l_170.s1 &= l_181[1][0];
                    for (l_181[1][0] = 0; (l_181[1][0] >= (-12)); --l_181[1][0])
                    { /* block id: 85 */
                        uint8_t l_184 = 1UL;
                        int32_t *l_187 = (void*)0;
                        l_184++;
                        l_170.s1 &= ((*l_180) = 4L);
                        l_179 = l_187;
                    }
                }
                else
                { /* block id: 91 */
                    int32_t l_188 = 0x3230E549L;
                    VECTOR(int32_t, 2) l_206 = (VECTOR(int32_t, 2))(3L, 0x48C1426EL);
                    int32_t *l_207 = &l_188;
                    int32_t *l_208 = (void*)0;
                    int32_t *l_209[9];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_209[i] = (void*)0;
                    if (l_188)
                    { /* block id: 92 */
                        uint32_t l_189 = 0xA3EDC0E5L;
                        uint32_t l_192[9];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_192[i] = 0xA74D9B91L;
                        l_189++;
                        l_170.s2 = l_192[4];
                    }
                    else
                    { /* block id: 95 */
                        VECTOR(int32_t, 16) l_193 = (VECTOR(int32_t, 16))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x510044AAL), 0x510044AAL), 0x510044AAL, (-8L), 0x510044AAL, (VECTOR(int32_t, 2))((-8L), 0x510044AAL), (VECTOR(int32_t, 2))((-8L), 0x510044AAL), (-8L), 0x510044AAL, (-8L), 0x510044AAL);
                        uint32_t l_194 = 4294967292UL;
                        VECTOR(int64_t, 8) l_195 = (VECTOR(int64_t, 8))((-5L), (VECTOR(int64_t, 4))((-5L), (VECTOR(int64_t, 2))((-5L), (-7L)), (-7L)), (-7L), (-5L), (-7L));
                        VECTOR(uint16_t, 4) l_196 = (VECTOR(uint16_t, 4))(0xA945L, (VECTOR(uint16_t, 2))(0xA945L, 0UL), 0UL);
                        int8_t l_197 = (-10L);
                        int i;
                        l_170.s5 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_193.s38)).xyxx)), l_194, 1L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x534AEDA4L, 0x519914BDL)), (GROUP_DIVERGE(1, 1) , (((VECTOR(int64_t, 2))(l_195.s60)).lo , 4L)), ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(0x70E6L, (-8L), 0x421FL, 0x5C8CL)), ((VECTOR(uint16_t, 4))(l_196.wxwy))))), 7L)), (-1L), 0x5A60EC3EL)).s4;
                        l_193.sd = (l_197 , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x6C96D48FL, 8L)).xxyyyxxxxyyyyxyx)).s1f)).even);
                    }
                    for (l_188 = (-17); (l_188 != (-23)); l_188--)
                    { /* block id: 101 */
                        VECTOR(int16_t, 16) l_200 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 6L), 6L), 6L, 1L, 6L, (VECTOR(int16_t, 2))(1L, 6L), (VECTOR(int16_t, 2))(1L, 6L), 1L, 6L, 1L, 6L);
                        uint32_t l_201 = 0UL;
                        int16_t l_202 = 0x478DL;
                        int32_t l_204 = 0x1673AEC1L;
                        int32_t *l_203 = &l_204;
                        int32_t *l_205 = &l_204;
                        int i;
                        l_205 = (((((VECTOR(int16_t, 2))(l_200.s53)).even , l_201) , l_202) , l_203);
                    }
                    l_207 = (((VECTOR(int32_t, 16))(l_206.yxxxxxxyyyyyxxxy)).s7 , l_207);
                    l_209[4] = l_208;
                }
                for (l_176 = 0; (l_176 < 18); l_176 = safe_add_func_uint32_t_u_u(l_176, 4))
                { /* block id: 109 */
                    uint32_t l_212 = 9UL;
                    int64_t l_215 = 0x3B82698C18C883BDL;
                    l_212--;
                    l_170.s7 |= l_215;
                    for (l_215 = 0; (l_215 <= 2); l_215 = safe_add_func_int16_t_s_s(l_215, 8))
                    { /* block id: 114 */
                        int16_t l_218[8][3][5] = {{{0x78A0L,0x27DCL,0L,0x268BL,3L},{0x78A0L,0x27DCL,0L,0x268BL,3L},{0x78A0L,0x27DCL,0L,0x268BL,3L}},{{0x78A0L,0x27DCL,0L,0x268BL,3L},{0x78A0L,0x27DCL,0L,0x268BL,3L},{0x78A0L,0x27DCL,0L,0x268BL,3L}},{{0x78A0L,0x27DCL,0L,0x268BL,3L},{0x78A0L,0x27DCL,0L,0x268BL,3L},{0x78A0L,0x27DCL,0L,0x268BL,3L}},{{0x78A0L,0x27DCL,0L,0x268BL,3L},{0x78A0L,0x27DCL,0L,0x268BL,3L},{0x78A0L,0x27DCL,0L,0x268BL,3L}},{{0x78A0L,0x27DCL,0L,0x268BL,3L},{0x78A0L,0x27DCL,0L,0x268BL,3L},{0x78A0L,0x27DCL,0L,0x268BL,3L}},{{0x78A0L,0x27DCL,0L,0x268BL,3L},{0x78A0L,0x27DCL,0L,0x268BL,3L},{0x78A0L,0x27DCL,0L,0x268BL,3L}},{{0x78A0L,0x27DCL,0L,0x268BL,3L},{0x78A0L,0x27DCL,0L,0x268BL,3L},{0x78A0L,0x27DCL,0L,0x268BL,3L}},{{0x78A0L,0x27DCL,0L,0x268BL,3L},{0x78A0L,0x27DCL,0L,0x268BL,3L},{0x78A0L,0x27DCL,0L,0x268BL,3L}}};
                        uint64_t l_219 = 0x139A795CD9103E7DL;
                        int64_t l_220 = 7L;
                        int32_t l_221 = 0L;
                        VECTOR(int32_t, 2) l_222 = (VECTOR(int32_t, 2))(1L, 0x1D2320A0L);
                        VECTOR(int32_t, 2) l_223 = (VECTOR(int32_t, 2))(0x3B63973BL, 1L);
                        uint32_t l_224[6][9][4] = {{{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL}},{{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL}},{{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL}},{{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL}},{{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL}},{{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL},{0xD43E14E9L,0x957BBCE2L,4294967289UL,4294967295UL}}};
                        uint32_t l_225 = 1UL;
                        uint32_t l_226 = 4294967293UL;
                        int i, j, k;
                        l_226 = ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(l_218[4][2][3], l_219, 0L, 0x07A6BF1CL, l_220, l_221, 0x49AB741BL, 0x6BA22810L, 0x0EADAD00L, 0x68759E3BL, 0x73DCE3E1L, ((VECTOR(int32_t, 4))(0x71C5E754L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_222.xyyxxxxx)).s70)), 0L)), 0L)).s2b, ((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 8))(l_223.yyxxxyxy)).s7627410627541321, ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(9L, 6L)).xxyxxyyy)).odd)).odd, (int32_t)l_224[3][8][0], (int32_t)l_225))).xyxyyxyxxxxxyxyy))).sbc))).lo;
                    }
                }
                if ((l_170.s4 = (((l_228 = (l_227 , ((VECTOR(int64_t, 2))(0x03E4B16275ACE0F7L, (-9L))).odd)) , 0L) , ((l_229[0][0] , (l_230 , l_231)) , l_232.s6))))
                { /* block id: 120 */
                    int64_t l_233 = 0x138F8FDFC9C83B8CL;
                    int8_t l_236 = 1L;
                    int8_t *l_235 = &l_236;
                    int8_t **l_234 = &l_235;
                    int8_t **l_237 = &l_235;
                    l_237 = (l_233 , l_234);
                }
                else
                { /* block id: 122 */
                    int32_t l_238 = 7L;
                    uint8_t l_250 = 0xBBL;
                    int64_t l_251 = 1L;
                    int32_t l_252 = 0L;
                    for (l_238 = 22; (l_238 != (-3)); --l_238)
                    { /* block id: 125 */
                        uint32_t l_241[8] = {0x5AC758ECL,0x6ECEB4F8L,0x5AC758ECL,0x5AC758ECL,0x6ECEB4F8L,0x5AC758ECL,0x5AC758ECL,0x6ECEB4F8L};
                        int8_t l_244 = 0x75L;
                        VECTOR(int32_t, 2) l_245 = (VECTOR(int32_t, 2))(1L, 0L);
                        uint16_t l_246 = 0xAF95L;
                        int32_t l_249 = (-6L);
                        int i;
                        l_241[2]++;
                        l_246++;
                        l_170.s1 = l_249;
                    }
                    l_250 |= ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 2))(0x1DC77BECL, 0x04EE0D9CL)).xyxx))).w;
                    l_170.s5 = (l_251 , l_252);
                }
            }
            l_253 = (void*)0;
            l_170.s0 |= l_255[1];
        }
        else
        { /* block id: 136 */
            VECTOR(int32_t, 2) l_256 = (VECTOR(int32_t, 2))(0x14C9C096L, 0x76979F27L);
            VECTOR(int32_t, 8) l_257 = (VECTOR(int32_t, 8))(0x0AAFF5B7L, (VECTOR(int32_t, 4))(0x0AAFF5B7L, (VECTOR(int32_t, 2))(0x0AAFF5B7L, 0x31CB6767L), 0x31CB6767L), 0x31CB6767L, 0x0AAFF5B7L, 0x31CB6767L);
            VECTOR(uint16_t, 16) l_258 = (VECTOR(uint16_t, 16))(8UL, (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 0xEBE6L), 0xEBE6L), 0xEBE6L, 8UL, 0xEBE6L, (VECTOR(uint16_t, 2))(8UL, 0xEBE6L), (VECTOR(uint16_t, 2))(8UL, 0xEBE6L), 8UL, 0xEBE6L, 8UL, 0xEBE6L);
            int32_t l_259 = (-5L);
            VECTOR(int32_t, 8) l_260 = (VECTOR(int32_t, 8))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 1L), 1L), 1L, 6L, 1L);
            VECTOR(int32_t, 16) l_261 = (VECTOR(int32_t, 16))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x06C4E18AL), 0x06C4E18AL), 0x06C4E18AL, (-9L), 0x06C4E18AL, (VECTOR(int32_t, 2))((-9L), 0x06C4E18AL), (VECTOR(int32_t, 2))((-9L), 0x06C4E18AL), (-9L), 0x06C4E18AL, (-9L), 0x06C4E18AL);
            VECTOR(int32_t, 4) l_262 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-8L)), (-8L));
            VECTOR(int32_t, 2) l_263 = (VECTOR(int32_t, 2))(2L, 0x38125710L);
            VECTOR(int32_t, 16) l_264 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x185C60F5L), 0x185C60F5L), 0x185C60F5L, 1L, 0x185C60F5L, (VECTOR(int32_t, 2))(1L, 0x185C60F5L), (VECTOR(int32_t, 2))(1L, 0x185C60F5L), 1L, 0x185C60F5L, 1L, 0x185C60F5L);
            VECTOR(int32_t, 2) l_265 = (VECTOR(int32_t, 2))(0x28E41555L, 0x50ACF49DL);
            int i;
            l_170.s1 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(l_256.xyxxyyxxyyxyyyyx)).odd, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_257.s44)), ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))((-1L), (-1L))), (-10L), 0x3B56L)).zwxzzzzy, ((VECTOR(uint16_t, 8))(l_258.s0d3682e7))))), 0x2EE2D881L, l_259, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 4))(l_260.s4172)).zxywyyzxzwzxywzw, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_261.sc2)))).yxyyyyyyyxxxyxyy))).s31)))), (-1L), 0x6ED427E3L)).even))).lo)).wywwwwwxwwwzzwww)).sdb48)).y;
            if ((l_170.s7 = ((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(0x08A12A88L, (-1L))).xxxx, ((VECTOR(int32_t, 2))(l_262.wz)).xyxx, ((VECTOR(int32_t, 16))(l_263.xyyyxxxxyxyxyyxy)).s839c))).zwxywxzwwxxzzzwy, ((VECTOR(int32_t, 16))(l_264.s4275dc9e83989482)), ((VECTOR(int32_t, 8))(l_265.xxyxxxxx)).s7134177455275517))).s1))
            { /* block id: 139 */
                uint32_t l_266 = 4294967289UL;
                VECTOR(uint32_t, 2) l_267 = (VECTOR(uint32_t, 2))(3UL, 0x1C01269EL);
                int16_t l_268 = 0x7CAFL;
                VECTOR(uint32_t, 2) l_269 = (VECTOR(uint32_t, 2))(1UL, 0x6AAB4845L);
                VECTOR(int32_t, 2) l_270 = (VECTOR(int32_t, 2))(1L, 0x4E161E20L);
                VECTOR(int32_t, 16) l_271 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 4L), 4L), 4L, 0L, 4L, (VECTOR(int32_t, 2))(0L, 4L), (VECTOR(int32_t, 2))(0L, 4L), 0L, 4L, 0L, 4L);
                int8_t l_272 = 0x5DL;
                uint32_t l_273 = 8UL;
                int i;
                l_265.y = (l_266 , (l_267.x , l_268));
                l_264.s4 = (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_269.yy)).yyyyyxxyxyxyxxyy)).s8 , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(l_270.yyyyxxxyxyyxyxyx)).s8a, ((VECTOR(int32_t, 4))(l_271.sd8af)).even))), 0x2D04D0B8L, 1L)), 0x1F6F8ECCL, ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 2))((-1L), 0x761C2720L)), (int32_t)(l_272 , l_273), (int32_t)(l_265.y = 0x4B9C9697L)))), 0x283E07E0L)).s4122207012074315)).s6);
            }
            else
            { /* block id: 143 */
                uint8_t l_274 = 248UL;
                int8_t l_275 = 0x47L;
                int32_t l_278[3];
                int32_t *l_277 = &l_278[1];
                int32_t **l_276 = &l_277;
                int32_t **l_279 = &l_277;
                int32_t **l_280[8][1];
                uint64_t l_281 = 6UL;
                int32_t l_311 = (-2L);
                uint32_t l_312[8][9][3] = {{{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL}},{{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL}},{{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL}},{{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL}},{{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL}},{{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL}},{{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL}},{{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL},{0UL,0x76933132L,4294967295UL}}};
                int16_t l_313 = 1L;
                int32_t l_314 = 0x5A22073FL;
                uint64_t l_315 = 0UL;
                int32_t *l_316 = &l_311;
                int32_t *l_317 = &l_311;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_278[i] = (-1L);
                for (i = 0; i < 8; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_280[i][j] = (void*)0;
                }
                l_260.s6 = l_274;
                l_280[1][0] = ((l_275 = 0x7760DCFBL) , (l_279 = l_276));
                if ((l_256.y = l_281))
                { /* block id: 149 */
                    int32_t l_282 = 0x31F8B39EL;
                    int64_t l_283 = 0x321C91E353AB2A37L;
                    int64_t l_284 = 1L;
                    uint16_t l_285 = 0x4006L;
                    uint32_t l_288 = 4294967290UL;
                    uint64_t l_289 = 18446744073709551615UL;
                    uint8_t l_290 = 0x69L;
                    int32_t l_291[10][3][5] = {{{(-1L),0L,1L,1L,0x230E06A7L},{(-1L),0L,1L,1L,0x230E06A7L},{(-1L),0L,1L,1L,0x230E06A7L}},{{(-1L),0L,1L,1L,0x230E06A7L},{(-1L),0L,1L,1L,0x230E06A7L},{(-1L),0L,1L,1L,0x230E06A7L}},{{(-1L),0L,1L,1L,0x230E06A7L},{(-1L),0L,1L,1L,0x230E06A7L},{(-1L),0L,1L,1L,0x230E06A7L}},{{(-1L),0L,1L,1L,0x230E06A7L},{(-1L),0L,1L,1L,0x230E06A7L},{(-1L),0L,1L,1L,0x230E06A7L}},{{(-1L),0L,1L,1L,0x230E06A7L},{(-1L),0L,1L,1L,0x230E06A7L},{(-1L),0L,1L,1L,0x230E06A7L}},{{(-1L),0L,1L,1L,0x230E06A7L},{(-1L),0L,1L,1L,0x230E06A7L},{(-1L),0L,1L,1L,0x230E06A7L}},{{(-1L),0L,1L,1L,0x230E06A7L},{(-1L),0L,1L,1L,0x230E06A7L},{(-1L),0L,1L,1L,0x230E06A7L}},{{(-1L),0L,1L,1L,0x230E06A7L},{(-1L),0L,1L,1L,0x230E06A7L},{(-1L),0L,1L,1L,0x230E06A7L}},{{(-1L),0L,1L,1L,0x230E06A7L},{(-1L),0L,1L,1L,0x230E06A7L},{(-1L),0L,1L,1L,0x230E06A7L}},{{(-1L),0L,1L,1L,0x230E06A7L},{(-1L),0L,1L,1L,0x230E06A7L},{(-1L),0L,1L,1L,0x230E06A7L}}};
                    int64_t l_292 = 0x799C504124FB8945L;
                    int i, j, k;
                    l_285--;
                    l_264.sa = (l_260.s6 |= (l_288 , l_289));
                    l_170.s3 = l_290;
                    l_264.se |= (l_291[4][2][3] , l_292);
                }
                else
                { /* block id: 155 */
                    VECTOR(int32_t, 2) l_293 = (VECTOR(int32_t, 2))(1L, 0L);
                    int16_t l_294 = 0x623FL;
                    int16_t l_295 = (-6L);
                    int32_t l_296 = 0x0C91DE95L;
                    VECTOR(int32_t, 4) l_297 = (VECTOR(int32_t, 4))(0x1AD7BDDFL, (VECTOR(int32_t, 2))(0x1AD7BDDFL, 0x6888D95FL), 0x6888D95FL);
                    VECTOR(int32_t, 16) l_298 = (VECTOR(int32_t, 16))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, (-1L)), (-1L)), (-1L), 5L, (-1L), (VECTOR(int32_t, 2))(5L, (-1L)), (VECTOR(int32_t, 2))(5L, (-1L)), 5L, (-1L), 5L, (-1L));
                    VECTOR(int32_t, 8) l_299 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L));
                    VECTOR(uint16_t, 4) l_300 = (VECTOR(uint16_t, 4))(0xDAFAL, (VECTOR(uint16_t, 2))(0xDAFAL, 8UL), 8UL);
                    int64_t l_301 = 0x384C3EB784779427L;
                    uint8_t l_302 = 7UL;
                    int64_t l_303 = 0L;
                    int16_t l_304 = (-1L);
                    int16_t l_305 = 0x3AB5L;
                    uint8_t l_306 = 0x10L;
                    int32_t *l_307 = (void*)0;
                    int32_t *l_308 = &l_296;
                    int32_t *l_309 = (void*)0;
                    int32_t *l_310 = &l_296;
                    int i;
                    l_263.x = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(7L, 0L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(l_293.xxyyyxyyyyxyxyxx)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(1L, 0L)), ((l_294 = 0UL) , l_295), l_296, ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 2))(l_297.xy)).xyxxxxyyyxxyyxxy, ((VECTOR(int32_t, 4))(l_298.s3229)).zzzzxywwxxxzwyxy))).se7db)), ((VECTOR(int32_t, 4))(l_299.s3022))))), l_300.x, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_301, 0x2D23FC32L, l_302, (-1L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(1L, 0x0DB34436L)))), 0x38288692L, 0x7320C150L)).s73)).yxyxxyyy)).s75))).xyyx, ((VECTOR(int32_t, 4))(((l_304 &= (FAKE_DIVERGE(p_497->group_0_offset, get_group_id(0), 10) , l_303)) , 0x18702F2CL), ((VECTOR(int32_t, 2))(9L)), 0x4D24582EL))))).lo)).xxyx, ((VECTOR(int32_t, 4))(0x0C31E50DL)))))))), 0x5EF1CE59L, ((VECTOR(int32_t, 2))(5L)), 0x3CBDC333L)).s3113314765012572, ((VECTOR(int32_t, 16))(0x6CBAB814L))))).sbb, ((VECTOR(int32_t, 2))(0x7648EDCDL))))), ((VECTOR(int32_t, 2))(0x5C628F40L))))).xyxx)), ((VECTOR(int32_t, 2))(0x5A94C6A0L)), (-1L))), ((VECTOR(int32_t, 16))(0x3F03289FL))))).s9ec8)), 0x5E73CCA0L, 0x3BF8C482L)).s7;
                    l_308 = ((l_305 , l_306) , l_307);
                    l_310 = l_309;
                }
                l_316 = (l_317 = (l_311 , (((l_312[1][4][0] , l_313) , (l_314 , (l_256.y ^= (l_262.z = l_315)))) , l_316)));
            }
        }
        unsigned int result = 0;
        result += l_170.s7;
        result += l_170.s6;
        result += l_170.s5;
        result += l_170.s4;
        result += l_170.s3;
        result += l_170.s2;
        result += l_170.s1;
        result += l_170.s0;
        atomic_add(&p_497->g_special_values[72 * get_linear_group_id() + 17], result);
    }
    else
    { /* block id: 168 */
        (1 + 1);
    }
    return (*p_77);
}


/* ------------------------------------------ */
/* 
 * reads : p_497->g_145
 * writes: p_497->g_146 p_497->g_156
 */
int32_t ** func_81(int32_t  p_82, uint32_t  p_83, int64_t  p_84, struct S0 * p_497)
{ /* block id: 59 */
    int32_t *l_153 = (void*)0;
    int8_t **l_155 = &p_497->g_108;
    int8_t ***l_154[9][9] = {{&l_155,&l_155,&l_155,&l_155,&l_155,&l_155,&l_155,&l_155,&l_155},{&l_155,&l_155,&l_155,&l_155,&l_155,&l_155,&l_155,&l_155,&l_155},{&l_155,&l_155,&l_155,&l_155,&l_155,&l_155,&l_155,&l_155,&l_155},{&l_155,&l_155,&l_155,&l_155,&l_155,&l_155,&l_155,&l_155,&l_155},{&l_155,&l_155,&l_155,&l_155,&l_155,&l_155,&l_155,&l_155,&l_155},{&l_155,&l_155,&l_155,&l_155,&l_155,&l_155,&l_155,&l_155,&l_155},{&l_155,&l_155,&l_155,&l_155,&l_155,&l_155,&l_155,&l_155,&l_155},{&l_155,&l_155,&l_155,&l_155,&l_155,&l_155,&l_155,&l_155,&l_155},{&l_155,&l_155,&l_155,&l_155,&l_155,&l_155,&l_155,&l_155,&l_155}};
    int32_t *l_157 = (void*)0;
    int32_t *l_158[7][7] = {{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,(void*)0,(void*)0,&p_497->g_4},{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,(void*)0,(void*)0,&p_497->g_4},{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,(void*)0,(void*)0,&p_497->g_4},{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,(void*)0,(void*)0,&p_497->g_4},{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,(void*)0,(void*)0,&p_497->g_4},{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,(void*)0,(void*)0,&p_497->g_4},{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,(void*)0,(void*)0,&p_497->g_4}};
    uint64_t l_159 = 18446744073709551615UL;
    uint16_t l_164 = 5UL;
    int i, j;
    (*p_497->g_145) = l_153;
    p_497->g_156 = &p_497->g_108;
    ++l_159;
    for (l_159 = 0; (l_159 >= 54); l_159 = safe_add_func_uint64_t_u_u(l_159, 1))
    { /* block id: 65 */
        l_164++;
    }
    return &p_497->g_146;
}


/* ------------------------------------------ */
/* 
 * reads : p_497->l_comm_values p_497->g_3 p_497->g_107 p_497->g_133 p_497->g_4 p_497->g_145 p_497->g_148 p_497->g_146
 * writes: p_497->g_148 p_497->g_146
 */
uint32_t  func_85(int32_t ** p_86, int32_t  p_87, uint32_t  p_88, struct S0 * p_497)
{ /* block id: 44 */
    int16_t l_116 = 0x4938L;
    int32_t l_120 = 0x757AF5BDL;
    int32_t l_121 = 1L;
    uint16_t l_122 = 0x0975L;
    VECTOR(int8_t, 8) l_131 = (VECTOR(int8_t, 8))((-2L), (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), 0x29L), 0x29L), 0x29L, (-2L), 0x29L);
    VECTOR(uint8_t, 16) l_132 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL), 255UL, 255UL, 255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL, 255UL, 255UL, 255UL);
    VECTOR(uint8_t, 2) l_134 = (VECTOR(uint8_t, 2))(0xFCL, 0x34L);
    VECTOR(uint8_t, 8) l_135 = (VECTOR(uint8_t, 8))(9UL, (VECTOR(uint8_t, 4))(9UL, (VECTOR(uint8_t, 2))(9UL, 0x4BL), 0x4BL), 0x4BL, 9UL, 0x4BL);
    int16_t l_140[7];
    int16_t *l_141 = &l_140[3];
    int32_t *l_144 = &p_497->g_4;
    int32_t **l_143 = &l_144;
    int32_t ***l_142 = &l_143;
    int16_t *l_147 = &p_497->g_148;
    int32_t *l_149 = &l_120;
    int32_t *l_150 = (void*)0;
    int32_t l_151 = 0x416A4623L;
    int i;
    for (i = 0; i < 7; i++)
        l_140[i] = 3L;
    for (p_88 = 0; (p_88 <= 32); p_88++)
    { /* block id: 47 */
        int32_t *l_117 = (void*)0;
        int32_t *l_118 = (void*)0;
        int32_t *l_119[8][4][5] = {{{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4},{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4},{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4},{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4}},{{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4},{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4},{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4},{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4}},{{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4},{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4},{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4},{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4}},{{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4},{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4},{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4},{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4}},{{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4},{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4},{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4},{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4}},{{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4},{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4},{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4},{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4}},{{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4},{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4},{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4},{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4}},{{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4},{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4},{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4},{&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4,&p_497->g_4}}};
        int i, j, k;
        l_116 = 0x68B8653EL;
        --l_122;
    }
    (*l_149) = (safe_div_func_int16_t_s_s((p_497->l_comm_values[(safe_mod_func_uint32_t_u_u(p_497->tid, 54))] , ((*l_147) &= (safe_lshift_func_uint16_t_u_s(l_121, ((p_497->g_3 > (((*l_142) = func_89(&p_497->g_56, (p_497->g_107.w == (safe_add_func_uint8_t_u_u((l_116 <= ((((((*l_141) = ((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_131.s2715376126460711)))).sd43f)), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(l_132.s0c4e8884)))).even)).yxxwwzyz)).lo, ((VECTOR(uint8_t, 16))(p_497->g_133.xyyxyyxyyyyxxxxy)).s6bd5, ((VECTOR(uint8_t, 2))(l_134.yy)).xyxx))).xxwwxyyx, ((VECTOR(uint8_t, 2))(l_135.s41)).yyyxxyxy))).s30, (uint8_t)(safe_div_func_uint32_t_u_u(((FAKE_DIVERGE(p_497->group_2_offset, get_group_id(2), 10) , p_497->g_4) & (safe_sub_func_uint64_t_u_u(0x823590D9D044D412L, (-1L)))), l_140[2]))))).xxyxyxyyyxxxyyxy)).s4822))).x) == p_87) & l_132.sa) && 3L) | p_87)), 255UL))), &p_497->g_4, l_132.s3, p_497->g_133.x, p_497)) != p_497->g_145)) , (-10L)))))), (*l_144)));
    (*l_149) = (p_88 , ((l_150 = (*p_497->g_145)) == (*p_497->g_145)));
    (*p_497->g_145) = (*p_497->g_145);
    return l_151;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t ** func_89(int32_t * p_90, int16_t  p_91, int32_t * p_92, uint8_t  p_93, uint64_t  p_94, struct S0 * p_497)
{ /* block id: 42 */
    int32_t **l_113 = (void*)0;
    return l_113;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[72];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 72; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[72];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 72; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[54];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 54; i++)
            l_comm_values[i] = 1;
    struct S0 c_498;
    struct S0* p_497 = &c_498;
    struct S0 c_499 = {
        0x2C29A3DFL, // p_497->g_2
        (-8L), // p_497->g_3
        7L, // p_497->g_4
        1L, // p_497->g_56
        0x50L, // p_497->g_102
        (VECTOR(int32_t, 4))(0x3AAD5626L, (VECTOR(int32_t, 2))(0x3AAD5626L, 0x39069939L), 0x39069939L), // p_497->g_107
        0x1FL, // p_497->g_109
        &p_497->g_109, // p_497->g_108
        (VECTOR(uint8_t, 2))(0UL, 1UL), // p_497->g_133
        &p_497->g_4, // p_497->g_146
        &p_497->g_146, // p_497->g_145
        (-1L), // p_497->g_148
        (void*)0, // p_497->g_156
        (void*)0, // p_497->g_318
        (VECTOR(int32_t, 2))(0x496B410AL, 0x1DB045D2L), // p_497->g_332
        {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}}, // p_497->g_333
        (void*)0, // p_497->g_334
        (VECTOR(int32_t, 8))(0x73145DA8L, (VECTOR(int32_t, 4))(0x73145DA8L, (VECTOR(int32_t, 2))(0x73145DA8L, 1L), 1L), 1L, 0x73145DA8L, 1L), // p_497->g_348
        1UL, // p_497->g_350
        (VECTOR(uint8_t, 2))(7UL, 0x4DL), // p_497->g_363
        (VECTOR(uint8_t, 2))(249UL, 0x5BL), // p_497->g_364
        (VECTOR(int16_t, 8))(0x3224L, (VECTOR(int16_t, 4))(0x3224L, (VECTOR(int16_t, 2))(0x3224L, 1L), 1L), 1L, 0x3224L, 1L), // p_497->g_369
        0x8B07L, // p_497->g_376
        1L, // p_497->g_380
        (VECTOR(uint64_t, 16))(18446744073709551609UL, (VECTOR(uint64_t, 4))(18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 3UL), 3UL), 3UL, 18446744073709551609UL, 3UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 3UL), (VECTOR(uint64_t, 2))(18446744073709551609UL, 3UL), 18446744073709551609UL, 3UL, 18446744073709551609UL, 3UL), // p_497->g_383
        (VECTOR(uint16_t, 8))(8UL, (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 1UL), 1UL), 1UL, 8UL, 1UL), // p_497->g_388
        0x5CL, // p_497->g_390
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-2L)), (-2L)), (-2L), (-1L), (-2L), (VECTOR(int32_t, 2))((-1L), (-2L)), (VECTOR(int32_t, 2))((-1L), (-2L)), (-1L), (-2L), (-1L), (-2L)), // p_497->g_392
        {{{(void*)0,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4},{(void*)0,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4}},{{(void*)0,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4},{(void*)0,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4}},{{(void*)0,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4},{(void*)0,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4}},{{(void*)0,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4},{(void*)0,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4}},{{(void*)0,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4},{(void*)0,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4,(void*)0,&p_497->g_4}}}, // p_497->g_396
        {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}, // p_497->g_399
        (VECTOR(int16_t, 8))((-5L), (VECTOR(int16_t, 4))((-5L), (VECTOR(int16_t, 2))((-5L), 0x1ABAL), 0x1ABAL), 0x1ABAL, (-5L), 0x1ABAL), // p_497->g_491
        6UL, // p_497->g_493
        0, // p_497->v_collective
        sequence_input[get_global_id(0)], // p_497->global_0_offset
        sequence_input[get_global_id(1)], // p_497->global_1_offset
        sequence_input[get_global_id(2)], // p_497->global_2_offset
        sequence_input[get_local_id(0)], // p_497->local_0_offset
        sequence_input[get_local_id(1)], // p_497->local_1_offset
        sequence_input[get_local_id(2)], // p_497->local_2_offset
        sequence_input[get_group_id(0)], // p_497->group_0_offset
        sequence_input[get_group_id(1)], // p_497->group_1_offset
        sequence_input[get_group_id(2)], // p_497->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 54)), permutations[0][get_linear_local_id()])), // p_497->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_498 = c_499;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_497);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_497->g_2, "p_497->g_2", print_hash_value);
    transparent_crc(p_497->g_3, "p_497->g_3", print_hash_value);
    transparent_crc(p_497->g_4, "p_497->g_4", print_hash_value);
    transparent_crc(p_497->g_56, "p_497->g_56", print_hash_value);
    transparent_crc(p_497->g_102, "p_497->g_102", print_hash_value);
    transparent_crc(p_497->g_107.x, "p_497->g_107.x", print_hash_value);
    transparent_crc(p_497->g_107.y, "p_497->g_107.y", print_hash_value);
    transparent_crc(p_497->g_107.z, "p_497->g_107.z", print_hash_value);
    transparent_crc(p_497->g_107.w, "p_497->g_107.w", print_hash_value);
    transparent_crc(p_497->g_109, "p_497->g_109", print_hash_value);
    transparent_crc(p_497->g_133.x, "p_497->g_133.x", print_hash_value);
    transparent_crc(p_497->g_133.y, "p_497->g_133.y", print_hash_value);
    transparent_crc(p_497->g_148, "p_497->g_148", print_hash_value);
    transparent_crc(p_497->g_332.x, "p_497->g_332.x", print_hash_value);
    transparent_crc(p_497->g_332.y, "p_497->g_332.y", print_hash_value);
    transparent_crc(p_497->g_348.s0, "p_497->g_348.s0", print_hash_value);
    transparent_crc(p_497->g_348.s1, "p_497->g_348.s1", print_hash_value);
    transparent_crc(p_497->g_348.s2, "p_497->g_348.s2", print_hash_value);
    transparent_crc(p_497->g_348.s3, "p_497->g_348.s3", print_hash_value);
    transparent_crc(p_497->g_348.s4, "p_497->g_348.s4", print_hash_value);
    transparent_crc(p_497->g_348.s5, "p_497->g_348.s5", print_hash_value);
    transparent_crc(p_497->g_348.s6, "p_497->g_348.s6", print_hash_value);
    transparent_crc(p_497->g_348.s7, "p_497->g_348.s7", print_hash_value);
    transparent_crc(p_497->g_350, "p_497->g_350", print_hash_value);
    transparent_crc(p_497->g_363.x, "p_497->g_363.x", print_hash_value);
    transparent_crc(p_497->g_363.y, "p_497->g_363.y", print_hash_value);
    transparent_crc(p_497->g_364.x, "p_497->g_364.x", print_hash_value);
    transparent_crc(p_497->g_364.y, "p_497->g_364.y", print_hash_value);
    transparent_crc(p_497->g_369.s0, "p_497->g_369.s0", print_hash_value);
    transparent_crc(p_497->g_369.s1, "p_497->g_369.s1", print_hash_value);
    transparent_crc(p_497->g_369.s2, "p_497->g_369.s2", print_hash_value);
    transparent_crc(p_497->g_369.s3, "p_497->g_369.s3", print_hash_value);
    transparent_crc(p_497->g_369.s4, "p_497->g_369.s4", print_hash_value);
    transparent_crc(p_497->g_369.s5, "p_497->g_369.s5", print_hash_value);
    transparent_crc(p_497->g_369.s6, "p_497->g_369.s6", print_hash_value);
    transparent_crc(p_497->g_369.s7, "p_497->g_369.s7", print_hash_value);
    transparent_crc(p_497->g_376, "p_497->g_376", print_hash_value);
    transparent_crc(p_497->g_380, "p_497->g_380", print_hash_value);
    transparent_crc(p_497->g_383.s0, "p_497->g_383.s0", print_hash_value);
    transparent_crc(p_497->g_383.s1, "p_497->g_383.s1", print_hash_value);
    transparent_crc(p_497->g_383.s2, "p_497->g_383.s2", print_hash_value);
    transparent_crc(p_497->g_383.s3, "p_497->g_383.s3", print_hash_value);
    transparent_crc(p_497->g_383.s4, "p_497->g_383.s4", print_hash_value);
    transparent_crc(p_497->g_383.s5, "p_497->g_383.s5", print_hash_value);
    transparent_crc(p_497->g_383.s6, "p_497->g_383.s6", print_hash_value);
    transparent_crc(p_497->g_383.s7, "p_497->g_383.s7", print_hash_value);
    transparent_crc(p_497->g_383.s8, "p_497->g_383.s8", print_hash_value);
    transparent_crc(p_497->g_383.s9, "p_497->g_383.s9", print_hash_value);
    transparent_crc(p_497->g_383.sa, "p_497->g_383.sa", print_hash_value);
    transparent_crc(p_497->g_383.sb, "p_497->g_383.sb", print_hash_value);
    transparent_crc(p_497->g_383.sc, "p_497->g_383.sc", print_hash_value);
    transparent_crc(p_497->g_383.sd, "p_497->g_383.sd", print_hash_value);
    transparent_crc(p_497->g_383.se, "p_497->g_383.se", print_hash_value);
    transparent_crc(p_497->g_383.sf, "p_497->g_383.sf", print_hash_value);
    transparent_crc(p_497->g_388.s0, "p_497->g_388.s0", print_hash_value);
    transparent_crc(p_497->g_388.s1, "p_497->g_388.s1", print_hash_value);
    transparent_crc(p_497->g_388.s2, "p_497->g_388.s2", print_hash_value);
    transparent_crc(p_497->g_388.s3, "p_497->g_388.s3", print_hash_value);
    transparent_crc(p_497->g_388.s4, "p_497->g_388.s4", print_hash_value);
    transparent_crc(p_497->g_388.s5, "p_497->g_388.s5", print_hash_value);
    transparent_crc(p_497->g_388.s6, "p_497->g_388.s6", print_hash_value);
    transparent_crc(p_497->g_388.s7, "p_497->g_388.s7", print_hash_value);
    transparent_crc(p_497->g_390, "p_497->g_390", print_hash_value);
    transparent_crc(p_497->g_392.s0, "p_497->g_392.s0", print_hash_value);
    transparent_crc(p_497->g_392.s1, "p_497->g_392.s1", print_hash_value);
    transparent_crc(p_497->g_392.s2, "p_497->g_392.s2", print_hash_value);
    transparent_crc(p_497->g_392.s3, "p_497->g_392.s3", print_hash_value);
    transparent_crc(p_497->g_392.s4, "p_497->g_392.s4", print_hash_value);
    transparent_crc(p_497->g_392.s5, "p_497->g_392.s5", print_hash_value);
    transparent_crc(p_497->g_392.s6, "p_497->g_392.s6", print_hash_value);
    transparent_crc(p_497->g_392.s7, "p_497->g_392.s7", print_hash_value);
    transparent_crc(p_497->g_392.s8, "p_497->g_392.s8", print_hash_value);
    transparent_crc(p_497->g_392.s9, "p_497->g_392.s9", print_hash_value);
    transparent_crc(p_497->g_392.sa, "p_497->g_392.sa", print_hash_value);
    transparent_crc(p_497->g_392.sb, "p_497->g_392.sb", print_hash_value);
    transparent_crc(p_497->g_392.sc, "p_497->g_392.sc", print_hash_value);
    transparent_crc(p_497->g_392.sd, "p_497->g_392.sd", print_hash_value);
    transparent_crc(p_497->g_392.se, "p_497->g_392.se", print_hash_value);
    transparent_crc(p_497->g_392.sf, "p_497->g_392.sf", print_hash_value);
    transparent_crc(p_497->g_491.s0, "p_497->g_491.s0", print_hash_value);
    transparent_crc(p_497->g_491.s1, "p_497->g_491.s1", print_hash_value);
    transparent_crc(p_497->g_491.s2, "p_497->g_491.s2", print_hash_value);
    transparent_crc(p_497->g_491.s3, "p_497->g_491.s3", print_hash_value);
    transparent_crc(p_497->g_491.s4, "p_497->g_491.s4", print_hash_value);
    transparent_crc(p_497->g_491.s5, "p_497->g_491.s5", print_hash_value);
    transparent_crc(p_497->g_491.s6, "p_497->g_491.s6", print_hash_value);
    transparent_crc(p_497->g_491.s7, "p_497->g_491.s7", print_hash_value);
    transparent_crc(p_497->g_493, "p_497->g_493", print_hash_value);
    transparent_crc(p_497->v_collective, "p_497->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 72; i++)
            transparent_crc(p_497->g_special_values[i + 72 * get_linear_group_id()], "p_497->g_special_values[i + 72 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 72; i++)
            transparent_crc(p_497->l_special_values[i], "p_497->l_special_values[i]", print_hash_value);
    transparent_crc(p_497->l_comm_values[get_linear_local_id()], "p_497->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_497->g_comm_values[get_linear_group_id() * 54 + get_linear_local_id()], "p_497->g_comm_values[get_linear_group_id() * 54 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
