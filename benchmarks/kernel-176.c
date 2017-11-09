// --atomics 92 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 10,19,3 -l 2,1,1
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

// Seed: 1236928251

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_2;
    int16_t g_16;
    VECTOR(int16_t, 4) g_25;
    int16_t *g_24;
    int32_t g_41;
    volatile VECTOR(uint64_t, 8) g_77;
    uint64_t g_93[2];
    uint16_t g_101;
    int32_t g_103;
    int32_t g_104;
    int64_t *g_105;
    uint32_t g_334;
    int16_t g_339[8][10][3];
    int32_t g_340;
    int32_t g_341;
    int64_t g_342[6];
    volatile uint32_t g_343;
    uint32_t g_380;
    volatile VECTOR(uint16_t, 4) g_404;
    volatile VECTOR(uint16_t, 4) g_405;
    uint32_t g_411;
    volatile VECTOR(int32_t, 2) g_417;
    uint64_t g_442;
    VECTOR(uint64_t, 8) g_443;
    volatile VECTOR(int8_t, 16) g_494;
    uint32_t g_506[10];
    uint64_t g_535;
    VECTOR(uint16_t, 2) g_600;
    volatile VECTOR(uint16_t, 8) g_601;
    int32_t * volatile g_613;
    volatile uint16_t * volatile g_629;
    volatile uint16_t * volatile * volatile g_628;
    VECTOR(int64_t, 4) g_630;
    uint8_t g_639[1][1][3];
    int8_t g_641;
    VECTOR(int16_t, 16) g_657;
    VECTOR(uint16_t, 4) g_662;
    int8_t *g_675;
    volatile uint64_t **g_678;
    int32_t * volatile *g_692;
    int32_t * volatile ** volatile g_691;
    int64_t **g_832;
    int64_t ***g_831;
    VECTOR(uint64_t, 4) g_881;
    volatile VECTOR(int64_t, 8) g_933;
    VECTOR(int8_t, 8) g_938;
    volatile int32_t g_943;
    int8_t g_945;
    volatile VECTOR(int16_t, 4) g_957;
    int32_t g_984;
    volatile VECTOR(int16_t, 16) g_1007;
    VECTOR(int16_t, 4) g_1008;
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
uint64_t  func_1(struct S0 * p_1040);
int32_t  func_5(uint32_t  p_6, int16_t  p_7, int32_t  p_8, uint32_t  p_9, int16_t  p_10, struct S0 * p_1040);
uint8_t  func_20(int16_t * p_21, uint32_t  p_22, int8_t  p_23, struct S0 * p_1040);
int8_t  func_26(uint32_t  p_27, int16_t * p_28, struct S0 * p_1040);
uint8_t  func_33(uint32_t  p_34, int16_t * p_35, uint32_t  p_36, int16_t * p_37, struct S0 * p_1040);
int32_t * func_42(int32_t * p_43, uint16_t  p_44, int32_t  p_45, struct S0 * p_1040);
int32_t * func_46(int32_t * p_47, struct S0 * p_1040);
int32_t * func_48(int64_t  p_49, struct S0 * p_1040);
uint64_t  func_56(int32_t  p_57, int32_t  p_58, int32_t  p_59, int64_t * p_60, struct S0 * p_1040);
int16_t  func_61(uint16_t  p_62, uint32_t  p_63, int32_t * p_64, struct S0 * p_1040);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1040->g_2 p_1040->g_25 p_1040->g_comm_values p_1040->g_93 p_1040->g_24 p_1040->g_101 p_1040->g_105 p_1040->g_600 p_1040->g_1007 p_1040->g_1008 p_1040->g_984 p_1040->g_662 p_1040->g_443 p_1040->g_641 p_1040->g_945 p_1040->g_675 p_1040->g_342 p_1040->g_933 p_1040->g_343 p_1040->g_104 p_1040->g_77 p_1040->g_340 p_1040->g_41 p_1040->g_334 p_1040->g_341 p_1040->g_692
 * writes: p_1040->g_2 p_1040->g_101 p_1040->g_41 p_1040->g_103 p_1040->g_104 p_1040->g_334 p_1040->g_443 p_1040->g_945 p_1040->g_16 p_1040->g_343 p_1040->l_comm_values p_1040->g_339 p_1040->g_341 p_1040->g_613
 */
uint64_t  func_1(struct S0 * p_1040)
{ /* block id: 4 */
    int32_t l_13 = 2L;
    int16_t *l_38 = (void*)0;
    int64_t l_682 = 0x27FAB9B972AB712DL;
    uint32_t l_985 = 0x44C20965L;
    VECTOR(uint32_t, 8) l_988 = (VECTOR(uint32_t, 8))(4UL, (VECTOR(uint32_t, 4))(4UL, (VECTOR(uint32_t, 2))(4UL, 1UL), 1UL), 1UL, 4UL, 1UL);
    uint32_t l_1002 = 0xD7E6895AL;
    int32_t *l_1004[3];
    uint64_t *l_1025[3];
    VECTOR(int16_t, 2) l_1030 = (VECTOR(int16_t, 2))(8L, 0x61C6L);
    int64_t l_1031 = 0x69CC0F3836C7FCA4L;
    uint64_t **l_1035 = &l_1025[0];
    int8_t *l_1036 = &p_1040->g_945;
    uint32_t l_1037 = 0x2F6F4773L;
    int16_t *l_1038 = &p_1040->g_16;
    int64_t l_1039 = 0x0CEF5ED755BD3072L;
    int i;
    for (i = 0; i < 3; i++)
        l_1004[i] = &p_1040->g_2;
    for (i = 0; i < 3; i++)
        l_1025[i] = &p_1040->g_535;
    for (p_1040->g_2 = (-28); (p_1040->g_2 <= (-6)); p_1040->g_2++)
    { /* block id: 7 */
        int16_t *l_14 = (void*)0;
        int16_t *l_15 = &p_1040->g_16;
        uint8_t l_17 = 0UL;
        int32_t *l_982 = (void*)0;
        int32_t *l_983[5][2] = {{&p_1040->g_984,&p_1040->g_984},{&p_1040->g_984,&p_1040->g_984},{&p_1040->g_984,&p_1040->g_984},{&p_1040->g_984,&p_1040->g_984},{&p_1040->g_984,&p_1040->g_984}};
        uint32_t *l_989 = &p_1040->g_411;
        int32_t l_1003 = 0x687BA3DAL;
        int i, j;
        (1 + 1);
    }
    (*p_1040->g_692) = func_42(func_46(l_1004[2], p_1040), p_1040->g_600.x, ((safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 2))(p_1040->g_1007.s56)).xyyy, ((VECTOR(int16_t, 4))(p_1040->g_1008.wzyx))))).hi, (int16_t)(((((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(0xE8A5L, 11)), (((((*l_1038) = ((safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s((p_1040->g_1008.w >= (+((((*l_1036) &= (p_1040->g_984 , ((safe_div_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u(FAKE_DIVERGE(p_1040->group_2_offset, get_group_id(2), 10), ((p_1040->g_2 &= (+(safe_add_func_uint32_t_u_u(p_1040->g_662.z, ((p_1040->g_443.s4--) & (safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 4))(l_1030.yxxy)).z, 3))))))) , l_1031))) >= (safe_mod_func_uint32_t_u_u(((safe_unary_minus_func_uint32_t_u((((*l_1035) = &p_1040->g_535) != (void*)0))) & p_1040->g_641), 1UL))), p_1040->g_93[0])) == GROUP_DIVERGE(1, 1)))) ^ 4UL) , 0x61B26574L))), l_1037)), (*p_1040->g_675))) || p_1040->g_93[0])) != p_1040->g_342[3]) >= 0UL) , (*p_1040->g_675)))) > (-6L)) != p_1040->g_933.s6) < p_1040->g_600.x) & 0x2EL)))).yxyxxyxy)).s6, l_1039)) == 0xB9A79D78L), p_1040);
    return p_1040->g_104;
}


/* ------------------------------------------ */
/* 
 * reads : p_1040->g_380 p_1040->g_691 p_1040->g_630 p_1040->g_692 p_1040->g_613 p_1040->g_104 p_1040->g_405 p_1040->g_601 p_1040->g_639 p_1040->g_411 p_1040->g_25 p_1040->g_comm_values p_1040->g_93 p_1040->g_24 p_1040->g_101 p_1040->g_105 p_1040->g_41 p_1040->g_404 p_1040->g_641 p_1040->g_628 p_1040->g_629 p_1040->g_506 p_1040->g_334 p_1040->g_16
 * writes: p_1040->g_380 p_1040->g_675 p_1040->g_104 p_1040->g_16 p_1040->g_25 p_1040->g_101 p_1040->g_41 p_1040->g_103 p_1040->g_334 p_1040->g_613 p_1040->g_411 p_1040->g_641 p_1040->g_831
 */
int32_t  func_5(uint32_t  p_6, int16_t  p_7, int32_t  p_8, uint32_t  p_9, int16_t  p_10, struct S0 * p_1040)
{ /* block id: 318 */
    int8_t *l_693 = &p_1040->g_641;
    int32_t l_699 = 3L;
    int32_t *l_769[10] = {&p_1040->g_104,&p_1040->g_104,&p_1040->g_104,&p_1040->g_104,&p_1040->g_104,&p_1040->g_104,&p_1040->g_104,&p_1040->g_104,&p_1040->g_104,&p_1040->g_104};
    int64_t l_770[7] = {0x2C795F87F31B34E8L,0x2C795F87F31B34E8L,0x2C795F87F31B34E8L,0x2C795F87F31B34E8L,0x2C795F87F31B34E8L,0x2C795F87F31B34E8L,0x2C795F87F31B34E8L};
    uint32_t l_771 = 9UL;
    int64_t **l_805 = &p_1040->g_105;
    int64_t ***l_833 = &p_1040->g_832;
    int64_t l_868[1][1][7] = {{{0x4AA0775A6F6CCFCAL,8L,0x4AA0775A6F6CCFCAL,0x4AA0775A6F6CCFCAL,8L,0x4AA0775A6F6CCFCAL,0x4AA0775A6F6CCFCAL}}};
    VECTOR(int16_t, 8) l_883 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 8L), 8L), 8L, 0L, 8L);
    VECTOR(uint16_t, 16) l_890 = (VECTOR(uint16_t, 16))(0x0793L, (VECTOR(uint16_t, 4))(0x0793L, (VECTOR(uint16_t, 2))(0x0793L, 1UL), 1UL), 1UL, 0x0793L, 1UL, (VECTOR(uint16_t, 2))(0x0793L, 1UL), (VECTOR(uint16_t, 2))(0x0793L, 1UL), 0x0793L, 1UL, 0x0793L, 1UL);
    int i, j, k;
    for (p_1040->g_380 = 0; (p_1040->g_380 <= 34); p_1040->g_380 = safe_add_func_uint32_t_u_u(p_1040->g_380, 7))
    { /* block id: 321 */
        int32_t *l_698[2][4] = {{&p_1040->g_2,&p_1040->g_104,&p_1040->g_2,&p_1040->g_2},{&p_1040->g_2,&p_1040->g_104,&p_1040->g_2,&p_1040->g_2}};
        int i, j;
        atomic_min(&p_1040->l_atomic_reduction[0], (((+((safe_div_func_int8_t_s_s(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 16))((p_6 < (safe_add_func_int8_t_s_s(0x5FL, (((**p_1040->g_692) = ((safe_add_func_uint16_t_u_u(((void*)0 == p_1040->g_691), (((p_1040->g_675 = l_693) != (((safe_mul_func_int8_t_s_s(p_1040->g_630.w, p_7)) || (safe_add_func_int32_t_s_s(((void*)0 == l_698[0][1]), p_8))) , (void*)0)) != l_699))) > 0x7DE8915D6E470EFFL)) <= 1UL)))), ((VECTOR(int8_t, 2))(0x62L)), 0x7CL, (-1L), p_9, 0x15L, ((VECTOR(int8_t, 2))((-2L))), 0x35L, ((VECTOR(int8_t, 2))(8L)), l_699, ((VECTOR(int8_t, 2))(7L)), 0x0AL)).sca50, ((VECTOR(int8_t, 4))(0x41L))))).yxyyyyyw, ((VECTOR(int8_t, 8))(9L))))).s2, 0x73L)) || (*p_1040->g_613))) , p_1040->g_630.z) <= p_9));
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_1040->v_collective += p_1040->l_atomic_reduction[0];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        (**p_1040->g_692) &= ((safe_lshift_func_uint16_t_u_s(p_6, 14)) , (l_699 < (-8L)));
    }
    if ((atomic_inc(&p_1040->g_atomic_input[92 * get_linear_group_id() + 64]) == 7))
    { /* block id: 328 */
        VECTOR(int32_t, 2) l_702 = (VECTOR(int32_t, 2))(0x5D2570C3L, 0x718AB60AL);
        VECTOR(int32_t, 8) l_703 = (VECTOR(int32_t, 8))(0x15054A83L, (VECTOR(int32_t, 4))(0x15054A83L, (VECTOR(int32_t, 2))(0x15054A83L, 0L), 0L), 0L, 0x15054A83L, 0L);
        int i;
        if (((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_702.yxyy)).even)).xxxy)).xyyyxzxx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_703.s4014)).xyxxyyzwzxxxyywz)))).hi))).s0)
        { /* block id: 329 */
            int32_t l_704 = 2L;
            uint64_t l_705 = 0x16A5926089FA300EL;
            int32_t l_708 = 1L;
            ++l_705;
            l_702.y = l_708;
            for (l_705 = 0; (l_705 < 57); l_705 = safe_add_func_int8_t_s_s(l_705, 1))
            { /* block id: 334 */
                int16_t l_711 = 0x7A6AL;
                uint16_t l_712[3][8][9] = {{{0UL,1UL,0xCD9DL,65529UL,0x21A6L,0xFC48L,0x1DD7L,65535UL,0x4AA0L},{0UL,1UL,0xCD9DL,65529UL,0x21A6L,0xFC48L,0x1DD7L,65535UL,0x4AA0L},{0UL,1UL,0xCD9DL,65529UL,0x21A6L,0xFC48L,0x1DD7L,65535UL,0x4AA0L},{0UL,1UL,0xCD9DL,65529UL,0x21A6L,0xFC48L,0x1DD7L,65535UL,0x4AA0L},{0UL,1UL,0xCD9DL,65529UL,0x21A6L,0xFC48L,0x1DD7L,65535UL,0x4AA0L},{0UL,1UL,0xCD9DL,65529UL,0x21A6L,0xFC48L,0x1DD7L,65535UL,0x4AA0L},{0UL,1UL,0xCD9DL,65529UL,0x21A6L,0xFC48L,0x1DD7L,65535UL,0x4AA0L},{0UL,1UL,0xCD9DL,65529UL,0x21A6L,0xFC48L,0x1DD7L,65535UL,0x4AA0L}},{{0UL,1UL,0xCD9DL,65529UL,0x21A6L,0xFC48L,0x1DD7L,65535UL,0x4AA0L},{0UL,1UL,0xCD9DL,65529UL,0x21A6L,0xFC48L,0x1DD7L,65535UL,0x4AA0L},{0UL,1UL,0xCD9DL,65529UL,0x21A6L,0xFC48L,0x1DD7L,65535UL,0x4AA0L},{0UL,1UL,0xCD9DL,65529UL,0x21A6L,0xFC48L,0x1DD7L,65535UL,0x4AA0L},{0UL,1UL,0xCD9DL,65529UL,0x21A6L,0xFC48L,0x1DD7L,65535UL,0x4AA0L},{0UL,1UL,0xCD9DL,65529UL,0x21A6L,0xFC48L,0x1DD7L,65535UL,0x4AA0L},{0UL,1UL,0xCD9DL,65529UL,0x21A6L,0xFC48L,0x1DD7L,65535UL,0x4AA0L},{0UL,1UL,0xCD9DL,65529UL,0x21A6L,0xFC48L,0x1DD7L,65535UL,0x4AA0L}},{{0UL,1UL,0xCD9DL,65529UL,0x21A6L,0xFC48L,0x1DD7L,65535UL,0x4AA0L},{0UL,1UL,0xCD9DL,65529UL,0x21A6L,0xFC48L,0x1DD7L,65535UL,0x4AA0L},{0UL,1UL,0xCD9DL,65529UL,0x21A6L,0xFC48L,0x1DD7L,65535UL,0x4AA0L},{0UL,1UL,0xCD9DL,65529UL,0x21A6L,0xFC48L,0x1DD7L,65535UL,0x4AA0L},{0UL,1UL,0xCD9DL,65529UL,0x21A6L,0xFC48L,0x1DD7L,65535UL,0x4AA0L},{0UL,1UL,0xCD9DL,65529UL,0x21A6L,0xFC48L,0x1DD7L,65535UL,0x4AA0L},{0UL,1UL,0xCD9DL,65529UL,0x21A6L,0xFC48L,0x1DD7L,65535UL,0x4AA0L},{0UL,1UL,0xCD9DL,65529UL,0x21A6L,0xFC48L,0x1DD7L,65535UL,0x4AA0L}}};
                int i, j, k;
                l_711 |= 0x46298FD4L;
                ++l_712[1][4][0];
            }
        }
        else
        { /* block id: 338 */
            int64_t l_715 = 0L;
            int32_t l_716 = 0L;
            uint64_t l_717[2][5] = {{0xDC06253DA6F60AF1L,0xDC06253DA6F60AF1L,0xDC06253DA6F60AF1L,0xDC06253DA6F60AF1L,0xDC06253DA6F60AF1L},{0xDC06253DA6F60AF1L,0xDC06253DA6F60AF1L,0xDC06253DA6F60AF1L,0xDC06253DA6F60AF1L,0xDC06253DA6F60AF1L}};
            uint32_t l_720[7];
            int i, j;
            for (i = 0; i < 7; i++)
                l_720[i] = 0x18F12C1CL;
            --l_717[1][1];
            l_702.x &= l_720[1];
        }
        for (l_703.s7 = 0; (l_703.s7 == 22); ++l_703.s7)
        { /* block id: 344 */
            uint8_t l_723 = 0xC8L;
            uint32_t l_726[3];
            uint16_t l_727 = 0UL;
            uint16_t l_728 = 65534UL;
            uint32_t l_729 = 4UL;
            VECTOR(int32_t, 16) l_730 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x4752FB94L), 0x4752FB94L), 0x4752FB94L, (-1L), 0x4752FB94L, (VECTOR(int32_t, 2))((-1L), 0x4752FB94L), (VECTOR(int32_t, 2))((-1L), 0x4752FB94L), (-1L), 0x4752FB94L, (-1L), 0x4752FB94L);
            uint32_t l_731 = 0xF6A2DCE7L;
            uint16_t l_732 = 0xFB56L;
            VECTOR(uint16_t, 16) l_733 = (VECTOR(uint16_t, 16))(0xBB73L, (VECTOR(uint16_t, 4))(0xBB73L, (VECTOR(uint16_t, 2))(0xBB73L, 0x8AEBL), 0x8AEBL), 0x8AEBL, 0xBB73L, 0x8AEBL, (VECTOR(uint16_t, 2))(0xBB73L, 0x8AEBL), (VECTOR(uint16_t, 2))(0xBB73L, 0x8AEBL), 0xBB73L, 0x8AEBL, 0xBB73L, 0x8AEBL);
            uint64_t l_734 = 3UL;
            uint32_t l_735[4][4][1];
            VECTOR(int8_t, 4) l_736 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 8L), 8L);
            int64_t l_737 = (-1L);
            int8_t l_738[5];
            int32_t l_739 = 0x40796A4FL;
            VECTOR(int8_t, 8) l_740 = (VECTOR(int8_t, 8))(0x62L, (VECTOR(int8_t, 4))(0x62L, (VECTOR(int8_t, 2))(0x62L, 0x64L), 0x64L), 0x64L, 0x62L, 0x64L);
            VECTOR(int8_t, 8) l_741 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-8L)), (-8L)), (-8L), 1L, (-8L));
            VECTOR(int8_t, 4) l_742 = (VECTOR(int8_t, 4))(0x5EL, (VECTOR(int8_t, 2))(0x5EL, 0x6BL), 0x6BL);
            VECTOR(int8_t, 8) l_743 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x43L), 0x43L), 0x43L, 1L, 0x43L);
            VECTOR(int8_t, 16) l_744 = (VECTOR(int8_t, 16))((-9L), (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), 0x10L), 0x10L), 0x10L, (-9L), 0x10L, (VECTOR(int8_t, 2))((-9L), 0x10L), (VECTOR(int8_t, 2))((-9L), 0x10L), (-9L), 0x10L, (-9L), 0x10L);
            VECTOR(int8_t, 16) l_745 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x42L), 0x42L), 0x42L, (-1L), 0x42L, (VECTOR(int8_t, 2))((-1L), 0x42L), (VECTOR(int8_t, 2))((-1L), 0x42L), (-1L), 0x42L, (-1L), 0x42L);
            VECTOR(int8_t, 8) l_746 = (VECTOR(int8_t, 8))(0x7AL, (VECTOR(int8_t, 4))(0x7AL, (VECTOR(int8_t, 2))(0x7AL, 5L), 5L), 5L, 0x7AL, 5L);
            VECTOR(int8_t, 4) l_747 = (VECTOR(int8_t, 4))(0x7AL, (VECTOR(int8_t, 2))(0x7AL, 0x7BL), 0x7BL);
            VECTOR(int8_t, 4) l_748 = (VECTOR(int8_t, 4))(0x12L, (VECTOR(int8_t, 2))(0x12L, 0x59L), 0x59L);
            VECTOR(int8_t, 2) l_749 = (VECTOR(int8_t, 2))((-1L), 0x39L);
            uint32_t l_750 = 0x4A5C9880L;
            int32_t l_751 = (-1L);
            int8_t l_752 = 0x61L;
            int32_t l_753 = (-1L);
            uint32_t l_754[5] = {0x646DF653L,0x646DF653L,0x646DF653L,0x646DF653L,0x646DF653L};
            int64_t l_755[5];
            int8_t l_756 = (-1L);
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_726[i] = 0UL;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_735[i][j][k] = 0UL;
                }
            }
            for (i = 0; i < 5; i++)
                l_738[i] = 5L;
            for (i = 0; i < 5; i++)
                l_755[i] = 6L;
            l_723++;
            l_727 = l_726[0];
            if ((l_756 &= ((VECTOR(int32_t, 4))((l_728 , l_729), ((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(l_730.sfcfd96b87150a858)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((l_723 |= l_731) , (l_702.x = l_732)), ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(0x582742FFL, 0x55B4D035L, 0x4AB7435EL, (((l_735[1][3][0] = (((VECTOR(uint16_t, 8))(l_733.sd41dd8e7)).s0 , (l_734 = 0x6905D6FFL))) , (l_753 &= ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_736.xx)), 0x35L, 0x34L)).xwxyzwzz, (int8_t)(l_737 , (l_752 = ((VECTOR(int8_t, 16))((l_739 = l_738[0]), 0x6CL, ((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(9L, ((VECTOR(int8_t, 4))(l_740.s1726)), 1L, 0x0FL, 1L)).s50, ((VECTOR(int8_t, 16))(l_741.s2674674265200026)).sae, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),VECTOR(int8_t, 8),((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 8))(l_742.xxwyxzzz)).s0560513555336201, ((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(l_743.s50360141)))).s3033302424274375, ((VECTOR(int8_t, 2))(l_744.s83)).yxxxxyxyxyxyyyxx, ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 16))(l_745.s7d476422f3b06c23)).s7d, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 16))(5L, ((VECTOR(int8_t, 2))(l_746.s73)), ((VECTOR(int8_t, 2))(l_747.wz)), ((VECTOR(int8_t, 2))(l_748.wz)).even, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_749.xyxxyxxx)).s41)).xyyxxxxxyyxyyyxx)).s3a)), (-2L), 0L)), (-8L), ((VECTOR(int8_t, 2))(3L)), (-3L))), 0x49L, 0x15L)).sd6, ((VECTOR(int8_t, 2))(0x4CL))))).xyxxxyyx)).s27))).xyxyxyyxyyxyxxyx)))))).even, ((VECTOR(int8_t, 8))(0x5BL))))), ((VECTOR(int8_t, 8))(0L)), ((VECTOR(int8_t, 8))((-3L)))))).s56)).xyxx, ((VECTOR(int8_t, 4))(1L))))))).odd))).xxyxyyyx)).s07, (int8_t)l_750, (int8_t)l_751))), 0x55L, ((VECTOR(int8_t, 8))(1L)), 2L, 0x55L, (-7L))).sf))))).odd)).even)).hi)) , l_754[4]), 0x3CDB8D55L, l_755[0], (-6L), 0x1FD13F4CL)).odd, ((VECTOR(int32_t, 4))(2L))))), 4L, 0L, 0x6EC0C892L)).s16)).xyyyxyyxyyxyxyxy)).sf9, ((VECTOR(int32_t, 2))(0x041B52A9L))))).yyyx)).xzxwyzzwwxywzyyx))).sd, 0x1E544DC3L, (-4L))).w))
            { /* block id: 355 */
                int32_t *l_757 = (void*)0;
                int32_t *l_758 = (void*)0;
                int32_t l_760 = 8L;
                int32_t *l_759 = &l_760;
                uint32_t l_761 = 0UL;
                int32_t l_762 = (-2L);
                int32_t *l_763 = &l_760;
                int32_t *l_764 = (void*)0;
                int32_t *l_765 = &l_760;
                l_759 = (l_758 = l_757);
                l_762 &= (l_751 = l_761);
                l_763 = (void*)0;
                l_765 = l_764;
            }
            else
            { /* block id: 362 */
                uint64_t l_766 = 0x1A6DDAB4597A8FCAL;
                --l_766;
            }
        }
        unsigned int result = 0;
        result += l_702.y;
        result += l_702.x;
        result += l_703.s7;
        result += l_703.s6;
        result += l_703.s5;
        result += l_703.s4;
        result += l_703.s3;
        result += l_703.s2;
        result += l_703.s1;
        result += l_703.s0;
        atomic_add(&p_1040->g_special_values[92 * get_linear_group_id() + 64], result);
    }
    else
    { /* block id: 366 */
        (1 + 1);
    }
    --l_771;
    if ((safe_mod_func_uint8_t_u_u(p_1040->g_104, p_9)))
    { /* block id: 370 */
        int16_t *l_776 = (void*)0;
        int16_t *l_777 = &p_1040->g_16;
        int32_t l_780[1];
        int16_t *l_785 = (void*)0;
        VECTOR(int32_t, 16) l_786 = (VECTOR(int32_t, 16))(0x010B1945L, (VECTOR(int32_t, 4))(0x010B1945L, (VECTOR(int32_t, 2))(0x010B1945L, 3L), 3L), 3L, 0x010B1945L, 3L, (VECTOR(int32_t, 2))(0x010B1945L, 3L), (VECTOR(int32_t, 2))(0x010B1945L, 3L), 0x010B1945L, 3L, 0x010B1945L, 3L);
        int i;
        for (i = 0; i < 1; i++)
            l_780[i] = 0x361B25AAL;
        (*p_1040->g_692) = func_46(func_48((((p_8 & ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(246UL, 0x8FL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))((p_7 && p_1040->g_405.w), (((*l_777) = 8L) < ((safe_rshift_func_int8_t_s_s((p_8 == l_780[0]), 2)) | (p_1040->g_25.w = ((safe_sub_func_uint64_t_u_u(p_9, ((safe_mul_func_uint16_t_u_u((246UL <= p_1040->g_601.s4), l_780[0])) , p_1040->g_639[0][0][0]))) == p_1040->g_380)))), ((VECTOR(uint8_t, 4))(0x7EL)), 0UL, 0xBEL)).even)), 0xF4L, 0x51L)).s1707302256552655)).sa9)).hi) & p_1040->g_411) & GROUP_DIVERGE(2, 1)), p_1040), p_1040);
        (**p_1040->g_692) ^= ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))(l_786.s97))))).hi;
    }
    else
    { /* block id: 375 */
        int64_t **l_804[8] = {&p_1040->g_105,&p_1040->g_105,&p_1040->g_105,&p_1040->g_105,&p_1040->g_105,&p_1040->g_105,&p_1040->g_105,&p_1040->g_105};
        int64_t ***l_803[6][1][6] = {{{&l_804[5],(void*)0,(void*)0,&l_804[5],(void*)0,&l_804[5]}},{{&l_804[5],(void*)0,(void*)0,&l_804[5],(void*)0,&l_804[5]}},{{&l_804[5],(void*)0,(void*)0,&l_804[5],(void*)0,&l_804[5]}},{{&l_804[5],(void*)0,(void*)0,&l_804[5],(void*)0,&l_804[5]}},{{&l_804[5],(void*)0,(void*)0,&l_804[5],(void*)0,&l_804[5]}},{{&l_804[5],(void*)0,(void*)0,&l_804[5],(void*)0,&l_804[5]}}};
        uint32_t *l_806 = &p_1040->g_411;
        int32_t l_807 = 0x6D8EC9A7L;
        uint8_t l_808 = 0UL;
        uint32_t l_867 = 0x86349D1CL;
        uint16_t *l_875 = (void*)0;
        int i, j, k;
        (**p_1040->g_692) = ((p_1040->g_404.x , (safe_add_func_uint32_t_u_u(p_7, ((safe_add_func_int64_t_s_s(0L, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(min(((VECTOR(uint64_t, 16))(((safe_rshift_func_int8_t_s_s(((safe_add_func_int16_t_s_s(0L, (p_10 = (safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u(GROUP_DIVERGE(1, 1), (safe_div_func_int32_t_s_s((l_769[0] != &p_6), (+((((l_805 = (void*)0) == &p_1040->g_105) <= ((*l_806) = p_8)) && GROUP_DIVERGE(1, 1))))))), 0UL)), p_6))))) != l_807), p_1040->g_93[0])) ^ p_9), p_8, p_9, p_8, ((VECTOR(uint64_t, 4))(0x78C54BDD4F4E5F02L)), ((VECTOR(uint64_t, 8))(0xD5A974944D035C41L)))).hi, (uint64_t)l_807))).even)).x)) > p_8)))) != l_808);
        if (l_808)
        { /* block id: 380 */
            uint8_t *l_814 = &l_808;
            uint16_t *l_827 = &p_1040->g_101;
            int64_t ***l_828 = &l_804[5];
            int64_t ****l_829 = (void*)0;
            int64_t ****l_830[2][3][4] = {{{&l_803[3][0][2],&l_803[3][0][3],&l_803[0][0][3],&l_828},{&l_803[3][0][2],&l_803[3][0][3],&l_803[0][0][3],&l_828},{&l_803[3][0][2],&l_803[3][0][3],&l_803[0][0][3],&l_828}},{{&l_803[3][0][2],&l_803[3][0][3],&l_803[0][0][3],&l_828},{&l_803[3][0][2],&l_803[3][0][3],&l_803[0][0][3],&l_828},{&l_803[3][0][2],&l_803[3][0][3],&l_803[0][0][3],&l_828}}};
            VECTOR(uint16_t, 2) l_834 = (VECTOR(uint16_t, 2))(0x4ECEL, 0xC6D3L);
            int32_t l_838 = (-2L);
            int16_t *l_839 = (void*)0;
            uint64_t l_866 = 0xE2661A424F983308L;
            int64_t l_869 = 0x77465515CF6A3CA4L;
            int i, j, k;
            (*p_1040->g_692) = func_48((safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((*l_693) ^= (safe_unary_minus_func_uint64_t_u(18446744073709551610UL))), (++(*l_814)))), (safe_lshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u((!(safe_div_func_uint16_t_u_u(((*l_827) = ((*p_1040->g_628) == &p_1040->g_101)), (l_807 ^ (&l_805 == (l_833 = (p_1040->g_831 = l_828))))))), (&p_1040->g_105 != (((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(l_834.xy)))).lo , (void*)0)))) == (p_1040->g_25.y = (l_838 &= (safe_unary_minus_func_int8_t_s((safe_div_func_uint16_t_u_u(p_1040->g_506[7], 0x5E16L))))))) & 5L), p_1040->g_334)), p_8)), l_807)))), p_1040);
            for (p_1040->g_16 = 0; (p_1040->g_16 == (-8)); --p_1040->g_16)
            { /* block id: 391 */
                (*p_1040->g_692) = &l_807;
            }
            l_869 = ((safe_mod_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(((safe_mul_func_uint16_t_u_u(0xCE06L, (safe_mul_func_int8_t_s_s(((GROUP_DIVERGE(1, 1) != (!((safe_mod_func_uint16_t_u_u(0xF31FL, 0x63F1L)) > (l_808 <= (safe_mul_func_int8_t_s_s(((*l_693) &= (l_807 <= ((VECTOR(int32_t, 4))((safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(0xE6D0L, ((safe_unary_minus_func_uint64_t_u(l_807)) , ((((*l_806) ^= ((((safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((l_808 , FAKE_DIVERGE(p_1040->global_2_offset, get_global_id(2), 10)) , 0x61L), 0x42L, ((VECTOR(uint8_t, 2))(0xECL)), 0x2AL, ((VECTOR(uint8_t, 2))(0UL)), 0x63L)).s3766454105266303)))).s3e8a)).x , 0x5D6BL), l_866)), 0x735A0EA8L)) ^ p_8) ^ l_834.y) | p_7)) , l_834.x) , l_867)))) , p_6), FAKE_DIVERGE(p_1040->local_1_offset, get_local_id(1), 10))), 4L)), 0L)), p_6, 0L, (-1L))).z)), 1UL)))))) , (-1L)), p_1040->g_25.w)))) , l_838))), 0x29L)) , l_868[0][0][1]);
        }
        else
        { /* block id: 397 */
            int64_t *l_872 = &l_868[0][0][1];
            VECTOR(uint16_t, 2) l_891 = (VECTOR(uint16_t, 2))(65535UL, 0UL);
            int64_t *l_904 = &l_868[0][0][1];
            int16_t *l_917 = &p_1040->g_16;
            int32_t l_978 = 0x54820BAAL;
            int32_t l_980[8][7][4];
            int i, j, k;
            for (i = 0; i < 8; i++)
            {
                for (j = 0; j < 7; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_980[i][j][k] = 2L;
                }
            }
            for (l_867 = (-28); (l_867 < 19); l_867 = safe_add_func_int16_t_s_s(l_867, 3))
            { /* block id: 400 */
                uint64_t *l_873 = (void*)0;
                uint64_t *l_874 = &p_1040->g_93[0];
                VECTOR(int32_t, 8) l_882 = (VECTOR(int32_t, 8))(0x29A0BE15L, (VECTOR(int32_t, 4))(0x29A0BE15L, (VECTOR(int32_t, 2))(0x29A0BE15L, 0x728A7C80L), 0x728A7C80L), 0x728A7C80L, 0x29A0BE15L, 0x728A7C80L);
                int32_t l_940 = (-1L);
                int16_t l_948 = (-9L);
                int64_t *l_962 = (void*)0;
                int64_t l_981[7][4] = {{0x567723EB5FEE7EF9L,0x567723EB5FEE7EF9L,1L,0x63C0E3BD58833766L},{0x567723EB5FEE7EF9L,0x567723EB5FEE7EF9L,1L,0x63C0E3BD58833766L},{0x567723EB5FEE7EF9L,0x567723EB5FEE7EF9L,1L,0x63C0E3BD58833766L},{0x567723EB5FEE7EF9L,0x567723EB5FEE7EF9L,1L,0x63C0E3BD58833766L},{0x567723EB5FEE7EF9L,0x567723EB5FEE7EF9L,1L,0x63C0E3BD58833766L},{0x567723EB5FEE7EF9L,0x567723EB5FEE7EF9L,1L,0x63C0E3BD58833766L},{0x567723EB5FEE7EF9L,0x567723EB5FEE7EF9L,1L,0x63C0E3BD58833766L}};
                int i, j;
                (1 + 1);
            }
            return (**p_1040->g_692);
        }
        l_807 = ((FAKE_DIVERGE(p_1040->local_1_offset, get_local_id(1), 10) != 0L) & 0L);
    }
    return p_6;
}


/* ------------------------------------------ */
/* 
 * reads : p_1040->g_101 p_1040->g_600 p_1040->g_601 p_1040->g_103 p_1040->g_405 p_1040->g_41 p_1040->g_506 p_1040->g_443 p_1040->g_613 p_1040->g_442 p_1040->g_comm_values p_1040->g_339 p_1040->g_93 p_1040->g_628 p_1040->g_630 p_1040->g_657 p_1040->g_404 p_1040->g_662 p_1040->g_104 p_1040->g_25 p_1040->g_341 p_1040->g_24 p_1040->g_105 p_1040->g_343 p_1040->g_77 p_1040->g_340 p_1040->g_334 p_1040->g_342 p_1040->g_2 p_1040->g_678
 * writes: p_1040->g_411 p_1040->g_101 p_1040->g_600 p_1040->g_535 p_1040->g_103 p_1040->g_104 p_1040->g_342 p_1040->g_41 p_1040->g_641 p_1040->g_334 p_1040->g_343 p_1040->l_comm_values p_1040->g_339 p_1040->g_341 p_1040->g_675 p_1040->g_443
 */
uint8_t  func_20(int16_t * p_21, uint32_t  p_22, int8_t  p_23, struct S0 * p_1040)
{ /* block id: 286 */
    VECTOR(uint32_t, 16) l_588 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x6791665FL), 0x6791665FL), 0x6791665FL, 0UL, 0x6791665FL, (VECTOR(uint32_t, 2))(0UL, 0x6791665FL), (VECTOR(uint32_t, 2))(0UL, 0x6791665FL), 0UL, 0x6791665FL, 0UL, 0x6791665FL);
    int32_t *l_589[1];
    int32_t **l_590 = &l_589[0];
    int32_t *l_591 = &p_1040->g_41;
    uint32_t *l_592 = &p_1040->g_411;
    uint16_t *l_595 = &p_1040->g_101;
    uint16_t *l_602 = (void*)0;
    uint16_t *l_603 = (void*)0;
    uint16_t *l_604 = (void*)0;
    uint16_t *l_605[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    VECTOR(uint16_t, 4) l_608 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65535UL), 65535UL);
    int64_t ***l_611 = (void*)0;
    uint64_t *l_612[1][5][10] = {{{&p_1040->g_535,&p_1040->g_93[0],(void*)0,&p_1040->g_93[0],&p_1040->g_535,&p_1040->g_535,&p_1040->g_93[0],(void*)0,&p_1040->g_93[0],&p_1040->g_535},{&p_1040->g_535,&p_1040->g_93[0],(void*)0,&p_1040->g_93[0],&p_1040->g_535,&p_1040->g_535,&p_1040->g_93[0],(void*)0,&p_1040->g_93[0],&p_1040->g_535},{&p_1040->g_535,&p_1040->g_93[0],(void*)0,&p_1040->g_93[0],&p_1040->g_535,&p_1040->g_535,&p_1040->g_93[0],(void*)0,&p_1040->g_93[0],&p_1040->g_535},{&p_1040->g_535,&p_1040->g_93[0],(void*)0,&p_1040->g_93[0],&p_1040->g_535,&p_1040->g_535,&p_1040->g_93[0],(void*)0,&p_1040->g_93[0],&p_1040->g_535},{&p_1040->g_535,&p_1040->g_93[0],(void*)0,&p_1040->g_93[0],&p_1040->g_535,&p_1040->g_535,&p_1040->g_93[0],(void*)0,&p_1040->g_93[0],&p_1040->g_535}}};
    uint32_t l_624 = 4294967295UL;
    int64_t *l_627 = &p_1040->g_342[1];
    VECTOR(int32_t, 16) l_633 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x54BA5BA8L), 0x54BA5BA8L), 0x54BA5BA8L, 0L, 0x54BA5BA8L, (VECTOR(int32_t, 2))(0L, 0x54BA5BA8L), (VECTOR(int32_t, 2))(0L, 0x54BA5BA8L), 0L, 0x54BA5BA8L, 0L, 0x54BA5BA8L);
    VECTOR(uint16_t, 4) l_658 = (VECTOR(uint16_t, 4))(65527UL, (VECTOR(uint16_t, 2))(65527UL, 0x4326L), 0x4326L);
    VECTOR(uint16_t, 8) l_660 = (VECTOR(uint16_t, 8))(0xDC16L, (VECTOR(uint16_t, 4))(0xDC16L, (VECTOR(uint16_t, 2))(0xDC16L, 65535UL), 65535UL), 65535UL, 0xDC16L, 65535UL);
    VECTOR(uint64_t, 8) l_666 = (VECTOR(uint64_t, 8))(0xDD3CE1C608F04EA3L, (VECTOR(uint64_t, 4))(0xDD3CE1C608F04EA3L, (VECTOR(uint64_t, 2))(0xDD3CE1C608F04EA3L, 1UL), 1UL), 1UL, 0xDD3CE1C608F04EA3L, 1UL);
    int8_t *l_671 = &p_1040->g_641;
    int8_t **l_670 = &l_671;
    int8_t *l_672 = &p_1040->g_641;
    int8_t *l_674[8][2][9] = {{{&p_1040->g_641,&p_1040->g_641,&p_1040->g_641,(void*)0,&p_1040->g_641,(void*)0,(void*)0,&p_1040->g_641,&p_1040->g_641},{&p_1040->g_641,&p_1040->g_641,&p_1040->g_641,(void*)0,&p_1040->g_641,(void*)0,(void*)0,&p_1040->g_641,&p_1040->g_641}},{{&p_1040->g_641,&p_1040->g_641,&p_1040->g_641,(void*)0,&p_1040->g_641,(void*)0,(void*)0,&p_1040->g_641,&p_1040->g_641},{&p_1040->g_641,&p_1040->g_641,&p_1040->g_641,(void*)0,&p_1040->g_641,(void*)0,(void*)0,&p_1040->g_641,&p_1040->g_641}},{{&p_1040->g_641,&p_1040->g_641,&p_1040->g_641,(void*)0,&p_1040->g_641,(void*)0,(void*)0,&p_1040->g_641,&p_1040->g_641},{&p_1040->g_641,&p_1040->g_641,&p_1040->g_641,(void*)0,&p_1040->g_641,(void*)0,(void*)0,&p_1040->g_641,&p_1040->g_641}},{{&p_1040->g_641,&p_1040->g_641,&p_1040->g_641,(void*)0,&p_1040->g_641,(void*)0,(void*)0,&p_1040->g_641,&p_1040->g_641},{&p_1040->g_641,&p_1040->g_641,&p_1040->g_641,(void*)0,&p_1040->g_641,(void*)0,(void*)0,&p_1040->g_641,&p_1040->g_641}},{{&p_1040->g_641,&p_1040->g_641,&p_1040->g_641,(void*)0,&p_1040->g_641,(void*)0,(void*)0,&p_1040->g_641,&p_1040->g_641},{&p_1040->g_641,&p_1040->g_641,&p_1040->g_641,(void*)0,&p_1040->g_641,(void*)0,(void*)0,&p_1040->g_641,&p_1040->g_641}},{{&p_1040->g_641,&p_1040->g_641,&p_1040->g_641,(void*)0,&p_1040->g_641,(void*)0,(void*)0,&p_1040->g_641,&p_1040->g_641},{&p_1040->g_641,&p_1040->g_641,&p_1040->g_641,(void*)0,&p_1040->g_641,(void*)0,(void*)0,&p_1040->g_641,&p_1040->g_641}},{{&p_1040->g_641,&p_1040->g_641,&p_1040->g_641,(void*)0,&p_1040->g_641,(void*)0,(void*)0,&p_1040->g_641,&p_1040->g_641},{&p_1040->g_641,&p_1040->g_641,&p_1040->g_641,(void*)0,&p_1040->g_641,(void*)0,(void*)0,&p_1040->g_641,&p_1040->g_641}},{{&p_1040->g_641,&p_1040->g_641,&p_1040->g_641,(void*)0,&p_1040->g_641,(void*)0,(void*)0,&p_1040->g_641,&p_1040->g_641},{&p_1040->g_641,&p_1040->g_641,&p_1040->g_641,(void*)0,&p_1040->g_641,(void*)0,(void*)0,&p_1040->g_641,&p_1040->g_641}}};
    int8_t **l_673[8][1][4];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_589[i] = &p_1040->g_103;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
                l_673[i][j][k] = &l_674[6][1][0];
        }
    }
    (*p_1040->g_613) = (((((((*l_592) = (0UL | (((VECTOR(uint32_t, 16))(l_588.sdf8a2f8accddda50)).sc && (((*l_590) = l_589[0]) != (l_591 = l_591))))) , ((**l_590) = (((((safe_lshift_func_uint16_t_u_u(((*l_595)++), 6)) >= (((VECTOR(uint8_t, 2))(1UL, 0x26L)).odd < (((safe_lshift_func_uint16_t_u_s(GROUP_DIVERGE(1, 1), 8)) ^ (0xF4F3L | ((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(p_1040->g_600.xx)).xyxx)).ywxyzzxz, ((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0x99B6L, 65534UL)).xxyxyxyx)).s27)).yxyy)).zxwzyzwxxyyyxzyx)).even, ((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),uint16_t,((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(p_1040->g_601.s65)))).yxyxyyxy, (uint16_t)(p_1040->g_600.x = ((void*)0 != &l_595)), (uint16_t)(((p_1040->g_535 = (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_608.wxyzxzzy)).s7761130767066252)).odd, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(0UL, ((safe_mul_func_int8_t_s_s(((l_611 != (void*)0) > ((0x36382F2DL > (**l_590)) == p_1040->g_405.z)), (*l_591))) ^ FAKE_DIVERGE(p_1040->global_2_offset, get_global_id(2), 10)), 65535UL, 0x81E7L)).xyzwwzxyzyyxyyxz)).even))), ((VECTOR(uint16_t, 8))(65531UL))))).s7, 0x1B1DL))) > p_23) <= 6UL))))))), ((VECTOR(uint16_t, 8))(0x5143L))))).s4)) != (*l_591)))) , 0xCB429B38B0E704A1L) || p_1040->g_506[5]) && p_23))) <= l_608.x) , FAKE_DIVERGE(p_1040->group_2_offset, get_group_id(2), 10)) == 0x31AAL) , p_1040->g_443.s1);
    if (((**l_590) | (((((VECTOR(uint64_t, 4))(0x2259AC9A45C245B3L, 0x54866D13EBC7D372L, 0xF4D40C6CCBC04626L, 0x981A759401534D0DL)).y | (((safe_mod_func_uint16_t_u_u(((p_1040->g_601.s4 || ((VECTOR(uint32_t, 2))(0UL, 0x27C3EE68L)).odd) ^ ((GROUP_DIVERGE(2, 1) == (((*l_591) = (safe_mul_func_uint8_t_u_u(p_22, ((p_1040->g_103 , (safe_mod_func_int64_t_s_s((!(!(~((*l_627) = ((safe_add_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u(l_624, ((+((-5L) > ((~(p_1040->g_442 , (((safe_mul_func_uint16_t_u_u(((&p_22 == (void*)0) >= p_1040->g_comm_values[p_1040->tid]), FAKE_DIVERGE(p_1040->global_2_offset, get_global_id(2), 10))) >= (**l_590)) | 65530UL))) , p_22))) & (**l_590)))), p_22)) || p_1040->g_339[0][0][1]))))), p_1040->g_93[0]))) && p_1040->g_41)))) , 65531UL)) != p_1040->g_93[0])), p_23)) <= p_22) != FAKE_DIVERGE(p_1040->local_0_offset, get_local_id(0), 10))) , p_1040->g_628) == &l_604)))
    { /* block id: 297 */
        int32_t ***l_631 = (void*)0;
        int32_t ***l_632 = &l_590;
        uint8_t *l_638 = &p_1040->g_639[0][0][0];
        int8_t *l_640 = &p_1040->g_641;
        int32_t *l_642 = (void*)0;
        int32_t **l_643 = &l_589[0];
        (*l_643) = (l_642 = func_48(((((((VECTOR(int64_t, 2))(p_1040->g_630.zz)).even , &l_591) == ((*l_632) = &l_589[0])) & ((((((*l_591) = 0x42CD3FF8L) < ((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 2))(l_633.s86)).yxyyyxyyxxyxyxyx, ((VECTOR(int32_t, 2))(0x01E82E61L, 0x6A541686L)).yxxyxyxxxxxyyxyx))).s6) , (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((*l_591), 10)), (l_638 != (FAKE_DIVERGE(p_1040->global_1_offset, get_global_id(1), 10) , &p_1040->g_639[0][0][2]))))) ^ 0L) || (p_23 ^ ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(abs(((VECTOR(uint64_t, 2))(18446744073709551610UL, 0xAA3631386EA49388L))))), 0x226F9E415CF5D02FL, 0UL)).zwxywxxy)).s5))) == ((*l_640) = (p_23 , p_22))), p_1040));
        return p_1040->g_103;
    }
    else
    { /* block id: 304 */
        VECTOR(int16_t, 8) l_656 = (VECTOR(int16_t, 8))((-6L), (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), 5L), 5L), 5L, (-6L), 5L);
        VECTOR(uint16_t, 2) l_659 = (VECTOR(uint16_t, 2))(3UL, 0xBACBL);
        VECTOR(uint16_t, 2) l_661 = (VECTOR(uint16_t, 2))(65527UL, 0x86ADL);
        VECTOR(uint8_t, 2) l_663 = (VECTOR(uint8_t, 2))(254UL, 0x99L);
        VECTOR(uint16_t, 16) l_667 = (VECTOR(uint16_t, 16))(0xB6B1L, (VECTOR(uint16_t, 4))(0xB6B1L, (VECTOR(uint16_t, 2))(0xB6B1L, 0x5D93L), 0x5D93L), 0x5D93L, 0xB6B1L, 0x5D93L, (VECTOR(uint16_t, 2))(0xB6B1L, 0x5D93L), (VECTOR(uint16_t, 2))(0xB6B1L, 0x5D93L), 0xB6B1L, 0x5D93L, 0xB6B1L, 0x5D93L);
        int32_t **l_668[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_669 = (-1L);
        int i;
        (*l_590) = func_42(func_46(((((((~((VECTOR(int16_t, 4))(((*l_591) = ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0L, 0x6121L)).yyyyyxyyxyxyyyyy)).s8), (&p_1040->g_334 != ((((((safe_rshift_func_int16_t_s_u(((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((FAKE_DIVERGE(p_1040->group_1_offset, get_group_id(1), 10) , (safe_sub_func_int16_t_s_s(((p_1040->g_601.s4 && ((*l_627) = (safe_sub_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(((8UL == ((VECTOR(int32_t, 16))((-1L), 0L, 0L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 2))(l_656.s45)).xyyxyyxyyxyyyyxy, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(p_1040->g_657.s460b)).xyzxwwwwyywwxywz))))))).lo, ((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 2))(0x7178L, 0x70C4L)).xxxyyxyxxxyxyyxx, ((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(l_658.yw)))).xyyy, ((VECTOR(uint16_t, 16))(l_659.yxxxyxyxyyyyxxxx)).s6f1a, ((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 16))(l_660.s0244723100743774)).even, ((VECTOR(uint16_t, 16))(rotate(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(l_661.yx)))), 65534UL, 65528UL)).xyzxzwxyyyzxxzzy, ((VECTOR(uint16_t, 8))(((p_1040->g_600.x = ((VECTOR(uint16_t, 16))(p_1040->g_404.w, ((VECTOR(uint16_t, 4))(p_1040->g_662.yxyz)), ((*l_595) = GROUP_DIVERGE(0, 1)), 0UL, 0UL, (((VECTOR(uint8_t, 4))(l_663.xyxy)).w < (safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(l_666.s01)))).xyxxxxxx)).s1, ((**l_590) = FAKE_DIVERGE(p_1040->local_0_offset, get_local_id(0), 10))))), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_667.s3fd4)).hi)), ((p_23 , l_668[3]) != (void*)0), ((VECTOR(uint16_t, 2))(65535UL)), 65527UL, 65528UL)).s3) , 65535UL), ((VECTOR(uint16_t, 2))(0UL)), 1UL, l_669, 0UL, 65530UL, 0xE54EL)).s0676602061064506))).hi))).odd))).xwwzwyzzzzyyzyzw))).odd))).s71)), 0x7390049AL, 1L, 0x60D51923L, (-1L), 0x3F555747L, 1L, (*p_1040->g_613), ((VECTOR(int32_t, 2))((-2L))), 1L, 0L)).sc) , 0xC9631548L), p_23)) && (*l_591)), p_23)))) , p_22), (*l_591)))), p_1040->g_25.z)), p_1040->g_630.y)) || p_23), 14)) , p_1040->g_341) , 4294967290UL) , p_23) , 1UL) , (void*)0)), 0x6894L, 0x3FF8L)).x) || (*l_591)) || p_1040->g_442) == p_1040->g_25.z) ^ (-6L)) , (void*)0), p_1040), p_1040->g_443.s5, p_22, p_1040);
    }
    (*p_1040->g_613) |= (((*l_591) < ((((*l_670) = &p_1040->g_641) == (p_1040->g_675 = (l_672 = (void*)0))) != 1L)) >= (0x1B5EL <= ((safe_lshift_func_uint8_t_u_u((p_1040->g_678 != &l_612[0][0][7]), 2)) , ((p_1040->g_443.s5 = (safe_rshift_func_uint16_t_u_s(((safe_unary_minus_func_uint16_t_u((((&p_1040->g_343 == (void*)0) && (*l_591)) ^ (**l_590)))) > p_23), p_22))) | 0L))));
    return (*l_591);
}


/* ------------------------------------------ */
/* 
 * reads : p_1040->g_25 p_1040->g_101 p_1040->g_417 p_1040->g_341
 * writes: p_1040->g_101 p_1040->g_341
 */
int8_t  func_26(uint32_t  p_27, int16_t * p_28, struct S0 * p_1040)
{ /* block id: 266 */
    uint8_t l_580 = 247UL;
    if ((safe_add_func_uint8_t_u_u(p_1040->g_25.x, (safe_add_func_uint64_t_u_u(p_27, p_27)))))
    { /* block id: 267 */
        int32_t *l_579[4][9];
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 9; j++)
                l_579[i][j] = &p_1040->g_104;
        }
        l_580++;
        for (p_1040->g_101 = 0; (p_1040->g_101 < 46); ++p_1040->g_101)
        { /* block id: 271 */
            if ((atomic_inc(&p_1040->l_atomic_input[0]) == 8))
            { /* block id: 273 */
                int64_t l_585 = 0x532D77E4A10AB075L;
                int16_t l_586 = 0x15EBL;
                l_586 = l_585;
                unsigned int result = 0;
                result += l_585;
                result += l_586;
                atomic_add(&p_1040->l_special_values[0], result);
            }
            else
            { /* block id: 275 */
                (1 + 1);
            }
            if (p_1040->g_417.x)
                break;
        }
        atomic_and(&p_1040->l_atomic_reduction[0], (p_1040->g_341 |= 7L));
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_1040->v_collective += p_1040->l_atomic_reduction[0];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    }
    else
    { /* block id: 282 */
        uint32_t l_587 = 0xFB5861FBL;
        return l_587;
    }
    return p_27;
}


/* ------------------------------------------ */
/* 
 * reads : p_1040->l_comm_values p_1040->g_41 p_1040->g_25 p_1040->g_77 p_1040->g_comm_values p_1040->g_93 p_1040->g_24 p_1040->g_101 p_1040->g_105 p_1040->g_343 p_1040->g_104 p_1040->g_340 p_1040->g_334 p_1040->g_342 p_1040->g_2 p_1040->g_341 p_1040->g_380 p_1040->g_339 p_1040->g_411 p_1040->g_494 p_1040->g_442 p_1040->g_443 p_1040->g_506
 * writes: p_1040->g_41 p_1040->l_comm_values p_1040->g_101 p_1040->g_103 p_1040->g_104 p_1040->g_334 p_1040->g_343 p_1040->g_339 p_1040->g_341 p_1040->g_380 p_1040->g_411 p_1040->g_535 p_1040->g_442
 */
uint8_t  func_33(uint32_t  p_34, int16_t * p_35, uint32_t  p_36, int16_t * p_37, struct S0 * p_1040)
{ /* block id: 9 */
    int16_t l_39 = 0x044BL;
    int32_t *l_40 = &p_1040->g_41;
    int64_t *l_50[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t **l_376 = &l_40;
    int32_t *l_377[2][5][1] = {{{&p_1040->g_104},{&p_1040->g_104},{&p_1040->g_104},{&p_1040->g_104},{&p_1040->g_104}},{{&p_1040->g_104},{&p_1040->g_104},{&p_1040->g_104},{&p_1040->g_104},{&p_1040->g_104}}};
    int8_t l_378 = 0L;
    int32_t l_379 = 0x012ADA95L;
    VECTOR(int32_t, 16) l_387 = (VECTOR(int32_t, 16))(0x2618B659L, (VECTOR(int32_t, 4))(0x2618B659L, (VECTOR(int32_t, 2))(0x2618B659L, 0x3F265800L), 0x3F265800L), 0x3F265800L, 0x2618B659L, 0x3F265800L, (VECTOR(int32_t, 2))(0x2618B659L, 0x3F265800L), (VECTOR(int32_t, 2))(0x2618B659L, 0x3F265800L), 0x2618B659L, 0x3F265800L, 0x2618B659L, 0x3F265800L);
    VECTOR(uint8_t, 16) l_428 = (VECTOR(uint8_t, 16))(247UL, (VECTOR(uint8_t, 4))(247UL, (VECTOR(uint8_t, 2))(247UL, 253UL), 253UL), 253UL, 247UL, 253UL, (VECTOR(uint8_t, 2))(247UL, 253UL), (VECTOR(uint8_t, 2))(247UL, 253UL), 247UL, 253UL, 247UL, 253UL);
    uint32_t l_451 = 0x4AAD9C34L;
    uint32_t l_477 = 0x04162B92L;
    VECTOR(uint8_t, 16) l_546 = (VECTOR(uint8_t, 16))(0xAAL, (VECTOR(uint8_t, 4))(0xAAL, (VECTOR(uint8_t, 2))(0xAAL, 0UL), 0UL), 0UL, 0xAAL, 0UL, (VECTOR(uint8_t, 2))(0xAAL, 0UL), (VECTOR(uint8_t, 2))(0xAAL, 0UL), 0xAAL, 0UL, 0xAAL, 0UL);
    VECTOR(uint16_t, 4) l_554 = (VECTOR(uint16_t, 4))(0xEB42L, (VECTOR(uint16_t, 2))(0xEB42L, 0x6664L), 0x6664L);
    VECTOR(uint64_t, 16) l_557 = (VECTOR(uint64_t, 16))(0xB36ADA9B02D4F9E6L, (VECTOR(uint64_t, 4))(0xB36ADA9B02D4F9E6L, (VECTOR(uint64_t, 2))(0xB36ADA9B02D4F9E6L, 0UL), 0UL), 0UL, 0xB36ADA9B02D4F9E6L, 0UL, (VECTOR(uint64_t, 2))(0xB36ADA9B02D4F9E6L, 0UL), (VECTOR(uint64_t, 2))(0xB36ADA9B02D4F9E6L, 0UL), 0xB36ADA9B02D4F9E6L, 0UL, 0xB36ADA9B02D4F9E6L, 0UL);
    uint32_t l_560 = 1UL;
    int32_t l_561[5][6] = {{0x3586DC7BL,0x3586DC7BL,0x3586DC7BL,0x3586DC7BL,0x3586DC7BL,0x3586DC7BL},{0x3586DC7BL,0x3586DC7BL,0x3586DC7BL,0x3586DC7BL,0x3586DC7BL,0x3586DC7BL},{0x3586DC7BL,0x3586DC7BL,0x3586DC7BL,0x3586DC7BL,0x3586DC7BL,0x3586DC7BL},{0x3586DC7BL,0x3586DC7BL,0x3586DC7BL,0x3586DC7BL,0x3586DC7BL,0x3586DC7BL},{0x3586DC7BL,0x3586DC7BL,0x3586DC7BL,0x3586DC7BL,0x3586DC7BL,0x3586DC7BL}};
    int64_t l_570 = 1L;
    int i, j, k;
    (*l_40) |= (((p_1040->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1040->tid, 2))] | 1L) == l_39) , ((&l_39 != (void*)0) & ((void*)0 != p_35)));
    (*l_376) = func_42(func_46(func_48((p_1040->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1040->tid, 2))] = (((p_1040->g_25.y , p_36) , (-1L)) , p_1040->g_25.w)), p_1040), p_1040), l_39, p_34, p_1040);
    p_1040->g_380--;
    for (p_1040->g_41 = (-6); (p_1040->g_41 == (-9)); p_1040->g_41 = safe_sub_func_int16_t_s_s(p_1040->g_41, 8))
    { /* block id: 176 */
        uint16_t l_394 = 65535UL;
        int32_t l_399[7][2][9] = {{{0x2B083667L,0x43B4163BL,0x08A18C79L,(-1L),1L,(-1L),0x08A18C79L,0x43B4163BL,0x2B083667L},{0x2B083667L,0x43B4163BL,0x08A18C79L,(-1L),1L,(-1L),0x08A18C79L,0x43B4163BL,0x2B083667L}},{{0x2B083667L,0x43B4163BL,0x08A18C79L,(-1L),1L,(-1L),0x08A18C79L,0x43B4163BL,0x2B083667L},{0x2B083667L,0x43B4163BL,0x08A18C79L,(-1L),1L,(-1L),0x08A18C79L,0x43B4163BL,0x2B083667L}},{{0x2B083667L,0x43B4163BL,0x08A18C79L,(-1L),1L,(-1L),0x08A18C79L,0x43B4163BL,0x2B083667L},{0x2B083667L,0x43B4163BL,0x08A18C79L,(-1L),1L,(-1L),0x08A18C79L,0x43B4163BL,0x2B083667L}},{{0x2B083667L,0x43B4163BL,0x08A18C79L,(-1L),1L,(-1L),0x08A18C79L,0x43B4163BL,0x2B083667L},{0x2B083667L,0x43B4163BL,0x08A18C79L,(-1L),1L,(-1L),0x08A18C79L,0x43B4163BL,0x2B083667L}},{{0x2B083667L,0x43B4163BL,0x08A18C79L,(-1L),1L,(-1L),0x08A18C79L,0x43B4163BL,0x2B083667L},{0x2B083667L,0x43B4163BL,0x08A18C79L,(-1L),1L,(-1L),0x08A18C79L,0x43B4163BL,0x2B083667L}},{{0x2B083667L,0x43B4163BL,0x08A18C79L,(-1L),1L,(-1L),0x08A18C79L,0x43B4163BL,0x2B083667L},{0x2B083667L,0x43B4163BL,0x08A18C79L,(-1L),1L,(-1L),0x08A18C79L,0x43B4163BL,0x2B083667L}},{{0x2B083667L,0x43B4163BL,0x08A18C79L,(-1L),1L,(-1L),0x08A18C79L,0x43B4163BL,0x2B083667L},{0x2B083667L,0x43B4163BL,0x08A18C79L,(-1L),1L,(-1L),0x08A18C79L,0x43B4163BL,0x2B083667L}}};
        uint32_t l_412 = 4294967287UL;
        int32_t **l_439 = &l_40;
        uint64_t *l_452 = &p_1040->g_442;
        VECTOR(uint8_t, 4) l_484 = (VECTOR(uint8_t, 4))(246UL, (VECTOR(uint8_t, 2))(246UL, 248UL), 248UL);
        VECTOR(uint8_t, 4) l_485 = (VECTOR(uint8_t, 4))(0x49L, (VECTOR(uint8_t, 2))(0x49L, 0UL), 0UL);
        uint32_t l_499 = 0xAEE909C0L;
        uint8_t l_502 = 248UL;
        int16_t l_536 = 0x3C8AL;
        VECTOR(uint64_t, 4) l_545 = (VECTOR(uint64_t, 4))(4UL, (VECTOR(uint64_t, 2))(4UL, 0xD39D602FE1F04365L), 0xD39D602FE1F04365L);
        uint16_t l_558 = 0UL;
        uint64_t *l_559 = &p_1040->g_535;
        uint16_t *l_562 = &l_394;
        uint16_t *l_563 = &p_1040->g_101;
        uint16_t *l_564 = &l_558;
        int i, j, k;
        for (p_36 = 0; (p_36 == 7); p_36 = safe_add_func_int16_t_s_s(p_36, 4))
        { /* block id: 179 */
            VECTOR(uint32_t, 8) l_402 = (VECTOR(uint32_t, 8))(0xF4D44ACAL, (VECTOR(uint32_t, 4))(0xF4D44ACAL, (VECTOR(uint32_t, 2))(0xF4D44ACAL, 0xD656D7FFL), 0xD656D7FFL), 0xD656D7FFL, 0xF4D44ACAL, 0xD656D7FFL);
            uint32_t *l_403 = (void*)0;
            uint32_t *l_410 = &p_1040->g_411;
            int32_t l_413 = (-10L);
            uint32_t l_418 = 0x34226272L;
            int32_t **l_438 = &l_377[1][4][0];
            int32_t l_468 = 0x1CA7DFCAL;
            int32_t l_473 = 0x184CC509L;
            int32_t l_474[3];
            VECTOR(uint64_t, 4) l_519 = (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL), 18446744073709551615UL);
            VECTOR(uint64_t, 16) l_520 = (VECTOR(uint64_t, 16))(0xEBF61345BEE004D6L, (VECTOR(uint64_t, 4))(0xEBF61345BEE004D6L, (VECTOR(uint64_t, 2))(0xEBF61345BEE004D6L, 4UL), 4UL), 4UL, 0xEBF61345BEE004D6L, 4UL, (VECTOR(uint64_t, 2))(0xEBF61345BEE004D6L, 4UL), (VECTOR(uint64_t, 2))(0xEBF61345BEE004D6L, 4UL), 0xEBF61345BEE004D6L, 4UL, 0xEBF61345BEE004D6L, 4UL);
            int16_t **l_533 = &p_1040->g_24;
            int i;
            for (i = 0; i < 3; i++)
                l_474[i] = 0x05A87CB3L;
            l_413 |= (((VECTOR(int32_t, 8))(l_387.s8881c93f)).s0 , ((((safe_add_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((1L || p_1040->g_339[4][6][1]), (l_412 |= (safe_rshift_func_uint16_t_u_u(l_394, (safe_div_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s((((*l_410) ^= ((l_399[6][0][7] = p_36) & ((safe_lshift_func_uint16_t_u_u(((p_34 = ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 2))(7UL, 0x8A8A00DDL)).xxyyxyyy, ((VECTOR(uint32_t, 4))(l_402.s5376)).zyxxzwxx))).lo)).x) , ((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 4))(GROUP_DIVERGE(2, 1), 0UL, 0x2A4DL, 1UL)).xyxyyxxxxyzxxyxx, ((VECTOR(uint16_t, 4))(0x170BL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(p_1040->g_404.wyzwxzyy)).s22)), 0x51A3L)).xxzzzywzywwwxwxz))).sc6, ((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 8))(abs(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(p_1040->g_405.xyyz)).zxyyxzyy))))).s27, ((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),uint16_t,((VECTOR(uint16_t, 8))(3UL, (safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(((0L >= p_1040->g_104) > 0x01653066CB41227AL), (l_394 , p_36))), (*l_40))), ((VECTOR(uint16_t, 4))(0x977DL)), 65535UL, 0xE9EDL)).even, (uint16_t)(**l_376), (uint16_t)l_402.s5))).lo))).yyxy, ((VECTOR(uint16_t, 4))(7UL))))).odd))).lo), p_1040->g_2)) | p_36))) >= p_1040->g_380), p_1040->g_25.x)) , p_36) <= p_1040->g_339[2][6][1]), l_402.s3))))))), p_1040->g_341)) , l_402.s3) > l_394) == p_36));
        }
        (*l_376) = func_42(&p_1040->g_104, ((*l_564) = ((*l_563) = ((*l_562) ^= (safe_mod_func_int8_t_s_s((**l_439), ((safe_mod_func_int64_t_s_s((safe_div_func_uint8_t_u_u(((((*l_439) != (((*l_452) = ((((**l_376) & (safe_lshift_func_int8_t_s_u(0x67L, 4))) , ((VECTOR(uint64_t, 4))(l_545.zzzw)).y) || (((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(l_546.sc70449d25a5c9ca3)).even)), 1UL, 1UL, 0UL, (((VECTOR(int32_t, 2))(0x57B44A3AL, 0x41CB8131L)).odd | ((safe_unary_minus_func_int32_t_s((l_399[1][0][6] ^= (safe_sub_func_int64_t_s_s((((*l_559) = ((safe_mul_func_uint8_t_u_u(p_1040->g_494.sc, (safe_rshift_func_uint8_t_u_u(((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(l_554.zzwxzwwzzyxyzyyz)).odd)).s5 != ((((safe_rshift_func_int16_t_s_u(0L, 13)) > (+((p_36 , (((VECTOR(uint64_t, 4))(l_557.s9da8)).y & p_1040->g_442)) , p_1040->g_339[6][5][2]))) <= p_1040->g_443.s6) != l_558)) , 1UL), 5)))) <= p_1040->g_339[2][6][1])) ^ 7UL), FAKE_DIVERGE(p_1040->local_2_offset, get_local_id(2), 10)))))) || p_1040->g_506[5])), l_560, (**l_439), 0x79L, 1UL)).s2b, ((VECTOR(uint8_t, 2))(0xBAL))))).yyyxyxyx, ((VECTOR(uint8_t, 8))(0x6EL))))).s70, ((VECTOR(uint16_t, 2))(65535UL))))).odd ^ p_1040->g_334))) , (*l_439))) & l_561[0][2]) > p_36), (**l_439))), p_1040->g_342[1])) ^ 0xCB13L)))))), (**l_439), p_1040);
        for (l_378 = (-17); (l_378 < 20); ++l_378)
        { /* block id: 250 */
            int32_t l_567 = 0x3873F225L;
            l_567 = 9L;
            for (l_477 = (-19); (l_477 <= 15); ++l_477)
            { /* block id: 254 */
                (*l_439) = func_42(((*l_376) = func_42(&l_567, p_1040->g_342[4], l_570, p_1040)), p_36, p_36, p_1040);
            }
        }
        for (l_499 = 0; (l_499 == 52); l_499 = safe_add_func_int8_t_s_s(l_499, 7))
        { /* block id: 261 */
            p_1040->g_103 = (safe_lshift_func_uint16_t_u_s(p_1040->g_104, 5));
        }
    }
    return (*l_40);
}


/* ------------------------------------------ */
/* 
 * reads : p_1040->g_343 p_1040->g_104 p_1040->g_25 p_1040->g_77 p_1040->g_101 p_1040->g_340 p_1040->g_41 p_1040->g_334 p_1040->g_93 p_1040->g_342 p_1040->g_2 p_1040->g_341
 * writes: p_1040->g_343 p_1040->l_comm_values p_1040->g_339 p_1040->g_341
 */
int32_t * func_42(int32_t * p_43, uint16_t  p_44, int32_t  p_45, struct S0 * p_1040)
{ /* block id: 166 */
    int16_t l_336 = 0x06B8L;
    int32_t *l_337 = &p_1040->g_104;
    int32_t *l_338[6] = {&p_1040->g_104,&p_1040->g_104,&p_1040->g_104,&p_1040->g_104,&p_1040->g_104,&p_1040->g_104};
    int64_t *l_352[8][8] = {{&p_1040->g_342[5],(void*)0,(void*)0,(void*)0,&p_1040->g_342[1],(void*)0,&p_1040->g_342[3],(void*)0},{&p_1040->g_342[5],(void*)0,(void*)0,(void*)0,&p_1040->g_342[1],(void*)0,&p_1040->g_342[3],(void*)0},{&p_1040->g_342[5],(void*)0,(void*)0,(void*)0,&p_1040->g_342[1],(void*)0,&p_1040->g_342[3],(void*)0},{&p_1040->g_342[5],(void*)0,(void*)0,(void*)0,&p_1040->g_342[1],(void*)0,&p_1040->g_342[3],(void*)0},{&p_1040->g_342[5],(void*)0,(void*)0,(void*)0,&p_1040->g_342[1],(void*)0,&p_1040->g_342[3],(void*)0},{&p_1040->g_342[5],(void*)0,(void*)0,(void*)0,&p_1040->g_342[1],(void*)0,&p_1040->g_342[3],(void*)0},{&p_1040->g_342[5],(void*)0,(void*)0,(void*)0,&p_1040->g_342[1],(void*)0,&p_1040->g_342[3],(void*)0},{&p_1040->g_342[5],(void*)0,(void*)0,(void*)0,&p_1040->g_342[1],(void*)0,&p_1040->g_342[3],(void*)0}};
    int16_t *l_359 = (void*)0;
    int16_t *l_360[8][8] = {{(void*)0,&l_336,&p_1040->g_339[2][6][1],&p_1040->g_339[2][6][1],&p_1040->g_339[4][6][0],(void*)0,&p_1040->g_339[2][6][1],(void*)0},{(void*)0,&l_336,&p_1040->g_339[2][6][1],&p_1040->g_339[2][6][1],&p_1040->g_339[4][6][0],(void*)0,&p_1040->g_339[2][6][1],(void*)0},{(void*)0,&l_336,&p_1040->g_339[2][6][1],&p_1040->g_339[2][6][1],&p_1040->g_339[4][6][0],(void*)0,&p_1040->g_339[2][6][1],(void*)0},{(void*)0,&l_336,&p_1040->g_339[2][6][1],&p_1040->g_339[2][6][1],&p_1040->g_339[4][6][0],(void*)0,&p_1040->g_339[2][6][1],(void*)0},{(void*)0,&l_336,&p_1040->g_339[2][6][1],&p_1040->g_339[2][6][1],&p_1040->g_339[4][6][0],(void*)0,&p_1040->g_339[2][6][1],(void*)0},{(void*)0,&l_336,&p_1040->g_339[2][6][1],&p_1040->g_339[2][6][1],&p_1040->g_339[4][6][0],(void*)0,&p_1040->g_339[2][6][1],(void*)0},{(void*)0,&l_336,&p_1040->g_339[2][6][1],&p_1040->g_339[2][6][1],&p_1040->g_339[4][6][0],(void*)0,&p_1040->g_339[2][6][1],(void*)0},{(void*)0,&l_336,&p_1040->g_339[2][6][1],&p_1040->g_339[2][6][1],&p_1040->g_339[4][6][0],(void*)0,&p_1040->g_339[2][6][1],(void*)0}};
    int i, j;
    p_1040->g_343++;
    p_1040->g_341 ^= (safe_mod_func_int16_t_s_s(((((*l_337) > ((safe_rshift_func_uint16_t_u_s((safe_add_func_int64_t_s_s((FAKE_DIVERGE(p_1040->global_0_offset, get_global_id(0), 10) , (p_1040->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1040->tid, 2))] = (+(*l_337)))), (safe_sub_func_uint16_t_u_u(FAKE_DIVERGE(p_1040->group_2_offset, get_group_id(2), 10), ((p_1040->g_25.z ^ ((((safe_lshift_func_int8_t_s_s(((p_1040->g_339[2][6][1] = ((void*)0 == &p_1040->g_93[0])) || (FAKE_DIVERGE(p_1040->global_2_offset, get_global_id(2), 10) || p_45)), (safe_lshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(p_1040->g_77.s3, (safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_s(((p_1040->g_101 , ((safe_unary_minus_func_int16_t_s((safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u((p_1040->g_340 & (*p_43)), p_1040->g_334)), p_44)))) , p_1040->g_93[0])) & 0xF4769E3D8E3869F8L), p_1040->g_342[2])) || p_1040->g_2) ^ (*p_43)), GROUP_DIVERGE(1, 1))), 0L)))), p_44)))) , &p_1040->g_342[1]) != &p_1040->g_342[2]) > 4L)) | 8UL))))), 13)) <= GROUP_DIVERGE(2, 1))) && (*p_43)) , p_45), (-5L)));
    return &p_1040->g_2;
}


/* ------------------------------------------ */
/* 
 * reads : p_1040->g_25 p_1040->g_77 p_1040->g_comm_values p_1040->g_93 p_1040->g_24 p_1040->g_101 p_1040->g_105
 * writes: p_1040->g_101 p_1040->g_41 p_1040->g_103 p_1040->g_104 p_1040->g_334
 */
int32_t * func_46(int32_t * p_47, struct S0 * p_1040)
{ /* block id: 14 */
    VECTOR(int64_t, 16) l_73 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int64_t, 2))(0L, (-1L)), (VECTOR(int64_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L));
    VECTOR(uint64_t, 8) l_76 = (VECTOR(uint64_t, 8))(0x7A0EDE8B3EC6B9FEL, (VECTOR(uint64_t, 4))(0x7A0EDE8B3EC6B9FEL, (VECTOR(uint64_t, 2))(0x7A0EDE8B3EC6B9FEL, 0x85AEBC5F7C0CB0A7L), 0x85AEBC5F7C0CB0A7L), 0x85AEBC5F7C0CB0A7L, 0x7A0EDE8B3EC6B9FEL, 0x85AEBC5F7C0CB0A7L);
    int16_t *l_86[2][8][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int16_t *l_88 = (void*)0;
    int16_t **l_87 = &l_88;
    int32_t l_91 = 1L;
    uint64_t *l_92[9][1][8] = {{{(void*)0,&p_1040->g_93[1],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0]}},{{(void*)0,&p_1040->g_93[1],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0]}},{{(void*)0,&p_1040->g_93[1],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0]}},{{(void*)0,&p_1040->g_93[1],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0]}},{{(void*)0,&p_1040->g_93[1],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0]}},{{(void*)0,&p_1040->g_93[1],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0]}},{{(void*)0,&p_1040->g_93[1],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0]}},{{(void*)0,&p_1040->g_93[1],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0]}},{{(void*)0,&p_1040->g_93[1],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0],&p_1040->g_93[0]}}};
    int32_t l_94 = 5L;
    uint32_t l_332 = 0UL;
    int32_t *l_333[9] = {&l_91,&l_94,&l_91,&l_91,&l_94,&l_91,&l_91,&l_94,&l_91};
    int32_t *l_335 = &p_1040->g_41;
    int i, j, k;
    p_1040->g_334 = (((VECTOR(uint32_t, 2))(4294967295UL, 0x2C90ACEFL)).hi == ((safe_mul_func_int16_t_s_s((p_1040->g_25.y ^ (func_56(((func_61((((safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_mod_func_int64_t_s_s((safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 8))(l_73.s60dd4f95)).s2, (safe_div_func_int64_t_s_s(((VECTOR(int64_t, 4))(0x4F93A29ADD9258C0L, 1L, 7L, 7L)).z, ((VECTOR(uint64_t, 4))(min(((VECTOR(uint64_t, 2))(0x6E743FD0416CBB4DL, 0xC4471F2AED5A0A0DL)).xxxy, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(l_76.s51)).yxyyyxxxxyxyxxxx)).sf466))))).y)))), ((((VECTOR(uint64_t, 2))(p_1040->g_77.s75)).even ^ (p_1040->g_25.y < (~(-5L)))) , (safe_mul_func_int16_t_s_s(((l_94 = (l_91 = (((safe_mul_func_int8_t_s_s((-1L), (+(safe_add_func_uint32_t_u_u(((void*)0 == l_86[0][1][4]), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(7UL, 0UL)).yxxy)).z))))) | (((*l_87) = (void*)0) == (void*)0)) || ((VECTOR(uint64_t, 16))(((safe_lshift_func_int8_t_s_s(((GROUP_DIVERGE(2, 1) && l_73.sf) , (-5L)), 4)) , p_1040->g_77.s3), p_1040->g_77.s1, GROUP_DIVERGE(2, 1), 1UL, 18446744073709551612UL, 0UL, l_91, 0UL, p_1040->g_25.w, 0x462BFC98A5CB8EC4L, 1UL, ((VECTOR(uint64_t, 4))(3UL)), 18446744073709551614UL)).sc))) && p_1040->g_comm_values[p_1040->tid]), 0x7560L))))), 15)), p_1040->g_93[0])) || 0x74L) , l_76.s2), l_76.s4, &p_1040->g_41, p_1040) & l_73.sd) , p_1040->g_comm_values[p_1040->tid]), l_73.sd, l_76.s5, p_1040->g_105, p_1040) < l_73.s0)), l_332)) >= FAKE_DIVERGE(p_1040->global_0_offset, get_global_id(0), 10)));
    return l_335;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_48(int64_t  p_49, struct S0 * p_1040)
{ /* block id: 12 */
    int32_t *l_51 = (void*)0;
    return l_51;
}


/* ------------------------------------------ */
/* 
 * reads : p_1040->g_93
 * writes:
 */
uint64_t  func_56(int32_t  p_57, int32_t  p_58, int32_t  p_59, int64_t * p_60, struct S0 * p_1040)
{ /* block id: 24 */
    int32_t *l_106 = (void*)0;
    int32_t **l_107 = &l_106;
    (*l_107) = l_106;
    (*l_107) = (*l_107);
    if ((atomic_inc(&p_1040->l_atomic_input[55]) == 2))
    { /* block id: 28 */
        int32_t l_108 = 2L;
        uint16_t l_243 = 5UL;
        int32_t *l_244 = &l_108;
        int32_t *l_245 = &l_108;
        uint32_t l_246 = 0x279E6310L;
        int64_t l_247 = 1L;
        for (l_108 = 11; (l_108 == 18); ++l_108)
        { /* block id: 31 */
            int16_t l_111 = 0x753DL;
            VECTOR(uint64_t, 8) l_112 = (VECTOR(uint64_t, 8))(0x4BBECA4C4A096ABDL, (VECTOR(uint64_t, 4))(0x4BBECA4C4A096ABDL, (VECTOR(uint64_t, 2))(0x4BBECA4C4A096ABDL, 0xDBEFC3FFF7591BD5L), 0xDBEFC3FFF7591BD5L), 0xDBEFC3FFF7591BD5L, 0x4BBECA4C4A096ABDL, 0xDBEFC3FFF7591BD5L);
            VECTOR(uint64_t, 16) l_113 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL, (VECTOR(uint64_t, 2))(0UL, 0UL), (VECTOR(uint64_t, 2))(0UL, 0UL), 0UL, 0UL, 0UL, 0UL);
            VECTOR(uint64_t, 4) l_114 = (VECTOR(uint64_t, 4))(2UL, (VECTOR(uint64_t, 2))(2UL, 18446744073709551615UL), 18446744073709551615UL);
            VECTOR(int8_t, 4) l_115 = (VECTOR(int8_t, 4))(0x16L, (VECTOR(int8_t, 2))(0x16L, (-9L)), (-9L));
            VECTOR(uint64_t, 2) l_116 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL);
            VECTOR(uint64_t, 8) l_117 = (VECTOR(uint64_t, 8))(0xA489413133DC0AD4L, (VECTOR(uint64_t, 4))(0xA489413133DC0AD4L, (VECTOR(uint64_t, 2))(0xA489413133DC0AD4L, 0x88CAFD7A66F30B27L), 0x88CAFD7A66F30B27L), 0x88CAFD7A66F30B27L, 0xA489413133DC0AD4L, 0x88CAFD7A66F30B27L);
            uint8_t l_118 = 0xFBL;
            int16_t l_119 = (-5L);
            VECTOR(uint64_t, 4) l_120 = (VECTOR(uint64_t, 4))(0x3C1BAF1AC7F9B73EL, (VECTOR(uint64_t, 2))(0x3C1BAF1AC7F9B73EL, 0x168C3A6530755028L), 0x168C3A6530755028L);
            int16_t l_121 = 0x51E3L;
            uint32_t l_122 = 1UL;
            uint16_t l_123[7];
            VECTOR(uint64_t, 2) l_124 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 1UL);
            VECTOR(uint64_t, 2) l_125 = (VECTOR(uint64_t, 2))(0x5F34EB0A2725A889L, 0x9DDE583CD540B5EBL);
            VECTOR(uint64_t, 8) l_126 = (VECTOR(uint64_t, 8))(0x9F5D49091EDA5D48L, (VECTOR(uint64_t, 4))(0x9F5D49091EDA5D48L, (VECTOR(uint64_t, 2))(0x9F5D49091EDA5D48L, 1UL), 1UL), 1UL, 0x9F5D49091EDA5D48L, 1UL);
            VECTOR(uint64_t, 2) l_127 = (VECTOR(uint64_t, 2))(2UL, 0x96AEBFDBDBAA6C0BL);
            VECTOR(uint64_t, 2) l_128 = (VECTOR(uint64_t, 2))(3UL, 0xF6218EFB25B8D42BL);
            VECTOR(uint64_t, 16) l_129 = (VECTOR(uint64_t, 16))(0xE4B572696F317466L, (VECTOR(uint64_t, 4))(0xE4B572696F317466L, (VECTOR(uint64_t, 2))(0xE4B572696F317466L, 1UL), 1UL), 1UL, 0xE4B572696F317466L, 1UL, (VECTOR(uint64_t, 2))(0xE4B572696F317466L, 1UL), (VECTOR(uint64_t, 2))(0xE4B572696F317466L, 1UL), 0xE4B572696F317466L, 1UL, 0xE4B572696F317466L, 1UL);
            uint8_t l_130 = 0xA1L;
            uint16_t l_131[10] = {65532UL,65530UL,65535UL,65530UL,65532UL,65532UL,65530UL,65535UL,65530UL,65532UL};
            int64_t l_132 = 1L;
            uint32_t l_133 = 0x53B9DD4BL;
            uint32_t l_236 = 0x85987031L;
            VECTOR(int8_t, 4) l_237 = (VECTOR(int8_t, 4))(0x5DL, (VECTOR(int8_t, 2))(0x5DL, 0L), 0L);
            int8_t l_238 = 0x6FL;
            int8_t l_239[8];
            int32_t l_240 = 8L;
            int32_t *l_241 = (void*)0;
            int32_t *l_242 = (void*)0;
            int i;
            for (i = 0; i < 7; i++)
                l_123[i] = 1UL;
            for (i = 0; i < 8; i++)
                l_239[i] = 0x43L;
            if ((l_111 , ((l_119 ^= (l_118 = ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(mul_hi(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(max(((VECTOR(uint64_t, 16))(l_112.s6562541426637140)).hi, ((VECTOR(uint64_t, 8))(l_113.sb46ac6e2))))))))).s47)).yyxyyxyx, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 8))(sub_sat(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_114.xz)).xxxx)).xyzxyxyx, ((VECTOR(uint64_t, 8))(rotate(((VECTOR(uint64_t, 8))(0x9B75BE8B728ABA7FL, 0xD0FC97383CBDCB88L, 0x999123B753B5FD39L, (l_113.s1 ^= l_115.z), ((VECTOR(uint64_t, 2))(l_116.yy)), 4UL, 0x67237AF67482672FL)), ((VECTOR(uint64_t, 2))(0xEB4ECF4EC59EFA1EL, 18446744073709551610UL)).yyyyxxyx)))))).s06, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_117.s61)).xyxx)))).lo))), 18446744073709551615UL, 0x0AFFF8CD5190A736L)).xzyxwzzw))).s5752107224362412)).s0)) , (((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(l_120.yyywzxyy)).s24)).yxxyyyxxyxyyyxyx)).s7 , (((l_122 &= l_121) , (l_123[0] , ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 4))(sub_sat(((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 2))(l_124.yx)).yxxy, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0x86EBCD7E4973F2DFL, 0x2593A31CAC5C3DF7L)), 0x63E8638DCB38BF02L, 1UL)).wwxzyyzz)))))).hi, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(add_sat(((VECTOR(uint64_t, 16))(l_125.xyyxxxyxyyxyxyyy)), ((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 8))(clz(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(l_126.s4572)).lo)), ((VECTOR(uint64_t, 8))(l_127.xxxyyyxy)).s00))).yxxxxyxyyyyyxxyx)))).lo))), ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(l_128.yy)).yxyxxxxyxxyyxxyx)).even))).s5141241102561540))).s9b)).xxxy))), ((VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL)).yxxy))).yyxxwxyz, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(l_129.sbb7f)).xywzxwyyyywzxyyw)).hi))))).s1)) , (l_133 = (l_132 = ((l_131[6] = l_130) , 0x6D941E28L))))))))
            { /* block id: 39 */
                VECTOR(int32_t, 8) l_134 = (VECTOR(int32_t, 8))(0x67AB66A5L, (VECTOR(int32_t, 4))(0x67AB66A5L, (VECTOR(int32_t, 2))(0x67AB66A5L, (-9L)), (-9L)), (-9L), 0x67AB66A5L, (-9L));
                uint8_t l_140 = 0x59L;
                int i;
                if (((VECTOR(int32_t, 2))(l_134.s31)).odd)
                { /* block id: 40 */
                    int32_t l_136[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
                    int32_t *l_135[5][4] = {{&l_136[4],&l_136[4],&l_136[4],&l_136[4]},{&l_136[4],&l_136[4],&l_136[4],&l_136[4]},{&l_136[4],&l_136[4],&l_136[4],&l_136[4]},{&l_136[4],&l_136[4],&l_136[4],&l_136[4]},{&l_136[4],&l_136[4],&l_136[4],&l_136[4]}};
                    int32_t l_137 = 9L;
                    int i, j;
                    l_134.s1 ^= (-1L);
                    l_135[1][3] = (void*)0;
                    l_134.s7 = l_137;
                }
                else
                { /* block id: 44 */
                    uint16_t l_138 = 1UL;
                    uint32_t l_139 = 0x83E2E9BBL;
                    l_134.s7 |= l_138;
                    l_134.s1 ^= l_139;
                }
                if (l_140)
                { /* block id: 48 */
                    int8_t l_141 = 0x2AL;
                    uint8_t l_142 = 7UL;
                    l_134.s4 = l_141;
                    l_134.s4 = 0L;
                    --l_142;
                }
                else
                { /* block id: 52 */
                    int64_t l_145 = 0L;
                    uint32_t l_146[4][3] = {{1UL,4294967288UL,1UL},{1UL,4294967288UL,1UL},{1UL,4294967288UL,1UL},{1UL,4294967288UL,1UL}};
                    int32_t l_149 = 0L;
                    VECTOR(int64_t, 4) l_150 = (VECTOR(int64_t, 4))((-7L), (VECTOR(int64_t, 2))((-7L), 0L), 0L);
                    VECTOR(int64_t, 16) l_151 = (VECTOR(int64_t, 16))(5L, (VECTOR(int64_t, 4))(5L, (VECTOR(int64_t, 2))(5L, 0L), 0L), 0L, 5L, 0L, (VECTOR(int64_t, 2))(5L, 0L), (VECTOR(int64_t, 2))(5L, 0L), 5L, 0L, 5L, 0L);
                    uint8_t l_152 = 0xAAL;
                    int32_t l_153 = 1L;
                    int i, j;
                    l_146[0][2]--;
                    l_134.s7 |= ((l_149 , (((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 16))(l_150.wxyyxzzwyxywzwxy)).sfa, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(l_151.sb7cc4fc7)).even)).even))).xxxy))).odd)).lo , (l_152 = 0x5C94D4D0L))) , l_153);
                    if (((VECTOR(int32_t, 2))(0x173A89DFL, 1L)).hi)
                    { /* block id: 56 */
                        int64_t l_154 = 0L;
                        int16_t l_155 = 4L;
                        int32_t l_156 = 0x147B0E61L;
                        uint32_t l_157 = 0x874FF5F6L;
                        int32_t l_160 = 5L;
                        VECTOR(int32_t, 8) l_161 = (VECTOR(int32_t, 8))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 9L), 9L), 9L, (-10L), 9L);
                        uint64_t l_162 = 0xF6662E9EBED4AC57L;
                        uint32_t l_163 = 1UL;
                        int16_t l_164[5][8][6] = {{{1L,0x0CFAL,1L,1L,0x0CFAL,1L},{1L,0x0CFAL,1L,1L,0x0CFAL,1L},{1L,0x0CFAL,1L,1L,0x0CFAL,1L},{1L,0x0CFAL,1L,1L,0x0CFAL,1L},{1L,0x0CFAL,1L,1L,0x0CFAL,1L},{1L,0x0CFAL,1L,1L,0x0CFAL,1L},{1L,0x0CFAL,1L,1L,0x0CFAL,1L},{1L,0x0CFAL,1L,1L,0x0CFAL,1L}},{{1L,0x0CFAL,1L,1L,0x0CFAL,1L},{1L,0x0CFAL,1L,1L,0x0CFAL,1L},{1L,0x0CFAL,1L,1L,0x0CFAL,1L},{1L,0x0CFAL,1L,1L,0x0CFAL,1L},{1L,0x0CFAL,1L,1L,0x0CFAL,1L},{1L,0x0CFAL,1L,1L,0x0CFAL,1L},{1L,0x0CFAL,1L,1L,0x0CFAL,1L},{1L,0x0CFAL,1L,1L,0x0CFAL,1L}},{{1L,0x0CFAL,1L,1L,0x0CFAL,1L},{1L,0x0CFAL,1L,1L,0x0CFAL,1L},{1L,0x0CFAL,1L,1L,0x0CFAL,1L},{1L,0x0CFAL,1L,1L,0x0CFAL,1L},{1L,0x0CFAL,1L,1L,0x0CFAL,1L},{1L,0x0CFAL,1L,1L,0x0CFAL,1L},{1L,0x0CFAL,1L,1L,0x0CFAL,1L},{1L,0x0CFAL,1L,1L,0x0CFAL,1L}},{{1L,0x0CFAL,1L,1L,0x0CFAL,1L},{1L,0x0CFAL,1L,1L,0x0CFAL,1L},{1L,0x0CFAL,1L,1L,0x0CFAL,1L},{1L,0x0CFAL,1L,1L,0x0CFAL,1L},{1L,0x0CFAL,1L,1L,0x0CFAL,1L},{1L,0x0CFAL,1L,1L,0x0CFAL,1L},{1L,0x0CFAL,1L,1L,0x0CFAL,1L},{1L,0x0CFAL,1L,1L,0x0CFAL,1L}},{{1L,0x0CFAL,1L,1L,0x0CFAL,1L},{1L,0x0CFAL,1L,1L,0x0CFAL,1L},{1L,0x0CFAL,1L,1L,0x0CFAL,1L},{1L,0x0CFAL,1L,1L,0x0CFAL,1L},{1L,0x0CFAL,1L,1L,0x0CFAL,1L},{1L,0x0CFAL,1L,1L,0x0CFAL,1L},{1L,0x0CFAL,1L,1L,0x0CFAL,1L},{1L,0x0CFAL,1L,1L,0x0CFAL,1L}}};
                        VECTOR(int16_t, 4) l_165 = (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), 0x0239L), 0x0239L);
                        uint32_t l_166[7][9] = {{4294967295UL,0x3137E4E3L,0x728A352BL,0x3137E4E3L,4294967295UL,4294967295UL,0x3137E4E3L,0x728A352BL,0x3137E4E3L},{4294967295UL,0x3137E4E3L,0x728A352BL,0x3137E4E3L,4294967295UL,4294967295UL,0x3137E4E3L,0x728A352BL,0x3137E4E3L},{4294967295UL,0x3137E4E3L,0x728A352BL,0x3137E4E3L,4294967295UL,4294967295UL,0x3137E4E3L,0x728A352BL,0x3137E4E3L},{4294967295UL,0x3137E4E3L,0x728A352BL,0x3137E4E3L,4294967295UL,4294967295UL,0x3137E4E3L,0x728A352BL,0x3137E4E3L},{4294967295UL,0x3137E4E3L,0x728A352BL,0x3137E4E3L,4294967295UL,4294967295UL,0x3137E4E3L,0x728A352BL,0x3137E4E3L},{4294967295UL,0x3137E4E3L,0x728A352BL,0x3137E4E3L,4294967295UL,4294967295UL,0x3137E4E3L,0x728A352BL,0x3137E4E3L},{4294967295UL,0x3137E4E3L,0x728A352BL,0x3137E4E3L,4294967295UL,4294967295UL,0x3137E4E3L,0x728A352BL,0x3137E4E3L}};
                        VECTOR(int32_t, 4) l_167 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x4768AC21L), 0x4768AC21L);
                        VECTOR(int32_t, 8) l_168 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 6L), 6L), 6L, 0L, 6L);
                        VECTOR(int32_t, 8) l_169 = (VECTOR(int32_t, 8))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 5L), 5L), 5L, 6L, 5L);
                        VECTOR(int32_t, 4) l_170 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 6L), 6L);
                        int32_t *l_171 = (void*)0;
                        int32_t *l_172 = &l_160;
                        int i, j, k;
                        l_157++;
                        l_153 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(1L, 1L, ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(0x57E0B499L, l_160, ((VECTOR(int32_t, 8))(l_161.s05654152)), 1L, 0L, ((VECTOR(int32_t, 4))((l_134.s6 = 0x43FF4C43L), l_162, (-10L), 0x0E11E3A5L)).y, (((l_164[0][3][4] = l_163) , l_165.x) , l_166[2][5]), 0L, (-1L))).s1769, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(l_167.zzzzwyxywwwyzxwz)).s73, ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_168.s22)).xyxxyxyx)).even)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_169.s51171144)))).odd, ((VECTOR(int32_t, 16))(l_170.zyyxwxzxwzyxxxxw)).s8beb))).hi))).xyxx))), 0x6FB27EF6L, 0x77BA142AL)).s3022313712475362)).se;
                        l_172 = l_171;
                    }
                    else
                    { /* block id: 62 */
                        uint32_t l_173 = 0xCB9F3FC7L;
                        int64_t l_174 = (-6L);
                        uint32_t l_175[10] = {0x53A70F74L,0x53A70F74L,0x53A70F74L,0x53A70F74L,0x53A70F74L,0x53A70F74L,0x53A70F74L,0x53A70F74L,0x53A70F74L,0x53A70F74L};
                        uint32_t l_178 = 0xFBDE21B4L;
                        VECTOR(int64_t, 2) l_179 = (VECTOR(int64_t, 2))(0x7BFA4616B117CF76L, 1L);
                        VECTOR(int64_t, 16) l_180 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x42D218AE0BF9175DL), 0x42D218AE0BF9175DL), 0x42D218AE0BF9175DL, 0L, 0x42D218AE0BF9175DL, (VECTOR(int64_t, 2))(0L, 0x42D218AE0BF9175DL), (VECTOR(int64_t, 2))(0L, 0x42D218AE0BF9175DL), 0L, 0x42D218AE0BF9175DL, 0L, 0x42D218AE0BF9175DL);
                        VECTOR(int64_t, 16) l_181 = (VECTOR(int64_t, 16))(0x6FD3FCBE23C93218L, (VECTOR(int64_t, 4))(0x6FD3FCBE23C93218L, (VECTOR(int64_t, 2))(0x6FD3FCBE23C93218L, 1L), 1L), 1L, 0x6FD3FCBE23C93218L, 1L, (VECTOR(int64_t, 2))(0x6FD3FCBE23C93218L, 1L), (VECTOR(int64_t, 2))(0x6FD3FCBE23C93218L, 1L), 0x6FD3FCBE23C93218L, 1L, 0x6FD3FCBE23C93218L, 1L);
                        VECTOR(int64_t, 4) l_182 = (VECTOR(int64_t, 4))(0x7C4DF2468A313900L, (VECTOR(int64_t, 2))(0x7C4DF2468A313900L, 1L), 1L);
                        VECTOR(uint32_t, 16) l_183 = (VECTOR(uint32_t, 16))(4294967292UL, (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 0x2EF32379L), 0x2EF32379L), 0x2EF32379L, 4294967292UL, 0x2EF32379L, (VECTOR(uint32_t, 2))(4294967292UL, 0x2EF32379L), (VECTOR(uint32_t, 2))(4294967292UL, 0x2EF32379L), 4294967292UL, 0x2EF32379L, 4294967292UL, 0x2EF32379L);
                        uint64_t l_184 = 18446744073709551615UL;
                        VECTOR(uint32_t, 8) l_185 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL);
                        int16_t l_186 = (-7L);
                        VECTOR(uint8_t, 4) l_187 = (VECTOR(uint8_t, 4))(0x95L, (VECTOR(uint8_t, 2))(0x95L, 2UL), 2UL);
                        uint16_t l_188 = 0UL;
                        uint8_t l_189 = 1UL;
                        int32_t l_190 = 2L;
                        uint32_t l_191 = 0xCA7C964BL;
                        VECTOR(int64_t, 8) l_192 = (VECTOR(int64_t, 8))(0x43ABB43ABC618C9AL, (VECTOR(int64_t, 4))(0x43ABB43ABC618C9AL, (VECTOR(int64_t, 2))(0x43ABB43ABC618C9AL, 0x790FD715AADE92A9L), 0x790FD715AADE92A9L), 0x790FD715AADE92A9L, 0x43ABB43ABC618C9AL, 0x790FD715AADE92A9L);
                        int32_t l_193[5];
                        int64_t l_194 = 7L;
                        VECTOR(int64_t, 2) l_195 = (VECTOR(int64_t, 2))(0x5413EED141096F1CL, 1L);
                        VECTOR(int64_t, 4) l_196 = (VECTOR(int64_t, 4))((-2L), (VECTOR(int64_t, 2))((-2L), 1L), 1L);
                        VECTOR(int64_t, 4) l_197 = (VECTOR(int64_t, 4))(0x499D9BFE7AE4C3DEL, (VECTOR(int64_t, 2))(0x499D9BFE7AE4C3DEL, 0x65CCB1FC8BD98051L), 0x65CCB1FC8BD98051L);
                        int64_t l_198 = (-1L);
                        int64_t l_199 = 0x0013976E832B8480L;
                        uint8_t l_200 = 0x7BL;
                        uint8_t l_201 = 1UL;
                        uint16_t l_202 = 65535UL;
                        uint32_t l_203 = 0x510B5542L;
                        uint8_t l_204 = 0xA4L;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_193[i] = 0x03903176L;
                        l_153 = l_173;
                        l_175[0]--;
                        l_153 = (l_178 , (-1L));
                        l_134.s0 &= ((((VECTOR(uint64_t, 4))(abs_diff(((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 16))(l_179.xyxxxyxyyxxyyyyx)), ((VECTOR(int64_t, 16))(add_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 8))(clz(((VECTOR(int64_t, 16))(rhadd(((VECTOR(int64_t, 8))(l_180.sf6f0190d)).s4060107363664623, ((VECTOR(int64_t, 4))(max(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(0x512310BAFB8AB7BDL, 0x3675BC9301DDF3D5L)), 0x6A0B4DBAC17790CCL, ((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 8))(l_181.sb7b65cb5)).hi, ((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),int64_t,((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(l_182.zx)))).yyxyxxxxyxyxyyyy, (int64_t)(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_183.sf2)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0xD32CD957L, 0x575F16A3L)).yyyxyxyy)).even)), (l_185.s4 = l_184), l_186, 4294967293UL, 1UL, ((VECTOR(uint32_t, 4))(0x8A89D9E5L, ((l_152 &= ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_187.xwzwxwyy)).s6506177550157207)))).se) , (l_189 = l_188)), 0xF83C38EEL, 0x6703702CL)), 0x13A80E33L, 0x8966E9E5L)).sb7)).even , l_190), (int64_t)l_191))).s708b))).wzywxxyy, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),VECTOR(int64_t, 2),((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(l_192.s4347)), l_193[1], 0x46CEC155F42DF363L, l_194, ((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(0x387696D7F7F05AB0L, 0x0553062A9CC61E16L)).yxyyyxyxyxyyyxxx)).s53, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),VECTOR(int64_t, 8),((VECTOR(int64_t, 4))(l_195.yxxy)).wwzxxywx, ((VECTOR(int64_t, 8))(sub_sat(((VECTOR(int64_t, 2))((-1L), 0x6572F24EC86742A6L)).xxyxyxyx, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(l_196.zyxxwwxz))))))), ((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 8))(rhadd(((VECTOR(int64_t, 4))(l_197.xzwx)).zzwxxwyx, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))((l_198 , l_199), ((VECTOR(int64_t, 4))(0x1A6D3BB092D7B6EEL)), 6L, 0x12A60CA6850D6AFFL, 0x6D315BEF1D057D9BL)).s5411437024434257)).even))).lo, (int64_t)(-1L)))).wxzxyyzx))).s4425403323550475)).s69))), 1L, (-1L), 1L, l_200, ((VECTOR(int64_t, 2))(0x328AE0F1C9B2D7F5L)), 0x1C94B45958B3C01CL)).lo)).s67, ((VECTOR(int64_t, 2))((-5L))), ((VECTOR(int64_t, 2))(9L))))).xyyyxyxy)), ((VECTOR(int64_t, 8))((-1L)))))), 3L, 0x18145AF6B685A5A9L, l_201, 0x6D7ED58450179415L, 0x6D580EACDEA14511L)).sd418, ((VECTOR(int64_t, 4))(0L))))).xwwwwzywywxyzwxw))).lo))).even, (int64_t)l_202))).y, (-3L), l_203, 0x614E10F5DE1A12C5L, 0x3057259765AF64C5L, ((VECTOR(int64_t, 4))((-9L))), 0x4B8AF9111AFA2E2DL, ((VECTOR(int64_t, 2))(0x3F6E9D8676E750FBL)), 8L, 0x20306D479AFB836CL, 0x1DF5792ACDF8459AL, 0x2BC6C16407E88668L)), ((VECTOR(int64_t, 16))(0x7D2871D3FF7CF6A6L)))))))).sf9)).xyxx, ((VECTOR(int64_t, 4))(0x1F446DA88AB148E8L))))), ((VECTOR(int64_t, 4))(4L))))).z , 2UL) , l_204);
                    }
                    for (l_145 = 0; (l_145 >= (-29)); l_145 = safe_sub_func_int32_t_s_s(l_145, 7))
                    { /* block id: 73 */
                        int32_t l_207 = 0L;
                        int32_t l_209 = 0x04793B5EL;
                        int32_t *l_208 = &l_209;
                        int32_t *l_210[5][3][6] = {{{&l_209,(void*)0,&l_209,&l_209,(void*)0,&l_209},{&l_209,(void*)0,&l_209,&l_209,(void*)0,&l_209},{&l_209,(void*)0,&l_209,&l_209,(void*)0,&l_209}},{{&l_209,(void*)0,&l_209,&l_209,(void*)0,&l_209},{&l_209,(void*)0,&l_209,&l_209,(void*)0,&l_209},{&l_209,(void*)0,&l_209,&l_209,(void*)0,&l_209}},{{&l_209,(void*)0,&l_209,&l_209,(void*)0,&l_209},{&l_209,(void*)0,&l_209,&l_209,(void*)0,&l_209},{&l_209,(void*)0,&l_209,&l_209,(void*)0,&l_209}},{{&l_209,(void*)0,&l_209,&l_209,(void*)0,&l_209},{&l_209,(void*)0,&l_209,&l_209,(void*)0,&l_209},{&l_209,(void*)0,&l_209,&l_209,(void*)0,&l_209}},{{&l_209,(void*)0,&l_209,&l_209,(void*)0,&l_209},{&l_209,(void*)0,&l_209,&l_209,(void*)0,&l_209},{&l_209,(void*)0,&l_209,&l_209,(void*)0,&l_209}}};
                        uint32_t l_211 = 0x3C10D4E4L;
                        int i, j, k;
                        l_149 = (l_134.s2 = l_207);
                        l_210[1][2][2] = l_208;
                        l_134.s3 = (l_211 , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x119A787CL, (-6L))).yyxxxxxyyyxyxyxy)).sfacb)).x);
                    }
                }
            }
            else
            { /* block id: 80 */
                uint32_t l_212 = 0x5C18F20BL;
                int32_t l_214 = 0L;
                int32_t *l_213[7][2] = {{&l_214,&l_214},{&l_214,&l_214},{&l_214,&l_214},{&l_214,&l_214},{&l_214,&l_214},{&l_214,&l_214},{&l_214,&l_214}};
                int32_t *l_215 = &l_214;
                int32_t *l_216 = &l_214;
                VECTOR(int32_t, 16) l_217 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int32_t, 2))((-1L), 0L), (VECTOR(int32_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
                VECTOR(int32_t, 8) l_218 = (VECTOR(int32_t, 8))(0x39833479L, (VECTOR(int32_t, 4))(0x39833479L, (VECTOR(int32_t, 2))(0x39833479L, 7L), 7L), 7L, 0x39833479L, 7L);
                int i, j;
                l_216 = (l_215 = (l_212 , l_213[3][0]));
                if (((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(l_217.s31cfc7a122afa7a3)).sf087, ((VECTOR(int32_t, 16))(l_218.s2653461727664751)).s37e3))).z)
                { /* block id: 83 */
                    VECTOR(int32_t, 16) l_219 = (VECTOR(int32_t, 16))(0x2F598C9DL, (VECTOR(int32_t, 4))(0x2F598C9DL, (VECTOR(int32_t, 2))(0x2F598C9DL, 0x76A3F998L), 0x76A3F998L), 0x76A3F998L, 0x2F598C9DL, 0x76A3F998L, (VECTOR(int32_t, 2))(0x2F598C9DL, 0x76A3F998L), (VECTOR(int32_t, 2))(0x2F598C9DL, 0x76A3F998L), 0x2F598C9DL, 0x76A3F998L, 0x2F598C9DL, 0x76A3F998L);
                    uint8_t l_220[8][2] = {{0x75L,0x23L},{0x75L,0x23L},{0x75L,0x23L},{0x75L,0x23L},{0x75L,0x23L},{0x75L,0x23L},{0x75L,0x23L},{0x75L,0x23L}};
                    int i, j;
                    l_220[5][0] &= ((VECTOR(int32_t, 4))(l_219.s1402)).y;
                }
                else
                { /* block id: 85 */
                    int32_t l_221 = 0x5F780B90L;
                    uint32_t l_226 = 0xEF7B771AL;
                    uint64_t l_229 = 0xBDB91CC760C56A79L;
                    uint64_t *l_228[4][7][7] = {{{&l_229,&l_229,&l_229,&l_229,&l_229,&l_229,(void*)0},{&l_229,&l_229,&l_229,&l_229,&l_229,&l_229,(void*)0},{&l_229,&l_229,&l_229,&l_229,&l_229,&l_229,(void*)0},{&l_229,&l_229,&l_229,&l_229,&l_229,&l_229,(void*)0},{&l_229,&l_229,&l_229,&l_229,&l_229,&l_229,(void*)0},{&l_229,&l_229,&l_229,&l_229,&l_229,&l_229,(void*)0},{&l_229,&l_229,&l_229,&l_229,&l_229,&l_229,(void*)0}},{{&l_229,&l_229,&l_229,&l_229,&l_229,&l_229,(void*)0},{&l_229,&l_229,&l_229,&l_229,&l_229,&l_229,(void*)0},{&l_229,&l_229,&l_229,&l_229,&l_229,&l_229,(void*)0},{&l_229,&l_229,&l_229,&l_229,&l_229,&l_229,(void*)0},{&l_229,&l_229,&l_229,&l_229,&l_229,&l_229,(void*)0},{&l_229,&l_229,&l_229,&l_229,&l_229,&l_229,(void*)0},{&l_229,&l_229,&l_229,&l_229,&l_229,&l_229,(void*)0}},{{&l_229,&l_229,&l_229,&l_229,&l_229,&l_229,(void*)0},{&l_229,&l_229,&l_229,&l_229,&l_229,&l_229,(void*)0},{&l_229,&l_229,&l_229,&l_229,&l_229,&l_229,(void*)0},{&l_229,&l_229,&l_229,&l_229,&l_229,&l_229,(void*)0},{&l_229,&l_229,&l_229,&l_229,&l_229,&l_229,(void*)0},{&l_229,&l_229,&l_229,&l_229,&l_229,&l_229,(void*)0},{&l_229,&l_229,&l_229,&l_229,&l_229,&l_229,(void*)0}},{{&l_229,&l_229,&l_229,&l_229,&l_229,&l_229,(void*)0},{&l_229,&l_229,&l_229,&l_229,&l_229,&l_229,(void*)0},{&l_229,&l_229,&l_229,&l_229,&l_229,&l_229,(void*)0},{&l_229,&l_229,&l_229,&l_229,&l_229,&l_229,(void*)0},{&l_229,&l_229,&l_229,&l_229,&l_229,&l_229,(void*)0},{&l_229,&l_229,&l_229,&l_229,&l_229,&l_229,(void*)0},{&l_229,&l_229,&l_229,&l_229,&l_229,&l_229,(void*)0}}};
                    uint64_t **l_227 = &l_228[1][2][4];
                    uint64_t **l_230[5][7][7] = {{{&l_228[0][1][0],&l_228[1][2][4],&l_228[1][2][4],&l_228[3][1][2],&l_228[1][2][4],&l_228[1][2][4],&l_228[1][2][4]},{&l_228[0][1][0],&l_228[1][2][4],&l_228[1][2][4],&l_228[3][1][2],&l_228[1][2][4],&l_228[1][2][4],&l_228[1][2][4]},{&l_228[0][1][0],&l_228[1][2][4],&l_228[1][2][4],&l_228[3][1][2],&l_228[1][2][4],&l_228[1][2][4],&l_228[1][2][4]},{&l_228[0][1][0],&l_228[1][2][4],&l_228[1][2][4],&l_228[3][1][2],&l_228[1][2][4],&l_228[1][2][4],&l_228[1][2][4]},{&l_228[0][1][0],&l_228[1][2][4],&l_228[1][2][4],&l_228[3][1][2],&l_228[1][2][4],&l_228[1][2][4],&l_228[1][2][4]},{&l_228[0][1][0],&l_228[1][2][4],&l_228[1][2][4],&l_228[3][1][2],&l_228[1][2][4],&l_228[1][2][4],&l_228[1][2][4]},{&l_228[0][1][0],&l_228[1][2][4],&l_228[1][2][4],&l_228[3][1][2],&l_228[1][2][4],&l_228[1][2][4],&l_228[1][2][4]}},{{&l_228[0][1][0],&l_228[1][2][4],&l_228[1][2][4],&l_228[3][1][2],&l_228[1][2][4],&l_228[1][2][4],&l_228[1][2][4]},{&l_228[0][1][0],&l_228[1][2][4],&l_228[1][2][4],&l_228[3][1][2],&l_228[1][2][4],&l_228[1][2][4],&l_228[1][2][4]},{&l_228[0][1][0],&l_228[1][2][4],&l_228[1][2][4],&l_228[3][1][2],&l_228[1][2][4],&l_228[1][2][4],&l_228[1][2][4]},{&l_228[0][1][0],&l_228[1][2][4],&l_228[1][2][4],&l_228[3][1][2],&l_228[1][2][4],&l_228[1][2][4],&l_228[1][2][4]},{&l_228[0][1][0],&l_228[1][2][4],&l_228[1][2][4],&l_228[3][1][2],&l_228[1][2][4],&l_228[1][2][4],&l_228[1][2][4]},{&l_228[0][1][0],&l_228[1][2][4],&l_228[1][2][4],&l_228[3][1][2],&l_228[1][2][4],&l_228[1][2][4],&l_228[1][2][4]},{&l_228[0][1][0],&l_228[1][2][4],&l_228[1][2][4],&l_228[3][1][2],&l_228[1][2][4],&l_228[1][2][4],&l_228[1][2][4]}},{{&l_228[0][1][0],&l_228[1][2][4],&l_228[1][2][4],&l_228[3][1][2],&l_228[1][2][4],&l_228[1][2][4],&l_228[1][2][4]},{&l_228[0][1][0],&l_228[1][2][4],&l_228[1][2][4],&l_228[3][1][2],&l_228[1][2][4],&l_228[1][2][4],&l_228[1][2][4]},{&l_228[0][1][0],&l_228[1][2][4],&l_228[1][2][4],&l_228[3][1][2],&l_228[1][2][4],&l_228[1][2][4],&l_228[1][2][4]},{&l_228[0][1][0],&l_228[1][2][4],&l_228[1][2][4],&l_228[3][1][2],&l_228[1][2][4],&l_228[1][2][4],&l_228[1][2][4]},{&l_228[0][1][0],&l_228[1][2][4],&l_228[1][2][4],&l_228[3][1][2],&l_228[1][2][4],&l_228[1][2][4],&l_228[1][2][4]},{&l_228[0][1][0],&l_228[1][2][4],&l_228[1][2][4],&l_228[3][1][2],&l_228[1][2][4],&l_228[1][2][4],&l_228[1][2][4]},{&l_228[0][1][0],&l_228[1][2][4],&l_228[1][2][4],&l_228[3][1][2],&l_228[1][2][4],&l_228[1][2][4],&l_228[1][2][4]}},{{&l_228[0][1][0],&l_228[1][2][4],&l_228[1][2][4],&l_228[3][1][2],&l_228[1][2][4],&l_228[1][2][4],&l_228[1][2][4]},{&l_228[0][1][0],&l_228[1][2][4],&l_228[1][2][4],&l_228[3][1][2],&l_228[1][2][4],&l_228[1][2][4],&l_228[1][2][4]},{&l_228[0][1][0],&l_228[1][2][4],&l_228[1][2][4],&l_228[3][1][2],&l_228[1][2][4],&l_228[1][2][4],&l_228[1][2][4]},{&l_228[0][1][0],&l_228[1][2][4],&l_228[1][2][4],&l_228[3][1][2],&l_228[1][2][4],&l_228[1][2][4],&l_228[1][2][4]},{&l_228[0][1][0],&l_228[1][2][4],&l_228[1][2][4],&l_228[3][1][2],&l_228[1][2][4],&l_228[1][2][4],&l_228[1][2][4]},{&l_228[0][1][0],&l_228[1][2][4],&l_228[1][2][4],&l_228[3][1][2],&l_228[1][2][4],&l_228[1][2][4],&l_228[1][2][4]},{&l_228[0][1][0],&l_228[1][2][4],&l_228[1][2][4],&l_228[3][1][2],&l_228[1][2][4],&l_228[1][2][4],&l_228[1][2][4]}},{{&l_228[0][1][0],&l_228[1][2][4],&l_228[1][2][4],&l_228[3][1][2],&l_228[1][2][4],&l_228[1][2][4],&l_228[1][2][4]},{&l_228[0][1][0],&l_228[1][2][4],&l_228[1][2][4],&l_228[3][1][2],&l_228[1][2][4],&l_228[1][2][4],&l_228[1][2][4]},{&l_228[0][1][0],&l_228[1][2][4],&l_228[1][2][4],&l_228[3][1][2],&l_228[1][2][4],&l_228[1][2][4],&l_228[1][2][4]},{&l_228[0][1][0],&l_228[1][2][4],&l_228[1][2][4],&l_228[3][1][2],&l_228[1][2][4],&l_228[1][2][4],&l_228[1][2][4]},{&l_228[0][1][0],&l_228[1][2][4],&l_228[1][2][4],&l_228[3][1][2],&l_228[1][2][4],&l_228[1][2][4],&l_228[1][2][4]},{&l_228[0][1][0],&l_228[1][2][4],&l_228[1][2][4],&l_228[3][1][2],&l_228[1][2][4],&l_228[1][2][4],&l_228[1][2][4]},{&l_228[0][1][0],&l_228[1][2][4],&l_228[1][2][4],&l_228[3][1][2],&l_228[1][2][4],&l_228[1][2][4],&l_228[1][2][4]}}};
                    uint8_t l_231 = 0x03L;
                    int i, j, k;
                    for (l_221 = (-23); (l_221 != (-12)); l_221 = safe_add_func_int16_t_s_s(l_221, 6))
                    { /* block id: 88 */
                        int32_t l_224 = 9L;
                        uint16_t l_225 = 9UL;
                        l_225 = l_224;
                    }
                    l_230[0][6][3] = (l_226 , (l_227 = (void*)0));
                    l_221 = ((VECTOR(int32_t, 8))(0L, l_231, 6L, 8L, 0x5D3DC842L, 0x61E47A67L, (-1L), 0x35EBB404L)).s3;
                }
                for (l_212 = (-24); (l_212 <= 58); l_212 = safe_add_func_uint32_t_u_u(l_212, 4))
                { /* block id: 97 */
                    int32_t l_235 = 0L;
                    int32_t *l_234 = &l_235;
                    l_234 = (l_215 = l_234);
                }
            }
            l_242 = ((((((l_115.z = ((l_236 = 0x0DL) , ((VECTOR(int8_t, 8))((-4L), 0x27L, 0x5EL, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_237.wyyy)))), 0x22L)).s4)) , (l_239[1] |= (l_238 , 0L))) , ((VECTOR(uint32_t, 16))(min(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0x712901F4L, 0x26FF626BL)).xxxyyxxy)).s2707126545722323, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0x90C01ED3L, 0x86F7CE8DL)).yyyxxyxy)).s1261375256634616))))))).sd) , (l_240 = FAKE_DIVERGE(p_1040->global_2_offset, get_global_id(2), 10))) , 0x3E8EB30647268135L) , l_241);
        }
        l_245 = (l_243 , l_244);
        l_246 = (-1L);
        if (l_247)
        { /* block id: 110 */
            uint64_t l_248 = 0UL;
            uint32_t l_249 = 0x4050AAE1L;
            uint8_t l_250 = 248UL;
            uint32_t l_253[7];
            int i;
            for (i = 0; i < 7; i++)
                l_253[i] = 1UL;
            l_249 ^= ((*l_244) &= l_248);
            (*l_244) &= (-5L);
            --l_250;
            l_253[6]++;
        }
        else
        { /* block id: 116 */
            uint8_t l_256 = 0xACL;
            int32_t l_257[3];
            VECTOR(int32_t, 2) l_303 = (VECTOR(int32_t, 2))((-10L), 1L);
            VECTOR(int32_t, 8) l_304 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x1D1B5B6DL), 0x1D1B5B6DL), 0x1D1B5B6DL, 1L, 0x1D1B5B6DL);
            int16_t l_305 = (-9L);
            int32_t l_306[10];
            VECTOR(int32_t, 8) l_307 = (VECTOR(int32_t, 8))(0x38694B0BL, (VECTOR(int32_t, 4))(0x38694B0BL, (VECTOR(int32_t, 2))(0x38694B0BL, 6L), 6L), 6L, 0x38694B0BL, 6L);
            int8_t l_308 = 1L;
            int16_t l_309 = 0x0FCAL;
            uint32_t l_310 = 5UL;
            int32_t l_311 = 0x390A3EDAL;
            VECTOR(int32_t, 16) l_312 = (VECTOR(int32_t, 16))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0L), 0L), 0L, 2L, 0L, (VECTOR(int32_t, 2))(2L, 0L), (VECTOR(int32_t, 2))(2L, 0L), 2L, 0L, 2L, 0L);
            int32_t l_313[10];
            VECTOR(int64_t, 8) l_314 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-10L)), (-10L)), (-10L), 1L, (-10L));
            int16_t l_315[3][10][4] = {{{0x6579L,0x6579L,0x02E5L,0x35DDL},{0x6579L,0x6579L,0x02E5L,0x35DDL},{0x6579L,0x6579L,0x02E5L,0x35DDL},{0x6579L,0x6579L,0x02E5L,0x35DDL},{0x6579L,0x6579L,0x02E5L,0x35DDL},{0x6579L,0x6579L,0x02E5L,0x35DDL},{0x6579L,0x6579L,0x02E5L,0x35DDL},{0x6579L,0x6579L,0x02E5L,0x35DDL},{0x6579L,0x6579L,0x02E5L,0x35DDL},{0x6579L,0x6579L,0x02E5L,0x35DDL}},{{0x6579L,0x6579L,0x02E5L,0x35DDL},{0x6579L,0x6579L,0x02E5L,0x35DDL},{0x6579L,0x6579L,0x02E5L,0x35DDL},{0x6579L,0x6579L,0x02E5L,0x35DDL},{0x6579L,0x6579L,0x02E5L,0x35DDL},{0x6579L,0x6579L,0x02E5L,0x35DDL},{0x6579L,0x6579L,0x02E5L,0x35DDL},{0x6579L,0x6579L,0x02E5L,0x35DDL},{0x6579L,0x6579L,0x02E5L,0x35DDL},{0x6579L,0x6579L,0x02E5L,0x35DDL}},{{0x6579L,0x6579L,0x02E5L,0x35DDL},{0x6579L,0x6579L,0x02E5L,0x35DDL},{0x6579L,0x6579L,0x02E5L,0x35DDL},{0x6579L,0x6579L,0x02E5L,0x35DDL},{0x6579L,0x6579L,0x02E5L,0x35DDL},{0x6579L,0x6579L,0x02E5L,0x35DDL},{0x6579L,0x6579L,0x02E5L,0x35DDL},{0x6579L,0x6579L,0x02E5L,0x35DDL},{0x6579L,0x6579L,0x02E5L,0x35DDL},{0x6579L,0x6579L,0x02E5L,0x35DDL}}};
            int8_t l_316 = 0x39L;
            VECTOR(int32_t, 4) l_317 = (VECTOR(int32_t, 4))(0x04B572D1L, (VECTOR(int32_t, 2))(0x04B572D1L, (-1L)), (-1L));
            int16_t l_318 = (-1L);
            int8_t l_319 = (-2L);
            int64_t l_320 = 0x4CAE64A78AF4274AL;
            int16_t l_321[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
            int8_t l_322 = 0x42L;
            int32_t l_323 = 0L;
            int32_t l_324 = 0L;
            VECTOR(int16_t, 2) l_325 = (VECTOR(int16_t, 2))(0L, 0L);
            int16_t l_326 = 0x373DL;
            int8_t l_327[9][7] = {{0x1CL,8L,(-1L),8L,0x1CL,0x1CL,8L},{0x1CL,8L,(-1L),8L,0x1CL,0x1CL,8L},{0x1CL,8L,(-1L),8L,0x1CL,0x1CL,8L},{0x1CL,8L,(-1L),8L,0x1CL,0x1CL,8L},{0x1CL,8L,(-1L),8L,0x1CL,0x1CL,8L},{0x1CL,8L,(-1L),8L,0x1CL,0x1CL,8L},{0x1CL,8L,(-1L),8L,0x1CL,0x1CL,8L},{0x1CL,8L,(-1L),8L,0x1CL,0x1CL,8L},{0x1CL,8L,(-1L),8L,0x1CL,0x1CL,8L}};
            int32_t l_328 = 0x6C32B9A7L;
            uint64_t l_329[10] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_257[i] = 0x4261EE3FL;
            for (i = 0; i < 10; i++)
                l_306[i] = 1L;
            for (i = 0; i < 10; i++)
                l_313[i] = 4L;
            l_257[2] &= ((*l_244) = l_256);
            for (l_256 = (-10); (l_256 <= 20); ++l_256)
            { /* block id: 121 */
                uint8_t l_260 = 255UL;
                int32_t l_261 = 0x7FF2E2D8L;
                uint8_t l_262 = 0xDFL;
                uint32_t l_263[3][4] = {{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL}};
                int i, j;
                l_244 = ((l_260 , ((l_261 , 0UL) , (l_262 , (l_247 = 0x48FD1A81B3F29B52L)))) , (void*)0);
                (*l_245) = l_263[0][0];
                (*l_245) = 1L;
                if (((*l_245) = 0L))
                { /* block id: 127 */
                    VECTOR(int32_t, 8) l_264 = (VECTOR(int32_t, 8))(0x02A27E15L, (VECTOR(int32_t, 4))(0x02A27E15L, (VECTOR(int32_t, 2))(0x02A27E15L, 0x49EEDA6FL), 0x49EEDA6FL), 0x49EEDA6FL, 0x02A27E15L, 0x49EEDA6FL);
                    int32_t *l_283 = (void*)0;
                    int i;
                    for (l_264.s0 = (-13); (l_264.s0 < 2); l_264.s0++)
                    { /* block id: 130 */
                        uint32_t l_267 = 0x1E61DF5BL;
                        int32_t l_268 = 0L;
                        int64_t l_269 = 0x2125EDF4A1A8C06CL;
                        int16_t l_270 = 0x2917L;
                        int32_t l_271 = 0L;
                        int8_t l_272 = 5L;
                        uint32_t l_273 = 0xC09B9994L;
                        int32_t l_276[1][5][5] = {{{0x541714DEL,(-2L),(-2L),0x541714DEL,0x541714DEL},{0x541714DEL,(-2L),(-2L),0x541714DEL,0x541714DEL},{0x541714DEL,(-2L),(-2L),0x541714DEL,0x541714DEL},{0x541714DEL,(-2L),(-2L),0x541714DEL,0x541714DEL},{0x541714DEL,(-2L),(-2L),0x541714DEL,0x541714DEL}}};
                        int64_t l_277 = (-10L);
                        int8_t l_278 = 0x43L;
                        uint16_t l_279 = 1UL;
                        VECTOR(int32_t, 16) l_282 = (VECTOR(int32_t, 16))(0x4D5AF03DL, (VECTOR(int32_t, 4))(0x4D5AF03DL, (VECTOR(int32_t, 2))(0x4D5AF03DL, 0x4833727BL), 0x4833727BL), 0x4833727BL, 0x4D5AF03DL, 0x4833727BL, (VECTOR(int32_t, 2))(0x4D5AF03DL, 0x4833727BL), (VECTOR(int32_t, 2))(0x4D5AF03DL, 0x4833727BL), 0x4D5AF03DL, 0x4833727BL, 0x4D5AF03DL, 0x4833727BL);
                        int i, j, k;
                        (*l_245) = l_267;
                        l_273++;
                        --l_279;
                        l_261 = ((*l_245) = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_282.s3aee)).odd)).even);
                    }
                    l_244 = l_283;
                    for (l_264.s6 = 0; (l_264.s6 == 29); l_264.s6 = safe_add_func_uint8_t_u_u(l_264.s6, 1))
                    { /* block id: 140 */
                        int8_t l_286 = 0x31L;
                        int16_t l_287 = (-2L);
                        uint64_t l_288 = 0xDAEDDC266FC46F5DL;
                        uint64_t l_289 = 0x10185259C5DC8D8AL;
                        l_286 |= 0x14ECE652L;
                        l_289 = (l_287 , l_288);
                    }
                    for (l_264.s1 = (-16); (l_264.s1 < (-3)); l_264.s1++)
                    { /* block id: 146 */
                        uint16_t l_292 = 65533UL;
                        ++l_292;
                    }
                }
                else
                { /* block id: 149 */
                    int8_t l_295 = 2L;
                    int32_t l_296 = 9L;
                    int8_t l_297[10] = {0x50L,(-6L),0x7CL,(-6L),0x50L,0x50L,(-6L),0x7CL,(-6L),0x50L};
                    int8_t l_298 = (-1L);
                    int32_t l_299 = 0x69E337C1L;
                    uint32_t l_300 = 0x8B18EEEDL;
                    int i;
                    l_300++;
                }
            }
            l_322 |= ((((VECTOR(int32_t, 8))((l_310 ^= (((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 2))(0x18EAC5C4L, (-1L))).yxyyxxyx, ((VECTOR(int32_t, 2))(9L, 0L)).xxxxyxyx))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_303.xxyyyxyy)).s4530143726411356)).s8f4f, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_304.s67736467)).s00)).xxyy)).xwzwzxzy)).s37)), ((l_305 , l_306[4]) , ((*l_245) = (l_303.x |= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_307.s4606537200713656)).even)), ((VECTOR(int32_t, 2))(0x6926E421L, (-1L))).xyyyxyyx))).s12)).odd))), (-1L), 0x46C937C4L, (-5L), (-9L), 0L)).hi))).yzxxwzwy))))).s3 , (l_308 , l_309))), l_311, 1L, ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(l_312.s66ad)), (int32_t)((*l_245) = ((VECTOR(int32_t, 8))((-3L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(0x714B6D7EL, ((VECTOR(int32_t, 16))((l_313[1] , ((((VECTOR(int64_t, 4))(l_314.s7055)).y , (l_315[1][5][0] , l_316)) , ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 16))(l_317.xzwxywyzzwwzxyzw)).s6d4d, (int32_t)(l_318 , l_319), (int32_t)(-1L)))), ((VECTOR(int32_t, 4))(9L)), ((VECTOR(int32_t, 4))(0x43AADE25L))))).w)), ((VECTOR(int32_t, 4))(2L)), (-1L), ((VECTOR(int32_t, 8))(0L)), 4L, (-7L))).s0, 0x6E790F70L, 0x05DD36FAL)))), 0x3D2A1564L, 9L, 0x65D6997DL)).s1)))), (-1L))).s2 , l_320) , l_321[7]);
            l_329[9]++;
        }
        unsigned int result = 0;
        result += l_108;
        result += l_243;
        result += l_246;
        result += l_247;
        atomic_add(&p_1040->l_special_values[55], result);
    }
    else
    { /* block id: 160 */
        (1 + 1);
    }
    return p_1040->g_93[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1040->g_24 p_1040->g_101
 * writes: p_1040->g_101 p_1040->g_41 p_1040->g_103 p_1040->g_104
 */
int16_t  func_61(uint16_t  p_62, uint32_t  p_63, int32_t * p_64, struct S0 * p_1040)
{ /* block id: 18 */
    VECTOR(uint32_t, 16) l_95 = (VECTOR(uint32_t, 16))(0x97CB3D53L, (VECTOR(uint32_t, 4))(0x97CB3D53L, (VECTOR(uint32_t, 2))(0x97CB3D53L, 0x19E5FB73L), 0x19E5FB73L), 0x19E5FB73L, 0x97CB3D53L, 0x19E5FB73L, (VECTOR(uint32_t, 2))(0x97CB3D53L, 0x19E5FB73L), (VECTOR(uint32_t, 2))(0x97CB3D53L, 0x19E5FB73L), 0x97CB3D53L, 0x19E5FB73L, 0x97CB3D53L, 0x19E5FB73L);
    int16_t *l_98 = (void*)0;
    uint16_t *l_99 = (void*)0;
    uint16_t *l_100 = &p_1040->g_101;
    int32_t *l_102[4] = {&p_1040->g_103,&p_1040->g_103,&p_1040->g_103,&p_1040->g_103};
    int i;
    p_1040->g_104 = (p_1040->g_103 = (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_95.s896f98b6)).s26)).lo , ((*p_64) = (safe_mul_func_int16_t_s_s(0x7641L, ((*l_100) ^= (l_98 == p_1040->g_24)))))));
    return p_62;
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
    __local int64_t l_comm_values[2];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 2; i++)
            l_comm_values[i] = 1;
    struct S0 c_1041;
    struct S0* p_1040 = &c_1041;
    struct S0 c_1042 = {
        (-1L), // p_1040->g_2
        0x324CL, // p_1040->g_16
        (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-1L)), (-1L)), // p_1040->g_25
        (void*)0, // p_1040->g_24
        3L, // p_1040->g_41
        (VECTOR(uint64_t, 8))(8UL, (VECTOR(uint64_t, 4))(8UL, (VECTOR(uint64_t, 2))(8UL, 0x3C574C3FC6C064B5L), 0x3C574C3FC6C064B5L), 0x3C574C3FC6C064B5L, 8UL, 0x3C574C3FC6C064B5L), // p_1040->g_77
        {3UL,3UL}, // p_1040->g_93
        65535UL, // p_1040->g_101
        0x0CD5B4F6L, // p_1040->g_103
        (-1L), // p_1040->g_104
        (void*)0, // p_1040->g_105
        7UL, // p_1040->g_334
        {{{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L}},{{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L}},{{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L}},{{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L}},{{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L}},{{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L}},{{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L}},{{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L},{1L,0x540CL,0x4343L}}}, // p_1040->g_339
        0x6B49F35FL, // p_1040->g_340
        0x7F765F64L, // p_1040->g_341
        {0x1A25314A50148CBAL,0x1A25314A50148CBAL,0x1A25314A50148CBAL,0x1A25314A50148CBAL,0x1A25314A50148CBAL,0x1A25314A50148CBAL}, // p_1040->g_342
        4294967294UL, // p_1040->g_343
        0UL, // p_1040->g_380
        (VECTOR(uint16_t, 4))(0x77E5L, (VECTOR(uint16_t, 2))(0x77E5L, 65528UL), 65528UL), // p_1040->g_404
        (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x1B98L), 0x1B98L), // p_1040->g_405
        0x6ACDC3FAL, // p_1040->g_411
        (VECTOR(int32_t, 2))((-9L), 5L), // p_1040->g_417
        7UL, // p_1040->g_442
        (VECTOR(uint64_t, 8))(0x20D6CCDC90C96A3DL, (VECTOR(uint64_t, 4))(0x20D6CCDC90C96A3DL, (VECTOR(uint64_t, 2))(0x20D6CCDC90C96A3DL, 0xED16FBDDF0A51633L), 0xED16FBDDF0A51633L), 0xED16FBDDF0A51633L, 0x20D6CCDC90C96A3DL, 0xED16FBDDF0A51633L), // p_1040->g_443
        (VECTOR(int8_t, 16))(0x23L, (VECTOR(int8_t, 4))(0x23L, (VECTOR(int8_t, 2))(0x23L, 0x6AL), 0x6AL), 0x6AL, 0x23L, 0x6AL, (VECTOR(int8_t, 2))(0x23L, 0x6AL), (VECTOR(int8_t, 2))(0x23L, 0x6AL), 0x23L, 0x6AL, 0x23L, 0x6AL), // p_1040->g_494
        {0UL,0xFF85CF82L,0UL,0xFF85CF82L,0UL,0UL,0xFF85CF82L,0UL,0xFF85CF82L,0UL}, // p_1040->g_506
        0x6BEC3F69D5BEB8F6L, // p_1040->g_535
        (VECTOR(uint16_t, 2))(65532UL, 0x95FBL), // p_1040->g_600
        (VECTOR(uint16_t, 8))(0xD1FFL, (VECTOR(uint16_t, 4))(0xD1FFL, (VECTOR(uint16_t, 2))(0xD1FFL, 0x6A48L), 0x6A48L), 0x6A48L, 0xD1FFL, 0x6A48L), // p_1040->g_601
        &p_1040->g_104, // p_1040->g_613
        (void*)0, // p_1040->g_629
        &p_1040->g_629, // p_1040->g_628
        (VECTOR(int64_t, 4))(0x3F86CBA6BC50F7B8L, (VECTOR(int64_t, 2))(0x3F86CBA6BC50F7B8L, 0x41533BF436300750L), 0x41533BF436300750L), // p_1040->g_630
        {{{7UL,7UL,7UL}}}, // p_1040->g_639
        0x02L, // p_1040->g_641
        (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L)), // p_1040->g_657
        (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), 1UL), // p_1040->g_662
        &p_1040->g_641, // p_1040->g_675
        (void*)0, // p_1040->g_678
        &p_1040->g_613, // p_1040->g_692
        &p_1040->g_692, // p_1040->g_691
        (void*)0, // p_1040->g_832
        &p_1040->g_832, // p_1040->g_831
        (VECTOR(uint64_t, 4))(18446744073709551612UL, (VECTOR(uint64_t, 2))(18446744073709551612UL, 4UL), 4UL), // p_1040->g_881
        (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x62023292D1B9B6C3L), 0x62023292D1B9B6C3L), 0x62023292D1B9B6C3L, (-1L), 0x62023292D1B9B6C3L), // p_1040->g_933
        (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x7CL), 0x7CL), 0x7CL, (-1L), 0x7CL), // p_1040->g_938
        (-1L), // p_1040->g_943
        0x48L, // p_1040->g_945
        (VECTOR(int16_t, 4))(0x6A50L, (VECTOR(int16_t, 2))(0x6A50L, 1L), 1L), // p_1040->g_957
        0x375567CCL, // p_1040->g_984
        (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-6L)), (-6L)), (-6L), 1L, (-6L), (VECTOR(int16_t, 2))(1L, (-6L)), (VECTOR(int16_t, 2))(1L, (-6L)), 1L, (-6L), 1L, (-6L)), // p_1040->g_1007
        (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, (-5L)), (-5L)), // p_1040->g_1008
        0, // p_1040->v_collective
        sequence_input[get_global_id(0)], // p_1040->global_0_offset
        sequence_input[get_global_id(1)], // p_1040->global_1_offset
        sequence_input[get_global_id(2)], // p_1040->global_2_offset
        sequence_input[get_local_id(0)], // p_1040->local_0_offset
        sequence_input[get_local_id(1)], // p_1040->local_1_offset
        sequence_input[get_local_id(2)], // p_1040->local_2_offset
        sequence_input[get_group_id(0)], // p_1040->group_0_offset
        sequence_input[get_group_id(1)], // p_1040->group_1_offset
        sequence_input[get_group_id(2)], // p_1040->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[0][get_linear_local_id()])), // p_1040->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1041 = c_1042;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1040);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1040->g_2, "p_1040->g_2", print_hash_value);
    transparent_crc(p_1040->g_16, "p_1040->g_16", print_hash_value);
    transparent_crc(p_1040->g_25.x, "p_1040->g_25.x", print_hash_value);
    transparent_crc(p_1040->g_25.y, "p_1040->g_25.y", print_hash_value);
    transparent_crc(p_1040->g_25.z, "p_1040->g_25.z", print_hash_value);
    transparent_crc(p_1040->g_25.w, "p_1040->g_25.w", print_hash_value);
    transparent_crc(p_1040->g_41, "p_1040->g_41", print_hash_value);
    transparent_crc(p_1040->g_77.s0, "p_1040->g_77.s0", print_hash_value);
    transparent_crc(p_1040->g_77.s1, "p_1040->g_77.s1", print_hash_value);
    transparent_crc(p_1040->g_77.s2, "p_1040->g_77.s2", print_hash_value);
    transparent_crc(p_1040->g_77.s3, "p_1040->g_77.s3", print_hash_value);
    transparent_crc(p_1040->g_77.s4, "p_1040->g_77.s4", print_hash_value);
    transparent_crc(p_1040->g_77.s5, "p_1040->g_77.s5", print_hash_value);
    transparent_crc(p_1040->g_77.s6, "p_1040->g_77.s6", print_hash_value);
    transparent_crc(p_1040->g_77.s7, "p_1040->g_77.s7", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1040->g_93[i], "p_1040->g_93[i]", print_hash_value);

    }
    transparent_crc(p_1040->g_101, "p_1040->g_101", print_hash_value);
    transparent_crc(p_1040->g_103, "p_1040->g_103", print_hash_value);
    transparent_crc(p_1040->g_104, "p_1040->g_104", print_hash_value);
    transparent_crc(p_1040->g_334, "p_1040->g_334", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1040->g_339[i][j][k], "p_1040->g_339[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1040->g_340, "p_1040->g_340", print_hash_value);
    transparent_crc(p_1040->g_341, "p_1040->g_341", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1040->g_342[i], "p_1040->g_342[i]", print_hash_value);

    }
    transparent_crc(p_1040->g_343, "p_1040->g_343", print_hash_value);
    transparent_crc(p_1040->g_380, "p_1040->g_380", print_hash_value);
    transparent_crc(p_1040->g_404.x, "p_1040->g_404.x", print_hash_value);
    transparent_crc(p_1040->g_404.y, "p_1040->g_404.y", print_hash_value);
    transparent_crc(p_1040->g_404.z, "p_1040->g_404.z", print_hash_value);
    transparent_crc(p_1040->g_404.w, "p_1040->g_404.w", print_hash_value);
    transparent_crc(p_1040->g_405.x, "p_1040->g_405.x", print_hash_value);
    transparent_crc(p_1040->g_405.y, "p_1040->g_405.y", print_hash_value);
    transparent_crc(p_1040->g_405.z, "p_1040->g_405.z", print_hash_value);
    transparent_crc(p_1040->g_405.w, "p_1040->g_405.w", print_hash_value);
    transparent_crc(p_1040->g_411, "p_1040->g_411", print_hash_value);
    transparent_crc(p_1040->g_417.x, "p_1040->g_417.x", print_hash_value);
    transparent_crc(p_1040->g_417.y, "p_1040->g_417.y", print_hash_value);
    transparent_crc(p_1040->g_442, "p_1040->g_442", print_hash_value);
    transparent_crc(p_1040->g_443.s0, "p_1040->g_443.s0", print_hash_value);
    transparent_crc(p_1040->g_443.s1, "p_1040->g_443.s1", print_hash_value);
    transparent_crc(p_1040->g_443.s2, "p_1040->g_443.s2", print_hash_value);
    transparent_crc(p_1040->g_443.s3, "p_1040->g_443.s3", print_hash_value);
    transparent_crc(p_1040->g_443.s4, "p_1040->g_443.s4", print_hash_value);
    transparent_crc(p_1040->g_443.s5, "p_1040->g_443.s5", print_hash_value);
    transparent_crc(p_1040->g_443.s6, "p_1040->g_443.s6", print_hash_value);
    transparent_crc(p_1040->g_443.s7, "p_1040->g_443.s7", print_hash_value);
    transparent_crc(p_1040->g_494.s0, "p_1040->g_494.s0", print_hash_value);
    transparent_crc(p_1040->g_494.s1, "p_1040->g_494.s1", print_hash_value);
    transparent_crc(p_1040->g_494.s2, "p_1040->g_494.s2", print_hash_value);
    transparent_crc(p_1040->g_494.s3, "p_1040->g_494.s3", print_hash_value);
    transparent_crc(p_1040->g_494.s4, "p_1040->g_494.s4", print_hash_value);
    transparent_crc(p_1040->g_494.s5, "p_1040->g_494.s5", print_hash_value);
    transparent_crc(p_1040->g_494.s6, "p_1040->g_494.s6", print_hash_value);
    transparent_crc(p_1040->g_494.s7, "p_1040->g_494.s7", print_hash_value);
    transparent_crc(p_1040->g_494.s8, "p_1040->g_494.s8", print_hash_value);
    transparent_crc(p_1040->g_494.s9, "p_1040->g_494.s9", print_hash_value);
    transparent_crc(p_1040->g_494.sa, "p_1040->g_494.sa", print_hash_value);
    transparent_crc(p_1040->g_494.sb, "p_1040->g_494.sb", print_hash_value);
    transparent_crc(p_1040->g_494.sc, "p_1040->g_494.sc", print_hash_value);
    transparent_crc(p_1040->g_494.sd, "p_1040->g_494.sd", print_hash_value);
    transparent_crc(p_1040->g_494.se, "p_1040->g_494.se", print_hash_value);
    transparent_crc(p_1040->g_494.sf, "p_1040->g_494.sf", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1040->g_506[i], "p_1040->g_506[i]", print_hash_value);

    }
    transparent_crc(p_1040->g_535, "p_1040->g_535", print_hash_value);
    transparent_crc(p_1040->g_600.x, "p_1040->g_600.x", print_hash_value);
    transparent_crc(p_1040->g_600.y, "p_1040->g_600.y", print_hash_value);
    transparent_crc(p_1040->g_601.s0, "p_1040->g_601.s0", print_hash_value);
    transparent_crc(p_1040->g_601.s1, "p_1040->g_601.s1", print_hash_value);
    transparent_crc(p_1040->g_601.s2, "p_1040->g_601.s2", print_hash_value);
    transparent_crc(p_1040->g_601.s3, "p_1040->g_601.s3", print_hash_value);
    transparent_crc(p_1040->g_601.s4, "p_1040->g_601.s4", print_hash_value);
    transparent_crc(p_1040->g_601.s5, "p_1040->g_601.s5", print_hash_value);
    transparent_crc(p_1040->g_601.s6, "p_1040->g_601.s6", print_hash_value);
    transparent_crc(p_1040->g_601.s7, "p_1040->g_601.s7", print_hash_value);
    transparent_crc(p_1040->g_630.x, "p_1040->g_630.x", print_hash_value);
    transparent_crc(p_1040->g_630.y, "p_1040->g_630.y", print_hash_value);
    transparent_crc(p_1040->g_630.z, "p_1040->g_630.z", print_hash_value);
    transparent_crc(p_1040->g_630.w, "p_1040->g_630.w", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1040->g_639[i][j][k], "p_1040->g_639[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1040->g_641, "p_1040->g_641", print_hash_value);
    transparent_crc(p_1040->g_657.s0, "p_1040->g_657.s0", print_hash_value);
    transparent_crc(p_1040->g_657.s1, "p_1040->g_657.s1", print_hash_value);
    transparent_crc(p_1040->g_657.s2, "p_1040->g_657.s2", print_hash_value);
    transparent_crc(p_1040->g_657.s3, "p_1040->g_657.s3", print_hash_value);
    transparent_crc(p_1040->g_657.s4, "p_1040->g_657.s4", print_hash_value);
    transparent_crc(p_1040->g_657.s5, "p_1040->g_657.s5", print_hash_value);
    transparent_crc(p_1040->g_657.s6, "p_1040->g_657.s6", print_hash_value);
    transparent_crc(p_1040->g_657.s7, "p_1040->g_657.s7", print_hash_value);
    transparent_crc(p_1040->g_657.s8, "p_1040->g_657.s8", print_hash_value);
    transparent_crc(p_1040->g_657.s9, "p_1040->g_657.s9", print_hash_value);
    transparent_crc(p_1040->g_657.sa, "p_1040->g_657.sa", print_hash_value);
    transparent_crc(p_1040->g_657.sb, "p_1040->g_657.sb", print_hash_value);
    transparent_crc(p_1040->g_657.sc, "p_1040->g_657.sc", print_hash_value);
    transparent_crc(p_1040->g_657.sd, "p_1040->g_657.sd", print_hash_value);
    transparent_crc(p_1040->g_657.se, "p_1040->g_657.se", print_hash_value);
    transparent_crc(p_1040->g_657.sf, "p_1040->g_657.sf", print_hash_value);
    transparent_crc(p_1040->g_662.x, "p_1040->g_662.x", print_hash_value);
    transparent_crc(p_1040->g_662.y, "p_1040->g_662.y", print_hash_value);
    transparent_crc(p_1040->g_662.z, "p_1040->g_662.z", print_hash_value);
    transparent_crc(p_1040->g_662.w, "p_1040->g_662.w", print_hash_value);
    transparent_crc(p_1040->g_881.x, "p_1040->g_881.x", print_hash_value);
    transparent_crc(p_1040->g_881.y, "p_1040->g_881.y", print_hash_value);
    transparent_crc(p_1040->g_881.z, "p_1040->g_881.z", print_hash_value);
    transparent_crc(p_1040->g_881.w, "p_1040->g_881.w", print_hash_value);
    transparent_crc(p_1040->g_933.s0, "p_1040->g_933.s0", print_hash_value);
    transparent_crc(p_1040->g_933.s1, "p_1040->g_933.s1", print_hash_value);
    transparent_crc(p_1040->g_933.s2, "p_1040->g_933.s2", print_hash_value);
    transparent_crc(p_1040->g_933.s3, "p_1040->g_933.s3", print_hash_value);
    transparent_crc(p_1040->g_933.s4, "p_1040->g_933.s4", print_hash_value);
    transparent_crc(p_1040->g_933.s5, "p_1040->g_933.s5", print_hash_value);
    transparent_crc(p_1040->g_933.s6, "p_1040->g_933.s6", print_hash_value);
    transparent_crc(p_1040->g_933.s7, "p_1040->g_933.s7", print_hash_value);
    transparent_crc(p_1040->g_938.s0, "p_1040->g_938.s0", print_hash_value);
    transparent_crc(p_1040->g_938.s1, "p_1040->g_938.s1", print_hash_value);
    transparent_crc(p_1040->g_938.s2, "p_1040->g_938.s2", print_hash_value);
    transparent_crc(p_1040->g_938.s3, "p_1040->g_938.s3", print_hash_value);
    transparent_crc(p_1040->g_938.s4, "p_1040->g_938.s4", print_hash_value);
    transparent_crc(p_1040->g_938.s5, "p_1040->g_938.s5", print_hash_value);
    transparent_crc(p_1040->g_938.s6, "p_1040->g_938.s6", print_hash_value);
    transparent_crc(p_1040->g_938.s7, "p_1040->g_938.s7", print_hash_value);
    transparent_crc(p_1040->g_943, "p_1040->g_943", print_hash_value);
    transparent_crc(p_1040->g_945, "p_1040->g_945", print_hash_value);
    transparent_crc(p_1040->g_957.x, "p_1040->g_957.x", print_hash_value);
    transparent_crc(p_1040->g_957.y, "p_1040->g_957.y", print_hash_value);
    transparent_crc(p_1040->g_957.z, "p_1040->g_957.z", print_hash_value);
    transparent_crc(p_1040->g_957.w, "p_1040->g_957.w", print_hash_value);
    transparent_crc(p_1040->g_984, "p_1040->g_984", print_hash_value);
    transparent_crc(p_1040->g_1007.s0, "p_1040->g_1007.s0", print_hash_value);
    transparent_crc(p_1040->g_1007.s1, "p_1040->g_1007.s1", print_hash_value);
    transparent_crc(p_1040->g_1007.s2, "p_1040->g_1007.s2", print_hash_value);
    transparent_crc(p_1040->g_1007.s3, "p_1040->g_1007.s3", print_hash_value);
    transparent_crc(p_1040->g_1007.s4, "p_1040->g_1007.s4", print_hash_value);
    transparent_crc(p_1040->g_1007.s5, "p_1040->g_1007.s5", print_hash_value);
    transparent_crc(p_1040->g_1007.s6, "p_1040->g_1007.s6", print_hash_value);
    transparent_crc(p_1040->g_1007.s7, "p_1040->g_1007.s7", print_hash_value);
    transparent_crc(p_1040->g_1007.s8, "p_1040->g_1007.s8", print_hash_value);
    transparent_crc(p_1040->g_1007.s9, "p_1040->g_1007.s9", print_hash_value);
    transparent_crc(p_1040->g_1007.sa, "p_1040->g_1007.sa", print_hash_value);
    transparent_crc(p_1040->g_1007.sb, "p_1040->g_1007.sb", print_hash_value);
    transparent_crc(p_1040->g_1007.sc, "p_1040->g_1007.sc", print_hash_value);
    transparent_crc(p_1040->g_1007.sd, "p_1040->g_1007.sd", print_hash_value);
    transparent_crc(p_1040->g_1007.se, "p_1040->g_1007.se", print_hash_value);
    transparent_crc(p_1040->g_1007.sf, "p_1040->g_1007.sf", print_hash_value);
    transparent_crc(p_1040->g_1008.x, "p_1040->g_1008.x", print_hash_value);
    transparent_crc(p_1040->g_1008.y, "p_1040->g_1008.y", print_hash_value);
    transparent_crc(p_1040->g_1008.z, "p_1040->g_1008.z", print_hash_value);
    transparent_crc(p_1040->g_1008.w, "p_1040->g_1008.w", print_hash_value);
    transparent_crc(p_1040->v_collective, "p_1040->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 92; i++)
            transparent_crc(p_1040->g_special_values[i + 92 * get_linear_group_id()], "p_1040->g_special_values[i + 92 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 92; i++)
            transparent_crc(p_1040->l_special_values[i], "p_1040->l_special_values[i]", print_hash_value);
    transparent_crc(p_1040->l_comm_values[get_linear_local_id()], "p_1040->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1040->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()], "p_1040->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
