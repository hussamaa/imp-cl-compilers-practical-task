// --atomics 65 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 67,69,1 -l 67,1,1
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

__constant uint32_t permutations[10][67] = {
{7,31,44,29,49,20,41,16,47,59,27,25,30,51,39,66,45,60,0,12,3,40,63,26,9,38,64,8,28,54,65,10,14,37,61,23,57,21,2,6,55,1,24,4,18,56,52,19,62,11,42,32,58,17,46,36,15,33,13,5,34,48,50,43,35,22,53}, // permutation 0
{64,36,34,46,48,51,58,12,15,63,59,49,55,20,54,47,33,26,30,31,39,1,22,65,66,37,40,24,9,7,10,0,44,11,28,50,16,45,18,61,52,42,57,17,53,3,23,43,13,14,27,35,41,21,8,32,60,2,56,19,62,5,6,4,25,38,29}, // permutation 1
{38,42,36,6,14,30,48,49,58,51,18,16,0,21,8,37,56,40,41,61,54,22,27,2,12,5,19,15,29,60,65,64,57,59,52,66,23,24,43,26,10,20,7,55,3,35,1,47,4,25,50,17,44,28,53,39,31,45,46,34,13,63,9,11,33,62,32}, // permutation 2
{15,16,53,0,61,59,36,56,24,7,4,11,21,35,58,64,38,54,62,13,27,66,50,6,3,65,34,37,9,5,55,25,23,60,51,44,19,40,26,14,29,57,18,46,47,42,41,1,20,2,63,39,12,52,8,49,45,32,17,30,10,33,22,31,43,48,28}, // permutation 3
{22,5,55,42,12,37,2,50,3,33,21,18,24,41,58,35,28,66,46,54,59,52,17,43,34,63,1,38,25,30,39,10,26,61,15,13,31,48,19,45,16,60,8,9,27,4,40,0,47,14,29,49,51,64,20,53,11,65,7,6,36,44,57,32,56,62,23}, // permutation 4
{58,59,10,47,28,2,43,32,7,21,65,33,54,57,6,20,23,1,63,4,27,16,51,64,56,53,9,34,48,42,25,24,41,61,8,17,52,31,13,14,49,5,37,38,44,50,26,45,19,66,40,46,30,18,22,29,36,15,35,39,62,3,55,0,60,12,11}, // permutation 5
{65,32,61,34,57,52,43,40,49,60,24,18,21,27,12,33,13,64,42,44,2,20,8,23,26,58,30,28,45,3,37,35,0,14,53,19,36,11,16,56,38,7,22,1,29,25,4,50,46,51,31,5,59,6,10,48,63,55,9,15,62,41,54,17,66,39,47}, // permutation 6
{43,53,19,34,66,51,14,56,4,55,42,40,23,39,58,52,36,10,48,21,16,57,20,1,61,5,50,46,60,41,0,22,29,49,47,15,7,2,32,28,27,30,3,8,9,33,44,26,24,17,12,65,35,37,31,18,6,25,13,63,59,62,45,38,64,54,11}, // permutation 7
{1,19,18,26,6,55,52,23,10,61,66,28,42,50,22,14,3,31,12,24,54,9,32,46,44,7,47,59,8,2,53,30,29,48,40,58,17,4,13,57,56,39,64,65,5,25,37,20,49,16,45,34,21,36,63,11,15,62,38,43,35,27,51,41,0,60,33}, // permutation 8
{16,61,55,30,9,66,34,39,2,60,32,0,28,36,19,64,25,26,29,51,11,50,8,65,7,14,10,18,63,23,47,44,5,37,57,27,21,54,49,38,33,62,4,22,31,59,40,20,13,45,3,41,52,24,58,15,48,56,35,17,53,42,1,6,46,12,43} // permutation 9
};

// Seed: 2858123160

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
   uint8_t  f1;
   uint32_t  f2;
   uint64_t  f3;
   volatile uint32_t  f4;
   volatile int8_t  f5;
   volatile uint32_t  f6;
   uint32_t  f7;
   int64_t  f8;
};

union U1 {
   uint32_t  f0;
   volatile uint16_t  f1;
};

struct S2 {
    volatile VECTOR(uint32_t, 4) g_7;
    volatile VECTOR(uint32_t, 8) g_8;
    int32_t g_51[2][2][5];
    VECTOR(uint16_t, 8) g_65;
    VECTOR(uint16_t, 16) g_67;
    int32_t g_89;
    int64_t g_91;
    int32_t *g_98;
    int32_t **g_97;
    uint64_t g_198;
    uint64_t g_201[9][1][4];
    int32_t g_216;
    VECTOR(int8_t, 16) g_357;
    int16_t g_365;
    uint32_t g_367;
    int16_t g_376;
    VECTOR(int32_t, 2) g_438;
    volatile int64_t g_441;
    volatile int64_t g_442;
    volatile int64_t g_443;
    volatile int64_t g_444[9][5];
    volatile int64_t *g_440[2][7];
    volatile int64_t * volatile *g_439;
    VECTOR(int64_t, 16) g_447;
    VECTOR(int64_t, 8) g_448;
    int32_t **g_458[5][5];
    int16_t g_459;
    int32_t g_460;
    VECTOR(int16_t, 2) g_539;
    VECTOR(int32_t, 8) g_576;
    VECTOR(int64_t, 8) g_593;
    VECTOR(int64_t, 8) g_601;
    VECTOR(uint32_t, 4) g_651;
    int32_t * volatile g_665;
    uint64_t g_675;
    struct S0 g_693[8][5][6];
    volatile union U1 * volatile g_749;
    volatile union U1 * volatile * volatile g_750;
    uint32_t g_765;
    int16_t *g_771;
    uint64_t *g_817[3];
    uint64_t **g_816;
    volatile VECTOR(int64_t, 16) g_818;
    volatile VECTOR(int64_t, 4) g_819;
    int32_t ** volatile g_843[6];
    int32_t ** volatile g_844;
    volatile union U1 * volatile * volatile g_845[8][10][3];
    volatile union U1 * volatile * volatile g_846;
    volatile VECTOR(uint64_t, 2) g_847;
    VECTOR(uint32_t, 8) g_851;
    volatile int32_t g_854;
    uint64_t ***g_878;
    struct S0 * volatile g_882;
    struct S0 **g_883;
    struct S0 *g_889;
    struct S0 **g_888[9];
    union U1 g_892;
    union U1 ** volatile g_893;
    union U1 *g_894;
    volatile struct S0 g_965;
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
int8_t  func_1(struct S2 * p_966);
int32_t  func_2(int16_t  p_3, uint16_t  p_4, uint32_t  p_5, struct S2 * p_966);
uint32_t  func_16(int64_t  p_17, int64_t  p_18, int32_t  p_19, int8_t  p_20, int32_t  p_21, struct S2 * p_966);
int64_t  func_22(int64_t  p_23, int32_t  p_24, uint8_t  p_25, struct S2 * p_966);
int32_t  func_26(int8_t  p_27, uint32_t  p_28, struct S2 * p_966);
int64_t  func_29(uint8_t  p_30, int32_t  p_31, int64_t  p_32, int32_t  p_33, struct S2 * p_966);
int64_t  func_38(uint32_t  p_39, uint8_t  p_40, uint32_t  p_41, int32_t  p_42, int64_t  p_43, struct S2 * p_966);
int16_t  func_46(int8_t  p_47, uint64_t  p_48, struct S2 * p_966);
int32_t * func_52(uint64_t  p_53, struct S2 * p_966);
int16_t  func_72(int64_t  p_73, int32_t * p_74, int32_t * p_75, struct S2 * p_966);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_966->g_comm_values p_966->g_7 p_966->g_8 p_966->l_comm_values p_966->g_51 p_966->g_65 p_966->g_67 p_966->g_89 p_966->g_91 p_966->g_97 p_966->g_98 p_966->g_201 p_966->g_367 p_966->g_438 p_966->g_439 p_966->g_447 p_966->g_448 p_966->g_460 p_966->g_365 p_966->g_216 p_966->g_539 p_966->g_376 p_966->g_198 p_966->g_576 p_966->g_593 p_966->g_601 p_966->g_749 p_966->g_765 p_966->g_357 p_966->g_693.f3 p_966->g_440 p_966->g_651 p_966->g_816 p_966->g_675 p_966->g_844 p_966->g_846 p_966->g_847 p_966->g_851 p_966->g_854 p_966->g_459 p_966->g_693 p_966->g_882 p_966->g_883 p_966->g_889 p_966->g_965
 * writes: p_966->g_51 p_966->g_91 p_966->g_89 p_966->g_198 p_966->g_201 p_966->g_357 p_966->g_97 p_966->g_365 p_966->g_367 p_966->g_458 p_966->g_216 p_966->g_459 p_966->g_438 p_966->g_98 p_966->g_448 p_966->g_460 p_966->g_749 p_966->g_765 p_966->g_771 p_966->g_816 p_966->g_693.f1 p_966->g_878 p_966->g_376 p_966->g_693 p_966->g_883 p_966->g_888 p_966->g_894
 */
int8_t  func_1(struct S2 * p_966)
{ /* block id: 4 */
    VECTOR(uint32_t, 4) l_15 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967295UL), 4294967295UL);
    int16_t *l_364 = &p_966->g_365;
    uint32_t *l_366 = &p_966->g_367;
    int32_t l_381[1][9] = {{(-1L),0x43732F1DL,(-1L),(-1L),0x43732F1DL,(-1L),(-1L),0x43732F1DL,(-1L)}};
    int64_t *l_567 = (void*)0;
    int64_t *l_568 = (void*)0;
    int32_t l_622 = 1L;
    uint32_t l_807 = 0x02D35C3DL;
    uint16_t l_839[1][1];
    VECTOR(uint64_t, 8) l_848 = (VECTOR(uint64_t, 8))(0x32ED7A69FA0A3CF3L, (VECTOR(uint64_t, 4))(0x32ED7A69FA0A3CF3L, (VECTOR(uint64_t, 2))(0x32ED7A69FA0A3CF3L, 18446744073709551607UL), 18446744073709551607UL), 18446744073709551607UL, 0x32ED7A69FA0A3CF3L, 18446744073709551607UL);
    VECTOR(uint32_t, 16) l_859 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint32_t, 2))(1UL, 0UL), (VECTOR(uint32_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL);
    int32_t l_860 = 0x2C7CE813L;
    int32_t l_861 = 0x772462C2L;
    uint64_t l_862 = 0x279437E2ED7E2912L;
    int8_t *l_863 = (void*)0;
    int8_t *l_864 = (void*)0;
    int8_t *l_865 = (void*)0;
    int8_t *l_866 = (void*)0;
    int8_t *l_867[2];
    int32_t l_868 = 0x581A3622L;
    int32_t *l_869[6];
    int32_t l_870 = 0x0F5431D6L;
    uint64_t ***l_879 = &p_966->g_816;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_839[i][j] = 1UL;
    }
    for (i = 0; i < 2; i++)
        l_867[i] = (void*)0;
    for (i = 0; i < 6; i++)
        l_869[i] = &p_966->g_89;
    if (func_2(p_966->g_comm_values[p_966->tid], (0x5A97963BA20B95AEL < (((((FAKE_DIVERGE(p_966->local_1_offset, get_local_id(1), 10) >= ((safe_unary_minus_func_int32_t_s((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(p_966->g_7.wyxyxwxwzwxywyyw)))).sb, ((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 2))(p_966->g_8.s36)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))((safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_div_func_uint32_t_u_u((p_966->g_8.s3 >= (((VECTOR(uint32_t, 4))(l_15.xwww)).x != (5UL || p_966->l_comm_values[(safe_mod_func_uint32_t_u_u(p_966->tid, 67))]))), func_16((p_966->g_448.s5 = func_22(l_15.x, func_26(((l_381[0][1] = func_29((safe_sub_func_uint8_t_u_u(FAKE_DIVERGE(p_966->group_2_offset, get_group_id(2), 10), l_15.z)), l_15.w, (((safe_div_func_uint32_t_u_u((((func_38((((*l_366) ^= ((safe_sub_func_int16_t_s_s(((*l_364) = func_46((safe_lshift_func_uint16_t_u_s((p_966->g_51[0][0][3] ^= (((p_966->l_comm_values[(safe_mod_func_uint32_t_u_u(p_966->tid, 67))] > GROUP_DIVERGE(1, 1)) , p_966->l_comm_values[(safe_mod_func_uint32_t_u_u(p_966->tid, 67))]) && l_15.w)), p_966->g_comm_values[p_966->tid])), p_966->g_comm_values[p_966->tid], p_966)), p_966->g_65.s4)) >= p_966->g_67.s5)) , l_15.z), p_966->g_65.s4, l_15.w, l_15.w, p_966->g_65.s1, p_966) | 4UL) == GROUP_DIVERGE(1, 1)) , p_966->g_201[1][0][0]), 0x9E034A35L)) > p_966->g_65.s5) != p_966->g_67.s8), p_966->g_65.s2, p_966)) != p_966->g_67.sd), l_15.w, p_966), p_966->g_67.s7, p_966)), p_966->g_67.s4, l_15.w, p_966->g_539.x, p_966->g_376, p_966))), (-1L))), l_15.y)), GROUP_DIVERGE(2, 1), FAKE_DIVERGE(p_966->global_2_offset, get_global_id(2), 10), FAKE_DIVERGE(p_966->global_0_offset, get_global_id(0), 10), p_966->g_198, ((VECTOR(uint32_t, 2))(0xDFCDC706L)), 0UL)).s23))))), GROUP_DIVERGE(1, 1), 1UL, 0xBE5ECFBEL, l_15.z, ((VECTOR(uint32_t, 2))(0x8262413AL)), 0xC2BA3055L, l_15.x, p_966->g_7.y, l_15.y, 4294967295UL, 0x88992270L, 0xC9BEE121L)).s44ba, ((VECTOR(uint32_t, 4))(4294967291UL)), ((VECTOR(uint32_t, 4))(4294967295UL))))).xywxwxyz)).s2 < 0x629EF9DBL))) < l_15.z)) | l_622) ^ l_622) , FAKE_DIVERGE(p_966->global_1_offset, get_global_id(1), 10)) ^ l_15.w)), l_15.x, p_966))
    { /* block id: 376 */
        int8_t l_740 = 0x27L;
        int32_t *l_748 = &l_381[0][1];
        int16_t *l_772 = &p_966->g_365;
        int32_t *l_790 = (void*)0;
        int32_t *l_791 = &l_622;
        int32_t *l_792 = (void*)0;
        int32_t *l_793 = &l_381[0][3];
        int32_t *l_794 = &p_966->g_89;
        int32_t *l_795 = &l_622;
        int32_t *l_796 = (void*)0;
        int32_t l_797 = 0x73726931L;
        int32_t *l_798 = (void*)0;
        int32_t *l_799 = &l_381[0][1];
        int32_t *l_800 = &l_622;
        int32_t *l_801 = (void*)0;
        int32_t *l_802 = (void*)0;
        int32_t *l_803 = &l_381[0][1];
        int32_t *l_804 = &p_966->g_89;
        int32_t *l_805 = &p_966->g_89;
        int32_t *l_806[7][9] = {{&l_797,(void*)0,&l_797,(void*)0,&l_797,&l_797,(void*)0,&l_797,(void*)0},{&l_797,(void*)0,&l_797,(void*)0,&l_797,&l_797,(void*)0,&l_797,(void*)0},{&l_797,(void*)0,&l_797,(void*)0,&l_797,&l_797,(void*)0,&l_797,(void*)0},{&l_797,(void*)0,&l_797,(void*)0,&l_797,&l_797,(void*)0,&l_797,(void*)0},{&l_797,(void*)0,&l_797,(void*)0,&l_797,&l_797,(void*)0,&l_797,(void*)0},{&l_797,(void*)0,&l_797,(void*)0,&l_797,&l_797,(void*)0,&l_797,(void*)0},{&l_797,(void*)0,&l_797,(void*)0,&l_797,&l_797,(void*)0,&l_797,(void*)0}};
        VECTOR(uint64_t, 8) l_825 = (VECTOR(uint64_t, 8))(0x6E50AABE73D19F2EL, (VECTOR(uint64_t, 4))(0x6E50AABE73D19F2EL, (VECTOR(uint64_t, 2))(0x6E50AABE73D19F2EL, 0x7928C7E3B1F3646EL), 0x7928C7E3B1F3646EL), 0x7928C7E3B1F3646EL, 0x6E50AABE73D19F2EL, 0x7928C7E3B1F3646EL);
        VECTOR(uint64_t, 8) l_827 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0UL, 18446744073709551615UL);
        VECTOR(int8_t, 2) l_832 = (VECTOR(int8_t, 2))(3L, 1L);
        int i, j;
        for (p_966->g_198 = 0; (p_966->g_198 < 8); p_966->g_198 = safe_add_func_int8_t_s_s(p_966->g_198, 1))
        { /* block id: 379 */
            int8_t l_764[3];
            VECTOR(int32_t, 4) l_783 = (VECTOR(int32_t, 4))(0x6EB95759L, (VECTOR(int32_t, 2))(0x6EB95759L, 0x7E460FF3L), 0x7E460FF3L);
            VECTOR(int64_t, 2) l_786 = (VECTOR(int64_t, 2))(0x010A5DC7F8D685BBL, 0x0F79D40506DEFD52L);
            int64_t *l_787 = (void*)0;
            int i;
            for (i = 0; i < 3; i++)
                l_764[i] = 0x47L;
            if (l_740)
            { /* block id: 380 */
                volatile union U1 * volatile *l_751 = (void*)0;
                volatile union U1 * volatile *l_752 = &p_966->g_749;
                int32_t l_753[9][7][4] = {{{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L}},{{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L}},{{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L}},{{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L}},{{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L}},{{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L}},{{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L}},{{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L}},{{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L},{0L,0x2C0100C5L,0x7A27710DL,0L}}};
                int32_t *l_754 = &l_753[1][6][3];
                int32_t *l_755 = (void*)0;
                int32_t *l_756 = &p_966->g_89;
                int32_t *l_757 = &l_381[0][6];
                int32_t *l_758 = &p_966->g_89;
                int32_t *l_759 = &l_381[0][1];
                int32_t *l_760 = &p_966->g_89;
                int32_t *l_761 = &p_966->g_89;
                int32_t *l_762 = &l_753[1][2][1];
                int32_t *l_763[4][6][8] = {{{&l_753[1][2][1],&l_381[0][3],&l_753[2][0][0],&l_753[8][4][3],&l_381[0][6],&l_753[1][2][1],&l_753[2][0][0],&l_381[0][6]},{&l_753[1][2][1],&l_381[0][3],&l_753[2][0][0],&l_753[8][4][3],&l_381[0][6],&l_753[1][2][1],&l_753[2][0][0],&l_381[0][6]},{&l_753[1][2][1],&l_381[0][3],&l_753[2][0][0],&l_753[8][4][3],&l_381[0][6],&l_753[1][2][1],&l_753[2][0][0],&l_381[0][6]},{&l_753[1][2][1],&l_381[0][3],&l_753[2][0][0],&l_753[8][4][3],&l_381[0][6],&l_753[1][2][1],&l_753[2][0][0],&l_381[0][6]},{&l_753[1][2][1],&l_381[0][3],&l_753[2][0][0],&l_753[8][4][3],&l_381[0][6],&l_753[1][2][1],&l_753[2][0][0],&l_381[0][6]},{&l_753[1][2][1],&l_381[0][3],&l_753[2][0][0],&l_753[8][4][3],&l_381[0][6],&l_753[1][2][1],&l_753[2][0][0],&l_381[0][6]}},{{&l_753[1][2][1],&l_381[0][3],&l_753[2][0][0],&l_753[8][4][3],&l_381[0][6],&l_753[1][2][1],&l_753[2][0][0],&l_381[0][6]},{&l_753[1][2][1],&l_381[0][3],&l_753[2][0][0],&l_753[8][4][3],&l_381[0][6],&l_753[1][2][1],&l_753[2][0][0],&l_381[0][6]},{&l_753[1][2][1],&l_381[0][3],&l_753[2][0][0],&l_753[8][4][3],&l_381[0][6],&l_753[1][2][1],&l_753[2][0][0],&l_381[0][6]},{&l_753[1][2][1],&l_381[0][3],&l_753[2][0][0],&l_753[8][4][3],&l_381[0][6],&l_753[1][2][1],&l_753[2][0][0],&l_381[0][6]},{&l_753[1][2][1],&l_381[0][3],&l_753[2][0][0],&l_753[8][4][3],&l_381[0][6],&l_753[1][2][1],&l_753[2][0][0],&l_381[0][6]},{&l_753[1][2][1],&l_381[0][3],&l_753[2][0][0],&l_753[8][4][3],&l_381[0][6],&l_753[1][2][1],&l_753[2][0][0],&l_381[0][6]}},{{&l_753[1][2][1],&l_381[0][3],&l_753[2][0][0],&l_753[8][4][3],&l_381[0][6],&l_753[1][2][1],&l_753[2][0][0],&l_381[0][6]},{&l_753[1][2][1],&l_381[0][3],&l_753[2][0][0],&l_753[8][4][3],&l_381[0][6],&l_753[1][2][1],&l_753[2][0][0],&l_381[0][6]},{&l_753[1][2][1],&l_381[0][3],&l_753[2][0][0],&l_753[8][4][3],&l_381[0][6],&l_753[1][2][1],&l_753[2][0][0],&l_381[0][6]},{&l_753[1][2][1],&l_381[0][3],&l_753[2][0][0],&l_753[8][4][3],&l_381[0][6],&l_753[1][2][1],&l_753[2][0][0],&l_381[0][6]},{&l_753[1][2][1],&l_381[0][3],&l_753[2][0][0],&l_753[8][4][3],&l_381[0][6],&l_753[1][2][1],&l_753[2][0][0],&l_381[0][6]},{&l_753[1][2][1],&l_381[0][3],&l_753[2][0][0],&l_753[8][4][3],&l_381[0][6],&l_753[1][2][1],&l_753[2][0][0],&l_381[0][6]}},{{&l_753[1][2][1],&l_381[0][3],&l_753[2][0][0],&l_753[8][4][3],&l_381[0][6],&l_753[1][2][1],&l_753[2][0][0],&l_381[0][6]},{&l_753[1][2][1],&l_381[0][3],&l_753[2][0][0],&l_753[8][4][3],&l_381[0][6],&l_753[1][2][1],&l_753[2][0][0],&l_381[0][6]},{&l_753[1][2][1],&l_381[0][3],&l_753[2][0][0],&l_753[8][4][3],&l_381[0][6],&l_753[1][2][1],&l_753[2][0][0],&l_381[0][6]},{&l_753[1][2][1],&l_381[0][3],&l_753[2][0][0],&l_753[8][4][3],&l_381[0][6],&l_753[1][2][1],&l_753[2][0][0],&l_381[0][6]},{&l_753[1][2][1],&l_381[0][3],&l_753[2][0][0],&l_753[8][4][3],&l_381[0][6],&l_753[1][2][1],&l_753[2][0][0],&l_381[0][6]},{&l_753[1][2][1],&l_381[0][3],&l_753[2][0][0],&l_753[8][4][3],&l_381[0][6],&l_753[1][2][1],&l_753[2][0][0],&l_381[0][6]}}};
                int i, j, k;
                if ((atomic_inc(&p_966->l_atomic_input[60]) == 7))
                { /* block id: 382 */
                    struct S0 l_741 = {9L,1UL,0UL,1UL,0x96EA37A8L,0x17L,0x32D08177L,4294967295UL,0x5B521E845228773FL};/* VOLATILE GLOBAL l_741 */
                    int32_t l_742[1];
                    int32_t l_743 = 0x2975C7C7L;
                    uint8_t l_744 = 0UL;
                    uint64_t l_745 = 0xFA33A8F438CE9A08L;
                    VECTOR(int32_t, 2) l_746 = (VECTOR(int32_t, 2))(0x019B5EA7L, 0L);
                    uint32_t l_747 = 0x55DCA941L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_742[i] = (-1L);
                    l_741 = l_741;
                    l_747 = ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))((l_745 = ((l_743 = l_742[0]) , l_744)), 2L, 1L, 0x5D62E137L)), ((VECTOR(int32_t, 4))(l_746.yyxx))))).w;
                    unsigned int result = 0;
                    result += l_741.f0;
                    result += l_741.f1;
                    result += l_741.f2;
                    result += l_741.f3;
                    result += l_741.f4;
                    result += l_741.f5;
                    result += l_741.f6;
                    result += l_741.f7;
                    result += l_741.f8;
                    int l_742_i0;
                    for (l_742_i0 = 0; l_742_i0 < 1; l_742_i0++) {
                        result += l_742[l_742_i0];
                    }
                    result += l_743;
                    result += l_744;
                    result += l_745;
                    result += l_746.y;
                    result += l_746.x;
                    result += l_747;
                    atomic_add(&p_966->l_special_values[60], result);
                }
                else
                { /* block id: 387 */
                    (1 + 1);
                }
                l_748 = func_52(p_966->g_539.x, p_966);
                (*l_752) = p_966->g_749;
                p_966->g_765++;
            }
            else
            { /* block id: 393 */
                int16_t **l_770[7][3] = {{&l_364,&l_364,&l_364},{&l_364,&l_364,&l_364},{&l_364,&l_364,&l_364},{&l_364,&l_364,&l_364},{&l_364,&l_364,&l_364},{&l_364,&l_364,&l_364},{&l_364,&l_364,&l_364}};
                int8_t *l_788 = (void*)0;
                int8_t *l_789 = &l_740;
                int i, j;
                (*l_748) = (((safe_sub_func_int16_t_s_s(((p_966->g_771 = &p_966->g_459) == l_772), 0xD761L)) || (safe_lshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u(((+((*l_789) = (safe_mod_func_int8_t_s_s(1L, (0xA438AD6BL || (safe_div_func_uint16_t_u_u(((((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 2))(0x5B5BC8D8L, (-4L))).xyyxxxyxxyxxyxxy, (int32_t)p_966->g_357.s9))).s07ce, ((VECTOR(int32_t, 2))(3L, 1L)).xyyx, ((VECTOR(int32_t, 4))(l_783.xxzy))))).hi)).even , (safe_mod_func_int64_t_s_s((+p_966->g_693[3][2][4].f3), 1UL))) || ((*p_966->g_98) = (((((VECTOR(int64_t, 8))(l_786.yyyyxyyx)).s5 , l_787) != p_966->g_440[1][5]) != 65535UL))), l_764[2]))))))) >= 0x5EL), l_15.w)), 5))) || p_966->g_601.s6);
                return p_966->g_447.s1;
            }
            return l_381[0][2];
        }
        --l_807;
        for (p_966->g_91 = 22; (p_966->g_91 >= 28); p_966->g_91 = safe_add_func_uint32_t_u_u(p_966->g_91, 1))
        { /* block id: 405 */
            uint64_t *l_813 = &p_966->g_675;
            uint64_t **l_812 = &l_813;
            uint64_t ***l_814 = (void*)0;
            uint64_t ***l_815[4] = {&l_812,&l_812,&l_812,&l_812};
            VECTOR(int64_t, 16) l_820 = (VECTOR(int64_t, 16))(0x1D4A57AD55CC7EEBL, (VECTOR(int64_t, 4))(0x1D4A57AD55CC7EEBL, (VECTOR(int64_t, 2))(0x1D4A57AD55CC7EEBL, 1L), 1L), 1L, 0x1D4A57AD55CC7EEBL, 1L, (VECTOR(int64_t, 2))(0x1D4A57AD55CC7EEBL, 1L), (VECTOR(int64_t, 2))(0x1D4A57AD55CC7EEBL, 1L), 0x1D4A57AD55CC7EEBL, 1L, 0x1D4A57AD55CC7EEBL, 1L);
            VECTOR(uint32_t, 8) l_826 = (VECTOR(uint32_t, 8))(0xA4570DCBL, (VECTOR(uint32_t, 4))(0xA4570DCBL, (VECTOR(uint32_t, 2))(0xA4570DCBL, 0x682A7715L), 0x682A7715L), 0x682A7715L, 0xA4570DCBL, 0x682A7715L);
            uint8_t l_833 = 2UL;
            uint8_t *l_834 = &p_966->g_693[3][2][4].f1;
            int32_t l_835 = 1L;
            int32_t **l_836 = &l_799;
            int32_t l_837 = 3L;
            int32_t l_838[2];
            int i;
            for (i = 0; i < 2; i++)
                l_838[i] = 0x6C327082L;
            p_966->g_816 = l_812;
            l_835 |= ((p_966->g_651.z , ((*l_834) = (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(rhadd(((VECTOR(int64_t, 8))(p_966->g_818.s7b8d1b8a)).s2623122260311541, ((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(mul_hi(((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 4))(p_966->g_819.zyzz)).lo, ((VECTOR(int64_t, 4))(l_820.s03b0)).even))).yyyyyyxxxyyxyyxy, ((VECTOR(int64_t, 16))(l_381[0][1], (((VECTOR(uint64_t, 16))(mad_hi(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))((safe_mul_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 2))(1UL, 0xC968132F1988B946L)).xyxxyxyxyyxxyxxy, ((VECTOR(uint64_t, 8))(l_825.s35256366)).s4571727737753251))).s1 >= (((((*l_772) = (((*l_794) = ((((((VECTOR(uint32_t, 2))(l_826.s06)).hi & (-1L)) <= l_807) || (((VECTOR(uint64_t, 2))(l_827.s13)).even , (((void*)0 == &p_966->g_201[8][0][2]) >= (l_813 == &p_966->g_201[8][0][2])))) , (safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(p_966->g_216, p_966->g_693[3][2][4].f6)), p_966->g_601.s2)))) < l_15.z)) <= p_966->g_539.y) >= l_832.y) | l_826.s6)), l_833)), 0x34L)), 0x060038FE496121AAL, (**p_966->g_816), ((VECTOR(uint64_t, 2))(1UL)), ((VECTOR(uint64_t, 2))(18446744073709551615UL)), l_826.s5, l_826.s7, ((VECTOR(uint64_t, 4))(5UL)), ((VECTOR(uint64_t, 2))(0x1F1A87FA7C0A1F59L)), 1UL)).s00)).yxxxyyyxyxxyxyyy)))), ((VECTOR(uint64_t, 16))(0x8F5EDDCCA8819972L)), ((VECTOR(uint64_t, 16))(18446744073709551615UL))))).s7 , l_15.w), ((VECTOR(int64_t, 2))(8L)), 0L, ((VECTOR(int64_t, 2))(5L)), p_966->g_441, ((VECTOR(int64_t, 8))(1L))))))).sa977)), ((VECTOR(int64_t, 4))(0x5FE76E06A3CD088FL))))), ((VECTOR(int64_t, 4))((-1L)))))).xwyywzwxzxxzyxwx))).saae6)).y & (**p_966->g_816)))) != p_966->g_539.x);
            (*l_836) = &l_797;
            --l_839[0][0];
        }
    }
    else
    { /* block id: 414 */
        int32_t *l_842[5] = {&l_381[0][2],&l_381[0][2],&l_381[0][2],&l_381[0][2],&l_381[0][2]};
        int i;
        (*p_966->g_844) = l_842[3];
        (*p_966->g_98) = 0x6802D58CL;
        (*p_966->g_846) = p_966->g_749;
    }
    l_870 |= ((((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(p_966->g_847.yxxx)), 18446744073709551614UL, ((VECTOR(uint64_t, 2))(l_848.s54)), 0xD27799FE84BCD17EL)).s0 != (safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(p_966->g_851.s3021)).w, (0L < l_381[0][1])))) , ((((l_622 = l_381[0][4]) ^ (!FAKE_DIVERGE(p_966->group_1_offset, get_group_id(1), 10))) >= (l_868 = ((((safe_rshift_func_int16_t_s_u((p_966->g_854 , (-1L)), 5)) & (safe_mod_func_int8_t_s_s(0x74L, (safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(l_859.s25a0)).y, (l_861 = (l_860 = ((VECTOR(int32_t, 2))(2L, 0x1142D81FL)).lo))))))) == l_381[0][8]) , (((void*)0 != &l_364) < l_862)))) && l_807)) != l_381[0][1]) > 1UL);
    for (p_966->g_459 = 0; (p_966->g_459 <= 21); p_966->g_459++)
    { /* block id: 426 */
        VECTOR(int64_t, 8) l_875 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-6L)), (-6L)), (-6L), (-1L), (-6L));
        uint64_t ***l_877 = &p_966->g_816;
        uint64_t ****l_876[2];
        int i;
        for (i = 0; i < 2; i++)
            l_876[i] = &l_877;
        if (((*p_966->g_98) = (safe_add_func_int64_t_s_s(((VECTOR(int64_t, 16))(l_875.s5733356527613437)).sf, (((p_966->g_878 = (void*)0) != l_879) < ((void*)0 != &p_966->g_201[5][0][2]))))))
        { /* block id: 429 */
            union U1 *l_891[1];
            int32_t l_895 = 0x111E31C9L;
            int i;
            for (i = 0; i < 1; i++)
                l_891[i] = &p_966->g_892;
            for (p_966->g_376 = 0; (p_966->g_376 > (-4)); --p_966->g_376)
            { /* block id: 432 */
                struct S0 ***l_884 = &p_966->g_883;
                struct S0 *l_887 = &p_966->g_693[1][4][0];
                struct S0 **l_886 = &l_887;
                struct S0 ***l_885[2];
                int16_t **l_890 = &l_364;
                int i;
                for (i = 0; i < 2; i++)
                    l_885[i] = &l_886;
                (*p_966->g_882) = p_966->g_693[5][2][4];
                p_966->g_888[3] = ((*l_884) = p_966->g_883);
                p_966->g_894 = ((&p_966->g_771 != (p_966->g_693[3][2][4].f7 , l_890)) , l_891[0]);
                if (l_875.s6)
                    continue;
            }
            (*p_966->g_889) = (*p_966->g_889);
            if (l_895)
                continue;
            if ((atomic_inc(&p_966->g_atomic_input[65 * get_linear_group_id() + 58]) == 4))
            { /* block id: 442 */
                int64_t l_896 = 0L;
                int8_t l_959 = 0L;
                int16_t l_960 = 0L;
                uint16_t l_961 = 1UL;
                if (l_896)
                { /* block id: 443 */
                    uint64_t l_897 = 0xEDF2CCC72FFE04BAL;
                    uint16_t l_910 = 0xB94AL;
                    if (l_897)
                    { /* block id: 444 */
                        uint8_t l_898 = 0x8EL;
                        uint16_t l_899 = 65526UL;
                        uint32_t l_900 = 0x82AF88D9L;
                        uint32_t l_901 = 0xC7E0047CL;
                        l_898 ^= 4L;
                        l_901 = ((VECTOR(int32_t, 8))(l_899, ((VECTOR(int32_t, 2))(0x41C97EF3L, (-1L))), 3L, l_900, 0x0B3FB523L, 0x5BE6346AL, (-1L))).s0;
                    }
                    else
                    { /* block id: 447 */
                        uint32_t l_902 = 0xF462341DL;
                        struct S0 l_905 = {3L,255UL,0xA748933CL,0x80C2C9F9996CC22CL,4294967288UL,0x03L,0UL,9UL,0L};/* VOLATILE GLOBAL l_905 */
                        struct S0 l_906 = {0L,255UL,5UL,1UL,4294967295UL,1L,0UL,4294967292UL,0x77231D872B878F02L};/* VOLATILE GLOBAL l_906 */
                        uint32_t l_907 = 4294967287UL;
                        l_902++;
                        l_906 = l_905;
                        l_907--;
                    }
                    l_910--;
                }
                else
                { /* block id: 453 */
                    VECTOR(int32_t, 8) l_913 = (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x42F0D1F2L), 0x42F0D1F2L), 0x42F0D1F2L, (-4L), 0x42F0D1F2L);
                    VECTOR(int32_t, 4) l_914 = (VECTOR(int32_t, 4))(0x4C305F89L, (VECTOR(int32_t, 2))(0x4C305F89L, (-7L)), (-7L));
                    int32_t l_915 = 0x42483CE4L;
                    int32_t l_916 = (-6L);
                    int8_t l_917 = 0x7AL;
                    VECTOR(uint32_t, 16) l_918 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint32_t, 2))(0UL, 1UL), (VECTOR(uint32_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL);
                    int32_t l_919 = (-4L);
                    uint16_t l_920[4] = {0xCB85L,0xCB85L,0xCB85L,0xCB85L};
                    uint32_t l_921 = 0UL;
                    VECTOR(uint16_t, 8) l_922 = (VECTOR(uint16_t, 8))(0x172CL, (VECTOR(uint16_t, 4))(0x172CL, (VECTOR(uint16_t, 2))(0x172CL, 7UL), 7UL), 7UL, 0x172CL, 7UL);
                    uint32_t l_923 = 4294967295UL;
                    uint64_t l_924[8] = {0xEFD3971D8CF9D26EL,0xEFD3971D8CF9D26EL,0xEFD3971D8CF9D26EL,0xEFD3971D8CF9D26EL,0xEFD3971D8CF9D26EL,0xEFD3971D8CF9D26EL,0xEFD3971D8CF9D26EL,0xEFD3971D8CF9D26EL};
                    struct S0 l_925 = {1L,0x2FL,0xBA7D5DEAL,0UL,0xF9EB3780L,0x3AL,3UL,0xE2329FFBL,0x79561C8ECF791A2EL};/* VOLATILE GLOBAL l_925 */
                    struct S0 l_926 = {0x632BE587L,0xF4L,1UL,18446744073709551608UL,0x6431BA94L,-9L,0x2371E6B4L,0x937762DCL,0x0E4B5AF6CE926FC4L};/* VOLATILE GLOBAL l_926 */
                    struct S0 l_927 = {-1L,0xD8L,0xEC4169DAL,0xED9161A14D673DACL,1UL,-4L,7UL,0x3747D131L,1L};/* VOLATILE GLOBAL l_927 */
                    int i;
                    l_927 = ((((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 2))(l_913.s75)).yyxyxyyx, ((VECTOR(int32_t, 4))(l_914.wzyx)).yyyzxzzy))).s6 , (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(0x75176754L, l_915, ((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(0UL, l_916, (l_917 |= 5UL), ((VECTOR(uint32_t, 16))(l_918.sd01f4785aaf71cd8)).s0, l_919, ((VECTOR(uint32_t, 8))(0UL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 4))(0UL, ((l_920[0] , 0L) , l_921), 0UL, 0x7B71L)).xxwzxwxw, ((VECTOR(uint16_t, 4))(1UL, FAKE_DIVERGE(p_966->local_2_offset, get_local_id(2), 10), 65528UL, 0UL)).xwxzzxxw))).s5707345443646466, ((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 16))(l_922.s2311153412366716)).even, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 4))(0x4C2CL, l_923, 0UL, 1UL)).odd, ((VECTOR(uint16_t, 2))(0xDCA1L))))), 65533UL, 0xEB00L)).ywyxzzxw))).s3551246212313007))))).s87, ((VECTOR(uint16_t, 2))(65535UL))))), ((VECTOR(uint32_t, 2))(3UL))))), 0x945E6762L, 0x41D4FCE1L)))), l_924[4], 0x9FFDB689L, 1UL)), 0x28D1B05DL, 0xACB14AB1L, 1UL)).s27e8)), ((VECTOR(uint32_t, 4))(0x2FA08478L))))).even, ((VECTOR(uint32_t, 2))(4294967291UL))))), GROUP_DIVERGE(1, 1), 5UL, ((VECTOR(uint32_t, 2))(0x75A821D0L)), 1UL, 4294967294UL, 1UL, 0xD0C1C743L, 2UL, 0xC5168377L, 0x23D88A5AL, 0x29998770L)).odd)).s5 , l_925)) , l_926);
                }
                for (l_896 = 0; (l_896 > 18); l_896++)
                { /* block id: 459 */
                    uint64_t l_930 = 8UL;
                    int16_t l_931 = 0x4C66L;
                    uint64_t l_932 = 0x58C547F7651DFE18L;
                    int32_t l_933[5];
                    uint16_t l_934 = 65528UL;
                    uint32_t l_935 = 0x1AE5EC37L;
                    uint32_t l_936 = 0x4291C386L;
                    int32_t l_937 = 0x2CF85303L;
                    int32_t l_956[1][1];
                    uint32_t l_957[3][3][7] = {{{1UL,8UL,0x3268E538L,8UL,1UL,1UL,8UL},{1UL,8UL,0x3268E538L,8UL,1UL,1UL,8UL},{1UL,8UL,0x3268E538L,8UL,1UL,1UL,8UL}},{{1UL,8UL,0x3268E538L,8UL,1UL,1UL,8UL},{1UL,8UL,0x3268E538L,8UL,1UL,1UL,8UL},{1UL,8UL,0x3268E538L,8UL,1UL,1UL,8UL}},{{1UL,8UL,0x3268E538L,8UL,1UL,1UL,8UL},{1UL,8UL,0x3268E538L,8UL,1UL,1UL,8UL},{1UL,8UL,0x3268E538L,8UL,1UL,1UL,8UL}}};
                    int16_t l_958 = 0L;
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_933[i] = (-6L);
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_956[i][j] = (-1L);
                    }
                    l_933[1] ^= (l_932 = (l_931 = l_930));
                    if ((l_934 , (l_937 = (l_936 |= l_935))))
                    { /* block id: 465 */
                        int32_t l_939 = 0x65A7C462L;
                        int32_t *l_938[5][2][1];
                        int32_t *l_940 = &l_939;
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 2; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_938[i][j][k] = &l_939;
                            }
                        }
                        l_940 = l_938[0][1][0];
                    }
                    else
                    { /* block id: 467 */
                        int32_t l_941 = 0x3C8BA569L;
                        int32_t l_942 = 0x3BAE673BL;
                        struct S0 l_943 = {0x5EAF5ED5L,6UL,0x75B87BFFL,18446744073709551611UL,4294967294UL,-1L,1UL,4UL,0L};/* VOLATILE GLOBAL l_943 */
                        struct S0 l_944 = {0x6F6C8E0DL,4UL,0x98D14440L,2UL,0x461789CFL,-1L,4294967295UL,0UL,-4L};/* VOLATILE GLOBAL l_944 */
                        uint64_t l_945 = 8UL;
                        int16_t l_946 = 0x0F4CL;
                        VECTOR(int8_t, 2) l_947 = (VECTOR(int8_t, 2))(0x03L, 0x3AL);
                        int32_t *l_948 = (void*)0;
                        int16_t l_949 = 0x2449L;
                        int16_t l_950[7] = {1L,0x1459L,1L,1L,0x1459L,1L,1L};
                        int32_t l_951 = 0x7B14709CL;
                        int64_t l_952 = 0x31CE95A956886B39L;
                        int8_t l_953 = (-1L);
                        uint32_t l_954 = 0x3D9A7684L;
                        int32_t l_955 = 0x4BEC2960L;
                        int i;
                        l_944 = ((l_941 = 4UL) , (l_942 , l_943));
                        l_948 = (((l_945 , l_946) , l_947.x) , (void*)0);
                        l_955 |= (l_954 = (l_953 = (l_952 = (l_951 &= ((VECTOR(int32_t, 8))((l_933[2] ^= (l_949 , l_950[2])), 0x375049B5L, ((VECTOR(int32_t, 4))(1L, 1L, 0x5079C40CL, 0x60D37558L)), (-1L), 3L)).s5))));
                    }
                    l_958 = (l_956[0][0] , l_957[2][2][1]);
                }
                l_961--;
                unsigned int result = 0;
                result += l_896;
                result += l_959;
                result += l_960;
                result += l_961;
                atomic_add(&p_966->g_special_values[65 * get_linear_group_id() + 58], result);
            }
            else
            { /* block id: 481 */
                (1 + 1);
            }
        }
        else
        { /* block id: 484 */
            int64_t l_964 = 1L;
            (*p_966->g_889) = (*p_966->g_889);
            if (l_964)
                break;
            (*p_966->g_889) = p_966->g_965;
            (*p_966->g_98) &= l_875.s2;
        }
    }
    return p_966->g_201[8][0][2];
}


/* ------------------------------------------ */
/* 
 * reads : p_966->g_460
 * writes: p_966->g_460
 */
int32_t  func_2(int16_t  p_3, uint16_t  p_4, uint32_t  p_5, struct S2 * p_966)
{ /* block id: 332 */
    int64_t *l_628 = (void*)0;
    int64_t **l_627[5];
    int32_t l_642[3][3][3] = {{{0x5F7B112DL,0L,0x7FF16868L},{0x5F7B112DL,0L,0x7FF16868L},{0x5F7B112DL,0L,0x7FF16868L}},{{0x5F7B112DL,0L,0x7FF16868L},{0x5F7B112DL,0L,0x7FF16868L},{0x5F7B112DL,0L,0x7FF16868L}},{{0x5F7B112DL,0L,0x7FF16868L},{0x5F7B112DL,0L,0x7FF16868L},{0x5F7B112DL,0L,0x7FF16868L}}};
    int32_t l_664 = 7L;
    uint8_t l_728 = 0x3EL;
    int32_t *l_731 = (void*)0;
    int32_t *l_732 = (void*)0;
    int32_t *l_733[9][8] = {{&l_642[0][0][1],&l_642[0][0][1],&l_664,(void*)0,&p_966->g_89,(void*)0,&l_664,&l_642[0][0][1]},{&l_642[0][0][1],&l_642[0][0][1],&l_664,(void*)0,&p_966->g_89,(void*)0,&l_664,&l_642[0][0][1]},{&l_642[0][0][1],&l_642[0][0][1],&l_664,(void*)0,&p_966->g_89,(void*)0,&l_664,&l_642[0][0][1]},{&l_642[0][0][1],&l_642[0][0][1],&l_664,(void*)0,&p_966->g_89,(void*)0,&l_664,&l_642[0][0][1]},{&l_642[0][0][1],&l_642[0][0][1],&l_664,(void*)0,&p_966->g_89,(void*)0,&l_664,&l_642[0][0][1]},{&l_642[0][0][1],&l_642[0][0][1],&l_664,(void*)0,&p_966->g_89,(void*)0,&l_664,&l_642[0][0][1]},{&l_642[0][0][1],&l_642[0][0][1],&l_664,(void*)0,&p_966->g_89,(void*)0,&l_664,&l_642[0][0][1]},{&l_642[0][0][1],&l_642[0][0][1],&l_664,(void*)0,&p_966->g_89,(void*)0,&l_664,&l_642[0][0][1]},{&l_642[0][0][1],&l_642[0][0][1],&l_664,(void*)0,&p_966->g_89,(void*)0,&l_664,&l_642[0][0][1]}};
    int32_t l_734 = 1L;
    uint64_t l_735 = 0x00A3F47C69281CFCL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_627[i] = &l_628;
    for (p_5 = (-14); (p_5 <= 1); p_5 = safe_add_func_uint32_t_u_u(p_5, 7))
    { /* block id: 335 */
        int64_t *l_626 = &p_966->g_91;
        int64_t **l_625 = &l_626;
        l_627[4] = l_625;
    }
    for (p_966->g_460 = 0; (p_966->g_460 > 6); p_966->g_460++)
    { /* block id: 340 */
        uint32_t *l_631 = &p_966->g_367;
        int32_t l_636 = (-2L);
        uint32_t l_637[4] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL};
        VECTOR(uint64_t, 8) l_650 = (VECTOR(uint64_t, 8))(0xB1A48D202E66F75DL, (VECTOR(uint64_t, 4))(0xB1A48D202E66F75DL, (VECTOR(uint64_t, 2))(0xB1A48D202E66F75DL, 1UL), 1UL), 1UL, 0xB1A48D202E66F75DL, 1UL);
        VECTOR(int16_t, 2) l_689 = (VECTOR(int16_t, 2))((-4L), 6L);
        VECTOR(int8_t, 4) l_696 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-8L)), (-8L));
        VECTOR(int8_t, 2) l_697 = (VECTOR(int8_t, 2))(7L, 0L);
        int32_t l_713[8][6] = {{0x0A161671L,(-7L),0x0A161671L,0x0A161671L,(-7L),0x0A161671L},{0x0A161671L,(-7L),0x0A161671L,0x0A161671L,(-7L),0x0A161671L},{0x0A161671L,(-7L),0x0A161671L,0x0A161671L,(-7L),0x0A161671L},{0x0A161671L,(-7L),0x0A161671L,0x0A161671L,(-7L),0x0A161671L},{0x0A161671L,(-7L),0x0A161671L,0x0A161671L,(-7L),0x0A161671L},{0x0A161671L,(-7L),0x0A161671L,0x0A161671L,(-7L),0x0A161671L},{0x0A161671L,(-7L),0x0A161671L,0x0A161671L,(-7L),0x0A161671L},{0x0A161671L,(-7L),0x0A161671L,0x0A161671L,(-7L),0x0A161671L}};
        uint32_t l_715 = 0UL;
        int32_t *l_725 = &l_664;
        int32_t *l_726 = &l_713[1][4];
        int32_t *l_727[1][5][9] = {{{(void*)0,&l_713[6][4],(void*)0,(void*)0,&l_713[6][4],(void*)0,(void*)0,&l_713[6][4],(void*)0},{(void*)0,&l_713[6][4],(void*)0,(void*)0,&l_713[6][4],(void*)0,(void*)0,&l_713[6][4],(void*)0},{(void*)0,&l_713[6][4],(void*)0,(void*)0,&l_713[6][4],(void*)0,(void*)0,&l_713[6][4],(void*)0},{(void*)0,&l_713[6][4],(void*)0,(void*)0,&l_713[6][4],(void*)0,(void*)0,&l_713[6][4],(void*)0},{(void*)0,&l_713[6][4],(void*)0,(void*)0,&l_713[6][4],(void*)0,(void*)0,&l_713[6][4],(void*)0}}};
        int i, j, k;
        (1 + 1);
    }
    ++l_735;
    return p_4;
}


/* ------------------------------------------ */
/* 
 * reads : p_966->g_447 p_966->g_198 p_966->g_98 p_966->g_89 p_966->g_576 p_966->g_65 p_966->g_593 p_966->g_601 p_966->g_539 p_966->g_comm_values p_966->g_67
 * writes: p_966->g_198 p_966->g_89 p_966->g_98 p_966->g_448
 */
uint32_t  func_16(int64_t  p_17, int64_t  p_18, int32_t  p_19, int8_t  p_20, int32_t  p_21, struct S2 * p_966)
{ /* block id: 306 */
    VECTOR(int64_t, 4) l_571 = (VECTOR(int64_t, 4))(0x377274C8D84BCC44L, (VECTOR(int64_t, 2))(0x377274C8D84BCC44L, (-1L)), (-1L));
    uint64_t *l_572 = &p_966->g_198;
    int32_t *l_573 = &p_966->g_89;
    VECTOR(int32_t, 2) l_578 = (VECTOR(int32_t, 2))((-1L), 0x6187876CL);
    VECTOR(int64_t, 2) l_592 = (VECTOR(int64_t, 2))(0x348BBEEBA714A7F8L, 0x0961CDD0F400D5EBL);
    VECTOR(int64_t, 2) l_594 = (VECTOR(int64_t, 2))(0L, 6L);
    VECTOR(int64_t, 4) l_604 = (VECTOR(int64_t, 4))(0x39650C116BFF4D91L, (VECTOR(int64_t, 2))(0x39650C116BFF4D91L, 0x20EF3F89BC4F738EL), 0x20EF3F89BC4F738EL);
    VECTOR(int8_t, 16) l_609 = (VECTOR(int8_t, 16))((-6L), (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), 0L), 0L), 0L, (-6L), 0L, (VECTOR(int8_t, 2))((-6L), 0L), (VECTOR(int8_t, 2))((-6L), 0L), (-6L), 0L, (-6L), 0L);
    int i;
    if ((((safe_lshift_func_int16_t_s_s(p_17, 11)) , ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(l_571.zyzwyxxx)).s2471123472063301)).s9) && ((*l_572) |= p_966->g_447.se)))
    { /* block id: 308 */
        int32_t **l_574 = &p_966->g_98;
        VECTOR(uint32_t, 4) l_575 = (VECTOR(uint32_t, 4))(0xC765149AL, (VECTOR(uint32_t, 2))(0xC765149AL, 0xAC08895DL), 0xAC08895DL);
        VECTOR(int32_t, 8) l_577 = (VECTOR(int32_t, 8))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, (-5L)), (-5L)), (-5L), 6L, (-5L));
        VECTOR(int64_t, 16) l_581 = (VECTOR(int64_t, 16))(4L, (VECTOR(int64_t, 4))(4L, (VECTOR(int64_t, 2))(4L, 0x398B35AB75A38078L), 0x398B35AB75A38078L), 0x398B35AB75A38078L, 4L, 0x398B35AB75A38078L, (VECTOR(int64_t, 2))(4L, 0x398B35AB75A38078L), (VECTOR(int64_t, 2))(4L, 0x398B35AB75A38078L), 4L, 0x398B35AB75A38078L, 4L, 0x398B35AB75A38078L);
        int64_t *l_582 = (void*)0;
        int64_t *l_583 = (void*)0;
        int64_t *l_584 = (void*)0;
        int64_t *l_585[1][4][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        VECTOR(int64_t, 16) l_602 = (VECTOR(int64_t, 16))(0x2AD5AB7AA9D2AA6FL, (VECTOR(int64_t, 4))(0x2AD5AB7AA9D2AA6FL, (VECTOR(int64_t, 2))(0x2AD5AB7AA9D2AA6FL, (-1L)), (-1L)), (-1L), 0x2AD5AB7AA9D2AA6FL, (-1L), (VECTOR(int64_t, 2))(0x2AD5AB7AA9D2AA6FL, (-1L)), (VECTOR(int64_t, 2))(0x2AD5AB7AA9D2AA6FL, (-1L)), 0x2AD5AB7AA9D2AA6FL, (-1L), 0x2AD5AB7AA9D2AA6FL, (-1L));
        VECTOR(int64_t, 16) l_603 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x3E0E047D31E00E8CL), 0x3E0E047D31E00E8CL), 0x3E0E047D31E00E8CL, 0L, 0x3E0E047D31E00E8CL, (VECTOR(int64_t, 2))(0L, 0x3E0E047D31E00E8CL), (VECTOR(int64_t, 2))(0L, 0x3E0E047D31E00E8CL), 0L, 0x3E0E047D31E00E8CL, 0L, 0x3E0E047D31E00E8CL);
        int64_t l_610 = (-10L);
        uint64_t l_611 = 0x4CBE120C59CB2D1EL;
        int i, j, k;
        (*p_966->g_98) ^= l_571.x;
        (*l_574) = l_573;
        (**l_574) = ((((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(l_575.yxyxzxww)))))).s1 || ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_966->g_576.s2171)).w, 0x67993426L, ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 8))(l_577.s56222351)).lo, ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 8))(l_578.xxxyyxxx)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x3FCA9363L, (-9L))), 0x45A5EF8CL, 0x4E2C58FAL)))).odd, (int32_t)(p_21 ^= (safe_mul_func_uint16_t_u_u((p_966->g_65.s2 != p_17), ((**l_574) | (p_966->g_448.s1 = ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(l_581.sab5c1c1ececf2d6e)).s7186)).hi)).xyyxxxyyxyxxyyxy)).s9)))))))), 1L, 0x07D977C8L)).wxyzwyzz))))).odd))), 0x31D9B47EL, (-1L))).odd)).odd)), (safe_div_func_int64_t_s_s(((safe_add_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 8))(abs_diff(((VECTOR(int64_t, 4))(l_592.xxxx)).zxyyxzzx, ((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),int64_t,((VECTOR(int64_t, 16))(rhadd(((VECTOR(int64_t, 16))(p_966->g_593.s5240637603734360)), ((VECTOR(int64_t, 4))(l_594.yyxy)).zywwywwxxwwyywxy))), (int64_t)((((safe_add_func_uint64_t_u_u(GROUP_DIVERGE(2, 1), (+(safe_sub_func_uint32_t_u_u((p_18 < (safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(0x37A56C9A58368AC0L, ((VECTOR(int64_t, 4))(p_966->g_601.s7274)).w, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(mad_sat(((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 2))(l_602.s00)).xyyx))).zwxyzyyxxxywxywx, ((VECTOR(int64_t, 16))(l_603.s590282b9d2a61cee)), ((VECTOR(int64_t, 8))(l_604.zyxzyyyx)).s6373621314036500))).s84b7)), (-1L), 0x0ECE53E0F838C1F2L)).hi)).w, (((p_18 || ((safe_rshift_func_uint8_t_u_u(p_966->g_539.y, 7)) == (safe_lshift_func_int8_t_s_u((p_19 , ((VECTOR(int8_t, 2))(l_609.s51)).even), 5)))) != l_610) && (-1L))))), (*l_573)))))) > p_18) == (*l_573)) ^ 0x5EC8D8F4L), (int64_t)(**l_574)))).lo))).s60, ((VECTOR(uint64_t, 2))(0x414EFE0838DAD375L)), ((VECTOR(uint64_t, 2))(0xAB18FE55D7439A40L))))).odd, p_966->g_comm_values[p_966->tid])) <= l_611), p_18)) != p_966->g_comm_values[p_966->tid]), 0x37C6904C5837D2F7L)), 7L, 1L, ((VECTOR(int32_t, 4))(0x43E305F9L)), ((VECTOR(int32_t, 2))(7L)), ((VECTOR(int32_t, 2))(0x2396DC2CL)), ((VECTOR(int32_t, 2))(0x6DB53D4EL)), 5L)).s7) != p_966->g_comm_values[p_966->tid]) <= FAKE_DIVERGE(p_966->local_1_offset, get_local_id(1), 10)) || p_966->g_67.s3);
    }
    else
    { /* block id: 314 */
        VECTOR(int32_t, 4) l_612 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L);
        int i;
        atomic_or(&p_966->l_atomic_reduction[0], ((&p_966->g_91 == &p_18) , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_612.xyxxzzwyxxyxzxxz)).se53f)).xxwxyxxz)).s6) + get_linear_global_id());
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_966->v_collective += p_966->l_atomic_reduction[0];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    }
    if ((atomic_inc(&p_966->l_atomic_input[51]) == 1))
    { /* block id: 318 */
        uint16_t l_613 = 0xD92AL;
        int16_t l_614 = 0x2EC2L;
        int8_t l_615 = 1L;
        uint64_t l_616[8];
        int32_t *l_617 = (void*)0;
        int32_t l_619 = 0x68282419L;
        int32_t *l_618 = &l_619;
        int32_t *l_620[9] = {&l_619,&l_619,&l_619,&l_619,&l_619,&l_619,&l_619,&l_619,&l_619};
        int32_t *l_621 = &l_619;
        int i;
        for (i = 0; i < 8; i++)
            l_616[i] = 0xEF1D1E84D669DA42L;
        l_614 |= l_613;
        l_615 = (-6L);
        l_616[2] = 1L;
        l_621 = (l_620[1] = (((VECTOR(uint32_t, 2))(4294967295UL, 5UL)).hi , (l_618 = l_617)));
        unsigned int result = 0;
        result += l_613;
        result += l_614;
        result += l_615;
        int l_616_i0;
        for (l_616_i0 = 0; l_616_i0 < 8; l_616_i0++) {
            result += l_616[l_616_i0];
        }
        result += l_619;
        atomic_add(&p_966->l_special_values[51], result);
    }
    else
    { /* block id: 325 */
        (1 + 1);
    }
    p_21 ^= ((*p_966->g_98) |= p_20);
    l_573 = &p_21;
    return p_21;
}


/* ------------------------------------------ */
/* 
 * reads : p_966->g_365 p_966->g_216 p_966->g_460 p_966->g_201 p_966->g_67 p_966->g_89 p_966->g_51 p_966->g_98
 * writes: p_966->g_98 p_966->g_365 p_966->g_216 p_966->g_357 p_966->g_97
 */
int64_t  func_22(int64_t  p_23, int32_t  p_24, uint8_t  p_25, struct S2 * p_966)
{ /* block id: 260 */
    int32_t *l_463 = &p_966->g_89;
    int32_t **l_464 = (void*)0;
    int32_t **l_465 = &l_463;
    int32_t **l_466 = (void*)0;
    int32_t **l_467 = &p_966->g_98;
    int64_t *l_564 = &p_966->g_91;
    int64_t **l_563[7] = {&l_564,&l_564,&l_564,&l_564,&l_564,&l_564,&l_564};
    int i;
    (*l_467) = ((*l_465) = l_463);
    for (p_966->g_365 = 0; (p_966->g_365 > 27); ++p_966->g_365)
    { /* block id: 265 */
        VECTOR(int32_t, 8) l_472 = (VECTOR(int32_t, 8))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 1L), 1L), 1L, (-5L), 1L);
        int32_t *l_523 = (void*)0;
        VECTOR(int8_t, 2) l_531 = (VECTOR(int8_t, 2))(0L, 0x03L);
        int32_t **l_560[8][5] = {{&l_463,&p_966->g_98,&p_966->g_98,&l_463,&l_463},{&l_463,&p_966->g_98,&p_966->g_98,&l_463,&l_463},{&l_463,&p_966->g_98,&p_966->g_98,&l_463,&l_463},{&l_463,&p_966->g_98,&p_966->g_98,&l_463,&l_463},{&l_463,&p_966->g_98,&p_966->g_98,&l_463,&l_463},{&l_463,&p_966->g_98,&p_966->g_98,&l_463,&l_463},{&l_463,&p_966->g_98,&p_966->g_98,&l_463,&l_463},{&l_463,&p_966->g_98,&p_966->g_98,&l_463,&l_463}};
        int32_t *l_566 = &p_966->g_216;
        int i, j;
        for (p_966->g_216 = 0; (p_966->g_216 == (-14)); --p_966->g_216)
        { /* block id: 268 */
            uint8_t l_524 = 251UL;
            VECTOR(int16_t, 8) l_538 = (VECTOR(int16_t, 8))(0x13E6L, (VECTOR(int16_t, 4))(0x13E6L, (VECTOR(int16_t, 2))(0x13E6L, 0x5FE6L), 0x5FE6L), 0x5FE6L, 0x13E6L, 0x5FE6L);
            uint64_t *l_558 = &p_966->g_198;
            int32_t l_559[2][2][3] = {{{0x1AFFBA6FL,1L,0x1AFFBA6FL},{0x1AFFBA6FL,1L,0x1AFFBA6FL}},{{0x1AFFBA6FL,1L,0x1AFFBA6FL},{0x1AFFBA6FL,1L,0x1AFFBA6FL}}};
            int32_t l_561 = 0x509953ACL;
            int32_t l_562 = 5L;
            int32_t l_565 = 0x7CF771E9L;
            int i, j, k;
            (1 + 1);
        }
        l_566 = func_52(p_966->g_460, p_966);
    }
    return (**l_467);
}


/* ------------------------------------------ */
/* 
 * reads : p_966->g_201 p_966->g_438 p_966->g_439 p_966->g_447 p_966->g_448 p_966->g_98 p_966->g_67 p_966->g_460
 * writes: p_966->g_97 p_966->g_458 p_966->g_89 p_966->g_216 p_966->g_459 p_966->g_438
 */
int32_t  func_26(int8_t  p_27, uint32_t  p_28, struct S2 * p_966)
{ /* block id: 200 */
    int16_t l_426 = 0x724BL;
    VECTOR(uint16_t, 8) l_435 = (VECTOR(uint16_t, 8))(0x63CFL, (VECTOR(uint16_t, 4))(0x63CFL, (VECTOR(uint16_t, 2))(0x63CFL, 1UL), 1UL), 1UL, 0x63CFL, 1UL);
    int64_t *l_437 = &p_966->g_91;
    int64_t **l_436 = &l_437;
    VECTOR(int64_t, 4) l_449 = (VECTOR(int64_t, 4))(0x36406CD2A6AC0092L, (VECTOR(int64_t, 2))(0x36406CD2A6AC0092L, 0x64074CCCD61FAC69L), 0x64074CCCD61FAC69L);
    int32_t ***l_456[9];
    int32_t **l_457 = (void*)0;
    uint32_t l_461 = 0xDE33565DL;
    int32_t l_462 = (-1L);
    int i;
    for (i = 0; i < 9; i++)
        l_456[i] = &p_966->g_97;
    if ((atomic_inc(&p_966->l_atomic_input[37]) == 8))
    { /* block id: 202 */
        int32_t l_382 = (-1L);
        for (l_382 = (-14); (l_382 <= (-17)); --l_382)
        { /* block id: 205 */
            int32_t l_385[5];
            int32_t *l_422 = &l_385[4];
            uint8_t l_423 = 0xF4L;
            int32_t l_424 = 0x41FFC74EL;
            int64_t l_425 = 0x0CB1E2F8527D49A9L;
            int i;
            for (i = 0; i < 5; i++)
                l_385[i] = 0L;
            if (l_385[4])
            { /* block id: 206 */
                int32_t l_386 = 0x749F2563L;
                VECTOR(int64_t, 8) l_401 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x24FD4113B70C7615L), 0x24FD4113B70C7615L), 0x24FD4113B70C7615L, (-1L), 0x24FD4113B70C7615L);
                int64_t *l_400 = (void*)0;
                int64_t **l_399 = &l_400;
                int64_t **l_402 = (void*)0;
                int i;
                for (l_386 = 0; (l_386 < (-23)); l_386--)
                { /* block id: 209 */
                    int64_t l_389 = 0x70F29F923C52B2F4L;
                    int32_t l_390 = 0x4518BF8BL;
                    int16_t l_391 = 0x1FE5L;
                    uint64_t l_392[9][4] = {{0UL,0x07B9D86AEEF9496CL,0x07B9D86AEEF9496CL,0UL},{0UL,0x07B9D86AEEF9496CL,0x07B9D86AEEF9496CL,0UL},{0UL,0x07B9D86AEEF9496CL,0x07B9D86AEEF9496CL,0UL},{0UL,0x07B9D86AEEF9496CL,0x07B9D86AEEF9496CL,0UL},{0UL,0x07B9D86AEEF9496CL,0x07B9D86AEEF9496CL,0UL},{0UL,0x07B9D86AEEF9496CL,0x07B9D86AEEF9496CL,0UL},{0UL,0x07B9D86AEEF9496CL,0x07B9D86AEEF9496CL,0UL},{0UL,0x07B9D86AEEF9496CL,0x07B9D86AEEF9496CL,0UL},{0UL,0x07B9D86AEEF9496CL,0x07B9D86AEEF9496CL,0UL}};
                    int32_t *l_393[8] = {&l_390,&l_390,&l_390,&l_390,&l_390,&l_390,&l_390,&l_390};
                    int32_t *l_394 = &l_390;
                    int8_t l_395 = 0x7DL;
                    int64_t l_398 = 0x06305D6EF3A2CEB7L;
                    int64_t *l_397[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int64_t **l_396 = &l_397[3];
                    int i, j;
                    l_394 = ((l_391 = (l_389 , l_390)) , (l_392[1][1] , l_393[6]));
                    l_396 = (l_395 , (void*)0);
                    l_385[4] = 0x5A453FDDL;
                }
                l_402 = (l_399 = (void*)0);
            }
            else
            { /* block id: 217 */
                int16_t l_403 = 0x01AFL;
                int16_t l_421[8][6][2] = {{{1L,0x565BL},{1L,0x565BL},{1L,0x565BL},{1L,0x565BL},{1L,0x565BL},{1L,0x565BL}},{{1L,0x565BL},{1L,0x565BL},{1L,0x565BL},{1L,0x565BL},{1L,0x565BL},{1L,0x565BL}},{{1L,0x565BL},{1L,0x565BL},{1L,0x565BL},{1L,0x565BL},{1L,0x565BL},{1L,0x565BL}},{{1L,0x565BL},{1L,0x565BL},{1L,0x565BL},{1L,0x565BL},{1L,0x565BL},{1L,0x565BL}},{{1L,0x565BL},{1L,0x565BL},{1L,0x565BL},{1L,0x565BL},{1L,0x565BL},{1L,0x565BL}},{{1L,0x565BL},{1L,0x565BL},{1L,0x565BL},{1L,0x565BL},{1L,0x565BL},{1L,0x565BL}},{{1L,0x565BL},{1L,0x565BL},{1L,0x565BL},{1L,0x565BL},{1L,0x565BL},{1L,0x565BL}},{{1L,0x565BL},{1L,0x565BL},{1L,0x565BL},{1L,0x565BL},{1L,0x565BL},{1L,0x565BL}}};
                int i, j, k;
                l_385[3] = l_403;
                for (l_403 = 14; (l_403 == 9); --l_403)
                { /* block id: 221 */
                    int32_t l_412[8][5] = {{0x05484A3FL,0x6EB6EA5EL,0L,(-1L),0L},{0x05484A3FL,0x6EB6EA5EL,0L,(-1L),0L},{0x05484A3FL,0x6EB6EA5EL,0L,(-1L),0L},{0x05484A3FL,0x6EB6EA5EL,0L,(-1L),0L},{0x05484A3FL,0x6EB6EA5EL,0L,(-1L),0L},{0x05484A3FL,0x6EB6EA5EL,0L,(-1L),0L},{0x05484A3FL,0x6EB6EA5EL,0L,(-1L),0L},{0x05484A3FL,0x6EB6EA5EL,0L,(-1L),0L}};
                    int32_t *l_411 = &l_412[5][1];
                    int32_t *l_413 = &l_412[5][1];
                    int8_t l_414 = (-1L);
                    VECTOR(int64_t, 16) l_415 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x4A2C602348A51667L), 0x4A2C602348A51667L), 0x4A2C602348A51667L, 1L, 0x4A2C602348A51667L, (VECTOR(int64_t, 2))(1L, 0x4A2C602348A51667L), (VECTOR(int64_t, 2))(1L, 0x4A2C602348A51667L), 1L, 0x4A2C602348A51667L, 1L, 0x4A2C602348A51667L);
                    int i, j;
                    if (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x7FB32BE0L, (-8L))), 0x1844047BL, 0x3B07E92FL)).z)
                    { /* block id: 222 */
                        int8_t l_406 = (-1L);
                        l_385[4] ^= 0x05FC0F28L;
                        l_385[4] ^= l_406;
                    }
                    else
                    { /* block id: 225 */
                        int32_t l_409 = (-7L);
                        int32_t *l_408[5];
                        int32_t **l_407[1];
                        int32_t **l_410 = &l_408[3];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_408[i] = &l_409;
                        for (i = 0; i < 1; i++)
                            l_407[i] = &l_408[1];
                        l_410 = (l_407[0] = (void*)0);
                    }
                    l_413 = l_411;
                    if ((((VECTOR(int64_t, 8))(sub_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(l_414, ((VECTOR(int64_t, 4))((-7L), ((VECTOR(int64_t, 8))(0x4F0EC56878A801EFL, 0x16C75E86B153D8A2L, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(l_415.se6c489c0ed1a079e)))).s2015)), 0x2ACC893185EA165CL, 0L)).s6, (-10L), (-1L))), ((VECTOR(int64_t, 2))((-9L), 0x5CDDFC5413F15AACL)), 0x3AC7AD3C1E511F28L)).s7036412127102435)).lo, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(0x593E94A5BC5E591BL, 0L, (-2L), 0x7CB6BE4E0851EC8FL)).zyyyxxxyzxxywyyy)).hi))).s6 , (-6L)))
                    { /* block id: 230 */
                        int8_t l_416 = 1L;
                        VECTOR(int32_t, 8) l_417 = (VECTOR(int32_t, 8))(0x18471121L, (VECTOR(int32_t, 4))(0x18471121L, (VECTOR(int32_t, 2))(0x18471121L, (-6L)), (-6L)), (-6L), 0x18471121L, (-6L));
                        uint32_t l_418 = 3UL;
                        int16_t l_419 = 0x5812L;
                        int i;
                        (*l_413) = (l_416 , ((VECTOR(int32_t, 16))(l_417.s3127650221031500)).se);
                        (*l_413) |= l_418;
                        (*l_413) = l_419;
                    }
                    else
                    { /* block id: 234 */
                        VECTOR(int8_t, 2) l_420 = (VECTOR(int8_t, 2))((-1L), (-1L));
                        int i;
                        (*l_413) ^= (GROUP_DIVERGE(2, 1) , l_420.y);
                    }
                }
                l_385[4] &= l_421[2][3][0];
            }
            l_385[2] = 0x1E4962F4L;
            l_422 = (void*)0;
            l_425 = (l_424 &= l_423);
        }
        unsigned int result = 0;
        result += l_382;
        atomic_add(&p_966->l_special_values[37], result);
    }
    else
    { /* block id: 245 */
        (1 + 1);
    }
    p_966->g_438.y = ((l_426 && (safe_mul_func_uint8_t_u_u(((safe_mod_func_int64_t_s_s(p_966->g_201[0][0][0], (safe_sub_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(l_435.s01420103)).s2, 15)), p_28)))) == l_435.s7), ((l_436 = l_436) != (((VECTOR(int32_t, 2))(p_966->g_438.xy)).lo , p_966->g_439))))) ^ ((safe_add_func_int64_t_s_s(((VECTOR(int64_t, 8))(rhadd(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(hadd(((VECTOR(int64_t, 16))(p_966->g_447.s4161e4228d92066d)).hi, ((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 16))(0L, 1L, (-6L), p_966->g_201[2][0][2], (FAKE_DIVERGE(p_966->global_2_offset, get_global_id(2), 10) , ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(p_966->g_448.s6716)), ((VECTOR(int64_t, 2))(l_449.zy)), 0x4A0AAD10D603B305L, 0L)).hi)).w), (((p_966->g_459 = ((VECTOR(int32_t, 8))((p_966->g_216 = (safe_add_func_uint8_t_u_u((safe_div_func_int64_t_s_s((safe_sub_func_int32_t_s_s(((*p_966->g_98) = (((p_966->g_97 = (l_457 = (void*)0)) == (p_966->g_458[4][3] = &p_966->g_98)) && 1UL)), p_966->g_67.s6)), p_27)), p_28))), ((VECTOR(int32_t, 4))(1L)), ((VECTOR(int32_t, 2))(0x4C149F11L)), (-1L))).s3) , (void*)0) == &p_966->g_440[0][5]), 1L, ((VECTOR(int64_t, 4))(0x5C189666E385824EL)), p_966->g_460, ((VECTOR(int64_t, 4))(0x077C88E03CC5A4AFL)))).sa983, ((VECTOR(int64_t, 4))(0L))))).wzyyxzyy))).s3340037673510220)).s2edf, ((VECTOR(int64_t, 4))(0x27329EC49B44A564L)), ((VECTOR(int64_t, 4))((-10L)))))).zzywyyzy, ((VECTOR(int64_t, 8))(0x2E698B661A6796F0L)), ((VECTOR(int64_t, 8))(0x4EE95F5B1743C079L))))).s07)).yyyyxxyx, ((VECTOR(int64_t, 8))(0x5D322E91BC73AD06L))))).s4, 0x373430AFE179C9CCL)) < 65535UL));
    l_462 &= (l_461 = ((*p_966->g_98) = p_28));
    return p_966->g_67.s8;
}


/* ------------------------------------------ */
/* 
 * reads : p_966->g_98 p_966->g_89 p_966->g_65
 * writes: p_966->g_89
 */
int64_t  func_29(uint8_t  p_30, int32_t  p_31, int64_t  p_32, int32_t  p_33, struct S2 * p_966)
{ /* block id: 186 */
    int32_t l_380 = (-3L);
    (*p_966->g_98) = ((safe_lshift_func_int8_t_s_u(p_31, 1)) , p_33);
    for (p_32 = 0; (p_32 != (-27)); p_32--)
    { /* block id: 190 */
        int32_t *l_375[1][4] = {{(void*)0,(void*)0,(void*)0,(void*)0}};
        uint8_t l_377 = 0x73L;
        int i, j;
        --l_377;
        p_33 |= (*p_966->g_98);
        if ((*p_966->g_98))
            break;
        p_33 = ((*p_966->g_98) ^= p_30);
    }
    l_380 = (GROUP_DIVERGE(0, 1) || (~p_30));
    return p_966->g_65.s2;
}


/* ------------------------------------------ */
/* 
 * reads : p_966->g_98 p_966->g_67
 * writes: p_966->g_89
 */
int64_t  func_38(uint32_t  p_39, uint8_t  p_40, uint32_t  p_41, int32_t  p_42, int64_t  p_43, struct S2 * p_966)
{ /* block id: 178 */
    int32_t ***l_370 = (void*)0;
    for (p_40 = (-30); (p_40 < 27); ++p_40)
    { /* block id: 181 */
        (*p_966->g_98) = 0x5252EDA2L;
    }
    atomic_and(&p_966->l_atomic_reduction[0], (l_370 != l_370) + get_linear_global_id());
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_966->v_collective += p_966->l_atomic_reduction[0];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    return p_966->g_67.s9;
}


/* ------------------------------------------ */
/* 
 * reads : p_966->g_65 p_966->g_67 p_966->l_comm_values p_966->g_89 p_966->g_51 p_966->g_91 p_966->g_97 p_966->g_98 p_966->g_201
 * writes: p_966->g_91 p_966->g_89 p_966->g_198 p_966->g_201 p_966->g_357 p_966->g_97
 */
int16_t  func_46(int8_t  p_47, uint64_t  p_48, struct S2 * p_966)
{ /* block id: 6 */
    VECTOR(uint16_t, 16) l_64 = (VECTOR(uint16_t, 16))(0x8ED3L, (VECTOR(uint16_t, 4))(0x8ED3L, (VECTOR(uint16_t, 2))(0x8ED3L, 0x1F4AL), 0x1F4AL), 0x1F4AL, 0x8ED3L, 0x1F4AL, (VECTOR(uint16_t, 2))(0x8ED3L, 0x1F4AL), (VECTOR(uint16_t, 2))(0x8ED3L, 0x1F4AL), 0x8ED3L, 0x1F4AL, 0x8ED3L, 0x1F4AL);
    VECTOR(uint16_t, 8) l_66 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x8A84L), 0x8A84L), 0x8A84L, 0UL, 0x8A84L);
    VECTOR(int16_t, 2) l_82 = (VECTOR(int16_t, 2))(0x2291L, 1L);
    VECTOR(int16_t, 2) l_83 = (VECTOR(int16_t, 2))(0x4A80L, 0x7D4EL);
    int32_t *l_86 = (void*)0;
    int32_t *l_88[1][7][10] = {{{&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89},{&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89},{&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89},{&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89},{&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89},{&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89},{&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89,&p_966->g_89}}};
    int32_t **l_87 = &l_88[0][3][7];
    int64_t *l_90 = &p_966->g_91;
    uint64_t *l_197 = &p_966->g_198;
    int16_t l_199 = 0x2072L;
    uint64_t *l_200 = &p_966->g_201[8][0][2];
    int i, j, k;
    (*l_87) = func_52(((*l_200) = (((safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 2))(l_64.s1a)).yyxx, ((VECTOR(uint16_t, 2))(0UL, 0x147CL)).xyxy))).xwyxzzzxwyzxwzyz)).hi, ((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 8))(p_966->g_65.s05501421)).s20, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(l_66.s2000206732615066)).lo)).s27, ((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 8))(p_966->g_67.s0baf34c2)).odd, (uint16_t)(((p_48 == 0x14BE5697L) <= 0xB2L) >= ((*l_197) = (safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 16))(1L, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))((-1L), 1L, 1L, (-7L))).xwxxwwxz)), (safe_sub_func_int64_t_s_s(p_966->l_comm_values[(safe_mod_func_uint32_t_u_u(p_966->tid, 67))], (func_72(((*l_90) = ((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))((((safe_mod_func_uint16_t_u_u(FAKE_DIVERGE(p_966->group_2_offset, get_group_id(2), 10), 1UL)) > (safe_mod_func_uint8_t_u_u(p_966->g_67.se, (safe_add_func_int16_t_s_s(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(4L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_82.yyxx)).xzwzzywywxwxwwzw)).s39)), 5L, ((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 2))(l_83.xy)).yyyx))))))).s07, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x2E56L, 8L)).yyxxxxxxxyxxxxxy)).s9f))).yxxyyxyxyyxxyyxx))).sc, 65535UL))))) >= (safe_div_func_int8_t_s_s(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(0x24L, ((l_86 == ((*l_87) = l_86)) | p_966->g_89), (-7L), (-1L), 0x63L, 0x2AL, ((VECTOR(int8_t, 2))(0x04L)), 0x2EL, p_966->g_51[0][0][3], ((VECTOR(int8_t, 2))(2L)), 0x4FL, ((VECTOR(int8_t, 2))((-1L))), 0L)).sb3)).yyyy, ((VECTOR(int8_t, 4))(0x3DL))))).xzyxwwyx, ((VECTOR(int8_t, 8))(0x12L)), ((VECTOR(int8_t, 8))(0L))))).s56, ((VECTOR(int8_t, 2))(7L))))).hi, p_48))), ((VECTOR(int64_t, 2))(0x65B73647B8CEE114L)), 0x717E41AB87676DC0L)).lo)).yyyyyxxy, ((VECTOR(int64_t, 8))(0x02FFB082E2804CE6L))))).s7), &p_966->g_89, &p_966->g_89, p_966) <= p_966->g_51[0][0][3]))), ((VECTOR(int8_t, 4))(0x36L)), 1L, 0x4AL)).s6, l_83.x))))))).even))).xyyyyxyx))).s4, 6)) | p_47), p_48)), l_82.x)) || 4294967293UL), p_966->g_67.s6)), p_47)) || p_48) , l_199)), p_966);
    return p_47;
}


/* ------------------------------------------ */
/* 
 * reads : p_966->g_201 p_966->g_67 p_966->g_51 p_966->g_89
 * writes: p_966->g_357 p_966->g_97
 */
int32_t * func_52(uint64_t  p_53, struct S2 * p_966)
{ /* block id: 98 */
    int32_t *l_202 = &p_966->g_89;
    int32_t l_203 = 1L;
    int32_t *l_204 = (void*)0;
    int32_t *l_205 = (void*)0;
    int32_t *l_206 = &l_203;
    int32_t *l_207 = (void*)0;
    int32_t l_208 = 0x3B018952L;
    int32_t *l_209 = &l_203;
    int32_t *l_210 = (void*)0;
    int32_t *l_211 = &p_966->g_89;
    int32_t *l_212 = &p_966->g_89;
    int32_t *l_213 = &p_966->g_89;
    int32_t *l_214 = &l_208;
    int32_t *l_215[8][5] = {{&l_203,&l_203,&l_208,&l_203,&l_208},{&l_203,&l_203,&l_208,&l_203,&l_208},{&l_203,&l_203,&l_208,&l_203,&l_208},{&l_203,&l_203,&l_208,&l_203,&l_208},{&l_203,&l_203,&l_208,&l_203,&l_208},{&l_203,&l_203,&l_208,&l_203,&l_208},{&l_203,&l_203,&l_208,&l_203,&l_208},{&l_203,&l_203,&l_208,&l_203,&l_208}};
    uint32_t l_217 = 0xB8033DE5L;
    uint8_t l_354 = 0xA7L;
    int8_t *l_355 = (void*)0;
    int8_t *l_356 = (void*)0;
    int8_t *l_358 = (void*)0;
    int8_t *l_359 = (void*)0;
    int8_t *l_360 = (void*)0;
    int8_t *l_361[2];
    int32_t ***l_362[5];
    int32_t *l_363 = (void*)0;
    int i, j;
    for (i = 0; i < 2; i++)
        l_361[i] = (void*)0;
    for (i = 0; i < 5; i++)
        l_362[i] = &p_966->g_97;
    ++l_217;
    if ((atomic_inc(&p_966->l_atomic_input[32]) == 3))
    { /* block id: 101 */
        int32_t l_220 = 1L;
        for (l_220 = 7; (l_220 >= 16); l_220 = safe_add_func_uint16_t_u_u(l_220, 1))
        { /* block id: 104 */
            VECTOR(int32_t, 8) l_223 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-3L)), (-3L)), (-3L), 1L, (-3L));
            uint32_t l_224 = 0xC21393EBL;
            int32_t l_225 = 0x53D69D35L;
            int8_t l_226[4][4][5] = {{{0x21L,0x0EL,7L,0x15L,0x0DL},{0x21L,0x0EL,7L,0x15L,0x0DL},{0x21L,0x0EL,7L,0x15L,0x0DL},{0x21L,0x0EL,7L,0x15L,0x0DL}},{{0x21L,0x0EL,7L,0x15L,0x0DL},{0x21L,0x0EL,7L,0x15L,0x0DL},{0x21L,0x0EL,7L,0x15L,0x0DL},{0x21L,0x0EL,7L,0x15L,0x0DL}},{{0x21L,0x0EL,7L,0x15L,0x0DL},{0x21L,0x0EL,7L,0x15L,0x0DL},{0x21L,0x0EL,7L,0x15L,0x0DL},{0x21L,0x0EL,7L,0x15L,0x0DL}},{{0x21L,0x0EL,7L,0x15L,0x0DL},{0x21L,0x0EL,7L,0x15L,0x0DL},{0x21L,0x0EL,7L,0x15L,0x0DL},{0x21L,0x0EL,7L,0x15L,0x0DL}}};
            int32_t l_227 = 1L;
            uint32_t l_228 = 0x94D6678AL;
            int32_t l_328 = 0x29CB063BL;
            int8_t l_329 = 0x13L;
            int i, j, k;
            l_226[2][2][3] |= (l_225 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-1L), 0x612929A0L)).yxxyxyyy)), 0x5FD471ECL, ((VECTOR(int32_t, 4))(l_223.s4322)), l_224, (-7L), 1L)).s0a)).even);
            l_228 ^= (l_227 = (-1L));
            for (l_224 = 0; (l_224 <= 41); l_224 = safe_add_func_int16_t_s_s(l_224, 4))
            { /* block id: 111 */
                int32_t l_231[3];
                VECTOR(int32_t, 2) l_262 = (VECTOR(int32_t, 2))(7L, 0x1EC2600EL);
                int64_t l_263[6] = {0x4AD949899420C53CL,0x4AD949899420C53CL,0x4AD949899420C53CL,0x4AD949899420C53CL,0x4AD949899420C53CL,0x4AD949899420C53CL};
                int32_t *l_326 = (void*)0;
                uint64_t l_327 = 18446744073709551615UL;
                int i;
                for (i = 0; i < 3; i++)
                    l_231[i] = 0x60A787ACL;
                for (l_231[2] = 0; (l_231[2] > (-18)); l_231[2]--)
                { /* block id: 114 */
                    int32_t l_234 = 0x07565C97L;
                    for (l_234 = 0; (l_234 > 5); l_234 = safe_add_func_uint8_t_u_u(l_234, 1))
                    { /* block id: 117 */
                        int32_t l_237 = 0x02393EE3L;
                        VECTOR(int32_t, 2) l_238 = (VECTOR(int32_t, 2))(2L, 0x537CD8EFL);
                        VECTOR(int32_t, 4) l_239 = (VECTOR(int32_t, 4))(0x5EB80928L, (VECTOR(int32_t, 2))(0x5EB80928L, (-10L)), (-10L));
                        VECTOR(uint8_t, 8) l_240 = (VECTOR(uint8_t, 8))(0x11L, (VECTOR(uint8_t, 4))(0x11L, (VECTOR(uint8_t, 2))(0x11L, 0xFCL), 0xFCL), 0xFCL, 0x11L, 0xFCL);
                        VECTOR(uint8_t, 16) l_241 = (VECTOR(uint8_t, 16))(0x2CL, (VECTOR(uint8_t, 4))(0x2CL, (VECTOR(uint8_t, 2))(0x2CL, 255UL), 255UL), 255UL, 0x2CL, 255UL, (VECTOR(uint8_t, 2))(0x2CL, 255UL), (VECTOR(uint8_t, 2))(0x2CL, 255UL), 0x2CL, 255UL, 0x2CL, 255UL);
                        uint32_t l_242[1][3][4] = {{{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL}}};
                        int64_t l_243 = 0x4D1BB4DBD819F3F1L;
                        VECTOR(uint8_t, 16) l_244 = (VECTOR(uint8_t, 16))(0xDDL, (VECTOR(uint8_t, 4))(0xDDL, (VECTOR(uint8_t, 2))(0xDDL, 0xB9L), 0xB9L), 0xB9L, 0xDDL, 0xB9L, (VECTOR(uint8_t, 2))(0xDDL, 0xB9L), (VECTOR(uint8_t, 2))(0xDDL, 0xB9L), 0xDDL, 0xB9L, 0xDDL, 0xB9L);
                        VECTOR(uint8_t, 16) l_245 = (VECTOR(uint8_t, 16))(3UL, (VECTOR(uint8_t, 4))(3UL, (VECTOR(uint8_t, 2))(3UL, 0x9BL), 0x9BL), 0x9BL, 3UL, 0x9BL, (VECTOR(uint8_t, 2))(3UL, 0x9BL), (VECTOR(uint8_t, 2))(3UL, 0x9BL), 3UL, 0x9BL, 3UL, 0x9BL);
                        VECTOR(uint8_t, 4) l_246 = (VECTOR(uint8_t, 4))(0xFEL, (VECTOR(uint8_t, 2))(0xFEL, 0UL), 0UL);
                        VECTOR(uint8_t, 16) l_247 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 4UL), 4UL), 4UL, 1UL, 4UL, (VECTOR(uint8_t, 2))(1UL, 4UL), (VECTOR(uint8_t, 2))(1UL, 4UL), 1UL, 4UL, 1UL, 4UL);
                        VECTOR(uint8_t, 2) l_248 = (VECTOR(uint8_t, 2))(0xE5L, 252UL);
                        uint8_t l_249 = 1UL;
                        VECTOR(uint8_t, 4) l_250 = (VECTOR(uint8_t, 4))(0xCFL, (VECTOR(uint8_t, 2))(0xCFL, 0UL), 0UL);
                        VECTOR(uint8_t, 16) l_251 = (VECTOR(uint8_t, 16))(0x1CL, (VECTOR(uint8_t, 4))(0x1CL, (VECTOR(uint8_t, 2))(0x1CL, 0xC1L), 0xC1L), 0xC1L, 0x1CL, 0xC1L, (VECTOR(uint8_t, 2))(0x1CL, 0xC1L), (VECTOR(uint8_t, 2))(0x1CL, 0xC1L), 0x1CL, 0xC1L, 0x1CL, 0xC1L);
                        VECTOR(uint8_t, 4) l_252 = (VECTOR(uint8_t, 4))(0xD7L, (VECTOR(uint8_t, 2))(0xD7L, 1UL), 1UL);
                        int32_t l_253 = 0x50B14C57L;
                        VECTOR(uint8_t, 16) l_254 = (VECTOR(uint8_t, 16))(0x79L, (VECTOR(uint8_t, 4))(0x79L, (VECTOR(uint8_t, 2))(0x79L, 0x72L), 0x72L), 0x72L, 0x79L, 0x72L, (VECTOR(uint8_t, 2))(0x79L, 0x72L), (VECTOR(uint8_t, 2))(0x79L, 0x72L), 0x79L, 0x72L, 0x79L, 0x72L);
                        int64_t l_255 = 9L;
                        uint16_t l_256 = 0x7A7DL;
                        uint8_t l_257 = 247UL;
                        uint32_t l_258 = 1UL;
                        uint32_t l_259 = 4294967287UL;
                        uint32_t l_260 = 0x6BBBC259L;
                        uint8_t l_261 = 1UL;
                        int i, j, k;
                        l_223.s6 &= (((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0L, l_237, 0x751DCF8AL, 0x12349764L)).zwxzzyzz)).hi))).y, (-10L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_238.xx)).xxxy)), 7L, 5L)), ((VECTOR(int32_t, 4))(l_239.wwwy)).zywzywwz))).s3 , (((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 2))(0xE9L, 0xFEL)).xxyyxxxyxyxxyyyy, ((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 16))(l_240.s7171726577354161)), ((VECTOR(uint8_t, 2))(0xDCL, 6UL)).xyyyxxxxyxxxxxyy))), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 4))(l_241.s2577)).xzyzxwzy, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))((l_242[0][2][1] , l_243), 2UL, 0xA9L, 255UL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),VECTOR(uint8_t, 2),((VECTOR(uint8_t, 16))(l_244.s42ca0af4e1e5c576)).s66, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_245.s80a167a7)).lo)).odd, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_246.wy)), 0xE1L, 0x12L)).lo))).xxyx, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 16))(l_247.sdf28120ce1a13b96)).sf8, ((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 2))(l_248.xx)).xxxxyxyy, ((VECTOR(uint8_t, 16))(2UL, l_249, 255UL, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(l_250.wywyzzzw)))).s2, 1UL, ((VECTOR(uint8_t, 8))(l_251.s057d3ecd)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(l_252.zxzw)).lo)), 1UL)).even))).s32))), (((l_256 = (l_253 , (l_255 = ((VECTOR(uint8_t, 8))(l_254.s1220f7fb)).s2))) , (l_257 , l_258)) , 0xC3L), 0xA8L, l_259, 0xA1L, 0UL, l_260, 5UL, ((VECTOR(uint8_t, 2))(0xC7L)), 0x21L, ((VECTOR(uint8_t, 2))(0xD0L)), 255UL, 0x53L)).s1c0f))))))).s01)).xyyyyxyy))).s1125054033553226))))).s97, ((VECTOR(uint8_t, 2))(0xCEL))))).hi , (-1L)));
                        l_223.s4 = l_261;
                        l_223.s0 = 0x26343D95L;
                    }
                }
                if ((((VECTOR(int32_t, 2))(l_262.xx)).even , l_263[1]))
                { /* block id: 125 */
                    uint8_t l_264 = 0x81L;
                    VECTOR(int32_t, 8) l_267 = (VECTOR(int32_t, 8))(0x382C8051L, (VECTOR(int32_t, 4))(0x382C8051L, (VECTOR(int32_t, 2))(0x382C8051L, 0x2F9E53DDL), 0x2F9E53DDL), 0x2F9E53DDL, 0x382C8051L, 0x2F9E53DDL);
                    int32_t l_268 = 0x1F8D497BL;
                    int32_t l_269 = (-1L);
                    uint8_t l_270 = 0x92L;
                    uint64_t l_271 = 0xCE753BC47F2C3C59L;
                    VECTOR(int32_t, 8) l_272 = (VECTOR(int32_t, 8))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), (-2L)), (-2L)), (-2L), (-10L), (-2L));
                    VECTOR(int32_t, 8) l_273 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
                    VECTOR(int32_t, 16) l_274 = (VECTOR(int32_t, 16))(0x779DBF3EL, (VECTOR(int32_t, 4))(0x779DBF3EL, (VECTOR(int32_t, 2))(0x779DBF3EL, 0x4BACDE27L), 0x4BACDE27L), 0x4BACDE27L, 0x779DBF3EL, 0x4BACDE27L, (VECTOR(int32_t, 2))(0x779DBF3EL, 0x4BACDE27L), (VECTOR(int32_t, 2))(0x779DBF3EL, 0x4BACDE27L), 0x779DBF3EL, 0x4BACDE27L, 0x779DBF3EL, 0x4BACDE27L);
                    int32_t l_275[3];
                    VECTOR(int32_t, 16) l_276 = (VECTOR(int32_t, 16))(0x2E0762BFL, (VECTOR(int32_t, 4))(0x2E0762BFL, (VECTOR(int32_t, 2))(0x2E0762BFL, 0x5E14E592L), 0x5E14E592L), 0x5E14E592L, 0x2E0762BFL, 0x5E14E592L, (VECTOR(int32_t, 2))(0x2E0762BFL, 0x5E14E592L), (VECTOR(int32_t, 2))(0x2E0762BFL, 0x5E14E592L), 0x2E0762BFL, 0x5E14E592L, 0x2E0762BFL, 0x5E14E592L);
                    VECTOR(int32_t, 2) l_277 = (VECTOR(int32_t, 2))(0x44DA49FBL, 2L);
                    int64_t l_278 = 0x4C0637CDB33FEF1AL;
                    VECTOR(int32_t, 2) l_279 = (VECTOR(int32_t, 2))((-7L), 0x75E0FD3BL);
                    VECTOR(int32_t, 16) l_280 = (VECTOR(int32_t, 16))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x0F319DCEL), 0x0F319DCEL), 0x0F319DCEL, (-3L), 0x0F319DCEL, (VECTOR(int32_t, 2))((-3L), 0x0F319DCEL), (VECTOR(int32_t, 2))((-3L), 0x0F319DCEL), (-3L), 0x0F319DCEL, (-3L), 0x0F319DCEL);
                    VECTOR(int32_t, 2) l_281 = (VECTOR(int32_t, 2))(0x231FCB92L, 0x0D6D4A88L);
                    VECTOR(int32_t, 16) l_282 = (VECTOR(int32_t, 16))(0x27A84E41L, (VECTOR(int32_t, 4))(0x27A84E41L, (VECTOR(int32_t, 2))(0x27A84E41L, 0x47FB6934L), 0x47FB6934L), 0x47FB6934L, 0x27A84E41L, 0x47FB6934L, (VECTOR(int32_t, 2))(0x27A84E41L, 0x47FB6934L), (VECTOR(int32_t, 2))(0x27A84E41L, 0x47FB6934L), 0x27A84E41L, 0x47FB6934L, 0x27A84E41L, 0x47FB6934L);
                    uint32_t l_283 = 0x082DA739L;
                    int16_t l_284[9] = {6L,6L,6L,6L,6L,6L,6L,6L,6L};
                    uint16_t l_285 = 65532UL;
                    int32_t l_286 = (-7L);
                    int16_t l_287 = 0x01D3L;
                    int64_t l_288 = 0x2E04848015E7C90FL;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_275[i] = 0x44DFC335L;
                    ++l_264;
                    if ((((VECTOR(int32_t, 16))(l_267.s3624723504117510)).sa , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((l_269 &= l_268) , l_270), ((VECTOR(int32_t, 4))(1L, l_271, 0x4A2D3D38L, 1L)).y, ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_272.s6040475552753066)).s52d0)).wzyyyyww, ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 2))(l_273.s75)).xxyyxyyx, ((VECTOR(int32_t, 16))(0x1240290DL, 0x2F7889EBL, 0x4659088AL, ((VECTOR(int32_t, 2))(l_274.sd5)), 8L, l_275[1], 1L, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_276.s116f)).yzxwzxzxwxwzwwzx)).s57c8, ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(l_277.xyxxxyxyxyxyyxyy)).se5, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 8))(l_278, ((VECTOR(int32_t, 2))(l_279.xx)), ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(l_280.s2dd5305f2f72a917)).sbc99, ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 4))(l_281.yxxy)).ywyywzyw, ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_282.s789d02cc)))), ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 16))(l_283, (-1L), (-9L), 0x2BB7B0CEL, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 8))(((l_286 = (l_285 = l_284[1])) , 1L), ((VECTOR(int32_t, 2))(0x021FC920L)), (-2L), ((VECTOR(int32_t, 4))((-7L))))).lo, ((VECTOR(int32_t, 4))(0x01CB5ADCL))))).x, ((VECTOR(int32_t, 4))(0x539461BCL)), ((VECTOR(int32_t, 2))(0L)), 7L)), 0x53B4845BL, 0x1AA62D46L, 1L, (-1L))).s18, ((VECTOR(int32_t, 2))(0x5FD38649L))))).xxxy)).lo, ((VECTOR(int32_t, 2))(0x34622424L)), ((VECTOR(int32_t, 2))((-4L)))))).yyxyxxyx, ((VECTOR(int32_t, 8))(0x02B604AAL))))).s2545242640613322)).see43, ((VECTOR(int32_t, 4))(0L))))).wzyyzwwz))).even, ((VECTOR(int32_t, 4))(3L))))), 0L)).odd, (int32_t)l_287))), 0x4B9A50B5L, l_288, 1L, 3L)).s05))).yxyx, ((VECTOR(int32_t, 4))(1L)))))))), ((VECTOR(int32_t, 2))(0x28217980L)), (-1L), (-3L))).odd))), ((VECTOR(int32_t, 8))(0x26209F7CL))))), 0x69AF53ABL, (-4L), ((VECTOR(int32_t, 2))(0x236DBC43L)), 7L, 1L)).s9a3c)).y))
                    { /* block id: 130 */
                        int32_t l_291 = 0x34B54537L;
                        int32_t *l_290[10] = {&l_291,&l_291,&l_291,&l_291,&l_291,&l_291,&l_291,&l_291,&l_291,&l_291};
                        int32_t **l_289 = &l_290[8];
                        int16_t l_292 = 0x68AAL;
                        int i;
                        l_289 = l_289;
                        l_273.s3 = l_292;
                    }
                    else
                    { /* block id: 133 */
                        VECTOR(int32_t, 16) l_293 = (VECTOR(int32_t, 16))(0x17AA0790L, (VECTOR(int32_t, 4))(0x17AA0790L, (VECTOR(int32_t, 2))(0x17AA0790L, 0x0B992737L), 0x0B992737L), 0x0B992737L, 0x17AA0790L, 0x0B992737L, (VECTOR(int32_t, 2))(0x17AA0790L, 0x0B992737L), (VECTOR(int32_t, 2))(0x17AA0790L, 0x0B992737L), 0x17AA0790L, 0x0B992737L, 0x17AA0790L, 0x0B992737L);
                        int32_t l_294 = 0x6D11D72DL;
                        uint16_t l_295[8] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
                        uint32_t l_296 = 0x14B1E1DAL;
                        uint8_t l_297 = 0xD0L;
                        VECTOR(uint8_t, 8) l_298 = (VECTOR(uint8_t, 8))(0x8CL, (VECTOR(uint8_t, 4))(0x8CL, (VECTOR(uint8_t, 2))(0x8CL, 252UL), 252UL), 252UL, 0x8CL, 252UL);
                        int32_t *l_299[2];
                        int32_t *l_300 = (void*)0;
                        int32_t *l_301 = (void*)0;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_299[i] = (void*)0;
                        l_274.s9 = ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(l_293.s9416bd09)).s46, ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 4))(l_294, (l_279.y = l_295[7]), (-8L), 0x41C44580L)).zxxxzywz, (int32_t)l_296))).s71))).even;
                        l_279.x = l_297;
                        l_301 = (((VECTOR(uint8_t, 2))(l_298.s01)).even , (l_300 = l_299[0]));
                    }
                }
                else
                { /* block id: 140 */
                    int32_t l_303 = 0x7A5C5EBCL;
                    int32_t *l_302 = &l_303;
                    int32_t *l_304 = &l_303;
                    int32_t *l_305 = (void*)0;
                    l_305 = (l_304 = (l_302 = (void*)0));
                    for (l_303 = 0; (l_303 == (-1)); l_303--)
                    { /* block id: 146 */
                        int16_t l_308[2];
                        int32_t l_309[8][9][3] = {{{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L}},{{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L}},{{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L}},{{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L}},{{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L}},{{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L}},{{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L}},{{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L},{8L,0x5B3D0EAAL,9L}}};
                        int32_t l_310 = 1L;
                        uint8_t l_311 = 246UL;
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_308[i] = 0L;
                        l_308[1] ^= 5L;
                        ++l_311;
                    }
                    for (l_303 = 0; (l_303 == 17); l_303 = safe_add_func_int16_t_s_s(l_303, 2))
                    { /* block id: 152 */
                        uint16_t l_316 = 0xC8F7L;
                        uint8_t l_317 = 0UL;
                        int32_t l_318 = (-1L);
                        VECTOR(uint32_t, 2) l_319 = (VECTOR(uint32_t, 2))(0xB7D956E6L, 0xA561795AL);
                        uint32_t l_320 = 0x48DDDB46L;
                        VECTOR(uint32_t, 16) l_321 = (VECTOR(uint32_t, 16))(0xA4656B05L, (VECTOR(uint32_t, 4))(0xA4656B05L, (VECTOR(uint32_t, 2))(0xA4656B05L, 0UL), 0UL), 0UL, 0xA4656B05L, 0UL, (VECTOR(uint32_t, 2))(0xA4656B05L, 0UL), (VECTOR(uint32_t, 2))(0xA4656B05L, 0UL), 0xA4656B05L, 0UL, 0xA4656B05L, 0UL);
                        int64_t l_322[6][1][8] = {{{(-1L),0x32B0423C1866E465L,0L,0x32B0423C1866E465L,(-1L),(-1L),0x32B0423C1866E465L,0L}},{{(-1L),0x32B0423C1866E465L,0L,0x32B0423C1866E465L,(-1L),(-1L),0x32B0423C1866E465L,0L}},{{(-1L),0x32B0423C1866E465L,0L,0x32B0423C1866E465L,(-1L),(-1L),0x32B0423C1866E465L,0L}},{{(-1L),0x32B0423C1866E465L,0L,0x32B0423C1866E465L,(-1L),(-1L),0x32B0423C1866E465L,0L}},{{(-1L),0x32B0423C1866E465L,0L,0x32B0423C1866E465L,(-1L),(-1L),0x32B0423C1866E465L,0L}},{{(-1L),0x32B0423C1866E465L,0L,0x32B0423C1866E465L,(-1L),(-1L),0x32B0423C1866E465L,0L}}};
                        int16_t l_323 = 0x0593L;
                        int8_t l_324 = 6L;
                        int32_t l_325 = 1L;
                        int i, j, k;
                        l_262.x = l_316;
                        l_223.s7 &= 0x288DE528L;
                        l_318 = l_317;
                        l_223.s4 = ((((VECTOR(uint32_t, 4))(abs(((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 8))(l_319.xxyyxxyy))))).lo))).z , ((l_321.sc = l_320) , (l_325 = (l_324 = (l_322[0][0][5] , l_323))))) , (l_231[0] |= 0x2D6041D8L));
                    }
                }
                l_326 = (void*)0;
                l_223.s3 = l_327;
            }
            l_329 |= l_328;
        }
        unsigned int result = 0;
        result += l_220;
        atomic_add(&p_966->l_special_values[32], result);
    }
    else
    { /* block id: 168 */
        (1 + 1);
    }
    p_966->g_97 = ((safe_lshift_func_int8_t_s_s((p_966->g_357.s3 = (safe_div_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s((((p_966->g_201[8][0][2] , p_966->g_67.s5) != (((safe_div_func_int64_t_s_s(((safe_mul_func_int16_t_s_s(((safe_div_func_uint16_t_u_u(((void*)0 == &p_966->g_98), 65527UL)) , ((safe_div_func_int32_t_s_s(((safe_sub_func_int8_t_s_s(p_53, 0UL)) || ((VECTOR(int8_t, 4))(5L, ((safe_mod_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(0x5FCFL, (0xFFCBA951L >= l_354))), 2)), p_966->g_51[0][0][3])) || p_966->g_51[0][0][3]), 4L)) != p_53), 0L, 0x1BL)).z), p_53)) , (*l_212))), 0x43A4L)) > 4294967288UL), 0x9F95C795827224D0L)) < p_53) , p_966->g_51[1][1][4])) & 18446744073709551606UL), (*l_211))), p_966->g_51[1][1][3]))), 3)) , (void*)0);
    return l_363;
}


/* ------------------------------------------ */
/* 
 * reads : p_966->g_91 p_966->g_97 p_966->g_98 p_966->g_89
 * writes: p_966->g_91 p_966->g_89
 */
int16_t  func_72(int64_t  p_73, int32_t * p_74, int32_t * p_75, struct S2 * p_966)
{ /* block id: 9 */
    VECTOR(int32_t, 16) l_94 = (VECTOR(int32_t, 16))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x7A302576L), 0x7A302576L), 0x7A302576L, 4L, 0x7A302576L, (VECTOR(int32_t, 2))(4L, 0x7A302576L), (VECTOR(int32_t, 2))(4L, 0x7A302576L), 4L, 0x7A302576L, 4L, 0x7A302576L);
    int i;
    for (p_966->g_91 = 0; (p_966->g_91 != 15); p_966->g_91++)
    { /* block id: 12 */
        (*p_74) = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_94.s28ae825d0d300741)).s81)).yyxyyyyy)).s2;
        for (p_73 = 26; (p_73 == 1); p_73 = safe_sub_func_uint32_t_u_u(p_73, 1))
        { /* block id: 16 */
            (*p_966->g_98) |= ((void*)0 != p_966->g_97);
            if ((*p_966->g_98))
                continue;
        }
    }
    for (p_966->g_89 = 0; (p_966->g_89 == 29); p_966->g_89 = safe_add_func_uint32_t_u_u(p_966->g_89, 8))
    { /* block id: 23 */
        if ((atomic_inc(&p_966->l_atomic_input[11]) == 8))
        { /* block id: 25 */
            VECTOR(int8_t, 16) l_101 = (VECTOR(int8_t, 16))(0x0BL, (VECTOR(int8_t, 4))(0x0BL, (VECTOR(int8_t, 2))(0x0BL, 0L), 0L), 0L, 0x0BL, 0L, (VECTOR(int8_t, 2))(0x0BL, 0L), (VECTOR(int8_t, 2))(0x0BL, 0L), 0x0BL, 0L, 0x0BL, 0L);
            VECTOR(uint64_t, 8) l_170 = (VECTOR(uint64_t, 8))(0xAD87FAE0A69A7D35L, (VECTOR(uint64_t, 4))(0xAD87FAE0A69A7D35L, (VECTOR(uint64_t, 2))(0xAD87FAE0A69A7D35L, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0xAD87FAE0A69A7D35L, 18446744073709551615UL);
            VECTOR(uint64_t, 4) l_171 = (VECTOR(uint64_t, 4))(0xD4623137507154B7L, (VECTOR(uint64_t, 2))(0xD4623137507154B7L, 1UL), 1UL);
            int16_t l_172 = 0x57C5L;
            uint32_t l_173[6];
            uint8_t l_174 = 0x8BL;
            VECTOR(uint64_t, 16) l_175 = (VECTOR(uint64_t, 16))(18446744073709551610UL, (VECTOR(uint64_t, 4))(18446744073709551610UL, (VECTOR(uint64_t, 2))(18446744073709551610UL, 0x6FAF5395DFB6A07BL), 0x6FAF5395DFB6A07BL), 0x6FAF5395DFB6A07BL, 18446744073709551610UL, 0x6FAF5395DFB6A07BL, (VECTOR(uint64_t, 2))(18446744073709551610UL, 0x6FAF5395DFB6A07BL), (VECTOR(uint64_t, 2))(18446744073709551610UL, 0x6FAF5395DFB6A07BL), 18446744073709551610UL, 0x6FAF5395DFB6A07BL, 18446744073709551610UL, 0x6FAF5395DFB6A07BL);
            int32_t l_176[5][10][2] = {{{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)}},{{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)}},{{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)}},{{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)}},{{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)},{(-1L),(-6L)}}};
            uint8_t l_177 = 0x2FL;
            VECTOR(uint64_t, 8) l_178 = (VECTOR(uint64_t, 8))(0x3459E8EBB9B1E83FL, (VECTOR(uint64_t, 4))(0x3459E8EBB9B1E83FL, (VECTOR(uint64_t, 2))(0x3459E8EBB9B1E83FL, 0x43E87FF4ED39A44DL), 0x43E87FF4ED39A44DL), 0x43E87FF4ED39A44DL, 0x3459E8EBB9B1E83FL, 0x43E87FF4ED39A44DL);
            uint8_t l_179 = 0UL;
            uint32_t l_180 = 0xD3170368L;
            VECTOR(uint64_t, 2) l_181 = (VECTOR(uint64_t, 2))(9UL, 1UL);
            uint16_t l_182 = 0x91DAL;
            uint8_t l_183 = 0xD0L;
            uint16_t l_184 = 0xC23FL;
            VECTOR(uint32_t, 4) l_185 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xD97B6011L), 0xD97B6011L);
            uint32_t l_186 = 4294967287UL;
            int32_t l_187 = 0L;
            uint16_t l_188[8][2] = {{0x0149L,65526UL},{0x0149L,65526UL},{0x0149L,65526UL},{0x0149L,65526UL},{0x0149L,65526UL},{0x0149L,65526UL},{0x0149L,65526UL},{0x0149L,65526UL}};
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_173[i] = 0x2D05F5F8L;
            if (l_101.s4)
            { /* block id: 26 */
                uint32_t l_102 = 0x10ABA4BFL;
                uint8_t l_103 = 0x60L;
                int32_t l_105 = 0x54FF7D93L;
                int32_t *l_104 = &l_105;
                int32_t *l_106 = &l_105;
                l_103 ^= l_102;
                l_104 = (void*)0;
                l_106 = (void*)0;
            }
            else
            { /* block id: 30 */
                uint64_t l_107[4] = {0x5FDDB278982BF9DFL,0x5FDDB278982BF9DFL,0x5FDDB278982BF9DFL,0x5FDDB278982BF9DFL};
                int i;
                if (l_107[0])
                { /* block id: 31 */
                    int8_t l_108 = 0x1DL;
                    uint32_t l_109 = 0x9A188638L;
                    int64_t l_116 = 1L;
                    ++l_109;
                    for (l_109 = 0; (l_109 <= 37); l_109++)
                    { /* block id: 35 */
                        uint32_t l_114[6][4][2] = {{{4294967293UL,4294967293UL},{4294967293UL,4294967293UL},{4294967293UL,4294967293UL},{4294967293UL,4294967293UL}},{{4294967293UL,4294967293UL},{4294967293UL,4294967293UL},{4294967293UL,4294967293UL},{4294967293UL,4294967293UL}},{{4294967293UL,4294967293UL},{4294967293UL,4294967293UL},{4294967293UL,4294967293UL},{4294967293UL,4294967293UL}},{{4294967293UL,4294967293UL},{4294967293UL,4294967293UL},{4294967293UL,4294967293UL},{4294967293UL,4294967293UL}},{{4294967293UL,4294967293UL},{4294967293UL,4294967293UL},{4294967293UL,4294967293UL},{4294967293UL,4294967293UL}},{{4294967293UL,4294967293UL},{4294967293UL,4294967293UL},{4294967293UL,4294967293UL},{4294967293UL,4294967293UL}}};
                        int64_t l_115 = 0x08A6355696F087C2L;
                        int i, j, k;
                        l_115 ^= l_114[4][2][1];
                    }
                    if ((l_116 = 0x05BCF721L))
                    { /* block id: 39 */
                        int32_t l_118[2][9][6] = {{{0x3FF72C0FL,(-1L),(-1L),0x0E731B53L,(-1L),(-1L)},{0x3FF72C0FL,(-1L),(-1L),0x0E731B53L,(-1L),(-1L)},{0x3FF72C0FL,(-1L),(-1L),0x0E731B53L,(-1L),(-1L)},{0x3FF72C0FL,(-1L),(-1L),0x0E731B53L,(-1L),(-1L)},{0x3FF72C0FL,(-1L),(-1L),0x0E731B53L,(-1L),(-1L)},{0x3FF72C0FL,(-1L),(-1L),0x0E731B53L,(-1L),(-1L)},{0x3FF72C0FL,(-1L),(-1L),0x0E731B53L,(-1L),(-1L)},{0x3FF72C0FL,(-1L),(-1L),0x0E731B53L,(-1L),(-1L)},{0x3FF72C0FL,(-1L),(-1L),0x0E731B53L,(-1L),(-1L)}},{{0x3FF72C0FL,(-1L),(-1L),0x0E731B53L,(-1L),(-1L)},{0x3FF72C0FL,(-1L),(-1L),0x0E731B53L,(-1L),(-1L)},{0x3FF72C0FL,(-1L),(-1L),0x0E731B53L,(-1L),(-1L)},{0x3FF72C0FL,(-1L),(-1L),0x0E731B53L,(-1L),(-1L)},{0x3FF72C0FL,(-1L),(-1L),0x0E731B53L,(-1L),(-1L)},{0x3FF72C0FL,(-1L),(-1L),0x0E731B53L,(-1L),(-1L)},{0x3FF72C0FL,(-1L),(-1L),0x0E731B53L,(-1L),(-1L)},{0x3FF72C0FL,(-1L),(-1L),0x0E731B53L,(-1L),(-1L)},{0x3FF72C0FL,(-1L),(-1L),0x0E731B53L,(-1L),(-1L)}}};
                        int32_t *l_117 = &l_118[1][7][1];
                        int i, j, k;
                        l_117 = (void*)0;
                    }
                    else
                    { /* block id: 41 */
                        int32_t l_120 = 0x09730A75L;
                        int32_t *l_119 = &l_120;
                        int32_t *l_121 = (void*)0;
                        l_121 = l_119;
                    }
                }
                else
                { /* block id: 44 */
                    int32_t l_122[9] = {0x23813E0DL,0x41B616B5L,0x23813E0DL,0x23813E0DL,0x41B616B5L,0x23813E0DL,0x23813E0DL,0x41B616B5L,0x23813E0DL};
                    int64_t l_132 = 0x2AFE8A4A7E502840L;
                    int64_t l_133 = 0x453DDAA5E5C78499L;
                    uint64_t l_134 = 18446744073709551612UL;
                    uint8_t l_137[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_137[i] = 1UL;
                    if (l_122[0])
                    { /* block id: 45 */
                        int32_t l_124 = 0x55598A95L;
                        int32_t *l_123 = &l_124;
                        uint32_t l_125 = 0x077EAAE7L;
                        uint32_t l_126 = 0x2D310D21L;
                        l_123 = (void*)0;
                        l_126 = l_125;
                    }
                    else
                    { /* block id: 48 */
                        int32_t *l_127 = (void*)0;
                        int32_t l_129 = (-7L);
                        int32_t *l_128 = &l_129;
                        VECTOR(int32_t, 2) l_130 = (VECTOR(int32_t, 2))((-1L), (-1L));
                        uint16_t l_131 = 0x3A0BL;
                        int i;
                        l_128 = l_127;
                        l_131 = ((VECTOR(int32_t, 16))(l_130.xxyxxxyyyyxyxxyy)).s6;
                        l_127 = (void*)0;
                    }
                    l_134--;
                    if (l_137[1])
                    { /* block id: 54 */
                        VECTOR(int32_t, 16) l_138 = (VECTOR(int32_t, 16))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x41F08C6BL), 0x41F08C6BL), 0x41F08C6BL, (-3L), 0x41F08C6BL, (VECTOR(int32_t, 2))((-3L), 0x41F08C6BL), (VECTOR(int32_t, 2))((-3L), 0x41F08C6BL), (-3L), 0x41F08C6BL, (-3L), 0x41F08C6BL);
                        int64_t l_139 = 0x73A6B8F9AD1E1EA8L;
                        uint32_t l_140 = 0UL;
                        int8_t l_141 = (-9L);
                        uint16_t l_142 = 0x14C8L;
                        int32_t l_145 = 0x08590E40L;
                        int32_t *l_146 = (void*)0;
                        int32_t *l_147 = (void*)0;
                        int8_t l_148 = 0L;
                        uint8_t l_149 = 0x34L;
                        int i;
                        l_141 |= (l_140 = (l_139 |= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_138.s94efea996bb96e4a)))).se));
                        ++l_142;
                        l_146 = (l_147 = (GROUP_DIVERGE(2, 1) , ((l_145 = 0UL) , l_146)));
                        l_149 = l_148;
                    }
                    else
                    { /* block id: 63 */
                        uint16_t l_150 = 0xA549L;
                        VECTOR(int32_t, 8) l_151 = (VECTOR(int32_t, 8))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x0C38B956L), 0x0C38B956L), 0x0C38B956L, (-2L), 0x0C38B956L);
                        int8_t l_152 = 0L;
                        int8_t l_153 = 0x28L;
                        int8_t l_154[8] = {3L,3L,3L,3L,3L,3L,3L,3L};
                        uint64_t l_155 = 0x22E619775E7F4182L;
                        int32_t l_156 = (-1L);
                        VECTOR(int32_t, 8) l_157 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x2D851819L), 0x2D851819L), 0x2D851819L, 1L, 0x2D851819L);
                        VECTOR(int32_t, 2) l_158 = (VECTOR(int32_t, 2))(0x09261988L, 0x0D0BA58DL);
                        int8_t l_159[3][7];
                        VECTOR(int8_t, 16) l_160 = (VECTOR(int8_t, 16))(0x11L, (VECTOR(int8_t, 4))(0x11L, (VECTOR(int8_t, 2))(0x11L, (-1L)), (-1L)), (-1L), 0x11L, (-1L), (VECTOR(int8_t, 2))(0x11L, (-1L)), (VECTOR(int8_t, 2))(0x11L, (-1L)), 0x11L, (-1L), 0x11L, (-1L));
                        VECTOR(uint8_t, 16) l_161 = (VECTOR(uint8_t, 16))(7UL, (VECTOR(uint8_t, 4))(7UL, (VECTOR(uint8_t, 2))(7UL, 0xE3L), 0xE3L), 0xE3L, 7UL, 0xE3L, (VECTOR(uint8_t, 2))(7UL, 0xE3L), (VECTOR(uint8_t, 2))(7UL, 0xE3L), 7UL, 0xE3L, 7UL, 0xE3L);
                        VECTOR(uint16_t, 4) l_162 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xFE55L), 0xFE55L);
                        int8_t l_163 = 0x02L;
                        uint16_t l_164 = 0x70D6L;
                        int8_t l_165 = 0x59L;
                        int32_t *l_166 = (void*)0;
                        int32_t *l_167 = (void*)0;
                        int16_t l_168[6][2][5] = {{{0L,6L,0L,0L,6L},{0L,6L,0L,0L,6L}},{{0L,6L,0L,0L,6L},{0L,6L,0L,0L,6L}},{{0L,6L,0L,0L,6L},{0L,6L,0L,0L,6L}},{{0L,6L,0L,0L,6L},{0L,6L,0L,0L,6L}},{{0L,6L,0L,0L,6L},{0L,6L,0L,0L,6L}},{{0L,6L,0L,0L,6L},{0L,6L,0L,0L,6L}}};
                        uint8_t l_169 = 0x0DL;
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 7; j++)
                                l_159[i][j] = 0x3EL;
                        }
                        l_150 &= (-1L);
                        l_167 = ((((VECTOR(int32_t, 8))(l_151.s10047715)).s3 , l_152) , (((l_153 , (l_159[2][3] = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 16))(1L, 1L, ((VECTOR(int32_t, 2))((-5L), 1L)), 0x4B2A3AB4L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_154[6], 0L, (-10L), l_155, 4L, l_156, 0x21E97B72L, 0x6E003A77L)).s17)), ((VECTOR(int32_t, 8))((-6L), 0x1DB4CFA5L, ((VECTOR(int32_t, 2))(0L, 0x71B26D05L)), 0x0D885D17L, 0x5D16D180L, 0x7A8BF02EL, 6L)), 0x44B2C92AL)).even, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_157.s4414)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_158.xx)), (-3L), 0x245DBAEAL)))))))))).s66)).yyxxxyyx)).s7)) , (l_101.s9 = ((((((VECTOR(uint16_t, 8))(0x7C89L, ((VECTOR(uint16_t, 2))(8UL, 65535UL)), 1UL, ((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 16))(abs(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 8))(l_160.s46787cd5)).s5775401444066537, ((VECTOR(uint8_t, 16))(l_161.sfe1ab3331872fa33)))))))).s25b3, ((VECTOR(uint16_t, 2))(l_162.wz)).xyxx))))).s3 , l_163) , ((l_164 &= 0x3ECE3592EE31D69CL) , l_165)) , 1L) , 0x6AL))) , l_166));
                        l_169 = l_168[4][0][3];
                    }
                }
            }
            if ((((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(max(((VECTOR(uint64_t, 16))(l_170.s3227446033633357)).hi, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(l_171.xwzzzxxw)).hi)).odd, (uint64_t)(l_172 , ((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 2))(0x43B8F344L, 0xC8F31351L)), ((VECTOR(uint32_t, 2))(4294967286UL, 4294967295UL))))).odd)))), 0x7B00CA6FDA0F3384L, 0xDB9DDAD4C5443C59L)), (l_173[3] , l_174), ((VECTOR(uint64_t, 4))(abs(((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 2))(0x7E2E2487D8A3BB38L, 0xAB97BF4D477D6962L)), ((VECTOR(uint64_t, 16))(l_175.sba012d08a2d788d9)).s95, ((VECTOR(uint64_t, 8))(mad_sat(((VECTOR(uint64_t, 16))(l_176[2][2][0], l_177, 0x83D8B824882324A6L, ((VECTOR(uint64_t, 4))(l_178.s2636)), 3UL, l_179, ((l_180 = 0x98L) , ((l_184 ^= (l_183 = (l_182 = ((VECTOR(uint64_t, 2))(l_181.yy)).hi))) , (((VECTOR(uint32_t, 16))(l_185.zyzwyzzyxxwyyxwz)).s8 , 0xCED721E8A32C819DL))), 18446744073709551615UL, l_186, 1UL, 0x852CF7C837AE32BBL, 3UL, 6UL)).odd, ((VECTOR(uint64_t, 8))(0x6D56ED219E0C19E0L)), ((VECTOR(uint64_t, 8))(0x81DA6923628DD6C4L))))).s50))).xyyx))), ((VECTOR(uint64_t, 2))(1UL)), 0x2D6A1B3C1EEC739DL, 8UL, ((VECTOR(uint64_t, 2))(6UL)), 18446744073709551609UL)))).odd))).s2644470217003233)).s4 , (-1L)) , l_187) , l_188[1][1]))
            { /* block id: 77 */
                uint32_t l_189 = 1UL;
                l_187 = (l_176[2][2][0] = (l_189 = 0L));
            }
            else
            { /* block id: 81 */
                int32_t l_190 = 4L;
                int16_t l_191 = (-2L);
                VECTOR(uint64_t, 4) l_192 = (VECTOR(uint64_t, 4))(0x192FCFE0A5955131L, (VECTOR(uint64_t, 2))(0x192FCFE0A5955131L, 0UL), 0UL);
                int64_t l_196 = 0x562CACFC5F2DE2ACL;
                int i;
                l_187 = l_190;
                l_192.x = l_191;
                for (l_190 = (-4); (l_190 >= (-17)); l_190 = safe_sub_func_uint16_t_u_u(l_190, 4))
                { /* block id: 86 */
                    uint64_t l_195 = 0x7B8A6DA849F534F0L;
                    l_176[4][7][0] &= l_195;
                }
                l_190 |= l_196;
            }
            unsigned int result = 0;
            result += l_101.sf;
            result += l_101.se;
            result += l_101.sd;
            result += l_101.sc;
            result += l_101.sb;
            result += l_101.sa;
            result += l_101.s9;
            result += l_101.s8;
            result += l_101.s7;
            result += l_101.s6;
            result += l_101.s5;
            result += l_101.s4;
            result += l_101.s3;
            result += l_101.s2;
            result += l_101.s1;
            result += l_101.s0;
            result += l_170.s7;
            result += l_170.s6;
            result += l_170.s5;
            result += l_170.s4;
            result += l_170.s3;
            result += l_170.s2;
            result += l_170.s1;
            result += l_170.s0;
            result += l_171.w;
            result += l_171.z;
            result += l_171.y;
            result += l_171.x;
            result += l_172;
            int l_173_i0;
            for (l_173_i0 = 0; l_173_i0 < 6; l_173_i0++) {
                result += l_173[l_173_i0];
            }
            result += l_174;
            result += l_175.sf;
            result += l_175.se;
            result += l_175.sd;
            result += l_175.sc;
            result += l_175.sb;
            result += l_175.sa;
            result += l_175.s9;
            result += l_175.s8;
            result += l_175.s7;
            result += l_175.s6;
            result += l_175.s5;
            result += l_175.s4;
            result += l_175.s3;
            result += l_175.s2;
            result += l_175.s1;
            result += l_175.s0;
            int l_176_i0, l_176_i1, l_176_i2;
            for (l_176_i0 = 0; l_176_i0 < 5; l_176_i0++) {
                for (l_176_i1 = 0; l_176_i1 < 10; l_176_i1++) {
                    for (l_176_i2 = 0; l_176_i2 < 2; l_176_i2++) {
                        result += l_176[l_176_i0][l_176_i1][l_176_i2];
                    }
                }
            }
            result += l_177;
            result += l_178.s7;
            result += l_178.s6;
            result += l_178.s5;
            result += l_178.s4;
            result += l_178.s3;
            result += l_178.s2;
            result += l_178.s1;
            result += l_178.s0;
            result += l_179;
            result += l_180;
            result += l_181.y;
            result += l_181.x;
            result += l_182;
            result += l_183;
            result += l_184;
            result += l_185.w;
            result += l_185.z;
            result += l_185.y;
            result += l_185.x;
            result += l_186;
            result += l_187;
            int l_188_i0, l_188_i1;
            for (l_188_i0 = 0; l_188_i0 < 8; l_188_i0++) {
                for (l_188_i1 = 0; l_188_i1 < 2; l_188_i1++) {
                    result += l_188[l_188_i0][l_188_i1];
                }
            }
            atomic_add(&p_966->l_special_values[11], result);
        }
        else
        { /* block id: 91 */
            (1 + 1);
        }
    }
    return p_73;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[65];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 65; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[65];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 65; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[67];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 67; i++)
            l_comm_values[i] = 1;
    struct S2 c_967;
    struct S2* p_966 = &c_967;
    struct S2 c_968 = {
        (VECTOR(uint32_t, 4))(4294967289UL, (VECTOR(uint32_t, 2))(4294967289UL, 0x99CDF9C7L), 0x99CDF9C7L), // p_966->g_7
        (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 8UL), 8UL), 8UL, 1UL, 8UL), // p_966->g_8
        {{{0L,0x34499C77L,0x34499C77L,0L,0L},{0L,0x34499C77L,0x34499C77L,0L,0L}},{{0L,0x34499C77L,0x34499C77L,0L,0L},{0L,0x34499C77L,0x34499C77L,0L,0L}}}, // p_966->g_51
        (VECTOR(uint16_t, 8))(0xB579L, (VECTOR(uint16_t, 4))(0xB579L, (VECTOR(uint16_t, 2))(0xB579L, 0x6733L), 0x6733L), 0x6733L, 0xB579L, 0x6733L), // p_966->g_65
        (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xB100L), 0xB100L), 0xB100L, 0UL, 0xB100L, (VECTOR(uint16_t, 2))(0UL, 0xB100L), (VECTOR(uint16_t, 2))(0UL, 0xB100L), 0UL, 0xB100L, 0UL, 0xB100L), // p_966->g_67
        (-1L), // p_966->g_89
        (-1L), // p_966->g_91
        &p_966->g_89, // p_966->g_98
        &p_966->g_98, // p_966->g_97
        1UL, // p_966->g_198
        {{{18446744073709551612UL,0xD3BCB1EAC38ED05FL,18446744073709551612UL,18446744073709551612UL}},{{18446744073709551612UL,0xD3BCB1EAC38ED05FL,18446744073709551612UL,18446744073709551612UL}},{{18446744073709551612UL,0xD3BCB1EAC38ED05FL,18446744073709551612UL,18446744073709551612UL}},{{18446744073709551612UL,0xD3BCB1EAC38ED05FL,18446744073709551612UL,18446744073709551612UL}},{{18446744073709551612UL,0xD3BCB1EAC38ED05FL,18446744073709551612UL,18446744073709551612UL}},{{18446744073709551612UL,0xD3BCB1EAC38ED05FL,18446744073709551612UL,18446744073709551612UL}},{{18446744073709551612UL,0xD3BCB1EAC38ED05FL,18446744073709551612UL,18446744073709551612UL}},{{18446744073709551612UL,0xD3BCB1EAC38ED05FL,18446744073709551612UL,18446744073709551612UL}},{{18446744073709551612UL,0xD3BCB1EAC38ED05FL,18446744073709551612UL,18446744073709551612UL}}}, // p_966->g_201
        2L, // p_966->g_216
        (VECTOR(int8_t, 16))(0x1FL, (VECTOR(int8_t, 4))(0x1FL, (VECTOR(int8_t, 2))(0x1FL, 0x04L), 0x04L), 0x04L, 0x1FL, 0x04L, (VECTOR(int8_t, 2))(0x1FL, 0x04L), (VECTOR(int8_t, 2))(0x1FL, 0x04L), 0x1FL, 0x04L, 0x1FL, 0x04L), // p_966->g_357
        0L, // p_966->g_365
        1UL, // p_966->g_367
        0x3163L, // p_966->g_376
        (VECTOR(int32_t, 2))(6L, (-1L)), // p_966->g_438
        3L, // p_966->g_441
        1L, // p_966->g_442
        (-1L), // p_966->g_443
        {{0x75AF13EE54826B72L,0L,0L,0x75AF13EE54826B72L,0x75AF13EE54826B72L},{0x75AF13EE54826B72L,0L,0L,0x75AF13EE54826B72L,0x75AF13EE54826B72L},{0x75AF13EE54826B72L,0L,0L,0x75AF13EE54826B72L,0x75AF13EE54826B72L},{0x75AF13EE54826B72L,0L,0L,0x75AF13EE54826B72L,0x75AF13EE54826B72L},{0x75AF13EE54826B72L,0L,0L,0x75AF13EE54826B72L,0x75AF13EE54826B72L},{0x75AF13EE54826B72L,0L,0L,0x75AF13EE54826B72L,0x75AF13EE54826B72L},{0x75AF13EE54826B72L,0L,0L,0x75AF13EE54826B72L,0x75AF13EE54826B72L},{0x75AF13EE54826B72L,0L,0L,0x75AF13EE54826B72L,0x75AF13EE54826B72L},{0x75AF13EE54826B72L,0L,0L,0x75AF13EE54826B72L,0x75AF13EE54826B72L}}, // p_966->g_444
        {{&p_966->g_441,&p_966->g_441,&p_966->g_441,&p_966->g_441,&p_966->g_441,&p_966->g_441,&p_966->g_441},{&p_966->g_441,&p_966->g_441,&p_966->g_441,&p_966->g_441,&p_966->g_441,&p_966->g_441,&p_966->g_441}}, // p_966->g_440
        &p_966->g_440[1][5], // p_966->g_439
        (VECTOR(int64_t, 16))(0x243EBCEDCD0D5EF2L, (VECTOR(int64_t, 4))(0x243EBCEDCD0D5EF2L, (VECTOR(int64_t, 2))(0x243EBCEDCD0D5EF2L, 0x67BEC60F63CC25B8L), 0x67BEC60F63CC25B8L), 0x67BEC60F63CC25B8L, 0x243EBCEDCD0D5EF2L, 0x67BEC60F63CC25B8L, (VECTOR(int64_t, 2))(0x243EBCEDCD0D5EF2L, 0x67BEC60F63CC25B8L), (VECTOR(int64_t, 2))(0x243EBCEDCD0D5EF2L, 0x67BEC60F63CC25B8L), 0x243EBCEDCD0D5EF2L, 0x67BEC60F63CC25B8L, 0x243EBCEDCD0D5EF2L, 0x67BEC60F63CC25B8L), // p_966->g_447
        (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x67719E0550F2087BL), 0x67719E0550F2087BL), 0x67719E0550F2087BL, 1L, 0x67719E0550F2087BL), // p_966->g_448
        {{&p_966->g_98,&p_966->g_98,&p_966->g_98,&p_966->g_98,&p_966->g_98},{&p_966->g_98,&p_966->g_98,&p_966->g_98,&p_966->g_98,&p_966->g_98},{&p_966->g_98,&p_966->g_98,&p_966->g_98,&p_966->g_98,&p_966->g_98},{&p_966->g_98,&p_966->g_98,&p_966->g_98,&p_966->g_98,&p_966->g_98},{&p_966->g_98,&p_966->g_98,&p_966->g_98,&p_966->g_98,&p_966->g_98}}, // p_966->g_458
        1L, // p_966->g_459
        0L, // p_966->g_460
        (VECTOR(int16_t, 2))(1L, 0x7992L), // p_966->g_539
        (VECTOR(int32_t, 8))(0x38B85091L, (VECTOR(int32_t, 4))(0x38B85091L, (VECTOR(int32_t, 2))(0x38B85091L, 0x2B38D386L), 0x2B38D386L), 0x2B38D386L, 0x38B85091L, 0x2B38D386L), // p_966->g_576
        (VECTOR(int64_t, 8))((-3L), (VECTOR(int64_t, 4))((-3L), (VECTOR(int64_t, 2))((-3L), 1L), 1L), 1L, (-3L), 1L), // p_966->g_593
        (VECTOR(int64_t, 8))(0x5B7871B461BF9913L, (VECTOR(int64_t, 4))(0x5B7871B461BF9913L, (VECTOR(int64_t, 2))(0x5B7871B461BF9913L, 0x32836FBD1741CA64L), 0x32836FBD1741CA64L), 0x32836FBD1741CA64L, 0x5B7871B461BF9913L, 0x32836FBD1741CA64L), // p_966->g_601
        (VECTOR(uint32_t, 4))(0xAB498AACL, (VECTOR(uint32_t, 2))(0xAB498AACL, 4294967293UL), 4294967293UL), // p_966->g_651
        &p_966->g_216, // p_966->g_665
        4UL, // p_966->g_675
        {{{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}},{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}},{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}},{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}},{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}}},{{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}},{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}},{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}},{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}},{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}}},{{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}},{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}},{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}},{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}},{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}}},{{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}},{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}},{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}},{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}},{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}}},{{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}},{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}},{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}},{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}},{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}}},{{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}},{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}},{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}},{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}},{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}}},{{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}},{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}},{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}},{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}},{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}}},{{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}},{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}},{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}},{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}},{{5L,0x5EL,7UL,6UL,4294967295UL,0x0BL,4294967295UL,0x3214AFC9L,0x66CEC0CD670A49B1L},{0x2E4AB280L,0x85L,4294967295UL,18446744073709551615UL,4294967289UL,0x7BL,0x34746FB0L,4294967295UL,0L},{0x4E74D8F0L,7UL,0xD491D2FBL,18446744073709551615UL,4294967295UL,0x02L,4294967295UL,9UL,0x266826602CD782BDL},{1L,0xABL,1UL,18446744073709551612UL,0UL,0x5FL,0x050FA481L,8UL,0x587108556DFDA0F5L},{0x1908452FL,248UL,0x894CEEEAL,0x87071A65784F953BL,0UL,0x5DL,1UL,0x4D8A36C8L,0x16B24BA446DB3584L},{3L,0x1FL,7UL,1UL,5UL,-3L,7UL,4294967295UL,0L}}}}, // p_966->g_693
        (void*)0, // p_966->g_749
        (void*)0, // p_966->g_750
        0x054DD197L, // p_966->g_765
        (void*)0, // p_966->g_771
        {(void*)0,(void*)0,(void*)0}, // p_966->g_817
        &p_966->g_817[0], // p_966->g_816
        (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-10L)), (-10L)), (-10L), (-1L), (-10L), (VECTOR(int64_t, 2))((-1L), (-10L)), (VECTOR(int64_t, 2))((-1L), (-10L)), (-1L), (-10L), (-1L), (-10L)), // p_966->g_818
        (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x71995CC43138517BL), 0x71995CC43138517BL), // p_966->g_819
        {&p_966->g_98,&p_966->g_98,&p_966->g_98,&p_966->g_98,&p_966->g_98,&p_966->g_98}, // p_966->g_843
        &p_966->g_98, // p_966->g_844
        {{{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749}},{{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749}},{{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749}},{{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749}},{{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749}},{{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749}},{{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749}},{{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749},{&p_966->g_749,(void*)0,&p_966->g_749}}}, // p_966->g_845
        &p_966->g_749, // p_966->g_846
        (VECTOR(uint64_t, 2))(0x255851AB2FA75D0EL, 0x7878602B690A5BFDL), // p_966->g_847
        (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL), // p_966->g_851
        1L, // p_966->g_854
        &p_966->g_816, // p_966->g_878
        &p_966->g_693[6][2][2], // p_966->g_882
        (void*)0, // p_966->g_883
        &p_966->g_693[3][2][4], // p_966->g_889
        {&p_966->g_889,&p_966->g_889,&p_966->g_889,&p_966->g_889,&p_966->g_889,&p_966->g_889,&p_966->g_889,&p_966->g_889,&p_966->g_889}, // p_966->g_888
        {0xBC96F4E0L}, // p_966->g_892
        (void*)0, // p_966->g_893
        &p_966->g_892, // p_966->g_894
        {0x30F4EC89L,255UL,4294967291UL,0xFBF027C891057849L,0xE01D35E4L,0x4DL,0xF92D774BL,0x11973284L,3L}, // p_966->g_965
        0, // p_966->v_collective
        sequence_input[get_global_id(0)], // p_966->global_0_offset
        sequence_input[get_global_id(1)], // p_966->global_1_offset
        sequence_input[get_global_id(2)], // p_966->global_2_offset
        sequence_input[get_local_id(0)], // p_966->local_0_offset
        sequence_input[get_local_id(1)], // p_966->local_1_offset
        sequence_input[get_local_id(2)], // p_966->local_2_offset
        sequence_input[get_group_id(0)], // p_966->group_0_offset
        sequence_input[get_group_id(1)], // p_966->group_1_offset
        sequence_input[get_group_id(2)], // p_966->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 67)), permutations[0][get_linear_local_id()])), // p_966->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_967 = c_968;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_966);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_966->g_7.x, "p_966->g_7.x", print_hash_value);
    transparent_crc(p_966->g_7.y, "p_966->g_7.y", print_hash_value);
    transparent_crc(p_966->g_7.z, "p_966->g_7.z", print_hash_value);
    transparent_crc(p_966->g_7.w, "p_966->g_7.w", print_hash_value);
    transparent_crc(p_966->g_8.s0, "p_966->g_8.s0", print_hash_value);
    transparent_crc(p_966->g_8.s1, "p_966->g_8.s1", print_hash_value);
    transparent_crc(p_966->g_8.s2, "p_966->g_8.s2", print_hash_value);
    transparent_crc(p_966->g_8.s3, "p_966->g_8.s3", print_hash_value);
    transparent_crc(p_966->g_8.s4, "p_966->g_8.s4", print_hash_value);
    transparent_crc(p_966->g_8.s5, "p_966->g_8.s5", print_hash_value);
    transparent_crc(p_966->g_8.s6, "p_966->g_8.s6", print_hash_value);
    transparent_crc(p_966->g_8.s7, "p_966->g_8.s7", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_966->g_51[i][j][k], "p_966->g_51[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_966->g_65.s0, "p_966->g_65.s0", print_hash_value);
    transparent_crc(p_966->g_65.s1, "p_966->g_65.s1", print_hash_value);
    transparent_crc(p_966->g_65.s2, "p_966->g_65.s2", print_hash_value);
    transparent_crc(p_966->g_65.s3, "p_966->g_65.s3", print_hash_value);
    transparent_crc(p_966->g_65.s4, "p_966->g_65.s4", print_hash_value);
    transparent_crc(p_966->g_65.s5, "p_966->g_65.s5", print_hash_value);
    transparent_crc(p_966->g_65.s6, "p_966->g_65.s6", print_hash_value);
    transparent_crc(p_966->g_65.s7, "p_966->g_65.s7", print_hash_value);
    transparent_crc(p_966->g_67.s0, "p_966->g_67.s0", print_hash_value);
    transparent_crc(p_966->g_67.s1, "p_966->g_67.s1", print_hash_value);
    transparent_crc(p_966->g_67.s2, "p_966->g_67.s2", print_hash_value);
    transparent_crc(p_966->g_67.s3, "p_966->g_67.s3", print_hash_value);
    transparent_crc(p_966->g_67.s4, "p_966->g_67.s4", print_hash_value);
    transparent_crc(p_966->g_67.s5, "p_966->g_67.s5", print_hash_value);
    transparent_crc(p_966->g_67.s6, "p_966->g_67.s6", print_hash_value);
    transparent_crc(p_966->g_67.s7, "p_966->g_67.s7", print_hash_value);
    transparent_crc(p_966->g_67.s8, "p_966->g_67.s8", print_hash_value);
    transparent_crc(p_966->g_67.s9, "p_966->g_67.s9", print_hash_value);
    transparent_crc(p_966->g_67.sa, "p_966->g_67.sa", print_hash_value);
    transparent_crc(p_966->g_67.sb, "p_966->g_67.sb", print_hash_value);
    transparent_crc(p_966->g_67.sc, "p_966->g_67.sc", print_hash_value);
    transparent_crc(p_966->g_67.sd, "p_966->g_67.sd", print_hash_value);
    transparent_crc(p_966->g_67.se, "p_966->g_67.se", print_hash_value);
    transparent_crc(p_966->g_67.sf, "p_966->g_67.sf", print_hash_value);
    transparent_crc(p_966->g_89, "p_966->g_89", print_hash_value);
    transparent_crc(p_966->g_91, "p_966->g_91", print_hash_value);
    transparent_crc(p_966->g_198, "p_966->g_198", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_966->g_201[i][j][k], "p_966->g_201[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_966->g_216, "p_966->g_216", print_hash_value);
    transparent_crc(p_966->g_357.s0, "p_966->g_357.s0", print_hash_value);
    transparent_crc(p_966->g_357.s1, "p_966->g_357.s1", print_hash_value);
    transparent_crc(p_966->g_357.s2, "p_966->g_357.s2", print_hash_value);
    transparent_crc(p_966->g_357.s3, "p_966->g_357.s3", print_hash_value);
    transparent_crc(p_966->g_357.s4, "p_966->g_357.s4", print_hash_value);
    transparent_crc(p_966->g_357.s5, "p_966->g_357.s5", print_hash_value);
    transparent_crc(p_966->g_357.s6, "p_966->g_357.s6", print_hash_value);
    transparent_crc(p_966->g_357.s7, "p_966->g_357.s7", print_hash_value);
    transparent_crc(p_966->g_357.s8, "p_966->g_357.s8", print_hash_value);
    transparent_crc(p_966->g_357.s9, "p_966->g_357.s9", print_hash_value);
    transparent_crc(p_966->g_357.sa, "p_966->g_357.sa", print_hash_value);
    transparent_crc(p_966->g_357.sb, "p_966->g_357.sb", print_hash_value);
    transparent_crc(p_966->g_357.sc, "p_966->g_357.sc", print_hash_value);
    transparent_crc(p_966->g_357.sd, "p_966->g_357.sd", print_hash_value);
    transparent_crc(p_966->g_357.se, "p_966->g_357.se", print_hash_value);
    transparent_crc(p_966->g_357.sf, "p_966->g_357.sf", print_hash_value);
    transparent_crc(p_966->g_365, "p_966->g_365", print_hash_value);
    transparent_crc(p_966->g_367, "p_966->g_367", print_hash_value);
    transparent_crc(p_966->g_376, "p_966->g_376", print_hash_value);
    transparent_crc(p_966->g_438.x, "p_966->g_438.x", print_hash_value);
    transparent_crc(p_966->g_438.y, "p_966->g_438.y", print_hash_value);
    transparent_crc(p_966->g_441, "p_966->g_441", print_hash_value);
    transparent_crc(p_966->g_442, "p_966->g_442", print_hash_value);
    transparent_crc(p_966->g_443, "p_966->g_443", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_966->g_444[i][j], "p_966->g_444[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_966->g_447.s0, "p_966->g_447.s0", print_hash_value);
    transparent_crc(p_966->g_447.s1, "p_966->g_447.s1", print_hash_value);
    transparent_crc(p_966->g_447.s2, "p_966->g_447.s2", print_hash_value);
    transparent_crc(p_966->g_447.s3, "p_966->g_447.s3", print_hash_value);
    transparent_crc(p_966->g_447.s4, "p_966->g_447.s4", print_hash_value);
    transparent_crc(p_966->g_447.s5, "p_966->g_447.s5", print_hash_value);
    transparent_crc(p_966->g_447.s6, "p_966->g_447.s6", print_hash_value);
    transparent_crc(p_966->g_447.s7, "p_966->g_447.s7", print_hash_value);
    transparent_crc(p_966->g_447.s8, "p_966->g_447.s8", print_hash_value);
    transparent_crc(p_966->g_447.s9, "p_966->g_447.s9", print_hash_value);
    transparent_crc(p_966->g_447.sa, "p_966->g_447.sa", print_hash_value);
    transparent_crc(p_966->g_447.sb, "p_966->g_447.sb", print_hash_value);
    transparent_crc(p_966->g_447.sc, "p_966->g_447.sc", print_hash_value);
    transparent_crc(p_966->g_447.sd, "p_966->g_447.sd", print_hash_value);
    transparent_crc(p_966->g_447.se, "p_966->g_447.se", print_hash_value);
    transparent_crc(p_966->g_447.sf, "p_966->g_447.sf", print_hash_value);
    transparent_crc(p_966->g_448.s0, "p_966->g_448.s0", print_hash_value);
    transparent_crc(p_966->g_448.s1, "p_966->g_448.s1", print_hash_value);
    transparent_crc(p_966->g_448.s2, "p_966->g_448.s2", print_hash_value);
    transparent_crc(p_966->g_448.s3, "p_966->g_448.s3", print_hash_value);
    transparent_crc(p_966->g_448.s4, "p_966->g_448.s4", print_hash_value);
    transparent_crc(p_966->g_448.s5, "p_966->g_448.s5", print_hash_value);
    transparent_crc(p_966->g_448.s6, "p_966->g_448.s6", print_hash_value);
    transparent_crc(p_966->g_448.s7, "p_966->g_448.s7", print_hash_value);
    transparent_crc(p_966->g_459, "p_966->g_459", print_hash_value);
    transparent_crc(p_966->g_460, "p_966->g_460", print_hash_value);
    transparent_crc(p_966->g_539.x, "p_966->g_539.x", print_hash_value);
    transparent_crc(p_966->g_539.y, "p_966->g_539.y", print_hash_value);
    transparent_crc(p_966->g_576.s0, "p_966->g_576.s0", print_hash_value);
    transparent_crc(p_966->g_576.s1, "p_966->g_576.s1", print_hash_value);
    transparent_crc(p_966->g_576.s2, "p_966->g_576.s2", print_hash_value);
    transparent_crc(p_966->g_576.s3, "p_966->g_576.s3", print_hash_value);
    transparent_crc(p_966->g_576.s4, "p_966->g_576.s4", print_hash_value);
    transparent_crc(p_966->g_576.s5, "p_966->g_576.s5", print_hash_value);
    transparent_crc(p_966->g_576.s6, "p_966->g_576.s6", print_hash_value);
    transparent_crc(p_966->g_576.s7, "p_966->g_576.s7", print_hash_value);
    transparent_crc(p_966->g_593.s0, "p_966->g_593.s0", print_hash_value);
    transparent_crc(p_966->g_593.s1, "p_966->g_593.s1", print_hash_value);
    transparent_crc(p_966->g_593.s2, "p_966->g_593.s2", print_hash_value);
    transparent_crc(p_966->g_593.s3, "p_966->g_593.s3", print_hash_value);
    transparent_crc(p_966->g_593.s4, "p_966->g_593.s4", print_hash_value);
    transparent_crc(p_966->g_593.s5, "p_966->g_593.s5", print_hash_value);
    transparent_crc(p_966->g_593.s6, "p_966->g_593.s6", print_hash_value);
    transparent_crc(p_966->g_593.s7, "p_966->g_593.s7", print_hash_value);
    transparent_crc(p_966->g_601.s0, "p_966->g_601.s0", print_hash_value);
    transparent_crc(p_966->g_601.s1, "p_966->g_601.s1", print_hash_value);
    transparent_crc(p_966->g_601.s2, "p_966->g_601.s2", print_hash_value);
    transparent_crc(p_966->g_601.s3, "p_966->g_601.s3", print_hash_value);
    transparent_crc(p_966->g_601.s4, "p_966->g_601.s4", print_hash_value);
    transparent_crc(p_966->g_601.s5, "p_966->g_601.s5", print_hash_value);
    transparent_crc(p_966->g_601.s6, "p_966->g_601.s6", print_hash_value);
    transparent_crc(p_966->g_601.s7, "p_966->g_601.s7", print_hash_value);
    transparent_crc(p_966->g_651.x, "p_966->g_651.x", print_hash_value);
    transparent_crc(p_966->g_651.y, "p_966->g_651.y", print_hash_value);
    transparent_crc(p_966->g_651.z, "p_966->g_651.z", print_hash_value);
    transparent_crc(p_966->g_651.w, "p_966->g_651.w", print_hash_value);
    transparent_crc(p_966->g_675, "p_966->g_675", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_966->g_693[i][j][k].f0, "p_966->g_693[i][j][k].f0", print_hash_value);
                transparent_crc(p_966->g_693[i][j][k].f1, "p_966->g_693[i][j][k].f1", print_hash_value);
                transparent_crc(p_966->g_693[i][j][k].f2, "p_966->g_693[i][j][k].f2", print_hash_value);
                transparent_crc(p_966->g_693[i][j][k].f3, "p_966->g_693[i][j][k].f3", print_hash_value);
                transparent_crc(p_966->g_693[i][j][k].f4, "p_966->g_693[i][j][k].f4", print_hash_value);
                transparent_crc(p_966->g_693[i][j][k].f5, "p_966->g_693[i][j][k].f5", print_hash_value);
                transparent_crc(p_966->g_693[i][j][k].f6, "p_966->g_693[i][j][k].f6", print_hash_value);
                transparent_crc(p_966->g_693[i][j][k].f7, "p_966->g_693[i][j][k].f7", print_hash_value);
                transparent_crc(p_966->g_693[i][j][k].f8, "p_966->g_693[i][j][k].f8", print_hash_value);

            }
        }
    }
    transparent_crc(p_966->g_765, "p_966->g_765", print_hash_value);
    transparent_crc(p_966->g_818.s0, "p_966->g_818.s0", print_hash_value);
    transparent_crc(p_966->g_818.s1, "p_966->g_818.s1", print_hash_value);
    transparent_crc(p_966->g_818.s2, "p_966->g_818.s2", print_hash_value);
    transparent_crc(p_966->g_818.s3, "p_966->g_818.s3", print_hash_value);
    transparent_crc(p_966->g_818.s4, "p_966->g_818.s4", print_hash_value);
    transparent_crc(p_966->g_818.s5, "p_966->g_818.s5", print_hash_value);
    transparent_crc(p_966->g_818.s6, "p_966->g_818.s6", print_hash_value);
    transparent_crc(p_966->g_818.s7, "p_966->g_818.s7", print_hash_value);
    transparent_crc(p_966->g_818.s8, "p_966->g_818.s8", print_hash_value);
    transparent_crc(p_966->g_818.s9, "p_966->g_818.s9", print_hash_value);
    transparent_crc(p_966->g_818.sa, "p_966->g_818.sa", print_hash_value);
    transparent_crc(p_966->g_818.sb, "p_966->g_818.sb", print_hash_value);
    transparent_crc(p_966->g_818.sc, "p_966->g_818.sc", print_hash_value);
    transparent_crc(p_966->g_818.sd, "p_966->g_818.sd", print_hash_value);
    transparent_crc(p_966->g_818.se, "p_966->g_818.se", print_hash_value);
    transparent_crc(p_966->g_818.sf, "p_966->g_818.sf", print_hash_value);
    transparent_crc(p_966->g_819.x, "p_966->g_819.x", print_hash_value);
    transparent_crc(p_966->g_819.y, "p_966->g_819.y", print_hash_value);
    transparent_crc(p_966->g_819.z, "p_966->g_819.z", print_hash_value);
    transparent_crc(p_966->g_819.w, "p_966->g_819.w", print_hash_value);
    transparent_crc(p_966->g_847.x, "p_966->g_847.x", print_hash_value);
    transparent_crc(p_966->g_847.y, "p_966->g_847.y", print_hash_value);
    transparent_crc(p_966->g_851.s0, "p_966->g_851.s0", print_hash_value);
    transparent_crc(p_966->g_851.s1, "p_966->g_851.s1", print_hash_value);
    transparent_crc(p_966->g_851.s2, "p_966->g_851.s2", print_hash_value);
    transparent_crc(p_966->g_851.s3, "p_966->g_851.s3", print_hash_value);
    transparent_crc(p_966->g_851.s4, "p_966->g_851.s4", print_hash_value);
    transparent_crc(p_966->g_851.s5, "p_966->g_851.s5", print_hash_value);
    transparent_crc(p_966->g_851.s6, "p_966->g_851.s6", print_hash_value);
    transparent_crc(p_966->g_851.s7, "p_966->g_851.s7", print_hash_value);
    transparent_crc(p_966->g_854, "p_966->g_854", print_hash_value);
    transparent_crc(p_966->g_892.f0, "p_966->g_892.f0", print_hash_value);
    transparent_crc(p_966->g_965.f0, "p_966->g_965.f0", print_hash_value);
    transparent_crc(p_966->g_965.f1, "p_966->g_965.f1", print_hash_value);
    transparent_crc(p_966->g_965.f2, "p_966->g_965.f2", print_hash_value);
    transparent_crc(p_966->g_965.f3, "p_966->g_965.f3", print_hash_value);
    transparent_crc(p_966->g_965.f4, "p_966->g_965.f4", print_hash_value);
    transparent_crc(p_966->g_965.f5, "p_966->g_965.f5", print_hash_value);
    transparent_crc(p_966->g_965.f6, "p_966->g_965.f6", print_hash_value);
    transparent_crc(p_966->g_965.f7, "p_966->g_965.f7", print_hash_value);
    transparent_crc(p_966->g_965.f8, "p_966->g_965.f8", print_hash_value);
    transparent_crc(p_966->v_collective, "p_966->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 65; i++)
            transparent_crc(p_966->g_special_values[i + 65 * get_linear_group_id()], "p_966->g_special_values[i + 65 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 65; i++)
            transparent_crc(p_966->l_special_values[i], "p_966->l_special_values[i]", print_hash_value);
    transparent_crc(p_966->l_comm_values[get_linear_local_id()], "p_966->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_966->g_comm_values[get_linear_group_id() * 67 + get_linear_local_id()], "p_966->g_comm_values[get_linear_group_id() * 67 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
