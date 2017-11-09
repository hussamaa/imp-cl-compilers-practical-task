// --atomics 20 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 62,32,2 -l 1,16,2
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

__constant uint32_t permutations[10][32] = {
{12,23,13,26,17,5,4,20,7,21,18,8,30,16,11,0,25,6,1,10,2,29,24,9,3,15,31,14,28,27,22,19}, // permutation 0
{15,27,21,1,25,2,31,19,10,9,29,5,17,28,13,7,8,0,4,18,16,24,3,26,22,6,23,20,30,14,12,11}, // permutation 1
{9,14,26,31,17,23,27,29,1,8,16,25,28,4,18,11,20,22,10,12,21,0,6,24,3,13,19,30,5,2,15,7}, // permutation 2
{17,27,29,9,31,13,20,6,5,18,25,10,12,1,16,3,21,14,23,26,4,28,22,11,7,0,2,30,8,19,24,15}, // permutation 3
{16,13,8,0,5,2,31,23,14,25,10,18,12,7,4,24,30,9,21,1,15,26,29,3,19,6,28,20,22,27,11,17}, // permutation 4
{20,24,30,26,1,27,17,21,12,3,5,6,9,23,16,8,22,13,28,10,15,18,4,7,19,11,29,31,0,2,14,25}, // permutation 5
{13,16,9,4,30,0,21,14,5,23,29,26,18,3,24,2,19,6,27,12,15,1,8,17,11,28,20,10,22,31,7,25}, // permutation 6
{14,2,4,19,20,31,15,26,5,12,24,22,29,1,27,21,3,6,18,11,16,28,25,30,17,9,10,7,8,0,13,23}, // permutation 7
{14,17,4,24,1,15,26,2,10,31,16,12,9,30,29,27,21,3,25,0,11,20,8,7,18,5,22,13,23,28,19,6}, // permutation 8
{2,13,18,4,22,9,8,15,0,23,7,19,25,5,27,21,29,14,20,6,30,28,24,3,17,11,10,31,1,16,26,12} // permutation 9
};

// Seed: 2573609246

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int64_t  f0;
   int32_t  f1;
};

struct S1 {
   uint32_t  f0;
   volatile uint32_t  f1;
};

struct S2 {
   int64_t  f0;
   int32_t  f1;
   uint32_t  f2;
   int16_t  f3;
   uint8_t  f4;
   uint8_t  f5;
   uint32_t  f6;
   int32_t  f7;
};

struct S3 {
    int32_t g_3;
    volatile int32_t g_8;
    int32_t g_13;
    int8_t g_14;
    uint64_t g_15[7];
    int32_t g_79;
    int32_t g_102;
    struct S0 g_108[1][4][8];
    volatile VECTOR(uint16_t, 16) g_131;
    int16_t g_148;
    int8_t g_155;
    volatile int64_t g_156;
    volatile uint64_t g_158;
    struct S2 g_170;
    VECTOR(uint64_t, 16) g_203;
    struct S1 g_208;
    struct S1 *g_210;
    struct S1 ** volatile g_209;
    int32_t g_219;
    int64_t g_220;
    int32_t g_221;
    volatile int8_t g_222;
    uint64_t g_223;
    int32_t *g_241[10];
    int32_t ** volatile g_240;
    volatile struct S2 g_251;
    volatile struct S2 *g_250;
    volatile struct S2 **g_249[4][6][10];
    volatile struct S2 *** volatile g_252;
    volatile struct S2 *** volatile g_253;
    int32_t ** volatile g_254;
    int32_t ** volatile g_259;
    VECTOR(uint64_t, 2) g_288;
    uint16_t g_311;
    struct S2 g_324;
    int32_t g_326[9][9][3];
    int32_t *g_325[10];
    volatile uint32_t g_333;
    int32_t ** volatile g_391[4][5][3];
    VECTOR(int32_t, 8) g_397;
    int32_t * volatile g_417[6][2][3];
    int32_t * volatile g_418;
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
uint64_t  func_1(struct S3 * p_419);
int64_t  func_27(int32_t * p_28, int32_t * p_29, struct S3 * p_419);
int32_t * func_30(int32_t  p_31, int32_t * p_32, int32_t  p_33, int32_t * p_34, struct S3 * p_419);
int64_t  func_37(int64_t  p_38, int32_t * p_39, uint64_t  p_40, int32_t * p_41, struct S3 * p_419);
int32_t * func_42(int32_t * p_43, int32_t * p_44, uint16_t  p_45, uint32_t  p_46, struct S3 * p_419);
int32_t * func_47(int32_t * p_48, struct S2  p_49, int32_t * p_50, struct S3 * p_419);
int32_t * func_51(int8_t  p_52, uint8_t  p_53, uint32_t  p_54, struct S3 * p_419);
uint8_t  func_63(int64_t  p_64, int32_t * p_65, uint32_t  p_66, int32_t * p_67, uint32_t  p_68, struct S3 * p_419);
uint16_t  func_69(int32_t * p_70, int32_t * p_71, struct S3 * p_419);
int16_t  func_85(int32_t * p_86, int16_t  p_87, int64_t  p_88, int32_t * p_89, struct S3 * p_419);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_419->l_comm_values p_419->g_15 p_419->g_14 p_419->g_comm_values p_419->g_13 p_419->g_3 p_419->g_79 p_419->g_108 p_419->g_131 p_419->g_102 p_419->g_158 p_419->g_170.f2 p_419->g_155 p_419->g_209 p_419->g_223 p_419->g_170.f7 p_419->g_240 p_419->g_249 p_419->g_253 p_419->g_254 p_419->g_148 p_419->g_170.f3 p_419->g_288 p_419->g_170.f1 p_419->g_324 p_419->g_325 p_419->g_250 p_419->g_251 p_419->g_208.f0 p_419->g_333 p_419->g_220 p_419->g_326 p_419->g_170 p_419->g_221 p_419->g_397 p_419->g_8 p_419->g_418
 * writes: p_419->g_15 p_419->g_14 p_419->g_3 p_419->g_102 p_419->l_comm_values p_419->g_79 p_419->g_8 p_419->g_158 p_419->g_148 p_419->g_170 p_419->g_203 p_419->g_13 p_419->g_210 p_419->g_223 p_419->g_241 p_419->g_108 p_419->g_249 p_419->g_155 p_419->g_251 p_419->g_326 p_419->g_333 p_419->g_324.f6 p_419->g_324.f3
 */
uint64_t  func_1(struct S3 * p_419)
{ /* block id: 4 */
    int32_t l_12 = 0L;
    int32_t *l_72 = &p_419->g_13;
    int32_t *l_138 = &p_419->g_13;
    VECTOR(uint8_t, 2) l_395 = (VECTOR(uint8_t, 2))(0x33L, 247UL);
    uint8_t *l_396 = &p_419->g_170.f5;
    uint64_t *l_402 = &p_419->g_15[5];
    struct S2 *l_404 = &p_419->g_324;
    struct S2 **l_403 = &l_404;
    int16_t *l_415 = &p_419->g_324.f3;
    int32_t *l_416 = &p_419->g_326[3][4][0];
    int i;
    if (p_419->l_comm_values[(safe_mod_func_uint32_t_u_u(p_419->tid, 32))])
    { /* block id: 5 */
        int32_t *l_2 = &p_419->g_3;
        int32_t *l_4 = &p_419->g_3;
        int32_t *l_5 = &p_419->g_3;
        int32_t *l_6 = &p_419->g_3;
        int32_t *l_7 = &p_419->g_3;
        int32_t *l_9 = &p_419->g_3;
        int32_t *l_10 = &p_419->g_3;
        int32_t *l_11[3];
        int i;
        for (i = 0; i < 3; i++)
            l_11[i] = &p_419->g_3;
        p_419->g_15[5]--;
        for (p_419->g_14 = 16; (p_419->g_14 == 15); --p_419->g_14)
        { /* block id: 9 */
            if (p_419->g_comm_values[p_419->tid])
                break;
        }
    }
    else
    { /* block id: 12 */
        uint32_t l_26 = 4294967295UL;
        VECTOR(uint32_t, 16) l_57 = (VECTOR(uint32_t, 16))(4294967294UL, (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 4294967295UL), 4294967295UL), 4294967295UL, 4294967294UL, 4294967295UL, (VECTOR(uint32_t, 2))(4294967294UL, 4294967295UL), (VECTOR(uint32_t, 2))(4294967294UL, 4294967295UL), 4294967294UL, 4294967295UL, 4294967294UL, 4294967295UL);
        VECTOR(uint32_t, 2) l_58 = (VECTOR(uint32_t, 2))(0x9622CFB6L, 0UL);
        int32_t l_137 = 0x4A8A9295L;
        int32_t l_336 = 1L;
        int32_t l_392 = 0x269DEB25L;
        int i;
        l_392 |= (safe_div_func_uint64_t_u_u(0xB01213072C02A306L, (safe_div_func_int32_t_s_s((safe_add_func_int32_t_s_s(l_26, 0x73AE4C7BL)), (p_419->g_15[5] & func_27(func_30((safe_mul_func_int8_t_s_s((func_37(l_12, func_42(func_47(func_51(((safe_mod_func_int8_t_s_s((0x7BC50133L || ((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(l_57.s8d5680a2560131b3)))), ((VECTOR(uint32_t, 16))(l_58.xyxyyxxxxyyxxyxx))))).s1), (safe_lshift_func_uint8_t_u_s(p_419->g_13, (safe_div_func_int8_t_s_s((func_63((((0x248B7552F0C8C580L == ((l_137 = ((func_69(l_72, &p_419->g_3, p_419) > p_419->g_108[0][1][0].f0) >= p_419->g_108[0][1][0].f1)) >= GROUP_DIVERGE(2, 1))) , (void*)0) == &p_419->g_13), l_138, (*l_72), &p_419->g_13, p_419->g_15[5], p_419) > (*l_138)), GROUP_DIVERGE(0, 1))))))) ^ (-5L)), (*l_72), l_58.x, p_419), p_419->g_324, p_419->g_325[9], p_419), &p_419->g_326[5][3][2], p_419->g_208.f0, p_419->g_324.f1, p_419), p_419->g_324.f3, p_419->g_325[9], p_419) >= l_336), p_419->g_220)), l_138, l_58.y, p_419->g_325[9], p_419), l_138, p_419))))));
    }
    (*p_419->g_418) = ((*l_416) = ((((p_419->g_3 && (safe_add_func_uint8_t_u_u(((*l_396) = ((VECTOR(uint8_t, 16))(l_395.xyxxyyxxyxyyxxxy)).sa), (((4294967295UL > ((VECTOR(int32_t, 16))(p_419->g_397.s0651477556650720)).s6) && ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(18446744073709551615UL, 0xA55BD3E6078B7C33L)).yxxy)).w) ^ ((safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s((((void*)0 != l_402) , (l_403 == &l_404)), ((((safe_div_func_uint8_t_u_u((((GROUP_DIVERGE(2, 1) || 0x29L) == (safe_lshift_func_int8_t_s_s((safe_div_func_int8_t_s_s(((safe_sub_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u(((((*l_415) = (((*l_138) = (*l_138)) ^ 4294967295UL)) | 0x1A01L) , p_419->g_14), 10)), 0x03E8A34F7CDD9F69L)) > FAKE_DIVERGE(p_419->local_1_offset, get_local_id(1), 10)), p_419->g_170.f4)), 0))) | (-4L)), p_419->g_170.f3)) > FAKE_DIVERGE(p_419->local_2_offset, get_local_id(2), 10)) || 0x5712B69B4388ADB9L) != 1UL))), p_419->g_8)) < 0x3D73L))))) & 0x74L) >= l_12) < p_419->g_170.f1));
    return (*l_138);
}


/* ------------------------------------------ */
/* 
 * reads : p_419->g_3 p_419->g_251.f5
 * writes: p_419->g_3
 */
int64_t  func_27(int32_t * p_28, int32_t * p_29, struct S3 * p_419)
{ /* block id: 174 */
    uint32_t l_387 = 0xFD888113L;
    int32_t *l_390 = (void*)0;
    for (p_419->g_3 = (-10); (p_419->g_3 > (-2)); ++p_419->g_3)
    { /* block id: 177 */
        int32_t *l_383 = &p_419->g_13;
        int32_t *l_384 = (void*)0;
        int32_t *l_385 = &p_419->g_326[5][6][0];
        int32_t *l_386[8][6][4] = {{{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3}},{{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3}},{{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3}},{{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3}},{{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3}},{{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3}},{{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3}},{{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3},{&p_419->g_13,&p_419->g_79,(void*)0,&p_419->g_3}}};
        int i, j, k;
        l_387++;
    }
    l_390 = l_390;
    return p_419->g_251.f5;
}


/* ------------------------------------------ */
/* 
 * reads : p_419->g_251.f6 p_419->g_326 p_419->g_223 p_419->g_324.f6 p_419->g_102 p_419->g_288 p_419->g_13 p_419->g_170 p_419->g_155 p_419->g_251.f2 p_419->g_324.f3 p_419->g_221
 * writes: p_419->g_170.f5 p_419->g_324.f6 p_419->g_13 p_419->g_108.f0
 */
int32_t * func_30(int32_t  p_31, int32_t * p_32, int32_t  p_33, int32_t * p_34, struct S3 * p_419)
{ /* block id: 162 */
    int16_t *l_341 = &p_419->g_324.f3;
    int16_t **l_340 = &l_341;
    int16_t ***l_339 = &l_340;
    int16_t ***l_342 = &l_340;
    struct S2 *l_345 = &p_419->g_170;
    uint8_t *l_346 = &p_419->g_170.f5;
    int8_t *l_347[9] = {&p_419->g_155,&p_419->g_155,&p_419->g_155,&p_419->g_155,&p_419->g_155,&p_419->g_155,&p_419->g_155,&p_419->g_155,&p_419->g_155};
    int32_t l_348 = (-7L);
    uint32_t *l_349 = &p_419->g_324.f6;
    int32_t l_350 = (-5L);
    VECTOR(int32_t, 4) l_351 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 9L), 9L);
    VECTOR(int32_t, 16) l_356 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x35D60101L), 0x35D60101L), 0x35D60101L, (-1L), 0x35D60101L, (VECTOR(int32_t, 2))((-1L), 0x35D60101L), (VECTOR(int32_t, 2))((-1L), 0x35D60101L), (-1L), 0x35D60101L, (-1L), 0x35D60101L);
    VECTOR(uint32_t, 4) l_359 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967295UL), 4294967295UL);
    int64_t *l_372 = (void*)0;
    int64_t *l_373 = &p_419->g_108[0][1][0].f0;
    int32_t *l_374 = (void*)0;
    int32_t *l_375 = &p_419->g_3;
    int32_t *l_376[7] = {&p_419->g_79,&p_419->g_79,&p_419->g_79,&p_419->g_79,&p_419->g_79,&p_419->g_79,&p_419->g_79};
    uint32_t l_377 = 2UL;
    int32_t *l_380[6] = {&l_350,&p_419->g_326[5][6][0],&l_350,&l_350,&p_419->g_326[5][6][0],&l_350};
    int i;
    l_350 = (((safe_add_func_uint64_t_u_u(((((0x982CBEC5L ^ (l_339 != (l_342 = &l_340))) > (safe_div_func_uint32_t_u_u((0x85F6880BL >= (18446744073709551611UL >= ((l_345 == (void*)0) > ((*l_349) &= ((p_419->g_251.f6 , (l_348 = ((((((*l_346) = p_419->g_326[5][6][0]) | 0xB4L) , p_419->g_223) | p_33) || 0xD8C7EBE50A85A745L))) && 0x44L))))), p_419->g_102))) > l_350) , GROUP_DIVERGE(1, 1)), p_419->g_288.y)) , (void*)0) == (void*)0);
    (*p_32) |= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_351.ywwwzxzz)))).s2;
    l_350 &= (safe_sub_func_uint8_t_u_u(((l_351.z = ((*l_373) = ((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 4))((((((((l_351.z < ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_356.s10aaad90bda31df7)).hi)).s2) , 0xD9E61DB1L) , (*l_345)) , (safe_div_func_uint16_t_u_u(((((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(rotate(((VECTOR(uint32_t, 16))(l_359.zxwxxzzzwwzyxxxz)), ((VECTOR(uint32_t, 2))(0x4CEB56BEL, 0x4C8C2C44L)).yyxyxxyxyyyxyyyy))).s3539)).y <= p_419->g_155) >= ((l_349 == &p_419->g_333) , p_419->g_170.f5)) , (safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_s(((+(safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((safe_add_func_int64_t_s_s(p_419->g_251.f2, (safe_rshift_func_uint16_t_u_u(((+(((((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 16))(0x09L, ((VECTOR(uint8_t, 4))(252UL, p_419->g_324.f3, 0x3CL, 0x61L)), ((VECTOR(uint8_t, 8))(255UL)), ((VECTOR(uint8_t, 2))(0UL)), 0x9CL)).lo, ((VECTOR(uint8_t, 8))(0xD6L))))).s6 ^ p_419->g_288.x) , p_31) , 0x79869B04L)) >= 0xFC2D8E4CL), p_419->g_288.y)))) == 1UL), 0UL)), 0x1B8DL))) || 1L), p_33)) < p_419->g_221), 9))) > p_33), GROUP_DIVERGE(2, 1)))) >= l_351.x) || l_351.x) && 0x05L), l_348, 4294967295UL, 0xAB8BC228L)).hi, ((VECTOR(uint32_t, 2))(0xD37F6176L))))).hi, GROUP_DIVERGE(2, 1))) & p_419->g_324.f6))) , GROUP_DIVERGE(2, 1)), 0xAFL));
    --l_377;
    return &p_419->g_3;
}


/* ------------------------------------------ */
/* 
 * reads : p_419->g_333 p_419->g_108.f1
 * writes: p_419->g_333
 */
int64_t  func_37(int64_t  p_38, int32_t * p_39, uint64_t  p_40, int32_t * p_41, struct S3 * p_419)
{ /* block id: 159 */
    int16_t l_329 = 1L;
    int32_t *l_330 = &p_419->g_79;
    int32_t *l_331 = (void*)0;
    int32_t *l_332[4][7][5] = {{{&p_419->g_79,&p_419->g_79,(void*)0,(void*)0,(void*)0},{&p_419->g_79,&p_419->g_79,(void*)0,(void*)0,(void*)0},{&p_419->g_79,&p_419->g_79,(void*)0,(void*)0,(void*)0},{&p_419->g_79,&p_419->g_79,(void*)0,(void*)0,(void*)0},{&p_419->g_79,&p_419->g_79,(void*)0,(void*)0,(void*)0},{&p_419->g_79,&p_419->g_79,(void*)0,(void*)0,(void*)0},{&p_419->g_79,&p_419->g_79,(void*)0,(void*)0,(void*)0}},{{&p_419->g_79,&p_419->g_79,(void*)0,(void*)0,(void*)0},{&p_419->g_79,&p_419->g_79,(void*)0,(void*)0,(void*)0},{&p_419->g_79,&p_419->g_79,(void*)0,(void*)0,(void*)0},{&p_419->g_79,&p_419->g_79,(void*)0,(void*)0,(void*)0},{&p_419->g_79,&p_419->g_79,(void*)0,(void*)0,(void*)0},{&p_419->g_79,&p_419->g_79,(void*)0,(void*)0,(void*)0},{&p_419->g_79,&p_419->g_79,(void*)0,(void*)0,(void*)0}},{{&p_419->g_79,&p_419->g_79,(void*)0,(void*)0,(void*)0},{&p_419->g_79,&p_419->g_79,(void*)0,(void*)0,(void*)0},{&p_419->g_79,&p_419->g_79,(void*)0,(void*)0,(void*)0},{&p_419->g_79,&p_419->g_79,(void*)0,(void*)0,(void*)0},{&p_419->g_79,&p_419->g_79,(void*)0,(void*)0,(void*)0},{&p_419->g_79,&p_419->g_79,(void*)0,(void*)0,(void*)0},{&p_419->g_79,&p_419->g_79,(void*)0,(void*)0,(void*)0}},{{&p_419->g_79,&p_419->g_79,(void*)0,(void*)0,(void*)0},{&p_419->g_79,&p_419->g_79,(void*)0,(void*)0,(void*)0},{&p_419->g_79,&p_419->g_79,(void*)0,(void*)0,(void*)0},{&p_419->g_79,&p_419->g_79,(void*)0,(void*)0,(void*)0},{&p_419->g_79,&p_419->g_79,(void*)0,(void*)0,(void*)0},{&p_419->g_79,&p_419->g_79,(void*)0,(void*)0,(void*)0},{&p_419->g_79,&p_419->g_79,(void*)0,(void*)0,(void*)0}}};
    int i, j, k;
    --p_419->g_333;
    return p_419->g_108[0][1][0].f1;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_419->g_326
 */
int32_t * func_42(int32_t * p_43, int32_t * p_44, uint16_t  p_45, uint32_t  p_46, struct S3 * p_419)
{ /* block id: 156 */
    int32_t *l_328[5][8] = {{&p_419->g_3,&p_419->g_3,(void*)0,&p_419->g_3,&p_419->g_326[7][1][1],&p_419->g_326[6][6][2],&p_419->g_326[5][6][0],&p_419->g_79},{&p_419->g_3,&p_419->g_3,(void*)0,&p_419->g_3,&p_419->g_326[7][1][1],&p_419->g_326[6][6][2],&p_419->g_326[5][6][0],&p_419->g_79},{&p_419->g_3,&p_419->g_3,(void*)0,&p_419->g_3,&p_419->g_326[7][1][1],&p_419->g_326[6][6][2],&p_419->g_326[5][6][0],&p_419->g_79},{&p_419->g_3,&p_419->g_3,(void*)0,&p_419->g_3,&p_419->g_326[7][1][1],&p_419->g_326[6][6][2],&p_419->g_326[5][6][0],&p_419->g_79},{&p_419->g_3,&p_419->g_3,(void*)0,&p_419->g_3,&p_419->g_326[7][1][1],&p_419->g_326[6][6][2],&p_419->g_326[5][6][0],&p_419->g_79}};
    int i, j;
    (*p_43) = 1L;
    return l_328[3][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_419->g_250 p_419->g_251
 * writes: p_419->g_251
 */
int32_t * func_47(int32_t * p_48, struct S2  p_49, int32_t * p_50, struct S3 * p_419)
{ /* block id: 153 */
    int32_t *l_327 = &p_419->g_326[5][6][0];
    (*p_419->g_250) = (*p_419->g_250);
    return l_327;
}


/* ------------------------------------------ */
/* 
 * reads : p_419->g_79 p_419->g_170.f2 p_419->g_155 p_419->g_3 p_419->g_13 p_419->g_209 p_419->g_223 p_419->g_170.f7 p_419->g_240 p_419->g_249 p_419->g_253 p_419->g_254 p_419->g_148 p_419->g_170.f3 p_419->g_14 p_419->g_288 p_419->g_170.f1 p_419->g_131 p_419->g_15
 * writes: p_419->g_148 p_419->g_170 p_419->g_203 p_419->g_3 p_419->g_13 p_419->g_210 p_419->g_223 p_419->g_241 p_419->g_108 p_419->g_79 p_419->g_249 p_419->g_14 p_419->g_155
 */
int32_t * func_51(int8_t  p_52, uint8_t  p_53, uint32_t  p_54, struct S3 * p_419)
{ /* block id: 56 */
    int8_t *l_163[9][1][7] = {{{&p_419->g_155,&p_419->g_155,&p_419->g_14,&p_419->g_155,&p_419->g_14,&p_419->g_155,&p_419->g_155}},{{&p_419->g_155,&p_419->g_155,&p_419->g_14,&p_419->g_155,&p_419->g_14,&p_419->g_155,&p_419->g_155}},{{&p_419->g_155,&p_419->g_155,&p_419->g_14,&p_419->g_155,&p_419->g_14,&p_419->g_155,&p_419->g_155}},{{&p_419->g_155,&p_419->g_155,&p_419->g_14,&p_419->g_155,&p_419->g_14,&p_419->g_155,&p_419->g_155}},{{&p_419->g_155,&p_419->g_155,&p_419->g_14,&p_419->g_155,&p_419->g_14,&p_419->g_155,&p_419->g_155}},{{&p_419->g_155,&p_419->g_155,&p_419->g_14,&p_419->g_155,&p_419->g_14,&p_419->g_155,&p_419->g_155}},{{&p_419->g_155,&p_419->g_155,&p_419->g_14,&p_419->g_155,&p_419->g_14,&p_419->g_155,&p_419->g_155}},{{&p_419->g_155,&p_419->g_155,&p_419->g_14,&p_419->g_155,&p_419->g_14,&p_419->g_155,&p_419->g_155}},{{&p_419->g_155,&p_419->g_155,&p_419->g_14,&p_419->g_155,&p_419->g_14,&p_419->g_155,&p_419->g_155}}};
    struct S2 l_164[2][10] = {{{0x740E15510CE241EAL,-7L,3UL,0x5D16L,0UL,255UL,0x3B14546EL,0x563D9F3AL},{0x1B381EAFD68FCE54L,0x7E047DFEL,0x8C283C3FL,0x05F1L,0x45L,255UL,0x952D2F77L,1L},{0x740E15510CE241EAL,-7L,3UL,0x5D16L,0UL,255UL,0x3B14546EL,0x563D9F3AL},{0x740E15510CE241EAL,-7L,3UL,0x5D16L,0UL,255UL,0x3B14546EL,0x563D9F3AL},{0x1B381EAFD68FCE54L,0x7E047DFEL,0x8C283C3FL,0x05F1L,0x45L,255UL,0x952D2F77L,1L},{0x740E15510CE241EAL,-7L,3UL,0x5D16L,0UL,255UL,0x3B14546EL,0x563D9F3AL},{0x740E15510CE241EAL,-7L,3UL,0x5D16L,0UL,255UL,0x3B14546EL,0x563D9F3AL},{0x1B381EAFD68FCE54L,0x7E047DFEL,0x8C283C3FL,0x05F1L,0x45L,255UL,0x952D2F77L,1L},{0x740E15510CE241EAL,-7L,3UL,0x5D16L,0UL,255UL,0x3B14546EL,0x563D9F3AL},{0x740E15510CE241EAL,-7L,3UL,0x5D16L,0UL,255UL,0x3B14546EL,0x563D9F3AL}},{{0x740E15510CE241EAL,-7L,3UL,0x5D16L,0UL,255UL,0x3B14546EL,0x563D9F3AL},{0x1B381EAFD68FCE54L,0x7E047DFEL,0x8C283C3FL,0x05F1L,0x45L,255UL,0x952D2F77L,1L},{0x740E15510CE241EAL,-7L,3UL,0x5D16L,0UL,255UL,0x3B14546EL,0x563D9F3AL},{0x740E15510CE241EAL,-7L,3UL,0x5D16L,0UL,255UL,0x3B14546EL,0x563D9F3AL},{0x1B381EAFD68FCE54L,0x7E047DFEL,0x8C283C3FL,0x05F1L,0x45L,255UL,0x952D2F77L,1L},{0x740E15510CE241EAL,-7L,3UL,0x5D16L,0UL,255UL,0x3B14546EL,0x563D9F3AL},{0x740E15510CE241EAL,-7L,3UL,0x5D16L,0UL,255UL,0x3B14546EL,0x563D9F3AL},{0x1B381EAFD68FCE54L,0x7E047DFEL,0x8C283C3FL,0x05F1L,0x45L,255UL,0x952D2F77L,1L},{0x740E15510CE241EAL,-7L,3UL,0x5D16L,0UL,255UL,0x3B14546EL,0x563D9F3AL},{0x740E15510CE241EAL,-7L,3UL,0x5D16L,0UL,255UL,0x3B14546EL,0x563D9F3AL}}};
    int16_t *l_165 = &p_419->g_148;
    uint32_t l_201 = 4294967295UL;
    int32_t l_217 = (-1L);
    int32_t l_218[9];
    struct S0 l_242 = {1L,-1L};
    VECTOR(uint64_t, 16) l_283 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x9FBE7750FABAB807L), 0x9FBE7750FABAB807L), 0x9FBE7750FABAB807L, 0UL, 0x9FBE7750FABAB807L, (VECTOR(uint64_t, 2))(0UL, 0x9FBE7750FABAB807L), (VECTOR(uint64_t, 2))(0UL, 0x9FBE7750FABAB807L), 0UL, 0x9FBE7750FABAB807L, 0UL, 0x9FBE7750FABAB807L);
    int32_t l_309 = 1L;
    uint32_t l_319[10][6][4] = {{{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL}},{{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL}},{{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL}},{{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL}},{{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL}},{{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL}},{{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL}},{{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL}},{{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL}},{{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL},{1UL,0x80AE462CL,0x451CC23AL,4294967295UL}}};
    int32_t *l_322[7];
    int32_t *l_323 = (void*)0;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_218[i] = 0x0DEF69FDL;
    for (i = 0; i < 7; i++)
        l_322[i] = &l_218[1];
    if ((safe_rshift_func_int16_t_s_u(((*l_165) = (l_163[1][0][6] != (l_164[1][6] , l_163[1][0][6]))), 7)))
    { /* block id: 58 */
        int8_t l_175 = 0x1EL;
        VECTOR(uint64_t, 8) l_181 = (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL), 0UL), 0UL, 18446744073709551615UL, 0UL);
        uint8_t *l_186 = &l_164[1][6].f4;
        uint32_t *l_192 = (void*)0;
        uint32_t *l_193 = &p_419->g_170.f6;
        int8_t **l_198 = &l_163[7][0][0];
        uint64_t *l_202[5];
        int64_t *l_204 = &l_164[1][6].f0;
        int32_t *l_205 = &p_419->g_3;
        int32_t *l_206 = &p_419->g_13;
        struct S1 *l_207 = &p_419->g_208;
        int i;
        for (i = 0; i < 5; i++)
            l_202[i] = (void*)0;
        for (p_52 = 0; (p_52 <= (-4)); p_52 = safe_sub_func_uint32_t_u_u(p_52, 3))
        { /* block id: 61 */
            struct S2 l_168 = {0x1DE2363870EDD471L,0x0ACD3375L,0x87EC679DL,0x1D14L,0x81L,0UL,1UL,0x42BB03F1L};
            struct S2 *l_169 = (void*)0;
            int32_t *l_171 = &p_419->g_3;
            int32_t *l_172 = &p_419->g_13;
            int32_t *l_173 = (void*)0;
            int32_t *l_174[4][5][5] = {{{(void*)0,&p_419->g_3,&p_419->g_79,&p_419->g_79,&p_419->g_79},{(void*)0,&p_419->g_3,&p_419->g_79,&p_419->g_79,&p_419->g_79},{(void*)0,&p_419->g_3,&p_419->g_79,&p_419->g_79,&p_419->g_79},{(void*)0,&p_419->g_3,&p_419->g_79,&p_419->g_79,&p_419->g_79},{(void*)0,&p_419->g_3,&p_419->g_79,&p_419->g_79,&p_419->g_79}},{{(void*)0,&p_419->g_3,&p_419->g_79,&p_419->g_79,&p_419->g_79},{(void*)0,&p_419->g_3,&p_419->g_79,&p_419->g_79,&p_419->g_79},{(void*)0,&p_419->g_3,&p_419->g_79,&p_419->g_79,&p_419->g_79},{(void*)0,&p_419->g_3,&p_419->g_79,&p_419->g_79,&p_419->g_79},{(void*)0,&p_419->g_3,&p_419->g_79,&p_419->g_79,&p_419->g_79}},{{(void*)0,&p_419->g_3,&p_419->g_79,&p_419->g_79,&p_419->g_79},{(void*)0,&p_419->g_3,&p_419->g_79,&p_419->g_79,&p_419->g_79},{(void*)0,&p_419->g_3,&p_419->g_79,&p_419->g_79,&p_419->g_79},{(void*)0,&p_419->g_3,&p_419->g_79,&p_419->g_79,&p_419->g_79},{(void*)0,&p_419->g_3,&p_419->g_79,&p_419->g_79,&p_419->g_79}},{{(void*)0,&p_419->g_3,&p_419->g_79,&p_419->g_79,&p_419->g_79},{(void*)0,&p_419->g_3,&p_419->g_79,&p_419->g_79,&p_419->g_79},{(void*)0,&p_419->g_3,&p_419->g_79,&p_419->g_79,&p_419->g_79},{(void*)0,&p_419->g_3,&p_419->g_79,&p_419->g_79,&p_419->g_79},{(void*)0,&p_419->g_3,&p_419->g_79,&p_419->g_79,&p_419->g_79}}};
            uint32_t l_176 = 1UL;
            int i, j, k;
            p_419->g_170 = l_168;
            --l_176;
            if (l_175)
                continue;
            l_172 = l_173;
        }
        (*l_206) |= ((*l_205) ^= ((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(l_181.s0073317715742756)).se, (0x6FF3L > (safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u(((*l_186) &= FAKE_DIVERGE(p_419->global_0_offset, get_global_id(0), 10)), 4)), (((*l_204) = (safe_unary_minus_func_uint64_t_u((p_419->g_203.se = (safe_mul_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((*l_193) = p_52), ((safe_div_func_int32_t_s_s(((safe_mod_func_uint32_t_u_u(((((*l_198) = &p_419->g_155) == (p_52 , &p_419->g_14)) & (p_419->g_79 != (p_419->g_170.f2 || (safe_lshift_func_int16_t_s_s(p_419->g_155, p_54))))), 0x73169F99L)) >= l_164[1][6].f5), l_201)) , p_53))), l_201)))))) <= p_52)))))) , 0x737966B2L));
        (*l_206) = ((void*)0 != &p_419->g_102);
        (*p_419->g_209) = l_207;
    }
    else
    { /* block id: 76 */
        int32_t *l_211 = &p_419->g_13;
        int32_t *l_212 = &p_419->g_13;
        int32_t *l_213 = &p_419->g_79;
        int32_t *l_214 = &p_419->g_3;
        int32_t *l_215 = &p_419->g_13;
        int32_t *l_216[7][6][3] = {{{&p_419->g_13,(void*)0,&p_419->g_3},{&p_419->g_13,(void*)0,&p_419->g_3},{&p_419->g_13,(void*)0,&p_419->g_3},{&p_419->g_13,(void*)0,&p_419->g_3},{&p_419->g_13,(void*)0,&p_419->g_3},{&p_419->g_13,(void*)0,&p_419->g_3}},{{&p_419->g_13,(void*)0,&p_419->g_3},{&p_419->g_13,(void*)0,&p_419->g_3},{&p_419->g_13,(void*)0,&p_419->g_3},{&p_419->g_13,(void*)0,&p_419->g_3},{&p_419->g_13,(void*)0,&p_419->g_3},{&p_419->g_13,(void*)0,&p_419->g_3}},{{&p_419->g_13,(void*)0,&p_419->g_3},{&p_419->g_13,(void*)0,&p_419->g_3},{&p_419->g_13,(void*)0,&p_419->g_3},{&p_419->g_13,(void*)0,&p_419->g_3},{&p_419->g_13,(void*)0,&p_419->g_3},{&p_419->g_13,(void*)0,&p_419->g_3}},{{&p_419->g_13,(void*)0,&p_419->g_3},{&p_419->g_13,(void*)0,&p_419->g_3},{&p_419->g_13,(void*)0,&p_419->g_3},{&p_419->g_13,(void*)0,&p_419->g_3},{&p_419->g_13,(void*)0,&p_419->g_3},{&p_419->g_13,(void*)0,&p_419->g_3}},{{&p_419->g_13,(void*)0,&p_419->g_3},{&p_419->g_13,(void*)0,&p_419->g_3},{&p_419->g_13,(void*)0,&p_419->g_3},{&p_419->g_13,(void*)0,&p_419->g_3},{&p_419->g_13,(void*)0,&p_419->g_3},{&p_419->g_13,(void*)0,&p_419->g_3}},{{&p_419->g_13,(void*)0,&p_419->g_3},{&p_419->g_13,(void*)0,&p_419->g_3},{&p_419->g_13,(void*)0,&p_419->g_3},{&p_419->g_13,(void*)0,&p_419->g_3},{&p_419->g_13,(void*)0,&p_419->g_3},{&p_419->g_13,(void*)0,&p_419->g_3}},{{&p_419->g_13,(void*)0,&p_419->g_3},{&p_419->g_13,(void*)0,&p_419->g_3},{&p_419->g_13,(void*)0,&p_419->g_3},{&p_419->g_13,(void*)0,&p_419->g_3},{&p_419->g_13,(void*)0,&p_419->g_3},{&p_419->g_13,(void*)0,&p_419->g_3}}};
        VECTOR(uint64_t, 8) l_278 = (VECTOR(uint64_t, 8))(0xF2315EEC50ED1BE1L, (VECTOR(uint64_t, 4))(0xF2315EEC50ED1BE1L, (VECTOR(uint64_t, 2))(0xF2315EEC50ED1BE1L, 0x9E0B9C208A202F83L), 0x9E0B9C208A202F83L), 0x9E0B9C208A202F83L, 0xF2315EEC50ED1BE1L, 0x9E0B9C208A202F83L);
        int32_t l_308 = 0x6399D35BL;
        int i, j, k;
        p_419->g_223++;
        for (p_52 = (-5); (p_52 != (-22)); p_52 = safe_sub_func_uint64_t_u_u(p_52, 1))
        { /* block id: 80 */
            struct S0 l_234 = {1L,0x63149756L};
            int16_t *l_244[10][9] = {{&l_164[1][6].f3,&l_164[1][6].f3,&p_419->g_170.f3,&p_419->g_148,&l_164[1][6].f3,&p_419->g_148,&p_419->g_170.f3,&l_164[1][6].f3,&l_164[1][6].f3},{&l_164[1][6].f3,&l_164[1][6].f3,&p_419->g_170.f3,&p_419->g_148,&l_164[1][6].f3,&p_419->g_148,&p_419->g_170.f3,&l_164[1][6].f3,&l_164[1][6].f3},{&l_164[1][6].f3,&l_164[1][6].f3,&p_419->g_170.f3,&p_419->g_148,&l_164[1][6].f3,&p_419->g_148,&p_419->g_170.f3,&l_164[1][6].f3,&l_164[1][6].f3},{&l_164[1][6].f3,&l_164[1][6].f3,&p_419->g_170.f3,&p_419->g_148,&l_164[1][6].f3,&p_419->g_148,&p_419->g_170.f3,&l_164[1][6].f3,&l_164[1][6].f3},{&l_164[1][6].f3,&l_164[1][6].f3,&p_419->g_170.f3,&p_419->g_148,&l_164[1][6].f3,&p_419->g_148,&p_419->g_170.f3,&l_164[1][6].f3,&l_164[1][6].f3},{&l_164[1][6].f3,&l_164[1][6].f3,&p_419->g_170.f3,&p_419->g_148,&l_164[1][6].f3,&p_419->g_148,&p_419->g_170.f3,&l_164[1][6].f3,&l_164[1][6].f3},{&l_164[1][6].f3,&l_164[1][6].f3,&p_419->g_170.f3,&p_419->g_148,&l_164[1][6].f3,&p_419->g_148,&p_419->g_170.f3,&l_164[1][6].f3,&l_164[1][6].f3},{&l_164[1][6].f3,&l_164[1][6].f3,&p_419->g_170.f3,&p_419->g_148,&l_164[1][6].f3,&p_419->g_148,&p_419->g_170.f3,&l_164[1][6].f3,&l_164[1][6].f3},{&l_164[1][6].f3,&l_164[1][6].f3,&p_419->g_170.f3,&p_419->g_148,&l_164[1][6].f3,&p_419->g_148,&p_419->g_170.f3,&l_164[1][6].f3,&l_164[1][6].f3},{&l_164[1][6].f3,&l_164[1][6].f3,&p_419->g_170.f3,&p_419->g_148,&l_164[1][6].f3,&p_419->g_148,&p_419->g_170.f3,&l_164[1][6].f3,&l_164[1][6].f3}};
            int32_t l_255 = (-1L);
            int32_t *l_274 = &l_217;
            int32_t *l_313 = &p_419->g_3;
            int i, j;
            for (p_419->g_170.f7 = 0; (p_419->g_170.f7 > (-11)); p_419->g_170.f7 = safe_sub_func_int8_t_s_s(p_419->g_170.f7, 2))
            { /* block id: 83 */
                int32_t l_247[6][7][6] = {{{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL}},{{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL}},{{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL}},{{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL}},{{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL}},{{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL},{(-1L),(-4L),0x0119FD0AL,0x5503745BL,6L,0x15484FCDL}}};
                int i, j, k;
                for (p_419->g_148 = 0; (p_419->g_148 == (-1)); p_419->g_148 = safe_sub_func_int16_t_s_s(p_419->g_148, 7))
                { /* block id: 86 */
                    if ((safe_mod_func_uint32_t_u_u((l_234 , GROUP_DIVERGE(0, 1)), (safe_rshift_func_uint8_t_u_u(0xB7L, 4)))))
                    { /* block id: 87 */
                        uint32_t l_237 = 0x3EACF7F0L;
                        ++l_237;
                    }
                    else
                    { /* block id: 89 */
                        struct S0 *l_243 = &p_419->g_108[0][1][0];
                        (*l_214) |= (-10L);
                        (*p_419->g_240) = &l_218[6];
                        (*l_243) = l_242;
                    }
                    (*l_211) ^= ((*l_213) = ((VECTOR(int32_t, 2))(0x3EAF350AL, (-7L))).even);
                }
                (*l_213) &= (l_244[0][2] != l_244[0][2]);
                for (p_419->g_170.f2 = 0; (p_419->g_170.f2 > 26); p_419->g_170.f2 = safe_add_func_int8_t_s_s(p_419->g_170.f2, 7))
                { /* block id: 100 */
                    struct S2 l_256 = {0x3131245ED57654CDL,0x06674992L,0xE3124970L,-4L,0x71L,0x01L,4294967294UL,-1L};
                    struct S2 *l_257 = &l_256;
                    int32_t *l_258 = (void*)0;
                    int32_t **l_260 = &l_216[5][2][2];
                    if (l_247[1][3][2])
                    { /* block id: 101 */
                        int32_t *l_248 = &l_217;
                        l_248 = (void*)0;
                        (*p_419->g_253) = p_419->g_249[1][0][4];
                    }
                    else
                    { /* block id: 104 */
                        if ((*l_211))
                            break;
                        (*p_419->g_254) = l_216[5][1][2];
                    }
                    l_255 &= l_164[1][6].f2;
                    (*l_260) = (((*l_257) = l_256) , (l_247[1][3][2] , l_258));
                }
            }
            if (p_52)
                break;
            for (p_419->g_148 = 0; (p_419->g_148 > 16); p_419->g_148++)
            { /* block id: 116 */
                int32_t l_272 = 9L;
                VECTOR(uint64_t, 2) l_282 = (VECTOR(uint64_t, 2))(0x04DE0A3D1CDC3E10L, 0x822510BBF201D482L);
                uint64_t *l_289 = (void*)0;
                uint64_t *l_290 = &p_419->g_223;
                uint8_t *l_297 = &p_419->g_170.f5;
                uint16_t *l_310[3][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                int32_t l_312 = 0x4A048C49L;
                int i, j;
                for (p_419->g_170.f3 = (-26); (p_419->g_170.f3 > 6); ++p_419->g_170.f3)
                { /* block id: 119 */
                    int32_t *l_275 = &p_419->g_3;
                    if ((atomic_inc(&p_419->l_atomic_input[19]) == 5))
                    { /* block id: 121 */
                        int16_t l_265 = 1L;
                        int8_t l_266 = 0x30L;
                        uint32_t l_267[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_267[i] = 0x7F900F8BL;
                        ++l_267[1];
                        unsigned int result = 0;
                        result += l_265;
                        result += l_266;
                        int l_267_i0;
                        for (l_267_i0 = 0; l_267_i0 < 2; l_267_i0++) {
                            result += l_267[l_267_i0];
                        }
                        atomic_add(&p_419->l_special_values[19], result);
                    }
                    else
                    { /* block id: 123 */
                        (1 + 1);
                    }
                    for (p_419->g_14 = (-19); (p_419->g_14 <= 1); p_419->g_14 = safe_add_func_int64_t_s_s(p_419->g_14, 4))
                    { /* block id: 128 */
                        int32_t *l_273 = &l_218[1];
                        if (l_272)
                            break;
                        return l_275;
                    }
                }
                atomic_and(&p_419->g_atomic_reduction[get_linear_group_id()], (safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(l_278.s46)).xxyyyxxx)).s2, ((safe_unary_minus_func_int16_t_s((p_419->g_170.f3 = ((!(!(~p_52))) & (safe_mod_func_uint64_t_u_u((((VECTOR(uint64_t, 16))(mul_hi(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(add_sat(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(mad_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(l_282.xxyy)).x, 18446744073709551612UL, 18446744073709551615UL, ((VECTOR(uint64_t, 4))(18446744073709551615UL, 18446744073709551615UL, 0xAF38123D7D083F39L, 0x5D862802A21A2BE1L)), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0xBDB8F3D68C3727E3L, 0xB8EFAE4A95572A71L)).yyxx)).yxzwxyxw)), 0xFADDA2EB418FD80DL)), ((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(0xD36B61EE534A3309L, 0UL, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_283.s8250)).yzwxwxxw)), ((safe_lshift_func_int8_t_s_u((safe_div_func_uint16_t_u_u((((*l_290) = ((VECTOR(uint64_t, 2))(p_419->g_288.yy)).odd) | (safe_mul_func_uint16_t_u_u((l_272 = (safe_lshift_func_uint8_t_u_s((((safe_sub_func_int8_t_s_s((((*l_297) = l_201) , ((VECTOR(int8_t, 4))((-1L), (safe_add_func_int64_t_s_s((safe_div_func_int64_t_s_s(p_419->g_170.f1, FAKE_DIVERGE(p_419->global_1_offset, get_global_id(1), 10))), (((((*l_211) = (safe_add_func_int32_t_s_s(((-6L) == (p_419->g_14 = ((l_282.y >= ((safe_mul_func_uint8_t_u_u(FAKE_DIVERGE(p_419->group_0_offset, get_group_id(0), 10), (p_419->g_155 = (((&p_419->g_241[8] == ((safe_lshift_func_uint8_t_u_u((((*l_297) = (l_218[3] != (*l_212))) > 0x03L), l_308)) , &p_419->g_241[2])) >= 65529UL) <= 0x710EA519D7A940A5L)))) != p_52)) ^ 1UL))), 0x6CFBCF82L))) <= p_419->g_131.s3) >= 0xD8D492CE9E5505F3L) == p_419->g_170.f7))), 0x66L, 1L)).x), 255UL)) , l_309) ^ p_419->g_288.y), p_419->g_15[3]))), p_419->g_15[5]))), p_419->g_170.f1)), p_53)) != p_54), l_164[1][6].f4, 0x7DF71C4886542614L, ((VECTOR(uint64_t, 2))(0x617ACAAF1FE23A68L)), 0x6C3BA4103F1AFA0BL)).s42)), ((VECTOR(uint64_t, 2))(3UL))))).yyyxyyyxyyyyyyyx, ((VECTOR(uint64_t, 16))(0x590C066BD9598FA4L))))).lo)).s44)).yxxy)).lo, ((VECTOR(uint64_t, 2))(0x4ECB627330C4BFC3L))))).yyyxxxxy)).s4510226753477521, ((VECTOR(uint64_t, 16))(0UL))))).s2 , p_419->g_288.y), p_419->g_15[2])))))) < l_312))) + get_linear_global_id());
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_419->v_collective += p_419->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            }
            return l_313;
        }
        for (p_54 = 0; (p_54 != 30); p_54 = safe_add_func_uint64_t_u_u(p_54, 4))
        { /* block id: 147 */
            uint32_t l_316 = 4294967295UL;
            ++l_316;
        }
        --l_319[7][4][3];
    }
    return l_323;
}


/* ------------------------------------------ */
/* 
 * reads : p_419->g_3 p_419->g_14 p_419->g_13 p_419->g_102 p_419->g_158 p_419->g_15
 * writes: p_419->g_3 p_419->g_14 p_419->g_102 p_419->g_158
 */
uint8_t  func_63(int64_t  p_64, int32_t * p_65, uint32_t  p_66, int32_t * p_67, uint32_t  p_68, struct S3 * p_419)
{ /* block id: 37 */
    struct S2 *l_139 = (void*)0;
    struct S2 **l_140 = (void*)0;
    int32_t l_154 = (-3L);
    l_139 = l_139;
    for (p_419->g_3 = 29; (p_419->g_3 == 22); p_419->g_3 = safe_sub_func_uint16_t_u_u(p_419->g_3, 8))
    { /* block id: 41 */
        int16_t *l_147 = &p_419->g_148;
        int16_t **l_146 = &l_147;
        int16_t ***l_145 = &l_146;
        int32_t l_153 = 0L;
        int32_t l_157 = 0x1A2FC839L;
        for (p_419->g_14 = (-8); (p_419->g_14 > 2); p_419->g_14 = safe_add_func_uint8_t_u_u(p_419->g_14, 5))
        { /* block id: 44 */
            if ((*p_67))
                break;
        }
        (*l_145) = (void*)0;
        for (p_419->g_102 = (-29); (p_419->g_102 >= (-26)); p_419->g_102++)
        { /* block id: 50 */
            int32_t *l_151 = (void*)0;
            int32_t *l_152[10] = {&p_419->g_79,(void*)0,&p_419->g_13,(void*)0,&p_419->g_79,&p_419->g_79,(void*)0,&p_419->g_13,(void*)0,&p_419->g_79};
            int i;
            p_419->g_158++;
        }
        if (p_419->g_15[5])
            break;
    }
    return p_68;
}


/* ------------------------------------------ */
/* 
 * reads : p_419->g_3 p_419->g_14 p_419->g_15 p_419->g_79 p_419->g_comm_values p_419->g_108 p_419->g_13 p_419->l_comm_values p_419->g_131
 * writes: p_419->g_3 p_419->g_14 p_419->g_102 p_419->l_comm_values p_419->g_79 p_419->g_8
 */
uint16_t  func_69(int32_t * p_70, int32_t * p_71, struct S3 * p_419)
{ /* block id: 13 */
    uint32_t l_90 = 0x18A1C1E9L;
    VECTOR(uint16_t, 8) l_99 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL);
    int32_t *l_100 = (void*)0;
    VECTOR(uint16_t, 4) l_132 = (VECTOR(uint16_t, 4))(0x5C1CL, (VECTOR(uint16_t, 2))(0x5C1CL, 0x14EAL), 0x14EAL);
    uint64_t l_136 = 3UL;
    int i;
    for (p_419->g_3 = (-4); (p_419->g_3 >= (-9)); p_419->g_3--)
    { /* block id: 16 */
        int16_t l_80[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
        int32_t l_124 = 0x4A465FDEL;
        int32_t l_135 = (-7L);
        int i;
        for (p_419->g_14 = 0; (p_419->g_14 <= (-27)); p_419->g_14--)
        { /* block id: 19 */
            int8_t l_77 = 1L;
            int32_t *l_78[2][1];
            int32_t *l_101 = &p_419->g_102;
            int64_t *l_103 = (void*)0;
            int64_t *l_104 = (void*)0;
            int64_t *l_105[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_109 = (-3L);
            VECTOR(int32_t, 4) l_118 = (VECTOR(int32_t, 4))(0x3B11E403L, (VECTOR(int32_t, 2))(0x3B11E403L, 0x172AE315L), 0x172AE315L);
            int8_t *l_123[7][10][3] = {{{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0}},{{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0}},{{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0}},{{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0}},{{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0}},{{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0}},{{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0},{&p_419->g_14,(void*)0,(void*)0}}};
            VECTOR(uint16_t, 2) l_133 = (VECTOR(uint16_t, 2))(0xF784L, 0x6686L);
            int16_t *l_134 = &l_80[8];
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_78[i][j] = &p_419->g_79;
            }
            l_80[8] = l_77;
            p_419->g_8 = (p_419->g_15[5] ^ (safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(p_419->g_15[6], (((func_85(&p_419->g_13, l_90, ((((p_419->l_comm_values[(safe_mod_func_uint32_t_u_u(p_419->tid, 32))] = ((((*l_101) = (safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((safe_mul_func_int64_t_s_s(p_419->g_14, ((void*)0 != l_78[0][0]))), (0L != (safe_mod_func_uint8_t_u_u(((((VECTOR(uint16_t, 4))(l_99.s4716)).y == (((l_99.s5 < 1L) , (void*)0) != l_100)) , p_419->g_79), p_419->g_79))))), GROUP_DIVERGE(1, 1)))) , l_90) , l_80[8])) && p_419->g_15[6]) || p_419->g_14) & 0L), &p_419->g_3, p_419) , p_419->g_108[0][1][0]) , p_71) != p_71))), l_109)));
            l_135 = ((safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s((-5L), p_419->g_108[0][1][0].f0)), 7)) <= ((~(safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((p_419->g_79 &= (*p_70)) <= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_118.ywwzxzwwzwzxxxyw)).s77a2)).w), ((p_419->l_comm_values[(safe_mod_func_uint32_t_u_u(p_419->tid, 32))] , (safe_lshift_func_uint8_t_u_u(0xD3L, p_419->g_108[0][1][0].f0))) <= ((VECTOR(int8_t, 2))(1L, (-1L))).even))), 0))) , (safe_mod_func_int16_t_s_s((((l_124 = ((VECTOR(int8_t, 2))(9L, 0L)).even) && p_419->g_79) , ((*l_134) = ((safe_rshift_func_uint16_t_u_u(GROUP_DIVERGE(2, 1), p_419->g_14)) , (safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u((((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),VECTOR(uint16_t, 8),((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(p_419->g_131.s8982)).xyyzzzwx)), ((VECTOR(uint16_t, 8))(l_132.wyzxyxzz)), ((VECTOR(uint16_t, 16))(l_133.yxxyxyyyyxyxxyxx)).hi))).s2 , p_419->g_131.s1), l_80[8])), 0x04L))))), p_419->g_13))));
            if (l_124)
                continue;
        }
    }
    return l_136;
}


/* ------------------------------------------ */
/* 
 * reads : p_419->g_79 p_419->g_comm_values
 * writes: p_419->g_79
 */
int16_t  func_85(int32_t * p_86, int16_t  p_87, int64_t  p_88, int32_t * p_89, struct S3 * p_419)
{ /* block id: 23 */
    int32_t *l_107 = (void*)0;
    int32_t **l_106 = &l_107;
    (*l_106) = &p_419->g_79;
    (**l_106) &= ((void*)0 == &p_419->g_8);
    return p_419->g_comm_values[p_419->tid];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[20];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 20; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[20];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 20; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[32];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 32; i++)
            l_comm_values[i] = 1;
    struct S3 c_420;
    struct S3* p_419 = &c_420;
    struct S3 c_421 = {
        0L, // p_419->g_3
        (-1L), // p_419->g_8
        1L, // p_419->g_13
        0x15L, // p_419->g_14
        {18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL}, // p_419->g_15
        1L, // p_419->g_79
        (-1L), // p_419->g_102
        {{{{-1L,0x5626A28EL},{-1L,0x5626A28EL},{-1L,0x5626A28EL},{-1L,0x5626A28EL},{-1L,0x5626A28EL},{-1L,0x5626A28EL},{-1L,0x5626A28EL},{-1L,0x5626A28EL}},{{-1L,0x5626A28EL},{-1L,0x5626A28EL},{-1L,0x5626A28EL},{-1L,0x5626A28EL},{-1L,0x5626A28EL},{-1L,0x5626A28EL},{-1L,0x5626A28EL},{-1L,0x5626A28EL}},{{-1L,0x5626A28EL},{-1L,0x5626A28EL},{-1L,0x5626A28EL},{-1L,0x5626A28EL},{-1L,0x5626A28EL},{-1L,0x5626A28EL},{-1L,0x5626A28EL},{-1L,0x5626A28EL}},{{-1L,0x5626A28EL},{-1L,0x5626A28EL},{-1L,0x5626A28EL},{-1L,0x5626A28EL},{-1L,0x5626A28EL},{-1L,0x5626A28EL},{-1L,0x5626A28EL},{-1L,0x5626A28EL}}}}, // p_419->g_108
        (VECTOR(uint16_t, 16))(0x70D8L, (VECTOR(uint16_t, 4))(0x70D8L, (VECTOR(uint16_t, 2))(0x70D8L, 9UL), 9UL), 9UL, 0x70D8L, 9UL, (VECTOR(uint16_t, 2))(0x70D8L, 9UL), (VECTOR(uint16_t, 2))(0x70D8L, 9UL), 0x70D8L, 9UL, 0x70D8L, 9UL), // p_419->g_131
        0x6DC6L, // p_419->g_148
        0x49L, // p_419->g_155
        0x5E658E48FED42C18L, // p_419->g_156
        0x2451B5D9575A6E99L, // p_419->g_158
        {-6L,0x2E0F3F86L,0xD6690D2EL,0L,0x65L,0x52L,0x90A631AEL,0x40A6948EL}, // p_419->g_170
        (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x66255C8574B2B15EL), 0x66255C8574B2B15EL), 0x66255C8574B2B15EL, 1UL, 0x66255C8574B2B15EL, (VECTOR(uint64_t, 2))(1UL, 0x66255C8574B2B15EL), (VECTOR(uint64_t, 2))(1UL, 0x66255C8574B2B15EL), 1UL, 0x66255C8574B2B15EL, 1UL, 0x66255C8574B2B15EL), // p_419->g_203
        {1UL,0xD8CB9ADDL}, // p_419->g_208
        &p_419->g_208, // p_419->g_210
        &p_419->g_210, // p_419->g_209
        0x698FBD53L, // p_419->g_219
        0x09101FC4C8207CD8L, // p_419->g_220
        1L, // p_419->g_221
        0x7EL, // p_419->g_222
        18446744073709551609UL, // p_419->g_223
        {&p_419->g_79,&p_419->g_79,&p_419->g_79,&p_419->g_79,&p_419->g_79,&p_419->g_79,&p_419->g_79,&p_419->g_79,&p_419->g_79,&p_419->g_79}, // p_419->g_241
        &p_419->g_241[2], // p_419->g_240
        {-1L,0L,6UL,0x19E5L,255UL,255UL,0UL,1L}, // p_419->g_251
        &p_419->g_251, // p_419->g_250
        {{{&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250},{&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250},{&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250},{&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250},{&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250},{&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250}},{{&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250},{&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250},{&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250},{&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250},{&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250},{&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250}},{{&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250},{&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250},{&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250},{&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250},{&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250},{&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250}},{{&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250},{&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250},{&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250},{&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250},{&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250},{&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250,&p_419->g_250}}}, // p_419->g_249
        (void*)0, // p_419->g_252
        &p_419->g_249[1][0][4], // p_419->g_253
        &p_419->g_241[0], // p_419->g_254
        (void*)0, // p_419->g_259
        (VECTOR(uint64_t, 2))(0x9862261CC5E2536EL, 18446744073709551615UL), // p_419->g_288
        65535UL, // p_419->g_311
        {6L,-10L,4294967286UL,-1L,251UL,0x59L,0xC3AFE4F7L,0L}, // p_419->g_324
        {{{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L}},{{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L}},{{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L}},{{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L}},{{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L}},{{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L}},{{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L}},{{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L}},{{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L}}}, // p_419->g_326
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_419->g_325
        0x0AF08930L, // p_419->g_333
        {{{&p_419->g_325[9],&p_419->g_325[7],&p_419->g_325[9]},{&p_419->g_325[9],&p_419->g_325[7],&p_419->g_325[9]},{&p_419->g_325[9],&p_419->g_325[7],&p_419->g_325[9]},{&p_419->g_325[9],&p_419->g_325[7],&p_419->g_325[9]},{&p_419->g_325[9],&p_419->g_325[7],&p_419->g_325[9]}},{{&p_419->g_325[9],&p_419->g_325[7],&p_419->g_325[9]},{&p_419->g_325[9],&p_419->g_325[7],&p_419->g_325[9]},{&p_419->g_325[9],&p_419->g_325[7],&p_419->g_325[9]},{&p_419->g_325[9],&p_419->g_325[7],&p_419->g_325[9]},{&p_419->g_325[9],&p_419->g_325[7],&p_419->g_325[9]}},{{&p_419->g_325[9],&p_419->g_325[7],&p_419->g_325[9]},{&p_419->g_325[9],&p_419->g_325[7],&p_419->g_325[9]},{&p_419->g_325[9],&p_419->g_325[7],&p_419->g_325[9]},{&p_419->g_325[9],&p_419->g_325[7],&p_419->g_325[9]},{&p_419->g_325[9],&p_419->g_325[7],&p_419->g_325[9]}},{{&p_419->g_325[9],&p_419->g_325[7],&p_419->g_325[9]},{&p_419->g_325[9],&p_419->g_325[7],&p_419->g_325[9]},{&p_419->g_325[9],&p_419->g_325[7],&p_419->g_325[9]},{&p_419->g_325[9],&p_419->g_325[7],&p_419->g_325[9]},{&p_419->g_325[9],&p_419->g_325[7],&p_419->g_325[9]}}}, // p_419->g_391
        (VECTOR(int32_t, 8))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x2FC5E81AL), 0x2FC5E81AL), 0x2FC5E81AL, (-5L), 0x2FC5E81AL), // p_419->g_397
        {{{&p_419->g_3,&p_419->g_3,&p_419->g_79},{&p_419->g_3,&p_419->g_3,&p_419->g_79}},{{&p_419->g_3,&p_419->g_3,&p_419->g_79},{&p_419->g_3,&p_419->g_3,&p_419->g_79}},{{&p_419->g_3,&p_419->g_3,&p_419->g_79},{&p_419->g_3,&p_419->g_3,&p_419->g_79}},{{&p_419->g_3,&p_419->g_3,&p_419->g_79},{&p_419->g_3,&p_419->g_3,&p_419->g_79}},{{&p_419->g_3,&p_419->g_3,&p_419->g_79},{&p_419->g_3,&p_419->g_3,&p_419->g_79}},{{&p_419->g_3,&p_419->g_3,&p_419->g_79},{&p_419->g_3,&p_419->g_3,&p_419->g_79}}}, // p_419->g_417
        &p_419->g_79, // p_419->g_418
        0, // p_419->v_collective
        sequence_input[get_global_id(0)], // p_419->global_0_offset
        sequence_input[get_global_id(1)], // p_419->global_1_offset
        sequence_input[get_global_id(2)], // p_419->global_2_offset
        sequence_input[get_local_id(0)], // p_419->local_0_offset
        sequence_input[get_local_id(1)], // p_419->local_1_offset
        sequence_input[get_local_id(2)], // p_419->local_2_offset
        sequence_input[get_group_id(0)], // p_419->group_0_offset
        sequence_input[get_group_id(1)], // p_419->group_1_offset
        sequence_input[get_group_id(2)], // p_419->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 32)), permutations[0][get_linear_local_id()])), // p_419->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_420 = c_421;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_419);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_419->g_3, "p_419->g_3", print_hash_value);
    transparent_crc(p_419->g_8, "p_419->g_8", print_hash_value);
    transparent_crc(p_419->g_13, "p_419->g_13", print_hash_value);
    transparent_crc(p_419->g_14, "p_419->g_14", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_419->g_15[i], "p_419->g_15[i]", print_hash_value);

    }
    transparent_crc(p_419->g_79, "p_419->g_79", print_hash_value);
    transparent_crc(p_419->g_102, "p_419->g_102", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_419->g_108[i][j][k].f0, "p_419->g_108[i][j][k].f0", print_hash_value);
                transparent_crc(p_419->g_108[i][j][k].f1, "p_419->g_108[i][j][k].f1", print_hash_value);

            }
        }
    }
    transparent_crc(p_419->g_131.s0, "p_419->g_131.s0", print_hash_value);
    transparent_crc(p_419->g_131.s1, "p_419->g_131.s1", print_hash_value);
    transparent_crc(p_419->g_131.s2, "p_419->g_131.s2", print_hash_value);
    transparent_crc(p_419->g_131.s3, "p_419->g_131.s3", print_hash_value);
    transparent_crc(p_419->g_131.s4, "p_419->g_131.s4", print_hash_value);
    transparent_crc(p_419->g_131.s5, "p_419->g_131.s5", print_hash_value);
    transparent_crc(p_419->g_131.s6, "p_419->g_131.s6", print_hash_value);
    transparent_crc(p_419->g_131.s7, "p_419->g_131.s7", print_hash_value);
    transparent_crc(p_419->g_131.s8, "p_419->g_131.s8", print_hash_value);
    transparent_crc(p_419->g_131.s9, "p_419->g_131.s9", print_hash_value);
    transparent_crc(p_419->g_131.sa, "p_419->g_131.sa", print_hash_value);
    transparent_crc(p_419->g_131.sb, "p_419->g_131.sb", print_hash_value);
    transparent_crc(p_419->g_131.sc, "p_419->g_131.sc", print_hash_value);
    transparent_crc(p_419->g_131.sd, "p_419->g_131.sd", print_hash_value);
    transparent_crc(p_419->g_131.se, "p_419->g_131.se", print_hash_value);
    transparent_crc(p_419->g_131.sf, "p_419->g_131.sf", print_hash_value);
    transparent_crc(p_419->g_148, "p_419->g_148", print_hash_value);
    transparent_crc(p_419->g_155, "p_419->g_155", print_hash_value);
    transparent_crc(p_419->g_156, "p_419->g_156", print_hash_value);
    transparent_crc(p_419->g_158, "p_419->g_158", print_hash_value);
    transparent_crc(p_419->g_170.f0, "p_419->g_170.f0", print_hash_value);
    transparent_crc(p_419->g_170.f1, "p_419->g_170.f1", print_hash_value);
    transparent_crc(p_419->g_170.f2, "p_419->g_170.f2", print_hash_value);
    transparent_crc(p_419->g_170.f3, "p_419->g_170.f3", print_hash_value);
    transparent_crc(p_419->g_170.f4, "p_419->g_170.f4", print_hash_value);
    transparent_crc(p_419->g_170.f5, "p_419->g_170.f5", print_hash_value);
    transparent_crc(p_419->g_170.f6, "p_419->g_170.f6", print_hash_value);
    transparent_crc(p_419->g_170.f7, "p_419->g_170.f7", print_hash_value);
    transparent_crc(p_419->g_203.s0, "p_419->g_203.s0", print_hash_value);
    transparent_crc(p_419->g_203.s1, "p_419->g_203.s1", print_hash_value);
    transparent_crc(p_419->g_203.s2, "p_419->g_203.s2", print_hash_value);
    transparent_crc(p_419->g_203.s3, "p_419->g_203.s3", print_hash_value);
    transparent_crc(p_419->g_203.s4, "p_419->g_203.s4", print_hash_value);
    transparent_crc(p_419->g_203.s5, "p_419->g_203.s5", print_hash_value);
    transparent_crc(p_419->g_203.s6, "p_419->g_203.s6", print_hash_value);
    transparent_crc(p_419->g_203.s7, "p_419->g_203.s7", print_hash_value);
    transparent_crc(p_419->g_203.s8, "p_419->g_203.s8", print_hash_value);
    transparent_crc(p_419->g_203.s9, "p_419->g_203.s9", print_hash_value);
    transparent_crc(p_419->g_203.sa, "p_419->g_203.sa", print_hash_value);
    transparent_crc(p_419->g_203.sb, "p_419->g_203.sb", print_hash_value);
    transparent_crc(p_419->g_203.sc, "p_419->g_203.sc", print_hash_value);
    transparent_crc(p_419->g_203.sd, "p_419->g_203.sd", print_hash_value);
    transparent_crc(p_419->g_203.se, "p_419->g_203.se", print_hash_value);
    transparent_crc(p_419->g_203.sf, "p_419->g_203.sf", print_hash_value);
    transparent_crc(p_419->g_208.f0, "p_419->g_208.f0", print_hash_value);
    transparent_crc(p_419->g_208.f1, "p_419->g_208.f1", print_hash_value);
    transparent_crc(p_419->g_219, "p_419->g_219", print_hash_value);
    transparent_crc(p_419->g_220, "p_419->g_220", print_hash_value);
    transparent_crc(p_419->g_221, "p_419->g_221", print_hash_value);
    transparent_crc(p_419->g_222, "p_419->g_222", print_hash_value);
    transparent_crc(p_419->g_223, "p_419->g_223", print_hash_value);
    transparent_crc(p_419->g_251.f0, "p_419->g_251.f0", print_hash_value);
    transparent_crc(p_419->g_251.f1, "p_419->g_251.f1", print_hash_value);
    transparent_crc(p_419->g_251.f2, "p_419->g_251.f2", print_hash_value);
    transparent_crc(p_419->g_251.f3, "p_419->g_251.f3", print_hash_value);
    transparent_crc(p_419->g_251.f4, "p_419->g_251.f4", print_hash_value);
    transparent_crc(p_419->g_251.f5, "p_419->g_251.f5", print_hash_value);
    transparent_crc(p_419->g_251.f6, "p_419->g_251.f6", print_hash_value);
    transparent_crc(p_419->g_251.f7, "p_419->g_251.f7", print_hash_value);
    transparent_crc(p_419->g_288.x, "p_419->g_288.x", print_hash_value);
    transparent_crc(p_419->g_288.y, "p_419->g_288.y", print_hash_value);
    transparent_crc(p_419->g_311, "p_419->g_311", print_hash_value);
    transparent_crc(p_419->g_324.f0, "p_419->g_324.f0", print_hash_value);
    transparent_crc(p_419->g_324.f1, "p_419->g_324.f1", print_hash_value);
    transparent_crc(p_419->g_324.f2, "p_419->g_324.f2", print_hash_value);
    transparent_crc(p_419->g_324.f3, "p_419->g_324.f3", print_hash_value);
    transparent_crc(p_419->g_324.f4, "p_419->g_324.f4", print_hash_value);
    transparent_crc(p_419->g_324.f5, "p_419->g_324.f5", print_hash_value);
    transparent_crc(p_419->g_324.f6, "p_419->g_324.f6", print_hash_value);
    transparent_crc(p_419->g_324.f7, "p_419->g_324.f7", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_419->g_326[i][j][k], "p_419->g_326[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_419->g_333, "p_419->g_333", print_hash_value);
    transparent_crc(p_419->g_397.s0, "p_419->g_397.s0", print_hash_value);
    transparent_crc(p_419->g_397.s1, "p_419->g_397.s1", print_hash_value);
    transparent_crc(p_419->g_397.s2, "p_419->g_397.s2", print_hash_value);
    transparent_crc(p_419->g_397.s3, "p_419->g_397.s3", print_hash_value);
    transparent_crc(p_419->g_397.s4, "p_419->g_397.s4", print_hash_value);
    transparent_crc(p_419->g_397.s5, "p_419->g_397.s5", print_hash_value);
    transparent_crc(p_419->g_397.s6, "p_419->g_397.s6", print_hash_value);
    transparent_crc(p_419->g_397.s7, "p_419->g_397.s7", print_hash_value);
    transparent_crc(p_419->v_collective, "p_419->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 20; i++)
            transparent_crc(p_419->l_special_values[i], "p_419->l_special_values[i]", print_hash_value);
    transparent_crc(p_419->l_comm_values[get_linear_local_id()], "p_419->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_419->g_comm_values[get_linear_group_id() * 32 + get_linear_local_id()], "p_419->g_comm_values[get_linear_group_id() * 32 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
