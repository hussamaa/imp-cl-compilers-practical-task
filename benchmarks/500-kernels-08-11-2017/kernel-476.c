// --atomics 19 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 63,33,3 -l 63,1,1
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

__constant uint32_t permutations[10][63] = {
{52,14,53,57,2,41,39,49,12,44,42,22,29,31,40,62,38,45,50,5,26,9,61,18,32,55,15,3,56,37,59,47,28,4,36,13,0,54,21,35,7,46,25,11,48,17,23,19,16,24,43,6,30,58,8,1,51,10,20,27,33,34,60}, // permutation 0
{3,30,48,53,46,27,52,0,11,2,62,34,40,24,10,35,13,32,16,45,28,8,17,56,33,43,54,58,4,41,21,59,60,44,38,14,37,49,23,39,36,19,1,61,22,50,31,47,55,5,51,25,6,29,7,12,57,20,9,26,15,42,18}, // permutation 1
{56,5,20,60,50,33,38,0,51,10,42,8,32,35,3,2,31,46,11,16,9,13,58,40,27,45,43,15,26,57,28,44,25,53,62,24,12,39,29,14,37,48,21,61,17,6,18,47,52,36,30,23,55,7,59,1,34,41,49,22,4,19,54}, // permutation 2
{39,57,9,43,59,47,62,10,12,56,53,50,21,25,26,23,22,3,44,42,33,6,24,28,35,16,38,48,20,40,7,8,55,17,49,32,41,27,0,18,54,60,15,5,34,61,29,31,52,4,19,58,30,11,45,13,36,2,1,51,37,46,14}, // permutation 3
{15,37,56,35,58,20,44,40,29,21,30,48,61,7,4,33,18,32,8,3,6,42,62,27,13,12,60,46,36,5,11,23,59,53,39,57,50,17,16,55,24,10,47,0,25,51,2,45,28,54,49,52,22,1,38,26,31,19,41,34,43,14,9}, // permutation 4
{30,47,16,6,14,9,8,62,17,3,12,41,28,37,49,15,0,39,46,50,25,52,57,38,23,48,29,40,13,35,21,7,53,19,61,55,5,45,22,34,43,31,20,54,26,1,51,36,58,59,18,60,24,56,32,27,44,42,10,4,2,33,11}, // permutation 5
{56,8,24,27,29,62,20,38,52,47,59,51,12,4,37,41,35,2,31,42,5,40,13,30,3,44,49,45,22,10,28,16,39,61,33,23,46,53,34,32,36,58,11,0,50,19,6,18,25,57,9,43,48,54,26,15,55,17,60,21,7,1,14}, // permutation 6
{27,17,20,2,28,45,29,35,51,38,26,7,4,11,52,47,23,53,31,41,32,15,39,12,50,22,5,59,10,6,49,46,48,34,33,18,36,56,58,8,43,14,54,16,0,13,21,60,30,57,55,37,62,25,61,42,44,19,24,3,1,9,40}, // permutation 7
{51,47,48,33,17,2,23,38,6,7,42,30,62,43,61,9,31,59,12,57,58,22,4,13,45,14,32,21,44,41,26,27,28,60,18,46,50,0,19,34,49,10,56,25,40,16,36,3,53,35,20,8,54,55,5,37,52,15,39,1,11,24,29}, // permutation 8
{4,15,34,5,37,21,24,11,60,44,14,30,49,2,10,39,59,58,16,18,8,41,0,12,26,35,1,20,46,61,42,57,3,50,9,29,28,56,53,52,43,25,22,19,38,6,55,36,33,45,31,32,47,54,23,17,40,27,62,48,13,7,51} // permutation 9
};

// Seed: 408920328

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
};

struct S1 {
   volatile struct S0  f0;
   uint32_t  f1;
};

struct S2 {
   struct S1  f0;
   int64_t  f1;
   uint64_t  f2;
};

struct S3 {
   volatile uint64_t  f0;
   int32_t  f1;
   int64_t  f2;
   uint16_t  f3;
   volatile uint32_t  f4;
};

struct S4 {
    int32_t g_5;
    volatile VECTOR(uint32_t, 2) g_8;
    int32_t *g_19;
    int32_t **g_18;
    int32_t g_28;
    int8_t g_38;
    volatile uint32_t g_61;
    VECTOR(int32_t, 8) g_94;
    int16_t g_114[10][9];
    volatile VECTOR(int32_t, 16) g_120;
    int32_t ** volatile g_137;
    int32_t * volatile g_147;
    struct S0 g_157[8];
    int16_t *g_162[10];
    int32_t ** volatile g_163;
    uint16_t g_434;
    volatile uint32_t g_450;
    volatile uint32_t * volatile g_449;
    uint32_t g_453;
    uint32_t g_461;
    VECTOR(uint16_t, 2) g_480;
    uint32_t g_482;
    int32_t * volatile g_487;
    int32_t * volatile g_488[6];
    struct S1 g_505;
    struct S1 g_506;
    struct S1 * volatile g_508;
    struct S1 * volatile g_509[8];
    volatile struct S2 g_544;
    VECTOR(int8_t, 8) g_551;
    int8_t g_564;
    uint64_t g_567;
    int32_t * volatile g_571;
    VECTOR(uint16_t, 16) g_598;
    struct S2 g_602;
    int32_t *g_606;
    struct S2 **g_628[5];
    struct S2 *** volatile g_627;
    struct S2 g_659[8][1];
    struct S0 * volatile g_661;
    VECTOR(int8_t, 2) g_690;
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
int64_t  func_1(struct S4 * p_696);
int32_t * func_11(int32_t * p_12, uint64_t  p_13, int32_t ** p_14, uint16_t  p_15, uint32_t  p_16, struct S4 * p_696);
int32_t * func_20(int16_t  p_21, int64_t  p_22, struct S4 * p_696);
uint8_t  func_24(uint64_t  p_25, struct S4 * p_696);
int64_t  func_68(int32_t ** p_69, int8_t  p_70, uint32_t  p_71, int32_t ** p_72, struct S4 * p_696);
struct S1  func_78(uint32_t  p_79, struct S0  p_80, uint64_t  p_81, uint64_t  p_82, struct S4 * p_696);
uint32_t  func_83(struct S0  p_84, uint32_t  p_85, struct S4 * p_696);
int32_t * func_98(int32_t  p_99, uint32_t * p_100, int32_t * p_101, struct S4 * p_696);
uint32_t * func_103(int64_t  p_104, uint32_t * p_105, struct S4 * p_696);
uint32_t * func_108(int16_t  p_109, int32_t * p_110, int32_t * p_111, struct S4 * p_696);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_696->g_5 p_696->g_8 p_696->g_18 p_696->g_61 p_696->l_comm_values p_696->g_606 p_696->g_94 p_696->g_602.f0.f1 p_696->g_28 p_696->g_19 p_696->g_627 p_696->g_482 p_696->g_114 p_696->g_453 p_696->g_480 p_696->g_602.f0.f0.f0 p_696->g_661 p_696->g_163 p_696->g_602.f1 p_696->g_551 p_696->g_690 p_696->g_598
 * writes: p_696->g_5 p_696->g_8 p_696->g_61 p_696->g_28 p_696->g_38 p_696->g_628 p_696->g_19 p_696->g_564 p_696->g_567 p_696->g_505.f1 p_696->g_602.f2 p_696->g_453 p_696->g_157 p_696->g_18 p_696->g_114
 */
int64_t  func_1(struct S4 * p_696)
{ /* block id: 4 */
    int32_t **l_2 = (void*)0;
    int32_t *l_4 = &p_696->g_5;
    int32_t **l_3 = &l_4;
    (*l_3) = (void*)0;
    for (p_696->g_5 = 0; (p_696->g_5 != (-8)); p_696->g_5 = safe_sub_func_uint64_t_u_u(p_696->g_5, 1))
    { /* block id: 8 */
        uint16_t l_17 = 65528UL;
        --p_696->g_8.y;
        (*l_3) = func_11(&p_696->g_5, l_17, p_696->g_18, l_17, l_17, p_696);
    }
    return p_696->g_480.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_696->g_61 p_696->l_comm_values p_696->g_comm_values p_696->g_38 p_696->g_19 p_696->g_5 p_696->g_606 p_696->g_94 p_696->g_602.f0.f1 p_696->g_28 p_696->g_627 p_696->g_18 p_696->g_564 p_696->g_482 p_696->g_114 p_696->g_453 p_696->g_480 p_696->g_602.f0.f0.f0 p_696->g_661 p_696->g_163 p_696->g_602.f1 p_696->g_551 p_696->g_690 p_696->g_598
 * writes: p_696->g_61 p_696->g_28 p_696->g_38 p_696->g_628 p_696->g_19 p_696->g_564 p_696->g_567 p_696->g_505.f1 p_696->g_602.f2 p_696->g_453 p_696->g_157 p_696->g_18 p_696->g_114
 */
int32_t * func_11(int32_t * p_12, uint64_t  p_13, int32_t ** p_14, uint16_t  p_15, uint32_t  p_16, struct S4 * p_696)
{ /* block id: 10 */
    uint8_t l_23 = 255UL;
    struct S0 l_660[8][6] = {{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}}};
    int32_t *l_695 = &p_696->g_5;
    int i, j;
    (*p_696->g_18) = func_20(l_23, l_23, p_696);
    for (p_696->g_564 = 0; (p_696->g_564 < (-6)); p_696->g_564 = safe_sub_func_uint8_t_u_u(p_696->g_564, 9))
    { /* block id: 297 */
        VECTOR(int64_t, 8) l_637 = (VECTOR(int64_t, 8))(0x2F4DBDB272B98B58L, (VECTOR(int64_t, 4))(0x2F4DBDB272B98B58L, (VECTOR(int64_t, 2))(0x2F4DBDB272B98B58L, 0x505B5A2383B84229L), 0x505B5A2383B84229L), 0x505B5A2383B84229L, 0x2F4DBDB272B98B58L, 0x505B5A2383B84229L);
        VECTOR(int64_t, 2) l_644 = (VECTOR(int64_t, 2))((-9L), 0x1B74B958BB45D303L);
        VECTOR(uint16_t, 8) l_652 = (VECTOR(uint16_t, 8))(0x3C10L, (VECTOR(uint16_t, 4))(0x3C10L, (VECTOR(uint16_t, 2))(0x3C10L, 0x4536L), 0x4536L), 0x4536L, 0x3C10L, 0x4536L);
        VECTOR(int8_t, 8) l_673 = (VECTOR(int8_t, 8))(6L, (VECTOR(int8_t, 4))(6L, (VECTOR(int8_t, 2))(6L, 1L), 1L), 1L, 6L, 1L);
        int32_t l_689 = 0x5AE47561L;
        VECTOR(int8_t, 8) l_693 = (VECTOR(int8_t, 8))(0x7FL, (VECTOR(int8_t, 4))(0x7FL, (VECTOR(int8_t, 2))(0x7FL, (-1L)), (-1L)), (-1L), 0x7FL, (-1L));
        int i;
        for (p_696->g_567 = 7; (p_696->g_567 == 7); ++p_696->g_567)
        { /* block id: 300 */
            int64_t l_654 = 0x3116CA6AFC0D3F49L;
            int16_t *l_688 = &p_696->g_114[7][3];
            uint8_t l_694 = 0x42L;
            for (p_696->g_505.f1 = 0; (p_696->g_505.f1 < 15); ++p_696->g_505.f1)
            { /* block id: 303 */
                int64_t l_651 = 1L;
                (*p_14) = (void*)0;
                (*p_14) = (*p_14);
                if (((-10L) != (safe_div_func_uint64_t_u_u(1UL, ((VECTOR(int64_t, 4))(l_637.s6237)).y))))
                { /* block id: 306 */
                    uint32_t l_653 = 0x6B3BCEE7L;
                    uint64_t *l_655 = &p_696->g_602.f2;
                    uint32_t *l_656 = (void*)0;
                    uint32_t *l_657 = &p_696->g_453;
                    struct S2 *l_658 = &p_696->g_659[5][0];
                    (*p_696->g_661) = ((((*p_696->g_606) = (((safe_lshift_func_int16_t_s_u((((((safe_mul_func_uint8_t_u_u(((((((*l_657) |= (((*l_655) = ((safe_sub_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), p_696->g_482)) ^ ((((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(l_644.xyyyyxxy)).odd)).y , (p_16 == p_13)) , (safe_add_func_int16_t_s_s((0x5445FD07L >= 0x12419952L), ((p_15 >= (safe_lshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(0x1ADC124BL, l_651, 0x0A6EE7FDL, 0x5CAF45D7L, ((l_23 && ((VECTOR(uint16_t, 2))(l_652.s73)).lo) , (0x0931031BL <= 0x03D3739DL)), 1L, 0x57FBB082L, 0x3B03E408L, (*p_12), ((VECTOR(int32_t, 4))(0x031988D2L)), l_653, 0x3A602EADL, 0x0679DBFFL)).sc0)).yxyyyxxyyyxxxyyy)).sd, l_651)), l_654))) == p_696->g_114[7][3])))) & l_637.s7) == l_653))) , l_651)) || (-4L)) ^ FAKE_DIVERGE(p_696->local_0_offset, get_local_id(0), 10)) , (void*)0) != l_658), p_696->g_480.y)) > p_696->g_602.f0.f0.f0) | 0x17FB814086D2021BL) != p_16) == p_15), FAKE_DIVERGE(p_696->group_2_offset, get_group_id(2), 10))) && p_13) > p_15)) <= (-1L)) , l_660[5][3]);
                }
                else
                { /* block id: 311 */
                    int32_t **l_666 = &p_696->g_19;
                    int32_t ***l_667 = &p_696->g_18;
                    uint16_t *l_681 = &p_696->g_434;
                    uint16_t **l_680 = &l_681;
                    (*p_696->g_606) = (p_13 , ((safe_div_func_int32_t_s_s(0x7FF5D747L, (safe_add_func_uint8_t_u_u(((((*l_667) = l_666) == (void*)0) & l_660[5][3].f0), (safe_div_func_int64_t_s_s((safe_unary_minus_func_uint16_t_u(((l_651 == ((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 16))(l_673.s7601536121063451)).s9, 0x63L)) ^ ((safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u((((*l_680) = &p_15) == &p_696->g_434), 6)) , (*p_12)), p_696->g_480.y)), p_15)) & p_15))) , 65532UL))), p_15)))))) , l_654));
                    (*p_696->g_606) |= ((VECTOR(int32_t, 2))(7L, 0x1E4C1997L)).hi;
                }
            }
            (*p_696->g_18) = (*p_696->g_163);
            if (l_637.s2)
                continue;
            (*p_696->g_606) = (safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((*l_688) = ((GROUP_DIVERGE(2, 1) || 0L) , l_654)), (+((((((p_696->g_602.f1 != (p_696->g_606 == p_12)) , (l_660[5][3].f0 && (l_689 &= p_696->g_551.s5))) || ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(p_696->g_690.xyxx)))).wywzyyzy)).s61)).yyxy)).yyxxxzzx)).lo)), ((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 16))(0x63L, 8L, 0x4CL, 0x79L, 0x5CL, 3L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))((+(safe_lshift_func_int8_t_s_u((-8L), 6))), 0x70L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_693.s4357)).even)), 1L, 0x12L)), 0x6CL, 0L)).s0472752422102411)).s74)), 4L, 4L)), 0x67L, ((VECTOR(int8_t, 4))(1L)), (-1L))).s0a, ((VECTOR(int8_t, 2))(0x78L)), ((VECTOR(int8_t, 2))(0x65L))))).yxxxyxxy, ((VECTOR(int8_t, 8))(0x48L))))).even))).y, ((VECTOR(int8_t, 2))((-3L))), 0x6AL)).z) , l_694) , p_696->g_551.s1) , p_696->g_598.s6)))), l_694));
        }
    }
    return l_695;
}


/* ------------------------------------------ */
/* 
 * reads : p_696->g_61 p_696->l_comm_values p_696->g_comm_values p_696->g_38 p_696->g_19 p_696->g_5 p_696->g_606 p_696->g_94 p_696->g_602.f0.f1 p_696->g_28 p_696->g_627 p_696->g_18
 * writes: p_696->g_61 p_696->g_28 p_696->g_38 p_696->g_628
 */
int32_t * func_20(int16_t  p_21, int64_t  p_22, struct S4 * p_696)
{ /* block id: 11 */
    int32_t l_26 = 0L;
    int32_t l_64 = (-7L);
    VECTOR(int64_t, 8) l_67 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-3L)), (-3L)), (-3L), (-1L), (-3L));
    int32_t *l_73 = &p_696->g_28;
    VECTOR(uint32_t, 2) l_516 = (VECTOR(uint32_t, 2))(4294967293UL, 0x8BF3E684L);
    uint16_t l_565 = 0x3F9DL;
    int32_t l_623 = 0L;
    struct S2 *l_626 = &p_696->g_602;
    struct S2 **l_625 = &l_626;
    int i;
    if (((*l_73) = (((l_64 &= func_24(l_26, p_696)) & l_26) <= ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))((safe_mul_func_int16_t_s_s(0x291AL, 1L)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(0x242039CE85662B13L, 7L, 0x5863E3202F603F55L, 0L)))), 0x4674F9898791B167L, 0x1BA600AC80EABF55L, 0x62B4191165901810L, 8L, 0x6E1E3C1DC0AC77ACL, 1L, 0x28F302D78BEA8E43L, (-1L), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(mad_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x67A065BBD97C2923L, 0x40E5C5CC99CF48B0L)).yxyy)).xzzzxwyzxwzyzwxw)).even, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(l_67.s33055014)).s2120657417204760)).lo, ((VECTOR(int64_t, 8))((1L & ((p_696->g_comm_values[p_696->tid] | ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(0x715F1D345D190450L, (-8L), func_68(&p_696->g_19, p_696->g_38, p_21, &p_696->g_19, p_696), ((VECTOR(int64_t, 4))(5L)), 1L)).s22)).xyxyxxyyxxxxxxyy)).s9) >= (*p_696->g_19))), 0L, ((VECTOR(int64_t, 2))(3L)), (-4L), ((VECTOR(int64_t, 2))((-6L))), 4L))))).s77)), (-1L))).sae)).odd)))
    { /* block id: 19 */
        int8_t l_95 = 6L;
        for (p_696->g_38 = 0; (p_696->g_38 <= (-7)); p_696->g_38 = safe_sub_func_uint64_t_u_u(p_696->g_38, 8))
        { /* block id: 22 */
            VECTOR(uint8_t, 8) l_93 = (VECTOR(uint8_t, 8))(0x7EL, (VECTOR(uint8_t, 4))(0x7EL, (VECTOR(uint8_t, 2))(0x7EL, 254UL), 254UL), 254UL, 0x7EL, 254UL);
            int16_t *l_515 = &p_696->g_114[2][8];
            int i;
            for (l_26 = 0; (l_26 > (-18)); l_26--)
            { /* block id: 25 */
                struct S0 l_86 = {0xA07F58E9L};
                uint32_t *l_96[4][8][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
                int32_t l_97 = 0x73046699L;
                struct S1 *l_507 = (void*)0;
                struct S1 *l_510 = &p_696->g_506;
                VECTOR(uint64_t, 2) l_523 = (VECTOR(uint64_t, 2))(1UL, 18446744073709551615UL);
                uint16_t *l_528 = (void*)0;
                uint16_t *l_529 = &p_696->g_434;
                VECTOR(uint8_t, 4) l_563 = (VECTOR(uint8_t, 4))(0x2DL, (VECTOR(uint8_t, 2))(0x2DL, 3UL), 3UL);
                uint64_t *l_566 = &p_696->g_567;
                int i, j, k;
                (1 + 1);
            }
        }
        for (l_565 = 9; (l_565 <= 40); l_565++)
        { /* block id: 279 */
            return p_696->g_606;
        }
    }
    else
    { /* block id: 282 */
        int8_t l_611 = 0L;
        uint32_t l_622 = 0x9C6A41F8L;
        for (p_22 = 0; (p_22 >= 25); p_22 = safe_add_func_uint16_t_u_u(p_22, 7))
        { /* block id: 285 */
            int32_t *l_612 = &l_26;
            uint64_t *l_621[5][4] = {{&p_696->g_567,&p_696->g_602.f2,&p_696->g_567,&p_696->g_567},{&p_696->g_567,&p_696->g_602.f2,&p_696->g_567,&p_696->g_567},{&p_696->g_567,&p_696->g_602.f2,&p_696->g_567,&p_696->g_567},{&p_696->g_567,&p_696->g_602.f2,&p_696->g_567,&p_696->g_567},{&p_696->g_567,&p_696->g_602.f2,&p_696->g_567,&p_696->g_567}};
            int32_t *l_624 = &l_64;
            int i, j;
            (*l_624) &= ((((safe_sub_func_int32_t_s_s((l_611 , ((((*l_612) ^= 0x20CE8DD2L) , (safe_sub_func_int32_t_s_s(((*l_73) = ((void*)0 != &p_696->g_567)), (safe_mod_func_uint16_t_u_u((p_21 && (safe_rshift_func_uint16_t_u_u(0x1780L, GROUP_DIVERGE(2, 1)))), (((safe_mod_func_int8_t_s_s(((void*)0 == l_621[2][2]), l_622)) >= p_696->g_94.s3) & 0x1671531BL)))))) <= (-1L))), p_21)) && l_623) > 1L) && p_696->g_602.f0.f1);
        }
    }
    l_73 = func_103((*l_73), l_73, p_696);
    (*p_696->g_627) = l_625;
    return (*p_696->g_18);
}


/* ------------------------------------------ */
/* 
 * reads : p_696->g_61 p_696->l_comm_values
 * writes: p_696->g_61
 */
uint8_t  func_24(uint64_t  p_25, struct S4 * p_696)
{ /* block id: 12 */
    int32_t *l_27 = &p_696->g_28;
    int32_t *l_29 = &p_696->g_28;
    int32_t l_30 = 0x55228033L;
    int32_t *l_31 = &l_30;
    int32_t *l_32 = &p_696->g_28;
    int32_t *l_33 = &l_30;
    int32_t *l_34 = &l_30;
    int32_t *l_35 = &p_696->g_28;
    int32_t *l_36 = &p_696->g_28;
    int32_t *l_37 = &p_696->g_28;
    int32_t *l_39 = &l_30;
    int32_t *l_40 = &l_30;
    int32_t *l_41 = &p_696->g_28;
    int32_t *l_42 = &l_30;
    int32_t *l_43 = &p_696->g_28;
    int32_t *l_44 = &p_696->g_28;
    int32_t *l_45 = &p_696->g_28;
    int32_t l_46[8][4][3];
    int32_t *l_47 = (void*)0;
    int32_t *l_48 = &l_30;
    int32_t *l_49 = &l_30;
    int32_t *l_50 = &p_696->g_28;
    int32_t *l_51 = &p_696->g_28;
    int32_t *l_52 = (void*)0;
    int32_t *l_53 = &l_30;
    int32_t *l_54 = &p_696->g_28;
    int32_t *l_55 = &l_46[1][3][2];
    int32_t *l_56 = &l_46[2][1][1];
    int32_t *l_57 = &p_696->g_28;
    int32_t *l_58 = (void*)0;
    int32_t *l_59 = &l_46[1][3][0];
    int32_t *l_60[1];
    int i, j, k;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
                l_46[i][j][k] = (-9L);
        }
    }
    for (i = 0; i < 1; i++)
        l_60[i] = &l_30;
    p_696->g_61++;
    return p_696->l_comm_values[(safe_mod_func_uint32_t_u_u(p_696->tid, 63))];
}


/* ------------------------------------------ */
/* 
 * reads : p_696->g_comm_values
 * writes:
 */
int64_t  func_68(int32_t ** p_69, int8_t  p_70, uint32_t  p_71, int32_t ** p_72, struct S4 * p_696)
{ /* block id: 16 */
    return p_696->g_comm_values[p_696->tid];
}


/* ------------------------------------------ */
/* 
 * reads : p_696->g_114 p_696->g_19 p_696->g_120 p_696->g_147 p_696->g_28 p_696->g_157 p_696->g_163 p_696->g_434 p_696->g_94 p_696->g_449 p_696->g_5 p_696->g_8 p_696->g_480 p_696->g_482 p_696->g_comm_values p_696->g_450 p_696->g_453 p_696->g_505 p_696->g_506
 * writes: p_696->g_18 p_696->g_114 p_696->g_19 p_696->g_28 p_696->g_162 p_696->g_434 p_696->g_453 p_696->g_461 p_696->g_482 p_696->g_505
 */
struct S1  func_78(uint32_t  p_79, struct S0  p_80, uint64_t  p_81, uint64_t  p_82, struct S4 * p_696)
{ /* block id: 29 */
    uint64_t l_102 = 18446744073709551615UL;
    int32_t ***l_106 = &p_696->g_18;
    int32_t **l_107 = &p_696->g_19;
    VECTOR(int16_t, 8) l_112 = (VECTOR(int16_t, 8))(0x6C79L, (VECTOR(int16_t, 4))(0x6C79L, (VECTOR(int16_t, 2))(0x6C79L, (-1L)), (-1L)), (-1L), 0x6C79L, (-1L));
    int16_t *l_113 = &p_696->g_114[7][3];
    int16_t *l_115 = (void*)0;
    int16_t *l_116 = (void*)0;
    int16_t *l_117 = (void*)0;
    int16_t *l_118[5][4][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
    int32_t l_119 = 0x25121EC5L;
    VECTOR(int32_t, 8) l_498 = (VECTOR(int32_t, 8))(0x3EEA884BL, (VECTOR(int32_t, 4))(0x3EEA884BL, (VECTOR(int32_t, 2))(0x3EEA884BL, 0x51120028L), 0x51120028L), 0x51120028L, 0x3EEA884BL, 0x51120028L);
    VECTOR(int32_t, 8) l_499 = (VECTOR(int32_t, 8))(0x4CE7C7ACL, (VECTOR(int32_t, 4))(0x4CE7C7ACL, (VECTOR(int32_t, 2))(0x4CE7C7ACL, 0x4A10D532L), 0x4A10D532L), 0x4A10D532L, 0x4CE7C7ACL, 0x4A10D532L);
    int32_t *l_500 = (void*)0;
    int32_t *l_501 = (void*)0;
    int32_t *l_502 = &l_119;
    int i, j, k;
    (*l_107) = func_98(l_102, func_103((((*l_106) = (void*)0) == l_107), func_108((l_119 = ((*l_113) &= ((VECTOR(int16_t, 8))(l_112.s56265547)).s5)), (*l_107), (*l_107), p_696), p_696), &p_696->g_5, p_696);
    (*l_502) |= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(l_498.s74632736)).s3032443044651323, ((VECTOR(int32_t, 2))(l_499.s32)).xxyyxyxxyxxyyyxx))).lo)).s5;
    for (p_696->g_453 = 0; (p_696->g_453 >= 33); ++p_696->g_453)
    { /* block id: 242 */
        p_696->g_505 = p_696->g_505;
        if (p_80.f0)
            continue;
    }
    (*l_107) = (*l_107);
    return p_696->g_506;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint32_t  func_83(struct S0  p_84, uint32_t  p_85, struct S4 * p_696)
{ /* block id: 26 */
    return p_85;
}


/* ------------------------------------------ */
/* 
 * reads : p_696->g_434 p_696->g_114 p_696->g_94 p_696->g_449 p_696->g_19 p_696->g_28 p_696->g_5 p_696->g_8 p_696->g_480 p_696->g_482 p_696->g_comm_values p_696->g_163 p_696->g_147 p_696->g_450
 * writes: p_696->g_434 p_696->g_453 p_696->g_461 p_696->g_482 p_696->g_28
 */
int32_t * func_98(int32_t  p_99, uint32_t * p_100, int32_t * p_101, struct S4 * p_696)
{ /* block id: 223 */
    int8_t l_437 = 0L;
    int32_t l_448 = 1L;
    uint32_t *l_451[7];
    uint32_t *l_452 = &p_696->g_453;
    struct S0 l_454 = {0x178339FFL};
    VECTOR(int64_t, 8) l_459 = (VECTOR(int64_t, 8))(5L, (VECTOR(int64_t, 4))(5L, (VECTOR(int64_t, 2))(5L, 0x07ED3039F23441F0L), 0x07ED3039F23441F0L), 0x07ED3039F23441F0L, 5L, 0x07ED3039F23441F0L);
    uint32_t *l_460 = &p_696->g_461;
    VECTOR(uint64_t, 4) l_473 = (VECTOR(uint64_t, 4))(0x463D6DD0E25A1610L, (VECTOR(uint64_t, 2))(0x463D6DD0E25A1610L, 1UL), 1UL);
    uint32_t *l_481 = &p_696->g_482;
    int32_t *l_489 = (void*)0;
    int32_t *l_490 = &p_696->g_28;
    VECTOR(int32_t, 16) l_493 = (VECTOR(int32_t, 16))(0x7FAB4964L, (VECTOR(int32_t, 4))(0x7FAB4964L, (VECTOR(int32_t, 2))(0x7FAB4964L, 0L), 0L), 0L, 0x7FAB4964L, 0L, (VECTOR(int32_t, 2))(0x7FAB4964L, 0L), (VECTOR(int32_t, 2))(0x7FAB4964L, 0L), 0x7FAB4964L, 0L, 0x7FAB4964L, 0L);
    int16_t **l_494 = &p_696->g_162[3];
    int32_t *l_495 = &l_448;
    int i, j;
    for (i = 0; i < 7; i++)
        l_451[i] = &p_696->g_157[6].f0;
    l_454 = ((safe_add_func_int32_t_s_s((safe_div_func_uint64_t_u_u((safe_mod_func_int8_t_s_s((p_696->g_434 &= 0x56L), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x72L, 0x0DL)).yyxxyyyx)).s5)), p_696->g_114[6][8])), ((*l_452) = ((safe_mul_func_uint16_t_u_u((p_99 , ((((l_437 <= (safe_lshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u((l_437 == (safe_sub_func_uint64_t_u_u(p_99, (safe_lshift_func_uint8_t_u_u(((l_448 = p_696->g_94.s5) && (l_448 , ((p_696->g_449 != l_451[6]) , p_99))), 6))))), l_437)) && p_696->g_114[7][3]), 0x299A8C33L)), l_437))) || 0x1B6BBFA046A8C86FL) <= (*p_696->g_19)) | p_99)), 0x1EBEL)) | 7L)))) , l_454);
    (*l_490) = (safe_mul_func_int16_t_s_s((safe_div_func_uint32_t_u_u(((*l_460) = ((*l_452) = (p_696->g_8.y || ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_459.s30)).yxxyxyxy)).s0))), (safe_div_func_uint8_t_u_u((l_454 , ((safe_add_func_uint64_t_u_u(((safe_mod_func_int8_t_s_s((0UL <= 7UL), (safe_unary_minus_func_int64_t_s((((VECTOR(int32_t, 2))(0x19138673L, (-1L))).even , ((VECTOR(int64_t, 16))(upsample(((VECTOR(int32_t, 16))((safe_rshift_func_int8_t_s_u(p_99, (safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_473.xywzxzwx)).s4657143775463735)).s5, (p_99 && ((safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((0x66L | ((safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 16))(p_696->g_480.xyyyyxxxyxyxyyxx)).hi, ((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),uint16_t,((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(0x54C7L, (((((*l_481)--) ^ p_99) , ((safe_div_func_int8_t_s_s(p_696->g_5, l_448)) , (void*)0)) != p_100), 0xA64EL, 0UL)), ((VECTOR(uint16_t, 2))(65527UL)), 0xF399L, 0xC514L)).s45)), (uint16_t)p_696->g_comm_values[p_696->tid], (uint16_t)65535UL))))), 0xC531L, 0xD303L))))).xxyzzyzx))))).hi, ((VECTOR(uint16_t, 4))(65535UL))))).zzywxyyywyxxyzyw)).s7, p_99)) && 0x25L)), l_459.s7)), l_473.y)) <= l_448)))))), p_99, 8L, 0L, 3L, 0x030C408FL, p_696->g_comm_values[p_696->tid], l_459.s7, 0x20EE3C25L, 0x4BA70878L, ((VECTOR(int32_t, 2))(0x5D5E1CD9L)), ((VECTOR(int32_t, 4))(0x4D154AE7L)))), ((VECTOR(uint32_t, 16))(0UL))))).s2))))) <= 1UL), l_459.s6)) , l_459.s2)), p_696->g_94.s3)))), p_696->g_480.x));
    (*l_495) &= ((*p_696->g_147) = ((*l_490) || ((((safe_div_func_uint32_t_u_u((((void*)0 == (*p_696->g_163)) != (((VECTOR(int32_t, 8))(l_493.sddcb0dfd)).s7 , (*l_490))), FAKE_DIVERGE(p_696->local_1_offset, get_local_id(1), 10))) , l_494) != (void*)0) < 0xC20AL)));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_696->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 63)), permutations[(safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((*p_696->g_449) , p_99), ((&l_448 != &p_696->g_28) > FAKE_DIVERGE(p_696->local_0_offset, get_local_id(0), 10)))), 10))][(safe_mod_func_uint32_t_u_u(p_696->tid, 63))]));
    return (*p_696->g_163);
}


/* ------------------------------------------ */
/* 
 * reads : p_696->g_19
 * writes:
 */
uint32_t * func_103(int64_t  p_104, uint32_t * p_105, struct S4 * p_696)
{ /* block id: 69 */
    uint8_t l_425 = 0xBDL;
    if ((atomic_inc(&p_696->g_atomic_input[19 * get_linear_group_id() + 9]) == 3))
    { /* block id: 71 */
        VECTOR(int32_t, 2) l_171 = (VECTOR(int32_t, 2))(1L, 0x2A5F0051L);
        uint8_t l_172 = 0x1DL;
        uint32_t l_173 = 0x101A31BCL;
        int i;
        l_172 = ((VECTOR(int32_t, 16))(l_171.yyxxyyxxyxyxxyyx)).s3;
        --l_173;
        for (l_171.y = 0; (l_171.y != 1); l_171.y = safe_add_func_uint8_t_u_u(l_171.y, 6))
        { /* block id: 76 */
            int32_t l_178[10][10] = {{0x5B12CC52L,1L,0x6D35079EL,0x6D35079EL,1L,0x5B12CC52L,1L,0x05BBCD16L,0L,(-8L)},{0x5B12CC52L,1L,0x6D35079EL,0x6D35079EL,1L,0x5B12CC52L,1L,0x05BBCD16L,0L,(-8L)},{0x5B12CC52L,1L,0x6D35079EL,0x6D35079EL,1L,0x5B12CC52L,1L,0x05BBCD16L,0L,(-8L)},{0x5B12CC52L,1L,0x6D35079EL,0x6D35079EL,1L,0x5B12CC52L,1L,0x05BBCD16L,0L,(-8L)},{0x5B12CC52L,1L,0x6D35079EL,0x6D35079EL,1L,0x5B12CC52L,1L,0x05BBCD16L,0L,(-8L)},{0x5B12CC52L,1L,0x6D35079EL,0x6D35079EL,1L,0x5B12CC52L,1L,0x05BBCD16L,0L,(-8L)},{0x5B12CC52L,1L,0x6D35079EL,0x6D35079EL,1L,0x5B12CC52L,1L,0x05BBCD16L,0L,(-8L)},{0x5B12CC52L,1L,0x6D35079EL,0x6D35079EL,1L,0x5B12CC52L,1L,0x05BBCD16L,0L,(-8L)},{0x5B12CC52L,1L,0x6D35079EL,0x6D35079EL,1L,0x5B12CC52L,1L,0x05BBCD16L,0L,(-8L)},{0x5B12CC52L,1L,0x6D35079EL,0x6D35079EL,1L,0x5B12CC52L,1L,0x05BBCD16L,0L,(-8L)}};
            uint32_t l_285 = 1UL;
            VECTOR(int16_t, 2) l_288 = (VECTOR(int16_t, 2))(0L, 0x337EL);
            VECTOR(uint16_t, 4) l_289 = (VECTOR(uint16_t, 4))(0x71D7L, (VECTOR(uint16_t, 2))(0x71D7L, 65530UL), 65530UL);
            VECTOR(uint16_t, 2) l_290 = (VECTOR(uint16_t, 2))(65535UL, 0xC8B3L);
            int8_t l_291 = 0x28L;
            VECTOR(uint16_t, 16) l_292 = (VECTOR(uint16_t, 16))(0x311AL, (VECTOR(uint16_t, 4))(0x311AL, (VECTOR(uint16_t, 2))(0x311AL, 65535UL), 65535UL), 65535UL, 0x311AL, 65535UL, (VECTOR(uint16_t, 2))(0x311AL, 65535UL), (VECTOR(uint16_t, 2))(0x311AL, 65535UL), 0x311AL, 65535UL, 0x311AL, 65535UL);
            uint64_t l_293 = 0x4648E5995FA5FF65L;
            int64_t l_294 = 0x60FD7342C7747FD3L;
            uint32_t l_295 = 1UL;
            uint16_t l_296 = 0x8814L;
            int8_t l_297 = 0x1EL;
            int64_t l_298 = 0x6093A6662EE07E1FL;
            VECTOR(uint16_t, 8) l_299 = (VECTOR(uint16_t, 8))(0xC38BL, (VECTOR(uint16_t, 4))(0xC38BL, (VECTOR(uint16_t, 2))(0xC38BL, 0x6A34L), 0x6A34L), 0x6A34L, 0xC38BL, 0x6A34L);
            VECTOR(int32_t, 2) l_300 = (VECTOR(int32_t, 2))(0x7B892A87L, 3L);
            int32_t l_301 = 0x2AA31F85L;
            VECTOR(int32_t, 16) l_302 = (VECTOR(int32_t, 16))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x6B184F4DL), 0x6B184F4DL), 0x6B184F4DL, (-10L), 0x6B184F4DL, (VECTOR(int32_t, 2))((-10L), 0x6B184F4DL), (VECTOR(int32_t, 2))((-10L), 0x6B184F4DL), (-10L), 0x6B184F4DL, (-10L), 0x6B184F4DL);
            int8_t l_303 = (-6L);
            int8_t l_304 = (-1L);
            uint32_t l_305 = 4294967295UL;
            int32_t l_306 = (-8L);
            uint32_t l_307 = 0UL;
            int i, j;
            for (l_178[7][9] = 13; (l_178[7][9] > 8); l_178[7][9] = safe_sub_func_uint32_t_u_u(l_178[7][9], 3))
            { /* block id: 79 */
                int32_t l_181 = 0x1903A016L;
                uint64_t l_193 = 0xC4F0A17803233C0CL;
                for (l_181 = 0; (l_181 < 5); l_181++)
                { /* block id: 82 */
                    int32_t l_185 = 0x5487940BL;
                    int32_t *l_184 = &l_185;
                    uint64_t l_186 = 0x436A30DA47F40BF2L;
                    int8_t l_187 = 0x3BL;
                    l_184 = (void*)0;
                    l_187 = l_186;
                    for (l_187 = 0; (l_187 > (-1)); l_187 = safe_sub_func_int32_t_s_s(l_187, 4))
                    { /* block id: 87 */
                        VECTOR(int32_t, 2) l_191 = (VECTOR(int32_t, 2))(8L, (-4L));
                        int32_t *l_190[3];
                        uint64_t l_192 = 2UL;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_190[i] = (void*)0;
                        l_184 = l_190[1];
                        l_192 &= (l_185 &= 4L);
                    }
                }
                if (l_193)
                { /* block id: 93 */
                    int8_t l_194 = 0x0DL;
                    int32_t l_195 = 0x0D2CAD3DL;
                    int32_t l_196 = 0L;
                    uint32_t l_197 = 0xA5150234L;
                    VECTOR(int16_t, 8) l_200 = (VECTOR(int16_t, 8))(2L, (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, 0x7CD0L), 0x7CD0L), 0x7CD0L, 2L, 0x7CD0L);
                    VECTOR(int16_t, 4) l_201 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-1L)), (-1L));
                    VECTOR(int16_t, 16) l_202 = (VECTOR(int16_t, 16))(0x2729L, (VECTOR(int16_t, 4))(0x2729L, (VECTOR(int16_t, 2))(0x2729L, 0x710CL), 0x710CL), 0x710CL, 0x2729L, 0x710CL, (VECTOR(int16_t, 2))(0x2729L, 0x710CL), (VECTOR(int16_t, 2))(0x2729L, 0x710CL), 0x2729L, 0x710CL, 0x2729L, 0x710CL);
                    VECTOR(int16_t, 8) l_203 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
                    VECTOR(int16_t, 16) l_204 = (VECTOR(int16_t, 16))(0x74F4L, (VECTOR(int16_t, 4))(0x74F4L, (VECTOR(int16_t, 2))(0x74F4L, (-1L)), (-1L)), (-1L), 0x74F4L, (-1L), (VECTOR(int16_t, 2))(0x74F4L, (-1L)), (VECTOR(int16_t, 2))(0x74F4L, (-1L)), 0x74F4L, (-1L), 0x74F4L, (-1L));
                    VECTOR(int16_t, 4) l_205 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L));
                    VECTOR(int16_t, 2) l_206 = (VECTOR(int16_t, 2))(0x65D5L, 8L);
                    int32_t l_207 = 0x0E685772L;
                    int32_t l_208 = 0x6E2E2142L;
                    uint64_t l_209[5] = {1UL,1UL,1UL,1UL,1UL};
                    int32_t l_212[3][5];
                    VECTOR(uint32_t, 8) l_213 = (VECTOR(uint32_t, 8))(0x9F556B58L, (VECTOR(uint32_t, 4))(0x9F556B58L, (VECTOR(uint32_t, 2))(0x9F556B58L, 4294967292UL), 4294967292UL), 4294967292UL, 0x9F556B58L, 4294967292UL);
                    VECTOR(uint32_t, 4) l_214 = (VECTOR(uint32_t, 4))(0x5D7D14D1L, (VECTOR(uint32_t, 2))(0x5D7D14D1L, 0x41753368L), 0x41753368L);
                    VECTOR(uint32_t, 8) l_215 = (VECTOR(uint32_t, 8))(0xD9579318L, (VECTOR(uint32_t, 4))(0xD9579318L, (VECTOR(uint32_t, 2))(0xD9579318L, 0x5284081EL), 0x5284081EL), 0x5284081EL, 0xD9579318L, 0x5284081EL);
                    VECTOR(uint32_t, 4) l_216 = (VECTOR(uint32_t, 4))(4UL, (VECTOR(uint32_t, 2))(4UL, 7UL), 7UL);
                    VECTOR(uint32_t, 4) l_217 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x44EA9E6CL), 0x44EA9E6CL);
                    VECTOR(uint32_t, 4) l_218 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 5UL), 5UL);
                    VECTOR(uint32_t, 4) l_219 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 9UL), 9UL);
                    VECTOR(uint32_t, 16) l_220 = (VECTOR(uint32_t, 16))(5UL, (VECTOR(uint32_t, 4))(5UL, (VECTOR(uint32_t, 2))(5UL, 0x05BE5475L), 0x05BE5475L), 0x05BE5475L, 5UL, 0x05BE5475L, (VECTOR(uint32_t, 2))(5UL, 0x05BE5475L), (VECTOR(uint32_t, 2))(5UL, 0x05BE5475L), 5UL, 0x05BE5475L, 5UL, 0x05BE5475L);
                    VECTOR(uint32_t, 2) l_221 = (VECTOR(uint32_t, 2))(4294967288UL, 0xB42ADA26L);
                    VECTOR(uint32_t, 16) l_222 = (VECTOR(uint32_t, 16))(8UL, (VECTOR(uint32_t, 4))(8UL, (VECTOR(uint32_t, 2))(8UL, 4294967295UL), 4294967295UL), 4294967295UL, 8UL, 4294967295UL, (VECTOR(uint32_t, 2))(8UL, 4294967295UL), (VECTOR(uint32_t, 2))(8UL, 4294967295UL), 8UL, 4294967295UL, 8UL, 4294967295UL);
                    VECTOR(uint32_t, 2) l_223 = (VECTOR(uint32_t, 2))(9UL, 0UL);
                    uint64_t l_224 = 0UL;
                    VECTOR(uint32_t, 4) l_225 = (VECTOR(uint32_t, 4))(0x9E674F9FL, (VECTOR(uint32_t, 2))(0x9E674F9FL, 0xA6DF7B5CL), 0xA6DF7B5CL);
                    uint32_t l_226 = 4294967286UL;
                    VECTOR(uint32_t, 8) l_227 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xF955F64EL), 0xF955F64EL), 0xF955F64EL, 4294967295UL, 0xF955F64EL);
                    uint64_t l_228 = 1UL;
                    int32_t l_229[2];
                    struct S1 l_230 = {{1UL},0x4D557F31L};/* VOLATILE GLOBAL l_230 */
                    struct S3 l_231 = {0x25EF7269C6AF2977L,0x73C657A0L,-10L,65535UL,0x9B31E70AL};/* VOLATILE GLOBAL l_231 */
                    uint32_t l_232 = 1UL;
                    VECTOR(uint32_t, 8) l_235 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x8558D5EFL), 0x8558D5EFL), 0x8558D5EFL, 4294967295UL, 0x8558D5EFL);
                    int16_t l_236 = 0x47DDL;
                    int8_t l_237 = 0x71L;
                    uint32_t l_238[3];
                    uint16_t l_239 = 65535UL;
                    uint64_t l_240 = 0x81BD6ACCC0493F10L;
                    uint32_t l_241 = 4294967292UL;
                    uint32_t l_242 = 0x011CA84DL;
                    int32_t l_254 = 2L;
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_212[i][j] = 1L;
                    }
                    for (i = 0; i < 2; i++)
                        l_229[i] = 0x45350917L;
                    for (i = 0; i < 3; i++)
                        l_238[i] = 0xFF0B4441L;
                    l_197--;
                    l_196 |= ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x39C5L, 0x3C2CL)).xyxy)).lo, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_200.s56)).yxxyxyyxxxxyxxxx)).sae))).yxyx, ((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 2))(l_201.xw)).xxxyyyyyyyyyyyyx, ((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 16))(l_202.s4547a68e1f302e52)).lo, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_203.s5434052515624247)).s4d)).yxyxxxxy, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_204.sbee515c3))))))).s4261771470701664))).odd)), ((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_205.wz)), ((VECTOR(int16_t, 4))((l_208 = (l_207 = (l_202.s4 &= ((VECTOR(int16_t, 2))(l_206.xx)).even))), (l_212[0][4] = ((++l_209[2]) , (-1L))), 0x6DD7L, 0x62DCL)).w, 0x42EBL, ((VECTOR(int16_t, 2))(0x3E9AL, 1L)), 0x7945L, (-4L))).s52, ((VECTOR(int16_t, 2))(0x5B58L, 0x55BFL))))).yyxy, (int16_t)(l_242 = (((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(uint32_t, 16))(max(((VECTOR(uint32_t, 8))(add_sat(((VECTOR(uint32_t, 16))(l_213.s6240540457043637)).odd, ((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 8))(l_214.ywzyxwxz)).s5767475412431306, ((VECTOR(uint32_t, 16))(rhadd(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_215.s5561611121337233)).sb1)), GROUP_DIVERGE(0, 1), 4294967295UL, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_216.xzwz)).yyyxzywy)).s4716455111521674)).sb, 0UL, 0xF44A9B1BL, 0x7EA3EBE0L)).s0210275535615354, ((VECTOR(uint32_t, 4))(l_217.zwxx)).ywwzyyzyyyyxxzxx))), ((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),uint32_t,((VECTOR(uint32_t, 2))(0UL, 0x1ED40994L)), (uint32_t)((VECTOR(uint32_t, 16))(0x9478B056L, ((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 16))(0x25321BD9L, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0x27C78632L, 0x6A534EDEL)), 1UL, 4294967294UL)))), 5UL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 8))(l_218.ywxxxyyz)).lo, ((VECTOR(uint32_t, 8))(l_219.xwwyxxxy)).lo, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0UL, 8UL)), ((VECTOR(uint32_t, 4))(l_220.s52e8)), 1UL, 0xBC57D954L)).even))).x, ((VECTOR(uint32_t, 4))(l_221.yxyx)).z, FAKE_DIVERGE(p_696->local_0_offset, get_local_id(0), 10), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_222.saa)), 4UL, 0UL)), ((VECTOR(uint32_t, 8))(l_223.xyxyxyyy)), 0xDB29B32BL)).sa95d)), l_224, ((VECTOR(uint32_t, 2))(abs(((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(l_225.yzyxwwzyxwxxxzww)).sb600)).xwxzxxxywwwzzyyy)))).s4da4))).lo))), (l_226 , 0x1535540FL), ((VECTOR(uint32_t, 2))(l_227.s56)), 1UL)).lo, ((VECTOR(uint32_t, 16))((l_229[0] &= (l_228 , FAKE_DIVERGE(p_696->group_1_offset, get_group_id(1), 10))), ((l_230 , l_231) , (--l_232)), 4294967295UL, ((VECTOR(uint32_t, 4))(l_235.s1470)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0xB5FD59EAL, 0UL)).yxyyxyxyxyxxyxyy)).s5a)).odd, 1UL, 4294967288UL, (l_236 , l_237), ((VECTOR(uint32_t, 2))(5UL)), ((VECTOR(uint32_t, 2))(0xFA9AA87FL)), 0x2D4BDB75L)).odd))).even)), l_238[1], 0xB47CDA25L, ((VECTOR(uint32_t, 4))(4294967286UL)), 0xC4B6020AL, ((VECTOR(uint32_t, 4))(0UL)))).s64fa))).y, 0x293FC562L, 0xBC6312C1L, 0xED159577L, 6UL, 1UL, ((VECTOR(uint32_t, 8))(0x48781A7FL)), 0x61B192D8L)).s5, (uint32_t)l_239))).yyxxxyyxxxxyyxxy))).s62)))).yyyxxyxx)))))).s2074241253313351, (uint32_t)l_240))), ((VECTOR(uint32_t, 16))(0UL))))).hi)).hi, ((VECTOR(uint32_t, 4))(0x886E2DF8L))))).x , l_241))))).lo, ((VECTOR(int16_t, 2))((-6L)))))), 0x0EF9L, (-1L))).xyxzxyzy, ((VECTOR(int16_t, 8))((-10L))))))))).odd))).ywxxxwxx, ((VECTOR(uint16_t, 8))(0xB0A4L))))).s0;
                    for (l_206.x = 0; (l_206.x == (-9)); l_206.x = safe_sub_func_int64_t_s_s(l_206.x, 7))
                    { /* block id: 106 */
                        int32_t l_246 = 0x432B5EFDL;
                        int32_t *l_245[3][6][10] = {{{&l_246,(void*)0,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246},{&l_246,(void*)0,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246},{&l_246,(void*)0,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246},{&l_246,(void*)0,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246},{&l_246,(void*)0,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246},{&l_246,(void*)0,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246}},{{&l_246,(void*)0,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246},{&l_246,(void*)0,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246},{&l_246,(void*)0,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246},{&l_246,(void*)0,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246},{&l_246,(void*)0,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246},{&l_246,(void*)0,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246}},{{&l_246,(void*)0,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246},{&l_246,(void*)0,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246},{&l_246,(void*)0,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246},{&l_246,(void*)0,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246},{&l_246,(void*)0,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246},{&l_246,(void*)0,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246,&l_246}}};
                        int32_t *l_247 = &l_246;
                        struct S3 *l_250 = (void*)0;
                        struct S3 l_252 = {0xB76E90CCB52ADD3FL,0x6ED36738L,0x6241AC8A1858627FL,0x0163L,4294967290UL};/* VOLATILE GLOBAL l_252 */
                        struct S3 *l_251 = &l_252;
                        struct S3 *l_253 = &l_252;
                        int i, j, k;
                        l_247 = (GROUP_DIVERGE(1, 1) , l_245[2][5][9]);
                        l_181 |= (l_195 = (l_207 = ((++l_222.s3) , 0x452F1087L)));
                        l_253 = (l_251 = l_250);
                    }
                    if ((l_181 &= l_254))
                    { /* block id: 116 */
                        uint32_t l_255 = 4UL;
                        struct S1 l_256 = {{0xA68FEA37L},0UL};/* VOLATILE GLOBAL l_256 */
                        struct S3 l_259 = {0xB03ECC52C1734024L,-1L,0x6D8FC74D14176D2BL,0x9011L,0x2D9155A2L};/* VOLATILE GLOBAL l_259 */
                        struct S3 *l_258 = &l_259;
                        struct S3 **l_257 = &l_258;
                        struct S3 **l_260 = &l_258;
                        uint16_t l_261 = 65527UL;
                        uint64_t l_264 = 0UL;
                        struct S0 l_265 = {0xDFEFE262L};
                        struct S0 l_266 = {4294967295UL};
                        l_260 = (l_255 , (l_256 , l_257));
                        --l_261;
                        l_230.f0 = (l_266 = (l_264 , l_265));
                        l_212[0][1] &= (-6L);
                    }
                    else
                    { /* block id: 122 */
                        int32_t l_267 = 0x51430380L;
                        struct S1 l_269[5] = {{{0UL},0x33F38460L},{{0UL},0x33F38460L},{{0UL},0x33F38460L},{{0UL},0x33F38460L},{{0UL},0x33F38460L}};
                        struct S1 *l_268 = &l_269[2];
                        struct S1 *l_270 = &l_269[2];
                        int i;
                        l_270 = (l_267 , l_268);
                    }
                }
                else
                { /* block id: 125 */
                    int32_t l_272[8] = {(-1L),(-9L),(-1L),(-1L),(-9L),(-1L),(-1L),(-9L)};
                    int32_t *l_271 = &l_272[3];
                    int32_t *l_273 = &l_272[3];
                    int32_t *l_274 = &l_272[6];
                    int i;
                    l_274 = (l_273 = l_271);
                    for (l_272[3] = 0; (l_272[3] >= 17); l_272[3] = safe_add_func_int32_t_s_s(l_272[3], 1))
                    { /* block id: 130 */
                        int32_t l_277 = (-4L);
                        uint16_t l_278 = 4UL;
                        int32_t l_279 = 0x0A3E8C22L;
                        VECTOR(uint32_t, 16) l_280 = (VECTOR(uint32_t, 16))(0x5B299633L, (VECTOR(uint32_t, 4))(0x5B299633L, (VECTOR(uint32_t, 2))(0x5B299633L, 4294967287UL), 4294967287UL), 4294967287UL, 0x5B299633L, 4294967287UL, (VECTOR(uint32_t, 2))(0x5B299633L, 4294967287UL), (VECTOR(uint32_t, 2))(0x5B299633L, 4294967287UL), 0x5B299633L, 4294967287UL, 0x5B299633L, 4294967287UL);
                        uint64_t l_281[9] = {6UL,6UL,6UL,6UL,6UL,6UL,6UL,6UL,6UL};
                        int64_t l_282 = (-1L);
                        int32_t l_284[7] = {(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)};
                        int32_t *l_283 = &l_284[0];
                        int i;
                        l_279 |= (l_277 , (l_181 |= l_278));
                        l_282 |= (l_281[5] &= l_280.s6);
                        l_271 = l_283;
                    }
                }
            }
            l_285--;
            if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(4L, 0x1AEA817FL)).xyxx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 2))(l_288.yy)).xyxy, ((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_289.yz)), 0x37BCL, 3UL)).wxwyxyww, ((VECTOR(uint16_t, 4))(l_290.xxyx)).xzyxxyww, ((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 16))(65535UL, l_291, ((VECTOR(uint16_t, 8))(l_292.sc9e3581c)), (l_294 |= l_293), 65535UL, 0x92DCL, 65526UL, 0x8D7CL, 65526UL)).s494c, ((VECTOR(uint16_t, 2))(65526UL, 7UL)).yxxy))).yywwxzzz, ((VECTOR(uint16_t, 8))((l_296 = l_295), l_297, (l_298 , ((VECTOR(uint16_t, 16))(l_299.s2474730057111156)).s8), 0xC9D1L, 0x301FL, ((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 2))(5UL, 0x185DL)), ((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 2))(0UL, 1UL)).xyyy, ((VECTOR(uint16_t, 2))(0x2D4DL, 65535UL)).yyyy))).even))), 0UL))))).even))).wwwwzzwx))).even))).zzwyxyxxwwwzywxw, ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 16))(l_300.xyxyxyyyyyxyxxxx)), ((VECTOR(int32_t, 16))(l_301, ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(0L, 0x6D12B432L, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 4))(l_302.sf9f6)).wxwzxxxyywwxzzyz, ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(0x1E52A8F7L, 1L, (-5L), 1L, 0x762AD76DL, 0x0A6920E2L, (l_303 = 0x1D68F9C7L), 0x08DDD281L, ((VECTOR(int32_t, 4))(0x69746631L)), 0L, l_304, (-4L), 0L)).sde9f, ((VECTOR(int32_t, 4))((-1L))), ((VECTOR(int32_t, 4))(0x0DBCE7F4L))))).zxxzyyxxzwyxwwzw))).lo)).s73)), ((VECTOR(int32_t, 2))(1L))))), ((VECTOR(int32_t, 4))((-3L))))).even)), ((VECTOR(int32_t, 4))(0x12B02CEDL)), ((VECTOR(int32_t, 4))((-2L)))))).ywwxwzxy)).s37, ((VECTOR(int32_t, 2))(0L))))), (-1L), l_305, ((VECTOR(int32_t, 2))((-9L))), l_306, ((VECTOR(int32_t, 8))(0L)))))))))).s11db, ((VECTOR(int32_t, 4))(0x21B3EB41L))))).lo)), 0x579819D0L, 0x05DC86D7L)), ((VECTOR(int32_t, 4))(0x697EFC4DL))))), l_307, ((VECTOR(int32_t, 2))((-1L))), 8L)).s4615571444072256, ((VECTOR(int32_t, 16))(0x4950F7E0L))))).lo)).s7)
            { /* block id: 143 */
                struct S3 l_308 = {8UL,-9L,0L,0xB726L,1UL};/* VOLATILE GLOBAL l_308 */
                int16_t l_311[9][1][4] = {{{0x6B82L,0x4297L,0x6B82L,0x6B82L}},{{0x6B82L,0x4297L,0x6B82L,0x6B82L}},{{0x6B82L,0x4297L,0x6B82L,0x6B82L}},{{0x6B82L,0x4297L,0x6B82L,0x6B82L}},{{0x6B82L,0x4297L,0x6B82L,0x6B82L}},{{0x6B82L,0x4297L,0x6B82L,0x6B82L}},{{0x6B82L,0x4297L,0x6B82L,0x6B82L}},{{0x6B82L,0x4297L,0x6B82L,0x6B82L}},{{0x6B82L,0x4297L,0x6B82L,0x6B82L}}};
                int16_t *l_310 = &l_311[2][0][0];
                int16_t **l_309 = &l_310;
                int16_t **l_312 = &l_310;
                int i, j, k;
                l_178[7][3] &= (l_300.x = (l_308 , 0x121B824FL));
                l_312 = l_309;
            }
            else
            { /* block id: 147 */
                int32_t l_313 = 2L;
                for (l_313 = 0; (l_313 == (-9)); l_313 = safe_sub_func_uint16_t_u_u(l_313, 8))
                { /* block id: 150 */
                    int32_t l_316 = 0x03DDFA52L;
                    int8_t l_317 = 0x15L;
                    l_317 &= (l_300.y = l_316);
                }
            }
            for (l_300.y = (-30); (l_300.y > 17); l_300.y++)
            { /* block id: 157 */
                int16_t l_320 = 0x1DD3L;
                int64_t l_321 = 0x1AFB8C2D5834FC2DL;
                VECTOR(uint8_t, 8) l_322 = (VECTOR(uint8_t, 8))(0x93L, (VECTOR(uint8_t, 4))(0x93L, (VECTOR(uint8_t, 2))(0x93L, 0xBBL), 0xBBL), 0xBBL, 0x93L, 0xBBL);
                uint32_t l_323[6][8][5] = {{{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L}},{{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L}},{{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L}},{{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L}},{{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L}},{{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L},{0x70FA0D30L,0xE38E9378L,0x887B8A3AL,0xFD40FB0CL,0x23F51F51L}}};
                int i, j, k;
                l_178[7][9] ^= 0L;
                if ((l_320 , (l_321 , (((VECTOR(uint8_t, 8))(l_322.s30343406)).s3 , (l_178[7][9] = l_323[4][5][2])))))
                { /* block id: 160 */
                    struct S3 l_324[3] = {{1UL,-6L,0x789EAF65B7B6F859L,1UL,0xE01941D8L},{1UL,-6L,0x789EAF65B7B6F859L,1UL,0xE01941D8L},{1UL,-6L,0x789EAF65B7B6F859L,1UL,0xE01941D8L}};
                    struct S3 l_325 = {0xF3F2544A887ACA5FL,0x2CF1E2E0L,1L,7UL,1UL};/* VOLATILE GLOBAL l_325 */
                    struct S0 l_326 = {0x87CF710BL};
                    struct S0 l_327 = {0x2B1C8441L};
                    struct S0 l_328 = {4294967290UL};
                    int i;
                    l_306 ^= 0x198C55F5L;
                    l_325 = l_324[0];
                    l_302.s1 ^= 1L;
                    l_328 = (l_327 = l_326);
                }
                else
                { /* block id: 166 */
                    uint16_t l_329 = 65529UL;
                    int64_t l_344 = 0x77BA799C5781C0D5L;
                    int32_t l_345 = (-1L);
                    uint32_t l_346 = 4294967295UL;
                    l_302.sd &= l_329;
                    for (l_329 = (-27); (l_329 != 51); ++l_329)
                    { /* block id: 170 */
                        VECTOR(int32_t, 2) l_332 = (VECTOR(int32_t, 2))((-1L), 0x6C2A0033L);
                        uint64_t l_333 = 0xB28938DB97C4DA7DL;
                        VECTOR(uint32_t, 16) l_334 = (VECTOR(uint32_t, 16))(0xC8B4A970L, (VECTOR(uint32_t, 4))(0xC8B4A970L, (VECTOR(uint32_t, 2))(0xC8B4A970L, 0xCA536F29L), 0xCA536F29L), 0xCA536F29L, 0xC8B4A970L, 0xCA536F29L, (VECTOR(uint32_t, 2))(0xC8B4A970L, 0xCA536F29L), (VECTOR(uint32_t, 2))(0xC8B4A970L, 0xCA536F29L), 0xC8B4A970L, 0xCA536F29L, 0xC8B4A970L, 0xCA536F29L);
                        struct S1 l_337 = {{4294967295UL},9UL};/* VOLATILE GLOBAL l_337 */
                        struct S1 l_338 = {{0xB924840EL},3UL};/* VOLATILE GLOBAL l_338 */
                        int16_t l_339 = 0x4057L;
                        int32_t l_340 = 0x17FE4AA0L;
                        VECTOR(int32_t, 16) l_341 = (VECTOR(int32_t, 16))(0x55CF87A1L, (VECTOR(int32_t, 4))(0x55CF87A1L, (VECTOR(int32_t, 2))(0x55CF87A1L, (-7L)), (-7L)), (-7L), 0x55CF87A1L, (-7L), (VECTOR(int32_t, 2))(0x55CF87A1L, (-7L)), (VECTOR(int32_t, 2))(0x55CF87A1L, (-7L)), 0x55CF87A1L, (-7L), 0x55CF87A1L, (-7L));
                        VECTOR(int32_t, 4) l_342 = (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 8L), 8L);
                        int8_t l_343[1][2][10] = {{{1L,1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L,1L}}};
                        int i, j, k;
                        l_333 = ((VECTOR(int32_t, 16))(l_332.yyxxyyyxyyxyyyxy)).s8;
                        l_334.s2--;
                        l_338 = l_337;
                        l_302.s2 = (l_301 = (l_178[1][9] = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(l_339, l_340, (-3L), (-7L))).lo, ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(l_341.s4da3a7c934fe4d90)).s37, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x6D0839F4L, 0L)).yxyy)).hi)), ((VECTOR(int32_t, 4))(l_342.xyyz)).odd)))))).yxyxxxxx)).lo, (int32_t)l_343[0][1][5]))).wywzzwxywyxywzwz)).s8));
                    }
                    l_346--;
                }
            }
        }
        for (l_172 = 20; (l_172 <= 54); ++l_172)
        { /* block id: 184 */
            VECTOR(uint64_t, 2) l_351 = (VECTOR(uint64_t, 2))(0UL, 3UL);
            uint32_t l_352 = 0xD5E67B2AL;
            int32_t l_353 = 0x77AADC6AL;
            VECTOR(int64_t, 4) l_354 = (VECTOR(int64_t, 4))((-6L), (VECTOR(int64_t, 2))((-6L), (-10L)), (-10L));
            VECTOR(int64_t, 8) l_355 = (VECTOR(int64_t, 8))(0x228EE43EF6C83595L, (VECTOR(int64_t, 4))(0x228EE43EF6C83595L, (VECTOR(int64_t, 2))(0x228EE43EF6C83595L, 0x4BF73BA36871C2EAL), 0x4BF73BA36871C2EAL), 0x4BF73BA36871C2EAL, 0x228EE43EF6C83595L, 0x4BF73BA36871C2EAL);
            VECTOR(int64_t, 16) l_356 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x50D7487A09D2B90FL), 0x50D7487A09D2B90FL), 0x50D7487A09D2B90FL, 0L, 0x50D7487A09D2B90FL, (VECTOR(int64_t, 2))(0L, 0x50D7487A09D2B90FL), (VECTOR(int64_t, 2))(0L, 0x50D7487A09D2B90FL), 0L, 0x50D7487A09D2B90FL, 0L, 0x50D7487A09D2B90FL);
            VECTOR(int64_t, 2) l_357 = (VECTOR(int64_t, 2))(0L, (-1L));
            VECTOR(int64_t, 8) l_358 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 7L), 7L), 7L, 0L, 7L);
            uint8_t l_359 = 0xC0L;
            uint32_t l_360 = 4294967288UL;
            int16_t l_361 = 0x5CABL;
            VECTOR(int64_t, 8) l_362 = (VECTOR(int64_t, 8))(8L, (VECTOR(int64_t, 4))(8L, (VECTOR(int64_t, 2))(8L, 0L), 0L), 0L, 8L, 0L);
            VECTOR(int64_t, 8) l_363 = (VECTOR(int64_t, 8))(0x3792FB510B970263L, (VECTOR(int64_t, 4))(0x3792FB510B970263L, (VECTOR(int64_t, 2))(0x3792FB510B970263L, 1L), 1L), 1L, 0x3792FB510B970263L, 1L);
            VECTOR(int64_t, 4) l_364 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 1L), 1L);
            VECTOR(int64_t, 8) l_365 = (VECTOR(int64_t, 8))(0x59EEF6E4C0148659L, (VECTOR(int64_t, 4))(0x59EEF6E4C0148659L, (VECTOR(int64_t, 2))(0x59EEF6E4C0148659L, (-1L)), (-1L)), (-1L), 0x59EEF6E4C0148659L, (-1L));
            VECTOR(int64_t, 16) l_366 = (VECTOR(int64_t, 16))(0x10D629ED4C6526F9L, (VECTOR(int64_t, 4))(0x10D629ED4C6526F9L, (VECTOR(int64_t, 2))(0x10D629ED4C6526F9L, 0x3605614B441B3545L), 0x3605614B441B3545L), 0x3605614B441B3545L, 0x10D629ED4C6526F9L, 0x3605614B441B3545L, (VECTOR(int64_t, 2))(0x10D629ED4C6526F9L, 0x3605614B441B3545L), (VECTOR(int64_t, 2))(0x10D629ED4C6526F9L, 0x3605614B441B3545L), 0x10D629ED4C6526F9L, 0x3605614B441B3545L, 0x10D629ED4C6526F9L, 0x3605614B441B3545L);
            VECTOR(int64_t, 8) l_367 = (VECTOR(int64_t, 8))(0x016796435743E36CL, (VECTOR(int64_t, 4))(0x016796435743E36CL, (VECTOR(int64_t, 2))(0x016796435743E36CL, 3L), 3L), 3L, 0x016796435743E36CL, 3L);
            VECTOR(int64_t, 2) l_368 = (VECTOR(int64_t, 2))(5L, 0x03D86024088018A1L);
            VECTOR(int16_t, 8) l_369 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L));
            VECTOR(int64_t, 8) l_370 = (VECTOR(int64_t, 8))(0x35EA8D3366A8991DL, (VECTOR(int64_t, 4))(0x35EA8D3366A8991DL, (VECTOR(int64_t, 2))(0x35EA8D3366A8991DL, 0x383B883EA3E7371CL), 0x383B883EA3E7371CL), 0x383B883EA3E7371CL, 0x35EA8D3366A8991DL, 0x383B883EA3E7371CL);
            VECTOR(int64_t, 8) l_371 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
            VECTOR(int64_t, 4) l_372 = (VECTOR(int64_t, 4))(0x5C121100BC54EC6DL, (VECTOR(int64_t, 2))(0x5C121100BC54EC6DL, (-1L)), (-1L));
            VECTOR(int64_t, 8) l_373 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x47C7C140659CFA0FL), 0x47C7C140659CFA0FL), 0x47C7C140659CFA0FL, 1L, 0x47C7C140659CFA0FL);
            int16_t l_374 = 0x4481L;
            struct S1 l_375 = {{4294967295UL},0UL};/* VOLATILE GLOBAL l_375 */
            int32_t l_376 = 0x38D3E49FL;
            int8_t l_377 = 0x78L;
            uint32_t l_378[4] = {4294967293UL,4294967293UL,4294967293UL,4294967293UL};
            uint16_t l_379 = 0xE3FAL;
            uint8_t l_380 = 0x3BL;
            int32_t l_381 = 0x224EB362L;
            uint16_t l_382 = 65535UL;
            VECTOR(uint16_t, 16) l_402 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x2E67L), 0x2E67L), 0x2E67L, 0UL, 0x2E67L, (VECTOR(uint16_t, 2))(0UL, 0x2E67L), (VECTOR(uint16_t, 2))(0UL, 0x2E67L), 0UL, 0x2E67L, 0UL, 0x2E67L);
            VECTOR(int32_t, 8) l_403 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-3L)), (-3L)), (-3L), (-1L), (-3L));
            VECTOR(uint8_t, 8) l_404 = (VECTOR(uint8_t, 8))(0x46L, (VECTOR(uint8_t, 4))(0x46L, (VECTOR(uint8_t, 2))(0x46L, 255UL), 255UL), 255UL, 0x46L, 255UL);
            VECTOR(uint8_t, 8) l_405 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x8BL), 0x8BL), 0x8BL, 255UL, 0x8BL);
            VECTOR(uint8_t, 4) l_406 = (VECTOR(uint8_t, 4))(0x4DL, (VECTOR(uint8_t, 2))(0x4DL, 0x74L), 0x74L);
            uint64_t l_407 = 2UL;
            int32_t l_408 = (-1L);
            uint16_t l_409 = 0xD0A3L;
            VECTOR(uint8_t, 8) l_410 = (VECTOR(uint8_t, 8))(0x8BL, (VECTOR(uint8_t, 4))(0x8BL, (VECTOR(uint8_t, 2))(0x8BL, 0xD7L), 0xD7L), 0xD7L, 0x8BL, 0xD7L);
            VECTOR(uint8_t, 4) l_411 = (VECTOR(uint8_t, 4))(0xC7L, (VECTOR(uint8_t, 2))(0xC7L, 1UL), 1UL);
            uint64_t l_412 = 0UL;
            int8_t l_413 = 1L;
            uint16_t l_414 = 0x0162L;
            VECTOR(uint8_t, 2) l_415 = (VECTOR(uint8_t, 2))(0x85L, 255UL);
            VECTOR(uint8_t, 8) l_416 = (VECTOR(uint8_t, 8))(254UL, (VECTOR(uint8_t, 4))(254UL, (VECTOR(uint8_t, 2))(254UL, 0xA0L), 0xA0L), 0xA0L, 254UL, 0xA0L);
            int64_t l_417 = 0x1BBF3470E159121EL;
            uint16_t l_418 = 7UL;
            uint32_t l_419 = 4294967291UL;
            int32_t *l_420 = &l_381;
            int32_t *l_421 = &l_353;
            uint32_t l_422 = 0x82E7FEB9L;
            int i;
            l_171.y |= ((l_173 = ((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(l_351.xxxy)))).xxxxzzwy)))).s2, (l_352 ^= GROUP_DIVERGE(0, 1)), 0x3FF35097E2631EB6L, 18446744073709551614UL)).y , (l_380 = ((VECTOR(int64_t, 8))((-2L), l_353, ((VECTOR(int64_t, 2))(l_354.zy)), 0x4FE9D9399E39DB4AL, ((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 8))(add_sat(((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 16))(add_sat(((VECTOR(int64_t, 2))(l_355.s10)).xxxxyyyyyyxyxyxy, ((VECTOR(int64_t, 8))(l_356.s47d597a7)).s7344427367514104))).s2a2a, (int64_t)((VECTOR(int64_t, 4))(l_357.yyyy)).w))).wxxzzxzw, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(l_358.s6077)), (l_361 = (l_360 = l_359)), ((VECTOR(int64_t, 2))(l_362.s66)), 0x1AFBDEDD9470DC0CL))))), ((VECTOR(int64_t, 8))(0x58AED1166AE4A5FEL, 0x540C54AD161C2209L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(clz(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_363.s77)).yyxyxxxy))))).s0645607020016744)).s9e4f, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 8))(l_364.wwyxzzxz)).hi, ((VECTOR(int64_t, 8))(l_365.s62015012)).lo))), ((VECTOR(int64_t, 2))(l_366.s57)).xyxy))).lo))).yyyx))))).zxxxwzxwzywxyzyy)).s97)), 0x78B649A9A71824B5L, ((VECTOR(int64_t, 2))(1L, 0L)), 7L))))).lo)), ((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 4))(l_367.s1640)).odd, ((VECTOR(int64_t, 8))((l_366.sf &= (-4L)), ((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 4))(l_368.yyyx)), ((VECTOR(int64_t, 4))(0x1EAA86E8A56CEB19L, l_369.s3, 0x7E50AA98B15086B1L, 0x37CEB4E0953FFDE2L))))), 0x6655A303509A934FL, 0x6DB388F92EB95AF0L, (-1L))).s00))).xyyy))))).odd)), ((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),VECTOR(int64_t, 2),((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 16))(mad_sat(((VECTOR(int64_t, 8))(l_370.s01604436)).s2277467311446356, ((VECTOR(int64_t, 2))(l_371.s75)).xyxxyxyxxxyyxyyx, ((VECTOR(int64_t, 2))(0x7CBDC09D82C8770BL, 0x2932B4017B7A4F7BL)).xyyxyxxyxyxxxxyy))).s74))), ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))((-1L), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 16))(l_372.xzxxywxyzxxzzyxx)).s6fac, ((VECTOR(int64_t, 16))(1L, (-5L), ((VECTOR(int64_t, 8))(l_373.s7, 3L, l_374, (l_375 , (l_378[2] = (l_376 , l_377))), 0L, (-3L), 0x0500FCC9972FAF3BL, (-1L))), l_379, ((VECTOR(int64_t, 2))(0L)), ((VECTOR(int64_t, 2))(0x55C99DA52F62424BL)), 3L)).s4cd0))).odd)), (-1L), 0x68CC3B6660DCC9AEL, 0x3E786453BB9D2CB6L, 0x654585D67A78EF36L, 0L)).s6344253041616422)).s05, ((VECTOR(int64_t, 2))((-2L))))))))), (-3L))).s5)) , l_381)) , l_382);
            for (l_367.s1 = (-7); (l_367.s1 <= 4); l_367.s1 = safe_add_func_int64_t_s_s(l_367.s1, 3))
            { /* block id: 195 */
                int32_t l_385 = 8L;
                uint32_t l_391 = 0x3298D81EL;
                int32_t *l_392 = &l_385;
                int32_t *l_393 = &l_385;
                int32_t *l_394[6] = {&l_385,&l_385,&l_385,&l_385,&l_385,&l_385};
                uint16_t l_395[10][10][2] = {{{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L}},{{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L}},{{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L}},{{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L}},{{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L}},{{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L}},{{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L}},{{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L}},{{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L}},{{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L},{0xEE6BL,0x2754L}}};
                int i, j, k;
                for (l_385 = 23; (l_385 <= (-24)); --l_385)
                { /* block id: 198 */
                    uint16_t l_388 = 0x9724L;
                    struct S2 l_389 = {{{0UL},1UL},-1L,0x83AC8FB845AE7385L};/* VOLATILE GLOBAL l_389 */
                    struct S2 l_390 = {{{1UL},4294967288UL},2L,0xA36459B07DB64C74L};/* VOLATILE GLOBAL l_390 */
                    l_390 = (l_388 , l_389);
                }
                l_394[5] = (l_391 , (l_392 = (l_393 = l_392)));
                if (l_395[3][6][0])
                { /* block id: 204 */
                    struct S2 l_396 = {{{0UL},0xBC88BFE7L},0x5982A0A6571AFBA1L,18446744073709551614UL};/* VOLATILE GLOBAL l_396 */
                    struct S2 l_397 = {{{0xEF1E78B4L},0x61D7D39FL},0x348F1871BF9CC3CFL,1UL};/* VOLATILE GLOBAL l_397 */
                    int32_t l_399[8] = {0x2D5CA4A8L,0x2D5CA4A8L,0x2D5CA4A8L,0x2D5CA4A8L,0x2D5CA4A8L,0x2D5CA4A8L,0x2D5CA4A8L,0x2D5CA4A8L};
                    int32_t *l_398[6][8][5] = {{{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0}},{{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0}},{{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0}},{{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0}},{{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0}},{{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0},{&l_399[0],&l_399[0],(void*)0,&l_399[0],(void*)0}}};
                    int i, j, k;
                    l_397 = l_396;
                    l_392 = (l_394[4] = l_398[5][4][4]);
                }
                else
                { /* block id: 208 */
                    int16_t l_400 = 0x73ACL;
                    int64_t l_401 = 0x2B2F0A066165A788L;
                    (*l_393) = (l_401 |= l_400);
                }
            }
            l_421 = (l_420 = ((((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 8))(l_402.se09a9339)).s0654221370545047, (uint16_t)l_403.s6))).hi, ((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 16))(0x47L, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 16))(249UL, ((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_404.s25)).yyxyxyxxyxxyyxxy)).s32, ((VECTOR(uint8_t, 4))(l_405.s3546)).even))), ((VECTOR(uint8_t, 8))(l_406.wzyzyxzz)), l_407, ((VECTOR(uint8_t, 4))(5UL, ((VECTOR(uint8_t, 2))(255UL, 0x40L)), 252UL)))), ((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(7UL, 255UL, 0UL, (l_409 |= (l_408 , FAKE_DIVERGE(p_696->local_0_offset, get_local_id(0), 10))), ((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),uint8_t,((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(mul_hi(((VECTOR(uint8_t, 16))(l_410.s5027045216515202)).sd850, ((VECTOR(uint8_t, 8))(0x31L, 255UL, 0x7AL, 0UL, ((VECTOR(uint8_t, 2))(l_411.xx)), 0x2EL, 0x7AL)).odd))))).odd)).xxxx, (uint8_t)l_412, (uint8_t)l_413))), l_414, ((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 16))(mad_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_415.xyyxxyxx)).even)).xzxwwzwyzxyxxxwx, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_416.s66)), 7UL, 0UL)).xwyyzywz)).s4023715775017735, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(255UL, l_417, 0x7FL, ((VECTOR(uint8_t, 8))(0xEDL)), 0xC9L, ((VECTOR(uint8_t, 4))(0UL)))).s59)).xyxxyxxyyyxxyxyx))).s289b, ((VECTOR(uint8_t, 4))(250UL))))), 1UL, 255UL, 0UL)).s27e8)).xwwwxzxxzxwzwyzw, ((VECTOR(uint8_t, 16))(255UL)))))))).s55a4)), 0x3FL, ((VECTOR(uint8_t, 4))(255UL)), ((VECTOR(uint8_t, 2))(0UL)), l_418, 0x90L, 0x0BL, 0UL)).sb1a6, ((VECTOR(uint8_t, 4))(0xA4L))))).hi, ((VECTOR(uint8_t, 2))(0x64L)), ((VECTOR(uint8_t, 2))(255UL))))).yxxyyyxy, ((VECTOR(uint8_t, 8))(0xE5L)))))))).s11)).xxyxxxxx)).lo, ((VECTOR(uint16_t, 4))(0xE046L))))).y , l_419) , l_420));
            --l_422;
        }
        unsigned int result = 0;
        result += l_171.y;
        result += l_171.x;
        result += l_172;
        result += l_173;
        atomic_add(&p_696->g_special_values[19 * get_linear_group_id() + 9], result);
    }
    else
    { /* block id: 218 */
        (1 + 1);
    }
    l_425++;
    return p_696->g_19;
}


/* ------------------------------------------ */
/* 
 * reads : p_696->g_120 p_696->g_19 p_696->g_147 p_696->g_28 p_696->g_157 p_696->g_163
 * writes: p_696->g_19 p_696->g_28 p_696->g_162
 */
uint32_t * func_108(int16_t  p_109, int32_t * p_110, int32_t * p_111, struct S4 * p_696)
{ /* block id: 33 */
    int64_t l_124[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    int32_t l_125 = 0x16371A01L;
    int32_t l_130 = (-2L);
    int32_t l_131 = 0x7943A2B2L;
    int32_t l_132 = 0x4D979435L;
    uint32_t l_133 = 0xEBA309C9L;
    int32_t *l_164 = &l_131;
    int32_t *l_165 = (void*)0;
    int32_t *l_166 = &l_125;
    int32_t *l_167[10][10] = {{(void*)0,&l_132,(void*)0,&p_696->g_5,&l_132,&l_125,(void*)0,&l_131,(void*)0,(void*)0},{(void*)0,&l_132,(void*)0,&p_696->g_5,&l_132,&l_125,(void*)0,&l_131,(void*)0,(void*)0},{(void*)0,&l_132,(void*)0,&p_696->g_5,&l_132,&l_125,(void*)0,&l_131,(void*)0,(void*)0},{(void*)0,&l_132,(void*)0,&p_696->g_5,&l_132,&l_125,(void*)0,&l_131,(void*)0,(void*)0},{(void*)0,&l_132,(void*)0,&p_696->g_5,&l_132,&l_125,(void*)0,&l_131,(void*)0,(void*)0},{(void*)0,&l_132,(void*)0,&p_696->g_5,&l_132,&l_125,(void*)0,&l_131,(void*)0,(void*)0},{(void*)0,&l_132,(void*)0,&p_696->g_5,&l_132,&l_125,(void*)0,&l_131,(void*)0,(void*)0},{(void*)0,&l_132,(void*)0,&p_696->g_5,&l_132,&l_125,(void*)0,&l_131,(void*)0,(void*)0},{(void*)0,&l_132,(void*)0,&p_696->g_5,&l_132,&l_125,(void*)0,&l_131,(void*)0,(void*)0},{(void*)0,&l_132,(void*)0,&p_696->g_5,&l_132,&l_125,(void*)0,&l_131,(void*)0,(void*)0}};
    uint16_t l_168[4];
    int i, j;
    for (i = 0; i < 4; i++)
        l_168[i] = 0xF5E1L;
    if (((VECTOR(int32_t, 4))(p_696->g_120.seed3)).z)
    { /* block id: 34 */
        int32_t *l_121 = &p_696->g_28;
        int32_t *l_122 = &p_696->g_28;
        int32_t l_123 = (-1L);
        int32_t *l_126 = &l_123;
        int32_t *l_127 = &l_125;
        int32_t *l_128[10] = {&p_696->g_28,&p_696->g_28,&p_696->g_28,&p_696->g_28,&p_696->g_28,&p_696->g_28,&p_696->g_28,&p_696->g_28,&p_696->g_28,&p_696->g_28};
        int16_t l_129[4][9][7] = {{{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)},{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)},{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)},{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)},{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)},{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)},{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)},{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)},{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)}},{{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)},{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)},{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)},{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)},{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)},{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)},{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)},{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)},{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)}},{{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)},{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)},{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)},{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)},{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)},{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)},{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)},{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)},{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)}},{{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)},{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)},{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)},{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)},{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)},{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)},{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)},{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)},{0x533CL,1L,0x533CL,0x1696L,0L,2L,(-6L)}}};
        int i, j, k;
        l_133++;
    }
    else
    { /* block id: 36 */
        int32_t **l_136 = &p_696->g_19;
        int32_t *l_139[8][9] = {{(void*)0,&l_132,(void*)0,(void*)0,&l_132,(void*)0,(void*)0,&l_132,(void*)0},{(void*)0,&l_132,(void*)0,(void*)0,&l_132,(void*)0,(void*)0,&l_132,(void*)0},{(void*)0,&l_132,(void*)0,(void*)0,&l_132,(void*)0,(void*)0,&l_132,(void*)0},{(void*)0,&l_132,(void*)0,(void*)0,&l_132,(void*)0,(void*)0,&l_132,(void*)0},{(void*)0,&l_132,(void*)0,(void*)0,&l_132,(void*)0,(void*)0,&l_132,(void*)0},{(void*)0,&l_132,(void*)0,(void*)0,&l_132,(void*)0,(void*)0,&l_132,(void*)0},{(void*)0,&l_132,(void*)0,(void*)0,&l_132,(void*)0,(void*)0,&l_132,(void*)0},{(void*)0,&l_132,(void*)0,(void*)0,&l_132,(void*)0,(void*)0,&l_132,(void*)0}};
        int32_t **l_138 = &l_139[6][2];
        int i, j;
        (*l_138) = ((*l_136) = &p_696->g_28);
        (*p_696->g_19) = (safe_add_func_uint32_t_u_u(p_109, (~l_130)));
    }
    for (l_133 = 0; (l_133 == 26); l_133++)
    { /* block id: 43 */
        int8_t l_144 = 0x55L;
        struct S0 l_158 = {4294967287UL};
        int16_t *l_161[9][2][2] = {{{&p_696->g_114[7][3],&p_696->g_114[6][1]},{&p_696->g_114[7][3],&p_696->g_114[6][1]}},{{&p_696->g_114[7][3],&p_696->g_114[6][1]},{&p_696->g_114[7][3],&p_696->g_114[6][1]}},{{&p_696->g_114[7][3],&p_696->g_114[6][1]},{&p_696->g_114[7][3],&p_696->g_114[6][1]}},{{&p_696->g_114[7][3],&p_696->g_114[6][1]},{&p_696->g_114[7][3],&p_696->g_114[6][1]}},{{&p_696->g_114[7][3],&p_696->g_114[6][1]},{&p_696->g_114[7][3],&p_696->g_114[6][1]}},{{&p_696->g_114[7][3],&p_696->g_114[6][1]},{&p_696->g_114[7][3],&p_696->g_114[6][1]}},{{&p_696->g_114[7][3],&p_696->g_114[6][1]},{&p_696->g_114[7][3],&p_696->g_114[6][1]}},{{&p_696->g_114[7][3],&p_696->g_114[6][1]},{&p_696->g_114[7][3],&p_696->g_114[6][1]}},{{&p_696->g_114[7][3],&p_696->g_114[6][1]},{&p_696->g_114[7][3],&p_696->g_114[6][1]}}};
        int16_t **l_160[3];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_160[i] = &l_161[5][1][0];
        if (l_144)
        { /* block id: 44 */
            int32_t **l_146 = (void*)0;
            int32_t ***l_145 = &l_146;
            (*p_696->g_147) &= (((*l_145) = &p_696->g_19) != &p_696->g_19);
            p_110 = &l_130;
        }
        else
        { /* block id: 48 */
            for (p_696->g_28 = (-6); (p_696->g_28 < 17); p_696->g_28 = safe_add_func_int64_t_s_s(p_696->g_28, 8))
            { /* block id: 51 */
                if ((atomic_inc(&p_696->l_atomic_input[13]) == 3))
                { /* block id: 53 */
                    int32_t l_150 = (-2L);
                    uint64_t l_151[7] = {0x503D30EE1A2211D2L,0xEB2E64DF4010864EL,0x503D30EE1A2211D2L,0x503D30EE1A2211D2L,0xEB2E64DF4010864EL,0x503D30EE1A2211D2L,0x503D30EE1A2211D2L};
                    int8_t l_152 = 0x44L;
                    uint16_t l_153 = 1UL;
                    VECTOR(int64_t, 16) l_154 = (VECTOR(int64_t, 16))(7L, (VECTOR(int64_t, 4))(7L, (VECTOR(int64_t, 2))(7L, 0x2CEF0F45DD7FD481L), 0x2CEF0F45DD7FD481L), 0x2CEF0F45DD7FD481L, 7L, 0x2CEF0F45DD7FD481L, (VECTOR(int64_t, 2))(7L, 0x2CEF0F45DD7FD481L), (VECTOR(int64_t, 2))(7L, 0x2CEF0F45DD7FD481L), 7L, 0x2CEF0F45DD7FD481L, 7L, 0x2CEF0F45DD7FD481L);
                    uint64_t l_155[7];
                    int32_t l_156[8] = {0L,4L,0L,0L,4L,0L,0L,4L};
                    int i;
                    for (i = 0; i < 7; i++)
                        l_155[i] = 0xD736B76923BBB90FL;
                    l_152 ^= (l_151[0] = l_150);
                    l_154.s4 |= l_153;
                    l_156[7] &= l_155[6];
                    unsigned int result = 0;
                    result += l_150;
                    int l_151_i0;
                    for (l_151_i0 = 0; l_151_i0 < 7; l_151_i0++) {
                        result += l_151[l_151_i0];
                    }
                    result += l_152;
                    result += l_153;
                    result += l_154.sf;
                    result += l_154.se;
                    result += l_154.sd;
                    result += l_154.sc;
                    result += l_154.sb;
                    result += l_154.sa;
                    result += l_154.s9;
                    result += l_154.s8;
                    result += l_154.s7;
                    result += l_154.s6;
                    result += l_154.s5;
                    result += l_154.s4;
                    result += l_154.s3;
                    result += l_154.s2;
                    result += l_154.s1;
                    result += l_154.s0;
                    int l_155_i0;
                    for (l_155_i0 = 0; l_155_i0 < 7; l_155_i0++) {
                        result += l_155[l_155_i0];
                    }
                    int l_156_i0;
                    for (l_156_i0 = 0; l_156_i0 < 8; l_156_i0++) {
                        result += l_156[l_156_i0];
                    }
                    atomic_add(&p_696->l_special_values[13], result);
                }
                else
                { /* block id: 58 */
                    (1 + 1);
                }
            }
        }
        l_158 = p_696->g_157[6];
        (*p_696->g_163) = ((safe_unary_minus_func_uint32_t_u((&p_696->g_114[7][3] != (p_696->g_162[0] = &p_696->g_114[6][2])))) , p_111);
    }
    l_168[2]++;
    return p_696->g_19;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_input[19];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 19; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[19];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 19; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[63];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 63; i++)
            l_comm_values[i] = 1;
    struct S4 c_697;
    struct S4* p_696 = &c_697;
    struct S4 c_698 = {
        0x4B4B1328L, // p_696->g_5
        (VECTOR(uint32_t, 2))(0x6B779C63L, 0x7858F9C2L), // p_696->g_8
        &p_696->g_5, // p_696->g_19
        &p_696->g_19, // p_696->g_18
        5L, // p_696->g_28
        (-1L), // p_696->g_38
        1UL, // p_696->g_61
        (VECTOR(int32_t, 8))(0x20E38899L, (VECTOR(int32_t, 4))(0x20E38899L, (VECTOR(int32_t, 2))(0x20E38899L, 0x624A7E6DL), 0x624A7E6DL), 0x624A7E6DL, 0x20E38899L, 0x624A7E6DL), // p_696->g_94
        {{0x1BCEL,0x1FA4L,0x4377L,0L,0x22E8L,0x460CL,1L,0x4377L,1L},{0x1BCEL,0x1FA4L,0x4377L,0L,0x22E8L,0x460CL,1L,0x4377L,1L},{0x1BCEL,0x1FA4L,0x4377L,0L,0x22E8L,0x460CL,1L,0x4377L,1L},{0x1BCEL,0x1FA4L,0x4377L,0L,0x22E8L,0x460CL,1L,0x4377L,1L},{0x1BCEL,0x1FA4L,0x4377L,0L,0x22E8L,0x460CL,1L,0x4377L,1L},{0x1BCEL,0x1FA4L,0x4377L,0L,0x22E8L,0x460CL,1L,0x4377L,1L},{0x1BCEL,0x1FA4L,0x4377L,0L,0x22E8L,0x460CL,1L,0x4377L,1L},{0x1BCEL,0x1FA4L,0x4377L,0L,0x22E8L,0x460CL,1L,0x4377L,1L},{0x1BCEL,0x1FA4L,0x4377L,0L,0x22E8L,0x460CL,1L,0x4377L,1L},{0x1BCEL,0x1FA4L,0x4377L,0L,0x22E8L,0x460CL,1L,0x4377L,1L}}, // p_696->g_114
        (VECTOR(int32_t, 16))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x01468E88L), 0x01468E88L), 0x01468E88L, 8L, 0x01468E88L, (VECTOR(int32_t, 2))(8L, 0x01468E88L), (VECTOR(int32_t, 2))(8L, 0x01468E88L), 8L, 0x01468E88L, 8L, 0x01468E88L), // p_696->g_120
        (void*)0, // p_696->g_137
        &p_696->g_28, // p_696->g_147
        {{0xA9757F06L},{0xA9757F06L},{0xA9757F06L},{0xA9757F06L},{0xA9757F06L},{0xA9757F06L},{0xA9757F06L},{0xA9757F06L}}, // p_696->g_157
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_696->g_162
        &p_696->g_19, // p_696->g_163
        1UL, // p_696->g_434
        0x8898CA08L, // p_696->g_450
        &p_696->g_450, // p_696->g_449
        9UL, // p_696->g_453
        1UL, // p_696->g_461
        (VECTOR(uint16_t, 2))(7UL, 0x565BL), // p_696->g_480
        0xB8D0ABEBL, // p_696->g_482
        (void*)0, // p_696->g_487
        {&p_696->g_28,&p_696->g_28,&p_696->g_28,&p_696->g_28,&p_696->g_28,&p_696->g_28}, // p_696->g_488
        {{1UL},4294967293UL}, // p_696->g_505
        {{0x78D584D8L},0UL}, // p_696->g_506
        (void*)0, // p_696->g_508
        {&p_696->g_505,(void*)0,&p_696->g_505,&p_696->g_505,(void*)0,&p_696->g_505,&p_696->g_505,(void*)0}, // p_696->g_509
        {{{0xCD811DB2L},0UL},0x58CF106643CECD25L,18446744073709551608UL}, // p_696->g_544
        (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x2FL), 0x2FL), 0x2FL, 1L, 0x2FL), // p_696->g_551
        0x47L, // p_696->g_564
        0UL, // p_696->g_567
        (void*)0, // p_696->g_571
        (VECTOR(uint16_t, 16))(0xC66DL, (VECTOR(uint16_t, 4))(0xC66DL, (VECTOR(uint16_t, 2))(0xC66DL, 65535UL), 65535UL), 65535UL, 0xC66DL, 65535UL, (VECTOR(uint16_t, 2))(0xC66DL, 65535UL), (VECTOR(uint16_t, 2))(0xC66DL, 65535UL), 0xC66DL, 65535UL, 0xC66DL, 65535UL), // p_696->g_598
        {{{1UL},0UL},0x276C6795960C5EE1L,18446744073709551606UL}, // p_696->g_602
        &p_696->g_28, // p_696->g_606
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_696->g_628
        &p_696->g_628[0], // p_696->g_627
        {{{{{0x216AFFFBL},0x614494E9L},0x42D467C916D26AC5L,1UL}},{{{{0x216AFFFBL},0x614494E9L},0x42D467C916D26AC5L,1UL}},{{{{0x216AFFFBL},0x614494E9L},0x42D467C916D26AC5L,1UL}},{{{{0x216AFFFBL},0x614494E9L},0x42D467C916D26AC5L,1UL}},{{{{0x216AFFFBL},0x614494E9L},0x42D467C916D26AC5L,1UL}},{{{{0x216AFFFBL},0x614494E9L},0x42D467C916D26AC5L,1UL}},{{{{0x216AFFFBL},0x614494E9L},0x42D467C916D26AC5L,1UL}},{{{{0x216AFFFBL},0x614494E9L},0x42D467C916D26AC5L,1UL}}}, // p_696->g_659
        &p_696->g_157[6], // p_696->g_661
        (VECTOR(int8_t, 2))(0x44L, 0x4DL), // p_696->g_690
        0, // p_696->v_collective
        sequence_input[get_global_id(0)], // p_696->global_0_offset
        sequence_input[get_global_id(1)], // p_696->global_1_offset
        sequence_input[get_global_id(2)], // p_696->global_2_offset
        sequence_input[get_local_id(0)], // p_696->local_0_offset
        sequence_input[get_local_id(1)], // p_696->local_1_offset
        sequence_input[get_local_id(2)], // p_696->local_2_offset
        sequence_input[get_group_id(0)], // p_696->group_0_offset
        sequence_input[get_group_id(1)], // p_696->group_1_offset
        sequence_input[get_group_id(2)], // p_696->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 63)), permutations[0][get_linear_local_id()])), // p_696->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_697 = c_698;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_696);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_696->g_5, "p_696->g_5", print_hash_value);
    transparent_crc(p_696->g_8.x, "p_696->g_8.x", print_hash_value);
    transparent_crc(p_696->g_8.y, "p_696->g_8.y", print_hash_value);
    transparent_crc(p_696->g_28, "p_696->g_28", print_hash_value);
    transparent_crc(p_696->g_38, "p_696->g_38", print_hash_value);
    transparent_crc(p_696->g_61, "p_696->g_61", print_hash_value);
    transparent_crc(p_696->g_94.s0, "p_696->g_94.s0", print_hash_value);
    transparent_crc(p_696->g_94.s1, "p_696->g_94.s1", print_hash_value);
    transparent_crc(p_696->g_94.s2, "p_696->g_94.s2", print_hash_value);
    transparent_crc(p_696->g_94.s3, "p_696->g_94.s3", print_hash_value);
    transparent_crc(p_696->g_94.s4, "p_696->g_94.s4", print_hash_value);
    transparent_crc(p_696->g_94.s5, "p_696->g_94.s5", print_hash_value);
    transparent_crc(p_696->g_94.s6, "p_696->g_94.s6", print_hash_value);
    transparent_crc(p_696->g_94.s7, "p_696->g_94.s7", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_696->g_114[i][j], "p_696->g_114[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_696->g_120.s0, "p_696->g_120.s0", print_hash_value);
    transparent_crc(p_696->g_120.s1, "p_696->g_120.s1", print_hash_value);
    transparent_crc(p_696->g_120.s2, "p_696->g_120.s2", print_hash_value);
    transparent_crc(p_696->g_120.s3, "p_696->g_120.s3", print_hash_value);
    transparent_crc(p_696->g_120.s4, "p_696->g_120.s4", print_hash_value);
    transparent_crc(p_696->g_120.s5, "p_696->g_120.s5", print_hash_value);
    transparent_crc(p_696->g_120.s6, "p_696->g_120.s6", print_hash_value);
    transparent_crc(p_696->g_120.s7, "p_696->g_120.s7", print_hash_value);
    transparent_crc(p_696->g_120.s8, "p_696->g_120.s8", print_hash_value);
    transparent_crc(p_696->g_120.s9, "p_696->g_120.s9", print_hash_value);
    transparent_crc(p_696->g_120.sa, "p_696->g_120.sa", print_hash_value);
    transparent_crc(p_696->g_120.sb, "p_696->g_120.sb", print_hash_value);
    transparent_crc(p_696->g_120.sc, "p_696->g_120.sc", print_hash_value);
    transparent_crc(p_696->g_120.sd, "p_696->g_120.sd", print_hash_value);
    transparent_crc(p_696->g_120.se, "p_696->g_120.se", print_hash_value);
    transparent_crc(p_696->g_120.sf, "p_696->g_120.sf", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_696->g_157[i].f0, "p_696->g_157[i].f0", print_hash_value);

    }
    transparent_crc(p_696->g_434, "p_696->g_434", print_hash_value);
    transparent_crc(p_696->g_450, "p_696->g_450", print_hash_value);
    transparent_crc(p_696->g_453, "p_696->g_453", print_hash_value);
    transparent_crc(p_696->g_461, "p_696->g_461", print_hash_value);
    transparent_crc(p_696->g_480.x, "p_696->g_480.x", print_hash_value);
    transparent_crc(p_696->g_480.y, "p_696->g_480.y", print_hash_value);
    transparent_crc(p_696->g_482, "p_696->g_482", print_hash_value);
    transparent_crc(p_696->g_505.f0.f0, "p_696->g_505.f0.f0", print_hash_value);
    transparent_crc(p_696->g_505.f1, "p_696->g_505.f1", print_hash_value);
    transparent_crc(p_696->g_506.f0.f0, "p_696->g_506.f0.f0", print_hash_value);
    transparent_crc(p_696->g_506.f1, "p_696->g_506.f1", print_hash_value);
    transparent_crc(p_696->g_544.f0.f0.f0, "p_696->g_544.f0.f0.f0", print_hash_value);
    transparent_crc(p_696->g_544.f0.f1, "p_696->g_544.f0.f1", print_hash_value);
    transparent_crc(p_696->g_544.f1, "p_696->g_544.f1", print_hash_value);
    transparent_crc(p_696->g_544.f2, "p_696->g_544.f2", print_hash_value);
    transparent_crc(p_696->g_551.s0, "p_696->g_551.s0", print_hash_value);
    transparent_crc(p_696->g_551.s1, "p_696->g_551.s1", print_hash_value);
    transparent_crc(p_696->g_551.s2, "p_696->g_551.s2", print_hash_value);
    transparent_crc(p_696->g_551.s3, "p_696->g_551.s3", print_hash_value);
    transparent_crc(p_696->g_551.s4, "p_696->g_551.s4", print_hash_value);
    transparent_crc(p_696->g_551.s5, "p_696->g_551.s5", print_hash_value);
    transparent_crc(p_696->g_551.s6, "p_696->g_551.s6", print_hash_value);
    transparent_crc(p_696->g_551.s7, "p_696->g_551.s7", print_hash_value);
    transparent_crc(p_696->g_564, "p_696->g_564", print_hash_value);
    transparent_crc(p_696->g_567, "p_696->g_567", print_hash_value);
    transparent_crc(p_696->g_598.s0, "p_696->g_598.s0", print_hash_value);
    transparent_crc(p_696->g_598.s1, "p_696->g_598.s1", print_hash_value);
    transparent_crc(p_696->g_598.s2, "p_696->g_598.s2", print_hash_value);
    transparent_crc(p_696->g_598.s3, "p_696->g_598.s3", print_hash_value);
    transparent_crc(p_696->g_598.s4, "p_696->g_598.s4", print_hash_value);
    transparent_crc(p_696->g_598.s5, "p_696->g_598.s5", print_hash_value);
    transparent_crc(p_696->g_598.s6, "p_696->g_598.s6", print_hash_value);
    transparent_crc(p_696->g_598.s7, "p_696->g_598.s7", print_hash_value);
    transparent_crc(p_696->g_598.s8, "p_696->g_598.s8", print_hash_value);
    transparent_crc(p_696->g_598.s9, "p_696->g_598.s9", print_hash_value);
    transparent_crc(p_696->g_598.sa, "p_696->g_598.sa", print_hash_value);
    transparent_crc(p_696->g_598.sb, "p_696->g_598.sb", print_hash_value);
    transparent_crc(p_696->g_598.sc, "p_696->g_598.sc", print_hash_value);
    transparent_crc(p_696->g_598.sd, "p_696->g_598.sd", print_hash_value);
    transparent_crc(p_696->g_598.se, "p_696->g_598.se", print_hash_value);
    transparent_crc(p_696->g_598.sf, "p_696->g_598.sf", print_hash_value);
    transparent_crc(p_696->g_602.f0.f0.f0, "p_696->g_602.f0.f0.f0", print_hash_value);
    transparent_crc(p_696->g_602.f0.f1, "p_696->g_602.f0.f1", print_hash_value);
    transparent_crc(p_696->g_602.f1, "p_696->g_602.f1", print_hash_value);
    transparent_crc(p_696->g_602.f2, "p_696->g_602.f2", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_696->g_659[i][j].f0.f0.f0, "p_696->g_659[i][j].f0.f0.f0", print_hash_value);
            transparent_crc(p_696->g_659[i][j].f0.f1, "p_696->g_659[i][j].f0.f1", print_hash_value);
            transparent_crc(p_696->g_659[i][j].f1, "p_696->g_659[i][j].f1", print_hash_value);
            transparent_crc(p_696->g_659[i][j].f2, "p_696->g_659[i][j].f2", print_hash_value);

        }
    }
    transparent_crc(p_696->g_690.x, "p_696->g_690.x", print_hash_value);
    transparent_crc(p_696->g_690.y, "p_696->g_690.y", print_hash_value);
    transparent_crc(p_696->v_collective, "p_696->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 19; i++)
            transparent_crc(p_696->g_special_values[i + 19 * get_linear_group_id()], "p_696->g_special_values[i + 19 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 19; i++)
            transparent_crc(p_696->l_special_values[i], "p_696->l_special_values[i]", print_hash_value);
    transparent_crc(p_696->l_comm_values[get_linear_local_id()], "p_696->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_696->g_comm_values[get_linear_group_id() * 63 + get_linear_local_id()], "p_696->g_comm_values[get_linear_group_id() * 63 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
