// --atomics 26 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 19,56,1 -l 1,56,1
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

__constant uint32_t permutations[10][56] = {
{47,35,21,2,37,10,14,5,33,52,43,49,11,46,40,15,4,20,17,25,44,18,48,27,31,53,50,3,38,32,8,39,0,1,55,26,6,19,51,22,23,29,54,9,28,42,24,34,45,7,41,12,30,36,16,13}, // permutation 0
{26,37,45,10,21,30,32,22,28,36,19,35,34,1,46,29,3,7,39,55,8,11,41,47,0,49,20,23,6,44,18,4,5,48,42,9,2,50,25,52,13,51,15,31,38,17,40,33,53,12,24,54,27,43,14,16}, // permutation 1
{14,12,37,19,0,35,29,4,23,21,42,49,39,16,34,20,41,50,52,9,48,30,47,53,22,38,44,40,45,3,28,6,27,31,8,43,24,18,1,7,46,51,25,5,33,55,15,26,17,32,10,2,36,13,11,54}, // permutation 2
{51,38,31,16,46,52,3,43,6,37,11,25,17,36,2,32,39,34,15,18,29,20,1,14,42,23,35,8,33,12,48,4,40,13,47,9,10,55,28,19,22,44,50,21,0,49,45,26,5,53,24,7,27,41,54,30}, // permutation 3
{16,10,35,37,40,53,2,6,7,33,47,17,50,43,12,48,46,54,38,51,22,14,0,19,20,24,32,13,1,42,29,44,52,26,41,34,36,31,55,25,28,45,49,18,15,11,23,3,30,8,5,27,4,21,39,9}, // permutation 4
{15,39,37,22,30,7,25,19,31,43,14,18,47,5,4,48,9,42,52,17,23,3,21,32,41,28,34,11,27,35,33,55,50,20,13,53,51,10,24,2,45,44,40,12,16,29,54,1,49,46,36,6,0,38,8,26}, // permutation 5
{47,55,2,24,54,31,26,8,45,39,12,7,49,33,15,14,52,22,5,10,11,18,16,32,50,29,34,27,9,23,40,51,3,42,19,53,36,46,13,4,37,20,0,38,28,21,25,6,30,35,1,17,41,48,44,43}, // permutation 6
{47,31,44,21,32,38,3,48,16,1,43,53,28,14,51,34,29,18,50,11,41,19,0,40,8,36,13,12,55,6,7,23,37,42,15,33,10,24,27,49,5,54,30,17,46,2,9,4,26,20,25,45,39,35,22,52}, // permutation 7
{52,6,31,0,39,26,35,23,16,45,17,29,27,9,3,51,53,43,34,47,48,49,19,12,7,22,38,46,55,20,2,13,5,25,33,24,37,40,28,30,14,42,44,18,15,54,41,4,1,32,11,21,50,36,10,8}, // permutation 8
{44,50,20,1,12,32,35,25,11,43,2,27,10,6,0,28,49,21,13,48,26,19,18,45,40,46,9,36,4,37,24,5,3,55,51,47,31,54,16,23,14,41,8,22,34,38,29,30,33,53,7,39,15,42,52,17} // permutation 9
};

// Seed: 1655567221

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_11[6][6];
    volatile VECTOR(uint16_t, 16) g_12;
    int32_t g_43[1][9][4];
    volatile int32_t **g_46;
    int32_t * volatile g_47;
    int32_t g_49;
    int8_t g_85;
    int32_t g_95;
    int8_t g_102;
    uint16_t g_120;
    int32_t * volatile g_123[3][4];
    int32_t *g_134;
    int32_t **g_133[2][1][4];
    uint32_t g_145;
    int64_t g_148;
    int64_t g_174;
    VECTOR(int16_t, 8) g_217;
    uint16_t g_281;
    VECTOR(int64_t, 2) g_284;
    uint16_t *g_290;
    uint16_t * volatile *g_289;
    int8_t g_456;
    VECTOR(int16_t, 4) g_462;
    volatile VECTOR(int8_t, 4) g_466;
    volatile VECTOR(int8_t, 8) g_468;
    uint8_t g_617;
    volatile VECTOR(int16_t, 4) g_656;
    VECTOR(int8_t, 8) g_658;
    VECTOR(int8_t, 4) g_659;
    VECTOR(uint64_t, 8) g_674;
    uint32_t g_678;
    volatile VECTOR(uint64_t, 4) g_689;
    volatile VECTOR(uint64_t, 8) g_691;
    int8_t g_697;
    int32_t g_704;
    uint8_t g_707;
    uint8_t g_711[5][10];
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
uint32_t  func_1(struct S0 * p_712);
int32_t  func_7(int32_t  p_8, struct S0 * p_712);
int32_t  func_14(int16_t  p_15, struct S0 * p_712);
int32_t ** func_16(int32_t * p_17, int32_t ** p_18, uint32_t  p_19, uint32_t  p_20, struct S0 * p_712);
int32_t * func_21(int32_t ** p_22, int32_t  p_23, uint64_t  p_24, struct S0 * p_712);
uint8_t  func_29(int32_t * p_30, int32_t * p_31, struct S0 * p_712);
int32_t * func_32(int32_t ** p_33, struct S0 * p_712);
int32_t ** func_34(int32_t ** p_35, uint32_t  p_36, struct S0 * p_712);
int32_t * func_53(int32_t * p_54, int8_t  p_55, int16_t  p_56, uint32_t  p_57, struct S0 * p_712);
int8_t  func_60(uint16_t  p_61, int32_t * p_62, int32_t  p_63, struct S0 * p_712);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_712->l_comm_values p_712->g_11 p_712->g_12 p_712->g_43 p_712->g_46 p_712->g_85 p_712->g_102 p_712->g_133 p_712->g_148 p_712->g_49 p_712->g_95 p_712->g_217 p_712->g_174 p_712->g_120 p_712->g_145 p_712->g_281 p_712->g_284 p_712->g_289 p_712->g_comm_values p_712->g_462 p_712->g_466 p_712->g_468 p_712->g_656 p_712->g_658 p_712->g_659 p_712->g_674 p_712->g_678 p_712->g_689 p_712->g_691 p_712->g_704 p_712->g_707 p_712->g_711
 * writes: p_712->g_11 p_712->g_43 p_712->g_49 p_712->g_85 p_712->g_95 p_712->g_120 p_712->g_102 p_712->g_145 p_712->g_148 p_712->g_133 p_712->g_174 p_712->g_281 p_712->g_456 p_712->g_617 p_712->g_704 p_712->g_707 p_712->g_711
 */
uint32_t  func_1(struct S0 * p_712)
{ /* block id: 4 */
    uint32_t l_2 = 1UL;
    uint8_t *l_706 = &p_712->g_707;
    uint32_t *l_710 = (void*)0;
    atomic_add(&p_712->g_atomic_reduction[get_linear_group_id()], ((l_2 || p_712->l_comm_values[(safe_mod_func_uint32_t_u_u(p_712->tid, 56))]) >= (safe_sub_func_int32_t_s_s((func_7(p_712->l_comm_values[(safe_mod_func_uint32_t_u_u(p_712->tid, 56))], p_712) < ((0x10L == ((*l_706)++)) , ((void*)0 == &p_712->g_290))), (p_712->g_711[0][4] &= GROUP_DIVERGE(0, 1))))) + get_linear_global_id());
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_712->v_collective += p_712->g_atomic_reduction[get_linear_group_id()];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    return p_712->g_468.s4;
}


/* ------------------------------------------ */
/* 
 * reads : p_712->g_11 p_712->g_12 p_712->l_comm_values p_712->g_43 p_712->g_46 p_712->g_85 p_712->g_102 p_712->g_133 p_712->g_148 p_712->g_49 p_712->g_95 p_712->g_217 p_712->g_174 p_712->g_120 p_712->g_145 p_712->g_281 p_712->g_284 p_712->g_289 p_712->g_comm_values p_712->g_462 p_712->g_466 p_712->g_468 p_712->g_656 p_712->g_658 p_712->g_659 p_712->g_674 p_712->g_678 p_712->g_689 p_712->g_691 p_712->g_704
 * writes: p_712->g_11 p_712->g_43 p_712->g_49 p_712->g_85 p_712->g_95 p_712->g_120 p_712->g_102 p_712->g_145 p_712->g_148 p_712->g_133 p_712->g_174 p_712->g_281 p_712->g_456 p_712->g_617 p_712->g_704
 */
int32_t  func_7(int32_t  p_8, struct S0 * p_712)
{ /* block id: 5 */
    int32_t *l_9 = (void*)0;
    int32_t *l_10[10];
    VECTOR(uint16_t, 2) l_13 = (VECTOR(uint16_t, 2))(0xB7A1L, 0x5524L);
    int32_t l_705 = 8L;
    int i;
    for (i = 0; i < 10; i++)
        l_10[i] = &p_712->g_11[4][2];
    p_712->g_11[4][2] ^= 0L;
    l_705 = ((0x9A2BL ^ ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(p_712->g_12.sc0)).yyxyxyyx)).s65, ((VECTOR(uint16_t, 2))(l_13.xy))))))).lo) && (p_712->g_704 &= func_14(p_8, p_712)));
    return p_8;
}


/* ------------------------------------------ */
/* 
 * reads : p_712->l_comm_values p_712->g_43 p_712->g_46 p_712->g_85 p_712->g_11 p_712->g_102 p_712->g_133 p_712->g_12 p_712->g_148 p_712->g_49 p_712->g_95 p_712->g_217 p_712->g_174 p_712->g_120 p_712->g_145 p_712->g_281 p_712->g_284 p_712->g_289 p_712->g_comm_values p_712->g_462 p_712->g_466 p_712->g_468 p_712->g_656 p_712->g_658 p_712->g_659 p_712->g_674 p_712->g_678 p_712->g_689 p_712->g_691
 * writes: p_712->g_43 p_712->g_11 p_712->g_49 p_712->g_85 p_712->g_95 p_712->g_120 p_712->g_102 p_712->g_145 p_712->g_148 p_712->g_133 p_712->g_174 p_712->g_281 p_712->g_456 p_712->g_617
 */
int32_t  func_14(int16_t  p_15, struct S0 * p_712)
{ /* block id: 7 */
    int32_t *l_26 = (void*)0;
    int32_t **l_25 = &l_26;
    int8_t *l_455[4];
    int64_t l_459 = 0x7F44ACEAFC997C0CL;
    int32_t ***l_702 = (void*)0;
    int32_t ***l_703[7];
    int i, j;
    for (i = 0; i < 4; i++)
        l_455[i] = &p_712->g_456;
    for (i = 0; i < 7; i++)
        l_703[i] = &p_712->g_133[0][0][2];
    p_712->g_133[1][0][3] = (l_25 = func_16(func_21(l_25, (safe_rshift_func_uint8_t_u_u(func_29(&p_712->g_11[1][2], func_32(func_34(&l_26, p_712->l_comm_values[(safe_mod_func_uint32_t_u_u(p_712->tid, 56))], p_712), p_712), p_712), 2)), (((p_712->g_456 = 2L) != ((safe_lshift_func_int8_t_s_s(l_459, p_712->g_comm_values[p_712->tid])) > p_712->g_217.s3)) , 18446744073709551615UL), p_712), l_25, l_459, l_459, p_712));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_712->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 56)), permutations[(safe_mod_func_uint32_t_u_u(FAKE_DIVERGE(p_712->group_1_offset, get_group_id(1), 10), 10))][(safe_mod_func_uint32_t_u_u(p_712->tid, 56))]));
    return p_15;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t ** func_16(int32_t * p_17, int32_t ** p_18, uint32_t  p_19, uint32_t  p_20, struct S0 * p_712)
{ /* block id: 325 */
    return &p_712->g_134;
}


/* ------------------------------------------ */
/* 
 * reads : p_712->g_11 p_712->g_462 p_712->g_466 p_712->g_468 p_712->g_148 p_712->g_174 p_712->g_217 p_712->g_145 p_712->g_281 p_712->g_12 p_712->g_95 p_712->g_43 p_712->g_284 p_712->g_656 p_712->g_658 p_712->g_659 p_712->g_674 p_712->g_678 p_712->g_85 p_712->g_689 p_712->g_691 p_712->g_comm_values
 * writes: p_712->g_148 p_712->g_281 p_712->g_617 p_712->g_11
 */
int32_t * func_21(int32_t ** p_22, int32_t  p_23, uint64_t  p_24, struct S0 * p_712)
{ /* block id: 234 */
    VECTOR(int16_t, 8) l_463 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x7A81L), 0x7A81L), 0x7A81L, 1L, 0x7A81L);
    VECTOR(int8_t, 2) l_467 = (VECTOR(int8_t, 2))(0L, 0L);
    VECTOR(int64_t, 16) l_475 = (VECTOR(int64_t, 16))(0x2B520E3392ED3B5FL, (VECTOR(int64_t, 4))(0x2B520E3392ED3B5FL, (VECTOR(int64_t, 2))(0x2B520E3392ED3B5FL, 9L), 9L), 9L, 0x2B520E3392ED3B5FL, 9L, (VECTOR(int64_t, 2))(0x2B520E3392ED3B5FL, 9L), (VECTOR(int64_t, 2))(0x2B520E3392ED3B5FL, 9L), 0x2B520E3392ED3B5FL, 9L, 0x2B520E3392ED3B5FL, 9L);
    VECTOR(int64_t, 16) l_476 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x693E5A8500BBFC73L), 0x693E5A8500BBFC73L), 0x693E5A8500BBFC73L, (-1L), 0x693E5A8500BBFC73L, (VECTOR(int64_t, 2))((-1L), 0x693E5A8500BBFC73L), (VECTOR(int64_t, 2))((-1L), 0x693E5A8500BBFC73L), (-1L), 0x693E5A8500BBFC73L, (-1L), 0x693E5A8500BBFC73L);
    uint32_t l_477[4] = {0xBB5908D6L,0xBB5908D6L,0xBB5908D6L,0xBB5908D6L};
    int8_t l_479 = 0x57L;
    uint64_t l_482 = 18446744073709551615UL;
    int16_t l_483[3][9][8];
    int32_t l_620 = 1L;
    VECTOR(uint64_t, 16) l_669 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xE395F855CE4692E2L), 0xE395F855CE4692E2L), 0xE395F855CE4692E2L, 18446744073709551615UL, 0xE395F855CE4692E2L, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xE395F855CE4692E2L), (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xE395F855CE4692E2L), 18446744073709551615UL, 0xE395F855CE4692E2L, 18446744073709551615UL, 0xE395F855CE4692E2L);
    VECTOR(uint64_t, 2) l_672 = (VECTOR(uint64_t, 2))(0xE23ACB7A9D7C876FL, 0x49364898938DDF2EL);
    VECTOR(int16_t, 16) l_675 = (VECTOR(int16_t, 16))((-3L), (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), 0L), 0L), 0L, (-3L), 0L, (VECTOR(int16_t, 2))((-3L), 0L), (VECTOR(int16_t, 2))((-3L), 0L), (-3L), 0L, (-3L), 0L);
    int32_t *l_695 = &p_712->g_11[4][2];
    int32_t *l_696[1];
    uint8_t l_698 = 0UL;
    int32_t *l_701 = &p_712->g_11[3][2];
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 8; k++)
                l_483[i][j][k] = 1L;
        }
    }
    for (i = 0; i < 1; i++)
        l_696[i] = (void*)0;
    if ((p_712->g_11[4][2] && ((safe_sub_func_uint32_t_u_u((((VECTOR(int16_t, 8))(0x671CL, 0x4E4DL, ((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(0x270BL, ((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(p_712->g_462.zz)).yyyyyxxy)).s22, ((VECTOR(int16_t, 4))(l_463.s5155)).hi))), 0x1BD8L)), ((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(1L, 0L)).hi, ((safe_div_func_int8_t_s_s(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 4))(0x3EL, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 2))(p_712->g_466.zw)).xyxxxyyyyxyxxyxy, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))((-4L), 0L)), 0x0EL, (-7L))).xyzzzwzwyxyxzwxy))).s96)), 0x0FL)).ywywywxxyxzzwxxw, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 2))((-1L), (-1L))).xxyxyxxxxyyxxyxx, ((VECTOR(int8_t, 8))(l_467.yyxyxxxy)).s6452156365533303))), ((VECTOR(int8_t, 2))(p_712->g_468.s73)).yyyyyxyyyxyxxxyy))).s73fc)), (((safe_mul_func_int8_t_s_s(p_24, p_712->g_148)) , (safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((((((!(((VECTOR(int64_t, 16))(l_475.s5a99416ca32f4b99)).s4 < ((VECTOR(int64_t, 8))(l_476.s37a005e5)).s0)) | (l_476.s4 < ((0L & l_477[3]) & ((((0L != (((l_479 |= (safe_unary_minus_func_int32_t_s(0x7B2472FBL))) && (safe_add_func_int32_t_s_s(p_23, l_479))) >= 0x1BBAL)) , (-3L)) >= p_23) , l_475.s0)))) > 0x4E91L) , 0x10L) , l_482) & l_482), l_483[1][3][2])), p_24))) & p_712->g_174), 0x5CL, 6L, (-1L))).s6712172152114360, ((VECTOR(int8_t, 16))(5L))))))).s0, GROUP_DIVERGE(0, 1))) == l_475.sa), 0x4022L, p_24, 0x1E72L, ((VECTOR(int16_t, 8))(0x73ADL)), ((VECTOR(int16_t, 2))(0L)), 0x30C6L)).s07c5, (int16_t)p_24))))).odd, ((VECTOR(int16_t, 4))(1L))))), 0x6EA4L, 0x4E5AL)).s5 < 3L), p_712->g_217.s2)) > p_712->g_145)))
    { /* block id: 236 */
        if ((atomic_inc(&p_712->g_atomic_input[26 * get_linear_group_id() + 14]) == 3))
        { /* block id: 238 */
            int32_t l_484 = 8L;
            int32_t *l_485 = &l_484;
            int32_t *l_486[7] = {&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484};
            uint64_t l_588 = 18446744073709551608UL;
            uint16_t l_589[5];
            uint16_t l_590 = 0UL;
            uint32_t l_591 = 0x40D4347FL;
            int i;
            for (i = 0; i < 5; i++)
                l_589[i] = 65531UL;
            l_486[1] = (l_484 , l_485);
            for (l_484 = 0; (l_484 != (-11)); l_484--)
            { /* block id: 242 */
                uint64_t l_489 = 0x01EA85723A6F8EE7L;
                uint32_t l_490 = 0x0FAC2D5BL;
                uint8_t l_491[3];
                uint8_t l_577[2][8][7] = {{{0xC2L,0x41L,0x8CL,0xB0L,0x55L,1UL,1UL},{0xC2L,0x41L,0x8CL,0xB0L,0x55L,1UL,1UL},{0xC2L,0x41L,0x8CL,0xB0L,0x55L,1UL,1UL},{0xC2L,0x41L,0x8CL,0xB0L,0x55L,1UL,1UL},{0xC2L,0x41L,0x8CL,0xB0L,0x55L,1UL,1UL},{0xC2L,0x41L,0x8CL,0xB0L,0x55L,1UL,1UL},{0xC2L,0x41L,0x8CL,0xB0L,0x55L,1UL,1UL},{0xC2L,0x41L,0x8CL,0xB0L,0x55L,1UL,1UL}},{{0xC2L,0x41L,0x8CL,0xB0L,0x55L,1UL,1UL},{0xC2L,0x41L,0x8CL,0xB0L,0x55L,1UL,1UL},{0xC2L,0x41L,0x8CL,0xB0L,0x55L,1UL,1UL},{0xC2L,0x41L,0x8CL,0xB0L,0x55L,1UL,1UL},{0xC2L,0x41L,0x8CL,0xB0L,0x55L,1UL,1UL},{0xC2L,0x41L,0x8CL,0xB0L,0x55L,1UL,1UL},{0xC2L,0x41L,0x8CL,0xB0L,0x55L,1UL,1UL},{0xC2L,0x41L,0x8CL,0xB0L,0x55L,1UL,1UL}}};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_491[i] = 0x92L;
                if ((l_489 , (l_491[1] = l_490)))
                { /* block id: 244 */
                    int32_t *l_492 = (void*)0;
                    l_486[1] = l_492;
                }
                else
                { /* block id: 246 */
                    uint16_t l_493 = 0x0CB9L;
                    int8_t l_506 = 0x0BL;
                    int64_t l_507 = 0x41514BB7E4257B8AL;
                    int64_t l_508[2][7][8] = {{{0x30625195F9E022BBL,0x2C5576D7CC133CF4L,5L,8L,(-9L),0x30625195F9E022BBL,8L,0x30C6C37D7BEE1E4AL},{0x30625195F9E022BBL,0x2C5576D7CC133CF4L,5L,8L,(-9L),0x30625195F9E022BBL,8L,0x30C6C37D7BEE1E4AL},{0x30625195F9E022BBL,0x2C5576D7CC133CF4L,5L,8L,(-9L),0x30625195F9E022BBL,8L,0x30C6C37D7BEE1E4AL},{0x30625195F9E022BBL,0x2C5576D7CC133CF4L,5L,8L,(-9L),0x30625195F9E022BBL,8L,0x30C6C37D7BEE1E4AL},{0x30625195F9E022BBL,0x2C5576D7CC133CF4L,5L,8L,(-9L),0x30625195F9E022BBL,8L,0x30C6C37D7BEE1E4AL},{0x30625195F9E022BBL,0x2C5576D7CC133CF4L,5L,8L,(-9L),0x30625195F9E022BBL,8L,0x30C6C37D7BEE1E4AL},{0x30625195F9E022BBL,0x2C5576D7CC133CF4L,5L,8L,(-9L),0x30625195F9E022BBL,8L,0x30C6C37D7BEE1E4AL}},{{0x30625195F9E022BBL,0x2C5576D7CC133CF4L,5L,8L,(-9L),0x30625195F9E022BBL,8L,0x30C6C37D7BEE1E4AL},{0x30625195F9E022BBL,0x2C5576D7CC133CF4L,5L,8L,(-9L),0x30625195F9E022BBL,8L,0x30C6C37D7BEE1E4AL},{0x30625195F9E022BBL,0x2C5576D7CC133CF4L,5L,8L,(-9L),0x30625195F9E022BBL,8L,0x30C6C37D7BEE1E4AL},{0x30625195F9E022BBL,0x2C5576D7CC133CF4L,5L,8L,(-9L),0x30625195F9E022BBL,8L,0x30C6C37D7BEE1E4AL},{0x30625195F9E022BBL,0x2C5576D7CC133CF4L,5L,8L,(-9L),0x30625195F9E022BBL,8L,0x30C6C37D7BEE1E4AL},{0x30625195F9E022BBL,0x2C5576D7CC133CF4L,5L,8L,(-9L),0x30625195F9E022BBL,8L,0x30C6C37D7BEE1E4AL},{0x30625195F9E022BBL,0x2C5576D7CC133CF4L,5L,8L,(-9L),0x30625195F9E022BBL,8L,0x30C6C37D7BEE1E4AL}}};
                    int i, j, k;
                    l_493 |= 4L;
                    for (l_493 = (-19); (l_493 <= 41); l_493 = safe_add_func_int32_t_s_s(l_493, 1))
                    { /* block id: 250 */
                        int64_t l_496 = 1L;
                        uint32_t l_497[6][9][3] = {{{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL}},{{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL}},{{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL}},{{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL}},{{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL}},{{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL},{0x675AF6A4L,4294967287UL,4294967287UL}}};
                        int32_t l_500 = (-1L);
                        int8_t l_501[9] = {0x2CL,0x2CL,0x2CL,0x2CL,0x2CL,0x2CL,0x2CL,0x2CL,0x2CL};
                        int16_t l_502 = (-2L);
                        uint32_t l_503 = 0UL;
                        int i, j, k;
                        l_497[2][0][0]++;
                        --l_503;
                    }
                    l_506 = 0x699E6F6DL;
                    l_508[0][6][2] = (l_507 = 1L);
                }
                for (l_490 = 0; (l_490 > 16); l_490 = safe_add_func_uint32_t_u_u(l_490, 8))
                { /* block id: 260 */
                    int32_t l_511 = 0x424C9BA7L;
                    uint32_t l_516 = 6UL;
                    uint32_t l_517 = 0x6820D7E2L;
                    for (l_511 = 20; (l_511 <= 21); l_511 = safe_add_func_uint64_t_u_u(l_511, 7))
                    { /* block id: 263 */
                        int8_t l_514 = 0x5BL;
                        uint16_t l_515 = 65529UL;
                        l_515 |= l_514;
                    }
                    l_511 &= 0L;
                    if ((l_517 |= (l_511 &= l_516)))
                    { /* block id: 269 */
                        uint32_t l_518 = 4294967295UL;
                        int16_t l_521 = 4L;
                        uint16_t l_522[9] = {0x1F67L,0x1F67L,0x1F67L,0x1F67L,0x1F67L,0x1F67L,0x1F67L,0x1F67L,0x1F67L};
                        int32_t l_525[1];
                        int8_t l_528 = 0x73L;
                        int8_t *l_527[8] = {&l_528,(void*)0,&l_528,&l_528,(void*)0,&l_528,&l_528,(void*)0};
                        int8_t **l_526 = &l_527[1];
                        int8_t **l_529[10][5] = {{(void*)0,(void*)0,(void*)0,&l_527[1],&l_527[1]},{(void*)0,(void*)0,(void*)0,&l_527[1],&l_527[1]},{(void*)0,(void*)0,(void*)0,&l_527[1],&l_527[1]},{(void*)0,(void*)0,(void*)0,&l_527[1],&l_527[1]},{(void*)0,(void*)0,(void*)0,&l_527[1],&l_527[1]},{(void*)0,(void*)0,(void*)0,&l_527[1],&l_527[1]},{(void*)0,(void*)0,(void*)0,&l_527[1],&l_527[1]},{(void*)0,(void*)0,(void*)0,&l_527[1],&l_527[1]},{(void*)0,(void*)0,(void*)0,&l_527[1],&l_527[1]},{(void*)0,(void*)0,(void*)0,&l_527[1],&l_527[1]}};
                        int8_t l_530[1][7] = {{0x6AL,(-1L),0x6AL,0x6AL,(-1L),0x6AL,0x6AL}};
                        VECTOR(int32_t, 16) l_531 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-8L)), (-8L)), (-8L), (-1L), (-8L), (VECTOR(int32_t, 2))((-1L), (-8L)), (VECTOR(int32_t, 2))((-1L), (-8L)), (-1L), (-8L), (-1L), (-8L));
                        VECTOR(int32_t, 4) l_532 = (VECTOR(int32_t, 4))(0x3DB9B022L, (VECTOR(int32_t, 2))(0x3DB9B022L, 0x3A4495D1L), 0x3A4495D1L);
                        uint16_t l_533 = 5UL;
                        VECTOR(int32_t, 16) l_534 = (VECTOR(int32_t, 16))(0x1F3E0EF0L, (VECTOR(int32_t, 4))(0x1F3E0EF0L, (VECTOR(int32_t, 2))(0x1F3E0EF0L, 0x553DD756L), 0x553DD756L), 0x553DD756L, 0x1F3E0EF0L, 0x553DD756L, (VECTOR(int32_t, 2))(0x1F3E0EF0L, 0x553DD756L), (VECTOR(int32_t, 2))(0x1F3E0EF0L, 0x553DD756L), 0x1F3E0EF0L, 0x553DD756L, 0x1F3E0EF0L, 0x553DD756L);
                        VECTOR(uint16_t, 16) l_535 = (VECTOR(uint16_t, 16))(6UL, (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 6UL), 6UL), 6UL, 6UL, 6UL, (VECTOR(uint16_t, 2))(6UL, 6UL), (VECTOR(uint16_t, 2))(6UL, 6UL), 6UL, 6UL, 6UL, 6UL);
                        uint16_t l_536 = 0xBF78L;
                        VECTOR(int32_t, 16) l_537 = (VECTOR(int32_t, 16))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x785FDEFFL), 0x785FDEFFL), 0x785FDEFFL, 2L, 0x785FDEFFL, (VECTOR(int32_t, 2))(2L, 0x785FDEFFL), (VECTOR(int32_t, 2))(2L, 0x785FDEFFL), 2L, 0x785FDEFFL, 2L, 0x785FDEFFL);
                        VECTOR(int32_t, 8) l_538 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 2L), 2L), 2L, (-1L), 2L);
                        VECTOR(int32_t, 4) l_539 = (VECTOR(int32_t, 4))(0x5EFBE28BL, (VECTOR(int32_t, 2))(0x5EFBE28BL, 0x78723C8CL), 0x78723C8CL);
                        uint32_t l_540[6][1][7];
                        uint32_t l_541 = 4294967289UL;
                        int64_t l_542 = 0x54C59B09A9720746L;
                        uint32_t l_543 = 0x81398702L;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_525[i] = (-6L);
                        for (i = 0; i < 6; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 7; k++)
                                    l_540[i][j][k] = 0xDCCB68EEL;
                            }
                        }
                        --l_518;
                        l_529[5][0] = (((l_522[3]--) , l_525[0]) , l_526);
                        l_525[0] &= ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(0x7B2B527AL, l_530[0][2], (-10L), 1L, (-1L), (-1L), 0x4C107BD9L, 0x1AA062CDL)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_531.s45e62cef)), ((VECTOR(int32_t, 8))(l_532.yzwwzxwx)).s4, l_533, ((VECTOR(int32_t, 2))(1L, 0L)), 0L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_534.sfde4d85e)).s21)).yyyxyyxy, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(0x4370AD79L, 0x60DDE956L, ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))((-9L), 1L)).xyxy, (int32_t)l_535.sf))), 8L, 0x0B344ED0L)).s10, (int32_t)l_536))).xyyy, ((VECTOR(int32_t, 8))(l_537.sdb15e0fc)).hi))).wwyzwwyx))).s07)).xxxx)).lo)), 0L)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 4))(l_538.s7526)).xwwyywzw, ((VECTOR(int32_t, 16))(l_539.wyywzyyywxxywzyx)).lo))).s0221427457524163)).sa8, (int32_t)l_540[1][0][1], (int32_t)l_541))).odd, ((VECTOR(int32_t, 8))(0x084545AFL)), 1L, l_542, ((VECTOR(int32_t, 4))(0x08FAE6F9L)), 0x30216C79L))))))).lo)))).s54, ((VECTOR(int32_t, 2))(1L)), ((VECTOR(int32_t, 2))(0x3B3C4DF7L))))).yyyyxyyy, ((VECTOR(int32_t, 8))(0L))))).s1770435042200437, ((VECTOR(int32_t, 16))((-4L)))))))).odd)), 0x4E73984DL, (-1L), 1L, l_543, (-4L), 0x2601AC07L, 0x00EAA555L, 0L)).odd, ((VECTOR(int32_t, 8))(0x07A4BFAFL))))).s5;
                    }
                    else
                    { /* block id: 274 */
                        int32_t l_544 = 0x75F9A243L;
                        uint8_t l_545[8][10] = {{0UL,0x51L,254UL,0UL,0x12L,0x12L,0UL,254UL,0x51L,0UL},{0UL,0x51L,254UL,0UL,0x12L,0x12L,0UL,254UL,0x51L,0UL},{0UL,0x51L,254UL,0UL,0x12L,0x12L,0UL,254UL,0x51L,0UL},{0UL,0x51L,254UL,0UL,0x12L,0x12L,0UL,254UL,0x51L,0UL},{0UL,0x51L,254UL,0UL,0x12L,0x12L,0UL,254UL,0x51L,0UL},{0UL,0x51L,254UL,0UL,0x12L,0x12L,0UL,254UL,0x51L,0UL},{0UL,0x51L,254UL,0UL,0x12L,0x12L,0UL,254UL,0x51L,0UL},{0UL,0x51L,254UL,0UL,0x12L,0x12L,0UL,254UL,0x51L,0UL}};
                        VECTOR(int32_t, 2) l_548 = (VECTOR(int32_t, 2))(0x654B5BBBL, 0x295D80C9L);
                        int64_t l_549 = (-1L);
                        uint16_t l_550[10][4] = {{0x91CCL,0x9499L,65527UL,0xCB39L},{0x91CCL,0x9499L,65527UL,0xCB39L},{0x91CCL,0x9499L,65527UL,0xCB39L},{0x91CCL,0x9499L,65527UL,0xCB39L},{0x91CCL,0x9499L,65527UL,0xCB39L},{0x91CCL,0x9499L,65527UL,0xCB39L},{0x91CCL,0x9499L,65527UL,0xCB39L},{0x91CCL,0x9499L,65527UL,0xCB39L},{0x91CCL,0x9499L,65527UL,0xCB39L},{0x91CCL,0x9499L,65527UL,0xCB39L}};
                        VECTOR(int32_t, 16) l_551 = (VECTOR(int32_t, 16))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 6L), 6L), 6L, 6L, 6L, (VECTOR(int32_t, 2))(6L, 6L), (VECTOR(int32_t, 2))(6L, 6L), 6L, 6L, 6L, 6L);
                        VECTOR(int32_t, 2) l_552 = (VECTOR(int32_t, 2))(0x7CEE44FDL, (-1L));
                        VECTOR(int32_t, 16) l_553 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x10422E1BL), 0x10422E1BL), 0x10422E1BL, 0L, 0x10422E1BL, (VECTOR(int32_t, 2))(0L, 0x10422E1BL), (VECTOR(int32_t, 2))(0L, 0x10422E1BL), 0L, 0x10422E1BL, 0L, 0x10422E1BL);
                        uint8_t l_554 = 0x10L;
                        VECTOR(int32_t, 8) l_555 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-2L)), (-2L)), (-2L), 1L, (-2L));
                        uint16_t l_556[8] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
                        uint8_t l_557[7][8] = {{0UL,250UL,250UL,0UL,0xC0L,0x04L,0xDEL,3UL},{0UL,250UL,250UL,0UL,0xC0L,0x04L,0xDEL,3UL},{0UL,250UL,250UL,0UL,0xC0L,0x04L,0xDEL,3UL},{0UL,250UL,250UL,0UL,0xC0L,0x04L,0xDEL,3UL},{0UL,250UL,250UL,0UL,0xC0L,0x04L,0xDEL,3UL},{0UL,250UL,250UL,0UL,0xC0L,0x04L,0xDEL,3UL},{0UL,250UL,250UL,0UL,0xC0L,0x04L,0xDEL,3UL}};
                        VECTOR(int32_t, 2) l_560 = (VECTOR(int32_t, 2))((-1L), 0L);
                        VECTOR(int32_t, 4) l_561 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x09F7FC86L), 0x09F7FC86L);
                        VECTOR(uint64_t, 2) l_562 = (VECTOR(uint64_t, 2))(0UL, 8UL);
                        VECTOR(int64_t, 16) l_563 = (VECTOR(int64_t, 16))(3L, (VECTOR(int64_t, 4))(3L, (VECTOR(int64_t, 2))(3L, (-1L)), (-1L)), (-1L), 3L, (-1L), (VECTOR(int64_t, 2))(3L, (-1L)), (VECTOR(int64_t, 2))(3L, (-1L)), 3L, (-1L), 3L, (-1L));
                        VECTOR(uint32_t, 4) l_564 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x1BC61574L), 0x1BC61574L);
                        VECTOR(uint32_t, 8) l_565 = (VECTOR(uint32_t, 8))(0x4AE7C080L, (VECTOR(uint32_t, 4))(0x4AE7C080L, (VECTOR(uint32_t, 2))(0x4AE7C080L, 0x894D4B6FL), 0x894D4B6FL), 0x894D4B6FL, 0x4AE7C080L, 0x894D4B6FL);
                        VECTOR(uint32_t, 2) l_566 = (VECTOR(uint32_t, 2))(1UL, 0x1AB490ACL);
                        VECTOR(uint32_t, 2) l_567 = (VECTOR(uint32_t, 2))(0xBAB74902L, 0x6D648D94L);
                        uint16_t l_568 = 65535UL;
                        int8_t l_569 = (-1L);
                        uint16_t l_570 = 0UL;
                        int32_t l_571 = 0x606C6DF0L;
                        int32_t l_572 = 0x39D3E021L;
                        int32_t l_573 = 0x6B447EC9L;
                        int16_t l_574 = 0x0034L;
                        int64_t l_575 = 1L;
                        int16_t l_576 = 0x7055L;
                        int i, j;
                        ++l_545[1][1];
                        l_555.s0 = (l_576 &= ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(l_548.yxxxxxyy)).s34, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x1EDEB059L, (-9L))).xyyxyxxyxxxxyyxy)).s6be1)).even, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))((-10L), (-1L))).yxxxyxxx, ((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 16))(l_549, (l_561.x = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((l_548.x = l_550[7][3]), ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))(0x2E54CE8EL, 0x0E669F93L, ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_551.sf352e56f)))).s26, (int32_t)(l_571 &= (l_551.s6 &= ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(l_552.yxxy)), ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(l_553.s1c28b6d1)).s15, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_554, (-2L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0x32DCB1A8L, 0x2560C494L, 0x4BC20039L, 4L)).lo)), 0L, (-2L))).z, (-2L), ((VECTOR(int32_t, 4))(l_555.s6164)), 0x1AC9E138L, (l_553.s3 = (l_556[3] , (((l_557[6][0] = 0L) , (++l_491[1])) , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_560.xxxx)))).odd)), 0x0451AE44L, 0x6314FAE4L)).y))), 0x1B8AA0A3L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_561.wxyxxyxzyxxzwxxz)).s23)), (-1L), 0x73B8D0AAL, (-1L))).sf01b)), ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 4))((((VECTOR(uint64_t, 16))(abs(((VECTOR(uint64_t, 8))(l_562.xyyyyyyy)).s0773016653212656))).se , (((VECTOR(uint32_t, 16))(4UL, 0x1FA0122BL, ((((VECTOR(int64_t, 16))(l_563.s2f9fdd532dc7c777)).s8 , 0x46ACL) , ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(l_564.wwwxxzxzyywzwyyw)))).s0), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(0x7D18B734L, 0xD72E725FL, ((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(l_565.s0220)).hi)).xxxx, ((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(uint32_t, 16))(l_566.xyxxyxxyxxyyyyxx)).hi, ((VECTOR(uint32_t, 4))(l_567.xyxy)).zyxyxzwy))).lo))), 0x3CC69C92L, 3UL)))), ((VECTOR(uint32_t, 4))(l_568, 0x6B36C87CL, 0x958F80BFL, 1UL)), 0x747C326CL)).s7 , l_569)), l_570, 8L, 0x2C1B71D3L)).odd, ((VECTOR(int32_t, 2))(6L)), ((VECTOR(int32_t, 2))(0x20BFC2D1L))))), (-1L), 0L)).hi, ((VECTOR(int32_t, 2))(0L))))), 0x14C3CFE8L, 0L)).s36, ((VECTOR(int32_t, 2))(5L))))).yxyx))).w))))).xyxx, ((VECTOR(int32_t, 4))(0x4FDF01B9L)), ((VECTOR(int32_t, 4))(8L))))).yxzwxywy, ((VECTOR(int32_t, 8))(0L))))), 0x263AEEFEL, 0x63A42829L, ((VECTOR(int32_t, 4))(4L)))).s57, ((VECTOR(int32_t, 2))(1L))))), 0x7C739E36L)).lo)))).xyyyyyyx)).odd)).z), l_572, ((VECTOR(int32_t, 4))(0x5B37717FL)), l_573, ((VECTOR(int32_t, 8))(0x31DD2747L)))).s0f9f, (int32_t)l_574))).wyxyxyzyyzxwxzyw, ((VECTOR(int32_t, 16))((-1L)))))).even))).hi)), ((VECTOR(int32_t, 2))(0x3215EFE3L)), 0x431E7088L, 0x75C8F043L)).s10, ((VECTOR(int32_t, 2))(0x7528BBECL))))).yxxx))))), l_575, ((VECTOR(int32_t, 4))(0x1F2DD3DCL)), 1L, 1L, 0x50E524B6L, 0L, ((VECTOR(int32_t, 2))(0x722BC9D4L)), 0x23ACDDD9L)).lo)).s53))).even);
                    }
                }
                if (l_577[1][6][5])
                { /* block id: 287 */
                    uint8_t l_578 = 249UL;
                    uint32_t l_581 = 9UL;
                    l_578--;
                    l_581++;
                }
                else
                { /* block id: 290 */
                    uint32_t l_584 = 0x870C2930L;
                    int32_t l_585[5][10][5] = {{{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L}},{{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L}},{{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L}},{{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L}},{{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L},{1L,(-6L),0x1268027CL,0x075C5F57L,0x04FBCA32L}}};
                    uint8_t l_586 = 0x22L;
                    int64_t l_587 = 0L;
                    int i, j, k;
                    l_585[2][6][1] |= l_584;
                    l_587 = l_586;
                }
            }
            l_589[0] &= l_588;
            l_591 = l_590;
            unsigned int result = 0;
            result += l_484;
            result += l_588;
            int l_589_i0;
            for (l_589_i0 = 0; l_589_i0 < 5; l_589_i0++) {
                result += l_589[l_589_i0];
            }
            result += l_590;
            result += l_591;
            atomic_add(&p_712->g_special_values[26 * get_linear_group_id() + 14], result);
        }
        else
        { /* block id: 297 */
            (1 + 1);
        }
    }
    else
    { /* block id: 300 */
        VECTOR(uint64_t, 8) l_618 = (VECTOR(uint64_t, 8))(3UL, (VECTOR(uint64_t, 4))(3UL, (VECTOR(uint64_t, 2))(3UL, 0x832A60421BE90059L), 0x832A60421BE90059L), 0x832A60421BE90059L, 3UL, 0x832A60421BE90059L);
        int32_t l_648 = 0x2A64B422L;
        VECTOR(int16_t, 16) l_655 = (VECTOR(int16_t, 16))(0x64B2L, (VECTOR(int16_t, 4))(0x64B2L, (VECTOR(int16_t, 2))(0x64B2L, (-9L)), (-9L)), (-9L), 0x64B2L, (-9L), (VECTOR(int16_t, 2))(0x64B2L, (-9L)), (VECTOR(int16_t, 2))(0x64B2L, (-9L)), 0x64B2L, (-9L), 0x64B2L, (-9L));
        VECTOR(int8_t, 4) l_660 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-1L)), (-1L));
        uint64_t l_679 = 0x6A645B1D01EFF4D3L;
        int i;
        for (p_712->g_148 = 0; (p_712->g_148 > 16); ++p_712->g_148)
        { /* block id: 303 */
            uint16_t *l_596 = (void*)0;
            uint16_t *l_597[3][4] = {{&p_712->g_281,(void*)0,&p_712->g_281,&p_712->g_281},{&p_712->g_281,(void*)0,&p_712->g_281,&p_712->g_281},{&p_712->g_281,(void*)0,&p_712->g_281,&p_712->g_281}};
            uint32_t *l_602[7] = {(void*)0,&p_712->g_145,(void*)0,(void*)0,&p_712->g_145,(void*)0,(void*)0};
            int32_t l_603 = (-10L);
            VECTOR(int64_t, 4) l_614 = (VECTOR(int64_t, 4))(0x007F65ABAE7E6F00L, (VECTOR(int64_t, 2))(0x007F65ABAE7E6F00L, 0L), 0L);
            int16_t l_615 = (-1L);
            uint8_t *l_616 = &p_712->g_617;
            int32_t *l_619[9];
            uint32_t l_645 = 0x01A0B015L;
            VECTOR(int8_t, 4) l_673 = (VECTOR(int8_t, 4))(0x25L, (VECTOR(int8_t, 2))(0x25L, 0x17L), 0x17L);
            VECTOR(uint64_t, 16) l_690 = (VECTOR(uint64_t, 16))(6UL, (VECTOR(uint64_t, 4))(6UL, (VECTOR(uint64_t, 2))(6UL, 1UL), 1UL), 1UL, 6UL, 1UL, (VECTOR(uint64_t, 2))(6UL, 1UL), (VECTOR(uint64_t, 2))(6UL, 1UL), 6UL, 1UL, 6UL, 1UL);
            int i, j;
            for (i = 0; i < 9; i++)
                l_619[i] = &p_712->g_11[1][0];
            l_620 = ((safe_mul_func_uint8_t_u_u(((l_618.s7 ^= ((--p_712->g_281) , (safe_sub_func_uint32_t_u_u((!(l_603 ^= 0xAB787BC5L)), ((p_24 , func_34(&p_712->g_134, (safe_div_func_uint8_t_u_u(((*l_616) = (safe_add_func_uint32_t_u_u((safe_div_func_int32_t_s_s(((p_712->g_468.s4 && (safe_add_func_uint16_t_u_u(GROUP_DIVERGE(2, 1), (GROUP_DIVERGE(2, 1) >= ((((safe_rshift_func_int8_t_s_u(p_712->g_12.s6, 4)) != ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(l_614.zwzz)).z, ((VECTOR(int64_t, 2))(0x5EE64AE3D3FA6D2BL, 0x09C882947D993C28L)), ((VECTOR(int64_t, 4))(((((((VECTOR(uint8_t, 2))(0x87L, 1UL)).hi , l_615) > (((VECTOR(uint64_t, 4))(l_467.x, ((VECTOR(uint64_t, 2))(0x92BA2E9F6081D87FL, 0UL)), 1UL)).w > l_483[1][3][2])) | (p_712->g_95 , p_712->g_462.w)) ^ p_24), p_24, 5L, 0x24F0F74ADFD8C413L)), 0L)).s1) , (void*)0) == &p_712->g_133[0][0][3]))))) && l_614.y), l_614.w)), 0x2C343057L))), 0x5FL)), p_712)) == (void*)0))))) , p_24), 0x40L)) , 0x752C8404L);
            for (p_23 = (-25); (p_23 >= 2); p_23 = safe_add_func_int32_t_s_s(p_23, 5))
            { /* block id: 311 */
                int8_t *l_633 = &l_479;
                VECTOR(int64_t, 8) l_644 = (VECTOR(int64_t, 8))(0x4F3434266F08F2B2L, (VECTOR(int64_t, 4))(0x4F3434266F08F2B2L, (VECTOR(int64_t, 2))(0x4F3434266F08F2B2L, (-1L)), (-1L)), (-1L), 0x4F3434266F08F2B2L, (-1L));
                uint32_t l_646[9][6][4] = {{{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL}},{{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL}},{{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL}},{{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL}},{{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL}},{{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL}},{{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL}},{{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL}},{{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL},{4294967287UL,4294967286UL,0xD4D28B24L,4294967287UL}}};
                uint16_t l_647 = 65526UL;
                VECTOR(int16_t, 8) l_653 = (VECTOR(int16_t, 8))(0x6847L, (VECTOR(int16_t, 4))(0x6847L, (VECTOR(int16_t, 2))(0x6847L, 1L), 1L), 1L, 0x6847L, 1L);
                VECTOR(int16_t, 4) l_654 = (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, (-4L)), (-4L));
                VECTOR(int16_t, 16) l_657 = (VECTOR(int16_t, 16))(0x2E7EL, (VECTOR(int16_t, 4))(0x2E7EL, (VECTOR(int16_t, 2))(0x2E7EL, 0x3C18L), 0x3C18L), 0x3C18L, 0x2E7EL, 0x3C18L, (VECTOR(int16_t, 2))(0x2E7EL, 0x3C18L), (VECTOR(int16_t, 2))(0x2E7EL, 0x3C18L), 0x2E7EL, 0x3C18L, 0x2E7EL, 0x3C18L);
                VECTOR(uint64_t, 2) l_676 = (VECTOR(uint64_t, 2))(0xD12638BC69F537D6L, 0UL);
                int32_t l_694 = 6L;
                int i, j, k;
                l_648 &= ((safe_mod_func_int64_t_s_s(0x199BBFC301C4CB76L, (safe_rshift_func_int8_t_s_u((((+((((safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(255UL, 255UL)).hi, (safe_mul_func_int8_t_s_s((((*l_633) = p_24) | (safe_div_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((0x4D6D0381F05E28CAL & p_712->g_145), p_23)), (safe_div_func_int16_t_s_s(((FAKE_DIVERGE(p_712->group_0_offset, get_group_id(0), 10) , ((safe_add_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s((p_712->g_43[0][2][1] , (p_24 == ((p_23 && ((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_644.s07)).yxxyyyxx)).s5 ^ p_712->g_284.y) ^ GROUP_DIVERGE(1, 1))) > p_712->g_462.y))), 2)), p_712->g_174)) > l_618.s1)) & l_645), p_23))))), p_24)))), p_712->g_43[0][4][3])) == l_646[4][1][0]) , l_647) | 0xBFB0L)) , 1UL) != 0x4AAEEC8FL), l_618.s4)))) && p_712->g_284.y);
                l_679 = (safe_add_func_int8_t_s_s((l_644.s3 , (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 4))(l_653.s5726)).even, ((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_654.yxyxzzzw)).s12)).yyyxxyyx, ((VECTOR(int16_t, 4))(l_655.sadc5)).yxzzzywy, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(p_712->g_656.wwwyyxyx))))))).s77, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_657.s5e06)).even))))), 0x63F1L, 0x06B0L)).w, (((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(p_712->g_658.s7730)).yxzwxyzyzzxwzzyw)).s49, ((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(p_712->g_659.ywwwzwxx)).s5211310175006233)).even, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 2))((-1L), 1L)).yyyx, ((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 4))(l_660.yyxy)), (int8_t)(((((safe_mod_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u(((0xEA583AE8425B4129L && (safe_div_func_uint8_t_u_u(p_23, ((VECTOR(int8_t, 16))((((l_618.s4 ^ (&l_620 == &l_648)) & ((safe_add_func_uint16_t_u_u((((((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(l_669.sf2f7cca771afe874)).odd)).s61, ((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),VECTOR(uint64_t, 4),((VECTOR(uint64_t, 4))((safe_sub_func_uint8_t_u_u((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(l_672.yxyy)).xzzxzxwzxwwwwwww)).s3 ^ p_24), ((VECTOR(int8_t, 16))(l_673.xywyxyxywwyyywxz)).s3)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0x9847A1B2307A2665L, 0UL)).yxyx)), ((VECTOR(uint64_t, 4))(p_712->g_674.s7525)), ((!((VECTOR(int16_t, 16))(l_675.se1917950dddb33ef)).sa) < (((((VECTOR(uint64_t, 4))(l_676.xyxx)).y > (l_676.x > (((safe_unary_minus_func_int64_t_s(p_712->g_174)) == p_24) > p_712->g_145))) < l_646[7][3][2]) < 7UL)), ((VECTOR(uint64_t, 4))(18446744073709551614UL)), 0UL, 18446744073709551615UL, 0x7A24C907C31321D1L)).s3fab)))).lo)).yyxyxyxy)), ((VECTOR(uint64_t, 8))(0xFF91F42424C9D127L))))).s70)), 18446744073709551615UL)), ((VECTOR(uint64_t, 4))(0UL)), ((VECTOR(uint64_t, 4))(0x9C10BCA046596674L))))).odd))).hi , p_712->g_678) , l_654.w) ^ p_712->g_11[5][5]), GROUP_DIVERGE(1, 1))) ^ p_712->g_85)) == 0x512D639A81B63BC1L), (-2L), ((VECTOR(int8_t, 4))(0x68L)), ((VECTOR(int8_t, 2))(0x64L)), ((VECTOR(int8_t, 2))(0x03L)), ((VECTOR(int8_t, 4))(0x64L)), 5L, 0L)).sb))) || p_712->g_11[3][3]), 3)) , p_712->g_284.x), p_24)) > 0x5CD6CACEL) , p_712->g_674.s1) || 0UL) > l_655.sb)))).xzwwzwxx, (int8_t)0x6EL))).lo))).wyyzzzyyyxyzywwx)).s96)).xxyxyxxx))).s41))).even | 0x7CL)))), p_712->g_674.s0));
                l_648 ^= (safe_div_func_int64_t_s_s((safe_mod_func_int16_t_s_s((l_694 = ((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s(((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(2UL, 18446744073709551606UL, ((VECTOR(uint64_t, 2))(0xA404450F81D0A1FFL, 18446744073709551613UL)), ((VECTOR(uint64_t, 8))(hadd(((VECTOR(uint64_t, 8))(mad_hi(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((void*)0 == p_22), 0x459FCB552B45F9CBL, 0x13B139680C1CD1C1L, 0xC5B8C8AE28749576L)).wxzyywxxzyxwzxwy)).hi, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(max(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 16))(p_712->g_689.wxyyzwzyywwwzzwx)), ((VECTOR(uint64_t, 4))(sub_sat(((VECTOR(uint64_t, 4))(0x83059A632966F503L, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 8))(abs(((VECTOR(uint64_t, 16))(safe_clamp_func(VECTOR(uint64_t, 16),VECTOR(uint64_t, 16),((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(0x645CA077DF1BE7E3L, 0xCE44F7A02279B2AEL)).xxxyxyxx)).s42)))))).xyxxyxxxxyxxyyyy, ((VECTOR(uint64_t, 2))(l_690.sb4)).xxyyyyyxxyyyyyyy, ((VECTOR(uint64_t, 2))(18446744073709551608UL, 0x2653CF854FC16CD1L)).xxyxyxxyyxxxyxxx))).odd))).lo, ((VECTOR(uint64_t, 2))(6UL, 0xEFB053B15259EA23L)).yxxx))).odd)), 7UL)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(p_712->g_691.s6620))))))).zxwxzxxxwzzxywww))).hi)).lo, (uint64_t)(((l_646[4][1][0] && (4294967295UL > (safe_mod_func_int8_t_s_s(l_660.w, p_712->g_comm_values[p_712->tid])))) < 0x0AL) ^ p_23)))).xxzxzwzyxxwwxywz)).hi, ((VECTOR(uint64_t, 8))(0UL))))), ((VECTOR(uint64_t, 8))(18446744073709551614UL))))), ((VECTOR(uint64_t, 4))(9UL)))).s84)).odd, p_712->g_462.y)) >= 65534UL))), 0L)) <= p_712->g_658.s6)), p_24)), l_672.y));
            }
            return (*p_22);
        }
        (*p_22) = &l_620;
    }
    --l_698;
    (*l_695) |= p_24;
    return l_701;
}


/* ------------------------------------------ */
/* 
 * reads : p_712->g_85 p_712->g_comm_values
 * writes: p_712->g_85
 */
uint8_t  func_29(int32_t * p_30, int32_t * p_31, struct S0 * p_712)
{ /* block id: 223 */
    VECTOR(uint32_t, 16) l_451 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x4EBADC9EL), 0x4EBADC9EL), 0x4EBADC9EL, 4294967295UL, 0x4EBADC9EL, (VECTOR(uint32_t, 2))(4294967295UL, 0x4EBADC9EL), (VECTOR(uint32_t, 2))(4294967295UL, 0x4EBADC9EL), 4294967295UL, 0x4EBADC9EL, 4294967295UL, 0x4EBADC9EL);
    int i, j;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_712->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 56)), permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(l_451.s0f57)).z, 10))][(safe_mod_func_uint32_t_u_u(p_712->tid, 56))]));
    for (p_712->g_85 = 20; (p_712->g_85 >= (-11)); p_712->g_85 = safe_sub_func_int64_t_s_s(p_712->g_85, 7))
    { /* block id: 229 */
        uint32_t l_454 = 0xD7020935L;
        return l_454;
    }
    return p_712->g_comm_values[p_712->tid];
}


/* ------------------------------------------ */
/* 
 * reads : p_712->g_43 p_712->g_46 p_712->g_85 p_712->g_11 p_712->g_102 p_712->g_133 p_712->g_12 p_712->g_148 p_712->g_49 p_712->g_95 p_712->g_217 p_712->l_comm_values p_712->g_174 p_712->g_120 p_712->g_145 p_712->g_281 p_712->g_284 p_712->g_289
 * writes: p_712->g_43 p_712->g_11 p_712->g_49 p_712->g_85 p_712->g_95 p_712->g_120 p_712->g_102 p_712->g_145 p_712->g_148 p_712->g_133 p_712->g_174 p_712->g_281
 */
int32_t * func_32(int32_t ** p_33, struct S0 * p_712)
{ /* block id: 11 */
    VECTOR(uint8_t, 2) l_66 = (VECTOR(uint8_t, 2))(0x95L, 0x13L);
    VECTOR(uint8_t, 8) l_68 = (VECTOR(uint8_t, 8))(0xB4L, (VECTOR(uint8_t, 4))(0xB4L, (VECTOR(uint8_t, 2))(0xB4L, 0x59L), 0x59L), 0x59L, 0xB4L, 0x59L);
    VECTOR(uint8_t, 16) l_70 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL), 255UL, 255UL, 255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL, 255UL, 255UL, 255UL);
    int32_t l_118 = 0L;
    int32_t l_146 = 0x332266F0L;
    int8_t *l_154 = &p_712->g_85;
    int8_t *l_155 = (void*)0;
    int8_t *l_156 = &p_712->g_102;
    VECTOR(uint8_t, 4) l_157 = (VECTOR(uint8_t, 4))(0xE2L, (VECTOR(uint8_t, 2))(0xE2L, 4UL), 4UL);
    uint8_t *l_168 = (void*)0;
    uint8_t *l_169 = (void*)0;
    uint8_t *l_170 = (void*)0;
    uint8_t *l_171 = (void*)0;
    uint8_t *l_172 = (void*)0;
    uint8_t *l_173[4];
    int32_t l_175[4];
    uint32_t l_176[9] = {0x0A01A805L,0x0A01A805L,0x0A01A805L,0x0A01A805L,0x0A01A805L,0x0A01A805L,0x0A01A805L,0x0A01A805L,0x0A01A805L};
    int32_t *l_186 = &p_712->g_11[3][4];
    int64_t l_209 = 0x7646124FE5F2F444L;
    uint16_t *l_222 = &p_712->g_120;
    VECTOR(int8_t, 16) l_226 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 4L), 4L), 4L, 1L, 4L, (VECTOR(int8_t, 2))(1L, 4L), (VECTOR(int8_t, 2))(1L, 4L), 1L, 4L, 1L, 4L);
    VECTOR(int8_t, 8) l_228 = (VECTOR(int8_t, 8))(0x38L, (VECTOR(int8_t, 4))(0x38L, (VECTOR(int8_t, 2))(0x38L, 0L), 0L), 0L, 0x38L, 0L);
    uint32_t l_229 = 4294967295UL;
    uint64_t l_253 = 18446744073709551615UL;
    VECTOR(int32_t, 2) l_268 = (VECTOR(int32_t, 2))(2L, (-4L));
    int16_t l_287 = 2L;
    uint16_t **l_288 = (void*)0;
    uint16_t l_443 = 1UL;
    int32_t *l_446[4] = {&p_712->g_49,&p_712->g_49,&p_712->g_49,&p_712->g_49};
    int32_t l_447 = 0x4AD6FE03L;
    uint32_t l_448[8] = {9UL,9UL,9UL,9UL,9UL,9UL,9UL,9UL};
    int i;
    for (i = 0; i < 4; i++)
        l_173[i] = (void*)0;
    for (i = 0; i < 4; i++)
        l_175[i] = 0x2E1592F4L;
    for (p_712->g_43[0][2][1] = (-6); (p_712->g_43[0][2][1] != (-28)); p_712->g_43[0][2][1] = safe_sub_func_int16_t_s_s(p_712->g_43[0][2][1], 2))
    { /* block id: 14 */
        int32_t *l_48 = &p_712->g_11[2][1];
        uint32_t l_52[6];
        VECTOR(uint8_t, 4) l_69 = (VECTOR(uint8_t, 4))(0xD8L, (VECTOR(uint8_t, 2))(0xD8L, 0xA5L), 0xA5L);
        int8_t *l_116 = &p_712->g_102;
        int32_t **l_150 = &p_712->g_134;
        int i;
        for (i = 0; i < 6; i++)
            l_52[i] = 1UL;
        (*l_48) = (p_33 == p_712->g_46);
        for (p_712->g_49 = 0; (p_712->g_49 > (-24)); --p_712->g_49)
        { /* block id: 18 */
            VECTOR(uint8_t, 2) l_67 = (VECTOR(uint8_t, 2))(0xAFL, 255UL);
            VECTOR(uint8_t, 16) l_77 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint8_t, 2))(1UL, 0UL), (VECTOR(uint8_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL);
            int32_t l_80 = 1L;
            int8_t *l_83 = (void*)0;
            int8_t *l_84[8][10][3] = {{{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85}},{{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85}},{{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85}},{{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85}},{{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85}},{{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85}},{{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85}},{{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85},{&p_712->g_85,&p_712->g_85,&p_712->g_85}}};
            int i, j, k;
            if (l_52[0])
                break;
            (*p_33) = func_53(&p_712->g_11[4][2], (p_712->g_85 ^= (((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 4))(func_60((((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(248UL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(0x07L, 255UL, ((VECTOR(uint8_t, 4))(mul_hi(((VECTOR(uint8_t, 2))(l_66.xy)).yyyy, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 8))(l_67.yxyxxxyx)).s2173153317062632, ((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 2))(0UL, 1UL)).yyxy, ((VECTOR(uint8_t, 16))(max(((VECTOR(uint8_t, 16))(l_68.s3324321673312200)), ((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 2))(0xCCL, 0x67L)).xxyx, ((VECTOR(uint8_t, 16))(8UL, 0xC2L, 0x08L, ((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 2))(l_69.yw)).xyxy, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0UL, 0UL)).yyxxyyyyxyxyyyxy)).s4cf7, ((VECTOR(uint8_t, 4))(l_70.s9da2))))), (*l_48), ((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(FAKE_DIVERGE(p_712->local_0_offset, get_local_id(0), 10), ((void*)0 == &l_48))) | p_712->g_12.s3), 10)), 10)) < l_70.s5), 0UL, 0UL)).odd))), 246UL, 0x47L, l_67.x, 249UL, 0x68L, 0xEEL, ((VECTOR(uint8_t, 2))(abs(((VECTOR(uint8_t, 4))(l_77.s9947)).odd))), 0xE5L)).sb049))).xwyxzyyyzzzywyzw))).s101d))).yyxwyxzwzxxzxyyz))))).s587d))), 8UL, 0UL)).odd)).z, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 2))(0x16L, 0xBDL)).xyyxxyxxxyyyxyxy, ((VECTOR(uint8_t, 16))((*l_48), (safe_rshift_func_int8_t_s_s(l_67.y, l_66.x)), ((VECTOR(uint8_t, 2))(1UL)), 8UL, l_80, FAKE_DIVERGE(p_712->group_0_offset, get_group_id(0), 10), 4UL, 0xD0L, 6UL, 0xDBL, 0UL, p_712->g_43[0][2][2], 8UL, 0UL, 0xCEL))))).sd5)), 1UL, 0x2FL, 5UL, 249UL)).s1, l_70.s9)) == l_68.s2) >= 0x8FB872A0FD7A8D5DL), &l_80, l_77.s0, p_712), ((VECTOR(int8_t, 2))((-8L))), (-1L))).y, l_66.x)) | l_77.sc) != 0x3FA0D08AL)), p_712->g_11[4][2], l_77.s6, p_712);
            for (p_712->g_95 = 0; (p_712->g_95 <= 28); p_712->g_95++)
            { /* block id: 37 */
                uint32_t l_115[1][10][8] = {{{4294967295UL,4294967295UL,7UL,0x81FCDE26L,0x0C8C66A0L,0x81FCDE26L,7UL,4294967295UL},{4294967295UL,4294967295UL,7UL,0x81FCDE26L,0x0C8C66A0L,0x81FCDE26L,7UL,4294967295UL},{4294967295UL,4294967295UL,7UL,0x81FCDE26L,0x0C8C66A0L,0x81FCDE26L,7UL,4294967295UL},{4294967295UL,4294967295UL,7UL,0x81FCDE26L,0x0C8C66A0L,0x81FCDE26L,7UL,4294967295UL},{4294967295UL,4294967295UL,7UL,0x81FCDE26L,0x0C8C66A0L,0x81FCDE26L,7UL,4294967295UL},{4294967295UL,4294967295UL,7UL,0x81FCDE26L,0x0C8C66A0L,0x81FCDE26L,7UL,4294967295UL},{4294967295UL,4294967295UL,7UL,0x81FCDE26L,0x0C8C66A0L,0x81FCDE26L,7UL,4294967295UL},{4294967295UL,4294967295UL,7UL,0x81FCDE26L,0x0C8C66A0L,0x81FCDE26L,7UL,4294967295UL},{4294967295UL,4294967295UL,7UL,0x81FCDE26L,0x0C8C66A0L,0x81FCDE26L,7UL,4294967295UL},{4294967295UL,4294967295UL,7UL,0x81FCDE26L,0x0C8C66A0L,0x81FCDE26L,7UL,4294967295UL}}};
                uint16_t *l_117 = (void*)0;
                uint16_t *l_119 = &p_712->g_120;
                VECTOR(uint16_t, 16) l_124 = (VECTOR(uint16_t, 16))(3UL, (VECTOR(uint16_t, 4))(3UL, (VECTOR(uint16_t, 2))(3UL, 0x05B5L), 0x05B5L), 0x05B5L, 3UL, 0x05B5L, (VECTOR(uint16_t, 2))(3UL, 0x05B5L), (VECTOR(uint16_t, 2))(3UL, 0x05B5L), 3UL, 0x05B5L, 3UL, 0x05B5L);
                int i, j, k;
                l_124.s4 |= (((safe_lshift_func_uint16_t_u_u(((((*l_48) | l_80) ^ (((safe_div_func_int8_t_s_s(l_115[0][6][5], l_115[0][6][5])) , &p_712->g_85) == (l_116 = &p_712->g_85))) ^ (((*l_119) = (l_118 ^= 0UL)) || l_68.s2)), (safe_mul_func_uint16_t_u_u(0xA626L, 1L)))) >= (**p_33)) & l_115[0][6][5]);
                (*p_33) = &p_712->g_43[0][5][1];
            }
        }
        for (p_712->g_102 = 22; (p_712->g_102 <= 1); p_712->g_102 = safe_sub_func_uint8_t_u_u(p_712->g_102, 8))
        { /* block id: 47 */
            uint32_t *l_143 = (void*)0;
            uint32_t *l_144 = &p_712->g_145;
            int32_t ***l_149 = &p_712->g_133[1][0][0];
            int32_t l_151 = 0x14898853L;
            l_151 ^= (safe_rshift_func_uint8_t_u_s((p_712->g_11[4][2] != (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(1UL, 7)), ((l_150 = ((*l_149) = func_34(p_712->g_133[1][0][3], (p_712->g_148 &= (safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s(0x01L, (safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u(GROUP_DIVERGE(1, 1), (l_68.s1 & (((*l_144) = 0xD2DB2C63L) >= (l_118 != (l_146 = (-7L))))))), (safe_unary_minus_func_uint16_t_u((p_712->g_12.s3 > FAKE_DIVERGE(p_712->global_1_offset, get_global_id(1), 10)))))))), l_66.x))), p_712))) != &p_712->g_134)))), 0));
        }
    }
    if (((safe_rshift_func_int8_t_s_u(((*l_156) ^= ((*l_154) = (0x022EBED496A5D4AFL & 0x4DF7A928B098A2B6L))), ((VECTOR(uint8_t, 8))(l_157.zwzwzzyy)).s3)) > (((safe_sub_func_int32_t_s_s((l_118 |= 0x05D18C29L), ((safe_div_func_uint16_t_u_u(0xB69BL, l_66.y)) && ((safe_sub_func_uint64_t_u_u(((0xAD3AFEE9L & ((VECTOR(int32_t, 2))(0x4112FE61L, 0x3435A66DL)).hi) , (safe_rshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(2L, l_70.s3)), (l_176[4]--)))), (((l_157.z > l_175[1]) , l_68.s4) && l_68.s1))) < 0x8A2BD3B2F7ADD78BL)))) > l_70.s9) & l_175[1])))
    { /* block id: 60 */
        uint16_t *l_181 = &p_712->g_120;
        uint16_t **l_180 = &l_181;
        uint16_t ***l_179 = &l_180;
        (*l_179) = (void*)0;
        for (p_712->g_49 = 25; (p_712->g_49 > 17); p_712->g_49 = safe_sub_func_uint16_t_u_u(p_712->g_49, 4))
        { /* block id: 64 */
            uint64_t l_189 = 2UL;
            for (p_712->g_174 = 0; (p_712->g_174 > 29); p_712->g_174++)
            { /* block id: 67 */
                int32_t *l_187 = &l_146;
                int32_t *l_188[8][9] = {{&p_712->g_11[3][2],&p_712->g_43[0][2][1],(void*)0,&p_712->g_11[4][2],(void*)0,&p_712->g_43[0][2][1],&p_712->g_11[3][2],&p_712->g_11[4][5],(void*)0},{&p_712->g_11[3][2],&p_712->g_43[0][2][1],(void*)0,&p_712->g_11[4][2],(void*)0,&p_712->g_43[0][2][1],&p_712->g_11[3][2],&p_712->g_11[4][5],(void*)0},{&p_712->g_11[3][2],&p_712->g_43[0][2][1],(void*)0,&p_712->g_11[4][2],(void*)0,&p_712->g_43[0][2][1],&p_712->g_11[3][2],&p_712->g_11[4][5],(void*)0},{&p_712->g_11[3][2],&p_712->g_43[0][2][1],(void*)0,&p_712->g_11[4][2],(void*)0,&p_712->g_43[0][2][1],&p_712->g_11[3][2],&p_712->g_11[4][5],(void*)0},{&p_712->g_11[3][2],&p_712->g_43[0][2][1],(void*)0,&p_712->g_11[4][2],(void*)0,&p_712->g_43[0][2][1],&p_712->g_11[3][2],&p_712->g_11[4][5],(void*)0},{&p_712->g_11[3][2],&p_712->g_43[0][2][1],(void*)0,&p_712->g_11[4][2],(void*)0,&p_712->g_43[0][2][1],&p_712->g_11[3][2],&p_712->g_11[4][5],(void*)0},{&p_712->g_11[3][2],&p_712->g_43[0][2][1],(void*)0,&p_712->g_11[4][2],(void*)0,&p_712->g_43[0][2][1],&p_712->g_11[3][2],&p_712->g_11[4][5],(void*)0},{&p_712->g_11[3][2],&p_712->g_43[0][2][1],(void*)0,&p_712->g_11[4][2],(void*)0,&p_712->g_43[0][2][1],&p_712->g_11[3][2],&p_712->g_11[4][5],(void*)0}};
                int i, j;
                (*p_33) = (l_186 = (*p_33));
                ++l_189;
            }
        }
    }
    else
    { /* block id: 73 */
        int32_t l_195 = 0x03A40500L;
        VECTOR(int32_t, 16) l_201 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int32_t, 2))(1L, 0L), (VECTOR(int32_t, 2))(1L, 0L), 1L, 0L, 1L, 0L);
        VECTOR(int16_t, 8) l_223 = (VECTOR(int16_t, 8))(0x531AL, (VECTOR(int16_t, 4))(0x531AL, (VECTOR(int16_t, 2))(0x531AL, 0x633FL), 0x633FL), 0x633FL, 0x531AL, 0x633FL);
        uint16_t **l_225 = &l_222;
        uint16_t ***l_224 = &l_225;
        VECTOR(int8_t, 16) l_227 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x13L), 0x13L), 0x13L, 0L, 0x13L, (VECTOR(int8_t, 2))(0L, 0x13L), (VECTOR(int8_t, 2))(0L, 0x13L), 0L, 0x13L, 0L, 0x13L);
        int i;
        for (p_712->g_95 = (-28); (p_712->g_95 < (-21)); p_712->g_95++)
        { /* block id: 76 */
            int32_t *l_194 = &p_712->g_95;
            int32_t l_202[3];
            int32_t *l_203 = &l_118;
            int32_t *l_204 = &l_175[3];
            int32_t *l_205 = &l_202[2];
            int32_t *l_206 = &l_175[1];
            int32_t *l_207 = &l_175[1];
            int32_t *l_208[1][9][2] = {{{&l_202[2],&p_712->g_95},{&l_202[2],&p_712->g_95},{&l_202[2],&p_712->g_95},{&l_202[2],&p_712->g_95},{&l_202[2],&p_712->g_95},{&l_202[2],&p_712->g_95},{&l_202[2],&p_712->g_95},{&l_202[2],&p_712->g_95},{&l_202[2],&p_712->g_95}}};
            uint32_t l_210 = 0UL;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_202[i] = 0L;
            (*p_33) = l_194;
            l_195 = 0x1DA3FA16L;
            for (p_712->g_148 = 27; (p_712->g_148 != (-29)); p_712->g_148--)
            { /* block id: 81 */
                VECTOR(int32_t, 8) l_200 = (VECTOR(int32_t, 8))(0x793753C3L, (VECTOR(int32_t, 4))(0x793753C3L, (VECTOR(int32_t, 2))(0x793753C3L, (-7L)), (-7L)), (-7L), 0x793753C3L, (-7L));
                int i;
                for (l_146 = (-30); (l_146 != 5); l_146++)
                { /* block id: 84 */
                    return (*p_33);
                }
                l_202[2] = ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(l_200.s1175325600123676)), ((VECTOR(int32_t, 2))(0x447B9E94L, 3L)).xyxyxyyyxyxxyxyx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x5F3A4FFDL, 0x26D94D40L)), 0x3DB423AEL, (-7L))).zzyzwyzwwwzzxxwy))).hi, ((VECTOR(int32_t, 8))(l_201.s4bcf8604))))).s4;
            }
            l_210++;
        }
        if (((((safe_div_func_uint8_t_u_u((((safe_sub_func_int16_t_s_s(p_712->g_12.s7, (((*l_186) = (*l_186)) >= ((((((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(p_712->g_217.s1670343123236746)).s5c)), (int16_t)(((safe_add_func_uint32_t_u_u(l_195, (safe_mul_func_int16_t_s_s(((void*)0 == l_222), ((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_223.s56)).yxxxxyyy)).s44)).yxxyxyxxxyxxxyyy, (int16_t)((void*)0 != l_224)))).sa)))) & ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),VECTOR(int8_t, 4),((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 2))(l_226.s1c)), ((VECTOR(int8_t, 2))(1L, (-1L)))))).yyxyxxyxxyxyyxxx, ((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))((-1L), ((VECTOR(int8_t, 8))(l_227.s823506e0)), ((VECTOR(int8_t, 2))(l_228.s70)), (l_223.s3 <= (l_223.s3 && l_223.s4)), 0x1AL, p_712->l_comm_values[(safe_mod_func_uint32_t_u_u(p_712->tid, 56))], 0x3DL, 0x2EL)).even)).s46, (int8_t)p_712->g_174))).yxxx)).yywxyxyz, ((VECTOR(int8_t, 8))(0x6BL))))), (int8_t)l_227.s8))).s0473042743541637))))).even, ((VECTOR(int8_t, 8))(5L))))).s04, ((VECTOR(int8_t, 2))(0x46L)), ((VECTOR(int8_t, 2))(5L))))).xxxx, ((VECTOR(int8_t, 4))(0x12L)), ((VECTOR(int8_t, 4))(0x69L))))).wyyxzyxy)).s1237262705012201, ((VECTOR(int8_t, 16))(0x01L))))).sbbb9, ((VECTOR(int8_t, 4))(0x0AL)), ((VECTOR(int8_t, 4))((-1L)))))).zwzxwyxywzxwywxz, ((VECTOR(uint8_t, 16))(5UL))))))).sc) , l_223.s5), (int16_t)p_712->g_148))).yxyy, ((VECTOR(int16_t, 4))(1L))))).z < l_201.s2) , l_223.s7) , (-1L)) >= p_712->g_102)))) || p_712->g_12.s5) , l_201.s4), l_229)) > 0x4478F596772FE90FL) , (*l_186)) > p_712->g_148))
        { /* block id: 92 */
            uint32_t l_236[8] = {1UL,0xBA7860AEL,1UL,1UL,0xBA7860AEL,1UL,1UL,0xBA7860AEL};
            int32_t l_241 = 0x4B670619L;
            int i;
            for (p_712->g_120 = 0; (p_712->g_120 < 16); p_712->g_120++)
            { /* block id: 95 */
                int32_t *l_232 = &l_118;
                int32_t *l_233 = &l_146;
                int32_t *l_234 = &l_118;
                int32_t *l_235[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_235[i] = (void*)0;
                l_236[5]++;
                for (p_712->g_85 = 0; (p_712->g_85 <= 4); ++p_712->g_85)
                { /* block id: 99 */
                    uint32_t l_242 = 4294967295UL;
                    l_242++;
                }
                (*p_33) = (*p_33);
                return (*p_33);
            }
            (*l_186) = 1L;
        }
        else
        { /* block id: 106 */
            (*l_186) = (l_222 != &p_712->g_120);
            for (p_712->g_120 = 17; (p_712->g_120 != 17); p_712->g_120 = safe_add_func_uint64_t_u_u(p_712->g_120, 7))
            { /* block id: 110 */
                uint64_t l_247 = 18446744073709551610UL;
                if (l_247)
                    break;
                if ((atomic_inc(&p_712->g_atomic_input[26 * get_linear_group_id() + 21]) == 2))
                { /* block id: 113 */
                    uint16_t l_248 = 0x013CL;
                    --l_248;
                    unsigned int result = 0;
                    result += l_248;
                    atomic_add(&p_712->g_special_values[26 * get_linear_group_id() + 21], result);
                }
                else
                { /* block id: 115 */
                    (1 + 1);
                }
            }
        }
    }
    if ((l_118 &= (!(safe_div_func_uint16_t_u_u((0x7FC8L || l_253), l_229)))))
    { /* block id: 122 */
        int32_t l_254 = 0x1BA90629L;
        int16_t *l_259 = (void*)0;
        int16_t *l_260 = (void*)0;
        int16_t *l_261[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint16_t **l_269 = &l_222;
        int32_t l_272 = 1L;
        uint16_t *l_291 = &p_712->g_120;
        int32_t *l_292 = (void*)0;
        int32_t l_293[6][2] = {{(-4L),0x50B88C76L},{(-4L),0x50B88C76L},{(-4L),0x50B88C76L},{(-4L),0x50B88C76L},{(-4L),0x50B88C76L},{(-4L),0x50B88C76L}};
        int i, j;
        (*p_33) = (((l_254 != (-4L)) & (((p_712->g_145 , (~(((p_712->g_217.s3 || l_254) , (safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((l_175[1] |= l_254), (l_254 | (((safe_mul_func_int16_t_s_s((safe_div_func_int64_t_s_s((0UL == ((safe_lshift_func_int8_t_s_s((l_254 < 0x4B7573974BA25DFFL), 7)) == l_254)), p_712->g_148)), l_253)) , 0x0A921B74L) && 0x6805C89FL)))), 1UL))) ^ FAKE_DIVERGE(p_712->global_0_offset, get_global_id(0), 10)))) != l_254) >= l_254)) , (*p_33));
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_712->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 56)), permutations[(safe_mod_func_uint32_t_u_u((((((VECTOR(int32_t, 16))(l_268.xyxyyyxxyxxxyyyx)).s8 >= (((*l_269) = &p_712->g_120) != &p_712->g_120)) , ((((safe_sub_func_uint64_t_u_u(p_712->g_12.sc, l_254)) , (l_254 < (l_254 >= (l_272 = l_254)))) | ((VECTOR(int8_t, 8))(0x37L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))((((l_254 | (((*l_222)--) ^ ((safe_rshift_func_int8_t_s_u(p_712->g_11[4][2], 6)) && 0xE5L))) <= (-1L)) , l_66.x), ((VECTOR(int8_t, 2))(0x48L)), ((VECTOR(int8_t, 2))((-1L))), l_254, 0x62L, 0x76L)).s20)), (-8L), ((VECTOR(int8_t, 4))(3L)))).s1) && 1UL)) && p_712->g_49), 10))][(safe_mod_func_uint32_t_u_u(p_712->tid, 56))]));
        l_293[5][0] |= (safe_mul_func_int16_t_s_s(l_254, (l_70.sc , (((*l_291) = (GROUP_DIVERGE(1, 1) < (((safe_div_func_int32_t_s_s(((p_712->g_281 |= GROUP_DIVERGE(1, 1)) , (safe_div_func_int64_t_s_s(p_712->g_145, ((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 16))(p_712->g_284.yxyxyyxyyxxxxyxy)).s08a9, ((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x66966006FFA6133FL, 5L)), (-5L), (-1L))).lo, (int64_t)((l_254 < ((l_176[5] == (((((l_175[2] || 0x45D4DA65A2ABE865L) ^ ((l_254 , (!p_712->g_281)) && l_287)) , l_288) == p_712->g_289) | l_254)) >= 18446744073709551615UL)) , l_254)))).yxyx))), ((VECTOR(int64_t, 4))(0x7126144F1BE7099CL))))).x))), l_176[1])) >= 65535UL) & GROUP_DIVERGE(1, 1)))) == l_287))));
        if ((atomic_inc(&p_712->l_atomic_input[16]) == 6))
        { /* block id: 135 */
            int32_t l_294 = (-1L);
            int32_t l_310[10][2] = {{0x0EC19689L,0x0EC19689L},{0x0EC19689L,0x0EC19689L},{0x0EC19689L,0x0EC19689L},{0x0EC19689L,0x0EC19689L},{0x0EC19689L,0x0EC19689L},{0x0EC19689L,0x0EC19689L},{0x0EC19689L,0x0EC19689L},{0x0EC19689L,0x0EC19689L},{0x0EC19689L,0x0EC19689L},{0x0EC19689L,0x0EC19689L}};
            VECTOR(int32_t, 8) l_311 = (VECTOR(int32_t, 8))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, (-1L)), (-1L)), (-1L), 7L, (-1L));
            uint8_t l_312 = 4UL;
            uint16_t l_313 = 2UL;
            int16_t l_314 = (-9L);
            int i, j;
            for (l_294 = (-23); (l_294 == (-22)); l_294++)
            { /* block id: 138 */
                uint64_t l_297 = 18446744073709551609UL;
                int32_t l_299[10] = {0x5D5A3558L,7L,0x4DE2D0A2L,7L,0x5D5A3558L,0x5D5A3558L,7L,0x4DE2D0A2L,7L,0x5D5A3558L};
                int32_t *l_298 = &l_299[9];
                int32_t *l_300 = &l_299[9];
                int i;
                l_300 = ((l_297 = 0x158E436BL) , l_298);
                for (l_299[3] = 16; (l_299[3] >= (-5)); --l_299[3])
                { /* block id: 143 */
                    uint16_t l_303[2][3][3] = {{{0xC69FL,65535UL,65535UL},{0xC69FL,65535UL,65535UL},{0xC69FL,65535UL,65535UL}},{{0xC69FL,65535UL,65535UL},{0xC69FL,65535UL,65535UL},{0xC69FL,65535UL,65535UL}}};
                    uint32_t l_304 = 5UL;
                    uint32_t l_305 = 0x79F4F3C0L;
                    uint32_t l_306 = 9UL;
                    VECTOR(int32_t, 16) l_307 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 4L), 4L), 4L, (-1L), 4L, (VECTOR(int32_t, 2))((-1L), 4L), (VECTOR(int32_t, 2))((-1L), 4L), (-1L), 4L, (-1L), 4L);
                    int64_t l_308 = (-7L);
                    int32_t l_309 = 0x5E3DBCB7L;
                    int i, j, k;
                    l_305 &= (l_304 |= l_303[0][2][1]);
                    l_309 |= ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))((-1L), l_306, 2L, 0x6AC1E9BCL, ((VECTOR(int32_t, 8))(l_307.sfb2199a3)), 0x0C2398D0L, 0x0307DE22L, 0L, 0x2250C0B7L)).scc, (int32_t)l_308))).odd;
                }
            }
            l_313 = (l_310[7][1] , (l_312 = ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(0x31F7A6FDL, (-9L))), ((VECTOR(int32_t, 2))(l_311.s66))))).hi));
            if (l_314)
            { /* block id: 151 */
                uint32_t l_315 = 3UL;
                uint32_t l_316 = 0xD283267BL;
                int32_t l_317 = 0x503FEBBAL;
                int32_t l_318 = 0L;
                VECTOR(int8_t, 8) l_319 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x7AL), 0x7AL), 0x7AL, 1L, 0x7AL);
                int32_t l_320 = 0x191EE254L;
                uint16_t l_321[8][4][4] = {{{0xD71FL,65535UL,65535UL,0xF411L},{0xD71FL,65535UL,65535UL,0xF411L},{0xD71FL,65535UL,65535UL,0xF411L},{0xD71FL,65535UL,65535UL,0xF411L}},{{0xD71FL,65535UL,65535UL,0xF411L},{0xD71FL,65535UL,65535UL,0xF411L},{0xD71FL,65535UL,65535UL,0xF411L},{0xD71FL,65535UL,65535UL,0xF411L}},{{0xD71FL,65535UL,65535UL,0xF411L},{0xD71FL,65535UL,65535UL,0xF411L},{0xD71FL,65535UL,65535UL,0xF411L},{0xD71FL,65535UL,65535UL,0xF411L}},{{0xD71FL,65535UL,65535UL,0xF411L},{0xD71FL,65535UL,65535UL,0xF411L},{0xD71FL,65535UL,65535UL,0xF411L},{0xD71FL,65535UL,65535UL,0xF411L}},{{0xD71FL,65535UL,65535UL,0xF411L},{0xD71FL,65535UL,65535UL,0xF411L},{0xD71FL,65535UL,65535UL,0xF411L},{0xD71FL,65535UL,65535UL,0xF411L}},{{0xD71FL,65535UL,65535UL,0xF411L},{0xD71FL,65535UL,65535UL,0xF411L},{0xD71FL,65535UL,65535UL,0xF411L},{0xD71FL,65535UL,65535UL,0xF411L}},{{0xD71FL,65535UL,65535UL,0xF411L},{0xD71FL,65535UL,65535UL,0xF411L},{0xD71FL,65535UL,65535UL,0xF411L},{0xD71FL,65535UL,65535UL,0xF411L}},{{0xD71FL,65535UL,65535UL,0xF411L},{0xD71FL,65535UL,65535UL,0xF411L},{0xD71FL,65535UL,65535UL,0xF411L},{0xD71FL,65535UL,65535UL,0xF411L}}};
                int i, j, k;
                l_316 = l_315;
                ++l_321[3][0][3];
                for (l_315 = (-1); (l_315 > 46); l_315 = safe_add_func_uint32_t_u_u(l_315, 1))
                { /* block id: 156 */
                    VECTOR(uint64_t, 2) l_326 = (VECTOR(uint64_t, 2))(3UL, 0x7FEDC7FF37F0EED4L);
                    int16_t l_327 = 0x58AEL;
                    uint32_t l_328 = 4294967295UL;
                    uint8_t l_329[1];
                    int16_t l_330 = 0x2E1CL;
                    uint8_t l_331 = 4UL;
                    int64_t l_332 = (-7L);
                    VECTOR(int32_t, 2) l_333 = (VECTOR(int32_t, 2))((-1L), 0x0D8B89E4L);
                    VECTOR(int32_t, 16) l_334 = (VECTOR(int32_t, 16))(0x5BC03FF2L, (VECTOR(int32_t, 4))(0x5BC03FF2L, (VECTOR(int32_t, 2))(0x5BC03FF2L, 0x6C0DB635L), 0x6C0DB635L), 0x6C0DB635L, 0x5BC03FF2L, 0x6C0DB635L, (VECTOR(int32_t, 2))(0x5BC03FF2L, 0x6C0DB635L), (VECTOR(int32_t, 2))(0x5BC03FF2L, 0x6C0DB635L), 0x5BC03FF2L, 0x6C0DB635L, 0x5BC03FF2L, 0x6C0DB635L);
                    VECTOR(int32_t, 2) l_335 = (VECTOR(int32_t, 2))(0x06BB2533L, 0x1422A714L);
                    VECTOR(int32_t, 2) l_336 = (VECTOR(int32_t, 2))(0x51EB783AL, 0x149B3072L);
                    int8_t l_337 = 0x59L;
                    VECTOR(int32_t, 4) l_338 = (VECTOR(int32_t, 4))(0x48672F2DL, (VECTOR(int32_t, 2))(0x48672F2DL, 0x364D628FL), 0x364D628FL);
                    VECTOR(int32_t, 16) l_339 = (VECTOR(int32_t, 16))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), (-4L)), (-4L)), (-4L), (-9L), (-4L), (VECTOR(int32_t, 2))((-9L), (-4L)), (VECTOR(int32_t, 2))((-9L), (-4L)), (-9L), (-4L), (-9L), (-4L));
                    VECTOR(uint64_t, 2) l_340 = (VECTOR(uint64_t, 2))(0xF2AC9A6919BEACE1L, 0x44A095CDC0DCA3F7L);
                    VECTOR(uint64_t, 2) l_341 = (VECTOR(uint64_t, 2))(5UL, 0x9233149599D5FE64L);
                    VECTOR(uint64_t, 8) l_342 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL);
                    int64_t l_343 = 0x2FA93037DA373C34L;
                    VECTOR(uint64_t, 4) l_344 = (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x8EEB6E970AEC4473L), 0x8EEB6E970AEC4473L);
                    uint32_t l_345[5];
                    int32_t l_346 = 1L;
                    VECTOR(int8_t, 16) l_347 = (VECTOR(int8_t, 16))(4L, (VECTOR(int8_t, 4))(4L, (VECTOR(int8_t, 2))(4L, 0x62L), 0x62L), 0x62L, 4L, 0x62L, (VECTOR(int8_t, 2))(4L, 0x62L), (VECTOR(int8_t, 2))(4L, 0x62L), 4L, 0x62L, 4L, 0x62L);
                    VECTOR(uint8_t, 8) l_348 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 5UL), 5UL), 5UL, 255UL, 5UL);
                    int8_t l_349 = 1L;
                    uint16_t l_350[1][6][6] = {{{3UL,0UL,65528UL,0x22D1L,65528UL,0UL},{3UL,0UL,65528UL,0x22D1L,65528UL,0UL},{3UL,0UL,65528UL,0x22D1L,65528UL,0UL},{3UL,0UL,65528UL,0x22D1L,65528UL,0UL},{3UL,0UL,65528UL,0x22D1L,65528UL,0UL},{3UL,0UL,65528UL,0x22D1L,65528UL,0UL}}};
                    int32_t l_351 = 6L;
                    VECTOR(uint8_t, 2) l_415 = (VECTOR(uint8_t, 2))(0x64L, 0x65L);
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_329[i] = 0xA8L;
                    for (i = 0; i < 5; i++)
                        l_345[i] = 0xFBE95BD4L;
                    if ((((VECTOR(uint64_t, 2))(l_326.yy)).lo , (((l_331 |= (l_330 = (l_329[0] = (l_328 = l_327)))) , l_332) , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 2))(0x7970DCF1L, 0x638B6359L)).yxxy, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 2))(l_333.xx)).xxxxxxxyxxxyyxxx, ((VECTOR(int32_t, 8))(l_334.s305607ab)).s3641314275663441))).s25af, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 4))(l_335.yyyx)), ((VECTOR(int32_t, 16))(l_336.yxxxxyyyxxxyyyyy)).s000c)))))))), ((VECTOR(int32_t, 16))((l_294 = l_337), ((VECTOR(int32_t, 4))(0x78F95966L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_338.ywywwzyxzywwyzwz)).sa1)), 9L)), ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_339.s6071ba42)).hi)).hi, ((VECTOR(int32_t, 4))(0x2F08C80EL, (((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 8))(safe_clamp_func(VECTOR(uint64_t, 8),VECTOR(uint64_t, 8),((VECTOR(uint64_t, 2))(18446744073709551613UL, 18446744073709551608UL)).xxyxxyyy, ((VECTOR(uint64_t, 2))(l_340.xx)).xxxyxxyx, ((VECTOR(uint64_t, 4))(l_341.xyxy)).yyxyxxzy))).hi, ((VECTOR(uint64_t, 4))(mad_sat(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),uint64_t,((VECTOR(uint64_t, 4))(l_342.s5001)).even, (uint64_t)l_343, (uint64_t)FAKE_DIVERGE(p_712->group_1_offset, get_group_id(1), 10)))), 18446744073709551610UL, 0x6127FC3194414366L)), ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(0x9E708A6C8209FC49L, 0UL)).xxyxyyxxxyxxyxxx)).sa26e, ((VECTOR(uint64_t, 2))(rhadd(((VECTOR(uint64_t, 4))(l_344.xwyy)).even, ((VECTOR(uint64_t, 2))(0UL, 6UL))))).yxyy)))))).x , l_345[3]), (-1L), 0x014C447DL)).hi))).xxxy, ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(l_346, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),int16_t,((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 8))(l_347.s4f128c0b)).odd, ((VECTOR(uint8_t, 2))(l_348.s46)).yyxy))).ywwxzwwz)), (int16_t)(l_314 ^= (-1L)), (int16_t)((VECTOR(int16_t, 16))(0L, l_349, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x2FB3L, 0x4C63L)), 0x4937L, 0x47B9L)), 0x76C0L, (-2L), ((VECTOR(int16_t, 2))((-9L))), (-1L), 0x073CL, l_350[0][1][0], ((VECTOR(int16_t, 2))(0x2EF1L)), 0L)).sb))).s40)).yxxyxyxx)))).s36)), 0x37E8L, ((VECTOR(int16_t, 8))(0x6070L)), 0x5258L, ((VECTOR(int16_t, 2))((-8L))), 0x6196L)).sc9, ((VECTOR(uint16_t, 2))(0x7E6BL))))).yxyyxyyxxyxxxxyx)).lo, ((VECTOR(int32_t, 8))(1L)), ((VECTOR(int32_t, 8))(6L))))).hi))).lo, ((VECTOR(int32_t, 2))(0x3B062428L))))), l_351, ((VECTOR(int32_t, 4))(0x5C14BB70L)), ((VECTOR(int32_t, 4))((-1L))))).s935e))).zzwzzyxwwwzzzyxx)).sa)))
                    { /* block id: 163 */
                        int32_t l_352 = (-1L);
                        uint64_t l_353 = 0UL;
                        int32_t l_354 = 0x60628450L;
                        int32_t l_355 = (-1L);
                        l_353 &= ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(0x745A3D15L, 0x28D254A1L)).xyxx, ((VECTOR(int32_t, 4))((l_336.x = (l_333.x = l_352)), (-8L), 0x1680911BL, 0L))))).even, ((VECTOR(int32_t, 2))(0L, 0L))))).even;
                        l_355 &= l_354;
                    }
                    else
                    { /* block id: 168 */
                        int32_t l_357[2][7][8] = {{{0x6991E31BL,0x6991E31BL,0x050731F3L,(-1L),1L,0L,0L,(-4L)},{0x6991E31BL,0x6991E31BL,0x050731F3L,(-1L),1L,0L,0L,(-4L)},{0x6991E31BL,0x6991E31BL,0x050731F3L,(-1L),1L,0L,0L,(-4L)},{0x6991E31BL,0x6991E31BL,0x050731F3L,(-1L),1L,0L,0L,(-4L)},{0x6991E31BL,0x6991E31BL,0x050731F3L,(-1L),1L,0L,0L,(-4L)},{0x6991E31BL,0x6991E31BL,0x050731F3L,(-1L),1L,0L,0L,(-4L)},{0x6991E31BL,0x6991E31BL,0x050731F3L,(-1L),1L,0L,0L,(-4L)}},{{0x6991E31BL,0x6991E31BL,0x050731F3L,(-1L),1L,0L,0L,(-4L)},{0x6991E31BL,0x6991E31BL,0x050731F3L,(-1L),1L,0L,0L,(-4L)},{0x6991E31BL,0x6991E31BL,0x050731F3L,(-1L),1L,0L,0L,(-4L)},{0x6991E31BL,0x6991E31BL,0x050731F3L,(-1L),1L,0L,0L,(-4L)},{0x6991E31BL,0x6991E31BL,0x050731F3L,(-1L),1L,0L,0L,(-4L)},{0x6991E31BL,0x6991E31BL,0x050731F3L,(-1L),1L,0L,0L,(-4L)},{0x6991E31BL,0x6991E31BL,0x050731F3L,(-1L),1L,0L,0L,(-4L)}}};
                        int32_t *l_356[7];
                        VECTOR(int32_t, 2) l_358 = (VECTOR(int32_t, 2))(1L, 0x4E674BB3L);
                        VECTOR(int32_t, 8) l_359 = (VECTOR(int32_t, 8))(0x6B158108L, (VECTOR(int32_t, 4))(0x6B158108L, (VECTOR(int32_t, 2))(0x6B158108L, (-3L)), (-3L)), (-3L), 0x6B158108L, (-3L));
                        VECTOR(int32_t, 4) l_360 = (VECTOR(int32_t, 4))(0x34034D93L, (VECTOR(int32_t, 2))(0x34034D93L, 0L), 0L);
                        VECTOR(int32_t, 4) l_361 = (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, (-6L)), (-6L));
                        uint32_t l_362 = 7UL;
                        VECTOR(int32_t, 4) l_363 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x16D049E2L), 0x16D049E2L);
                        int64_t l_364 = 0x1C13F46B8FEBAD05L;
                        VECTOR(int32_t, 2) l_365 = (VECTOR(int32_t, 2))(0x376FA283L, 0x5E1DD3BBL);
                        VECTOR(int32_t, 2) l_366 = (VECTOR(int32_t, 2))((-3L), (-9L));
                        uint8_t l_367 = 0UL;
                        int16_t l_368[9] = {0x52BDL,0x52BDL,0x52BDL,0x52BDL,0x52BDL,0x52BDL,0x52BDL,0x52BDL,0x52BDL};
                        VECTOR(int32_t, 2) l_369 = (VECTOR(int32_t, 2))(3L, 2L);
                        uint32_t l_370[1][2];
                        int64_t l_371[9];
                        int8_t l_372 = 0x3DL;
                        uint32_t l_373[7] = {0x4E4C455EL,0x4E4C455EL,0x4E4C455EL,0x4E4C455EL,0x4E4C455EL,0x4E4C455EL,0x4E4C455EL};
                        uint16_t l_374 = 0x5153L;
                        int8_t l_375 = 6L;
                        int8_t l_376[6] = {1L,1L,1L,1L,1L,1L};
                        int32_t l_377 = 0x414D7540L;
                        uint16_t l_378 = 0xE781L;
                        int32_t l_379[1][8];
                        int32_t l_380 = 1L;
                        uint64_t l_381 = 0x5E5EBDB01948D670L;
                        int16_t l_382 = 0x1493L;
                        int32_t l_383 = 4L;
                        VECTOR(uint64_t, 4) l_384 = (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551610UL), 18446744073709551610UL);
                        VECTOR(int32_t, 4) l_385 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x17A3B3C2L), 0x17A3B3C2L);
                        uint8_t l_386 = 0UL;
                        VECTOR(int32_t, 2) l_387 = (VECTOR(int32_t, 2))(0x708D3701L, (-6L));
                        VECTOR(int32_t, 16) l_388 = (VECTOR(int32_t, 16))(0x412F6FEFL, (VECTOR(int32_t, 4))(0x412F6FEFL, (VECTOR(int32_t, 2))(0x412F6FEFL, 0x3636DAB6L), 0x3636DAB6L), 0x3636DAB6L, 0x412F6FEFL, 0x3636DAB6L, (VECTOR(int32_t, 2))(0x412F6FEFL, 0x3636DAB6L), (VECTOR(int32_t, 2))(0x412F6FEFL, 0x3636DAB6L), 0x412F6FEFL, 0x3636DAB6L, 0x412F6FEFL, 0x3636DAB6L);
                        int8_t l_389 = 0x7DL;
                        VECTOR(int32_t, 8) l_390 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x50EABB96L), 0x50EABB96L), 0x50EABB96L, 1L, 0x50EABB96L);
                        int64_t l_391 = 0x49BECAC79D7E469DL;
                        uint32_t l_392 = 0xF3A89607L;
                        uint32_t l_393 = 0UL;
                        VECTOR(int32_t, 8) l_394 = (VECTOR(int32_t, 8))(0x617F7857L, (VECTOR(int32_t, 4))(0x617F7857L, (VECTOR(int32_t, 2))(0x617F7857L, 0x6621FB47L), 0x6621FB47L), 0x6621FB47L, 0x617F7857L, 0x6621FB47L);
                        VECTOR(int32_t, 8) l_395 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0L), 0L), 0L, 8L, 0L);
                        VECTOR(int32_t, 16) l_396 = (VECTOR(int32_t, 16))(0x60940D73L, (VECTOR(int32_t, 4))(0x60940D73L, (VECTOR(int32_t, 2))(0x60940D73L, 9L), 9L), 9L, 0x60940D73L, 9L, (VECTOR(int32_t, 2))(0x60940D73L, 9L), (VECTOR(int32_t, 2))(0x60940D73L, 9L), 0x60940D73L, 9L, 0x60940D73L, 9L);
                        int32_t l_397 = 0L;
                        uint64_t l_398[6][5] = {{0x50643649243DB43DL,0xBD246F481451BF93L,0x44409F58D2185EA6L,0xBD246F481451BF93L,0x50643649243DB43DL},{0x50643649243DB43DL,0xBD246F481451BF93L,0x44409F58D2185EA6L,0xBD246F481451BF93L,0x50643649243DB43DL},{0x50643649243DB43DL,0xBD246F481451BF93L,0x44409F58D2185EA6L,0xBD246F481451BF93L,0x50643649243DB43DL},{0x50643649243DB43DL,0xBD246F481451BF93L,0x44409F58D2185EA6L,0xBD246F481451BF93L,0x50643649243DB43DL},{0x50643649243DB43DL,0xBD246F481451BF93L,0x44409F58D2185EA6L,0xBD246F481451BF93L,0x50643649243DB43DL},{0x50643649243DB43DL,0xBD246F481451BF93L,0x44409F58D2185EA6L,0xBD246F481451BF93L,0x50643649243DB43DL}};
                        int64_t l_399 = 0x3E11DF7DF3B9AFC7L;
                        int16_t l_400[3];
                        int32_t l_401 = 0x54E1272EL;
                        int16_t l_402 = 0x2510L;
                        int32_t *l_403 = (void*)0;
                        int32_t *l_404 = (void*)0;
                        int i, j, k;
                        for (i = 0; i < 7; i++)
                            l_356[i] = &l_357[1][4][6];
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_370[i][j] = 0xB254B664L;
                        }
                        for (i = 0; i < 9; i++)
                            l_371[i] = 0x449D65889F4348DAL;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 8; j++)
                                l_379[i][j] = 0x6E4EF253L;
                        }
                        for (i = 0; i < 3; i++)
                            l_400[i] = 0x5938L;
                        l_356[3] = l_356[3];
                        l_383 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x7E26C155L, 0x332808B4L)), 1L, 8L)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(l_358.yxyyyxyy)).s46, ((VECTOR(int32_t, 8))(l_359.s52125673)).s40))).xxxxyyyx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 2))(0x4C34F011L, (-1L))).yyxxxxyx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))((l_346 &= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(1L, ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_360.zwzyzxww)).s54)), 0x716FF0CAL, 0x48D66830L))))).yzzzzwzx, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))(l_361.xwxwxxyxywzyzzyw)).s52, (int32_t)l_362))).xxyxxxyx))).s52, ((VECTOR(int32_t, 16))(l_363.wyxwyyyyxxyxxwzy)).s15, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(0x3DD6A2A1L, ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))((l_335.x = (l_375 = (l_364 , (((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_365.xyxyxyyyxyxyxxxy)).even)).s44)).xyxyyxxxyyyxyyyx)))).even, ((VECTOR(int32_t, 8))(l_366.yxyxyxxx)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_367, (l_318 = l_368[0]), 6L, ((VECTOR(int32_t, 2))(l_369.yy)), 0x5DFDD2F7L, (-9L), (l_372 = (l_318 = ((l_331 = (l_370[0][1] , l_371[2])) , (l_310[0][0] |= (l_317 = 7L))))), ((VECTOR(int32_t, 2))(0x6B173DF7L)), 0L, 0x2F0D376EL, l_373[5], 0x063CE1D5L, (-7L), 0x1C52CE6AL)))).odd))).s6 , l_374)))), (-2L), 0x34072D3EL, 0x0D38C37DL, (-7L), l_376[3], 0x3160AA2DL, 0L)).hi, ((VECTOR(int32_t, 4))(1L)), ((VECTOR(int32_t, 4))((-10L)))))), l_377, 0x73F5ADDDL, 0x3BF3798FL)), l_378, l_379[0][5], 0x29663F59L, 0x6B124E27L, (-2L), l_380, (-1L), 4L)).sac))), ((VECTOR(int32_t, 4))(0x3A240EC6L)), (-6L))), ((VECTOR(int32_t, 8))(0x3363B81CL)))).s1fee)).y), l_381, 0x44807FF5L, 0x4E5FCA51L, ((VECTOR(int32_t, 2))(0x008EF368L)), 0x7275D324L, 0x591ABFA5L)).lo)).ywywyyzz))))).s53)).xxyxxxxy))).s17)), 6L, ((VECTOR(int32_t, 2))(0x4CF721DBL)), 1L, ((VECTOR(int32_t, 2))(0x7B4B49A3L)), (-1L), l_382, 0x72FBC740L, 8L)).s4;
                        l_339.s9 = (l_346 |= (l_384.z , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_385.yxxz)).z, (l_351 ^= l_386), 0L, 5L, ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(l_387.yyyyyxxx)).s02, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_388.s09b7)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(1L, (-7L))), 0x4B98F66AL, 7L)).odd)).even, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((l_389 , (l_294 = (l_334.s1 |= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(0x7B56B0D0L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_390.s14436404)).s00)).xyyyxyxy)), 5L, (l_392 = l_391), 0x1A147DFBL, 0x59BEE21AL, (l_336.x = 0x6A4F7A8AL), 0x0308F76FL, 0x6FE8D9A1L)))).odd)).s0))), l_393, 0L, 0x14D45775L)).even)), 0x1BDAB3B4L)))).s33))), 0x32F2DA41L, 1L)), ((VECTOR(int32_t, 8))(l_394.s56756604)), ((VECTOR(int32_t, 8))(l_395.s56747476))))).s0053534134067220)).sdbb5, ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))((-1L), 0x2DC3D19CL)).yxyyyyyyxxyxyxxy, ((VECTOR(int32_t, 8))(l_396.s89a51e85)).s3263206264553601, ((VECTOR(int32_t, 16))((l_333.x = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_397, l_398[4][0], 0x1CA3E671L, l_399, ((VECTOR(int32_t, 2))((-7L))), 0x3E364382L, 0L)).hi)).lo, (int32_t)l_400[2]))).xyyxxxyxxxxyyyyx, ((VECTOR(int32_t, 16))(8L))))).sfd, ((VECTOR(int32_t, 2))(0L))))).xyyy)))).wzxyzwyzwyyzzwwz, ((VECTOR(int32_t, 16))((-3L))), ((VECTOR(int32_t, 16))((-1L)))))))).hi)).s2), l_401, 0x56E7874AL, 0L, l_402, 0x496ADD58L, ((VECTOR(int32_t, 8))((-1L))), (-2L), (-1L)))))).s4090))).zxzzwywwxxyxzwxy, ((VECTOR(int32_t, 16))(0x27B947F5L))))).hi)).s3));
                        l_404 = l_403;
                    }
                    for (l_346 = 0; (l_346 >= 1); l_346 = safe_add_func_int64_t_s_s(l_346, 8))
                    { /* block id: 192 */
                        int16_t l_407 = 0x00EBL;
                        uint64_t l_408 = 2UL;
                        int32_t l_409[1][3][7] = {{{0L,0x16821634L,(-5L),0x16821634L,0L,0L,0x16821634L},{0L,0x16821634L,(-5L),0x16821634L,0L,0L,0x16821634L},{0L,0x16821634L,(-5L),0x16821634L,0L,0L,0x16821634L}}};
                        uint16_t l_410 = 65535UL;
                        VECTOR(uint32_t, 4) l_413 = (VECTOR(uint32_t, 4))(5UL, (VECTOR(uint32_t, 2))(5UL, 1UL), 1UL);
                        int32_t l_414 = (-1L);
                        int i, j, k;
                        l_408 &= (l_338.z = l_407);
                        --l_410;
                        l_338.y = (((VECTOR(uint32_t, 16))(l_413.wwzxywwwwzyzzwzy)).s8 , 0x759F7AB5L);
                        l_335.x = l_414;
                    }
                    l_294 |= 0x0D3A23C8L;
                    l_311.s3 |= l_415.x;
                }
            }
            else
            { /* block id: 202 */
                int32_t l_416 = 0L;
                uint16_t l_425 = 0x86DDL;
                for (l_416 = 0; (l_416 == (-9)); l_416--)
                { /* block id: 205 */
                    int32_t l_419 = (-10L);
                    for (l_419 = 0; (l_419 < 22); ++l_419)
                    { /* block id: 208 */
                        int32_t l_423 = 0x659011D1L;
                        int32_t *l_422 = &l_423;
                        int32_t *l_424 = &l_423;
                        l_424 = l_422;
                    }
                }
                --l_425;
            }
            unsigned int result = 0;
            result += l_294;
            int l_310_i0, l_310_i1;
            for (l_310_i0 = 0; l_310_i0 < 10; l_310_i0++) {
                for (l_310_i1 = 0; l_310_i1 < 2; l_310_i1++) {
                    result += l_310[l_310_i0][l_310_i1];
                }
            }
            result += l_311.s7;
            result += l_311.s6;
            result += l_311.s5;
            result += l_311.s4;
            result += l_311.s3;
            result += l_311.s2;
            result += l_311.s1;
            result += l_311.s0;
            result += l_312;
            result += l_313;
            result += l_314;
            atomic_add(&p_712->l_special_values[16], result);
        }
        else
        { /* block id: 214 */
            (1 + 1);
        }
    }
    else
    { /* block id: 217 */
        int32_t l_428 = 0x52546160L;
        int32_t *l_429 = &l_118;
        int32_t *l_430 = &p_712->g_11[4][2];
        int32_t *l_431 = (void*)0;
        int32_t *l_432 = &p_712->g_11[2][1];
        int32_t *l_433 = &p_712->g_49;
        int32_t *l_434 = (void*)0;
        int32_t *l_435 = (void*)0;
        int32_t *l_436 = &p_712->g_43[0][2][1];
        int32_t *l_437 = (void*)0;
        int32_t *l_438 = (void*)0;
        int32_t *l_439 = &p_712->g_43[0][2][1];
        int32_t *l_440 = (void*)0;
        int32_t *l_441 = &p_712->g_95;
        int32_t *l_442 = &p_712->g_11[4][2];
        l_443++;
        return (*p_33);
    }
    l_448[1]--;
    return (*p_33);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t ** func_34(int32_t ** p_35, uint32_t  p_36, struct S0 * p_712)
{ /* block id: 8 */
    int32_t *l_37 = &p_712->g_11[2][4];
    int32_t *l_38[9] = {&p_712->g_11[1][2],&p_712->g_11[1][2],&p_712->g_11[1][2],&p_712->g_11[1][2],&p_712->g_11[1][2],&p_712->g_11[1][2],&p_712->g_11[1][2],&p_712->g_11[1][2],&p_712->g_11[1][2]};
    uint64_t l_39 = 0UL;
    int32_t **l_42 = &l_37;
    int i;
    l_39++;
    return p_35;
}


/* ------------------------------------------ */
/* 
 * reads : p_712->g_85 p_712->g_11 p_712->g_95 p_712->g_49
 * writes: p_712->g_85 p_712->g_95 p_712->g_102
 */
int32_t * func_53(int32_t * p_54, int8_t  p_55, int16_t  p_56, uint32_t  p_57, struct S0 * p_712)
{ /* block id: 24 */
    VECTOR(int32_t, 16) l_92 = (VECTOR(int32_t, 16))(0x524CF131L, (VECTOR(int32_t, 4))(0x524CF131L, (VECTOR(int32_t, 2))(0x524CF131L, 2L), 2L), 2L, 0x524CF131L, 2L, (VECTOR(int32_t, 2))(0x524CF131L, 2L), (VECTOR(int32_t, 2))(0x524CF131L, 2L), 0x524CF131L, 2L, 0x524CF131L, 2L);
    int32_t l_107 = 0x442475AAL;
    int32_t l_108 = (-1L);
    int i;
    for (p_55 = (-11); (p_55 != (-19)); p_55--)
    { /* block id: 27 */
        int8_t *l_90 = &p_712->g_85;
        VECTOR(int32_t, 8) l_91 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-8L)), (-8L)), (-8L), 1L, (-8L));
        int32_t *l_93 = (void*)0;
        int32_t *l_94[4];
        int8_t *l_100 = (void*)0;
        int8_t *l_101 = &p_712->g_102;
        int i;
        for (i = 0; i < 4; i++)
            l_94[i] = (void*)0;
        l_108 |= (safe_mod_func_int32_t_s_s((((*l_90) |= (-10L)) <= (0x3FDCB736L || p_712->g_11[2][3])), ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 4))((*p_54), ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(l_91.s5062640611530257)).lo, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_92.s27)).xyxyxxxxyyxxyxyy)).lo))).s07, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x2D4C7A7DL, 0x722777C7L)))), (int32_t)(p_712->g_95 |= (*p_54))))), ((((+p_712->g_11[4][2]) || (safe_mod_func_uint32_t_u_u(0x8E2C0BE2L, (safe_rshift_func_int8_t_s_s(((*l_101) = l_92.se), (safe_mul_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(0x32E1L, p_57)) && p_712->g_49), l_92.s6))))))) >= FAKE_DIVERGE(p_712->local_1_offset, get_local_id(1), 10)) <= 0x05L), l_107, ((VECTOR(int32_t, 2))(0x001D3CF3L)), 0x55FDE6EBL, 0x7CDC455AL)).s66))), 0x4C4C9405L)), ((VECTOR(int32_t, 4))(8L)), ((VECTOR(int32_t, 4))(0x76FB23EEL))))).y));
    }
    return p_54;
}


/* ------------------------------------------ */
/* 
 * reads : p_712->l_comm_values
 * writes:
 */
int8_t  func_60(uint16_t  p_61, int32_t * p_62, int32_t  p_63, struct S0 * p_712)
{ /* block id: 20 */
    int32_t *l_82 = &p_712->g_49;
    int32_t **l_81 = &l_82;
    (*l_81) = p_62;
    return p_712->l_comm_values[(safe_mod_func_uint32_t_u_u(p_712->tid, 56))];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[26];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 26; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[26];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 26; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[56];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 56; i++)
            l_comm_values[i] = 1;
    struct S0 c_713;
    struct S0* p_712 = &c_713;
    struct S0 c_714 = {
        {{0x0B1647C2L,1L,(-4L),0x1EBF495EL,(-4L),1L},{0x0B1647C2L,1L,(-4L),0x1EBF495EL,(-4L),1L},{0x0B1647C2L,1L,(-4L),0x1EBF495EL,(-4L),1L},{0x0B1647C2L,1L,(-4L),0x1EBF495EL,(-4L),1L},{0x0B1647C2L,1L,(-4L),0x1EBF495EL,(-4L),1L},{0x0B1647C2L,1L,(-4L),0x1EBF495EL,(-4L),1L}}, // p_712->g_11
        (VECTOR(uint16_t, 16))(8UL, (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 0xA79CL), 0xA79CL), 0xA79CL, 8UL, 0xA79CL, (VECTOR(uint16_t, 2))(8UL, 0xA79CL), (VECTOR(uint16_t, 2))(8UL, 0xA79CL), 8UL, 0xA79CL, 8UL, 0xA79CL), // p_712->g_12
        {{{(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L)}}}, // p_712->g_43
        (void*)0, // p_712->g_46
        (void*)0, // p_712->g_47
        (-10L), // p_712->g_49
        0x2AL, // p_712->g_85
        1L, // p_712->g_95
        0x23L, // p_712->g_102
        65528UL, // p_712->g_120
        {{&p_712->g_43[0][2][1],&p_712->g_43[0][2][1],(void*)0,&p_712->g_43[0][2][1]},{&p_712->g_43[0][2][1],&p_712->g_43[0][2][1],(void*)0,&p_712->g_43[0][2][1]},{&p_712->g_43[0][2][1],&p_712->g_43[0][2][1],(void*)0,&p_712->g_43[0][2][1]}}, // p_712->g_123
        (void*)0, // p_712->g_134
        {{{&p_712->g_134,&p_712->g_134,&p_712->g_134,&p_712->g_134}},{{&p_712->g_134,&p_712->g_134,&p_712->g_134,&p_712->g_134}}}, // p_712->g_133
        4294967290UL, // p_712->g_145
        0x21AE9AB5F3C96CF1L, // p_712->g_148
        1L, // p_712->g_174
        (VECTOR(int16_t, 8))(0x726CL, (VECTOR(int16_t, 4))(0x726CL, (VECTOR(int16_t, 2))(0x726CL, 0x72D2L), 0x72D2L), 0x72D2L, 0x726CL, 0x72D2L), // p_712->g_217
        0UL, // p_712->g_281
        (VECTOR(int64_t, 2))((-7L), (-1L)), // p_712->g_284
        (void*)0, // p_712->g_290
        &p_712->g_290, // p_712->g_289
        8L, // p_712->g_456
        (VECTOR(int16_t, 4))(0x0ADFL, (VECTOR(int16_t, 2))(0x0ADFL, 1L), 1L), // p_712->g_462
        (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-7L)), (-7L)), // p_712->g_466
        (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x02L), 0x02L), 0x02L, 0L, 0x02L), // p_712->g_468
        5UL, // p_712->g_617
        (VECTOR(int16_t, 4))(0x7BAAL, (VECTOR(int16_t, 2))(0x7BAAL, 0x2A42L), 0x2A42L), // p_712->g_656
        (VECTOR(int8_t, 8))(0x04L, (VECTOR(int8_t, 4))(0x04L, (VECTOR(int8_t, 2))(0x04L, 0x5BL), 0x5BL), 0x5BL, 0x04L, 0x5BL), // p_712->g_658
        (VECTOR(int8_t, 4))(0x20L, (VECTOR(int8_t, 2))(0x20L, 0x74L), 0x74L), // p_712->g_659
        (VECTOR(uint64_t, 8))(0xD65D058ED66A5B76L, (VECTOR(uint64_t, 4))(0xD65D058ED66A5B76L, (VECTOR(uint64_t, 2))(0xD65D058ED66A5B76L, 18446744073709551608UL), 18446744073709551608UL), 18446744073709551608UL, 0xD65D058ED66A5B76L, 18446744073709551608UL), // p_712->g_674
        0x69D025F4L, // p_712->g_678
        (VECTOR(uint64_t, 4))(0x5541E7D3BF67AFF6L, (VECTOR(uint64_t, 2))(0x5541E7D3BF67AFF6L, 18446744073709551615UL), 18446744073709551615UL), // p_712->g_689
        (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x323658E8F8AFFB78L), 0x323658E8F8AFFB78L), 0x323658E8F8AFFB78L, 18446744073709551615UL, 0x323658E8F8AFFB78L), // p_712->g_691
        (-1L), // p_712->g_697
        0x1D93C414L, // p_712->g_704
        255UL, // p_712->g_707
        {{0x78L,0x21L,0xF5L,1UL,0x18L,1UL,0xF5L,0x21L,0x78L,0xF5L},{0x78L,0x21L,0xF5L,1UL,0x18L,1UL,0xF5L,0x21L,0x78L,0xF5L},{0x78L,0x21L,0xF5L,1UL,0x18L,1UL,0xF5L,0x21L,0x78L,0xF5L},{0x78L,0x21L,0xF5L,1UL,0x18L,1UL,0xF5L,0x21L,0x78L,0xF5L},{0x78L,0x21L,0xF5L,1UL,0x18L,1UL,0xF5L,0x21L,0x78L,0xF5L}}, // p_712->g_711
        0, // p_712->v_collective
        sequence_input[get_global_id(0)], // p_712->global_0_offset
        sequence_input[get_global_id(1)], // p_712->global_1_offset
        sequence_input[get_global_id(2)], // p_712->global_2_offset
        sequence_input[get_local_id(0)], // p_712->local_0_offset
        sequence_input[get_local_id(1)], // p_712->local_1_offset
        sequence_input[get_local_id(2)], // p_712->local_2_offset
        sequence_input[get_group_id(0)], // p_712->group_0_offset
        sequence_input[get_group_id(1)], // p_712->group_1_offset
        sequence_input[get_group_id(2)], // p_712->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 56)), permutations[0][get_linear_local_id()])), // p_712->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_713 = c_714;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_712);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_712->g_11[i][j], "p_712->g_11[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_712->g_12.s0, "p_712->g_12.s0", print_hash_value);
    transparent_crc(p_712->g_12.s1, "p_712->g_12.s1", print_hash_value);
    transparent_crc(p_712->g_12.s2, "p_712->g_12.s2", print_hash_value);
    transparent_crc(p_712->g_12.s3, "p_712->g_12.s3", print_hash_value);
    transparent_crc(p_712->g_12.s4, "p_712->g_12.s4", print_hash_value);
    transparent_crc(p_712->g_12.s5, "p_712->g_12.s5", print_hash_value);
    transparent_crc(p_712->g_12.s6, "p_712->g_12.s6", print_hash_value);
    transparent_crc(p_712->g_12.s7, "p_712->g_12.s7", print_hash_value);
    transparent_crc(p_712->g_12.s8, "p_712->g_12.s8", print_hash_value);
    transparent_crc(p_712->g_12.s9, "p_712->g_12.s9", print_hash_value);
    transparent_crc(p_712->g_12.sa, "p_712->g_12.sa", print_hash_value);
    transparent_crc(p_712->g_12.sb, "p_712->g_12.sb", print_hash_value);
    transparent_crc(p_712->g_12.sc, "p_712->g_12.sc", print_hash_value);
    transparent_crc(p_712->g_12.sd, "p_712->g_12.sd", print_hash_value);
    transparent_crc(p_712->g_12.se, "p_712->g_12.se", print_hash_value);
    transparent_crc(p_712->g_12.sf, "p_712->g_12.sf", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_712->g_43[i][j][k], "p_712->g_43[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_712->g_49, "p_712->g_49", print_hash_value);
    transparent_crc(p_712->g_85, "p_712->g_85", print_hash_value);
    transparent_crc(p_712->g_95, "p_712->g_95", print_hash_value);
    transparent_crc(p_712->g_102, "p_712->g_102", print_hash_value);
    transparent_crc(p_712->g_120, "p_712->g_120", print_hash_value);
    transparent_crc(p_712->g_145, "p_712->g_145", print_hash_value);
    transparent_crc(p_712->g_148, "p_712->g_148", print_hash_value);
    transparent_crc(p_712->g_174, "p_712->g_174", print_hash_value);
    transparent_crc(p_712->g_217.s0, "p_712->g_217.s0", print_hash_value);
    transparent_crc(p_712->g_217.s1, "p_712->g_217.s1", print_hash_value);
    transparent_crc(p_712->g_217.s2, "p_712->g_217.s2", print_hash_value);
    transparent_crc(p_712->g_217.s3, "p_712->g_217.s3", print_hash_value);
    transparent_crc(p_712->g_217.s4, "p_712->g_217.s4", print_hash_value);
    transparent_crc(p_712->g_217.s5, "p_712->g_217.s5", print_hash_value);
    transparent_crc(p_712->g_217.s6, "p_712->g_217.s6", print_hash_value);
    transparent_crc(p_712->g_217.s7, "p_712->g_217.s7", print_hash_value);
    transparent_crc(p_712->g_281, "p_712->g_281", print_hash_value);
    transparent_crc(p_712->g_284.x, "p_712->g_284.x", print_hash_value);
    transparent_crc(p_712->g_284.y, "p_712->g_284.y", print_hash_value);
    transparent_crc(p_712->g_456, "p_712->g_456", print_hash_value);
    transparent_crc(p_712->g_462.x, "p_712->g_462.x", print_hash_value);
    transparent_crc(p_712->g_462.y, "p_712->g_462.y", print_hash_value);
    transparent_crc(p_712->g_462.z, "p_712->g_462.z", print_hash_value);
    transparent_crc(p_712->g_462.w, "p_712->g_462.w", print_hash_value);
    transparent_crc(p_712->g_466.x, "p_712->g_466.x", print_hash_value);
    transparent_crc(p_712->g_466.y, "p_712->g_466.y", print_hash_value);
    transparent_crc(p_712->g_466.z, "p_712->g_466.z", print_hash_value);
    transparent_crc(p_712->g_466.w, "p_712->g_466.w", print_hash_value);
    transparent_crc(p_712->g_468.s0, "p_712->g_468.s0", print_hash_value);
    transparent_crc(p_712->g_468.s1, "p_712->g_468.s1", print_hash_value);
    transparent_crc(p_712->g_468.s2, "p_712->g_468.s2", print_hash_value);
    transparent_crc(p_712->g_468.s3, "p_712->g_468.s3", print_hash_value);
    transparent_crc(p_712->g_468.s4, "p_712->g_468.s4", print_hash_value);
    transparent_crc(p_712->g_468.s5, "p_712->g_468.s5", print_hash_value);
    transparent_crc(p_712->g_468.s6, "p_712->g_468.s6", print_hash_value);
    transparent_crc(p_712->g_468.s7, "p_712->g_468.s7", print_hash_value);
    transparent_crc(p_712->g_617, "p_712->g_617", print_hash_value);
    transparent_crc(p_712->g_656.x, "p_712->g_656.x", print_hash_value);
    transparent_crc(p_712->g_656.y, "p_712->g_656.y", print_hash_value);
    transparent_crc(p_712->g_656.z, "p_712->g_656.z", print_hash_value);
    transparent_crc(p_712->g_656.w, "p_712->g_656.w", print_hash_value);
    transparent_crc(p_712->g_658.s0, "p_712->g_658.s0", print_hash_value);
    transparent_crc(p_712->g_658.s1, "p_712->g_658.s1", print_hash_value);
    transparent_crc(p_712->g_658.s2, "p_712->g_658.s2", print_hash_value);
    transparent_crc(p_712->g_658.s3, "p_712->g_658.s3", print_hash_value);
    transparent_crc(p_712->g_658.s4, "p_712->g_658.s4", print_hash_value);
    transparent_crc(p_712->g_658.s5, "p_712->g_658.s5", print_hash_value);
    transparent_crc(p_712->g_658.s6, "p_712->g_658.s6", print_hash_value);
    transparent_crc(p_712->g_658.s7, "p_712->g_658.s7", print_hash_value);
    transparent_crc(p_712->g_659.x, "p_712->g_659.x", print_hash_value);
    transparent_crc(p_712->g_659.y, "p_712->g_659.y", print_hash_value);
    transparent_crc(p_712->g_659.z, "p_712->g_659.z", print_hash_value);
    transparent_crc(p_712->g_659.w, "p_712->g_659.w", print_hash_value);
    transparent_crc(p_712->g_674.s0, "p_712->g_674.s0", print_hash_value);
    transparent_crc(p_712->g_674.s1, "p_712->g_674.s1", print_hash_value);
    transparent_crc(p_712->g_674.s2, "p_712->g_674.s2", print_hash_value);
    transparent_crc(p_712->g_674.s3, "p_712->g_674.s3", print_hash_value);
    transparent_crc(p_712->g_674.s4, "p_712->g_674.s4", print_hash_value);
    transparent_crc(p_712->g_674.s5, "p_712->g_674.s5", print_hash_value);
    transparent_crc(p_712->g_674.s6, "p_712->g_674.s6", print_hash_value);
    transparent_crc(p_712->g_674.s7, "p_712->g_674.s7", print_hash_value);
    transparent_crc(p_712->g_678, "p_712->g_678", print_hash_value);
    transparent_crc(p_712->g_689.x, "p_712->g_689.x", print_hash_value);
    transparent_crc(p_712->g_689.y, "p_712->g_689.y", print_hash_value);
    transparent_crc(p_712->g_689.z, "p_712->g_689.z", print_hash_value);
    transparent_crc(p_712->g_689.w, "p_712->g_689.w", print_hash_value);
    transparent_crc(p_712->g_691.s0, "p_712->g_691.s0", print_hash_value);
    transparent_crc(p_712->g_691.s1, "p_712->g_691.s1", print_hash_value);
    transparent_crc(p_712->g_691.s2, "p_712->g_691.s2", print_hash_value);
    transparent_crc(p_712->g_691.s3, "p_712->g_691.s3", print_hash_value);
    transparent_crc(p_712->g_691.s4, "p_712->g_691.s4", print_hash_value);
    transparent_crc(p_712->g_691.s5, "p_712->g_691.s5", print_hash_value);
    transparent_crc(p_712->g_691.s6, "p_712->g_691.s6", print_hash_value);
    transparent_crc(p_712->g_691.s7, "p_712->g_691.s7", print_hash_value);
    transparent_crc(p_712->g_697, "p_712->g_697", print_hash_value);
    transparent_crc(p_712->g_704, "p_712->g_704", print_hash_value);
    transparent_crc(p_712->g_707, "p_712->g_707", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_712->g_711[i][j], "p_712->g_711[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_712->v_collective, "p_712->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 26; i++)
            transparent_crc(p_712->g_special_values[i + 26 * get_linear_group_id()], "p_712->g_special_values[i + 26 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 26; i++)
            transparent_crc(p_712->l_special_values[i], "p_712->l_special_values[i]", print_hash_value);
    transparent_crc(p_712->l_comm_values[get_linear_local_id()], "p_712->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_712->g_comm_values[get_linear_group_id() * 56 + get_linear_local_id()], "p_712->g_comm_values[get_linear_group_id() * 56 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
