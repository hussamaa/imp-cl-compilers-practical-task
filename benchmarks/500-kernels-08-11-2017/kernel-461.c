// --atomics 21 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 48,25,1 -l 6,5,1
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

__constant uint32_t permutations[10][30] = {
{26,29,11,1,10,15,20,19,4,25,14,18,7,21,2,0,6,23,13,3,17,24,8,22,5,12,9,27,28,16}, // permutation 0
{6,8,3,11,7,16,17,12,20,10,22,9,28,24,27,1,5,2,25,4,29,18,14,26,21,15,23,13,19,0}, // permutation 1
{4,16,8,9,7,20,19,10,17,28,1,22,3,21,2,15,0,27,13,24,5,18,25,29,11,23,26,14,12,6}, // permutation 2
{5,14,19,12,27,28,20,22,11,18,10,23,4,21,0,15,24,9,1,13,8,25,2,16,3,7,26,29,17,6}, // permutation 3
{2,10,6,14,23,21,28,4,3,20,16,17,8,18,19,25,24,12,26,29,27,1,9,13,0,7,5,22,11,15}, // permutation 4
{15,23,5,0,17,21,8,18,4,22,29,11,3,10,26,28,12,7,14,16,19,13,1,25,2,27,24,6,9,20}, // permutation 5
{12,18,27,3,13,25,2,10,14,24,29,26,22,16,0,4,9,17,11,15,28,20,19,8,21,7,23,1,6,5}, // permutation 6
{1,27,0,17,15,4,29,14,16,20,28,9,22,23,12,26,6,5,10,21,3,19,11,13,24,18,2,7,8,25}, // permutation 7
{6,25,15,26,10,18,17,0,22,7,1,28,4,2,27,5,19,8,3,20,29,21,12,23,13,9,11,14,24,16}, // permutation 8
{3,17,9,7,4,6,8,15,2,12,19,26,27,28,24,21,25,16,22,10,0,11,14,23,20,5,13,29,1,18} // permutation 9
};

// Seed: 649121183

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile int64_t  f0;
   volatile uint64_t  f1;
   volatile int32_t  f2;
   uint32_t  f3;
   int32_t  f4;
   uint64_t  f5;
   volatile uint16_t  f6;
   volatile int32_t  f7;
   volatile int64_t  f8;
};

union U1 {
   uint32_t  f0;
   int64_t  f1;
};

union U2 {
   uint16_t  f0;
};

union U3 {
   volatile int64_t  f0;
};

struct S4 {
    int32_t g_2;
    int32_t g_53;
    int32_t *g_68;
    int32_t ** volatile g_67;
    int8_t g_74[7];
    uint64_t g_76;
    uint8_t g_80;
    struct S0 g_83;
    int32_t g_85;
    int32_t g_87;
    VECTOR(int32_t, 8) g_89;
    volatile VECTOR(int8_t, 2) g_98;
    VECTOR(int16_t, 4) g_99;
    uint8_t g_130[7];
    uint64_t g_135;
    int32_t ** volatile g_142;
    int32_t ** volatile g_143;
    uint8_t *g_159;
    volatile uint32_t g_172;
    uint8_t **g_179;
    uint8_t ***g_178;
    uint32_t g_182;
    uint64_t g_183[3];
    uint8_t g_184;
    volatile struct S0 g_232;
    volatile union U3 g_253;
    int32_t *g_264;
    uint16_t g_295;
    int8_t *g_298;
    int8_t **g_297;
    VECTOR(int16_t, 4) g_299;
    volatile VECTOR(int32_t, 2) g_306;
    volatile struct S0 * volatile g_308[9];
    volatile struct S0 g_309[5];
    int32_t * volatile g_320;
    int16_t *g_326;
    int16_t **g_325;
    int16_t *** volatile g_324;
    int32_t ** volatile g_341;
    int32_t ** volatile g_342;
    union U1 g_343;
    volatile struct S0 g_355;
    volatile struct S0 * volatile g_356[7][4];
    volatile struct S0 * volatile g_357;
    struct S0 g_358;
    struct S0 * volatile g_359;
    struct S0 * volatile g_360[9][8][3];
    struct S0 * volatile g_361;
    volatile union U3 g_613;
    union U3 g_615;
    VECTOR(uint32_t, 2) g_624;
    volatile VECTOR(uint16_t, 16) g_627;
    int32_t ** volatile g_862;
    struct S0 g_866;
    VECTOR(int32_t, 4) g_867;
    struct S0 g_891;
    struct S0 * volatile g_892;
    VECTOR(int32_t, 16) g_985;
    union U2 g_1014;
    volatile VECTOR(uint8_t, 2) g_1019;
    int32_t * volatile g_1026;
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
uint32_t  func_1(struct S4 * p_1030);
int32_t * func_5(union U2  p_6, int32_t * p_7, int32_t * p_8, union U2  p_9, uint64_t  p_10, struct S4 * p_1030);
int8_t  func_11(int64_t  p_12, int64_t  p_13, int64_t  p_14, int32_t  p_15, struct S4 * p_1030);
struct S0  func_18(int32_t * p_19, uint32_t  p_20, int32_t * p_21, int32_t  p_22, int32_t * p_23, struct S4 * p_1030);
int32_t * func_24(int8_t  p_25, uint64_t  p_26, int32_t * p_27, struct S4 * p_1030);
int8_t  func_28(int32_t * p_29, int32_t * p_30, struct S4 * p_1030);
int32_t * func_31(int32_t * p_32, uint32_t  p_33, uint64_t  p_34, int64_t  p_35, struct S4 * p_1030);
uint8_t  func_43(uint16_t  p_44, uint64_t  p_45, int32_t  p_46, int32_t * p_47, struct S4 * p_1030);
struct S0  func_56(union U1  p_57, int32_t * p_58, struct S4 * p_1030);
union U1  func_59(int32_t * p_60, int8_t  p_61, union U2  p_62, struct S4 * p_1030);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1030->g_2 p_1030->l_comm_values p_1030->g_comm_values p_1030->g_67 p_1030->g_80 p_1030->g_83 p_1030->g_130 p_1030->g_99 p_1030->g_68 p_1030->g_143 p_1030->g_53 p_1030->g_85 p_1030->g_74 p_1030->g_76 p_1030->g_89 p_1030->g_253 p_1030->g_232.f3 p_1030->g_232.f0 p_1030->g_159 p_1030->g_178 p_1030->g_179 p_1030->g_232.f5 p_1030->g_297 p_1030->g_299 p_1030->g_183 p_1030->g_232 p_1030->g_320 p_1030->g_87 p_1030->g_324 p_1030->g_342 p_1030->g_343 p_1030->g_355 p_1030->g_357 p_1030->g_358 p_1030->g_361 p_1030->g_613 p_1030->g_182 p_1030->g_184 p_1030->g_862 p_1030->g_866 p_1030->g_891 p_1030->g_892 p_1030->g_1014
 * writes: p_1030->g_2 p_1030->g_53 p_1030->g_68 p_1030->g_80 p_1030->g_85 p_1030->g_135 p_1030->g_130 p_1030->g_159 p_1030->g_89 p_1030->g_182 p_1030->g_264 p_1030->g_comm_values p_1030->g_295 p_1030->g_309 p_1030->g_298 p_1030->g_87 p_1030->g_325 p_1030->g_83.f4 p_1030->g_76 p_1030->g_355 p_1030->g_83 p_1030->g_343.f1 p_1030->g_866.f3 p_1030->g_891 p_1030->g_184
 */
uint32_t  func_1(struct S4 * p_1030)
{ /* block id: 4 */
    int64_t l_48 = 0x750E16FFA942F34CL;
    uint32_t l_51 = 4294967295UL;
    int32_t *l_836 = &p_1030->g_2;
    uint64_t l_1012[2];
    int i;
    for (i = 0; i < 2; i++)
        l_1012[i] = 1UL;
    for (p_1030->g_2 = 0; (p_1030->g_2 != 23); p_1030->g_2 = safe_add_func_uint16_t_u_u(p_1030->g_2, 7))
    { /* block id: 7 */
        uint64_t l_42 = 0xAA9C4AD1532D49ACL;
        int32_t *l_52[8][8] = {{&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53},{&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53},{&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53},{&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53},{&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53},{&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53},{&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53},{&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,&p_1030->g_53}};
        union U2 l_1013 = {65533UL};
        int32_t **l_1029 = &p_1030->g_68;
        int i, j;
        (*l_1029) = func_5(((func_11((safe_add_func_int64_t_s_s(((((-1L) > ((func_18(func_24(func_28(func_31(&p_1030->g_2, p_1030->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1030->tid, 30))], (safe_mod_func_uint64_t_u_u(((safe_mod_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(l_42, (p_1030->g_2 > func_43(l_48, p_1030->g_comm_values[p_1030->tid], (p_1030->g_53 = (safe_sub_func_int32_t_s_s((l_51 || (l_42 <= 0x0E0689BB5C1ED529L)), 5UL))), &p_1030->g_2, p_1030)))), l_48)) | GROUP_DIVERGE(1, 1)), GROUP_DIVERGE(2, 1))), p_1030->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1030->tid, 30))], p_1030), &p_1030->g_2, p_1030), l_42, l_836, p_1030), (*l_836), &p_1030->g_2, p_1030->g_184, l_836, p_1030) , l_52[0][2]) == l_52[7][5])) || (*l_836)) < 0x3566L), (*l_836))), p_1030->g_2, (*l_836), (*l_836), p_1030) > l_1012[1]) , l_1013), &p_1030->g_2, &p_1030->g_2, p_1030->g_1014, p_1030->g_74[6], p_1030);
    }
    return p_1030->g_355.f3;
}


/* ------------------------------------------ */
/* 
 * reads : p_1030->g_1019 p_1030->g_87 p_1030->g_320
 * writes: p_1030->g_87
 */
int32_t * func_5(union U2  p_6, int32_t * p_7, int32_t * p_8, union U2  p_9, uint64_t  p_10, struct S4 * p_1030)
{ /* block id: 563 */
    union U2 l_1020 = {0x8032L};
    VECTOR(int8_t, 8) l_1021 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x4DL), 0x4DL), 0x4DL, 0L, 0x4DL);
    VECTOR(int8_t, 4) l_1022 = (VECTOR(int8_t, 4))(0x43L, (VECTOR(int8_t, 2))(0x43L, 0x52L), 0x52L);
    VECTOR(uint32_t, 16) l_1025 = (VECTOR(uint32_t, 16))(0xF153B76DL, (VECTOR(uint32_t, 4))(0xF153B76DL, (VECTOR(uint32_t, 2))(0xF153B76DL, 1UL), 1UL), 1UL, 0xF153B76DL, 1UL, (VECTOR(uint32_t, 2))(0xF153B76DL, 1UL), (VECTOR(uint32_t, 2))(0xF153B76DL, 1UL), 0xF153B76DL, 1UL, 0xF153B76DL, 1UL);
    int32_t *l_1027[3][2];
    uint8_t **l_1028 = &p_1030->g_159;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            l_1027[i][j] = &p_1030->g_85;
    }
    (*p_1030->g_320) = (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 16))(p_1030->g_1019.yxxxyxxxyxyyyyxy)).s0, (l_1020 , ((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(0x08L, ((VECTOR(int8_t, 2))(l_1021.s57)), 7L)).odd)).yyyx, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_1022.zw)), (-7L), (-1L))).hi)).yxyxyxyx)).even))).y))), (safe_rshift_func_int8_t_s_u((~(p_1030->g_87 || (!((VECTOR(uint32_t, 4))(l_1025.scd33)).x))), 7))));
    l_1028 = l_1028;
    return l_1027[1][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_1030->g_867 p_1030->g_83.f5 p_1030->g_135 p_1030->g_87 p_1030->g_891 p_1030->g_892 p_1030->g_358.f0
 * writes: p_1030->g_87 p_1030->g_83.f5 p_1030->g_135 p_1030->g_866.f3 p_1030->g_891 p_1030->g_184
 */
int8_t  func_11(int64_t  p_12, int64_t  p_13, int64_t  p_14, int32_t  p_15, struct S4 * p_1030)
{ /* block id: 484 */
    VECTOR(int32_t, 8) l_868 = (VECTOR(int32_t, 8))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 1L), 1L), 1L, 3L, 1L);
    VECTOR(int32_t, 2) l_869 = (VECTOR(int32_t, 2))((-2L), 0L);
    int32_t *l_870 = &p_1030->g_87;
    int16_t *l_995 = (void*)0;
    int i;
    (*l_870) = ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(p_1030->g_867.yxwxzxwzwxyxzyzz)).se89d, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_868.s32)).yyxyyyyy)).lo, ((VECTOR(int32_t, 2))(l_869.xy)).xxyy))).w;
    for (p_1030->g_83.f5 = 0; (p_1030->g_83.f5 > 44); p_1030->g_83.f5 = safe_add_func_int32_t_s_s(p_1030->g_83.f5, 9))
    { /* block id: 488 */
        uint32_t l_878 = 0x89432A0EL;
        int32_t l_885 = (-1L);
        VECTOR(int8_t, 4) l_996 = (VECTOR(int8_t, 4))(0x37L, (VECTOR(int8_t, 2))(0x37L, 0x66L), 0x66L);
        VECTOR(int8_t, 16) l_997 = (VECTOR(int8_t, 16))(0x62L, (VECTOR(int8_t, 4))(0x62L, (VECTOR(int8_t, 2))(0x62L, 0x31L), 0x31L), 0x31L, 0x62L, 0x31L, (VECTOR(int8_t, 2))(0x62L, 0x31L), (VECTOR(int8_t, 2))(0x62L, 0x31L), 0x62L, 0x31L, 0x62L, 0x31L);
        int i;
        for (p_1030->g_135 = (-18); (p_1030->g_135 != 7); p_1030->g_135 = safe_add_func_int8_t_s_s(p_1030->g_135, 5))
        { /* block id: 491 */
            int32_t *l_875 = &p_1030->g_87;
            int32_t *l_876 = &p_1030->g_87;
            int32_t *l_877[5];
            int32_t l_994 = 0x687D1402L;
            union U2 l_1000 = {6UL};
            int i;
            for (i = 0; i < 5; i++)
                l_877[i] = (void*)0;
            l_878++;
            for (p_1030->g_87 = 0; (p_1030->g_87 > 22); p_1030->g_87 = safe_add_func_int16_t_s_s(p_1030->g_87, 4))
            { /* block id: 495 */
                uint32_t l_886 = 0x14F8F192L;
                int32_t *l_893 = &l_885;
                VECTOR(uint16_t, 2) l_896 = (VECTOR(uint16_t, 2))(7UL, 0xB133L);
                int32_t l_918[4] = {0x6A94B2B5L,0x6A94B2B5L,0x6A94B2B5L,0x6A94B2B5L};
                VECTOR(int8_t, 8) l_998 = (VECTOR(int8_t, 8))(4L, (VECTOR(int8_t, 4))(4L, (VECTOR(int8_t, 2))(4L, (-5L)), (-5L)), (-5L), 4L, (-5L));
                int i;
                for (p_1030->g_866.f3 = (-18); (p_1030->g_866.f3 < 31); ++p_1030->g_866.f3)
                { /* block id: 498 */
                    ++l_886;
                    for (l_885 = 6; (l_885 >= (-20)); l_885 = safe_sub_func_int8_t_s_s(l_885, 7))
                    { /* block id: 502 */
                        (*p_1030->g_892) = p_1030->g_891;
                    }
                }
                (*l_893) |= (((p_1030->g_358.f0 , &p_15) != &p_1030->g_85) , p_13);
                if ((atomic_inc(&p_1030->g_atomic_input[21 * get_linear_group_id() + 20]) == 7))
                { /* block id: 509 */
                    int32_t l_919 = (-1L);
                    uint8_t l_934 = 0UL;
                    int64_t l_937 = (-1L);
                    uint32_t l_938 = 0UL;
                    VECTOR(int64_t, 4) l_941 = (VECTOR(int64_t, 4))(0x3F5AEB65A2AEA0C0L, (VECTOR(int64_t, 2))(0x3F5AEB65A2AEA0C0L, (-10L)), (-10L));
                    uint16_t l_942 = 0x5CB3L;
                    int16_t l_943 = 1L;
                    int32_t l_944 = 0x180109B9L;
                    int i;
                    if (l_919)
                    { /* block id: 510 */
                        uint32_t l_920 = 8UL;
                        VECTOR(int32_t, 2) l_922 = (VECTOR(int32_t, 2))(0x345E5B0CL, 1L);
                        int32_t *l_921 = (void*)0;
                        int32_t *l_923 = (void*)0;
                        int32_t *l_924 = (void*)0;
                        int32_t *l_925[2][5][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
                        uint16_t l_926 = 0x59EDL;
                        int64_t l_927 = (-1L);
                        int i, j, k;
                        l_923 = (l_920 , l_921);
                        l_925[1][3][1] = l_924;
                        l_927 = l_926;
                    }
                    else
                    { /* block id: 514 */
                        uint8_t l_928 = 0xEBL;
                        struct S0 l_933 = {0x784E517C86C5D0D8L,2UL,0x4AD5D6A0L,0x17C2B35AL,0x760AE877L,0x2F9EE054C32E0DC9L,0UL,0x71734900L,0L};/* VOLATILE GLOBAL l_933 */
                        struct S0 *l_932 = &l_933;
                        struct S0 **l_931 = &l_932;
                        ++l_928;
                        l_931 = (void*)0;
                    }
                    l_934++;
                    ++l_938;
                    if (((((VECTOR(int64_t, 4))(l_941.zwwz)).w , (l_942 , l_943)) , (l_944 = ((VECTOR(int32_t, 2))(0x1FDC2E5FL, 0x0D0C7819L)).lo)))
                    { /* block id: 521 */
                        VECTOR(int32_t, 8) l_945 = (VECTOR(int32_t, 8))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x1ECAA71BL), 0x1ECAA71BL), 0x1ECAA71BL, (-7L), 0x1ECAA71BL);
                        VECTOR(int64_t, 16) l_946 = (VECTOR(int64_t, 16))(0x126AE4241884E21BL, (VECTOR(int64_t, 4))(0x126AE4241884E21BL, (VECTOR(int64_t, 2))(0x126AE4241884E21BL, (-4L)), (-4L)), (-4L), 0x126AE4241884E21BL, (-4L), (VECTOR(int64_t, 2))(0x126AE4241884E21BL, (-4L)), (VECTOR(int64_t, 2))(0x126AE4241884E21BL, (-4L)), 0x126AE4241884E21BL, (-4L), 0x126AE4241884E21BL, (-4L));
                        VECTOR(uint64_t, 8) l_947 = (VECTOR(uint64_t, 8))(0xC73D161C0C573082L, (VECTOR(uint64_t, 4))(0xC73D161C0C573082L, (VECTOR(uint64_t, 2))(0xC73D161C0C573082L, 0xE8617B8CF53A3DC0L), 0xE8617B8CF53A3DC0L), 0xE8617B8CF53A3DC0L, 0xC73D161C0C573082L, 0xE8617B8CF53A3DC0L);
                        VECTOR(uint64_t, 16) l_948 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x395B54334CF16517L), 0x395B54334CF16517L), 0x395B54334CF16517L, 18446744073709551615UL, 0x395B54334CF16517L, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x395B54334CF16517L), (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x395B54334CF16517L), 18446744073709551615UL, 0x395B54334CF16517L, 18446744073709551615UL, 0x395B54334CF16517L);
                        VECTOR(uint64_t, 16) l_949 = (VECTOR(uint64_t, 16))(4UL, (VECTOR(uint64_t, 4))(4UL, (VECTOR(uint64_t, 2))(4UL, 0x375D03FD63C977E6L), 0x375D03FD63C977E6L), 0x375D03FD63C977E6L, 4UL, 0x375D03FD63C977E6L, (VECTOR(uint64_t, 2))(4UL, 0x375D03FD63C977E6L), (VECTOR(uint64_t, 2))(4UL, 0x375D03FD63C977E6L), 4UL, 0x375D03FD63C977E6L, 4UL, 0x375D03FD63C977E6L);
                        struct S0 l_950[10] = {{0x3FC2EEC3CB7E7DD4L,0UL,0L,0x16A6143BL,0x39B751C7L,18446744073709551609UL,0x56DBL,-5L,1L},{0x501058E11F1AC5A4L,0x1BF89BB71653D215L,-5L,0x41FAD9D9L,-4L,18446744073709551615UL,0x27C1L,0x1DB6B86BL,0x6891B3AD8B2E0214L},{0L,0x878FE7512EA53A73L,0x05539938L,3UL,0x1E81F16DL,4UL,5UL,-4L,0x559E8FA4D98D7988L},{0x501058E11F1AC5A4L,0x1BF89BB71653D215L,-5L,0x41FAD9D9L,-4L,18446744073709551615UL,0x27C1L,0x1DB6B86BL,0x6891B3AD8B2E0214L},{0x3FC2EEC3CB7E7DD4L,0UL,0L,0x16A6143BL,0x39B751C7L,18446744073709551609UL,0x56DBL,-5L,1L},{0x3FC2EEC3CB7E7DD4L,0UL,0L,0x16A6143BL,0x39B751C7L,18446744073709551609UL,0x56DBL,-5L,1L},{0x501058E11F1AC5A4L,0x1BF89BB71653D215L,-5L,0x41FAD9D9L,-4L,18446744073709551615UL,0x27C1L,0x1DB6B86BL,0x6891B3AD8B2E0214L},{0L,0x878FE7512EA53A73L,0x05539938L,3UL,0x1E81F16DL,4UL,5UL,-4L,0x559E8FA4D98D7988L},{0x501058E11F1AC5A4L,0x1BF89BB71653D215L,-5L,0x41FAD9D9L,-4L,18446744073709551615UL,0x27C1L,0x1DB6B86BL,0x6891B3AD8B2E0214L},{0x3FC2EEC3CB7E7DD4L,0UL,0L,0x16A6143BL,0x39B751C7L,18446744073709551609UL,0x56DBL,-5L,1L}};
                        struct S0 l_951 = {0x12F4E467A5D938B2L,0xFD981F77ED7E9795L,0x250A1D45L,5UL,8L,18446744073709551612UL,65535UL,0L,7L};/* VOLATILE GLOBAL l_951 */
                        uint64_t *l_953[8] = {&l_951.f5,&l_951.f5,&l_951.f5,&l_951.f5,&l_951.f5,&l_951.f5,&l_951.f5,&l_951.f5};
                        uint64_t **l_952 = &l_953[3];
                        uint64_t **l_954 = &l_953[4];
                        uint64_t **l_955[5];
                        uint64_t **l_956 = &l_953[3];
                        union U3 l_958[6][3] = {{{0L},{0L},{0L}},{{0L},{0L},{0L}},{{0L},{0L},{0L}},{{0L},{0L},{0L}},{{0L},{0L},{0L}},{{0L},{0L},{0L}}};
                        union U3 *l_957 = &l_958[1][2];
                        union U3 *l_959 = &l_958[0][1];
                        int i, j;
                        for (i = 0; i < 5; i++)
                            l_955[i] = &l_953[5];
                        l_951 = (((VECTOR(uint64_t, 16))(1UL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(abs_diff(((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 2))(l_945.s71)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0UL, 4294967293UL)).xyyx)).odd))).yyyyxxxx, ((VECTOR(int64_t, 2))(l_946.se2)).xyyyxyyy))).lo)).w, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(l_947.s06)).xxxxxyyx)), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(l_948.sf81e66a3)))).s2, 18446744073709551613UL, 0x24D918B74B76C2F8L, ((VECTOR(uint64_t, 2))(l_949.s64)), 0UL)).sf , l_950[2]);
                        l_956 = (l_955[0] = (l_954 = l_952));
                        l_959 = l_957;
                    }
                    else
                    { /* block id: 527 */
                        VECTOR(int32_t, 4) l_960 = (VECTOR(int32_t, 4))(0x5019ABC1L, (VECTOR(int32_t, 2))(0x5019ABC1L, 1L), 1L);
                        VECTOR(int32_t, 8) l_961 = (VECTOR(int32_t, 8))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0L), 0L), 0L, 3L, 0L);
                        int64_t l_962[9] = {0x303FE292BA6E5B84L,0x303FE292BA6E5B84L,0x303FE292BA6E5B84L,0x303FE292BA6E5B84L,0x303FE292BA6E5B84L,0x303FE292BA6E5B84L,0x303FE292BA6E5B84L,0x303FE292BA6E5B84L,0x303FE292BA6E5B84L};
                        int32_t l_963 = 0x601A8509L;
                        uint32_t l_964 = 8UL;
                        union U2 l_965 = {1UL};
                        uint8_t l_966 = 250UL;
                        int64_t l_967 = 1L;
                        uint16_t l_968 = 0xC6C4L;
                        int16_t l_969[4][6] = {{0x5F76L,(-1L),0x5F76L,0x5F76L,(-1L),0x5F76L},{0x5F76L,(-1L),0x5F76L,0x5F76L,(-1L),0x5F76L},{0x5F76L,(-1L),0x5F76L,0x5F76L,(-1L),0x5F76L},{0x5F76L,(-1L),0x5F76L,0x5F76L,(-1L),0x5F76L}};
                        VECTOR(uint32_t, 8) l_970 = (VECTOR(uint32_t, 8))(4294967293UL, (VECTOR(uint32_t, 4))(4294967293UL, (VECTOR(uint32_t, 2))(4294967293UL, 4294967290UL), 4294967290UL), 4294967290UL, 4294967293UL, 4294967290UL);
                        int8_t l_971 = (-1L);
                        int64_t l_972 = 4L;
                        int32_t l_973 = 1L;
                        int32_t l_974 = (-1L);
                        uint32_t l_975 = 4294967288UL;
                        uint32_t l_976 = 0x9038CDA2L;
                        uint8_t l_977[8][1] = {{0xE8L},{0xE8L},{0xE8L},{0xE8L},{0xE8L},{0xE8L},{0xE8L},{0xE8L}};
                        uint32_t l_978[8][1] = {{3UL},{3UL},{3UL},{3UL},{3UL},{3UL},{3UL},{3UL}};
                        int i, j;
                        l_975 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_960.xywx)), ((VECTOR(int32_t, 2))(l_961.s55)), ((VECTOR(int32_t, 4))((-1L), (l_972 ^= (l_971 ^= (((l_937 = (-7L)) , ((VECTOR(int32_t, 16))(l_962[7], (-8L), 6L, (l_963 = (l_964 &= l_963)), (l_965 , l_966), 0L, 0x635CE144L, l_967, l_968, l_969[2][1], 0x772B32DEL, ((VECTOR(int32_t, 2))(0x753B890EL)), l_970.s3, 0L, 0L)).s9) , (-1L)))), 0x275F238BL, 0x2D27B09CL)), l_973, 0x591C2B80L, l_974, 0x312E7E78L, (-1L), 0x75702CDBL)).s5;
                        l_977[5][0] ^= l_976;
                        l_978[6][0] &= 0x3109F3DFL;
                    }
                    unsigned int result = 0;
                    result += l_919;
                    result += l_934;
                    result += l_937;
                    result += l_938;
                    result += l_941.w;
                    result += l_941.z;
                    result += l_941.y;
                    result += l_941.x;
                    result += l_942;
                    result += l_943;
                    result += l_944;
                    atomic_add(&p_1030->g_special_values[21 * get_linear_group_id() + 20], result);
                }
                else
                { /* block id: 537 */
                    (1 + 1);
                }
                if ((safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(p_1030->g_985.sd1497b7af5357daf)).lo)).s6 , (&p_1030->g_295 == &p_1030->g_295)), (p_12 & (safe_lshift_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s((safe_add_func_uint16_t_u_u((((~(safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),VECTOR(int8_t, 4),((VECTOR(int8_t, 8))((l_994 && (((void*)0 == l_995) & (*l_870))), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_996.xw)))).even, 0x11L, 0x7BL, (-1L))), 0x52L, 0x43L, 0x5EL)).odd, ((VECTOR(int8_t, 4))(l_997.sec42)), ((VECTOR(int8_t, 4))(8L, 0x69L, 0L, 0x00L))))).xzxxwzzw, ((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_998.s67)).xyyy)).hi, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 8))(0x47L, (((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(0x0DB8L, 0x0CF9L)).yxxxxyyyxyyyyxyx)).sa <= ((0UL && (*l_870)) < p_1030->g_184)), (-5L), 9L, ((VECTOR(int8_t, 2))(0L)), (-6L), 9L)).s10, ((VECTOR(int8_t, 2))(0x6CL))))), 1L, (-4L))).even))).yxyyyyxx))).s3, 1L))) , p_13) , 0x5CCEL), p_14)), p_12)) , (*l_893)), 4))))), (*l_875))) & 0xC23FL), 0)))
                { /* block id: 540 */
                    int32_t **l_999 = &l_876;
                    (*l_999) = (void*)0;
                    (*l_999) = (((p_14 , p_13) , l_1000) , &l_994);
                    if ((atomic_inc(&p_1030->g_atomic_input[21 * get_linear_group_id() + 4]) == 2))
                    { /* block id: 544 */
                        union U2 l_1001[5][9] = {{{0xF0DCL},{0xD679L},{0x7B4DL},{0xCDBEL},{0xD679L},{0xCDBEL},{0x7B4DL},{0xD679L},{0xF0DCL}},{{0xF0DCL},{0xD679L},{0x7B4DL},{0xCDBEL},{0xD679L},{0xCDBEL},{0x7B4DL},{0xD679L},{0xF0DCL}},{{0xF0DCL},{0xD679L},{0x7B4DL},{0xCDBEL},{0xD679L},{0xCDBEL},{0x7B4DL},{0xD679L},{0xF0DCL}},{{0xF0DCL},{0xD679L},{0x7B4DL},{0xCDBEL},{0xD679L},{0xCDBEL},{0x7B4DL},{0xD679L},{0xF0DCL}},{{0xF0DCL},{0xD679L},{0x7B4DL},{0xCDBEL},{0xD679L},{0xCDBEL},{0x7B4DL},{0xD679L},{0xF0DCL}}};
                        union U2 l_1002 = {0x9EB4L};
                        union U3 l_1003 = {9L};/* VOLATILE GLOBAL l_1003 */
                        int32_t l_1005 = (-1L);
                        int32_t *l_1004 = &l_1005;
                        int32_t *l_1006 = &l_1005;
                        uint64_t l_1007 = 9UL;
                        int i, j;
                        l_1006 = ((l_1002 = l_1001[1][5]) , (l_1003 , l_1004));
                        l_1007--;
                        unsigned int result = 0;
                        int l_1001_i0, l_1001_i1;
                        for (l_1001_i0 = 0; l_1001_i0 < 5; l_1001_i0++) {
                            for (l_1001_i1 = 0; l_1001_i1 < 9; l_1001_i1++) {
                                result += l_1001[l_1001_i0][l_1001_i1].f0;
                            }
                        }
                        result += l_1002.f0;
                        result += l_1003.f0;
                        result += l_1005;
                        result += l_1007;
                        atomic_add(&p_1030->g_special_values[21 * get_linear_group_id() + 4], result);
                    }
                    else
                    { /* block id: 548 */
                        (1 + 1);
                    }
                    if (p_12)
                        continue;
                }
                else
                { /* block id: 552 */
                    for (p_1030->g_184 = 0; (p_1030->g_184 <= 24); p_1030->g_184 = safe_add_func_uint16_t_u_u(p_1030->g_184, 1))
                    { /* block id: 555 */
                        return p_12;
                    }
                }
            }
        }
    }
    return (*l_870);
}


/* ------------------------------------------ */
/* 
 * reads : p_1030->g_182 p_1030->g_2 p_1030->g_83.f7 p_1030->g_85 p_1030->g_862 p_1030->g_67 p_1030->g_68 p_1030->g_866
 * writes: p_1030->g_182 p_1030->g_343.f1 p_1030->g_85 p_1030->g_68
 */
struct S0  func_18(int32_t * p_19, uint32_t  p_20, int32_t * p_21, int32_t  p_22, int32_t * p_23, struct S4 * p_1030)
{ /* block id: 471 */
    uint32_t l_856 = 0x4F921A7FL;
    int32_t l_857 = 0x5EC19361L;
    int32_t *l_865[4] = {&p_1030->g_87,&p_1030->g_87,&p_1030->g_87,&p_1030->g_87};
    int i;
    for (p_1030->g_182 = (-24); (p_1030->g_182 == 45); p_1030->g_182 = safe_add_func_int32_t_s_s(p_1030->g_182, 5))
    { /* block id: 474 */
        uint32_t l_844 = 0UL;
        union U2 l_845[2][6][3] = {{{{0xFB98L},{65529UL},{0x37A1L}},{{0xFB98L},{65529UL},{0x37A1L}},{{0xFB98L},{65529UL},{0x37A1L}},{{0xFB98L},{65529UL},{0x37A1L}},{{0xFB98L},{65529UL},{0x37A1L}},{{0xFB98L},{65529UL},{0x37A1L}}},{{{0xFB98L},{65529UL},{0x37A1L}},{{0xFB98L},{65529UL},{0x37A1L}},{{0xFB98L},{65529UL},{0x37A1L}},{{0xFB98L},{65529UL},{0x37A1L}},{{0xFB98L},{65529UL},{0x37A1L}},{{0xFB98L},{65529UL},{0x37A1L}}}};
        int16_t *l_848 = (void*)0;
        int16_t *l_849 = (void*)0;
        int16_t *l_850 = (void*)0;
        int16_t *l_851 = (void*)0;
        int16_t *l_852 = (void*)0;
        int16_t *l_853 = (void*)0;
        int16_t *l_854 = (void*)0;
        int16_t *l_855[9][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
        int64_t *l_859 = (void*)0;
        int64_t *l_860 = &p_1030->g_343.f1;
        uint32_t l_861 = 0xBB2A66B7L;
        int32_t **l_863 = &p_1030->g_68;
        int32_t **l_864[5][5] = {{&p_1030->g_68,(void*)0,&p_1030->g_68,&p_1030->g_68,(void*)0},{&p_1030->g_68,(void*)0,&p_1030->g_68,&p_1030->g_68,(void*)0},{&p_1030->g_68,(void*)0,&p_1030->g_68,&p_1030->g_68,(void*)0},{&p_1030->g_68,(void*)0,&p_1030->g_68,&p_1030->g_68,(void*)0},{&p_1030->g_68,(void*)0,&p_1030->g_68,&p_1030->g_68,(void*)0}};
        int i, j, k;
        (*p_1030->g_862) = func_24(p_22, l_844, ((l_845[1][3][0] , ((6L > (safe_add_func_int32_t_s_s(((l_857 = (p_20 >= ((l_856 = p_20) & (-10L)))) & ((*l_860) = (safe_unary_minus_func_uint16_t_u(1UL)))), p_20))) || l_861)) , (void*)0), p_1030);
        (*l_863) = &p_22;
        l_865[0] = ((*p_1030->g_67) = (((void*)0 != l_864[4][0]) , (*p_1030->g_67)));
    }
    return p_1030->g_866;
}


/* ------------------------------------------ */
/* 
 * reads : p_1030->g_2 p_1030->g_83.f7 p_1030->g_85
 * writes: p_1030->g_85
 */
int32_t * func_24(int8_t  p_25, uint64_t  p_26, int32_t * p_27, struct S4 * p_1030)
{ /* block id: 467 */
    int32_t *l_837 = &p_1030->g_2;
    int32_t **l_838 = &l_837;
    int32_t *l_841 = &p_1030->g_85;
    (*l_838) = l_837;
    (*l_841) &= (safe_rshift_func_uint16_t_u_s((**l_838), ((+p_1030->g_83.f7) >= (**l_838))));
    return p_27;
}


/* ------------------------------------------ */
/* 
 * reads : p_1030->g_320 p_1030->g_2 p_1030->g_143 p_1030->g_68
 * writes: p_1030->g_87 p_1030->g_68
 */
int8_t  func_28(int32_t * p_29, int32_t * p_30, struct S4 * p_1030)
{ /* block id: 343 */
    uint16_t l_835 = 0x8395L;
    (*p_1030->g_320) = 0L;
    if ((atomic_inc(&p_1030->l_atomic_input[11]) == 0))
    { /* block id: 346 */
        VECTOR(int32_t, 8) l_651 = (VECTOR(int32_t, 8))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x2545DB00L), 0x2545DB00L), 0x2545DB00L, 5L, 0x2545DB00L);
        uint64_t l_652[2][3][2];
        int32_t l_653 = 0x0F0CEA8FL;
        VECTOR(int16_t, 2) l_654 = (VECTOR(int16_t, 2))(0L, 0x7652L);
        VECTOR(int16_t, 8) l_655 = (VECTOR(int16_t, 8))(0x0374L, (VECTOR(int16_t, 4))(0x0374L, (VECTOR(int16_t, 2))(0x0374L, 1L), 1L), 1L, 0x0374L, 1L);
        int32_t l_656[6];
        VECTOR(int32_t, 4) l_657 = (VECTOR(int32_t, 4))(0x5EF46847L, (VECTOR(int32_t, 2))(0x5EF46847L, 5L), 5L);
        uint64_t l_658[3];
        uint32_t l_659 = 0x7A26F19DL;
        uint32_t l_660 = 0xC45E386CL;
        int64_t l_661[7] = {0x6C19E0238F0AB016L,0x0598A38F3E7F2439L,0x6C19E0238F0AB016L,0x6C19E0238F0AB016L,0x0598A38F3E7F2439L,0x6C19E0238F0AB016L,0x6C19E0238F0AB016L};
        int8_t l_662 = 0x04L;
        uint32_t l_663 = 0x62535327L;
        int32_t l_675 = 0x6BE4C92BL;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 2; k++)
                    l_652[i][j][k] = 18446744073709551612UL;
            }
        }
        for (i = 0; i < 6; i++)
            l_656[i] = (-1L);
        for (i = 0; i < 3; i++)
            l_658[i] = 0UL;
        if (((VECTOR(int32_t, 16))(1L, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(0x541BF984L, 0x054A649BL, ((VECTOR(int32_t, 2))(l_651.s53)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(0x6CC4L, ((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 2))(0x1E32L, 0x2F63L)).yyyy, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))((-9L), l_652[1][0][1], 0x2EF5L, 4L)).zxwxzwwwyyzxzwxx)).s7de7, ((VECTOR(int16_t, 2))(0x0721L, (-1L))).xyxx))), 1L, (l_653 &= ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))((-1L), (-4L), 0x73E0L, 0x0420L)).ywzwzyxx)).s2), (-10L), (-7L))).s17, ((VECTOR(int16_t, 2))(l_654.yy)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_655.s62)).xyxyyxyxyxxyxyxx)).sdb))), (-2L))), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(0x74CCL, 65526UL, 0x930CL, 0xE969L)), 0UL, l_656[3], 65535UL, 1UL)).even)))))).xzyzywxy)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 16))((-2L), 0x0E398011L, 0L, 0L, 0x7C167233L, ((VECTOR(int32_t, 4))(l_657.wyzy)), l_658[0], 0x1DFFC8D1L, 0x1BD2344EL, (-4L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x38EA12B0L, 1L)).yxyy)).odd)), 9L)).odd, (int32_t)(l_659 , l_660), (int32_t)(l_662 = l_661[3])))).s63)), 0x76E9811EL, 0x03D0C3F3L)).sf5, ((VECTOR(int32_t, 2))(3L))))).odd, ((VECTOR(int32_t, 4))(0L)), 0x21332C76L, 0x50DB4FE6L, (-3L), (-1L), l_663, ((VECTOR(int32_t, 4))((-6L))), 0x1B406BC7L)).sd)
        { /* block id: 349 */
            int32_t l_665 = (-4L);
            int32_t *l_664 = &l_665;
            l_664 = (void*)0;
        }
        else
        { /* block id: 351 */
            VECTOR(int32_t, 2) l_666 = (VECTOR(int32_t, 2))(0x0D774750L, 0x22891C7CL);
            int16_t l_667[10][7][3] = {{{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)}},{{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)}},{{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)}},{{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)}},{{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)}},{{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)}},{{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)}},{{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)}},{{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)}},{{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)},{(-1L),(-8L),(-10L)}}};
            int16_t l_668[4][8] = {{1L,0x62D1L,0x2D01L,0x62D1L,1L,1L,0x62D1L,0x2D01L},{1L,0x62D1L,0x2D01L,0x62D1L,1L,1L,0x62D1L,0x2D01L},{1L,0x62D1L,0x2D01L,0x62D1L,1L,1L,0x62D1L,0x2D01L},{1L,0x62D1L,0x2D01L,0x62D1L,1L,1L,0x62D1L,0x2D01L}};
            int8_t l_669 = 0x7EL;
            int16_t l_670[2];
            int32_t l_671 = 0x27514FFAL;
            uint16_t l_672 = 0UL;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_670[i] = 0x76CDL;
            l_651.s2 = (l_657.y = ((VECTOR(int32_t, 4))(l_666.yxyx)).x);
            l_672--;
        }
        if (l_675)
        { /* block id: 356 */
            int32_t l_676 = 9L;
            uint16_t l_738 = 0xA0CAL;
            uint8_t l_741 = 0xFFL;
            VECTOR(uint32_t, 16) l_742 = (VECTOR(uint32_t, 16))(0xD479DCABL, (VECTOR(uint32_t, 4))(0xD479DCABL, (VECTOR(uint32_t, 2))(0xD479DCABL, 0xC4D9B857L), 0xC4D9B857L), 0xC4D9B857L, 0xD479DCABL, 0xC4D9B857L, (VECTOR(uint32_t, 2))(0xD479DCABL, 0xC4D9B857L), (VECTOR(uint32_t, 2))(0xD479DCABL, 0xC4D9B857L), 0xD479DCABL, 0xC4D9B857L, 0xD479DCABL, 0xC4D9B857L);
            uint8_t l_743 = 247UL;
            int8_t l_744[10][10][2] = {{{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L}},{{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L}},{{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L}},{{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L}},{{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L}},{{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L}},{{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L}},{{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L}},{{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L}},{{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L},{0x1CL,2L}}};
            uint64_t l_817 = 18446744073709551607UL;
            int i, j, k;
            for (l_676 = 0; (l_676 >= 29); l_676 = safe_add_func_uint16_t_u_u(l_676, 7))
            { /* block id: 359 */
                union U3 l_679 = {-4L};/* VOLATILE GLOBAL l_679 */
                uint64_t l_680 = 18446744073709551608UL;
                int32_t l_692 = 6L;
                int32_t *l_691 = &l_692;
                uint16_t l_693 = 0xC512L;
                VECTOR(int32_t, 16) l_694 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x3D1C7C31L), 0x3D1C7C31L), 0x3D1C7C31L, 1L, 0x3D1C7C31L, (VECTOR(int32_t, 2))(1L, 0x3D1C7C31L), (VECTOR(int32_t, 2))(1L, 0x3D1C7C31L), 1L, 0x3D1C7C31L, 1L, 0x3D1C7C31L);
                VECTOR(int32_t, 2) l_695 = (VECTOR(int32_t, 2))(0L, 1L);
                VECTOR(int32_t, 8) l_696 = (VECTOR(int32_t, 8))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), (-6L)), (-6L)), (-6L), (-7L), (-6L));
                VECTOR(int32_t, 2) l_697 = (VECTOR(int32_t, 2))(1L, 0L);
                VECTOR(int32_t, 8) l_698 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-10L)), (-10L)), (-10L), (-1L), (-10L));
                VECTOR(int16_t, 2) l_699 = (VECTOR(int16_t, 2))(0x44BEL, (-10L));
                int32_t l_700 = 7L;
                VECTOR(int16_t, 2) l_701 = (VECTOR(int16_t, 2))(0x3B5BL, (-2L));
                VECTOR(int16_t, 16) l_702 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x61D9L), 0x61D9L), 0x61D9L, 1L, 0x61D9L, (VECTOR(int16_t, 2))(1L, 0x61D9L), (VECTOR(int16_t, 2))(1L, 0x61D9L), 1L, 0x61D9L, 1L, 0x61D9L);
                VECTOR(int16_t, 16) l_703 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int16_t, 2))((-1L), 0L), (VECTOR(int16_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
                int32_t l_704[10];
                int64_t l_705 = 0x31EDE7643916F833L;
                int32_t l_708 = 1L;
                VECTOR(uint16_t, 16) l_709 = (VECTOR(uint16_t, 16))(0x9F15L, (VECTOR(uint16_t, 4))(0x9F15L, (VECTOR(uint16_t, 2))(0x9F15L, 2UL), 2UL), 2UL, 0x9F15L, 2UL, (VECTOR(uint16_t, 2))(0x9F15L, 2UL), (VECTOR(uint16_t, 2))(0x9F15L, 2UL), 0x9F15L, 2UL, 0x9F15L, 2UL);
                VECTOR(uint16_t, 4) l_710 = (VECTOR(uint16_t, 4))(0x7592L, (VECTOR(uint16_t, 2))(0x7592L, 0x0593L), 0x0593L);
                VECTOR(uint16_t, 8) l_711 = (VECTOR(uint16_t, 8))(0x2709L, (VECTOR(uint16_t, 4))(0x2709L, (VECTOR(uint16_t, 2))(0x2709L, 65528UL), 65528UL), 65528UL, 0x2709L, 65528UL);
                VECTOR(uint16_t, 4) l_712 = (VECTOR(uint16_t, 4))(0xEE1AL, (VECTOR(uint16_t, 2))(0xEE1AL, 0xC325L), 0xC325L);
                uint32_t l_713 = 0UL;
                int16_t l_714 = 0x3401L;
                int16_t l_715 = 0L;
                VECTOR(uint8_t, 2) l_716 = (VECTOR(uint8_t, 2))(0x02L, 0x67L);
                VECTOR(uint8_t, 8) l_717 = (VECTOR(uint8_t, 8))(252UL, (VECTOR(uint8_t, 4))(252UL, (VECTOR(uint8_t, 2))(252UL, 247UL), 247UL), 247UL, 252UL, 247UL);
                VECTOR(uint8_t, 4) l_718 = (VECTOR(uint8_t, 4))(0xEBL, (VECTOR(uint8_t, 2))(0xEBL, 1UL), 1UL);
                VECTOR(uint8_t, 2) l_719 = (VECTOR(uint8_t, 2))(255UL, 0x9AL);
                VECTOR(uint8_t, 4) l_720 = (VECTOR(uint8_t, 4))(246UL, (VECTOR(uint8_t, 2))(246UL, 0xD1L), 0xD1L);
                VECTOR(int16_t, 16) l_721 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x298AL), 0x298AL), 0x298AL, (-1L), 0x298AL, (VECTOR(int16_t, 2))((-1L), 0x298AL), (VECTOR(int16_t, 2))((-1L), 0x298AL), (-1L), 0x298AL, (-1L), 0x298AL);
                VECTOR(int16_t, 16) l_722 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int16_t, 2))((-1L), 0L), (VECTOR(int16_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
                uint32_t l_723 = 4294967295UL;
                int16_t l_724 = 0x51C8L;
                uint32_t l_725 = 0xDF0F37FCL;
                int i;
                for (i = 0; i < 10; i++)
                    l_704[i] = 0x47B4254BL;
                if (((l_679 , (l_661[4] = 0L)) , l_680))
                { /* block id: 361 */
                    int16_t l_681 = (-1L);
                    int64_t l_682[3];
                    int32_t l_683[6] = {0x20E5C0D6L,0x20E5C0D6L,0x20E5C0D6L,0x20E5C0D6L,0x20E5C0D6L,0x20E5C0D6L};
                    int i;
                    for (i = 0; i < 3; i++)
                        l_682[i] = (-8L);
                    l_656[0] = (l_682[1] = l_681);
                    l_651.s5 = l_683[1];
                }
                else
                { /* block id: 365 */
                    VECTOR(int32_t, 8) l_684 = (VECTOR(int32_t, 8))(0x4B302254L, (VECTOR(int32_t, 4))(0x4B302254L, (VECTOR(int32_t, 2))(0x4B302254L, 0L), 0L), 0L, 0x4B302254L, 0L);
                    int i;
                    if (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_684.s64)))).lo)
                    { /* block id: 366 */
                        int32_t l_687 = 0L;
                        int32_t *l_686 = &l_687;
                        int32_t **l_685[3][2] = {{&l_686,(void*)0},{&l_686,(void*)0},{&l_686,(void*)0}};
                        int32_t **l_688[6][4] = {{&l_686,(void*)0,&l_686,(void*)0},{&l_686,(void*)0,&l_686,(void*)0},{&l_686,(void*)0,&l_686,(void*)0},{&l_686,(void*)0,&l_686,(void*)0},{&l_686,(void*)0,&l_686,(void*)0},{&l_686,(void*)0,&l_686,(void*)0}};
                        VECTOR(int32_t, 16) l_689 = (VECTOR(int32_t, 16))(0x01B6EC59L, (VECTOR(int32_t, 4))(0x01B6EC59L, (VECTOR(int32_t, 2))(0x01B6EC59L, 0x5CFD4A28L), 0x5CFD4A28L), 0x5CFD4A28L, 0x01B6EC59L, 0x5CFD4A28L, (VECTOR(int32_t, 2))(0x01B6EC59L, 0x5CFD4A28L), (VECTOR(int32_t, 2))(0x01B6EC59L, 0x5CFD4A28L), 0x01B6EC59L, 0x5CFD4A28L, 0x01B6EC59L, 0x5CFD4A28L);
                        int i, j;
                        l_688[3][2] = (l_685[1][0] = (void*)0);
                        l_684.s1 |= ((VECTOR(int32_t, 4))(l_689.s3aff)).y;
                    }
                    else
                    { /* block id: 370 */
                        int32_t *l_690 = (void*)0;
                        l_690 = (void*)0;
                    }
                }
                l_691 = l_691;
                if (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((l_660 = l_693) , (l_656[3] ^= 4L)), ((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_694.sd7fa)).odd)).yxyyyyxyyxxxxyyx, (int32_t)(l_656[5] = ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(l_695.yxxx)).lo, ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_696.s56101235)).s2237056712433727)).sf3, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(l_697.xxxxyxxyyyxxyyyx)).s11, ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 4))(l_698.s4743)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))((-2L), 0L, 1L, 0x09395507L, ((VECTOR(int32_t, 4))(0x022424BCL, ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(2L, ((VECTOR(int16_t, 4))(l_699.yyyy)).y, ((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 4))((l_655.s2 ^= l_700), 0x28FEL, 5L, 9L)).zyyxxyzx, ((VECTOR(int16_t, 16))(l_701.yyyxxxyxxxyxxyxx)).hi, ((VECTOR(int16_t, 4))(l_702.s0c07)).xyzwyxwz))), 0x537BL, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_703.sd48d)))), 0x7EB4L)).s6a)), 0x00F1L, 0x59E8L)).even, ((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(0UL, 0xD7B7L)))).xyxxyxxxyyyyxyyy, ((VECTOR(uint16_t, 16))((l_693++), l_708, ((VECTOR(uint16_t, 2))(l_709.s25)), l_710.z, ((VECTOR(uint16_t, 4))(l_711.s0437)), 0xA0EDL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_712.ww)), 65530UL, 0UL)), 0xD948L, 1UL))))).odd, ((VECTOR(uint16_t, 16))(l_713, l_714, ((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 8))(l_715, 0x32L, 255UL, 0xE9L, ((VECTOR(uint8_t, 2))(0UL, 0xD2L)), 0xE7L, 0xEEL)).s20, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 8))(l_716.yyxxxxxy)).s46, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 16))(l_717.s0303113143355326)).s13, ((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 2))(l_718.wz)).xxyxxyxy, ((VECTOR(uint8_t, 2))(l_719.xx)).xyyyyyyy, ((VECTOR(uint8_t, 16))(l_720.zzzzzwxyxzxzzzzx)).hi)))))).s27, ((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))((((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 4))((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_721.s269e)))).zxzxxzzwxywzyxyw)).sd , (l_651.s4 = (l_657.z = (-1L)))), 2L, 0L, 0L)).lo, ((VECTOR(int32_t, 2))(0x27C6339EL))))).xxyyxyxx, ((VECTOR(int32_t, 8))(0x1803066FL))))).even, ((VECTOR(int32_t, 4))(0x14941606L)), ((VECTOR(int32_t, 4))(0x47EBF2C0L))))), (int32_t)l_722.se, (int32_t)l_723))).x , 0x63L), 247UL, ((VECTOR(uint8_t, 4))(0x7DL)), 0x34L, 1UL)).s4021064112317463)).sc6)))))), 0xF6L, 254UL)).hi, ((VECTOR(uint8_t, 2))(0xC8L))))), 0x54L, 1UL)).lo))))).hi, 0x8E3EL, 65527UL, 4UL, 0UL, 65535UL, ((VECTOR(uint16_t, 8))(0x5A48L)))).lo))).s40))), 1L)), ((VECTOR(int32_t, 2))(1L)), l_724, 0x0F712778L, ((VECTOR(int32_t, 2))(0x289082CAL)), 0x20EFA0F8L, 0x5C1FC044L)).odd)).hi, ((VECTOR(int32_t, 4))((-10L)))))).lo))), ((VECTOR(int32_t, 2))((-7L)))))), ((VECTOR(int32_t, 2))(0x39DBA2EBL))))).hi), (int32_t)l_725))), ((VECTOR(int32_t, 16))(0x3C4D1F7FL))))).s9, ((VECTOR(int32_t, 4))(2L)), 0L, 0x6A9685DFL)).s35)).odd)
                { /* block id: 382 */
                    union U3 l_726[2] = {{9L},{9L}};
                    int32_t l_727 = 0x19BA20E4L;
                    VECTOR(uint8_t, 2) l_728 = (VECTOR(uint8_t, 2))(0x66L, 0UL);
                    union U2 l_730 = {0x54C2L};
                    union U2 *l_729 = &l_730;
                    union U2 *l_731 = &l_730;
                    union U2 *l_732 = &l_730;
                    union U2 *l_733 = &l_730;
                    int i;
                    l_733 = (GROUP_DIVERGE(0, 1) , ((l_726[0] , l_727) , (((VECTOR(uint8_t, 2))(l_728.xx)).hi , (l_732 = (l_731 = (l_729 = l_729))))));
                }
                else
                { /* block id: 387 */
                    VECTOR(int64_t, 8) l_734 = (VECTOR(int64_t, 8))((-3L), (VECTOR(int64_t, 4))((-3L), (VECTOR(int64_t, 2))((-3L), 0x2BEE5D912A2BD46EL), 0x2BEE5D912A2BD46EL), 0x2BEE5D912A2BD46EL, (-3L), 0x2BEE5D912A2BD46EL);
                    int32_t l_735 = 0x063D523DL;
                    struct S0 l_736 = {0x61AB735685E5B47BL,18446744073709551615UL,-1L,0x19235700L,0x142D2E99L,1UL,0x11AAL,0x59045E92L,0x37CD765327B65BCBL};/* VOLATILE GLOBAL l_736 */
                    struct S0 l_737 = {1L,0xC3C4635787496D7FL,3L,0xDFC0EAFCL,-6L,4UL,0x5748L,9L,-1L};/* VOLATILE GLOBAL l_737 */
                    int i;
                    l_737 = (((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 4))(l_734.s5001)), ((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 2))((-1L), 0x651E4DCB14215CECL)).yxxyyyxxyyyyxyyx, (int64_t)(l_734.s0 = l_735)))).s0e0c))).x , l_736);
                }
            }
            l_656[0] |= (((l_660 = ((l_738--) , ((VECTOR(uint32_t, 8))(0UL, 4294967286UL, 4294967288UL, 1UL, l_741, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(l_742.sa7e75af100d080ee)))).even)).s27)), 0xE6BD8CA8L)).s7)) , l_743) , l_744[3][2][0]);
            for (l_744[1][6][0] = 0; (l_744[1][6][0] < 26); l_744[1][6][0]++)
            { /* block id: 397 */
                VECTOR(int32_t, 2) l_747 = (VECTOR(int32_t, 2))(0L, 0x18FE1346L);
                VECTOR(int64_t, 4) l_761 = (VECTOR(int64_t, 4))(0x3F1BD49A2B6D7DDFL, (VECTOR(int64_t, 2))(0x3F1BD49A2B6D7DDFL, 3L), 3L);
                uint32_t l_762[10][4][6] = {{{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L},{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L},{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L},{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L}},{{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L},{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L},{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L},{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L}},{{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L},{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L},{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L},{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L}},{{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L},{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L},{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L},{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L}},{{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L},{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L},{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L},{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L}},{{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L},{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L},{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L},{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L}},{{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L},{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L},{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L},{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L}},{{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L},{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L},{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L},{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L}},{{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L},{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L},{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L},{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L}},{{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L},{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L},{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L},{4294967295UL,0x6464CAB3L,4294967288UL,0xBD469AB4L,0x13B80192L,0x49D369E9L}}};
                uint16_t l_763[8] = {0xEAE5L,0xEAE5L,0xEAE5L,0xEAE5L,0xEAE5L,0xEAE5L,0xEAE5L,0xEAE5L};
                VECTOR(uint32_t, 8) l_803 = (VECTOR(uint32_t, 8))(0x27B31295L, (VECTOR(uint32_t, 4))(0x27B31295L, (VECTOR(uint32_t, 2))(0x27B31295L, 0xC70F7C87L), 0xC70F7C87L), 0xC70F7C87L, 0x27B31295L, 0xC70F7C87L);
                int8_t l_804 = 5L;
                union U3 l_805 = {0x2E273B8A97049C1EL};/* VOLATILE GLOBAL l_805 */
                union U3 l_806 = {-1L};/* VOLATILE GLOBAL l_806 */
                union U1 l_807[2][7][6] = {{{{0x63EC58A4L},{0x1CC6850CL},{0x67338FC4L},{0x6B3B2EC5L},{0x67338FC4L},{0x1CC6850CL}},{{0x63EC58A4L},{0x1CC6850CL},{0x67338FC4L},{0x6B3B2EC5L},{0x67338FC4L},{0x1CC6850CL}},{{0x63EC58A4L},{0x1CC6850CL},{0x67338FC4L},{0x6B3B2EC5L},{0x67338FC4L},{0x1CC6850CL}},{{0x63EC58A4L},{0x1CC6850CL},{0x67338FC4L},{0x6B3B2EC5L},{0x67338FC4L},{0x1CC6850CL}},{{0x63EC58A4L},{0x1CC6850CL},{0x67338FC4L},{0x6B3B2EC5L},{0x67338FC4L},{0x1CC6850CL}},{{0x63EC58A4L},{0x1CC6850CL},{0x67338FC4L},{0x6B3B2EC5L},{0x67338FC4L},{0x1CC6850CL}},{{0x63EC58A4L},{0x1CC6850CL},{0x67338FC4L},{0x6B3B2EC5L},{0x67338FC4L},{0x1CC6850CL}}},{{{0x63EC58A4L},{0x1CC6850CL},{0x67338FC4L},{0x6B3B2EC5L},{0x67338FC4L},{0x1CC6850CL}},{{0x63EC58A4L},{0x1CC6850CL},{0x67338FC4L},{0x6B3B2EC5L},{0x67338FC4L},{0x1CC6850CL}},{{0x63EC58A4L},{0x1CC6850CL},{0x67338FC4L},{0x6B3B2EC5L},{0x67338FC4L},{0x1CC6850CL}},{{0x63EC58A4L},{0x1CC6850CL},{0x67338FC4L},{0x6B3B2EC5L},{0x67338FC4L},{0x1CC6850CL}},{{0x63EC58A4L},{0x1CC6850CL},{0x67338FC4L},{0x6B3B2EC5L},{0x67338FC4L},{0x1CC6850CL}},{{0x63EC58A4L},{0x1CC6850CL},{0x67338FC4L},{0x6B3B2EC5L},{0x67338FC4L},{0x1CC6850CL}},{{0x63EC58A4L},{0x1CC6850CL},{0x67338FC4L},{0x6B3B2EC5L},{0x67338FC4L},{0x1CC6850CL}}}};
                VECTOR(int32_t, 8) l_808 = (VECTOR(int32_t, 8))(0x0CF2913FL, (VECTOR(int32_t, 4))(0x0CF2913FL, (VECTOR(int32_t, 2))(0x0CF2913FL, 0x1947F440L), 0x1947F440L), 0x1947F440L, 0x0CF2913FL, 0x1947F440L);
                int64_t l_809 = (-2L);
                uint8_t l_810 = 1UL;
                uint32_t l_811 = 0x39EBE672L;
                VECTOR(int32_t, 2) l_812 = (VECTOR(int32_t, 2))(0x5DF2720AL, 0L);
                VECTOR(int32_t, 8) l_813 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x13186292L), 0x13186292L), 0x13186292L, 1L, 0x13186292L);
                uint16_t l_814 = 0UL;
                VECTOR(int32_t, 8) l_815 = (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, (-1L)), (-1L)), (-1L), 9L, (-1L));
                uint32_t l_816 = 4294967295UL;
                int i, j, k;
                if (((VECTOR(int32_t, 16))(l_747.xyyxxxxyxyyxxyxx)).s1)
                { /* block id: 398 */
                    int32_t l_748 = 0x07F1A389L;
                    for (l_748 = 5; (l_748 >= 21); l_748++)
                    { /* block id: 401 */
                        int32_t l_751[7][7][5] = {{{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)}},{{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)}},{{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)}},{{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)}},{{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)}},{{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)}},{{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)},{0x37170381L,(-1L),(-4L),(-2L),(-1L)}}};
                        uint64_t l_752 = 18446744073709551610UL;
                        int i, j, k;
                        --l_752;
                    }
                }
                else
                { /* block id: 404 */
                    int16_t l_755[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_755[i] = 0x42B8L;
                    if (l_755[0])
                    { /* block id: 405 */
                        int32_t l_757 = 1L;
                        int32_t *l_756 = &l_757;
                        int32_t *l_758 = (void*)0;
                        l_758 = l_756;
                    }
                    else
                    { /* block id: 407 */
                        int8_t l_759 = 0x51L;
                        uint32_t l_760 = 1UL;
                        l_760 = ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x40F12CD9L, 0x27B827B0L)))).xxyyyxxxyxxxyyyy, (int32_t)l_759))).sc;
                    }
                }
                if (((l_762[9][3][2] = (l_661[3] = ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(l_761.yxxzwyzyyyzzzwxx)).s86)), 0x34FB87F62A07DD51L, 1L)).y)) , (l_656[3] |= (l_747.y = l_763[7]))))
                { /* block id: 415 */
                    int32_t l_764 = 0x7E37F201L;
                    int32_t **l_776 = (void*)0;
                    uint16_t l_777[4];
                    struct S0 l_778 = {-8L,0x002F82FBD7F7D58CL,-1L,4UL,0L,0x8C4F48A6572D8ABEL,0xDA55L,-1L,1L};/* VOLATILE GLOBAL l_778 */
                    union U2 l_779 = {1UL};
                    struct S0 l_780 = {0x2DC412AB940E5195L,0x623069433159C100L,0x43C8BC78L,0UL,0x346F5751L,0xED0EACA2AFCB2C5BL,65526UL,0x5CA4E369L,0x2C28495E75DACDC5L};/* VOLATILE GLOBAL l_780 */
                    struct S0 l_781 = {0L,0x4E40572A9CB7D229L,0x6C941364L,5UL,0x2AA9B249L,0x6A413E5DF2DA72B9L,0xE775L,5L,-2L};/* VOLATILE GLOBAL l_781 */
                    int i;
                    for (i = 0; i < 4; i++)
                        l_777[i] = 0xB820L;
                    for (l_764 = (-24); (l_764 > (-19)); l_764 = safe_add_func_uint64_t_u_u(l_764, 4))
                    { /* block id: 418 */
                        uint32_t l_767 = 0UL;
                        uint32_t l_768[10][7] = {{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL}};
                        int32_t l_769[9] = {8L,8L,8L,8L,8L,8L,8L,8L,8L};
                        int16_t l_770 = (-1L);
                        int32_t l_771 = (-1L);
                        int32_t l_772 = (-5L);
                        uint64_t l_773[7][1][7] = {{{18446744073709551615UL,6UL,18446744073709551615UL,18446744073709551615UL,6UL,18446744073709551615UL,18446744073709551615UL}},{{18446744073709551615UL,6UL,18446744073709551615UL,18446744073709551615UL,6UL,18446744073709551615UL,18446744073709551615UL}},{{18446744073709551615UL,6UL,18446744073709551615UL,18446744073709551615UL,6UL,18446744073709551615UL,18446744073709551615UL}},{{18446744073709551615UL,6UL,18446744073709551615UL,18446744073709551615UL,6UL,18446744073709551615UL,18446744073709551615UL}},{{18446744073709551615UL,6UL,18446744073709551615UL,18446744073709551615UL,6UL,18446744073709551615UL,18446744073709551615UL}},{{18446744073709551615UL,6UL,18446744073709551615UL,18446744073709551615UL,6UL,18446744073709551615UL,18446744073709551615UL}},{{18446744073709551615UL,6UL,18446744073709551615UL,18446744073709551615UL,6UL,18446744073709551615UL,18446744073709551615UL}}};
                        int i, j, k;
                        l_657.z = l_767;
                        l_769[4] ^= l_768[6][5];
                        ++l_773[6][0][6];
                    }
                    l_776 = (void*)0;
                    l_781 = ((l_777[3] , l_778) , (l_779 , l_780));
                }
                else
                { /* block id: 425 */
                    int32_t l_783 = (-1L);
                    int32_t *l_782 = &l_783;
                    int32_t *l_784[2][8][2] = {{{&l_783,(void*)0},{&l_783,(void*)0},{&l_783,(void*)0},{&l_783,(void*)0},{&l_783,(void*)0},{&l_783,(void*)0},{&l_783,(void*)0},{&l_783,(void*)0}},{{&l_783,(void*)0},{&l_783,(void*)0},{&l_783,(void*)0},{&l_783,(void*)0},{&l_783,(void*)0},{&l_783,(void*)0},{&l_783,(void*)0},{&l_783,(void*)0}}};
                    int32_t *l_785 = &l_783;
                    int32_t *l_786[2];
                    int32_t *l_787[10] = {&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783};
                    int32_t l_788 = 0x3E649380L;
                    VECTOR(uint32_t, 8) l_789 = (VECTOR(uint32_t, 8))(0x211C4526L, (VECTOR(uint32_t, 4))(0x211C4526L, (VECTOR(uint32_t, 2))(0x211C4526L, 0x9E7E3DD8L), 0x9E7E3DD8L), 0x9E7E3DD8L, 0x211C4526L, 0x9E7E3DD8L);
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_786[i] = &l_783;
                    l_785 = (l_784[0][6][1] = l_782);
                    l_787[4] = l_786[1];
                    --l_789.s5;
                    for (l_788 = 0; (l_788 > (-17)); l_788--)
                    { /* block id: 432 */
                        struct S0 l_794 = {0x0F7C56FB1C216C18L,0UL,0x611D3907L,0x8A3828E6L,0x07E50E77L,0x88B4F52C6409B03DL,0xA00CL,0x1379A11DL,3L};/* VOLATILE GLOBAL l_794 */
                        struct S0 l_795 = {9L,0x6C0DC597EFF9674EL,0x4B661E27L,4294967295UL,0x046C26F6L,0x61DE4D1049A1A492L,65535UL,0x40724D2BL,0x69B2456D3E0596BFL};/* VOLATILE GLOBAL l_795 */
                        VECTOR(int32_t, 2) l_796 = (VECTOR(int32_t, 2))((-3L), 0L);
                        union U2 l_797 = {65534UL};
                        int32_t l_798 = 3L;
                        int8_t l_799 = 0x0DL;
                        uint32_t l_800 = 4UL;
                        uint32_t l_801 = 0x03D2B0A9L;
                        uint16_t l_802 = 65534UL;
                        int i;
                        l_795 = l_794;
                        l_802 ^= ((l_800 = (l_799 = (l_761.y = (l_661[0] = ((((VECTOR(int32_t, 8))(l_796.xyyxxyxx)).s7 , l_797) , l_798))))) , l_801);
                    }
                }
                l_676 ^= (((((VECTOR(uint32_t, 2))(l_803.s74)).odd , (l_804 , l_805)) , (FAKE_DIVERGE(p_1030->local_2_offset, get_local_id(2), 10) , (l_806 , l_807[0][2][5]))) , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_808.s01)), l_809, ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(0x20160453L, ((VECTOR(int32_t, 2))(0x6E8E907BL, 0x7A8E3C1CL)), 0x6E08B61BL)).even, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x515034F5L, 0x27C0F505L)).xyyyxxyyyxxxxyxx)).sdf))).hi, 0x4229DD52L, ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))((l_651.s6 = (l_811 = l_810)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(0x6D6255C9L, 0x644CBCBDL)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_812.yxyx)).xywxxzyx)))).s75, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_813.s3150657053437234)))).s9e, ((VECTOR(int32_t, 2))((-1L), 2L)))))))).xyxx)), (-9L), (-3L), 1L)).s15, ((VECTOR(int32_t, 16))((-3L), 0x12B78871L, l_814, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_815.s36104744)).s32)), 0x31C22EEFL, l_816, 0x1BBD8797L, ((VECTOR(int32_t, 8))(1L)))).s99, ((VECTOR(int32_t, 2))(0L))))), 0L)).s7);
            }
            l_657.x = l_817;
        }
        else
        { /* block id: 446 */
            int32_t l_818 = 1L;
            int64_t l_830 = 0x34AD3A90FF14BB27L;
            uint64_t l_831 = 18446744073709551615UL;
            VECTOR(int32_t, 16) l_834 = (VECTOR(int32_t, 16))(0x06DCAE37L, (VECTOR(int32_t, 4))(0x06DCAE37L, (VECTOR(int32_t, 2))(0x06DCAE37L, 1L), 1L), 1L, 0x06DCAE37L, 1L, (VECTOR(int32_t, 2))(0x06DCAE37L, 1L), (VECTOR(int32_t, 2))(0x06DCAE37L, 1L), 0x06DCAE37L, 1L, 0x06DCAE37L, 1L);
            int i;
            for (l_818 = (-13); (l_818 != 24); l_818 = safe_add_func_int32_t_s_s(l_818, 3))
            { /* block id: 449 */
                int16_t l_821 = 9L;
                uint16_t l_822 = 0x3094L;
                int32_t l_824[2][7] = {{0x53FDA818L,0x53FDA818L,(-10L),0x1835CBB7L,0x2B9B6038L,0x1835CBB7L,(-10L)},{0x53FDA818L,0x53FDA818L,(-10L),0x1835CBB7L,0x2B9B6038L,0x1835CBB7L,(-10L)}};
                int32_t *l_823[6] = {(void*)0,&l_824[0][0],(void*)0,(void*)0,&l_824[0][0],(void*)0};
                int32_t *l_825[5];
                int32_t *l_826 = (void*)0;
                uint8_t l_827 = 0x09L;
                int8_t l_828 = 0x2BL;
                int16_t l_829 = (-8L);
                int i, j;
                for (i = 0; i < 5; i++)
                    l_825[i] = &l_824[0][0];
                l_651.s7 &= (((VECTOR(uint32_t, 4))(0xF109EC2CL, 0x19AC3552L, 0x49167080L, 4294967295UL)).x , (l_821 = 0x04883A7FL));
                l_826 = (GROUP_DIVERGE(1, 1) , (l_825[0] = (l_823[0] = (((VECTOR(uint16_t, 16))(abs(((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 2))(3L, 0x496BL)).xxxxyyyx, (int16_t)l_822))).s2447256541456060))).sa , (void*)0))));
                l_829 = ((l_661[3] = (l_827 , (((VECTOR(int64_t, 2))(0x274AF7473F79E0E2L, (-2L))).odd , l_828))) , 1L);
            }
            --l_831;
            l_657.x |= ((VECTOR(int32_t, 16))(l_834.s0faf71500135576b)).s7;
        }
        unsigned int result = 0;
        result += l_651.s7;
        result += l_651.s6;
        result += l_651.s5;
        result += l_651.s4;
        result += l_651.s3;
        result += l_651.s2;
        result += l_651.s1;
        result += l_651.s0;
        int l_652_i0, l_652_i1, l_652_i2;
        for (l_652_i0 = 0; l_652_i0 < 2; l_652_i0++) {
            for (l_652_i1 = 0; l_652_i1 < 3; l_652_i1++) {
                for (l_652_i2 = 0; l_652_i2 < 2; l_652_i2++) {
                    result += l_652[l_652_i0][l_652_i1][l_652_i2];
                }
            }
        }
        result += l_653;
        result += l_654.y;
        result += l_654.x;
        result += l_655.s7;
        result += l_655.s6;
        result += l_655.s5;
        result += l_655.s4;
        result += l_655.s3;
        result += l_655.s2;
        result += l_655.s1;
        result += l_655.s0;
        int l_656_i0;
        for (l_656_i0 = 0; l_656_i0 < 6; l_656_i0++) {
            result += l_656[l_656_i0];
        }
        result += l_657.w;
        result += l_657.z;
        result += l_657.y;
        result += l_657.x;
        int l_658_i0;
        for (l_658_i0 = 0; l_658_i0 < 3; l_658_i0++) {
            result += l_658[l_658_i0];
        }
        result += l_659;
        result += l_660;
        int l_661_i0;
        for (l_661_i0 = 0; l_661_i0 < 7; l_661_i0++) {
            result += l_661[l_661_i0];
        }
        result += l_662;
        result += l_663;
        result += l_675;
        atomic_add(&p_1030->l_special_values[11], result);
    }
    else
    { /* block id: 461 */
        (1 + 1);
    }
    atomic_max(&p_1030->g_atomic_reduction[get_linear_group_id()], (*p_30));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_1030->v_collective += p_1030->g_atomic_reduction[get_linear_group_id()];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    (*p_1030->g_143) = (*p_1030->g_143);
    return l_835;
}


/* ------------------------------------------ */
/* 
 * reads : p_1030->g_67 p_1030->g_68
 * writes:
 */
int32_t * func_31(int32_t * p_32, uint32_t  p_33, uint64_t  p_34, int64_t  p_35, struct S4 * p_1030)
{ /* block id: 341 */
    return (*p_1030->g_67);
}


/* ------------------------------------------ */
/* 
 * reads : p_1030->g_67 p_1030->g_80 p_1030->g_83 p_1030->g_130 p_1030->g_99 p_1030->g_68 p_1030->g_143 p_1030->g_53 p_1030->g_85 p_1030->g_74 p_1030->g_76 p_1030->g_89 p_1030->g_253 p_1030->g_232.f3 p_1030->g_232.f0 p_1030->g_2 p_1030->g_159 p_1030->g_178 p_1030->g_179 p_1030->g_232.f5 p_1030->l_comm_values p_1030->g_297 p_1030->g_299 p_1030->g_183 p_1030->g_232 p_1030->g_320 p_1030->g_87 p_1030->g_324 p_1030->g_342 p_1030->g_343 p_1030->g_355 p_1030->g_357 p_1030->g_358 p_1030->g_361 p_1030->g_613 p_1030->g_624 p_1030->g_627 p_1030->g_182
 * writes: p_1030->g_68 p_1030->g_80 p_1030->g_85 p_1030->g_135 p_1030->g_130 p_1030->g_159 p_1030->g_89 p_1030->g_182 p_1030->g_264 p_1030->g_comm_values p_1030->g_295 p_1030->g_309 p_1030->g_53 p_1030->g_298 p_1030->g_87 p_1030->g_325 p_1030->g_83.f4 p_1030->g_76 p_1030->g_355 p_1030->g_83
 */
uint8_t  func_43(uint16_t  p_44, uint64_t  p_45, int32_t  p_46, int32_t * p_47, struct S4 * p_1030)
{ /* block id: 9 */
    uint64_t l_64 = 0x8FF013EC5CB58B1CL;
    union U2 l_65 = {65535UL};
    union U3 *l_614 = &p_1030->g_615;
    int32_t *l_616[1][8] = {{&p_1030->g_2,&p_1030->g_2,&p_1030->g_2,&p_1030->g_2,&p_1030->g_2,&p_1030->g_2,&p_1030->g_2,&p_1030->g_2}};
    union U1 l_617 = {6UL};
    int32_t **l_618 = (void*)0;
    int32_t **l_619 = &l_616[0][3];
    union U2 *l_639 = &l_65;
    int64_t *l_650 = &l_617.f1;
    int i, j;
    for (p_45 = 0; (p_45 != 13); p_45 = safe_add_func_int8_t_s_s(p_45, 9))
    { /* block id: 12 */
        int32_t *l_63[5][1][8] = {{{&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,(void*)0,&p_1030->g_53,(void*)0,&p_1030->g_53,&p_1030->g_53}},{{&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,(void*)0,&p_1030->g_53,(void*)0,&p_1030->g_53,&p_1030->g_53}},{{&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,(void*)0,&p_1030->g_53,(void*)0,&p_1030->g_53,&p_1030->g_53}},{{&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,(void*)0,&p_1030->g_53,(void*)0,&p_1030->g_53,&p_1030->g_53}},{{&p_1030->g_53,&p_1030->g_53,&p_1030->g_53,(void*)0,&p_1030->g_53,(void*)0,&p_1030->g_53,&p_1030->g_53}}};
        VECTOR(uint64_t, 16) l_362 = (VECTOR(uint64_t, 16))(18446744073709551614UL, (VECTOR(uint64_t, 4))(18446744073709551614UL, (VECTOR(uint64_t, 2))(18446744073709551614UL, 6UL), 6UL), 6UL, 18446744073709551614UL, 6UL, (VECTOR(uint64_t, 2))(18446744073709551614UL, 6UL), (VECTOR(uint64_t, 2))(18446744073709551614UL, 6UL), 18446744073709551614UL, 6UL, 18446744073709551614UL, 6UL);
        int i, j, k;
        (*p_1030->g_361) = func_56(func_59(l_63[4][0][4], l_64, l_65, p_1030), &p_1030->g_2, p_1030);
        if (l_362.sd)
            continue;
        for (p_1030->g_85 = (-19); (p_1030->g_85 > 11); ++p_1030->g_85)
        { /* block id: 189 */
            int32_t *l_365[1];
            int32_t **l_366 = &l_365[0];
            int i;
            for (i = 0; i < 1; i++)
                l_365[i] = (void*)0;
            (*l_366) = l_365[0];
        }
        if ((atomic_inc(&p_1030->l_atomic_input[16]) == 2))
        { /* block id: 193 */
            uint32_t l_367 = 0x8B29ECEFL;
            int64_t l_448 = (-1L);
            struct S0 l_542[6][8][1] = {{{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}}},{{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}}},{{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}}},{{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}}},{{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}}},{{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}},{{0x2DC4C98F6C3B076CL,0x05BDD5A1CF5DFF45L,-1L,0x496D258FL,9L,0xDED971FC0C83CB99L,1UL,6L,0x25B930BF279EF38AL}}}};
            struct S0 l_543 = {0x13617B81014FF18DL,1UL,0x6738E01DL,0xEA9D42FEL,-6L,0x68CE40C7F2A31280L,1UL,0x48147188L,0x3AAEAD5E174C5E53L};/* VOLATILE GLOBAL l_543 */
            int i, j, k;
            if (l_367)
            { /* block id: 194 */
                int32_t l_368[4][6][7] = {{{1L,(-7L),(-1L),(-7L),1L,0x510C14C1L,1L},{1L,(-7L),(-1L),(-7L),1L,0x510C14C1L,1L},{1L,(-7L),(-1L),(-7L),1L,0x510C14C1L,1L},{1L,(-7L),(-1L),(-7L),1L,0x510C14C1L,1L},{1L,(-7L),(-1L),(-7L),1L,0x510C14C1L,1L},{1L,(-7L),(-1L),(-7L),1L,0x510C14C1L,1L}},{{1L,(-7L),(-1L),(-7L),1L,0x510C14C1L,1L},{1L,(-7L),(-1L),(-7L),1L,0x510C14C1L,1L},{1L,(-7L),(-1L),(-7L),1L,0x510C14C1L,1L},{1L,(-7L),(-1L),(-7L),1L,0x510C14C1L,1L},{1L,(-7L),(-1L),(-7L),1L,0x510C14C1L,1L},{1L,(-7L),(-1L),(-7L),1L,0x510C14C1L,1L}},{{1L,(-7L),(-1L),(-7L),1L,0x510C14C1L,1L},{1L,(-7L),(-1L),(-7L),1L,0x510C14C1L,1L},{1L,(-7L),(-1L),(-7L),1L,0x510C14C1L,1L},{1L,(-7L),(-1L),(-7L),1L,0x510C14C1L,1L},{1L,(-7L),(-1L),(-7L),1L,0x510C14C1L,1L},{1L,(-7L),(-1L),(-7L),1L,0x510C14C1L,1L}},{{1L,(-7L),(-1L),(-7L),1L,0x510C14C1L,1L},{1L,(-7L),(-1L),(-7L),1L,0x510C14C1L,1L},{1L,(-7L),(-1L),(-7L),1L,0x510C14C1L,1L},{1L,(-7L),(-1L),(-7L),1L,0x510C14C1L,1L},{1L,(-7L),(-1L),(-7L),1L,0x510C14C1L,1L},{1L,(-7L),(-1L),(-7L),1L,0x510C14C1L,1L}}};
                struct S0 l_436 = {0x1B3C242C1077556AL,0xA9C1664A0943533AL,0x7944D35DL,0x68590BAFL,0x3CA97DC4L,18446744073709551608UL,65534UL,0L,-10L};/* VOLATILE GLOBAL l_436 */
                int16_t l_437 = 0x3D21L;
                int16_t l_438 = 0x3083L;
                int i, j, k;
                if (l_368[2][1][3])
                { /* block id: 195 */
                    uint16_t l_369 = 0x11BAL;
                    int16_t l_370 = (-3L);
                    int32_t l_372 = 0x74AAAAE3L;
                    int32_t *l_371 = &l_372;
                    int32_t *l_373 = &l_372;
                    uint8_t l_374[5] = {0x79L,0x79L,0x79L,0x79L,0x79L};
                    uint32_t l_375 = 4294967288UL;
                    int16_t l_376[3];
                    int16_t l_377 = 2L;
                    int8_t l_378 = (-1L);
                    VECTOR(int32_t, 4) l_379 = (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, (-3L)), (-3L));
                    int16_t l_380 = 0x2CA3L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_376[i] = 0x7B77L;
                    l_370 |= l_369;
                    l_373 = l_371;
                    l_375 = l_374[4];
                    if ((l_380 = (((l_376[0] , 0x3D52955BC8A1087FL) , (l_377 , l_378)) , ((VECTOR(int32_t, 8))(l_379.zwyxwwyw)).s6)))
                    { /* block id: 200 */
                        int8_t l_381 = 0L;
                        uint8_t l_382 = 0xE7L;
                        int64_t l_385 = (-3L);
                        int64_t l_386[7][2] = {{0x6C29FEED70FCFFF1L,0x6C29FEED70FCFFF1L},{0x6C29FEED70FCFFF1L,0x6C29FEED70FCFFF1L},{0x6C29FEED70FCFFF1L,0x6C29FEED70FCFFF1L},{0x6C29FEED70FCFFF1L,0x6C29FEED70FCFFF1L},{0x6C29FEED70FCFFF1L,0x6C29FEED70FCFFF1L},{0x6C29FEED70FCFFF1L,0x6C29FEED70FCFFF1L},{0x6C29FEED70FCFFF1L,0x6C29FEED70FCFFF1L}};
                        VECTOR(int32_t, 8) l_387 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 9L), 9L), 9L, 1L, 9L);
                        uint32_t l_388[10] = {0x672FE388L,0x672FE388L,0x672FE388L,0x672FE388L,0x672FE388L,0x672FE388L,0x672FE388L,0x672FE388L,0x672FE388L,0x672FE388L};
                        int i, j;
                        --l_382;
                        --l_388[1];
                        l_379.w &= ((*l_373) |= 0x6443973AL);
                    }
                    else
                    { /* block id: 205 */
                        VECTOR(int64_t, 2) l_391 = (VECTOR(int64_t, 2))(0x1066621561983AEEL, (-4L));
                        VECTOR(int32_t, 16) l_392 = (VECTOR(int32_t, 16))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x48435DCCL), 0x48435DCCL), 0x48435DCCL, 5L, 0x48435DCCL, (VECTOR(int32_t, 2))(5L, 0x48435DCCL), (VECTOR(int32_t, 2))(5L, 0x48435DCCL), 5L, 0x48435DCCL, 5L, 0x48435DCCL);
                        VECTOR(uint16_t, 8) l_395 = (VECTOR(uint16_t, 8))(65530UL, (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 0xDA52L), 0xDA52L), 0xDA52L, 65530UL, 0xDA52L);
                        struct S0 l_396 = {0L,0x03AE652AC1BFD926L,3L,0x91A64D30L,1L,0x4EAB486E3620E710L,1UL,1L,4L};/* VOLATILE GLOBAL l_396 */
                        uint64_t l_397 = 0x96AE1743009F0D68L;
                        VECTOR(uint16_t, 16) l_398 = (VECTOR(uint16_t, 16))(0x1A25L, (VECTOR(uint16_t, 4))(0x1A25L, (VECTOR(uint16_t, 2))(0x1A25L, 0x152EL), 0x152EL), 0x152EL, 0x1A25L, 0x152EL, (VECTOR(uint16_t, 2))(0x1A25L, 0x152EL), (VECTOR(uint16_t, 2))(0x1A25L, 0x152EL), 0x1A25L, 0x152EL, 0x1A25L, 0x152EL);
                        int64_t l_399 = 0x4C6E1062D46EE827L;
                        VECTOR(int8_t, 16) l_400 = (VECTOR(int8_t, 16))(9L, (VECTOR(int8_t, 4))(9L, (VECTOR(int8_t, 2))(9L, 0x7EL), 0x7EL), 0x7EL, 9L, 0x7EL, (VECTOR(int8_t, 2))(9L, 0x7EL), (VECTOR(int8_t, 2))(9L, 0x7EL), 9L, 0x7EL, 9L, 0x7EL);
                        VECTOR(uint16_t, 4) l_401 = (VECTOR(uint16_t, 4))(65527UL, (VECTOR(uint16_t, 2))(65527UL, 0x5880L), 0x5880L);
                        union U1 l_402[6] = {{9UL},{9UL},{9UL},{9UL},{9UL},{9UL}};
                        union U1 l_403 = {1UL};
                        VECTOR(uint16_t, 2) l_404 = (VECTOR(uint16_t, 2))(5UL, 65535UL);
                        int8_t l_405 = (-8L);
                        VECTOR(uint16_t, 2) l_406 = (VECTOR(uint16_t, 2))(65533UL, 0x8D8EL);
                        uint32_t l_407 = 0xF6BE3CA4L;
                        int32_t l_408 = 0x5BE4D7E6L;
                        int16_t l_409 = 0x3C6AL;
                        uint16_t l_410 = 0xF60FL;
                        int64_t l_411 = 0x70F119FD104B6E8DL;
                        int8_t l_412 = (-6L);
                        int8_t l_413[9][5][5];
                        int16_t l_414[5];
                        int16_t *l_416 = (void*)0;
                        int16_t **l_415 = &l_416;
                        int16_t **l_417 = &l_416;
                        int i, j, k;
                        for (i = 0; i < 9; i++)
                        {
                            for (j = 0; j < 5; j++)
                            {
                                for (k = 0; k < 5; k++)
                                    l_413[i][j][k] = 0x59L;
                            }
                        }
                        for (i = 0; i < 5; i++)
                            l_414[i] = 0x70BDL;
                        l_379.w |= ((*l_371) |= (((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(safe_clamp_func(VECTOR(int64_t, 4),VECTOR(int64_t, 4),((VECTOR(int64_t, 2))(0L, 0x5E3FD4DAF73F0B1DL)).xxxx, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x4E11890916964727L, 0x02B4F59D98852E95L)), (-7L), 0x670FFB75DE2EF211L)), ((VECTOR(int64_t, 8))(l_391.xyyxxxyy)).lo))), ((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 16))(upsample(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 2))(0x46591D6EL, 9L)).xxxyyxxxxyxxxyyx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_392.s85183eca2a3cc7c3)).s790d)).xzwzzzxxxyzyzwxx))).lo)).s7236317071534366, ((VECTOR(uint32_t, 4))(safe_clamp_func(VECTOR(uint32_t, 4),uint32_t,((VECTOR(uint32_t, 8))((l_375++), 0UL, ((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_395.s53661772)), (l_396 , (l_369 = 0x8E43L)), 0x4E7FL, 0xC4A8L, l_397, ((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 8))(l_398.s3fef56cc)).lo, ((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 8))(1UL, l_399, 65528UL, 0xC794L, ((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0x47L, 0xF9L)).xyyxxyyxxxyyxxyx)).s2508, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(abs(((VECTOR(int8_t, 16))(l_400.sb5696c67d3f3af64))))).s0002))))), ((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 16))(5UL, 0UL, ((VECTOR(uint16_t, 4))(l_401.zwzz)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(8UL, 0x49FCL)).yxxy)), 65535UL, ((l_403 = l_402[2]) , ((VECTOR(uint16_t, 2))(l_404.yy)).odd), l_405, 65535UL, 65535UL, 0x3FD8L)).odd, (uint16_t)((VECTOR(uint16_t, 16))(l_406.yxxyxxyxyxxyyxxy)).s6))).lo))))).hi, ((VECTOR(uint16_t, 16))(l_407, ((VECTOR(uint16_t, 2))(0xDDE3L)), l_408, ((VECTOR(uint16_t, 4))(1UL)), l_409, 6UL, 8UL, l_410, FAKE_DIVERGE(p_1030->global_1_offset, get_global_id(1), 10), l_411, 0xFE1CL, 0x9C12L)).sf4dd))).ywxywwzwzzzyxywz)).s9a04, ((VECTOR(uint16_t, 4))(0x8F80L)), ((VECTOR(uint16_t, 4))(0UL)))))))))).s5cce, ((VECTOR(uint16_t, 4))(1UL))))).odd))), ((VECTOR(uint32_t, 2))(1UL)), 4UL, 0x4A6B6E76L)).hi, (uint32_t)l_412, (uint32_t)l_413[8][3][2]))).zzzxwxxxywzyywww))).s3f, ((VECTOR(int64_t, 2))(0x35B223BC8A3F6CF7L))))), 0x789C0B83537C4BC9L, 0x0052521146E6E1D1L)).s53)), 0x31F88BDE1A703830L, 0x070F2B8F5A80E56BL, ((VECTOR(int64_t, 2))(0x4E28BED0FBC4AC5FL)), 0x258B776BB6391FBAL, 0x158B8F9F22E42C79L)).s0 , l_414[0]));
                        (*l_373) = 0x3F07376AL;
                        l_417 = l_415;
                    }
                }
                else
                { /* block id: 214 */
                    struct S0 l_418[10] = {{6L,0x9CDA7E6F5E8B3CF9L,1L,0x268FDAC4L,1L,0x2730DAC72CA895AAL,0xAD06L,0x1E9EB4A1L,-9L},{-1L,1UL,8L,1UL,0x381BEB09L,2UL,7UL,0x0E0DEC91L,1L},{-8L,8UL,0x281169F8L,0xDE32D066L,0x1AB62A0CL,18446744073709551615UL,0x7059L,0x7F710316L,1L},{-1L,1UL,8L,1UL,0x381BEB09L,2UL,7UL,0x0E0DEC91L,1L},{6L,0x9CDA7E6F5E8B3CF9L,1L,0x268FDAC4L,1L,0x2730DAC72CA895AAL,0xAD06L,0x1E9EB4A1L,-9L},{6L,0x9CDA7E6F5E8B3CF9L,1L,0x268FDAC4L,1L,0x2730DAC72CA895AAL,0xAD06L,0x1E9EB4A1L,-9L},{-1L,1UL,8L,1UL,0x381BEB09L,2UL,7UL,0x0E0DEC91L,1L},{-8L,8UL,0x281169F8L,0xDE32D066L,0x1AB62A0CL,18446744073709551615UL,0x7059L,0x7F710316L,1L},{-1L,1UL,8L,1UL,0x381BEB09L,2UL,7UL,0x0E0DEC91L,1L},{6L,0x9CDA7E6F5E8B3CF9L,1L,0x268FDAC4L,1L,0x2730DAC72CA895AAL,0xAD06L,0x1E9EB4A1L,-9L}};
                    struct S0 l_419 = {0x7F17826CDBBA88CDL,18446744073709551611UL,0x5ACEDEFAL,9UL,0x3E480206L,18446744073709551608UL,1UL,0x48EF328EL,0x74BFC2FA0C794C4FL};/* VOLATILE GLOBAL l_419 */
                    int32_t l_430 = 0x3250DDDAL;
                    int32_t l_431 = 5L;
                    int32_t l_432 = 0x57396FA3L;
                    VECTOR(uint32_t, 16) l_433 = (VECTOR(uint32_t, 16))(4UL, (VECTOR(uint32_t, 4))(4UL, (VECTOR(uint32_t, 2))(4UL, 4294967291UL), 4294967291UL), 4294967291UL, 4UL, 4294967291UL, (VECTOR(uint32_t, 2))(4UL, 4294967291UL), (VECTOR(uint32_t, 2))(4UL, 4294967291UL), 4UL, 4294967291UL, 4UL, 4294967291UL);
                    int i;
                    l_419 = l_418[8];
                    for (l_418[8].f4 = (-12); (l_418[8].f4 < (-7)); l_418[8].f4 = safe_add_func_uint8_t_u_u(l_418[8].f4, 3))
                    { /* block id: 218 */
                        uint32_t l_422 = 1UL;
                        int8_t l_425[2];
                        uint8_t l_426[4];
                        VECTOR(int32_t, 2) l_427 = (VECTOR(int32_t, 2))(0x40476E92L, 0x2BBA6A9AL);
                        VECTOR(uint16_t, 4) l_428 = (VECTOR(uint16_t, 4))(0x851EL, (VECTOR(uint16_t, 2))(0x851EL, 7UL), 7UL);
                        uint16_t l_429 = 0x5810L;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_425[i] = 1L;
                        for (i = 0; i < 4; i++)
                            l_426[i] = 1UL;
                        --l_422;
                        l_426[0] ^= l_425[0];
                        l_427.x = ((VECTOR(int32_t, 4))(l_427.yyxy)).z;
                        l_427.y ^= (((VECTOR(uint16_t, 16))(l_428.zxwxxzyxxzyxwzyy)).s1 , l_429);
                    }
                    l_430 |= 0x2384A119L;
                    ++l_433.sd;
                }
                l_438 = (l_436 , l_437);
            }
            else
            { /* block id: 228 */
                int8_t l_439 = 4L;
                int16_t l_440 = 6L;
                struct S0 l_441 = {0x5A0C63FABA53AB1CL,8UL,0x51DFEC58L,0x255F64C7L,0x65EE380DL,0UL,0x6ADAL,5L,-8L};/* VOLATILE GLOBAL l_441 */
                uint16_t l_442 = 65535UL;
                union U1 l_443 = {9UL};
                union U1 l_444 = {0x4D83A56AL};
                union U3 l_446 = {1L};/* VOLATILE GLOBAL l_446 */
                union U3 *l_445 = &l_446;
                union U3 *l_447 = &l_446;
                l_447 = ((l_439 = FAKE_DIVERGE(p_1030->group_0_offset, get_group_id(0), 10)) , ((((l_440 , l_441) , l_442) , (l_444 = l_443)) , (GROUP_DIVERGE(0, 1) , l_445)));
            }
            if (l_448)
            { /* block id: 233 */
                int32_t l_449 = (-1L);
                int32_t l_456 = (-1L);
                uint32_t l_457 = 0xFF3328B0L;
                VECTOR(int64_t, 4) l_458 = (VECTOR(int64_t, 4))(0x1CEC3F0370C707C9L, (VECTOR(int64_t, 2))(0x1CEC3F0370C707C9L, 0x140C6A24997B6C1FL), 0x140C6A24997B6C1FL);
                int16_t l_459 = 1L;
                int16_t l_460 = 0x6469L;
                int16_t l_461 = (-3L);
                int16_t l_462 = 8L;
                int16_t l_463 = 0x037AL;
                int i;
                for (l_449 = 0; (l_449 < (-19)); l_449 = safe_sub_func_int8_t_s_s(l_449, 7))
                { /* block id: 236 */
                    VECTOR(int64_t, 8) l_452 = (VECTOR(int64_t, 8))(0x18493204877CFFDCL, (VECTOR(int64_t, 4))(0x18493204877CFFDCL, (VECTOR(int64_t, 2))(0x18493204877CFFDCL, 0x5C70A3B843A4A357L), 0x5C70A3B843A4A357L), 0x5C70A3B843A4A357L, 0x18493204877CFFDCL, 0x5C70A3B843A4A357L);
                    int32_t l_454[6] = {0x23BE520DL,0x23BE520DL,0x23BE520DL,0x23BE520DL,0x23BE520DL,0x23BE520DL};
                    int32_t *l_453 = &l_454[4];
                    int8_t l_455 = 6L;
                    int i;
                    l_453 = ((l_452.s5 = ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(l_452.s6303)).yxzzwwxxwzxyyzxw)).sd5)).even) , (void*)0);
                    l_455 = 0x6DABB25CL;
                }
                l_449 ^= (l_457 = l_456);
                l_459 &= (l_449 = (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(l_458.yzxzxyyzwxxzyxxw)))).s81de)).y , 0x29909DE1L));
                if (((l_460 , (l_463 ^= ((VECTOR(uint16_t, 4))((l_462 = l_461), ((VECTOR(uint16_t, 2))(65535UL, 65534UL)), 0x289EL)).w)) , 0x71BC6094L))
                { /* block id: 247 */
                    struct S0 l_464 = {0x6EF23E98FCCAFC29L,0xDDBD2D8FBFE3C356L,0L,0x6633873DL,0x27856D32L,18446744073709551613UL,65535UL,0x60AEEFF4L,-4L};/* VOLATILE GLOBAL l_464 */
                    struct S0 l_465 = {-1L,0UL,0x1183C5CFL,4294967290UL,-6L,0x673E7C2F96D71C37L,0x3B93L,0x370149ABL,0x7CF06569B85AA373L};/* VOLATILE GLOBAL l_465 */
                    uint8_t l_466 = 4UL;
                    VECTOR(int32_t, 8) l_467 = (VECTOR(int32_t, 8))(0x4F35BC40L, (VECTOR(int32_t, 4))(0x4F35BC40L, (VECTOR(int32_t, 2))(0x4F35BC40L, 1L), 1L), 1L, 0x4F35BC40L, 1L);
                    VECTOR(int32_t, 4) l_468 = (VECTOR(int32_t, 4))(0x559934A1L, (VECTOR(int32_t, 2))(0x559934A1L, 1L), 1L);
                    VECTOR(int32_t, 16) l_469 = (VECTOR(int32_t, 16))(0x0E48B3C6L, (VECTOR(int32_t, 4))(0x0E48B3C6L, (VECTOR(int32_t, 2))(0x0E48B3C6L, 0x65EF1B0BL), 0x65EF1B0BL), 0x65EF1B0BL, 0x0E48B3C6L, 0x65EF1B0BL, (VECTOR(int32_t, 2))(0x0E48B3C6L, 0x65EF1B0BL), (VECTOR(int32_t, 2))(0x0E48B3C6L, 0x65EF1B0BL), 0x0E48B3C6L, 0x65EF1B0BL, 0x0E48B3C6L, 0x65EF1B0BL);
                    VECTOR(int32_t, 8) l_470 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x21A31EFAL), 0x21A31EFAL), 0x21A31EFAL, 0L, 0x21A31EFAL);
                    VECTOR(int32_t, 2) l_471 = (VECTOR(int32_t, 2))(0L, 2L);
                    VECTOR(int32_t, 16) l_472 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x7DEE6AE2L), 0x7DEE6AE2L), 0x7DEE6AE2L, 0L, 0x7DEE6AE2L, (VECTOR(int32_t, 2))(0L, 0x7DEE6AE2L), (VECTOR(int32_t, 2))(0L, 0x7DEE6AE2L), 0L, 0x7DEE6AE2L, 0L, 0x7DEE6AE2L);
                    VECTOR(int32_t, 16) l_473 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int32_t, 2))(0L, 1L), (VECTOR(int32_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
                    VECTOR(int32_t, 2) l_474 = (VECTOR(int32_t, 2))(0L, 6L);
                    VECTOR(int32_t, 4) l_475 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L);
                    VECTOR(int32_t, 8) l_476 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-3L)), (-3L)), (-3L), 1L, (-3L));
                    VECTOR(int32_t, 2) l_477 = (VECTOR(int32_t, 2))(0x2CDCF11DL, 0x1DAD47ABL);
                    VECTOR(int32_t, 16) l_478 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int32_t, 2))((-1L), 1L), (VECTOR(int32_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L);
                    VECTOR(int32_t, 16) l_479 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int32_t, 2))((-1L), 0L), (VECTOR(int32_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
                    VECTOR(int32_t, 8) l_480 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 2L), 2L), 2L, 1L, 2L);
                    int64_t l_488 = (-1L);
                    VECTOR(int32_t, 8) l_489 = (VECTOR(int32_t, 8))(0x7AC47CE8L, (VECTOR(int32_t, 4))(0x7AC47CE8L, (VECTOR(int32_t, 2))(0x7AC47CE8L, 0x2F239DD3L), 0x2F239DD3L), 0x2F239DD3L, 0x7AC47CE8L, 0x2F239DD3L);
                    VECTOR(int32_t, 8) l_490 = (VECTOR(int32_t, 8))(0x37CACB87L, (VECTOR(int32_t, 4))(0x37CACB87L, (VECTOR(int32_t, 2))(0x37CACB87L, 0x78D427FCL), 0x78D427FCL), 0x78D427FCL, 0x37CACB87L, 0x78D427FCL);
                    VECTOR(int32_t, 2) l_491 = (VECTOR(int32_t, 2))(0L, (-2L));
                    VECTOR(int32_t, 16) l_492 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 8L), 8L), 8L, 1L, 8L, (VECTOR(int32_t, 2))(1L, 8L), (VECTOR(int32_t, 2))(1L, 8L), 1L, 8L, 1L, 8L);
                    VECTOR(int32_t, 16) l_493 = (VECTOR(int32_t, 16))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x4394E763L), 0x4394E763L), 0x4394E763L, (-5L), 0x4394E763L, (VECTOR(int32_t, 2))((-5L), 0x4394E763L), (VECTOR(int32_t, 2))((-5L), 0x4394E763L), (-5L), 0x4394E763L, (-5L), 0x4394E763L);
                    VECTOR(int32_t, 16) l_494 = (VECTOR(int32_t, 16))(0x6A6BDFB8L, (VECTOR(int32_t, 4))(0x6A6BDFB8L, (VECTOR(int32_t, 2))(0x6A6BDFB8L, 0x25169788L), 0x25169788L), 0x25169788L, 0x6A6BDFB8L, 0x25169788L, (VECTOR(int32_t, 2))(0x6A6BDFB8L, 0x25169788L), (VECTOR(int32_t, 2))(0x6A6BDFB8L, 0x25169788L), 0x6A6BDFB8L, 0x25169788L, 0x6A6BDFB8L, 0x25169788L);
                    VECTOR(int32_t, 2) l_495 = (VECTOR(int32_t, 2))(0x216A2FAEL, (-1L));
                    VECTOR(int32_t, 4) l_496 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-3L)), (-3L));
                    int i;
                    l_465 = l_464;
                    if ((l_466 , ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_467.s30)), 0x5CF79224L, 0x5EDE8C53L)).hi, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 4))(1L, 0L, 1L, 1L)).yxxywxwx, ((VECTOR(int32_t, 2))((-3L), 0x30BB54C6L)).yxyyxxyx))).s35, ((VECTOR(int32_t, 4))(l_468.xwyx)).lo))), ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(7L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_469.s4582e505)).s35)), (-10L))).hi, ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_470.s43)).odd, ((VECTOR(int32_t, 2))(l_471.yy)).even, 0x7981EF3AL, 0x390D7ABCL, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_472.s941aa371)).s5617624455736676)))).sdb)).xxyyxyxxyxyyxxxx)).s9ec2)), 0x09B9E8ADL, (-2L), 0x75DB47E8L, 0x60EC834DL)).s0653471075657155, ((VECTOR(int32_t, 8))(0x5793492BL, (-4L), (-7L), 0L, ((VECTOR(int32_t, 4))(l_473.sa23c)))).s0522407442426267, ((VECTOR(int32_t, 2))(l_474.yy)).yyxxxyyxyyxyxyxy))).s5c4f)), ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 16))(l_475.yzyzywyyyyyyxwxz)).lo, ((VECTOR(int32_t, 8))(l_476.s55205371))))), (-1L), ((VECTOR(int32_t, 2))(l_477.yy)), 1L)).s05)), 0x53ECE312L, 3L)).even)), ((VECTOR(int32_t, 8))(l_478.sc476055a)), 0x245D39CDL, 0x5058C0CAL)), ((VECTOR(int32_t, 2))(l_479.s53)).xyxxxyxyyxyxyyxx))).hi, ((VECTOR(int32_t, 16))(l_480.s6522301223057033)).odd))).s10))), ((VECTOR(int32_t, 2))(0x3FC28754L, 0x6C011439L)), (-1L), (-7L))))).s74))).lo))
                    { /* block id: 249 */
                        int32_t l_482 = 0x38C580D7L;
                        int32_t *l_481 = &l_482;
                        int32_t *l_483[2];
                        int32_t *l_484 = &l_482;
                        int8_t l_485 = 0x29L;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_483[i] = &l_482;
                        l_484 = (l_483[0] = l_481);
                        l_478.sd |= l_485;
                    }
                    else
                    { /* block id: 253 */
                        int32_t l_486 = 0x7F49B7C8L;
                        int32_t l_487 = 0x730F2A14L;
                        l_487 ^= l_486;
                    }
                    l_478.sc &= l_488;
                    l_449 ^= ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 8))(l_489.s16023717)).s7547621146260167, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(7L, 0x21867590L)).even, ((VECTOR(int32_t, 2))(l_490.s26)), 3L)).wxwwzzzzxyxyxyzz))).s9e85, ((VECTOR(int32_t, 2))((-10L), 0x2CEFACB6L)).yxyx))).wxzxwxyyzzywyyzy, ((VECTOR(int32_t, 4))(l_491.yxyx)).zwwyzwxwxzwxwwyx))).s40, ((VECTOR(int32_t, 16))(l_492.s0d899bfd21a4caea)).s27, ((VECTOR(int32_t, 16))(1L, ((VECTOR(int32_t, 8))(l_493.s67d63367)), 0L, ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(l_494.sed1f)), ((VECTOR(int32_t, 8))(l_495.yyyyyxyy)).lo))), ((VECTOR(int32_t, 2))(l_496.zy)).xyyy))), (-1L), (-5L))).sb2))).hi;
                }
                else
                { /* block id: 258 */
                    int8_t l_497 = (-2L);
                    int32_t l_498 = 3L;
                    int32_t *l_499 = (void*)0;
                    int32_t *l_500 = (void*)0;
                    VECTOR(int32_t, 4) l_501 = (VECTOR(int32_t, 4))(0x328E51A6L, (VECTOR(int32_t, 2))(0x328E51A6L, (-1L)), (-1L));
                    union U2 l_503 = {65535UL};
                    union U2 *l_502 = &l_503;
                    union U2 *l_504[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_504[i] = (void*)0;
                    l_449 = l_497;
                    l_500 = (l_498 , l_499);
                    l_449 |= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_501.xwzwwyzzxwzxyyzx)))).s4;
                    l_504[2] = l_502;
                }
            }
            else
            { /* block id: 264 */
                int32_t l_505 = 1L;
                VECTOR(uint64_t, 2) l_528 = (VECTOR(uint64_t, 2))(18446744073709551611UL, 0x20F66A41128F6D0DL);
                uint32_t l_529 = 0xDA023123L;
                int16_t l_530 = (-1L);
                int32_t l_541 = (-1L);
                int i;
                for (l_505 = 0; (l_505 < (-13)); --l_505)
                { /* block id: 267 */
                    union U3 l_508 = {0x235736B420FD6916L};/* VOLATILE GLOBAL l_508 */
                    VECTOR(int64_t, 16) l_509 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x362C3B61BCF45741L), 0x362C3B61BCF45741L), 0x362C3B61BCF45741L, (-1L), 0x362C3B61BCF45741L, (VECTOR(int64_t, 2))((-1L), 0x362C3B61BCF45741L), (VECTOR(int64_t, 2))((-1L), 0x362C3B61BCF45741L), (-1L), 0x362C3B61BCF45741L, (-1L), 0x362C3B61BCF45741L);
                    VECTOR(int64_t, 2) l_510 = (VECTOR(int64_t, 2))(0L, 0x088C6D6EA91B7DD3L);
                    VECTOR(int64_t, 4) l_511 = (VECTOR(int64_t, 4))(0x25C154EB16C85652L, (VECTOR(int64_t, 2))(0x25C154EB16C85652L, 0x29DDE8D3A537B698L), 0x29DDE8D3A537B698L);
                    int32_t l_512 = 1L;
                    int16_t l_513 = 0L;
                    VECTOR(int64_t, 2) l_514 = (VECTOR(int64_t, 2))(0x1C73FB98D85EF4EEL, 0x317050E87A00E1C9L);
                    VECTOR(int32_t, 4) l_515 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 8L), 8L);
                    VECTOR(int8_t, 2) l_516 = (VECTOR(int8_t, 2))(0x54L, 1L);
                    uint32_t l_517 = 4UL;
                    uint16_t l_518 = 0x254BL;
                    VECTOR(int32_t, 16) l_519 = (VECTOR(int32_t, 16))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x6378E820L), 0x6378E820L), 0x6378E820L, (-3L), 0x6378E820L, (VECTOR(int32_t, 2))((-3L), 0x6378E820L), (VECTOR(int32_t, 2))((-3L), 0x6378E820L), (-3L), 0x6378E820L, (-3L), 0x6378E820L);
                    uint8_t l_520 = 0x87L;
                    uint8_t l_521 = 0UL;
                    int32_t l_522 = 0x201531B8L;
                    int64_t l_523 = 1L;
                    uint16_t l_524 = 0xBA0EL;
                    uint16_t l_525 = 0UL;
                    VECTOR(uint8_t, 8) l_526 = (VECTOR(uint8_t, 8))(0x81L, (VECTOR(uint8_t, 4))(0x81L, (VECTOR(uint8_t, 2))(0x81L, 0x12L), 0x12L), 0x12L, 0x81L, 0x12L);
                    int16_t l_527 = 0x467FL;
                    int i;
                    l_527 &= ((l_508 , ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 2))((-3L), (-8L))).yyyy, ((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),int64_t,((VECTOR(int64_t, 2))(l_509.s89)).yyyxyxxy, (int64_t)(l_525 = ((VECTOR(int64_t, 8))(clz(((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 16))(l_510.yxyyyxxxxxyxxxxy)).odd, ((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 4))(safe_clamp_func(VECTOR(int64_t, 4),int64_t,((VECTOR(int64_t, 4))(l_511.yyyw)), (int64_t)(l_448 |= l_512), (int64_t)l_513))), (int64_t)0L))).wyyzxwxy))).odd, ((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(l_514.xyxyyxxyxyyyxxyx)).sa, 0x304474553793FE12L, 0x4A39AA893CA9544BL, ((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(0x56653F61AF4C7EACL, 0x718EAA17D490F0D7L, 0x6F3C70F7DE2A4439L, 0x4BE0EFB71D098B0BL)).wxwwzxwxwyyxyzxx)))).s4713, ((VECTOR(int64_t, 2))(1L, 1L)).xxyy))).hi, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 16))(l_515.xxwzwzzzzwwxxzyx)).odd, ((VECTOR(uint32_t, 4))(4294967290UL, 0xB7F63409L, 4294967288UL, 0x82740F17L)).wwyzxxwx))).s2343135371153237)).hi)))).s53))), (((VECTOR(int8_t, 16))(l_516.xxyxyyyxyxyxyyxy)).sc , (l_517 , (l_518 , (l_448 = ((l_522 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_519.s1f)), (l_521 = l_520), 5L, 0x35E365CEL, ((VECTOR(int32_t, 8))(0x760DD326L)), 0x244B930DL, (-1L), 0L)).odd)).s3027165633664056)).s2) , l_523))))), l_524, 3L, ((VECTOR(int64_t, 8))(8L)))).s37, ((VECTOR(int64_t, 2))((-1L)))))), ((VECTOR(int64_t, 2))(6L))))).xxxx))).yzzxwxwx))).s1), (int64_t)0x3C005C1A97D718C9L))).s5365250267532276, ((VECTOR(int64_t, 16))(0L)), ((VECTOR(int64_t, 16))((-1L)))))).s2a3c))), 6L, 0x0C1A0A740A466B94L, 2L, 0x40A51C73574934A4L)).s3) , l_526.s5);
                }
                if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((l_529 = l_528.y), (l_530 |= 0x39B784A3L), 9L, 0x56051CB9L)).wxxxwzyy)).s1)
                { /* block id: 277 */
                    uint64_t l_531 = 2UL;
                    struct S0 l_534 = {0x4269D220163E8F9CL,18446744073709551609UL,1L,0x4BBF4A6FL,0x1FABD42FL,18446744073709551609UL,0xF440L,0x1D204840L,0x5484B67604994291L};/* VOLATILE GLOBAL l_534 */
                    struct S0 l_535 = {1L,3UL,0x07D0078AL,4UL,-1L,0UL,65535UL,-1L,0x0D7E968BD80D82F4L};/* VOLATILE GLOBAL l_535 */
                    int64_t l_536 = 1L;
                    l_531++;
                    l_535 = l_534;
                    l_505 |= l_536;
                }
                else
                { /* block id: 281 */
                    VECTOR(int16_t, 16) l_537 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x035CL), 0x035CL), 0x035CL, 1L, 0x035CL, (VECTOR(int16_t, 2))(1L, 0x035CL), (VECTOR(int16_t, 2))(1L, 0x035CL), 1L, 0x035CL, 1L, 0x035CL);
                    uint32_t l_538 = 0xA831EF4FL;
                    int16_t l_539 = 0x36E2L;
                    VECTOR(int32_t, 16) l_540 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int32_t, 2))(1L, 1L), (VECTOR(int32_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
                    int i;
                    l_505 = (((VECTOR(int16_t, 4))(l_537.s8e6e)).z , ((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(0L, 0x52AF6540L, (l_538 , l_539), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))((-6L), 7L)).yxxy, ((VECTOR(int32_t, 4))(0L, 4L, 0x3CDEE243L, 0x08109167L))))).yyyxxwzwxwzzwyxz)).odd)).even)), 0x7DF6A797L)).s2202335615104226, ((VECTOR(int32_t, 8))(l_540.sb13a50fe)).s6236347277302573))).sc);
                }
                l_541 ^= 0x6D0AE848L;
            }
            l_543 = l_542[1][2][0];
            for (l_448 = (-26); (l_448 > (-15)); l_448 = safe_add_func_uint8_t_u_u(l_448, 4))
            { /* block id: 289 */
                struct S0 l_546[7] = {{1L,0x0E588D65FF8BB74FL,0x57077ADBL,7UL,0x17A0A00BL,9UL,0xFD24L,2L,0x78735C8C4A257351L},{1L,0x0E588D65FF8BB74FL,0x57077ADBL,7UL,0x17A0A00BL,9UL,0xFD24L,2L,0x78735C8C4A257351L},{1L,0x0E588D65FF8BB74FL,0x57077ADBL,7UL,0x17A0A00BL,9UL,0xFD24L,2L,0x78735C8C4A257351L},{1L,0x0E588D65FF8BB74FL,0x57077ADBL,7UL,0x17A0A00BL,9UL,0xFD24L,2L,0x78735C8C4A257351L},{1L,0x0E588D65FF8BB74FL,0x57077ADBL,7UL,0x17A0A00BL,9UL,0xFD24L,2L,0x78735C8C4A257351L},{1L,0x0E588D65FF8BB74FL,0x57077ADBL,7UL,0x17A0A00BL,9UL,0xFD24L,2L,0x78735C8C4A257351L},{1L,0x0E588D65FF8BB74FL,0x57077ADBL,7UL,0x17A0A00BL,9UL,0xFD24L,2L,0x78735C8C4A257351L}};
                int32_t l_547[5] = {(-3L),(-3L),(-3L),(-3L),(-3L)};
                int32_t l_548 = 0L;
                int8_t l_549 = 0x55L;
                uint16_t l_550 = 65535UL;
                int64_t l_551[5];
                int32_t *l_552 = &l_547[3];
                int32_t *l_553 = &l_547[2];
                uint8_t l_554[3][8][4] = {{{5UL,1UL,0x17L,0x32L},{5UL,1UL,0x17L,0x32L},{5UL,1UL,0x17L,0x32L},{5UL,1UL,0x17L,0x32L},{5UL,1UL,0x17L,0x32L},{5UL,1UL,0x17L,0x32L},{5UL,1UL,0x17L,0x32L},{5UL,1UL,0x17L,0x32L}},{{5UL,1UL,0x17L,0x32L},{5UL,1UL,0x17L,0x32L},{5UL,1UL,0x17L,0x32L},{5UL,1UL,0x17L,0x32L},{5UL,1UL,0x17L,0x32L},{5UL,1UL,0x17L,0x32L},{5UL,1UL,0x17L,0x32L},{5UL,1UL,0x17L,0x32L}},{{5UL,1UL,0x17L,0x32L},{5UL,1UL,0x17L,0x32L},{5UL,1UL,0x17L,0x32L},{5UL,1UL,0x17L,0x32L},{5UL,1UL,0x17L,0x32L},{5UL,1UL,0x17L,0x32L},{5UL,1UL,0x17L,0x32L},{5UL,1UL,0x17L,0x32L}}};
                int8_t l_608 = 0x72L;
                int32_t l_609 = 0x49BD5E22L;
                uint32_t l_610 = 4294967295UL;
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_551[i] = 0x708843F41AAD7B7CL;
                l_551[4] &= ((l_546[0] , (l_549 = (l_547[2] , l_548))) , l_550);
                l_553 = l_552;
                if (l_554[1][0][1])
                { /* block id: 293 */
                    VECTOR(uint8_t, 8) l_555 = (VECTOR(uint8_t, 8))(0x0DL, (VECTOR(uint8_t, 4))(0x0DL, (VECTOR(uint8_t, 2))(0x0DL, 0x79L), 0x79L), 0x79L, 0x0DL, 0x79L);
                    VECTOR(uint8_t, 8) l_556 = (VECTOR(uint8_t, 8))(0xBBL, (VECTOR(uint8_t, 4))(0xBBL, (VECTOR(uint8_t, 2))(0xBBL, 255UL), 255UL), 255UL, 0xBBL, 255UL);
                    VECTOR(int32_t, 4) l_557 = (VECTOR(int32_t, 4))(0x386EAE1CL, (VECTOR(int32_t, 2))(0x386EAE1CL, 0x17CD8809L), 0x17CD8809L);
                    int8_t l_558 = 0L;
                    int16_t l_584 = 0L;
                    int32_t *l_591 = (void*)0;
                    int32_t l_592[4];
                    uint8_t l_593 = 0x4AL;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_592[i] = (-1L);
                    if ((l_558 ^= ((*l_552) &= (((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 2))(l_555.s62)).xxyxxxxy, ((VECTOR(uint8_t, 8))(l_556.s36077203))))).s4 , ((VECTOR(int32_t, 4))(l_557.zzxx)).x))))
                    { /* block id: 296 */
                        int64_t l_559 = (-6L);
                        VECTOR(uint8_t, 16) l_560 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 1UL), 1UL), 1UL, 255UL, 1UL, (VECTOR(uint8_t, 2))(255UL, 1UL), (VECTOR(uint8_t, 2))(255UL, 1UL), 255UL, 1UL, 255UL, 1UL);
                        uint32_t l_563[7][1][10] = {{{0x3FFD8D21L,4294967289UL,4294967293UL,0x463E08CCL,4294967289UL,0x463E08CCL,4294967293UL,4294967289UL,0x3FFD8D21L,0x3FFD8D21L}},{{0x3FFD8D21L,4294967289UL,4294967293UL,0x463E08CCL,4294967289UL,0x463E08CCL,4294967293UL,4294967289UL,0x3FFD8D21L,0x3FFD8D21L}},{{0x3FFD8D21L,4294967289UL,4294967293UL,0x463E08CCL,4294967289UL,0x463E08CCL,4294967293UL,4294967289UL,0x3FFD8D21L,0x3FFD8D21L}},{{0x3FFD8D21L,4294967289UL,4294967293UL,0x463E08CCL,4294967289UL,0x463E08CCL,4294967293UL,4294967289UL,0x3FFD8D21L,0x3FFD8D21L}},{{0x3FFD8D21L,4294967289UL,4294967293UL,0x463E08CCL,4294967289UL,0x463E08CCL,4294967293UL,4294967289UL,0x3FFD8D21L,0x3FFD8D21L}},{{0x3FFD8D21L,4294967289UL,4294967293UL,0x463E08CCL,4294967289UL,0x463E08CCL,4294967293UL,4294967289UL,0x3FFD8D21L,0x3FFD8D21L}},{{0x3FFD8D21L,4294967289UL,4294967293UL,0x463E08CCL,4294967289UL,0x463E08CCL,4294967293UL,4294967289UL,0x3FFD8D21L,0x3FFD8D21L}}};
                        uint32_t l_564 = 9UL;
                        int8_t l_567 = 0x41L;
                        uint32_t l_568 = 0UL;
                        int i, j, k;
                        ++l_560.s5;
                        l_563[5][0][8] |= 7L;
                        l_564--;
                        l_568--;
                    }
                    else
                    { /* block id: 301 */
                        int32_t l_571 = (-3L);
                        int32_t l_572 = 0x5C2F404CL;
                        int64_t l_573 = 0L;
                        int64_t l_574 = 0x51DE7BAE5CA81DD6L;
                        int16_t l_575 = 0x278FL;
                        uint32_t l_576[3][4][1] = {{{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL}}};
                        uint32_t l_579 = 7UL;
                        int64_t l_580 = 1L;
                        int64_t l_581 = 0x586B724D36C431E1L;
                        int32_t *l_582 = &l_572;
                        int32_t *l_583 = &l_572;
                        int i, j, k;
                        ++l_576[0][1][0];
                        l_580 = l_579;
                        l_552 = (l_583 = (l_581 , l_582));
                    }
                    if (l_584)
                    { /* block id: 307 */
                        uint8_t l_585 = 7UL;
                        int32_t l_586 = (-3L);
                        int32_t l_587[2][1];
                        uint32_t l_588 = 4294967295UL;
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_587[i][j] = 1L;
                        }
                        (*l_553) = (-6L);
                        l_557.y &= (l_586 = ((*l_553) = l_585));
                        --l_588;
                    }
                    else
                    { /* block id: 313 */
                        l_553 = (void*)0;
                    }
                    l_553 = l_591;
                    ++l_593;
                }
                else
                { /* block id: 318 */
                    int32_t l_596 = 3L;
                    uint8_t *l_603 = (void*)0;
                    uint8_t **l_602 = &l_603;
                    uint8_t **l_604[9];
                    uint16_t l_605 = 65535UL;
                    int i;
                    for (i = 0; i < 9; i++)
                        l_604[i] = &l_603;
                    for (l_596 = 8; (l_596 != 14); ++l_596)
                    { /* block id: 321 */
                        union U2 l_600 = {9UL};
                        union U2 *l_599[8] = {&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600};
                        uint16_t l_601 = 0xB43CL;
                        int i;
                        l_599[3] = (void*)0;
                        (*l_553) |= l_601;
                    }
                    l_604[5] = l_602;
                    l_605++;
                }
                l_610++;
            }
            unsigned int result = 0;
            result += l_367;
            result += l_448;
            int l_542_i0, l_542_i1, l_542_i2;
            for (l_542_i0 = 0; l_542_i0 < 6; l_542_i0++) {
                for (l_542_i1 = 0; l_542_i1 < 8; l_542_i1++) {
                    for (l_542_i2 = 0; l_542_i2 < 1; l_542_i2++) {
                        result += l_542[l_542_i0][l_542_i1][l_542_i2].f0;
                        result += l_542[l_542_i0][l_542_i1][l_542_i2].f1;
                        result += l_542[l_542_i0][l_542_i1][l_542_i2].f2;
                        result += l_542[l_542_i0][l_542_i1][l_542_i2].f3;
                        result += l_542[l_542_i0][l_542_i1][l_542_i2].f4;
                        result += l_542[l_542_i0][l_542_i1][l_542_i2].f5;
                        result += l_542[l_542_i0][l_542_i1][l_542_i2].f6;
                        result += l_542[l_542_i0][l_542_i1][l_542_i2].f7;
                        result += l_542[l_542_i0][l_542_i1][l_542_i2].f8;
                    }
                }
            }
            result += l_543.f0;
            result += l_543.f1;
            result += l_543.f2;
            result += l_543.f3;
            result += l_543.f4;
            result += l_543.f5;
            result += l_543.f6;
            result += l_543.f7;
            result += l_543.f8;
            atomic_add(&p_1030->l_special_values[16], result);
        }
        else
        { /* block id: 330 */
            (1 + 1);
        }
    }
    (*p_1030->g_320) = (~((p_1030->g_613 , l_614) == (void*)0));
    (*p_1030->g_320) = (func_56(l_617, ((*l_619) = l_616[0][6]), p_1030) , (255UL <= p_46));
    p_1030->g_87 &= ((*p_47) <= (((safe_add_func_uint32_t_u_u(p_45, ((VECTOR(uint32_t, 2))(p_1030->g_624.yy)).lo)) > ((safe_mod_func_int32_t_s_s(((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(p_1030->g_627.sf5)), 0x5AE7L, 0xB9FEL)).y > p_44) < (safe_sub_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_u(((**l_619) || (**l_619)), 4)) >= ((safe_add_func_uint32_t_u_u(p_44, ((safe_unary_minus_func_uint32_t_u((((((*l_639) = l_65) , (**l_619)) && (safe_sub_func_uint64_t_u_u(GROUP_DIVERGE(2, 1), ((((*l_650) = (safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_div_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(0x3AA9L, (**l_619))), p_45)), 1UL)), 1))) >= 0x6639CDD924F47252L) , 0x4B51CD0E51A3EB0AL)))) >= 0L))) != p_45))) > p_46)) > p_46), 4)) || 0x6182875CF198643AL), p_46)) == p_1030->g_182), GROUP_DIVERGE(0, 1)))), p_46)) && 0x35CDAA2BBDD3F181L)) <= p_44));
    return (**l_619);
}


/* ------------------------------------------ */
/* 
 * reads : p_1030->g_355 p_1030->g_357 p_1030->g_358
 * writes: p_1030->g_355
 */
struct S0  func_56(union U1  p_57, int32_t * p_58, struct S4 * p_1030)
{ /* block id: 175 */
    union U1 **l_352 = (void*)0;
    union U1 *l_354 = (void*)0;
    union U1 **l_353 = &l_354;
    if ((atomic_inc(&p_1030->g_atomic_input[21 * get_linear_group_id() + 7]) == 3))
    { /* block id: 177 */
        int64_t l_344 = 8L;
        int8_t l_345 = 0x39L;
        int32_t l_346 = 0x29D5E54DL;
        int32_t l_347 = 0x79191F92L;
        int32_t l_348 = 0x157F35A5L;
        uint16_t l_349 = 0x40F8L;
        ++l_349;
        unsigned int result = 0;
        result += l_344;
        result += l_345;
        result += l_346;
        result += l_347;
        result += l_348;
        result += l_349;
        atomic_add(&p_1030->g_special_values[21 * get_linear_group_id() + 7], result);
    }
    else
    { /* block id: 179 */
        (1 + 1);
    }
    (*l_353) = (void*)0;
    (*p_1030->g_357) = p_1030->g_355;
    return p_1030->g_358;
}


/* ------------------------------------------ */
/* 
 * reads : p_1030->g_67 p_1030->g_comm_values p_1030->l_comm_values p_1030->g_76 p_1030->g_80 p_1030->g_83 p_1030->g_89 p_1030->g_98 p_1030->g_99 p_1030->g_2 p_1030->g_130 p_1030->g_74 p_1030->g_68 p_1030->g_143 p_1030->g_53 p_1030->g_85 p_1030->g_172 p_1030->g_178 p_1030->g_182 p_1030->g_183 p_1030->g_179 p_1030->g_232 p_1030->g_253 p_1030->g_159 p_1030->g_297 p_1030->g_299 p_1030->g_320 p_1030->g_87 p_1030->g_324 p_1030->g_342 p_1030->g_343
 * writes: p_1030->g_68 p_1030->g_74 p_1030->g_76 p_1030->g_80 p_1030->g_85 p_1030->g_comm_values p_1030->g_83.f4 p_1030->g_135 p_1030->g_130 p_1030->g_159 p_1030->g_182 p_1030->g_183 p_1030->g_184 p_1030->g_89 p_1030->g_264 p_1030->g_295 p_1030->g_309 p_1030->g_53 p_1030->g_298 p_1030->g_87 p_1030->g_325
 */
union U1  func_59(int32_t * p_60, int8_t  p_61, union U2  p_62, struct S4 * p_1030)
{ /* block id: 13 */
    int32_t *l_66 = (void*)0;
    VECTOR(int64_t, 16) l_69 = (VECTOR(int64_t, 16))(3L, (VECTOR(int64_t, 4))(3L, (VECTOR(int64_t, 2))(3L, 0x4C22523F84E0F8CCL), 0x4C22523F84E0F8CCL), 0x4C22523F84E0F8CCL, 3L, 0x4C22523F84E0F8CCL, (VECTOR(int64_t, 2))(3L, 0x4C22523F84E0F8CCL), (VECTOR(int64_t, 2))(3L, 0x4C22523F84E0F8CCL), 3L, 0x4C22523F84E0F8CCL, 3L, 0x4C22523F84E0F8CCL);
    int32_t *l_72 = (void*)0;
    int8_t *l_73 = &p_1030->g_74[2];
    uint64_t *l_75[10][4][4] = {{{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0},{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0},{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0},{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0}},{{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0},{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0},{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0},{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0}},{{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0},{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0},{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0},{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0}},{{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0},{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0},{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0},{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0}},{{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0},{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0},{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0},{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0}},{{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0},{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0},{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0},{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0}},{{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0},{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0},{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0},{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0}},{{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0},{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0},{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0},{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0}},{{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0},{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0},{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0},{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0}},{{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0},{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0},{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0},{&p_1030->g_76,(void*)0,&p_1030->g_76,(void*)0}}};
    int32_t l_88 = 0x027EF3DDL;
    int32_t l_106 = 1L;
    int64_t l_162 = 0x2A0AA601C580CF4DL;
    uint8_t **l_163 = &p_1030->g_159;
    VECTOR(uint64_t, 2) l_228 = (VECTOR(uint64_t, 2))(18446744073709551614UL, 0xEDF8BB0FE6DB16A5L);
    uint8_t **l_233 = &p_1030->g_159;
    int32_t *l_238 = (void*)0;
    VECTOR(int32_t, 8) l_319 = (VECTOR(int32_t, 8))(0x4E43525BL, (VECTOR(int32_t, 4))(0x4E43525BL, (VECTOR(int32_t, 2))(0x4E43525BL, 0L), 0L), 0L, 0x4E43525BL, 0L);
    int i, j, k;
    (*p_1030->g_67) = l_66;
    if ((((VECTOR(int64_t, 8))(sub_sat(((VECTOR(int64_t, 8))(0x071E8EE6221365D5L, (0x16L < p_61), p_62.f0, ((((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 2))(0x042FB88B70E9AFB8L, (-1L))).xxxx, ((VECTOR(int64_t, 2))(l_69.saa)).yxyy))).y > ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0x8983C1E2A2D62018L, 1UL)).xxxy)).x) || (0x31E1499B6F360822L < ((p_1030->g_76 ^= ((p_62.f0 | ((*l_73) = (p_1030->g_comm_values[p_1030->tid] && (safe_add_func_int16_t_s_s(0x3084L, (&p_1030->g_53 == l_72)))))) , p_1030->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1030->tid, 30))])) > 0x68B44A6599FDCBA9L))), ((VECTOR(int64_t, 2))(1L)), (-4L), 5L)), ((VECTOR(int64_t, 8))(5L))))).s0 < 0L))
    { /* block id: 17 */
        uint8_t *l_79[8];
        int32_t l_94 = 1L;
        int8_t l_131[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
        int32_t l_132 = 0x5CA0FF72L;
        int8_t **l_305 = &p_1030->g_298;
        int i;
        for (i = 0; i < 8; i++)
            l_79[i] = &p_1030->g_80;
        if ((((p_1030->g_80--) && 0x27L) <= 0L))
        { /* block id: 19 */
            int32_t *l_84 = &p_1030->g_85;
            int32_t *l_86[2];
            int64_t *l_95[9][8][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
            int16_t *l_100 = (void*)0;
            int16_t *l_101 = (void*)0;
            int16_t *l_102 = (void*)0;
            int16_t *l_103 = (void*)0;
            int16_t *l_104 = (void*)0;
            int16_t *l_105[3];
            int32_t *l_133 = (void*)0;
            int32_t *l_134 = &p_1030->g_83.f4;
            uint8_t *l_160 = &p_1030->g_130[6];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_86[i] = &p_1030->g_87;
            for (i = 0; i < 3; i++)
                l_105[i] = (void*)0;
            p_1030->g_135 = (p_1030->g_83 , ((((0x05L && ((l_88 = ((*l_84) = p_62.f0)) ^ ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(p_1030->g_89.s04570443)).hi, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))((FAKE_DIVERGE(p_1030->local_1_offset, get_local_id(1), 10) && ((safe_sub_func_int64_t_s_s((p_1030->g_comm_values[p_1030->tid] ^= (safe_rshift_func_uint16_t_u_s(((void*)0 == &p_1030->g_80), l_94))), (safe_lshift_func_int16_t_s_s((((VECTOR(int8_t, 2))(p_1030->g_98.yx)).odd , (l_106 = ((VECTOR(int16_t, 4))(p_1030->g_99.xyxx)).y)), 15)))) < (safe_mul_func_uint16_t_u_u((((*l_134) ^= (safe_add_func_int16_t_s_s((safe_add_func_int64_t_s_s((l_132 = (safe_div_func_uint16_t_u_u((safe_div_func_uint64_t_u_u(((safe_mod_func_uint16_t_u_u((((VECTOR(int8_t, 2))(0x3BL, (-10L))).hi > 0x64L), (((safe_unary_minus_func_uint32_t_u(((safe_add_func_int8_t_s_s(((safe_div_func_int64_t_s_s(l_94, (safe_rshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((l_94 , 0xFFF8L), l_94)), GROUP_DIVERGE(0, 1))), 3)))) && p_1030->g_2), p_1030->g_130[6])) <= l_131[3]))) , (-6L)) , GROUP_DIVERGE(2, 1)))) < 0x5807DED58DE09C51L), 0xC126308DE061E067L)), 0x68AFL))), 1L)), p_62.f0))) , 0x7948L), p_1030->g_74[6])))), 0L, l_131[1], 0x6FF33249L, ((VECTOR(int32_t, 2))(0x43250C9FL)), 9L, ((VECTOR(int32_t, 2))(8L)), 0L, 0L, p_61, ((VECTOR(int32_t, 4))(0x45635C93L)))).s4e11)).wyyyxwyw)))).hi, ((VECTOR(int32_t, 4))(0x6548F5A9L))))).w)) , p_62.f0) < p_62.f0) != p_1030->g_130[3]));
            if (((++p_1030->g_130[6]) == p_1030->g_99.x))
            { /* block id: 28 */
                int32_t l_152 = 0x4D969F29L;
                atomic_or(&p_1030->g_atomic_reduction[get_linear_group_id()], l_131[6] + get_linear_global_id());
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_1030->v_collective += p_1030->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                for (p_62.f0 = 0; (p_62.f0 == 4); p_62.f0++)
                { /* block id: 32 */
                    uint8_t *l_157 = &p_1030->g_80;
                    int32_t l_161 = 0x660D6635L;
                    for (l_88 = 24; (l_88 <= 2); l_88 = safe_sub_func_int64_t_s_s(l_88, 4))
                    { /* block id: 35 */
                        uint8_t **l_158[10] = {&l_79[0],&l_79[0],&l_79[0],&l_79[0],&l_79[0],&l_79[0],&l_79[0],&l_79[0],&l_79[0],&l_79[0]};
                        int i;
                        (*p_1030->g_143) = (*p_1030->g_67);
                        (*l_84) = ((safe_lshift_func_uint16_t_u_s(8UL, (p_1030->g_53 >= ((safe_lshift_func_uint16_t_u_s((((-1L) <= (safe_sub_func_uint16_t_u_u((*l_84), ((safe_div_func_int32_t_s_s((p_1030->g_74[5] > FAKE_DIVERGE(p_1030->global_2_offset, get_global_id(2), 10)), l_152)) > ((l_161 = (safe_lshift_func_uint16_t_u_s(p_1030->g_130[6], (((safe_sub_func_int64_t_s_s((-4L), ((p_1030->g_159 = (p_1030->g_76 , l_157)) != l_160))) , &p_1030->g_135) != (void*)0)))) , 0x2CL))))) != p_61), p_61)) && l_161)))) , l_162);
                    }
                }
            }
            else
            { /* block id: 42 */
                uint8_t ***l_164 = (void*)0;
                uint8_t ***l_165 = &l_163;
                uint8_t **l_167 = &l_79[7];
                uint8_t ***l_166 = &l_167;
                uint8_t **l_169 = &l_79[6];
                uint8_t ***l_168 = &l_169;
                uint8_t ***l_170 = (void*)0;
                uint8_t **l_171 = &l_79[2];
                VECTOR(uint32_t, 4) l_173 = (VECTOR(uint32_t, 4))(0x2E41012EL, (VECTOR(uint32_t, 2))(0x2E41012EL, 4294967295UL), 4294967295UL);
                int i;
                (*l_84) = (~(((*l_165) = l_163) != (l_171 = ((*l_168) = ((*l_166) = (void*)0)))));
                p_1030->g_89.s1 &= (((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 8))((FAKE_DIVERGE(p_1030->group_2_offset, get_group_id(2), 10) | p_1030->g_172), FAKE_DIVERGE(p_1030->global_2_offset, get_global_id(2), 10), p_61, ((VECTOR(uint32_t, 2))(0x8A663DAEL, 4294967289UL)), ((VECTOR(uint32_t, 2))(l_173.zy)), 0x765A6C53L)).s0152346523226146, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))((p_1030->g_184 = (safe_lshift_func_int16_t_s_s((p_1030->g_183[0] |= (p_1030->g_182 |= (safe_mul_func_uint8_t_u_u((((-1L) || ((p_1030->g_178 == &p_1030->g_179) && p_1030->g_99.z)) & (((*l_134) = (safe_lshift_func_int16_t_s_s((FAKE_DIVERGE(p_1030->local_2_offset, get_local_id(2), 10) & (l_94 = (1UL & 0UL))), p_62.f0))) , p_61)), p_62.f0)))), p_1030->g_83.f7))), ((VECTOR(uint32_t, 2))(4294967294UL)), 0x02C7639DL)).zwxwxwyw)).odd, ((VECTOR(uint32_t, 4))(1UL))))).xxzwzyzy)).s3272325406343345, ((VECTOR(uint32_t, 16))(0x96303E95L)), ((VECTOR(uint32_t, 16))(4294967295UL))))).sb1, (uint32_t)1UL))), ((VECTOR(uint32_t, 2))(1UL)), ((VECTOR(uint32_t, 2))(3UL))))), 0UL, 6UL)).wwwywxwwzwxzwxxx, ((VECTOR(uint32_t, 16))(0x759828F9L))))).s8 == (*l_84));
            }
            if ((atomic_inc(&p_1030->l_atomic_input[3]) == 2))
            { /* block id: 56 */
                int32_t l_186 = 0x278C1B4AL;
                int32_t *l_185 = &l_186;
                int32_t *l_187[10][5] = {{&l_186,&l_186,&l_186,&l_186,&l_186},{&l_186,&l_186,&l_186,&l_186,&l_186},{&l_186,&l_186,&l_186,&l_186,&l_186},{&l_186,&l_186,&l_186,&l_186,&l_186},{&l_186,&l_186,&l_186,&l_186,&l_186},{&l_186,&l_186,&l_186,&l_186,&l_186},{&l_186,&l_186,&l_186,&l_186,&l_186},{&l_186,&l_186,&l_186,&l_186,&l_186},{&l_186,&l_186,&l_186,&l_186,&l_186},{&l_186,&l_186,&l_186,&l_186,&l_186}};
                int32_t *l_188 = (void*)0;
                int32_t *l_189 = (void*)0;
                uint16_t l_194[10][9] = {{65535UL,6UL,65535UL,1UL,65535UL,6UL,65535UL,0x8F71L,0UL},{65535UL,6UL,65535UL,1UL,65535UL,6UL,65535UL,0x8F71L,0UL},{65535UL,6UL,65535UL,1UL,65535UL,6UL,65535UL,0x8F71L,0UL},{65535UL,6UL,65535UL,1UL,65535UL,6UL,65535UL,0x8F71L,0UL},{65535UL,6UL,65535UL,1UL,65535UL,6UL,65535UL,0x8F71L,0UL},{65535UL,6UL,65535UL,1UL,65535UL,6UL,65535UL,0x8F71L,0UL},{65535UL,6UL,65535UL,1UL,65535UL,6UL,65535UL,0x8F71L,0UL},{65535UL,6UL,65535UL,1UL,65535UL,6UL,65535UL,0x8F71L,0UL},{65535UL,6UL,65535UL,1UL,65535UL,6UL,65535UL,0x8F71L,0UL},{65535UL,6UL,65535UL,1UL,65535UL,6UL,65535UL,0x8F71L,0UL}};
                VECTOR(int32_t, 4) l_195 = (VECTOR(int32_t, 4))(0x349F4D86L, (VECTOR(int32_t, 2))(0x349F4D86L, (-7L)), (-7L));
                VECTOR(int32_t, 16) l_196 = (VECTOR(int32_t, 16))(0x15A4DF93L, (VECTOR(int32_t, 4))(0x15A4DF93L, (VECTOR(int32_t, 2))(0x15A4DF93L, 3L), 3L), 3L, 0x15A4DF93L, 3L, (VECTOR(int32_t, 2))(0x15A4DF93L, 3L), (VECTOR(int32_t, 2))(0x15A4DF93L, 3L), 0x15A4DF93L, 3L, 0x15A4DF93L, 3L);
                uint32_t l_197 = 4294967293UL;
                VECTOR(int32_t, 16) l_198 = (VECTOR(int32_t, 16))(0x23AC3036L, (VECTOR(int32_t, 4))(0x23AC3036L, (VECTOR(int32_t, 2))(0x23AC3036L, (-10L)), (-10L)), (-10L), 0x23AC3036L, (-10L), (VECTOR(int32_t, 2))(0x23AC3036L, (-10L)), (VECTOR(int32_t, 2))(0x23AC3036L, (-10L)), 0x23AC3036L, (-10L), 0x23AC3036L, (-10L));
                VECTOR(int32_t, 2) l_199 = (VECTOR(int32_t, 2))(0x6CE06B36L, 3L);
                VECTOR(int32_t, 4) l_200 = (VECTOR(int32_t, 4))(0x515AE110L, (VECTOR(int32_t, 2))(0x515AE110L, (-2L)), (-2L));
                VECTOR(int32_t, 4) l_201 = (VECTOR(int32_t, 4))(0x2E7AD904L, (VECTOR(int32_t, 2))(0x2E7AD904L, (-3L)), (-3L));
                int8_t l_202 = (-4L);
                VECTOR(int32_t, 2) l_203 = (VECTOR(int32_t, 2))(0x12BBAF6AL, 0x321D8D08L);
                uint32_t l_204 = 0UL;
                int8_t l_205 = (-1L);
                VECTOR(int32_t, 4) l_206 = (VECTOR(int32_t, 4))(0x368F89FDL, (VECTOR(int32_t, 2))(0x368F89FDL, 0x584DE35CL), 0x584DE35CL);
                VECTOR(int32_t, 16) l_207 = (VECTOR(int32_t, 16))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x7B16671CL), 0x7B16671CL), 0x7B16671CL, 8L, 0x7B16671CL, (VECTOR(int32_t, 2))(8L, 0x7B16671CL), (VECTOR(int32_t, 2))(8L, 0x7B16671CL), 8L, 0x7B16671CL, 8L, 0x7B16671CL);
                int64_t l_208 = (-4L);
                int8_t l_209 = 0x49L;
                VECTOR(int32_t, 4) l_210 = (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x51B94553L), 0x51B94553L);
                int8_t l_211 = 0x4EL;
                VECTOR(uint16_t, 4) l_212 = (VECTOR(uint16_t, 4))(0xD9BCL, (VECTOR(uint16_t, 2))(0xD9BCL, 0x94DBL), 0x94DBL);
                uint8_t l_213 = 4UL;
                VECTOR(int32_t, 4) l_214 = (VECTOR(int32_t, 4))(0x036DC7CFL, (VECTOR(int32_t, 2))(0x036DC7CFL, 1L), 1L);
                uint32_t l_215 = 6UL;
                int i, j;
                l_189 = ((((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x31L, 0x0FL)).yyxyyyyxyxyxxxxx)).lo, ((VECTOR(int8_t, 2))(0x6CL, 0x18L)).yyxyyxxy))).s3 , 1UL) , (l_188 = (l_187[9][0] = l_185)));
                for (l_186 = 0; (l_186 <= (-28)); l_186 = safe_sub_func_uint32_t_u_u(l_186, 1))
                { /* block id: 62 */
                    uint64_t l_192[3][5][2] = {{{0xADD7E3C66B9BC0EEL,0xADD7E3C66B9BC0EEL},{0xADD7E3C66B9BC0EEL,0xADD7E3C66B9BC0EEL},{0xADD7E3C66B9BC0EEL,0xADD7E3C66B9BC0EEL},{0xADD7E3C66B9BC0EEL,0xADD7E3C66B9BC0EEL},{0xADD7E3C66B9BC0EEL,0xADD7E3C66B9BC0EEL}},{{0xADD7E3C66B9BC0EEL,0xADD7E3C66B9BC0EEL},{0xADD7E3C66B9BC0EEL,0xADD7E3C66B9BC0EEL},{0xADD7E3C66B9BC0EEL,0xADD7E3C66B9BC0EEL},{0xADD7E3C66B9BC0EEL,0xADD7E3C66B9BC0EEL},{0xADD7E3C66B9BC0EEL,0xADD7E3C66B9BC0EEL}},{{0xADD7E3C66B9BC0EEL,0xADD7E3C66B9BC0EEL},{0xADD7E3C66B9BC0EEL,0xADD7E3C66B9BC0EEL},{0xADD7E3C66B9BC0EEL,0xADD7E3C66B9BC0EEL},{0xADD7E3C66B9BC0EEL,0xADD7E3C66B9BC0EEL},{0xADD7E3C66B9BC0EEL,0xADD7E3C66B9BC0EEL}}};
                    uint16_t l_193 = 2UL;
                    int i, j, k;
                    l_193 = l_192[2][3][0];
                }
                l_213 &= ((VECTOR(int32_t, 16))((-1L), (l_194[5][2] = (-7L)), ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x7195CB6CL, 2L)))).xyyyyyxx)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(3L, 0x4398A5BDL)))), (-1L), 0L, ((VECTOR(int32_t, 4))(l_195.zywy)))).sd169, ((VECTOR(int32_t, 16))(l_196.s027b9247cf0fdf59)).sf024))), 0x71BACBC8L, 0x29FFD0D4L, l_197, ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(l_198.s168392c3)).s4126456243476615, ((VECTOR(int32_t, 16))(l_199.xxxyyxxxxxyxxxxx)), ((VECTOR(int32_t, 16))(l_200.yyyyyxzxwxywwyzy))))).s902b, ((VECTOR(int32_t, 8))(l_201.zyxwyxyz)).even))).zwywyxzz)).even, (int32_t)l_202, (int32_t)((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 4))(l_203.xxxy)), ((VECTOR(int32_t, 16))(1L, 0x487FB4D3L, 0L, 4L, (l_205 = l_204), 0L, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(l_206.wzyz)).zyyyyxwz, ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(l_207.s60a45b53)).lo, ((VECTOR(int32_t, 8))((-10L), (l_209 &= l_208), 1L, ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(l_210.xz)), ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(0x6B717930L, l_211, (-9L), l_212.x, (-1L), ((VECTOR(int32_t, 2))(0x46DA3EA1L)), ((VECTOR(int32_t, 8))(0x22C2B7B8L)), 1L)).sf9)).xxxyxyxxxxyyyyxx, ((VECTOR(int32_t, 16))((-1L)))))).lo, ((VECTOR(int32_t, 8))(0x56A5C161L))))).s33))).xyxx)), ((VECTOR(int32_t, 4))(7L)), ((VECTOR(int32_t, 4))(0x72BF14A9L))))), 0L)).odd, ((VECTOR(int32_t, 4))(0x3CAFA360L))))).yzzyzxxw))).odd, ((VECTOR(int32_t, 4))(0x1ADEDA80L))))), ((VECTOR(int32_t, 2))(0x1A512CE6L)), ((VECTOR(int32_t, 4))(0x4AA0D56BL)))).s2b08))).x))), (-1L), 0x0768D2A3L, 0x68376652L)).sb;
                if ((l_215 = ((VECTOR(int32_t, 8))(l_214.yywwzyxy)).s5))
                { /* block id: 70 */
                    int16_t l_216[1][8] = {{(-6L),0x1C8AL,(-6L),(-6L),0x1C8AL,(-6L),(-6L),0x1C8AL}};
                    union U2 l_217 = {1UL};
                    int32_t l_219 = 0x1263A529L;
                    int32_t *l_218[10] = {&l_219,&l_219,&l_219,&l_219,&l_219,&l_219,&l_219,&l_219,&l_219,&l_219};
                    int i, j;
                    (*l_188) = l_216[0][4];
                    (*l_188) |= 6L;
                    l_218[7] = (l_217 , (void*)0);
                    (*l_188) ^= 1L;
                }
                else
                { /* block id: 75 */
                    int64_t l_220 = 1L;
                    uint32_t l_221 = 4294967294UL;
                    ++l_221;
                }
                unsigned int result = 0;
                result += l_186;
                int l_194_i0, l_194_i1;
                for (l_194_i0 = 0; l_194_i0 < 10; l_194_i0++) {
                    for (l_194_i1 = 0; l_194_i1 < 9; l_194_i1++) {
                        result += l_194[l_194_i0][l_194_i1];
                    }
                }
                result += l_195.w;
                result += l_195.z;
                result += l_195.y;
                result += l_195.x;
                result += l_196.sf;
                result += l_196.se;
                result += l_196.sd;
                result += l_196.sc;
                result += l_196.sb;
                result += l_196.sa;
                result += l_196.s9;
                result += l_196.s8;
                result += l_196.s7;
                result += l_196.s6;
                result += l_196.s5;
                result += l_196.s4;
                result += l_196.s3;
                result += l_196.s2;
                result += l_196.s1;
                result += l_196.s0;
                result += l_197;
                result += l_198.sf;
                result += l_198.se;
                result += l_198.sd;
                result += l_198.sc;
                result += l_198.sb;
                result += l_198.sa;
                result += l_198.s9;
                result += l_198.s8;
                result += l_198.s7;
                result += l_198.s6;
                result += l_198.s5;
                result += l_198.s4;
                result += l_198.s3;
                result += l_198.s2;
                result += l_198.s1;
                result += l_198.s0;
                result += l_199.y;
                result += l_199.x;
                result += l_200.w;
                result += l_200.z;
                result += l_200.y;
                result += l_200.x;
                result += l_201.w;
                result += l_201.z;
                result += l_201.y;
                result += l_201.x;
                result += l_202;
                result += l_203.y;
                result += l_203.x;
                result += l_204;
                result += l_205;
                result += l_206.w;
                result += l_206.z;
                result += l_206.y;
                result += l_206.x;
                result += l_207.sf;
                result += l_207.se;
                result += l_207.sd;
                result += l_207.sc;
                result += l_207.sb;
                result += l_207.sa;
                result += l_207.s9;
                result += l_207.s8;
                result += l_207.s7;
                result += l_207.s6;
                result += l_207.s5;
                result += l_207.s4;
                result += l_207.s3;
                result += l_207.s2;
                result += l_207.s1;
                result += l_207.s0;
                result += l_208;
                result += l_209;
                result += l_210.w;
                result += l_210.z;
                result += l_210.y;
                result += l_210.x;
                result += l_211;
                result += l_212.w;
                result += l_212.z;
                result += l_212.y;
                result += l_212.x;
                result += l_213;
                result += l_214.w;
                result += l_214.z;
                result += l_214.y;
                result += l_214.x;
                result += l_215;
                atomic_add(&p_1030->l_special_values[3], result);
            }
            else
            { /* block id: 78 */
                (1 + 1);
            }
        }
        else
        { /* block id: 81 */
            uint8_t **l_229 = &l_79[2];
            uint8_t ***l_230 = (void*)0;
            uint8_t ***l_231 = &l_163;
            int32_t l_234 = 0x6F8CB6F3L;
            int32_t *l_235[1][1][2];
            int64_t l_274 = (-6L);
            uint32_t l_307 = 0xCDBFE739L;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_235[i][j][k] = &l_88;
                }
            }
            l_88 = ((VECTOR(int32_t, 16))((-4L), (+(safe_mod_func_int8_t_s_s((((VECTOR(int64_t, 16))(0x4E06A09E4480C90BL, ((((safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(l_228.yyxxyyxxyxxxyxxy)).s3, FAKE_DIVERGE(p_1030->global_1_offset, get_global_id(1), 10))) , (*p_1030->g_178)) != ((*l_231) = (l_229 = l_229))) < ((&l_79[7] != (p_1030->g_232 , l_233)) , ((((VECTOR(uint16_t, 2))(0UL, 1UL)).lo <= 0x13E3L) ^ (p_61 &= p_62.f0)))), (5UL >= p_62.f0), (-2L), p_1030->g_232.f6, 7L, 0x7474B817ADB72ABDL, l_234, l_234, 0x1316BCD25EDDA4E3L, 0x3C80A7897F9CCC1DL, 0L, p_1030->g_53, ((VECTOR(int64_t, 2))(0x4A83E0B29770BCB4L)), 0x4152F9C739074106L)).s6 ^ l_234), 0x88L))), p_62.f0, ((VECTOR(int32_t, 8))(0x5E5484CAL)), ((VECTOR(int32_t, 2))(0x761B415AL)), ((VECTOR(int32_t, 2))(1L)), (-1L))).s9;
            for (l_162 = 0; (l_162 >= (-8)); l_162 = safe_sub_func_int32_t_s_s(l_162, 9))
            { /* block id: 88 */
                int32_t *l_239 = &p_1030->g_87;
                if (p_62.f0)
                    break;
                atomic_sub(&p_1030->g_atomic_reduction[get_linear_group_id()], (l_238 != p_60) + get_linear_global_id());
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_1030->v_collective += p_1030->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                l_239 = (void*)0;
                if (p_62.f0)
                    break;
            }
            for (l_162 = (-21); (l_162 <= 24); l_162 = safe_add_func_int8_t_s_s(l_162, 7))
            { /* block id: 96 */
                int64_t l_251 = 0x3E9E1CB4CC9C1CD1L;
                uint8_t **l_252 = &l_79[3];
                int32_t **l_259 = &l_238;
                int32_t l_291 = 0x3E659462L;
                uint8_t *l_303[5] = {&p_1030->g_130[3],&p_1030->g_130[3],&p_1030->g_130[3],&p_1030->g_130[3],&p_1030->g_130[3]};
                uint32_t l_316[3][5][3] = {{{0xA254216CL,0xA254216CL,0xA254216CL},{0xA254216CL,0xA254216CL,0xA254216CL},{0xA254216CL,0xA254216CL,0xA254216CL},{0xA254216CL,0xA254216CL,0xA254216CL},{0xA254216CL,0xA254216CL,0xA254216CL}},{{0xA254216CL,0xA254216CL,0xA254216CL},{0xA254216CL,0xA254216CL,0xA254216CL},{0xA254216CL,0xA254216CL,0xA254216CL},{0xA254216CL,0xA254216CL,0xA254216CL},{0xA254216CL,0xA254216CL,0xA254216CL}},{{0xA254216CL,0xA254216CL,0xA254216CL},{0xA254216CL,0xA254216CL,0xA254216CL},{0xA254216CL,0xA254216CL,0xA254216CL},{0xA254216CL,0xA254216CL,0xA254216CL},{0xA254216CL,0xA254216CL,0xA254216CL}}};
                int i, j, k;
                for (l_106 = 0; (l_106 != (-24)); l_106 = safe_sub_func_int64_t_s_s(l_106, 1))
                { /* block id: 99 */
                    int64_t *l_250 = (void*)0;
                    VECTOR(uint64_t, 2) l_254 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 5UL);
                    int i, j;
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_1030->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 30)), permutations[(safe_mod_func_uint32_t_u_u(((0x5EE7ADF5A984FCC0L >= (safe_sub_func_uint64_t_u_u((safe_div_func_int64_t_s_s((l_251 = 0x56DC492EAA635897L), 6UL)), ((VECTOR(uint64_t, 8))((p_62.f0 >= (l_252 != (p_1030->g_253 , (void*)0))), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(l_254.xxyyyxyyxyxyyyyy)).sac66)), p_61, 0xEF0C7B75E71E7B9DL, 18446744073709551615UL)).s1))) && (&p_1030->g_183[0] == &p_1030->g_76)), 10))][(safe_mod_func_uint32_t_u_u(p_1030->tid, 30))]));
                    if (p_62.f0)
                        continue;
                }
                for (l_88 = (-24); (l_88 <= 8); l_88 = safe_add_func_uint64_t_u_u(l_88, 2))
                { /* block id: 108 */
                    int32_t *l_262[4][1][7] = {{{&l_106,&l_106,&l_106,&l_106,&l_106,&l_106,&l_106}},{{&l_106,&l_106,&l_106,&l_106,&l_106,&l_106,&l_106}},{{&l_106,&l_106,&l_106,&l_106,&l_106,&l_106,&l_106}},{{&l_106,&l_106,&l_106,&l_106,&l_106,&l_106,&l_106}}};
                    int32_t l_267 = 0x4059C4FCL;
                    VECTOR(int8_t, 8) l_277 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-2L)), (-2L)), (-2L), 0L, (-2L));
                    int32_t l_304 = 0x492DF9E6L;
                    int32_t l_313 = 0L;
                    int i, j, k;
                    for (p_1030->g_182 = 0; (p_1030->g_182 >= 1); p_1030->g_182 = safe_add_func_uint8_t_u_u(p_1030->g_182, 7))
                    { /* block id: 111 */
                        int32_t **l_263 = (void*)0;
                        int8_t **l_280 = &l_73;
                        int64_t *l_292[1][4];
                        int32_t l_293 = 0x52EEAF5DL;
                        uint16_t *l_294 = &p_1030->g_295;
                        int32_t l_296 = 0x2D604B98L;
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 4; j++)
                                l_292[i][j] = &l_251;
                        }
                        l_267 = (FAKE_DIVERGE(p_1030->global_1_offset, get_global_id(1), 10) , ((&p_1030->g_53 == p_60) , (((((((+(l_132 &= (((-3L) <= p_62.f0) , (&l_66 == l_259)))) && (safe_add_func_int32_t_s_s((l_262[1][0][5] != (p_1030->g_264 = &p_1030->g_53)), (FAKE_DIVERGE(p_1030->group_0_offset, get_group_id(0), 10) != (safe_div_func_int32_t_s_s(((p_1030->g_232.f3 & 65535UL) || l_132), p_62.f0)))))) || p_1030->g_232.f0) & p_1030->g_85) == p_1030->g_2) ^ 0UL) > p_62.f0)));
                        if (l_267)
                            continue;
                        l_296 |= ((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(0xE6L, 255UL)).lo, GROUP_DIVERGE(2, 1))) <= (safe_add_func_uint8_t_u_u(l_132, (safe_rshift_func_uint16_t_u_s(((*l_294) = (l_274 & ((((p_1030->g_comm_values[p_1030->tid] = ((l_291 = ((safe_div_func_int8_t_s_s(((VECTOR(int8_t, 16))(l_277.s0137672114003566)).s8, (*p_1030->g_159))) & (((((safe_mul_func_uint16_t_u_u((((((*l_280) = &p_1030->g_74[4]) == (void*)0) >= (safe_add_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((safe_mod_func_uint64_t_u_u(((void*)0 == (*p_1030->g_178)), (safe_sub_func_int64_t_s_s((safe_mod_func_int16_t_s_s((&p_60 != &p_1030->g_264), l_267)), p_62.f0)))) != p_62.f0), FAKE_DIVERGE(p_1030->local_1_offset, get_local_id(1), 10))), p_61))) | p_1030->g_232.f5), 6UL)) , p_62.f0) , p_62.f0) && p_1030->g_83.f4) < 0x5EL))) < FAKE_DIVERGE(p_1030->group_2_offset, get_group_id(2), 10))) > l_131[3]) ^ 65530UL) > l_293))), p_1030->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1030->tid, 30))])))));
                        l_94 |= 0x6C164280L;
                    }
                    if (p_62.f0)
                    { /* block id: 123 */
                        if (p_61)
                            break;
                        atomic_max(&p_1030->l_atomic_reduction[0], (0L <= ((p_1030->g_297 != ((p_61 != ((0L < (p_1030->g_83.f6 >= (((VECTOR(int16_t, 16))(p_1030->g_299.ywxzzyzxywxxwxwx)).sf || (((safe_unary_minus_func_uint8_t_u((l_132 &= (**p_1030->g_179)))) || ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0xEAB5B3BED09F39F3L, 0UL)), 0xE1396008A2179DD7L, 0x79F5D47AEF6B9B67L)).x) , 0xB3C5L)))) != ((+FAKE_DIVERGE(p_1030->group_1_offset, get_group_id(1), 10)) & (safe_sub_func_uint32_t_u_u((l_303[2] == (void*)0), l_304))))) , l_305)) != p_1030->g_183[0])) + get_linear_global_id());
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_1030->v_collective += p_1030->l_atomic_reduction[0];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (l_94)
                            continue;
                        l_307 |= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(p_1030->g_306.yx)).xyxxyyyyxyxyyyxx)).s4;
                    }
                    else
                    { /* block id: 129 */
                        p_1030->g_309[4] = p_1030->g_232;
                        if (p_61)
                            break;
                    }
                    for (p_1030->g_53 = 0; (p_1030->g_53 >= 9); ++p_1030->g_53)
                    { /* block id: 135 */
                        uint8_t l_312 = 0x2CL;
                        int32_t l_314 = 1L;
                        int32_t l_315 = 0x06BD966CL;
                        l_312 = (0UL & (&p_61 != ((*l_305) = &p_61)));
                        l_316[2][4][0]++;
                        l_267 |= l_132;
                    }
                    if (p_61)
                        break;
                }
                l_88 |= (-1L);
            }
            l_88 = ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(p_61, 0x7FFC4108L, 0x1CEBB790L, 0x7FB76D55L)).odd)).xyyxyxyyxxyxxyxy)).odd))).s2;
        }
        (*p_1030->g_320) |= ((p_61 && ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_319.s2354573276533773)).s733b)).y) && p_61);
        for (p_1030->g_53 = (-28); (p_1030->g_53 > (-11)); p_1030->g_53 = safe_add_func_uint64_t_u_u(p_1030->g_53, 6))
        { /* block id: 150 */
            int16_t **l_323 = (void*)0;
            (*p_1030->g_324) = l_323;
        }
        for (p_1030->g_83.f4 = 0; (p_1030->g_83.f4 != 2); p_1030->g_83.f4++)
        { /* block id: 155 */
            VECTOR(uint16_t, 8) l_329 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xD20BL), 0xD20BL), 0xD20BL, 65535UL, 0xD20BL);
            int32_t l_330 = 0x3706350DL;
            int i;
            l_330 = ((!((VECTOR(uint16_t, 8))(l_329.s00132112)).s3) , p_62.f0);
        }
    }
    else
    { /* block id: 158 */
        VECTOR(uint32_t, 2) l_331 = (VECTOR(uint32_t, 2))(4294967294UL, 0xA8DD452FL);
        int32_t *l_332[3][9][2] = {{{&p_1030->g_85,&p_1030->g_85},{&p_1030->g_85,&p_1030->g_85},{&p_1030->g_85,&p_1030->g_85},{&p_1030->g_85,&p_1030->g_85},{&p_1030->g_85,&p_1030->g_85},{&p_1030->g_85,&p_1030->g_85},{&p_1030->g_85,&p_1030->g_85},{&p_1030->g_85,&p_1030->g_85},{&p_1030->g_85,&p_1030->g_85}},{{&p_1030->g_85,&p_1030->g_85},{&p_1030->g_85,&p_1030->g_85},{&p_1030->g_85,&p_1030->g_85},{&p_1030->g_85,&p_1030->g_85},{&p_1030->g_85,&p_1030->g_85},{&p_1030->g_85,&p_1030->g_85},{&p_1030->g_85,&p_1030->g_85},{&p_1030->g_85,&p_1030->g_85},{&p_1030->g_85,&p_1030->g_85}},{{&p_1030->g_85,&p_1030->g_85},{&p_1030->g_85,&p_1030->g_85},{&p_1030->g_85,&p_1030->g_85},{&p_1030->g_85,&p_1030->g_85},{&p_1030->g_85,&p_1030->g_85},{&p_1030->g_85,&p_1030->g_85},{&p_1030->g_85,&p_1030->g_85},{&p_1030->g_85,&p_1030->g_85},{&p_1030->g_85,&p_1030->g_85}}};
        int i, j, k;
        l_331.x ^= (*p_1030->g_320);
        l_319.s1 = 0x1D54991BL;
    }
    for (p_1030->g_76 = 0; (p_1030->g_76 >= 46); p_1030->g_76 = safe_add_func_int64_t_s_s(p_1030->g_76, 1))
    { /* block id: 164 */
        int32_t *l_338 = &p_1030->g_87;
        int32_t l_339[1];
        int32_t **l_340 = (void*)0;
        int i;
        for (i = 0; i < 1; i++)
            l_339[i] = 1L;
        for (p_1030->g_83.f4 = 3; (p_1030->g_83.f4 <= (-29)); p_1030->g_83.f4--)
        { /* block id: 167 */
            int32_t **l_337 = &l_238;
            (*l_337) = (*p_1030->g_143);
        }
        (*l_338) = p_61;
        l_339[0] |= (*l_338);
        (*p_1030->g_342) = (*p_1030->g_67);
    }
    return p_1030->g_343;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[21];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 21; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[21];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 21; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[30];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 30; i++)
            l_comm_values[i] = 1;
    struct S4 c_1031;
    struct S4* p_1030 = &c_1031;
    struct S4 c_1032 = {
        0x576715F0L, // p_1030->g_2
        0x28DB1AE9L, // p_1030->g_53
        (void*)0, // p_1030->g_68
        &p_1030->g_68, // p_1030->g_67
        {0x5DL,0x5DL,0x5DL,0x5DL,0x5DL,0x5DL,0x5DL}, // p_1030->g_74
        18446744073709551609UL, // p_1030->g_76
        6UL, // p_1030->g_80
        {5L,0x8427463D6F3B0A6BL,0x5E8EBF9DL,0xD6F57B8DL,0x05FC26EAL,1UL,1UL,6L,0x4A040150F896C2AEL}, // p_1030->g_83
        0x3C9C4D8FL, // p_1030->g_85
        2L, // p_1030->g_87
        (VECTOR(int32_t, 8))(0x74066B75L, (VECTOR(int32_t, 4))(0x74066B75L, (VECTOR(int32_t, 2))(0x74066B75L, 7L), 7L), 7L, 0x74066B75L, 7L), // p_1030->g_89
        (VECTOR(int8_t, 2))(1L, 0L), // p_1030->g_98
        (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x51E6L), 0x51E6L), // p_1030->g_99
        {253UL,252UL,253UL,253UL,252UL,253UL,253UL}, // p_1030->g_130
        18446744073709551615UL, // p_1030->g_135
        (void*)0, // p_1030->g_142
        &p_1030->g_68, // p_1030->g_143
        &p_1030->g_80, // p_1030->g_159
        0x439F2745L, // p_1030->g_172
        &p_1030->g_159, // p_1030->g_179
        &p_1030->g_179, // p_1030->g_178
        0x71A1B547L, // p_1030->g_182
        {18446744073709551606UL,18446744073709551606UL,18446744073709551606UL}, // p_1030->g_183
        0x8DL, // p_1030->g_184
        {-1L,2UL,0x19B4075BL,4294967286UL,9L,0xF97B576BB6D1ACEEL,65535UL,0L,-7L}, // p_1030->g_232
        {-10L}, // p_1030->g_253
        &p_1030->g_53, // p_1030->g_264
        0UL, // p_1030->g_295
        &p_1030->g_74[4], // p_1030->g_298
        &p_1030->g_298, // p_1030->g_297
        (VECTOR(int16_t, 4))(0x49D5L, (VECTOR(int16_t, 2))(0x49D5L, (-9L)), (-9L)), // p_1030->g_299
        (VECTOR(int32_t, 2))(0x06F50835L, 0x49535A7AL), // p_1030->g_306
        {&p_1030->g_232,&p_1030->g_232,&p_1030->g_232,&p_1030->g_232,&p_1030->g_232,&p_1030->g_232,&p_1030->g_232,&p_1030->g_232,&p_1030->g_232}, // p_1030->g_308
        {{0x73EFF6A7A4DC3081L,0x8F5E786042C3A197L,-1L,1UL,0x43469EF6L,0x0DCA2FCF8A40BFA0L,0x428AL,-1L,-5L},{0x73EFF6A7A4DC3081L,0x8F5E786042C3A197L,-1L,1UL,0x43469EF6L,0x0DCA2FCF8A40BFA0L,0x428AL,-1L,-5L},{0x73EFF6A7A4DC3081L,0x8F5E786042C3A197L,-1L,1UL,0x43469EF6L,0x0DCA2FCF8A40BFA0L,0x428AL,-1L,-5L},{0x73EFF6A7A4DC3081L,0x8F5E786042C3A197L,-1L,1UL,0x43469EF6L,0x0DCA2FCF8A40BFA0L,0x428AL,-1L,-5L},{0x73EFF6A7A4DC3081L,0x8F5E786042C3A197L,-1L,1UL,0x43469EF6L,0x0DCA2FCF8A40BFA0L,0x428AL,-1L,-5L}}, // p_1030->g_309
        &p_1030->g_87, // p_1030->g_320
        (void*)0, // p_1030->g_326
        &p_1030->g_326, // p_1030->g_325
        &p_1030->g_325, // p_1030->g_324
        (void*)0, // p_1030->g_341
        &p_1030->g_68, // p_1030->g_342
        {4UL}, // p_1030->g_343
        {0L,0UL,0L,0x40DDA1B7L,0x4A9CCAB8L,0x3872A3C418B19E56L,0x814BL,0x1D99EC2BL,6L}, // p_1030->g_355
        {{&p_1030->g_232,&p_1030->g_232,(void*)0,&p_1030->g_232},{&p_1030->g_232,&p_1030->g_232,(void*)0,&p_1030->g_232},{&p_1030->g_232,&p_1030->g_232,(void*)0,&p_1030->g_232},{&p_1030->g_232,&p_1030->g_232,(void*)0,&p_1030->g_232},{&p_1030->g_232,&p_1030->g_232,(void*)0,&p_1030->g_232},{&p_1030->g_232,&p_1030->g_232,(void*)0,&p_1030->g_232},{&p_1030->g_232,&p_1030->g_232,(void*)0,&p_1030->g_232}}, // p_1030->g_356
        &p_1030->g_355, // p_1030->g_357
        {3L,18446744073709551610UL,1L,1UL,8L,18446744073709551608UL,0xE4F3L,0x36BC6A5AL,1L}, // p_1030->g_358
        (void*)0, // p_1030->g_359
        {{{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83}},{{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83}},{{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83}},{{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83}},{{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83}},{{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83}},{{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83}},{{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83}},{{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83},{&p_1030->g_358,&p_1030->g_83,&p_1030->g_83}}}, // p_1030->g_360
        &p_1030->g_83, // p_1030->g_361
        {0L}, // p_1030->g_613
        {-1L}, // p_1030->g_615
        (VECTOR(uint32_t, 2))(4294967286UL, 0x8047E7A8L), // p_1030->g_624
        (VECTOR(uint16_t, 16))(8UL, (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 0xD5DDL), 0xD5DDL), 0xD5DDL, 8UL, 0xD5DDL, (VECTOR(uint16_t, 2))(8UL, 0xD5DDL), (VECTOR(uint16_t, 2))(8UL, 0xD5DDL), 8UL, 0xD5DDL, 8UL, 0xD5DDL), // p_1030->g_627
        &p_1030->g_68, // p_1030->g_862
        {-6L,0x8755B40960C69BFEL,5L,0xAACE0A1DL,-1L,0UL,0xAA6CL,0x1A55B2D3L,0x7EBE0682D3220112L}, // p_1030->g_866
        (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x6589CD18L), 0x6589CD18L), // p_1030->g_867
        {0L,7UL,0L,0x9C06AFEFL,6L,4UL,65535UL,0x746C77CDL,0L}, // p_1030->g_891
        &p_1030->g_891, // p_1030->g_892
        (VECTOR(int32_t, 16))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x4C807D47L), 0x4C807D47L), 0x4C807D47L, (-5L), 0x4C807D47L, (VECTOR(int32_t, 2))((-5L), 0x4C807D47L), (VECTOR(int32_t, 2))((-5L), 0x4C807D47L), (-5L), 0x4C807D47L, (-5L), 0x4C807D47L), // p_1030->g_985
        {65535UL}, // p_1030->g_1014
        (VECTOR(uint8_t, 2))(252UL, 0x02L), // p_1030->g_1019
        (void*)0, // p_1030->g_1026
        0, // p_1030->v_collective
        sequence_input[get_global_id(0)], // p_1030->global_0_offset
        sequence_input[get_global_id(1)], // p_1030->global_1_offset
        sequence_input[get_global_id(2)], // p_1030->global_2_offset
        sequence_input[get_local_id(0)], // p_1030->local_0_offset
        sequence_input[get_local_id(1)], // p_1030->local_1_offset
        sequence_input[get_local_id(2)], // p_1030->local_2_offset
        sequence_input[get_group_id(0)], // p_1030->group_0_offset
        sequence_input[get_group_id(1)], // p_1030->group_1_offset
        sequence_input[get_group_id(2)], // p_1030->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 30)), permutations[0][get_linear_local_id()])), // p_1030->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1031 = c_1032;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1030);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1030->g_2, "p_1030->g_2", print_hash_value);
    transparent_crc(p_1030->g_53, "p_1030->g_53", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1030->g_74[i], "p_1030->g_74[i]", print_hash_value);

    }
    transparent_crc(p_1030->g_76, "p_1030->g_76", print_hash_value);
    transparent_crc(p_1030->g_80, "p_1030->g_80", print_hash_value);
    transparent_crc(p_1030->g_83.f0, "p_1030->g_83.f0", print_hash_value);
    transparent_crc(p_1030->g_83.f1, "p_1030->g_83.f1", print_hash_value);
    transparent_crc(p_1030->g_83.f2, "p_1030->g_83.f2", print_hash_value);
    transparent_crc(p_1030->g_83.f3, "p_1030->g_83.f3", print_hash_value);
    transparent_crc(p_1030->g_83.f4, "p_1030->g_83.f4", print_hash_value);
    transparent_crc(p_1030->g_83.f5, "p_1030->g_83.f5", print_hash_value);
    transparent_crc(p_1030->g_83.f6, "p_1030->g_83.f6", print_hash_value);
    transparent_crc(p_1030->g_83.f7, "p_1030->g_83.f7", print_hash_value);
    transparent_crc(p_1030->g_83.f8, "p_1030->g_83.f8", print_hash_value);
    transparent_crc(p_1030->g_85, "p_1030->g_85", print_hash_value);
    transparent_crc(p_1030->g_87, "p_1030->g_87", print_hash_value);
    transparent_crc(p_1030->g_89.s0, "p_1030->g_89.s0", print_hash_value);
    transparent_crc(p_1030->g_89.s1, "p_1030->g_89.s1", print_hash_value);
    transparent_crc(p_1030->g_89.s2, "p_1030->g_89.s2", print_hash_value);
    transparent_crc(p_1030->g_89.s3, "p_1030->g_89.s3", print_hash_value);
    transparent_crc(p_1030->g_89.s4, "p_1030->g_89.s4", print_hash_value);
    transparent_crc(p_1030->g_89.s5, "p_1030->g_89.s5", print_hash_value);
    transparent_crc(p_1030->g_89.s6, "p_1030->g_89.s6", print_hash_value);
    transparent_crc(p_1030->g_89.s7, "p_1030->g_89.s7", print_hash_value);
    transparent_crc(p_1030->g_98.x, "p_1030->g_98.x", print_hash_value);
    transparent_crc(p_1030->g_98.y, "p_1030->g_98.y", print_hash_value);
    transparent_crc(p_1030->g_99.x, "p_1030->g_99.x", print_hash_value);
    transparent_crc(p_1030->g_99.y, "p_1030->g_99.y", print_hash_value);
    transparent_crc(p_1030->g_99.z, "p_1030->g_99.z", print_hash_value);
    transparent_crc(p_1030->g_99.w, "p_1030->g_99.w", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1030->g_130[i], "p_1030->g_130[i]", print_hash_value);

    }
    transparent_crc(p_1030->g_135, "p_1030->g_135", print_hash_value);
    transparent_crc(p_1030->g_172, "p_1030->g_172", print_hash_value);
    transparent_crc(p_1030->g_182, "p_1030->g_182", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1030->g_183[i], "p_1030->g_183[i]", print_hash_value);

    }
    transparent_crc(p_1030->g_184, "p_1030->g_184", print_hash_value);
    transparent_crc(p_1030->g_232.f0, "p_1030->g_232.f0", print_hash_value);
    transparent_crc(p_1030->g_232.f1, "p_1030->g_232.f1", print_hash_value);
    transparent_crc(p_1030->g_232.f2, "p_1030->g_232.f2", print_hash_value);
    transparent_crc(p_1030->g_232.f3, "p_1030->g_232.f3", print_hash_value);
    transparent_crc(p_1030->g_232.f4, "p_1030->g_232.f4", print_hash_value);
    transparent_crc(p_1030->g_232.f5, "p_1030->g_232.f5", print_hash_value);
    transparent_crc(p_1030->g_232.f6, "p_1030->g_232.f6", print_hash_value);
    transparent_crc(p_1030->g_232.f7, "p_1030->g_232.f7", print_hash_value);
    transparent_crc(p_1030->g_232.f8, "p_1030->g_232.f8", print_hash_value);
    transparent_crc(p_1030->g_253.f0, "p_1030->g_253.f0", print_hash_value);
    transparent_crc(p_1030->g_295, "p_1030->g_295", print_hash_value);
    transparent_crc(p_1030->g_299.x, "p_1030->g_299.x", print_hash_value);
    transparent_crc(p_1030->g_299.y, "p_1030->g_299.y", print_hash_value);
    transparent_crc(p_1030->g_299.z, "p_1030->g_299.z", print_hash_value);
    transparent_crc(p_1030->g_299.w, "p_1030->g_299.w", print_hash_value);
    transparent_crc(p_1030->g_306.x, "p_1030->g_306.x", print_hash_value);
    transparent_crc(p_1030->g_306.y, "p_1030->g_306.y", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1030->g_309[i].f0, "p_1030->g_309[i].f0", print_hash_value);
        transparent_crc(p_1030->g_309[i].f1, "p_1030->g_309[i].f1", print_hash_value);
        transparent_crc(p_1030->g_309[i].f2, "p_1030->g_309[i].f2", print_hash_value);
        transparent_crc(p_1030->g_309[i].f3, "p_1030->g_309[i].f3", print_hash_value);
        transparent_crc(p_1030->g_309[i].f4, "p_1030->g_309[i].f4", print_hash_value);
        transparent_crc(p_1030->g_309[i].f5, "p_1030->g_309[i].f5", print_hash_value);
        transparent_crc(p_1030->g_309[i].f6, "p_1030->g_309[i].f6", print_hash_value);
        transparent_crc(p_1030->g_309[i].f7, "p_1030->g_309[i].f7", print_hash_value);
        transparent_crc(p_1030->g_309[i].f8, "p_1030->g_309[i].f8", print_hash_value);

    }
    transparent_crc(p_1030->g_355.f0, "p_1030->g_355.f0", print_hash_value);
    transparent_crc(p_1030->g_355.f1, "p_1030->g_355.f1", print_hash_value);
    transparent_crc(p_1030->g_355.f2, "p_1030->g_355.f2", print_hash_value);
    transparent_crc(p_1030->g_355.f3, "p_1030->g_355.f3", print_hash_value);
    transparent_crc(p_1030->g_355.f4, "p_1030->g_355.f4", print_hash_value);
    transparent_crc(p_1030->g_355.f5, "p_1030->g_355.f5", print_hash_value);
    transparent_crc(p_1030->g_355.f6, "p_1030->g_355.f6", print_hash_value);
    transparent_crc(p_1030->g_355.f7, "p_1030->g_355.f7", print_hash_value);
    transparent_crc(p_1030->g_355.f8, "p_1030->g_355.f8", print_hash_value);
    transparent_crc(p_1030->g_358.f0, "p_1030->g_358.f0", print_hash_value);
    transparent_crc(p_1030->g_358.f1, "p_1030->g_358.f1", print_hash_value);
    transparent_crc(p_1030->g_358.f2, "p_1030->g_358.f2", print_hash_value);
    transparent_crc(p_1030->g_358.f3, "p_1030->g_358.f3", print_hash_value);
    transparent_crc(p_1030->g_358.f4, "p_1030->g_358.f4", print_hash_value);
    transparent_crc(p_1030->g_358.f5, "p_1030->g_358.f5", print_hash_value);
    transparent_crc(p_1030->g_358.f6, "p_1030->g_358.f6", print_hash_value);
    transparent_crc(p_1030->g_358.f7, "p_1030->g_358.f7", print_hash_value);
    transparent_crc(p_1030->g_358.f8, "p_1030->g_358.f8", print_hash_value);
    transparent_crc(p_1030->g_613.f0, "p_1030->g_613.f0", print_hash_value);
    transparent_crc(p_1030->g_615.f0, "p_1030->g_615.f0", print_hash_value);
    transparent_crc(p_1030->g_624.x, "p_1030->g_624.x", print_hash_value);
    transparent_crc(p_1030->g_624.y, "p_1030->g_624.y", print_hash_value);
    transparent_crc(p_1030->g_627.s0, "p_1030->g_627.s0", print_hash_value);
    transparent_crc(p_1030->g_627.s1, "p_1030->g_627.s1", print_hash_value);
    transparent_crc(p_1030->g_627.s2, "p_1030->g_627.s2", print_hash_value);
    transparent_crc(p_1030->g_627.s3, "p_1030->g_627.s3", print_hash_value);
    transparent_crc(p_1030->g_627.s4, "p_1030->g_627.s4", print_hash_value);
    transparent_crc(p_1030->g_627.s5, "p_1030->g_627.s5", print_hash_value);
    transparent_crc(p_1030->g_627.s6, "p_1030->g_627.s6", print_hash_value);
    transparent_crc(p_1030->g_627.s7, "p_1030->g_627.s7", print_hash_value);
    transparent_crc(p_1030->g_627.s8, "p_1030->g_627.s8", print_hash_value);
    transparent_crc(p_1030->g_627.s9, "p_1030->g_627.s9", print_hash_value);
    transparent_crc(p_1030->g_627.sa, "p_1030->g_627.sa", print_hash_value);
    transparent_crc(p_1030->g_627.sb, "p_1030->g_627.sb", print_hash_value);
    transparent_crc(p_1030->g_627.sc, "p_1030->g_627.sc", print_hash_value);
    transparent_crc(p_1030->g_627.sd, "p_1030->g_627.sd", print_hash_value);
    transparent_crc(p_1030->g_627.se, "p_1030->g_627.se", print_hash_value);
    transparent_crc(p_1030->g_627.sf, "p_1030->g_627.sf", print_hash_value);
    transparent_crc(p_1030->g_866.f0, "p_1030->g_866.f0", print_hash_value);
    transparent_crc(p_1030->g_866.f1, "p_1030->g_866.f1", print_hash_value);
    transparent_crc(p_1030->g_866.f2, "p_1030->g_866.f2", print_hash_value);
    transparent_crc(p_1030->g_866.f3, "p_1030->g_866.f3", print_hash_value);
    transparent_crc(p_1030->g_866.f4, "p_1030->g_866.f4", print_hash_value);
    transparent_crc(p_1030->g_866.f5, "p_1030->g_866.f5", print_hash_value);
    transparent_crc(p_1030->g_866.f6, "p_1030->g_866.f6", print_hash_value);
    transparent_crc(p_1030->g_866.f7, "p_1030->g_866.f7", print_hash_value);
    transparent_crc(p_1030->g_866.f8, "p_1030->g_866.f8", print_hash_value);
    transparent_crc(p_1030->g_867.x, "p_1030->g_867.x", print_hash_value);
    transparent_crc(p_1030->g_867.y, "p_1030->g_867.y", print_hash_value);
    transparent_crc(p_1030->g_867.z, "p_1030->g_867.z", print_hash_value);
    transparent_crc(p_1030->g_867.w, "p_1030->g_867.w", print_hash_value);
    transparent_crc(p_1030->g_891.f0, "p_1030->g_891.f0", print_hash_value);
    transparent_crc(p_1030->g_891.f1, "p_1030->g_891.f1", print_hash_value);
    transparent_crc(p_1030->g_891.f2, "p_1030->g_891.f2", print_hash_value);
    transparent_crc(p_1030->g_891.f3, "p_1030->g_891.f3", print_hash_value);
    transparent_crc(p_1030->g_891.f4, "p_1030->g_891.f4", print_hash_value);
    transparent_crc(p_1030->g_891.f5, "p_1030->g_891.f5", print_hash_value);
    transparent_crc(p_1030->g_891.f6, "p_1030->g_891.f6", print_hash_value);
    transparent_crc(p_1030->g_891.f7, "p_1030->g_891.f7", print_hash_value);
    transparent_crc(p_1030->g_891.f8, "p_1030->g_891.f8", print_hash_value);
    transparent_crc(p_1030->g_985.s0, "p_1030->g_985.s0", print_hash_value);
    transparent_crc(p_1030->g_985.s1, "p_1030->g_985.s1", print_hash_value);
    transparent_crc(p_1030->g_985.s2, "p_1030->g_985.s2", print_hash_value);
    transparent_crc(p_1030->g_985.s3, "p_1030->g_985.s3", print_hash_value);
    transparent_crc(p_1030->g_985.s4, "p_1030->g_985.s4", print_hash_value);
    transparent_crc(p_1030->g_985.s5, "p_1030->g_985.s5", print_hash_value);
    transparent_crc(p_1030->g_985.s6, "p_1030->g_985.s6", print_hash_value);
    transparent_crc(p_1030->g_985.s7, "p_1030->g_985.s7", print_hash_value);
    transparent_crc(p_1030->g_985.s8, "p_1030->g_985.s8", print_hash_value);
    transparent_crc(p_1030->g_985.s9, "p_1030->g_985.s9", print_hash_value);
    transparent_crc(p_1030->g_985.sa, "p_1030->g_985.sa", print_hash_value);
    transparent_crc(p_1030->g_985.sb, "p_1030->g_985.sb", print_hash_value);
    transparent_crc(p_1030->g_985.sc, "p_1030->g_985.sc", print_hash_value);
    transparent_crc(p_1030->g_985.sd, "p_1030->g_985.sd", print_hash_value);
    transparent_crc(p_1030->g_985.se, "p_1030->g_985.se", print_hash_value);
    transparent_crc(p_1030->g_985.sf, "p_1030->g_985.sf", print_hash_value);
    transparent_crc(p_1030->g_1014.f0, "p_1030->g_1014.f0", print_hash_value);
    transparent_crc(p_1030->g_1019.x, "p_1030->g_1019.x", print_hash_value);
    transparent_crc(p_1030->g_1019.y, "p_1030->g_1019.y", print_hash_value);
    transparent_crc(p_1030->v_collective, "p_1030->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 21; i++)
            transparent_crc(p_1030->g_special_values[i + 21 * get_linear_group_id()], "p_1030->g_special_values[i + 21 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 21; i++)
            transparent_crc(p_1030->l_special_values[i], "p_1030->l_special_values[i]", print_hash_value);
    transparent_crc(p_1030->l_comm_values[get_linear_local_id()], "p_1030->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1030->g_comm_values[get_linear_group_id() * 30 + get_linear_local_id()], "p_1030->g_comm_values[get_linear_group_id() * 30 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
