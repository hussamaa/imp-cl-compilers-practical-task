// --atomics 37 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 80,65,1 -l 1,5,1
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

__constant uint32_t permutations[10][5] = {
{4,0,2,1,3}, // permutation 0
{2,4,1,0,3}, // permutation 1
{1,3,0,2,4}, // permutation 2
{1,3,2,0,4}, // permutation 3
{1,0,2,4,3}, // permutation 4
{4,0,2,3,1}, // permutation 5
{1,4,2,0,3}, // permutation 6
{1,2,4,3,0}, // permutation 7
{3,0,4,2,1}, // permutation 8
{4,0,2,3,1} // permutation 9
};

// Seed: 2575465871

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    uint8_t g_2;
    int32_t g_4;
    int32_t *g_3;
    int32_t ** volatile g_5;
    VECTOR(uint8_t, 16) g_18;
    volatile VECTOR(int32_t, 16) g_36;
    VECTOR(int32_t, 2) g_41;
    VECTOR(int32_t, 2) g_44;
    volatile VECTOR(int32_t, 8) g_46;
    volatile VECTOR(int32_t, 8) g_48;
    VECTOR(uint32_t, 8) g_57;
    uint64_t g_116;
    uint64_t g_119;
    uint16_t g_137;
    int32_t g_145;
    int64_t g_147;
    VECTOR(int16_t, 4) g_150;
    uint32_t g_153;
    uint32_t *g_156;
    uint32_t **g_155;
    uint32_t g_169;
    uint16_t g_220;
    int8_t g_224[6][1][4];
    volatile VECTOR(uint8_t, 8) g_250;
    VECTOR(int16_t, 2) g_257;
    uint32_t g_261;
    uint8_t g_288;
    volatile VECTOR(int8_t, 2) g_297;
    int32_t ** volatile g_301;
    VECTOR(int16_t, 16) g_400;
    VECTOR(uint8_t, 8) g_403;
    int8_t g_416;
    VECTOR(uint64_t, 8) g_465;
    VECTOR(int32_t, 4) g_485;
    uint8_t g_495;
    volatile int32_t g_497;
    volatile int64_t g_525;
    int32_t ** volatile g_533;
    int32_t *g_534;
    VECTOR(uint32_t, 4) g_610;
    int16_t **g_616;
    volatile VECTOR(int64_t, 4) g_624;
    int16_t *g_637[7];
    volatile int32_t *g_646[2];
    volatile int32_t **g_645[7][5][4];
    volatile int32_t ** volatile *g_644[10];
    volatile int32_t ** volatile **g_643;
    int64_t g_648;
    volatile VECTOR(int8_t, 16) g_686;
    VECTOR(int64_t, 16) g_693;
    VECTOR(uint16_t, 16) g_696;
    VECTOR(int16_t, 2) g_697;
    VECTOR(int64_t, 2) g_698;
    volatile VECTOR(int32_t, 4) g_776;
    int32_t *g_798[3];
    int32_t **g_797;
    volatile VECTOR(uint32_t, 16) g_869;
    uint8_t g_878;
    VECTOR(uint8_t, 8) g_908;
    int32_t ***g_915;
    int32_t ****g_914[8][3];
    int8_t *g_957;
    int8_t **g_956;
    VECTOR(int16_t, 2) g_966;
    VECTOR(uint64_t, 8) g_969;
    int32_t * volatile g_1053;
    int32_t * volatile g_1054;
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
uint32_t  func_1(struct S0 * p_1057);
uint64_t  func_9(int32_t * p_10, int8_t  p_11, struct S0 * p_1057);
uint32_t  func_12(uint64_t  p_13, uint32_t  p_14, int8_t  p_15, int32_t ** p_16, uint32_t  p_17, struct S0 * p_1057);
int8_t  func_26(int32_t * p_27, struct S0 * p_1057);
int32_t * func_28(int32_t ** p_29, int16_t  p_30, int32_t * p_31, int32_t ** p_32, int32_t ** p_33, struct S0 * p_1057);
int32_t ** func_34(uint64_t  p_35, struct S0 * p_1057);
uint64_t  func_50(int32_t ** p_51, int8_t  p_52, struct S0 * p_1057);
int32_t ** func_53(uint32_t  p_54, uint64_t  p_55, struct S0 * p_1057);
int32_t  func_71(int32_t  p_72, int32_t * p_73, int32_t  p_74, int32_t ** p_75, struct S0 * p_1057);
int32_t * func_76(int32_t  p_77, int32_t * p_78, int32_t * p_79, uint16_t  p_80, struct S0 * p_1057);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1057->g_comm_values p_1057->l_comm_values p_1057->g_3 p_1057->g_5 p_1057->g_2 p_1057->g_18 p_1057->g_4 p_1057->g_36 p_1057->g_41 p_1057->g_44 p_1057->g_46 p_1057->g_48 p_1057->g_137 p_1057->g_57 p_1057->g_119 p_1057->g_150 p_1057->g_169 p_1057->g_156 p_1057->g_153 p_1057->g_145 p_1057->g_220 p_1057->g_224 p_1057->g_250 p_1057->g_257 p_1057->g_147 p_1057->g_261 p_1057->g_155 p_1057->g_116 p_1057->g_297 p_1057->g_301 p_1057->g_288 p_1057->g_400 p_1057->g_403 p_1057->g_465 p_1057->g_485 p_1057->g_495 p_1057->g_797 p_1057->g_798 p_1057->g_869 p_1057->g_610 p_1057->g_686 p_1057->g_534 p_1057->g_624 p_1057->g_878 p_1057->g_648 p_1057->g_914 p_1057->g_915 p_1057->g_643 p_1057->g_644 p_1057->g_645 p_1057->g_966 p_1057->g_969 p_1057->g_957 p_1057->g_693 p_1057->g_525
 * writes: p_1057->g_2 p_1057->g_3 p_1057->g_57 p_1057->g_116 p_1057->g_119 p_1057->g_137 p_1057->g_145 p_1057->g_147 p_1057->g_44 p_1057->g_150 p_1057->g_155 p_1057->g_169 p_1057->g_220 p_1057->g_224 p_1057->g_153 p_1057->g_36 p_1057->g_257 p_1057->g_288 p_1057->g_46 p_1057->g_416 p_1057->g_534 p_1057->g_798 p_1057->g_648 p_1057->g_914 p_1057->g_956 p_1057->g_495 p_1057->g_4
 */
uint32_t  func_1(struct S0 * p_1057)
{ /* block id: 4 */
    uint16_t l_23 = 0x18B4L;
    int32_t *l_796 = (void*)0;
    int32_t **l_795 = &l_796;
    uint64_t *l_988 = &p_1057->g_116;
    int32_t l_989 = 0x1C297D33L;
    int32_t *l_1049 = (void*)0;
    int32_t *l_1050 = (void*)0;
    int32_t *l_1051 = &p_1057->g_4;
    int32_t *l_1052 = (void*)0;
    int32_t *l_1055[5][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int8_t l_1056 = 0L;
    int i, j;
    p_1057->g_2 = (p_1057->g_comm_values[p_1057->tid] > p_1057->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1057->tid, 5))]);
    (*p_1057->g_5) = p_1057->g_3;
    for (p_1057->g_2 = 0; (p_1057->g_2 < 14); p_1057->g_2++)
    { /* block id: 9 */
        int32_t l_8 = 1L;
        return l_8;
    }
    l_1056 = ((*l_1051) = (((func_9((func_12((FAKE_DIVERGE(p_1057->global_2_offset, get_global_id(2), 10) , ((*l_988) = (((((VECTOR(uint8_t, 4))(p_1057->g_18.s1f34)).x != p_1057->g_comm_values[p_1057->tid]) | 0x63A74ADFL) & (((((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 2))(0x10660D64C9D8D924L, 1L)).yyyy))).w != (safe_mod_func_uint16_t_u_u((p_1057->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1057->tid, 5))] && (safe_add_func_uint32_t_u_u(l_23, (~(-9L))))), l_23))) != (safe_sub_func_int16_t_s_s(p_1057->g_18.sa, p_1057->g_4))) != func_26(((*l_795) = func_28(func_34(l_23, p_1057), l_23, &p_1057->g_4, l_795, p_1057->g_797, p_1057)), p_1057))))), p_1057->g_465.s6, l_989, (*p_1057->g_915), p_1057->g_693.sc, p_1057) , (*l_795)), p_1057->g_969.s7, p_1057) || p_1057->g_153) , p_1057->g_250.s1) , (*p_1057->g_3)));
    return p_1057->g_525;
}


/* ------------------------------------------ */
/* 
 * reads : p_1057->g_3 p_1057->g_686 p_1057->g_610 p_1057->g_400 p_1057->g_155 p_1057->g_156 p_1057->g_957 p_1057->l_comm_values p_1057->g_153 p_1057->g_465 p_1057->g_301 p_1057->g_18
 * writes: p_1057->g_4 p_1057->g_224 p_1057->g_153
 */
uint64_t  func_9(int32_t * p_10, int8_t  p_11, struct S0 * p_1057)
{ /* block id: 487 */
    VECTOR(int8_t, 2) l_1006 = (VECTOR(int8_t, 2))((-9L), 0x4CL);
    VECTOR(int8_t, 8) l_1007 = (VECTOR(int8_t, 8))(0x5EL, (VECTOR(int8_t, 4))(0x5EL, (VECTOR(int8_t, 2))(0x5EL, (-1L)), (-1L)), (-1L), 0x5EL, (-1L));
    VECTOR(int16_t, 8) l_1008 = (VECTOR(int16_t, 8))(9L, (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, 6L), 6L), 6L, 9L, 6L);
    uint32_t *l_1027[2];
    int32_t ****l_1040[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_1041[5] = {1L,1L,1L,1L,1L};
    uint8_t *l_1042 = &p_1057->g_495;
    uint16_t l_1043 = 0x28F7L;
    int64_t l_1044[10][7] = {{0x3040BE860A95C307L,0x3040BE860A95C307L,0x37A5B13BE0F7EA79L,(-1L),0L,(-7L),(-1L)},{0x3040BE860A95C307L,0x3040BE860A95C307L,0x37A5B13BE0F7EA79L,(-1L),0L,(-7L),(-1L)},{0x3040BE860A95C307L,0x3040BE860A95C307L,0x37A5B13BE0F7EA79L,(-1L),0L,(-7L),(-1L)},{0x3040BE860A95C307L,0x3040BE860A95C307L,0x37A5B13BE0F7EA79L,(-1L),0L,(-7L),(-1L)},{0x3040BE860A95C307L,0x3040BE860A95C307L,0x37A5B13BE0F7EA79L,(-1L),0L,(-7L),(-1L)},{0x3040BE860A95C307L,0x3040BE860A95C307L,0x37A5B13BE0F7EA79L,(-1L),0L,(-7L),(-1L)},{0x3040BE860A95C307L,0x3040BE860A95C307L,0x37A5B13BE0F7EA79L,(-1L),0L,(-7L),(-1L)},{0x3040BE860A95C307L,0x3040BE860A95C307L,0x37A5B13BE0F7EA79L,(-1L),0L,(-7L),(-1L)},{0x3040BE860A95C307L,0x3040BE860A95C307L,0x37A5B13BE0F7EA79L,(-1L),0L,(-7L),(-1L)},{0x3040BE860A95C307L,0x3040BE860A95C307L,0x37A5B13BE0F7EA79L,(-1L),0L,(-7L),(-1L)}};
    int8_t l_1045 = 6L;
    uint64_t l_1046 = 0x33CA6664337E718BL;
    uint32_t l_1047 = 0x356BA250L;
    int8_t l_1048 = (-6L);
    int i, j;
    for (i = 0; i < 2; i++)
        l_1027[i] = &p_1057->g_153;
    (*p_1057->g_3) = (safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 2))(l_1006.yx)).hi, (~((VECTOR(int8_t, 16))(l_1007.s0510137204542060)).se)));
    (**p_1057->g_301) = (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x6A54117A6FDD1845L, 1L)).xyxy)).y , ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 4))(l_1008.s4674)).xxzwwzwywyzyxzyz, ((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 16))(min(((VECTOR(uint8_t, 4))(0x84L, 0x32L, 0x02L, 0x46L)).wwwyzwyzzyzyywwz, (uint8_t)(safe_lshift_func_uint8_t_u_u((1UL != (((safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u((((VECTOR(int64_t, 8))(1L, ((VECTOR(int64_t, 2))(0x21D9716C9163DA3EL, 0x4BEE3C5694617EA0L)), 1L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(0L, 0x66E0656236958D72L)))), 0x5CD3547A2C4753DBL, 4L)).s4 ^ p_1057->g_686.s2), 14)), ((safe_lshift_func_uint16_t_u_s(((safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((**p_1057->g_155) &= (safe_rshift_func_uint16_t_u_s(((((p_1057->g_610.x , p_1057->g_400.sc) , (*p_1057->g_155)) != l_1027[0]) == (((safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(0xF4L, ((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 8))(0xC2L, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(0xDFL, 2UL)))), ((l_1006.x , (safe_div_func_uint32_t_u_u(l_1008.s1, (safe_mul_func_int8_t_s_s(((safe_mod_func_int16_t_s_s((((((*p_1057->g_957) = (safe_mul_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((((1UL >= 5L) , l_1040[4]) == (void*)0), p_11)) > 248UL), 0L))) == p_11) >= 0x07L) != 1L), 65535UL)) & l_1041[3]), p_11))))) , p_1057->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1057->tid, 5))]), 0UL, 0xB3L, 255UL, 0xB8L)).s26, ((VECTOR(uint8_t, 2))(0xE5L))))), p_11, ((VECTOR(uint8_t, 4))(0x9FL)), 0x01L, ((VECTOR(uint8_t, 4))(1UL)), 0xB9L, 1UL, 0x8FL)).s3, p_11)) , (void*)0) == l_1042)), l_1043))), l_1044[9][0])), p_11)) ^ l_1045), p_11)) , 253UL))) > p_11) != l_1046), l_1047)), l_1048)) && 0L) ^ 4294967295UL)), p_1057->g_465.s6))))), ((VECTOR(uint8_t, 16))(0xECL)))))))).se696)).xwwxxxwx, ((VECTOR(int32_t, 8))(0x0B89F785L))))).s0);
    return p_1057->g_18.s1;
}


/* ------------------------------------------ */
/* 
 * reads : p_1057->g_137 p_1057->g_301 p_1057->g_3 p_1057->g_4 p_1057->g_878 p_1057->g_624
 * writes: p_1057->g_137
 */
uint32_t  func_12(uint64_t  p_13, uint32_t  p_14, int8_t  p_15, int32_t ** p_16, uint32_t  p_17, struct S0 * p_1057)
{ /* block id: 467 */
    uint32_t l_992 = 0x7F34BC04L;
    int32_t *l_995[1];
    uint32_t l_1001[9] = {2UL,2UL,2UL,2UL,2UL,2UL,2UL,2UL,2UL};
    int i;
    for (i = 0; i < 1; i++)
        l_995[i] = (void*)0;
    for (p_1057->g_137 = 0; (p_1057->g_137 > 21); p_1057->g_137++)
    { /* block id: 470 */
        int32_t *l_996 = (void*)0;
        ++l_992;
        if ((**p_1057->g_301))
            break;
        l_996 = l_995[0];
    }
    for (p_15 = 1; (p_15 >= (-21)); p_15 = safe_sub_func_int32_t_s_s(p_15, 7))
    { /* block id: 477 */
        return p_1057->g_878;
    }
    for (p_15 = (-22); (p_15 == 2); p_15 = safe_add_func_int64_t_s_s(p_15, 5))
    { /* block id: 482 */
        l_995[0] = l_995[0];
    }
    ++l_1001[1];
    return p_1057->g_624.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_1057->g_957 p_1057->g_224
 * writes:
 */
int8_t  func_26(int32_t * p_27, struct S0 * p_1057)
{ /* block id: 464 */
    return (*p_1057->g_957);
}


/* ------------------------------------------ */
/* 
 * reads : p_1057->g_797 p_1057->g_798 p_1057->g_4 p_1057->g_485 p_1057->g_869 p_1057->g_495 p_1057->g_403 p_1057->g_610 p_1057->g_686 p_1057->g_137 p_1057->g_44 p_1057->g_comm_values p_1057->g_36 p_1057->g_5 p_1057->g_3 p_1057->g_2 p_1057->g_150 p_1057->g_534 p_1057->g_624 p_1057->g_878 p_1057->g_224 p_1057->g_648 p_1057->g_914 p_1057->g_288 p_1057->g_915 p_1057->g_155 p_1057->g_156 p_1057->g_153 p_1057->g_643 p_1057->g_644 p_1057->g_645 p_1057->g_966 p_1057->g_969 p_1057->g_220 p_1057->g_957
 * writes: p_1057->g_798 p_1057->g_116 p_1057->g_119 p_1057->g_44 p_1057->g_2 p_1057->g_648 p_1057->g_153 p_1057->g_914 p_1057->g_288 p_1057->g_956 p_1057->g_220 p_1057->g_137 p_1057->g_495
 */
int32_t * func_28(int32_t ** p_29, int16_t  p_30, int32_t * p_31, int32_t ** p_32, int32_t ** p_33, struct S0 * p_1057)
{ /* block id: 324 */
    int8_t l_799 = (-3L);
    int32_t l_800 = (-1L);
    int32_t *l_801 = (void*)0;
    int32_t *l_802[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_803 = 0x08E4A95FL;
    uint32_t l_894 = 4294967290UL;
    int64_t l_922 = 0x711EF31A93440D62L;
    int32_t l_931[4];
    int8_t *l_954 = &p_1057->g_224[3][0][0];
    int8_t **l_953[3][8][7] = {{{&l_954,&l_954,&l_954,&l_954,&l_954,&l_954,&l_954},{&l_954,&l_954,&l_954,&l_954,&l_954,&l_954,&l_954},{&l_954,&l_954,&l_954,&l_954,&l_954,&l_954,&l_954},{&l_954,&l_954,&l_954,&l_954,&l_954,&l_954,&l_954},{&l_954,&l_954,&l_954,&l_954,&l_954,&l_954,&l_954},{&l_954,&l_954,&l_954,&l_954,&l_954,&l_954,&l_954},{&l_954,&l_954,&l_954,&l_954,&l_954,&l_954,&l_954},{&l_954,&l_954,&l_954,&l_954,&l_954,&l_954,&l_954}},{{&l_954,&l_954,&l_954,&l_954,&l_954,&l_954,&l_954},{&l_954,&l_954,&l_954,&l_954,&l_954,&l_954,&l_954},{&l_954,&l_954,&l_954,&l_954,&l_954,&l_954,&l_954},{&l_954,&l_954,&l_954,&l_954,&l_954,&l_954,&l_954},{&l_954,&l_954,&l_954,&l_954,&l_954,&l_954,&l_954},{&l_954,&l_954,&l_954,&l_954,&l_954,&l_954,&l_954},{&l_954,&l_954,&l_954,&l_954,&l_954,&l_954,&l_954},{&l_954,&l_954,&l_954,&l_954,&l_954,&l_954,&l_954}},{{&l_954,&l_954,&l_954,&l_954,&l_954,&l_954,&l_954},{&l_954,&l_954,&l_954,&l_954,&l_954,&l_954,&l_954},{&l_954,&l_954,&l_954,&l_954,&l_954,&l_954,&l_954},{&l_954,&l_954,&l_954,&l_954,&l_954,&l_954,&l_954},{&l_954,&l_954,&l_954,&l_954,&l_954,&l_954,&l_954},{&l_954,&l_954,&l_954,&l_954,&l_954,&l_954,&l_954},{&l_954,&l_954,&l_954,&l_954,&l_954,&l_954,&l_954},{&l_954,&l_954,&l_954,&l_954,&l_954,&l_954,&l_954}}};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_931[i] = 0x6718B045L;
    l_803 = ((l_800 = l_799) || l_800);
    if ((**p_1057->g_797))
    { /* block id: 327 */
        uint64_t *l_862[10] = {&p_1057->g_119,&p_1057->g_119,&p_1057->g_119,&p_1057->g_119,&p_1057->g_119,&p_1057->g_119,&p_1057->g_119,&p_1057->g_119,&p_1057->g_119,&p_1057->g_119};
        int32_t l_863[10][3] = {{2L,0x139014B0L,0x139014B0L},{2L,0x139014B0L,0x139014B0L},{2L,0x139014B0L,0x139014B0L},{2L,0x139014B0L,0x139014B0L},{2L,0x139014B0L,0x139014B0L},{2L,0x139014B0L,0x139014B0L},{2L,0x139014B0L,0x139014B0L},{2L,0x139014B0L,0x139014B0L},{2L,0x139014B0L,0x139014B0L},{2L,0x139014B0L,0x139014B0L}};
        VECTOR(uint32_t, 8) l_868 = (VECTOR(uint32_t, 8))(4294967292UL, (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 0x67DE6BEBL), 0x67DE6BEBL), 0x67DE6BEBL, 4294967292UL, 0x67DE6BEBL);
        int32_t *l_874 = &p_1057->g_4;
        int32_t l_877 = 0x62BA5E0AL;
        int i, j;
        (*p_33) = (*p_32);
        if ((atomic_inc(&p_1057->g_atomic_input[37 * get_linear_group_id() + 13]) == 1))
        { /* block id: 330 */
            int32_t l_804 = 0x6A92FFD2L;
            VECTOR(uint32_t, 16) l_819 = (VECTOR(uint32_t, 16))(5UL, (VECTOR(uint32_t, 4))(5UL, (VECTOR(uint32_t, 2))(5UL, 0x1179AAD7L), 0x1179AAD7L), 0x1179AAD7L, 5UL, 0x1179AAD7L, (VECTOR(uint32_t, 2))(5UL, 0x1179AAD7L), (VECTOR(uint32_t, 2))(5UL, 0x1179AAD7L), 5UL, 0x1179AAD7L, 5UL, 0x1179AAD7L);
            int32_t l_858 = 0x4B4C2134L;
            uint8_t l_859 = 1UL;
            int i;
            for (l_804 = 3; (l_804 >= (-16)); l_804--)
            { /* block id: 333 */
                uint32_t l_807 = 4294967293UL;
                int64_t l_808[10][10] = {{0x2F734D0F80E0243DL,0x431565EC5A0598F9L,0x3C9965D7F767198AL,1L,0x7E32A70E59C70791L,(-1L),9L,(-5L),0x431565EC5A0598F9L,1L},{0x2F734D0F80E0243DL,0x431565EC5A0598F9L,0x3C9965D7F767198AL,1L,0x7E32A70E59C70791L,(-1L),9L,(-5L),0x431565EC5A0598F9L,1L},{0x2F734D0F80E0243DL,0x431565EC5A0598F9L,0x3C9965D7F767198AL,1L,0x7E32A70E59C70791L,(-1L),9L,(-5L),0x431565EC5A0598F9L,1L},{0x2F734D0F80E0243DL,0x431565EC5A0598F9L,0x3C9965D7F767198AL,1L,0x7E32A70E59C70791L,(-1L),9L,(-5L),0x431565EC5A0598F9L,1L},{0x2F734D0F80E0243DL,0x431565EC5A0598F9L,0x3C9965D7F767198AL,1L,0x7E32A70E59C70791L,(-1L),9L,(-5L),0x431565EC5A0598F9L,1L},{0x2F734D0F80E0243DL,0x431565EC5A0598F9L,0x3C9965D7F767198AL,1L,0x7E32A70E59C70791L,(-1L),9L,(-5L),0x431565EC5A0598F9L,1L},{0x2F734D0F80E0243DL,0x431565EC5A0598F9L,0x3C9965D7F767198AL,1L,0x7E32A70E59C70791L,(-1L),9L,(-5L),0x431565EC5A0598F9L,1L},{0x2F734D0F80E0243DL,0x431565EC5A0598F9L,0x3C9965D7F767198AL,1L,0x7E32A70E59C70791L,(-1L),9L,(-5L),0x431565EC5A0598F9L,1L},{0x2F734D0F80E0243DL,0x431565EC5A0598F9L,0x3C9965D7F767198AL,1L,0x7E32A70E59C70791L,(-1L),9L,(-5L),0x431565EC5A0598F9L,1L},{0x2F734D0F80E0243DL,0x431565EC5A0598F9L,0x3C9965D7F767198AL,1L,0x7E32A70E59C70791L,(-1L),9L,(-5L),0x431565EC5A0598F9L,1L}};
                uint32_t l_809 = 4294967295UL;
                uint64_t l_810 = 0xE24830E19B8B1B54L;
                int16_t l_813 = 0L;
                int i, j;
                l_809 |= (l_808[8][5] = l_807);
                --l_810;
                if (l_813)
                { /* block id: 337 */
                    int16_t l_814 = (-7L);
                    l_814 = (-2L);
                }
                else
                { /* block id: 339 */
                    int32_t l_815 = (-10L);
                    for (l_815 = 0; (l_815 != (-23)); l_815 = safe_sub_func_int32_t_s_s(l_815, 1))
                    { /* block id: 342 */
                        uint8_t l_818 = 0x88L;
                        l_818 = 0x0902275EL;
                    }
                }
            }
            if (l_819.s1)
            { /* block id: 347 */
                int64_t l_820 = (-1L);
                VECTOR(int32_t, 4) l_821 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L);
                int i;
                l_804 &= l_820;
                if (((VECTOR(int32_t, 4))(l_821.yxzw)).z)
                { /* block id: 349 */
                    VECTOR(int32_t, 2) l_822 = (VECTOR(int32_t, 2))(0x4598CFCEL, (-9L));
                    uint16_t l_832 = 9UL;
                    uint8_t l_833 = 0xDFL;
                    uint64_t l_834 = 18446744073709551615UL;
                    int i;
                    if (((VECTOR(int32_t, 16))(l_822.xyxxxxyxyxyyyyyx)).s6)
                    { /* block id: 350 */
                        int8_t l_823 = 5L;
                        int16_t l_824 = (-3L);
                        int32_t l_825[2][2][9];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 2; j++)
                            {
                                for (k = 0; k < 9; k++)
                                    l_825[i][j][k] = 0x3E7542C8L;
                            }
                        }
                        l_825[1][0][1] = (l_824 = (l_822.y = l_823));
                        l_821.x = (l_822.x &= (-1L));
                    }
                    else
                    { /* block id: 356 */
                        int32_t *l_826[6][1];
                        int32_t l_828[2][7];
                        int32_t *l_827 = &l_828[1][4];
                        int64_t l_829 = 1L;
                        uint64_t l_830 = 0UL;
                        VECTOR(uint16_t, 8) l_831 = (VECTOR(uint16_t, 8))(3UL, (VECTOR(uint16_t, 4))(3UL, (VECTOR(uint16_t, 2))(3UL, 1UL), 1UL), 1UL, 3UL, 1UL);
                        int i, j;
                        for (i = 0; i < 6; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_826[i][j] = (void*)0;
                        }
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 7; j++)
                                l_828[i][j] = 0L;
                        }
                        l_827 = (l_826[5][0] = (void*)0);
                        l_804 &= l_829;
                        l_831.s0 ^= l_830;
                    }
                    if ((l_822.y = (l_832 , (l_833 , l_834))))
                    { /* block id: 363 */
                        int16_t l_835 = 1L;
                        uint8_t l_836 = 0x0DL;
                        int16_t l_837 = 0x475AL;
                        l_836 = l_835;
                        l_822.x = l_837;
                        l_804 = (l_821.x = (-1L));
                    }
                    else
                    { /* block id: 368 */
                        VECTOR(uint32_t, 2) l_838 = (VECTOR(uint32_t, 2))(4294967295UL, 4294967290UL);
                        uint16_t l_839 = 0xBC29L;
                        int8_t l_840 = (-1L);
                        uint8_t l_841 = 0x8BL;
                        int64_t l_842 = 0x0F4A72B88429D1D9L;
                        int i;
                        l_821.z = (-1L);
                        l_821.x &= ((l_839 &= l_838.y) , ((GROUP_DIVERGE(1, 1) , l_840) , (l_842 = l_841)));
                    }
                    for (l_822.x = 0; (l_822.x == (-6)); l_822.x--)
                    { /* block id: 376 */
                        int32_t l_845 = 0x424C3D4AL;
                        int16_t l_846 = 0x086EL;
                        uint8_t l_847 = 255UL;
                        l_821.w = l_845;
                        l_847 = (l_846 = (l_804 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((l_821.w = 0x080CF95DL), 0x43C18D8DL, 0x677265C3L, 1L)).xyzxyyyz)).s5));
                    }
                }
                else
                { /* block id: 383 */
                    int32_t l_848 = 1L;
                    int32_t *l_852 = &l_848;
                    uint32_t l_853[8] = {4294967295UL,0x087B44D5L,4294967295UL,4294967295UL,0x087B44D5L,4294967295UL,4294967295UL,0x087B44D5L};
                    int i;
                    if (l_848)
                    { /* block id: 384 */
                        l_804 = 4L;
                    }
                    else
                    { /* block id: 386 */
                        VECTOR(uint64_t, 16) l_849 = (VECTOR(uint64_t, 16))(0x1C728EAD82323F9BL, (VECTOR(uint64_t, 4))(0x1C728EAD82323F9BL, (VECTOR(uint64_t, 2))(0x1C728EAD82323F9BL, 1UL), 1UL), 1UL, 0x1C728EAD82323F9BL, 1UL, (VECTOR(uint64_t, 2))(0x1C728EAD82323F9BL, 1UL), (VECTOR(uint64_t, 2))(0x1C728EAD82323F9BL, 1UL), 0x1C728EAD82323F9BL, 1UL, 0x1C728EAD82323F9BL, 1UL);
                        uint32_t l_850 = 0xFBE2011BL;
                        uint8_t l_851 = 0xD9L;
                        int i;
                        l_804 = 7L;
                        l_821.z ^= (((VECTOR(uint64_t, 8))(l_849.sf9d1a64e)).s6 , l_850);
                        l_804 = l_851;
                    }
                    l_852 = (void*)0;
                    l_821.z = l_853[2];
                }
            }
            else
            { /* block id: 394 */
                int32_t l_854 = 4L;
                for (l_854 = 0; (l_854 < 26); ++l_854)
                { /* block id: 397 */
                    uint32_t l_857 = 0x05716918L;
                    l_804 = l_857;
                }
            }
            l_859 = l_858;
            unsigned int result = 0;
            result += l_804;
            result += l_819.sf;
            result += l_819.se;
            result += l_819.sd;
            result += l_819.sc;
            result += l_819.sb;
            result += l_819.sa;
            result += l_819.s9;
            result += l_819.s8;
            result += l_819.s7;
            result += l_819.s6;
            result += l_819.s5;
            result += l_819.s4;
            result += l_819.s3;
            result += l_819.s2;
            result += l_819.s1;
            result += l_819.s0;
            result += l_858;
            result += l_859;
            atomic_add(&p_1057->g_special_values[37 * get_linear_group_id() + 13], result);
        }
        else
        { /* block id: 402 */
            (1 + 1);
        }
        (*p_1057->g_797) = func_76(((((((VECTOR(int32_t, 8))((safe_lshift_func_int8_t_s_s((((l_863[5][0] = 0xE0DF1F707E6E8C5BL) , p_1057->g_485.y) != p_30), ((safe_rshift_func_int16_t_s_s((p_30 >= ((safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(safe_clamp_func(VECTOR(uint64_t, 8),uint64_t,((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 8))(upsample(((VECTOR(uint32_t, 2))(l_868.s12)).xxxyxyxy, ((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(mad_hi(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0xEBD6D5E8L, 1UL)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(p_1057->g_869.scf45da7e84a5f335)).even)), ((safe_rshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(p_1057->g_495, (((l_868.s1 | p_1057->g_403.s3) ^ ((-1L) && p_30)) , l_868.s0))), p_1057->g_485.x)) < 0x6826L), ((VECTOR(uint32_t, 4))(0UL)), 0x668DC4BAL)).s68)).yxyyyxxy)), ((VECTOR(uint32_t, 8))(4294967295UL)), ((VECTOR(uint32_t, 8))(0x18860E70L))))))).s3144003144371701)))).s83, (uint32_t)l_868.s6))).yyyxxxyy))).s01))), 6UL, 0x6DF38562855FFA25L)), ((VECTOR(uint64_t, 4))(0x9081F2533E5FBCECL)), ((VECTOR(uint64_t, 4))(0xD6AF95B405852940L))))).wwyzzwzy, (uint64_t)0x2848D62863F67E7CL, (uint64_t)l_868.s2))).s1, p_30)) < (*p_31))), l_868.s1)) , p_1057->g_610.y))), 0L, p_30, (-1L), 0x63C973ADL, 0L, 0x22F93799L, 0x528152E6L)).s3 , p_1057->g_686.sa) != 0x4AC900C6A93B3326L) && l_868.s1) , 0x5FB80AECL), &l_803, l_874, p_1057->g_137, p_1057);
        for (p_1057->g_2 = 0; (p_1057->g_2 < 6); p_1057->g_2++)
        { /* block id: 409 */
            (*p_33) = (p_1057->g_150.w , func_76(l_877, (*p_1057->g_797), (*p_29), (p_1057->g_624.z , p_1057->g_878), p_1057));
            (*p_33) = &l_803;
        }
    }
    else
    { /* block id: 413 */
        int64_t l_879 = 0x6676245DF70CD013L;
        int32_t l_882 = 0L;
        int32_t l_883 = 0L;
        VECTOR(int32_t, 16) l_884 = (VECTOR(int32_t, 16))(0x458D040AL, (VECTOR(int32_t, 4))(0x458D040AL, (VECTOR(int32_t, 2))(0x458D040AL, 0x36070772L), 0x36070772L), 0x36070772L, 0x458D040AL, 0x36070772L, (VECTOR(int32_t, 2))(0x458D040AL, 0x36070772L), (VECTOR(int32_t, 2))(0x458D040AL, 0x36070772L), 0x458D040AL, 0x36070772L, 0x458D040AL, 0x36070772L);
        VECTOR(int16_t, 16) l_888 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x676AL), 0x676AL), 0x676AL, 1L, 0x676AL, (VECTOR(int16_t, 2))(1L, 0x676AL), (VECTOR(int16_t, 2))(1L, 0x676AL), 1L, 0x676AL, 1L, 0x676AL);
        VECTOR(uint8_t, 16) l_892 = (VECTOR(uint8_t, 16))(0xE2L, (VECTOR(uint8_t, 4))(0xE2L, (VECTOR(uint8_t, 2))(0xE2L, 254UL), 254UL), 254UL, 0xE2L, 254UL, (VECTOR(uint8_t, 2))(0xE2L, 254UL), (VECTOR(uint8_t, 2))(0xE2L, 254UL), 0xE2L, 254UL, 0xE2L, 254UL);
        VECTOR(int16_t, 4) l_893 = (VECTOR(int16_t, 4))(0x5069L, (VECTOR(int16_t, 2))(0x5069L, (-1L)), (-1L));
        uint32_t ***l_895 = (void*)0;
        VECTOR(uint8_t, 4) l_909 = (VECTOR(uint8_t, 4))(248UL, (VECTOR(uint8_t, 2))(248UL, 255UL), 255UL);
        int32_t ***l_913[9];
        int32_t ****l_912 = &l_913[0];
        uint32_t l_930 = 0x9D6012B7L;
        int i;
        for (i = 0; i < 9; i++)
            l_913[i] = &p_1057->g_797;
        l_879 ^= 5L;
        for (p_1057->g_2 = 22; (p_1057->g_2 > 49); ++p_1057->g_2)
        { /* block id: 417 */
            uint8_t l_885 = 0x2FL;
            VECTOR(uint8_t, 8) l_891 = (VECTOR(uint8_t, 8))(251UL, (VECTOR(uint8_t, 4))(251UL, (VECTOR(uint8_t, 2))(251UL, 0x8AL), 0x8AL), 0x8AL, 251UL, 0x8AL);
            int i;
            l_885++;
            l_884.s7 |= (7UL > (+(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 2))(l_888.s33)), (int16_t)(safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_891.s36)).xyyyyxyx)).even, ((VECTOR(uint8_t, 2))(l_892.sf5)).yyxx))).wwwyzwzy))).s3, l_885)), (int16_t)(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_893.xy)), 1L, (-1L))).w , (l_892.sc | ((-9L) && (+p_1057->g_224[3][0][0]))))))).yxyxxyxxxyyyyxyx)).s3 >= (&p_1057->g_155 != (l_894 , l_895)))));
            if ((**p_1057->g_797))
                break;
        }
        for (p_1057->g_648 = 0; (p_1057->g_648 <= (-4)); p_1057->g_648 = safe_sub_func_int32_t_s_s(p_1057->g_648, 9))
        { /* block id: 424 */
            uint16_t *l_910 = (void*)0;
            int32_t ***l_911 = &p_1057->g_797;
            int32_t l_918 = 0x02310F6AL;
            uint8_t *l_921[2];
            int16_t l_923 = 0x2198L;
            VECTOR(int64_t, 8) l_938 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-6L)), (-6L)), (-6L), (-1L), (-6L));
            int i;
            for (i = 0; i < 2; i++)
                l_921[i] = (void*)0;
            for (p_1057->g_153 = 4; (p_1057->g_153 < 14); p_1057->g_153++)
            { /* block id: 427 */
                int32_t *****l_916 = (void*)0;
                int32_t *****l_917 = &p_1057->g_914[2][2];
                l_918 |= (safe_mod_func_int32_t_s_s(((p_1057->g_2 , (safe_mul_func_uint8_t_u_u(p_1057->g_869.se, (safe_sub_func_int32_t_s_s(((((safe_add_func_uint8_t_u_u(((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(p_1057->g_908.s46)).yxyyyyxy)).s2 & ((VECTOR(uint8_t, 4))(l_909.wyyx)).z) == (l_910 == (void*)0)), p_30)) > (&p_33 == l_911)) , ((VECTOR(uint64_t, 4))(6UL, FAKE_DIVERGE(p_1057->global_0_offset, get_global_id(0), 10), 0xFADA248945118F50L, 0xAF854786A42F2540L)).y) && ((l_912 != ((*l_917) = p_1057->g_914[2][1])) , (***l_911))), (*p_31)))))) & p_30), (***l_911)));
            }
            l_930 &= (((safe_rshift_func_uint8_t_u_u((p_1057->g_288++), 3)) == (safe_mul_func_uint8_t_u_u((((**l_912) != (*p_1057->g_915)) <= (((**p_1057->g_155)--) < (3UL || ((void*)0 != (**p_1057->g_643))))), (-1L)))) & ((***l_911) <= p_30));
            l_931[0] = ((((VECTOR(uint64_t, 2))(18446744073709551615UL, 3UL)).lo == ((***l_911) == p_30)) , (***l_911));
            for (p_1057->g_153 = (-2); (p_1057->g_153 == 20); p_1057->g_153 = safe_add_func_int32_t_s_s(p_1057->g_153, 2))
            { /* block id: 437 */
                int32_t l_942 = 0L;
                int32_t l_970 = (-5L);
                for (l_882 = 0; (l_882 == (-25)); l_882 = safe_sub_func_int16_t_s_s(l_882, 8))
                { /* block id: 440 */
                    int64_t *l_939 = (void*)0;
                    int64_t *l_940 = &l_922;
                    int32_t l_941 = 0x0235B520L;
                    int8_t ***l_955 = &l_953[0][3][1];
                    uint16_t *l_971 = &p_1057->g_220;
                    uint16_t *l_974[3][9][8] = {{{&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0,&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0},{&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0,&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0},{&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0,&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0},{&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0,&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0},{&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0,&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0},{&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0,&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0},{&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0,&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0},{&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0,&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0},{&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0,&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0}},{{&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0,&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0},{&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0,&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0},{&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0,&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0},{&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0,&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0},{&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0,&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0},{&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0,&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0},{&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0,&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0},{&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0,&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0},{&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0,&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0}},{{&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0,&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0},{&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0,&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0},{&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0,&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0},{&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0,&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0},{&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0,&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0},{&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0,&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0},{&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0,&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0},{&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0,&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0},{&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0,&p_1057->g_137,&p_1057->g_137,(void*)0,(void*)0}}};
                    int32_t l_975[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
                    int32_t l_980 = 0x7F61EC60L;
                    int16_t *l_981 = &l_923;
                    int64_t **l_984 = (void*)0;
                    int64_t **l_985 = &l_939;
                    int i, j, k;
                    (*p_1057->g_797) = (*p_33);
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_1057->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 5)), permutations[(safe_mod_func_uint32_t_u_u((safe_sub_func_int64_t_s_s((l_941 = ((*l_940) = (~((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 4))(0L, 1L, 0x1B7928017A12D745L, 7L)).ywzxxxxw, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(0L, (-1L))))), 0x276E0F6847DA9C5CL, (-5L))).wyxyxwwx, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(l_938.s37)))).yxyyxxxx))).s3075541465264611)))).sb))), (l_942 <= (safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((-1L), 2)), ((safe_sub_func_uint16_t_u_u((((safe_sub_func_uint8_t_u_u((p_1057->g_495 = ((safe_sub_func_uint16_t_u_u((((*l_955) = l_953[1][0][3]) == (p_1057->g_956 = (void*)0)), ((((((l_942 <= (safe_lshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(0xAA5EE8CCBE75ABA2L, ((((*l_981) ^= ((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 16))(p_1057->g_966.yyxxyxyxxyyyyyyy)).sd, ((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 2))(0xB408CFBBD4F80B8DL, 18446744073709551612UL)).yyxyxyyx, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 2))(0x270FA0CD4855D9C3L, 0x64F19E1F407A94ABL)).yyxyxxyx, ((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 2))(0xD68C513275563A9CL, 0x8230732D0754E725L)).yxyyxxyxyyxyxxyy, ((VECTOR(uint64_t, 8))(p_1057->g_969.s65016063)).s6267715743734516))).hi))).s21)).xyxyxxyy))).s2, ((l_975[0] |= (--(*l_971))) < (p_1057->g_137--)))) != (~(safe_rshift_func_int16_t_s_u(l_980, 12)))))) < l_970)) < (~((safe_sub_func_uint16_t_u_u(p_1057->g_686.s3, p_1057->g_966.y)) , p_30))) || 0x8D4A896D2F08BE9BL))), p_30)), p_30))) != l_942) | l_942) == l_970) , l_975[2]) , p_30))) ^ (**p_1057->g_155))), p_30)) != (*p_1057->g_957)) , p_1057->g_624.w), (***l_911))) || (*p_1057->g_957))))))), 10))][(safe_mod_func_uint32_t_u_u(p_1057->tid, 5))]));
                    if ((**p_33))
                        continue;
                    l_918 = (((*l_985) = &l_879) != ((****l_912) , &p_1057->g_147));
                }
                l_918 ^= (safe_rshift_func_uint8_t_u_s(0xD7L, 6));
            }
        }
    }
    return (*p_32);
}


/* ------------------------------------------ */
/* 
 * reads : p_1057->g_36 p_1057->g_41 p_1057->g_44 p_1057->g_3 p_1057->g_4 p_1057->g_46 p_1057->g_48 p_1057->g_5 p_1057->g_comm_values p_1057->g_137 p_1057->g_57 p_1057->g_119 p_1057->g_150 p_1057->g_169 p_1057->g_156 p_1057->g_153 p_1057->l_comm_values p_1057->g_2 p_1057->g_145 p_1057->g_220 p_1057->g_224 p_1057->g_18 p_1057->g_250 p_1057->g_257 p_1057->g_147 p_1057->g_261 p_1057->g_155 p_1057->g_116 p_1057->g_297 p_1057->g_301 p_1057->g_288 p_1057->g_400 p_1057->g_403 p_1057->g_465 p_1057->g_485 p_1057->g_495
 * writes: p_1057->g_57 p_1057->g_116 p_1057->g_119 p_1057->g_137 p_1057->g_145 p_1057->g_147 p_1057->g_44 p_1057->g_150 p_1057->g_155 p_1057->g_169 p_1057->g_3 p_1057->g_220 p_1057->g_224 p_1057->g_153 p_1057->g_36 p_1057->g_257 p_1057->g_288 p_1057->g_46 p_1057->g_2 p_1057->g_416 p_1057->g_534
 */
int32_t ** func_34(uint64_t  p_35, struct S0 * p_1057)
{ /* block id: 12 */
    VECTOR(int32_t, 16) l_37 = (VECTOR(int32_t, 16))(0x67721CA7L, (VECTOR(int32_t, 4))(0x67721CA7L, (VECTOR(int32_t, 2))(0x67721CA7L, 0x41BBBBFEL), 0x41BBBBFEL), 0x41BBBBFEL, 0x67721CA7L, 0x41BBBBFEL, (VECTOR(int32_t, 2))(0x67721CA7L, 0x41BBBBFEL), (VECTOR(int32_t, 2))(0x67721CA7L, 0x41BBBBFEL), 0x67721CA7L, 0x41BBBBFEL, 0x67721CA7L, 0x41BBBBFEL);
    VECTOR(int32_t, 16) l_38 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int32_t, 2))(0L, (-1L)), (VECTOR(int32_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L));
    VECTOR(int32_t, 16) l_45 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int32_t, 2))((-1L), 1L), (VECTOR(int32_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L);
    VECTOR(int32_t, 16) l_47 = (VECTOR(int32_t, 16))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x1626DAC1L), 0x1626DAC1L), 0x1626DAC1L, 8L, 0x1626DAC1L, (VECTOR(int32_t, 2))(8L, 0x1626DAC1L), (VECTOR(int32_t, 2))(8L, 0x1626DAC1L), 8L, 0x1626DAC1L, 8L, 0x1626DAC1L);
    VECTOR(int32_t, 2) l_49 = (VECTOR(int32_t, 2))((-9L), (-1L));
    uint32_t *l_56 = (void*)0;
    uint32_t l_60 = 0x15503957L;
    int32_t **l_316 = &p_1057->g_3;
    int32_t ***l_315 = &l_316;
    uint8_t *l_324 = &p_1057->g_2;
    VECTOR(uint8_t, 2) l_336 = (VECTOR(uint8_t, 2))(0xBBL, 0x97L);
    VECTOR(uint32_t, 4) l_343 = (VECTOR(uint32_t, 4))(4294967287UL, (VECTOR(uint32_t, 2))(4294967287UL, 7UL), 7UL);
    VECTOR(uint16_t, 2) l_380 = (VECTOR(uint16_t, 2))(0xDD56L, 1UL);
    int32_t l_383 = (-3L);
    VECTOR(int16_t, 16) l_405 = (VECTOR(int16_t, 16))(0x2EBAL, (VECTOR(int16_t, 4))(0x2EBAL, (VECTOR(int16_t, 2))(0x2EBAL, 1L), 1L), 1L, 0x2EBAL, 1L, (VECTOR(int16_t, 2))(0x2EBAL, 1L), (VECTOR(int16_t, 2))(0x2EBAL, 1L), 0x2EBAL, 1L, 0x2EBAL, 1L);
    uint16_t l_413[5][3][8] = {{{8UL,6UL,5UL,0x065BL,0x065BL,5UL,6UL,8UL},{8UL,6UL,5UL,0x065BL,0x065BL,5UL,6UL,8UL},{8UL,6UL,5UL,0x065BL,0x065BL,5UL,6UL,8UL}},{{8UL,6UL,5UL,0x065BL,0x065BL,5UL,6UL,8UL},{8UL,6UL,5UL,0x065BL,0x065BL,5UL,6UL,8UL},{8UL,6UL,5UL,0x065BL,0x065BL,5UL,6UL,8UL}},{{8UL,6UL,5UL,0x065BL,0x065BL,5UL,6UL,8UL},{8UL,6UL,5UL,0x065BL,0x065BL,5UL,6UL,8UL},{8UL,6UL,5UL,0x065BL,0x065BL,5UL,6UL,8UL}},{{8UL,6UL,5UL,0x065BL,0x065BL,5UL,6UL,8UL},{8UL,6UL,5UL,0x065BL,0x065BL,5UL,6UL,8UL},{8UL,6UL,5UL,0x065BL,0x065BL,5UL,6UL,8UL}},{{8UL,6UL,5UL,0x065BL,0x065BL,5UL,6UL,8UL},{8UL,6UL,5UL,0x065BL,0x065BL,5UL,6UL,8UL},{8UL,6UL,5UL,0x065BL,0x065BL,5UL,6UL,8UL}}};
    int32_t l_431[10][8] = {{0L,1L,(-8L),0x47CDFC90L,1L,0x47CDFC90L,(-8L),1L},{0L,1L,(-8L),0x47CDFC90L,1L,0x47CDFC90L,(-8L),1L},{0L,1L,(-8L),0x47CDFC90L,1L,0x47CDFC90L,(-8L),1L},{0L,1L,(-8L),0x47CDFC90L,1L,0x47CDFC90L,(-8L),1L},{0L,1L,(-8L),0x47CDFC90L,1L,0x47CDFC90L,(-8L),1L},{0L,1L,(-8L),0x47CDFC90L,1L,0x47CDFC90L,(-8L),1L},{0L,1L,(-8L),0x47CDFC90L,1L,0x47CDFC90L,(-8L),1L},{0L,1L,(-8L),0x47CDFC90L,1L,0x47CDFC90L,(-8L),1L},{0L,1L,(-8L),0x47CDFC90L,1L,0x47CDFC90L,(-8L),1L},{0L,1L,(-8L),0x47CDFC90L,1L,0x47CDFC90L,(-8L),1L}};
    VECTOR(int32_t, 8) l_501 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
    int16_t *l_598 = (void*)0;
    int16_t **l_597 = &l_598;
    int8_t *l_707 = &p_1057->g_416;
    int32_t l_786 = 0L;
    int i, j, k;
    if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x380D33B9L, (-8L))), ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(p_1057->g_36.s0906)).lo, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_37.sfa2e5769)).s60)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(6L, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(l_38.s868e0133)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))((-9L), ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(0x1966BA05L, (~(safe_rshift_func_uint16_t_u_u(0x1325L, 15))), ((VECTOR(int32_t, 4))(p_1057->g_41.xyyy)), (-1L), 6L)).s2277555127443070, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(0x353725ACL, (safe_rshift_func_int8_t_s_u(1L, GROUP_DIVERGE(2, 1))), ((VECTOR(int32_t, 4))(p_1057->g_44.yyxx)), 1L, (-8L))), (*p_1057->g_3), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 2))(l_45.sd5)).xxyx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 4))(p_1057->g_46.s4350)).wyxzxwxzyyxzxywy, ((VECTOR(int32_t, 2))(l_47.s7b)).yxyyyxxxxyxyxxxx))).odd))).odd)).odd)).xyyxxxxxxxyyxyyy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(1L, 0L, 0x51686206L, 1L)).odd)).yyxxxxxx)).s2577267713111623, ((VECTOR(int32_t, 2))(p_1057->g_48.s62)).xxxxyxxxyxyyxxxx))).sadab)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(l_49.xx)).xxxyxyxy, ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))(p_35, (func_50(func_53((p_1057->g_57.s4 = p_1057->g_46.s1), (safe_sub_func_int16_t_s_s((+l_38.s3), l_60)), p_1057), ((safe_div_func_uint32_t_u_u((*p_1057->g_156), (*p_1057->g_3))) != p_1057->g_41.x), p_1057) , 0x3F660C1DL), ((VECTOR(int32_t, 2))(1L)), (*p_1057->g_3), 0x710FEA08L, 0x651758D6L, (-8L))), ((VECTOR(int32_t, 8))((-4L))))))))), 0x3BA326F1L, 1L, ((VECTOR(int32_t, 2))(0x308FCC91L)), 0L, 0x54F513D5L, (-2L), 0x331BDFF6L)).s121d))).odd)), l_49.x, ((VECTOR(int32_t, 2))(0x56584C18L)), 0x19286BF7L, 0x76DC88F7L))))).sfe, ((VECTOR(int32_t, 2))(0L))))), 0x34D6FE95L)))).zzxzzwwy))).odd, (int32_t)l_49.y))), ((VECTOR(int32_t, 2))(0x63A99EEAL)), ((VECTOR(int32_t, 8))((-4L))), 0x7C00396AL)).hi)).s62))), ((VECTOR(int32_t, 2))(2L))))).yyxxyxyy)).s66))), p_35, (-1L), ((VECTOR(int32_t, 8))(0x4786DD5BL)), (-1L), 1L)).s2)
    { /* block id: 95 */
        int32_t *l_289 = (void*)0;
        int32_t *l_290 = (void*)0;
        int32_t *l_291 = (void*)0;
        int32_t *l_292[9][7][4] = {{{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4}},{{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4}},{{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4}},{{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4}},{{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4}},{{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4}},{{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4}},{{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4}},{{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4},{&p_1057->g_4,&p_1057->g_4,(void*)0,&p_1057->g_4}}};
        int32_t l_302[4][3] = {{1L,1L,1L},{1L,1L,1L},{1L,1L,1L},{1L,1L,1L}};
        uint64_t l_303 = 0x743125B7EC48A711L;
        VECTOR(uint16_t, 16) l_314 = (VECTOR(uint16_t, 16))(0xF8B0L, (VECTOR(uint16_t, 4))(0xF8B0L, (VECTOR(uint16_t, 2))(0xF8B0L, 0x030FL), 0x030FL), 0x030FL, 0xF8B0L, 0x030FL, (VECTOR(uint16_t, 2))(0xF8B0L, 0x030FL), (VECTOR(uint16_t, 2))(0xF8B0L, 0x030FL), 0xF8B0L, 0x030FL, 0xF8B0L, 0x030FL);
        int32_t ***l_317[8][5] = {{&l_316,&l_316,&l_316,&l_316,&l_316},{&l_316,&l_316,&l_316,&l_316,&l_316},{&l_316,&l_316,&l_316,&l_316,&l_316},{&l_316,&l_316,&l_316,&l_316,&l_316},{&l_316,&l_316,&l_316,&l_316,&l_316},{&l_316,&l_316,&l_316,&l_316,&l_316},{&l_316,&l_316,&l_316,&l_316,&l_316},{&l_316,&l_316,&l_316,&l_316,&l_316}};
        int i, j, k;
        l_37.sd = 7L;
        for (p_1057->g_116 = 20; (p_1057->g_116 == 51); p_1057->g_116 = safe_add_func_int8_t_s_s(p_1057->g_116, 3))
        { /* block id: 99 */
            uint64_t *l_298 = (void*)0;
            uint64_t *l_299 = &p_1057->g_119;
            int32_t *l_300 = &p_1057->g_4;
            int i, j;
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_1057->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 5)), permutations[(safe_mod_func_uint32_t_u_u(((void*)0 == l_56), 10))][(safe_mod_func_uint32_t_u_u(p_1057->tid, 5))]));
            atomic_and(&p_1057->g_atomic_reduction[get_linear_group_id()], (safe_div_func_int8_t_s_s(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(p_1057->g_297.xy)).xxyxxxxxxyxyxyxx)).s8f2b, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x43L, 0x5DL)), 0x62L, 0x26L)).yywwzxxx)).lo))).y, ((((*l_299) = GROUP_DIVERGE(1, 1)) || 0xE177A954403E67CAL) , p_35))));
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_1057->v_collective += p_1057->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            (*p_1057->g_301) = l_300;
        }
        --l_303;
        for (p_1057->g_116 = 0; (p_1057->g_116 == 43); p_1057->g_116++)
        { /* block id: 110 */
            VECTOR(uint16_t, 4) l_318 = (VECTOR(uint16_t, 4))(0xC2F0L, (VECTOR(uint16_t, 2))(0xC2F0L, 65526UL), 65526UL);
            uint8_t *l_319 = &p_1057->g_288;
            int16_t *l_320[2];
            int8_t l_321 = 8L;
            int32_t l_325 = (-8L);
            int i;
            for (i = 0; i < 2; i++)
                l_320[i] = (void*)0;
            l_325 &= (safe_mod_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s((l_321 = (p_1057->g_46.s7 | (p_35 , ((*l_319) = (safe_add_func_uint32_t_u_u((((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_314.s87)).xyxyyxxxxyxyxxyx)))).s6a)), 0UL, 65526UL)))).xzxywyxz, ((VECTOR(uint16_t, 4))((l_315 != l_317[0][0]), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(l_318.xzyxwwxwwwzzywwx)).sc6)), 65527UL)).xwyyyyyw))).s4 && (+p_35)), 8L)))))), (safe_add_func_int16_t_s_s((l_324 == (void*)0), (p_1057->g_44.x , p_1057->g_137))))) , (*p_1057->g_301)) != (*l_316)), l_318.x));
        }
    }
    else
    { /* block id: 115 */
        int64_t l_332 = 1L;
        VECTOR(uint64_t, 16) l_335 = (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint64_t, 2))(1UL, 0UL), (VECTOR(uint64_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL);
        int32_t l_344 = (-1L);
        int32_t l_345 = 0x4CCFA370L;
        uint32_t *l_347 = (void*)0;
        VECTOR(int64_t, 8) l_387 = (VECTOR(int64_t, 8))(0x736CB545915340F9L, (VECTOR(int64_t, 4))(0x736CB545915340F9L, (VECTOR(int64_t, 2))(0x736CB545915340F9L, (-4L)), (-4L)), (-4L), 0x736CB545915340F9L, (-4L));
        VECTOR(int16_t, 2) l_401 = (VECTOR(int16_t, 2))(0x1978L, 0x7D0CL);
        VECTOR(int8_t, 16) l_402 = (VECTOR(int8_t, 16))(2L, (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, 0x50L), 0x50L), 0x50L, 2L, 0x50L, (VECTOR(int8_t, 2))(2L, 0x50L), (VECTOR(int8_t, 2))(2L, 0x50L), 2L, 0x50L, 2L, 0x50L);
        uint16_t l_417 = 65535UL;
        int16_t l_427 = 0x120CL;
        VECTOR(int32_t, 2) l_429 = (VECTOR(int32_t, 2))(0x08E6BC87L, 0x505CE4D5L);
        uint32_t l_454 = 0x04B3DD06L;
        int32_t ***l_461 = &l_316;
        VECTOR(uint8_t, 8) l_488 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x60L), 0x60L), 0x60L, 0UL, 0x60L);
        int16_t l_499 = (-9L);
        uint32_t l_502[9][1][10] = {{{0x2216D597L,0x5479ED89L,1UL,4294967295UL,1UL,4294967295UL,1UL,0x5479ED89L,0x2216D597L,1UL}},{{0x2216D597L,0x5479ED89L,1UL,4294967295UL,1UL,4294967295UL,1UL,0x5479ED89L,0x2216D597L,1UL}},{{0x2216D597L,0x5479ED89L,1UL,4294967295UL,1UL,4294967295UL,1UL,0x5479ED89L,0x2216D597L,1UL}},{{0x2216D597L,0x5479ED89L,1UL,4294967295UL,1UL,4294967295UL,1UL,0x5479ED89L,0x2216D597L,1UL}},{{0x2216D597L,0x5479ED89L,1UL,4294967295UL,1UL,4294967295UL,1UL,0x5479ED89L,0x2216D597L,1UL}},{{0x2216D597L,0x5479ED89L,1UL,4294967295UL,1UL,4294967295UL,1UL,0x5479ED89L,0x2216D597L,1UL}},{{0x2216D597L,0x5479ED89L,1UL,4294967295UL,1UL,4294967295UL,1UL,0x5479ED89L,0x2216D597L,1UL}},{{0x2216D597L,0x5479ED89L,1UL,4294967295UL,1UL,4294967295UL,1UL,0x5479ED89L,0x2216D597L,1UL}},{{0x2216D597L,0x5479ED89L,1UL,4294967295UL,1UL,4294967295UL,1UL,0x5479ED89L,0x2216D597L,1UL}}};
        int32_t *l_580 = &l_431[0][6];
        VECTOR(uint16_t, 16) l_767 = (VECTOR(uint16_t, 16))(0xB41AL, (VECTOR(uint16_t, 4))(0xB41AL, (VECTOR(uint16_t, 2))(0xB41AL, 0x1E38L), 0x1E38L), 0x1E38L, 0xB41AL, 0x1E38L, (VECTOR(uint16_t, 2))(0xB41AL, 0x1E38L), (VECTOR(uint16_t, 2))(0xB41AL, 0x1E38L), 0xB41AL, 0x1E38L, 0xB41AL, 0x1E38L);
        VECTOR(int32_t, 8) l_775 = (VECTOR(int32_t, 8))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, (-10L)), (-10L)), (-10L), 6L, (-10L));
        VECTOR(int16_t, 16) l_777 = (VECTOR(int16_t, 16))(3L, (VECTOR(int16_t, 4))(3L, (VECTOR(int16_t, 2))(3L, (-1L)), (-1L)), (-1L), 3L, (-1L), (VECTOR(int16_t, 2))(3L, (-1L)), (VECTOR(int16_t, 2))(3L, (-1L)), 3L, (-1L), 3L, (-1L));
        int i, j, k;
        if ((safe_rshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_u((((**p_1057->g_5) != 0UL) >= ((safe_rshift_func_uint16_t_u_u((p_1057->g_261 , p_35), 8)) & l_332)), ((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 8))(l_335.s24fa4201)).s52, ((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 4))(0x163C297416A418F1L, 0xE0653A872BBF8746L, 0xB15A8E5C7D3FA878L, 0xEB56D4231F455A96L)).zxxzxzzy, ((VECTOR(uint64_t, 2))(0x1CB56B94A494A348L, 0x0E779F0AE4533200L)).xyxyyyyx))).s46))).yxyxyxyy)).s3, ((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 2))(0x6087B4067BA06D7CL, 0x4A7284F1C4C7AC32L)), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0x0C634D49BC28F887L, 0L)).yyxxxxxx)).s54))).odd)) || (l_345 = (p_1057->g_224[3][0][0] != ((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_336.xy)), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0xBCL, 252UL)).xyyxxyxx)), ((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(1UL, 1UL)).yyxxyyxyxyyyxxyy)), ((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))((safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(65535UL, 0x89A3L)).yxxxyxyyxyxxyyxy)).sf, 5)), ((((safe_mul_func_uint16_t_u_u(l_335.s9, ((safe_lshift_func_int16_t_s_u((l_344 = (((VECTOR(uint32_t, 8))(l_343.zxxwzyxy)).s5 != (*p_1057->g_156))), p_35)) ^ (***l_315)))) && l_344) <= p_1057->g_44.y) , 8UL), 0xD9L, 0xB1L)))).even))).yxxxxxyxyyyyxxxx))).s14, (uint8_t)(***l_315)))), 247UL, 3UL, 1UL, 0x27L)).s2342, ((VECTOR(uint8_t, 4))(0UL))))).x))))) < 65535UL), 2)))
        { /* block id: 118 */
            int32_t *l_346[8][2][8] = {{{&l_345,&p_1057->g_4,(void*)0,(void*)0,&p_1057->g_4,(void*)0,(void*)0,&p_1057->g_4},{&l_345,&p_1057->g_4,(void*)0,(void*)0,&p_1057->g_4,(void*)0,(void*)0,&p_1057->g_4}},{{&l_345,&p_1057->g_4,(void*)0,(void*)0,&p_1057->g_4,(void*)0,(void*)0,&p_1057->g_4},{&l_345,&p_1057->g_4,(void*)0,(void*)0,&p_1057->g_4,(void*)0,(void*)0,&p_1057->g_4}},{{&l_345,&p_1057->g_4,(void*)0,(void*)0,&p_1057->g_4,(void*)0,(void*)0,&p_1057->g_4},{&l_345,&p_1057->g_4,(void*)0,(void*)0,&p_1057->g_4,(void*)0,(void*)0,&p_1057->g_4}},{{&l_345,&p_1057->g_4,(void*)0,(void*)0,&p_1057->g_4,(void*)0,(void*)0,&p_1057->g_4},{&l_345,&p_1057->g_4,(void*)0,(void*)0,&p_1057->g_4,(void*)0,(void*)0,&p_1057->g_4}},{{&l_345,&p_1057->g_4,(void*)0,(void*)0,&p_1057->g_4,(void*)0,(void*)0,&p_1057->g_4},{&l_345,&p_1057->g_4,(void*)0,(void*)0,&p_1057->g_4,(void*)0,(void*)0,&p_1057->g_4}},{{&l_345,&p_1057->g_4,(void*)0,(void*)0,&p_1057->g_4,(void*)0,(void*)0,&p_1057->g_4},{&l_345,&p_1057->g_4,(void*)0,(void*)0,&p_1057->g_4,(void*)0,(void*)0,&p_1057->g_4}},{{&l_345,&p_1057->g_4,(void*)0,(void*)0,&p_1057->g_4,(void*)0,(void*)0,&p_1057->g_4},{&l_345,&p_1057->g_4,(void*)0,(void*)0,&p_1057->g_4,(void*)0,(void*)0,&p_1057->g_4}},{{&l_345,&p_1057->g_4,(void*)0,(void*)0,&p_1057->g_4,(void*)0,(void*)0,&p_1057->g_4},{&l_345,&p_1057->g_4,(void*)0,(void*)0,&p_1057->g_4,(void*)0,(void*)0,&p_1057->g_4}}};
            int i, j, k;
            (*l_316) = func_76(p_35, (**l_315), l_346[6][0][1], (&l_60 != l_347), p_1057);
            if ((atomic_inc(&p_1057->g_atomic_input[37 * get_linear_group_id() + 3]) == 9))
            { /* block id: 121 */
                VECTOR(int32_t, 4) l_348 = (VECTOR(int32_t, 4))(0x141A2659L, (VECTOR(int32_t, 2))(0x141A2659L, 6L), 6L);
                int32_t l_349 = 0x1C53EB0BL;
                uint32_t l_350 = 0x442E030CL;
                int16_t l_351 = 2L;
                uint16_t l_352[5];
                uint32_t l_370 = 0x3E49716CL;
                VECTOR(int32_t, 8) l_373 = (VECTOR(int32_t, 8))(0x43095699L, (VECTOR(int32_t, 4))(0x43095699L, (VECTOR(int32_t, 2))(0x43095699L, 0L), 0L), 0L, 0x43095699L, 0L);
                int8_t l_374 = 0x32L;
                int i;
                for (i = 0; i < 5; i++)
                    l_352[i] = 4UL;
                l_352[1] = (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_348.yxwzyywz)))).s4 , (l_351 = (l_349 , l_350)));
                for (l_351 = 0; (l_351 >= 12); l_351 = safe_add_func_uint32_t_u_u(l_351, 1))
                { /* block id: 126 */
                    int64_t l_355 = 1L;
                    int16_t l_356 = 0x7C5EL;
                    int64_t l_357 = 5L;
                    VECTOR(int32_t, 2) l_366 = (VECTOR(int32_t, 2))(1L, 4L);
                    uint16_t l_367 = 0x751BL;
                    int32_t l_368[9][3] = {{0L,0x233AD44CL,0L},{0L,0x233AD44CL,0L},{0L,0x233AD44CL,0L},{0L,0x233AD44CL,0L},{0L,0x233AD44CL,0L},{0L,0x233AD44CL,0L},{0L,0x233AD44CL,0L},{0L,0x233AD44CL,0L},{0L,0x233AD44CL,0L}};
                    uint64_t l_369 = 0x0777BBA038821B36L;
                    int i, j;
                    l_357 = (l_356 |= (l_348.w = l_355));
                    for (l_357 = (-29); (l_357 >= (-30)); l_357 = safe_sub_func_int16_t_s_s(l_357, 8))
                    { /* block id: 132 */
                        int32_t l_361 = 0x6EADCC38L;
                        int32_t *l_360 = &l_361;
                        int32_t *l_362 = &l_361;
                        int32_t *l_363 = &l_361;
                        int32_t *l_364[6] = {&l_361,&l_361,&l_361,&l_361,&l_361,&l_361};
                        int32_t *l_365 = &l_361;
                        int i;
                        l_365 = (l_364[3] = (l_363 = (l_362 = l_360)));
                    }
                    l_348.w |= ((l_350 = 4294967292UL) , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_366.xyyx)), l_367, (l_368[3][2] , l_369), 0x77EBCF9EL, 0x7555864DL)).s5);
                    l_366.x = (l_348.w |= (-1L));
                }
                --l_370;
                l_374 ^= ((VECTOR(int32_t, 2))(l_373.s11)).odd;
                unsigned int result = 0;
                result += l_348.w;
                result += l_348.z;
                result += l_348.y;
                result += l_348.x;
                result += l_349;
                result += l_350;
                result += l_351;
                int l_352_i0;
                for (l_352_i0 = 0; l_352_i0 < 5; l_352_i0++) {
                    result += l_352[l_352_i0];
                }
                result += l_370;
                result += l_373.s7;
                result += l_373.s6;
                result += l_373.s5;
                result += l_373.s4;
                result += l_373.s3;
                result += l_373.s2;
                result += l_373.s1;
                result += l_373.s0;
                result += l_374;
                atomic_add(&p_1057->g_special_values[37 * get_linear_group_id() + 3], result);
            }
            else
            { /* block id: 145 */
                (1 + 1);
            }
            for (p_1057->g_288 = (-15); (p_1057->g_288 >= 55); ++p_1057->g_288)
            { /* block id: 150 */
                int32_t **l_377 = &p_1057->g_3;
                return l_377;
            }
        }
        else
        { /* block id: 153 */
            VECTOR(uint64_t, 2) l_386 = (VECTOR(uint64_t, 2))(18446744073709551607UL, 0x376B4BDE705CEEBBL);
            VECTOR(int64_t, 2) l_388 = (VECTOR(int64_t, 2))(0x58E990B4D4733C20L, 0L);
            VECTOR(int64_t, 4) l_389 = (VECTOR(int64_t, 4))(0x794BF4B31B1BF89CL, (VECTOR(int64_t, 2))(0x794BF4B31B1BF89CL, 1L), 1L);
            VECTOR(int16_t, 16) l_404 = (VECTOR(int16_t, 16))(0x672CL, (VECTOR(int16_t, 4))(0x672CL, (VECTOR(int16_t, 2))(0x672CL, (-1L)), (-1L)), (-1L), 0x672CL, (-1L), (VECTOR(int16_t, 2))(0x672CL, (-1L)), (VECTOR(int16_t, 2))(0x672CL, (-1L)), 0x672CL, (-1L), 0x672CL, (-1L));
            VECTOR(int16_t, 8) l_406 = (VECTOR(int16_t, 8))(0x7566L, (VECTOR(int16_t, 4))(0x7566L, (VECTOR(int16_t, 2))(0x7566L, 0x6A1CL), 0x6A1CL), 0x6A1CL, 0x7566L, 0x6A1CL);
            int8_t *l_414 = &p_1057->g_224[3][0][0];
            int8_t *l_415[1][5] = {{&p_1057->g_416,&p_1057->g_416,&p_1057->g_416,&p_1057->g_416,&p_1057->g_416}};
            uint64_t l_419 = 0x42430F28F05CAF74L;
            int32_t l_426 = 0x653C3AA2L;
            int32_t l_428 = 0x0F3D0CEEL;
            int32_t l_432 = 0L;
            int32_t l_433 = 0x28869410L;
            VECTOR(uint64_t, 8) l_470 = (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x5586951B3F62E05AL), 0x5586951B3F62E05AL), 0x5586951B3F62E05AL, 18446744073709551615UL, 0x5586951B3F62E05AL);
            VECTOR(uint64_t, 8) l_471 = (VECTOR(uint64_t, 8))(5UL, (VECTOR(uint64_t, 4))(5UL, (VECTOR(uint64_t, 2))(5UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 5UL, 18446744073709551615UL);
            VECTOR(int32_t, 4) l_496 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x53C8849CL), 0x53C8849CL);
            int16_t l_500[2][5][4] = {{{0x7C7DL,0x6B61L,0x7C7DL,0x7C7DL},{0x7C7DL,0x6B61L,0x7C7DL,0x7C7DL},{0x7C7DL,0x6B61L,0x7C7DL,0x7C7DL},{0x7C7DL,0x6B61L,0x7C7DL,0x7C7DL},{0x7C7DL,0x6B61L,0x7C7DL,0x7C7DL}},{{0x7C7DL,0x6B61L,0x7C7DL,0x7C7DL},{0x7C7DL,0x6B61L,0x7C7DL,0x7C7DL},{0x7C7DL,0x6B61L,0x7C7DL,0x7C7DL},{0x7C7DL,0x6B61L,0x7C7DL,0x7C7DL},{0x7C7DL,0x6B61L,0x7C7DL,0x7C7DL}}};
            int i, j, k;
            l_47.s7 = (((VECTOR(uint64_t, 8))((safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(l_380.yxyxxxxxyyxyxxxx)).s8, (safe_mul_func_uint8_t_u_u(((*l_324) = (l_383 , (safe_add_func_uint8_t_u_u(0UL, p_35)))), 0xEEL)))), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(mad_sat(((VECTOR(uint64_t, 2))(add_sat(((VECTOR(uint64_t, 2))(add_sat(((VECTOR(uint64_t, 8))(l_386.xyyyyxyx)).s56, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_387.s21)).yyxxxyyxyxyxxxyy)).s1d50)).hi, ((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),VECTOR(int64_t, 2),((VECTOR(int64_t, 2))(0x7AA64741DDFF6099L, 0x460CDAF2B0F31204L)), ((VECTOR(int64_t, 2))(l_388.yx)), ((VECTOR(int64_t, 16))(l_389.wxwxzyzywxyzzwww)).s94)))))), 0xE0EC9D6DFFC1D8BEL, 18446744073709551610UL)).hi))), ((VECTOR(uint64_t, 4))(((safe_sub_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(p_1057->g_297.x, GROUP_DIVERGE(1, 1))), ((l_344 = ((((p_1057->g_416 = ((safe_mod_func_int32_t_s_s((safe_add_func_int16_t_s_s((!((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(0x04DBL, ((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(p_1057->g_400.s296b5c05)).s3474063017163033)).sdc4e)).wxywxzwzwyywxxwy, ((VECTOR(int16_t, 4))(l_401.yxyx)).ywxzwywxxzwwzxxz))).sc03b, ((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 8))(l_402.sa6d8dbd8)).s72, ((VECTOR(uint8_t, 2))(p_1057->g_403.s71))))).xyyx))).hi, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_404.s74)), 0x0BFBL, 0x0C7DL)).lo)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(0x67B2L, 7L, 0x7234L, 1L, 1L, ((VECTOR(int16_t, 2))(l_405.s0c)), 0x7FA7L, ((VECTOR(int16_t, 8))(l_406.s12237156)))))).s97)))))))), (-6L))).odd)).even), l_386.x)), (l_345 = (safe_rshift_func_uint8_t_u_u(0xA2L, 1))))) && (l_417 = ((*l_414) = (p_1057->g_153 >= (safe_lshift_func_uint8_t_u_s(((safe_sub_func_int16_t_s_s((l_332 <= 0x97L), l_413[2][1][5])) < 0x221A73B18CDBEFEEL), 5))))))) < p_1057->g_41.y) > (*p_1057->g_3)) <= p_35)) > 2L))) , GROUP_DIVERGE(2, 1)), FAKE_DIVERGE(p_1057->local_0_offset, get_local_id(0), 10), 18446744073709551606UL, 18446744073709551608UL)).even))).yxxxxyyxxyxxyxxy, ((VECTOR(uint64_t, 16))(0x6F71A8FCF7C13F40L)), ((VECTOR(uint64_t, 16))(0x0C1E57B87A29CBE5L))))).s0757)), p_1057->g_297.x, 1UL, 18446744073709551614UL)).s5 >= l_402.sb);
            if ((p_1057->g_48.s5 != (+((((safe_unary_minus_func_int32_t_s((*p_1057->g_3))) == (l_419 <= 0x045BL)) >= l_402.s2) > 255UL))))
            { /* block id: 161 */
                VECTOR(int16_t, 4) l_424 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x6528L), 0x6528L);
                int32_t l_425 = 0x39D83C96L;
                int32_t l_430 = 0x3CA875E1L;
                int32_t l_434 = 1L;
                int32_t l_435 = 0x576AC43EL;
                int i;
                for (l_60 = (-4); (l_60 >= 49); l_60 = safe_add_func_uint32_t_u_u(l_60, 8))
                { /* block id: 164 */
                    int32_t l_422 = 4L;
                    int32_t *l_423[6] = {&l_345,&l_345,&l_345,&l_345,&l_345,&l_345};
                    uint32_t l_436 = 0x50EDF8F5L;
                    int i;
                    l_436--;
                }
            }
            else
            { /* block id: 167 */
                int32_t *l_439 = (void*)0;
                int32_t *l_440 = &l_428;
                int32_t *l_441 = (void*)0;
                int32_t *l_442 = &l_433;
                int32_t *l_443 = &l_433;
                int32_t *l_444 = &l_344;
                int32_t *l_445 = &l_433;
                int32_t *l_446 = (void*)0;
                int32_t *l_447 = &l_431[1][4];
                int32_t *l_448 = &l_426;
                int32_t *l_449 = &l_426;
                int32_t *l_450 = &l_431[1][4];
                int32_t *l_451 = &l_432;
                int32_t l_452 = 3L;
                int32_t *l_453[1];
                int32_t ****l_462 = &l_315;
                int64_t *l_463 = (void*)0;
                int64_t *l_464 = &p_1057->g_147;
                VECTOR(uint64_t, 2) l_468 = (VECTOR(uint64_t, 2))(5UL, 1UL);
                VECTOR(uint64_t, 8) l_469 = (VECTOR(uint64_t, 8))(0xD0834FE8117C4619L, (VECTOR(uint64_t, 4))(0xD0834FE8117C4619L, (VECTOR(uint64_t, 2))(0xD0834FE8117C4619L, 0xC54EED2301AF8F80L), 0xC54EED2301AF8F80L), 0xC54EED2301AF8F80L, 0xD0834FE8117C4619L, 0xC54EED2301AF8F80L);
                uint16_t *l_482[7] = {(void*)0,&l_417,(void*)0,(void*)0,&l_417,(void*)0,(void*)0};
                VECTOR(int32_t, 16) l_489 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-6L)), (-6L)), (-6L), 0L, (-6L), (VECTOR(int32_t, 2))(0L, (-6L)), (VECTOR(int32_t, 2))(0L, (-6L)), 0L, (-6L), 0L, (-6L));
                VECTOR(uint32_t, 2) l_490 = (VECTOR(uint32_t, 2))(0x0C6AAE51L, 0x44FD655FL);
                int8_t l_498 = 0x7FL;
                int i;
                for (i = 0; i < 1; i++)
                    l_453[i] = (void*)0;
                --l_454;
                (*l_316) = func_76(((*l_449) = ((*l_442) &= ((((safe_mul_func_uint8_t_u_u((((*l_464) = (l_461 == ((*l_462) = &l_316))) == (((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(p_1057->g_465.s37126542)).s44)).lo , ((-1L) == (p_1057->g_36.sd & (safe_mul_func_uint16_t_u_u(3UL, (((**p_1057->g_155) = (*p_1057->g_156)) && (((((VECTOR(uint64_t, 16))(safe_clamp_func(VECTOR(uint64_t, 16),VECTOR(uint64_t, 16),((VECTOR(uint64_t, 16))(max(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(0x13F0C2B1F291D3D8L, 0x4DE8D943170C07E5L, 0xE9678224DA806F95L, 0x9C34703A854AE15AL)).lo)).xyxyxxyyxyyyxyyy, ((VECTOR(uint64_t, 2))(l_468.yy)).xxyxyyyyxxxxyyxx))), ((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551608UL)), ((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(l_469.s3731)).odd)), ((VECTOR(uint64_t, 4))(add_sat(((VECTOR(uint64_t, 8))(mul_hi(((VECTOR(uint64_t, 4))(l_470.s7555)).xwyxxwxz, ((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 8))(l_471.s00576160)).even, ((VECTOR(uint64_t, 4))((safe_rshift_func_int8_t_s_s((p_35 <= (safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((*l_324) = ((((((~(safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((l_49.y = GROUP_DIVERGE(2, 1)) >= (((FAKE_DIVERGE(p_1057->group_2_offset, get_group_id(2), 10) & ((VECTOR(int32_t, 4))(p_1057->g_485.wzwx)).w) == (safe_rshift_func_uint16_t_u_u(((((VECTOR(uint8_t, 8))(l_488.s01063754)).s3 , ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 16))(abs(((VECTOR(int32_t, 16))(l_489.se6ff9816e58260c0))))).sd1a6, ((VECTOR(uint32_t, 2))(0UL, 0x08E74346L)).xxxy))), 0x6022C7CAL, ((VECTOR(uint32_t, 16))(l_490.xxxyxxxxxyyxxxyy)).s4, 0xF1BFF174L, 0xA51B50FFL)).s4) && FAKE_DIVERGE(p_1057->global_2_offset, get_global_id(2), 10)), 3))) >= ((*l_450) > ((safe_div_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((p_35 , 1L), GROUP_DIVERGE(0, 1))), (*p_1057->g_156))) & 0x7A57A3346C108625L)))), 0x354BL)), GROUP_DIVERGE(2, 1)))) && p_35) , 0x9A9E94F61CE3D883L) == p_1057->g_41.y) <= (*l_450)) ^ (***l_461))), p_35)), p_35))), (**l_316))), ((VECTOR(uint64_t, 2))(1UL)), 0xDF953CCA6ECCDDF4L)), ((VECTOR(uint64_t, 4))(0x338DDB59E3F7042BL))))).xwxxxxzx))).lo, ((VECTOR(uint64_t, 4))(0UL))))).lo))), ((VECTOR(uint64_t, 2))(0x580B2FD2763A0B0AL))))).yyyyxyxyyxyyxyxx, ((VECTOR(uint64_t, 16))(0xB50B9CC025FD0439L))))).sa || p_1057->g_44.y) ^ p_35) , (*p_1057->g_3))))))))), (***l_461))) , (-1L)) | p_35) != (***l_461)))), &p_1057->g_4, &p_1057->g_4, p_1057->g_495, p_1057);
                l_502[2][0][6]++;
                for (l_454 = (-12); (l_454 > 47); l_454++)
                { /* block id: 180 */
                    uint64_t l_509[6][8][4] = {{{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL}},{{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL}},{{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL}},{{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL}},{{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL}},{{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL},{0x6F20B1826BD1837FL,0xD0B9F4D87B3F48ECL,0xEB41E74032F87B27L,1UL}}};
                    int i, j, k;
                    for (p_1057->g_116 = 0; (p_1057->g_116 == 18); p_1057->g_116 = safe_add_func_int8_t_s_s(p_1057->g_116, 5))
                    { /* block id: 183 */
                        (*p_1057->g_301) = (*p_1057->g_5);
                        (*p_1057->g_5) = (*p_1057->g_5);
                    }
                    --l_509[0][0][3];
                }
            }
        }
        for (p_1057->g_137 = (-17); (p_1057->g_137 < 35); p_1057->g_137 = safe_add_func_int64_t_s_s(p_1057->g_137, 3))
        { /* block id: 193 */
            int8_t l_519 = 0x29L;
            uint8_t l_526 = 0xDFL;
            for (l_417 = 0; (l_417 >= 8); l_417 = safe_add_func_uint64_t_u_u(l_417, 4))
            { /* block id: 196 */
                VECTOR(int64_t, 2) l_518 = (VECTOR(int64_t, 2))(1L, (-9L));
                int32_t ****l_520 = &l_315;
                int32_t *l_527 = (void*)0;
                int32_t *l_528 = (void*)0;
                int32_t *l_529[8][1];
                int i, j;
                for (i = 0; i < 8; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_529[i][j] = (void*)0;
                }
                l_47.s5 |= (((***l_315) && ((((&p_35 != (void*)0) <= (safe_add_func_int8_t_s_s((***l_461), (((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 4))(l_518.yxyy)).even, ((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 8))(add_sat(((VECTOR(int64_t, 16))(mad_sat(((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),int64_t,((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),int64_t,((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(max(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(0x55659F7EE8AAA5C1L, (l_519 > ((*l_324) = p_1057->g_2)), (((*l_520) = l_461) == (void*)0), ((VECTOR(int64_t, 16))(upsample(((VECTOR(int32_t, 16))(((safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(p_1057->g_497, (***l_461))), p_35)) , p_1057->g_250.s6), 3L, p_35, l_519, 0x4FADAC28L, ((VECTOR(int32_t, 8))(0x7243D945L)), 0x63827D85L, (-1L), 0x075A1885L)), ((VECTOR(uint32_t, 16))(1UL))))).s7, 7L, p_1057->g_57.s1, (-1L), (-1L))).s1064324521704743)).even, (int64_t)p_1057->g_525))).odd)).yzwyxyzz, (int64_t)1L, (int64_t)p_1057->g_485.y))).s7046544060126701, (int64_t)p_1057->g_416, (int64_t)(****l_520)))), ((VECTOR(int64_t, 16))(0x4BB0D008F4D25A67L)), ((VECTOR(int64_t, 16))((-1L)))))).odd, ((VECTOR(int64_t, 8))(0x093308F1712CC12CL))))).s66, ((VECTOR(int64_t, 2))(9L)))))))).lo | l_518.x)))) ^ p_35) , l_526)) && p_1057->g_41.y);
                for (p_1057->g_220 = 0; (p_1057->g_220 >= 58); ++p_1057->g_220)
                { /* block id: 202 */
                    uint32_t l_532[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_532[i] = 1UL;
                    l_532[1] = (*p_1057->g_3);
                    p_1057->g_534 = ((**l_315) = (*p_1057->g_5));
                }
            }
            if ((atomic_inc(&p_1057->g_atomic_input[37 * get_linear_group_id() + 19]) == 4))
            { /* block id: 209 */
                uint8_t l_535 = 1UL;
                int32_t l_539 = (-9L);
                int32_t *l_538 = &l_539;
                int32_t *l_540 = (void*)0;
                int32_t l_541 = 0L;
                int32_t *l_542 = &l_539;
                int8_t l_543 = (-7L);
                int64_t l_544[9][8][3] = {{{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L}},{{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L}},{{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L}},{{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L}},{{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L}},{{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L}},{{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L}},{{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L}},{{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L},{0x7CE0CF1183BDA101L,0x06B108993B608445L,0x2EC61E0215774059L}}};
                int16_t l_545 = 0x5ABCL;
                int i, j, k;
                l_535--;
                l_540 = l_538;
                l_542 = (l_541 , (void*)0);
                if (((l_545 = (l_544[3][2][0] = ((l_543 = 1UL) , 0x40D6E574L))) , (-1L)))
                { /* block id: 216 */
                    VECTOR(int32_t, 16) l_546 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int32_t, 2))(0L, 0L), (VECTOR(int32_t, 2))(0L, 0L), 0L, 0L, 0L, 0L);
                    int i;
                    (*l_540) = (-8L);
                    if (((VECTOR(int32_t, 2))(l_546.sf2)).odd)
                    { /* block id: 218 */
                        uint32_t l_547 = 1UL;
                        int32_t l_548 = 0x4174CD6BL;
                        int32_t l_549 = (-8L);
                        uint8_t l_550 = 0UL;
                        int64_t l_553 = 0x0B584B7B7D57D5BBL;
                        uint64_t l_554 = 0UL;
                        VECTOR(uint64_t, 16) l_555 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xA25AC7D080D015A4L), 0xA25AC7D080D015A4L), 0xA25AC7D080D015A4L, 18446744073709551615UL, 0xA25AC7D080D015A4L, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xA25AC7D080D015A4L), (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xA25AC7D080D015A4L), 18446744073709551615UL, 0xA25AC7D080D015A4L, 18446744073709551615UL, 0xA25AC7D080D015A4L);
                        int16_t l_556 = (-8L);
                        VECTOR(uint64_t, 8) l_557 = (VECTOR(uint64_t, 8))(18446744073709551606UL, (VECTOR(uint64_t, 4))(18446744073709551606UL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 7UL), 7UL), 7UL, 18446744073709551606UL, 7UL);
                        VECTOR(uint64_t, 4) l_558 = (VECTOR(uint64_t, 4))(0x94F416DE43DDA528L, (VECTOR(uint64_t, 2))(0x94F416DE43DDA528L, 0UL), 0UL);
                        VECTOR(uint64_t, 8) l_559 = (VECTOR(uint64_t, 8))(18446744073709551611UL, (VECTOR(uint64_t, 4))(18446744073709551611UL, (VECTOR(uint64_t, 2))(18446744073709551611UL, 0x86E605BC4D139B93L), 0x86E605BC4D139B93L), 0x86E605BC4D139B93L, 18446744073709551611UL, 0x86E605BC4D139B93L);
                        VECTOR(int64_t, 16) l_560 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 7L), 7L), 7L, 1L, 7L, (VECTOR(int64_t, 2))(1L, 7L), (VECTOR(int64_t, 2))(1L, 7L), 1L, 7L, 1L, 7L);
                        VECTOR(int32_t, 2) l_561 = (VECTOR(int32_t, 2))((-4L), 1L);
                        int32_t l_562[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_562[i] = (-6L);
                        (*l_540) = (l_547 , l_548);
                        l_550++;
                        l_548 = ((((l_553 , l_554) , ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(l_555.s4f02a05e)).s2, l_556, 0xF509FBAEF862AE27L, ((VECTOR(uint64_t, 4))(min(((VECTOR(uint64_t, 4))(min(((VECTOR(uint64_t, 2))(l_557.s50)).yyyx, (uint64_t)GROUP_DIVERGE(2, 1)))), ((VECTOR(uint64_t, 16))(l_558.wwzwxzywwywyxwyx)).s80c4))), 0UL)).s3102440713743224, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_559.s4526)).zzwxxwzx)).s1151611072030143))))).s77)).odd) , (((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(l_560.sedfafbb24c73c6b4)).odd)).s7 , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_561.yxyx)).ywyyxxyy)).s6)) , l_562[0]);
                    }
                    else
                    { /* block id: 222 */
                        uint64_t l_563 = 8UL;
                        int32_t l_564 = (-3L);
                        int32_t l_566 = 0x789BC2E4L;
                        int32_t *l_565 = &l_566;
                        l_546.s2 = ((*l_540) = l_563);
                        l_540 = (l_542 = (l_564 , (FAKE_DIVERGE(p_1057->global_2_offset, get_global_id(2), 10) , l_565)));
                    }
                    l_546.s4 = ((*l_538) = (-1L));
                }
                else
                { /* block id: 230 */
                    uint64_t l_567 = 0UL;
                    uint32_t l_576 = 0UL;
                    int32_t l_577[7] = {0x047103D9L,(-1L),0x047103D9L,0x047103D9L,(-1L),0x047103D9L,0x047103D9L};
                    int16_t l_578 = 0x50ADL;
                    VECTOR(int32_t, 16) l_579 = (VECTOR(int32_t, 16))(0x3E53FA0FL, (VECTOR(int32_t, 4))(0x3E53FA0FL, (VECTOR(int32_t, 2))(0x3E53FA0FL, 0L), 0L), 0L, 0x3E53FA0FL, 0L, (VECTOR(int32_t, 2))(0x3E53FA0FL, 0L), (VECTOR(int32_t, 2))(0x3E53FA0FL, 0L), 0x3E53FA0FL, 0L, 0x3E53FA0FL, 0L);
                    int i;
                    l_567++;
                    for (l_567 = 0; (l_567 == 54); l_567 = safe_add_func_uint64_t_u_u(l_567, 1))
                    { /* block id: 234 */
                        int64_t l_572 = 0x3CF877656185F11FL;
                        uint32_t l_573[2][4][1] = {{{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}}};
                        uint8_t l_574[9];
                        uint32_t l_575 = 0x40684DD5L;
                        int i, j, k;
                        for (i = 0; i < 9; i++)
                            l_574[i] = 0x98L;
                        l_575 = (l_572 , (l_574[8] = ((*l_540) = l_573[1][0][0])));
                    }
                    (*l_540) ^= ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 8))((l_576 = 0L), l_577[6], 0x41F497C1L, l_578, ((VECTOR(int32_t, 4))(l_579.s3b2f))))))).s5;
                }
                unsigned int result = 0;
                result += l_535;
                result += l_539;
                result += l_541;
                result += l_543;
                int l_544_i0, l_544_i1, l_544_i2;
                for (l_544_i0 = 0; l_544_i0 < 9; l_544_i0++) {
                    for (l_544_i1 = 0; l_544_i1 < 8; l_544_i1++) {
                        for (l_544_i2 = 0; l_544_i2 < 3; l_544_i2++) {
                            result += l_544[l_544_i0][l_544_i1][l_544_i2];
                        }
                    }
                }
                result += l_545;
                atomic_add(&p_1057->g_special_values[37 * get_linear_group_id() + 19], result);
            }
            else
            { /* block id: 242 */
                (1 + 1);
            }
        }
        (*l_580) |= (*p_1057->g_3);
        for (p_1057->g_116 = 0; (p_1057->g_116 == 15); p_1057->g_116 = safe_add_func_int32_t_s_s(p_1057->g_116, 9))
        { /* block id: 249 */
            uint64_t l_583 = 2UL;
            int16_t **l_599 = &l_598;
            int32_t l_622 = (-1L);
            int32_t l_657 = 0x4624E669L;
            int32_t l_658 = (-3L);
            int32_t l_659[10][1][9] = {{{0x79885808L,0L,0L,0x79885808L,0x79885808L,0L,0L,0x79885808L,0x79885808L}},{{0x79885808L,0L,0L,0x79885808L,0x79885808L,0L,0L,0x79885808L,0x79885808L}},{{0x79885808L,0L,0L,0x79885808L,0x79885808L,0L,0L,0x79885808L,0x79885808L}},{{0x79885808L,0L,0L,0x79885808L,0x79885808L,0L,0L,0x79885808L,0x79885808L}},{{0x79885808L,0L,0L,0x79885808L,0x79885808L,0L,0L,0x79885808L,0x79885808L}},{{0x79885808L,0L,0L,0x79885808L,0x79885808L,0L,0L,0x79885808L,0x79885808L}},{{0x79885808L,0L,0L,0x79885808L,0x79885808L,0L,0L,0x79885808L,0x79885808L}},{{0x79885808L,0L,0L,0x79885808L,0x79885808L,0L,0L,0x79885808L,0x79885808L}},{{0x79885808L,0L,0L,0x79885808L,0x79885808L,0L,0L,0x79885808L,0x79885808L}},{{0x79885808L,0L,0L,0x79885808L,0x79885808L,0L,0L,0x79885808L,0x79885808L}}};
            int32_t *l_667 = &l_658;
            int8_t *l_708 = &p_1057->g_224[1][0][3];
            VECTOR(int32_t, 16) l_709 = (VECTOR(int32_t, 16))(0x041D6F5AL, (VECTOR(int32_t, 4))(0x041D6F5AL, (VECTOR(int32_t, 2))(0x041D6F5AL, (-1L)), (-1L)), (-1L), 0x041D6F5AL, (-1L), (VECTOR(int32_t, 2))(0x041D6F5AL, (-1L)), (VECTOR(int32_t, 2))(0x041D6F5AL, (-1L)), 0x041D6F5AL, (-1L), 0x041D6F5AL, (-1L));
            uint16_t l_732 = 0x5C84L;
            VECTOR(int16_t, 8) l_771 = (VECTOR(int16_t, 8))((-4L), (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), (-3L)), (-3L)), (-3L), (-4L), (-3L));
            uint32_t **l_793[1][3][3] = {{{&l_56,&l_56,&l_56},{&l_56,&l_56,&l_56},{&l_56,&l_56,&l_56}}};
            uint32_t ***l_794 = &l_793[0][0][0];
            int i, j, k;
            l_583 = 9L;
            if ((atomic_inc(&p_1057->l_atomic_input[20]) == 1))
            { /* block id: 252 */
                int32_t l_585 = 0x38FF71E0L;
                int32_t *l_584 = &l_585;
                int32_t *l_586 = &l_585;
                int16_t l_587 = 1L;
                int32_t l_588 = (-1L);
                uint32_t l_589 = 1UL;
                uint32_t l_592 = 0x7EE04BE2L;
                uint32_t l_593 = 4294967288UL;
                uint8_t l_594 = 0x8EL;
                int64_t l_595[2];
                int32_t l_596 = 6L;
                int i;
                for (i = 0; i < 2; i++)
                    l_595[i] = 0x19A1EE56E05AC55DL;
                l_586 = l_584;
                l_589--;
                l_593 ^= (l_592 , (-10L));
                l_596 = ((l_594 = ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))((-5L), 0x6D8D2A9F2C88CD4AL, 0x3B8AADC26E564B94L, 5L)).lo)), 0x2BC2751BE5731DAAL, 0L)).z) , l_595[0]);
                unsigned int result = 0;
                result += l_585;
                result += l_587;
                result += l_588;
                result += l_589;
                result += l_592;
                result += l_593;
                result += l_594;
                int l_595_i0;
                for (l_595_i0 = 0; l_595_i0 < 2; l_595_i0++) {
                    result += l_595[l_595_i0];
                }
                result += l_596;
                atomic_add(&p_1057->l_special_values[20], result);
            }
            else
            { /* block id: 258 */
                (1 + 1);
            }
        }
    }
    return &p_1057->g_534;
}


/* ------------------------------------------ */
/* 
 * reads : p_1057->g_156 p_1057->g_153 p_1057->g_44 p_1057->g_119 p_1057->g_3 p_1057->g_4 p_1057->g_5 p_1057->g_57 p_1057->g_comm_values p_1057->g_36 p_1057->g_145 p_1057->g_150 p_1057->g_220 p_1057->g_224 p_1057->g_18 p_1057->g_250 p_1057->g_257 p_1057->g_41 p_1057->g_147 p_1057->g_261 p_1057->g_155
 * writes: p_1057->g_44 p_1057->g_116 p_1057->g_119 p_1057->g_3 p_1057->g_150 p_1057->g_220 p_1057->g_137 p_1057->g_224 p_1057->g_153 p_1057->g_36 p_1057->g_57 p_1057->g_257 p_1057->g_288 p_1057->g_46
 */
uint64_t  func_50(int32_t ** p_51, int8_t  p_52, struct S0 * p_1057)
{ /* block id: 61 */
    uint16_t l_187 = 65535UL;
    int32_t *l_188 = (void*)0;
    int32_t *l_189 = (void*)0;
    int32_t *l_190[3];
    VECTOR(uint16_t, 2) l_193 = (VECTOR(uint16_t, 2))(0xA173L, 0xF607L);
    VECTOR(int32_t, 2) l_196 = (VECTOR(int32_t, 2))(1L, (-5L));
    int32_t l_197 = 1L;
    VECTOR(int32_t, 8) l_204 = (VECTOR(int32_t, 8))(0x2D49D263L, (VECTOR(int32_t, 4))(0x2D49D263L, (VECTOR(int32_t, 2))(0x2D49D263L, (-1L)), (-1L)), (-1L), 0x2D49D263L, (-1L));
    int16_t *l_207 = (void*)0;
    int16_t *l_208 = (void*)0;
    int16_t *l_209 = (void*)0;
    int16_t *l_210 = (void*)0;
    int16_t *l_211 = (void*)0;
    int16_t *l_212 = (void*)0;
    int16_t *l_213 = (void*)0;
    int16_t *l_214 = (void*)0;
    int16_t *l_215[5];
    VECTOR(int8_t, 2) l_221 = (VECTOR(int8_t, 2))(0x72L, 0x41L);
    VECTOR(int16_t, 8) l_222 = (VECTOR(int16_t, 8))((-6L), (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), 0L), 0L), 0L, (-6L), 0L);
    uint16_t *l_223 = &p_1057->g_137;
    VECTOR(uint8_t, 2) l_252 = (VECTOR(uint8_t, 2))(0x47L, 0xC8L);
    VECTOR(int16_t, 2) l_258 = (VECTOR(int16_t, 2))(0x1E5AL, 0x6885L);
    VECTOR(int16_t, 16) l_259 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x593EL), 0x593EL), 0x593EL, 0L, 0x593EL, (VECTOR(int16_t, 2))(0L, 0x593EL), (VECTOR(int16_t, 2))(0L, 0x593EL), 0L, 0x593EL, 0L, 0x593EL);
    uint64_t *l_266 = &p_1057->g_119;
    VECTOR(int32_t, 4) l_271 = (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 1L), 1L);
    int32_t ***l_272 = (void*)0;
    int32_t **l_274[3][10] = {{&l_189,&l_190[0],&l_190[0],&l_189,&l_189,&l_190[0],&l_190[0],&l_189,&l_189,&l_190[0]},{&l_189,&l_190[0],&l_190[0],&l_189,&l_189,&l_190[0],&l_190[0],&l_189,&l_189,&l_190[0]},{&l_189,&l_190[0],&l_190[0],&l_189,&l_189,&l_190[0],&l_190[0],&l_189,&l_189,&l_190[0]}};
    int32_t ***l_273 = &l_274[1][4];
    int32_t ***l_275 = (void*)0;
    int32_t **l_276 = &l_190[0];
    uint8_t *l_281[3];
    uint8_t l_282 = 6UL;
    int8_t *l_283 = (void*)0;
    int8_t *l_284 = &p_1057->g_224[5][0][0];
    uint32_t *l_285 = (void*)0;
    uint32_t *l_286 = (void*)0;
    uint32_t *l_287[9][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int i, j;
    for (i = 0; i < 3; i++)
        l_190[i] = (void*)0;
    for (i = 0; i < 5; i++)
        l_215[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_281[i] = (void*)0;
    (*p_51) = (((*p_1057->g_156) && 0x5E08E547L) , func_76(l_187, l_188, func_76((p_1057->g_44.y |= l_187), ((safe_mod_func_uint64_t_u_u(((((((p_1057->g_119 < (((*p_1057->g_3) || p_52) , ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_193.yyyyyxxyyxyyxyyx)).sb8f9)).wwwzwwzz)).s1503051647310157)).s0)) & (safe_lshift_func_int8_t_s_s(((-9L) == (**p_1057->g_5)), 5))) , 0L) > p_1057->g_57.s6) >= p_52) , p_52), p_52)) , (*p_1057->g_5)), (*p_51), p_52, p_1057), p_52, p_1057));
    l_197 &= ((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 2))((-5L), 0x77C8FF37L)).xyxyxxxyxxyyyxyy, ((VECTOR(int32_t, 4))(l_196.xyyx)).zwywywwywxzzzwzy))).s0;
    if ((p_52 > (p_1057->g_224[3][0][0] ^= (safe_lshift_func_uint16_t_u_s(((*l_223) = (safe_mod_func_int32_t_s_s((safe_add_func_int32_t_s_s(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 16))(l_204.s3144602745541764))))).s0, (safe_rshift_func_int16_t_s_s(p_1057->g_145, (p_1057->g_150.w ^= p_52))))), (safe_div_func_int64_t_s_s((safe_mul_func_int16_t_s_s(p_52, ((VECTOR(int16_t, 16))(2L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 2))(3L, 0x52L)).yxxyxxyyxyxyyxxx, ((VECTOR(uint8_t, 4))(((p_1057->g_220 &= (GROUP_DIVERGE(2, 1) | 0xB3ADCCEB260C81B7L)) , ((void*)0 != p_51)), 0x5FL, 0xEBL, 247UL)).zxxxzwzwywxwzwyz))).hi)).s04)), ((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 2))(l_221.xy)).yxxyxyyx, ((VECTOR(uint8_t, 2))(0xD7L, 0xC9L)).xxxxyxxx))), ((VECTOR(int16_t, 4))(l_222.s1201)).z, p_52, p_52, 0x0D60L, 0x739EL)).s6)), 0x85613872D6BF58A8L))))), 1)))))
    { /* block id: 69 */
        return p_1057->g_18.s3;
    }
    else
    { /* block id: 71 */
        int8_t l_225[10][1] = {{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}};
        int32_t l_230 = 0x37563791L;
        uint32_t **l_233 = &p_1057->g_156;
        int16_t *l_234 = (void*)0;
        int32_t l_235 = 0x65817B17L;
        VECTOR(int32_t, 8) l_236 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x3B4D193DL), 0x3B4D193DL), 0x3B4D193DL, 1L, 0x3B4D193DL);
        VECTOR(int64_t, 8) l_243 = (VECTOR(int64_t, 8))((-5L), (VECTOR(int64_t, 4))((-5L), (VECTOR(int64_t, 2))((-5L), 0L), 0L), 0L, (-5L), 0L);
        VECTOR(uint8_t, 2) l_251 = (VECTOR(uint8_t, 2))(0xFDL, 0xCEL);
        VECTOR(uint8_t, 4) l_253 = (VECTOR(uint8_t, 4))(0xE1L, (VECTOR(uint8_t, 2))(0xE1L, 0xE1L), 0xE1L);
        int32_t **l_255 = &l_190[1];
        int32_t ***l_254[10] = {&l_255,&l_255,&l_255,&l_255,&l_255,&l_255,&l_255,&l_255,&l_255,&l_255};
        int8_t *l_256 = &p_1057->g_224[3][0][0];
        VECTOR(int16_t, 8) l_260 = (VECTOR(int16_t, 8))(0x245FL, (VECTOR(int16_t, 4))(0x245FL, (VECTOR(int16_t, 2))(0x245FL, (-1L)), (-1L)), (-1L), 0x245FL, (-1L));
        int i, j;
        l_225[9][0] |= (-1L);
        l_235 |= ((((((safe_lshift_func_uint8_t_u_s(((void*)0 != l_188), (((*p_1057->g_156) = (safe_rshift_func_uint8_t_u_u(FAKE_DIVERGE(p_1057->local_2_offset, get_local_id(2), 10), 3))) || 0x14597CF5L))) <= ((l_230 = (-1L)) <= ((safe_add_func_uint8_t_u_u((p_52 && (&p_1057->g_156 == l_233)), ((void*)0 == l_234))) || p_52))) ^ l_225[5][0]) & p_1057->g_36.s8) <= p_1057->g_224[3][0][0]) > l_225[0][0]);
        p_1057->g_36.s6 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(0x002A9F15L, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 16))(l_236.s2247741033553274)), ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x6543DA58L, 0x35CE9AB9L)), ((VECTOR(int32_t, 16))(0x3175606AL, (~(p_1057->g_44.y = (safe_sub_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(0UL, ((VECTOR(int64_t, 16))(rotate(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(rhadd(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(mad_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(rotate(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(l_243.s26743321)), (safe_rshift_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u((((**l_233) = (p_1057->g_150.x ^ (safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(p_1057->g_250.s77)).xxxxxyxyxyxyyxyy)).se2f2)).xyxwxxyz)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_251.xx)).xyxxyxyx)), ((VECTOR(uint8_t, 8))(l_252.yyxxyxxx))))).s21)), 2UL, 5UL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 16))(0x9EL, 0xABL, 0x0FL, 0xABL, 8UL, ((VECTOR(uint8_t, 8))(l_253.zywzxxxw)), ((VECTOR(uint8_t, 2))(3UL, 0xC0L)), 0x01L)).sa037, (uint8_t)GROUP_DIVERGE(2, 1)))).lo)), 0x89L, 255UL)).sd, ((((*l_256) = ((FAKE_DIVERGE(p_1057->group_0_offset, get_group_id(0), 10) , &p_1057->g_3) != (p_51 = &p_1057->g_3))) , (p_52 > ((VECTOR(int16_t, 16))(p_1057->g_257.yyyxxxxxyyxyxyyy)).s3)) , (p_52 > ((((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_258.yy)).xxxx)).even, ((VECTOR(int16_t, 8))(l_259.sfc1de143)).s72, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_260.s5075567752036525)))).s01))).hi != (!65530UL)) , (1L > (((p_1057->g_150.y == p_52) , p_1057->g_41.x) || 0x17B4EAEF42ED4935L))))))))) | (*p_1057->g_3)), p_52)) , p_52), p_52)), 1L, (-3L), ((VECTOR(int64_t, 2))((-1L))), p_52, (-1L), 0x58F4C374DF2F93B7L)).s4, ((VECTOR(int64_t, 2))((-10L))), 0x00C7AB0E0188DD18L, ((VECTOR(int64_t, 4))(0x4B404C0DA5FFB039L)), p_1057->g_224[3][0][0], ((VECTOR(int64_t, 4))(0x17915873B9A3A852L)), ((VECTOR(int64_t, 2))(9L)), 9L)), ((VECTOR(int64_t, 16))(0L))))).even)), ((VECTOR(int64_t, 8))(0x2EA7CCC55746121AL)), ((VECTOR(int64_t, 8))(1L))))).s4410010146337105)).sff)).yyyxyyyx, ((VECTOR(int64_t, 8))(0x590FE9BA69A8903FL))))).hi)))).zzwyzwxzxyxxwyww, ((VECTOR(int64_t, 16))(7L))))).sd)), p_1057->g_147)), (*p_1057->g_3))))), 0x01542B8DL, (-7L), 0x3AFEF725L, 0x78AE68A9L, ((VECTOR(int32_t, 2))(0x339B5A0BL)), ((VECTOR(int32_t, 2))(0x21C6DC4FL)), (**p_1057->g_5), 0x03089329L, p_1057->g_261, (**p_1057->g_5), 3L, 0x74305205L)).s5, 5L, ((VECTOR(int32_t, 2))(0x23FFE95DL)), 0x1936E400L, (-8L))).s41, ((VECTOR(int32_t, 2))(0x49EC02B7L))))).yxxxxyyxyyxyxxyy, ((VECTOR(int32_t, 16))((-1L)))))).sd8)), 0x241DF838L, (-1L))).odd, ((VECTOR(int32_t, 2))((-1L)))))), ((VECTOR(int32_t, 4))((-1L))), ((VECTOR(int32_t, 4))((-1L))), 1L, (-2L), (*p_1057->g_3), (-7L), 0x24074CF7L)).odd)))).s4;
    }
    p_1057->g_46.s7 = (safe_div_func_int8_t_s_s((safe_mul_func_int16_t_s_s((((*l_266) &= FAKE_DIVERGE(p_1057->local_0_offset, get_local_id(0), 10)) <= p_52), ((p_1057->g_150.z = 0x03ECL) >= (p_1057->g_288 = (p_1057->g_257.x = ((safe_div_func_uint32_t_u_u((p_1057->g_57.s1 = (((*l_284) = (safe_mod_func_int16_t_s_s((l_271.w &= 0x1197L), ((**p_1057->g_155) || ((**p_1057->g_155) = ((((l_276 = ((*l_273) = &l_190[0])) != p_51) ^ (-1L)) <= (safe_mul_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_s(0L, 0)) & (l_282 = p_52)) && p_1057->g_145), 0x4207L)))))))) || p_1057->g_57.s5)), p_52)) , (-7L))))))), FAKE_DIVERGE(p_1057->local_1_offset, get_local_id(1), 10)));
    return p_52;
}


/* ------------------------------------------ */
/* 
 * reads : p_1057->g_5 p_1057->g_3 p_1057->g_44 p_1057->g_comm_values p_1057->g_36 p_1057->g_137 p_1057->g_57 p_1057->g_46 p_1057->g_119 p_1057->g_41 p_1057->g_48 p_1057->g_150 p_1057->g_4 p_1057->g_169 p_1057->g_156 p_1057->g_153 p_1057->l_comm_values p_1057->g_2
 * writes: p_1057->g_116 p_1057->g_119 p_1057->g_137 p_1057->g_57 p_1057->g_145 p_1057->g_147 p_1057->g_44 p_1057->g_150 p_1057->g_155 p_1057->g_169
 */
int32_t ** func_53(uint32_t  p_54, uint64_t  p_55, struct S0 * p_1057)
{ /* block id: 14 */
    int32_t *l_61 = (void*)0;
    int32_t *l_62 = (void*)0;
    int32_t *l_63 = (void*)0;
    int32_t *l_64 = (void*)0;
    int32_t *l_65 = (void*)0;
    int32_t *l_66[2][8];
    int16_t l_67 = 0L;
    uint64_t l_68 = 0UL;
    uint32_t *l_152 = &p_1057->g_153;
    uint32_t **l_151 = &l_152;
    uint32_t ***l_154[2][1];
    int32_t **l_157 = &l_64;
    uint16_t *l_184 = &p_1057->g_137;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
            l_66[i][j] = (void*)0;
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_154[i][j] = (void*)0;
    }
    l_68++;
    p_1057->g_169 &= func_71(p_54, func_76((&p_54 == (void*)0), (*p_1057->g_5), l_66[0][7], p_55, p_1057), ((safe_rshift_func_uint16_t_u_u((((p_1057->g_150.y = ((VECTOR(int16_t, 8))(p_1057->g_150.yxwwyyyx)).s3) <= ((~((p_1057->g_155 = l_151) != &p_1057->g_156)) >= p_1057->g_comm_values[p_1057->tid])) == (*p_1057->g_3)), 1)) ^ 0xEF32B24B8BE36E89L), l_157, p_1057);
    p_1057->g_44.y &= (!(((safe_mul_func_uint16_t_u_u((!((*l_184) = (safe_rshift_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(((&p_1057->g_156 != (p_1057->g_155 = &p_1057->g_156)) , ((((((((*p_1057->g_5) == &p_1057->g_4) <= ((4294967295UL ^ (p_54 ^= (*p_1057->g_156))) || p_1057->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1057->tid, 5))])) || (safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s(0UL, p_54)), p_55))) , p_54) , 6UL) || p_55) ^ p_1057->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1057->tid, 5))])), p_1057->g_comm_values[p_1057->tid])), p_1057->g_41.x)), p_1057->g_2)), p_1057->g_169)))), 0x250EL)) >= p_55) < (*p_1057->g_3)));
    return &p_1057->g_3;
}


/* ------------------------------------------ */
/* 
 * reads : p_1057->g_5 p_1057->g_3 p_1057->g_4
 * writes:
 */
int32_t  func_71(int32_t  p_72, int32_t * p_73, int32_t  p_74, int32_t ** p_75, struct S0 * p_1057)
{ /* block id: 46 */
    int32_t *l_161 = (void*)0;
    int32_t l_162 = 0x16118A36L;
    int32_t *l_163 = &l_162;
    int32_t *l_164[4][7][5] = {{{&l_162,(void*)0,&p_1057->g_4,&l_162,(void*)0},{&l_162,(void*)0,&p_1057->g_4,&l_162,(void*)0},{&l_162,(void*)0,&p_1057->g_4,&l_162,(void*)0},{&l_162,(void*)0,&p_1057->g_4,&l_162,(void*)0},{&l_162,(void*)0,&p_1057->g_4,&l_162,(void*)0},{&l_162,(void*)0,&p_1057->g_4,&l_162,(void*)0},{&l_162,(void*)0,&p_1057->g_4,&l_162,(void*)0}},{{&l_162,(void*)0,&p_1057->g_4,&l_162,(void*)0},{&l_162,(void*)0,&p_1057->g_4,&l_162,(void*)0},{&l_162,(void*)0,&p_1057->g_4,&l_162,(void*)0},{&l_162,(void*)0,&p_1057->g_4,&l_162,(void*)0},{&l_162,(void*)0,&p_1057->g_4,&l_162,(void*)0},{&l_162,(void*)0,&p_1057->g_4,&l_162,(void*)0},{&l_162,(void*)0,&p_1057->g_4,&l_162,(void*)0}},{{&l_162,(void*)0,&p_1057->g_4,&l_162,(void*)0},{&l_162,(void*)0,&p_1057->g_4,&l_162,(void*)0},{&l_162,(void*)0,&p_1057->g_4,&l_162,(void*)0},{&l_162,(void*)0,&p_1057->g_4,&l_162,(void*)0},{&l_162,(void*)0,&p_1057->g_4,&l_162,(void*)0},{&l_162,(void*)0,&p_1057->g_4,&l_162,(void*)0},{&l_162,(void*)0,&p_1057->g_4,&l_162,(void*)0}},{{&l_162,(void*)0,&p_1057->g_4,&l_162,(void*)0},{&l_162,(void*)0,&p_1057->g_4,&l_162,(void*)0},{&l_162,(void*)0,&p_1057->g_4,&l_162,(void*)0},{&l_162,(void*)0,&p_1057->g_4,&l_162,(void*)0},{&l_162,(void*)0,&p_1057->g_4,&l_162,(void*)0},{&l_162,(void*)0,&p_1057->g_4,&l_162,(void*)0},{&l_162,(void*)0,&p_1057->g_4,&l_162,(void*)0}}};
    int64_t l_165[2][4];
    uint32_t l_166[6];
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
            l_165[i][j] = 1L;
    }
    for (i = 0; i < 6; i++)
        l_166[i] = 0UL;
    if ((atomic_inc(&p_1057->l_atomic_input[33]) == 4))
    { /* block id: 48 */
        int32_t l_159 = 0x19E2E318L;
        int32_t *l_158 = &l_159;
        int32_t *l_160 = &l_159;
        l_160 = l_158;
        unsigned int result = 0;
        result += l_159;
        atomic_add(&p_1057->l_special_values[33], result);
    }
    else
    { /* block id: 50 */
        (1 + 1);
    }
    l_166[3]++;
    return (**p_1057->g_5);
}


/* ------------------------------------------ */
/* 
 * reads : p_1057->g_44 p_1057->g_comm_values p_1057->g_36 p_1057->g_137 p_1057->g_57 p_1057->g_46 p_1057->g_119 p_1057->g_41 p_1057->g_48 p_1057->g_5 p_1057->g_3
 * writes: p_1057->g_116 p_1057->g_119 p_1057->g_137 p_1057->g_57 p_1057->g_145 p_1057->g_147 p_1057->g_44
 */
int32_t * func_76(int32_t  p_77, int32_t * p_78, int32_t * p_79, uint16_t  p_80, struct S0 * p_1057)
{ /* block id: 16 */
    int32_t *l_109 = (void*)0;
    int32_t l_110[9][8] = {{0x272AD4A8L,0x2CD2BE79L,0x2CD2BE79L,0x272AD4A8L,0x272AD4A8L,0x2CD2BE79L,0x2CD2BE79L,0x272AD4A8L},{0x272AD4A8L,0x2CD2BE79L,0x2CD2BE79L,0x272AD4A8L,0x272AD4A8L,0x2CD2BE79L,0x2CD2BE79L,0x272AD4A8L},{0x272AD4A8L,0x2CD2BE79L,0x2CD2BE79L,0x272AD4A8L,0x272AD4A8L,0x2CD2BE79L,0x2CD2BE79L,0x272AD4A8L},{0x272AD4A8L,0x2CD2BE79L,0x2CD2BE79L,0x272AD4A8L,0x272AD4A8L,0x2CD2BE79L,0x2CD2BE79L,0x272AD4A8L},{0x272AD4A8L,0x2CD2BE79L,0x2CD2BE79L,0x272AD4A8L,0x272AD4A8L,0x2CD2BE79L,0x2CD2BE79L,0x272AD4A8L},{0x272AD4A8L,0x2CD2BE79L,0x2CD2BE79L,0x272AD4A8L,0x272AD4A8L,0x2CD2BE79L,0x2CD2BE79L,0x272AD4A8L},{0x272AD4A8L,0x2CD2BE79L,0x2CD2BE79L,0x272AD4A8L,0x272AD4A8L,0x2CD2BE79L,0x2CD2BE79L,0x272AD4A8L},{0x272AD4A8L,0x2CD2BE79L,0x2CD2BE79L,0x272AD4A8L,0x272AD4A8L,0x2CD2BE79L,0x2CD2BE79L,0x272AD4A8L},{0x272AD4A8L,0x2CD2BE79L,0x2CD2BE79L,0x272AD4A8L,0x272AD4A8L,0x2CD2BE79L,0x2CD2BE79L,0x272AD4A8L}};
    uint64_t *l_115 = &p_1057->g_116;
    uint64_t *l_117 = (void*)0;
    uint64_t *l_118 = &p_1057->g_119;
    VECTOR(uint64_t, 16) l_120 = (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint64_t, 2))(1UL, 0UL), (VECTOR(uint64_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL);
    int32_t *l_121[10] = {&l_110[0][4],&l_110[0][4],&l_110[0][4],&l_110[0][4],&l_110[0][4],&l_110[0][4],&l_110[0][4],&l_110[0][4],&l_110[0][4],&l_110[0][4]};
    VECTOR(uint32_t, 16) l_135 = (VECTOR(uint32_t, 16))(2UL, (VECTOR(uint32_t, 4))(2UL, (VECTOR(uint32_t, 2))(2UL, 0UL), 0UL), 0UL, 2UL, 0UL, (VECTOR(uint32_t, 2))(2UL, 0UL), (VECTOR(uint32_t, 2))(2UL, 0UL), 2UL, 0UL, 2UL, 0UL);
    uint16_t *l_136 = &p_1057->g_137;
    uint32_t *l_138 = (void*)0;
    uint32_t **l_139 = &l_138;
    uint32_t *l_140 = (void*)0;
    uint32_t *l_141[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint64_t l_142 = 4UL;
    int16_t *l_143 = (void*)0;
    int16_t *l_144[1];
    int64_t *l_146 = &p_1057->g_147;
    int i, j;
    for (i = 0; i < 1; i++)
        l_144[i] = (void*)0;
    if ((atomic_inc(&p_1057->g_atomic_input[37 * get_linear_group_id() + 32]) == 8))
    { /* block id: 18 */
        int32_t l_81 = 1L;
        for (l_81 = (-10); (l_81 >= (-11)); l_81--)
        { /* block id: 21 */
            uint32_t l_84 = 1UL;
            int16_t l_85 = 1L;
            VECTOR(int32_t, 16) l_86 = (VECTOR(int32_t, 16))(0x21F576C3L, (VECTOR(int32_t, 4))(0x21F576C3L, (VECTOR(int32_t, 2))(0x21F576C3L, (-1L)), (-1L)), (-1L), 0x21F576C3L, (-1L), (VECTOR(int32_t, 2))(0x21F576C3L, (-1L)), (VECTOR(int32_t, 2))(0x21F576C3L, (-1L)), 0x21F576C3L, (-1L), 0x21F576C3L, (-1L));
            uint32_t l_87[9][3] = {{1UL,0xA04750EEL,1UL},{1UL,0xA04750EEL,1UL},{1UL,0xA04750EEL,1UL},{1UL,0xA04750EEL,1UL},{1UL,0xA04750EEL,1UL},{1UL,0xA04750EEL,1UL},{1UL,0xA04750EEL,1UL},{1UL,0xA04750EEL,1UL},{1UL,0xA04750EEL,1UL}};
            VECTOR(int32_t, 2) l_88 = (VECTOR(int32_t, 2))((-4L), 0x46155EFBL);
            VECTOR(int32_t, 8) l_89 = (VECTOR(int32_t, 8))(0x32D28ECCL, (VECTOR(int32_t, 4))(0x32D28ECCL, (VECTOR(int32_t, 2))(0x32D28ECCL, 0L), 0L), 0L, 0x32D28ECCL, 0L);
            int32_t l_90 = (-1L);
            uint32_t l_91 = 0x7533B9DBL;
            VECTOR(int8_t, 4) l_92 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-1L)), (-1L));
            uint16_t l_93[3];
            int16_t l_94 = (-8L);
            int32_t l_95 = 1L;
            uint32_t l_96 = 0x1C0895ADL;
            VECTOR(int8_t, 4) l_97 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x46L), 0x46L);
            VECTOR(int8_t, 2) l_98 = (VECTOR(int8_t, 2))((-1L), 0x4BL);
            VECTOR(uint8_t, 4) l_99 = (VECTOR(uint8_t, 4))(247UL, (VECTOR(uint8_t, 2))(247UL, 0x71L), 0x71L);
            int16_t l_100 = 0L;
            VECTOR(int16_t, 2) l_101 = (VECTOR(int16_t, 2))(1L, 0x7D21L);
            VECTOR(int16_t, 4) l_102 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x341DL), 0x341DL);
            VECTOR(int16_t, 8) l_103 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-3L)), (-3L)), (-3L), (-1L), (-3L));
            uint32_t l_104 = 1UL;
            uint64_t l_105 = 0xDA51A47E80D5247FL;
            uint32_t l_106 = 0xA325B7F8L;
            int32_t l_107 = 0L;
            int32_t l_108 = 1L;
            int i, j;
            for (i = 0; i < 3; i++)
                l_93[i] = 65535UL;
            l_85 ^= (l_84 , 0x63BFD9FCL);
            l_105 &= (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(l_86.s416096333bd90028)).s6e, ((VECTOR(int32_t, 2))(0L, 0x1AD9D65DL))))), ((VECTOR(int32_t, 2))(0x642384D7L, 0x7509ED19L)), l_87[2][1], ((VECTOR(int32_t, 2))(l_88.xy)), 0x7706B8BAL, ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(l_89.s67)).xyxxxyxx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 16))(((l_90 = l_90) , l_91), 0x3F6EL, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 16))(l_92.xxwyzyyxyzxyxyyx)).s10, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_93[2], 0x14L, 0L, ((l_94 , l_95) , l_96), ((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 2))(l_97.zx)).yyyx, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_98.xyxxyyyyxyxyxxxy)).lo)).hi))))).even)).lo))), ((VECTOR(uint8_t, 2))(l_99.ww))))).yxxx)), 0L, l_100, ((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 16))(l_101.yyxxxyyyyxxyyxxy)).s6039, ((VECTOR(int16_t, 16))(l_102.ywwwwzzzwxxwyxzw)).s2091))).xxzxwyxxxwwwwxyz)).scc5e)), ((VECTOR(int16_t, 8))(l_103.s23124035)).hi))), 0L, 0x0BEDL, (-1L), 0x65D7L, 0x0258L, (-2L))).s936b)), ((VECTOR(int16_t, 8))(0x4288L)), 0L, 1L)).s5947, ((VECTOR(uint16_t, 4))(4UL))))), ((VECTOR(int32_t, 4))((-1L))))), ((VECTOR(int32_t, 8))(1L))))))).s4 , l_104);
            l_106 ^= 0x795E0524L;
            l_108 ^= l_107;
        }
        unsigned int result = 0;
        result += l_81;
        atomic_add(&p_1057->g_special_values[37 * get_linear_group_id() + 32], result);
    }
    else
    { /* block id: 28 */
        (1 + 1);
    }
    l_110[0][4] = 0x34AC7E99L;
    p_77 = (p_79 == ((safe_rshift_func_int16_t_s_s(((((void*)0 != &p_78) | (safe_mod_func_uint8_t_u_u(((p_80 != ((*l_118) = ((*l_115) = 0x83895B9E805CA6D5L))) , (((VECTOR(uint64_t, 8))(((*l_118) = 0x2A8B54CC1A9858F3L), 0x98EEF55B7FEDFDEEL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(0xE894D0847C51F5B0L, ((VECTOR(uint64_t, 2))(l_120.sb6)), 18446744073709551615UL, 0x05A33BAAAF899989L, 0x28F7EEF6B1D4C4AEL, 0UL, 0UL)).s1117436756717537)).sfd62)), 0x6AD9819071DA066FL, 0x70BD27AD0C03D5BDL)).s3 > (p_1057->g_44.y , ((((&l_110[1][1] == l_121[7]) , 0xC9L) | p_1057->g_comm_values[p_1057->tid]) >= p_1057->g_36.s4)))), p_80))) & p_77), 6)) , p_78));
    p_1057->g_44.x &= (safe_div_func_uint64_t_u_u((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),int64_t,((VECTOR(int64_t, 4))(0x353253064252A57BL, p_80, 0x5B5BA2BE6E4037C9L, 0x7C62FE86CE72152DL)).even, (int64_t)((*l_146) = ((((*l_115) = ((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(GROUP_DIVERGE(0, 1), (p_1057->g_145 = (safe_sub_func_uint16_t_u_u(((((safe_unary_minus_func_uint8_t_u((p_80 | (((p_1057->g_57.s0 &= ((safe_mul_func_int8_t_s_s(8L, (((((*l_136) |= ((-6L) ^ (+((VECTOR(uint32_t, 16))(l_135.s5274b8b9b3cd100a)).sb))) != (+((void*)0 != &p_79))) | (((((*l_139) = l_138) == p_79) , ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(p_80, 6UL, 1UL, 255UL)).odd)).hi) <= 0x5AL)) <= p_80))) , 4294967295UL)) ^ p_77) ^ (-1L))))) , l_117) == l_115) , FAKE_DIVERGE(p_1057->global_1_offset, get_global_id(1), 10)), l_142))))) <= p_1057->g_46.s2), 5)), p_1057->g_119)) & p_1057->g_41.y)) != p_80) , p_77)), (int64_t)p_1057->g_48.s5))).yxyxxxyyyxxxxxxy, ((VECTOR(int64_t, 16))(0x3159176513EDB850L))))).hi)).s45)).hi > 0x6CB451D1813B9690L), 0x63D153429015B96BL));
    return (*p_1057->g_5);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[37];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 37; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[37];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 37; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[5];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 5; i++)
            l_comm_values[i] = 1;
    struct S0 c_1058;
    struct S0* p_1057 = &c_1058;
    struct S0 c_1059 = {
        0x8AL, // p_1057->g_2
        0x4C25FA5FL, // p_1057->g_4
        &p_1057->g_4, // p_1057->g_3
        &p_1057->g_3, // p_1057->g_5
        (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x48L), 0x48L), 0x48L, 0UL, 0x48L, (VECTOR(uint8_t, 2))(0UL, 0x48L), (VECTOR(uint8_t, 2))(0UL, 0x48L), 0UL, 0x48L, 0UL, 0x48L), // p_1057->g_18
        (VECTOR(int32_t, 16))(0x22E7C650L, (VECTOR(int32_t, 4))(0x22E7C650L, (VECTOR(int32_t, 2))(0x22E7C650L, 0L), 0L), 0L, 0x22E7C650L, 0L, (VECTOR(int32_t, 2))(0x22E7C650L, 0L), (VECTOR(int32_t, 2))(0x22E7C650L, 0L), 0x22E7C650L, 0L, 0x22E7C650L, 0L), // p_1057->g_36
        (VECTOR(int32_t, 2))((-2L), 0x6F321248L), // p_1057->g_41
        (VECTOR(int32_t, 2))(0x5225D8BAL, (-5L)), // p_1057->g_44
        (VECTOR(int32_t, 8))(0x77424270L, (VECTOR(int32_t, 4))(0x77424270L, (VECTOR(int32_t, 2))(0x77424270L, 0x7789B64DL), 0x7789B64DL), 0x7789B64DL, 0x77424270L, 0x7789B64DL), // p_1057->g_46
        (VECTOR(int32_t, 8))(0x273003F8L, (VECTOR(int32_t, 4))(0x273003F8L, (VECTOR(int32_t, 2))(0x273003F8L, 0x2730C409L), 0x2730C409L), 0x2730C409L, 0x273003F8L, 0x2730C409L), // p_1057->g_48
        (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x592ED994L), 0x592ED994L), 0x592ED994L, 0UL, 0x592ED994L), // p_1057->g_57
        0x025BF7B98E7B1A39L, // p_1057->g_116
        0xDD48D0EE85EEBD79L, // p_1057->g_119
        0x2723L, // p_1057->g_137
        0x4CDA1560L, // p_1057->g_145
        0x44B73ACF91862B91L, // p_1057->g_147
        (VECTOR(int16_t, 4))(0x3D89L, (VECTOR(int16_t, 2))(0x3D89L, (-1L)), (-1L)), // p_1057->g_150
        0xEB71334DL, // p_1057->g_153
        &p_1057->g_153, // p_1057->g_156
        &p_1057->g_156, // p_1057->g_155
        0x81BFA71FL, // p_1057->g_169
        65528UL, // p_1057->g_220
        {{{0x53L,(-1L),0x53L,0x53L}},{{0x53L,(-1L),0x53L,0x53L}},{{0x53L,(-1L),0x53L,0x53L}},{{0x53L,(-1L),0x53L,0x53L}},{{0x53L,(-1L),0x53L,0x53L}},{{0x53L,(-1L),0x53L,0x53L}}}, // p_1057->g_224
        (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x89L), 0x89L), 0x89L, 1UL, 0x89L), // p_1057->g_250
        (VECTOR(int16_t, 2))(0x2969L, 0x7AFCL), // p_1057->g_257
        0xF8EBD859L, // p_1057->g_261
        0xD5L, // p_1057->g_288
        (VECTOR(int8_t, 2))(0x4FL, 0L), // p_1057->g_297
        &p_1057->g_3, // p_1057->g_301
        (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x15A1L), 0x15A1L), 0x15A1L, 1L, 0x15A1L, (VECTOR(int16_t, 2))(1L, 0x15A1L), (VECTOR(int16_t, 2))(1L, 0x15A1L), 1L, 0x15A1L, 1L, 0x15A1L), // p_1057->g_400
        (VECTOR(uint8_t, 8))(0x37L, (VECTOR(uint8_t, 4))(0x37L, (VECTOR(uint8_t, 2))(0x37L, 252UL), 252UL), 252UL, 0x37L, 252UL), // p_1057->g_403
        (-1L), // p_1057->g_416
        (VECTOR(uint64_t, 8))(18446744073709551610UL, (VECTOR(uint64_t, 4))(18446744073709551610UL, (VECTOR(uint64_t, 2))(18446744073709551610UL, 0xC82D94FBDFC1BC2CL), 0xC82D94FBDFC1BC2CL), 0xC82D94FBDFC1BC2CL, 18446744073709551610UL, 0xC82D94FBDFC1BC2CL), // p_1057->g_465
        (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, (-2L)), (-2L)), // p_1057->g_485
        0x48L, // p_1057->g_495
        0L, // p_1057->g_497
        0x76125F37B24F71A7L, // p_1057->g_525
        (void*)0, // p_1057->g_533
        (void*)0, // p_1057->g_534
        (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 0xFA498D61L), 0xFA498D61L), // p_1057->g_610
        (void*)0, // p_1057->g_616
        (VECTOR(int64_t, 4))((-4L), (VECTOR(int64_t, 2))((-4L), 0x2B0380C2F086B4F6L), 0x2B0380C2F086B4F6L), // p_1057->g_624
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1057->g_637
        {(void*)0,(void*)0}, // p_1057->g_646
        {{{&p_1057->g_646[0],(void*)0,&p_1057->g_646[0],(void*)0},{&p_1057->g_646[0],(void*)0,&p_1057->g_646[0],(void*)0},{&p_1057->g_646[0],(void*)0,&p_1057->g_646[0],(void*)0},{&p_1057->g_646[0],(void*)0,&p_1057->g_646[0],(void*)0},{&p_1057->g_646[0],(void*)0,&p_1057->g_646[0],(void*)0}},{{&p_1057->g_646[0],(void*)0,&p_1057->g_646[0],(void*)0},{&p_1057->g_646[0],(void*)0,&p_1057->g_646[0],(void*)0},{&p_1057->g_646[0],(void*)0,&p_1057->g_646[0],(void*)0},{&p_1057->g_646[0],(void*)0,&p_1057->g_646[0],(void*)0},{&p_1057->g_646[0],(void*)0,&p_1057->g_646[0],(void*)0}},{{&p_1057->g_646[0],(void*)0,&p_1057->g_646[0],(void*)0},{&p_1057->g_646[0],(void*)0,&p_1057->g_646[0],(void*)0},{&p_1057->g_646[0],(void*)0,&p_1057->g_646[0],(void*)0},{&p_1057->g_646[0],(void*)0,&p_1057->g_646[0],(void*)0},{&p_1057->g_646[0],(void*)0,&p_1057->g_646[0],(void*)0}},{{&p_1057->g_646[0],(void*)0,&p_1057->g_646[0],(void*)0},{&p_1057->g_646[0],(void*)0,&p_1057->g_646[0],(void*)0},{&p_1057->g_646[0],(void*)0,&p_1057->g_646[0],(void*)0},{&p_1057->g_646[0],(void*)0,&p_1057->g_646[0],(void*)0},{&p_1057->g_646[0],(void*)0,&p_1057->g_646[0],(void*)0}},{{&p_1057->g_646[0],(void*)0,&p_1057->g_646[0],(void*)0},{&p_1057->g_646[0],(void*)0,&p_1057->g_646[0],(void*)0},{&p_1057->g_646[0],(void*)0,&p_1057->g_646[0],(void*)0},{&p_1057->g_646[0],(void*)0,&p_1057->g_646[0],(void*)0},{&p_1057->g_646[0],(void*)0,&p_1057->g_646[0],(void*)0}},{{&p_1057->g_646[0],(void*)0,&p_1057->g_646[0],(void*)0},{&p_1057->g_646[0],(void*)0,&p_1057->g_646[0],(void*)0},{&p_1057->g_646[0],(void*)0,&p_1057->g_646[0],(void*)0},{&p_1057->g_646[0],(void*)0,&p_1057->g_646[0],(void*)0},{&p_1057->g_646[0],(void*)0,&p_1057->g_646[0],(void*)0}},{{&p_1057->g_646[0],(void*)0,&p_1057->g_646[0],(void*)0},{&p_1057->g_646[0],(void*)0,&p_1057->g_646[0],(void*)0},{&p_1057->g_646[0],(void*)0,&p_1057->g_646[0],(void*)0},{&p_1057->g_646[0],(void*)0,&p_1057->g_646[0],(void*)0},{&p_1057->g_646[0],(void*)0,&p_1057->g_646[0],(void*)0}}}, // p_1057->g_645
        {&p_1057->g_645[5][2][2],&p_1057->g_645[5][2][2],&p_1057->g_645[5][2][2],&p_1057->g_645[5][2][2],&p_1057->g_645[5][2][2],&p_1057->g_645[5][2][2],&p_1057->g_645[5][2][2],&p_1057->g_645[5][2][2],&p_1057->g_645[5][2][2],&p_1057->g_645[5][2][2]}, // p_1057->g_644
        &p_1057->g_644[9], // p_1057->g_643
        0x1137D6E639F20A36L, // p_1057->g_648
        (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-6L)), (-6L)), (-6L), 0L, (-6L), (VECTOR(int8_t, 2))(0L, (-6L)), (VECTOR(int8_t, 2))(0L, (-6L)), 0L, (-6L), 0L, (-6L)), // p_1057->g_686
        (VECTOR(int64_t, 16))(4L, (VECTOR(int64_t, 4))(4L, (VECTOR(int64_t, 2))(4L, 0x79992EF294649234L), 0x79992EF294649234L), 0x79992EF294649234L, 4L, 0x79992EF294649234L, (VECTOR(int64_t, 2))(4L, 0x79992EF294649234L), (VECTOR(int64_t, 2))(4L, 0x79992EF294649234L), 4L, 0x79992EF294649234L, 4L, 0x79992EF294649234L), // p_1057->g_693
        (VECTOR(uint16_t, 16))(0x07B7L, (VECTOR(uint16_t, 4))(0x07B7L, (VECTOR(uint16_t, 2))(0x07B7L, 65535UL), 65535UL), 65535UL, 0x07B7L, 65535UL, (VECTOR(uint16_t, 2))(0x07B7L, 65535UL), (VECTOR(uint16_t, 2))(0x07B7L, 65535UL), 0x07B7L, 65535UL, 0x07B7L, 65535UL), // p_1057->g_696
        (VECTOR(int16_t, 2))(0x7BEDL, (-1L)), // p_1057->g_697
        (VECTOR(int64_t, 2))(0x1A80C93C771B0AB1L, 1L), // p_1057->g_698
        (VECTOR(int32_t, 4))(0x7339CD73L, (VECTOR(int32_t, 2))(0x7339CD73L, (-2L)), (-2L)), // p_1057->g_776
        {&p_1057->g_4,&p_1057->g_4,&p_1057->g_4}, // p_1057->g_798
        &p_1057->g_798[2], // p_1057->g_797
        (VECTOR(uint32_t, 16))(0x457A48FAL, (VECTOR(uint32_t, 4))(0x457A48FAL, (VECTOR(uint32_t, 2))(0x457A48FAL, 4294967295UL), 4294967295UL), 4294967295UL, 0x457A48FAL, 4294967295UL, (VECTOR(uint32_t, 2))(0x457A48FAL, 4294967295UL), (VECTOR(uint32_t, 2))(0x457A48FAL, 4294967295UL), 0x457A48FAL, 4294967295UL, 0x457A48FAL, 4294967295UL), // p_1057->g_869
        255UL, // p_1057->g_878
        (VECTOR(uint8_t, 8))(0xD1L, (VECTOR(uint8_t, 4))(0xD1L, (VECTOR(uint8_t, 2))(0xD1L, 255UL), 255UL), 255UL, 0xD1L, 255UL), // p_1057->g_908
        &p_1057->g_797, // p_1057->g_915
        {{&p_1057->g_915,&p_1057->g_915,&p_1057->g_915},{&p_1057->g_915,&p_1057->g_915,&p_1057->g_915},{&p_1057->g_915,&p_1057->g_915,&p_1057->g_915},{&p_1057->g_915,&p_1057->g_915,&p_1057->g_915},{&p_1057->g_915,&p_1057->g_915,&p_1057->g_915},{&p_1057->g_915,&p_1057->g_915,&p_1057->g_915},{&p_1057->g_915,&p_1057->g_915,&p_1057->g_915},{&p_1057->g_915,&p_1057->g_915,&p_1057->g_915}}, // p_1057->g_914
        &p_1057->g_224[3][0][0], // p_1057->g_957
        &p_1057->g_957, // p_1057->g_956
        (VECTOR(int16_t, 2))(0x0B39L, 1L), // p_1057->g_966
        (VECTOR(uint64_t, 8))(0x358D7E5A985E08FAL, (VECTOR(uint64_t, 4))(0x358D7E5A985E08FAL, (VECTOR(uint64_t, 2))(0x358D7E5A985E08FAL, 0x7F239E3FFBA63D10L), 0x7F239E3FFBA63D10L), 0x7F239E3FFBA63D10L, 0x358D7E5A985E08FAL, 0x7F239E3FFBA63D10L), // p_1057->g_969
        (void*)0, // p_1057->g_1053
        (void*)0, // p_1057->g_1054
        0, // p_1057->v_collective
        sequence_input[get_global_id(0)], // p_1057->global_0_offset
        sequence_input[get_global_id(1)], // p_1057->global_1_offset
        sequence_input[get_global_id(2)], // p_1057->global_2_offset
        sequence_input[get_local_id(0)], // p_1057->local_0_offset
        sequence_input[get_local_id(1)], // p_1057->local_1_offset
        sequence_input[get_local_id(2)], // p_1057->local_2_offset
        sequence_input[get_group_id(0)], // p_1057->group_0_offset
        sequence_input[get_group_id(1)], // p_1057->group_1_offset
        sequence_input[get_group_id(2)], // p_1057->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 5)), permutations[0][get_linear_local_id()])), // p_1057->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1058 = c_1059;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1057);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1057->g_2, "p_1057->g_2", print_hash_value);
    transparent_crc(p_1057->g_4, "p_1057->g_4", print_hash_value);
    transparent_crc(p_1057->g_18.s0, "p_1057->g_18.s0", print_hash_value);
    transparent_crc(p_1057->g_18.s1, "p_1057->g_18.s1", print_hash_value);
    transparent_crc(p_1057->g_18.s2, "p_1057->g_18.s2", print_hash_value);
    transparent_crc(p_1057->g_18.s3, "p_1057->g_18.s3", print_hash_value);
    transparent_crc(p_1057->g_18.s4, "p_1057->g_18.s4", print_hash_value);
    transparent_crc(p_1057->g_18.s5, "p_1057->g_18.s5", print_hash_value);
    transparent_crc(p_1057->g_18.s6, "p_1057->g_18.s6", print_hash_value);
    transparent_crc(p_1057->g_18.s7, "p_1057->g_18.s7", print_hash_value);
    transparent_crc(p_1057->g_18.s8, "p_1057->g_18.s8", print_hash_value);
    transparent_crc(p_1057->g_18.s9, "p_1057->g_18.s9", print_hash_value);
    transparent_crc(p_1057->g_18.sa, "p_1057->g_18.sa", print_hash_value);
    transparent_crc(p_1057->g_18.sb, "p_1057->g_18.sb", print_hash_value);
    transparent_crc(p_1057->g_18.sc, "p_1057->g_18.sc", print_hash_value);
    transparent_crc(p_1057->g_18.sd, "p_1057->g_18.sd", print_hash_value);
    transparent_crc(p_1057->g_18.se, "p_1057->g_18.se", print_hash_value);
    transparent_crc(p_1057->g_18.sf, "p_1057->g_18.sf", print_hash_value);
    transparent_crc(p_1057->g_36.s0, "p_1057->g_36.s0", print_hash_value);
    transparent_crc(p_1057->g_36.s1, "p_1057->g_36.s1", print_hash_value);
    transparent_crc(p_1057->g_36.s2, "p_1057->g_36.s2", print_hash_value);
    transparent_crc(p_1057->g_36.s3, "p_1057->g_36.s3", print_hash_value);
    transparent_crc(p_1057->g_36.s4, "p_1057->g_36.s4", print_hash_value);
    transparent_crc(p_1057->g_36.s5, "p_1057->g_36.s5", print_hash_value);
    transparent_crc(p_1057->g_36.s6, "p_1057->g_36.s6", print_hash_value);
    transparent_crc(p_1057->g_36.s7, "p_1057->g_36.s7", print_hash_value);
    transparent_crc(p_1057->g_36.s8, "p_1057->g_36.s8", print_hash_value);
    transparent_crc(p_1057->g_36.s9, "p_1057->g_36.s9", print_hash_value);
    transparent_crc(p_1057->g_36.sa, "p_1057->g_36.sa", print_hash_value);
    transparent_crc(p_1057->g_36.sb, "p_1057->g_36.sb", print_hash_value);
    transparent_crc(p_1057->g_36.sc, "p_1057->g_36.sc", print_hash_value);
    transparent_crc(p_1057->g_36.sd, "p_1057->g_36.sd", print_hash_value);
    transparent_crc(p_1057->g_36.se, "p_1057->g_36.se", print_hash_value);
    transparent_crc(p_1057->g_36.sf, "p_1057->g_36.sf", print_hash_value);
    transparent_crc(p_1057->g_41.x, "p_1057->g_41.x", print_hash_value);
    transparent_crc(p_1057->g_41.y, "p_1057->g_41.y", print_hash_value);
    transparent_crc(p_1057->g_44.x, "p_1057->g_44.x", print_hash_value);
    transparent_crc(p_1057->g_44.y, "p_1057->g_44.y", print_hash_value);
    transparent_crc(p_1057->g_46.s0, "p_1057->g_46.s0", print_hash_value);
    transparent_crc(p_1057->g_46.s1, "p_1057->g_46.s1", print_hash_value);
    transparent_crc(p_1057->g_46.s2, "p_1057->g_46.s2", print_hash_value);
    transparent_crc(p_1057->g_46.s3, "p_1057->g_46.s3", print_hash_value);
    transparent_crc(p_1057->g_46.s4, "p_1057->g_46.s4", print_hash_value);
    transparent_crc(p_1057->g_46.s5, "p_1057->g_46.s5", print_hash_value);
    transparent_crc(p_1057->g_46.s6, "p_1057->g_46.s6", print_hash_value);
    transparent_crc(p_1057->g_46.s7, "p_1057->g_46.s7", print_hash_value);
    transparent_crc(p_1057->g_48.s0, "p_1057->g_48.s0", print_hash_value);
    transparent_crc(p_1057->g_48.s1, "p_1057->g_48.s1", print_hash_value);
    transparent_crc(p_1057->g_48.s2, "p_1057->g_48.s2", print_hash_value);
    transparent_crc(p_1057->g_48.s3, "p_1057->g_48.s3", print_hash_value);
    transparent_crc(p_1057->g_48.s4, "p_1057->g_48.s4", print_hash_value);
    transparent_crc(p_1057->g_48.s5, "p_1057->g_48.s5", print_hash_value);
    transparent_crc(p_1057->g_48.s6, "p_1057->g_48.s6", print_hash_value);
    transparent_crc(p_1057->g_48.s7, "p_1057->g_48.s7", print_hash_value);
    transparent_crc(p_1057->g_57.s0, "p_1057->g_57.s0", print_hash_value);
    transparent_crc(p_1057->g_57.s1, "p_1057->g_57.s1", print_hash_value);
    transparent_crc(p_1057->g_57.s2, "p_1057->g_57.s2", print_hash_value);
    transparent_crc(p_1057->g_57.s3, "p_1057->g_57.s3", print_hash_value);
    transparent_crc(p_1057->g_57.s4, "p_1057->g_57.s4", print_hash_value);
    transparent_crc(p_1057->g_57.s5, "p_1057->g_57.s5", print_hash_value);
    transparent_crc(p_1057->g_57.s6, "p_1057->g_57.s6", print_hash_value);
    transparent_crc(p_1057->g_57.s7, "p_1057->g_57.s7", print_hash_value);
    transparent_crc(p_1057->g_116, "p_1057->g_116", print_hash_value);
    transparent_crc(p_1057->g_119, "p_1057->g_119", print_hash_value);
    transparent_crc(p_1057->g_137, "p_1057->g_137", print_hash_value);
    transparent_crc(p_1057->g_145, "p_1057->g_145", print_hash_value);
    transparent_crc(p_1057->g_147, "p_1057->g_147", print_hash_value);
    transparent_crc(p_1057->g_150.x, "p_1057->g_150.x", print_hash_value);
    transparent_crc(p_1057->g_150.y, "p_1057->g_150.y", print_hash_value);
    transparent_crc(p_1057->g_150.z, "p_1057->g_150.z", print_hash_value);
    transparent_crc(p_1057->g_150.w, "p_1057->g_150.w", print_hash_value);
    transparent_crc(p_1057->g_153, "p_1057->g_153", print_hash_value);
    transparent_crc(p_1057->g_169, "p_1057->g_169", print_hash_value);
    transparent_crc(p_1057->g_220, "p_1057->g_220", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1057->g_224[i][j][k], "p_1057->g_224[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1057->g_250.s0, "p_1057->g_250.s0", print_hash_value);
    transparent_crc(p_1057->g_250.s1, "p_1057->g_250.s1", print_hash_value);
    transparent_crc(p_1057->g_250.s2, "p_1057->g_250.s2", print_hash_value);
    transparent_crc(p_1057->g_250.s3, "p_1057->g_250.s3", print_hash_value);
    transparent_crc(p_1057->g_250.s4, "p_1057->g_250.s4", print_hash_value);
    transparent_crc(p_1057->g_250.s5, "p_1057->g_250.s5", print_hash_value);
    transparent_crc(p_1057->g_250.s6, "p_1057->g_250.s6", print_hash_value);
    transparent_crc(p_1057->g_250.s7, "p_1057->g_250.s7", print_hash_value);
    transparent_crc(p_1057->g_257.x, "p_1057->g_257.x", print_hash_value);
    transparent_crc(p_1057->g_257.y, "p_1057->g_257.y", print_hash_value);
    transparent_crc(p_1057->g_261, "p_1057->g_261", print_hash_value);
    transparent_crc(p_1057->g_288, "p_1057->g_288", print_hash_value);
    transparent_crc(p_1057->g_297.x, "p_1057->g_297.x", print_hash_value);
    transparent_crc(p_1057->g_297.y, "p_1057->g_297.y", print_hash_value);
    transparent_crc(p_1057->g_400.s0, "p_1057->g_400.s0", print_hash_value);
    transparent_crc(p_1057->g_400.s1, "p_1057->g_400.s1", print_hash_value);
    transparent_crc(p_1057->g_400.s2, "p_1057->g_400.s2", print_hash_value);
    transparent_crc(p_1057->g_400.s3, "p_1057->g_400.s3", print_hash_value);
    transparent_crc(p_1057->g_400.s4, "p_1057->g_400.s4", print_hash_value);
    transparent_crc(p_1057->g_400.s5, "p_1057->g_400.s5", print_hash_value);
    transparent_crc(p_1057->g_400.s6, "p_1057->g_400.s6", print_hash_value);
    transparent_crc(p_1057->g_400.s7, "p_1057->g_400.s7", print_hash_value);
    transparent_crc(p_1057->g_400.s8, "p_1057->g_400.s8", print_hash_value);
    transparent_crc(p_1057->g_400.s9, "p_1057->g_400.s9", print_hash_value);
    transparent_crc(p_1057->g_400.sa, "p_1057->g_400.sa", print_hash_value);
    transparent_crc(p_1057->g_400.sb, "p_1057->g_400.sb", print_hash_value);
    transparent_crc(p_1057->g_400.sc, "p_1057->g_400.sc", print_hash_value);
    transparent_crc(p_1057->g_400.sd, "p_1057->g_400.sd", print_hash_value);
    transparent_crc(p_1057->g_400.se, "p_1057->g_400.se", print_hash_value);
    transparent_crc(p_1057->g_400.sf, "p_1057->g_400.sf", print_hash_value);
    transparent_crc(p_1057->g_403.s0, "p_1057->g_403.s0", print_hash_value);
    transparent_crc(p_1057->g_403.s1, "p_1057->g_403.s1", print_hash_value);
    transparent_crc(p_1057->g_403.s2, "p_1057->g_403.s2", print_hash_value);
    transparent_crc(p_1057->g_403.s3, "p_1057->g_403.s3", print_hash_value);
    transparent_crc(p_1057->g_403.s4, "p_1057->g_403.s4", print_hash_value);
    transparent_crc(p_1057->g_403.s5, "p_1057->g_403.s5", print_hash_value);
    transparent_crc(p_1057->g_403.s6, "p_1057->g_403.s6", print_hash_value);
    transparent_crc(p_1057->g_403.s7, "p_1057->g_403.s7", print_hash_value);
    transparent_crc(p_1057->g_416, "p_1057->g_416", print_hash_value);
    transparent_crc(p_1057->g_465.s0, "p_1057->g_465.s0", print_hash_value);
    transparent_crc(p_1057->g_465.s1, "p_1057->g_465.s1", print_hash_value);
    transparent_crc(p_1057->g_465.s2, "p_1057->g_465.s2", print_hash_value);
    transparent_crc(p_1057->g_465.s3, "p_1057->g_465.s3", print_hash_value);
    transparent_crc(p_1057->g_465.s4, "p_1057->g_465.s4", print_hash_value);
    transparent_crc(p_1057->g_465.s5, "p_1057->g_465.s5", print_hash_value);
    transparent_crc(p_1057->g_465.s6, "p_1057->g_465.s6", print_hash_value);
    transparent_crc(p_1057->g_465.s7, "p_1057->g_465.s7", print_hash_value);
    transparent_crc(p_1057->g_485.x, "p_1057->g_485.x", print_hash_value);
    transparent_crc(p_1057->g_485.y, "p_1057->g_485.y", print_hash_value);
    transparent_crc(p_1057->g_485.z, "p_1057->g_485.z", print_hash_value);
    transparent_crc(p_1057->g_485.w, "p_1057->g_485.w", print_hash_value);
    transparent_crc(p_1057->g_495, "p_1057->g_495", print_hash_value);
    transparent_crc(p_1057->g_497, "p_1057->g_497", print_hash_value);
    transparent_crc(p_1057->g_525, "p_1057->g_525", print_hash_value);
    transparent_crc(p_1057->g_610.x, "p_1057->g_610.x", print_hash_value);
    transparent_crc(p_1057->g_610.y, "p_1057->g_610.y", print_hash_value);
    transparent_crc(p_1057->g_610.z, "p_1057->g_610.z", print_hash_value);
    transparent_crc(p_1057->g_610.w, "p_1057->g_610.w", print_hash_value);
    transparent_crc(p_1057->g_624.x, "p_1057->g_624.x", print_hash_value);
    transparent_crc(p_1057->g_624.y, "p_1057->g_624.y", print_hash_value);
    transparent_crc(p_1057->g_624.z, "p_1057->g_624.z", print_hash_value);
    transparent_crc(p_1057->g_624.w, "p_1057->g_624.w", print_hash_value);
    transparent_crc(p_1057->g_648, "p_1057->g_648", print_hash_value);
    transparent_crc(p_1057->g_686.s0, "p_1057->g_686.s0", print_hash_value);
    transparent_crc(p_1057->g_686.s1, "p_1057->g_686.s1", print_hash_value);
    transparent_crc(p_1057->g_686.s2, "p_1057->g_686.s2", print_hash_value);
    transparent_crc(p_1057->g_686.s3, "p_1057->g_686.s3", print_hash_value);
    transparent_crc(p_1057->g_686.s4, "p_1057->g_686.s4", print_hash_value);
    transparent_crc(p_1057->g_686.s5, "p_1057->g_686.s5", print_hash_value);
    transparent_crc(p_1057->g_686.s6, "p_1057->g_686.s6", print_hash_value);
    transparent_crc(p_1057->g_686.s7, "p_1057->g_686.s7", print_hash_value);
    transparent_crc(p_1057->g_686.s8, "p_1057->g_686.s8", print_hash_value);
    transparent_crc(p_1057->g_686.s9, "p_1057->g_686.s9", print_hash_value);
    transparent_crc(p_1057->g_686.sa, "p_1057->g_686.sa", print_hash_value);
    transparent_crc(p_1057->g_686.sb, "p_1057->g_686.sb", print_hash_value);
    transparent_crc(p_1057->g_686.sc, "p_1057->g_686.sc", print_hash_value);
    transparent_crc(p_1057->g_686.sd, "p_1057->g_686.sd", print_hash_value);
    transparent_crc(p_1057->g_686.se, "p_1057->g_686.se", print_hash_value);
    transparent_crc(p_1057->g_686.sf, "p_1057->g_686.sf", print_hash_value);
    transparent_crc(p_1057->g_693.s0, "p_1057->g_693.s0", print_hash_value);
    transparent_crc(p_1057->g_693.s1, "p_1057->g_693.s1", print_hash_value);
    transparent_crc(p_1057->g_693.s2, "p_1057->g_693.s2", print_hash_value);
    transparent_crc(p_1057->g_693.s3, "p_1057->g_693.s3", print_hash_value);
    transparent_crc(p_1057->g_693.s4, "p_1057->g_693.s4", print_hash_value);
    transparent_crc(p_1057->g_693.s5, "p_1057->g_693.s5", print_hash_value);
    transparent_crc(p_1057->g_693.s6, "p_1057->g_693.s6", print_hash_value);
    transparent_crc(p_1057->g_693.s7, "p_1057->g_693.s7", print_hash_value);
    transparent_crc(p_1057->g_693.s8, "p_1057->g_693.s8", print_hash_value);
    transparent_crc(p_1057->g_693.s9, "p_1057->g_693.s9", print_hash_value);
    transparent_crc(p_1057->g_693.sa, "p_1057->g_693.sa", print_hash_value);
    transparent_crc(p_1057->g_693.sb, "p_1057->g_693.sb", print_hash_value);
    transparent_crc(p_1057->g_693.sc, "p_1057->g_693.sc", print_hash_value);
    transparent_crc(p_1057->g_693.sd, "p_1057->g_693.sd", print_hash_value);
    transparent_crc(p_1057->g_693.se, "p_1057->g_693.se", print_hash_value);
    transparent_crc(p_1057->g_693.sf, "p_1057->g_693.sf", print_hash_value);
    transparent_crc(p_1057->g_696.s0, "p_1057->g_696.s0", print_hash_value);
    transparent_crc(p_1057->g_696.s1, "p_1057->g_696.s1", print_hash_value);
    transparent_crc(p_1057->g_696.s2, "p_1057->g_696.s2", print_hash_value);
    transparent_crc(p_1057->g_696.s3, "p_1057->g_696.s3", print_hash_value);
    transparent_crc(p_1057->g_696.s4, "p_1057->g_696.s4", print_hash_value);
    transparent_crc(p_1057->g_696.s5, "p_1057->g_696.s5", print_hash_value);
    transparent_crc(p_1057->g_696.s6, "p_1057->g_696.s6", print_hash_value);
    transparent_crc(p_1057->g_696.s7, "p_1057->g_696.s7", print_hash_value);
    transparent_crc(p_1057->g_696.s8, "p_1057->g_696.s8", print_hash_value);
    transparent_crc(p_1057->g_696.s9, "p_1057->g_696.s9", print_hash_value);
    transparent_crc(p_1057->g_696.sa, "p_1057->g_696.sa", print_hash_value);
    transparent_crc(p_1057->g_696.sb, "p_1057->g_696.sb", print_hash_value);
    transparent_crc(p_1057->g_696.sc, "p_1057->g_696.sc", print_hash_value);
    transparent_crc(p_1057->g_696.sd, "p_1057->g_696.sd", print_hash_value);
    transparent_crc(p_1057->g_696.se, "p_1057->g_696.se", print_hash_value);
    transparent_crc(p_1057->g_696.sf, "p_1057->g_696.sf", print_hash_value);
    transparent_crc(p_1057->g_697.x, "p_1057->g_697.x", print_hash_value);
    transparent_crc(p_1057->g_697.y, "p_1057->g_697.y", print_hash_value);
    transparent_crc(p_1057->g_698.x, "p_1057->g_698.x", print_hash_value);
    transparent_crc(p_1057->g_698.y, "p_1057->g_698.y", print_hash_value);
    transparent_crc(p_1057->g_776.x, "p_1057->g_776.x", print_hash_value);
    transparent_crc(p_1057->g_776.y, "p_1057->g_776.y", print_hash_value);
    transparent_crc(p_1057->g_776.z, "p_1057->g_776.z", print_hash_value);
    transparent_crc(p_1057->g_776.w, "p_1057->g_776.w", print_hash_value);
    transparent_crc(p_1057->g_869.s0, "p_1057->g_869.s0", print_hash_value);
    transparent_crc(p_1057->g_869.s1, "p_1057->g_869.s1", print_hash_value);
    transparent_crc(p_1057->g_869.s2, "p_1057->g_869.s2", print_hash_value);
    transparent_crc(p_1057->g_869.s3, "p_1057->g_869.s3", print_hash_value);
    transparent_crc(p_1057->g_869.s4, "p_1057->g_869.s4", print_hash_value);
    transparent_crc(p_1057->g_869.s5, "p_1057->g_869.s5", print_hash_value);
    transparent_crc(p_1057->g_869.s6, "p_1057->g_869.s6", print_hash_value);
    transparent_crc(p_1057->g_869.s7, "p_1057->g_869.s7", print_hash_value);
    transparent_crc(p_1057->g_869.s8, "p_1057->g_869.s8", print_hash_value);
    transparent_crc(p_1057->g_869.s9, "p_1057->g_869.s9", print_hash_value);
    transparent_crc(p_1057->g_869.sa, "p_1057->g_869.sa", print_hash_value);
    transparent_crc(p_1057->g_869.sb, "p_1057->g_869.sb", print_hash_value);
    transparent_crc(p_1057->g_869.sc, "p_1057->g_869.sc", print_hash_value);
    transparent_crc(p_1057->g_869.sd, "p_1057->g_869.sd", print_hash_value);
    transparent_crc(p_1057->g_869.se, "p_1057->g_869.se", print_hash_value);
    transparent_crc(p_1057->g_869.sf, "p_1057->g_869.sf", print_hash_value);
    transparent_crc(p_1057->g_878, "p_1057->g_878", print_hash_value);
    transparent_crc(p_1057->g_908.s0, "p_1057->g_908.s0", print_hash_value);
    transparent_crc(p_1057->g_908.s1, "p_1057->g_908.s1", print_hash_value);
    transparent_crc(p_1057->g_908.s2, "p_1057->g_908.s2", print_hash_value);
    transparent_crc(p_1057->g_908.s3, "p_1057->g_908.s3", print_hash_value);
    transparent_crc(p_1057->g_908.s4, "p_1057->g_908.s4", print_hash_value);
    transparent_crc(p_1057->g_908.s5, "p_1057->g_908.s5", print_hash_value);
    transparent_crc(p_1057->g_908.s6, "p_1057->g_908.s6", print_hash_value);
    transparent_crc(p_1057->g_908.s7, "p_1057->g_908.s7", print_hash_value);
    transparent_crc(p_1057->g_966.x, "p_1057->g_966.x", print_hash_value);
    transparent_crc(p_1057->g_966.y, "p_1057->g_966.y", print_hash_value);
    transparent_crc(p_1057->g_969.s0, "p_1057->g_969.s0", print_hash_value);
    transparent_crc(p_1057->g_969.s1, "p_1057->g_969.s1", print_hash_value);
    transparent_crc(p_1057->g_969.s2, "p_1057->g_969.s2", print_hash_value);
    transparent_crc(p_1057->g_969.s3, "p_1057->g_969.s3", print_hash_value);
    transparent_crc(p_1057->g_969.s4, "p_1057->g_969.s4", print_hash_value);
    transparent_crc(p_1057->g_969.s5, "p_1057->g_969.s5", print_hash_value);
    transparent_crc(p_1057->g_969.s6, "p_1057->g_969.s6", print_hash_value);
    transparent_crc(p_1057->g_969.s7, "p_1057->g_969.s7", print_hash_value);
    transparent_crc(p_1057->v_collective, "p_1057->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 37; i++)
            transparent_crc(p_1057->g_special_values[i + 37 * get_linear_group_id()], "p_1057->g_special_values[i + 37 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 37; i++)
            transparent_crc(p_1057->l_special_values[i], "p_1057->l_special_values[i]", print_hash_value);
    transparent_crc(p_1057->l_comm_values[get_linear_local_id()], "p_1057->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1057->g_comm_values[get_linear_group_id() * 5 + get_linear_local_id()], "p_1057->g_comm_values[get_linear_group_id() * 5 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
