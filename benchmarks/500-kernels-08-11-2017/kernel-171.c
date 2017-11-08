// --atomics 59 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 41,38,2 -l 1,19,2
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

__constant uint32_t permutations[10][38] = {
{21,20,7,26,5,0,33,36,32,27,34,12,2,1,16,13,11,30,23,29,17,35,25,24,28,31,8,15,19,4,6,18,14,3,37,9,22,10}, // permutation 0
{30,25,21,0,13,5,11,7,27,19,34,6,26,35,2,33,20,16,31,22,32,36,12,10,24,8,28,3,14,9,37,17,1,15,18,23,29,4}, // permutation 1
{5,33,20,36,12,29,32,11,31,16,21,37,9,27,0,17,1,23,35,10,3,6,28,4,14,30,15,2,7,25,34,8,18,19,13,22,26,24}, // permutation 2
{12,9,36,20,5,6,23,34,1,29,35,0,3,7,18,4,24,25,27,31,16,14,21,13,8,2,22,33,11,15,28,30,26,37,10,19,17,32}, // permutation 3
{10,35,37,33,20,13,21,15,18,29,34,26,28,9,22,19,23,7,30,32,27,17,8,4,6,16,5,0,2,24,14,12,3,36,1,31,11,25}, // permutation 4
{1,24,22,37,6,26,3,8,20,25,31,27,19,29,7,17,35,18,16,11,23,10,15,14,12,34,21,32,9,13,2,36,4,28,5,30,0,33}, // permutation 5
{3,25,13,14,11,37,33,34,18,29,5,8,31,26,36,1,27,20,12,7,4,35,15,17,16,9,0,28,19,21,24,22,2,32,30,6,10,23}, // permutation 6
{2,37,1,23,31,0,30,17,4,25,36,24,26,29,11,14,22,8,18,34,6,16,3,32,10,12,13,27,5,33,19,20,21,15,7,28,9,35}, // permutation 7
{4,36,37,10,11,1,12,35,27,5,32,7,24,3,18,20,30,21,9,15,0,33,23,25,8,31,28,34,17,22,13,14,2,6,26,16,19,29}, // permutation 8
{8,0,16,14,17,25,32,18,34,22,19,11,36,13,7,12,30,29,24,10,28,1,27,31,2,6,35,23,3,5,37,26,4,9,20,15,21,33} // permutation 9
};

// Seed: 381140721

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int16_t  f0;
   volatile int16_t  f1;
};

struct S1 {
    int8_t g_2;
    volatile VECTOR(uint8_t, 16) g_3;
    int32_t g_9;
    int8_t g_38;
    int64_t g_53;
    int8_t g_55;
    int32_t g_81;
    uint8_t g_82;
    VECTOR(int64_t, 4) g_119;
    uint64_t g_122;
    uint64_t g_128;
    VECTOR(int32_t, 2) g_133;
    int32_t g_143[8][9];
    int32_t *g_142;
    int64_t **g_155;
    VECTOR(uint16_t, 16) g_164;
    VECTOR(uint16_t, 16) g_165;
    VECTOR(int16_t, 2) g_167;
    VECTOR(int64_t, 8) g_170;
    VECTOR(int8_t, 2) g_179;
    VECTOR(uint8_t, 2) g_180;
    VECTOR(int16_t, 16) g_181;
    int32_t g_193;
    uint32_t g_199;
    VECTOR(uint32_t, 2) g_202;
    VECTOR(uint32_t, 4) g_203;
    VECTOR(uint32_t, 2) g_205;
    VECTOR(uint32_t, 16) g_206;
    int16_t g_220;
    uint32_t g_221;
    VECTOR(int8_t, 4) g_240;
    VECTOR(int8_t, 16) g_242;
    VECTOR(int8_t, 16) g_244;
    VECTOR(int8_t, 2) g_298;
    VECTOR(uint8_t, 2) g_302;
    int64_t *g_313;
    uint32_t g_326;
    int32_t g_328;
    VECTOR(uint32_t, 16) g_332;
    uint8_t g_342;
    uint32_t *g_346;
    uint32_t **g_345;
    int8_t *g_383;
    int8_t * volatile *g_382;
    VECTOR(uint16_t, 16) g_398;
    VECTOR(uint32_t, 8) g_422;
    VECTOR(int64_t, 8) g_424;
    int8_t ***g_440;
    VECTOR(int16_t, 4) g_444;
    VECTOR(uint16_t, 4) g_453;
    VECTOR(int32_t, 2) g_467;
    int32_t *g_481[7];
    int32_t **g_480[9][8][2];
    VECTOR(int64_t, 8) g_493;
    VECTOR(int16_t, 8) g_526;
    VECTOR(uint16_t, 2) g_536;
    VECTOR(int32_t, 16) g_550;
    uint16_t g_567[2];
    VECTOR(uint64_t, 16) g_592;
    VECTOR(uint64_t, 2) g_593;
    VECTOR(uint64_t, 16) g_594;
    uint32_t *g_646;
    VECTOR(uint8_t, 8) g_669;
    VECTOR(int16_t, 2) g_670;
    union U0 g_787;
    uint32_t g_791;
    VECTOR(int16_t, 16) g_799;
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
int64_t  func_1(struct S1 * p_895);
int32_t * func_12(int32_t * p_13, uint8_t  p_14, int32_t * p_15, struct S1 * p_895);
uint64_t  func_16(uint64_t  p_17, int32_t  p_18, int32_t * p_19, int32_t * p_20, uint32_t  p_21, struct S1 * p_895);
int32_t * func_23(int32_t * p_24, uint64_t  p_25, int32_t * p_26, int32_t  p_27, struct S1 * p_895);
int32_t * func_29(uint32_t  p_30, int32_t * p_31, struct S1 * p_895);
int32_t  func_47(int8_t  p_48, struct S1 * p_895);
uint16_t  func_69(uint64_t  p_70, uint32_t  p_71, int8_t * p_72, struct S1 * p_895);
int32_t * func_87(int8_t  p_88, uint32_t  p_89, struct S1 * p_895);
uint64_t  func_90(int32_t * p_91, int64_t * p_92, struct S1 * p_895);
int64_t * func_93(int64_t * p_94, uint64_t  p_95, int8_t  p_96, int8_t * p_97, int64_t * p_98, struct S1 * p_895);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_895->g_3 p_895->g_9 p_895->g_2 p_895->l_comm_values p_895->g_193 p_895->g_791 p_895->g_326 p_895->g_453 p_895->g_493 p_895->g_594 p_895->g_82 p_895->g_179
 * writes: p_895->g_2 p_895->g_9 p_895->g_193 p_895->g_326 p_895->g_119 p_895->g_82 p_895->g_55
 */
int64_t  func_1(struct S1 * p_895)
{ /* block id: 4 */
    uint32_t l_4 = 4294967289UL;
    VECTOR(int32_t, 4) l_5 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L));
    VECTOR(int32_t, 4) l_6 = (VECTOR(int32_t, 4))(0x734111D0L, (VECTOR(int32_t, 2))(0x734111D0L, 0x0753E1E0L), 0x0753E1E0L);
    int32_t *l_7 = (void*)0;
    int32_t *l_8 = &p_895->g_9;
    uint32_t l_22 = 4294967286UL;
    int64_t l_889 = 9L;
    int32_t l_890 = 0x4F6F9F52L;
    int i;
    (*l_8) ^= (((p_895->g_2 = 0x0BL) >= ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(p_895->g_3.s8e)))).xxyyxxyx)).s7) , (l_4 == ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-1L), 1L)).xyyx)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_5.xy)))).yyxx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_6.ywywywzw)))).odd)), ((VECTOR(int32_t, 4))((-1L), 0x45BBBDEBL, 0x09E022A5L, 0x42206DD2L)))).even))).x));
    for (p_895->g_2 = 21; (p_895->g_2 != (-4)); p_895->g_2 = safe_sub_func_int64_t_s_s(p_895->g_2, 6))
    { /* block id: 9 */
        uint16_t l_28 = 7UL;
        int32_t l_36 = 0x04E266BCL;
        int8_t *l_37[1][2][10] = {{{&p_895->g_2,&p_895->g_2,(void*)0,&p_895->g_2,&p_895->g_2,&p_895->g_2,&p_895->g_2,(void*)0,&p_895->g_2,&p_895->g_2},{&p_895->g_2,&p_895->g_2,(void*)0,&p_895->g_2,&p_895->g_2,&p_895->g_2,&p_895->g_2,(void*)0,&p_895->g_2,&p_895->g_2}}};
        int32_t l_39 = 5L;
        int32_t *l_40 = &p_895->g_9;
        int64_t *l_848 = (void*)0;
        int64_t *l_849 = (void*)0;
        int64_t *l_850 = (void*)0;
        int64_t *l_851 = (void*)0;
        int64_t *l_852 = (void*)0;
        int64_t *l_853 = (void*)0;
        int64_t *l_854 = (void*)0;
        int64_t *l_855 = (void*)0;
        int64_t *l_856 = (void*)0;
        int64_t *l_857[2];
        int32_t *l_886 = &p_895->g_81;
        int32_t *l_887 = &l_39;
        int32_t *l_888[10][3][6] = {{{&p_895->g_193,(void*)0,&l_39,(void*)0,(void*)0,(void*)0},{&p_895->g_193,(void*)0,&l_39,(void*)0,(void*)0,(void*)0},{&p_895->g_193,(void*)0,&l_39,(void*)0,(void*)0,(void*)0}},{{&p_895->g_193,(void*)0,&l_39,(void*)0,(void*)0,(void*)0},{&p_895->g_193,(void*)0,&l_39,(void*)0,(void*)0,(void*)0},{&p_895->g_193,(void*)0,&l_39,(void*)0,(void*)0,(void*)0}},{{&p_895->g_193,(void*)0,&l_39,(void*)0,(void*)0,(void*)0},{&p_895->g_193,(void*)0,&l_39,(void*)0,(void*)0,(void*)0},{&p_895->g_193,(void*)0,&l_39,(void*)0,(void*)0,(void*)0}},{{&p_895->g_193,(void*)0,&l_39,(void*)0,(void*)0,(void*)0},{&p_895->g_193,(void*)0,&l_39,(void*)0,(void*)0,(void*)0},{&p_895->g_193,(void*)0,&l_39,(void*)0,(void*)0,(void*)0}},{{&p_895->g_193,(void*)0,&l_39,(void*)0,(void*)0,(void*)0},{&p_895->g_193,(void*)0,&l_39,(void*)0,(void*)0,(void*)0},{&p_895->g_193,(void*)0,&l_39,(void*)0,(void*)0,(void*)0}},{{&p_895->g_193,(void*)0,&l_39,(void*)0,(void*)0,(void*)0},{&p_895->g_193,(void*)0,&l_39,(void*)0,(void*)0,(void*)0},{&p_895->g_193,(void*)0,&l_39,(void*)0,(void*)0,(void*)0}},{{&p_895->g_193,(void*)0,&l_39,(void*)0,(void*)0,(void*)0},{&p_895->g_193,(void*)0,&l_39,(void*)0,(void*)0,(void*)0},{&p_895->g_193,(void*)0,&l_39,(void*)0,(void*)0,(void*)0}},{{&p_895->g_193,(void*)0,&l_39,(void*)0,(void*)0,(void*)0},{&p_895->g_193,(void*)0,&l_39,(void*)0,(void*)0,(void*)0},{&p_895->g_193,(void*)0,&l_39,(void*)0,(void*)0,(void*)0}},{{&p_895->g_193,(void*)0,&l_39,(void*)0,(void*)0,(void*)0},{&p_895->g_193,(void*)0,&l_39,(void*)0,(void*)0,(void*)0},{&p_895->g_193,(void*)0,&l_39,(void*)0,(void*)0,(void*)0}},{{&p_895->g_193,(void*)0,&l_39,(void*)0,(void*)0,(void*)0},{&p_895->g_193,(void*)0,&l_39,(void*)0,(void*)0,(void*)0},{&p_895->g_193,(void*)0,&l_39,(void*)0,(void*)0,(void*)0}}};
        int32_t l_891 = 0x40F8114CL;
        uint8_t l_892 = 0x9AL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_857[i] = (void*)0;
        l_40 = func_12(((p_895->g_119.w = (((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))((0x20L < p_895->g_9), p_895->g_9, 0x73L, (-1L), ((func_16(p_895->g_3.sb, l_22, func_23(l_7, l_28, func_29((safe_rshift_func_int8_t_s_s((l_39 &= (((-1L) >= ((safe_add_func_int32_t_s_s((((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 2))(0x1FL, 1UL)).yyxyxxxyxyyyyxyy, ((VECTOR(uint8_t, 16))(((l_28 , (*l_8)) , p_895->g_2), 0xB8L, ((VECTOR(uint8_t, 2))(6UL)), 1UL, ((VECTOR(uint8_t, 8))(0x5EL)), ((VECTOR(uint8_t, 2))(0x0CL)), 0x3AL))))).sdc, ((VECTOR(uint8_t, 2))(0xECL))))).lo ^ GROUP_DIVERGE(1, 1)), p_895->l_comm_values[(safe_mod_func_uint32_t_u_u(p_895->tid, 38))])) ^ FAKE_DIVERGE(p_895->group_2_offset, get_group_id(2), 10))) != l_36)), 2)), l_40, p_895), l_28, p_895), l_7, l_36, p_895) >= (-1L)) <= 0x084AL), ((VECTOR(int8_t, 2))(5L)), ((VECTOR(int8_t, 2))(3L)), 0x34L, ((VECTOR(int8_t, 2))(0x5DL)), 0x2AL, 1L, 0x56L, 0L)).lo)), ((VECTOR(int8_t, 8))((-8L)))))).s60)).lo , p_895->g_453.z)) , (void*)0), p_895->g_493.s7, l_40, p_895);
        if ((*l_40))
            break;
        l_892++;
    }
    return (*l_8);
}


/* ------------------------------------------ */
/* 
 * reads : p_895->g_9 p_895->g_594 p_895->g_82 p_895->g_3 p_895->g_179
 * writes: p_895->g_82 p_895->g_55 p_895->g_9
 */
int32_t * func_12(int32_t * p_13, uint8_t  p_14, int32_t * p_15, struct S1 * p_895)
{ /* block id: 357 */
    union U0 *l_862 = (void*)0;
    int32_t l_867 = 0L;
    uint8_t *l_872 = &p_895->g_82;
    int32_t l_873 = (-3L);
    int8_t *l_874 = (void*)0;
    int8_t *l_875 = (void*)0;
    int8_t *l_876 = &p_895->g_55;
    int64_t *l_877 = (void*)0;
    int64_t *l_878 = (void*)0;
    int64_t *l_879 = (void*)0;
    int64_t *l_880 = (void*)0;
    int64_t *l_881[4][8][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    uint16_t l_882 = 1UL;
    int32_t *l_883[1];
    int64_t l_884 = 1L;
    int32_t **l_885 = (void*)0;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_883[i] = (void*)0;
    l_884 &= ((*p_15) = (safe_mod_func_int32_t_s_s(((safe_div_func_int32_t_s_s((l_862 != (void*)0), ((l_882 &= (((*l_876) = ((safe_mod_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(l_867, (((l_867 < ((*l_872) &= (((safe_mul_func_int8_t_s_s((((((*p_15) > (safe_sub_func_uint8_t_u_u((((&p_895->g_326 != (void*)0) < (p_14 <= 0x08L)) != l_867), p_895->g_594.s9))) , l_867) <= p_14) == l_867), 0xCBL)) , l_867) <= 0x1B6F95F2L))) < l_867) ^ p_14))), l_867)) , l_873)) , p_895->g_3.sc)) || p_14))) , l_882), p_895->g_179.y)));
    l_885 = l_885;
    (*p_15) ^= 1L;
    p_13 = &l_867;
    return p_15;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint64_t  func_16(uint64_t  p_17, int32_t  p_18, int32_t * p_19, int32_t * p_20, uint32_t  p_21, struct S1 * p_895)
{ /* block id: 354 */
    int32_t l_847[10] = {0x5C4189A3L,0L,(-5L),0L,0x5C4189A3L,0x5C4189A3L,0L,(-5L),0L,0x5C4189A3L};
    int i;
    return l_847[8];
}


/* ------------------------------------------ */
/* 
 * reads : p_895->g_193 p_895->g_791 p_895->g_9 p_895->g_326
 * writes: p_895->g_9 p_895->g_326 p_895->g_193
 */
int32_t * func_23(int32_t * p_24, uint64_t  p_25, int32_t * p_26, int32_t  p_27, struct S1 * p_895)
{ /* block id: 298 */
    union U0 *l_763 = (void*)0;
    int32_t *l_764 = &p_895->g_193;
    int32_t **l_831 = &p_895->g_142;
    VECTOR(int32_t, 16) l_843 = (VECTOR(int32_t, 16))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x17381F1DL), 0x17381F1DL), 0x17381F1DL, (-6L), 0x17381F1DL, (VECTOR(int32_t, 2))((-6L), 0x17381F1DL), (VECTOR(int32_t, 2))((-6L), 0x17381F1DL), (-6L), 0x17381F1DL, (-6L), 0x17381F1DL);
    int i;
    l_764 = ((l_763 == l_763) , l_764);
    (*p_26) = (*l_764);
    if ((atomic_inc(&p_895->g_atomic_input[59 * get_linear_group_id() + 28]) == 3))
    { /* block id: 302 */
        uint32_t l_765 = 0x7126615FL;
        union U0 l_767[2] = {{-1L},{-1L}};
        union U0 *l_766 = &l_767[1];
        union U0 *l_768 = (void*)0;
        union U0 l_770[10][8][3] = {{{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}}},{{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}}},{{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}}},{{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}}},{{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}}},{{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}}},{{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}}},{{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}}},{{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}}},{{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}},{{6L},{0x36D4L},{0x5081L}}}};
        union U0 *l_769 = &l_770[0][6][0];
        union U0 l_772 = {0x3F54L};/* VOLATILE GLOBAL l_772 */
        union U0 *l_771 = &l_772;
        int32_t l_781 = 0x6C3C2756L;
        int32_t l_782 = (-1L);
        int16_t l_783[4][4] = {{8L,8L,8L,8L},{8L,8L,8L,8L},{8L,8L,8L,8L},{8L,8L,8L,8L}};
        uint64_t l_784 = 18446744073709551615UL;
        int i, j, k;
        l_766 = (l_771 = (l_769 = (l_765 , (l_768 = l_766))));
        for (l_770[0][6][0].f0 = 28; (l_770[0][6][0].f0 == 22); l_770[0][6][0].f0 = safe_sub_func_uint64_t_u_u(l_770[0][6][0].f0, 9))
        { /* block id: 309 */
            uint32_t l_775 = 4294967292UL;
            uint32_t l_778 = 4294967295UL;
            uint16_t l_779 = 0UL;
            uint32_t l_780[1][2];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_780[i][j] = 4294967292UL;
            }
            l_780[0][0] = (l_779 &= ((l_775++) , l_778));
        }
        l_784 = (l_781 , ((l_782 ^= 0L) , l_783[1][0]));
        unsigned int result = 0;
        result += l_765;
        int l_767_i0;
        for (l_767_i0 = 0; l_767_i0 < 2; l_767_i0++) {
            result += l_767[l_767_i0].f0;
            result += l_767[l_767_i0].f1;
        }
        int l_770_i0, l_770_i1, l_770_i2;
        for (l_770_i0 = 0; l_770_i0 < 10; l_770_i0++) {
            for (l_770_i1 = 0; l_770_i1 < 8; l_770_i1++) {
                for (l_770_i2 = 0; l_770_i2 < 3; l_770_i2++) {
                    result += l_770[l_770_i0][l_770_i1][l_770_i2].f0;
                    result += l_770[l_770_i0][l_770_i1][l_770_i2].f1;
                }
            }
        }
        result += l_772.f0;
        result += l_772.f1;
        result += l_781;
        result += l_782;
        int l_783_i0, l_783_i1;
        for (l_783_i0 = 0; l_783_i0 < 4; l_783_i0++) {
            for (l_783_i1 = 0; l_783_i1 < 4; l_783_i1++) {
                result += l_783[l_783_i0][l_783_i1];
            }
        }
        result += l_784;
        atomic_add(&p_895->g_special_values[59 * get_linear_group_id() + 28], result);
    }
    else
    { /* block id: 316 */
        (1 + 1);
    }
    if (((VECTOR(int32_t, 2))(0x448D7156L, (-6L))).hi)
    { /* block id: 319 */
        union U0 **l_785[4][10][6] = {{{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0}},{{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0}},{{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0}},{{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0},{(void*)0,&l_763,&l_763,&l_763,&l_763,(void*)0}}};
        union U0 *l_786 = &p_895->g_787;
        VECTOR(uint32_t, 2) l_790 = (VECTOR(uint32_t, 2))(0UL, 1UL);
        int32_t l_792 = (-1L);
        int32_t *l_795 = &p_895->g_81;
        int32_t **l_832 = &p_895->g_142;
        uint32_t l_844 = 4294967295UL;
        int i, j, k;
        l_786 = l_763;
        l_792 &= ((*p_26) &= (safe_rshift_func_uint16_t_u_u((5UL || ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_790.yxyx)).yzyxzzyxwwzwzyww)).sa5c2)).w), p_895->g_791)));
        for (p_895->g_326 = 5; (p_895->g_326 >= 55); p_895->g_326 = safe_add_func_uint64_t_u_u(p_895->g_326, 3))
        { /* block id: 325 */
            int8_t l_798 = 0x42L;
            int64_t **l_804 = &p_895->g_313;
            int64_t ***l_805[2][9][2] = {{{&p_895->g_155,&p_895->g_155},{&p_895->g_155,&p_895->g_155},{&p_895->g_155,&p_895->g_155},{&p_895->g_155,&p_895->g_155},{&p_895->g_155,&p_895->g_155},{&p_895->g_155,&p_895->g_155},{&p_895->g_155,&p_895->g_155},{&p_895->g_155,&p_895->g_155},{&p_895->g_155,&p_895->g_155}},{{&p_895->g_155,&p_895->g_155},{&p_895->g_155,&p_895->g_155},{&p_895->g_155,&p_895->g_155},{&p_895->g_155,&p_895->g_155},{&p_895->g_155,&p_895->g_155},{&p_895->g_155,&p_895->g_155},{&p_895->g_155,&p_895->g_155},{&p_895->g_155,&p_895->g_155},{&p_895->g_155,&p_895->g_155}}};
            uint8_t *l_806 = &p_895->g_342;
            int64_t *l_811 = (void*)0;
            int64_t *l_812 = (void*)0;
            int64_t *l_813[4];
            int32_t l_814 = (-1L);
            int16_t *l_815 = &p_895->g_787.f0;
            int32_t *l_833 = (void*)0;
            int32_t *l_834 = &l_814;
            int32_t *l_835 = &p_895->g_81;
            int32_t *l_836 = (void*)0;
            int32_t *l_837 = &p_895->g_9;
            int32_t *l_838 = &l_814;
            int32_t *l_839 = &p_895->g_9;
            int32_t *l_840 = &p_895->g_328;
            int32_t *l_841 = (void*)0;
            int32_t *l_842[10];
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_813[i] = (void*)0;
            for (i = 0; i < 10; i++)
                l_842[i] = &l_814;
            l_795 = (l_764 = l_764);
        }
        return p_24;
    }
    else
    { /* block id: 349 */
        (*l_764) |= ((*p_26) ^= 0x4EF3E582L);
        return p_24;
    }
}


/* ------------------------------------------ */
/* 
 * reads : p_895->g_9 p_895->g_193
 * writes: p_895->g_9 p_895->g_193
 */
int32_t * func_29(uint32_t  p_30, int32_t * p_31, struct S1 * p_895)
{ /* block id: 11 */
    VECTOR(uint16_t, 4) l_78 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x8960L), 0x8960L);
    uint32_t l_100 = 0x0EADF19EL;
    VECTOR(uint64_t, 16) l_482 = (VECTOR(uint64_t, 16))(0xD6D3D5FEBB54981AL, (VECTOR(uint64_t, 4))(0xD6D3D5FEBB54981AL, (VECTOR(uint64_t, 2))(0xD6D3D5FEBB54981AL, 6UL), 6UL), 6UL, 0xD6D3D5FEBB54981AL, 6UL, (VECTOR(uint64_t, 2))(0xD6D3D5FEBB54981AL, 6UL), (VECTOR(uint64_t, 2))(0xD6D3D5FEBB54981AL, 6UL), 0xD6D3D5FEBB54981AL, 6UL, 0xD6D3D5FEBB54981AL, 6UL);
    int64_t **l_494 = &p_895->g_313;
    int64_t **l_539 = &p_895->g_313;
    VECTOR(uint64_t, 4) l_541 = (VECTOR(uint64_t, 4))(0x83471877B1CB72B3L, (VECTOR(uint64_t, 2))(0x83471877B1CB72B3L, 1UL), 1UL);
    uint8_t l_542 = 248UL;
    uint8_t l_545 = 1UL;
    int32_t l_557[5][2][10] = {{{0x12DDD171L,(-4L),0x14885459L,(-1L),0L,(-1L),0x39832095L,0x016D88C4L,0x1BE8EA19L,0x7B6BBC71L},{0x12DDD171L,(-4L),0x14885459L,(-1L),0L,(-1L),0x39832095L,0x016D88C4L,0x1BE8EA19L,0x7B6BBC71L}},{{0x12DDD171L,(-4L),0x14885459L,(-1L),0L,(-1L),0x39832095L,0x016D88C4L,0x1BE8EA19L,0x7B6BBC71L},{0x12DDD171L,(-4L),0x14885459L,(-1L),0L,(-1L),0x39832095L,0x016D88C4L,0x1BE8EA19L,0x7B6BBC71L}},{{0x12DDD171L,(-4L),0x14885459L,(-1L),0L,(-1L),0x39832095L,0x016D88C4L,0x1BE8EA19L,0x7B6BBC71L},{0x12DDD171L,(-4L),0x14885459L,(-1L),0L,(-1L),0x39832095L,0x016D88C4L,0x1BE8EA19L,0x7B6BBC71L}},{{0x12DDD171L,(-4L),0x14885459L,(-1L),0L,(-1L),0x39832095L,0x016D88C4L,0x1BE8EA19L,0x7B6BBC71L},{0x12DDD171L,(-4L),0x14885459L,(-1L),0L,(-1L),0x39832095L,0x016D88C4L,0x1BE8EA19L,0x7B6BBC71L}},{{0x12DDD171L,(-4L),0x14885459L,(-1L),0L,(-1L),0x39832095L,0x016D88C4L,0x1BE8EA19L,0x7B6BBC71L},{0x12DDD171L,(-4L),0x14885459L,(-1L),0L,(-1L),0x39832095L,0x016D88C4L,0x1BE8EA19L,0x7B6BBC71L}}};
    uint32_t l_598 = 4294967294UL;
    int8_t l_600 = 1L;
    int32_t l_671 = 0x049534F2L;
    int32_t l_675 = 0x3C8AC75BL;
    int16_t l_683 = 0x51D8L;
    int i, j, k;
    for (p_895->g_9 = 0; (p_895->g_9 >= 26); p_895->g_9++)
    { /* block id: 14 */
        VECTOR(int8_t, 4) l_63 = (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, 4L), 4L);
        int8_t *l_101 = &p_895->g_38;
        int8_t *l_475[6][8][5] = {{{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0}},{{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0}},{{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0}},{{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0}},{{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0}},{{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0},{(void*)0,&p_895->g_55,&p_895->g_38,&p_895->g_55,(void*)0}}};
        int32_t **l_479[3];
        uint16_t l_500 = 0xB42CL;
        int64_t **l_505[5] = {&p_895->g_313,&p_895->g_313,&p_895->g_313,&p_895->g_313,&p_895->g_313};
        int8_t *l_517 = &p_895->g_38;
        VECTOR(int64_t, 16) l_529 = (VECTOR(int64_t, 16))(0x0B2C9AB1B31BED9AL, (VECTOR(int64_t, 4))(0x0B2C9AB1B31BED9AL, (VECTOR(int64_t, 2))(0x0B2C9AB1B31BED9AL, 0x0C10C4D4B2058432L), 0x0C10C4D4B2058432L), 0x0C10C4D4B2058432L, 0x0B2C9AB1B31BED9AL, 0x0C10C4D4B2058432L, (VECTOR(int64_t, 2))(0x0B2C9AB1B31BED9AL, 0x0C10C4D4B2058432L), (VECTOR(int64_t, 2))(0x0B2C9AB1B31BED9AL, 0x0C10C4D4B2058432L), 0x0B2C9AB1B31BED9AL, 0x0C10C4D4B2058432L, 0x0B2C9AB1B31BED9AL, 0x0C10C4D4B2058432L);
        VECTOR(int64_t, 4) l_530 = (VECTOR(int64_t, 4))((-4L), (VECTOR(int64_t, 2))((-4L), (-2L)), (-2L));
        VECTOR(uint16_t, 16) l_535 = (VECTOR(uint16_t, 16))(0xE929L, (VECTOR(uint16_t, 4))(0xE929L, (VECTOR(uint16_t, 2))(0xE929L, 0x32B8L), 0x32B8L), 0x32B8L, 0xE929L, 0x32B8L, (VECTOR(uint16_t, 2))(0xE929L, 0x32B8L), (VECTOR(uint16_t, 2))(0xE929L, 0x32B8L), 0xE929L, 0x32B8L, 0xE929L, 0x32B8L);
        uint16_t l_578 = 0xCD01L;
        int64_t l_609 = (-1L);
        int8_t l_616 = (-1L);
        uint8_t l_625[2][3] = {{1UL,1UL,1UL},{1UL,1UL,1UL}};
        VECTOR(uint64_t, 2) l_632 = (VECTOR(uint64_t, 2))(1UL, 18446744073709551615UL);
        uint32_t l_676 = 4UL;
        int16_t *l_684 = (void*)0;
        uint64_t *l_687[8][6] = {{&p_895->g_128,&p_895->g_128,&p_895->g_128,&p_895->g_128,&p_895->g_128,&p_895->g_128},{&p_895->g_128,&p_895->g_128,&p_895->g_128,&p_895->g_128,&p_895->g_128,&p_895->g_128},{&p_895->g_128,&p_895->g_128,&p_895->g_128,&p_895->g_128,&p_895->g_128,&p_895->g_128},{&p_895->g_128,&p_895->g_128,&p_895->g_128,&p_895->g_128,&p_895->g_128,&p_895->g_128},{&p_895->g_128,&p_895->g_128,&p_895->g_128,&p_895->g_128,&p_895->g_128,&p_895->g_128},{&p_895->g_128,&p_895->g_128,&p_895->g_128,&p_895->g_128,&p_895->g_128,&p_895->g_128},{&p_895->g_128,&p_895->g_128,&p_895->g_128,&p_895->g_128,&p_895->g_128,&p_895->g_128},{&p_895->g_128,&p_895->g_128,&p_895->g_128,&p_895->g_128,&p_895->g_128,&p_895->g_128}};
        uint16_t *l_690 = &p_895->g_567[0];
        int16_t l_691 = 0x307CL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_479[i] = (void*)0;
        (1 + 1);
    }
    for (p_895->g_193 = (-17); (p_895->g_193 >= 17); ++p_895->g_193)
    { /* block id: 294 */
        uint32_t l_762 = 0x1C865847L;
        (*p_31) |= (l_762 , (l_494 == (void*)0));
    }
    return p_31;
}


/* ------------------------------------------ */
/* 
 * reads : p_895->g_53 p_895->g_55
 * writes: p_895->g_53 p_895->g_55
 */
int32_t  func_47(int8_t  p_48, struct S1 * p_895)
{ /* block id: 21 */
    int64_t l_51 = (-3L);
    int64_t *l_52 = &p_895->g_53;
    int32_t l_54 = 1L;
    l_54 &= (((*l_52) ^= (safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(1UL, 2UL)))).lo, l_51))) , 0L);
    p_895->g_55 ^= (-1L);
    return p_48;
}


/* ------------------------------------------ */
/* 
 * reads : p_895->g_82 p_895->g_38 p_895->g_55
 * writes: p_895->g_82 p_895->g_81
 */
uint16_t  func_69(uint64_t  p_70, uint32_t  p_71, int8_t * p_72, struct S1 * p_895)
{ /* block id: 28 */
    int32_t *l_79 = (void*)0;
    int32_t *l_80[1][4] = {{&p_895->g_81,&p_895->g_81,&p_895->g_81,&p_895->g_81}};
    int i, j;
    --p_895->g_82;
    p_895->g_81 = p_895->g_38;
    return p_895->g_55;
}


/* ------------------------------------------ */
/* 
 * reads : p_895->g_55 p_895->g_53 p_895->g_203 p_895->g_240 p_895->g_242 p_895->g_244 p_895->g_202 p_895->g_180 p_895->g_133 p_895->g_82 p_895->g_206 p_895->g_170 p_895->g_81 p_895->g_38 p_895->g_179 p_895->g_313 p_895->g_193
 * writes: p_895->g_53 p_895->g_122 p_895->g_128 p_895->g_170 p_895->g_81 p_895->g_82 p_895->g_119 p_895->g_193
 */
int32_t * func_87(int8_t  p_88, uint32_t  p_89, struct S1 * p_895)
{ /* block id: 86 */
    VECTOR(int8_t, 16) l_241 = (VECTOR(int8_t, 16))(0x47L, (VECTOR(int8_t, 4))(0x47L, (VECTOR(int8_t, 2))(0x47L, 0x1DL), 0x1DL), 0x1DL, 0x47L, 0x1DL, (VECTOR(int8_t, 2))(0x47L, 0x1DL), (VECTOR(int8_t, 2))(0x47L, 0x1DL), 0x47L, 0x1DL, 0x47L, 0x1DL);
    int32_t l_273 = 0x6289F323L;
    int32_t l_280[5][10][5] = {{{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L}},{{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L}},{{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L}},{{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L}},{{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L},{(-4L),(-3L),0x7F81B2D6L,0x0FC8BB43L,0x0FC8BB43L}}};
    VECTOR(int8_t, 4) l_297 = (VECTOR(int8_t, 4))(0x5CL, (VECTOR(int8_t, 2))(0x5CL, 1L), 1L);
    VECTOR(int8_t, 16) l_299 = (VECTOR(int8_t, 16))((-5L), (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 0x58L), 0x58L), 0x58L, (-5L), 0x58L, (VECTOR(int8_t, 2))((-5L), 0x58L), (VECTOR(int8_t, 2))((-5L), 0x58L), (-5L), 0x58L, (-5L), 0x58L);
    VECTOR(int32_t, 2) l_320 = (VECTOR(int32_t, 2))(0x1248938EL, 0x082B84FBL);
    VECTOR(int32_t, 4) l_333 = (VECTOR(int32_t, 4))(0x001C37C1L, (VECTOR(int32_t, 2))(0x001C37C1L, (-1L)), (-1L));
    uint32_t l_334 = 1UL;
    uint32_t *l_344 = (void*)0;
    uint32_t **l_343 = &l_344;
    int32_t *l_363 = &p_895->g_193;
    int32_t **l_362 = &l_363;
    VECTOR(uint16_t, 4) l_380 = (VECTOR(uint16_t, 4))(0xA701L, (VECTOR(uint16_t, 2))(0xA701L, 0x970AL), 0x970AL);
    VECTOR(uint16_t, 16) l_468 = (VECTOR(uint16_t, 16))(0x1C50L, (VECTOR(uint16_t, 4))(0x1C50L, (VECTOR(uint16_t, 2))(0x1C50L, 0x4125L), 0x4125L), 0x4125L, 0x1C50L, 0x4125L, (VECTOR(uint16_t, 2))(0x1C50L, 0x4125L), (VECTOR(uint16_t, 2))(0x1C50L, 0x4125L), 0x1C50L, 0x4125L, 0x1C50L, 0x4125L);
    int i, j, k;
    if (p_895->g_55)
    { /* block id: 87 */
        VECTOR(int8_t, 16) l_246 = (VECTOR(int8_t, 16))(0x16L, (VECTOR(int8_t, 4))(0x16L, (VECTOR(int8_t, 2))(0x16L, 1L), 1L), 1L, 0x16L, 1L, (VECTOR(int8_t, 2))(0x16L, 1L), (VECTOR(int8_t, 2))(0x16L, 1L), 0x16L, 1L, 0x16L, 1L);
        int32_t l_252 = 0x4A0397AFL;
        VECTOR(int8_t, 8) l_295 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x20L), 0x20L), 0x20L, 1L, 0x20L);
        int64_t *l_314 = &p_895->g_53;
        int8_t *l_317 = &p_895->g_38;
        int8_t **l_316 = &l_317;
        int32_t l_376 = 0x573E7E7EL;
        VECTOR(uint32_t, 4) l_400 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 3UL), 3UL);
        VECTOR(int32_t, 4) l_408 = (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, (-2L)), (-2L));
        int32_t l_469 = 0L;
        int i;
        for (p_89 = 0; (p_89 >= 56); p_89 = safe_add_func_uint64_t_u_u(p_89, 8))
        { /* block id: 90 */
            uint8_t *l_234 = &p_895->g_82;
            VECTOR(int8_t, 16) l_239 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int8_t, 2))(1L, 0L), (VECTOR(int8_t, 2))(1L, 0L), 1L, 0L, 1L, 0L);
            VECTOR(int64_t, 2) l_267 = (VECTOR(int64_t, 2))(1L, 4L);
            VECTOR(uint64_t, 2) l_268 = (VECTOR(uint64_t, 2))(0x5742EE506459D832L, 0xA9660102FAF71C87L);
            int64_t *l_271 = (void*)0;
            uint8_t *l_274 = (void*)0;
            uint8_t *l_275 = (void*)0;
            uint8_t *l_276 = (void*)0;
            uint8_t *l_277 = (void*)0;
            uint8_t *l_278[5][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
            int32_t l_279 = (-1L);
            int32_t *l_281 = &l_252;
            int i, j;
            for (p_895->g_53 = 0; (p_895->g_53 <= 8); p_895->g_53++)
            { /* block id: 93 */
                VECTOR(int8_t, 4) l_243 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x7DL), 0x7DL);
                VECTOR(int8_t, 4) l_245 = (VECTOR(int8_t, 4))(0x28L, (VECTOR(int8_t, 2))(0x28L, 0L), 0L);
                uint64_t *l_249 = &p_895->g_122;
                uint64_t *l_250 = &p_895->g_128;
                int8_t *l_251[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int64_t *l_253 = (void*)0;
                int64_t *l_254 = (void*)0;
                int64_t *l_255 = (void*)0;
                int64_t *l_256 = (void*)0;
                int64_t *l_257 = (void*)0;
                int32_t *l_258 = (void*)0;
                int32_t *l_259 = &p_895->g_81;
                int i;
                (*l_259) |= (safe_add_func_uint64_t_u_u(3UL, (p_895->g_170.s6 &= ((safe_rshift_func_int16_t_s_u((l_234 == &p_895->g_82), ((safe_rshift_func_int8_t_s_s(p_895->g_203.w, (l_252 = (((-1L) > (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(l_239.sd0ddb035)))).s61, ((VECTOR(int8_t, 2))(0x66L, 0x40L)), ((VECTOR(int8_t, 2))(p_895->g_240.yx))))))).xyxyxyxxyyyxxyxx)))).lo, (int8_t)((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 2))(l_241.s3e)).xyxxyxyy, ((VECTOR(int8_t, 2))(p_895->g_242.s8d)).xxxyxyyx, ((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 16))(l_243.wxyzzyzxwyyxyyyy)).see42, ((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 8))(p_895->g_244.s2f19d240)).s20, ((VECTOR(int8_t, 16))(7L, l_239.s5, ((VECTOR(int8_t, 8))(l_245.wwzywxzw)), ((VECTOR(int8_t, 4))(0L, 0x01L, 5L, 1L)), (-1L), 0x18L)).sdf, ((VECTOR(int8_t, 8))(l_246.sbf3c09bf)).s43))).yxyy))).xxyzwxzx, ((VECTOR(int8_t, 8))((l_241.sf != (FAKE_DIVERGE(p_895->global_1_offset, get_global_id(1), 10) || ((*l_250) = ((l_239.s2 , ((*l_249) = (((safe_mul_func_int8_t_s_s(p_895->g_202.y, p_895->g_180.y)) > p_895->g_133.x) && p_895->g_82))) >= l_243.z)))), (-1L), l_245.x, ((VECTOR(int8_t, 2))(0x4CL)), ((VECTOR(int8_t, 2))((-1L))), 0x7CL)))))))).s3464147467311162, ((VECTOR(int8_t, 16))(0x5DL))))).s6))).s7176435412720550, ((VECTOR(int8_t, 16))(8L))))).s59e1, ((VECTOR(int8_t, 4))(0x20L))))).z, 0xBBL))) || l_239.sb)))) && 0UL))) <= p_895->g_206.s2))));
                if (p_895->g_244.s5)
                    break;
                if (l_246.s5)
                    break;
            }
            (*l_281) ^= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 4))(((safe_rshift_func_int8_t_s_u(l_239.s8, (safe_unary_minus_func_uint32_t_u((((l_280[1][6][0] = (p_89 < (l_279 ^= (l_273 = ((*l_234) &= ((safe_mul_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 8))(l_267.xyxxyyxy)).even))).w ^ ((VECTOR(uint64_t, 4))(l_268.xxxy)).y), 1UL)), 0x1EL)) >= ((0x3EB74CA7D177FFDFL ^ ((safe_mul_func_int8_t_s_s((l_271 == (void*)0), ((safe_unary_minus_func_uint64_t_u(0UL)) , l_246.sc))) , 1UL)) & l_246.s5))))))) <= p_895->g_244.s4) <= p_895->g_38))))) ^ p_895->g_81), p_895->g_179.x, 0x497FL, 0x410DL)).yywyxwwzywxzxyzx, ((VECTOR(int16_t, 16))(0x492EL))))).hi, ((VECTOR(uint16_t, 8))(5UL))))))))).s2327322313422371)).sa;
        }
        for (p_895->g_82 = 0; (p_895->g_82 >= 18); p_895->g_82 = safe_add_func_int32_t_s_s(p_895->g_82, 8))
        { /* block id: 110 */
            int16_t l_286 = 3L;
            VECTOR(int8_t, 8) l_296 = (VECTOR(int8_t, 8))(0x70L, (VECTOR(int8_t, 4))(0x70L, (VECTOR(int8_t, 2))(0x70L, 0x41L), 0x41L), 0x41L, 0x70L, 0x41L);
            uint8_t *l_303 = (void*)0;
            uint8_t *l_304 = (void*)0;
            uint8_t *l_305 = (void*)0;
            uint8_t *l_306 = (void*)0;
            uint8_t *l_307 = (void*)0;
            int64_t *l_308 = (void*)0;
            int64_t *l_309 = (void*)0;
            int64_t *l_310 = (void*)0;
            int64_t *l_311 = (void*)0;
            int64_t *l_312[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t *l_315 = &l_252;
            int8_t ***l_318 = &l_316;
            uint32_t *l_325 = &p_895->g_326;
            uint32_t *l_327 = (void*)0;
            uint8_t *l_331 = (void*)0;
            int64_t **l_335 = (void*)0;
            int8_t *l_340 = (void*)0;
            int8_t *l_341 = (void*)0;
            int32_t l_352 = (-1L);
            int32_t l_355 = 0x6A817996L;
            VECTOR(int32_t, 16) l_356 = (VECTOR(int32_t, 16))(0x320F8B62L, (VECTOR(int32_t, 4))(0x320F8B62L, (VECTOR(int32_t, 2))(0x320F8B62L, 0x150EB73CL), 0x150EB73CL), 0x150EB73CL, 0x320F8B62L, 0x150EB73CL, (VECTOR(int32_t, 2))(0x320F8B62L, 0x150EB73CL), (VECTOR(int32_t, 2))(0x320F8B62L, 0x150EB73CL), 0x320F8B62L, 0x150EB73CL, 0x320F8B62L, 0x150EB73CL);
            uint32_t l_358 = 0UL;
            VECTOR(int8_t, 4) l_368 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x2BL), 0x2BL);
            VECTOR(int32_t, 4) l_407 = (VECTOR(int32_t, 4))(0x369024C3L, (VECTOR(int32_t, 2))(0x369024C3L, 0x576F8EBEL), 0x576F8EBEL);
            int16_t *l_457[10];
            uint64_t *l_460 = &p_895->g_128;
            int i;
            for (i = 0; i < 10; i++)
                l_457[i] = (void*)0;
            (*l_315) = (safe_lshift_func_int8_t_s_u(((((l_286 <= (((safe_sub_func_uint8_t_u_u((GROUP_DIVERGE(2, 1) && (safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u((l_280[1][6][0] = (p_89 , (+(((l_273 = (GROUP_DIVERGE(0, 1) != l_280[1][0][0])) , (safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_295.s40003626)).s1, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),VECTOR(int8_t, 8),((VECTOR(int8_t, 8))(l_296.s31215064)), ((VECTOR(int8_t, 2))(l_297.zx)).yxyxyyyx, ((VECTOR(int8_t, 2))(p_895->g_298.yy)).xyyyxxyx))).lo, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_299.scd350e76)).hi)).wzzzwxzyzxxwxwzx)).scc88))).even)), 0x0EL)).w, ((safe_rshift_func_uint8_t_u_u(FAKE_DIVERGE(p_895->group_1_offset, get_group_id(1), 10), p_895->g_244.s5)) , ((VECTOR(uint8_t, 8))(p_895->g_302.yxxyyxxx)).s3)))) , l_241.s8)))), l_246.s2)), (((+(p_895->g_119.x = l_295.s0)) , p_895->g_313) != l_314)))), p_89)) | l_246.sb) < p_88)) != l_295.s6) == l_297.y) > p_88), 3));
            (*l_318) = l_316;
        }
    }
    else
    { /* block id: 177 */
        int32_t l_473[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
        int i;
        (*l_363) ^= l_473[6];
    }
    return l_344;
}


/* ------------------------------------------ */
/* 
 * reads : p_895->g_38 p_895->g_82 p_895->g_119 p_895->g_122 p_895->g_128 p_895->g_81 p_895->g_133 p_895->g_142 p_895->g_2 p_895->g_53 p_895->g_164 p_895->g_165 p_895->g_167 p_895->g_170 p_895->g_179 p_895->g_180 p_895->g_181 p_895->l_comm_values p_895->g_193 p_895->g_199 p_895->g_202 p_895->g_203 p_895->g_205 p_895->g_206 p_895->g_221
 * writes: p_895->g_122 p_895->g_128 p_895->g_81 p_895->g_155 p_895->g_119 p_895->g_193 p_895->g_199 p_895->g_220
 */
uint64_t  func_90(int32_t * p_91, int64_t * p_92, struct S1 * p_895)
{ /* block id: 50 */
    VECTOR(uint64_t, 16) l_120 = (VECTOR(uint64_t, 16))(0xCAFE66B6A1353FB5L, (VECTOR(uint64_t, 4))(0xCAFE66B6A1353FB5L, (VECTOR(uint64_t, 2))(0xCAFE66B6A1353FB5L, 0xD5A05CCE5AB66AEAL), 0xD5A05CCE5AB66AEAL), 0xD5A05CCE5AB66AEAL, 0xCAFE66B6A1353FB5L, 0xD5A05CCE5AB66AEAL, (VECTOR(uint64_t, 2))(0xCAFE66B6A1353FB5L, 0xD5A05CCE5AB66AEAL), (VECTOR(uint64_t, 2))(0xCAFE66B6A1353FB5L, 0xD5A05CCE5AB66AEAL), 0xCAFE66B6A1353FB5L, 0xD5A05CCE5AB66AEAL, 0xCAFE66B6A1353FB5L, 0xD5A05CCE5AB66AEAL);
    VECTOR(uint8_t, 16) l_125 = (VECTOR(uint8_t, 16))(249UL, (VECTOR(uint8_t, 4))(249UL, (VECTOR(uint8_t, 2))(249UL, 255UL), 255UL), 255UL, 249UL, 255UL, (VECTOR(uint8_t, 2))(249UL, 255UL), (VECTOR(uint8_t, 2))(249UL, 255UL), 249UL, 255UL, 249UL, 255UL);
    int32_t l_127[3][10][3] = {{{0L,0x1A7709DEL,0x6206665CL},{0L,0x1A7709DEL,0x6206665CL},{0L,0x1A7709DEL,0x6206665CL},{0L,0x1A7709DEL,0x6206665CL},{0L,0x1A7709DEL,0x6206665CL},{0L,0x1A7709DEL,0x6206665CL},{0L,0x1A7709DEL,0x6206665CL},{0L,0x1A7709DEL,0x6206665CL},{0L,0x1A7709DEL,0x6206665CL},{0L,0x1A7709DEL,0x6206665CL}},{{0L,0x1A7709DEL,0x6206665CL},{0L,0x1A7709DEL,0x6206665CL},{0L,0x1A7709DEL,0x6206665CL},{0L,0x1A7709DEL,0x6206665CL},{0L,0x1A7709DEL,0x6206665CL},{0L,0x1A7709DEL,0x6206665CL},{0L,0x1A7709DEL,0x6206665CL},{0L,0x1A7709DEL,0x6206665CL},{0L,0x1A7709DEL,0x6206665CL},{0L,0x1A7709DEL,0x6206665CL}},{{0L,0x1A7709DEL,0x6206665CL},{0L,0x1A7709DEL,0x6206665CL},{0L,0x1A7709DEL,0x6206665CL},{0L,0x1A7709DEL,0x6206665CL},{0L,0x1A7709DEL,0x6206665CL},{0L,0x1A7709DEL,0x6206665CL},{0L,0x1A7709DEL,0x6206665CL},{0L,0x1A7709DEL,0x6206665CL},{0L,0x1A7709DEL,0x6206665CL},{0L,0x1A7709DEL,0x6206665CL}}};
    VECTOR(uint64_t, 2) l_131 = (VECTOR(uint64_t, 2))(18446744073709551610UL, 0UL);
    int32_t *l_144 = &p_895->g_143[5][0];
    int64_t **l_153[4];
    int64_t ***l_154[10] = {&l_153[0],&l_153[0],&l_153[0],&l_153[0],&l_153[0],&l_153[0],&l_153[0],&l_153[0],&l_153[0],&l_153[0]};
    VECTOR(uint16_t, 8) l_166 = (VECTOR(uint16_t, 8))(65529UL, (VECTOR(uint16_t, 4))(65529UL, (VECTOR(uint16_t, 2))(65529UL, 0UL), 0UL), 0UL, 65529UL, 0UL);
    int32_t l_175 = 1L;
    uint16_t l_184 = 0xF58DL;
    VECTOR(uint16_t, 4) l_188 = (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 0xE511L), 0xE511L);
    int32_t l_189 = 0x240C9C9EL;
    int32_t l_191 = 0x5313F7A6L;
    VECTOR(uint32_t, 2) l_207 = (VECTOR(uint32_t, 2))(0xBBA41894L, 0x0F6B1E10L);
    VECTOR(uint32_t, 2) l_210 = (VECTOR(uint32_t, 2))(0xCAF8924DL, 0x25584206L);
    uint32_t l_222[9][9] = {{4294967291UL,0x476D608BL,0x57419008L,4294967291UL,0xE64A6B76L,0x57419008L,0x57419008L,0xE64A6B76L,4294967291UL},{4294967291UL,0x476D608BL,0x57419008L,4294967291UL,0xE64A6B76L,0x57419008L,0x57419008L,0xE64A6B76L,4294967291UL},{4294967291UL,0x476D608BL,0x57419008L,4294967291UL,0xE64A6B76L,0x57419008L,0x57419008L,0xE64A6B76L,4294967291UL},{4294967291UL,0x476D608BL,0x57419008L,4294967291UL,0xE64A6B76L,0x57419008L,0x57419008L,0xE64A6B76L,4294967291UL},{4294967291UL,0x476D608BL,0x57419008L,4294967291UL,0xE64A6B76L,0x57419008L,0x57419008L,0xE64A6B76L,4294967291UL},{4294967291UL,0x476D608BL,0x57419008L,4294967291UL,0xE64A6B76L,0x57419008L,0x57419008L,0xE64A6B76L,4294967291UL},{4294967291UL,0x476D608BL,0x57419008L,4294967291UL,0xE64A6B76L,0x57419008L,0x57419008L,0xE64A6B76L,4294967291UL},{4294967291UL,0x476D608BL,0x57419008L,4294967291UL,0xE64A6B76L,0x57419008L,0x57419008L,0xE64A6B76L,4294967291UL},{4294967291UL,0x476D608BL,0x57419008L,4294967291UL,0xE64A6B76L,0x57419008L,0x57419008L,0xE64A6B76L,4294967291UL}};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_153[i] = (void*)0;
    if ((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(p_895->g_38, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))((-10L), 0x340EL)).xxxx)).y)), 0)))
    { /* block id: 51 */
        uint64_t *l_121 = &p_895->g_122;
        VECTOR(uint64_t, 8) l_123 = (VECTOR(uint64_t, 8))(0xEE43BDDC6D73AEC3L, (VECTOR(uint64_t, 4))(0xEE43BDDC6D73AEC3L, (VECTOR(uint64_t, 2))(0xEE43BDDC6D73AEC3L, 18446744073709551611UL), 18446744073709551611UL), 18446744073709551611UL, 0xEE43BDDC6D73AEC3L, 18446744073709551611UL);
        VECTOR(uint64_t, 8) l_124 = (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL);
        uint8_t *l_126[7][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int32_t l_132 = 0L;
        int i, j;
        l_132 ^= (0x2BCF3F1EL ^ ((-2L) & ((!(safe_rshift_func_int8_t_s_u(p_895->g_82, 1))) ^ (((VECTOR(int64_t, 16))(p_895->g_119.wwwyyxyzywwzxzxw)).s5 == ((+((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((*l_121) &= ((VECTOR(uint64_t, 2))(l_120.sc4)).hi), ((VECTOR(uint64_t, 4))(l_123.s5315)), (GROUP_DIVERGE(2, 1) >= FAKE_DIVERGE(p_895->local_2_offset, get_local_id(2), 10)), 0xA017C95AB7803ABDL, 5UL)).s30)).lo) ^ ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(l_124.s6602)), l_124.s5, 0x62CEE249C3678AA3L, 18446744073709551610UL, 1UL, 2UL, GROUP_DIVERGE(0, 1), (l_125.s8 <= (++p_895->g_128)), 0UL, ((VECTOR(uint64_t, 4))(l_131.yxyy)))).s0)))));
    }
    else
    { /* block id: 55 */
        uint64_t *l_147[3];
        int32_t l_148 = 0x1E68E90FL;
        int32_t l_149 = 0x340B985CL;
        int32_t l_150 = 0L;
        int i;
        for (i = 0; i < 3; i++)
            l_147[i] = (void*)0;
        (*p_91) &= 0x1180C45EL;
        (*p_91) = ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(p_895->g_133.xxxy)).lo, (int32_t)((safe_sub_func_int64_t_s_s(((FAKE_DIVERGE(p_895->global_1_offset, get_global_id(1), 10) , (safe_div_func_int32_t_s_s(((l_127[2][1][2] , ((safe_mul_func_int16_t_s_s(((p_91 == (l_144 = ((safe_mod_func_int16_t_s_s(p_895->g_82, 0x7680L)) , p_895->g_142))) != (l_149 = (safe_lshift_func_int16_t_s_s(((l_148 &= p_895->g_2) | 5UL), 4)))), ((VECTOR(uint16_t, 16))(((&p_895->g_81 != &p_895->g_9) > l_131.x), 65535UL, ((VECTOR(uint16_t, 8))(1UL)), l_131.y, 0x6C56L, ((VECTOR(uint16_t, 4))(65535UL)))).sf)) , GROUP_DIVERGE(2, 1))) , l_125.s1), l_150))) & 9L), l_150)) & 0x3044322DFB8A6804L)))).yxxxyyyx, ((VECTOR(int32_t, 8))(0L)), ((VECTOR(int32_t, 8))((-1L)))))).s33, ((VECTOR(int32_t, 2))((-1L)))))), ((VECTOR(int32_t, 2))(0x15DCD2A4L)), ((VECTOR(int32_t, 2))(0L))))).hi;
    }
    if ((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 4))((((1UL || (((l_125.s2 <= (((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 4))(0L, (-4L), 0x54AFL, 0x21FBL)).xxxxywxzxxxyxwxw, ((VECTOR(uint16_t, 16))(p_895->g_133.y, ((VECTOR(uint16_t, 8))(0x5D8AL, 0xC52FL, (safe_rshift_func_uint8_t_u_s((l_125.sc != (((p_895->g_155 = l_153[0]) != (void*)0) , (safe_add_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u(p_895->g_53, l_120.s4)) != l_131.x), FAKE_DIVERGE(p_895->global_0_offset, get_global_id(0), 10))))), 3)), ((VECTOR(uint16_t, 2))(0x4599L)), ((VECTOR(uint16_t, 2))(65535UL)), 0x9E06L)), 65534UL, l_131.y, 0UL, l_120.s6, ((VECTOR(uint16_t, 2))(0xF08FL)), 2UL))))).lo, ((VECTOR(int32_t, 8))(7L))))).s67)), 1L, (-7L))), ((VECTOR(int32_t, 4))((-4L)))))).zzxyxzzw, ((VECTOR(int32_t, 8))(0L))))).s7 != FAKE_DIVERGE(p_895->global_1_offset, get_global_id(1), 10))) != 0L) == (-1L))) > l_127[2][1][2]) == l_131.y), l_131.x, 0x1B4EL, 0x308EL)).lo, ((VECTOR(int16_t, 2))((-10L))), ((VECTOR(int16_t, 2))(0x5874L))))), l_120.s8, ((VECTOR(int16_t, 4))((-1L))), ((VECTOR(int16_t, 8))(0L)), (-1L))).s1a)).odd || l_131.y))
    { /* block id: 63 */
        int64_t *l_171 = (void*)0;
        int64_t *l_172 = (void*)0;
        int64_t *l_173 = (void*)0;
        int64_t *l_174[1][6][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int32_t l_185 = 0x5CF3AA05L;
        int16_t *l_186 = (void*)0;
        uint64_t *l_187 = &p_895->g_122;
        int8_t *l_190[1];
        int32_t *l_192 = &p_895->g_193;
        uint32_t *l_198[3];
        VECTOR(uint32_t, 8) l_204 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL);
        uint32_t l_219 = 1UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_190[i] = (void*)0;
        for (i = 0; i < 3; i++)
            l_198[i] = &p_895->g_199;
        (*l_192) ^= ((safe_lshift_func_int16_t_s_s(((safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(5UL, 0x390BL)), 65535UL, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(p_895->g_164.sd570)).yxxyzwzw)).s45)).xyxxyyyx)).lo)).yywywxxw)), l_120.se, 0x9A09L, 0UL, 2UL, 0x5B49L)), ((VECTOR(uint16_t, 4))(p_895->g_165.s2f8c)).xywwyzyzyzxzzzzy))))).s9, (((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),VECTOR(uint16_t, 8),((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 8))(l_166.s35423472)), ((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(int16_t, 2))(p_895->g_167.xx)).xxyxyxyy, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 16))(((l_191 ^= (((l_189 = (l_188.z = (safe_add_func_int64_t_s_s((-1L), (p_895->g_119.w = (((l_175 = ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(p_895->g_170.s37)), 6L, 0x7659E5E0E0025C80L)).z) <= ((VECTOR(uint64_t, 16))(mad_sat(((VECTOR(uint64_t, 16))(0x5823D9D43D6F2FD1L, 0xCF168B12120846C0L, 1UL, (p_895->g_165.s0 , ((*l_187) &= (l_166.s2 && (safe_unary_minus_func_int8_t_s((((VECTOR(int32_t, 2))(0x50795231L, (-8L))).even >= (safe_rshift_func_int16_t_s_s((l_127[2][5][1] = ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(p_895->g_179.xxxxxyxyxyxxyxyy)).even)).s1143602223206336, ((VECTOR(uint8_t, 8))(p_895->g_180.xyyxxxyy)).s4541464660531460))).se, 0x585DL, ((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(p_895->g_181.s4612)).wzzwzxzz)), (int16_t)(safe_add_func_uint64_t_u_u(p_895->g_167.y, l_184))))).s63, (int16_t)l_185))), 0x6B53L, 0x487DL, 0x233BL, 0x11B7L)).s7), (((*p_91) = l_131.x) && l_120.s4))))))))), ((VECTOR(uint64_t, 2))(1UL)), p_895->g_133.y, 0x1B8ECEDB7DDFE161L, 0x2D1124354D0B19FEL, 18446744073709551615UL, 0x6A90994805ACFE1AL, 0x4E342388C2A84051L, 0x2FCE170AE4FF3832L, ((VECTOR(uint64_t, 2))(0x8D4B9C1E0AABE5D2L)), 18446744073709551607UL)), ((VECTOR(uint64_t, 16))(0UL)), ((VECTOR(uint64_t, 16))(18446744073709551612UL))))).s6) != l_166.s7)))))) >= 4UL) & l_120.s2)) <= p_895->g_179.y), 0L, 0x77A2L, (-10L), ((VECTOR(int16_t, 8))(0x3A8EL)), (-2L), 0x11D9L, 0L, (-10L))).hi, ((VECTOR(int16_t, 8))((-4L)))))).s77)), 0x2B20L, (-1L))).yxzzxxwx)))))), ((VECTOR(uint16_t, 8))(0x6572L)), ((VECTOR(uint16_t, 8))(0x124CL))))).s60)), 65533UL, 8UL, ((VECTOR(uint16_t, 2))(0xB918L)), 1UL, 0x2B59L, ((VECTOR(uint16_t, 4))(0x2F6EL)), ((VECTOR(uint16_t, 4))(0x3906L)))).s13, ((VECTOR(uint16_t, 2))(0UL)), ((VECTOR(uint16_t, 2))(65526UL))))).hi || 65531UL))) , 9L), p_895->l_comm_values[(safe_mod_func_uint32_t_u_u(p_895->tid, 38))])) , p_895->g_133.x);
        l_185 |= ((*p_91) &= ((l_127[0][6][2] ^= ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 16))(((safe_add_func_uint16_t_u_u((((p_895->g_220 = ((*l_192) != (safe_mul_func_int16_t_s_s(((((l_175 = 0xD40AD8A6L) , ((VECTOR(uint32_t, 16))(0xC55A2888L, l_189, ((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),uint32_t,((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(0UL, (--p_895->g_199), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(p_895->g_202.xxxxxyxyyyyxxyxx)).hi)).odd)), 0x60233A00L, 4294967294UL)).s75)))), (uint32_t)((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 8))(p_895->g_203.yzxwxyxx)).s24, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(clz(((VECTOR(uint32_t, 8))(l_204.s32074114)).s6267410665150557))).odd)).s74, ((VECTOR(uint32_t, 4))(4294967291UL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(uint32_t, 4))(p_895->g_205.yxxy)), ((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 4))(p_895->g_206.s8ab5)).wxxywwwy, ((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 8))(l_207.xyxxxxxy)).s11, ((VECTOR(uint32_t, 4))((!(l_188.x >= (safe_rshift_func_int16_t_s_s(5L, 12)))), 1UL, 4294967294UL, 0x07872F4CL)).odd))).yxxyyxyx, ((VECTOR(uint32_t, 4))(safe_clamp_func(VECTOR(uint32_t, 4),VECTOR(uint32_t, 4),((VECTOR(uint32_t, 2))(l_210.yx)).yxyx, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(abs(((VECTOR(uint32_t, 2))(0x4D2432C4L, 4294967288UL)).yxxy))))), ((VECTOR(uint32_t, 16))(hadd(((VECTOR(uint32_t, 8))(((((safe_div_func_uint8_t_u_u((((safe_mod_func_int64_t_s_s(0x1F0464915B41E8C2L, (p_895->g_128 |= ((*l_187) = ((*l_192) >= (*l_192)))))) && ((safe_mul_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), (0x48L | p_895->g_133.x))) >= GROUP_DIVERGE(0, 1))) || l_210.x), l_219)) > (*l_192)) < p_895->g_165.sd) == FAKE_DIVERGE(p_895->local_1_offset, get_local_id(1), 10)), 0UL, ((VECTOR(uint32_t, 4))(0x59F1E093L)), 4UL, 0xE7E911ECL)).s7015646731457316, ((VECTOR(uint32_t, 16))(1UL))))).s1fd4))).yyzxyxyy))).lo))).xywxwzzxzyywzxyw)).s07)), 0x9CBD28EFL)).even))), 9UL, 4294967295UL, ((VECTOR(uint32_t, 4))(0UL)))).odd)).y, (uint32_t)0xF0EC7BDEL))), ((VECTOR(uint32_t, 4))(0x8F4957EAL)), (*l_192), 0xEAD9EA85L, 3UL, ((VECTOR(uint32_t, 4))(0x856212C0L)), 0xA6EA2F8BL)).sc) , (void*)0) == l_172), l_189)))) || (*l_192)) & 1L), 0x689EL)) > (*l_192)), (-8L), 0L, ((VECTOR(int8_t, 2))(0x0AL)), 7L, 0x55L, p_895->g_206.sd, ((VECTOR(int8_t, 8))(0x10L)))).lo, ((VECTOR(int8_t, 8))(8L))))).even)).x) , p_895->g_221));
        --l_222[6][0];
    }
    else
    { /* block id: 82 */
        return l_191;
    }
    return l_191;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int64_t * func_93(int64_t * p_94, uint64_t  p_95, int8_t  p_96, int8_t * p_97, int64_t * p_98, struct S1 * p_895)
{ /* block id: 38 */
    int64_t *l_105 = &p_895->g_53;
    int64_t **l_104 = &l_105;
    l_104 = &p_98;
    if ((atomic_inc(&p_895->g_atomic_input[59 * get_linear_group_id() + 34]) == 3))
    { /* block id: 41 */
        int32_t l_107[6][4][8] = {{{1L,0x50C21D36L,0x0EF8B48FL,7L,(-4L),(-1L),(-1L),0x00B4203EL},{1L,0x50C21D36L,0x0EF8B48FL,7L,(-4L),(-1L),(-1L),0x00B4203EL},{1L,0x50C21D36L,0x0EF8B48FL,7L,(-4L),(-1L),(-1L),0x00B4203EL},{1L,0x50C21D36L,0x0EF8B48FL,7L,(-4L),(-1L),(-1L),0x00B4203EL}},{{1L,0x50C21D36L,0x0EF8B48FL,7L,(-4L),(-1L),(-1L),0x00B4203EL},{1L,0x50C21D36L,0x0EF8B48FL,7L,(-4L),(-1L),(-1L),0x00B4203EL},{1L,0x50C21D36L,0x0EF8B48FL,7L,(-4L),(-1L),(-1L),0x00B4203EL},{1L,0x50C21D36L,0x0EF8B48FL,7L,(-4L),(-1L),(-1L),0x00B4203EL}},{{1L,0x50C21D36L,0x0EF8B48FL,7L,(-4L),(-1L),(-1L),0x00B4203EL},{1L,0x50C21D36L,0x0EF8B48FL,7L,(-4L),(-1L),(-1L),0x00B4203EL},{1L,0x50C21D36L,0x0EF8B48FL,7L,(-4L),(-1L),(-1L),0x00B4203EL},{1L,0x50C21D36L,0x0EF8B48FL,7L,(-4L),(-1L),(-1L),0x00B4203EL}},{{1L,0x50C21D36L,0x0EF8B48FL,7L,(-4L),(-1L),(-1L),0x00B4203EL},{1L,0x50C21D36L,0x0EF8B48FL,7L,(-4L),(-1L),(-1L),0x00B4203EL},{1L,0x50C21D36L,0x0EF8B48FL,7L,(-4L),(-1L),(-1L),0x00B4203EL},{1L,0x50C21D36L,0x0EF8B48FL,7L,(-4L),(-1L),(-1L),0x00B4203EL}},{{1L,0x50C21D36L,0x0EF8B48FL,7L,(-4L),(-1L),(-1L),0x00B4203EL},{1L,0x50C21D36L,0x0EF8B48FL,7L,(-4L),(-1L),(-1L),0x00B4203EL},{1L,0x50C21D36L,0x0EF8B48FL,7L,(-4L),(-1L),(-1L),0x00B4203EL},{1L,0x50C21D36L,0x0EF8B48FL,7L,(-4L),(-1L),(-1L),0x00B4203EL}},{{1L,0x50C21D36L,0x0EF8B48FL,7L,(-4L),(-1L),(-1L),0x00B4203EL},{1L,0x50C21D36L,0x0EF8B48FL,7L,(-4L),(-1L),(-1L),0x00B4203EL},{1L,0x50C21D36L,0x0EF8B48FL,7L,(-4L),(-1L),(-1L),0x00B4203EL},{1L,0x50C21D36L,0x0EF8B48FL,7L,(-4L),(-1L),(-1L),0x00B4203EL}}};
        int32_t *l_106 = &l_107[1][3][0];
        int32_t *l_108 = &l_107[1][3][0];
        uint32_t l_109 = 4294967286UL;
        int8_t l_110 = 0x22L;
        int i, j, k;
        l_108 = (l_106 = l_106);
        (*l_108) = l_109;
        (*l_106) |= l_110;
        unsigned int result = 0;
        int l_107_i0, l_107_i1, l_107_i2;
        for (l_107_i0 = 0; l_107_i0 < 6; l_107_i0++) {
            for (l_107_i1 = 0; l_107_i1 < 4; l_107_i1++) {
                for (l_107_i2 = 0; l_107_i2 < 8; l_107_i2++) {
                    result += l_107[l_107_i0][l_107_i1][l_107_i2];
                }
            }
        }
        result += l_109;
        result += l_110;
        atomic_add(&p_895->g_special_values[59 * get_linear_group_id() + 34], result);
    }
    else
    { /* block id: 46 */
        (1 + 1);
    }
    return p_94;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[59];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 59; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[59];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 59; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[38];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 38; i++)
            l_comm_values[i] = 1;
    struct S1 c_896;
    struct S1* p_895 = &c_896;
    struct S1 c_897 = {
        0x3EL, // p_895->g_2
        (VECTOR(uint8_t, 16))(254UL, (VECTOR(uint8_t, 4))(254UL, (VECTOR(uint8_t, 2))(254UL, 0x0BL), 0x0BL), 0x0BL, 254UL, 0x0BL, (VECTOR(uint8_t, 2))(254UL, 0x0BL), (VECTOR(uint8_t, 2))(254UL, 0x0BL), 254UL, 0x0BL, 254UL, 0x0BL), // p_895->g_3
        6L, // p_895->g_9
        (-1L), // p_895->g_38
        1L, // p_895->g_53
        0x7CL, // p_895->g_55
        0x2FFC3EBAL, // p_895->g_81
        0xE7L, // p_895->g_82
        (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x23929C85ED08B280L), 0x23929C85ED08B280L), // p_895->g_119
        18446744073709551615UL, // p_895->g_122
        0UL, // p_895->g_128
        (VECTOR(int32_t, 2))((-1L), 2L), // p_895->g_133
        {{(-3L),0x3A856D6AL,0x3A856D6AL,(-3L),(-3L),0x3A856D6AL,0x3A856D6AL,(-3L),(-3L)},{(-3L),0x3A856D6AL,0x3A856D6AL,(-3L),(-3L),0x3A856D6AL,0x3A856D6AL,(-3L),(-3L)},{(-3L),0x3A856D6AL,0x3A856D6AL,(-3L),(-3L),0x3A856D6AL,0x3A856D6AL,(-3L),(-3L)},{(-3L),0x3A856D6AL,0x3A856D6AL,(-3L),(-3L),0x3A856D6AL,0x3A856D6AL,(-3L),(-3L)},{(-3L),0x3A856D6AL,0x3A856D6AL,(-3L),(-3L),0x3A856D6AL,0x3A856D6AL,(-3L),(-3L)},{(-3L),0x3A856D6AL,0x3A856D6AL,(-3L),(-3L),0x3A856D6AL,0x3A856D6AL,(-3L),(-3L)},{(-3L),0x3A856D6AL,0x3A856D6AL,(-3L),(-3L),0x3A856D6AL,0x3A856D6AL,(-3L),(-3L)},{(-3L),0x3A856D6AL,0x3A856D6AL,(-3L),(-3L),0x3A856D6AL,0x3A856D6AL,(-3L),(-3L)}}, // p_895->g_143
        &p_895->g_143[0][4], // p_895->g_142
        (void*)0, // p_895->g_155
        (VECTOR(uint16_t, 16))(0x23E8L, (VECTOR(uint16_t, 4))(0x23E8L, (VECTOR(uint16_t, 2))(0x23E8L, 0x30B2L), 0x30B2L), 0x30B2L, 0x23E8L, 0x30B2L, (VECTOR(uint16_t, 2))(0x23E8L, 0x30B2L), (VECTOR(uint16_t, 2))(0x23E8L, 0x30B2L), 0x23E8L, 0x30B2L, 0x23E8L, 0x30B2L), // p_895->g_164
        (VECTOR(uint16_t, 16))(65531UL, (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 0xC2D3L), 0xC2D3L), 0xC2D3L, 65531UL, 0xC2D3L, (VECTOR(uint16_t, 2))(65531UL, 0xC2D3L), (VECTOR(uint16_t, 2))(65531UL, 0xC2D3L), 65531UL, 0xC2D3L, 65531UL, 0xC2D3L), // p_895->g_165
        (VECTOR(int16_t, 2))(0x74EFL, 0x4E23L), // p_895->g_167
        (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 9L), 9L), 9L, 0L, 9L), // p_895->g_170
        (VECTOR(int8_t, 2))(0x43L, (-1L)), // p_895->g_179
        (VECTOR(uint8_t, 2))(0x4AL, 1UL), // p_895->g_180
        (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 8L), 8L), 8L, 0L, 8L, (VECTOR(int16_t, 2))(0L, 8L), (VECTOR(int16_t, 2))(0L, 8L), 0L, 8L, 0L, 8L), // p_895->g_181
        (-9L), // p_895->g_193
        0xF25CD862L, // p_895->g_199
        (VECTOR(uint32_t, 2))(4294967291UL, 1UL), // p_895->g_202
        (VECTOR(uint32_t, 4))(0x79ECC25BL, (VECTOR(uint32_t, 2))(0x79ECC25BL, 1UL), 1UL), // p_895->g_203
        (VECTOR(uint32_t, 2))(0xA16CC3C2L, 4294967286UL), // p_895->g_205
        (VECTOR(uint32_t, 16))(0x18EB8ACBL, (VECTOR(uint32_t, 4))(0x18EB8ACBL, (VECTOR(uint32_t, 2))(0x18EB8ACBL, 0xF690F0ACL), 0xF690F0ACL), 0xF690F0ACL, 0x18EB8ACBL, 0xF690F0ACL, (VECTOR(uint32_t, 2))(0x18EB8ACBL, 0xF690F0ACL), (VECTOR(uint32_t, 2))(0x18EB8ACBL, 0xF690F0ACL), 0x18EB8ACBL, 0xF690F0ACL, 0x18EB8ACBL, 0xF690F0ACL), // p_895->g_206
        0x6E79L, // p_895->g_220
        0x23B5687EL, // p_895->g_221
        (VECTOR(int8_t, 4))(0x62L, (VECTOR(int8_t, 2))(0x62L, 0x6AL), 0x6AL), // p_895->g_240
        (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int8_t, 2))((-1L), 0L), (VECTOR(int8_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L), // p_895->g_242
        (VECTOR(int8_t, 16))(0x76L, (VECTOR(int8_t, 4))(0x76L, (VECTOR(int8_t, 2))(0x76L, 0x47L), 0x47L), 0x47L, 0x76L, 0x47L, (VECTOR(int8_t, 2))(0x76L, 0x47L), (VECTOR(int8_t, 2))(0x76L, 0x47L), 0x76L, 0x47L, 0x76L, 0x47L), // p_895->g_244
        (VECTOR(int8_t, 2))(0L, 0x5BL), // p_895->g_298
        (VECTOR(uint8_t, 2))(7UL, 1UL), // p_895->g_302
        &p_895->g_53, // p_895->g_313
        0x9C1B7322L, // p_895->g_326
        1L, // p_895->g_328
        (VECTOR(uint32_t, 16))(0xDF1AB05DL, (VECTOR(uint32_t, 4))(0xDF1AB05DL, (VECTOR(uint32_t, 2))(0xDF1AB05DL, 1UL), 1UL), 1UL, 0xDF1AB05DL, 1UL, (VECTOR(uint32_t, 2))(0xDF1AB05DL, 1UL), (VECTOR(uint32_t, 2))(0xDF1AB05DL, 1UL), 0xDF1AB05DL, 1UL, 0xDF1AB05DL, 1UL), // p_895->g_332
        1UL, // p_895->g_342
        &p_895->g_221, // p_895->g_346
        &p_895->g_346, // p_895->g_345
        (void*)0, // p_895->g_383
        &p_895->g_383, // p_895->g_382
        (VECTOR(uint16_t, 16))(5UL, (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 65534UL), 65534UL), 65534UL, 5UL, 65534UL, (VECTOR(uint16_t, 2))(5UL, 65534UL), (VECTOR(uint16_t, 2))(5UL, 65534UL), 5UL, 65534UL, 5UL, 65534UL), // p_895->g_398
        (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xC9D77EB2L), 0xC9D77EB2L), 0xC9D77EB2L, 0UL, 0xC9D77EB2L), // p_895->g_422
        (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 7L), 7L), 7L, 0L, 7L), // p_895->g_424
        (void*)0, // p_895->g_440
        (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, 0x7A7DL), 0x7A7DL), // p_895->g_444
        (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 4UL), 4UL), // p_895->g_453
        (VECTOR(int32_t, 2))(0x081CBF21L, 0x65820331L), // p_895->g_467
        {&p_895->g_81,&p_895->g_328,&p_895->g_81,&p_895->g_81,&p_895->g_328,&p_895->g_81,&p_895->g_81}, // p_895->g_481
        {{{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]}},{{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]}},{{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]}},{{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]}},{{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]}},{{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]}},{{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]}},{{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]}},{{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]},{&p_895->g_481[6],&p_895->g_481[1]}}}, // p_895->g_480
        (VECTOR(int64_t, 8))(0x2A14EC419B02CBE2L, (VECTOR(int64_t, 4))(0x2A14EC419B02CBE2L, (VECTOR(int64_t, 2))(0x2A14EC419B02CBE2L, 3L), 3L), 3L, 0x2A14EC419B02CBE2L, 3L), // p_895->g_493
        (VECTOR(int16_t, 8))(0x0A14L, (VECTOR(int16_t, 4))(0x0A14L, (VECTOR(int16_t, 2))(0x0A14L, 0L), 0L), 0L, 0x0A14L, 0L), // p_895->g_526
        (VECTOR(uint16_t, 2))(0x174DL, 65529UL), // p_895->g_536
        (VECTOR(int32_t, 16))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 6L), 6L), 6L, 2L, 6L, (VECTOR(int32_t, 2))(2L, 6L), (VECTOR(int32_t, 2))(2L, 6L), 2L, 6L, 2L, 6L), // p_895->g_550
        {1UL,1UL}, // p_895->g_567
        (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL, (VECTOR(uint64_t, 2))(0UL, 0UL), (VECTOR(uint64_t, 2))(0UL, 0UL), 0UL, 0UL, 0UL, 0UL), // p_895->g_592
        (VECTOR(uint64_t, 2))(0xB39914D030DE0877L, 18446744073709551613UL), // p_895->g_593
        (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x31F3B70C1E924FDBL), 0x31F3B70C1E924FDBL), 0x31F3B70C1E924FDBL, 0UL, 0x31F3B70C1E924FDBL, (VECTOR(uint64_t, 2))(0UL, 0x31F3B70C1E924FDBL), (VECTOR(uint64_t, 2))(0UL, 0x31F3B70C1E924FDBL), 0UL, 0x31F3B70C1E924FDBL, 0UL, 0x31F3B70C1E924FDBL), // p_895->g_594
        &p_895->g_221, // p_895->g_646
        (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0UL), 0UL), 0UL, 255UL, 0UL), // p_895->g_669
        (VECTOR(int16_t, 2))(2L, 0x4B47L), // p_895->g_670
        {0x3DADL}, // p_895->g_787
        0x7EB9B63DL, // p_895->g_791
        (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x4351L), 0x4351L), 0x4351L, 1L, 0x4351L, (VECTOR(int16_t, 2))(1L, 0x4351L), (VECTOR(int16_t, 2))(1L, 0x4351L), 1L, 0x4351L, 1L, 0x4351L), // p_895->g_799
        0, // p_895->v_collective
        sequence_input[get_global_id(0)], // p_895->global_0_offset
        sequence_input[get_global_id(1)], // p_895->global_1_offset
        sequence_input[get_global_id(2)], // p_895->global_2_offset
        sequence_input[get_local_id(0)], // p_895->local_0_offset
        sequence_input[get_local_id(1)], // p_895->local_1_offset
        sequence_input[get_local_id(2)], // p_895->local_2_offset
        sequence_input[get_group_id(0)], // p_895->group_0_offset
        sequence_input[get_group_id(1)], // p_895->group_1_offset
        sequence_input[get_group_id(2)], // p_895->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 38)), permutations[0][get_linear_local_id()])), // p_895->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_896 = c_897;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_895);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_895->g_2, "p_895->g_2", print_hash_value);
    transparent_crc(p_895->g_3.s0, "p_895->g_3.s0", print_hash_value);
    transparent_crc(p_895->g_3.s1, "p_895->g_3.s1", print_hash_value);
    transparent_crc(p_895->g_3.s2, "p_895->g_3.s2", print_hash_value);
    transparent_crc(p_895->g_3.s3, "p_895->g_3.s3", print_hash_value);
    transparent_crc(p_895->g_3.s4, "p_895->g_3.s4", print_hash_value);
    transparent_crc(p_895->g_3.s5, "p_895->g_3.s5", print_hash_value);
    transparent_crc(p_895->g_3.s6, "p_895->g_3.s6", print_hash_value);
    transparent_crc(p_895->g_3.s7, "p_895->g_3.s7", print_hash_value);
    transparent_crc(p_895->g_3.s8, "p_895->g_3.s8", print_hash_value);
    transparent_crc(p_895->g_3.s9, "p_895->g_3.s9", print_hash_value);
    transparent_crc(p_895->g_3.sa, "p_895->g_3.sa", print_hash_value);
    transparent_crc(p_895->g_3.sb, "p_895->g_3.sb", print_hash_value);
    transparent_crc(p_895->g_3.sc, "p_895->g_3.sc", print_hash_value);
    transparent_crc(p_895->g_3.sd, "p_895->g_3.sd", print_hash_value);
    transparent_crc(p_895->g_3.se, "p_895->g_3.se", print_hash_value);
    transparent_crc(p_895->g_3.sf, "p_895->g_3.sf", print_hash_value);
    transparent_crc(p_895->g_9, "p_895->g_9", print_hash_value);
    transparent_crc(p_895->g_38, "p_895->g_38", print_hash_value);
    transparent_crc(p_895->g_53, "p_895->g_53", print_hash_value);
    transparent_crc(p_895->g_55, "p_895->g_55", print_hash_value);
    transparent_crc(p_895->g_81, "p_895->g_81", print_hash_value);
    transparent_crc(p_895->g_82, "p_895->g_82", print_hash_value);
    transparent_crc(p_895->g_119.x, "p_895->g_119.x", print_hash_value);
    transparent_crc(p_895->g_119.y, "p_895->g_119.y", print_hash_value);
    transparent_crc(p_895->g_119.z, "p_895->g_119.z", print_hash_value);
    transparent_crc(p_895->g_119.w, "p_895->g_119.w", print_hash_value);
    transparent_crc(p_895->g_122, "p_895->g_122", print_hash_value);
    transparent_crc(p_895->g_128, "p_895->g_128", print_hash_value);
    transparent_crc(p_895->g_133.x, "p_895->g_133.x", print_hash_value);
    transparent_crc(p_895->g_133.y, "p_895->g_133.y", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_895->g_143[i][j], "p_895->g_143[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_895->g_164.s0, "p_895->g_164.s0", print_hash_value);
    transparent_crc(p_895->g_164.s1, "p_895->g_164.s1", print_hash_value);
    transparent_crc(p_895->g_164.s2, "p_895->g_164.s2", print_hash_value);
    transparent_crc(p_895->g_164.s3, "p_895->g_164.s3", print_hash_value);
    transparent_crc(p_895->g_164.s4, "p_895->g_164.s4", print_hash_value);
    transparent_crc(p_895->g_164.s5, "p_895->g_164.s5", print_hash_value);
    transparent_crc(p_895->g_164.s6, "p_895->g_164.s6", print_hash_value);
    transparent_crc(p_895->g_164.s7, "p_895->g_164.s7", print_hash_value);
    transparent_crc(p_895->g_164.s8, "p_895->g_164.s8", print_hash_value);
    transparent_crc(p_895->g_164.s9, "p_895->g_164.s9", print_hash_value);
    transparent_crc(p_895->g_164.sa, "p_895->g_164.sa", print_hash_value);
    transparent_crc(p_895->g_164.sb, "p_895->g_164.sb", print_hash_value);
    transparent_crc(p_895->g_164.sc, "p_895->g_164.sc", print_hash_value);
    transparent_crc(p_895->g_164.sd, "p_895->g_164.sd", print_hash_value);
    transparent_crc(p_895->g_164.se, "p_895->g_164.se", print_hash_value);
    transparent_crc(p_895->g_164.sf, "p_895->g_164.sf", print_hash_value);
    transparent_crc(p_895->g_165.s0, "p_895->g_165.s0", print_hash_value);
    transparent_crc(p_895->g_165.s1, "p_895->g_165.s1", print_hash_value);
    transparent_crc(p_895->g_165.s2, "p_895->g_165.s2", print_hash_value);
    transparent_crc(p_895->g_165.s3, "p_895->g_165.s3", print_hash_value);
    transparent_crc(p_895->g_165.s4, "p_895->g_165.s4", print_hash_value);
    transparent_crc(p_895->g_165.s5, "p_895->g_165.s5", print_hash_value);
    transparent_crc(p_895->g_165.s6, "p_895->g_165.s6", print_hash_value);
    transparent_crc(p_895->g_165.s7, "p_895->g_165.s7", print_hash_value);
    transparent_crc(p_895->g_165.s8, "p_895->g_165.s8", print_hash_value);
    transparent_crc(p_895->g_165.s9, "p_895->g_165.s9", print_hash_value);
    transparent_crc(p_895->g_165.sa, "p_895->g_165.sa", print_hash_value);
    transparent_crc(p_895->g_165.sb, "p_895->g_165.sb", print_hash_value);
    transparent_crc(p_895->g_165.sc, "p_895->g_165.sc", print_hash_value);
    transparent_crc(p_895->g_165.sd, "p_895->g_165.sd", print_hash_value);
    transparent_crc(p_895->g_165.se, "p_895->g_165.se", print_hash_value);
    transparent_crc(p_895->g_165.sf, "p_895->g_165.sf", print_hash_value);
    transparent_crc(p_895->g_167.x, "p_895->g_167.x", print_hash_value);
    transparent_crc(p_895->g_167.y, "p_895->g_167.y", print_hash_value);
    transparent_crc(p_895->g_170.s0, "p_895->g_170.s0", print_hash_value);
    transparent_crc(p_895->g_170.s1, "p_895->g_170.s1", print_hash_value);
    transparent_crc(p_895->g_170.s2, "p_895->g_170.s2", print_hash_value);
    transparent_crc(p_895->g_170.s3, "p_895->g_170.s3", print_hash_value);
    transparent_crc(p_895->g_170.s4, "p_895->g_170.s4", print_hash_value);
    transparent_crc(p_895->g_170.s5, "p_895->g_170.s5", print_hash_value);
    transparent_crc(p_895->g_170.s6, "p_895->g_170.s6", print_hash_value);
    transparent_crc(p_895->g_170.s7, "p_895->g_170.s7", print_hash_value);
    transparent_crc(p_895->g_179.x, "p_895->g_179.x", print_hash_value);
    transparent_crc(p_895->g_179.y, "p_895->g_179.y", print_hash_value);
    transparent_crc(p_895->g_180.x, "p_895->g_180.x", print_hash_value);
    transparent_crc(p_895->g_180.y, "p_895->g_180.y", print_hash_value);
    transparent_crc(p_895->g_181.s0, "p_895->g_181.s0", print_hash_value);
    transparent_crc(p_895->g_181.s1, "p_895->g_181.s1", print_hash_value);
    transparent_crc(p_895->g_181.s2, "p_895->g_181.s2", print_hash_value);
    transparent_crc(p_895->g_181.s3, "p_895->g_181.s3", print_hash_value);
    transparent_crc(p_895->g_181.s4, "p_895->g_181.s4", print_hash_value);
    transparent_crc(p_895->g_181.s5, "p_895->g_181.s5", print_hash_value);
    transparent_crc(p_895->g_181.s6, "p_895->g_181.s6", print_hash_value);
    transparent_crc(p_895->g_181.s7, "p_895->g_181.s7", print_hash_value);
    transparent_crc(p_895->g_181.s8, "p_895->g_181.s8", print_hash_value);
    transparent_crc(p_895->g_181.s9, "p_895->g_181.s9", print_hash_value);
    transparent_crc(p_895->g_181.sa, "p_895->g_181.sa", print_hash_value);
    transparent_crc(p_895->g_181.sb, "p_895->g_181.sb", print_hash_value);
    transparent_crc(p_895->g_181.sc, "p_895->g_181.sc", print_hash_value);
    transparent_crc(p_895->g_181.sd, "p_895->g_181.sd", print_hash_value);
    transparent_crc(p_895->g_181.se, "p_895->g_181.se", print_hash_value);
    transparent_crc(p_895->g_181.sf, "p_895->g_181.sf", print_hash_value);
    transparent_crc(p_895->g_193, "p_895->g_193", print_hash_value);
    transparent_crc(p_895->g_199, "p_895->g_199", print_hash_value);
    transparent_crc(p_895->g_202.x, "p_895->g_202.x", print_hash_value);
    transparent_crc(p_895->g_202.y, "p_895->g_202.y", print_hash_value);
    transparent_crc(p_895->g_203.x, "p_895->g_203.x", print_hash_value);
    transparent_crc(p_895->g_203.y, "p_895->g_203.y", print_hash_value);
    transparent_crc(p_895->g_203.z, "p_895->g_203.z", print_hash_value);
    transparent_crc(p_895->g_203.w, "p_895->g_203.w", print_hash_value);
    transparent_crc(p_895->g_205.x, "p_895->g_205.x", print_hash_value);
    transparent_crc(p_895->g_205.y, "p_895->g_205.y", print_hash_value);
    transparent_crc(p_895->g_206.s0, "p_895->g_206.s0", print_hash_value);
    transparent_crc(p_895->g_206.s1, "p_895->g_206.s1", print_hash_value);
    transparent_crc(p_895->g_206.s2, "p_895->g_206.s2", print_hash_value);
    transparent_crc(p_895->g_206.s3, "p_895->g_206.s3", print_hash_value);
    transparent_crc(p_895->g_206.s4, "p_895->g_206.s4", print_hash_value);
    transparent_crc(p_895->g_206.s5, "p_895->g_206.s5", print_hash_value);
    transparent_crc(p_895->g_206.s6, "p_895->g_206.s6", print_hash_value);
    transparent_crc(p_895->g_206.s7, "p_895->g_206.s7", print_hash_value);
    transparent_crc(p_895->g_206.s8, "p_895->g_206.s8", print_hash_value);
    transparent_crc(p_895->g_206.s9, "p_895->g_206.s9", print_hash_value);
    transparent_crc(p_895->g_206.sa, "p_895->g_206.sa", print_hash_value);
    transparent_crc(p_895->g_206.sb, "p_895->g_206.sb", print_hash_value);
    transparent_crc(p_895->g_206.sc, "p_895->g_206.sc", print_hash_value);
    transparent_crc(p_895->g_206.sd, "p_895->g_206.sd", print_hash_value);
    transparent_crc(p_895->g_206.se, "p_895->g_206.se", print_hash_value);
    transparent_crc(p_895->g_206.sf, "p_895->g_206.sf", print_hash_value);
    transparent_crc(p_895->g_220, "p_895->g_220", print_hash_value);
    transparent_crc(p_895->g_221, "p_895->g_221", print_hash_value);
    transparent_crc(p_895->g_240.x, "p_895->g_240.x", print_hash_value);
    transparent_crc(p_895->g_240.y, "p_895->g_240.y", print_hash_value);
    transparent_crc(p_895->g_240.z, "p_895->g_240.z", print_hash_value);
    transparent_crc(p_895->g_240.w, "p_895->g_240.w", print_hash_value);
    transparent_crc(p_895->g_242.s0, "p_895->g_242.s0", print_hash_value);
    transparent_crc(p_895->g_242.s1, "p_895->g_242.s1", print_hash_value);
    transparent_crc(p_895->g_242.s2, "p_895->g_242.s2", print_hash_value);
    transparent_crc(p_895->g_242.s3, "p_895->g_242.s3", print_hash_value);
    transparent_crc(p_895->g_242.s4, "p_895->g_242.s4", print_hash_value);
    transparent_crc(p_895->g_242.s5, "p_895->g_242.s5", print_hash_value);
    transparent_crc(p_895->g_242.s6, "p_895->g_242.s6", print_hash_value);
    transparent_crc(p_895->g_242.s7, "p_895->g_242.s7", print_hash_value);
    transparent_crc(p_895->g_242.s8, "p_895->g_242.s8", print_hash_value);
    transparent_crc(p_895->g_242.s9, "p_895->g_242.s9", print_hash_value);
    transparent_crc(p_895->g_242.sa, "p_895->g_242.sa", print_hash_value);
    transparent_crc(p_895->g_242.sb, "p_895->g_242.sb", print_hash_value);
    transparent_crc(p_895->g_242.sc, "p_895->g_242.sc", print_hash_value);
    transparent_crc(p_895->g_242.sd, "p_895->g_242.sd", print_hash_value);
    transparent_crc(p_895->g_242.se, "p_895->g_242.se", print_hash_value);
    transparent_crc(p_895->g_242.sf, "p_895->g_242.sf", print_hash_value);
    transparent_crc(p_895->g_244.s0, "p_895->g_244.s0", print_hash_value);
    transparent_crc(p_895->g_244.s1, "p_895->g_244.s1", print_hash_value);
    transparent_crc(p_895->g_244.s2, "p_895->g_244.s2", print_hash_value);
    transparent_crc(p_895->g_244.s3, "p_895->g_244.s3", print_hash_value);
    transparent_crc(p_895->g_244.s4, "p_895->g_244.s4", print_hash_value);
    transparent_crc(p_895->g_244.s5, "p_895->g_244.s5", print_hash_value);
    transparent_crc(p_895->g_244.s6, "p_895->g_244.s6", print_hash_value);
    transparent_crc(p_895->g_244.s7, "p_895->g_244.s7", print_hash_value);
    transparent_crc(p_895->g_244.s8, "p_895->g_244.s8", print_hash_value);
    transparent_crc(p_895->g_244.s9, "p_895->g_244.s9", print_hash_value);
    transparent_crc(p_895->g_244.sa, "p_895->g_244.sa", print_hash_value);
    transparent_crc(p_895->g_244.sb, "p_895->g_244.sb", print_hash_value);
    transparent_crc(p_895->g_244.sc, "p_895->g_244.sc", print_hash_value);
    transparent_crc(p_895->g_244.sd, "p_895->g_244.sd", print_hash_value);
    transparent_crc(p_895->g_244.se, "p_895->g_244.se", print_hash_value);
    transparent_crc(p_895->g_244.sf, "p_895->g_244.sf", print_hash_value);
    transparent_crc(p_895->g_298.x, "p_895->g_298.x", print_hash_value);
    transparent_crc(p_895->g_298.y, "p_895->g_298.y", print_hash_value);
    transparent_crc(p_895->g_302.x, "p_895->g_302.x", print_hash_value);
    transparent_crc(p_895->g_302.y, "p_895->g_302.y", print_hash_value);
    transparent_crc(p_895->g_326, "p_895->g_326", print_hash_value);
    transparent_crc(p_895->g_328, "p_895->g_328", print_hash_value);
    transparent_crc(p_895->g_332.s0, "p_895->g_332.s0", print_hash_value);
    transparent_crc(p_895->g_332.s1, "p_895->g_332.s1", print_hash_value);
    transparent_crc(p_895->g_332.s2, "p_895->g_332.s2", print_hash_value);
    transparent_crc(p_895->g_332.s3, "p_895->g_332.s3", print_hash_value);
    transparent_crc(p_895->g_332.s4, "p_895->g_332.s4", print_hash_value);
    transparent_crc(p_895->g_332.s5, "p_895->g_332.s5", print_hash_value);
    transparent_crc(p_895->g_332.s6, "p_895->g_332.s6", print_hash_value);
    transparent_crc(p_895->g_332.s7, "p_895->g_332.s7", print_hash_value);
    transparent_crc(p_895->g_332.s8, "p_895->g_332.s8", print_hash_value);
    transparent_crc(p_895->g_332.s9, "p_895->g_332.s9", print_hash_value);
    transparent_crc(p_895->g_332.sa, "p_895->g_332.sa", print_hash_value);
    transparent_crc(p_895->g_332.sb, "p_895->g_332.sb", print_hash_value);
    transparent_crc(p_895->g_332.sc, "p_895->g_332.sc", print_hash_value);
    transparent_crc(p_895->g_332.sd, "p_895->g_332.sd", print_hash_value);
    transparent_crc(p_895->g_332.se, "p_895->g_332.se", print_hash_value);
    transparent_crc(p_895->g_332.sf, "p_895->g_332.sf", print_hash_value);
    transparent_crc(p_895->g_342, "p_895->g_342", print_hash_value);
    transparent_crc(p_895->g_398.s0, "p_895->g_398.s0", print_hash_value);
    transparent_crc(p_895->g_398.s1, "p_895->g_398.s1", print_hash_value);
    transparent_crc(p_895->g_398.s2, "p_895->g_398.s2", print_hash_value);
    transparent_crc(p_895->g_398.s3, "p_895->g_398.s3", print_hash_value);
    transparent_crc(p_895->g_398.s4, "p_895->g_398.s4", print_hash_value);
    transparent_crc(p_895->g_398.s5, "p_895->g_398.s5", print_hash_value);
    transparent_crc(p_895->g_398.s6, "p_895->g_398.s6", print_hash_value);
    transparent_crc(p_895->g_398.s7, "p_895->g_398.s7", print_hash_value);
    transparent_crc(p_895->g_398.s8, "p_895->g_398.s8", print_hash_value);
    transparent_crc(p_895->g_398.s9, "p_895->g_398.s9", print_hash_value);
    transparent_crc(p_895->g_398.sa, "p_895->g_398.sa", print_hash_value);
    transparent_crc(p_895->g_398.sb, "p_895->g_398.sb", print_hash_value);
    transparent_crc(p_895->g_398.sc, "p_895->g_398.sc", print_hash_value);
    transparent_crc(p_895->g_398.sd, "p_895->g_398.sd", print_hash_value);
    transparent_crc(p_895->g_398.se, "p_895->g_398.se", print_hash_value);
    transparent_crc(p_895->g_398.sf, "p_895->g_398.sf", print_hash_value);
    transparent_crc(p_895->g_422.s0, "p_895->g_422.s0", print_hash_value);
    transparent_crc(p_895->g_422.s1, "p_895->g_422.s1", print_hash_value);
    transparent_crc(p_895->g_422.s2, "p_895->g_422.s2", print_hash_value);
    transparent_crc(p_895->g_422.s3, "p_895->g_422.s3", print_hash_value);
    transparent_crc(p_895->g_422.s4, "p_895->g_422.s4", print_hash_value);
    transparent_crc(p_895->g_422.s5, "p_895->g_422.s5", print_hash_value);
    transparent_crc(p_895->g_422.s6, "p_895->g_422.s6", print_hash_value);
    transparent_crc(p_895->g_422.s7, "p_895->g_422.s7", print_hash_value);
    transparent_crc(p_895->g_424.s0, "p_895->g_424.s0", print_hash_value);
    transparent_crc(p_895->g_424.s1, "p_895->g_424.s1", print_hash_value);
    transparent_crc(p_895->g_424.s2, "p_895->g_424.s2", print_hash_value);
    transparent_crc(p_895->g_424.s3, "p_895->g_424.s3", print_hash_value);
    transparent_crc(p_895->g_424.s4, "p_895->g_424.s4", print_hash_value);
    transparent_crc(p_895->g_424.s5, "p_895->g_424.s5", print_hash_value);
    transparent_crc(p_895->g_424.s6, "p_895->g_424.s6", print_hash_value);
    transparent_crc(p_895->g_424.s7, "p_895->g_424.s7", print_hash_value);
    transparent_crc(p_895->g_444.x, "p_895->g_444.x", print_hash_value);
    transparent_crc(p_895->g_444.y, "p_895->g_444.y", print_hash_value);
    transparent_crc(p_895->g_444.z, "p_895->g_444.z", print_hash_value);
    transparent_crc(p_895->g_444.w, "p_895->g_444.w", print_hash_value);
    transparent_crc(p_895->g_453.x, "p_895->g_453.x", print_hash_value);
    transparent_crc(p_895->g_453.y, "p_895->g_453.y", print_hash_value);
    transparent_crc(p_895->g_453.z, "p_895->g_453.z", print_hash_value);
    transparent_crc(p_895->g_453.w, "p_895->g_453.w", print_hash_value);
    transparent_crc(p_895->g_467.x, "p_895->g_467.x", print_hash_value);
    transparent_crc(p_895->g_467.y, "p_895->g_467.y", print_hash_value);
    transparent_crc(p_895->g_493.s0, "p_895->g_493.s0", print_hash_value);
    transparent_crc(p_895->g_493.s1, "p_895->g_493.s1", print_hash_value);
    transparent_crc(p_895->g_493.s2, "p_895->g_493.s2", print_hash_value);
    transparent_crc(p_895->g_493.s3, "p_895->g_493.s3", print_hash_value);
    transparent_crc(p_895->g_493.s4, "p_895->g_493.s4", print_hash_value);
    transparent_crc(p_895->g_493.s5, "p_895->g_493.s5", print_hash_value);
    transparent_crc(p_895->g_493.s6, "p_895->g_493.s6", print_hash_value);
    transparent_crc(p_895->g_493.s7, "p_895->g_493.s7", print_hash_value);
    transparent_crc(p_895->g_526.s0, "p_895->g_526.s0", print_hash_value);
    transparent_crc(p_895->g_526.s1, "p_895->g_526.s1", print_hash_value);
    transparent_crc(p_895->g_526.s2, "p_895->g_526.s2", print_hash_value);
    transparent_crc(p_895->g_526.s3, "p_895->g_526.s3", print_hash_value);
    transparent_crc(p_895->g_526.s4, "p_895->g_526.s4", print_hash_value);
    transparent_crc(p_895->g_526.s5, "p_895->g_526.s5", print_hash_value);
    transparent_crc(p_895->g_526.s6, "p_895->g_526.s6", print_hash_value);
    transparent_crc(p_895->g_526.s7, "p_895->g_526.s7", print_hash_value);
    transparent_crc(p_895->g_536.x, "p_895->g_536.x", print_hash_value);
    transparent_crc(p_895->g_536.y, "p_895->g_536.y", print_hash_value);
    transparent_crc(p_895->g_550.s0, "p_895->g_550.s0", print_hash_value);
    transparent_crc(p_895->g_550.s1, "p_895->g_550.s1", print_hash_value);
    transparent_crc(p_895->g_550.s2, "p_895->g_550.s2", print_hash_value);
    transparent_crc(p_895->g_550.s3, "p_895->g_550.s3", print_hash_value);
    transparent_crc(p_895->g_550.s4, "p_895->g_550.s4", print_hash_value);
    transparent_crc(p_895->g_550.s5, "p_895->g_550.s5", print_hash_value);
    transparent_crc(p_895->g_550.s6, "p_895->g_550.s6", print_hash_value);
    transparent_crc(p_895->g_550.s7, "p_895->g_550.s7", print_hash_value);
    transparent_crc(p_895->g_550.s8, "p_895->g_550.s8", print_hash_value);
    transparent_crc(p_895->g_550.s9, "p_895->g_550.s9", print_hash_value);
    transparent_crc(p_895->g_550.sa, "p_895->g_550.sa", print_hash_value);
    transparent_crc(p_895->g_550.sb, "p_895->g_550.sb", print_hash_value);
    transparent_crc(p_895->g_550.sc, "p_895->g_550.sc", print_hash_value);
    transparent_crc(p_895->g_550.sd, "p_895->g_550.sd", print_hash_value);
    transparent_crc(p_895->g_550.se, "p_895->g_550.se", print_hash_value);
    transparent_crc(p_895->g_550.sf, "p_895->g_550.sf", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_895->g_567[i], "p_895->g_567[i]", print_hash_value);

    }
    transparent_crc(p_895->g_592.s0, "p_895->g_592.s0", print_hash_value);
    transparent_crc(p_895->g_592.s1, "p_895->g_592.s1", print_hash_value);
    transparent_crc(p_895->g_592.s2, "p_895->g_592.s2", print_hash_value);
    transparent_crc(p_895->g_592.s3, "p_895->g_592.s3", print_hash_value);
    transparent_crc(p_895->g_592.s4, "p_895->g_592.s4", print_hash_value);
    transparent_crc(p_895->g_592.s5, "p_895->g_592.s5", print_hash_value);
    transparent_crc(p_895->g_592.s6, "p_895->g_592.s6", print_hash_value);
    transparent_crc(p_895->g_592.s7, "p_895->g_592.s7", print_hash_value);
    transparent_crc(p_895->g_592.s8, "p_895->g_592.s8", print_hash_value);
    transparent_crc(p_895->g_592.s9, "p_895->g_592.s9", print_hash_value);
    transparent_crc(p_895->g_592.sa, "p_895->g_592.sa", print_hash_value);
    transparent_crc(p_895->g_592.sb, "p_895->g_592.sb", print_hash_value);
    transparent_crc(p_895->g_592.sc, "p_895->g_592.sc", print_hash_value);
    transparent_crc(p_895->g_592.sd, "p_895->g_592.sd", print_hash_value);
    transparent_crc(p_895->g_592.se, "p_895->g_592.se", print_hash_value);
    transparent_crc(p_895->g_592.sf, "p_895->g_592.sf", print_hash_value);
    transparent_crc(p_895->g_593.x, "p_895->g_593.x", print_hash_value);
    transparent_crc(p_895->g_593.y, "p_895->g_593.y", print_hash_value);
    transparent_crc(p_895->g_594.s0, "p_895->g_594.s0", print_hash_value);
    transparent_crc(p_895->g_594.s1, "p_895->g_594.s1", print_hash_value);
    transparent_crc(p_895->g_594.s2, "p_895->g_594.s2", print_hash_value);
    transparent_crc(p_895->g_594.s3, "p_895->g_594.s3", print_hash_value);
    transparent_crc(p_895->g_594.s4, "p_895->g_594.s4", print_hash_value);
    transparent_crc(p_895->g_594.s5, "p_895->g_594.s5", print_hash_value);
    transparent_crc(p_895->g_594.s6, "p_895->g_594.s6", print_hash_value);
    transparent_crc(p_895->g_594.s7, "p_895->g_594.s7", print_hash_value);
    transparent_crc(p_895->g_594.s8, "p_895->g_594.s8", print_hash_value);
    transparent_crc(p_895->g_594.s9, "p_895->g_594.s9", print_hash_value);
    transparent_crc(p_895->g_594.sa, "p_895->g_594.sa", print_hash_value);
    transparent_crc(p_895->g_594.sb, "p_895->g_594.sb", print_hash_value);
    transparent_crc(p_895->g_594.sc, "p_895->g_594.sc", print_hash_value);
    transparent_crc(p_895->g_594.sd, "p_895->g_594.sd", print_hash_value);
    transparent_crc(p_895->g_594.se, "p_895->g_594.se", print_hash_value);
    transparent_crc(p_895->g_594.sf, "p_895->g_594.sf", print_hash_value);
    transparent_crc(p_895->g_669.s0, "p_895->g_669.s0", print_hash_value);
    transparent_crc(p_895->g_669.s1, "p_895->g_669.s1", print_hash_value);
    transparent_crc(p_895->g_669.s2, "p_895->g_669.s2", print_hash_value);
    transparent_crc(p_895->g_669.s3, "p_895->g_669.s3", print_hash_value);
    transparent_crc(p_895->g_669.s4, "p_895->g_669.s4", print_hash_value);
    transparent_crc(p_895->g_669.s5, "p_895->g_669.s5", print_hash_value);
    transparent_crc(p_895->g_669.s6, "p_895->g_669.s6", print_hash_value);
    transparent_crc(p_895->g_669.s7, "p_895->g_669.s7", print_hash_value);
    transparent_crc(p_895->g_670.x, "p_895->g_670.x", print_hash_value);
    transparent_crc(p_895->g_670.y, "p_895->g_670.y", print_hash_value);
    transparent_crc(p_895->g_787.f0, "p_895->g_787.f0", print_hash_value);
    transparent_crc(p_895->g_791, "p_895->g_791", print_hash_value);
    transparent_crc(p_895->g_799.s0, "p_895->g_799.s0", print_hash_value);
    transparent_crc(p_895->g_799.s1, "p_895->g_799.s1", print_hash_value);
    transparent_crc(p_895->g_799.s2, "p_895->g_799.s2", print_hash_value);
    transparent_crc(p_895->g_799.s3, "p_895->g_799.s3", print_hash_value);
    transparent_crc(p_895->g_799.s4, "p_895->g_799.s4", print_hash_value);
    transparent_crc(p_895->g_799.s5, "p_895->g_799.s5", print_hash_value);
    transparent_crc(p_895->g_799.s6, "p_895->g_799.s6", print_hash_value);
    transparent_crc(p_895->g_799.s7, "p_895->g_799.s7", print_hash_value);
    transparent_crc(p_895->g_799.s8, "p_895->g_799.s8", print_hash_value);
    transparent_crc(p_895->g_799.s9, "p_895->g_799.s9", print_hash_value);
    transparent_crc(p_895->g_799.sa, "p_895->g_799.sa", print_hash_value);
    transparent_crc(p_895->g_799.sb, "p_895->g_799.sb", print_hash_value);
    transparent_crc(p_895->g_799.sc, "p_895->g_799.sc", print_hash_value);
    transparent_crc(p_895->g_799.sd, "p_895->g_799.sd", print_hash_value);
    transparent_crc(p_895->g_799.se, "p_895->g_799.se", print_hash_value);
    transparent_crc(p_895->g_799.sf, "p_895->g_799.sf", print_hash_value);
    transparent_crc(p_895->v_collective, "p_895->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 59; i++)
            transparent_crc(p_895->g_special_values[i + 59 * get_linear_group_id()], "p_895->g_special_values[i + 59 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 59; i++)
            transparent_crc(p_895->l_special_values[i], "p_895->l_special_values[i]", print_hash_value);
    transparent_crc(p_895->l_comm_values[get_linear_local_id()], "p_895->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_895->g_comm_values[get_linear_group_id() * 38 + get_linear_local_id()], "p_895->g_comm_values[get_linear_group_id() * 38 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
