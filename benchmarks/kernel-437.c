// --atomics 92 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 32,94,1 -l 1,47,1
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

__constant uint32_t permutations[10][47] = {
{39,24,29,11,20,9,37,12,28,36,14,41,15,34,22,42,1,35,32,8,44,5,3,2,25,40,18,7,46,16,17,30,43,19,10,6,38,27,33,21,4,13,45,0,26,31,23}, // permutation 0
{19,3,30,36,39,42,46,20,33,7,38,13,6,40,9,21,11,29,22,10,1,23,17,34,44,43,25,35,0,28,18,24,16,5,32,4,41,14,37,2,12,45,27,31,26,8,15}, // permutation 1
{32,13,30,8,23,27,15,26,33,28,46,34,41,43,10,9,24,39,18,16,38,5,45,40,37,4,3,21,0,36,19,25,29,17,20,12,44,1,35,14,11,2,31,6,7,22,42}, // permutation 2
{26,2,0,4,18,39,5,37,31,32,38,27,17,19,28,7,25,36,43,1,9,14,16,29,30,3,6,12,44,24,42,35,11,10,46,40,23,20,13,15,41,8,22,33,34,45,21}, // permutation 3
{32,38,30,40,33,13,20,46,17,29,28,3,10,14,24,35,0,12,22,43,27,15,39,41,5,16,42,23,26,37,36,11,7,2,44,45,31,6,25,21,1,34,9,8,18,19,4}, // permutation 4
{1,41,38,42,19,7,9,18,23,43,36,35,11,44,2,24,0,34,4,14,6,10,5,3,17,16,12,45,15,37,8,30,25,40,13,22,28,31,29,21,20,26,39,27,32,46,33}, // permutation 5
{10,20,3,44,31,17,23,9,13,7,2,8,15,11,21,32,0,34,43,29,6,22,36,35,42,26,24,37,19,30,12,27,25,39,14,16,1,33,38,40,46,45,28,4,5,18,41}, // permutation 6
{16,43,40,4,26,35,1,39,6,19,11,45,34,14,0,2,31,33,41,18,30,13,5,46,32,27,10,12,17,22,15,42,7,25,29,20,21,8,37,28,24,36,38,9,3,23,44}, // permutation 7
{4,22,34,11,15,20,3,32,30,10,14,41,17,38,43,26,8,7,31,23,35,29,0,37,40,44,13,25,39,36,21,42,2,9,27,18,6,16,33,46,45,12,5,19,1,24,28}, // permutation 8
{23,17,21,24,11,1,27,22,7,42,19,41,34,3,20,35,45,32,15,13,2,12,6,44,5,29,9,14,8,40,18,37,39,0,38,36,10,25,28,16,30,46,4,33,31,43,26} // permutation 9
};

// Seed: 3557801490

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint64_t  f0;
   uint64_t  f1;
};

union U1 {
   volatile int32_t  f0;
};

struct S2 {
    volatile int32_t g_2;
    int32_t g_3[7];
    volatile int32_t g_6;
    int32_t g_7;
    VECTOR(uint8_t, 4) g_15;
    VECTOR(uint32_t, 16) g_17;
    volatile union U1 g_66[3][5];
    uint16_t g_68;
    VECTOR(uint32_t, 2) g_69;
    union U0 g_99;
    VECTOR(int32_t, 8) g_111;
    VECTOR(uint16_t, 8) g_140;
    VECTOR(uint8_t, 4) g_142;
    volatile int64_t g_149;
    volatile uint64_t g_151;
    volatile uint32_t g_170;
    volatile uint32_t * volatile g_169[10];
    uint64_t g_181;
    volatile VECTOR(int8_t, 16) g_183;
    VECTOR(int16_t, 8) g_185;
    VECTOR(int16_t, 2) g_192;
    VECTOR(int16_t, 4) g_224;
    VECTOR(int32_t, 8) g_234;
    volatile int16_t g_236;
    volatile int16_t *g_235;
    VECTOR(uint8_t, 4) g_239;
    volatile int64_t g_255;
    volatile int64_t *g_254[2];
    VECTOR(uint16_t, 16) g_270;
    int32_t g_292[2][7][8];
    volatile uint8_t g_312;
    volatile uint8_t * volatile g_311;
    volatile uint8_t g_342;
    volatile uint8_t *g_341;
    uint64_t *g_417;
    volatile uint32_t *g_443;
    VECTOR(int16_t, 16) g_462;
    VECTOR(int16_t, 16) g_463;
    volatile VECTOR(int64_t, 4) g_469;
    VECTOR(uint32_t, 2) g_473;
    int32_t g_488;
    VECTOR(int8_t, 4) g_489;
    volatile VECTOR(int64_t, 16) g_531;
    VECTOR(int64_t, 4) g_532;
    VECTOR(int64_t, 2) g_534;
    volatile int16_t g_550;
    int32_t g_580;
    int8_t g_628;
    int32_t *g_630;
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
uint8_t  func_1(struct S2 * p_651);
int32_t  func_10(union U0  p_11, uint64_t  p_12, uint32_t  p_13, struct S2 * p_651);
uint64_t  func_27(int8_t  p_28, int32_t * p_29, struct S2 * p_651);
uint16_t  func_30(uint64_t  p_31, int32_t  p_32, struct S2 * p_651);
uint8_t  func_33(uint16_t  p_34, struct S2 * p_651);
int16_t  func_35(int32_t * p_36, int32_t * p_37, int64_t  p_38, struct S2 * p_651);
int64_t  func_39(uint32_t  p_40, int64_t  p_41, int32_t * p_42, int32_t  p_43, int32_t * p_44, struct S2 * p_651);
int32_t  func_46(uint32_t  p_47, int16_t  p_48, int32_t * p_49, struct S2 * p_651);
uint16_t  func_52(int32_t * p_53, int16_t  p_54, uint32_t  p_55, uint16_t  p_56, struct S2 * p_651);
int32_t * func_57(union U0  p_58, int32_t * p_59, int32_t  p_60, struct S2 * p_651);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_651->g_3 p_651->g_2 p_651->g_7 p_651->g_comm_values p_651->g_17 p_651->g_69 p_651->g_151 p_651->g_169 p_651->g_68 p_651->g_140 p_651->g_192 p_651->g_181 p_651->g_235 p_651->g_236 p_651->g_234 p_651->g_254 p_651->l_comm_values p_651->g_270 p_651->g_311 p_651->g_312 p_651->g_341 p_651->g_99 p_651->g_292 p_651->g_111 p_651->g_342 p_651->g_550 p_651->g_473 p_651->g_532 p_651->g_534 p_651->g_15 p_651->g_66 p_651->g_489 p_651->g_462
 * writes: p_651->g_3 p_651->g_7 p_651->g_17 p_651->g_99.f0 p_651->g_68 p_651->g_99.f1 p_651->g_6 p_651->g_151 p_651->g_2 p_651->g_111 p_651->g_140 p_651->l_comm_values p_651->g_292 p_651->g_comm_values p_651->g_15 p_651->g_417 p_651->g_239 p_651->g_181 p_651->g_224 p_651->g_488 p_651->g_473 p_651->g_489 p_651->g_580 p_651->g_628 p_651->g_630
 */
uint8_t  func_1(struct S2 * p_651)
{ /* block id: 4 */
    int8_t *l_634 = (void*)0;
    int8_t *l_635 = &p_651->g_628;
    int16_t *l_642 = (void*)0;
    int16_t *l_643 = (void*)0;
    int32_t l_648 = 0x0D64D601L;
    VECTOR(uint64_t, 4) l_649 = (VECTOR(uint64_t, 4))(0x7C3DBC8445A2DC4DL, (VECTOR(uint64_t, 2))(0x7C3DBC8445A2DC4DL, 0xCA574B229C0296E3L), 0xCA574B229C0296E3L);
    int32_t *l_650 = &p_651->g_7;
    int i;
    for (p_651->g_3[3] = 0; (p_651->g_3[3] <= (-10)); p_651->g_3[3] = safe_sub_func_uint64_t_u_u(p_651->g_3[3], 1))
    { /* block id: 7 */
        union U0 l_14[8][7] = {{{0UL},{0UL},{0x6C84902314AF12A8L},{0xA9C2132456160CBEL},{0x9C2D621EC2184E5AL},{0xA9C2132456160CBEL},{0x6C84902314AF12A8L}},{{0UL},{0UL},{0x6C84902314AF12A8L},{0xA9C2132456160CBEL},{0x9C2D621EC2184E5AL},{0xA9C2132456160CBEL},{0x6C84902314AF12A8L}},{{0UL},{0UL},{0x6C84902314AF12A8L},{0xA9C2132456160CBEL},{0x9C2D621EC2184E5AL},{0xA9C2132456160CBEL},{0x6C84902314AF12A8L}},{{0UL},{0UL},{0x6C84902314AF12A8L},{0xA9C2132456160CBEL},{0x9C2D621EC2184E5AL},{0xA9C2132456160CBEL},{0x6C84902314AF12A8L}},{{0UL},{0UL},{0x6C84902314AF12A8L},{0xA9C2132456160CBEL},{0x9C2D621EC2184E5AL},{0xA9C2132456160CBEL},{0x6C84902314AF12A8L}},{{0UL},{0UL},{0x6C84902314AF12A8L},{0xA9C2132456160CBEL},{0x9C2D621EC2184E5AL},{0xA9C2132456160CBEL},{0x6C84902314AF12A8L}},{{0UL},{0UL},{0x6C84902314AF12A8L},{0xA9C2132456160CBEL},{0x9C2D621EC2184E5AL},{0xA9C2132456160CBEL},{0x6C84902314AF12A8L}},{{0UL},{0UL},{0x6C84902314AF12A8L},{0xA9C2132456160CBEL},{0x9C2D621EC2184E5AL},{0xA9C2132456160CBEL},{0x6C84902314AF12A8L}}};
        int32_t *l_631 = &p_651->g_7;
        int i, j;
        for (p_651->g_7 = 26; (p_651->g_7 > 16); --p_651->g_7)
        { /* block id: 10 */
            if (p_651->g_2)
                break;
        }
        (*l_631) = func_10(l_14[4][0], (p_651->g_7 , (((VECTOR(uint8_t, 8))(254UL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0xDBL, 0x58L)).yyyy)), ((VECTOR(uint8_t, 2))(p_651->g_15.xx)), 1UL)).s2 > p_651->g_comm_values[p_651->tid])), p_651->g_comm_values[p_651->tid], p_651);
    }
    (*l_650) = (((*l_635) = ((safe_rshift_func_uint16_t_u_s((&p_651->g_149 == (void*)0), 4)) != FAKE_DIVERGE(p_651->group_1_offset, get_group_id(1), 10))) | (((safe_mod_func_int32_t_s_s((p_651->g_192.x && (safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 16))(((safe_mul_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), ((l_642 = (void*)0) != l_643))) , (safe_mul_func_int16_t_s_s((2UL & (safe_sub_func_uint16_t_u_u(((l_648 |= 18446744073709551615UL) >= (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_649.zy)).yxyy)))).z >= ((void*)0 != &p_651->g_417))), l_649.z))), 0x5653L))), (*p_651->g_235), 0x1E58L, 0x2EDAL, ((VECTOR(int16_t, 8))(0x4446L)), 9L, ((VECTOR(int16_t, 2))(1L)), 1L)).sc, p_651->g_69.y))), p_651->g_462.sc)) != p_651->l_comm_values[(safe_mod_func_uint32_t_u_u(p_651->tid, 47))]) == GROUP_DIVERGE(0, 1)));
    return (*l_650);
}


/* ------------------------------------------ */
/* 
 * reads : p_651->g_17 p_651->g_3 p_651->g_comm_values p_651->g_69 p_651->g_151 p_651->g_7 p_651->g_169 p_651->g_2 p_651->g_68 p_651->g_140 p_651->g_192 p_651->g_181 p_651->g_235 p_651->g_236 p_651->g_234 p_651->g_254 p_651->l_comm_values p_651->g_270 p_651->g_311 p_651->g_312 p_651->g_341 p_651->g_99 p_651->g_292 p_651->g_111 p_651->g_342 p_651->g_443 p_651->g_550 p_651->g_473 p_651->g_532 p_651->g_534 p_651->g_99.f1 p_651->g_15 p_651->g_66 p_651->g_489
 * writes: p_651->g_17 p_651->g_7 p_651->g_99.f0 p_651->g_68 p_651->g_99.f1 p_651->g_6 p_651->g_151 p_651->g_2 p_651->g_111 p_651->g_140 p_651->l_comm_values p_651->g_292 p_651->g_comm_values p_651->g_15 p_651->g_417 p_651->g_239 p_651->g_181 p_651->g_224 p_651->g_488 p_651->g_473 p_651->g_489 p_651->g_580 p_651->g_628 p_651->g_630
 */
int32_t  func_10(union U0  p_11, uint64_t  p_12, uint32_t  p_13, struct S2 * p_651)
{ /* block id: 13 */
    int32_t *l_16[2];
    VECTOR(int64_t, 2) l_83 = (VECTOR(int64_t, 2))(0x7E588526770660D0L, 6L);
    int32_t l_607 = 0x0A22796BL;
    int32_t l_609[2][5] = {{0x07E8C1D8L,1L,0x07E8C1D8L,0x07E8C1D8L,1L},{0x07E8C1D8L,1L,0x07E8C1D8L,0x07E8C1D8L,1L}};
    int16_t l_610 = 1L;
    union U0 l_621 = {0x9F60BB3BEC5C1A42L};
    int16_t *l_624 = &l_610;
    uint64_t l_625 = 0xDE4C28565BCF967CL;
    int8_t *l_626 = (void*)0;
    int8_t *l_627 = &p_651->g_628;
    int32_t **l_629[10];
    int i, j;
    for (i = 0; i < 2; i++)
        l_16[i] = &p_651->g_7;
    for (i = 0; i < 10; i++)
        l_629[i] = &l_16[1];
    --p_651->g_17.s4;
    if (p_651->g_3[3])
    { /* block id: 15 */
        atomic_min(&p_651->g_atomic_reduction[get_linear_group_id()], ((VECTOR(int32_t, 2))(0x433C8A0CL, 0x02002449L)).even + get_linear_global_id());
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_651->v_collective += p_651->g_atomic_reduction[get_linear_group_id()];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    }
    else
    { /* block id: 17 */
        union U0 l_61 = {0x545654A13735CA71L};
        int32_t *l_597 = &p_651->g_3[3];
        int8_t l_603 = 0x76L;
        int32_t l_604 = 0x0EFB266FL;
        int32_t l_605 = 0x3F0914F6L;
        int32_t l_606[10][7][3] = {{{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L}},{{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L}},{{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L}},{{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L}},{{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L}},{{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L}},{{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L}},{{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L}},{{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L}},{{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L},{0x47ECD9C9L,0x436FDD8EL,0x7BBB87B2L}}};
        int16_t l_608 = 0L;
        uint32_t l_611 = 0x057E000DL;
        uint8_t *l_614 = (void*)0;
        uint8_t *l_615 = (void*)0;
        uint8_t *l_616[8][2][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int i, j, k;
        for (p_13 = 0; (p_13 == 54); p_13 = safe_add_func_uint8_t_u_u(p_13, 2))
        { /* block id: 20 */
            uint8_t l_24 = 1UL;
            VECTOR(int32_t, 4) l_45 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L));
            int32_t l_104 = 0L;
            int32_t **l_602 = &l_16[1];
            int i;
            for (p_11.f0 = 0; (p_11.f0 == 45); p_11.f0 = safe_add_func_uint32_t_u_u(p_11.f0, 9))
            { /* block id: 23 */
                if (l_24)
                    break;
            }
            atomic_or(&p_651->g_atomic_reduction[get_linear_group_id()], p_11.f0);
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_651->v_collective += p_651->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (p_12)
                break;
            (*l_602) = ((func_27((func_30((func_33(((func_35((func_39((0x56CF6D70L > (l_104 ^= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(l_45.zzxzwxzzzxwwyywy)).s15, ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0L, (-1L))), func_46((+(safe_lshift_func_int8_t_s_s((func_52(func_57(l_61, &p_651->g_7, p_12, p_651), (l_24 && (safe_div_func_uint16_t_u_u(((0x00BBC0977F3D9679L | ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(0x03E1A65742D117B5L, ((VECTOR(int64_t, 4))(l_83.yyyy)), ((VECTOR(int64_t, 8))(p_651->g_17.s1, p_651->g_17.sa, ((VECTOR(int64_t, 4))((-1L))), 0L, 0x636CD8D4AE9C2412L)).s4, 0x3304F1BCD962F93BL, 0x47BED26586BC1AF3L)).odd)).z) & p_13), p_651->g_comm_values[p_651->tid]))), p_12, p_651->g_comm_values[p_651->tid], p_651) >= p_651->g_3[5]), 2))), p_651->g_comm_values[p_651->tid], l_16[0], p_651), p_12, ((VECTOR(int32_t, 4))(0x6E94FA07L)))).s0023434673572512, ((VECTOR(int32_t, 16))(0L)), ((VECTOR(int32_t, 16))(0x012B24ABL))))).even, ((VECTOR(int32_t, 8))(0x081ACCABL)), ((VECTOR(int32_t, 8))(0L))))).s7636713604130632, (int32_t)l_45.w))).s99, ((VECTOR(int32_t, 2))((-8L)))))), 1L, 0L)).w)), p_651->g_17.sf, l_16[0], p_13, &p_651->g_3[4], p_651) , l_16[0]), &p_651->g_3[3], p_12, p_651) == p_11.f0) , l_61.f0), p_651) , 0UL), l_61.f0, p_651) < 0x4C97L), l_597, p_651) & 0L) , l_16[0]);
        }
        l_611--;
        p_651->g_292[1][3][2] = (0L > (p_651->g_140.s1 , (l_604 = 0x7FL)));
    }
    p_651->g_630 = (((((*l_627) = (p_651->g_489.z &= (safe_sub_func_int32_t_s_s((l_16[0] == ((p_13 > (--p_651->g_15.z)) , func_57(p_651->g_99, func_57(p_651->g_99, func_57(l_621, func_57(l_621, &p_651->g_3[4], ((safe_sub_func_int16_t_s_s(((*l_624) = (l_621 , ((void*)0 != &p_13))), 65528UL)) != FAKE_DIVERGE(p_651->local_2_offset, get_local_id(2), 10)), p_651), p_12, p_651), l_625, p_651), p_13, p_651))), 0x754A2931L)))) <= FAKE_DIVERGE(p_651->group_2_offset, get_group_id(2), 10)) >= p_651->g_234.s6) , &l_607);
    return p_13;
}


/* ------------------------------------------ */
/* 
 * reads : p_651->g_99.f1
 * writes: p_651->g_99.f1
 */
uint64_t  func_27(int8_t  p_28, int32_t * p_29, struct S2 * p_651)
{ /* block id: 238 */
    uint32_t l_601 = 0x8043A956L;
    for (p_651->g_99.f1 = 17; (p_651->g_99.f1 > 44); ++p_651->g_99.f1)
    { /* block id: 241 */
        int32_t *l_600[7];
        int i;
        for (i = 0; i < 7; i++)
            l_600[i] = &p_651->g_7;
        l_601 |= (-1L);
    }
    return p_28;
}


/* ------------------------------------------ */
/* 
 * reads : p_651->g_181 p_651->g_234 p_651->g_341 p_651->g_342 p_651->g_7 p_651->g_69 p_651->g_550 p_651->g_473 p_651->g_532 p_651->g_140 p_651->g_292 p_651->g_534 p_651->g_235 p_651->g_236
 * writes: p_651->g_181 p_651->g_224 p_651->g_417 p_651->g_7 p_651->g_488 p_651->g_473 p_651->l_comm_values p_651->g_489 p_651->g_580 p_651->g_292
 */
uint16_t  func_30(uint64_t  p_31, int32_t  p_32, struct S2 * p_651)
{ /* block id: 197 */
    uint64_t *l_453 = &p_651->g_181;
    uint32_t *l_459 = (void*)0;
    VECTOR(int16_t, 8) l_461 = (VECTOR(int16_t, 8))(7L, (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, 0x35D6L), 0x35D6L), 0x35D6L, 7L, 0x35D6L);
    VECTOR(uint64_t, 16) l_474 = (VECTOR(uint64_t, 16))(18446744073709551611UL, (VECTOR(uint64_t, 4))(18446744073709551611UL, (VECTOR(uint64_t, 2))(18446744073709551611UL, 0x0E39FE4C7AF61AA4L), 0x0E39FE4C7AF61AA4L), 0x0E39FE4C7AF61AA4L, 18446744073709551611UL, 0x0E39FE4C7AF61AA4L, (VECTOR(uint64_t, 2))(18446744073709551611UL, 0x0E39FE4C7AF61AA4L), (VECTOR(uint64_t, 2))(18446744073709551611UL, 0x0E39FE4C7AF61AA4L), 18446744073709551611UL, 0x0E39FE4C7AF61AA4L, 18446744073709551611UL, 0x0E39FE4C7AF61AA4L);
    uint8_t *l_480 = (void*)0;
    uint64_t *l_517 = (void*)0;
    VECTOR(int64_t, 2) l_533 = (VECTOR(int64_t, 2))(0x7884DC0C2B27EEEDL, 7L);
    uint64_t **l_538 = &l_453;
    uint8_t l_541[4];
    int32_t *l_542 = (void*)0;
    union U0 l_545 = {18446744073709551613UL};
    VECTOR(int32_t, 16) l_570 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x10FDB992L), 0x10FDB992L), 0x10FDB992L, (-1L), 0x10FDB992L, (VECTOR(int32_t, 2))((-1L), 0x10FDB992L), (VECTOR(int32_t, 2))((-1L), 0x10FDB992L), (-1L), 0x10FDB992L, (-1L), 0x10FDB992L);
    int32_t l_573 = (-2L);
    int16_t *l_590 = (void*)0;
    int16_t *l_592[5][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int16_t **l_591 = &l_592[4][8];
    int32_t *l_593 = (void*)0;
    int32_t *l_594 = (void*)0;
    int32_t *l_595 = &p_651->g_580;
    int32_t *l_596 = &p_651->g_292[1][2][7];
    int i, j;
    for (i = 0; i < 4; i++)
        l_541[i] = 0x38L;
    for (p_651->g_181 = 0; (p_651->g_181 >= 55); p_651->g_181++)
    { /* block id: 200 */
        int16_t *l_450 = (void*)0;
        uint32_t *l_458 = (void*)0;
        uint32_t **l_460 = &l_459;
        uint64_t *l_466[9] = {&p_651->g_181,&p_651->g_181,&p_651->g_181,&p_651->g_181,&p_651->g_181,&p_651->g_181,&p_651->g_181,&p_651->g_181,&p_651->g_181};
        VECTOR(int64_t, 8) l_470 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x7663B5B553AC31E2L), 0x7663B5B553AC31E2L), 0x7663B5B553AC31E2L, (-1L), 0x7663B5B553AC31E2L);
        uint64_t l_477 = 0x613389BE3B71D9B6L;
        int32_t l_494 = 0x1847B159L;
        int64_t l_503 = (-1L);
        VECTOR(int64_t, 16) l_535 = (VECTOR(int64_t, 16))(0x5151EAA03A742595L, (VECTOR(int64_t, 4))(0x5151EAA03A742595L, (VECTOR(int64_t, 2))(0x5151EAA03A742595L, 1L), 1L), 1L, 0x5151EAA03A742595L, 1L, (VECTOR(int64_t, 2))(0x5151EAA03A742595L, 1L), (VECTOR(int64_t, 2))(0x5151EAA03A742595L, 1L), 0x5151EAA03A742595L, 1L, 0x5151EAA03A742595L, 1L);
        int i;
        if ((((~(((safe_rshift_func_int16_t_s_s((p_651->g_224.z = ((VECTOR(int16_t, 2))(4L, 0x4A12L)).lo), 6)) == (safe_mod_func_uint64_t_u_u(((p_651->g_417 = l_453) != &p_651->g_151), (safe_lshift_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_u(GROUP_DIVERGE(2, 1), 12)) | 0xC95EL) <= (l_458 == ((*l_460) = l_459))), (((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_461.s51663355)).s66)).xxxxxxyx, ((VECTOR(int16_t, 16))(p_651->g_462.s2367e9a7ab968f13)).lo))).s11, ((VECTOR(int16_t, 16))(p_651->g_463.seaab78e7ed49d877)).sf1))).lo , ((safe_rshift_func_uint16_t_u_s((l_466[1] != (((((safe_rshift_func_uint16_t_u_u(((0x6F5BABD9F51E27F2L <= ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(0x5631FDCCD15C780BL, 1L, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(p_651->g_469.xzzxzzzxwywzzyww)).s105b)), ((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 2))(l_470.s17)), ((VECTOR(int64_t, 2))((-10L), 0x6D9E7EAD6E387032L))))), 0x4B21160A96AC5459L, l_470.s3, ((VECTOR(int64_t, 8))((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(p_651->g_473.yyxyxxyy)).s5, ((((VECTOR(uint64_t, 8))(l_474.s72c8a05d)).s7 , (safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(p_651->g_6, ((VECTOR(uint64_t, 2))(0x0FE3DED2DD5654EBL)), 0UL)).y, p_651->g_192.x))) == p_651->g_15.y))), ((VECTOR(int64_t, 2))(0x600FDCE5B5985E65L)), ((VECTOR(int64_t, 2))(0x4793F0576EC9C705L)), l_477, 0x43A6101BB9193F30L, 0x3CF9E899EDF34930L)))).hi)), l_470.s3, 0x24E3BCF01B0271DCL, 0L, 0x430C153A53EA0AA9L, 0x441F70F293AE3005L, 0x031B0BA7DCD7F294L)).s89e9)).lo)).even) <= p_32), 9)) ^ l_474.s7) , 0x56F907DFEA501A82L) | p_31) , &p_651->g_151)), p_651->g_234.s5)) || (-1L)))))))) | p_32)) <= 0x4891C0374634329BL) , 0x434D5161L))
        { /* block id: 204 */
            int16_t l_478[4][1] = {{0L},{0L},{0L},{0L}};
            VECTOR(int16_t, 4) l_479 = (VECTOR(int16_t, 4))(0x7B3DL, (VECTOR(int16_t, 2))(0x7B3DL, 0x43CAL), 0x43CAL);
            int32_t *l_487 = &p_651->g_488;
            uint32_t *l_492 = (void*)0;
            uint32_t *l_493 = (void*)0;
            int32_t *l_504 = (void*)0;
            int32_t *l_505 = (void*)0;
            int32_t *l_506 = &p_651->g_7;
            int i, j;
            if (l_478[2][0])
                break;
            (*l_506) ^= ((*p_651->g_341) < (((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))((-3L), ((VECTOR(int16_t, 4))(l_479.zzwy)), ((VECTOR(int16_t, 4))(0x34F0L, (l_480 != (((safe_mod_func_int64_t_s_s((p_651->g_462.sc == (!0x7CFBB92C0CE742C8L)), 0x0BE524BBAFEEAECDL)) | (safe_add_func_uint8_t_u_u((safe_div_func_int8_t_s_s((((*l_487) = (0xED956DCB67B53206L == 0x6BEC2E14122C2887L)) , ((VECTOR(int8_t, 8))(p_651->g_489.zzyyzyxw)).s7), (safe_add_func_uint32_t_u_u((l_494 &= 4294967294UL), (safe_mul_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((((safe_mod_func_uint16_t_u_u((safe_add_func_int64_t_s_s(p_651->g_462.s7, p_32)), p_651->g_140.s7)) , p_651->g_185.s6) , l_479.z) , p_31), FAKE_DIVERGE(p_651->group_1_offset, get_group_id(1), 10))), p_651->g_185.s5)))))), 1UL))) , (void*)0)), 7L, 1L)), (-9L), 0x005CL, p_32, 0x0160L, p_31, 0x6730L, 2L)).s4f)).yyyxxxxyxyxxyyxy)).lo, ((VECTOR(int16_t, 8))(0L))))).s16)).xxxxyyyx)), ((VECTOR(uint16_t, 8))(0xA925L)), ((VECTOR(uint16_t, 8))(3UL))))).s2 | l_503));
        }
        else
        { /* block id: 209 */
            uint64_t *l_518 = &l_477;
            int32_t l_519 = 0x71ADDB2FL;
            int32_t l_522 = 0x2CFD2496L;
            int64_t l_523 = 1L;
            uint64_t **l_537 = &l_518;
            uint64_t ***l_536[10][7] = {{&l_537,&l_537,&l_537,&l_537,(void*)0,&l_537,&l_537},{&l_537,&l_537,&l_537,&l_537,(void*)0,&l_537,&l_537},{&l_537,&l_537,&l_537,&l_537,(void*)0,&l_537,&l_537},{&l_537,&l_537,&l_537,&l_537,(void*)0,&l_537,&l_537},{&l_537,&l_537,&l_537,&l_537,(void*)0,&l_537,&l_537},{&l_537,&l_537,&l_537,&l_537,(void*)0,&l_537,&l_537},{&l_537,&l_537,&l_537,&l_537,(void*)0,&l_537,&l_537},{&l_537,&l_537,&l_537,&l_537,(void*)0,&l_537,&l_537},{&l_537,&l_537,&l_537,&l_537,(void*)0,&l_537,&l_537},{&l_537,&l_537,&l_537,&l_537,(void*)0,&l_537,&l_537}};
            uint16_t *l_539 = &p_651->g_68;
            int32_t *l_540[10][10][2] = {{{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0}},{{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0}},{{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0}},{{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0}},{{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0}},{{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0}},{{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0}},{{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0}},{{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0}},{{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0},{&p_651->g_3[3],(void*)0}}};
            int i, j, k;
            for (p_651->g_488 = 23; (p_651->g_488 >= 28); p_651->g_488 = safe_add_func_int32_t_s_s(p_651->g_488, 3))
            { /* block id: 212 */
                uint64_t *l_515 = (void*)0;
                uint64_t **l_516 = &l_453;
                int32_t *l_524 = &p_651->g_7;
                (*l_524) ^= ((*p_651->g_341) < (!(((safe_mod_func_uint64_t_u_u((l_519 = (safe_lshift_func_uint8_t_u_s((((*l_516) = l_515) == (l_518 = l_517)), (p_651->g_69.y ^ p_31)))), (-1L))) > ((safe_lshift_func_uint8_t_u_u(((&p_651->g_3[3] == (l_522 , l_458)) ^ 0L), p_31)) , l_523)) | 0x5A49328860F43542L)));
            }
            l_541[1] ^= ((l_494 ^ (((!((safe_rshift_func_uint8_t_u_s((safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 16))(1L, ((~l_470.s4) , ((safe_add_func_int64_t_s_s(l_522, l_519)) , l_519)), (+(-3L)), ((VECTOR(int64_t, 8))(hadd(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 8))(p_651->g_531.s00607a39)).s1752223535701014))))).s25b7, ((VECTOR(int64_t, 4))(p_651->g_532.zxyx))))))).zxxyywyz, ((VECTOR(int64_t, 16))(l_533.yxxyxyyxyyxxxxxx)).lo))), ((VECTOR(int64_t, 4))(0x79ED2561E494DADDL, 0x04F5893BC02F8A7BL, (-3L), 0x5CEAA94CE4CA7811L)), 0L)).s4534, ((VECTOR(int64_t, 16))(p_651->g_534.xxyyxyyxyyxyyyyy)).s23cc, ((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 4))(l_535.sa7c9)).hi, ((VECTOR(int64_t, 16))((-2L), ((VECTOR(int64_t, 4))(((l_538 = &l_517) != (void*)0), ((VECTOR(int64_t, 2))(0x7BF7DB6F39AE590BL)), 1L)), 0x2FDD1DA26A965390L, 0x5E4C57AE4B43ABAFL, ((VECTOR(int64_t, 8))(0L)), 1L)).s6a, ((VECTOR(int64_t, 2))(0x07489ACD7724A055L))))).yyyx))).z, p_32)), p_31)) , FAKE_DIVERGE(p_651->group_1_offset, get_group_id(1), 10))) , l_539) != (void*)0)) != p_31);
        }
        if (l_503)
            continue;
    }
    l_542 = (void*)0;
    for (p_651->g_7 = (-2); (p_651->g_7 != (-17)); p_651->g_7--)
    { /* block id: 226 */
        uint32_t *l_551[3];
        int32_t l_552 = 1L;
        int32_t l_569 = 0x1AA8C37DL;
        int64_t *l_577 = (void*)0;
        int64_t *l_578[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int8_t *l_579[8][8][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
        int32_t *l_581 = &p_651->g_292[0][3][4];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_551[i] = (void*)0;
        (*l_581) ^= (((l_545 , (safe_div_func_uint32_t_u_u(4294967295UL, (safe_mod_func_uint32_t_u_u(p_651->g_550, (0x57FE70DAL | (l_552 = FAKE_DIVERGE(p_651->group_1_offset, get_group_id(1), 10)))))))) >= ((safe_sub_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_sub_func_int8_t_s_s((p_651->g_580 = (safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((-7L), (p_651->g_489.y = (safe_lshift_func_uint16_t_u_u((safe_div_func_int32_t_s_s((FAKE_DIVERGE(p_651->global_1_offset, get_global_id(1), 10) , (~(0x3FF1CB7366FD5780L | (p_651->l_comm_values[(safe_mod_func_uint32_t_u_u(p_651->tid, 47))] = ((safe_div_func_int64_t_s_s((0x8C55C8A2L == (p_651->g_473.x++)), l_573)) > (+((((safe_unary_minus_func_uint32_t_u(GROUP_DIVERGE(2, 1))) != ((safe_add_func_uint64_t_u_u(l_569, l_569)) < p_32)) > p_31) >= p_31))))))), p_651->g_532.z)), p_31))))), l_569))), 4UL)) , p_651->g_140.s6), l_569)), l_569)) && l_569)) > 250UL);
    }
    (*l_596) |= ((*l_595) = (safe_lshift_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u(p_32, ((safe_div_func_uint16_t_u_u(65535UL, p_31)) || ((safe_mul_func_uint16_t_u_u(((((void*)0 != l_453) , l_590) == ((*l_591) = l_590)), 0x7F53L)) != (0x0CL | p_32))))) & 0x4EL) < p_651->g_534.x), (*p_651->g_235))));
    return p_31;
}


/* ------------------------------------------ */
/* 
 * reads : p_651->g_68 p_651->g_169 p_651->g_2 p_651->g_3 p_651->g_7 p_651->g_183 p_651->g_185 p_651->g_192 p_651->g_6 p_651->g_140 p_651->g_181 p_651->g_224 p_651->g_149 p_651->g_17 p_651->g_15 p_651->g_comm_values p_651->g_234 p_651->g_235 p_651->g_239 p_651->g_236 p_651->g_254 p_651->g_270 p_651->g_142 p_651->g_111 p_651->l_comm_values p_651->g_69 p_651->g_311 p_651->g_312 p_651->g_341 p_651->g_99 p_651->g_292 p_651->g_342 p_651->g_443
 * writes: p_651->g_68 p_651->g_7 p_651->g_2 p_651->g_111 p_651->l_comm_values p_651->g_140 p_651->g_185 p_651->g_292 p_651->g_comm_values p_651->g_15 p_651->g_417 p_651->g_239
 */
uint8_t  func_33(uint16_t  p_34, struct S2 * p_651)
{ /* block id: 79 */
    uint32_t l_166[8] = {0xA7229619L,0x65A05413L,0xA7229619L,0xA7229619L,0x65A05413L,0xA7229619L,0xA7229619L,0x65A05413L};
    int32_t l_171 = 3L;
    uint64_t *l_180 = &p_651->g_181;
    VECTOR(int16_t, 8) l_182 = (VECTOR(int16_t, 8))(0x7E3CL, (VECTOR(int16_t, 4))(0x7E3CL, (VECTOR(int16_t, 2))(0x7E3CL, 0x4BA6L), 0x4BA6L), 0x4BA6L, 0x7E3CL, 0x4BA6L);
    uint32_t l_195 = 0x07F36AAFL;
    VECTOR(int8_t, 4) l_204 = (VECTOR(int8_t, 4))(0x3BL, (VECTOR(int8_t, 2))(0x3BL, 0x05L), 0x05L);
    VECTOR(int32_t, 2) l_221 = (VECTOR(int32_t, 2))(0x04775444L, 0x232A4950L);
    VECTOR(uint16_t, 4) l_226 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0UL), 0UL);
    uint64_t **l_413 = (void*)0;
    uint64_t **l_414 = (void*)0;
    uint64_t *l_416 = &p_651->g_181;
    uint64_t **l_415[4][10][2] = {{{&l_416,&l_416},{&l_416,&l_416},{&l_416,&l_416},{&l_416,&l_416},{&l_416,&l_416},{&l_416,&l_416},{&l_416,&l_416},{&l_416,&l_416},{&l_416,&l_416},{&l_416,&l_416}},{{&l_416,&l_416},{&l_416,&l_416},{&l_416,&l_416},{&l_416,&l_416},{&l_416,&l_416},{&l_416,&l_416},{&l_416,&l_416},{&l_416,&l_416},{&l_416,&l_416},{&l_416,&l_416}},{{&l_416,&l_416},{&l_416,&l_416},{&l_416,&l_416},{&l_416,&l_416},{&l_416,&l_416},{&l_416,&l_416},{&l_416,&l_416},{&l_416,&l_416},{&l_416,&l_416},{&l_416,&l_416}},{{&l_416,&l_416},{&l_416,&l_416},{&l_416,&l_416},{&l_416,&l_416},{&l_416,&l_416},{&l_416,&l_416},{&l_416,&l_416},{&l_416,&l_416},{&l_416,&l_416},{&l_416,&l_416}}};
    uint8_t *l_428 = (void*)0;
    int32_t *l_429 = (void*)0;
    VECTOR(uint16_t, 8) l_432 = (VECTOR(uint16_t, 8))(5UL, (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 0x6132L), 0x6132L), 0x6132L, 5UL, 0x6132L);
    VECTOR(uint8_t, 16) l_433 = (VECTOR(uint8_t, 16))(0xC4L, (VECTOR(uint8_t, 4))(0xC4L, (VECTOR(uint8_t, 2))(0xC4L, 247UL), 247UL), 247UL, 0xC4L, 247UL, (VECTOR(uint8_t, 2))(0xC4L, 247UL), (VECTOR(uint8_t, 2))(0xC4L, 247UL), 0xC4L, 247UL, 0xC4L, 247UL);
    uint16_t l_442 = 0x07F1L;
    uint16_t *l_444 = &p_651->g_68;
    int32_t *l_445 = &p_651->g_292[0][1][3];
    int i, j, k;
    if ((atomic_inc(&p_651->l_atomic_input[56]) == 7))
    { /* block id: 81 */
        int32_t *l_154 = (void*)0;
        uint16_t l_155 = 65535UL;
        int32_t l_158 = 0x28FA397CL;
        uint64_t l_159 = 0xEE717A6D3C7F1719L;
        l_154 = (void*)0;
        --l_155;
        l_159 = l_158;
        unsigned int result = 0;
        result += l_155;
        result += l_158;
        result += l_159;
        atomic_add(&p_651->l_special_values[56], result);
    }
    else
    { /* block id: 85 */
        (1 + 1);
    }
    for (p_651->g_68 = 0; (p_651->g_68 < 26); p_651->g_68 = safe_add_func_uint64_t_u_u(p_651->g_68, 3))
    { /* block id: 90 */
        int32_t *l_162[8][4][1] = {{{&p_651->g_3[5]},{&p_651->g_3[5]},{&p_651->g_3[5]},{&p_651->g_3[5]}},{{&p_651->g_3[5]},{&p_651->g_3[5]},{&p_651->g_3[5]},{&p_651->g_3[5]}},{{&p_651->g_3[5]},{&p_651->g_3[5]},{&p_651->g_3[5]},{&p_651->g_3[5]}},{{&p_651->g_3[5]},{&p_651->g_3[5]},{&p_651->g_3[5]},{&p_651->g_3[5]}},{{&p_651->g_3[5]},{&p_651->g_3[5]},{&p_651->g_3[5]},{&p_651->g_3[5]}},{{&p_651->g_3[5]},{&p_651->g_3[5]},{&p_651->g_3[5]},{&p_651->g_3[5]}},{{&p_651->g_3[5]},{&p_651->g_3[5]},{&p_651->g_3[5]},{&p_651->g_3[5]}},{{&p_651->g_3[5]},{&p_651->g_3[5]},{&p_651->g_3[5]},{&p_651->g_3[5]}}};
        uint16_t *l_165[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int16_t l_172 = 3L;
        VECTOR(uint16_t, 4) l_189 = (VECTOR(uint16_t, 4))(0xAF2FL, (VECTOR(uint16_t, 2))(0xAF2FL, 0x9747L), 0x9747L);
        VECTOR(int32_t, 2) l_196 = (VECTOR(int32_t, 2))(0L, 0x504E9992L);
        VECTOR(int8_t, 4) l_205 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-8L)), (-8L));
        VECTOR(int32_t, 16) l_220 = (VECTOR(int32_t, 16))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x0EA4B398L), 0x0EA4B398L), 0x0EA4B398L, (-4L), 0x0EA4B398L, (VECTOR(int32_t, 2))((-4L), 0x0EA4B398L), (VECTOR(int32_t, 2))((-4L), 0x0EA4B398L), (-4L), 0x0EA4B398L, (-4L), 0x0EA4B398L);
        VECTOR(int32_t, 2) l_222 = (VECTOR(int32_t, 2))(1L, 1L);
        VECTOR(int16_t, 8) l_223 = (VECTOR(int16_t, 8))((-3L), (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), 0x7555L), 0x7555L), 0x7555L, (-3L), 0x7555L);
        VECTOR(int16_t, 4) l_225 = (VECTOR(int16_t, 4))(0x11F2L, (VECTOR(int16_t, 2))(0x11F2L, 0x57F0L), 0x57F0L);
        int i, j, k;
        p_651->g_7 = 0x7F4D6F54L;
        l_171 ^= (safe_add_func_uint16_t_u_u((l_166[1]--), (+((GROUP_DIVERGE(2, 1) , p_651->g_169[8]) == (void*)0))));
        if (l_172)
        { /* block id: 94 */
            p_651->g_2 ^= 1L;
        }
        else
        { /* block id: 96 */
            VECTOR(int32_t, 16) l_178 = (VECTOR(int32_t, 16))(0x62A801E8L, (VECTOR(int32_t, 4))(0x62A801E8L, (VECTOR(int32_t, 2))(0x62A801E8L, (-1L)), (-1L)), (-1L), 0x62A801E8L, (-1L), (VECTOR(int32_t, 2))(0x62A801E8L, (-1L)), (VECTOR(int32_t, 2))(0x62A801E8L, (-1L)), 0x62A801E8L, (-1L), 0x62A801E8L, (-1L));
            VECTOR(uint8_t, 4) l_184 = (VECTOR(uint8_t, 4))(8UL, (VECTOR(uint8_t, 2))(8UL, 0x9BL), 0x9BL);
            int i;
            if (p_651->g_68)
                break;
            for (l_171 = 24; (l_171 <= (-2)); l_171--)
            { /* block id: 100 */
                uint16_t l_179 = 6UL;
                if (p_651->g_3[3])
                    break;
                for (p_651->g_7 = 0; (p_651->g_7 == (-19)); --p_651->g_7)
                { /* block id: 104 */
                    VECTOR(int32_t, 2) l_177 = (VECTOR(int32_t, 2))((-1L), 1L);
                    int16_t *l_197 = (void*)0;
                    int16_t *l_198 = &l_172;
                    int32_t **l_199 = &l_162[6][1][0];
                    int i;
                    p_651->g_2 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(l_177.xxxxyxyyyyyxyyyx)).s0a26, ((VECTOR(int32_t, 2))(l_178.s80)).xxyx))).odd))).yyyyyxxy)).s2;
                    p_651->g_111.s6 = ((l_179 ^= l_166[4]) , ((&p_651->g_151 != (l_177.x , l_180)) , (((((((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),VECTOR(int16_t, 8),((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 4))(l_182.s5772)).hi, ((VECTOR(int16_t, 2))(0x3C8AL, 0x7FD4L)), ((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 8))(p_651->g_183.s3b912dd5)).lo, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(l_184.xzww)).hi)).xxyx))).even))), ((VECTOR(int16_t, 2))(p_651->g_185.s16)), ((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((+(((safe_unary_minus_func_int32_t_s((l_177.x = (safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(0xCB0CL, 65526UL, ((VECTOR(uint16_t, 8))(0x464BL, 6UL, ((VECTOR(uint16_t, 4))(l_189.zzzy)), 0UL, 0x2B52L)), ((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(0UL, 0xCE4BL, ((VECTOR(uint16_t, 2))(0UL, 65535UL)), 65530UL, p_651->g_183.s8, 0x5EE8L, 1UL)), ((VECTOR(uint16_t, 4))(0x499EL, 0x7EA7L, 0x6E11L, 0x957DL)), 0xDAC5L, (safe_div_func_int16_t_s_s(((*l_198) = ((VECTOR(int16_t, 16))(0x5C98L, 1L, ((VECTOR(int16_t, 2))(p_651->g_192.xy)), (((safe_add_func_int16_t_s_s(0x4FA7L, p_651->g_185.s5)) < (l_195 && (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_196.yyxx)), 0x7427AADBL, (p_651->g_6 | p_34), 1L, 0x43F0D202L)).lo, ((VECTOR(int32_t, 4))((-2L)))))).even)), 0x027412C7L, 0x0D7BA377L)).z != 4294967286UL))) | (-1L)), (-5L), ((VECTOR(int16_t, 8))(5L)), 0L, 0x6C06L)).sc), 0x5B74L)), 0x54D9L, 65535UL)).sc791)).zxwywzwx, ((VECTOR(uint16_t, 8))(0xB202L))))), ((VECTOR(uint16_t, 8))(0x8A60L))))).s7, ((VECTOR(uint16_t, 4))(65535UL)), 65535UL)).odd)).s0607720442567650)).sc7, ((VECTOR(uint16_t, 2))(0x989DL))))), 7UL, 65535UL, 0xBF62L, ((VECTOR(uint16_t, 2))(65531UL)), 0xDAFEL)).s4, p_34))))) , 0x1CL) & 1L)) <= p_651->g_7), 0x1C85L, 0x3B9FL, p_34, ((VECTOR(int16_t, 4))((-1L))), 0x4C42L, p_651->g_3[0], 0x6542L, p_34, (-1L), 0x6A8CL, 0x57D7L, 0x0176L)).sf2)).yxxy, ((VECTOR(int16_t, 4))(0x36A7L))))))), ((VECTOR(int16_t, 8))(0x3CEEL))))), ((VECTOR(int16_t, 8))((-8L))), ((VECTOR(int16_t, 8))((-9L)))))).s3 >= (-1L)) == 0x8E89L) , &l_162[6][1][0]) == l_199) < p_651->g_140.s0)));
                }
            }
            return p_651->g_192.x;
        }
        for (l_195 = 0; (l_195 >= 21); l_195++)
        { /* block id: 116 */
            int32_t **l_218 = &l_162[6][1][0];
            VECTOR(uint32_t, 4) l_219 = (VECTOR(uint32_t, 4))(8UL, (VECTOR(uint32_t, 2))(8UL, 4294967293UL), 4294967293UL);
            int64_t *l_227 = (void*)0;
            int64_t *l_228 = (void*)0;
            int64_t *l_229 = (void*)0;
            int64_t *l_230 = (void*)0;
            int64_t *l_231[8][3][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
            uint32_t l_232 = 6UL;
            int32_t *l_233 = &p_651->g_7;
            VECTOR(uint16_t, 8) l_298 = (VECTOR(uint16_t, 8))(0x4D5DL, (VECTOR(uint16_t, 4))(0x4D5DL, (VECTOR(uint16_t, 2))(0x4D5DL, 8UL), 8UL), 8UL, 0x4D5DL, 8UL);
            uint8_t *l_310[6][3][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
            union U0 l_316 = {0xC666F823C73E7E94L};
            int32_t l_335 = 0x6ABCEE8DL;
            int64_t *l_340 = (void*)0;
            int i, j, k;
            if (((safe_div_func_uint16_t_u_u((((((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x67L, (-7L))), ((VECTOR(int8_t, 4))(8L, 0x6DL, 0x12L, 0x4EL)), 1L, 0x1AL)).even, ((VECTOR(int8_t, 4))(l_204.zyzz))))).yxwzyxwwxyxxzwxz, ((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 2))((-9L), 0x40L)), ((VECTOR(int8_t, 2))(l_205.yx))))).xyyxxxxyxxyyxyxx))).s0 || (((~(safe_add_func_uint32_t_u_u(((safe_add_func_int32_t_s_s((((safe_mod_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s(l_166[1], (((p_651->g_181 & (l_196.x = ((((*l_233) |= ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(0x60BFFE82L, ((&l_171 == ((*l_218) = l_162[4][0][0])) , (l_171 = ((((VECTOR(uint32_t, 4))(l_219.ywwy)).y > p_34) || l_204.y))), 0x5ED3D272L, (-8L))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_220.s74)), 0x12E82253L, 0x4A94D3F0L)), ((VECTOR(int32_t, 2))(0x0FBD838EL, (-9L))).yxxx))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_221.yx)), 2L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_222.xxxx)).hi)), (-7L), 0L, 0x0137E068L)).even, ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 16))(l_223.s5462670245736765)), ((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 8))(p_651->g_224.wzzxxzww)).s24, ((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 4))(l_225.xyyz)).wxywywzzyyywwxww))).s28))).xxxxxxyxxyxyyxyy))).odd, ((VECTOR(uint16_t, 8))(l_226.zyyxyxyy))))).s15, ((VECTOR(int32_t, 8))(0x064BF714L, 0x31366764L, ((p_651->l_comm_values[(safe_mod_func_uint32_t_u_u(p_651->tid, 47))] = (p_651->g_149 | (p_34 , p_651->g_17.sd))) && l_221.y), p_651->g_15.x, l_232, 0x20178CA0L, 0x59C4D771L, (-4L))).s50))).xyyx))).ywyzzxyz)).even))).x) != 0xD64DD62CL) & l_195))) <= p_651->g_68) | 0x2E04991EL))), 4L)), 2)), p_651->g_comm_values[p_651->tid])) && 0xFD95L) == 0xDADD87B5L), 0x769E7DFFL)) <= 2L), 6L))) | GROUP_DIVERGE(0, 1)) && 0x7BL)) > 0L) , FAKE_DIVERGE(p_651->group_0_offset, get_group_id(0), 10)), 0x14EBL)) && 2L))
            { /* block id: 122 */
                VECTOR(int8_t, 16) l_240 = (VECTOR(int8_t, 16))(0x15L, (VECTOR(int8_t, 4))(0x15L, (VECTOR(int8_t, 2))(0x15L, 0x5DL), 0x5DL), 0x5DL, 0x15L, 0x5DL, (VECTOR(int8_t, 2))(0x15L, 0x5DL), (VECTOR(int8_t, 2))(0x15L, 0x5DL), 0x15L, 0x5DL, 0x15L, 0x5DL);
                int64_t *l_253 = (void*)0;
                int16_t l_280 = (-1L);
                int i;
                if (((VECTOR(int32_t, 16))(p_651->g_234.s5614013611361207)).s8)
                { /* block id: 123 */
                    VECTOR(int64_t, 2) l_256 = (VECTOR(int64_t, 2))(0x00D98780B881E371L, 0x18E76D836C0247A3L);
                    VECTOR(int64_t, 4) l_257 = (VECTOR(int64_t, 4))(0x4AF17AE8C21B3FF2L, (VECTOR(int64_t, 2))(0x4AF17AE8C21B3FF2L, 1L), 1L);
                    int16_t *l_277 = (void*)0;
                    int16_t *l_278 = (void*)0;
                    int16_t *l_279 = &l_172;
                    int8_t *l_281 = (void*)0;
                    int8_t *l_282 = (void*)0;
                    int8_t *l_283 = (void*)0;
                    int8_t *l_284 = (void*)0;
                    int8_t *l_285 = (void*)0;
                    int8_t *l_286 = (void*)0;
                    int8_t *l_287 = (void*)0;
                    int8_t *l_288 = (void*)0;
                    int8_t *l_289 = (void*)0;
                    int8_t *l_290 = (void*)0;
                    int8_t *l_291 = (void*)0;
                    int32_t l_293[9] = {(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L),0L,(-1L)};
                    int i;
                    (*l_233) = ((void*)0 == p_651->g_235);
                    l_293[0] |= (safe_div_func_int32_t_s_s((((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(p_651->g_239.wyxyzxzz)).s06)).even , ((p_651->g_292[1][2][7] = (((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_240.s2842)))).hi)).yyyxxxyx)).s55)).even <= ((p_651->g_140.s6 = (FAKE_DIVERGE(p_651->local_2_offset, get_local_id(2), 10) <= ((*p_651->g_235) | p_651->g_234.s5))) | ((safe_mod_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((((((safe_add_func_uint64_t_u_u(((p_651->l_comm_values[(safe_mod_func_uint32_t_u_u(p_651->tid, 47))] |= (~(p_651->g_192.x || (safe_mul_func_uint16_t_u_u((((((l_253 == p_651->g_254[0]) && ((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0x5E2E8BD18F26EC24L, 0x005390F69E3C95EAL)), 0x01EA184C44338563L, ((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_256.yy)).yxxy)).odd, ((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),int64_t,((VECTOR(int64_t, 16))(l_257.zzwxyxwwyxzxyywy)).s02, (int64_t)(l_204.y <= ((safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s((safe_div_func_uint8_t_u_u((p_651->g_15.y | p_651->g_192.y), (safe_sub_func_int16_t_s_s((p_651->g_185.s5 = (+(safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 8))(p_651->g_270.s79b4ad36)).s6, ((*l_279) |= (safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((1L & 0L), FAKE_DIVERGE(p_651->group_2_offset, get_group_id(2), 10))), 0x2FE9D70BL))))))), p_651->g_224.z)))), p_651->g_224.x)), 0x4125FBF1FA647FE2L)) , l_204.x), p_651->g_142.y)) , l_280)), (int64_t)p_651->g_239.z))).xyyyyxxx)).s1353226421511437, ((VECTOR(int64_t, 16))(3L))))).s1a))), p_651->g_111.s0, (-7L), (-9L))).even)).x , FAKE_DIVERGE(p_651->group_1_offset, get_group_id(1), 10)) <= 249UL)) >= (*l_233)) ^ 0x64L) > p_651->g_181), p_34))))) != l_226.w), p_34)) & p_34) <= p_34) <= l_240.sc) & 0UL), FAKE_DIVERGE(p_651->local_2_offset, get_local_id(2), 10))), 1L)) || p_34)))) & p_34)), 0x6A790F04L));
                }
                else
                { /* block id: 131 */
                    int32_t l_313 = (-2L);
                    for (p_34 = 0; (p_34 > 55); ++p_34)
                    { /* block id: 134 */
                        int64_t l_303 = 0x0B66098E4881454BL;
                        (*l_233) &= ((void*)0 == &p_651->g_6);
                        if (p_651->g_270.sd)
                            continue;
                        l_313 = (safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(0x9EDCL, 7UL, ((VECTOR(uint16_t, 2))(l_298.s46)), ((*l_233) = ((safe_mul_func_uint16_t_u_u(p_651->g_69.x, 1L)) & 0x6CL)), (safe_mul_func_int16_t_s_s(((l_182.s1 & l_303) >= (safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s((+0x77L), 4)), (FAKE_DIVERGE(p_651->group_0_offset, get_group_id(0), 10) || (safe_mul_func_int8_t_s_s(((((p_651->g_comm_values[p_651->tid] , l_310[2][1][2]) == p_651->g_311) != 65535UL) <= p_651->g_185.s3), 0x22L)))))), p_34)), ((VECTOR(uint16_t, 2))(65529UL)), 0UL, p_34, (*l_233), l_221.y, ((VECTOR(uint16_t, 4))(0x8839L)))).lo)).s0, p_651->g_17.s8));
                    }
                    (*l_233) &= p_34;
                }
            }
            else
            { /* block id: 142 */
                uint32_t l_323 = 1UL;
                int32_t l_324 = (-1L);
                int8_t *l_333 = (void*)0;
                int8_t *l_334[10][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                int i, j;
                l_335 |= ((safe_sub_func_uint8_t_u_u((l_316 , (safe_lshift_func_int16_t_s_u((-1L), 14))), (p_651->g_15.x = (l_324 = (safe_mod_func_uint64_t_u_u(GROUP_DIVERGE(0, 1), (safe_add_func_int64_t_s_s((p_651->g_comm_values[p_651->tid] = ((l_323 &= 0xDCL) >= (~((((((*p_651->g_311) < (l_171 = (l_221.y = (((l_324 | (safe_rshift_func_int8_t_s_s((safe_div_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(0x31L, (((1L < (((((*l_233) == ((((((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(((+0x1B43L) != 0x944CL), 0x66516B4FL, p_34, ((VECTOR(int32_t, 8))(0x34E31191L)), 0L, 0L, ((VECTOR(int32_t, 2))(0x3ECA00C9L)), (-3L))).sd5, (int32_t)p_34))))).hi != p_34) , 1UL) | (-4L)) || l_324)) , l_171) != p_34) >= 0L)) <= p_34) >= 0L))), p_651->g_192.x)), p_651->g_3[5]))) != l_324) || p_34)))) , l_324) , l_204.w) != l_166[0]) && p_651->g_3[4])))), p_34)))))))) == 9UL);
                (*l_233) = ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u((*p_651->g_235), 15)), 12)) != (l_221.x &= ((0x7F7AL && (p_651->g_140.s2 , ((p_651->g_254[0] == l_340) != (p_651->g_341 == (void*)0)))) && (p_34 >= 0L))));
                if ((atomic_inc(&p_651->l_atomic_input[69]) == 7))
                { /* block id: 153 */
                    uint8_t l_343 = 1UL;
                    VECTOR(int32_t, 2) l_397 = (VECTOR(int32_t, 2))(0x598A1C8DL, (-8L));
                    int32_t *l_396[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t *l_398 = (void*)0;
                    int32_t *l_399[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_399[i] = (void*)0;
                    if (l_343)
                    { /* block id: 154 */
                        int64_t l_344 = 0x05E991380E6533EEL;
                        int8_t l_345 = 0x69L;
                        uint16_t l_346 = 0xAAB2L;
                        int32_t l_347 = 0x647A8667L;
                        uint32_t l_348 = 7UL;
                        int16_t l_349 = 0x23B8L;
                        uint32_t l_350 = 0xD2FD853DL;
                        uint32_t l_351 = 0UL;
                        l_347 = (l_344 , (l_346 = l_345));
                        l_349 = (l_348 = 0x6CCAF806L);
                        l_351 = l_350;
                    }
                    else
                    { /* block id: 160 */
                        uint16_t l_352 = 2UL;
                        uint8_t l_353 = 0xEEL;
                        int8_t l_354 = 0x06L;
                        uint32_t l_355 = 9UL;
                        VECTOR(uint8_t, 16) l_356 = (VECTOR(uint8_t, 16))(3UL, (VECTOR(uint8_t, 4))(3UL, (VECTOR(uint8_t, 2))(3UL, 0xD0L), 0xD0L), 0xD0L, 3UL, 0xD0L, (VECTOR(uint8_t, 2))(3UL, 0xD0L), (VECTOR(uint8_t, 2))(3UL, 0xD0L), 3UL, 0xD0L, 3UL, 0xD0L);
                        int32_t l_357 = 0x75110318L;
                        union U1 l_358 = {5L};/* VOLATILE GLOBAL l_358 */
                        int8_t l_359 = (-8L);
                        int64_t l_360 = 0L;
                        VECTOR(int16_t, 4) l_361 = (VECTOR(int16_t, 4))(0x1813L, (VECTOR(int16_t, 2))(0x1813L, 0x21B1L), 0x21B1L);
                        VECTOR(int16_t, 8) l_362 = (VECTOR(int16_t, 8))(0x2663L, (VECTOR(int16_t, 4))(0x2663L, (VECTOR(int16_t, 2))(0x2663L, 7L), 7L), 7L, 0x2663L, 7L);
                        VECTOR(int8_t, 8) l_363 = (VECTOR(int8_t, 8))((-7L), (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), 0L), 0L), 0L, (-7L), 0L);
                        int32_t l_364 = 0x2AFB6238L;
                        int8_t l_365 = 0L;
                        VECTOR(uint8_t, 4) l_366 = (VECTOR(uint8_t, 4))(250UL, (VECTOR(uint8_t, 2))(250UL, 3UL), 3UL);
                        VECTOR(uint8_t, 4) l_367 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x40L), 0x40L);
                        VECTOR(uint16_t, 8) l_368 = (VECTOR(uint16_t, 8))(0x27A3L, (VECTOR(uint16_t, 4))(0x27A3L, (VECTOR(uint16_t, 2))(0x27A3L, 0x7274L), 0x7274L), 0x7274L, 0x27A3L, 0x7274L);
                        VECTOR(int32_t, 2) l_369 = (VECTOR(int32_t, 2))(1L, 0x19EE5B19L);
                        int16_t l_370 = 3L;
                        uint8_t l_371 = 0UL;
                        uint16_t l_372 = 0x002CL;
                        VECTOR(int32_t, 2) l_373 = (VECTOR(int32_t, 2))(1L, 0x77631B1BL);
                        uint16_t l_374 = 0xCA9CL;
                        int8_t l_375 = 1L;
                        VECTOR(int32_t, 2) l_376 = (VECTOR(int32_t, 2))(1L, 8L);
                        VECTOR(int32_t, 4) l_377 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x0DD1311DL), 0x0DD1311DL);
                        int32_t l_378 = 0x7D8B4957L;
                        VECTOR(int32_t, 8) l_379 = (VECTOR(int32_t, 8))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x675E48CBL), 0x675E48CBL), 0x675E48CBL, (-7L), 0x675E48CBL);
                        VECTOR(int32_t, 2) l_380 = (VECTOR(int32_t, 2))(0x5D1BFD3CL, 0x7A78EEDBL);
                        VECTOR(int32_t, 8) l_381 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x7DEA1CB5L), 0x7DEA1CB5L), 0x7DEA1CB5L, 0L, 0x7DEA1CB5L);
                        int64_t l_382[7][10] = {{1L,8L,0x72DE5A3345FE6D74L,0L,0x0D5351EE579D4321L,(-1L),0x0B0F966458A4B590L,0x72DE5A3345FE6D74L,0x6E6D7A2C672C9696L,(-9L)},{1L,8L,0x72DE5A3345FE6D74L,0L,0x0D5351EE579D4321L,(-1L),0x0B0F966458A4B590L,0x72DE5A3345FE6D74L,0x6E6D7A2C672C9696L,(-9L)},{1L,8L,0x72DE5A3345FE6D74L,0L,0x0D5351EE579D4321L,(-1L),0x0B0F966458A4B590L,0x72DE5A3345FE6D74L,0x6E6D7A2C672C9696L,(-9L)},{1L,8L,0x72DE5A3345FE6D74L,0L,0x0D5351EE579D4321L,(-1L),0x0B0F966458A4B590L,0x72DE5A3345FE6D74L,0x6E6D7A2C672C9696L,(-9L)},{1L,8L,0x72DE5A3345FE6D74L,0L,0x0D5351EE579D4321L,(-1L),0x0B0F966458A4B590L,0x72DE5A3345FE6D74L,0x6E6D7A2C672C9696L,(-9L)},{1L,8L,0x72DE5A3345FE6D74L,0L,0x0D5351EE579D4321L,(-1L),0x0B0F966458A4B590L,0x72DE5A3345FE6D74L,0x6E6D7A2C672C9696L,(-9L)},{1L,8L,0x72DE5A3345FE6D74L,0L,0x0D5351EE579D4321L,(-1L),0x0B0F966458A4B590L,0x72DE5A3345FE6D74L,0x6E6D7A2C672C9696L,(-9L)}};
                        uint16_t l_383 = 65531UL;
                        int64_t l_384 = 1L;
                        int64_t l_385[2][3] = {{(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L)}};
                        int8_t l_386[1][6][9] = {{{0x5BL,0x3EL,0x59L,(-2L),0x59L,0x3EL,0x5BL,0x06L,(-7L)},{0x5BL,0x3EL,0x59L,(-2L),0x59L,0x3EL,0x5BL,0x06L,(-7L)},{0x5BL,0x3EL,0x59L,(-2L),0x59L,0x3EL,0x5BL,0x06L,(-7L)},{0x5BL,0x3EL,0x59L,(-2L),0x59L,0x3EL,0x5BL,0x06L,(-7L)},{0x5BL,0x3EL,0x59L,(-2L),0x59L,0x3EL,0x5BL,0x06L,(-7L)},{0x5BL,0x3EL,0x59L,(-2L),0x59L,0x3EL,0x5BL,0x06L,(-7L)}}};
                        int32_t l_387 = (-6L);
                        uint16_t l_388 = 65530UL;
                        int16_t l_389 = (-1L);
                        int32_t l_390 = 0x4EF214C5L;
                        int i, j, k;
                        l_353 = l_352;
                        l_360 = ((((VECTOR(uint64_t, 4))(l_354, ((l_356.s5 = l_355) , (l_357 , GROUP_DIVERGE(1, 1))), 1UL, 0x79498F9A72F8E175L)).x , l_358) , l_359);
                        l_390 ^= ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_361.wy)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_362.s6773)))), 0x31F6L, 0L)), ((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_363.s10270365)).lo)).wzyxzzyy, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(255UL, l_364, (l_365 , ((VECTOR(uint8_t, 16))(l_366.zyyyxxzzyzzwywyx)).s1), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_367.wwwyzzzz)).odd)), 0x5CL)).s0154330744421167)).even)))))).s5143370453002651)).hi, ((VECTOR(uint16_t, 2))(l_368.s67)).xyyxyxyy))).s56)).xyxx, ((VECTOR(int32_t, 16))(l_369.xxyxyxyxxyxyyxxx)).s4390))).xxwxzwxy)).even)).xyxywwyz, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0x2BFF95D8L, 0x3C1A3469L, 0x2E95C9E9L, (-4L))).lo)).xyyyyyyx))).s45, ((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(0x318637C0L, l_370, 0L, 1L)))), 0x0C23D63EL, (l_371 , l_372), ((VECTOR(int32_t, 8))((l_375 |= (l_374 |= ((VECTOR(int32_t, 16))(l_373.xxyyxxyyxyxxyyxx)).sd)), (-1L), 0x04B4C7CBL, 0x1B3D7108L, 0x4D92E8F8L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_376.yyyyxxyx)).s14)))), (-6L))), 0x2D622B2BL, (-1L))), ((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_377.xxww)).even)).yxyyxyyxxxyxyyyx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 8))(l_378, 1L, ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 4))(l_379.s0111)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_380.xy)).yxxx))))), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_381.s1443)))).xzwzyzzyzxzxwyyw)).sdabf))), 0x5516BE7BL, (-1L))).odd, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_382[0][2], l_383, 0x2CA6C197L, l_384, l_385[1][0], ((VECTOR(int32_t, 2))(0L)), (-1L))).even))))).zzxzwxzwyzwzyxxz)).sd845, (int32_t)l_386[0][5][4]))).hi, ((VECTOR(int32_t, 2))(1L))))))).yxyyxxyyyxxxxyxy))), ((VECTOR(int32_t, 16))(0x732DC3F6L))))).sb30e)), l_387, ((VECTOR(int32_t, 2))(0x410AE0B7L)), 0x20D4CFEDL)).s7126150352051600)).hi, ((VECTOR(int32_t, 8))(2L)), ((VECTOR(int32_t, 8))(0x70BACA92L))))).s15, ((VECTOR(int32_t, 2))(0x2D1E7886L))))).xyyxxyyy, (int32_t)l_388))).hi)).odd, (int32_t)l_389))).hi;
                    }
                    for (l_343 = 23; (l_343 > 37); l_343 = safe_add_func_uint64_t_u_u(l_343, 5))
                    { /* block id: 170 */
                        VECTOR(int32_t, 2) l_394 = (VECTOR(int32_t, 2))(0x2545E140L, 0x0E1B7A8FL);
                        int32_t *l_393 = (void*)0;
                        int32_t *l_395 = (void*)0;
                        int i;
                        l_395 = l_393;
                    }
                    l_399[1] = (l_398 = (l_396[1] = (void*)0));
                    for (l_397.x = 0; (l_397.x < 23); l_397.x++)
                    { /* block id: 178 */
                        uint32_t l_402 = 0xB59A42EAL;
                        uint16_t l_403 = 6UL;
                        int32_t l_404 = 0x580B663DL;
                        uint16_t l_405[6][10] = {{0x0A48L,0x5463L,65535UL,0xF498L,0x3C0BL,0xF498L,65535UL,0x5463L,0x0A48L,65535UL},{0x0A48L,0x5463L,65535UL,0xF498L,0x3C0BL,0xF498L,65535UL,0x5463L,0x0A48L,65535UL},{0x0A48L,0x5463L,65535UL,0xF498L,0x3C0BL,0xF498L,65535UL,0x5463L,0x0A48L,65535UL},{0x0A48L,0x5463L,65535UL,0xF498L,0x3C0BL,0xF498L,65535UL,0x5463L,0x0A48L,65535UL},{0x0A48L,0x5463L,65535UL,0xF498L,0x3C0BL,0xF498L,65535UL,0x5463L,0x0A48L,65535UL},{0x0A48L,0x5463L,65535UL,0xF498L,0x3C0BL,0xF498L,65535UL,0x5463L,0x0A48L,65535UL}};
                        int32_t *l_408 = &l_404;
                        int i, j;
                        l_403 = l_402;
                        --l_405[0][6];
                        l_398 = l_408;
                    }
                    unsigned int result = 0;
                    result += l_343;
                    result += l_397.y;
                    result += l_397.x;
                    atomic_add(&p_651->l_special_values[69], result);
                }
                else
                { /* block id: 183 */
                    (1 + 1);
                }
            }
            return (*p_651->g_311);
        }
    }
    p_651->g_111.s0 |= (safe_rshift_func_uint8_t_u_s((p_651->g_239.x = (((safe_rshift_func_uint16_t_u_u(0xF6C6L, ((l_180 = (p_651->g_99 , &p_651->g_181)) != (p_651->g_417 = &p_651->g_181)))) == p_651->g_7) > (safe_mul_func_uint16_t_u_u((safe_div_func_int32_t_s_s(((GROUP_DIVERGE(0, 1) , (safe_mul_func_int8_t_s_s((-1L), (6L <= (((*p_651->g_311) , (safe_lshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s((-5L), p_651->l_comm_values[(safe_mod_func_uint32_t_u_u(p_651->tid, 47))])), 2))) != p_34))))) <= p_651->g_270.s5), 5L)), p_651->g_292[0][1][1])))), p_651->g_270.se));
    (*l_445) = (l_166[1] ^ (safe_sub_func_int64_t_s_s((((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_432.s5551731755366336)).sfec8)).w | ((*l_444) = (((void*)0 != &l_195) > (((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_433.s66)), 0xE0L, (((safe_sub_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((p_34 ^ (l_428 == (void*)0)), (safe_add_func_int64_t_s_s((&p_651->g_312 == ((+(safe_div_func_int64_t_s_s(((((((void*)0 == &p_651->g_181) & (*p_651->g_341)) == l_442) , &p_651->g_170) != p_651->g_443), p_651->l_comm_values[(safe_mod_func_uint32_t_u_u(p_651->tid, 47))]))) , (void*)0)), p_34)))), GROUP_DIVERGE(2, 1))) < 0xF7430FCBL) , (*p_651->g_341)), ((VECTOR(uint8_t, 8))(0x4CL)), 7UL, p_34, 1UL, 255UL)).sf < 0x20L)))) || l_195) && l_171), p_34)));
    return p_34;
}


/* ------------------------------------------ */
/* 
 * reads : p_651->g_7 p_651->g_comm_values p_651->g_99.f0 p_651->g_3 p_651->g_69 p_651->g_151
 * writes: p_651->g_7 p_651->g_99.f0 p_651->g_68 p_651->g_99.f1 p_651->g_6 p_651->g_151
 */
int16_t  func_35(int32_t * p_36, int32_t * p_37, int64_t  p_38, struct S2 * p_651)
{ /* block id: 51 */
    int32_t *l_106 = &p_651->g_7;
    int32_t **l_105 = &l_106;
    int8_t l_127 = 0x39L;
    int32_t l_146 = (-4L);
    int32_t l_147 = 0x6CD52D1BL;
    int32_t *l_148[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int64_t l_150 = 0x22CD46132A9E99FBL;
    int i;
    p_36 = ((*l_105) = &p_651->g_3[3]);
    for (p_651->g_7 = 0; (p_651->g_7 <= (-23)); p_651->g_7--)
    { /* block id: 56 */
        int32_t *l_109 = (void*)0;
        int32_t *l_110 = (void*)0;
        int32_t *l_112 = (void*)0;
        int32_t *l_113 = (void*)0;
        int32_t *l_114 = (void*)0;
        int32_t *l_115 = (void*)0;
        int32_t *l_116 = (void*)0;
        int32_t *l_117 = (void*)0;
        int32_t *l_118 = (void*)0;
        int32_t l_119 = 1L;
        int32_t *l_120 = &l_119;
        int32_t *l_121 = &l_119;
        uint32_t l_122 = 0x8896062BL;
        if (p_651->g_comm_values[p_651->tid])
            break;
        --l_122;
        for (p_651->g_99.f0 = 0; (p_651->g_99.f0 >= 41); p_651->g_99.f0++)
        { /* block id: 61 */
            (*l_120) = (*l_106);
            return l_127;
        }
    }
    for (p_38 = 0; (p_38 == (-4)); p_38--)
    { /* block id: 68 */
        int32_t l_141[2][6][8] = {{{0x5F954543L,9L,0x40660AE4L,0x767D394CL,0x5F954543L,0x786D8BF4L,9L,(-6L)},{0x5F954543L,9L,0x40660AE4L,0x767D394CL,0x5F954543L,0x786D8BF4L,9L,(-6L)},{0x5F954543L,9L,0x40660AE4L,0x767D394CL,0x5F954543L,0x786D8BF4L,9L,(-6L)},{0x5F954543L,9L,0x40660AE4L,0x767D394CL,0x5F954543L,0x786D8BF4L,9L,(-6L)},{0x5F954543L,9L,0x40660AE4L,0x767D394CL,0x5F954543L,0x786D8BF4L,9L,(-6L)},{0x5F954543L,9L,0x40660AE4L,0x767D394CL,0x5F954543L,0x786D8BF4L,9L,(-6L)}},{{0x5F954543L,9L,0x40660AE4L,0x767D394CL,0x5F954543L,0x786D8BF4L,9L,(-6L)},{0x5F954543L,9L,0x40660AE4L,0x767D394CL,0x5F954543L,0x786D8BF4L,9L,(-6L)},{0x5F954543L,9L,0x40660AE4L,0x767D394CL,0x5F954543L,0x786D8BF4L,9L,(-6L)},{0x5F954543L,9L,0x40660AE4L,0x767D394CL,0x5F954543L,0x786D8BF4L,9L,(-6L)},{0x5F954543L,9L,0x40660AE4L,0x767D394CL,0x5F954543L,0x786D8BF4L,9L,(-6L)},{0x5F954543L,9L,0x40660AE4L,0x767D394CL,0x5F954543L,0x786D8BF4L,9L,(-6L)}}};
        VECTOR(int8_t, 8) l_143 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0L), 0L), 0L, 1L, 0L);
        VECTOR(int8_t, 8) l_144 = (VECTOR(int8_t, 8))(0x15L, (VECTOR(int8_t, 4))(0x15L, (VECTOR(int8_t, 2))(0x15L, 1L), 1L), 1L, 0x15L, 1L);
        int i, j, k;
        for (p_651->g_68 = 0; (p_651->g_68 > 54); p_651->g_68 = safe_add_func_int64_t_s_s(p_651->g_68, 1))
        { /* block id: 71 */
            uint32_t l_134 = 0x0E0C1F7DL;
            uint64_t *l_135 = &p_651->g_99.f1;
            VECTOR(int8_t, 4) l_145 = (VECTOR(int8_t, 4))(0x16L, (VECTOR(int8_t, 2))(0x16L, 0L), 0L);
            int i;
            p_651->g_6 = (p_651->g_69.y < ((safe_sub_func_uint64_t_u_u((!((*l_135) = (l_134 , p_38))), ((safe_mod_func_int32_t_s_s((0x3113L >= ((VECTOR(int16_t, 2))(0L, 0x6A62L)).odd), (safe_div_func_int32_t_s_s((0x2A8BL >= ((VECTOR(uint16_t, 2))(p_651->g_140.s75)).lo), (l_141[1][2][0] = (-6L)))))) , 1UL))) | ((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(p_651->g_142.zxyyxwzw)).s31)).yxxx, ((VECTOR(uint8_t, 16))(abs(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 4))(l_143.s6622)).lo, ((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_144.s75)).xyyy)).wxxxxwxywwzwzyzz, ((VECTOR(int8_t, 4))(l_145.zyyz)).wwzzyyyzyzyxwzyz))).sf535)).zxyxwyzz))).s47))).yyyyxxyyyxxyxyxy))).s28f7))).z));
        }
    }
    ++p_651->g_151;
    return p_651->g_7;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_651->g_7
 */
int64_t  func_39(uint32_t  p_40, int64_t  p_41, int32_t * p_42, int32_t  p_43, int32_t * p_44, struct S2 * p_651)
{ /* block id: 48 */
    (*p_42) = (-3L);
    return p_40;
}


/* ------------------------------------------ */
/* 
 * reads : p_651->g_7
 * writes:
 */
int32_t  func_46(uint32_t  p_47, int16_t  p_48, int32_t * p_49, struct S2 * p_651)
{ /* block id: 44 */
    int32_t *l_102[8][5][4] = {{{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]},{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]},{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]},{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]},{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]}},{{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]},{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]},{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]},{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]},{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]}},{{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]},{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]},{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]},{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]},{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]}},{{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]},{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]},{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]},{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]},{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]}},{{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]},{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]},{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]},{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]},{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]}},{{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]},{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]},{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]},{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]},{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]}},{{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]},{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]},{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]},{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]},{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]}},{{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]},{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]},{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]},{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]},{&p_651->g_7,&p_651->g_7,&p_651->g_3[4],&p_651->g_3[0]}}};
    int32_t **l_103 = &l_102[3][4][2];
    int i, j, k;
    (*l_103) = l_102[3][4][2];
    return (*p_49);
}


/* ------------------------------------------ */
/* 
 * reads : p_651->g_15 p_651->g_6 p_651->g_99 p_651->g_3 p_651->g_7
 * writes: p_651->g_15 p_651->g_7
 */
uint16_t  func_52(int32_t * p_53, int16_t  p_54, uint32_t  p_55, uint16_t  p_56, struct S2 * p_651)
{ /* block id: 38 */
    uint8_t *l_88 = (void*)0;
    uint8_t *l_89 = (void*)0;
    uint8_t *l_90 = (void*)0;
    uint8_t *l_91[5][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    union U0 l_96 = {18446744073709551606UL};
    uint32_t *l_97 = (void*)0;
    uint32_t *l_98[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t *l_101 = (void*)0;
    int32_t **l_100 = &l_101;
    int i, j;
    (*p_53) = (safe_lshift_func_int16_t_s_s((((p_651->g_15.x = (!((safe_mul_func_int16_t_s_s(((~4294967289UL) != p_651->g_15.x), 6L)) < p_56))) <= ((safe_sub_func_int8_t_s_s((p_651->g_6 | (GROUP_DIVERGE(2, 1) | (safe_div_func_int8_t_s_s((((l_96 , l_97) == l_98[0]) , (p_651->g_99 , p_56)), p_651->g_3[3])))), 1UL)) <= GROUP_DIVERGE(2, 1))) > 0xB991CC17125C8CE6L), 9));
    p_53 = ((*l_100) = ((~(*p_53)) , l_97));
    return p_54;
}


/* ------------------------------------------ */
/* 
 * reads : p_651->g_66 p_651->g_69
 * writes: p_651->g_68 p_651->g_7
 */
int32_t * func_57(union U0  p_58, int32_t * p_59, int32_t  p_60, struct S2 * p_651)
{ /* block id: 28 */
    int32_t *l_65 = &p_651->g_7;
    int32_t l_80 = 0x54D88F40L;
    for (p_58.f0 = (-28); (p_58.f0 > 45); p_58.f0 = safe_add_func_int32_t_s_s(p_58.f0, 1))
    { /* block id: 31 */
        int32_t **l_64[2];
        uint16_t *l_67 = &p_651->g_68;
        uint32_t *l_70 = (void*)0;
        uint32_t *l_71 = (void*)0;
        uint32_t *l_72 = (void*)0;
        uint32_t *l_73 = (void*)0;
        uint32_t *l_74 = (void*)0;
        uint32_t *l_75 = (void*)0;
        uint32_t *l_76 = (void*)0;
        uint32_t *l_77 = (void*)0;
        uint32_t *l_78 = (void*)0;
        uint32_t *l_79 = (void*)0;
        int i;
        for (i = 0; i < 2; i++)
            l_64[i] = (void*)0;
        l_65 = &p_651->g_7;
        l_80 &= ((((*l_67) = (&p_60 != (p_651->g_66[1][0] , &p_651->g_3[3]))) <= FAKE_DIVERGE(p_651->group_0_offset, get_group_id(0), 10)) , (p_58.f0 | ((*l_65) = ((VECTOR(uint32_t, 2))(p_651->g_69.yy)).even)));
    }
    return &p_651->g_7;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[92];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 92; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[92];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 92; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[47];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 47; i++)
            l_comm_values[i] = 1;
    struct S2 c_652;
    struct S2* p_651 = &c_652;
    struct S2 c_653 = {
        0x2304B25BL, // p_651->g_2
        {0x5A4D073FL,0x5A4D073FL,0x5A4D073FL,0x5A4D073FL,0x5A4D073FL,0x5A4D073FL,0x5A4D073FL}, // p_651->g_3
        0L, // p_651->g_6
        1L, // p_651->g_7
        (VECTOR(uint8_t, 4))(0xA6L, (VECTOR(uint8_t, 2))(0xA6L, 0x19L), 0x19L), // p_651->g_15
        (VECTOR(uint32_t, 16))(0x9BE67E78L, (VECTOR(uint32_t, 4))(0x9BE67E78L, (VECTOR(uint32_t, 2))(0x9BE67E78L, 0x2DD8607FL), 0x2DD8607FL), 0x2DD8607FL, 0x9BE67E78L, 0x2DD8607FL, (VECTOR(uint32_t, 2))(0x9BE67E78L, 0x2DD8607FL), (VECTOR(uint32_t, 2))(0x9BE67E78L, 0x2DD8607FL), 0x9BE67E78L, 0x2DD8607FL, 0x9BE67E78L, 0x2DD8607FL), // p_651->g_17
        {{{8L},{8L},{8L},{8L},{8L}},{{8L},{8L},{8L},{8L},{8L}},{{8L},{8L},{8L},{8L},{8L}}}, // p_651->g_66
        65526UL, // p_651->g_68
        (VECTOR(uint32_t, 2))(0xBD058558L, 0x73F91A66L), // p_651->g_69
        {18446744073709551609UL}, // p_651->g_99
        (VECTOR(int32_t, 8))(0x287C4FD0L, (VECTOR(int32_t, 4))(0x287C4FD0L, (VECTOR(int32_t, 2))(0x287C4FD0L, 0x76C93038L), 0x76C93038L), 0x76C93038L, 0x287C4FD0L, 0x76C93038L), // p_651->g_111
        (VECTOR(uint16_t, 8))(65532UL, (VECTOR(uint16_t, 4))(65532UL, (VECTOR(uint16_t, 2))(65532UL, 3UL), 3UL), 3UL, 65532UL, 3UL), // p_651->g_140
        (VECTOR(uint8_t, 4))(0x32L, (VECTOR(uint8_t, 2))(0x32L, 1UL), 1UL), // p_651->g_142
        (-2L), // p_651->g_149
        0x7605CBCC48F9F208L, // p_651->g_151
        0x334CCFE4L, // p_651->g_170
        {&p_651->g_170,&p_651->g_170,&p_651->g_170,&p_651->g_170,&p_651->g_170,&p_651->g_170,&p_651->g_170,&p_651->g_170,&p_651->g_170,&p_651->g_170}, // p_651->g_169
        1UL, // p_651->g_181
        (VECTOR(int8_t, 16))((-5L), (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), (-1L)), (-1L)), (-1L), (-5L), (-1L), (VECTOR(int8_t, 2))((-5L), (-1L)), (VECTOR(int8_t, 2))((-5L), (-1L)), (-5L), (-1L), (-5L), (-1L)), // p_651->g_183
        (VECTOR(int16_t, 8))(0x31ACL, (VECTOR(int16_t, 4))(0x31ACL, (VECTOR(int16_t, 2))(0x31ACL, 1L), 1L), 1L, 0x31ACL, 1L), // p_651->g_185
        (VECTOR(int16_t, 2))((-1L), 4L), // p_651->g_192
        (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 0x14A3L), 0x14A3L), // p_651->g_224
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 2L), 2L), 2L, (-1L), 2L), // p_651->g_234
        1L, // p_651->g_236
        &p_651->g_236, // p_651->g_235
        (VECTOR(uint8_t, 4))(246UL, (VECTOR(uint8_t, 2))(246UL, 1UL), 1UL), // p_651->g_239
        (-1L), // p_651->g_255
        {&p_651->g_255,&p_651->g_255}, // p_651->g_254
        (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xDEBEL), 0xDEBEL), 0xDEBEL, 0UL, 0xDEBEL, (VECTOR(uint16_t, 2))(0UL, 0xDEBEL), (VECTOR(uint16_t, 2))(0UL, 0xDEBEL), 0UL, 0xDEBEL, 0UL, 0xDEBEL), // p_651->g_270
        {{{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L}}}, // p_651->g_292
        0xDEL, // p_651->g_312
        &p_651->g_312, // p_651->g_311
        0x64L, // p_651->g_342
        &p_651->g_342, // p_651->g_341
        &p_651->g_181, // p_651->g_417
        (void*)0, // p_651->g_443
        (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x2933L), 0x2933L), 0x2933L, 1L, 0x2933L, (VECTOR(int16_t, 2))(1L, 0x2933L), (VECTOR(int16_t, 2))(1L, 0x2933L), 1L, 0x2933L, 1L, 0x2933L), // p_651->g_462
        (VECTOR(int16_t, 16))(0x0CE9L, (VECTOR(int16_t, 4))(0x0CE9L, (VECTOR(int16_t, 2))(0x0CE9L, 1L), 1L), 1L, 0x0CE9L, 1L, (VECTOR(int16_t, 2))(0x0CE9L, 1L), (VECTOR(int16_t, 2))(0x0CE9L, 1L), 0x0CE9L, 1L, 0x0CE9L, 1L), // p_651->g_463
        (VECTOR(int64_t, 4))(0x43C2D527B4181C59L, (VECTOR(int64_t, 2))(0x43C2D527B4181C59L, 0x64521CD60EA393E0L), 0x64521CD60EA393E0L), // p_651->g_469
        (VECTOR(uint32_t, 2))(0x878FD8CCL, 4294967295UL), // p_651->g_473
        0x73726C7BL, // p_651->g_488
        (VECTOR(int8_t, 4))(0x14L, (VECTOR(int8_t, 2))(0x14L, 0x41L), 0x41L), // p_651->g_489
        (VECTOR(int64_t, 16))(0x7CE6A23F9CBCE19BL, (VECTOR(int64_t, 4))(0x7CE6A23F9CBCE19BL, (VECTOR(int64_t, 2))(0x7CE6A23F9CBCE19BL, 0x6B6CD42D93A6F6A9L), 0x6B6CD42D93A6F6A9L), 0x6B6CD42D93A6F6A9L, 0x7CE6A23F9CBCE19BL, 0x6B6CD42D93A6F6A9L, (VECTOR(int64_t, 2))(0x7CE6A23F9CBCE19BL, 0x6B6CD42D93A6F6A9L), (VECTOR(int64_t, 2))(0x7CE6A23F9CBCE19BL, 0x6B6CD42D93A6F6A9L), 0x7CE6A23F9CBCE19BL, 0x6B6CD42D93A6F6A9L, 0x7CE6A23F9CBCE19BL, 0x6B6CD42D93A6F6A9L), // p_651->g_531
        (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 4L), 4L), // p_651->g_532
        (VECTOR(int64_t, 2))(6L, 0x09EE7189A929906DL), // p_651->g_534
        0x50B8L, // p_651->g_550
        (-7L), // p_651->g_580
        0L, // p_651->g_628
        &p_651->g_292[1][2][7], // p_651->g_630
        0, // p_651->v_collective
        sequence_input[get_global_id(0)], // p_651->global_0_offset
        sequence_input[get_global_id(1)], // p_651->global_1_offset
        sequence_input[get_global_id(2)], // p_651->global_2_offset
        sequence_input[get_local_id(0)], // p_651->local_0_offset
        sequence_input[get_local_id(1)], // p_651->local_1_offset
        sequence_input[get_local_id(2)], // p_651->local_2_offset
        sequence_input[get_group_id(0)], // p_651->group_0_offset
        sequence_input[get_group_id(1)], // p_651->group_1_offset
        sequence_input[get_group_id(2)], // p_651->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 47)), permutations[0][get_linear_local_id()])), // p_651->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_652 = c_653;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_651);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_651->g_2, "p_651->g_2", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_651->g_3[i], "p_651->g_3[i]", print_hash_value);

    }
    transparent_crc(p_651->g_6, "p_651->g_6", print_hash_value);
    transparent_crc(p_651->g_7, "p_651->g_7", print_hash_value);
    transparent_crc(p_651->g_15.x, "p_651->g_15.x", print_hash_value);
    transparent_crc(p_651->g_15.y, "p_651->g_15.y", print_hash_value);
    transparent_crc(p_651->g_15.z, "p_651->g_15.z", print_hash_value);
    transparent_crc(p_651->g_15.w, "p_651->g_15.w", print_hash_value);
    transparent_crc(p_651->g_17.s0, "p_651->g_17.s0", print_hash_value);
    transparent_crc(p_651->g_17.s1, "p_651->g_17.s1", print_hash_value);
    transparent_crc(p_651->g_17.s2, "p_651->g_17.s2", print_hash_value);
    transparent_crc(p_651->g_17.s3, "p_651->g_17.s3", print_hash_value);
    transparent_crc(p_651->g_17.s4, "p_651->g_17.s4", print_hash_value);
    transparent_crc(p_651->g_17.s5, "p_651->g_17.s5", print_hash_value);
    transparent_crc(p_651->g_17.s6, "p_651->g_17.s6", print_hash_value);
    transparent_crc(p_651->g_17.s7, "p_651->g_17.s7", print_hash_value);
    transparent_crc(p_651->g_17.s8, "p_651->g_17.s8", print_hash_value);
    transparent_crc(p_651->g_17.s9, "p_651->g_17.s9", print_hash_value);
    transparent_crc(p_651->g_17.sa, "p_651->g_17.sa", print_hash_value);
    transparent_crc(p_651->g_17.sb, "p_651->g_17.sb", print_hash_value);
    transparent_crc(p_651->g_17.sc, "p_651->g_17.sc", print_hash_value);
    transparent_crc(p_651->g_17.sd, "p_651->g_17.sd", print_hash_value);
    transparent_crc(p_651->g_17.se, "p_651->g_17.se", print_hash_value);
    transparent_crc(p_651->g_17.sf, "p_651->g_17.sf", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_651->g_66[i][j].f0, "p_651->g_66[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_651->g_68, "p_651->g_68", print_hash_value);
    transparent_crc(p_651->g_69.x, "p_651->g_69.x", print_hash_value);
    transparent_crc(p_651->g_69.y, "p_651->g_69.y", print_hash_value);
    transparent_crc(p_651->g_111.s0, "p_651->g_111.s0", print_hash_value);
    transparent_crc(p_651->g_111.s1, "p_651->g_111.s1", print_hash_value);
    transparent_crc(p_651->g_111.s2, "p_651->g_111.s2", print_hash_value);
    transparent_crc(p_651->g_111.s3, "p_651->g_111.s3", print_hash_value);
    transparent_crc(p_651->g_111.s4, "p_651->g_111.s4", print_hash_value);
    transparent_crc(p_651->g_111.s5, "p_651->g_111.s5", print_hash_value);
    transparent_crc(p_651->g_111.s6, "p_651->g_111.s6", print_hash_value);
    transparent_crc(p_651->g_111.s7, "p_651->g_111.s7", print_hash_value);
    transparent_crc(p_651->g_140.s0, "p_651->g_140.s0", print_hash_value);
    transparent_crc(p_651->g_140.s1, "p_651->g_140.s1", print_hash_value);
    transparent_crc(p_651->g_140.s2, "p_651->g_140.s2", print_hash_value);
    transparent_crc(p_651->g_140.s3, "p_651->g_140.s3", print_hash_value);
    transparent_crc(p_651->g_140.s4, "p_651->g_140.s4", print_hash_value);
    transparent_crc(p_651->g_140.s5, "p_651->g_140.s5", print_hash_value);
    transparent_crc(p_651->g_140.s6, "p_651->g_140.s6", print_hash_value);
    transparent_crc(p_651->g_140.s7, "p_651->g_140.s7", print_hash_value);
    transparent_crc(p_651->g_142.x, "p_651->g_142.x", print_hash_value);
    transparent_crc(p_651->g_142.y, "p_651->g_142.y", print_hash_value);
    transparent_crc(p_651->g_142.z, "p_651->g_142.z", print_hash_value);
    transparent_crc(p_651->g_142.w, "p_651->g_142.w", print_hash_value);
    transparent_crc(p_651->g_149, "p_651->g_149", print_hash_value);
    transparent_crc(p_651->g_151, "p_651->g_151", print_hash_value);
    transparent_crc(p_651->g_170, "p_651->g_170", print_hash_value);
    transparent_crc(p_651->g_181, "p_651->g_181", print_hash_value);
    transparent_crc(p_651->g_183.s0, "p_651->g_183.s0", print_hash_value);
    transparent_crc(p_651->g_183.s1, "p_651->g_183.s1", print_hash_value);
    transparent_crc(p_651->g_183.s2, "p_651->g_183.s2", print_hash_value);
    transparent_crc(p_651->g_183.s3, "p_651->g_183.s3", print_hash_value);
    transparent_crc(p_651->g_183.s4, "p_651->g_183.s4", print_hash_value);
    transparent_crc(p_651->g_183.s5, "p_651->g_183.s5", print_hash_value);
    transparent_crc(p_651->g_183.s6, "p_651->g_183.s6", print_hash_value);
    transparent_crc(p_651->g_183.s7, "p_651->g_183.s7", print_hash_value);
    transparent_crc(p_651->g_183.s8, "p_651->g_183.s8", print_hash_value);
    transparent_crc(p_651->g_183.s9, "p_651->g_183.s9", print_hash_value);
    transparent_crc(p_651->g_183.sa, "p_651->g_183.sa", print_hash_value);
    transparent_crc(p_651->g_183.sb, "p_651->g_183.sb", print_hash_value);
    transparent_crc(p_651->g_183.sc, "p_651->g_183.sc", print_hash_value);
    transparent_crc(p_651->g_183.sd, "p_651->g_183.sd", print_hash_value);
    transparent_crc(p_651->g_183.se, "p_651->g_183.se", print_hash_value);
    transparent_crc(p_651->g_183.sf, "p_651->g_183.sf", print_hash_value);
    transparent_crc(p_651->g_185.s0, "p_651->g_185.s0", print_hash_value);
    transparent_crc(p_651->g_185.s1, "p_651->g_185.s1", print_hash_value);
    transparent_crc(p_651->g_185.s2, "p_651->g_185.s2", print_hash_value);
    transparent_crc(p_651->g_185.s3, "p_651->g_185.s3", print_hash_value);
    transparent_crc(p_651->g_185.s4, "p_651->g_185.s4", print_hash_value);
    transparent_crc(p_651->g_185.s5, "p_651->g_185.s5", print_hash_value);
    transparent_crc(p_651->g_185.s6, "p_651->g_185.s6", print_hash_value);
    transparent_crc(p_651->g_185.s7, "p_651->g_185.s7", print_hash_value);
    transparent_crc(p_651->g_192.x, "p_651->g_192.x", print_hash_value);
    transparent_crc(p_651->g_192.y, "p_651->g_192.y", print_hash_value);
    transparent_crc(p_651->g_224.x, "p_651->g_224.x", print_hash_value);
    transparent_crc(p_651->g_224.y, "p_651->g_224.y", print_hash_value);
    transparent_crc(p_651->g_224.z, "p_651->g_224.z", print_hash_value);
    transparent_crc(p_651->g_224.w, "p_651->g_224.w", print_hash_value);
    transparent_crc(p_651->g_234.s0, "p_651->g_234.s0", print_hash_value);
    transparent_crc(p_651->g_234.s1, "p_651->g_234.s1", print_hash_value);
    transparent_crc(p_651->g_234.s2, "p_651->g_234.s2", print_hash_value);
    transparent_crc(p_651->g_234.s3, "p_651->g_234.s3", print_hash_value);
    transparent_crc(p_651->g_234.s4, "p_651->g_234.s4", print_hash_value);
    transparent_crc(p_651->g_234.s5, "p_651->g_234.s5", print_hash_value);
    transparent_crc(p_651->g_234.s6, "p_651->g_234.s6", print_hash_value);
    transparent_crc(p_651->g_234.s7, "p_651->g_234.s7", print_hash_value);
    transparent_crc(p_651->g_236, "p_651->g_236", print_hash_value);
    transparent_crc(p_651->g_239.x, "p_651->g_239.x", print_hash_value);
    transparent_crc(p_651->g_239.y, "p_651->g_239.y", print_hash_value);
    transparent_crc(p_651->g_239.z, "p_651->g_239.z", print_hash_value);
    transparent_crc(p_651->g_239.w, "p_651->g_239.w", print_hash_value);
    transparent_crc(p_651->g_255, "p_651->g_255", print_hash_value);
    transparent_crc(p_651->g_270.s0, "p_651->g_270.s0", print_hash_value);
    transparent_crc(p_651->g_270.s1, "p_651->g_270.s1", print_hash_value);
    transparent_crc(p_651->g_270.s2, "p_651->g_270.s2", print_hash_value);
    transparent_crc(p_651->g_270.s3, "p_651->g_270.s3", print_hash_value);
    transparent_crc(p_651->g_270.s4, "p_651->g_270.s4", print_hash_value);
    transparent_crc(p_651->g_270.s5, "p_651->g_270.s5", print_hash_value);
    transparent_crc(p_651->g_270.s6, "p_651->g_270.s6", print_hash_value);
    transparent_crc(p_651->g_270.s7, "p_651->g_270.s7", print_hash_value);
    transparent_crc(p_651->g_270.s8, "p_651->g_270.s8", print_hash_value);
    transparent_crc(p_651->g_270.s9, "p_651->g_270.s9", print_hash_value);
    transparent_crc(p_651->g_270.sa, "p_651->g_270.sa", print_hash_value);
    transparent_crc(p_651->g_270.sb, "p_651->g_270.sb", print_hash_value);
    transparent_crc(p_651->g_270.sc, "p_651->g_270.sc", print_hash_value);
    transparent_crc(p_651->g_270.sd, "p_651->g_270.sd", print_hash_value);
    transparent_crc(p_651->g_270.se, "p_651->g_270.se", print_hash_value);
    transparent_crc(p_651->g_270.sf, "p_651->g_270.sf", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_651->g_292[i][j][k], "p_651->g_292[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_651->g_312, "p_651->g_312", print_hash_value);
    transparent_crc(p_651->g_342, "p_651->g_342", print_hash_value);
    transparent_crc(p_651->g_462.s0, "p_651->g_462.s0", print_hash_value);
    transparent_crc(p_651->g_462.s1, "p_651->g_462.s1", print_hash_value);
    transparent_crc(p_651->g_462.s2, "p_651->g_462.s2", print_hash_value);
    transparent_crc(p_651->g_462.s3, "p_651->g_462.s3", print_hash_value);
    transparent_crc(p_651->g_462.s4, "p_651->g_462.s4", print_hash_value);
    transparent_crc(p_651->g_462.s5, "p_651->g_462.s5", print_hash_value);
    transparent_crc(p_651->g_462.s6, "p_651->g_462.s6", print_hash_value);
    transparent_crc(p_651->g_462.s7, "p_651->g_462.s7", print_hash_value);
    transparent_crc(p_651->g_462.s8, "p_651->g_462.s8", print_hash_value);
    transparent_crc(p_651->g_462.s9, "p_651->g_462.s9", print_hash_value);
    transparent_crc(p_651->g_462.sa, "p_651->g_462.sa", print_hash_value);
    transparent_crc(p_651->g_462.sb, "p_651->g_462.sb", print_hash_value);
    transparent_crc(p_651->g_462.sc, "p_651->g_462.sc", print_hash_value);
    transparent_crc(p_651->g_462.sd, "p_651->g_462.sd", print_hash_value);
    transparent_crc(p_651->g_462.se, "p_651->g_462.se", print_hash_value);
    transparent_crc(p_651->g_462.sf, "p_651->g_462.sf", print_hash_value);
    transparent_crc(p_651->g_463.s0, "p_651->g_463.s0", print_hash_value);
    transparent_crc(p_651->g_463.s1, "p_651->g_463.s1", print_hash_value);
    transparent_crc(p_651->g_463.s2, "p_651->g_463.s2", print_hash_value);
    transparent_crc(p_651->g_463.s3, "p_651->g_463.s3", print_hash_value);
    transparent_crc(p_651->g_463.s4, "p_651->g_463.s4", print_hash_value);
    transparent_crc(p_651->g_463.s5, "p_651->g_463.s5", print_hash_value);
    transparent_crc(p_651->g_463.s6, "p_651->g_463.s6", print_hash_value);
    transparent_crc(p_651->g_463.s7, "p_651->g_463.s7", print_hash_value);
    transparent_crc(p_651->g_463.s8, "p_651->g_463.s8", print_hash_value);
    transparent_crc(p_651->g_463.s9, "p_651->g_463.s9", print_hash_value);
    transparent_crc(p_651->g_463.sa, "p_651->g_463.sa", print_hash_value);
    transparent_crc(p_651->g_463.sb, "p_651->g_463.sb", print_hash_value);
    transparent_crc(p_651->g_463.sc, "p_651->g_463.sc", print_hash_value);
    transparent_crc(p_651->g_463.sd, "p_651->g_463.sd", print_hash_value);
    transparent_crc(p_651->g_463.se, "p_651->g_463.se", print_hash_value);
    transparent_crc(p_651->g_463.sf, "p_651->g_463.sf", print_hash_value);
    transparent_crc(p_651->g_469.x, "p_651->g_469.x", print_hash_value);
    transparent_crc(p_651->g_469.y, "p_651->g_469.y", print_hash_value);
    transparent_crc(p_651->g_469.z, "p_651->g_469.z", print_hash_value);
    transparent_crc(p_651->g_469.w, "p_651->g_469.w", print_hash_value);
    transparent_crc(p_651->g_473.x, "p_651->g_473.x", print_hash_value);
    transparent_crc(p_651->g_473.y, "p_651->g_473.y", print_hash_value);
    transparent_crc(p_651->g_488, "p_651->g_488", print_hash_value);
    transparent_crc(p_651->g_489.x, "p_651->g_489.x", print_hash_value);
    transparent_crc(p_651->g_489.y, "p_651->g_489.y", print_hash_value);
    transparent_crc(p_651->g_489.z, "p_651->g_489.z", print_hash_value);
    transparent_crc(p_651->g_489.w, "p_651->g_489.w", print_hash_value);
    transparent_crc(p_651->g_531.s0, "p_651->g_531.s0", print_hash_value);
    transparent_crc(p_651->g_531.s1, "p_651->g_531.s1", print_hash_value);
    transparent_crc(p_651->g_531.s2, "p_651->g_531.s2", print_hash_value);
    transparent_crc(p_651->g_531.s3, "p_651->g_531.s3", print_hash_value);
    transparent_crc(p_651->g_531.s4, "p_651->g_531.s4", print_hash_value);
    transparent_crc(p_651->g_531.s5, "p_651->g_531.s5", print_hash_value);
    transparent_crc(p_651->g_531.s6, "p_651->g_531.s6", print_hash_value);
    transparent_crc(p_651->g_531.s7, "p_651->g_531.s7", print_hash_value);
    transparent_crc(p_651->g_531.s8, "p_651->g_531.s8", print_hash_value);
    transparent_crc(p_651->g_531.s9, "p_651->g_531.s9", print_hash_value);
    transparent_crc(p_651->g_531.sa, "p_651->g_531.sa", print_hash_value);
    transparent_crc(p_651->g_531.sb, "p_651->g_531.sb", print_hash_value);
    transparent_crc(p_651->g_531.sc, "p_651->g_531.sc", print_hash_value);
    transparent_crc(p_651->g_531.sd, "p_651->g_531.sd", print_hash_value);
    transparent_crc(p_651->g_531.se, "p_651->g_531.se", print_hash_value);
    transparent_crc(p_651->g_531.sf, "p_651->g_531.sf", print_hash_value);
    transparent_crc(p_651->g_532.x, "p_651->g_532.x", print_hash_value);
    transparent_crc(p_651->g_532.y, "p_651->g_532.y", print_hash_value);
    transparent_crc(p_651->g_532.z, "p_651->g_532.z", print_hash_value);
    transparent_crc(p_651->g_532.w, "p_651->g_532.w", print_hash_value);
    transparent_crc(p_651->g_534.x, "p_651->g_534.x", print_hash_value);
    transparent_crc(p_651->g_534.y, "p_651->g_534.y", print_hash_value);
    transparent_crc(p_651->g_550, "p_651->g_550", print_hash_value);
    transparent_crc(p_651->g_580, "p_651->g_580", print_hash_value);
    transparent_crc(p_651->g_628, "p_651->g_628", print_hash_value);
    transparent_crc(p_651->v_collective, "p_651->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 92; i++)
            transparent_crc(p_651->l_special_values[i], "p_651->l_special_values[i]", print_hash_value);
    transparent_crc(p_651->l_comm_values[get_linear_local_id()], "p_651->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_651->g_comm_values[get_linear_group_id() * 47 + get_linear_local_id()], "p_651->g_comm_values[get_linear_group_id() * 47 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
